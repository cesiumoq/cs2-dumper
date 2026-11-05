/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Total Offsets   : 202
/*  Dumped At       : 13:50 05/11/2026 (GMT)
/*  Dumped In       : 1,2s
*/

/* cesium dumper | generated from live schema */
using System;
using System.Runtime.InteropServices;

namespace Cs2.rendersystemdx11_dll {

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct RsDepthStencilStateDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x2];
        [FieldOffset(0x2)] public fixed byte _[0x6];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct SheetSequenceIntegerId_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct RsBlendStateDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x1];
        [FieldOffset(0x1d)] public fixed byte _[0x3];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc4)]
    public unsafe struct VsInputSignatureElement_t {
        [FieldOffset(0x0)] public fixed byte _[0x40];
        [FieldOffset(0x40)] public fixed byte _[0x40];
        [FieldOffset(0x80)] public fixed byte _[0x40];
        [FieldOffset(0xc0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct RsRasterizerStateDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x1];
        [FieldOffset(0x1)] public fixed byte _[0x1];
        [FieldOffset(0x2)] public fixed byte _[0x1];
        [FieldOffset(0x3)] public fixed byte _[0x1];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x6)]
    public unsafe struct RsStencilStateDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x1];
        [FieldOffset(0x5)] public fixed byte _[0x1];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct VsInputSignature_t {
        [FieldOffset(0x0)] public fixed byte _[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4c)]
    public unsafe struct RenderInputLayoutField_t {
        [FieldOffset(0x0)] public fixed byte _[0x20];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x2];
        [FieldOffset(0x2a)] public fixed byte _[0x1];
        [FieldOffset(0x2b)] public fixed byte _[0x1];
        [FieldOffset(0x2c)] public fixed byte _[0x20];
    }

}