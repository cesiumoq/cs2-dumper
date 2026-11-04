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

#pragma once
#include <cstddef>
#include <cstdint>

namespace cs2::worldrenderer {

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
    std::uint8_t m_iszPrivateVScripts[0x8]; // 0x8 CUtlSymbolLarge
    std::uint8_t m_pEntity[0x18]; // 0x10 CEntityIdentity*
    std::uint8_t m_CScriptComponent[0x8]; // 0x28 CScriptComponent*
};

struct CEntityComponent {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct CScriptComponent {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_scriptClassName[0x8]; // 0x30 CUtlSymbolLarge
};

struct CEntityIdentity {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x14]; // 0x0
    std::uint8_t m_nameStringTableIndex[0x4]; // 0x14 int32
    std::uint8_t m_name[0x8]; // 0x18 CUtlSymbolLarge
    std::uint8_t m_designerName[0x10]; // 0x20 CUtlSymbolLarge
    std::uint8_t m_flags[0x8]; // 0x30 uint32
    std::uint8_t m_worldGroupId[0x4]; // 0x38 WorldGroupId_t
    std::uint8_t m_fDataObjectTypes[0x4]; // 0x3C uint32
    std::uint8_t m_PathIndex[0x8]; // 0x40 ChangeAccessorFieldPathIndex_t
    std::uint8_t m_pAttributes[0x8]; // 0x48 CEntityAttributeTable*
    std::uint8_t m_pPrev[0x8]; // 0x50 CEntityIdentity*
    std::uint8_t m_pNext[0x8]; // 0x58 CEntityIdentity*
    std::uint8_t m_pPrevByClass[0x8]; // 0x60 CEntityIdentity*
    std::uint8_t m_pNextByClass[0x8]; // 0x68 CEntityIdentity*
};

struct RTProxyInstanceInfo_t {
    static constexpr std::size_t size = 0x4C;
    std::uint8_t m_nFlags[0x1]; // 0x0 RTProxyInstanceFlags_t
    std::uint8_t m_albedoFormat[0x1]; // 0x1 VertexAlbedoFormat_t
    std::uint8_t m_emissiveFormat[0x2]; // 0x2 VertexAlbedoFormat_t
    std::uint8_t m_nBLASCount[0x4]; // 0x4 uint16
    std::uint8_t m_nBLASIndex[0x4]; // 0x8 uint32
    std::uint8_t m_nVertexAlbedoByteOffset[0x4]; // 0xC uint32
    std::uint8_t m_nVertexEmissiveByteOffset[0x4]; // 0x10 uint32
    std::uint8_t m_fEmissiveFactor[0x4]; // 0x14 float32
    std::uint8_t m_mWorldFromLocal[0x30]; // 0x18 matrix3x4_t
    std::uint8_t m_vTintColorSRGB[0x4]; // 0x48 Color
};

struct AggregateVertexAlbedoStreamOnDiskData_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_BufferData[0x10]; // 0x0 CUtlBinaryBlock
};

struct SceneObject_t {
    static constexpr std::size_t size = 0x90;
    std::uint8_t m_nObjectID[0x4]; // 0x0 uint32
    std::uint8_t m_vTransform[0x30]; // 0x4 Vector4D[3]
    std::uint8_t m_flFadeStartDistance[0x4]; // 0x34 float32
    std::uint8_t m_flFadeEndDistance[0x4]; // 0x38 float32
    std::uint8_t m_vTintColor[0x14]; // 0x3C Vector4D
    std::uint8_t m_skin[0x8]; // 0x50 CUtlString
    std::uint8_t m_nObjectTypeFlags[0x4]; // 0x58 ObjectTypeFlags_t
    std::uint8_t m_vLightingOrigin[0xC]; // 0x5C Vector
    std::uint8_t m_nOverlayRenderOrder[0x2]; // 0x68 int16
    std::uint8_t m_nLODOverride[0x2]; // 0x6A int16
    std::uint8_t m_nCubeMapPrecomputedHandshake[0x4]; // 0x6C int32
    std::uint8_t m_nLightProbeVolumePrecomputedHandshake[0x4]; // 0x70 int32
    std::uint8_t m_flEmissiveLightingBoost[0xC]; // 0x74 float32
    std::uint8_t m_renderableModel[0x8]; // 0x80 CStrongHandle<InfoForResourceTypeCModel>
    std::uint8_t m_renderable[0x8]; // 0x88 CStrongHandle<InfoForResourceTypeCRenderMesh>
};

