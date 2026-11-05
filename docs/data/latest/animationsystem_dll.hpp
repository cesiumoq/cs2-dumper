/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Total Offsets   : 202
/*  Dumped At       : 13:50 05/11/2026 (GMT)
/*  Dumped In       : 1,2s
*/

/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

#pragma once
#include <cstddef>
#include <cstdint>

namespace cs2::animationsystem_dll {

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
    BoneTransformSpace_Invalid = -1,
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
    PF_BIAS_TYPE_INVALID = -1,
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
    eInvalid = -1,
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
    PF_TYPE_INVALID = -1,
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
    PF_ROUND_TYPE_INVALID = -1,
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
    MODEL_BONE_FLEX_INVALID = -1,
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
    PF_MAP_TYPE_INVALID = -1,
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
    PF_INPUT_MODE_INVALID = -1,
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
    PF_RANDOM_MODE_INVALID = -1,
    PF_RANDOM_MODE_CONSTANT = 0,
    PF_RANDOM_MODE_VARYING = 1,
    PF_RANDOM_MODE_COUNT = 2,
};

enum class PulseValueType_t : std::int32_t {
    PVAL_VOID = -1,
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
    PVEC_TYPE_INVALID = -1,
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
    ANIMSCRIPT_TYPE_INVALID = -1,
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
    eInvalid = -1,
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
    PATTACH_INVALID = -1,
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
    eInvalid = -1,
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
    RENDERMESH_SLOT_INVALID = -1,
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
    MODEL_CONFIG_ATTACHMENT_INVALID = -1,
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
    INVALID = -1,
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
    std::uint8_t _[0x4]; // 0x128 
    std::uint8_t _[0x4]; // 0x12c 
};

struct CPulseCell_RaceCursors {
    static constexpr std::size_t size = 0x138;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x18]; // 0xd8 
    std::uint8_t _[0x48]; // 0xf0 
};

struct CPulseCell_Base {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x40]; // 0x8 
};

struct CPulse_ResumePoint {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_PickBestOutflowSelector {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x18]; // 0x50 
};

struct CParticleBindingRealPulse {
    static constexpr std::size_t size = 0xa8;
    std::uint8_t pad_0[0xa8]; // 0x0
};

struct CPulseCell_WaitForObservable {
    static constexpr std::size_t size = 0x1b0;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x90]; // 0xd8 
    std::uint8_t _[0x48]; // 0x168 
};

struct CPulse_OutflowConnection {
    static constexpr std::size_t size = 0x48;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x30]; // 0x18 
};

struct CPulseGraphDef {
    static constexpr std::size_t size = 0x1c0;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x10]; // 0x8 
    std::uint8_t _[0x18]; // 0x18 
    std::uint8_t _[0x10]; // 0x30 
    std::uint8_t _[0x10]; // 0x40 
    std::uint8_t _[0x18]; // 0x50 
    std::uint8_t _[0x18]; // 0x68 
    std::uint8_t _[0x18]; // 0x80 
    std::uint8_t _[0x18]; // 0x98 
    std::uint8_t _[0x18]; // 0xb0 
    std::uint8_t _[0x18]; // 0xc8 
    std::uint8_t _[0x18]; // 0xe0 
    std::uint8_t _[0x18]; // 0xf8 
    std::uint8_t _[0x18]; // 0x110 
    std::uint8_t _[0x18]; // 0x128 
    std::uint8_t _[0x80]; // 0x140 
};

struct CPulseCell_FireCursors {
    static constexpr std::size_t size = 0x140;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x18]; // 0xd8 
    std::uint8_t _[0x8]; // 0xf0 
    std::uint8_t _[0x48]; // 0xf8 
};

struct CPulseCell_Timeline__TimelineEvent_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x48]; // 0x8 
};

struct CPulseCell_IntervalTimer__CursorState_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
};

struct CPulseCell_BaseRequirement {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_BaseState {
    static constexpr std::size_t size = 0xd8;
    std::uint8_t pad_0[0xd8]; // 0x0
};

struct OutflowWithRequirements_t {
    static constexpr std::size_t size = 0x80;
    std::uint8_t _[0x48]; // 0x0 
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x18]; // 0x50 
    std::uint8_t _[0x18]; // 0x68 
};

struct CPulseCell_IsRequirementValid {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_Value_Gradient {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x18]; // 0x48 
};

struct PulseNodeDynamicOutflows_t__DynamicOutflow_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x48]; // 0x8 
};

struct CBasePulseGraphInstance {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x88]; // 0x0
};

struct CPulseCell_Inflow_GraphHook {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t _[0x10]; // 0x80 
};

struct SignatureOutflow_Resume {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_Inflow_BaseEntrypoint {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x30]; // 0x50 
};

struct CPulseCell_WaitForCursorsWithTagBase {
    static constexpr std::size_t size = 0x128;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x8]; // 0xd8 
    std::uint8_t _[0x48]; // 0xe0 
};

struct CPulse_InvokeBinding {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t _[0x30]; // 0x0 
    std::uint8_t _[0x10]; // 0x30 
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x4]; // 0x44 
    std::uint8_t _[0x68]; // 0x48 
};

struct CPulseCell_IntervalTimer {
    static constexpr std::size_t size = 0x168;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x48]; // 0xd8 
    std::uint8_t _[0x48]; // 0x120 
};

struct CPulseCell_BaseLerp {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x48]; // 0xd8 
};

struct CPulseCell_Value_Curve {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x40]; // 0x48 
};

struct CPulseCell_Inflow_EventHandler {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t _[0x10]; // 0x80 
};

struct CPulseCell_BaseFlow {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_Outflow_CycleShuffled__InstanceState_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x20]; // 0x0 
    std::uint8_t _[0x8]; // 0x20 
};

struct CPulseCell_BaseLerp__CursorState_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct SignatureOutflow_Continue {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_Timeline {
    static constexpr std::size_t size = 0x140;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x18]; // 0xd8 
    std::uint8_t _[0x8]; // 0xf0 
    std::uint8_t _[0x48]; // 0xf8 
};

struct CPulseCell_Inflow_EntOutputHandler {
    static constexpr std::size_t size = 0xb8;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t _[0x10]; // 0x80 
    std::uint8_t _[0x10]; // 0x90 
    std::uint8_t _[0x18]; // 0xa0 
};

struct CPulseCell_Outflow_CycleOrdered__InstanceState_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CParticleCollectionBindingInstance {
    static constexpr std::size_t size = 0xa8;
    std::uint8_t pad_0[0xa8]; // 0x0
};

struct CPulseCell_LimitCount__InstanceState_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CPulseCell_Step_DebugLog {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_BaseYieldingInflow {
    static constexpr std::size_t size = 0xd8;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x48]; // 0x48 
    std::uint8_t _[0x48]; // 0x90 
};

struct PulseNodeDynamicOutflows_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x18]; // 0x0 
};

struct CPulseCell_IsRequirementValid__Criteria_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t _[0x1]; // 0x0 
};

struct CPulseCell_Inflow_ObservableVariableListener {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t _[0x2]; // 0x80 
    std::uint8_t _[0x6]; // 0x82 
};

struct CPulseCell_Outflow_CycleOrdered {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x18]; // 0x48 
};

struct PulseSelectorOutflowList_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x18]; // 0x0 
};

struct CPulseCell_Inflow_Wait {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x48]; // 0xd8 
};

struct CPulseCell_Outflow_CycleShuffled {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x18]; // 0x48 
};

struct CPulseCell_Inflow_Method {
    static constexpr std::size_t size = 0xc0;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t _[0x10]; // 0x80 
    std::uint8_t _[0x8]; // 0x90 
    std::uint8_t _[0x8]; // 0x98 
    std::uint8_t _[0x10]; // 0xa0 
    std::uint8_t _[0x10]; // 0xb0 
};

struct CPulseCell_BaseValue {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_BooleanSwitchState {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x90]; // 0xd8 
    std::uint8_t _[0x48]; // 0x168 
    std::uint8_t _[0x48]; // 0x1b0 
};

struct CPulseCell_Inflow_Yield {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x48]; // 0xd8 
};

struct CPulseCell_Unknown {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x10]; // 0x48 
};

struct CPulseCell_Outflow_CycleRandom {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x18]; // 0x48 
};

struct CPulseCell_Step_PublicOutput {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x8]; // 0x48 
};

struct CPulse_BlackboardReference {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x10]; // 0x8 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
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
    static constexpr std::size_t size = 0x4c;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0xc]; // 0x10 
    std::uint8_t _[0xc]; // 0x1c 
    std::uint8_t _[0xc]; // 0x28 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x4]; // 0x44 
    std::uint8_t _[0x4]; // 0x48 
};

struct CPulse_CallInfo {
    static constexpr std::size_t size = 0x60;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x30]; // 0x18 
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0x4]; // 0x54 
    std::uint8_t _[0x8]; // 0x58 
};

struct CPulseCell_InlineNodeSkipSelector {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x18]; // 0x50 
    std::uint8_t _[0x48]; // 0x68 
};

struct CPulseCell_LimitCount {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x8]; // 0x48 
};

struct CPulseCell_Step_CallExternalMethod {
    static constexpr std::size_t size = 0x150;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x10]; // 0xd8 
    std::uint8_t _[0x8]; // 0xe8 
    std::uint8_t _[0x10]; // 0xf0 
    std::uint8_t _[0x8]; // 0x100 
    std::uint8_t _[0x48]; // 0x108 
};

struct CPulseCell_LimitCount__Criteria_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t _[0x1]; // 0x0 
};

struct CPulseCell_CursorQueue {
    static constexpr std::size_t size = 0x130;
    std::uint8_t pad_0[0x128]; // 0x0
    std::uint8_t _[0x8]; // 0x128 
};

struct CPulseCell_Value_RandomFloat {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseExecCursor {
    static constexpr std::size_t size = 0xd8;
    std::uint8_t pad_0[0xd8]; // 0x0
};

struct CAnimFrameBlockAnim {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x18]; // 0x8 
};

struct CZeroPoseUpdateNode {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x60]; // 0x0
};

struct CSlowDownOnSlopesUpdateNode {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t _[0x8]; // 0x70 
};

struct COrientationWarpUpdateNode {
    static constexpr std::size_t size = 0xc0;
    std::uint8_t pad_0[0x74]; // 0x0
    std::uint8_t _[0x4]; // 0x74 
    std::uint8_t _[0x2]; // 0x78 
    std::uint8_t _[0x2]; // 0x7a 
    std::uint8_t _[0x4]; // 0x7c 
    std::uint8_t _[0x4]; // 0x80 
    std::uint8_t _[0x4]; // 0x84 
    std::uint8_t _[0x8]; // 0x88 
    std::uint8_t _[0x18]; // 0x90 
    std::uint8_t _[0x4]; // 0xa8 
    std::uint8_t _[0x4]; // 0xac 
    std::uint8_t _[0x4]; // 0xb0 
    std::uint8_t _[0x4]; // 0xb4 
    std::uint8_t _[0x8]; // 0xb8 
};

struct CAnimParameterBase {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x18]; // 0x30 
    std::uint8_t _[0x20]; // 0x48 
    std::uint8_t _[0x1]; // 0x68 
    std::uint8_t _[0x7]; // 0x69 
};

struct CSequenceFinishedAnimTag {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x58]; // 0x0
    std::uint8_t _[0x8]; // 0x58 
};

struct CSceneObjectData {
    static constexpr std::size_t size = 0xb8;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0xc]; // 0xc 
    std::uint8_t _[0x10]; // 0x18 
    std::uint8_t _[0x10]; // 0x28 
    std::uint8_t _[0x10]; // 0x38 
    std::uint8_t _[0x10]; // 0x48 
    std::uint8_t _[0x60]; // 0x58 
};

struct CFootCycle {
    static constexpr std::size_t size = 0x4;
    std::uint8_t pad_0[0x4]; // 0x0
};

struct CParticleModelInput {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x40]; // 0x18 
    std::uint8_t _[0x8]; // 0x58 
};

struct CInputStreamUpdateNode {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x60]; // 0x0
};

struct CNmFootIKTask {
    static constexpr std::size_t size = 0x140;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t _[0x4]; // 0x70 
    std::uint8_t _[0xc]; // 0x74 
    std::uint8_t _[0x20]; // 0x80 
    std::uint8_t _[0x20]; // 0xa0 
    std::uint8_t _[0x4]; // 0xc0 
    std::uint8_t _[0xc]; // 0xc4 
    std::uint8_t _[0x30]; // 0xd0 
    std::uint8_t _[0x30]; // 0x100 
    std::uint8_t _[0x4]; // 0x130 
    std::uint8_t _[0x4]; // 0x134 
    std::uint8_t _[0x1]; // 0x138 
    std::uint8_t _[0x7]; // 0x139 
};

struct CIntAnimParameter {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t _[0x4]; // 0x80 
    std::uint8_t _[0x4]; // 0x84 
    std::uint8_t _[0x8]; // 0x88 
};

struct CNmParameterizedBlendNode__CDefinition {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x2]; // 0x28 
    std::uint8_t _[0x6]; // 0x2a 
};

struct CNmScaleTask {
    static constexpr std::size_t size = 0xd0;
    std::uint8_t pad_0[0xd0]; // 0x0
};

struct PerTickSettings_t {
    static constexpr std::size_t size = 0x6c0;
    std::uint8_t _[0x20]; // 0x0 
    std::uint8_t _[0x20]; // 0x20 
    std::uint8_t _[0x20]; // 0x40 
    std::uint8_t _[0x63c]; // 0x60 
    std::uint8_t _[0x8]; // 0x69c 
    std::uint8_t _[0x4]; // 0x6a4 
    std::uint8_t _[0x4]; // 0x6a8 
    std::uint8_t _[0x8]; // 0x6ac 
    std::uint8_t _[0x1]; // 0x6b4 
    std::uint8_t _[0x1]; // 0x6b5 
    std::uint8_t _[0x1]; // 0x6b6 
    std::uint8_t _[0x9]; // 0x6b7 
};

struct CNmFrameSnapEvent {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x8]; // 0x18 
};

struct CAnimNodePath {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x2c]; // 0x0 
    std::uint8_t _[0x4]; // 0x2c 
};

struct AnimNodeOutputID {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CNmSyncTrack {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t _[0xa8]; // 0x0 
    std::uint8_t _[0x8]; // 0xa8 
};

struct CSeqBoneMaskList {
    static constexpr std::size_t size = 0x60;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x18]; // 0x28 
    std::uint8_t _[0x8]; // 0x40 
    std::uint8_t _[0x18]; // 0x48 
};

struct CAnimEncodedFrames {
    static constexpr std::size_t size = 0xd8;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x18]; // 0x18 
    std::uint8_t _[0xa8]; // 0x30 
};

struct SampleCode {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x8]; // 0x0 
};

struct CCachedPose {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x18]; // 0x8 
    std::uint8_t _[0x18]; // 0x20 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
};

struct CNmTransitionEventConditionNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x2]; // 0x1c 
    std::uint8_t _[0x2]; // 0x1e 
};

struct CTaskStatusAnimTag {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x58]; // 0x0
};

struct CStateNodeInstanceData {
    static constexpr std::size_t size = 0x4c;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x18]; // 0x8 
    std::uint8_t _[0x1c]; // 0x20 
    std::uint8_t _[0x10]; // 0x3c 
};

struct CMotionGraphConfig {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
};

struct CMotionSearchNode {
    static constexpr std::size_t size = 0x80;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x20]; // 0x18 
    std::uint8_t _[0x18]; // 0x38 
    std::uint8_t _[0x18]; // 0x50 
    std::uint8_t _[0x18]; // 0x68 
};

struct CAnimActivity {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x8]; // 0x18 
};

struct CAnimScriptManager {
    static constexpr std::size_t size = 0x1a0;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x190]; // 0x10 
};

struct AnimationDecodeDebugDumpElement_t {
    static constexpr std::size_t size = 0x70;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x18]; // 0x28 
    std::uint8_t _[0x18]; // 0x40 
    std::uint8_t _[0x18]; // 0x58 
};

struct CChoreoInstanceData {
    static constexpr std::size_t size = 0x398;
    std::uint8_t _[0x398]; // 0x0 
};

struct PulseRuntimeVarIndex_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct ConfigIndex {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x2]; // 0x0 
    std::uint8_t _[0x2]; // 0x2 
};

