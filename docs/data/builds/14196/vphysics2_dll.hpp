/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Total Offsets   : 202
/*  Dumped At       : 12:53 05/11/2026 (GMT)
/*  Dumped In       : 46,1s
*/

/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

#pragma once
#include <cstddef>
#include <cstdint>

namespace cs2::vphysics2_dll {

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
    std::uint8_t _[0x10]; // 0x18 
};

struct RnCompoundDesc_t {
    static constexpr std::size_t size = 0x178;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x160]; // 0x18 
};

struct RnSoftbodyParticle_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct RnHullDesc_t {
    static constexpr std::size_t size = 0x110;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0xf8]; // 0x18 
};

struct RnCapsuleDesc_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x20]; // 0x18 
};

struct PhysFeModelDesc_t {
    static constexpr std::size_t size = 0x728;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x18]; // 0x18 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x2]; // 0x40 
    std::uint8_t _[0x2]; // 0x42 
    std::uint8_t _[0x2]; // 0x44 
    std::uint8_t _[0x2]; // 0x46 
    std::uint8_t _[0x2]; // 0x48 
    std::uint8_t _[0x2]; // 0x4a 
    std::uint8_t _[0x2]; // 0x4c 
    std::uint8_t _[0x2]; // 0x4e 
    std::uint8_t _[0x2]; // 0x50 
    std::uint8_t _[0x2]; // 0x52 
    std::uint8_t _[0x2]; // 0x54 
    std::uint8_t _[0x2]; // 0x56 
    std::uint8_t _[0x8]; // 0x58 
    std::uint8_t _[0x18]; // 0x60 
    std::uint8_t _[0x18]; // 0x78 
    std::uint8_t _[0x18]; // 0x90 
    std::uint8_t _[0x18]; // 0xa8 
    std::uint8_t _[0x18]; // 0xc0 
    std::uint8_t _[0x18]; // 0xd8 
    std::uint8_t _[0x18]; // 0xf0 
    std::uint8_t _[0x18]; // 0x108 
    std::uint8_t _[0x18]; // 0x120 
    std::uint8_t _[0x18]; // 0x138 
    std::uint8_t _[0x18]; // 0x150 
    std::uint8_t _[0x18]; // 0x168 
    std::uint8_t _[0x18]; // 0x180 
    std::uint8_t _[0x18]; // 0x198 
    std::uint8_t _[0x18]; // 0x1b0 
    std::uint8_t _[0x18]; // 0x1c8 
    std::uint8_t _[0x18]; // 0x1e0 
    std::uint8_t _[0x18]; // 0x1f8 
    std::uint8_t _[0x18]; // 0x210 
    std::uint8_t _[0x18]; // 0x228 
    std::uint8_t _[0x18]; // 0x240 
    std::uint8_t _[0x18]; // 0x258 
    std::uint8_t _[0x18]; // 0x270 
    std::uint8_t _[0x18]; // 0x288 
    std::uint8_t _[0x18]; // 0x2a0 
    std::uint8_t _[0x18]; // 0x2b8 
    std::uint8_t _[0x18]; // 0x2d0 
    std::uint8_t _[0x18]; // 0x2e8 
    std::uint8_t _[0x18]; // 0x300 
    std::uint8_t _[0x18]; // 0x318 
    std::uint8_t _[0x18]; // 0x330 
    std::uint8_t _[0x18]; // 0x348 
    std::uint8_t _[0x18]; // 0x360 
    std::uint8_t _[0x18]; // 0x378 
    std::uint8_t _[0x18]; // 0x390 
    std::uint8_t _[0x18]; // 0x3a8 
    std::uint8_t _[0x18]; // 0x3c0 
    std::uint8_t _[0x18]; // 0x3d8 
    std::uint8_t _[0x18]; // 0x3f0 
    std::uint8_t _[0x18]; // 0x408 
    std::uint8_t _[0x18]; // 0x420 
    std::uint8_t _[0x18]; // 0x438 
    std::uint8_t _[0x18]; // 0x450 
    std::uint8_t _[0x18]; // 0x468 
    std::uint8_t _[0x18]; // 0x480 
    std::uint8_t _[0x18]; // 0x498 
    std::uint8_t _[0x18]; // 0x4b0 
    std::uint8_t _[0x18]; // 0x4c8 
    std::uint8_t _[0x18]; // 0x4e0 
    std::uint8_t _[0x18]; // 0x4f8 
    std::uint8_t _[0x18]; // 0x510 
    std::uint8_t _[0x18]; // 0x528 
    std::uint8_t _[0x18]; // 0x540 
    std::uint8_t _[0x18]; // 0x558 
    std::uint8_t _[0x2]; // 0x570 
    std::uint8_t _[0x2]; // 0x572 
    std::uint8_t _[0x1]; // 0x574 
    std::uint8_t _[0x1]; // 0x575 
    std::uint8_t _[0x1]; // 0x576 
    std::uint8_t _[0x1]; // 0x577 
    std::uint8_t _[0x18]; // 0x578 
    std::uint8_t _[0x18]; // 0x590 
    std::uint8_t _[0x18]; // 0x5a8 
    std::uint8_t _[0x18]; // 0x5c0 
    std::uint8_t _[0x18]; // 0x5d8 
    std::uint8_t _[0x18]; // 0x5f0 
    std::uint8_t _[0x18]; // 0x608 
    std::uint8_t _[0x18]; // 0x620 
    std::uint8_t _[0x18]; // 0x638 
    std::uint8_t _[0x18]; // 0x650 
    std::uint8_t _[0x18]; // 0x668 
    std::uint8_t _[0x18]; // 0x680 
    std::uint8_t _[0x18]; // 0x698 
    std::uint8_t _[0x18]; // 0x6b0 
    std::uint8_t _[0x18]; // 0x6c8 
    std::uint8_t _[0x4]; // 0x6e0 
    std::uint8_t _[0x4]; // 0x6e4 
    std::uint8_t _[0x4]; // 0x6e8 
    std::uint8_t _[0x4]; // 0x6ec 
    std::uint8_t _[0x4]; // 0x6f0 
    std::uint8_t _[0x4]; // 0x6f4 
    std::uint8_t _[0x4]; // 0x6f8 
    std::uint8_t _[0x4]; // 0x6fc 
    std::uint8_t _[0x4]; // 0x700 
    std::uint8_t _[0x4]; // 0x704 
    std::uint8_t _[0x4]; // 0x708 
    std::uint8_t _[0x4]; // 0x70c 
    std::uint8_t _[0x4]; // 0x710 
    std::uint8_t _[0x4]; // 0x714 
    std::uint8_t _[0x4]; // 0x718 
    std::uint8_t _[0x4]; // 0x71c 
    std::uint8_t _[0x4]; // 0x720 
    std::uint8_t _[0x2]; // 0x724 
    std::uint8_t _[0x2]; // 0x726 
};

