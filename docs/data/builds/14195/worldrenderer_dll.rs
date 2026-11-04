/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

#![allow(non_snake_case, non_camel_case_types, dead_code)]

pub mod worldrenderer {

    pub type RTProxyInstanceFlags_t = i32;
    pub type ObjectTypeFlags_t = i32;
    pub type AggregateInstanceStream_t = i32;
    #[repr(C)]
    pub struct CEntityInstance {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_iszPrivateVScripts: [u8; 0x8], // 0x8
        pub m_pEntity: [u8; 0x18], // 0x10
        pub m_CScriptComponent: [u8; 0x8], // 0x28
    }
    #[repr(C)]
    pub struct CEntityComponent {
        pub pad_0: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct CScriptComponent {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_scriptClassName: [u8; 0x8], // 0x30
    }
    #[repr(C)]
    pub struct CEntityIdentity {
        pub pad_0: [u8; 0x14], // 0x0
        pub m_nameStringTableIndex: [u8; 0x4], // 0x14
        pub m_name: [u8; 0x8], // 0x18
        pub m_designerName: [u8; 0x10], // 0x20
        pub m_flags: [u8; 0x8], // 0x30
        pub m_worldGroupId: [u8; 0x4], // 0x38
        pub m_fDataObjectTypes: [u8; 0x4], // 0x3C
        pub m_PathIndex: [u8; 0x8], // 0x40
        pub m_pAttributes: [u8; 0x8], // 0x48
        pub m_pPrev: [u8; 0x8], // 0x50
        pub m_pNext: [u8; 0x8], // 0x58
        pub m_pPrevByClass: [u8; 0x8], // 0x60
        pub m_pNextByClass: [u8; 0x8], // 0x68
    }
    #[repr(C)]
    pub struct RTProxyInstanceInfo_t {
        pub m_nFlags: [u8; 0x1], // 0x0
        pub m_albedoFormat: [u8; 0x1], // 0x1
        pub m_emissiveFormat: [u8; 0x2], // 0x2
        pub m_nBLASCount: [u8; 0x4], // 0x4
        pub m_nBLASIndex: [u8; 0x4], // 0x8
        pub m_nVertexAlbedoByteOffset: [u8; 0x4], // 0xC
        pub m_nVertexEmissiveByteOffset: [u8; 0x4], // 0x10
        pub m_fEmissiveFactor: [u8; 0x4], // 0x14
        pub m_mWorldFromLocal: [u8; 0x30], // 0x18
        pub m_vTintColorSRGB: [u8; 0x4], // 0x48
    }
    #[repr(C)]
    pub struct AggregateVertexAlbedoStreamOnDiskData_t {
        pub m_BufferData: [u8; 0x10], // 0x0
    }
    #[repr(C)]
    pub struct SceneObject_t {
        pub m_nObjectID: [u8; 0x4], // 0x0
        pub m_vTransform: [u8; 0x30], // 0x4
        pub m_flFadeStartDistance: [u8; 0x4], // 0x34
        pub m_flFadeEndDistance: [u8; 0x4], // 0x38
        pub m_vTintColor: [u8; 0x14], // 0x3C
        pub m_skin: [u8; 0x8], // 0x50
        pub m_nObjectTypeFlags: [u8; 0x4], // 0x58
        pub m_vLightingOrigin: [u8; 0xC], // 0x5C
        pub m_nOverlayRenderOrder: [u8; 0x2], // 0x68
        pub m_nLODOverride: [u8; 0x2], // 0x6A
        pub m_nCubeMapPrecomputedHandshake: [u8; 0x4], // 0x6C
        pub m_nLightProbeVolumePrecomputedHandshake: [u8; 0x4], // 0x70
        pub m_flEmissiveLightingBoost: [u8; 0xC], // 0x74
        pub m_renderableModel: [u8; 0x8], // 0x80
        pub m_renderable: [u8; 0x8], // 0x88
    }
    #[repr(C)]
    pub struct AggregateLODSetup_t {
        pub m_vLODOrigin: [u8; 0xC], // 0x0
        pub m_fMaxObjectScale: [u8; 0x4], // 0xC
        pub m_fSwitchDistances: [u8; 0x18], // 0x10
    }
    #[repr(C)]
    pub struct ExtraVertexStreamOverride_t {
        pub pad_0: [u8; 0x4], // 0x0
        pub m_nSubSceneObject: [u8; 0x4], // 0x4
        pub m_nDrawCallIndex: [u8; 0x4], // 0x8
        pub m_nAdditionalMeshDrawPrimitiveFlags: [u8; 0x4], // 0xC
        pub m_extraBufferBinding: [u8; 0x20], // 0x10
    }
    #[repr(C)]
    pub struct ClutterTile_t {
        pub m_nFirstInstance: [u8; 0x4], // 0x0
        pub m_nLastInstance: [u8; 0x4], // 0x4
        pub m_BoundsWs: [u8; 0x18], // 0x8
    }
    #[repr(C)]
    pub struct AggregateSceneObject_t {
        pub m_allFlags: [u8; 0x4], // 0x0
        pub m_anyFlags: [u8; 0x4], // 0x4
        pub m_nLayer: [u8; 0x2], // 0x8
        pub m_instanceStream: [u8; 0x2], // 0xA
        pub m_vertexAlbedoStream: [u8; 0x2], // 0xC
        pub m_vertexEmissiveStream: [u8; 0x2], // 0xE
        pub m_aggregateMeshes: [u8; 0x18], // 0x10
        pub m_lodSetups: [u8; 0x18], // 0x28
        pub m_visClusterMembership: [u8; 0x18], // 0x40
        pub m_fragmentTransforms: [u8; 0x18], // 0x58
        pub m_renderableModel: [u8; 0x8], // 0x70
    }
    #[repr(C)]
    pub struct NodeData_t {
        pub m_vOrigin: [u8; 0xC], // 0x0
        pub m_vMinBounds: [u8; 0xC], // 0xC
        pub m_vMaxBounds: [u8; 0x10], // 0x18
        pub m_worldNodePrefix: [u8; 0x8], // 0x28
    }
    #[repr(C)]
    pub struct VMapResourceData_t {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct AggregateInstanceStreamOnDiskData_t {
        pub m_DecodedSize: [u8; 0x8], // 0x0
        pub m_BufferData: [u8; 0x10], // 0x8
    }
    #[repr(C)]
    pub struct RTProxyBLAS_t {
        pub m_nFirstIndex: [u8; 0x4], // 0x0
        pub m_nIndexCount: [u8; 0x4], // 0x4
        pub m_nVBByteOffset: [u8; 0x4], // 0x8
        pub m_nBaseVertex: [u8; 0x4], // 0xC
        pub m_nVertexCount: [u8; 0x2], // 0x10
        pub m_albedoFormat: [u8; 0x2], // 0x12
        pub m_boundLs: [u8; 0x18], // 0x14
        pub m_vVertexOriginLs: [u8; 0xC], // 0x2C
        pub m_vVertexExtentLs: [u8; 0xC], // 0x38
    }
    #[repr(C)]
    pub struct AggregateVertexEmissiveStreamOnDiskData_t {
        pub m_BufferData: [u8; 0x10], // 0x0
    }
    #[repr(C)]
    pub struct ClutterSceneObject_t {
        pub m_Bounds: [u8; 0x18], // 0x0
        pub m_flags: [u8; 0x4], // 0x18
        pub m_nLayer: [u8; 0x4], // 0x1C
        pub m_instancePositions: [u8; 0x30], // 0x20
        pub m_instanceScales: [u8; 0x18], // 0x50
        pub m_instanceTintSrgb: [u8; 0x18], // 0x68
        pub m_tiles: [u8; 0x18], // 0x80
        pub m_renderableModel: [u8; 0x8], // 0x98
        pub m_materialGroup: [u8; 0x4], // 0xA0
        pub m_flBeginCullSize: [u8; 0x4], // 0xA4
        pub m_flEndCullSize: [u8; 0x8], // 0xA8
    }
    #[repr(C)]
    pub struct WorldBuilderParams_t {
        pub m_flMinDrawVolumeSize: [u8; 0x4], // 0x0
        pub m_bBuildBakedLighting: [u8; 0x1], // 0x4
        pub m_bAggregateInstanceStreams: [u8; 0x3], // 0x5
        pub m_bakedLightingInfo: [u8; 0x48], // 0x8
        pub m_nCompileTimestamp: [u8; 0x8], // 0x50
        pub m_nCompileFingerprint: [u8; 0x8], // 0x58
    }
    #[repr(C)]
    pub struct PermEntityLumpData_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_name: [u8; 0x8], // 0x8
        pub m_childLumps: [u8; 0x18], // 0x10
        pub m_entityKeyValues: [u8; 0x10], // 0x28
    }
    #[repr(C)]
    pub struct WorldNode_t {
        pub m_sceneObjects: [u8; 0x18], // 0x0
        pub m_visClusterMembership: [u8; 0x18], // 0x18
        pub m_aggregateSceneObjects: [u8; 0x18], // 0x30
        pub m_clutterSceneObjects: [u8; 0x18], // 0x48
        pub m_rtProxies: [u8; 0x18], // 0x60
        pub m_extraVertexStreamOverrides: [u8; 0x18], // 0x78
        pub m_materialOverrides: [u8; 0x18], // 0x90
        pub m_extraVertexStreams: [u8; 0x18], // 0xA8
        pub m_aggregateInstanceStreams: [u8; 0x18], // 0xC0
        pub m_vertexAlbedoStreams: [u8; 0x18], // 0xD8
        pub m_vertexEmissiveStreams: [u8; 0x18], // 0xF0
        pub m_layerNames: [u8; 0x18], // 0x108
        pub m_sceneObjectLayerIndices: [u8; 0x18], // 0x120
        pub m_grassFileName: [u8; 0x8], // 0x138
        pub m_nodeLightingInfo: [u8; 0x48], // 0x140
        pub m_bHasBakedGeometryFlag: [u8; 0x8], // 0x188
    }
    #[repr(C)]
    pub struct BaseSceneObjectOverride_t {
        pub m_nSceneObjectIndex: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct EntityIOConnectionData_t {
        pub m_outputName: [u8; 0x8], // 0x0
        pub m_targetType: [u8; 0x8], // 0x8
        pub m_targetName: [u8; 0x8], // 0x10
        pub m_inputName: [u8; 0x8], // 0x18
        pub m_overrideParam: [u8; 0x8], // 0x20
        pub m_flDelay: [u8; 0x4], // 0x28
        pub m_nTimesToFire: [u8; 0x4], // 0x2C
        pub m_paramMap: [u8; 0x10], // 0x30
    }
    #[repr(C)]
    pub struct BakedLightingInfo_t {
        pub m_nLightmapVersionNumber: [u8; 0x4], // 0x0
        pub m_nLightmapGameVersionNumber: [u8; 0x4], // 0x4
        pub m_vLightmapUvScale: [u8; 0x8], // 0x8
        pub m_bHasLightmaps: [u8; 0x1], // 0x10
        pub m_bBakedShadowsGamma20: [u8; 0x1], // 0x11
        pub m_bCompressionEnabled: [u8; 0x1], // 0x12
        pub m_nLPVEncoding: [u8; 0x1], // 0x13
        pub m_nLightmapEncoding: [u8; 0x1], // 0x14
        pub m_nChartPackIterations: [u8; 0x1], // 0x15
        pub m_nVradQuality: [u8; 0x2], // 0x16
        pub m_lightMaps: [u8; 0x18], // 0x18
        pub m_bakedShadows: [u8; 0x18], // 0x30
    }
    #[repr(C)]
    pub struct VoxelVisBlockOffset_t {
        pub m_nOffset: [u8; 0x4], // 0x0
        pub m_nElementCount: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct InfoForResourceTypeVMapResourceData_t {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct WorldNodeOnDiskBufferData_t {
        pub m_nElementCount: [u8; 0x4], // 0x0
        pub m_nElementSizeInBytes: [u8; 0x4], // 0x4
        pub m_inputLayoutFields: [u8; 0x18], // 0x8
        pub m_pData: [u8; 0x18], // 0x20
    }
    #[repr(C)]
    pub struct AggregateMeshInfo_t {
        pub m_nVisClusterMemberOffset: [u8; 0x4], // 0x0
        pub m_nVisClusterMemberCount: [u8; 0x1], // 0x4
        pub m_bHasTransform: [u8; 0x1], // 0x5
        pub m_nLODGroupMask: [u8; 0x2], // 0x6
        pub m_nDrawCallIndex: [u8; 0x2], // 0x8
        pub m_nLODSetupIndex: [u8; 0x2], // 0xA
        pub m_vTintColor: [u8; 0x4], // 0xC
        pub m_objectFlags: [u8; 0x4], // 0x10
        pub m_nLightProbeVolumePrecomputedHandshake: [u8; 0x4], // 0x14
        pub m_nInstanceStreamOffset: [u8; 0x4], // 0x18
        pub m_nVertexAlbedoStreamOffset: [u8; 0x4], // 0x1C
        pub m_nVertexEmissiveStreamOffset: [u8; 0x4], // 0x20
        pub m_instanceStreams: [u8; 0x4], // 0x24
        pub m_fEmissiveFactor: [u8; 0x4], // 0x28
    }
    #[repr(C)]
    pub struct World_t {
        pub m_builderParams: [u8; 0x60], // 0x0
        pub m_worldNodes: [u8; 0x18], // 0x60
        pub m_worldLightingInfo: [u8; 0x48], // 0x78
        pub m_entityLumps: [u8; 0x18], // 0xC0
    }
    #[repr(C)]
    pub struct BakedLightingInfo_t__BakedShadowAssignment_t {
        pub m_nLightHash: [u8; 0x4], // 0x0
        pub m_nMapHash: [u8; 0x4], // 0x4
        pub m_nShadowChannel: [u8; 0x4], // 0x8
    }
    #[repr(C)]
    pub struct MaterialOverride_t {
        pub pad_0: [u8; 0x4], // 0x0
        pub m_nSubSceneObject: [u8; 0x4], // 0x4
        pub m_nDrawCallIndex: [u8; 0x8], // 0x8
        pub m_pMaterial: [u8; 0x8], // 0x10
        pub m_vLinearTintColor: [u8; 0x10], // 0x18
    }
    #[repr(C)]
    pub struct AggregateRTProxySceneObject_t {
        pub m_nLayer: [u8; 0x8], // 0x0
        pub m_BLASes: [u8; 0x18], // 0x8
        pub m_Instances: [u8; 0x18], // 0x20
        pub m_VBData: [u8; 0x10], // 0x38
        pub m_IBData: [u8; 0x10], // 0x48
        pub m_InstanceAlbedoData: [u8; 0x10], // 0x58
        pub m_InstanceEmissiveData: [u8; 0x10], // 0x68
    }
    #[repr(C)]
    pub struct EntityKeyValueData_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_connections: [u8; 0x18], // 0x8
        pub m_keyValuesData: [u8; 0x18], // 0x20
    }
    #[repr(C)]
    pub struct CVoxelVisibility {
        pub pad_0: [u8; 0x40], // 0x0
        pub m_nBaseClusterCount: [u8; 0x4], // 0x40
        pub m_nPVSBytesPerCluster: [u8; 0x4], // 0x44
        pub m_vMinBounds: [u8; 0xC], // 0x48
        pub m_vMaxBounds: [u8; 0xC], // 0x54
        pub m_flGridSize: [u8; 0x4], // 0x60
        pub m_nSkyVisibilityCluster: [u8; 0x4], // 0x64
        pub m_nSunVisibilityCluster: [u8; 0x4], // 0x68
        pub m_NodeBlock: [u8; 0x8], // 0x6C
        pub m_RegionBlock: [u8; 0x8], // 0x74
        pub m_EnclosedClusterListBlock: [u8; 0x8], // 0x7C
        pub m_EnclosedClustersBlock: [u8; 0x8], // 0x84
        pub m_MasksBlock: [u8; 0x8], // 0x8C
        pub m_nVisBlocks: [u8; 0xC], // 0x94
    }
}
