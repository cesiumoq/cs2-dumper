/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Total Offsets   : 202
/*  Dumped At       : 22:50 04/11/2026 (GMT)
/*  Dumped In       : 1,7s
*/

/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

#pragma once
#include <cstddef>
#include <cstdint>

namespace cs2::steamaudio {

struct SteamAudioReverbClusteringSettings_t {
    static constexpr std::size_t size = 0xC;
    std::uint8_t m_bEnableClustering[0x4]; // 0x0 bool
    std::uint8_t m_nCubeMapResolution[0x4]; // 0x4 int32
    std::uint8_t m_flDepthThreshold[0x4]; // 0x8 float32
};

struct SteamAudioCustomDataDimensionsSettings_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t m_nAmbisonicsOrderOutsideField[0x4]; // 0x0 int32
    std::uint8_t m_nAmbisonicsOrderInsideSizeField[0x4]; // 0x4 int32
    std::uint8_t m_flOutsideThreshold[0x4]; // 0x8 float32
    std::uint8_t m_flSizeThreshold[0x4]; // 0xC float32
    std::uint8_t m_flInsideThreshold[0x4]; // 0x10 float32
};

struct SteamAudioPathSettings_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_nNumVisSamples[0x4]; // 0x0 int32
    std::uint8_t m_flProbeVisRadius[0x4]; // 0x4 float32
    std::uint8_t m_flProbeVisThreshold[0x4]; // 0x8 float32
    std::uint8_t m_flProbePathRange[0x4]; // 0xC float32
};

struct CSteamAudioAmbisonicsField {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_field[0x18]; // 0x0 CUtlVector<float32>
};

struct CSteamAudioBakedPathingData {
    static constexpr std::size_t size = 0xB8;
    std::uint8_t m_nBands[0x8]; // 0x0 int32
    std::uint8_t m_probes[0x8]; // 0x8 CSteamAudioProbeData
    std::uint8_t m_movables[0xA8]; // 0x10 CSteamAudioMovableBakedData<CSteamAudioBakedPathingData>
};

struct SteamAudioReverbSettings_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t m_nNumRays[0x4]; // 0x0 int32
    std::uint8_t m_nNumBounces[0x4]; // 0x4 int32
    std::uint8_t m_flIRDuration[0x4]; // 0x8 float32
    std::uint8_t m_nAmbisonicsOrder[0x4]; // 0xC int32
    std::uint8_t m_bExportScene[0x4]; // 0x10 bool
};

struct CSteamAudioProbeData {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_pProbeBatch[0x8]; // 0x0 IPLProbeBatch
};

struct SteamAudioReverbCompressionSettings_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_bEnableCompression[0x4]; // 0x0 bool
    std::uint8_t m_flQuality[0x4]; // 0x4 float32
};

struct CSteamAudioBakedMaterialsData {
    static constexpr std::size_t size = 0x38;
    std::uint8_t m_probes[0x8]; // 0x0 CSteamAudioProbeData
    std::uint8_t m_vecMaterialTokens[0x18]; // 0x8 CUtlVector<uint32>
    std::uint8_t m_vecMaterialWeights[0x18]; // 0x20 CUtlVector<float32>
};

struct CSteamAudioBakedOcclusionData {
    static constexpr std::size_t size = 0x60;
    std::uint8_t m_settings[0x10]; // 0x0 SteamAudioCustomDataOcclusionSettings_t
    std::uint8_t m_probes[0x8]; // 0x10 CSteamAudioProbeData
    std::uint8_t m_vecPathingRatio[0x18]; // 0x18 CUtlVector<float32>
    std::uint8_t m_vecPathingDeviation[0x18]; // 0x30 CUtlVector<float32>
    std::uint8_t m_vecReflectionEnergy[0x18]; // 0x48 CUtlVector<float32>
};

