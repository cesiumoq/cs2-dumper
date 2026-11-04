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

namespace Cs2.scenesystem {

    public enum ESceneObjectMeshletVisualization : int {
        SCENEOBJECT_MESHLET_VIS_NONE = 0, 
        SCENEOBJECT_MESHLET_VIS_MESHLET = 1, 
        SCENEOBJECT_MESHLET_VIS_CULLED = 2, 
    }
    public enum SceneStatsSections_t : int {
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
    }
    public enum ESceneViewDebugOverlaysListenerDataType_t : int {
        k_ESceneViewDebugOverlaysListenerDataType_Unknown = 0, 
        k_ESceneViewDebugOverlaysListenerDataType_Sphere = 1, 
        k_ESceneViewDebugOverlaysListenerDataType_Capsule = 2, 
        k_ESceneViewDebugOverlaysListenerDataType_BoxAngles = 3, 
        k_ESceneViewDebugOverlaysListenerDataType_Line = 4, 
        k_ESceneViewDebugOverlaysListenerDataType_SolidBoxAngles = 5, 
        k_ESceneViewDebugOverlaysListenerDataType_Text3D = 6, 
    }
    public enum ESilhouetteType_t : int {
        SILHOUETTE_NONE = 0, 
        SILHOUETTE_LIGHT = 1, 
        SILHOUETTE_ENVMAP = 2, 
        SILHOUETTE_LPV = 4, 
    }
    public enum DisableShadows_t : int {
        kDisableShadows_None = 0, 
        kDisableShadows_All = 1, 
        kDisableShadows_Baked = 2, 
        kDisableShadows_Realtime = 3, 
        kDisableShadows_ReallyNone = 4, 
    }
    public enum DecalRtEncoding_t : int {
        kDecalInvalid = 255, 
        kDecalMin = 0, 
        kDecalBlood = 0, 
        kDecalCloak = 1, 
        kDecalMax = 2, 
        kDecalDefault = 0, 
    }
    public enum ESceneObjectVisualization : int {
        SCENEOBJECT_VIS_NONE = 0, 
        SCENEOBJECT_VIS_OBJECT = 1, 
        SCENEOBJECT_VIS_MATERIAL = 2, 
        SCENEOBJECT_VIS_TEXTURE_SIZE = 3, 
        SCENEOBJECT_VIS_LOD = 4, 
        SCENEOBJECT_VIS_INSTANCING = 5, 
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CSSDSMsg_ViewTarget {
        [FieldOffset(0x0)] public fixed byte m_Name[0x8];
        [FieldOffset(0x8)] public fixed byte m_TextureId[0x8];
        [FieldOffset(0x10)] public fixed byte m_nWidth[0x4];
        [FieldOffset(0x14)] public fixed byte m_nHeight[0x4];
        [FieldOffset(0x18)] public fixed byte m_nRequestedWidth[0x4];
        [FieldOffset(0x1C)] public fixed byte m_nRequestedHeight[0x4];
        [FieldOffset(0x20)] public fixed byte m_nNumMipLevels[0x4];
        [FieldOffset(0x24)] public fixed byte m_nDepth[0x4];
        [FieldOffset(0x28)] public fixed byte m_nMultisampleNumSamples[0x4];
        [FieldOffset(0x2C)] public fixed byte m_nFormat[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct SceneViewId_t {
        [FieldOffset(0x0)] public fixed byte m_nViewId[0x8];
        [FieldOffset(0x8)] public fixed byte m_nFrameCount[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CSSDSEndFrameViewInfo {
        [FieldOffset(0x0)] public fixed byte m_nViewId[0x8];
        [FieldOffset(0x8)] public fixed byte m_ViewName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CSSDSMsg_PostLayer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CSSDSMsg_LayerBase {
        [FieldOffset(0x0)] public fixed byte m_viewId[0x10];
        [FieldOffset(0x10)] public fixed byte m_ViewName[0x8];
        [FieldOffset(0x18)] public fixed byte m_nLayerId[0x8];
        [FieldOffset(0x20)] public fixed byte m_LayerName[0x8];
        [FieldOffset(0x28)] public fixed byte m_displayText[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CSSDSMsg_PreLayer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CSSDSMsg_ViewTargetList {
        [FieldOffset(0x0)] public fixed byte m_viewId[0x10];
        [FieldOffset(0x10)] public fixed byte m_ViewName[0x8];
        [FieldOffset(0x18)] public fixed byte m_Targets[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CSSDSMsg_ViewRender {
        [FieldOffset(0x0)] public fixed byte m_viewId[0x10];
        [FieldOffset(0x10)] public fixed byte m_ViewName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CSSDSMsg_EndFrame {
        [FieldOffset(0x0)] public fixed byte m_Views[0x18];
    }
}