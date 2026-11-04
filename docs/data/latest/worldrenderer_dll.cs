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

namespace Cs2.worldrenderer {

    public enum RTProxyInstanceFlags_t : int {
        RTPROXY_INSTANCE_FLAG_NONE = 0, 
        RTPROXY_INSTANCE_UNIQUE_MESH = 1, 
    }
    public enum ObjectTypeFlags_t : int {
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
    }
    public enum AggregateInstanceStream_t : int {
        AGGREGATE_INSTANCE_STREAM_NONE = 0, 
        AGGREGATE_INSTANCE_STREAM_LIGHTMAPUV_UNORM16 = 1, 
        AGGREGATE_INSTANCE_STREAM_VERTEXTINT_UNORM8 = 2, 
        AGGREGATE_INSTANCE_STREAM_VERTEXBLEND_UNORM8 = 4, 
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CEntityInstance {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_iszPrivateVScripts[0x8];
        [FieldOffset(0x10)] public fixed byte m_pEntity[0x18];
        [FieldOffset(0x28)] public fixed byte m_CScriptComponent[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CEntityComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CScriptComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_scriptClassName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CEntityIdentity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x14];
        [FieldOffset(0x14)] public fixed byte m_nameStringTableIndex[0x4];
        [FieldOffset(0x18)] public fixed byte m_name[0x8];
        [FieldOffset(0x20)] public fixed byte m_designerName[0x10];
        [FieldOffset(0x30)] public fixed byte m_flags[0x8];
        [FieldOffset(0x38)] public fixed byte m_worldGroupId[0x4];
        [FieldOffset(0x3C)] public fixed byte m_fDataObjectTypes[0x4];
        [FieldOffset(0x40)] public fixed byte m_PathIndex[0x8];
        [FieldOffset(0x48)] public fixed byte m_pAttributes[0x8];
        [FieldOffset(0x50)] public fixed byte m_pPrev[0x8];
        [FieldOffset(0x58)] public fixed byte m_pNext[0x8];
        [FieldOffset(0x60)] public fixed byte m_pPrevByClass[0x8];
        [FieldOffset(0x68)] public fixed byte m_pNextByClass[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4C)]
    public unsafe struct RTProxyInstanceInfo_t {
        [FieldOffset(0x0)] public fixed byte m_nFlags[0x1];
        [FieldOffset(0x1)] public fixed byte m_albedoFormat[0x1];
        [FieldOffset(0x2)] public fixed byte m_emissiveFormat[0x2];
        [FieldOffset(0x4)] public fixed byte m_nBLASCount[0x4];
        [FieldOffset(0x8)] public fixed byte m_nBLASIndex[0x4];
        [FieldOffset(0xC)] public fixed byte m_nVertexAlbedoByteOffset[0x4];
        [FieldOffset(0x10)] public fixed byte m_nVertexEmissiveByteOffset[0x4];
        [FieldOffset(0x14)] public fixed byte m_fEmissiveFactor[0x4];
        [FieldOffset(0x18)] public fixed byte m_mWorldFromLocal[0x30];
        [FieldOffset(0x48)] public fixed byte m_vTintColorSRGB[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct AggregateVertexAlbedoStreamOnDiskData_t {
        [FieldOffset(0x0)] public fixed byte m_BufferData[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct SceneObject_t {
        [FieldOffset(0x0)] public fixed byte m_nObjectID[0x4];
        [FieldOffset(0x4)] public fixed byte m_vTransform[0x30];
        [FieldOffset(0x34)] public fixed byte m_flFadeStartDistance[0x4];
        [FieldOffset(0x38)] public fixed byte m_flFadeEndDistance[0x4];
        [FieldOffset(0x3C)] public fixed byte m_vTintColor[0x14];
        [FieldOffset(0x50)] public fixed byte m_skin[0x8];
        [FieldOffset(0x58)] public fixed byte m_nObjectTypeFlags[0x4];
        [FieldOffset(0x5C)] public fixed byte m_vLightingOrigin[0xC];
        [FieldOffset(0x68)] public fixed byte m_nOverlayRenderOrder[0x2];
        [FieldOffset(0x6A)] public fixed byte m_nLODOverride[0x2];
        [FieldOffset(0x6C)] public fixed byte m_nCubeMapPrecomputedHandshake[0x4];
        [FieldOffset(0x70)] public fixed byte m_nLightProbeVolumePrecomputedHandshake[0x4];
        [FieldOffset(0x74)] public fixed byte m_flEmissiveLightingBoost[0xC];
        [FieldOffset(0x80)] public fixed byte m_renderableModel[0x8];
        [FieldOffset(0x88)] public fixed byte m_renderable[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct AggregateLODSetup_t {
        [FieldOffset(0x0)] public fixed byte m_vLODOrigin[0xC];
        [FieldOffset(0xC)] public fixed byte m_fMaxObjectScale[0x4];
        [FieldOffset(0x10)] public fixed byte m_fSwitchDistances[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct ExtraVertexStreamOverride_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4];
        [FieldOffset(0x4)] public fixed byte m_nSubSceneObject[0x4];
        [FieldOffset(0x8)] public fixed byte m_nDrawCallIndex[0x4];
        [FieldOffset(0xC)] public fixed byte m_nAdditionalMeshDrawPrimitiveFlags[0x4];
        [FieldOffset(0x10)] public fixed byte m_extraBufferBinding[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct ClutterTile_t {
        [FieldOffset(0x0)] public fixed byte m_nFirstInstance[0x4];
        [FieldOffset(0x4)] public fixed byte m_nLastInstance[0x4];
        [FieldOffset(0x8)] public fixed byte m_BoundsWs[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct AggregateSceneObject_t {
        [FieldOffset(0x0)] public fixed byte m_allFlags[0x4];
        [FieldOffset(0x4)] public fixed byte m_anyFlags[0x4];
        [FieldOffset(0x8)] public fixed byte m_nLayer[0x2];
        [FieldOffset(0xA)] public fixed byte m_instanceStream[0x2];
        [FieldOffset(0xC)] public fixed byte m_vertexAlbedoStream[0x2];
        [FieldOffset(0xE)] public fixed byte m_vertexEmissiveStream[0x2];
        [FieldOffset(0x10)] public fixed byte m_aggregateMeshes[0x18];
        [FieldOffset(0x28)] public fixed byte m_lodSetups[0x18];
        [FieldOffset(0x40)] public fixed byte m_visClusterMembership[0x18];
        [FieldOffset(0x58)] public fixed byte m_fragmentTransforms[0x18];
        [FieldOffset(0x70)] public fixed byte m_renderableModel[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct NodeData_t {
        [FieldOffset(0x0)] public fixed byte m_vOrigin[0xC];
        [FieldOffset(0xC)] public fixed byte m_vMinBounds[0xC];
        [FieldOffset(0x18)] public fixed byte m_vMaxBounds[0x10];
        [FieldOffset(0x28)] public fixed byte m_worldNodePrefix[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct VMapResourceData_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct AggregateInstanceStreamOnDiskData_t {
        [FieldOffset(0x0)] public fixed byte m_DecodedSize[0x8];
        [FieldOffset(0x8)] public fixed byte m_BufferData[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x44)]
    public unsafe struct RTProxyBLAS_t {
        [FieldOffset(0x0)] public fixed byte m_nFirstIndex[0x4];
        [FieldOffset(0x4)] public fixed byte m_nIndexCount[0x4];
        [FieldOffset(0x8)] public fixed byte m_nVBByteOffset[0x4];
        [FieldOffset(0xC)] public fixed byte m_nBaseVertex[0x4];
        [FieldOffset(0x10)] public fixed byte m_nVertexCount[0x2];
        [FieldOffset(0x12)] public fixed byte m_albedoFormat[0x2];
        [FieldOffset(0x14)] public fixed byte m_boundLs[0x18];
        [FieldOffset(0x2C)] public fixed byte m_vVertexOriginLs[0xC];
        [FieldOffset(0x38)] public fixed byte m_vVertexExtentLs[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct AggregateVertexEmissiveStreamOnDiskData_t {
        [FieldOffset(0x0)] public fixed byte m_BufferData[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct ClutterSceneObject_t {
        [FieldOffset(0x0)] public fixed byte m_Bounds[0x18];
        [FieldOffset(0x18)] public fixed byte m_flags[0x4];
        [FieldOffset(0x1C)] public fixed byte m_nLayer[0x4];
        [FieldOffset(0x20)] public fixed byte m_instancePositions[0x30];
        [FieldOffset(0x50)] public fixed byte m_instanceScales[0x18];
        [FieldOffset(0x68)] public fixed byte m_instanceTintSrgb[0x18];
        [FieldOffset(0x80)] public fixed byte m_tiles[0x18];
        [FieldOffset(0x98)] public fixed byte m_renderableModel[0x8];
        [FieldOffset(0xA0)] public fixed byte m_materialGroup[0x4];
        [FieldOffset(0xA4)] public fixed byte m_flBeginCullSize[0x4];
        [FieldOffset(0xA8)] public fixed byte m_flEndCullSize[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct WorldBuilderParams_t {
        [FieldOffset(0x0)] public fixed byte m_flMinDrawVolumeSize[0x4];
        [FieldOffset(0x4)] public fixed byte m_bBuildBakedLighting[0x1];
        [FieldOffset(0x5)] public fixed byte m_bAggregateInstanceStreams[0x3];
        [FieldOffset(0x8)] public fixed byte m_bakedLightingInfo[0x48];
        [FieldOffset(0x50)] public fixed byte m_nCompileTimestamp[0x8];
        [FieldOffset(0x58)] public fixed byte m_nCompileFingerprint[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct PermEntityLumpData_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_name[0x8];
        [FieldOffset(0x10)] public fixed byte m_childLumps[0x18];
        [FieldOffset(0x28)] public fixed byte m_entityKeyValues[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x190)]
    public unsafe struct WorldNode_t {
        [FieldOffset(0x0)] public fixed byte m_sceneObjects[0x18];
        [FieldOffset(0x18)] public fixed byte m_visClusterMembership[0x18];
        [FieldOffset(0x30)] public fixed byte m_aggregateSceneObjects[0x18];
        [FieldOffset(0x48)] public fixed byte m_clutterSceneObjects[0x18];
        [FieldOffset(0x60)] public fixed byte m_rtProxies[0x18];
        [FieldOffset(0x78)] public fixed byte m_extraVertexStreamOverrides[0x18];
        [FieldOffset(0x90)] public fixed byte m_materialOverrides[0x18];
        [FieldOffset(0xA8)] public fixed byte m_extraVertexStreams[0x18];
        [FieldOffset(0xC0)] public fixed byte m_aggregateInstanceStreams[0x18];
        [FieldOffset(0xD8)] public fixed byte m_vertexAlbedoStreams[0x18];
        [FieldOffset(0xF0)] public fixed byte m_vertexEmissiveStreams[0x18];
        [FieldOffset(0x108)] public fixed byte m_layerNames[0x18];
        [FieldOffset(0x120)] public fixed byte m_sceneObjectLayerIndices[0x18];
        [FieldOffset(0x138)] public fixed byte m_grassFileName[0x8];
        [FieldOffset(0x140)] public fixed byte m_nodeLightingInfo[0x48];
        [FieldOffset(0x188)] public fixed byte m_bHasBakedGeometryFlag[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct BaseSceneObjectOverride_t {
        [FieldOffset(0x0)] public fixed byte m_nSceneObjectIndex[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct EntityIOConnectionData_t {
        [FieldOffset(0x0)] public fixed byte m_outputName[0x8];
        [FieldOffset(0x8)] public fixed byte m_targetType[0x8];
        [FieldOffset(0x10)] public fixed byte m_targetName[0x8];
        [FieldOffset(0x18)] public fixed byte m_inputName[0x8];
        [FieldOffset(0x20)] public fixed byte m_overrideParam[0x8];
        [FieldOffset(0x28)] public fixed byte m_flDelay[0x4];
        [FieldOffset(0x2C)] public fixed byte m_nTimesToFire[0x4];
        [FieldOffset(0x30)] public fixed byte m_paramMap[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct BakedLightingInfo_t {
        [FieldOffset(0x0)] public fixed byte m_nLightmapVersionNumber[0x4];
        [FieldOffset(0x4)] public fixed byte m_nLightmapGameVersionNumber[0x4];
        [FieldOffset(0x8)] public fixed byte m_vLightmapUvScale[0x8];
        [FieldOffset(0x10)] public fixed byte m_bHasLightmaps[0x1];
        [FieldOffset(0x11)] public fixed byte m_bBakedShadowsGamma20[0x1];
        [FieldOffset(0x12)] public fixed byte m_bCompressionEnabled[0x1];
        [FieldOffset(0x13)] public fixed byte m_nLPVEncoding[0x1];
        [FieldOffset(0x14)] public fixed byte m_nLightmapEncoding[0x1];
        [FieldOffset(0x15)] public fixed byte m_nChartPackIterations[0x1];
        [FieldOffset(0x16)] public fixed byte m_nVradQuality[0x2];
        [FieldOffset(0x18)] public fixed byte m_lightMaps[0x18];
        [FieldOffset(0x30)] public fixed byte m_bakedShadows[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct VoxelVisBlockOffset_t {
        [FieldOffset(0x0)] public fixed byte m_nOffset[0x4];
        [FieldOffset(0x4)] public fixed byte m_nElementCount[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeVMapResourceData_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct WorldNodeOnDiskBufferData_t {
        [FieldOffset(0x0)] public fixed byte m_nElementCount[0x4];
        [FieldOffset(0x4)] public fixed byte m_nElementSizeInBytes[0x4];
        [FieldOffset(0x8)] public fixed byte m_inputLayoutFields[0x18];
        [FieldOffset(0x20)] public fixed byte m_pData[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2C)]
    public unsafe struct AggregateMeshInfo_t {
        [FieldOffset(0x0)] public fixed byte m_nVisClusterMemberOffset[0x4];
        [FieldOffset(0x4)] public fixed byte m_nVisClusterMemberCount[0x1];
        [FieldOffset(0x5)] public fixed byte m_bHasTransform[0x1];
        [FieldOffset(0x6)] public fixed byte m_nLODGroupMask[0x2];
        [FieldOffset(0x8)] public fixed byte m_nDrawCallIndex[0x2];
        [FieldOffset(0xA)] public fixed byte m_nLODSetupIndex[0x2];
        [FieldOffset(0xC)] public fixed byte m_vTintColor[0x4];
        [FieldOffset(0x10)] public fixed byte m_objectFlags[0x4];
        [FieldOffset(0x14)] public fixed byte m_nLightProbeVolumePrecomputedHandshake[0x4];
        [FieldOffset(0x18)] public fixed byte m_nInstanceStreamOffset[0x4];
        [FieldOffset(0x1C)] public fixed byte m_nVertexAlbedoStreamOffset[0x4];
        [FieldOffset(0x20)] public fixed byte m_nVertexEmissiveStreamOffset[0x4];
        [FieldOffset(0x24)] public fixed byte m_instanceStreams[0x4];
        [FieldOffset(0x28)] public fixed byte m_fEmissiveFactor[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD8)]
    public unsafe struct World_t {
        [FieldOffset(0x0)] public fixed byte m_builderParams[0x60];
        [FieldOffset(0x60)] public fixed byte m_worldNodes[0x18];
        [FieldOffset(0x78)] public fixed byte m_worldLightingInfo[0x48];
        [FieldOffset(0xC0)] public fixed byte m_entityLumps[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct BakedLightingInfo_t__BakedShadowAssignment_t {
        [FieldOffset(0x0)] public fixed byte m_nLightHash[0x4];
        [FieldOffset(0x4)] public fixed byte m_nMapHash[0x4];
        [FieldOffset(0x8)] public fixed byte m_nShadowChannel[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct MaterialOverride_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4];
        [FieldOffset(0x4)] public fixed byte m_nSubSceneObject[0x4];
        [FieldOffset(0x8)] public fixed byte m_nDrawCallIndex[0x8];
        [FieldOffset(0x10)] public fixed byte m_pMaterial[0x8];
        [FieldOffset(0x18)] public fixed byte m_vLinearTintColor[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct AggregateRTProxySceneObject_t {
        [FieldOffset(0x0)] public fixed byte m_nLayer[0x8];
        [FieldOffset(0x8)] public fixed byte m_BLASes[0x18];
        [FieldOffset(0x20)] public fixed byte m_Instances[0x18];
        [FieldOffset(0x38)] public fixed byte m_VBData[0x10];
        [FieldOffset(0x48)] public fixed byte m_IBData[0x10];
        [FieldOffset(0x58)] public fixed byte m_InstanceAlbedoData[0x10];
        [FieldOffset(0x68)] public fixed byte m_InstanceEmissiveData[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct EntityKeyValueData_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_connections[0x18];
        [FieldOffset(0x20)] public fixed byte m_keyValuesData[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA0)]
    public unsafe struct CVoxelVisibility {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
        [FieldOffset(0x40)] public fixed byte m_nBaseClusterCount[0x4];
        [FieldOffset(0x44)] public fixed byte m_nPVSBytesPerCluster[0x4];
        [FieldOffset(0x48)] public fixed byte m_vMinBounds[0xC];
        [FieldOffset(0x54)] public fixed byte m_vMaxBounds[0xC];
        [FieldOffset(0x60)] public fixed byte m_flGridSize[0x4];
        [FieldOffset(0x64)] public fixed byte m_nSkyVisibilityCluster[0x4];
        [FieldOffset(0x68)] public fixed byte m_nSunVisibilityCluster[0x4];
        [FieldOffset(0x6C)] public fixed byte m_NodeBlock[0x8];
        [FieldOffset(0x74)] public fixed byte m_RegionBlock[0x8];
        [FieldOffset(0x7C)] public fixed byte m_EnclosedClusterListBlock[0x8];
        [FieldOffset(0x84)] public fixed byte m_EnclosedClustersBlock[0x8];
        [FieldOffset(0x8C)] public fixed byte m_MasksBlock[0x8];
        [FieldOffset(0x94)] public fixed byte m_nVisBlocks[0xC];
    }
}