struct VPhysXCollisionAttributes_t {
    static constexpr std::size_t size = 0xd0;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x18]; // 0x8 
    std::uint8_t _[0x18]; // 0x20 
    std::uint8_t _[0x18]; // 0x38 
    std::uint8_t _[0x18]; // 0x50 
    std::uint8_t _[0x8]; // 0x68 
    std::uint8_t _[0x18]; // 0x70 
    std::uint8_t _[0x18]; // 0x88 
    std::uint8_t _[0x18]; // 0xa0 
    std::uint8_t _[0x18]; // 0xb8 
};

struct CSequenceUpdateNode {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t _[0x4]; // 0x78 
    std::uint8_t _[0x4]; // 0x7c 
    std::uint8_t _[0x18]; // 0x80 
    std::uint8_t _[0x18]; // 0x98 
};

struct CStateMachineInstanceData {
    static constexpr std::size_t size = 0x1c;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0xc]; // 0x4 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x8]; // 0x14 
};

struct CNmPassthroughNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
};

struct CNmClipReferenceNode__CDefinition {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct CNmGraphDefinition__ExternalGraphSlot_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
};

struct PulseRuntimeEntrypointIndex_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CAimCameraUpdateNode {
    static constexpr std::size_t size = 0xb8;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t _[0x2]; // 0x70 
    std::uint8_t _[0x2]; // 0x72 
    std::uint8_t _[0x2]; // 0x74 
    std::uint8_t _[0x2]; // 0x76 
    std::uint8_t _[0x2]; // 0x78 
    std::uint8_t _[0x2]; // 0x7a 
    std::uint8_t _[0x4]; // 0x7c 
    std::uint8_t _[0x38]; // 0x80 
};

struct PulseRuntimeDomainValueIndex_t {
    static constexpr std::size_t size = 0x2;
    std::uint8_t _[0x2]; // 0x0 
};

struct LookData {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x18]; // 0x0 
};

struct CSeqSeqDescFlag {
    static constexpr std::size_t size = 0xb;
    std::uint8_t _[0x1]; // 0x0 
    std::uint8_t _[0x1]; // 0x1 
    std::uint8_t _[0x1]; // 0x2 
    std::uint8_t _[0x1]; // 0x3 
    std::uint8_t _[0x1]; // 0x4 
    std::uint8_t _[0x1]; // 0x5 
    std::uint8_t _[0x1]; // 0x6 
    std::uint8_t _[0x1]; // 0x7 
    std::uint8_t _[0x1]; // 0x8 
    std::uint8_t _[0x1]; // 0x9 
    std::uint8_t _[0x1]; // 0xa 
};

struct PermModelInfo_t {
    static constexpr std::size_t size = 0x58;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0xc]; // 0x4 
    std::uint8_t _[0xc]; // 0x10 
    std::uint8_t _[0xc]; // 0x1c 
    std::uint8_t _[0xc]; // 0x28 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0xc]; // 0x38 
    std::uint8_t _[0x4]; // 0x44 
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x8]; // 0x50 
};

struct StanceInfo_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0x4]; // 0xc 
};

struct IKBoneNameAndIndex_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x10]; // 0x0 
};

struct CPulse_Chunk {
    static constexpr std::size_t size = 0x60;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x10]; // 0x10 
    std::uint8_t _[0x10]; // 0x20 
    std::uint8_t _[0x30]; // 0x30 
};

struct CStanceScaleUpdateNode {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t _[0x8]; // 0x70 
};

struct CPulseBreakpointLocation {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x10]; // 0x8 
    std::uint8_t _[0x10]; // 0x18 
    std::uint8_t _[0x8]; // 0x28 
};

struct PulseRuntimeInvokeIndex_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CNmBoneMaskBlendNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x2]; // 0x12 
    std::uint8_t _[0x4]; // 0x14 
};

struct CNmIDEventNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x8]; // 0x18 
};

struct HitReactFixedSettings_t {
    static constexpr std::size_t size = 0x44;
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
};

struct CNmPoseNode__CDefinition {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct CAnimTagBase {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x18]; // 0x30 
    std::uint8_t _[0x8]; // 0x48 
};

struct CPerParticleVecInput {
    static constexpr std::size_t size = 0x6d8;
    std::uint8_t pad_0[0x6d8]; // 0x0
};

struct CMotionGraph {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x18]; // 0x28 
    std::uint8_t _[0x8]; // 0x40 
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0x4]; // 0x54 
};

struct CNmVectorInfoNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x6]; // 0x12 
};

struct AnimationSnapshot_t {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0x110]; // 0x0
    std::uint8_t _[0x8]; // 0x110 
    std::uint8_t _[0x8]; // 0x118 
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
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
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
    std::uint8_t _[0x8]; // 0x10 
};

struct CAnimGraphDebugReplay {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t _[0x8]; // 0x40 
    std::uint8_t _[0x18]; // 0x48 
    std::uint8_t _[0x4]; // 0x60 
    std::uint8_t _[0x4]; // 0x64 
    std::uint8_t _[0x8]; // 0x68 
};

struct CVectorAnimParameter {
    static constexpr std::size_t size = 0x98;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t _[0xc]; // 0x80 
    std::uint8_t _[0x4]; // 0x8c 
    std::uint8_t _[0x8]; // 0x90 
};

struct CNmCachedPoseReadTask {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x80]; // 0x0
};

struct CNmStateMachineNode__StateDefinition_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t _[0x2]; // 0x0 
    std::uint8_t _[0x6]; // 0x2 
    std::uint8_t _[0x30]; // 0x8 
};

struct CStanceOverrideUpdateNode {
    static constexpr std::size_t size = 0xa0;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t _[0x18]; // 0x70 
    std::uint8_t _[0x10]; // 0x88 
    std::uint8_t _[0x4]; // 0x98 
    std::uint8_t _[0x4]; // 0x9c 
};

struct CNmGraphDefinition__ExternalPoseSlot_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
};

struct PhysShapeMarkup_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x8]; // 0x8 
};

struct CBlend2DInstanceData {
    static constexpr std::size_t size = 0xa0;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x3c]; // 0x8 
    std::uint8_t _[0x4]; // 0x44 
    std::uint8_t _[0x58]; // 0x48 
};

struct LookAtBone_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct CDirectPlaybackInstanceData {
    static constexpr std::size_t size = 0x148;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x10]; // 0x14 
    std::uint8_t _[0xe0]; // 0x24 
    std::uint8_t _[0x4]; // 0x104 
    std::uint8_t _[0x10]; // 0x108 
    std::uint8_t _[0x4]; // 0x118 
    std::uint8_t _[0x4]; // 0x11c 
    std::uint8_t _[0x10]; // 0x120 
    std::uint8_t _[0x8]; // 0x130 
    std::uint8_t _[0x10]; // 0x138 
};

struct CNmTransitionNode__CDefinition {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x2]; // 0x12 
    std::uint8_t _[0x2]; // 0x14 
    std::uint8_t _[0x2]; // 0x16 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x2]; // 0x28 
    std::uint8_t _[0x1]; // 0x2a 
    std::uint8_t _[0x5]; // 0x2b 
};

struct PulseRuntimeRegisterIndex_t {
    static constexpr std::size_t size = 0x2;
    std::uint8_t _[0x2]; // 0x0 
};

struct CNmFloatEaseNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x2]; // 0x18 
    std::uint8_t _[0x1]; // 0x1a 
    std::uint8_t _[0x5]; // 0x1b 
};

struct CAnimationGraphInstance {
    static constexpr std::size_t size = 0x340;
    std::uint8_t pad_0[0x329]; // 0x0
    std::uint8_t _[0x17]; // 0x329 
};

struct CAnimEncodeDifference {
    static constexpr std::size_t size = 0xa8;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x18]; // 0x18 
    std::uint8_t _[0x18]; // 0x30 
    std::uint8_t _[0x18]; // 0x48 
    std::uint8_t _[0x18]; // 0x60 
    std::uint8_t _[0x18]; // 0x78 
    std::uint8_t _[0x18]; // 0x90 
};

struct CRootUpdateNode {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x70]; // 0x0
};

struct CNmTargetOffsetNode__CDefinition {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0xe]; // 0x12 
    std::uint8_t _[0x10]; // 0x20 
    std::uint8_t _[0x10]; // 0x30 
};

struct MotionMatchingInstanceData {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0x2c]; // 0x0
    std::uint8_t _[0x58]; // 0x2c 
    std::uint8_t _[0x9c]; // 0x84 
};

struct CMotionGraphUpdateNode {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x58]; // 0x0
    std::uint8_t _[0x10]; // 0x58 
};

struct CNmFloatAngleMathNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x6]; // 0x12 
};

struct PulseCursorID_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CAnimParamHandle {
    static constexpr std::size_t size = 0x2;
    std::uint8_t _[0x1]; // 0x0 
    std::uint8_t _[0x1]; // 0x1 
};

struct WeightList {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x18]; // 0x8 
};

struct MotionIndex {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x2]; // 0x0 
    std::uint8_t _[0x2]; // 0x2 
};

struct FollowAttachmentSettings_t {
    static constexpr std::size_t size = 0x90;
    std::uint8_t _[0x80]; // 0x0 
    std::uint8_t _[0x4]; // 0x80 
    std::uint8_t _[0x1]; // 0x84 
    std::uint8_t _[0x1]; // 0x85 
    std::uint8_t _[0xa]; // 0x86 
};

struct CNmReferencedGraphNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x6]; // 0x12 
};

struct AnimNodeID {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CNmClipSelectorNode__CDefinition {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x18]; // 0x28 
};

struct CLookComponentUpdater {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x34]; // 0x0
    std::uint8_t _[0x2]; // 0x34 
    std::uint8_t _[0x2]; // 0x36 
    std::uint8_t _[0x2]; // 0x38 
    std::uint8_t _[0x2]; // 0x3a 
    std::uint8_t _[0x2]; // 0x3c 
    std::uint8_t _[0x2]; // 0x3e 
    std::uint8_t _[0x2]; // 0x40 
    std::uint8_t _[0x2]; // 0x42 
    std::uint8_t _[0x4]; // 0x44 
};

struct CNmIsExternalPoseSetNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
};

struct CAnimGraphNetworkSettings {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x20]; // 0x0
    std::uint8_t _[0x8]; // 0x20 
};

struct CSingleFrameUpdateNode {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x58]; // 0x0
    std::uint8_t _[0x18]; // 0x58 
    std::uint8_t _[0x4]; // 0x70 
    std::uint8_t _[0x4]; // 0x74 
    std::uint8_t _[0x8]; // 0x78 
};

struct CNmChainLookatNode__CDefinition {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0xc]; // 0x20 
    std::uint8_t _[0xc]; // 0x2c 
    std::uint8_t _[0x2]; // 0x38 
    std::uint8_t _[0x2]; // 0x3a 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x30]; // 0x40 
    std::uint8_t _[0x1]; // 0x70 
    std::uint8_t _[0x7]; // 0x71 
};

struct CNmFollowBoneNode__CDefinition {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x2]; // 0x28 
    std::uint8_t _[0x6]; // 0x2a 
};

struct CBlockSelectionMetricEvaluator {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x50]; // 0x0
};

struct MovementData {
    static constexpr std::size_t size = 0xe8;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0x14]; // 0xc 
    std::uint8_t _[0x14]; // 0x20 
    std::uint8_t _[0xc]; // 0x34 
    std::uint8_t _[0xc]; // 0x40 
    std::uint8_t _[0xc]; // 0x4c 
    std::uint8_t _[0xc]; // 0x58 
    std::uint8_t _[0x4]; // 0x64 
    std::uint8_t _[0xc]; // 0x68 
    std::uint8_t _[0xc]; // 0x74 
    std::uint8_t _[0xc]; // 0x80 
    std::uint8_t _[0xc]; // 0x8c 
    std::uint8_t _[0xc]; // 0x98 
    std::uint8_t _[0xc]; // 0xa4 
    std::uint8_t _[0xc]; // 0xb0 
    std::uint8_t _[0xc]; // 0xbc 
    std::uint8_t _[0x14]; // 0xc8 
    std::uint8_t _[0xc]; // 0xdc 
};

struct CRemapValueComponentUpdater {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x18]; // 0x30 
};

struct CModelConfigList {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x1]; // 0x0 
    std::uint8_t _[0x7]; // 0x1 
    std::uint8_t _[0x18]; // 0x8 
};

struct CSeqAutoLayerFlag {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x1]; // 0x0 
    std::uint8_t _[0x1]; // 0x1 
    std::uint8_t _[0x1]; // 0x2 
    std::uint8_t _[0x1]; // 0x3 
    std::uint8_t _[0x1]; // 0x4 
    std::uint8_t _[0x1]; // 0x5 
    std::uint8_t _[0x1]; // 0x6 
    std::uint8_t _[0x1]; // 0x7 
};

struct AnimStateID {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CNmIDEventConditionNode__CDefinition {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x40]; // 0x18 
};

struct ModelBoneFlexDriver_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x18]; // 0x10 
};

struct CMorphData {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x18]; // 0x8 
};

struct CFootPinningUpdateNode {
    static constexpr std::size_t size = 0xd0;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t _[0x30]; // 0x78 
    std::uint8_t _[0x8]; // 0xa8 
    std::uint8_t _[0x18]; // 0xb0 
    std::uint8_t _[0x8]; // 0xc8 
};

struct CSeqPoseSetting {
    static constexpr std::size_t size = 0x40;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x10]; // 0x10 
    std::uint8_t _[0x10]; // 0x20 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x1]; // 0x34 
    std::uint8_t _[0x1]; // 0x35 
    std::uint8_t _[0x2]; // 0x36 
    std::uint8_t _[0x8]; // 0x38 
};

struct PulseGraphExecutionHistoryCursorDesc_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x8]; // 0x28 
};

struct CNmVirtualParameterFloatNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
};

struct CAttachment {
    static constexpr std::size_t size = 0x90;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x18]; // 0x8 
    std::uint8_t _[0x30]; // 0x20 
    std::uint8_t _[0x24]; // 0x50 
    std::uint8_t _[0xc]; // 0x74 
    std::uint8_t _[0x3]; // 0x80 
    std::uint8_t _[0x1]; // 0x83 
    std::uint8_t _[0xc]; // 0x84 
};

struct CSequenceUpdateNodeBase {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x6c]; // 0x0
    std::uint8_t _[0x4]; // 0x6c 
    std::uint8_t _[0x8]; // 0x70 
};

struct CDrawCullingData {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x3]; // 0x0 
    std::uint8_t _[0x1]; // 0x3 
};

struct VPhysXJoint_t {
    static constexpr std::size_t size = 0xd0;
    std::uint8_t _[0x2]; // 0x0 
    std::uint8_t _[0x2]; // 0x2 
    std::uint8_t _[0x2]; // 0x4 
    std::uint8_t _[0xa]; // 0x6 
    std::uint8_t _[0x20]; // 0x10 
    std::uint8_t _[0x20]; // 0x30 
    std::uint8_t _[0x1]; // 0x50 
    std::uint8_t _[0x1]; // 0x51 
    std::uint8_t _[0x1]; // 0x52 
    std::uint8_t _[0x1]; // 0x53 
    std::uint8_t _[0x8]; // 0x54 
    std::uint8_t _[0x4]; // 0x5c 
    std::uint8_t _[0xc]; // 0x60 
    std::uint8_t _[0x4]; // 0x6c 
    std::uint8_t _[0x4]; // 0x70 
    std::uint8_t _[0x8]; // 0x74 
    std::uint8_t _[0x4]; // 0x7c 
    std::uint8_t _[0x8]; // 0x80 
    std::uint8_t _[0x4]; // 0x88 
    std::uint8_t _[0xc]; // 0x8c 
    std::uint8_t _[0x4]; // 0x98 
    std::uint8_t _[0x4]; // 0x9c 
    std::uint8_t _[0x4]; // 0xa0 
    std::uint8_t _[0x4]; // 0xa4 
    std::uint8_t _[0x4]; // 0xa8 
    std::uint8_t _[0x4]; // 0xac 
    std::uint8_t _[0x4]; // 0xb0 
    std::uint8_t _[0x4]; // 0xb4 
    std::uint8_t _[0x8]; // 0xb8 
    std::uint8_t _[0x10]; // 0xc0 
};

struct CStateNodeTransitionData {
    static constexpr std::size_t size = 0x1c;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0xc]; // 0x10 
};

struct CTimeRemainingMetricEvaluator {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x50]; // 0x0
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0x4]; // 0x54 
    std::uint8_t _[0x4]; // 0x58 
    std::uint8_t _[0x4]; // 0x5c 
};

struct CParticleInput {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct PulseRuntimeTempVarIndex_t {
    static constexpr std::size_t size = 0x2;
    std::uint8_t _[0x2]; // 0x0 
};

struct CModelConfigElement {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x38]; // 0x10 
};

