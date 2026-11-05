/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Total Offsets   : 202
/*  Dumped At       : 13:00 05/11/2026 (GMT)
/*  Dumped In       : 1,2s
*/

/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

#pragma once
#include <cstddef>
#include <cstdint>

namespace cs2::steamaudio_dll {

struct SteamAudioReverbClusteringSettings_t {
    static constexpr std::size_t size = 0xc;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
};

struct SteamAudioCustomDataDimensionsSettings_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
};

struct SteamAudioPathSettings_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
};

struct CSteamAudioAmbisonicsField {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x18]; // 0x0 
};

struct CSteamAudioBakedPathingData {
    static constexpr std::size_t size = 0xb8;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0xa8]; // 0x10 
};

struct SteamAudioReverbSettings_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
};

struct CSteamAudioProbeData {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x8]; // 0x0 
};

struct SteamAudioReverbCompressionSettings_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct CSteamAudioBakedMaterialsData {
    static constexpr std::size_t size = 0x38;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x18]; // 0x8 
    std::uint8_t _[0x18]; // 0x20 
};

struct CSteamAudioBakedOcclusionData {
    static constexpr std::size_t size = 0x60;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x18]; // 0x18 
    std::uint8_t _[0x18]; // 0x30 
    std::uint8_t _[0x18]; // 0x48 
};

struct CSteamAudioBakedReverbData {
    static constexpr std::size_t size = 0x228;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x10]; // 0x8 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x58]; // 0x20 
    std::uint8_t _[0x14]; // 0x78 
    std::uint8_t _[0xc]; // 0x8c 
    std::uint8_t _[0x8]; // 0x98 
    std::uint8_t _[0x8]; // 0xa0 
    std::uint8_t _[0x18]; // 0xa8 
    std::uint8_t _[0x60]; // 0xc0 
    std::uint8_t _[0x60]; // 0x120 
    std::uint8_t _[0xa8]; // 0x180 
};

struct CSteamAudioProbeLineSegment {
    static constexpr std::size_t size = 0x48;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0xc]; // 0xc 
    std::uint8_t _[0x18]; // 0x18 
    std::uint8_t _[0x18]; // 0x30 
};

struct SteamAudioCustomDataOcclusionSettings_t {
    static constexpr std::size_t size = 0xc;
    std::uint8_t _[0x1]; // 0x0 
    std::uint8_t _[0x3]; // 0x1 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
};

struct CSteamAudioBakedDimensionsData {
    static constexpr std::size_t size = 0x128;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x18]; // 0x20 
    std::uint8_t _[0x18]; // 0x38 
    std::uint8_t _[0x18]; // 0x50 
    std::uint8_t _[0x18]; // 0x68 
    std::uint8_t _[0xa8]; // 0x80 
};

struct CSteamAudioSceneData {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
};

struct CSteamAudioProbeGrid {
    static constexpr std::size_t size = 0x58;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x18]; // 0x28 
    std::uint8_t _[0x18]; // 0x40 
};

struct CSteamAudioCompressedReverb {
    static constexpr std::size_t size = 0x60;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x18]; // 0x28 
    std::uint8_t _[0x18]; // 0x40 
    std::uint8_t _[0x8]; // 0x58 
};

} // namespace