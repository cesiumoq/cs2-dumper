/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Total Offsets   : 202
/*  Dumped At       : 22:59 04/11/2026 (GMT)
/*  Dumped In       : 1,7s
*/

/* cesium dumper | generated from live schema */
using System;
using System.Runtime.InteropServices;

namespace Cs2.materialsystem2_dll {

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct MaterialParam_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct MaterialParamVector_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct MaterialParamString_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x158)]
    public unsafe struct PostProcessingResource_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x3c];
        [FieldOffset(0x40)] public fixed byte _[0x4];
        [FieldOffset(0x44)] public fixed byte _[0x88];
        [FieldOffset(0xcc)] public fixed byte _[0x4];
        [FieldOffset(0xd0)] public fixed byte _[0x24];
        [FieldOffset(0xf4)] public fixed byte _[0x4];
        [FieldOffset(0xf8)] public fixed byte _[0x14];
        [FieldOffset(0x10c)] public fixed byte _[0x4];
        [FieldOffset(0x110)] public fixed byte _[0x10];
        [FieldOffset(0x120)] public fixed byte _[0x1];
        [FieldOffset(0x121)] public fixed byte _[0x3];
        [FieldOffset(0x124)] public fixed byte _[0x20];
        [FieldOffset(0x144)] public fixed byte _[0x4];
        [FieldOffset(0x148)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct MaterialParamInt_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x24)]
    public unsafe struct PostProcessingVignetteParameters_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x8];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct PostProcessingLocalContrastParameters_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x3c)]
    public unsafe struct PostProcessingTonemapParameters_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
        [FieldOffset(0x30)] public fixed byte _[0x4];
        [FieldOffset(0x34)] public fixed byte _[0x4];
        [FieldOffset(0x38)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct PostProcessingFogScatteringParameters_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct MaterialParamBuffer_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x130)]
    public unsafe struct MaterialResourceData_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x18];
        [FieldOffset(0x40)] public fixed byte _[0x18];
        [FieldOffset(0x58)] public fixed byte _[0x18];
        [FieldOffset(0x70)] public fixed byte _[0x18];
        [FieldOffset(0x88)] public fixed byte _[0x18];
        [FieldOffset(0xa0)] public fixed byte _[0x18];
        [FieldOffset(0xb8)] public fixed byte _[0x18];
        [FieldOffset(0xd0)] public fixed byte _[0x18];
        [FieldOffset(0xe8)] public fixed byte _[0x18];
        [FieldOffset(0x100)] public fixed byte _[0x18];
        [FieldOffset(0x118)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct PostProcessingBloomParameters_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
        [FieldOffset(0x30)] public fixed byte _[0x4];
        [FieldOffset(0x34)] public fixed byte _[0x4];
        [FieldOffset(0x38)] public fixed byte _[0x14];
        [FieldOffset(0x4c)] public fixed byte _[0x3c];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct MaterialParamFloat_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct PostProcessingLocalExposureParameters_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct MaterialParamTexture_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
    }

}