#ifndef UTIL_H
#define UTIL_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <atomic>
#include <chrono>
#include <condition_variable>
#include <exception>
#include <functional>
#include <mutex>

#include "MinHook.h"

namespace atfix {

/**
 * \brief SRW-based mutex implementation
 *
 * Drop-in replacement for \c std::mutex that uses Win32
 * SRW locks, which are implemented with \c futex in wine.
 */
class mutex {

public:

  using native_handle_type = PSRWLOCK;

  mutex() { }

  mutex(const mutex&) = delete;
  mutex& operator = (const mutex&) = delete;

  void lock() {
    AcquireSRWLockExclusive(&m_lock);
  }

  void unlock() {
    ReleaseSRWLockExclusive(&m_lock);
  }

  bool try_lock() {
    return TryAcquireSRWLockExclusive(&m_lock);
  }

  native_handle_type native_handle() {
    return &m_lock;
  }

private:

  SRWLOCK m_lock = SRWLOCK_INIT;

};


/**
  * \brief Recursive mutex implementation
  *
  * Drop-in replacement for \c std::recursive_mutex that
  * uses Win32 critical sections.
  */
class recursive_mutex {

public:

  using native_handle_type = PCRITICAL_SECTION;

  recursive_mutex() {
    InitializeCriticalSection(&m_lock);
  }

  ~recursive_mutex() {
    DeleteCriticalSection(&m_lock);
  }

  recursive_mutex(const recursive_mutex&) = delete;
  recursive_mutex& operator = (const recursive_mutex&) = delete;

  void lock() {
    EnterCriticalSection(&m_lock);
  }

  void unlock() {
    LeaveCriticalSection(&m_lock);
  }

  bool try_lock() {
    return TryEnterCriticalSection(&m_lock);
  }

  native_handle_type native_handle() {
    return &m_lock;
  }

private:

  CRITICAL_SECTION m_lock;

};


/**
 * \brief SRW-based condition variable implementation
 *
 * Drop-in replacement for \c std::condition_variable that
 * uses Win32 condition variables on SRW locks.
 */
class condition_variable {

public:

  using native_handle_type = PCONDITION_VARIABLE;

  condition_variable() {
    InitializeConditionVariable(&m_cond);
  }

  condition_variable(condition_variable&) = delete;

  condition_variable& operator = (condition_variable&) = delete;

  void notify_one() {
    WakeConditionVariable(&m_cond);
  }

  void notify_all() {
    WakeAllConditionVariable(&m_cond);
  }

  void wait(std::unique_lock<mutex>& lock) {
    auto srw = lock.mutex()->native_handle();
    SleepConditionVariableSRW(&m_cond, srw, INFINITE, 0);
  }

  template<typename Predicate>
  void wait(std::unique_lock<mutex>& lock, Predicate pred) {
    while (!pred())
      wait(lock);
  }

  template<typename Clock, typename Duration>
  std::cv_status wait_until(std::unique_lock<mutex>& lock, const std::chrono::time_point<Clock, Duration>& time) {
    auto now = Clock::now();

    return (now < time)
      ? wait_for(lock, now - time)
      : std::cv_status::timeout;
  }

  template<typename Clock, typename Duration, typename Predicate>
  bool wait_until(std::unique_lock<mutex>& lock, const std::chrono::time_point<Clock, Duration>& time, Predicate pred) {
    if (pred())
      return true;

    auto now = Clock::now();
    return now < time && wait_for(lock, now - time, pred);
  }

  template<typename Rep, typename Period>
  std::cv_status wait_for(std::unique_lock<mutex>& lock, const std::chrono::duration<Rep, Period>& timeout) {
    auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(timeout);
    auto srw = lock.mutex()->native_handle();

    return SleepConditionVariableSRW(&m_cond, srw, ms.count(), 0)
      ? std::cv_status::no_timeout
      : std::cv_status::timeout;
  }

  template<typename Rep, typename Period, typename Predicate>
  bool wait_for(std::unique_lock<mutex>& lock, const std::chrono::duration<Rep, Period>& timeout, Predicate pred) {
    bool result = pred();

    if (!result && wait_for(lock, timeout) == std::cv_status::no_timeout)
      result = pred();

    return result;
  }

  native_handle_type native_handle() {
    return &m_cond;
  }

private:

  CONDITION_VARIABLE m_cond;

};

}
#endif