struct AggregateLODSetup_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_vLODOrigin[0xC]; // 0x0 Vector
    std::uint8_t m_fMaxObjectScale[0x4]; // 0xC float32
    std::uint8_t m_fSwitchDistances[0x18]; // 0x10 CUtlVector<float32>
};

struct ExtraVertexStreamOverride_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x4]; // 0x0
    std::uint8_t m_nSubSceneObject[0x4]; // 0x4 uint32
    std::uint8_t m_nDrawCallIndex[0x4]; // 0x8 uint32
    std::uint8_t m_nAdditionalMeshDrawPrimitiveFlags[0x4]; // 0xC MeshDrawPrimitiveFlags_t
    std::uint8_t m_extraBufferBinding[0x20]; // 0x10 CRenderBufferBinding
};

struct ClutterTile_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_nFirstInstance[0x4]; // 0x0 uint32
    std::uint8_t m_nLastInstance[0x4]; // 0x4 uint32
    std::uint8_t m_BoundsWs[0x18]; // 0x8 AABB_t
};

struct AggregateSceneObject_t {
    static constexpr std::size_t size = 0x78;
    std::uint8_t m_allFlags[0x4]; // 0x0 ObjectTypeFlags_t
    std::uint8_t m_anyFlags[0x4]; // 0x4 ObjectTypeFlags_t
    std::uint8_t m_nLayer[0x2]; // 0x8 int16
    std::uint8_t m_instanceStream[0x2]; // 0xA int16
    std::uint8_t m_vertexAlbedoStream[0x2]; // 0xC int16
    std::uint8_t m_vertexEmissiveStream[0x2]; // 0xE int16
    std::uint8_t m_aggregateMeshes[0x18]; // 0x10 CUtlVector<AggregateMeshInfo_t>
    std::uint8_t m_lodSetups[0x18]; // 0x28 CUtlVector<AggregateLODSetup_t>
    std::uint8_t m_visClusterMembership[0x18]; // 0x40 CUtlVector<uint16>
    std::uint8_t m_fragmentTransforms[0x18]; // 0x58 CUtlVector<matrix3x4_t>
    std::uint8_t m_renderableModel[0x8]; // 0x70 CStrongHandle<InfoForResourceTypeCModel>
};

struct NodeData_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_vOrigin[0xC]; // 0x0 Vector
    std::uint8_t m_vMinBounds[0xC]; // 0xC Vector
    std::uint8_t m_vMaxBounds[0x10]; // 0x18 Vector
    std::uint8_t m_worldNodePrefix[0x8]; // 0x28 CUtlString
};

struct VMapResourceData_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct AggregateInstanceStreamOnDiskData_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_DecodedSize[0x8]; // 0x0 uint32
    std::uint8_t m_BufferData[0x10]; // 0x8 CUtlBinaryBlock
};

struct RTProxyBLAS_t {
    static constexpr std::size_t size = 0x44;
    std::uint8_t m_nFirstIndex[0x4]; // 0x0 uint32
    std::uint8_t m_nIndexCount[0x4]; // 0x4 uint32
    std::uint8_t m_nVBByteOffset[0x4]; // 0x8 uint32
    std::uint8_t m_nBaseVertex[0x4]; // 0xC uint32
    std::uint8_t m_nVertexCount[0x2]; // 0x10 uint16
    std::uint8_t m_albedoFormat[0x2]; // 0x12 VertexAlbedoFormat_t
    std::uint8_t m_boundLs[0x18]; // 0x14 AABB_t
    std::uint8_t m_vVertexOriginLs[0xC]; // 0x2C Vector
    std::uint8_t m_vVertexExtentLs[0xC]; // 0x38 Vector
};

