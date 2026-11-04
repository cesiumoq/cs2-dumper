/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Total Offsets   : 202
/*  Dumped At       : 22:50 04/11/2026 (GMT)
/*  Dumped In       : 1,7s
*/

/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

#pragma once
#include <cstddef>
#include <cstdint>

namespace cs2::rendersystemdx11 {

enum class RenderPrimitiveType_t : std::int32_t {
    RENDER_PRIM_POINTS = 0,
    RENDER_PRIM_LINES = 1,
    RENDER_PRIM_LINES_WITH_ADJACENCY = 2,
    RENDER_PRIM_LINE_STRIP = 3,
    RENDER_PRIM_LINE_STRIP_WITH_ADJACENCY = 4,
    RENDER_PRIM_TRIANGLES = 5,
    RENDER_PRIM_TRIANGLES_WITH_ADJACENCY = 6,
    RENDER_PRIM_TRIANGLE_STRIP = 7,
    RENDER_PRIM_TRIANGLE_STRIP_WITH_ADJACENCY = 8,
    RENDER_PRIM_INSTANCED_QUADS = 9,
    RENDER_PRIM_HETEROGENOUS = 10,
    RENDER_PRIM_COMPUTE_SHADER = 11,
    RENDER_PRIM_MESH_SHADER = 12,
    RENDER_PRIM_TYPE_COUNT = 13,
};

enum class RenderBufferFlags_t : std::int32_t {
    RENDER_BUFFER_USAGE_NONE = 0,
    RENDER_BUFFER_USAGE_VERTEX_BUFFER = 1,
    RENDER_BUFFER_USAGE_INDEX_BUFFER = 2,
    RENDER_BUFFER_USAGE_SHADER_RESOURCE = 4,
    RENDER_BUFFER_USAGE_UNORDERED_ACCESS = 8,
    RENDER_BUFFER_BYTEADDRESS_BUFFER = 16,
    RENDER_BUFFER_STRUCTURED_BUFFER = 32,
    RENDER_BUFFER_UAV_DRAW_INDIRECT_ARGS = 256,
    RENDER_BUFFER_ACCELERATION_STRUCTURE = 512,
    RENDER_BUFFER_SHADER_BINDING_TABLE = 1024,
    RENDER_BUFFER_POOL_ALLOCATED = 2048,
    RENDER_BUFFER_USAGE_CONDITIONAL_RENDERING = 4096,
    RENDER_BUFFER_IMMOVABLE_ALLOCATION = 8192,
    RENDER_BUFFER_DYNAMIC_ZERO_COPY = 16384,
};

enum class RsCullMode_t : std::int32_t {
    RS_CULL_NONE = 0,
    RS_CULL_BACK = 1,
    RS_CULL_FRONT = 2,
};

enum class RsComparison_t : std::int32_t {
    RS_CMP_NEVER = 0,
    RS_CMP_LESS = 1,
    RS_CMP_EQUAL = 2,
    RS_CMP_LESS_EQUAL = 3,
    RS_CMP_GREATER = 4,
    RS_CMP_NOT_EQUAL = 5,
    RS_CMP_GREATER_EQUAL = 6,
    RS_CMP_ALWAYS = 7,
    RS_CMP_FUNC_MASK = 7,
    RS_CMP_CLOSER_FARTHER_FLAG = 8,
    RS_CMP_CLOSER = 9,
    RS_CMP_CLOSER_EQUAL = 11,
    RS_CMP_FARTHER = 12,
    RS_CMP_FARTHER_EQUAL = 14,
};

enum class RsFillMode_t : std::int32_t {
    RS_FILL_SOLID = 0,
    RS_FILL_WIREFRAME = 1,
};

enum class RenderMultisampleType_t : std::int32_t {
    RENDER_MULTISAMPLE_INVALID = 18446744073709551615,
    RENDER_MULTISAMPLE_NONE = 0,
    RENDER_MULTISAMPLE_2X = 1,
    RENDER_MULTISAMPLE_4X = 2,
    RENDER_MULTISAMPLE_6X = 3,
    RENDER_MULTISAMPLE_8X = 4,
    RENDER_MULTISAMPLE_16X = 5,
    RENDER_MULTISAMPLE_TYPE_COUNT = 6,
};

enum class InputLayoutVariation_t : std::int32_t {
    INPUT_LAYOUT_VARIATION_DEFAULT = 0,
    INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID = 1,
    INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID_MORPH_VERT_ID = 2,
    INPUT_LAYOUT_VARIATION_MAX = 3,
};

enum class UpscalerType_t : std::int32_t {
    UPSCALER_NONE = 0,
    UPSCALER_AMD_FSR2 = 1,
    UPSCALER_AMD_FSR3 = 2,
    UPSCALER_NVIDIA_DLSS = 3,
    UPSCALER_INTEL_XESS = 4,
    UPSCALER_COUNT = 5,
};

enum class RenderSlotType_t : std::int32_t {
    RENDER_SLOT_INVALID = 18446744073709551615,
    RENDER_SLOT_PER_VERTEX = 0,
    RENDER_SLOT_PER_INSTANCE = 1,
};

struct RsDepthStencilStateDesc_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_bDepthTestEnable[0x2]; // 0x0 bitfield:1
    std::uint8_t m_stencilState[0x6]; // 0x2 RsStencilStateDesc_t
};

