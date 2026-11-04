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

namespace cs2::vphysics2 {

enum class JointMotion_t : std::int32_t {
    JOINT_MOTION_FREE = 0,
    JOINT_MOTION_LOCKED = 1,
    JOINT_MOTION_COUNT = 2,
};

enum class JointAxis_t : std::int32_t {
    JOINT_AXIS_X = 0,
    JOINT_AXIS_Y = 1,
    JOINT_AXIS_Z = 2,
    JOINT_AXIS_COUNT = 3,
};

enum class DynamicContinuousContactBehavior_t : std::int32_t {
    DYNAMIC_CONTINUOUS_ALLOW_IF_REQUESTED_BY_OTHER_BODY = 0,
    DYNAMIC_CONTINUOUS_ALWAYS = 1,
    DYNAMIC_CONTINUOUS_NEVER = 2,
};

enum class PhysInterfaceId_t : std::int32_t {
    PIID_UNKNOWN = 0,
    PIID_IPHYSICSBODY = 1,
    PIID_IPHYSAGGREGATE = 2,
    PIID_IPHYSICSJOINT = 3,
    PIID_IPHYSICSMOTIONCONTROLLER = 4,
    PIID_IPHYSICSPARTICLEROPE = 5,
    PIID_IPHYSICSRAGDOLLCONTROL = 6,
    PIID_NUM_TYPES = 7,
};

enum class PhysGenericShapeType_t : std::int32_t {
    GENERIC_SHAPE_POINT = 0,
    GENERIC_SHAPE_SPHERE = 1,
    GENERIC_SHAPE_AABB = 2,
    GENERIC_SHAPE_CAPSULE = 3,
    GENERIC_SHAPE_HULL = 4,
};

struct RnSphereDesc_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_Sphere[0x10]; // 0x18 RnSphere_t
};

struct RnCompoundDesc_t {
    static constexpr std::size_t size = 0x178;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_Compound[0x160]; // 0x18 RnCompound_t
};

struct RnSoftbodyParticle_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_flMassInv[0x4]; // 0x0 float32
};

struct RnHullDesc_t {
    static constexpr std::size_t size = 0x110;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_Hull[0xF8]; // 0x18 RnHull_t
};

struct RnCapsuleDesc_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_Capsule[0x20]; // 0x18 RnCapsule_t
};