struct CNmControlParameterVectorNode__CDefinition {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct FootFixedSettings {
    static constexpr std::size_t size = 0x40;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x10]; // 0x10 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
};

struct CNmBoneMaskSwitchNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x2]; // 0x12 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
};

struct CModelConfig {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x18]; // 0x8 
    std::uint8_t _[0x1]; // 0x20 
    std::uint8_t _[0x7]; // 0x21 
};

struct AnimComponentID {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct VPhysXAggregateData_t {
    static constexpr std::size_t size = 0x150;
    std::uint8_t _[0x2]; // 0x0 
    std::uint8_t _[0x2]; // 0x2 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x18]; // 0x8 
    std::uint8_t _[0x18]; // 0x20 
    std::uint8_t _[0x18]; // 0x38 
    std::uint8_t _[0x18]; // 0x50 
    std::uint8_t _[0x18]; // 0x68 
    std::uint8_t _[0x18]; // 0x80 
    std::uint8_t _[0x18]; // 0x98 
    std::uint8_t _[0x18]; // 0xb0 
    std::uint8_t _[0x18]; // 0xc8 
    std::uint8_t _[0x8]; // 0xe0 
    std::uint8_t _[0x18]; // 0xe8 
    std::uint8_t _[0x18]; // 0x100 
    std::uint8_t _[0x18]; // 0x118 
    std::uint8_t _[0x18]; // 0x130 
    std::uint8_t _[0x8]; // 0x148 
};

struct CNmGraphDefinition {
    static constexpr std::size_t size = 0x1b8;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x18]; // 0x30 
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x18]; // 0x50 
    std::uint8_t _[0x18]; // 0x68 
    std::uint8_t _[0x18]; // 0x80 
    std::uint8_t _[0x18]; // 0x98 
    std::uint8_t _[0x18]; // 0xb0 
    std::uint8_t _[0x88]; // 0xc8 
    std::uint8_t _[0x18]; // 0x150 
    std::uint8_t _[0x50]; // 0x168 
};

struct CNmSelectorNode__CDefinition {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x18]; // 0x28 
};

struct CAnimDemoCaptureSettings {
    static constexpr std::size_t size = 0x80;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x8]; // 0x40 
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x18]; // 0x50 
    std::uint8_t _[0x18]; // 0x68 
};

struct IKDemoCaptureSettings_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
};

struct CSeqMultiFetchFlag {
    static constexpr std::size_t size = 0x6;
    std::uint8_t _[0x1]; // 0x0 
    std::uint8_t _[0x1]; // 0x1 
    std::uint8_t _[0x1]; // 0x2 
    std::uint8_t _[0x1]; // 0x3 
    std::uint8_t _[0x1]; // 0x4 
    std::uint8_t _[0x1]; // 0x5 
};

struct PulseRegisterMap_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x10]; // 0x10 
    std::uint8_t _[0x10]; // 0x20 
};

struct VPhysXRange_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct CStopAtGoalUpdateNode {
    static constexpr std::size_t size = 0xa0;
    std::uint8_t pad_0[0x74]; // 0x0
    std::uint8_t _[0x4]; // 0x74 
    std::uint8_t _[0x4]; // 0x78 
    std::uint8_t _[0x4]; // 0x7c 
    std::uint8_t _[0x8]; // 0x80 
    std::uint8_t _[0x18]; // 0x88 
};

struct CNmIDEventPercentageThroughNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x8]; // 0x18 
};

struct CAnimBoneDifference {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x10]; // 0x10 
    std::uint8_t _[0xc]; // 0x20 
    std::uint8_t _[0x1]; // 0x2c 
    std::uint8_t _[0x3]; // 0x2d 
};

struct CNmCachedBoolNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
};

struct CAnimCycle {
    static constexpr std::size_t size = 0x4;
    std::uint8_t pad_0[0x4]; // 0x0
};

struct CActionComponentUpdater {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x18]; // 0x30 
};

struct CDirectionalBlendInstanceData {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x14]; // 0x0 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0xc]; // 0x1c 
    std::uint8_t _[0xc]; // 0x28 
    std::uint8_t _[0xc]; // 0x34 
    std::uint8_t _[0x10]; // 0x40 
};

struct CDampedPathAnimMotorUpdater {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x2c]; // 0x0
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x2]; // 0x34 
    std::uint8_t _[0x2]; // 0x36 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x8]; // 0x40 
};

struct CNmCachedFloatNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
};

struct CNmFloatSwitchNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x2]; // 0x12 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
};

struct CModelConfigElement_SetMaterialGroupOnAttachedModels {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x8]; // 0x48 
};

struct CNmFloatChannelData {
    static constexpr std::size_t size = 0x58;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x18]; // 0x28 
    std::uint8_t _[0x18]; // 0x40 
};

struct CNmEntityAttributeEventBase {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x18]; // 0x20 
};

struct CNmVirtualParameterBoneMaskNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
};

struct SequenceData {
    static constexpr std::size_t size = 0x38;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x34]; // 0x4 
};

struct CPathHelperUpdateNode {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t _[0x4]; // 0x70 
    std::uint8_t _[0x4]; // 0x74 
};

struct MaterialGroup_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x18]; // 0x8 
};

struct CMorphBundleData {
    static constexpr std::size_t size = 0x38;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x18]; // 0x8 
    std::uint8_t _[0x18]; // 0x20 
};

struct CModelConfigElement_UserPick {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x18]; // 0x48 
};

struct CSolveIKTargetHandle_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x2]; // 0x0 
    std::uint8_t _[0x2]; // 0x2 
};

struct CFootAdjustmentUpdateNode {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t _[0x18]; // 0x78 
    std::uint8_t _[0x4]; // 0x90 
    std::uint8_t _[0x4]; // 0x94 
    std::uint8_t _[0x4]; // 0x98 
    std::uint8_t _[0x4]; // 0x9c 
    std::uint8_t _[0x4]; // 0xa0 
    std::uint8_t _[0x4]; // 0xa4 
    std::uint8_t _[0x1]; // 0xa8 
    std::uint8_t _[0x7]; // 0xa9 
};

struct CChoreoUpdateNode {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x78]; // 0x0
};

struct CAimConstraint {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t _[0x10]; // 0x60 
    std::uint8_t _[0x10]; // 0x70 
};

struct CMaterialDrawDescriptor__RigidMeshPart_t {
    static constexpr std::size_t size = 0xc;
    std::uint8_t _[0x2]; // 0x0 
    std::uint8_t _[0x2]; // 0x2 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
};

struct CFootFallAnimTag {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x58]; // 0x0
    std::uint8_t _[0x8]; // 0x58 
};

struct CMaterialDrawDescriptor {
    static constexpr std::size_t size = 0x120;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0xc]; // 0x4 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x1]; // 0x2c 
    std::uint8_t _[0x3]; // 0x2d 
    std::uint8_t _[0x10]; // 0x30 
    std::uint8_t _[0x10]; // 0x40 
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0x4]; // 0x54 
    std::uint8_t _[0x4]; // 0x58 
    std::uint8_t _[0x4]; // 0x5c 
    std::uint8_t _[0x68]; // 0x60 
    std::uint8_t _[0x20]; // 0xc8 
    std::uint8_t _[0x30]; // 0xe8 
    std::uint8_t _[0x8]; // 0x118 
};

struct CNmSkeleton {
    static constexpr std::size_t size = 0x100;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x10]; // 0x8 
    std::uint8_t _[0x18]; // 0x18 
    std::uint8_t _[0x18]; // 0x30 
    std::uint8_t _[0x18]; // 0x48 
    std::uint8_t _[0x4]; // 0x60 
    std::uint8_t _[0x24]; // 0x64 
    std::uint8_t _[0x20]; // 0x88 
    std::uint8_t _[0x10]; // 0xa8 
    std::uint8_t _[0x10]; // 0xb8 
    std::uint8_t _[0x18]; // 0xc8 
    std::uint8_t _[0x18]; // 0xe0 
    std::uint8_t _[0x8]; // 0xf8 
};

struct CStepsRemainingMetricEvaluator {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x50]; // 0x0
    std::uint8_t _[0x18]; // 0x50 
    std::uint8_t _[0x8]; // 0x68 
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
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x8]; // 0x38 
};

struct CBodyGroupSetting {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
};

struct CVectorQuantizer {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
};

struct ParticleNamedValueConfiguration_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x10]; // 0x8 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x8]; // 0x30 
};

struct CNmVectorCreateNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x2]; // 0x12 
    std::uint8_t _[0x2]; // 0x14 
    std::uint8_t _[0x2]; // 0x16 
};

struct CParticleVecInput {
    static constexpr std::size_t size = 0x6d8;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0xc]; // 0x14 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x40]; // 0x28 
    std::uint8_t _[0x4]; // 0x68 
    std::uint8_t _[0x4]; // 0x6c 
    std::uint8_t _[0xc]; // 0x70 
    std::uint8_t _[0x4]; // 0x7c 
    std::uint8_t _[0x4]; // 0x80 
    std::uint8_t _[0xc]; // 0x84 
    std::uint8_t _[0xc]; // 0x90 
    std::uint8_t _[0xc]; // 0x9c 
    std::uint8_t _[0x178]; // 0xa8 
    std::uint8_t _[0x178]; // 0x220 
    std::uint8_t _[0x178]; // 0x398 
    std::uint8_t _[0x178]; // 0x510 
    std::uint8_t _[0x4]; // 0x688 
    std::uint8_t _[0x4]; // 0x68c 
    std::uint8_t _[0xc]; // 0x690 
    std::uint8_t _[0xc]; // 0x69c 
    std::uint8_t _[0x18]; // 0x6a8 
    std::uint8_t _[0xc]; // 0x6c0 
    std::uint8_t _[0xc]; // 0x6cc 
};

struct CNmStateNode__CDefinition {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x20]; // 0x18 
    std::uint8_t _[0x20]; // 0x38 
    std::uint8_t _[0x20]; // 0x58 
    std::uint8_t _[0x18]; // 0x78 
    std::uint8_t _[0x18]; // 0x90 
    std::uint8_t _[0x2]; // 0xa8 
    std::uint8_t _[0x2]; // 0xaa 
    std::uint8_t _[0x2]; // 0xac 
    std::uint8_t _[0x1]; // 0xae 
    std::uint8_t _[0x1]; // 0xaf 
};

struct CNmBoneMaskSelectorNode__CDefinition {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x2]; // 0x12 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x18]; // 0x18 
    std::uint8_t _[0x40]; // 0x30 
    std::uint8_t _[0x8]; // 0x70 
};

struct CNmVirtualParameterVectorNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
};

struct CFootCycleMetricEvaluator {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x50]; // 0x0
    std::uint8_t _[0x18]; // 0x50 
};

struct CNmConstIDNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
};

struct CHitBox {
    static constexpr std::size_t size = 0x70;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0xc]; // 0x18 
    std::uint8_t _[0xc]; // 0x24 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x1]; // 0x3c 
    std::uint8_t _[0x3]; // 0x3d 
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x4]; // 0x44 
    std::uint8_t _[0x28]; // 0x48 
};

struct CNmParameterizedSelectorNode__CDefinition {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x10]; // 0x28 
    std::uint8_t _[0x2]; // 0x38 
    std::uint8_t _[0x1]; // 0x3a 
    std::uint8_t _[0x5]; // 0x3b 
};

struct ModelSkeletonData_t {
    static constexpr std::size_t size = 0xa8;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x18]; // 0x18 
    std::uint8_t _[0x18]; // 0x30 
    std::uint8_t _[0x18]; // 0x48 
    std::uint8_t _[0x18]; // 0x60 
    std::uint8_t _[0x18]; // 0x78 
    std::uint8_t _[0x18]; // 0x90 
};

struct CNmEvent {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x8]; // 0x10 
};

struct NmCompressionSettings_t__QuantizationRange_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct CNmBlendTaskBase {
    static constexpr std::size_t size = 0x100;
    std::uint8_t pad_0[0x100]; // 0x0
};

struct TagSpan_t {
    static constexpr std::size_t size = 0xc;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
};

struct CNmConstTargetNode__CDefinition {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x30]; // 0x10 
};

struct CRemapValueUpdateItem {
    static constexpr std::size_t size = 0x14;
    std::uint8_t _[0x2]; // 0x0 
    std::uint8_t _[0x2]; // 0x2 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
};

struct PermModelDataAnimatedMaterialAttribute_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
};

struct CMotionDataSet {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x8]; // 0x18 
};

struct ParticleAttributeIndex_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CProductQuantizer {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x8]; // 0x18 
};

struct CChoiceUpdateNode {
    static constexpr std::size_t size = 0xc0;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t _[0x18]; // 0x60 
    std::uint8_t _[0x18]; // 0x78 
    std::uint8_t _[0x18]; // 0x90 
    std::uint8_t _[0x4]; // 0xa8 
    std::uint8_t _[0x4]; // 0xac 
    std::uint8_t _[0x4]; // 0xb0 
    std::uint8_t _[0x4]; // 0xb4 
    std::uint8_t _[0x1]; // 0xb8 
    std::uint8_t _[0x1]; // 0xb9 
    std::uint8_t _[0x6]; // 0xba 
};

struct SkeletonAnimCapture_t__Bone_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x20]; // 0x10 
    std::uint8_t _[0x10]; // 0x30 
};

struct CExpressionActionUpdater {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x2]; // 0x18 
    std::uint8_t _[0x2]; // 0x1a 
    std::uint8_t _[0x4]; // 0x1c 
};

struct CNmFloatMathNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x2]; // 0x12 
    std::uint8_t _[0x1]; // 0x14 
    std::uint8_t _[0x1]; // 0x15 
    std::uint8_t _[0x2]; // 0x16 
    std::uint8_t _[0x8]; // 0x18 
};

struct CAnimationGraphVisualizerLine {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t _[0x10]; // 0x40 
    std::uint8_t _[0x10]; // 0x50 
    std::uint8_t _[0x10]; // 0x60 
};

struct CCycleControlUpdateNode {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t _[0x4]; // 0x70 
    std::uint8_t _[0x2]; // 0x74 
    std::uint8_t _[0x2]; // 0x76 
};

struct CNmTargetInfoNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x8]; // 0x18 
};

struct CDampedValueComponentUpdater {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x18]; // 0x30 
};

struct CBaseConstraint {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x20]; // 0x0
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x10]; // 0x28 
    std::uint8_t _[0x10]; // 0x38 
    std::uint8_t _[0x18]; // 0x48 
};

struct CNmControlParameterFloatNode__CDefinition {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct BlendItem_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x10]; // 0x18 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x8]; // 0x2c 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x8]; // 0x38 
};

struct DampedPathMotorInstanceData_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0x18]; // 0xc 
    std::uint8_t _[0x4]; // 0x24 
};

struct CNmIsExternalGraphSlotFilledNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
};

struct CNewParticleEffect {
    static constexpr std::size_t size = 0xd8;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x18]; // 0x28 
    std::uint8_t _[0xc]; // 0x40 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x8]; // 0x50 
    std::uint8_t _[0x18]; // 0x58 
    std::uint8_t _[0x4]; // 0x70 
    std::uint8_t _[0x4]; // 0x74 
    std::uint8_t _[0x4]; // 0x78 
    std::uint8_t _[0xc]; // 0x7c 
    std::uint8_t _[0xc]; // 0x88 
    std::uint8_t _[0x4]; // 0x94 
    std::uint8_t _[0x38]; // 0x98 
    std::uint8_t _[0x8]; // 0xd0 
};

struct CNmClipNode__CDefinition {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x1]; // 0x12 
    std::uint8_t _[0x1]; // 0x13 
    std::uint8_t _[0x2]; // 0x14 
    std::uint8_t _[0x2]; // 0x16 
    std::uint8_t _[0x28]; // 0x18 
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x4]; // 0x44 
};

struct CNmMaterialAttributeEvent {
    static constexpr std::size_t size = 0x130;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x40]; // 0x30 
    std::uint8_t _[0x40]; // 0x70 
    std::uint8_t _[0x40]; // 0xb0 
    std::uint8_t _[0x40]; // 0xf0 
};

struct TagStatus {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct CNmBlend1DNode__CDefinition {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x50]; // 0x30 
};

struct CConcreteAnimParameter {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t _[0x4]; // 0x70 
    std::uint8_t _[0x4]; // 0x74 
    std::uint8_t _[0x1]; // 0x78 
    std::uint8_t _[0x1]; // 0x79 
    std::uint8_t _[0x1]; // 0x7a 
    std::uint8_t _[0x5]; // 0x7b 
};

