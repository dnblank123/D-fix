#ifndef TERRAINOLD_H
#define TERRAINOLD_H

#include <array>
#include <cstdint>

inline constexpr std::array<uint8_t, 2296> LOW_FS_TERRAINOLD_SHADER = {
    0x44, 0x58, 0x42, 0x43, 0xA3, 0xF7, 0x40, 0x12, 0x76, 0x99, 0x2A, 0x19, 0x4F, 0x75, 0x01, 0xCD, 
    0x8B, 0xCD, 0xFE, 0xAC, 0x01, 0x00, 0x00, 0x00, 0xF8, 0x08, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
    0x2C, 0x00, 0x00, 0x00, 0x1C, 0x02, 0x00, 0x00, 0x68, 0x02, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4E, 
    0xE8, 0x01, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x88, 0x01, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x0F, 0x00, 0x00, 0x00, 0x94, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0xA1, 0x01, 0x00, 0x00, 
    0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
    0x0E, 0x00, 0x00, 0x00, 0xAA, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0F, 0x0B, 0x00, 0x00, 0xAA, 0x01, 0x00, 0x00, 
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
    0x0F, 0x08, 0x00, 0x00, 0xAA, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0xB0, 0x01, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 
    0x01, 0x01, 0x00, 0x00, 0xA1, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x03, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x06, 0x06, 0x00, 0x00, 0xBB, 0x01, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 
    0x0F, 0x0F, 0x00, 0x00, 0xA1, 0x01, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0xA1, 0x01, 0x00, 0x00, 
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 
    0x0F, 0x00, 0x00, 0x00, 0xA1, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x03, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x0F, 0x03, 0x00, 0x00, 0xA1, 0x01, 0x00, 0x00, 
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 
    0x0F, 0x03, 0x00, 0x00, 0xA1, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x03, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0xC5, 0x01, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 
    0x07, 0x00, 0x00, 0x00, 0xD5, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x03, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5F, 0x50, 
    0x4F, 0x53, 0x49, 0x54, 0x49, 0x4F, 0x4E, 0x00, 0x43, 0x4C, 0x49, 0x50, 0x44, 0x49, 0x53, 0x54, 
    0x41, 0x4E, 0x43, 0x45, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4F, 0x4F, 0x52, 0x44, 0x00, 0x43, 0x4F, 
    0x4C, 0x4F, 0x52, 0x00, 0x44, 0x45, 0x50, 0x54, 0x48, 0x56, 0x41, 0x4C, 0x55, 0x45, 0x00, 0x46, 
    0x4F, 0x47, 0x46, 0x41, 0x43, 0x54, 0x4F, 0x52, 0x00, 0x57, 0x4F, 0x52, 0x4C, 0x44, 0x56, 0x49, 
    0x45, 0x57, 0x4E, 0x4F, 0x52, 0x4D, 0x41, 0x4C, 0x00, 0x57, 0x4F, 0x52, 0x4C, 0x44, 0x56, 0x49, 
    0x45, 0x57, 0x50, 0x4F, 0x53, 0x49, 0x54, 0x49, 0x4F, 0x4E, 0x00, 0xAB, 0x4F, 0x53, 0x47, 0x4E, 
    0x44, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x0F, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5F, 0x54, 
    0x41, 0x52, 0x47, 0x45, 0x54, 0x00, 0xAB, 0xAB, 0x53, 0x48, 0x45, 0x58, 0x88, 0x06, 0x00, 0x00, 
    0x50, 0x00, 0x00, 0x00, 0xA2, 0x01, 0x00, 0x00, 0x6A, 0x08, 0x00, 0x01, 0x59, 0x00, 0x00, 0x04, 
    0x46, 0x8E, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x5A, 0x00, 0x00, 0x03, 
    0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5A, 0x00, 0x00, 0x03, 0x00, 0x60, 0x10, 0x00, 
    0x01, 0x00, 0x00, 0x00, 0x5A, 0x00, 0x00, 0x03, 0x00, 0x60, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 
    0x5A, 0x00, 0x00, 0x03, 0x00, 0x60, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x5A, 0x00, 0x00, 0x03, 
    0x00, 0x60, 0x10, 0x00, 0x06, 0x00, 0x00, 0x00, 0x58, 0x18, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x58, 0x18, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 
    0x01, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x58, 0x18, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 
    0x02, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x58, 0x18, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 
    0x03, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x58, 0x18, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 
    0x06, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0x12, 0x10, 0x10, 0x00, 
    0x01, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0xB2, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 
    0x62, 0x10, 0x00, 0x03, 0x82, 0x10, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 
    0xF2, 0x10, 0x10, 0x00, 0x04, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0x12, 0x10, 0x10, 0x00, 
    0x05, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0x62, 0x10, 0x10, 0x00, 0x05, 0x00, 0x00, 0x00, 
    0x62, 0x10, 0x00, 0x03, 0xF2, 0x10, 0x10, 0x00, 0x06, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 
    0x32, 0x10, 0x10, 0x00, 0x09, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 
    0x0A, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xF2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x65, 0x00, 0x00, 0x03, 0xF2, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 
    0x05, 0x00, 0x00, 0x00, 0x31, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x0A, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x0D, 0x00, 0x04, 0x03, 0x0A, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 
    0x32, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0x15, 0x10, 0x00, 0x05, 0x00, 0x00, 0x00, 
    0x86, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0B, 
    0x32, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD6, 0x85, 0x20, 0x80, 0x41, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0xA6, 0x1A, 0x10, 0x00, 0x05, 0x00, 0x00, 0x00, 
    0x46, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x08, 0x42, 0x00, 0x10, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x16, 0x85, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 
    0x96, 0x15, 0x10, 0x00, 0x05, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0x52, 0x00, 0x10, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x06, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x80, 0x20, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x8B, 0xC2, 0x00, 0x00, 0x80, 
    0x43, 0x55, 0x15, 0x00, 0x72, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x86, 0x00, 0x10, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x46, 0x7E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x08, 0x82, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xB6, 0x8F, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x96, 0x15, 0x10, 0x00, 
    0x05, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0x32, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xD6, 0x05, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0x85, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x18, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x8B, 0xC2, 0x00, 0x00, 0x80, 0x43, 0x55, 0x15, 0x00, 
    0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x46, 0x7E, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 
    0x38, 0x00, 0x00, 0x08, 0x82, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1A, 0x10, 0x10, 0x00, 
    0x05, 0x00, 0x00, 0x00, 0x0A, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 
    0x32, 0x00, 0x00, 0x0B, 0x12, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1A, 0x80, 0x20, 0x80, 
    0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x2A, 0x10, 0x10, 0x00, 
    0x05, 0x00, 0x00, 0x00, 0x3A, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x08, 
    0x22, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x16, 0x85, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x17, 0x00, 0x00, 0x00, 0x96, 0x15, 0x10, 0x00, 0x05, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 
    0x32, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 
    0xA6, 0x8A, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x8B, 
    0xC2, 0x00, 0x00, 0x80, 0x43, 0x55, 0x15, 0x00, 0x72, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 
    0x46, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x7E, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 
    0x00, 0x60, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x09, 0x82, 0x00, 0x10, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x1A, 0x10, 0x10, 0x00, 0x09, 0x00, 0x00, 0x00, 0x3A, 0x80, 0x20, 0x80, 
    0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0A, 
    0x12, 0x00, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2A, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x17, 0x00, 0x00, 0x00, 0x0A, 0x10, 0x10, 0x00, 0x09, 0x00, 0x00, 0x00, 0x3A, 0x00, 0x10, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x08, 0x22, 0x00, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 
    0xB6, 0x8F, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 
    0x09, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x8B, 0xC2, 0x00, 0x00, 0x80, 0x43, 0x55, 0x15, 0x00, 
    0x72, 0x00, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x46, 0x00, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 
    0x46, 0x7E, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 
    0x38, 0x00, 0x00, 0x08, 0x82, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x10, 0x10, 0x00, 
    0x0A, 0x00, 0x00, 0x00, 0x2A, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 
    0x32, 0x00, 0x00, 0x0B, 0x12, 0x00, 0x10, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1A, 0x10, 0x10, 0x00, 
    0x0A, 0x00, 0x00, 0x00, 0x3A, 0x80, 0x20, 0x80, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x17, 0x00, 0x00, 0x00, 0x3A, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x08, 
    0x22, 0x00, 0x10, 0x00, 0x04, 0x00, 0x00, 0x00, 0xB6, 0x8F, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x17, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x8B, 
    0xC2, 0x00, 0x00, 0x80, 0x43, 0x55, 0x15, 0x00, 0x72, 0x00, 0x10, 0x00, 0x04, 0x00, 0x00, 0x00, 
    0x46, 0x00, 0x10, 0x00, 0x04, 0x00, 0x00, 0x00, 0x46, 0x7E, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 
    0x00, 0x60, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x72, 0x00, 0x10, 0x00, 
    0x03, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x80, 
    0x41, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x09, 0x72, 0x00, 0x10, 0x00, 
    0x03, 0x00, 0x00, 0x00, 0xF6, 0x1F, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 
    0x03, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 
    0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, 
    0x01, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x09, 
    0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF6, 0x1F, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 
    0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x08, 0x72, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x80, 
    0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 
    0x32, 0x00, 0x00, 0x09, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 
    0x01, 0x00, 0x00, 0x00, 0x06, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x72, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 
    0x46, 0x02, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x09, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x56, 0x15, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 
    0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x8B, 0xC2, 0x00, 0x00, 0x80, 
    0x43, 0x55, 0x15, 0x00, 0x72, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 
    0x06, 0x00, 0x00, 0x00, 0x46, 0x7E, 0x10, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 
    0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x72, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 
    0x46, 0x02, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x80, 0x41, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0A, 0x72, 0x00, 0x10, 0x00, 
    0x01, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0xF6, 0x1F, 0x10, 0x00, 
    0x06, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x32, 0x00, 0x00, 0x0A, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x12, 0x10, 0x00, 
    0x04, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x80, 
    0x41, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x09, 0x72, 0x20, 0x10, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0xA6, 0x1A, 0x10, 0x00, 0x06, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 
    0x82, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3A, 0x10, 0x10, 0x00, 0x04, 0x00, 0x00, 0x00, 
    0x36, 0x00, 0x00, 0x05, 0x12, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0A, 0x10, 0x10, 0x00, 
    0x05, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x08, 0xE2, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 
    0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x01, 
};

#endif