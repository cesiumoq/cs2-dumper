/* cesium dumper | generated from live schema */
#![allow(non_snake_case, non_camel_case_types, dead_code)]

pub mod worldrenderer_dll {

    #[repr(C)]
    pub struct CEntityInstance {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x8], // 0x28
    }

    #[repr(C)]
    pub struct CEntityComponent {
        pub pad_0: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct CScriptComponent {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x8], // 0x30
    }

    #[repr(C)]
    pub struct CEntityIdentity {
        pub pad_0: [u8; 0x14], // 0x0
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x10], // 0x20
        pub _: [u8; 0x8], // 0x30
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x8], // 0x40
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x8], // 0x50
        pub _: [u8; 0x8], // 0x58
        pub _: [u8; 0x8], // 0x60
        pub _: [u8; 0x8], // 0x68
    }

    #[repr(C)]
    pub struct RTProxyInstanceInfo_t {
        pub _: [u8; 0x1], // 0x0
        pub _: [u8; 0x1], // 0x1
        pub _: [u8; 0x2], // 0x2
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x30], // 0x18
        pub _: [u8; 0x4], // 0x48
    }

    #[repr(C)]
    pub struct AggregateVertexAlbedoStreamOnDiskData_t {
        pub _: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct SceneObject_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x30], // 0x4
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x14], // 0x3c
        pub _: [u8; 0x8], // 0x50
        pub _: [u8; 0x4], // 0x58
        pub _: [u8; 0xc], // 0x5c
        pub _: [u8; 0x2], // 0x68
        pub _: [u8; 0x2], // 0x6a
        pub _: [u8; 0x4], // 0x6c
        pub _: [u8; 0x4], // 0x70
        pub _: [u8; 0xc], // 0x74
        pub _: [u8; 0x8], // 0x80
        pub _: [u8; 0x8], // 0x88
    }

    #[repr(C)]
    pub struct AggregateLODSetup_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x18], // 0x10
    }

    #[repr(C)]
    pub struct ExtraVertexStreamOverride_t {
        pub pad_0: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x20], // 0x10
    }

    #[repr(C)]
    pub struct ClutterTile_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x18], // 0x8
    }

    #[repr(C)]
    pub struct AggregateSceneObject_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x2], // 0x8
        pub _: [u8; 0x2], // 0xa
        pub _: [u8; 0x2], // 0xc
        pub _: [u8; 0x2], // 0xe
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x18], // 0x28
        pub _: [u8; 0x18], // 0x40
        pub _: [u8; 0x18], // 0x58
        pub _: [u8; 0x8], // 0x70
    }

    #[repr(C)]
    pub struct NodeData_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0xc], // 0xc
        pub _: [u8; 0x10], // 0x18
        pub _: [u8; 0x8], // 0x28
    }

    #[repr(C)]
    pub struct VMapResourceData_t {
        pub pad_0: [u8; 0x1], // 0x0
    }

    #[repr(C)]
    pub struct AggregateInstanceStreamOnDiskData_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x10], // 0x8
    }

    #[repr(C)]
    pub struct RTProxyBLAS_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x2], // 0x12
        pub _: [u8; 0x18], // 0x14
        pub _: [u8; 0xc], // 0x2c
        pub _: [u8; 0xc], // 0x38
    }

    #[repr(C)]
    pub struct AggregateVertexEmissiveStreamOnDiskData_t {
        pub _: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct ClutterSceneObject_t {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x30], // 0x20
        pub _: [u8; 0x18], // 0x50
        pub _: [u8; 0x18], // 0x68
        pub _: [u8; 0x18], // 0x80
        pub _: [u8; 0x8], // 0x98
        pub _: [u8; 0x4], // 0xa0
        pub _: [u8; 0x4], // 0xa4
        pub _: [u8; 0x8], // 0xa8
    }

    #[repr(C)]
    pub struct WorldBuilderParams_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x1], // 0x4
        pub _: [u8; 0x3], // 0x5
        pub _: [u8; 0x48], // 0x8
        pub _: [u8; 0x8], // 0x50
        pub _: [u8; 0x8], // 0x58
    }

    #[repr(C)]
    pub struct PermEntityLumpData_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x10], // 0x28
    }

    #[repr(C)]
    pub struct WorldNode_t {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x18], // 0x18
        pub _: [u8; 0x18], // 0x30
        pub _: [u8; 0x18], // 0x48
        pub _: [u8; 0x18], // 0x60
        pub _: [u8; 0x18], // 0x78
        pub _: [u8; 0x18], // 0x90
        pub _: [u8; 0x18], // 0xa8
        pub _: [u8; 0x18], // 0xc0
        pub _: [u8; 0x18], // 0xd8
        pub _: [u8; 0x18], // 0xf0
        pub _: [u8; 0x18], // 0x108
        pub _: [u8; 0x18], // 0x120
        pub _: [u8; 0x8], // 0x138
        pub _: [u8; 0x48], // 0x140
        pub _: [u8; 0x8], // 0x188
    }

    #[repr(C)]
    pub struct BaseSceneObjectOverride_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct EntityIOConnectionData_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x10], // 0x30
    }

    #[repr(C)]
    pub struct BakedLightingInfo_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x1], // 0x10
        pub _: [u8; 0x1], // 0x11
        pub _: [u8; 0x1], // 0x12
        pub _: [u8; 0x1], // 0x13
        pub _: [u8; 0x1], // 0x14
        pub _: [u8; 0x1], // 0x15
        pub _: [u8; 0x2], // 0x16
        pub _: [u8; 0x18], // 0x18
        pub _: [u8; 0x18], // 0x30
    }

    #[repr(C)]
    pub struct VoxelVisBlockOffset_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct InfoForResourceTypeVMapResourceData_t {
        pub pad_0: [u8; 0x1], // 0x0
    }

    #[repr(C)]
    pub struct WorldNodeOnDiskBufferData_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x18], // 0x8
        pub _: [u8; 0x18], // 0x20
    }

    #[repr(C)]
    pub struct AggregateMeshInfo_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x1], // 0x4
        pub _: [u8; 0x1], // 0x5
        pub _: [u8; 0x2], // 0x6
        pub _: [u8; 0x2], // 0x8
        pub _: [u8; 0x2], // 0xa
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x4], // 0x28
    }

    #[repr(C)]
    pub struct World_t {
        pub _: [u8; 0x60], // 0x0
        pub _: [u8; 0x18], // 0x60
        pub _: [u8; 0x48], // 0x78
        pub _: [u8; 0x18], // 0xc0
    }

    #[repr(C)]
    pub struct BakedLightingInfo_t__BakedShadowAssignment_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
    }

    #[repr(C)]
    pub struct MaterialOverride_t {
        pub pad_0: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x10], // 0x18
    }

    #[repr(C)]
    pub struct AggregateRTProxySceneObject_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
        pub _: [u8; 0x18], // 0x20
        pub _: [u8; 0x10], // 0x38
        pub _: [u8; 0x10], // 0x48
        pub _: [u8; 0x10], // 0x58
        pub _: [u8; 0x10], // 0x68
    }

    #[repr(C)]
    pub struct EntityKeyValueData_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
        pub _: [u8; 0x18], // 0x20
    }

    #[repr(C)]
    pub struct CVoxelVisibility {
        pub pad_0: [u8; 0x40], // 0x0
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x4], // 0x44
        pub _: [u8; 0xc], // 0x48
        pub _: [u8; 0xc], // 0x54
        pub _: [u8; 0x4], // 0x60
        pub _: [u8; 0x4], // 0x64
        pub _: [u8; 0x4], // 0x68
        pub _: [u8; 0x8], // 0x6c
        pub _: [u8; 0x8], // 0x74
        pub _: [u8; 0x8], // 0x7c
        pub _: [u8; 0x8], // 0x84
        pub _: [u8; 0x8], // 0x8c
        pub _: [u8; 0xc], // 0x94
    }

}