struct RnMeshDesc_t {
    static constexpr std::size_t size = 0xd8;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0xc0]; // 0x18 
};

struct RnSoftbodySpring_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct RnSoftbodyCapsule_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
};

struct vphysics_save_cphysicsbody_t {
    static constexpr std::size_t size = 0xe8;
    std::uint8_t pad_0[0xe0]; // 0x0
    std::uint8_t _[0x8]; // 0xe0 
};

struct FeBuildBoxRigid_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x4]; // 0x44 
    std::uint8_t _[0x8]; // 0x48 
};

struct CFeIndexedJiggleBone {
    static constexpr std::size_t size = 0xa4;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x9c]; // 0x8 
};

struct FeBoneMergeLink_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct IPhysAggregateInstance {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
};

struct FeBandBendLimit_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0xc]; // 0x8 
};

struct RnCompoundTree_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x8]; // 0x10 
};

struct FeTaperedCapsuleStretch_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x2]; // 0x4 
    std::uint8_t _[0x2]; // 0x6 
    std::uint8_t _[0x8]; // 0x8 
};

struct constraint_axislimit_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
};

struct FeSimdRodConstraintAnim_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x10]; // 0x10 
    std::uint8_t _[0x10]; // 0x20 
};

struct FeSimdRodConstraint_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x10]; // 0x10 
    std::uint8_t _[0x10]; // 0x20 
    std::uint8_t _[0x10]; // 0x30 
    std::uint8_t _[0x10]; // 0x40 
};

struct IPhysicsParticleRope {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct constraint_hingeparams_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0xc]; // 0xc 
    std::uint8_t _[0x10]; // 0x18 
    std::uint8_t _[0x18]; // 0x28 
};

struct IPhysicsBodyList {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct FeBuildSphereRigid_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x20]; // 0x0
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x8]; // 0x28 
};