struct CNmBoneWeightList {
    static constexpr std::size_t size = 0x110;
    std::uint8_t _[0xe0]; // 0x0 
    std::uint8_t _[0x18]; // 0xe0 
    std::uint8_t _[0x18]; // 0xf8 
};

struct CPairedSequenceUpdateNode {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t _[0x10]; // 0x78 
};

struct CModelConfigElement_RandomPick {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x18]; // 0x48 
    std::uint8_t _[0x20]; // 0x60 
};

struct CNmReferencePoseTask {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x70]; // 0x0
};

struct CNmScaleNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x2]; // 0x18 
    std::uint8_t _[0x6]; // 0x1a 
};

struct VPhysXConstraint2_t {
    static constexpr std::size_t size = 0x100;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x2]; // 0x4 
    std::uint8_t _[0x2]; // 0x6 
    std::uint8_t _[0xf8]; // 0x8 
};

struct CConstraintTarget {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x20]; // 0x0
    std::uint8_t _[0x10]; // 0x20 
    std::uint8_t _[0xc]; // 0x30 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x8]; // 0x40 
    std::uint8_t _[0x11]; // 0x48 
    std::uint8_t _[0x7]; // 0x59 
};

struct SkeletonAnimCapture_t {
    static constexpr std::size_t size = 0xc0;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x18]; // 0x8 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x18]; // 0x30 
    std::uint8_t _[0x18]; // 0x48 
    std::uint8_t _[0x4]; // 0x60 
    std::uint8_t _[0x44]; // 0x64 
    std::uint8_t _[0x18]; // 0xa8 
};

struct CAnimUser {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x8]; // 0x10 
};

struct CPulse_TempVarBankDefinition {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x28]; // 0x0 
};

struct CRagdollComponentUpdater {
    static constexpr std::size_t size = 0xd8;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x18]; // 0x30 
    std::uint8_t _[0x18]; // 0x48 
    std::uint8_t _[0x18]; // 0x60 
    std::uint8_t _[0x18]; // 0x78 
    std::uint8_t _[0x18]; // 0x90 
    std::uint8_t _[0x18]; // 0xa8 
    std::uint8_t _[0x4]; // 0xc0 
    std::uint8_t _[0x4]; // 0xc4 
    std::uint8_t _[0x4]; // 0xc8 
    std::uint8_t _[0xc]; // 0xcc 
};

struct ParticleNamedValueSource_t {
    static constexpr std::size_t size = 0x60;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x38]; // 0x28 
};

struct CFootDefinition {
    static constexpr std::size_t size = 0x40;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0xc]; // 0x18 
    std::uint8_t _[0xc]; // 0x24 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
};

struct CSeqSynthAnimDesc {
    static constexpr std::size_t size = 0x40;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0xc]; // 0x10 
    std::uint8_t _[0x8]; // 0x1c 
    std::uint8_t _[0x2]; // 0x24 
    std::uint8_t _[0x2]; // 0x26 
    std::uint8_t _[0x18]; // 0x28 
};

struct CNmLayerBlendNode__LayerDefinition_t {
    static constexpr std::size_t size = 0xc;
    std::uint8_t _[0x2]; // 0x0 
    std::uint8_t _[0x2]; // 0x2 
    std::uint8_t _[0x2]; // 0x4 
    std::uint8_t _[0x2]; // 0x6 
    std::uint8_t _[0x1]; // 0x8 
    std::uint8_t _[0x1]; // 0x9 
    std::uint8_t _[0x1]; // 0xa 
    std::uint8_t _[0x1]; // 0xb 
};

struct CAnimComponentUpdater {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x8]; // 0x28 
};

struct CBlend2DUpdateNode {
    static constexpr std::size_t size = 0xf8;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t _[0x18]; // 0x60 
    std::uint8_t _[0x18]; // 0x78 
    std::uint8_t _[0x18]; // 0x90 
    std::uint8_t _[0x18]; // 0xa8 
    std::uint8_t _[0x18]; // 0xc0 
    std::uint8_t _[0x4]; // 0xd8 
    std::uint8_t _[0x4]; // 0xdc 
    std::uint8_t _[0x4]; // 0xe0 
    std::uint8_t _[0x4]; // 0xe4 
    std::uint8_t _[0x4]; // 0xe8 
    std::uint8_t _[0x4]; // 0xec 
    std::uint8_t _[0x1]; // 0xf0 
    std::uint8_t _[0x1]; // 0xf1 
    std::uint8_t _[0x1]; // 0xf2 
    std::uint8_t _[0x5]; // 0xf3 
};

struct CNmVelocityBasedSpeedScaleNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x20]; // 0x0
};

struct CNPCPhysicsHull {
    static constexpr std::size_t size = 0x40;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0xc]; // 0x14 
    std::uint8_t _[0xc]; // 0x20 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x10]; // 0x30 
};

struct PermModelExtPart_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t _[0x20]; // 0x0 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x10]; // 0x30 
};

struct CNmCachedIDNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
};

struct CLeanMatrixUpdateNode {
    static constexpr std::size_t size = 0xf0;
    std::uint8_t pad_0[0x5c]; // 0x0
    std::uint8_t _[0x24]; // 0x5c 
    std::uint8_t _[0x28]; // 0x80 
    std::uint8_t _[0x18]; // 0xa8 
    std::uint8_t _[0x4]; // 0xc0 
    std::uint8_t _[0x4]; // 0xc4 
    std::uint8_t _[0xc]; // 0xc8 
    std::uint8_t _[0xc]; // 0xd4 
    std::uint8_t _[0x4]; // 0xe0 
    std::uint8_t _[0x4]; // 0xe4 
    std::uint8_t _[0x8]; // 0xe8 
};

struct CSymbolAnimParameter {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t _[0x8]; // 0x80 
};

struct CNmFloatCurveEventNode__CDefinition {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x8]; // 0x20 
};

struct IAnimationGraphInstance {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x18]; // 0x0
};

struct CNmStateMachineNode__TransitionDefinition_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x2]; // 0x0 
    std::uint8_t _[0x2]; // 0x2 
    std::uint8_t _[0x2]; // 0x4 
    std::uint8_t _[0x2]; // 0x6 
};

struct CNmFloatSelectorNode__CDefinition {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x20]; // 0x28 
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x8]; // 0x50 
};

struct CTargetSelectorUpdateNode {
    static constexpr std::size_t size = 0xa0;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t _[0x8]; // 0x60 
    std::uint8_t _[0x1c]; // 0x68 
    std::uint8_t _[0x2]; // 0x84 
    std::uint8_t _[0x2]; // 0x86 
    std::uint8_t _[0x2]; // 0x88 
    std::uint8_t _[0x2]; // 0x8a 
    std::uint8_t _[0x1]; // 0x8c 
    std::uint8_t _[0x1]; // 0x8d 
    std::uint8_t _[0x2]; // 0x8e 
    std::uint8_t _[0x10]; // 0x90 
};

struct SlopeData {
    static constexpr std::size_t size = 0xc;
    std::uint8_t _[0xc]; // 0x0 
};

struct CHitBoxSetList {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x18]; // 0x0 
};

struct CNmIsInactiveBranchConditionNode__CDefinition {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct MotionDBIndex {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CDirectPlaybackTagData {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x18]; // 0x8 
};

struct CParticleCollectionVecInput {
    static constexpr std::size_t size = 0x6d8;
    std::uint8_t pad_0[0x6d8]; // 0x0
};

struct CNmGraphEventConditionNode__Condition_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
};

struct CNmFloatRemapNode__RemapRange_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct CNmCurrentSyncEventIDNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
};

struct CNmStateCompletedConditionNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x2]; // 0x12 
    std::uint8_t _[0x4]; // 0x14 
};

struct CNmCameraFOVEvent {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x40]; // 0x18 
};

struct CNmTargetWarpEvent {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x1]; // 0x18 
    std::uint8_t _[0x7]; // 0x19 
};

struct CParamSpanUpdater {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x18]; // 0x0 
};

struct CAnimActionUpdater {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x18]; // 0x0
};

struct CParticleAnimTag {
    static constexpr std::size_t size = 0x98;
    std::uint8_t pad_0[0x58]; // 0x0
    std::uint8_t _[0x8]; // 0x58 
    std::uint8_t _[0x8]; // 0x60 
    std::uint8_t _[0x8]; // 0x68 
    std::uint8_t _[0x1]; // 0x70 
    std::uint8_t _[0x1]; // 0x71 
    std::uint8_t _[0x1]; // 0x72 
    std::uint8_t _[0x5]; // 0x73 
    std::uint8_t _[0x8]; // 0x78 
    std::uint8_t _[0x8]; // 0x80 
    std::uint8_t _[0x8]; // 0x88 
    std::uint8_t _[0x8]; // 0x90 
};

struct CCycleBase {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct FollowTargetOpFixedSettings_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x1]; // 0xc 
    std::uint8_t _[0x3]; // 0xd 
};

struct CNmIDSwitchNode__CDefinition {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x2]; // 0x12 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
};

struct CNmRootMotionEvent {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x8]; // 0x18 
};

struct CPulse_PublicOutput {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x10]; // 0x18 
};

struct CChoiceInstanceData {
    static constexpr std::size_t size = 0x34;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0xc]; // 0x10 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0xc]; // 0x20 
    std::uint8_t _[0x8]; // 0x2c 
};

struct CNmContactAudioTypeVData {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct CNmCameraDOFEvent {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x40]; // 0x18 
};

struct AnimationSnapshotBase_t {
    static constexpr std::size_t size = 0x110;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x30]; // 0x10 
    std::uint8_t _[0x8]; // 0x40 
    std::uint8_t _[0x18]; // 0x48 
    std::uint8_t _[0x18]; // 0x60 
    std::uint8_t _[0x18]; // 0x78 
    std::uint8_t _[0x4]; // 0x90 
    std::uint8_t _[0x4]; // 0x94 
    std::uint8_t _[0x78]; // 0x98 
};

struct CEmitTagActionUpdater {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
};

struct DynamicMeshDeformParams_t {
    static constexpr std::size_t size = 0xc;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x1]; // 0x8 
    std::uint8_t _[0x1]; // 0x9 
    std::uint8_t _[0x1]; // 0xa 
    std::uint8_t _[0x1]; // 0xb 
};

struct CNmTimeConditionNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x2]; // 0x12 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x1]; // 0x18 
    std::uint8_t _[0x7]; // 0x19 
};

struct CNmSyncEventIndexConditionNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x2]; // 0x12 
    std::uint8_t _[0x4]; // 0x14 
};

struct CAnimStateMachineUpdater {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x18]; // 0x8 
    std::uint8_t _[0x30]; // 0x20 
    std::uint8_t _[0x8]; // 0x50 
};

struct CUnaryUpdateNode {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t _[0x10]; // 0x60 
};

struct CNmIDToFloatNode__CDefinition {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x30]; // 0x18 
    std::uint8_t _[0x20]; // 0x48 
};

struct PlayerInputMotorInstanceData_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0xc]; // 0xc 
    std::uint8_t _[0x10]; // 0x18 
};

struct CSelectorUpdateNode {
    static constexpr std::size_t size = 0xb8;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t _[0x18]; // 0x60 
    std::uint8_t _[0x1c]; // 0x78 
    std::uint8_t _[0x8]; // 0x94 
    std::uint8_t _[0x8]; // 0x9c 
    std::uint8_t _[0x4]; // 0xa4 
    std::uint8_t _[0x4]; // 0xa8 
    std::uint8_t _[0x4]; // 0xac 
    std::uint8_t _[0x1]; // 0xb0 
    std::uint8_t _[0x1]; // 0xb1 
    std::uint8_t _[0x6]; // 0xb2 
};

struct NmPercent_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CStateMachineComponentUpdater {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x58]; // 0x30 
};

struct CAnimUpdateNodeRef {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
};

struct CPulse_OutputConnection {
    static constexpr std::size_t size = 0x40;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x10]; // 0x10 
    std::uint8_t _[0x10]; // 0x20 
    std::uint8_t _[0x10]; // 0x30 
};

struct CPhysSurfaceProperties {
    static constexpr std::size_t size = 0xc8;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0xc]; // 0xc 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x18]; // 0x28 
    std::uint8_t _[0x8]; // 0x40 
    std::uint8_t _[0x60]; // 0x48 
    std::uint8_t _[0x20]; // 0xa8 
};

struct CNmBoneMaskValueNode__CDefinition {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct CSeqPoseParamDesc {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
};

struct CModelConfigElement_SetBodygroup {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x8]; // 0x50 
};

struct CAnimMovement {
    static constexpr std::size_t size = 0x2c;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0xc]; // 0x14 
    std::uint8_t _[0xc]; // 0x20 
};

struct CParticleRemapFloatInput {
    static constexpr std::size_t size = 0x178;
    std::uint8_t pad_0[0x178]; // 0x0
};

struct FollowAttachmentData {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct FootStepTrigger {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
};

struct CNmSyncTrack__EventMarker_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
};

struct CPathMetricEvaluator {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x50]; // 0x0
    std::uint8_t _[0x18]; // 0x50 
    std::uint8_t _[0x4]; // 0x68 
    std::uint8_t _[0x4]; // 0x6c 
    std::uint8_t _[0x8]; // 0x70 
};

struct CFootLockUpdateNode {
    static constexpr std::size_t size = 0x158;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t _[0x70]; // 0x70 
    std::uint8_t _[0x18]; // 0xe0 
    std::uint8_t _[0x18]; // 0xf8 
    std::uint8_t _[0x18]; // 0x110 
    std::uint8_t _[0x4]; // 0x128 
    std::uint8_t _[0x4]; // 0x12c 
    std::uint8_t _[0x4]; // 0x130 
    std::uint8_t _[0x4]; // 0x134 
    std::uint8_t _[0x4]; // 0x138 
    std::uint8_t _[0x4]; // 0x13c 
    std::uint8_t _[0x4]; // 0x140 
    std::uint8_t _[0x4]; // 0x144 
    std::uint8_t _[0x4]; // 0x148 
    std::uint8_t _[0x4]; // 0x14c 
    std::uint8_t _[0x1]; // 0x150 
    std::uint8_t _[0x1]; // 0x151 
    std::uint8_t _[0x1]; // 0x152 
    std::uint8_t _[0x1]; // 0x153 
    std::uint8_t _[0x1]; // 0x154 
    std::uint8_t _[0x3]; // 0x155 
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
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x10]; // 0x10 
};

struct JiggleBoneSettings_t {
    static constexpr std::size_t size = 0x2c;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0xc]; // 0x10 
    std::uint8_t _[0xc]; // 0x1c 
    std::uint8_t _[0x4]; // 0x28 
};

struct CJumpHelperUpdateNode {
    static constexpr std::size_t size = 0xd8;
    std::uint8_t pad_0[0xb0]; // 0x0
    std::uint8_t _[0x4]; // 0xb0 
    std::uint8_t _[0xc]; // 0xb4 
    std::uint8_t _[0x4]; // 0xc0 
    std::uint8_t _[0x4]; // 0xc4 
    std::uint8_t _[0x4]; // 0xc8 
    std::uint8_t _[0x4]; // 0xcc 
    std::uint8_t _[0x3]; // 0xd0 
    std::uint8_t _[0x5]; // 0xd3 
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
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x18]; // 0x18 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x1]; // 0x38 
    std::uint8_t _[0x1]; // 0x39 
    std::uint8_t _[0x1]; // 0x3a 
    std::uint8_t _[0x1]; // 0x3b 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x4]; // 0x44 
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0x4]; // 0x54 
    std::uint8_t _[0x4]; // 0x58 
    std::uint8_t _[0x4]; // 0x5c 
    std::uint8_t _[0x8]; // 0x60 
};

struct CBoneVelocityMetricEvaluator {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x50]; // 0x0
    std::uint8_t _[0x8]; // 0x50 
};

struct CWarpSectionAnimTag {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x50]; // 0x0
    std::uint8_t _[0x1]; // 0x50 
    std::uint8_t _[0x7]; // 0x51 
};

struct SelectorInstanceData_t {
    static constexpr std::size_t size = 0x2c;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0xc]; // 0x8 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x14]; // 0x18 
};

struct CModelConfigElement_RandomColor {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x18]; // 0x48 
};

struct CFootMotion {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
};

struct CJiggleBoneUpdateNode {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t _[0x20]; // 0x70 
};

struct CNmConstVectorNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x10]; // 0x10 
};

struct MoodAnimation_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
};

struct CLODComponentUpdater {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x8]; // 0x30 
};

