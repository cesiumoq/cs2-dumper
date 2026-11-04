/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

pub const worldrenderer = struct {

    pub const CEntityInstance = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_iszPrivateVScripts: [0x8]u8, // 0x8
        m_pEntity: [0x18]u8, // 0x10
        m_CScriptComponent: [0x8]u8, // 0x28
    };
    pub const CEntityComponent = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const CScriptComponent = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_scriptClassName: [0x8]u8, // 0x30
    };
    pub const CEntityIdentity = extern struct {
        pad_0: [0x14]u8, // 0x0
        m_nameStringTableIndex: [0x4]u8, // 0x14
        m_name: [0x8]u8, // 0x18
        m_designerName: [0x10]u8, // 0x20
        m_flags: [0x8]u8, // 0x30
        m_worldGroupId: [0x4]u8, // 0x38
        m_fDataObjectTypes: [0x4]u8, // 0x3C
        m_PathIndex: [0x8]u8, // 0x40
        m_pAttributes: [0x8]u8, // 0x48
        m_pPrev: [0x8]u8, // 0x50
        m_pNext: [0x8]u8, // 0x58
        m_pPrevByClass: [0x8]u8, // 0x60
        m_pNextByClass: [0x8]u8, // 0x68
    };
    pub const RTProxyInstanceInfo_t = extern struct {
        m_nFlags: [0x1]u8, // 0x0
        m_albedoFormat: [0x1]u8, // 0x1
        m_emissiveFormat: [0x2]u8, // 0x2
        m_nBLASCount: [0x4]u8, // 0x4
        m_nBLASIndex: [0x4]u8, // 0x8
        m_nVertexAlbedoByteOffset: [0x4]u8, // 0xC
        m_nVertexEmissiveByteOffset: [0x4]u8, // 0x10
        m_fEmissiveFactor: [0x4]u8, // 0x14
        m_mWorldFromLocal: [0x30]u8, // 0x18
        m_vTintColorSRGB: [0x4]u8, // 0x48
    };
    pub const AggregateVertexAlbedoStreamOnDiskData_t = extern struct {
        m_BufferData: [0x10]u8, // 0x0
    };
    pub const SceneObject_t = extern struct {
        m_nObjectID: [0x4]u8, // 0x0
        m_vTransform: [0x30]u8, // 0x4
        m_flFadeStartDistance: [0x4]u8, // 0x34
        m_flFadeEndDistance: [0x4]u8, // 0x38
        m_vTintColor: [0x14]u8, // 0x3C
        m_skin: [0x8]u8, // 0x50
        m_nObjectTypeFlags: [0x4]u8, // 0x58
        m_vLightingOrigin: [0xC]u8, // 0x5C
        m_nOverlayRenderOrder: [0x2]u8, // 0x68
        m_nLODOverride: [0x2]u8, // 0x6A
        m_nCubeMapPrecomputedHandshake: [0x4]u8, // 0x6C
        m_nLightProbeVolumePrecomputedHandshake: [0x4]u8, // 0x70
        m_flEmissiveLightingBoost: [0xC]u8, // 0x74
        m_renderableModel: [0x8]u8, // 0x80
        m_renderable: [0x8]u8, // 0x88
    };
    pub const AggregateLODSetup_t = extern struct {
        m_vLODOrigin: [0xC]u8, // 0x0
        m_fMaxObjectScale: [0x4]u8, // 0xC
        m_fSwitchDistances: [0x18]u8, // 0x10
    };
    pub const ExtraVertexStreamOverride_t = extern struct {
        pad_0: [0x4]u8, // 0x0
        m_nSubSceneObject: [0x4]u8, // 0x4
        m_nDrawCallIndex: [0x4]u8, // 0x8
        m_nAdditionalMeshDrawPrimitiveFlags: [0x4]u8, // 0xC
        m_extraBufferBinding: [0x20]u8, // 0x10
    };
    pub const ClutterTile_t = extern struct {
        m_nFirstInstance: [0x4]u8, // 0x0
        m_nLastInstance: [0x4]u8, // 0x4
        m_BoundsWs: [0x18]u8, // 0x8
    };
    pub const AggregateSceneObject_t = extern struct {
        m_allFlags: [0x4]u8, // 0x0
        m_anyFlags: [0x4]u8, // 0x4
        m_nLayer: [0x2]u8, // 0x8
        m_instanceStream: [0x2]u8, // 0xA
        m_vertexAlbedoStream: [0x2]u8, // 0xC
        m_vertexEmissiveStream: [0x2]u8, // 0xE
        m_aggregateMeshes: [0x18]u8, // 0x10
        m_lodSetups: [0x18]u8, // 0x28
        m_visClusterMembership: [0x18]u8, // 0x40
        m_fragmentTransforms: [0x18]u8, // 0x58
        m_renderableModel: [0x8]u8, // 0x70
    };
    pub const NodeData_t = extern struct {
        m_vOrigin: [0xC]u8, // 0x0
        m_vMinBounds: [0xC]u8, // 0xC
        m_vMaxBounds: [0x10]u8, // 0x18
        m_worldNodePrefix: [0x8]u8, // 0x28
    };
    pub const VMapResourceData_t = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const AggregateInstanceStreamOnDiskData_t = extern struct {
        m_DecodedSize: [0x8]u8, // 0x0
        m_BufferData: [0x10]u8, // 0x8
    };
    pub const RTProxyBLAS_t = extern struct {
        m_nFirstIndex: [0x4]u8, // 0x0
        m_nIndexCount: [0x4]u8, // 0x4
        m_nVBByteOffset: [0x4]u8, // 0x8
        m_nBaseVertex: [0x4]u8, // 0xC
        m_nVertexCount: [0x2]u8, // 0x10
        m_albedoFormat: [0x2]u8, // 0x12
        m_boundLs: [0x18]u8, // 0x14
        m_vVertexOriginLs: [0xC]u8, // 0x2C
        m_vVertexExtentLs: [0xC]u8, // 0x38
    };
    pub const AggregateVertexEmissiveStreamOnDiskData_t = extern struct {
        m_BufferData: [0x10]u8, // 0x0
    };
    pub const ClutterSceneObject_t = extern struct {
        m_Bounds: [0x18]u8, // 0x0
        m_flags: [0x4]u8, // 0x18
        m_nLayer: [0x4]u8, // 0x1C
        m_instancePositions: [0x30]u8, // 0x20
        m_instanceScales: [0x18]u8, // 0x50
        m_instanceTintSrgb: [0x18]u8, // 0x68
        m_tiles: [0x18]u8, // 0x80
        m_renderableModel: [0x8]u8, // 0x98
        m_materialGroup: [0x4]u8, // 0xA0
        m_flBeginCullSize: [0x4]u8, // 0xA4
        m_flEndCullSize: [0x8]u8, // 0xA8
    };
    pub const WorldBuilderParams_t = extern struct {
        m_flMinDrawVolumeSize: [0x4]u8, // 0x0
        m_bBuildBakedLighting: [0x1]u8, // 0x4
        m_bAggregateInstanceStreams: [0x3]u8, // 0x5
        m_bakedLightingInfo: [0x48]u8, // 0x8
        m_nCompileTimestamp: [0x8]u8, // 0x50
        m_nCompileFingerprint: [0x8]u8, // 0x58
    };
    pub const PermEntityLumpData_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_name: [0x8]u8, // 0x8
        m_childLumps: [0x18]u8, // 0x10
        m_entityKeyValues: [0x10]u8, // 0x28
    };
    pub const WorldNode_t = extern struct {
        m_sceneObjects: [0x18]u8, // 0x0
        m_visClusterMembership: [0x18]u8, // 0x18
        m_aggregateSceneObjects: [0x18]u8, // 0x30
        m_clutterSceneObjects: [0x18]u8, // 0x48
        m_rtProxies: [0x18]u8, // 0x60
        m_extraVertexStreamOverrides: [0x18]u8, // 0x78
        m_materialOverrides: [0x18]u8, // 0x90
        m_extraVertexStreams: [0x18]u8, // 0xA8
        m_aggregateInstanceStreams: [0x18]u8, // 0xC0
        m_vertexAlbedoStreams: [0x18]u8, // 0xD8
        m_vertexEmissiveStreams: [0x18]u8, // 0xF0
        m_layerNames: [0x18]u8, // 0x108
        m_sceneObjectLayerIndices: [0x18]u8, // 0x120
        m_grassFileName: [0x8]u8, // 0x138
        m_nodeLightingInfo: [0x48]u8, // 0x140
        m_bHasBakedGeometryFlag: [0x8]u8, // 0x188
    };
    pub const BaseSceneObjectOverride_t = extern struct {
        m_nSceneObjectIndex: [0x4]u8, // 0x0
    };
    pub const EntityIOConnectionData_t = extern struct {
        m_outputName: [0x8]u8, // 0x0
        m_targetType: [0x8]u8, // 0x8
        m_targetName: [0x8]u8, // 0x10
        m_inputName: [0x8]u8, // 0x18
        m_overrideParam: [0x8]u8, // 0x20
        m_flDelay: [0x4]u8, // 0x28
        m_nTimesToFire: [0x4]u8, // 0x2C
        m_paramMap: [0x10]u8, // 0x30
    };
    pub const BakedLightingInfo_t = extern struct {
        m_nLightmapVersionNumber: [0x4]u8, // 0x0
        m_nLightmapGameVersionNumber: [0x4]u8, // 0x4
        m_vLightmapUvScale: [0x8]u8, // 0x8
        m_bHasLightmaps: [0x1]u8, // 0x10
        m_bBakedShadowsGamma20: [0x1]u8, // 0x11
        m_bCompressionEnabled: [0x1]u8, // 0x12
        m_nLPVEncoding: [0x1]u8, // 0x13
        m_nLightmapEncoding: [0x1]u8, // 0x14
        m_nChartPackIterations: [0x1]u8, // 0x15
        m_nVradQuality: [0x2]u8, // 0x16
        m_lightMaps: [0x18]u8, // 0x18
        m_bakedShadows: [0x18]u8, // 0x30
    };
    pub const VoxelVisBlockOffset_t = extern struct {
        m_nOffset: [0x4]u8, // 0x0
        m_nElementCount: [0x4]u8, // 0x4
    };
    pub const InfoForResourceTypeVMapResourceData_t = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const WorldNodeOnDiskBufferData_t = extern struct {
        m_nElementCount: [0x4]u8, // 0x0
        m_nElementSizeInBytes: [0x4]u8, // 0x4
        m_inputLayoutFields: [0x18]u8, // 0x8
        m_pData: [0x18]u8, // 0x20
    };
    pub const AggregateMeshInfo_t = extern struct {
        m_nVisClusterMemberOffset: [0x4]u8, // 0x0
        m_nVisClusterMemberCount: [0x1]u8, // 0x4
        m_bHasTransform: [0x1]u8, // 0x5
        m_nLODGroupMask: [0x2]u8, // 0x6
        m_nDrawCallIndex: [0x2]u8, // 0x8
        m_nLODSetupIndex: [0x2]u8, // 0xA
        m_vTintColor: [0x4]u8, // 0xC
        m_objectFlags: [0x4]u8, // 0x10
        m_nLightProbeVolumePrecomputedHandshake: [0x4]u8, // 0x14
        m_nInstanceStreamOffset: [0x4]u8, // 0x18
        m_nVertexAlbedoStreamOffset: [0x4]u8, // 0x1C
        m_nVertexEmissiveStreamOffset: [0x4]u8, // 0x20
        m_instanceStreams: [0x4]u8, // 0x24
        m_fEmissiveFactor: [0x4]u8, // 0x28
    };
    pub const World_t = extern struct {
        m_builderParams: [0x60]u8, // 0x0
        m_worldNodes: [0x18]u8, // 0x60
        m_worldLightingInfo: [0x48]u8, // 0x78
        m_entityLumps: [0x18]u8, // 0xC0
    };
    pub const BakedLightingInfo_t__BakedShadowAssignment_t = extern struct {
        m_nLightHash: [0x4]u8, // 0x0
        m_nMapHash: [0x4]u8, // 0x4
        m_nShadowChannel: [0x4]u8, // 0x8
    };
    pub const MaterialOverride_t = extern struct {
        pad_0: [0x4]u8, // 0x0
        m_nSubSceneObject: [0x4]u8, // 0x4
        m_nDrawCallIndex: [0x8]u8, // 0x8
        m_pMaterial: [0x8]u8, // 0x10
        m_vLinearTintColor: [0x10]u8, // 0x18
    };
    pub const AggregateRTProxySceneObject_t = extern struct {
        m_nLayer: [0x8]u8, // 0x0
        m_BLASes: [0x18]u8, // 0x8
        m_Instances: [0x18]u8, // 0x20
        m_VBData: [0x10]u8, // 0x38
        m_IBData: [0x10]u8, // 0x48
        m_InstanceAlbedoData: [0x10]u8, // 0x58
        m_InstanceEmissiveData: [0x10]u8, // 0x68
    };
    pub const EntityKeyValueData_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_connections: [0x18]u8, // 0x8
        m_keyValuesData: [0x18]u8, // 0x20
    };
    pub const CVoxelVisibility = extern struct {
        pad_0: [0x40]u8, // 0x0
        m_nBaseClusterCount: [0x4]u8, // 0x40
        m_nPVSBytesPerCluster: [0x4]u8, // 0x44
        m_vMinBounds: [0xC]u8, // 0x48
        m_vMaxBounds: [0xC]u8, // 0x54
        m_flGridSize: [0x4]u8, // 0x60
        m_nSkyVisibilityCluster: [0x4]u8, // 0x64
        m_nSunVisibilityCluster: [0x4]u8, // 0x68
        m_NodeBlock: [0x8]u8, // 0x6C
        m_RegionBlock: [0x8]u8, // 0x74
        m_EnclosedClusterListBlock: [0x8]u8, // 0x7C
        m_EnclosedClustersBlock: [0x8]u8, // 0x84
        m_MasksBlock: [0x8]u8, // 0x8C
        m_nVisBlocks: [0xC]u8, // 0x94
    };
};
