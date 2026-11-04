/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

#![allow(non_snake_case, non_camel_case_types, dead_code)]

pub mod scenesystem {

    pub type ESceneObjectMeshletVisualization = i32;
    pub type SceneStatsSections_t = i32;
    pub type ESceneViewDebugOverlaysListenerDataType_t = i32;
    pub type ESilhouetteType_t = i32;
    pub type DisableShadows_t = i32;
    pub type DecalRtEncoding_t = i32;
    pub type ESceneObjectVisualization = i32;
    #[repr(C)]
    pub struct CSSDSMsg_ViewTarget {
        pub m_Name: [u8; 0x8], // 0x0
        pub m_TextureId: [u8; 0x8], // 0x8
        pub m_nWidth: [u8; 0x4], // 0x10
        pub m_nHeight: [u8; 0x4], // 0x14
        pub m_nRequestedWidth: [u8; 0x4], // 0x18
        pub m_nRequestedHeight: [u8; 0x4], // 0x1C
        pub m_nNumMipLevels: [u8; 0x4], // 0x20
        pub m_nDepth: [u8; 0x4], // 0x24
        pub m_nMultisampleNumSamples: [u8; 0x4], // 0x28
        pub m_nFormat: [u8; 0x4], // 0x2C
    }
    #[repr(C)]
    pub struct SceneViewId_t {
        pub m_nViewId: [u8; 0x8], // 0x0
        pub m_nFrameCount: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct CSSDSEndFrameViewInfo {
        pub m_nViewId: [u8; 0x8], // 0x0
        pub m_ViewName: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct CSSDSMsg_PostLayer {
        pub pad_0: [u8; 0x30], // 0x0
    }
    #[repr(C)]
    pub struct CSSDSMsg_LayerBase {
        pub m_viewId: [u8; 0x10], // 0x0
        pub m_ViewName: [u8; 0x8], // 0x10
        pub m_nLayerId: [u8; 0x8], // 0x18
        pub m_LayerName: [u8; 0x8], // 0x20
        pub m_displayText: [u8; 0x8], // 0x28
    }
    #[repr(C)]
    pub struct CSSDSMsg_PreLayer {
        pub pad_0: [u8; 0x30], // 0x0
    }
    #[repr(C)]
    pub struct CSSDSMsg_ViewTargetList {
        pub m_viewId: [u8; 0x10], // 0x0
        pub m_ViewName: [u8; 0x8], // 0x10
        pub m_Targets: [u8; 0x18], // 0x18
    }
    #[repr(C)]
    pub struct CSSDSMsg_ViewRender {
        pub m_viewId: [u8; 0x10], // 0x0
        pub m_ViewName: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CSSDSMsg_EndFrame {
        pub m_Views: [u8; 0x18], // 0x0
    }
}