struct CNmIsTargetSetNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
};

struct CPhysSurfacePropertiesVehicle {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct CAnimDataChannelDesc {
    static constexpr std::size_t size = 0x90;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x10]; // 0x10 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x10]; // 0x28 
    std::uint8_t _[0x10]; // 0x38 
    std::uint8_t _[0x18]; // 0x48 
    std::uint8_t _[0x18]; // 0x60 
    std::uint8_t _[0x18]; // 0x78 
};

struct CPairedSequenceComponentUpdater {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x38]; // 0x0
};

struct CNmParticleEvent {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x1]; // 0x38 
    std::uint8_t _[0x1]; // 0x39 
    std::uint8_t _[0x6]; // 0x3a 
    std::uint8_t _[0x8]; // 0x40 
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x8]; // 0x50 
    std::uint8_t _[0x8]; // 0x58 
    std::uint8_t _[0x8]; // 0x60 
    std::uint8_t _[0x8]; // 0x68 
};

struct MotionSelection {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x24]; // 0x0
    std::uint8_t _[0xc]; // 0x24 
    std::uint8_t _[0xc]; // 0x30 
    std::uint8_t _[0xc]; // 0x3c 
    std::uint8_t _[0xc]; // 0x48 
    std::uint8_t _[0x4]; // 0x54 
};

struct CMorphRectData {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x2]; // 0x0 
    std::uint8_t _[0x2]; // 0x2 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x18]; // 0x10 
};

struct CAnimFoot {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0xc]; // 0x8 
    std::uint8_t _[0xc]; // 0x14 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
};

struct CParentConstraint {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x60]; // 0x0
};

struct CNmCachedVectorNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
};

struct CNmStateNode__TimedEvent_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
};

struct CFootPositionMetricEvaluator {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x50]; // 0x0
    std::uint8_t _[0x18]; // 0x50 
    std::uint8_t _[0x8]; // 0x68 
};

struct CParticleVariableRef {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x38]; // 0x0 
    std::uint8_t _[0x18]; // 0x38 
};

struct CMoverInstanceData {
    static constexpr std::size_t size = 0x2c;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x18]; // 0x4 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0xc]; // 0x20 
};

struct HSequence {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CDampedValueUpdateItem {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x20]; // 0x0 
    std::uint8_t _[0x2]; // 0x20 
    std::uint8_t _[0x6]; // 0x22 
};

struct CAnimLocalHierarchy {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x10]; // 0x10 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
};

struct CBlendUpdateNode {
    static constexpr std::size_t size = 0xe0;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t _[0x18]; // 0x60 
    std::uint8_t _[0x18]; // 0x78 
    std::uint8_t _[0x1c]; // 0x90 
    std::uint8_t _[0x4]; // 0xac 
    std::uint8_t _[0x4]; // 0xb0 
    std::uint8_t _[0x4]; // 0xb4 
    std::uint8_t _[0x18]; // 0xb8 
    std::uint8_t _[0x4]; // 0xd0 
    std::uint8_t _[0x1]; // 0xd4 
    std::uint8_t _[0x1]; // 0xd5 
    std::uint8_t _[0x1]; // 0xd6 
    std::uint8_t _[0x1]; // 0xd7 
    std::uint8_t _[0x8]; // 0xd8 
};

struct PulseGraphExecutionHistoryEntry_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x10]; // 0x8 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x10]; // 0x20 
    std::uint8_t _[0x8]; // 0x30 
};

struct CQuaternionAnimParameter {
    static constexpr std::size_t size = 0xa0;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t _[0x10]; // 0x80 
    std::uint8_t _[0x10]; // 0x90 
};

struct PermModelData_t {
    static constexpr std::size_t size = 0x2f8;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x58]; // 0x8 
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
    std::uint8_t _[0x8]; // 0x180 
    std::uint8_t _[0xa8]; // 0x188 
    std::uint8_t _[0x18]; // 0x230 
    std::uint8_t _[0x18]; // 0x248 
    std::uint8_t _[0x18]; // 0x260 
    std::uint8_t _[0x8]; // 0x278 
    std::uint8_t _[0x18]; // 0x280 
    std::uint8_t _[0x18]; // 0x298 
    std::uint8_t _[0x18]; // 0x2b0 
    std::uint8_t _[0x18]; // 0x2c8 
    std::uint8_t _[0x18]; // 0x2e0 
};

struct PulseCursorYieldToken_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CNmSampleTask {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x80]; // 0x0
};

struct CFollowPathInstanceData {
    static constexpr std::size_t size = 0x24;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0xc]; // 0x10 
    std::uint8_t _[0x8]; // 0x1c 
};

struct CStaticPoseCacheBuilder {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x38]; // 0x0
};

struct ModelMeshBufferData_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x1]; // 0xc 
    std::uint8_t _[0x1]; // 0xd 
    std::uint8_t _[0x1]; // 0xe 
    std::uint8_t _[0x1]; // 0xf 
    std::uint8_t _[0x1]; // 0x10 
    std::uint8_t _[0x1]; // 0x11 
    std::uint8_t _[0x1]; // 0x12 
    std::uint8_t _[0x1]; // 0x13 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x18]; // 0x18 
};

struct CSequenceGroupData {
    static constexpr std::size_t size = 0x138;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x10]; // 0x10 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x18]; // 0x28 
    std::uint8_t _[0x18]; // 0x40 
    std::uint8_t _[0x18]; // 0x58 
    std::uint8_t _[0x18]; // 0x70 
    std::uint8_t _[0x18]; // 0x88 
    std::uint8_t _[0x18]; // 0xa0 
    std::uint8_t _[0x18]; // 0xb8 
    std::uint8_t _[0x18]; // 0xd0 
    std::uint8_t _[0x10]; // 0xe8 
    std::uint8_t _[0x18]; // 0xf8 
    std::uint8_t _[0x10]; // 0x110 
    std::uint8_t _[0x18]; // 0x120 
};

struct CStateMachineUpdateNode {
    static constexpr std::size_t size = 0x100;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t _[0x58]; // 0x70 
    std::uint8_t _[0x18]; // 0xc8 
    std::uint8_t _[0x1c]; // 0xe0 
    std::uint8_t _[0x1]; // 0xfc 
    std::uint8_t _[0x1]; // 0xfd 
    std::uint8_t _[0x2]; // 0xfe 
};

struct CNmIDBasedSelectorNode__CDefinition {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x30]; // 0x28 
    std::uint8_t _[0x2]; // 0x58 
    std::uint8_t _[0x2]; // 0x5a 
    std::uint8_t _[0x4]; // 0x5c 
};

struct CAimMatrixUpdateNode {
    static constexpr std::size_t size = 0x180;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t _[0xf8]; // 0x70 
    std::uint8_t _[0x4]; // 0x168 
    std::uint8_t _[0x4]; // 0x16c 
    std::uint8_t _[0x4]; // 0x170 
    std::uint8_t _[0x1]; // 0x174 
    std::uint8_t _[0xb]; // 0x175 
};

struct SkeletonAnimCapture_t__Frame_t {
    static constexpr std::size_t size = 0xc0;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x1c]; // 0x4 
    std::uint8_t _[0x20]; // 0x20 
    std::uint8_t _[0x8]; // 0x40 
    std::uint8_t _[0x18]; // 0x48 
    std::uint8_t _[0x18]; // 0x60 
    std::uint8_t _[0x18]; // 0x78 
    std::uint8_t _[0x18]; // 0x90 
    std::uint8_t _[0x18]; // 0xa8 
};

struct CModelConfigElement_Command {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x10]; // 0x50 
};

struct TargetSelectorInstanceData_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x1c]; // 0x0 
    std::uint8_t _[0x14]; // 0x1c 
};

struct CAnimEventDefinition {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x10]; // 0x18 
    std::uint8_t _[0x10]; // 0x28 
    std::uint8_t _[0x8]; // 0x38 
};

struct CNmRootMotionData {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x10]; // 0x20 
    std::uint8_t _[0x20]; // 0x30 
};

struct CPulseGraphExecutionHistory {
    static constexpr std::size_t size = 0x78;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x28]; // 0x28 
    std::uint8_t _[0x28]; // 0x50 
};

struct AnimScriptHandle {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CFlexOp {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct CHitReactUpdateNode {
    static constexpr std::size_t size = 0xd0;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t _[0x4c]; // 0x70 
    std::uint8_t _[0x2]; // 0xbc 
    std::uint8_t _[0x2]; // 0xbe 
    std::uint8_t _[0x2]; // 0xc0 
    std::uint8_t _[0x2]; // 0xc2 
    std::uint8_t _[0x4]; // 0xc4 
    std::uint8_t _[0x4]; // 0xc8 
    std::uint8_t _[0x4]; // 0xcc 
};

struct CLookAtUpdateNode {
    static constexpr std::size_t size = 0x160;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t _[0xd8]; // 0x70 
    std::uint8_t _[0x4]; // 0x148 
    std::uint8_t _[0x2]; // 0x14c 
    std::uint8_t _[0x2]; // 0x14e 
    std::uint8_t _[0x1]; // 0x150 
    std::uint8_t _[0xf]; // 0x151 
};

struct CAnimBone {
    static constexpr std::size_t size = 0x48;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0xc]; // 0x14 
    std::uint8_t _[0x10]; // 0x20 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x10]; // 0x34 
    std::uint8_t _[0x4]; // 0x44 
};

struct CAnimParameterManagerUpdater {
    static constexpr std::size_t size = 0x100;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x18]; // 0x18 
    std::uint8_t _[0x20]; // 0x30 
    std::uint8_t _[0x20]; // 0x50 
    std::uint8_t _[0x18]; // 0x70 
    std::uint8_t _[0x18]; // 0x88 
    std::uint8_t _[0x60]; // 0xa0 
};

struct BoneDemoCaptureSettings_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
};

struct PairedSequenceData {
    static constexpr std::size_t size = 0x100;
    std::uint8_t _[0x100]; // 0x0 
};

struct CBoneConstraintPoseSpaceMorph__Input_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x18]; // 0x10 
};

struct MoodAnimationLayer_t {
    static constexpr std::size_t size = 0x60;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x1]; // 0x8 
    std::uint8_t _[0x7]; // 0x9 
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x8]; // 0x3c 
    std::uint8_t _[0x8]; // 0x44 
    std::uint8_t _[0x8]; // 0x4c 
    std::uint8_t _[0x4]; // 0x54 
    std::uint8_t _[0x8]; // 0x58 
};

struct CSpeedScaleUpdateNode {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t _[0x8]; // 0x70 
};

struct CSequenceTagSpans {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x18]; // 0x8 
};

struct CModelConfigElement_SetBodygroupOnAttachedModels {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x8]; // 0x50 
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
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x18]; // 0x28 
    std::uint8_t _[0x20]; // 0x40 
    std::uint8_t _[0x20]; // 0x60 
    std::uint8_t _[0x10]; // 0x80 
};

struct CNmTransitionEvent {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
};

struct CNmFloatCurveEvent {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x40]; // 0x20 
};

struct CParticleTransformInput {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x40]; // 0x18 
    std::uint8_t _[0x1]; // 0x58 
    std::uint8_t _[0x1]; // 0x59 
    std::uint8_t _[0x2]; // 0x5a 
    std::uint8_t _[0x4]; // 0x5c 
    std::uint8_t _[0x4]; // 0x60 
    std::uint8_t _[0x4]; // 0x64 
};

struct CPathAnimMotorUpdaterBase {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x20]; // 0x0
    std::uint8_t _[0x8]; // 0x20 
};

struct PGDInstruction_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x2]; // 0x8 
    std::uint8_t _[0x2]; // 0xa 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x2]; // 0x20 
    std::uint8_t _[0x2]; // 0x22 
    std::uint8_t _[0x2]; // 0x24 
    std::uint8_t _[0x12]; // 0x26 
};

struct CNmFootstepEventPercentageThroughNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x2]; // 0x12 
    std::uint8_t _[0x4]; // 0x14 
};

struct AimCameraOpFixedSettings_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x18]; // 0x18 
};

struct SkeletonAnimCapture_t__Camera_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x20]; // 0x0 
    std::uint8_t _[0x10]; // 0x20 
};

struct CNmGraphEventConditionNode__CDefinition {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x68]; // 0x18 
};

struct CFollowAttachmentUpdateNode {
    static constexpr std::size_t size = 0x110;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t _[0xa0]; // 0x70 
};

struct CMovementComponentUpdater {
    static constexpr std::size_t size = 0xb8;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x18]; // 0x30 
    std::uint8_t _[0x20]; // 0x48 
    std::uint8_t _[0x4]; // 0x68 
    std::uint8_t _[0x4]; // 0x6c 
    std::uint8_t _[0x1]; // 0x70 
    std::uint8_t _[0x1]; // 0x71 
    std::uint8_t _[0x1]; // 0x72 
    std::uint8_t _[0x45]; // 0x73 
};

struct CModelConfigElement_SetMaterialGroup {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x8]; // 0x48 
};

struct IParticleEffect {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct CFutureFacingMetricEvaluator {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x50]; // 0x0
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0x4]; // 0x54 
};

struct CNmIDBasedClipSelectorNode__CDefinition {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x30]; // 0x28 
    std::uint8_t _[0x2]; // 0x58 
    std::uint8_t _[0x2]; // 0x5a 
    std::uint8_t _[0x4]; // 0x5c 
};

struct CLeanMatrixInstanceData {
    static constexpr std::size_t size = 0xc;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x8]; // 0x4 
};

struct NmCompressionSettings_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x10]; // 0x20 
    std::uint8_t _[0x10]; // 0x30 
    std::uint8_t _[0x1]; // 0x40 
    std::uint8_t _[0x1]; // 0x41 
    std::uint8_t _[0xe]; // 0x42 
};

struct CPulse_Variable {
    static constexpr std::size_t size = 0x60;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x18]; // 0x18 
    std::uint8_t _[0x14]; // 0x30 
    std::uint8_t _[0x4]; // 0x44 
    std::uint8_t _[0x1]; // 0x48 
    std::uint8_t _[0x3]; // 0x49 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x10]; // 0x50 
};

struct PARTICLE_EHANDLE__ {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CAddUpdateNode {
    static constexpr std::size_t size = 0xa0;
    std::uint8_t pad_0[0x94]; // 0x0
    std::uint8_t _[0x4]; // 0x94 
    std::uint8_t _[0x1]; // 0x98 
    std::uint8_t _[0x1]; // 0x99 
    std::uint8_t _[0x1]; // 0x9a 
    std::uint8_t _[0x5]; // 0x9b 
};

struct CAnimEnum {
    static constexpr std::size_t size = 0x1;
    std::uint8_t _[0x1]; // 0x0 
};

struct CDemoSettingsComponentUpdater {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x80]; // 0x30 
};

struct CAnimDecoder {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
};

struct CNmCachedTargetNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
};

struct CPerParticleFloatInput {
    static constexpr std::size_t size = 0x178;
    std::uint8_t pad_0[0x178]; // 0x0
};

struct CNmConstBoolNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
};

struct CNmBitFlags {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CFootStride {
    static constexpr std::size_t size = 0x58;
    std::uint8_t _[0x40]; // 0x0 
    std::uint8_t _[0x18]; // 0x40 
};

struct CSceneObjectData__RTProxyDrawDescriptor_t {
    static constexpr std::size_t size = 0x168;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x120]; // 0x8 
    std::uint8_t _[0x30]; // 0x128 
    std::uint8_t _[0x1]; // 0x158 
    std::uint8_t _[0x1]; // 0x159 
    std::uint8_t _[0x2]; // 0x15a 
    std::uint8_t _[0x2]; // 0x15c 
    std::uint8_t _[0x1]; // 0x15e 
    std::uint8_t _[0x1]; // 0x15f 
    std::uint8_t _[0x2]; // 0x160 
    std::uint8_t _[0x2]; // 0x162 
    std::uint8_t _[0x4]; // 0x164 
};

struct CNmLegacyEvent {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x30]; // 0x20 
};

struct CStateNodeStateData {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x18]; // 0x0 
};

struct CFootstepLandedAnimTag {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x58]; // 0x0
    std::uint8_t _[0x8]; // 0x58 
    std::uint8_t _[0x8]; // 0x60 
    std::uint8_t _[0x8]; // 0x68 
    std::uint8_t _[0x8]; // 0x70 
    std::uint8_t _[0x8]; // 0x78 
};

