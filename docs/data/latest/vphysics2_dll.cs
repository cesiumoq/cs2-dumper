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

namespace Cs2.vphysics2 {

    public enum JointMotion_t : int {
        JOINT_MOTION_FREE = 0, 
        JOINT_MOTION_LOCKED = 1, 
        JOINT_MOTION_COUNT = 2, 
    }
    public enum JointAxis_t : int {
        JOINT_AXIS_X = 0, 
        JOINT_AXIS_Y = 1, 
        JOINT_AXIS_Z = 2, 
        JOINT_AXIS_COUNT = 3, 
    }
    public enum DynamicContinuousContactBehavior_t : int {
        DYNAMIC_CONTINUOUS_ALLOW_IF_REQUESTED_BY_OTHER_BODY = 0, 
        DYNAMIC_CONTINUOUS_ALWAYS = 1, 
        DYNAMIC_CONTINUOUS_NEVER = 2, 
    }
    public enum PhysInterfaceId_t : int {
        PIID_UNKNOWN = 0, 
        PIID_IPHYSICSBODY = 1, 
        PIID_IPHYSAGGREGATE = 2, 
        PIID_IPHYSICSJOINT = 3, 
        PIID_IPHYSICSMOTIONCONTROLLER = 4, 
        PIID_IPHYSICSPARTICLEROPE = 5, 
        PIID_IPHYSICSRAGDOLLCONTROL = 6, 
        PIID_NUM_TYPES = 7, 
    }
    public enum PhysGenericShapeType_t : int {
        GENERIC_SHAPE_POINT = 0, 
        GENERIC_SHAPE_SPHERE = 1, 
        GENERIC_SHAPE_AABB = 2, 
        GENERIC_SHAPE_CAPSULE = 3, 
        GENERIC_SHAPE_HULL = 4, 
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct RnSphereDesc_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_Sphere[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x178)]
    public unsafe struct RnCompoundDesc_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_Compound[0x160];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct RnSoftbodyParticle_t {
        [FieldOffset(0x0)] public fixed byte m_flMassInv[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x110)]
    public unsafe struct RnHullDesc_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_Hull[0xF8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct RnCapsuleDesc_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_Capsule[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x728)]
    public unsafe struct PhysFeModelDesc_t {
        [FieldOffset(0x0)] public fixed byte m_CtrlHash[0x18];
        [FieldOffset(0x18)] public fixed byte m_CtrlName[0x18];
        [FieldOffset(0x30)] public fixed byte m_nStaticNodeFlags[0x4];
        [FieldOffset(0x34)] public fixed byte m_nDynamicNodeFlags[0x4];
        [FieldOffset(0x38)] public fixed byte m_flLocalForce[0x4];
        [FieldOffset(0x3C)] public fixed byte m_flLocalRotation[0x4];
        [FieldOffset(0x40)] public fixed byte m_nNodeCount[0x2];
        [FieldOffset(0x42)] public fixed byte m_nStaticNodes[0x2];
        [FieldOffset(0x44)] public fixed byte m_nRotLockStaticNodes[0x2];
        [FieldOffset(0x46)] public fixed byte m_nFirstPositionDrivenNode[0x2];
        [FieldOffset(0x48)] public fixed byte m_nSimdTriCount1[0x2];
        [FieldOffset(0x4A)] public fixed byte m_nSimdTriCount2[0x2];
        [FieldOffset(0x4C)] public fixed byte m_nSimdQuadCount1[0x2];
        [FieldOffset(0x4E)] public fixed byte m_nSimdQuadCount2[0x2];
        [FieldOffset(0x50)] public fixed byte m_nQuadCount1[0x2];
        [FieldOffset(0x52)] public fixed byte m_nQuadCount2[0x2];
        [FieldOffset(0x54)] public fixed byte m_nTreeDepth[0x2];
        [FieldOffset(0x56)] public fixed byte m_nNodeBaseJiggleboneDependsCount[0x2];
        [FieldOffset(0x58)] public fixed byte m_nRopeCount[0x8];
        [FieldOffset(0x60)] public fixed byte m_Ropes[0x18];
        [FieldOffset(0x78)] public fixed byte m_NodeBases[0x18];
        [FieldOffset(0x90)] public fixed byte m_SimdNodeBases[0x18];
        [FieldOffset(0xA8)] public fixed byte m_Quads[0x18];
        [FieldOffset(0xC0)] public fixed byte m_SimdQuads[0x18];
        [FieldOffset(0xD8)] public fixed byte m_SimdTris[0x18];
        [FieldOffset(0xF0)] public fixed byte m_Prisms[0x18];
        [FieldOffset(0x108)] public fixed byte m_SimdPrisms[0x18];
        [FieldOffset(0x120)] public fixed byte m_SimdRods[0x18];
        [FieldOffset(0x138)] public fixed byte m_SimdRodsAnim[0x18];
        [FieldOffset(0x150)] public fixed byte m_InitPose[0x18];
        [FieldOffset(0x168)] public fixed byte m_Rods[0x18];
        [FieldOffset(0x180)] public fixed byte m_Twists[0x18];
        [FieldOffset(0x198)] public fixed byte m_HingeLimits[0x18];
        [FieldOffset(0x1B0)] public fixed byte m_AntiTunnelBytecode[0x18];
        [FieldOffset(0x1C8)] public fixed byte m_DynKinLinks[0x18];
        [FieldOffset(0x1E0)] public fixed byte m_BoneMergeLinks[0x18];
        [FieldOffset(0x1F8)] public fixed byte m_AntiTunnelProbes[0x18];
        [FieldOffset(0x210)] public fixed byte m_AntiTunnelTargetNodes[0x18];
        [FieldOffset(0x228)] public fixed byte m_NodeStrayBoxes[0x18];
        [FieldOffset(0x240)] public fixed byte m_AxialEdges[0x18];
        [FieldOffset(0x258)] public fixed byte m_NodeInvMasses[0x18];
        [FieldOffset(0x270)] public fixed byte m_CtrlOffsets[0x18];
        [FieldOffset(0x288)] public fixed byte m_CtrlOsOffsets[0x18];
        [FieldOffset(0x2A0)] public fixed byte m_FollowNodes[0x18];
        [FieldOffset(0x2B8)] public fixed byte m_CollisionPlanes[0x18];
        [FieldOffset(0x2D0)] public fixed byte m_NodeIntegrator[0x18];
        [FieldOffset(0x2E8)] public fixed byte m_SpringIntegrator[0x18];
        [FieldOffset(0x300)] public fixed byte m_SimdSpringIntegrator[0x18];
        [FieldOffset(0x318)] public fixed byte m_WorldCollisionParams[0x18];
        [FieldOffset(0x330)] public fixed byte m_LegacyStretchForce[0x18];
        [FieldOffset(0x348)] public fixed byte m_NodeCollisionRadii[0x18];
        [FieldOffset(0x360)] public fixed byte m_DynNodeFriction[0x18];
        [FieldOffset(0x378)] public fixed byte m_LocalRotation[0x18];
        [FieldOffset(0x390)] public fixed byte m_LocalForce[0x18];
        [FieldOffset(0x3A8)] public fixed byte m_TaperedCapsuleStretches[0x18];
        [FieldOffset(0x3C0)] public fixed byte m_TaperedCapsuleRigids[0x18];
        [FieldOffset(0x3D8)] public fixed byte m_SphereRigids[0x18];
        [FieldOffset(0x3F0)] public fixed byte m_WorldCollisionNodes[0x18];
        [FieldOffset(0x408)] public fixed byte m_TreeParents[0x18];
        [FieldOffset(0x420)] public fixed byte m_TreeCollisionMasks[0x18];
        [FieldOffset(0x438)] public fixed byte m_TreeChildren[0x18];
        [FieldOffset(0x450)] public fixed byte m_FreeNodes[0x18];
        [FieldOffset(0x468)] public fixed byte m_FitMatrices[0x18];
        [FieldOffset(0x480)] public fixed byte m_FitWeights[0x18];
        [FieldOffset(0x498)] public fixed byte m_ReverseOffsets[0x18];
        [FieldOffset(0x4B0)] public fixed byte m_AnimStrayRadii[0x18];
        [FieldOffset(0x4C8)] public fixed byte m_SimdAnimStrayRadii[0x18];
        [FieldOffset(0x4E0)] public fixed byte m_KelagerBends[0x18];
        [FieldOffset(0x4F8)] public fixed byte m_CtrlSoftOffsets[0x18];
        [FieldOffset(0x510)] public fixed byte m_JiggleBones[0x18];
        [FieldOffset(0x528)] public fixed byte m_SourceElems[0x18];
        [FieldOffset(0x540)] public fixed byte m_GoalDampedSpringIntegrators[0x18];
        [FieldOffset(0x558)] public fixed byte m_Tris[0x18];
        [FieldOffset(0x570)] public fixed byte m_nTriCount1[0x2];
        [FieldOffset(0x572)] public fixed byte m_nTriCount2[0x2];
        [FieldOffset(0x574)] public fixed byte m_nReservedUint8[0x1];
        [FieldOffset(0x575)] public fixed byte m_nExtraPressureIterations[0x1];
        [FieldOffset(0x576)] public fixed byte m_nExtraGoalIterations[0x1];
        [FieldOffset(0x577)] public fixed byte m_nExtraIterations[0x1];
        [FieldOffset(0x578)] public fixed byte m_SDFRigids[0x18];
        [FieldOffset(0x590)] public fixed byte m_BoxRigids[0x18];
        [FieldOffset(0x5A8)] public fixed byte m_DynNodeVertexSet[0x18];
        [FieldOffset(0x5C0)] public fixed byte m_VertexSetNames[0x18];
        [FieldOffset(0x5D8)] public fixed byte m_RigidColliderPriorities[0x18];
        [FieldOffset(0x5F0)] public fixed byte m_MorphLayers[0x18];
        [FieldOffset(0x608)] public fixed byte m_MorphSetData[0x18];
        [FieldOffset(0x620)] public fixed byte m_VertexMaps[0x18];
        [FieldOffset(0x638)] public fixed byte m_VertexMapValues[0x18];
        [FieldOffset(0x650)] public fixed byte m_Effects[0x18];
        [FieldOffset(0x668)] public fixed byte m_LockToParent[0x18];
        [FieldOffset(0x680)] public fixed byte m_LockToGoal[0x18];
        [FieldOffset(0x698)] public fixed byte m_SkelParents[0x18];
        [FieldOffset(0x6B0)] public fixed byte m_DynNodeWindBases[0x18];
        [FieldOffset(0x6C8)] public fixed byte m_SelfCollisionLayers[0x18];
        [FieldOffset(0x6E0)] public fixed byte m_flInternalPressure[0x4];
        [FieldOffset(0x6E4)] public fixed byte m_flDefaultTimeDilation[0x4];
        [FieldOffset(0x6E8)] public fixed byte m_flWindage[0x4];
        [FieldOffset(0x6EC)] public fixed byte m_flWindDrag[0x4];
        [FieldOffset(0x6F0)] public fixed byte m_flDefaultSurfaceStretch[0x4];
        [FieldOffset(0x6F4)] public fixed byte m_flDefaultThreadStretch[0x4];
        [FieldOffset(0x6F8)] public fixed byte m_flDefaultGravityScale[0x4];
        [FieldOffset(0x6FC)] public fixed byte m_flDefaultVelAirDrag[0x4];
        [FieldOffset(0x700)] public fixed byte m_flDefaultExpAirDrag[0x4];
        [FieldOffset(0x704)] public fixed byte m_flDefaultVelQuadAirDrag[0x4];
        [FieldOffset(0x708)] public fixed byte m_flDefaultExpQuadAirDrag[0x4];
        [FieldOffset(0x70C)] public fixed byte m_flRodVelocitySmoothRate[0x4];
        [FieldOffset(0x710)] public fixed byte m_flQuadVelocitySmoothRate[0x4];
        [FieldOffset(0x714)] public fixed byte m_flAddWorldCollisionRadius[0x4];
        [FieldOffset(0x718)] public fixed byte m_flDefaultVolumetricSolveAmount[0x4];
        [FieldOffset(0x71C)] public fixed byte m_flMotionSmoothCDT[0x4];
        [FieldOffset(0x720)] public fixed byte m_flLocalDrag1[0x4];
        [FieldOffset(0x724)] public fixed byte m_nRodVelocitySmoothIterations[0x2];
        [FieldOffset(0x726)] public fixed byte m_nQuadVelocitySmoothIterations[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD8)]
    public unsafe struct RnMeshDesc_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_Mesh[0xC0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct RnSoftbodySpring_t {
        [FieldOffset(0x0)] public fixed byte m_nParticle[0x4];
        [FieldOffset(0x4)] public fixed byte m_flLength[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct RnSoftbodyCapsule_t {
        [FieldOffset(0x0)] public fixed byte m_vCenter[0x18];
        [FieldOffset(0x18)] public fixed byte m_flRadius[0x4];
        [FieldOffset(0x1C)] public fixed byte m_nParticle[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xE8)]
    public unsafe struct vphysics_save_cphysicsbody_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0xE0];
        [FieldOffset(0xE0)] public fixed byte m_nOldPointer[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct FeBuildBoxRigid_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
        [FieldOffset(0x40)] public fixed byte m_nPriority[0x4];
        [FieldOffset(0x44)] public fixed byte m_nVertexMapHash[0x4];
        [FieldOffset(0x48)] public fixed byte m_nAntitunnelGroupBits[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA4)]
    public unsafe struct CFeIndexedJiggleBone {
        [FieldOffset(0x0)] public fixed byte m_nNode[0x4];
        [FieldOffset(0x4)] public fixed byte m_nJiggleParent[0x4];
        [FieldOffset(0x8)] public fixed byte m_jiggleBone[0x9C];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct FeBoneMergeLink_t {
        [FieldOffset(0x0)] public fixed byte m_nParentHash[0x4];
        [FieldOffset(0x4)] public fixed byte m_nChildNode[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct IPhysAggregateInstance {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_pSkeleton[0x8];
        [FieldOffset(0x10)] public fixed byte m_bIsAxisAligned[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct FeBandBendLimit_t {
        [FieldOffset(0x0)] public fixed byte flDistMin[0x4];
        [FieldOffset(0x4)] public fixed byte flDistMax[0x4];
        [FieldOffset(0x8)] public fixed byte nNode[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct RnCompoundTree_t {
        [FieldOffset(0x0)] public fixed byte m_Nodes[0x10];
        [FieldOffset(0x10)] public fixed byte m_nStartIterationIndex[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct FeTaperedCapsuleStretch_t {
        [FieldOffset(0x0)] public fixed byte nNode[0x4];
        [FieldOffset(0x4)] public fixed byte nCollisionMask[0x2];
        [FieldOffset(0x6)] public fixed byte nDummy[0x2];
        [FieldOffset(0x8)] public fixed byte flRadius[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct constraint_axislimit_t {
        [FieldOffset(0x0)] public fixed byte flMinRotation[0x4];
        [FieldOffset(0x4)] public fixed byte flMaxRotation[0x4];
        [FieldOffset(0x8)] public fixed byte flMotorTargetAngSpeed[0x4];
        [FieldOffset(0xC)] public fixed byte flMotorMaxTorque[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct FeSimdRodConstraintAnim_t {
        [FieldOffset(0x0)] public fixed byte nNode[0x10];
        [FieldOffset(0x10)] public fixed byte f4Weight0[0x10];
        [FieldOffset(0x20)] public fixed byte f4RelaxationFactor[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct FeSimdRodConstraint_t {
        [FieldOffset(0x0)] public fixed byte nNode[0x10];
        [FieldOffset(0x10)] public fixed byte f4MaxDist[0x10];
        [FieldOffset(0x20)] public fixed byte f4MinDist[0x10];
        [FieldOffset(0x30)] public fixed byte f4Weight0[0x10];
        [FieldOffset(0x40)] public fixed byte f4RelaxationFactor[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct IPhysicsParticleRope {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct constraint_hingeparams_t {
        [FieldOffset(0x0)] public fixed byte worldPosition[0xC];
        [FieldOffset(0xC)] public fixed byte worldAxisDirection[0xC];
        [FieldOffset(0x18)] public fixed byte hingeAxis[0x10];
        [FieldOffset(0x28)] public fixed byte constraint[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct IPhysicsBodyList {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct FeBuildSphereRigid_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
        [FieldOffset(0x20)] public fixed byte m_nPriority[0x4];
        [FieldOffset(0x24)] public fixed byte m_nVertexMapHash[0x4];
        [FieldOffset(0x28)] public fixed byte m_nAntitunnelGroupBits[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct FeSimdAnimStrayRadius_t {
        [FieldOffset(0x0)] public fixed byte nNode[0x10];
        [FieldOffset(0x10)] public fixed byte flMaxDist[0x10];
        [FieldOffset(0x20)] public fixed byte flRelaxationFactor[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct RnTriangle_t {
        [FieldOffset(0x0)] public fixed byte m_nIndex[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct FeProxyVertexMap_t {
        [FieldOffset(0x0)] public fixed byte m_Name[0x8];
        [FieldOffset(0x8)] public fixed byte m_flWeight[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct FeNodeIntegrator_t {
        [FieldOffset(0x0)] public fixed byte flPointDamping[0x4];
        [FieldOffset(0x4)] public fixed byte flAnimationForceAttraction[0x4];
        [FieldOffset(0x8)] public fixed byte flAnimationVertexAttraction[0x4];
        [FieldOffset(0xC)] public fixed byte flGravity[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1C)]
    public unsafe struct RnCapsule_t {
        [FieldOffset(0x0)] public fixed byte m_vCenter[0x18];
        [FieldOffset(0x18)] public fixed byte m_flRadius[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD0)]
    public unsafe struct CFeNamedJiggleBone {
        [FieldOffset(0x0)] public fixed byte m_strParentBone[0x10];
        [FieldOffset(0x10)] public fixed byte m_transform[0x20];
        [FieldOffset(0x30)] public fixed byte m_nJiggleParent[0x4];
        [FieldOffset(0x34)] public fixed byte m_jiggleBone[0x9C];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct FePrism_t {
        [FieldOffset(0x0)] public fixed byte nNode[0xC];
        [FieldOffset(0xC)] public fixed byte flVolume[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct FeAntiTunnelProbeBuild_t {
        [FieldOffset(0x0)] public fixed byte flWeight[0x4];
        [FieldOffset(0x4)] public fixed byte flActivationDistance[0x4];
        [FieldOffset(0x8)] public fixed byte flBias[0x4];
        [FieldOffset(0xC)] public fixed byte flCurvature[0x4];
        [FieldOffset(0x10)] public fixed byte nFlags[0x4];
        [FieldOffset(0x14)] public fixed byte nProbeNode[0x4];
        [FieldOffset(0x18)] public fixed byte targetNodes[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xE0)]
    public unsafe struct RnBodyDesc_t {
        [FieldOffset(0x0)] public fixed byte m_sDebugName[0x8];
        [FieldOffset(0x8)] public fixed byte m_vPosition[0xC];
        [FieldOffset(0x14)] public fixed byte m_qOrientation[0x10];
        [FieldOffset(0x24)] public fixed byte m_vLinearVelocity[0xC];
        [FieldOffset(0x30)] public fixed byte m_vAngularVelocity[0xC];
        [FieldOffset(0x3C)] public fixed byte m_vLocalMassCenter[0xC];
        [FieldOffset(0x48)] public fixed byte m_LocalInertiaInv[0x24];
        [FieldOffset(0x6C)] public fixed byte m_flMassInv[0x4];
        [FieldOffset(0x70)] public fixed byte m_flGameMass[0x4];
        [FieldOffset(0x74)] public fixed byte m_flMassScaleInv[0x4];
        [FieldOffset(0x78)] public fixed byte m_flInertiaScaleInv[0x4];
        [FieldOffset(0x7C)] public fixed byte m_flLinearDamping[0x4];
        [FieldOffset(0x80)] public fixed byte m_flAngularDamping[0x4];
        [FieldOffset(0x84)] public fixed byte m_flLinearDragScale[0x4];
        [FieldOffset(0x88)] public fixed byte m_flAngularDragScale[0x4];
        [FieldOffset(0x8C)] public fixed byte m_flLinearFluidDragScale[0x4];
        [FieldOffset(0x90)] public fixed byte m_flAngularFluidDragScale[0x4];
        [FieldOffset(0x94)] public fixed byte m_vLastAwakeForceAccum[0xC];
        [FieldOffset(0xA0)] public fixed byte m_vLastAwakeTorqueAccum[0xC];
        [FieldOffset(0xAC)] public fixed byte m_flBuoyancyScale[0x4];
        [FieldOffset(0xB0)] public fixed byte m_flGravityScale[0x4];
        [FieldOffset(0xB4)] public fixed byte m_flTimeScale[0x4];
        [FieldOffset(0xB8)] public fixed byte m_nBodyType[0x4];
        [FieldOffset(0xBC)] public fixed byte m_nGameIndex[0x4];
        [FieldOffset(0xC0)] public fixed byte m_nGameFlags[0x4];
        [FieldOffset(0xC4)] public fixed byte m_nMinVelocityIterations[0x1];
        [FieldOffset(0xC5)] public fixed byte m_nMinPositionIterations[0x1];
        [FieldOffset(0xC6)] public fixed byte m_nMassPriority[0x1];
        [FieldOffset(0xC7)] public fixed byte m_bEnabled[0x1];
        [FieldOffset(0xC8)] public fixed byte m_bSleeping[0x1];
        [FieldOffset(0xC9)] public fixed byte m_bIsContinuousEnabled[0x1];
        [FieldOffset(0xCA)] public fixed byte m_bDragEnabled[0x2];
        [FieldOffset(0xCC)] public fixed byte m_vGravity[0xC];
        [FieldOffset(0xD8)] public fixed byte m_bSpeculativeEnabled[0x1];
        [FieldOffset(0xD9)] public fixed byte m_bHasShadowController[0x1];
        [FieldOffset(0xDA)] public fixed byte m_nDynamicContinuousContactBehavior[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct OldFeEdge_t {
        [FieldOffset(0x0)] public fixed byte m_flK[0xC];
        [FieldOffset(0xC)] public fixed byte invA[0x4];
        [FieldOffset(0x10)] public fixed byte t[0x4];
        [FieldOffset(0x14)] public fixed byte flThetaRelaxed[0x4];
        [FieldOffset(0x18)] public fixed byte flThetaFactor[0x4];
        [FieldOffset(0x1C)] public fixed byte c01[0x4];
        [FieldOffset(0x20)] public fixed byte c02[0x4];
        [FieldOffset(0x24)] public fixed byte c03[0x4];
        [FieldOffset(0x28)] public fixed byte c04[0x4];
        [FieldOffset(0x2C)] public fixed byte flAxialModelDist[0x4];
        [FieldOffset(0x30)] public fixed byte flAxialModelWeights[0x10];
        [FieldOffset(0x40)] public fixed byte m_nNode[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct FeFollowNode_t {
        [FieldOffset(0x0)] public fixed byte nParentNode[0x2];
        [FieldOffset(0x2)] public fixed byte nChildNode[0x2];
        [FieldOffset(0x4)] public fixed byte flWeight[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC0)]
    public unsafe struct RnMesh_t {
        [FieldOffset(0x0)] public fixed byte m_vMin[0xC];
        [FieldOffset(0xC)] public fixed byte m_vMax[0xC];
        [FieldOffset(0x18)] public fixed byte m_Nodes[0x18];
        [FieldOffset(0x30)] public fixed byte m_Vertices[0x18];
        [FieldOffset(0x48)] public fixed byte m_Triangles[0x18];
        [FieldOffset(0x60)] public fixed byte m_Wings[0x18];
        [FieldOffset(0x78)] public fixed byte m_TriangleEdgeFlags[0x18];
        [FieldOffset(0x90)] public fixed byte m_Materials[0x18];
        [FieldOffset(0xA8)] public fixed byte m_vOrthographicAreas[0xC];
        [FieldOffset(0xB4)] public fixed byte m_nFlags[0x4];
        [FieldOffset(0xB8)] public fixed byte m_nDebugFlags[0x4];
        [FieldOffset(0xBC)] public fixed byte m_flSurfaceArea[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct VertexPositionNormal_t {
        [FieldOffset(0x0)] public fixed byte m_vPosition[0xC];
        [FieldOffset(0xC)] public fixed byte m_vNormal[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct IPhysicsRagdollControl {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1C)]
    public unsafe struct RnCompoundTreeNode_t {
        [FieldOffset(0x0)] public fixed byte m_vMin[0xC];
        [FieldOffset(0xC)] public fixed byte m_vMax[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct FeBuildSDFRigid_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
        [FieldOffset(0x50)] public fixed byte m_nPriority[0x4];
        [FieldOffset(0x54)] public fixed byte m_nVertexMapHash[0x4];
        [FieldOffset(0x58)] public fixed byte m_nAntitunnelGroupBits[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct RnBlendVertex_t {
        [FieldOffset(0x0)] public fixed byte m_nWeight0[0x2];
        [FieldOffset(0x2)] public fixed byte m_nIndex0[0x2];
        [FieldOffset(0x4)] public fixed byte m_nWeight1[0x2];
        [FieldOffset(0x6)] public fixed byte m_nIndex1[0x2];
        [FieldOffset(0x8)] public fixed byte m_nWeight2[0x2];
        [FieldOffset(0xA)] public fixed byte m_nIndex2[0x2];
        [FieldOffset(0xC)] public fixed byte m_nFlags[0x2];
        [FieldOffset(0xE)] public fixed byte m_nTargetIndex[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CFeMorphLayer {
        [FieldOffset(0x0)] public fixed byte m_Name[0x8];
        [FieldOffset(0x8)] public fixed byte m_nNameHash[0x8];
        [FieldOffset(0x10)] public fixed byte m_Nodes[0x18];
        [FieldOffset(0x28)] public fixed byte m_InitPos[0x18];
        [FieldOffset(0x40)] public fixed byte m_Gravity[0x18];
        [FieldOffset(0x58)] public fixed byte m_GoalStrength[0x18];
        [FieldOffset(0x70)] public fixed byte m_GoalDamping[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct FeCtrlSoftOffset_t {
        [FieldOffset(0x0)] public fixed byte nCtrlParent[0x2];
        [FieldOffset(0x2)] public fixed byte nCtrlChild[0x2];
        [FieldOffset(0x4)] public fixed byte vOffset[0xC];
        [FieldOffset(0x10)] public fixed byte flAlpha[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct VPhysEntityId_t {
        [FieldOffset(0x0)] public fixed byte m_Id[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x160)]
    public unsafe struct RnCompound_t {
        [FieldOffset(0x0)] public fixed byte m_Tree[0x18];
        [FieldOffset(0x18)] public fixed byte m_nHullBaseIndex[0x4];
        [FieldOffset(0x1C)] public fixed byte m_nMeshBaseIndex[0x4];
        [FieldOffset(0x20)] public fixed byte m_nShapeCount[0x8];
        [FieldOffset(0x28)] public fixed byte m_Meshes[0xC8];
        [FieldOffset(0xF0)] public fixed byte m_Hulls[0x10];
        [FieldOffset(0x100)] public fixed byte m_Capsules[0x10];
        [FieldOffset(0x110)] public fixed byte m_Spheres[0x10];
        [FieldOffset(0x120)] public fixed byte m_CompoundMaterialIndices[0x10];
        [FieldOffset(0x130)] public fixed byte m_Bounds[0x18];
        [FieldOffset(0x148)] public fixed byte m_vOrthographicAreas[0xC];
        [FieldOffset(0x154)] public fixed byte m_flSurfaceArea[0x4];
        [FieldOffset(0x158)] public fixed byte m_flVolume[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct FeVertexMapDesc_t {
        [FieldOffset(0x0)] public fixed byte sName[0x8];
        [FieldOffset(0x8)] public fixed byte nNameHash[0x4];
        [FieldOffset(0xC)] public fixed byte nColor[0x4];
        [FieldOffset(0x10)] public fixed byte nFlags[0x4];
        [FieldOffset(0x14)] public fixed byte nVertexBase[0x2];
        [FieldOffset(0x16)] public fixed byte nVertexCount[0x2];
        [FieldOffset(0x18)] public fixed byte nMapOffset[0x4];
        [FieldOffset(0x1C)] public fixed byte nNodeListOffset[0x4];
        [FieldOffset(0x20)] public fixed byte vCenterOfMass[0xC];
        [FieldOffset(0x2C)] public fixed byte flVolumetricSolveStrength[0x4];
        [FieldOffset(0x30)] public fixed byte nScaleSourceNode[0x2];
        [FieldOffset(0x32)] public fixed byte nNodeListCount[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct FeTaperedCapsuleRigid_t {
        [FieldOffset(0x0)] public fixed byte vSphere[0x20];
        [FieldOffset(0x20)] public fixed byte nNode[0x2];
        [FieldOffset(0x22)] public fixed byte nCollisionMask[0x2];
        [FieldOffset(0x24)] public fixed byte nVertexMapIndex[0x2];
        [FieldOffset(0x26)] public fixed byte nFlags[0xA];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct FeAnimStrayRadius_t {
        [FieldOffset(0x0)] public fixed byte nNode[0x4];
        [FieldOffset(0x4)] public fixed byte flMaxDist[0x4];
        [FieldOffset(0x8)] public fixed byte flRelaxationFactor[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct IPhysicsJoint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct FeEdgeDesc_t {
        [FieldOffset(0x0)] public fixed byte nEdge[0x4];
        [FieldOffset(0x4)] public fixed byte nSide[0x8];
        [FieldOffset(0xC)] public fixed byte nVirtElem[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct FeNodeStrayBox_t {
        [FieldOffset(0x0)] public fixed byte vMin[0xC];
        [FieldOffset(0xC)] public fixed byte nFlags[0x4];
        [FieldOffset(0x10)] public fixed byte vMax[0xC];
        [FieldOffset(0x1C)] public fixed byte nNode[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct FeNodeReverseOffset_t {
        [FieldOffset(0x0)] public fixed byte vOffset[0xC];
        [FieldOffset(0xC)] public fixed byte nBoneCtrl[0x2];
        [FieldOffset(0xE)] public fixed byte nTargetNode[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct RnPlane_t {
        [FieldOffset(0x0)] public fixed byte m_vNormal[0xC];
        [FieldOffset(0xC)] public fixed byte m_flOffset[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct FeSDFRigid_t {
        [FieldOffset(0x0)] public fixed byte vLocalMin[0xC];
        [FieldOffset(0xC)] public fixed byte vLocalMax[0xC];
        [FieldOffset(0x18)] public fixed byte flBounciness[0x4];
        [FieldOffset(0x1C)] public fixed byte nNode[0x2];
        [FieldOffset(0x1E)] public fixed byte nCollisionMask[0x2];
        [FieldOffset(0x20)] public fixed byte nVertexMapIndex[0x2];
        [FieldOffset(0x22)] public fixed byte nFlags[0x6];
        [FieldOffset(0x28)] public fixed byte m_Distances[0x18];
        [FieldOffset(0x40)] public fixed byte m_nWidth[0x4];
        [FieldOffset(0x44)] public fixed byte m_nHeight[0x4];
        [FieldOffset(0x48)] public fixed byte m_nDepth[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9C)]
    public unsafe struct CFeJiggleBone {
        [FieldOffset(0x0)] public fixed byte m_nFlags[0x4];
        [FieldOffset(0x4)] public fixed byte m_flLength[0x4];
        [FieldOffset(0x8)] public fixed byte m_flTipMass[0x4];
        [FieldOffset(0xC)] public fixed byte m_flYawStiffness[0x4];
        [FieldOffset(0x10)] public fixed byte m_flYawDamping[0x4];
        [FieldOffset(0x14)] public fixed byte m_flPitchStiffness[0x4];
        [FieldOffset(0x18)] public fixed byte m_flPitchDamping[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flAlongStiffness[0x4];
        [FieldOffset(0x20)] public fixed byte m_flAlongDamping[0x4];
        [FieldOffset(0x24)] public fixed byte m_flAngleLimit[0x4];
        [FieldOffset(0x28)] public fixed byte m_flMinYaw[0x4];
        [FieldOffset(0x2C)] public fixed byte m_flMaxYaw[0x4];
        [FieldOffset(0x30)] public fixed byte m_flYawFriction[0x4];
        [FieldOffset(0x34)] public fixed byte m_flYawBounce[0x4];
        [FieldOffset(0x38)] public fixed byte m_flMinPitch[0x4];
        [FieldOffset(0x3C)] public fixed byte m_flMaxPitch[0x4];
        [FieldOffset(0x40)] public fixed byte m_flPitchFriction[0x4];
        [FieldOffset(0x44)] public fixed byte m_flPitchBounce[0x4];
        [FieldOffset(0x48)] public fixed byte m_flBaseMass[0x4];
        [FieldOffset(0x4C)] public fixed byte m_flBaseStiffness[0x4];
        [FieldOffset(0x50)] public fixed byte m_flBaseDamping[0x4];
        [FieldOffset(0x54)] public fixed byte m_flBaseMinLeft[0x4];
        [FieldOffset(0x58)] public fixed byte m_flBaseMaxLeft[0x4];
        [FieldOffset(0x5C)] public fixed byte m_flBaseLeftFriction[0x4];
        [FieldOffset(0x60)] public fixed byte m_flBaseMinUp[0x4];
        [FieldOffset(0x64)] public fixed byte m_flBaseMaxUp[0x4];
        [FieldOffset(0x68)] public fixed byte m_flBaseUpFriction[0x4];
        [FieldOffset(0x6C)] public fixed byte m_flBaseMinForward[0x4];
        [FieldOffset(0x70)] public fixed byte m_flBaseMaxForward[0x4];
        [FieldOffset(0x74)] public fixed byte m_flBaseForwardFriction[0x4];
        [FieldOffset(0x78)] public fixed byte m_flRadius0[0x4];
        [FieldOffset(0x7C)] public fixed byte m_flRadius1[0x4];
        [FieldOffset(0x80)] public fixed byte m_vPoint0[0xC];
        [FieldOffset(0x8C)] public fixed byte m_vPoint1[0xC];
        [FieldOffset(0x98)] public fixed byte m_nCollisionMask[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CRegionSVM {
        [FieldOffset(0x0)] public fixed byte m_Planes[0x18];
        [FieldOffset(0x18)] public fixed byte m_Nodes[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct FeWorldCollisionParams_t {
        [FieldOffset(0x0)] public fixed byte flWorldFriction[0x4];
        [FieldOffset(0x4)] public fixed byte flGroundFriction[0x4];
        [FieldOffset(0x8)] public fixed byte nListBegin[0x2];
        [FieldOffset(0xA)] public fixed byte nListEnd[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x98)]
    public unsafe struct CGenericShapeProxy {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_verts[0x68];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct RnNode_t {
        [FieldOffset(0x0)] public fixed byte m_vMin[0xC];
        [FieldOffset(0xC)] public fixed byte m_nChildren[0x4];
        [FieldOffset(0x10)] public fixed byte m_vMax[0xC];
        [FieldOffset(0x1C)] public fixed byte m_nTriangleOffset[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct FeFitMatrix_t {
        [FieldOffset(0x0)] public fixed byte bone[0x20];
        [FieldOffset(0x20)] public fixed byte vCenter[0xC];
        [FieldOffset(0x2C)] public fixed byte nEnd[0x2];
        [FieldOffset(0x2E)] public fixed byte nNode[0x2];
        [FieldOffset(0x30)] public fixed byte nBeginDynamic[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x130)]
    public unsafe struct FeSimdQuad_t {
        [FieldOffset(0x0)] public fixed byte nNode[0x20];
        [FieldOffset(0x20)] public fixed byte f4Slack[0x10];
        [FieldOffset(0x30)] public fixed byte vShape[0xC0];
        [FieldOffset(0xF0)] public fixed byte f4Weights[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct FeSimdSpringIntegrator_t {
        [FieldOffset(0x0)] public fixed byte nNode[0x10];
        [FieldOffset(0x10)] public fixed byte flSpringRestLength[0x10];
        [FieldOffset(0x20)] public fixed byte flSpringConstant[0x10];
        [FieldOffset(0x30)] public fixed byte flSpringDamping[0x10];
        [FieldOffset(0x40)] public fixed byte flNodeWeight0[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct FeSimdNodeBase_t {
        [FieldOffset(0x0)] public fixed byte nNode[0x8];
        [FieldOffset(0x8)] public fixed byte nNodeX0[0x8];
        [FieldOffset(0x10)] public fixed byte nNodeX1[0x8];
        [FieldOffset(0x18)] public fixed byte nNodeY0[0x8];
        [FieldOffset(0x20)] public fixed byte nNodeY1[0x8];
        [FieldOffset(0x28)] public fixed byte nDummy[0x8];
        [FieldOffset(0x30)] public fixed byte qAdjust[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4C)]
    public unsafe struct FeQuad_t {
        [FieldOffset(0x0)] public fixed byte nNode[0x8];
        [FieldOffset(0x8)] public fixed byte flSlack[0x4];
        [FieldOffset(0xC)] public fixed byte vShape[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct FeHingeLimit_t {
        [FieldOffset(0x0)] public fixed byte nNode[0xC];
        [FieldOffset(0xC)] public fixed byte nFlags[0x4];
        [FieldOffset(0x10)] public fixed byte flWeight4[0x4];
        [FieldOffset(0x14)] public fixed byte flWeight5[0x4];
        [FieldOffset(0x18)] public fixed byte flAngleCenter[0x4];
        [FieldOffset(0x1C)] public fixed byte flAngleExtents[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct RnWing_t {
        [FieldOffset(0x0)] public fixed byte m_nIndex[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct FeWeightedNode_t {
        [FieldOffset(0x0)] public fixed byte nNode[0x2];
        [FieldOffset(0x2)] public fixed byte nWeight[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CollisionDetailLayerInfo_t {
        [FieldOffset(0x0)] public fixed byte m_sDescription[0x8];
        [FieldOffset(0x8)] public fixed byte m_sFriendlyName[0x8];
        [FieldOffset(0x10)] public fixed byte m_bIsQueryOnly[0x8];
        [FieldOffset(0x18)] public fixed byte m_sParentDetailLayer[0x8];
        [FieldOffset(0x20)] public fixed byte m_vecSubtreeDetailLayers[0x18];
        [FieldOffset(0x38)] public fixed byte m_bNotPickable[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct FeEffectDesc_t {
        [FieldOffset(0x0)] public fixed byte sName[0x8];
        [FieldOffset(0x8)] public fixed byte nNameHash[0x4];
        [FieldOffset(0xC)] public fixed byte nType[0x4];
        [FieldOffset(0x10)] public fixed byte m_Params[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct FeSpringIntegrator_t {
        [FieldOffset(0x0)] public fixed byte nNode[0x4];
        [FieldOffset(0x4)] public fixed byte flSpringRestLength[0x4];
        [FieldOffset(0x8)] public fixed byte flSpringConstant[0x4];
        [FieldOffset(0xC)] public fixed byte flSpringDamping[0x4];
        [FieldOffset(0x10)] public fixed byte flNodeWeight0[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct FourVectors2D {
        [FieldOffset(0x0)] public fixed byte x[0x10];
        [FieldOffset(0x10)] public fixed byte y[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct FeKelagerBend2_t {
        [FieldOffset(0x0)] public fixed byte flWeight[0xC];
        [FieldOffset(0xC)] public fixed byte flHeight0[0x4];
        [FieldOffset(0x10)] public fixed byte nNode[0x6];
        [FieldOffset(0x16)] public fixed byte nReserved[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct vphysics_save_ragdoll_control_t {
        [FieldOffset(0x0)] public fixed byte m_flMinSpringFrequency[0x4];
        [FieldOffset(0x4)] public fixed byte m_flMaxSpringFrequency[0x4];
        [FieldOffset(0x8)] public fixed byte m_flMaxStretch[0x4];
        [FieldOffset(0xC)] public fixed byte m_bSolidCollisionAtZeroWeight[0x1];
        [FieldOffset(0xD)] public fixed byte m_bRequiresDynamicBodies[0x1];
        [FieldOffset(0xE)] public fixed byte m_bIgnoreTeleport[0x2];
        [FieldOffset(0x10)] public fixed byte m_vLinearVelocityAccumulator[0xC];
        [FieldOffset(0x1C)] public fixed byte m_vAngularVelocityAccumulator[0xC];
        [FieldOffset(0x28)] public fixed byte m_vForceAccumulator[0xC];
        [FieldOffset(0x34)] public fixed byte m_nBodyCount[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA)]
    public unsafe struct FeRigidColliderIndices_t {
        [FieldOffset(0x0)] public fixed byte m_nTaperedCapsuleRigidIndex[0x2];
        [FieldOffset(0x2)] public fixed byte m_nSphereRigidIndex[0x2];
        [FieldOffset(0x4)] public fixed byte m_nBoxRigidIndex[0x2];
        [FieldOffset(0x6)] public fixed byte m_nSDFRigidIndex[0x2];
        [FieldOffset(0x8)] public fixed byte m_nCollisionPlaneIndex[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct FeCollisionPlane_t {
        [FieldOffset(0x0)] public fixed byte nCtrlParent[0x2];
        [FieldOffset(0x2)] public fixed byte nChildNode[0x2];
        [FieldOffset(0x4)] public fixed byte m_Plane[0x10];
        [FieldOffset(0x14)] public fixed byte flStrength[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1C)]
    public unsafe struct FeStiffHingeBuild_t {
        [FieldOffset(0x0)] public fixed byte flMaxAngle[0x4];
        [FieldOffset(0x4)] public fixed byte flStrength[0x4];
        [FieldOffset(0x8)] public fixed byte flMotionBias[0xC];
        [FieldOffset(0x14)] public fixed byte nNode[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct FeBoxRigid_t {
        [FieldOffset(0x0)] public fixed byte tmFrame2[0x20];
        [FieldOffset(0x20)] public fixed byte nNode[0x2];
        [FieldOffset(0x22)] public fixed byte nCollisionMask[0x2];
        [FieldOffset(0x24)] public fixed byte vSize[0xC];
        [FieldOffset(0x30)] public fixed byte nVertexMapIndex[0x2];
        [FieldOffset(0x32)] public fixed byte nFlags[0xE];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct FeMorphLayerDepr_t {
        [FieldOffset(0x0)] public fixed byte m_Name[0x8];
        [FieldOffset(0x8)] public fixed byte m_nNameHash[0x8];
        [FieldOffset(0x10)] public fixed byte m_Nodes[0x18];
        [FieldOffset(0x28)] public fixed byte m_InitPos[0x18];
        [FieldOffset(0x40)] public fixed byte m_Gravity[0x18];
        [FieldOffset(0x58)] public fixed byte m_GoalStrength[0x18];
        [FieldOffset(0x70)] public fixed byte m_GoalDamping[0x18];
        [FieldOffset(0x88)] public fixed byte m_nFlags[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct FeCtrlOffset_t {
        [FieldOffset(0x0)] public fixed byte vOffset[0xC];
        [FieldOffset(0xC)] public fixed byte nCtrlParent[0x2];
        [FieldOffset(0xE)] public fixed byte nCtrlChild[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct IPhysicsPlayerController {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct FeNodeBase_t {
        [FieldOffset(0x0)] public fixed byte nNode[0x2];
        [FieldOffset(0x2)] public fixed byte nDummy[0x6];
        [FieldOffset(0x8)] public fixed byte nNodeX0[0x2];
        [FieldOffset(0xA)] public fixed byte nNodeX1[0x2];
        [FieldOffset(0xC)] public fixed byte nNodeY0[0x2];
        [FieldOffset(0xE)] public fixed byte nNodeY1[0x2];
        [FieldOffset(0x10)] public fixed byte qAdjust[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct FeVertexMapBuild_t {
        [FieldOffset(0x0)] public fixed byte m_VertexMapName[0x8];
        [FieldOffset(0x8)] public fixed byte m_nNameHash[0x4];
        [FieldOffset(0xC)] public fixed byte m_Color[0x4];
        [FieldOffset(0x10)] public fixed byte m_flVolumetricSolveStrength[0x4];
        [FieldOffset(0x14)] public fixed byte m_nScaleSourceNode[0x4];
        [FieldOffset(0x18)] public fixed byte m_Weights[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CFeVertexMapBuildArray {
        [FieldOffset(0x0)] public fixed byte m_Array[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1C)]
    public unsafe struct FeTri_t {
        [FieldOffset(0x0)] public fixed byte nNode[0x8];
        [FieldOffset(0x8)] public fixed byte w1[0x4];
        [FieldOffset(0xC)] public fixed byte w2[0x4];
        [FieldOffset(0x10)] public fixed byte v1x[0x4];
        [FieldOffset(0x14)] public fixed byte v2[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xF8)]
    public unsafe struct RnHull_t {
        [FieldOffset(0x0)] public fixed byte m_vCentroid[0xC];
        [FieldOffset(0xC)] public fixed byte m_flMaxAngularRadius[0x4];
        [FieldOffset(0x10)] public fixed byte m_flMinCentroidRadius[0x4];
        [FieldOffset(0x14)] public fixed byte m_Bounds[0x18];
        [FieldOffset(0x2C)] public fixed byte m_vOrthographicAreas[0xC];
        [FieldOffset(0x38)] public fixed byte m_MassProperties[0x30];
        [FieldOffset(0x68)] public fixed byte m_flVolume[0x4];
        [FieldOffset(0x6C)] public fixed byte m_flSurfaceArea[0x4];
        [FieldOffset(0x70)] public fixed byte m_VertexPositions[0x18];
        [FieldOffset(0x88)] public fixed byte m_FacePlanes[0x18];
        [FieldOffset(0xA0)] public fixed byte m_nFlags[0x8];
        [FieldOffset(0xA8)] public fixed byte m_pRegionSVM[0x8];
        [FieldOffset(0xB0)] public fixed byte m_Vertices[0x18];
        [FieldOffset(0xC8)] public fixed byte m_Edges[0x18];
        [FieldOffset(0xE0)] public fixed byte m_Faces[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct FeModelSelfCollisionLayer_t {
        [FieldOffset(0x0)] public fixed byte m_Name[0x8];
        [FieldOffset(0x8)] public fixed byte m_Nodes[0x18];
        [FieldOffset(0x20)] public fixed byte m_flParentReaction[0x4];
        [FieldOffset(0x24)] public fixed byte m_nFlags[0x4];
        [FieldOffset(0x28)] public fixed byte m_nEndIdx[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct FeAntiTunnelGroupBuild_t {
        [FieldOffset(0x0)] public fixed byte m_nVertexMapHash[0x4];
        [FieldOffset(0x4)] public fixed byte m_nCollisionMask[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CovMatrix3 {
        [FieldOffset(0x0)] public fixed byte m_vDiag[0xC];
        [FieldOffset(0xC)] public fixed byte m_flXY[0x4];
        [FieldOffset(0x10)] public fixed byte m_flXZ[0x4];
        [FieldOffset(0x14)] public fixed byte m_flYZ[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct PhysicsParticleId_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct RnVertex_t {
        [FieldOffset(0x0)] public fixed byte m_nEdge[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct IPhysicsMotionController {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct Dop26_t {
        [FieldOffset(0x0)] public fixed byte m_flSupport[0x68];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct FeDynKinLink_t {
        [FieldOffset(0x0)] public fixed byte m_nParent[0x2];
        [FieldOffset(0x2)] public fixed byte m_nChild[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct RnFace_t {
        [FieldOffset(0x0)] public fixed byte m_nEdge[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct FeSimdPrism_t {
        [FieldOffset(0x0)] public fixed byte nNode[0x30];
        [FieldOffset(0x30)] public fixed byte flVolume[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct FeCtrlOsOffset_t {
        [FieldOffset(0x0)] public fixed byte nCtrlParent[0x2];
        [FieldOffset(0x2)] public fixed byte nCtrlChild[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1C)]
    public unsafe struct FeAntiTunnelProbe_t {
        [FieldOffset(0x0)] public fixed byte flWeight[0x4];
        [FieldOffset(0x4)] public fixed byte nFlags[0x4];
        [FieldOffset(0x8)] public fixed byte nProbeNode[0x2];
        [FieldOffset(0xA)] public fixed byte nCount[0x2];
        [FieldOffset(0xC)] public fixed byte nBegin[0x4];
        [FieldOffset(0x10)] public fixed byte flActivationDistance[0x4];
        [FieldOffset(0x14)] public fixed byte flCurvatureRadius[0x4];
        [FieldOffset(0x18)] public fixed byte flBias[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct FeSourceEdge_t {
        [FieldOffset(0x0)] public fixed byte nNode[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct FeTwistConstraint_t {
        [FieldOffset(0x0)] public fixed byte nNodeOrient[0x2];
        [FieldOffset(0x2)] public fixed byte nNodeEnd[0x2];
        [FieldOffset(0x4)] public fixed byte flTwistRelax[0x4];
        [FieldOffset(0x8)] public fixed byte flSwingRelax[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct FeNodeWindBase_t {
        [FieldOffset(0x0)] public fixed byte nNodeX0[0x2];
        [FieldOffset(0x2)] public fixed byte nNodeX1[0x2];
        [FieldOffset(0x4)] public fixed byte nNodeY0[0x2];
        [FieldOffset(0x6)] public fixed byte nNodeY1[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct FeAxialEdgeBend_t {
        [FieldOffset(0x0)] public fixed byte te[0x4];
        [FieldOffset(0x4)] public fixed byte tv[0x4];
        [FieldOffset(0x8)] public fixed byte flDist[0x4];
        [FieldOffset(0xC)] public fixed byte flWeight[0x10];
        [FieldOffset(0x1C)] public fixed byte nNode[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct FourCovMatrices3 {
        [FieldOffset(0x0)] public fixed byte m_vDiag[0x30];
        [FieldOffset(0x30)] public fixed byte m_flXY[0x10];
        [FieldOffset(0x40)] public fixed byte m_flXZ[0x10];
        [FieldOffset(0x50)] public fixed byte m_flYZ[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct constraint_breakableparams_t {
        [FieldOffset(0x0)] public fixed byte strength[0x4];
        [FieldOffset(0x4)] public fixed byte forceLimit[0x4];
        [FieldOffset(0x8)] public fixed byte torqueLimit[0x4];
        [FieldOffset(0xC)] public fixed byte bodyMassScale[0x8];
        [FieldOffset(0x14)] public fixed byte isActive[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct FeSphereRigid_t {
        [FieldOffset(0x0)] public fixed byte vSphere[0x10];
        [FieldOffset(0x10)] public fixed byte nNode[0x2];
        [FieldOffset(0x12)] public fixed byte nCollisionMask[0x2];
        [FieldOffset(0x14)] public fixed byte nVertexMapIndex[0x2];
        [FieldOffset(0x16)] public fixed byte nFlags[0xA];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CollisionDetailLayerInfo_t__Name_t {
        [FieldOffset(0x0)] public fixed byte m_nNameToken[0x8];
        [FieldOffset(0x8)] public fixed byte m_sNameString[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct FeBuildTaperedCapsuleRigid_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_nPriority[0x4];
        [FieldOffset(0x34)] public fixed byte m_nVertexMapHash[0x4];
        [FieldOffset(0x38)] public fixed byte m_nAntitunnelGroupBits[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct IPhysicsBody {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct FeSoftParent_t {
        [FieldOffset(0x0)] public fixed byte nParent[0x4];
        [FieldOffset(0x4)] public fixed byte flAlpha[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct RnShapeDesc_t {
        [FieldOffset(0x0)] public fixed byte m_nCollisionAttributeIndex[0x4];
        [FieldOffset(0x4)] public fixed byte m_nSurfacePropertyIndex[0x4];
        [FieldOffset(0x8)] public fixed byte m_UserFriendlyName[0x8];
        [FieldOffset(0x10)] public fixed byte m_bUserFriendlyNameSealed[0x1];
        [FieldOffset(0x11)] public fixed byte m_bUserFriendlyNameLong[0x3];
        [FieldOffset(0x14)] public fixed byte m_nToolMaterialHash[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct FeTreeChildren_t {
        [FieldOffset(0x0)] public fixed byte nChild[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct FeRodConstraint_t {
        [FieldOffset(0x0)] public fixed byte nNode[0x4];
        [FieldOffset(0x4)] public fixed byte flMaxDist[0x4];
        [FieldOffset(0x8)] public fixed byte flMinDist[0x4];
        [FieldOffset(0xC)] public fixed byte flWeight0[0x4];
        [FieldOffset(0x10)] public fixed byte flRelaxationFactor[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct FeFitWeight_t {
        [FieldOffset(0x0)] public fixed byte flWeight[0x4];
        [FieldOffset(0x4)] public fixed byte nNode[0x2];
        [FieldOffset(0x6)] public fixed byte nDummy[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct RnHalfEdge_t {
        [FieldOffset(0x0)] public fixed byte m_nNext[0x1];
        [FieldOffset(0x1)] public fixed byte m_nTwin[0x1];
        [FieldOffset(0x2)] public fixed byte m_nOrigin[0x1];
        [FieldOffset(0x3)] public fixed byte m_nFace[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct FeSimdTri_t {
        [FieldOffset(0x0)] public fixed byte nNode[0x30];
        [FieldOffset(0x30)] public fixed byte w1[0x10];
        [FieldOffset(0x40)] public fixed byte w2[0x10];
        [FieldOffset(0x50)] public fixed byte v1x[0x10];
        [FieldOffset(0x60)] public fixed byte v2[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct VertexPositionColor_t {
        [FieldOffset(0x0)] public fixed byte m_vPosition[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct FeFitInfluence_t {
        [FieldOffset(0x0)] public fixed byte nVertexNode[0x4];
        [FieldOffset(0x4)] public fixed byte flWeight[0x4];
        [FieldOffset(0x8)] public fixed byte nMatrixNode[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct FeHingeLimitBuild_t {
        [FieldOffset(0x0)] public fixed byte nNode[0xC];
        [FieldOffset(0xC)] public fixed byte nFlags[0x4];
        [FieldOffset(0x10)] public fixed byte flLimitCW[0x4];
        [FieldOffset(0x14)] public fixed byte flLimitCCW[0x4];
    }
}