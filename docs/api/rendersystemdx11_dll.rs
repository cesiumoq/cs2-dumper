/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

#![allow(non_snake_case, non_camel_case_types, dead_code)]

pub mod rendersystemdx11 {

    pub type RenderPrimitiveType_t = i32;
    pub type RenderBufferFlags_t = i32;
    pub type RsCullMode_t = i32;
    pub type RsComparison_t = i32;
    pub type RsFillMode_t = i32;
    pub type RenderMultisampleType_t = i32;
    pub type InputLayoutVariation_t = i32;
    pub type UpscalerType_t = i32;
    pub type RenderSlotType_t = i32;
    #[repr(C)]
    pub struct RsDepthStencilStateDesc_t {
        pub m_bDepthTestEnable: [u8; 0x2], // 0x0
        pub m_stencilState: [u8; 0x6], // 0x2
    }
    #[repr(C)]
    pub struct SheetSequenceIntegerId_t {
        pub m_Value: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct RsBlendStateDesc_t {
        pub m_srcBlendBits: [u8; 0x4], // 0x0
        pub m_destBlendBits: [u8; 0x4], // 0x4
        pub m_srcBlendAlphaBits: [u8; 0x4], // 0x8
        pub m_destBlendAlphaBits: [u8; 0x4], // 0xC
        pub m_renderTargetWriteMaskBits: [u8; 0x8], // 0x10
        pub m_blendOpAlphaBits: [u8; 0x4], // 0x18
        pub m_blendEnableBits: [u8; 0x1], // 0x1C
        pub m_srgbWriteEnableBits: [u8; 0x3], // 0x1D
    }
    #[repr(C)]
    pub struct VsInputSignatureElement_t {
        pub m_pName: [u8; 0x40], // 0x0
        pub m_pSemantic: [u8; 0x40], // 0x40
        pub m_pD3DSemanticName: [u8; 0x40], // 0x80
        pub m_nD3DSemanticIndex: [u8; 0x4], // 0xC0
    }
    #[repr(C)]
    pub struct RsRasterizerStateDesc_t {
        pub m_nFillMode: [u8; 0x1], // 0x0
        pub m_nCullMode: [u8; 0x1], // 0x1
        pub m_bDepthClipEnable: [u8; 0x1], // 0x2
        pub m_bMultisampleEnable: [u8; 0x1], // 0x3
        pub m_nDepthBias: [u8; 0x4], // 0x4
        pub m_flDepthBiasClamp: [u8; 0x4], // 0x8
        pub m_flSlopeScaledDepthBias: [u8; 0x4], // 0xC
    }
    #[repr(C)]
    pub struct RsStencilStateDesc_t {
        pub m_frontStencilFunc: [u8; 0x4], // 0x0
        pub m_nStencilReadMask: [u8; 0x1], // 0x4
        pub m_nStencilWriteMask: [u8; 0x1], // 0x5
    }
    #[repr(C)]
    pub struct VsInputSignature_t {
        pub m_elems: [u8; 0x18], // 0x0
        pub m_depth_elems: [u8; 0x18], // 0x18
    }
    #[repr(C)]
    pub struct RenderInputLayoutField_t {
        pub m_pSemanticName: [u8; 0x20], // 0x0
        pub m_nSemanticIndex: [u8; 0x8], // 0x20
        pub m_nOffset: [u8; 0x2], // 0x28
        pub m_nSlot: [u8; 0x1], // 0x2A
        pub m_nSlotType: [u8; 0x1], // 0x2B
        pub m_szShaderSemantic: [u8; 0x20], // 0x2C
    }
}
