/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

pub const vphysics2 = struct {

    pub const RnSphereDesc_t = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_Sphere: [0x10]u8, // 0x18
    };
    pub const RnCompoundDesc_t = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_Compound: [0x160]u8, // 0x18
    };
    pub const RnSoftbodyParticle_t = extern struct {
        m_flMassInv: [0x4]u8, // 0x0
    };
    pub const RnHullDesc_t = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_Hull: [0xF8]u8, // 0x18
    };
    pub const RnCapsuleDesc_t = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_Capsule: [0x20]u8, // 0x18
    };
    pub const PhysFeModelDesc_t = extern struct {
        m_CtrlHash: [0x18]u8, // 0x0
        m_CtrlName: [0x18]u8, // 0x18
        m_nStaticNodeFlags: [0x4]u8, // 0x30
        m_nDynamicNodeFlags: [0x4]u8, // 0x34
        m_flLocalForce: [0x4]u8, // 0x38
        m_flLocalRotation: [0x4]u8, // 0x3C
        m_nNodeCount: [0x2]u8, // 0x40
        m_nStaticNodes: [0x2]u8, // 0x42
        m_nRotLockStaticNodes: [0x2]u8, // 0x44
        m_nFirstPositionDrivenNode: [0x2]u8, // 0x46
        m_nSimdTriCount1: [0x2]u8, // 0x48
        m_nSimdTriCount2: [0x2]u8, // 0x4A
        m_nSimdQuadCount1: [0x2]u8, // 0x4C
        m_nSimdQuadCount2: [0x2]u8, // 0x4E
        m_nQuadCount1: [0x2]u8, // 0x50
        m_nQuadCount2: [0x2]u8, // 0x52
        m_nTreeDepth: [0x2]u8, // 0x54
        m_nNodeBaseJiggleboneDependsCount: [0x2]u8, // 0x56
        m_nRopeCount: [0x8]u8, // 0x58
        m_Ropes: [0x18]u8, // 0x60
        m_NodeBases: [0x18]u8, // 0x78
        m_SimdNodeBases: [0x18]u8, // 0x90
        m_Quads: [0x18]u8, // 0xA8
        m_SimdQuads: [0x18]u8, // 0xC0
        m_SimdTris: [0x18]u8, // 0xD8
        m_Prisms: [0x18]u8, // 0xF0
        m_SimdPrisms: [0x18]u8, // 0x108
        m_SimdRods: [0x18]u8, // 0x120
        m_SimdRodsAnim: [0x18]u8, // 0x138
        m_InitPose: [0x18]u8, // 0x150
        m_Rods: [0x18]u8, // 0x168
        m_Twists: [0x18]u8, // 0x180
        m_HingeLimits: [0x18]u8, // 0x198
        m_AntiTunnelBytecode: [0x18]u8, // 0x1B0
        m_DynKinLinks: [0x18]u8, // 0x1C8
        m_BoneMergeLinks: [0x18]u8, // 0x1E0
        m_AntiTunnelProbes: [0x18]u8, // 0x1F8
        m_AntiTunnelTargetNodes: [0x18]u8, // 0x210
        m_NodeStrayBoxes: [0x18]u8, // 0x228
        m_AxialEdges: [0x18]u8, // 0x240
        m_NodeInvMasses: [0x18]u8, // 0x258
        m_CtrlOffsets: [0x18]u8, // 0x270
        m_CtrlOsOffsets: [0x18]u8, // 0x288
        m_FollowNodes: [0x18]u8, // 0x2A0
        m_CollisionPlanes: [0x18]u8, // 0x2B8
        m_NodeIntegrator: [0x18]u8, // 0x2D0
        m_SpringIntegrator: [0x18]u8, // 0x2E8
        m_SimdSpringIntegrator: [0x18]u8, // 0x300
        m_WorldCollisionParams: [0x18]u8, // 0x318
        m_LegacyStretchForce: [0x18]u8, // 0x330
        m_NodeCollisionRadii: [0x18]u8, // 0x348
        m_DynNodeFriction: [0x18]u8, // 0x360
        m_LocalRotation: [0x18]u8, // 0x378
        m_LocalForce: [0x18]u8, // 0x390
        m_TaperedCapsuleStretches: [0x18]u8, // 0x3A8
        m_TaperedCapsuleRigids: [0x18]u8, // 0x3C0
        m_SphereRigids: [0x18]u8, // 0x3D8
        m_WorldCollisionNodes: [0x18]u8, // 0x3F0
        m_TreeParents: [0x18]u8, // 0x408
        m_TreeCollisionMasks: [0x18]u8, // 0x420
        m_TreeChildren: [0x18]u8, // 0x438
        m_FreeNodes: [0x18]u8, // 0x450
        m_FitMatrices: [0x18]u8, // 0x468
        m_FitWeights: [0x18]u8, // 0x480
        m_ReverseOffsets: [0x18]u8, // 0x498
        m_AnimStrayRadii: [0x18]u8, // 0x4B0
        m_SimdAnimStrayRadii: [0x18]u8, // 0x4C8
        m_KelagerBends: [0x18]u8, // 0x4E0
        m_CtrlSoftOffsets: [0x18]u8, // 0x4F8
        m_JiggleBones: [0x18]u8, // 0x510
        m_SourceElems: [0x18]u8, // 0x528
        m_GoalDampedSpringIntegrators: [0x18]u8, // 0x540
        m_Tris: [0x18]u8, // 0x558
        m_nTriCount1: [0x2]u8, // 0x570
        m_nTriCount2: [0x2]u8, // 0x572
        m_nReservedUint8: [0x1]u8, // 0x574
        m_nExtraPressureIterations: [0x1]u8, // 0x575
        m_nExtraGoalIterations: [0x1]u8, // 0x576
        m_nExtraIterations: [0x1]u8, // 0x577
        m_SDFRigids: [0x18]u8, // 0x578
        m_BoxRigids: [0x18]u8, // 0x590
        m_DynNodeVertexSet: [0x18]u8, // 0x5A8
        m_VertexSetNames: [0x18]u8, // 0x5C0
        m_RigidColliderPriorities: [0x18]u8, // 0x5D8
        m_MorphLayers: [0x18]u8, // 0x5F0
        m_MorphSetData: [0x18]u8, // 0x608
        m_VertexMaps: [0x18]u8, // 0x620
        m_VertexMapValues: [0x18]u8, // 0x638
        m_Effects: [0x18]u8, // 0x650
        m_LockToParent: [0x18]u8, // 0x668
        m_LockToGoal: [0x18]u8, // 0x680
        m_SkelParents: [0x18]u8, // 0x698
        m_DynNodeWindBases: [0x18]u8, // 0x6B0
        m_SelfCollisionLayers: [0x18]u8, // 0x6C8
        m_flInternalPressure: [0x4]u8, // 0x6E0
        m_flDefaultTimeDilation: [0x4]u8, // 0x6E4
        m_flWindage: [0x4]u8, // 0x6E8
        m_flWindDrag: [0x4]u8, // 0x6EC
        m_flDefaultSurfaceStretch: [0x4]u8, // 0x6F0
        m_flDefaultThreadStretch: [0x4]u8, // 0x6F4
        m_flDefaultGravityScale: [0x4]u8, // 0x6F8
        m_flDefaultVelAirDrag: [0x4]u8, // 0x6FC
        m_flDefaultExpAirDrag: [0x4]u8, // 0x700
        m_flDefaultVelQuadAirDrag: [0x4]u8, // 0x704
        m_flDefaultExpQuadAirDrag: [0x4]u8, // 0x708
        m_flRodVelocitySmoothRate: [0x4]u8, // 0x70C
        m_flQuadVelocitySmoothRate: [0x4]u8, // 0x710
        m_flAddWorldCollisionRadius: [0x4]u8, // 0x714
        m_flDefaultVolumetricSolveAmount: [0x4]u8, // 0x718
        m_flMotionSmoothCDT: [0x4]u8, // 0x71C
        m_flLocalDrag1: [0x4]u8, // 0x720
        m_nRodVelocitySmoothIterations: [0x2]u8, // 0x724
        m_nQuadVelocitySmoothIterations: [0x2]u8, // 0x726
    };
    pub const RnMeshDesc_t = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_Mesh: [0xC0]u8, // 0x18
    };
    pub const RnSoftbodySpring_t = extern struct {
        m_nParticle: [0x4]u8, // 0x0
        m_flLength: [0x4]u8, // 0x4
    };
    pub const RnSoftbodyCapsule_t = extern struct {
        m_vCenter: [0x18]u8, // 0x0
        m_flRadius: [0x4]u8, // 0x18
        m_nParticle: [0x4]u8, // 0x1C
    };
    pub const vphysics_save_cphysicsbody_t = extern struct {
        pad_0: [0xE0]u8, // 0x0
        m_nOldPointer: [0x8]u8, // 0xE0
    };
    pub const FeBuildBoxRigid_t = extern struct {
        pad_0: [0x40]u8, // 0x0
        m_nPriority: [0x4]u8, // 0x40
        m_nVertexMapHash: [0x4]u8, // 0x44
        m_nAntitunnelGroupBits: [0x8]u8, // 0x48
    };
    pub const CFeIndexedJiggleBone = extern struct {
        m_nNode: [0x4]u8, // 0x0
        m_nJiggleParent: [0x4]u8, // 0x4
        m_jiggleBone: [0x9C]u8, // 0x8
    };
    pub const FeBoneMergeLink_t = extern struct {
        m_nParentHash: [0x4]u8, // 0x0
        m_nChildNode: [0x4]u8, // 0x4
    };
    pub const IPhysAggregateInstance = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_pSkeleton: [0x8]u8, // 0x8
        m_bIsAxisAligned: [0x8]u8, // 0x10
    };
    pub const FeBandBendLimit_t = extern struct {
        flDistMin: [0x4]u8, // 0x0
        flDistMax: [0x4]u8, // 0x4
        nNode: [0xC]u8, // 0x8
    };
    pub const RnCompoundTree_t = extern struct {
        m_Nodes: [0x10]u8, // 0x0
        m_nStartIterationIndex: [0x8]u8, // 0x10
    };
    pub const FeTaperedCapsuleStretch_t = extern struct {
        nNode: [0x4]u8, // 0x0
        nCollisionMask: [0x2]u8, // 0x4
        nDummy: [0x2]u8, // 0x6
        flRadius: [0x8]u8, // 0x8
    };
    pub const constraint_axislimit_t = extern struct {
        flMinRotation: [0x4]u8, // 0x0
        flMaxRotation: [0x4]u8, // 0x4
        flMotorTargetAngSpeed: [0x4]u8, // 0x8
        flMotorMaxTorque: [0x4]u8, // 0xC
    };
    pub const FeSimdRodConstraintAnim_t = extern struct {
        nNode: [0x10]u8, // 0x0
        f4Weight0: [0x10]u8, // 0x10
        f4RelaxationFactor: [0x10]u8, // 0x20
    };
    pub const FeSimdRodConstraint_t = extern struct {
        nNode: [0x10]u8, // 0x0
        f4MaxDist: [0x10]u8, // 0x10
        f4MinDist: [0x10]u8, // 0x20
        f4Weight0: [0x10]u8, // 0x30
        f4RelaxationFactor: [0x10]u8, // 0x40
    };
    pub const IPhysicsParticleRope = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const constraint_hingeparams_t = extern struct {
        worldPosition: [0xC]u8, // 0x0
        worldAxisDirection: [0xC]u8, // 0xC
        hingeAxis: [0x10]u8, // 0x18
        constraint: [0x18]u8, // 0x28
    };
    pub const IPhysicsBodyList = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const FeBuildSphereRigid_t = extern struct {
        pad_0: [0x20]u8, // 0x0
        m_nPriority: [0x4]u8, // 0x20
        m_nVertexMapHash: [0x4]u8, // 0x24
        m_nAntitunnelGroupBits: [0x8]u8, // 0x28
    };
    pub const FeSimdAnimStrayRadius_t = extern struct {
        nNode: [0x10]u8, // 0x0
        flMaxDist: [0x10]u8, // 0x10
        flRelaxationFactor: [0x10]u8, // 0x20
    };
    pub const RnTriangle_t = extern struct {
        m_nIndex: [0xC]u8, // 0x0
    };
    pub const FeProxyVertexMap_t = extern struct {
        m_Name: [0x8]u8, // 0x0
        m_flWeight: [0x8]u8, // 0x8
    };
    pub const FeNodeIntegrator_t = extern struct {
        flPointDamping: [0x4]u8, // 0x0
        flAnimationForceAttraction: [0x4]u8, // 0x4
        flAnimationVertexAttraction: [0x4]u8, // 0x8
        flGravity: [0x4]u8, // 0xC
    };
    pub const RnCapsule_t = extern struct {
        m_vCenter: [0x18]u8, // 0x0
        m_flRadius: [0x4]u8, // 0x18
    };
    pub const CFeNamedJiggleBone = extern struct {
        m_strParentBone: [0x10]u8, // 0x0
        m_transform: [0x20]u8, // 0x10
        m_nJiggleParent: [0x4]u8, // 0x30
        m_jiggleBone: [0x9C]u8, // 0x34
    };
    pub const FePrism_t = extern struct {
        nNode: [0xC]u8, // 0x0
        flVolume: [0x4]u8, // 0xC
    };
    pub const FeAntiTunnelProbeBuild_t = extern struct {
        flWeight: [0x4]u8, // 0x0
        flActivationDistance: [0x4]u8, // 0x4
        flBias: [0x4]u8, // 0x8
        flCurvature: [0x4]u8, // 0xC
        nFlags: [0x4]u8, // 0x10
        nProbeNode: [0x4]u8, // 0x14
        targetNodes: [0x18]u8, // 0x18
    };
    pub const RnBodyDesc_t = extern struct {
        m_sDebugName: [0x8]u8, // 0x0
        m_vPosition: [0xC]u8, // 0x8
        m_qOrientation: [0x10]u8, // 0x14
        m_vLinearVelocity: [0xC]u8, // 0x24
        m_vAngularVelocity: [0xC]u8, // 0x30
        m_vLocalMassCenter: [0xC]u8, // 0x3C
        m_LocalInertiaInv: [0x24]u8, // 0x48
        m_flMassInv: [0x4]u8, // 0x6C
        m_flGameMass: [0x4]u8, // 0x70
        m_flMassScaleInv: [0x4]u8, // 0x74
        m_flInertiaScaleInv: [0x4]u8, // 0x78
        m_flLinearDamping: [0x4]u8, // 0x7C
        m_flAngularDamping: [0x4]u8, // 0x80
        m_flLinearDragScale: [0x4]u8, // 0x84
        m_flAngularDragScale: [0x4]u8, // 0x88
        m_flLinearFluidDragScale: [0x4]u8, // 0x8C
        m_flAngularFluidDragScale: [0x4]u8, // 0x90
        m_vLastAwakeForceAccum: [0xC]u8, // 0x94
        m_vLastAwakeTorqueAccum: [0xC]u8, // 0xA0
        m_flBuoyancyScale: [0x4]u8, // 0xAC
        m_flGravityScale: [0x4]u8, // 0xB0
        m_flTimeScale: [0x4]u8, // 0xB4
        m_nBodyType: [0x4]u8, // 0xB8
        m_nGameIndex: [0x4]u8, // 0xBC
        m_nGameFlags: [0x4]u8, // 0xC0
        m_nMinVelocityIterations: [0x1]u8, // 0xC4
        m_nMinPositionIterations: [0x1]u8, // 0xC5
        m_nMassPriority: [0x1]u8, // 0xC6
        m_bEnabled: [0x1]u8, // 0xC7
        m_bSleeping: [0x1]u8, // 0xC8
        m_bIsContinuousEnabled: [0x1]u8, // 0xC9
        m_bDragEnabled: [0x2]u8, // 0xCA
        m_vGravity: [0xC]u8, // 0xCC
        m_bSpeculativeEnabled: [0x1]u8, // 0xD8
        m_bHasShadowController: [0x1]u8, // 0xD9
        m_nDynamicContinuousContactBehavior: [0x6]u8, // 0xDA
    };
    pub const OldFeEdge_t = extern struct {
        m_flK: [0xC]u8, // 0x0
        invA: [0x4]u8, // 0xC
        t: [0x4]u8, // 0x10
        flThetaRelaxed: [0x4]u8, // 0x14
        flThetaFactor: [0x4]u8, // 0x18
        c01: [0x4]u8, // 0x1C
        c02: [0x4]u8, // 0x20
        c03: [0x4]u8, // 0x24
        c04: [0x4]u8, // 0x28
        flAxialModelDist: [0x4]u8, // 0x2C
        flAxialModelWeights: [0x10]u8, // 0x30
        m_nNode: [0x8]u8, // 0x40
    };
    pub const FeFollowNode_t = extern struct {
        nParentNode: [0x2]u8, // 0x0
        nChildNode: [0x2]u8, // 0x2
        flWeight: [0x4]u8, // 0x4
    };
    pub const RnMesh_t = extern struct {
        m_vMin: [0xC]u8, // 0x0
        m_vMax: [0xC]u8, // 0xC
        m_Nodes: [0x18]u8, // 0x18
        m_Vertices: [0x18]u8, // 0x30
        m_Triangles: [0x18]u8, // 0x48
        m_Wings: [0x18]u8, // 0x60
        m_TriangleEdgeFlags: [0x18]u8, // 0x78
        m_Materials: [0x18]u8, // 0x90
        m_vOrthographicAreas: [0xC]u8, // 0xA8
        m_nFlags: [0x4]u8, // 0xB4
        m_nDebugFlags: [0x4]u8, // 0xB8
        m_flSurfaceArea: [0x4]u8, // 0xBC
    };
    pub const VertexPositionNormal_t = extern struct {
        m_vPosition: [0xC]u8, // 0x0
        m_vNormal: [0xC]u8, // 0xC
    };
    pub const IPhysicsRagdollControl = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const RnCompoundTreeNode_t = extern struct {
        m_vMin: [0xC]u8, // 0x0
        m_vMax: [0x10]u8, // 0xC
    };
    pub const FeBuildSDFRigid_t = extern struct {
        pad_0: [0x50]u8, // 0x0
        m_nPriority: [0x4]u8, // 0x50
        m_nVertexMapHash: [0x4]u8, // 0x54
        m_nAntitunnelGroupBits: [0x8]u8, // 0x58
    };
    pub const RnBlendVertex_t = extern struct {
        m_nWeight0: [0x2]u8, // 0x0
        m_nIndex0: [0x2]u8, // 0x2
        m_nWeight1: [0x2]u8, // 0x4
        m_nIndex1: [0x2]u8, // 0x6
        m_nWeight2: [0x2]u8, // 0x8
        m_nIndex2: [0x2]u8, // 0xA
        m_nFlags: [0x2]u8, // 0xC
        m_nTargetIndex: [0x2]u8, // 0xE
    };
    pub const CFeMorphLayer = extern struct {
        m_Name: [0x8]u8, // 0x0
        m_nNameHash: [0x8]u8, // 0x8
        m_Nodes: [0x18]u8, // 0x10
        m_InitPos: [0x18]u8, // 0x28
        m_Gravity: [0x18]u8, // 0x40
        m_GoalStrength: [0x18]u8, // 0x58
        m_GoalDamping: [0x18]u8, // 0x70
    };
    pub const FeCtrlSoftOffset_t = extern struct {
        nCtrlParent: [0x2]u8, // 0x0
        nCtrlChild: [0x2]u8, // 0x2
        vOffset: [0xC]u8, // 0x4
        flAlpha: [0x4]u8, // 0x10
    };
    pub const VPhysEntityId_t = extern struct {
        m_Id: [0x4]u8, // 0x0
    };
    pub const RnCompound_t = extern struct {
        m_Tree: [0x18]u8, // 0x0
        m_nHullBaseIndex: [0x4]u8, // 0x18
        m_nMeshBaseIndex: [0x4]u8, // 0x1C
        m_nShapeCount: [0x8]u8, // 0x20
        m_Meshes: [0xC8]u8, // 0x28
        m_Hulls: [0x10]u8, // 0xF0
        m_Capsules: [0x10]u8, // 0x100
        m_Spheres: [0x10]u8, // 0x110
        m_CompoundMaterialIndices: [0x10]u8, // 0x120
        m_Bounds: [0x18]u8, // 0x130
        m_vOrthographicAreas: [0xC]u8, // 0x148
        m_flSurfaceArea: [0x4]u8, // 0x154
        m_flVolume: [0x8]u8, // 0x158
    };
    pub const FeVertexMapDesc_t = extern struct {
        sName: [0x8]u8, // 0x0
        nNameHash: [0x4]u8, // 0x8
        nColor: [0x4]u8, // 0xC
        nFlags: [0x4]u8, // 0x10
        nVertexBase: [0x2]u8, // 0x14
        nVertexCount: [0x2]u8, // 0x16
        nMapOffset: [0x4]u8, // 0x18
        nNodeListOffset: [0x4]u8, // 0x1C
        vCenterOfMass: [0xC]u8, // 0x20
        flVolumetricSolveStrength: [0x4]u8, // 0x2C
        nScaleSourceNode: [0x2]u8, // 0x30
        nNodeListCount: [0x6]u8, // 0x32
    };
    pub const FeTaperedCapsuleRigid_t = extern struct {
        vSphere: [0x20]u8, // 0x0
        nNode: [0x2]u8, // 0x20
        nCollisionMask: [0x2]u8, // 0x22
        nVertexMapIndex: [0x2]u8, // 0x24
        nFlags: [0xA]u8, // 0x26
    };
    pub const FeAnimStrayRadius_t = extern struct {
        nNode: [0x4]u8, // 0x0
        flMaxDist: [0x4]u8, // 0x4
        flRelaxationFactor: [0x4]u8, // 0x8
    };
    pub const IPhysicsJoint = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const FeEdgeDesc_t = extern struct {
        nEdge: [0x4]u8, // 0x0
        nSide: [0x8]u8, // 0x4
        nVirtElem: [0x4]u8, // 0xC
    };
    pub const FeNodeStrayBox_t = extern struct {
        vMin: [0xC]u8, // 0x0
        nFlags: [0x4]u8, // 0xC
        vMax: [0xC]u8, // 0x10
        nNode: [0x4]u8, // 0x1C
    };
    pub const FeNodeReverseOffset_t = extern struct {
        vOffset: [0xC]u8, // 0x0
        nBoneCtrl: [0x2]u8, // 0xC
        nTargetNode: [0x2]u8, // 0xE
    };
    pub const RnPlane_t = extern struct {
        m_vNormal: [0xC]u8, // 0x0
        m_flOffset: [0x4]u8, // 0xC
    };
    pub const FeSDFRigid_t = extern struct {
        vLocalMin: [0xC]u8, // 0x0
        vLocalMax: [0xC]u8, // 0xC
        flBounciness: [0x4]u8, // 0x18
        nNode: [0x2]u8, // 0x1C
        nCollisionMask: [0x2]u8, // 0x1E
        nVertexMapIndex: [0x2]u8, // 0x20
        nFlags: [0x6]u8, // 0x22
        m_Distances: [0x18]u8, // 0x28
        m_nWidth: [0x4]u8, // 0x40
        m_nHeight: [0x4]u8, // 0x44
        m_nDepth: [0x8]u8, // 0x48
    };
    pub const CFeJiggleBone = extern struct {
        m_nFlags: [0x4]u8, // 0x0
        m_flLength: [0x4]u8, // 0x4
        m_flTipMass: [0x4]u8, // 0x8
        m_flYawStiffness: [0x4]u8, // 0xC
        m_flYawDamping: [0x4]u8, // 0x10
        m_flPitchStiffness: [0x4]u8, // 0x14
        m_flPitchDamping: [0x4]u8, // 0x18
        m_flAlongStiffness: [0x4]u8, // 0x1C
        m_flAlongDamping: [0x4]u8, // 0x20
        m_flAngleLimit: [0x4]u8, // 0x24
        m_flMinYaw: [0x4]u8, // 0x28
        m_flMaxYaw: [0x4]u8, // 0x2C
        m_flYawFriction: [0x4]u8, // 0x30
        m_flYawBounce: [0x4]u8, // 0x34
        m_flMinPitch: [0x4]u8, // 0x38
        m_flMaxPitch: [0x4]u8, // 0x3C
        m_flPitchFriction: [0x4]u8, // 0x40
        m_flPitchBounce: [0x4]u8, // 0x44
        m_flBaseMass: [0x4]u8, // 0x48
        m_flBaseStiffness: [0x4]u8, // 0x4C
        m_flBaseDamping: [0x4]u8, // 0x50
        m_flBaseMinLeft: [0x4]u8, // 0x54
        m_flBaseMaxLeft: [0x4]u8, // 0x58
        m_flBaseLeftFriction: [0x4]u8, // 0x5C
        m_flBaseMinUp: [0x4]u8, // 0x60
        m_flBaseMaxUp: [0x4]u8, // 0x64
        m_flBaseUpFriction: [0x4]u8, // 0x68
        m_flBaseMinForward: [0x4]u8, // 0x6C
        m_flBaseMaxForward: [0x4]u8, // 0x70
        m_flBaseForwardFriction: [0x4]u8, // 0x74
        m_flRadius0: [0x4]u8, // 0x78
        m_flRadius1: [0x4]u8, // 0x7C
        m_vPoint0: [0xC]u8, // 0x80
        m_vPoint1: [0xC]u8, // 0x8C
        m_nCollisionMask: [0x4]u8, // 0x98
    };
    pub const CRegionSVM = extern struct {
        m_Planes: [0x18]u8, // 0x0
        m_Nodes: [0x18]u8, // 0x18
    };
    pub const FeWorldCollisionParams_t = extern struct {
        flWorldFriction: [0x4]u8, // 0x0
        flGroundFriction: [0x4]u8, // 0x4
        nListBegin: [0x2]u8, // 0x8
        nListEnd: [0x2]u8, // 0xA
    };
    pub const CGenericShapeProxy = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_verts: [0x68]u8, // 0x30
    };
    pub const RnNode_t = extern struct {
        m_vMin: [0xC]u8, // 0x0
        m_nChildren: [0x4]u8, // 0xC
        m_vMax: [0xC]u8, // 0x10
        m_nTriangleOffset: [0x4]u8, // 0x1C
    };
    pub const FeFitMatrix_t = extern struct {
        bone: [0x20]u8, // 0x0
        vCenter: [0xC]u8, // 0x20
        nEnd: [0x2]u8, // 0x2C
        nNode: [0x2]u8, // 0x2E
        nBeginDynamic: [0x10]u8, // 0x30
    };
    pub const FeSimdQuad_t = extern struct {
        nNode: [0x20]u8, // 0x0
        f4Slack: [0x10]u8, // 0x20
        vShape: [0xC0]u8, // 0x30
        f4Weights: [0x40]u8, // 0xF0
    };
    pub const FeSimdSpringIntegrator_t = extern struct {
        nNode: [0x10]u8, // 0x0
        flSpringRestLength: [0x10]u8, // 0x10
        flSpringConstant: [0x10]u8, // 0x20
        flSpringDamping: [0x10]u8, // 0x30
        flNodeWeight0: [0x10]u8, // 0x40
    };
    pub const FeSimdNodeBase_t = extern struct {
        nNode: [0x8]u8, // 0x0
        nNodeX0: [0x8]u8, // 0x8
        nNodeX1: [0x8]u8, // 0x10
        nNodeY0: [0x8]u8, // 0x18
        nNodeY1: [0x8]u8, // 0x20
        nDummy: [0x8]u8, // 0x28
        qAdjust: [0x40]u8, // 0x30
    };
    pub const FeQuad_t = extern struct {
        nNode: [0x8]u8, // 0x0
        flSlack: [0x4]u8, // 0x8
        vShape: [0x40]u8, // 0xC
    };
    pub const FeHingeLimit_t = extern struct {
        nNode: [0xC]u8, // 0x0
        nFlags: [0x4]u8, // 0xC
        flWeight4: [0x4]u8, // 0x10
        flWeight5: [0x4]u8, // 0x14
        flAngleCenter: [0x4]u8, // 0x18
        flAngleExtents: [0x4]u8, // 0x1C
    };
    pub const RnWing_t = extern struct {
        m_nIndex: [0xC]u8, // 0x0
    };
    pub const FeWeightedNode_t = extern struct {
        nNode: [0x2]u8, // 0x0
        nWeight: [0x2]u8, // 0x2
    };
    pub const CollisionDetailLayerInfo_t = extern struct {
        m_sDescription: [0x8]u8, // 0x0
        m_sFriendlyName: [0x8]u8, // 0x8
        m_bIsQueryOnly: [0x8]u8, // 0x10
        m_sParentDetailLayer: [0x8]u8, // 0x18
        m_vecSubtreeDetailLayers: [0x18]u8, // 0x20
        m_bNotPickable: [0x8]u8, // 0x38
    };
    pub const FeEffectDesc_t = extern struct {
        sName: [0x8]u8, // 0x0
        nNameHash: [0x4]u8, // 0x8
        nType: [0x4]u8, // 0xC
        m_Params: [0x10]u8, // 0x10
    };
    pub const FeSpringIntegrator_t = extern struct {
        nNode: [0x4]u8, // 0x0
        flSpringRestLength: [0x4]u8, // 0x4
        flSpringConstant: [0x4]u8, // 0x8
        flSpringDamping: [0x4]u8, // 0xC
        flNodeWeight0: [0x4]u8, // 0x10
    };
    pub const FourVectors2D = extern struct {
        x: [0x10]u8, // 0x0
        y: [0x10]u8, // 0x10
    };
    pub const FeKelagerBend2_t = extern struct {
        flWeight: [0xC]u8, // 0x0
        flHeight0: [0x4]u8, // 0xC
        nNode: [0x6]u8, // 0x10
        nReserved: [0x2]u8, // 0x16
    };
    pub const vphysics_save_ragdoll_control_t = extern struct {
        m_flMinSpringFrequency: [0x4]u8, // 0x0
        m_flMaxSpringFrequency: [0x4]u8, // 0x4
        m_flMaxStretch: [0x4]u8, // 0x8
        m_bSolidCollisionAtZeroWeight: [0x1]u8, // 0xC
        m_bRequiresDynamicBodies: [0x1]u8, // 0xD
        m_bIgnoreTeleport: [0x2]u8, // 0xE
        m_vLinearVelocityAccumulator: [0xC]u8, // 0x10
        m_vAngularVelocityAccumulator: [0xC]u8, // 0x1C
        m_vForceAccumulator: [0xC]u8, // 0x28
        m_nBodyCount: [0x4]u8, // 0x34
    };
    pub const FeRigidColliderIndices_t = extern struct {
        m_nTaperedCapsuleRigidIndex: [0x2]u8, // 0x0
        m_nSphereRigidIndex: [0x2]u8, // 0x2
        m_nBoxRigidIndex: [0x2]u8, // 0x4
        m_nSDFRigidIndex: [0x2]u8, // 0x6
        m_nCollisionPlaneIndex: [0x2]u8, // 0x8
    };
    pub const FeCollisionPlane_t = extern struct {
        nCtrlParent: [0x2]u8, // 0x0
        nChildNode: [0x2]u8, // 0x2
        m_Plane: [0x10]u8, // 0x4
        flStrength: [0x4]u8, // 0x14
    };
    pub const FeStiffHingeBuild_t = extern struct {
        flMaxAngle: [0x4]u8, // 0x0
        flStrength: [0x4]u8, // 0x4
        flMotionBias: [0xC]u8, // 0x8
        nNode: [0x8]u8, // 0x14
    };
    pub const FeBoxRigid_t = extern struct {
        tmFrame2: [0x20]u8, // 0x0
        nNode: [0x2]u8, // 0x20
        nCollisionMask: [0x2]u8, // 0x22
        vSize: [0xC]u8, // 0x24
        nVertexMapIndex: [0x2]u8, // 0x30
        nFlags: [0xE]u8, // 0x32
    };
    pub const FeMorphLayerDepr_t = extern struct {
        m_Name: [0x8]u8, // 0x0
        m_nNameHash: [0x8]u8, // 0x8
        m_Nodes: [0x18]u8, // 0x10
        m_InitPos: [0x18]u8, // 0x28
        m_Gravity: [0x18]u8, // 0x40
        m_GoalStrength: [0x18]u8, // 0x58
        m_GoalDamping: [0x18]u8, // 0x70
        m_nFlags: [0x8]u8, // 0x88
    };
    pub const FeCtrlOffset_t = extern struct {
        vOffset: [0xC]u8, // 0x0
        nCtrlParent: [0x2]u8, // 0xC
        nCtrlChild: [0x2]u8, // 0xE
    };
    pub const IPhysicsPlayerController = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const FeNodeBase_t = extern struct {
        nNode: [0x2]u8, // 0x0
        nDummy: [0x6]u8, // 0x2
        nNodeX0: [0x2]u8, // 0x8
        nNodeX1: [0x2]u8, // 0xA
        nNodeY0: [0x2]u8, // 0xC
        nNodeY1: [0x2]u8, // 0xE
        qAdjust: [0x10]u8, // 0x10
    };
    pub const FeVertexMapBuild_t = extern struct {
        m_VertexMapName: [0x8]u8, // 0x0
        m_nNameHash: [0x4]u8, // 0x8
        m_Color: [0x4]u8, // 0xC
        m_flVolumetricSolveStrength: [0x4]u8, // 0x10
        m_nScaleSourceNode: [0x4]u8, // 0x14
        m_Weights: [0x18]u8, // 0x18
    };
    pub const CFeVertexMapBuildArray = extern struct {
        m_Array: [0x18]u8, // 0x0
    };
    pub const FeTri_t = extern struct {
        nNode: [0x8]u8, // 0x0
        w1: [0x4]u8, // 0x8
        w2: [0x4]u8, // 0xC
        v1x: [0x4]u8, // 0x10
        v2: [0x8]u8, // 0x14
    };
    pub const RnHull_t = extern struct {
        m_vCentroid: [0xC]u8, // 0x0
        m_flMaxAngularRadius: [0x4]u8, // 0xC
        m_flMinCentroidRadius: [0x4]u8, // 0x10
        m_Bounds: [0x18]u8, // 0x14
        m_vOrthographicAreas: [0xC]u8, // 0x2C
        m_MassProperties: [0x30]u8, // 0x38
        m_flVolume: [0x4]u8, // 0x68
        m_flSurfaceArea: [0x4]u8, // 0x6C
        m_VertexPositions: [0x18]u8, // 0x70
        m_FacePlanes: [0x18]u8, // 0x88
        m_nFlags: [0x8]u8, // 0xA0
        m_pRegionSVM: [0x8]u8, // 0xA8
        m_Vertices: [0x18]u8, // 0xB0
        m_Edges: [0x18]u8, // 0xC8
        m_Faces: [0x18]u8, // 0xE0
    };
    pub const FeModelSelfCollisionLayer_t = extern struct {
        m_Name: [0x8]u8, // 0x0
        m_Nodes: [0x18]u8, // 0x8
        m_flParentReaction: [0x4]u8, // 0x20
        m_nFlags: [0x4]u8, // 0x24
        m_nEndIdx: [0x10]u8, // 0x28
    };
    pub const FeAntiTunnelGroupBuild_t = extern struct {
        m_nVertexMapHash: [0x4]u8, // 0x0
        m_nCollisionMask: [0x4]u8, // 0x4
    };
    pub const CovMatrix3 = extern struct {
        m_vDiag: [0xC]u8, // 0x0
        m_flXY: [0x4]u8, // 0xC
        m_flXZ: [0x4]u8, // 0x10
        m_flYZ: [0x4]u8, // 0x14
    };
    pub const PhysicsParticleId_t = extern struct {
        m_Value: [0x4]u8, // 0x0
    };
    pub const RnVertex_t = extern struct {
        m_nEdge: [0x1]u8, // 0x0
    };
    pub const IPhysicsMotionController = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const Dop26_t = extern struct {
        m_flSupport: [0x68]u8, // 0x0
    };
    pub const FeDynKinLink_t = extern struct {
        m_nParent: [0x2]u8, // 0x0
        m_nChild: [0x2]u8, // 0x2
    };
    pub const RnFace_t = extern struct {
        m_nEdge: [0x1]u8, // 0x0
    };
    pub const FeSimdPrism_t = extern struct {
        nNode: [0x30]u8, // 0x0
        flVolume: [0x10]u8, // 0x30
    };
    pub const FeCtrlOsOffset_t = extern struct {
        nCtrlParent: [0x2]u8, // 0x0
        nCtrlChild: [0x2]u8, // 0x2
    };
    pub const FeAntiTunnelProbe_t = extern struct {
        flWeight: [0x4]u8, // 0x0
        nFlags: [0x4]u8, // 0x4
        nProbeNode: [0x2]u8, // 0x8
        nCount: [0x2]u8, // 0xA
        nBegin: [0x4]u8, // 0xC
        flActivationDistance: [0x4]u8, // 0x10
        flCurvatureRadius: [0x4]u8, // 0x14
        flBias: [0x4]u8, // 0x18
    };
    pub const FeSourceEdge_t = extern struct {
        nNode: [0x4]u8, // 0x0
    };
    pub const FeTwistConstraint_t = extern struct {
        nNodeOrient: [0x2]u8, // 0x0
        nNodeEnd: [0x2]u8, // 0x2
        flTwistRelax: [0x4]u8, // 0x4
        flSwingRelax: [0x4]u8, // 0x8
    };
    pub const FeNodeWindBase_t = extern struct {
        nNodeX0: [0x2]u8, // 0x0
        nNodeX1: [0x2]u8, // 0x2
        nNodeY0: [0x2]u8, // 0x4
        nNodeY1: [0x2]u8, // 0x6
    };
    pub const FeAxialEdgeBend_t = extern struct {
        te: [0x4]u8, // 0x0
        tv: [0x4]u8, // 0x4
        flDist: [0x4]u8, // 0x8
        flWeight: [0x10]u8, // 0xC
        nNode: [0xC]u8, // 0x1C
    };
    pub const FourCovMatrices3 = extern struct {
        m_vDiag: [0x30]u8, // 0x0
        m_flXY: [0x10]u8, // 0x30
        m_flXZ: [0x10]u8, // 0x40
        m_flYZ: [0x10]u8, // 0x50
    };
    pub const constraint_breakableparams_t = extern struct {
        strength: [0x4]u8, // 0x0
        forceLimit: [0x4]u8, // 0x4
        torqueLimit: [0x4]u8, // 0x8
        bodyMassScale: [0x8]u8, // 0xC
        isActive: [0x4]u8, // 0x14
    };
    pub const FeSphereRigid_t = extern struct {
        vSphere: [0x10]u8, // 0x0
        nNode: [0x2]u8, // 0x10
        nCollisionMask: [0x2]u8, // 0x12
        nVertexMapIndex: [0x2]u8, // 0x14
        nFlags: [0xA]u8, // 0x16
    };
    pub const CollisionDetailLayerInfo_t__Name_t = extern struct {
        m_nNameToken: [0x8]u8, // 0x0
        m_sNameString: [0x8]u8, // 0x8
    };
    pub const FeBuildTaperedCapsuleRigid_t = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_nPriority: [0x4]u8, // 0x30
        m_nVertexMapHash: [0x4]u8, // 0x34
        m_nAntitunnelGroupBits: [0x8]u8, // 0x38
    };
    pub const IPhysicsBody = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const FeSoftParent_t = extern struct {
        nParent: [0x4]u8, // 0x0
        flAlpha: [0x4]u8, // 0x4
    };
    pub const RnShapeDesc_t = extern struct {
        m_nCollisionAttributeIndex: [0x4]u8, // 0x0
        m_nSurfacePropertyIndex: [0x4]u8, // 0x4
        m_UserFriendlyName: [0x8]u8, // 0x8
        m_bUserFriendlyNameSealed: [0x1]u8, // 0x10
        m_bUserFriendlyNameLong: [0x3]u8, // 0x11
        m_nToolMaterialHash: [0x4]u8, // 0x14
    };
    pub const FeTreeChildren_t = extern struct {
        nChild: [0x4]u8, // 0x0
    };
    pub const FeRodConstraint_t = extern struct {
        nNode: [0x4]u8, // 0x0
        flMaxDist: [0x4]u8, // 0x4
        flMinDist: [0x4]u8, // 0x8
        flWeight0: [0x4]u8, // 0xC
        flRelaxationFactor: [0x4]u8, // 0x10
    };
    pub const FeFitWeight_t = extern struct {
        flWeight: [0x4]u8, // 0x0
        nNode: [0x2]u8, // 0x4
        nDummy: [0x2]u8, // 0x6
    };
    pub const RnHalfEdge_t = extern struct {
        m_nNext: [0x1]u8, // 0x0
        m_nTwin: [0x1]u8, // 0x1
        m_nOrigin: [0x1]u8, // 0x2
        m_nFace: [0x1]u8, // 0x3
    };
    pub const FeSimdTri_t = extern struct {
        nNode: [0x30]u8, // 0x0
        w1: [0x10]u8, // 0x30
        w2: [0x10]u8, // 0x40
        v1x: [0x10]u8, // 0x50
        v2: [0x20]u8, // 0x60
    };
    pub const VertexPositionColor_t = extern struct {
        m_vPosition: [0x10]u8, // 0x0
    };
    pub const FeFitInfluence_t = extern struct {
        nVertexNode: [0x4]u8, // 0x0
        flWeight: [0x4]u8, // 0x4
        nMatrixNode: [0x4]u8, // 0x8
    };
    pub const FeHingeLimitBuild_t = extern struct {
        nNode: [0xC]u8, // 0x0
        nFlags: [0x4]u8, // 0xC
        flLimitCW: [0x4]u8, // 0x10
        flLimitCCW: [0x4]u8, // 0x14
    };
};
