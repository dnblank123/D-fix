#ifndef RADIALBLUR_H
#define RADIALBLUR_H

#include <array>
#include <cstdint>

inline constexpr std::array<uint8_t, 528> NO_RADIALBLUR_SHADER = {
    0x44, 0x58, 0x42, 0x43, 0xCD, 0x15, 0x2A, 0x55, 0xE2, 0x80, 0xD3, 0xF7, 0x59, 0xB1, 0xD7, 0x4E,
    0x49, 0x5E, 0x1E, 0xF4, 0x01, 0x00, 0x00, 0x00, 0x10, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x2C, 0x00, 0x00, 0x00, 0xB4, 0x00, 0x00, 0x00, 0xE8, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4E,
    0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0F, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x0F, 0x03, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5F, 0x50,
    0x4F, 0x53, 0x49, 0x54, 0x49, 0x4F, 0x4E, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4F, 0x4F, 0x52, 0x44,
    0x00, 0xAB, 0xAB, 0xAB, 0x4F, 0x53, 0x47, 0x4E, 0x2C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5F, 0x54,
    0x41, 0x52, 0x47, 0x45, 0x54, 0x00, 0xAB, 0xAB, 0x53, 0x48, 0x45, 0x58, 0x20, 0x01, 0x00, 0x00,
    0x50, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x6A, 0x08, 0x00, 0x01, 0x5A, 0x00, 0x00, 0x03,
    0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x18, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xF2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x68, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x8B, 0xC2, 0x00, 0x00, 0x80,
    0x43, 0x55, 0x15, 0x00, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x46, 0x7E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x08, 0x72, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x82, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x01, 0x40, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x01, 0x03, 0x00, 0x00, 0x03,
    0x3A, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x72, 0x00, 0x10, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x07, 0x82, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x3A, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
    0x16, 0x00, 0x00, 0x01, 0x38, 0x00, 0x00, 0x0A, 0x72, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x46, 0x02, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3D,
    0x00, 0x00, 0x80, 0x3D, 0x00, 0x00, 0x80, 0x3D, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x01,
};

#endif