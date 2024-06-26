#ifndef IMPL_H
#define IMPL_H

#include <bit>
#include <cstdint>
#include <d3d11.h>

#include "log.h"

namespace atfix {

void hookDevice(ID3D11Device* pDevice);
ID3D11DeviceContext* hookContext(ID3D11DeviceContext* pContext);
inline void* SettingsAddress = nullptr;

/* lives in main.cpp */
extern Log log;

}

#endif