struct PhysFeModelDesc_t {
    static constexpr std::size_t size = 0x728;
    std::uint8_t m_CtrlHash[0x18]; // 0x0 CUtlVector<uint32>
    std::uint8_t m_CtrlName[0x18]; // 0x18 CUtlVector<CUtlString>
    std::uint8_t m_nStaticNodeFlags[0x4]; // 0x30 uint32
    std::uint8_t m_nDynamicNodeFlags[0x4]; // 0x34 uint32
    std::uint8_t m_flLocalForce[0x4]; // 0x38 float32
    std::uint8_t m_flLocalRotation[0x4]; // 0x3C float32
    std::uint8_t m_nNodeCount[0x2]; // 0x40 uint16
    std::uint8_t m_nStaticNodes[0x2]; // 0x42 uint16
    std::uint8_t m_nRotLockStaticNodes[0x2]; // 0x44 uint16
    std::uint8_t m_nFirstPositionDrivenNode[0x2]; // 0x46 uint16
    std::uint8_t m_nSimdTriCount1[0x2]; // 0x48 uint16
    std::uint8_t m_nSimdTriCount2[0x2]; // 0x4A uint16
    std::uint8_t m_nSimdQuadCount1[0x2]; // 0x4C uint16
    std::uint8_t m_nSimdQuadCount2[0x2]; // 0x4E uint16
    std::uint8_t m_nQuadCount1[0x2]; // 0x50 uint16
    std::uint8_t m_nQuadCount2[0x2]; // 0x52 uint16
    std::uint8_t m_nTreeDepth[0x2]; // 0x54 uint16
    std::uint8_t m_nNodeBaseJiggleboneDependsCount[0x2]; // 0x56 uint16
    std::uint8_t m_nRopeCount[0x8]; // 0x58 uint16
    std::uint8_t m_Ropes[0x18]; // 0x60 CUtlVector<uint16>
    std::uint8_t m_NodeBases[0x18]; // 0x78 CUtlVector<FeNodeBase_t>
    std::uint8_t m_SimdNodeBases[0x18]; // 0x90 CUtlVector<FeSimdNodeBase_t>
    std::uint8_t m_Quads[0x18]; // 0xA8 CUtlVector<FeQuad_t>
    std::uint8_t m_SimdQuads[0x18]; // 0xC0 CUtlVector<FeSimdQuad_t>
    std::uint8_t m_SimdTris[0x18]; // 0xD8 CUtlVector<FeSimdTri_t>
    std::uint8_t m_Prisms[0x18]; // 0xF0 CUtlVector<FePrism_t>
    std::uint8_t m_SimdPrisms[0x18]; // 0x108 CUtlVector<FeSimdPrism_t>
    std::uint8_t m_SimdRods[0x18]; // 0x120 CUtlVector<FeSimdRodConstraint_t>
    std::uint8_t m_SimdRodsAnim[0x18]; // 0x138 CUtlVector<FeSimdRodConstraintAnim_t>
    std::uint8_t m_InitPose[0x18]; // 0x150 CUtlVector<CTransform>
    std::uint8_t m_Rods[0x18]; // 0x168 CUtlVector<FeRodConstraint_t>
    std::uint8_t m_Twists[0x18]; // 0x180 CUtlVector<FeTwistConstraint_t>
    std::uint8_t m_HingeLimits[0x18]; // 0x198 CUtlVector<FeHingeLimit_t>
    std::uint8_t m_AntiTunnelBytecode[0x18]; // 0x1B0 CUtlVector<uint32>
    std::uint8_t m_DynKinLinks[0x18]; // 0x1C8 CUtlVector<FeDynKinLink_t>
    std::uint8_t m_BoneMergeLinks[0x18]; // 0x1E0 CUtlVector<FeBoneMergeLink_t>
    std::uint8_t m_AntiTunnelProbes[0x18]; // 0x1F8 CUtlVector<FeAntiTunnelProbe_t>
    std::uint8_t m_AntiTunnelTargetNodes[0x18]; // 0x210 CUtlVector<uint16>
    std::uint8_t m_NodeStrayBoxes[0x18]; // 0x228 CUtlVector<FeNodeStrayBox_t>
    std::uint8_t m_AxialEdges[0x18]; // 0x240 CUtlVector<FeAxialEdgeBend_t>
    std::uint8_t m_NodeInvMasses[0x18]; // 0x258 CUtlVector<float32>
    std::uint8_t m_CtrlOffsets[0x18]; // 0x270 CUtlVector<FeCtrlOffset_t>
    std::uint8_t m_CtrlOsOffsets[0x18]; // 0x288 CUtlVector<FeCtrlOsOffset_t>
    std::uint8_t m_FollowNodes[0x18]; // 0x2A0 CUtlVector<FeFollowNode_t>
    std::uint8_t m_CollisionPlanes[0x18]; // 0x2B8 CUtlVector<FeCollisionPlane_t>
    std::uint8_t m_NodeIntegrator[0x18]; // 0x2D0 CUtlVector<FeNodeIntegrator_t>
    std::uint8_t m_SpringIntegrator[0x18]; // 0x2E8 CUtlVector<FeSpringIntegrator_t>
    std::uint8_t m_SimdSpringIntegrator[0x18]; // 0x300 CUtlVector<FeSimdSpringIntegrator_t>
    std::uint8_t m_WorldCollisionParams[0x18]; // 0x318 CUtlVector<FeWorldCollisionParams_t>
    std::uint8_t m_LegacyStretchForce[0x18]; // 0x330 CUtlVector<float32>
    std::uint8_t m_NodeCollisionRadii[0x18]; // 0x348 CUtlVector<float32>
    std::uint8_t m_DynNodeFriction[0x18]; // 0x360 CUtlVector<float32>
    std::uint8_t m_LocalRotation[0x18]; // 0x378 CUtlVector<float32>
    std::uint8_t m_LocalForce[0x18]; // 0x390 CUtlVector<float32>
    std::uint8_t m_TaperedCapsuleStretches[0x18]; // 0x3A8 CUtlVector<FeTaperedCapsuleStretch_t>
    std::uint8_t m_TaperedCapsuleRigids[0x18]; // 0x3C0 CUtlVector<FeTaperedCapsuleRigid_t>
    std::uint8_t m_SphereRigids[0x18]; // 0x3D8 CUtlVector<FeSphereRigid_t>
    std::uint8_t m_WorldCollisionNodes[0x18]; // 0x3F0 CUtlVector<uint16>
    std::uint8_t m_TreeParents[0x18]; // 0x408 CUtlVector<uint16>
    std::uint8_t m_TreeCollisionMasks[0x18]; // 0x420 CUtlVector<uint16>
    std::uint8_t m_TreeChildren[0x18]; // 0x438 CUtlVector<FeTreeChildren_t>
    std::uint8_t m_FreeNodes[0x18]; // 0x450 CUtlVector<uint16>
    std::uint8_t m_FitMatrices[0x18]; // 0x468 CUtlVector<FeFitMatrix_t>
    std::uint8_t m_FitWeights[0x18]; // 0x480 CUtlVector<FeFitWeight_t>
    std::uint8_t m_ReverseOffsets[0x18]; // 0x498 CUtlVector<FeNodeReverseOffset_t>
    std::uint8_t m_AnimStrayRadii[0x18]; // 0x4B0 CUtlVector<FeAnimStrayRadius_t>
    std::uint8_t m_SimdAnimStrayRadii[0x18]; // 0x4C8 CUtlVector<FeSimdAnimStrayRadius_t>
    std::uint8_t m_KelagerBends[0x18]; // 0x4E0 CUtlVector<FeKelagerBend2_t>
    std::uint8_t m_CtrlSoftOffsets[0x18]; // 0x4F8 CUtlVector<FeCtrlSoftOffset_t>
    std::uint8_t m_JiggleBones[0x18]; // 0x510 CUtlVector<CFeIndexedJiggleBone>
    std::uint8_t m_SourceElems[0x18]; // 0x528 CUtlVector<uint16>
    std::uint8_t m_GoalDampedSpringIntegrators[0x18]; // 0x540 CUtlVector<uint32>
    std::uint8_t m_Tris[0x18]; // 0x558 CUtlVector<FeTri_t>
    std::uint8_t m_nTriCount1[0x2]; // 0x570 uint16
    std::uint8_t m_nTriCount2[0x2]; // 0x572 uint16
    std::uint8_t m_nReservedUint8[0x1]; // 0x574 uint8
    std::uint8_t m_nExtraPressureIterations[0x1]; // 0x575 uint8
    std::uint8_t m_nExtraGoalIterations[0x1]; // 0x576 uint8
    std::uint8_t m_nExtraIterations[0x1]; // 0x577 uint8
    std::uint8_t m_SDFRigids[0x18]; // 0x578 CUtlVector<FeSDFRigid_t>
    std::uint8_t m_BoxRigids[0x18]; // 0x590 CUtlVector<FeBoxRigid_t>
    std::uint8_t m_DynNodeVertexSet[0x18]; // 0x5A8 CUtlVector<uint8>
    std::uint8_t m_VertexSetNames[0x18]; // 0x5C0 CUtlVector<uint32>
    std::uint8_t m_RigidColliderPriorities[0x18]; // 0x5D8 CUtlVector<FeRigidColliderIndices_t>
    std::uint8_t m_MorphLayers[0x18]; // 0x5F0 CUtlVector<FeMorphLayerDepr_t>
    std::uint8_t m_MorphSetData[0x18]; // 0x608 CUtlVector<uint8>
    std::uint8_t m_VertexMaps[0x18]; // 0x620 CUtlVector<FeVertexMapDesc_t>
    std::uint8_t m_VertexMapValues[0x18]; // 0x638 CUtlVector<uint8>
    std::uint8_t m_Effects[0x18]; // 0x650 CUtlVector<FeEffectDesc_t>
    std::uint8_t m_LockToParent[0x18]; // 0x668 CUtlVector<FeCtrlOffset_t>
    std::uint8_t m_LockToGoal[0x18]; // 0x680 CUtlVector<uint16>
    std::uint8_t m_SkelParents[0x18]; // 0x698 CUtlVector<int16>
    std::uint8_t m_DynNodeWindBases[0x18]; // 0x6B0 CUtlVector<FeNodeWindBase_t>
    std::uint8_t m_SelfCollisionLayers[0x18]; // 0x6C8 CUtlVector<FeModelSelfCollisionLayer_t>
    std::uint8_t m_flInternalPressure[0x4]; // 0x6E0 float32
    std::uint8_t m_flDefaultTimeDilation[0x4]; // 0x6E4 float32
    std::uint8_t m_flWindage[0x4]; // 0x6E8 float32
    std::uint8_t m_flWindDrag[0x4]; // 0x6EC float32
    std::uint8_t m_flDefaultSurfaceStretch[0x4]; // 0x6F0 float32
    std::uint8_t m_flDefaultThreadStretch[0x4]; // 0x6F4 float32
    std::uint8_t m_flDefaultGravityScale[0x4]; // 0x6F8 float32
    std::uint8_t m_flDefaultVelAirDrag[0x4]; // 0x6FC float32
    std::uint8_t m_flDefaultExpAirDrag[0x4]; // 0x700 float32
    std::uint8_t m_flDefaultVelQuadAirDrag[0x4]; // 0x704 float32
    std::uint8_t m_flDefaultExpQuadAirDrag[0x4]; // 0x708 float32
    std::uint8_t m_flRodVelocitySmoothRate[0x4]; // 0x70C float32
    std::uint8_t m_flQuadVelocitySmoothRate[0x4]; // 0x710 float32
    std::uint8_t m_flAddWorldCollisionRadius[0x4]; // 0x714 float32
    std::uint8_t m_flDefaultVolumetricSolveAmount[0x4]; // 0x718 float32
    std::uint8_t m_flMotionSmoothCDT[0x4]; // 0x71C float32
    std::uint8_t m_flLocalDrag1[0x4]; // 0x720 float32
    std::uint8_t m_nRodVelocitySmoothIterations[0x2]; // 0x724 uint16
    std::uint8_t m_nQuadVelocitySmoothIterations[0x2]; // 0x726 uint16
};

