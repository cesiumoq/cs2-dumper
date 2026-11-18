/* cesium dumper | generated from live schema */
#![allow(non_snake_case, non_camel_case_types, dead_code)]

pub mod steamaudio_dll {

    #[repr(C)]
    pub struct SteamAudioReverbClusteringSettings_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
    }

    #[repr(C)]
    pub struct SteamAudioCustomDataDimensionsSettings_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
    }

    #[repr(C)]
    pub struct SteamAudioPathSettings_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
    }

    #[repr(C)]
    pub struct CSteamAudioAmbisonicsField {
        pub _: [u8; 0x18], // 0x0
    }

    #[repr(C)]
    pub struct CSteamAudioBakedPathingData {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0xa8], // 0x10
    }

    #[repr(C)]
    pub struct SteamAudioReverbSettings_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
    }

    #[repr(C)]
    pub struct CSteamAudioProbeData {
        pub _: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct SteamAudioReverbCompressionSettings_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct CSteamAudioBakedMaterialsData {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
        pub _: [u8; 0x18], // 0x20
    }

    #[repr(C)]
    pub struct CSteamAudioBakedOcclusionData {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x18], // 0x18
        pub _: [u8; 0x18], // 0x30
        pub _: [u8; 0x18], // 0x48
    }

    #[repr(C)]
    pub struct CSteamAudioBakedReverbData {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x10], // 0x8
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x58], // 0x20
        pub _: [u8; 0x14], // 0x78
        pub _: [u8; 0xc], // 0x8c
        pub _: [u8; 0x8], // 0x98
        pub _: [u8; 0x8], // 0xa0
        pub _: [u8; 0x18], // 0xa8
        pub _: [u8; 0x60], // 0xc0
        pub _: [u8; 0x60], // 0x120
        pub _: [u8; 0xa8], // 0x180
    }

    #[repr(C)]
    pub struct CSteamAudioProbeLineSegment {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0xc], // 0xc
        pub _: [u8; 0x18], // 0x18
        pub _: [u8; 0x18], // 0x30
    }

    #[repr(C)]
    pub struct SteamAudioCustomDataOcclusionSettings_t {
        pub _: [u8; 0x1], // 0x0
        pub _: [u8; 0x3], // 0x1
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
    }

    #[repr(C)]
    pub struct CSteamAudioBakedDimensionsData {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x18], // 0x20
        pub _: [u8; 0x18], // 0x38
        pub _: [u8; 0x18], // 0x50
        pub _: [u8; 0x18], // 0x68
        pub _: [u8; 0xa8], // 0x80
    }

    #[repr(C)]
    pub struct CSteamAudioSceneData {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct CSteamAudioProbeGrid {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x18], // 0x28
        pub _: [u8; 0x18], // 0x40
    }

    #[repr(C)]
    pub struct CSteamAudioCompressedReverb {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x18], // 0x28
        pub _: [u8; 0x18], // 0x40
        pub _: [u8; 0x8], // 0x58
    }

}
