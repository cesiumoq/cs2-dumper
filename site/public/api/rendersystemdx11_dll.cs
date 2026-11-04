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

using System;
using System.Runtime.InteropServices;

namespace Cs2.rendersystemdx11 {

    public enum RenderPrimitiveType_t : int {
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
    }
    public enum RenderBufferFlags_t : int {
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
    }
    public enum RsCullMode_t : int {
        RS_CULL_NONE = 0, 
        RS_CULL_BACK = 1, 
        RS_CULL_FRONT = 2, 
    }
    public enum RsComparison_t : int {
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
    }
    public enum RsFillMode_t : int {
        RS_FILL_SOLID = 0, 
        RS_FILL_WIREFRAME = 1, 
    }
    public enum RenderMultisampleType_t : int {
        RENDER_MULTISAMPLE_INVALID = 18446744073709551615, 
        RENDER_MULTISAMPLE_NONE = 0, 
        RENDER_MULTISAMPLE_2X = 1, 
        RENDER_MULTISAMPLE_4X = 2, 
        RENDER_MULTISAMPLE_6X = 3, 
        RENDER_MULTISAMPLE_8X = 4, 
        RENDER_MULTISAMPLE_16X = 5, 
        RENDER_MULTISAMPLE_TYPE_COUNT = 6, 
    }
    public enum InputLayoutVariation_t : int {
        INPUT_LAYOUT_VARIATION_DEFAULT = 0, 
        INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID = 1, 
        INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID_MORPH_VERT_ID = 2, 
        INPUT_LAYOUT_VARIATION_MAX = 3, 
    }
    public enum UpscalerType_t : int {
        UPSCALER_NONE = 0, 
        UPSCALER_AMD_FSR2 = 1, 
        UPSCALER_AMD_FSR3 = 2, 
        UPSCALER_NVIDIA_DLSS = 3, 
        UPSCALER_INTEL_XESS = 4, 
        UPSCALER_COUNT = 5, 
    }
    public enum RenderSlotType_t : int {
        RENDER_SLOT_INVALID = 18446744073709551615, 
        RENDER_SLOT_PER_VERTEX = 0, 
        RENDER_SLOT_PER_INSTANCE = 1, 
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct RsDepthStencilStateDesc_t {
        [FieldOffset(0x0)] public fixed byte m_bDepthTestEnable[0x2];
        [FieldOffset(0x2)] public fixed byte m_stencilState[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct SheetSequenceIntegerId_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct RsBlendStateDesc_t {
        [FieldOffset(0x0)] public fixed byte m_srcBlendBits[0x4];
        [FieldOffset(0x4)] public fixed byte m_destBlendBits[0x4];
        [FieldOffset(0x8)] public fixed byte m_srcBlendAlphaBits[0x4];
        [FieldOffset(0xC)] public fixed byte m_destBlendAlphaBits[0x4];
        [FieldOffset(0x10)] public fixed byte m_renderTargetWriteMaskBits[0x8];
        [FieldOffset(0x18)] public fixed byte m_blendOpAlphaBits[0x4];
        [FieldOffset(0x1C)] public fixed byte m_blendEnableBits[0x1];
        [FieldOffset(0x1D)] public fixed byte m_srgbWriteEnableBits[0x3];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC4)]
    public unsafe struct VsInputSignatureElement_t {
        [FieldOffset(0x0)] public fixed byte m_pName[0x40];
        [FieldOffset(0x40)] public fixed byte m_pSemantic[0x40];
        [FieldOffset(0x80)] public fixed byte m_pD3DSemanticName[0x40];
        [FieldOffset(0xC0)] public fixed byte m_nD3DSemanticIndex[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct RsRasterizerStateDesc_t {
        [FieldOffset(0x0)] public fixed byte m_nFillMode[0x1];
        [FieldOffset(0x1)] public fixed byte m_nCullMode[0x1];
        [FieldOffset(0x2)] public fixed byte m_bDepthClipEnable[0x1];
        [FieldOffset(0x3)] public fixed byte m_bMultisampleEnable[0x1];
        [FieldOffset(0x4)] public fixed byte m_nDepthBias[0x4];
        [FieldOffset(0x8)] public fixed byte m_flDepthBiasClamp[0x4];
        [FieldOffset(0xC)] public fixed byte m_flSlopeScaledDepthBias[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6)]
    public unsafe struct RsStencilStateDesc_t {
        [FieldOffset(0x0)] public fixed byte m_frontStencilFunc[0x4];
        [FieldOffset(0x4)] public fixed byte m_nStencilReadMask[0x1];
        [FieldOffset(0x5)] public fixed byte m_nStencilWriteMask[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct VsInputSignature_t {
        [FieldOffset(0x0)] public fixed byte m_elems[0x18];
        [FieldOffset(0x18)] public fixed byte m_depth_elems[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4C)]
    public unsafe struct RenderInputLayoutField_t {
        [FieldOffset(0x0)] public fixed byte m_pSemanticName[0x20];
        [FieldOffset(0x20)] public fixed byte m_nSemanticIndex[0x8];
        [FieldOffset(0x28)] public fixed byte m_nOffset[0x2];
        [FieldOffset(0x2A)] public fixed byte m_nSlot[0x1];
        [FieldOffset(0x2B)] public fixed byte m_nSlotType[0x1];
        [FieldOffset(0x2C)] public fixed byte m_szShaderSemantic[0x20];
    }
}