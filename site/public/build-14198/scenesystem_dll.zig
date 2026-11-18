/* cesium dumper | generated from live schema */
pub const scenesystem_dll = struct {
    pub const CSSDSMsg_ViewTarget = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
        _: [0x4]u8, // 0x20
        _: [0x4]u8, // 0x24
        _: [0x4]u8, // 0x28
        _: [0x4]u8, // 0x2c
    };
    pub const SceneViewId_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
    };
    pub const CSSDSEndFrameViewInfo = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
    };
    pub const CSSDSMsg_PostLayer = extern struct {
        pad_0: [0x30]u8, // 0x0
    };
    pub const CSSDSMsg_LayerBase = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
        _: [0x8]u8, // 0x18
        _: [0x8]u8, // 0x20
        _: [0x8]u8, // 0x28
    };
    pub const CSSDSMsg_PreLayer = extern struct {
        pad_0: [0x30]u8, // 0x0
    };
    pub const CSSDSMsg_ViewTargetList = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
        _: [0x18]u8, // 0x18
    };
    pub const CSSDSMsg_ViewRender = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
    };
    pub const CSSDSMsg_EndFrame = extern struct {
        _: [0x18]u8, // 0x0
    };
};