struct AggregateVertexEmissiveStreamOnDiskData_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_BufferData[0x10]; // 0x0 CUtlBinaryBlock
};

struct ClutterSceneObject_t {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t m_Bounds[0x18]; // 0x0 AABB_t
    std::uint8_t m_flags[0x4]; // 0x18 ObjectTypeFlags_t
    std::uint8_t m_nLayer[0x4]; // 0x1C int16
    std::uint8_t m_instancePositions[0x30]; // 0x20 CUtlVector<Vector>
    std::uint8_t m_instanceScales[0x18]; // 0x50 CUtlVector<float32>
    std::uint8_t m_instanceTintSrgb[0x18]; // 0x68 CUtlVector<Color>
    std::uint8_t m_tiles[0x18]; // 0x80 CUtlVector<ClutterTile_t>
    std::uint8_t m_renderableModel[0x8]; // 0x98 CStrongHandle<InfoForResourceTypeCModel>
    std::uint8_t m_materialGroup[0x4]; // 0xA0 CUtlStringToken
    std::uint8_t m_flBeginCullSize[0x4]; // 0xA4 float32
    std::uint8_t m_flEndCullSize[0x8]; // 0xA8 float32
};

struct WorldBuilderParams_t {
    static constexpr std::size_t size = 0x60;
    std::uint8_t m_flMinDrawVolumeSize[0x4]; // 0x0 float32
    std::uint8_t m_bBuildBakedLighting[0x1]; // 0x4 bool
    std::uint8_t m_bAggregateInstanceStreams[0x3]; // 0x5 bool
    std::uint8_t m_bakedLightingInfo[0x48]; // 0x8 BakedLightingInfo_t
    std::uint8_t m_nCompileTimestamp[0x8]; // 0x50 uint64
    std::uint8_t m_nCompileFingerprint[0x8]; // 0x58 uint64
};

struct PermEntityLumpData_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_name[0x8]; // 0x8 CUtlString
    std::uint8_t m_childLumps[0x18]; // 0x10 CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>>
    std::uint8_t m_entityKeyValues[0x10]; // 0x28 CUtlLeanVector<EntityKeyValueData_t>
};

struct WorldNode_t {
    static constexpr std::size_t size = 0x190;
    std::uint8_t m_sceneObjects[0x18]; // 0x0 CUtlVector<SceneObject_t>
    std::uint8_t m_visClusterMembership[0x18]; // 0x18 CUtlVector<uint16>
    std::uint8_t m_aggregateSceneObjects[0x18]; // 0x30 CUtlVector<AggregateSceneObject_t>
    std::uint8_t m_clutterSceneObjects[0x18]; // 0x48 CUtlVector<ClutterSceneObject_t>
    std::uint8_t m_rtProxies[0x18]; // 0x60 CUtlVector<AggregateRTProxySceneObject_t>
    std::uint8_t m_extraVertexStreamOverrides[0x18]; // 0x78 CUtlVector<ExtraVertexStreamOverride_t>
    std::uint8_t m_materialOverrides[0x18]; // 0x90 CUtlVector<MaterialOverride_t>
    std::uint8_t m_extraVertexStreams[0x18]; // 0xA8 CUtlVector<WorldNodeOnDiskBufferData_t>
    std::uint8_t m_aggregateInstanceStreams[0x18]; // 0xC0 CUtlVector<AggregateInstanceStreamOnDiskData_t>
    std::uint8_t m_vertexAlbedoStreams[0x18]; // 0xD8 CUtlVector<AggregateVertexAlbedoStreamOnDiskData_t>
    std::uint8_t m_vertexEmissiveStreams[0x18]; // 0xF0 CUtlVector<AggregateVertexEmissiveStreamOnDiskData_t>
    std::uint8_t m_layerNames[0x18]; // 0x108 CUtlVector<CUtlString>
    std::uint8_t m_sceneObjectLayerIndices[0x18]; // 0x120 CUtlVector<uint8>
    std::uint8_t m_grassFileName[0x8]; // 0x138 CUtlString
    std::uint8_t m_nodeLightingInfo[0x48]; // 0x140 BakedLightingInfo_t
    std::uint8_t m_bHasBakedGeometryFlag[0x8]; // 0x188 bool
};