struct RnMeshDesc_t {
    static constexpr std::size_t size = 0xD8;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_Mesh[0xC0]; // 0x18 RnMesh_t
};

struct RnSoftbodySpring_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_nParticle[0x4]; // 0x0 uint16[2]
    std::uint8_t m_flLength[0x4]; // 0x4 float32
};

struct RnSoftbodyCapsule_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_vCenter[0x18]; // 0x0 Vector[2]
    std::uint8_t m_flRadius[0x4]; // 0x18 float32
    std::uint8_t m_nParticle[0x4]; // 0x1C uint16[2]
};

struct vphysics_save_cphysicsbody_t {
    static constexpr std::size_t size = 0xE8;
    std::uint8_t pad_0[0xE0]; // 0x0
    std::uint8_t m_nOldPointer[0x8]; // 0xE0 uint64
};

struct FeBuildBoxRigid_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t m_nPriority[0x4]; // 0x40 int32
    std::uint8_t m_nVertexMapHash[0x4]; // 0x44 uint32
    std::uint8_t m_nAntitunnelGroupBits[0x8]; // 0x48 uint32
};

struct CFeIndexedJiggleBone {
    static constexpr std::size_t size = 0xA4;
    std::uint8_t m_nNode[0x4]; // 0x0 uint32
    std::uint8_t m_nJiggleParent[0x4]; // 0x4 uint32
    std::uint8_t m_jiggleBone[0x9C]; // 0x8 CFeJiggleBone
};

struct FeBoneMergeLink_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_nParentHash[0x4]; // 0x0 uint32
    std::uint8_t m_nChildNode[0x4]; // 0x4 uint16
};

struct IPhysAggregateInstance {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_pSkeleton[0x8]; // 0x8 void*
    std::uint8_t m_bIsAxisAligned[0x8]; // 0x10 bool
};

struct FeBandBendLimit_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t flDistMin[0x4]; // 0x0 float32
    std::uint8_t flDistMax[0x4]; // 0x4 float32
    std::uint8_t nNode[0xC]; // 0x8 uint16[6]
};

struct RnCompoundTree_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_Nodes[0x10]; // 0x0 CUtlLeanVector<RnCompoundTreeNode_t>
    std::uint8_t m_nStartIterationIndex[0x8]; // 0x10 uint32
};

struct FeTaperedCapsuleStretch_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t nNode[0x4]; // 0x0 uint16[2]
    std::uint8_t nCollisionMask[0x2]; // 0x4 uint16
    std::uint8_t nDummy[0x2]; // 0x6 uint16
    std::uint8_t flRadius[0x8]; // 0x8 float32[2]
};

struct constraint_axislimit_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t flMinRotation[0x4]; // 0x0 float32
    std::uint8_t flMaxRotation[0x4]; // 0x4 float32
    std::uint8_t flMotorTargetAngSpeed[0x4]; // 0x8 float32
    std::uint8_t flMotorMaxTorque[0x4]; // 0xC float32
};

struct FeSimdRodConstraintAnim_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t nNode[0x10]; // 0x0 uint16[4][2]
    std::uint8_t f4Weight0[0x10]; // 0x10 fltx4
    std::uint8_t f4RelaxationFactor[0x10]; // 0x20 fltx4
};

struct FeSimdRodConstraint_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t nNode[0x10]; // 0x0 uint16[4][2]
    std::uint8_t f4MaxDist[0x10]; // 0x10 fltx4
    std::uint8_t f4MinDist[0x10]; // 0x20 fltx4
    std::uint8_t f4Weight0[0x10]; // 0x30 fltx4
    std::uint8_t f4RelaxationFactor[0x10]; // 0x40 fltx4
};

struct IPhysicsParticleRope {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct constraint_hingeparams_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t worldPosition[0xC]; // 0x0 VectorWS
    std::uint8_t worldAxisDirection[0xC]; // 0xC Vector
    std::uint8_t hingeAxis[0x10]; // 0x18 constraint_axislimit_t
    std::uint8_t constraint[0x18]; // 0x28 constraint_breakableparams_t
};

struct IPhysicsBodyList {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct FeBuildSphereRigid_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x20]; // 0x0
    std::uint8_t m_nPriority[0x4]; // 0x20 int32
    std::uint8_t m_nVertexMapHash[0x4]; // 0x24 uint32
    std::uint8_t m_nAntitunnelGroupBits[0x8]; // 0x28 uint32
};

struct FeSimdAnimStrayRadius_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t nNode[0x10]; // 0x0 uint16[4][2]
    std::uint8_t flMaxDist[0x10]; // 0x10 fltx4
    std::uint8_t flRelaxationFactor[0x10]; // 0x20 fltx4
};

struct RnTriangle_t {
    static constexpr std::size_t size = 0xC;
    std::uint8_t m_nIndex[0xC]; // 0x0 int32[3]
};

struct FeProxyVertexMap_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_Name[0x8]; // 0x0 CUtlString
    std::uint8_t m_flWeight[0x8]; // 0x8 float32
};

struct FeNodeIntegrator_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t flPointDamping[0x4]; // 0x0 float32
    std::uint8_t flAnimationForceAttraction[0x4]; // 0x4 float32
    std::uint8_t flAnimationVertexAttraction[0x4]; // 0x8 float32
    std::uint8_t flGravity[0x4]; // 0xC float32
};

struct RnCapsule_t {
    static constexpr std::size_t size = 0x1C;
    std::uint8_t m_vCenter[0x18]; // 0x0 Vector[2]
    std::uint8_t m_flRadius[0x4]; // 0x18 float32
};

struct CFeNamedJiggleBone {
    static constexpr std::size_t size = 0xD0;
    std::uint8_t m_strParentBone[0x10]; // 0x0 CUtlString
    std::uint8_t m_transform[0x20]; // 0x10 CTransform
    std::uint8_t m_nJiggleParent[0x4]; // 0x30 uint32
    std::uint8_t m_jiggleBone[0x9C]; // 0x34 CFeJiggleBone
};

struct FePrism_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t nNode[0xC]; // 0x0 uint16[6]
    std::uint8_t flVolume[0x4]; // 0xC float32
};

struct FeAntiTunnelProbeBuild_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t flWeight[0x4]; // 0x0 float32
    std::uint8_t flActivationDistance[0x4]; // 0x4 float32
    std::uint8_t flBias[0x4]; // 0x8 float32
    std::uint8_t flCurvature[0x4]; // 0xC float32
    std::uint8_t nFlags[0x4]; // 0x10 uint32
    std::uint8_t nProbeNode[0x4]; // 0x14 uint16
    std::uint8_t targetNodes[0x18]; // 0x18 CUtlVector<uint16>
};

