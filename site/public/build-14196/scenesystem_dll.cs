/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Total Offsets   : 202
/*  Dumped At       : 13:50 05/11/2026 (GMT)
/*  Dumped In       : 1,2s
*/

/* cesium dumper | generated from live schema */
using System;
using System.Runtime.InteropServices;

namespace Cs2.scenesystem_dll {

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CSSDSMsg_ViewTarget {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct SceneViewId_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CSSDSEndFrameViewInfo {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CSSDSMsg_PostLayer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CSSDSMsg_LayerBase {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CSSDSMsg_PreLayer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CSSDSMsg_ViewTargetList {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CSSDSMsg_ViewRender {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CSSDSMsg_EndFrame {
        [FieldOffset(0x0)] public fixed byte _[0x18];
    }

}