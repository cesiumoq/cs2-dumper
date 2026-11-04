/* cesium dumper | generated from live schema */
pub const rendersystemdx11_dll = struct {
    pub const RsDepthStencilStateDesc_t = extern struct {
        _: [0x2]u8, // 0x0
        _: [0x6]u8, // 0x2
    };
    pub const SheetSequenceIntegerId_t = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const RsBlendStateDesc_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x8]u8, // 0x10
        _: [0x4]u8, // 0x18
        _: [0x1]u8, // 0x1c
        _: [0x3]u8, // 0x1d
    };
    pub const VsInputSignatureElement_t = extern struct {
        _: [0x40]u8, // 0x0
        _: [0x40]u8, // 0x40
        _: [0x40]u8, // 0x80
        _: [0x4]u8, // 0xc0
    };
    pub const RsRasterizerStateDesc_t = extern struct {
        _: [0x1]u8, // 0x0
        _: [0x1]u8, // 0x1
        _: [0x1]u8, // 0x2
        _: [0x1]u8, // 0x3
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
    };
    pub const RsStencilStateDesc_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x1]u8, // 0x4
        _: [0x1]u8, // 0x5
    };
    pub const VsInputSignature_t = extern struct {
        _: [0x18]u8, // 0x0
        _: [0x18]u8, // 0x18
    };
    pub const RenderInputLayoutField_t = extern struct {
        _: [0x20]u8, // 0x0
        _: [0x8]u8, // 0x20
        _: [0x2]u8, // 0x28
        _: [0x1]u8, // 0x2a
        _: [0x1]u8, // 0x2b
        _: [0x20]u8, // 0x2c
    };
};