struct RnBodyDesc_t {
    static constexpr std::size_t size = 0xE0;
    std::uint8_t m_sDebugName[0x8]; // 0x0 CUtlString
    std::uint8_t m_vPosition[0xC]; // 0x8 VectorWS
    std::uint8_t m_qOrientation[0x10]; // 0x14 QuaternionStorage
    std::uint8_t m_vLinearVelocity[0xC]; // 0x24 Vector
    std::uint8_t m_vAngularVelocity[0xC]; // 0x30 Vector
    std::uint8_t m_vLocalMassCenter[0xC]; // 0x3C Vector
    std::uint8_t m_LocalInertiaInv[0x24]; // 0x48 Vector[3]
    std::uint8_t m_flMassInv[0x4]; // 0x6C float32
    std::uint8_t m_flGameMass[0x4]; // 0x70 float32
    std::uint8_t m_flMassScaleInv[0x4]; // 0x74 float32
    std::uint8_t m_flInertiaScaleInv[0x4]; // 0x78 float32
    std::uint8_t m_flLinearDamping[0x4]; // 0x7C float32
    std::uint8_t m_flAngularDamping[0x4]; // 0x80 float32
    std::uint8_t m_flLinearDragScale[0x4]; // 0x84 float32
    std::uint8_t m_flAngularDragScale[0x4]; // 0x88 float32
    std::uint8_t m_flLinearFluidDragScale[0x4]; // 0x8C float32
    std::uint8_t m_flAngularFluidDragScale[0x4]; // 0x90 float32
    std::uint8_t m_vLastAwakeForceAccum[0xC]; // 0x94 Vector
    std::uint8_t m_vLastAwakeTorqueAccum[0xC]; // 0xA0 Vector
    std::uint8_t m_flBuoyancyScale[0x4]; // 0xAC float32
    std::uint8_t m_flGravityScale[0x4]; // 0xB0 float32
    std::uint8_t m_flTimeScale[0x4]; // 0xB4 float32
    std::uint8_t m_nBodyType[0x4]; // 0xB8 int32
    std::uint8_t m_nGameIndex[0x4]; // 0xBC uint32
    std::uint8_t m_nGameFlags[0x4]; // 0xC0 uint32
    std::uint8_t m_nMinVelocityIterations[0x1]; // 0xC4 int8
    std::uint8_t m_nMinPositionIterations[0x1]; // 0xC5 int8
    std::uint8_t m_nMassPriority[0x1]; // 0xC6 int8
    std::uint8_t m_bEnabled[0x1]; // 0xC7 bool
    std::uint8_t m_bSleeping[0x1]; // 0xC8 bool
    std::uint8_t m_bIsContinuousEnabled[0x1]; // 0xC9 bool
    std::uint8_t m_bDragEnabled[0x2]; // 0xCA bool
    std::uint8_t m_vGravity[0xC]; // 0xCC Vector
    std::uint8_t m_bSpeculativeEnabled[0x1]; // 0xD8 bool
    std::uint8_t m_bHasShadowController[0x1]; // 0xD9 bool
    std::uint8_t m_nDynamicContinuousContactBehavior[0x6]; // 0xDA DynamicContinuousContactBehavior_t
};

struct OldFeEdge_t {
    static constexpr std::size_t size = 0x48;
    std::uint8_t m_flK[0xC]; // 0x0 float32[3]
    std::uint8_t invA[0x4]; // 0xC float32
    std::uint8_t t[0x4]; // 0x10 float32
    std::uint8_t flThetaRelaxed[0x4]; // 0x14 float32
    std::uint8_t flThetaFactor[0x4]; // 0x18 float32
    std::uint8_t c01[0x4]; // 0x1C float32
    std::uint8_t c02[0x4]; // 0x20 float32
    std::uint8_t c03[0x4]; // 0x24 float32
    std::uint8_t c04[0x4]; // 0x28 float32
    std::uint8_t flAxialModelDist[0x4]; // 0x2C float32
    std::uint8_t flAxialModelWeights[0x10]; // 0x30 float32[4]
    std::uint8_t m_nNode[0x8]; // 0x40 uint16[4]
};

struct FeFollowNode_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t nParentNode[0x2]; // 0x0 uint16
    std::uint8_t nChildNode[0x2]; // 0x2 uint16
    std::uint8_t flWeight[0x4]; // 0x4 float32
};

struct RnMesh_t {
    static constexpr std::size_t size = 0xC0;
    std::uint8_t m_vMin[0xC]; // 0x0 Vector
    std::uint8_t m_vMax[0xC]; // 0xC Vector
    std::uint8_t m_Nodes[0x18]; // 0x18 CUtlVector<RnNode_t>
    std::uint8_t m_Vertices[0x18]; // 0x30 CUtlVectorSIMDPaddedVector
    std::uint8_t m_Triangles[0x18]; // 0x48 CUtlVector<RnTriangle_t>
    std::uint8_t m_Wings[0x18]; // 0x60 CUtlVector<RnWing_t>
    std::uint8_t m_TriangleEdgeFlags[0x18]; // 0x78 CUtlVector<uint8>
    std::uint8_t m_Materials[0x18]; // 0x90 CUtlVector<uint8>
    std::uint8_t m_vOrthographicAreas[0xC]; // 0xA8 Vector
    std::uint8_t m_nFlags[0x4]; // 0xB4 uint32
    std::uint8_t m_nDebugFlags[0x4]; // 0xB8 uint32
    std::uint8_t m_flSurfaceArea[0x4]; // 0xBC float32
};

struct VertexPositionNormal_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_vPosition[0xC]; // 0x0 Vector
    std::uint8_t m_vNormal[0xC]; // 0xC Vector
};

struct IPhysicsRagdollControl {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct RnCompoundTreeNode_t {
    static constexpr std::size_t size = 0x1C;
    std::uint8_t m_vMin[0xC]; // 0x0 Vector
    std::uint8_t m_vMax[0x10]; // 0xC Vector
};

struct FeBuildSDFRigid_t {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x50]; // 0x0
    std::uint8_t m_nPriority[0x4]; // 0x50 int32
    std::uint8_t m_nVertexMapHash[0x4]; // 0x54 uint32
    std::uint8_t m_nAntitunnelGroupBits[0x8]; // 0x58 uint32
};

struct RnBlendVertex_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_nWeight0[0x2]; // 0x0 uint16
    std::uint8_t m_nIndex0[0x2]; // 0x2 uint16
    std::uint8_t m_nWeight1[0x2]; // 0x4 uint16
    std::uint8_t m_nIndex1[0x2]; // 0x6 uint16
    std::uint8_t m_nWeight2[0x2]; // 0x8 uint16
    std::uint8_t m_nIndex2[0x2]; // 0xA uint16
    std::uint8_t m_nFlags[0x2]; // 0xC uint16
    std::uint8_t m_nTargetIndex[0x2]; // 0xE uint16
};

struct CFeMorphLayer {
    static constexpr std::size_t size = 0x88;
    std::uint8_t m_Name[0x8]; // 0x0 CUtlString
    std::uint8_t m_nNameHash[0x8]; // 0x8 uint32
    std::uint8_t m_Nodes[0x18]; // 0x10 CUtlVector<uint16>
    std::uint8_t m_InitPos[0x18]; // 0x28 CUtlVector<Vector>
    std::uint8_t m_Gravity[0x18]; // 0x40 CUtlVector<float32>
    std::uint8_t m_GoalStrength[0x18]; // 0x58 CUtlVector<float32>
    std::uint8_t m_GoalDamping[0x18]; // 0x70 CUtlVector<float32>
};