struct SheetSequenceIntegerId_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_Value[0x4]; // 0x0 uint32
};

struct RsBlendStateDesc_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_srcBlendBits[0x4]; // 0x0 uint32
    std::uint8_t m_destBlendBits[0x4]; // 0x4 uint32
    std::uint8_t m_srcBlendAlphaBits[0x4]; // 0x8 uint32
    std::uint8_t m_destBlendAlphaBits[0x4]; // 0xC uint32
    std::uint8_t m_renderTargetWriteMaskBits[0x8]; // 0x10 uint32
    std::uint8_t m_blendOpAlphaBits[0x4]; // 0x18 uint32
    std::uint8_t m_blendEnableBits[0x1]; // 0x1C uint8
    std::uint8_t m_srgbWriteEnableBits[0x3]; // 0x1D uint8
};

struct VsInputSignatureElement_t {
    static constexpr std::size_t size = 0xC4;
    std::uint8_t m_pName[0x40]; // 0x0 char[64]
    std::uint8_t m_pSemantic[0x40]; // 0x40 char[64]
    std::uint8_t m_pD3DSemanticName[0x40]; // 0x80 char[64]
    std::uint8_t m_nD3DSemanticIndex[0x4]; // 0xC0 int32
};

struct RsRasterizerStateDesc_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_nFillMode[0x1]; // 0x0 RsFillMode_t
    std::uint8_t m_nCullMode[0x1]; // 0x1 RsCullMode_t
    std::uint8_t m_bDepthClipEnable[0x1]; // 0x2 bool
    std::uint8_t m_bMultisampleEnable[0x1]; // 0x3 bool
    std::uint8_t m_nDepthBias[0x4]; // 0x4 int32
    std::uint8_t m_flDepthBiasClamp[0x4]; // 0x8 float32
    std::uint8_t m_flSlopeScaledDepthBias[0x4]; // 0xC float32
};

struct RsStencilStateDesc_t {
    static constexpr std::size_t size = 0x6;
    std::uint8_t m_frontStencilFunc[0x4]; // 0x0 bitfield:4
    std::uint8_t m_nStencilReadMask[0x1]; // 0x4 uint8
    std::uint8_t m_nStencilWriteMask[0x1]; // 0x5 uint8
};

struct VsInputSignature_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_elems[0x18]; // 0x0 CUtlVector<VsInputSignatureElement_t>
    std::uint8_t m_depth_elems[0x18]; // 0x18 CUtlVector<VsInputSignatureElement_t>
};

struct RenderInputLayoutField_t {
    static constexpr std::size_t size = 0x4C;
    std::uint8_t m_pSemanticName[0x20]; // 0x0 char[32]
    std::uint8_t m_nSemanticIndex[0x8]; // 0x20 int8
    std::uint8_t m_nOffset[0x2]; // 0x28 int16
    std::uint8_t m_nSlot[0x1]; // 0x2A int8
    std::uint8_t m_nSlotType[0x1]; // 0x2B RenderSlotType_t
    std::uint8_t m_szShaderSemantic[0x20]; // 0x2C char[32]
};

} // namespace