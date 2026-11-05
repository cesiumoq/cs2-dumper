/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Total Offsets   : 202
/*  Dumped At       : 13:00 05/11/2026 (GMT)
/*  Dumped In       : 1,2s
*/

/* cesium dumper | generated from live schema */
using System;
using System.Runtime.InteropServices;

namespace Cs2.schemasystem_dll {

    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCResourceManifestInternal {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x180)]
    public unsafe struct CSchemaSystemInternalRegistration {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0xc];
        [FieldOffset(0x14)] public fixed byte _[0xc];
        [FieldOffset(0x20)] public fixed byte _[0x10];
        [FieldOffset(0x30)] public fixed byte _[0x10];
        [FieldOffset(0x40)] public fixed byte _[0xc];
        [FieldOffset(0x4c)] public fixed byte _[0xc];
        [FieldOffset(0x58)] public fixed byte _[0xc];
        [FieldOffset(0x64)] public fixed byte _[0xc];
        [FieldOffset(0x70)] public fixed byte _[0x10];
        [FieldOffset(0x80)] public fixed byte _[0x30];
        [FieldOffset(0xb0)] public fixed byte _[0x30];
        [FieldOffset(0xe0)] public fixed byte _[0x4];
        [FieldOffset(0xe4)] public fixed byte _[0x1c];
        [FieldOffset(0x100)] public fixed byte _[0x20];
        [FieldOffset(0x120)] public fixed byte _[0x8];
        [FieldOffset(0x128)] public fixed byte _[0x10];
        [FieldOffset(0x138)] public fixed byte _[0x8];
        [FieldOffset(0x140)] public fixed byte _[0x4];
        [FieldOffset(0x144)] public fixed byte _[0x4];
        [FieldOffset(0x148)] public fixed byte _[0x18];
        [FieldOffset(0x160)] public fixed byte _[0x8];
        [FieldOffset(0x168)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CExampleSchemaVData_PolymorphicDerivedA {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CExampleSchemaVData_PolymorphicBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CExampleSchemaVData_PolymorphicDerivedB {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct ResourceId_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CExampleSchemaVData_Monomorphic {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
    }

}