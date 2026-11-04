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

namespace cs2::animationsystem {

enum class PulseBestOutflowRules_t : std::int32_t {
    SORT_BY_NUMBER_OF_VALID_CRITERIA = 0,
    SORT_BY_OUTFLOW_INDEX = 1,
};

enum class PulseCursorCancelPriority_t : std::int32_t {
    None = 0,
    CancelOnSucceeded = 1,
    SoftCancel = 2,
    HardCancel = 3,
};

enum class PulseMethodCallMode_t : std::int32_t {
    SYNC_WAIT_FOR_COMPLETION = 0,
    ASYNC_FIRE_AND_FORGET = 1,
};

enum class PulseCursorWakePriority_t : std::int32_t {
    WakeElegantly = 0,
    WakeImmediate = 1,
};

enum class ParticleSetMethod_t : std::int32_t {
    PARTICLE_SET_REPLACE_VALUE = 0,
    PARTICLE_SET_SCALE_INITIAL_VALUE = 1,
    PARTICLE_SET_ADD_TO_INITIAL_VALUE = 2,
    PARTICLE_SET_RAMP_CURRENT_VALUE = 3,
    PARTICLE_SET_SCALE_CURRENT_VALUE = 4,
    PARTICLE_SET_ADD_TO_CURRENT_VALUE = 5,
};

enum class SeqCmd_t : std::int32_t {
    SeqCmd_Nop = 0,
    SeqCmd_LinearDelta = 1,
    SeqCmd_FetchFrameRange = 2,
    SeqCmd_Slerp = 3,
    SeqCmd_Add = 4,
    SeqCmd_Subtract = 5,
    SeqCmd_Scale = 6,
    SeqCmd_Copy = 7,
    SeqCmd_Blend = 8,
    SeqCmd_Worldspace = 9,
    SeqCmd_Sequence = 10,
    SeqCmd_FetchCycle = 11,
    SeqCmd_FetchFrame = 12,
    SeqCmd_IKLockInPlace = 13,
    SeqCmd_IKRestoreAll = 14,
    SeqCmd_ReverseSequence = 15,
    SeqCmd_Transform = 16,
};

enum class CNmEventRelevance_t : std::int32_t {
    ClientOnly = 0,
    ServerOnly = 1,
    ClientAndServer = 2,
};

enum class BoneTransformSpace_t : std::int32_t {
    BoneTransformSpace_Invalid = 18446744073709551615,
    BoneTransformSpace_Parent = 0,
    BoneTransformSpace_Model = 1,
    BoneTransformSpace_World = 2,
};

enum class CAnimationGraphVisualizerPrimitiveType : std::int32_t {
    ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Text = 0,
    ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Sphere = 1,
    ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Line = 2,
    ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Pie = 3,
    ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Axis = 4,
};

enum class NmTransitionRule_t : std::int32_t {
    AllowTransition = 0,
    ConditionallyAllowTransition = 1,
    BlockTransition = 2,
};

enum class BinaryNodeTiming : std::int32_t {
    UseChild1 = 0,
    UseChild2 = 1,
    SyncChildren = 2,
};

enum class NmFollowBoneMode_t : std::int32_t {
    RotationAndTranslation = 0,
    RotationOnly = 1,
    TranslationOnly = 2,
};

enum class SolveIKChainAnimNodeDebugSetting : std::int32_t {
    SOLVEIKCHAINANIMNODEDEBUGSETTING_None = 0,
    SOLVEIKCHAINANIMNODEDEBUGSETTING_X_Axis_Circle = 1,
    SOLVEIKCHAINANIMNODEDEBUGSETTING_Y_Axis_Circle = 2,
    SOLVEIKCHAINANIMNODEDEBUGSETTING_Z_Axis_Circle = 3,
    SOLVEIKCHAINANIMNODEDEBUGSETTING_Forward = 4,
    SOLVEIKCHAINANIMNODEDEBUGSETTING_Up = 5,
    SOLVEIKCHAINANIMNODEDEBUGSETTING_Left = 6,
};

enum class CNmParticleEvent__Type_t : std::int32_t {
    Create = 0,
    Create_CFG = 1,
};

enum class ParticleFloatBiasType_t : std::int32_t {
    PF_BIAS_TYPE_INVALID = 18446744073709551615,
    PF_BIAS_TYPE_STANDARD = 0,
    PF_BIAS_TYPE_GAIN = 1,
    PF_BIAS_TYPE_EXPONENTIAL = 2,
    PF_BIAS_TYPE_COUNT = 3,
};

enum class CNmTargetWarpNode__TargetUpdateRule_t : std::int32_t {
    None = 0,
    Recalculate = 1,
    Offset = 2,
    RecalculateOrOffset = 3,
};

enum class SharedMovementGait_t : std::int32_t {
    eInvalid = 18446744073709551615,
    eSlow = 0,
    eMedium = 1,
    eFast = 2,
    eVeryFast = 3,
    eCount = 4,
};

enum class OrientationWarpRootMotionSource_t : std::int32_t {
    eAnimationOrProcedural = 0,
    eAnimationOnly = 1,
    eProceduralOnly = 2,
};

enum class PulseVariableKeysSource_t : std::int32_t {
    PRIVATE = 0,
    CPP = 1,
    VMAP = 2,
    VMDL = 3,
    XML = 4,
    VDATA = 5,
    COUNT = 6,
};

enum class IKTargetCoordinateSystem : std::int32_t {
    IKTARGETCOORDINATESYSTEM_WorldSpace = 0,
    IKTARGETCOORDINATESYSTEM_ModelSpace = 1,
    IKTARGETCOORDINATESYSTEM_COUNT = 2,
};

enum class ParticleFloatType_t : std::int32_t {
    PF_TYPE_INVALID = 18446744073709551615,
    PF_TYPE_LITERAL = 0,
    PF_TYPE_NAMED_VALUE = 1,
    PF_TYPE_RANDOM_UNIFORM = 2,
    PF_TYPE_RANDOM_BIASED = 3,
    PF_TYPE_COLLECTION_AGE = 4,
    PF_TYPE_ENDCAP_AGE = 5,
    PF_TYPE_CONTROL_POINT_COMPONENT = 6,
    PF_TYPE_CONTROL_POINT_CHANGE_AGE = 7,
    PF_TYPE_CONTROL_POINT_SPEED = 8,
    PF_TYPE_CONTROL_POINT_DISTANCE = 9,
    PF_TYPE_PARTICLE_DETAIL_LEVEL = 10,
    PF_TYPE_CONCURRENT_DEF_COUNT = 11,
    PF_TYPE_CLOSEST_CAMERA_DISTANCE = 12,
    PF_TYPE_SNAPSHOT_COUNT = 13,
    PF_TYPE_SNAPSHOT_CHANGED = 14,
    PF_TYPE_CONTROL_POINT_IS_SET = 15,
    PF_TYPE_RENDERER_CAMERA_DISTANCE = 16,
    PF_TYPE_RENDERER_CAMERA_DOT_PRODUCT = 17,
    PF_TYPE_PARTICLE_NOISE = 18,
    PF_TYPE_PARTICLE_AGE = 19,
    PF_TYPE_PARTICLE_AGE_NORMALIZED = 20,
    PF_TYPE_PARTICLE_FLOAT = 21,
    PF_TYPE_PARTICLE_INITIAL_FLOAT = 22,
    PF_TYPE_PARTICLE_VECTOR_COMPONENT = 23,
    PF_TYPE_PARTICLE_INITIAL_VECTOR_COMPONENT = 24,
    PF_TYPE_PARTICLE_SPEED = 25,
    PF_TYPE_PARTICLE_NUMBER = 26,
    PF_TYPE_PARTICLE_NUMBER_NORMALIZED = 27,
    PF_TYPE_PARTICLE_ROPE_SEGMENT = 28,
    PF_TYPE_PARTICLE_ROPE_SEGMENT_NORMALIZED = 29,
    PF_TYPE_PARTICLE_SCREENSPACE_CAMERA_DISTANCE = 30,
    PF_TYPE_PARTICLE_SCREENSPACE_CAMERA_DOT_PRODUCT = 31,
    PF_TYPE_COUNT = 32,
};

enum class CNmFloatAngleMathNode__Operation_t : std::int32_t {
    ClampTo180 = 0,
    ClampTo360 = 1,
    FlipHemisphere = 2,
    FlipHemisphereNegate = 3,
};

enum class VPhysXAggregateData_t__VPhysXFlagEnum_t : std::int32_t {
    FLAG_IS_POLYSOUP_GEOMETRY = 1,
    FLAG_LEVEL_COLLISION = 16,
    FLAG_IGNORE_SCALE_OBSOLETE_DO_NOT_USE = 32,
};

enum class CNmRootMotionOverrideNode__OverrideFlags_t : std::int32_t {
    AllowMoveX = 0,
    AllowMoveY = 1,
    AllowMoveZ = 2,
    AllowFacingPitch = 3,
    ListenForEvents = 4,
};

enum class NmEasingOperation_t : std::int32_t {
    Linear = 0,
    InQuad = 1,
    OutQuad = 2,
    InOutQuad = 3,
    InCubic = 4,
    OutCubic = 5,
    InOutCubic = 6,
    InQuart = 7,
    OutQuart = 8,
    InOutQuart = 9,
    InQuint = 10,
    OutQuint = 11,
    InOutQuint = 12,
    InSine = 13,
    OutSine = 14,
    InOutSine = 15,
    InExpo = 16,
    OutExpo = 17,
    InOutExpo = 18,
    InCirc = 19,
    OutCirc = 20,
    InOutCirc = 21,
    None = 22,
};

enum class EIKEndEffectorRotationFixUpMode : std::int32_t {
    None = 0,
    MatchTargetOrientation = 1,
    LookAtTargetForward = 2,
    MaintainParentOrientation = 3,
    Count = 4,
};

enum class MatterialAttributeTagType_t : std::int32_t {
    MATERIAL_ATTRIBUTE_TAG_VALUE = 0,
    MATERIAL_ATTRIBUTE_TAG_COLOR = 1,
};

enum class PFNoiseTurbulence_t : std::int32_t {
    PF_NOISE_TURB_NONE = 0,
    PF_NOISE_TURB_HIGHLIGHT = 1,
    PF_NOISE_TURB_FEEDBACK = 2,
    PF_NOISE_TURB_LOOPY = 3,
    PF_NOISE_TURB_CONTRAST = 4,
    PF_NOISE_TURB_ALTERNATE = 5,
};

enum class NmTargetWarpAlgorithm_t : std::int32_t {
    Lerp = 0,
    Hermite = 1,
    HermiteFeaturePreserving = 2,
    Bezier = 3,
};

enum class ParticleColorBlendMode_t : std::int32_t {
    PARTICLEBLEND_DEFAULT = 0,
    PARTICLEBLEND_OVERLAY = 1,
    PARTICLEBLEND_DARKEN = 2,
    PARTICLEBLEND_LIGHTEN = 3,
    PARTICLEBLEND_MULTIPLY = 4,
};

enum class ParticleColorBlendType_t : std::int32_t {
    PARTICLE_COLOR_BLEND_MULTIPLY = 0,
    PARTICLE_COLOR_BLEND_MULTIPLY2X = 1,
    PARTICLE_COLOR_BLEND_DIVIDE = 2,
    PARTICLE_COLOR_BLEND_ADD = 3,
    PARTICLE_COLOR_BLEND_SUBTRACT = 4,
    PARTICLE_COLOR_BLEND_MOD2X = 5,
    PARTICLE_COLOR_BLEND_SCREEN = 6,
    PARTICLE_COLOR_BLEND_MAX = 7,
    PARTICLE_COLOR_BLEND_MIN = 8,
    PARTICLE_COLOR_BLEND_REPLACE = 9,
    PARTICLE_COLOR_BLEND_AVERAGE = 10,
    PARTICLE_COLOR_BLEND_NEGATE = 11,
    PARTICLE_COLOR_BLEND_LUMINANCE = 12,
};

enum class NmTransitionRuleCondition_t : std::int32_t {
    AnyAllowed = 0,
    FullyAllowed = 1,
    ConditionallyAllowed = 2,
    Blocked = 3,
};

enum class ModelMeshBufferUsage_t : std::int32_t {
    MESH_BUFFER_USAGE_NONE = 0,
    MESH_BUFFER_USAGE_VB = 1,
    MESH_BUFFER_USAGE_IB = 2,
    MESH_BUFFER_USAGE_ADJACENCY = 4,
    MESH_BUFFER_USAGE_MESHLET_TRIS = 8,
    MESH_BUFFER_USAGE_RT_PROXY = 16,
    MESH_BUFFER_USAGE_VERTEX_ALBEDO = 32,
    MESH_BUFFER_USAGE_VERTEX_EMISSIVE = 64,
    MESH_BUFFER_USAGE_MESHLETS = 128,
    MESH_BUFFER_USAGE_ALIAS_TABLE = 256,
};

enum class NmGraphDebugMode_t : std::int32_t {
    Off = 0,
    On = 1,
};

enum class TargetWarpTimingMethod : std::int32_t {
    ReachDestinationOnRootMotionEnd = 0,
    ReachDestinationOnWarpTagEnd = 1,
};

enum class ScriptedMoveTo_t : std::int32_t {
    eWait = 0,
    eMoveWithGait = 3,
    eTeleport = 4,
    eWaitFacing = 5,
    eObsoleteBackCompat1 = 1,
    eObsoleteBackCompat2 = 2,
};

enum class EDemoBoneSelectionMode : std::int32_t {
    CaptureAllBones = 0,
    CaptureSelectedBones = 1,
};

enum class PulseDurationStringFormat_t : std::int32_t {
    MM_SS_LEADING_ZERO = 0,
};

enum class EPulseGraphExecutionHistoryFlag : std::int32_t {
    NO_FLAGS = 0,
    CURSOR_ADD_TAG = 1,
    CURSOR_REMOVE_TAG = 2,
    CURSOR_RETIRED = 4,
    CURSOR_CREATE_CHILD = 8,
    REQUIREMENT_PASS = 16,
    REQUIREMENT_FAIL = 32,
    CALL_TO_PULSE = 64,
    RETURN = 128,
};

enum class StepPhase : std::int32_t {
    StepPhase_OnGround = 0,
    StepPhase_InAir = 1,
};

enum class FlexOpCode_t : std::int32_t {
    FLEX_OP_CONST = 1,
    FLEX_OP_FETCH1 = 2,
    FLEX_OP_FETCH2 = 3,
    FLEX_OP_ADD = 4,
    FLEX_OP_SUB = 5,
    FLEX_OP_MUL = 6,
    FLEX_OP_DIV = 7,
    FLEX_OP_NEG = 8,
    FLEX_OP_EXP = 9,
    FLEX_OP_OPEN = 10,
    FLEX_OP_CLOSE = 11,
    FLEX_OP_COMMA = 12,
    FLEX_OP_MAX = 13,
    FLEX_OP_MIN = 14,
    FLEX_OP_2WAY_0 = 15,
    FLEX_OP_2WAY_1 = 16,
    FLEX_OP_NWAY = 17,
    FLEX_OP_COMBO = 18,
    FLEX_OP_DOMINATE = 19,
    FLEX_OP_DME_LOWER_EYELID = 20,
    FLEX_OP_DME_UPPER_EYELID = 21,
    FLEX_OP_SQRT = 22,
    FLEX_OP_REMAPVALCLAMPED = 23,
    FLEX_OP_SIN = 24,
    FLEX_OP_COS = 25,
    FLEX_OP_ABS = 26,
};

enum class NmCachedValueMode_t : std::int32_t {
    OnEntry = 0,
    OnExit = 1,
};

enum class AnimNodeNetworkMode : std::int32_t {
    ServerAuthoritative = 0,
    ClientSimulate = 1,
};

enum class VPhysXBodyPart_t__VPhysXFlagEnum_t : std::int32_t {
    FLAG_STATIC = 1,
    FLAG_KINEMATIC = 2,
    FLAG_JOINT = 4,
    FLAG_MASS = 8,
    FLAG_ALWAYS_DYNAMIC_ON_CLIENT = 16,
    FLAG_DISABLE_CCD = 32,
};

enum class AnimParamType_t : std::int32_t {
    ANIMPARAM_UNKNOWN = 0,
    ANIMPARAM_BOOL = 1,
    ANIMPARAM_ENUM = 2,
    ANIMPARAM_INT = 3,
    ANIMPARAM_FLOAT = 4,
    ANIMPARAM_VECTOR = 5,
    ANIMPARAM_QUATERNION = 6,
    ANIMPARAM_GLOBALSYMBOL = 7,
    ANIMPARAM_COUNT = 8,
};

enum class NmEasingFunction_t : std::int32_t {
    Linear = 0,
    Quad = 1,
    Cubic = 2,
    Quart = 3,
    Quint = 4,
    Sine = 5,
    Expo = 6,
    Circ = 7,
    Back = 8,
};

enum class ParticleModelType_t : std::int32_t {
    PM_TYPE_INVALID = 0,
    PM_TYPE_NAMED_VALUE_MODEL = 1,
    PM_TYPE_NAMED_VALUE_EHANDLE = 2,
    PM_TYPE_CONTROL_POINT = 3,
    PM_TYPE_COUNT = 4,
};

enum class IKTargetSource : std::int32_t {
    IKTARGETSOURCE_Bone = 0,
    IKTARGETSOURCE_AnimgraphParameter = 1,
    IKTARGETSOURCE_COUNT = 2,
};

enum class PermModelInfo_t__FlagEnum : std::int32_t {
    FLAG_TRANSLUCENT = 1,
    FLAG_TRANSLUCENT_TWO_PASS = 2,
    FLAG_MODEL_IS_RUNTIME_COMBINED = 4,
    FLAG_SOURCE1_IMPORT = 8,
    FLAG_MODEL_PART_CHILD = 16,
    FLAG_NAV_GEN_NONE = 32,
    FLAG_NAV_GEN_HULL = 64,
    FLAG_NO_FORCED_FADE = 2048,
    FLAG_HAS_SKINNED_MESHES = 1024,
    FLAG_DO_NOT_CAST_SHADOWS = 131072,
    FLAG_FORCE_PHONEME_CROSSFADE = 4096,
    FLAG_NO_ANIM_EVENTS = 1048576,
    FLAG_ANIMATION_DRIVEN_FLEXES = 2097152,
    FLAG_IMPLICIT_BIND_POSE_SEQUENCE = 4194304,
    FLAG_MODEL_DOC = 8388608,
};

enum class CNmFloatMathNode__Operator_t : std::int32_t {
    Add = 0,
    Sub = 1,
    Mul = 2,
    Div = 3,
    Mod = 4,
    Abs = 5,
    Negate = 6,
    Floor = 7,
    Ceiling = 8,
    IntegerPart = 9,
    FractionalPart = 10,
    InverseFractionalPart = 11,
};

enum class CNmSyncEventIndexConditionNode__TriggerMode_t : std::int32_t {
    ExactlyAtEventIndex = 0,
    GreaterThanEqualToEventIndex = 1,
};

enum class ParticleFloatRoundType_t : std::int32_t {
    PF_ROUND_TYPE_INVALID = 18446744073709551615,
    PF_ROUND_TYPE_NEAREST = 0,
    PF_ROUND_TYPE_FLOOR = 1,
    PF_ROUND_TYPE_CEIL = 2,
    PF_ROUND_TYPE_COUNT = 3,
};

enum class PFNoiseType_t : std::int32_t {
    PF_NOISE_TYPE_PERLIN = 0,
    PF_NOISE_TYPE_SIMPLEX = 1,
    PF_NOISE_TYPE_WORLEY = 2,
    PF_NOISE_TYPE_CURL = 3,
};

enum class ParticleDirectionNoiseType_t : std::int32_t {
    PARTICLE_DIR_NOISE_PERLIN = 0,
    PARTICLE_DIR_NOISE_CURL = 1,
    PARTICLE_DIR_NOISE_WORLEY_BASIC = 2,
};

enum class AnimParamNetworkSetting : std::int32_t {
    Auto = 0,
    AlwaysNetwork = 1,
    NeverNetwork = 2,
};

enum class MorphFlexControllerRemapType_t : std::int32_t {
    MORPH_FLEXCONTROLLER_REMAP_PASSTHRU = 0,
    MORPH_FLEXCONTROLLER_REMAP_2WAY = 1,
    MORPH_FLEXCONTROLLER_REMAP_NWAY = 2,
    MORPH_FLEXCONTROLLER_REMAP_EYELID = 3,
};

enum class MeshDrawPrimitiveFlags_t : std::int32_t {
    MESH_DRAW_FLAGS_NONE = 0,
    MESH_DRAW_FLAGS_USE_SHADOW_FAST_PATH = 1,
    MESH_DRAW_FLAGS_USE_COMPRESSED_NORMAL_TANGENT = 2,
    MESH_DRAW_INPUT_LAYOUT_IS_NOT_MATCHED_TO_MATERIAL = 8,
    MESH_DRAW_FLAGS_USE_COMPRESSED_PER_VERTEX_LIGHTING = 16,
    MESH_DRAW_FLAGS_USE_UNCOMPRESSED_PER_VERTEX_LIGHTING = 32,
    MESH_DRAW_FLAGS_CAN_BATCH_WITH_DYNAMIC_SHADER_CONSTANTS = 64,
    MESH_DRAW_FLAGS_DRAW_LAST = 128,
};

enum class TargetWarpAngleMode_t : std::int32_t {
    eFacingHeading = 0,
    eMoveHeading = 1,
};

enum class NmIKBlendMode_t : std::int32_t {
    Effector = 0,
    Pose = 1,
};

enum class ModelBoneFlexComponent_t : std::int32_t {
    MODEL_BONE_FLEX_INVALID = 18446744073709551615,
    MODEL_BONE_FLEX_TX = 0,
    MODEL_BONE_FLEX_TY = 1,
    MODEL_BONE_FLEX_TZ = 2,
};

enum class CNmStateNode__TimedEvent_t__Comparison_t : std::int32_t {
    LessThanEqual = 0,
    GreaterThanEqual = 1,
};

enum class PoseType_t : std::int32_t {
    POSETYPE_STATIC = 0,
    POSETYPE_DYNAMIC = 1,
    POSETYPE_INVALID = 255,
};

enum class CNmClothEvent__Type_t : std::int32_t {
    Stiffen = 0,
    Effect = 1,
};

enum class CNmRootMotionData__SamplingMode_t : std::int32_t {
    Delta = 0,
    WorldSpace = 1,
};

enum class NmEventConditionRules_t : std::int32_t {
    LimitSearchToSourceState = 0,
    IgnoreInactiveEvents = 1,
    PreferHighestWeight = 2,
    PreferHighestProgress = 3,
    OperatorOr = 4,
    OperatorAnd = 5,
    SearchOnlyGraphEvents = 6,
    SearchOnlyAnimEvents = 7,
    SearchBothGraphAndAnimEvents = 8,
};

enum class AnimationType_t : std::int32_t {
    ANIMATION_TYPE_FIXED_RATE = 0,
    ANIMATION_TYPE_FIT_LIFETIME = 1,
    ANIMATION_TYPE_MANUAL_FRAMES = 2,
};

enum class AnimValueSource : std::int32_t {
    MoveHeading = 0,
    MoveSpeed = 1,
    ForwardSpeed = 2,
    StrafeSpeed = 3,
    FacingHeading = 4,
    LookHeading = 5,
    LookHeadingNormalized = 6,
    LookPitch = 7,
    LookDistance = 8,
    Parameter = 9,
    WayPointHeading = 10,
    WayPointDistance = 11,
    BoundaryRadius = 12,
    TargetMoveHeading = 13,
    TargetMoveSpeed = 14,
    AccelerationHeading = 15,
    AccelerationSpeed = 16,
    SlopeHeading = 17,
    SlopeAngle = 18,
    SlopePitch = 19,
    SlopeYaw = 20,
    GoalDistance = 21,
    AccelerationLeftRight = 22,
    AccelerationFrontBack = 23,
    RootMotionSpeed = 24,
    RootMotionTurnSpeed = 25,
    MoveHeadingRelativeToLookHeading = 26,
    MaxMoveSpeed = 27,
    FingerCurl_Thumb = 28,
    FingerCurl_Index = 29,
    FingerCurl_Middle = 30,
    FingerCurl_Ring = 31,
    FingerCurl_Pinky = 32,
    FingerSplay_Thumb_Index = 33,
    FingerSplay_Index_Middle = 34,
    FingerSplay_Middle_Ring = 35,
    FingerSplay_Ring_Pinky = 36,
};

enum class CNmTimeConditionNode__Operator_t : std::int32_t {
    LessThan = 0,
    LessThanEqual = 1,
    GreaterThan = 2,
    GreaterThanEqual = 3,
};

enum class LinearRootMotionBlendMode_t : std::int32_t {
    LERP = 0,
    NLERP = 1,
    SLERP = 2,
};

enum class RagdollPoseControl : std::int32_t {
    Absolute = 0,
};

enum class IKSolverType : std::int32_t {
    IKSOLVER_Perlin = 0,
    IKSOLVER_TwoBone = 1,
    IKSOLVER_Fabrik = 2,
    IKSOLVER_DogLeg3Bone = 3,
    IKSOLVER_CCD = 4,
    IKSOLVER_COUNT = 5,
};

enum class TargetWarpCorrectionMethod : std::int32_t {
    ScaleMotion = 0,
    AddCorrectionDelta = 1,
};

enum class TargetSelectorAngleMode_t : std::int32_t {
    eFacingHeading = 0,
    eMoveHeading = 1,
};

enum class Blend2DMode : std::int32_t {
    Blend2DMode_General = 0,
    Blend2DMode_Directional = 1,
};

enum class HandshakeTagState_t : std::int32_t {
    eInactive = 0,
    eActive = 1,
    eMomentarilyInactive = 2,
};

enum class ChoiceChangeMethod : std::int32_t {
    OnReset = 0,
    OnCycleEnd = 1,
    OnResetOrCycleEnd = 2,
};

enum class ChoiceBlendMethod : std::int32_t {
    SingleBlendTime = 0,
    PerChoiceBlendTimes = 1,
};

enum class VPhysXConstraintParams_t__EnumFlags0_t : std::int32_t {
    FLAG0_SHIFT_INTERPENETRATE = 0,
    FLAG0_SHIFT_CONSTRAIN = 1,
    FLAG0_SHIFT_BREAKABLE_FORCE = 2,
    FLAG0_SHIFT_BREAKABLE_TORQUE = 3,
};

enum class ParticleFloatMapType_t : std::int32_t {
    PF_MAP_TYPE_INVALID = 18446744073709551615,
    PF_MAP_TYPE_DIRECT = 0,
    PF_MAP_TYPE_MULT = 1,
    PF_MAP_TYPE_REMAP = 2,
    PF_MAP_TYPE_REMAP_BIASED = 3,
    PF_MAP_TYPE_CURVE = 4,
    PF_MAP_TYPE_NOTCHED = 5,
    PF_MAP_TYPE_ROUND = 6,
    PF_MAP_TYPE_MIN = 7,
    PF_MAP_TYPE_MAX = 8,
    PF_MAP_TYPE_MOD = 9,
    PF_MAP_TYPE_COUNT = 10,
};

enum class AnimParamVectorType_t : std::int32_t {
    ANIMPARAM_VECTOR_TYPE_NONE = 0,
    ANIMPARAM_VECTOR_TYPE_POSITION_WS = 1,
    ANIMPARAM_VECTOR_TYPE_POSITION_LS = 2,
    ANIMPARAM_VECTOR_TYPE_DIRECTION_WS = 3,
    ANIMPARAM_VECTOR_TYPE_DIRECTION_LS = 4,
};

enum class CNmCurrentSyncEventNode__InfoType_t : std::int32_t {
    IndexAndPercentage = 0,
    IndexOnly = 1,
    PercentageOnly = 2,
};

enum class BlendKeyType : std::int32_t {
    BlendKey_UserValue = 0,
    BlendKey_Velocity = 1,
    BlendKey_Distance = 2,
    BlendKey_RemainingDistance = 3,
};

enum class StateActionBehavior : std::int32_t {
    STATETAGBEHAVIOR_ACTIVE_WHILE_CURRENT = 0,
    STATETAGBEHAVIOR_FIRE_ON_ENTER = 1,
    STATETAGBEHAVIOR_FIRE_ON_EXIT = 2,
    STATETAGBEHAVIOR_FIRE_ON_ENTER_AND_EXIT = 3,
    STATETAGBEHAVIOR_ACTIVE_WHILE_FULLY_BLENDED = 4,
};

enum class NmRootMotionBlendMode_t : std::int32_t {
    Blend = 0,
    Additive = 1,
    IgnoreSource = 2,
    IgnoreTarget = 3,
};

enum class NmFootPhaseCondition_t : std::int32_t {
    LeftFootDown = 0,
    LeftFootPassing = 1,
    LeftPhase = 4,
    RightFootDown = 2,
    RightFootPassing = 3,
    RightPhase = 5,
    None = 6,
};

enum class ModelSkeletonData_t__BoneFlags_t : std::int32_t {
    FLAG_NO_BONE_FLAGS = 0,
    FLAG_BONEFLEXDRIVER = 4,
    FLAG_CLOTH = 8,
    FLAG_PHYSICS = 16,
    FLAG_ATTACHMENT = 32,
    FLAG_ANIMATION = 64,
    FLAG_MESH = 128,
    FLAG_HITBOX = 256,
    FLAG_BONE_USED_BY_VERTEX_LOD0 = 1024,
    FLAG_BONE_USED_BY_VERTEX_LOD1 = 2048,
    FLAG_BONE_USED_BY_VERTEX_LOD2 = 4096,
    FLAG_BONE_USED_BY_VERTEX_LOD3 = 8192,
    FLAG_BONE_USED_BY_VERTEX_LOD4 = 16384,
    FLAG_BONE_USED_BY_VERTEX_LOD5 = 32768,
    FLAG_BONE_USED_BY_VERTEX_LOD6 = 65536,
    FLAG_BONE_USED_BY_VERTEX_LOD7 = 131072,
    FLAG_BONE_MERGE_READ = 262144,
    FLAG_BONE_MERGE_WRITE = 524288,
    FLAG_ALL_BONE_FLAGS = 1048575,
    BLEND_PREALIGNED = 1048576,
    FLAG_RIGIDLENGTH = 2097152,
    FLAG_PROCEDURAL = 4194304,
};

enum class CNmOrientationWarpNode__AlignmentMode_t : std::int32_t {
    MovementDirection = 0,
    AnimationEndFacing = 1,
};

enum class GPUParticleCollisionMode_t : std::int32_t {
    PARTICLE_GPU_COLLISION_MODE_RT = 0,
    PARTICLE_GPU_COLLISION_MODE_DEPTH = 1,
    PARTICLE_GPU_COLLISION_MODE_HYBRID = 2,
};

enum class MorphBundleType_t : std::int32_t {
    MORPH_BUNDLE_TYPE_NONE = 0,
    MORPH_BUNDLE_TYPE_POSITION_SPEED = 1,
    MORPH_BUNDLE_TYPE_NORMAL_WRINKLE = 2,
    MORPH_BUNDLE_TYPE_COUNT = 3,
};

enum class CNmIDComparisonNode__Comparison_t : std::int32_t {
    Matches = 0,
    DoesntMatch = 1,
};

enum class NmPoseBlendMode_t : std::int32_t {
    Overlay = 0,
    Additive = 1,
    ModelSpace = 2,
};

enum class ParticleFloatInputMode_t : std::int32_t {
    PF_INPUT_MODE_INVALID = 18446744073709551615,
    PF_INPUT_MODE_CLAMPED = 0,
    PF_INPUT_MODE_LOOPED = 1,
    PF_INPUT_MODE_COUNT = 2,
};

enum class ResetCycleOption : std::int32_t {
    Beginning = 0,
    SameCycleAsSource = 1,
    InverseSourceCycle = 2,
    FixedValue = 3,
    SameTimeAsSource = 4,
};

enum class CNmVectorInfoNode__Info_t : std::int32_t {
    X = 0,
    Y = 1,
    Z = 2,
    Length = 3,
    AngleHorizontal = 4,
    AngleVertical = 5,
};

enum class TagActionStatus : std::int32_t {
    Inactive = 0,
    Active = 1,
    Fired = 2,
};

enum class IKChannelMode : std::int32_t {
    TwoBone = 0,
    TwoBone_Translate = 1,
    OneBone = 2,
    OneBone_Translate = 3,
};

enum class NmGraphValueType_t : std::int32_t {
    Unknown = 0,
    Bool = 1,
    ID = 2,
    Float = 3,
    Vector = 4,
    Target = 5,
    BoneMask = 6,
    Pose = 7,
    Special = 8,
};

enum class ParticleFloatRandomMode_t : std::int32_t {
    PF_RANDOM_MODE_INVALID = 18446744073709551615,
    PF_RANDOM_MODE_CONSTANT = 0,
    PF_RANDOM_MODE_VARYING = 1,
    PF_RANDOM_MODE_COUNT = 2,
};

enum class PulseValueType_t : std::int32_t {
    PVAL_VOID = 18446744073709551615,
    PVAL_BOOL = 0,
    PVAL_INT = 1,
    PVAL_FLOAT = 2,
    PVAL_STRING = 3,
    PVAL_VEC2 = 4,
    PVAL_VEC3 = 5,
    PVAL_QANGLE = 6,
    PVAL_VEC3_WORLDSPACE = 7,
    PVAL_VEC4 = 8,
    PVAL_TRANSFORM = 9,
    PVAL_TRANSFORM_WORLDSPACE = 10,
    PVAL_COLOR_RGB = 11,
    PVAL_GAMETIME = 12,
    PVAL_EHANDLE = 13,
    PVAL_RESOURCE = 14,
    PVAL_RESOURCE_NAME = 15,
    PVAL_SNDEVT_GUID = 16,
    PVAL_SNDEVT_NAME = 17,
    PVAL_ENTITY_NAME = 18,
    PVAL_OPAQUE_HANDLE = 19,
    PVAL_TYPESAFE_INT = 20,
    PVAL_MODEL_MATERIAL_GROUP = 21,
    PVAL_CURSOR_FLOW = 22,
    PVAL_VARIANT = 23,
    PVAL_UNKNOWN = 24,
    PVAL_SCHEMA_ENUM = 25,
    PVAL_PANORAMA_PANEL_HANDLE = 26,
    PVAL_TEST_HANDLE = 27,
    PVAL_ARRAY = 28,
    PVAL_TYPESAFE_INT64 = 29,
    PVAL_PARTICLE_EHANDLE = 30,
    PVAL_ANIM_SEQUENCE = 31,
    PVAL_VDATA_CHOICE = 32,
    PVAL_COUNT = 33,
};

enum class PFNoiseModifier_t : std::int32_t {
    PF_NOISE_MODIFIER_NONE = 0,
    PF_NOISE_MODIFIER_LINES = 1,
    PF_NOISE_MODIFIER_CLUMPS = 2,
    PF_NOISE_MODIFIER_RINGS = 3,
};

enum class ParticleVecType_t : std::int32_t {
    PVEC_TYPE_INVALID = 18446744073709551615,
    PVEC_TYPE_LITERAL = 0,
    PVEC_TYPE_LITERAL_COLOR = 1,
    PVEC_TYPE_NAMED_VALUE = 2,
    PVEC_TYPE_PARTICLE_VECTOR = 3,
    PVEC_TYPE_PARTICLE_INITIAL_VECTOR = 4,
    PVEC_TYPE_PARTICLE_VELOCITY = 5,
    PVEC_TYPE_PARTICLE_GRAVITY = 6,
    PVEC_TYPE_CP_VALUE = 7,
    PVEC_TYPE_CP_RELATIVE_POSITION = 8,
    PVEC_TYPE_CP_RELATIVE_DIR = 9,
    PVEC_TYPE_CP_RELATIVE_RANDOM_DIR = 10,
    PVEC_TYPE_FLOAT_COMPONENTS = 11,
    PVEC_TYPE_FLOAT_INTERP_CLAMPED = 12,
    PVEC_TYPE_FLOAT_INTERP_OPEN = 13,
    PVEC_TYPE_FLOAT_INTERP_GRADIENT = 14,
    PVEC_TYPE_RANDOM_UNIFORM = 15,
    PVEC_TYPE_RANDOM_UNIFORM_OFFSET = 16,
    PVEC_TYPE_CP_DELTA = 17,
    PVEC_TYPE_CLOSEST_CAMERA_POSITION = 18,
    PVEC_TYPE_COUNT = 19,
};

enum class NmFootPhase_t : std::int32_t {
    LeftFootDown = 0,
    RightFootPassing = 1,
    RightFootDown = 2,
    LeftFootPassing = 3,
    None = 4,
};

enum class CNmTargetInfoNode__Info_t : std::int32_t {
    AngleHorizontal = 0,
    AngleVertical = 1,
    Distance = 2,
    DistanceHorizontalOnly = 3,
    DistanceVerticalOnly = 4,
    DeltaOrientationX = 5,
    DeltaOrientationY = 6,
    DeltaOrientationZ = 7,
};

enum class FootstepLandedFootSoundType_t : std::int32_t {
    FOOTSOUND_Left = 0,
    FOOTSOUND_Right = 1,
    FOOTSOUND_UseOverrideSound = 2,
};

enum class FootLockSubVisualization : std::int32_t {
    FOOTLOCKSUBVISUALIZATION_ReachabilityAnalysis = 0,
    FOOTLOCKSUBVISUALIZATION_IKSolve = 1,
};

enum class CNmSoundEvent__Position_t : std::int32_t {
    None = 0,
    World = 1,
    EntityPos = 2,
    EntityEyePos = 3,
    EntityAttachment = 4,
};

enum class FootstepJumpPhase_t : std::int32_t {
    Unknown = 0,
    NotJumping = 1,
    Jumping = 2,
    Landing = 4,
};

enum class NmFrameSnapEventMode_t : std::int32_t {
    Floor = 0,
    Round = 1,
};

enum class FootPinningTimingSource : std::int32_t {
    FootMotion = 0,
    Tag = 1,
    Parameter = 2,
};

enum class DampingSpeedFunction : std::int32_t {
    NoDamping = 0,
    Constant = 1,
    Spring = 2,
    AsymmetricSpring = 3,
};

enum class PulseApiFeature_t : std::int32_t {
    AF_NONE = 0,
    AF_ENTITIES = 1,
    AF_PANORAMA = 2,
    AF_PARTICLES = 8,
    AF_FAKE_ENTITIES = 16,
    AF_SELECTORS_WITHOUT_REQUIREMENTS = 32,
};

enum class AnimationProcessingType_t : std::int32_t {
    ANIMATION_PROCESSING_SERVER_SIMULATION = 0,
    ANIMATION_PROCESSING_CLIENT_SIMULATION = 1,
    ANIMATION_PROCESSING_CLIENT_PREDICTION = 2,
    ANIMATION_PROCESSING_CLIENT_INTERPOLATION = 3,
    ANIMATION_PROCESSING_CLIENT_RENDER = 4,
    ANIMATION_PROCESSING_MAX = 5,
};

enum class JiggleBoneSimSpace : std::int32_t {
    SimSpace_Local = 0,
    SimSpace_Model = 1,
    SimSpace_World = 2,
};

enum class StanceOverrideMode : std::int32_t {
    Sequence = 0,
    Node = 1,
};

enum class IkEndEffectorType : std::int32_t {
    IkEndEffector_Attachment = 0,
    IkEndEffector_Bone = 1,
};

enum class AnimScriptType : std::int32_t {
    ANIMSCRIPT_TYPE_INVALID = 18446744073709551615,
    ANIMSCRIPT_FUSE_GENERAL = 0,
    ANIMSCRIPT_FUSE_STATEMACHINE = 1,
};

enum class CNmTimeConditionNode__ComparisonType_t : std::int32_t {
    PercentageThroughState = 0,
    PercentageThroughSyncEvent = 1,
    ElapsedTime = 2,
};

enum class SeqPoseSetting_t : std::int32_t {
    SEQ_POSE_SETTING_CONSTANT = 0,
    SEQ_POSE_SETTING_ROTATION = 1,
    SEQ_POSE_SETTING_POSITION = 2,
    SEQ_POSE_SETTING_VELOCITY = 3,
};

enum class AnimParamButton_t : std::int32_t {
    ANIMPARAM_BUTTON_NONE = 0,
    ANIMPARAM_BUTTON_DPAD_UP = 1,
    ANIMPARAM_BUTTON_DPAD_RIGHT = 2,
    ANIMPARAM_BUTTON_DPAD_DOWN = 3,
    ANIMPARAM_BUTTON_DPAD_LEFT = 4,
    ANIMPARAM_BUTTON_A = 5,
    ANIMPARAM_BUTTON_B = 6,
    ANIMPARAM_BUTTON_X = 7,
    ANIMPARAM_BUTTON_Y = 8,
    ANIMPARAM_BUTTON_LEFT_SHOULDER = 9,
    ANIMPARAM_BUTTON_RIGHT_SHOULDER = 10,
    ANIMPARAM_BUTTON_LTRIGGER = 11,
    ANIMPARAM_BUTTON_RTRIGGER = 12,
};

enum class SelectorTagBehavior_t : std::int32_t {
    SelectorTagBehavior_OnWhileCurrent = 0,
    SelectorTagBehavior_OffWhenFinished = 1,
    SelectorTagBehavior_OffBeforeFinished = 2,
};

enum class HandshakeTagType_t : std::int32_t {
    eInvalid = 18446744073709551615,
    eTask = 0,
    eMovement = 1,
    eCount = 2,
};

enum class OrientationWarpTargetOffsetMode_t : std::int32_t {
    eLiteralValue = 0,
    eParameter = 1,
    eAnimationMovementHeading = 2,
    eAnimationMovementHeadingAtEnd = 3,
};

enum class OrientationWarpMode_t : std::int32_t {
    eInvalid = 0,
    eAngle = 1,
    eWorldPosition = 2,
};

enum class PulseInstructionCode_t : std::int32_t {
    INVALID = 0,
    IMMEDIATE_HALT = 1,
    RETURN_VOID = 2,
    RETURN_VALUE = 3,
    LOOP_BREAK = 4,
    NOP = 5,
    JUMP = 6,
    JUMP_COND = 7,
    CHUNK_LEAP = 8,
    CHUNK_LEAP_COND = 9,
    PULSE_CALL_SYNC = 10,
    PULSE_CALL_ASYNC_FIRE = 11,
    CREATE_CHILD_CURSOR_OUTFLOW = 12,
    CELL_INVOKE = 13,
    LIBRARY_INVOKE = 14,
    SET_VAR = 15,
    GET_VAR = 16,
    GET_VAR_DETACH = 17,
    DETACH_REGISTER = 18,
    SET_VAR_ARRAY_ELEMENT_1D = 19,
    SET_VAR_OBSERVABLE = 20,
    GET_CONST = 21,
    GET_ARRAY_ELEMENT = 22,
    GET_DOMAIN_VALUE = 23,
    COPY = 24,
    NOT = 25,
    NEGATE = 26,
    ADD = 27,
    SUB = 28,
    MUL = 29,
    DIV = 30,
    MOD = 31,
    LT = 32,
    LTE = 33,
    EQ = 34,
    NE = 35,
    AND = 36,
    OR = 37,
    SCALE = 38,
    SCALE_INV = 39,
    ELEMENT_ACCESS = 40,
    CONVERT_VALUE = 41,
    REINTERPRET_INSTANCE = 42,
    GET_BLACKBOARD_REFERENCE = 43,
    SET_BLACKBOARD_REFERENCE = 44,
    GET_TEMPVAR = 45,
    SET_TEMPVAR = 46,
    SET_TEMPVAR_OBSERVABLE = 47,
    LAST_SERIALIZED_CODE = 48,
    NEGATE_INT = 49,
    NEGATE_FLOAT = 50,
    NEGATE_VEC2 = 51,
    NEGATE_VEC3 = 52,
    NEGATE_VEC4 = 53,
    ADD_INT = 54,
    ADD_FLOAT = 55,
    ADD_STRING = 56,
    ADD_VEC2 = 57,
    ADD_VEC3 = 58,
    ADD_VEC3WS_VEC3 = 59,
    ADD_VEC3_VEC3WS = 60,
    ADD_VEC4 = 61,
    ADD_GAMETIME_FLOAT = 62,
    ADD_FLOAT_GAMETIME = 63,
    SUB_INT = 64,
    SUB_FLOAT = 65,
    SUB_VEC2 = 66,
    SUB_VEC3 = 67,
    SUB_VEC3WS_VEC3 = 68,
    SUB_VEC3WS_VEC3WS = 69,
    SUB_VEC4 = 70,
    SUB_GAMETIME_FLOAT = 71,
    SUB_GAMETIME = 72,
    MUL_INT = 73,
    MUL_FLOAT = 74,
    DIV_FLOAT = 75,
    MOD_INT = 76,
    MOD_FLOAT = 77,
    LT_INT = 78,
    LT_FLOAT = 79,
    LT_GAMETIME = 80,
    LTE_INT = 81,
    LTE_FLOAT = 82,
    LTE_GAMETIME = 83,
    EQ_BOOL = 84,
    EQ_INT = 85,
    EQ_FLOAT = 86,
    EQ_VEC2 = 87,
    EQ_VEC3 = 88,
    EQ_VEC3WS = 89,
    EQ_VEC4 = 90,
    EQ_STRING = 91,
    EQ_ENTITY_NAME = 92,
    EQ_SCHEMA_ENUM = 93,
    EQ_EHANDLE = 94,
    EQ_PANEL_HANDLE = 95,
    EQ_OPAQUE_HANDLE = 96,
    EQ_TEST_HANDLE = 97,
    EQ_COLOR_RGB = 98,
    EQ_ARRAY = 99,
    EQ_GAMETIME = 100,
    NE_BOOL = 101,
    NE_INT = 102,
    NE_FLOAT = 103,
    NE_VEC2 = 104,
    NE_VEC3 = 105,
    NE_VEC3WS = 106,
    NE_VEC4 = 107,
    NE_STRING = 108,
    NE_ENTITY_NAME = 109,
    NE_SCHEMA_ENUM = 110,
    NE_EHANDLE = 111,
    NE_PANEL_HANDLE = 112,
    NE_OPAQUE_HANDLE = 113,
    NE_TEST_HANDLE = 114,
    NE_COLOR_RGB = 115,
    NE_ARRAY = 116,
    NE_GAMETIME = 117,
    SCALE_VEC3 = 118,
    SCALE_VEC2 = 119,
    SCALE_VEC4 = 120,
    SCALE_INV_VEC3 = 121,
    SCALE_INV_VEC2 = 122,
    SCALE_INV_VEC4 = 123,
    ELEMENT_ACCESS_VEC2 = 124,
    ELEMENT_ACCESS_VEC3 = 125,
    ELEMENT_ACCESS_VEC3WS = 126,
    ELEMENT_ACCESS_VEC4 = 127,
    ELEMENT_ACCESS_COLOR_RGB = 128,
    GET_CONST_INLINE_STORAGE = 129,
};

enum class ParticleTransformType_t : std::int32_t {
    PT_TYPE_INVALID = 0,
    PT_TYPE_NAMED_VALUE = 1,
    PT_TYPE_CONTROL_POINT = 2,
    PT_TYPE_CONTROL_POINT_RANGE = 3,
    PT_TYPE_COUNT = 4,
};

enum class ParticleAttachment_t : std::int32_t {
    PATTACH_INVALID = 18446744073709551615,
    PATTACH_ABSORIGIN = 0,
    PATTACH_ABSORIGIN_FOLLOW = 1,
    PATTACH_CUSTOMORIGIN = 2,
    PATTACH_CUSTOMORIGIN_FOLLOW = 3,
    PATTACH_POINT = 4,
    PATTACH_POINT_FOLLOW = 5,
    PATTACH_EYES_FOLLOW = 6,
    PATTACH_OVERHEAD_FOLLOW = 7,
    PATTACH_WORLDORIGIN = 8,
    PATTACH_ROOTBONE_FOLLOW = 9,
    PATTACH_RENDERORIGIN_FOLLOW = 10,
    PATTACH_MAIN_VIEW = 11,
    PATTACH_WATERWAKE = 12,
    PATTACH_CENTER_FOLLOW = 13,
    PATTACH_CUSTOM_GAME_STATE_1 = 14,
    PATTACH_HEALTHBAR = 15,
    MAX_PATTACH_TYPES = 16,
};

enum class CNmEventTargetEntity_t : std::int32_t {
    Self = 0,
    Weapon = 1,
    HeldItem = 2,
    Custom = 3,
};

enum class FieldNetworkOption : std::int32_t {
    Auto = 0,
    ForceEnable = 1,
    ForceDisable = 2,
};

enum class NmGraphEventTypeCondition_t : std::int32_t {
    Entry = 0,
    FullyInState = 1,
    Exit = 2,
    Timed = 3,
    Generic = 4,
    Any = 5,
};

enum class CNmTransitionNode__TransitionOptions_t : std::int32_t {
    None = 0,
    ClampDuration = 1,
    Synchronized = 2,
    MatchSourceTime = 3,
    MatchSyncEventIndex = 4,
    MatchSyncEventID = 5,
    MatchSyncEventPercentage = 6,
    PreferClosestSyncEventID = 7,
    MatchTimeInSeconds = 8,
    OffsetTimeInSeconds = 9,
};

enum class CNmFloatComparisonNode__Comparison_t : std::int32_t {
    GreaterThanEqual = 0,
    LessThanEqual = 1,
    NearEqual = 2,
    GreaterThan = 3,
    LessThan = 4,
};

enum class VPhysXJoint_t__Flags_t : std::int32_t {
    JOINT_FLAGS_NONE = 0,
    JOINT_FLAGS_BODY1_FIXED = 1,
    JOINT_FLAGS_USE_BLOCK_SOLVER = 2,
};

enum class ScriptedHeldWeaponBehavior_t : std::int32_t {
    eInvalid = 18446744073709551615,
    eHolster = 0,
    eDeploy = 1,
    eDrop = 2,
};

enum class VelocityMetricMode : std::int32_t {
    DirectionOnly = 0,
    MagnitudeOnly = 1,
    DirectionAndMagnitude = 2,
};

enum class FacingMode : std::int32_t {
    FacingMode_Invalid = 0,
    FacingMode_Manual = 1,
    FacingMode_Path = 2,
    FacingMode_LookTarget = 3,
    FacingMode_ManualPosition = 4,
};

enum class VertexAlbedoFormat_t : std::int32_t {
    VERTEX_ALBEDO_NONE = 0,
    VERTEX_ALBEDO_8888 = 1,
    VERTEX_ALBEDO_565 = 2,
};

enum class AimMatrixBlendMode : std::int32_t {
    AimMatrixBlendMode_None = 0,
    AimMatrixBlendMode_Additive = 1,
    AimMatrixBlendMode_ModelSpaceAdditive = 2,
    AimMatrixBlendMode_BoneMask = 3,
};

enum class AnimationSnapshotType_t : std::int32_t {
    ANIMATION_SNAPSHOT_SERVER_SIMULATION = 0,
    ANIMATION_SNAPSHOT_CLIENT_SIMULATION = 1,
    ANIMATION_SNAPSHOT_CLIENT_PREDICTION = 2,
    ANIMATION_SNAPSHOT_CLIENT_INTERPOLATION = 3,
    ANIMATION_SNAPSHOT_CLIENT_RENDER = 4,
    ANIMATION_SNAPSHOT_FINAL_COMPOSITE = 5,
    ANIMATION_SNAPSHOT_MAX = 6,
};

enum class NmTargetWarpRule_t : std::int32_t {
    WarpXY = 0,
    WarpZ = 1,
    WarpXYZ = 2,
    RotationOnly = 3,
    FixedSection = 4,
};

enum class FootFallTagFoot_t : std::int32_t {
    FOOT1 = 0,
    FOOT2 = 1,
    FOOT3 = 2,
    FOOT4 = 3,
    FOOT5 = 4,
    FOOT6 = 5,
    FOOT7 = 6,
    FOOT8 = 7,
};

enum class ChoiceMethod : std::int32_t {
    WeightedRandom = 0,
    WeightedRandomNoRepeat = 1,
    Iterate = 2,
    IterateRandom = 3,
};

enum class AnimVectorSource : std::int32_t {
    MoveDirection = 0,
    FacingPosition = 1,
    LookDirection = 2,
    VectorParameter = 3,
    WayPointDirection = 4,
    Acceleration = 5,
    SlopeNormal = 6,
    SlopeNormal_WorldSpace = 7,
    LookTarget = 8,
    LookTarget_WorldSpace = 9,
    WayPointPosition = 10,
    GoalPosition = 11,
    RootMotionVelocity = 12,
    ManualTarget_WorldSpace = 13,
};

enum class IkTargetType : std::int32_t {
    IkTarget_Attachment = 0,
    IkTarget_Bone = 1,
    IkTarget_Parameter_ModelSpace = 2,
    IkTarget_Parameter_WorldSpace = 3,
};

enum class RenderMeshSlotType_t : std::int32_t {
    RENDERMESH_SLOT_INVALID = 18446744073709551615,
    RENDERMESH_SLOT_PER_VERTEX = 0,
    RENDERMESH_SLOT_PER_INSTANCE = 1,
};

enum class BoneMaskBlendSpace : std::int32_t {
    BlendSpace_Parent = 0,
    BlendSpace_Model = 1,
    BlendSpace_Model_RotationOnly = 2,
    BlendSpace_Model_TranslationOnly = 3,
};

enum class MovementCapability_t : std::int32_t {
    eStrafe = 0,
    eIdleTurn = 1,
    eStart = 2,
    eStop = 3,
    eInstantStop = 4,
    eShuffle = 5,
    ePlantedTurn = 6,
    eUseStartAsPlantedTurn = 7,
    eLean = 8,
    eForwardStartOnly = 9,
    eCount = 10,
};

enum class ModelConfigAttachmentType_t : std::int32_t {
    MODEL_CONFIG_ATTACHMENT_INVALID = 18446744073709551615,
    MODEL_CONFIG_ATTACHMENT_BONE_OR_ATTACHMENT = 0,
    MODEL_CONFIG_ATTACHMENT_ROOT_RELATIVE = 1,
    MODEL_CONFIG_ATTACHMENT_BONEMERGE = 2,
    MODEL_CONFIG_ATTACHMENT_COUNT = 3,
};

enum class BinaryNodeChildOption : std::int32_t {
    Child1 = 0,
    Child2 = 1,
};

enum class NPCPhysicsHullType_t : std::int32_t {
    eInvalid = 0,
    eGroundCapsule = 1,
    eCenteredCapsule = 2,
    eGenericCapsule = 3,
    eGroundBox = 4,
    eGroundCylinder = 5,
    eCenteredCylinder = 6,
};

enum class PulseDomainValueType_t : std::int32_t {
    INVALID = 18446744073709551615,
    ENTITY_NAME = 0,
    PANEL_ID = 1,
    COUNT = 2,
};

enum class JumpCorrectionMethod : std::int32_t {
    ScaleMotion = 0,
    AddCorrectionDelta = 1,
};

enum class MoodType_t : std::int32_t {
    eMoodType_Head = 0,
    eMoodType_Body = 1,
};

struct CPulseCell_WaitForCursorsWithTag {
    static constexpr std::size_t size = 0x130;
    std::uint8_t pad_0[0x128]; // 0x0
    std::uint8_t m_bTagSelfWhenComplete[0x4]; // 0x128 bool
    std::uint8_t m_nDesiredKillPriority[0x4]; // 0x12C PulseCursorCancelPriority_t
};

struct CPulseCell_RaceCursors {
    static constexpr std::size_t size = 0x138;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_Outflows[0x18]; // 0xD8 CUtlVector<CPulse_OutflowConnection>
    std::uint8_t m_OnFinished[0x48]; // 0xF0 CPulse_ResumePoint
};

struct CPulseCell_Base {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_nEditorNodeID[0x40]; // 0x8 PulseDocNodeID_t
};

struct CPulse_ResumePoint {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_PickBestOutflowSelector {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_nCheckType[0x8]; // 0x48 PulseBestOutflowRules_t
    std::uint8_t m_OutflowList[0x18]; // 0x50 PulseSelectorOutflowList_t
};

struct CParticleBindingRealPulse {
    static constexpr std::size_t size = 0xA8;
    std::uint8_t pad_0[0xA8]; // 0x0
};

struct CPulseCell_WaitForObservable {
    static constexpr std::size_t size = 0x1B0;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_Condition[0x90]; // 0xD8 CPulseObservableExpression<bool>
    std::uint8_t m_OnTrue[0x48]; // 0x168 CPulse_ResumePoint
};

struct CPulse_OutflowConnection {
    static constexpr std::size_t size = 0x48;
    std::uint8_t m_SourceOutflowName[0x10]; // 0x0 PulseSymbol_t
    std::uint8_t m_nDestChunk[0x4]; // 0x10 PulseRuntimeChunkIndex_t
    std::uint8_t m_nInstruction[0x4]; // 0x14 int32
    std::uint8_t m_OutflowRegisterMap[0x30]; // 0x18 PulseRegisterMap_t
};

struct CPulseGraphDef {
    static constexpr std::size_t size = 0x1C0;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_DomainIdentifier[0x10]; // 0x8 PulseSymbol_t
    std::uint8_t m_DomainSubType[0x18]; // 0x18 CPulseValueFullType
    std::uint8_t m_ParentMapName[0x10]; // 0x30 PulseSymbol_t
    std::uint8_t m_ParentXmlName[0x10]; // 0x40 PulseSymbol_t
    std::uint8_t m_Chunks[0x18]; // 0x50 CUtlVector<CPulse_Chunk*>
    std::uint8_t m_Cells[0x18]; // 0x68 CUtlVector<CPulseCell_Base*>
    std::uint8_t m_Vars[0x18]; // 0x80 CUtlVector<CPulse_Variable>
    std::uint8_t m_TempVarBanks[0x18]; // 0x98 CUtlVector<CPulse_TempVarBankDefinition*>
    std::uint8_t m_PublicOutputs[0x18]; // 0xB0 CUtlVector<CPulse_PublicOutput>
    std::uint8_t m_InvokeBindings[0x18]; // 0xC8 CUtlVector<CPulse_InvokeBinding*>
    std::uint8_t m_CallInfos[0x18]; // 0xE0 CUtlVector<CPulse_CallInfo*>
    std::uint8_t m_Constants[0x18]; // 0xF8 CUtlVector<CPulse_Constant>
    std::uint8_t m_DomainValues[0x18]; // 0x110 CUtlVector<CPulse_DomainValue>
    std::uint8_t m_BlackboardReferences[0x18]; // 0x128 CUtlVector<CPulse_BlackboardReference>
    std::uint8_t m_OutputConnections[0x80]; // 0x140 CUtlVector<CPulse_OutputConnection*>
};

struct CPulseCell_FireCursors {
    static constexpr std::size_t size = 0x140;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_Outflows[0x18]; // 0xD8 CUtlVector<CPulse_OutflowConnection>
    std::uint8_t m_bWaitForChildOutflows[0x8]; // 0xF0 bool
    std::uint8_t m_OnFinished[0x48]; // 0xF8 CPulse_ResumePoint
};

struct CPulseCell_Timeline__TimelineEvent_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t m_flTimeFromPrevious[0x8]; // 0x0 float32
    std::uint8_t m_EventOutflow[0x48]; // 0x8 CPulse_OutflowConnection
};

struct CPulseCell_IntervalTimer__CursorState_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t m_StartTime[0x4]; // 0x0 GameTime_t
    std::uint8_t m_EndTime[0x4]; // 0x4 GameTime_t
    std::uint8_t m_flWaitInterval[0x4]; // 0x8 float32
    std::uint8_t m_flWaitIntervalHigh[0x4]; // 0xC float32
    std::uint8_t m_bCompleteOnNextWake[0x4]; // 0x10 bool
};

struct CPulseCell_BaseRequirement {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_BaseState {
    static constexpr std::size_t size = 0xD8;
    std::uint8_t pad_0[0xD8]; // 0x0
};

struct OutflowWithRequirements_t {
    static constexpr std::size_t size = 0x80;
    std::uint8_t m_Connection[0x48]; // 0x0 CPulse_OutflowConnection
    std::uint8_t m_DestinationFlowNodeID[0x8]; // 0x48 PulseDocNodeID_t
    std::uint8_t m_RequirementNodeIDs[0x18]; // 0x50 CUtlVector<PulseDocNodeID_t>
    std::uint8_t m_nCursorStateBlockIndex[0x18]; // 0x68 CUtlVector<int32>
};

struct CPulseCell_IsRequirementValid {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_Value_Gradient {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Gradient[0x18]; // 0x48 CColorGradient
};

struct PulseNodeDynamicOutflows_t__DynamicOutflow_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t m_OutflowID[0x8]; // 0x0 CGlobalSymbol
    std::uint8_t m_Connection[0x48]; // 0x8 CPulse_OutflowConnection
};

struct CBasePulseGraphInstance {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x88]; // 0x0
};

struct CPulseCell_Inflow_GraphHook {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t m_HookName[0x10]; // 0x80 PulseSymbol_t
};

struct SignatureOutflow_Resume {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_Inflow_BaseEntrypoint {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_EntryChunk[0x8]; // 0x48 PulseRuntimeChunkIndex_t
    std::uint8_t m_RegisterMap[0x30]; // 0x50 PulseRegisterMap_t
};

struct CPulseCell_WaitForCursorsWithTagBase {
    static constexpr std::size_t size = 0x128;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_nCursorsAllowedToWait[0x8]; // 0xD8 int32
    std::uint8_t m_WaitComplete[0x48]; // 0xE0 CPulse_ResumePoint
};

struct CPulse_InvokeBinding {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t m_RegisterMap[0x30]; // 0x0 PulseRegisterMap_t
    std::uint8_t m_FuncName[0x10]; // 0x30 PulseSymbol_t
    std::uint8_t m_nCellIndex[0x4]; // 0x40 PulseRuntimeCellIndex_t
    std::uint8_t m_nSrcChunk[0x4]; // 0x44 PulseRuntimeChunkIndex_t
    std::uint8_t m_nSrcInstruction[0x68]; // 0x48 int32
};

struct CPulseCell_IntervalTimer {
    static constexpr std::size_t size = 0x168;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_Completed[0x48]; // 0xD8 CPulse_ResumePoint
    std::uint8_t m_OnInterval[0x48]; // 0x120 SignatureOutflow_Continue
};

struct CPulseCell_BaseLerp {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_WakeResume[0x48]; // 0xD8 CPulse_ResumePoint
};

struct CPulseCell_Value_Curve {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Curve[0x40]; // 0x48 CPiecewiseCurve
};

struct CPulseCell_Inflow_EventHandler {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t m_EventName[0x10]; // 0x80 PulseSymbol_t
};

struct CPulseCell_BaseFlow {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_Outflow_CycleShuffled__InstanceState_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_Shuffle[0x20]; // 0x0 CUtlVectorFixedGrowable<uint8,8>
    std::uint8_t m_nNextShuffle[0x8]; // 0x20 int32
};

struct CPulseCell_BaseLerp__CursorState_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_StartTime[0x4]; // 0x0 GameTime_t
    std::uint8_t m_EndTime[0x4]; // 0x4 GameTime_t
};

struct SignatureOutflow_Continue {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_Timeline {
    static constexpr std::size_t size = 0x140;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_TimelineEvents[0x18]; // 0xD8 CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
    std::uint8_t m_bWaitForChildOutflows[0x8]; // 0xF0 bool
    std::uint8_t m_OnFinished[0x48]; // 0xF8 CPulse_ResumePoint
};

struct CPulseCell_Inflow_EntOutputHandler {
    static constexpr std::size_t size = 0xB8;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t m_SourceEntity[0x10]; // 0x80 PulseSymbol_t
    std::uint8_t m_SourceOutput[0x10]; // 0x90 PulseSymbol_t
    std::uint8_t m_ExpectedParamType[0x18]; // 0xA0 CPulseValueFullType
};

struct CPulseCell_Outflow_CycleOrdered__InstanceState_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_nNextIndex[0x4]; // 0x0 int32
};

struct CParticleCollectionBindingInstance {
    static constexpr std::size_t size = 0xA8;
    std::uint8_t pad_0[0xA8]; // 0x0
};

struct CPulseCell_LimitCount__InstanceState_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_nCurrentCount[0x4]; // 0x0 int32
};

struct CPulseCell_Step_DebugLog {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_BaseYieldingInflow {
    static constexpr std::size_t size = 0xD8;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_BaseFlow_OnAfterCancel[0x48]; // 0x48 CPulse_ResumePoint
    std::uint8_t m_BaseFlow_WhileActive[0x48]; // 0x90 CPulse_ResumePoint
};

struct PulseNodeDynamicOutflows_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_Outflows[0x18]; // 0x0 CUtlVector<PulseNodeDynamicOutflows_t::DynamicOutflow_t>
};

struct CPulseCell_IsRequirementValid__Criteria_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t m_bIsValid[0x1]; // 0x0 bool
};

struct CPulseCell_Inflow_ObservableVariableListener {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t m_nBlackboardReference[0x2]; // 0x80 PulseRuntimeBlackboardReferenceIndex_t
    std::uint8_t m_bSelfReference[0x6]; // 0x82 bool
};

struct CPulseCell_Outflow_CycleOrdered {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Outputs[0x18]; // 0x48 CUtlVector<CPulse_OutflowConnection>
};

struct PulseSelectorOutflowList_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_Outflows[0x18]; // 0x0 CUtlVector<OutflowWithRequirements_t>
};

struct CPulseCell_Inflow_Wait {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_WakeResume[0x48]; // 0xD8 CPulse_ResumePoint
};

struct CPulseCell_Outflow_CycleShuffled {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Outputs[0x18]; // 0x48 CUtlVector<CPulse_OutflowConnection>
};

struct CPulseCell_Inflow_Method {
    static constexpr std::size_t size = 0xC0;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t m_MethodName[0x10]; // 0x80 PulseSymbol_t
    std::uint8_t m_Description[0x8]; // 0x90 CUtlString
    std::uint8_t m_bIsPublic[0x8]; // 0x98 bool
    std::uint8_t m_Args[0x10]; // 0xA0 CUtlLeanVector<CPulseRuntimeMethodArg>
    std::uint8_t m_ReturnValues[0x10]; // 0xB0 CUtlLeanVector<CPulseRuntimeMethodArg>
};

struct CPulseCell_BaseValue {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_BooleanSwitchState {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_Condition[0x90]; // 0xD8 CPulseObservableExpression<bool>
    std::uint8_t m_WhenTrue[0x48]; // 0x168 CPulse_OutflowConnection
    std::uint8_t m_WhenFalse[0x48]; // 0x1B0 CPulse_OutflowConnection
};

struct CPulseCell_Inflow_Yield {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_UnyieldResume[0x48]; // 0xD8 CPulse_ResumePoint
};

struct CPulseCell_Unknown {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_UnknownKeys[0x10]; // 0x48 KeyValues3
};

struct CPulseCell_Outflow_CycleRandom {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Outputs[0x18]; // 0x48 CUtlVector<CPulse_OutflowConnection>
};

struct CPulseCell_Step_PublicOutput {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_OutputIndex[0x8]; // 0x48 PulseRuntimeOutputIndex_t
};

struct CPulse_BlackboardReference {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_hBlackboardResource[0x8]; // 0x0 CStrongHandle<InfoForResourceTypeIPulseGraphDef>
    std::uint8_t m_BlackboardResource[0x10]; // 0x8 PulseSymbol_t
    std::uint8_t m_nNodeID[0x8]; // 0x18 PulseDocNodeID_t
    std::uint8_t m_NodeName[0x8]; // 0x20 CGlobalSymbol
};

struct CPulseCell_ReturnValues {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_Value_RandomInt {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CAnimationLayer {
    static constexpr std::size_t size = 0x4C;
    std::uint8_t m_hSequence[0xC]; // 0x0 CAnimNetVar<int32>
    std::uint8_t m_flPrevCycle[0x4]; // 0xC float32
    std::uint8_t m_flCycle[0xC]; // 0x10 CAnimNetVar<float32>
    std::uint8_t m_flWeight[0xC]; // 0x1C CAnimNetVar<float32>
    std::uint8_t m_nOrder[0xC]; // 0x28 CAnimNetVar<int32>
    std::uint8_t m_bLooping[0x4]; // 0x34 bool
    std::uint8_t m_nFlags[0x4]; // 0x38 int32
    std::uint8_t m_bSequenceFinished[0x4]; // 0x3C bool
    std::uint8_t m_flKillRate[0x4]; // 0x40 float32
    std::uint8_t m_flKillDelay[0x4]; // 0x44 float32
    std::uint8_t m_nPriority[0x4]; // 0x48 int32
};

struct CPulse_CallInfo {
    static constexpr std::size_t size = 0x60;
    std::uint8_t m_PortName[0x10]; // 0x0 PulseSymbol_t
    std::uint8_t m_nEditorNodeID[0x8]; // 0x10 PulseDocNodeID_t
    std::uint8_t m_RegisterMap[0x30]; // 0x18 PulseRegisterMap_t
    std::uint8_t m_CallMethodID[0x4]; // 0x48 PulseDocNodeID_t
    std::uint8_t m_nSrcChunk[0x4]; // 0x4C PulseRuntimeChunkIndex_t
    std::uint8_t m_nSrcInstruction[0x4]; // 0x50 int32
    std::uint8_t m_nBreakDestChunk[0x4]; // 0x54 PulseRuntimeChunkIndex_t
    std::uint8_t m_nBreakDestInstruction[0x8]; // 0x58 int32
};

struct CPulseCell_InlineNodeSkipSelector {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_nFlowNodeID[0x4]; // 0x48 PulseDocNodeID_t
    std::uint8_t m_bAnd[0x4]; // 0x4C bool
    std::uint8_t m_PassOutflow[0x18]; // 0x50 PulseSelectorOutflowList_t
    std::uint8_t m_FailOutflow[0x48]; // 0x68 CPulse_OutflowConnection
};

struct CPulseCell_LimitCount {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_nLimitCount[0x8]; // 0x48 int32
};

struct CPulseCell_Step_CallExternalMethod {
    static constexpr std::size_t size = 0x150;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_MethodName[0x10]; // 0xD8 PulseSymbol_t
    std::uint8_t m_nBlackboardIndex[0x8]; // 0xE8 PulseRuntimeBlackboardReferenceIndex_t
    std::uint8_t m_ExpectedArgs[0x10]; // 0xF0 CUtlLeanVector<CPulseRuntimeMethodArg>
    std::uint8_t m_nAsyncCallMode[0x8]; // 0x100 PulseMethodCallMode_t
    std::uint8_t m_OnFinished[0x48]; // 0x108 CPulse_ResumePoint
};

struct CPulseCell_LimitCount__Criteria_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t m_bLimitCountPasses[0x1]; // 0x0 bool
};

struct CPulseCell_CursorQueue {
    static constexpr std::size_t size = 0x130;
    std::uint8_t pad_0[0x128]; // 0x0
    std::uint8_t m_nCursorsAllowedToRunParallel[0x8]; // 0x128 int32
};

struct CPulseCell_Value_RandomFloat {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseExecCursor {
    static constexpr std::size_t size = 0xD8;
    std::uint8_t pad_0[0xD8]; // 0x0
};

struct CAnimFrameBlockAnim {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_nStartFrame[0x4]; // 0x0 int32
    std::uint8_t m_nEndFrame[0x4]; // 0x4 int32
    std::uint8_t m_segmentIndexArray[0x18]; // 0x8 CUtlVector<int32>
};

struct CZeroPoseUpdateNode {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x60]; // 0x0
};

struct CSlowDownOnSlopesUpdateNode {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t m_flSlowDownStrength[0x8]; // 0x70 float32
};

struct COrientationWarpUpdateNode {
    static constexpr std::size_t size = 0xC0;
    std::uint8_t pad_0[0x74]; // 0x0
    std::uint8_t m_eMode[0x4]; // 0x74 OrientationWarpMode_t
    std::uint8_t m_hTargetParam[0x2]; // 0x78 CAnimParamHandle
    std::uint8_t m_hTargetPositionParam[0x2]; // 0x7A CAnimParamHandle
    std::uint8_t m_hFallbackTargetPositionParam[0x4]; // 0x7C CAnimParamHandle
    std::uint8_t m_eTargetOffsetMode[0x4]; // 0x80 OrientationWarpTargetOffsetMode_t
    std::uint8_t m_flTargetOffset[0x4]; // 0x84 float32
    std::uint8_t m_hTargetOffsetParam[0x8]; // 0x88 CAnimParamHandle
    std::uint8_t m_damping[0x18]; // 0x90 CAnimInputDamping
    std::uint8_t m_eRootMotionSource[0x4]; // 0xA8 OrientationWarpRootMotionSource_t
    std::uint8_t m_flMaxRootMotionScale[0x4]; // 0xAC float32
    std::uint8_t m_bEnablePreferredRotationDirection[0x4]; // 0xB0 bool
    std::uint8_t m_ePreferredRotationDirection[0x4]; // 0xB4 AnimValueSource
    std::uint8_t m_flPreferredRotationThreshold[0x8]; // 0xB8 float32
};

struct CAnimParameterBase {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_name[0x8]; // 0x18 CGlobalSymbol
    std::uint8_t m_sComment[0x8]; // 0x20 CUtlString
    std::uint8_t m_group[0x8]; // 0x28 CUtlString
    std::uint8_t m_id[0x18]; // 0x30 AnimParamID
    std::uint8_t m_componentName[0x20]; // 0x48 CUtlString
    std::uint8_t m_bNetworkingRequested[0x1]; // 0x68 bool
    std::uint8_t m_bIsReferenced[0x7]; // 0x69 bool
};

struct CSequenceFinishedAnimTag {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x58]; // 0x0
    std::uint8_t m_sequenceName[0x8]; // 0x58 CUtlString
};

struct CSceneObjectData {
    static constexpr std::size_t size = 0xB8;
    std::uint8_t m_vMinBounds[0xC]; // 0x0 Vector
    std::uint8_t m_vMaxBounds[0xC]; // 0xC Vector
    std::uint8_t m_drawCalls[0x10]; // 0x18 CUtlLeanVector<CMaterialDrawDescriptor>
    std::uint8_t m_drawBounds[0x10]; // 0x28 CUtlLeanVector<AABB_t>
    std::uint8_t m_meshlets[0x10]; // 0x38 CUtlLeanVector<CMeshletDescriptor>
    std::uint8_t m_rtProxyDrawCalls[0x10]; // 0x48 CUtlLeanVector<CSceneObjectData::RTProxyDrawDescriptor_t>
    std::uint8_t m_vTintColor[0x60]; // 0x58 Vector4D
};

struct CFootCycle {
    static constexpr std::size_t size = 0x4;
    std::uint8_t pad_0[0x4]; // 0x0
};

struct CParticleModelInput {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nType[0x8]; // 0x10 ParticleModelType_t
    std::uint8_t m_NamedValue[0x40]; // 0x18 CParticleNamedValueRef
    std::uint8_t m_nControlPoint[0x8]; // 0x58 int32
};

struct CInputStreamUpdateNode {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x60]; // 0x0
};

struct CNmFootIKTask {
    static constexpr std::size_t size = 0x140;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t m_nLeftEffectorBoneIdx[0x4]; // 0x70 int32
    std::uint8_t m_nRightEffectorBoneIdx[0xC]; // 0x74 int32
    std::uint8_t m_leftTargetTransform[0x20]; // 0x80 CTransform
    std::uint8_t m_rightTargetTransform[0x20]; // 0xA0 CTransform
    std::uint8_t m_nLeftTargetBoneIdx[0x4]; // 0xC0 int32
    std::uint8_t m_nRightTargetBoneIdx[0xC]; // 0xC4 int32
    std::uint8_t m_leftTarget[0x30]; // 0xD0 CNmTarget
    std::uint8_t m_rightTarget[0x30]; // 0x100 CNmTarget
    std::uint8_t m_blendMode[0x4]; // 0x130 NmIKBlendMode_t
    std::uint8_t m_flBlendWeight[0x4]; // 0x134 float32
    std::uint8_t m_bIsTargetInWorldSpace[0x1]; // 0x138 bool
    std::uint8_t m_bIsRunningFromDeserializedData[0x7]; // 0x139 bool
};

struct CIntAnimParameter {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t m_defaultValue[0x4]; // 0x80 int32
    std::uint8_t m_minValue[0x4]; // 0x84 int32
    std::uint8_t m_maxValue[0x8]; // 0x88 int32
};

struct CNmParameterizedBlendNode__CDefinition {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_sourceNodeIndices[0x18]; // 0x10 CUtlLeanVectorFixedGrowable<int16,5>
    std::uint8_t m_nInputParameterValueNodeIdx[0x2]; // 0x28 int16
    std::uint8_t m_bAllowLooping[0x6]; // 0x2A bool
};

struct CNmScaleTask {
    static constexpr std::size_t size = 0xD0;
    std::uint8_t pad_0[0xD0]; // 0x0
};

struct PerTickSettings_t {
    static constexpr std::size_t size = 0x6C0;
    std::uint8_t m_startingLocalToWorld[0x20]; // 0x0 CTransform
    std::uint8_t m_prevLocalToWorld[0x20]; // 0x20 CTransform
    std::uint8_t m_finalLocalToWorld[0x20]; // 0x40 CTransform
    std::uint8_t m_rootMotion[0x63C]; // 0x60 CRootMotion
    std::uint8_t m_updateID[0x8]; // 0x69C int32
    std::uint8_t m_flLastTimeStep[0x4]; // 0x6A4 float32
    std::uint8_t m_flPrevAnimTime[0x4]; // 0x6A8 float32
    std::uint8_t m_flNextAnimTime[0x8]; // 0x6AC float32
    std::uint8_t m_bAwaken[0x1]; // 0x6B4 bool
    std::uint8_t m_bTeleported[0x1]; // 0x6B5 bool
    std::uint8_t m_bIsClient[0x1]; // 0x6B6 bool
    std::uint8_t m_bIsPredicted[0x9]; // 0x6B7 bool
};

struct CNmFrameSnapEvent {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_frameSnapMode[0x8]; // 0x18 NmFrameSnapEventMode_t
};

struct CAnimNodePath {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_path[0x2C]; // 0x0 AnimNodeID[11]
    std::uint8_t m_nCount[0x4]; // 0x2C int32
};

struct AnimNodeOutputID {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_id[0x4]; // 0x0 uint32
};

struct CNmSyncTrack {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t m_syncEvents[0xA8]; // 0x0 CUtlLeanVectorFixedGrowable<CNmSyncTrack::Event_t,10>
    std::uint8_t m_nStartEventOffset[0x8]; // 0xA8 int32
};

struct CSeqBoneMaskList {
    static constexpr std::size_t size = 0x60;
    std::uint8_t m_sName[0x10]; // 0x0 CBufferString
    std::uint8_t m_nLocalBoneArray[0x18]; // 0x10 CUtlVector<int16>
    std::uint8_t m_flBoneWeightArray[0x18]; // 0x28 CUtlVector<float32>
    std::uint8_t m_flDefaultMorphCtrlWeight[0x8]; // 0x40 float32
    std::uint8_t m_morphCtrlWeightArray[0x18]; // 0x48 CUtlVector<std::pair<CBufferString,float32>>
};

struct CAnimEncodedFrames {
    static constexpr std::size_t size = 0xD8;
    std::uint8_t m_fileName[0x10]; // 0x0 CBufferString
    std::uint8_t m_nFrames[0x4]; // 0x10 int32
    std::uint8_t m_nFramesPerBlock[0x4]; // 0x14 int32
    std::uint8_t m_frameblockArray[0x18]; // 0x18 CUtlVector<CAnimFrameBlockAnim>
    std::uint8_t m_usageDifferences[0xA8]; // 0x30 CAnimEncodeDifference
};

struct SampleCode {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_subCode[0x8]; // 0x0 uint8[8]
};

struct CCachedPose {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_transforms[0x18]; // 0x8 CUtlVector<CTransform>
    std::uint8_t m_morphWeights[0x18]; // 0x20 CUtlVector<float32>
    std::uint8_t m_hSequence[0x4]; // 0x38 HSequence
    std::uint8_t m_flCycle[0x4]; // 0x3C float32
};

struct CNmTransitionEventConditionNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_requireRuleID[0x8]; // 0x10 CGlobalSymbol
    std::uint8_t m_eventConditionRules[0x4]; // 0x18 CNmBitFlags
    std::uint8_t m_nSourceStateNodeIdx[0x2]; // 0x1C int16
    std::uint8_t m_ruleCondition[0x2]; // 0x1E NmTransitionRuleCondition_t
};

struct CTaskStatusAnimTag {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x58]; // 0x0
};

struct CStateNodeInstanceData {
    static constexpr std::size_t size = 0x4C;
    std::uint8_t m_stateWeights[0x8]; // 0x0 CRelativeArray<float32>
    std::uint8_t m_vTransitionVelocityDeltaWS[0x18]; // 0x8 Vector
    std::uint8_t m_currentStateStartTime[0x1C]; // 0x20 CAnimNetVar<float32>
    std::uint8_t m_resetCount[0x10]; // 0x3C CAnimNetVar<uint8>
};

struct CMotionGraphConfig {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_paramValues[0x10]; // 0x0 float32[4]
    std::uint8_t m_flDuration[0x4]; // 0x10 float32
    std::uint8_t m_nMotionIndex[0x4]; // 0x14 MotionIndex
    std::uint8_t m_nSampleStart[0x4]; // 0x18 int32
    std::uint8_t m_nSampleCount[0x4]; // 0x1C int32
};

struct CMotionSearchNode {
    static constexpr std::size_t size = 0x80;
    std::uint8_t m_children[0x18]; // 0x0 CUtlVector<CMotionSearchNode*>
    std::uint8_t m_quantizer[0x20]; // 0x18 CVectorQuantizer
    std::uint8_t m_sampleCodes[0x18]; // 0x38 CUtlVector<CUtlVector<SampleCode>>
    std::uint8_t m_sampleIndices[0x18]; // 0x50 CUtlVector<CUtlVector<int32>>
    std::uint8_t m_selectableSamples[0x18]; // 0x68 CUtlVector<int32>
};

struct CAnimActivity {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_name[0x10]; // 0x0 CBufferString
    std::uint8_t m_nActivity[0x4]; // 0x10 int32
    std::uint8_t m_nFlags[0x4]; // 0x14 int32
    std::uint8_t m_nWeight[0x8]; // 0x18 int32
};

struct CAnimScriptManager {
    static constexpr std::size_t size = 0x1A0;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_scriptInfo[0x190]; // 0x10 CUtlVector<ScriptInfo_t>
};

struct AnimationDecodeDebugDumpElement_t {
    static constexpr std::size_t size = 0x70;
    std::uint8_t m_nEntityIndex[0x8]; // 0x0 int32
    std::uint8_t m_modelName[0x8]; // 0x8 CUtlString
    std::uint8_t m_poseParams[0x18]; // 0x10 CUtlVector<CUtlString>
    std::uint8_t m_decodeOps[0x18]; // 0x28 CUtlVector<CUtlString>
    std::uint8_t m_internalOps[0x18]; // 0x40 CUtlVector<CUtlString>
    std::uint8_t m_decodedAnims[0x18]; // 0x58 CUtlVector<CUtlString>
};

struct CChoreoInstanceData {
    static constexpr std::size_t size = 0x398;
    std::uint8_t m_AnimOverlay[0x398]; // 0x0 CAnimationLayer[12]
};

struct PulseRuntimeVarIndex_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_Value[0x4]; // 0x0 int32
};

struct ConfigIndex {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_nGroup[0x2]; // 0x0 uint16
    std::uint8_t m_nConfig[0x2]; // 0x2 uint16
};

struct VPhysXCollisionAttributes_t {
    static constexpr std::size_t size = 0xD0;
    std::uint8_t m_nIncludeDetailLayerCount[0x4]; // 0x0 int32
    std::uint8_t m_CollisionGroup[0x4]; // 0x4 uint32
    std::uint8_t m_InteractAs[0x18]; // 0x8 CUtlVector<uint32>
    std::uint8_t m_InteractWith[0x18]; // 0x20 CUtlVector<uint32>
    std::uint8_t m_InteractExclude[0x18]; // 0x38 CUtlVector<uint32>
    std::uint8_t m_DetailLayers[0x18]; // 0x50 CUtlVector<uint32>
    std::uint8_t m_CollisionGroupString[0x8]; // 0x68 CUtlString
    std::uint8_t m_InteractAsStrings[0x18]; // 0x70 CUtlVector<CUtlString>
    std::uint8_t m_InteractWithStrings[0x18]; // 0x88 CUtlVector<CUtlString>
    std::uint8_t m_InteractExcludeStrings[0x18]; // 0xA0 CUtlVector<CUtlString>
    std::uint8_t m_DetailLayerStrings[0x18]; // 0xB8 CUtlVector<CUtlString>
};

struct CSequenceUpdateNode {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t m_hSequence[0x4]; // 0x78 HSequence
    std::uint8_t m_duration[0x4]; // 0x7C float32
    std::uint8_t m_paramSpans[0x18]; // 0x80 CParamSpanUpdater
    std::uint8_t m_tags[0x18]; // 0x98 CUtlVector<TagSpan_t>
};

struct CStateMachineInstanceData {
    static constexpr std::size_t size = 0x1C;
    std::uint8_t m_flTimeInState[0x4]; // 0x0 float32
    std::uint8_t m_currentTransitionIndex[0xC]; // 0x4 CAnimNetVar<int32>
    std::uint8_t m_prevStateIndex[0x4]; // 0x10 int32
    std::uint8_t m_scheduledTransitionIndex[0x8]; // 0x14 int32
};

struct CNmPassthroughNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nChildNodeIdx[0x8]; // 0x10 int16
};

struct CNmClipReferenceNode__CDefinition {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct CNmGraphDefinition__ExternalGraphSlot_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_nNodeIdx[0x8]; // 0x0 int16
    std::uint8_t m_slotID[0x8]; // 0x8 CGlobalSymbol
};

struct PulseRuntimeEntrypointIndex_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_Value[0x4]; // 0x0 int32
};

struct CAimCameraUpdateNode {
    static constexpr std::size_t size = 0xB8;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t m_hParameterPosition[0x2]; // 0x70 CAnimParamHandle
    std::uint8_t m_hParameterOrientation[0x2]; // 0x72 CAnimParamHandle
    std::uint8_t m_hParameterPelvisOffset[0x2]; // 0x74 CAnimParamHandle
    std::uint8_t m_hParameterCameraOnly[0x2]; // 0x76 CAnimParamHandle
    std::uint8_t m_hParameterWeaponDepenetrationDistance[0x2]; // 0x78 CAnimParamHandle
    std::uint8_t m_hParameterWeaponDepenetrationDelta[0x2]; // 0x7A CAnimParamHandle
    std::uint8_t m_hParameterCameraClearanceDistance[0x4]; // 0x7C CAnimParamHandle
    std::uint8_t m_opFixedSettings[0x38]; // 0x80 AimCameraOpFixedSettings_t
};

struct PulseRuntimeDomainValueIndex_t {
    static constexpr std::size_t size = 0x2;
    std::uint8_t m_Value[0x2]; // 0x0 int16
};

struct LookData {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_vLookTarget[0x18]; // 0x0 CAnimNetVar<Vector>
};

struct CSeqSeqDescFlag {
    static constexpr std::size_t size = 0xB;
    std::uint8_t m_bLooping[0x1]; // 0x0 bool
    std::uint8_t m_bSnap[0x1]; // 0x1 bool
    std::uint8_t m_bAutoplay[0x1]; // 0x2 bool
    std::uint8_t m_bPost[0x1]; // 0x3 bool
    std::uint8_t m_bHidden[0x1]; // 0x4 bool
    std::uint8_t m_bMulti[0x1]; // 0x5 bool
    std::uint8_t m_bLegacyDelta[0x1]; // 0x6 bool
    std::uint8_t m_bLegacyWorldspace[0x1]; // 0x7 bool
    std::uint8_t m_bLegacyCyclepose[0x1]; // 0x8 bool
    std::uint8_t m_bLegacyRealtime[0x1]; // 0x9 bool
    std::uint8_t m_bModelDoc[0x1]; // 0xA bool
};

struct PermModelInfo_t {
    static constexpr std::size_t size = 0x58;
    std::uint8_t m_nFlags[0x4]; // 0x0 uint32
    std::uint8_t m_vHullMin[0xC]; // 0x4 Vector
    std::uint8_t m_vHullMax[0xC]; // 0x10 Vector
    std::uint8_t m_vViewMin[0xC]; // 0x1C Vector
    std::uint8_t m_vViewMax[0xC]; // 0x28 Vector
    std::uint8_t m_flMass[0x4]; // 0x34 float32
    std::uint8_t m_vEyePosition[0xC]; // 0x38 Vector
    std::uint8_t m_flMaxEyeDeflection[0x4]; // 0x44 float32
    std::uint8_t m_sSurfaceProperty[0x8]; // 0x48 CUtlString
    std::uint8_t m_keyValueText[0x8]; // 0x50 CUtlString
};

struct StanceInfo_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_vPosition[0xC]; // 0x0 Vector
    std::uint8_t m_flDirection[0x4]; // 0xC float32
};

struct IKBoneNameAndIndex_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_Name[0x10]; // 0x0 CUtlString
};

struct CPulse_Chunk {
    static constexpr std::size_t size = 0x60;
    std::uint8_t m_Instructions[0x10]; // 0x0 CUtlLeanVector<PGDInstruction_t>
    std::uint8_t m_Registers[0x10]; // 0x10 CUtlLeanVector<CPulse_RegisterInfo>
    std::uint8_t m_InstructionDebugInfos[0x10]; // 0x20 CUtlLeanVector<CPulse_InstructionDebug>
    std::uint8_t m_nTempVarBank[0x30]; // 0x30 PulseRuntimeTempVarBankIndex_t
};

struct CStanceScaleUpdateNode {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t m_hParam[0x8]; // 0x70 CAnimParamHandle
};

struct CPulseBreakpointLocation {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_NodeID[0x8]; // 0x0 PulseDocNodeID_t
    std::uint8_t m_SequencePoint[0x10]; // 0x8 PulseSymbol_t
    std::uint8_t m_PortName[0x10]; // 0x18 PulseSymbol_t
    std::uint8_t m_bDeferBreak[0x8]; // 0x28 bool
};

struct PulseRuntimeInvokeIndex_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_Value[0x4]; // 0x0 int32
};

struct CNmBoneMaskBlendNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nSourceMaskNodeIdx[0x2]; // 0x10 int16
    std::uint8_t m_nTargetMaskNodeIdx[0x2]; // 0x12 int16
    std::uint8_t m_nBlendWeightValueNodeIdx[0x4]; // 0x14 int16
};

struct CNmIDEventNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nSourceStateNodeIdx[0x4]; // 0x10 int16
    std::uint8_t m_eventConditionRules[0x4]; // 0x14 CNmBitFlags
    std::uint8_t m_defaultValue[0x8]; // 0x18 CGlobalSymbol
};

struct HitReactFixedSettings_t {
    static constexpr std::size_t size = 0x44;
    std::uint8_t m_nWeightListIndex[0x4]; // 0x0 int32
    std::uint8_t m_nEffectedBoneCount[0x4]; // 0x4 int32
    std::uint8_t m_flMaxImpactForce[0x4]; // 0x8 float32
    std::uint8_t m_flMinImpactForce[0x4]; // 0xC float32
    std::uint8_t m_flWhipImpactScale[0x4]; // 0x10 float32
    std::uint8_t m_flCounterRotationScale[0x4]; // 0x14 float32
    std::uint8_t m_flDistanceFadeScale[0x4]; // 0x18 float32
    std::uint8_t m_flPropagationScale[0x4]; // 0x1C float32
    std::uint8_t m_flWhipDelay[0x4]; // 0x20 float32
    std::uint8_t m_flSpringStrength[0x4]; // 0x24 float32
    std::uint8_t m_flWhipSpringStrength[0x4]; // 0x28 float32
    std::uint8_t m_flMaxAngleRadians[0x4]; // 0x2C float32
    std::uint8_t m_nHipBoneIndex[0x4]; // 0x30 int32
    std::uint8_t m_flHipBoneTranslationScale[0x4]; // 0x34 float32
    std::uint8_t m_flHipDipSpringStrength[0x4]; // 0x38 float32
    std::uint8_t m_flHipDipImpactScale[0x4]; // 0x3C float32
    std::uint8_t m_flHipDipDelay[0x4]; // 0x40 float32
};

struct CNmPoseNode__CDefinition {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct CAnimTagBase {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_name[0x8]; // 0x18 CGlobalSymbol
    std::uint8_t m_sComment[0x8]; // 0x20 CUtlString
    std::uint8_t m_group[0x8]; // 0x28 CGlobalSymbol
    std::uint8_t m_tagID[0x18]; // 0x30 AnimTagID
    std::uint8_t m_bIsReferenced[0x8]; // 0x48 bool
};

struct CPerParticleVecInput {
    static constexpr std::size_t size = 0x6D8;
    std::uint8_t pad_0[0x6D8]; // 0x0
};

struct CMotionGraph {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_paramSpans[0x18]; // 0x10 CParamSpanUpdater
    std::uint8_t m_tags[0x18]; // 0x28 CUtlVector<TagSpan_t>
    std::uint8_t m_pRootNode[0x8]; // 0x40 CSmartPtr<CMotionNode>
    std::uint8_t m_nParameterCount[0x4]; // 0x48 int32
    std::uint8_t m_nConfigStartIndex[0x4]; // 0x4C int32
    std::uint8_t m_nConfigCount[0x4]; // 0x50 int32
    std::uint8_t m_bLoop[0x4]; // 0x54 bool
};

struct CNmVectorInfoNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nInputValueNodeIdx[0x2]; // 0x10 int16
    std::uint8_t m_desiredInfo[0x6]; // 0x12 CNmVectorInfoNode::Info_t
};

struct AnimationSnapshot_t {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0x110]; // 0x0
    std::uint8_t m_nEntIndex[0x8]; // 0x110 int32
    std::uint8_t m_modelName[0x8]; // 0x118 CUtlString
};

struct CNmBlendTask {
    static constexpr std::size_t size = 0x100;
    std::uint8_t pad_0[0x100]; // 0x0
};

struct CNmVectorValueNode__CDefinition {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct CSeqTransition {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_flFadeInTime[0x4]; // 0x0 float32
    std::uint8_t m_flFadeOutTime[0x4]; // 0x4 float32
};

struct CNmPoseTask {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x70]; // 0x0
};

struct CAnimGraphSettingsGroup {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x20]; // 0x0
};

struct CNmVirtualParameterTargetNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nChildNodeIdx[0x8]; // 0x10 int16
};

struct CAnimGraphDebugReplay {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t m_animGraphFileName[0x8]; // 0x40 CUtlString
    std::uint8_t m_frameList[0x18]; // 0x48 CUtlVector<CSmartPtr<CAnimReplayFrame>>
    std::uint8_t m_startIndex[0x4]; // 0x60 int32
    std::uint8_t m_writeIndex[0x4]; // 0x64 int32
    std::uint8_t m_frameCount[0x8]; // 0x68 int32
};

struct CVectorAnimParameter {
    static constexpr std::size_t size = 0x98;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t m_defaultValue[0xC]; // 0x80 Vector
    std::uint8_t m_bInterpolate[0x4]; // 0x8C bool
    std::uint8_t m_vectorType[0x8]; // 0x90 AnimParamVectorType_t
};

struct CNmCachedPoseReadTask {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x80]; // 0x0
};

struct CNmStateMachineNode__StateDefinition_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t m_nStateNodeIdx[0x2]; // 0x0 int16
    std::uint8_t m_nEntryConditionNodeIdx[0x6]; // 0x2 int16
    std::uint8_t m_transitionDefinitions[0x30]; // 0x8 CUtlLeanVectorFixedGrowable<CNmStateMachineNode::TransitionDefinition_t,5>
};

struct CStanceOverrideUpdateNode {
    static constexpr std::size_t size = 0xA0;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t m_footStanceInfo[0x18]; // 0x70 CUtlVector<StanceInfo_t>
    std::uint8_t m_pStanceSourceNode[0x10]; // 0x88 CAnimUpdateNodeRef
    std::uint8_t m_hParameter[0x4]; // 0x98 CAnimParamHandle
    std::uint8_t m_eMode[0x4]; // 0x9C StanceOverrideMode
};

struct CNmGraphDefinition__ExternalPoseSlot_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_nNodeIdx[0x8]; // 0x0 int16
    std::uint8_t m_slotID[0x8]; // 0x8 CGlobalSymbol
};

struct PhysShapeMarkup_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_nBodyInAggregate[0x4]; // 0x0 int32
    std::uint8_t m_nShapeInBody[0x4]; // 0x4 int32
    std::uint8_t m_sHitGroup[0x8]; // 0x8 CGlobalSymbol
};

struct CBlend2DInstanceData {
    static constexpr std::size_t size = 0xA0;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_dampedValue[0x3C]; // 0x8 Vector2D
    std::uint8_t m_flCycle[0x4]; // 0x44 float32
    std::uint8_t m_flPrevCycle[0x58]; // 0x48 float32
};

struct LookAtBone_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_index[0x4]; // 0x0 int32
    std::uint8_t m_weight[0x4]; // 0x4 float32
};

struct CDirectPlaybackInstanceData {
    static constexpr std::size_t size = 0x148;
    std::uint8_t m_vTargetPosition[0xC]; // 0x0 Vector
    std::uint8_t m_flTargetFacing[0x4]; // 0xC float32
    std::uint8_t m_flInterpEndTime[0x4]; // 0x10 float32
    std::uint8_t m_weights[0x10]; // 0x14 float32[4]
    std::uint8_t m_sequences[0xE0]; // 0x24 SequenceData[4]
    std::uint8_t m_currentSequenceIndex[0x4]; // 0x104 uint32
    std::uint8_t m_currentSequenceData[0x10]; // 0x108 CAnimNetVar<uint64>
    std::uint8_t m_flFadeInTime[0x4]; // 0x118 float32
    std::uint8_t m_flFadeOutTime[0x4]; // 0x11C float32
    std::uint8_t m_flForcedCycle[0x10]; // 0x120 CAnimNetVar<float32>
    std::uint8_t m_bResetPending[0x8]; // 0x130 bool
    std::uint8_t m_SequenceCycleZeroTime[0x10]; // 0x138 CAnimNetVar<float32>
};

struct CNmTransitionNode__CDefinition {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nTargetStateNodeIdx[0x2]; // 0x10 int16
    std::uint8_t m_nDurationOverrideNodeIdx[0x2]; // 0x12 int16
    std::uint8_t m_timeOffsetOverrideNodeIdx[0x2]; // 0x14 int16
    std::uint8_t m_startBoneMaskNodeIdx[0x2]; // 0x16 int16
    std::uint8_t m_flDuration[0x4]; // 0x18 float32
    std::uint8_t m_boneMaskBlendInTimePercentage[0x4]; // 0x1C NmPercent_t
    std::uint8_t m_flTimeOffset[0x4]; // 0x20 float32
    std::uint8_t m_transitionOptions[0x4]; // 0x24 CNmBitFlags
    std::uint8_t m_targetSyncIDNodeIdx[0x2]; // 0x28 int16
    std::uint8_t m_blendWeightEasing[0x1]; // 0x2A NmEasingOperation_t
    std::uint8_t m_rootMotionBlend[0x5]; // 0x2B NmRootMotionBlendMode_t
};

struct PulseRuntimeRegisterIndex_t {
    static constexpr std::size_t size = 0x2;
    std::uint8_t m_Value[0x2]; // 0x0 int16
};

struct CNmFloatEaseNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_flEaseTime[0x4]; // 0x10 float32
    std::uint8_t m_flStartValue[0x4]; // 0x14 float32
    std::uint8_t m_nInputValueNodeIdx[0x2]; // 0x18 int16
    std::uint8_t m_easingOp[0x1]; // 0x1A NmEasingOperation_t
    std::uint8_t m_bUseStartValue[0x5]; // 0x1B bool
};

struct CAnimationGraphInstance {
    static constexpr std::size_t size = 0x340;
    std::uint8_t pad_0[0x329]; // 0x0
    std::uint8_t m_bTagDispatchDirty[0x17]; // 0x329 bool
};

struct CAnimEncodeDifference {
    static constexpr std::size_t size = 0xA8;
    std::uint8_t m_boneArray[0x18]; // 0x0 CUtlVector<CAnimBoneDifference>
    std::uint8_t m_morphArray[0x18]; // 0x18 CUtlVector<CAnimMorphDifference>
    std::uint8_t m_userArray[0x18]; // 0x30 CUtlVector<CAnimUserDifference>
    std::uint8_t m_bHasRotationBitArray[0x18]; // 0x48 CUtlVector<uint8>
    std::uint8_t m_bHasMovementBitArray[0x18]; // 0x60 CUtlVector<uint8>
    std::uint8_t m_bHasMorphBitArray[0x18]; // 0x78 CUtlVector<uint8>
    std::uint8_t m_bHasUserBitArray[0x18]; // 0x90 CUtlVector<uint8>
};

struct CRootUpdateNode {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x70]; // 0x0
};

struct CNmTargetOffsetNode__CDefinition {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nInputValueNodeIdx[0x2]; // 0x10 int16
    std::uint8_t m_bIsBoneSpaceOffset[0xE]; // 0x12 bool
    std::uint8_t m_rotationOffset[0x10]; // 0x20 Quaternion
    std::uint8_t m_translationOffset[0x10]; // 0x30 Vector
};

struct MotionMatchingInstanceData {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0x2C]; // 0x0
    std::uint8_t m_currentSelection[0x58]; // 0x2C MotionSelection
    std::uint8_t m_previousSelection[0x9C]; // 0x84 MotionSelection
};

struct CMotionGraphUpdateNode {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x58]; // 0x0
    std::uint8_t m_pMotionGraph[0x10]; // 0x58 CSmartPtr<CMotionGraph>
};

struct CNmFloatAngleMathNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nInputValueNodeIdx[0x2]; // 0x10 int16
    std::uint8_t m_operation[0x6]; // 0x12 CNmFloatAngleMathNode::Operation_t
};

struct PulseCursorID_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_Value[0x4]; // 0x0 int32
};

struct CAnimParamHandle {
    static constexpr std::size_t size = 0x2;
    std::uint8_t m_type[0x1]; // 0x0 AnimParamType_t
    std::uint8_t m_index[0x1]; // 0x1 uint8
};

struct WeightList {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_name[0x8]; // 0x0 CUtlString
    std::uint8_t m_weights[0x18]; // 0x8 CUtlVector<float32>
};

struct MotionIndex {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_nGroup[0x2]; // 0x0 uint16
    std::uint8_t m_nMotion[0x2]; // 0x2 uint16
};

struct FollowAttachmentSettings_t {
    static constexpr std::size_t size = 0x90;
    std::uint8_t m_attachment[0x80]; // 0x0 CAnimAttachment
    std::uint8_t m_boneIndex[0x4]; // 0x80 int32
    std::uint8_t m_attachmentHandle[0x1]; // 0x84 AttachmentHandle_t
    std::uint8_t m_bMatchTranslation[0x1]; // 0x85 bool
    std::uint8_t m_bMatchRotation[0xA]; // 0x86 bool
};

struct CNmReferencedGraphNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nReferencedGraphIdx[0x2]; // 0x10 int16
    std::uint8_t m_nFallbackNodeIdx[0x6]; // 0x12 int16
};

struct AnimNodeID {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_id[0x4]; // 0x0 uint32
};

struct CNmClipSelectorNode__CDefinition {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_optionNodeIndices[0x18]; // 0x10 CUtlLeanVectorFixedGrowable<int16,8>
    std::uint8_t m_conditionNodeIndices[0x18]; // 0x28 CUtlLeanVectorFixedGrowable<int16,8>
};

struct CLookComponentUpdater {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x34]; // 0x0
    std::uint8_t m_hLookHeading[0x2]; // 0x34 CAnimParamHandle
    std::uint8_t m_hLookHeadingNormalized[0x2]; // 0x36 CAnimParamHandle
    std::uint8_t m_hLookHeadingVelocity[0x2]; // 0x38 CAnimParamHandle
    std::uint8_t m_hLookPitch[0x2]; // 0x3A CAnimParamHandle
    std::uint8_t m_hLookDistance[0x2]; // 0x3C CAnimParamHandle
    std::uint8_t m_hLookDirection[0x2]; // 0x3E CAnimParamHandle
    std::uint8_t m_hLookTarget[0x2]; // 0x40 CAnimParamHandle
    std::uint8_t m_hLookTargetWorldSpace[0x2]; // 0x42 CAnimParamHandle
    std::uint8_t m_bNetworkLookTarget[0x4]; // 0x44 bool
};

struct CNmIsExternalPoseSetNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nExternalPoseNodeIdx[0x8]; // 0x10 int16
};

struct CAnimGraphNetworkSettings {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x20]; // 0x0
    std::uint8_t m_bNetworkingEnabled[0x8]; // 0x20 bool
};

struct CSingleFrameUpdateNode {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x58]; // 0x0
    std::uint8_t m_actions[0x18]; // 0x58 CUtlVector<CSmartPtr<CAnimActionUpdater>>
    std::uint8_t m_hPoseCacheHandle[0x4]; // 0x70 CPoseHandle
    std::uint8_t m_hSequence[0x4]; // 0x74 HSequence
    std::uint8_t m_flCycle[0x8]; // 0x78 float32
};

struct CNmChainLookatNode__CDefinition {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_endEffectorBoneID[0x8]; // 0x18 CGlobalSymbol
    std::uint8_t m_endEffectorForwardAxis[0xC]; // 0x20 Vector
    std::uint8_t m_endEffectorOffset[0xC]; // 0x2C Vector
    std::uint8_t m_nLookatTargetNodeIdx[0x2]; // 0x38 int16
    std::uint8_t m_nEnabledNodeIdx[0x2]; // 0x3A int16
    std::uint8_t m_flBlendTimeSeconds[0x4]; // 0x3C float32
    std::uint8_t m_chainWeights[0x30]; // 0x40 CUtlVectorFixedGrowable<float32,5>
    std::uint8_t m_nChainLength[0x1]; // 0x70 uint8
    std::uint8_t m_bIsTargetInWorldSpace[0x7]; // 0x71 bool
};

struct CNmFollowBoneNode__CDefinition {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_bone[0x8]; // 0x18 CGlobalSymbol
    std::uint8_t m_followTargetBone[0x8]; // 0x20 CGlobalSymbol
    std::uint8_t m_nEnabledNodeIdx[0x2]; // 0x28 int16
    std::uint8_t m_mode[0x6]; // 0x2A NmFollowBoneMode_t
};

struct CBlockSelectionMetricEvaluator {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x50]; // 0x0
};

struct MovementData {
    static constexpr std::size_t size = 0xE8;
    std::uint8_t m_goalWayPointPos[0xC]; // 0x0 Vector
    std::uint8_t m_vMoveDir[0x14]; // 0xC CAnimNetVar<Vector>
    std::uint8_t m_vAcceleration[0x14]; // 0x20 CAnimNetVar<Vector>
    std::uint8_t m_flCurrentMoveSpeed[0xC]; // 0x34 CAnimNetVar<float32>
    std::uint8_t m_flTargetMoveSpeed[0xC]; // 0x40 CAnimNetVar<float32>
    std::uint8_t m_flGoalDistance[0xC]; // 0x4C CAnimNetVar<float32>
    std::uint8_t m_flBoundaryRadius[0xC]; // 0x58 CAnimNetVar<float32>
    std::uint8_t m_bGoalChanged[0x4]; // 0x64 bool
    std::uint8_t m_bHasPath[0xC]; // 0x68 CAnimNetVar<bool>
    std::uint8_t m_flFacingHeading[0xC]; // 0x74 CAnimNetVar<float32>
    std::uint8_t m_vManualFacingDirection[0xC]; // 0x80 Vector
    std::uint8_t m_vManualFacingTarget[0xC]; // 0x8C VectorWS
    std::uint8_t m_nFacingMode[0xC]; // 0x98 CAnimNetVar<uint8>
    std::uint8_t m_bForceFacing[0xC]; // 0xA4 CAnimNetVar<bool>
    std::uint8_t m_nActiveMotorIndex[0xC]; // 0xB0 CAnimNetVar<int32>
    std::uint8_t m_bOnGround[0xC]; // 0xBC CAnimNetVar<bool>
    std::uint8_t m_vFacingPosition[0x14]; // 0xC8 CAnimNetVar<Vector>
    std::uint8_t m_vPrevFacingPosition[0xC]; // 0xDC Vector
};

struct CRemapValueComponentUpdater {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_items[0x18]; // 0x30 CUtlVector<CRemapValueUpdateItem>
};

struct CModelConfigList {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_bHideMaterialGroupInTools[0x1]; // 0x0 bool
    std::uint8_t m_bHideRenderColorInTools[0x7]; // 0x1 bool
    std::uint8_t m_Configs[0x18]; // 0x8 CUtlVector<CModelConfig*>
};

struct CSeqAutoLayerFlag {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_bPost[0x1]; // 0x0 bool
    std::uint8_t m_bSpline[0x1]; // 0x1 bool
    std::uint8_t m_bXFade[0x1]; // 0x2 bool
    std::uint8_t m_bNoBlend[0x1]; // 0x3 bool
    std::uint8_t m_bLocal[0x1]; // 0x4 bool
    std::uint8_t m_bPose[0x1]; // 0x5 bool
    std::uint8_t m_bFetchFrame[0x1]; // 0x6 bool
    std::uint8_t m_bSubtract[0x1]; // 0x7 bool
};

struct AnimStateID {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_id[0x4]; // 0x0 uint32
};

struct CNmIDEventConditionNode__CDefinition {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nSourceStateNodeIdx[0x4]; // 0x10 int16
    std::uint8_t m_eventConditionRules[0x4]; // 0x14 CNmBitFlags
    std::uint8_t m_eventIDs[0x40]; // 0x18 CUtlVectorFixedGrowable<CGlobalSymbol,5>
};

struct ModelBoneFlexDriver_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_boneName[0x8]; // 0x0 CUtlString
    std::uint8_t m_boneNameToken[0x8]; // 0x8 uint32
    std::uint8_t m_controls[0x18]; // 0x10 CUtlVector<ModelBoneFlexDriverControl_t>
};

struct CMorphData {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_name[0x8]; // 0x0 CUtlString
    std::uint8_t m_morphRectDatas[0x18]; // 0x8 CUtlVector<CMorphRectData>
};

struct CFootPinningUpdateNode {
    static constexpr std::size_t size = 0xD0;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t m_poseOpFixedData[0x30]; // 0x78 FootPinningPoseOpFixedData_t
    std::uint8_t m_eTimingSource[0x8]; // 0xA8 FootPinningTimingSource
    std::uint8_t m_params[0x18]; // 0xB0 CUtlVector<CAnimParamHandle>
    std::uint8_t m_bResetChild[0x8]; // 0xC8 bool
};

struct CSeqPoseSetting {
    static constexpr std::size_t size = 0x40;
    std::uint8_t m_sPoseParameter[0x10]; // 0x0 CBufferString
    std::uint8_t m_sAttachment[0x10]; // 0x10 CBufferString
    std::uint8_t m_sReferenceSequence[0x10]; // 0x20 CBufferString
    std::uint8_t m_flValue[0x4]; // 0x30 float32
    std::uint8_t m_bX[0x1]; // 0x34 bool
    std::uint8_t m_bY[0x1]; // 0x35 bool
    std::uint8_t m_bZ[0x2]; // 0x36 bool
    std::uint8_t m_eType[0x8]; // 0x38 int32
};

struct PulseGraphExecutionHistoryCursorDesc_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t vecAncestorCursorIDs[0x18]; // 0x0 CUtlVector<PulseCursorID_t>
    std::uint8_t nSpawnNodeID[0x4]; // 0x18 PulseDocNodeID_t
    std::uint8_t nRetiredAtNodeID[0x4]; // 0x1C PulseDocNodeID_t
    std::uint8_t flLastReferenced[0x4]; // 0x20 float32
    std::uint8_t nLastValidEntryIdx[0x4]; // 0x24 int32
    std::uint8_t bWasAnObservableComputation[0x8]; // 0x28 bool
};

struct CNmVirtualParameterFloatNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nChildNodeIdx[0x8]; // 0x10 int16
};

struct CAttachment {
    static constexpr std::size_t size = 0x90;
    std::uint8_t m_name[0x8]; // 0x0 CUtlString
    std::uint8_t m_influenceNames[0x18]; // 0x8 CUtlString[3]
    std::uint8_t m_vInfluenceRotations[0x30]; // 0x20 Quaternion[3]
    std::uint8_t m_vInfluenceOffsets[0x24]; // 0x50 Vector[3]
    std::uint8_t m_influenceWeights[0xC]; // 0x74 float32[3]
    std::uint8_t m_bInfluenceRootTransform[0x3]; // 0x80 bool[3]
    std::uint8_t m_nInfluences[0x1]; // 0x83 uint8
    std::uint8_t m_bIgnoreRotation[0xC]; // 0x84 bool
};

struct CSequenceUpdateNodeBase {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x6C]; // 0x0
    std::uint8_t m_playbackSpeed[0x4]; // 0x6C float32
    std::uint8_t m_bLoop[0x8]; // 0x70 bool
};

struct CDrawCullingData {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_ConeAxis[0x3]; // 0x0 int8[3]
    std::uint8_t m_ConeCutoff[0x1]; // 0x3 int8
};

struct VPhysXJoint_t {
    static constexpr std::size_t size = 0xD0;
    std::uint8_t m_nType[0x2]; // 0x0 uint16
    std::uint8_t m_nBody1[0x2]; // 0x2 uint16
    std::uint8_t m_nBody2[0x2]; // 0x4 uint16
    std::uint8_t m_nFlags[0xA]; // 0x6 uint16
    std::uint8_t m_Frame1[0x20]; // 0x10 CTransform
    std::uint8_t m_Frame2[0x20]; // 0x30 CTransform
    std::uint8_t m_bEnableCollision[0x1]; // 0x50 bool
    std::uint8_t m_bIsLinearConstraintDisabled[0x1]; // 0x51 bool
    std::uint8_t m_bIsAngularConstraintDisabled[0x1]; // 0x52 bool
    std::uint8_t m_bEnableLinearLimit[0x1]; // 0x53 bool
    std::uint8_t m_LinearLimit[0x8]; // 0x54 VPhysXRange_t
    std::uint8_t m_bEnableLinearMotor[0x4]; // 0x5C bool
    std::uint8_t m_vLinearTargetVelocity[0xC]; // 0x60 Vector
    std::uint8_t m_flMaxForce[0x4]; // 0x6C float32
    std::uint8_t m_bEnableSwingLimit[0x4]; // 0x70 bool
    std::uint8_t m_SwingLimit[0x8]; // 0x74 VPhysXRange_t
    std::uint8_t m_bEnableTwistLimit[0x4]; // 0x7C bool
    std::uint8_t m_TwistLimit[0x8]; // 0x80 VPhysXRange_t
    std::uint8_t m_bEnableAngularMotor[0x4]; // 0x88 bool
    std::uint8_t m_vAngularTargetVelocity[0xC]; // 0x8C Vector
    std::uint8_t m_flMaxTorque[0x4]; // 0x98 float32
    std::uint8_t m_flLinearFrequency[0x4]; // 0x9C float32
    std::uint8_t m_flLinearDampingRatio[0x4]; // 0xA0 float32
    std::uint8_t m_flAngularFrequency[0x4]; // 0xA4 float32
    std::uint8_t m_flAngularDampingRatio[0x4]; // 0xA8 float32
    std::uint8_t m_flFriction[0x4]; // 0xAC float32
    std::uint8_t m_flElasticity[0x4]; // 0xB0 float32
    std::uint8_t m_flElasticDamping[0x4]; // 0xB4 float32
    std::uint8_t m_flPlasticity[0x8]; // 0xB8 float32
    std::uint8_t m_Tag[0x10]; // 0xC0 CUtlString
};

struct CStateNodeTransitionData {
    static constexpr std::size_t size = 0x1C;
    std::uint8_t m_curve[0x8]; // 0x0 CBlendCurve
    std::uint8_t m_blendDuration[0x8]; // 0x8 CAnimValue<float32>
    std::uint8_t m_resetCycleValue[0xC]; // 0x10 CAnimValue<float32>
};

struct CTimeRemainingMetricEvaluator {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x50]; // 0x0
    std::uint8_t m_bMatchByTimeRemaining[0x4]; // 0x50 bool
    std::uint8_t m_flMaxTimeRemaining[0x4]; // 0x54 float32
    std::uint8_t m_bFilterByTimeRemaining[0x4]; // 0x58 bool
    std::uint8_t m_flMinTimeRemaining[0x4]; // 0x5C float32
};

struct CParticleInput {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct PulseRuntimeTempVarIndex_t {
    static constexpr std::size_t size = 0x2;
    std::uint8_t m_Value[0x2]; // 0x0 int16
};

struct CModelConfigElement {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_ElementName[0x8]; // 0x8 CUtlString
    std::uint8_t m_NestedElements[0x38]; // 0x10 CUtlVector<CModelConfigElement*>
};

struct CNmControlParameterVectorNode__CDefinition {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct FootFixedSettings {
    static constexpr std::size_t size = 0x40;
    std::uint8_t m_traceSettings[0x10]; // 0x0 TraceSettings_t
    std::uint8_t m_vFootBaseBindPosePositionMS[0x10]; // 0x10 VectorAligned
    std::uint8_t m_flFootBaseLength[0x4]; // 0x20 float32
    std::uint8_t m_flMaxRotationLeft[0x4]; // 0x24 float32
    std::uint8_t m_flMaxRotationRight[0x4]; // 0x28 float32
    std::uint8_t m_footstepLandedTagIndex[0x4]; // 0x2C int32
    std::uint8_t m_bEnableTracing[0x4]; // 0x30 bool
    std::uint8_t m_flTraceAngleBlend[0x4]; // 0x34 float32
    std::uint8_t m_nDisableTagIndex[0x4]; // 0x38 int32
    std::uint8_t m_nFootIndex[0x4]; // 0x3C int32
};

struct CNmBoneMaskSwitchNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nSwitchValueNodeIdx[0x2]; // 0x10 int16
    std::uint8_t m_nTrueValueNodeIdx[0x2]; // 0x12 int16
    std::uint8_t m_nFalseValueNodeIdx[0x4]; // 0x14 int16
    std::uint8_t m_flBlendTimeSeconds[0x4]; // 0x18 float32
    std::uint8_t m_bSwitchDynamically[0x4]; // 0x1C bool
};

struct CModelConfig {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_ConfigName[0x8]; // 0x0 CUtlString
    std::uint8_t m_Elements[0x18]; // 0x8 CUtlVector<CModelConfigElement*>
    std::uint8_t m_bTopLevel[0x1]; // 0x20 bool
    std::uint8_t m_bActiveInEditorByDefault[0x7]; // 0x21 bool
};

struct AnimComponentID {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_id[0x4]; // 0x0 uint32
};

struct VPhysXAggregateData_t {
    static constexpr std::size_t size = 0x150;
    std::uint8_t m_nFlags[0x2]; // 0x0 uint16
    std::uint8_t m_nRefCounter[0x2]; // 0x2 uint16
    std::uint8_t m_bCompoundsPacked[0x4]; // 0x4 bool
    std::uint8_t m_bonesHash[0x18]; // 0x8 CUtlVector<uint32>
    std::uint8_t m_boneNames[0x18]; // 0x20 CUtlVector<CUtlString>
    std::uint8_t m_indexNames[0x18]; // 0x38 CUtlVector<uint16>
    std::uint8_t m_indexHash[0x18]; // 0x50 CUtlVector<uint16>
    std::uint8_t m_bindPose[0x18]; // 0x68 CUtlVector<matrix3x4a_t>
    std::uint8_t m_parts[0x18]; // 0x80 CUtlVector<VPhysXBodyPart_t>
    std::uint8_t m_shapeMarkups[0x18]; // 0x98 CUtlVector<PhysShapeMarkup_t>
    std::uint8_t m_constraints2[0x18]; // 0xB0 CUtlVector<VPhysXConstraint2_t>
    std::uint8_t m_joints[0x18]; // 0xC8 CUtlVector<VPhysXJoint_t>
    std::uint8_t m_pFeModel[0x8]; // 0xE0 PhysFeModelDesc_t*
    std::uint8_t m_boneParents[0x18]; // 0xE8 CUtlVector<uint16>
    std::uint8_t m_surfacePropertyHashes[0x18]; // 0x100 CUtlVector<uint32>
    std::uint8_t m_collisionAttributes[0x18]; // 0x118 CUtlVector<VPhysXCollisionAttributes_t>
    std::uint8_t m_debugPartNames[0x18]; // 0x130 CUtlVector<CUtlString>
    std::uint8_t m_embeddedKeyvalues[0x8]; // 0x148 CUtlString
};

struct CNmGraphDefinition {
    static constexpr std::size_t size = 0x1B8;
    std::uint8_t m_variationID[0x8]; // 0x0 CGlobalSymbol
    std::uint8_t m_skeleton[0x8]; // 0x8 CStrongHandle<InfoForResourceTypeCNmSkeleton>
    std::uint8_t m_supportedSecondarySkeletons[0x18]; // 0x10 CUtlVector<CStrongHandle<InfoForResourceTypeCNmSkeleton>>
    std::uint8_t m_pUserData[0x8]; // 0x28 CNmGraphVariationUserData*
    std::uint8_t m_persistentNodeIndices[0x18]; // 0x30 CUtlVector<int16>
    std::uint8_t m_nRootNodeIdx[0x8]; // 0x48 int16
    std::uint8_t m_controlParameterIDs[0x18]; // 0x50 CUtlVector<CGlobalSymbol>
    std::uint8_t m_virtualParameterIDs[0x18]; // 0x68 CUtlVector<CGlobalSymbol>
    std::uint8_t m_virtualParameterNodeIndices[0x18]; // 0x80 CUtlVector<int16>
    std::uint8_t m_referencedGraphSlots[0x18]; // 0x98 CUtlVector<CNmGraphDefinition::ReferencedGraphSlot_t>
    std::uint8_t m_externalGraphSlots[0x18]; // 0xB0 CUtlVector<CNmGraphDefinition::ExternalGraphSlot_t>
    std::uint8_t m_externalPoseSlots[0x88]; // 0xC8 CUtlVector<CNmGraphDefinition::ExternalPoseSlot_t>
    std::uint8_t m_nodePaths[0x18]; // 0x150 CUtlVector<CUtlString>
    std::uint8_t m_resources[0x50]; // 0x168 CUtlVector<CStrongHandleVoid>
};

struct CNmSelectorNode__CDefinition {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_optionNodeIndices[0x18]; // 0x10 CUtlLeanVectorFixedGrowable<int16,8>
    std::uint8_t m_conditionNodeIndices[0x18]; // 0x28 CUtlLeanVectorFixedGrowable<int16,8>
};

struct CAnimDemoCaptureSettings {
    static constexpr std::size_t size = 0x80;
    std::uint8_t m_vecErrorRangeSplineRotation[0x8]; // 0x0 Vector2D
    std::uint8_t m_vecErrorRangeSplineTranslation[0x8]; // 0x8 Vector2D
    std::uint8_t m_vecErrorRangeSplineScale[0x8]; // 0x10 Vector2D
    std::uint8_t m_flIkRotation_MaxSplineError[0x4]; // 0x18 float32
    std::uint8_t m_flIkTranslation_MaxSplineError[0x4]; // 0x1C float32
    std::uint8_t m_vecErrorRangeQuantizationRotation[0x8]; // 0x20 Vector2D
    std::uint8_t m_vecErrorRangeQuantizationTranslation[0x8]; // 0x28 Vector2D
    std::uint8_t m_vecErrorRangeQuantizationScale[0x8]; // 0x30 Vector2D
    std::uint8_t m_flIkRotation_MaxQuantizationError[0x4]; // 0x38 float32
    std::uint8_t m_flIkTranslation_MaxQuantizationError[0x4]; // 0x3C float32
    std::uint8_t m_baseSequence[0x8]; // 0x40 CUtlString
    std::uint8_t m_nBaseSequenceFrame[0x4]; // 0x48 int32
    std::uint8_t m_boneSelectionMode[0x4]; // 0x4C EDemoBoneSelectionMode
    std::uint8_t m_bones[0x18]; // 0x50 CUtlVector<BoneDemoCaptureSettings_t>
    std::uint8_t m_ikChains[0x18]; // 0x68 CUtlVector<IKDemoCaptureSettings_t>
};

struct IKDemoCaptureSettings_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_parentBoneName[0x8]; // 0x0 CUtlString
    std::uint8_t m_eMode[0x8]; // 0x8 IKChannelMode
    std::uint8_t m_ikChainName[0x8]; // 0x10 CUtlString
    std::uint8_t m_oneBoneStart[0x8]; // 0x18 CUtlString
    std::uint8_t m_oneBoneEnd[0x8]; // 0x20 CUtlString
};

struct CSeqMultiFetchFlag {
    static constexpr std::size_t size = 0x6;
    std::uint8_t m_bRealtime[0x1]; // 0x0 bool
    std::uint8_t m_bCylepose[0x1]; // 0x1 bool
    std::uint8_t m_b0D[0x1]; // 0x2 bool
    std::uint8_t m_b1D[0x1]; // 0x3 bool
    std::uint8_t m_b2D[0x1]; // 0x4 bool
    std::uint8_t m_b2D_TRI[0x1]; // 0x5 bool
};

struct PulseRegisterMap_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_Inparams[0x10]; // 0x0 KeyValues3
    std::uint8_t m_InparamsWhichCanBeMoved[0x10]; // 0x10 CKV3MemberNameSet
    std::uint8_t m_Outparams[0x10]; // 0x20 KeyValues3
};

struct VPhysXRange_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_flMin[0x4]; // 0x0 float32
    std::uint8_t m_flMax[0x4]; // 0x4 float32
};

struct CStopAtGoalUpdateNode {
    static constexpr std::size_t size = 0xA0;
    std::uint8_t pad_0[0x74]; // 0x0
    std::uint8_t m_flOuterRadius[0x4]; // 0x74 float32
    std::uint8_t m_flInnerRadius[0x4]; // 0x78 float32
    std::uint8_t m_flMaxScale[0x4]; // 0x7C float32
    std::uint8_t m_flMinScale[0x8]; // 0x80 float32
    std::uint8_t m_damping[0x18]; // 0x88 CAnimInputDamping
};

struct CNmIDEventPercentageThroughNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nSourceStateNodeIdx[0x4]; // 0x10 int16
    std::uint8_t m_eventConditionRules[0x4]; // 0x14 CNmBitFlags
    std::uint8_t m_eventID[0x8]; // 0x18 CGlobalSymbol
};

struct CAnimBoneDifference {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_name[0x10]; // 0x0 CBufferString
    std::uint8_t m_parent[0x10]; // 0x10 CBufferString
    std::uint8_t m_posError[0xC]; // 0x20 Vector
    std::uint8_t m_bHasRotation[0x1]; // 0x2C bool
    std::uint8_t m_bHasMovement[0x3]; // 0x2D bool
};

struct CNmCachedBoolNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nInputValueNodeIdx[0x4]; // 0x10 int16
    std::uint8_t m_mode[0x4]; // 0x14 NmCachedValueMode_t
};

struct CAnimCycle {
    static constexpr std::size_t size = 0x4;
    std::uint8_t pad_0[0x4]; // 0x0
};

struct CActionComponentUpdater {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_actions[0x18]; // 0x30 CUtlVector<CSmartPtr<CAnimActionUpdater>>
};

struct CDirectionalBlendInstanceData {
    static constexpr std::size_t size = 0x50;
    std::uint8_t m_dampedValue[0x14]; // 0x0 float32
    std::uint8_t m_flCycle[0x4]; // 0x14 float32
    std::uint8_t m_flPrevCycle[0x4]; // 0x18 float32
    std::uint8_t m_flPlaybackRate[0xC]; // 0x1C CAnimNetVar<float32>
    std::uint8_t m_flCycleZeroTime[0xC]; // 0x28 CAnimNetVar<float32>
    std::uint8_t m_resetCycleValue[0xC]; // 0x34 CAnimNetVar<float32>
    std::uint8_t m_resetCount[0x10]; // 0x40 CAnimNetVar<float32>
};

struct CDampedPathAnimMotorUpdater {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x2C]; // 0x0
    std::uint8_t m_flAnticipationTime[0x4]; // 0x2C float32
    std::uint8_t m_flMinSpeedScale[0x4]; // 0x30 float32
    std::uint8_t m_hAnticipationPosParam[0x2]; // 0x34 CAnimParamHandle
    std::uint8_t m_hAnticipationHeadingParam[0x2]; // 0x36 CAnimParamHandle
    std::uint8_t m_flSpringConstant[0x4]; // 0x38 float32
    std::uint8_t m_flMinSpringTension[0x4]; // 0x3C float32
    std::uint8_t m_flMaxSpringTension[0x8]; // 0x40 float32
};

struct CNmCachedFloatNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nInputValueNodeIdx[0x4]; // 0x10 int16
    std::uint8_t m_mode[0x4]; // 0x14 NmCachedValueMode_t
};

struct CNmFloatSwitchNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nSwitchValueNodeIdx[0x2]; // 0x10 int16
    std::uint8_t m_nTrueValueNodeIdx[0x2]; // 0x12 int16
    std::uint8_t m_nFalseValueNodeIdx[0x4]; // 0x14 int16
    std::uint8_t m_flFalseValue[0x4]; // 0x18 float32
    std::uint8_t m_flTrueValue[0x4]; // 0x1C float32
};

struct CModelConfigElement_SetMaterialGroupOnAttachedModels {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_MaterialGroupName[0x8]; // 0x48 CUtlString
};

struct CNmFloatChannelData {
    static constexpr std::size_t size = 0x58;
    std::uint8_t m_skeleton[0x8]; // 0x0 CStrongHandle<InfoForResourceTypeCNmSkeleton>
    std::uint8_t m_setID[0x8]; // 0x8 CGlobalSymbol
    std::uint8_t m_channelSettings[0x18]; // 0x10 CUtlVector<CNmFloatChannelData::ChannelSettings_t>
    std::uint8_t m_compressedData[0x18]; // 0x28 CUtlVector<uint16>
    std::uint8_t m_compressedOffsets[0x18]; // 0x40 CUtlVector<uint32>
};

struct CNmEntityAttributeEventBase {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_target[0x8]; // 0x18 CNmEventTargetEntity_t
    std::uint8_t m_attributeName[0x18]; // 0x20 CUtlString
};

struct CNmVirtualParameterBoneMaskNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nChildNodeIdx[0x8]; // 0x10 int16
};

struct SequenceData {
    static constexpr std::size_t size = 0x38;
    std::uint8_t m_hSequence[0x4]; // 0x0 HSequence
    std::uint8_t m_cycle[0x34]; // 0x4 CNetworkedCycle
};

struct CPathHelperUpdateNode {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t m_flStoppingRadius[0x4]; // 0x70 float32
    std::uint8_t m_flStoppingSpeedScale[0x4]; // 0x74 float32
};

struct MaterialGroup_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_name[0x8]; // 0x0 CUtlString
    std::uint8_t m_materials[0x18]; // 0x8 CUtlVector<CStrongHandle<InfoForResourceTypeIMaterial2>>
};

struct CMorphBundleData {
    static constexpr std::size_t size = 0x38;
    std::uint8_t m_flULeftSrc[0x4]; // 0x0 float32
    std::uint8_t m_flVTopSrc[0x4]; // 0x4 float32
    std::uint8_t m_offsets[0x18]; // 0x8 CUtlVector<float32>
    std::uint8_t m_ranges[0x18]; // 0x20 CUtlVector<float32>
};

struct CModelConfigElement_UserPick {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Choices[0x18]; // 0x48 CUtlVector<CUtlString>
};

struct CSolveIKTargetHandle_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_positionHandle[0x2]; // 0x0 CAnimParamHandle
    std::uint8_t m_orientationHandle[0x2]; // 0x2 CAnimParamHandle
};

struct CFootAdjustmentUpdateNode {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t m_clips[0x18]; // 0x78 CUtlVector<HSequence>
    std::uint8_t m_hBasePoseCacheHandle[0x4]; // 0x90 CPoseHandle
    std::uint8_t m_facingTarget[0x4]; // 0x94 CAnimParamHandle
    std::uint8_t m_flTurnTimeMin[0x4]; // 0x98 float32
    std::uint8_t m_flTurnTimeMax[0x4]; // 0x9C float32
    std::uint8_t m_flStepHeightMax[0x4]; // 0xA0 float32
    std::uint8_t m_flStepHeightMaxAngle[0x4]; // 0xA4 float32
    std::uint8_t m_bResetChild[0x1]; // 0xA8 bool
    std::uint8_t m_bAnimationDriven[0x7]; // 0xA9 bool
};

struct CChoreoUpdateNode {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x78]; // 0x0
};

struct CAimConstraint {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t m_qAimOffset[0x10]; // 0x60 Quaternion
    std::uint8_t m_nUpType[0x10]; // 0x70 uint32
};

struct CMaterialDrawDescriptor__RigidMeshPart_t {
    static constexpr std::size_t size = 0xC;
    std::uint8_t m_nRigidBLASIndex[0x2]; // 0x0 uint16
    std::uint8_t m_nBoneIndex[0x2]; // 0x2 int16
    std::uint8_t m_nStartIndexOffset[0x4]; // 0x4 uint32
    std::uint8_t m_nPrimitiveCount[0x4]; // 0x8 uint32
};

struct CFootFallAnimTag {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x58]; // 0x0
    std::uint8_t m_foot[0x8]; // 0x58 FootFallTagFoot_t
};

struct CMaterialDrawDescriptor {
    static constexpr std::size_t size = 0x120;
    std::uint8_t m_flUvDensity[0x4]; // 0x0 float32
    std::uint8_t m_vTintColor[0xC]; // 0x4 Vector
    std::uint8_t m_flAlpha[0x8]; // 0x10 float32
    std::uint8_t m_nNumMeshlets[0x8]; // 0x18 uint32
    std::uint8_t m_nFirstMeshlet[0x4]; // 0x20 uint32
    std::uint8_t m_nAppliedIndexOffset[0x4]; // 0x24 uint32
    std::uint8_t m_nEmissivePrimitiveCount[0x4]; // 0x28 int32
    std::uint8_t m_nDepthVertexBufferIndex[0x1]; // 0x2C uint8
    std::uint8_t m_nMeshletPackedIVBIndex[0x3]; // 0x2D uint8
    std::uint8_t m_rigidMeshParts[0x10]; // 0x30 CUtlLeanVector<CMaterialDrawDescriptor::RigidMeshPart_t>
    std::uint8_t m_rootBvhNodes[0x10]; // 0x40 CUtlLeanVector<uint16>
    std::uint8_t m_nPrimitiveType[0x4]; // 0x50 RenderPrimitiveType_t
    std::uint8_t m_nBaseVertex[0x4]; // 0x54 int32
    std::uint8_t m_nVertexCount[0x4]; // 0x58 int32
    std::uint8_t m_nStartIndex[0x4]; // 0x5C int32
    std::uint8_t m_nIndexCount[0x68]; // 0x60 int32
    std::uint8_t m_indexBuffer[0x20]; // 0xC8 CRenderBufferBinding
    std::uint8_t m_meshletPackedIVB[0x30]; // 0xE8 CRenderBufferBinding
    std::uint8_t m_material[0x8]; // 0x118 CStrongHandle<InfoForResourceTypeIMaterial2>
};

struct CNmSkeleton {
    static constexpr std::size_t size = 0x100;
    std::uint8_t m_ID[0x8]; // 0x0 CGlobalSymbol
    std::uint8_t m_boneIDs[0x10]; // 0x8 CUtlLeanVector<CGlobalSymbol>
    std::uint8_t m_parentIndices[0x18]; // 0x18 CUtlVector<int32>
    std::uint8_t m_parentSpaceReferencePose[0x18]; // 0x30 CUtlVector<CTransform>
    std::uint8_t m_modelSpaceReferencePose[0x18]; // 0x48 CUtlVector<CTransform>
    std::uint8_t m_numBonesToSampleAtLowLOD[0x4]; // 0x60 int32
    std::uint8_t m_bIsPropSkeleton[0x24]; // 0x64 bool
    std::uint8_t m_maskDefinitions[0x20]; // 0x88 CUtlLeanVector<NmBoneMaskSetDefinition_t>
    std::uint8_t m_secondarySkeletons[0x10]; // 0xA8 CUtlLeanVector<CNmSkeleton::SecondarySkeleton_t>
    std::uint8_t m_floatChannelSets[0x10]; // 0xB8 CUtlLeanVector<CNmFloatChannelSet_t>
    std::uint8_t m_contactConfigs[0x18]; // 0xC8 CUtlVector<CNmSkeleton::ContactConfig_t>
    std::uint8_t m_gameplayRelevantBoneIndices[0x18]; // 0xE0 CUtlVector<int32>
    std::uint8_t m_nSpecialDependencyHash[0x8]; // 0xF8 int64
};

struct CStepsRemainingMetricEvaluator {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x50]; // 0x0
    std::uint8_t m_footIndices[0x18]; // 0x50 CUtlVector<int32>
    std::uint8_t m_flMinStepsRemaining[0x8]; // 0x68 float32
};

struct CNmVelocityBlendNode__CDefinition {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x30]; // 0x0
};

struct CNmZeroPoseTask {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x70]; // 0x0
};

struct CNmClothEvent {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_type[0x4]; // 0x18 CNmClothEvent::Type_t
    std::uint8_t m_flStiffness[0x4]; // 0x1C float32
    std::uint8_t m_flSpeedIn[0x4]; // 0x20 float32
    std::uint8_t m_flSpeedOut[0x4]; // 0x24 float32
    std::uint8_t m_flLengthSeconds[0x8]; // 0x28 float32
    std::uint8_t m_vertexSetName[0x8]; // 0x30 CUtlString
    std::uint8_t m_effectName[0x8]; // 0x38 CUtlString
};

struct CBodyGroupSetting {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_BodyGroupName[0x8]; // 0x0 CUtlString
    std::uint8_t m_nBodyGroupOption[0x8]; // 0x8 int32
};

struct CVectorQuantizer {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_centroidVectors[0x18]; // 0x0 CUtlVector<float32>
    std::uint8_t m_nCentroids[0x4]; // 0x18 int32
    std::uint8_t m_nDimensions[0x4]; // 0x1C int32
};

struct ParticleNamedValueConfiguration_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t m_ConfigName[0x8]; // 0x0 CUtlString
    std::uint8_t m_ConfigValue[0x10]; // 0x8 KeyValues3
    std::uint8_t m_BoundValuePath[0x8]; // 0x18 CUtlString
    std::uint8_t m_iAttachType[0x8]; // 0x20 ParticleAttachment_t
    std::uint8_t m_strEntityScope[0x8]; // 0x28 CUtlString
    std::uint8_t m_strAttachmentName[0x8]; // 0x30 CUtlString
};

struct CNmVectorCreateNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_inputVectorValueNodeIdx[0x2]; // 0x10 int16
    std::uint8_t m_inputValueXNodeIdx[0x2]; // 0x12 int16
    std::uint8_t m_inputValueYNodeIdx[0x2]; // 0x14 int16
    std::uint8_t m_inputValueZNodeIdx[0x2]; // 0x16 int16
};

struct CParticleVecInput {
    static constexpr std::size_t size = 0x6D8;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nType[0x4]; // 0x10 ParticleVecType_t
    std::uint8_t m_vLiteralValue[0xC]; // 0x14 Vector
    std::uint8_t m_LiteralColor[0x8]; // 0x20 Color
    std::uint8_t m_NamedValue[0x40]; // 0x28 CParticleNamedValueRef
    std::uint8_t m_bFollowNamedValue[0x4]; // 0x68 bool
    std::uint8_t m_nVectorAttribute[0x4]; // 0x6C ParticleAttributeIndex_t
    std::uint8_t m_vVectorAttributeScale[0xC]; // 0x70 Vector
    std::uint8_t m_nControlPoint[0x4]; // 0x7C int32
    std::uint8_t m_nDeltaControlPoint[0x4]; // 0x80 int32
    std::uint8_t m_vCPValueScale[0xC]; // 0x84 Vector
    std::uint8_t m_vCPRelativePosition[0xC]; // 0x90 Vector
    std::uint8_t m_vCPRelativeDir[0xC]; // 0x9C Vector
    std::uint8_t m_FloatComponentX[0x178]; // 0xA8 CParticleFloatInput
    std::uint8_t m_FloatComponentY[0x178]; // 0x220 CParticleFloatInput
    std::uint8_t m_FloatComponentZ[0x178]; // 0x398 CParticleFloatInput
    std::uint8_t m_FloatInterp[0x178]; // 0x510 CParticleFloatInput
    std::uint8_t m_flInterpInput0[0x4]; // 0x688 float32
    std::uint8_t m_flInterpInput1[0x4]; // 0x68C float32
    std::uint8_t m_vInterpOutput0[0xC]; // 0x690 Vector
    std::uint8_t m_vInterpOutput1[0xC]; // 0x69C Vector
    std::uint8_t m_Gradient[0x18]; // 0x6A8 CColorGradient
    std::uint8_t m_vRandomMin[0xC]; // 0x6C0 Vector
    std::uint8_t m_vRandomMax[0xC]; // 0x6CC Vector
};

struct CNmStateNode__CDefinition {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nChildNodeIdx[0x8]; // 0x10 int16
    std::uint8_t m_entryEvents[0x20]; // 0x18 CUtlLeanVectorFixedGrowable<CGlobalSymbol,3>
    std::uint8_t m_executeEvents[0x20]; // 0x38 CUtlLeanVectorFixedGrowable<CGlobalSymbol,3>
    std::uint8_t m_exitEvents[0x20]; // 0x58 CUtlLeanVectorFixedGrowable<CGlobalSymbol,3>
    std::uint8_t m_timedRemainingEvents[0x18]; // 0x78 CUtlLeanVectorFixedGrowable<CNmStateNode::TimedEvent_t,1>
    std::uint8_t m_timedElapsedEvents[0x18]; // 0x90 CUtlLeanVectorFixedGrowable<CNmStateNode::TimedEvent_t,1>
    std::uint8_t m_nLayerWeightNodeIdx[0x2]; // 0xA8 int16
    std::uint8_t m_nLayerRootMotionWeightNodeIdx[0x2]; // 0xAA int16
    std::uint8_t m_nLayerBoneMaskNodeIdx[0x2]; // 0xAC int16
    std::uint8_t m_bIsOffState[0x1]; // 0xAE bool
    std::uint8_t m_bUseActualElapsedTimeInStateForTimedEvents[0x1]; // 0xAF bool
};

struct CNmBoneMaskSelectorNode__CDefinition {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_defaultMaskNodeIdx[0x2]; // 0x10 int16
    std::uint8_t m_parameterValueNodeIdx[0x2]; // 0x12 int16
    std::uint8_t m_bSwitchDynamically[0x4]; // 0x14 bool
    std::uint8_t m_maskNodeIndices[0x18]; // 0x18 CUtlLeanVectorFixedGrowable<int16,8>
    std::uint8_t m_parameterValues[0x40]; // 0x30 CUtlLeanVectorFixedGrowable<CGlobalSymbol,7>
    std::uint8_t m_flBlendTimeSeconds[0x8]; // 0x70 float32
};

struct CNmVirtualParameterVectorNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nChildNodeIdx[0x8]; // 0x10 int16
};

struct CFootCycleMetricEvaluator {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x50]; // 0x0
    std::uint8_t m_footIndices[0x18]; // 0x50 CUtlVector<int32>
};

struct CNmConstIDNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_value[0x8]; // 0x10 CGlobalSymbol
};

struct CHitBox {
    static constexpr std::size_t size = 0x70;
    std::uint8_t m_name[0x8]; // 0x0 CUtlString
    std::uint8_t m_sSurfaceProperty[0x8]; // 0x8 CUtlString
    std::uint8_t m_sBoneName[0x8]; // 0x10 CUtlString
    std::uint8_t m_vMinBounds[0xC]; // 0x18 Vector
    std::uint8_t m_vMaxBounds[0xC]; // 0x24 Vector
    std::uint8_t m_flShapeRadius[0x4]; // 0x30 float32
    std::uint8_t m_nBoneNameHash[0x4]; // 0x34 uint32
    std::uint8_t m_nGroupId[0x4]; // 0x38 int32
    std::uint8_t m_nShapeType[0x1]; // 0x3C uint8
    std::uint8_t m_bTranslationOnly[0x3]; // 0x3D bool
    std::uint8_t m_CRC[0x4]; // 0x40 uint32
    std::uint8_t m_cRenderColor[0x4]; // 0x44 Color
    std::uint8_t m_nHitBoxIndex[0x28]; // 0x48 uint16
};

struct CNmParameterizedSelectorNode__CDefinition {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_optionNodeIndices[0x18]; // 0x10 CUtlLeanVectorFixedGrowable<int16,8>
    std::uint8_t m_optionWeights[0x10]; // 0x28 CUtlLeanVectorFixedGrowable<uint8,8>
    std::uint8_t m_parameterNodeIdx[0x2]; // 0x38 int16
    std::uint8_t m_bIgnoreInvalidOptions[0x1]; // 0x3A bool
    std::uint8_t m_bHasWeightsSet[0x5]; // 0x3B bool
};

struct ModelSkeletonData_t {
    static constexpr std::size_t size = 0xA8;
    std::uint8_t m_boneName[0x18]; // 0x0 CUtlVector<CUtlString>
    std::uint8_t m_nParent[0x18]; // 0x18 CUtlVector<int16>
    std::uint8_t m_boneSphere[0x18]; // 0x30 CUtlVector<float32>
    std::uint8_t m_nFlag[0x18]; // 0x48 CUtlVector<uint32>
    std::uint8_t m_bonePosParent[0x18]; // 0x60 CUtlVector<Vector>
    std::uint8_t m_boneRotParent[0x18]; // 0x78 CUtlVector<QuaternionStorage>
    std::uint8_t m_boneScaleParent[0x18]; // 0x90 CUtlVector<float32>
};

struct CNmEvent {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_flStartTime[0x4]; // 0x8 NmPercent_t
    std::uint8_t m_flDuration[0x4]; // 0xC NmPercent_t
    std::uint8_t m_syncID[0x8]; // 0x10 CGlobalSymbol
};

struct NmCompressionSettings_t__QuantizationRange_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_flRangeStart[0x4]; // 0x0 float32
    std::uint8_t m_flRangeLength[0x4]; // 0x4 float32
};

struct CNmBlendTaskBase {
    static constexpr std::size_t size = 0x100;
    std::uint8_t pad_0[0x100]; // 0x0
};

struct TagSpan_t {
    static constexpr std::size_t size = 0xC;
    std::uint8_t m_tagIndex[0x4]; // 0x0 int32
    std::uint8_t m_startCycle[0x4]; // 0x4 float32
    std::uint8_t m_endCycle[0x4]; // 0x8 float32
};

struct CNmConstTargetNode__CDefinition {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_value[0x30]; // 0x10 CNmTarget
};

struct CRemapValueUpdateItem {
    static constexpr std::size_t size = 0x14;
    std::uint8_t m_hParamIn[0x2]; // 0x0 CAnimParamHandle
    std::uint8_t m_hParamOut[0x2]; // 0x2 CAnimParamHandle
    std::uint8_t m_flMinInputValue[0x4]; // 0x4 float32
    std::uint8_t m_flMaxInputValue[0x4]; // 0x8 float32
    std::uint8_t m_flMinOutputValue[0x4]; // 0xC float32
    std::uint8_t m_flMaxOutputValue[0x4]; // 0x10 float32
};

struct PermModelDataAnimatedMaterialAttribute_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_AttributeName[0x8]; // 0x0 CUtlString
    std::uint8_t m_nNumChannels[0x8]; // 0x8 int32
};

struct CMotionDataSet {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_groups[0x18]; // 0x0 CUtlVector<CMotionGraphGroup>
    std::uint8_t m_nDimensionCount[0x8]; // 0x18 int32
};

struct ParticleAttributeIndex_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_Value[0x4]; // 0x0 int32
};

struct CProductQuantizer {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_subQuantizers[0x18]; // 0x0 CUtlVector<CVectorQuantizer>
    std::uint8_t m_nDimensions[0x8]; // 0x18 int32
};

struct CChoiceUpdateNode {
    static constexpr std::size_t size = 0xC0;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t m_children[0x18]; // 0x60 CUtlVector<CAnimUpdateNodeRef>
    std::uint8_t m_weights[0x18]; // 0x78 CUtlVector<float32>
    std::uint8_t m_blendTimes[0x18]; // 0x90 CUtlVector<float32>
    std::uint8_t m_choiceMethod[0x4]; // 0xA8 ChoiceMethod
    std::uint8_t m_choiceChangeMethod[0x4]; // 0xAC ChoiceChangeMethod
    std::uint8_t m_blendMethod[0x4]; // 0xB0 ChoiceBlendMethod
    std::uint8_t m_blendTime[0x4]; // 0xB4 float32
    std::uint8_t m_bCrossFade[0x1]; // 0xB8 bool
    std::uint8_t m_bResetChosen[0x1]; // 0xB9 bool
    std::uint8_t m_bDontResetSameSelection[0x6]; // 0xBA bool
};

struct SkeletonAnimCapture_t__Bone_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t m_Name[0x10]; // 0x0 CUtlString
    std::uint8_t m_BindPose[0x20]; // 0x10 CTransform
    std::uint8_t m_nParent[0x10]; // 0x30 int32
};

struct CExpressionActionUpdater {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_hParam[0x2]; // 0x18 CAnimParamHandle
    std::uint8_t m_eParamType[0x2]; // 0x1A AnimParamType_t
    std::uint8_t m_hScript[0x4]; // 0x1C AnimScriptHandle
};

struct CNmFloatMathNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nInputValueNodeIdxA[0x2]; // 0x10 int16
    std::uint8_t m_nInputValueNodeIdxB[0x2]; // 0x12 int16
    std::uint8_t m_bReturnAbsoluteResult[0x1]; // 0x14 bool
    std::uint8_t m_bReturnNegatedResult[0x1]; // 0x15 bool
    std::uint8_t m_operator[0x2]; // 0x16 CNmFloatMathNode::Operator_t
    std::uint8_t m_flValueB[0x8]; // 0x18 float32
};

struct CAnimationGraphVisualizerLine {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t m_vWsPositionStart[0x10]; // 0x40 VectorAligned
    std::uint8_t m_vWsPositionEnd[0x10]; // 0x50 VectorAligned
    std::uint8_t m_Color[0x10]; // 0x60 Color
};

struct CCycleControlUpdateNode {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t m_valueSource[0x4]; // 0x70 AnimValueSource
    std::uint8_t m_paramIndex[0x2]; // 0x74 CAnimParamHandle
    std::uint8_t m_bLockWhenWaning[0x2]; // 0x76 bool
};

struct CNmTargetInfoNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nInputValueNodeIdx[0x4]; // 0x10 int16
    std::uint8_t m_infoType[0x4]; // 0x14 CNmTargetInfoNode::Info_t
    std::uint8_t m_bIsWorldSpaceTarget[0x8]; // 0x18 bool
};

struct CDampedValueComponentUpdater {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_items[0x18]; // 0x30 CUtlVector<CDampedValueUpdateItem>
};

struct CBaseConstraint {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x20]; // 0x0
    std::uint8_t m_name[0x8]; // 0x20 CUtlString
    std::uint8_t m_vUpVector[0x10]; // 0x28 Vector
    std::uint8_t m_slaves[0x10]; // 0x38 CUtlLeanVector<CConstraintSlave>
    std::uint8_t m_targets[0x18]; // 0x48 CUtlVector<CConstraintTarget>
};

struct CNmControlParameterFloatNode__CDefinition {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct BlendItem_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t m_tags[0x18]; // 0x0 CUtlVector<TagSpan_t>
    std::uint8_t m_pChild[0x10]; // 0x18 CAnimUpdateNodeRef
    std::uint8_t m_hSequence[0x4]; // 0x28 HSequence
    std::uint8_t m_vPos[0x8]; // 0x2C Vector2D
    std::uint8_t m_flDuration[0x4]; // 0x34 float32
    std::uint8_t m_bUseCustomDuration[0x8]; // 0x38 bool
};

struct DampedPathMotorInstanceData_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_vVelocity[0xC]; // 0x0 Vector
    std::uint8_t m_vAcceleration[0x18]; // 0xC Vector
    std::uint8_t m_bStopping[0x4]; // 0x24 bool
};

struct CNmIsExternalGraphSlotFilledNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nExternalGraphNodeIdx[0x8]; // 0x10 int16
};

struct CNewParticleEffect {
    static constexpr std::size_t size = 0xD8;
    std::uint8_t m_bDontRemove[0x10]; // 0x0 bitfield:1
    std::uint8_t m_pNext[0x8]; // 0x10 CNewParticleEffect*
    std::uint8_t m_pPrev[0x8]; // 0x18 CNewParticleEffect*
    std::uint8_t m_pParticles[0x8]; // 0x20 IParticleCollection*
    std::uint8_t m_pDebugName[0x18]; // 0x28 char*
    std::uint8_t m_vSortOrigin[0xC]; // 0x40 Vector
    std::uint8_t m_flScale[0x4]; // 0x4C float32
    std::uint8_t m_hOwner[0x8]; // 0x50 PARTICLE_EHANDLE__*
    std::uint8_t m_pOwningParticleProperty[0x18]; // 0x58 CParticleProperty*
    std::uint8_t m_flFreezeTransitionStart[0x4]; // 0x70 float32
    std::uint8_t m_flFreezeTransitionDuration[0x4]; // 0x74 float32
    std::uint8_t m_flFreezeTransitionOverride[0x4]; // 0x78 float32
    std::uint8_t m_LastMin[0xC]; // 0x7C Vector
    std::uint8_t m_LastMax[0xC]; // 0x88 Vector
    std::uint8_t m_nSplitScreenUser[0x4]; // 0x94 CSplitScreenSlot
    std::uint8_t m_vecAggregationCenter[0x38]; // 0x98 Vector
    std::uint8_t m_RefCount[0x8]; // 0xD0 int32
};

struct CNmClipNode__CDefinition {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nPlayInReverseValueNodeIdx[0x2]; // 0x10 int16
    std::uint8_t m_bSampleRootMotion[0x1]; // 0x12 bool
    std::uint8_t m_bAllowLooping[0x1]; // 0x13 bool
    std::uint8_t m_nDataSlotIdx[0x2]; // 0x14 int16
    std::uint8_t m_nResetTimeValueNodeIdx[0x2]; // 0x16 int16
    std::uint8_t m_graphEvents[0x28]; // 0x18 CUtlVectorFixedGrowable<CGlobalSymbol,2>
    std::uint8_t m_flSpeedMultiplier[0x4]; // 0x40 float32
    std::uint8_t m_nStartSyncEventOffset[0x4]; // 0x44 int32
};

struct CNmMaterialAttributeEvent {
    static constexpr std::size_t size = 0x130;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_target[0x8]; // 0x18 CNmEventTargetEntity_t
    std::uint8_t m_attributeName[0x8]; // 0x20 CUtlString
    std::uint8_t m_attributeNameToken[0x8]; // 0x28 CUtlStringToken
    std::uint8_t m_x[0x40]; // 0x30 CPiecewiseCurve
    std::uint8_t m_y[0x40]; // 0x70 CPiecewiseCurve
    std::uint8_t m_z[0x40]; // 0xB0 CPiecewiseCurve
    std::uint8_t m_w[0x40]; // 0xF0 CPiecewiseCurve
};

struct TagStatus {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_TagStatus[0x4]; // 0x0 TagActionStatus
    std::uint8_t m_flTagStartAnimTime[0x4]; // 0x4 float32
};

struct CNmBlend1DNode__CDefinition {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_parameterization[0x50]; // 0x30 CNmParameterizedBlendNode::Parameterization_t
};

struct CConcreteAnimParameter {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t m_previewButton[0x4]; // 0x70 AnimParamButton_t
    std::uint8_t m_eNetworkSetting[0x4]; // 0x74 AnimParamNetworkSetting
    std::uint8_t m_bUseMostRecentValue[0x1]; // 0x78 bool
    std::uint8_t m_bAutoReset[0x1]; // 0x79 bool
    std::uint8_t m_bGameWritable[0x1]; // 0x7A bool
    std::uint8_t m_bGraphWritable[0x5]; // 0x7B bool
};

struct CNmBoneWeightList {
    static constexpr std::size_t size = 0x110;
    std::uint8_t m_skeletonName[0xE0]; // 0x0 CResourceName
    std::uint8_t m_boneIDs[0x18]; // 0xE0 CUtlVector<CGlobalSymbol>
    std::uint8_t m_weights[0x18]; // 0xF8 CUtlVector<float32>
};

struct CPairedSequenceUpdateNode {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t m_sPairedSequenceRole[0x10]; // 0x78 CGlobalSymbol
};

struct CModelConfigElement_RandomPick {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Choices[0x18]; // 0x48 CUtlVector<CUtlString>
    std::uint8_t m_ChoiceWeights[0x20]; // 0x60 CUtlVector<float32>
};

struct CNmReferencePoseTask {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x70]; // 0x0
};

struct CNmScaleNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_nMaskNodeIdx[0x2]; // 0x18 int16
    std::uint8_t m_nEnableNodeIdx[0x6]; // 0x1A int16
};

struct VPhysXConstraint2_t {
    static constexpr std::size_t size = 0x100;
    std::uint8_t m_nFlags[0x4]; // 0x0 uint32
    std::uint8_t m_nParent[0x2]; // 0x4 uint16
    std::uint8_t m_nChild[0x2]; // 0x6 uint16
    std::uint8_t m_params[0xF8]; // 0x8 VPhysXConstraintParams_t
};

struct CConstraintTarget {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x20]; // 0x0
    std::uint8_t m_qOffset[0x10]; // 0x20 Quaternion
    std::uint8_t m_vOffset[0xC]; // 0x30 Vector
    std::uint8_t m_nBoneHash[0x4]; // 0x3C uint32
    std::uint8_t m_sName[0x8]; // 0x40 CUtlString
    std::uint8_t m_flWeight[0x11]; // 0x48 float32
    std::uint8_t m_bIsAttachment[0x7]; // 0x59 bool
};

struct SkeletonAnimCapture_t {
    static constexpr std::size_t size = 0xC0;
    std::uint8_t m_nEntIndex[0x4]; // 0x0 CEntityIndex
    std::uint8_t m_nEntParent[0x4]; // 0x4 CEntityIndex
    std::uint8_t m_ImportedCollision[0x18]; // 0x8 CUtlVector<CEntityIndex>
    std::uint8_t m_ModelName[0x8]; // 0x20 CUtlString
    std::uint8_t m_CaptureName[0x8]; // 0x28 CUtlString
    std::uint8_t m_ModelBindPose[0x18]; // 0x30 CUtlVector<SkeletonAnimCapture_t::Bone_t>
    std::uint8_t m_FeModelInitPose[0x18]; // 0x48 CUtlVector<SkeletonAnimCapture_t::Bone_t>
    std::uint8_t m_nFlexControllers[0x4]; // 0x60 int32
    std::uint8_t m_bPredicted[0x44]; // 0x64 bool
    std::uint8_t m_Frames[0x18]; // 0xA8 CUtlVector<SkeletonAnimCapture_t::Frame_t>
};

struct CAnimUser {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_name[0x10]; // 0x0 CBufferString
    std::uint8_t m_nType[0x8]; // 0x10 int32
};

struct CPulse_TempVarBankDefinition {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_TempVars[0x28]; // 0x0 CUtlVector<CPulse_TempVarInfo>
};

struct CRagdollComponentUpdater {
    static constexpr std::size_t size = 0xD8;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_ragdollNodePaths[0x18]; // 0x30 CUtlVector<CAnimNodePath>
    std::uint8_t m_followAttachmentNodePaths[0x18]; // 0x48 CUtlVector<CAnimNodePath>
    std::uint8_t m_boneIndices[0x18]; // 0x60 CUtlVector<int32>
    std::uint8_t m_boneNames[0x18]; // 0x78 CUtlVector<CUtlString>
    std::uint8_t m_weightLists[0x18]; // 0x90 CUtlVector<WeightList>
    std::uint8_t m_boneToWeightIndices[0x18]; // 0xA8 CUtlVector<int32>
    std::uint8_t m_flSpringFrequencyMin[0x4]; // 0xC0 float32
    std::uint8_t m_flSpringFrequencyMax[0x4]; // 0xC4 float32
    std::uint8_t m_flMaxStretch[0x4]; // 0xC8 float32
    std::uint8_t m_bSolidCollisionAtZeroWeight[0xC]; // 0xCC bool
};

struct ParticleNamedValueSource_t {
    static constexpr std::size_t size = 0x60;
    std::uint8_t m_Name[0x8]; // 0x0 CUtlString
    std::uint8_t m_IsPublic[0x8]; // 0x8 bool
    std::uint8_t m_ValueType[0x18]; // 0x10 CPulseValueFullType
    std::uint8_t m_DefaultConfig[0x38]; // 0x28 ParticleNamedValueConfiguration_t
};

struct CFootDefinition {
    static constexpr std::size_t size = 0x40;
    std::uint8_t m_name[0x8]; // 0x0 CUtlString
    std::uint8_t m_ankleBoneName[0x8]; // 0x8 CUtlString
    std::uint8_t m_toeBoneName[0x8]; // 0x10 CUtlString
    std::uint8_t m_vBallOffset[0xC]; // 0x18 Vector
    std::uint8_t m_vHeelOffset[0xC]; // 0x24 Vector
    std::uint8_t m_flFootLength[0x4]; // 0x30 float32
    std::uint8_t m_flBindPoseDirectionMS[0x4]; // 0x34 float32
    std::uint8_t m_flTraceHeight[0x4]; // 0x38 float32
    std::uint8_t m_flTraceRadius[0x4]; // 0x3C float32
};

struct CSeqSynthAnimDesc {
    static constexpr std::size_t size = 0x40;
    std::uint8_t m_sName[0x10]; // 0x0 CBufferString
    std::uint8_t m_flags[0xC]; // 0x10 CSeqSeqDescFlag
    std::uint8_t m_transition[0x8]; // 0x1C CSeqTransition
    std::uint8_t m_nLocalBaseReference[0x2]; // 0x24 int16
    std::uint8_t m_nLocalBoneMask[0x2]; // 0x26 int16
    std::uint8_t m_activityArray[0x18]; // 0x28 CUtlVector<CAnimActivity>
};

struct CNmLayerBlendNode__LayerDefinition_t {
    static constexpr std::size_t size = 0xC;
    std::uint8_t m_nInputNodeIdx[0x2]; // 0x0 int16
    std::uint8_t m_nWeightValueNodeIdx[0x2]; // 0x2 int16
    std::uint8_t m_nBoneMaskValueNodeIdx[0x2]; // 0x4 int16
    std::uint8_t m_nRootMotionWeightValueNodeIdx[0x2]; // 0x6 int16
    std::uint8_t m_bIsSynchronized[0x1]; // 0x8 bool
    std::uint8_t m_bIgnoreEvents[0x1]; // 0x9 bool
    std::uint8_t m_bIsStateMachineLayer[0x1]; // 0xA bool
    std::uint8_t m_blendMode[0x1]; // 0xB NmPoseBlendMode_t
};

struct CAnimComponentUpdater {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_name[0x8]; // 0x18 CUtlString
    std::uint8_t m_id[0x4]; // 0x20 AnimComponentID
    std::uint8_t m_networkMode[0x4]; // 0x24 AnimNodeNetworkMode
    std::uint8_t m_bStartEnabled[0x8]; // 0x28 bool
};

struct CBlend2DUpdateNode {
    static constexpr std::size_t size = 0xF8;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t m_items[0x18]; // 0x60 CUtlVector<BlendItem_t>
    std::uint8_t m_tags[0x18]; // 0x78 CUtlVector<TagSpan_t>
    std::uint8_t m_paramSpans[0x18]; // 0x90 CParamSpanUpdater
    std::uint8_t m_nodeItemIndices[0x18]; // 0xA8 CUtlVector<int32>
    std::uint8_t m_damping[0x18]; // 0xC0 CAnimInputDamping
    std::uint8_t m_blendSourceX[0x4]; // 0xD8 AnimValueSource
    std::uint8_t m_paramX[0x4]; // 0xDC CAnimParamHandle
    std::uint8_t m_blendSourceY[0x4]; // 0xE0 AnimValueSource
    std::uint8_t m_paramY[0x4]; // 0xE4 CAnimParamHandle
    std::uint8_t m_eBlendMode[0x4]; // 0xE8 Blend2DMode
    std::uint8_t m_playbackSpeed[0x4]; // 0xEC float32
    std::uint8_t m_bLoop[0x1]; // 0xF0 bool
    std::uint8_t m_bLockBlendOnReset[0x1]; // 0xF1 bool
    std::uint8_t m_bLockWhenWaning[0x1]; // 0xF2 bool
    std::uint8_t m_bAnimEventsAndTagsOnMostWeightedOnly[0x5]; // 0xF3 bool
};

struct CNmVelocityBasedSpeedScaleNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x20]; // 0x0
};

struct CNPCPhysicsHull {
    static constexpr std::size_t size = 0x40;
    std::uint8_t m_sName[0x8]; // 0x0 CGlobalSymbol
    std::uint8_t m_eType[0x4]; // 0x8 NPCPhysicsHullType_t
    std::uint8_t m_flCapsuleHeight[0x4]; // 0xC float32
    std::uint8_t m_flCapsuleRadius[0x4]; // 0x10 float32
    std::uint8_t m_vCapsuleCenter1[0xC]; // 0x14 Vector
    std::uint8_t m_vCapsuleCenter2[0xC]; // 0x20 Vector
    std::uint8_t m_flGroundBoxHeight[0x4]; // 0x2C float32
    std::uint8_t m_flGroundBoxWidth[0x10]; // 0x30 float32
};

struct PermModelExtPart_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t m_Transform[0x20]; // 0x0 CTransform
    std::uint8_t m_Name[0x8]; // 0x20 CUtlString
    std::uint8_t m_nParent[0x8]; // 0x28 int32
    std::uint8_t m_refModel[0x10]; // 0x30 CStrongHandle<InfoForResourceTypeCModel>
};

struct CNmCachedIDNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nInputValueNodeIdx[0x4]; // 0x10 int16
    std::uint8_t m_mode[0x4]; // 0x14 NmCachedValueMode_t
};

struct CLeanMatrixUpdateNode {
    static constexpr std::size_t size = 0xF0;
    std::uint8_t pad_0[0x5C]; // 0x0
    std::uint8_t m_frameCorners[0x24]; // 0x5C int32[3][3]
    std::uint8_t m_poses[0x28]; // 0x80 CPoseHandle[9]
    std::uint8_t m_damping[0x18]; // 0xA8 CAnimInputDamping
    std::uint8_t m_blendSource[0x4]; // 0xC0 AnimVectorSource
    std::uint8_t m_paramIndex[0x4]; // 0xC4 CAnimParamHandle
    std::uint8_t m_verticalAxis[0xC]; // 0xC8 Vector
    std::uint8_t m_horizontalAxis[0xC]; // 0xD4 Vector
    std::uint8_t m_hSequence[0x4]; // 0xE0 HSequence
    std::uint8_t m_flMaxValue[0x4]; // 0xE4 float32
    std::uint8_t m_nSequenceMaxFrame[0x8]; // 0xE8 int32
};

struct CSymbolAnimParameter {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t m_defaultValue[0x8]; // 0x80 CGlobalSymbol
};

struct CNmFloatCurveEventNode__CDefinition {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_eventID[0x8]; // 0x10 CGlobalSymbol
    std::uint8_t m_nDefaultNodeIdx[0x4]; // 0x18 int16
    std::uint8_t m_flDefaultValue[0x4]; // 0x1C float32
    std::uint8_t m_eventConditionRules[0x8]; // 0x20 CNmBitFlags
};

struct IAnimationGraphInstance {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x18]; // 0x0
};

struct CNmStateMachineNode__TransitionDefinition_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_nTargetStateIdx[0x2]; // 0x0 int16
    std::uint8_t m_nConditionNodeIdx[0x2]; // 0x2 int16
    std::uint8_t m_nTransitionNodeIdx[0x2]; // 0x4 int16
    std::uint8_t m_bCanBeForced[0x2]; // 0x6 bool
};

struct CNmFloatSelectorNode__CDefinition {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_conditionNodeIndices[0x18]; // 0x10 CUtlLeanVectorFixedGrowable<int16,5>
    std::uint8_t m_values[0x20]; // 0x28 CUtlLeanVectorFixedGrowable<float32,5>
    std::uint8_t m_flDefaultValue[0x4]; // 0x48 float32
    std::uint8_t m_flEaseTime[0x4]; // 0x4C float32
    std::uint8_t m_easingOp[0x8]; // 0x50 NmEasingOperation_t
};

struct CTargetSelectorUpdateNode {
    static constexpr std::size_t size = 0xA0;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t m_eAngleMode[0x8]; // 0x60 TargetSelectorAngleMode_t
    std::uint8_t m_children[0x1C]; // 0x68 CUtlVector<CAnimUpdateNodeRef>
    std::uint8_t m_hTargetPosition[0x2]; // 0x84 CAnimParamHandle
    std::uint8_t m_hTargetFacePositionParameter[0x2]; // 0x86 CAnimParamHandle
    std::uint8_t m_hMoveHeadingParameter[0x2]; // 0x88 CAnimParamHandle
    std::uint8_t m_hDesiredMoveHeadingParameter[0x2]; // 0x8A CAnimParamHandle
    std::uint8_t m_bTargetPositionIsWorldSpace[0x1]; // 0x8C bool
    std::uint8_t m_bTargetFacePositionIsWorldSpace[0x1]; // 0x8D bool
    std::uint8_t m_bEnablePhaseMatching[0x2]; // 0x8E bool
    std::uint8_t m_flPhaseMatchingMaxRootMotionSkip[0x10]; // 0x90 float32
};

struct SlopeData {
    static constexpr std::size_t size = 0xC;
    std::uint8_t m_vSlopeNormal[0xC]; // 0x0 Vector
};

struct CHitBoxSetList {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_HitBoxSets[0x18]; // 0x0 CUtlVector<CHitBoxSet>
};

struct CNmIsInactiveBranchConditionNode__CDefinition {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct MotionDBIndex {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_nIndex[0x4]; // 0x0 uint32
};

struct CDirectPlaybackTagData {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_sequenceName[0x8]; // 0x0 CUtlString
    std::uint8_t m_tags[0x18]; // 0x8 CUtlVector<TagSpan_t>
};

struct CParticleCollectionVecInput {
    static constexpr std::size_t size = 0x6D8;
    std::uint8_t pad_0[0x6D8]; // 0x0
};

struct CNmGraphEventConditionNode__Condition_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_eventID[0x8]; // 0x0 CGlobalSymbol
    std::uint8_t m_eventTypeCondition[0x8]; // 0x8 NmGraphEventTypeCondition_t
};

struct CNmFloatRemapNode__RemapRange_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_flBegin[0x4]; // 0x0 float32
    std::uint8_t m_flEnd[0x4]; // 0x4 float32
};

struct CNmCurrentSyncEventIDNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nSourceStateNodeIdx[0x8]; // 0x10 int16
};

struct CNmStateCompletedConditionNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nSourceStateNodeIdx[0x2]; // 0x10 int16
    std::uint8_t m_nTransitionDurationOverrideNodeIdx[0x2]; // 0x12 int16
    std::uint8_t m_flTransitionDurationSeconds[0x4]; // 0x14 float32
};

struct CNmCameraFOVEvent {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_curve[0x40]; // 0x18 CPiecewiseCurve
};

struct CNmTargetWarpEvent {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_rule[0x1]; // 0x18 NmTargetWarpRule_t
    std::uint8_t m_algorithm[0x7]; // 0x19 NmTargetWarpAlgorithm_t
};

struct CParamSpanUpdater {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_spans[0x18]; // 0x0 CUtlVector<ParamSpan_t>
};

struct CAnimActionUpdater {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x18]; // 0x0
};

struct CParticleAnimTag {
    static constexpr std::size_t size = 0x98;
    std::uint8_t pad_0[0x58]; // 0x0
    std::uint8_t m_hParticleSystem[0x8]; // 0x58 CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    std::uint8_t m_particleSystemName[0x8]; // 0x60 CUtlString
    std::uint8_t m_configName[0x8]; // 0x68 CUtlString
    std::uint8_t m_bDetachFromOwner[0x1]; // 0x70 bool
    std::uint8_t m_bAggregate[0x1]; // 0x71 bool
    std::uint8_t m_bStopWhenTagEnds[0x1]; // 0x72 bool
    std::uint8_t m_bTagEndStopIsInstant[0x5]; // 0x73 bool
    std::uint8_t m_attachmentName[0x8]; // 0x78 CUtlString
    std::uint8_t m_attachmentType[0x8]; // 0x80 ParticleAttachment_t
    std::uint8_t m_attachmentCP1Name[0x8]; // 0x88 CUtlString
    std::uint8_t m_attachmentCP1Type[0x8]; // 0x90 ParticleAttachment_t
};

struct CCycleBase {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_flCycle[0x4]; // 0x0 float32
};

struct FollowTargetOpFixedSettings_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_boneIndex[0x4]; // 0x0 int32
    std::uint8_t m_bBoneTarget[0x4]; // 0x4 bool
    std::uint8_t m_boneTargetIndex[0x4]; // 0x8 int32
    std::uint8_t m_bWorldCoodinateTarget[0x1]; // 0xC bool
    std::uint8_t m_bMatchTargetOrientation[0x3]; // 0xD bool
};

struct CNmIDSwitchNode__CDefinition {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nSwitchValueNodeIdx[0x2]; // 0x10 int16
    std::uint8_t m_nTrueValueNodeIdx[0x2]; // 0x12 int16
    std::uint8_t m_nFalseValueNodeIdx[0x4]; // 0x14 int16
    std::uint8_t m_falseValue[0x8]; // 0x18 CGlobalSymbol
    std::uint8_t m_trueValue[0x8]; // 0x20 CGlobalSymbol
};

struct CNmRootMotionEvent {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_flBlendTimeSeconds[0x8]; // 0x18 float32
};

struct CPulse_PublicOutput {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_Name[0x10]; // 0x0 PulseSymbol_t
    std::uint8_t m_Description[0x8]; // 0x10 CUtlString
    std::uint8_t m_Args[0x10]; // 0x18 CUtlLeanVector<CPulseRuntimeMethodArg>
};

struct CChoiceInstanceData {
    static constexpr std::size_t size = 0x34;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_currentChoice[0xC]; // 0x10 CAnimNetVar<int32>
    std::uint8_t m_previousChoice[0x4]; // 0x1C int32
    std::uint8_t m_flClipStartTime[0xC]; // 0x20 CAnimNetVar<float32>
    std::uint8_t m_choicePreviousCycle[0x8]; // 0x2C float32
};

struct CNmContactAudioTypeVData {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct CNmCameraDOFEvent {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_curve[0x40]; // 0x18 CPiecewiseCurve
};

struct AnimationSnapshotBase_t {
    static constexpr std::size_t size = 0x110;
    std::uint8_t m_flRealTime[0x10]; // 0x0 float32
    std::uint8_t m_rootToWorld[0x30]; // 0x10 matrix3x4a_t
    std::uint8_t m_bBonesInWorldSpace[0x8]; // 0x40 bool
    std::uint8_t m_boneSetupMask[0x18]; // 0x48 CUtlVector<uint32>
    std::uint8_t m_boneTransforms[0x18]; // 0x60 CUtlVector<matrix3x4a_t>
    std::uint8_t m_flexControllers[0x18]; // 0x78 CUtlVector<float32>
    std::uint8_t m_SnapshotType[0x4]; // 0x90 AnimationSnapshotType_t
    std::uint8_t m_bHasDecodeDump[0x4]; // 0x94 bool
    std::uint8_t m_DecodeDump[0x78]; // 0x98 AnimationDecodeDebugDumpElement_t
};

struct CEmitTagActionUpdater {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_nTagIndex[0x4]; // 0x18 int32
    std::uint8_t m_bIsZeroDuration[0x4]; // 0x1C bool
};

struct DynamicMeshDeformParams_t {
    static constexpr std::size_t size = 0xC;
    std::uint8_t m_flTensionCompressScale[0x4]; // 0x0 float32
    std::uint8_t m_flTensionStretchScale[0x4]; // 0x4 float32
    std::uint8_t m_bRecomputeSmoothNormalsAfterAnimation[0x1]; // 0x8 bool
    std::uint8_t m_bComputeDynamicMeshTensionAfterAnimation[0x1]; // 0x9 bool
    std::uint8_t m_bSmoothNormalsAcrossUvSeams[0x1]; // 0xA bool
    std::uint8_t m_bEnableEyeBulgeDeformation[0x1]; // 0xB bool
};

struct CNmTimeConditionNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_sourceStateNodeIdx[0x2]; // 0x10 int16
    std::uint8_t m_nInputValueNodeIdx[0x2]; // 0x12 int16
    std::uint8_t m_flComparand[0x4]; // 0x14 float32
    std::uint8_t m_type[0x1]; // 0x18 CNmTimeConditionNode::ComparisonType_t
    std::uint8_t m_operator[0x7]; // 0x19 CNmTimeConditionNode::Operator_t
};

struct CNmSyncEventIndexConditionNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nSourceStateNodeIdx[0x2]; // 0x10 int16
    std::uint8_t m_triggerMode[0x2]; // 0x12 CNmSyncEventIndexConditionNode::TriggerMode_t
    std::uint8_t m_syncEventIdx[0x4]; // 0x14 int32
};

struct CAnimStateMachineUpdater {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_states[0x18]; // 0x8 CUtlVector<CStateUpdateData>
    std::uint8_t m_transitions[0x30]; // 0x20 CUtlVector<CTransitionUpdateData>
    std::uint8_t m_startStateIndex[0x8]; // 0x50 int32
};

struct CUnaryUpdateNode {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t m_pChildNode[0x10]; // 0x60 CAnimUpdateNodeRef
};

struct CNmIDToFloatNode__CDefinition {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nInputValueNodeIdx[0x4]; // 0x10 int16
    std::uint8_t m_defaultValue[0x4]; // 0x14 float32
    std::uint8_t m_IDs[0x30]; // 0x18 CUtlLeanVectorFixedGrowable<CGlobalSymbol,5>
    std::uint8_t m_values[0x20]; // 0x48 CUtlLeanVectorFixedGrowable<float32,5>
};

struct PlayerInputMotorInstanceData_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_vInputVectorWS[0xC]; // 0x0 Vector
    std::uint8_t m_vVelocityWS[0xC]; // 0xC Vector
    std::uint8_t m_vAccelerationWS[0x10]; // 0x18 Vector
};

struct CSelectorUpdateNode {
    static constexpr std::size_t size = 0xB8;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t m_children[0x18]; // 0x60 CUtlVector<CAnimUpdateNodeRef>
    std::uint8_t m_tags[0x1C]; // 0x78 CUtlVector<int8>
    std::uint8_t m_blendCurve[0x8]; // 0x94 CBlendCurve
    std::uint8_t m_flBlendTime[0x8]; // 0x9C CAnimValue<float32>
    std::uint8_t m_hParameter[0x4]; // 0xA4 CAnimParamHandle
    std::uint8_t m_nTagIndex[0x4]; // 0xA8 int32
    std::uint8_t m_eTagBehavior[0x4]; // 0xAC SelectorTagBehavior_t
    std::uint8_t m_bResetOnChange[0x1]; // 0xB0 bool
    std::uint8_t m_bLockWhenWaning[0x1]; // 0xB1 bool
    std::uint8_t m_bSyncCyclesOnChange[0x6]; // 0xB2 bool
};

struct NmPercent_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_flValue[0x4]; // 0x0 float32
};

struct CStateMachineComponentUpdater {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_stateMachine[0x58]; // 0x30 CAnimStateMachineUpdater
};

struct CAnimUpdateNodeRef {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_nodeIndex[0x8]; // 0x8 int32
};

struct CPulse_OutputConnection {
    static constexpr std::size_t size = 0x40;
    std::uint8_t m_SourceOutput[0x10]; // 0x0 PulseSymbol_t
    std::uint8_t m_TargetEntity[0x10]; // 0x10 PulseSymbol_t
    std::uint8_t m_TargetInput[0x10]; // 0x20 PulseSymbol_t
    std::uint8_t m_Param[0x10]; // 0x30 PulseSymbol_t
};

struct CPhysSurfaceProperties {
    static constexpr std::size_t size = 0xC8;
    std::uint8_t m_name[0x8]; // 0x0 CUtlString
    std::uint8_t m_nameHash[0x4]; // 0x8 uint32
    std::uint8_t m_baseNameHash[0xC]; // 0xC uint32
    std::uint8_t m_bHidden[0x8]; // 0x18 bool
    std::uint8_t m_description[0x8]; // 0x20 CUtlString
    std::uint8_t m_physics[0x18]; // 0x28 CPhysSurfacePropertiesPhysics
    std::uint8_t m_vehicleParams[0x8]; // 0x40 CPhysSurfacePropertiesVehicle
    std::uint8_t m_audioSounds[0x60]; // 0x48 CPhysSurfacePropertiesSoundNames
    std::uint8_t m_audioParams[0x20]; // 0xA8 CPhysSurfacePropertiesAudio
};

struct CNmBoneMaskValueNode__CDefinition {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct CSeqPoseParamDesc {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_sName[0x10]; // 0x0 CBufferString
    std::uint8_t m_flStart[0x4]; // 0x10 float32
    std::uint8_t m_flEnd[0x4]; // 0x14 float32
    std::uint8_t m_flLoop[0x4]; // 0x18 float32
    std::uint8_t m_bLooping[0x4]; // 0x1C bool
};

struct CModelConfigElement_SetBodygroup {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_GroupName[0x8]; // 0x48 CGlobalSymbol
    std::uint8_t m_nChoice[0x8]; // 0x50 int32
};

struct CAnimMovement {
    static constexpr std::size_t size = 0x2C;
    std::uint8_t endframe[0x4]; // 0x0 int32
    std::uint8_t motionflags[0x4]; // 0x4 int32
    std::uint8_t v0[0x4]; // 0x8 float32
    std::uint8_t v1[0x4]; // 0xC float32
    std::uint8_t angle[0x4]; // 0x10 float32
    std::uint8_t vector[0xC]; // 0x14 Vector
    std::uint8_t position[0xC]; // 0x20 Vector
};

struct CParticleRemapFloatInput {
    static constexpr std::size_t size = 0x178;
    std::uint8_t pad_0[0x178]; // 0x0
};

struct FollowAttachmentData {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_boneIndex[0x4]; // 0x0 int32
    std::uint8_t m_attachmentHandle[0x4]; // 0x4 AttachmentHandle_t
};

struct FootStepTrigger {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_tags[0x18]; // 0x0 CUtlVector<int32>
    std::uint8_t m_nFootIndex[0x4]; // 0x18 int32
    std::uint8_t m_triggerPhase[0x4]; // 0x1C StepPhase
};

struct CNmSyncTrack__EventMarker_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_startTime[0x8]; // 0x0 NmPercent_t
    std::uint8_t m_ID[0x8]; // 0x8 CGlobalSymbol
};

struct CPathMetricEvaluator {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x50]; // 0x0
    std::uint8_t m_pathTimeSamples[0x18]; // 0x50 CUtlVector<float32>
    std::uint8_t m_flDistance[0x4]; // 0x68 float32
    std::uint8_t m_bExtrapolateMovement[0x4]; // 0x6C bool
    std::uint8_t m_flMinExtrapolationSpeed[0x8]; // 0x70 float32
};

struct CFootLockUpdateNode {
    static constexpr std::size_t size = 0x158;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t m_opFixedSettings[0x70]; // 0x70 FootLockPoseOpFixedSettings
    std::uint8_t m_footSettings[0x18]; // 0xE0 CUtlVector<FootFixedSettings>
    std::uint8_t m_hipShiftDamping[0x18]; // 0xF8 CAnimInputDamping
    std::uint8_t m_rootHeightDamping[0x18]; // 0x110 CAnimInputDamping
    std::uint8_t m_flStrideCurveScale[0x4]; // 0x128 float32
    std::uint8_t m_flStrideCurveLimitScale[0x4]; // 0x12C float32
    std::uint8_t m_flStepHeightIncreaseScale[0x4]; // 0x130 float32
    std::uint8_t m_flStepHeightDecreaseScale[0x4]; // 0x134 float32
    std::uint8_t m_flHipShiftScale[0x4]; // 0x138 float32
    std::uint8_t m_flBlendTime[0x4]; // 0x13C float32
    std::uint8_t m_flMaxRootHeightOffset[0x4]; // 0x140 float32
    std::uint8_t m_flMinRootHeightOffset[0x4]; // 0x144 float32
    std::uint8_t m_flTiltPlanePitchSpringStrength[0x4]; // 0x148 float32
    std::uint8_t m_flTiltPlaneRollSpringStrength[0x4]; // 0x14C float32
    std::uint8_t m_bApplyFootRotationLimits[0x1]; // 0x150 bool
    std::uint8_t m_bApplyHipShift[0x1]; // 0x151 bool
    std::uint8_t m_bModulateStepHeight[0x1]; // 0x152 bool
    std::uint8_t m_bResetChild[0x1]; // 0x153 bool
    std::uint8_t m_bEnableVerticalCurvedPaths[0x1]; // 0x154 bool
    std::uint8_t m_bEnableRootHeightDamping[0x3]; // 0x155 bool
};

struct CNmOrientationWarpEvent {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x18]; // 0x0
};

struct CNmIDValueNode__CDefinition {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct PulseGraphExecutionHistoryNodeDesc_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t strCellDesc[0x10]; // 0x0 CBufferString
    std::uint8_t strBindingName[0x10]; // 0x10 PulseSymbol_t
};

struct JiggleBoneSettings_t {
    static constexpr std::size_t size = 0x2C;
    std::uint8_t m_nBoneIndex[0x4]; // 0x0 int32
    std::uint8_t m_flSpringStrength[0x4]; // 0x4 float32
    std::uint8_t m_flMaxTimeStep[0x4]; // 0x8 float32
    std::uint8_t m_flDamping[0x4]; // 0xC float32
    std::uint8_t m_vBoundsMaxLS[0xC]; // 0x10 Vector
    std::uint8_t m_vBoundsMinLS[0xC]; // 0x1C Vector
    std::uint8_t m_eSimSpace[0x4]; // 0x28 JiggleBoneSimSpace
};

struct CJumpHelperUpdateNode {
    static constexpr std::size_t size = 0xD8;
    std::uint8_t pad_0[0xB0]; // 0x0
    std::uint8_t m_hTargetParam[0x4]; // 0xB0 CAnimParamHandle
    std::uint8_t m_flOriginalJumpMovement[0xC]; // 0xB4 Vector
    std::uint8_t m_flOriginalJumpDuration[0x4]; // 0xC0 float32
    std::uint8_t m_flJumpStartCycle[0x4]; // 0xC4 float32
    std::uint8_t m_flJumpEndCycle[0x4]; // 0xC8 float32
    std::uint8_t m_eCorrectionMethod[0x4]; // 0xCC JumpCorrectionMethod
    std::uint8_t m_bTranslationAxis[0x3]; // 0xD0 bool[3]
    std::uint8_t m_bScaleSpeed[0x5]; // 0xD3 bool
};

struct CNmControlParameterBoolNode__CDefinition {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct CNmChainLookatTask {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0x120]; // 0x0
};

struct FootLockPoseOpFixedSettings {
    static constexpr std::size_t size = 0x68;
    std::uint8_t m_footInfo[0x18]; // 0x0 CUtlVector<FootFixedData_t>
    std::uint8_t m_hipDampingSettings[0x18]; // 0x18 CAnimInputDamping
    std::uint8_t m_nHipBoneIndex[0x4]; // 0x30 int32
    std::uint8_t m_ikSolverType[0x4]; // 0x34 IKSolverType
    std::uint8_t m_bApplyTilt[0x1]; // 0x38 bool
    std::uint8_t m_bApplyHipDrop[0x1]; // 0x39 bool
    std::uint8_t m_bAlwaysUseFallbackHinge[0x1]; // 0x3A bool
    std::uint8_t m_bApplyFootRotationLimits[0x1]; // 0x3B bool
    std::uint8_t m_bApplyLegTwistLimits[0x4]; // 0x3C bool
    std::uint8_t m_flMaxFootHeight[0x4]; // 0x40 float32
    std::uint8_t m_flExtensionScale[0x4]; // 0x44 float32
    std::uint8_t m_flMaxLegTwist[0x4]; // 0x48 float32
    std::uint8_t m_bEnableLockBreaking[0x4]; // 0x4C bool
    std::uint8_t m_flLockBreakTolerance[0x4]; // 0x50 float32
    std::uint8_t m_flLockBlendTime[0x4]; // 0x54 float32
    std::uint8_t m_bEnableStretching[0x4]; // 0x58 bool
    std::uint8_t m_flMaxStretchAmount[0x4]; // 0x5C float32
    std::uint8_t m_flStretchExtensionScale[0x8]; // 0x60 float32
};

struct CBoneVelocityMetricEvaluator {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x50]; // 0x0
    std::uint8_t m_nBoneIndex[0x8]; // 0x50 int32
};

struct CWarpSectionAnimTag {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x50]; // 0x0
    std::uint8_t m_bWarpPosition[0x1]; // 0x50 bool
    std::uint8_t m_bWarpOrientation[0x7]; // 0x51 bool
};

struct SelectorInstanceData_t {
    static constexpr std::size_t size = 0x2C;
    std::uint8_t m_weights[0x8]; // 0x0 CRelativeArray<float32>
    std::uint8_t m_currentIndexStartTime[0xC]; // 0x8 CAnimNetVar<float32>
    std::uint8_t m_currentIndex[0x4]; // 0x14 int32
    std::uint8_t m_previousIndex[0x14]; // 0x18 int32
};

struct CModelConfigElement_RandomColor {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Gradient[0x18]; // 0x48 CColorGradient
};

struct CFootMotion {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_strides[0x18]; // 0x0 CUtlVector<CFootStride>
    std::uint8_t m_name[0x8]; // 0x18 CUtlString
    std::uint8_t m_bAdditive[0x8]; // 0x20 bool
};

struct CJiggleBoneUpdateNode {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t m_opFixedData[0x20]; // 0x70 JiggleBoneSettingsList_t
};

struct CNmConstVectorNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_value[0x10]; // 0x10 Vector
};

struct MoodAnimation_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_sName[0x8]; // 0x0 CModelAnimNameWithDeltas
    std::uint8_t m_flWeight[0x8]; // 0x8 float32
};

struct CLODComponentUpdater {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_nServerLOD[0x8]; // 0x30 int32
};

struct CNmIsTargetSetNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nInputValueNodeIdx[0x8]; // 0x10 int16
};

struct CPhysSurfacePropertiesVehicle {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_wheelDrag[0x4]; // 0x0 float32
    std::uint8_t m_wheelFrictionScale[0x4]; // 0x4 float32
};

struct CAnimDataChannelDesc {
    static constexpr std::size_t size = 0x90;
    std::uint8_t m_szChannelClass[0x10]; // 0x0 CBufferString
    std::uint8_t m_szVariableName[0x10]; // 0x10 CBufferString
    std::uint8_t m_nFlags[0x4]; // 0x20 int32
    std::uint8_t m_nType[0x4]; // 0x24 int32
    std::uint8_t m_szGrouping[0x10]; // 0x28 CBufferString
    std::uint8_t m_szDescription[0x10]; // 0x38 CBufferString
    std::uint8_t m_szElementNameArray[0x18]; // 0x48 CUtlVector<CBufferString>
    std::uint8_t m_nElementIndexArray[0x18]; // 0x60 CUtlVector<int32>
    std::uint8_t m_nElementMaskArray[0x18]; // 0x78 CUtlVector<uint32>
};

struct CPairedSequenceComponentUpdater {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x38]; // 0x0
};

struct CNmParticleEvent {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_relevance[0x4]; // 0x18 CNmEventRelevance_t
    std::uint8_t m_type[0x4]; // 0x1C CNmParticleEvent::Type_t
    std::uint8_t m_target[0x8]; // 0x20 CNmEventTargetEntity_t
    std::uint8_t m_hParticleSystem[0x8]; // 0x28 CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    std::uint8_t m_tags[0x8]; // 0x30 CUtlString
    std::uint8_t m_bStopImmediately[0x1]; // 0x38 bool
    std::uint8_t m_bDetachFromOwner[0x1]; // 0x39 bool
    std::uint8_t m_bPlayEndCap[0x6]; // 0x3A bool
    std::uint8_t m_attachmentPoint0[0x8]; // 0x40 CUtlString
    std::uint8_t m_attachmentType0[0x8]; // 0x48 ParticleAttachment_t
    std::uint8_t m_attachmentPoint1[0x8]; // 0x50 CUtlString
    std::uint8_t m_attachmentType1[0x8]; // 0x58 ParticleAttachment_t
    std::uint8_t m_config[0x8]; // 0x60 CUtlString
    std::uint8_t m_effectForConfig[0x8]; // 0x68 CUtlString
};

struct MotionSelection {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x24]; // 0x0
    std::uint8_t m_nConfigIndex[0xC]; // 0x24 NetVarConfigIndex
    std::uint8_t m_flCycleZeroTime[0xC]; // 0x30 CAnimNetVar<float32>
    std::uint8_t m_flPlaybackSpeed[0xC]; // 0x3C CAnimNetVar<float32>
    std::uint8_t m_flStartTime[0xC]; // 0x48 CAnimNetVar<float32>
    std::uint8_t m_nSample[0x4]; // 0x54 int32
};

struct CMorphRectData {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_nXLeftDst[0x2]; // 0x0 int16
    std::uint8_t m_nYTopDst[0x2]; // 0x2 int16
    std::uint8_t m_flUWidthSrc[0x4]; // 0x4 float32
    std::uint8_t m_flVHeightSrc[0x8]; // 0x8 float32
    std::uint8_t m_bundleDatas[0x18]; // 0x10 CUtlVector<CMorphBundleData>
};

struct CAnimFoot {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_name[0x8]; // 0x0 CUtlString
    std::uint8_t m_vBallOffset[0xC]; // 0x8 Vector
    std::uint8_t m_vHeelOffset[0xC]; // 0x14 Vector
    std::uint8_t m_ankleBoneIndex[0x4]; // 0x20 int32
    std::uint8_t m_toeBoneIndex[0x4]; // 0x24 int32
};

struct CParentConstraint {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x60]; // 0x0
};

struct CNmCachedVectorNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nInputValueNodeIdx[0x4]; // 0x10 int16
    std::uint8_t m_mode[0x4]; // 0x14 NmCachedValueMode_t
};

struct CNmStateNode__TimedEvent_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_ID[0x8]; // 0x0 CGlobalSymbol
    std::uint8_t m_flTimeValueSeconds[0x4]; // 0x8 float32
    std::uint8_t m_comparisionOperator[0x4]; // 0xC CNmStateNode::TimedEvent_t::Comparison_t
};

struct CFootPositionMetricEvaluator {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x50]; // 0x0
    std::uint8_t m_footIndices[0x18]; // 0x50 CUtlVector<int32>
    std::uint8_t m_bIgnoreSlope[0x8]; // 0x68 bool
};

struct CParticleVariableRef {
    static constexpr std::size_t size = 0x50;
    std::uint8_t m_variableName[0x38]; // 0x0 CKV3MemberNameWithStorage
    std::uint8_t m_variableType[0x18]; // 0x38 CPulseValueFullType
};

struct CMoverInstanceData {
    static constexpr std::size_t size = 0x2C;
    std::uint8_t m_flDampedValue[0x4]; // 0x0 float32
    std::uint8_t m_vMovement[0x18]; // 0x4 Vector
    std::uint8_t m_Rotation[0x4]; // 0x1C CRotation
    std::uint8_t m_TargetOrientation[0xC]; // 0x20 CRotation
};

struct HSequence {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_Value[0x4]; // 0x0 int32
};

struct CDampedValueUpdateItem {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_damping[0x20]; // 0x0 CAnimInputDamping
    std::uint8_t m_hParamIn[0x2]; // 0x20 CAnimParamHandle
    std::uint8_t m_hParamOut[0x6]; // 0x22 CAnimParamHandle
};

struct CAnimLocalHierarchy {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_sBone[0x10]; // 0x0 CBufferString
    std::uint8_t m_sNewParent[0x10]; // 0x10 CBufferString
    std::uint8_t m_nStartFrame[0x4]; // 0x20 int32
    std::uint8_t m_nPeakFrame[0x4]; // 0x24 int32
    std::uint8_t m_nTailFrame[0x4]; // 0x28 int32
    std::uint8_t m_nEndFrame[0x4]; // 0x2C int32
};

struct CBlendUpdateNode {
    static constexpr std::size_t size = 0xE0;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t m_children[0x18]; // 0x60 CUtlVector<CAnimUpdateNodeRef>
    std::uint8_t m_sortedOrder[0x18]; // 0x78 CUtlVector<uint8>
    std::uint8_t m_targetValues[0x1C]; // 0x90 CUtlVector<float32>
    std::uint8_t m_blendValueSource[0x4]; // 0xAC AnimValueSource
    std::uint8_t m_eLinearRootMotionBlendMode[0x4]; // 0xB0 LinearRootMotionBlendMode_t
    std::uint8_t m_paramIndex[0x4]; // 0xB4 CAnimParamHandle
    std::uint8_t m_damping[0x18]; // 0xB8 CAnimInputDamping
    std::uint8_t m_blendKeyType[0x4]; // 0xD0 BlendKeyType
    std::uint8_t m_bLockBlendOnReset[0x1]; // 0xD4 bool
    std::uint8_t m_bSyncCycles[0x1]; // 0xD5 bool
    std::uint8_t m_bLoop[0x1]; // 0xD6 bool
    std::uint8_t m_bLockWhenWaning[0x1]; // 0xD7 bool
    std::uint8_t m_bIsAngle[0x8]; // 0xD8 bool
};

struct PulseGraphExecutionHistoryEntry_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t nCursorID[0x4]; // 0x0 PulseCursorID_t
    std::uint8_t nEditorID[0x4]; // 0x4 PulseDocNodeID_t
    std::uint8_t seqPoint[0x10]; // 0x8 PulseSymbol_t
    std::uint8_t flExecTime[0x4]; // 0x18 float32
    std::uint8_t unFlags[0x4]; // 0x1C uint32
    std::uint8_t tagName[0x10]; // 0x20 PulseSymbol_t
    std::uint8_t childID[0x8]; // 0x30 PulseCursorID_t
};

struct CQuaternionAnimParameter {
    static constexpr std::size_t size = 0xA0;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t m_defaultValue[0x10]; // 0x80 Quaternion
    std::uint8_t m_bInterpolate[0x10]; // 0x90 bool
};

struct PermModelData_t {
    static constexpr std::size_t size = 0x2F8;
    std::uint8_t m_name[0x8]; // 0x0 CUtlString
    std::uint8_t m_modelInfo[0x58]; // 0x8 PermModelInfo_t
    std::uint8_t m_ExtParts[0x18]; // 0x60 CUtlVector<PermModelExtPart_t>
    std::uint8_t m_refMeshes[0x18]; // 0x78 CUtlVector<CStrongHandle<InfoForResourceTypeCRenderMesh>>
    std::uint8_t m_refMeshGroupMasks[0x18]; // 0x90 CUtlVector<uint64>
    std::uint8_t m_refPhysGroupMasks[0x18]; // 0xA8 CUtlVector<uint64>
    std::uint8_t m_refLODGroupMasks[0x18]; // 0xC0 CUtlVector<uint8>
    std::uint8_t m_lodGroupSwitchDistances[0x18]; // 0xD8 CUtlVector<float32>
    std::uint8_t m_refPhysicsData[0x18]; // 0xF0 CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData>>
    std::uint8_t m_refPhysicsHitboxData[0x18]; // 0x108 CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData>>
    std::uint8_t m_refAnimGroups[0x18]; // 0x120 CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>>
    std::uint8_t m_refSequenceGroups[0x18]; // 0x138 CUtlVector<CStrongHandle<InfoForResourceTypeCSequenceGroupData>>
    std::uint8_t m_meshGroups[0x18]; // 0x150 CUtlVector<CUtlString>
    std::uint8_t m_materialGroups[0x18]; // 0x168 CUtlVector<MaterialGroup_t>
    std::uint8_t m_nDefaultMeshGroupMask[0x8]; // 0x180 uint64
    std::uint8_t m_modelSkeleton[0xA8]; // 0x188 ModelSkeletonData_t
    std::uint8_t m_remappingTable[0x18]; // 0x230 CUtlVector<int16>
    std::uint8_t m_remappingTableStarts[0x18]; // 0x248 CUtlVector<uint16>
    std::uint8_t m_boneFlexDrivers[0x18]; // 0x260 CUtlVector<ModelBoneFlexDriver_t>
    std::uint8_t m_pModelConfigList[0x8]; // 0x278 CModelConfigList*
    std::uint8_t m_BodyGroupsHiddenInTools[0x18]; // 0x280 CUtlVector<CUtlString>
    std::uint8_t m_refAnimIncludeModels[0x18]; // 0x298 CUtlVector<CStrongHandle<InfoForResourceTypeCModel>>
    std::uint8_t m_AnimatedMaterialAttributes[0x18]; // 0x2B0 CUtlVector<PermModelDataAnimatedMaterialAttribute_t>
    std::uint8_t m_animGraph2Refs[0x18]; // 0x2C8 CUtlVector<ModelAnimGraph2Ref_t>
    std::uint8_t m_vecNmSkeletonRefs[0x18]; // 0x2E0 CUtlVector<CStrongHandle<InfoForResourceTypeCNmSkeleton>>
};

struct PulseCursorYieldToken_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_Value[0x4]; // 0x0 int32
};

struct CNmSampleTask {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x80]; // 0x0
};

struct CFollowPathInstanceData {
    static constexpr std::size_t size = 0x24;
    std::uint8_t m_xLastPredictedTransformsDeltas[0x8]; // 0x0 CRelativeArray<CMotionTransform>
    std::uint8_t m_dampedTurnValue[0x4]; // 0x8 float32
    std::uint8_t m_flTurnAmount[0x4]; // 0xC float32
    std::uint8_t m_flPredictionScale[0xC]; // 0x10 CAnimNetVar<float32>
    std::uint8_t m_flLastPathTime[0x8]; // 0x1C float32
};

struct CStaticPoseCacheBuilder {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x38]; // 0x0
};

struct ModelMeshBufferData_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_nBlockIndex[0x4]; // 0x0 int32
    std::uint8_t m_nElementCount[0x4]; // 0x4 uint32
    std::uint8_t m_nElementSizeInBytes[0x4]; // 0x8 uint32
    std::uint8_t m_bMeshoptCompressed[0x1]; // 0xC bool
    std::uint8_t m_bMeshoptIndexSequence[0x1]; // 0xD bool
    std::uint8_t m_nMeshoptMeshletEncodeVersion[0x1]; // 0xE int8
    std::uint8_t m_bCompressedZSTD[0x1]; // 0xF bool
    std::uint8_t m_bCreateBufferSRV[0x1]; // 0x10 bool
    std::uint8_t m_bCreateBufferUAV[0x1]; // 0x11 bool
    std::uint8_t m_bCreateRawBuffer[0x1]; // 0x12 bool
    std::uint8_t m_bCreatePooledBuffer[0x1]; // 0x13 bool
    std::uint8_t m_nBufferUsage[0x4]; // 0x14 uint16
    std::uint8_t m_inputLayoutFields[0x18]; // 0x18 CUtlVector<RenderInputLayoutField_t>
};

struct CSequenceGroupData {
    static constexpr std::size_t size = 0x138;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_sName[0x10]; // 0x10 CBufferString
    std::uint8_t m_nFlags[0x8]; // 0x20 uint32
    std::uint8_t m_localSequenceNameArray[0x18]; // 0x28 CUtlVector<CBufferString>
    std::uint8_t m_localS1SeqDescArray[0x18]; // 0x40 CUtlVector<CSeqS1SeqDesc>
    std::uint8_t m_localMultiSeqDescArray[0x18]; // 0x58 CUtlVector<CSeqS1SeqDesc>
    std::uint8_t m_localSynthAnimDescArray[0x18]; // 0x70 CUtlVector<CSeqSynthAnimDesc>
    std::uint8_t m_localCmdSeqDescArray[0x18]; // 0x88 CUtlVector<CSeqCmdSeqDesc>
    std::uint8_t m_localBoneMaskArray[0x18]; // 0xA0 CUtlVector<CSeqBoneMaskList>
    std::uint8_t m_localScaleSetArray[0x18]; // 0xB8 CUtlVector<CSeqScaleSet>
    std::uint8_t m_localBoneNameArray[0x18]; // 0xD0 CUtlVector<CBufferString>
    std::uint8_t m_localNodeName[0x10]; // 0xE8 CBufferString
    std::uint8_t m_localPoseParamArray[0x18]; // 0xF8 CUtlVector<CSeqPoseParamDesc>
    std::uint8_t m_keyValues[0x10]; // 0x110 KeyValues3
    std::uint8_t m_localIKAutoplayLockArray[0x18]; // 0x120 CUtlVector<CSeqIKLock>
};

struct CStateMachineUpdateNode {
    static constexpr std::size_t size = 0x100;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t m_stateMachine[0x58]; // 0x70 CAnimStateMachineUpdater
    std::uint8_t m_stateData[0x18]; // 0xC8 CUtlVector<CStateNodeStateData>
    std::uint8_t m_transitionData[0x1C]; // 0xE0 CUtlVector<CStateNodeTransitionData>
    std::uint8_t m_bBlockWaningTags[0x1]; // 0xFC bool
    std::uint8_t m_bLockStateWhenWaning[0x1]; // 0xFD bool
    std::uint8_t m_bResetWhenActivated[0x2]; // 0xFE bool
};

struct CNmIDBasedSelectorNode__CDefinition {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_optionNodeIndices[0x18]; // 0x10 CUtlLeanVectorFixedGrowable<int16,5>
    std::uint8_t m_optionIDs[0x30]; // 0x28 CUtlLeanVectorFixedGrowable<CGlobalSymbol,5>
    std::uint8_t m_nParameterNodeIdx[0x2]; // 0x58 int16
    std::uint8_t m_nFallbackNodeIdx[0x2]; // 0x5A int16
    std::uint8_t m_bIgnoreInvalidOptions[0x4]; // 0x5C bool
};

struct CAimMatrixUpdateNode {
    static constexpr std::size_t size = 0x180;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t m_opFixedSettings[0xF8]; // 0x70 AimMatrixOpFixedSettings_t
    std::uint8_t m_target[0x4]; // 0x168 AnimVectorSource
    std::uint8_t m_paramIndex[0x4]; // 0x16C CAnimParamHandle
    std::uint8_t m_hSequence[0x4]; // 0x170 HSequence
    std::uint8_t m_bResetChild[0x1]; // 0x174 bool
    std::uint8_t m_bLockWhenWaning[0xB]; // 0x175 bool
};

struct SkeletonAnimCapture_t__Frame_t {
    static constexpr std::size_t size = 0xC0;
    std::uint8_t m_flTime[0x4]; // 0x0 float32
    std::uint8_t m_Stamp[0x1C]; // 0x4 SkeletonAnimCapture_t::FrameStamp_t
    std::uint8_t m_Transform[0x20]; // 0x20 CTransform
    std::uint8_t m_bTeleport[0x8]; // 0x40 bool
    std::uint8_t m_CompositeBones[0x18]; // 0x48 CUtlVector<CTransform>
    std::uint8_t m_SimStateBones[0x18]; // 0x60 CUtlVector<CTransform>
    std::uint8_t m_FeModelAnims[0x18]; // 0x78 CUtlVector<CTransform>
    std::uint8_t m_FeModelPos[0x18]; // 0x90 CUtlVector<VectorAligned>
    std::uint8_t m_FlexControllerWeights[0x18]; // 0xA8 CUtlVector<float32>
};

struct CModelConfigElement_Command {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Command[0x8]; // 0x48 CUtlString
    std::uint8_t m_Args[0x10]; // 0x50 KeyValues3
};

struct TargetSelectorInstanceData_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_currentIndex[0x1C]; // 0x0 CAnimNetVar<int32>
    std::uint8_t m_vMSRootMotionAnlyzerTarget[0x14]; // 0x1C CAnimNetVar<Vector>
};

struct CAnimEventDefinition {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_nFrame[0x4]; // 0x8 int32
    std::uint8_t m_nEndFrame[0x4]; // 0xC int32
    std::uint8_t m_flCycle[0x4]; // 0x10 float32
    std::uint8_t m_flDuration[0x4]; // 0x14 float32
    std::uint8_t m_EventData[0x10]; // 0x18 KeyValues3
    std::uint8_t m_sLegacyOptions[0x10]; // 0x28 CBufferString
    std::uint8_t m_sEventName[0x8]; // 0x38 CGlobalSymbol
};

struct CNmRootMotionData {
    static constexpr std::size_t size = 0x50;
    std::uint8_t m_transforms[0x18]; // 0x0 CUtlVector<CTransform>
    std::uint8_t m_nNumFrames[0x4]; // 0x18 int32
    std::uint8_t m_flAverageLinearVelocity[0x4]; // 0x1C float32
    std::uint8_t m_flAverageAngularVelocityRadians[0x10]; // 0x20 float32
    std::uint8_t m_totalDelta[0x20]; // 0x30 CTransform
};

struct CPulseGraphExecutionHistory {
    static constexpr std::size_t size = 0x78;
    std::uint8_t m_nInstanceID[0x8]; // 0x0 PulseGraphInstanceID_t
    std::uint8_t m_strFileName[0x8]; // 0x8 CUtlString
    std::uint8_t m_vecHistory[0x18]; // 0x10 CUtlVector<PulseGraphExecutionHistoryEntry_t*>
    std::uint8_t m_mapCellDesc[0x28]; // 0x28 CUtlOrderedMap<PulseDocNodeID_t,PulseGraphExecutionHistoryNodeDesc_t*>
    std::uint8_t m_mapCursorDesc[0x28]; // 0x50 CUtlOrderedMap<PulseCursorID_t,PulseGraphExecutionHistoryCursorDesc_t*>
};

struct AnimScriptHandle {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_id[0x4]; // 0x0 uint32
};

struct CFlexOp {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_OpCode[0x4]; // 0x0 FlexOpCode_t
    std::uint8_t m_Data[0x4]; // 0x4 int32
};

struct CHitReactUpdateNode {
    static constexpr std::size_t size = 0xD0;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t m_opFixedSettings[0x4C]; // 0x70 HitReactFixedSettings_t
    std::uint8_t m_triggerParam[0x2]; // 0xBC CAnimParamHandle
    std::uint8_t m_hitBoneParam[0x2]; // 0xBE CAnimParamHandle
    std::uint8_t m_hitOffsetParam[0x2]; // 0xC0 CAnimParamHandle
    std::uint8_t m_hitDirectionParam[0x2]; // 0xC2 CAnimParamHandle
    std::uint8_t m_hitStrengthParam[0x4]; // 0xC4 CAnimParamHandle
    std::uint8_t m_flMinDelayBetweenHits[0x4]; // 0xC8 float32
    std::uint8_t m_bResetChild[0x4]; // 0xCC bool
};

struct CLookAtUpdateNode {
    static constexpr std::size_t size = 0x160;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t m_opFixedSettings[0xD8]; // 0x70 LookAtOpFixedSettings_t
    std::uint8_t m_target[0x4]; // 0x148 AnimVectorSource
    std::uint8_t m_paramIndex[0x2]; // 0x14C CAnimParamHandle
    std::uint8_t m_weightParamIndex[0x2]; // 0x14E CAnimParamHandle
    std::uint8_t m_bResetChild[0x1]; // 0x150 bool
    std::uint8_t m_bLockWhenWaning[0xF]; // 0x151 bool
};

struct CAnimBone {
    static constexpr std::size_t size = 0x48;
    std::uint8_t m_name[0x10]; // 0x0 CBufferString
    std::uint8_t m_parent[0x4]; // 0x10 int32
    std::uint8_t m_pos[0xC]; // 0x14 Vector
    std::uint8_t m_quat[0x10]; // 0x20 QuaternionStorage
    std::uint8_t m_scale[0x4]; // 0x30 float32
    std::uint8_t m_qAlignment[0x10]; // 0x34 QuaternionStorage
    std::uint8_t m_flags[0x4]; // 0x44 int32
};

struct CAnimParameterManagerUpdater {
    static constexpr std::size_t size = 0x100;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_parameters[0x18]; // 0x18 CUtlVector<CSmartPtr<CAnimParameterBase>>
    std::uint8_t m_idToIndexMap[0x20]; // 0x30 CUtlHashtable<AnimParamID,int32>
    std::uint8_t m_nameToIndexMap[0x20]; // 0x50 CUtlHashtable<CUtlString,int32>
    std::uint8_t m_indexToHandle[0x18]; // 0x70 CUtlVector<CAnimParamHandle>
    std::uint8_t m_autoResetParams[0x18]; // 0x88 CUtlVector<std::pair<CAnimParamHandle,CAnimVariant>>
    std::uint8_t m_autoResetMap[0x60]; // 0xA0 CUtlHashtable<CAnimParamHandle,int16>
};

struct BoneDemoCaptureSettings_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_boneName[0x8]; // 0x0 CUtlString
    std::uint8_t m_flErrorSplineRotationMax[0x4]; // 0x8 float32
    std::uint8_t m_flErrorSplineTranslationMax[0x4]; // 0xC float32
    std::uint8_t m_flErrorSplineScaleMax[0x4]; // 0x10 float32
    std::uint8_t m_flErrorQuantizationRotationMax[0x4]; // 0x14 float32
    std::uint8_t m_flErrorQuantizationTranslationMax[0x4]; // 0x18 float32
    std::uint8_t m_flErrorQuantizationScaleMax[0x4]; // 0x1C float32
};

struct PairedSequenceData {
    static constexpr std::size_t size = 0x100;
    std::uint8_t m_vecPairedSequences[0x100]; // 0x0 PairedSequence_t[8]
};

struct CBoneConstraintPoseSpaceMorph__Input_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_inputValue[0x10]; // 0x0 Vector
    std::uint8_t m_outputWeightList[0x18]; // 0x10 CUtlVector<float32>
};

struct MoodAnimationLayer_t {
    static constexpr std::size_t size = 0x60;
    std::uint8_t m_sName[0x8]; // 0x0 CUtlString
    std::uint8_t m_bActiveListening[0x1]; // 0x8 bool
    std::uint8_t m_bActiveTalking[0x7]; // 0x9 bool
    std::uint8_t m_layerAnimations[0x18]; // 0x10 CUtlVector<MoodAnimation_t>
    std::uint8_t m_flIntensity[0x8]; // 0x28 CRangeFloat
    std::uint8_t m_flDurationScale[0x8]; // 0x30 CRangeFloat
    std::uint8_t m_bScaleWithInts[0x4]; // 0x38 bool
    std::uint8_t m_flNextStart[0x8]; // 0x3C CRangeFloat
    std::uint8_t m_flStartOffset[0x8]; // 0x44 CRangeFloat
    std::uint8_t m_flEndOffset[0x8]; // 0x4C CRangeFloat
    std::uint8_t m_flFadeIn[0x4]; // 0x54 float32
    std::uint8_t m_flFadeOut[0x8]; // 0x58 float32
};

struct CSpeedScaleUpdateNode {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t m_paramIndex[0x8]; // 0x70 CAnimParamHandle
};

struct CSequenceTagSpans {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_sSequenceName[0x8]; // 0x0 CGlobalSymbol
    std::uint8_t m_tags[0x18]; // 0x8 CUtlVector<TagSpan_t>
};

struct CModelConfigElement_SetBodygroupOnAttachedModels {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_GroupName[0x8]; // 0x48 CUtlString
    std::uint8_t m_nChoice[0x8]; // 0x50 int32
};

struct CCurrentVelocityMetricEvaluator {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x50]; // 0x0
};

struct CNmBoolValueNode__CDefinition {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct CAnimReplayFrame {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_inputDataBlocks[0x18]; // 0x10 CUtlVector<CUtlBinaryBlock>
    std::uint8_t m_instanceData[0x18]; // 0x28 CUtlBinaryBlock
    std::uint8_t m_startingLocalToWorldTransform[0x20]; // 0x40 CTransform
    std::uint8_t m_localToWorldTransform[0x20]; // 0x60 CTransform
    std::uint8_t m_timeStamp[0x10]; // 0x80 float32
};

struct CNmTransitionEvent {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_rule[0x8]; // 0x18 NmTransitionRule_t
    std::uint8_t m_ID[0x8]; // 0x20 CGlobalSymbol
};

struct CNmFloatCurveEvent {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_ID[0x8]; // 0x18 CGlobalSymbol
    std::uint8_t m_curve[0x40]; // 0x20 CPiecewiseCurve
};

struct CParticleTransformInput {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nType[0x8]; // 0x10 ParticleTransformType_t
    std::uint8_t m_NamedValue[0x40]; // 0x18 CParticleNamedValueRef
    std::uint8_t m_bFollowNamedValue[0x1]; // 0x58 bool
    std::uint8_t m_bSupportsDisabled[0x1]; // 0x59 bool
    std::uint8_t m_bUseOrientation[0x2]; // 0x5A bool
    std::uint8_t m_nControlPoint[0x4]; // 0x5C int32
    std::uint8_t m_nControlPointRangeMax[0x4]; // 0x60 int32
    std::uint8_t m_flEndCPGrowthTime[0x4]; // 0x64 float32
};

struct CPathAnimMotorUpdaterBase {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x20]; // 0x0
    std::uint8_t m_bLockToPath[0x8]; // 0x20 bool
};

struct PGDInstruction_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t m_nCode[0x4]; // 0x0 PulseInstructionCode_t
    std::uint8_t m_nVar[0x4]; // 0x4 PulseRuntimeVarIndex_t
    std::uint8_t m_nReg0[0x2]; // 0x8 PulseRuntimeRegisterIndex_t
    std::uint8_t m_nReg1[0x2]; // 0xA PulseRuntimeRegisterIndex_t
    std::uint8_t m_nReg2[0x4]; // 0xC PulseRuntimeRegisterIndex_t
    std::uint8_t m_nInvokeBindingIndex[0x4]; // 0x10 PulseRuntimeInvokeIndex_t
    std::uint8_t m_nChunk[0x4]; // 0x14 PulseRuntimeChunkIndex_t
    std::uint8_t m_nDestInstruction[0x4]; // 0x18 int32
    std::uint8_t m_nCallInfoIndex[0x4]; // 0x1C PulseRuntimeCallInfoIndex_t
    std::uint8_t m_nConstIdx[0x2]; // 0x20 PulseRuntimeConstantIndex_t
    std::uint8_t m_nDomainValueIdx[0x2]; // 0x22 PulseRuntimeDomainValueIndex_t
    std::uint8_t m_nBlackboardReferenceIdx[0x2]; // 0x24 PulseRuntimeBlackboardReferenceIndex_t
    std::uint8_t m_nTempVarIdx[0x12]; // 0x26 PulseRuntimeTempVarIndex_t
};

struct CNmFootstepEventPercentageThroughNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nSourceStateNodeIdx[0x2]; // 0x10 int16
    std::uint8_t m_phaseCondition[0x2]; // 0x12 NmFootPhaseCondition_t
    std::uint8_t m_eventConditionRules[0x4]; // 0x14 CNmBitFlags
};

struct AimCameraOpFixedSettings_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_nChainIndex[0x4]; // 0x0 int32
    std::uint8_t m_nCameraJointIndex[0x4]; // 0x4 int32
    std::uint8_t m_nPelvisJointIndex[0x4]; // 0x8 int32
    std::uint8_t m_nClavicleLeftJointIndex[0x4]; // 0xC int32
    std::uint8_t m_nClavicleRightJointIndex[0x4]; // 0x10 int32
    std::uint8_t m_nDepenetrationJointIndex[0x4]; // 0x14 int32
    std::uint8_t m_propJoints[0x18]; // 0x18 CUtlVector<int32>
};

struct SkeletonAnimCapture_t__Camera_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_tmCamera[0x20]; // 0x0 CTransform
    std::uint8_t m_flTime[0x10]; // 0x20 float32
};

struct CNmGraphEventConditionNode__CDefinition {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nSourceStateNodeIdx[0x4]; // 0x10 int16
    std::uint8_t m_eventConditionRules[0x4]; // 0x14 CNmBitFlags
    std::uint8_t m_conditions[0x68]; // 0x18 CUtlVectorFixedGrowable<CNmGraphEventConditionNode::Condition_t,5>
};

struct CFollowAttachmentUpdateNode {
    static constexpr std::size_t size = 0x110;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t m_opFixedData[0xA0]; // 0x70 FollowAttachmentSettings_t
};

struct CMovementComponentUpdater {
    static constexpr std::size_t size = 0xB8;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_motors[0x18]; // 0x30 CUtlVector<CSmartPtr<CAnimMotorUpdaterBase>>
    std::uint8_t m_facingDamping[0x20]; // 0x48 CAnimInputDamping
    std::uint8_t m_nDefaultMotorIndex[0x4]; // 0x68 int32
    std::uint8_t m_flDefaultRunSpeed[0x4]; // 0x6C float32
    std::uint8_t m_bMoveVarsDisabled[0x1]; // 0x70 bool
    std::uint8_t m_bNetworkPath[0x1]; // 0x71 bool
    std::uint8_t m_bNetworkFacing[0x1]; // 0x72 bool
    std::uint8_t m_paramHandles[0x45]; // 0x73 CAnimParamHandle[34]
};

struct CModelConfigElement_SetMaterialGroup {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_MaterialGroupName[0x8]; // 0x48 CUtlString
};

struct IParticleEffect {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct CFutureFacingMetricEvaluator {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x50]; // 0x0
    std::uint8_t m_flDistance[0x4]; // 0x50 float32
    std::uint8_t m_flTime[0x4]; // 0x54 float32
};

struct CNmIDBasedClipSelectorNode__CDefinition {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_optionNodeIndices[0x18]; // 0x10 CUtlLeanVectorFixedGrowable<int16,5>
    std::uint8_t m_optionIDs[0x30]; // 0x28 CUtlLeanVectorFixedGrowable<CGlobalSymbol,5>
    std::uint8_t m_nParameterNodeIdx[0x2]; // 0x58 int16
    std::uint8_t m_nFallbackNodeIdx[0x2]; // 0x5A int16
    std::uint8_t m_bIgnoreInvalidOptions[0x4]; // 0x5C bool
};

struct CLeanMatrixInstanceData {
    static constexpr std::size_t size = 0xC;
    std::uint8_t m_flValueY[0x4]; // 0x0 float32
    std::uint8_t m_flValueX[0x8]; // 0x4 float32
};

struct NmCompressionSettings_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t m_translationRangeX[0x8]; // 0x0 NmCompressionSettings_t::QuantizationRange_t
    std::uint8_t m_translationRangeY[0x8]; // 0x8 NmCompressionSettings_t::QuantizationRange_t
    std::uint8_t m_translationRangeZ[0x8]; // 0x10 NmCompressionSettings_t::QuantizationRange_t
    std::uint8_t m_scaleRange[0x8]; // 0x18 NmCompressionSettings_t::QuantizationRange_t
    std::uint8_t m_nTrackReadOffset[0x10]; // 0x20 int32
    std::uint8_t m_constantRotation[0x10]; // 0x30 Quaternion
    std::uint8_t m_bIsRotationStatic[0x1]; // 0x40 bool
    std::uint8_t m_bIsTranslationStatic[0x1]; // 0x41 bool
    std::uint8_t m_bIsScaleStatic[0xE]; // 0x42 bool
};

struct CPulse_Variable {
    static constexpr std::size_t size = 0x60;
    std::uint8_t m_Name[0x10]; // 0x0 PulseSymbol_t
    std::uint8_t m_Description[0x8]; // 0x10 CUtlString
    std::uint8_t m_Type[0x18]; // 0x18 CPulseValueFullType
    std::uint8_t m_DefaultValue[0x14]; // 0x30 KeyValues3
    std::uint8_t m_nKeysSource[0x4]; // 0x44 PulseVariableKeysSource_t
    std::uint8_t m_bIsPublicBlackboardVariable[0x1]; // 0x48 bool
    std::uint8_t m_bIsObservable[0x3]; // 0x49 bool
    std::uint8_t m_nEditorNodeID[0x4]; // 0x4C PulseDocNodeID_t
    std::uint8_t m_Metadata[0x10]; // 0x50 KeyValues3
};

struct PARTICLE_EHANDLE__ {
    static constexpr std::size_t size = 0x4;
    std::uint8_t unused[0x4]; // 0x0 int32
};

struct CAddUpdateNode {
    static constexpr std::size_t size = 0xA0;
    std::uint8_t pad_0[0x94]; // 0x0
    std::uint8_t m_footMotionTiming[0x4]; // 0x94 BinaryNodeChildOption
    std::uint8_t m_bApplyToFootMotion[0x1]; // 0x98 bool
    std::uint8_t m_bApplyChannelsSeparately[0x1]; // 0x99 bool
    std::uint8_t m_bUseModelSpace[0x1]; // 0x9A bool
    std::uint8_t m_bApplyScale[0x5]; // 0x9B bool
};

struct CAnimEnum {
    static constexpr std::size_t size = 0x1;
    std::uint8_t m_value[0x1]; // 0x0 uint8
};

struct CDemoSettingsComponentUpdater {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_settings[0x80]; // 0x30 CAnimDemoCaptureSettings
};

struct CAnimDecoder {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_szName[0x10]; // 0x0 CBufferString
    std::uint8_t m_nVersion[0x4]; // 0x10 int32
    std::uint8_t m_nType[0x4]; // 0x14 int32
};

struct CNmCachedTargetNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nInputValueNodeIdx[0x4]; // 0x10 int16
    std::uint8_t m_mode[0x4]; // 0x14 NmCachedValueMode_t
};

struct CPerParticleFloatInput {
    static constexpr std::size_t size = 0x178;
    std::uint8_t pad_0[0x178]; // 0x0
};

struct CNmConstBoolNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_bValue[0x8]; // 0x10 bool
};

struct CNmBitFlags {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_flags[0x4]; // 0x0 uint32
};

struct CFootStride {
    static constexpr std::size_t size = 0x58;
    std::uint8_t m_definition[0x40]; // 0x0 CFootCycleDefinition
    std::uint8_t m_trajectories[0x18]; // 0x40 CFootTrajectories
};

struct CSceneObjectData__RTProxyDrawDescriptor_t {
    static constexpr std::size_t size = 0x168;
    std::uint8_t m_materialGroupToken[0x4]; // 0x0 uint32
    std::uint8_t m_nSrcDrawIndex[0x4]; // 0x4 int32
    std::uint8_t m_drawDesc[0x120]; // 0x8 CMaterialDrawDescriptor
    std::uint8_t m_mWorldFromLocal[0x30]; // 0x128 matrix3x4_t
    std::uint8_t m_nVertexAlbedoFormat[0x1]; // 0x158 VertexAlbedoFormat_t
    std::uint8_t m_nVertexAlbedoVB[0x1]; // 0x159 int8
    std::uint8_t m_nVertexAlbedoOffset[0x2]; // 0x15A uint16
    std::uint8_t m_nVertexAlbedoStride[0x2]; // 0x15C uint16
    std::uint8_t m_nVertexEmissiveFormat[0x1]; // 0x15E VertexAlbedoFormat_t
    std::uint8_t m_nVertexEmissiveVB[0x1]; // 0x15F int8
    std::uint8_t m_nVertexEmissiveOffset[0x2]; // 0x160 uint16
    std::uint8_t m_nVertexEmissiveStride[0x2]; // 0x162 uint16
    std::uint8_t m_fEmissiveFactor[0x4]; // 0x164 float32
};

struct CNmLegacyEvent {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_animEventClassName[0x8]; // 0x18 CUtlString
    std::uint8_t m_KV[0x30]; // 0x20 KeyValues3
};

struct CStateNodeStateData {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_pChild[0x18]; // 0x0 CAnimUpdateNodeRef
};

struct CFootstepLandedAnimTag {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x58]; // 0x0
    std::uint8_t m_FootstepType[0x8]; // 0x58 FootstepLandedFootSoundType_t
    std::uint8_t m_OverrideSoundName[0x8]; // 0x60 CUtlString
    std::uint8_t m_DebugAnimSourceString[0x8]; // 0x68 CUtlString
    std::uint8_t m_BoneName[0x8]; // 0x70 CUtlString
    std::uint8_t m_footstepJumpPhase[0x8]; // 0x78 FootstepJumpPhase_t
};

struct CEnumAnimParameter {
    static constexpr std::size_t size = 0xD8;
    std::uint8_t pad_0[0x88]; // 0x0
    std::uint8_t m_defaultValue[0x8]; // 0x88 uint8
    std::uint8_t m_enumOptions[0x18]; // 0x90 CUtlVector<CUtlString>
    std::uint8_t m_vecEnumReferenced[0x30]; // 0xA8 CUtlVector<uint64>
};

struct CHandshakeAnimTagBase {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x50]; // 0x0
    std::uint8_t m_bIsDisableTag[0x8]; // 0x50 bool
};

struct AnimTagID {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_id[0x4]; // 0x0 uint32
};

struct CWayPointHelperInstanceData {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_vMovement[0xC]; // 0x0 Vector
    std::uint8_t m_vRotation[0xC]; // 0xC QAngle
    std::uint8_t m_vWaypointPosWS[0xC]; // 0x18 Vector
    std::uint8_t m_bStopUpdatingWaypointPos[0x4]; // 0x24 bool
};

struct CAnimFrameSegment {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_nUniqueFrameIndex[0x4]; // 0x0 int32
    std::uint8_t m_nLocalElementMasks[0x4]; // 0x4 uint32
    std::uint8_t m_nLocalChannel[0x8]; // 0x8 int32
    std::uint8_t m_container[0x10]; // 0x10 CUtlBinaryBlock
};

struct CSlopeComponentUpdater {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x34]; // 0x0
    std::uint8_t m_flTraceDistance[0x4]; // 0x34 float32
    std::uint8_t m_hSlopeAngle[0x2]; // 0x38 CAnimParamHandle
    std::uint8_t m_hSlopeAngleFront[0x2]; // 0x3A CAnimParamHandle
    std::uint8_t m_hSlopeAngleSide[0x2]; // 0x3C CAnimParamHandle
    std::uint8_t m_hSlopeHeading[0x2]; // 0x3E CAnimParamHandle
    std::uint8_t m_hSlopeNormal[0x2]; // 0x40 CAnimParamHandle
    std::uint8_t m_hSlopeNormal_WorldSpace[0x6]; // 0x42 CAnimParamHandle
};

struct CAnimInputDamping {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_speedFunction[0x4]; // 0x8 DampingSpeedFunction
    std::uint8_t m_fSpeedScale[0x4]; // 0xC float32
    std::uint8_t m_fFallingSpeedScale[0x8]; // 0x10 float32
};

struct CHitBoxSet {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_name[0x8]; // 0x0 CUtlString
    std::uint8_t m_nNameHash[0x8]; // 0x8 uint32
    std::uint8_t m_HitBoxes[0x18]; // 0x10 CUtlVector<CHitBox>
    std::uint8_t m_SourceFilename[0x8]; // 0x28 CUtlString
};

struct ChainToSolveData_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t m_nChainIndex[0x4]; // 0x0 int32
    std::uint8_t m_SolverSettings[0xC]; // 0x4 IKSolverSettings_t
    std::uint8_t m_TargetSettings[0x28]; // 0x10 IKTargetSettings_t
    std::uint8_t m_DebugSetting[0x4]; // 0x38 SolveIKChainAnimNodeDebugSetting
    std::uint8_t m_flDebugNormalizedValue[0x4]; // 0x3C float32
    std::uint8_t m_vDebugOffset[0x10]; // 0x40 VectorAligned
};

struct CConstraintSlave {
    static constexpr std::size_t size = 0x50;
    std::uint8_t m_qBaseOrientation[0x10]; // 0x0 Quaternion
    std::uint8_t m_vBasePosition[0xC]; // 0x10 Vector
    std::uint8_t m_nBoneHash[0x4]; // 0x1C uint32
    std::uint8_t m_flWeight[0x8]; // 0x20 float32
    std::uint8_t m_sName[0x28]; // 0x28 CUtlString
};

struct PulseRuntimeOutputIndex_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_Value[0x4]; // 0x0 int32
};

struct CFootCycleDefinition {
    static constexpr std::size_t size = 0x3C;
    std::uint8_t m_vStancePositionMS[0xC]; // 0x0 Vector
    std::uint8_t m_vMidpointPositionMS[0xC]; // 0xC Vector
    std::uint8_t m_flStanceDirectionMS[0x4]; // 0x18 float32
    std::uint8_t m_vToStrideStartPos[0xC]; // 0x1C Vector
    std::uint8_t m_stanceCycle[0x4]; // 0x28 CAnimCycle
    std::uint8_t m_footLiftCycle[0x4]; // 0x2C CFootCycle
    std::uint8_t m_footOffCycle[0x4]; // 0x30 CFootCycle
    std::uint8_t m_footStrikeCycle[0x4]; // 0x34 CFootCycle
    std::uint8_t m_footLandCycle[0x4]; // 0x38 CFootCycle
};

struct CVirtualAnimParameter {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t m_expressionString[0x8]; // 0x70 CUtlString
    std::uint8_t m_eParamType[0x8]; // 0x78 AnimParamType_t
};

struct CMotionMetricEvaluator {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_means[0x18]; // 0x18 CUtlVector<float32>
    std::uint8_t m_standardDeviations[0x18]; // 0x30 CUtlVector<float32>
    std::uint8_t m_flWeight[0x4]; // 0x48 float32
    std::uint8_t m_nDimensionStartIndex[0x4]; // 0x4C int32
};

struct CFutureVelocityMetricEvaluator {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x50]; // 0x0
    std::uint8_t m_flDistance[0x4]; // 0x50 float32
    std::uint8_t m_flStoppingDistance[0x4]; // 0x54 float32
    std::uint8_t m_flTargetSpeed[0x4]; // 0x58 float32
    std::uint8_t m_eMode[0x4]; // 0x5C VelocityMetricMode
};

struct CNmSkeleton__SecondarySkeleton_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_attachToBoneID[0x8]; // 0x0 CGlobalSymbol
    std::uint8_t m_skeleton[0x8]; // 0x8 CStrongHandle<InfoForResourceTypeCNmSkeleton>
};

struct CAnimUpdateNodeBase {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_nodePath[0x30]; // 0x18 CAnimNodePath
    std::uint8_t m_networkMode[0x8]; // 0x48 AnimNodeNetworkMode
    std::uint8_t m_name[0x8]; // 0x50 CUtlString
};

struct CSetParameterActionUpdater {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_hParam[0x2]; // 0x18 CAnimParamHandle
    std::uint8_t m_value[0x16]; // 0x1A CAnimVariant
};

struct CNmFixedWeightBoneMaskNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_flBoneWeight[0x8]; // 0x10 float32
};

struct SkeletonAnimCapture_t__FrameStamp_t {
    static constexpr std::size_t size = 0x1C;
    std::uint8_t m_flTime[0x4]; // 0x0 float32
    std::uint8_t m_flEntitySimTime[0x4]; // 0x4 float32
    std::uint8_t m_bTeleportTick[0x1]; // 0x8 bool
    std::uint8_t m_bPredicted[0x3]; // 0x9 bool
    std::uint8_t m_flCurTime[0x4]; // 0xC float32
    std::uint8_t m_flRealTime[0x4]; // 0x10 float32
    std::uint8_t m_nFrameCount[0x4]; // 0x14 int32
    std::uint8_t m_nTickCount[0x4]; // 0x18 int32
};

struct CPulse_DomainValue {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_nType[0x8]; // 0x0 PulseDomainValueType_t
    std::uint8_t m_Value[0x8]; // 0x8 CGlobalSymbolCaseSensitive
    std::uint8_t m_RequiredRuntimeType[0x20]; // 0x10 CPulseValueFullType
};

struct CBonePositionMetricEvaluator {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x50]; // 0x0
    std::uint8_t m_nBoneIndex[0x8]; // 0x50 int32
};

struct CRenderBufferBinding {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_hBuffer[0x10]; // 0x0 uint64
    std::uint8_t m_nBindOffsetBytes[0x10]; // 0x10 uint32
};

struct CParticleCollectionRendererFloatInput {
    static constexpr std::size_t size = 0x178;
    std::uint8_t pad_0[0x178]; // 0x0
};

struct CNmParameterizedBlendNode__Parameterization_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t m_blendRanges[0x48]; // 0x0 CUtlLeanVectorFixedGrowable<CNmParameterizedBlendNode::BlendRange_t,5>
    std::uint8_t m_parameterRange[0x8]; // 0x48 Range_t
};

struct CNmEntityAttributeIntEvent {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x38]; // 0x0
    std::uint8_t m_nIntValue[0x8]; // 0x38 int32
};

struct CNmNotNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nInputValueNodeIdx[0x8]; // 0x10 int16
};

struct CMeshletDescriptor {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_PackedAABB[0x8]; // 0x0 PackedAABB_t
    std::uint8_t m_CullingData[0x4]; // 0x8 CDrawCullingData
    std::uint8_t m_nVertexOffset[0x4]; // 0xC uint32
    std::uint8_t m_nTriangleOffset[0x4]; // 0x10 uint32
    std::uint8_t m_nVertexCount[0x1]; // 0x14 uint8
    std::uint8_t m_nTriangleCount[0x1]; // 0x15 uint8
    std::uint8_t m_nBoneIndex[0x2]; // 0x16 uint16
};

struct CMorphSetData {
    static constexpr std::size_t size = 0x98;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nWidth[0x4]; // 0x10 int32
    std::uint8_t m_nHeight[0x4]; // 0x14 int32
    std::uint8_t m_bundleTypes[0x18]; // 0x18 CUtlVector<MorphBundleType_t>
    std::uint8_t m_morphDatas[0x18]; // 0x30 CUtlVector<CMorphData>
    std::uint8_t m_pTextureAtlas[0x8]; // 0x48 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_FlexDesc[0x18]; // 0x50 CUtlVector<CFlexDesc>
    std::uint8_t m_FlexControllers[0x18]; // 0x68 CUtlVector<CFlexController>
    std::uint8_t m_FlexRules[0x18]; // 0x80 CUtlVector<CFlexRule>
};

struct CNmAndNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_conditionNodeIndices[0x10]; // 0x10 CUtlLeanVectorFixedGrowable<int16,4>
};

struct CMorphConstraint {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t m_sTargetMorph[0x8]; // 0x60 CUtlString
    std::uint8_t m_nSlaveChannel[0x4]; // 0x68 int32
    std::uint8_t m_flMin[0x4]; // 0x6C float32
    std::uint8_t m_flMax[0x10]; // 0x70 float32
};

struct CClothSettingsAnimTag {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x58]; // 0x0
    std::uint8_t m_flStiffness[0x4]; // 0x58 float32
    std::uint8_t m_flEaseIn[0x4]; // 0x5C float32
    std::uint8_t m_flEaseOut[0x8]; // 0x60 float32
    std::uint8_t m_nVertexSet[0x8]; // 0x68 CUtlString
};

struct CAnimDesc_Flag {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_bLooping[0x1]; // 0x0 bool
    std::uint8_t m_bAllZeros[0x1]; // 0x1 bool
    std::uint8_t m_bHidden[0x1]; // 0x2 bool
    std::uint8_t m_bDelta[0x1]; // 0x3 bool
    std::uint8_t m_bLegacyWorldspace[0x1]; // 0x4 bool
    std::uint8_t m_bModelDoc[0x1]; // 0x5 bool
    std::uint8_t m_bImplicitSeqIgnoreDelta[0x1]; // 0x6 bool
    std::uint8_t m_bAnimGraphAdditive[0x1]; // 0x7 bool
};

struct CNmBlend2DNode__CDefinition {
    static constexpr std::size_t size = 0xC8;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_sourceNodeIndices[0x18]; // 0x10 CUtlLeanVectorFixedGrowable<int16,5>
    std::uint8_t m_values[0x58]; // 0x28 CUtlLeanVectorFixedGrowable<Vector2D,10>
    std::uint8_t m_indices[0x28]; // 0x80 CUtlLeanVectorFixedGrowable<uint8,30>
    std::uint8_t m_hullIndices[0x18]; // 0xA8 CUtlLeanVectorFixedGrowable<uint8,10>
    std::uint8_t m_nInputParameterNodeIdx0[0x2]; // 0xC0 int16
    std::uint8_t m_nInputParameterNodeIdx1[0x2]; // 0xC2 int16
    std::uint8_t m_bAllowLooping[0x4]; // 0xC4 bool
};

struct CNmFloatChannelData__ChannelSettings_t {
    static constexpr std::size_t size = 0xC;
    std::uint8_t m_range[0x8]; // 0x0 NmCompressionSettings_t::QuantizationRange_t
    std::uint8_t m_bIsStatic[0x4]; // 0x8 bool
};

struct CBlendCurve {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_flControlPoint1[0x4]; // 0x0 float32
    std::uint8_t m_flControlPoint2[0x4]; // 0x4 float32
};

struct CNmSkeleton__ContactConfig_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t m_ID[0x8]; // 0x0 CGlobalSymbol
    std::uint8_t m_nBoneIdx[0x4]; // 0x8 int32
    std::uint8_t m_vBoneLocalProbeDir[0xC]; // 0xC Vector
    std::uint8_t m_flProbeMaxDist[0x8]; // 0x18 float32
    std::uint8_t m_audioInfo[0x18]; // 0x20 NmContactAudioInfo_t
};

struct CNmGraphNode__CDefinition {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_nNodeIdx[0x8]; // 0x8 int16
};

struct CAnimationGraphVisualizerSphere {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t m_vWsPosition[0x10]; // 0x40 VectorAligned
    std::uint8_t m_flRadius[0x4]; // 0x50 float32
    std::uint8_t m_Color[0xC]; // 0x54 Color
};

struct CNmClip__ModelSpaceSamplingChainLink_t {
    static constexpr std::size_t size = 0xC;
    std::uint8_t m_nBoneIdx[0x4]; // 0x0 int32
    std::uint8_t m_nParentBoneIdx[0x4]; // 0x4 int32
    std::uint8_t m_nParentChainLinkIdx[0x4]; // 0x8 int32
};

struct CAnimUserDifference {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_name[0x10]; // 0x0 CBufferString
    std::uint8_t m_nType[0x8]; // 0x10 int32
};

struct CNmDurationScaleNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x20]; // 0x0
};

struct CTransitionUpdateData {
    static constexpr std::size_t size = 0x3;
    std::uint8_t m_srcStateIndex[0x1]; // 0x0 uint8
    std::uint8_t m_destStateIndex[0x2]; // 0x1 uint8
};

struct PulseRuntimeBlackboardReferenceIndex_t {
    static constexpr std::size_t size = 0x2;
    std::uint8_t m_Value[0x2]; // 0x0 int16
};

struct CNmContactEvent {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_configID[0x8]; // 0x18 CGlobalSymbol
    std::uint8_t m_probeBoneID[0x8]; // 0x20 CGlobalSymbol
    std::uint8_t m_vBoneLocalProbeDir[0xC]; // 0x28 Vector
    std::uint8_t m_flProbeMaxDist[0x4]; // 0x34 float32
    std::uint8_t m_audioInfo[0x18]; // 0x38 NmContactAudioInfo_t
};

struct CMovementHandshakeAnimTag {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x58]; // 0x0
};

struct CBoneConstraintPoseSpaceBone__Input_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_inputValue[0x10]; // 0x0 Vector
    std::uint8_t m_outputTransformList[0x18]; // 0x10 CUtlVector<CTransform>
};

struct CSeqMultiFetch {
    static constexpr std::size_t size = 0x70;
    std::uint8_t m_flags[0x8]; // 0x0 CSeqMultiFetchFlag
    std::uint8_t m_localReferenceArray[0x18]; // 0x8 CUtlVector<int16>
    std::uint8_t m_nGroupSize[0x8]; // 0x20 int32[2]
    std::uint8_t m_nLocalPose[0x8]; // 0x28 int32[2]
    std::uint8_t m_poseKeyArray0[0x18]; // 0x30 CUtlVector<float32>
    std::uint8_t m_poseKeyArray1[0x18]; // 0x48 CUtlVector<float32>
    std::uint8_t m_nLocalCyclePoseParameter[0x4]; // 0x60 int32
    std::uint8_t m_bCalculatePoseParameters[0x1]; // 0x64 bool
    std::uint8_t m_bFixedBlendWeight[0x3]; // 0x65 bool
    std::uint8_t m_flFixedBlendWeightVals[0x8]; // 0x68 float32[2]
};

struct CPhysSurfacePropertiesSoundNames {
    static constexpr std::size_t size = 0x60;
    std::uint8_t m_impactSoft[0x8]; // 0x0 CUtlString
    std::uint8_t m_impactHard[0x8]; // 0x8 CUtlString
    std::uint8_t m_scrapeSmooth[0x8]; // 0x10 CUtlString
    std::uint8_t m_scrapeRough[0x8]; // 0x18 CUtlString
    std::uint8_t m_bulletImpact[0x8]; // 0x20 CUtlString
    std::uint8_t m_rolling[0x8]; // 0x28 CUtlString
    std::uint8_t m_break[0x8]; // 0x30 CUtlString
    std::uint8_t m_strain[0x8]; // 0x38 CUtlString
    std::uint8_t m_meleeImpact[0x8]; // 0x40 CUtlString
    std::uint8_t m_pushOff[0x8]; // 0x48 CUtlString
    std::uint8_t m_skidStop[0x8]; // 0x50 CUtlString
    std::uint8_t m_resonant[0x8]; // 0x58 CUtlString
};

struct NmBoneMaskSetDefinition_t {
    static constexpr std::size_t size = 0x128;
    std::uint8_t m_ID[0x8]; // 0x0 CGlobalSymbol
    std::uint8_t m_primaryWeightList[0x110]; // 0x8 CNmBoneWeightList
    std::uint8_t m_secondaryWeightLists[0x10]; // 0x118 CUtlLeanVector<CNmBoneWeightList>
};

struct CAudioAnimTag {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x58]; // 0x0
    std::uint8_t m_clipName[0x8]; // 0x58 CUtlString
    std::uint8_t m_attachmentName[0x8]; // 0x60 CUtlString
    std::uint8_t m_flVolume[0x4]; // 0x68 float32
    std::uint8_t m_bStopWhenTagEnds[0x1]; // 0x6C bool
    std::uint8_t m_bStopWhenGraphEnds[0x1]; // 0x6D bool
    std::uint8_t m_bPlayOnServer[0x1]; // 0x6E bool
    std::uint8_t m_bPlayOnClient[0x1]; // 0x6F bool
};

struct CTurnHelperUpdateNode {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x74]; // 0x0
    std::uint8_t m_facingTarget[0x4]; // 0x74 AnimValueSource
    std::uint8_t m_turnStartTimeOffset[0x4]; // 0x78 float32
    std::uint8_t m_turnDuration[0x4]; // 0x7C float32
    std::uint8_t m_bMatchChildDuration[0x4]; // 0x80 bool
    std::uint8_t m_manualTurnOffset[0x4]; // 0x84 float32
    std::uint8_t m_bUseManualTurnOffset[0x8]; // 0x88 bool
};

struct CAnimationGroup {
    static constexpr std::size_t size = 0x148;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nFlags[0x8]; // 0x10 uint32
    std::uint8_t m_name[0x48]; // 0x18 CBufferString
    std::uint8_t m_localHAnimArray_Handle[0x18]; // 0x60 CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>>
    std::uint8_t m_includedGroupArray_Handle[0x18]; // 0x78 CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>>
    std::uint8_t m_directHSeqGroup_Handle[0x8]; // 0x90 CStrongHandle<InfoForResourceTypeCSequenceGroupData>
    std::uint8_t m_decodeKey[0x78]; // 0x98 CAnimKeyData
    std::uint8_t m_szScripts[0x18]; // 0x110 CUtlVector<CBufferString>
    std::uint8_t m_AdditionalExtRefs[0x20]; // 0x128 CUtlVector<CStrongHandleVoid>
};

struct CPulse_TempVarInfo {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_Name[0x10]; // 0x0 PulseSymbol_t
    std::uint8_t m_Type[0x18]; // 0x10 CPulseValueFullType
    std::uint8_t m_nEditorNodeID[0x4]; // 0x28 PulseDocNodeID_t
    std::uint8_t m_bIsObservable[0x4]; // 0x2C bool
};

struct NmContactAudioInfo_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_audioActionID[0x8]; // 0x0 CGlobalSymbol
    std::uint8_t m_audioTypeID[0x8]; // 0x8 CGlobalSymbol
    std::uint8_t m_soundeventOverrideID[0x8]; // 0x10 CGlobalSymbol
};

struct NmSyncTrackTime_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_nEventIdx[0x4]; // 0x0 int32
    std::uint8_t m_percentageThrough[0x4]; // 0x4 NmPercent_t
};

struct CNmClip {
    static constexpr std::size_t size = 0x200;
    std::uint8_t m_skeleton[0x8]; // 0x0 CStrongHandle<InfoForResourceTypeCNmSkeleton>
    std::uint8_t m_nNumFrames[0x4]; // 0x8 uint32
    std::uint8_t m_flDuration[0x4]; // 0xC float32
    std::uint8_t m_compressedPoseData[0x10]; // 0x10 CUtlBinaryBlock
    std::uint8_t m_trackCompressionSettings[0x18]; // 0x20 CUtlVector<NmCompressionSettings_t>
    std::uint8_t m_compressedPoseOffsets[0x40]; // 0x38 CUtlVector<uint32>
    std::uint8_t m_secondaryAnimations[0x20]; // 0x78 CUtlVectorFixedGrowable<CNmClip*,1>
    std::uint8_t m_floatChannelData[0x28]; // 0x98 CUtlVectorFixedGrowable<CNmFloatChannelData*,2>
    std::uint8_t m_syncTrack[0xB0]; // 0xC0 CNmSyncTrack
    std::uint8_t m_rootMotion[0x50]; // 0x170 CNmRootMotionData
    std::uint8_t m_bIsAdditive[0x8]; // 0x1C0 bool
    std::uint8_t m_modelSpaceSamplingChain[0x18]; // 0x1C8 CUtlVector<CNmClip::ModelSpaceSamplingChainLink_t>
    std::uint8_t m_modelSpaceBoneSamplingIndices[0x20]; // 0x1E0 CUtlVector<int32>
};

struct CToggleComponentActionUpdater {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_componentID[0x4]; // 0x18 AnimComponentID
    std::uint8_t m_bSetEnabled[0x4]; // 0x1C bool
};

struct CNmOverlayBlendTask {
    static constexpr std::size_t size = 0x100;
    std::uint8_t pad_0[0x100]; // 0x0
};

struct CNmSpeedScaleBaseNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_nInputValueNodeIdx[0x4]; // 0x18 int16
    std::uint8_t m_flDefaultInputValue[0x4]; // 0x1C float32
};

struct CNmValueNode__CDefinition {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct CAnimationGraphVisualizerPrimitiveBase {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_Type[0x4]; // 0x8 CAnimationGraphVisualizerPrimitiveType
    std::uint8_t m_OwningAnimNodePaths[0x2C]; // 0xC AnimNodeID[11]
    std::uint8_t m_nOwningAnimNodePathCount[0x8]; // 0x38 int32
};

struct CBindPoseUpdateNode {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x60]; // 0x0
};

struct NmSyncTrackTimeRange_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_startTime[0x8]; // 0x0 NmSyncTrackTime_t
    std::uint8_t m_endTime[0x8]; // 0x8 NmSyncTrackTime_t
};

struct CAnimationGraphVisualizerText {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t m_vWsPosition[0x10]; // 0x40 VectorAligned
    std::uint8_t m_Color[0x8]; // 0x50 Color
    std::uint8_t m_Text[0x8]; // 0x58 CUtlString
};

struct CFootTrajectory {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_vOffset[0xC]; // 0x8 Vector
    std::uint8_t m_flRotationOffset[0x4]; // 0x14 float32
    std::uint8_t m_flProgression[0x8]; // 0x18 float32
};

struct CMotionMatchingUpdateNode {
    static constexpr std::size_t size = 0x148;
    std::uint8_t pad_0[0x58]; // 0x0
    std::uint8_t m_dataSet[0x20]; // 0x58 CMotionDataSet
    std::uint8_t m_metrics[0x18]; // 0x78 CUtlVector<CSmartPtr<CMotionMetricEvaluator>>
    std::uint8_t m_weights[0x50]; // 0x90 CUtlVector<float32>
    std::uint8_t m_bSearchEveryTick[0x4]; // 0xE0 bool
    std::uint8_t m_flSearchInterval[0x4]; // 0xE4 float32
    std::uint8_t m_bSearchWhenClipEnds[0x1]; // 0xE8 bool
    std::uint8_t m_bSearchWhenGoalChanges[0x3]; // 0xE9 bool
    std::uint8_t m_blendCurve[0x8]; // 0xEC CBlendCurve
    std::uint8_t m_flSampleRate[0x4]; // 0xF4 float32
    std::uint8_t m_flBlendTime[0x4]; // 0xF8 float32
    std::uint8_t m_bLockClipWhenWaning[0x4]; // 0xFC bool
    std::uint8_t m_flSelectionThreshold[0x4]; // 0x100 float32
    std::uint8_t m_flReselectionTimeWindow[0x4]; // 0x104 float32
    std::uint8_t m_bEnableRotationCorrection[0x1]; // 0x108 bool
    std::uint8_t m_bGoalAssist[0x3]; // 0x109 bool
    std::uint8_t m_flGoalAssistDistance[0x4]; // 0x10C float32
    std::uint8_t m_flGoalAssistTolerance[0x8]; // 0x110 float32
    std::uint8_t m_distanceScale_Damping[0x18]; // 0x118 CAnimInputDamping
    std::uint8_t m_flDistanceScale_OuterRadius[0x4]; // 0x130 float32
    std::uint8_t m_flDistanceScale_InnerRadius[0x4]; // 0x134 float32
    std::uint8_t m_flDistanceScale_MaxScale[0x4]; // 0x138 float32
    std::uint8_t m_flDistanceScale_MinScale[0x4]; // 0x13C float32
    std::uint8_t m_bEnableDistanceScaling[0x8]; // 0x140 bool
};

struct CNmReferencePoseNode__CDefinition {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct CSeqS1SeqDesc {
    static constexpr std::size_t size = 0x120;
    std::uint8_t m_sName[0x10]; // 0x0 CBufferString
    std::uint8_t m_flags[0x10]; // 0x10 CSeqSeqDescFlag
    std::uint8_t m_fetch[0x70]; // 0x20 CSeqMultiFetch
    std::uint8_t m_nLocalWeightlist[0x8]; // 0x90 int32
    std::uint8_t m_autoLayerArray[0x18]; // 0x98 CUtlVector<CSeqAutoLayer>
    std::uint8_t m_IKLockArray[0x18]; // 0xB0 CUtlVector<CSeqIKLock>
    std::uint8_t m_transition[0x8]; // 0xC8 CSeqTransition
    std::uint8_t m_SequenceKeys[0x10]; // 0xD0 KeyValues3
    std::uint8_t m_LegacyKeyValueText[0x10]; // 0xE0 CBufferString
    std::uint8_t m_activityArray[0x18]; // 0xF0 CUtlVector<CAnimActivity>
    std::uint8_t m_footMotion[0x18]; // 0x108 CUtlVector<CFootMotion>
};

struct CFlexController {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_szName[0x8]; // 0x0 CUtlString
    std::uint8_t m_szType[0x8]; // 0x8 CUtlString
    std::uint8_t min[0x4]; // 0x10 float32
    std::uint8_t max[0x4]; // 0x14 float32
};

struct SkeletonDemoDb_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t m_AnimCaptures[0x18]; // 0x0 CUtlVector<SkeletonAnimCapture_t*>
    std::uint8_t m_CameraTrack[0x18]; // 0x18 CUtlVector<SkeletonAnimCapture_t::Camera_t>
    std::uint8_t m_flRecordingTime[0x8]; // 0x30 float32
};

struct CNmFloatRangeComparisonNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_range[0x8]; // 0x10 Range_t
    std::uint8_t m_nInputValueNodeIdx[0x2]; // 0x18 int16
    std::uint8_t m_bIsInclusiveCheck[0x6]; // 0x1A bool
};

struct CMotionNodeSequence {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_tags[0x18]; // 0x28 CUtlVector<TagSpan_t>
    std::uint8_t m_hSequence[0x4]; // 0x40 HSequence
    std::uint8_t m_flPlaybackSpeed[0x4]; // 0x44 float32
};

struct CNmTwoBoneIKNode__CDefinition {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_effectorBoneID[0x8]; // 0x18 CGlobalSymbol
    std::uint8_t m_nEffectorTargetNodeIdx[0x2]; // 0x20 int16
    std::uint8_t m_nEnabledNodeIdx[0x2]; // 0x22 int16
    std::uint8_t m_flBlendTimeSeconds[0x4]; // 0x24 float32
    std::uint8_t m_blendMode[0x1]; // 0x28 NmIKBlendMode_t
    std::uint8_t m_bIsTargetInWorldSpace[0x3]; // 0x29 bool
    std::uint8_t m_flChainRotationWeight[0x4]; // 0x2C float32
};

struct CNmGraphInstance {
    static constexpr std::size_t size = 0x3B0;
    std::uint8_t pad_0[0x3B0]; // 0x0
};

struct CFlexDesc {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_szFacs[0x8]; // 0x0 CUtlString
};

struct CRenderMesh {
    static constexpr std::size_t size = 0x238;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_sceneObjects[0xC0]; // 0x10 CUtlLeanVectorFixedGrowable<CSceneObjectData,1>
    std::uint8_t m_constraints[0x10]; // 0xD0 CUtlLeanVector<CBaseConstraint*>
    std::uint8_t m_skeleton[0x118]; // 0xE0 CRenderSkeleton
    std::uint8_t m_bUseUV2ForCharting[0x1]; // 0x1F8 bool
    std::uint8_t m_bEmbeddedMapMesh[0x27]; // 0x1F9 bool
    std::uint8_t m_meshDeformParams[0x10]; // 0x220 DynamicMeshDeformParams_t
    std::uint8_t m_pGroomData[0x8]; // 0x230 CRenderGroom*
};

struct CAnimSkeleton {
    static constexpr std::size_t size = 0xD0;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_localSpaceTransforms[0x18]; // 0x10 CUtlVector<CTransform>
    std::uint8_t m_modelSpaceTransforms[0x18]; // 0x28 CUtlVector<CTransform>
    std::uint8_t m_boneNames[0x18]; // 0x40 CUtlVector<CUtlString>
    std::uint8_t m_children[0x18]; // 0x58 CUtlVector<CUtlVector<int32>>
    std::uint8_t m_parents[0x18]; // 0x70 CUtlVector<int32>
    std::uint8_t m_feet[0x18]; // 0x88 CUtlVector<CAnimFoot>
    std::uint8_t m_morphNames[0x18]; // 0xA0 CUtlVector<CUtlString>
    std::uint8_t m_lodBoneCounts[0x18]; // 0xB8 CUtlVector<int32>
};

struct PulseRuntimeConstantIndex_t {
    static constexpr std::size_t size = 0x2;
    std::uint8_t m_Value[0x2]; // 0x0 int16
};

struct CFootAdjustmentInstanceData {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0xC]; // 0x0
    std::uint8_t m_flStartTime[0xC]; // 0xC CAnimNetVar<float32>
    std::uint8_t m_flDuration[0x24]; // 0x18 CAnimNetVar<float32>
    std::uint8_t m_flStartHeadingWS[0xC]; // 0x3C float32
};

struct CNmBodyGroupNode__CDefinition {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_nEnabledNodeIdx[0x8]; // 0x18 int16
    std::uint8_t m_event[0x30]; // 0x20 CNmBodyGroupEvent
};

struct CNmTimeControlledClipNode__CDefinition {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nPlayInReverseValueNodeIdx[0x2]; // 0x10 int16
    std::uint8_t m_bSampleRootMotion[0x2]; // 0x12 bool
    std::uint8_t m_nDataSlotIdx[0x2]; // 0x14 int16
    std::uint8_t m_nTimeValueNodeIdx[0x2]; // 0x16 int16
    std::uint8_t m_graphEvents[0x28]; // 0x18 CUtlVectorFixedGrowable<CGlobalSymbol,2>
};

struct VPhysics2ShapeDef_t {
    static constexpr std::size_t size = 0x68;
    std::uint8_t m_spheres[0x10]; // 0x0 CUtlLeanVector<RnSphereDesc_t>
    std::uint8_t m_capsules[0x10]; // 0x10 CUtlLeanVector<RnCapsuleDesc_t>
    std::uint8_t m_hulls[0x10]; // 0x20 CUtlLeanVector<RnHullDesc_t>
    std::uint8_t m_meshes[0x10]; // 0x30 CUtlLeanVector<RnMeshDesc_t>
    std::uint8_t m_compounds[0x10]; // 0x40 CUtlLeanVector<RnCompoundDesc_t>
    std::uint8_t m_CollisionAttributeIndices[0x18]; // 0x50 CUtlVector<uint16>
};

struct CNmFloatCurveNode__CDefinition {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nInputValueNodeIdx[0x8]; // 0x10 int16
    std::uint8_t m_curve[0x40]; // 0x18 CPiecewiseCurve
};

struct CAnimationGraphVisualizerAxis {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t m_xWsTransform[0x20]; // 0x40 CTransform
    std::uint8_t m_flAxisSize[0x10]; // 0x60 float32
};

struct CTwistConstraint {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t m_bInverse[0x10]; // 0x60 bool
    std::uint8_t m_qParentBindRotation[0x10]; // 0x70 Quaternion
    std::uint8_t m_qChildBindRotation[0x10]; // 0x80 Quaternion
};

struct PulseDocNodeID_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_Value[0x4]; // 0x0 int32
};

struct ModelBoneFlexDriverControl_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_nBoneComponent[0x8]; // 0x0 ModelBoneFlexComponent_t
    std::uint8_t m_flexController[0x8]; // 0x8 CUtlString
    std::uint8_t m_flexControllerToken[0x4]; // 0x10 uint32
    std::uint8_t m_flMin[0x4]; // 0x14 float32
    std::uint8_t m_flMax[0x8]; // 0x18 float32
};

struct CParticleCollectionFloatInput {
    static constexpr std::size_t size = 0x178;
    std::uint8_t pad_0[0x178]; // 0x0
};

struct CSeqCmdLayer {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_cmd[0x2]; // 0x0 int16
    std::uint8_t m_nLocalReference[0x2]; // 0x2 int16
    std::uint8_t m_nLocalBonemask[0x2]; // 0x4 int16
    std::uint8_t m_nDstResult[0x2]; // 0x6 int16
    std::uint8_t m_nSrcResult[0x2]; // 0x8 int16
    std::uint8_t m_bSpline[0x2]; // 0xA bool
    std::uint8_t m_flVar1[0x4]; // 0xC float32
    std::uint8_t m_flVar2[0x4]; // 0x10 float32
    std::uint8_t m_nLineNumber[0x4]; // 0x14 int16
};

struct FootPinningPoseOpFixedData_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_footInfo[0x18]; // 0x0 CUtlVector<FootFixedData_t>
    std::uint8_t m_flBlendTime[0x4]; // 0x18 float32
    std::uint8_t m_flLockBreakDistance[0x4]; // 0x1C float32
    std::uint8_t m_flMaxLegTwist[0x4]; // 0x20 float32
    std::uint8_t m_nHipBoneIndex[0x4]; // 0x24 int32
    std::uint8_t m_bApplyLegTwistLimits[0x1]; // 0x28 bool
    std::uint8_t m_bApplyFootRotationLimits[0x7]; // 0x29 bool
};

struct RenderSkeletonBone_t {
    static constexpr std::size_t size = 0x60;
    std::uint8_t m_boneName[0x8]; // 0x0 CUtlString
    std::uint8_t m_parentName[0x8]; // 0x8 CUtlString
    std::uint8_t m_invBindPose[0x30]; // 0x10 matrix3x4_t
    std::uint8_t m_bbox[0x18]; // 0x40 SkeletonBoneBounds_t
    std::uint8_t m_flSphereRadius[0x8]; // 0x58 float32
};

struct CDistanceRemainingMetricEvaluator {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x50]; // 0x0
    std::uint8_t m_flMaxDistance[0x4]; // 0x50 float32
    std::uint8_t m_flMinDistance[0x4]; // 0x54 float32
    std::uint8_t m_flStartGoalFilterDistance[0x4]; // 0x58 float32
    std::uint8_t m_flMaxGoalOvershootScale[0x4]; // 0x5C float32
    std::uint8_t m_bFilterFixedMinDistance[0x1]; // 0x60 bool
    std::uint8_t m_bFilterGoalDistance[0x1]; // 0x61 bool
    std::uint8_t m_bFilterGoalOvershoot[0x6]; // 0x62 bool
};

struct CDirectPlaybackUpdateNode {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x74]; // 0x0
    std::uint8_t m_bFinishEarly[0x1]; // 0x74 bool
    std::uint8_t m_bResetOnFinish[0x3]; // 0x75 bool
    std::uint8_t m_allTags[0x18]; // 0x78 CUtlVector<CDirectPlaybackTagData>
};

struct CNmIDEvent {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_ID[0x8]; // 0x18 CGlobalSymbol
    std::uint8_t m_secondaryID[0x8]; // 0x20 CGlobalSymbol
};

struct CFlexRule {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_nFlex[0x8]; // 0x0 int32
    std::uint8_t m_FlexOps[0x18]; // 0x8 CUtlVector<CFlexOp>
};

struct ScriptInfo_t {
    static constexpr std::size_t size = 0x58;
    std::uint8_t m_code[0x8]; // 0x0 CUtlString
    std::uint8_t m_paramsModified[0x18]; // 0x8 CUtlVector<CAnimParamHandle>
    std::uint8_t m_proxyReadParams[0x18]; // 0x20 CUtlVector<int32>
    std::uint8_t m_proxyWriteParams[0x18]; // 0x38 CUtlVector<int32>
    std::uint8_t m_eScriptType[0x8]; // 0x50 AnimScriptType
};

struct CBoneConstraintRbf {
    static constexpr std::size_t size = 0xC8;
    std::uint8_t pad_0[0x20]; // 0x0
    std::uint8_t m_inputBones[0x18]; // 0x20 CUtlVector<std::pair<CUtlString,uint32>>
    std::uint8_t m_outputBones[0x90]; // 0x38 CUtlVector<std::pair<CUtlString,uint32>>
};

struct CNetworkedCycle {
    static constexpr std::size_t size = 0x34;
    std::uint8_t m_flCycleUnclamped[0x4]; // 0x0 float32
    std::uint8_t m_flPrevCycleUnclamped[0xC]; // 0x4 float32
    std::uint8_t m_flCyclesPerSecond[0xC]; // 0x10 CAnimNetVar<float32>
    std::uint8_t m_flCycleZeroTime[0xC]; // 0x1C CAnimNetVar<float32>
    std::uint8_t m_resetCount[0xC]; // 0x28 CAnimNetVar<uint8>
};

struct CNmSoundEvent {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_relevance[0x8]; // 0x18 CNmEventRelevance_t
    std::uint8_t m_name[0x8]; // 0x20 CUtlString
    std::uint8_t m_position[0x8]; // 0x28 CNmSoundEvent::Position_t
    std::uint8_t m_attachmentName[0x8]; // 0x30 CUtlString
    std::uint8_t m_tags[0x8]; // 0x38 CUtlString
    std::uint8_t m_bContinuePlayingSoundAtDurationEnd[0x4]; // 0x40 bool
    std::uint8_t m_flDurationInterruptionThreshold[0x4]; // 0x44 float32
};

struct CRenderGroom {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t m_hairs[0x18]; // 0x0 CUtlVector<RenderHairStrandInfo_t>
    std::uint8_t m_hairPositionOffsets[0x28]; // 0x18 CUtlVector<uint32>
    std::uint8_t m_hSimParamsMat[0x8]; // 0x40 CStrongHandleCopyable<InfoForResourceTypeIMaterial2>
    std::uint8_t m_strandSegmentCountHist[0x30]; // 0x48 CUtlVector<int32>
    std::uint8_t m_nMaxSegmentsPerHairStrand[0x4]; // 0x78 int32
    std::uint8_t m_nGuideHairCount[0x4]; // 0x7C int32
    std::uint8_t m_nHairCount[0x4]; // 0x80 int32
    std::uint8_t m_nTotalVertexCount[0x4]; // 0x84 int32
    std::uint8_t m_nTotalSegmentCount[0x4]; // 0x88 int32
    std::uint8_t m_nGroomGroupID[0x4]; // 0x8C int32
    std::uint8_t m_nAttachBoneIdx[0x4]; // 0x90 int32
    std::uint8_t m_nAttachMeshIdx[0x4]; // 0x94 int32
    std::uint8_t m_nAttachMeshDrawCallIdx[0x14]; // 0x98 int32
    std::uint8_t m_bEnableSimulation[0x4]; // 0xAC bool
};

struct CNmParameterizedClipSelectorNode__CDefinition {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_optionNodeIndices[0x18]; // 0x10 CUtlLeanVectorFixedGrowable<int16,8>
    std::uint8_t m_optionWeights[0x10]; // 0x28 CUtlLeanVectorFixedGrowable<uint8,8>
    std::uint8_t m_parameterNodeIdx[0x2]; // 0x38 int16
    std::uint8_t m_bIgnoreInvalidOptions[0x1]; // 0x3A bool
    std::uint8_t m_bHasWeightsSet[0x5]; // 0x3B bool
};

struct CTiltTwistConstraint {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t m_nTargetAxis[0x4]; // 0x60 int32
    std::uint8_t m_nSlaveAxis[0x2C]; // 0x64 int32
};

struct CNmSpeedScaleNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x20]; // 0x0
};

struct CVPhysXSurfacePropertiesList {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_surfacePropertiesList[0x18]; // 0x0 CUtlVector<CPhysSurfaceProperties*>
};

struct CNmFloatSpringNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_flStartValue[0x4]; // 0x10 float32
    std::uint8_t m_flHertz[0x4]; // 0x14 float32
    std::uint8_t m_flDampingRatio[0x4]; // 0x18 float32
    std::uint8_t m_nInputValueNodeIdx[0x2]; // 0x1C int16
    std::uint8_t m_bUseStartValue[0x2]; // 0x1E bool
};

struct RenderHairStrandInfo_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_nGuideHairIndices_nSurfaceTriIndex[0x8]; // 0x0 uint32[2]
    std::uint8_t m_vGuideBary_vBaseBary[0x8]; // 0x8 uint16[4]
    std::uint8_t m_vRootOffset_flLengthScale[0x8]; // 0x10 uint16[4]
    std::uint8_t m_nPackedBaseUv[0x4]; // 0x18 uint16[2]
    std::uint8_t m_nPackedSurfaceNormalOs[0x4]; // 0x1C uint32
    std::uint8_t m_nPackedSurfaceTangentOs[0x4]; // 0x20 uint32
    std::uint8_t m_nDataOffset_Segments[0x4]; // 0x24 uint32
};

struct CCycleControlClipUpdateNode {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t m_tags[0x1C]; // 0x60 CUtlVector<TagSpan_t>
    std::uint8_t m_hSequence[0x4]; // 0x7C HSequence
    std::uint8_t m_duration[0x4]; // 0x80 float32
    std::uint8_t m_valueSource[0x4]; // 0x84 AnimValueSource
    std::uint8_t m_paramIndex[0x2]; // 0x88 CAnimParamHandle
    std::uint8_t m_bLockWhenWaning[0x6]; // 0x8A bool
};

struct CNmTargetPointNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nInputValueNodeIdx[0x2]; // 0x10 int16
    std::uint8_t m_bIsWorldSpaceTarget[0x6]; // 0x12 bool
};

struct CNmTargetSelectorNode__CDefinition {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_optionNodeIndices[0x18]; // 0x10 CUtlLeanVectorFixedGrowable<int16,8>
    std::uint8_t m_flOrientationScoreWeight[0x4]; // 0x28 float32
    std::uint8_t m_flPositionScoreWeight[0x4]; // 0x2C float32
    std::uint8_t m_parameterNodeIdx[0x2]; // 0x30 int16
    std::uint8_t m_bIgnoreInvalidOptions[0x1]; // 0x32 bool
    std::uint8_t m_bIsWorldSpaceTarget[0x5]; // 0x33 bool
    std::uint8_t m_alignmentBoneID[0x8]; // 0x38 CGlobalSymbol
};

struct CPulse_RegisterInfo {
    static constexpr std::size_t size = 0x60;
    std::uint8_t m_nReg[0x8]; // 0x0 PulseRuntimeRegisterIndex_t
    std::uint8_t m_Type[0x18]; // 0x8 CPulseValueFullType
    std::uint8_t m_OriginName[0x38]; // 0x20 CKV3MemberNameWithStorage
    std::uint8_t m_nWrittenByInstruction[0x4]; // 0x58 int32
    std::uint8_t m_nLastReadByInstruction[0x4]; // 0x5C int32
};

struct CNmFloatValueNode__CDefinition {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct CWarpSectionAnimTagBase {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x50]; // 0x0
};

struct CNmGraphVariationUserData {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct CStaticPoseCache {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_poses[0x18]; // 0x10 CUtlVector<CCachedPose>
    std::uint8_t m_nBoneCount[0x4]; // 0x28 int32
    std::uint8_t m_nMorphCount[0x4]; // 0x2C int32
};

struct LookAtOpFixedSettings_t {
    static constexpr std::size_t size = 0xD0;
    std::uint8_t m_attachment[0x80]; // 0x0 CAnimAttachment
    std::uint8_t m_damping[0x18]; // 0x80 CAnimInputDamping
    std::uint8_t m_bones[0x18]; // 0x98 CUtlVector<LookAtBone_t>
    std::uint8_t m_flYawLimit[0x4]; // 0xB0 float32
    std::uint8_t m_flPitchLimit[0x4]; // 0xB4 float32
    std::uint8_t m_flHysteresisInnerAngle[0x4]; // 0xB8 float32
    std::uint8_t m_flHysteresisOuterAngle[0x4]; // 0xBC float32
    std::uint8_t m_bRotateYawForward[0x1]; // 0xC0 bool
    std::uint8_t m_bMaintainUpDirection[0x1]; // 0xC1 bool
    std::uint8_t m_bTargetIsPosition[0x1]; // 0xC2 bool
    std::uint8_t m_bUseHysteresis[0xD]; // 0xC3 bool
};

struct CRootMotion {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_deltaTransform[0x10]; // 0x0 CMotionTransform
    std::uint8_t m_vVelocityMS[0xC]; // 0x10 Vector
    std::uint8_t m_vUpOverride[0xC]; // 0x1C Vector
};

struct CAnimGraphSettingsManager {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_settingsGroups[0x18]; // 0x18 CUtlVector<CSmartPtr<CAnimGraphSettingsGroup>>
};

struct CAnimGraphModelBinding {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_modelName[0x8]; // 0x8 CUtlString
    std::uint8_t m_pSharedData[0x18]; // 0x10 CSmartPtr<CAnimUpdateSharedData>
};

struct CBoneConstraintPoseSpaceBone {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t m_inputList[0x28]; // 0x60 CUtlVector<CBoneConstraintPoseSpaceBone::Input_t>
};

struct CNmTwoBoneIKTask {
    static constexpr std::size_t size = 0xF0;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t m_nEffectorBoneIdx[0x4]; // 0x70 int32
    std::uint8_t m_nEffectorTargetBoneIdx[0xC]; // 0x74 int32
    std::uint8_t m_targetTransform[0x70]; // 0x80 CTransform
};

struct MotionBlendItem {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_pChild[0x8]; // 0x0 CSmartPtr<CMotionNode>
    std::uint8_t m_flKeyValue[0x8]; // 0x8 float32
};

struct CBoneConstraintPoseSpaceMorph {
    static constexpr std::size_t size = 0xA0;
    std::uint8_t pad_0[0x20]; // 0x0
    std::uint8_t m_sBoneName[0x8]; // 0x20 CUtlString
    std::uint8_t m_sAttachmentName[0x8]; // 0x28 CUtlString
    std::uint8_t m_outputMorph[0x18]; // 0x30 CUtlVector<CUtlString>
    std::uint8_t m_inputList[0x18]; // 0x48 CUtlVector<CBoneConstraintPoseSpaceMorph::Input_t>
    std::uint8_t m_bClamp[0x40]; // 0x60 bool
};

struct CFloatAnimParameter {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t m_fDefaultValue[0x4]; // 0x80 float32
    std::uint8_t m_fMinValue[0x4]; // 0x84 float32
    std::uint8_t m_fMaxValue[0x4]; // 0x88 float32
    std::uint8_t m_bInterpolate[0x4]; // 0x8C bool
};

struct CNmContactAudioActionVData {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct CStateActionUpdater {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_pAction[0x8]; // 0x0 CSmartPtr<CAnimActionUpdater>
    std::uint8_t m_eBehavior[0x8]; // 0x8 StateActionBehavior
};

struct CPlayerInputAnimMotorUpdater {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x20]; // 0x0
    std::uint8_t m_sampleTimes[0x1C]; // 0x20 CUtlVector<float32>
    std::uint8_t m_flSpringConstant[0x4]; // 0x3C float32
    std::uint8_t m_flAnticipationDistance[0x4]; // 0x40 float32
    std::uint8_t m_hAnticipationPosParam[0x2]; // 0x44 CAnimParamHandle
    std::uint8_t m_hAnticipationHeadingParam[0x2]; // 0x46 CAnimParamHandle
    std::uint8_t m_bUseAcceleration[0x8]; // 0x48 bool
};

struct CRenderSkeleton {
    static constexpr std::size_t size = 0x50;
    std::uint8_t m_bones[0x30]; // 0x0 CUtlVector<RenderSkeletonBone_t>
    std::uint8_t m_boneParents[0x18]; // 0x30 CUtlVector<int32>
    std::uint8_t m_nBoneWeightCount[0x8]; // 0x48 int32
};

struct CSeqIKLock {
    static constexpr std::size_t size = 0xC;
    std::uint8_t m_flPosWeight[0x4]; // 0x0 float32
    std::uint8_t m_flAngleWeight[0x4]; // 0x4 float32
    std::uint8_t m_nLocalBone[0x2]; // 0x8 int16
    std::uint8_t m_bBonesOrientedAlongPositiveX[0x2]; // 0xA bool
};

struct CAnimParamHandleMap {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_list[0x20]; // 0x0 CUtlHashtable<uint16,int16>
};

struct CNmFloatClampNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nInputValueNodeIdx[0x4]; // 0x10 int16
    std::uint8_t m_clampRange[0xC]; // 0x14 Range_t
};

struct PulseRuntimeCellIndex_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_Value[0x4]; // 0x0 int32
};

struct CNmExternalPoseNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_bShouldSampleRootMotion[0x8]; // 0x10 bool
};

struct CAnimDesc {
    static constexpr std::size_t size = 0x1D0;
    std::uint8_t m_name[0x10]; // 0x0 CBufferString
    std::uint8_t m_flags[0x8]; // 0x10 CAnimDesc_Flag
    std::uint8_t fps[0x8]; // 0x18 float32
    std::uint8_t m_Data[0xD8]; // 0x20 CAnimEncodedFrames
    std::uint8_t m_movementArray[0x18]; // 0xF8 CUtlVector<CAnimMovement>
    std::uint8_t m_xInitialOffset[0x20]; // 0x110 CTransform
    std::uint8_t m_eventArray[0x18]; // 0x130 CUtlVector<CAnimEventDefinition>
    std::uint8_t m_activityArray[0x18]; // 0x148 CUtlVector<CAnimActivity>
    std::uint8_t m_hierarchyArray[0x18]; // 0x160 CUtlVector<CAnimLocalHierarchy>
    std::uint8_t framestalltime[0x4]; // 0x178 float32
    std::uint8_t m_vecRootMin[0xC]; // 0x17C Vector
    std::uint8_t m_vecRootMax[0x10]; // 0x188 Vector
    std::uint8_t m_vecBoneWorldMin[0x18]; // 0x198 CUtlVector<Vector>
    std::uint8_t m_vecBoneWorldMax[0x18]; // 0x1B0 CUtlVector<Vector>
    std::uint8_t m_sequenceParams[0x8]; // 0x1C8 CAnimSequenceParams
};

struct CNmRootMotionOverrideNode__CDefinition {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_desiredMovingVelocityNodeIdx[0x2]; // 0x18 int16
    std::uint8_t m_desiredFacingDirectionNodeIdx[0x2]; // 0x1A int16
    std::uint8_t m_linearVelocityLimitNodeIdx[0x2]; // 0x1C int16
    std::uint8_t m_angularVelocityLimitNodeIdx[0x2]; // 0x1E int16
    std::uint8_t m_enabledNodeIdx[0x4]; // 0x20 int16
    std::uint8_t m_maxLinearVelocity[0x4]; // 0x24 float32
    std::uint8_t m_maxAngularVelocityRadians[0x4]; // 0x28 float32
    std::uint8_t m_overrideFlags[0x4]; // 0x2C CNmBitFlags
};

struct CNmTargetWarpNode__CDefinition {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nClipReferenceNodeIdx[0x2]; // 0x10 int16
    std::uint8_t m_nTargetValueNodeIdx[0x2]; // 0x12 int16
    std::uint8_t m_samplingMode[0x1]; // 0x14 CNmRootMotionData::SamplingMode_t
    std::uint8_t m_targetUpdateRule[0x1]; // 0x15 CNmTargetWarpNode::TargetUpdateRule_t
    std::uint8_t m_bAlignWithTargetAtLastWarpEvent[0x2]; // 0x16 bool
    std::uint8_t m_flSamplingPositionErrorThresholdSq[0x4]; // 0x18 float32
    std::uint8_t m_flMaxTangentLength[0x4]; // 0x1C float32
    std::uint8_t m_flLerpFallbackDistanceThreshold[0x4]; // 0x20 float32
    std::uint8_t m_flTargetUpdateDistanceThreshold[0x4]; // 0x24 float32
    std::uint8_t m_flTargetUpdateAngleThresholdRadians[0x8]; // 0x28 float32
    std::uint8_t m_alignmentBoneID[0x8]; // 0x30 CGlobalSymbol
};

struct CPhysSurfacePropertiesPhysics {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_friction[0x4]; // 0x0 float32
    std::uint8_t m_elasticity[0x4]; // 0x4 float32
    std::uint8_t m_density[0x4]; // 0x8 float32
    std::uint8_t m_thickness[0x4]; // 0xC float32
    std::uint8_t m_softContactFrequency[0x4]; // 0x10 float32
    std::uint8_t m_softContactDampingRatio[0x4]; // 0x14 float32
};

struct CAnimationGraphVisualizerPie {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t m_vWsCenter[0x10]; // 0x40 VectorAligned
    std::uint8_t m_vWsStart[0x10]; // 0x50 VectorAligned
    std::uint8_t m_vWsEnd[0x10]; // 0x60 VectorAligned
    std::uint8_t m_Color[0x10]; // 0x70 Color
};

struct NmFloatCurveCompressionSettings_t {
    static constexpr std::size_t size = 0xC;
    std::uint8_t m_range[0x8]; // 0x0 NmCompressionSettings_t::QuantizationRange_t
    std::uint8_t m_bIsStatic[0x4]; // 0x8 bool
};

struct CBoneConstraintDotToMorph {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x20]; // 0x0
    std::uint8_t m_sBoneName[0x8]; // 0x20 CUtlString
    std::uint8_t m_sTargetBoneName[0x8]; // 0x28 CUtlString
    std::uint8_t m_sMorphChannelName[0x8]; // 0x30 CUtlString
    std::uint8_t m_flRemap[0x20]; // 0x38 float32[4]
};

struct CPointConstraint {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x60]; // 0x0
};

struct CCurrentRotationVelocityMetricEvaluator {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x50]; // 0x0
};

struct TraceSettings_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_flTraceHeight[0x4]; // 0x0 float32
    std::uint8_t m_flTraceRadius[0x4]; // 0x4 float32
};

struct ParamSpanSample_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_value[0x14]; // 0x0 CAnimVariant
    std::uint8_t m_flCycle[0x4]; // 0x14 float32
};

struct CNmFollowBoneTask {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x90]; // 0x0
};

struct VPhysXConstraintParams_t {
    static constexpr std::size_t size = 0xF8;
    std::uint8_t m_nType[0x1]; // 0x0 int8
    std::uint8_t m_nTranslateMotion[0x1]; // 0x1 int8
    std::uint8_t m_nRotateMotion[0x1]; // 0x2 int8
    std::uint8_t m_nFlags[0x1]; // 0x3 int8
    std::uint8_t m_anchor[0x18]; // 0x4 Vector[2]
    std::uint8_t m_axes[0x20]; // 0x1C QuaternionStorage[2]
    std::uint8_t m_maxForce[0x4]; // 0x3C float32
    std::uint8_t m_maxTorque[0x4]; // 0x40 float32
    std::uint8_t m_linearLimitValue[0x4]; // 0x44 float32
    std::uint8_t m_linearLimitRestitution[0x4]; // 0x48 float32
    std::uint8_t m_linearLimitSpring[0x4]; // 0x4C float32
    std::uint8_t m_linearLimitDamping[0x4]; // 0x50 float32
    std::uint8_t m_twistLowLimitValue[0x4]; // 0x54 float32
    std::uint8_t m_twistLowLimitRestitution[0x4]; // 0x58 float32
    std::uint8_t m_twistLowLimitSpring[0x4]; // 0x5C float32
    std::uint8_t m_twistLowLimitDamping[0x4]; // 0x60 float32
    std::uint8_t m_twistHighLimitValue[0x4]; // 0x64 float32
    std::uint8_t m_twistHighLimitRestitution[0x4]; // 0x68 float32
    std::uint8_t m_twistHighLimitSpring[0x4]; // 0x6C float32
    std::uint8_t m_twistHighLimitDamping[0x4]; // 0x70 float32
    std::uint8_t m_swing1LimitValue[0x4]; // 0x74 float32
    std::uint8_t m_swing1LimitRestitution[0x4]; // 0x78 float32
    std::uint8_t m_swing1LimitSpring[0x4]; // 0x7C float32
    std::uint8_t m_swing1LimitDamping[0x4]; // 0x80 float32
    std::uint8_t m_swing2LimitValue[0x4]; // 0x84 float32
    std::uint8_t m_swing2LimitRestitution[0x4]; // 0x88 float32
    std::uint8_t m_swing2LimitSpring[0x4]; // 0x8C float32
    std::uint8_t m_swing2LimitDamping[0x4]; // 0x90 float32
    std::uint8_t m_goalPosition[0xC]; // 0x94 Vector
    std::uint8_t m_goalOrientation[0x10]; // 0xA0 QuaternionStorage
    std::uint8_t m_goalAngularVelocity[0xC]; // 0xB0 Vector
    std::uint8_t m_driveSpringX[0x4]; // 0xBC float32
    std::uint8_t m_driveSpringY[0x4]; // 0xC0 float32
    std::uint8_t m_driveSpringZ[0x4]; // 0xC4 float32
    std::uint8_t m_driveDampingX[0x4]; // 0xC8 float32
    std::uint8_t m_driveDampingY[0x4]; // 0xCC float32
    std::uint8_t m_driveDampingZ[0x4]; // 0xD0 float32
    std::uint8_t m_driveSpringTwist[0x4]; // 0xD4 float32
    std::uint8_t m_driveSpringSwing[0x4]; // 0xD8 float32
    std::uint8_t m_driveSpringSlerp[0x4]; // 0xDC float32
    std::uint8_t m_driveDampingTwist[0x4]; // 0xE0 float32
    std::uint8_t m_driveDampingSwing[0x4]; // 0xE4 float32
    std::uint8_t m_driveDampingSlerp[0x4]; // 0xE8 float32
    std::uint8_t m_solverIterationCount[0x4]; // 0xEC int32
    std::uint8_t m_projectionLinearTolerance[0x4]; // 0xF0 float32
    std::uint8_t m_projectionAngularTolerance[0x4]; // 0xF4 float32
};

struct CNmFloatComparisonNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nInputValueNodeIdx[0x2]; // 0x10 int16
    std::uint8_t m_nComparandValueNodeIdx[0x2]; // 0x12 int16
    std::uint8_t m_comparison[0x4]; // 0x14 CNmFloatComparisonNode::Comparison_t
    std::uint8_t m_flEpsilon[0x4]; // 0x18 float32
    std::uint8_t m_flComparisonValue[0x4]; // 0x1C float32
};

struct CStateUpdateData {
    static constexpr std::size_t size = 0x48;
    std::uint8_t m_name[0x8]; // 0x0 CUtlString
    std::uint8_t m_hScript[0x8]; // 0x8 AnimScriptHandle
    std::uint8_t m_transitionIndices[0x18]; // 0x10 CUtlVector<int32>
    std::uint8_t m_actions[0x18]; // 0x28 CUtlVector<CStateActionUpdater>
    std::uint8_t m_stateID[0x8]; // 0x40 AnimStateID
};

struct CTurnHelperInstanceData {
    static constexpr std::size_t size = 0xC;
    std::uint8_t m_turnAmount[0x4]; // 0x0 float32
    std::uint8_t m_turnStartTime[0x4]; // 0x4 float32
    std::uint8_t m_duration[0x4]; // 0x8 float32
};

struct CNmTargetValueNode__CDefinition {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct COrientConstraint {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x60]; // 0x0
};

struct CCycleClipInstanceData {
    static constexpr std::size_t size = 0x1C;
    std::uint8_t m_flCycle[0xC]; // 0x0 CAnimNetVar<float32>
    std::uint8_t m_flPrevCycle[0x10]; // 0xC CAnimNetVar<float32>
};

struct PulseRuntimeTempVarBankIndex_t {
    static constexpr std::size_t size = 0x2;
    std::uint8_t m_Value[0x2]; // 0x0 int16
};

struct CMoverUpdateNode {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t m_damping[0x18]; // 0x78 CAnimInputDamping
    std::uint8_t m_facingTarget[0x4]; // 0x90 AnimValueSource
    std::uint8_t m_hMoveVecParam[0x2]; // 0x94 CAnimParamHandle
    std::uint8_t m_hMoveHeadingParam[0x2]; // 0x96 CAnimParamHandle
    std::uint8_t m_hTurnToFaceParam[0x4]; // 0x98 CAnimParamHandle
    std::uint8_t m_flTurnToFaceOffset[0x4]; // 0x9C float32
    std::uint8_t m_flTurnToFaceLimit[0x4]; // 0xA0 float32
    std::uint8_t m_bAdditive[0x1]; // 0xA4 bool
    std::uint8_t m_bApplyMovement[0x1]; // 0xA5 bool
    std::uint8_t m_bOrientMovement[0x1]; // 0xA6 bool
    std::uint8_t m_bApplyRotation[0x1]; // 0xA7 bool
    std::uint8_t m_bLimitOnly[0x8]; // 0xA8 bool
};

struct CNmLayerBlendNode__CDefinition {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nBaseNodeIdx[0x2]; // 0x10 int16
    std::uint8_t m_bOnlySampleBaseRootMotion[0x6]; // 0x12 bool
    std::uint8_t m_layerDefinition[0x30]; // 0x18 CUtlLeanVectorFixedGrowable<CNmLayerBlendNode::LayerDefinition_t,3>
};

struct CNmFootIKNode__CDefinition {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_leftEffectorBoneID[0x8]; // 0x18 CGlobalSymbol
    std::uint8_t m_rightEffectorBoneID[0x8]; // 0x20 CGlobalSymbol
    std::uint8_t m_nLeftTargetNodeIdx[0x2]; // 0x28 int16
    std::uint8_t m_nRightTargetNodeIdx[0x2]; // 0x2A int16
    std::uint8_t m_nEnabledNodeIdx[0x4]; // 0x2C int16
    std::uint8_t m_flBlendTimeSeconds[0x4]; // 0x30 float32
    std::uint8_t m_blendMode[0x1]; // 0x34 NmIKBlendMode_t
    std::uint8_t m_bIsTargetInWorldSpace[0x3]; // 0x35 bool
};

struct CAnimMotorUpdaterBase {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_name[0x8]; // 0x10 CUtlString
    std::uint8_t m_bDefault[0x8]; // 0x18 bool
};

struct JiggleBoneSettingsList_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_boneSettings[0x18]; // 0x0 CUtlVector<JiggleBoneSettings_t>
};

struct CSubtractUpdateNode {
    static constexpr std::size_t size = 0xA0;
    std::uint8_t pad_0[0x94]; // 0x0
    std::uint8_t m_footMotionTiming[0x4]; // 0x94 BinaryNodeChildOption
    std::uint8_t m_bApplyToFootMotion[0x1]; // 0x98 bool
    std::uint8_t m_bApplyChannelsSeparately[0x1]; // 0x99 bool
    std::uint8_t m_bUseModelSpace[0x6]; // 0x9A bool
};

struct PulseGraphInstanceID_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_Value[0x4]; // 0x0 uint32
};

struct CNmFloatRemapNode__CDefinition {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nInputValueNodeIdx[0x4]; // 0x10 int16
    std::uint8_t m_inputRange[0x8]; // 0x14 CNmFloatRemapNode::RemapRange_t
    std::uint8_t m_outputRange[0xC]; // 0x1C CNmFloatRemapNode::RemapRange_t
};

struct CPoseHandle {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_nIndex[0x2]; // 0x0 uint16
    std::uint8_t m_eType[0x2]; // 0x2 PoseType_t
};

struct CNmFootstepEventIDNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nSourceStateNodeIdx[0x4]; // 0x10 int16
    std::uint8_t m_eventConditionRules[0x4]; // 0x14 CNmBitFlags
};

struct CSolveIKChainUpdateNode {
    static constexpr std::size_t size = 0xA8;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t m_targetHandles[0x18]; // 0x70 CUtlVector<CSolveIKTargetHandle_t>
    std::uint8_t m_opFixedData[0x20]; // 0x88 SolveIKChainPoseOpFixedSettings_t
};

struct CNmOrNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_conditionNodeIndices[0x10]; // 0x10 CUtlLeanVectorFixedGrowable<int16,4>
};

struct CSeqCmdSeqDesc {
    static constexpr std::size_t size = 0x90;
    std::uint8_t m_sName[0x10]; // 0x0 CBufferString
    std::uint8_t m_flags[0xC]; // 0x10 CSeqSeqDescFlag
    std::uint8_t m_transition[0x8]; // 0x1C CSeqTransition
    std::uint8_t m_nFrameRangeSequence[0x2]; // 0x24 int16
    std::uint8_t m_nFrameCount[0x2]; // 0x26 int16
    std::uint8_t m_flFPS[0x4]; // 0x28 float32
    std::uint8_t m_nSubCycles[0x2]; // 0x2C int16
    std::uint8_t m_numLocalResults[0x2]; // 0x2E int16
    std::uint8_t m_cmdLayerArray[0x18]; // 0x30 CUtlVector<CSeqCmdLayer>
    std::uint8_t m_eventArray[0x18]; // 0x48 CUtlVector<CAnimEventDefinition>
    std::uint8_t m_activityArray[0x18]; // 0x60 CUtlVector<CAnimActivity>
    std::uint8_t m_poseSettingArray[0x18]; // 0x78 CUtlVector<CSeqPoseSetting>
};

struct CBoneMaskUpdateNode {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t pad_0[0x94]; // 0x0
    std::uint8_t m_nWeightListIndex[0x4]; // 0x94 int32
    std::uint8_t m_flRootMotionBlend[0x4]; // 0x98 float32
    std::uint8_t m_blendSpace[0x4]; // 0x9C BoneMaskBlendSpace
    std::uint8_t m_footMotionTiming[0x4]; // 0xA0 BinaryNodeChildOption
    std::uint8_t m_bUseBlendScale[0x4]; // 0xA4 bool
    std::uint8_t m_blendValueSource[0x4]; // 0xA8 AnimValueSource
    std::uint8_t m_hBlendParameter[0x4]; // 0xAC CAnimParamHandle
};

struct CLeafUpdateNode {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x58]; // 0x0
};

struct CPulse_Constant {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_Type[0x18]; // 0x0 CPulseValueFullType
    std::uint8_t m_Value[0x18]; // 0x18 KeyValues3
};

struct CParticleFloatInput {
    static constexpr std::size_t size = 0x178;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nType[0x4]; // 0x10 ParticleFloatType_t
    std::uint8_t m_nMapType[0x4]; // 0x14 ParticleFloatMapType_t
    std::uint8_t m_flLiteralValue[0x8]; // 0x18 float32
    std::uint8_t m_NamedValue[0x40]; // 0x20 CParticleNamedValueRef
    std::uint8_t m_nControlPoint[0x4]; // 0x60 int32
    std::uint8_t m_nScalarAttribute[0x4]; // 0x64 ParticleAttributeIndex_t
    std::uint8_t m_nVectorAttribute[0x4]; // 0x68 ParticleAttributeIndex_t
    std::uint8_t m_nVectorComponent[0x4]; // 0x6C int32
    std::uint8_t m_bReverseOrder[0x4]; // 0x70 bool
    std::uint8_t m_flRandomMin[0x4]; // 0x74 float32
    std::uint8_t m_flRandomMax[0x4]; // 0x78 float32
    std::uint8_t m_bHasRandomSignFlip[0x4]; // 0x7C bool
    std::uint8_t m_nRandomSeed[0x4]; // 0x80 int32
    std::uint8_t m_nRandomMode[0xC]; // 0x84 ParticleFloatRandomMode_t
    std::uint8_t m_strSnapshotSubset[0x8]; // 0x90 CUtlString
    std::uint8_t m_flLOD0[0x4]; // 0x98 float32
    std::uint8_t m_flLOD1[0x4]; // 0x9C float32
    std::uint8_t m_flLOD2[0x4]; // 0xA0 float32
    std::uint8_t m_flLOD3[0x4]; // 0xA4 float32
    std::uint8_t m_nNoiseInputVectorAttribute[0x4]; // 0xA8 ParticleAttributeIndex_t
    std::uint8_t m_flNoiseOutputMin[0x4]; // 0xAC float32
    std::uint8_t m_flNoiseOutputMax[0x4]; // 0xB0 float32
    std::uint8_t m_flNoiseScale[0x4]; // 0xB4 float32
    std::uint8_t m_vecNoiseOffsetRate[0xC]; // 0xB8 Vector
    std::uint8_t m_flNoiseOffset[0x4]; // 0xC4 float32
    std::uint8_t m_nNoiseOctaves[0x4]; // 0xC8 int32
    std::uint8_t m_nNoiseTurbulence[0x4]; // 0xCC PFNoiseTurbulence_t
    std::uint8_t m_nNoiseType[0x4]; // 0xD0 PFNoiseType_t
    std::uint8_t m_nNoiseModifier[0x4]; // 0xD4 PFNoiseModifier_t
    std::uint8_t m_flNoiseTurbulenceScale[0x4]; // 0xD8 float32
    std::uint8_t m_flNoiseTurbulenceMix[0x4]; // 0xDC float32
    std::uint8_t m_flNoiseImgPreviewScale[0x4]; // 0xE0 float32
    std::uint8_t m_bNoiseImgPreviewLive[0xC]; // 0xE4 bool
    std::uint8_t m_flNoCameraFallback[0x4]; // 0xF0 float32
    std::uint8_t m_bUseBoundsCenter[0x4]; // 0xF4 bool
    std::uint8_t m_nInputMode[0x4]; // 0xF8 ParticleFloatInputMode_t
    std::uint8_t m_flMultFactor[0x4]; // 0xFC float32
    std::uint8_t m_flInput0[0x4]; // 0x100 float32
    std::uint8_t m_flInput1[0x4]; // 0x104 float32
    std::uint8_t m_flOutput0[0x4]; // 0x108 float32
    std::uint8_t m_flOutput1[0x4]; // 0x10C float32
    std::uint8_t m_flNotchedRangeMin[0x4]; // 0x110 float32
    std::uint8_t m_flNotchedRangeMax[0x4]; // 0x114 float32
    std::uint8_t m_flNotchedOutputOutside[0x4]; // 0x118 float32
    std::uint8_t m_flNotchedOutputInside[0x4]; // 0x11C float32
    std::uint8_t m_nRoundType[0x4]; // 0x120 ParticleFloatRoundType_t
    std::uint8_t m_nBiasType[0x4]; // 0x124 ParticleFloatBiasType_t
    std::uint8_t m_flBiasParameter[0x8]; // 0x128 float32
    std::uint8_t m_Curve[0x40]; // 0x130 CPiecewiseCurve
    std::uint8_t m_flCompareValue[0x8]; // 0x170 float32
};

struct SolveIKChainPoseOpFixedSettings_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_ChainsToSolveData[0x18]; // 0x0 CUtlVector<ChainToSolveData_t>
};

struct CNmEntityAttributeFloatEvent {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x38]; // 0x0
    std::uint8_t m_FloatValue[0x40]; // 0x38 CPiecewiseCurve
};

struct CNmIDSelectorNode__CDefinition {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_conditionNodeIndices[0x18]; // 0x10 CUtlLeanVectorFixedGrowable<int16,5>
    std::uint8_t m_values[0x30]; // 0x28 CUtlLeanVectorFixedGrowable<CGlobalSymbol,5>
    std::uint8_t m_defaultValue[0x8]; // 0x58 CGlobalSymbol
};

struct TwoBoneIKSettings_t {
    static constexpr std::size_t size = 0x160;
    std::uint8_t m_endEffectorType[0x10]; // 0x0 IkEndEffectorType
    std::uint8_t m_endEffectorAttachment[0x80]; // 0x10 CAnimAttachment
    std::uint8_t m_targetType[0x10]; // 0x90 IkTargetType
    std::uint8_t m_targetAttachment[0x80]; // 0xA0 CAnimAttachment
    std::uint8_t m_targetBoneIndex[0x4]; // 0x120 int32
    std::uint8_t m_hPositionParam[0x2]; // 0x124 CAnimParamHandle
    std::uint8_t m_hRotationParam[0x2]; // 0x126 CAnimParamHandle
    std::uint8_t m_bAlwaysUseFallbackHinge[0x8]; // 0x128 bool
    std::uint8_t m_vLsFallbackHingeAxis[0x10]; // 0x130 VectorAligned
    std::uint8_t m_nFixedBoneIndex[0x4]; // 0x140 int32
    std::uint8_t m_nMiddleBoneIndex[0x4]; // 0x144 int32
    std::uint8_t m_nEndBoneIndex[0x4]; // 0x148 int32
    std::uint8_t m_bMatchTargetOrientation[0x1]; // 0x14C bool
    std::uint8_t m_bConstrainTwist[0x3]; // 0x14D bool
    std::uint8_t m_flMaxTwist[0x10]; // 0x150 float32
};

struct CNmCachedPoseWriteTask {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x80]; // 0x0
};

struct CAnimUpdateSharedData {
    static constexpr std::size_t size = 0x100;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nodes[0x18]; // 0x10 CUtlVector<CSmartPtr<CAnimUpdateNodeBase>>
    std::uint8_t m_nodeIndexMap[0x20]; // 0x28 CUtlHashtable<CAnimNodePath,int32>
    std::uint8_t m_components[0x18]; // 0x48 CUtlVector<CSmartPtr<CAnimComponentUpdater>>
    std::uint8_t m_pParamListUpdater[0x8]; // 0x60 CSmartPtr<CAnimParameterManagerUpdater>
    std::uint8_t m_pTagManagerUpdater[0x8]; // 0x68 CSmartPtr<CAnimTagManagerUpdater>
    std::uint8_t m_scriptManager[0x8]; // 0x70 CSmartPtr<CAnimScriptManager>
    std::uint8_t m_settings[0x30]; // 0x78 CAnimGraphSettingsManager
    std::uint8_t m_pStaticPoseCache[0x8]; // 0xA8 CSmartPtr<CStaticPoseCacheBuilder>
    std::uint8_t m_pSkeleton[0x8]; // 0xB0 CSmartPtr<CAnimSkeleton>
    std::uint8_t m_rootNodePath[0x48]; // 0xB8 CAnimNodePath
};

struct CAnimAttachment {
    static constexpr std::size_t size = 0x80;
    std::uint8_t m_influenceRotations[0x30]; // 0x0 Quaternion[3]
    std::uint8_t m_influenceOffsets[0x30]; // 0x30 VectorAligned[3]
    std::uint8_t m_influenceIndices[0xC]; // 0x60 int32[3]
    std::uint8_t m_influenceWeights[0xC]; // 0x6C float32[3]
    std::uint8_t m_numInfluences[0x8]; // 0x78 uint8
};

struct CFootTrajectories {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_trajectories[0x18]; // 0x0 CUtlVector<CFootTrajectory>
};

struct CNmIDComparisonNode__CDefinition {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nInputValueNodeIdx[0x2]; // 0x10 int16
    std::uint8_t m_comparison[0x6]; // 0x12 CNmIDComparisonNode::Comparison_t
    std::uint8_t m_comparisionIDs[0x28]; // 0x18 CUtlLeanVectorFixedGrowable<CGlobalSymbol,4>
};

struct PairedSequence_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_sRole[0x8]; // 0x0 CGlobalSymbol
    std::uint8_t m_sSequenceName[0x8]; // 0x8 CGlobalSymbol
    std::uint8_t m_hSequence[0x10]; // 0x10 CAnimNetVar<uint32>
};

struct CEditableMotionGraph {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x58]; // 0x0
};

struct CNmConstFloatNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_flValue[0x8]; // 0x10 float32
};

struct CStringAnimTag {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x50]; // 0x0
};

struct CBoolAnimParameter {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t m_bDefaultValue[0x8]; // 0x80 bool
};

struct CRagdollAnimTag {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x58]; // 0x0
    std::uint8_t m_profileName[0x8]; // 0x58 CGlobalSymbol
};

struct CMotionNode {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_name[0x8]; // 0x18 CUtlString
    std::uint8_t m_id[0x8]; // 0x20 AnimNodeID
};

struct CNmStateMachineNode__CDefinition {
    static constexpr std::size_t size = 0x138;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_stateDefinitions[0x120]; // 0x10 CUtlLeanVectorFixedGrowable<CNmStateMachineNode::StateDefinition_t,5>
    std::uint8_t m_nDefaultStateIndex[0x8]; // 0x130 int16
};

struct CBodyGroupAnimTag {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x58]; // 0x0
    std::uint8_t m_nPriority[0x8]; // 0x58 int32
    std::uint8_t m_bodyGroupSettings[0x18]; // 0x60 CUtlVector<CBodyGroupSetting>
};

struct CNmModelSpaceBlendTask {
    static constexpr std::size_t size = 0x100;
    std::uint8_t pad_0[0x100]; // 0x0
};

struct CNmZeroPoseNode__CDefinition {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct CNmOrientationWarpNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nClipReferenceNodeIdx[0x2]; // 0x10 int16
    std::uint8_t m_nTargetValueNodeIdx[0x2]; // 0x12 int16
    std::uint8_t m_bIsOffsetNode[0x1]; // 0x14 bool
    std::uint8_t m_bIsOffsetRelativeToCharacter[0x1]; // 0x15 bool
    std::uint8_t m_bWarpTranslation[0x1]; // 0x16 bool
    std::uint8_t m_alignmentMode[0x1]; // 0x17 CNmOrientationWarpNode::AlignmentMode_t
    std::uint8_t m_samplingMode[0x8]; // 0x18 CNmRootMotionData::SamplingMode_t
};

struct AnimParamID {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_id[0x4]; // 0x0 uint32
};

struct CNmBoneMaskNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_boneMaskID[0x8]; // 0x10 CGlobalSymbol
};

struct ModelAnimGraph2Ref_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_sIdentifier[0x8]; // 0x0 CUtlString
    std::uint8_t m_hGraph[0x8]; // 0x8 CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
};

struct AnimationDecodeDebugDump_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_processingType[0x8]; // 0x0 AnimationProcessingType_t
    std::uint8_t m_elems[0x18]; // 0x8 CUtlVector<AnimationDecodeDebugDumpElement_t>
};

struct CNmVirtualParameterIDNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nChildNodeIdx[0x8]; // 0x10 int16
};

struct CSeqScaleSet {
    static constexpr std::size_t size = 0x50;
    std::uint8_t m_sName[0x10]; // 0x0 CBufferString
    std::uint8_t m_bRootOffset[0x4]; // 0x10 bool
    std::uint8_t m_vRootOffset[0xC]; // 0x14 Vector
    std::uint8_t m_nLocalBoneArray[0x18]; // 0x20 CUtlVector<int16>
    std::uint8_t m_flBoneScaleArray[0x18]; // 0x38 CUtlVector<float32>
};

struct PulseRuntimeCallInfoIndex_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_Value[0x4]; // 0x0 int32
};

struct CDirectionalBlendUpdateNode {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t pad_0[0x5C]; // 0x0
    std::uint8_t m_hSequences[0x24]; // 0x5C HSequence[8]
    std::uint8_t m_damping[0x18]; // 0x80 CAnimInputDamping
    std::uint8_t m_blendValueSource[0x4]; // 0x98 AnimValueSource
    std::uint8_t m_paramIndex[0x4]; // 0x9C CAnimParamHandle
    std::uint8_t m_playbackSpeed[0x4]; // 0xA0 float32
    std::uint8_t m_duration[0x4]; // 0xA4 float32
    std::uint8_t m_bLoop[0x1]; // 0xA8 bool
    std::uint8_t m_bLockBlendOnReset[0x7]; // 0xA9 bool
};

struct CNmGraphDefinition__ReferencedGraphSlot_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_nNodeIdx[0x2]; // 0x0 int16
    std::uint8_t m_dataSlotIdx[0x2]; // 0x2 int16
};

struct ParamSpan_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_samples[0x18]; // 0x0 CUtlVector<ParamSpanSample_t>
    std::uint8_t m_hParam[0x2]; // 0x18 CAnimParamHandle
    std::uint8_t m_eParamType[0x2]; // 0x1A AnimParamType_t
    std::uint8_t m_flStartCycle[0x4]; // 0x1C float32
    std::uint8_t m_flEndCycle[0x8]; // 0x20 float32
};

struct CFootStepTriggerUpdateNode {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t m_triggers[0x1C]; // 0x70 CUtlVector<FootStepTrigger>
    std::uint8_t m_flTolerance[0x4]; // 0x8C float32
};

struct IKTargetSettings_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_TargetSource[0x8]; // 0x0 IKTargetSource
    std::uint8_t m_Bone[0x10]; // 0x8 IKBoneNameAndIndex_t
    std::uint8_t m_AnimgraphParameterNamePosition[0x4]; // 0x18 AnimParamID
    std::uint8_t m_AnimgraphParameterNameOrientation[0x4]; // 0x1C AnimParamID
    std::uint8_t m_TargetCoordSystem[0x8]; // 0x20 IKTargetCoordinateSystem
};

struct CModelConfigElement_SetRenderColor {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Color[0x8]; // 0x48 Color
};

struct CNmAdditiveBlendTask {
    static constexpr std::size_t size = 0x100;
    std::uint8_t pad_0[0x100]; // 0x0
};

struct CNmAnimationPoseNode__CDefinition {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nPoseTimeValueNodeIdx[0x2]; // 0x10 int16
    std::uint8_t m_nDataSlotIdx[0x2]; // 0x12 int16
    std::uint8_t m_inputTimeRemapRange[0x8]; // 0x14 Range_t
    std::uint8_t m_flUserSpecifiedTime[0x4]; // 0x1C float32
    std::uint8_t m_bUseFramesAsInput[0x8]; // 0x20 bool
};

struct CMotionSearchDB {
    static constexpr std::size_t size = 0xB8;
    std::uint8_t m_rootNode[0x80]; // 0x0 CMotionSearchNode
    std::uint8_t m_residualQuantizer[0x20]; // 0x80 CProductQuantizer
    std::uint8_t m_codeIndices[0x18]; // 0xA0 CUtlVector<MotionDBIndex>
};

struct CMotionNodeBlend1D {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_blendItems[0x18]; // 0x28 CUtlVector<MotionBlendItem>
    std::uint8_t m_nParamIndex[0x8]; // 0x40 int32
};

struct CNmCurrentSyncEventNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nSourceStateNodeIdx[0x2]; // 0x10 int16
    std::uint8_t m_infoType[0x6]; // 0x12 CNmCurrentSyncEventNode::InfoType_t
};

struct CNmControlParameterTargetNode__CDefinition {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct SkeletonBoneBounds_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_vecCenter[0xC]; // 0x0 Vector
    std::uint8_t m_vecSize[0xC]; // 0xC Vector
};

struct CTwoBoneIKUpdateNode {
    static constexpr std::size_t size = 0x1E0;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t m_opFixedData[0x170]; // 0x70 TwoBoneIKSettings_t
};

struct VPhysXBodyPart_t {
    static constexpr std::size_t size = 0x98;
    std::uint8_t m_nFlags[0x4]; // 0x0 uint32
    std::uint8_t m_flMass[0x4]; // 0x4 float32
    std::uint8_t m_rnShape[0x68]; // 0x8 VPhysics2ShapeDef_t
    std::uint8_t m_nCollisionAttributeIndex[0x2]; // 0x70 uint16
    std::uint8_t m_nReserved[0x2]; // 0x72 uint16
    std::uint8_t m_flInertiaScale[0x4]; // 0x74 float32
    std::uint8_t m_flLinearDamping[0x4]; // 0x78 float32
    std::uint8_t m_flAngularDamping[0x4]; // 0x7C float32
    std::uint8_t m_flLinearDrag[0x4]; // 0x80 float32
    std::uint8_t m_flAngularDrag[0x4]; // 0x84 float32
    std::uint8_t m_bOverrideMassCenter[0x4]; // 0x88 bool
    std::uint8_t m_vMassCenterOverride[0xC]; // 0x8C Vector
};

struct PulseRuntimeChunkIndex_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_Value[0x4]; // 0x0 int32
};

struct CTaskHandshakeAnimTag {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x58]; // 0x0
};

struct CFollowPathUpdateNode {
    static constexpr std::size_t size = 0xB8;
    std::uint8_t pad_0[0x74]; // 0x0
    std::uint8_t m_flBlendOutTime[0x4]; // 0x74 float32
    std::uint8_t m_bBlockNonPathMovement[0x1]; // 0x78 bool
    std::uint8_t m_bStopFeetAtGoal[0x1]; // 0x79 bool
    std::uint8_t m_bScaleSpeed[0x2]; // 0x7A bool
    std::uint8_t m_flScale[0x4]; // 0x7C float32
    std::uint8_t m_flMinAngle[0x4]; // 0x80 float32
    std::uint8_t m_flMaxAngle[0x4]; // 0x84 float32
    std::uint8_t m_flSpeedScaleBlending[0x8]; // 0x88 float32
    std::uint8_t m_turnDamping[0x18]; // 0x90 CAnimInputDamping
    std::uint8_t m_facingTarget[0x4]; // 0xA8 AnimValueSource
    std::uint8_t m_hParam[0x4]; // 0xAC CAnimParamHandle
    std::uint8_t m_flTurnToFaceOffset[0x4]; // 0xB0 float32
    std::uint8_t m_bTurnToFace[0x4]; // 0xB4 bool
};

struct AimMatrixOpFixedSettings_t {
    static constexpr std::size_t size = 0xF0;
    std::uint8_t m_attachment[0x80]; // 0x0 CAnimAttachment
    std::uint8_t m_damping[0x18]; // 0x80 CAnimInputDamping
    std::uint8_t m_poseCacheHandles[0x28]; // 0x98 CPoseHandle[10]
    std::uint8_t m_eBlendMode[0x4]; // 0xC0 AimMatrixBlendMode
    std::uint8_t m_flMaxYawAngle[0x4]; // 0xC4 float32
    std::uint8_t m_flMaxPitchAngle[0x4]; // 0xC8 float32
    std::uint8_t m_nSequenceMaxFrame[0x4]; // 0xCC int32
    std::uint8_t m_nBoneMaskIndex[0x4]; // 0xD0 int32
    std::uint8_t m_bTargetIsPosition[0x1]; // 0xD4 bool
    std::uint8_t m_bUseBiasAndClamp[0x3]; // 0xD5 bool
    std::uint8_t m_flBiasAndClampYawOffset[0x4]; // 0xD8 float32
    std::uint8_t m_flBiasAndClampPitchOffset[0x4]; // 0xDC float32
    std::uint8_t m_biasAndClampBlendCurve[0x10]; // 0xE0 CBlendCurve
};

struct CAnimScriptComponentUpdater {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_hScript[0x8]; // 0x30 AnimScriptHandle
};

struct CRagdollUpdateNode {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t m_nWeightListIndex[0x4]; // 0x70 int32
    std::uint8_t m_poseControlMethod[0x4]; // 0x74 RagdollPoseControl
};

struct CBoneConstraintBase {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x20]; // 0x0
};

struct CPathAnimMotorUpdater {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x28]; // 0x0
};

struct CMaterialAttributeAnimTag {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x58]; // 0x0
    std::uint8_t m_AttributeName[0x8]; // 0x58 CUtlString
    std::uint8_t m_AttributeType[0x4]; // 0x60 MatterialAttributeTagType_t
    std::uint8_t m_flValue[0x4]; // 0x64 float32
    std::uint8_t m_Color[0x8]; // 0x68 Color
};

struct CNmFootEventConditionNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nSourceStateNodeIdx[0x2]; // 0x10 int16
    std::uint8_t m_phaseCondition[0x2]; // 0x12 NmFootPhaseCondition_t
    std::uint8_t m_eventConditionRules[0x4]; // 0x14 CNmBitFlags
};

struct CNmFloatChannelSet_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_ID[0x8]; // 0x0 CGlobalSymbol
    std::uint8_t m_channelIDs[0x10]; // 0x8 CUtlLeanVector<CGlobalSymbol>
};

struct CNmFootEvent {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_phase[0x8]; // 0x18 NmFootPhase_t
};

struct CPhysSurfacePropertiesAudio {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_reflectivity[0x4]; // 0x0 float32
    std::uint8_t m_hardnessFactor[0x4]; // 0x4 float32
    std::uint8_t m_roughnessFactor[0x4]; // 0x8 float32
    std::uint8_t m_roughThreshold[0x4]; // 0xC float32
    std::uint8_t m_hardThreshold[0x4]; // 0x10 float32
    std::uint8_t m_hardVelocityThreshold[0x4]; // 0x14 float32
    std::uint8_t m_flStaticImpactVolume[0x4]; // 0x18 float32
    std::uint8_t m_flOcclusionFactor[0x4]; // 0x1C float32
};

struct CSeqAutoLayer {
    static constexpr std::size_t size = 0x1C;
    std::uint8_t m_nLocalReference[0x2]; // 0x0 int16
    std::uint8_t m_nLocalPose[0x2]; // 0x2 int16
    std::uint8_t m_flags[0x8]; // 0x4 CSeqAutoLayerFlag
    std::uint8_t m_start[0x4]; // 0xC float32
    std::uint8_t m_peak[0x4]; // 0x10 float32
    std::uint8_t m_tail[0x4]; // 0x14 float32
    std::uint8_t m_end[0x4]; // 0x18 float32
};

struct ModelEmbeddedMesh_t {
    static constexpr std::size_t size = 0x70;
    std::uint8_t m_Name[0x10]; // 0x0 CUtlString
    std::uint8_t m_nMeshIndex[0x4]; // 0x10 int32
    std::uint8_t m_nDataBlock[0x4]; // 0x14 int32
    std::uint8_t m_nMorphBlock[0x8]; // 0x18 int32
    std::uint8_t m_vertexBuffers[0x18]; // 0x20 CUtlVector<ModelMeshBufferData_t>
    std::uint8_t m_indexBuffers[0x18]; // 0x38 CUtlVector<ModelMeshBufferData_t>
    std::uint8_t m_toolsBuffers[0x18]; // 0x50 CUtlVector<ModelMeshBufferData_t>
    std::uint8_t m_nVBIBBlock[0x4]; // 0x68 int32
    std::uint8_t m_nToolsVBBlock[0x4]; // 0x6C int32
};

struct PhysSoftbodyDesc_t {
    static constexpr std::size_t size = 0x90;
    std::uint8_t m_ParticleBoneHash[0x18]; // 0x0 CUtlVector<uint32>
    std::uint8_t m_Particles[0x18]; // 0x18 CUtlVector<RnSoftbodyParticle_t>
    std::uint8_t m_Springs[0x18]; // 0x30 CUtlVector<RnSoftbodySpring_t>
    std::uint8_t m_Capsules[0x18]; // 0x48 CUtlVector<RnSoftbodyCapsule_t>
    std::uint8_t m_InitPose[0x18]; // 0x60 CUtlVector<CTransform>
    std::uint8_t m_ParticleBoneName[0x18]; // 0x78 CUtlVector<CUtlString>
};

struct CPulseRuntimeMethodArg {
    static constexpr std::size_t size = 0x80;
    std::uint8_t m_Name[0x38]; // 0x0 CKV3MemberNameWithStorage
    std::uint8_t m_Description[0x8]; // 0x38 CUtlString
    std::uint8_t m_Type[0x40]; // 0x40 CPulseValueFullType
};

struct CAnimSequenceParams {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_flFadeInTime[0x4]; // 0x0 float32
    std::uint8_t m_flFadeOutTime[0x4]; // 0x4 float32
};

struct CTargetWarpUpdateNode {
    static constexpr std::size_t size = 0x98;
    std::uint8_t pad_0[0x74]; // 0x0
    std::uint8_t m_eAngleMode[0x4]; // 0x74 TargetWarpAngleMode_t
    std::uint8_t m_hTargetPositionParameter[0x2]; // 0x78 CAnimParamHandle
    std::uint8_t m_hTargetUpVectorParameter[0x2]; // 0x7A CAnimParamHandle
    std::uint8_t m_hTargetFacePositionParameter[0x2]; // 0x7C CAnimParamHandle
    std::uint8_t m_hMoveHeadingParameter[0x2]; // 0x7E CAnimParamHandle
    std::uint8_t m_hDesiredMoveHeadingParameter[0x4]; // 0x80 CAnimParamHandle
    std::uint8_t m_eCorrectionMethod[0x4]; // 0x84 TargetWarpCorrectionMethod
    std::uint8_t m_eTargetWarpTimingMethod[0x4]; // 0x88 TargetWarpTimingMethod
    std::uint8_t m_bTargetFacePositionIsWorldSpace[0x1]; // 0x8C bool
    std::uint8_t m_bTargetPositionIsWorldSpace[0x1]; // 0x8D bool
    std::uint8_t m_bOnlyWarpWhenTagIsFound[0x1]; // 0x8E bool
    std::uint8_t m_bWarpOrientationDuringTranslation[0x1]; // 0x8F bool
    std::uint8_t m_bWarpAroundCenter[0x4]; // 0x90 bool
    std::uint8_t m_flMaxAngle[0x4]; // 0x94 float32
};

struct CNmVirtualParameterBoolNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nChildNodeIdx[0x8]; // 0x10 int16
};

struct CFollowTargetUpdateNode {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t m_opFixedData[0x18]; // 0x70 FollowTargetOpFixedSettings_t
    std::uint8_t m_hParameterPosition[0x2]; // 0x88 CAnimParamHandle
    std::uint8_t m_hParameterOrientation[0x6]; // 0x8A CAnimParamHandle
};

struct PulseRuntimeStateOffset_t {
    static constexpr std::size_t size = 0x2;
    std::uint8_t m_Value[0x2]; // 0x0 uint16
};

struct CCPPScriptComponentUpdater {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_scriptsToRun[0x30]; // 0x30 CUtlVector<CGlobalSymbol>
};

struct NetVarConfigIndex {
    static constexpr std::size_t size = 0xC;
    std::uint8_t m_index[0xC]; // 0x0 CAnimNetVar<uint32>
};

struct CAnimData {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_name[0x10]; // 0x10 CBufferString
    std::uint8_t m_animArray[0x18]; // 0x20 CUtlVector<CAnimDesc>
    std::uint8_t m_decoderArray[0x18]; // 0x38 CUtlVector<CAnimDecoder>
    std::uint8_t m_nMaxUniqueFrameIndex[0x8]; // 0x50 int32
    std::uint8_t m_segmentArray[0x18]; // 0x58 CUtlVector<CAnimFrameSegment>
};

struct IKSolverSettings_t {
    static constexpr std::size_t size = 0xC;
    std::uint8_t m_SolverType[0x4]; // 0x0 IKSolverType
    std::uint8_t m_nNumIterations[0x4]; // 0x4 int32
    std::uint8_t m_EndEffectorRotationFixUpMode[0x4]; // 0x8 EIKEndEffectorRotationFixUpMode
};

struct CBinaryUpdateNode {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t m_pChild1[0x10]; // 0x60 CAnimUpdateNodeRef
    std::uint8_t m_pChild2[0x10]; // 0x70 CAnimUpdateNodeRef
    std::uint8_t m_timingBehavior[0x4]; // 0x80 BinaryNodeTiming
    std::uint8_t m_flTimingBlend[0x4]; // 0x84 float32
    std::uint8_t m_bResetChild1[0x1]; // 0x88 bool
    std::uint8_t m_bResetChild2[0x7]; // 0x89 bool
};

struct CBlendNodeInstanceData {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_dampedValue[0x4]; // 0x0 float32
    std::uint8_t m_flCycle[0x4]; // 0x4 float32
    std::uint8_t m_flCycleZeroTime[0x4]; // 0x8 float32
    std::uint8_t m_flPlaybackRate[0x4]; // 0xC float32
    std::uint8_t m_flBlendValue[0xC]; // 0x10 CAnimNetVar<float32>
    std::uint8_t m_flDuration[0x4]; // 0x1C float32
    std::uint8_t m_resetCount[0x10]; // 0x20 CAnimNetVar<uint8>
};

struct CNmParameterizedBlendNode__BlendRange_t {
    static constexpr std::size_t size = 0xC;
    std::uint8_t m_nInputIdx0[0x2]; // 0x0 int16
    std::uint8_t m_nInputIdx1[0x2]; // 0x2 int16
    std::uint8_t m_parameterValueRange[0x8]; // 0x4 Range_t
};

struct CAnimKeyData {
    static constexpr std::size_t size = 0x78;
    std::uint8_t m_name[0x10]; // 0x0 CBufferString
    std::uint8_t m_boneArray[0x18]; // 0x10 CUtlVector<CAnimBone>
    std::uint8_t m_userArray[0x18]; // 0x28 CUtlVector<CAnimUser>
    std::uint8_t m_morphArray[0x18]; // 0x40 CUtlVector<CBufferString>
    std::uint8_t m_nChannelElements[0x8]; // 0x58 int32
    std::uint8_t m_dataChannelArray[0x18]; // 0x60 CUtlVector<CAnimDataChannelDesc>
};

struct AttachmentHandle_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t m_Value[0x1]; // 0x0 uint8
};

struct CAnimMorphDifference {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_name[0x10]; // 0x0 CBufferString
};

struct FootFixedData_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t m_vToeOffset[0x10]; // 0x0 VectorAligned
    std::uint8_t m_vHeelOffset[0x10]; // 0x10 VectorAligned
    std::uint8_t m_nTargetBoneIndex[0x4]; // 0x20 int32
    std::uint8_t m_nAnkleBoneIndex[0x4]; // 0x24 int32
    std::uint8_t m_nIKAnchorBoneIndex[0x4]; // 0x28 int32
    std::uint8_t m_ikChainIndex[0x4]; // 0x2C int32
    std::uint8_t m_flMaxIKLength[0x4]; // 0x30 float32
    std::uint8_t m_nFootIndex[0x4]; // 0x34 int32
    std::uint8_t m_nTagIndex[0x4]; // 0x38 int32
    std::uint8_t m_flMaxRotationLeft[0x4]; // 0x3C float32
    std::uint8_t m_flMaxRotationRight[0x10]; // 0x40 float32
};

struct CMotionGraphGroup {
    static constexpr std::size_t size = 0x108;
    std::uint8_t m_searchDB[0xB8]; // 0x0 CMotionSearchDB
    std::uint8_t m_motionGraphs[0x18]; // 0xB8 CUtlVector<CSmartPtr<CMotionGraph>>
    std::uint8_t m_motionGraphConfigs[0x18]; // 0xD0 CUtlVector<CMotionGraphConfig>
    std::uint8_t m_sampleToConfig[0x18]; // 0xE8 CUtlVector<int32>
    std::uint8_t m_hIsActiveScript[0x8]; // 0x100 AnimScriptHandle
};

struct CPulse_InstructionDebug {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_nFlowNodeID[0x4]; // 0x0 PulseDocNodeID_t
    std::uint8_t m_nValueNodeID[0x4]; // 0x4 PulseDocNodeID_t
    std::uint8_t m_SequencePointName[0x10]; // 0x8 PulseSymbol_t
};

struct CNmVectorNegateNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nInputValueNodeIdx[0x8]; // 0x10 int16
};

struct CNmSyncTrack__Event_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_ID[0x8]; // 0x0 CGlobalSymbol
    std::uint8_t m_startTime[0x4]; // 0x8 NmPercent_t
    std::uint8_t m_duration[0x4]; // 0xC NmPercent_t
};

struct CParticleCollectionRendererVecInput {
    static constexpr std::size_t size = 0x6D8;
    std::uint8_t pad_0[0x6D8]; // 0x0
};

struct CNmTarget {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_transform[0x20]; // 0x0 CTransform
    std::uint8_t m_boneID[0x8]; // 0x20 CGlobalSymbol
    std::uint8_t m_bIsBoneTarget[0x1]; // 0x28 bool
    std::uint8_t m_bIsUsingBoneSpaceOffsets[0x1]; // 0x29 bool
    std::uint8_t m_bHasOffsets[0x1]; // 0x2A bool
    std::uint8_t m_bIsSet[0x5]; // 0x2B bool
};

struct CNmControlParameterIDNode__CDefinition {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct CNmBodyGroupEvent {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_target[0x8]; // 0x18 CNmEventTargetEntity_t
    std::uint8_t m_groupName[0x8]; // 0x20 CUtlString
    std::uint8_t m_choiceName[0x8]; // 0x28 CUtlString
};

struct CWayPointHelperUpdateNode {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x74]; // 0x0
    std::uint8_t m_flStartCycle[0x4]; // 0x74 float32
    std::uint8_t m_flEndCycle[0x4]; // 0x78 float32
    std::uint8_t m_bOnlyGoals[0x1]; // 0x7C bool
    std::uint8_t m_bPreventOvershoot[0x1]; // 0x7D bool
    std::uint8_t m_bPreventUndershoot[0x2]; // 0x7E bool
};

struct CMoodVData {
    static constexpr std::size_t size = 0x100;
    std::uint8_t m_sModelName[0xE0]; // 0x0 CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    std::uint8_t m_nMoodType[0x8]; // 0xE0 MoodType_t
    std::uint8_t m_animationLayers[0x18]; // 0xE8 CUtlVector<MoodAnimationLayer_t>
};

struct CModelConfigElement_AttachedModel {
    static constexpr std::size_t size = 0xF0;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_InstanceName[0x8]; // 0x48 CUtlString
    std::uint8_t m_EntityClass[0x8]; // 0x50 CUtlString
    std::uint8_t m_hModel[0x8]; // 0x58 CStrongHandle<InfoForResourceTypeCModel>
    std::uint8_t m_vOffset[0xC]; // 0x60 Vector
    std::uint8_t m_aAngOffset[0xC]; // 0x6C QAngle
    std::uint8_t m_AttachmentName[0x8]; // 0x78 CUtlString
    std::uint8_t m_LocalAttachmentOffsetName[0x8]; // 0x80 CUtlString
    std::uint8_t m_AttachmentType[0x4]; // 0x88 ModelConfigAttachmentType_t
    std::uint8_t m_bBoneMergeFlex[0x1]; // 0x8C bool
    std::uint8_t m_bUserSpecifiedColor[0x1]; // 0x8D bool
    std::uint8_t m_bUserSpecifiedMaterialGroup[0x2]; // 0x8E bool
    std::uint8_t m_BodygroupOnOtherModels[0x8]; // 0x90 CUtlString
    std::uint8_t m_MaterialGroupOnOtherModels[0x8]; // 0x98 CUtlString
    std::uint8_t m_bCollideWithHierarchy[0x1]; // 0xA0 bool
    std::uint8_t m_bCollideOutsideHierarchy[0x4F]; // 0xA1 bool
};

struct CAnimTagManagerUpdater {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x38]; // 0x0
    std::uint8_t m_tags[0x40]; // 0x38 CUtlVector<CSmartPtr<CAnimTagBase>>
};

struct CParticleProperty {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x28]; // 0x0
};

} // namespace