struct FeCtrlSoftOffset_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t nCtrlParent[0x2]; // 0x0 uint16
    std::uint8_t nCtrlChild[0x2]; // 0x2 uint16
    std::uint8_t vOffset[0xC]; // 0x4 Vector
    std::uint8_t flAlpha[0x4]; // 0x10 float32
};

struct VPhysEntityId_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_Id[0x4]; // 0x0 uint32
};

struct RnCompound_t {
    static constexpr std::size_t size = 0x160;
    std::uint8_t m_Tree[0x18]; // 0x0 RnCompoundTree_t
    std::uint8_t m_nHullBaseIndex[0x4]; // 0x18 int32
    std::uint8_t m_nMeshBaseIndex[0x4]; // 0x1C int32
    std::uint8_t m_nShapeCount[0x8]; // 0x20 int32
    std::uint8_t m_Meshes[0xC8]; // 0x28 CUtlLeanVectorFixedGrowable<RnMesh_t,1>
    std::uint8_t m_Hulls[0x10]; // 0xF0 CUtlLeanVector<RnHull_t>
    std::uint8_t m_Capsules[0x10]; // 0x100 CUtlLeanVector<RnCapsule_t>
    std::uint8_t m_Spheres[0x10]; // 0x110 CUtlLeanVector<RnSphere_t>
    std::uint8_t m_CompoundMaterialIndices[0x10]; // 0x120 CUtlLeanVector<uint8>
    std::uint8_t m_Bounds[0x18]; // 0x130 AABB_t
    std::uint8_t m_vOrthographicAreas[0xC]; // 0x148 Vector
    std::uint8_t m_flSurfaceArea[0x4]; // 0x154 float32
    std::uint8_t m_flVolume[0x8]; // 0x158 float32
};

struct FeVertexMapDesc_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t sName[0x8]; // 0x0 CUtlString
    std::uint8_t nNameHash[0x4]; // 0x8 uint32
    std::uint8_t nColor[0x4]; // 0xC uint32
    std::uint8_t nFlags[0x4]; // 0x10 uint32
    std::uint8_t nVertexBase[0x2]; // 0x14 uint16
    std::uint8_t nVertexCount[0x2]; // 0x16 uint16
    std::uint8_t nMapOffset[0x4]; // 0x18 uint32
    std::uint8_t nNodeListOffset[0x4]; // 0x1C uint32
    std::uint8_t vCenterOfMass[0xC]; // 0x20 Vector
    std::uint8_t flVolumetricSolveStrength[0x4]; // 0x2C float32
    std::uint8_t nScaleSourceNode[0x2]; // 0x30 int16
    std::uint8_t nNodeListCount[0x6]; // 0x32 uint16
};

struct FeTaperedCapsuleRigid_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t vSphere[0x20]; // 0x0 fltx4[2]
    std::uint8_t nNode[0x2]; // 0x20 uint16
    std::uint8_t nCollisionMask[0x2]; // 0x22 uint16
    std::uint8_t nVertexMapIndex[0x2]; // 0x24 uint16
    std::uint8_t nFlags[0xA]; // 0x26 uint16
};

struct FeAnimStrayRadius_t {
    static constexpr std::size_t size = 0xC;
    std::uint8_t nNode[0x4]; // 0x0 uint16[2]
    std::uint8_t flMaxDist[0x4]; // 0x4 float32
    std::uint8_t flRelaxationFactor[0x4]; // 0x8 float32
};

struct IPhysicsJoint {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct FeEdgeDesc_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t nEdge[0x4]; // 0x0 uint16[2]
    std::uint8_t nSide[0x8]; // 0x4 uint16[2][2]
    std::uint8_t nVirtElem[0x4]; // 0xC uint16[2]
};

struct FeNodeStrayBox_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t vMin[0xC]; // 0x0 Vector
    std::uint8_t nFlags[0x4]; // 0xC uint32
    std::uint8_t vMax[0xC]; // 0x10 Vector
    std::uint8_t nNode[0x4]; // 0x1C uint16[2]
};

struct FeNodeReverseOffset_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t vOffset[0xC]; // 0x0 Vector
    std::uint8_t nBoneCtrl[0x2]; // 0xC uint16
    std::uint8_t nTargetNode[0x2]; // 0xE uint16
};

struct RnPlane_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_vNormal[0xC]; // 0x0 Vector
    std::uint8_t m_flOffset[0x4]; // 0xC float32
};

struct FeSDFRigid_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t vLocalMin[0xC]; // 0x0 Vector
    std::uint8_t vLocalMax[0xC]; // 0xC Vector
    std::uint8_t flBounciness[0x4]; // 0x18 float32
    std::uint8_t nNode[0x2]; // 0x1C uint16
    std::uint8_t nCollisionMask[0x2]; // 0x1E uint16
    std::uint8_t nVertexMapIndex[0x2]; // 0x20 uint16
    std::uint8_t nFlags[0x6]; // 0x22 uint16
    std::uint8_t m_Distances[0x18]; // 0x28 CUtlVector<float32>
    std::uint8_t m_nWidth[0x4]; // 0x40 int32
    std::uint8_t m_nHeight[0x4]; // 0x44 int32
    std::uint8_t m_nDepth[0x8]; // 0x48 int32
};

struct CFeJiggleBone {
    static constexpr std::size_t size = 0x9C;
    std::uint8_t m_nFlags[0x4]; // 0x0 uint32
    std::uint8_t m_flLength[0x4]; // 0x4 float32
    std::uint8_t m_flTipMass[0x4]; // 0x8 float32
    std::uint8_t m_flYawStiffness[0x4]; // 0xC float32
    std::uint8_t m_flYawDamping[0x4]; // 0x10 float32
    std::uint8_t m_flPitchStiffness[0x4]; // 0x14 float32
    std::uint8_t m_flPitchDamping[0x4]; // 0x18 float32
    std::uint8_t m_flAlongStiffness[0x4]; // 0x1C float32
    std::uint8_t m_flAlongDamping[0x4]; // 0x20 float32
    std::uint8_t m_flAngleLimit[0x4]; // 0x24 float32
    std::uint8_t m_flMinYaw[0x4]; // 0x28 float32
    std::uint8_t m_flMaxYaw[0x4]; // 0x2C float32
    std::uint8_t m_flYawFriction[0x4]; // 0x30 float32
    std::uint8_t m_flYawBounce[0x4]; // 0x34 float32
    std::uint8_t m_flMinPitch[0x4]; // 0x38 float32
    std::uint8_t m_flMaxPitch[0x4]; // 0x3C float32
    std::uint8_t m_flPitchFriction[0x4]; // 0x40 float32
    std::uint8_t m_flPitchBounce[0x4]; // 0x44 float32
    std::uint8_t m_flBaseMass[0x4]; // 0x48 float32
    std::uint8_t m_flBaseStiffness[0x4]; // 0x4C float32
    std::uint8_t m_flBaseDamping[0x4]; // 0x50 float32
    std::uint8_t m_flBaseMinLeft[0x4]; // 0x54 float32
    std::uint8_t m_flBaseMaxLeft[0x4]; // 0x58 float32
    std::uint8_t m_flBaseLeftFriction[0x4]; // 0x5C float32
    std::uint8_t m_flBaseMinUp[0x4]; // 0x60 float32
    std::uint8_t m_flBaseMaxUp[0x4]; // 0x64 float32
    std::uint8_t m_flBaseUpFriction[0x4]; // 0x68 float32
    std::uint8_t m_flBaseMinForward[0x4]; // 0x6C float32
    std::uint8_t m_flBaseMaxForward[0x4]; // 0x70 float32
    std::uint8_t m_flBaseForwardFriction[0x4]; // 0x74 float32
    std::uint8_t m_flRadius0[0x4]; // 0x78 float32
    std::uint8_t m_flRadius1[0x4]; // 0x7C float32
    std::uint8_t m_vPoint0[0xC]; // 0x80 Vector
    std::uint8_t m_vPoint1[0xC]; // 0x8C Vector
    std::uint8_t m_nCollisionMask[0x4]; // 0x98 uint16
};