struct CEnumAnimParameter {
    static constexpr std::size_t size = 0xd8;
    std::uint8_t pad_0[0x88]; // 0x0
    std::uint8_t _[0x8]; // 0x88 
    std::uint8_t _[0x18]; // 0x90 
    std::uint8_t _[0x30]; // 0xa8 
};

struct CHandshakeAnimTagBase {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x50]; // 0x0
    std::uint8_t _[0x8]; // 0x50 
};

struct AnimTagID {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CWayPointHelperInstanceData {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0xc]; // 0xc 
    std::uint8_t _[0xc]; // 0x18 
    std::uint8_t _[0x4]; // 0x24 
};

struct CAnimFrameSegment {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x10]; // 0x10 
};

struct CSlopeComponentUpdater {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x34]; // 0x0
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x2]; // 0x38 
    std::uint8_t _[0x2]; // 0x3a 
    std::uint8_t _[0x2]; // 0x3c 
    std::uint8_t _[0x2]; // 0x3e 
    std::uint8_t _[0x2]; // 0x40 
    std::uint8_t _[0x6]; // 0x42 
};

struct CAnimInputDamping {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x8]; // 0x10 
};

struct CHitBoxSet {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x8]; // 0x28 
};

struct ChainToSolveData_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0xc]; // 0x4 
    std::uint8_t _[0x28]; // 0x10 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x10]; // 0x40 
};

struct CConstraintSlave {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0xc]; // 0x10 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x28]; // 0x28 
};

struct PulseRuntimeOutputIndex_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CFootCycleDefinition {
    static constexpr std::size_t size = 0x3c;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0xc]; // 0xc 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0xc]; // 0x1c 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
};

struct CVirtualAnimParameter {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t _[0x8]; // 0x70 
    std::uint8_t _[0x8]; // 0x78 
};

struct CMotionMetricEvaluator {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x18]; // 0x18 
    std::uint8_t _[0x18]; // 0x30 
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
};

struct CFutureVelocityMetricEvaluator {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x50]; // 0x0
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0x4]; // 0x54 
    std::uint8_t _[0x4]; // 0x58 
    std::uint8_t _[0x4]; // 0x5c 
};

struct CNmSkeleton__SecondarySkeleton_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
};

struct CAnimUpdateNodeBase {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x30]; // 0x18 
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x8]; // 0x50 
};

struct CSetParameterActionUpdater {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x2]; // 0x18 
    std::uint8_t _[0x16]; // 0x1a 
};

struct CNmFixedWeightBoneMaskNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
};

struct SkeletonAnimCapture_t__FrameStamp_t {
    static constexpr std::size_t size = 0x1c;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x1]; // 0x8 
    std::uint8_t _[0x3]; // 0x9 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
};

struct CPulse_DomainValue {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x20]; // 0x10 
};

struct CBonePositionMetricEvaluator {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x50]; // 0x0
    std::uint8_t _[0x8]; // 0x50 
};

struct CRenderBufferBinding {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x10]; // 0x10 
};

struct CParticleCollectionRendererFloatInput {
    static constexpr std::size_t size = 0x178;
    std::uint8_t pad_0[0x178]; // 0x0
};

struct CNmParameterizedBlendNode__Parameterization_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x48]; // 0x0 
    std::uint8_t _[0x8]; // 0x48 
};

struct CNmEntityAttributeIntEvent {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x38]; // 0x0
    std::uint8_t _[0x8]; // 0x38 
};

struct CNmNotNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
};

struct CMeshletDescriptor {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x1]; // 0x14 
    std::uint8_t _[0x1]; // 0x15 
    std::uint8_t _[0x2]; // 0x16 
};

struct CMorphSetData {
    static constexpr std::size_t size = 0x98;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x18]; // 0x18 
    std::uint8_t _[0x18]; // 0x30 
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x18]; // 0x50 
    std::uint8_t _[0x18]; // 0x68 
    std::uint8_t _[0x18]; // 0x80 
};

struct CNmAndNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x10]; // 0x10 
};

struct CMorphConstraint {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t _[0x8]; // 0x60 
    std::uint8_t _[0x4]; // 0x68 
    std::uint8_t _[0x4]; // 0x6c 
    std::uint8_t _[0x10]; // 0x70 
};

struct CClothSettingsAnimTag {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x58]; // 0x0
    std::uint8_t _[0x4]; // 0x58 
    std::uint8_t _[0x4]; // 0x5c 
    std::uint8_t _[0x8]; // 0x60 
    std::uint8_t _[0x8]; // 0x68 
};

struct CAnimDesc_Flag {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x1]; // 0x0 
    std::uint8_t _[0x1]; // 0x1 
    std::uint8_t _[0x1]; // 0x2 
    std::uint8_t _[0x1]; // 0x3 
    std::uint8_t _[0x1]; // 0x4 
    std::uint8_t _[0x1]; // 0x5 
    std::uint8_t _[0x1]; // 0x6 
    std::uint8_t _[0x1]; // 0x7 
};

struct CNmBlend2DNode__CDefinition {
    static constexpr std::size_t size = 0xc8;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x58]; // 0x28 
    std::uint8_t _[0x28]; // 0x80 
    std::uint8_t _[0x18]; // 0xa8 
    std::uint8_t _[0x2]; // 0xc0 
    std::uint8_t _[0x2]; // 0xc2 
    std::uint8_t _[0x4]; // 0xc4 
};

struct CNmFloatChannelData__ChannelSettings_t {
    static constexpr std::size_t size = 0xc;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x4]; // 0x8 
};

struct CBlendCurve {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct CNmSkeleton__ContactConfig_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0xc]; // 0xc 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x18]; // 0x20 
};

struct CNmGraphNode__CDefinition {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
};

struct CAnimationGraphVisualizerSphere {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t _[0x10]; // 0x40 
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0xc]; // 0x54 
};

struct CNmClip__ModelSpaceSamplingChainLink_t {
    static constexpr std::size_t size = 0xc;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
};

struct CAnimUserDifference {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x8]; // 0x10 
};

struct CNmDurationScaleNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x20]; // 0x0
};

struct CTransitionUpdateData {
    static constexpr std::size_t size = 0x3;
    std::uint8_t _[0x1]; // 0x0 
    std::uint8_t _[0x2]; // 0x1 
};

struct PulseRuntimeBlackboardReferenceIndex_t {
    static constexpr std::size_t size = 0x2;
    std::uint8_t _[0x2]; // 0x0 
};

struct CNmContactEvent {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0xc]; // 0x28 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x18]; // 0x38 
};

struct CMovementHandshakeAnimTag {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x58]; // 0x0
};

struct CBoneConstraintPoseSpaceBone__Input_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x18]; // 0x10 
};

struct CSeqMultiFetch {
    static constexpr std::size_t size = 0x70;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x18]; // 0x8 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x18]; // 0x30 
    std::uint8_t _[0x18]; // 0x48 
    std::uint8_t _[0x4]; // 0x60 
    std::uint8_t _[0x1]; // 0x64 
    std::uint8_t _[0x3]; // 0x65 
    std::uint8_t _[0x8]; // 0x68 
};

struct CPhysSurfacePropertiesSoundNames {
    static constexpr std::size_t size = 0x60;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x8]; // 0x38 
    std::uint8_t _[0x8]; // 0x40 
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x8]; // 0x50 
    std::uint8_t _[0x8]; // 0x58 
};

struct NmBoneMaskSetDefinition_t {
    static constexpr std::size_t size = 0x128;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x110]; // 0x8 
    std::uint8_t _[0x10]; // 0x118 
};

struct CAudioAnimTag {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x58]; // 0x0
    std::uint8_t _[0x8]; // 0x58 
    std::uint8_t _[0x8]; // 0x60 
    std::uint8_t _[0x4]; // 0x68 
    std::uint8_t _[0x1]; // 0x6c 
    std::uint8_t _[0x1]; // 0x6d 
    std::uint8_t _[0x1]; // 0x6e 
    std::uint8_t _[0x1]; // 0x6f 
};

struct CTurnHelperUpdateNode {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x74]; // 0x0
    std::uint8_t _[0x4]; // 0x74 
    std::uint8_t _[0x4]; // 0x78 
    std::uint8_t _[0x4]; // 0x7c 
    std::uint8_t _[0x4]; // 0x80 
    std::uint8_t _[0x4]; // 0x84 
    std::uint8_t _[0x8]; // 0x88 
};

struct CAnimationGroup {
    static constexpr std::size_t size = 0x148;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x48]; // 0x18 
    std::uint8_t _[0x18]; // 0x60 
    std::uint8_t _[0x18]; // 0x78 
    std::uint8_t _[0x8]; // 0x90 
    std::uint8_t _[0x78]; // 0x98 
    std::uint8_t _[0x18]; // 0x110 
    std::uint8_t _[0x20]; // 0x128 
};

struct CPulse_TempVarInfo {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
};

struct NmContactAudioInfo_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
};

struct NmSyncTrackTime_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct CNmClip {
    static constexpr std::size_t size = 0x200;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x10]; // 0x10 
    std::uint8_t _[0x18]; // 0x20 
    std::uint8_t _[0x40]; // 0x38 
    std::uint8_t _[0x20]; // 0x78 
    std::uint8_t _[0x28]; // 0x98 
    std::uint8_t _[0xb0]; // 0xc0 
    std::uint8_t _[0x50]; // 0x170 
    std::uint8_t _[0x8]; // 0x1c0 
    std::uint8_t _[0x18]; // 0x1c8 
    std::uint8_t _[0x20]; // 0x1e0 
};

struct CToggleComponentActionUpdater {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
};

struct CNmOverlayBlendTask {
    static constexpr std::size_t size = 0x100;
    std::uint8_t pad_0[0x100]; // 0x0
};

struct CNmSpeedScaleBaseNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
};

struct CNmValueNode__CDefinition {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct CAnimationGraphVisualizerPrimitiveBase {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x2c]; // 0xc 
    std::uint8_t _[0x8]; // 0x38 
};

struct CBindPoseUpdateNode {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x60]; // 0x0
};

struct NmSyncTrackTimeRange_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
};

struct CAnimationGraphVisualizerText {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t _[0x10]; // 0x40 
    std::uint8_t _[0x8]; // 0x50 
    std::uint8_t _[0x8]; // 0x58 
};

struct CFootTrajectory {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0xc]; // 0x8 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x8]; // 0x18 
};

struct CMotionMatchingUpdateNode {
    static constexpr std::size_t size = 0x148;
    std::uint8_t pad_0[0x58]; // 0x0
    std::uint8_t _[0x20]; // 0x58 
    std::uint8_t _[0x18]; // 0x78 
    std::uint8_t _[0x50]; // 0x90 
    std::uint8_t _[0x4]; // 0xe0 
    std::uint8_t _[0x4]; // 0xe4 
    std::uint8_t _[0x1]; // 0xe8 
    std::uint8_t _[0x3]; // 0xe9 
    std::uint8_t _[0x8]; // 0xec 
    std::uint8_t _[0x4]; // 0xf4 
    std::uint8_t _[0x4]; // 0xf8 
    std::uint8_t _[0x4]; // 0xfc 
    std::uint8_t _[0x4]; // 0x100 
    std::uint8_t _[0x4]; // 0x104 
    std::uint8_t _[0x1]; // 0x108 
    std::uint8_t _[0x3]; // 0x109 
    std::uint8_t _[0x4]; // 0x10c 
    std::uint8_t _[0x8]; // 0x110 
    std::uint8_t _[0x18]; // 0x118 
    std::uint8_t _[0x4]; // 0x130 
    std::uint8_t _[0x4]; // 0x134 
    std::uint8_t _[0x4]; // 0x138 
    std::uint8_t _[0x4]; // 0x13c 
    std::uint8_t _[0x8]; // 0x140 
};

struct CNmReferencePoseNode__CDefinition {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct CSeqS1SeqDesc {
    static constexpr std::size_t size = 0x120;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x10]; // 0x10 
    std::uint8_t _[0x70]; // 0x20 
    std::uint8_t _[0x8]; // 0x90 
    std::uint8_t _[0x18]; // 0x98 
    std::uint8_t _[0x18]; // 0xb0 
    std::uint8_t _[0x8]; // 0xc8 
    std::uint8_t _[0x10]; // 0xd0 
    std::uint8_t _[0x10]; // 0xe0 
    std::uint8_t _[0x18]; // 0xf0 
    std::uint8_t _[0x18]; // 0x108 
};

struct CFlexController {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
};

struct SkeletonDemoDb_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x18]; // 0x18 
    std::uint8_t _[0x8]; // 0x30 
};

struct CNmFloatRangeComparisonNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x2]; // 0x18 
    std::uint8_t _[0x6]; // 0x1a 
};

struct CMotionNodeSequence {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0x18]; // 0x28 
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x4]; // 0x44 
};

struct CNmTwoBoneIKNode__CDefinition {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x2]; // 0x20 
    std::uint8_t _[0x2]; // 0x22 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x1]; // 0x28 
    std::uint8_t _[0x3]; // 0x29 
    std::uint8_t _[0x4]; // 0x2c 
};

struct CNmGraphInstance {
    static constexpr std::size_t size = 0x3b0;
    std::uint8_t pad_0[0x3b0]; // 0x0
};

struct CFlexDesc {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x8]; // 0x0 
};

struct CRenderMesh {
    static constexpr std::size_t size = 0x238;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0xc0]; // 0x10 
    std::uint8_t _[0x10]; // 0xd0 
    std::uint8_t _[0x118]; // 0xe0 
    std::uint8_t _[0x1]; // 0x1f8 
    std::uint8_t _[0x27]; // 0x1f9 
    std::uint8_t _[0x10]; // 0x220 
    std::uint8_t _[0x8]; // 0x230 
};

struct CAnimSkeleton {
    static constexpr std::size_t size = 0xd0;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x18]; // 0x28 
    std::uint8_t _[0x18]; // 0x40 
    std::uint8_t _[0x18]; // 0x58 
    std::uint8_t _[0x18]; // 0x70 
    std::uint8_t _[0x18]; // 0x88 
    std::uint8_t _[0x18]; // 0xa0 
    std::uint8_t _[0x18]; // 0xb8 
};

struct PulseRuntimeConstantIndex_t {
    static constexpr std::size_t size = 0x2;
    std::uint8_t _[0x2]; // 0x0 
};

struct CFootAdjustmentInstanceData {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0xc]; // 0x0
    std::uint8_t _[0xc]; // 0xc 
    std::uint8_t _[0x24]; // 0x18 
    std::uint8_t _[0xc]; // 0x3c 
};

struct CNmBodyGroupNode__CDefinition {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x30]; // 0x20 
};

struct CNmTimeControlledClipNode__CDefinition {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x2]; // 0x12 
    std::uint8_t _[0x2]; // 0x14 
    std::uint8_t _[0x2]; // 0x16 
    std::uint8_t _[0x28]; // 0x18 
};

struct VPhysics2ShapeDef_t {
    static constexpr std::size_t size = 0x68;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x10]; // 0x10 
    std::uint8_t _[0x10]; // 0x20 
    std::uint8_t _[0x10]; // 0x30 
    std::uint8_t _[0x10]; // 0x40 
    std::uint8_t _[0x18]; // 0x50 
};

struct CNmFloatCurveNode__CDefinition {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x40]; // 0x18 
};

struct CAnimationGraphVisualizerAxis {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t _[0x20]; // 0x40 
    std::uint8_t _[0x10]; // 0x60 
};

struct CTwistConstraint {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t _[0x10]; // 0x60 
    std::uint8_t _[0x10]; // 0x70 
    std::uint8_t _[0x10]; // 0x80 
};

struct PulseDocNodeID_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct ModelBoneFlexDriverControl_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x8]; // 0x18 
};

struct CParticleCollectionFloatInput {
    static constexpr std::size_t size = 0x178;
    std::uint8_t pad_0[0x178]; // 0x0
};

struct CSeqCmdLayer {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x2]; // 0x0 
    std::uint8_t _[0x2]; // 0x2 
    std::uint8_t _[0x2]; // 0x4 
    std::uint8_t _[0x2]; // 0x6 
    std::uint8_t _[0x2]; // 0x8 
    std::uint8_t _[0x2]; // 0xa 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
};

struct FootPinningPoseOpFixedData_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x1]; // 0x28 
    std::uint8_t _[0x7]; // 0x29 
};

struct RenderSkeletonBone_t {
    static constexpr std::size_t size = 0x60;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x30]; // 0x10 
    std::uint8_t _[0x18]; // 0x40 
    std::uint8_t _[0x8]; // 0x58 
};