struct FeSimdAnimStrayRadius_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x10]; // 0x10 
    std::uint8_t _[0x10]; // 0x20 
};

struct RnTriangle_t {
    static constexpr std::size_t size = 0xc;
    std::uint8_t _[0xc]; // 0x0 
};

struct FeProxyVertexMap_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
};

struct FeNodeIntegrator_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
};

struct RnCapsule_t {
    static constexpr std::size_t size = 0x1c;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x4]; // 0x18 
};

struct CFeNamedJiggleBone {
    static constexpr std::size_t size = 0xd0;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x20]; // 0x10 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x9c]; // 0x34 
};

struct FePrism_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0x4]; // 0xc 
};

struct FeAntiTunnelProbeBuild_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x18]; // 0x18 
};

struct RnBodyDesc_t {
    static constexpr std::size_t size = 0xe0;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0xc]; // 0x8 
    std::uint8_t _[0x10]; // 0x14 
    std::uint8_t _[0xc]; // 0x24 
    std::uint8_t _[0xc]; // 0x30 
    std::uint8_t _[0xc]; // 0x3c 
    std::uint8_t _[0x24]; // 0x48 
    std::uint8_t _[0x4]; // 0x6c 
    std::uint8_t _[0x4]; // 0x70 
    std::uint8_t _[0x4]; // 0x74 
    std::uint8_t _[0x4]; // 0x78 
    std::uint8_t _[0x4]; // 0x7c 
    std::uint8_t _[0x4]; // 0x80 
    std::uint8_t _[0x4]; // 0x84 
    std::uint8_t _[0x4]; // 0x88 
    std::uint8_t _[0x4]; // 0x8c 
    std::uint8_t _[0x4]; // 0x90 
    std::uint8_t _[0xc]; // 0x94 
    std::uint8_t _[0xc]; // 0xa0 
    std::uint8_t _[0x4]; // 0xac 
    std::uint8_t _[0x4]; // 0xb0 
    std::uint8_t _[0x4]; // 0xb4 
    std::uint8_t _[0x4]; // 0xb8 
    std::uint8_t _[0x4]; // 0xbc 
    std::uint8_t _[0x4]; // 0xc0 
    std::uint8_t _[0x1]; // 0xc4 
    std::uint8_t _[0x1]; // 0xc5 
    std::uint8_t _[0x1]; // 0xc6 
    std::uint8_t _[0x1]; // 0xc7 
    std::uint8_t _[0x1]; // 0xc8 
    std::uint8_t _[0x1]; // 0xc9 
    std::uint8_t _[0x2]; // 0xca 
    std::uint8_t _[0xc]; // 0xcc 
    std::uint8_t _[0x1]; // 0xd8 
    std::uint8_t _[0x1]; // 0xd9 
    std::uint8_t _[0x6]; // 0xda 
};

struct OldFeEdge_t {
    static constexpr std::size_t size = 0x48;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x10]; // 0x30 
    std::uint8_t _[0x8]; // 0x40 
};

struct FeFollowNode_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x2]; // 0x0 
    std::uint8_t _[0x2]; // 0x2 
    std::uint8_t _[0x4]; // 0x4 
};

struct RnMesh_t {
    static constexpr std::size_t size = 0xc0;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0xc]; // 0xc 
    std::uint8_t _[0x18]; // 0x18 
    std::uint8_t _[0x18]; // 0x30 
    std::uint8_t _[0x18]; // 0x48 
    std::uint8_t _[0x18]; // 0x60 
    std::uint8_t _[0x18]; // 0x78 
    std::uint8_t _[0x18]; // 0x90 
    std::uint8_t _[0xc]; // 0xa8 
    std::uint8_t _[0x4]; // 0xb4 
    std::uint8_t _[0x4]; // 0xb8 
    std::uint8_t _[0x4]; // 0xbc 
};

struct VertexPositionNormal_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0xc]; // 0xc 
};

struct IPhysicsRagdollControl {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct RnCompoundTreeNode_t {
    static constexpr std::size_t size = 0x1c;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0x10]; // 0xc 
};

struct FeBuildSDFRigid_t {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x50]; // 0x0
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0x4]; // 0x54 
    std::uint8_t _[0x8]; // 0x58 
};