struct CSteamAudioBakedReverbData {
    static constexpr std::size_t size = 0x228;
    std::uint8_t m_nBands[0x8]; // 0x0 int32
    std::uint8_t m_scene[0x10]; // 0x8 CSteamAudioSceneData
    std::uint8_t m_probes[0x8]; // 0x18 CSteamAudioProbeData
    std::uint8_t m_grid[0x58]; // 0x20 CSteamAudioProbeGrid
    std::uint8_t m_reverbSettings[0x14]; // 0x78 SteamAudioReverbSettings_t
    std::uint8_t m_reverbClusteringSettings[0xC]; // 0x8C SteamAudioReverbClusteringSettings_t
    std::uint8_t m_reverbCompressionSettings[0x8]; // 0x98 SteamAudioReverbCompressionSettings_t
    std::uint8_t m_clusteredProbes[0x8]; // 0xA0 CSteamAudioProbeData
    std::uint8_t m_vecClusterForProbe[0x18]; // 0xA8 CUtlVector<int16>
    std::uint8_t m_compressedData[0x60]; // 0xC0 CSteamAudioCompressedReverb
    std::uint8_t m_compressedClusteredData[0x60]; // 0x120 CSteamAudioCompressedReverb
    std::uint8_t m_movables[0xA8]; // 0x180 CSteamAudioMovableBakedData<CSteamAudioBakedReverbData>
};

struct CSteamAudioProbeLineSegment {
    static constexpr std::size_t size = 0x48;
    std::uint8_t m_vStart[0xC]; // 0x0 Vector
    std::uint8_t m_vEnd[0xC]; // 0xC Vector
    std::uint8_t m_vecIntervals[0x18]; // 0x18 CUtlVector<float32>
    std::uint8_t m_vecProbeIndices[0x18]; // 0x30 CUtlVector<int32>
};

struct SteamAudioCustomDataOcclusionSettings_t {
    static constexpr std::size_t size = 0xC;
    std::uint8_t m_bEnablePathing[0x1]; // 0x0 bool
    std::uint8_t m_bEnableReflections[0x3]; // 0x1 bool
    std::uint8_t m_nReflectionRays[0x4]; // 0x4 int32
    std::uint8_t m_nReflectionBounces[0x4]; // 0x8 int32
};

struct CSteamAudioBakedDimensionsData {
    static constexpr std::size_t size = 0x128;
    std::uint8_t m_settings[0x18]; // 0x0 SteamAudioCustomDataDimensionsSettings_t
    std::uint8_t m_probes[0x8]; // 0x18 CSteamAudioProbeData
    std::uint8_t m_vecInOut[0x18]; // 0x20 CUtlVector<float32>
    std::uint8_t m_vecSize[0x18]; // 0x38 CUtlVector<float32>
    std::uint8_t m_vecOutsideField[0x18]; // 0x50 CUtlVector<CSteamAudioAmbisonicsField>
    std::uint8_t m_vecInsideSmallSizeField[0x18]; // 0x68 CUtlVector<CSteamAudioAmbisonicsField>
    std::uint8_t m_movables[0xA8]; // 0x80 CSteamAudioMovableBakedData<CSteamAudioBakedDimensionsData>
};

struct CSteamAudioSceneData {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_pScene[0x8]; // 0x0 IPLScene
    std::uint8_t m_pStaticMesh[0x8]; // 0x8 IPLStaticMesh
};

struct CSteamAudioProbeGrid {
    static constexpr std::size_t size = 0x58;
    std::uint8_t m_aabb[0x18]; // 0x0 AABB_t
    std::uint8_t m_flSpacing[0x4]; // 0x18 float32
    std::uint8_t m_nx[0x4]; // 0x1C int32
    std::uint8_t m_ny[0x4]; // 0x20 int32
    std::uint8_t m_nz[0x4]; // 0x24 int32
    std::uint8_t m_vecLineSegments[0x18]; // 0x28 CUtlVector<CSteamAudioProbeLineSegment>
    std::uint8_t m_vecProbes[0x18]; // 0x40 CUtlVector<Vector>
};

struct CSteamAudioCompressedReverb {
    static constexpr std::size_t size = 0x60;
    std::uint8_t m_nChannels[0x4]; // 0x0 int32
    std::uint8_t m_nBands[0x4]; // 0x4 int32
    std::uint8_t m_nBins[0x4]; // 0x8 int32
    std::uint8_t m_nProbes[0x4]; // 0xC int32
    std::uint8_t m_vecNumSingularValues[0x18]; // 0x10 CUtlVector<int32>
    std::uint8_t m_vecDictionary[0x18]; // 0x28 CUtlVector<float32>
    std::uint8_t m_vecCompressedData[0x18]; // 0x40 CUtlVector<float32>
    std::uint8_t m_pCompressedData[0x8]; // 0x58 IPLCompressedEnergyFields
};

} // namespace