struct BaseSceneObjectOverride_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_nSceneObjectIndex[0x4]; // 0x0 uint32
};

struct EntityIOConnectionData_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t m_outputName[0x8]; // 0x0 CUtlString
    std::uint8_t m_targetType[0x8]; // 0x8 uint32
    std::uint8_t m_targetName[0x8]; // 0x10 CUtlString
    std::uint8_t m_inputName[0x8]; // 0x18 CUtlString
    std::uint8_t m_overrideParam[0x8]; // 0x20 CUtlString
    std::uint8_t m_flDelay[0x4]; // 0x28 float32
    std::uint8_t m_nTimesToFire[0x4]; // 0x2C int32
    std::uint8_t m_paramMap[0x10]; // 0x30 KeyValues3
};

struct BakedLightingInfo_t {
    static constexpr std::size_t size = 0x48;
    std::uint8_t m_nLightmapVersionNumber[0x4]; // 0x0 uint32
    std::uint8_t m_nLightmapGameVersionNumber[0x4]; // 0x4 uint32
    std::uint8_t m_vLightmapUvScale[0x8]; // 0x8 Vector2D
    std::uint8_t m_bHasLightmaps[0x1]; // 0x10 bool
    std::uint8_t m_bBakedShadowsGamma20[0x1]; // 0x11 bool
    std::uint8_t m_bCompressionEnabled[0x1]; // 0x12 bool
    std::uint8_t m_nLPVEncoding[0x1]; // 0x13 int8
    std::uint8_t m_nLightmapEncoding[0x1]; // 0x14 int8
    std::uint8_t m_nChartPackIterations[0x1]; // 0x15 uint8
    std::uint8_t m_nVradQuality[0x2]; // 0x16 uint8
    std::uint8_t m_lightMaps[0x18]; // 0x18 CUtlVector<CStrongHandle<InfoForResourceTypeCTextureBase>>
    std::uint8_t m_bakedShadows[0x18]; // 0x30 CUtlVector<BakedLightingInfo_t::BakedShadowAssignment_t>
};

struct VoxelVisBlockOffset_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_nOffset[0x4]; // 0x0 uint32
    std::uint8_t m_nElementCount[0x4]; // 0x4 uint32
};

struct InfoForResourceTypeVMapResourceData_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct WorldNodeOnDiskBufferData_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t m_nElementCount[0x4]; // 0x0 int32
    std::uint8_t m_nElementSizeInBytes[0x4]; // 0x4 int32
    std::uint8_t m_inputLayoutFields[0x18]; // 0x8 CUtlVector<RenderInputLayoutField_t>
    std::uint8_t m_pData[0x18]; // 0x20 CUtlVector<uint8>
};

struct AggregateMeshInfo_t {
    static constexpr std::size_t size = 0x2C;
    std::uint8_t m_nVisClusterMemberOffset[0x4]; // 0x0 uint32
    std::uint8_t m_nVisClusterMemberCount[0x1]; // 0x4 uint8
    std::uint8_t m_bHasTransform[0x1]; // 0x5 bool
    std::uint8_t m_nLODGroupMask[0x2]; // 0x6 uint8
    std::uint8_t m_nDrawCallIndex[0x2]; // 0x8 int16
    std::uint8_t m_nLODSetupIndex[0x2]; // 0xA int16
    std::uint8_t m_vTintColor[0x4]; // 0xC Color
    std::uint8_t m_objectFlags[0x4]; // 0x10 ObjectTypeFlags_t
    std::uint8_t m_nLightProbeVolumePrecomputedHandshake[0x4]; // 0x14 int32
    std::uint8_t m_nInstanceStreamOffset[0x4]; // 0x18 uint32
    std::uint8_t m_nVertexAlbedoStreamOffset[0x4]; // 0x1C uint32
    std::uint8_t m_nVertexEmissiveStreamOffset[0x4]; // 0x20 uint32
    std::uint8_t m_instanceStreams[0x4]; // 0x24 AggregateInstanceStream_t
    std::uint8_t m_fEmissiveFactor[0x4]; // 0x28 float32
};