struct CDistanceRemainingMetricEvaluator {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x50]; // 0x0
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0x4]; // 0x54 
    std::uint8_t _[0x4]; // 0x58 
    std::uint8_t _[0x4]; // 0x5c 
    std::uint8_t _[0x1]; // 0x60 
    std::uint8_t _[0x1]; // 0x61 
    std::uint8_t _[0x6]; // 0x62 
};

struct CDirectPlaybackUpdateNode {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x74]; // 0x0
    std::uint8_t _[0x1]; // 0x74 
    std::uint8_t _[0x3]; // 0x75 
    std::uint8_t _[0x18]; // 0x78 
};

struct CNmIDEvent {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
};

struct CFlexRule {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x18]; // 0x8 
};

struct ScriptInfo_t {
    static constexpr std::size_t size = 0x58;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x18]; // 0x8 
    std::uint8_t _[0x18]; // 0x20 
    std::uint8_t _[0x18]; // 0x38 
    std::uint8_t _[0x8]; // 0x50 
};

struct CBoneConstraintRbf {
    static constexpr std::size_t size = 0xc8;
    std::uint8_t pad_0[0x20]; // 0x0
    std::uint8_t _[0x18]; // 0x20 
    std::uint8_t _[0x90]; // 0x38 
};

struct CNetworkedCycle {
    static constexpr std::size_t size = 0x34;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0xc]; // 0x4 
    std::uint8_t _[0xc]; // 0x10 
    std::uint8_t _[0xc]; // 0x1c 
    std::uint8_t _[0xc]; // 0x28 
};

struct CNmSoundEvent {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x8]; // 0x38 
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x4]; // 0x44 
};

struct CRenderGroom {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x28]; // 0x18 
    std::uint8_t _[0x8]; // 0x40 
    std::uint8_t _[0x30]; // 0x48 
    std::uint8_t _[0x4]; // 0x78 
    std::uint8_t _[0x4]; // 0x7c 
    std::uint8_t _[0x4]; // 0x80 
    std::uint8_t _[0x4]; // 0x84 
    std::uint8_t _[0x4]; // 0x88 
    std::uint8_t _[0x4]; // 0x8c 
    std::uint8_t _[0x4]; // 0x90 
    std::uint8_t _[0x4]; // 0x94 
    std::uint8_t _[0x14]; // 0x98 
    std::uint8_t _[0x4]; // 0xac 
};

struct CNmParameterizedClipSelectorNode__CDefinition {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x10]; // 0x28 
    std::uint8_t _[0x2]; // 0x38 
    std::uint8_t _[0x1]; // 0x3a 
    std::uint8_t _[0x5]; // 0x3b 
};

struct CTiltTwistConstraint {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t _[0x4]; // 0x60 
    std::uint8_t _[0x2c]; // 0x64 
};

struct CNmSpeedScaleNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x20]; // 0x0
};

struct CVPhysXSurfacePropertiesList {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x18]; // 0x0 
};

struct CNmFloatSpringNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x2]; // 0x1c 
    std::uint8_t _[0x2]; // 0x1e 
};

struct RenderHairStrandInfo_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
};

struct CCycleControlClipUpdateNode {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t _[0x1c]; // 0x60 
    std::uint8_t _[0x4]; // 0x7c 
    std::uint8_t _[0x4]; // 0x80 
    std::uint8_t _[0x4]; // 0x84 
    std::uint8_t _[0x2]; // 0x88 
    std::uint8_t _[0x6]; // 0x8a 
};

struct CNmTargetPointNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x6]; // 0x12 
};

struct CNmTargetSelectorNode__CDefinition {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x2]; // 0x30 
    std::uint8_t _[0x1]; // 0x32 
    std::uint8_t _[0x5]; // 0x33 
    std::uint8_t _[0x8]; // 0x38 
};

struct CPulse_RegisterInfo {
    static constexpr std::size_t size = 0x60;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x18]; // 0x8 
    std::uint8_t _[0x38]; // 0x20 
    std::uint8_t _[0x4]; // 0x58 
    std::uint8_t _[0x4]; // 0x5c 
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
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
};

struct LookAtOpFixedSettings_t {
    static constexpr std::size_t size = 0xd0;
    std::uint8_t _[0x80]; // 0x0 
    std::uint8_t _[0x18]; // 0x80 
    std::uint8_t _[0x18]; // 0x98 
    std::uint8_t _[0x4]; // 0xb0 
    std::uint8_t _[0x4]; // 0xb4 
    std::uint8_t _[0x4]; // 0xb8 
    std::uint8_t _[0x4]; // 0xbc 
    std::uint8_t _[0x1]; // 0xc0 
    std::uint8_t _[0x1]; // 0xc1 
    std::uint8_t _[0x1]; // 0xc2 
    std::uint8_t _[0xd]; // 0xc3 
};

struct CRootMotion {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0xc]; // 0x10 
    std::uint8_t _[0xc]; // 0x1c 
};

struct CAnimGraphSettingsManager {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x18]; // 0x18 
};

struct CAnimGraphModelBinding {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x18]; // 0x10 
};

struct CBoneConstraintPoseSpaceBone {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t _[0x28]; // 0x60 
};

struct CNmTwoBoneIKTask {
    static constexpr std::size_t size = 0xf0;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t _[0x4]; // 0x70 
    std::uint8_t _[0xc]; // 0x74 
    std::uint8_t _[0x70]; // 0x80 
};

struct MotionBlendItem {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
};

struct CBoneConstraintPoseSpaceMorph {
    static constexpr std::size_t size = 0xa0;
    std::uint8_t pad_0[0x20]; // 0x0
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x18]; // 0x30 
    std::uint8_t _[0x18]; // 0x48 
    std::uint8_t _[0x40]; // 0x60 
};

struct CFloatAnimParameter {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t _[0x4]; // 0x80 
    std::uint8_t _[0x4]; // 0x84 
    std::uint8_t _[0x4]; // 0x88 
    std::uint8_t _[0x4]; // 0x8c 
};

struct CNmContactAudioActionVData {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct CStateActionUpdater {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
};

struct CPlayerInputAnimMotorUpdater {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x20]; // 0x0
    std::uint8_t _[0x1c]; // 0x20 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x2]; // 0x44 
    std::uint8_t _[0x2]; // 0x46 
    std::uint8_t _[0x8]; // 0x48 
};

struct CRenderSkeleton {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x30]; // 0x0 
    std::uint8_t _[0x18]; // 0x30 
    std::uint8_t _[0x8]; // 0x48 
};

struct CSeqIKLock {
    static constexpr std::size_t size = 0xc;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x2]; // 0x8 
    std::uint8_t _[0x2]; // 0xa 
};

struct CAnimParamHandleMap {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x20]; // 0x0 
};

struct CNmFloatClampNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0xc]; // 0x14 
};

struct PulseRuntimeCellIndex_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CNmExternalPoseNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
};

struct CAnimDesc {
    static constexpr std::size_t size = 0x1d0;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0xd8]; // 0x20 
    std::uint8_t _[0x18]; // 0xf8 
    std::uint8_t _[0x20]; // 0x110 
    std::uint8_t _[0x18]; // 0x130 
    std::uint8_t _[0x18]; // 0x148 
    std::uint8_t _[0x18]; // 0x160 
    std::uint8_t _[0x4]; // 0x178 
    std::uint8_t _[0xc]; // 0x17c 
    std::uint8_t _[0x10]; // 0x188 
    std::uint8_t _[0x18]; // 0x198 
    std::uint8_t _[0x18]; // 0x1b0 
    std::uint8_t _[0x8]; // 0x1c8 
};

struct CNmRootMotionOverrideNode__CDefinition {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x2]; // 0x18 
    std::uint8_t _[0x2]; // 0x1a 
    std::uint8_t _[0x2]; // 0x1c 
    std::uint8_t _[0x2]; // 0x1e 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
};

struct CNmTargetWarpNode__CDefinition {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x2]; // 0x12 
    std::uint8_t _[0x1]; // 0x14 
    std::uint8_t _[0x1]; // 0x15 
    std::uint8_t _[0x2]; // 0x16 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x8]; // 0x30 
};

struct CPhysSurfacePropertiesPhysics {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
};

struct CAnimationGraphVisualizerPie {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t _[0x10]; // 0x40 
    std::uint8_t _[0x10]; // 0x50 
    std::uint8_t _[0x10]; // 0x60 
    std::uint8_t _[0x10]; // 0x70 
};

struct NmFloatCurveCompressionSettings_t {
    static constexpr std::size_t size = 0xc;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x4]; // 0x8 
};

struct CBoneConstraintDotToMorph {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x20]; // 0x0
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x20]; // 0x38 
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
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct ParamSpanSample_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x14]; // 0x0 
    std::uint8_t _[0x4]; // 0x14 
};

struct CNmFollowBoneTask {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x90]; // 0x0
};

struct VPhysXConstraintParams_t {
    static constexpr std::size_t size = 0xf8;
    std::uint8_t _[0x1]; // 0x0 
    std::uint8_t _[0x1]; // 0x1 
    std::uint8_t _[0x1]; // 0x2 
    std::uint8_t _[0x1]; // 0x3 
    std::uint8_t _[0x18]; // 0x4 
    std::uint8_t _[0x20]; // 0x1c 
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
    std::uint8_t _[0x4]; // 0x80 
    std::uint8_t _[0x4]; // 0x84 
    std::uint8_t _[0x4]; // 0x88 
    std::uint8_t _[0x4]; // 0x8c 
    std::uint8_t _[0x4]; // 0x90 
    std::uint8_t _[0xc]; // 0x94 
    std::uint8_t _[0x10]; // 0xa0 
    std::uint8_t _[0xc]; // 0xb0 
    std::uint8_t _[0x4]; // 0xbc 
    std::uint8_t _[0x4]; // 0xc0 
    std::uint8_t _[0x4]; // 0xc4 
    std::uint8_t _[0x4]; // 0xc8 
    std::uint8_t _[0x4]; // 0xcc 
    std::uint8_t _[0x4]; // 0xd0 
    std::uint8_t _[0x4]; // 0xd4 
    std::uint8_t _[0x4]; // 0xd8 
    std::uint8_t _[0x4]; // 0xdc 
    std::uint8_t _[0x4]; // 0xe0 
    std::uint8_t _[0x4]; // 0xe4 
    std::uint8_t _[0x4]; // 0xe8 
    std::uint8_t _[0x4]; // 0xec 
    std::uint8_t _[0x4]; // 0xf0 
    std::uint8_t _[0x4]; // 0xf4 
};

struct CNmFloatComparisonNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x2]; // 0x12 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
};

struct CStateUpdateData {
    static constexpr std::size_t size = 0x48;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x18]; // 0x28 
    std::uint8_t _[0x8]; // 0x40 
};

struct CTurnHelperInstanceData {
    static constexpr std::size_t size = 0xc;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
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
    static constexpr std::size_t size = 0x1c;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0x10]; // 0xc 
};

struct PulseRuntimeTempVarBankIndex_t {
    static constexpr std::size_t size = 0x2;
    std::uint8_t _[0x2]; // 0x0 
};

struct CMoverUpdateNode {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t _[0x18]; // 0x78 
    std::uint8_t _[0x4]; // 0x90 
    std::uint8_t _[0x2]; // 0x94 
    std::uint8_t _[0x2]; // 0x96 
    std::uint8_t _[0x4]; // 0x98 
    std::uint8_t _[0x4]; // 0x9c 
    std::uint8_t _[0x4]; // 0xa0 
    std::uint8_t _[0x1]; // 0xa4 
    std::uint8_t _[0x1]; // 0xa5 
    std::uint8_t _[0x1]; // 0xa6 
    std::uint8_t _[0x1]; // 0xa7 
    std::uint8_t _[0x8]; // 0xa8 
};

struct CNmLayerBlendNode__CDefinition {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x6]; // 0x12 
    std::uint8_t _[0x30]; // 0x18 
};

struct CNmFootIKNode__CDefinition {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x2]; // 0x28 
    std::uint8_t _[0x2]; // 0x2a 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x1]; // 0x34 
    std::uint8_t _[0x3]; // 0x35 
};

struct CAnimMotorUpdaterBase {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
};

struct JiggleBoneSettingsList_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x18]; // 0x0 
};

struct CSubtractUpdateNode {
    static constexpr std::size_t size = 0xa0;
    std::uint8_t pad_0[0x94]; // 0x0
    std::uint8_t _[0x4]; // 0x94 
    std::uint8_t _[0x1]; // 0x98 
    std::uint8_t _[0x1]; // 0x99 
    std::uint8_t _[0x6]; // 0x9a 
};

struct PulseGraphInstanceID_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CNmFloatRemapNode__CDefinition {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x8]; // 0x14 
    std::uint8_t _[0xc]; // 0x1c 
};

struct CPoseHandle {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x2]; // 0x0 
    std::uint8_t _[0x2]; // 0x2 
};

struct CNmFootstepEventIDNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
};

struct CSolveIKChainUpdateNode {
    static constexpr std::size_t size = 0xa8;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t _[0x18]; // 0x70 
    std::uint8_t _[0x20]; // 0x88 
};

struct CNmOrNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x10]; // 0x10 
};

struct CSeqCmdSeqDesc {
    static constexpr std::size_t size = 0x90;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0xc]; // 0x10 
    std::uint8_t _[0x8]; // 0x1c 
    std::uint8_t _[0x2]; // 0x24 
    std::uint8_t _[0x2]; // 0x26 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x2]; // 0x2c 
    std::uint8_t _[0x2]; // 0x2e 
    std::uint8_t _[0x18]; // 0x30 
    std::uint8_t _[0x18]; // 0x48 
    std::uint8_t _[0x18]; // 0x60 
    std::uint8_t _[0x18]; // 0x78 
};

struct CBoneMaskUpdateNode {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t pad_0[0x94]; // 0x0
    std::uint8_t _[0x4]; // 0x94 
    std::uint8_t _[0x4]; // 0x98 
    std::uint8_t _[0x4]; // 0x9c 
    std::uint8_t _[0x4]; // 0xa0 
    std::uint8_t _[0x4]; // 0xa4 
    std::uint8_t _[0x4]; // 0xa8 
    std::uint8_t _[0x4]; // 0xac 
};

struct CLeafUpdateNode {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x58]; // 0x0
};

struct CPulse_Constant {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x18]; // 0x18 
};

struct CParticleFloatInput {
    static constexpr std::size_t size = 0x178;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x40]; // 0x20 
    std::uint8_t _[0x4]; // 0x60 
    std::uint8_t _[0x4]; // 0x64 
    std::uint8_t _[0x4]; // 0x68 
    std::uint8_t _[0x4]; // 0x6c 
    std::uint8_t _[0x4]; // 0x70 
    std::uint8_t _[0x4]; // 0x74 
    std::uint8_t _[0x4]; // 0x78 
    std::uint8_t _[0x4]; // 0x7c 
    std::uint8_t _[0x4]; // 0x80 
    std::uint8_t _[0xc]; // 0x84 
    std::uint8_t _[0x8]; // 0x90 
    std::uint8_t _[0x4]; // 0x98 
    std::uint8_t _[0x4]; // 0x9c 
    std::uint8_t _[0x4]; // 0xa0 
    std::uint8_t _[0x4]; // 0xa4 
    std::uint8_t _[0x4]; // 0xa8 
    std::uint8_t _[0x4]; // 0xac 
    std::uint8_t _[0x4]; // 0xb0 
    std::uint8_t _[0x4]; // 0xb4 
    std::uint8_t _[0xc]; // 0xb8 
    std::uint8_t _[0x4]; // 0xc4 
    std::uint8_t _[0x4]; // 0xc8 
    std::uint8_t _[0x4]; // 0xcc 
    std::uint8_t _[0x4]; // 0xd0 
    std::uint8_t _[0x4]; // 0xd4 
    std::uint8_t _[0x4]; // 0xd8 
    std::uint8_t _[0x4]; // 0xdc 
    std::uint8_t _[0x4]; // 0xe0 
    std::uint8_t _[0xc]; // 0xe4 
    std::uint8_t _[0x4]; // 0xf0 
    std::uint8_t _[0x4]; // 0xf4 
    std::uint8_t _[0x4]; // 0xf8 
    std::uint8_t _[0x4]; // 0xfc 
    std::uint8_t _[0x4]; // 0x100 
    std::uint8_t _[0x4]; // 0x104 
    std::uint8_t _[0x4]; // 0x108 
    std::uint8_t _[0x4]; // 0x10c 
    std::uint8_t _[0x4]; // 0x110 
    std::uint8_t _[0x4]; // 0x114 
    std::uint8_t _[0x4]; // 0x118 
    std::uint8_t _[0x4]; // 0x11c 
    std::uint8_t _[0x4]; // 0x120 
    std::uint8_t _[0x4]; // 0x124 
    std::uint8_t _[0x8]; // 0x128 
    std::uint8_t _[0x40]; // 0x130 
    std::uint8_t _[0x8]; // 0x170 
};

