/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

pub const scenesystem = struct {

    pub const CSSDSMsg_ViewTarget = extern struct {
        m_Name: [0x8]u8, // 0x0
        m_TextureId: [0x8]u8, // 0x8
        m_nWidth: [0x4]u8, // 0x10
        m_nHeight: [0x4]u8, // 0x14
        m_nRequestedWidth: [0x4]u8, // 0x18
        m_nRequestedHeight: [0x4]u8, // 0x1C
        m_nNumMipLevels: [0x4]u8, // 0x20
        m_nDepth: [0x4]u8, // 0x24
        m_nMultisampleNumSamples: [0x4]u8, // 0x28
        m_nFormat: [0x4]u8, // 0x2C
    };
    pub const SceneViewId_t = extern struct {
        m_nViewId: [0x8]u8, // 0x0
        m_nFrameCount: [0x8]u8, // 0x8
    };
    pub const CSSDSEndFrameViewInfo = extern struct {
        m_nViewId: [0x8]u8, // 0x0
        m_ViewName: [0x8]u8, // 0x8
    };
    pub const CSSDSMsg_PostLayer = extern struct {
        pad_0: [0x30]u8, // 0x0
    };
    pub const CSSDSMsg_LayerBase = extern struct {
        m_viewId: [0x10]u8, // 0x0
        m_ViewName: [0x8]u8, // 0x10
        m_nLayerId: [0x8]u8, // 0x18
        m_LayerName: [0x8]u8, // 0x20
        m_displayText: [0x8]u8, // 0x28
    };
    pub const CSSDSMsg_PreLayer = extern struct {
        pad_0: [0x30]u8, // 0x0
    };
    pub const CSSDSMsg_ViewTargetList = extern struct {
        m_viewId: [0x10]u8, // 0x0
        m_ViewName: [0x8]u8, // 0x10
        m_Targets: [0x18]u8, // 0x18
    };
    pub const CSSDSMsg_ViewRender = extern struct {
        m_viewId: [0x10]u8, // 0x0
        m_ViewName: [0x8]u8, // 0x10
    };
    pub const CSSDSMsg_EndFrame = extern struct {
        m_Views: [0x18]u8, // 0x0
    };
};
