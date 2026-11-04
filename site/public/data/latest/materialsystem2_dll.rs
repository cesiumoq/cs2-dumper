/* cesium dumper | generated from live schema */
#![allow(non_snake_case, non_camel_case_types, dead_code)]

pub mod materialsystem2_dll {

    #[repr(C)]
    pub struct MaterialParam_t {
        pub _: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct MaterialParamVector_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x10], // 0x8
    }

    #[repr(C)]
    pub struct MaterialParamString_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct PostProcessingResource_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x3c], // 0x4
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x88], // 0x44
        pub _: [u8; 0x4], // 0xcc
        pub _: [u8; 0x24], // 0xd0
        pub _: [u8; 0x4], // 0xf4
        pub _: [u8; 0x14], // 0xf8
        pub _: [u8; 0x4], // 0x10c
        pub _: [u8; 0x10], // 0x110
        pub _: [u8; 0x1], // 0x120
        pub _: [u8; 0x3], // 0x121
        pub _: [u8; 0x20], // 0x124
        pub _: [u8; 0x4], // 0x144
        pub _: [u8; 0x10], // 0x148
    }

    #[repr(C)]
    pub struct MaterialParamInt_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct PostProcessingVignetteParameters_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x8], // 0x4
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0xc], // 0x18
    }

    #[repr(C)]
    pub struct PostProcessingLocalContrastParameters_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
    }

    #[repr(C)]
    pub struct PostProcessingTonemapParameters_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x4], // 0x38
    }

    #[repr(C)]
    pub struct PostProcessingFogScatteringParameters_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
    }

    #[repr(C)]
    pub struct MaterialParamBuffer_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x10], // 0x8
    }

    #[repr(C)]
    pub struct MaterialResourceData_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x18], // 0x28
        pub _: [u8; 0x18], // 0x40
        pub _: [u8; 0x18], // 0x58
        pub _: [u8; 0x18], // 0x70
        pub _: [u8; 0x18], // 0x88
        pub _: [u8; 0x18], // 0xa0
        pub _: [u8; 0x18], // 0xb8
        pub _: [u8; 0x18], // 0xd0
        pub _: [u8; 0x18], // 0xe8
        pub _: [u8; 0x18], // 0x100
        pub _: [u8; 0x18], // 0x118
    }

    #[repr(C)]
    pub struct PostProcessingBloomParameters_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x14], // 0x38
        pub _: [u8; 0x3c], // 0x4c
    }

    #[repr(C)]
    pub struct MaterialParamFloat_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct PostProcessingLocalExposureParameters_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
    }

    #[repr(C)]
    pub struct MaterialParamTexture_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

}
