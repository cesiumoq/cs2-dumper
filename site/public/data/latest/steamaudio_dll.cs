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

using System;
using System.Runtime.InteropServices;

namespace Cs2.steamaudio {

    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct SteamAudioReverbClusteringSettings_t {
        [FieldOffset(0x0)] public fixed byte m_bEnableClustering[0x4];
        [FieldOffset(0x4)] public fixed byte m_nCubeMapResolution[0x4];
        [FieldOffset(0x8)] public fixed byte m_flDepthThreshold[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct SteamAudioCustomDataDimensionsSettings_t {
        [FieldOffset(0x0)] public fixed byte m_nAmbisonicsOrderOutsideField[0x4];
        [FieldOffset(0x4)] public fixed byte m_nAmbisonicsOrderInsideSizeField[0x4];
        [FieldOffset(0x8)] public fixed byte m_flOutsideThreshold[0x4];
        [FieldOffset(0xC)] public fixed byte m_flSizeThreshold[0x4];
        [FieldOffset(0x10)] public fixed byte m_flInsideThreshold[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct SteamAudioPathSettings_t {
        [FieldOffset(0x0)] public fixed byte m_nNumVisSamples[0x4];
        [FieldOffset(0x4)] public fixed byte m_flProbeVisRadius[0x4];
        [FieldOffset(0x8)] public fixed byte m_flProbeVisThreshold[0x4];
        [FieldOffset(0xC)] public fixed byte m_flProbePathRange[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CSteamAudioAmbisonicsField {
        [FieldOffset(0x0)] public fixed byte m_field[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB8)]
    public unsafe struct CSteamAudioBakedPathingData {
        [FieldOffset(0x0)] public fixed byte m_nBands[0x8];
        [FieldOffset(0x8)] public fixed byte m_probes[0x8];
        [FieldOffset(0x10)] public fixed byte m_movables[0xA8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct SteamAudioReverbSettings_t {
        [FieldOffset(0x0)] public fixed byte m_nNumRays[0x4];
        [FieldOffset(0x4)] public fixed byte m_nNumBounces[0x4];
        [FieldOffset(0x8)] public fixed byte m_flIRDuration[0x4];
        [FieldOffset(0xC)] public fixed byte m_nAmbisonicsOrder[0x4];
        [FieldOffset(0x10)] public fixed byte m_bExportScene[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CSteamAudioProbeData {
        [FieldOffset(0x0)] public fixed byte m_pProbeBatch[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct SteamAudioReverbCompressionSettings_t {
        [FieldOffset(0x0)] public fixed byte m_bEnableCompression[0x4];
        [FieldOffset(0x4)] public fixed byte m_flQuality[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CSteamAudioBakedMaterialsData {
        [FieldOffset(0x0)] public fixed byte m_probes[0x8];
        [FieldOffset(0x8)] public fixed byte m_vecMaterialTokens[0x18];
        [FieldOffset(0x20)] public fixed byte m_vecMaterialWeights[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CSteamAudioBakedOcclusionData {
        [FieldOffset(0x0)] public fixed byte m_settings[0x10];
        [FieldOffset(0x10)] public fixed byte m_probes[0x8];
        [FieldOffset(0x18)] public fixed byte m_vecPathingRatio[0x18];
        [FieldOffset(0x30)] public fixed byte m_vecPathingDeviation[0x18];
        [FieldOffset(0x48)] public fixed byte m_vecReflectionEnergy[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x228)]
    public unsafe struct CSteamAudioBakedReverbData {
        [FieldOffset(0x0)] public fixed byte m_nBands[0x8];
        [FieldOffset(0x8)] public fixed byte m_scene[0x10];
        [FieldOffset(0x18)] public fixed byte m_probes[0x8];
        [FieldOffset(0x20)] public fixed byte m_grid[0x58];
        [FieldOffset(0x78)] public fixed byte m_reverbSettings[0x14];
        [FieldOffset(0x8C)] public fixed byte m_reverbClusteringSettings[0xC];
        [FieldOffset(0x98)] public fixed byte m_reverbCompressionSettings[0x8];
        [FieldOffset(0xA0)] public fixed byte m_clusteredProbes[0x8];
        [FieldOffset(0xA8)] public fixed byte m_vecClusterForProbe[0x18];
        [FieldOffset(0xC0)] public fixed byte m_compressedData[0x60];
        [FieldOffset(0x120)] public fixed byte m_compressedClusteredData[0x60];
        [FieldOffset(0x180)] public fixed byte m_movables[0xA8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CSteamAudioProbeLineSegment {
        [FieldOffset(0x0)] public fixed byte m_vStart[0xC];
        [FieldOffset(0xC)] public fixed byte m_vEnd[0xC];
        [FieldOffset(0x18)] public fixed byte m_vecIntervals[0x18];
        [FieldOffset(0x30)] public fixed byte m_vecProbeIndices[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct SteamAudioCustomDataOcclusionSettings_t {
        [FieldOffset(0x0)] public fixed byte m_bEnablePathing[0x1];
        [FieldOffset(0x1)] public fixed byte m_bEnableReflections[0x3];
        [FieldOffset(0x4)] public fixed byte m_nReflectionRays[0x4];
        [FieldOffset(0x8)] public fixed byte m_nReflectionBounces[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x128)]
    public unsafe struct CSteamAudioBakedDimensionsData {
        [FieldOffset(0x0)] public fixed byte m_settings[0x18];
        [FieldOffset(0x18)] public fixed byte m_probes[0x8];
        [FieldOffset(0x20)] public fixed byte m_vecInOut[0x18];
        [FieldOffset(0x38)] public fixed byte m_vecSize[0x18];
        [FieldOffset(0x50)] public fixed byte m_vecOutsideField[0x18];
        [FieldOffset(0x68)] public fixed byte m_vecInsideSmallSizeField[0x18];
        [FieldOffset(0x80)] public fixed byte m_movables[0xA8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CSteamAudioSceneData {
        [FieldOffset(0x0)] public fixed byte m_pScene[0x8];
        [FieldOffset(0x8)] public fixed byte m_pStaticMesh[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CSteamAudioProbeGrid {
        [FieldOffset(0x0)] public fixed byte m_aabb[0x18];
        [FieldOffset(0x18)] public fixed byte m_flSpacing[0x4];
        [FieldOffset(0x1C)] public fixed byte m_nx[0x4];
        [FieldOffset(0x20)] public fixed byte m_ny[0x4];
        [FieldOffset(0x24)] public fixed byte m_nz[0x4];
        [FieldOffset(0x28)] public fixed byte m_vecLineSegments[0x18];
        [FieldOffset(0x40)] public fixed byte m_vecProbes[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CSteamAudioCompressedReverb {
        [FieldOffset(0x0)] public fixed byte m_nChannels[0x4];
        [FieldOffset(0x4)] public fixed byte m_nBands[0x4];
        [FieldOffset(0x8)] public fixed byte m_nBins[0x4];
        [FieldOffset(0xC)] public fixed byte m_nProbes[0x4];
        [FieldOffset(0x10)] public fixed byte m_vecNumSingularValues[0x18];
        [FieldOffset(0x28)] public fixed byte m_vecDictionary[0x18];
        [FieldOffset(0x40)] public fixed byte m_vecCompressedData[0x18];
        [FieldOffset(0x58)] public fixed byte m_pCompressedData[0x8];
    }
}