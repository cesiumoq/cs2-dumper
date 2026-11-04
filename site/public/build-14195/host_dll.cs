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

namespace Cs2.host {

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct EmptyTestScript {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_hTest[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CAnimScriptBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_bIsValid[0x8];
    }
}