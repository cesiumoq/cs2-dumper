/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Total Offsets   : 202
/*  Dumped At       : 12:53 05/11/2026 (GMT)
/*  Dumped In       : 46,1s
*/

/* cesium dumper | generated from live schema */
using System;
using System.Runtime.InteropServices;

namespace Cs2.steamaudio_dll {

    [StructLayout(LayoutKind.Explicit, Size = 0xc)]
    public unsafe struct SteamAudioReverbClusteringSettings_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct SteamAudioCustomDataDimensionsSettings_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct SteamAudioPathSettings_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CSteamAudioAmbisonicsField {
        [FieldOffset(0x0)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xb8)]
    public unsafe struct CSteamAudioBakedPathingData {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0xa8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct SteamAudioReverbSettings_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CSteamAudioProbeData {
        [FieldOffset(0x0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct SteamAudioReverbCompressionSettings_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CSteamAudioBakedMaterialsData {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x18];
        [FieldOffset(0x20)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CSteamAudioBakedOcclusionData {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x18];
        [FieldOffset(0x30)] public fixed byte _[0x18];
        [FieldOffset(0x48)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x228)]
    public unsafe struct CSteamAudioBakedReverbData {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x10];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x58];
        [FieldOffset(0x78)] public fixed byte _[0x14];
        [FieldOffset(0x8c)] public fixed byte _[0xc];
        [FieldOffset(0x98)] public fixed byte _[0x8];
        [FieldOffset(0xa0)] public fixed byte _[0x8];
        [FieldOffset(0xa8)] public fixed byte _[0x18];
        [FieldOffset(0xc0)] public fixed byte _[0x60];
        [FieldOffset(0x120)] public fixed byte _[0x60];
        [FieldOffset(0x180)] public fixed byte _[0xa8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CSteamAudioProbeLineSegment {
        [FieldOffset(0x0)] public fixed byte _[0xc];
        [FieldOffset(0xc)] public fixed byte _[0xc];
        [FieldOffset(0x18)] public fixed byte _[0x18];
        [FieldOffset(0x30)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc)]
    public unsafe struct SteamAudioCustomDataOcclusionSettings_t {
        [FieldOffset(0x0)] public fixed byte _[0x1];
        [FieldOffset(0x1)] public fixed byte _[0x3];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x128)]
    public unsafe struct CSteamAudioBakedDimensionsData {
        [FieldOffset(0x0)] public fixed byte _[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x18];
        [FieldOffset(0x38)] public fixed byte _[0x18];
        [FieldOffset(0x50)] public fixed byte _[0x18];
        [FieldOffset(0x68)] public fixed byte _[0x18];
        [FieldOffset(0x80)] public fixed byte _[0xa8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CSteamAudioSceneData {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CSteamAudioProbeGrid {
        [FieldOffset(0x0)] public fixed byte _[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
        [FieldOffset(0x28)] public fixed byte _[0x18];
        [FieldOffset(0x40)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CSteamAudioCompressedReverb {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x18];
        [FieldOffset(0x40)] public fixed byte _[0x18];
        [FieldOffset(0x58)] public fixed byte _[0x8];
    }

}