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

namespace Cs2.animationsystem {

    public enum PulseBestOutflowRules_t : int {
        SORT_BY_NUMBER_OF_VALID_CRITERIA = 0, 
        SORT_BY_OUTFLOW_INDEX = 1, 
    }
    public enum PulseCursorCancelPriority_t : int {
        None = 0, 
        CancelOnSucceeded = 1, 
        SoftCancel = 2, 
        HardCancel = 3, 
    }
    public enum PulseMethodCallMode_t : int {
        SYNC_WAIT_FOR_COMPLETION = 0, 
        ASYNC_FIRE_AND_FORGET = 1, 
    }
    public enum PulseCursorWakePriority_t : int {
        WakeElegantly = 0, 
        WakeImmediate = 1, 
    }
    public enum ParticleSetMethod_t : int {
        PARTICLE_SET_REPLACE_VALUE = 0, 
        PARTICLE_SET_SCALE_INITIAL_VALUE = 1, 
        PARTICLE_SET_ADD_TO_INITIAL_VALUE = 2, 
        PARTICLE_SET_RAMP_CURRENT_VALUE = 3, 
        PARTICLE_SET_SCALE_CURRENT_VALUE = 4, 
        PARTICLE_SET_ADD_TO_CURRENT_VALUE = 5, 
    }
    public enum SeqCmd_t : int {
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
    }
    public enum CNmEventRelevance_t : int {
        ClientOnly = 0, 
        ServerOnly = 1, 
        ClientAndServer = 2, 
    }
    public enum BoneTransformSpace_t : int {
        BoneTransformSpace_Invalid = 18446744073709551615, 
        BoneTransformSpace_Parent = 0, 
        BoneTransformSpace_Model = 1, 
        BoneTransformSpace_World = 2, 
    }
    public enum CAnimationGraphVisualizerPrimitiveType : int {
        ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Text = 0, 
        ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Sphere = 1, 
        ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Line = 2, 
        ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Pie = 3, 
        ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Axis = 4, 
    }
    public enum NmTransitionRule_t : int {
        AllowTransition = 0, 
        ConditionallyAllowTransition = 1, 
        BlockTransition = 2, 
    }
    public enum BinaryNodeTiming : int {
        UseChild1 = 0, 
        UseChild2 = 1, 
        SyncChildren = 2, 
    }
    public enum NmFollowBoneMode_t : int {
        RotationAndTranslation = 0, 
        RotationOnly = 1, 
        TranslationOnly = 2, 
    }
    public enum SolveIKChainAnimNodeDebugSetting : int {
        SOLVEIKCHAINANIMNODEDEBUGSETTING_None = 0, 
        SOLVEIKCHAINANIMNODEDEBUGSETTING_X_Axis_Circle = 1, 
        SOLVEIKCHAINANIMNODEDEBUGSETTING_Y_Axis_Circle = 2, 
        SOLVEIKCHAINANIMNODEDEBUGSETTING_Z_Axis_Circle = 3, 
        SOLVEIKCHAINANIMNODEDEBUGSETTING_Forward = 4, 
        SOLVEIKCHAINANIMNODEDEBUGSETTING_Up = 5, 
        SOLVEIKCHAINANIMNODEDEBUGSETTING_Left = 6, 
    }
    public enum CNmParticleEvent__Type_t : int {
        Create = 0, 
        Create_CFG = 1, 
    }
    public enum ParticleFloatBiasType_t : int {
        PF_BIAS_TYPE_INVALID = 18446744073709551615, 
        PF_BIAS_TYPE_STANDARD = 0, 
        PF_BIAS_TYPE_GAIN = 1, 
        PF_BIAS_TYPE_EXPONENTIAL = 2, 
        PF_BIAS_TYPE_COUNT = 3, 
    }
    public enum CNmTargetWarpNode__TargetUpdateRule_t : int {
        None = 0, 
        Recalculate = 1, 
        Offset = 2, 
        RecalculateOrOffset = 3, 
    }
    public enum SharedMovementGait_t : int {
        eInvalid = 18446744073709551615, 
        eSlow = 0, 
        eMedium = 1, 
        eFast = 2, 
        eVeryFast = 3, 
        eCount = 4, 
    }
    public enum OrientationWarpRootMotionSource_t : int {
        eAnimationOrProcedural = 0, 
        eAnimationOnly = 1, 
        eProceduralOnly = 2, 
    }
    public enum PulseVariableKeysSource_t : int {
        PRIVATE = 0, 
        CPP = 1, 
        VMAP = 2, 
        VMDL = 3, 
        XML = 4, 
        VDATA = 5, 
        COUNT = 6, 
    }
    public enum IKTargetCoordinateSystem : int {
        IKTARGETCOORDINATESYSTEM_WorldSpace = 0, 
        IKTARGETCOORDINATESYSTEM_ModelSpace = 1, 
        IKTARGETCOORDINATESYSTEM_COUNT = 2, 
    }
    public enum ParticleFloatType_t : int {
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
    }
    public enum CNmFloatAngleMathNode__Operation_t : int {
        ClampTo180 = 0, 
        ClampTo360 = 1, 
        FlipHemisphere = 2, 
        FlipHemisphereNegate = 3, 
    }
    public enum VPhysXAggregateData_t__VPhysXFlagEnum_t : int {
        FLAG_IS_POLYSOUP_GEOMETRY = 1, 
        FLAG_LEVEL_COLLISION = 16, 
        FLAG_IGNORE_SCALE_OBSOLETE_DO_NOT_USE = 32, 
    }
    public enum CNmRootMotionOverrideNode__OverrideFlags_t : int {
        AllowMoveX = 0, 
        AllowMoveY = 1, 
        AllowMoveZ = 2, 
        AllowFacingPitch = 3, 
        ListenForEvents = 4, 
    }
    public enum NmEasingOperation_t : int {
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
    }
    public enum EIKEndEffectorRotationFixUpMode : int {
        None = 0, 
        MatchTargetOrientation = 1, 
        LookAtTargetForward = 2, 
        MaintainParentOrientation = 3, 
        Count = 4, 
    }
    public enum MatterialAttributeTagType_t : int {
        MATERIAL_ATTRIBUTE_TAG_VALUE = 0, 
        MATERIAL_ATTRIBUTE_TAG_COLOR = 1, 
    }
    public enum PFNoiseTurbulence_t : int {
        PF_NOISE_TURB_NONE = 0, 
        PF_NOISE_TURB_HIGHLIGHT = 1, 
        PF_NOISE_TURB_FEEDBACK = 2, 
        PF_NOISE_TURB_LOOPY = 3, 
        PF_NOISE_TURB_CONTRAST = 4, 
        PF_NOISE_TURB_ALTERNATE = 5, 
    }
    public enum NmTargetWarpAlgorithm_t : int {
        Lerp = 0, 
        Hermite = 1, 
        HermiteFeaturePreserving = 2, 
        Bezier = 3, 
    }
    public enum ParticleColorBlendMode_t : int {
        PARTICLEBLEND_DEFAULT = 0, 
        PARTICLEBLEND_OVERLAY = 1, 
        PARTICLEBLEND_DARKEN = 2, 
        PARTICLEBLEND_LIGHTEN = 3, 
        PARTICLEBLEND_MULTIPLY = 4, 
    }
    public enum ParticleColorBlendType_t : int {
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
    }
    public enum NmTransitionRuleCondition_t : int {
        AnyAllowed = 0, 
        FullyAllowed = 1, 
        ConditionallyAllowed = 2, 
        Blocked = 3, 
    }
    public enum ModelMeshBufferUsage_t : int {
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
    }
    public enum NmGraphDebugMode_t : int {
        Off = 0, 
        On = 1, 
    }
    public enum TargetWarpTimingMethod : int {
        ReachDestinationOnRootMotionEnd = 0, 
        ReachDestinationOnWarpTagEnd = 1, 
    }
    public enum ScriptedMoveTo_t : int {
        eWait = 0, 
        eMoveWithGait = 3, 
        eTeleport = 4, 
        eWaitFacing = 5, 
        eObsoleteBackCompat1 = 1, 
        eObsoleteBackCompat2 = 2, 
    }
    public enum EDemoBoneSelectionMode : int {
        CaptureAllBones = 0, 
        CaptureSelectedBones = 1, 
    }
    public enum PulseDurationStringFormat_t : int {
        MM_SS_LEADING_ZERO = 0, 
    }
    public enum EPulseGraphExecutionHistoryFlag : int {
        NO_FLAGS = 0, 
        CURSOR_ADD_TAG = 1, 
        CURSOR_REMOVE_TAG = 2, 
        CURSOR_RETIRED = 4, 
        CURSOR_CREATE_CHILD = 8, 
        REQUIREMENT_PASS = 16, 
        REQUIREMENT_FAIL = 32, 
        CALL_TO_PULSE = 64, 
        RETURN = 128, 
    }
    public enum StepPhase : int {
        StepPhase_OnGround = 0, 
        StepPhase_InAir = 1, 
    }
    public enum FlexOpCode_t : int {
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
    }
    public enum NmCachedValueMode_t : int {
        OnEntry = 0, 
        OnExit = 1, 
    }
    public enum AnimNodeNetworkMode : int {
        ServerAuthoritative = 0, 
        ClientSimulate = 1, 
    }
    public enum VPhysXBodyPart_t__VPhysXFlagEnum_t : int {
        FLAG_STATIC = 1, 
        FLAG_KINEMATIC = 2, 
        FLAG_JOINT = 4, 
        FLAG_MASS = 8, 
        FLAG_ALWAYS_DYNAMIC_ON_CLIENT = 16, 
        FLAG_DISABLE_CCD = 32, 
    }
    public enum AnimParamType_t : int {
        ANIMPARAM_UNKNOWN = 0, 
        ANIMPARAM_BOOL = 1, 
        ANIMPARAM_ENUM = 2, 
        ANIMPARAM_INT = 3, 
        ANIMPARAM_FLOAT = 4, 
        ANIMPARAM_VECTOR = 5, 
        ANIMPARAM_QUATERNION = 6, 
        ANIMPARAM_GLOBALSYMBOL = 7, 
        ANIMPARAM_COUNT = 8, 
    }
    public enum NmEasingFunction_t : int {
        Linear = 0, 
        Quad = 1, 
        Cubic = 2, 
        Quart = 3, 
        Quint = 4, 
        Sine = 5, 
        Expo = 6, 
        Circ = 7, 
        Back = 8, 
    }
    public enum ParticleModelType_t : int {
        PM_TYPE_INVALID = 0, 
        PM_TYPE_NAMED_VALUE_MODEL = 1, 
        PM_TYPE_NAMED_VALUE_EHANDLE = 2, 
        PM_TYPE_CONTROL_POINT = 3, 
        PM_TYPE_COUNT = 4, 
    }
    public enum IKTargetSource : int {
        IKTARGETSOURCE_Bone = 0, 
        IKTARGETSOURCE_AnimgraphParameter = 1, 
        IKTARGETSOURCE_COUNT = 2, 
    }
    public enum PermModelInfo_t__FlagEnum : int {
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
    }
    public enum CNmFloatMathNode__Operator_t : int {
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
    }
    public enum CNmSyncEventIndexConditionNode__TriggerMode_t : int {
        ExactlyAtEventIndex = 0, 
        GreaterThanEqualToEventIndex = 1, 
    }
    public enum ParticleFloatRoundType_t : int {
        PF_ROUND_TYPE_INVALID = 18446744073709551615, 
        PF_ROUND_TYPE_NEAREST = 0, 
        PF_ROUND_TYPE_FLOOR = 1, 
        PF_ROUND_TYPE_CEIL = 2, 
        PF_ROUND_TYPE_COUNT = 3, 
    }
    public enum PFNoiseType_t : int {
        PF_NOISE_TYPE_PERLIN = 0, 
        PF_NOISE_TYPE_SIMPLEX = 1, 
        PF_NOISE_TYPE_WORLEY = 2, 
        PF_NOISE_TYPE_CURL = 3, 
    }
    public enum ParticleDirectionNoiseType_t : int {
        PARTICLE_DIR_NOISE_PERLIN = 0, 
        PARTICLE_DIR_NOISE_CURL = 1, 
        PARTICLE_DIR_NOISE_WORLEY_BASIC = 2, 
    }
    public enum AnimParamNetworkSetting : int {
        Auto = 0, 
        AlwaysNetwork = 1, 
        NeverNetwork = 2, 
    }
    public enum MorphFlexControllerRemapType_t : int {
        MORPH_FLEXCONTROLLER_REMAP_PASSTHRU = 0, 
        MORPH_FLEXCONTROLLER_REMAP_2WAY = 1, 
        MORPH_FLEXCONTROLLER_REMAP_NWAY = 2, 
        MORPH_FLEXCONTROLLER_REMAP_EYELID = 3, 
    }
    public enum MeshDrawPrimitiveFlags_t : int {
        MESH_DRAW_FLAGS_NONE = 0, 
        MESH_DRAW_FLAGS_USE_SHADOW_FAST_PATH = 1, 
        MESH_DRAW_FLAGS_USE_COMPRESSED_NORMAL_TANGENT = 2, 
        MESH_DRAW_INPUT_LAYOUT_IS_NOT_MATCHED_TO_MATERIAL = 8, 
        MESH_DRAW_FLAGS_USE_COMPRESSED_PER_VERTEX_LIGHTING = 16, 
        MESH_DRAW_FLAGS_USE_UNCOMPRESSED_PER_VERTEX_LIGHTING = 32, 
        MESH_DRAW_FLAGS_CAN_BATCH_WITH_DYNAMIC_SHADER_CONSTANTS = 64, 
        MESH_DRAW_FLAGS_DRAW_LAST = 128, 
    }
    public enum TargetWarpAngleMode_t : int {
        eFacingHeading = 0, 
        eMoveHeading = 1, 
    }
    public enum NmIKBlendMode_t : int {
        Effector = 0, 
        Pose = 1, 
    }
    public enum ModelBoneFlexComponent_t : int {
        MODEL_BONE_FLEX_INVALID = 18446744073709551615, 
        MODEL_BONE_FLEX_TX = 0, 
        MODEL_BONE_FLEX_TY = 1, 
        MODEL_BONE_FLEX_TZ = 2, 
    }
    public enum CNmStateNode__TimedEvent_t__Comparison_t : int {
        LessThanEqual = 0, 
        GreaterThanEqual = 1, 
    }
    public enum PoseType_t : int {
        POSETYPE_STATIC = 0, 
        POSETYPE_DYNAMIC = 1, 
        POSETYPE_INVALID = 255, 
    }
    public enum CNmClothEvent__Type_t : int {
        Stiffen = 0, 
        Effect = 1, 
    }
    public enum CNmRootMotionData__SamplingMode_t : int {
        Delta = 0, 
        WorldSpace = 1, 
    }
    public enum NmEventConditionRules_t : int {
        LimitSearchToSourceState = 0, 
        IgnoreInactiveEvents = 1, 
        PreferHighestWeight = 2, 
        PreferHighestProgress = 3, 
        OperatorOr = 4, 
        OperatorAnd = 5, 
        SearchOnlyGraphEvents = 6, 
        SearchOnlyAnimEvents = 7, 
        SearchBothGraphAndAnimEvents = 8, 
    }
    public enum AnimationType_t : int {
        ANIMATION_TYPE_FIXED_RATE = 0, 
        ANIMATION_TYPE_FIT_LIFETIME = 1, 
        ANIMATION_TYPE_MANUAL_FRAMES = 2, 
    }
    public enum AnimValueSource : int {
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
    }
    public enum CNmTimeConditionNode__Operator_t : int {
        LessThan = 0, 
        LessThanEqual = 1, 
        GreaterThan = 2, 
        GreaterThanEqual = 3, 
    }
    public enum LinearRootMotionBlendMode_t : int {
        LERP = 0, 
        NLERP = 1, 
        SLERP = 2, 
    }
    public enum RagdollPoseControl : int {
        Absolute = 0, 
    }
    public enum IKSolverType : int {
        IKSOLVER_Perlin = 0, 
        IKSOLVER_TwoBone = 1, 
        IKSOLVER_Fabrik = 2, 
        IKSOLVER_DogLeg3Bone = 3, 
        IKSOLVER_CCD = 4, 
        IKSOLVER_COUNT = 5, 
    }
    public enum TargetWarpCorrectionMethod : int {
        ScaleMotion = 0, 
        AddCorrectionDelta = 1, 
    }
    public enum TargetSelectorAngleMode_t : int {
        eFacingHeading = 0, 
        eMoveHeading = 1, 
    }
    public enum Blend2DMode : int {
        Blend2DMode_General = 0, 
        Blend2DMode_Directional = 1, 
    }
    public enum HandshakeTagState_t : int {
        eInactive = 0, 
        eActive = 1, 
        eMomentarilyInactive = 2, 
    }
    public enum ChoiceChangeMethod : int {
        OnReset = 0, 
        OnCycleEnd = 1, 
        OnResetOrCycleEnd = 2, 
    }
    public enum ChoiceBlendMethod : int {
        SingleBlendTime = 0, 
        PerChoiceBlendTimes = 1, 
    }
    public enum VPhysXConstraintParams_t__EnumFlags0_t : int {
        FLAG0_SHIFT_INTERPENETRATE = 0, 
        FLAG0_SHIFT_CONSTRAIN = 1, 
        FLAG0_SHIFT_BREAKABLE_FORCE = 2, 
        FLAG0_SHIFT_BREAKABLE_TORQUE = 3, 
    }
    public enum ParticleFloatMapType_t : int {
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
    }
    public enum AnimParamVectorType_t : int {
        ANIMPARAM_VECTOR_TYPE_NONE = 0, 
        ANIMPARAM_VECTOR_TYPE_POSITION_WS = 1, 
        ANIMPARAM_VECTOR_TYPE_POSITION_LS = 2, 
        ANIMPARAM_VECTOR_TYPE_DIRECTION_WS = 3, 
        ANIMPARAM_VECTOR_TYPE_DIRECTION_LS = 4, 
    }
    public enum CNmCurrentSyncEventNode__InfoType_t : int {
        IndexAndPercentage = 0, 
        IndexOnly = 1, 
        PercentageOnly = 2, 
    }
    public enum BlendKeyType : int {
        BlendKey_UserValue = 0, 
        BlendKey_Velocity = 1, 
        BlendKey_Distance = 2, 
        BlendKey_RemainingDistance = 3, 
    }
    public enum StateActionBehavior : int {
        STATETAGBEHAVIOR_ACTIVE_WHILE_CURRENT = 0, 
        STATETAGBEHAVIOR_FIRE_ON_ENTER = 1, 
        STATETAGBEHAVIOR_FIRE_ON_EXIT = 2, 
        STATETAGBEHAVIOR_FIRE_ON_ENTER_AND_EXIT = 3, 
        STATETAGBEHAVIOR_ACTIVE_WHILE_FULLY_BLENDED = 4, 
    }
    public enum NmRootMotionBlendMode_t : int {
        Blend = 0, 
        Additive = 1, 
        IgnoreSource = 2, 
        IgnoreTarget = 3, 
    }
    public enum NmFootPhaseCondition_t : int {
        LeftFootDown = 0, 
        LeftFootPassing = 1, 
        LeftPhase = 4, 
        RightFootDown = 2, 
        RightFootPassing = 3, 
        RightPhase = 5, 
        None = 6, 
    }
    public enum ModelSkeletonData_t__BoneFlags_t : int {
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
    }
    public enum CNmOrientationWarpNode__AlignmentMode_t : int {
        MovementDirection = 0, 
        AnimationEndFacing = 1, 
    }
    public enum GPUParticleCollisionMode_t : int {
        PARTICLE_GPU_COLLISION_MODE_RT = 0, 
        PARTICLE_GPU_COLLISION_MODE_DEPTH = 1, 
        PARTICLE_GPU_COLLISION_MODE_HYBRID = 2, 
    }
    public enum MorphBundleType_t : int {
        MORPH_BUNDLE_TYPE_NONE = 0, 
        MORPH_BUNDLE_TYPE_POSITION_SPEED = 1, 
        MORPH_BUNDLE_TYPE_NORMAL_WRINKLE = 2, 
        MORPH_BUNDLE_TYPE_COUNT = 3, 
    }
    public enum CNmIDComparisonNode__Comparison_t : int {
        Matches = 0, 
        DoesntMatch = 1, 
    }
    public enum NmPoseBlendMode_t : int {
        Overlay = 0, 
        Additive = 1, 
        ModelSpace = 2, 
    }
    public enum ParticleFloatInputMode_t : int {
        PF_INPUT_MODE_INVALID = 18446744073709551615, 
        PF_INPUT_MODE_CLAMPED = 0, 
        PF_INPUT_MODE_LOOPED = 1, 
        PF_INPUT_MODE_COUNT = 2, 
    }
    public enum ResetCycleOption : int {
        Beginning = 0, 
        SameCycleAsSource = 1, 
        InverseSourceCycle = 2, 
        FixedValue = 3, 
        SameTimeAsSource = 4, 
    }
    public enum CNmVectorInfoNode__Info_t : int {
        X = 0, 
        Y = 1, 
        Z = 2, 
        Length = 3, 
        AngleHorizontal = 4, 
        AngleVertical = 5, 
    }
    public enum TagActionStatus : int {
        Inactive = 0, 
        Active = 1, 
        Fired = 2, 
    }
    public enum IKChannelMode : int {
        TwoBone = 0, 
        TwoBone_Translate = 1, 
        OneBone = 2, 
        OneBone_Translate = 3, 
    }
    public enum NmGraphValueType_t : int {
        Unknown = 0, 
        Bool = 1, 
        ID = 2, 
        Float = 3, 
        Vector = 4, 
        Target = 5, 
        BoneMask = 6, 
        Pose = 7, 
        Special = 8, 
    }
    public enum ParticleFloatRandomMode_t : int {
        PF_RANDOM_MODE_INVALID = 18446744073709551615, 
        PF_RANDOM_MODE_CONSTANT = 0, 
        PF_RANDOM_MODE_VARYING = 1, 
        PF_RANDOM_MODE_COUNT = 2, 
    }
    public enum PulseValueType_t : int {
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
    }
    public enum PFNoiseModifier_t : int {
        PF_NOISE_MODIFIER_NONE = 0, 
        PF_NOISE_MODIFIER_LINES = 1, 
        PF_NOISE_MODIFIER_CLUMPS = 2, 
        PF_NOISE_MODIFIER_RINGS = 3, 
    }
    public enum ParticleVecType_t : int {
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
    }
    public enum NmFootPhase_t : int {
        LeftFootDown = 0, 
        RightFootPassing = 1, 
        RightFootDown = 2, 
        LeftFootPassing = 3, 
        None = 4, 
    }
    public enum CNmTargetInfoNode__Info_t : int {
        AngleHorizontal = 0, 
        AngleVertical = 1, 
        Distance = 2, 
        DistanceHorizontalOnly = 3, 
        DistanceVerticalOnly = 4, 
        DeltaOrientationX = 5, 
        DeltaOrientationY = 6, 
        DeltaOrientationZ = 7, 
    }
    public enum FootstepLandedFootSoundType_t : int {
        FOOTSOUND_Left = 0, 
        FOOTSOUND_Right = 1, 
        FOOTSOUND_UseOverrideSound = 2, 
    }
    public enum FootLockSubVisualization : int {
        FOOTLOCKSUBVISUALIZATION_ReachabilityAnalysis = 0, 
        FOOTLOCKSUBVISUALIZATION_IKSolve = 1, 
    }
    public enum CNmSoundEvent__Position_t : int {
        None = 0, 
        World = 1, 
        EntityPos = 2, 
        EntityEyePos = 3, 
        EntityAttachment = 4, 
    }
    public enum FootstepJumpPhase_t : int {
        Unknown = 0, 
        NotJumping = 1, 
        Jumping = 2, 
        Landing = 4, 
    }
    public enum NmFrameSnapEventMode_t : int {
        Floor = 0, 
        Round = 1, 
    }
    public enum FootPinningTimingSource : int {
        FootMotion = 0, 
        Tag = 1, 
        Parameter = 2, 
    }
    public enum DampingSpeedFunction : int {
        NoDamping = 0, 
        Constant = 1, 
        Spring = 2, 
        AsymmetricSpring = 3, 
    }
    public enum PulseApiFeature_t : int {
        AF_NONE = 0, 
        AF_ENTITIES = 1, 
        AF_PANORAMA = 2, 
        AF_PARTICLES = 8, 
        AF_FAKE_ENTITIES = 16, 
        AF_SELECTORS_WITHOUT_REQUIREMENTS = 32, 
    }
    public enum AnimationProcessingType_t : int {
        ANIMATION_PROCESSING_SERVER_SIMULATION = 0, 
        ANIMATION_PROCESSING_CLIENT_SIMULATION = 1, 
        ANIMATION_PROCESSING_CLIENT_PREDICTION = 2, 
        ANIMATION_PROCESSING_CLIENT_INTERPOLATION = 3, 
        ANIMATION_PROCESSING_CLIENT_RENDER = 4, 
        ANIMATION_PROCESSING_MAX = 5, 
    }
    public enum JiggleBoneSimSpace : int {
        SimSpace_Local = 0, 
        SimSpace_Model = 1, 
        SimSpace_World = 2, 
    }
    public enum StanceOverrideMode : int {
        Sequence = 0, 
        Node = 1, 
    }
    public enum IkEndEffectorType : int {
        IkEndEffector_Attachment = 0, 
        IkEndEffector_Bone = 1, 
    }
    public enum AnimScriptType : int {
        ANIMSCRIPT_TYPE_INVALID = 18446744073709551615, 
        ANIMSCRIPT_FUSE_GENERAL = 0, 
        ANIMSCRIPT_FUSE_STATEMACHINE = 1, 
    }
    public enum CNmTimeConditionNode__ComparisonType_t : int {
        PercentageThroughState = 0, 
        PercentageThroughSyncEvent = 1, 
        ElapsedTime = 2, 
    }
    public enum SeqPoseSetting_t : int {
        SEQ_POSE_SETTING_CONSTANT = 0, 
        SEQ_POSE_SETTING_ROTATION = 1, 
        SEQ_POSE_SETTING_POSITION = 2, 
        SEQ_POSE_SETTING_VELOCITY = 3, 
    }
    public enum AnimParamButton_t : int {
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
    }
    public enum SelectorTagBehavior_t : int {
        SelectorTagBehavior_OnWhileCurrent = 0, 
        SelectorTagBehavior_OffWhenFinished = 1, 
        SelectorTagBehavior_OffBeforeFinished = 2, 
    }
    public enum HandshakeTagType_t : int {
        eInvalid = 18446744073709551615, 
        eTask = 0, 
        eMovement = 1, 
        eCount = 2, 
    }
    public enum OrientationWarpTargetOffsetMode_t : int {
        eLiteralValue = 0, 
        eParameter = 1, 
        eAnimationMovementHeading = 2, 
        eAnimationMovementHeadingAtEnd = 3, 
    }
    public enum OrientationWarpMode_t : int {
        eInvalid = 0, 
        eAngle = 1, 
        eWorldPosition = 2, 
    }
    public enum PulseInstructionCode_t : int {
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
    }
    public enum ParticleTransformType_t : int {
        PT_TYPE_INVALID = 0, 
        PT_TYPE_NAMED_VALUE = 1, 
        PT_TYPE_CONTROL_POINT = 2, 
        PT_TYPE_CONTROL_POINT_RANGE = 3, 
        PT_TYPE_COUNT = 4, 
    }
    public enum ParticleAttachment_t : int {
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
    }
    public enum CNmEventTargetEntity_t : int {
        Self = 0, 
        Weapon = 1, 
        HeldItem = 2, 
        Custom = 3, 
    }
    public enum FieldNetworkOption : int {
        Auto = 0, 
        ForceEnable = 1, 
        ForceDisable = 2, 
    }
    public enum NmGraphEventTypeCondition_t : int {
        Entry = 0, 
        FullyInState = 1, 
        Exit = 2, 
        Timed = 3, 
        Generic = 4, 
        Any = 5, 
    }
    public enum CNmTransitionNode__TransitionOptions_t : int {
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
    }
    public enum CNmFloatComparisonNode__Comparison_t : int {
        GreaterThanEqual = 0, 
        LessThanEqual = 1, 
        NearEqual = 2, 
        GreaterThan = 3, 
        LessThan = 4, 
    }
    public enum VPhysXJoint_t__Flags_t : int {
        JOINT_FLAGS_NONE = 0, 
        JOINT_FLAGS_BODY1_FIXED = 1, 
        JOINT_FLAGS_USE_BLOCK_SOLVER = 2, 
    }
    public enum ScriptedHeldWeaponBehavior_t : int {
        eInvalid = 18446744073709551615, 
        eHolster = 0, 
        eDeploy = 1, 
        eDrop = 2, 
    }
    public enum VelocityMetricMode : int {
        DirectionOnly = 0, 
        MagnitudeOnly = 1, 
        DirectionAndMagnitude = 2, 
    }
    public enum FacingMode : int {
        FacingMode_Invalid = 0, 
        FacingMode_Manual = 1, 
        FacingMode_Path = 2, 
        FacingMode_LookTarget = 3, 
        FacingMode_ManualPosition = 4, 
    }
    public enum VertexAlbedoFormat_t : int {
        VERTEX_ALBEDO_NONE = 0, 
        VERTEX_ALBEDO_8888 = 1, 
        VERTEX_ALBEDO_565 = 2, 
    }
    public enum AimMatrixBlendMode : int {
        AimMatrixBlendMode_None = 0, 
        AimMatrixBlendMode_Additive = 1, 
        AimMatrixBlendMode_ModelSpaceAdditive = 2, 
        AimMatrixBlendMode_BoneMask = 3, 
    }
    public enum AnimationSnapshotType_t : int {
        ANIMATION_SNAPSHOT_SERVER_SIMULATION = 0, 
        ANIMATION_SNAPSHOT_CLIENT_SIMULATION = 1, 
        ANIMATION_SNAPSHOT_CLIENT_PREDICTION = 2, 
        ANIMATION_SNAPSHOT_CLIENT_INTERPOLATION = 3, 
        ANIMATION_SNAPSHOT_CLIENT_RENDER = 4, 
        ANIMATION_SNAPSHOT_FINAL_COMPOSITE = 5, 
        ANIMATION_SNAPSHOT_MAX = 6, 
    }
    public enum NmTargetWarpRule_t : int {
        WarpXY = 0, 
        WarpZ = 1, 
        WarpXYZ = 2, 
        RotationOnly = 3, 
        FixedSection = 4, 
    }
    public enum FootFallTagFoot_t : int {
        FOOT1 = 0, 
        FOOT2 = 1, 
        FOOT3 = 2, 
        FOOT4 = 3, 
        FOOT5 = 4, 
        FOOT6 = 5, 
        FOOT7 = 6, 
        FOOT8 = 7, 
    }
    public enum ChoiceMethod : int {
        WeightedRandom = 0, 
        WeightedRandomNoRepeat = 1, 
        Iterate = 2, 
        IterateRandom = 3, 
    }
    public enum AnimVectorSource : int {
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
    }
    public enum IkTargetType : int {
        IkTarget_Attachment = 0, 
        IkTarget_Bone = 1, 
        IkTarget_Parameter_ModelSpace = 2, 
        IkTarget_Parameter_WorldSpace = 3, 
    }
    public enum RenderMeshSlotType_t : int {
        RENDERMESH_SLOT_INVALID = 18446744073709551615, 
        RENDERMESH_SLOT_PER_VERTEX = 0, 
        RENDERMESH_SLOT_PER_INSTANCE = 1, 
    }
    public enum BoneMaskBlendSpace : int {
        BlendSpace_Parent = 0, 
        BlendSpace_Model = 1, 
        BlendSpace_Model_RotationOnly = 2, 
        BlendSpace_Model_TranslationOnly = 3, 
    }
    public enum MovementCapability_t : int {
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
    }
    public enum ModelConfigAttachmentType_t : int {
        MODEL_CONFIG_ATTACHMENT_INVALID = 18446744073709551615, 
        MODEL_CONFIG_ATTACHMENT_BONE_OR_ATTACHMENT = 0, 
        MODEL_CONFIG_ATTACHMENT_ROOT_RELATIVE = 1, 
        MODEL_CONFIG_ATTACHMENT_BONEMERGE = 2, 
        MODEL_CONFIG_ATTACHMENT_COUNT = 3, 
    }
    public enum BinaryNodeChildOption : int {
        Child1 = 0, 
        Child2 = 1, 
    }
    public enum NPCPhysicsHullType_t : int {
        eInvalid = 0, 
        eGroundCapsule = 1, 
        eCenteredCapsule = 2, 
        eGenericCapsule = 3, 
        eGroundBox = 4, 
        eGroundCylinder = 5, 
        eCenteredCylinder = 6, 
    }
    public enum PulseDomainValueType_t : int {
        INVALID = 18446744073709551615, 
        ENTITY_NAME = 0, 
        PANEL_ID = 1, 
        COUNT = 2, 
    }
    public enum JumpCorrectionMethod : int {
        ScaleMotion = 0, 
        AddCorrectionDelta = 1, 
    }
    public enum MoodType_t : int {
        eMoodType_Head = 0, 
        eMoodType_Body = 1, 
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x130)]
    public unsafe struct CPulseCell_WaitForCursorsWithTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x128];
        [FieldOffset(0x128)] public fixed byte m_bTagSelfWhenComplete[0x4];
        [FieldOffset(0x12C)] public fixed byte m_nDesiredKillPriority[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x138)]
    public unsafe struct CPulseCell_RaceCursors {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_Outflows[0x18];
        [FieldOffset(0xF0)] public fixed byte m_OnFinished[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Base {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_nEditorNodeID[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulse_ResumePoint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct CPulseCell_PickBestOutflowSelector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_nCheckType[0x8];
        [FieldOffset(0x50)] public fixed byte m_OutflowList[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA8)]
    public unsafe struct CParticleBindingRealPulse {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1B0)]
    public unsafe struct CPulseCell_WaitForObservable {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_Condition[0x90];
        [FieldOffset(0x168)] public fixed byte m_OnTrue[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulse_OutflowConnection {
        [FieldOffset(0x0)] public fixed byte m_SourceOutflowName[0x10];
        [FieldOffset(0x10)] public fixed byte m_nDestChunk[0x4];
        [FieldOffset(0x14)] public fixed byte m_nInstruction[0x4];
        [FieldOffset(0x18)] public fixed byte m_OutflowRegisterMap[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1C0)]
    public unsafe struct CPulseGraphDef {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_DomainIdentifier[0x10];
        [FieldOffset(0x18)] public fixed byte m_DomainSubType[0x18];
        [FieldOffset(0x30)] public fixed byte m_ParentMapName[0x10];
        [FieldOffset(0x40)] public fixed byte m_ParentXmlName[0x10];
        [FieldOffset(0x50)] public fixed byte m_Chunks[0x18];
        [FieldOffset(0x68)] public fixed byte m_Cells[0x18];
        [FieldOffset(0x80)] public fixed byte m_Vars[0x18];
        [FieldOffset(0x98)] public fixed byte m_TempVarBanks[0x18];
        [FieldOffset(0xB0)] public fixed byte m_PublicOutputs[0x18];
        [FieldOffset(0xC8)] public fixed byte m_InvokeBindings[0x18];
        [FieldOffset(0xE0)] public fixed byte m_CallInfos[0x18];
        [FieldOffset(0xF8)] public fixed byte m_Constants[0x18];
        [FieldOffset(0x110)] public fixed byte m_DomainValues[0x18];
        [FieldOffset(0x128)] public fixed byte m_BlackboardReferences[0x18];
        [FieldOffset(0x140)] public fixed byte m_OutputConnections[0x80];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x140)]
    public unsafe struct CPulseCell_FireCursors {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_Outflows[0x18];
        [FieldOffset(0xF0)] public fixed byte m_bWaitForChildOutflows[0x8];
        [FieldOffset(0xF8)] public fixed byte m_OnFinished[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CPulseCell_Timeline__TimelineEvent_t {
        [FieldOffset(0x0)] public fixed byte m_flTimeFromPrevious[0x8];
        [FieldOffset(0x8)] public fixed byte m_EventOutflow[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct CPulseCell_IntervalTimer__CursorState_t {
        [FieldOffset(0x0)] public fixed byte m_StartTime[0x4];
        [FieldOffset(0x4)] public fixed byte m_EndTime[0x4];
        [FieldOffset(0x8)] public fixed byte m_flWaitInterval[0x4];
        [FieldOffset(0xC)] public fixed byte m_flWaitIntervalHigh[0x4];
        [FieldOffset(0x10)] public fixed byte m_bCompleteOnNextWake[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_BaseRequirement {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD8)]
    public unsafe struct CPulseCell_BaseState {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct OutflowWithRequirements_t {
        [FieldOffset(0x0)] public fixed byte m_Connection[0x48];
        [FieldOffset(0x48)] public fixed byte m_DestinationFlowNodeID[0x8];
        [FieldOffset(0x50)] public fixed byte m_RequirementNodeIDs[0x18];
        [FieldOffset(0x68)] public fixed byte m_nCursorStateBlockIndex[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_IsRequirementValid {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulseCell_Value_Gradient {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Gradient[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct PulseNodeDynamicOutflows_t__DynamicOutflow_t {
        [FieldOffset(0x0)] public fixed byte m_OutflowID[0x8];
        [FieldOffset(0x8)] public fixed byte m_Connection[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CBasePulseGraphInstance {
        [FieldOffset(0x0)] public fixed byte pad_0[0x88];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CPulseCell_Inflow_GraphHook {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte m_HookName[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct SignatureOutflow_Resume {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CPulseCell_Inflow_BaseEntrypoint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_EntryChunk[0x8];
        [FieldOffset(0x50)] public fixed byte m_RegisterMap[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x128)]
    public unsafe struct CPulseCell_WaitForCursorsWithTagBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_nCursorsAllowedToWait[0x8];
        [FieldOffset(0xE0)] public fixed byte m_WaitComplete[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CPulse_InvokeBinding {
        [FieldOffset(0x0)] public fixed byte m_RegisterMap[0x30];
        [FieldOffset(0x30)] public fixed byte m_FuncName[0x10];
        [FieldOffset(0x40)] public fixed byte m_nCellIndex[0x4];
        [FieldOffset(0x44)] public fixed byte m_nSrcChunk[0x4];
        [FieldOffset(0x48)] public fixed byte m_nSrcInstruction[0x68];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x168)]
    public unsafe struct CPulseCell_IntervalTimer {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_Completed[0x48];
        [FieldOffset(0x120)] public fixed byte m_OnInterval[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x120)]
    public unsafe struct CPulseCell_BaseLerp {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_WakeResume[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CPulseCell_Value_Curve {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Curve[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CPulseCell_Inflow_EventHandler {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte m_EventName[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_BaseFlow {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CPulseCell_Outflow_CycleShuffled__InstanceState_t {
        [FieldOffset(0x0)] public fixed byte m_Shuffle[0x20];
        [FieldOffset(0x20)] public fixed byte m_nNextShuffle[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CPulseCell_BaseLerp__CursorState_t {
        [FieldOffset(0x0)] public fixed byte m_StartTime[0x4];
        [FieldOffset(0x4)] public fixed byte m_EndTime[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct SignatureOutflow_Continue {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x140)]
    public unsafe struct CPulseCell_Timeline {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_TimelineEvents[0x18];
        [FieldOffset(0xF0)] public fixed byte m_bWaitForChildOutflows[0x8];
        [FieldOffset(0xF8)] public fixed byte m_OnFinished[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB8)]
    public unsafe struct CPulseCell_Inflow_EntOutputHandler {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte m_SourceEntity[0x10];
        [FieldOffset(0x90)] public fixed byte m_SourceOutput[0x10];
        [FieldOffset(0xA0)] public fixed byte m_ExpectedParamType[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CPulseCell_Outflow_CycleOrdered__InstanceState_t {
        [FieldOffset(0x0)] public fixed byte m_nNextIndex[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA8)]
    public unsafe struct CParticleCollectionBindingInstance {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CPulseCell_LimitCount__InstanceState_t {
        [FieldOffset(0x0)] public fixed byte m_nCurrentCount[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Step_DebugLog {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD8)]
    public unsafe struct CPulseCell_BaseYieldingInflow {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_BaseFlow_OnAfterCancel[0x48];
        [FieldOffset(0x90)] public fixed byte m_BaseFlow_WhileActive[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct PulseNodeDynamicOutflows_t {
        [FieldOffset(0x0)] public fixed byte m_Outflows[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct CPulseCell_IsRequirementValid__Criteria_t {
        [FieldOffset(0x0)] public fixed byte m_bIsValid[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CPulseCell_Inflow_ObservableVariableListener {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte m_nBlackboardReference[0x2];
        [FieldOffset(0x82)] public fixed byte m_bSelfReference[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulseCell_Outflow_CycleOrdered {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Outputs[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct PulseSelectorOutflowList_t {
        [FieldOffset(0x0)] public fixed byte m_Outflows[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x120)]
    public unsafe struct CPulseCell_Inflow_Wait {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_WakeResume[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulseCell_Outflow_CycleShuffled {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Outputs[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC0)]
    public unsafe struct CPulseCell_Inflow_Method {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte m_MethodName[0x10];
        [FieldOffset(0x90)] public fixed byte m_Description[0x8];
        [FieldOffset(0x98)] public fixed byte m_bIsPublic[0x8];
        [FieldOffset(0xA0)] public fixed byte m_Args[0x10];
        [FieldOffset(0xB0)] public fixed byte m_ReturnValues[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_BaseValue {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct CPulseCell_BooleanSwitchState {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_Condition[0x90];
        [FieldOffset(0x168)] public fixed byte m_WhenTrue[0x48];
        [FieldOffset(0x1B0)] public fixed byte m_WhenFalse[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x120)]
    public unsafe struct CPulseCell_Inflow_Yield {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_UnyieldResume[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CPulseCell_Unknown {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_UnknownKeys[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulseCell_Outflow_CycleRandom {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Outputs[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CPulseCell_Step_PublicOutput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_OutputIndex[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CPulse_BlackboardReference {
        [FieldOffset(0x0)] public fixed byte m_hBlackboardResource[0x8];
        [FieldOffset(0x8)] public fixed byte m_BlackboardResource[0x10];
        [FieldOffset(0x18)] public fixed byte m_nNodeID[0x8];
        [FieldOffset(0x20)] public fixed byte m_NodeName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_ReturnValues {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Value_RandomInt {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4C)]
    public unsafe struct CAnimationLayer {
        [FieldOffset(0x0)] public fixed byte m_hSequence[0xC];
        [FieldOffset(0xC)] public fixed byte m_flPrevCycle[0x4];
        [FieldOffset(0x10)] public fixed byte m_flCycle[0xC];
        [FieldOffset(0x1C)] public fixed byte m_flWeight[0xC];
        [FieldOffset(0x28)] public fixed byte m_nOrder[0xC];
        [FieldOffset(0x34)] public fixed byte m_bLooping[0x4];
        [FieldOffset(0x38)] public fixed byte m_nFlags[0x4];
        [FieldOffset(0x3C)] public fixed byte m_bSequenceFinished[0x4];
        [FieldOffset(0x40)] public fixed byte m_flKillRate[0x4];
        [FieldOffset(0x44)] public fixed byte m_flKillDelay[0x4];
        [FieldOffset(0x48)] public fixed byte m_nPriority[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulse_CallInfo {
        [FieldOffset(0x0)] public fixed byte m_PortName[0x10];
        [FieldOffset(0x10)] public fixed byte m_nEditorNodeID[0x8];
        [FieldOffset(0x18)] public fixed byte m_RegisterMap[0x30];
        [FieldOffset(0x48)] public fixed byte m_CallMethodID[0x4];
        [FieldOffset(0x4C)] public fixed byte m_nSrcChunk[0x4];
        [FieldOffset(0x50)] public fixed byte m_nSrcInstruction[0x4];
        [FieldOffset(0x54)] public fixed byte m_nBreakDestChunk[0x4];
        [FieldOffset(0x58)] public fixed byte m_nBreakDestInstruction[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CPulseCell_InlineNodeSkipSelector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_nFlowNodeID[0x4];
        [FieldOffset(0x4C)] public fixed byte m_bAnd[0x4];
        [FieldOffset(0x50)] public fixed byte m_PassOutflow[0x18];
        [FieldOffset(0x68)] public fixed byte m_FailOutflow[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CPulseCell_LimitCount {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_nLimitCount[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x150)]
    public unsafe struct CPulseCell_Step_CallExternalMethod {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_MethodName[0x10];
        [FieldOffset(0xE8)] public fixed byte m_nBlackboardIndex[0x8];
        [FieldOffset(0xF0)] public fixed byte m_ExpectedArgs[0x10];
        [FieldOffset(0x100)] public fixed byte m_nAsyncCallMode[0x8];
        [FieldOffset(0x108)] public fixed byte m_OnFinished[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct CPulseCell_LimitCount__Criteria_t {
        [FieldOffset(0x0)] public fixed byte m_bLimitCountPasses[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x130)]
    public unsafe struct CPulseCell_CursorQueue {
        [FieldOffset(0x0)] public fixed byte pad_0[0x128];
        [FieldOffset(0x128)] public fixed byte m_nCursorsAllowedToRunParallel[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Value_RandomFloat {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD8)]
    public unsafe struct CPulseExecCursor {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CAnimFrameBlockAnim {
        [FieldOffset(0x0)] public fixed byte m_nStartFrame[0x4];
        [FieldOffset(0x4)] public fixed byte m_nEndFrame[0x4];
        [FieldOffset(0x8)] public fixed byte m_segmentIndexArray[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CZeroPoseUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CSlowDownOnSlopesUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte m_flSlowDownStrength[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC0)]
    public unsafe struct COrientationWarpUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x74];
        [FieldOffset(0x74)] public fixed byte m_eMode[0x4];
        [FieldOffset(0x78)] public fixed byte m_hTargetParam[0x2];
        [FieldOffset(0x7A)] public fixed byte m_hTargetPositionParam[0x2];
        [FieldOffset(0x7C)] public fixed byte m_hFallbackTargetPositionParam[0x4];
        [FieldOffset(0x80)] public fixed byte m_eTargetOffsetMode[0x4];
        [FieldOffset(0x84)] public fixed byte m_flTargetOffset[0x4];
        [FieldOffset(0x88)] public fixed byte m_hTargetOffsetParam[0x8];
        [FieldOffset(0x90)] public fixed byte m_damping[0x18];
        [FieldOffset(0xA8)] public fixed byte m_eRootMotionSource[0x4];
        [FieldOffset(0xAC)] public fixed byte m_flMaxRootMotionScale[0x4];
        [FieldOffset(0xB0)] public fixed byte m_bEnablePreferredRotationDirection[0x4];
        [FieldOffset(0xB4)] public fixed byte m_ePreferredRotationDirection[0x4];
        [FieldOffset(0xB8)] public fixed byte m_flPreferredRotationThreshold[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CAnimParameterBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_name[0x8];
        [FieldOffset(0x20)] public fixed byte m_sComment[0x8];
        [FieldOffset(0x28)] public fixed byte m_group[0x8];
        [FieldOffset(0x30)] public fixed byte m_id[0x18];
        [FieldOffset(0x48)] public fixed byte m_componentName[0x20];
        [FieldOffset(0x68)] public fixed byte m_bNetworkingRequested[0x1];
        [FieldOffset(0x69)] public fixed byte m_bIsReferenced[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CSequenceFinishedAnimTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
        [FieldOffset(0x58)] public fixed byte m_sequenceName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB8)]
    public unsafe struct CSceneObjectData {
        [FieldOffset(0x0)] public fixed byte m_vMinBounds[0xC];
        [FieldOffset(0xC)] public fixed byte m_vMaxBounds[0xC];
        [FieldOffset(0x18)] public fixed byte m_drawCalls[0x10];
        [FieldOffset(0x28)] public fixed byte m_drawBounds[0x10];
        [FieldOffset(0x38)] public fixed byte m_meshlets[0x10];
        [FieldOffset(0x48)] public fixed byte m_rtProxyDrawCalls[0x10];
        [FieldOffset(0x58)] public fixed byte m_vTintColor[0x60];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CFootCycle {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CParticleModelInput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nType[0x8];
        [FieldOffset(0x18)] public fixed byte m_NamedValue[0x40];
        [FieldOffset(0x58)] public fixed byte m_nControlPoint[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CInputStreamUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x140)]
    public unsafe struct CNmFootIKTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte m_nLeftEffectorBoneIdx[0x4];
        [FieldOffset(0x74)] public fixed byte m_nRightEffectorBoneIdx[0xC];
        [FieldOffset(0x80)] public fixed byte m_leftTargetTransform[0x20];
        [FieldOffset(0xA0)] public fixed byte m_rightTargetTransform[0x20];
        [FieldOffset(0xC0)] public fixed byte m_nLeftTargetBoneIdx[0x4];
        [FieldOffset(0xC4)] public fixed byte m_nRightTargetBoneIdx[0xC];
        [FieldOffset(0xD0)] public fixed byte m_leftTarget[0x30];
        [FieldOffset(0x100)] public fixed byte m_rightTarget[0x30];
        [FieldOffset(0x130)] public fixed byte m_blendMode[0x4];
        [FieldOffset(0x134)] public fixed byte m_flBlendWeight[0x4];
        [FieldOffset(0x138)] public fixed byte m_bIsTargetInWorldSpace[0x1];
        [FieldOffset(0x139)] public fixed byte m_bIsRunningFromDeserializedData[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CIntAnimParameter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte m_defaultValue[0x4];
        [FieldOffset(0x84)] public fixed byte m_minValue[0x4];
        [FieldOffset(0x88)] public fixed byte m_maxValue[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CNmParameterizedBlendNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_sourceNodeIndices[0x18];
        [FieldOffset(0x28)] public fixed byte m_nInputParameterValueNodeIdx[0x2];
        [FieldOffset(0x2A)] public fixed byte m_bAllowLooping[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD0)]
    public unsafe struct CNmScaleTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6C0)]
    public unsafe struct PerTickSettings_t {
        [FieldOffset(0x0)] public fixed byte m_startingLocalToWorld[0x20];
        [FieldOffset(0x20)] public fixed byte m_prevLocalToWorld[0x20];
        [FieldOffset(0x40)] public fixed byte m_finalLocalToWorld[0x20];
        [FieldOffset(0x60)] public fixed byte m_rootMotion[0x63C];
        [FieldOffset(0x69C)] public fixed byte m_updateID[0x8];
        [FieldOffset(0x6A4)] public fixed byte m_flLastTimeStep[0x4];
        [FieldOffset(0x6A8)] public fixed byte m_flPrevAnimTime[0x4];
        [FieldOffset(0x6AC)] public fixed byte m_flNextAnimTime[0x8];
        [FieldOffset(0x6B4)] public fixed byte m_bAwaken[0x1];
        [FieldOffset(0x6B5)] public fixed byte m_bTeleported[0x1];
        [FieldOffset(0x6B6)] public fixed byte m_bIsClient[0x1];
        [FieldOffset(0x6B7)] public fixed byte m_bIsPredicted[0x9];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmFrameSnapEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_frameSnapMode[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CAnimNodePath {
        [FieldOffset(0x0)] public fixed byte m_path[0x2C];
        [FieldOffset(0x2C)] public fixed byte m_nCount[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct AnimNodeOutputID {
        [FieldOffset(0x0)] public fixed byte m_id[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CNmSyncTrack {
        [FieldOffset(0x0)] public fixed byte m_syncEvents[0xA8];
        [FieldOffset(0xA8)] public fixed byte m_nStartEventOffset[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CSeqBoneMaskList {
        [FieldOffset(0x0)] public fixed byte m_sName[0x10];
        [FieldOffset(0x10)] public fixed byte m_nLocalBoneArray[0x18];
        [FieldOffset(0x28)] public fixed byte m_flBoneWeightArray[0x18];
        [FieldOffset(0x40)] public fixed byte m_flDefaultMorphCtrlWeight[0x8];
        [FieldOffset(0x48)] public fixed byte m_morphCtrlWeightArray[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD8)]
    public unsafe struct CAnimEncodedFrames {
        [FieldOffset(0x0)] public fixed byte m_fileName[0x10];
        [FieldOffset(0x10)] public fixed byte m_nFrames[0x4];
        [FieldOffset(0x14)] public fixed byte m_nFramesPerBlock[0x4];
        [FieldOffset(0x18)] public fixed byte m_frameblockArray[0x18];
        [FieldOffset(0x30)] public fixed byte m_usageDifferences[0xA8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct SampleCode {
        [FieldOffset(0x0)] public fixed byte m_subCode[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CCachedPose {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_transforms[0x18];
        [FieldOffset(0x20)] public fixed byte m_morphWeights[0x18];
        [FieldOffset(0x38)] public fixed byte m_hSequence[0x4];
        [FieldOffset(0x3C)] public fixed byte m_flCycle[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmTransitionEventConditionNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_requireRuleID[0x8];
        [FieldOffset(0x18)] public fixed byte m_eventConditionRules[0x4];
        [FieldOffset(0x1C)] public fixed byte m_nSourceStateNodeIdx[0x2];
        [FieldOffset(0x1E)] public fixed byte m_ruleCondition[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CTaskStatusAnimTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4C)]
    public unsafe struct CStateNodeInstanceData {
        [FieldOffset(0x0)] public fixed byte m_stateWeights[0x8];
        [FieldOffset(0x8)] public fixed byte m_vTransitionVelocityDeltaWS[0x18];
        [FieldOffset(0x20)] public fixed byte m_currentStateStartTime[0x1C];
        [FieldOffset(0x3C)] public fixed byte m_resetCount[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CMotionGraphConfig {
        [FieldOffset(0x0)] public fixed byte m_paramValues[0x10];
        [FieldOffset(0x10)] public fixed byte m_flDuration[0x4];
        [FieldOffset(0x14)] public fixed byte m_nMotionIndex[0x4];
        [FieldOffset(0x18)] public fixed byte m_nSampleStart[0x4];
        [FieldOffset(0x1C)] public fixed byte m_nSampleCount[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CMotionSearchNode {
        [FieldOffset(0x0)] public fixed byte m_children[0x18];
        [FieldOffset(0x18)] public fixed byte m_quantizer[0x20];
        [FieldOffset(0x38)] public fixed byte m_sampleCodes[0x18];
        [FieldOffset(0x50)] public fixed byte m_sampleIndices[0x18];
        [FieldOffset(0x68)] public fixed byte m_selectableSamples[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CAnimActivity {
        [FieldOffset(0x0)] public fixed byte m_name[0x10];
        [FieldOffset(0x10)] public fixed byte m_nActivity[0x4];
        [FieldOffset(0x14)] public fixed byte m_nFlags[0x4];
        [FieldOffset(0x18)] public fixed byte m_nWeight[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1A0)]
    public unsafe struct CAnimScriptManager {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_scriptInfo[0x190];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct AnimationDecodeDebugDumpElement_t {
        [FieldOffset(0x0)] public fixed byte m_nEntityIndex[0x8];
        [FieldOffset(0x8)] public fixed byte m_modelName[0x8];
        [FieldOffset(0x10)] public fixed byte m_poseParams[0x18];
        [FieldOffset(0x28)] public fixed byte m_decodeOps[0x18];
        [FieldOffset(0x40)] public fixed byte m_internalOps[0x18];
        [FieldOffset(0x58)] public fixed byte m_decodedAnims[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x398)]
    public unsafe struct CChoreoInstanceData {
        [FieldOffset(0x0)] public fixed byte m_AnimOverlay[0x398];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct PulseRuntimeVarIndex_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct ConfigIndex {
        [FieldOffset(0x0)] public fixed byte m_nGroup[0x2];
        [FieldOffset(0x2)] public fixed byte m_nConfig[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD0)]
    public unsafe struct VPhysXCollisionAttributes_t {
        [FieldOffset(0x0)] public fixed byte m_nIncludeDetailLayerCount[0x4];
        [FieldOffset(0x4)] public fixed byte m_CollisionGroup[0x4];
        [FieldOffset(0x8)] public fixed byte m_InteractAs[0x18];
        [FieldOffset(0x20)] public fixed byte m_InteractWith[0x18];
        [FieldOffset(0x38)] public fixed byte m_InteractExclude[0x18];
        [FieldOffset(0x50)] public fixed byte m_DetailLayers[0x18];
        [FieldOffset(0x68)] public fixed byte m_CollisionGroupString[0x8];
        [FieldOffset(0x70)] public fixed byte m_InteractAsStrings[0x18];
        [FieldOffset(0x88)] public fixed byte m_InteractWithStrings[0x18];
        [FieldOffset(0xA0)] public fixed byte m_InteractExcludeStrings[0x18];
        [FieldOffset(0xB8)] public fixed byte m_DetailLayerStrings[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CSequenceUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte m_hSequence[0x4];
        [FieldOffset(0x7C)] public fixed byte m_duration[0x4];
        [FieldOffset(0x80)] public fixed byte m_paramSpans[0x18];
        [FieldOffset(0x98)] public fixed byte m_tags[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1C)]
    public unsafe struct CStateMachineInstanceData {
        [FieldOffset(0x0)] public fixed byte m_flTimeInState[0x4];
        [FieldOffset(0x4)] public fixed byte m_currentTransitionIndex[0xC];
        [FieldOffset(0x10)] public fixed byte m_prevStateIndex[0x4];
        [FieldOffset(0x14)] public fixed byte m_scheduledTransitionIndex[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmPassthroughNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nChildNodeIdx[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmClipReferenceNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmGraphDefinition__ExternalGraphSlot_t {
        [FieldOffset(0x0)] public fixed byte m_nNodeIdx[0x8];
        [FieldOffset(0x8)] public fixed byte m_slotID[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct PulseRuntimeEntrypointIndex_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB8)]
    public unsafe struct CAimCameraUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte m_hParameterPosition[0x2];
        [FieldOffset(0x72)] public fixed byte m_hParameterOrientation[0x2];
        [FieldOffset(0x74)] public fixed byte m_hParameterPelvisOffset[0x2];
        [FieldOffset(0x76)] public fixed byte m_hParameterCameraOnly[0x2];
        [FieldOffset(0x78)] public fixed byte m_hParameterWeaponDepenetrationDistance[0x2];
        [FieldOffset(0x7A)] public fixed byte m_hParameterWeaponDepenetrationDelta[0x2];
        [FieldOffset(0x7C)] public fixed byte m_hParameterCameraClearanceDistance[0x4];
        [FieldOffset(0x80)] public fixed byte m_opFixedSettings[0x38];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2)]
    public unsafe struct PulseRuntimeDomainValueIndex_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct LookData {
        [FieldOffset(0x0)] public fixed byte m_vLookTarget[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB)]
    public unsafe struct CSeqSeqDescFlag {
        [FieldOffset(0x0)] public fixed byte m_bLooping[0x1];
        [FieldOffset(0x1)] public fixed byte m_bSnap[0x1];
        [FieldOffset(0x2)] public fixed byte m_bAutoplay[0x1];
        [FieldOffset(0x3)] public fixed byte m_bPost[0x1];
        [FieldOffset(0x4)] public fixed byte m_bHidden[0x1];
        [FieldOffset(0x5)] public fixed byte m_bMulti[0x1];
        [FieldOffset(0x6)] public fixed byte m_bLegacyDelta[0x1];
        [FieldOffset(0x7)] public fixed byte m_bLegacyWorldspace[0x1];
        [FieldOffset(0x8)] public fixed byte m_bLegacyCyclepose[0x1];
        [FieldOffset(0x9)] public fixed byte m_bLegacyRealtime[0x1];
        [FieldOffset(0xA)] public fixed byte m_bModelDoc[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct PermModelInfo_t {
        [FieldOffset(0x0)] public fixed byte m_nFlags[0x4];
        [FieldOffset(0x4)] public fixed byte m_vHullMin[0xC];
        [FieldOffset(0x10)] public fixed byte m_vHullMax[0xC];
        [FieldOffset(0x1C)] public fixed byte m_vViewMin[0xC];
        [FieldOffset(0x28)] public fixed byte m_vViewMax[0xC];
        [FieldOffset(0x34)] public fixed byte m_flMass[0x4];
        [FieldOffset(0x38)] public fixed byte m_vEyePosition[0xC];
        [FieldOffset(0x44)] public fixed byte m_flMaxEyeDeflection[0x4];
        [FieldOffset(0x48)] public fixed byte m_sSurfaceProperty[0x8];
        [FieldOffset(0x50)] public fixed byte m_keyValueText[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct StanceInfo_t {
        [FieldOffset(0x0)] public fixed byte m_vPosition[0xC];
        [FieldOffset(0xC)] public fixed byte m_flDirection[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct IKBoneNameAndIndex_t {
        [FieldOffset(0x0)] public fixed byte m_Name[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulse_Chunk {
        [FieldOffset(0x0)] public fixed byte m_Instructions[0x10];
        [FieldOffset(0x10)] public fixed byte m_Registers[0x10];
        [FieldOffset(0x20)] public fixed byte m_InstructionDebugInfos[0x10];
        [FieldOffset(0x30)] public fixed byte m_nTempVarBank[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CStanceScaleUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte m_hParam[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CPulseBreakpointLocation {
        [FieldOffset(0x0)] public fixed byte m_NodeID[0x8];
        [FieldOffset(0x8)] public fixed byte m_SequencePoint[0x10];
        [FieldOffset(0x18)] public fixed byte m_PortName[0x10];
        [FieldOffset(0x28)] public fixed byte m_bDeferBreak[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct PulseRuntimeInvokeIndex_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmBoneMaskBlendNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nSourceMaskNodeIdx[0x2];
        [FieldOffset(0x12)] public fixed byte m_nTargetMaskNodeIdx[0x2];
        [FieldOffset(0x14)] public fixed byte m_nBlendWeightValueNodeIdx[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmIDEventNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nSourceStateNodeIdx[0x4];
        [FieldOffset(0x14)] public fixed byte m_eventConditionRules[0x4];
        [FieldOffset(0x18)] public fixed byte m_defaultValue[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x44)]
    public unsafe struct HitReactFixedSettings_t {
        [FieldOffset(0x0)] public fixed byte m_nWeightListIndex[0x4];
        [FieldOffset(0x4)] public fixed byte m_nEffectedBoneCount[0x4];
        [FieldOffset(0x8)] public fixed byte m_flMaxImpactForce[0x4];
        [FieldOffset(0xC)] public fixed byte m_flMinImpactForce[0x4];
        [FieldOffset(0x10)] public fixed byte m_flWhipImpactScale[0x4];
        [FieldOffset(0x14)] public fixed byte m_flCounterRotationScale[0x4];
        [FieldOffset(0x18)] public fixed byte m_flDistanceFadeScale[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flPropagationScale[0x4];
        [FieldOffset(0x20)] public fixed byte m_flWhipDelay[0x4];
        [FieldOffset(0x24)] public fixed byte m_flSpringStrength[0x4];
        [FieldOffset(0x28)] public fixed byte m_flWhipSpringStrength[0x4];
        [FieldOffset(0x2C)] public fixed byte m_flMaxAngleRadians[0x4];
        [FieldOffset(0x30)] public fixed byte m_nHipBoneIndex[0x4];
        [FieldOffset(0x34)] public fixed byte m_flHipBoneTranslationScale[0x4];
        [FieldOffset(0x38)] public fixed byte m_flHipDipSpringStrength[0x4];
        [FieldOffset(0x3C)] public fixed byte m_flHipDipImpactScale[0x4];
        [FieldOffset(0x40)] public fixed byte m_flHipDipDelay[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmPoseNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CAnimTagBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_name[0x8];
        [FieldOffset(0x20)] public fixed byte m_sComment[0x8];
        [FieldOffset(0x28)] public fixed byte m_group[0x8];
        [FieldOffset(0x30)] public fixed byte m_tagID[0x18];
        [FieldOffset(0x48)] public fixed byte m_bIsReferenced[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6D8)]
    public unsafe struct CPerParticleVecInput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x6D8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CMotionGraph {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_paramSpans[0x18];
        [FieldOffset(0x28)] public fixed byte m_tags[0x18];
        [FieldOffset(0x40)] public fixed byte m_pRootNode[0x8];
        [FieldOffset(0x48)] public fixed byte m_nParameterCount[0x4];
        [FieldOffset(0x4C)] public fixed byte m_nConfigStartIndex[0x4];
        [FieldOffset(0x50)] public fixed byte m_nConfigCount[0x4];
        [FieldOffset(0x54)] public fixed byte m_bLoop[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmVectorInfoNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nInputValueNodeIdx[0x2];
        [FieldOffset(0x12)] public fixed byte m_desiredInfo[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x120)]
    public unsafe struct AnimationSnapshot_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x110];
        [FieldOffset(0x110)] public fixed byte m_nEntIndex[0x8];
        [FieldOffset(0x118)] public fixed byte m_modelName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x100)]
    public unsafe struct CNmBlendTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0x100];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmVectorValueNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CSeqTransition {
        [FieldOffset(0x0)] public fixed byte m_flFadeInTime[0x4];
        [FieldOffset(0x4)] public fixed byte m_flFadeOutTime[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CNmPoseTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CAnimGraphSettingsGroup {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmVirtualParameterTargetNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nChildNodeIdx[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CAnimGraphDebugReplay {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
        [FieldOffset(0x40)] public fixed byte m_animGraphFileName[0x8];
        [FieldOffset(0x48)] public fixed byte m_frameList[0x18];
        [FieldOffset(0x60)] public fixed byte m_startIndex[0x4];
        [FieldOffset(0x64)] public fixed byte m_writeIndex[0x4];
        [FieldOffset(0x68)] public fixed byte m_frameCount[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x98)]
    public unsafe struct CVectorAnimParameter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte m_defaultValue[0xC];
        [FieldOffset(0x8C)] public fixed byte m_bInterpolate[0x4];
        [FieldOffset(0x90)] public fixed byte m_vectorType[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CNmCachedPoseReadTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CNmStateMachineNode__StateDefinition_t {
        [FieldOffset(0x0)] public fixed byte m_nStateNodeIdx[0x2];
        [FieldOffset(0x2)] public fixed byte m_nEntryConditionNodeIdx[0x6];
        [FieldOffset(0x8)] public fixed byte m_transitionDefinitions[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA0)]
    public unsafe struct CStanceOverrideUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte m_footStanceInfo[0x18];
        [FieldOffset(0x88)] public fixed byte m_pStanceSourceNode[0x10];
        [FieldOffset(0x98)] public fixed byte m_hParameter[0x4];
        [FieldOffset(0x9C)] public fixed byte m_eMode[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmGraphDefinition__ExternalPoseSlot_t {
        [FieldOffset(0x0)] public fixed byte m_nNodeIdx[0x8];
        [FieldOffset(0x8)] public fixed byte m_slotID[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct PhysShapeMarkup_t {
        [FieldOffset(0x0)] public fixed byte m_nBodyInAggregate[0x4];
        [FieldOffset(0x4)] public fixed byte m_nShapeInBody[0x4];
        [FieldOffset(0x8)] public fixed byte m_sHitGroup[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA0)]
    public unsafe struct CBlend2DInstanceData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_dampedValue[0x3C];
        [FieldOffset(0x44)] public fixed byte m_flCycle[0x4];
        [FieldOffset(0x48)] public fixed byte m_flPrevCycle[0x58];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct LookAtBone_t {
        [FieldOffset(0x0)] public fixed byte m_index[0x4];
        [FieldOffset(0x4)] public fixed byte m_weight[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x148)]
    public unsafe struct CDirectPlaybackInstanceData {
        [FieldOffset(0x0)] public fixed byte m_vTargetPosition[0xC];
        [FieldOffset(0xC)] public fixed byte m_flTargetFacing[0x4];
        [FieldOffset(0x10)] public fixed byte m_flInterpEndTime[0x4];
        [FieldOffset(0x14)] public fixed byte m_weights[0x10];
        [FieldOffset(0x24)] public fixed byte m_sequences[0xE0];
        [FieldOffset(0x104)] public fixed byte m_currentSequenceIndex[0x4];
        [FieldOffset(0x108)] public fixed byte m_currentSequenceData[0x10];
        [FieldOffset(0x118)] public fixed byte m_flFadeInTime[0x4];
        [FieldOffset(0x11C)] public fixed byte m_flFadeOutTime[0x4];
        [FieldOffset(0x120)] public fixed byte m_flForcedCycle[0x10];
        [FieldOffset(0x130)] public fixed byte m_bResetPending[0x8];
        [FieldOffset(0x138)] public fixed byte m_SequenceCycleZeroTime[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CNmTransitionNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nTargetStateNodeIdx[0x2];
        [FieldOffset(0x12)] public fixed byte m_nDurationOverrideNodeIdx[0x2];
        [FieldOffset(0x14)] public fixed byte m_timeOffsetOverrideNodeIdx[0x2];
        [FieldOffset(0x16)] public fixed byte m_startBoneMaskNodeIdx[0x2];
        [FieldOffset(0x18)] public fixed byte m_flDuration[0x4];
        [FieldOffset(0x1C)] public fixed byte m_boneMaskBlendInTimePercentage[0x4];
        [FieldOffset(0x20)] public fixed byte m_flTimeOffset[0x4];
        [FieldOffset(0x24)] public fixed byte m_transitionOptions[0x4];
        [FieldOffset(0x28)] public fixed byte m_targetSyncIDNodeIdx[0x2];
        [FieldOffset(0x2A)] public fixed byte m_blendWeightEasing[0x1];
        [FieldOffset(0x2B)] public fixed byte m_rootMotionBlend[0x5];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2)]
    public unsafe struct PulseRuntimeRegisterIndex_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmFloatEaseNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_flEaseTime[0x4];
        [FieldOffset(0x14)] public fixed byte m_flStartValue[0x4];
        [FieldOffset(0x18)] public fixed byte m_nInputValueNodeIdx[0x2];
        [FieldOffset(0x1A)] public fixed byte m_easingOp[0x1];
        [FieldOffset(0x1B)] public fixed byte m_bUseStartValue[0x5];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x340)]
    public unsafe struct CAnimationGraphInstance {
        [FieldOffset(0x0)] public fixed byte pad_0[0x329];
        [FieldOffset(0x329)] public fixed byte m_bTagDispatchDirty[0x17];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA8)]
    public unsafe struct CAnimEncodeDifference {
        [FieldOffset(0x0)] public fixed byte m_boneArray[0x18];
        [FieldOffset(0x18)] public fixed byte m_morphArray[0x18];
        [FieldOffset(0x30)] public fixed byte m_userArray[0x18];
        [FieldOffset(0x48)] public fixed byte m_bHasRotationBitArray[0x18];
        [FieldOffset(0x60)] public fixed byte m_bHasMovementBitArray[0x18];
        [FieldOffset(0x78)] public fixed byte m_bHasMorphBitArray[0x18];
        [FieldOffset(0x90)] public fixed byte m_bHasUserBitArray[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CRootUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CNmTargetOffsetNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nInputValueNodeIdx[0x2];
        [FieldOffset(0x12)] public fixed byte m_bIsBoneSpaceOffset[0xE];
        [FieldOffset(0x20)] public fixed byte m_rotationOffset[0x10];
        [FieldOffset(0x30)] public fixed byte m_translationOffset[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x120)]
    public unsafe struct MotionMatchingInstanceData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x2C];
        [FieldOffset(0x2C)] public fixed byte m_currentSelection[0x58];
        [FieldOffset(0x84)] public fixed byte m_previousSelection[0x9C];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct CMotionGraphUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
        [FieldOffset(0x58)] public fixed byte m_pMotionGraph[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmFloatAngleMathNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nInputValueNodeIdx[0x2];
        [FieldOffset(0x12)] public fixed byte m_operation[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct PulseCursorID_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2)]
    public unsafe struct CAnimParamHandle {
        [FieldOffset(0x0)] public fixed byte m_type[0x1];
        [FieldOffset(0x1)] public fixed byte m_index[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct WeightList {
        [FieldOffset(0x0)] public fixed byte m_name[0x8];
        [FieldOffset(0x8)] public fixed byte m_weights[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct MotionIndex {
        [FieldOffset(0x0)] public fixed byte m_nGroup[0x2];
        [FieldOffset(0x2)] public fixed byte m_nMotion[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct FollowAttachmentSettings_t {
        [FieldOffset(0x0)] public fixed byte m_attachment[0x80];
        [FieldOffset(0x80)] public fixed byte m_boneIndex[0x4];
        [FieldOffset(0x84)] public fixed byte m_attachmentHandle[0x1];
        [FieldOffset(0x85)] public fixed byte m_bMatchTranslation[0x1];
        [FieldOffset(0x86)] public fixed byte m_bMatchRotation[0xA];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmReferencedGraphNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nReferencedGraphIdx[0x2];
        [FieldOffset(0x12)] public fixed byte m_nFallbackNodeIdx[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct AnimNodeID {
        [FieldOffset(0x0)] public fixed byte m_id[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CNmClipSelectorNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_optionNodeIndices[0x18];
        [FieldOffset(0x28)] public fixed byte m_conditionNodeIndices[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CLookComponentUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x34];
        [FieldOffset(0x34)] public fixed byte m_hLookHeading[0x2];
        [FieldOffset(0x36)] public fixed byte m_hLookHeadingNormalized[0x2];
        [FieldOffset(0x38)] public fixed byte m_hLookHeadingVelocity[0x2];
        [FieldOffset(0x3A)] public fixed byte m_hLookPitch[0x2];
        [FieldOffset(0x3C)] public fixed byte m_hLookDistance[0x2];
        [FieldOffset(0x3E)] public fixed byte m_hLookDirection[0x2];
        [FieldOffset(0x40)] public fixed byte m_hLookTarget[0x2];
        [FieldOffset(0x42)] public fixed byte m_hLookTargetWorldSpace[0x2];
        [FieldOffset(0x44)] public fixed byte m_bNetworkLookTarget[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmIsExternalPoseSetNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nExternalPoseNodeIdx[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CAnimGraphNetworkSettings {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
        [FieldOffset(0x20)] public fixed byte m_bNetworkingEnabled[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CSingleFrameUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
        [FieldOffset(0x58)] public fixed byte m_actions[0x18];
        [FieldOffset(0x70)] public fixed byte m_hPoseCacheHandle[0x4];
        [FieldOffset(0x74)] public fixed byte m_hSequence[0x4];
        [FieldOffset(0x78)] public fixed byte m_flCycle[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CNmChainLookatNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_endEffectorBoneID[0x8];
        [FieldOffset(0x20)] public fixed byte m_endEffectorForwardAxis[0xC];
        [FieldOffset(0x2C)] public fixed byte m_endEffectorOffset[0xC];
        [FieldOffset(0x38)] public fixed byte m_nLookatTargetNodeIdx[0x2];
        [FieldOffset(0x3A)] public fixed byte m_nEnabledNodeIdx[0x2];
        [FieldOffset(0x3C)] public fixed byte m_flBlendTimeSeconds[0x4];
        [FieldOffset(0x40)] public fixed byte m_chainWeights[0x30];
        [FieldOffset(0x70)] public fixed byte m_nChainLength[0x1];
        [FieldOffset(0x71)] public fixed byte m_bIsTargetInWorldSpace[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CNmFollowBoneNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_bone[0x8];
        [FieldOffset(0x20)] public fixed byte m_followTargetBone[0x8];
        [FieldOffset(0x28)] public fixed byte m_nEnabledNodeIdx[0x2];
        [FieldOffset(0x2A)] public fixed byte m_mode[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CBlockSelectionMetricEvaluator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xE8)]
    public unsafe struct MovementData {
        [FieldOffset(0x0)] public fixed byte m_goalWayPointPos[0xC];
        [FieldOffset(0xC)] public fixed byte m_vMoveDir[0x14];
        [FieldOffset(0x20)] public fixed byte m_vAcceleration[0x14];
        [FieldOffset(0x34)] public fixed byte m_flCurrentMoveSpeed[0xC];
        [FieldOffset(0x40)] public fixed byte m_flTargetMoveSpeed[0xC];
        [FieldOffset(0x4C)] public fixed byte m_flGoalDistance[0xC];
        [FieldOffset(0x58)] public fixed byte m_flBoundaryRadius[0xC];
        [FieldOffset(0x64)] public fixed byte m_bGoalChanged[0x4];
        [FieldOffset(0x68)] public fixed byte m_bHasPath[0xC];
        [FieldOffset(0x74)] public fixed byte m_flFacingHeading[0xC];
        [FieldOffset(0x80)] public fixed byte m_vManualFacingDirection[0xC];
        [FieldOffset(0x8C)] public fixed byte m_vManualFacingTarget[0xC];
        [FieldOffset(0x98)] public fixed byte m_nFacingMode[0xC];
        [FieldOffset(0xA4)] public fixed byte m_bForceFacing[0xC];
        [FieldOffset(0xB0)] public fixed byte m_nActiveMotorIndex[0xC];
        [FieldOffset(0xBC)] public fixed byte m_bOnGround[0xC];
        [FieldOffset(0xC8)] public fixed byte m_vFacingPosition[0x14];
        [FieldOffset(0xDC)] public fixed byte m_vPrevFacingPosition[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CRemapValueComponentUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_items[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CModelConfigList {
        [FieldOffset(0x0)] public fixed byte m_bHideMaterialGroupInTools[0x1];
        [FieldOffset(0x1)] public fixed byte m_bHideRenderColorInTools[0x7];
        [FieldOffset(0x8)] public fixed byte m_Configs[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CSeqAutoLayerFlag {
        [FieldOffset(0x0)] public fixed byte m_bPost[0x1];
        [FieldOffset(0x1)] public fixed byte m_bSpline[0x1];
        [FieldOffset(0x2)] public fixed byte m_bXFade[0x1];
        [FieldOffset(0x3)] public fixed byte m_bNoBlend[0x1];
        [FieldOffset(0x4)] public fixed byte m_bLocal[0x1];
        [FieldOffset(0x5)] public fixed byte m_bPose[0x1];
        [FieldOffset(0x6)] public fixed byte m_bFetchFrame[0x1];
        [FieldOffset(0x7)] public fixed byte m_bSubtract[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct AnimStateID {
        [FieldOffset(0x0)] public fixed byte m_id[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CNmIDEventConditionNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nSourceStateNodeIdx[0x4];
        [FieldOffset(0x14)] public fixed byte m_eventConditionRules[0x4];
        [FieldOffset(0x18)] public fixed byte m_eventIDs[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct ModelBoneFlexDriver_t {
        [FieldOffset(0x0)] public fixed byte m_boneName[0x8];
        [FieldOffset(0x8)] public fixed byte m_boneNameToken[0x8];
        [FieldOffset(0x10)] public fixed byte m_controls[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CMorphData {
        [FieldOffset(0x0)] public fixed byte m_name[0x8];
        [FieldOffset(0x8)] public fixed byte m_morphRectDatas[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD0)]
    public unsafe struct CFootPinningUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte m_poseOpFixedData[0x30];
        [FieldOffset(0xA8)] public fixed byte m_eTimingSource[0x8];
        [FieldOffset(0xB0)] public fixed byte m_params[0x18];
        [FieldOffset(0xC8)] public fixed byte m_bResetChild[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CSeqPoseSetting {
        [FieldOffset(0x0)] public fixed byte m_sPoseParameter[0x10];
        [FieldOffset(0x10)] public fixed byte m_sAttachment[0x10];
        [FieldOffset(0x20)] public fixed byte m_sReferenceSequence[0x10];
        [FieldOffset(0x30)] public fixed byte m_flValue[0x4];
        [FieldOffset(0x34)] public fixed byte m_bX[0x1];
        [FieldOffset(0x35)] public fixed byte m_bY[0x1];
        [FieldOffset(0x36)] public fixed byte m_bZ[0x2];
        [FieldOffset(0x38)] public fixed byte m_eType[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct PulseGraphExecutionHistoryCursorDesc_t {
        [FieldOffset(0x0)] public fixed byte vecAncestorCursorIDs[0x18];
        [FieldOffset(0x18)] public fixed byte nSpawnNodeID[0x4];
        [FieldOffset(0x1C)] public fixed byte nRetiredAtNodeID[0x4];
        [FieldOffset(0x20)] public fixed byte flLastReferenced[0x4];
        [FieldOffset(0x24)] public fixed byte nLastValidEntryIdx[0x4];
        [FieldOffset(0x28)] public fixed byte bWasAnObservableComputation[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmVirtualParameterFloatNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nChildNodeIdx[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CAttachment {
        [FieldOffset(0x0)] public fixed byte m_name[0x8];
        [FieldOffset(0x8)] public fixed byte m_influenceNames[0x18];
        [FieldOffset(0x20)] public fixed byte m_vInfluenceRotations[0x30];
        [FieldOffset(0x50)] public fixed byte m_vInfluenceOffsets[0x24];
        [FieldOffset(0x74)] public fixed byte m_influenceWeights[0xC];
        [FieldOffset(0x80)] public fixed byte m_bInfluenceRootTransform[0x3];
        [FieldOffset(0x83)] public fixed byte m_nInfluences[0x1];
        [FieldOffset(0x84)] public fixed byte m_bIgnoreRotation[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CSequenceUpdateNodeBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x6C];
        [FieldOffset(0x6C)] public fixed byte m_playbackSpeed[0x4];
        [FieldOffset(0x70)] public fixed byte m_bLoop[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CDrawCullingData {
        [FieldOffset(0x0)] public fixed byte m_ConeAxis[0x3];
        [FieldOffset(0x3)] public fixed byte m_ConeCutoff[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD0)]
    public unsafe struct VPhysXJoint_t {
        [FieldOffset(0x0)] public fixed byte m_nType[0x2];
        [FieldOffset(0x2)] public fixed byte m_nBody1[0x2];
        [FieldOffset(0x4)] public fixed byte m_nBody2[0x2];
        [FieldOffset(0x6)] public fixed byte m_nFlags[0xA];
        [FieldOffset(0x10)] public fixed byte m_Frame1[0x20];
        [FieldOffset(0x30)] public fixed byte m_Frame2[0x20];
        [FieldOffset(0x50)] public fixed byte m_bEnableCollision[0x1];
        [FieldOffset(0x51)] public fixed byte m_bIsLinearConstraintDisabled[0x1];
        [FieldOffset(0x52)] public fixed byte m_bIsAngularConstraintDisabled[0x1];
        [FieldOffset(0x53)] public fixed byte m_bEnableLinearLimit[0x1];
        [FieldOffset(0x54)] public fixed byte m_LinearLimit[0x8];
        [FieldOffset(0x5C)] public fixed byte m_bEnableLinearMotor[0x4];
        [FieldOffset(0x60)] public fixed byte m_vLinearTargetVelocity[0xC];
        [FieldOffset(0x6C)] public fixed byte m_flMaxForce[0x4];
        [FieldOffset(0x70)] public fixed byte m_bEnableSwingLimit[0x4];
        [FieldOffset(0x74)] public fixed byte m_SwingLimit[0x8];
        [FieldOffset(0x7C)] public fixed byte m_bEnableTwistLimit[0x4];
        [FieldOffset(0x80)] public fixed byte m_TwistLimit[0x8];
        [FieldOffset(0x88)] public fixed byte m_bEnableAngularMotor[0x4];
        [FieldOffset(0x8C)] public fixed byte m_vAngularTargetVelocity[0xC];
        [FieldOffset(0x98)] public fixed byte m_flMaxTorque[0x4];
        [FieldOffset(0x9C)] public fixed byte m_flLinearFrequency[0x4];
        [FieldOffset(0xA0)] public fixed byte m_flLinearDampingRatio[0x4];
        [FieldOffset(0xA4)] public fixed byte m_flAngularFrequency[0x4];
        [FieldOffset(0xA8)] public fixed byte m_flAngularDampingRatio[0x4];
        [FieldOffset(0xAC)] public fixed byte m_flFriction[0x4];
        [FieldOffset(0xB0)] public fixed byte m_flElasticity[0x4];
        [FieldOffset(0xB4)] public fixed byte m_flElasticDamping[0x4];
        [FieldOffset(0xB8)] public fixed byte m_flPlasticity[0x8];
        [FieldOffset(0xC0)] public fixed byte m_Tag[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1C)]
    public unsafe struct CStateNodeTransitionData {
        [FieldOffset(0x0)] public fixed byte m_curve[0x8];
        [FieldOffset(0x8)] public fixed byte m_blendDuration[0x8];
        [FieldOffset(0x10)] public fixed byte m_resetCycleValue[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CTimeRemainingMetricEvaluator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
        [FieldOffset(0x50)] public fixed byte m_bMatchByTimeRemaining[0x4];
        [FieldOffset(0x54)] public fixed byte m_flMaxTimeRemaining[0x4];
        [FieldOffset(0x58)] public fixed byte m_bFilterByTimeRemaining[0x4];
        [FieldOffset(0x5C)] public fixed byte m_flMinTimeRemaining[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CParticleInput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2)]
    public unsafe struct PulseRuntimeTempVarIndex_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CModelConfigElement {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_ElementName[0x8];
        [FieldOffset(0x10)] public fixed byte m_NestedElements[0x38];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmControlParameterVectorNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct FootFixedSettings {
        [FieldOffset(0x0)] public fixed byte m_traceSettings[0x10];
        [FieldOffset(0x10)] public fixed byte m_vFootBaseBindPosePositionMS[0x10];
        [FieldOffset(0x20)] public fixed byte m_flFootBaseLength[0x4];
        [FieldOffset(0x24)] public fixed byte m_flMaxRotationLeft[0x4];
        [FieldOffset(0x28)] public fixed byte m_flMaxRotationRight[0x4];
        [FieldOffset(0x2C)] public fixed byte m_footstepLandedTagIndex[0x4];
        [FieldOffset(0x30)] public fixed byte m_bEnableTracing[0x4];
        [FieldOffset(0x34)] public fixed byte m_flTraceAngleBlend[0x4];
        [FieldOffset(0x38)] public fixed byte m_nDisableTagIndex[0x4];
        [FieldOffset(0x3C)] public fixed byte m_nFootIndex[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmBoneMaskSwitchNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nSwitchValueNodeIdx[0x2];
        [FieldOffset(0x12)] public fixed byte m_nTrueValueNodeIdx[0x2];
        [FieldOffset(0x14)] public fixed byte m_nFalseValueNodeIdx[0x4];
        [FieldOffset(0x18)] public fixed byte m_flBlendTimeSeconds[0x4];
        [FieldOffset(0x1C)] public fixed byte m_bSwitchDynamically[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CModelConfig {
        [FieldOffset(0x0)] public fixed byte m_ConfigName[0x8];
        [FieldOffset(0x8)] public fixed byte m_Elements[0x18];
        [FieldOffset(0x20)] public fixed byte m_bTopLevel[0x1];
        [FieldOffset(0x21)] public fixed byte m_bActiveInEditorByDefault[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct AnimComponentID {
        [FieldOffset(0x0)] public fixed byte m_id[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x150)]
    public unsafe struct VPhysXAggregateData_t {
        [FieldOffset(0x0)] public fixed byte m_nFlags[0x2];
        [FieldOffset(0x2)] public fixed byte m_nRefCounter[0x2];
        [FieldOffset(0x4)] public fixed byte m_bCompoundsPacked[0x4];
        [FieldOffset(0x8)] public fixed byte m_bonesHash[0x18];
        [FieldOffset(0x20)] public fixed byte m_boneNames[0x18];
        [FieldOffset(0x38)] public fixed byte m_indexNames[0x18];
        [FieldOffset(0x50)] public fixed byte m_indexHash[0x18];
        [FieldOffset(0x68)] public fixed byte m_bindPose[0x18];
        [FieldOffset(0x80)] public fixed byte m_parts[0x18];
        [FieldOffset(0x98)] public fixed byte m_shapeMarkups[0x18];
        [FieldOffset(0xB0)] public fixed byte m_constraints2[0x18];
        [FieldOffset(0xC8)] public fixed byte m_joints[0x18];
        [FieldOffset(0xE0)] public fixed byte m_pFeModel[0x8];
        [FieldOffset(0xE8)] public fixed byte m_boneParents[0x18];
        [FieldOffset(0x100)] public fixed byte m_surfacePropertyHashes[0x18];
        [FieldOffset(0x118)] public fixed byte m_collisionAttributes[0x18];
        [FieldOffset(0x130)] public fixed byte m_debugPartNames[0x18];
        [FieldOffset(0x148)] public fixed byte m_embeddedKeyvalues[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1B8)]
    public unsafe struct CNmGraphDefinition {
        [FieldOffset(0x0)] public fixed byte m_variationID[0x8];
        [FieldOffset(0x8)] public fixed byte m_skeleton[0x8];
        [FieldOffset(0x10)] public fixed byte m_supportedSecondarySkeletons[0x18];
        [FieldOffset(0x28)] public fixed byte m_pUserData[0x8];
        [FieldOffset(0x30)] public fixed byte m_persistentNodeIndices[0x18];
        [FieldOffset(0x48)] public fixed byte m_nRootNodeIdx[0x8];
        [FieldOffset(0x50)] public fixed byte m_controlParameterIDs[0x18];
        [FieldOffset(0x68)] public fixed byte m_virtualParameterIDs[0x18];
        [FieldOffset(0x80)] public fixed byte m_virtualParameterNodeIndices[0x18];
        [FieldOffset(0x98)] public fixed byte m_referencedGraphSlots[0x18];
        [FieldOffset(0xB0)] public fixed byte m_externalGraphSlots[0x18];
        [FieldOffset(0xC8)] public fixed byte m_externalPoseSlots[0x88];
        [FieldOffset(0x150)] public fixed byte m_nodePaths[0x18];
        [FieldOffset(0x168)] public fixed byte m_resources[0x50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CNmSelectorNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_optionNodeIndices[0x18];
        [FieldOffset(0x28)] public fixed byte m_conditionNodeIndices[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CAnimDemoCaptureSettings {
        [FieldOffset(0x0)] public fixed byte m_vecErrorRangeSplineRotation[0x8];
        [FieldOffset(0x8)] public fixed byte m_vecErrorRangeSplineTranslation[0x8];
        [FieldOffset(0x10)] public fixed byte m_vecErrorRangeSplineScale[0x8];
        [FieldOffset(0x18)] public fixed byte m_flIkRotation_MaxSplineError[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flIkTranslation_MaxSplineError[0x4];
        [FieldOffset(0x20)] public fixed byte m_vecErrorRangeQuantizationRotation[0x8];
        [FieldOffset(0x28)] public fixed byte m_vecErrorRangeQuantizationTranslation[0x8];
        [FieldOffset(0x30)] public fixed byte m_vecErrorRangeQuantizationScale[0x8];
        [FieldOffset(0x38)] public fixed byte m_flIkRotation_MaxQuantizationError[0x4];
        [FieldOffset(0x3C)] public fixed byte m_flIkTranslation_MaxQuantizationError[0x4];
        [FieldOffset(0x40)] public fixed byte m_baseSequence[0x8];
        [FieldOffset(0x48)] public fixed byte m_nBaseSequenceFrame[0x4];
        [FieldOffset(0x4C)] public fixed byte m_boneSelectionMode[0x4];
        [FieldOffset(0x50)] public fixed byte m_bones[0x18];
        [FieldOffset(0x68)] public fixed byte m_ikChains[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct IKDemoCaptureSettings_t {
        [FieldOffset(0x0)] public fixed byte m_parentBoneName[0x8];
        [FieldOffset(0x8)] public fixed byte m_eMode[0x8];
        [FieldOffset(0x10)] public fixed byte m_ikChainName[0x8];
        [FieldOffset(0x18)] public fixed byte m_oneBoneStart[0x8];
        [FieldOffset(0x20)] public fixed byte m_oneBoneEnd[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6)]
    public unsafe struct CSeqMultiFetchFlag {
        [FieldOffset(0x0)] public fixed byte m_bRealtime[0x1];
        [FieldOffset(0x1)] public fixed byte m_bCylepose[0x1];
        [FieldOffset(0x2)] public fixed byte m_b0D[0x1];
        [FieldOffset(0x3)] public fixed byte m_b1D[0x1];
        [FieldOffset(0x4)] public fixed byte m_b2D[0x1];
        [FieldOffset(0x5)] public fixed byte m_b2D_TRI[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct PulseRegisterMap_t {
        [FieldOffset(0x0)] public fixed byte m_Inparams[0x10];
        [FieldOffset(0x10)] public fixed byte m_InparamsWhichCanBeMoved[0x10];
        [FieldOffset(0x20)] public fixed byte m_Outparams[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct VPhysXRange_t {
        [FieldOffset(0x0)] public fixed byte m_flMin[0x4];
        [FieldOffset(0x4)] public fixed byte m_flMax[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA0)]
    public unsafe struct CStopAtGoalUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x74];
        [FieldOffset(0x74)] public fixed byte m_flOuterRadius[0x4];
        [FieldOffset(0x78)] public fixed byte m_flInnerRadius[0x4];
        [FieldOffset(0x7C)] public fixed byte m_flMaxScale[0x4];
        [FieldOffset(0x80)] public fixed byte m_flMinScale[0x8];
        [FieldOffset(0x88)] public fixed byte m_damping[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmIDEventPercentageThroughNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nSourceStateNodeIdx[0x4];
        [FieldOffset(0x14)] public fixed byte m_eventConditionRules[0x4];
        [FieldOffset(0x18)] public fixed byte m_eventID[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CAnimBoneDifference {
        [FieldOffset(0x0)] public fixed byte m_name[0x10];
        [FieldOffset(0x10)] public fixed byte m_parent[0x10];
        [FieldOffset(0x20)] public fixed byte m_posError[0xC];
        [FieldOffset(0x2C)] public fixed byte m_bHasRotation[0x1];
        [FieldOffset(0x2D)] public fixed byte m_bHasMovement[0x3];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmCachedBoolNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nInputValueNodeIdx[0x4];
        [FieldOffset(0x14)] public fixed byte m_mode[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CAnimCycle {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CActionComponentUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_actions[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CDirectionalBlendInstanceData {
        [FieldOffset(0x0)] public fixed byte m_dampedValue[0x14];
        [FieldOffset(0x14)] public fixed byte m_flCycle[0x4];
        [FieldOffset(0x18)] public fixed byte m_flPrevCycle[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flPlaybackRate[0xC];
        [FieldOffset(0x28)] public fixed byte m_flCycleZeroTime[0xC];
        [FieldOffset(0x34)] public fixed byte m_resetCycleValue[0xC];
        [FieldOffset(0x40)] public fixed byte m_resetCount[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CDampedPathAnimMotorUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x2C];
        [FieldOffset(0x2C)] public fixed byte m_flAnticipationTime[0x4];
        [FieldOffset(0x30)] public fixed byte m_flMinSpeedScale[0x4];
        [FieldOffset(0x34)] public fixed byte m_hAnticipationPosParam[0x2];
        [FieldOffset(0x36)] public fixed byte m_hAnticipationHeadingParam[0x2];
        [FieldOffset(0x38)] public fixed byte m_flSpringConstant[0x4];
        [FieldOffset(0x3C)] public fixed byte m_flMinSpringTension[0x4];
        [FieldOffset(0x40)] public fixed byte m_flMaxSpringTension[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmCachedFloatNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nInputValueNodeIdx[0x4];
        [FieldOffset(0x14)] public fixed byte m_mode[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmFloatSwitchNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nSwitchValueNodeIdx[0x2];
        [FieldOffset(0x12)] public fixed byte m_nTrueValueNodeIdx[0x2];
        [FieldOffset(0x14)] public fixed byte m_nFalseValueNodeIdx[0x4];
        [FieldOffset(0x18)] public fixed byte m_flFalseValue[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flTrueValue[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CModelConfigElement_SetMaterialGroupOnAttachedModels {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_MaterialGroupName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CNmFloatChannelData {
        [FieldOffset(0x0)] public fixed byte m_skeleton[0x8];
        [FieldOffset(0x8)] public fixed byte m_setID[0x8];
        [FieldOffset(0x10)] public fixed byte m_channelSettings[0x18];
        [FieldOffset(0x28)] public fixed byte m_compressedData[0x18];
        [FieldOffset(0x40)] public fixed byte m_compressedOffsets[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CNmEntityAttributeEventBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_target[0x8];
        [FieldOffset(0x20)] public fixed byte m_attributeName[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmVirtualParameterBoneMaskNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nChildNodeIdx[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct SequenceData {
        [FieldOffset(0x0)] public fixed byte m_hSequence[0x4];
        [FieldOffset(0x4)] public fixed byte m_cycle[0x34];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CPathHelperUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte m_flStoppingRadius[0x4];
        [FieldOffset(0x74)] public fixed byte m_flStoppingSpeedScale[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct MaterialGroup_t {
        [FieldOffset(0x0)] public fixed byte m_name[0x8];
        [FieldOffset(0x8)] public fixed byte m_materials[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CMorphBundleData {
        [FieldOffset(0x0)] public fixed byte m_flULeftSrc[0x4];
        [FieldOffset(0x4)] public fixed byte m_flVTopSrc[0x4];
        [FieldOffset(0x8)] public fixed byte m_offsets[0x18];
        [FieldOffset(0x20)] public fixed byte m_ranges[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CModelConfigElement_UserPick {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Choices[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CSolveIKTargetHandle_t {
        [FieldOffset(0x0)] public fixed byte m_positionHandle[0x2];
        [FieldOffset(0x2)] public fixed byte m_orientationHandle[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CFootAdjustmentUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte m_clips[0x18];
        [FieldOffset(0x90)] public fixed byte m_hBasePoseCacheHandle[0x4];
        [FieldOffset(0x94)] public fixed byte m_facingTarget[0x4];
        [FieldOffset(0x98)] public fixed byte m_flTurnTimeMin[0x4];
        [FieldOffset(0x9C)] public fixed byte m_flTurnTimeMax[0x4];
        [FieldOffset(0xA0)] public fixed byte m_flStepHeightMax[0x4];
        [FieldOffset(0xA4)] public fixed byte m_flStepHeightMaxAngle[0x4];
        [FieldOffset(0xA8)] public fixed byte m_bResetChild[0x1];
        [FieldOffset(0xA9)] public fixed byte m_bAnimationDriven[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CChoreoUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CAimConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
        [FieldOffset(0x60)] public fixed byte m_qAimOffset[0x10];
        [FieldOffset(0x70)] public fixed byte m_nUpType[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct CMaterialDrawDescriptor__RigidMeshPart_t {
        [FieldOffset(0x0)] public fixed byte m_nRigidBLASIndex[0x2];
        [FieldOffset(0x2)] public fixed byte m_nBoneIndex[0x2];
        [FieldOffset(0x4)] public fixed byte m_nStartIndexOffset[0x4];
        [FieldOffset(0x8)] public fixed byte m_nPrimitiveCount[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CFootFallAnimTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
        [FieldOffset(0x58)] public fixed byte m_foot[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x120)]
    public unsafe struct CMaterialDrawDescriptor {
        [FieldOffset(0x0)] public fixed byte m_flUvDensity[0x4];
        [FieldOffset(0x4)] public fixed byte m_vTintColor[0xC];
        [FieldOffset(0x10)] public fixed byte m_flAlpha[0x8];
        [FieldOffset(0x18)] public fixed byte m_nNumMeshlets[0x8];
        [FieldOffset(0x20)] public fixed byte m_nFirstMeshlet[0x4];
        [FieldOffset(0x24)] public fixed byte m_nAppliedIndexOffset[0x4];
        [FieldOffset(0x28)] public fixed byte m_nEmissivePrimitiveCount[0x4];
        [FieldOffset(0x2C)] public fixed byte m_nDepthVertexBufferIndex[0x1];
        [FieldOffset(0x2D)] public fixed byte m_nMeshletPackedIVBIndex[0x3];
        [FieldOffset(0x30)] public fixed byte m_rigidMeshParts[0x10];
        [FieldOffset(0x40)] public fixed byte m_rootBvhNodes[0x10];
        [FieldOffset(0x50)] public fixed byte m_nPrimitiveType[0x4];
        [FieldOffset(0x54)] public fixed byte m_nBaseVertex[0x4];
        [FieldOffset(0x58)] public fixed byte m_nVertexCount[0x4];
        [FieldOffset(0x5C)] public fixed byte m_nStartIndex[0x4];
        [FieldOffset(0x60)] public fixed byte m_nIndexCount[0x68];
        [FieldOffset(0xC8)] public fixed byte m_indexBuffer[0x20];
        [FieldOffset(0xE8)] public fixed byte m_meshletPackedIVB[0x30];
        [FieldOffset(0x118)] public fixed byte m_material[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x100)]
    public unsafe struct CNmSkeleton {
        [FieldOffset(0x0)] public fixed byte m_ID[0x8];
        [FieldOffset(0x8)] public fixed byte m_boneIDs[0x10];
        [FieldOffset(0x18)] public fixed byte m_parentIndices[0x18];
        [FieldOffset(0x30)] public fixed byte m_parentSpaceReferencePose[0x18];
        [FieldOffset(0x48)] public fixed byte m_modelSpaceReferencePose[0x18];
        [FieldOffset(0x60)] public fixed byte m_numBonesToSampleAtLowLOD[0x4];
        [FieldOffset(0x64)] public fixed byte m_bIsPropSkeleton[0x24];
        [FieldOffset(0x88)] public fixed byte m_maskDefinitions[0x20];
        [FieldOffset(0xA8)] public fixed byte m_secondarySkeletons[0x10];
        [FieldOffset(0xB8)] public fixed byte m_floatChannelSets[0x10];
        [FieldOffset(0xC8)] public fixed byte m_contactConfigs[0x18];
        [FieldOffset(0xE0)] public fixed byte m_gameplayRelevantBoneIndices[0x18];
        [FieldOffset(0xF8)] public fixed byte m_nSpecialDependencyHash[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CStepsRemainingMetricEvaluator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
        [FieldOffset(0x50)] public fixed byte m_footIndices[0x18];
        [FieldOffset(0x68)] public fixed byte m_flMinStepsRemaining[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CNmVelocityBlendNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CNmZeroPoseTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CNmClothEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_type[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flStiffness[0x4];
        [FieldOffset(0x20)] public fixed byte m_flSpeedIn[0x4];
        [FieldOffset(0x24)] public fixed byte m_flSpeedOut[0x4];
        [FieldOffset(0x28)] public fixed byte m_flLengthSeconds[0x8];
        [FieldOffset(0x30)] public fixed byte m_vertexSetName[0x8];
        [FieldOffset(0x38)] public fixed byte m_effectName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CBodyGroupSetting {
        [FieldOffset(0x0)] public fixed byte m_BodyGroupName[0x8];
        [FieldOffset(0x8)] public fixed byte m_nBodyGroupOption[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CVectorQuantizer {
        [FieldOffset(0x0)] public fixed byte m_centroidVectors[0x18];
        [FieldOffset(0x18)] public fixed byte m_nCentroids[0x4];
        [FieldOffset(0x1C)] public fixed byte m_nDimensions[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct ParticleNamedValueConfiguration_t {
        [FieldOffset(0x0)] public fixed byte m_ConfigName[0x8];
        [FieldOffset(0x8)] public fixed byte m_ConfigValue[0x10];
        [FieldOffset(0x18)] public fixed byte m_BoundValuePath[0x8];
        [FieldOffset(0x20)] public fixed byte m_iAttachType[0x8];
        [FieldOffset(0x28)] public fixed byte m_strEntityScope[0x8];
        [FieldOffset(0x30)] public fixed byte m_strAttachmentName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmVectorCreateNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_inputVectorValueNodeIdx[0x2];
        [FieldOffset(0x12)] public fixed byte m_inputValueXNodeIdx[0x2];
        [FieldOffset(0x14)] public fixed byte m_inputValueYNodeIdx[0x2];
        [FieldOffset(0x16)] public fixed byte m_inputValueZNodeIdx[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6D8)]
    public unsafe struct CParticleVecInput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nType[0x4];
        [FieldOffset(0x14)] public fixed byte m_vLiteralValue[0xC];
        [FieldOffset(0x20)] public fixed byte m_LiteralColor[0x8];
        [FieldOffset(0x28)] public fixed byte m_NamedValue[0x40];
        [FieldOffset(0x68)] public fixed byte m_bFollowNamedValue[0x4];
        [FieldOffset(0x6C)] public fixed byte m_nVectorAttribute[0x4];
        [FieldOffset(0x70)] public fixed byte m_vVectorAttributeScale[0xC];
        [FieldOffset(0x7C)] public fixed byte m_nControlPoint[0x4];
        [FieldOffset(0x80)] public fixed byte m_nDeltaControlPoint[0x4];
        [FieldOffset(0x84)] public fixed byte m_vCPValueScale[0xC];
        [FieldOffset(0x90)] public fixed byte m_vCPRelativePosition[0xC];
        [FieldOffset(0x9C)] public fixed byte m_vCPRelativeDir[0xC];
        [FieldOffset(0xA8)] public fixed byte m_FloatComponentX[0x178];
        [FieldOffset(0x220)] public fixed byte m_FloatComponentY[0x178];
        [FieldOffset(0x398)] public fixed byte m_FloatComponentZ[0x178];
        [FieldOffset(0x510)] public fixed byte m_FloatInterp[0x178];
        [FieldOffset(0x688)] public fixed byte m_flInterpInput0[0x4];
        [FieldOffset(0x68C)] public fixed byte m_flInterpInput1[0x4];
        [FieldOffset(0x690)] public fixed byte m_vInterpOutput0[0xC];
        [FieldOffset(0x69C)] public fixed byte m_vInterpOutput1[0xC];
        [FieldOffset(0x6A8)] public fixed byte m_Gradient[0x18];
        [FieldOffset(0x6C0)] public fixed byte m_vRandomMin[0xC];
        [FieldOffset(0x6CC)] public fixed byte m_vRandomMax[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CNmStateNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nChildNodeIdx[0x8];
        [FieldOffset(0x18)] public fixed byte m_entryEvents[0x20];
        [FieldOffset(0x38)] public fixed byte m_executeEvents[0x20];
        [FieldOffset(0x58)] public fixed byte m_exitEvents[0x20];
        [FieldOffset(0x78)] public fixed byte m_timedRemainingEvents[0x18];
        [FieldOffset(0x90)] public fixed byte m_timedElapsedEvents[0x18];
        [FieldOffset(0xA8)] public fixed byte m_nLayerWeightNodeIdx[0x2];
        [FieldOffset(0xAA)] public fixed byte m_nLayerRootMotionWeightNodeIdx[0x2];
        [FieldOffset(0xAC)] public fixed byte m_nLayerBoneMaskNodeIdx[0x2];
        [FieldOffset(0xAE)] public fixed byte m_bIsOffState[0x1];
        [FieldOffset(0xAF)] public fixed byte m_bUseActualElapsedTimeInStateForTimedEvents[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CNmBoneMaskSelectorNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_defaultMaskNodeIdx[0x2];
        [FieldOffset(0x12)] public fixed byte m_parameterValueNodeIdx[0x2];
        [FieldOffset(0x14)] public fixed byte m_bSwitchDynamically[0x4];
        [FieldOffset(0x18)] public fixed byte m_maskNodeIndices[0x18];
        [FieldOffset(0x30)] public fixed byte m_parameterValues[0x40];
        [FieldOffset(0x70)] public fixed byte m_flBlendTimeSeconds[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmVirtualParameterVectorNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nChildNodeIdx[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct CFootCycleMetricEvaluator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
        [FieldOffset(0x50)] public fixed byte m_footIndices[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmConstIDNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_value[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CHitBox {
        [FieldOffset(0x0)] public fixed byte m_name[0x8];
        [FieldOffset(0x8)] public fixed byte m_sSurfaceProperty[0x8];
        [FieldOffset(0x10)] public fixed byte m_sBoneName[0x8];
        [FieldOffset(0x18)] public fixed byte m_vMinBounds[0xC];
        [FieldOffset(0x24)] public fixed byte m_vMaxBounds[0xC];
        [FieldOffset(0x30)] public fixed byte m_flShapeRadius[0x4];
        [FieldOffset(0x34)] public fixed byte m_nBoneNameHash[0x4];
        [FieldOffset(0x38)] public fixed byte m_nGroupId[0x4];
        [FieldOffset(0x3C)] public fixed byte m_nShapeType[0x1];
        [FieldOffset(0x3D)] public fixed byte m_bTranslationOnly[0x3];
        [FieldOffset(0x40)] public fixed byte m_CRC[0x4];
        [FieldOffset(0x44)] public fixed byte m_cRenderColor[0x4];
        [FieldOffset(0x48)] public fixed byte m_nHitBoxIndex[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CNmParameterizedSelectorNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_optionNodeIndices[0x18];
        [FieldOffset(0x28)] public fixed byte m_optionWeights[0x10];
        [FieldOffset(0x38)] public fixed byte m_parameterNodeIdx[0x2];
        [FieldOffset(0x3A)] public fixed byte m_bIgnoreInvalidOptions[0x1];
        [FieldOffset(0x3B)] public fixed byte m_bHasWeightsSet[0x5];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA8)]
    public unsafe struct ModelSkeletonData_t {
        [FieldOffset(0x0)] public fixed byte m_boneName[0x18];
        [FieldOffset(0x18)] public fixed byte m_nParent[0x18];
        [FieldOffset(0x30)] public fixed byte m_boneSphere[0x18];
        [FieldOffset(0x48)] public fixed byte m_nFlag[0x18];
        [FieldOffset(0x60)] public fixed byte m_bonePosParent[0x18];
        [FieldOffset(0x78)] public fixed byte m_boneRotParent[0x18];
        [FieldOffset(0x90)] public fixed byte m_boneScaleParent[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_flStartTime[0x4];
        [FieldOffset(0xC)] public fixed byte m_flDuration[0x4];
        [FieldOffset(0x10)] public fixed byte m_syncID[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct NmCompressionSettings_t__QuantizationRange_t {
        [FieldOffset(0x0)] public fixed byte m_flRangeStart[0x4];
        [FieldOffset(0x4)] public fixed byte m_flRangeLength[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x100)]
    public unsafe struct CNmBlendTaskBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x100];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct TagSpan_t {
        [FieldOffset(0x0)] public fixed byte m_tagIndex[0x4];
        [FieldOffset(0x4)] public fixed byte m_startCycle[0x4];
        [FieldOffset(0x8)] public fixed byte m_endCycle[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CNmConstTargetNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_value[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct CRemapValueUpdateItem {
        [FieldOffset(0x0)] public fixed byte m_hParamIn[0x2];
        [FieldOffset(0x2)] public fixed byte m_hParamOut[0x2];
        [FieldOffset(0x4)] public fixed byte m_flMinInputValue[0x4];
        [FieldOffset(0x8)] public fixed byte m_flMaxInputValue[0x4];
        [FieldOffset(0xC)] public fixed byte m_flMinOutputValue[0x4];
        [FieldOffset(0x10)] public fixed byte m_flMaxOutputValue[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct PermModelDataAnimatedMaterialAttribute_t {
        [FieldOffset(0x0)] public fixed byte m_AttributeName[0x8];
        [FieldOffset(0x8)] public fixed byte m_nNumChannels[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CMotionDataSet {
        [FieldOffset(0x0)] public fixed byte m_groups[0x18];
        [FieldOffset(0x18)] public fixed byte m_nDimensionCount[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct ParticleAttributeIndex_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CProductQuantizer {
        [FieldOffset(0x0)] public fixed byte m_subQuantizers[0x18];
        [FieldOffset(0x18)] public fixed byte m_nDimensions[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC0)]
    public unsafe struct CChoiceUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
        [FieldOffset(0x60)] public fixed byte m_children[0x18];
        [FieldOffset(0x78)] public fixed byte m_weights[0x18];
        [FieldOffset(0x90)] public fixed byte m_blendTimes[0x18];
        [FieldOffset(0xA8)] public fixed byte m_choiceMethod[0x4];
        [FieldOffset(0xAC)] public fixed byte m_choiceChangeMethod[0x4];
        [FieldOffset(0xB0)] public fixed byte m_blendMethod[0x4];
        [FieldOffset(0xB4)] public fixed byte m_blendTime[0x4];
        [FieldOffset(0xB8)] public fixed byte m_bCrossFade[0x1];
        [FieldOffset(0xB9)] public fixed byte m_bResetChosen[0x1];
        [FieldOffset(0xBA)] public fixed byte m_bDontResetSameSelection[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct SkeletonAnimCapture_t__Bone_t {
        [FieldOffset(0x0)] public fixed byte m_Name[0x10];
        [FieldOffset(0x10)] public fixed byte m_BindPose[0x20];
        [FieldOffset(0x30)] public fixed byte m_nParent[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CExpressionActionUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_hParam[0x2];
        [FieldOffset(0x1A)] public fixed byte m_eParamType[0x2];
        [FieldOffset(0x1C)] public fixed byte m_hScript[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmFloatMathNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nInputValueNodeIdxA[0x2];
        [FieldOffset(0x12)] public fixed byte m_nInputValueNodeIdxB[0x2];
        [FieldOffset(0x14)] public fixed byte m_bReturnAbsoluteResult[0x1];
        [FieldOffset(0x15)] public fixed byte m_bReturnNegatedResult[0x1];
        [FieldOffset(0x16)] public fixed byte m_operator[0x2];
        [FieldOffset(0x18)] public fixed byte m_flValueB[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CAnimationGraphVisualizerLine {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
        [FieldOffset(0x40)] public fixed byte m_vWsPositionStart[0x10];
        [FieldOffset(0x50)] public fixed byte m_vWsPositionEnd[0x10];
        [FieldOffset(0x60)] public fixed byte m_Color[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CCycleControlUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte m_valueSource[0x4];
        [FieldOffset(0x74)] public fixed byte m_paramIndex[0x2];
        [FieldOffset(0x76)] public fixed byte m_bLockWhenWaning[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmTargetInfoNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nInputValueNodeIdx[0x4];
        [FieldOffset(0x14)] public fixed byte m_infoType[0x4];
        [FieldOffset(0x18)] public fixed byte m_bIsWorldSpaceTarget[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CDampedValueComponentUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_items[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CBaseConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
        [FieldOffset(0x20)] public fixed byte m_name[0x8];
        [FieldOffset(0x28)] public fixed byte m_vUpVector[0x10];
        [FieldOffset(0x38)] public fixed byte m_slaves[0x10];
        [FieldOffset(0x48)] public fixed byte m_targets[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmControlParameterFloatNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct BlendItem_t {
        [FieldOffset(0x0)] public fixed byte m_tags[0x18];
        [FieldOffset(0x18)] public fixed byte m_pChild[0x10];
        [FieldOffset(0x28)] public fixed byte m_hSequence[0x4];
        [FieldOffset(0x2C)] public fixed byte m_vPos[0x8];
        [FieldOffset(0x34)] public fixed byte m_flDuration[0x4];
        [FieldOffset(0x38)] public fixed byte m_bUseCustomDuration[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct DampedPathMotorInstanceData_t {
        [FieldOffset(0x0)] public fixed byte m_vVelocity[0xC];
        [FieldOffset(0xC)] public fixed byte m_vAcceleration[0x18];
        [FieldOffset(0x24)] public fixed byte m_bStopping[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmIsExternalGraphSlotFilledNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nExternalGraphNodeIdx[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD8)]
    public unsafe struct CNewParticleEffect {
        [FieldOffset(0x0)] public fixed byte m_bDontRemove[0x10];
        [FieldOffset(0x10)] public fixed byte m_pNext[0x8];
        [FieldOffset(0x18)] public fixed byte m_pPrev[0x8];
        [FieldOffset(0x20)] public fixed byte m_pParticles[0x8];
        [FieldOffset(0x28)] public fixed byte m_pDebugName[0x18];
        [FieldOffset(0x40)] public fixed byte m_vSortOrigin[0xC];
        [FieldOffset(0x4C)] public fixed byte m_flScale[0x4];
        [FieldOffset(0x50)] public fixed byte m_hOwner[0x8];
        [FieldOffset(0x58)] public fixed byte m_pOwningParticleProperty[0x18];
        [FieldOffset(0x70)] public fixed byte m_flFreezeTransitionStart[0x4];
        [FieldOffset(0x74)] public fixed byte m_flFreezeTransitionDuration[0x4];
        [FieldOffset(0x78)] public fixed byte m_flFreezeTransitionOverride[0x4];
        [FieldOffset(0x7C)] public fixed byte m_LastMin[0xC];
        [FieldOffset(0x88)] public fixed byte m_LastMax[0xC];
        [FieldOffset(0x94)] public fixed byte m_nSplitScreenUser[0x4];
        [FieldOffset(0x98)] public fixed byte m_vecAggregationCenter[0x38];
        [FieldOffset(0xD0)] public fixed byte m_RefCount[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CNmClipNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nPlayInReverseValueNodeIdx[0x2];
        [FieldOffset(0x12)] public fixed byte m_bSampleRootMotion[0x1];
        [FieldOffset(0x13)] public fixed byte m_bAllowLooping[0x1];
        [FieldOffset(0x14)] public fixed byte m_nDataSlotIdx[0x2];
        [FieldOffset(0x16)] public fixed byte m_nResetTimeValueNodeIdx[0x2];
        [FieldOffset(0x18)] public fixed byte m_graphEvents[0x28];
        [FieldOffset(0x40)] public fixed byte m_flSpeedMultiplier[0x4];
        [FieldOffset(0x44)] public fixed byte m_nStartSyncEventOffset[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x130)]
    public unsafe struct CNmMaterialAttributeEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_target[0x8];
        [FieldOffset(0x20)] public fixed byte m_attributeName[0x8];
        [FieldOffset(0x28)] public fixed byte m_attributeNameToken[0x8];
        [FieldOffset(0x30)] public fixed byte m_x[0x40];
        [FieldOffset(0x70)] public fixed byte m_y[0x40];
        [FieldOffset(0xB0)] public fixed byte m_z[0x40];
        [FieldOffset(0xF0)] public fixed byte m_w[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct TagStatus {
        [FieldOffset(0x0)] public fixed byte m_TagStatus[0x4];
        [FieldOffset(0x4)] public fixed byte m_flTagStartAnimTime[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CNmBlend1DNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_parameterization[0x50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CConcreteAnimParameter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte m_previewButton[0x4];
        [FieldOffset(0x74)] public fixed byte m_eNetworkSetting[0x4];
        [FieldOffset(0x78)] public fixed byte m_bUseMostRecentValue[0x1];
        [FieldOffset(0x79)] public fixed byte m_bAutoReset[0x1];
        [FieldOffset(0x7A)] public fixed byte m_bGameWritable[0x1];
        [FieldOffset(0x7B)] public fixed byte m_bGraphWritable[0x5];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x110)]
    public unsafe struct CNmBoneWeightList {
        [FieldOffset(0x0)] public fixed byte m_skeletonName[0xE0];
        [FieldOffset(0xE0)] public fixed byte m_boneIDs[0x18];
        [FieldOffset(0xF8)] public fixed byte m_weights[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CPairedSequenceUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte m_sPairedSequenceRole[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CModelConfigElement_RandomPick {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Choices[0x18];
        [FieldOffset(0x60)] public fixed byte m_ChoiceWeights[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CNmReferencePoseTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmScaleNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_nMaskNodeIdx[0x2];
        [FieldOffset(0x1A)] public fixed byte m_nEnableNodeIdx[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x100)]
    public unsafe struct VPhysXConstraint2_t {
        [FieldOffset(0x0)] public fixed byte m_nFlags[0x4];
        [FieldOffset(0x4)] public fixed byte m_nParent[0x2];
        [FieldOffset(0x6)] public fixed byte m_nChild[0x2];
        [FieldOffset(0x8)] public fixed byte m_params[0xF8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CConstraintTarget {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
        [FieldOffset(0x20)] public fixed byte m_qOffset[0x10];
        [FieldOffset(0x30)] public fixed byte m_vOffset[0xC];
        [FieldOffset(0x3C)] public fixed byte m_nBoneHash[0x4];
        [FieldOffset(0x40)] public fixed byte m_sName[0x8];
        [FieldOffset(0x48)] public fixed byte m_flWeight[0x11];
        [FieldOffset(0x59)] public fixed byte m_bIsAttachment[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC0)]
    public unsafe struct SkeletonAnimCapture_t {
        [FieldOffset(0x0)] public fixed byte m_nEntIndex[0x4];
        [FieldOffset(0x4)] public fixed byte m_nEntParent[0x4];
        [FieldOffset(0x8)] public fixed byte m_ImportedCollision[0x18];
        [FieldOffset(0x20)] public fixed byte m_ModelName[0x8];
        [FieldOffset(0x28)] public fixed byte m_CaptureName[0x8];
        [FieldOffset(0x30)] public fixed byte m_ModelBindPose[0x18];
        [FieldOffset(0x48)] public fixed byte m_FeModelInitPose[0x18];
        [FieldOffset(0x60)] public fixed byte m_nFlexControllers[0x4];
        [FieldOffset(0x64)] public fixed byte m_bPredicted[0x44];
        [FieldOffset(0xA8)] public fixed byte m_Frames[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CAnimUser {
        [FieldOffset(0x0)] public fixed byte m_name[0x10];
        [FieldOffset(0x10)] public fixed byte m_nType[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CPulse_TempVarBankDefinition {
        [FieldOffset(0x0)] public fixed byte m_TempVars[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD8)]
    public unsafe struct CRagdollComponentUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_ragdollNodePaths[0x18];
        [FieldOffset(0x48)] public fixed byte m_followAttachmentNodePaths[0x18];
        [FieldOffset(0x60)] public fixed byte m_boneIndices[0x18];
        [FieldOffset(0x78)] public fixed byte m_boneNames[0x18];
        [FieldOffset(0x90)] public fixed byte m_weightLists[0x18];
        [FieldOffset(0xA8)] public fixed byte m_boneToWeightIndices[0x18];
        [FieldOffset(0xC0)] public fixed byte m_flSpringFrequencyMin[0x4];
        [FieldOffset(0xC4)] public fixed byte m_flSpringFrequencyMax[0x4];
        [FieldOffset(0xC8)] public fixed byte m_flMaxStretch[0x4];
        [FieldOffset(0xCC)] public fixed byte m_bSolidCollisionAtZeroWeight[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct ParticleNamedValueSource_t {
        [FieldOffset(0x0)] public fixed byte m_Name[0x8];
        [FieldOffset(0x8)] public fixed byte m_IsPublic[0x8];
        [FieldOffset(0x10)] public fixed byte m_ValueType[0x18];
        [FieldOffset(0x28)] public fixed byte m_DefaultConfig[0x38];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CFootDefinition {
        [FieldOffset(0x0)] public fixed byte m_name[0x8];
        [FieldOffset(0x8)] public fixed byte m_ankleBoneName[0x8];
        [FieldOffset(0x10)] public fixed byte m_toeBoneName[0x8];
        [FieldOffset(0x18)] public fixed byte m_vBallOffset[0xC];
        [FieldOffset(0x24)] public fixed byte m_vHeelOffset[0xC];
        [FieldOffset(0x30)] public fixed byte m_flFootLength[0x4];
        [FieldOffset(0x34)] public fixed byte m_flBindPoseDirectionMS[0x4];
        [FieldOffset(0x38)] public fixed byte m_flTraceHeight[0x4];
        [FieldOffset(0x3C)] public fixed byte m_flTraceRadius[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CSeqSynthAnimDesc {
        [FieldOffset(0x0)] public fixed byte m_sName[0x10];
        [FieldOffset(0x10)] public fixed byte m_flags[0xC];
        [FieldOffset(0x1C)] public fixed byte m_transition[0x8];
        [FieldOffset(0x24)] public fixed byte m_nLocalBaseReference[0x2];
        [FieldOffset(0x26)] public fixed byte m_nLocalBoneMask[0x2];
        [FieldOffset(0x28)] public fixed byte m_activityArray[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct CNmLayerBlendNode__LayerDefinition_t {
        [FieldOffset(0x0)] public fixed byte m_nInputNodeIdx[0x2];
        [FieldOffset(0x2)] public fixed byte m_nWeightValueNodeIdx[0x2];
        [FieldOffset(0x4)] public fixed byte m_nBoneMaskValueNodeIdx[0x2];
        [FieldOffset(0x6)] public fixed byte m_nRootMotionWeightValueNodeIdx[0x2];
        [FieldOffset(0x8)] public fixed byte m_bIsSynchronized[0x1];
        [FieldOffset(0x9)] public fixed byte m_bIgnoreEvents[0x1];
        [FieldOffset(0xA)] public fixed byte m_bIsStateMachineLayer[0x1];
        [FieldOffset(0xB)] public fixed byte m_blendMode[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CAnimComponentUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_name[0x8];
        [FieldOffset(0x20)] public fixed byte m_id[0x4];
        [FieldOffset(0x24)] public fixed byte m_networkMode[0x4];
        [FieldOffset(0x28)] public fixed byte m_bStartEnabled[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xF8)]
    public unsafe struct CBlend2DUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
        [FieldOffset(0x60)] public fixed byte m_items[0x18];
        [FieldOffset(0x78)] public fixed byte m_tags[0x18];
        [FieldOffset(0x90)] public fixed byte m_paramSpans[0x18];
        [FieldOffset(0xA8)] public fixed byte m_nodeItemIndices[0x18];
        [FieldOffset(0xC0)] public fixed byte m_damping[0x18];
        [FieldOffset(0xD8)] public fixed byte m_blendSourceX[0x4];
        [FieldOffset(0xDC)] public fixed byte m_paramX[0x4];
        [FieldOffset(0xE0)] public fixed byte m_blendSourceY[0x4];
        [FieldOffset(0xE4)] public fixed byte m_paramY[0x4];
        [FieldOffset(0xE8)] public fixed byte m_eBlendMode[0x4];
        [FieldOffset(0xEC)] public fixed byte m_playbackSpeed[0x4];
        [FieldOffset(0xF0)] public fixed byte m_bLoop[0x1];
        [FieldOffset(0xF1)] public fixed byte m_bLockBlendOnReset[0x1];
        [FieldOffset(0xF2)] public fixed byte m_bLockWhenWaning[0x1];
        [FieldOffset(0xF3)] public fixed byte m_bAnimEventsAndTagsOnMostWeightedOnly[0x5];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmVelocityBasedSpeedScaleNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CNPCPhysicsHull {
        [FieldOffset(0x0)] public fixed byte m_sName[0x8];
        [FieldOffset(0x8)] public fixed byte m_eType[0x4];
        [FieldOffset(0xC)] public fixed byte m_flCapsuleHeight[0x4];
        [FieldOffset(0x10)] public fixed byte m_flCapsuleRadius[0x4];
        [FieldOffset(0x14)] public fixed byte m_vCapsuleCenter1[0xC];
        [FieldOffset(0x20)] public fixed byte m_vCapsuleCenter2[0xC];
        [FieldOffset(0x2C)] public fixed byte m_flGroundBoxHeight[0x4];
        [FieldOffset(0x30)] public fixed byte m_flGroundBoxWidth[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct PermModelExtPart_t {
        [FieldOffset(0x0)] public fixed byte m_Transform[0x20];
        [FieldOffset(0x20)] public fixed byte m_Name[0x8];
        [FieldOffset(0x28)] public fixed byte m_nParent[0x8];
        [FieldOffset(0x30)] public fixed byte m_refModel[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmCachedIDNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nInputValueNodeIdx[0x4];
        [FieldOffset(0x14)] public fixed byte m_mode[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xF0)]
    public unsafe struct CLeanMatrixUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x5C];
        [FieldOffset(0x5C)] public fixed byte m_frameCorners[0x24];
        [FieldOffset(0x80)] public fixed byte m_poses[0x28];
        [FieldOffset(0xA8)] public fixed byte m_damping[0x18];
        [FieldOffset(0xC0)] public fixed byte m_blendSource[0x4];
        [FieldOffset(0xC4)] public fixed byte m_paramIndex[0x4];
        [FieldOffset(0xC8)] public fixed byte m_verticalAxis[0xC];
        [FieldOffset(0xD4)] public fixed byte m_horizontalAxis[0xC];
        [FieldOffset(0xE0)] public fixed byte m_hSequence[0x4];
        [FieldOffset(0xE4)] public fixed byte m_flMaxValue[0x4];
        [FieldOffset(0xE8)] public fixed byte m_nSequenceMaxFrame[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CSymbolAnimParameter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte m_defaultValue[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CNmFloatCurveEventNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_eventID[0x8];
        [FieldOffset(0x18)] public fixed byte m_nDefaultNodeIdx[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flDefaultValue[0x4];
        [FieldOffset(0x20)] public fixed byte m_eventConditionRules[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct IAnimationGraphInstance {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CNmStateMachineNode__TransitionDefinition_t {
        [FieldOffset(0x0)] public fixed byte m_nTargetStateIdx[0x2];
        [FieldOffset(0x2)] public fixed byte m_nConditionNodeIdx[0x2];
        [FieldOffset(0x4)] public fixed byte m_nTransitionNodeIdx[0x2];
        [FieldOffset(0x6)] public fixed byte m_bCanBeForced[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CNmFloatSelectorNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_conditionNodeIndices[0x18];
        [FieldOffset(0x28)] public fixed byte m_values[0x20];
        [FieldOffset(0x48)] public fixed byte m_flDefaultValue[0x4];
        [FieldOffset(0x4C)] public fixed byte m_flEaseTime[0x4];
        [FieldOffset(0x50)] public fixed byte m_easingOp[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA0)]
    public unsafe struct CTargetSelectorUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
        [FieldOffset(0x60)] public fixed byte m_eAngleMode[0x8];
        [FieldOffset(0x68)] public fixed byte m_children[0x1C];
        [FieldOffset(0x84)] public fixed byte m_hTargetPosition[0x2];
        [FieldOffset(0x86)] public fixed byte m_hTargetFacePositionParameter[0x2];
        [FieldOffset(0x88)] public fixed byte m_hMoveHeadingParameter[0x2];
        [FieldOffset(0x8A)] public fixed byte m_hDesiredMoveHeadingParameter[0x2];
        [FieldOffset(0x8C)] public fixed byte m_bTargetPositionIsWorldSpace[0x1];
        [FieldOffset(0x8D)] public fixed byte m_bTargetFacePositionIsWorldSpace[0x1];
        [FieldOffset(0x8E)] public fixed byte m_bEnablePhaseMatching[0x2];
        [FieldOffset(0x90)] public fixed byte m_flPhaseMatchingMaxRootMotionSkip[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct SlopeData {
        [FieldOffset(0x0)] public fixed byte m_vSlopeNormal[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CHitBoxSetList {
        [FieldOffset(0x0)] public fixed byte m_HitBoxSets[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmIsInactiveBranchConditionNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct MotionDBIndex {
        [FieldOffset(0x0)] public fixed byte m_nIndex[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CDirectPlaybackTagData {
        [FieldOffset(0x0)] public fixed byte m_sequenceName[0x8];
        [FieldOffset(0x8)] public fixed byte m_tags[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6D8)]
    public unsafe struct CParticleCollectionVecInput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x6D8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmGraphEventConditionNode__Condition_t {
        [FieldOffset(0x0)] public fixed byte m_eventID[0x8];
        [FieldOffset(0x8)] public fixed byte m_eventTypeCondition[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CNmFloatRemapNode__RemapRange_t {
        [FieldOffset(0x0)] public fixed byte m_flBegin[0x4];
        [FieldOffset(0x4)] public fixed byte m_flEnd[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmCurrentSyncEventIDNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nSourceStateNodeIdx[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmStateCompletedConditionNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nSourceStateNodeIdx[0x2];
        [FieldOffset(0x12)] public fixed byte m_nTransitionDurationOverrideNodeIdx[0x2];
        [FieldOffset(0x14)] public fixed byte m_flTransitionDurationSeconds[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CNmCameraFOVEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_curve[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmTargetWarpEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_rule[0x1];
        [FieldOffset(0x19)] public fixed byte m_algorithm[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CParamSpanUpdater {
        [FieldOffset(0x0)] public fixed byte m_spans[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CAnimActionUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x98)]
    public unsafe struct CParticleAnimTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
        [FieldOffset(0x58)] public fixed byte m_hParticleSystem[0x8];
        [FieldOffset(0x60)] public fixed byte m_particleSystemName[0x8];
        [FieldOffset(0x68)] public fixed byte m_configName[0x8];
        [FieldOffset(0x70)] public fixed byte m_bDetachFromOwner[0x1];
        [FieldOffset(0x71)] public fixed byte m_bAggregate[0x1];
        [FieldOffset(0x72)] public fixed byte m_bStopWhenTagEnds[0x1];
        [FieldOffset(0x73)] public fixed byte m_bTagEndStopIsInstant[0x5];
        [FieldOffset(0x78)] public fixed byte m_attachmentName[0x8];
        [FieldOffset(0x80)] public fixed byte m_attachmentType[0x8];
        [FieldOffset(0x88)] public fixed byte m_attachmentCP1Name[0x8];
        [FieldOffset(0x90)] public fixed byte m_attachmentCP1Type[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CCycleBase {
        [FieldOffset(0x0)] public fixed byte m_flCycle[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct FollowTargetOpFixedSettings_t {
        [FieldOffset(0x0)] public fixed byte m_boneIndex[0x4];
        [FieldOffset(0x4)] public fixed byte m_bBoneTarget[0x4];
        [FieldOffset(0x8)] public fixed byte m_boneTargetIndex[0x4];
        [FieldOffset(0xC)] public fixed byte m_bWorldCoodinateTarget[0x1];
        [FieldOffset(0xD)] public fixed byte m_bMatchTargetOrientation[0x3];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CNmIDSwitchNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nSwitchValueNodeIdx[0x2];
        [FieldOffset(0x12)] public fixed byte m_nTrueValueNodeIdx[0x2];
        [FieldOffset(0x14)] public fixed byte m_nFalseValueNodeIdx[0x4];
        [FieldOffset(0x18)] public fixed byte m_falseValue[0x8];
        [FieldOffset(0x20)] public fixed byte m_trueValue[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmRootMotionEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_flBlendTimeSeconds[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CPulse_PublicOutput {
        [FieldOffset(0x0)] public fixed byte m_Name[0x10];
        [FieldOffset(0x10)] public fixed byte m_Description[0x8];
        [FieldOffset(0x18)] public fixed byte m_Args[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x34)]
    public unsafe struct CChoiceInstanceData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_currentChoice[0xC];
        [FieldOffset(0x1C)] public fixed byte m_previousChoice[0x4];
        [FieldOffset(0x20)] public fixed byte m_flClipStartTime[0xC];
        [FieldOffset(0x2C)] public fixed byte m_choicePreviousCycle[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct CNmContactAudioTypeVData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CNmCameraDOFEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_curve[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x110)]
    public unsafe struct AnimationSnapshotBase_t {
        [FieldOffset(0x0)] public fixed byte m_flRealTime[0x10];
        [FieldOffset(0x10)] public fixed byte m_rootToWorld[0x30];
        [FieldOffset(0x40)] public fixed byte m_bBonesInWorldSpace[0x8];
        [FieldOffset(0x48)] public fixed byte m_boneSetupMask[0x18];
        [FieldOffset(0x60)] public fixed byte m_boneTransforms[0x18];
        [FieldOffset(0x78)] public fixed byte m_flexControllers[0x18];
        [FieldOffset(0x90)] public fixed byte m_SnapshotType[0x4];
        [FieldOffset(0x94)] public fixed byte m_bHasDecodeDump[0x4];
        [FieldOffset(0x98)] public fixed byte m_DecodeDump[0x78];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CEmitTagActionUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_nTagIndex[0x4];
        [FieldOffset(0x1C)] public fixed byte m_bIsZeroDuration[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct DynamicMeshDeformParams_t {
        [FieldOffset(0x0)] public fixed byte m_flTensionCompressScale[0x4];
        [FieldOffset(0x4)] public fixed byte m_flTensionStretchScale[0x4];
        [FieldOffset(0x8)] public fixed byte m_bRecomputeSmoothNormalsAfterAnimation[0x1];
        [FieldOffset(0x9)] public fixed byte m_bComputeDynamicMeshTensionAfterAnimation[0x1];
        [FieldOffset(0xA)] public fixed byte m_bSmoothNormalsAcrossUvSeams[0x1];
        [FieldOffset(0xB)] public fixed byte m_bEnableEyeBulgeDeformation[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmTimeConditionNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_sourceStateNodeIdx[0x2];
        [FieldOffset(0x12)] public fixed byte m_nInputValueNodeIdx[0x2];
        [FieldOffset(0x14)] public fixed byte m_flComparand[0x4];
        [FieldOffset(0x18)] public fixed byte m_type[0x1];
        [FieldOffset(0x19)] public fixed byte m_operator[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmSyncEventIndexConditionNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nSourceStateNodeIdx[0x2];
        [FieldOffset(0x12)] public fixed byte m_triggerMode[0x2];
        [FieldOffset(0x14)] public fixed byte m_syncEventIdx[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CAnimStateMachineUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_states[0x18];
        [FieldOffset(0x20)] public fixed byte m_transitions[0x30];
        [FieldOffset(0x50)] public fixed byte m_startStateIndex[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CUnaryUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
        [FieldOffset(0x60)] public fixed byte m_pChildNode[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct CNmIDToFloatNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nInputValueNodeIdx[0x4];
        [FieldOffset(0x14)] public fixed byte m_defaultValue[0x4];
        [FieldOffset(0x18)] public fixed byte m_IDs[0x30];
        [FieldOffset(0x48)] public fixed byte m_values[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct PlayerInputMotorInstanceData_t {
        [FieldOffset(0x0)] public fixed byte m_vInputVectorWS[0xC];
        [FieldOffset(0xC)] public fixed byte m_vVelocityWS[0xC];
        [FieldOffset(0x18)] public fixed byte m_vAccelerationWS[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB8)]
    public unsafe struct CSelectorUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
        [FieldOffset(0x60)] public fixed byte m_children[0x18];
        [FieldOffset(0x78)] public fixed byte m_tags[0x1C];
        [FieldOffset(0x94)] public fixed byte m_blendCurve[0x8];
        [FieldOffset(0x9C)] public fixed byte m_flBlendTime[0x8];
        [FieldOffset(0xA4)] public fixed byte m_hParameter[0x4];
        [FieldOffset(0xA8)] public fixed byte m_nTagIndex[0x4];
        [FieldOffset(0xAC)] public fixed byte m_eTagBehavior[0x4];
        [FieldOffset(0xB0)] public fixed byte m_bResetOnChange[0x1];
        [FieldOffset(0xB1)] public fixed byte m_bLockWhenWaning[0x1];
        [FieldOffset(0xB2)] public fixed byte m_bSyncCyclesOnChange[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct NmPercent_t {
        [FieldOffset(0x0)] public fixed byte m_flValue[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CStateMachineComponentUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_stateMachine[0x58];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CAnimUpdateNodeRef {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_nodeIndex[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CPulse_OutputConnection {
        [FieldOffset(0x0)] public fixed byte m_SourceOutput[0x10];
        [FieldOffset(0x10)] public fixed byte m_TargetEntity[0x10];
        [FieldOffset(0x20)] public fixed byte m_TargetInput[0x10];
        [FieldOffset(0x30)] public fixed byte m_Param[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC8)]
    public unsafe struct CPhysSurfaceProperties {
        [FieldOffset(0x0)] public fixed byte m_name[0x8];
        [FieldOffset(0x8)] public fixed byte m_nameHash[0x4];
        [FieldOffset(0xC)] public fixed byte m_baseNameHash[0xC];
        [FieldOffset(0x18)] public fixed byte m_bHidden[0x8];
        [FieldOffset(0x20)] public fixed byte m_description[0x8];
        [FieldOffset(0x28)] public fixed byte m_physics[0x18];
        [FieldOffset(0x40)] public fixed byte m_vehicleParams[0x8];
        [FieldOffset(0x48)] public fixed byte m_audioSounds[0x60];
        [FieldOffset(0xA8)] public fixed byte m_audioParams[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmBoneMaskValueNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CSeqPoseParamDesc {
        [FieldOffset(0x0)] public fixed byte m_sName[0x10];
        [FieldOffset(0x10)] public fixed byte m_flStart[0x4];
        [FieldOffset(0x14)] public fixed byte m_flEnd[0x4];
        [FieldOffset(0x18)] public fixed byte m_flLoop[0x4];
        [FieldOffset(0x1C)] public fixed byte m_bLooping[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CModelConfigElement_SetBodygroup {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_GroupName[0x8];
        [FieldOffset(0x50)] public fixed byte m_nChoice[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2C)]
    public unsafe struct CAnimMovement {
        [FieldOffset(0x0)] public fixed byte endframe[0x4];
        [FieldOffset(0x4)] public fixed byte motionflags[0x4];
        [FieldOffset(0x8)] public fixed byte v0[0x4];
        [FieldOffset(0xC)] public fixed byte v1[0x4];
        [FieldOffset(0x10)] public fixed byte angle[0x4];
        [FieldOffset(0x14)] public fixed byte vector[0xC];
        [FieldOffset(0x20)] public fixed byte position[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x178)]
    public unsafe struct CParticleRemapFloatInput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct FollowAttachmentData {
        [FieldOffset(0x0)] public fixed byte m_boneIndex[0x4];
        [FieldOffset(0x4)] public fixed byte m_attachmentHandle[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct FootStepTrigger {
        [FieldOffset(0x0)] public fixed byte m_tags[0x18];
        [FieldOffset(0x18)] public fixed byte m_nFootIndex[0x4];
        [FieldOffset(0x1C)] public fixed byte m_triggerPhase[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmSyncTrack__EventMarker_t {
        [FieldOffset(0x0)] public fixed byte m_startTime[0x8];
        [FieldOffset(0x8)] public fixed byte m_ID[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CPathMetricEvaluator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
        [FieldOffset(0x50)] public fixed byte m_pathTimeSamples[0x18];
        [FieldOffset(0x68)] public fixed byte m_flDistance[0x4];
        [FieldOffset(0x6C)] public fixed byte m_bExtrapolateMovement[0x4];
        [FieldOffset(0x70)] public fixed byte m_flMinExtrapolationSpeed[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x158)]
    public unsafe struct CFootLockUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte m_opFixedSettings[0x70];
        [FieldOffset(0xE0)] public fixed byte m_footSettings[0x18];
        [FieldOffset(0xF8)] public fixed byte m_hipShiftDamping[0x18];
        [FieldOffset(0x110)] public fixed byte m_rootHeightDamping[0x18];
        [FieldOffset(0x128)] public fixed byte m_flStrideCurveScale[0x4];
        [FieldOffset(0x12C)] public fixed byte m_flStrideCurveLimitScale[0x4];
        [FieldOffset(0x130)] public fixed byte m_flStepHeightIncreaseScale[0x4];
        [FieldOffset(0x134)] public fixed byte m_flStepHeightDecreaseScale[0x4];
        [FieldOffset(0x138)] public fixed byte m_flHipShiftScale[0x4];
        [FieldOffset(0x13C)] public fixed byte m_flBlendTime[0x4];
        [FieldOffset(0x140)] public fixed byte m_flMaxRootHeightOffset[0x4];
        [FieldOffset(0x144)] public fixed byte m_flMinRootHeightOffset[0x4];
        [FieldOffset(0x148)] public fixed byte m_flTiltPlanePitchSpringStrength[0x4];
        [FieldOffset(0x14C)] public fixed byte m_flTiltPlaneRollSpringStrength[0x4];
        [FieldOffset(0x150)] public fixed byte m_bApplyFootRotationLimits[0x1];
        [FieldOffset(0x151)] public fixed byte m_bApplyHipShift[0x1];
        [FieldOffset(0x152)] public fixed byte m_bModulateStepHeight[0x1];
        [FieldOffset(0x153)] public fixed byte m_bResetChild[0x1];
        [FieldOffset(0x154)] public fixed byte m_bEnableVerticalCurvedPaths[0x1];
        [FieldOffset(0x155)] public fixed byte m_bEnableRootHeightDamping[0x3];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmOrientationWarpEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmIDValueNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct PulseGraphExecutionHistoryNodeDesc_t {
        [FieldOffset(0x0)] public fixed byte strCellDesc[0x10];
        [FieldOffset(0x10)] public fixed byte strBindingName[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2C)]
    public unsafe struct JiggleBoneSettings_t {
        [FieldOffset(0x0)] public fixed byte m_nBoneIndex[0x4];
        [FieldOffset(0x4)] public fixed byte m_flSpringStrength[0x4];
        [FieldOffset(0x8)] public fixed byte m_flMaxTimeStep[0x4];
        [FieldOffset(0xC)] public fixed byte m_flDamping[0x4];
        [FieldOffset(0x10)] public fixed byte m_vBoundsMaxLS[0xC];
        [FieldOffset(0x1C)] public fixed byte m_vBoundsMinLS[0xC];
        [FieldOffset(0x28)] public fixed byte m_eSimSpace[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD8)]
    public unsafe struct CJumpHelperUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0xB0];
        [FieldOffset(0xB0)] public fixed byte m_hTargetParam[0x4];
        [FieldOffset(0xB4)] public fixed byte m_flOriginalJumpMovement[0xC];
        [FieldOffset(0xC0)] public fixed byte m_flOriginalJumpDuration[0x4];
        [FieldOffset(0xC4)] public fixed byte m_flJumpStartCycle[0x4];
        [FieldOffset(0xC8)] public fixed byte m_flJumpEndCycle[0x4];
        [FieldOffset(0xCC)] public fixed byte m_eCorrectionMethod[0x4];
        [FieldOffset(0xD0)] public fixed byte m_bTranslationAxis[0x3];
        [FieldOffset(0xD3)] public fixed byte m_bScaleSpeed[0x5];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmControlParameterBoolNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x120)]
    public unsafe struct CNmChainLookatTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0x120];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct FootLockPoseOpFixedSettings {
        [FieldOffset(0x0)] public fixed byte m_footInfo[0x18];
        [FieldOffset(0x18)] public fixed byte m_hipDampingSettings[0x18];
        [FieldOffset(0x30)] public fixed byte m_nHipBoneIndex[0x4];
        [FieldOffset(0x34)] public fixed byte m_ikSolverType[0x4];
        [FieldOffset(0x38)] public fixed byte m_bApplyTilt[0x1];
        [FieldOffset(0x39)] public fixed byte m_bApplyHipDrop[0x1];
        [FieldOffset(0x3A)] public fixed byte m_bAlwaysUseFallbackHinge[0x1];
        [FieldOffset(0x3B)] public fixed byte m_bApplyFootRotationLimits[0x1];
        [FieldOffset(0x3C)] public fixed byte m_bApplyLegTwistLimits[0x4];
        [FieldOffset(0x40)] public fixed byte m_flMaxFootHeight[0x4];
        [FieldOffset(0x44)] public fixed byte m_flExtensionScale[0x4];
        [FieldOffset(0x48)] public fixed byte m_flMaxLegTwist[0x4];
        [FieldOffset(0x4C)] public fixed byte m_bEnableLockBreaking[0x4];
        [FieldOffset(0x50)] public fixed byte m_flLockBreakTolerance[0x4];
        [FieldOffset(0x54)] public fixed byte m_flLockBlendTime[0x4];
        [FieldOffset(0x58)] public fixed byte m_bEnableStretching[0x4];
        [FieldOffset(0x5C)] public fixed byte m_flMaxStretchAmount[0x4];
        [FieldOffset(0x60)] public fixed byte m_flStretchExtensionScale[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CBoneVelocityMetricEvaluator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
        [FieldOffset(0x50)] public fixed byte m_nBoneIndex[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CWarpSectionAnimTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
        [FieldOffset(0x50)] public fixed byte m_bWarpPosition[0x1];
        [FieldOffset(0x51)] public fixed byte m_bWarpOrientation[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2C)]
    public unsafe struct SelectorInstanceData_t {
        [FieldOffset(0x0)] public fixed byte m_weights[0x8];
        [FieldOffset(0x8)] public fixed byte m_currentIndexStartTime[0xC];
        [FieldOffset(0x14)] public fixed byte m_currentIndex[0x4];
        [FieldOffset(0x18)] public fixed byte m_previousIndex[0x14];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CModelConfigElement_RandomColor {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Gradient[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CFootMotion {
        [FieldOffset(0x0)] public fixed byte m_strides[0x18];
        [FieldOffset(0x18)] public fixed byte m_name[0x8];
        [FieldOffset(0x20)] public fixed byte m_bAdditive[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CJiggleBoneUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte m_opFixedData[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmConstVectorNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_value[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct MoodAnimation_t {
        [FieldOffset(0x0)] public fixed byte m_sName[0x8];
        [FieldOffset(0x8)] public fixed byte m_flWeight[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CLODComponentUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_nServerLOD[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmIsTargetSetNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nInputValueNodeIdx[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CPhysSurfacePropertiesVehicle {
        [FieldOffset(0x0)] public fixed byte m_wheelDrag[0x4];
        [FieldOffset(0x4)] public fixed byte m_wheelFrictionScale[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CAnimDataChannelDesc {
        [FieldOffset(0x0)] public fixed byte m_szChannelClass[0x10];
        [FieldOffset(0x10)] public fixed byte m_szVariableName[0x10];
        [FieldOffset(0x20)] public fixed byte m_nFlags[0x4];
        [FieldOffset(0x24)] public fixed byte m_nType[0x4];
        [FieldOffset(0x28)] public fixed byte m_szGrouping[0x10];
        [FieldOffset(0x38)] public fixed byte m_szDescription[0x10];
        [FieldOffset(0x48)] public fixed byte m_szElementNameArray[0x18];
        [FieldOffset(0x60)] public fixed byte m_nElementIndexArray[0x18];
        [FieldOffset(0x78)] public fixed byte m_nElementMaskArray[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CPairedSequenceComponentUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x38];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CNmParticleEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_relevance[0x4];
        [FieldOffset(0x1C)] public fixed byte m_type[0x4];
        [FieldOffset(0x20)] public fixed byte m_target[0x8];
        [FieldOffset(0x28)] public fixed byte m_hParticleSystem[0x8];
        [FieldOffset(0x30)] public fixed byte m_tags[0x8];
        [FieldOffset(0x38)] public fixed byte m_bStopImmediately[0x1];
        [FieldOffset(0x39)] public fixed byte m_bDetachFromOwner[0x1];
        [FieldOffset(0x3A)] public fixed byte m_bPlayEndCap[0x6];
        [FieldOffset(0x40)] public fixed byte m_attachmentPoint0[0x8];
        [FieldOffset(0x48)] public fixed byte m_attachmentType0[0x8];
        [FieldOffset(0x50)] public fixed byte m_attachmentPoint1[0x8];
        [FieldOffset(0x58)] public fixed byte m_attachmentType1[0x8];
        [FieldOffset(0x60)] public fixed byte m_config[0x8];
        [FieldOffset(0x68)] public fixed byte m_effectForConfig[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct MotionSelection {
        [FieldOffset(0x0)] public fixed byte pad_0[0x24];
        [FieldOffset(0x24)] public fixed byte m_nConfigIndex[0xC];
        [FieldOffset(0x30)] public fixed byte m_flCycleZeroTime[0xC];
        [FieldOffset(0x3C)] public fixed byte m_flPlaybackSpeed[0xC];
        [FieldOffset(0x48)] public fixed byte m_flStartTime[0xC];
        [FieldOffset(0x54)] public fixed byte m_nSample[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CMorphRectData {
        [FieldOffset(0x0)] public fixed byte m_nXLeftDst[0x2];
        [FieldOffset(0x2)] public fixed byte m_nYTopDst[0x2];
        [FieldOffset(0x4)] public fixed byte m_flUWidthSrc[0x4];
        [FieldOffset(0x8)] public fixed byte m_flVHeightSrc[0x8];
        [FieldOffset(0x10)] public fixed byte m_bundleDatas[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CAnimFoot {
        [FieldOffset(0x0)] public fixed byte m_name[0x8];
        [FieldOffset(0x8)] public fixed byte m_vBallOffset[0xC];
        [FieldOffset(0x14)] public fixed byte m_vHeelOffset[0xC];
        [FieldOffset(0x20)] public fixed byte m_ankleBoneIndex[0x4];
        [FieldOffset(0x24)] public fixed byte m_toeBoneIndex[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CParentConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmCachedVectorNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nInputValueNodeIdx[0x4];
        [FieldOffset(0x14)] public fixed byte m_mode[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmStateNode__TimedEvent_t {
        [FieldOffset(0x0)] public fixed byte m_ID[0x8];
        [FieldOffset(0x8)] public fixed byte m_flTimeValueSeconds[0x4];
        [FieldOffset(0xC)] public fixed byte m_comparisionOperator[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CFootPositionMetricEvaluator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
        [FieldOffset(0x50)] public fixed byte m_footIndices[0x18];
        [FieldOffset(0x68)] public fixed byte m_bIgnoreSlope[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CParticleVariableRef {
        [FieldOffset(0x0)] public fixed byte m_variableName[0x38];
        [FieldOffset(0x38)] public fixed byte m_variableType[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2C)]
    public unsafe struct CMoverInstanceData {
        [FieldOffset(0x0)] public fixed byte m_flDampedValue[0x4];
        [FieldOffset(0x4)] public fixed byte m_vMovement[0x18];
        [FieldOffset(0x1C)] public fixed byte m_Rotation[0x4];
        [FieldOffset(0x20)] public fixed byte m_TargetOrientation[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct HSequence {
        [FieldOffset(0x0)] public fixed byte m_Value[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CDampedValueUpdateItem {
        [FieldOffset(0x0)] public fixed byte m_damping[0x20];
        [FieldOffset(0x20)] public fixed byte m_hParamIn[0x2];
        [FieldOffset(0x22)] public fixed byte m_hParamOut[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CAnimLocalHierarchy {
        [FieldOffset(0x0)] public fixed byte m_sBone[0x10];
        [FieldOffset(0x10)] public fixed byte m_sNewParent[0x10];
        [FieldOffset(0x20)] public fixed byte m_nStartFrame[0x4];
        [FieldOffset(0x24)] public fixed byte m_nPeakFrame[0x4];
        [FieldOffset(0x28)] public fixed byte m_nTailFrame[0x4];
        [FieldOffset(0x2C)] public fixed byte m_nEndFrame[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xE0)]
    public unsafe struct CBlendUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
        [FieldOffset(0x60)] public fixed byte m_children[0x18];
        [FieldOffset(0x78)] public fixed byte m_sortedOrder[0x18];
        [FieldOffset(0x90)] public fixed byte m_targetValues[0x1C];
        [FieldOffset(0xAC)] public fixed byte m_blendValueSource[0x4];
        [FieldOffset(0xB0)] public fixed byte m_eLinearRootMotionBlendMode[0x4];
        [FieldOffset(0xB4)] public fixed byte m_paramIndex[0x4];
        [FieldOffset(0xB8)] public fixed byte m_damping[0x18];
        [FieldOffset(0xD0)] public fixed byte m_blendKeyType[0x4];
        [FieldOffset(0xD4)] public fixed byte m_bLockBlendOnReset[0x1];
        [FieldOffset(0xD5)] public fixed byte m_bSyncCycles[0x1];
        [FieldOffset(0xD6)] public fixed byte m_bLoop[0x1];
        [FieldOffset(0xD7)] public fixed byte m_bLockWhenWaning[0x1];
        [FieldOffset(0xD8)] public fixed byte m_bIsAngle[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct PulseGraphExecutionHistoryEntry_t {
        [FieldOffset(0x0)] public fixed byte nCursorID[0x4];
        [FieldOffset(0x4)] public fixed byte nEditorID[0x4];
        [FieldOffset(0x8)] public fixed byte seqPoint[0x10];
        [FieldOffset(0x18)] public fixed byte flExecTime[0x4];
        [FieldOffset(0x1C)] public fixed byte unFlags[0x4];
        [FieldOffset(0x20)] public fixed byte tagName[0x10];
        [FieldOffset(0x30)] public fixed byte childID[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA0)]
    public unsafe struct CQuaternionAnimParameter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte m_defaultValue[0x10];
        [FieldOffset(0x90)] public fixed byte m_bInterpolate[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2F8)]
    public unsafe struct PermModelData_t {
        [FieldOffset(0x0)] public fixed byte m_name[0x8];
        [FieldOffset(0x8)] public fixed byte m_modelInfo[0x58];
        [FieldOffset(0x60)] public fixed byte m_ExtParts[0x18];
        [FieldOffset(0x78)] public fixed byte m_refMeshes[0x18];
        [FieldOffset(0x90)] public fixed byte m_refMeshGroupMasks[0x18];
        [FieldOffset(0xA8)] public fixed byte m_refPhysGroupMasks[0x18];
        [FieldOffset(0xC0)] public fixed byte m_refLODGroupMasks[0x18];
        [FieldOffset(0xD8)] public fixed byte m_lodGroupSwitchDistances[0x18];
        [FieldOffset(0xF0)] public fixed byte m_refPhysicsData[0x18];
        [FieldOffset(0x108)] public fixed byte m_refPhysicsHitboxData[0x18];
        [FieldOffset(0x120)] public fixed byte m_refAnimGroups[0x18];
        [FieldOffset(0x138)] public fixed byte m_refSequenceGroups[0x18];
        [FieldOffset(0x150)] public fixed byte m_meshGroups[0x18];
        [FieldOffset(0x168)] public fixed byte m_materialGroups[0x18];
        [FieldOffset(0x180)] public fixed byte m_nDefaultMeshGroupMask[0x8];
        [FieldOffset(0x188)] public fixed byte m_modelSkeleton[0xA8];
        [FieldOffset(0x230)] public fixed byte m_remappingTable[0x18];
        [FieldOffset(0x248)] public fixed byte m_remappingTableStarts[0x18];
        [FieldOffset(0x260)] public fixed byte m_boneFlexDrivers[0x18];
        [FieldOffset(0x278)] public fixed byte m_pModelConfigList[0x8];
        [FieldOffset(0x280)] public fixed byte m_BodyGroupsHiddenInTools[0x18];
        [FieldOffset(0x298)] public fixed byte m_refAnimIncludeModels[0x18];
        [FieldOffset(0x2B0)] public fixed byte m_AnimatedMaterialAttributes[0x18];
        [FieldOffset(0x2C8)] public fixed byte m_animGraph2Refs[0x18];
        [FieldOffset(0x2E0)] public fixed byte m_vecNmSkeletonRefs[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct PulseCursorYieldToken_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CNmSampleTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x24)]
    public unsafe struct CFollowPathInstanceData {
        [FieldOffset(0x0)] public fixed byte m_xLastPredictedTransformsDeltas[0x8];
        [FieldOffset(0x8)] public fixed byte m_dampedTurnValue[0x4];
        [FieldOffset(0xC)] public fixed byte m_flTurnAmount[0x4];
        [FieldOffset(0x10)] public fixed byte m_flPredictionScale[0xC];
        [FieldOffset(0x1C)] public fixed byte m_flLastPathTime[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CStaticPoseCacheBuilder {
        [FieldOffset(0x0)] public fixed byte pad_0[0x38];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct ModelMeshBufferData_t {
        [FieldOffset(0x0)] public fixed byte m_nBlockIndex[0x4];
        [FieldOffset(0x4)] public fixed byte m_nElementCount[0x4];
        [FieldOffset(0x8)] public fixed byte m_nElementSizeInBytes[0x4];
        [FieldOffset(0xC)] public fixed byte m_bMeshoptCompressed[0x1];
        [FieldOffset(0xD)] public fixed byte m_bMeshoptIndexSequence[0x1];
        [FieldOffset(0xE)] public fixed byte m_nMeshoptMeshletEncodeVersion[0x1];
        [FieldOffset(0xF)] public fixed byte m_bCompressedZSTD[0x1];
        [FieldOffset(0x10)] public fixed byte m_bCreateBufferSRV[0x1];
        [FieldOffset(0x11)] public fixed byte m_bCreateBufferUAV[0x1];
        [FieldOffset(0x12)] public fixed byte m_bCreateRawBuffer[0x1];
        [FieldOffset(0x13)] public fixed byte m_bCreatePooledBuffer[0x1];
        [FieldOffset(0x14)] public fixed byte m_nBufferUsage[0x4];
        [FieldOffset(0x18)] public fixed byte m_inputLayoutFields[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x138)]
    public unsafe struct CSequenceGroupData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_sName[0x10];
        [FieldOffset(0x20)] public fixed byte m_nFlags[0x8];
        [FieldOffset(0x28)] public fixed byte m_localSequenceNameArray[0x18];
        [FieldOffset(0x40)] public fixed byte m_localS1SeqDescArray[0x18];
        [FieldOffset(0x58)] public fixed byte m_localMultiSeqDescArray[0x18];
        [FieldOffset(0x70)] public fixed byte m_localSynthAnimDescArray[0x18];
        [FieldOffset(0x88)] public fixed byte m_localCmdSeqDescArray[0x18];
        [FieldOffset(0xA0)] public fixed byte m_localBoneMaskArray[0x18];
        [FieldOffset(0xB8)] public fixed byte m_localScaleSetArray[0x18];
        [FieldOffset(0xD0)] public fixed byte m_localBoneNameArray[0x18];
        [FieldOffset(0xE8)] public fixed byte m_localNodeName[0x10];
        [FieldOffset(0xF8)] public fixed byte m_localPoseParamArray[0x18];
        [FieldOffset(0x110)] public fixed byte m_keyValues[0x10];
        [FieldOffset(0x120)] public fixed byte m_localIKAutoplayLockArray[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x100)]
    public unsafe struct CStateMachineUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte m_stateMachine[0x58];
        [FieldOffset(0xC8)] public fixed byte m_stateData[0x18];
        [FieldOffset(0xE0)] public fixed byte m_transitionData[0x1C];
        [FieldOffset(0xFC)] public fixed byte m_bBlockWaningTags[0x1];
        [FieldOffset(0xFD)] public fixed byte m_bLockStateWhenWaning[0x1];
        [FieldOffset(0xFE)] public fixed byte m_bResetWhenActivated[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CNmIDBasedSelectorNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_optionNodeIndices[0x18];
        [FieldOffset(0x28)] public fixed byte m_optionIDs[0x30];
        [FieldOffset(0x58)] public fixed byte m_nParameterNodeIdx[0x2];
        [FieldOffset(0x5A)] public fixed byte m_nFallbackNodeIdx[0x2];
        [FieldOffset(0x5C)] public fixed byte m_bIgnoreInvalidOptions[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x180)]
    public unsafe struct CAimMatrixUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte m_opFixedSettings[0xF8];
        [FieldOffset(0x168)] public fixed byte m_target[0x4];
        [FieldOffset(0x16C)] public fixed byte m_paramIndex[0x4];
        [FieldOffset(0x170)] public fixed byte m_hSequence[0x4];
        [FieldOffset(0x174)] public fixed byte m_bResetChild[0x1];
        [FieldOffset(0x175)] public fixed byte m_bLockWhenWaning[0xB];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC0)]
    public unsafe struct SkeletonAnimCapture_t__Frame_t {
        [FieldOffset(0x0)] public fixed byte m_flTime[0x4];
        [FieldOffset(0x4)] public fixed byte m_Stamp[0x1C];
        [FieldOffset(0x20)] public fixed byte m_Transform[0x20];
        [FieldOffset(0x40)] public fixed byte m_bTeleport[0x8];
        [FieldOffset(0x48)] public fixed byte m_CompositeBones[0x18];
        [FieldOffset(0x60)] public fixed byte m_SimStateBones[0x18];
        [FieldOffset(0x78)] public fixed byte m_FeModelAnims[0x18];
        [FieldOffset(0x90)] public fixed byte m_FeModelPos[0x18];
        [FieldOffset(0xA8)] public fixed byte m_FlexControllerWeights[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CModelConfigElement_Command {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Command[0x8];
        [FieldOffset(0x50)] public fixed byte m_Args[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct TargetSelectorInstanceData_t {
        [FieldOffset(0x0)] public fixed byte m_currentIndex[0x1C];
        [FieldOffset(0x1C)] public fixed byte m_vMSRootMotionAnlyzerTarget[0x14];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CAnimEventDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_nFrame[0x4];
        [FieldOffset(0xC)] public fixed byte m_nEndFrame[0x4];
        [FieldOffset(0x10)] public fixed byte m_flCycle[0x4];
        [FieldOffset(0x14)] public fixed byte m_flDuration[0x4];
        [FieldOffset(0x18)] public fixed byte m_EventData[0x10];
        [FieldOffset(0x28)] public fixed byte m_sLegacyOptions[0x10];
        [FieldOffset(0x38)] public fixed byte m_sEventName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CNmRootMotionData {
        [FieldOffset(0x0)] public fixed byte m_transforms[0x18];
        [FieldOffset(0x18)] public fixed byte m_nNumFrames[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flAverageLinearVelocity[0x4];
        [FieldOffset(0x20)] public fixed byte m_flAverageAngularVelocityRadians[0x10];
        [FieldOffset(0x30)] public fixed byte m_totalDelta[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CPulseGraphExecutionHistory {
        [FieldOffset(0x0)] public fixed byte m_nInstanceID[0x8];
        [FieldOffset(0x8)] public fixed byte m_strFileName[0x8];
        [FieldOffset(0x10)] public fixed byte m_vecHistory[0x18];
        [FieldOffset(0x28)] public fixed byte m_mapCellDesc[0x28];
        [FieldOffset(0x50)] public fixed byte m_mapCursorDesc[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct AnimScriptHandle {
        [FieldOffset(0x0)] public fixed byte m_id[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CFlexOp {
        [FieldOffset(0x0)] public fixed byte m_OpCode[0x4];
        [FieldOffset(0x4)] public fixed byte m_Data[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD0)]
    public unsafe struct CHitReactUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte m_opFixedSettings[0x4C];
        [FieldOffset(0xBC)] public fixed byte m_triggerParam[0x2];
        [FieldOffset(0xBE)] public fixed byte m_hitBoneParam[0x2];
        [FieldOffset(0xC0)] public fixed byte m_hitOffsetParam[0x2];
        [FieldOffset(0xC2)] public fixed byte m_hitDirectionParam[0x2];
        [FieldOffset(0xC4)] public fixed byte m_hitStrengthParam[0x4];
        [FieldOffset(0xC8)] public fixed byte m_flMinDelayBetweenHits[0x4];
        [FieldOffset(0xCC)] public fixed byte m_bResetChild[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x160)]
    public unsafe struct CLookAtUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte m_opFixedSettings[0xD8];
        [FieldOffset(0x148)] public fixed byte m_target[0x4];
        [FieldOffset(0x14C)] public fixed byte m_paramIndex[0x2];
        [FieldOffset(0x14E)] public fixed byte m_weightParamIndex[0x2];
        [FieldOffset(0x150)] public fixed byte m_bResetChild[0x1];
        [FieldOffset(0x151)] public fixed byte m_bLockWhenWaning[0xF];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CAnimBone {
        [FieldOffset(0x0)] public fixed byte m_name[0x10];
        [FieldOffset(0x10)] public fixed byte m_parent[0x4];
        [FieldOffset(0x14)] public fixed byte m_pos[0xC];
        [FieldOffset(0x20)] public fixed byte m_quat[0x10];
        [FieldOffset(0x30)] public fixed byte m_scale[0x4];
        [FieldOffset(0x34)] public fixed byte m_qAlignment[0x10];
        [FieldOffset(0x44)] public fixed byte m_flags[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x100)]
    public unsafe struct CAnimParameterManagerUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_parameters[0x18];
        [FieldOffset(0x30)] public fixed byte m_idToIndexMap[0x20];
        [FieldOffset(0x50)] public fixed byte m_nameToIndexMap[0x20];
        [FieldOffset(0x70)] public fixed byte m_indexToHandle[0x18];
        [FieldOffset(0x88)] public fixed byte m_autoResetParams[0x18];
        [FieldOffset(0xA0)] public fixed byte m_autoResetMap[0x60];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct BoneDemoCaptureSettings_t {
        [FieldOffset(0x0)] public fixed byte m_boneName[0x8];
        [FieldOffset(0x8)] public fixed byte m_flErrorSplineRotationMax[0x4];
        [FieldOffset(0xC)] public fixed byte m_flErrorSplineTranslationMax[0x4];
        [FieldOffset(0x10)] public fixed byte m_flErrorSplineScaleMax[0x4];
        [FieldOffset(0x14)] public fixed byte m_flErrorQuantizationRotationMax[0x4];
        [FieldOffset(0x18)] public fixed byte m_flErrorQuantizationTranslationMax[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flErrorQuantizationScaleMax[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x100)]
    public unsafe struct PairedSequenceData {
        [FieldOffset(0x0)] public fixed byte m_vecPairedSequences[0x100];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CBoneConstraintPoseSpaceMorph__Input_t {
        [FieldOffset(0x0)] public fixed byte m_inputValue[0x10];
        [FieldOffset(0x10)] public fixed byte m_outputWeightList[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct MoodAnimationLayer_t {
        [FieldOffset(0x0)] public fixed byte m_sName[0x8];
        [FieldOffset(0x8)] public fixed byte m_bActiveListening[0x1];
        [FieldOffset(0x9)] public fixed byte m_bActiveTalking[0x7];
        [FieldOffset(0x10)] public fixed byte m_layerAnimations[0x18];
        [FieldOffset(0x28)] public fixed byte m_flIntensity[0x8];
        [FieldOffset(0x30)] public fixed byte m_flDurationScale[0x8];
        [FieldOffset(0x38)] public fixed byte m_bScaleWithInts[0x4];
        [FieldOffset(0x3C)] public fixed byte m_flNextStart[0x8];
        [FieldOffset(0x44)] public fixed byte m_flStartOffset[0x8];
        [FieldOffset(0x4C)] public fixed byte m_flEndOffset[0x8];
        [FieldOffset(0x54)] public fixed byte m_flFadeIn[0x4];
        [FieldOffset(0x58)] public fixed byte m_flFadeOut[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CSpeedScaleUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte m_paramIndex[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CSequenceTagSpans {
        [FieldOffset(0x0)] public fixed byte m_sSequenceName[0x8];
        [FieldOffset(0x8)] public fixed byte m_tags[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CModelConfigElement_SetBodygroupOnAttachedModels {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_GroupName[0x8];
        [FieldOffset(0x50)] public fixed byte m_nChoice[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CCurrentVelocityMetricEvaluator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmBoolValueNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CAnimReplayFrame {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_inputDataBlocks[0x18];
        [FieldOffset(0x28)] public fixed byte m_instanceData[0x18];
        [FieldOffset(0x40)] public fixed byte m_startingLocalToWorldTransform[0x20];
        [FieldOffset(0x60)] public fixed byte m_localToWorldTransform[0x20];
        [FieldOffset(0x80)] public fixed byte m_timeStamp[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CNmTransitionEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_rule[0x8];
        [FieldOffset(0x20)] public fixed byte m_ID[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CNmFloatCurveEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_ID[0x8];
        [FieldOffset(0x20)] public fixed byte m_curve[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct CParticleTransformInput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nType[0x8];
        [FieldOffset(0x18)] public fixed byte m_NamedValue[0x40];
        [FieldOffset(0x58)] public fixed byte m_bFollowNamedValue[0x1];
        [FieldOffset(0x59)] public fixed byte m_bSupportsDisabled[0x1];
        [FieldOffset(0x5A)] public fixed byte m_bUseOrientation[0x2];
        [FieldOffset(0x5C)] public fixed byte m_nControlPoint[0x4];
        [FieldOffset(0x60)] public fixed byte m_nControlPointRangeMax[0x4];
        [FieldOffset(0x64)] public fixed byte m_flEndCPGrowthTime[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CPathAnimMotorUpdaterBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
        [FieldOffset(0x20)] public fixed byte m_bLockToPath[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct PGDInstruction_t {
        [FieldOffset(0x0)] public fixed byte m_nCode[0x4];
        [FieldOffset(0x4)] public fixed byte m_nVar[0x4];
        [FieldOffset(0x8)] public fixed byte m_nReg0[0x2];
        [FieldOffset(0xA)] public fixed byte m_nReg1[0x2];
        [FieldOffset(0xC)] public fixed byte m_nReg2[0x4];
        [FieldOffset(0x10)] public fixed byte m_nInvokeBindingIndex[0x4];
        [FieldOffset(0x14)] public fixed byte m_nChunk[0x4];
        [FieldOffset(0x18)] public fixed byte m_nDestInstruction[0x4];
        [FieldOffset(0x1C)] public fixed byte m_nCallInfoIndex[0x4];
        [FieldOffset(0x20)] public fixed byte m_nConstIdx[0x2];
        [FieldOffset(0x22)] public fixed byte m_nDomainValueIdx[0x2];
        [FieldOffset(0x24)] public fixed byte m_nBlackboardReferenceIdx[0x2];
        [FieldOffset(0x26)] public fixed byte m_nTempVarIdx[0x12];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmFootstepEventPercentageThroughNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nSourceStateNodeIdx[0x2];
        [FieldOffset(0x12)] public fixed byte m_phaseCondition[0x2];
        [FieldOffset(0x14)] public fixed byte m_eventConditionRules[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct AimCameraOpFixedSettings_t {
        [FieldOffset(0x0)] public fixed byte m_nChainIndex[0x4];
        [FieldOffset(0x4)] public fixed byte m_nCameraJointIndex[0x4];
        [FieldOffset(0x8)] public fixed byte m_nPelvisJointIndex[0x4];
        [FieldOffset(0xC)] public fixed byte m_nClavicleLeftJointIndex[0x4];
        [FieldOffset(0x10)] public fixed byte m_nClavicleRightJointIndex[0x4];
        [FieldOffset(0x14)] public fixed byte m_nDepenetrationJointIndex[0x4];
        [FieldOffset(0x18)] public fixed byte m_propJoints[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct SkeletonAnimCapture_t__Camera_t {
        [FieldOffset(0x0)] public fixed byte m_tmCamera[0x20];
        [FieldOffset(0x20)] public fixed byte m_flTime[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CNmGraphEventConditionNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nSourceStateNodeIdx[0x4];
        [FieldOffset(0x14)] public fixed byte m_eventConditionRules[0x4];
        [FieldOffset(0x18)] public fixed byte m_conditions[0x68];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x110)]
    public unsafe struct CFollowAttachmentUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte m_opFixedData[0xA0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB8)]
    public unsafe struct CMovementComponentUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_motors[0x18];
        [FieldOffset(0x48)] public fixed byte m_facingDamping[0x20];
        [FieldOffset(0x68)] public fixed byte m_nDefaultMotorIndex[0x4];
        [FieldOffset(0x6C)] public fixed byte m_flDefaultRunSpeed[0x4];
        [FieldOffset(0x70)] public fixed byte m_bMoveVarsDisabled[0x1];
        [FieldOffset(0x71)] public fixed byte m_bNetworkPath[0x1];
        [FieldOffset(0x72)] public fixed byte m_bNetworkFacing[0x1];
        [FieldOffset(0x73)] public fixed byte m_paramHandles[0x45];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CModelConfigElement_SetMaterialGroup {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_MaterialGroupName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct IParticleEffect {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CFutureFacingMetricEvaluator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
        [FieldOffset(0x50)] public fixed byte m_flDistance[0x4];
        [FieldOffset(0x54)] public fixed byte m_flTime[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CNmIDBasedClipSelectorNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_optionNodeIndices[0x18];
        [FieldOffset(0x28)] public fixed byte m_optionIDs[0x30];
        [FieldOffset(0x58)] public fixed byte m_nParameterNodeIdx[0x2];
        [FieldOffset(0x5A)] public fixed byte m_nFallbackNodeIdx[0x2];
        [FieldOffset(0x5C)] public fixed byte m_bIgnoreInvalidOptions[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct CLeanMatrixInstanceData {
        [FieldOffset(0x0)] public fixed byte m_flValueY[0x4];
        [FieldOffset(0x4)] public fixed byte m_flValueX[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct NmCompressionSettings_t {
        [FieldOffset(0x0)] public fixed byte m_translationRangeX[0x8];
        [FieldOffset(0x8)] public fixed byte m_translationRangeY[0x8];
        [FieldOffset(0x10)] public fixed byte m_translationRangeZ[0x8];
        [FieldOffset(0x18)] public fixed byte m_scaleRange[0x8];
        [FieldOffset(0x20)] public fixed byte m_nTrackReadOffset[0x10];
        [FieldOffset(0x30)] public fixed byte m_constantRotation[0x10];
        [FieldOffset(0x40)] public fixed byte m_bIsRotationStatic[0x1];
        [FieldOffset(0x41)] public fixed byte m_bIsTranslationStatic[0x1];
        [FieldOffset(0x42)] public fixed byte m_bIsScaleStatic[0xE];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulse_Variable {
        [FieldOffset(0x0)] public fixed byte m_Name[0x10];
        [FieldOffset(0x10)] public fixed byte m_Description[0x8];
        [FieldOffset(0x18)] public fixed byte m_Type[0x18];
        [FieldOffset(0x30)] public fixed byte m_DefaultValue[0x14];
        [FieldOffset(0x44)] public fixed byte m_nKeysSource[0x4];
        [FieldOffset(0x48)] public fixed byte m_bIsPublicBlackboardVariable[0x1];
        [FieldOffset(0x49)] public fixed byte m_bIsObservable[0x3];
        [FieldOffset(0x4C)] public fixed byte m_nEditorNodeID[0x4];
        [FieldOffset(0x50)] public fixed byte m_Metadata[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct PARTICLE_EHANDLE__ {
        [FieldOffset(0x0)] public fixed byte unused[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA0)]
    public unsafe struct CAddUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x94];
        [FieldOffset(0x94)] public fixed byte m_footMotionTiming[0x4];
        [FieldOffset(0x98)] public fixed byte m_bApplyToFootMotion[0x1];
        [FieldOffset(0x99)] public fixed byte m_bApplyChannelsSeparately[0x1];
        [FieldOffset(0x9A)] public fixed byte m_bUseModelSpace[0x1];
        [FieldOffset(0x9B)] public fixed byte m_bApplyScale[0x5];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct CAnimEnum {
        [FieldOffset(0x0)] public fixed byte m_value[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CDemoSettingsComponentUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_settings[0x80];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CAnimDecoder {
        [FieldOffset(0x0)] public fixed byte m_szName[0x10];
        [FieldOffset(0x10)] public fixed byte m_nVersion[0x4];
        [FieldOffset(0x14)] public fixed byte m_nType[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmCachedTargetNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nInputValueNodeIdx[0x4];
        [FieldOffset(0x14)] public fixed byte m_mode[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x178)]
    public unsafe struct CPerParticleFloatInput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmConstBoolNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_bValue[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CNmBitFlags {
        [FieldOffset(0x0)] public fixed byte m_flags[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CFootStride {
        [FieldOffset(0x0)] public fixed byte m_definition[0x40];
        [FieldOffset(0x40)] public fixed byte m_trajectories[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x168)]
    public unsafe struct CSceneObjectData__RTProxyDrawDescriptor_t {
        [FieldOffset(0x0)] public fixed byte m_materialGroupToken[0x4];
        [FieldOffset(0x4)] public fixed byte m_nSrcDrawIndex[0x4];
        [FieldOffset(0x8)] public fixed byte m_drawDesc[0x120];
        [FieldOffset(0x128)] public fixed byte m_mWorldFromLocal[0x30];
        [FieldOffset(0x158)] public fixed byte m_nVertexAlbedoFormat[0x1];
        [FieldOffset(0x159)] public fixed byte m_nVertexAlbedoVB[0x1];
        [FieldOffset(0x15A)] public fixed byte m_nVertexAlbedoOffset[0x2];
        [FieldOffset(0x15C)] public fixed byte m_nVertexAlbedoStride[0x2];
        [FieldOffset(0x15E)] public fixed byte m_nVertexEmissiveFormat[0x1];
        [FieldOffset(0x15F)] public fixed byte m_nVertexEmissiveVB[0x1];
        [FieldOffset(0x160)] public fixed byte m_nVertexEmissiveOffset[0x2];
        [FieldOffset(0x162)] public fixed byte m_nVertexEmissiveStride[0x2];
        [FieldOffset(0x164)] public fixed byte m_fEmissiveFactor[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CNmLegacyEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_animEventClassName[0x8];
        [FieldOffset(0x20)] public fixed byte m_KV[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CStateNodeStateData {
        [FieldOffset(0x0)] public fixed byte m_pChild[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CFootstepLandedAnimTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
        [FieldOffset(0x58)] public fixed byte m_FootstepType[0x8];
        [FieldOffset(0x60)] public fixed byte m_OverrideSoundName[0x8];
        [FieldOffset(0x68)] public fixed byte m_DebugAnimSourceString[0x8];
        [FieldOffset(0x70)] public fixed byte m_BoneName[0x8];
        [FieldOffset(0x78)] public fixed byte m_footstepJumpPhase[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD8)]
    public unsafe struct CEnumAnimParameter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x88];
        [FieldOffset(0x88)] public fixed byte m_defaultValue[0x8];
        [FieldOffset(0x90)] public fixed byte m_enumOptions[0x18];
        [FieldOffset(0xA8)] public fixed byte m_vecEnumReferenced[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CHandshakeAnimTagBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
        [FieldOffset(0x50)] public fixed byte m_bIsDisableTag[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct AnimTagID {
        [FieldOffset(0x0)] public fixed byte m_id[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CWayPointHelperInstanceData {
        [FieldOffset(0x0)] public fixed byte m_vMovement[0xC];
        [FieldOffset(0xC)] public fixed byte m_vRotation[0xC];
        [FieldOffset(0x18)] public fixed byte m_vWaypointPosWS[0xC];
        [FieldOffset(0x24)] public fixed byte m_bStopUpdatingWaypointPos[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CAnimFrameSegment {
        [FieldOffset(0x0)] public fixed byte m_nUniqueFrameIndex[0x4];
        [FieldOffset(0x4)] public fixed byte m_nLocalElementMasks[0x4];
        [FieldOffset(0x8)] public fixed byte m_nLocalChannel[0x8];
        [FieldOffset(0x10)] public fixed byte m_container[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CSlopeComponentUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x34];
        [FieldOffset(0x34)] public fixed byte m_flTraceDistance[0x4];
        [FieldOffset(0x38)] public fixed byte m_hSlopeAngle[0x2];
        [FieldOffset(0x3A)] public fixed byte m_hSlopeAngleFront[0x2];
        [FieldOffset(0x3C)] public fixed byte m_hSlopeAngleSide[0x2];
        [FieldOffset(0x3E)] public fixed byte m_hSlopeHeading[0x2];
        [FieldOffset(0x40)] public fixed byte m_hSlopeNormal[0x2];
        [FieldOffset(0x42)] public fixed byte m_hSlopeNormal_WorldSpace[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CAnimInputDamping {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_speedFunction[0x4];
        [FieldOffset(0xC)] public fixed byte m_fSpeedScale[0x4];
        [FieldOffset(0x10)] public fixed byte m_fFallingSpeedScale[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CHitBoxSet {
        [FieldOffset(0x0)] public fixed byte m_name[0x8];
        [FieldOffset(0x8)] public fixed byte m_nNameHash[0x8];
        [FieldOffset(0x10)] public fixed byte m_HitBoxes[0x18];
        [FieldOffset(0x28)] public fixed byte m_SourceFilename[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct ChainToSolveData_t {
        [FieldOffset(0x0)] public fixed byte m_nChainIndex[0x4];
        [FieldOffset(0x4)] public fixed byte m_SolverSettings[0xC];
        [FieldOffset(0x10)] public fixed byte m_TargetSettings[0x28];
        [FieldOffset(0x38)] public fixed byte m_DebugSetting[0x4];
        [FieldOffset(0x3C)] public fixed byte m_flDebugNormalizedValue[0x4];
        [FieldOffset(0x40)] public fixed byte m_vDebugOffset[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CConstraintSlave {
        [FieldOffset(0x0)] public fixed byte m_qBaseOrientation[0x10];
        [FieldOffset(0x10)] public fixed byte m_vBasePosition[0xC];
        [FieldOffset(0x1C)] public fixed byte m_nBoneHash[0x4];
        [FieldOffset(0x20)] public fixed byte m_flWeight[0x8];
        [FieldOffset(0x28)] public fixed byte m_sName[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct PulseRuntimeOutputIndex_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x3C)]
    public unsafe struct CFootCycleDefinition {
        [FieldOffset(0x0)] public fixed byte m_vStancePositionMS[0xC];
        [FieldOffset(0xC)] public fixed byte m_vMidpointPositionMS[0xC];
        [FieldOffset(0x18)] public fixed byte m_flStanceDirectionMS[0x4];
        [FieldOffset(0x1C)] public fixed byte m_vToStrideStartPos[0xC];
        [FieldOffset(0x28)] public fixed byte m_stanceCycle[0x4];
        [FieldOffset(0x2C)] public fixed byte m_footLiftCycle[0x4];
        [FieldOffset(0x30)] public fixed byte m_footOffCycle[0x4];
        [FieldOffset(0x34)] public fixed byte m_footStrikeCycle[0x4];
        [FieldOffset(0x38)] public fixed byte m_footLandCycle[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CVirtualAnimParameter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte m_expressionString[0x8];
        [FieldOffset(0x78)] public fixed byte m_eParamType[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CMotionMetricEvaluator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_means[0x18];
        [FieldOffset(0x30)] public fixed byte m_standardDeviations[0x18];
        [FieldOffset(0x48)] public fixed byte m_flWeight[0x4];
        [FieldOffset(0x4C)] public fixed byte m_nDimensionStartIndex[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CFutureVelocityMetricEvaluator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
        [FieldOffset(0x50)] public fixed byte m_flDistance[0x4];
        [FieldOffset(0x54)] public fixed byte m_flStoppingDistance[0x4];
        [FieldOffset(0x58)] public fixed byte m_flTargetSpeed[0x4];
        [FieldOffset(0x5C)] public fixed byte m_eMode[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmSkeleton__SecondarySkeleton_t {
        [FieldOffset(0x0)] public fixed byte m_attachToBoneID[0x8];
        [FieldOffset(0x8)] public fixed byte m_skeleton[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CAnimUpdateNodeBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_nodePath[0x30];
        [FieldOffset(0x48)] public fixed byte m_networkMode[0x8];
        [FieldOffset(0x50)] public fixed byte m_name[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CSetParameterActionUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_hParam[0x2];
        [FieldOffset(0x1A)] public fixed byte m_value[0x16];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmFixedWeightBoneMaskNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_flBoneWeight[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1C)]
    public unsafe struct SkeletonAnimCapture_t__FrameStamp_t {
        [FieldOffset(0x0)] public fixed byte m_flTime[0x4];
        [FieldOffset(0x4)] public fixed byte m_flEntitySimTime[0x4];
        [FieldOffset(0x8)] public fixed byte m_bTeleportTick[0x1];
        [FieldOffset(0x9)] public fixed byte m_bPredicted[0x3];
        [FieldOffset(0xC)] public fixed byte m_flCurTime[0x4];
        [FieldOffset(0x10)] public fixed byte m_flRealTime[0x4];
        [FieldOffset(0x14)] public fixed byte m_nFrameCount[0x4];
        [FieldOffset(0x18)] public fixed byte m_nTickCount[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CPulse_DomainValue {
        [FieldOffset(0x0)] public fixed byte m_nType[0x8];
        [FieldOffset(0x8)] public fixed byte m_Value[0x8];
        [FieldOffset(0x10)] public fixed byte m_RequiredRuntimeType[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CBonePositionMetricEvaluator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
        [FieldOffset(0x50)] public fixed byte m_nBoneIndex[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CRenderBufferBinding {
        [FieldOffset(0x0)] public fixed byte m_hBuffer[0x10];
        [FieldOffset(0x10)] public fixed byte m_nBindOffsetBytes[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x178)]
    public unsafe struct CParticleCollectionRendererFloatInput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CNmParameterizedBlendNode__Parameterization_t {
        [FieldOffset(0x0)] public fixed byte m_blendRanges[0x48];
        [FieldOffset(0x48)] public fixed byte m_parameterRange[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CNmEntityAttributeIntEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x38];
        [FieldOffset(0x38)] public fixed byte m_nIntValue[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmNotNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nInputValueNodeIdx[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CMeshletDescriptor {
        [FieldOffset(0x0)] public fixed byte m_PackedAABB[0x8];
        [FieldOffset(0x8)] public fixed byte m_CullingData[0x4];
        [FieldOffset(0xC)] public fixed byte m_nVertexOffset[0x4];
        [FieldOffset(0x10)] public fixed byte m_nTriangleOffset[0x4];
        [FieldOffset(0x14)] public fixed byte m_nVertexCount[0x1];
        [FieldOffset(0x15)] public fixed byte m_nTriangleCount[0x1];
        [FieldOffset(0x16)] public fixed byte m_nBoneIndex[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x98)]
    public unsafe struct CMorphSetData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nWidth[0x4];
        [FieldOffset(0x14)] public fixed byte m_nHeight[0x4];
        [FieldOffset(0x18)] public fixed byte m_bundleTypes[0x18];
        [FieldOffset(0x30)] public fixed byte m_morphDatas[0x18];
        [FieldOffset(0x48)] public fixed byte m_pTextureAtlas[0x8];
        [FieldOffset(0x50)] public fixed byte m_FlexDesc[0x18];
        [FieldOffset(0x68)] public fixed byte m_FlexControllers[0x18];
        [FieldOffset(0x80)] public fixed byte m_FlexRules[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmAndNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_conditionNodeIndices[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CMorphConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
        [FieldOffset(0x60)] public fixed byte m_sTargetMorph[0x8];
        [FieldOffset(0x68)] public fixed byte m_nSlaveChannel[0x4];
        [FieldOffset(0x6C)] public fixed byte m_flMin[0x4];
        [FieldOffset(0x70)] public fixed byte m_flMax[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CClothSettingsAnimTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
        [FieldOffset(0x58)] public fixed byte m_flStiffness[0x4];
        [FieldOffset(0x5C)] public fixed byte m_flEaseIn[0x4];
        [FieldOffset(0x60)] public fixed byte m_flEaseOut[0x8];
        [FieldOffset(0x68)] public fixed byte m_nVertexSet[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CAnimDesc_Flag {
        [FieldOffset(0x0)] public fixed byte m_bLooping[0x1];
        [FieldOffset(0x1)] public fixed byte m_bAllZeros[0x1];
        [FieldOffset(0x2)] public fixed byte m_bHidden[0x1];
        [FieldOffset(0x3)] public fixed byte m_bDelta[0x1];
        [FieldOffset(0x4)] public fixed byte m_bLegacyWorldspace[0x1];
        [FieldOffset(0x5)] public fixed byte m_bModelDoc[0x1];
        [FieldOffset(0x6)] public fixed byte m_bImplicitSeqIgnoreDelta[0x1];
        [FieldOffset(0x7)] public fixed byte m_bAnimGraphAdditive[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC8)]
    public unsafe struct CNmBlend2DNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_sourceNodeIndices[0x18];
        [FieldOffset(0x28)] public fixed byte m_values[0x58];
        [FieldOffset(0x80)] public fixed byte m_indices[0x28];
        [FieldOffset(0xA8)] public fixed byte m_hullIndices[0x18];
        [FieldOffset(0xC0)] public fixed byte m_nInputParameterNodeIdx0[0x2];
        [FieldOffset(0xC2)] public fixed byte m_nInputParameterNodeIdx1[0x2];
        [FieldOffset(0xC4)] public fixed byte m_bAllowLooping[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct CNmFloatChannelData__ChannelSettings_t {
        [FieldOffset(0x0)] public fixed byte m_range[0x8];
        [FieldOffset(0x8)] public fixed byte m_bIsStatic[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CBlendCurve {
        [FieldOffset(0x0)] public fixed byte m_flControlPoint1[0x4];
        [FieldOffset(0x4)] public fixed byte m_flControlPoint2[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CNmSkeleton__ContactConfig_t {
        [FieldOffset(0x0)] public fixed byte m_ID[0x8];
        [FieldOffset(0x8)] public fixed byte m_nBoneIdx[0x4];
        [FieldOffset(0xC)] public fixed byte m_vBoneLocalProbeDir[0xC];
        [FieldOffset(0x18)] public fixed byte m_flProbeMaxDist[0x8];
        [FieldOffset(0x20)] public fixed byte m_audioInfo[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmGraphNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_nNodeIdx[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CAnimationGraphVisualizerSphere {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
        [FieldOffset(0x40)] public fixed byte m_vWsPosition[0x10];
        [FieldOffset(0x50)] public fixed byte m_flRadius[0x4];
        [FieldOffset(0x54)] public fixed byte m_Color[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct CNmClip__ModelSpaceSamplingChainLink_t {
        [FieldOffset(0x0)] public fixed byte m_nBoneIdx[0x4];
        [FieldOffset(0x4)] public fixed byte m_nParentBoneIdx[0x4];
        [FieldOffset(0x8)] public fixed byte m_nParentChainLinkIdx[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CAnimUserDifference {
        [FieldOffset(0x0)] public fixed byte m_name[0x10];
        [FieldOffset(0x10)] public fixed byte m_nType[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmDurationScaleNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x3)]
    public unsafe struct CTransitionUpdateData {
        [FieldOffset(0x0)] public fixed byte m_srcStateIndex[0x1];
        [FieldOffset(0x1)] public fixed byte m_destStateIndex[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2)]
    public unsafe struct PulseRuntimeBlackboardReferenceIndex_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CNmContactEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_configID[0x8];
        [FieldOffset(0x20)] public fixed byte m_probeBoneID[0x8];
        [FieldOffset(0x28)] public fixed byte m_vBoneLocalProbeDir[0xC];
        [FieldOffset(0x34)] public fixed byte m_flProbeMaxDist[0x4];
        [FieldOffset(0x38)] public fixed byte m_audioInfo[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CMovementHandshakeAnimTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CBoneConstraintPoseSpaceBone__Input_t {
        [FieldOffset(0x0)] public fixed byte m_inputValue[0x10];
        [FieldOffset(0x10)] public fixed byte m_outputTransformList[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CSeqMultiFetch {
        [FieldOffset(0x0)] public fixed byte m_flags[0x8];
        [FieldOffset(0x8)] public fixed byte m_localReferenceArray[0x18];
        [FieldOffset(0x20)] public fixed byte m_nGroupSize[0x8];
        [FieldOffset(0x28)] public fixed byte m_nLocalPose[0x8];
        [FieldOffset(0x30)] public fixed byte m_poseKeyArray0[0x18];
        [FieldOffset(0x48)] public fixed byte m_poseKeyArray1[0x18];
        [FieldOffset(0x60)] public fixed byte m_nLocalCyclePoseParameter[0x4];
        [FieldOffset(0x64)] public fixed byte m_bCalculatePoseParameters[0x1];
        [FieldOffset(0x65)] public fixed byte m_bFixedBlendWeight[0x3];
        [FieldOffset(0x68)] public fixed byte m_flFixedBlendWeightVals[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPhysSurfacePropertiesSoundNames {
        [FieldOffset(0x0)] public fixed byte m_impactSoft[0x8];
        [FieldOffset(0x8)] public fixed byte m_impactHard[0x8];
        [FieldOffset(0x10)] public fixed byte m_scrapeSmooth[0x8];
        [FieldOffset(0x18)] public fixed byte m_scrapeRough[0x8];
        [FieldOffset(0x20)] public fixed byte m_bulletImpact[0x8];
        [FieldOffset(0x28)] public fixed byte m_rolling[0x8];
        [FieldOffset(0x30)] public fixed byte m_break[0x8];
        [FieldOffset(0x38)] public fixed byte m_strain[0x8];
        [FieldOffset(0x40)] public fixed byte m_meleeImpact[0x8];
        [FieldOffset(0x48)] public fixed byte m_pushOff[0x8];
        [FieldOffset(0x50)] public fixed byte m_skidStop[0x8];
        [FieldOffset(0x58)] public fixed byte m_resonant[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x128)]
    public unsafe struct NmBoneMaskSetDefinition_t {
        [FieldOffset(0x0)] public fixed byte m_ID[0x8];
        [FieldOffset(0x8)] public fixed byte m_primaryWeightList[0x110];
        [FieldOffset(0x118)] public fixed byte m_secondaryWeightLists[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CAudioAnimTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
        [FieldOffset(0x58)] public fixed byte m_clipName[0x8];
        [FieldOffset(0x60)] public fixed byte m_attachmentName[0x8];
        [FieldOffset(0x68)] public fixed byte m_flVolume[0x4];
        [FieldOffset(0x6C)] public fixed byte m_bStopWhenTagEnds[0x1];
        [FieldOffset(0x6D)] public fixed byte m_bStopWhenGraphEnds[0x1];
        [FieldOffset(0x6E)] public fixed byte m_bPlayOnServer[0x1];
        [FieldOffset(0x6F)] public fixed byte m_bPlayOnClient[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CTurnHelperUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x74];
        [FieldOffset(0x74)] public fixed byte m_facingTarget[0x4];
        [FieldOffset(0x78)] public fixed byte m_turnStartTimeOffset[0x4];
        [FieldOffset(0x7C)] public fixed byte m_turnDuration[0x4];
        [FieldOffset(0x80)] public fixed byte m_bMatchChildDuration[0x4];
        [FieldOffset(0x84)] public fixed byte m_manualTurnOffset[0x4];
        [FieldOffset(0x88)] public fixed byte m_bUseManualTurnOffset[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x148)]
    public unsafe struct CAnimationGroup {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nFlags[0x8];
        [FieldOffset(0x18)] public fixed byte m_name[0x48];
        [FieldOffset(0x60)] public fixed byte m_localHAnimArray_Handle[0x18];
        [FieldOffset(0x78)] public fixed byte m_includedGroupArray_Handle[0x18];
        [FieldOffset(0x90)] public fixed byte m_directHSeqGroup_Handle[0x8];
        [FieldOffset(0x98)] public fixed byte m_decodeKey[0x78];
        [FieldOffset(0x110)] public fixed byte m_szScripts[0x18];
        [FieldOffset(0x128)] public fixed byte m_AdditionalExtRefs[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CPulse_TempVarInfo {
        [FieldOffset(0x0)] public fixed byte m_Name[0x10];
        [FieldOffset(0x10)] public fixed byte m_Type[0x18];
        [FieldOffset(0x28)] public fixed byte m_nEditorNodeID[0x4];
        [FieldOffset(0x2C)] public fixed byte m_bIsObservable[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct NmContactAudioInfo_t {
        [FieldOffset(0x0)] public fixed byte m_audioActionID[0x8];
        [FieldOffset(0x8)] public fixed byte m_audioTypeID[0x8];
        [FieldOffset(0x10)] public fixed byte m_soundeventOverrideID[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct NmSyncTrackTime_t {
        [FieldOffset(0x0)] public fixed byte m_nEventIdx[0x4];
        [FieldOffset(0x4)] public fixed byte m_percentageThrough[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct CNmClip {
        [FieldOffset(0x0)] public fixed byte m_skeleton[0x8];
        [FieldOffset(0x8)] public fixed byte m_nNumFrames[0x4];
        [FieldOffset(0xC)] public fixed byte m_flDuration[0x4];
        [FieldOffset(0x10)] public fixed byte m_compressedPoseData[0x10];
        [FieldOffset(0x20)] public fixed byte m_trackCompressionSettings[0x18];
        [FieldOffset(0x38)] public fixed byte m_compressedPoseOffsets[0x40];
        [FieldOffset(0x78)] public fixed byte m_secondaryAnimations[0x20];
        [FieldOffset(0x98)] public fixed byte m_floatChannelData[0x28];
        [FieldOffset(0xC0)] public fixed byte m_syncTrack[0xB0];
        [FieldOffset(0x170)] public fixed byte m_rootMotion[0x50];
        [FieldOffset(0x1C0)] public fixed byte m_bIsAdditive[0x8];
        [FieldOffset(0x1C8)] public fixed byte m_modelSpaceSamplingChain[0x18];
        [FieldOffset(0x1E0)] public fixed byte m_modelSpaceBoneSamplingIndices[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CToggleComponentActionUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_componentID[0x4];
        [FieldOffset(0x1C)] public fixed byte m_bSetEnabled[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x100)]
    public unsafe struct CNmOverlayBlendTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0x100];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmSpeedScaleBaseNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_nInputValueNodeIdx[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flDefaultInputValue[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmValueNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CAnimationGraphVisualizerPrimitiveBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_Type[0x4];
        [FieldOffset(0xC)] public fixed byte m_OwningAnimNodePaths[0x2C];
        [FieldOffset(0x38)] public fixed byte m_nOwningAnimNodePathCount[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CBindPoseUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct NmSyncTrackTimeRange_t {
        [FieldOffset(0x0)] public fixed byte m_startTime[0x8];
        [FieldOffset(0x8)] public fixed byte m_endTime[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CAnimationGraphVisualizerText {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
        [FieldOffset(0x40)] public fixed byte m_vWsPosition[0x10];
        [FieldOffset(0x50)] public fixed byte m_Color[0x8];
        [FieldOffset(0x58)] public fixed byte m_Text[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CFootTrajectory {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_vOffset[0xC];
        [FieldOffset(0x14)] public fixed byte m_flRotationOffset[0x4];
        [FieldOffset(0x18)] public fixed byte m_flProgression[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x148)]
    public unsafe struct CMotionMatchingUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
        [FieldOffset(0x58)] public fixed byte m_dataSet[0x20];
        [FieldOffset(0x78)] public fixed byte m_metrics[0x18];
        [FieldOffset(0x90)] public fixed byte m_weights[0x50];
        [FieldOffset(0xE0)] public fixed byte m_bSearchEveryTick[0x4];
        [FieldOffset(0xE4)] public fixed byte m_flSearchInterval[0x4];
        [FieldOffset(0xE8)] public fixed byte m_bSearchWhenClipEnds[0x1];
        [FieldOffset(0xE9)] public fixed byte m_bSearchWhenGoalChanges[0x3];
        [FieldOffset(0xEC)] public fixed byte m_blendCurve[0x8];
        [FieldOffset(0xF4)] public fixed byte m_flSampleRate[0x4];
        [FieldOffset(0xF8)] public fixed byte m_flBlendTime[0x4];
        [FieldOffset(0xFC)] public fixed byte m_bLockClipWhenWaning[0x4];
        [FieldOffset(0x100)] public fixed byte m_flSelectionThreshold[0x4];
        [FieldOffset(0x104)] public fixed byte m_flReselectionTimeWindow[0x4];
        [FieldOffset(0x108)] public fixed byte m_bEnableRotationCorrection[0x1];
        [FieldOffset(0x109)] public fixed byte m_bGoalAssist[0x3];
        [FieldOffset(0x10C)] public fixed byte m_flGoalAssistDistance[0x4];
        [FieldOffset(0x110)] public fixed byte m_flGoalAssistTolerance[0x8];
        [FieldOffset(0x118)] public fixed byte m_distanceScale_Damping[0x18];
        [FieldOffset(0x130)] public fixed byte m_flDistanceScale_OuterRadius[0x4];
        [FieldOffset(0x134)] public fixed byte m_flDistanceScale_InnerRadius[0x4];
        [FieldOffset(0x138)] public fixed byte m_flDistanceScale_MaxScale[0x4];
        [FieldOffset(0x13C)] public fixed byte m_flDistanceScale_MinScale[0x4];
        [FieldOffset(0x140)] public fixed byte m_bEnableDistanceScaling[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmReferencePoseNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x120)]
    public unsafe struct CSeqS1SeqDesc {
        [FieldOffset(0x0)] public fixed byte m_sName[0x10];
        [FieldOffset(0x10)] public fixed byte m_flags[0x10];
        [FieldOffset(0x20)] public fixed byte m_fetch[0x70];
        [FieldOffset(0x90)] public fixed byte m_nLocalWeightlist[0x8];
        [FieldOffset(0x98)] public fixed byte m_autoLayerArray[0x18];
        [FieldOffset(0xB0)] public fixed byte m_IKLockArray[0x18];
        [FieldOffset(0xC8)] public fixed byte m_transition[0x8];
        [FieldOffset(0xD0)] public fixed byte m_SequenceKeys[0x10];
        [FieldOffset(0xE0)] public fixed byte m_LegacyKeyValueText[0x10];
        [FieldOffset(0xF0)] public fixed byte m_activityArray[0x18];
        [FieldOffset(0x108)] public fixed byte m_footMotion[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CFlexController {
        [FieldOffset(0x0)] public fixed byte m_szName[0x8];
        [FieldOffset(0x8)] public fixed byte m_szType[0x8];
        [FieldOffset(0x10)] public fixed byte min[0x4];
        [FieldOffset(0x14)] public fixed byte max[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct SkeletonDemoDb_t {
        [FieldOffset(0x0)] public fixed byte m_AnimCaptures[0x18];
        [FieldOffset(0x18)] public fixed byte m_CameraTrack[0x18];
        [FieldOffset(0x30)] public fixed byte m_flRecordingTime[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmFloatRangeComparisonNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_range[0x8];
        [FieldOffset(0x18)] public fixed byte m_nInputValueNodeIdx[0x2];
        [FieldOffset(0x1A)] public fixed byte m_bIsInclusiveCheck[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CMotionNodeSequence {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_tags[0x18];
        [FieldOffset(0x40)] public fixed byte m_hSequence[0x4];
        [FieldOffset(0x44)] public fixed byte m_flPlaybackSpeed[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CNmTwoBoneIKNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_effectorBoneID[0x8];
        [FieldOffset(0x20)] public fixed byte m_nEffectorTargetNodeIdx[0x2];
        [FieldOffset(0x22)] public fixed byte m_nEnabledNodeIdx[0x2];
        [FieldOffset(0x24)] public fixed byte m_flBlendTimeSeconds[0x4];
        [FieldOffset(0x28)] public fixed byte m_blendMode[0x1];
        [FieldOffset(0x29)] public fixed byte m_bIsTargetInWorldSpace[0x3];
        [FieldOffset(0x2C)] public fixed byte m_flChainRotationWeight[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x3B0)]
    public unsafe struct CNmGraphInstance {
        [FieldOffset(0x0)] public fixed byte pad_0[0x3B0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CFlexDesc {
        [FieldOffset(0x0)] public fixed byte m_szFacs[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x238)]
    public unsafe struct CRenderMesh {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_sceneObjects[0xC0];
        [FieldOffset(0xD0)] public fixed byte m_constraints[0x10];
        [FieldOffset(0xE0)] public fixed byte m_skeleton[0x118];
        [FieldOffset(0x1F8)] public fixed byte m_bUseUV2ForCharting[0x1];
        [FieldOffset(0x1F9)] public fixed byte m_bEmbeddedMapMesh[0x27];
        [FieldOffset(0x220)] public fixed byte m_meshDeformParams[0x10];
        [FieldOffset(0x230)] public fixed byte m_pGroomData[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD0)]
    public unsafe struct CAnimSkeleton {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_localSpaceTransforms[0x18];
        [FieldOffset(0x28)] public fixed byte m_modelSpaceTransforms[0x18];
        [FieldOffset(0x40)] public fixed byte m_boneNames[0x18];
        [FieldOffset(0x58)] public fixed byte m_children[0x18];
        [FieldOffset(0x70)] public fixed byte m_parents[0x18];
        [FieldOffset(0x88)] public fixed byte m_feet[0x18];
        [FieldOffset(0xA0)] public fixed byte m_morphNames[0x18];
        [FieldOffset(0xB8)] public fixed byte m_lodBoneCounts[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2)]
    public unsafe struct PulseRuntimeConstantIndex_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CFootAdjustmentInstanceData {
        [FieldOffset(0x0)] public fixed byte pad_0[0xC];
        [FieldOffset(0xC)] public fixed byte m_flStartTime[0xC];
        [FieldOffset(0x18)] public fixed byte m_flDuration[0x24];
        [FieldOffset(0x3C)] public fixed byte m_flStartHeadingWS[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CNmBodyGroupNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_nEnabledNodeIdx[0x8];
        [FieldOffset(0x20)] public fixed byte m_event[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CNmTimeControlledClipNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nPlayInReverseValueNodeIdx[0x2];
        [FieldOffset(0x12)] public fixed byte m_bSampleRootMotion[0x2];
        [FieldOffset(0x14)] public fixed byte m_nDataSlotIdx[0x2];
        [FieldOffset(0x16)] public fixed byte m_nTimeValueNodeIdx[0x2];
        [FieldOffset(0x18)] public fixed byte m_graphEvents[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct VPhysics2ShapeDef_t {
        [FieldOffset(0x0)] public fixed byte m_spheres[0x10];
        [FieldOffset(0x10)] public fixed byte m_capsules[0x10];
        [FieldOffset(0x20)] public fixed byte m_hulls[0x10];
        [FieldOffset(0x30)] public fixed byte m_meshes[0x10];
        [FieldOffset(0x40)] public fixed byte m_compounds[0x10];
        [FieldOffset(0x50)] public fixed byte m_CollisionAttributeIndices[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CNmFloatCurveNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nInputValueNodeIdx[0x8];
        [FieldOffset(0x18)] public fixed byte m_curve[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CAnimationGraphVisualizerAxis {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
        [FieldOffset(0x40)] public fixed byte m_xWsTransform[0x20];
        [FieldOffset(0x60)] public fixed byte m_flAxisSize[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CTwistConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
        [FieldOffset(0x60)] public fixed byte m_bInverse[0x10];
        [FieldOffset(0x70)] public fixed byte m_qParentBindRotation[0x10];
        [FieldOffset(0x80)] public fixed byte m_qChildBindRotation[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct PulseDocNodeID_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct ModelBoneFlexDriverControl_t {
        [FieldOffset(0x0)] public fixed byte m_nBoneComponent[0x8];
        [FieldOffset(0x8)] public fixed byte m_flexController[0x8];
        [FieldOffset(0x10)] public fixed byte m_flexControllerToken[0x4];
        [FieldOffset(0x14)] public fixed byte m_flMin[0x4];
        [FieldOffset(0x18)] public fixed byte m_flMax[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x178)]
    public unsafe struct CParticleCollectionFloatInput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CSeqCmdLayer {
        [FieldOffset(0x0)] public fixed byte m_cmd[0x2];
        [FieldOffset(0x2)] public fixed byte m_nLocalReference[0x2];
        [FieldOffset(0x4)] public fixed byte m_nLocalBonemask[0x2];
        [FieldOffset(0x6)] public fixed byte m_nDstResult[0x2];
        [FieldOffset(0x8)] public fixed byte m_nSrcResult[0x2];
        [FieldOffset(0xA)] public fixed byte m_bSpline[0x2];
        [FieldOffset(0xC)] public fixed byte m_flVar1[0x4];
        [FieldOffset(0x10)] public fixed byte m_flVar2[0x4];
        [FieldOffset(0x14)] public fixed byte m_nLineNumber[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct FootPinningPoseOpFixedData_t {
        [FieldOffset(0x0)] public fixed byte m_footInfo[0x18];
        [FieldOffset(0x18)] public fixed byte m_flBlendTime[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flLockBreakDistance[0x4];
        [FieldOffset(0x20)] public fixed byte m_flMaxLegTwist[0x4];
        [FieldOffset(0x24)] public fixed byte m_nHipBoneIndex[0x4];
        [FieldOffset(0x28)] public fixed byte m_bApplyLegTwistLimits[0x1];
        [FieldOffset(0x29)] public fixed byte m_bApplyFootRotationLimits[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct RenderSkeletonBone_t {
        [FieldOffset(0x0)] public fixed byte m_boneName[0x8];
        [FieldOffset(0x8)] public fixed byte m_parentName[0x8];
        [FieldOffset(0x10)] public fixed byte m_invBindPose[0x30];
        [FieldOffset(0x40)] public fixed byte m_bbox[0x18];
        [FieldOffset(0x58)] public fixed byte m_flSphereRadius[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct CDistanceRemainingMetricEvaluator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
        [FieldOffset(0x50)] public fixed byte m_flMaxDistance[0x4];
        [FieldOffset(0x54)] public fixed byte m_flMinDistance[0x4];
        [FieldOffset(0x58)] public fixed byte m_flStartGoalFilterDistance[0x4];
        [FieldOffset(0x5C)] public fixed byte m_flMaxGoalOvershootScale[0x4];
        [FieldOffset(0x60)] public fixed byte m_bFilterFixedMinDistance[0x1];
        [FieldOffset(0x61)] public fixed byte m_bFilterGoalDistance[0x1];
        [FieldOffset(0x62)] public fixed byte m_bFilterGoalOvershoot[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CDirectPlaybackUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x74];
        [FieldOffset(0x74)] public fixed byte m_bFinishEarly[0x1];
        [FieldOffset(0x75)] public fixed byte m_bResetOnFinish[0x3];
        [FieldOffset(0x78)] public fixed byte m_allTags[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CNmIDEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_ID[0x8];
        [FieldOffset(0x20)] public fixed byte m_secondaryID[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CFlexRule {
        [FieldOffset(0x0)] public fixed byte m_nFlex[0x8];
        [FieldOffset(0x8)] public fixed byte m_FlexOps[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct ScriptInfo_t {
        [FieldOffset(0x0)] public fixed byte m_code[0x8];
        [FieldOffset(0x8)] public fixed byte m_paramsModified[0x18];
        [FieldOffset(0x20)] public fixed byte m_proxyReadParams[0x18];
        [FieldOffset(0x38)] public fixed byte m_proxyWriteParams[0x18];
        [FieldOffset(0x50)] public fixed byte m_eScriptType[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC8)]
    public unsafe struct CBoneConstraintRbf {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
        [FieldOffset(0x20)] public fixed byte m_inputBones[0x18];
        [FieldOffset(0x38)] public fixed byte m_outputBones[0x90];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x34)]
    public unsafe struct CNetworkedCycle {
        [FieldOffset(0x0)] public fixed byte m_flCycleUnclamped[0x4];
        [FieldOffset(0x4)] public fixed byte m_flPrevCycleUnclamped[0xC];
        [FieldOffset(0x10)] public fixed byte m_flCyclesPerSecond[0xC];
        [FieldOffset(0x1C)] public fixed byte m_flCycleZeroTime[0xC];
        [FieldOffset(0x28)] public fixed byte m_resetCount[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CNmSoundEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_relevance[0x8];
        [FieldOffset(0x20)] public fixed byte m_name[0x8];
        [FieldOffset(0x28)] public fixed byte m_position[0x8];
        [FieldOffset(0x30)] public fixed byte m_attachmentName[0x8];
        [FieldOffset(0x38)] public fixed byte m_tags[0x8];
        [FieldOffset(0x40)] public fixed byte m_bContinuePlayingSoundAtDurationEnd[0x4];
        [FieldOffset(0x44)] public fixed byte m_flDurationInterruptionThreshold[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CRenderGroom {
        [FieldOffset(0x0)] public fixed byte m_hairs[0x18];
        [FieldOffset(0x18)] public fixed byte m_hairPositionOffsets[0x28];
        [FieldOffset(0x40)] public fixed byte m_hSimParamsMat[0x8];
        [FieldOffset(0x48)] public fixed byte m_strandSegmentCountHist[0x30];
        [FieldOffset(0x78)] public fixed byte m_nMaxSegmentsPerHairStrand[0x4];
        [FieldOffset(0x7C)] public fixed byte m_nGuideHairCount[0x4];
        [FieldOffset(0x80)] public fixed byte m_nHairCount[0x4];
        [FieldOffset(0x84)] public fixed byte m_nTotalVertexCount[0x4];
        [FieldOffset(0x88)] public fixed byte m_nTotalSegmentCount[0x4];
        [FieldOffset(0x8C)] public fixed byte m_nGroomGroupID[0x4];
        [FieldOffset(0x90)] public fixed byte m_nAttachBoneIdx[0x4];
        [FieldOffset(0x94)] public fixed byte m_nAttachMeshIdx[0x4];
        [FieldOffset(0x98)] public fixed byte m_nAttachMeshDrawCallIdx[0x14];
        [FieldOffset(0xAC)] public fixed byte m_bEnableSimulation[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CNmParameterizedClipSelectorNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_optionNodeIndices[0x18];
        [FieldOffset(0x28)] public fixed byte m_optionWeights[0x10];
        [FieldOffset(0x38)] public fixed byte m_parameterNodeIdx[0x2];
        [FieldOffset(0x3A)] public fixed byte m_bIgnoreInvalidOptions[0x1];
        [FieldOffset(0x3B)] public fixed byte m_bHasWeightsSet[0x5];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CTiltTwistConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
        [FieldOffset(0x60)] public fixed byte m_nTargetAxis[0x4];
        [FieldOffset(0x64)] public fixed byte m_nSlaveAxis[0x2C];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmSpeedScaleNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CVPhysXSurfacePropertiesList {
        [FieldOffset(0x0)] public fixed byte m_surfacePropertiesList[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmFloatSpringNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_flStartValue[0x4];
        [FieldOffset(0x14)] public fixed byte m_flHertz[0x4];
        [FieldOffset(0x18)] public fixed byte m_flDampingRatio[0x4];
        [FieldOffset(0x1C)] public fixed byte m_nInputValueNodeIdx[0x2];
        [FieldOffset(0x1E)] public fixed byte m_bUseStartValue[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct RenderHairStrandInfo_t {
        [FieldOffset(0x0)] public fixed byte m_nGuideHairIndices_nSurfaceTriIndex[0x8];
        [FieldOffset(0x8)] public fixed byte m_vGuideBary_vBaseBary[0x8];
        [FieldOffset(0x10)] public fixed byte m_vRootOffset_flLengthScale[0x8];
        [FieldOffset(0x18)] public fixed byte m_nPackedBaseUv[0x4];
        [FieldOffset(0x1C)] public fixed byte m_nPackedSurfaceNormalOs[0x4];
        [FieldOffset(0x20)] public fixed byte m_nPackedSurfaceTangentOs[0x4];
        [FieldOffset(0x24)] public fixed byte m_nDataOffset_Segments[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CCycleControlClipUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
        [FieldOffset(0x60)] public fixed byte m_tags[0x1C];
        [FieldOffset(0x7C)] public fixed byte m_hSequence[0x4];
        [FieldOffset(0x80)] public fixed byte m_duration[0x4];
        [FieldOffset(0x84)] public fixed byte m_valueSource[0x4];
        [FieldOffset(0x88)] public fixed byte m_paramIndex[0x2];
        [FieldOffset(0x8A)] public fixed byte m_bLockWhenWaning[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmTargetPointNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nInputValueNodeIdx[0x2];
        [FieldOffset(0x12)] public fixed byte m_bIsWorldSpaceTarget[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CNmTargetSelectorNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_optionNodeIndices[0x18];
        [FieldOffset(0x28)] public fixed byte m_flOrientationScoreWeight[0x4];
        [FieldOffset(0x2C)] public fixed byte m_flPositionScoreWeight[0x4];
        [FieldOffset(0x30)] public fixed byte m_parameterNodeIdx[0x2];
        [FieldOffset(0x32)] public fixed byte m_bIgnoreInvalidOptions[0x1];
        [FieldOffset(0x33)] public fixed byte m_bIsWorldSpaceTarget[0x5];
        [FieldOffset(0x38)] public fixed byte m_alignmentBoneID[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulse_RegisterInfo {
        [FieldOffset(0x0)] public fixed byte m_nReg[0x8];
        [FieldOffset(0x8)] public fixed byte m_Type[0x18];
        [FieldOffset(0x20)] public fixed byte m_OriginName[0x38];
        [FieldOffset(0x58)] public fixed byte m_nWrittenByInstruction[0x4];
        [FieldOffset(0x5C)] public fixed byte m_nLastReadByInstruction[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmFloatValueNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CWarpSectionAnimTagBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CNmGraphVariationUserData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CStaticPoseCache {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_poses[0x18];
        [FieldOffset(0x28)] public fixed byte m_nBoneCount[0x4];
        [FieldOffset(0x2C)] public fixed byte m_nMorphCount[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD0)]
    public unsafe struct LookAtOpFixedSettings_t {
        [FieldOffset(0x0)] public fixed byte m_attachment[0x80];
        [FieldOffset(0x80)] public fixed byte m_damping[0x18];
        [FieldOffset(0x98)] public fixed byte m_bones[0x18];
        [FieldOffset(0xB0)] public fixed byte m_flYawLimit[0x4];
        [FieldOffset(0xB4)] public fixed byte m_flPitchLimit[0x4];
        [FieldOffset(0xB8)] public fixed byte m_flHysteresisInnerAngle[0x4];
        [FieldOffset(0xBC)] public fixed byte m_flHysteresisOuterAngle[0x4];
        [FieldOffset(0xC0)] public fixed byte m_bRotateYawForward[0x1];
        [FieldOffset(0xC1)] public fixed byte m_bMaintainUpDirection[0x1];
        [FieldOffset(0xC2)] public fixed byte m_bTargetIsPosition[0x1];
        [FieldOffset(0xC3)] public fixed byte m_bUseHysteresis[0xD];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CRootMotion {
        [FieldOffset(0x0)] public fixed byte m_deltaTransform[0x10];
        [FieldOffset(0x10)] public fixed byte m_vVelocityMS[0xC];
        [FieldOffset(0x1C)] public fixed byte m_vUpOverride[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CAnimGraphSettingsManager {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_settingsGroups[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CAnimGraphModelBinding {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_modelName[0x8];
        [FieldOffset(0x10)] public fixed byte m_pSharedData[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CBoneConstraintPoseSpaceBone {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
        [FieldOffset(0x60)] public fixed byte m_inputList[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xF0)]
    public unsafe struct CNmTwoBoneIKTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte m_nEffectorBoneIdx[0x4];
        [FieldOffset(0x74)] public fixed byte m_nEffectorTargetBoneIdx[0xC];
        [FieldOffset(0x80)] public fixed byte m_targetTransform[0x70];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct MotionBlendItem {
        [FieldOffset(0x0)] public fixed byte m_pChild[0x8];
        [FieldOffset(0x8)] public fixed byte m_flKeyValue[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA0)]
    public unsafe struct CBoneConstraintPoseSpaceMorph {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
        [FieldOffset(0x20)] public fixed byte m_sBoneName[0x8];
        [FieldOffset(0x28)] public fixed byte m_sAttachmentName[0x8];
        [FieldOffset(0x30)] public fixed byte m_outputMorph[0x18];
        [FieldOffset(0x48)] public fixed byte m_inputList[0x18];
        [FieldOffset(0x60)] public fixed byte m_bClamp[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CFloatAnimParameter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte m_fDefaultValue[0x4];
        [FieldOffset(0x84)] public fixed byte m_fMinValue[0x4];
        [FieldOffset(0x88)] public fixed byte m_fMaxValue[0x4];
        [FieldOffset(0x8C)] public fixed byte m_bInterpolate[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct CNmContactAudioActionVData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CStateActionUpdater {
        [FieldOffset(0x0)] public fixed byte m_pAction[0x8];
        [FieldOffset(0x8)] public fixed byte m_eBehavior[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CPlayerInputAnimMotorUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
        [FieldOffset(0x20)] public fixed byte m_sampleTimes[0x1C];
        [FieldOffset(0x3C)] public fixed byte m_flSpringConstant[0x4];
        [FieldOffset(0x40)] public fixed byte m_flAnticipationDistance[0x4];
        [FieldOffset(0x44)] public fixed byte m_hAnticipationPosParam[0x2];
        [FieldOffset(0x46)] public fixed byte m_hAnticipationHeadingParam[0x2];
        [FieldOffset(0x48)] public fixed byte m_bUseAcceleration[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CRenderSkeleton {
        [FieldOffset(0x0)] public fixed byte m_bones[0x30];
        [FieldOffset(0x30)] public fixed byte m_boneParents[0x18];
        [FieldOffset(0x48)] public fixed byte m_nBoneWeightCount[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct CSeqIKLock {
        [FieldOffset(0x0)] public fixed byte m_flPosWeight[0x4];
        [FieldOffset(0x4)] public fixed byte m_flAngleWeight[0x4];
        [FieldOffset(0x8)] public fixed byte m_nLocalBone[0x2];
        [FieldOffset(0xA)] public fixed byte m_bBonesOrientedAlongPositiveX[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CAnimParamHandleMap {
        [FieldOffset(0x0)] public fixed byte m_list[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmFloatClampNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nInputValueNodeIdx[0x4];
        [FieldOffset(0x14)] public fixed byte m_clampRange[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct PulseRuntimeCellIndex_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmExternalPoseNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_bShouldSampleRootMotion[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1D0)]
    public unsafe struct CAnimDesc {
        [FieldOffset(0x0)] public fixed byte m_name[0x10];
        [FieldOffset(0x10)] public fixed byte m_flags[0x8];
        [FieldOffset(0x18)] public fixed byte fps[0x8];
        [FieldOffset(0x20)] public fixed byte m_Data[0xD8];
        [FieldOffset(0xF8)] public fixed byte m_movementArray[0x18];
        [FieldOffset(0x110)] public fixed byte m_xInitialOffset[0x20];
        [FieldOffset(0x130)] public fixed byte m_eventArray[0x18];
        [FieldOffset(0x148)] public fixed byte m_activityArray[0x18];
        [FieldOffset(0x160)] public fixed byte m_hierarchyArray[0x18];
        [FieldOffset(0x178)] public fixed byte framestalltime[0x4];
        [FieldOffset(0x17C)] public fixed byte m_vecRootMin[0xC];
        [FieldOffset(0x188)] public fixed byte m_vecRootMax[0x10];
        [FieldOffset(0x198)] public fixed byte m_vecBoneWorldMin[0x18];
        [FieldOffset(0x1B0)] public fixed byte m_vecBoneWorldMax[0x18];
        [FieldOffset(0x1C8)] public fixed byte m_sequenceParams[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CNmRootMotionOverrideNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_desiredMovingVelocityNodeIdx[0x2];
        [FieldOffset(0x1A)] public fixed byte m_desiredFacingDirectionNodeIdx[0x2];
        [FieldOffset(0x1C)] public fixed byte m_linearVelocityLimitNodeIdx[0x2];
        [FieldOffset(0x1E)] public fixed byte m_angularVelocityLimitNodeIdx[0x2];
        [FieldOffset(0x20)] public fixed byte m_enabledNodeIdx[0x4];
        [FieldOffset(0x24)] public fixed byte m_maxLinearVelocity[0x4];
        [FieldOffset(0x28)] public fixed byte m_maxAngularVelocityRadians[0x4];
        [FieldOffset(0x2C)] public fixed byte m_overrideFlags[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CNmTargetWarpNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nClipReferenceNodeIdx[0x2];
        [FieldOffset(0x12)] public fixed byte m_nTargetValueNodeIdx[0x2];
        [FieldOffset(0x14)] public fixed byte m_samplingMode[0x1];
        [FieldOffset(0x15)] public fixed byte m_targetUpdateRule[0x1];
        [FieldOffset(0x16)] public fixed byte m_bAlignWithTargetAtLastWarpEvent[0x2];
        [FieldOffset(0x18)] public fixed byte m_flSamplingPositionErrorThresholdSq[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flMaxTangentLength[0x4];
        [FieldOffset(0x20)] public fixed byte m_flLerpFallbackDistanceThreshold[0x4];
        [FieldOffset(0x24)] public fixed byte m_flTargetUpdateDistanceThreshold[0x4];
        [FieldOffset(0x28)] public fixed byte m_flTargetUpdateAngleThresholdRadians[0x8];
        [FieldOffset(0x30)] public fixed byte m_alignmentBoneID[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CPhysSurfacePropertiesPhysics {
        [FieldOffset(0x0)] public fixed byte m_friction[0x4];
        [FieldOffset(0x4)] public fixed byte m_elasticity[0x4];
        [FieldOffset(0x8)] public fixed byte m_density[0x4];
        [FieldOffset(0xC)] public fixed byte m_thickness[0x4];
        [FieldOffset(0x10)] public fixed byte m_softContactFrequency[0x4];
        [FieldOffset(0x14)] public fixed byte m_softContactDampingRatio[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CAnimationGraphVisualizerPie {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
        [FieldOffset(0x40)] public fixed byte m_vWsCenter[0x10];
        [FieldOffset(0x50)] public fixed byte m_vWsStart[0x10];
        [FieldOffset(0x60)] public fixed byte m_vWsEnd[0x10];
        [FieldOffset(0x70)] public fixed byte m_Color[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct NmFloatCurveCompressionSettings_t {
        [FieldOffset(0x0)] public fixed byte m_range[0x8];
        [FieldOffset(0x8)] public fixed byte m_bIsStatic[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CBoneConstraintDotToMorph {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
        [FieldOffset(0x20)] public fixed byte m_sBoneName[0x8];
        [FieldOffset(0x28)] public fixed byte m_sTargetBoneName[0x8];
        [FieldOffset(0x30)] public fixed byte m_sMorphChannelName[0x8];
        [FieldOffset(0x38)] public fixed byte m_flRemap[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPointConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CCurrentRotationVelocityMetricEvaluator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct TraceSettings_t {
        [FieldOffset(0x0)] public fixed byte m_flTraceHeight[0x4];
        [FieldOffset(0x4)] public fixed byte m_flTraceRadius[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct ParamSpanSample_t {
        [FieldOffset(0x0)] public fixed byte m_value[0x14];
        [FieldOffset(0x14)] public fixed byte m_flCycle[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CNmFollowBoneTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0x90];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xF8)]
    public unsafe struct VPhysXConstraintParams_t {
        [FieldOffset(0x0)] public fixed byte m_nType[0x1];
        [FieldOffset(0x1)] public fixed byte m_nTranslateMotion[0x1];
        [FieldOffset(0x2)] public fixed byte m_nRotateMotion[0x1];
        [FieldOffset(0x3)] public fixed byte m_nFlags[0x1];
        [FieldOffset(0x4)] public fixed byte m_anchor[0x18];
        [FieldOffset(0x1C)] public fixed byte m_axes[0x20];
        [FieldOffset(0x3C)] public fixed byte m_maxForce[0x4];
        [FieldOffset(0x40)] public fixed byte m_maxTorque[0x4];
        [FieldOffset(0x44)] public fixed byte m_linearLimitValue[0x4];
        [FieldOffset(0x48)] public fixed byte m_linearLimitRestitution[0x4];
        [FieldOffset(0x4C)] public fixed byte m_linearLimitSpring[0x4];
        [FieldOffset(0x50)] public fixed byte m_linearLimitDamping[0x4];
        [FieldOffset(0x54)] public fixed byte m_twistLowLimitValue[0x4];
        [FieldOffset(0x58)] public fixed byte m_twistLowLimitRestitution[0x4];
        [FieldOffset(0x5C)] public fixed byte m_twistLowLimitSpring[0x4];
        [FieldOffset(0x60)] public fixed byte m_twistLowLimitDamping[0x4];
        [FieldOffset(0x64)] public fixed byte m_twistHighLimitValue[0x4];
        [FieldOffset(0x68)] public fixed byte m_twistHighLimitRestitution[0x4];
        [FieldOffset(0x6C)] public fixed byte m_twistHighLimitSpring[0x4];
        [FieldOffset(0x70)] public fixed byte m_twistHighLimitDamping[0x4];
        [FieldOffset(0x74)] public fixed byte m_swing1LimitValue[0x4];
        [FieldOffset(0x78)] public fixed byte m_swing1LimitRestitution[0x4];
        [FieldOffset(0x7C)] public fixed byte m_swing1LimitSpring[0x4];
        [FieldOffset(0x80)] public fixed byte m_swing1LimitDamping[0x4];
        [FieldOffset(0x84)] public fixed byte m_swing2LimitValue[0x4];
        [FieldOffset(0x88)] public fixed byte m_swing2LimitRestitution[0x4];
        [FieldOffset(0x8C)] public fixed byte m_swing2LimitSpring[0x4];
        [FieldOffset(0x90)] public fixed byte m_swing2LimitDamping[0x4];
        [FieldOffset(0x94)] public fixed byte m_goalPosition[0xC];
        [FieldOffset(0xA0)] public fixed byte m_goalOrientation[0x10];
        [FieldOffset(0xB0)] public fixed byte m_goalAngularVelocity[0xC];
        [FieldOffset(0xBC)] public fixed byte m_driveSpringX[0x4];
        [FieldOffset(0xC0)] public fixed byte m_driveSpringY[0x4];
        [FieldOffset(0xC4)] public fixed byte m_driveSpringZ[0x4];
        [FieldOffset(0xC8)] public fixed byte m_driveDampingX[0x4];
        [FieldOffset(0xCC)] public fixed byte m_driveDampingY[0x4];
        [FieldOffset(0xD0)] public fixed byte m_driveDampingZ[0x4];
        [FieldOffset(0xD4)] public fixed byte m_driveSpringTwist[0x4];
        [FieldOffset(0xD8)] public fixed byte m_driveSpringSwing[0x4];
        [FieldOffset(0xDC)] public fixed byte m_driveSpringSlerp[0x4];
        [FieldOffset(0xE0)] public fixed byte m_driveDampingTwist[0x4];
        [FieldOffset(0xE4)] public fixed byte m_driveDampingSwing[0x4];
        [FieldOffset(0xE8)] public fixed byte m_driveDampingSlerp[0x4];
        [FieldOffset(0xEC)] public fixed byte m_solverIterationCount[0x4];
        [FieldOffset(0xF0)] public fixed byte m_projectionLinearTolerance[0x4];
        [FieldOffset(0xF4)] public fixed byte m_projectionAngularTolerance[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmFloatComparisonNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nInputValueNodeIdx[0x2];
        [FieldOffset(0x12)] public fixed byte m_nComparandValueNodeIdx[0x2];
        [FieldOffset(0x14)] public fixed byte m_comparison[0x4];
        [FieldOffset(0x18)] public fixed byte m_flEpsilon[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flComparisonValue[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CStateUpdateData {
        [FieldOffset(0x0)] public fixed byte m_name[0x8];
        [FieldOffset(0x8)] public fixed byte m_hScript[0x8];
        [FieldOffset(0x10)] public fixed byte m_transitionIndices[0x18];
        [FieldOffset(0x28)] public fixed byte m_actions[0x18];
        [FieldOffset(0x40)] public fixed byte m_stateID[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct CTurnHelperInstanceData {
        [FieldOffset(0x0)] public fixed byte m_turnAmount[0x4];
        [FieldOffset(0x4)] public fixed byte m_turnStartTime[0x4];
        [FieldOffset(0x8)] public fixed byte m_duration[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmTargetValueNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct COrientConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1C)]
    public unsafe struct CCycleClipInstanceData {
        [FieldOffset(0x0)] public fixed byte m_flCycle[0xC];
        [FieldOffset(0xC)] public fixed byte m_flPrevCycle[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2)]
    public unsafe struct PulseRuntimeTempVarBankIndex_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CMoverUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte m_damping[0x18];
        [FieldOffset(0x90)] public fixed byte m_facingTarget[0x4];
        [FieldOffset(0x94)] public fixed byte m_hMoveVecParam[0x2];
        [FieldOffset(0x96)] public fixed byte m_hMoveHeadingParam[0x2];
        [FieldOffset(0x98)] public fixed byte m_hTurnToFaceParam[0x4];
        [FieldOffset(0x9C)] public fixed byte m_flTurnToFaceOffset[0x4];
        [FieldOffset(0xA0)] public fixed byte m_flTurnToFaceLimit[0x4];
        [FieldOffset(0xA4)] public fixed byte m_bAdditive[0x1];
        [FieldOffset(0xA5)] public fixed byte m_bApplyMovement[0x1];
        [FieldOffset(0xA6)] public fixed byte m_bOrientMovement[0x1];
        [FieldOffset(0xA7)] public fixed byte m_bApplyRotation[0x1];
        [FieldOffset(0xA8)] public fixed byte m_bLimitOnly[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CNmLayerBlendNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nBaseNodeIdx[0x2];
        [FieldOffset(0x12)] public fixed byte m_bOnlySampleBaseRootMotion[0x6];
        [FieldOffset(0x18)] public fixed byte m_layerDefinition[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CNmFootIKNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_leftEffectorBoneID[0x8];
        [FieldOffset(0x20)] public fixed byte m_rightEffectorBoneID[0x8];
        [FieldOffset(0x28)] public fixed byte m_nLeftTargetNodeIdx[0x2];
        [FieldOffset(0x2A)] public fixed byte m_nRightTargetNodeIdx[0x2];
        [FieldOffset(0x2C)] public fixed byte m_nEnabledNodeIdx[0x4];
        [FieldOffset(0x30)] public fixed byte m_flBlendTimeSeconds[0x4];
        [FieldOffset(0x34)] public fixed byte m_blendMode[0x1];
        [FieldOffset(0x35)] public fixed byte m_bIsTargetInWorldSpace[0x3];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CAnimMotorUpdaterBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_name[0x8];
        [FieldOffset(0x18)] public fixed byte m_bDefault[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct JiggleBoneSettingsList_t {
        [FieldOffset(0x0)] public fixed byte m_boneSettings[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA0)]
    public unsafe struct CSubtractUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x94];
        [FieldOffset(0x94)] public fixed byte m_footMotionTiming[0x4];
        [FieldOffset(0x98)] public fixed byte m_bApplyToFootMotion[0x1];
        [FieldOffset(0x99)] public fixed byte m_bApplyChannelsSeparately[0x1];
        [FieldOffset(0x9A)] public fixed byte m_bUseModelSpace[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct PulseGraphInstanceID_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CNmFloatRemapNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nInputValueNodeIdx[0x4];
        [FieldOffset(0x14)] public fixed byte m_inputRange[0x8];
        [FieldOffset(0x1C)] public fixed byte m_outputRange[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CPoseHandle {
        [FieldOffset(0x0)] public fixed byte m_nIndex[0x2];
        [FieldOffset(0x2)] public fixed byte m_eType[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmFootstepEventIDNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nSourceStateNodeIdx[0x4];
        [FieldOffset(0x14)] public fixed byte m_eventConditionRules[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA8)]
    public unsafe struct CSolveIKChainUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte m_targetHandles[0x18];
        [FieldOffset(0x88)] public fixed byte m_opFixedData[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmOrNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_conditionNodeIndices[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CSeqCmdSeqDesc {
        [FieldOffset(0x0)] public fixed byte m_sName[0x10];
        [FieldOffset(0x10)] public fixed byte m_flags[0xC];
        [FieldOffset(0x1C)] public fixed byte m_transition[0x8];
        [FieldOffset(0x24)] public fixed byte m_nFrameRangeSequence[0x2];
        [FieldOffset(0x26)] public fixed byte m_nFrameCount[0x2];
        [FieldOffset(0x28)] public fixed byte m_flFPS[0x4];
        [FieldOffset(0x2C)] public fixed byte m_nSubCycles[0x2];
        [FieldOffset(0x2E)] public fixed byte m_numLocalResults[0x2];
        [FieldOffset(0x30)] public fixed byte m_cmdLayerArray[0x18];
        [FieldOffset(0x48)] public fixed byte m_eventArray[0x18];
        [FieldOffset(0x60)] public fixed byte m_activityArray[0x18];
        [FieldOffset(0x78)] public fixed byte m_poseSettingArray[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CBoneMaskUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x94];
        [FieldOffset(0x94)] public fixed byte m_nWeightListIndex[0x4];
        [FieldOffset(0x98)] public fixed byte m_flRootMotionBlend[0x4];
        [FieldOffset(0x9C)] public fixed byte m_blendSpace[0x4];
        [FieldOffset(0xA0)] public fixed byte m_footMotionTiming[0x4];
        [FieldOffset(0xA4)] public fixed byte m_bUseBlendScale[0x4];
        [FieldOffset(0xA8)] public fixed byte m_blendValueSource[0x4];
        [FieldOffset(0xAC)] public fixed byte m_hBlendParameter[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CLeafUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CPulse_Constant {
        [FieldOffset(0x0)] public fixed byte m_Type[0x18];
        [FieldOffset(0x18)] public fixed byte m_Value[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x178)]
    public unsafe struct CParticleFloatInput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nType[0x4];
        [FieldOffset(0x14)] public fixed byte m_nMapType[0x4];
        [FieldOffset(0x18)] public fixed byte m_flLiteralValue[0x8];
        [FieldOffset(0x20)] public fixed byte m_NamedValue[0x40];
        [FieldOffset(0x60)] public fixed byte m_nControlPoint[0x4];
        [FieldOffset(0x64)] public fixed byte m_nScalarAttribute[0x4];
        [FieldOffset(0x68)] public fixed byte m_nVectorAttribute[0x4];
        [FieldOffset(0x6C)] public fixed byte m_nVectorComponent[0x4];
        [FieldOffset(0x70)] public fixed byte m_bReverseOrder[0x4];
        [FieldOffset(0x74)] public fixed byte m_flRandomMin[0x4];
        [FieldOffset(0x78)] public fixed byte m_flRandomMax[0x4];
        [FieldOffset(0x7C)] public fixed byte m_bHasRandomSignFlip[0x4];
        [FieldOffset(0x80)] public fixed byte m_nRandomSeed[0x4];
        [FieldOffset(0x84)] public fixed byte m_nRandomMode[0xC];
        [FieldOffset(0x90)] public fixed byte m_strSnapshotSubset[0x8];
        [FieldOffset(0x98)] public fixed byte m_flLOD0[0x4];
        [FieldOffset(0x9C)] public fixed byte m_flLOD1[0x4];
        [FieldOffset(0xA0)] public fixed byte m_flLOD2[0x4];
        [FieldOffset(0xA4)] public fixed byte m_flLOD3[0x4];
        [FieldOffset(0xA8)] public fixed byte m_nNoiseInputVectorAttribute[0x4];
        [FieldOffset(0xAC)] public fixed byte m_flNoiseOutputMin[0x4];
        [FieldOffset(0xB0)] public fixed byte m_flNoiseOutputMax[0x4];
        [FieldOffset(0xB4)] public fixed byte m_flNoiseScale[0x4];
        [FieldOffset(0xB8)] public fixed byte m_vecNoiseOffsetRate[0xC];
        [FieldOffset(0xC4)] public fixed byte m_flNoiseOffset[0x4];
        [FieldOffset(0xC8)] public fixed byte m_nNoiseOctaves[0x4];
        [FieldOffset(0xCC)] public fixed byte m_nNoiseTurbulence[0x4];
        [FieldOffset(0xD0)] public fixed byte m_nNoiseType[0x4];
        [FieldOffset(0xD4)] public fixed byte m_nNoiseModifier[0x4];
        [FieldOffset(0xD8)] public fixed byte m_flNoiseTurbulenceScale[0x4];
        [FieldOffset(0xDC)] public fixed byte m_flNoiseTurbulenceMix[0x4];
        [FieldOffset(0xE0)] public fixed byte m_flNoiseImgPreviewScale[0x4];
        [FieldOffset(0xE4)] public fixed byte m_bNoiseImgPreviewLive[0xC];
        [FieldOffset(0xF0)] public fixed byte m_flNoCameraFallback[0x4];
        [FieldOffset(0xF4)] public fixed byte m_bUseBoundsCenter[0x4];
        [FieldOffset(0xF8)] public fixed byte m_nInputMode[0x4];
        [FieldOffset(0xFC)] public fixed byte m_flMultFactor[0x4];
        [FieldOffset(0x100)] public fixed byte m_flInput0[0x4];
        [FieldOffset(0x104)] public fixed byte m_flInput1[0x4];
        [FieldOffset(0x108)] public fixed byte m_flOutput0[0x4];
        [FieldOffset(0x10C)] public fixed byte m_flOutput1[0x4];
        [FieldOffset(0x110)] public fixed byte m_flNotchedRangeMin[0x4];
        [FieldOffset(0x114)] public fixed byte m_flNotchedRangeMax[0x4];
        [FieldOffset(0x118)] public fixed byte m_flNotchedOutputOutside[0x4];
        [FieldOffset(0x11C)] public fixed byte m_flNotchedOutputInside[0x4];
        [FieldOffset(0x120)] public fixed byte m_nRoundType[0x4];
        [FieldOffset(0x124)] public fixed byte m_nBiasType[0x4];
        [FieldOffset(0x128)] public fixed byte m_flBiasParameter[0x8];
        [FieldOffset(0x130)] public fixed byte m_Curve[0x40];
        [FieldOffset(0x170)] public fixed byte m_flCompareValue[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct SolveIKChainPoseOpFixedSettings_t {
        [FieldOffset(0x0)] public fixed byte m_ChainsToSolveData[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CNmEntityAttributeFloatEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x38];
        [FieldOffset(0x38)] public fixed byte m_FloatValue[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CNmIDSelectorNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_conditionNodeIndices[0x18];
        [FieldOffset(0x28)] public fixed byte m_values[0x30];
        [FieldOffset(0x58)] public fixed byte m_defaultValue[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x160)]
    public unsafe struct TwoBoneIKSettings_t {
        [FieldOffset(0x0)] public fixed byte m_endEffectorType[0x10];
        [FieldOffset(0x10)] public fixed byte m_endEffectorAttachment[0x80];
        [FieldOffset(0x90)] public fixed byte m_targetType[0x10];
        [FieldOffset(0xA0)] public fixed byte m_targetAttachment[0x80];
        [FieldOffset(0x120)] public fixed byte m_targetBoneIndex[0x4];
        [FieldOffset(0x124)] public fixed byte m_hPositionParam[0x2];
        [FieldOffset(0x126)] public fixed byte m_hRotationParam[0x2];
        [FieldOffset(0x128)] public fixed byte m_bAlwaysUseFallbackHinge[0x8];
        [FieldOffset(0x130)] public fixed byte m_vLsFallbackHingeAxis[0x10];
        [FieldOffset(0x140)] public fixed byte m_nFixedBoneIndex[0x4];
        [FieldOffset(0x144)] public fixed byte m_nMiddleBoneIndex[0x4];
        [FieldOffset(0x148)] public fixed byte m_nEndBoneIndex[0x4];
        [FieldOffset(0x14C)] public fixed byte m_bMatchTargetOrientation[0x1];
        [FieldOffset(0x14D)] public fixed byte m_bConstrainTwist[0x3];
        [FieldOffset(0x150)] public fixed byte m_flMaxTwist[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CNmCachedPoseWriteTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x100)]
    public unsafe struct CAnimUpdateSharedData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nodes[0x18];
        [FieldOffset(0x28)] public fixed byte m_nodeIndexMap[0x20];
        [FieldOffset(0x48)] public fixed byte m_components[0x18];
        [FieldOffset(0x60)] public fixed byte m_pParamListUpdater[0x8];
        [FieldOffset(0x68)] public fixed byte m_pTagManagerUpdater[0x8];
        [FieldOffset(0x70)] public fixed byte m_scriptManager[0x8];
        [FieldOffset(0x78)] public fixed byte m_settings[0x30];
        [FieldOffset(0xA8)] public fixed byte m_pStaticPoseCache[0x8];
        [FieldOffset(0xB0)] public fixed byte m_pSkeleton[0x8];
        [FieldOffset(0xB8)] public fixed byte m_rootNodePath[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CAnimAttachment {
        [FieldOffset(0x0)] public fixed byte m_influenceRotations[0x30];
        [FieldOffset(0x30)] public fixed byte m_influenceOffsets[0x30];
        [FieldOffset(0x60)] public fixed byte m_influenceIndices[0xC];
        [FieldOffset(0x6C)] public fixed byte m_influenceWeights[0xC];
        [FieldOffset(0x78)] public fixed byte m_numInfluences[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CFootTrajectories {
        [FieldOffset(0x0)] public fixed byte m_trajectories[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CNmIDComparisonNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nInputValueNodeIdx[0x2];
        [FieldOffset(0x12)] public fixed byte m_comparison[0x6];
        [FieldOffset(0x18)] public fixed byte m_comparisionIDs[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct PairedSequence_t {
        [FieldOffset(0x0)] public fixed byte m_sRole[0x8];
        [FieldOffset(0x8)] public fixed byte m_sSequenceName[0x8];
        [FieldOffset(0x10)] public fixed byte m_hSequence[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CEditableMotionGraph {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmConstFloatNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_flValue[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CStringAnimTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CBoolAnimParameter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte m_bDefaultValue[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CRagdollAnimTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
        [FieldOffset(0x58)] public fixed byte m_profileName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CMotionNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_name[0x8];
        [FieldOffset(0x20)] public fixed byte m_id[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x138)]
    public unsafe struct CNmStateMachineNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_stateDefinitions[0x120];
        [FieldOffset(0x130)] public fixed byte m_nDefaultStateIndex[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CBodyGroupAnimTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
        [FieldOffset(0x58)] public fixed byte m_nPriority[0x8];
        [FieldOffset(0x60)] public fixed byte m_bodyGroupSettings[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x100)]
    public unsafe struct CNmModelSpaceBlendTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0x100];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmZeroPoseNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmOrientationWarpNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nClipReferenceNodeIdx[0x2];
        [FieldOffset(0x12)] public fixed byte m_nTargetValueNodeIdx[0x2];
        [FieldOffset(0x14)] public fixed byte m_bIsOffsetNode[0x1];
        [FieldOffset(0x15)] public fixed byte m_bIsOffsetRelativeToCharacter[0x1];
        [FieldOffset(0x16)] public fixed byte m_bWarpTranslation[0x1];
        [FieldOffset(0x17)] public fixed byte m_alignmentMode[0x1];
        [FieldOffset(0x18)] public fixed byte m_samplingMode[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct AnimParamID {
        [FieldOffset(0x0)] public fixed byte m_id[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmBoneMaskNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_boneMaskID[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct ModelAnimGraph2Ref_t {
        [FieldOffset(0x0)] public fixed byte m_sIdentifier[0x8];
        [FieldOffset(0x8)] public fixed byte m_hGraph[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct AnimationDecodeDebugDump_t {
        [FieldOffset(0x0)] public fixed byte m_processingType[0x8];
        [FieldOffset(0x8)] public fixed byte m_elems[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmVirtualParameterIDNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nChildNodeIdx[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CSeqScaleSet {
        [FieldOffset(0x0)] public fixed byte m_sName[0x10];
        [FieldOffset(0x10)] public fixed byte m_bRootOffset[0x4];
        [FieldOffset(0x14)] public fixed byte m_vRootOffset[0xC];
        [FieldOffset(0x20)] public fixed byte m_nLocalBoneArray[0x18];
        [FieldOffset(0x38)] public fixed byte m_flBoneScaleArray[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct PulseRuntimeCallInfoIndex_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CDirectionalBlendUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x5C];
        [FieldOffset(0x5C)] public fixed byte m_hSequences[0x24];
        [FieldOffset(0x80)] public fixed byte m_damping[0x18];
        [FieldOffset(0x98)] public fixed byte m_blendValueSource[0x4];
        [FieldOffset(0x9C)] public fixed byte m_paramIndex[0x4];
        [FieldOffset(0xA0)] public fixed byte m_playbackSpeed[0x4];
        [FieldOffset(0xA4)] public fixed byte m_duration[0x4];
        [FieldOffset(0xA8)] public fixed byte m_bLoop[0x1];
        [FieldOffset(0xA9)] public fixed byte m_bLockBlendOnReset[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CNmGraphDefinition__ReferencedGraphSlot_t {
        [FieldOffset(0x0)] public fixed byte m_nNodeIdx[0x2];
        [FieldOffset(0x2)] public fixed byte m_dataSlotIdx[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct ParamSpan_t {
        [FieldOffset(0x0)] public fixed byte m_samples[0x18];
        [FieldOffset(0x18)] public fixed byte m_hParam[0x2];
        [FieldOffset(0x1A)] public fixed byte m_eParamType[0x2];
        [FieldOffset(0x1C)] public fixed byte m_flStartCycle[0x4];
        [FieldOffset(0x20)] public fixed byte m_flEndCycle[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CFootStepTriggerUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte m_triggers[0x1C];
        [FieldOffset(0x8C)] public fixed byte m_flTolerance[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct IKTargetSettings_t {
        [FieldOffset(0x0)] public fixed byte m_TargetSource[0x8];
        [FieldOffset(0x8)] public fixed byte m_Bone[0x10];
        [FieldOffset(0x18)] public fixed byte m_AnimgraphParameterNamePosition[0x4];
        [FieldOffset(0x1C)] public fixed byte m_AnimgraphParameterNameOrientation[0x4];
        [FieldOffset(0x20)] public fixed byte m_TargetCoordSystem[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CModelConfigElement_SetRenderColor {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Color[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x100)]
    public unsafe struct CNmAdditiveBlendTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0x100];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CNmAnimationPoseNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nPoseTimeValueNodeIdx[0x2];
        [FieldOffset(0x12)] public fixed byte m_nDataSlotIdx[0x2];
        [FieldOffset(0x14)] public fixed byte m_inputTimeRemapRange[0x8];
        [FieldOffset(0x1C)] public fixed byte m_flUserSpecifiedTime[0x4];
        [FieldOffset(0x20)] public fixed byte m_bUseFramesAsInput[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB8)]
    public unsafe struct CMotionSearchDB {
        [FieldOffset(0x0)] public fixed byte m_rootNode[0x80];
        [FieldOffset(0x80)] public fixed byte m_residualQuantizer[0x20];
        [FieldOffset(0xA0)] public fixed byte m_codeIndices[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CMotionNodeBlend1D {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_blendItems[0x18];
        [FieldOffset(0x40)] public fixed byte m_nParamIndex[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmCurrentSyncEventNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nSourceStateNodeIdx[0x2];
        [FieldOffset(0x12)] public fixed byte m_infoType[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmControlParameterTargetNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct SkeletonBoneBounds_t {
        [FieldOffset(0x0)] public fixed byte m_vecCenter[0xC];
        [FieldOffset(0xC)] public fixed byte m_vecSize[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1E0)]
    public unsafe struct CTwoBoneIKUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte m_opFixedData[0x170];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x98)]
    public unsafe struct VPhysXBodyPart_t {
        [FieldOffset(0x0)] public fixed byte m_nFlags[0x4];
        [FieldOffset(0x4)] public fixed byte m_flMass[0x4];
        [FieldOffset(0x8)] public fixed byte m_rnShape[0x68];
        [FieldOffset(0x70)] public fixed byte m_nCollisionAttributeIndex[0x2];
        [FieldOffset(0x72)] public fixed byte m_nReserved[0x2];
        [FieldOffset(0x74)] public fixed byte m_flInertiaScale[0x4];
        [FieldOffset(0x78)] public fixed byte m_flLinearDamping[0x4];
        [FieldOffset(0x7C)] public fixed byte m_flAngularDamping[0x4];
        [FieldOffset(0x80)] public fixed byte m_flLinearDrag[0x4];
        [FieldOffset(0x84)] public fixed byte m_flAngularDrag[0x4];
        [FieldOffset(0x88)] public fixed byte m_bOverrideMassCenter[0x4];
        [FieldOffset(0x8C)] public fixed byte m_vMassCenterOverride[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct PulseRuntimeChunkIndex_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CTaskHandshakeAnimTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB8)]
    public unsafe struct CFollowPathUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x74];
        [FieldOffset(0x74)] public fixed byte m_flBlendOutTime[0x4];
        [FieldOffset(0x78)] public fixed byte m_bBlockNonPathMovement[0x1];
        [FieldOffset(0x79)] public fixed byte m_bStopFeetAtGoal[0x1];
        [FieldOffset(0x7A)] public fixed byte m_bScaleSpeed[0x2];
        [FieldOffset(0x7C)] public fixed byte m_flScale[0x4];
        [FieldOffset(0x80)] public fixed byte m_flMinAngle[0x4];
        [FieldOffset(0x84)] public fixed byte m_flMaxAngle[0x4];
        [FieldOffset(0x88)] public fixed byte m_flSpeedScaleBlending[0x8];
        [FieldOffset(0x90)] public fixed byte m_turnDamping[0x18];
        [FieldOffset(0xA8)] public fixed byte m_facingTarget[0x4];
        [FieldOffset(0xAC)] public fixed byte m_hParam[0x4];
        [FieldOffset(0xB0)] public fixed byte m_flTurnToFaceOffset[0x4];
        [FieldOffset(0xB4)] public fixed byte m_bTurnToFace[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xF0)]
    public unsafe struct AimMatrixOpFixedSettings_t {
        [FieldOffset(0x0)] public fixed byte m_attachment[0x80];
        [FieldOffset(0x80)] public fixed byte m_damping[0x18];
        [FieldOffset(0x98)] public fixed byte m_poseCacheHandles[0x28];
        [FieldOffset(0xC0)] public fixed byte m_eBlendMode[0x4];
        [FieldOffset(0xC4)] public fixed byte m_flMaxYawAngle[0x4];
        [FieldOffset(0xC8)] public fixed byte m_flMaxPitchAngle[0x4];
        [FieldOffset(0xCC)] public fixed byte m_nSequenceMaxFrame[0x4];
        [FieldOffset(0xD0)] public fixed byte m_nBoneMaskIndex[0x4];
        [FieldOffset(0xD4)] public fixed byte m_bTargetIsPosition[0x1];
        [FieldOffset(0xD5)] public fixed byte m_bUseBiasAndClamp[0x3];
        [FieldOffset(0xD8)] public fixed byte m_flBiasAndClampYawOffset[0x4];
        [FieldOffset(0xDC)] public fixed byte m_flBiasAndClampPitchOffset[0x4];
        [FieldOffset(0xE0)] public fixed byte m_biasAndClampBlendCurve[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CAnimScriptComponentUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_hScript[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CRagdollUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte m_nWeightListIndex[0x4];
        [FieldOffset(0x74)] public fixed byte m_poseControlMethod[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CBoneConstraintBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CPathAnimMotorUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CMaterialAttributeAnimTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
        [FieldOffset(0x58)] public fixed byte m_AttributeName[0x8];
        [FieldOffset(0x60)] public fixed byte m_AttributeType[0x4];
        [FieldOffset(0x64)] public fixed byte m_flValue[0x4];
        [FieldOffset(0x68)] public fixed byte m_Color[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmFootEventConditionNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nSourceStateNodeIdx[0x2];
        [FieldOffset(0x12)] public fixed byte m_phaseCondition[0x2];
        [FieldOffset(0x14)] public fixed byte m_eventConditionRules[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmFloatChannelSet_t {
        [FieldOffset(0x0)] public fixed byte m_ID[0x8];
        [FieldOffset(0x8)] public fixed byte m_channelIDs[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmFootEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_phase[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CPhysSurfacePropertiesAudio {
        [FieldOffset(0x0)] public fixed byte m_reflectivity[0x4];
        [FieldOffset(0x4)] public fixed byte m_hardnessFactor[0x4];
        [FieldOffset(0x8)] public fixed byte m_roughnessFactor[0x4];
        [FieldOffset(0xC)] public fixed byte m_roughThreshold[0x4];
        [FieldOffset(0x10)] public fixed byte m_hardThreshold[0x4];
        [FieldOffset(0x14)] public fixed byte m_hardVelocityThreshold[0x4];
        [FieldOffset(0x18)] public fixed byte m_flStaticImpactVolume[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flOcclusionFactor[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1C)]
    public unsafe struct CSeqAutoLayer {
        [FieldOffset(0x0)] public fixed byte m_nLocalReference[0x2];
        [FieldOffset(0x2)] public fixed byte m_nLocalPose[0x2];
        [FieldOffset(0x4)] public fixed byte m_flags[0x8];
        [FieldOffset(0xC)] public fixed byte m_start[0x4];
        [FieldOffset(0x10)] public fixed byte m_peak[0x4];
        [FieldOffset(0x14)] public fixed byte m_tail[0x4];
        [FieldOffset(0x18)] public fixed byte m_end[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct ModelEmbeddedMesh_t {
        [FieldOffset(0x0)] public fixed byte m_Name[0x10];
        [FieldOffset(0x10)] public fixed byte m_nMeshIndex[0x4];
        [FieldOffset(0x14)] public fixed byte m_nDataBlock[0x4];
        [FieldOffset(0x18)] public fixed byte m_nMorphBlock[0x8];
        [FieldOffset(0x20)] public fixed byte m_vertexBuffers[0x18];
        [FieldOffset(0x38)] public fixed byte m_indexBuffers[0x18];
        [FieldOffset(0x50)] public fixed byte m_toolsBuffers[0x18];
        [FieldOffset(0x68)] public fixed byte m_nVBIBBlock[0x4];
        [FieldOffset(0x6C)] public fixed byte m_nToolsVBBlock[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct PhysSoftbodyDesc_t {
        [FieldOffset(0x0)] public fixed byte m_ParticleBoneHash[0x18];
        [FieldOffset(0x18)] public fixed byte m_Particles[0x18];
        [FieldOffset(0x30)] public fixed byte m_Springs[0x18];
        [FieldOffset(0x48)] public fixed byte m_Capsules[0x18];
        [FieldOffset(0x60)] public fixed byte m_InitPose[0x18];
        [FieldOffset(0x78)] public fixed byte m_ParticleBoneName[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CPulseRuntimeMethodArg {
        [FieldOffset(0x0)] public fixed byte m_Name[0x38];
        [FieldOffset(0x38)] public fixed byte m_Description[0x8];
        [FieldOffset(0x40)] public fixed byte m_Type[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CAnimSequenceParams {
        [FieldOffset(0x0)] public fixed byte m_flFadeInTime[0x4];
        [FieldOffset(0x4)] public fixed byte m_flFadeOutTime[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x98)]
    public unsafe struct CTargetWarpUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x74];
        [FieldOffset(0x74)] public fixed byte m_eAngleMode[0x4];
        [FieldOffset(0x78)] public fixed byte m_hTargetPositionParameter[0x2];
        [FieldOffset(0x7A)] public fixed byte m_hTargetUpVectorParameter[0x2];
        [FieldOffset(0x7C)] public fixed byte m_hTargetFacePositionParameter[0x2];
        [FieldOffset(0x7E)] public fixed byte m_hMoveHeadingParameter[0x2];
        [FieldOffset(0x80)] public fixed byte m_hDesiredMoveHeadingParameter[0x4];
        [FieldOffset(0x84)] public fixed byte m_eCorrectionMethod[0x4];
        [FieldOffset(0x88)] public fixed byte m_eTargetWarpTimingMethod[0x4];
        [FieldOffset(0x8C)] public fixed byte m_bTargetFacePositionIsWorldSpace[0x1];
        [FieldOffset(0x8D)] public fixed byte m_bTargetPositionIsWorldSpace[0x1];
        [FieldOffset(0x8E)] public fixed byte m_bOnlyWarpWhenTagIsFound[0x1];
        [FieldOffset(0x8F)] public fixed byte m_bWarpOrientationDuringTranslation[0x1];
        [FieldOffset(0x90)] public fixed byte m_bWarpAroundCenter[0x4];
        [FieldOffset(0x94)] public fixed byte m_flMaxAngle[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmVirtualParameterBoolNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nChildNodeIdx[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CFollowTargetUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte m_opFixedData[0x18];
        [FieldOffset(0x88)] public fixed byte m_hParameterPosition[0x2];
        [FieldOffset(0x8A)] public fixed byte m_hParameterOrientation[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2)]
    public unsafe struct PulseRuntimeStateOffset_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CCPPScriptComponentUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_scriptsToRun[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct NetVarConfigIndex {
        [FieldOffset(0x0)] public fixed byte m_index[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CAnimData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_name[0x10];
        [FieldOffset(0x20)] public fixed byte m_animArray[0x18];
        [FieldOffset(0x38)] public fixed byte m_decoderArray[0x18];
        [FieldOffset(0x50)] public fixed byte m_nMaxUniqueFrameIndex[0x8];
        [FieldOffset(0x58)] public fixed byte m_segmentArray[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct IKSolverSettings_t {
        [FieldOffset(0x0)] public fixed byte m_SolverType[0x4];
        [FieldOffset(0x4)] public fixed byte m_nNumIterations[0x4];
        [FieldOffset(0x8)] public fixed byte m_EndEffectorRotationFixUpMode[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CBinaryUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
        [FieldOffset(0x60)] public fixed byte m_pChild1[0x10];
        [FieldOffset(0x70)] public fixed byte m_pChild2[0x10];
        [FieldOffset(0x80)] public fixed byte m_timingBehavior[0x4];
        [FieldOffset(0x84)] public fixed byte m_flTimingBlend[0x4];
        [FieldOffset(0x88)] public fixed byte m_bResetChild1[0x1];
        [FieldOffset(0x89)] public fixed byte m_bResetChild2[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CBlendNodeInstanceData {
        [FieldOffset(0x0)] public fixed byte m_dampedValue[0x4];
        [FieldOffset(0x4)] public fixed byte m_flCycle[0x4];
        [FieldOffset(0x8)] public fixed byte m_flCycleZeroTime[0x4];
        [FieldOffset(0xC)] public fixed byte m_flPlaybackRate[0x4];
        [FieldOffset(0x10)] public fixed byte m_flBlendValue[0xC];
        [FieldOffset(0x1C)] public fixed byte m_flDuration[0x4];
        [FieldOffset(0x20)] public fixed byte m_resetCount[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct CNmParameterizedBlendNode__BlendRange_t {
        [FieldOffset(0x0)] public fixed byte m_nInputIdx0[0x2];
        [FieldOffset(0x2)] public fixed byte m_nInputIdx1[0x2];
        [FieldOffset(0x4)] public fixed byte m_parameterValueRange[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CAnimKeyData {
        [FieldOffset(0x0)] public fixed byte m_name[0x10];
        [FieldOffset(0x10)] public fixed byte m_boneArray[0x18];
        [FieldOffset(0x28)] public fixed byte m_userArray[0x18];
        [FieldOffset(0x40)] public fixed byte m_morphArray[0x18];
        [FieldOffset(0x58)] public fixed byte m_nChannelElements[0x8];
        [FieldOffset(0x60)] public fixed byte m_dataChannelArray[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct AttachmentHandle_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CAnimMorphDifference {
        [FieldOffset(0x0)] public fixed byte m_name[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct FootFixedData_t {
        [FieldOffset(0x0)] public fixed byte m_vToeOffset[0x10];
        [FieldOffset(0x10)] public fixed byte m_vHeelOffset[0x10];
        [FieldOffset(0x20)] public fixed byte m_nTargetBoneIndex[0x4];
        [FieldOffset(0x24)] public fixed byte m_nAnkleBoneIndex[0x4];
        [FieldOffset(0x28)] public fixed byte m_nIKAnchorBoneIndex[0x4];
        [FieldOffset(0x2C)] public fixed byte m_ikChainIndex[0x4];
        [FieldOffset(0x30)] public fixed byte m_flMaxIKLength[0x4];
        [FieldOffset(0x34)] public fixed byte m_nFootIndex[0x4];
        [FieldOffset(0x38)] public fixed byte m_nTagIndex[0x4];
        [FieldOffset(0x3C)] public fixed byte m_flMaxRotationLeft[0x4];
        [FieldOffset(0x40)] public fixed byte m_flMaxRotationRight[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x108)]
    public unsafe struct CMotionGraphGroup {
        [FieldOffset(0x0)] public fixed byte m_searchDB[0xB8];
        [FieldOffset(0xB8)] public fixed byte m_motionGraphs[0x18];
        [FieldOffset(0xD0)] public fixed byte m_motionGraphConfigs[0x18];
        [FieldOffset(0xE8)] public fixed byte m_sampleToConfig[0x18];
        [FieldOffset(0x100)] public fixed byte m_hIsActiveScript[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CPulse_InstructionDebug {
        [FieldOffset(0x0)] public fixed byte m_nFlowNodeID[0x4];
        [FieldOffset(0x4)] public fixed byte m_nValueNodeID[0x4];
        [FieldOffset(0x8)] public fixed byte m_SequencePointName[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmVectorNegateNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nInputValueNodeIdx[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmSyncTrack__Event_t {
        [FieldOffset(0x0)] public fixed byte m_ID[0x8];
        [FieldOffset(0x8)] public fixed byte m_startTime[0x4];
        [FieldOffset(0xC)] public fixed byte m_duration[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6D8)]
    public unsafe struct CParticleCollectionRendererVecInput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x6D8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CNmTarget {
        [FieldOffset(0x0)] public fixed byte m_transform[0x20];
        [FieldOffset(0x20)] public fixed byte m_boneID[0x8];
        [FieldOffset(0x28)] public fixed byte m_bIsBoneTarget[0x1];
        [FieldOffset(0x29)] public fixed byte m_bIsUsingBoneSpaceOffsets[0x1];
        [FieldOffset(0x2A)] public fixed byte m_bHasOffsets[0x1];
        [FieldOffset(0x2B)] public fixed byte m_bIsSet[0x5];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmControlParameterIDNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CNmBodyGroupEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_target[0x8];
        [FieldOffset(0x20)] public fixed byte m_groupName[0x8];
        [FieldOffset(0x28)] public fixed byte m_choiceName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CWayPointHelperUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x74];
        [FieldOffset(0x74)] public fixed byte m_flStartCycle[0x4];
        [FieldOffset(0x78)] public fixed byte m_flEndCycle[0x4];
        [FieldOffset(0x7C)] public fixed byte m_bOnlyGoals[0x1];
        [FieldOffset(0x7D)] public fixed byte m_bPreventOvershoot[0x1];
        [FieldOffset(0x7E)] public fixed byte m_bPreventUndershoot[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x100)]
    public unsafe struct CMoodVData {
        [FieldOffset(0x0)] public fixed byte m_sModelName[0xE0];
        [FieldOffset(0xE0)] public fixed byte m_nMoodType[0x8];
        [FieldOffset(0xE8)] public fixed byte m_animationLayers[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xF0)]
    public unsafe struct CModelConfigElement_AttachedModel {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_InstanceName[0x8];
        [FieldOffset(0x50)] public fixed byte m_EntityClass[0x8];
        [FieldOffset(0x58)] public fixed byte m_hModel[0x8];
        [FieldOffset(0x60)] public fixed byte m_vOffset[0xC];
        [FieldOffset(0x6C)] public fixed byte m_aAngOffset[0xC];
        [FieldOffset(0x78)] public fixed byte m_AttachmentName[0x8];
        [FieldOffset(0x80)] public fixed byte m_LocalAttachmentOffsetName[0x8];
        [FieldOffset(0x88)] public fixed byte m_AttachmentType[0x4];
        [FieldOffset(0x8C)] public fixed byte m_bBoneMergeFlex[0x1];
        [FieldOffset(0x8D)] public fixed byte m_bUserSpecifiedColor[0x1];
        [FieldOffset(0x8E)] public fixed byte m_bUserSpecifiedMaterialGroup[0x2];
        [FieldOffset(0x90)] public fixed byte m_BodygroupOnOtherModels[0x8];
        [FieldOffset(0x98)] public fixed byte m_MaterialGroupOnOtherModels[0x8];
        [FieldOffset(0xA0)] public fixed byte m_bCollideWithHierarchy[0x1];
        [FieldOffset(0xA1)] public fixed byte m_bCollideOutsideHierarchy[0x4F];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CAnimTagManagerUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x38];
        [FieldOffset(0x38)] public fixed byte m_tags[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CParticleProperty {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
    }
}