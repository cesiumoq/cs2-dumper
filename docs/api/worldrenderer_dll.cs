/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Total Offsets   : 202
/*  Dumped At       : 14:17 05/11/2026 (GMT)
/*  Dumped In       : 1,2s
*/

/* cesium dumper | generated from live schema */
using System;
using System.Runtime.InteropServices;

namespace Cs2.worldrenderer_dll {

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CEntityInstance {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CEntityComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CScriptComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CEntityIdentity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x14];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x10];
        [FieldOffset(0x30)] public fixed byte _[0x8];
        [FieldOffset(0x38)] public fixed byte _[0x4];
        [FieldOffset(0x3c)] public fixed byte _[0x4];
        [FieldOffset(0x40)] public fixed byte _[0x8];
        [FieldOffset(0x48)] public fixed byte _[0x8];
        [FieldOffset(0x50)] public fixed byte _[0x8];
        [FieldOffset(0x58)] public fixed byte _[0x8];
        [FieldOffset(0x60)] public fixed byte _[0x8];
        [FieldOffset(0x68)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4c)]
    public unsafe struct RTProxyInstanceInfo_t {
        [FieldOffset(0x0)] public fixed byte _[0x1];
        [FieldOffset(0x1)] public fixed byte _[0x1];
        [FieldOffset(0x2)] public fixed byte _[0x2];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x30];
        [FieldOffset(0x48)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct AggregateVertexAlbedoStreamOnDiskData_t {
        [FieldOffset(0x0)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct SceneObject_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x30];
        [FieldOffset(0x34)] public fixed byte _[0x4];
        [FieldOffset(0x38)] public fixed byte _[0x4];
        [FieldOffset(0x3c)] public fixed byte _[0x14];
        [FieldOffset(0x50)] public fixed byte _[0x8];
        [FieldOffset(0x58)] public fixed byte _[0x4];
        [FieldOffset(0x5c)] public fixed byte _[0xc];
        [FieldOffset(0x68)] public fixed byte _[0x2];
        [FieldOffset(0x6a)] public fixed byte _[0x2];
        [FieldOffset(0x6c)] public fixed byte _[0x4];
        [FieldOffset(0x70)] public fixed byte _[0x4];
        [FieldOffset(0x74)] public fixed byte _[0xc];
        [FieldOffset(0x80)] public fixed byte _[0x8];
        [FieldOffset(0x88)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct AggregateLODSetup_t {
        [FieldOffset(0x0)] public fixed byte _[0xc];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct ExtraVertexStreamOverride_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x20];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct ClutterTile_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct AggregateSceneObject_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x2];
        [FieldOffset(0xa)] public fixed byte _[0x2];
        [FieldOffset(0xc)] public fixed byte _[0x2];
        [FieldOffset(0xe)] public fixed byte _[0x2];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x18];
        [FieldOffset(0x40)] public fixed byte _[0x18];
        [FieldOffset(0x58)] public fixed byte _[0x18];
        [FieldOffset(0x70)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct NodeData_t {
        [FieldOffset(0x0)] public fixed byte _[0xc];
        [FieldOffset(0xc)] public fixed byte _[0xc];
        [FieldOffset(0x18)] public fixed byte _[0x10];
        [FieldOffset(0x28)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct VMapResourceData_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct AggregateInstanceStreamOnDiskData_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x44)]
    public unsafe struct RTProxyBLAS_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x2];
        [FieldOffset(0x12)] public fixed byte _[0x2];
        [FieldOffset(0x14)] public fixed byte _[0x18];
        [FieldOffset(0x2c)] public fixed byte _[0xc];
        [FieldOffset(0x38)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct AggregateVertexEmissiveStreamOnDiskData_t {
        [FieldOffset(0x0)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xb0)]
    public unsafe struct ClutterSceneObject_t {
        [FieldOffset(0x0)] public fixed byte _[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x30];
        [FieldOffset(0x50)] public fixed byte _[0x18];
        [FieldOffset(0x68)] public fixed byte _[0x18];
        [FieldOffset(0x80)] public fixed byte _[0x18];
        [FieldOffset(0x98)] public fixed byte _[0x8];
        [FieldOffset(0xa0)] public fixed byte _[0x4];
        [FieldOffset(0xa4)] public fixed byte _[0x4];
        [FieldOffset(0xa8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct WorldBuilderParams_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x1];
        [FieldOffset(0x5)] public fixed byte _[0x3];
        [FieldOffset(0x8)] public fixed byte _[0x48];
        [FieldOffset(0x50)] public fixed byte _[0x8];
        [FieldOffset(0x58)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct PermEntityLumpData_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x190)]
    public unsafe struct WorldNode_t {
        [FieldOffset(0x0)] public fixed byte _[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x18];
        [FieldOffset(0x30)] public fixed byte _[0x18];
        [FieldOffset(0x48)] public fixed byte _[0x18];
        [FieldOffset(0x60)] public fixed byte _[0x18];
        [FieldOffset(0x78)] public fixed byte _[0x18];
        [FieldOffset(0x90)] public fixed byte _[0x18];
        [FieldOffset(0xa8)] public fixed byte _[0x18];
        [FieldOffset(0xc0)] public fixed byte _[0x18];
        [FieldOffset(0xd8)] public fixed byte _[0x18];
        [FieldOffset(0xf0)] public fixed byte _[0x18];
        [FieldOffset(0x108)] public fixed byte _[0x18];
        [FieldOffset(0x120)] public fixed byte _[0x18];
        [FieldOffset(0x138)] public fixed byte _[0x8];
        [FieldOffset(0x140)] public fixed byte _[0x48];
        [FieldOffset(0x188)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct BaseSceneObjectOverride_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct EntityIOConnectionData_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
        [FieldOffset(0x30)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct BakedLightingInfo_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x1];
        [FieldOffset(0x11)] public fixed byte _[0x1];
        [FieldOffset(0x12)] public fixed byte _[0x1];
        [FieldOffset(0x13)] public fixed byte _[0x1];
        [FieldOffset(0x14)] public fixed byte _[0x1];
        [FieldOffset(0x15)] public fixed byte _[0x1];
        [FieldOffset(0x16)] public fixed byte _[0x2];
        [FieldOffset(0x18)] public fixed byte _[0x18];
        [FieldOffset(0x30)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct VoxelVisBlockOffset_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeVMapResourceData_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct WorldNodeOnDiskBufferData_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x18];
        [FieldOffset(0x20)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x2c)]
    public unsafe struct AggregateMeshInfo_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x1];
        [FieldOffset(0x5)] public fixed byte _[0x1];
        [FieldOffset(0x6)] public fixed byte _[0x2];
        [FieldOffset(0x8)] public fixed byte _[0x2];
        [FieldOffset(0xa)] public fixed byte _[0x2];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
        [FieldOffset(0x28)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xd8)]
    public unsafe struct World_t {
        [FieldOffset(0x0)] public fixed byte _[0x60];
        [FieldOffset(0x60)] public fixed byte _[0x18];
        [FieldOffset(0x78)] public fixed byte _[0x48];
        [FieldOffset(0xc0)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc)]
    public unsafe struct BakedLightingInfo_t__BakedShadowAssignment_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct MaterialOverride_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct AggregateRTProxySceneObject_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x18];
        [FieldOffset(0x20)] public fixed byte _[0x18];
        [FieldOffset(0x38)] public fixed byte _[0x10];
        [FieldOffset(0x48)] public fixed byte _[0x10];
        [FieldOffset(0x58)] public fixed byte _[0x10];
        [FieldOffset(0x68)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct EntityKeyValueData_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x18];
        [FieldOffset(0x20)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xa0)]
    public unsafe struct CVoxelVisibility {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
        [FieldOffset(0x40)] public fixed byte _[0x4];
        [FieldOffset(0x44)] public fixed byte _[0x4];
        [FieldOffset(0x48)] public fixed byte _[0xc];
        [FieldOffset(0x54)] public fixed byte _[0xc];
        [FieldOffset(0x60)] public fixed byte _[0x4];
        [FieldOffset(0x64)] public fixed byte _[0x4];
        [FieldOffset(0x68)] public fixed byte _[0x4];
        [FieldOffset(0x6c)] public fixed byte _[0x8];
        [FieldOffset(0x74)] public fixed byte _[0x8];
        [FieldOffset(0x7c)] public fixed byte _[0x8];
        [FieldOffset(0x84)] public fixed byte _[0x8];
        [FieldOffset(0x8c)] public fixed byte _[0x8];
        [FieldOffset(0x94)] public fixed byte _[0xc];
    }

}