struct CRegionSVM {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_Planes[0x18]; // 0x0 CUtlVector<RnPlane_t>
    std::uint8_t m_Nodes[0x18]; // 0x18 CUtlVector<uint32>
};

struct FeWorldCollisionParams_t {
    static constexpr std::size_t size = 0xC;
    std::uint8_t flWorldFriction[0x4]; // 0x0 float32
    std::uint8_t flGroundFriction[0x4]; // 0x4 float32
    std::uint8_t nListBegin[0x2]; // 0x8 uint16
    std::uint8_t nListEnd[0x2]; // 0xA uint16
};

struct CGenericShapeProxy {
    static constexpr std::size_t size = 0x98;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_verts[0x68]; // 0x30 CUtlLeanVectorFixedGrowable<Vector,8>
};

struct RnNode_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_vMin[0xC]; // 0x0 Vector
    std::uint8_t m_nChildren[0x4]; // 0xC uint32
    std::uint8_t m_vMax[0xC]; // 0x10 Vector
    std::uint8_t m_nTriangleOffset[0x4]; // 0x1C uint32
};

struct FeFitMatrix_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t bone[0x20]; // 0x0 CTransform
    std::uint8_t vCenter[0xC]; // 0x20 Vector
    std::uint8_t nEnd[0x2]; // 0x2C uint16
    std::uint8_t nNode[0x2]; // 0x2E uint16
    std::uint8_t nBeginDynamic[0x10]; // 0x30 uint16
};

struct FeSimdQuad_t {
    static constexpr std::size_t size = 0x130;
    std::uint8_t nNode[0x20]; // 0x0 uint16[4][4]
    std::uint8_t f4Slack[0x10]; // 0x20 fltx4
    std::uint8_t vShape[0xC0]; // 0x30 FourVectors[4]
    std::uint8_t f4Weights[0x40]; // 0xF0 fltx4[4]
};

struct FeSimdSpringIntegrator_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t nNode[0x10]; // 0x0 uint16[4][2]
    std::uint8_t flSpringRestLength[0x10]; // 0x10 fltx4
    std::uint8_t flSpringConstant[0x10]; // 0x20 fltx4
    std::uint8_t flSpringDamping[0x10]; // 0x30 fltx4
    std::uint8_t flNodeWeight0[0x10]; // 0x40 fltx4
};

struct FeSimdNodeBase_t {
    static constexpr std::size_t size = 0x70;
    std::uint8_t nNode[0x8]; // 0x0 uint16[4]
    std::uint8_t nNodeX0[0x8]; // 0x8 uint16[4]
    std::uint8_t nNodeX1[0x8]; // 0x10 uint16[4]
    std::uint8_t nNodeY0[0x8]; // 0x18 uint16[4]
    std::uint8_t nNodeY1[0x8]; // 0x20 uint16[4]
    std::uint8_t nDummy[0x8]; // 0x28 uint16[4]
    std::uint8_t qAdjust[0x40]; // 0x30 FourQuaternions
};

struct FeQuad_t {
    static constexpr std::size_t size = 0x4C;
    std::uint8_t nNode[0x8]; // 0x0 uint16[4]
    std::uint8_t flSlack[0x4]; // 0x8 float32
    std::uint8_t vShape[0x40]; // 0xC Vector4D[4]
};

struct FeHingeLimit_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t nNode[0xC]; // 0x0 uint16[6]
    std::uint8_t nFlags[0x4]; // 0xC uint32
    std::uint8_t flWeight4[0x4]; // 0x10 float32
    std::uint8_t flWeight5[0x4]; // 0x14 float32
    std::uint8_t flAngleCenter[0x4]; // 0x18 float32
    std::uint8_t flAngleExtents[0x4]; // 0x1C float32
};

struct RnWing_t {
    static constexpr std::size_t size = 0xC;
    std::uint8_t m_nIndex[0xC]; // 0x0 int32[3]
};

struct FeWeightedNode_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t nNode[0x2]; // 0x0 uint16
    std::uint8_t nWeight[0x2]; // 0x2 uint16
};

struct CollisionDetailLayerInfo_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t m_sDescription[0x8]; // 0x0 CUtlString
    std::uint8_t m_sFriendlyName[0x8]; // 0x8 CUtlString
    std::uint8_t m_bIsQueryOnly[0x8]; // 0x10 bool
    std::uint8_t m_sParentDetailLayer[0x8]; // 0x18 CUtlString
    std::uint8_t m_vecSubtreeDetailLayers[0x18]; // 0x20 CUtlVector<CollisionDetailLayerInfo_t::Name_t>
    std::uint8_t m_bNotPickable[0x8]; // 0x38 bool
};

struct FeEffectDesc_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t sName[0x8]; // 0x0 CUtlString
    std::uint8_t nNameHash[0x4]; // 0x8 uint32
    std::uint8_t nType[0x4]; // 0xC int32
    std::uint8_t m_Params[0x10]; // 0x10 KeyValues3
};

struct FeSpringIntegrator_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t nNode[0x4]; // 0x0 uint16[2]
    std::uint8_t flSpringRestLength[0x4]; // 0x4 float32
    std::uint8_t flSpringConstant[0x4]; // 0x8 float32
    std::uint8_t flSpringDamping[0x4]; // 0xC float32
    std::uint8_t flNodeWeight0[0x4]; // 0x10 float32
};

struct FourVectors2D {
    static constexpr std::size_t size = 0x20;
    std::uint8_t x[0x10]; // 0x0 fltx4
    std::uint8_t y[0x10]; // 0x10 fltx4
};

struct FeKelagerBend2_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t flWeight[0xC]; // 0x0 float32[3]
    std::uint8_t flHeight0[0x4]; // 0xC float32
    std::uint8_t nNode[0x6]; // 0x10 uint16[3]
    std::uint8_t nReserved[0x2]; // 0x16 uint16
};

struct vphysics_save_ragdoll_control_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t m_flMinSpringFrequency[0x4]; // 0x0 float32
    std::uint8_t m_flMaxSpringFrequency[0x4]; // 0x4 float32
    std::uint8_t m_flMaxStretch[0x4]; // 0x8 float32
    std::uint8_t m_bSolidCollisionAtZeroWeight[0x1]; // 0xC bool
    std::uint8_t m_bRequiresDynamicBodies[0x1]; // 0xD bool
    std::uint8_t m_bIgnoreTeleport[0x2]; // 0xE bool
    std::uint8_t m_vLinearVelocityAccumulator[0xC]; // 0x10 Vector
    std::uint8_t m_vAngularVelocityAccumulator[0xC]; // 0x1C RotationVector
    std::uint8_t m_vForceAccumulator[0xC]; // 0x28 Vector
    std::uint8_t m_nBodyCount[0x4]; // 0x34 int32
};

