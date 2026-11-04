/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

pub const steamaudio = struct {

    pub const SteamAudioReverbClusteringSettings_t = extern struct {
        m_bEnableClustering: [0x4]u8, // 0x0
        m_nCubeMapResolution: [0x4]u8, // 0x4
        m_flDepthThreshold: [0x4]u8, // 0x8
    };
    pub const SteamAudioCustomDataDimensionsSettings_t = extern struct {
        m_nAmbisonicsOrderOutsideField: [0x4]u8, // 0x0
        m_nAmbisonicsOrderInsideSizeField: [0x4]u8, // 0x4
        m_flOutsideThreshold: [0x4]u8, // 0x8
        m_flSizeThreshold: [0x4]u8, // 0xC
        m_flInsideThreshold: [0x4]u8, // 0x10
    };
    pub const SteamAudioPathSettings_t = extern struct {
        m_nNumVisSamples: [0x4]u8, // 0x0
        m_flProbeVisRadius: [0x4]u8, // 0x4
        m_flProbeVisThreshold: [0x4]u8, // 0x8
        m_flProbePathRange: [0x4]u8, // 0xC
    };
    pub const CSteamAudioAmbisonicsField = extern struct {
        m_field: [0x18]u8, // 0x0
    };
    pub const CSteamAudioBakedPathingData = extern struct {
        m_nBands: [0x8]u8, // 0x0
        m_probes: [0x8]u8, // 0x8
        m_movables: [0xA8]u8, // 0x10
    };
    pub const SteamAudioReverbSettings_t = extern struct {
        m_nNumRays: [0x4]u8, // 0x0
        m_nNumBounces: [0x4]u8, // 0x4
        m_flIRDuration: [0x4]u8, // 0x8
        m_nAmbisonicsOrder: [0x4]u8, // 0xC
        m_bExportScene: [0x4]u8, // 0x10
    };
    pub const CSteamAudioProbeData = extern struct {
        m_pProbeBatch: [0x8]u8, // 0x0
    };
    pub const SteamAudioReverbCompressionSettings_t = extern struct {
        m_bEnableCompression: [0x4]u8, // 0x0
        m_flQuality: [0x4]u8, // 0x4
    };
    pub const CSteamAudioBakedMaterialsData = extern struct {
        m_probes: [0x8]u8, // 0x0
        m_vecMaterialTokens: [0x18]u8, // 0x8
        m_vecMaterialWeights: [0x18]u8, // 0x20
    };
    pub const CSteamAudioBakedOcclusionData = extern struct {
        m_settings: [0x10]u8, // 0x0
        m_probes: [0x8]u8, // 0x10
        m_vecPathingRatio: [0x18]u8, // 0x18
        m_vecPathingDeviation: [0x18]u8, // 0x30
        m_vecReflectionEnergy: [0x18]u8, // 0x48
    };
    pub const CSteamAudioBakedReverbData = extern struct {
        m_nBands: [0x8]u8, // 0x0
        m_scene: [0x10]u8, // 0x8
        m_probes: [0x8]u8, // 0x18
        m_grid: [0x58]u8, // 0x20
        m_reverbSettings: [0x14]u8, // 0x78
        m_reverbClusteringSettings: [0xC]u8, // 0x8C
        m_reverbCompressionSettings: [0x8]u8, // 0x98
        m_clusteredProbes: [0x8]u8, // 0xA0
        m_vecClusterForProbe: [0x18]u8, // 0xA8
        m_compressedData: [0x60]u8, // 0xC0
        m_compressedClusteredData: [0x60]u8, // 0x120
        m_movables: [0xA8]u8, // 0x180
    };
    pub const CSteamAudioProbeLineSegment = extern struct {
        m_vStart: [0xC]u8, // 0x0
        m_vEnd: [0xC]u8, // 0xC
        m_vecIntervals: [0x18]u8, // 0x18
        m_vecProbeIndices: [0x18]u8, // 0x30
    };
    pub const SteamAudioCustomDataOcclusionSettings_t = extern struct {
        m_bEnablePathing: [0x1]u8, // 0x0
        m_bEnableReflections: [0x3]u8, // 0x1
        m_nReflectionRays: [0x4]u8, // 0x4
        m_nReflectionBounces: [0x4]u8, // 0x8
    };
    pub const CSteamAudioBakedDimensionsData = extern struct {
        m_settings: [0x18]u8, // 0x0
        m_probes: [0x8]u8, // 0x18
        m_vecInOut: [0x18]u8, // 0x20
        m_vecSize: [0x18]u8, // 0x38
        m_vecOutsideField: [0x18]u8, // 0x50
        m_vecInsideSmallSizeField: [0x18]u8, // 0x68
        m_movables: [0xA8]u8, // 0x80
    };
    pub const CSteamAudioSceneData = extern struct {
        m_pScene: [0x8]u8, // 0x0
        m_pStaticMesh: [0x8]u8, // 0x8
    };
    pub const CSteamAudioProbeGrid = extern struct {
        m_aabb: [0x18]u8, // 0x0
        m_flSpacing: [0x4]u8, // 0x18
        m_nx: [0x4]u8, // 0x1C
        m_ny: [0x4]u8, // 0x20
        m_nz: [0x4]u8, // 0x24
        m_vecLineSegments: [0x18]u8, // 0x28
        m_vecProbes: [0x18]u8, // 0x40
    };
    pub const CSteamAudioCompressedReverb = extern struct {
        m_nChannels: [0x4]u8, // 0x0
        m_nBands: [0x4]u8, // 0x4
        m_nBins: [0x4]u8, // 0x8
        m_nProbes: [0x4]u8, // 0xC
        m_vecNumSingularValues: [0x18]u8, // 0x10
        m_vecDictionary: [0x18]u8, // 0x28
        m_vecCompressedData: [0x18]u8, // 0x40
        m_pCompressedData: [0x8]u8, // 0x58
    };
};
