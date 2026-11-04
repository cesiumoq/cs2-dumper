/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

#![allow(non_snake_case, non_camel_case_types, dead_code)]

pub mod steamaudio {

    #[repr(C)]
    pub struct SteamAudioReverbClusteringSettings_t {
        pub m_bEnableClustering: [u8; 0x4], // 0x0
        pub m_nCubeMapResolution: [u8; 0x4], // 0x4
        pub m_flDepthThreshold: [u8; 0x4], // 0x8
    }
    #[repr(C)]
    pub struct SteamAudioCustomDataDimensionsSettings_t {
        pub m_nAmbisonicsOrderOutsideField: [u8; 0x4], // 0x0
        pub m_nAmbisonicsOrderInsideSizeField: [u8; 0x4], // 0x4
        pub m_flOutsideThreshold: [u8; 0x4], // 0x8
        pub m_flSizeThreshold: [u8; 0x4], // 0xC
        pub m_flInsideThreshold: [u8; 0x4], // 0x10
    }
    #[repr(C)]
    pub struct SteamAudioPathSettings_t {
        pub m_nNumVisSamples: [u8; 0x4], // 0x0
        pub m_flProbeVisRadius: [u8; 0x4], // 0x4
        pub m_flProbeVisThreshold: [u8; 0x4], // 0x8
        pub m_flProbePathRange: [u8; 0x4], // 0xC
    }
    #[repr(C)]
    pub struct CSteamAudioAmbisonicsField {
        pub m_field: [u8; 0x18], // 0x0
    }
    #[repr(C)]
    pub struct CSteamAudioBakedPathingData {
        pub m_nBands: [u8; 0x8], // 0x0
        pub m_probes: [u8; 0x8], // 0x8
        pub m_movables: [u8; 0xA8], // 0x10
    }
    #[repr(C)]
    pub struct SteamAudioReverbSettings_t {
        pub m_nNumRays: [u8; 0x4], // 0x0
        pub m_nNumBounces: [u8; 0x4], // 0x4
        pub m_flIRDuration: [u8; 0x4], // 0x8
        pub m_nAmbisonicsOrder: [u8; 0x4], // 0xC
        pub m_bExportScene: [u8; 0x4], // 0x10
    }
    #[repr(C)]
    pub struct CSteamAudioProbeData {
        pub m_pProbeBatch: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct SteamAudioReverbCompressionSettings_t {
        pub m_bEnableCompression: [u8; 0x4], // 0x0
        pub m_flQuality: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct CSteamAudioBakedMaterialsData {
        pub m_probes: [u8; 0x8], // 0x0
        pub m_vecMaterialTokens: [u8; 0x18], // 0x8
        pub m_vecMaterialWeights: [u8; 0x18], // 0x20
    }
    #[repr(C)]
    pub struct CSteamAudioBakedOcclusionData {
        pub m_settings: [u8; 0x10], // 0x0
        pub m_probes: [u8; 0x8], // 0x10
        pub m_vecPathingRatio: [u8; 0x18], // 0x18
        pub m_vecPathingDeviation: [u8; 0x18], // 0x30
        pub m_vecReflectionEnergy: [u8; 0x18], // 0x48
    }
    #[repr(C)]
    pub struct CSteamAudioBakedReverbData {
        pub m_nBands: [u8; 0x8], // 0x0
        pub m_scene: [u8; 0x10], // 0x8
        pub m_probes: [u8; 0x8], // 0x18
        pub m_grid: [u8; 0x58], // 0x20
        pub m_reverbSettings: [u8; 0x14], // 0x78
        pub m_reverbClusteringSettings: [u8; 0xC], // 0x8C
        pub m_reverbCompressionSettings: [u8; 0x8], // 0x98
        pub m_clusteredProbes: [u8; 0x8], // 0xA0
        pub m_vecClusterForProbe: [u8; 0x18], // 0xA8
        pub m_compressedData: [u8; 0x60], // 0xC0
        pub m_compressedClusteredData: [u8; 0x60], // 0x120
        pub m_movables: [u8; 0xA8], // 0x180
    }
    #[repr(C)]
    pub struct CSteamAudioProbeLineSegment {
        pub m_vStart: [u8; 0xC], // 0x0
        pub m_vEnd: [u8; 0xC], // 0xC
        pub m_vecIntervals: [u8; 0x18], // 0x18
        pub m_vecProbeIndices: [u8; 0x18], // 0x30
    }
    #[repr(C)]
    pub struct SteamAudioCustomDataOcclusionSettings_t {
        pub m_bEnablePathing: [u8; 0x1], // 0x0
        pub m_bEnableReflections: [u8; 0x3], // 0x1
        pub m_nReflectionRays: [u8; 0x4], // 0x4
        pub m_nReflectionBounces: [u8; 0x4], // 0x8
    }
    #[repr(C)]
    pub struct CSteamAudioBakedDimensionsData {
        pub m_settings: [u8; 0x18], // 0x0
        pub m_probes: [u8; 0x8], // 0x18
        pub m_vecInOut: [u8; 0x18], // 0x20
        pub m_vecSize: [u8; 0x18], // 0x38
        pub m_vecOutsideField: [u8; 0x18], // 0x50
        pub m_vecInsideSmallSizeField: [u8; 0x18], // 0x68
        pub m_movables: [u8; 0xA8], // 0x80
    }
    #[repr(C)]
    pub struct CSteamAudioSceneData {
        pub m_pScene: [u8; 0x8], // 0x0
        pub m_pStaticMesh: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct CSteamAudioProbeGrid {
        pub m_aabb: [u8; 0x18], // 0x0
        pub m_flSpacing: [u8; 0x4], // 0x18
        pub m_nx: [u8; 0x4], // 0x1C
        pub m_ny: [u8; 0x4], // 0x20
        pub m_nz: [u8; 0x4], // 0x24
        pub m_vecLineSegments: [u8; 0x18], // 0x28
        pub m_vecProbes: [u8; 0x18], // 0x40
    }
    #[repr(C)]
    pub struct CSteamAudioCompressedReverb {
        pub m_nChannels: [u8; 0x4], // 0x0
        pub m_nBands: [u8; 0x4], // 0x4
        pub m_nBins: [u8; 0x4], // 0x8
        pub m_nProbes: [u8; 0x4], // 0xC
        pub m_vecNumSingularValues: [u8; 0x18], // 0x10
        pub m_vecDictionary: [u8; 0x18], // 0x28
        pub m_vecCompressedData: [u8; 0x18], // 0x40
        pub m_pCompressedData: [u8; 0x8], // 0x58
    }
}