struct FeRigidColliderIndices_t {
    static constexpr std::size_t size = 0xA;
    std::uint8_t m_nTaperedCapsuleRigidIndex[0x2]; // 0x0 uint16
    std::uint8_t m_nSphereRigidIndex[0x2]; // 0x2 uint16
    std::uint8_t m_nBoxRigidIndex[0x2]; // 0x4 uint16
    std::uint8_t m_nSDFRigidIndex[0x2]; // 0x6 uint16
    std::uint8_t m_nCollisionPlaneIndex[0x2]; // 0x8 uint16
};

struct FeCollisionPlane_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t nCtrlParent[0x2]; // 0x0 uint16
    std::uint8_t nChildNode[0x2]; // 0x2 uint16
    std::uint8_t m_Plane[0x10]; // 0x4 RnPlane_t
    std::uint8_t flStrength[0x4]; // 0x14 float32
};

struct FeStiffHingeBuild_t {
    static constexpr std::size_t size = 0x1C;
    std::uint8_t flMaxAngle[0x4]; // 0x0 float32
    std::uint8_t flStrength[0x4]; // 0x4 float32
    std::uint8_t flMotionBias[0xC]; // 0x8 float32[3]
    std::uint8_t nNode[0x8]; // 0x14 uint16[3]
};

struct FeBoxRigid_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t tmFrame2[0x20]; // 0x0 CTransform
    std::uint8_t nNode[0x2]; // 0x20 uint16
    std::uint8_t nCollisionMask[0x2]; // 0x22 uint16
    std::uint8_t vSize[0xC]; // 0x24 Vector
    std::uint8_t nVertexMapIndex[0x2]; // 0x30 uint16
    std::uint8_t nFlags[0xE]; // 0x32 uint16
};

struct FeMorphLayerDepr_t {
    static constexpr std::size_t size = 0x90;
    std::uint8_t m_Name[0x8]; // 0x0 CUtlString
    std::uint8_t m_nNameHash[0x8]; // 0x8 uint32
    std::uint8_t m_Nodes[0x18]; // 0x10 CUtlVector<uint16>
    std::uint8_t m_InitPos[0x18]; // 0x28 CUtlVector<Vector>
    std::uint8_t m_Gravity[0x18]; // 0x40 CUtlVector<float32>
    std::uint8_t m_GoalStrength[0x18]; // 0x58 CUtlVector<float32>
    std::uint8_t m_GoalDamping[0x18]; // 0x70 CUtlVector<float32>
    std::uint8_t m_nFlags[0x8]; // 0x88 uint32
};

struct FeCtrlOffset_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t vOffset[0xC]; // 0x0 Vector
    std::uint8_t nCtrlParent[0x2]; // 0xC uint16
    std::uint8_t nCtrlChild[0x2]; // 0xE uint16
};

struct IPhysicsPlayerController {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct FeNodeBase_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t nNode[0x2]; // 0x0 uint16
    std::uint8_t nDummy[0x6]; // 0x2 uint16[3]
    std::uint8_t nNodeX0[0x2]; // 0x8 uint16
    std::uint8_t nNodeX1[0x2]; // 0xA uint16
    std::uint8_t nNodeY0[0x2]; // 0xC uint16
    std::uint8_t nNodeY1[0x2]; // 0xE uint16
    std::uint8_t qAdjust[0x10]; // 0x10 QuaternionStorage
};

struct FeVertexMapBuild_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_VertexMapName[0x8]; // 0x0 CUtlString
    std::uint8_t m_nNameHash[0x4]; // 0x8 uint32
    std::uint8_t m_Color[0x4]; // 0xC Color
    std::uint8_t m_flVolumetricSolveStrength[0x4]; // 0x10 float32
    std::uint8_t m_nScaleSourceNode[0x4]; // 0x14 int32
    std::uint8_t m_Weights[0x18]; // 0x18 CUtlVector<float32>
};

struct CFeVertexMapBuildArray {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_Array[0x18]; // 0x0 CUtlVector<FeVertexMapBuild_t*>
};

struct FeTri_t {
    static constexpr std::size_t size = 0x1C;
    std::uint8_t nNode[0x8]; // 0x0 uint16[3]
    std::uint8_t w1[0x4]; // 0x8 float32
    std::uint8_t w2[0x4]; // 0xC float32
    std::uint8_t v1x[0x4]; // 0x10 float32
    std::uint8_t v2[0x8]; // 0x14 Vector2D
};

struct RnHull_t {
    static constexpr std::size_t size = 0xF8;
    std::uint8_t m_vCentroid[0xC]; // 0x0 Vector
    std::uint8_t m_flMaxAngularRadius[0x4]; // 0xC float32
    std::uint8_t m_flMinCentroidRadius[0x4]; // 0x10 float32
    std::uint8_t m_Bounds[0x18]; // 0x14 AABB_t
    std::uint8_t m_vOrthographicAreas[0xC]; // 0x2C Vector
    std::uint8_t m_MassProperties[0x30]; // 0x38 matrix3x4_t
    std::uint8_t m_flVolume[0x4]; // 0x68 float32
    std::uint8_t m_flSurfaceArea[0x4]; // 0x6C float32
    std::uint8_t m_VertexPositions[0x18]; // 0x70 CUtlVector<Vector>
    std::uint8_t m_FacePlanes[0x18]; // 0x88 CUtlVector<RnPlane_t>
    std::uint8_t m_nFlags[0x8]; // 0xA0 uint32
    std::uint8_t m_pRegionSVM[0x8]; // 0xA8 CRegionSVM*
    std::uint8_t m_Vertices[0x18]; // 0xB0 CUtlVector<RnVertex_t>
    std::uint8_t m_Edges[0x18]; // 0xC8 CUtlVector<RnHalfEdge_t>
    std::uint8_t m_Faces[0x18]; // 0xE0 CUtlVector<RnFace_t>
};

struct FeModelSelfCollisionLayer_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t m_Name[0x8]; // 0x0 CUtlString
    std::uint8_t m_Nodes[0x18]; // 0x8 CUtlVector<uint16>
    std::uint8_t m_flParentReaction[0x4]; // 0x20 float32
    std::uint8_t m_nFlags[0x4]; // 0x24 uint32
    std::uint8_t m_nEndIdx[0x10]; // 0x28 uint32[4]
};

struct FeAntiTunnelGroupBuild_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_nVertexMapHash[0x4]; // 0x0 uint32
    std::uint8_t m_nCollisionMask[0x4]; // 0x4 uint32
};

struct CovMatrix3 {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_vDiag[0xC]; // 0x0 Vector
    std::uint8_t m_flXY[0x4]; // 0xC float32
    std::uint8_t m_flXZ[0x4]; // 0x10 float32
    std::uint8_t m_flYZ[0x4]; // 0x14 float32
};

struct PhysicsParticleId_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_Value[0x4]; // 0x0 uint32
};