struct SolveIKChainPoseOpFixedSettings_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x18]; // 0x0 
};

struct CNmEntityAttributeFloatEvent {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x38]; // 0x0
    std::uint8_t _[0x40]; // 0x38 
};

struct CNmIDSelectorNode__CDefinition {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x30]; // 0x28 
    std::uint8_t _[0x8]; // 0x58 
};

struct TwoBoneIKSettings_t {
    static constexpr std::size_t size = 0x160;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x80]; // 0x10 
    std::uint8_t _[0x10]; // 0x90 
    std::uint8_t _[0x80]; // 0xa0 
    std::uint8_t _[0x4]; // 0x120 
    std::uint8_t _[0x2]; // 0x124 
    std::uint8_t _[0x2]; // 0x126 
    std::uint8_t _[0x8]; // 0x128 
    std::uint8_t _[0x10]; // 0x130 
    std::uint8_t _[0x4]; // 0x140 
    std::uint8_t _[0x4]; // 0x144 
    std::uint8_t _[0x4]; // 0x148 
    std::uint8_t _[0x1]; // 0x14c 
    std::uint8_t _[0x3]; // 0x14d 
    std::uint8_t _[0x10]; // 0x150 
};

struct CNmCachedPoseWriteTask {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x80]; // 0x0
};

struct CAnimUpdateSharedData {
    static constexpr std::size_t size = 0x100;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x20]; // 0x28 
    std::uint8_t _[0x18]; // 0x48 
    std::uint8_t _[0x8]; // 0x60 
    std::uint8_t _[0x8]; // 0x68 
    std::uint8_t _[0x8]; // 0x70 
    std::uint8_t _[0x30]; // 0x78 
    std::uint8_t _[0x8]; // 0xa8 
    std::uint8_t _[0x8]; // 0xb0 
    std::uint8_t _[0x48]; // 0xb8 
};

struct CAnimAttachment {
    static constexpr std::size_t size = 0x80;
    std::uint8_t _[0x30]; // 0x0 
    std::uint8_t _[0x30]; // 0x30 
    std::uint8_t _[0xc]; // 0x60 
    std::uint8_t _[0xc]; // 0x6c 
    std::uint8_t _[0x8]; // 0x78 
};

struct CFootTrajectories {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x18]; // 0x0 
};

struct CNmIDComparisonNode__CDefinition {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x6]; // 0x12 
    std::uint8_t _[0x28]; // 0x18 
};

struct PairedSequence_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x10]; // 0x10 
};

struct CEditableMotionGraph {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x58]; // 0x0
};

struct CNmConstFloatNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
};

struct CStringAnimTag {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x50]; // 0x0
};

struct CBoolAnimParameter {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t _[0x8]; // 0x80 
};

struct CRagdollAnimTag {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x58]; // 0x0
    std::uint8_t _[0x8]; // 0x58 
};

struct CMotionNode {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
};

struct CNmStateMachineNode__CDefinition {
    static constexpr std::size_t size = 0x138;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x120]; // 0x10 
    std::uint8_t _[0x8]; // 0x130 
};

struct CBodyGroupAnimTag {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x58]; // 0x0
    std::uint8_t _[0x8]; // 0x58 
    std::uint8_t _[0x18]; // 0x60 
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
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x2]; // 0x12 
    std::uint8_t _[0x1]; // 0x14 
    std::uint8_t _[0x1]; // 0x15 
    std::uint8_t _[0x1]; // 0x16 
    std::uint8_t _[0x1]; // 0x17 
    std::uint8_t _[0x8]; // 0x18 
};

struct AnimParamID {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CNmBoneMaskNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
};

struct ModelAnimGraph2Ref_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
};

struct AnimationDecodeDebugDump_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x18]; // 0x8 
};

struct CNmVirtualParameterIDNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
};

struct CSeqScaleSet {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0xc]; // 0x14 
    std::uint8_t _[0x18]; // 0x20 
    std::uint8_t _[0x18]; // 0x38 
};

struct PulseRuntimeCallInfoIndex_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CDirectionalBlendUpdateNode {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t pad_0[0x5c]; // 0x0
    std::uint8_t _[0x24]; // 0x5c 
    std::uint8_t _[0x18]; // 0x80 
    std::uint8_t _[0x4]; // 0x98 
    std::uint8_t _[0x4]; // 0x9c 
    std::uint8_t _[0x4]; // 0xa0 
    std::uint8_t _[0x4]; // 0xa4 
    std::uint8_t _[0x1]; // 0xa8 
    std::uint8_t _[0x7]; // 0xa9 
};

struct CNmGraphDefinition__ReferencedGraphSlot_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x2]; // 0x0 
    std::uint8_t _[0x2]; // 0x2 
};

struct ParamSpan_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x2]; // 0x18 
    std::uint8_t _[0x2]; // 0x1a 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x8]; // 0x20 
};

struct CFootStepTriggerUpdateNode {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t _[0x1c]; // 0x70 
    std::uint8_t _[0x4]; // 0x8c 
};

struct IKTargetSettings_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x10]; // 0x8 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x8]; // 0x20 
};

struct CModelConfigElement_SetRenderColor {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x8]; // 0x48 
};

struct CNmAdditiveBlendTask {
    static constexpr std::size_t size = 0x100;
    std::uint8_t pad_0[0x100]; // 0x0
};

struct CNmAnimationPoseNode__CDefinition {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x2]; // 0x12 
    std::uint8_t _[0x8]; // 0x14 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x8]; // 0x20 
};

struct CMotionSearchDB {
    static constexpr std::size_t size = 0xb8;
    std::uint8_t _[0x80]; // 0x0 
    std::uint8_t _[0x20]; // 0x80 
    std::uint8_t _[0x18]; // 0xa0 
};

struct CMotionNodeBlend1D {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0x18]; // 0x28 
    std::uint8_t _[0x8]; // 0x40 
};

struct CNmCurrentSyncEventNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x6]; // 0x12 
};

struct CNmControlParameterTargetNode__CDefinition {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct SkeletonBoneBounds_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0xc]; // 0xc 
};

struct CTwoBoneIKUpdateNode {
    static constexpr std::size_t size = 0x1e0;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t _[0x170]; // 0x70 
};

struct VPhysXBodyPart_t {
    static constexpr std::size_t size = 0x98;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x68]; // 0x8 
    std::uint8_t _[0x2]; // 0x70 
    std::uint8_t _[0x2]; // 0x72 
    std::uint8_t _[0x4]; // 0x74 
    std::uint8_t _[0x4]; // 0x78 
    std::uint8_t _[0x4]; // 0x7c 
    std::uint8_t _[0x4]; // 0x80 
    std::uint8_t _[0x4]; // 0x84 
    std::uint8_t _[0x4]; // 0x88 
    std::uint8_t _[0xc]; // 0x8c 
};

struct PulseRuntimeChunkIndex_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CTaskHandshakeAnimTag {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x58]; // 0x0
};

struct CFollowPathUpdateNode {
    static constexpr std::size_t size = 0xb8;
    std::uint8_t pad_0[0x74]; // 0x0
    std::uint8_t _[0x4]; // 0x74 
    std::uint8_t _[0x1]; // 0x78 
    std::uint8_t _[0x1]; // 0x79 
    std::uint8_t _[0x2]; // 0x7a 
    std::uint8_t _[0x4]; // 0x7c 
    std::uint8_t _[0x4]; // 0x80 
    std::uint8_t _[0x4]; // 0x84 
    std::uint8_t _[0x8]; // 0x88 
    std::uint8_t _[0x18]; // 0x90 
    std::uint8_t _[0x4]; // 0xa8 
    std::uint8_t _[0x4]; // 0xac 
    std::uint8_t _[0x4]; // 0xb0 
    std::uint8_t _[0x4]; // 0xb4 
};

struct AimMatrixOpFixedSettings_t {
    static constexpr std::size_t size = 0xf0;
    std::uint8_t _[0x80]; // 0x0 
    std::uint8_t _[0x18]; // 0x80 
    std::uint8_t _[0x28]; // 0x98 
    std::uint8_t _[0x4]; // 0xc0 
    std::uint8_t _[0x4]; // 0xc4 
    std::uint8_t _[0x4]; // 0xc8 
    std::uint8_t _[0x4]; // 0xcc 
    std::uint8_t _[0x4]; // 0xd0 
    std::uint8_t _[0x1]; // 0xd4 
    std::uint8_t _[0x3]; // 0xd5 
    std::uint8_t _[0x4]; // 0xd8 
    std::uint8_t _[0x4]; // 0xdc 
    std::uint8_t _[0x10]; // 0xe0 
};

struct CAnimScriptComponentUpdater {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x8]; // 0x30 
};

struct CRagdollUpdateNode {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t _[0x4]; // 0x70 
    std::uint8_t _[0x4]; // 0x74 
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
    std::uint8_t _[0x8]; // 0x58 
    std::uint8_t _[0x4]; // 0x60 
    std::uint8_t _[0x4]; // 0x64 
    std::uint8_t _[0x8]; // 0x68 
};

struct CNmFootEventConditionNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x2]; // 0x12 
    std::uint8_t _[0x4]; // 0x14 
};

struct CNmFloatChannelSet_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x10]; // 0x8 
};

struct CNmFootEvent {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x8]; // 0x18 
};

struct CPhysSurfacePropertiesAudio {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
};

struct CSeqAutoLayer {
    static constexpr std::size_t size = 0x1c;
    std::uint8_t _[0x2]; // 0x0 
    std::uint8_t _[0x2]; // 0x2 
    std::uint8_t _[0x8]; // 0x4 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
};

struct ModelEmbeddedMesh_t {
    static constexpr std::size_t size = 0x70;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x18]; // 0x20 
    std::uint8_t _[0x18]; // 0x38 
    std::uint8_t _[0x18]; // 0x50 
    std::uint8_t _[0x4]; // 0x68 
    std::uint8_t _[0x4]; // 0x6c 
};

struct PhysSoftbodyDesc_t {
    static constexpr std::size_t size = 0x90;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x18]; // 0x18 
    std::uint8_t _[0x18]; // 0x30 
    std::uint8_t _[0x18]; // 0x48 
    std::uint8_t _[0x18]; // 0x60 
    std::uint8_t _[0x18]; // 0x78 
};

struct CPulseRuntimeMethodArg {
    static constexpr std::size_t size = 0x80;
    std::uint8_t _[0x38]; // 0x0 
    std::uint8_t _[0x8]; // 0x38 
    std::uint8_t _[0x40]; // 0x40 
};

struct CAnimSequenceParams {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct CTargetWarpUpdateNode {
    static constexpr std::size_t size = 0x98;
    std::uint8_t pad_0[0x74]; // 0x0
    std::uint8_t _[0x4]; // 0x74 
    std::uint8_t _[0x2]; // 0x78 
    std::uint8_t _[0x2]; // 0x7a 
    std::uint8_t _[0x2]; // 0x7c 
    std::uint8_t _[0x2]; // 0x7e 
    std::uint8_t _[0x4]; // 0x80 
    std::uint8_t _[0x4]; // 0x84 
    std::uint8_t _[0x4]; // 0x88 
    std::uint8_t _[0x1]; // 0x8c 
    std::uint8_t _[0x1]; // 0x8d 
    std::uint8_t _[0x1]; // 0x8e 
    std::uint8_t _[0x1]; // 0x8f 
    std::uint8_t _[0x4]; // 0x90 
    std::uint8_t _[0x4]; // 0x94 
};

struct CNmVirtualParameterBoolNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
};

struct CFollowTargetUpdateNode {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t _[0x18]; // 0x70 
    std::uint8_t _[0x2]; // 0x88 
    std::uint8_t _[0x6]; // 0x8a 
};

struct PulseRuntimeStateOffset_t {
    static constexpr std::size_t size = 0x2;
    std::uint8_t _[0x2]; // 0x0 
};

struct CCPPScriptComponentUpdater {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x30]; // 0x30 
};

struct NetVarConfigIndex {
    static constexpr std::size_t size = 0xc;
    std::uint8_t _[0xc]; // 0x0 
};

struct CAnimData {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x10]; // 0x10 
    std::uint8_t _[0x18]; // 0x20 
    std::uint8_t _[0x18]; // 0x38 
    std::uint8_t _[0x8]; // 0x50 
    std::uint8_t _[0x18]; // 0x58 
};

struct IKSolverSettings_t {
    static constexpr std::size_t size = 0xc;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
};

struct CBinaryUpdateNode {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t _[0x10]; // 0x60 
    std::uint8_t _[0x10]; // 0x70 
    std::uint8_t _[0x4]; // 0x80 
    std::uint8_t _[0x4]; // 0x84 
    std::uint8_t _[0x1]; // 0x88 
    std::uint8_t _[0x7]; // 0x89 
};

struct CBlendNodeInstanceData {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0xc]; // 0x10 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x10]; // 0x20 
};

struct CNmParameterizedBlendNode__BlendRange_t {
    static constexpr std::size_t size = 0xc;
    std::uint8_t _[0x2]; // 0x0 
    std::uint8_t _[0x2]; // 0x2 
    std::uint8_t _[0x8]; // 0x4 
};

struct CAnimKeyData {
    static constexpr std::size_t size = 0x78;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x18]; // 0x28 
    std::uint8_t _[0x18]; // 0x40 
    std::uint8_t _[0x8]; // 0x58 
    std::uint8_t _[0x18]; // 0x60 
};

struct AttachmentHandle_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t _[0x1]; // 0x0 
};

struct CAnimMorphDifference {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x10]; // 0x0 
};

struct FootFixedData_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x10]; // 0x10 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x10]; // 0x40 
};

struct CMotionGraphGroup {
    static constexpr std::size_t size = 0x108;
    std::uint8_t _[0xb8]; // 0x0 
    std::uint8_t _[0x18]; // 0xb8 
    std::uint8_t _[0x18]; // 0xd0 
    std::uint8_t _[0x18]; // 0xe8 
    std::uint8_t _[0x8]; // 0x100 
};

struct CPulse_InstructionDebug {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x10]; // 0x8 
};

struct CNmVectorNegateNode__CDefinition {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
};

struct CNmSyncTrack__Event_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
};

struct CParticleCollectionRendererVecInput {
    static constexpr std::size_t size = 0x6d8;
    std::uint8_t pad_0[0x6d8]; // 0x0
};

struct CNmTarget {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x20]; // 0x0 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x1]; // 0x28 
    std::uint8_t _[0x1]; // 0x29 
    std::uint8_t _[0x1]; // 0x2a 
    std::uint8_t _[0x5]; // 0x2b 
};

struct CNmControlParameterIDNode__CDefinition {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct CNmBodyGroupEvent {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
};

struct CWayPointHelperUpdateNode {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x74]; // 0x0
    std::uint8_t _[0x4]; // 0x74 
    std::uint8_t _[0x4]; // 0x78 
    std::uint8_t _[0x1]; // 0x7c 
    std::uint8_t _[0x1]; // 0x7d 
    std::uint8_t _[0x2]; // 0x7e 
};

struct CMoodVData {
    static constexpr std::size_t size = 0x100;
    std::uint8_t _[0xe0]; // 0x0 
    std::uint8_t _[0x8]; // 0xe0 
    std::uint8_t _[0x18]; // 0xe8 
};

struct CModelConfigElement_AttachedModel {
    static constexpr std::size_t size = 0xf0;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x8]; // 0x50 
    std::uint8_t _[0x8]; // 0x58 
    std::uint8_t _[0xc]; // 0x60 
    std::uint8_t _[0xc]; // 0x6c 
    std::uint8_t _[0x8]; // 0x78 
    std::uint8_t _[0x8]; // 0x80 
    std::uint8_t _[0x4]; // 0x88 
    std::uint8_t _[0x1]; // 0x8c 
    std::uint8_t _[0x1]; // 0x8d 
    std::uint8_t _[0x2]; // 0x8e 
    std::uint8_t _[0x8]; // 0x90 
    std::uint8_t _[0x8]; // 0x98 
    std::uint8_t _[0x1]; // 0xa0 
    std::uint8_t _[0x4f]; // 0xa1 
};

struct CAnimTagManagerUpdater {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x38]; // 0x0
    std::uint8_t _[0x40]; // 0x38 
};

struct CParticleProperty {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x28]; // 0x0
};

} // namespace