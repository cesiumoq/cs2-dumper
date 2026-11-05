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

namespace cs2::materialsystem2_dll {

enum class VertJustification_e : std::int32_t {
    VERT_JUSTIFICATION_TOP = 0,
    VERT_JUSTIFICATION_CENTER = 1,
    VERT_JUSTIFICATION_BOTTOM = 2,
    VERT_JUSTIFICATION_NONE = 3,
};

enum class LayoutPositionType_e : std::int32_t {
    LAYOUTPOSITIONTYPE_VIEWPORT_RELATIVE = 0,
    LAYOUTPOSITIONTYPE_FRACTIONAL = 1,
    LAYOUTPOSITIONTYPE_NONE = 2,
};

enum class ViewFadeMode_t : std::int32_t {
    VIEW_FADE_CONSTANT_COLOR = 0,
    VIEW_FADE_MODULATE = 1,
    VIEW_FADE_MOD2X = 2,
};

enum class BloomBlendMode_t : std::int32_t {
    BLOOM_BLEND_ADD = 0,
    BLOOM_BLEND_SCREEN = 1,
    BLOOM_BLEND_BLUR = 2,
};

enum class HorizJustification_e : std::int32_t {
    HORIZ_JUSTIFICATION_LEFT = 0,
    HORIZ_JUSTIFICATION_CENTER = 1,
    HORIZ_JUSTIFICATION_RIGHT = 2,
    HORIZ_JUSTIFICATION_NONE = 3,
};

struct MaterialParam_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x8]; // 0x0 
};

struct MaterialParamVector_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x10]; // 0x8 
};

struct MaterialParamString_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
};

struct PostProcessingResource_t {
    static constexpr std::size_t size = 0x158;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x3c]; // 0x4 
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x88]; // 0x44 
    std::uint8_t _[0x4]; // 0xcc 
    std::uint8_t _[0x24]; // 0xd0 
    std::uint8_t _[0x4]; // 0xf4 
    std::uint8_t _[0x14]; // 0xf8 
    std::uint8_t _[0x4]; // 0x10c 
    std::uint8_t _[0x10]; // 0x110 
    std::uint8_t _[0x1]; // 0x120 
    std::uint8_t _[0x3]; // 0x121 
    std::uint8_t _[0x20]; // 0x124 
    std::uint8_t _[0x4]; // 0x144 
    std::uint8_t _[0x10]; // 0x148 
};

struct MaterialParamInt_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
};

struct PostProcessingVignetteParameters_t {
    static constexpr std::size_t size = 0x24;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x8]; // 0x4 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0xc]; // 0x18 
};

struct PostProcessingLocalContrastParameters_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
};

struct PostProcessingTonemapParameters_t {
    static constexpr std::size_t size = 0x3c;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
};

struct PostProcessingFogScatteringParameters_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
};

struct MaterialParamBuffer_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x10]; // 0x8 
};

struct MaterialResourceData_t {
    static constexpr std::size_t size = 0x130;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x18]; // 0x28 
    std::uint8_t _[0x18]; // 0x40 
    std::uint8_t _[0x18]; // 0x58 
    std::uint8_t _[0x18]; // 0x70 
    std::uint8_t _[0x18]; // 0x88 
    std::uint8_t _[0x18]; // 0xa0 
    std::uint8_t _[0x18]; // 0xb8 
    std::uint8_t _[0x18]; // 0xd0 
    std::uint8_t _[0x18]; // 0xe8 
    std::uint8_t _[0x18]; // 0x100 
    std::uint8_t _[0x18]; // 0x118 
};

struct PostProcessingBloomParameters_t {
    static constexpr std::size_t size = 0x88;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x14]; // 0x38 
    std::uint8_t _[0x3c]; // 0x4c 
};

struct MaterialParamFloat_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
};

struct PostProcessingLocalExposureParameters_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
};

struct MaterialParamTexture_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
};

} // namespace