struct RnBlendVertex_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x2]; // 0x0 
    std::uint8_t _[0x2]; // 0x2 
    std::uint8_t _[0x2]; // 0x4 
    std::uint8_t _[0x2]; // 0x6 
    std::uint8_t _[0x2]; // 0x8 
    std::uint8_t _[0x2]; // 0xa 
    std::uint8_t _[0x2]; // 0xc 
    std::uint8_t _[0x2]; // 0xe 
};

struct CFeMorphLayer {
    static constexpr std::size_t size = 0x88;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x18]; // 0x28 
    std::uint8_t _[0x18]; // 0x40 
    std::uint8_t _[0x18]; // 0x58 
    std::uint8_t _[0x18]; // 0x70 
};

struct FeCtrlSoftOffset_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t _[0x2]; // 0x0 
    std::uint8_t _[0x2]; // 0x2 
    std::uint8_t _[0xc]; // 0x4 
    std::uint8_t _[0x4]; // 0x10 
};

struct VPhysEntityId_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct RnCompound_t {
    static constexpr std::size_t size = 0x160;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0xc8]; // 0x28 
    std::uint8_t _[0x10]; // 0xf0 
    std::uint8_t _[0x10]; // 0x100 
    std::uint8_t _[0x10]; // 0x110 
    std::uint8_t _[0x10]; // 0x120 
    std::uint8_t _[0x18]; // 0x130 
    std::uint8_t _[0xc]; // 0x148 
    std::uint8_t _[0x4]; // 0x154 
    std::uint8_t _[0x8]; // 0x158 
};

struct FeVertexMapDesc_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x2]; // 0x14 
    std::uint8_t _[0x2]; // 0x16 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0xc]; // 0x20 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x2]; // 0x30 
    std::uint8_t _[0x6]; // 0x32 
};

struct FeTaperedCapsuleRigid_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x20]; // 0x0 
    std::uint8_t _[0x2]; // 0x20 
    std::uint8_t _[0x2]; // 0x22 
    std::uint8_t _[0x2]; // 0x24 
    std::uint8_t _[0xa]; // 0x26 
};

struct FeAnimStrayRadius_t {
    static constexpr std::size_t size = 0xc;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
};

struct IPhysicsJoint {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct FeEdgeDesc_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x8]; // 0x4 
    std::uint8_t _[0x4]; // 0xc 
};

struct FeNodeStrayBox_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0xc]; // 0x10 
    std::uint8_t _[0x4]; // 0x1c 
};

struct FeNodeReverseOffset_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0x2]; // 0xc 
    std::uint8_t _[0x2]; // 0xe 
};

struct RnPlane_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0x4]; // 0xc 
};

struct FeSDFRigid_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0xc]; // 0xc 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x2]; // 0x1c 
    std::uint8_t _[0x2]; // 0x1e 
    std::uint8_t _[0x2]; // 0x20 
    std::uint8_t _[0x6]; // 0x22 
    std::uint8_t _[0x18]; // 0x28 
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x4]; // 0x44 
    std::uint8_t _[0x8]; // 0x48 
};

struct CFeJiggleBone {
    static constexpr std::size_t size = 0x9c;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x4]; // 0x44 
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0x4]; // 0x54 
    std::uint8_t _[0x4]; // 0x58 
    std::uint8_t _[0x4]; // 0x5c 
    std::uint8_t _[0x4]; // 0x60 
    std::uint8_t _[0x4]; // 0x64 
    std::uint8_t _[0x4]; // 0x68 
    std::uint8_t _[0x4]; // 0x6c 
    std::uint8_t _[0x4]; // 0x70 
    std::uint8_t _[0x4]; // 0x74 
    std::uint8_t _[0x4]; // 0x78 
    std::uint8_t _[0x4]; // 0x7c 
    std::uint8_t _[0xc]; // 0x80 
    std::uint8_t _[0xc]; // 0x8c 
    std::uint8_t _[0x4]; // 0x98 
};

struct CRegionSVM {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x18]; // 0x18 
};

struct FeWorldCollisionParams_t {
    static constexpr std::size_t size = 0xc;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x2]; // 0x8 
    std::uint8_t _[0x2]; // 0xa 
};

struct CGenericShapeProxy {
    static constexpr std::size_t size = 0x98;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x68]; // 0x30 
};

struct RnNode_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0xc]; // 0x10 
    std::uint8_t _[0x4]; // 0x1c 
};