struct RnVertex_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t m_nEdge[0x1]; // 0x0 uint8
};

struct IPhysicsMotionController {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct Dop26_t {
    static constexpr std::size_t size = 0x68;
    std::uint8_t m_flSupport[0x68]; // 0x0 float32[26]
};

struct FeDynKinLink_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_nParent[0x2]; // 0x0 uint16
    std::uint8_t m_nChild[0x2]; // 0x2 uint16
};

struct RnFace_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t m_nEdge[0x1]; // 0x0 uint8
};

struct FeSimdPrism_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t nNode[0x30]; // 0x0 uint16[4][6]
    std::uint8_t flVolume[0x10]; // 0x30 fltx4
};

struct FeCtrlOsOffset_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t nCtrlParent[0x2]; // 0x0 uint16
    std::uint8_t nCtrlChild[0x2]; // 0x2 uint16
};

struct FeAntiTunnelProbe_t {
    static constexpr std::size_t size = 0x1C;
    std::uint8_t flWeight[0x4]; // 0x0 float32
    std::uint8_t nFlags[0x4]; // 0x4 uint32
    std::uint8_t nProbeNode[0x2]; // 0x8 uint16
    std::uint8_t nCount[0x2]; // 0xA uint16
    std::uint8_t nBegin[0x4]; // 0xC uint32
    std::uint8_t flActivationDistance[0x4]; // 0x10 float32
    std::uint8_t flCurvatureRadius[0x4]; // 0x14 float32
    std::uint8_t flBias[0x4]; // 0x18 float32
};

struct FeSourceEdge_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t nNode[0x4]; // 0x0 uint16[2]
};

struct FeTwistConstraint_t {
    static constexpr std::size_t size = 0xC;
    std::uint8_t nNodeOrient[0x2]; // 0x0 uint16
    std::uint8_t nNodeEnd[0x2]; // 0x2 uint16
    std::uint8_t flTwistRelax[0x4]; // 0x4 float32
    std::uint8_t flSwingRelax[0x4]; // 0x8 float32
};

struct FeNodeWindBase_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t nNodeX0[0x2]; // 0x0 uint16
    std::uint8_t nNodeX1[0x2]; // 0x2 uint16
    std::uint8_t nNodeY0[0x2]; // 0x4 uint16
    std::uint8_t nNodeY1[0x2]; // 0x6 uint16
};

struct FeAxialEdgeBend_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t te[0x4]; // 0x0 float32
    std::uint8_t tv[0x4]; // 0x4 float32
    std::uint8_t flDist[0x4]; // 0x8 float32
    std::uint8_t flWeight[0x10]; // 0xC float32[4]
    std::uint8_t nNode[0xC]; // 0x1C uint16[6]
};

struct FourCovMatrices3 {
    static constexpr std::size_t size = 0x60;
    std::uint8_t m_vDiag[0x30]; // 0x0 FourVectors
    std::uint8_t m_flXY[0x10]; // 0x30 fltx4
    std::uint8_t m_flXZ[0x10]; // 0x40 fltx4
    std::uint8_t m_flYZ[0x10]; // 0x50 fltx4
};

struct constraint_breakableparams_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t strength[0x4]; // 0x0 float32
    std::uint8_t forceLimit[0x4]; // 0x4 float32
    std::uint8_t torqueLimit[0x4]; // 0x8 float32
    std::uint8_t bodyMassScale[0x8]; // 0xC float32[2]
    std::uint8_t isActive[0x4]; // 0x14 bool
};

struct FeSphereRigid_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t vSphere[0x10]; // 0x0 fltx4
    std::uint8_t nNode[0x2]; // 0x10 uint16
    std::uint8_t nCollisionMask[0x2]; // 0x12 uint16
    std::uint8_t nVertexMapIndex[0x2]; // 0x14 uint16
    std::uint8_t nFlags[0xA]; // 0x16 uint16
};

struct CollisionDetailLayerInfo_t__Name_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_nNameToken[0x8]; // 0x0 CUtlStringToken
    std::uint8_t m_sNameString[0x8]; // 0x8 CUtlString
};

struct FeBuildTaperedCapsuleRigid_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_nPriority[0x4]; // 0x30 int32
    std::uint8_t m_nVertexMapHash[0x4]; // 0x34 uint32
    std::uint8_t m_nAntitunnelGroupBits[0x8]; // 0x38 uint32
};

struct IPhysicsBody {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct FeSoftParent_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t nParent[0x4]; // 0x0 int32
    std::uint8_t flAlpha[0x4]; // 0x4 float32
};

struct RnShapeDesc_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_nCollisionAttributeIndex[0x4]; // 0x0 uint32
    std::uint8_t m_nSurfacePropertyIndex[0x4]; // 0x4 uint32
    std::uint8_t m_UserFriendlyName[0x8]; // 0x8 CUtlString
    std::uint8_t m_bUserFriendlyNameSealed[0x1]; // 0x10 bool
    std::uint8_t m_bUserFriendlyNameLong[0x3]; // 0x11 bool
    std::uint8_t m_nToolMaterialHash[0x4]; // 0x14 uint32
};

struct FeTreeChildren_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t nChild[0x4]; // 0x0 uint16[2]
};

struct FeRodConstraint_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t nNode[0x4]; // 0x0 uint16[2]
    std::uint8_t flMaxDist[0x4]; // 0x4 float32
    std::uint8_t flMinDist[0x4]; // 0x8 float32
    std::uint8_t flWeight0[0x4]; // 0xC float32
    std::uint8_t flRelaxationFactor[0x4]; // 0x10 float32
};

struct FeFitWeight_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t flWeight[0x4]; // 0x0 float32
    std::uint8_t nNode[0x2]; // 0x4 uint16
    std::uint8_t nDummy[0x2]; // 0x6 uint16
};

struct RnHalfEdge_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_nNext[0x1]; // 0x0 uint8
    std::uint8_t m_nTwin[0x1]; // 0x1 uint8
    std::uint8_t m_nOrigin[0x1]; // 0x2 uint8
    std::uint8_t m_nFace[0x1]; // 0x3 uint8
};

struct FeSimdTri_t {
    static constexpr std::size_t size = 0x80;
    std::uint8_t nNode[0x30]; // 0x0 uint32[4][3]
    std::uint8_t w1[0x10]; // 0x30 fltx4
    std::uint8_t w2[0x10]; // 0x40 fltx4
    std::uint8_t v1x[0x10]; // 0x50 fltx4
    std::uint8_t v2[0x20]; // 0x60 FourVectors2D
};

struct VertexPositionColor_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_vPosition[0x10]; // 0x0 Vector
};

struct FeFitInfluence_t {
    static constexpr std::size_t size = 0xC;
    std::uint8_t nVertexNode[0x4]; // 0x0 uint32
    std::uint8_t flWeight[0x4]; // 0x4 float32
    std::uint8_t nMatrixNode[0x4]; // 0x8 uint32
};

struct FeHingeLimitBuild_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t nNode[0xC]; // 0x0 uint16[6]
    std::uint8_t nFlags[0x4]; // 0xC uint32
    std::uint8_t flLimitCW[0x4]; // 0x10 float32
    std::uint8_t flLimitCCW[0x4]; // 0x14 float32
};

} // namespace