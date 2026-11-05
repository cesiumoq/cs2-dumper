/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Total Offsets   : 202
/*  Dumped At       : 13:50 05/11/2026 (GMT)
/*  Dumped In       : 1,2s
*/

/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

#pragma once
#include <cstddef>
#include <cstdint>

namespace cs2::worldrenderer_dll {

enum class RTProxyInstanceFlags_t : std::int32_t {
    RTPROXY_INSTANCE_FLAG_NONE = 0,
    RTPROXY_INSTANCE_UNIQUE_MESH = 1,
};

enum class ObjectTypeFlags_t : std::int32_t {
    OBJECT_TYPE_NONE = 0,
    OBJECT_TYPE_MODEL = 8,
    OBJECT_TYPE_BLOCK_LIGHT = 16,
    OBJECT_TYPE_NO_SHADOWS = 32,
    OBJECT_TYPE_WORLDSPACE_TEXURE_BLEND = 64,
    OBJECT_TYPE_DISABLED_IN_LOW_QUALITY = 128,
    OBJECT_TYPE_RENDER_WITH_DYNAMIC = 512,
    OBJECT_TYPE_RENDER_TO_CUBEMAPS = 1024,
    OBJECT_TYPE_MODEL_HAS_LODS = 2048,
    OBJECT_TYPE_OVERLAY = 8192,
    OBJECT_TYPE_PRECOMPUTED_VISMEMBERS = 16384,
    OBJECT_TYPE_STATIC_CUBE_MAP = 32768,
    OBJECT_TYPE_DISABLE_VIS_CULLING = 65536,
    OBJECT_TYPE_BAKED_GEOMETRY = 131072,
    OBJECT_TYPE_NEEDS_DYNAMIC_SHADOWS = 262144,
    OBJECT_TYPE_HAS_AGGREGATE_RTPROXY = 524288,
    OBJECT_TYPE_HAS_EMISSIVE_GI = 1048576,
};

enum class AggregateInstanceStream_t : std::int32_t {
    AGGREGATE_INSTANCE_STREAM_NONE = 0,
    AGGREGATE_INSTANCE_STREAM_LIGHTMAPUV_UNORM16 = 1,
    AGGREGATE_INSTANCE_STREAM_VERTEXTINT_UNORM8 = 2,
    AGGREGATE_INSTANCE_STREAM_VERTEXBLEND_UNORM8 = 4,
};

struct CEntityInstance {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x8]; // 0x28 
};

struct CEntityComponent {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct CScriptComponent {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x8]; // 0x30 
};

struct CEntityIdentity {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x14]; // 0x0
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x10]; // 0x20 
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x8]; // 0x40 
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x8]; // 0x50 
    std::uint8_t _[0x8]; // 0x58 
    std::uint8_t _[0x8]; // 0x60 
    std::uint8_t _[0x8]; // 0x68 
};

struct RTProxyInstanceInfo_t {
    static constexpr std::size_t size = 0x4c;
    std::uint8_t _[0x1]; // 0x0 
    std::uint8_t _[0x1]; // 0x1 
    std::uint8_t _[0x2]; // 0x2 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x30]; // 0x18 
    std::uint8_t _[0x4]; // 0x48 
};

struct AggregateVertexAlbedoStreamOnDiskData_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x10]; // 0x0 
};

struct SceneObject_t {
    static constexpr std::size_t size = 0x90;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x30]; // 0x4 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x14]; // 0x3c 
    std::uint8_t _[0x8]; // 0x50 
    std::uint8_t _[0x4]; // 0x58 
    std::uint8_t _[0xc]; // 0x5c 
    std::uint8_t _[0x2]; // 0x68 
    std::uint8_t _[0x2]; // 0x6a 
    std::uint8_t _[0x4]; // 0x6c 
    std::uint8_t _[0x4]; // 0x70 
    std::uint8_t _[0xc]; // 0x74 
    std::uint8_t _[0x8]; // 0x80 
    std::uint8_t _[0x8]; // 0x88 
};

struct AggregateLODSetup_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x18]; // 0x10 
};

struct ExtraVertexStreamOverride_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x4]; // 0x0
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x20]; // 0x10 
};

struct ClutterTile_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x18]; // 0x8 
};

struct AggregateSceneObject_t {
    static constexpr std::size_t size = 0x78;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x2]; // 0x8 
    std::uint8_t _[0x2]; // 0xa 
    std::uint8_t _[0x2]; // 0xc 
    std::uint8_t _[0x2]; // 0xe 
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x18]; // 0x28 
    std::uint8_t _[0x18]; // 0x40 
    std::uint8_t _[0x18]; // 0x58 
    std::uint8_t _[0x8]; // 0x70 
};

struct NodeData_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0xc]; // 0xc 
    std::uint8_t _[0x10]; // 0x18 
    std::uint8_t _[0x8]; // 0x28 
};

struct VMapResourceData_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct AggregateInstanceStreamOnDiskData_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x10]; // 0x8 
};