struct FeFitMatrix_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t _[0x20]; // 0x0 
    std::uint8_t _[0xc]; // 0x20 
    std::uint8_t _[0x2]; // 0x2c 
    std::uint8_t _[0x2]; // 0x2e 
    std::uint8_t _[0x10]; // 0x30 
};

struct FeSimdQuad_t {
    static constexpr std::size_t size = 0x130;
    std::uint8_t _[0x20]; // 0x0 
    std::uint8_t _[0x10]; // 0x20 
    std::uint8_t _[0xc0]; // 0x30 
    std::uint8_t _[0x40]; // 0xf0 
};

struct FeSimdSpringIntegrator_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x10]; // 0x10 
    std::uint8_t _[0x10]; // 0x20 
    std::uint8_t _[0x10]; // 0x30 
    std::uint8_t _[0x10]; // 0x40 
};

struct FeSimdNodeBase_t {
    static constexpr std::size_t size = 0x70;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x40]; // 0x30 
};

struct FeQuad_t {
    static constexpr std::size_t size = 0x4c;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x40]; // 0xc 
};

struct FeHingeLimit_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
};

struct RnWing_t {
    static constexpr std::size_t size = 0xc;
    std::uint8_t _[0xc]; // 0x0 
};

struct FeWeightedNode_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x2]; // 0x0 
    std::uint8_t _[0x2]; // 0x2 
};

struct CollisionDetailLayerInfo_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x18]; // 0x20 
    std::uint8_t _[0x8]; // 0x38 
};

struct FeEffectDesc_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x10]; // 0x10 
};

struct FeSpringIntegrator_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
};

struct FourVectors2D {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x10]; // 0x10 
};

struct FeKelagerBend2_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x6]; // 0x10 
    std::uint8_t _[0x2]; // 0x16 
};

struct vphysics_save_ragdoll_control_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x1]; // 0xc 
    std::uint8_t _[0x1]; // 0xd 
    std::uint8_t _[0x2]; // 0xe 
    std::uint8_t _[0xc]; // 0x10 
    std::uint8_t _[0xc]; // 0x1c 
    std::uint8_t _[0xc]; // 0x28 
    std::uint8_t _[0x4]; // 0x34 
};

struct FeRigidColliderIndices_t {
    static constexpr std::size_t size = 0xa;
    std::uint8_t _[0x2]; // 0x0 
    std::uint8_t _[0x2]; // 0x2 
    std::uint8_t _[0x2]; // 0x4 
    std::uint8_t _[0x2]; // 0x6 
    std::uint8_t _[0x2]; // 0x8 
};

struct FeCollisionPlane_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x2]; // 0x0 
    std::uint8_t _[0x2]; // 0x2 
    std::uint8_t _[0x10]; // 0x4 
    std::uint8_t _[0x4]; // 0x14 
};

struct FeStiffHingeBuild_t {
    static constexpr std::size_t size = 0x1c;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0xc]; // 0x8 
    std::uint8_t _[0x8]; // 0x14 
};

struct FeBoxRigid_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t _[0x20]; // 0x0 
    std::uint8_t _[0x2]; // 0x20 
    std::uint8_t _[0x2]; // 0x22 
    std::uint8_t _[0xc]; // 0x24 
    std::uint8_t _[0x2]; // 0x30 
    std::uint8_t _[0xe]; // 0x32 
};

struct FeMorphLayerDepr_t {
    static constexpr std::size_t size = 0x90;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x18]; // 0x28 
    std::uint8_t _[0x18]; // 0x40 
    std::uint8_t _[0x18]; // 0x58 
    std::uint8_t _[0x18]; // 0x70 
    std::uint8_t _[0x8]; // 0x88 
};

struct FeCtrlOffset_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0x2]; // 0xc 
    std::uint8_t _[0x2]; // 0xe 
};

struct IPhysicsPlayerController {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct FeNodeBase_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x2]; // 0x0 
    std::uint8_t _[0x6]; // 0x2 
    std::uint8_t _[0x2]; // 0x8 
    std::uint8_t _[0x2]; // 0xa 
    std::uint8_t _[0x2]; // 0xc 
    std::uint8_t _[0x2]; // 0xe 
    std::uint8_t _[0x10]; // 0x10 
};

struct FeVertexMapBuild_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x18]; // 0x18 
};

struct CFeVertexMapBuildArray {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x18]; // 0x0 
};

struct FeTri_t {
    static constexpr std::size_t size = 0x1c;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x8]; // 0x14 
};

