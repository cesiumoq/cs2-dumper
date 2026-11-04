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

namespace Cs2.particles {

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
    public enum Detail2Combo_t : int {
        DETAIL_2_COMBO_UNINITIALIZED = 18446744073709551615, 
        DETAIL_2_COMBO_OFF = 0, 
        DETAIL_2_COMBO_ADD = 1, 
        DETAIL_2_COMBO_ADD_SELF_ILLUM = 2, 
        DETAIL_2_COMBO_MOD2X = 3, 
        DETAIL_2_COMBO_MUL = 4, 
        DETAIL_2_COMBO_CROSSFADE = 5, 
    }
    public enum MissingParentInheritBehavior_t : int {
        MISSING_PARENT_DO_NOTHING = 18446744073709551615, 
        MISSING_PARENT_KILL = 0, 
        MISSING_PARENT_FIND_NEW = 1, 
        MISSING_PARENT_SAME_INDEX = 2, 
    }
    public enum ParticleTraceMissBehavior_t : int {
        PARTICLE_TRACE_MISS_BEHAVIOR_NONE = 0, 
        PARTICLE_TRACE_MISS_BEHAVIOR_KILL = 1, 
        PARTICLE_TRACE_MISS_BEHAVIOR_TRACE_END = 2, 
    }
    public enum PFuncVisualizationType_t : int {
        PFUNC_VISUALIZATION_SPHERE_WIREFRAME = 0, 
        PFUNC_VISUALIZATION_SPHERE_SOLID = 1, 
        PFUNC_VISUALIZATION_BOX = 2, 
        PFUNC_VISUALIZATION_RING = 3, 
        PFUNC_VISUALIZATION_PLANE = 4, 
        PFUNC_VISUALIZATION_LINE = 5, 
        PFUNC_VISUALIZATION_CYLINDER = 6, 
    }
    public enum ParticleVRHandChoiceList_t : int {
        PARTICLE_VRHAND_LEFT = 0, 
        PARTICLE_VRHAND_RIGHT = 1, 
        PARTICLE_VRHAND_CP = 2, 
        PARTICLE_VRHAND_CP_OBJECT = 3, 
    }
    public enum ParticleEntityPos_t : int {
        PARTICLE_ABS_ORIGIN = 0, 
        PARTICLE_WORLDSPACE_CENTER = 1, 
        PARTICLE_EYES = 2, 
        PARTICLE_FLASHLIGHT = 3, 
    }
    public enum ParticleFanType_t : int {
        PARTICLE_FAN_TYPE_FAN = 0, 
        PARTICLE_FAN_TYPE_ROTOR_WASH = 1, 
        PARTICLE_FAN_TYPE_RADIAL = 2, 
    }
    public enum PetGroundType_t : int {
        PET_GROUND_NONE = 0, 
        PET_GROUND_GRID = 1, 
        PET_GROUND_PLANE = 2, 
    }
    public enum InheritableBoolType_t : int {
        INHERITABLE_BOOL_INHERIT = 0, 
        INHERITABLE_BOOL_FALSE = 1, 
        INHERITABLE_BOOL_TRUE = 2, 
    }
    public enum ParticlePostProcessPriorityGroup_t : int {
        PARTICLE_POST_PROCESS_PRIORITY_LEVEL_VOLUME = 0, 
        PARTICLE_POST_PROCESS_PRIORITY_LEVEL_OVERRIDE = 1, 
        PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_EFFECT = 2, 
        PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_LOW = 3, 
        PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_HIGH = 4, 
        PARTICLE_POST_PROCESS_PRIORITY_GLOBAL_UI = 5, 
    }
    public enum ParticleCollisionGroup_t : int {
        PARTICLE_COLLISION_GROUP_DEFAULT = 4, 
        PARTICLE_COLLISION_GROUP_DEBRIS = 5, 
        PARTICLE_COLLISION_GROUP_INTERACTIVE = 7, 
        PARTICLE_COLLISION_GROUP_PLAYER = 8, 
        PARTICLE_COLLISION_GROUP_VEHICLE = 10, 
        PARTICLE_COLLISION_GROUP_NPC = 12, 
        PARTICLE_COLLISION_GROUP_PROPS = 24, 
    }
    public enum DetailCombo_t : int {
        DETAIL_COMBO_OFF = 0, 
        DETAIL_COMBO_ADD = 1, 
        DETAIL_COMBO_ADD_SELF_ILLUM = 2, 
        DETAIL_COMBO_MOD2X = 3, 
    }
    public enum ScalarExpressionType_t : int {
        SCALAR_EXPRESSION_UNINITIALIZED = 18446744073709551615, 
        SCALAR_EXPRESSION_ADD = 0, 
        SCALAR_EXPRESSION_SUBTRACT = 1, 
        SCALAR_EXPRESSION_MUL = 2, 
        SCALAR_EXPRESSION_DIVIDE = 3, 
        SCALAR_EXPRESSION_INPUT_1 = 4, 
        SCALAR_EXPRESSION_MIN = 5, 
        SCALAR_EXPRESSION_MAX = 6, 
        SCALAR_EXPRESSION_MOD = 7, 
        SCALAR_EXPRESSION_EQUAL = 8, 
        SCALAR_EXPRESSION_GT = 9, 
        SCALAR_EXPRESSION_LT = 10, 
    }
    public enum SpriteCardPerParticleScale_t : int {
        SPRITECARD_TEXTURE_PP_SCALE_NONE = 0, 
        SPRITECARD_TEXTURE_PP_SCALE_PARTICLE_AGE = 1, 
        SPRITECARD_TEXTURE_PP_SCALE_ANIMATION_FRAME = 2, 
        SPRITECARD_TEXTURE_PP_SCALE_SHADER_EXTRA_DATA1 = 3, 
        SPRITECARD_TEXTURE_PP_SCALE_SHADER_EXTRA_DATA2 = 4, 
        SPRITECARD_TEXTURE_PP_SCALE_PARTICLE_ALPHA = 5, 
        SPRITECARD_TEXTURE_PP_SCALE_SHADER_RADIUS = 6, 
        SPRITECARD_TEXTURE_PP_SCALE_ROLL = 7, 
        SPRITECARD_TEXTURE_PP_SCALE_YAW = 8, 
        SPRITECARD_TEXTURE_PP_SCALE_PITCH = 9, 
        SPRITECARD_TEXTURE_PP_SCALE_RANDOM = 10, 
        SPRITECARD_TEXTURE_PP_SCALE_NEG_RANDOM = 11, 
        SPRITECARD_TEXTURE_PP_SCALE_RANDOM_TIME = 12, 
        SPRITECARD_TEXTURE_PP_SCALE_NEG_RANDOM_TIME = 13, 
    }
    public enum BlurFilterType_t : int {
        BLURFILTER_GAUSSIAN = 0, 
        BLURFILTER_BOX = 1, 
    }
    public enum StandardLightingAttenuationStyle_t : int {
        LIGHT_STYLE_OLD = 0, 
        LIGHT_STYLE_NEW = 1, 
    }
    public enum ParticleParentSetMode_t : int {
        PARTICLE_SET_PARENT_NO = 0, 
        PARTICLE_SET_PARENT_IMMEDIATE = 1, 
        PARTICLE_SET_PARENT_ROOT = 2, 
    }
    public enum ParticleLightingQuality_t : int {
        PARTICLE_LIGHTING_PER_PARTICLE = 0, 
        PARTICLE_LIGHTING_PER_VERTEX = 1, 
        PARTICLE_LIGHTING_PER_PIXEL = 18446744073709551615, 
        PARTICLE_LIGHTING_OVERRIDE_POSITION = 2, 
        PARTICLE_LIGHTING_OVERRIDE_COLOR = 3, 
        PARTICLE_LIGHTING_ADD_EXTRA_LIGHT = 4, 
    }
    public enum ParticleVolumetricSmokeCreationType_t : int {
        PARTICLE_VOLUMETRIC_SMOKE_TYPE_CONTINUOUS = 0, 
        PARTICLE_VOLUMETRIC_SMOKE_TYPE_IMPULSE = 1, 
    }
    public enum SetStatisticExpressionType_t : int {
        SET_EXPRESSION_UNINITIALIZED = 18446744073709551615, 
        SET_EXPRESSION_SUM = 0, 
        SET_EXPRESSION_MEAN = 1, 
        SET_EXPRESSION_MEDIAN = 2, 
        SET_EXPRESSION_MODE = 3, 
        SET_EXPRESSION_STANDARD_DEVIATION = 4, 
        SET_EXPRESSION_MIN = 5, 
        SET_EXPRESSION_MAX = 6, 
    }
    public enum EventTypeSelection_t : int {
        PARTICLE_EVENT_TYPE_MASK_NONE = 0, 
        PARTICLE_EVENT_TYPE_MASK_SPAWNED = 1, 
        PARTICLE_EVENT_TYPE_MASK_KILLED = 2, 
        PARTICLE_EVENT_TYPE_MASK_COLLISION = 4, 
        PARTICLE_EVENT_TYPE_MASK_FIRST_COLLISION = 8, 
        PARTICLE_EVENT_TYPE_MASK_COLLISION_STOPPED = 16, 
        PARTICLE_EVENT_TYPE_MASK_KILLED_ON_COLLISION = 32, 
        PARTICLE_EVENT_TYPE_MASK_KILLED_ON_CULL = 1024, 
        PARTICLE_EVENT_TYPE_MASK_CULLED_ON_SPAWN = 2048, 
        PARTICLE_EVENT_TYPE_MASK_USER_1 = 64, 
        PARTICLE_EVENT_TYPE_MASK_USER_2 = 128, 
        PARTICLE_EVENT_TYPE_MASK_USER_3 = 256, 
        PARTICLE_EVENT_TYPE_MASK_USER_4 = 512, 
    }
    public enum ParticleMassMode_t : int {
        PARTICLE_MASSMODE_RADIUS_CUBED = 0, 
        PARTICLE_MASSMODE_RADIUS_SQUARED = 2, 
    }
    public enum ParticleHitboxBiasType_t : int {
        PARTICLE_HITBOX_BIAS_ENTITY = 0, 
        PARTICLE_HITBOX_BIAS_HITBOX = 1, 
    }
    public enum ParticleControlPointAxis_t : int {
        PARTICLE_CP_AXIS_X = 0, 
        PARTICLE_CP_AXIS_Y = 1, 
        PARTICLE_CP_AXIS_Z = 2, 
        PARTICLE_CP_AXIS_NEGATIVE_X = 3, 
        PARTICLE_CP_AXIS_NEGATIVE_Y = 4, 
        PARTICLE_CP_AXIS_NEGATIVE_Z = 5, 
    }
    public enum ParticlePinDistance_t : int {
        PARTICLE_PIN_DISTANCE_NONE = 18446744073709551615, 
        PARTICLE_PIN_DISTANCE_NEIGHBOR = 0, 
        PARTICLE_PIN_DISTANCE_FARTHEST = 1, 
        PARTICLE_PIN_DISTANCE_FIRST = 2, 
        PARTICLE_PIN_DISTANCE_LAST = 3, 
        PARTICLE_PIN_DISTANCE_CENTER = 5, 
        PARTICLE_PIN_DISTANCE_CP = 6, 
        PARTICLE_PIN_DISTANCE_CP_PAIR_EITHER = 7, 
        PARTICLE_PIN_DISTANCE_CP_PAIR_BOTH = 8, 
        PARTICLE_PIN_SPEED = 9, 
        PARTICLE_PIN_COLLECTION_AGE = 10, 
        PARTICLE_PIN_FLOAT_VALUE = 11, 
    }
    public enum VectorFloatExpressionType_t : int {
        VECTOR_FLOAT_EXPRESSION_UNINITIALIZED = 18446744073709551615, 
        VECTOR_FLOAT_EXPRESSION_DOTPRODUCT = 0, 
        VECTOR_FLOAT_EXPRESSION_DISTANCE = 1, 
        VECTOR_FLOAT_EXPRESSION_DISTANCESQR = 2, 
        VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTH = 3, 
        VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTHSQR = 4, 
        VECTOR_FLOAT_EXPRESSION_INPUT1_NOISE = 5, 
    }
    public enum ParticleFogType_t : int {
        PARTICLE_FOG_GAME_DEFAULT = 0, 
        PARTICLE_FOG_ENABLED = 1, 
        PARTICLE_FOG_DISABLED = 2, 
    }
    public enum VectorExpressionType_t : int {
        VECTOR_EXPRESSION_UNINITIALIZED = 18446744073709551615, 
        VECTOR_EXPRESSION_ADD = 0, 
        VECTOR_EXPRESSION_SUBTRACT = 1, 
        VECTOR_EXPRESSION_MUL = 2, 
        VECTOR_EXPRESSION_DIVIDE = 3, 
        VECTOR_EXPRESSION_INPUT_1 = 4, 
        VECTOR_EXPRESSION_MIN = 5, 
        VECTOR_EXPRESSION_MAX = 6, 
        VECTOR_EXPRESSION_CROSSPRODUCT = 7, 
        VECTOR_EXPRESSION_LERP = 8, 
    }
    public enum ParticleMultiSegmentInputSelection_t : int {
        PARTICLE_MULTISEGMENT_SELECTION_FLOAT = 0, 
        PARTICLE_MULTISEGMENT_SELECTION_STRING = 1, 
    }
    public enum ParticleRotationLockType_t : int {
        PARTICLE_ROTATION_LOCK_NONE = 0, 
        PARTICLE_ROTATION_LOCK_ROTATIONS = 1, 
        PARTICLE_ROTATION_LOCK_NORMAL = 2, 
    }
    public enum HitboxLerpType_t : int {
        HITBOX_LERP_LIFETIME = 0, 
        HITBOX_LERP_CONSTANT = 1, 
    }
    public enum ParticleAttrBoxFlags_t : int {
        PARTICLE_ATTR_BOX_FLAGS_NONE = 0, 
        PARTICLE_ATTR_BOX_FLAGS_WATER = 1, 
        PARTICLE_ATTR_BOX_FLAGS_ON_FIRE = 2, 
        PARTICLE_ATTR_BOX_FLAGS_ELECTRIFIED = 4, 
        PARTICLE_ATTR_BOX_FLAGS_ASLEEP = 8, 
        PARTICLE_ATTR_BOX_FLAGS_FROZEN = 16, 
        PARTICLE_ATTR_BOX_FLAGS_TIMED_DECAY = 32, 
        PARTICLE_ATTR_BOX_FLAGS_DISABLE_NONSTATIC_COLLISION = 64, 
        PARTICLE_ATTR_BOX_FLAGS_WAKE_DECAY = 128, 
        PARTICLE_ATTR_BOX_FLAGS_MOTION_DISABLED = 256, 
        PARTICLE_ATTR_BOX_FLAGS_ZERO_GRAVITY = 512, 
    }
    public enum ParticleTopology_t : int {
        PARTICLE_TOPOLOGY_POINTS = 0, 
        PARTICLE_TOPOLOGY_LINES = 1, 
        PARTICLE_TOPOLOGY_TRIS = 2, 
        PARTICLE_TOPOLOGY_QUADS = 3, 
        PARTICLE_TOPOLOGY_CUBES = 4, 
    }
    public enum ParticleLightBehaviorChoiceList_t : int {
        PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION = 0, 
        PARTICLE_LIGHT_BEHAVIOR_ROPE = 1, 
        PARTICLE_LIGHT_BEHAVIOR_TRAILS = 2, 
    }
    public enum ModelHitboxType_t : int {
        MODEL_HITBOX_TYPE_STANDARD = 0, 
        MODEL_HITBOX_TYPE_RAW_BONES = 1, 
        MODEL_HITBOX_TYPE_RENDERBOUNDS = 2, 
        MODEL_HITBOX_TYPE_SNAPSHOT = 3, 
    }
    public enum ParticleMultiSegmentCountSelection_t : int {
        PARTICLE_MULTISEGMENT_SEG_COUNT_7 = 7, 
        PARTICLE_MULTISEGMENT_SEG_COUNT_14 = 14, 
        PARTICLE_MULTISEGMENT_SEG_COUNT_16 = 16, 
    }
    public enum ParticleOrientationType_t : int {
        PARTICLE_ORIENTATION_NONE = 0, 
        PARTICLE_ORIENTATION_VELOCITY = 1, 
        PARTICLE_ORIENTATION_NORMAL = 2, 
        PARTICLE_ORIENTATION_ROTATION = 4, 
    }
    public enum ParticleTraceSet_t : int {
        PARTICLE_TRACE_SET_ALL = 0, 
        PARTICLE_TRACE_SET_STATIC = 1, 
        PARTICLE_TRACE_SET_STATIC_AND_KEYFRAMED = 2, 
        PARTICLE_TRACE_SET_DYNAMIC = 3, 
    }
    public enum ParticleTextureLayerBlendType_t : int {
        SPRITECARD_TEXTURE_BLEND_MULTIPLY = 0, 
        SPRITECARD_TEXTURE_BLEND_MOD2X = 1, 
        SPRITECARD_TEXTURE_BLEND_REPLACE = 2, 
        SPRITECARD_TEXTURE_BLEND_ADD = 3, 
        SPRITECARD_TEXTURE_BLEND_SUBTRACT = 4, 
        SPRITECARD_TEXTURE_BLEND_AVERAGE = 5, 
        SPRITECARD_TEXTURE_BLEND_LUMINANCE = 6, 
    }
    public enum ParticleSelection_t : int {
        PARTICLE_SELECTION_FIRST = 0, 
        PARTICLE_SELECTION_LAST = 1, 
        PARTICLE_SELECTION_NUMBER = 2, 
    }
    public enum ParticleToolsState_t : int {
        PARTICLE_TOOLS_STATE_ALWAYS_ON = 18446744073709551615, 
        PARTICLE_TOOLS_STATE_TOOLS_ONLY = 0, 
        PARTICLE_TOOLS_STATE_GAME_ONLY = 1, 
    }
    public enum SnapshotIndexType_t : int {
        SNAPSHOT_INDEX_INCREMENT = 0, 
        SNAPSHOT_INDEX_DIRECT = 1, 
    }
    public enum ParticleOutputBlendMode_t : int {
        PARTICLE_OUTPUT_BLEND_MODE_ALPHA = 0, 
        PARTICLE_OUTPUT_BLEND_MODE_ADD = 1, 
        PARTICLE_OUTPUT_BLEND_MODE_BLEND_ADD = 2, 
        PARTICLE_OUTPUT_BLEND_MODE_HALF_BLEND_ADD = 3, 
        PARTICLE_OUTPUT_BLEND_MODE_NEG_HALF_BLEND_ADD = 4, 
        PARTICLE_OUTPUT_BLEND_MODE_MOD2X = 5, 
        PARTICLE_OUTPUT_BLEND_MODE_LIGHTEN = 6, 
    }
    public enum ParticleLightnintBranchBehavior_t : int {
        PARTICLE_LIGHTNING_BRANCH_CURRENT_DIR = 0, 
        PARTICLE_LIGHTNING_BRANCH_ENDPOINT_DIR = 1, 
    }
    public enum MaterialProxyType_t : int {
        MATERIAL_PROXY_STATUS_EFFECT = 0, 
        MATERIAL_PROXY_TINT = 1, 
    }
    public enum ParticleDepthFeatheringMode_t : int {
        PARTICLE_DEPTH_FEATHERING_OFF = 0, 
        PARTICLE_DEPTH_FEATHERING_ON_OPTIONAL = 1, 
        PARTICLE_DEPTH_FEATHERING_ON_REQUIRED = 2, 
    }
    public enum ParticleLightUnitChoiceList_t : int {
        PARTICLE_LIGHT_UNIT_CANDELAS = 0, 
        PARTICLE_LIGHT_UNIT_LUMENS = 1, 
    }
    public enum ParticleMultiSegmentSpecialCharacter_t : int {
        PARTICLE_MULTISEGMENT_SPECIAL_NONE = 18446744073709551615, 
        PARTICLE_MULTISEGMENT_SPECIAL_DECIMAL = 0, 
        PARTICLE_MULTISEGMENT_SPECIAL_COLON = 1, 
        PARTICLE_MULTISEGMENT_SPECIAL_DEGREES = 2, 
    }
    public enum ParticleOmni2LighOrientationChoiceList_t : int {
        PARTICLE_OMNI2_LIGHT_ORIENTATION_ROTATIONS = 0, 
        PARTICLE_OMNI2_LIGHT_ORIENTATION_NORMAL = 1, 
        PARTICLE_OMNI2_LIGHT_ORIENTATION_NORMAL_ROLL = 2, 
        PARTICLE_OMNI2_LIGHT_ORIENTATION_TARGET = 3, 
        PARTICLE_OMNI2_LIGHT_ORIENTATION_TARGET_ROLL = 4, 
    }
    public enum ParticleFalloffFunction_t : int {
        PARTICLE_FALLOFF_CONSTANT = 0, 
        PARTICLE_FALLOFF_LINEAR = 1, 
        PARTICLE_FALLOFF_EXPONENTIAL = 2, 
    }
    public enum ParticleSequenceCropOverride_t : int {
        PARTICLE_SEQUENCE_CROP_OVERRIDE_DEFAULT = 18446744073709551615, 
        PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_OFF = 0, 
        PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_ON = 1, 
    }
    public enum ParticleDetailLevel_t : int {
        PARTICLEDETAIL_LOW = 0, 
        PARTICLEDETAIL_MEDIUM = 1, 
        PARTICLEDETAIL_HIGH = 2, 
        PARTICLEDETAIL_ULTRA = 3, 
    }
    public enum BBoxVolumeType_t : int {
        BBOX_VOLUME = 0, 
        BBOX_DIMENSIONS = 1, 
        BBOX_MINS_MAXS = 2, 
        BBOX_RADIUS = 3, 
        BBOX_SURFACE_AREA = 4, 
    }
    public enum SpriteCardTextureType_t : int {
        SPRITECARD_TEXTURE_DIFFUSE = 0, 
        SPRITECARD_TEXTURE_ZOOM = 1, 
        SPRITECARD_TEXTURE_1D_COLOR_LOOKUP = 2, 
        SPRITECARD_TEXTURE_UVDISTORTION = 3, 
        SPRITECARD_TEXTURE_UVDISTORTION_ZOOM = 4, 
        SPRITECARD_TEXTURE_NORMALMAP = 5, 
        SPRITECARD_TEXTURE_ANIMMOTIONVEC = 6, 
        SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_A = 7, 
        SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_B = 8, 
        SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_C = 9, 
        SPRITECARD_TEXTURE_DEPTH = 10, 
        SPRITECARD_TEXTURE_ILLUMINATION_GRADIENT = 11, 
    }
    public enum ParticleAlphaReferenceType_t : int {
        PARTICLE_ALPHA_REFERENCE_ALPHA_ALPHA = 0, 
        PARTICLE_ALPHA_REFERENCE_OPAQUE_ALPHA = 1, 
        PARTICLE_ALPHA_REFERENCE_ALPHA_OPAQUE = 2, 
        PARTICLE_ALPHA_REFERENCE_OPAQUE_OPAQUE = 3, 
    }
    public enum SpriteCardTextureChannel_t : int {
        SPRITECARD_TEXTURE_CHANNEL_MIX_RGB = 0, 
        SPRITECARD_TEXTURE_CHANNEL_MIX_RGBA = 1, 
        SPRITECARD_TEXTURE_CHANNEL_MIX_A = 2, 
        SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_A = 3, 
        SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_ALPHAMASK = 4, 
        SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_RGBMASK = 5, 
        SPRITECARD_TEXTURE_CHANNEL_MIX_RGBA_RGBALPHA = 6, 
        SPRITECARD_TEXTURE_CHANNEL_MIX_A_RGBALPHA = 7, 
        SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_A_RGBALPHA = 8, 
        SPRITECARD_TEXTURE_CHANNEL_MIX_R = 9, 
        SPRITECARD_TEXTURE_CHANNEL_MIX_G = 10, 
        SPRITECARD_TEXTURE_CHANNEL_MIX_B = 11, 
        SPRITECARD_TEXTURE_CHANNEL_MIX_RALPHA = 12, 
        SPRITECARD_TEXTURE_CHANNEL_MIX_GALPHA = 13, 
        SPRITECARD_TEXTURE_CHANNEL_MIX_BALPHA = 14, 
    }
    public enum ParticleVolumetricSmokeType_t : int {
        PARTICLE_VOLUMETRIC_SMOKE_TYPE_EMISSION = 0, 
        PARTICLE_VOLUMETRIC_SMOKE_TYPE_SINK = 1, 
        PARTICLE_VOLUMETRIC_SMOKE_TYPE_REPEL = 2, 
        PARTICLE_VOLUMETRIC_SMOKE_TYPE_TRACE = 3, 
    }
    public enum RenderModelSubModelFieldType_t : int {
        SUBMODEL_AS_BODYGROUP_SUBMODEL = 0, 
        SUBMODEL_AS_MESHGROUP_INDEX = 1, 
        SUBMODEL_AS_MESHGROUP_MASK = 2, 
        SUBMODEL_IGNORED_USE_MODEL_DEFAULT_MESHGROUP_MASK = 3, 
    }
    public enum ParticleHitboxDataSelection_t : int {
        PARTICLE_HITBOX_AVERAGE_SPEED = 0, 
        PARTICLE_HITBOX_COUNT = 1, 
    }
    public enum ParticleOrientationChoiceList_t : int {
        PARTICLE_ORIENTATION_SCREEN_ALIGNED = 0, 
        PARTICLE_ORIENTATION_SCREEN_Z_ALIGNED = 1, 
        PARTICLE_ORIENTATION_WORLD_Z_ALIGNED = 2, 
        PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL = 3, 
        PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL = 4, 
        PARTICLE_ORIENTATION_FULL_3AXIS_ROTATION = 5, 
    }
    public enum ParticleCollisionMode_t : int {
        COLLISION_MODE_PER_PARTICLE_TRACE = 3, 
        COLLISION_MODE_USE_NEAREST_TRACE = 2, 
        COLLISION_MODE_PER_FRAME_PLANESET = 1, 
        COLLISION_MODE_INITIAL_TRACE_DOWN = 0, 
        COLLISION_MODE_DISABLED = 18446744073709551615, 
    }
    public enum ParticleSortingChoiceList_t : int {
        PARTICLE_SORTING_NEAREST = 0, 
        PARTICLE_SORTING_CREATION_TIME = 1, 
    }
    public enum ParticleEndcapMode_t : int {
        PARTICLE_ENDCAP_ALWAYS_ON = 18446744073709551615, 
        PARTICLE_ENDCAP_ENDCAP_OFF = 0, 
        PARTICLE_ENDCAP_ENDCAP_ON = 1, 
    }
    public enum ClosestPointTestType_t : int {
        PARTICLE_CLOSEST_TYPE_BOX = 0, 
        PARTICLE_CLOSEST_TYPE_CAPSULE = 1, 
        PARTICLE_CLOSEST_TYPE_HYBRID = 2, 
    }
    public enum ParticleImpulseType_t : int {
        IMPULSE_TYPE_NONE = 0, 
        IMPULSE_TYPE_GENERIC = 1, 
        IMPULSE_TYPE_ROPE = 2, 
        IMPULSE_TYPE_EXPLOSION = 4, 
        IMPULSE_TYPE_EXPLOSION_UNDERWATER = 8, 
        IMPULSE_TYPE_PARTICLE_SYSTEM = 16, 
    }
    public enum ParticleLiquidContents_t : int {
        PARTICLE_LIQUID_NONE = 0, 
        PARTICLE_LIQUID_OIL = 1, 
        PARTICLE_LIQUID_WATER = 2, 
    }
    public enum SpriteCardShaderType_t : int {
        SPRITECARD_SHADER_BASE = 0, 
        SPRITECARD_SHADER_CUSTOM = 1, 
    }
    public enum ParticleOmni2LightTypeChoiceList_t : int {
        PARTICLE_OMNI2_LIGHT_TYPE_POINT = 0, 
        PARTICLE_OMNI2_LIGHT_TYPE_SPHERE = 1, 
        PARTICLE_OMNI2_LIGHT_TYPE_BARN = 2, 
    }
    public enum ParticleLightFogLightingMode_t : int {
        PARTICLE_LIGHT_FOG_LIGHTING_MODE_NONE = 0, 
        PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC = 2, 
        PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC_NOSHADOWS = 4, 
    }
    public enum ParticleLightTypeChoiceList_t : int {
        PARTICLE_LIGHT_TYPE_POINT = 0, 
        PARTICLE_LIGHT_TYPE_SPOT = 1, 
        PARTICLE_LIGHT_TYPE_FX = 2, 
        PARTICLE_LIGHT_TYPE_CAPSULE = 3, 
    }
    public enum ParticleOrientationSetMode_t : int {
        PARTICLE_ORIENTATION_SET_NONE = 18446744073709551615, 
        PARTICLE_ORIENTATION_SET_FROM_VELOCITY = 0, 
        PARTICLE_ORIENTATION_SET_FROM_NORMAL = 1, 
        PARTICLE_ORIENTATION_SET_FROM_ROTATIONS = 2, 
    }
    public enum ParticleCollisionMask_t : int {
        PARTICLE_MASK_ALL = 18446744073709551615, 
        PARTICLE_MASK_SOLID = 798721, 
        PARTICLE_MASK_WATER = 98304, 
        PARTICLE_MASK_SOLID_WATER = 897025, 
        PARTICLE_MASK_SHOT = 1839107, 
        PARTICLE_MASK_SHOT_BRUSHONLY = 1052673, 
        PARTICLE_MASK_SHOT_HULL = 1847297, 
        PARTICLE_MASK_OPAQUE = 128, 
        PARTICLE_MASK_DEFAULTPLAYERSOLID = 798737, 
        PARTICLE_MASK_NPCSOLID = 798753, 
    }
    public enum TextureRepetitionMode_t : int {
        TEXTURE_REPETITION_PARTICLE = 0, 
        TEXTURE_REPETITION_PATH = 1, 
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
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct IParticleCollection {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x930)]
    public unsafe struct C_OP_RemapGravityToVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_vInput1[0x6D8];
        [FieldOffset(0x8B8)] public fixed byte m_nOutputField[0x4];
        [FieldOffset(0x8BC)] public fixed byte m_nSetMethod[0x4];
        [FieldOffset(0x8C0)] public fixed byte m_bNormalizedOutput[0x70];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1E8)]
    public unsafe struct C_OP_Decay {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_bRopeDecay[0x1];
        [FieldOffset(0x1E1)] public fixed byte m_bForcePreserveParticleOrder[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x948)]
    public unsafe struct C_OP_RenderDeferredLight {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_flRadiusScale[0x4];
        [FieldOffset(0x234)] public fixed byte m_flAlphaScale[0x4];
        [FieldOffset(0x238)] public fixed byte m_nAlpha2Field[0x8];
        [FieldOffset(0x240)] public fixed byte m_vecColorScale[0x6D8];
        [FieldOffset(0x918)] public fixed byte m_nColorBlendType[0x4];
        [FieldOffset(0x91C)] public fixed byte m_bUseTexture[0x1];
        [FieldOffset(0x91D)] public fixed byte m_bUseAlphaTestWindow[0x3];
        [FieldOffset(0x920)] public fixed byte m_hTexture[0x8];
        [FieldOffset(0x928)] public fixed byte m_nAlphaTestPointField[0x4];
        [FieldOffset(0x92C)] public fixed byte m_nAlphaTestRangeField[0x4];
        [FieldOffset(0x930)] public fixed byte m_nAlphaTestSharpnessField[0x4];
        [FieldOffset(0x934)] public fixed byte m_flLightDistance[0x4];
        [FieldOffset(0x938)] public fixed byte m_flStartFalloff[0x4];
        [FieldOffset(0x93C)] public fixed byte m_flDistanceFalloff[0x4];
        [FieldOffset(0x940)] public fixed byte m_flSpotFoV[0x4];
        [FieldOffset(0x944)] public fixed byte m_nHSVShiftControlPoint[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_RemapSpeedtoCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nInControlPointNumber[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nOutControlPointNumber[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nField[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flInputMin[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_flInputMax[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_flOutputMin[0x4];
        [FieldOffset(0x200)] public fixed byte m_flOutputMax[0x4];
        [FieldOffset(0x204)] public fixed byte m_bUseDeltaV[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x248)]
    public unsafe struct C_OP_RemapTransformToVelocity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_TransformInput[0x68];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CollisionGroupContext_t {
        [FieldOffset(0x0)] public fixed byte m_nCollisionGroupNumber[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1E8)]
    public unsafe struct CParticleFunctionPreEmission {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_bRunOnce[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1E8)]
    public unsafe struct C_OP_FadeOutSimple {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flFadeOutTime[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nFieldOutput[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xE98)]
    public unsafe struct C_OP_SpringToVectorConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flRestLength[0x178];
        [FieldOffset(0x358)] public fixed byte m_flMinDistance[0x178];
        [FieldOffset(0x4D0)] public fixed byte m_flMaxDistance[0x178];
        [FieldOffset(0x648)] public fixed byte m_flRestingLength[0x178];
        [FieldOffset(0x7C0)] public fixed byte m_vecAnchorVector[0x6D8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x3528)]
    public unsafe struct C_OP_RenderRopes {
        [FieldOffset(0x0)] public fixed byte pad_0[0x2ED8];
        [FieldOffset(0x2ED8)] public fixed byte m_bEnableFadingAndClamping[0x4];
        [FieldOffset(0x2EDC)] public fixed byte m_flMinSize[0x4];
        [FieldOffset(0x2EE0)] public fixed byte m_flMaxSize[0x4];
        [FieldOffset(0x2EE4)] public fixed byte m_flStartFadeSize[0x4];
        [FieldOffset(0x2EE8)] public fixed byte m_flEndFadeSize[0x4];
        [FieldOffset(0x2EEC)] public fixed byte m_flStartFadeDot[0x4];
        [FieldOffset(0x2EF0)] public fixed byte m_flEndFadeDot[0x8];
        [FieldOffset(0x2EF8)] public fixed byte m_flSubPixelAAScale[0x178];
        [FieldOffset(0x3070)] public fixed byte m_flRadiusTaper[0x4];
        [FieldOffset(0x3074)] public fixed byte m_nMinTesselation[0x4];
        [FieldOffset(0x3078)] public fixed byte m_nMaxTesselation[0x4];
        [FieldOffset(0x307C)] public fixed byte m_flTessScale[0x4];
        [FieldOffset(0x3080)] public fixed byte m_flTextureVWorldSize[0x178];
        [FieldOffset(0x31F8)] public fixed byte m_flTextureVScrollRate[0x178];
        [FieldOffset(0x3370)] public fixed byte m_flTextureVOffset[0x178];
        [FieldOffset(0x34E8)] public fixed byte m_nTextureVParamsCP[0x4];
        [FieldOffset(0x34EC)] public fixed byte m_bClampV[0x4];
        [FieldOffset(0x34F0)] public fixed byte m_nScaleCP1[0x4];
        [FieldOffset(0x34F4)] public fixed byte m_nScaleCP2[0x4];
        [FieldOffset(0x34F8)] public fixed byte m_flScaleVSizeByControlPointDistance[0x4];
        [FieldOffset(0x34FC)] public fixed byte m_flScaleVScrollByControlPointDistance[0x4];
        [FieldOffset(0x3500)] public fixed byte m_flScaleVOffsetByControlPointDistance[0x5];
        [FieldOffset(0x3505)] public fixed byte m_bUseScalarForTextureCoordinate[0x3];
        [FieldOffset(0x3508)] public fixed byte m_nScalarFieldForTextureCoordinate[0x4];
        [FieldOffset(0x350C)] public fixed byte m_flScalarAttributeTextureCoordScale[0x4];
        [FieldOffset(0x3510)] public fixed byte m_bReverseOrder[0x1];
        [FieldOffset(0x3511)] public fixed byte m_bClosedLoop[0x3];
        [FieldOffset(0x3514)] public fixed byte m_nSplitField[0x4];
        [FieldOffset(0x3518)] public fixed byte m_bSortBySegmentID[0x4];
        [FieldOffset(0x351C)] public fixed byte m_nOrientationType[0x4];
        [FieldOffset(0x3520)] public fixed byte m_nVectorFieldForOrientation[0x4];
        [FieldOffset(0x3524)] public fixed byte m_bDrawAsOpaque[0x1];
        [FieldOffset(0x3525)] public fixed byte m_bGenerateNormals[0x3];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x238)]
    public unsafe struct C_INIT_StatusEffectCitadel {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_flSFXColorWarpAmount[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flSFXNormalAmount[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flSFXMetalnessAmount[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flSFXRoughnessAmount[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_flSFXSelfIllumAmount[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_flSFXSScale[0x4];
        [FieldOffset(0x200)] public fixed byte m_flSFXSScrollX[0x4];
        [FieldOffset(0x204)] public fixed byte m_flSFXSScrollY[0x4];
        [FieldOffset(0x208)] public fixed byte m_flSFXSScrollZ[0x4];
        [FieldOffset(0x20C)] public fixed byte m_flSFXSOffsetX[0x4];
        [FieldOffset(0x210)] public fixed byte m_flSFXSOffsetY[0x4];
        [FieldOffset(0x214)] public fixed byte m_flSFXSOffsetZ[0x4];
        [FieldOffset(0x218)] public fixed byte m_nDetailCombo[0x4];
        [FieldOffset(0x21C)] public fixed byte m_flSFXSDetailAmount[0x4];
        [FieldOffset(0x220)] public fixed byte m_flSFXSDetailScale[0x4];
        [FieldOffset(0x224)] public fixed byte m_flSFXSDetailScrollX[0x4];
        [FieldOffset(0x228)] public fixed byte m_flSFXSDetailScrollY[0x4];
        [FieldOffset(0x22C)] public fixed byte m_flSFXSDetailScrollZ[0x4];
        [FieldOffset(0x230)] public fixed byte m_flSFXSUseModelUVs[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x360)]
    public unsafe struct C_OP_RenderSound {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_flDurationScale[0x4];
        [FieldOffset(0x234)] public fixed byte m_flSndLvlScale[0x4];
        [FieldOffset(0x238)] public fixed byte m_flPitchScale[0x4];
        [FieldOffset(0x23C)] public fixed byte m_flVolumeScale[0x4];
        [FieldOffset(0x240)] public fixed byte m_nSndLvlField[0x4];
        [FieldOffset(0x244)] public fixed byte m_nDurationField[0x4];
        [FieldOffset(0x248)] public fixed byte m_nPitchField[0x4];
        [FieldOffset(0x24C)] public fixed byte m_nVolumeField[0x4];
        [FieldOffset(0x250)] public fixed byte m_nChannel[0x4];
        [FieldOffset(0x254)] public fixed byte m_nCPReference[0x4];
        [FieldOffset(0x258)] public fixed byte m_pszSoundName[0x100];
        [FieldOffset(0x358)] public fixed byte m_bSuppressStopSoundEvent[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CParticleVisibilityInputs {
        [FieldOffset(0x0)] public fixed byte m_flCameraBias[0x4];
        [FieldOffset(0x4)] public fixed byte m_nCPin[0x4];
        [FieldOffset(0x8)] public fixed byte m_flProxyRadius[0x4];
        [FieldOffset(0xC)] public fixed byte m_flInputMin[0x4];
        [FieldOffset(0x10)] public fixed byte m_flInputMax[0x4];
        [FieldOffset(0x14)] public fixed byte m_flInputPixelVisFade[0x4];
        [FieldOffset(0x18)] public fixed byte m_flNoPixelVisibilityFallback[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flDistanceInputMin[0x4];
        [FieldOffset(0x20)] public fixed byte m_flDistanceInputMax[0x4];
        [FieldOffset(0x24)] public fixed byte m_flDotInputMin[0x4];
        [FieldOffset(0x28)] public fixed byte m_flDotInputMax[0x4];
        [FieldOffset(0x2C)] public fixed byte m_bDotCPAngles[0x1];
        [FieldOffset(0x2D)] public fixed byte m_bDotCameraAngles[0x3];
        [FieldOffset(0x30)] public fixed byte m_flAlphaScaleMin[0x4];
        [FieldOffset(0x34)] public fixed byte m_flAlphaScaleMax[0x4];
        [FieldOffset(0x38)] public fixed byte m_flRadiusScaleMin[0x4];
        [FieldOffset(0x3C)] public fixed byte m_flRadiusScaleMax[0x4];
        [FieldOffset(0x40)] public fixed byte m_flRadiusScaleFOVBase[0x4];
        [FieldOffset(0x44)] public fixed byte m_bRightEye[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_SetControlPointsToParticle {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nChildGroupID[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nFirstControlPoint[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_nNumControlPoints[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nFirstSourcePoint[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_bReverse[0x1];
        [FieldOffset(0x1F1)] public fixed byte m_bSetOrientation[0x3];
        [FieldOffset(0x1F4)] public fixed byte m_nOrientationMode[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_nSetParent[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F0)]
    public unsafe struct C_OP_RemapCPVelocityToVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nControlPoint[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flScale[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_bNormalize[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x368)]
    public unsafe struct C_OP_PointVectorAtNextParticle {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldOutput[0x8];
        [FieldOffset(0x1E8)] public fixed byte m_flInterpolation[0x178];
        [FieldOffset(0x360)] public fixed byte m_bPrevious[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct ParticlePreviewBodyGroup_t {
        [FieldOffset(0x0)] public fixed byte m_bodyGroupName[0x8];
        [FieldOffset(0x8)] public fixed byte m_nValue[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x220)]
    public unsafe struct C_OP_OscillateScalarSimple {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_Rate[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_Frequency[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_nField[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flOscMult[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flOscAdd[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x248)]
    public unsafe struct C_INIT_StatusEffect {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nDetail2Combo[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flDetail2Rotation[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flDetail2Scale[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flDetail2BlendFactor[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_flColorWarpIntensity[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_flDiffuseWarpBlendToFull[0x4];
        [FieldOffset(0x200)] public fixed byte m_flEnvMapIntensity[0x4];
        [FieldOffset(0x204)] public fixed byte m_flAmbientScale[0x4];
        [FieldOffset(0x208)] public fixed byte m_specularColor[0x4];
        [FieldOffset(0x20C)] public fixed byte m_flSpecularScale[0x4];
        [FieldOffset(0x210)] public fixed byte m_flSpecularExponent[0x4];
        [FieldOffset(0x214)] public fixed byte m_flSpecularExponentBlendToFull[0x4];
        [FieldOffset(0x218)] public fixed byte m_flSpecularBlendToFull[0x4];
        [FieldOffset(0x21C)] public fixed byte m_rimLightColor[0x4];
        [FieldOffset(0x220)] public fixed byte m_flRimLightScale[0x4];
        [FieldOffset(0x224)] public fixed byte m_flReflectionsTintByBaseBlendToNone[0x4];
        [FieldOffset(0x228)] public fixed byte m_flMetalnessBlendToFull[0x4];
        [FieldOffset(0x22C)] public fixed byte m_flSelfIllumBlendToFull[0x1C];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x290)]
    public unsafe struct C_INIT_RtEnvCull {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_vecTestDir[0xC];
        [FieldOffset(0x1F4)] public fixed byte m_vecTestNormal[0xC];
        [FieldOffset(0x200)] public fixed byte m_bUseVelocity[0x1];
        [FieldOffset(0x201)] public fixed byte m_bCullOnMiss[0x1];
        [FieldOffset(0x202)] public fixed byte m_bLifeAdjust[0x1];
        [FieldOffset(0x203)] public fixed byte m_RtEnvName[0x81];
        [FieldOffset(0x284)] public fixed byte m_nRTEnvCP[0x4];
        [FieldOffset(0x288)] public fixed byte m_nComponent[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC18)]
    public unsafe struct C_OP_ConstrainDistance {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_fMinDistance[0x178];
        [FieldOffset(0x358)] public fixed byte m_fMaxDistance[0x178];
        [FieldOffset(0x4D0)] public fixed byte m_nControlPointNumber[0x68];
        [FieldOffset(0x538)] public fixed byte m_CenterOffset[0x6D8];
        [FieldOffset(0xC10)] public fixed byte m_bGlobalCenter[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_INIT_RandomVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_vecMin[0xC];
        [FieldOffset(0x1F4)] public fixed byte m_vecMax[0xC];
        [FieldOffset(0x200)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x204)] public fixed byte m_randomnessParameters[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1B60)]
    public unsafe struct C_INIT_InitialVelocityNoise {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_vecAbsVal[0xC];
        [FieldOffset(0x1F4)] public fixed byte m_vecAbsValInv[0xC];
        [FieldOffset(0x200)] public fixed byte m_vecOffsetLoc[0x6D8];
        [FieldOffset(0x8D8)] public fixed byte m_flOffset[0x178];
        [FieldOffset(0xA50)] public fixed byte m_vecOutputMin[0x6D8];
        [FieldOffset(0x1128)] public fixed byte m_vecOutputMax[0x6D8];
        [FieldOffset(0x1800)] public fixed byte m_flNoiseScale[0x178];
        [FieldOffset(0x1978)] public fixed byte m_flNoiseScaleLoc[0x178];
        [FieldOffset(0x1AF0)] public fixed byte m_TransformInput[0x68];
        [FieldOffset(0x1B58)] public fixed byte m_bIgnoreDt[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct ParticleChildrenInfo_t {
        [FieldOffset(0x0)] public fixed byte m_ChildRef[0x8];
        [FieldOffset(0x8)] public fixed byte m_flDelay[0x4];
        [FieldOffset(0xC)] public fixed byte m_bEndCap[0x1];
        [FieldOffset(0xD)] public fixed byte m_bDisableChild[0x3];
        [FieldOffset(0x10)] public fixed byte m_nDetailLevel[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_RemapScalarOnceTimed {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_bProportional[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nFieldInput[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flInputMin[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flInputMax[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flOutputMin[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_flOutputMax[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_flRemapTime[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_INIT_RandomNamedModelSequence {
        [FieldOffset(0x0)] public fixed byte pad_0[0x210];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8C8)]
    public unsafe struct C_OP_PlaneCull {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nPlaneControlPoint[0x8];
        [FieldOffset(0x1E8)] public fixed byte m_vecPlaneDirection[0x6D8];
        [FieldOffset(0x8C0)] public fixed byte m_bLocalSpace[0x4];
        [FieldOffset(0x8C4)] public fixed byte m_flPlaneOffset[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct C_INIT_VelocityRandom {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nControlPointNumber[0x8];
        [FieldOffset(0x1F0)] public fixed byte m_fSpeedMin[0x178];
        [FieldOffset(0x368)] public fixed byte m_fSpeedMax[0x178];
        [FieldOffset(0x4E0)] public fixed byte m_LocalCoordinateSystemSpeedMin[0x6D8];
        [FieldOffset(0xBB8)] public fixed byte m_LocalCoordinateSystemSpeedMax[0x6D8];
        [FieldOffset(0x1290)] public fixed byte m_bIgnoreDT[0x4];
        [FieldOffset(0x1294)] public fixed byte m_randomnessParameters[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x948)]
    public unsafe struct C_OP_ModelDampenMovement {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_bBoundBox[0x1];
        [FieldOffset(0x1E5)] public fixed byte m_bOutside[0x1];
        [FieldOffset(0x1E6)] public fixed byte m_bUseBones[0x1];
        [FieldOffset(0x1E7)] public fixed byte m_HitboxSetName[0x81];
        [FieldOffset(0x268)] public fixed byte m_vecPosOffset[0x6D8];
        [FieldOffset(0x940)] public fixed byte m_fDrag[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_TwistAroundAxis {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F0];
        [FieldOffset(0x1F0)] public fixed byte m_fForceAmount[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_TwistAxis[0xC];
        [FieldOffset(0x200)] public fixed byte m_bLocalSpace[0x4];
        [FieldOffset(0x204)] public fixed byte m_nControlPointNumber[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x218)]
    public unsafe struct C_OP_TeleportBeam {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nCPPosition[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nCPVelocity[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_nCPMisc[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nCPColor[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nCPInvalidColor[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_nCPExtraArcData[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_vGravity[0xC];
        [FieldOffset(0x204)] public fixed byte m_flArcMaxDuration[0x4];
        [FieldOffset(0x208)] public fixed byte m_flSegmentBreak[0x4];
        [FieldOffset(0x20C)] public fixed byte m_flArcSpeed[0x4];
        [FieldOffset(0x210)] public fixed byte m_flAlpha[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8D0)]
    public unsafe struct C_OP_RemapExternalWindToCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nCP[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nCPOutput[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_vecScale[0x6D8];
        [FieldOffset(0x8C8)] public fixed byte m_bSetMagnitude[0x4];
        [FieldOffset(0x8CC)] public fixed byte m_nOutVectorField[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2ED8)]
    public unsafe struct CBaseRendererSource2 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_flRadiusScale[0x178];
        [FieldOffset(0x3A8)] public fixed byte m_flAlphaScale[0x178];
        [FieldOffset(0x520)] public fixed byte m_flRollScale[0x178];
        [FieldOffset(0x698)] public fixed byte m_nAlpha2Field[0x8];
        [FieldOffset(0x6A0)] public fixed byte m_vecColorScale[0x6D8];
        [FieldOffset(0xD78)] public fixed byte m_nColorBlendType[0x4];
        [FieldOffset(0xD7C)] public fixed byte m_nShaderType[0x4];
        [FieldOffset(0xD80)] public fixed byte m_strShaderOverride[0x8];
        [FieldOffset(0xD88)] public fixed byte m_flCenterXOffset[0x178];
        [FieldOffset(0xF00)] public fixed byte m_flCenterYOffset[0x178];
        [FieldOffset(0x1078)] public fixed byte m_flBumpStrength[0x4];
        [FieldOffset(0x107C)] public fixed byte m_nCropTextureOverride[0x4];
        [FieldOffset(0x1080)] public fixed byte m_vecTexturesInput[0x10];
        [FieldOffset(0x1090)] public fixed byte m_flAnimationRate[0x4];
        [FieldOffset(0x1094)] public fixed byte m_nAnimationType[0x4];
        [FieldOffset(0x1098)] public fixed byte m_bAnimateInFPS[0x8];
        [FieldOffset(0x10A0)] public fixed byte m_flMotionVectorScaleU[0x178];
        [FieldOffset(0x1218)] public fixed byte m_flMotionVectorScaleV[0x178];
        [FieldOffset(0x1390)] public fixed byte m_flSelfIllumAmount[0x178];
        [FieldOffset(0x1508)] public fixed byte m_flDiffuseAmount[0x178];
        [FieldOffset(0x1680)] public fixed byte m_flDiffuseClamp[0x178];
        [FieldOffset(0x17F8)] public fixed byte m_nLightingControlPoint[0x4];
        [FieldOffset(0x17FC)] public fixed byte m_nOutputBlendMode[0x4];
        [FieldOffset(0x1800)] public fixed byte m_bGammaCorrectVertexColors[0x1];
        [FieldOffset(0x1801)] public fixed byte m_bSaturateColorPreAlphaBlend[0x7];
        [FieldOffset(0x1808)] public fixed byte m_flAddSelfAmount[0x178];
        [FieldOffset(0x1980)] public fixed byte m_flDesaturation[0x178];
        [FieldOffset(0x1AF8)] public fixed byte m_flOverbrightFactor[0x178];
        [FieldOffset(0x1C70)] public fixed byte m_nHSVShiftControlPoint[0x4];
        [FieldOffset(0x1C74)] public fixed byte m_nFogType[0x4];
        [FieldOffset(0x1C78)] public fixed byte m_flFogAmount[0x178];
        [FieldOffset(0x1DF0)] public fixed byte m_bTintByFOW[0x1];
        [FieldOffset(0x1DF1)] public fixed byte m_bTintByGlobalLight[0x3];
        [FieldOffset(0x1DF4)] public fixed byte m_nPerParticleAlphaReference[0x4];
        [FieldOffset(0x1DF8)] public fixed byte m_nPerParticleAlphaRefWindow[0x4];
        [FieldOffset(0x1DFC)] public fixed byte m_nAlphaReferenceType[0x4];
        [FieldOffset(0x1E00)] public fixed byte m_flAlphaReferenceSoftness[0x178];
        [FieldOffset(0x1F78)] public fixed byte m_flSourceAlphaValueToMapToZero[0x178];
        [FieldOffset(0x20F0)] public fixed byte m_flSourceAlphaValueToMapToOne[0x178];
        [FieldOffset(0x2268)] public fixed byte m_bRefract[0x1];
        [FieldOffset(0x2269)] public fixed byte m_bRefractSolid[0x1];
        [FieldOffset(0x226A)] public fixed byte m_bRefract2Passes[0x6];
        [FieldOffset(0x2270)] public fixed byte m_flRefractAmount[0x178];
        [FieldOffset(0x23E8)] public fixed byte m_nRefractBlurRadius[0x4];
        [FieldOffset(0x23EC)] public fixed byte m_nRefractBlurType[0x4];
        [FieldOffset(0x23F0)] public fixed byte m_bOnlyRenderInEffectsBloomPass[0x1];
        [FieldOffset(0x23F1)] public fixed byte m_bOnlyRenderInEffectsWaterPass[0x1];
        [FieldOffset(0x23F2)] public fixed byte m_bUseMixedResolutionRendering[0x1];
        [FieldOffset(0x23F3)] public fixed byte m_bOnlyRenderInEffecsGameOverlay[0x1];
        [FieldOffset(0x23F4)] public fixed byte m_stencilTestID[0x80];
        [FieldOffset(0x2474)] public fixed byte m_bStencilTestExclude[0x1];
        [FieldOffset(0x2475)] public fixed byte m_stencilWriteID[0x80];
        [FieldOffset(0x24F5)] public fixed byte m_bWriteStencilOnDepthPass[0x1];
        [FieldOffset(0x24F6)] public fixed byte m_bWriteStencilOnDepthFail[0x1];
        [FieldOffset(0x24F7)] public fixed byte m_bReverseZBuffering[0x1];
        [FieldOffset(0x24F8)] public fixed byte m_bDisableZBuffering[0x4];
        [FieldOffset(0x24FC)] public fixed byte m_nFeatheringMode[0x4];
        [FieldOffset(0x2500)] public fixed byte m_flFeatheringMinDist[0x178];
        [FieldOffset(0x2678)] public fixed byte m_flFeatheringMaxDist[0x178];
        [FieldOffset(0x27F0)] public fixed byte m_flFeatheringFilter[0x178];
        [FieldOffset(0x2968)] public fixed byte m_flFeatheringDepthMapFilter[0x178];
        [FieldOffset(0x2AE0)] public fixed byte m_flDepthBias[0x178];
        [FieldOffset(0x2C58)] public fixed byte m_nSortMethod[0x4];
        [FieldOffset(0x2C5C)] public fixed byte m_bBlendFramesSeq0[0x1];
        [FieldOffset(0x2C5D)] public fixed byte m_bMaxLuminanceBlendingSequence0[0x27B];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1E0)]
    public unsafe struct CSpinUpdateBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8C8)]
    public unsafe struct C_OP_OrientTo2dDirection {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_vecInput[0x6D8];
        [FieldOffset(0x8B8)] public fixed byte m_flRotOffset[0x4];
        [FieldOffset(0x8BC)] public fixed byte m_flSpinStrength[0x4];
        [FieldOffset(0x8C0)] public fixed byte m_nFieldOutput[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x7D8)]
    public unsafe struct C_OP_RemapDotProductToCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nInputCP1[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nInputCP2[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nOutputCP[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_nOutVectorField[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_flInputMin[0x178];
        [FieldOffset(0x370)] public fixed byte m_flInputMax[0x178];
        [FieldOffset(0x4E8)] public fixed byte m_flOutputMin[0x178];
        [FieldOffset(0x660)] public fixed byte m_flOutputMax[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x238)]
    public unsafe struct C_INIT_RemapParticleCountToNamedModelElementScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x218];
        [FieldOffset(0x218)] public fixed byte m_hModel[0x8];
        [FieldOffset(0x220)] public fixed byte m_outputMinName[0x8];
        [FieldOffset(0x228)] public fixed byte m_outputMaxName[0x8];
        [FieldOffset(0x230)] public fixed byte m_bModelFromRenderer[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4720)]
    public unsafe struct C_OP_RenderTrails {
        [FieldOffset(0x0)] public fixed byte pad_0[0x3358];
        [FieldOffset(0x3358)] public fixed byte m_bEnableFadingAndClamping[0x4];
        [FieldOffset(0x335C)] public fixed byte m_flStartFadeDot[0x4];
        [FieldOffset(0x3360)] public fixed byte m_flEndFadeDot[0x4];
        [FieldOffset(0x3364)] public fixed byte m_nPrevPntSource[0x4];
        [FieldOffset(0x3368)] public fixed byte m_flMaxLength[0x4];
        [FieldOffset(0x336C)] public fixed byte m_flMinLength[0x4];
        [FieldOffset(0x3370)] public fixed byte m_bIgnoreDT[0x4];
        [FieldOffset(0x3374)] public fixed byte m_flConstrainRadiusToLengthRatio[0x4];
        [FieldOffset(0x3378)] public fixed byte m_flLengthScale[0x4];
        [FieldOffset(0x337C)] public fixed byte m_flLengthFadeInTime[0x4];
        [FieldOffset(0x3380)] public fixed byte m_flRadiusHeadTaper[0x178];
        [FieldOffset(0x34F8)] public fixed byte m_vecHeadColorScale[0x6D8];
        [FieldOffset(0x3BD0)] public fixed byte m_flHeadAlphaScale[0x178];
        [FieldOffset(0x3D48)] public fixed byte m_flRadiusTaper[0x178];
        [FieldOffset(0x3EC0)] public fixed byte m_vecTailColorScale[0x6D8];
        [FieldOffset(0x4598)] public fixed byte m_flTailAlphaScale[0x178];
        [FieldOffset(0x4710)] public fixed byte m_nHorizCropField[0x4];
        [FieldOffset(0x4714)] public fixed byte m_nVertCropField[0x4];
        [FieldOffset(0x4718)] public fixed byte m_flForwardShift[0x4];
        [FieldOffset(0x471C)] public fixed byte m_bFlipUVBasedOnPitchYaw[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x280)]
    public unsafe struct C_OP_SetControlPointPositionToTimeOfDayValue {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_pszTimeOfDayParameter[0x80];
        [FieldOffset(0x26C)] public fixed byte m_vecDefaultValue[0x14];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x380)]
    public unsafe struct C_OP_DecayMaintainCount {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nParticlesToMaintain[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flDecayDelay[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_nSnapshotControlPoint[0x8];
        [FieldOffset(0x1F0)] public fixed byte m_strSnapshotSubset[0x8];
        [FieldOffset(0x1F8)] public fixed byte m_bLifespanDecay[0x8];
        [FieldOffset(0x200)] public fixed byte m_flScale[0x178];
        [FieldOffset(0x378)] public fixed byte m_bKillNewest[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x3F0)]
    public unsafe struct C_INIT_RandomModelSequence {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_ActivityName[0x100];
        [FieldOffset(0x2E8)] public fixed byte m_SequenceName[0x100];
        [FieldOffset(0x3E8)] public fixed byte m_hModel[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x370)]
    public unsafe struct C_OP_ExternalGameImpulseForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F0];
        [FieldOffset(0x1F0)] public fixed byte m_flForceScale[0x178];
        [FieldOffset(0x368)] public fixed byte m_bRopes[0x1];
        [FieldOffset(0x369)] public fixed byte m_bRopesZOnly[0x1];
        [FieldOffset(0x36A)] public fixed byte m_bExplosions[0x1];
        [FieldOffset(0x36B)] public fixed byte m_bParticles[0x5];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xF38)]
    public unsafe struct C_OP_RemapAverageHitboxSpeedtoCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nInControlPointNumber[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nOutControlPointNumber[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nField[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_nHitboxDataType[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_flInputMin[0x178];
        [FieldOffset(0x370)] public fixed byte m_flInputMax[0x178];
        [FieldOffset(0x4E8)] public fixed byte m_flOutputMin[0x178];
        [FieldOffset(0x660)] public fixed byte m_flOutputMax[0x178];
        [FieldOffset(0x7D8)] public fixed byte m_nHeightControlPointNumber[0x8];
        [FieldOffset(0x7E0)] public fixed byte m_vecComparisonVelocity[0x6D8];
        [FieldOffset(0xEB8)] public fixed byte m_HitboxSetName[0x80];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_INIT_RandomAlpha {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nAlphaMin[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nAlphaMax[0xC];
        [FieldOffset(0x1FC)] public fixed byte m_flAlphaRandExponent[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1E8)]
    public unsafe struct C_OP_NormalizeVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flScale[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1E8)]
    public unsafe struct C_OP_FadeInSimple {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flFadeInTime[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nFieldOutput[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x660)]
    public unsafe struct C_OP_RepeatedTriggerChildGroup {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nChildGroupID[0x8];
        [FieldOffset(0x1F0)] public fixed byte m_flClusterRefireTime[0x178];
        [FieldOffset(0x368)] public fixed byte m_flClusterSize[0x178];
        [FieldOffset(0x4E0)] public fixed byte m_flClusterCooldown[0x178];
        [FieldOffset(0x658)] public fixed byte m_bLimitChildCount[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F0)]
    public unsafe struct C_OP_RemapVelocityToVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flScale[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_bNormalize[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xAD0)]
    public unsafe struct C_INIT_SetHitboxToClosest {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nDesiredHitbox[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_vecHitBoxScale[0x6D8];
        [FieldOffset(0x8C8)] public fixed byte m_HitboxSetName[0x80];
        [FieldOffset(0x948)] public fixed byte m_bUseBones[0x1];
        [FieldOffset(0x949)] public fixed byte m_bUseClosestPointOnHitbox[0x3];
        [FieldOffset(0x94C)] public fixed byte m_nTestType[0x4];
        [FieldOffset(0x950)] public fixed byte m_flHybridRatio[0x178];
        [FieldOffset(0xAC8)] public fixed byte m_bUpdatePosition[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xE18)]
    public unsafe struct C_INIT_RingWave {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_TransformInput[0x68];
        [FieldOffset(0x250)] public fixed byte m_flParticlesPerOrbit[0x178];
        [FieldOffset(0x3C8)] public fixed byte m_flInitialRadius[0x178];
        [FieldOffset(0x540)] public fixed byte m_flThickness[0x178];
        [FieldOffset(0x6B8)] public fixed byte m_flInitialSpeedMin[0x178];
        [FieldOffset(0x830)] public fixed byte m_flInitialSpeedMax[0x178];
        [FieldOffset(0x9A8)] public fixed byte m_flRoll[0x178];
        [FieldOffset(0xB20)] public fixed byte m_flPitch[0x178];
        [FieldOffset(0xC98)] public fixed byte m_flYaw[0x178];
        [FieldOffset(0xE10)] public fixed byte m_bEvenDistribution[0x1];
        [FieldOffset(0xE11)] public fixed byte m_bXYVelocityOnly[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct C_INIT_RandomTrailLength {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_flMinLength[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flMaxLength[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flLengthRandExponent[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_RemapScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldInput[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flInputMin[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flInputMax[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flOutputMin[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flOutputMax[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_bOldCode[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x930)]
    public unsafe struct C_OP_DistanceBetweenTransforms {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldOutput[0x8];
        [FieldOffset(0x1E8)] public fixed byte m_TransformStart[0x68];
        [FieldOffset(0x250)] public fixed byte m_TransformEnd[0x68];
        [FieldOffset(0x2B8)] public fixed byte m_flInputMin[0x178];
        [FieldOffset(0x430)] public fixed byte m_flInputMax[0x178];
        [FieldOffset(0x5A8)] public fixed byte m_flOutputMin[0x178];
        [FieldOffset(0x720)] public fixed byte m_flOutputMax[0x178];
        [FieldOffset(0x898)] public fixed byte m_flMaxTraceLength[0x4];
        [FieldOffset(0x89C)] public fixed byte m_flLOSScale[0x4];
        [FieldOffset(0x8A0)] public fixed byte m_CollisionGroupName[0x80];
        [FieldOffset(0x920)] public fixed byte m_nTraceSet[0x4];
        [FieldOffset(0x924)] public fixed byte m_bLOS[0x4];
        [FieldOffset(0x928)] public fixed byte m_nSetMethod[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x358)]
    public unsafe struct C_OP_DecayOffscreen {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flOffscreenTime[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x240)]
    public unsafe struct C_INIT_CreateSequentialPath {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_fMaxDistance[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flNumToAssign[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_bLoop[0x1];
        [FieldOffset(0x1F1)] public fixed byte m_bCPPairs[0x1];
        [FieldOffset(0x1F2)] public fixed byte m_bSaveOffset[0xE];
        [FieldOffset(0x200)] public fixed byte m_PathParams[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x358)]
    public unsafe struct C_OP_EndCapTimedDecay {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flDecayTime[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct C_OP_RemapDistanceToLineSegmentBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nCP0[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nCP1[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flMinInputValue[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flMaxInputValue[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_bInfiniteLine[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x680)]
    public unsafe struct C_OP_ContinuousEmitter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_flEmissionDuration[0x178];
        [FieldOffset(0x360)] public fixed byte m_flStartTime[0x178];
        [FieldOffset(0x4D8)] public fixed byte m_flEmitRate[0x178];
        [FieldOffset(0x650)] public fixed byte m_flEmissionScale[0x4];
        [FieldOffset(0x654)] public fixed byte m_flScalePerParentParticle[0x4];
        [FieldOffset(0x658)] public fixed byte m_bInitFromKilledParentParticles[0x4];
        [FieldOffset(0x65C)] public fixed byte m_nEventType[0x4];
        [FieldOffset(0x660)] public fixed byte m_nSnapshotControlPoint[0x8];
        [FieldOffset(0x668)] public fixed byte m_strSnapshotSubset[0x8];
        [FieldOffset(0x670)] public fixed byte m_nLimitPerUpdate[0x4];
        [FieldOffset(0x674)] public fixed byte m_bForceEmitOnFirstUpdate[0x1];
        [FieldOffset(0x675)] public fixed byte m_bForceEmitOnLastUpdate[0xB];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_OscillateVectorSimple {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_Rate[0xC];
        [FieldOffset(0x1EC)] public fixed byte m_Frequency[0xC];
        [FieldOffset(0x1F8)] public fixed byte m_nField[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_flOscMult[0x4];
        [FieldOffset(0x200)] public fixed byte m_flOscAdd[0x4];
        [FieldOffset(0x204)] public fixed byte m_bOffset[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F0)]
    public unsafe struct C_INIT_SequenceLifeTime {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_flFramerate[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x948)]
    public unsafe struct C_INIT_MoveBetweenPoints {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_flSpeedMin[0x178];
        [FieldOffset(0x360)] public fixed byte m_flSpeedMax[0x178];
        [FieldOffset(0x4D8)] public fixed byte m_flEndSpread[0x178];
        [FieldOffset(0x650)] public fixed byte m_flStartOffset[0x178];
        [FieldOffset(0x7C8)] public fixed byte m_flEndOffset[0x178];
        [FieldOffset(0x940)] public fixed byte m_nEndControlPointNumber[0x4];
        [FieldOffset(0x944)] public fixed byte m_bTrailBias[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x238)]
    public unsafe struct C_INIT_StatusEffectTf {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_flSFXColorWarpAmount[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flSFXNormalAmount[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flSFXMetalnessAmount[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flSFXRoughnessAmount[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_flSFXSelfIllumAmount[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_flSFXSScale[0x4];
        [FieldOffset(0x200)] public fixed byte m_flSFXSScrollX[0x4];
        [FieldOffset(0x204)] public fixed byte m_flSFXSScrollY[0x4];
        [FieldOffset(0x208)] public fixed byte m_flSFXSScrollZ[0x4];
        [FieldOffset(0x20C)] public fixed byte m_flSFXSOffsetX[0x4];
        [FieldOffset(0x210)] public fixed byte m_flSFXSOffsetY[0x4];
        [FieldOffset(0x214)] public fixed byte m_flSFXSOffsetZ[0x4];
        [FieldOffset(0x218)] public fixed byte m_nDetailCombo[0x4];
        [FieldOffset(0x21C)] public fixed byte m_flSFXSDetailAmount[0x4];
        [FieldOffset(0x220)] public fixed byte m_flSFXSDetailScale[0x4];
        [FieldOffset(0x224)] public fixed byte m_flSFXSDetailScrollX[0x4];
        [FieldOffset(0x228)] public fixed byte m_flSFXSDetailScrollY[0x4];
        [FieldOffset(0x22C)] public fixed byte m_flSFXSDetailScrollZ[0x4];
        [FieldOffset(0x230)] public fixed byte m_flSFXSUseModelUVs[0x4];
        [FieldOffset(0x234)] public fixed byte m_flSFXEnvMapAmount[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x658)]
    public unsafe struct C_OP_SetUserEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flInput[0x178];
        [FieldOffset(0x358)] public fixed byte m_flRisingEdge[0x178];
        [FieldOffset(0x4D0)] public fixed byte m_nRisingEventType[0x8];
        [FieldOffset(0x4D8)] public fixed byte m_flFallingEdge[0x178];
        [FieldOffset(0x650)] public fixed byte m_nFallingEventType[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x380)]
    public unsafe struct C_OP_QuantizeFloat {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_InputValue[0x178];
        [FieldOffset(0x358)] public fixed byte m_nOutputField[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xEA8)]
    public unsafe struct C_OP_BasicMovement {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_Gravity[0x6D8];
        [FieldOffset(0x8B8)] public fixed byte m_fDrag[0x178];
        [FieldOffset(0xA30)] public fixed byte m_massControls[0x470];
        [FieldOffset(0xEA0)] public fixed byte m_nMaxConstraintPasses[0x4];
        [FieldOffset(0xEA4)] public fixed byte m_bUseNewCode[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_INIT_RandomNamedModelElement {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_hModel[0x8];
        [FieldOffset(0x1F0)] public fixed byte m_names[0x18];
        [FieldOffset(0x208)] public fixed byte m_bShuffle[0x1];
        [FieldOffset(0x209)] public fixed byte m_bLinear[0x1];
        [FieldOffset(0x20A)] public fixed byte m_bModelFromRenderer[0x2];
        [FieldOffset(0x20C)] public fixed byte m_nFieldOutput[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x270)]
    public unsafe struct C_INIT_InitFromParentKilled {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nAttributeToCopy[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nEventType[0x84];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_OP_Callback {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1E0)]
    public unsafe struct CParticleFunction {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_flOpStrength[0x178];
        [FieldOffset(0x180)] public fixed byte m_nOpEndCapState[0x4];
        [FieldOffset(0x184)] public fixed byte m_nToolsState[0x4];
        [FieldOffset(0x188)] public fixed byte m_flOpStartFadeInTime[0x4];
        [FieldOffset(0x18C)] public fixed byte m_flOpEndFadeInTime[0x4];
        [FieldOffset(0x190)] public fixed byte m_flOpStartFadeOutTime[0x4];
        [FieldOffset(0x194)] public fixed byte m_flOpEndFadeOutTime[0x4];
        [FieldOffset(0x198)] public fixed byte m_flOpFadeOscillatePeriod[0x4];
        [FieldOffset(0x19C)] public fixed byte m_bNormalizeToStopTime[0x4];
        [FieldOffset(0x1A0)] public fixed byte m_flOpTimeOffsetMin[0x4];
        [FieldOffset(0x1A4)] public fixed byte m_flOpTimeOffsetMax[0x4];
        [FieldOffset(0x1A8)] public fixed byte m_nOpTimeOffsetSeed[0x4];
        [FieldOffset(0x1AC)] public fixed byte m_nOpTimeScaleSeed[0x4];
        [FieldOffset(0x1B0)] public fixed byte m_flOpTimeScaleMin[0x4];
        [FieldOffset(0x1B4)] public fixed byte m_flOpTimeScaleMax[0x6];
        [FieldOffset(0x1BA)] public fixed byte m_bDisableOperator[0x6];
        [FieldOffset(0x1C0)] public fixed byte m_Notes[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1E8)]
    public unsafe struct C_OP_GlobalLight {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flScale[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_bClampLowerRange[0x1];
        [FieldOffset(0x1E5)] public fixed byte m_bClampUpperRange[0x3];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_INIT_OffsetVectorToVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nFieldInput[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_vecOutputMin[0xC];
        [FieldOffset(0x1FC)] public fixed byte m_vecOutputMax[0xC];
        [FieldOffset(0x208)] public fixed byte m_randomnessParameters[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_SetPerChildControlPointFromAttribute {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nChildGroupID[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nFirstControlPoint[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_nNumControlPoints[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nParticleIncrement[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nFirstSourcePoint[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_bNumBasedOnParticleCount[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_nAttributeToRead[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_nCPField[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_SetParentControlPointsToChildCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nChildGroupID[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nChildControlPoint[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nNumControlPoints[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_nFirstSourcePoint[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_bSetOrientation[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xF98)]
    public unsafe struct C_OP_BoxConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_vecMin[0x6D8];
        [FieldOffset(0x8B8)] public fixed byte m_vecMax[0x6D8];
        [FieldOffset(0xF90)] public fixed byte m_nCP[0x4];
        [FieldOffset(0xF94)] public fixed byte m_bLocalSpace[0x1];
        [FieldOffset(0xF95)] public fixed byte m_bAccountForRadius[0x3];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x218)]
    public unsafe struct C_INIT_CreatePhyllotaxis {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nScaleCP[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nComponent[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_fRadCentCore[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_fRadPerPoint[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_fRadPerPointTo[0x4];
        [FieldOffset(0x200)] public fixed byte m_fpointAngle[0x4];
        [FieldOffset(0x204)] public fixed byte m_fsizeOverall[0x4];
        [FieldOffset(0x208)] public fixed byte m_fRadBias[0x4];
        [FieldOffset(0x20C)] public fixed byte m_fMinRad[0x4];
        [FieldOffset(0x210)] public fixed byte m_fDistBias[0x4];
        [FieldOffset(0x214)] public fixed byte m_bUseLocalCoords[0x1];
        [FieldOffset(0x215)] public fixed byte m_bUseWithContEmit[0x1];
        [FieldOffset(0x216)] public fixed byte m_bUseOrigRadius[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6E0)]
    public unsafe struct C_OP_AttractToControlPoint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F0];
        [FieldOffset(0x1F0)] public fixed byte m_vecComponentScale[0x10];
        [FieldOffset(0x200)] public fixed byte m_fForceAmount[0x178];
        [FieldOffset(0x378)] public fixed byte m_fMinimumDistance[0x178];
        [FieldOffset(0x4F0)] public fixed byte m_fFalloffPower[0x8];
        [FieldOffset(0x4F8)] public fixed byte m_TransformInput[0x68];
        [FieldOffset(0x560)] public fixed byte m_fForceAmountMin[0x178];
        [FieldOffset(0x6D8)] public fixed byte m_bApplyMinForce[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct C_INIT_RandomLifeTime {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_fLifetimeMin[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_fLifetimeMax[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_fLifetimeRandExponent[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x238)]
    public unsafe struct C_INIT_RemapParticleCountToNamedModelSequenceScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x238];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct C_INIT_VelocityRadialRandom {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_bPerParticleCenter[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_vecPosition[0x6D8];
        [FieldOffset(0x8C8)] public fixed byte m_vecFwd[0x6D8];
        [FieldOffset(0xFA0)] public fixed byte m_fSpeedMin[0x178];
        [FieldOffset(0x1118)] public fixed byte m_fSpeedMax[0x178];
        [FieldOffset(0x1290)] public fixed byte m_vecLocalCoordinateSystemSpeedScale[0xD];
        [FieldOffset(0x129D)] public fixed byte m_bIgnoreDelta[0x3];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct C_INIT_RandomRadius {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_flRadiusMin[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flRadiusMax[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flRadiusRandExponent[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F0)]
    public unsafe struct C_OP_Orient2DRelToCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flRotOffset[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flSpinStrength[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_nCP[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nFieldOutput[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA68)]
    public unsafe struct TextureControls_t {
        [FieldOffset(0x0)] public fixed byte m_flFinalTextureScaleU[0x178];
        [FieldOffset(0x178)] public fixed byte m_flFinalTextureScaleV[0x178];
        [FieldOffset(0x2F0)] public fixed byte m_flFinalTextureOffsetU[0x178];
        [FieldOffset(0x468)] public fixed byte m_flFinalTextureOffsetV[0x178];
        [FieldOffset(0x5E0)] public fixed byte m_flFinalTextureUVRotation[0x178];
        [FieldOffset(0x758)] public fixed byte m_flZoomScale[0x178];
        [FieldOffset(0x8D0)] public fixed byte m_flDistortion[0x178];
        [FieldOffset(0xA48)] public fixed byte m_bRandomizeOffsets[0x1];
        [FieldOffset(0xA49)] public fixed byte m_bClampUVs[0x3];
        [FieldOffset(0xA4C)] public fixed byte m_nPerParticleBlend[0x4];
        [FieldOffset(0xA50)] public fixed byte m_nPerParticleScale[0x4];
        [FieldOffset(0xA54)] public fixed byte m_nPerParticleOffsetU[0x4];
        [FieldOffset(0xA58)] public fixed byte m_nPerParticleOffsetV[0x4];
        [FieldOffset(0xA5C)] public fixed byte m_nPerParticleRotation[0x4];
        [FieldOffset(0xA60)] public fixed byte m_nPerParticleZoom[0x4];
        [FieldOffset(0xA64)] public fixed byte m_nPerParticleDistortion[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct ControlPointReference_t {
        [FieldOffset(0x0)] public fixed byte m_controlPointNameString[0x4];
        [FieldOffset(0x4)] public fixed byte m_vOffsetFromControlPoint[0xC];
        [FieldOffset(0x10)] public fixed byte m_bOffsetInLocalSpace[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1120)]
    public unsafe struct C_OP_SetControlPointToVectorExpression {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nExpression[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nOutputCP[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_vInput1[0x6D8];
        [FieldOffset(0x8C8)] public fixed byte m_vInput2[0x6D8];
        [FieldOffset(0xFA0)] public fixed byte m_flLerp[0x178];
        [FieldOffset(0x1118)] public fixed byte m_bNormalizedOutput[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x16A0)]
    public unsafe struct C_OP_LightningSnapshotGenerator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nCPSnapshot[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nCPStartPnt[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nCPEndPnt[0x8];
        [FieldOffset(0x1F8)] public fixed byte m_flSegments[0x178];
        [FieldOffset(0x370)] public fixed byte m_flOffset[0x178];
        [FieldOffset(0x4E8)] public fixed byte m_flOffsetDecay[0x178];
        [FieldOffset(0x660)] public fixed byte m_flRecalcRate[0x178];
        [FieldOffset(0x7D8)] public fixed byte m_flUVScale[0x178];
        [FieldOffset(0x950)] public fixed byte m_flUVOffset[0x178];
        [FieldOffset(0xAC8)] public fixed byte m_flSplitRate[0x178];
        [FieldOffset(0xC40)] public fixed byte m_flRecursionSplitScale[0x178];
        [FieldOffset(0xDB8)] public fixed byte m_bScaleBranchDistance[0x8];
        [FieldOffset(0xDC0)] public fixed byte m_flBranchDistanceScale[0x178];
        [FieldOffset(0xF38)] public fixed byte m_bScaleBranchOffset[0x8];
        [FieldOffset(0xF40)] public fixed byte m_flBranchOffsetScale[0x178];
        [FieldOffset(0x10B8)] public fixed byte m_flBranchTwist[0x178];
        [FieldOffset(0x1230)] public fixed byte m_nBranchBehavior[0x8];
        [FieldOffset(0x1238)] public fixed byte m_flRadiusStart[0x178];
        [FieldOffset(0x13B0)] public fixed byte m_flRadiusEnd[0x178];
        [FieldOffset(0x1528)] public fixed byte m_flDedicatedPool[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x240)]
    public unsafe struct C_OP_RemapNamedModelMeshGroupOnceTimed {
        [FieldOffset(0x0)] public fixed byte pad_0[0x240];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x250)]
    public unsafe struct C_INIT_RemapQAnglesToRotation {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_TransformInput[0x68];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xFB8)]
    public unsafe struct C_INIT_PositionWarp {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_vecWarpMin[0x6D8];
        [FieldOffset(0x8C0)] public fixed byte m_vecWarpMax[0x6D8];
        [FieldOffset(0xF98)] public fixed byte m_nScaleControlPointNumber[0x4];
        [FieldOffset(0xF9C)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0xFA0)] public fixed byte m_nRadiusComponent[0x4];
        [FieldOffset(0xFA4)] public fixed byte m_flWarpTime[0x4];
        [FieldOffset(0xFA8)] public fixed byte m_flWarpStartTime[0x4];
        [FieldOffset(0xFAC)] public fixed byte m_flPrevPosScale[0x4];
        [FieldOffset(0xFB0)] public fixed byte m_bInvertWarp[0x1];
        [FieldOffset(0xFB1)] public fixed byte m_bUseCount[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x7D8)]
    public unsafe struct C_OP_SetControlPointFieldToScalarExpression {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nExpression[0x8];
        [FieldOffset(0x1F0)] public fixed byte m_flInput1[0x178];
        [FieldOffset(0x368)] public fixed byte m_flInput2[0x178];
        [FieldOffset(0x4E0)] public fixed byte m_flOutputRemap[0x178];
        [FieldOffset(0x658)] public fixed byte m_nOutputCP[0x4];
        [FieldOffset(0x65C)] public fixed byte m_nOutVectorField[0x4];
        [FieldOffset(0x660)] public fixed byte m_flInterpolation[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x930)]
    public unsafe struct C_OP_CreateParticleSystemRenderer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_hEffect[0x8];
        [FieldOffset(0x238)] public fixed byte m_nEventType[0x8];
        [FieldOffset(0x240)] public fixed byte m_vecCPs[0x10];
        [FieldOffset(0x250)] public fixed byte m_szParticleConfig[0x8];
        [FieldOffset(0x258)] public fixed byte m_AggregationPos[0x6D8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F0)]
    public unsafe struct CParticleFunctionForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct C_INIT_RandomVectorComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_flMin[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flMax[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_nComponent[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F0)]
    public unsafe struct C_OP_InheritFromParentParticles {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flScale[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_nIncrement[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_bRandomDistribution[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1190)]
    public unsafe struct C_INIT_SetVectorAttributeToVectorExpression {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nExpression[0x8];
        [FieldOffset(0x1F0)] public fixed byte m_vInput1[0x6D8];
        [FieldOffset(0x8C8)] public fixed byte m_vInput2[0x6D8];
        [FieldOffset(0xFA0)] public fixed byte m_flLerp[0x178];
        [FieldOffset(0x1118)] public fixed byte m_nOutputField[0x4];
        [FieldOffset(0x111C)] public fixed byte m_nSetMethod[0x4];
        [FieldOffset(0x1120)] public fixed byte m_bNormalizedOutput[0x70];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x278)]
    public unsafe struct C_OP_RemapTransformVisibilityToVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nSetMethod[0x8];
        [FieldOffset(0x1E8)] public fixed byte m_TransformInput[0x68];
        [FieldOffset(0x250)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x254)] public fixed byte m_flInputMin[0x4];
        [FieldOffset(0x258)] public fixed byte m_flInputMax[0x4];
        [FieldOffset(0x25C)] public fixed byte m_vecOutputMin[0xC];
        [FieldOffset(0x268)] public fixed byte m_vecOutputMax[0xC];
        [FieldOffset(0x274)] public fixed byte m_flRadius[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xF98)]
    public unsafe struct C_OP_DirectionBetweenVecsToVec {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldOutput[0x8];
        [FieldOffset(0x1E8)] public fixed byte m_vecPoint1[0x6D8];
        [FieldOffset(0x8C0)] public fixed byte m_vecPoint2[0x6D8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA40)]
    public unsafe struct C_OP_MovementLoopInsideSphere {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nCP[0x8];
        [FieldOffset(0x1E8)] public fixed byte m_flDistance[0x178];
        [FieldOffset(0x360)] public fixed byte m_vecScale[0x6D8];
        [FieldOffset(0xA38)] public fixed byte m_nDistSqrAttr[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x5B0)]
    public unsafe struct C_OP_RenderSimpleModelCollection {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_bCenterOffset[0x8];
        [FieldOffset(0x238)] public fixed byte m_hModel[0x8];
        [FieldOffset(0x240)] public fixed byte m_modelInput[0x60];
        [FieldOffset(0x2A0)] public fixed byte m_fSizeCullScale[0x178];
        [FieldOffset(0x418)] public fixed byte m_bDisableShadows[0x1];
        [FieldOffset(0x419)] public fixed byte m_bDisableMotionBlur[0x1];
        [FieldOffset(0x41A)] public fixed byte m_bAcceptsDecals[0x6];
        [FieldOffset(0x420)] public fixed byte m_fDrawFilter[0x178];
        [FieldOffset(0x598)] public fixed byte m_nAngularVelocityField[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E0)]
    public unsafe struct C_OP_QuantizeCPComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_flInputValue[0x178];
        [FieldOffset(0x360)] public fixed byte m_nCPOutput[0x4];
        [FieldOffset(0x364)] public fixed byte m_nOutVectorField[0x4];
        [FieldOffset(0x368)] public fixed byte m_flQuantizeValue[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F0)]
    public unsafe struct C_OP_PlayEndCapWhenFinished {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_bFireOnEmissionEnd[0x1];
        [FieldOffset(0x1E9)] public fixed byte m_bIncludeChildren[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x368)]
    public unsafe struct C_INIT_InitFloatCollection {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_InputValue[0x178];
        [FieldOffset(0x360)] public fixed byte m_nOutputField[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CPathParameters {
        [FieldOffset(0x0)] public fixed byte m_nStartControlPointNumber[0x4];
        [FieldOffset(0x4)] public fixed byte m_nMidControlPointNumber[0x4];
        [FieldOffset(0x8)] public fixed byte m_nEndControlPointNumber[0x4];
        [FieldOffset(0xC)] public fixed byte m_nBulgeControl[0x4];
        [FieldOffset(0x10)] public fixed byte m_flBulge[0x4];
        [FieldOffset(0x14)] public fixed byte m_flMidPoint[0x4];
        [FieldOffset(0x18)] public fixed byte m_vStartPointOffset[0xC];
        [FieldOffset(0x24)] public fixed byte m_vMidPointOffset[0xC];
        [FieldOffset(0x30)] public fixed byte m_vEndOffset[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct C_OP_RemapScalarEndCap {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldInput[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flInputMin[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flInputMax[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flOutputMin[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flOutputMax[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_INIT_CreateFromPlaneCache {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_vecOffsetMin[0xC];
        [FieldOffset(0x1F4)] public fixed byte m_vecOffsetMax[0xD];
        [FieldOffset(0x201)] public fixed byte m_bUseNormal[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x648)]
    public unsafe struct C_OP_LazyCullCompareFloat {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flComparsion1[0x178];
        [FieldOffset(0x358)] public fixed byte m_flComparsion2[0x178];
        [FieldOffset(0x4D0)] public fixed byte m_flCullTime[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_ControlPointToRadialScreenSpace {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nCPIn[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_vecCP1Pos[0xC];
        [FieldOffset(0x1F8)] public fixed byte m_nCPOut[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_nCPOutField[0x4];
        [FieldOffset(0x200)] public fixed byte m_nCPSSPosOut[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1E0)]
    public unsafe struct C_OP_SpinUpdate {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_INIT_NormalOffset {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_OffsetMin[0xC];
        [FieldOffset(0x1F4)] public fixed byte m_OffsetMax[0xC];
        [FieldOffset(0x200)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0x204)] public fixed byte m_bLocalCoords[0x1];
        [FieldOffset(0x205)] public fixed byte m_bNormalize[0x3];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x218)]
    public unsafe struct C_OP_RemapDistanceToLineSegmentToVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F8];
        [FieldOffset(0x1F8)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_vMinOutputValue[0xC];
        [FieldOffset(0x208)] public fixed byte m_vMaxOutputValue[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x268)]
    public unsafe struct C_OP_RenderAsModels {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_ModelList[0x1C];
        [FieldOffset(0x24C)] public fixed byte m_flModelScale[0x4];
        [FieldOffset(0x250)] public fixed byte m_bFitToModelSize[0x1];
        [FieldOffset(0x251)] public fixed byte m_bNonUniformScaling[0x3];
        [FieldOffset(0x254)] public fixed byte m_nXAxisScalingAttribute[0x4];
        [FieldOffset(0x258)] public fixed byte m_nYAxisScalingAttribute[0x4];
        [FieldOffset(0x25C)] public fixed byte m_nZAxisScalingAttribute[0x4];
        [FieldOffset(0x260)] public fixed byte m_nSizeCullBloat[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x218)]
    public unsafe struct C_INIT_CreationNoise {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_bAbsVal[0x1];
        [FieldOffset(0x1ED)] public fixed byte m_bAbsValInv[0x3];
        [FieldOffset(0x1F0)] public fixed byte m_flOffset[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flOutputMin[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_flOutputMax[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_flNoiseScale[0x4];
        [FieldOffset(0x200)] public fixed byte m_flNoiseScaleLoc[0x4];
        [FieldOffset(0x204)] public fixed byte m_vecOffsetLoc[0xC];
        [FieldOffset(0x210)] public fixed byte m_flWorldTimeScale[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct C_OP_Spin {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6A0)]
    public unsafe struct C_OP_GameLiquidSpill {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_flLiquidContentsField[0x178];
        [FieldOffset(0x3A8)] public fixed byte m_flExpirationTime[0x178];
        [FieldOffset(0x520)] public fixed byte m_flRadius[0x178];
        [FieldOffset(0x698)] public fixed byte m_bCheckExposedToSky[0x4];
        [FieldOffset(0x69C)] public fixed byte m_nAmountAttribute[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x668)]
    public unsafe struct C_OP_InstantaneousEmitter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nParticlesToEmit[0x178];
        [FieldOffset(0x360)] public fixed byte m_flStartTime[0x178];
        [FieldOffset(0x4D8)] public fixed byte m_flInitFromKilledParentParticles[0x4];
        [FieldOffset(0x4DC)] public fixed byte m_nEventType[0x4];
        [FieldOffset(0x4E0)] public fixed byte m_flParentParticleScale[0x178];
        [FieldOffset(0x658)] public fixed byte m_nMaxEmittedPerFrame[0x4];
        [FieldOffset(0x65C)] public fixed byte m_nSnapshotControlPoint[0x4];
        [FieldOffset(0x660)] public fixed byte m_strSnapshotSubset[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1E8)]
    public unsafe struct C_OP_ConstrainLineLength {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flMinDistance[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flMaxDistance[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2A0)]
    public unsafe struct C_INIT_LifespanFromVelocity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_vecComponentScale[0xC];
        [FieldOffset(0x1F4)] public fixed byte m_flTraceOffset[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_flMaxTraceLength[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_flTraceTolerance[0x4];
        [FieldOffset(0x200)] public fixed byte m_nMaxPlanes[0x8];
        [FieldOffset(0x208)] public fixed byte m_CollisionGroupName[0x80];
        [FieldOffset(0x288)] public fixed byte m_nTraceSet[0x10];
        [FieldOffset(0x298)] public fixed byte m_bIncludeWater[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x3358)]
    public unsafe struct CBaseTrailRenderer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x2ED8];
        [FieldOffset(0x2ED8)] public fixed byte m_nOrientationType[0x4];
        [FieldOffset(0x2EDC)] public fixed byte m_nOrientationControlPoint[0x4];
        [FieldOffset(0x2EE0)] public fixed byte m_flMinSize[0x4];
        [FieldOffset(0x2EE4)] public fixed byte m_flMaxSize[0x4];
        [FieldOffset(0x2EE8)] public fixed byte m_flStartFadeSize[0x178];
        [FieldOffset(0x3060)] public fixed byte m_flEndFadeSize[0x178];
        [FieldOffset(0x31D8)] public fixed byte m_flSubPixelAAScale[0x178];
        [FieldOffset(0x3350)] public fixed byte m_bClampV[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x930)]
    public unsafe struct C_INIT_VelocityFromCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_velocityInput[0x6D8];
        [FieldOffset(0x8C0)] public fixed byte m_transformInput[0x68];
        [FieldOffset(0x928)] public fixed byte m_flVelocityScale[0x4];
        [FieldOffset(0x92C)] public fixed byte m_bDirectionOnly[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x388)]
    public unsafe struct C_OP_SetControlPointOrientation {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_bUseWorldLocation[0x2];
        [FieldOffset(0x1EA)] public fixed byte m_bRandomize[0x1];
        [FieldOffset(0x1EB)] public fixed byte m_bSetOnce[0x1];
        [FieldOffset(0x1EC)] public fixed byte m_nCP[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nHeadLocation[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_vecRotation[0xC];
        [FieldOffset(0x200)] public fixed byte m_vecRotationB[0x10];
        [FieldOffset(0x210)] public fixed byte m_flInterpolation[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x950)]
    public unsafe struct C_OP_MovementSkinnedPositionFromCPSnapshot {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nSnapshotControlPointNumber[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_bRandom[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nRandomSeed[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_bSetNormal[0x1];
        [FieldOffset(0x1F1)] public fixed byte m_bSetRadius[0x3];
        [FieldOffset(0x1F4)] public fixed byte m_nIndexType[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_flReadIndex[0x178];
        [FieldOffset(0x370)] public fixed byte m_flIncrement[0x178];
        [FieldOffset(0x4E8)] public fixed byte m_nFullLoopIncrement[0x178];
        [FieldOffset(0x660)] public fixed byte m_nSnapShotStartPoint[0x178];
        [FieldOffset(0x7D8)] public fixed byte m_flInterpolation[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1A18)]
    public unsafe struct C_OP_MultiSegmentDisplaySnapshotGenerator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nCPSnapshot[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nSegCount[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nInputType[0x8];
        [FieldOffset(0x1F8)] public fixed byte m_strDefaultString[0x8];
        [FieldOffset(0x200)] public fixed byte m_flValue[0x178];
        [FieldOffset(0x378)] public fixed byte m_flScollOffset[0x178];
        [FieldOffset(0x4F0)] public fixed byte m_SpecialCharList[0x18];
        [FieldOffset(0x508)] public fixed byte m_vecColorUnlit[0x6D8];
        [FieldOffset(0xBE0)] public fixed byte m_vecColorLit[0x6D8];
        [FieldOffset(0x12B8)] public fixed byte m_flRadius[0x178];
        [FieldOffset(0x1430)] public fixed byte m_flSpacing[0x178];
        [FieldOffset(0x15A8)] public fixed byte m_flMinCount[0x178];
        [FieldOffset(0x1720)] public fixed byte m_flMaxCount[0x178];
        [FieldOffset(0x1898)] public fixed byte m_bPrependEmpty[0x8];
        [FieldOffset(0x18A0)] public fixed byte m_flDigitsAfterDecimal[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x690)]
    public unsafe struct C_OP_OscillateVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_RateMin[0xC];
        [FieldOffset(0x1EC)] public fixed byte m_RateMax[0xC];
        [FieldOffset(0x1F8)] public fixed byte m_FrequencyMin[0xC];
        [FieldOffset(0x204)] public fixed byte m_FrequencyMax[0xC];
        [FieldOffset(0x210)] public fixed byte m_nField[0x4];
        [FieldOffset(0x214)] public fixed byte m_bProportional[0x1];
        [FieldOffset(0x215)] public fixed byte m_bProportionalOp[0x1];
        [FieldOffset(0x216)] public fixed byte m_bOffset[0x2];
        [FieldOffset(0x218)] public fixed byte m_flStartTime_min[0x4];
        [FieldOffset(0x21C)] public fixed byte m_flStartTime_max[0x4];
        [FieldOffset(0x220)] public fixed byte m_flEndTime_min[0x4];
        [FieldOffset(0x224)] public fixed byte m_flEndTime_max[0x4];
        [FieldOffset(0x228)] public fixed byte m_flOscMult[0x178];
        [FieldOffset(0x3A0)] public fixed byte m_flOscAdd[0x178];
        [FieldOffset(0x518)] public fixed byte m_flRateScale[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xAD0)]
    public unsafe struct C_OP_PositionLock {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_TransformInput[0x68];
        [FieldOffset(0x248)] public fixed byte m_flStartTime_min[0x4];
        [FieldOffset(0x24C)] public fixed byte m_flStartTime_max[0x4];
        [FieldOffset(0x250)] public fixed byte m_flStartTime_exp[0x4];
        [FieldOffset(0x254)] public fixed byte m_flEndTime_min[0x4];
        [FieldOffset(0x258)] public fixed byte m_flEndTime_max[0x4];
        [FieldOffset(0x25C)] public fixed byte m_flEndTime_exp[0x4];
        [FieldOffset(0x260)] public fixed byte m_flRange[0x8];
        [FieldOffset(0x268)] public fixed byte m_flRangeBias[0x178];
        [FieldOffset(0x3E0)] public fixed byte m_flJumpThreshold[0x4];
        [FieldOffset(0x3E4)] public fixed byte m_flPrevPosScale[0x4];
        [FieldOffset(0x3E8)] public fixed byte m_bLockRot[0x8];
        [FieldOffset(0x3F0)] public fixed byte m_vecScale[0x6D8];
        [FieldOffset(0xAC8)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0xACC)] public fixed byte m_nFieldOutputPrev[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x3B8)]
    public unsafe struct C_OP_RenderVRHapticEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_nHand[0x4];
        [FieldOffset(0x234)] public fixed byte m_nOutputHandCP[0x4];
        [FieldOffset(0x238)] public fixed byte m_nOutputField[0x8];
        [FieldOffset(0x240)] public fixed byte m_flAmplitude[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x410)]
    public unsafe struct C_OP_SetControlPointToImpactPoint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nCPOut[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nCPIn[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flUpdateRate[0x8];
        [FieldOffset(0x1F8)] public fixed byte m_flTraceLength[0x178];
        [FieldOffset(0x370)] public fixed byte m_flStartOffset[0x4];
        [FieldOffset(0x374)] public fixed byte m_flOffset[0x4];
        [FieldOffset(0x378)] public fixed byte m_vecTraceDir[0xC];
        [FieldOffset(0x384)] public fixed byte m_CollisionGroupName[0x80];
        [FieldOffset(0x404)] public fixed byte m_nTraceSet[0x4];
        [FieldOffset(0x408)] public fixed byte m_bSetToEndpoint[0x1];
        [FieldOffset(0x409)] public fixed byte m_bTraceToClosestSurface[0x1];
        [FieldOffset(0x40A)] public fixed byte m_bIncludeWater[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_OP_InterpolateRadius {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flStartTime[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flEndTime[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flStartScale[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flEndScale[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_bEaseInAndOut[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flBias[0x3C];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F0)]
    public unsafe struct C_OP_ReinitializeScalarEndCap {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flOutputMin[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flOutputMax[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_OP_TurbulenceForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F0];
        [FieldOffset(0x1F0)] public fixed byte m_flNoiseCoordScale0[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flNoiseCoordScale1[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_flNoiseCoordScale2[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_flNoiseCoordScale3[0x4];
        [FieldOffset(0x200)] public fixed byte m_vecNoiseAmount0[0xC];
        [FieldOffset(0x20C)] public fixed byte m_vecNoiseAmount1[0xC];
        [FieldOffset(0x218)] public fixed byte m_vecNoiseAmount2[0xC];
        [FieldOffset(0x224)] public fixed byte m_vecNoiseAmount3[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x240)]
    public unsafe struct C_OP_RemapNamedModelElementOnceTimed {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_hModel[0x8];
        [FieldOffset(0x1E8)] public fixed byte m_inNames[0x18];
        [FieldOffset(0x200)] public fixed byte m_outNames[0x18];
        [FieldOffset(0x218)] public fixed byte m_fallbackNames[0x18];
        [FieldOffset(0x230)] public fixed byte m_bModelFromRenderer[0x1];
        [FieldOffset(0x231)] public fixed byte m_bProportional[0x3];
        [FieldOffset(0x234)] public fixed byte m_nFieldInput[0x4];
        [FieldOffset(0x238)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x23C)] public fixed byte m_flRemapTime[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_SetControlPointToPlayer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nCP1[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_vecCP1Pos[0xC];
        [FieldOffset(0x1F8)] public fixed byte m_bOrientToEyes[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_nPosition[0x4];
        [FieldOffset(0x200)] public fixed byte m_nRadiusCP[0x4];
        [FieldOffset(0x204)] public fixed byte m_nRadiusCPField[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x358)]
    public unsafe struct C_OP_EndCapTimedFreeze {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flFreezeTime[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6B8)]
    public unsafe struct C_OP_RenderGpuImplicit {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_bUsePerParticleRadius[0x4];
        [FieldOffset(0x234)] public fixed byte m_nVertexCountKb[0x4];
        [FieldOffset(0x238)] public fixed byte m_nIndexCountKb[0x8];
        [FieldOffset(0x240)] public fixed byte m_fGridSize[0x178];
        [FieldOffset(0x3B8)] public fixed byte m_fRadiusScale[0x178];
        [FieldOffset(0x530)] public fixed byte m_fIsosurfaceThreshold[0x178];
        [FieldOffset(0x6A8)] public fixed byte m_nScaleCP[0x8];
        [FieldOffset(0x6B0)] public fixed byte m_hMaterial[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x500)]
    public unsafe struct C_OP_SetRandomControlPointPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_bUseWorldLocation[0x1];
        [FieldOffset(0x1E9)] public fixed byte m_bOrient[0x3];
        [FieldOffset(0x1EC)] public fixed byte m_nCP1[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nHeadLocation[0x8];
        [FieldOffset(0x1F8)] public fixed byte m_flReRandomRate[0x178];
        [FieldOffset(0x370)] public fixed byte m_vecCPMinPos[0xC];
        [FieldOffset(0x37C)] public fixed byte m_vecCPMaxPos[0xC];
        [FieldOffset(0x388)] public fixed byte m_flInterpolation[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2290)]
    public unsafe struct C_OP_RenderVolumetricEmitter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_strChannelType[0x8];
        [FieldOffset(0x238)] public fixed byte m_nType[0x4];
        [FieldOffset(0x23C)] public fixed byte m_nCreationType[0x4];
        [FieldOffset(0x240)] public fixed byte m_nEventType[0x8];
        [FieldOffset(0x248)] public fixed byte m_vecPos[0x6D8];
        [FieldOffset(0x920)] public fixed byte m_vecVelocity[0x6D8];
        [FieldOffset(0xFF8)] public fixed byte m_vPrevPosition[0x6D8];
        [FieldOffset(0x16D0)] public fixed byte m_flSpeed[0x178];
        [FieldOffset(0x1848)] public fixed byte m_flRadius[0x178];
        [FieldOffset(0x19C0)] public fixed byte m_flDensity[0x178];
        [FieldOffset(0x1B38)] public fixed byte m_flTemperature[0x178];
        [FieldOffset(0x1CB0)] public fixed byte m_flMagnitude[0x178];
        [FieldOffset(0x1E28)] public fixed byte m_flKillRadius[0x178];
        [FieldOffset(0x1FA0)] public fixed byte m_flKillDensityScale[0x178];
        [FieldOffset(0x2118)] public fixed byte m_flFalloff[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x268)]
    public unsafe struct C_OP_RemapTransformVisibilityToScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nSetMethod[0x8];
        [FieldOffset(0x1E8)] public fixed byte m_TransformInput[0x68];
        [FieldOffset(0x250)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x254)] public fixed byte m_flInputMin[0x4];
        [FieldOffset(0x258)] public fixed byte m_flInputMax[0x4];
        [FieldOffset(0x25C)] public fixed byte m_flOutputMin[0x4];
        [FieldOffset(0x260)] public fixed byte m_flOutputMax[0x4];
        [FieldOffset(0x264)] public fixed byte m_flRadius[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F0)]
    public unsafe struct C_OP_RemapControlPointDirectionToVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flScale[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_nControlPointNumber[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA40)]
    public unsafe struct C_OP_ScreenSpacePositionOfTarget {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_vecTargetPosition[0x6D8];
        [FieldOffset(0x8B8)] public fixed byte m_bOututBehindness[0x4];
        [FieldOffset(0x8BC)] public fixed byte m_nBehindFieldOutput[0x4];
        [FieldOffset(0x8C0)] public fixed byte m_flBehindOutputRemap[0x178];
        [FieldOffset(0xA38)] public fixed byte m_nBehindSetMethod[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1E0)]
    public unsafe struct CParticleFunctionOperator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xBB8)]
    public unsafe struct C_OP_DragRelativeToPlane {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flDragAtPlane[0x178];
        [FieldOffset(0x358)] public fixed byte m_flFalloff[0x178];
        [FieldOffset(0x4D0)] public fixed byte m_bDirectional[0x8];
        [FieldOffset(0x4D8)] public fixed byte m_vecPlaneNormal[0x6D8];
        [FieldOffset(0xBB0)] public fixed byte m_nControlPointNumber[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1E8)]
    public unsafe struct C_OP_SetCPtoVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nCPInput[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nFieldOutput[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_INIT_RandomYaw {
        [FieldOffset(0x0)] public fixed byte pad_0[0x208];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1E8)]
    public unsafe struct C_OP_SnapshotRigidSkinToBones {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_bTransformNormals[0x1];
        [FieldOffset(0x1E1)] public fixed byte m_bTransformRadii[0x3];
        [FieldOffset(0x1E4)] public fixed byte m_nControlPointNumber[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x930)]
    public unsafe struct C_OP_SetSingleControlPointPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_bSetOnce[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nCP1[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_vecCP1Pos[0x6D8];
        [FieldOffset(0x8C8)] public fixed byte m_transformInput[0x68];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x668)]
    public unsafe struct C_INIT_DistanceToNeighborCull {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_flDistance[0x178];
        [FieldOffset(0x360)] public fixed byte m_bIncludeRadii[0x8];
        [FieldOffset(0x368)] public fixed byte m_flLifespanOverlap[0x178];
        [FieldOffset(0x4E0)] public fixed byte m_nFieldModify[0x8];
        [FieldOffset(0x4E8)] public fixed byte m_flModify[0x178];
        [FieldOffset(0x660)] public fixed byte m_nSetMethod[0x4];
        [FieldOffset(0x664)] public fixed byte m_bUseNeighbor[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_OP_RemapCPtoScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nCPInput[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_nField[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flInputMin[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flInputMax[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flOutputMin[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_flOutputMax[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_flStartTime[0x4];
        [FieldOffset(0x200)] public fixed byte m_flEndTime[0x4];
        [FieldOffset(0x204)] public fixed byte m_flInterpRate[0x4];
        [FieldOffset(0x208)] public fixed byte m_nSetMethod[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct CParticleFunctionRenderer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte VisibilityInputs[0x48];
        [FieldOffset(0x228)] public fixed byte m_bCannotBeRefracted[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x590)]
    public unsafe struct CParticleSystemDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_nBehaviorVersion[0x8];
        [FieldOffset(0x10)] public fixed byte m_PreEmissionOperators[0x18];
        [FieldOffset(0x28)] public fixed byte m_Emitters[0x18];
        [FieldOffset(0x40)] public fixed byte m_Initializers[0x18];
        [FieldOffset(0x58)] public fixed byte m_Operators[0x18];
        [FieldOffset(0x70)] public fixed byte m_ForceGenerators[0x18];
        [FieldOffset(0x88)] public fixed byte m_Constraints[0x18];
        [FieldOffset(0xA0)] public fixed byte m_Renderers[0x18];
        [FieldOffset(0xB8)] public fixed byte m_Children[0xC0];
        [FieldOffset(0x178)] public fixed byte m_nFirstMultipleOverride_BackwardCompat[0xE0];
        [FieldOffset(0x258)] public fixed byte m_nInitialParticles[0x4];
        [FieldOffset(0x25C)] public fixed byte m_nMaxParticles[0x4];
        [FieldOffset(0x260)] public fixed byte m_nGroupID[0x4];
        [FieldOffset(0x264)] public fixed byte m_BoundingBoxMin[0xC];
        [FieldOffset(0x270)] public fixed byte m_BoundingBoxMax[0xC];
        [FieldOffset(0x27C)] public fixed byte m_flDepthSortBias[0x4];
        [FieldOffset(0x280)] public fixed byte m_nSortOverridePositionCP[0x4];
        [FieldOffset(0x284)] public fixed byte m_bInfiniteBounds[0x1];
        [FieldOffset(0x285)] public fixed byte m_bEnableNamedValues[0x3];
        [FieldOffset(0x288)] public fixed byte m_NamedValueDomain[0x8];
        [FieldOffset(0x290)] public fixed byte m_NamedValueLocals[0x18];
        [FieldOffset(0x2A8)] public fixed byte m_ConstantColor[0x4];
        [FieldOffset(0x2AC)] public fixed byte m_ConstantNormal[0xC];
        [FieldOffset(0x2B8)] public fixed byte m_flConstantRadius[0x4];
        [FieldOffset(0x2BC)] public fixed byte m_flConstantRotation[0x4];
        [FieldOffset(0x2C0)] public fixed byte m_flConstantRotationSpeed[0x4];
        [FieldOffset(0x2C4)] public fixed byte m_flConstantLifespan[0x4];
        [FieldOffset(0x2C8)] public fixed byte m_nConstantSequenceNumber[0x4];
        [FieldOffset(0x2CC)] public fixed byte m_nConstantSequenceNumber1[0x4];
        [FieldOffset(0x2D0)] public fixed byte m_nSnapshotControlPoint[0x8];
        [FieldOffset(0x2D8)] public fixed byte m_hSnapshot[0x8];
        [FieldOffset(0x2E0)] public fixed byte m_pszCullReplacementName[0x8];
        [FieldOffset(0x2E8)] public fixed byte m_flCullRadius[0x4];
        [FieldOffset(0x2EC)] public fixed byte m_flCullFillCost[0x4];
        [FieldOffset(0x2F0)] public fixed byte m_nCullControlPoint[0x8];
        [FieldOffset(0x2F8)] public fixed byte m_hFallback[0x8];
        [FieldOffset(0x300)] public fixed byte m_nFallbackMaxCount[0x8];
        [FieldOffset(0x308)] public fixed byte m_hLowViolenceDef[0x8];
        [FieldOffset(0x310)] public fixed byte m_hReferenceReplacement[0x8];
        [FieldOffset(0x318)] public fixed byte m_flPreSimulationTime[0x4];
        [FieldOffset(0x31C)] public fixed byte m_flStopSimulationAfterTime[0x4];
        [FieldOffset(0x320)] public fixed byte m_flMaximumTimeStep[0x4];
        [FieldOffset(0x324)] public fixed byte m_flMaximumSimTime[0x4];
        [FieldOffset(0x328)] public fixed byte m_flMinimumSimTime[0x4];
        [FieldOffset(0x32C)] public fixed byte m_flMinimumTimeStep[0x4];
        [FieldOffset(0x330)] public fixed byte m_nMinimumFrames[0x4];
        [FieldOffset(0x334)] public fixed byte m_bIsGPUParticleSystem[0x4];
        [FieldOffset(0x338)] public fixed byte m_nMinCPULevel[0x4];
        [FieldOffset(0x33C)] public fixed byte m_nMinGPULevel[0x4];
        [FieldOffset(0x340)] public fixed byte m_flNoDrawTimeToGoToSleep[0x4];
        [FieldOffset(0x344)] public fixed byte m_flMaxDrawDistance[0x4];
        [FieldOffset(0x348)] public fixed byte m_flStartFadeDistance[0x4];
        [FieldOffset(0x34C)] public fixed byte m_flMaxCreationDistance[0x4];
        [FieldOffset(0x350)] public fixed byte m_nAggregationMinAvailableParticles[0x4];
        [FieldOffset(0x354)] public fixed byte m_flAggregateRadius[0x4];
        [FieldOffset(0x358)] public fixed byte m_bShouldBatch[0x1];
        [FieldOffset(0x359)] public fixed byte m_bShouldHitboxesFallbackToRenderBounds[0x1];
        [FieldOffset(0x35A)] public fixed byte m_bShouldHitboxesFallbackToSnapshot[0x1];
        [FieldOffset(0x35B)] public fixed byte m_bShouldHitboxesFallbackToCollisionHulls[0x1];
        [FieldOffset(0x35C)] public fixed byte m_nViewModelEffect[0x4];
        [FieldOffset(0x360)] public fixed byte m_bScreenSpaceEffect[0x8];
        [FieldOffset(0x368)] public fixed byte m_pszTargetLayerID[0x8];
        [FieldOffset(0x370)] public fixed byte m_nSkipRenderControlPoint[0x4];
        [FieldOffset(0x374)] public fixed byte m_nAllowRenderControlPoint[0x4];
        [FieldOffset(0x378)] public fixed byte m_bShouldSort[0x48];
        [FieldOffset(0x3C0)] public fixed byte m_controlPointConfigurations[0x1D0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x240)]
    public unsafe struct C_OP_RemapNamedModelMeshGroupEndCap {
        [FieldOffset(0x0)] public fixed byte pad_0[0x240];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2E0)]
    public unsafe struct C_OP_PercentageBetweenTransformsVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flInputMin[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flInputMax[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_vecOutputMin[0xC];
        [FieldOffset(0x1F8)] public fixed byte m_vecOutputMax[0x10];
        [FieldOffset(0x208)] public fixed byte m_TransformStart[0x68];
        [FieldOffset(0x270)] public fixed byte m_TransformEnd[0x68];
        [FieldOffset(0x2D8)] public fixed byte m_nSetMethod[0x4];
        [FieldOffset(0x2DC)] public fixed byte m_bActiveRange[0x1];
        [FieldOffset(0x2DD)] public fixed byte m_bRadialCheck[0x3];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x238)]
    public unsafe struct C_OP_RenderScreenVelocityRotate {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_flRotateRateDegrees[0x4];
        [FieldOffset(0x234)] public fixed byte m_flForwardDegrees[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct C_OP_UpdateLightSource {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_vColorTint[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flBrightnessScale[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flRadiusScale[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flMinimumLightingRadius[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flMaximumLightingRadius[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flPositionDampingConstant[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xFB0)]
    public unsafe struct C_INIT_CreateWithinBox {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_vecMin[0x6D8];
        [FieldOffset(0x8C0)] public fixed byte m_vecMax[0x6D8];
        [FieldOffset(0xF98)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0xF9C)] public fixed byte m_bLocalSpace[0x4];
        [FieldOffset(0xFA0)] public fixed byte m_randomnessParameters[0x8];
        [FieldOffset(0xFA8)] public fixed byte m_bUseNewCode[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x368)]
    public unsafe struct C_OP_ChooseRandomChildrenInGroup {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nChildGroupID[0x8];
        [FieldOffset(0x1F0)] public fixed byte m_flNumberOfChildren[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6F0)]
    public unsafe struct C_OP_ControlpointLight {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flScale[0x490];
        [FieldOffset(0x670)] public fixed byte m_nControlPoint1[0x4];
        [FieldOffset(0x674)] public fixed byte m_nControlPoint2[0x4];
        [FieldOffset(0x678)] public fixed byte m_nControlPoint3[0x4];
        [FieldOffset(0x67C)] public fixed byte m_nControlPoint4[0x4];
        [FieldOffset(0x680)] public fixed byte m_vecCPOffset1[0xC];
        [FieldOffset(0x68C)] public fixed byte m_vecCPOffset2[0xC];
        [FieldOffset(0x698)] public fixed byte m_vecCPOffset3[0xC];
        [FieldOffset(0x6A4)] public fixed byte m_vecCPOffset4[0xC];
        [FieldOffset(0x6B0)] public fixed byte m_LightFiftyDist1[0x4];
        [FieldOffset(0x6B4)] public fixed byte m_LightZeroDist1[0x4];
        [FieldOffset(0x6B8)] public fixed byte m_LightFiftyDist2[0x4];
        [FieldOffset(0x6BC)] public fixed byte m_LightZeroDist2[0x4];
        [FieldOffset(0x6C0)] public fixed byte m_LightFiftyDist3[0x4];
        [FieldOffset(0x6C4)] public fixed byte m_LightZeroDist3[0x4];
        [FieldOffset(0x6C8)] public fixed byte m_LightFiftyDist4[0x4];
        [FieldOffset(0x6CC)] public fixed byte m_LightZeroDist4[0x4];
        [FieldOffset(0x6D0)] public fixed byte m_LightColor1[0x4];
        [FieldOffset(0x6D4)] public fixed byte m_LightColor2[0x4];
        [FieldOffset(0x6D8)] public fixed byte m_LightColor3[0x4];
        [FieldOffset(0x6DC)] public fixed byte m_LightColor4[0x4];
        [FieldOffset(0x6E0)] public fixed byte m_bLightType1[0x1];
        [FieldOffset(0x6E1)] public fixed byte m_bLightType2[0x1];
        [FieldOffset(0x6E2)] public fixed byte m_bLightType3[0x1];
        [FieldOffset(0x6E3)] public fixed byte m_bLightType4[0x1];
        [FieldOffset(0x6E4)] public fixed byte m_bLightDynamic1[0x1];
        [FieldOffset(0x6E5)] public fixed byte m_bLightDynamic2[0x1];
        [FieldOffset(0x6E6)] public fixed byte m_bLightDynamic3[0x1];
        [FieldOffset(0x6E7)] public fixed byte m_bLightDynamic4[0x1];
        [FieldOffset(0x6E8)] public fixed byte m_bUseNormal[0x1];
        [FieldOffset(0x6E9)] public fixed byte m_bUseHLambert[0x5];
        [FieldOffset(0x6EE)] public fixed byte m_bClampLowerRange[0x1];
        [FieldOffset(0x6EF)] public fixed byte m_bClampUpperRange[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA50)]
    public unsafe struct C_OP_VectorFieldSnapshot {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nAttributeToWrite[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_nLocalSpaceCP[0x8];
        [FieldOffset(0x1F0)] public fixed byte m_flInterpolation[0x178];
        [FieldOffset(0x368)] public fixed byte m_vecScale[0x6D8];
        [FieldOffset(0xA40)] public fixed byte m_flBoundaryDampening[0x4];
        [FieldOffset(0xA44)] public fixed byte m_bSetVelocity[0x1];
        [FieldOffset(0xA45)] public fixed byte m_bLockToSurface[0x3];
        [FieldOffset(0xA48)] public fixed byte m_flGridSpacing[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8A0)]
    public unsafe struct C_OP_CylindricalDistanceToTransform {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldOutput[0x8];
        [FieldOffset(0x1E8)] public fixed byte m_flInputMin[0x178];
        [FieldOffset(0x360)] public fixed byte m_flInputMax[0x178];
        [FieldOffset(0x4D8)] public fixed byte m_flOutputMin[0x178];
        [FieldOffset(0x650)] public fixed byte m_flOutputMax[0x178];
        [FieldOffset(0x7C8)] public fixed byte m_TransformStart[0x68];
        [FieldOffset(0x830)] public fixed byte m_TransformEnd[0x68];
        [FieldOffset(0x898)] public fixed byte m_nSetMethod[0x4];
        [FieldOffset(0x89C)] public fixed byte m_bActiveRange[0x1];
        [FieldOffset(0x89D)] public fixed byte m_bAdditive[0x1];
        [FieldOffset(0x89E)] public fixed byte m_bCapsule[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC68)]
    public unsafe struct C_INIT_PositionPlaceOnGround {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_flOffset[0x178];
        [FieldOffset(0x360)] public fixed byte m_flMaxTraceLength[0x178];
        [FieldOffset(0x4D8)] public fixed byte m_vecTraceDir[0x6D8];
        [FieldOffset(0xBB0)] public fixed byte m_CollisionGroupName[0x80];
        [FieldOffset(0xC30)] public fixed byte m_nTraceSet[0x10];
        [FieldOffset(0xC40)] public fixed byte m_nTraceMissBehavior[0x4];
        [FieldOffset(0xC44)] public fixed byte m_bIncludeWater[0x4];
        [FieldOffset(0xC48)] public fixed byte m_nAttribute[0x4];
        [FieldOffset(0xC4C)] public fixed byte m_bSetPXYZOnly[0x1];
        [FieldOffset(0xC4D)] public fixed byte m_bSetNormal[0x3];
        [FieldOffset(0xC50)] public fixed byte m_nGroundNormalAttribute[0x4];
        [FieldOffset(0xC54)] public fixed byte m_bOffsetonColOnly[0x4];
        [FieldOffset(0xC58)] public fixed byte m_flOffsetByRadiusFactor[0x4];
        [FieldOffset(0xC5C)] public fixed byte m_nPreserveOffsetCP[0x4];
        [FieldOffset(0xC60)] public fixed byte m_nIgnoreCP[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct C_INIT_RandomScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_flMin[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flMax[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flExponent[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_nFieldOutput[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x3B8)]
    public unsafe struct C_OP_RenderPostProcessing {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_flPostProcessStrength[0x178];
        [FieldOffset(0x3A8)] public fixed byte m_hPostTexture[0x8];
        [FieldOffset(0x3B0)] public fixed byte m_nPriority[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA08)]
    public unsafe struct C_OP_WorldTraceConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nCP[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_vecCpOffset[0xC];
        [FieldOffset(0x1F0)] public fixed byte m_nCollisionMode[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_nCollisionModeMin[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_nTraceSet[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_CollisionGroupName[0x80];
        [FieldOffset(0x27C)] public fixed byte m_bWorldOnly[0x1];
        [FieldOffset(0x27D)] public fixed byte m_bBrushOnly[0x1];
        [FieldOffset(0x27E)] public fixed byte m_bIncludeWater[0x2];
        [FieldOffset(0x280)] public fixed byte m_nIgnoreCP[0x4];
        [FieldOffset(0x284)] public fixed byte m_flCpMovementTolerance[0x4];
        [FieldOffset(0x288)] public fixed byte m_flRetestRate[0x4];
        [FieldOffset(0x28C)] public fixed byte m_flTraceTolerance[0x4];
        [FieldOffset(0x290)] public fixed byte m_flCollisionConfirmationSpeed[0x4];
        [FieldOffset(0x294)] public fixed byte m_nMaxTracesPerFrame[0x4];
        [FieldOffset(0x298)] public fixed byte m_flRadiusScale[0x178];
        [FieldOffset(0x410)] public fixed byte m_flBounceAmount[0x178];
        [FieldOffset(0x588)] public fixed byte m_flSlideAmount[0x178];
        [FieldOffset(0x700)] public fixed byte m_flRandomDirScale[0x178];
        [FieldOffset(0x878)] public fixed byte m_bDecayBounce[0x1];
        [FieldOffset(0x879)] public fixed byte m_bKillonContact[0x3];
        [FieldOffset(0x87C)] public fixed byte m_flMinSpeed[0x4];
        [FieldOffset(0x880)] public fixed byte m_bKillonContactBounce[0x1];
        [FieldOffset(0x881)] public fixed byte m_bSetNormal[0x3];
        [FieldOffset(0x884)] public fixed byte m_nStickOnCollisionField[0x4];
        [FieldOffset(0x888)] public fixed byte m_flStopSpeed[0x178];
        [FieldOffset(0xA00)] public fixed byte m_nEntityStickDataField[0x4];
        [FieldOffset(0xA04)] public fixed byte m_nEntityStickNormalField[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6E0)]
    public unsafe struct C_OP_RenderBlobs {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_cubeWidth[0x178];
        [FieldOffset(0x3A8)] public fixed byte m_cutoffRadius[0x178];
        [FieldOffset(0x520)] public fixed byte m_renderRadius[0x178];
        [FieldOffset(0x698)] public fixed byte m_nVertexCountKb[0x4];
        [FieldOffset(0x69C)] public fixed byte m_nIndexCountKb[0x4];
        [FieldOffset(0x6A0)] public fixed byte m_nScaleCP[0x8];
        [FieldOffset(0x6A8)] public fixed byte m_MaterialVars[0x30];
        [FieldOffset(0x6D8)] public fixed byte m_hMaterial[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_OP_OscillateScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_RateMin[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_RateMax[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_FrequencyMin[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_FrequencyMax[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nField[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_bProportional[0x1];
        [FieldOffset(0x1F5)] public fixed byte m_bProportionalOp[0x3];
        [FieldOffset(0x1F8)] public fixed byte m_flStartTime_min[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_flStartTime_max[0x4];
        [FieldOffset(0x200)] public fixed byte m_flEndTime_min[0x4];
        [FieldOffset(0x204)] public fixed byte m_flEndTime_max[0x4];
        [FieldOffset(0x208)] public fixed byte m_flOscMult[0x4];
        [FieldOffset(0x20C)] public fixed byte m_flOscAdd[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_OP_FadeOut {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flFadeOutTimeMin[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flFadeOutTimeMax[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flFadeOutTimeExp[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flFadeBias[0x34];
        [FieldOffset(0x220)] public fixed byte m_bProportional[0x1];
        [FieldOffset(0x221)] public fixed byte m_bEaseInAndOut[0xF];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1068)]
    public unsafe struct C_OP_WaterImpulseRenderer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_vecPos[0x6D8];
        [FieldOffset(0x908)] public fixed byte m_flRadius[0x178];
        [FieldOffset(0xA80)] public fixed byte m_flMagnitude[0x178];
        [FieldOffset(0xBF8)] public fixed byte m_flShape[0x178];
        [FieldOffset(0xD70)] public fixed byte m_flWindSpeed[0x178];
        [FieldOffset(0xEE8)] public fixed byte m_flWobble[0x178];
        [FieldOffset(0x1060)] public fixed byte m_bIsRadialWind[0x4];
        [FieldOffset(0x1064)] public fixed byte m_nEventType[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_INIT_RandomSequence {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nSequenceMin[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nSequenceMax[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_bShuffle[0x1];
        [FieldOffset(0x1F1)] public fixed byte m_bLinear[0x7];
        [FieldOffset(0x1F8)] public fixed byte m_WeightedList[0x38];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x220)]
    public unsafe struct C_OP_RampScalarSplineSimple {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_Rate[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flStartTime[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flEndTime[0x28];
        [FieldOffset(0x210)] public fixed byte m_nField[0x4];
        [FieldOffset(0x214)] public fixed byte m_bEaseOut[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x370)]
    public unsafe struct C_INIT_DistanceCull {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nControlPoint[0x8];
        [FieldOffset(0x1F0)] public fixed byte m_flDistance[0x178];
        [FieldOffset(0x368)] public fixed byte m_bCullInside[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4D0)]
    public unsafe struct C_OP_CollideWithParentParticles {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flParentRadiusScale[0x178];
        [FieldOffset(0x358)] public fixed byte m_flRadiusScale[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8D0)]
    public unsafe struct C_INIT_InitFromVectorFieldSnapshot {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nLocalSpaceCP[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nWeightUpdateCP[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_bUseVerticalVelocity[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_vecScale[0x6D8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1180)]
    public unsafe struct C_OP_SetVectorAttributeToVectorExpression {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nExpression[0x8];
        [FieldOffset(0x1E8)] public fixed byte m_vInput1[0x6D8];
        [FieldOffset(0x8C0)] public fixed byte m_vInput2[0x6D8];
        [FieldOffset(0xF98)] public fixed byte m_flLerp[0x178];
        [FieldOffset(0x1110)] public fixed byte m_nOutputField[0x4];
        [FieldOffset(0x1114)] public fixed byte m_nSetMethod[0x4];
        [FieldOffset(0x1118)] public fixed byte m_bNormalizedOutput[0x68];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x220)]
    public unsafe struct C_INIT_AddVectorToVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_vecScale[0xC];
        [FieldOffset(0x1F4)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_nFieldInput[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_vOffsetMin[0xC];
        [FieldOffset(0x208)] public fixed byte m_vOffsetMax[0xC];
        [FieldOffset(0x214)] public fixed byte m_randomnessParameters[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_INIT_RemapInitialVisibilityScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1EC];
        [FieldOffset(0x1EC)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flInputMin[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flInputMax[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_flOutputMin[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_flOutputMax[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x258)]
    public unsafe struct C_OP_RemapTransformOrientationToYaw {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_TransformInput[0x68];
        [FieldOffset(0x248)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x24C)] public fixed byte m_flRotOffset[0x4];
        [FieldOffset(0x250)] public fixed byte m_flSpinStrength[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x268)]
    public unsafe struct C_OP_RenderStatusEffect {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_pTextureColorWarp[0x8];
        [FieldOffset(0x238)] public fixed byte m_pTextureDetail2[0x8];
        [FieldOffset(0x240)] public fixed byte m_pTextureDiffuseWarp[0x8];
        [FieldOffset(0x248)] public fixed byte m_pTextureFresnelColorWarp[0x8];
        [FieldOffset(0x250)] public fixed byte m_pTextureFresnelWarp[0x8];
        [FieldOffset(0x258)] public fixed byte m_pTextureSpecularWarp[0x8];
        [FieldOffset(0x260)] public fixed byte m_pTextureEnvMap[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_RandomForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F0];
        [FieldOffset(0x1F0)] public fixed byte m_MinForce[0xC];
        [FieldOffset(0x1FC)] public fixed byte m_MaxForce[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_RemapParticleCountOnScalarEndCap {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nInputMin[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_nInputMax[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flOutputMin[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flOutputMax[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_bBackwards[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_nSetMethod[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct ParticlePreviewState_t {
        [FieldOffset(0x0)] public fixed byte m_previewModel[0x8];
        [FieldOffset(0x8)] public fixed byte m_nModSpecificData[0x4];
        [FieldOffset(0xC)] public fixed byte m_groundType[0x4];
        [FieldOffset(0x10)] public fixed byte m_sequenceName[0x8];
        [FieldOffset(0x18)] public fixed byte m_nFireParticleOnSequenceFrame[0x8];
        [FieldOffset(0x20)] public fixed byte m_hitboxSetName[0x8];
        [FieldOffset(0x28)] public fixed byte m_materialGroupName[0x8];
        [FieldOffset(0x30)] public fixed byte m_vecBodyGroups[0x18];
        [FieldOffset(0x48)] public fixed byte m_flPlaybackSpeed[0x4];
        [FieldOffset(0x4C)] public fixed byte m_flParticleSimulationRate[0x4];
        [FieldOffset(0x50)] public fixed byte m_bShouldDrawHitboxes[0x1];
        [FieldOffset(0x51)] public fixed byte m_bShouldDrawAttachments[0x1];
        [FieldOffset(0x52)] public fixed byte m_bShouldDrawAttachmentNames[0x1];
        [FieldOffset(0x53)] public fixed byte m_bShouldDrawControlPointAxes[0x1];
        [FieldOffset(0x54)] public fixed byte m_bAnimationNonLooping[0x1];
        [FieldOffset(0x55)] public fixed byte m_bSequenceNameIsAnimClipPath[0x3];
        [FieldOffset(0x58)] public fixed byte m_vecPreviewGravity[0xC];
        [FieldOffset(0x64)] public fixed byte m_vecPreviewWind[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8D0)]
    public unsafe struct C_OP_LocalAccelerationForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F0];
        [FieldOffset(0x1F0)] public fixed byte m_nCP[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_nScaleCP[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_vecAccel[0x6D8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x268)]
    public unsafe struct C_OP_ModelCull {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_bBoundBox[0x1];
        [FieldOffset(0x1E5)] public fixed byte m_bCullOutside[0x1];
        [FieldOffset(0x1E6)] public fixed byte m_bUseBones[0x1];
        [FieldOffset(0x1E7)] public fixed byte m_HitboxSetName[0x81];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x510)]
    public unsafe struct C_OP_SetFloat {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_InputValue[0x178];
        [FieldOffset(0x358)] public fixed byte m_nOutputField[0x4];
        [FieldOffset(0x35C)] public fixed byte m_nSetMethod[0x4];
        [FieldOffset(0x360)] public fixed byte m_Lerp[0x1B0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x308)]
    public unsafe struct C_INIT_RemapTransformToVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_vInputMin[0xC];
        [FieldOffset(0x1F8)] public fixed byte m_vInputMax[0xC];
        [FieldOffset(0x204)] public fixed byte m_vOutputMin[0xC];
        [FieldOffset(0x210)] public fixed byte m_vOutputMax[0x10];
        [FieldOffset(0x220)] public fixed byte m_TransformInput[0x68];
        [FieldOffset(0x288)] public fixed byte m_LocalSpaceTransform[0x68];
        [FieldOffset(0x2F0)] public fixed byte m_flStartTime[0x4];
        [FieldOffset(0x2F4)] public fixed byte m_flEndTime[0x4];
        [FieldOffset(0x2F8)] public fixed byte m_nSetMethod[0x4];
        [FieldOffset(0x2FC)] public fixed byte m_bOffset[0x1];
        [FieldOffset(0x2FD)] public fixed byte m_bAccelerate[0x3];
        [FieldOffset(0x300)] public fixed byte m_flRemapBias[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x500)]
    public unsafe struct C_OP_ScreenSpaceDistanceToEdge {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldOutput[0x8];
        [FieldOffset(0x1E8)] public fixed byte m_flMaxDistFromEdge[0x178];
        [FieldOffset(0x360)] public fixed byte m_flOutputRemap[0x178];
        [FieldOffset(0x4D8)] public fixed byte m_nSetMethod[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x268)]
    public unsafe struct C_OP_RenderStatusEffectTf {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_pTextureColorWarp[0x8];
        [FieldOffset(0x238)] public fixed byte m_pTextureNormal[0x8];
        [FieldOffset(0x240)] public fixed byte m_pTextureMetalness[0x8];
        [FieldOffset(0x248)] public fixed byte m_pTextureRoughness[0x8];
        [FieldOffset(0x250)] public fixed byte m_pTextureSelfIllum[0x8];
        [FieldOffset(0x258)] public fixed byte m_pTextureDetail[0x8];
        [FieldOffset(0x260)] public fixed byte m_pTextureEnvMap[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_RemapDistanceToLineSegmentToScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F8];
        [FieldOffset(0x1F8)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_flMinOutputValue[0x4];
        [FieldOffset(0x200)] public fixed byte m_flMaxOutputValue[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F0)]
    public unsafe struct C_OP_RemapVectortoCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nOutControlPointNumber[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nFieldInput[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_nParticleNumber[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x678)]
    public unsafe struct C_OP_SetFromCPSnapshot {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nControlPointNumber[0x8];
        [FieldOffset(0x1E8)] public fixed byte m_strSnapshotSubset[0x8];
        [FieldOffset(0x1F0)] public fixed byte m_nAttributeToRead[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_nAttributeToWrite[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_nLocalSpaceCP[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_bRandom[0x1];
        [FieldOffset(0x1FD)] public fixed byte m_bReverse[0x3];
        [FieldOffset(0x200)] public fixed byte m_nRandomSeed[0x8];
        [FieldOffset(0x208)] public fixed byte m_nSnapShotStartPoint[0x178];
        [FieldOffset(0x380)] public fixed byte m_nSnapShotIncrement[0x178];
        [FieldOffset(0x4F8)] public fixed byte m_flInterpolation[0x178];
        [FieldOffset(0x670)] public fixed byte m_bSubSample[0x1];
        [FieldOffset(0x671)] public fixed byte m_bPrev[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2A0)]
    public unsafe struct C_OP_DistanceBetweenCPsToCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nStartCP[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nEndCP[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nOutputCP[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_nOutputCPField[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_bSetOnce[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_flInputMin[0x4];
        [FieldOffset(0x200)] public fixed byte m_flInputMax[0x4];
        [FieldOffset(0x204)] public fixed byte m_flOutputMin[0x4];
        [FieldOffset(0x208)] public fixed byte m_flOutputMax[0x4];
        [FieldOffset(0x20C)] public fixed byte m_flMaxTraceLength[0x4];
        [FieldOffset(0x210)] public fixed byte m_flLOSScale[0x4];
        [FieldOffset(0x214)] public fixed byte m_bLOS[0x1];
        [FieldOffset(0x215)] public fixed byte m_CollisionGroupName[0x83];
        [FieldOffset(0x298)] public fixed byte m_nTraceSet[0x4];
        [FieldOffset(0x29C)] public fixed byte m_nSetParent[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_SetControlPointToHand {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nCP1[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nHand[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_vecCP1Pos[0xC];
        [FieldOffset(0x1FC)] public fixed byte m_bOrientToHand[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x240)]
    public unsafe struct C_OP_ConstrainDistanceToPath {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_fMinDistance[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flMaxDistance0[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flMaxDistanceMid[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flMaxDistance1[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_PathParameters[0x40];
        [FieldOffset(0x230)] public fixed byte m_flTravelTime[0x4];
        [FieldOffset(0x234)] public fixed byte m_nFieldScale[0x4];
        [FieldOffset(0x238)] public fixed byte m_nManualTField[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x370)]
    public unsafe struct C_OP_DistanceCull {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nControlPoint[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_vecPointOffset[0xC];
        [FieldOffset(0x1F0)] public fixed byte m_flDistance[0x178];
        [FieldOffset(0x368)] public fixed byte m_bCullInside[0x4];
        [FieldOffset(0x36C)] public fixed byte m_nAttribute[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x540)]
    public unsafe struct C_INIT_CreateAlongPath {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_fMaxDistance[0x178];
        [FieldOffset(0x360)] public fixed byte m_fT[0x180];
        [FieldOffset(0x4E0)] public fixed byte m_PathParams[0x40];
        [FieldOffset(0x520)] public fixed byte m_bUseRandomCPs[0x4];
        [FieldOffset(0x524)] public fixed byte m_vEndOffset[0xC];
        [FieldOffset(0x530)] public fixed byte m_bSaveOffset[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1CC0)]
    public unsafe struct C_OP_GameDecalRenderer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_sDecalGroupName[0x8];
        [FieldOffset(0x238)] public fixed byte m_nEventType[0x8];
        [FieldOffset(0x240)] public fixed byte m_nInteractionMask[0x8];
        [FieldOffset(0x248)] public fixed byte m_nCollisionGroup[0x8];
        [FieldOffset(0x250)] public fixed byte m_vecStartPos[0x6D8];
        [FieldOffset(0x928)] public fixed byte m_vecEndPos[0x6D8];
        [FieldOffset(0x1000)] public fixed byte m_flTraceBloat[0x178];
        [FieldOffset(0x1178)] public fixed byte m_flDecalSize[0x178];
        [FieldOffset(0x12F0)] public fixed byte m_nDecalGroupIndex[0x178];
        [FieldOffset(0x1468)] public fixed byte m_flDecalRotation[0x178];
        [FieldOffset(0x15E0)] public fixed byte m_vModulationColor[0x6D8];
        [FieldOffset(0x1CB8)] public fixed byte m_bUseGameDefaultDecalSize[0x1];
        [FieldOffset(0x1CB9)] public fixed byte m_bRandomDecalRotation[0x1];
        [FieldOffset(0x1CBA)] public fixed byte m_bRandomlySelectDecalInGroup[0x1];
        [FieldOffset(0x1CBB)] public fixed byte m_bNoDecalsOnOwner[0x1];
        [FieldOffset(0x1CBC)] public fixed byte m_bVisualizeTraces[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2F0)]
    public unsafe struct C_OP_SetControlPointsToModelParticles {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_HitboxSetName[0x80];
        [FieldOffset(0x260)] public fixed byte m_AttachmentName[0x80];
        [FieldOffset(0x2E0)] public fixed byte m_nFirstControlPoint[0x4];
        [FieldOffset(0x2E4)] public fixed byte m_nNumControlPoints[0x4];
        [FieldOffset(0x2E8)] public fixed byte m_nFirstSourcePoint[0x4];
        [FieldOffset(0x2EC)] public fixed byte m_bSkin[0x1];
        [FieldOffset(0x2ED)] public fixed byte m_bAttachment[0x3];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x220)]
    public unsafe struct C_OP_ColorInterpolateRandom {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_ColorFadeMin[0x1C];
        [FieldOffset(0x1FC)] public fixed byte m_ColorFadeMax[0x10];
        [FieldOffset(0x20C)] public fixed byte m_flFadeStartTime[0x4];
        [FieldOffset(0x210)] public fixed byte m_flFadeEndTime[0x4];
        [FieldOffset(0x214)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x218)] public fixed byte m_bEaseInOut[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_INIT_RemapNamedModelSequenceToScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x258)]
    public unsafe struct C_OP_RenderLights {
        [FieldOffset(0x0)] public fixed byte pad_0[0x238];
        [FieldOffset(0x238)] public fixed byte m_flAnimationRate[0x4];
        [FieldOffset(0x23C)] public fixed byte m_nAnimationType[0x4];
        [FieldOffset(0x240)] public fixed byte m_bAnimateInFPS[0x4];
        [FieldOffset(0x244)] public fixed byte m_flMinSize[0x4];
        [FieldOffset(0x248)] public fixed byte m_flMaxSize[0x4];
        [FieldOffset(0x24C)] public fixed byte m_flStartFadeSize[0x4];
        [FieldOffset(0x250)] public fixed byte m_flEndFadeSize[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x358)]
    public unsafe struct C_OP_DecayClampCount {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nCount[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CRandomNumberGeneratorParameters {
        [FieldOffset(0x0)] public fixed byte m_bDistributeEvenly[0x4];
        [FieldOffset(0x4)] public fixed byte m_nSeed[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x220)]
    public unsafe struct C_INIT_ColorLitPerParticle {
        [FieldOffset(0x0)] public fixed byte pad_0[0x200];
        [FieldOffset(0x200)] public fixed byte m_ColorMin[0x4];
        [FieldOffset(0x204)] public fixed byte m_ColorMax[0x4];
        [FieldOffset(0x208)] public fixed byte m_TintMin[0x4];
        [FieldOffset(0x20C)] public fixed byte m_TintMax[0x4];
        [FieldOffset(0x210)] public fixed byte m_flTintPerc[0x4];
        [FieldOffset(0x214)] public fixed byte m_nTintBlendMode[0x4];
        [FieldOffset(0x218)] public fixed byte m_flLightAmplification[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x238)]
    public unsafe struct C_OP_RenderPoints {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_hMaterial[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x680)]
    public unsafe struct C_INIT_SetAttributeToScalarExpression {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nExpression[0x8];
        [FieldOffset(0x1F0)] public fixed byte m_flInput1[0x178];
        [FieldOffset(0x368)] public fixed byte m_flInput2[0x178];
        [FieldOffset(0x4E0)] public fixed byte m_flOutputRemap[0x178];
        [FieldOffset(0x658)] public fixed byte m_nOutputField[0x4];
        [FieldOffset(0x65C)] public fixed byte m_nSetMethod[0x24];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xAC0)]
    public unsafe struct C_INIT_CreateOnGrid {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nXCount[0x178];
        [FieldOffset(0x360)] public fixed byte m_nYCount[0x178];
        [FieldOffset(0x4D8)] public fixed byte m_nZCount[0x178];
        [FieldOffset(0x650)] public fixed byte m_nXSpacing[0x178];
        [FieldOffset(0x7C8)] public fixed byte m_nYSpacing[0x178];
        [FieldOffset(0x940)] public fixed byte m_nZSpacing[0x178];
        [FieldOffset(0xAB8)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0xABC)] public fixed byte m_bLocalSpace[0x1];
        [FieldOffset(0xABD)] public fixed byte m_bCenter[0x1];
        [FieldOffset(0xABE)] public fixed byte m_bHollow[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_RampCPLinearRandom {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nOutControlPointNumber[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_vecRateMin[0xC];
        [FieldOffset(0x1F8)] public fixed byte m_vecRateMax[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct C_OP_VelocityMatchingForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flDirScale[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flSpdScale[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flNeighborDistance[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flFacingStrength[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_bUseAABB[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_nCPBroadcast[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct C_INIT_RandomAlphaWindowThreshold {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_flMin[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flMax[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flExponent[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1498)]
    public unsafe struct C_INIT_CreateOnModelAtHeight {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_bUseBones[0x1];
        [FieldOffset(0x1E9)] public fixed byte m_bForceZ[0x3];
        [FieldOffset(0x1EC)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nHeightCP[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_bUseWaterHeight[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_flDesiredHeight[0x178];
        [FieldOffset(0x370)] public fixed byte m_vecHitBoxScale[0x6D8];
        [FieldOffset(0xA48)] public fixed byte m_vecDirectionBias[0x6D8];
        [FieldOffset(0x1120)] public fixed byte m_nBiasType[0x4];
        [FieldOffset(0x1124)] public fixed byte m_bLocalCoords[0x1];
        [FieldOffset(0x1125)] public fixed byte m_bPreferMovingBoxes[0x1];
        [FieldOffset(0x1126)] public fixed byte m_HitboxSetName[0x82];
        [FieldOffset(0x11A8)] public fixed byte m_flHitboxVelocityScale[0x178];
        [FieldOffset(0x1320)] public fixed byte m_flMaxBoneVelocity[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x838)]
    public unsafe struct C_OP_ModelSurfaceSnapshotGenerator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nCPSnapshot[0x8];
        [FieldOffset(0x1F0)] public fixed byte m_modelInput[0x60];
        [FieldOffset(0x250)] public fixed byte m_flRecalcRate[0x178];
        [FieldOffset(0x3C8)] public fixed byte m_flUSpacing[0x178];
        [FieldOffset(0x540)] public fixed byte m_flVSpacing[0x178];
        [FieldOffset(0x6B8)] public fixed byte m_flSurfaceOffset[0x178];
        [FieldOffset(0x830)] public fixed byte m_bSetNormal[0x1];
        [FieldOffset(0x831)] public fixed byte m_bSetUp[0x1];
        [FieldOffset(0x832)] public fixed byte m_bSetGravity[0x1];
        [FieldOffset(0x833)] public fixed byte m_bSetUV[0x5];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct C_OP_RestartAfterDuration {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flDurationMin[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flDurationMax[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_nCP[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nCPField[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nChildGroupID[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_bOnlyChildren[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_OP_RenderClothForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_RemapVisibilityScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldInput[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flInputMin[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flInputMax[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flOutputMin[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flOutputMax[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_flRadiusScale[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x530)]
    public unsafe struct C_INIT_CreateSequentialPathV2 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_fMaxDistance[0x178];
        [FieldOffset(0x360)] public fixed byte m_flNumToAssign[0x178];
        [FieldOffset(0x4D8)] public fixed byte m_bLoop[0x1];
        [FieldOffset(0x4D9)] public fixed byte m_bCPPairs[0x1];
        [FieldOffset(0x4DA)] public fixed byte m_bSaveOffset[0x6];
        [FieldOffset(0x4E0)] public fixed byte m_PathParams[0x50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6E0)]
    public unsafe struct VecInputMaterialVariable_t {
        [FieldOffset(0x0)] public fixed byte m_strVariable[0x8];
        [FieldOffset(0x8)] public fixed byte m_vecInput[0x6D8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x270)]
    public unsafe struct C_INIT_RemapInitialDirectionToTransformToVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_TransformInput[0x68];
        [FieldOffset(0x250)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x254)] public fixed byte m_flScale[0x4];
        [FieldOffset(0x258)] public fixed byte m_flOffsetRot[0x4];
        [FieldOffset(0x25C)] public fixed byte m_vecOffsetAxis[0xC];
        [FieldOffset(0x268)] public fixed byte m_bNormalize[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_OP_LockToSavedSequentialPathV2 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flFadeStart[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flFadeEnd[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_bCPPairs[0x8];
        [FieldOffset(0x1F0)] public fixed byte m_PathParams[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1E8)]
    public unsafe struct C_OP_NormalLock {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nControlPointNumber[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x260)]
    public unsafe struct C_INIT_RemapTransformOrientationToRotations {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_TransformInput[0x68];
        [FieldOffset(0x250)] public fixed byte m_vecRotation[0xC];
        [FieldOffset(0x25C)] public fixed byte m_bUseQuat[0x1];
        [FieldOffset(0x25D)] public fixed byte m_bWriteNormal[0x3];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F0)]
    public unsafe struct C_OP_Cull {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flCullPerc[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flCullStart[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flCullEnd[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flCullExp[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F0)]
    public unsafe struct C_INIT_RandomYawFlip {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_flPercent[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct SequenceWeightedList_t {
        [FieldOffset(0x0)] public fixed byte m_nSequence[0x4];
        [FieldOffset(0x4)] public fixed byte m_flRelativeWeight[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E0)]
    public unsafe struct C_OP_ReadFromNeighboringParticle {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldInput[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_nIncrement[0x8];
        [FieldOffset(0x1F0)] public fixed byte m_DistanceCheck[0x178];
        [FieldOffset(0x368)] public fixed byte m_flInterpolation[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x240)]
    public unsafe struct C_OP_RenderText {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_OutlineColor[0x8];
        [FieldOffset(0x238)] public fixed byte m_DefaultText[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xBB8)]
    public unsafe struct C_OP_LerpToInitialPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nControlPointNumber[0x8];
        [FieldOffset(0x1E8)] public fixed byte m_flInterpolation[0x178];
        [FieldOffset(0x360)] public fixed byte m_nCacheField[0x8];
        [FieldOffset(0x368)] public fixed byte m_flScale[0x178];
        [FieldOffset(0x4E0)] public fixed byte m_vecScale[0x6D8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_INIT_RandomRotation {
        [FieldOffset(0x0)] public fixed byte pad_0[0x208];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct C_OP_LerpEndCapVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_vecOutput[0xC];
        [FieldOffset(0x1F0)] public fixed byte m_flLerpTime[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1E8)]
    public unsafe struct C_OP_VelocityDecay {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flMinVelocity[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x370)]
    public unsafe struct C_OP_SetCPOrientationToPointAtCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nInputCP[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nOutputCP[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flInterpolation[0x178];
        [FieldOffset(0x368)] public fixed byte m_b2DOrientation[0x1];
        [FieldOffset(0x369)] public fixed byte m_bAvoidSingularity[0x1];
        [FieldOffset(0x36A)] public fixed byte m_bPointAway[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_LockToPointList {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldOutput[0x8];
        [FieldOffset(0x1E8)] public fixed byte m_pointList[0x18];
        [FieldOffset(0x200)] public fixed byte m_bPlaceAlongPath[0x1];
        [FieldOffset(0x201)] public fixed byte m_bClosedLoop[0x3];
        [FieldOffset(0x204)] public fixed byte m_nNumPointsAlongPath[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x840)]
    public unsafe struct C_INIT_CreateWithinCone {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_TransformInput[0x68];
        [FieldOffset(0x250)] public fixed byte m_flInnerAngle[0x178];
        [FieldOffset(0x3C8)] public fixed byte m_flOuterAngle[0x178];
        [FieldOffset(0x540)] public fixed byte m_flSpeed[0x178];
        [FieldOffset(0x6B8)] public fixed byte m_flOffset[0x178];
        [FieldOffset(0x830)] public fixed byte m_bCollapseOffset[0x4];
        [FieldOffset(0x834)] public fixed byte m_randomnessParameters[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xAF0)]
    public unsafe struct C_OP_MovementPlaceOnGround {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flOffset[0x178];
        [FieldOffset(0x358)] public fixed byte m_flMaxTraceLength[0x4];
        [FieldOffset(0x35C)] public fixed byte m_flTolerance[0x4];
        [FieldOffset(0x360)] public fixed byte m_vecTraceDir[0x6D8];
        [FieldOffset(0xA38)] public fixed byte m_flTraceOffset[0x4];
        [FieldOffset(0xA3C)] public fixed byte m_flLerpRate[0x4];
        [FieldOffset(0xA40)] public fixed byte m_CollisionGroupName[0x80];
        [FieldOffset(0xAC0)] public fixed byte m_nTraceSet[0x4];
        [FieldOffset(0xAC4)] public fixed byte m_nRefCP1[0x4];
        [FieldOffset(0xAC8)] public fixed byte m_nRefCP2[0x4];
        [FieldOffset(0xACC)] public fixed byte m_nLerpCP[0xC];
        [FieldOffset(0xAD8)] public fixed byte m_nTraceMissBehavior[0x4];
        [FieldOffset(0xADC)] public fixed byte m_bIncludeShotHull[0x1];
        [FieldOffset(0xADD)] public fixed byte m_bIncludeWater[0x3];
        [FieldOffset(0xAE0)] public fixed byte m_bSetNormal[0x1];
        [FieldOffset(0xAE1)] public fixed byte m_bScaleOffset[0x3];
        [FieldOffset(0xAE4)] public fixed byte m_nPreserveOffsetCP[0x4];
        [FieldOffset(0xAE8)] public fixed byte m_nIgnoreCP[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1E8)]
    public unsafe struct C_OP_SetCPOrientationToDirection {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nInputControlPoint[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nOutputControlPoint[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xF98)]
    public unsafe struct C_OP_RemapCrossProductOfTwoVectorsToVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_InputVec1[0x6D8];
        [FieldOffset(0x8B8)] public fixed byte m_InputVec2[0x6D8];
        [FieldOffset(0xF90)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0xF94)] public fixed byte m_bNormalize[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x258)]
    public unsafe struct C_OP_RemapTransformOrientationToRotations {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_TransformInput[0x68];
        [FieldOffset(0x248)] public fixed byte m_vecRotation[0xC];
        [FieldOffset(0x254)] public fixed byte m_bUseQuat[0x1];
        [FieldOffset(0x255)] public fixed byte m_bWriteNormal[0x3];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_INIT_RandomRotationSpeed {
        [FieldOffset(0x0)] public fixed byte pad_0[0x208];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x658)]
    public unsafe struct C_OP_InheritFromParentParticlesV2 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flScale[0x178];
        [FieldOffset(0x358)] public fixed byte m_nFieldOutput[0x8];
        [FieldOffset(0x360)] public fixed byte m_nIncrement[0x178];
        [FieldOffset(0x4D8)] public fixed byte m_bSubSample[0x1];
        [FieldOffset(0x4D9)] public fixed byte m_bRandomDistribution[0x1];
        [FieldOffset(0x4DA)] public fixed byte m_bReverse[0x2];
        [FieldOffset(0x4DC)] public fixed byte m_nMissingParentBehavior[0x4];
        [FieldOffset(0x4E0)] public fixed byte m_flInterpolation[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F0)]
    public unsafe struct C_INIT_RandomSecondSequence {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nSequenceMin[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nSequenceMax[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x500)]
    public unsafe struct C_OP_SetFloatCollection {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_InputValue[0x178];
        [FieldOffset(0x358)] public fixed byte m_nOutputField[0x4];
        [FieldOffset(0x35C)] public fixed byte m_nSetMethod[0x4];
        [FieldOffset(0x360)] public fixed byte m_Lerp[0x1A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct PointDefinition_t {
        [FieldOffset(0x0)] public fixed byte m_nControlPoint[0x4];
        [FieldOffset(0x4)] public fixed byte m_bLocalCoords[0x4];
        [FieldOffset(0x8)] public fixed byte m_vOffset[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x370)]
    public unsafe struct C_OP_SetControlPointPositionToRandomActiveCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nCP1[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nHeadLocationMin[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nHeadLocationMax[0x8];
        [FieldOffset(0x1F8)] public fixed byte m_flResetRate[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F0)]
    public unsafe struct C_OP_Diffusion {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flRadiusScale[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_nVoxelGridResolution[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_INIT_AgeNoise {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_bAbsVal[0x1];
        [FieldOffset(0x1E9)] public fixed byte m_bAbsValInv[0x3];
        [FieldOffset(0x1EC)] public fixed byte m_flOffset[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flAgeMin[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flAgeMax[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_flNoiseScale[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_flNoiseScaleLoc[0x4];
        [FieldOffset(0x200)] public fixed byte m_vecOffsetLoc[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F0)]
    public unsafe struct C_OP_RemapVectorComponentToScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldInput[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_nComponent[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct CGeneralRandomRotation {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flDegrees[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flDegreesMin[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flDegreesMax[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_flRotationRandExponent[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_bRandomlyFlipDirection[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1580)]
    public unsafe struct C_OP_DistanceBetweenVecs {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldOutput[0x8];
        [FieldOffset(0x1E8)] public fixed byte m_vecPoint1[0x6D8];
        [FieldOffset(0x8C0)] public fixed byte m_vecPoint2[0x6D8];
        [FieldOffset(0xF98)] public fixed byte m_flInputMin[0x178];
        [FieldOffset(0x1110)] public fixed byte m_flInputMax[0x178];
        [FieldOffset(0x1288)] public fixed byte m_flOutputMin[0x178];
        [FieldOffset(0x1400)] public fixed byte m_flOutputMax[0x178];
        [FieldOffset(0x1578)] public fixed byte m_nSetMethod[0x4];
        [FieldOffset(0x157C)] public fixed byte m_bDeltaTime[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F0)]
    public unsafe struct C_OP_DampenToCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flRange[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flScale[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x240)]
    public unsafe struct C_OP_CalculateVectorAttribute {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_vStartValue[0xC];
        [FieldOffset(0x1EC)] public fixed byte m_nFieldInput1[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flInputScale1[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_nFieldInput2[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_flInputScale2[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_nControlPointInput1[0x14];
        [FieldOffset(0x210)] public fixed byte m_flControlPointScale1[0x4];
        [FieldOffset(0x214)] public fixed byte m_nControlPointInput2[0x14];
        [FieldOffset(0x228)] public fixed byte m_flControlPointScale2[0x4];
        [FieldOffset(0x22C)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x230)] public fixed byte m_vFinalOutputScale[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xBA0)]
    public unsafe struct C_OP_LockToBone {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_modelInput[0x60];
        [FieldOffset(0x240)] public fixed byte m_transformInput[0x68];
        [FieldOffset(0x2A8)] public fixed byte m_flLifeTimeFadeStart[0x4];
        [FieldOffset(0x2AC)] public fixed byte m_flLifeTimeFadeEnd[0x4];
        [FieldOffset(0x2B0)] public fixed byte m_flJumpThreshold[0x4];
        [FieldOffset(0x2B4)] public fixed byte m_flPrevPosScale[0x4];
        [FieldOffset(0x2B8)] public fixed byte m_HitboxSetName[0x80];
        [FieldOffset(0x338)] public fixed byte m_bRigid[0x1];
        [FieldOffset(0x339)] public fixed byte m_bUseBones[0x3];
        [FieldOffset(0x33C)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x340)] public fixed byte m_nFieldOutputPrev[0x4];
        [FieldOffset(0x344)] public fixed byte m_nRotationSetType[0x4];
        [FieldOffset(0x348)] public fixed byte m_bRigidRotationLock[0x8];
        [FieldOffset(0x350)] public fixed byte m_vecRotation[0x6D8];
        [FieldOffset(0xA28)] public fixed byte m_flRotLerp[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x240)]
    public unsafe struct C_OP_RemapNamedModelBodyPartOnceTimed {
        [FieldOffset(0x0)] public fixed byte pad_0[0x240];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xBB0)]
    public unsafe struct C_OP_ScreenSpaceRotateTowardTarget {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_vecTargetPosition[0x6D8];
        [FieldOffset(0x8B8)] public fixed byte m_flOutputRemap[0x178];
        [FieldOffset(0xA30)] public fixed byte m_nSetMethod[0x8];
        [FieldOffset(0xA38)] public fixed byte m_flScreenEdgeAlignmentDistance[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct C_OP_MovementMaintainOffset {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_vecOffset[0xC];
        [FieldOffset(0x1EC)] public fixed byte m_nCP[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_bRadiusScale[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1768)]
    public unsafe struct C_INIT_CreateWithinCapsuleTransform {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_fRadiusMin[0x178];
        [FieldOffset(0x360)] public fixed byte m_fRadiusMax[0x178];
        [FieldOffset(0x4D8)] public fixed byte m_fHeight[0x178];
        [FieldOffset(0x650)] public fixed byte m_TransformInput[0x68];
        [FieldOffset(0x6B8)] public fixed byte m_fSpeedMin[0x178];
        [FieldOffset(0x830)] public fixed byte m_fSpeedMax[0x178];
        [FieldOffset(0x9A8)] public fixed byte m_fSpeedRandExp[0x8];
        [FieldOffset(0x9B0)] public fixed byte m_LocalCoordinateSystemSpeedMin[0x6D8];
        [FieldOffset(0x1088)] public fixed byte m_LocalCoordinateSystemSpeedMax[0x6D8];
        [FieldOffset(0x1760)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1764)] public fixed byte m_nFieldVelocity[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA40)]
    public unsafe struct C_OP_SetVec {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_InputValue[0x6D8];
        [FieldOffset(0x8B8)] public fixed byte m_nOutputField[0x4];
        [FieldOffset(0x8BC)] public fixed byte m_nSetMethod[0x4];
        [FieldOffset(0x8C0)] public fixed byte m_Lerp[0x178];
        [FieldOffset(0xA38)] public fixed byte m_bNormalizedOutput[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_INIT_CreateFromParentParticles {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_flVelocityScale[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flIncrement[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_bRandomDistribution[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_nRandomSeed[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_bSubFrame[0x1];
        [FieldOffset(0x1F9)] public fixed byte m_bSetRopeSegmentID[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E8)]
    public unsafe struct C_INIT_CheckParticleForWater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_flRadius[0x178];
        [FieldOffset(0x360)] public fixed byte m_nFieldOutput[0x8];
        [FieldOffset(0x368)] public fixed byte m_flOutputRemap[0x178];
        [FieldOffset(0x4E0)] public fixed byte m_nSetMethod[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_INIT_RandomNamedModelBodyPart {
        [FieldOffset(0x0)] public fixed byte pad_0[0x210];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2E88)]
    public unsafe struct C_OP_RenderOmni2Light {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_nLightType[0x4];
        [FieldOffset(0x234)] public fixed byte m_nMaxAllowed[0x4];
        [FieldOffset(0x238)] public fixed byte m_vColorBlend[0x6D8];
        [FieldOffset(0x910)] public fixed byte m_nColorBlendType[0x8];
        [FieldOffset(0x918)] public fixed byte m_strLightStyle[0x8];
        [FieldOffset(0x920)] public fixed byte m_flLightStyleTime[0x178];
        [FieldOffset(0xA98)] public fixed byte m_nBrightnessUnit[0x8];
        [FieldOffset(0xAA0)] public fixed byte m_flBrightnessLumens[0x178];
        [FieldOffset(0xC18)] public fixed byte m_flBrightnessCandelas[0x178];
        [FieldOffset(0xD90)] public fixed byte m_bCastShadows[0x1];
        [FieldOffset(0xD91)] public fixed byte m_bDynamicBounce[0x7];
        [FieldOffset(0xD98)] public fixed byte m_flBounceScale[0x178];
        [FieldOffset(0xF10)] public fixed byte m_bFog[0x8];
        [FieldOffset(0xF18)] public fixed byte m_flFogScale[0x178];
        [FieldOffset(0x1090)] public fixed byte m_flLuminaireRadius[0x178];
        [FieldOffset(0x1208)] public fixed byte m_nOrientationType[0x8];
        [FieldOffset(0x1210)] public fixed byte m_vNormal[0x6D8];
        [FieldOffset(0x18E8)] public fixed byte m_vTarget[0x6D8];
        [FieldOffset(0x1FC0)] public fixed byte m_flFOVAngle[0x178];
        [FieldOffset(0x2138)] public fixed byte m_flBarnShape[0x178];
        [FieldOffset(0x22B0)] public fixed byte m_flBarnNearSizeX[0x178];
        [FieldOffset(0x2428)] public fixed byte m_flBarnNearSizeY[0x178];
        [FieldOffset(0x25A0)] public fixed byte m_flBarnSoftX[0x178];
        [FieldOffset(0x2718)] public fixed byte m_flBarnSoftY[0x178];
        [FieldOffset(0x2890)] public fixed byte m_flSkirt[0x178];
        [FieldOffset(0x2A08)] public fixed byte m_flRange[0x178];
        [FieldOffset(0x2B80)] public fixed byte m_flInnerConeAngle[0x178];
        [FieldOffset(0x2CF8)] public fixed byte m_flOuterConeAngle[0x178];
        [FieldOffset(0x2E70)] public fixed byte m_hLightCookie[0x8];
        [FieldOffset(0x2E78)] public fixed byte m_bSphericalCookie[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E0)]
    public unsafe struct C_OP_ConnectParentParticleToNearest {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFirstControlPoint[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nSecondControlPoint[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_bUseRadius[0x8];
        [FieldOffset(0x1F0)] public fixed byte m_flRadiusScale[0x178];
        [FieldOffset(0x368)] public fixed byte m_flParentRadiusScale[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6E8)]
    public unsafe struct CPAssignment_t {
        [FieldOffset(0x0)] public fixed byte m_nCPNumber[0x8];
        [FieldOffset(0x8)] public fixed byte m_Pos[0x6D8];
        [FieldOffset(0x6E0)] public fixed byte m_nOrientationMode[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x238)]
    public unsafe struct C_INIT_RemapParticleCountToNamedModelBodyPartScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x238];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x398)]
    public unsafe struct C_INIT_InitSkinnedPositionFromCPSnapshot {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nSnapshotControlPointNumber[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_bRandom[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_nRandomSeed[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_bRigid[0x1];
        [FieldOffset(0x1F9)] public fixed byte m_bSetNormal[0x1];
        [FieldOffset(0x1FA)] public fixed byte m_bIgnoreDt[0x2];
        [FieldOffset(0x1FC)] public fixed byte m_flMinNormalVelocity[0x4];
        [FieldOffset(0x200)] public fixed byte m_flMaxNormalVelocity[0x4];
        [FieldOffset(0x204)] public fixed byte m_nIndexType[0x4];
        [FieldOffset(0x208)] public fixed byte m_flReadIndex[0x178];
        [FieldOffset(0x380)] public fixed byte m_flIncrement[0x4];
        [FieldOffset(0x384)] public fixed byte m_nFullLoopIncrement[0x4];
        [FieldOffset(0x388)] public fixed byte m_nSnapShotStartPoint[0x4];
        [FieldOffset(0x38C)] public fixed byte m_flBoneVelocity[0x4];
        [FieldOffset(0x390)] public fixed byte m_flBoneVelocityMax[0x4];
        [FieldOffset(0x394)] public fixed byte m_bCopyColor[0x1];
        [FieldOffset(0x395)] public fixed byte m_bCopyAlpha[0x1];
        [FieldOffset(0x396)] public fixed byte m_bSetRadius[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F0)]
    public unsafe struct C_OP_LagCompensation {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nDesiredVelocityCP[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nLatencyCP[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_nLatencyCPField[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nDesiredVelocityCPField[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4D0)]
    public unsafe struct C_OP_CollideWithSelf {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flRadiusScale[0x178];
        [FieldOffset(0x358)] public fixed byte m_flMinimumSpeed[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct C_OP_Noise {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flOutputMin[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flOutputMax[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_fl4NoiseScale[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_bAdditive[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flNoiseAnimationTimeScale[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct C_OP_FadeAndKillForTracers {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flStartFadeInTime[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flEndFadeInTime[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flStartFadeOutTime[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flEndFadeOutTime[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flStartAlpha[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flEndAlpha[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x648)]
    public unsafe struct C_OP_ColorAdjustHSL {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flHueAdjust[0x178];
        [FieldOffset(0x358)] public fixed byte m_flSaturationAdjust[0x178];
        [FieldOffset(0x4D0)] public fixed byte m_flLightnessAdjust[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x470)]
    public unsafe struct CParticleMassCalculationParameters {
        [FieldOffset(0x0)] public fixed byte m_nMassMode[0x8];
        [FieldOffset(0x8)] public fixed byte m_flRadius[0x178];
        [FieldOffset(0x180)] public fixed byte m_flNominalRadius[0x178];
        [FieldOffset(0x2F8)] public fixed byte m_flScale[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_SequenceFromModel {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_nFieldOutputAnim[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flInputMin[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flInputMax[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flOutputMin[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_flOutputMax[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_nSetMethod[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1E8)]
    public unsafe struct C_OP_AlphaDecay {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flMinAlpha[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1E8)]
    public unsafe struct C_OP_RemapDensityGradientToVectorAttribute {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flRadiusScale[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nFieldOutput[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8D0)]
    public unsafe struct C_INIT_InitVec {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_InputValue[0x6D8];
        [FieldOffset(0x8C0)] public fixed byte m_nOutputField[0x4];
        [FieldOffset(0x8C4)] public fixed byte m_nSetMethod[0x4];
        [FieldOffset(0x8C8)] public fixed byte m_bNormalizedOutput[0x1];
        [FieldOffset(0x8C9)] public fixed byte m_bWritePreviousPosition[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xAD8)]
    public unsafe struct C_INIT_SetHitboxToModel {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nForceInModel[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_bEvenDistribution[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_nDesiredHitbox[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_vecHitBoxScale[0x6D8];
        [FieldOffset(0x8D0)] public fixed byte m_vecDirectionBias[0xC];
        [FieldOffset(0x8DC)] public fixed byte m_bMaintainHitbox[0x1];
        [FieldOffset(0x8DD)] public fixed byte m_bUseBones[0x1];
        [FieldOffset(0x8DE)] public fixed byte m_HitboxSetName[0x82];
        [FieldOffset(0x960)] public fixed byte m_flShellSize[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E0)]
    public unsafe struct C_OP_MovementMoveAlongSkinnedCPSnapshot {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nSnapshotControlPointNumber[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_bSetNormal[0x1];
        [FieldOffset(0x1E9)] public fixed byte m_bSetRadius[0x7];
        [FieldOffset(0x1F0)] public fixed byte m_flInterpolation[0x178];
        [FieldOffset(0x368)] public fixed byte m_flTValue[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x368)]
    public unsafe struct C_OP_LerpScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldOutput[0x8];
        [FieldOffset(0x1E8)] public fixed byte m_flOutput[0x178];
        [FieldOffset(0x360)] public fixed byte m_flStartTime[0x4];
        [FieldOffset(0x364)] public fixed byte m_flEndTime[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2A0)]
    public unsafe struct C_INIT_InitialRepulsionVelocity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_CollisionGroupName[0x80];
        [FieldOffset(0x268)] public fixed byte m_nTraceSet[0x4];
        [FieldOffset(0x26C)] public fixed byte m_vecOutputMin[0xC];
        [FieldOffset(0x278)] public fixed byte m_vecOutputMax[0xC];
        [FieldOffset(0x284)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0x288)] public fixed byte m_bPerParticle[0x1];
        [FieldOffset(0x289)] public fixed byte m_bTranslate[0x1];
        [FieldOffset(0x28A)] public fixed byte m_bProportional[0x2];
        [FieldOffset(0x28C)] public fixed byte m_flTraceLength[0x4];
        [FieldOffset(0x290)] public fixed byte m_bPerParticleTR[0x1];
        [FieldOffset(0x291)] public fixed byte m_bInherit[0x3];
        [FieldOffset(0x294)] public fixed byte m_nChildCP[0x4];
        [FieldOffset(0x298)] public fixed byte m_nChildGroupID[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4D8)]
    public unsafe struct C_OP_ClampScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldOutput[0x8];
        [FieldOffset(0x1E8)] public fixed byte m_flOutputMin[0x178];
        [FieldOffset(0x360)] public fixed byte m_flOutputMax[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_SetControlPointToHMD {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nCP1[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_vecCP1Pos[0xC];
        [FieldOffset(0x1F8)] public fixed byte m_bOrientToHMD[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_DifferencePreviousParticle {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldInput[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flInputMin[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flInputMax[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flOutputMin[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flOutputMax[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_nSetMethod[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_bActiveRange[0x1];
        [FieldOffset(0x1FD)] public fixed byte m_bSetPreviousParticle[0x3];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1298)]
    public unsafe struct C_OP_SetControlPointFieldFromVectorExpression {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nExpression[0x8];
        [FieldOffset(0x1F0)] public fixed byte m_vecInput1[0x6D8];
        [FieldOffset(0x8C8)] public fixed byte m_vecInput2[0x6D8];
        [FieldOffset(0xFA0)] public fixed byte m_flLerp[0x178];
        [FieldOffset(0x1118)] public fixed byte m_flOutputRemap[0x178];
        [FieldOffset(0x1290)] public fixed byte m_nOutputCP[0x4];
        [FieldOffset(0x1294)] public fixed byte m_nOutVectorField[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2D0)]
    public unsafe struct C_OP_PercentageBetweenTransforms {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flInputMin[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flInputMax[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flOutputMin[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flOutputMax[0x8];
        [FieldOffset(0x1F8)] public fixed byte m_TransformStart[0x68];
        [FieldOffset(0x260)] public fixed byte m_TransformEnd[0x68];
        [FieldOffset(0x2C8)] public fixed byte m_nSetMethod[0x4];
        [FieldOffset(0x2CC)] public fixed byte m_bActiveRange[0x1];
        [FieldOffset(0x2CD)] public fixed byte m_bRadialCheck[0x3];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x370)]
    public unsafe struct C_INIT_PlaneCull {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nControlPoint[0x8];
        [FieldOffset(0x1F0)] public fixed byte m_flDistance[0x178];
        [FieldOffset(0x368)] public fixed byte m_bCullInside[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x240)]
    public unsafe struct C_OP_RemapNamedModelSequenceEndCap {
        [FieldOffset(0x0)] public fixed byte pad_0[0x240];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x500)]
    public unsafe struct C_INIT_InitFromCPSnapshot {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nControlPointNumber[0x8];
        [FieldOffset(0x1F0)] public fixed byte m_strSnapshotSubset[0x8];
        [FieldOffset(0x1F8)] public fixed byte m_nAttributeToRead[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_nAttributeToWrite[0x4];
        [FieldOffset(0x200)] public fixed byte m_nLocalSpaceCP[0x4];
        [FieldOffset(0x204)] public fixed byte m_bRandom[0x1];
        [FieldOffset(0x205)] public fixed byte m_bReverse[0x3];
        [FieldOffset(0x208)] public fixed byte m_nSnapShotIncrement[0x178];
        [FieldOffset(0x380)] public fixed byte m_nManualSnapshotIndex[0x178];
        [FieldOffset(0x4F8)] public fixed byte m_nRandomSeed[0x4];
        [FieldOffset(0x4FC)] public fixed byte m_bLocalSpaceAngles[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x15A8)]
    public unsafe struct C_OP_RenderCables {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_flRadiusScale[0x178];
        [FieldOffset(0x3A8)] public fixed byte m_flAlphaScale[0x178];
        [FieldOffset(0x520)] public fixed byte m_vecColorScale[0x6D8];
        [FieldOffset(0xBF8)] public fixed byte m_nColorBlendType[0x8];
        [FieldOffset(0xC00)] public fixed byte m_hMaterial[0x8];
        [FieldOffset(0xC08)] public fixed byte m_nTextureRepetitionMode[0x8];
        [FieldOffset(0xC10)] public fixed byte m_flTextureRepeatsPerSegment[0x178];
        [FieldOffset(0xD88)] public fixed byte m_flTextureRepeatsCircumference[0x178];
        [FieldOffset(0xF00)] public fixed byte m_flColorMapOffsetV[0x178];
        [FieldOffset(0x1078)] public fixed byte m_flColorMapOffsetU[0x178];
        [FieldOffset(0x11F0)] public fixed byte m_flNormalMapOffsetV[0x178];
        [FieldOffset(0x1368)] public fixed byte m_flNormalMapOffsetU[0x178];
        [FieldOffset(0x14E0)] public fixed byte m_bDrawCableCaps[0x4];
        [FieldOffset(0x14E4)] public fixed byte m_flCapRoundness[0x4];
        [FieldOffset(0x14E8)] public fixed byte m_flCapOffsetAmount[0x4];
        [FieldOffset(0x14EC)] public fixed byte m_flTessScale[0x4];
        [FieldOffset(0x14F0)] public fixed byte m_nMinTesselation[0x4];
        [FieldOffset(0x14F4)] public fixed byte m_nMaxTesselation[0x4];
        [FieldOffset(0x14F8)] public fixed byte m_nRoundness[0x4];
        [FieldOffset(0x14FC)] public fixed byte m_nForceRoundnessFixed[0x1];
        [FieldOffset(0x14FD)] public fixed byte m_bOnlyRenderInEffectsBloomPass[0x3];
        [FieldOffset(0x1500)] public fixed byte m_LightingTransform[0x68];
        [FieldOffset(0x1568)] public fixed byte m_MaterialFloatVars[0x20];
        [FieldOffset(0x1588)] public fixed byte m_MaterialVecVars[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F0)]
    public unsafe struct C_INIT_InheritVelocity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flVelocityScale[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x380)]
    public unsafe struct C_OP_SetControlPointToWaterSurface {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nSourceCP[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nDestCP[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nFlowCP[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_nActiveCP[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_nActiveCPField[0x8];
        [FieldOffset(0x200)] public fixed byte m_flRetestRate[0x178];
        [FieldOffset(0x378)] public fixed byte m_bAdaptiveThreshold[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1010)]
    public unsafe struct C_INIT_PositionOffset {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_OffsetMin[0x6D8];
        [FieldOffset(0x8C0)] public fixed byte m_OffsetMax[0x6D8];
        [FieldOffset(0xF98)] public fixed byte m_TransformInput[0x68];
        [FieldOffset(0x1000)] public fixed byte m_bLocalCoords[0x1];
        [FieldOffset(0x1001)] public fixed byte m_bProportional[0x3];
        [FieldOffset(0x1004)] public fixed byte m_randomnessParameters[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x258)]
    public unsafe struct C_INIT_NormalAlignToCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_transformInput[0x68];
        [FieldOffset(0x250)] public fixed byte m_nControlPointAxis[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1E8)]
    public unsafe struct C_OP_ShapeMatchingConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flShapeRestorationTime[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x370)]
    public unsafe struct C_OP_SetChildControlPoints {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nChildGroupID[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nFirstControlPoint[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_nNumControlPoints[0x8];
        [FieldOffset(0x1F0)] public fixed byte m_nFirstSourcePoint[0x178];
        [FieldOffset(0x368)] public fixed byte m_bReverse[0x1];
        [FieldOffset(0x369)] public fixed byte m_bSetOrientation[0x3];
        [FieldOffset(0x36C)] public fixed byte m_nOrientation[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1588)]
    public unsafe struct C_OP_ChladniWave {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldOutput[0x8];
        [FieldOffset(0x1E8)] public fixed byte m_flInputMin[0x178];
        [FieldOffset(0x360)] public fixed byte m_flInputMax[0x178];
        [FieldOffset(0x4D8)] public fixed byte m_flOutputMin[0x178];
        [FieldOffset(0x650)] public fixed byte m_flOutputMax[0x178];
        [FieldOffset(0x7C8)] public fixed byte m_vecWaveLength[0x6D8];
        [FieldOffset(0xEA0)] public fixed byte m_vecHarmonics[0x6D8];
        [FieldOffset(0x1578)] public fixed byte m_nSetMethod[0x4];
        [FieldOffset(0x157C)] public fixed byte m_nLocalSpaceControlPoint[0x4];
        [FieldOffset(0x1580)] public fixed byte m_b3D[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_RemapDirectionToCPToVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nCP[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flScale[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flOffsetRot[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_vecOffsetAxis[0xC];
        [FieldOffset(0x1FC)] public fixed byte m_bNormalize[0x4];
        [FieldOffset(0x200)] public fixed byte m_nFieldStrength[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x220)]
    public unsafe struct C_OP_DriveCPFromGlobalSoundFloat {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nOutputControlPoint[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nOutputField[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flInputMin[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flInputMax[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_flOutputMin[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_flOutputMax[0x4];
        [FieldOffset(0x200)] public fixed byte m_StackName[0x8];
        [FieldOffset(0x208)] public fixed byte m_OperatorName[0x8];
        [FieldOffset(0x210)] public fixed byte m_FieldName[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA40)]
    public unsafe struct C_INIT_ScreenSpacePositionOfTarget {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_vecTargetPosition[0x6D8];
        [FieldOffset(0x8C0)] public fixed byte m_bOututBehindness[0x4];
        [FieldOffset(0x8C4)] public fixed byte m_nBehindFieldOutput[0x4];
        [FieldOffset(0x8C8)] public fixed byte m_flBehindOutputRemap[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x288)]
    public unsafe struct C_OP_RtEnvCull {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_vecTestDir[0xC];
        [FieldOffset(0x1EC)] public fixed byte m_vecTestNormal[0xC];
        [FieldOffset(0x1F8)] public fixed byte m_bCullOnMiss[0x1];
        [FieldOffset(0x1F9)] public fixed byte m_bStickInsteadOfCull[0x1];
        [FieldOffset(0x1FA)] public fixed byte m_RtEnvName[0x82];
        [FieldOffset(0x27C)] public fixed byte m_nRTEnvCP[0x4];
        [FieldOffset(0x280)] public fixed byte m_nComponent[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x11B0)]
    public unsafe struct C_OP_PinParticleToCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nControlPointNumber[0x8];
        [FieldOffset(0x1E8)] public fixed byte m_vecOffset[0x6D8];
        [FieldOffset(0x8C0)] public fixed byte m_bOffsetLocal[0x4];
        [FieldOffset(0x8C4)] public fixed byte m_nParticleSelection[0x4];
        [FieldOffset(0x8C8)] public fixed byte m_nParticleNumber[0x178];
        [FieldOffset(0xA40)] public fixed byte m_nPinBreakType[0x8];
        [FieldOffset(0xA48)] public fixed byte m_flBreakDistance[0x178];
        [FieldOffset(0xBC0)] public fixed byte m_flBreakSpeed[0x178];
        [FieldOffset(0xD38)] public fixed byte m_flAge[0x178];
        [FieldOffset(0xEB0)] public fixed byte m_nBreakControlPointNumber[0x4];
        [FieldOffset(0xEB4)] public fixed byte m_nBreakControlPointNumber2[0x4];
        [FieldOffset(0xEB8)] public fixed byte m_flBreakValue[0x178];
        [FieldOffset(0x1030)] public fixed byte m_flInterpolation[0x178];
        [FieldOffset(0x11A8)] public fixed byte m_bRetainInitialVelocity[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_OP_RemapCPtoVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nCPInput[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_nLocalSpaceCP[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_vInputMin[0xC];
        [FieldOffset(0x1F8)] public fixed byte m_vInputMax[0xC];
        [FieldOffset(0x204)] public fixed byte m_vOutputMin[0xC];
        [FieldOffset(0x210)] public fixed byte m_vOutputMax[0xC];
        [FieldOffset(0x21C)] public fixed byte m_flStartTime[0x4];
        [FieldOffset(0x220)] public fixed byte m_flEndTime[0x4];
        [FieldOffset(0x224)] public fixed byte m_flInterpRate[0x4];
        [FieldOffset(0x228)] public fixed byte m_nSetMethod[0x4];
        [FieldOffset(0x22C)] public fixed byte m_bOffset[0x1];
        [FieldOffset(0x22D)] public fixed byte m_bAccelerate[0x3];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x660)]
    public unsafe struct C_INIT_CreateParticleImpulse {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_InputRadius[0x178];
        [FieldOffset(0x360)] public fixed byte m_InputMagnitude[0x178];
        [FieldOffset(0x4D8)] public fixed byte m_nFalloffFunction[0x8];
        [FieldOffset(0x4E0)] public fixed byte m_InputFalloffExp[0x178];
        [FieldOffset(0x658)] public fixed byte m_nImpulseType[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_DensityForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F0];
        [FieldOffset(0x1F0)] public fixed byte m_flRadiusScale[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flForceScale[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_flTargetDensity[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x840)]
    public unsafe struct C_INIT_CreateInEpitrochoid {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nComponent1[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nComponent2[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_TransformInput[0x68];
        [FieldOffset(0x258)] public fixed byte m_flParticleDensity[0x178];
        [FieldOffset(0x3D0)] public fixed byte m_flOffset[0x178];
        [FieldOffset(0x548)] public fixed byte m_flRadius1[0x178];
        [FieldOffset(0x6C0)] public fixed byte m_flRadius2[0x178];
        [FieldOffset(0x838)] public fixed byte m_bUseCount[0x1];
        [FieldOffset(0x839)] public fixed byte m_bUseLocalCoords[0x1];
        [FieldOffset(0x83A)] public fixed byte m_bOffsetExistingPos[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_ConstrainDistanceToUserSpecifiedPath {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_fMinDistance[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flMaxDistance[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flTimeScale[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_bLoopedPath[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_pointList[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_OP_SetControlPointPositions {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_bUseWorldLocation[0x1];
        [FieldOffset(0x1E9)] public fixed byte m_bOrient[0x1];
        [FieldOffset(0x1EA)] public fixed byte m_bSetOnce[0x2];
        [FieldOffset(0x1EC)] public fixed byte m_nCP1[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nCP2[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_nCP3[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_nCP4[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_vecCP1Pos[0xC];
        [FieldOffset(0x208)] public fixed byte m_vecCP2Pos[0xC];
        [FieldOffset(0x214)] public fixed byte m_vecCP3Pos[0xC];
        [FieldOffset(0x220)] public fixed byte m_vecCP4Pos[0xC];
        [FieldOffset(0x22C)] public fixed byte m_nHeadLocation[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1118)]
    public unsafe struct C_OP_SetFloatAttributeToVectorExpression {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nExpression[0x8];
        [FieldOffset(0x1E8)] public fixed byte m_vInput1[0x6D8];
        [FieldOffset(0x8C0)] public fixed byte m_vInput2[0x6D8];
        [FieldOffset(0xF98)] public fixed byte m_flOutputRemap[0x178];
        [FieldOffset(0x1110)] public fixed byte m_nOutputField[0x4];
        [FieldOffset(0x1114)] public fixed byte m_nSetMethod[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xAA0)]
    public unsafe struct C_OP_MovementRotateParticleAroundAxis {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_vecRotAxis[0x6D8];
        [FieldOffset(0x8B8)] public fixed byte m_flRotRate[0x178];
        [FieldOffset(0xA30)] public fixed byte m_TransformInput[0x68];
        [FieldOffset(0xA98)] public fixed byte m_bLocalSpace[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_OP_IntraParticleForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F0];
        [FieldOffset(0x1F0)] public fixed byte m_flAttractionMinDistance[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flAttractionMaxDistance[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_flAttractionMaxStrength[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_flRepulsionMinDistance[0x4];
        [FieldOffset(0x200)] public fixed byte m_flRepulsionMaxDistance[0x4];
        [FieldOffset(0x204)] public fixed byte m_flRepulsionMaxStrength[0x4];
        [FieldOffset(0x208)] public fixed byte m_bUseAABB[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4E8)]
    public unsafe struct C_INIT_InitFloat {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_InputValue[0x178];
        [FieldOffset(0x360)] public fixed byte m_nOutputField[0x4];
        [FieldOffset(0x364)] public fixed byte m_nSetMethod[0x4];
        [FieldOffset(0x368)] public fixed byte m_InputStrength[0x180];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x13F0)]
    public unsafe struct C_INIT_CreateOnModel {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_modelInput[0x60];
        [FieldOffset(0x248)] public fixed byte m_transformInput[0x68];
        [FieldOffset(0x2B0)] public fixed byte m_nForceInModel[0x4];
        [FieldOffset(0x2B4)] public fixed byte m_bScaleToVolume[0x1];
        [FieldOffset(0x2B5)] public fixed byte m_bEvenDistribution[0x3];
        [FieldOffset(0x2B8)] public fixed byte m_nDesiredHitbox[0x178];
        [FieldOffset(0x430)] public fixed byte m_nHitboxValueFromControlPointIndex[0x8];
        [FieldOffset(0x438)] public fixed byte m_vecHitBoxScale[0x6D8];
        [FieldOffset(0xB10)] public fixed byte m_flBoneVelocity[0x4];
        [FieldOffset(0xB14)] public fixed byte m_flMaxBoneVelocity[0x4];
        [FieldOffset(0xB18)] public fixed byte m_vecDirectionBias[0x6D8];
        [FieldOffset(0x11F0)] public fixed byte m_HitboxSetName[0x80];
        [FieldOffset(0x1270)] public fixed byte m_bLocalCoords[0x1];
        [FieldOffset(0x1271)] public fixed byte m_bUseBones[0x1];
        [FieldOffset(0x1272)] public fixed byte m_bUseMesh[0x6];
        [FieldOffset(0x1278)] public fixed byte m_flShellSize[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F0)]
    public unsafe struct C_OP_InheritFromPeerSystem {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nFieldInput[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_nIncrement[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nGroupID[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA48)]
    public unsafe struct C_OP_PerParticleForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F0];
        [FieldOffset(0x1F0)] public fixed byte m_flForceScale[0x178];
        [FieldOffset(0x368)] public fixed byte m_vForce[0x6D8];
        [FieldOffset(0xA40)] public fixed byte m_nCP[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_INIT_RandomNamedModelMeshGroup {
        [FieldOffset(0x0)] public fixed byte pad_0[0x210];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xF58)]
    public unsafe struct C_OP_RenderProjected {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_bProjectCharacter[0x1];
        [FieldOffset(0x231)] public fixed byte m_bProjectWorld[0x1];
        [FieldOffset(0x232)] public fixed byte m_bProjectWater[0x1];
        [FieldOffset(0x233)] public fixed byte m_bFlipHorizontal[0x1];
        [FieldOffset(0x234)] public fixed byte m_bEnableProjectedDepthControls[0x4];
        [FieldOffset(0x238)] public fixed byte m_flMinProjectionDepth[0x4];
        [FieldOffset(0x23C)] public fixed byte m_flMaxProjectionDepth[0x4];
        [FieldOffset(0x240)] public fixed byte m_vecProjectedMaterials[0x18];
        [FieldOffset(0x258)] public fixed byte m_flMaterialSelection[0x178];
        [FieldOffset(0x3D0)] public fixed byte m_flAnimationTimeScale[0x4];
        [FieldOffset(0x3D4)] public fixed byte m_bOrientToNormal[0x4];
        [FieldOffset(0x3D8)] public fixed byte m_MaterialVars[0x18];
        [FieldOffset(0x3F0)] public fixed byte m_flRadiusScale[0x178];
        [FieldOffset(0x568)] public fixed byte m_flAlphaScale[0x178];
        [FieldOffset(0x6E0)] public fixed byte m_flRollScale[0x178];
        [FieldOffset(0x858)] public fixed byte m_nAlpha2Field[0x8];
        [FieldOffset(0x860)] public fixed byte m_vecColorScale[0x6D8];
        [FieldOffset(0xF38)] public fixed byte m_nColorBlendType[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4D0)]
    public unsafe struct C_OP_MaxVelocity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flMaxVelocity[0x178];
        [FieldOffset(0x358)] public fixed byte m_flMinVelocity[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct C_INIT_VelocityFromNormal {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_fSpeedMin[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_fSpeedMax[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_bIgnoreDt[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x670)]
    public unsafe struct C_OP_MaintainEmitter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nParticlesToMaintain[0x178];
        [FieldOffset(0x360)] public fixed byte m_flStartTime[0x8];
        [FieldOffset(0x368)] public fixed byte m_flEmissionDuration[0x178];
        [FieldOffset(0x4E0)] public fixed byte m_flEmissionRate[0x4];
        [FieldOffset(0x4E4)] public fixed byte m_nSnapshotControlPoint[0x4];
        [FieldOffset(0x4E8)] public fixed byte m_strSnapshotSubset[0x8];
        [FieldOffset(0x4F0)] public fixed byte m_bEmitInstantaneously[0x1];
        [FieldOffset(0x4F1)] public fixed byte m_bFinalEmitOnStop[0x7];
        [FieldOffset(0x4F8)] public fixed byte m_flScale[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct C_INIT_PositionOffsetToCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nControlPointNumberStart[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nControlPointNumberEnd[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_bLocalCoords[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x260)]
    public unsafe struct C_INIT_RemapInitialTransformDirectionToRotation {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_TransformInput[0x68];
        [FieldOffset(0x250)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x254)] public fixed byte m_flOffsetRot[0x4];
        [FieldOffset(0x258)] public fixed byte m_nComponent[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_FadeAndKill {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flStartFadeInTime[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flEndFadeInTime[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flStartFadeOutTime[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flEndFadeOutTime[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flStartAlpha[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flEndAlpha[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_bForcePreserveParticleOrder[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_ColorInterpolate {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_ColorFade[0x10];
        [FieldOffset(0x1F0)] public fixed byte m_flFadeStartTime[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flFadeEndTime[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_bEaseInOut[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_OP_RampScalarSpline {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_RateMin[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_RateMax[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flStartTime_min[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flStartTime_max[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flEndTime_min[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flEndTime_max[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_flBias[0x28];
        [FieldOffset(0x220)] public fixed byte m_nField[0x4];
        [FieldOffset(0x224)] public fixed byte m_bProportionalOp[0x1];
        [FieldOffset(0x225)] public fixed byte m_bEaseOut[0xB];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x240)]
    public unsafe struct C_OP_RemapNamedModelSequenceOnceTimed {
        [FieldOffset(0x0)] public fixed byte pad_0[0x240];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F0)]
    public unsafe struct C_OP_SetControlPointFromObjectScale {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nCPInput[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nCPOutput[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x690)]
    public unsafe struct C_OP_MaintainSequentialPath {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_fMaxDistance[0x178];
        [FieldOffset(0x358)] public fixed byte m_flNumToAssign[0x178];
        [FieldOffset(0x4D0)] public fixed byte m_flCohesionStrength[0x178];
        [FieldOffset(0x648)] public fixed byte m_flTolerance[0x4];
        [FieldOffset(0x64C)] public fixed byte m_bLoop[0x1];
        [FieldOffset(0x64D)] public fixed byte m_bUseParticleCount[0x3];
        [FieldOffset(0x650)] public fixed byte m_PathParams[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x240)]
    public unsafe struct C_OP_RemapNamedModelBodyPartEndCap {
        [FieldOffset(0x0)] public fixed byte pad_0[0x240];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x368)]
    public unsafe struct C_OP_StopAfterCPDuration {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_flDuration[0x178];
        [FieldOffset(0x360)] public fixed byte m_bDestroyImmediately[0x1];
        [FieldOffset(0x361)] public fixed byte m_bPlayEndCap[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct CGeneralSpin {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nSpinRateDegrees[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nSpinRateMinDegrees[0x8];
        [FieldOffset(0x1EC)] public fixed byte m_fSpinRateStopTime[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_OP_LockToSavedSequentialPath {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E4];
        [FieldOffset(0x1E4)] public fixed byte m_flFadeStart[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flFadeEnd[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_bCPPairs[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_PathParams[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_INIT_RemapNamedModelElementToScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_hModel[0x8];
        [FieldOffset(0x1F0)] public fixed byte m_names[0x18];
        [FieldOffset(0x208)] public fixed byte m_values[0x18];
        [FieldOffset(0x220)] public fixed byte m_nFieldInput[0x4];
        [FieldOffset(0x224)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x228)] public fixed byte m_nSetMethod[0x4];
        [FieldOffset(0x22C)] public fixed byte m_bModelFromRenderer[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xF98)]
    public unsafe struct C_OP_ClampVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldOutput[0x8];
        [FieldOffset(0x1E8)] public fixed byte m_vecOutputMin[0x6D8];
        [FieldOffset(0x8C0)] public fixed byte m_vecOutputMax[0x6D8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x260)]
    public unsafe struct C_OP_RenderStatusEffectCitadel {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_pTextureColorWarp[0x8];
        [FieldOffset(0x238)] public fixed byte m_pTextureNormal[0x8];
        [FieldOffset(0x240)] public fixed byte m_pTextureMetalness[0x8];
        [FieldOffset(0x248)] public fixed byte m_pTextureRoughness[0x8];
        [FieldOffset(0x250)] public fixed byte m_pTextureSelfIllum[0x8];
        [FieldOffset(0x258)] public fixed byte m_pTextureDetail[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct IParticleSystemDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_WindForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F0];
        [FieldOffset(0x1F0)] public fixed byte m_vForce[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB08)]
    public unsafe struct C_OP_SetVariable {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_variableReference[0x50];
        [FieldOffset(0x238)] public fixed byte m_transformInput[0x68];
        [FieldOffset(0x2A0)] public fixed byte m_positionOffset[0xC];
        [FieldOffset(0x2AC)] public fixed byte m_rotationOffset[0xC];
        [FieldOffset(0x2B8)] public fixed byte m_vecInput[0x6D8];
        [FieldOffset(0x990)] public fixed byte m_floatInput[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1828)]
    public unsafe struct C_OP_RenderStandardLight {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_nLightType[0x4];
        [FieldOffset(0x234)] public fixed byte m_nMaxAllowed[0x4];
        [FieldOffset(0x238)] public fixed byte m_vecColorScale[0x6D8];
        [FieldOffset(0x910)] public fixed byte m_nColorBlendType[0x8];
        [FieldOffset(0x918)] public fixed byte m_strLightStyle[0x8];
        [FieldOffset(0x920)] public fixed byte m_flLightStyleTime[0x178];
        [FieldOffset(0xA98)] public fixed byte m_flIntensity[0x178];
        [FieldOffset(0xC10)] public fixed byte m_bCastShadows[0x1];
        [FieldOffset(0xC11)] public fixed byte m_bDynamicBounce[0x7];
        [FieldOffset(0xC18)] public fixed byte m_flBounceScale[0x178];
        [FieldOffset(0xD90)] public fixed byte m_flTheta[0x178];
        [FieldOffset(0xF08)] public fixed byte m_flPhi[0x178];
        [FieldOffset(0x1080)] public fixed byte m_flRadiusMultiplier[0x178];
        [FieldOffset(0x11F8)] public fixed byte m_nAttenuationStyle[0x8];
        [FieldOffset(0x1200)] public fixed byte m_flFalloffLinearity[0x178];
        [FieldOffset(0x1378)] public fixed byte m_flFiftyPercentFalloff[0x178];
        [FieldOffset(0x14F0)] public fixed byte m_flZeroPercentFalloff[0x178];
        [FieldOffset(0x1668)] public fixed byte m_bRenderDiffuse[0x1];
        [FieldOffset(0x1669)] public fixed byte m_bRenderSpecular[0x7];
        [FieldOffset(0x1670)] public fixed byte m_lightCookie[0x8];
        [FieldOffset(0x1678)] public fixed byte m_nPriority[0x4];
        [FieldOffset(0x167C)] public fixed byte m_nFogLightingMode[0x4];
        [FieldOffset(0x1680)] public fixed byte m_flFogContribution[0x178];
        [FieldOffset(0x17F8)] public fixed byte m_nCapsuleLightBehavior[0x4];
        [FieldOffset(0x17FC)] public fixed byte m_flCapsuleLength[0x4];
        [FieldOffset(0x1800)] public fixed byte m_bReverseOrder[0x1];
        [FieldOffset(0x1801)] public fixed byte m_bClosedLoop[0x3];
        [FieldOffset(0x1804)] public fixed byte m_nPrevPntSource[0x4];
        [FieldOffset(0x1808)] public fixed byte m_flMaxLength[0x4];
        [FieldOffset(0x180C)] public fixed byte m_flMinLength[0x4];
        [FieldOffset(0x1810)] public fixed byte m_bIgnoreDT[0x4];
        [FieldOffset(0x1814)] public fixed byte m_flConstrainRadiusToLengthRatio[0x4];
        [FieldOffset(0x1818)] public fixed byte m_flLengthScale[0x4];
        [FieldOffset(0x181C)] public fixed byte m_flLengthFadeInTime[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xFA0)]
    public unsafe struct C_OP_DistanceToTransform {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldOutput[0x8];
        [FieldOffset(0x1E8)] public fixed byte m_flInputMin[0x178];
        [FieldOffset(0x360)] public fixed byte m_flInputMax[0x178];
        [FieldOffset(0x4D8)] public fixed byte m_flOutputMin[0x178];
        [FieldOffset(0x650)] public fixed byte m_flOutputMax[0x178];
        [FieldOffset(0x7C8)] public fixed byte m_TransformStart[0x68];
        [FieldOffset(0x830)] public fixed byte m_bLOS[0x1];
        [FieldOffset(0x831)] public fixed byte m_CollisionGroupName[0x83];
        [FieldOffset(0x8B4)] public fixed byte m_nTraceSet[0x4];
        [FieldOffset(0x8B8)] public fixed byte m_flMaxTraceLength[0x4];
        [FieldOffset(0x8BC)] public fixed byte m_flLOSScale[0x4];
        [FieldOffset(0x8C0)] public fixed byte m_nSetMethod[0x4];
        [FieldOffset(0x8C4)] public fixed byte m_bActiveRange[0x1];
        [FieldOffset(0x8C5)] public fixed byte m_bAdditive[0x3];
        [FieldOffset(0x8C8)] public fixed byte m_vecComponentScale[0x6D8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F0)]
    public unsafe struct C_OP_RemapControlPointOrientationToRotation {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nCP[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flOffsetRot[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nComponent[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_SetControlPointToCenter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nCP1[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_vecCP1Pos[0xC];
        [FieldOffset(0x1F8)] public fixed byte m_bUseAvgParticlePos[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_nSetParent[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4F0)]
    public unsafe struct C_OP_RemapAverageScalarValuetoCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nExpression[0x8];
        [FieldOffset(0x1F0)] public fixed byte m_flDecimalPlaces[0x178];
        [FieldOffset(0x368)] public fixed byte m_nOutControlPointNumber[0x4];
        [FieldOffset(0x36C)] public fixed byte m_nOutVectorField[0x4];
        [FieldOffset(0x370)] public fixed byte m_nField[0x8];
        [FieldOffset(0x378)] public fixed byte m_flOutputRemap[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_RemapDotProductToScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nInputCP1[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nInputCP2[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flInputMin[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flInputMax[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flOutputMin[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_flOutputMax[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_bUseParticleVelocity[0x4];
        [FieldOffset(0x200)] public fixed byte m_nSetMethod[0x4];
        [FieldOffset(0x204)] public fixed byte m_bActiveRange[0x1];
        [FieldOffset(0x205)] public fixed byte m_bUseParticleNormal[0x3];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_OP_RemapCPtoCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nInputControlPoint[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nOutputControlPoint[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nInputField[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_nOutputField[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_flInputMin[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_flInputMax[0x4];
        [FieldOffset(0x200)] public fixed byte m_flOutputMin[0x4];
        [FieldOffset(0x204)] public fixed byte m_flOutputMax[0x4];
        [FieldOffset(0x208)] public fixed byte m_bDerivative[0x4];
        [FieldOffset(0x20C)] public fixed byte m_flInterpRate[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA40)]
    public unsafe struct C_OP_SetControlPointRotation {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_vecRotAxis[0x6D8];
        [FieldOffset(0x8C0)] public fixed byte m_flRotRate[0x178];
        [FieldOffset(0xA38)] public fixed byte m_nCP[0x4];
        [FieldOffset(0xA3C)] public fixed byte m_nLocalCP[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2048)]
    public unsafe struct C_OP_CurlNoiseForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F0];
        [FieldOffset(0x1F0)] public fixed byte m_nNoiseType[0x8];
        [FieldOffset(0x1F8)] public fixed byte m_vecNoiseFreq[0x6D8];
        [FieldOffset(0x8D0)] public fixed byte m_vecNoiseScale[0x6D8];
        [FieldOffset(0xFA8)] public fixed byte m_vecOffset[0x6D8];
        [FieldOffset(0x1680)] public fixed byte m_vecOffsetRate[0x6D8];
        [FieldOffset(0x1D58)] public fixed byte m_flWorleySeed[0x178];
        [FieldOffset(0x1ED0)] public fixed byte m_flWorleyJitter[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct C_INIT_Orient2DRelToCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nCP[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flRotOffset[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x360)]
    public unsafe struct C_OP_SetSimulationRate {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_flSimulationScale[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F0)]
    public unsafe struct C_OP_FadeIn {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flFadeInTimeMin[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flFadeInTimeMax[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flFadeInTimeExp[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_bProportional[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x258)]
    public unsafe struct C_OP_RenderScreenShake {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_flDurationScale[0x4];
        [FieldOffset(0x234)] public fixed byte m_flRadiusScale[0x4];
        [FieldOffset(0x238)] public fixed byte m_flFrequencyScale[0x4];
        [FieldOffset(0x23C)] public fixed byte m_flAmplitudeScale[0x4];
        [FieldOffset(0x240)] public fixed byte m_nRadiusField[0x4];
        [FieldOffset(0x244)] public fixed byte m_nDurationField[0x4];
        [FieldOffset(0x248)] public fixed byte m_nFrequencyField[0x4];
        [FieldOffset(0x24C)] public fixed byte m_nAmplitudeField[0x4];
        [FieldOffset(0x250)] public fixed byte m_nFilterCP[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_RemapBoundingVolumetoCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nOutControlPointNumber[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flInputMin[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flInputMax[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flOutputMin[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_flOutputMax[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_HSVShiftToCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nColorCP[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nColorGemEnableCP[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nOutputCP[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_DefaultHSVColor[0x14];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xF90)]
    public unsafe struct C_OP_RemapVectorToRotations {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_vecInput[0x6D8];
        [FieldOffset(0x8B8)] public fixed byte m_vecRotation[0x6D8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct C_INIT_GlobalScale {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_flScale[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nScaleControlPointNumber[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_bScaleRadius[0x1];
        [FieldOffset(0x1F5)] public fixed byte m_bScalePosition[0x1];
        [FieldOffset(0x1F6)] public fixed byte m_bScaleVelocity[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F0)]
    public unsafe struct C_INIT_RadiusFromCPObject {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nControlPoint[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x278)]
    public unsafe struct C_INIT_InitialVelocityFromHitbox {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_flVelocityMin[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flVelocityMax[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_HitboxSetName[0x80];
        [FieldOffset(0x274)] public fixed byte m_bUseBones[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_LerpVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_vecOutput[0xC];
        [FieldOffset(0x1F0)] public fixed byte m_flStartTime[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flEndTime[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_nSetMethod[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct C_OP_SetControlPointFieldToWater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nSourceCP[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nDestCP[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nCPField[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC18)]
    public unsafe struct TextureGroup_t {
        [FieldOffset(0x0)] public fixed byte m_bEnabled[0x1];
        [FieldOffset(0x1)] public fixed byte m_bReplaceTextureWithGradient[0x7];
        [FieldOffset(0x8)] public fixed byte m_hTexture[0x8];
        [FieldOffset(0x10)] public fixed byte m_Gradient[0x18];
        [FieldOffset(0x28)] public fixed byte m_nTextureType[0x4];
        [FieldOffset(0x2C)] public fixed byte m_nTextureChannels[0x4];
        [FieldOffset(0x30)] public fixed byte m_nTextureBlendMode[0x8];
        [FieldOffset(0x38)] public fixed byte m_flTextureBlend[0x178];
        [FieldOffset(0x1B0)] public fixed byte m_TextureControls[0xA68];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_OP_TimeVaryingForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F0];
        [FieldOffset(0x1F0)] public fixed byte m_flStartLerpTime[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_StartingForce[0xC];
        [FieldOffset(0x200)] public fixed byte m_flEndLerpTime[0x4];
        [FieldOffset(0x204)] public fixed byte m_EndingForce[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x290)]
    public unsafe struct C_OP_SetCPOrientationToGroundNormal {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flInterpRate[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flMaxTraceLength[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flTolerance[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flTraceOffset[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_CollisionGroupName[0x80];
        [FieldOffset(0x270)] public fixed byte m_nTraceSet[0x4];
        [FieldOffset(0x274)] public fixed byte m_nInputCP[0x4];
        [FieldOffset(0x278)] public fixed byte m_nOutputCP[0x10];
        [FieldOffset(0x288)] public fixed byte m_bIncludeWater[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct C_OP_SnapshotSkinToBones {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_bTransformNormals[0x1];
        [FieldOffset(0x1E1)] public fixed byte m_bTransformRadii[0x3];
        [FieldOffset(0x1E4)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flLifeTimeFadeStart[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flLifeTimeFadeEnd[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flJumpThreshold[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flPrevPosScale[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1CD8)]
    public unsafe struct C_INIT_CreateWithinSphereTransform {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_fRadiusMin[0x178];
        [FieldOffset(0x360)] public fixed byte m_fRadiusMax[0x178];
        [FieldOffset(0x4D8)] public fixed byte m_vecDistanceBias[0x6D8];
        [FieldOffset(0xBB0)] public fixed byte m_vecDistanceBiasAbs[0x10];
        [FieldOffset(0xBC0)] public fixed byte m_TransformInput[0x68];
        [FieldOffset(0xC28)] public fixed byte m_fSpeedMin[0x178];
        [FieldOffset(0xDA0)] public fixed byte m_fSpeedMax[0x178];
        [FieldOffset(0xF18)] public fixed byte m_fSpeedRandExp[0x4];
        [FieldOffset(0xF1C)] public fixed byte m_bLocalCoords[0x4];
        [FieldOffset(0xF20)] public fixed byte m_LocalCoordinateSystemSpeedMin[0x6D8];
        [FieldOffset(0x15F8)] public fixed byte m_LocalCoordinateSystemSpeedMax[0x6D8];
        [FieldOffset(0x1CD0)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1CD4)] public fixed byte m_nFieldVelocity[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1E8)]
    public unsafe struct C_OP_RadiusDecay {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flMinRadius[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_INIT_RemapNamedModelBodyPartToScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_INIT_RemapScalarToVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nFieldInput[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flInputMin[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flInputMax[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_vecOutputMin[0xC];
        [FieldOffset(0x204)] public fixed byte m_vecOutputMax[0xC];
        [FieldOffset(0x210)] public fixed byte m_flStartTime[0x4];
        [FieldOffset(0x214)] public fixed byte m_flEndTime[0x4];
        [FieldOffset(0x218)] public fixed byte m_nSetMethod[0x4];
        [FieldOffset(0x21C)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0x220)] public fixed byte m_bLocalCoords[0x4];
        [FieldOffset(0x224)] public fixed byte m_flRemapBias[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_INIT_InitialSequenceFromModel {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nFieldOutputAnim[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flInputMin[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_flInputMax[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_flOutputMin[0x4];
        [FieldOffset(0x200)] public fixed byte m_flOutputMax[0x4];
        [FieldOffset(0x204)] public fixed byte m_nSetMethod[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x228)]
    public unsafe struct C_OP_NoiseEmitter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_flEmissionDuration[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flStartTime[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flEmissionScale[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_nScaleControlPoint[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_nScaleControlPointField[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_nWorldNoisePoint[0x4];
        [FieldOffset(0x200)] public fixed byte m_bAbsVal[0x1];
        [FieldOffset(0x201)] public fixed byte m_bAbsValInv[0x3];
        [FieldOffset(0x204)] public fixed byte m_flOffset[0x4];
        [FieldOffset(0x208)] public fixed byte m_flOutputMin[0x4];
        [FieldOffset(0x20C)] public fixed byte m_flOutputMax[0x4];
        [FieldOffset(0x210)] public fixed byte m_flNoiseScale[0x4];
        [FieldOffset(0x214)] public fixed byte m_flWorldNoiseScale[0x4];
        [FieldOffset(0x218)] public fixed byte m_vecOffsetLoc[0xC];
        [FieldOffset(0x224)] public fixed byte m_flWorldTimeScale[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1E8)]
    public unsafe struct CParticleFunctionInitializer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nAssociatedEmitterIndex[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x658)]
    public unsafe struct C_OP_SelectivelyEnableChildren {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nChildGroupID[0x178];
        [FieldOffset(0x360)] public fixed byte m_nFirstChild[0x178];
        [FieldOffset(0x4D8)] public fixed byte m_nNumChildrenToEnable[0x178];
        [FieldOffset(0x650)] public fixed byte m_bPlayEndcapOnStop[0x1];
        [FieldOffset(0x651)] public fixed byte m_bDestroyImmediately[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct ModelReference_t {
        [FieldOffset(0x0)] public fixed byte m_model[0x8];
        [FieldOffset(0x8)] public fixed byte m_flRelativeProbabilityOfSpawn[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4F8)]
    public unsafe struct C_OP_PlanarConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_PointOnPlane[0xC];
        [FieldOffset(0x1EC)] public fixed byte m_PlaneNormal[0xC];
        [FieldOffset(0x1F8)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_bGlobalOrigin[0x1];
        [FieldOffset(0x1FD)] public fixed byte m_bGlobalNormal[0x3];
        [FieldOffset(0x200)] public fixed byte m_flRadiusScale[0x178];
        [FieldOffset(0x378)] public fixed byte m_flMaximumDistanceToCP[0x178];
        [FieldOffset(0x4F0)] public fixed byte m_bUseOldCode[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x370)]
    public unsafe struct C_INIT_CreateFromCPs {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nIncrement[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nMinCP[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nMaxCP[0x8];
        [FieldOffset(0x1F8)] public fixed byte m_nDynamicCPCount[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct C_OP_LockPoints {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nMinCol[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nMaxCol[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_nMinRow[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nMaxRow[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nControlPoint[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flBlendValue[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x838)]
    public unsafe struct C_INIT_CreateSpiralSphere {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_TransformInput[0x68];
        [FieldOffset(0x250)] public fixed byte m_flDensity[0x178];
        [FieldOffset(0x3C8)] public fixed byte m_flInitialRadius[0x178];
        [FieldOffset(0x540)] public fixed byte m_flInitialSpeedMin[0x178];
        [FieldOffset(0x6B8)] public fixed byte m_flInitialSpeedMax[0x178];
        [FieldOffset(0x830)] public fixed byte m_bUseParticleCount[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x370)]
    public unsafe struct C_OP_CPVelocityForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F0];
        [FieldOffset(0x1F0)] public fixed byte m_nControlPointNumber[0x8];
        [FieldOffset(0x1F8)] public fixed byte m_flScale[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x240)]
    public unsafe struct C_OP_RemapNamedModelElementEndCap {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_hModel[0x8];
        [FieldOffset(0x1E8)] public fixed byte m_inNames[0x18];
        [FieldOffset(0x200)] public fixed byte m_outNames[0x18];
        [FieldOffset(0x218)] public fixed byte m_fallbackNames[0x18];
        [FieldOffset(0x230)] public fixed byte m_bModelFromRenderer[0x4];
        [FieldOffset(0x234)] public fixed byte m_nFieldInput[0x4];
        [FieldOffset(0x238)] public fixed byte m_nFieldOutput[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8C0)]
    public unsafe struct C_INIT_ScaleVelocity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_vecScale[0x6D8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4B8)]
    public unsafe struct C_OP_MoveToHitbox {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_modelInput[0x60];
        [FieldOffset(0x240)] public fixed byte m_transformInput[0x6C];
        [FieldOffset(0x2AC)] public fixed byte m_flLifeTimeLerpStart[0x4];
        [FieldOffset(0x2B0)] public fixed byte m_flLifeTimeLerpEnd[0x4];
        [FieldOffset(0x2B4)] public fixed byte m_flPrevPosScale[0x4];
        [FieldOffset(0x2B8)] public fixed byte m_HitboxSetName[0x80];
        [FieldOffset(0x338)] public fixed byte m_bUseBones[0x4];
        [FieldOffset(0x33C)] public fixed byte m_nLerpType[0x4];
        [FieldOffset(0x340)] public fixed byte m_flInterpolation[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4D8)]
    public unsafe struct C_OP_PinRopeSegmentParticleToParent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nParticleSelection[0x8];
        [FieldOffset(0x1E8)] public fixed byte m_nParticleNumber[0x178];
        [FieldOffset(0x360)] public fixed byte m_flInterpolation[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_INIT_PointList {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nFieldOutput[0x8];
        [FieldOffset(0x1F0)] public fixed byte m_pointList[0x18];
        [FieldOffset(0x208)] public fixed byte m_bPlaceAlongPath[0x1];
        [FieldOffset(0x209)] public fixed byte m_bClosedLoop[0x3];
        [FieldOffset(0x20C)] public fixed byte m_nNumPointsAlongPath[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x390)]
    public unsafe struct C_OP_LerpToOtherAttribute {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flInterpolation[0x178];
        [FieldOffset(0x358)] public fixed byte m_nFieldInputFrom[0x4];
        [FieldOffset(0x35C)] public fixed byte m_nFieldInput[0x4];
        [FieldOffset(0x360)] public fixed byte m_nFieldOutput[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_INIT_RandomColor {
        [FieldOffset(0x0)] public fixed byte pad_0[0x204];
        [FieldOffset(0x204)] public fixed byte m_ColorMin[0x4];
        [FieldOffset(0x208)] public fixed byte m_ColorMax[0x4];
        [FieldOffset(0x20C)] public fixed byte m_TintMin[0x4];
        [FieldOffset(0x210)] public fixed byte m_TintMax[0x4];
        [FieldOffset(0x214)] public fixed byte m_flTintPerc[0x4];
        [FieldOffset(0x218)] public fixed byte m_flUpdateThreshold[0x4];
        [FieldOffset(0x21C)] public fixed byte m_nTintCP[0x4];
        [FieldOffset(0x220)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x224)] public fixed byte m_nTintBlendMode[0x4];
        [FieldOffset(0x228)] public fixed byte m_flLightAmplification[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x370)]
    public unsafe struct C_OP_SetGravityToCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nCPInput[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nCPOutput[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flScale[0x178];
        [FieldOffset(0x368)] public fixed byte m_bSetPosition[0x1];
        [FieldOffset(0x369)] public fixed byte m_bSetOrientation[0x1];
        [FieldOffset(0x36A)] public fixed byte m_bSetZDown[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x218)]
    public unsafe struct C_INIT_RemapParticleCountToScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nInputMin[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nInputMax[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_nScaleControlPoint[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_nScaleControlPointField[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_flOutputMin[0x4];
        [FieldOffset(0x200)] public fixed byte m_flOutputMax[0x4];
        [FieldOffset(0x204)] public fixed byte m_nSetMethod[0x4];
        [FieldOffset(0x208)] public fixed byte m_bActiveRange[0x1];
        [FieldOffset(0x209)] public fixed byte m_bInvert[0x1];
        [FieldOffset(0x20A)] public fixed byte m_bWrap[0x2];
        [FieldOffset(0x20C)] public fixed byte m_flRemapBias[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_INIT_InheritFromParentParticles {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_flScale[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nIncrement[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_bRandomDistribution[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_nRandomSeed[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x220)]
    public unsafe struct C_OP_RampScalarLinearSimple {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_Rate[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flStartTime[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flEndTime[0x28];
        [FieldOffset(0x210)] public fixed byte m_nField[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_INIT_ChaoticAttractor {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_flAParm[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flBParm[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flCParm[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flDParm[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_flScale[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_flSpeedMin[0x4];
        [FieldOffset(0x200)] public fixed byte m_flSpeedMax[0x4];
        [FieldOffset(0x204)] public fixed byte m_nBaseCP[0x4];
        [FieldOffset(0x208)] public fixed byte m_bUniformSpeed[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct C_OP_MovementRigidAttachToCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nScaleControlPoint[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_nScaleCPField[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nFieldInput[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_bOffsetLocal[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x240)]
    public unsafe struct C_OP_RenderFlattenGrass {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_flFlattenStrength[0x4];
        [FieldOffset(0x234)] public fixed byte m_nStrengthFieldOverride[0x4];
        [FieldOffset(0x238)] public fixed byte m_flRadiusScale[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2038)]
    public unsafe struct C_OP_RenderLightBeam {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_nMaxAllowed[0x8];
        [FieldOffset(0x238)] public fixed byte m_vColorBlend[0x6D8];
        [FieldOffset(0x910)] public fixed byte m_nColorBlendType[0x8];
        [FieldOffset(0x918)] public fixed byte m_strLightStyle[0x8];
        [FieldOffset(0x920)] public fixed byte m_flLightStyleTime[0x178];
        [FieldOffset(0xA98)] public fixed byte m_flBrightnessLumensPerMeter[0x178];
        [FieldOffset(0xC10)] public fixed byte m_flNumberOfLightsToCreate[0x178];
        [FieldOffset(0xD88)] public fixed byte m_bCastShadows[0x1];
        [FieldOffset(0xD89)] public fixed byte m_bDynamicBounce[0x7];
        [FieldOffset(0xD90)] public fixed byte m_flBounceScale[0x178];
        [FieldOffset(0xF08)] public fixed byte m_flSkirt[0x178];
        [FieldOffset(0x1080)] public fixed byte m_flRange[0x178];
        [FieldOffset(0x11F8)] public fixed byte m_flThickness[0x178];
        [FieldOffset(0x1370)] public fixed byte m_flInnerConeAngle[0x178];
        [FieldOffset(0x14E8)] public fixed byte m_flOuterConeAngle[0x178];
        [FieldOffset(0x1660)] public fixed byte m_vecConeRotationOffset[0x6D8];
        [FieldOffset(0x1D38)] public fixed byte m_nFogLightingMode[0x8];
        [FieldOffset(0x1D40)] public fixed byte m_flFogContribution[0x178];
        [FieldOffset(0x1EB8)] public fixed byte m_flRenderFilter[0x178];
        [FieldOffset(0x2030)] public fixed byte m_bDebugOrientation[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8C8)]
    public unsafe struct C_INIT_SkyVisCull {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_vecTestDir[0x6D8];
        [FieldOffset(0x8C0)] public fixed byte m_nTraceSet[0x4];
        [FieldOffset(0x8C4)] public fixed byte m_bCullOnSky[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x370)]
    public unsafe struct C_OP_EnableChildrenFromParentParticleCount {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nChildGroupID[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nFirstChild[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nNumChildrenToEnable[0x178];
        [FieldOffset(0x368)] public fixed byte m_bDisableChildren[0x1];
        [FieldOffset(0x369)] public fixed byte m_bPlayEndcapOnStop[0x1];
        [FieldOffset(0x36A)] public fixed byte m_bDestroyImmediately[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x9F8)]
    public unsafe struct C_INIT_DistanceToCPInit {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nFieldOutput[0x8];
        [FieldOffset(0x1F0)] public fixed byte m_flInputMin[0x178];
        [FieldOffset(0x368)] public fixed byte m_flInputMax[0x178];
        [FieldOffset(0x4E0)] public fixed byte m_flOutputMin[0x178];
        [FieldOffset(0x658)] public fixed byte m_flOutputMax[0x178];
        [FieldOffset(0x7D0)] public fixed byte m_nStartCP[0x4];
        [FieldOffset(0x7D4)] public fixed byte m_bLOS[0x1];
        [FieldOffset(0x7D5)] public fixed byte m_CollisionGroupName[0x83];
        [FieldOffset(0x858)] public fixed byte m_nTraceSet[0x8];
        [FieldOffset(0x860)] public fixed byte m_flMaxTraceLength[0x178];
        [FieldOffset(0x9D8)] public fixed byte m_flLOSScale[0x4];
        [FieldOffset(0x9DC)] public fixed byte m_nSetMethod[0x4];
        [FieldOffset(0x9E0)] public fixed byte m_bActiveRange[0x4];
        [FieldOffset(0x9E4)] public fixed byte m_vecDistanceScale[0xC];
        [FieldOffset(0x9F0)] public fixed byte m_flRemapBias[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1E0)]
    public unsafe struct C_OP_EndCapDecay {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x228)]
    public unsafe struct C_OP_ForceBasedOnDistanceToPlane {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F0];
        [FieldOffset(0x1F0)] public fixed byte m_flMinDist[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_vecForceAtMinDist[0xC];
        [FieldOffset(0x200)] public fixed byte m_flMaxDist[0x4];
        [FieldOffset(0x204)] public fixed byte m_vecForceAtMaxDist[0xC];
        [FieldOffset(0x210)] public fixed byte m_vecPlaneNormal[0xC];
        [FieldOffset(0x21C)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0x220)] public fixed byte m_flExponent[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_OP_RemapDensityToVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flRadiusScale[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flDensityMin[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flDensityMax[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_vecOutputMin[0xC];
        [FieldOffset(0x1FC)] public fixed byte m_vecOutputMax[0xC];
        [FieldOffset(0x208)] public fixed byte m_bUseParentDensity[0x4];
        [FieldOffset(0x20C)] public fixed byte m_nVoxelGridResolution[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct ParticleControlPointConfiguration_t {
        [FieldOffset(0x0)] public fixed byte m_name[0x8];
        [FieldOffset(0x8)] public fixed byte m_drivers[0x18];
        [FieldOffset(0x20)] public fixed byte m_previewState[0x70];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct C_INIT_SetRigidAttachment {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nFieldInput[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_bLocalSpace[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct MaterialVariable_t {
        [FieldOffset(0x0)] public fixed byte m_strVariable[0x8];
        [FieldOffset(0x8)] public fixed byte m_nVariableField[0x4];
        [FieldOffset(0xC)] public fixed byte m_flScale[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1E0)]
    public unsafe struct CParticleFunctionConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_RemapSpeed {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flInputMin[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flInputMax[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flOutputMin[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flOutputMax[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_nSetMethod[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_bIgnoreDelta[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2EE8)]
    public unsafe struct C_OP_RenderModels {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_bOnlyRenderInEffectsBloomPass[0x1];
        [FieldOffset(0x231)] public fixed byte m_bOnlyRenderInEffectsWaterPass[0x1];
        [FieldOffset(0x232)] public fixed byte m_bUseMixedResolutionRendering[0x1];
        [FieldOffset(0x233)] public fixed byte m_bOnlyRenderInEffecsGameOverlay[0x5];
        [FieldOffset(0x238)] public fixed byte m_ModelList[0x18];
        [FieldOffset(0x250)] public fixed byte m_nBodyGroupField[0x4];
        [FieldOffset(0x254)] public fixed byte m_nSubModelField[0x4];
        [FieldOffset(0x258)] public fixed byte m_bIgnoreNormal[0x1];
        [FieldOffset(0x259)] public fixed byte m_bOrientZ[0x1];
        [FieldOffset(0x25A)] public fixed byte m_bCenterOffset[0x6];
        [FieldOffset(0x260)] public fixed byte m_vecLocalOffset[0x6D8];
        [FieldOffset(0x938)] public fixed byte m_vecLocalRotation[0x6D8];
        [FieldOffset(0x1010)] public fixed byte m_bIgnoreRadius[0x4];
        [FieldOffset(0x1014)] public fixed byte m_nModelScaleCP[0x4];
        [FieldOffset(0x1018)] public fixed byte m_vecComponentScale[0x6D8];
        [FieldOffset(0x16F0)] public fixed byte m_bLocalScale[0x4];
        [FieldOffset(0x16F4)] public fixed byte m_nSizeCullBloat[0x4];
        [FieldOffset(0x16F8)] public fixed byte m_bAnimated[0x8];
        [FieldOffset(0x1700)] public fixed byte m_flAnimationRate[0x178];
        [FieldOffset(0x1878)] public fixed byte m_bScaleAnimationRate[0x1];
        [FieldOffset(0x1879)] public fixed byte m_bForceLoopingAnimation[0x1];
        [FieldOffset(0x187A)] public fixed byte m_bResetAnimOnStop[0x1];
        [FieldOffset(0x187B)] public fixed byte m_bManualAnimFrame[0x1];
        [FieldOffset(0x187C)] public fixed byte m_nAnimationScaleField[0x4];
        [FieldOffset(0x1880)] public fixed byte m_nAnimationField[0x4];
        [FieldOffset(0x1884)] public fixed byte m_nManualFrameField[0x4];
        [FieldOffset(0x1888)] public fixed byte m_ActivityName[0x100];
        [FieldOffset(0x1988)] public fixed byte m_SequenceName[0x100];
        [FieldOffset(0x1A88)] public fixed byte m_bEnableClothSimulation[0x1];
        [FieldOffset(0x1A89)] public fixed byte m_bDisableClothGroundCollision[0x1];
        [FieldOffset(0x1A8A)] public fixed byte m_ClothEffectName[0x46];
        [FieldOffset(0x1AD0)] public fixed byte m_hOverrideMaterial[0x8];
        [FieldOffset(0x1AD8)] public fixed byte m_bOverrideTranslucentMaterials[0x8];
        [FieldOffset(0x1AE0)] public fixed byte m_nSkin[0x178];
        [FieldOffset(0x1C58)] public fixed byte m_MaterialVars[0x18];
        [FieldOffset(0x1C70)] public fixed byte m_flRenderFilter[0x178];
        [FieldOffset(0x1DE8)] public fixed byte m_flManualModelSelection[0x178];
        [FieldOffset(0x1F60)] public fixed byte m_modelInput[0x60];
        [FieldOffset(0x1FC0)] public fixed byte m_nLOD[0x4];
        [FieldOffset(0x1FC4)] public fixed byte m_EconSlotName[0x100];
        [FieldOffset(0x20C4)] public fixed byte m_bOriginalModel[0x1];
        [FieldOffset(0x20C5)] public fixed byte m_bSuppressTint[0x3];
        [FieldOffset(0x20C8)] public fixed byte m_nSubModelFieldType[0x4];
        [FieldOffset(0x20CC)] public fixed byte m_bDisableShadows[0x1];
        [FieldOffset(0x20CD)] public fixed byte m_bDisableDepthPrepass[0x1];
        [FieldOffset(0x20CE)] public fixed byte m_bAcceptsDecals[0x1];
        [FieldOffset(0x20CF)] public fixed byte m_bForceDrawInterlevedWithSiblings[0x1];
        [FieldOffset(0x20D0)] public fixed byte m_bDoNotDrawInParticlePass[0x1];
        [FieldOffset(0x20D1)] public fixed byte m_bAllowApproximateTransforms[0x1];
        [FieldOffset(0x20D2)] public fixed byte m_szRenderAttribute[0x106];
        [FieldOffset(0x21D8)] public fixed byte m_flRadiusScale[0x178];
        [FieldOffset(0x2350)] public fixed byte m_flAlphaScale[0x178];
        [FieldOffset(0x24C8)] public fixed byte m_flRollScale[0x178];
        [FieldOffset(0x2640)] public fixed byte m_nAlpha2Field[0x8];
        [FieldOffset(0x2648)] public fixed byte m_vecColorScale[0x6D8];
        [FieldOffset(0x2D20)] public fixed byte m_nColorBlendType[0x8];
        [FieldOffset(0x2D28)] public fixed byte m_strLightStyle[0x8];
        [FieldOffset(0x2D30)] public fixed byte m_flLightStyleTime[0x1B8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x528)]
    public unsafe struct C_OP_RenderClientPhysicsImpulse {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_flRadius[0x178];
        [FieldOffset(0x3A8)] public fixed byte m_flMagnitude[0x178];
        [FieldOffset(0x520)] public fixed byte m_nSimIdFilter[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1E8)]
    public unsafe struct CParticleFunctionEmitter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nEmitterIndex[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_INIT_RemapNamedModelMeshGroupToScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F0)]
    public unsafe struct C_OP_SetControlPointOrientationToCPVelocity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nCPInput[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nCPOutput[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x7C8)]
    public unsafe struct C_OP_RopeSpringConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flRestLength[0x178];
        [FieldOffset(0x358)] public fixed byte m_flMinDistance[0x178];
        [FieldOffset(0x4D0)] public fixed byte m_flMaxDistance[0x178];
        [FieldOffset(0x648)] public fixed byte m_flAdjustmentScale[0x8];
        [FieldOffset(0x650)] public fixed byte m_flInitialRestingLength[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x388)]
    public unsafe struct C_INIT_PositionWarpScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_vecWarpMin[0xC];
        [FieldOffset(0x1F4)] public fixed byte m_vecWarpMax[0xC];
        [FieldOffset(0x200)] public fixed byte m_InputValue[0x178];
        [FieldOffset(0x378)] public fixed byte m_flPrevPosScale[0x4];
        [FieldOffset(0x37C)] public fixed byte m_nScaleControlPointNumber[0x4];
        [FieldOffset(0x380)] public fixed byte m_nControlPointNumber[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F0)]
    public unsafe struct C_OP_ForceControlPointStub {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_ControlPoint[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_VectorNoise {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_vecOutputMin[0xC];
        [FieldOffset(0x1F0)] public fixed byte m_vecOutputMax[0xC];
        [FieldOffset(0x1FC)] public fixed byte m_fl4NoiseScale[0x4];
        [FieldOffset(0x200)] public fixed byte m_bAdditive[0x1];
        [FieldOffset(0x201)] public fixed byte m_bOffset[0x3];
        [FieldOffset(0x204)] public fixed byte m_flNoiseAnimationTimeScale[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x7D0)]
    public unsafe struct C_OP_RemapParticleCountToScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldOutput[0x8];
        [FieldOffset(0x1E8)] public fixed byte m_nInputMin[0x178];
        [FieldOffset(0x360)] public fixed byte m_nInputMax[0x178];
        [FieldOffset(0x4D8)] public fixed byte m_flOutputMin[0x178];
        [FieldOffset(0x650)] public fixed byte m_flOutputMax[0x178];
        [FieldOffset(0x7C8)] public fixed byte m_bActiveRange[0x4];
        [FieldOffset(0x7CC)] public fixed byte m_nSetMethod[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x368)]
    public unsafe struct C_INIT_QuantizeFloat {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_InputValue[0x178];
        [FieldOffset(0x360)] public fixed byte m_nOutputField[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_OP_RemapModelVolumetoCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nBBoxType[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nInControlPointNumber[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nOutControlPointNumber[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_nOutControlPointMaxNumber[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_nField[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_flInputMin[0x4];
        [FieldOffset(0x200)] public fixed byte m_flInputMax[0x4];
        [FieldOffset(0x204)] public fixed byte m_flOutputMin[0x4];
        [FieldOffset(0x208)] public fixed byte m_flOutputMax[0x4];
        [FieldOffset(0x20C)] public fixed byte m_bBBoxOnly[0x1];
        [FieldOffset(0x20D)] public fixed byte m_bCubeRoot[0x3];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct C_OP_SetToCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_vecOffset[0xC];
        [FieldOffset(0x1F0)] public fixed byte m_bOffsetLocal[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct ParticleControlPointDriver_t {
        [FieldOffset(0x0)] public fixed byte m_iControlPoint[0x10];
        [FieldOffset(0x10)] public fixed byte m_iAttachType[0x8];
        [FieldOffset(0x18)] public fixed byte m_attachmentName[0x8];
        [FieldOffset(0x20)] public fixed byte m_vecOffset[0xC];
        [FieldOffset(0x2C)] public fixed byte m_angOffset[0xC];
        [FieldOffset(0x38)] public fixed byte m_entityName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_ParentVortices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F0];
        [FieldOffset(0x1F0)] public fixed byte m_flForceScale[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_vecTwistAxis[0xC];
        [FieldOffset(0x200)] public fixed byte m_bFlipBasedOnYaw[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8D8)]
    public unsafe struct C_OP_SetControlPointToCPVelocity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nCPInput[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nCPOutputVel[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_bNormalize[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_nCPOutputMag[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_nCPField[0x8];
        [FieldOffset(0x200)] public fixed byte m_vecComparisonVelocity[0x6D8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x558)]
    public unsafe struct C_OP_ClientPhysics {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_strPhysicsType[0x8];
        [FieldOffset(0x238)] public fixed byte m_bStartAsleep[0x8];
        [FieldOffset(0x240)] public fixed byte m_flPlayerWakeRadius[0x178];
        [FieldOffset(0x3B8)] public fixed byte m_flVehicleWakeRadius[0x178];
        [FieldOffset(0x530)] public fixed byte m_bUseHighQualitySimulation[0x4];
        [FieldOffset(0x534)] public fixed byte m_nMaxParticleCount[0x4];
        [FieldOffset(0x538)] public fixed byte m_bRespectExclusionVolumes[0x1];
        [FieldOffset(0x539)] public fixed byte m_bKillParticles[0x1];
        [FieldOffset(0x53A)] public fixed byte m_bDeleteSim[0x2];
        [FieldOffset(0x53C)] public fixed byte m_nControlPoint[0x4];
        [FieldOffset(0x540)] public fixed byte m_nForcedSimId[0x4];
        [FieldOffset(0x544)] public fixed byte m_nColorBlendType[0x4];
        [FieldOffset(0x548)] public fixed byte m_nForcedStatusEffects[0x4];
        [FieldOffset(0x54C)] public fixed byte m_nNoCollisionAttribute[0x4];
        [FieldOffset(0x550)] public fixed byte m_nZeroGravityAttribute[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct C_OP_SpinYaw {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct PointDefinitionWithTimeValues_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x14];
        [FieldOffset(0x14)] public fixed byte m_flTimeDuration[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct RenderProjectedMaterial_t {
        [FieldOffset(0x0)] public fixed byte m_hMaterial[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1120)]
    public unsafe struct C_INIT_SetFloatAttributeToVectorExpression {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nExpression[0x8];
        [FieldOffset(0x1F0)] public fixed byte m_vInput1[0x6D8];
        [FieldOffset(0x8C8)] public fixed byte m_vInput2[0x6D8];
        [FieldOffset(0xFA0)] public fixed byte m_flOutputRemap[0x178];
        [FieldOffset(0x1118)] public fixed byte m_nOutputField[0x4];
        [FieldOffset(0x111C)] public fixed byte m_nSetMethod[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2050)]
    public unsafe struct C_OP_ExternalWindForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F0];
        [FieldOffset(0x1F0)] public fixed byte m_vecSamplePosition[0x6D8];
        [FieldOffset(0x8C8)] public fixed byte m_vecScale[0x6D8];
        [FieldOffset(0xFA0)] public fixed byte m_bSampleWind[0x1];
        [FieldOffset(0xFA1)] public fixed byte m_bSampleWater[0x1];
        [FieldOffset(0xFA2)] public fixed byte m_bDampenNearWaterPlane[0x1];
        [FieldOffset(0xFA3)] public fixed byte m_bSampleGravity[0x5];
        [FieldOffset(0xFA8)] public fixed byte m_vecGravityForce[0x6D8];
        [FieldOffset(0x1680)] public fixed byte m_bUseBasicMovementGravity[0x8];
        [FieldOffset(0x1688)] public fixed byte m_flLocalGravityScale[0x178];
        [FieldOffset(0x1800)] public fixed byte m_flLocalBuoyancyScale[0x178];
        [FieldOffset(0x1978)] public fixed byte m_vecBuoyancyForce[0x6D8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x270)]
    public unsafe struct C_INIT_ModelCull {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_nControlPointNumber[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_bBoundBox[0x1];
        [FieldOffset(0x1ED)] public fixed byte m_bCullOutside[0x1];
        [FieldOffset(0x1EE)] public fixed byte m_bUseBones[0x1];
        [FieldOffset(0x1EF)] public fixed byte m_HitboxSetName[0x81];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x41C8)]
    public unsafe struct C_OP_RenderSprites {
        [FieldOffset(0x0)] public fixed byte pad_0[0x2ED8];
        [FieldOffset(0x2ED8)] public fixed byte m_nSequenceOverride[0x178];
        [FieldOffset(0x3050)] public fixed byte m_bSequenceNumbersAreRawSequenceIndices[0x4];
        [FieldOffset(0x3054)] public fixed byte m_nOrientationType[0x4];
        [FieldOffset(0x3058)] public fixed byte m_nOrientationControlPoint[0x4];
        [FieldOffset(0x305C)] public fixed byte m_bUseYawWithNormalAligned[0x4];
        [FieldOffset(0x3060)] public fixed byte m_flMinSize[0x178];
        [FieldOffset(0x31D8)] public fixed byte m_flMaxSize[0x178];
        [FieldOffset(0x3350)] public fixed byte m_flSubPixelAAScale[0x178];
        [FieldOffset(0x34C8)] public fixed byte m_flStartFadeSize[0x178];
        [FieldOffset(0x3640)] public fixed byte m_flEndFadeSize[0x178];
        [FieldOffset(0x37B8)] public fixed byte m_flStartFadeDot[0x4];
        [FieldOffset(0x37BC)] public fixed byte m_flEndFadeDot[0x4];
        [FieldOffset(0x37C0)] public fixed byte m_bDistanceAlpha[0x1];
        [FieldOffset(0x37C1)] public fixed byte m_bSoftEdges[0x3];
        [FieldOffset(0x37C4)] public fixed byte m_flEdgeSoftnessStart[0x4];
        [FieldOffset(0x37C8)] public fixed byte m_flEdgeSoftnessEnd[0x4];
        [FieldOffset(0x37CC)] public fixed byte m_bOutline[0x4];
        [FieldOffset(0x37D0)] public fixed byte m_OutlineColor[0x4];
        [FieldOffset(0x37D4)] public fixed byte m_nOutlineAlpha[0x4];
        [FieldOffset(0x37D8)] public fixed byte m_flOutlineStart0[0x4];
        [FieldOffset(0x37DC)] public fixed byte m_flOutlineStart1[0x4];
        [FieldOffset(0x37E0)] public fixed byte m_flOutlineEnd0[0x4];
        [FieldOffset(0x37E4)] public fixed byte m_flOutlineEnd1[0x4];
        [FieldOffset(0x37E8)] public fixed byte m_nLightingMode[0x8];
        [FieldOffset(0x37F0)] public fixed byte m_vecLightingOverride[0x6D8];
        [FieldOffset(0x3EC8)] public fixed byte m_flLightingTessellation[0x178];
        [FieldOffset(0x4040)] public fixed byte m_flLightingDirectionality[0x178];
        [FieldOffset(0x41B8)] public fixed byte m_bParticleShadows[0x4];
        [FieldOffset(0x41BC)] public fixed byte m_flShadowDensity[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2D8)]
    public unsafe struct C_OP_PercentageBetweenTransformLerpCPs {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flInputMin[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flInputMax[0x8];
        [FieldOffset(0x1F0)] public fixed byte m_TransformStart[0x68];
        [FieldOffset(0x258)] public fixed byte m_TransformEnd[0x68];
        [FieldOffset(0x2C0)] public fixed byte m_nOutputStartCP[0x4];
        [FieldOffset(0x2C4)] public fixed byte m_nOutputStartField[0x4];
        [FieldOffset(0x2C8)] public fixed byte m_nOutputEndCP[0x4];
        [FieldOffset(0x2CC)] public fixed byte m_nOutputEndField[0x4];
        [FieldOffset(0x2D0)] public fixed byte m_nSetMethod[0x4];
        [FieldOffset(0x2D4)] public fixed byte m_bActiveRange[0x1];
        [FieldOffset(0x2D5)] public fixed byte m_bRadialCheck[0x3];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4F0)]
    public unsafe struct C_OP_SetPerChildControlPoint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nChildGroupID[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_nFirstControlPoint[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_nNumControlPoints[0x8];
        [FieldOffset(0x1F0)] public fixed byte m_nParticleIncrement[0x178];
        [FieldOffset(0x368)] public fixed byte m_nFirstSourcePoint[0x178];
        [FieldOffset(0x4E0)] public fixed byte m_bSetOrientation[0x4];
        [FieldOffset(0x4E4)] public fixed byte m_nOrientationField[0x4];
        [FieldOffset(0x4E8)] public fixed byte m_bNumBasedOnParticleCount[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x258)]
    public unsafe struct C_OP_RenderTreeShake {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_flPeakStrength[0x4];
        [FieldOffset(0x234)] public fixed byte m_nPeakStrengthFieldOverride[0x4];
        [FieldOffset(0x238)] public fixed byte m_flRadius[0x4];
        [FieldOffset(0x23C)] public fixed byte m_nRadiusFieldOverride[0x4];
        [FieldOffset(0x240)] public fixed byte m_flShakeDuration[0x4];
        [FieldOffset(0x244)] public fixed byte m_flTransitionTime[0x4];
        [FieldOffset(0x248)] public fixed byte m_flTwistAmount[0x4];
        [FieldOffset(0x24C)] public fixed byte m_flRadialAmount[0x4];
        [FieldOffset(0x250)] public fixed byte m_flControlPointOrientationAmount[0x4];
        [FieldOffset(0x254)] public fixed byte m_nControlPointForLinearDirection[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1E0)]
    public unsafe struct C_OP_WorldCollideConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x680)]
    public unsafe struct C_OP_SetAttributeToScalarExpression {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nExpression[0x8];
        [FieldOffset(0x1E8)] public fixed byte m_flInput1[0x178];
        [FieldOffset(0x360)] public fixed byte m_flInput2[0x178];
        [FieldOffset(0x4D8)] public fixed byte m_flOutputRemap[0x178];
        [FieldOffset(0x650)] public fixed byte m_nOutputField[0x4];
        [FieldOffset(0x654)] public fixed byte m_nSetMethod[0x2C];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_CycleScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nDestField[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flStartValue[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flEndValue[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flCycleTime[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_bDoNotRepeatCycle[0x1];
        [FieldOffset(0x1F1)] public fixed byte m_bSynchronizeParticles[0x3];
        [FieldOffset(0x1F4)] public fixed byte m_nCPScale[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_nCPFieldMin[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_nCPFieldMax[0x4];
        [FieldOffset(0x200)] public fixed byte m_nSetMethod[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC40)]
    public unsafe struct C_OP_RenderMaterialProxy {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte m_nMaterialControlPoint[0x4];
        [FieldOffset(0x234)] public fixed byte m_nProxyType[0x4];
        [FieldOffset(0x238)] public fixed byte m_MaterialVars[0x18];
        [FieldOffset(0x250)] public fixed byte m_hOverrideMaterial[0x8];
        [FieldOffset(0x258)] public fixed byte m_flMaterialOverrideEnabled[0x178];
        [FieldOffset(0x3D0)] public fixed byte m_vecColorScale[0x6D8];
        [FieldOffset(0xAA8)] public fixed byte m_flAlpha[0x178];
        [FieldOffset(0xC20)] public fixed byte m_nColorBlendType[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x180)]
    public unsafe struct FloatInputMaterialVariable_t {
        [FieldOffset(0x0)] public fixed byte m_strVariable[0x8];
        [FieldOffset(0x8)] public fixed byte m_flInput[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_OP_RampScalarLinear {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_RateMin[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_RateMax[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flStartTime_min[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_flStartTime_max[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_flEndTime_min[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_flEndTime_max[0x2C];
        [FieldOffset(0x220)] public fixed byte m_nField[0x4];
        [FieldOffset(0x224)] public fixed byte m_bProportionalOp[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x380)]
    public unsafe struct C_OP_RotateVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_vecRotAxisMin[0xC];
        [FieldOffset(0x1F0)] public fixed byte m_vecRotAxisMax[0xC];
        [FieldOffset(0x1FC)] public fixed byte m_flRotRateMin[0x4];
        [FieldOffset(0x200)] public fixed byte m_flRotRateMax[0x4];
        [FieldOffset(0x204)] public fixed byte m_bNormalize[0x4];
        [FieldOffset(0x208)] public fixed byte m_flScale[0x178];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8C8)]
    public unsafe struct C_INIT_InitVecCollection {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_InputValue[0x6D8];
        [FieldOffset(0x8C0)] public fixed byte m_nOutputField[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x238)]
    public unsafe struct C_INIT_RemapParticleCountToNamedModelMeshGroupScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x238];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_INIT_SequenceFromCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E8];
        [FieldOffset(0x1E8)] public fixed byte m_bKillUnused[0x1];
        [FieldOffset(0x1E9)] public fixed byte m_bRadiusScale[0x3];
        [FieldOffset(0x1EC)] public fixed byte m_nCP[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_vecOffset[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_OP_CPOffsetToPercentageBetweenCPs {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_flInputMin[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flInputMax[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flInputBias[0x4];
        [FieldOffset(0x1EC)] public fixed byte m_nStartCP[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_nEndCP[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_nOffsetCP[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_nOuputCP[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_nInputCP[0x4];
        [FieldOffset(0x200)] public fixed byte m_bRadialCheck[0x1];
        [FieldOffset(0x201)] public fixed byte m_bScaleOffset[0x3];
        [FieldOffset(0x204)] public fixed byte m_vecOffset[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F0)]
    public unsafe struct C_OP_LerpEndCapScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1E0];
        [FieldOffset(0x1E0)] public fixed byte m_nFieldOutput[0x4];
        [FieldOffset(0x1E4)] public fixed byte m_flOutput[0x4];
        [FieldOffset(0x1E8)] public fixed byte m_flLerpTime[0x8];
    }
}