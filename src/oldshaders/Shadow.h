#ifndef NOSHADOW_H
#define NOSHADOW_H

#include <array>
#include <cstdint>

inline constexpr std::array<uint8_t, 504> NO_VS_PLAYER_SHADOW_SHADER = {
    0x44, 0x58, 0x42, 0x43, 0x58, 0xDA, 0xD0, 0x11, 0x83, 0xBB, 0xF7, 0xFC, 0xED, 0xD6, 0xF1, 0xE4, 
    0x48, 0x81, 0x73, 0x49, 0x01, 0x00, 0x00, 0x00, 0xF8, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
    0x2C, 0x00, 0x00, 0x00, 0xE8, 0x00, 0x00, 0x00, 0x58, 0x01, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4E, 
    0xB4, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x0F, 0x00, 0x00, 0x00, 0x8D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
    0x07, 0x00, 0x00, 0x00, 0x9D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xA6, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
    0x0F, 0x00, 0x00, 0x00, 0x42, 0x4C, 0x45, 0x4E, 0x44, 0x49, 0x4E, 0x44, 0x49, 0x43, 0x45, 0x53, 
    0x00, 0x4E, 0x4F, 0x52, 0x4D, 0x41, 0x4C, 0x00, 0x50, 0x4F, 0x53, 0x49, 0x54, 0x49, 0x4F, 0x4E, 
    0x00, 0x54, 0x45, 0x58, 0x43, 0x4F, 0x4F, 0x52, 0x44, 0x00, 0x42, 0x4C, 0x45, 0x4E, 0x44, 0x57, 
    0x45, 0x49, 0x47, 0x48, 0x54, 0x00, 0xAB, 0xAB, 0x4F, 0x53, 0x47, 0x4E, 0x68, 0x00, 0x00, 0x00, 
    0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 
    0x5C, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
    0x01, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x5C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x0C, 0x00, 0x00, 
    0x53, 0x56, 0x5F, 0x50, 0x4F, 0x53, 0x49, 0x54, 0x49, 0x4F, 0x4E, 0x00, 0x54, 0x45, 0x58, 0x43, 
    0x4F, 0x4F, 0x52, 0x44, 0x00, 0xAB, 0xAB, 0xAB, 0x53, 0x48, 0x45, 0x58, 0x98, 0x00, 0x00, 0x00, 
    0x50, 0x00, 0x01, 0x00, 0x26, 0x00, 0x00, 0x00, 0x6A, 0x08, 0x00, 0x01, 0x67, 0x00, 0x00, 0x04, 
    0xF2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 
    0xF2, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0x32, 0x20, 0x10, 0x00, 
    0x02, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x08, 0xF2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x08, 0xF2, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 
    0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x08, 0x32, 0x20, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 
    0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x01, 
};

inline constexpr std::array<uint8_t, 504> NO_VS_PROP_SHADOW_SHADER = {
    0x44, 0x58, 0x42, 0x43, 0x58, 0xDA, 0xD0, 0x11, 0x83, 0xBB, 0xF7, 0xFC, 0xED, 0xD6, 0xF1, 0xE4, 
    0x48, 0x81, 0x73, 0x49, 0x01, 0x00, 0x00, 0x00, 0xF8, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
    0x2C, 0x00, 0x00, 0x00, 0xE8, 0x00, 0x00, 0x00, 0x58, 0x01, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4E, 
    0xB4, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x0F, 0x00, 0x00, 0x00, 0x8D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
    0x07, 0x00, 0x00, 0x00, 0x9D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xA6, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
    0x0F, 0x00, 0x00, 0x00, 0x42, 0x4C, 0x45, 0x4E, 0x44, 0x49, 0x4E, 0x44, 0x49, 0x43, 0x45, 0x53, 
    0x00, 0x4E, 0x4F, 0x52, 0x4D, 0x41, 0x4C, 0x00, 0x50, 0x4F, 0x53, 0x49, 0x54, 0x49, 0x4F, 0x4E, 
    0x00, 0x54, 0x45, 0x58, 0x43, 0x4F, 0x4F, 0x52, 0x44, 0x00, 0x42, 0x4C, 0x45, 0x4E, 0x44, 0x57, 
    0x45, 0x49, 0x47, 0x48, 0x54, 0x00, 0xAB, 0xAB, 0x4F, 0x53, 0x47, 0x4E, 0x68, 0x00, 0x00, 0x00, 
    0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 
    0x5C, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
    0x01, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x5C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x0C, 0x00, 0x00, 
    0x53, 0x56, 0x5F, 0x50, 0x4F, 0x53, 0x49, 0x54, 0x49, 0x4F, 0x4E, 0x00, 0x54, 0x45, 0x58, 0x43, 
    0x4F, 0x4F, 0x52, 0x44, 0x00, 0xAB, 0xAB, 0xAB, 0x53, 0x48, 0x45, 0x58, 0x98, 0x00, 0x00, 0x00, 
    0x50, 0x00, 0x01, 0x00, 0x26, 0x00, 0x00, 0x00, 0x6A, 0x08, 0x00, 0x01, 0x67, 0x00, 0x00, 0x04, 
    0xF2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 
    0xF2, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0x32, 0x20, 0x10, 0x00, 
    0x02, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x08, 0xF2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x08, 0xF2, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 
    0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x08, 0x32, 0x20, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 
    0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x01, 
};
inline constexpr std::array<uint8_t, 276> NO_FS_SHADOW_SHADER = {
    0x44, 0x58, 0x42, 0x43, 0xE0, 0x39, 0x40, 0x0C, 0x7A, 0x0A, 0x02, 0xC7, 0x2C, 0x80, 0x57, 0xCA, 
    0x8E, 0x30, 0xF4, 0x17, 0x01, 0x00, 0x00, 0x00, 0x14, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
    0x2C, 0x00, 0x00, 0x00, 0x9C, 0x00, 0x00, 0x00, 0xD0, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4E, 
    0x68, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x0F, 0x00, 0x00, 0x00, 0x5C, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x5C, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
    0x03, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5F, 0x50, 0x4F, 0x53, 0x49, 0x54, 0x49, 0x4F, 0x4E, 0x00, 
    0x54, 0x45, 0x58, 0x43, 0x4F, 0x4F, 0x52, 0x44, 0x00, 0xAB, 0xAB, 0xAB, 0x4F, 0x53, 0x47, 0x4E, 
    0x2C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x0F, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5F, 0x54, 0x41, 0x52, 0x47, 0x45, 0x54, 0x00, 0xAB, 0xAB, 
    0x53, 0x48, 0x45, 0x58, 0x3C, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 
    0x6A, 0x08, 0x00, 0x01, 0x65, 0x00, 0x00, 0x03, 0xF2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x36, 0x00, 0x00, 0x08, 0xF2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x3E, 0x00, 0x00, 0x01, 
};
#endif