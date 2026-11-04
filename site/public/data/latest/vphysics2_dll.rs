/* cesium dumper | generated from live schema */
#![allow(non_snake_case, non_camel_case_types, dead_code)]

pub mod vphysics2_dll {

    #[repr(C)]
    pub struct RnSphereDesc_t {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x10], // 0x18
    }

    #[repr(C)]
    pub struct RnCompoundDesc_t {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x160], // 0x18
    }

    #[repr(C)]
    pub struct RnSoftbodyParticle_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct RnHullDesc_t {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0xf8], // 0x18
    }

    #[repr(C)]
    pub struct RnCapsuleDesc_t {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x20], // 0x18
    }

    #[repr(C)]
    pub struct PhysFeModelDesc_t {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x18], // 0x18
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x2], // 0x40
        pub _: [u8; 0x2], // 0x42
        pub _: [u8; 0x2], // 0x44
        pub _: [u8; 0x2], // 0x46
        pub _: [u8; 0x2], // 0x48
        pub _: [u8; 0x2], // 0x4a
        pub _: [u8; 0x2], // 0x4c
        pub _: [u8; 0x2], // 0x4e
        pub _: [u8; 0x2], // 0x50
        pub _: [u8; 0x2], // 0x52
        pub _: [u8; 0x2], // 0x54
        pub _: [u8; 0x2], // 0x56
        pub _: [u8; 0x8], // 0x58
        pub _: [u8; 0x18], // 0x60
        pub _: [u8; 0x18], // 0x78
        pub _: [u8; 0x18], // 0x90
        pub _: [u8; 0x18], // 0xa8
        pub _: [u8; 0x18], // 0xc0
        pub _: [u8; 0x18], // 0xd8
        pub _: [u8; 0x18], // 0xf0
        pub _: [u8; 0x18], // 0x108
        pub _: [u8; 0x18], // 0x120
        pub _: [u8; 0x18], // 0x138
        pub _: [u8; 0x18], // 0x150
        pub _: [u8; 0x18], // 0x168
        pub _: [u8; 0x18], // 0x180
        pub _: [u8; 0x18], // 0x198
        pub _: [u8; 0x18], // 0x1b0
        pub _: [u8; 0x18], // 0x1c8
        pub _: [u8; 0x18], // 0x1e0
        pub _: [u8; 0x18], // 0x1f8
        pub _: [u8; 0x18], // 0x210
        pub _: [u8; 0x18], // 0x228
        pub _: [u8; 0x18], // 0x240
        pub _: [u8; 0x18], // 0x258
        pub _: [u8; 0x18], // 0x270
        pub _: [u8; 0x18], // 0x288
        pub _: [u8; 0x18], // 0x2a0
        pub _: [u8; 0x18], // 0x2b8
        pub _: [u8; 0x18], // 0x2d0
        pub _: [u8; 0x18], // 0x2e8
        pub _: [u8; 0x18], // 0x300
        pub _: [u8; 0x18], // 0x318
        pub _: [u8; 0x18], // 0x330
        pub _: [u8; 0x18], // 0x348
        pub _: [u8; 0x18], // 0x360
        pub _: [u8; 0x18], // 0x378
        pub _: [u8; 0x18], // 0x390
        pub _: [u8; 0x18], // 0x3a8
        pub _: [u8; 0x18], // 0x3c0
        pub _: [u8; 0x18], // 0x3d8
        pub _: [u8; 0x18], // 0x3f0
        pub _: [u8; 0x18], // 0x408
        pub _: [u8; 0x18], // 0x420
        pub _: [u8; 0x18], // 0x438
        pub _: [u8; 0x18], // 0x450
        pub _: [u8; 0x18], // 0x468
        pub _: [u8; 0x18], // 0x480
        pub _: [u8; 0x18], // 0x498
        pub _: [u8; 0x18], // 0x4b0
        pub _: [u8; 0x18], // 0x4c8
        pub _: [u8; 0x18], // 0x4e0
        pub _: [u8; 0x18], // 0x4f8
        pub _: [u8; 0x18], // 0x510
        pub _: [u8; 0x18], // 0x528
        pub _: [u8; 0x18], // 0x540
        pub _: [u8; 0x18], // 0x558
        pub _: [u8; 0x2], // 0x570
        pub _: [u8; 0x2], // 0x572
        pub _: [u8; 0x1], // 0x574
        pub _: [u8; 0x1], // 0x575
        pub _: [u8; 0x1], // 0x576
        pub _: [u8; 0x1], // 0x577
        pub _: [u8; 0x18], // 0x578
        pub _: [u8; 0x18], // 0x590
        pub _: [u8; 0x18], // 0x5a8
        pub _: [u8; 0x18], // 0x5c0
        pub _: [u8; 0x18], // 0x5d8
        pub _: [u8; 0x18], // 0x5f0
        pub _: [u8; 0x18], // 0x608
        pub _: [u8; 0x18], // 0x620
        pub _: [u8; 0x18], // 0x638
        pub _: [u8; 0x18], // 0x650
        pub _: [u8; 0x18], // 0x668
        pub _: [u8; 0x18], // 0x680
        pub _: [u8; 0x18], // 0x698
        pub _: [u8; 0x18], // 0x6b0
        pub _: [u8; 0x18], // 0x6c8
        pub _: [u8; 0x4], // 0x6e0
        pub _: [u8; 0x4], // 0x6e4
        pub _: [u8; 0x4], // 0x6e8
        pub _: [u8; 0x4], // 0x6ec
        pub _: [u8; 0x4], // 0x6f0
        pub _: [u8; 0x4], // 0x6f4
        pub _: [u8; 0x4], // 0x6f8
        pub _: [u8; 0x4], // 0x6fc
        pub _: [u8; 0x4], // 0x700
        pub _: [u8; 0x4], // 0x704
        pub _: [u8; 0x4], // 0x708
        pub _: [u8; 0x4], // 0x70c
        pub _: [u8; 0x4], // 0x710
        pub _: [u8; 0x4], // 0x714
        pub _: [u8; 0x4], // 0x718
        pub _: [u8; 0x4], // 0x71c
        pub _: [u8; 0x4], // 0x720
        pub _: [u8; 0x2], // 0x724
        pub _: [u8; 0x2], // 0x726
    }

    #[repr(C)]
    pub struct RnMeshDesc_t {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0xc0], // 0x18
    }

    #[repr(C)]
    pub struct RnSoftbodySpring_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct RnSoftbodyCapsule_t {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
    }

    #[repr(C)]
    pub struct vphysics_save_cphysicsbody_t {
        pub pad_0: [u8; 0xe0], // 0x0
        pub _: [u8; 0x8], // 0xe0
    }

    #[repr(C)]
    pub struct FeBuildBoxRigid_t {
        pub pad_0: [u8; 0x40], // 0x0
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x4], // 0x44
        pub _: [u8; 0x8], // 0x48
    }

    #[repr(C)]
    pub struct CFeIndexedJiggleBone {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x9c], // 0x8
    }

    #[repr(C)]
    pub struct FeBoneMergeLink_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct IPhysAggregateInstance {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct FeBandBendLimit_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0xc], // 0x8
    }

    #[repr(C)]
    pub struct RnCompoundTree_t {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct FeTaperedCapsuleStretch_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x2], // 0x4
        pub _: [u8; 0x2], // 0x6
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct constraint_axislimit_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
    }

    #[repr(C)]
    pub struct FeSimdRodConstraintAnim_t {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x10], // 0x10
        pub _: [u8; 0x10], // 0x20
    }

    #[repr(C)]
    pub struct FeSimdRodConstraint_t {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x10], // 0x10
        pub _: [u8; 0x10], // 0x20
        pub _: [u8; 0x10], // 0x30
        pub _: [u8; 0x10], // 0x40
    }

    #[repr(C)]
    pub struct IPhysicsParticleRope {
        pub pad_0: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct constraint_hingeparams_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0xc], // 0xc
        pub _: [u8; 0x10], // 0x18
        pub _: [u8; 0x18], // 0x28
    }

    #[repr(C)]
    pub struct IPhysicsBodyList {
        pub pad_0: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct FeBuildSphereRigid_t {
        pub pad_0: [u8; 0x20], // 0x0
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x8], // 0x28
    }

    #[repr(C)]
    pub struct FeSimdAnimStrayRadius_t {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x10], // 0x10
        pub _: [u8; 0x10], // 0x20
    }

    #[repr(C)]
    pub struct RnTriangle_t {
        pub _: [u8; 0xc], // 0x0
    }

    #[repr(C)]
    pub struct FeProxyVertexMap_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct FeNodeIntegrator_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
    }

    #[repr(C)]
    pub struct RnCapsule_t {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x4], // 0x18
    }

    #[repr(C)]
    pub struct CFeNamedJiggleBone {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x20], // 0x10
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x9c], // 0x34
    }

    #[repr(C)]
    pub struct FePrism_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0x4], // 0xc
    }

    #[repr(C)]
    pub struct FeAntiTunnelProbeBuild_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x18], // 0x18
    }

    #[repr(C)]
    pub struct RnBodyDesc_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0xc], // 0x8
        pub _: [u8; 0x10], // 0x14
        pub _: [u8; 0xc], // 0x24
        pub _: [u8; 0xc], // 0x30
        pub _: [u8; 0xc], // 0x3c
        pub _: [u8; 0x24], // 0x48
        pub _: [u8; 0x4], // 0x6c
        pub _: [u8; 0x4], // 0x70
        pub _: [u8; 0x4], // 0x74
        pub _: [u8; 0x4], // 0x78
        pub _: [u8; 0x4], // 0x7c
        pub _: [u8; 0x4], // 0x80
        pub _: [u8; 0x4], // 0x84
        pub _: [u8; 0x4], // 0x88
        pub _: [u8; 0x4], // 0x8c
        pub _: [u8; 0x4], // 0x90
        pub _: [u8; 0xc], // 0x94
        pub _: [u8; 0xc], // 0xa0
        pub _: [u8; 0x4], // 0xac
        pub _: [u8; 0x4], // 0xb0
        pub _: [u8; 0x4], // 0xb4
        pub _: [u8; 0x4], // 0xb8
        pub _: [u8; 0x4], // 0xbc
        pub _: [u8; 0x4], // 0xc0
        pub _: [u8; 0x1], // 0xc4
        pub _: [u8; 0x1], // 0xc5
        pub _: [u8; 0x1], // 0xc6
        pub _: [u8; 0x1], // 0xc7
        pub _: [u8; 0x1], // 0xc8
        pub _: [u8; 0x1], // 0xc9
        pub _: [u8; 0x2], // 0xca
        pub _: [u8; 0xc], // 0xcc
        pub _: [u8; 0x1], // 0xd8
        pub _: [u8; 0x1], // 0xd9
        pub _: [u8; 0x6], // 0xda
    }

    #[repr(C)]
    pub struct OldFeEdge_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x10], // 0x30
        pub _: [u8; 0x8], // 0x40
    }

    #[repr(C)]
    pub struct FeFollowNode_t {
        pub _: [u8; 0x2], // 0x0
        pub _: [u8; 0x2], // 0x2
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct RnMesh_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0xc], // 0xc
        pub _: [u8; 0x18], // 0x18
        pub _: [u8; 0x18], // 0x30
        pub _: [u8; 0x18], // 0x48
        pub _: [u8; 0x18], // 0x60
        pub _: [u8; 0x18], // 0x78
        pub _: [u8; 0x18], // 0x90
        pub _: [u8; 0xc], // 0xa8
        pub _: [u8; 0x4], // 0xb4
        pub _: [u8; 0x4], // 0xb8
        pub _: [u8; 0x4], // 0xbc
    }

    #[repr(C)]
    pub struct VertexPositionNormal_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0xc], // 0xc
    }

    #[repr(C)]
    pub struct IPhysicsRagdollControl {
        pub pad_0: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct RnCompoundTreeNode_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0x10], // 0xc
    }

    #[repr(C)]
    pub struct FeBuildSDFRigid_t {
        pub pad_0: [u8; 0x50], // 0x0
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
        pub _: [u8; 0x8], // 0x58
    }

    #[repr(C)]
    pub struct RnBlendVertex_t {
        pub _: [u8; 0x2], // 0x0
        pub _: [u8; 0x2], // 0x2
        pub _: [u8; 0x2], // 0x4
        pub _: [u8; 0x2], // 0x6
        pub _: [u8; 0x2], // 0x8
        pub _: [u8; 0x2], // 0xa
        pub _: [u8; 0x2], // 0xc
        pub _: [u8; 0x2], // 0xe
    }

    #[repr(C)]
    pub struct CFeMorphLayer {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x18], // 0x28
        pub _: [u8; 0x18], // 0x40
        pub _: [u8; 0x18], // 0x58
        pub _: [u8; 0x18], // 0x70
    }

    #[repr(C)]
    pub struct FeCtrlSoftOffset_t {
        pub _: [u8; 0x2], // 0x0
        pub _: [u8; 0x2], // 0x2
        pub _: [u8; 0xc], // 0x4
        pub _: [u8; 0x4], // 0x10
    }

    #[repr(C)]
    pub struct VPhysEntityId_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct RnCompound_t {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0xc8], // 0x28
        pub _: [u8; 0x10], // 0xf0
        pub _: [u8; 0x10], // 0x100
        pub _: [u8; 0x10], // 0x110
        pub _: [u8; 0x10], // 0x120
        pub _: [u8; 0x18], // 0x130
        pub _: [u8; 0xc], // 0x148
        pub _: [u8; 0x4], // 0x154
        pub _: [u8; 0x8], // 0x158
    }

    #[repr(C)]
    pub struct FeVertexMapDesc_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x2], // 0x14
        pub _: [u8; 0x2], // 0x16
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0xc], // 0x20
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x2], // 0x30
        pub _: [u8; 0x6], // 0x32
    }

    #[repr(C)]
    pub struct FeTaperedCapsuleRigid_t {
        pub _: [u8; 0x20], // 0x0
        pub _: [u8; 0x2], // 0x20
        pub _: [u8; 0x2], // 0x22
        pub _: [u8; 0x2], // 0x24
        pub _: [u8; 0xa], // 0x26
    }

    #[repr(C)]
    pub struct FeAnimStrayRadius_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
    }

    #[repr(C)]
    pub struct IPhysicsJoint {
        pub pad_0: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct FeEdgeDesc_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x8], // 0x4
        pub _: [u8; 0x4], // 0xc
    }

    #[repr(C)]
    pub struct FeNodeStrayBox_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0xc], // 0x10
        pub _: [u8; 0x4], // 0x1c
    }

    #[repr(C)]
    pub struct FeNodeReverseOffset_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0x2], // 0xc
        pub _: [u8; 0x2], // 0xe
    }

    #[repr(C)]
    pub struct RnPlane_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0x4], // 0xc
    }

    #[repr(C)]
    pub struct FeSDFRigid_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0xc], // 0xc
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x2], // 0x1c
        pub _: [u8; 0x2], // 0x1e
        pub _: [u8; 0x2], // 0x20
        pub _: [u8; 0x6], // 0x22
        pub _: [u8; 0x18], // 0x28
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x4], // 0x44
        pub _: [u8; 0x8], // 0x48
    }

    #[repr(C)]
    pub struct CFeJiggleBone {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x4], // 0x44
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
        pub _: [u8; 0x4], // 0x58
        pub _: [u8; 0x4], // 0x5c
        pub _: [u8; 0x4], // 0x60
        pub _: [u8; 0x4], // 0x64
        pub _: [u8; 0x4], // 0x68
        pub _: [u8; 0x4], // 0x6c
        pub _: [u8; 0x4], // 0x70
        pub _: [u8; 0x4], // 0x74
        pub _: [u8; 0x4], // 0x78
        pub _: [u8; 0x4], // 0x7c
        pub _: [u8; 0xc], // 0x80
        pub _: [u8; 0xc], // 0x8c
        pub _: [u8; 0x4], // 0x98
    }

    #[repr(C)]
    pub struct CRegionSVM {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x18], // 0x18
    }

    #[repr(C)]
    pub struct FeWorldCollisionParams_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x2], // 0x8
        pub _: [u8; 0x2], // 0xa
    }

    #[repr(C)]
    pub struct CGenericShapeProxy {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x68], // 0x30
    }

    #[repr(C)]
    pub struct RnNode_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0xc], // 0x10
        pub _: [u8; 0x4], // 0x1c
    }

    #[repr(C)]
    pub struct FeFitMatrix_t {
        pub _: [u8; 0x20], // 0x0
        pub _: [u8; 0xc], // 0x20
        pub _: [u8; 0x2], // 0x2c
        pub _: [u8; 0x2], // 0x2e
        pub _: [u8; 0x10], // 0x30
    }

    #[repr(C)]
    pub struct FeSimdQuad_t {
        pub _: [u8; 0x20], // 0x0
        pub _: [u8; 0x10], // 0x20
        pub _: [u8; 0xc0], // 0x30
        pub _: [u8; 0x40], // 0xf0
    }

    #[repr(C)]
    pub struct FeSimdSpringIntegrator_t {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x10], // 0x10
        pub _: [u8; 0x10], // 0x20
        pub _: [u8; 0x10], // 0x30
        pub _: [u8; 0x10], // 0x40
    }

    #[repr(C)]
    pub struct FeSimdNodeBase_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x40], // 0x30
    }

    #[repr(C)]
    pub struct FeQuad_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x40], // 0xc
    }

    #[repr(C)]
    pub struct FeHingeLimit_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
    }

    #[repr(C)]
    pub struct RnWing_t {
        pub _: [u8; 0xc], // 0x0
    }

    #[repr(C)]
    pub struct FeWeightedNode_t {
        pub _: [u8; 0x2], // 0x0
        pub _: [u8; 0x2], // 0x2
    }

    #[repr(C)]
    pub struct CollisionDetailLayerInfo_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x18], // 0x20
        pub _: [u8; 0x8], // 0x38
    }

    #[repr(C)]
    pub struct FeEffectDesc_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x10], // 0x10
    }

    #[repr(C)]
    pub struct FeSpringIntegrator_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
    }

    #[repr(C)]
    pub struct FourVectors2D {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x10], // 0x10
    }

    #[repr(C)]
    pub struct FeKelagerBend2_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x6], // 0x10
        pub _: [u8; 0x2], // 0x16
    }

    #[repr(C)]
    pub struct vphysics_save_ragdoll_control_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x1], // 0xc
        pub _: [u8; 0x1], // 0xd
        pub _: [u8; 0x2], // 0xe
        pub _: [u8; 0xc], // 0x10
        pub _: [u8; 0xc], // 0x1c
        pub _: [u8; 0xc], // 0x28
        pub _: [u8; 0x4], // 0x34
    }

    #[repr(C)]
    pub struct FeRigidColliderIndices_t {
        pub _: [u8; 0x2], // 0x0
        pub _: [u8; 0x2], // 0x2
        pub _: [u8; 0x2], // 0x4
        pub _: [u8; 0x2], // 0x6
        pub _: [u8; 0x2], // 0x8
    }

    #[repr(C)]
    pub struct FeCollisionPlane_t {
        pub _: [u8; 0x2], // 0x0
        pub _: [u8; 0x2], // 0x2
        pub _: [u8; 0x10], // 0x4
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct FeStiffHingeBuild_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0xc], // 0x8
        pub _: [u8; 0x8], // 0x14
    }

    #[repr(C)]
    pub struct FeBoxRigid_t {
        pub _: [u8; 0x20], // 0x0
        pub _: [u8; 0x2], // 0x20
        pub _: [u8; 0x2], // 0x22
        pub _: [u8; 0xc], // 0x24
        pub _: [u8; 0x2], // 0x30
        pub _: [u8; 0xe], // 0x32
    }

    #[repr(C)]
    pub struct FeMorphLayerDepr_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x18], // 0x28
        pub _: [u8; 0x18], // 0x40
        pub _: [u8; 0x18], // 0x58
        pub _: [u8; 0x18], // 0x70
        pub _: [u8; 0x8], // 0x88
    }

    #[repr(C)]
    pub struct FeCtrlOffset_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0x2], // 0xc
        pub _: [u8; 0x2], // 0xe
    }

    #[repr(C)]
    pub struct IPhysicsPlayerController {
        pub pad_0: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct FeNodeBase_t {
        pub _: [u8; 0x2], // 0x0
        pub _: [u8; 0x6], // 0x2
        pub _: [u8; 0x2], // 0x8
        pub _: [u8; 0x2], // 0xa
        pub _: [u8; 0x2], // 0xc
        pub _: [u8; 0x2], // 0xe
        pub _: [u8; 0x10], // 0x10
    }

    #[repr(C)]
    pub struct FeVertexMapBuild_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x18], // 0x18
    }

    #[repr(C)]
    pub struct CFeVertexMapBuildArray {
        pub _: [u8; 0x18], // 0x0
    }

    #[repr(C)]
    pub struct FeTri_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x8], // 0x14
    }

    #[repr(C)]
    pub struct RnHull_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x18], // 0x14
        pub _: [u8; 0xc], // 0x2c
        pub _: [u8; 0x30], // 0x38
        pub _: [u8; 0x4], // 0x68
        pub _: [u8; 0x4], // 0x6c
        pub _: [u8; 0x18], // 0x70
        pub _: [u8; 0x18], // 0x88
        pub _: [u8; 0x8], // 0xa0
        pub _: [u8; 0x8], // 0xa8
        pub _: [u8; 0x18], // 0xb0
        pub _: [u8; 0x18], // 0xc8
        pub _: [u8; 0x18], // 0xe0
    }

    #[repr(C)]
    pub struct FeModelSelfCollisionLayer_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x10], // 0x28
    }

    #[repr(C)]
    pub struct FeAntiTunnelGroupBuild_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct CovMatrix3 {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct PhysicsParticleId_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct RnVertex_t {
        pub _: [u8; 0x1], // 0x0
    }

    #[repr(C)]
    pub struct IPhysicsMotionController {
        pub pad_0: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct Dop26_t {
        pub _: [u8; 0x68], // 0x0
    }

    #[repr(C)]
    pub struct FeDynKinLink_t {
        pub _: [u8; 0x2], // 0x0
        pub _: [u8; 0x2], // 0x2
    }

    #[repr(C)]
    pub struct RnFace_t {
        pub _: [u8; 0x1], // 0x0
    }

    #[repr(C)]
    pub struct FeSimdPrism_t {
        pub _: [u8; 0x30], // 0x0
        pub _: [u8; 0x10], // 0x30
    }

    #[repr(C)]
    pub struct FeCtrlOsOffset_t {
        pub _: [u8; 0x2], // 0x0
        pub _: [u8; 0x2], // 0x2
    }

    #[repr(C)]
    pub struct FeAntiTunnelProbe_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x2], // 0x8
        pub _: [u8; 0x2], // 0xa
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
    }

    #[repr(C)]
    pub struct FeSourceEdge_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct FeTwistConstraint_t {
        pub _: [u8; 0x2], // 0x0
        pub _: [u8; 0x2], // 0x2
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
    }

    #[repr(C)]
    pub struct FeNodeWindBase_t {
        pub _: [u8; 0x2], // 0x0
        pub _: [u8; 0x2], // 0x2
        pub _: [u8; 0x2], // 0x4
        pub _: [u8; 0x2], // 0x6
    }

    #[repr(C)]
    pub struct FeAxialEdgeBend_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x10], // 0xc
        pub _: [u8; 0xc], // 0x1c
    }

    #[repr(C)]
    pub struct FourCovMatrices3 {
        pub _: [u8; 0x30], // 0x0
        pub _: [u8; 0x10], // 0x30
        pub _: [u8; 0x10], // 0x40
        pub _: [u8; 0x10], // 0x50
    }

    #[repr(C)]
    pub struct constraint_breakableparams_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x8], // 0xc
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct FeSphereRigid_t {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x2], // 0x12
        pub _: [u8; 0x2], // 0x14
        pub _: [u8; 0xa], // 0x16
    }

    #[repr(C)]
    pub struct CollisionDetailLayerInfo_t__Name_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct FeBuildTaperedCapsuleRigid_t {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x8], // 0x38
    }

    #[repr(C)]
    pub struct IPhysicsBody {
        pub pad_0: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct FeSoftParent_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct RnShapeDesc_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x1], // 0x10
        pub _: [u8; 0x3], // 0x11
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct FeTreeChildren_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct FeRodConstraint_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
    }

    #[repr(C)]
    pub struct FeFitWeight_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x2], // 0x4
        pub _: [u8; 0x2], // 0x6
    }

    #[repr(C)]
    pub struct RnHalfEdge_t {
        pub _: [u8; 0x1], // 0x0
        pub _: [u8; 0x1], // 0x1
        pub _: [u8; 0x1], // 0x2
        pub _: [u8; 0x1], // 0x3
    }

    #[repr(C)]
    pub struct FeSimdTri_t {
        pub _: [u8; 0x30], // 0x0
        pub _: [u8; 0x10], // 0x30
        pub _: [u8; 0x10], // 0x40
        pub _: [u8; 0x10], // 0x50
        pub _: [u8; 0x20], // 0x60
    }

    #[repr(C)]
    pub struct VertexPositionColor_t {
        pub _: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct FeFitInfluence_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
    }

    #[repr(C)]
    pub struct FeHingeLimitBuild_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
    }

}