struct RTProxyBLAS_t {
    static constexpr std::size_t size = 0x44;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x2]; // 0x12 
    std::uint8_t _[0x18]; // 0x14 
    std::uint8_t _[0xc]; // 0x2c 
    std::uint8_t _[0xc]; // 0x38 
};

struct AggregateVertexEmissiveStreamOnDiskData_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x10]; // 0x0 
};

struct ClutterSceneObject_t {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x30]; // 0x20 
    std::uint8_t _[0x18]; // 0x50 
    std::uint8_t _[0x18]; // 0x68 
    std::uint8_t _[0x18]; // 0x80 
    std::uint8_t _[0x8]; // 0x98 
    std::uint8_t _[0x4]; // 0xa0 
    std::uint8_t _[0x4]; // 0xa4 
    std::uint8_t _[0x8]; // 0xa8 
};

struct WorldBuilderParams_t {
    static constexpr std::size_t size = 0x60;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x1]; // 0x4 
    std::uint8_t _[0x3]; // 0x5 
    std::uint8_t _[0x48]; // 0x8 
    std::uint8_t _[0x8]; // 0x50 
    std::uint8_t _[0x8]; // 0x58 
};

struct PermEntityLumpData_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x10]; // 0x28 
};

struct WorldNode_t {
    static constexpr std::size_t size = 0x190;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x18]; // 0x18 
    std::uint8_t _[0x18]; // 0x30 
    std::uint8_t _[0x18]; // 0x48 
    std::uint8_t _[0x18]; // 0x60 
    std::uint8_t _[0x18]; // 0x78 
    std::uint8_t _[0x18]; // 0x90 
    std::uint8_t _[0x18]; // 0xa8 
    std::uint8_t _[0x18]; // 0xc0 
    std::uint8_t _[0x18]; // 0xd8 
    std::uint8_t _[0x18]; // 0xf0 
    std::uint8_t _[0x18]; // 0x108 
    std::uint8_t _[0x18]; // 0x120 
    std::uint8_t _[0x8]; // 0x138 
    std::uint8_t _[0x48]; // 0x140 
    std::uint8_t _[0x8]; // 0x188 
};

struct BaseSceneObjectOverride_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct EntityIOConnectionData_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x10]; // 0x30 
};

struct BakedLightingInfo_t {
    static constexpr std::size_t size = 0x48;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x1]; // 0x10 
    std::uint8_t _[0x1]; // 0x11 
    std::uint8_t _[0x1]; // 0x12 
    std::uint8_t _[0x1]; // 0x13 
    std::uint8_t _[0x1]; // 0x14 
    std::uint8_t _[0x1]; // 0x15 
    std::uint8_t _[0x2]; // 0x16 
    std::uint8_t _[0x18]; // 0x18 
    std::uint8_t _[0x18]; // 0x30 
};

struct VoxelVisBlockOffset_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct InfoForResourceTypeVMapResourceData_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct WorldNodeOnDiskBufferData_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x18]; // 0x8 
    std::uint8_t _[0x18]; // 0x20 
};

struct AggregateMeshInfo_t {
    static constexpr std::size_t size = 0x2c;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x1]; // 0x4 
    std::uint8_t _[0x1]; // 0x5 
    std::uint8_t _[0x2]; // 0x6 
    std::uint8_t _[0x2]; // 0x8 
    std::uint8_t _[0x2]; // 0xa 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x4]; // 0x28 
};

struct World_t {
    static constexpr std::size_t size = 0xd8;
    std::uint8_t _[0x60]; // 0x0 
    std::uint8_t _[0x18]; // 0x60 
    std::uint8_t _[0x48]; // 0x78 
    std::uint8_t _[0x18]; // 0xc0 
};

struct BakedLightingInfo_t__BakedShadowAssignment_t {
    static constexpr std::size_t size = 0xc;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
};

struct MaterialOverride_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x4]; // 0x0
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x10]; // 0x18 
};

struct AggregateRTProxySceneObject_t {
    static constexpr std::size_t size = 0x78;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x18]; // 0x8 
    std::uint8_t _[0x18]; // 0x20 
    std::uint8_t _[0x10]; // 0x38 
    std::uint8_t _[0x10]; // 0x48 
    std::uint8_t _[0x10]; // 0x58 
    std::uint8_t _[0x10]; // 0x68 
};

struct EntityKeyValueData_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x18]; // 0x8 
    std::uint8_t _[0x18]; // 0x20 
};

struct CVoxelVisibility {
    static constexpr std::size_t size = 0xa0;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x4]; // 0x44 
    std::uint8_t _[0xc]; // 0x48 
    std::uint8_t _[0xc]; // 0x54 
    std::uint8_t _[0x4]; // 0x60 
    std::uint8_t _[0x4]; // 0x64 
    std::uint8_t _[0x4]; // 0x68 
    std::uint8_t _[0x8]; // 0x6c 
    std::uint8_t _[0x8]; // 0x74 
    std::uint8_t _[0x8]; // 0x7c 
    std::uint8_t _[0x8]; // 0x84 
    std::uint8_t _[0x8]; // 0x8c 
    std::uint8_t _[0xc]; // 0x94 
};

} // namespace