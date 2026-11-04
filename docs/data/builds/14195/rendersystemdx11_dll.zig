/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

pub const rendersystemdx11 = struct {

    pub const RsDepthStencilStateDesc_t = extern struct {
        m_bDepthTestEnable: [0x2]u8, // 0x0
        m_stencilState: [0x6]u8, // 0x2
    };
    pub const SheetSequenceIntegerId_t = extern struct {
        m_Value: [0x4]u8, // 0x0
    };
    pub const RsBlendStateDesc_t = extern struct {
        m_srcBlendBits: [0x4]u8, // 0x0
        m_destBlendBits: [0x4]u8, // 0x4
        m_srcBlendAlphaBits: [0x4]u8, // 0x8
        m_destBlendAlphaBits: [0x4]u8, // 0xC
        m_renderTargetWriteMaskBits: [0x8]u8, // 0x10
        m_blendOpAlphaBits: [0x4]u8, // 0x18
        m_blendEnableBits: [0x1]u8, // 0x1C
        m_srgbWriteEnableBits: [0x3]u8, // 0x1D
    };
    pub const VsInputSignatureElement_t = extern struct {
        m_pName: [0x40]u8, // 0x0
        m_pSemantic: [0x40]u8, // 0x40
        m_pD3DSemanticName: [0x40]u8, // 0x80
        m_nD3DSemanticIndex: [0x4]u8, // 0xC0
    };
    pub const RsRasterizerStateDesc_t = extern struct {
        m_nFillMode: [0x1]u8, // 0x0
        m_nCullMode: [0x1]u8, // 0x1
        m_bDepthClipEnable: [0x1]u8, // 0x2
        m_bMultisampleEnable: [0x1]u8, // 0x3
        m_nDepthBias: [0x4]u8, // 0x4
        m_flDepthBiasClamp: [0x4]u8, // 0x8
        m_flSlopeScaledDepthBias: [0x4]u8, // 0xC
    };
    pub const RsStencilStateDesc_t = extern struct {
        m_frontStencilFunc: [0x4]u8, // 0x0
        m_nStencilReadMask: [0x1]u8, // 0x4
        m_nStencilWriteMask: [0x1]u8, // 0x5
    };
    pub const VsInputSignature_t = extern struct {
        m_elems: [0x18]u8, // 0x0
        m_depth_elems: [0x18]u8, // 0x18
    };
    pub const RenderInputLayoutField_t = extern struct {
        m_pSemanticName: [0x20]u8, // 0x0
        m_nSemanticIndex: [0x8]u8, // 0x20
        m_nOffset: [0x2]u8, // 0x28
        m_nSlot: [0x1]u8, // 0x2A
        m_nSlotType: [0x1]u8, // 0x2B
        m_szShaderSemantic: [0x20]u8, // 0x2C
    };
};
