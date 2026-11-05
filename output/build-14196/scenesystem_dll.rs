/* cesium dumper | generated from live schema */
#![allow(non_snake_case, non_camel_case_types, dead_code)]

pub mod scenesystem_dll {

    #[repr(C)]
    pub struct CSSDSMsg_ViewTarget {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
    }

    #[repr(C)]
    pub struct SceneViewId_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct CSSDSEndFrameViewInfo {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct CSSDSMsg_PostLayer {
        pub pad_0: [u8; 0x30], // 0x0
    }

    #[repr(C)]
    pub struct CSSDSMsg_LayerBase {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
    }

    #[repr(C)]
    pub struct CSSDSMsg_PreLayer {
        pub pad_0: [u8; 0x30], // 0x0
    }

    #[repr(C)]
    pub struct CSSDSMsg_ViewTargetList {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x18], // 0x18
    }

    #[repr(C)]
    pub struct CSSDSMsg_ViewRender {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CSSDSMsg_EndFrame {
        pub _: [u8; 0x18], // 0x0
    }

}