struct World_t {
    static constexpr std::size_t size = 0xD8;
    std::uint8_t m_builderParams[0x60]; // 0x0 WorldBuilderParams_t
    std::uint8_t m_worldNodes[0x18]; // 0x60 CUtlVector<NodeData_t>
    std::uint8_t m_worldLightingInfo[0x48]; // 0x78 BakedLightingInfo_t
    std::uint8_t m_entityLumps[0x18]; // 0xC0 CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>>
};

struct BakedLightingInfo_t__BakedShadowAssignment_t {
    static constexpr std::size_t size = 0xC;
    std::uint8_t m_nLightHash[0x4]; // 0x0 uint32
    std::uint8_t m_nMapHash[0x4]; // 0x4 uint32
    std::uint8_t m_nShadowChannel[0x4]; // 0x8 int8
};

struct MaterialOverride_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x4]; // 0x0
    std::uint8_t m_nSubSceneObject[0x4]; // 0x4 uint32
    std::uint8_t m_nDrawCallIndex[0x8]; // 0x8 uint32
    std::uint8_t m_pMaterial[0x8]; // 0x10 CStrongHandle<InfoForResourceTypeIMaterial2>
    std::uint8_t m_vLinearTintColor[0x10]; // 0x18 Vector
};

struct AggregateRTProxySceneObject_t {
    static constexpr std::size_t size = 0x78;
    std::uint8_t m_nLayer[0x8]; // 0x0 int16
    std::uint8_t m_BLASes[0x18]; // 0x8 CUtlVector<RTProxyBLAS_t>
    std::uint8_t m_Instances[0x18]; // 0x20 CUtlVector<RTProxyInstanceInfo_t>
    std::uint8_t m_VBData[0x10]; // 0x38 CUtlBinaryBlock
    std::uint8_t m_IBData[0x10]; // 0x48 CUtlBinaryBlock
    std::uint8_t m_InstanceAlbedoData[0x10]; // 0x58 CUtlBinaryBlock
    std::uint8_t m_InstanceEmissiveData[0x10]; // 0x68 CUtlBinaryBlock
};

struct EntityKeyValueData_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_connections[0x18]; // 0x8 CUtlVector<EntityIOConnectionData_t>
    std::uint8_t m_keyValuesData[0x18]; // 0x20 CUtlBinaryBlock
};

struct CVoxelVisibility {
    static constexpr std::size_t size = 0xA0;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t m_nBaseClusterCount[0x4]; // 0x40 uint32
    std::uint8_t m_nPVSBytesPerCluster[0x4]; // 0x44 uint32
    std::uint8_t m_vMinBounds[0xC]; // 0x48 Vector
    std::uint8_t m_vMaxBounds[0xC]; // 0x54 Vector
    std::uint8_t m_flGridSize[0x4]; // 0x60 float32
    std::uint8_t m_nSkyVisibilityCluster[0x4]; // 0x64 uint32
    std::uint8_t m_nSunVisibilityCluster[0x4]; // 0x68 uint32
    std::uint8_t m_NodeBlock[0x8]; // 0x6C VoxelVisBlockOffset_t
    std::uint8_t m_RegionBlock[0x8]; // 0x74 VoxelVisBlockOffset_t
    std::uint8_t m_EnclosedClusterListBlock[0x8]; // 0x7C VoxelVisBlockOffset_t
    std::uint8_t m_EnclosedClustersBlock[0x8]; // 0x84 VoxelVisBlockOffset_t
    std::uint8_t m_MasksBlock[0x8]; // 0x8C VoxelVisBlockOffset_t
    std::uint8_t m_nVisBlocks[0xC]; // 0x94 VoxelVisBlockOffset_t
};

} // namespace