struct RnHull_t {
    static constexpr std::size_t size = 0xf8;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x18]; // 0x14 
    std::uint8_t _[0xc]; // 0x2c 
    std::uint8_t _[0x30]; // 0x38 
    std::uint8_t _[0x4]; // 0x68 
    std::uint8_t _[0x4]; // 0x6c 
    std::uint8_t _[0x18]; // 0x70 
    std::uint8_t _[0x18]; // 0x88 
    std::uint8_t _[0x8]; // 0xa0 
    std::uint8_t _[0x8]; // 0xa8 
    std::uint8_t _[0x18]; // 0xb0 
    std::uint8_t _[0x18]; // 0xc8 
    std::uint8_t _[0x18]; // 0xe0 
};

struct FeModelSelfCollisionLayer_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x18]; // 0x8 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x10]; // 0x28 
};

struct FeAntiTunnelGroupBuild_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct CovMatrix3 {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
};

struct PhysicsParticleId_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct RnVertex_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t _[0x1]; // 0x0 
};

struct IPhysicsMotionController {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct Dop26_t {
    static constexpr std::size_t size = 0x68;
    std::uint8_t _[0x68]; // 0x0 
};

struct FeDynKinLink_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x2]; // 0x0 
    std::uint8_t _[0x2]; // 0x2 
};

struct RnFace_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t _[0x1]; // 0x0 
};

struct FeSimdPrism_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t _[0x30]; // 0x0 
    std::uint8_t _[0x10]; // 0x30 
};

struct FeCtrlOsOffset_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x2]; // 0x0 
    std::uint8_t _[0x2]; // 0x2 
};

struct FeAntiTunnelProbe_t {
    static constexpr std::size_t size = 0x1c;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x2]; // 0x8 
    std::uint8_t _[0x2]; // 0xa 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
};

struct FeSourceEdge_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct FeTwistConstraint_t {
    static constexpr std::size_t size = 0xc;
    std::uint8_t _[0x2]; // 0x0 
    std::uint8_t _[0x2]; // 0x2 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
};

struct FeNodeWindBase_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x2]; // 0x0 
    std::uint8_t _[0x2]; // 0x2 
    std::uint8_t _[0x2]; // 0x4 
    std::uint8_t _[0x2]; // 0x6 
};

struct FeAxialEdgeBend_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x10]; // 0xc 
    std::uint8_t _[0xc]; // 0x1c 
};

struct FourCovMatrices3 {
    static constexpr std::size_t size = 0x60;
    std::uint8_t _[0x30]; // 0x0 
    std::uint8_t _[0x10]; // 0x30 
    std::uint8_t _[0x10]; // 0x40 
    std::uint8_t _[0x10]; // 0x50 
};

struct constraint_breakableparams_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x8]; // 0xc 
    std::uint8_t _[0x4]; // 0x14 
};

struct FeSphereRigid_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x2]; // 0x12 
    std::uint8_t _[0x2]; // 0x14 
    std::uint8_t _[0xa]; // 0x16 
};

struct CollisionDetailLayerInfo_t__Name_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
};

struct FeBuildTaperedCapsuleRigid_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x8]; // 0x38 
};

struct IPhysicsBody {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct FeSoftParent_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct RnShapeDesc_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x1]; // 0x10 
    std::uint8_t _[0x3]; // 0x11 
    std::uint8_t _[0x4]; // 0x14 
};

struct FeTreeChildren_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct FeRodConstraint_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
};

struct FeFitWeight_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x2]; // 0x4 
    std::uint8_t _[0x2]; // 0x6 
};

struct RnHalfEdge_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x1]; // 0x0 
    std::uint8_t _[0x1]; // 0x1 
    std::uint8_t _[0x1]; // 0x2 
    std::uint8_t _[0x1]; // 0x3 
};

struct FeSimdTri_t {
    static constexpr std::size_t size = 0x80;
    std::uint8_t _[0x30]; // 0x0 
    std::uint8_t _[0x10]; // 0x30 
    std::uint8_t _[0x10]; // 0x40 
    std::uint8_t _[0x10]; // 0x50 
    std::uint8_t _[0x20]; // 0x60 
};

struct VertexPositionColor_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x10]; // 0x0 
};

struct FeFitInfluence_t {
    static constexpr std::size_t size = 0xc;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
};

struct FeHingeLimitBuild_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
};

} // namespace