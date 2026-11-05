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

namespace cs2::scenesystem_dll {

enum class ESceneObjectMeshletVisualization : std::int32_t {
    SCENEOBJECT_MESHLET_VIS_NONE = 0,
    SCENEOBJECT_MESHLET_VIS_MESHLET = 1,
    SCENEOBJECT_MESHLET_VIS_CULLED = 2,
};

enum class SceneStatsSections_t : std::int32_t {
    SCENE_STATS_NONE = 0,
    SCENE_STATS_FRAME = 1,
    SCENE_STATS_GEOMETRY = 2,
    SCENE_STATS_CULLING = 4,
    SCENE_STATS_MATERIALS = 8,
    SCENE_STATS_LIGHTING = 16,
    SCENE_STATS_RAYTRACING = 32,
    SCENE_STATS_INTERNALS = 64,
    SCENE_STATS_RENDERDEVICE = 128,
    SCENE_STATS_ALL = 255,
    SCENE_STATS_DEFAULT = 127,
};

enum class ESceneViewDebugOverlaysListenerDataType_t : std::int32_t {
    k_ESceneViewDebugOverlaysListenerDataType_Unknown = 0,
    k_ESceneViewDebugOverlaysListenerDataType_Sphere = 1,
    k_ESceneViewDebugOverlaysListenerDataType_Capsule = 2,
    k_ESceneViewDebugOverlaysListenerDataType_BoxAngles = 3,
    k_ESceneViewDebugOverlaysListenerDataType_Line = 4,
    k_ESceneViewDebugOverlaysListenerDataType_SolidBoxAngles = 5,
    k_ESceneViewDebugOverlaysListenerDataType_Text3D = 6,
};

enum class ESilhouetteType_t : std::int32_t {
    SILHOUETTE_NONE = 0,
    SILHOUETTE_LIGHT = 1,
    SILHOUETTE_ENVMAP = 2,
    SILHOUETTE_LPV = 4,
};

enum class DisableShadows_t : std::int32_t {
    kDisableShadows_None = 0,
    kDisableShadows_All = 1,
    kDisableShadows_Baked = 2,
    kDisableShadows_Realtime = 3,
    kDisableShadows_ReallyNone = 4,
};

enum class DecalRtEncoding_t : std::int32_t {
    kDecalInvalid = 255,
    kDecalMin = 0,
    kDecalBlood = 0,
    kDecalCloak = 1,
    kDecalMax = 2,
    kDecalDefault = 0,
};

enum class ESceneObjectVisualization : std::int32_t {
    SCENEOBJECT_VIS_NONE = 0,
    SCENEOBJECT_VIS_OBJECT = 1,
    SCENEOBJECT_VIS_MATERIAL = 2,
    SCENEOBJECT_VIS_TEXTURE_SIZE = 3,
    SCENEOBJECT_VIS_LOD = 4,
    SCENEOBJECT_VIS_INSTANCING = 5,
};

struct CSSDSMsg_ViewTarget {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
};

struct SceneViewId_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
};

struct CSSDSEndFrameViewInfo {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
};

struct CSSDSMsg_PostLayer {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x30]; // 0x0
};

struct CSSDSMsg_LayerBase {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
};

struct CSSDSMsg_PreLayer {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x30]; // 0x0
};

struct CSSDSMsg_ViewTargetList {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x18]; // 0x18 
};

struct CSSDSMsg_ViewRender {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x8]; // 0x10 
};

struct CSSDSMsg_EndFrame {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x18]; // 0x0 
};

} // namespace