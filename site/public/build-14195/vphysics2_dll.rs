/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

#![allow(non_snake_case, non_camel_case_types, dead_code)]

pub mod vphysics2 {

    pub type JointMotion_t = i32;
    pub type JointAxis_t = i32;
    pub type DynamicContinuousContactBehavior_t = i32;
    pub type PhysInterfaceId_t = i32;
    pub type PhysGenericShapeType_t = i32;
    #[repr(C)]
    pub struct RnSphereDesc_t {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_Sphere: [u8; 0x10], // 0x18
    }
    #[repr(C)]
    pub struct RnCompoundDesc_t {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_Compound: [u8; 0x160], // 0x18
    }
    #[repr(C)]
    pub struct RnSoftbodyParticle_t {
        pub m_flMassInv: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct RnHullDesc_t {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_Hull: [u8; 0xF8], // 0x18
    }
    #[repr(C)]
    pub struct RnCapsuleDesc_t {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_Capsule: [u8; 0x20], // 0x18
    }
    #[repr(C)]
    pub struct PhysFeModelDesc_t {
        pub m_CtrlHash: [u8; 0x18], // 0x0
        pub m_CtrlName: [u8; 0x18], // 0x18
        pub m_nStaticNodeFlags: [u8; 0x4], // 0x30
        pub m_nDynamicNodeFlags: [u8; 0x4], // 0x34
        pub m_flLocalForce: [u8; 0x4], // 0x38
        pub m_flLocalRotation: [u8; 0x4], // 0x3C
        pub m_nNodeCount: [u8; 0x2], // 0x40
        pub m_nStaticNodes: [u8; 0x2], // 0x42
        pub m_nRotLockStaticNodes: [u8; 0x2], // 0x44
        pub m_nFirstPositionDrivenNode: [u8; 0x2], // 0x46
        pub m_nSimdTriCount1: [u8; 0x2], // 0x48
        pub m_nSimdTriCount2: [u8; 0x2], // 0x4A
        pub m_nSimdQuadCount1: [u8; 0x2], // 0x4C
        pub m_nSimdQuadCount2: [u8; 0x2], // 0x4E
        pub m_nQuadCount1: [u8; 0x2], // 0x50
        pub m_nQuadCount2: [u8; 0x2], // 0x52
        pub m_nTreeDepth: [u8; 0x2], // 0x54
        pub m_nNodeBaseJiggleboneDependsCount: [u8; 0x2], // 0x56
        pub m_nRopeCount: [u8; 0x8], // 0x58
        pub m_Ropes: [u8; 0x18], // 0x60
        pub m_NodeBases: [u8; 0x18], // 0x78
        pub m_SimdNodeBases: [u8; 0x18], // 0x90
        pub m_Quads: [u8; 0x18], // 0xA8
        pub m_SimdQuads: [u8; 0x18], // 0xC0
        pub m_SimdTris: [u8; 0x18], // 0xD8
        pub m_Prisms: [u8; 0x18], // 0xF0
        pub m_SimdPrisms: [u8; 0x18], // 0x108
        pub m_SimdRods: [u8; 0x18], // 0x120
        pub m_SimdRodsAnim: [u8; 0x18], // 0x138
        pub m_InitPose: [u8; 0x18], // 0x150
        pub m_Rods: [u8; 0x18], // 0x168
        pub m_Twists: [u8; 0x18], // 0x180
        pub m_HingeLimits: [u8; 0x18], // 0x198
        pub m_AntiTunnelBytecode: [u8; 0x18], // 0x1B0
        pub m_DynKinLinks: [u8; 0x18], // 0x1C8
        pub m_BoneMergeLinks: [u8; 0x18], // 0x1E0
        pub m_AntiTunnelProbes: [u8; 0x18], // 0x1F8
        pub m_AntiTunnelTargetNodes: [u8; 0x18], // 0x210
        pub m_NodeStrayBoxes: [u8; 0x18], // 0x228
        pub m_AxialEdges: [u8; 0x18], // 0x240
        pub m_NodeInvMasses: [u8; 0x18], // 0x258
        pub m_CtrlOffsets: [u8; 0x18], // 0x270
        pub m_CtrlOsOffsets: [u8; 0x18], // 0x288
        pub m_FollowNodes: [u8; 0x18], // 0x2A0
        pub m_CollisionPlanes: [u8; 0x18], // 0x2B8
        pub m_NodeIntegrator: [u8; 0x18], // 0x2D0
        pub m_SpringIntegrator: [u8; 0x18], // 0x2E8
        pub m_SimdSpringIntegrator: [u8; 0x18], // 0x300
        pub m_WorldCollisionParams: [u8; 0x18], // 0x318
        pub m_LegacyStretchForce: [u8; 0x18], // 0x330
        pub m_NodeCollisionRadii: [u8; 0x18], // 0x348
        pub m_DynNodeFriction: [u8; 0x18], // 0x360
        pub m_LocalRotation: [u8; 0x18], // 0x378
        pub m_LocalForce: [u8; 0x18], // 0x390
        pub m_TaperedCapsuleStretches: [u8; 0x18], // 0x3A8
        pub m_TaperedCapsuleRigids: [u8; 0x18], // 0x3C0
        pub m_SphereRigids: [u8; 0x18], // 0x3D8
        pub m_WorldCollisionNodes: [u8; 0x18], // 0x3F0
        pub m_TreeParents: [u8; 0x18], // 0x408
        pub m_TreeCollisionMasks: [u8; 0x18], // 0x420
        pub m_TreeChildren: [u8; 0x18], // 0x438
        pub m_FreeNodes: [u8; 0x18], // 0x450
        pub m_FitMatrices: [u8; 0x18], // 0x468
        pub m_FitWeights: [u8; 0x18], // 0x480
        pub m_ReverseOffsets: [u8; 0x18], // 0x498
        pub m_AnimStrayRadii: [u8; 0x18], // 0x4B0
        pub m_SimdAnimStrayRadii: [u8; 0x18], // 0x4C8
        pub m_KelagerBends: [u8; 0x18], // 0x4E0
        pub m_CtrlSoftOffsets: [u8; 0x18], // 0x4F8
        pub m_JiggleBones: [u8; 0x18], // 0x510
        pub m_SourceElems: [u8; 0x18], // 0x528
        pub m_GoalDampedSpringIntegrators: [u8; 0x18], // 0x540
        pub m_Tris: [u8; 0x18], // 0x558
        pub m_nTriCount1: [u8; 0x2], // 0x570
        pub m_nTriCount2: [u8; 0x2], // 0x572
        pub m_nReservedUint8: [u8; 0x1], // 0x574
        pub m_nExtraPressureIterations: [u8; 0x1], // 0x575
        pub m_nExtraGoalIterations: [u8; 0x1], // 0x576
        pub m_nExtraIterations: [u8; 0x1], // 0x577
        pub m_SDFRigids: [u8; 0x18], // 0x578
        pub m_BoxRigids: [u8; 0x18], // 0x590
        pub m_DynNodeVertexSet: [u8; 0x18], // 0x5A8
        pub m_VertexSetNames: [u8; 0x18], // 0x5C0
        pub m_RigidColliderPriorities: [u8; 0x18], // 0x5D8
        pub m_MorphLayers: [u8; 0x18], // 0x5F0
        pub m_MorphSetData: [u8; 0x18], // 0x608
        pub m_VertexMaps: [u8; 0x18], // 0x620
        pub m_VertexMapValues: [u8; 0x18], // 0x638
        pub m_Effects: [u8; 0x18], // 0x650
        pub m_LockToParent: [u8; 0x18], // 0x668
        pub m_LockToGoal: [u8; 0x18], // 0x680
        pub m_SkelParents: [u8; 0x18], // 0x698
        pub m_DynNodeWindBases: [u8; 0x18], // 0x6B0
        pub m_SelfCollisionLayers: [u8; 0x18], // 0x6C8
        pub m_flInternalPressure: [u8; 0x4], // 0x6E0
        pub m_flDefaultTimeDilation: [u8; 0x4], // 0x6E4
        pub m_flWindage: [u8; 0x4], // 0x6E8
        pub m_flWindDrag: [u8; 0x4], // 0x6EC
        pub m_flDefaultSurfaceStretch: [u8; 0x4], // 0x6F0
        pub m_flDefaultThreadStretch: [u8; 0x4], // 0x6F4
        pub m_flDefaultGravityScale: [u8; 0x4], // 0x6F8
        pub m_flDefaultVelAirDrag: [u8; 0x4], // 0x6FC
        pub m_flDefaultExpAirDrag: [u8; 0x4], // 0x700
        pub m_flDefaultVelQuadAirDrag: [u8; 0x4], // 0x704
        pub m_flDefaultExpQuadAirDrag: [u8; 0x4], // 0x708
        pub m_flRodVelocitySmoothRate: [u8; 0x4], // 0x70C
        pub m_flQuadVelocitySmoothRate: [u8; 0x4], // 0x710
        pub m_flAddWorldCollisionRadius: [u8; 0x4], // 0x714
        pub m_flDefaultVolumetricSolveAmount: [u8; 0x4], // 0x718
        pub m_flMotionSmoothCDT: [u8; 0x4], // 0x71C
        pub m_flLocalDrag1: [u8; 0x4], // 0x720
        pub m_nRodVelocitySmoothIterations: [u8; 0x2], // 0x724
        pub m_nQuadVelocitySmoothIterations: [u8; 0x2], // 0x726
    }
    #[repr(C)]
    pub struct RnMeshDesc_t {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_Mesh: [u8; 0xC0], // 0x18
    }
    #[repr(C)]
    pub struct RnSoftbodySpring_t {
        pub m_nParticle: [u8; 0x4], // 0x0
        pub m_flLength: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct RnSoftbodyCapsule_t {
        pub m_vCenter: [u8; 0x18], // 0x0
        pub m_flRadius: [u8; 0x4], // 0x18
        pub m_nParticle: [u8; 0x4], // 0x1C
    }
    #[repr(C)]
    pub struct vphysics_save_cphysicsbody_t {
        pub pad_0: [u8; 0xE0], // 0x0
        pub m_nOldPointer: [u8; 0x8], // 0xE0
    }
    #[repr(C)]
    pub struct FeBuildBoxRigid_t {
        pub pad_0: [u8; 0x40], // 0x0
        pub m_nPriority: [u8; 0x4], // 0x40
        pub m_nVertexMapHash: [u8; 0x4], // 0x44
        pub m_nAntitunnelGroupBits: [u8; 0x8], // 0x48
    }
    #[repr(C)]
    pub struct CFeIndexedJiggleBone {
        pub m_nNode: [u8; 0x4], // 0x0
        pub m_nJiggleParent: [u8; 0x4], // 0x4
        pub m_jiggleBone: [u8; 0x9C], // 0x8
    }
    #[repr(C)]
    pub struct FeBoneMergeLink_t {
        pub m_nParentHash: [u8; 0x4], // 0x0
        pub m_nChildNode: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct IPhysAggregateInstance {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_pSkeleton: [u8; 0x8], // 0x8
        pub m_bIsAxisAligned: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct FeBandBendLimit_t {
        pub flDistMin: [u8; 0x4], // 0x0
        pub flDistMax: [u8; 0x4], // 0x4
        pub nNode: [u8; 0xC], // 0x8
    }
    #[repr(C)]
    pub struct RnCompoundTree_t {
        pub m_Nodes: [u8; 0x10], // 0x0
        pub m_nStartIterationIndex: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct FeTaperedCapsuleStretch_t {
        pub nNode: [u8; 0x4], // 0x0
        pub nCollisionMask: [u8; 0x2], // 0x4
        pub nDummy: [u8; 0x2], // 0x6
        pub flRadius: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct constraint_axislimit_t {
        pub flMinRotation: [u8; 0x4], // 0x0
        pub flMaxRotation: [u8; 0x4], // 0x4
        pub flMotorTargetAngSpeed: [u8; 0x4], // 0x8
        pub flMotorMaxTorque: [u8; 0x4], // 0xC
    }
    #[repr(C)]
    pub struct FeSimdRodConstraintAnim_t {
        pub nNode: [u8; 0x10], // 0x0
        pub f4Weight0: [u8; 0x10], // 0x10
        pub f4RelaxationFactor: [u8; 0x10], // 0x20
    }
    #[repr(C)]
    pub struct FeSimdRodConstraint_t {
        pub nNode: [u8; 0x10], // 0x0
        pub f4MaxDist: [u8; 0x10], // 0x10
        pub f4MinDist: [u8; 0x10], // 0x20
        pub f4Weight0: [u8; 0x10], // 0x30
        pub f4RelaxationFactor: [u8; 0x10], // 0x40
    }
    #[repr(C)]
    pub struct IPhysicsParticleRope {
        pub pad_0: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct constraint_hingeparams_t {
        pub worldPosition: [u8; 0xC], // 0x0
        pub worldAxisDirection: [u8; 0xC], // 0xC
        pub hingeAxis: [u8; 0x10], // 0x18
        pub constraint: [u8; 0x18], // 0x28
    }
    #[repr(C)]
    pub struct IPhysicsBodyList {
        pub pad_0: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct FeBuildSphereRigid_t {
        pub pad_0: [u8; 0x20], // 0x0
        pub m_nPriority: [u8; 0x4], // 0x20
        pub m_nVertexMapHash: [u8; 0x4], // 0x24
        pub m_nAntitunnelGroupBits: [u8; 0x8], // 0x28
    }
    #[repr(C)]
    pub struct FeSimdAnimStrayRadius_t {
        pub nNode: [u8; 0x10], // 0x0
        pub flMaxDist: [u8; 0x10], // 0x10
        pub flRelaxationFactor: [u8; 0x10], // 0x20
    }
    #[repr(C)]
    pub struct RnTriangle_t {
        pub m_nIndex: [u8; 0xC], // 0x0
    }
    #[repr(C)]
    pub struct FeProxyVertexMap_t {
        pub m_Name: [u8; 0x8], // 0x0
        pub m_flWeight: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct FeNodeIntegrator_t {
        pub flPointDamping: [u8; 0x4], // 0x0
        pub flAnimationForceAttraction: [u8; 0x4], // 0x4
        pub flAnimationVertexAttraction: [u8; 0x4], // 0x8
        pub flGravity: [u8; 0x4], // 0xC
    }
    #[repr(C)]
    pub struct RnCapsule_t {
        pub m_vCenter: [u8; 0x18], // 0x0
        pub m_flRadius: [u8; 0x4], // 0x18
    }
    #[repr(C)]
    pub struct CFeNamedJiggleBone {
        pub m_strParentBone: [u8; 0x10], // 0x0
        pub m_transform: [u8; 0x20], // 0x10
        pub m_nJiggleParent: [u8; 0x4], // 0x30
        pub m_jiggleBone: [u8; 0x9C], // 0x34
    }
    #[repr(C)]
    pub struct FePrism_t {
        pub nNode: [u8; 0xC], // 0x0
        pub flVolume: [u8; 0x4], // 0xC
    }
    #[repr(C)]
    pub struct FeAntiTunnelProbeBuild_t {
        pub flWeight: [u8; 0x4], // 0x0
        pub flActivationDistance: [u8; 0x4], // 0x4
        pub flBias: [u8; 0x4], // 0x8
        pub flCurvature: [u8; 0x4], // 0xC
        pub nFlags: [u8; 0x4], // 0x10
        pub nProbeNode: [u8; 0x4], // 0x14
        pub targetNodes: [u8; 0x18], // 0x18
    }
    #[repr(C)]
    pub struct RnBodyDesc_t {
        pub m_sDebugName: [u8; 0x8], // 0x0
        pub m_vPosition: [u8; 0xC], // 0x8
        pub m_qOrientation: [u8; 0x10], // 0x14
        pub m_vLinearVelocity: [u8; 0xC], // 0x24
        pub m_vAngularVelocity: [u8; 0xC], // 0x30
        pub m_vLocalMassCenter: [u8; 0xC], // 0x3C
        pub m_LocalInertiaInv: [u8; 0x24], // 0x48
        pub m_flMassInv: [u8; 0x4], // 0x6C
        pub m_flGameMass: [u8; 0x4], // 0x70
        pub m_flMassScaleInv: [u8; 0x4], // 0x74
        pub m_flInertiaScaleInv: [u8; 0x4], // 0x78
        pub m_flLinearDamping: [u8; 0x4], // 0x7C
        pub m_flAngularDamping: [u8; 0x4], // 0x80
        pub m_flLinearDragScale: [u8; 0x4], // 0x84
        pub m_flAngularDragScale: [u8; 0x4], // 0x88
        pub m_flLinearFluidDragScale: [u8; 0x4], // 0x8C
        pub m_flAngularFluidDragScale: [u8; 0x4], // 0x90
        pub m_vLastAwakeForceAccum: [u8; 0xC], // 0x94
        pub m_vLastAwakeTorqueAccum: [u8; 0xC], // 0xA0
        pub m_flBuoyancyScale: [u8; 0x4], // 0xAC
        pub m_flGravityScale: [u8; 0x4], // 0xB0
        pub m_flTimeScale: [u8; 0x4], // 0xB4
        pub m_nBodyType: [u8; 0x4], // 0xB8
        pub m_nGameIndex: [u8; 0x4], // 0xBC
        pub m_nGameFlags: [u8; 0x4], // 0xC0
        pub m_nMinVelocityIterations: [u8; 0x1], // 0xC4
        pub m_nMinPositionIterations: [u8; 0x1], // 0xC5
        pub m_nMassPriority: [u8; 0x1], // 0xC6
        pub m_bEnabled: [u8; 0x1], // 0xC7
        pub m_bSleeping: [u8; 0x1], // 0xC8
        pub m_bIsContinuousEnabled: [u8; 0x1], // 0xC9
        pub m_bDragEnabled: [u8; 0x2], // 0xCA
        pub m_vGravity: [u8; 0xC], // 0xCC
        pub m_bSpeculativeEnabled: [u8; 0x1], // 0xD8
        pub m_bHasShadowController: [u8; 0x1], // 0xD9
        pub m_nDynamicContinuousContactBehavior: [u8; 0x6], // 0xDA
    }
    #[repr(C)]
    pub struct OldFeEdge_t {
        pub m_flK: [u8; 0xC], // 0x0
        pub invA: [u8; 0x4], // 0xC
        pub t: [u8; 0x4], // 0x10
        pub flThetaRelaxed: [u8; 0x4], // 0x14
        pub flThetaFactor: [u8; 0x4], // 0x18
        pub c01: [u8; 0x4], // 0x1C
        pub c02: [u8; 0x4], // 0x20
        pub c03: [u8; 0x4], // 0x24
        pub c04: [u8; 0x4], // 0x28
        pub flAxialModelDist: [u8; 0x4], // 0x2C
        pub flAxialModelWeights: [u8; 0x10], // 0x30
        pub m_nNode: [u8; 0x8], // 0x40
    }
    #[repr(C)]
    pub struct FeFollowNode_t {
        pub nParentNode: [u8; 0x2], // 0x0
        pub nChildNode: [u8; 0x2], // 0x2
        pub flWeight: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct RnMesh_t {
        pub m_vMin: [u8; 0xC], // 0x0
        pub m_vMax: [u8; 0xC], // 0xC
        pub m_Nodes: [u8; 0x18], // 0x18
        pub m_Vertices: [u8; 0x18], // 0x30
        pub m_Triangles: [u8; 0x18], // 0x48
        pub m_Wings: [u8; 0x18], // 0x60
        pub m_TriangleEdgeFlags: [u8; 0x18], // 0x78
        pub m_Materials: [u8; 0x18], // 0x90
        pub m_vOrthographicAreas: [u8; 0xC], // 0xA8
        pub m_nFlags: [u8; 0x4], // 0xB4
        pub m_nDebugFlags: [u8; 0x4], // 0xB8
        pub m_flSurfaceArea: [u8; 0x4], // 0xBC
    }
    #[repr(C)]
    pub struct VertexPositionNormal_t {
        pub m_vPosition: [u8; 0xC], // 0x0
        pub m_vNormal: [u8; 0xC], // 0xC
    }
    #[repr(C)]
    pub struct IPhysicsRagdollControl {
        pub pad_0: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct RnCompoundTreeNode_t {
        pub m_vMin: [u8; 0xC], // 0x0
        pub m_vMax: [u8; 0x10], // 0xC
    }
    #[repr(C)]
    pub struct FeBuildSDFRigid_t {
        pub pad_0: [u8; 0x50], // 0x0
        pub m_nPriority: [u8; 0x4], // 0x50
        pub m_nVertexMapHash: [u8; 0x4], // 0x54
        pub m_nAntitunnelGroupBits: [u8; 0x8], // 0x58
    }
    #[repr(C)]
    pub struct RnBlendVertex_t {
        pub m_nWeight0: [u8; 0x2], // 0x0
        pub m_nIndex0: [u8; 0x2], // 0x2
        pub m_nWeight1: [u8; 0x2], // 0x4
        pub m_nIndex1: [u8; 0x2], // 0x6
        pub m_nWeight2: [u8; 0x2], // 0x8
        pub m_nIndex2: [u8; 0x2], // 0xA
        pub m_nFlags: [u8; 0x2], // 0xC
        pub m_nTargetIndex: [u8; 0x2], // 0xE
    }
    #[repr(C)]
    pub struct CFeMorphLayer {
        pub m_Name: [u8; 0x8], // 0x0
        pub m_nNameHash: [u8; 0x8], // 0x8
        pub m_Nodes: [u8; 0x18], // 0x10
        pub m_InitPos: [u8; 0x18], // 0x28
        pub m_Gravity: [u8; 0x18], // 0x40
        pub m_GoalStrength: [u8; 0x18], // 0x58
        pub m_GoalDamping: [u8; 0x18], // 0x70
    }
    #[repr(C)]
    pub struct FeCtrlSoftOffset_t {
        pub nCtrlParent: [u8; 0x2], // 0x0
        pub nCtrlChild: [u8; 0x2], // 0x2
        pub vOffset: [u8; 0xC], // 0x4
        pub flAlpha: [u8; 0x4], // 0x10
    }
    #[repr(C)]
    pub struct VPhysEntityId_t {
        pub m_Id: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct RnCompound_t {
        pub m_Tree: [u8; 0x18], // 0x0
        pub m_nHullBaseIndex: [u8; 0x4], // 0x18
        pub m_nMeshBaseIndex: [u8; 0x4], // 0x1C
        pub m_nShapeCount: [u8; 0x8], // 0x20
        pub m_Meshes: [u8; 0xC8], // 0x28
        pub m_Hulls: [u8; 0x10], // 0xF0
        pub m_Capsules: [u8; 0x10], // 0x100
        pub m_Spheres: [u8; 0x10], // 0x110
        pub m_CompoundMaterialIndices: [u8; 0x10], // 0x120
        pub m_Bounds: [u8; 0x18], // 0x130
        pub m_vOrthographicAreas: [u8; 0xC], // 0x148
        pub m_flSurfaceArea: [u8; 0x4], // 0x154
        pub m_flVolume: [u8; 0x8], // 0x158
    }
    #[repr(C)]
    pub struct FeVertexMapDesc_t {
        pub sName: [u8; 0x8], // 0x0
        pub nNameHash: [u8; 0x4], // 0x8
        pub nColor: [u8; 0x4], // 0xC
        pub nFlags: [u8; 0x4], // 0x10
        pub nVertexBase: [u8; 0x2], // 0x14
        pub nVertexCount: [u8; 0x2], // 0x16
        pub nMapOffset: [u8; 0x4], // 0x18
        pub nNodeListOffset: [u8; 0x4], // 0x1C
        pub vCenterOfMass: [u8; 0xC], // 0x20
        pub flVolumetricSolveStrength: [u8; 0x4], // 0x2C
        pub nScaleSourceNode: [u8; 0x2], // 0x30
        pub nNodeListCount: [u8; 0x6], // 0x32
    }
    #[repr(C)]
    pub struct FeTaperedCapsuleRigid_t {
        pub vSphere: [u8; 0x20], // 0x0
        pub nNode: [u8; 0x2], // 0x20
        pub nCollisionMask: [u8; 0x2], // 0x22
        pub nVertexMapIndex: [u8; 0x2], // 0x24
        pub nFlags: [u8; 0xA], // 0x26
    }
    #[repr(C)]
    pub struct FeAnimStrayRadius_t {
        pub nNode: [u8; 0x4], // 0x0
        pub flMaxDist: [u8; 0x4], // 0x4
        pub flRelaxationFactor: [u8; 0x4], // 0x8
    }
    #[repr(C)]
    pub struct IPhysicsJoint {
        pub pad_0: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct FeEdgeDesc_t {
        pub nEdge: [u8; 0x4], // 0x0
        pub nSide: [u8; 0x8], // 0x4
        pub nVirtElem: [u8; 0x4], // 0xC
    }
    #[repr(C)]
    pub struct FeNodeStrayBox_t {
        pub vMin: [u8; 0xC], // 0x0
        pub nFlags: [u8; 0x4], // 0xC
        pub vMax: [u8; 0xC], // 0x10
        pub nNode: [u8; 0x4], // 0x1C
    }
    #[repr(C)]
    pub struct FeNodeReverseOffset_t {
        pub vOffset: [u8; 0xC], // 0x0
        pub nBoneCtrl: [u8; 0x2], // 0xC
        pub nTargetNode: [u8; 0x2], // 0xE
    }
    #[repr(C)]
    pub struct RnPlane_t {
        pub m_vNormal: [u8; 0xC], // 0x0
        pub m_flOffset: [u8; 0x4], // 0xC
    }
    #[repr(C)]
    pub struct FeSDFRigid_t {
        pub vLocalMin: [u8; 0xC], // 0x0
        pub vLocalMax: [u8; 0xC], // 0xC
        pub flBounciness: [u8; 0x4], // 0x18
        pub nNode: [u8; 0x2], // 0x1C
        pub nCollisionMask: [u8; 0x2], // 0x1E
        pub nVertexMapIndex: [u8; 0x2], // 0x20
        pub nFlags: [u8; 0x6], // 0x22
        pub m_Distances: [u8; 0x18], // 0x28
        pub m_nWidth: [u8; 0x4], // 0x40
        pub m_nHeight: [u8; 0x4], // 0x44
        pub m_nDepth: [u8; 0x8], // 0x48
    }
    #[repr(C)]
    pub struct CFeJiggleBone {
        pub m_nFlags: [u8; 0x4], // 0x0
        pub m_flLength: [u8; 0x4], // 0x4
        pub m_flTipMass: [u8; 0x4], // 0x8
        pub m_flYawStiffness: [u8; 0x4], // 0xC
        pub m_flYawDamping: [u8; 0x4], // 0x10
        pub m_flPitchStiffness: [u8; 0x4], // 0x14
        pub m_flPitchDamping: [u8; 0x4], // 0x18
        pub m_flAlongStiffness: [u8; 0x4], // 0x1C
        pub m_flAlongDamping: [u8; 0x4], // 0x20
        pub m_flAngleLimit: [u8; 0x4], // 0x24
        pub m_flMinYaw: [u8; 0x4], // 0x28
        pub m_flMaxYaw: [u8; 0x4], // 0x2C
        pub m_flYawFriction: [u8; 0x4], // 0x30
        pub m_flYawBounce: [u8; 0x4], // 0x34
        pub m_flMinPitch: [u8; 0x4], // 0x38
        pub m_flMaxPitch: [u8; 0x4], // 0x3C
        pub m_flPitchFriction: [u8; 0x4], // 0x40
        pub m_flPitchBounce: [u8; 0x4], // 0x44
        pub m_flBaseMass: [u8; 0x4], // 0x48
        pub m_flBaseStiffness: [u8; 0x4], // 0x4C
        pub m_flBaseDamping: [u8; 0x4], // 0x50
        pub m_flBaseMinLeft: [u8; 0x4], // 0x54
        pub m_flBaseMaxLeft: [u8; 0x4], // 0x58
        pub m_flBaseLeftFriction: [u8; 0x4], // 0x5C
        pub m_flBaseMinUp: [u8; 0x4], // 0x60
        pub m_flBaseMaxUp: [u8; 0x4], // 0x64
        pub m_flBaseUpFriction: [u8; 0x4], // 0x68
        pub m_flBaseMinForward: [u8; 0x4], // 0x6C
        pub m_flBaseMaxForward: [u8; 0x4], // 0x70
        pub m_flBaseForwardFriction: [u8; 0x4], // 0x74
        pub m_flRadius0: [u8; 0x4], // 0x78
        pub m_flRadius1: [u8; 0x4], // 0x7C
        pub m_vPoint0: [u8; 0xC], // 0x80
        pub m_vPoint1: [u8; 0xC], // 0x8C
        pub m_nCollisionMask: [u8; 0x4], // 0x98
    }
    #[repr(C)]
    pub struct CRegionSVM {
        pub m_Planes: [u8; 0x18], // 0x0
        pub m_Nodes: [u8; 0x18], // 0x18
    }
    #[repr(C)]
    pub struct FeWorldCollisionParams_t {
        pub flWorldFriction: [u8; 0x4], // 0x0
        pub flGroundFriction: [u8; 0x4], // 0x4
        pub nListBegin: [u8; 0x2], // 0x8
        pub nListEnd: [u8; 0x2], // 0xA
    }
    #[repr(C)]
    pub struct CGenericShapeProxy {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_verts: [u8; 0x68], // 0x30
    }
    #[repr(C)]
    pub struct RnNode_t {
        pub m_vMin: [u8; 0xC], // 0x0
        pub m_nChildren: [u8; 0x4], // 0xC
        pub m_vMax: [u8; 0xC], // 0x10
        pub m_nTriangleOffset: [u8; 0x4], // 0x1C
    }
    #[repr(C)]
    pub struct FeFitMatrix_t {
        pub bone: [u8; 0x20], // 0x0
        pub vCenter: [u8; 0xC], // 0x20
        pub nEnd: [u8; 0x2], // 0x2C
        pub nNode: [u8; 0x2], // 0x2E
        pub nBeginDynamic: [u8; 0x10], // 0x30
    }
    #[repr(C)]
    pub struct FeSimdQuad_t {
        pub nNode: [u8; 0x20], // 0x0
        pub f4Slack: [u8; 0x10], // 0x20
        pub vShape: [u8; 0xC0], // 0x30
        pub f4Weights: [u8; 0x40], // 0xF0
    }
    #[repr(C)]
    pub struct FeSimdSpringIntegrator_t {
        pub nNode: [u8; 0x10], // 0x0
        pub flSpringRestLength: [u8; 0x10], // 0x10
        pub flSpringConstant: [u8; 0x10], // 0x20
        pub flSpringDamping: [u8; 0x10], // 0x30
        pub flNodeWeight0: [u8; 0x10], // 0x40
    }
    #[repr(C)]
    pub struct FeSimdNodeBase_t {
        pub nNode: [u8; 0x8], // 0x0
        pub nNodeX0: [u8; 0x8], // 0x8
        pub nNodeX1: [u8; 0x8], // 0x10
        pub nNodeY0: [u8; 0x8], // 0x18
        pub nNodeY1: [u8; 0x8], // 0x20
        pub nDummy: [u8; 0x8], // 0x28
        pub qAdjust: [u8; 0x40], // 0x30
    }
    #[repr(C)]
    pub struct FeQuad_t {
        pub nNode: [u8; 0x8], // 0x0
        pub flSlack: [u8; 0x4], // 0x8
        pub vShape: [u8; 0x40], // 0xC
    }
    #[repr(C)]
    pub struct FeHingeLimit_t {
        pub nNode: [u8; 0xC], // 0x0
        pub nFlags: [u8; 0x4], // 0xC
        pub flWeight4: [u8; 0x4], // 0x10
        pub flWeight5: [u8; 0x4], // 0x14
        pub flAngleCenter: [u8; 0x4], // 0x18
        pub flAngleExtents: [u8; 0x4], // 0x1C
    }
    #[repr(C)]
    pub struct RnWing_t {
        pub m_nIndex: [u8; 0xC], // 0x0
    }
    #[repr(C)]
    pub struct FeWeightedNode_t {
        pub nNode: [u8; 0x2], // 0x0
        pub nWeight: [u8; 0x2], // 0x2
    }
    #[repr(C)]
    pub struct CollisionDetailLayerInfo_t {
        pub m_sDescription: [u8; 0x8], // 0x0
        pub m_sFriendlyName: [u8; 0x8], // 0x8
        pub m_bIsQueryOnly: [u8; 0x8], // 0x10
        pub m_sParentDetailLayer: [u8; 0x8], // 0x18
        pub m_vecSubtreeDetailLayers: [u8; 0x18], // 0x20
        pub m_bNotPickable: [u8; 0x8], // 0x38
    }
    #[repr(C)]
    pub struct FeEffectDesc_t {
        pub sName: [u8; 0x8], // 0x0
        pub nNameHash: [u8; 0x4], // 0x8
        pub nType: [u8; 0x4], // 0xC
        pub m_Params: [u8; 0x10], // 0x10
    }
    #[repr(C)]
    pub struct FeSpringIntegrator_t {
        pub nNode: [u8; 0x4], // 0x0
        pub flSpringRestLength: [u8; 0x4], // 0x4
        pub flSpringConstant: [u8; 0x4], // 0x8
        pub flSpringDamping: [u8; 0x4], // 0xC
        pub flNodeWeight0: [u8; 0x4], // 0x10
    }
    #[repr(C)]
    pub struct FourVectors2D {
        pub x: [u8; 0x10], // 0x0
        pub y: [u8; 0x10], // 0x10
    }
    #[repr(C)]
    pub struct FeKelagerBend2_t {
        pub flWeight: [u8; 0xC], // 0x0
        pub flHeight0: [u8; 0x4], // 0xC
        pub nNode: [u8; 0x6], // 0x10
        pub nReserved: [u8; 0x2], // 0x16
    }
    #[repr(C)]
    pub struct vphysics_save_ragdoll_control_t {
        pub m_flMinSpringFrequency: [u8; 0x4], // 0x0
        pub m_flMaxSpringFrequency: [u8; 0x4], // 0x4
        pub m_flMaxStretch: [u8; 0x4], // 0x8
        pub m_bSolidCollisionAtZeroWeight: [u8; 0x1], // 0xC
        pub m_bRequiresDynamicBodies: [u8; 0x1], // 0xD
        pub m_bIgnoreTeleport: [u8; 0x2], // 0xE
        pub m_vLinearVelocityAccumulator: [u8; 0xC], // 0x10
        pub m_vAngularVelocityAccumulator: [u8; 0xC], // 0x1C
        pub m_vForceAccumulator: [u8; 0xC], // 0x28
        pub m_nBodyCount: [u8; 0x4], // 0x34
    }
    #[repr(C)]
    pub struct FeRigidColliderIndices_t {
        pub m_nTaperedCapsuleRigidIndex: [u8; 0x2], // 0x0
        pub m_nSphereRigidIndex: [u8; 0x2], // 0x2
        pub m_nBoxRigidIndex: [u8; 0x2], // 0x4
        pub m_nSDFRigidIndex: [u8; 0x2], // 0x6
        pub m_nCollisionPlaneIndex: [u8; 0x2], // 0x8
    }
    #[repr(C)]
    pub struct FeCollisionPlane_t {
        pub nCtrlParent: [u8; 0x2], // 0x0
        pub nChildNode: [u8; 0x2], // 0x2
        pub m_Plane: [u8; 0x10], // 0x4
        pub flStrength: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct FeStiffHingeBuild_t {
        pub flMaxAngle: [u8; 0x4], // 0x0
        pub flStrength: [u8; 0x4], // 0x4
        pub flMotionBias: [u8; 0xC], // 0x8
        pub nNode: [u8; 0x8], // 0x14
    }
    #[repr(C)]
    pub struct FeBoxRigid_t {
        pub tmFrame2: [u8; 0x20], // 0x0
        pub nNode: [u8; 0x2], // 0x20
        pub nCollisionMask: [u8; 0x2], // 0x22
        pub vSize: [u8; 0xC], // 0x24
        pub nVertexMapIndex: [u8; 0x2], // 0x30
        pub nFlags: [u8; 0xE], // 0x32
    }
    #[repr(C)]
    pub struct FeMorphLayerDepr_t {
        pub m_Name: [u8; 0x8], // 0x0
        pub m_nNameHash: [u8; 0x8], // 0x8
        pub m_Nodes: [u8; 0x18], // 0x10
        pub m_InitPos: [u8; 0x18], // 0x28
        pub m_Gravity: [u8; 0x18], // 0x40
        pub m_GoalStrength: [u8; 0x18], // 0x58
        pub m_GoalDamping: [u8; 0x18], // 0x70
        pub m_nFlags: [u8; 0x8], // 0x88
    }
    #[repr(C)]
    pub struct FeCtrlOffset_t {
        pub vOffset: [u8; 0xC], // 0x0
        pub nCtrlParent: [u8; 0x2], // 0xC
        pub nCtrlChild: [u8; 0x2], // 0xE
    }
    #[repr(C)]
    pub struct IPhysicsPlayerController {
        pub pad_0: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct FeNodeBase_t {
        pub nNode: [u8; 0x2], // 0x0
        pub nDummy: [u8; 0x6], // 0x2
        pub nNodeX0: [u8; 0x2], // 0x8
        pub nNodeX1: [u8; 0x2], // 0xA
        pub nNodeY0: [u8; 0x2], // 0xC
        pub nNodeY1: [u8; 0x2], // 0xE
        pub qAdjust: [u8; 0x10], // 0x10
    }
    #[repr(C)]
    pub struct FeVertexMapBuild_t {
        pub m_VertexMapName: [u8; 0x8], // 0x0
        pub m_nNameHash: [u8; 0x4], // 0x8
        pub m_Color: [u8; 0x4], // 0xC
        pub m_flVolumetricSolveStrength: [u8; 0x4], // 0x10
        pub m_nScaleSourceNode: [u8; 0x4], // 0x14
        pub m_Weights: [u8; 0x18], // 0x18
    }
    #[repr(C)]
    pub struct CFeVertexMapBuildArray {
        pub m_Array: [u8; 0x18], // 0x0
    }
    #[repr(C)]
    pub struct FeTri_t {
        pub nNode: [u8; 0x8], // 0x0
        pub w1: [u8; 0x4], // 0x8
        pub w2: [u8; 0x4], // 0xC
        pub v1x: [u8; 0x4], // 0x10
        pub v2: [u8; 0x8], // 0x14
    }
    #[repr(C)]
    pub struct RnHull_t {
        pub m_vCentroid: [u8; 0xC], // 0x0
        pub m_flMaxAngularRadius: [u8; 0x4], // 0xC
        pub m_flMinCentroidRadius: [u8; 0x4], // 0x10
        pub m_Bounds: [u8; 0x18], // 0x14
        pub m_vOrthographicAreas: [u8; 0xC], // 0x2C
        pub m_MassProperties: [u8; 0x30], // 0x38
        pub m_flVolume: [u8; 0x4], // 0x68
        pub m_flSurfaceArea: [u8; 0x4], // 0x6C
        pub m_VertexPositions: [u8; 0x18], // 0x70
        pub m_FacePlanes: [u8; 0x18], // 0x88
        pub m_nFlags: [u8; 0x8], // 0xA0
        pub m_pRegionSVM: [u8; 0x8], // 0xA8
        pub m_Vertices: [u8; 0x18], // 0xB0
        pub m_Edges: [u8; 0x18], // 0xC8
        pub m_Faces: [u8; 0x18], // 0xE0
    }
    #[repr(C)]
    pub struct FeModelSelfCollisionLayer_t {
        pub m_Name: [u8; 0x8], // 0x0
        pub m_Nodes: [u8; 0x18], // 0x8
        pub m_flParentReaction: [u8; 0x4], // 0x20
        pub m_nFlags: [u8; 0x4], // 0x24
        pub m_nEndIdx: [u8; 0x10], // 0x28
    }
    #[repr(C)]
    pub struct FeAntiTunnelGroupBuild_t {
        pub m_nVertexMapHash: [u8; 0x4], // 0x0
        pub m_nCollisionMask: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct CovMatrix3 {
        pub m_vDiag: [u8; 0xC], // 0x0
        pub m_flXY: [u8; 0x4], // 0xC
        pub m_flXZ: [u8; 0x4], // 0x10
        pub m_flYZ: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct PhysicsParticleId_t {
        pub m_Value: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct RnVertex_t {
        pub m_nEdge: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct IPhysicsMotionController {
        pub pad_0: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct Dop26_t {
        pub m_flSupport: [u8; 0x68], // 0x0
    }
    #[repr(C)]
    pub struct FeDynKinLink_t {
        pub m_nParent: [u8; 0x2], // 0x0
        pub m_nChild: [u8; 0x2], // 0x2
    }
    #[repr(C)]
    pub struct RnFace_t {
        pub m_nEdge: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct FeSimdPrism_t {
        pub nNode: [u8; 0x30], // 0x0
        pub flVolume: [u8; 0x10], // 0x30
    }
    #[repr(C)]
    pub struct FeCtrlOsOffset_t {
        pub nCtrlParent: [u8; 0x2], // 0x0
        pub nCtrlChild: [u8; 0x2], // 0x2
    }
    #[repr(C)]
    pub struct FeAntiTunnelProbe_t {
        pub flWeight: [u8; 0x4], // 0x0
        pub nFlags: [u8; 0x4], // 0x4
        pub nProbeNode: [u8; 0x2], // 0x8
        pub nCount: [u8; 0x2], // 0xA
        pub nBegin: [u8; 0x4], // 0xC
        pub flActivationDistance: [u8; 0x4], // 0x10
        pub flCurvatureRadius: [u8; 0x4], // 0x14
        pub flBias: [u8; 0x4], // 0x18
    }
    #[repr(C)]
    pub struct FeSourceEdge_t {
        pub nNode: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct FeTwistConstraint_t {
        pub nNodeOrient: [u8; 0x2], // 0x0
        pub nNodeEnd: [u8; 0x2], // 0x2
        pub flTwistRelax: [u8; 0x4], // 0x4
        pub flSwingRelax: [u8; 0x4], // 0x8
    }
    #[repr(C)]
    pub struct FeNodeWindBase_t {
        pub nNodeX0: [u8; 0x2], // 0x0
        pub nNodeX1: [u8; 0x2], // 0x2
        pub nNodeY0: [u8; 0x2], // 0x4
        pub nNodeY1: [u8; 0x2], // 0x6
    }
    #[repr(C)]
    pub struct FeAxialEdgeBend_t {
        pub te: [u8; 0x4], // 0x0
        pub tv: [u8; 0x4], // 0x4
        pub flDist: [u8; 0x4], // 0x8
        pub flWeight: [u8; 0x10], // 0xC
        pub nNode: [u8; 0xC], // 0x1C
    }
    #[repr(C)]
    pub struct FourCovMatrices3 {
        pub m_vDiag: [u8; 0x30], // 0x0
        pub m_flXY: [u8; 0x10], // 0x30
        pub m_flXZ: [u8; 0x10], // 0x40
        pub m_flYZ: [u8; 0x10], // 0x50
    }
    #[repr(C)]
    pub struct constraint_breakableparams_t {
        pub strength: [u8; 0x4], // 0x0
        pub forceLimit: [u8; 0x4], // 0x4
        pub torqueLimit: [u8; 0x4], // 0x8
        pub bodyMassScale: [u8; 0x8], // 0xC
        pub isActive: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct FeSphereRigid_t {
        pub vSphere: [u8; 0x10], // 0x0
        pub nNode: [u8; 0x2], // 0x10
        pub nCollisionMask: [u8; 0x2], // 0x12
        pub nVertexMapIndex: [u8; 0x2], // 0x14
        pub nFlags: [u8; 0xA], // 0x16
    }
    #[repr(C)]
    pub struct CollisionDetailLayerInfo_t__Name_t {
        pub m_nNameToken: [u8; 0x8], // 0x0
        pub m_sNameString: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct FeBuildTaperedCapsuleRigid_t {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_nPriority: [u8; 0x4], // 0x30
        pub m_nVertexMapHash: [u8; 0x4], // 0x34
        pub m_nAntitunnelGroupBits: [u8; 0x8], // 0x38
    }
    #[repr(C)]
    pub struct IPhysicsBody {
        pub pad_0: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct FeSoftParent_t {
        pub nParent: [u8; 0x4], // 0x0
        pub flAlpha: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct RnShapeDesc_t {
        pub m_nCollisionAttributeIndex: [u8; 0x4], // 0x0
        pub m_nSurfacePropertyIndex: [u8; 0x4], // 0x4
        pub m_UserFriendlyName: [u8; 0x8], // 0x8
        pub m_bUserFriendlyNameSealed: [u8; 0x1], // 0x10
        pub m_bUserFriendlyNameLong: [u8; 0x3], // 0x11
        pub m_nToolMaterialHash: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct FeTreeChildren_t {
        pub nChild: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct FeRodConstraint_t {
        pub nNode: [u8; 0x4], // 0x0
        pub flMaxDist: [u8; 0x4], // 0x4
        pub flMinDist: [u8; 0x4], // 0x8
        pub flWeight0: [u8; 0x4], // 0xC
        pub flRelaxationFactor: [u8; 0x4], // 0x10
    }
    #[repr(C)]
    pub struct FeFitWeight_t {
        pub flWeight: [u8; 0x4], // 0x0
        pub nNode: [u8; 0x2], // 0x4
        pub nDummy: [u8; 0x2], // 0x6
    }
    #[repr(C)]
    pub struct RnHalfEdge_t {
        pub m_nNext: [u8; 0x1], // 0x0
        pub m_nTwin: [u8; 0x1], // 0x1
        pub m_nOrigin: [u8; 0x1], // 0x2
        pub m_nFace: [u8; 0x1], // 0x3
    }
    #[repr(C)]
    pub struct FeSimdTri_t {
        pub nNode: [u8; 0x30], // 0x0
        pub w1: [u8; 0x10], // 0x30
        pub w2: [u8; 0x10], // 0x40
        pub v1x: [u8; 0x10], // 0x50
        pub v2: [u8; 0x20], // 0x60
    }
    #[repr(C)]
    pub struct VertexPositionColor_t {
        pub m_vPosition: [u8; 0x10], // 0x0
    }
    #[repr(C)]
    pub struct FeFitInfluence_t {
        pub nVertexNode: [u8; 0x4], // 0x0
        pub flWeight: [u8; 0x4], // 0x4
        pub nMatrixNode: [u8; 0x4], // 0x8
    }
    #[repr(C)]
    pub struct FeHingeLimitBuild_t {
        pub nNode: [u8; 0xC], // 0x0
        pub nFlags: [u8; 0x4], // 0xC
        pub flLimitCW: [u8; 0x4], // 0x10
        pub flLimitCCW: [u8; 0x4], // 0x14
    }
}
