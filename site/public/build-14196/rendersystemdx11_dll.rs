/* cesium dumper | generated from live schema */
#![allow(non_snake_case, non_camel_case_types, dead_code)]

pub mod rendersystemdx11_dll {

    #[repr(C)]
    pub struct RsDepthStencilStateDesc_t {
        pub _: [u8; 0x2], // 0x0
        pub _: [u8; 0x6], // 0x2
    }

    #[repr(C)]
    pub struct SheetSequenceIntegerId_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct RsBlendStateDesc_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x1], // 0x1c
        pub _: [u8; 0x3], // 0x1d
    }

    #[repr(C)]
    pub struct VsInputSignatureElement_t {
        pub _: [u8; 0x40], // 0x0
        pub _: [u8; 0x40], // 0x40
        pub _: [u8; 0x40], // 0x80
        pub _: [u8; 0x4], // 0xc0
    }

    #[repr(C)]
    pub struct RsRasterizerStateDesc_t {
        pub _: [u8; 0x1], // 0x0
        pub _: [u8; 0x1], // 0x1
        pub _: [u8; 0x1], // 0x2
        pub _: [u8; 0x1], // 0x3
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
    }

    #[repr(C)]
    pub struct RsStencilStateDesc_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x1], // 0x4
        pub _: [u8; 0x1], // 0x5
    }

    #[repr(C)]
    pub struct VsInputSignature_t {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x18], // 0x18
    }

    #[repr(C)]
    pub struct RenderInputLayoutField_t {
        pub _: [u8; 0x20], // 0x0
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x2], // 0x28
        pub _: [u8; 0x1], // 0x2a
        pub _: [u8; 0x1], // 0x2b
        pub _: [u8; 0x20], // 0x2c
    }

}
