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

namespace cs2::particles {

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

enum class Detail2Combo_t : std::int32_t {
    DETAIL_2_COMBO_UNINITIALIZED = 18446744073709551615,
    DETAIL_2_COMBO_OFF = 0,
    DETAIL_2_COMBO_ADD = 1,
    DETAIL_2_COMBO_ADD_SELF_ILLUM = 2,
    DETAIL_2_COMBO_MOD2X = 3,
    DETAIL_2_COMBO_MUL = 4,
    DETAIL_2_COMBO_CROSSFADE = 5,
};

enum class MissingParentInheritBehavior_t : std::int32_t {
    MISSING_PARENT_DO_NOTHING = 18446744073709551615,
    MISSING_PARENT_KILL = 0,
    MISSING_PARENT_FIND_NEW = 1,
    MISSING_PARENT_SAME_INDEX = 2,
};

enum class ParticleTraceMissBehavior_t : std::int32_t {
    PARTICLE_TRACE_MISS_BEHAVIOR_NONE = 0,
    PARTICLE_TRACE_MISS_BEHAVIOR_KILL = 1,
    PARTICLE_TRACE_MISS_BEHAVIOR_TRACE_END = 2,
};

enum class PFuncVisualizationType_t : std::int32_t {
    PFUNC_VISUALIZATION_SPHERE_WIREFRAME = 0,
    PFUNC_VISUALIZATION_SPHERE_SOLID = 1,
    PFUNC_VISUALIZATION_BOX = 2,
    PFUNC_VISUALIZATION_RING = 3,
    PFUNC_VISUALIZATION_PLANE = 4,
    PFUNC_VISUALIZATION_LINE = 5,
    PFUNC_VISUALIZATION_CYLINDER = 6,
};

enum class ParticleVRHandChoiceList_t : std::int32_t {
    PARTICLE_VRHAND_LEFT = 0,
    PARTICLE_VRHAND_RIGHT = 1,
    PARTICLE_VRHAND_CP = 2,
    PARTICLE_VRHAND_CP_OBJECT = 3,
};

enum class ParticleEntityPos_t : std::int32_t {
    PARTICLE_ABS_ORIGIN = 0,
    PARTICLE_WORLDSPACE_CENTER = 1,
    PARTICLE_EYES = 2,
    PARTICLE_FLASHLIGHT = 3,
};

enum class ParticleFanType_t : std::int32_t {
    PARTICLE_FAN_TYPE_FAN = 0,
    PARTICLE_FAN_TYPE_ROTOR_WASH = 1,
    PARTICLE_FAN_TYPE_RADIAL = 2,
};

enum class PetGroundType_t : std::int32_t {
    PET_GROUND_NONE = 0,
    PET_GROUND_GRID = 1,
    PET_GROUND_PLANE = 2,
};

enum class InheritableBoolType_t : std::int32_t {
    INHERITABLE_BOOL_INHERIT = 0,
    INHERITABLE_BOOL_FALSE = 1,
    INHERITABLE_BOOL_TRUE = 2,
};

enum class ParticlePostProcessPriorityGroup_t : std::int32_t {
    PARTICLE_POST_PROCESS_PRIORITY_LEVEL_VOLUME = 0,
    PARTICLE_POST_PROCESS_PRIORITY_LEVEL_OVERRIDE = 1,
    PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_EFFECT = 2,
    PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_LOW = 3,
    PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_HIGH = 4,
    PARTICLE_POST_PROCESS_PRIORITY_GLOBAL_UI = 5,
};

enum class ParticleCollisionGroup_t : std::int32_t {
    PARTICLE_COLLISION_GROUP_DEFAULT = 4,
    PARTICLE_COLLISION_GROUP_DEBRIS = 5,
    PARTICLE_COLLISION_GROUP_INTERACTIVE = 7,
    PARTICLE_COLLISION_GROUP_PLAYER = 8,
    PARTICLE_COLLISION_GROUP_VEHICLE = 10,
    PARTICLE_COLLISION_GROUP_NPC = 12,
    PARTICLE_COLLISION_GROUP_PROPS = 24,
};

enum class DetailCombo_t : std::int32_t {
    DETAIL_COMBO_OFF = 0,
    DETAIL_COMBO_ADD = 1,
    DETAIL_COMBO_ADD_SELF_ILLUM = 2,
    DETAIL_COMBO_MOD2X = 3,
};

enum class ScalarExpressionType_t : std::int32_t {
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
};

enum class SpriteCardPerParticleScale_t : std::int32_t {
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
};

enum class BlurFilterType_t : std::int32_t {
    BLURFILTER_GAUSSIAN = 0,
    BLURFILTER_BOX = 1,
};

enum class StandardLightingAttenuationStyle_t : std::int32_t {
    LIGHT_STYLE_OLD = 0,
    LIGHT_STYLE_NEW = 1,
};

enum class ParticleParentSetMode_t : std::int32_t {
    PARTICLE_SET_PARENT_NO = 0,
    PARTICLE_SET_PARENT_IMMEDIATE = 1,
    PARTICLE_SET_PARENT_ROOT = 2,
};

enum class ParticleLightingQuality_t : std::int32_t {
    PARTICLE_LIGHTING_PER_PARTICLE = 0,
    PARTICLE_LIGHTING_PER_VERTEX = 1,
    PARTICLE_LIGHTING_PER_PIXEL = 18446744073709551615,
    PARTICLE_LIGHTING_OVERRIDE_POSITION = 2,
    PARTICLE_LIGHTING_OVERRIDE_COLOR = 3,
    PARTICLE_LIGHTING_ADD_EXTRA_LIGHT = 4,
};

enum class ParticleVolumetricSmokeCreationType_t : std::int32_t {
    PARTICLE_VOLUMETRIC_SMOKE_TYPE_CONTINUOUS = 0,
    PARTICLE_VOLUMETRIC_SMOKE_TYPE_IMPULSE = 1,
};

enum class SetStatisticExpressionType_t : std::int32_t {
    SET_EXPRESSION_UNINITIALIZED = 18446744073709551615,
    SET_EXPRESSION_SUM = 0,
    SET_EXPRESSION_MEAN = 1,
    SET_EXPRESSION_MEDIAN = 2,
    SET_EXPRESSION_MODE = 3,
    SET_EXPRESSION_STANDARD_DEVIATION = 4,
    SET_EXPRESSION_MIN = 5,
    SET_EXPRESSION_MAX = 6,
};

enum class EventTypeSelection_t : std::int32_t {
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
};

enum class ParticleMassMode_t : std::int32_t {
    PARTICLE_MASSMODE_RADIUS_CUBED = 0,
    PARTICLE_MASSMODE_RADIUS_SQUARED = 2,
};

enum class ParticleHitboxBiasType_t : std::int32_t {
    PARTICLE_HITBOX_BIAS_ENTITY = 0,
    PARTICLE_HITBOX_BIAS_HITBOX = 1,
};

enum class ParticleControlPointAxis_t : std::int32_t {
    PARTICLE_CP_AXIS_X = 0,
    PARTICLE_CP_AXIS_Y = 1,
    PARTICLE_CP_AXIS_Z = 2,
    PARTICLE_CP_AXIS_NEGATIVE_X = 3,
    PARTICLE_CP_AXIS_NEGATIVE_Y = 4,
    PARTICLE_CP_AXIS_NEGATIVE_Z = 5,
};

enum class ParticlePinDistance_t : std::int32_t {
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
};

enum class VectorFloatExpressionType_t : std::int32_t {
    VECTOR_FLOAT_EXPRESSION_UNINITIALIZED = 18446744073709551615,
    VECTOR_FLOAT_EXPRESSION_DOTPRODUCT = 0,
    VECTOR_FLOAT_EXPRESSION_DISTANCE = 1,
    VECTOR_FLOAT_EXPRESSION_DISTANCESQR = 2,
    VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTH = 3,
    VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTHSQR = 4,
    VECTOR_FLOAT_EXPRESSION_INPUT1_NOISE = 5,
};

enum class ParticleFogType_t : std::int32_t {
    PARTICLE_FOG_GAME_DEFAULT = 0,
    PARTICLE_FOG_ENABLED = 1,
    PARTICLE_FOG_DISABLED = 2,
};

enum class VectorExpressionType_t : std::int32_t {
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
};

enum class ParticleMultiSegmentInputSelection_t : std::int32_t {
    PARTICLE_MULTISEGMENT_SELECTION_FLOAT = 0,
    PARTICLE_MULTISEGMENT_SELECTION_STRING = 1,
};

enum class ParticleRotationLockType_t : std::int32_t {
    PARTICLE_ROTATION_LOCK_NONE = 0,
    PARTICLE_ROTATION_LOCK_ROTATIONS = 1,
    PARTICLE_ROTATION_LOCK_NORMAL = 2,
};

enum class HitboxLerpType_t : std::int32_t {
    HITBOX_LERP_LIFETIME = 0,
    HITBOX_LERP_CONSTANT = 1,
};

enum class ParticleAttrBoxFlags_t : std::int32_t {
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
};

enum class ParticleTopology_t : std::int32_t {
    PARTICLE_TOPOLOGY_POINTS = 0,
    PARTICLE_TOPOLOGY_LINES = 1,
    PARTICLE_TOPOLOGY_TRIS = 2,
    PARTICLE_TOPOLOGY_QUADS = 3,
    PARTICLE_TOPOLOGY_CUBES = 4,
};

enum class ParticleLightBehaviorChoiceList_t : std::int32_t {
    PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION = 0,
    PARTICLE_LIGHT_BEHAVIOR_ROPE = 1,
    PARTICLE_LIGHT_BEHAVIOR_TRAILS = 2,
};

enum class ModelHitboxType_t : std::int32_t {
    MODEL_HITBOX_TYPE_STANDARD = 0,
    MODEL_HITBOX_TYPE_RAW_BONES = 1,
    MODEL_HITBOX_TYPE_RENDERBOUNDS = 2,
    MODEL_HITBOX_TYPE_SNAPSHOT = 3,
};

enum class ParticleMultiSegmentCountSelection_t : std::int32_t {
    PARTICLE_MULTISEGMENT_SEG_COUNT_7 = 7,
    PARTICLE_MULTISEGMENT_SEG_COUNT_14 = 14,
    PARTICLE_MULTISEGMENT_SEG_COUNT_16 = 16,
};

enum class ParticleOrientationType_t : std::int32_t {
    PARTICLE_ORIENTATION_NONE = 0,
    PARTICLE_ORIENTATION_VELOCITY = 1,
    PARTICLE_ORIENTATION_NORMAL = 2,
    PARTICLE_ORIENTATION_ROTATION = 4,
};

enum class ParticleTraceSet_t : std::int32_t {
    PARTICLE_TRACE_SET_ALL = 0,
    PARTICLE_TRACE_SET_STATIC = 1,
    PARTICLE_TRACE_SET_STATIC_AND_KEYFRAMED = 2,
    PARTICLE_TRACE_SET_DYNAMIC = 3,
};

enum class ParticleTextureLayerBlendType_t : std::int32_t {
    SPRITECARD_TEXTURE_BLEND_MULTIPLY = 0,
    SPRITECARD_TEXTURE_BLEND_MOD2X = 1,
    SPRITECARD_TEXTURE_BLEND_REPLACE = 2,
    SPRITECARD_TEXTURE_BLEND_ADD = 3,
    SPRITECARD_TEXTURE_BLEND_SUBTRACT = 4,
    SPRITECARD_TEXTURE_BLEND_AVERAGE = 5,
    SPRITECARD_TEXTURE_BLEND_LUMINANCE = 6,
};

enum class ParticleSelection_t : std::int32_t {
    PARTICLE_SELECTION_FIRST = 0,
    PARTICLE_SELECTION_LAST = 1,
    PARTICLE_SELECTION_NUMBER = 2,
};

enum class ParticleToolsState_t : std::int32_t {
    PARTICLE_TOOLS_STATE_ALWAYS_ON = 18446744073709551615,
    PARTICLE_TOOLS_STATE_TOOLS_ONLY = 0,
    PARTICLE_TOOLS_STATE_GAME_ONLY = 1,
};

enum class SnapshotIndexType_t : std::int32_t {
    SNAPSHOT_INDEX_INCREMENT = 0,
    SNAPSHOT_INDEX_DIRECT = 1,
};

enum class ParticleOutputBlendMode_t : std::int32_t {
    PARTICLE_OUTPUT_BLEND_MODE_ALPHA = 0,
    PARTICLE_OUTPUT_BLEND_MODE_ADD = 1,
    PARTICLE_OUTPUT_BLEND_MODE_BLEND_ADD = 2,
    PARTICLE_OUTPUT_BLEND_MODE_HALF_BLEND_ADD = 3,
    PARTICLE_OUTPUT_BLEND_MODE_NEG_HALF_BLEND_ADD = 4,
    PARTICLE_OUTPUT_BLEND_MODE_MOD2X = 5,
    PARTICLE_OUTPUT_BLEND_MODE_LIGHTEN = 6,
};

enum class ParticleLightnintBranchBehavior_t : std::int32_t {
    PARTICLE_LIGHTNING_BRANCH_CURRENT_DIR = 0,
    PARTICLE_LIGHTNING_BRANCH_ENDPOINT_DIR = 1,
};

enum class MaterialProxyType_t : std::int32_t {
    MATERIAL_PROXY_STATUS_EFFECT = 0,
    MATERIAL_PROXY_TINT = 1,
};

enum class ParticleDepthFeatheringMode_t : std::int32_t {
    PARTICLE_DEPTH_FEATHERING_OFF = 0,
    PARTICLE_DEPTH_FEATHERING_ON_OPTIONAL = 1,
    PARTICLE_DEPTH_FEATHERING_ON_REQUIRED = 2,
};

enum class ParticleLightUnitChoiceList_t : std::int32_t {
    PARTICLE_LIGHT_UNIT_CANDELAS = 0,
    PARTICLE_LIGHT_UNIT_LUMENS = 1,
};

enum class ParticleMultiSegmentSpecialCharacter_t : std::int32_t {
    PARTICLE_MULTISEGMENT_SPECIAL_NONE = 18446744073709551615,
    PARTICLE_MULTISEGMENT_SPECIAL_DECIMAL = 0,
    PARTICLE_MULTISEGMENT_SPECIAL_COLON = 1,
    PARTICLE_MULTISEGMENT_SPECIAL_DEGREES = 2,
};

enum class ParticleOmni2LighOrientationChoiceList_t : std::int32_t {
    PARTICLE_OMNI2_LIGHT_ORIENTATION_ROTATIONS = 0,
    PARTICLE_OMNI2_LIGHT_ORIENTATION_NORMAL = 1,
    PARTICLE_OMNI2_LIGHT_ORIENTATION_NORMAL_ROLL = 2,
    PARTICLE_OMNI2_LIGHT_ORIENTATION_TARGET = 3,
    PARTICLE_OMNI2_LIGHT_ORIENTATION_TARGET_ROLL = 4,
};

enum class ParticleFalloffFunction_t : std::int32_t {
    PARTICLE_FALLOFF_CONSTANT = 0,
    PARTICLE_FALLOFF_LINEAR = 1,
    PARTICLE_FALLOFF_EXPONENTIAL = 2,
};

enum class ParticleSequenceCropOverride_t : std::int32_t {
    PARTICLE_SEQUENCE_CROP_OVERRIDE_DEFAULT = 18446744073709551615,
    PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_OFF = 0,
    PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_ON = 1,
};

enum class ParticleDetailLevel_t : std::int32_t {
    PARTICLEDETAIL_LOW = 0,
    PARTICLEDETAIL_MEDIUM = 1,
    PARTICLEDETAIL_HIGH = 2,
    PARTICLEDETAIL_ULTRA = 3,
};

enum class BBoxVolumeType_t : std::int32_t {
    BBOX_VOLUME = 0,
    BBOX_DIMENSIONS = 1,
    BBOX_MINS_MAXS = 2,
    BBOX_RADIUS = 3,
    BBOX_SURFACE_AREA = 4,
};

enum class SpriteCardTextureType_t : std::int32_t {
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
};

enum class ParticleAlphaReferenceType_t : std::int32_t {
    PARTICLE_ALPHA_REFERENCE_ALPHA_ALPHA = 0,
    PARTICLE_ALPHA_REFERENCE_OPAQUE_ALPHA = 1,
    PARTICLE_ALPHA_REFERENCE_ALPHA_OPAQUE = 2,
    PARTICLE_ALPHA_REFERENCE_OPAQUE_OPAQUE = 3,
};

enum class SpriteCardTextureChannel_t : std::int32_t {
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
};

enum class ParticleVolumetricSmokeType_t : std::int32_t {
    PARTICLE_VOLUMETRIC_SMOKE_TYPE_EMISSION = 0,
    PARTICLE_VOLUMETRIC_SMOKE_TYPE_SINK = 1,
    PARTICLE_VOLUMETRIC_SMOKE_TYPE_REPEL = 2,
    PARTICLE_VOLUMETRIC_SMOKE_TYPE_TRACE = 3,
};

enum class RenderModelSubModelFieldType_t : std::int32_t {
    SUBMODEL_AS_BODYGROUP_SUBMODEL = 0,
    SUBMODEL_AS_MESHGROUP_INDEX = 1,
    SUBMODEL_AS_MESHGROUP_MASK = 2,
    SUBMODEL_IGNORED_USE_MODEL_DEFAULT_MESHGROUP_MASK = 3,
};

enum class ParticleHitboxDataSelection_t : std::int32_t {
    PARTICLE_HITBOX_AVERAGE_SPEED = 0,
    PARTICLE_HITBOX_COUNT = 1,
};

enum class ParticleOrientationChoiceList_t : std::int32_t {
    PARTICLE_ORIENTATION_SCREEN_ALIGNED = 0,
    PARTICLE_ORIENTATION_SCREEN_Z_ALIGNED = 1,
    PARTICLE_ORIENTATION_WORLD_Z_ALIGNED = 2,
    PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL = 3,
    PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL = 4,
    PARTICLE_ORIENTATION_FULL_3AXIS_ROTATION = 5,
};

enum class ParticleCollisionMode_t : std::int32_t {
    COLLISION_MODE_PER_PARTICLE_TRACE = 3,
    COLLISION_MODE_USE_NEAREST_TRACE = 2,
    COLLISION_MODE_PER_FRAME_PLANESET = 1,
    COLLISION_MODE_INITIAL_TRACE_DOWN = 0,
    COLLISION_MODE_DISABLED = 18446744073709551615,
};

enum class ParticleSortingChoiceList_t : std::int32_t {
    PARTICLE_SORTING_NEAREST = 0,
    PARTICLE_SORTING_CREATION_TIME = 1,
};

enum class ParticleEndcapMode_t : std::int32_t {
    PARTICLE_ENDCAP_ALWAYS_ON = 18446744073709551615,
    PARTICLE_ENDCAP_ENDCAP_OFF = 0,
    PARTICLE_ENDCAP_ENDCAP_ON = 1,
};

enum class ClosestPointTestType_t : std::int32_t {
    PARTICLE_CLOSEST_TYPE_BOX = 0,
    PARTICLE_CLOSEST_TYPE_CAPSULE = 1,
    PARTICLE_CLOSEST_TYPE_HYBRID = 2,
};

enum class ParticleImpulseType_t : std::int32_t {
    IMPULSE_TYPE_NONE = 0,
    IMPULSE_TYPE_GENERIC = 1,
    IMPULSE_TYPE_ROPE = 2,
    IMPULSE_TYPE_EXPLOSION = 4,
    IMPULSE_TYPE_EXPLOSION_UNDERWATER = 8,
    IMPULSE_TYPE_PARTICLE_SYSTEM = 16,
};

enum class ParticleLiquidContents_t : std::int32_t {
    PARTICLE_LIQUID_NONE = 0,
    PARTICLE_LIQUID_OIL = 1,
    PARTICLE_LIQUID_WATER = 2,
};

enum class SpriteCardShaderType_t : std::int32_t {
    SPRITECARD_SHADER_BASE = 0,
    SPRITECARD_SHADER_CUSTOM = 1,
};

enum class ParticleOmni2LightTypeChoiceList_t : std::int32_t {
    PARTICLE_OMNI2_LIGHT_TYPE_POINT = 0,
    PARTICLE_OMNI2_LIGHT_TYPE_SPHERE = 1,
    PARTICLE_OMNI2_LIGHT_TYPE_BARN = 2,
};

enum class ParticleLightFogLightingMode_t : std::int32_t {
    PARTICLE_LIGHT_FOG_LIGHTING_MODE_NONE = 0,
    PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC = 2,
    PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC_NOSHADOWS = 4,
};

enum class ParticleLightTypeChoiceList_t : std::int32_t {
    PARTICLE_LIGHT_TYPE_POINT = 0,
    PARTICLE_LIGHT_TYPE_SPOT = 1,
    PARTICLE_LIGHT_TYPE_FX = 2,
    PARTICLE_LIGHT_TYPE_CAPSULE = 3,
};

enum class ParticleOrientationSetMode_t : std::int32_t {
    PARTICLE_ORIENTATION_SET_NONE = 18446744073709551615,
    PARTICLE_ORIENTATION_SET_FROM_VELOCITY = 0,
    PARTICLE_ORIENTATION_SET_FROM_NORMAL = 1,
    PARTICLE_ORIENTATION_SET_FROM_ROTATIONS = 2,
};

enum class ParticleCollisionMask_t : std::int32_t {
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
};

enum class TextureRepetitionMode_t : std::int32_t {
    TEXTURE_REPETITION_PARTICLE = 0,
    TEXTURE_REPETITION_PATH = 1,
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

struct IParticleCollection {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct C_OP_RemapGravityToVector {
    static constexpr std::size_t size = 0x930;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_vInput1[0x6D8]; // 0x1E0 CPerParticleVecInput
    std::uint8_t m_nOutputField[0x4]; // 0x8B8 ParticleAttributeIndex_t
    std::uint8_t m_nSetMethod[0x4]; // 0x8BC ParticleSetMethod_t
    std::uint8_t m_bNormalizedOutput[0x70]; // 0x8C0 bool
};

struct C_OP_Decay {
    static constexpr std::size_t size = 0x1E8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_bRopeDecay[0x1]; // 0x1E0 bool
    std::uint8_t m_bForcePreserveParticleOrder[0x7]; // 0x1E1 bool
};

struct C_OP_RenderDeferredLight {
    static constexpr std::size_t size = 0x948;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_flRadiusScale[0x4]; // 0x230 float32
    std::uint8_t m_flAlphaScale[0x4]; // 0x234 float32
    std::uint8_t m_nAlpha2Field[0x8]; // 0x238 ParticleAttributeIndex_t
    std::uint8_t m_vecColorScale[0x6D8]; // 0x240 CParticleCollectionVecInput
    std::uint8_t m_nColorBlendType[0x4]; // 0x918 ParticleColorBlendType_t
    std::uint8_t m_bUseTexture[0x1]; // 0x91C bool
    std::uint8_t m_bUseAlphaTestWindow[0x3]; // 0x91D bool
    std::uint8_t m_hTexture[0x8]; // 0x920 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_nAlphaTestPointField[0x4]; // 0x928 ParticleAttributeIndex_t
    std::uint8_t m_nAlphaTestRangeField[0x4]; // 0x92C ParticleAttributeIndex_t
    std::uint8_t m_nAlphaTestSharpnessField[0x4]; // 0x930 ParticleAttributeIndex_t
    std::uint8_t m_flLightDistance[0x4]; // 0x934 float32
    std::uint8_t m_flStartFalloff[0x4]; // 0x938 float32
    std::uint8_t m_flDistanceFalloff[0x4]; // 0x93C float32
    std::uint8_t m_flSpotFoV[0x4]; // 0x940 float32
    std::uint8_t m_nHSVShiftControlPoint[0x4]; // 0x944 int32
};

struct C_OP_RemapSpeedtoCP {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nInControlPointNumber[0x4]; // 0x1E8 int32
    std::uint8_t m_nOutControlPointNumber[0x4]; // 0x1EC int32
    std::uint8_t m_nField[0x4]; // 0x1F0 int32
    std::uint8_t m_flInputMin[0x4]; // 0x1F4 float32
    std::uint8_t m_flInputMax[0x4]; // 0x1F8 float32
    std::uint8_t m_flOutputMin[0x4]; // 0x1FC float32
    std::uint8_t m_flOutputMax[0x4]; // 0x200 float32
    std::uint8_t m_bUseDeltaV[0x4]; // 0x204 bool
};

struct C_OP_RemapTransformToVelocity {
    static constexpr std::size_t size = 0x248;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_TransformInput[0x68]; // 0x1E0 CParticleTransformInput
};

struct CollisionGroupContext_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_nCollisionGroupNumber[0x4]; // 0x0 int32
};

struct CParticleFunctionPreEmission {
    static constexpr std::size_t size = 0x1E8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_bRunOnce[0x8]; // 0x1E0 bool
};

struct C_OP_FadeOutSimple {
    static constexpr std::size_t size = 0x1E8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flFadeOutTime[0x4]; // 0x1E0 float32
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E4 ParticleAttributeIndex_t
};

struct C_OP_SpringToVectorConstraint {
    static constexpr std::size_t size = 0xE98;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flRestLength[0x178]; // 0x1E0 CPerParticleFloatInput
    std::uint8_t m_flMinDistance[0x178]; // 0x358 CPerParticleFloatInput
    std::uint8_t m_flMaxDistance[0x178]; // 0x4D0 CPerParticleFloatInput
    std::uint8_t m_flRestingLength[0x178]; // 0x648 CPerParticleFloatInput
    std::uint8_t m_vecAnchorVector[0x6D8]; // 0x7C0 CPerParticleVecInput
};

struct C_OP_RenderRopes {
    static constexpr std::size_t size = 0x3528;
    std::uint8_t pad_0[0x2ED8]; // 0x0
    std::uint8_t m_bEnableFadingAndClamping[0x4]; // 0x2ED8 bool
    std::uint8_t m_flMinSize[0x4]; // 0x2EDC float32
    std::uint8_t m_flMaxSize[0x4]; // 0x2EE0 float32
    std::uint8_t m_flStartFadeSize[0x4]; // 0x2EE4 float32
    std::uint8_t m_flEndFadeSize[0x4]; // 0x2EE8 float32
    std::uint8_t m_flStartFadeDot[0x4]; // 0x2EEC float32
    std::uint8_t m_flEndFadeDot[0x8]; // 0x2EF0 float32
    std::uint8_t m_flSubPixelAAScale[0x178]; // 0x2EF8 CParticleCollectionRendererFloatInput
    std::uint8_t m_flRadiusTaper[0x4]; // 0x3070 float32
    std::uint8_t m_nMinTesselation[0x4]; // 0x3074 int32
    std::uint8_t m_nMaxTesselation[0x4]; // 0x3078 int32
    std::uint8_t m_flTessScale[0x4]; // 0x307C float32
    std::uint8_t m_flTextureVWorldSize[0x178]; // 0x3080 CParticleCollectionRendererFloatInput
    std::uint8_t m_flTextureVScrollRate[0x178]; // 0x31F8 CParticleCollectionRendererFloatInput
    std::uint8_t m_flTextureVOffset[0x178]; // 0x3370 CParticleCollectionRendererFloatInput
    std::uint8_t m_nTextureVParamsCP[0x4]; // 0x34E8 int32
    std::uint8_t m_bClampV[0x4]; // 0x34EC bool
    std::uint8_t m_nScaleCP1[0x4]; // 0x34F0 int32
    std::uint8_t m_nScaleCP2[0x4]; // 0x34F4 int32
    std::uint8_t m_flScaleVSizeByControlPointDistance[0x4]; // 0x34F8 float32
    std::uint8_t m_flScaleVScrollByControlPointDistance[0x4]; // 0x34FC float32
    std::uint8_t m_flScaleVOffsetByControlPointDistance[0x5]; // 0x3500 float32
    std::uint8_t m_bUseScalarForTextureCoordinate[0x3]; // 0x3505 bool
    std::uint8_t m_nScalarFieldForTextureCoordinate[0x4]; // 0x3508 ParticleAttributeIndex_t
    std::uint8_t m_flScalarAttributeTextureCoordScale[0x4]; // 0x350C float32
    std::uint8_t m_bReverseOrder[0x1]; // 0x3510 bool
    std::uint8_t m_bClosedLoop[0x3]; // 0x3511 bool
    std::uint8_t m_nSplitField[0x4]; // 0x3514 ParticleAttributeIndex_t
    std::uint8_t m_bSortBySegmentID[0x4]; // 0x3518 bool
    std::uint8_t m_nOrientationType[0x4]; // 0x351C ParticleOrientationChoiceList_t
    std::uint8_t m_nVectorFieldForOrientation[0x4]; // 0x3520 ParticleAttributeIndex_t
    std::uint8_t m_bDrawAsOpaque[0x1]; // 0x3524 bool
    std::uint8_t m_bGenerateNormals[0x3]; // 0x3525 bool
};

struct C_INIT_StatusEffectCitadel {
    static constexpr std::size_t size = 0x238;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_flSFXColorWarpAmount[0x4]; // 0x1E8 float32
    std::uint8_t m_flSFXNormalAmount[0x4]; // 0x1EC float32
    std::uint8_t m_flSFXMetalnessAmount[0x4]; // 0x1F0 float32
    std::uint8_t m_flSFXRoughnessAmount[0x4]; // 0x1F4 float32
    std::uint8_t m_flSFXSelfIllumAmount[0x4]; // 0x1F8 float32
    std::uint8_t m_flSFXSScale[0x4]; // 0x1FC float32
    std::uint8_t m_flSFXSScrollX[0x4]; // 0x200 float32
    std::uint8_t m_flSFXSScrollY[0x4]; // 0x204 float32
    std::uint8_t m_flSFXSScrollZ[0x4]; // 0x208 float32
    std::uint8_t m_flSFXSOffsetX[0x4]; // 0x20C float32
    std::uint8_t m_flSFXSOffsetY[0x4]; // 0x210 float32
    std::uint8_t m_flSFXSOffsetZ[0x4]; // 0x214 float32
    std::uint8_t m_nDetailCombo[0x4]; // 0x218 DetailCombo_t
    std::uint8_t m_flSFXSDetailAmount[0x4]; // 0x21C float32
    std::uint8_t m_flSFXSDetailScale[0x4]; // 0x220 float32
    std::uint8_t m_flSFXSDetailScrollX[0x4]; // 0x224 float32
    std::uint8_t m_flSFXSDetailScrollY[0x4]; // 0x228 float32
    std::uint8_t m_flSFXSDetailScrollZ[0x4]; // 0x22C float32
    std::uint8_t m_flSFXSUseModelUVs[0x8]; // 0x230 float32
};

struct C_OP_RenderSound {
    static constexpr std::size_t size = 0x360;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_flDurationScale[0x4]; // 0x230 float32
    std::uint8_t m_flSndLvlScale[0x4]; // 0x234 float32
    std::uint8_t m_flPitchScale[0x4]; // 0x238 float32
    std::uint8_t m_flVolumeScale[0x4]; // 0x23C float32
    std::uint8_t m_nSndLvlField[0x4]; // 0x240 ParticleAttributeIndex_t
    std::uint8_t m_nDurationField[0x4]; // 0x244 ParticleAttributeIndex_t
    std::uint8_t m_nPitchField[0x4]; // 0x248 ParticleAttributeIndex_t
    std::uint8_t m_nVolumeField[0x4]; // 0x24C ParticleAttributeIndex_t
    std::uint8_t m_nChannel[0x4]; // 0x250 int32
    std::uint8_t m_nCPReference[0x4]; // 0x254 int32
    std::uint8_t m_pszSoundName[0x100]; // 0x258 char[256]
    std::uint8_t m_bSuppressStopSoundEvent[0x8]; // 0x358 bool
};

struct CParticleVisibilityInputs {
    static constexpr std::size_t size = 0x48;
    std::uint8_t m_flCameraBias[0x4]; // 0x0 float32
    std::uint8_t m_nCPin[0x4]; // 0x4 int32
    std::uint8_t m_flProxyRadius[0x4]; // 0x8 float32
    std::uint8_t m_flInputMin[0x4]; // 0xC float32
    std::uint8_t m_flInputMax[0x4]; // 0x10 float32
    std::uint8_t m_flInputPixelVisFade[0x4]; // 0x14 float32
    std::uint8_t m_flNoPixelVisibilityFallback[0x4]; // 0x18 float32
    std::uint8_t m_flDistanceInputMin[0x4]; // 0x1C float32
    std::uint8_t m_flDistanceInputMax[0x4]; // 0x20 float32
    std::uint8_t m_flDotInputMin[0x4]; // 0x24 float32
    std::uint8_t m_flDotInputMax[0x4]; // 0x28 float32
    std::uint8_t m_bDotCPAngles[0x1]; // 0x2C bool
    std::uint8_t m_bDotCameraAngles[0x3]; // 0x2D bool
    std::uint8_t m_flAlphaScaleMin[0x4]; // 0x30 float32
    std::uint8_t m_flAlphaScaleMax[0x4]; // 0x34 float32
    std::uint8_t m_flRadiusScaleMin[0x4]; // 0x38 float32
    std::uint8_t m_flRadiusScaleMax[0x4]; // 0x3C float32
    std::uint8_t m_flRadiusScaleFOVBase[0x4]; // 0x40 float32
    std::uint8_t m_bRightEye[0x4]; // 0x44 bool
};

struct C_OP_SetControlPointsToParticle {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nChildGroupID[0x4]; // 0x1E0 int32
    std::uint8_t m_nFirstControlPoint[0x4]; // 0x1E4 int32
    std::uint8_t m_nNumControlPoints[0x4]; // 0x1E8 int32
    std::uint8_t m_nFirstSourcePoint[0x4]; // 0x1EC int32
    std::uint8_t m_bReverse[0x1]; // 0x1F0 bool
    std::uint8_t m_bSetOrientation[0x3]; // 0x1F1 bool
    std::uint8_t m_nOrientationMode[0x4]; // 0x1F4 ParticleOrientationSetMode_t
    std::uint8_t m_nSetParent[0x8]; // 0x1F8 ParticleParentSetMode_t
};

struct C_OP_RemapCPVelocityToVector {
    static constexpr std::size_t size = 0x1F0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nControlPoint[0x4]; // 0x1E0 int32
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E4 ParticleAttributeIndex_t
    std::uint8_t m_flScale[0x4]; // 0x1E8 float32
    std::uint8_t m_bNormalize[0x4]; // 0x1EC bool
};

struct C_OP_PointVectorAtNextParticle {
    static constexpr std::size_t size = 0x368;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldOutput[0x8]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_flInterpolation[0x178]; // 0x1E8 CPerParticleFloatInput
    std::uint8_t m_bPrevious[0x8]; // 0x360 bool
};

struct ParticlePreviewBodyGroup_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_bodyGroupName[0x8]; // 0x0 CUtlString
    std::uint8_t m_nValue[0x8]; // 0x8 int32
};

struct C_OP_OscillateScalarSimple {
    static constexpr std::size_t size = 0x220;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_Rate[0x4]; // 0x1E0 float32
    std::uint8_t m_Frequency[0x4]; // 0x1E4 float32
    std::uint8_t m_nField[0x4]; // 0x1E8 ParticleAttributeIndex_t
    std::uint8_t m_flOscMult[0x4]; // 0x1EC float32
    std::uint8_t m_flOscAdd[0x30]; // 0x1F0 float32
};

struct C_INIT_StatusEffect {
    static constexpr std::size_t size = 0x248;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nDetail2Combo[0x4]; // 0x1E8 Detail2Combo_t
    std::uint8_t m_flDetail2Rotation[0x4]; // 0x1EC float32
    std::uint8_t m_flDetail2Scale[0x4]; // 0x1F0 float32
    std::uint8_t m_flDetail2BlendFactor[0x4]; // 0x1F4 float32
    std::uint8_t m_flColorWarpIntensity[0x4]; // 0x1F8 float32
    std::uint8_t m_flDiffuseWarpBlendToFull[0x4]; // 0x1FC float32
    std::uint8_t m_flEnvMapIntensity[0x4]; // 0x200 float32
    std::uint8_t m_flAmbientScale[0x4]; // 0x204 float32
    std::uint8_t m_specularColor[0x4]; // 0x208 Color
    std::uint8_t m_flSpecularScale[0x4]; // 0x20C float32
    std::uint8_t m_flSpecularExponent[0x4]; // 0x210 float32
    std::uint8_t m_flSpecularExponentBlendToFull[0x4]; // 0x214 float32
    std::uint8_t m_flSpecularBlendToFull[0x4]; // 0x218 float32
    std::uint8_t m_rimLightColor[0x4]; // 0x21C Color
    std::uint8_t m_flRimLightScale[0x4]; // 0x220 float32
    std::uint8_t m_flReflectionsTintByBaseBlendToNone[0x4]; // 0x224 float32
    std::uint8_t m_flMetalnessBlendToFull[0x4]; // 0x228 float32
    std::uint8_t m_flSelfIllumBlendToFull[0x1C]; // 0x22C float32
};

struct C_INIT_RtEnvCull {
    static constexpr std::size_t size = 0x290;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_vecTestDir[0xC]; // 0x1E8 Vector
    std::uint8_t m_vecTestNormal[0xC]; // 0x1F4 Vector
    std::uint8_t m_bUseVelocity[0x1]; // 0x200 bool
    std::uint8_t m_bCullOnMiss[0x1]; // 0x201 bool
    std::uint8_t m_bLifeAdjust[0x1]; // 0x202 bool
    std::uint8_t m_RtEnvName[0x81]; // 0x203 char[128]
    std::uint8_t m_nRTEnvCP[0x4]; // 0x284 int32
    std::uint8_t m_nComponent[0x8]; // 0x288 int32
};

struct C_OP_ConstrainDistance {
    static constexpr std::size_t size = 0xC18;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_fMinDistance[0x178]; // 0x1E0 CParticleCollectionFloatInput
    std::uint8_t m_fMaxDistance[0x178]; // 0x358 CParticleCollectionFloatInput
    std::uint8_t m_nControlPointNumber[0x68]; // 0x4D0 CParticleTransformInput
    std::uint8_t m_CenterOffset[0x6D8]; // 0x538 CParticleCollectionVecInput
    std::uint8_t m_bGlobalCenter[0x8]; // 0xC10 bool
};

struct C_INIT_RandomVector {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_vecMin[0xC]; // 0x1E8 Vector
    std::uint8_t m_vecMax[0xC]; // 0x1F4 Vector
    std::uint8_t m_nFieldOutput[0x4]; // 0x200 ParticleAttributeIndex_t
    std::uint8_t m_randomnessParameters[0xC]; // 0x204 CRandomNumberGeneratorParameters
};

struct C_INIT_InitialVelocityNoise {
    static constexpr std::size_t size = 0x1B60;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_vecAbsVal[0xC]; // 0x1E8 Vector
    std::uint8_t m_vecAbsValInv[0xC]; // 0x1F4 Vector
    std::uint8_t m_vecOffsetLoc[0x6D8]; // 0x200 CPerParticleVecInput
    std::uint8_t m_flOffset[0x178]; // 0x8D8 CPerParticleFloatInput
    std::uint8_t m_vecOutputMin[0x6D8]; // 0xA50 CPerParticleVecInput
    std::uint8_t m_vecOutputMax[0x6D8]; // 0x1128 CPerParticleVecInput
    std::uint8_t m_flNoiseScale[0x178]; // 0x1800 CPerParticleFloatInput
    std::uint8_t m_flNoiseScaleLoc[0x178]; // 0x1978 CPerParticleFloatInput
    std::uint8_t m_TransformInput[0x68]; // 0x1AF0 CParticleTransformInput
    std::uint8_t m_bIgnoreDt[0x8]; // 0x1B58 bool
};

struct ParticleChildrenInfo_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_ChildRef[0x8]; // 0x0 CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    std::uint8_t m_flDelay[0x4]; // 0x8 float32
    std::uint8_t m_bEndCap[0x1]; // 0xC bool
    std::uint8_t m_bDisableChild[0x3]; // 0xD bool
    std::uint8_t m_nDetailLevel[0x10]; // 0x10 ParticleDetailLevel_t
};

struct C_OP_RemapScalarOnceTimed {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_bProportional[0x4]; // 0x1E0 bool
    std::uint8_t m_nFieldInput[0x4]; // 0x1E4 ParticleAttributeIndex_t
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E8 ParticleAttributeIndex_t
    std::uint8_t m_flInputMin[0x4]; // 0x1EC float32
    std::uint8_t m_flInputMax[0x4]; // 0x1F0 float32
    std::uint8_t m_flOutputMin[0x4]; // 0x1F4 float32
    std::uint8_t m_flOutputMax[0x4]; // 0x1F8 float32
    std::uint8_t m_flRemapTime[0x4]; // 0x1FC float32
};

struct C_INIT_RandomNamedModelSequence {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x210]; // 0x0
};

struct C_OP_PlaneCull {
    static constexpr std::size_t size = 0x8C8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nPlaneControlPoint[0x8]; // 0x1E0 int32
    std::uint8_t m_vecPlaneDirection[0x6D8]; // 0x1E8 CParticleCollectionVecInput
    std::uint8_t m_bLocalSpace[0x4]; // 0x8C0 bool
    std::uint8_t m_flPlaneOffset[0x4]; // 0x8C4 float32
};

struct C_INIT_VelocityRandom {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nControlPointNumber[0x8]; // 0x1E8 int32
    std::uint8_t m_fSpeedMin[0x178]; // 0x1F0 CPerParticleFloatInput
    std::uint8_t m_fSpeedMax[0x178]; // 0x368 CPerParticleFloatInput
    std::uint8_t m_LocalCoordinateSystemSpeedMin[0x6D8]; // 0x4E0 CPerParticleVecInput
    std::uint8_t m_LocalCoordinateSystemSpeedMax[0x6D8]; // 0xBB8 CPerParticleVecInput
    std::uint8_t m_bIgnoreDT[0x4]; // 0x1290 bool
    std::uint8_t m_randomnessParameters[0xC]; // 0x1294 CRandomNumberGeneratorParameters
};

struct C_OP_ModelDampenMovement {
    static constexpr std::size_t size = 0x948;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nControlPointNumber[0x4]; // 0x1E0 int32
    std::uint8_t m_bBoundBox[0x1]; // 0x1E4 bool
    std::uint8_t m_bOutside[0x1]; // 0x1E5 bool
    std::uint8_t m_bUseBones[0x1]; // 0x1E6 bool
    std::uint8_t m_HitboxSetName[0x81]; // 0x1E7 char[128]
    std::uint8_t m_vecPosOffset[0x6D8]; // 0x268 CPerParticleVecInput
    std::uint8_t m_fDrag[0x8]; // 0x940 float32
};

struct C_OP_TwistAroundAxis {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1F0]; // 0x0
    std::uint8_t m_fForceAmount[0x4]; // 0x1F0 float32
    std::uint8_t m_TwistAxis[0xC]; // 0x1F4 Vector
    std::uint8_t m_bLocalSpace[0x4]; // 0x200 bool
    std::uint8_t m_nControlPointNumber[0x4]; // 0x204 int32
};

struct C_OP_TeleportBeam {
    static constexpr std::size_t size = 0x218;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nCPPosition[0x4]; // 0x1E0 int32
    std::uint8_t m_nCPVelocity[0x4]; // 0x1E4 int32
    std::uint8_t m_nCPMisc[0x4]; // 0x1E8 int32
    std::uint8_t m_nCPColor[0x4]; // 0x1EC int32
    std::uint8_t m_nCPInvalidColor[0x4]; // 0x1F0 int32
    std::uint8_t m_nCPExtraArcData[0x4]; // 0x1F4 int32
    std::uint8_t m_vGravity[0xC]; // 0x1F8 Vector
    std::uint8_t m_flArcMaxDuration[0x4]; // 0x204 float32
    std::uint8_t m_flSegmentBreak[0x4]; // 0x208 float32
    std::uint8_t m_flArcSpeed[0x4]; // 0x20C float32
    std::uint8_t m_flAlpha[0x8]; // 0x210 float32
};

struct C_OP_RemapExternalWindToCP {
    static constexpr std::size_t size = 0x8D0;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nCP[0x4]; // 0x1E8 int32
    std::uint8_t m_nCPOutput[0x4]; // 0x1EC int32
    std::uint8_t m_vecScale[0x6D8]; // 0x1F0 CParticleCollectionVecInput
    std::uint8_t m_bSetMagnitude[0x4]; // 0x8C8 bool
    std::uint8_t m_nOutVectorField[0x4]; // 0x8CC int32
};

struct CBaseRendererSource2 {
    static constexpr std::size_t size = 0x2ED8;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_flRadiusScale[0x178]; // 0x230 CParticleCollectionRendererFloatInput
    std::uint8_t m_flAlphaScale[0x178]; // 0x3A8 CParticleCollectionRendererFloatInput
    std::uint8_t m_flRollScale[0x178]; // 0x520 CParticleCollectionRendererFloatInput
    std::uint8_t m_nAlpha2Field[0x8]; // 0x698 ParticleAttributeIndex_t
    std::uint8_t m_vecColorScale[0x6D8]; // 0x6A0 CParticleCollectionRendererVecInput
    std::uint8_t m_nColorBlendType[0x4]; // 0xD78 ParticleColorBlendType_t
    std::uint8_t m_nShaderType[0x4]; // 0xD7C SpriteCardShaderType_t
    std::uint8_t m_strShaderOverride[0x8]; // 0xD80 CUtlString
    std::uint8_t m_flCenterXOffset[0x178]; // 0xD88 CParticleCollectionRendererFloatInput
    std::uint8_t m_flCenterYOffset[0x178]; // 0xF00 CParticleCollectionRendererFloatInput
    std::uint8_t m_flBumpStrength[0x4]; // 0x1078 float32
    std::uint8_t m_nCropTextureOverride[0x4]; // 0x107C ParticleSequenceCropOverride_t
    std::uint8_t m_vecTexturesInput[0x10]; // 0x1080 CUtlLeanVector<TextureGroup_t>
    std::uint8_t m_flAnimationRate[0x4]; // 0x1090 float32
    std::uint8_t m_nAnimationType[0x4]; // 0x1094 AnimationType_t
    std::uint8_t m_bAnimateInFPS[0x8]; // 0x1098 bool
    std::uint8_t m_flMotionVectorScaleU[0x178]; // 0x10A0 CParticleCollectionRendererFloatInput
    std::uint8_t m_flMotionVectorScaleV[0x178]; // 0x1218 CParticleCollectionRendererFloatInput
    std::uint8_t m_flSelfIllumAmount[0x178]; // 0x1390 CParticleCollectionRendererFloatInput
    std::uint8_t m_flDiffuseAmount[0x178]; // 0x1508 CParticleCollectionRendererFloatInput
    std::uint8_t m_flDiffuseClamp[0x178]; // 0x1680 CParticleCollectionRendererFloatInput
    std::uint8_t m_nLightingControlPoint[0x4]; // 0x17F8 int32
    std::uint8_t m_nOutputBlendMode[0x4]; // 0x17FC ParticleOutputBlendMode_t
    std::uint8_t m_bGammaCorrectVertexColors[0x1]; // 0x1800 bool
    std::uint8_t m_bSaturateColorPreAlphaBlend[0x7]; // 0x1801 bool
    std::uint8_t m_flAddSelfAmount[0x178]; // 0x1808 CParticleCollectionRendererFloatInput
    std::uint8_t m_flDesaturation[0x178]; // 0x1980 CParticleCollectionRendererFloatInput
    std::uint8_t m_flOverbrightFactor[0x178]; // 0x1AF8 CParticleCollectionRendererFloatInput
    std::uint8_t m_nHSVShiftControlPoint[0x4]; // 0x1C70 int32
    std::uint8_t m_nFogType[0x4]; // 0x1C74 ParticleFogType_t
    std::uint8_t m_flFogAmount[0x178]; // 0x1C78 CParticleCollectionRendererFloatInput
    std::uint8_t m_bTintByFOW[0x1]; // 0x1DF0 bool
    std::uint8_t m_bTintByGlobalLight[0x3]; // 0x1DF1 bool
    std::uint8_t m_nPerParticleAlphaReference[0x4]; // 0x1DF4 SpriteCardPerParticleScale_t
    std::uint8_t m_nPerParticleAlphaRefWindow[0x4]; // 0x1DF8 SpriteCardPerParticleScale_t
    std::uint8_t m_nAlphaReferenceType[0x4]; // 0x1DFC ParticleAlphaReferenceType_t
    std::uint8_t m_flAlphaReferenceSoftness[0x178]; // 0x1E00 CParticleCollectionRendererFloatInput
    std::uint8_t m_flSourceAlphaValueToMapToZero[0x178]; // 0x1F78 CParticleCollectionRendererFloatInput
    std::uint8_t m_flSourceAlphaValueToMapToOne[0x178]; // 0x20F0 CParticleCollectionRendererFloatInput
    std::uint8_t m_bRefract[0x1]; // 0x2268 bool
    std::uint8_t m_bRefractSolid[0x1]; // 0x2269 bool
    std::uint8_t m_bRefract2Passes[0x6]; // 0x226A bool
    std::uint8_t m_flRefractAmount[0x178]; // 0x2270 CParticleCollectionRendererFloatInput
    std::uint8_t m_nRefractBlurRadius[0x4]; // 0x23E8 int32
    std::uint8_t m_nRefractBlurType[0x4]; // 0x23EC BlurFilterType_t
    std::uint8_t m_bOnlyRenderInEffectsBloomPass[0x1]; // 0x23F0 bool
    std::uint8_t m_bOnlyRenderInEffectsWaterPass[0x1]; // 0x23F1 bool
    std::uint8_t m_bUseMixedResolutionRendering[0x1]; // 0x23F2 bool
    std::uint8_t m_bOnlyRenderInEffecsGameOverlay[0x1]; // 0x23F3 bool
    std::uint8_t m_stencilTestID[0x80]; // 0x23F4 char[128]
    std::uint8_t m_bStencilTestExclude[0x1]; // 0x2474 bool
    std::uint8_t m_stencilWriteID[0x80]; // 0x2475 char[128]
    std::uint8_t m_bWriteStencilOnDepthPass[0x1]; // 0x24F5 bool
    std::uint8_t m_bWriteStencilOnDepthFail[0x1]; // 0x24F6 bool
    std::uint8_t m_bReverseZBuffering[0x1]; // 0x24F7 bool
    std::uint8_t m_bDisableZBuffering[0x4]; // 0x24F8 bool
    std::uint8_t m_nFeatheringMode[0x4]; // 0x24FC ParticleDepthFeatheringMode_t
    std::uint8_t m_flFeatheringMinDist[0x178]; // 0x2500 CParticleCollectionRendererFloatInput
    std::uint8_t m_flFeatheringMaxDist[0x178]; // 0x2678 CParticleCollectionRendererFloatInput
    std::uint8_t m_flFeatheringFilter[0x178]; // 0x27F0 CParticleCollectionRendererFloatInput
    std::uint8_t m_flFeatheringDepthMapFilter[0x178]; // 0x2968 CParticleCollectionRendererFloatInput
    std::uint8_t m_flDepthBias[0x178]; // 0x2AE0 CParticleCollectionRendererFloatInput
    std::uint8_t m_nSortMethod[0x4]; // 0x2C58 ParticleSortingChoiceList_t
    std::uint8_t m_bBlendFramesSeq0[0x1]; // 0x2C5C bool
    std::uint8_t m_bMaxLuminanceBlendingSequence0[0x27B]; // 0x2C5D bool
};

struct CSpinUpdateBase {
    static constexpr std::size_t size = 0x1E0;
    std::uint8_t pad_0[0x1E0]; // 0x0
};

struct C_OP_OrientTo2dDirection {
    static constexpr std::size_t size = 0x8C8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_vecInput[0x6D8]; // 0x1E0 CPerParticleVecInput
    std::uint8_t m_flRotOffset[0x4]; // 0x8B8 float32
    std::uint8_t m_flSpinStrength[0x4]; // 0x8BC float32
    std::uint8_t m_nFieldOutput[0x8]; // 0x8C0 ParticleAttributeIndex_t
};

struct C_OP_RemapDotProductToCP {
    static constexpr std::size_t size = 0x7D8;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nInputCP1[0x4]; // 0x1E8 int32
    std::uint8_t m_nInputCP2[0x4]; // 0x1EC int32
    std::uint8_t m_nOutputCP[0x4]; // 0x1F0 int32
    std::uint8_t m_nOutVectorField[0x4]; // 0x1F4 int32
    std::uint8_t m_flInputMin[0x178]; // 0x1F8 CParticleCollectionFloatInput
    std::uint8_t m_flInputMax[0x178]; // 0x370 CParticleCollectionFloatInput
    std::uint8_t m_flOutputMin[0x178]; // 0x4E8 CParticleCollectionFloatInput
    std::uint8_t m_flOutputMax[0x178]; // 0x660 CParticleCollectionFloatInput
};

struct C_INIT_RemapParticleCountToNamedModelElementScalar {
    static constexpr std::size_t size = 0x238;
    std::uint8_t pad_0[0x218]; // 0x0
    std::uint8_t m_hModel[0x8]; // 0x218 CStrongHandle<InfoForResourceTypeCModel>
    std::uint8_t m_outputMinName[0x8]; // 0x220 CUtlString
    std::uint8_t m_outputMaxName[0x8]; // 0x228 CUtlString
    std::uint8_t m_bModelFromRenderer[0x8]; // 0x230 bool
};

struct C_OP_RenderTrails {
    static constexpr std::size_t size = 0x4720;
    std::uint8_t pad_0[0x3358]; // 0x0
    std::uint8_t m_bEnableFadingAndClamping[0x4]; // 0x3358 bool
    std::uint8_t m_flStartFadeDot[0x4]; // 0x335C float32
    std::uint8_t m_flEndFadeDot[0x4]; // 0x3360 float32
    std::uint8_t m_nPrevPntSource[0x4]; // 0x3364 ParticleAttributeIndex_t
    std::uint8_t m_flMaxLength[0x4]; // 0x3368 float32
    std::uint8_t m_flMinLength[0x4]; // 0x336C float32
    std::uint8_t m_bIgnoreDT[0x4]; // 0x3370 bool
    std::uint8_t m_flConstrainRadiusToLengthRatio[0x4]; // 0x3374 float32
    std::uint8_t m_flLengthScale[0x4]; // 0x3378 float32
    std::uint8_t m_flLengthFadeInTime[0x4]; // 0x337C float32
    std::uint8_t m_flRadiusHeadTaper[0x178]; // 0x3380 CPerParticleFloatInput
    std::uint8_t m_vecHeadColorScale[0x6D8]; // 0x34F8 CParticleCollectionVecInput
    std::uint8_t m_flHeadAlphaScale[0x178]; // 0x3BD0 CPerParticleFloatInput
    std::uint8_t m_flRadiusTaper[0x178]; // 0x3D48 CPerParticleFloatInput
    std::uint8_t m_vecTailColorScale[0x6D8]; // 0x3EC0 CParticleCollectionVecInput
    std::uint8_t m_flTailAlphaScale[0x178]; // 0x4598 CPerParticleFloatInput
    std::uint8_t m_nHorizCropField[0x4]; // 0x4710 ParticleAttributeIndex_t
    std::uint8_t m_nVertCropField[0x4]; // 0x4714 ParticleAttributeIndex_t
    std::uint8_t m_flForwardShift[0x4]; // 0x4718 float32
    std::uint8_t m_bFlipUVBasedOnPitchYaw[0x4]; // 0x471C bool
};

struct C_OP_SetControlPointPositionToTimeOfDayValue {
    static constexpr std::size_t size = 0x280;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nControlPointNumber[0x4]; // 0x1E8 int32
    std::uint8_t m_pszTimeOfDayParameter[0x80]; // 0x1EC char[128]
    std::uint8_t m_vecDefaultValue[0x14]; // 0x26C Vector
};

struct C_OP_DecayMaintainCount {
    static constexpr std::size_t size = 0x380;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nParticlesToMaintain[0x4]; // 0x1E0 int32
    std::uint8_t m_flDecayDelay[0x4]; // 0x1E4 float32
    std::uint8_t m_nSnapshotControlPoint[0x8]; // 0x1E8 int32
    std::uint8_t m_strSnapshotSubset[0x8]; // 0x1F0 CUtlString
    std::uint8_t m_bLifespanDecay[0x8]; // 0x1F8 bool
    std::uint8_t m_flScale[0x178]; // 0x200 CParticleCollectionFloatInput
    std::uint8_t m_bKillNewest[0x8]; // 0x378 bool
};

struct C_INIT_RandomModelSequence {
    static constexpr std::size_t size = 0x3F0;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_ActivityName[0x100]; // 0x1E8 char[256]
    std::uint8_t m_SequenceName[0x100]; // 0x2E8 char[256]
    std::uint8_t m_hModel[0x8]; // 0x3E8 CStrongHandle<InfoForResourceTypeCModel>
};

struct C_OP_ExternalGameImpulseForce {
    static constexpr std::size_t size = 0x370;
    std::uint8_t pad_0[0x1F0]; // 0x0
    std::uint8_t m_flForceScale[0x178]; // 0x1F0 CPerParticleFloatInput
    std::uint8_t m_bRopes[0x1]; // 0x368 bool
    std::uint8_t m_bRopesZOnly[0x1]; // 0x369 bool
    std::uint8_t m_bExplosions[0x1]; // 0x36A bool
    std::uint8_t m_bParticles[0x5]; // 0x36B bool
};

struct C_OP_RemapAverageHitboxSpeedtoCP {
    static constexpr std::size_t size = 0xF38;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nInControlPointNumber[0x4]; // 0x1E8 int32
    std::uint8_t m_nOutControlPointNumber[0x4]; // 0x1EC int32
    std::uint8_t m_nField[0x4]; // 0x1F0 int32
    std::uint8_t m_nHitboxDataType[0x4]; // 0x1F4 ParticleHitboxDataSelection_t
    std::uint8_t m_flInputMin[0x178]; // 0x1F8 CParticleCollectionFloatInput
    std::uint8_t m_flInputMax[0x178]; // 0x370 CParticleCollectionFloatInput
    std::uint8_t m_flOutputMin[0x178]; // 0x4E8 CParticleCollectionFloatInput
    std::uint8_t m_flOutputMax[0x178]; // 0x660 CParticleCollectionFloatInput
    std::uint8_t m_nHeightControlPointNumber[0x8]; // 0x7D8 int32
    std::uint8_t m_vecComparisonVelocity[0x6D8]; // 0x7E0 CParticleCollectionVecInput
    std::uint8_t m_HitboxSetName[0x80]; // 0xEB8 char[128]
};

struct C_INIT_RandomAlpha {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E8 ParticleAttributeIndex_t
    std::uint8_t m_nAlphaMin[0x4]; // 0x1EC int32
    std::uint8_t m_nAlphaMax[0xC]; // 0x1F0 int32
    std::uint8_t m_flAlphaRandExponent[0x4]; // 0x1FC float32
};

struct C_OP_NormalizeVector {
    static constexpr std::size_t size = 0x1E8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_flScale[0x4]; // 0x1E4 float32
};

struct C_OP_FadeInSimple {
    static constexpr std::size_t size = 0x1E8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flFadeInTime[0x4]; // 0x1E0 float32
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E4 ParticleAttributeIndex_t
};

struct C_OP_RepeatedTriggerChildGroup {
    static constexpr std::size_t size = 0x660;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nChildGroupID[0x8]; // 0x1E8 int32
    std::uint8_t m_flClusterRefireTime[0x178]; // 0x1F0 CParticleCollectionFloatInput
    std::uint8_t m_flClusterSize[0x178]; // 0x368 CParticleCollectionFloatInput
    std::uint8_t m_flClusterCooldown[0x178]; // 0x4E0 CParticleCollectionFloatInput
    std::uint8_t m_bLimitChildCount[0x8]; // 0x658 bool
};

struct C_OP_RemapVelocityToVector {
    static constexpr std::size_t size = 0x1F0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_flScale[0x4]; // 0x1E4 float32
    std::uint8_t m_bNormalize[0x8]; // 0x1E8 bool
};

struct C_INIT_SetHitboxToClosest {
    static constexpr std::size_t size = 0xAD0;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nControlPointNumber[0x4]; // 0x1E8 int32
    std::uint8_t m_nDesiredHitbox[0x4]; // 0x1EC int32
    std::uint8_t m_vecHitBoxScale[0x6D8]; // 0x1F0 CParticleCollectionVecInput
    std::uint8_t m_HitboxSetName[0x80]; // 0x8C8 char[128]
    std::uint8_t m_bUseBones[0x1]; // 0x948 bool
    std::uint8_t m_bUseClosestPointOnHitbox[0x3]; // 0x949 bool
    std::uint8_t m_nTestType[0x4]; // 0x94C ClosestPointTestType_t
    std::uint8_t m_flHybridRatio[0x178]; // 0x950 CParticleCollectionFloatInput
    std::uint8_t m_bUpdatePosition[0x8]; // 0xAC8 bool
};

struct C_INIT_RingWave {
    static constexpr std::size_t size = 0xE18;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_TransformInput[0x68]; // 0x1E8 CParticleTransformInput
    std::uint8_t m_flParticlesPerOrbit[0x178]; // 0x250 CParticleCollectionFloatInput
    std::uint8_t m_flInitialRadius[0x178]; // 0x3C8 CPerParticleFloatInput
    std::uint8_t m_flThickness[0x178]; // 0x540 CPerParticleFloatInput
    std::uint8_t m_flInitialSpeedMin[0x178]; // 0x6B8 CPerParticleFloatInput
    std::uint8_t m_flInitialSpeedMax[0x178]; // 0x830 CPerParticleFloatInput
    std::uint8_t m_flRoll[0x178]; // 0x9A8 CPerParticleFloatInput
    std::uint8_t m_flPitch[0x178]; // 0xB20 CPerParticleFloatInput
    std::uint8_t m_flYaw[0x178]; // 0xC98 CPerParticleFloatInput
    std::uint8_t m_bEvenDistribution[0x1]; // 0xE10 bool
    std::uint8_t m_bXYVelocityOnly[0x7]; // 0xE11 bool
};

struct C_INIT_RandomTrailLength {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_flMinLength[0x4]; // 0x1E8 float32
    std::uint8_t m_flMaxLength[0x4]; // 0x1EC float32
    std::uint8_t m_flLengthRandExponent[0x8]; // 0x1F0 float32
};

struct C_OP_RemapScalar {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldInput[0x4]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E4 ParticleAttributeIndex_t
    std::uint8_t m_flInputMin[0x4]; // 0x1E8 float32
    std::uint8_t m_flInputMax[0x4]; // 0x1EC float32
    std::uint8_t m_flOutputMin[0x4]; // 0x1F0 float32
    std::uint8_t m_flOutputMax[0x4]; // 0x1F4 float32
    std::uint8_t m_bOldCode[0x8]; // 0x1F8 bool
};

struct C_OP_DistanceBetweenTransforms {
    static constexpr std::size_t size = 0x930;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldOutput[0x8]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_TransformStart[0x68]; // 0x1E8 CParticleTransformInput
    std::uint8_t m_TransformEnd[0x68]; // 0x250 CParticleTransformInput
    std::uint8_t m_flInputMin[0x178]; // 0x2B8 CPerParticleFloatInput
    std::uint8_t m_flInputMax[0x178]; // 0x430 CPerParticleFloatInput
    std::uint8_t m_flOutputMin[0x178]; // 0x5A8 CPerParticleFloatInput
    std::uint8_t m_flOutputMax[0x178]; // 0x720 CPerParticleFloatInput
    std::uint8_t m_flMaxTraceLength[0x4]; // 0x898 float32
    std::uint8_t m_flLOSScale[0x4]; // 0x89C float32
    std::uint8_t m_CollisionGroupName[0x80]; // 0x8A0 char[128]
    std::uint8_t m_nTraceSet[0x4]; // 0x920 ParticleTraceSet_t
    std::uint8_t m_bLOS[0x4]; // 0x924 bool
    std::uint8_t m_nSetMethod[0x8]; // 0x928 ParticleSetMethod_t
};

struct C_OP_DecayOffscreen {
    static constexpr std::size_t size = 0x358;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flOffscreenTime[0x178]; // 0x1E0 CParticleCollectionFloatInput
};

struct C_INIT_CreateSequentialPath {
    static constexpr std::size_t size = 0x240;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_fMaxDistance[0x4]; // 0x1E8 float32
    std::uint8_t m_flNumToAssign[0x4]; // 0x1EC float32
    std::uint8_t m_bLoop[0x1]; // 0x1F0 bool
    std::uint8_t m_bCPPairs[0x1]; // 0x1F1 bool
    std::uint8_t m_bSaveOffset[0xE]; // 0x1F2 bool
    std::uint8_t m_PathParams[0x40]; // 0x200 CPathParameters
};

struct C_OP_EndCapTimedDecay {
    static constexpr std::size_t size = 0x358;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flDecayTime[0x178]; // 0x1E0 CParticleCollectionFloatInput
};

struct C_OP_RemapDistanceToLineSegmentBase {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nCP0[0x4]; // 0x1E0 int32
    std::uint8_t m_nCP1[0x4]; // 0x1E4 int32
    std::uint8_t m_flMinInputValue[0x4]; // 0x1E8 float32
    std::uint8_t m_flMaxInputValue[0x4]; // 0x1EC float32
    std::uint8_t m_bInfiniteLine[0x8]; // 0x1F0 bool
};

struct C_OP_ContinuousEmitter {
    static constexpr std::size_t size = 0x680;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_flEmissionDuration[0x178]; // 0x1E8 CParticleCollectionFloatInput
    std::uint8_t m_flStartTime[0x178]; // 0x360 CParticleCollectionFloatInput
    std::uint8_t m_flEmitRate[0x178]; // 0x4D8 CParticleCollectionFloatInput
    std::uint8_t m_flEmissionScale[0x4]; // 0x650 float32
    std::uint8_t m_flScalePerParentParticle[0x4]; // 0x654 float32
    std::uint8_t m_bInitFromKilledParentParticles[0x4]; // 0x658 bool
    std::uint8_t m_nEventType[0x4]; // 0x65C EventTypeSelection_t
    std::uint8_t m_nSnapshotControlPoint[0x8]; // 0x660 int32
    std::uint8_t m_strSnapshotSubset[0x8]; // 0x668 CUtlString
    std::uint8_t m_nLimitPerUpdate[0x4]; // 0x670 int32
    std::uint8_t m_bForceEmitOnFirstUpdate[0x1]; // 0x674 bool
    std::uint8_t m_bForceEmitOnLastUpdate[0xB]; // 0x675 bool
};

struct C_OP_OscillateVectorSimple {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_Rate[0xC]; // 0x1E0 Vector
    std::uint8_t m_Frequency[0xC]; // 0x1EC Vector
    std::uint8_t m_nField[0x4]; // 0x1F8 ParticleAttributeIndex_t
    std::uint8_t m_flOscMult[0x4]; // 0x1FC float32
    std::uint8_t m_flOscAdd[0x4]; // 0x200 float32
    std::uint8_t m_bOffset[0x4]; // 0x204 bool
};

struct C_INIT_SequenceLifeTime {
    static constexpr std::size_t size = 0x1F0;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_flFramerate[0x8]; // 0x1E8 float32
};

struct C_INIT_MoveBetweenPoints {
    static constexpr std::size_t size = 0x948;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_flSpeedMin[0x178]; // 0x1E8 CPerParticleFloatInput
    std::uint8_t m_flSpeedMax[0x178]; // 0x360 CPerParticleFloatInput
    std::uint8_t m_flEndSpread[0x178]; // 0x4D8 CPerParticleFloatInput
    std::uint8_t m_flStartOffset[0x178]; // 0x650 CPerParticleFloatInput
    std::uint8_t m_flEndOffset[0x178]; // 0x7C8 CPerParticleFloatInput
    std::uint8_t m_nEndControlPointNumber[0x4]; // 0x940 int32
    std::uint8_t m_bTrailBias[0x4]; // 0x944 bool
};

struct C_INIT_StatusEffectTf {
    static constexpr std::size_t size = 0x238;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_flSFXColorWarpAmount[0x4]; // 0x1E8 float32
    std::uint8_t m_flSFXNormalAmount[0x4]; // 0x1EC float32
    std::uint8_t m_flSFXMetalnessAmount[0x4]; // 0x1F0 float32
    std::uint8_t m_flSFXRoughnessAmount[0x4]; // 0x1F4 float32
    std::uint8_t m_flSFXSelfIllumAmount[0x4]; // 0x1F8 float32
    std::uint8_t m_flSFXSScale[0x4]; // 0x1FC float32
    std::uint8_t m_flSFXSScrollX[0x4]; // 0x200 float32
    std::uint8_t m_flSFXSScrollY[0x4]; // 0x204 float32
    std::uint8_t m_flSFXSScrollZ[0x4]; // 0x208 float32
    std::uint8_t m_flSFXSOffsetX[0x4]; // 0x20C float32
    std::uint8_t m_flSFXSOffsetY[0x4]; // 0x210 float32
    std::uint8_t m_flSFXSOffsetZ[0x4]; // 0x214 float32
    std::uint8_t m_nDetailCombo[0x4]; // 0x218 DetailCombo_t
    std::uint8_t m_flSFXSDetailAmount[0x4]; // 0x21C float32
    std::uint8_t m_flSFXSDetailScale[0x4]; // 0x220 float32
    std::uint8_t m_flSFXSDetailScrollX[0x4]; // 0x224 float32
    std::uint8_t m_flSFXSDetailScrollY[0x4]; // 0x228 float32
    std::uint8_t m_flSFXSDetailScrollZ[0x4]; // 0x22C float32
    std::uint8_t m_flSFXSUseModelUVs[0x4]; // 0x230 float32
    std::uint8_t m_flSFXEnvMapAmount[0x4]; // 0x234 float32
};

struct C_OP_SetUserEvent {
    static constexpr std::size_t size = 0x658;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flInput[0x178]; // 0x1E0 CPerParticleFloatInput
    std::uint8_t m_flRisingEdge[0x178]; // 0x358 CPerParticleFloatInput
    std::uint8_t m_nRisingEventType[0x8]; // 0x4D0 EventTypeSelection_t
    std::uint8_t m_flFallingEdge[0x178]; // 0x4D8 CPerParticleFloatInput
    std::uint8_t m_nFallingEventType[0x8]; // 0x650 EventTypeSelection_t
};

struct C_OP_QuantizeFloat {
    static constexpr std::size_t size = 0x380;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_InputValue[0x178]; // 0x1E0 CPerParticleFloatInput
    std::uint8_t m_nOutputField[0x28]; // 0x358 ParticleAttributeIndex_t
};

struct C_OP_BasicMovement {
    static constexpr std::size_t size = 0xEA8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_Gravity[0x6D8]; // 0x1E0 CParticleCollectionVecInput
    std::uint8_t m_fDrag[0x178]; // 0x8B8 CParticleCollectionFloatInput
    std::uint8_t m_massControls[0x470]; // 0xA30 CParticleMassCalculationParameters
    std::uint8_t m_nMaxConstraintPasses[0x4]; // 0xEA0 int32
    std::uint8_t m_bUseNewCode[0x4]; // 0xEA4 bool
};

struct C_INIT_RandomNamedModelElement {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_hModel[0x8]; // 0x1E8 CStrongHandle<InfoForResourceTypeCModel>
    std::uint8_t m_names[0x18]; // 0x1F0 CUtlVector<CUtlString>
    std::uint8_t m_bShuffle[0x1]; // 0x208 bool
    std::uint8_t m_bLinear[0x1]; // 0x209 bool
    std::uint8_t m_bModelFromRenderer[0x2]; // 0x20A bool
    std::uint8_t m_nFieldOutput[0x4]; // 0x20C ParticleAttributeIndex_t
};

struct C_INIT_InitFromParentKilled {
    static constexpr std::size_t size = 0x270;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nAttributeToCopy[0x4]; // 0x1E8 ParticleAttributeIndex_t
    std::uint8_t m_nEventType[0x84]; // 0x1EC EventTypeSelection_t
};

struct C_OP_Callback {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x230]; // 0x0
};

struct CParticleFunction {
    static constexpr std::size_t size = 0x1E0;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_flOpStrength[0x178]; // 0x8 CParticleCollectionFloatInput
    std::uint8_t m_nOpEndCapState[0x4]; // 0x180 ParticleEndcapMode_t
    std::uint8_t m_nToolsState[0x4]; // 0x184 ParticleToolsState_t
    std::uint8_t m_flOpStartFadeInTime[0x4]; // 0x188 float32
    std::uint8_t m_flOpEndFadeInTime[0x4]; // 0x18C float32
    std::uint8_t m_flOpStartFadeOutTime[0x4]; // 0x190 float32
    std::uint8_t m_flOpEndFadeOutTime[0x4]; // 0x194 float32
    std::uint8_t m_flOpFadeOscillatePeriod[0x4]; // 0x198 float32
    std::uint8_t m_bNormalizeToStopTime[0x4]; // 0x19C bool
    std::uint8_t m_flOpTimeOffsetMin[0x4]; // 0x1A0 float32
    std::uint8_t m_flOpTimeOffsetMax[0x4]; // 0x1A4 float32
    std::uint8_t m_nOpTimeOffsetSeed[0x4]; // 0x1A8 int32
    std::uint8_t m_nOpTimeScaleSeed[0x4]; // 0x1AC int32
    std::uint8_t m_flOpTimeScaleMin[0x4]; // 0x1B0 float32
    std::uint8_t m_flOpTimeScaleMax[0x6]; // 0x1B4 float32
    std::uint8_t m_bDisableOperator[0x6]; // 0x1BA bool
    std::uint8_t m_Notes[0x20]; // 0x1C0 CUtlString
};

struct C_OP_GlobalLight {
    static constexpr std::size_t size = 0x1E8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flScale[0x4]; // 0x1E0 float32
    std::uint8_t m_bClampLowerRange[0x1]; // 0x1E4 bool
    std::uint8_t m_bClampUpperRange[0x3]; // 0x1E5 bool
};

struct C_INIT_OffsetVectorToVector {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nFieldInput[0x4]; // 0x1E8 ParticleAttributeIndex_t
    std::uint8_t m_nFieldOutput[0x4]; // 0x1EC ParticleAttributeIndex_t
    std::uint8_t m_vecOutputMin[0xC]; // 0x1F0 Vector
    std::uint8_t m_vecOutputMax[0xC]; // 0x1FC Vector
    std::uint8_t m_randomnessParameters[0x8]; // 0x208 CRandomNumberGeneratorParameters
};

struct C_OP_SetPerChildControlPointFromAttribute {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nChildGroupID[0x4]; // 0x1E0 int32
    std::uint8_t m_nFirstControlPoint[0x4]; // 0x1E4 int32
    std::uint8_t m_nNumControlPoints[0x4]; // 0x1E8 int32
    std::uint8_t m_nParticleIncrement[0x4]; // 0x1EC int32
    std::uint8_t m_nFirstSourcePoint[0x4]; // 0x1F0 int32
    std::uint8_t m_bNumBasedOnParticleCount[0x4]; // 0x1F4 bool
    std::uint8_t m_nAttributeToRead[0x4]; // 0x1F8 ParticleAttributeIndex_t
    std::uint8_t m_nCPField[0x4]; // 0x1FC int32
};

struct C_OP_SetParentControlPointsToChildCP {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nChildGroupID[0x4]; // 0x1E8 int32
    std::uint8_t m_nChildControlPoint[0x4]; // 0x1EC int32
    std::uint8_t m_nNumControlPoints[0x4]; // 0x1F0 int32
    std::uint8_t m_nFirstSourcePoint[0x4]; // 0x1F4 int32
    std::uint8_t m_bSetOrientation[0x8]; // 0x1F8 bool
};

struct C_OP_BoxConstraint {
    static constexpr std::size_t size = 0xF98;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_vecMin[0x6D8]; // 0x1E0 CParticleCollectionVecInput
    std::uint8_t m_vecMax[0x6D8]; // 0x8B8 CParticleCollectionVecInput
    std::uint8_t m_nCP[0x4]; // 0xF90 int32
    std::uint8_t m_bLocalSpace[0x1]; // 0xF94 bool
    std::uint8_t m_bAccountForRadius[0x3]; // 0xF95 bool
};

struct C_INIT_CreatePhyllotaxis {
    static constexpr std::size_t size = 0x218;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nControlPointNumber[0x4]; // 0x1E8 int32
    std::uint8_t m_nScaleCP[0x4]; // 0x1EC int32
    std::uint8_t m_nComponent[0x4]; // 0x1F0 int32
    std::uint8_t m_fRadCentCore[0x4]; // 0x1F4 float32
    std::uint8_t m_fRadPerPoint[0x4]; // 0x1F8 float32
    std::uint8_t m_fRadPerPointTo[0x4]; // 0x1FC float32
    std::uint8_t m_fpointAngle[0x4]; // 0x200 float32
    std::uint8_t m_fsizeOverall[0x4]; // 0x204 float32
    std::uint8_t m_fRadBias[0x4]; // 0x208 float32
    std::uint8_t m_fMinRad[0x4]; // 0x20C float32
    std::uint8_t m_fDistBias[0x4]; // 0x210 float32
    std::uint8_t m_bUseLocalCoords[0x1]; // 0x214 bool
    std::uint8_t m_bUseWithContEmit[0x1]; // 0x215 bool
    std::uint8_t m_bUseOrigRadius[0x2]; // 0x216 bool
};

struct C_OP_AttractToControlPoint {
    static constexpr std::size_t size = 0x6E0;
    std::uint8_t pad_0[0x1F0]; // 0x0
    std::uint8_t m_vecComponentScale[0x10]; // 0x1F0 Vector
    std::uint8_t m_fForceAmount[0x178]; // 0x200 CPerParticleFloatInput
    std::uint8_t m_fMinimumDistance[0x178]; // 0x378 CPerParticleFloatInput
    std::uint8_t m_fFalloffPower[0x8]; // 0x4F0 float32
    std::uint8_t m_TransformInput[0x68]; // 0x4F8 CParticleTransformInput
    std::uint8_t m_fForceAmountMin[0x178]; // 0x560 CPerParticleFloatInput
    std::uint8_t m_bApplyMinForce[0x8]; // 0x6D8 bool
};

struct C_INIT_RandomLifeTime {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_fLifetimeMin[0x4]; // 0x1E8 float32
    std::uint8_t m_fLifetimeMax[0x4]; // 0x1EC float32
    std::uint8_t m_fLifetimeRandExponent[0x8]; // 0x1F0 float32
};

struct C_INIT_RemapParticleCountToNamedModelSequenceScalar {
    static constexpr std::size_t size = 0x238;
    std::uint8_t pad_0[0x238]; // 0x0
};

struct C_INIT_VelocityRadialRandom {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_bPerParticleCenter[0x4]; // 0x1E8 bool
    std::uint8_t m_nControlPointNumber[0x4]; // 0x1EC int32
    std::uint8_t m_vecPosition[0x6D8]; // 0x1F0 CPerParticleVecInput
    std::uint8_t m_vecFwd[0x6D8]; // 0x8C8 CPerParticleVecInput
    std::uint8_t m_fSpeedMin[0x178]; // 0xFA0 CPerParticleFloatInput
    std::uint8_t m_fSpeedMax[0x178]; // 0x1118 CPerParticleFloatInput
    std::uint8_t m_vecLocalCoordinateSystemSpeedScale[0xD]; // 0x1290 Vector
    std::uint8_t m_bIgnoreDelta[0x3]; // 0x129D bool
};

struct C_INIT_RandomRadius {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_flRadiusMin[0x4]; // 0x1E8 float32
    std::uint8_t m_flRadiusMax[0x4]; // 0x1EC float32
    std::uint8_t m_flRadiusRandExponent[0x8]; // 0x1F0 float32
};

struct C_OP_Orient2DRelToCP {
    static constexpr std::size_t size = 0x1F0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flRotOffset[0x4]; // 0x1E0 float32
    std::uint8_t m_flSpinStrength[0x4]; // 0x1E4 float32
    std::uint8_t m_nCP[0x4]; // 0x1E8 int32
    std::uint8_t m_nFieldOutput[0x4]; // 0x1EC ParticleAttributeIndex_t
};

struct TextureControls_t {
    static constexpr std::size_t size = 0xA68;
    std::uint8_t m_flFinalTextureScaleU[0x178]; // 0x0 CParticleCollectionRendererFloatInput
    std::uint8_t m_flFinalTextureScaleV[0x178]; // 0x178 CParticleCollectionRendererFloatInput
    std::uint8_t m_flFinalTextureOffsetU[0x178]; // 0x2F0 CParticleCollectionRendererFloatInput
    std::uint8_t m_flFinalTextureOffsetV[0x178]; // 0x468 CParticleCollectionRendererFloatInput
    std::uint8_t m_flFinalTextureUVRotation[0x178]; // 0x5E0 CParticleCollectionRendererFloatInput
    std::uint8_t m_flZoomScale[0x178]; // 0x758 CParticleCollectionRendererFloatInput
    std::uint8_t m_flDistortion[0x178]; // 0x8D0 CParticleCollectionRendererFloatInput
    std::uint8_t m_bRandomizeOffsets[0x1]; // 0xA48 bool
    std::uint8_t m_bClampUVs[0x3]; // 0xA49 bool
    std::uint8_t m_nPerParticleBlend[0x4]; // 0xA4C SpriteCardPerParticleScale_t
    std::uint8_t m_nPerParticleScale[0x4]; // 0xA50 SpriteCardPerParticleScale_t
    std::uint8_t m_nPerParticleOffsetU[0x4]; // 0xA54 SpriteCardPerParticleScale_t
    std::uint8_t m_nPerParticleOffsetV[0x4]; // 0xA58 SpriteCardPerParticleScale_t
    std::uint8_t m_nPerParticleRotation[0x4]; // 0xA5C SpriteCardPerParticleScale_t
    std::uint8_t m_nPerParticleZoom[0x4]; // 0xA60 SpriteCardPerParticleScale_t
    std::uint8_t m_nPerParticleDistortion[0x4]; // 0xA64 SpriteCardPerParticleScale_t
};

struct ControlPointReference_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t m_controlPointNameString[0x4]; // 0x0 int32
    std::uint8_t m_vOffsetFromControlPoint[0xC]; // 0x4 Vector
    std::uint8_t m_bOffsetInLocalSpace[0x4]; // 0x10 bool
};

struct C_OP_SetControlPointToVectorExpression {
    static constexpr std::size_t size = 0x1120;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nExpression[0x4]; // 0x1E8 VectorExpressionType_t
    std::uint8_t m_nOutputCP[0x4]; // 0x1EC int32
    std::uint8_t m_vInput1[0x6D8]; // 0x1F0 CParticleCollectionVecInput
    std::uint8_t m_vInput2[0x6D8]; // 0x8C8 CParticleCollectionVecInput
    std::uint8_t m_flLerp[0x178]; // 0xFA0 CPerParticleFloatInput
    std::uint8_t m_bNormalizedOutput[0x8]; // 0x1118 bool
};

struct C_OP_LightningSnapshotGenerator {
    static constexpr std::size_t size = 0x16A0;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nCPSnapshot[0x4]; // 0x1E8 int32
    std::uint8_t m_nCPStartPnt[0x4]; // 0x1EC int32
    std::uint8_t m_nCPEndPnt[0x8]; // 0x1F0 int32
    std::uint8_t m_flSegments[0x178]; // 0x1F8 CParticleCollectionFloatInput
    std::uint8_t m_flOffset[0x178]; // 0x370 CParticleCollectionFloatInput
    std::uint8_t m_flOffsetDecay[0x178]; // 0x4E8 CParticleCollectionFloatInput
    std::uint8_t m_flRecalcRate[0x178]; // 0x660 CParticleCollectionFloatInput
    std::uint8_t m_flUVScale[0x178]; // 0x7D8 CParticleCollectionFloatInput
    std::uint8_t m_flUVOffset[0x178]; // 0x950 CParticleCollectionFloatInput
    std::uint8_t m_flSplitRate[0x178]; // 0xAC8 CParticleCollectionFloatInput
    std::uint8_t m_flRecursionSplitScale[0x178]; // 0xC40 CParticleCollectionFloatInput
    std::uint8_t m_bScaleBranchDistance[0x8]; // 0xDB8 bool
    std::uint8_t m_flBranchDistanceScale[0x178]; // 0xDC0 CParticleCollectionFloatInput
    std::uint8_t m_bScaleBranchOffset[0x8]; // 0xF38 bool
    std::uint8_t m_flBranchOffsetScale[0x178]; // 0xF40 CParticleCollectionFloatInput
    std::uint8_t m_flBranchTwist[0x178]; // 0x10B8 CParticleCollectionFloatInput
    std::uint8_t m_nBranchBehavior[0x8]; // 0x1230 ParticleLightnintBranchBehavior_t
    std::uint8_t m_flRadiusStart[0x178]; // 0x1238 CParticleCollectionFloatInput
    std::uint8_t m_flRadiusEnd[0x178]; // 0x13B0 CParticleCollectionFloatInput
    std::uint8_t m_flDedicatedPool[0x178]; // 0x1528 CParticleCollectionFloatInput
};

struct C_OP_RemapNamedModelMeshGroupOnceTimed {
    static constexpr std::size_t size = 0x240;
    std::uint8_t pad_0[0x240]; // 0x0
};

struct C_INIT_RemapQAnglesToRotation {
    static constexpr std::size_t size = 0x250;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_TransformInput[0x68]; // 0x1E8 CParticleTransformInput
};

struct C_INIT_PositionWarp {
    static constexpr std::size_t size = 0xFB8;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_vecWarpMin[0x6D8]; // 0x1E8 CParticleCollectionVecInput
    std::uint8_t m_vecWarpMax[0x6D8]; // 0x8C0 CParticleCollectionVecInput
    std::uint8_t m_nScaleControlPointNumber[0x4]; // 0xF98 int32
    std::uint8_t m_nControlPointNumber[0x4]; // 0xF9C int32
    std::uint8_t m_nRadiusComponent[0x4]; // 0xFA0 int32
    std::uint8_t m_flWarpTime[0x4]; // 0xFA4 float32
    std::uint8_t m_flWarpStartTime[0x4]; // 0xFA8 float32
    std::uint8_t m_flPrevPosScale[0x4]; // 0xFAC float32
    std::uint8_t m_bInvertWarp[0x1]; // 0xFB0 bool
    std::uint8_t m_bUseCount[0x7]; // 0xFB1 bool
};

struct C_OP_SetControlPointFieldToScalarExpression {
    static constexpr std::size_t size = 0x7D8;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nExpression[0x8]; // 0x1E8 ScalarExpressionType_t
    std::uint8_t m_flInput1[0x178]; // 0x1F0 CParticleCollectionFloatInput
    std::uint8_t m_flInput2[0x178]; // 0x368 CParticleCollectionFloatInput
    std::uint8_t m_flOutputRemap[0x178]; // 0x4E0 CParticleRemapFloatInput
    std::uint8_t m_nOutputCP[0x4]; // 0x658 int32
    std::uint8_t m_nOutVectorField[0x4]; // 0x65C int32
    std::uint8_t m_flInterpolation[0x178]; // 0x660 CParticleCollectionFloatInput
};

struct C_OP_CreateParticleSystemRenderer {
    static constexpr std::size_t size = 0x930;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_hEffect[0x8]; // 0x230 CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    std::uint8_t m_nEventType[0x8]; // 0x238 EventTypeSelection_t
    std::uint8_t m_vecCPs[0x10]; // 0x240 CUtlLeanVector<CPAssignment_t>
    std::uint8_t m_szParticleConfig[0x8]; // 0x250 CUtlString
    std::uint8_t m_AggregationPos[0x6D8]; // 0x258 CPerParticleVecInput
};

struct CParticleFunctionForce {
    static constexpr std::size_t size = 0x1F0;
    std::uint8_t pad_0[0x1F0]; // 0x0
};

struct C_INIT_RandomVectorComponent {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_flMin[0x4]; // 0x1E8 float32
    std::uint8_t m_flMax[0x4]; // 0x1EC float32
    std::uint8_t m_nFieldOutput[0x4]; // 0x1F0 ParticleAttributeIndex_t
    std::uint8_t m_nComponent[0x4]; // 0x1F4 int32
};

struct C_OP_InheritFromParentParticles {
    static constexpr std::size_t size = 0x1F0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flScale[0x4]; // 0x1E0 float32
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E4 ParticleAttributeIndex_t
    std::uint8_t m_nIncrement[0x4]; // 0x1E8 int32
    std::uint8_t m_bRandomDistribution[0x4]; // 0x1EC bool
};

struct C_INIT_SetVectorAttributeToVectorExpression {
    static constexpr std::size_t size = 0x1190;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nExpression[0x8]; // 0x1E8 VectorExpressionType_t
    std::uint8_t m_vInput1[0x6D8]; // 0x1F0 CPerParticleVecInput
    std::uint8_t m_vInput2[0x6D8]; // 0x8C8 CPerParticleVecInput
    std::uint8_t m_flLerp[0x178]; // 0xFA0 CPerParticleFloatInput
    std::uint8_t m_nOutputField[0x4]; // 0x1118 ParticleAttributeIndex_t
    std::uint8_t m_nSetMethod[0x4]; // 0x111C ParticleSetMethod_t
    std::uint8_t m_bNormalizedOutput[0x70]; // 0x1120 bool
};

struct C_OP_RemapTransformVisibilityToVector {
    static constexpr std::size_t size = 0x278;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nSetMethod[0x8]; // 0x1E0 ParticleSetMethod_t
    std::uint8_t m_TransformInput[0x68]; // 0x1E8 CParticleTransformInput
    std::uint8_t m_nFieldOutput[0x4]; // 0x250 ParticleAttributeIndex_t
    std::uint8_t m_flInputMin[0x4]; // 0x254 float32
    std::uint8_t m_flInputMax[0x4]; // 0x258 float32
    std::uint8_t m_vecOutputMin[0xC]; // 0x25C Vector
    std::uint8_t m_vecOutputMax[0xC]; // 0x268 Vector
    std::uint8_t m_flRadius[0x4]; // 0x274 float32
};

struct C_OP_DirectionBetweenVecsToVec {
    static constexpr std::size_t size = 0xF98;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldOutput[0x8]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_vecPoint1[0x6D8]; // 0x1E8 CPerParticleVecInput
    std::uint8_t m_vecPoint2[0x6D8]; // 0x8C0 CPerParticleVecInput
};

struct C_OP_MovementLoopInsideSphere {
    static constexpr std::size_t size = 0xA40;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nCP[0x8]; // 0x1E0 int32
    std::uint8_t m_flDistance[0x178]; // 0x1E8 CParticleCollectionFloatInput
    std::uint8_t m_vecScale[0x6D8]; // 0x360 CParticleCollectionVecInput
    std::uint8_t m_nDistSqrAttr[0x8]; // 0xA38 ParticleAttributeIndex_t
};

struct C_OP_RenderSimpleModelCollection {
    static constexpr std::size_t size = 0x5B0;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_bCenterOffset[0x8]; // 0x230 bool
    std::uint8_t m_hModel[0x8]; // 0x238 CStrongHandle<InfoForResourceTypeCModel>
    std::uint8_t m_modelInput[0x60]; // 0x240 CParticleModelInput
    std::uint8_t m_fSizeCullScale[0x178]; // 0x2A0 CParticleCollectionFloatInput
    std::uint8_t m_bDisableShadows[0x1]; // 0x418 bool
    std::uint8_t m_bDisableMotionBlur[0x1]; // 0x419 bool
    std::uint8_t m_bAcceptsDecals[0x6]; // 0x41A bool
    std::uint8_t m_fDrawFilter[0x178]; // 0x420 CPerParticleFloatInput
    std::uint8_t m_nAngularVelocityField[0x18]; // 0x598 ParticleAttributeIndex_t
};

struct C_OP_QuantizeCPComponent {
    static constexpr std::size_t size = 0x4E0;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_flInputValue[0x178]; // 0x1E8 CParticleCollectionFloatInput
    std::uint8_t m_nCPOutput[0x4]; // 0x360 int32
    std::uint8_t m_nOutVectorField[0x4]; // 0x364 int32
    std::uint8_t m_flQuantizeValue[0x178]; // 0x368 CParticleCollectionFloatInput
};

struct C_OP_PlayEndCapWhenFinished {
    static constexpr std::size_t size = 0x1F0;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_bFireOnEmissionEnd[0x1]; // 0x1E8 bool
    std::uint8_t m_bIncludeChildren[0x7]; // 0x1E9 bool
};

struct C_INIT_InitFloatCollection {
    static constexpr std::size_t size = 0x368;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_InputValue[0x178]; // 0x1E8 CParticleCollectionFloatInput
    std::uint8_t m_nOutputField[0x8]; // 0x360 ParticleAttributeIndex_t
};

struct CPathParameters {
    static constexpr std::size_t size = 0x40;
    std::uint8_t m_nStartControlPointNumber[0x4]; // 0x0 int32
    std::uint8_t m_nMidControlPointNumber[0x4]; // 0x4 int32
    std::uint8_t m_nEndControlPointNumber[0x4]; // 0x8 int32
    std::uint8_t m_nBulgeControl[0x4]; // 0xC int32
    std::uint8_t m_flBulge[0x4]; // 0x10 float32
    std::uint8_t m_flMidPoint[0x4]; // 0x14 float32
    std::uint8_t m_vStartPointOffset[0xC]; // 0x18 Vector
    std::uint8_t m_vMidPointOffset[0xC]; // 0x24 Vector
    std::uint8_t m_vEndOffset[0x10]; // 0x30 Vector
};

struct C_OP_RemapScalarEndCap {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldInput[0x4]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E4 ParticleAttributeIndex_t
    std::uint8_t m_flInputMin[0x4]; // 0x1E8 float32
    std::uint8_t m_flInputMax[0x4]; // 0x1EC float32
    std::uint8_t m_flOutputMin[0x4]; // 0x1F0 float32
    std::uint8_t m_flOutputMax[0x4]; // 0x1F4 float32
};

struct C_INIT_CreateFromPlaneCache {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_vecOffsetMin[0xC]; // 0x1E8 Vector
    std::uint8_t m_vecOffsetMax[0xD]; // 0x1F4 Vector
    std::uint8_t m_bUseNormal[0x7]; // 0x201 bool
};

struct C_OP_LazyCullCompareFloat {
    static constexpr std::size_t size = 0x648;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flComparsion1[0x178]; // 0x1E0 CPerParticleFloatInput
    std::uint8_t m_flComparsion2[0x178]; // 0x358 CPerParticleFloatInput
    std::uint8_t m_flCullTime[0x178]; // 0x4D0 CPerParticleFloatInput
};

struct C_OP_ControlPointToRadialScreenSpace {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nCPIn[0x4]; // 0x1E8 int32
    std::uint8_t m_vecCP1Pos[0xC]; // 0x1EC Vector
    std::uint8_t m_nCPOut[0x4]; // 0x1F8 int32
    std::uint8_t m_nCPOutField[0x4]; // 0x1FC int32
    std::uint8_t m_nCPSSPosOut[0x8]; // 0x200 int32
};

struct C_OP_SpinUpdate {
    static constexpr std::size_t size = 0x1E0;
    std::uint8_t pad_0[0x1E0]; // 0x0
};

struct C_INIT_NormalOffset {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_OffsetMin[0xC]; // 0x1E8 Vector
    std::uint8_t m_OffsetMax[0xC]; // 0x1F4 Vector
    std::uint8_t m_nControlPointNumber[0x4]; // 0x200 int32
    std::uint8_t m_bLocalCoords[0x1]; // 0x204 bool
    std::uint8_t m_bNormalize[0x3]; // 0x205 bool
};

struct C_OP_RemapDistanceToLineSegmentToVector {
    static constexpr std::size_t size = 0x218;
    std::uint8_t pad_0[0x1F8]; // 0x0
    std::uint8_t m_nFieldOutput[0x4]; // 0x1F8 ParticleAttributeIndex_t
    std::uint8_t m_vMinOutputValue[0xC]; // 0x1FC Vector
    std::uint8_t m_vMaxOutputValue[0x10]; // 0x208 Vector
};

struct C_OP_RenderAsModels {
    static constexpr std::size_t size = 0x268;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_ModelList[0x1C]; // 0x230 CUtlVector<ModelReference_t>
    std::uint8_t m_flModelScale[0x4]; // 0x24C float32
    std::uint8_t m_bFitToModelSize[0x1]; // 0x250 bool
    std::uint8_t m_bNonUniformScaling[0x3]; // 0x251 bool
    std::uint8_t m_nXAxisScalingAttribute[0x4]; // 0x254 ParticleAttributeIndex_t
    std::uint8_t m_nYAxisScalingAttribute[0x4]; // 0x258 ParticleAttributeIndex_t
    std::uint8_t m_nZAxisScalingAttribute[0x4]; // 0x25C ParticleAttributeIndex_t
    std::uint8_t m_nSizeCullBloat[0x8]; // 0x260 int32
};

struct C_INIT_CreationNoise {
    static constexpr std::size_t size = 0x218;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E8 ParticleAttributeIndex_t
    std::uint8_t m_bAbsVal[0x1]; // 0x1EC bool
    std::uint8_t m_bAbsValInv[0x3]; // 0x1ED bool
    std::uint8_t m_flOffset[0x4]; // 0x1F0 float32
    std::uint8_t m_flOutputMin[0x4]; // 0x1F4 float32
    std::uint8_t m_flOutputMax[0x4]; // 0x1F8 float32
    std::uint8_t m_flNoiseScale[0x4]; // 0x1FC float32
    std::uint8_t m_flNoiseScaleLoc[0x4]; // 0x200 float32
    std::uint8_t m_vecOffsetLoc[0xC]; // 0x204 Vector
    std::uint8_t m_flWorldTimeScale[0x8]; // 0x210 float32
};

struct C_OP_Spin {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0x1F8]; // 0x0
};

struct C_OP_GameLiquidSpill {
    static constexpr std::size_t size = 0x6A0;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_flLiquidContentsField[0x178]; // 0x230 CParticleCollectionFloatInput
    std::uint8_t m_flExpirationTime[0x178]; // 0x3A8 CParticleCollectionFloatInput
    std::uint8_t m_flRadius[0x178]; // 0x520 CParticleCollectionFloatInput
    std::uint8_t m_bCheckExposedToSky[0x4]; // 0x698 bool
    std::uint8_t m_nAmountAttribute[0x4]; // 0x69C ParticleAttributeIndex_t
};

struct C_OP_InstantaneousEmitter {
    static constexpr std::size_t size = 0x668;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nParticlesToEmit[0x178]; // 0x1E8 CParticleCollectionFloatInput
    std::uint8_t m_flStartTime[0x178]; // 0x360 CParticleCollectionFloatInput
    std::uint8_t m_flInitFromKilledParentParticles[0x4]; // 0x4D8 float32
    std::uint8_t m_nEventType[0x4]; // 0x4DC EventTypeSelection_t
    std::uint8_t m_flParentParticleScale[0x178]; // 0x4E0 CParticleCollectionFloatInput
    std::uint8_t m_nMaxEmittedPerFrame[0x4]; // 0x658 int32
    std::uint8_t m_nSnapshotControlPoint[0x4]; // 0x65C int32
    std::uint8_t m_strSnapshotSubset[0x8]; // 0x660 CUtlString
};

struct C_OP_ConstrainLineLength {
    static constexpr std::size_t size = 0x1E8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flMinDistance[0x4]; // 0x1E0 float32
    std::uint8_t m_flMaxDistance[0x4]; // 0x1E4 float32
};

struct C_INIT_LifespanFromVelocity {
    static constexpr std::size_t size = 0x2A0;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_vecComponentScale[0xC]; // 0x1E8 Vector
    std::uint8_t m_flTraceOffset[0x4]; // 0x1F4 float32
    std::uint8_t m_flMaxTraceLength[0x4]; // 0x1F8 float32
    std::uint8_t m_flTraceTolerance[0x4]; // 0x1FC float32
    std::uint8_t m_nMaxPlanes[0x8]; // 0x200 int32
    std::uint8_t m_CollisionGroupName[0x80]; // 0x208 char[128]
    std::uint8_t m_nTraceSet[0x10]; // 0x288 ParticleTraceSet_t
    std::uint8_t m_bIncludeWater[0x8]; // 0x298 bool
};

struct CBaseTrailRenderer {
    static constexpr std::size_t size = 0x3358;
    std::uint8_t pad_0[0x2ED8]; // 0x0
    std::uint8_t m_nOrientationType[0x4]; // 0x2ED8 ParticleOrientationChoiceList_t
    std::uint8_t m_nOrientationControlPoint[0x4]; // 0x2EDC int32
    std::uint8_t m_flMinSize[0x4]; // 0x2EE0 float32
    std::uint8_t m_flMaxSize[0x4]; // 0x2EE4 float32
    std::uint8_t m_flStartFadeSize[0x178]; // 0x2EE8 CParticleCollectionRendererFloatInput
    std::uint8_t m_flEndFadeSize[0x178]; // 0x3060 CParticleCollectionRendererFloatInput
    std::uint8_t m_flSubPixelAAScale[0x178]; // 0x31D8 CParticleCollectionRendererFloatInput
    std::uint8_t m_bClampV[0x8]; // 0x3350 bool
};

struct C_INIT_VelocityFromCP {
    static constexpr std::size_t size = 0x930;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_velocityInput[0x6D8]; // 0x1E8 CParticleCollectionVecInput
    std::uint8_t m_transformInput[0x68]; // 0x8C0 CParticleTransformInput
    std::uint8_t m_flVelocityScale[0x4]; // 0x928 float32
    std::uint8_t m_bDirectionOnly[0x4]; // 0x92C bool
};

struct C_OP_SetControlPointOrientation {
    static constexpr std::size_t size = 0x388;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_bUseWorldLocation[0x2]; // 0x1E8 bool
    std::uint8_t m_bRandomize[0x1]; // 0x1EA bool
    std::uint8_t m_bSetOnce[0x1]; // 0x1EB bool
    std::uint8_t m_nCP[0x4]; // 0x1EC int32
    std::uint8_t m_nHeadLocation[0x4]; // 0x1F0 int32
    std::uint8_t m_vecRotation[0xC]; // 0x1F4 QAngle
    std::uint8_t m_vecRotationB[0x10]; // 0x200 QAngle
    std::uint8_t m_flInterpolation[0x178]; // 0x210 CParticleCollectionFloatInput
};

struct C_OP_MovementSkinnedPositionFromCPSnapshot {
    static constexpr std::size_t size = 0x950;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nSnapshotControlPointNumber[0x4]; // 0x1E0 int32
    std::uint8_t m_nControlPointNumber[0x4]; // 0x1E4 int32
    std::uint8_t m_bRandom[0x4]; // 0x1E8 bool
    std::uint8_t m_nRandomSeed[0x4]; // 0x1EC int32
    std::uint8_t m_bSetNormal[0x1]; // 0x1F0 bool
    std::uint8_t m_bSetRadius[0x3]; // 0x1F1 bool
    std::uint8_t m_nIndexType[0x4]; // 0x1F4 SnapshotIndexType_t
    std::uint8_t m_flReadIndex[0x178]; // 0x1F8 CPerParticleFloatInput
    std::uint8_t m_flIncrement[0x178]; // 0x370 CParticleCollectionFloatInput
    std::uint8_t m_nFullLoopIncrement[0x178]; // 0x4E8 CParticleCollectionFloatInput
    std::uint8_t m_nSnapShotStartPoint[0x178]; // 0x660 CParticleCollectionFloatInput
    std::uint8_t m_flInterpolation[0x178]; // 0x7D8 CPerParticleFloatInput
};

struct C_OP_MultiSegmentDisplaySnapshotGenerator {
    static constexpr std::size_t size = 0x1A18;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nCPSnapshot[0x4]; // 0x1E8 int32
    std::uint8_t m_nSegCount[0x4]; // 0x1EC ParticleMultiSegmentCountSelection_t
    std::uint8_t m_nInputType[0x8]; // 0x1F0 ParticleMultiSegmentInputSelection_t
    std::uint8_t m_strDefaultString[0x8]; // 0x1F8 CUtlString
    std::uint8_t m_flValue[0x178]; // 0x200 CParticleCollectionFloatInput
    std::uint8_t m_flScollOffset[0x178]; // 0x378 CParticleCollectionFloatInput
    std::uint8_t m_SpecialCharList[0x18]; // 0x4F0 CUtlVector<ParticleMultiSegmentSpecialCharacter_t>
    std::uint8_t m_vecColorUnlit[0x6D8]; // 0x508 CParticleCollectionVecInput
    std::uint8_t m_vecColorLit[0x6D8]; // 0xBE0 CParticleCollectionVecInput
    std::uint8_t m_flRadius[0x178]; // 0x12B8 CParticleCollectionFloatInput
    std::uint8_t m_flSpacing[0x178]; // 0x1430 CParticleCollectionFloatInput
    std::uint8_t m_flMinCount[0x178]; // 0x15A8 CParticleCollectionFloatInput
    std::uint8_t m_flMaxCount[0x178]; // 0x1720 CParticleCollectionFloatInput
    std::uint8_t m_bPrependEmpty[0x8]; // 0x1898 bool
    std::uint8_t m_flDigitsAfterDecimal[0x178]; // 0x18A0 CParticleCollectionFloatInput
};

struct C_OP_OscillateVector {
    static constexpr std::size_t size = 0x690;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_RateMin[0xC]; // 0x1E0 Vector
    std::uint8_t m_RateMax[0xC]; // 0x1EC Vector
    std::uint8_t m_FrequencyMin[0xC]; // 0x1F8 Vector
    std::uint8_t m_FrequencyMax[0xC]; // 0x204 Vector
    std::uint8_t m_nField[0x4]; // 0x210 ParticleAttributeIndex_t
    std::uint8_t m_bProportional[0x1]; // 0x214 bool
    std::uint8_t m_bProportionalOp[0x1]; // 0x215 bool
    std::uint8_t m_bOffset[0x2]; // 0x216 bool
    std::uint8_t m_flStartTime_min[0x4]; // 0x218 float32
    std::uint8_t m_flStartTime_max[0x4]; // 0x21C float32
    std::uint8_t m_flEndTime_min[0x4]; // 0x220 float32
    std::uint8_t m_flEndTime_max[0x4]; // 0x224 float32
    std::uint8_t m_flOscMult[0x178]; // 0x228 CPerParticleFloatInput
    std::uint8_t m_flOscAdd[0x178]; // 0x3A0 CPerParticleFloatInput
    std::uint8_t m_flRateScale[0x178]; // 0x518 CPerParticleFloatInput
};

struct C_OP_PositionLock {
    static constexpr std::size_t size = 0xAD0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_TransformInput[0x68]; // 0x1E0 CParticleTransformInput
    std::uint8_t m_flStartTime_min[0x4]; // 0x248 float32
    std::uint8_t m_flStartTime_max[0x4]; // 0x24C float32
    std::uint8_t m_flStartTime_exp[0x4]; // 0x250 float32
    std::uint8_t m_flEndTime_min[0x4]; // 0x254 float32
    std::uint8_t m_flEndTime_max[0x4]; // 0x258 float32
    std::uint8_t m_flEndTime_exp[0x4]; // 0x25C float32
    std::uint8_t m_flRange[0x8]; // 0x260 float32
    std::uint8_t m_flRangeBias[0x178]; // 0x268 CParticleCollectionFloatInput
    std::uint8_t m_flJumpThreshold[0x4]; // 0x3E0 float32
    std::uint8_t m_flPrevPosScale[0x4]; // 0x3E4 float32
    std::uint8_t m_bLockRot[0x8]; // 0x3E8 bool
    std::uint8_t m_vecScale[0x6D8]; // 0x3F0 CParticleCollectionVecInput
    std::uint8_t m_nFieldOutput[0x4]; // 0xAC8 ParticleAttributeIndex_t
    std::uint8_t m_nFieldOutputPrev[0x4]; // 0xACC ParticleAttributeIndex_t
};

struct C_OP_RenderVRHapticEvent {
    static constexpr std::size_t size = 0x3B8;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_nHand[0x4]; // 0x230 ParticleVRHandChoiceList_t
    std::uint8_t m_nOutputHandCP[0x4]; // 0x234 int32
    std::uint8_t m_nOutputField[0x8]; // 0x238 int32
    std::uint8_t m_flAmplitude[0x178]; // 0x240 CPerParticleFloatInput
};

struct C_OP_SetControlPointToImpactPoint {
    static constexpr std::size_t size = 0x410;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nCPOut[0x4]; // 0x1E8 int32
    std::uint8_t m_nCPIn[0x4]; // 0x1EC int32
    std::uint8_t m_flUpdateRate[0x8]; // 0x1F0 float32
    std::uint8_t m_flTraceLength[0x178]; // 0x1F8 CParticleCollectionFloatInput
    std::uint8_t m_flStartOffset[0x4]; // 0x370 float32
    std::uint8_t m_flOffset[0x4]; // 0x374 float32
    std::uint8_t m_vecTraceDir[0xC]; // 0x378 Vector
    std::uint8_t m_CollisionGroupName[0x80]; // 0x384 char[128]
    std::uint8_t m_nTraceSet[0x4]; // 0x404 ParticleTraceSet_t
    std::uint8_t m_bSetToEndpoint[0x1]; // 0x408 bool
    std::uint8_t m_bTraceToClosestSurface[0x1]; // 0x409 bool
    std::uint8_t m_bIncludeWater[0x6]; // 0x40A bool
};

struct C_OP_InterpolateRadius {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flStartTime[0x4]; // 0x1E0 float32
    std::uint8_t m_flEndTime[0x4]; // 0x1E4 float32
    std::uint8_t m_flStartScale[0x4]; // 0x1E8 float32
    std::uint8_t m_flEndScale[0x4]; // 0x1EC float32
    std::uint8_t m_bEaseInAndOut[0x4]; // 0x1F0 bool
    std::uint8_t m_flBias[0x3C]; // 0x1F4 float32
};

struct C_OP_ReinitializeScalarEndCap {
    static constexpr std::size_t size = 0x1F0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_flOutputMin[0x4]; // 0x1E4 float32
    std::uint8_t m_flOutputMax[0x8]; // 0x1E8 float32
};

struct C_OP_TurbulenceForce {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x1F0]; // 0x0
    std::uint8_t m_flNoiseCoordScale0[0x4]; // 0x1F0 float32
    std::uint8_t m_flNoiseCoordScale1[0x4]; // 0x1F4 float32
    std::uint8_t m_flNoiseCoordScale2[0x4]; // 0x1F8 float32
    std::uint8_t m_flNoiseCoordScale3[0x4]; // 0x1FC float32
    std::uint8_t m_vecNoiseAmount0[0xC]; // 0x200 Vector
    std::uint8_t m_vecNoiseAmount1[0xC]; // 0x20C Vector
    std::uint8_t m_vecNoiseAmount2[0xC]; // 0x218 Vector
    std::uint8_t m_vecNoiseAmount3[0xC]; // 0x224 Vector
};

struct C_OP_RemapNamedModelElementOnceTimed {
    static constexpr std::size_t size = 0x240;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_hModel[0x8]; // 0x1E0 CStrongHandle<InfoForResourceTypeCModel>
    std::uint8_t m_inNames[0x18]; // 0x1E8 CUtlVector<CUtlString>
    std::uint8_t m_outNames[0x18]; // 0x200 CUtlVector<CUtlString>
    std::uint8_t m_fallbackNames[0x18]; // 0x218 CUtlVector<CUtlString>
    std::uint8_t m_bModelFromRenderer[0x1]; // 0x230 bool
    std::uint8_t m_bProportional[0x3]; // 0x231 bool
    std::uint8_t m_nFieldInput[0x4]; // 0x234 ParticleAttributeIndex_t
    std::uint8_t m_nFieldOutput[0x4]; // 0x238 ParticleAttributeIndex_t
    std::uint8_t m_flRemapTime[0x4]; // 0x23C float32
};

struct C_OP_SetControlPointToPlayer {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nCP1[0x4]; // 0x1E8 int32
    std::uint8_t m_vecCP1Pos[0xC]; // 0x1EC Vector
    std::uint8_t m_bOrientToEyes[0x4]; // 0x1F8 bool
    std::uint8_t m_nPosition[0x4]; // 0x1FC ParticleEntityPos_t
    std::uint8_t m_nRadiusCP[0x4]; // 0x200 int32
    std::uint8_t m_nRadiusCPField[0x4]; // 0x204 int32
};

struct C_OP_EndCapTimedFreeze {
    static constexpr std::size_t size = 0x358;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flFreezeTime[0x178]; // 0x1E0 CParticleCollectionFloatInput
};

struct C_OP_RenderGpuImplicit {
    static constexpr std::size_t size = 0x6B8;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_bUsePerParticleRadius[0x4]; // 0x230 bool
    std::uint8_t m_nVertexCountKb[0x4]; // 0x234 uint32
    std::uint8_t m_nIndexCountKb[0x8]; // 0x238 uint32
    std::uint8_t m_fGridSize[0x178]; // 0x240 CParticleCollectionRendererFloatInput
    std::uint8_t m_fRadiusScale[0x178]; // 0x3B8 CParticleCollectionRendererFloatInput
    std::uint8_t m_fIsosurfaceThreshold[0x178]; // 0x530 CParticleCollectionRendererFloatInput
    std::uint8_t m_nScaleCP[0x8]; // 0x6A8 int32
    std::uint8_t m_hMaterial[0x8]; // 0x6B0 CStrongHandle<InfoForResourceTypeIMaterial2>
};

struct C_OP_SetRandomControlPointPosition {
    static constexpr std::size_t size = 0x500;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_bUseWorldLocation[0x1]; // 0x1E8 bool
    std::uint8_t m_bOrient[0x3]; // 0x1E9 bool
    std::uint8_t m_nCP1[0x4]; // 0x1EC int32
    std::uint8_t m_nHeadLocation[0x8]; // 0x1F0 int32
    std::uint8_t m_flReRandomRate[0x178]; // 0x1F8 CParticleCollectionFloatInput
    std::uint8_t m_vecCPMinPos[0xC]; // 0x370 Vector
    std::uint8_t m_vecCPMaxPos[0xC]; // 0x37C Vector
    std::uint8_t m_flInterpolation[0x178]; // 0x388 CParticleCollectionFloatInput
};

struct C_OP_RenderVolumetricEmitter {
    static constexpr std::size_t size = 0x2290;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_strChannelType[0x8]; // 0x230 CUtlString
    std::uint8_t m_nType[0x4]; // 0x238 ParticleVolumetricSmokeType_t
    std::uint8_t m_nCreationType[0x4]; // 0x23C ParticleVolumetricSmokeCreationType_t
    std::uint8_t m_nEventType[0x8]; // 0x240 EventTypeSelection_t
    std::uint8_t m_vecPos[0x6D8]; // 0x248 CPerParticleVecInput
    std::uint8_t m_vecVelocity[0x6D8]; // 0x920 CPerParticleVecInput
    std::uint8_t m_vPrevPosition[0x6D8]; // 0xFF8 CPerParticleVecInput
    std::uint8_t m_flSpeed[0x178]; // 0x16D0 CPerParticleFloatInput
    std::uint8_t m_flRadius[0x178]; // 0x1848 CPerParticleFloatInput
    std::uint8_t m_flDensity[0x178]; // 0x19C0 CPerParticleFloatInput
    std::uint8_t m_flTemperature[0x178]; // 0x1B38 CPerParticleFloatInput
    std::uint8_t m_flMagnitude[0x178]; // 0x1CB0 CPerParticleFloatInput
    std::uint8_t m_flKillRadius[0x178]; // 0x1E28 CPerParticleFloatInput
    std::uint8_t m_flKillDensityScale[0x178]; // 0x1FA0 CPerParticleFloatInput
    std::uint8_t m_flFalloff[0x178]; // 0x2118 CPerParticleFloatInput
};

struct C_OP_RemapTransformVisibilityToScalar {
    static constexpr std::size_t size = 0x268;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nSetMethod[0x8]; // 0x1E0 ParticleSetMethod_t
    std::uint8_t m_TransformInput[0x68]; // 0x1E8 CParticleTransformInput
    std::uint8_t m_nFieldOutput[0x4]; // 0x250 ParticleAttributeIndex_t
    std::uint8_t m_flInputMin[0x4]; // 0x254 float32
    std::uint8_t m_flInputMax[0x4]; // 0x258 float32
    std::uint8_t m_flOutputMin[0x4]; // 0x25C float32
    std::uint8_t m_flOutputMax[0x4]; // 0x260 float32
    std::uint8_t m_flRadius[0x4]; // 0x264 float32
};

struct C_OP_RemapControlPointDirectionToVector {
    static constexpr std::size_t size = 0x1F0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_flScale[0x4]; // 0x1E4 float32
    std::uint8_t m_nControlPointNumber[0x8]; // 0x1E8 int32
};

struct C_OP_ScreenSpacePositionOfTarget {
    static constexpr std::size_t size = 0xA40;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_vecTargetPosition[0x6D8]; // 0x1E0 CPerParticleVecInput
    std::uint8_t m_bOututBehindness[0x4]; // 0x8B8 bool
    std::uint8_t m_nBehindFieldOutput[0x4]; // 0x8BC ParticleAttributeIndex_t
    std::uint8_t m_flBehindOutputRemap[0x178]; // 0x8C0 CParticleRemapFloatInput
    std::uint8_t m_nBehindSetMethod[0x8]; // 0xA38 ParticleSetMethod_t
};

struct CParticleFunctionOperator {
    static constexpr std::size_t size = 0x1E0;
    std::uint8_t pad_0[0x1E0]; // 0x0
};

struct C_OP_DragRelativeToPlane {
    static constexpr std::size_t size = 0xBB8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flDragAtPlane[0x178]; // 0x1E0 CParticleCollectionFloatInput
    std::uint8_t m_flFalloff[0x178]; // 0x358 CParticleCollectionFloatInput
    std::uint8_t m_bDirectional[0x8]; // 0x4D0 bool
    std::uint8_t m_vecPlaneNormal[0x6D8]; // 0x4D8 CParticleCollectionVecInput
    std::uint8_t m_nControlPointNumber[0x8]; // 0xBB0 int32
};

struct C_OP_SetCPtoVector {
    static constexpr std::size_t size = 0x1E8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nCPInput[0x4]; // 0x1E0 int32
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E4 ParticleAttributeIndex_t
};

struct C_INIT_RandomYaw {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x208]; // 0x0
};

struct C_OP_SnapshotRigidSkinToBones {
    static constexpr std::size_t size = 0x1E8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_bTransformNormals[0x1]; // 0x1E0 bool
    std::uint8_t m_bTransformRadii[0x3]; // 0x1E1 bool
    std::uint8_t m_nControlPointNumber[0x4]; // 0x1E4 int32
};

struct C_OP_SetSingleControlPointPosition {
    static constexpr std::size_t size = 0x930;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_bSetOnce[0x4]; // 0x1E8 bool
    std::uint8_t m_nCP1[0x4]; // 0x1EC int32
    std::uint8_t m_vecCP1Pos[0x6D8]; // 0x1F0 CParticleCollectionVecInput
    std::uint8_t m_transformInput[0x68]; // 0x8C8 CParticleTransformInput
};

struct C_INIT_DistanceToNeighborCull {
    static constexpr std::size_t size = 0x668;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_flDistance[0x178]; // 0x1E8 CPerParticleFloatInput
    std::uint8_t m_bIncludeRadii[0x8]; // 0x360 bool
    std::uint8_t m_flLifespanOverlap[0x178]; // 0x368 CPerParticleFloatInput
    std::uint8_t m_nFieldModify[0x8]; // 0x4E0 ParticleAttributeIndex_t
    std::uint8_t m_flModify[0x178]; // 0x4E8 CPerParticleFloatInput
    std::uint8_t m_nSetMethod[0x4]; // 0x660 ParticleSetMethod_t
    std::uint8_t m_bUseNeighbor[0x4]; // 0x664 bool
};

struct C_OP_RemapCPtoScalar {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nCPInput[0x4]; // 0x1E0 int32
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E4 ParticleAttributeIndex_t
    std::uint8_t m_nField[0x4]; // 0x1E8 int32
    std::uint8_t m_flInputMin[0x4]; // 0x1EC float32
    std::uint8_t m_flInputMax[0x4]; // 0x1F0 float32
    std::uint8_t m_flOutputMin[0x4]; // 0x1F4 float32
    std::uint8_t m_flOutputMax[0x4]; // 0x1F8 float32
    std::uint8_t m_flStartTime[0x4]; // 0x1FC float32
    std::uint8_t m_flEndTime[0x4]; // 0x200 float32
    std::uint8_t m_flInterpRate[0x4]; // 0x204 float32
    std::uint8_t m_nSetMethod[0x8]; // 0x208 ParticleSetMethod_t
};

struct CParticleFunctionRenderer {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t VisibilityInputs[0x48]; // 0x1E0 CParticleVisibilityInputs
    std::uint8_t m_bCannotBeRefracted[0x8]; // 0x228 bool
};

struct CParticleSystemDefinition {
    static constexpr std::size_t size = 0x590;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_nBehaviorVersion[0x8]; // 0x8 int32
    std::uint8_t m_PreEmissionOperators[0x18]; // 0x10 CUtlVector<CParticleFunctionPreEmission*>
    std::uint8_t m_Emitters[0x18]; // 0x28 CUtlVector<CParticleFunctionEmitter*>
    std::uint8_t m_Initializers[0x18]; // 0x40 CUtlVector<CParticleFunctionInitializer*>
    std::uint8_t m_Operators[0x18]; // 0x58 CUtlVector<CParticleFunctionOperator*>
    std::uint8_t m_ForceGenerators[0x18]; // 0x70 CUtlVector<CParticleFunctionForce*>
    std::uint8_t m_Constraints[0x18]; // 0x88 CUtlVector<CParticleFunctionConstraint*>
    std::uint8_t m_Renderers[0x18]; // 0xA0 CUtlVector<CParticleFunctionRenderer*>
    std::uint8_t m_Children[0xC0]; // 0xB8 CUtlVector<ParticleChildrenInfo_t>
    std::uint8_t m_nFirstMultipleOverride_BackwardCompat[0xE0]; // 0x178 int32
    std::uint8_t m_nInitialParticles[0x4]; // 0x258 int32
    std::uint8_t m_nMaxParticles[0x4]; // 0x25C int32
    std::uint8_t m_nGroupID[0x4]; // 0x260 int32
    std::uint8_t m_BoundingBoxMin[0xC]; // 0x264 Vector
    std::uint8_t m_BoundingBoxMax[0xC]; // 0x270 Vector
    std::uint8_t m_flDepthSortBias[0x4]; // 0x27C float32
    std::uint8_t m_nSortOverridePositionCP[0x4]; // 0x280 int32
    std::uint8_t m_bInfiniteBounds[0x1]; // 0x284 bool
    std::uint8_t m_bEnableNamedValues[0x3]; // 0x285 bool
    std::uint8_t m_NamedValueDomain[0x8]; // 0x288 CUtlString
    std::uint8_t m_NamedValueLocals[0x18]; // 0x290 CUtlVector<ParticleNamedValueSource_t*>
    std::uint8_t m_ConstantColor[0x4]; // 0x2A8 Color
    std::uint8_t m_ConstantNormal[0xC]; // 0x2AC Vector
    std::uint8_t m_flConstantRadius[0x4]; // 0x2B8 float32
    std::uint8_t m_flConstantRotation[0x4]; // 0x2BC float32
    std::uint8_t m_flConstantRotationSpeed[0x4]; // 0x2C0 float32
    std::uint8_t m_flConstantLifespan[0x4]; // 0x2C4 float32
    std::uint8_t m_nConstantSequenceNumber[0x4]; // 0x2C8 int32
    std::uint8_t m_nConstantSequenceNumber1[0x4]; // 0x2CC int32
    std::uint8_t m_nSnapshotControlPoint[0x8]; // 0x2D0 int32
    std::uint8_t m_hSnapshot[0x8]; // 0x2D8 CStrongHandle<InfoForResourceTypeIParticleSnapshot>
    std::uint8_t m_pszCullReplacementName[0x8]; // 0x2E0 CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    std::uint8_t m_flCullRadius[0x4]; // 0x2E8 float32
    std::uint8_t m_flCullFillCost[0x4]; // 0x2EC float32
    std::uint8_t m_nCullControlPoint[0x8]; // 0x2F0 int32
    std::uint8_t m_hFallback[0x8]; // 0x2F8 CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    std::uint8_t m_nFallbackMaxCount[0x8]; // 0x300 int32
    std::uint8_t m_hLowViolenceDef[0x8]; // 0x308 CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    std::uint8_t m_hReferenceReplacement[0x8]; // 0x310 CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    std::uint8_t m_flPreSimulationTime[0x4]; // 0x318 float32
    std::uint8_t m_flStopSimulationAfterTime[0x4]; // 0x31C float32
    std::uint8_t m_flMaximumTimeStep[0x4]; // 0x320 float32
    std::uint8_t m_flMaximumSimTime[0x4]; // 0x324 float32
    std::uint8_t m_flMinimumSimTime[0x4]; // 0x328 float32
    std::uint8_t m_flMinimumTimeStep[0x4]; // 0x32C float32
    std::uint8_t m_nMinimumFrames[0x4]; // 0x330 int32
    std::uint8_t m_bIsGPUParticleSystem[0x4]; // 0x334 bool
    std::uint8_t m_nMinCPULevel[0x4]; // 0x338 int32
    std::uint8_t m_nMinGPULevel[0x4]; // 0x33C int32
    std::uint8_t m_flNoDrawTimeToGoToSleep[0x4]; // 0x340 float32
    std::uint8_t m_flMaxDrawDistance[0x4]; // 0x344 float32
    std::uint8_t m_flStartFadeDistance[0x4]; // 0x348 float32
    std::uint8_t m_flMaxCreationDistance[0x4]; // 0x34C float32
    std::uint8_t m_nAggregationMinAvailableParticles[0x4]; // 0x350 int32
    std::uint8_t m_flAggregateRadius[0x4]; // 0x354 float32
    std::uint8_t m_bShouldBatch[0x1]; // 0x358 bool
    std::uint8_t m_bShouldHitboxesFallbackToRenderBounds[0x1]; // 0x359 bool
    std::uint8_t m_bShouldHitboxesFallbackToSnapshot[0x1]; // 0x35A bool
    std::uint8_t m_bShouldHitboxesFallbackToCollisionHulls[0x1]; // 0x35B bool
    std::uint8_t m_nViewModelEffect[0x4]; // 0x35C InheritableBoolType_t
    std::uint8_t m_bScreenSpaceEffect[0x8]; // 0x360 bool
    std::uint8_t m_pszTargetLayerID[0x8]; // 0x368 CUtlSymbolLarge
    std::uint8_t m_nSkipRenderControlPoint[0x4]; // 0x370 int32
    std::uint8_t m_nAllowRenderControlPoint[0x4]; // 0x374 int32
    std::uint8_t m_bShouldSort[0x48]; // 0x378 bool
    std::uint8_t m_controlPointConfigurations[0x1D0]; // 0x3C0 CUtlVector<ParticleControlPointConfiguration_t>
};

struct C_OP_RemapNamedModelMeshGroupEndCap {
    static constexpr std::size_t size = 0x240;
    std::uint8_t pad_0[0x240]; // 0x0
};

struct C_OP_PercentageBetweenTransformsVector {
    static constexpr std::size_t size = 0x2E0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_flInputMin[0x4]; // 0x1E4 float32
    std::uint8_t m_flInputMax[0x4]; // 0x1E8 float32
    std::uint8_t m_vecOutputMin[0xC]; // 0x1EC Vector
    std::uint8_t m_vecOutputMax[0x10]; // 0x1F8 Vector
    std::uint8_t m_TransformStart[0x68]; // 0x208 CParticleTransformInput
    std::uint8_t m_TransformEnd[0x68]; // 0x270 CParticleTransformInput
    std::uint8_t m_nSetMethod[0x4]; // 0x2D8 ParticleSetMethod_t
    std::uint8_t m_bActiveRange[0x1]; // 0x2DC bool
    std::uint8_t m_bRadialCheck[0x3]; // 0x2DD bool
};

struct C_OP_RenderScreenVelocityRotate {
    static constexpr std::size_t size = 0x238;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_flRotateRateDegrees[0x4]; // 0x230 float32
    std::uint8_t m_flForwardDegrees[0x4]; // 0x234 float32
};

struct C_OP_UpdateLightSource {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_vColorTint[0x4]; // 0x1E0 Color
    std::uint8_t m_flBrightnessScale[0x4]; // 0x1E4 float32
    std::uint8_t m_flRadiusScale[0x4]; // 0x1E8 float32
    std::uint8_t m_flMinimumLightingRadius[0x4]; // 0x1EC float32
    std::uint8_t m_flMaximumLightingRadius[0x4]; // 0x1F0 float32
    std::uint8_t m_flPositionDampingConstant[0x4]; // 0x1F4 float32
};

struct C_INIT_CreateWithinBox {
    static constexpr std::size_t size = 0xFB0;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_vecMin[0x6D8]; // 0x1E8 CPerParticleVecInput
    std::uint8_t m_vecMax[0x6D8]; // 0x8C0 CPerParticleVecInput
    std::uint8_t m_nControlPointNumber[0x4]; // 0xF98 int32
    std::uint8_t m_bLocalSpace[0x4]; // 0xF9C bool
    std::uint8_t m_randomnessParameters[0x8]; // 0xFA0 CRandomNumberGeneratorParameters
    std::uint8_t m_bUseNewCode[0x8]; // 0xFA8 bool
};

struct C_OP_ChooseRandomChildrenInGroup {
    static constexpr std::size_t size = 0x368;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nChildGroupID[0x8]; // 0x1E8 int32
    std::uint8_t m_flNumberOfChildren[0x178]; // 0x1F0 CParticleCollectionFloatInput
};

struct C_OP_ControlpointLight {
    static constexpr std::size_t size = 0x6F0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flScale[0x490]; // 0x1E0 float32
    std::uint8_t m_nControlPoint1[0x4]; // 0x670 int32
    std::uint8_t m_nControlPoint2[0x4]; // 0x674 int32
    std::uint8_t m_nControlPoint3[0x4]; // 0x678 int32
    std::uint8_t m_nControlPoint4[0x4]; // 0x67C int32
    std::uint8_t m_vecCPOffset1[0xC]; // 0x680 Vector
    std::uint8_t m_vecCPOffset2[0xC]; // 0x68C Vector
    std::uint8_t m_vecCPOffset3[0xC]; // 0x698 Vector
    std::uint8_t m_vecCPOffset4[0xC]; // 0x6A4 Vector
    std::uint8_t m_LightFiftyDist1[0x4]; // 0x6B0 float32
    std::uint8_t m_LightZeroDist1[0x4]; // 0x6B4 float32
    std::uint8_t m_LightFiftyDist2[0x4]; // 0x6B8 float32
    std::uint8_t m_LightZeroDist2[0x4]; // 0x6BC float32
    std::uint8_t m_LightFiftyDist3[0x4]; // 0x6C0 float32
    std::uint8_t m_LightZeroDist3[0x4]; // 0x6C4 float32
    std::uint8_t m_LightFiftyDist4[0x4]; // 0x6C8 float32
    std::uint8_t m_LightZeroDist4[0x4]; // 0x6CC float32
    std::uint8_t m_LightColor1[0x4]; // 0x6D0 Color
    std::uint8_t m_LightColor2[0x4]; // 0x6D4 Color
    std::uint8_t m_LightColor3[0x4]; // 0x6D8 Color
    std::uint8_t m_LightColor4[0x4]; // 0x6DC Color
    std::uint8_t m_bLightType1[0x1]; // 0x6E0 bool
    std::uint8_t m_bLightType2[0x1]; // 0x6E1 bool
    std::uint8_t m_bLightType3[0x1]; // 0x6E2 bool
    std::uint8_t m_bLightType4[0x1]; // 0x6E3 bool
    std::uint8_t m_bLightDynamic1[0x1]; // 0x6E4 bool
    std::uint8_t m_bLightDynamic2[0x1]; // 0x6E5 bool
    std::uint8_t m_bLightDynamic3[0x1]; // 0x6E6 bool
    std::uint8_t m_bLightDynamic4[0x1]; // 0x6E7 bool
    std::uint8_t m_bUseNormal[0x1]; // 0x6E8 bool
    std::uint8_t m_bUseHLambert[0x5]; // 0x6E9 bool
    std::uint8_t m_bClampLowerRange[0x1]; // 0x6EE bool
    std::uint8_t m_bClampUpperRange[0x1]; // 0x6EF bool
};

struct C_OP_VectorFieldSnapshot {
    static constexpr std::size_t size = 0xA50;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nControlPointNumber[0x4]; // 0x1E0 int32
    std::uint8_t m_nAttributeToWrite[0x4]; // 0x1E4 ParticleAttributeIndex_t
    std::uint8_t m_nLocalSpaceCP[0x8]; // 0x1E8 int32
    std::uint8_t m_flInterpolation[0x178]; // 0x1F0 CPerParticleFloatInput
    std::uint8_t m_vecScale[0x6D8]; // 0x368 CPerParticleVecInput
    std::uint8_t m_flBoundaryDampening[0x4]; // 0xA40 float32
    std::uint8_t m_bSetVelocity[0x1]; // 0xA44 bool
    std::uint8_t m_bLockToSurface[0x3]; // 0xA45 bool
    std::uint8_t m_flGridSpacing[0x8]; // 0xA48 float32
};

struct C_OP_CylindricalDistanceToTransform {
    static constexpr std::size_t size = 0x8A0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldOutput[0x8]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_flInputMin[0x178]; // 0x1E8 CPerParticleFloatInput
    std::uint8_t m_flInputMax[0x178]; // 0x360 CPerParticleFloatInput
    std::uint8_t m_flOutputMin[0x178]; // 0x4D8 CPerParticleFloatInput
    std::uint8_t m_flOutputMax[0x178]; // 0x650 CPerParticleFloatInput
    std::uint8_t m_TransformStart[0x68]; // 0x7C8 CParticleTransformInput
    std::uint8_t m_TransformEnd[0x68]; // 0x830 CParticleTransformInput
    std::uint8_t m_nSetMethod[0x4]; // 0x898 ParticleSetMethod_t
    std::uint8_t m_bActiveRange[0x1]; // 0x89C bool
    std::uint8_t m_bAdditive[0x1]; // 0x89D bool
    std::uint8_t m_bCapsule[0x2]; // 0x89E bool
};

struct C_INIT_PositionPlaceOnGround {
    static constexpr std::size_t size = 0xC68;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_flOffset[0x178]; // 0x1E8 CPerParticleFloatInput
    std::uint8_t m_flMaxTraceLength[0x178]; // 0x360 CPerParticleFloatInput
    std::uint8_t m_vecTraceDir[0x6D8]; // 0x4D8 CPerParticleVecInput
    std::uint8_t m_CollisionGroupName[0x80]; // 0xBB0 char[128]
    std::uint8_t m_nTraceSet[0x10]; // 0xC30 ParticleTraceSet_t
    std::uint8_t m_nTraceMissBehavior[0x4]; // 0xC40 ParticleTraceMissBehavior_t
    std::uint8_t m_bIncludeWater[0x4]; // 0xC44 bool
    std::uint8_t m_nAttribute[0x4]; // 0xC48 ParticleAttributeIndex_t
    std::uint8_t m_bSetPXYZOnly[0x1]; // 0xC4C bool
    std::uint8_t m_bSetNormal[0x3]; // 0xC4D bool
    std::uint8_t m_nGroundNormalAttribute[0x4]; // 0xC50 ParticleAttributeIndex_t
    std::uint8_t m_bOffsetonColOnly[0x4]; // 0xC54 bool
    std::uint8_t m_flOffsetByRadiusFactor[0x4]; // 0xC58 float32
    std::uint8_t m_nPreserveOffsetCP[0x4]; // 0xC5C int32
    std::uint8_t m_nIgnoreCP[0x8]; // 0xC60 int32
};

struct C_INIT_RandomScalar {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_flMin[0x4]; // 0x1E8 float32
    std::uint8_t m_flMax[0x4]; // 0x1EC float32
    std::uint8_t m_flExponent[0x4]; // 0x1F0 float32
    std::uint8_t m_nFieldOutput[0x4]; // 0x1F4 ParticleAttributeIndex_t
};

struct C_OP_RenderPostProcessing {
    static constexpr std::size_t size = 0x3B8;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_flPostProcessStrength[0x178]; // 0x230 CPerParticleFloatInput
    std::uint8_t m_hPostTexture[0x8]; // 0x3A8 CStrongHandle<InfoForResourceTypeCPostProcessingResource>
    std::uint8_t m_nPriority[0x8]; // 0x3B0 ParticlePostProcessPriorityGroup_t
};

struct C_OP_WorldTraceConstraint {
    static constexpr std::size_t size = 0xA08;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nCP[0x4]; // 0x1E0 int32
    std::uint8_t m_vecCpOffset[0xC]; // 0x1E4 Vector
    std::uint8_t m_nCollisionMode[0x4]; // 0x1F0 ParticleCollisionMode_t
    std::uint8_t m_nCollisionModeMin[0x4]; // 0x1F4 ParticleCollisionMode_t
    std::uint8_t m_nTraceSet[0x4]; // 0x1F8 ParticleTraceSet_t
    std::uint8_t m_CollisionGroupName[0x80]; // 0x1FC char[128]
    std::uint8_t m_bWorldOnly[0x1]; // 0x27C bool
    std::uint8_t m_bBrushOnly[0x1]; // 0x27D bool
    std::uint8_t m_bIncludeWater[0x2]; // 0x27E bool
    std::uint8_t m_nIgnoreCP[0x4]; // 0x280 int32
    std::uint8_t m_flCpMovementTolerance[0x4]; // 0x284 float32
    std::uint8_t m_flRetestRate[0x4]; // 0x288 float32
    std::uint8_t m_flTraceTolerance[0x4]; // 0x28C float32
    std::uint8_t m_flCollisionConfirmationSpeed[0x4]; // 0x290 float32
    std::uint8_t m_nMaxTracesPerFrame[0x4]; // 0x294 float32
    std::uint8_t m_flRadiusScale[0x178]; // 0x298 CPerParticleFloatInput
    std::uint8_t m_flBounceAmount[0x178]; // 0x410 CPerParticleFloatInput
    std::uint8_t m_flSlideAmount[0x178]; // 0x588 CPerParticleFloatInput
    std::uint8_t m_flRandomDirScale[0x178]; // 0x700 CPerParticleFloatInput
    std::uint8_t m_bDecayBounce[0x1]; // 0x878 bool
    std::uint8_t m_bKillonContact[0x3]; // 0x879 bool
    std::uint8_t m_flMinSpeed[0x4]; // 0x87C float32
    std::uint8_t m_bKillonContactBounce[0x1]; // 0x880 bool
    std::uint8_t m_bSetNormal[0x3]; // 0x881 bool
    std::uint8_t m_nStickOnCollisionField[0x4]; // 0x884 ParticleAttributeIndex_t
    std::uint8_t m_flStopSpeed[0x178]; // 0x888 CPerParticleFloatInput
    std::uint8_t m_nEntityStickDataField[0x4]; // 0xA00 ParticleAttributeIndex_t
    std::uint8_t m_nEntityStickNormalField[0x4]; // 0xA04 ParticleAttributeIndex_t
};

struct C_OP_RenderBlobs {
    static constexpr std::size_t size = 0x6E0;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_cubeWidth[0x178]; // 0x230 CParticleCollectionRendererFloatInput
    std::uint8_t m_cutoffRadius[0x178]; // 0x3A8 CParticleCollectionRendererFloatInput
    std::uint8_t m_renderRadius[0x178]; // 0x520 CParticleCollectionRendererFloatInput
    std::uint8_t m_nVertexCountKb[0x4]; // 0x698 uint32
    std::uint8_t m_nIndexCountKb[0x4]; // 0x69C uint32
    std::uint8_t m_nScaleCP[0x8]; // 0x6A0 int32
    std::uint8_t m_MaterialVars[0x30]; // 0x6A8 CUtlVector<MaterialVariable_t>
    std::uint8_t m_hMaterial[0x8]; // 0x6D8 CStrongHandle<InfoForResourceTypeIMaterial2>
};

struct C_OP_OscillateScalar {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_RateMin[0x4]; // 0x1E0 float32
    std::uint8_t m_RateMax[0x4]; // 0x1E4 float32
    std::uint8_t m_FrequencyMin[0x4]; // 0x1E8 float32
    std::uint8_t m_FrequencyMax[0x4]; // 0x1EC float32
    std::uint8_t m_nField[0x4]; // 0x1F0 ParticleAttributeIndex_t
    std::uint8_t m_bProportional[0x1]; // 0x1F4 bool
    std::uint8_t m_bProportionalOp[0x3]; // 0x1F5 bool
    std::uint8_t m_flStartTime_min[0x4]; // 0x1F8 float32
    std::uint8_t m_flStartTime_max[0x4]; // 0x1FC float32
    std::uint8_t m_flEndTime_min[0x4]; // 0x200 float32
    std::uint8_t m_flEndTime_max[0x4]; // 0x204 float32
    std::uint8_t m_flOscMult[0x4]; // 0x208 float32
    std::uint8_t m_flOscAdd[0x4]; // 0x20C float32
};

struct C_OP_FadeOut {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flFadeOutTimeMin[0x4]; // 0x1E0 float32
    std::uint8_t m_flFadeOutTimeMax[0x4]; // 0x1E4 float32
    std::uint8_t m_flFadeOutTimeExp[0x4]; // 0x1E8 float32
    std::uint8_t m_flFadeBias[0x34]; // 0x1EC float32
    std::uint8_t m_bProportional[0x1]; // 0x220 bool
    std::uint8_t m_bEaseInAndOut[0xF]; // 0x221 bool
};

struct C_OP_WaterImpulseRenderer {
    static constexpr std::size_t size = 0x1068;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_vecPos[0x6D8]; // 0x230 CPerParticleVecInput
    std::uint8_t m_flRadius[0x178]; // 0x908 CPerParticleFloatInput
    std::uint8_t m_flMagnitude[0x178]; // 0xA80 CPerParticleFloatInput
    std::uint8_t m_flShape[0x178]; // 0xBF8 CPerParticleFloatInput
    std::uint8_t m_flWindSpeed[0x178]; // 0xD70 CPerParticleFloatInput
    std::uint8_t m_flWobble[0x178]; // 0xEE8 CPerParticleFloatInput
    std::uint8_t m_bIsRadialWind[0x4]; // 0x1060 bool
    std::uint8_t m_nEventType[0x4]; // 0x1064 EventTypeSelection_t
};

struct C_INIT_RandomSequence {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nSequenceMin[0x4]; // 0x1E8 int32
    std::uint8_t m_nSequenceMax[0x4]; // 0x1EC int32
    std::uint8_t m_bShuffle[0x1]; // 0x1F0 bool
    std::uint8_t m_bLinear[0x7]; // 0x1F1 bool
    std::uint8_t m_WeightedList[0x38]; // 0x1F8 CUtlVector<SequenceWeightedList_t>
};

struct C_OP_RampScalarSplineSimple {
    static constexpr std::size_t size = 0x220;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_Rate[0x4]; // 0x1E0 float32
    std::uint8_t m_flStartTime[0x4]; // 0x1E4 float32
    std::uint8_t m_flEndTime[0x28]; // 0x1E8 float32
    std::uint8_t m_nField[0x4]; // 0x210 ParticleAttributeIndex_t
    std::uint8_t m_bEaseOut[0xC]; // 0x214 bool
};

struct C_INIT_DistanceCull {
    static constexpr std::size_t size = 0x370;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nControlPoint[0x8]; // 0x1E8 int32
    std::uint8_t m_flDistance[0x178]; // 0x1F0 CParticleCollectionFloatInput
    std::uint8_t m_bCullInside[0x8]; // 0x368 bool
};

struct C_OP_CollideWithParentParticles {
    static constexpr std::size_t size = 0x4D0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flParentRadiusScale[0x178]; // 0x1E0 CPerParticleFloatInput
    std::uint8_t m_flRadiusScale[0x178]; // 0x358 CPerParticleFloatInput
};

struct C_INIT_InitFromVectorFieldSnapshot {
    static constexpr std::size_t size = 0x8D0;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nControlPointNumber[0x4]; // 0x1E8 int32
    std::uint8_t m_nLocalSpaceCP[0x4]; // 0x1EC int32
    std::uint8_t m_nWeightUpdateCP[0x4]; // 0x1F0 int32
    std::uint8_t m_bUseVerticalVelocity[0x4]; // 0x1F4 bool
    std::uint8_t m_vecScale[0x6D8]; // 0x1F8 CPerParticleVecInput
};

struct C_OP_SetVectorAttributeToVectorExpression {
    static constexpr std::size_t size = 0x1180;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nExpression[0x8]; // 0x1E0 VectorExpressionType_t
    std::uint8_t m_vInput1[0x6D8]; // 0x1E8 CPerParticleVecInput
    std::uint8_t m_vInput2[0x6D8]; // 0x8C0 CPerParticleVecInput
    std::uint8_t m_flLerp[0x178]; // 0xF98 CPerParticleFloatInput
    std::uint8_t m_nOutputField[0x4]; // 0x1110 ParticleAttributeIndex_t
    std::uint8_t m_nSetMethod[0x4]; // 0x1114 ParticleSetMethod_t
    std::uint8_t m_bNormalizedOutput[0x68]; // 0x1118 bool
};

struct C_INIT_AddVectorToVector {
    static constexpr std::size_t size = 0x220;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_vecScale[0xC]; // 0x1E8 Vector
    std::uint8_t m_nFieldOutput[0x4]; // 0x1F4 ParticleAttributeIndex_t
    std::uint8_t m_nFieldInput[0x4]; // 0x1F8 ParticleAttributeIndex_t
    std::uint8_t m_vOffsetMin[0xC]; // 0x1FC Vector
    std::uint8_t m_vOffsetMax[0xC]; // 0x208 Vector
    std::uint8_t m_randomnessParameters[0xC]; // 0x214 CRandomNumberGeneratorParameters
};

struct C_INIT_RemapInitialVisibilityScalar {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1EC]; // 0x0
    std::uint8_t m_nFieldOutput[0x4]; // 0x1EC ParticleAttributeIndex_t
    std::uint8_t m_flInputMin[0x4]; // 0x1F0 float32
    std::uint8_t m_flInputMax[0x4]; // 0x1F4 float32
    std::uint8_t m_flOutputMin[0x4]; // 0x1F8 float32
    std::uint8_t m_flOutputMax[0x4]; // 0x1FC float32
};

struct C_OP_RemapTransformOrientationToYaw {
    static constexpr std::size_t size = 0x258;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_TransformInput[0x68]; // 0x1E0 CParticleTransformInput
    std::uint8_t m_nFieldOutput[0x4]; // 0x248 ParticleAttributeIndex_t
    std::uint8_t m_flRotOffset[0x4]; // 0x24C float32
    std::uint8_t m_flSpinStrength[0x8]; // 0x250 float32
};

struct C_OP_RenderStatusEffect {
    static constexpr std::size_t size = 0x268;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_pTextureColorWarp[0x8]; // 0x230 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_pTextureDetail2[0x8]; // 0x238 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_pTextureDiffuseWarp[0x8]; // 0x240 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_pTextureFresnelColorWarp[0x8]; // 0x248 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_pTextureFresnelWarp[0x8]; // 0x250 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_pTextureSpecularWarp[0x8]; // 0x258 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_pTextureEnvMap[0x8]; // 0x260 CStrongHandle<InfoForResourceTypeCTextureBase>
};

struct C_OP_RandomForce {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1F0]; // 0x0
    std::uint8_t m_MinForce[0xC]; // 0x1F0 Vector
    std::uint8_t m_MaxForce[0xC]; // 0x1FC Vector
};

struct C_OP_RemapParticleCountOnScalarEndCap {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_nInputMin[0x4]; // 0x1E4 int32
    std::uint8_t m_nInputMax[0x4]; // 0x1E8 int32
    std::uint8_t m_flOutputMin[0x4]; // 0x1EC float32
    std::uint8_t m_flOutputMax[0x4]; // 0x1F0 float32
    std::uint8_t m_bBackwards[0x4]; // 0x1F4 bool
    std::uint8_t m_nSetMethod[0x8]; // 0x1F8 ParticleSetMethod_t
};

struct ParticlePreviewState_t {
    static constexpr std::size_t size = 0x70;
    std::uint8_t m_previewModel[0x8]; // 0x0 CUtlString
    std::uint8_t m_nModSpecificData[0x4]; // 0x8 uint32
    std::uint8_t m_groundType[0x4]; // 0xC PetGroundType_t
    std::uint8_t m_sequenceName[0x8]; // 0x10 CUtlString
    std::uint8_t m_nFireParticleOnSequenceFrame[0x8]; // 0x18 int32
    std::uint8_t m_hitboxSetName[0x8]; // 0x20 CUtlString
    std::uint8_t m_materialGroupName[0x8]; // 0x28 CUtlString
    std::uint8_t m_vecBodyGroups[0x18]; // 0x30 CUtlVector<ParticlePreviewBodyGroup_t>
    std::uint8_t m_flPlaybackSpeed[0x4]; // 0x48 float32
    std::uint8_t m_flParticleSimulationRate[0x4]; // 0x4C float32
    std::uint8_t m_bShouldDrawHitboxes[0x1]; // 0x50 bool
    std::uint8_t m_bShouldDrawAttachments[0x1]; // 0x51 bool
    std::uint8_t m_bShouldDrawAttachmentNames[0x1]; // 0x52 bool
    std::uint8_t m_bShouldDrawControlPointAxes[0x1]; // 0x53 bool
    std::uint8_t m_bAnimationNonLooping[0x1]; // 0x54 bool
    std::uint8_t m_bSequenceNameIsAnimClipPath[0x3]; // 0x55 bool
    std::uint8_t m_vecPreviewGravity[0xC]; // 0x58 Vector
    std::uint8_t m_vecPreviewWind[0xC]; // 0x64 Vector
};

struct C_OP_LocalAccelerationForce {
    static constexpr std::size_t size = 0x8D0;
    std::uint8_t pad_0[0x1F0]; // 0x0
    std::uint8_t m_nCP[0x4]; // 0x1F0 int32
    std::uint8_t m_nScaleCP[0x4]; // 0x1F4 int32
    std::uint8_t m_vecAccel[0x6D8]; // 0x1F8 CParticleCollectionVecInput
};

struct C_OP_ModelCull {
    static constexpr std::size_t size = 0x268;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nControlPointNumber[0x4]; // 0x1E0 int32
    std::uint8_t m_bBoundBox[0x1]; // 0x1E4 bool
    std::uint8_t m_bCullOutside[0x1]; // 0x1E5 bool
    std::uint8_t m_bUseBones[0x1]; // 0x1E6 bool
    std::uint8_t m_HitboxSetName[0x81]; // 0x1E7 char[128]
};

struct C_OP_SetFloat {
    static constexpr std::size_t size = 0x510;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_InputValue[0x178]; // 0x1E0 CPerParticleFloatInput
    std::uint8_t m_nOutputField[0x4]; // 0x358 ParticleAttributeIndex_t
    std::uint8_t m_nSetMethod[0x4]; // 0x35C ParticleSetMethod_t
    std::uint8_t m_Lerp[0x1B0]; // 0x360 CPerParticleFloatInput
};

struct C_INIT_RemapTransformToVector {
    static constexpr std::size_t size = 0x308;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E8 ParticleAttributeIndex_t
    std::uint8_t m_vInputMin[0xC]; // 0x1EC Vector
    std::uint8_t m_vInputMax[0xC]; // 0x1F8 Vector
    std::uint8_t m_vOutputMin[0xC]; // 0x204 Vector
    std::uint8_t m_vOutputMax[0x10]; // 0x210 Vector
    std::uint8_t m_TransformInput[0x68]; // 0x220 CParticleTransformInput
    std::uint8_t m_LocalSpaceTransform[0x68]; // 0x288 CParticleTransformInput
    std::uint8_t m_flStartTime[0x4]; // 0x2F0 float32
    std::uint8_t m_flEndTime[0x4]; // 0x2F4 float32
    std::uint8_t m_nSetMethod[0x4]; // 0x2F8 ParticleSetMethod_t
    std::uint8_t m_bOffset[0x1]; // 0x2FC bool
    std::uint8_t m_bAccelerate[0x3]; // 0x2FD bool
    std::uint8_t m_flRemapBias[0x8]; // 0x300 float32
};

struct C_OP_ScreenSpaceDistanceToEdge {
    static constexpr std::size_t size = 0x500;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldOutput[0x8]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_flMaxDistFromEdge[0x178]; // 0x1E8 CPerParticleFloatInput
    std::uint8_t m_flOutputRemap[0x178]; // 0x360 CParticleRemapFloatInput
    std::uint8_t m_nSetMethod[0x28]; // 0x4D8 ParticleSetMethod_t
};

struct C_OP_RenderStatusEffectTf {
    static constexpr std::size_t size = 0x268;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_pTextureColorWarp[0x8]; // 0x230 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_pTextureNormal[0x8]; // 0x238 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_pTextureMetalness[0x8]; // 0x240 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_pTextureRoughness[0x8]; // 0x248 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_pTextureSelfIllum[0x8]; // 0x250 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_pTextureDetail[0x8]; // 0x258 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_pTextureEnvMap[0x8]; // 0x260 CStrongHandle<InfoForResourceTypeCTextureBase>
};

struct C_OP_RemapDistanceToLineSegmentToScalar {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1F8]; // 0x0
    std::uint8_t m_nFieldOutput[0x4]; // 0x1F8 ParticleAttributeIndex_t
    std::uint8_t m_flMinOutputValue[0x4]; // 0x1FC float32
    std::uint8_t m_flMaxOutputValue[0x8]; // 0x200 float32
};

struct C_OP_RemapVectortoCP {
    static constexpr std::size_t size = 0x1F0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nOutControlPointNumber[0x4]; // 0x1E0 int32
    std::uint8_t m_nFieldInput[0x4]; // 0x1E4 ParticleAttributeIndex_t
    std::uint8_t m_nParticleNumber[0x8]; // 0x1E8 int32
};

struct C_OP_SetFromCPSnapshot {
    static constexpr std::size_t size = 0x678;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nControlPointNumber[0x8]; // 0x1E0 int32
    std::uint8_t m_strSnapshotSubset[0x8]; // 0x1E8 CUtlString
    std::uint8_t m_nAttributeToRead[0x4]; // 0x1F0 ParticleAttributeIndex_t
    std::uint8_t m_nAttributeToWrite[0x4]; // 0x1F4 ParticleAttributeIndex_t
    std::uint8_t m_nLocalSpaceCP[0x4]; // 0x1F8 int32
    std::uint8_t m_bRandom[0x1]; // 0x1FC bool
    std::uint8_t m_bReverse[0x3]; // 0x1FD bool
    std::uint8_t m_nRandomSeed[0x8]; // 0x200 int32
    std::uint8_t m_nSnapShotStartPoint[0x178]; // 0x208 CParticleCollectionFloatInput
    std::uint8_t m_nSnapShotIncrement[0x178]; // 0x380 CParticleCollectionFloatInput
    std::uint8_t m_flInterpolation[0x178]; // 0x4F8 CPerParticleFloatInput
    std::uint8_t m_bSubSample[0x1]; // 0x670 bool
    std::uint8_t m_bPrev[0x7]; // 0x671 bool
};

struct C_OP_DistanceBetweenCPsToCP {
    static constexpr std::size_t size = 0x2A0;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nStartCP[0x4]; // 0x1E8 int32
    std::uint8_t m_nEndCP[0x4]; // 0x1EC int32
    std::uint8_t m_nOutputCP[0x4]; // 0x1F0 int32
    std::uint8_t m_nOutputCPField[0x4]; // 0x1F4 int32
    std::uint8_t m_bSetOnce[0x4]; // 0x1F8 bool
    std::uint8_t m_flInputMin[0x4]; // 0x1FC float32
    std::uint8_t m_flInputMax[0x4]; // 0x200 float32
    std::uint8_t m_flOutputMin[0x4]; // 0x204 float32
    std::uint8_t m_flOutputMax[0x4]; // 0x208 float32
    std::uint8_t m_flMaxTraceLength[0x4]; // 0x20C float32
    std::uint8_t m_flLOSScale[0x4]; // 0x210 float32
    std::uint8_t m_bLOS[0x1]; // 0x214 bool
    std::uint8_t m_CollisionGroupName[0x83]; // 0x215 char[128]
    std::uint8_t m_nTraceSet[0x4]; // 0x298 ParticleTraceSet_t
    std::uint8_t m_nSetParent[0x4]; // 0x29C ParticleParentSetMode_t
};

struct C_OP_SetControlPointToHand {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nCP1[0x4]; // 0x1E8 int32
    std::uint8_t m_nHand[0x4]; // 0x1EC int32
    std::uint8_t m_vecCP1Pos[0xC]; // 0x1F0 Vector
    std::uint8_t m_bOrientToHand[0x4]; // 0x1FC bool
};

struct C_OP_ConstrainDistanceToPath {
    static constexpr std::size_t size = 0x240;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_fMinDistance[0x4]; // 0x1E0 float32
    std::uint8_t m_flMaxDistance0[0x4]; // 0x1E4 float32
    std::uint8_t m_flMaxDistanceMid[0x4]; // 0x1E8 float32
    std::uint8_t m_flMaxDistance1[0x4]; // 0x1EC float32
    std::uint8_t m_PathParameters[0x40]; // 0x1F0 CPathParameters
    std::uint8_t m_flTravelTime[0x4]; // 0x230 float32
    std::uint8_t m_nFieldScale[0x4]; // 0x234 ParticleAttributeIndex_t
    std::uint8_t m_nManualTField[0x8]; // 0x238 ParticleAttributeIndex_t
};

struct C_OP_DistanceCull {
    static constexpr std::size_t size = 0x370;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nControlPoint[0x4]; // 0x1E0 int32
    std::uint8_t m_vecPointOffset[0xC]; // 0x1E4 Vector
    std::uint8_t m_flDistance[0x178]; // 0x1F0 CParticleCollectionFloatInput
    std::uint8_t m_bCullInside[0x4]; // 0x368 bool
    std::uint8_t m_nAttribute[0x4]; // 0x36C ParticleAttributeIndex_t
};

struct C_INIT_CreateAlongPath {
    static constexpr std::size_t size = 0x540;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_fMaxDistance[0x178]; // 0x1E8 CPerParticleFloatInput
    std::uint8_t m_fT[0x180]; // 0x360 CPerParticleFloatInput
    std::uint8_t m_PathParams[0x40]; // 0x4E0 CPathParameters
    std::uint8_t m_bUseRandomCPs[0x4]; // 0x520 bool
    std::uint8_t m_vEndOffset[0xC]; // 0x524 Vector
    std::uint8_t m_bSaveOffset[0x10]; // 0x530 bool
};

struct C_OP_GameDecalRenderer {
    static constexpr std::size_t size = 0x1CC0;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_sDecalGroupName[0x8]; // 0x230 CGlobalSymbol
    std::uint8_t m_nEventType[0x8]; // 0x238 EventTypeSelection_t
    std::uint8_t m_nInteractionMask[0x8]; // 0x240 ParticleCollisionMask_t
    std::uint8_t m_nCollisionGroup[0x8]; // 0x248 ParticleCollisionGroup_t
    std::uint8_t m_vecStartPos[0x6D8]; // 0x250 CPerParticleVecInput
    std::uint8_t m_vecEndPos[0x6D8]; // 0x928 CPerParticleVecInput
    std::uint8_t m_flTraceBloat[0x178]; // 0x1000 CPerParticleFloatInput
    std::uint8_t m_flDecalSize[0x178]; // 0x1178 CPerParticleFloatInput
    std::uint8_t m_nDecalGroupIndex[0x178]; // 0x12F0 CPerParticleFloatInput
    std::uint8_t m_flDecalRotation[0x178]; // 0x1468 CPerParticleFloatInput
    std::uint8_t m_vModulationColor[0x6D8]; // 0x15E0 CPerParticleVecInput
    std::uint8_t m_bUseGameDefaultDecalSize[0x1]; // 0x1CB8 bool
    std::uint8_t m_bRandomDecalRotation[0x1]; // 0x1CB9 bool
    std::uint8_t m_bRandomlySelectDecalInGroup[0x1]; // 0x1CBA bool
    std::uint8_t m_bNoDecalsOnOwner[0x1]; // 0x1CBB bool
    std::uint8_t m_bVisualizeTraces[0x4]; // 0x1CBC bool
};

struct C_OP_SetControlPointsToModelParticles {
    static constexpr std::size_t size = 0x2F0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_HitboxSetName[0x80]; // 0x1E0 char[128]
    std::uint8_t m_AttachmentName[0x80]; // 0x260 char[128]
    std::uint8_t m_nFirstControlPoint[0x4]; // 0x2E0 int32
    std::uint8_t m_nNumControlPoints[0x4]; // 0x2E4 int32
    std::uint8_t m_nFirstSourcePoint[0x4]; // 0x2E8 int32
    std::uint8_t m_bSkin[0x1]; // 0x2EC bool
    std::uint8_t m_bAttachment[0x3]; // 0x2ED bool
};

struct C_OP_ColorInterpolateRandom {
    static constexpr std::size_t size = 0x220;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_ColorFadeMin[0x1C]; // 0x1E0 Color
    std::uint8_t m_ColorFadeMax[0x10]; // 0x1FC Color
    std::uint8_t m_flFadeStartTime[0x4]; // 0x20C float32
    std::uint8_t m_flFadeEndTime[0x4]; // 0x210 float32
    std::uint8_t m_nFieldOutput[0x4]; // 0x214 ParticleAttributeIndex_t
    std::uint8_t m_bEaseInOut[0x8]; // 0x218 bool
};

struct C_INIT_RemapNamedModelSequenceToScalar {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x230]; // 0x0
};

struct C_OP_RenderLights {
    static constexpr std::size_t size = 0x258;
    std::uint8_t pad_0[0x238]; // 0x0
    std::uint8_t m_flAnimationRate[0x4]; // 0x238 float32
    std::uint8_t m_nAnimationType[0x4]; // 0x23C AnimationType_t
    std::uint8_t m_bAnimateInFPS[0x4]; // 0x240 bool
    std::uint8_t m_flMinSize[0x4]; // 0x244 float32
    std::uint8_t m_flMaxSize[0x4]; // 0x248 float32
    std::uint8_t m_flStartFadeSize[0x4]; // 0x24C float32
    std::uint8_t m_flEndFadeSize[0x8]; // 0x250 float32
};

struct C_OP_DecayClampCount {
    static constexpr std::size_t size = 0x358;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nCount[0x178]; // 0x1E0 CParticleCollectionFloatInput
};

struct CRandomNumberGeneratorParameters {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_bDistributeEvenly[0x4]; // 0x0 bool
    std::uint8_t m_nSeed[0x4]; // 0x4 int32
};

struct C_INIT_ColorLitPerParticle {
    static constexpr std::size_t size = 0x220;
    std::uint8_t pad_0[0x200]; // 0x0
    std::uint8_t m_ColorMin[0x4]; // 0x200 Color
    std::uint8_t m_ColorMax[0x4]; // 0x204 Color
    std::uint8_t m_TintMin[0x4]; // 0x208 Color
    std::uint8_t m_TintMax[0x4]; // 0x20C Color
    std::uint8_t m_flTintPerc[0x4]; // 0x210 float32
    std::uint8_t m_nTintBlendMode[0x4]; // 0x214 ParticleColorBlendMode_t
    std::uint8_t m_flLightAmplification[0x8]; // 0x218 float32
};

struct C_OP_RenderPoints {
    static constexpr std::size_t size = 0x238;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_hMaterial[0x8]; // 0x230 CStrongHandle<InfoForResourceTypeIMaterial2>
};

struct C_INIT_SetAttributeToScalarExpression {
    static constexpr std::size_t size = 0x680;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nExpression[0x8]; // 0x1E8 ScalarExpressionType_t
    std::uint8_t m_flInput1[0x178]; // 0x1F0 CPerParticleFloatInput
    std::uint8_t m_flInput2[0x178]; // 0x368 CPerParticleFloatInput
    std::uint8_t m_flOutputRemap[0x178]; // 0x4E0 CParticleRemapFloatInput
    std::uint8_t m_nOutputField[0x4]; // 0x658 ParticleAttributeIndex_t
    std::uint8_t m_nSetMethod[0x24]; // 0x65C ParticleSetMethod_t
};

struct C_INIT_CreateOnGrid {
    static constexpr std::size_t size = 0xAC0;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nXCount[0x178]; // 0x1E8 CParticleCollectionFloatInput
    std::uint8_t m_nYCount[0x178]; // 0x360 CParticleCollectionFloatInput
    std::uint8_t m_nZCount[0x178]; // 0x4D8 CParticleCollectionFloatInput
    std::uint8_t m_nXSpacing[0x178]; // 0x650 CParticleCollectionFloatInput
    std::uint8_t m_nYSpacing[0x178]; // 0x7C8 CParticleCollectionFloatInput
    std::uint8_t m_nZSpacing[0x178]; // 0x940 CParticleCollectionFloatInput
    std::uint8_t m_nControlPointNumber[0x4]; // 0xAB8 int32
    std::uint8_t m_bLocalSpace[0x1]; // 0xABC bool
    std::uint8_t m_bCenter[0x1]; // 0xABD bool
    std::uint8_t m_bHollow[0x2]; // 0xABE bool
};

struct C_OP_RampCPLinearRandom {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nOutControlPointNumber[0x4]; // 0x1E8 int32
    std::uint8_t m_vecRateMin[0xC]; // 0x1EC Vector
    std::uint8_t m_vecRateMax[0x10]; // 0x1F8 Vector
};

struct C_OP_VelocityMatchingForce {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flDirScale[0x4]; // 0x1E0 float32
    std::uint8_t m_flSpdScale[0x4]; // 0x1E4 float32
    std::uint8_t m_flNeighborDistance[0x4]; // 0x1E8 float32
    std::uint8_t m_flFacingStrength[0x4]; // 0x1EC float32
    std::uint8_t m_bUseAABB[0x4]; // 0x1F0 bool
    std::uint8_t m_nCPBroadcast[0x4]; // 0x1F4 int32
};

struct C_INIT_RandomAlphaWindowThreshold {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_flMin[0x4]; // 0x1E8 float32
    std::uint8_t m_flMax[0x4]; // 0x1EC float32
    std::uint8_t m_flExponent[0x8]; // 0x1F0 float32
};

struct C_INIT_CreateOnModelAtHeight {
    static constexpr std::size_t size = 0x1498;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_bUseBones[0x1]; // 0x1E8 bool
    std::uint8_t m_bForceZ[0x3]; // 0x1E9 bool
    std::uint8_t m_nControlPointNumber[0x4]; // 0x1EC int32
    std::uint8_t m_nHeightCP[0x4]; // 0x1F0 int32
    std::uint8_t m_bUseWaterHeight[0x4]; // 0x1F4 bool
    std::uint8_t m_flDesiredHeight[0x178]; // 0x1F8 CParticleCollectionFloatInput
    std::uint8_t m_vecHitBoxScale[0x6D8]; // 0x370 CParticleCollectionVecInput
    std::uint8_t m_vecDirectionBias[0x6D8]; // 0xA48 CParticleCollectionVecInput
    std::uint8_t m_nBiasType[0x4]; // 0x1120 ParticleHitboxBiasType_t
    std::uint8_t m_bLocalCoords[0x1]; // 0x1124 bool
    std::uint8_t m_bPreferMovingBoxes[0x1]; // 0x1125 bool
    std::uint8_t m_HitboxSetName[0x82]; // 0x1126 char[128]
    std::uint8_t m_flHitboxVelocityScale[0x178]; // 0x11A8 CParticleCollectionFloatInput
    std::uint8_t m_flMaxBoneVelocity[0x178]; // 0x1320 CParticleCollectionFloatInput
};

struct C_OP_ModelSurfaceSnapshotGenerator {
    static constexpr std::size_t size = 0x838;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nCPSnapshot[0x8]; // 0x1E8 int32
    std::uint8_t m_modelInput[0x60]; // 0x1F0 CParticleModelInput
    std::uint8_t m_flRecalcRate[0x178]; // 0x250 CParticleCollectionFloatInput
    std::uint8_t m_flUSpacing[0x178]; // 0x3C8 CParticleCollectionFloatInput
    std::uint8_t m_flVSpacing[0x178]; // 0x540 CParticleCollectionFloatInput
    std::uint8_t m_flSurfaceOffset[0x178]; // 0x6B8 CParticleCollectionFloatInput
    std::uint8_t m_bSetNormal[0x1]; // 0x830 bool
    std::uint8_t m_bSetUp[0x1]; // 0x831 bool
    std::uint8_t m_bSetGravity[0x1]; // 0x832 bool
    std::uint8_t m_bSetUV[0x5]; // 0x833 bool
};

struct C_OP_RestartAfterDuration {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flDurationMin[0x4]; // 0x1E0 float32
    std::uint8_t m_flDurationMax[0x4]; // 0x1E4 float32
    std::uint8_t m_nCP[0x4]; // 0x1E8 int32
    std::uint8_t m_nCPField[0x4]; // 0x1EC int32
    std::uint8_t m_nChildGroupID[0x4]; // 0x1F0 int32
    std::uint8_t m_bOnlyChildren[0x4]; // 0x1F4 bool
};

struct C_OP_RenderClothForce {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x230]; // 0x0
};

struct C_OP_RemapVisibilityScalar {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldInput[0x4]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E4 ParticleAttributeIndex_t
    std::uint8_t m_flInputMin[0x4]; // 0x1E8 float32
    std::uint8_t m_flInputMax[0x4]; // 0x1EC float32
    std::uint8_t m_flOutputMin[0x4]; // 0x1F0 float32
    std::uint8_t m_flOutputMax[0x4]; // 0x1F4 float32
    std::uint8_t m_flRadiusScale[0x8]; // 0x1F8 float32
};

struct C_INIT_CreateSequentialPathV2 {
    static constexpr std::size_t size = 0x530;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_fMaxDistance[0x178]; // 0x1E8 CPerParticleFloatInput
    std::uint8_t m_flNumToAssign[0x178]; // 0x360 CParticleCollectionFloatInput
    std::uint8_t m_bLoop[0x1]; // 0x4D8 bool
    std::uint8_t m_bCPPairs[0x1]; // 0x4D9 bool
    std::uint8_t m_bSaveOffset[0x6]; // 0x4DA bool
    std::uint8_t m_PathParams[0x50]; // 0x4E0 CPathParameters
};

struct VecInputMaterialVariable_t {
    static constexpr std::size_t size = 0x6E0;
    std::uint8_t m_strVariable[0x8]; // 0x0 CUtlString
    std::uint8_t m_vecInput[0x6D8]; // 0x8 CParticleCollectionVecInput
};

struct C_INIT_RemapInitialDirectionToTransformToVector {
    static constexpr std::size_t size = 0x270;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_TransformInput[0x68]; // 0x1E8 CParticleTransformInput
    std::uint8_t m_nFieldOutput[0x4]; // 0x250 ParticleAttributeIndex_t
    std::uint8_t m_flScale[0x4]; // 0x254 float32
    std::uint8_t m_flOffsetRot[0x4]; // 0x258 float32
    std::uint8_t m_vecOffsetAxis[0xC]; // 0x25C Vector
    std::uint8_t m_bNormalize[0x8]; // 0x268 bool
};

struct C_OP_LockToSavedSequentialPathV2 {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flFadeStart[0x4]; // 0x1E0 float32
    std::uint8_t m_flFadeEnd[0x4]; // 0x1E4 float32
    std::uint8_t m_bCPPairs[0x8]; // 0x1E8 bool
    std::uint8_t m_PathParams[0x40]; // 0x1F0 CPathParameters
};

struct C_OP_NormalLock {
    static constexpr std::size_t size = 0x1E8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nControlPointNumber[0x8]; // 0x1E0 int32
};

struct C_INIT_RemapTransformOrientationToRotations {
    static constexpr std::size_t size = 0x260;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_TransformInput[0x68]; // 0x1E8 CParticleTransformInput
    std::uint8_t m_vecRotation[0xC]; // 0x250 Vector
    std::uint8_t m_bUseQuat[0x1]; // 0x25C bool
    std::uint8_t m_bWriteNormal[0x3]; // 0x25D bool
};

struct C_OP_Cull {
    static constexpr std::size_t size = 0x1F0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flCullPerc[0x4]; // 0x1E0 float32
    std::uint8_t m_flCullStart[0x4]; // 0x1E4 float32
    std::uint8_t m_flCullEnd[0x4]; // 0x1E8 float32
    std::uint8_t m_flCullExp[0x4]; // 0x1EC float32
};

struct C_INIT_RandomYawFlip {
    static constexpr std::size_t size = 0x1F0;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_flPercent[0x8]; // 0x1E8 float32
};

struct SequenceWeightedList_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_nSequence[0x4]; // 0x0 int32
    std::uint8_t m_flRelativeWeight[0x4]; // 0x4 float32
};

struct C_OP_ReadFromNeighboringParticle {
    static constexpr std::size_t size = 0x4E0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldInput[0x4]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E4 ParticleAttributeIndex_t
    std::uint8_t m_nIncrement[0x8]; // 0x1E8 int32
    std::uint8_t m_DistanceCheck[0x178]; // 0x1F0 CPerParticleFloatInput
    std::uint8_t m_flInterpolation[0x178]; // 0x368 CPerParticleFloatInput
};

struct C_OP_RenderText {
    static constexpr std::size_t size = 0x240;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_OutlineColor[0x8]; // 0x230 Color
    std::uint8_t m_DefaultText[0x8]; // 0x238 CUtlString
};

struct C_OP_LerpToInitialPosition {
    static constexpr std::size_t size = 0xBB8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nControlPointNumber[0x8]; // 0x1E0 int32
    std::uint8_t m_flInterpolation[0x178]; // 0x1E8 CPerParticleFloatInput
    std::uint8_t m_nCacheField[0x8]; // 0x360 ParticleAttributeIndex_t
    std::uint8_t m_flScale[0x178]; // 0x368 CParticleCollectionFloatInput
    std::uint8_t m_vecScale[0x6D8]; // 0x4E0 CParticleCollectionVecInput
};

struct C_INIT_RandomRotation {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x208]; // 0x0
};

struct C_OP_LerpEndCapVector {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_vecOutput[0xC]; // 0x1E4 Vector
    std::uint8_t m_flLerpTime[0x8]; // 0x1F0 float32
};

struct C_OP_VelocityDecay {
    static constexpr std::size_t size = 0x1E8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flMinVelocity[0x8]; // 0x1E0 float32
};

struct C_OP_SetCPOrientationToPointAtCP {
    static constexpr std::size_t size = 0x370;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nInputCP[0x4]; // 0x1E8 int32
    std::uint8_t m_nOutputCP[0x4]; // 0x1EC int32
    std::uint8_t m_flInterpolation[0x178]; // 0x1F0 CParticleCollectionFloatInput
    std::uint8_t m_b2DOrientation[0x1]; // 0x368 bool
    std::uint8_t m_bAvoidSingularity[0x1]; // 0x369 bool
    std::uint8_t m_bPointAway[0x6]; // 0x36A bool
};

struct C_OP_LockToPointList {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldOutput[0x8]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_pointList[0x18]; // 0x1E8 CUtlVector<PointDefinition_t>
    std::uint8_t m_bPlaceAlongPath[0x1]; // 0x200 bool
    std::uint8_t m_bClosedLoop[0x3]; // 0x201 bool
    std::uint8_t m_nNumPointsAlongPath[0x4]; // 0x204 int32
};

struct C_INIT_CreateWithinCone {
    static constexpr std::size_t size = 0x840;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_TransformInput[0x68]; // 0x1E8 CParticleTransformInput
    std::uint8_t m_flInnerAngle[0x178]; // 0x250 CPerParticleFloatInput
    std::uint8_t m_flOuterAngle[0x178]; // 0x3C8 CPerParticleFloatInput
    std::uint8_t m_flSpeed[0x178]; // 0x540 CPerParticleFloatInput
    std::uint8_t m_flOffset[0x178]; // 0x6B8 CPerParticleFloatInput
    std::uint8_t m_bCollapseOffset[0x4]; // 0x830 bool
    std::uint8_t m_randomnessParameters[0xC]; // 0x834 CRandomNumberGeneratorParameters
};

struct C_OP_MovementPlaceOnGround {
    static constexpr std::size_t size = 0xAF0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flOffset[0x178]; // 0x1E0 CPerParticleFloatInput
    std::uint8_t m_flMaxTraceLength[0x4]; // 0x358 float32
    std::uint8_t m_flTolerance[0x4]; // 0x35C float32
    std::uint8_t m_vecTraceDir[0x6D8]; // 0x360 CPerParticleVecInput
    std::uint8_t m_flTraceOffset[0x4]; // 0xA38 float32
    std::uint8_t m_flLerpRate[0x4]; // 0xA3C float32
    std::uint8_t m_CollisionGroupName[0x80]; // 0xA40 char[128]
    std::uint8_t m_nTraceSet[0x4]; // 0xAC0 ParticleTraceSet_t
    std::uint8_t m_nRefCP1[0x4]; // 0xAC4 int32
    std::uint8_t m_nRefCP2[0x4]; // 0xAC8 int32
    std::uint8_t m_nLerpCP[0xC]; // 0xACC int32
    std::uint8_t m_nTraceMissBehavior[0x4]; // 0xAD8 ParticleTraceMissBehavior_t
    std::uint8_t m_bIncludeShotHull[0x1]; // 0xADC bool
    std::uint8_t m_bIncludeWater[0x3]; // 0xADD bool
    std::uint8_t m_bSetNormal[0x1]; // 0xAE0 bool
    std::uint8_t m_bScaleOffset[0x3]; // 0xAE1 bool
    std::uint8_t m_nPreserveOffsetCP[0x4]; // 0xAE4 int32
    std::uint8_t m_nIgnoreCP[0x8]; // 0xAE8 int32
};

struct C_OP_SetCPOrientationToDirection {
    static constexpr std::size_t size = 0x1E8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nInputControlPoint[0x4]; // 0x1E0 int32
    std::uint8_t m_nOutputControlPoint[0x4]; // 0x1E4 int32
};

struct C_OP_RemapCrossProductOfTwoVectorsToVector {
    static constexpr std::size_t size = 0xF98;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_InputVec1[0x6D8]; // 0x1E0 CPerParticleVecInput
    std::uint8_t m_InputVec2[0x6D8]; // 0x8B8 CPerParticleVecInput
    std::uint8_t m_nFieldOutput[0x4]; // 0xF90 ParticleAttributeIndex_t
    std::uint8_t m_bNormalize[0x4]; // 0xF94 bool
};

struct C_OP_RemapTransformOrientationToRotations {
    static constexpr std::size_t size = 0x258;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_TransformInput[0x68]; // 0x1E0 CParticleTransformInput
    std::uint8_t m_vecRotation[0xC]; // 0x248 Vector
    std::uint8_t m_bUseQuat[0x1]; // 0x254 bool
    std::uint8_t m_bWriteNormal[0x3]; // 0x255 bool
};

struct C_INIT_RandomRotationSpeed {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x208]; // 0x0
};

struct C_OP_InheritFromParentParticlesV2 {
    static constexpr std::size_t size = 0x658;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flScale[0x178]; // 0x1E0 CPerParticleFloatInput
    std::uint8_t m_nFieldOutput[0x8]; // 0x358 ParticleAttributeIndex_t
    std::uint8_t m_nIncrement[0x178]; // 0x360 CPerParticleFloatInput
    std::uint8_t m_bSubSample[0x1]; // 0x4D8 bool
    std::uint8_t m_bRandomDistribution[0x1]; // 0x4D9 bool
    std::uint8_t m_bReverse[0x2]; // 0x4DA bool
    std::uint8_t m_nMissingParentBehavior[0x4]; // 0x4DC MissingParentInheritBehavior_t
    std::uint8_t m_flInterpolation[0x178]; // 0x4E0 CPerParticleFloatInput
};

struct C_INIT_RandomSecondSequence {
    static constexpr std::size_t size = 0x1F0;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nSequenceMin[0x4]; // 0x1E8 int32
    std::uint8_t m_nSequenceMax[0x4]; // 0x1EC int32
};

struct C_OP_SetFloatCollection {
    static constexpr std::size_t size = 0x500;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_InputValue[0x178]; // 0x1E0 CParticleCollectionFloatInput
    std::uint8_t m_nOutputField[0x4]; // 0x358 ParticleAttributeIndex_t
    std::uint8_t m_nSetMethod[0x4]; // 0x35C ParticleSetMethod_t
    std::uint8_t m_Lerp[0x1A0]; // 0x360 CParticleCollectionFloatInput
};

struct PointDefinition_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t m_nControlPoint[0x4]; // 0x0 int32
    std::uint8_t m_bLocalCoords[0x4]; // 0x4 bool
    std::uint8_t m_vOffset[0xC]; // 0x8 Vector
};

struct C_OP_SetControlPointPositionToRandomActiveCP {
    static constexpr std::size_t size = 0x370;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nCP1[0x4]; // 0x1E8 int32
    std::uint8_t m_nHeadLocationMin[0x4]; // 0x1EC int32
    std::uint8_t m_nHeadLocationMax[0x8]; // 0x1F0 int32
    std::uint8_t m_flResetRate[0x178]; // 0x1F8 CParticleCollectionFloatInput
};

struct C_OP_Diffusion {
    static constexpr std::size_t size = 0x1F0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flRadiusScale[0x4]; // 0x1E0 float32
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E4 ParticleAttributeIndex_t
    std::uint8_t m_nVoxelGridResolution[0x8]; // 0x1E8 int32
};

struct C_INIT_AgeNoise {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_bAbsVal[0x1]; // 0x1E8 bool
    std::uint8_t m_bAbsValInv[0x3]; // 0x1E9 bool
    std::uint8_t m_flOffset[0x4]; // 0x1EC float32
    std::uint8_t m_flAgeMin[0x4]; // 0x1F0 float32
    std::uint8_t m_flAgeMax[0x4]; // 0x1F4 float32
    std::uint8_t m_flNoiseScale[0x4]; // 0x1F8 float32
    std::uint8_t m_flNoiseScaleLoc[0x4]; // 0x1FC float32
    std::uint8_t m_vecOffsetLoc[0x10]; // 0x200 Vector
};

struct C_OP_RemapVectorComponentToScalar {
    static constexpr std::size_t size = 0x1F0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldInput[0x4]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E4 ParticleAttributeIndex_t
    std::uint8_t m_nComponent[0x8]; // 0x1E8 int32
};

struct CGeneralRandomRotation {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E8 ParticleAttributeIndex_t
    std::uint8_t m_flDegrees[0x4]; // 0x1EC float32
    std::uint8_t m_flDegreesMin[0x4]; // 0x1F0 float32
    std::uint8_t m_flDegreesMax[0x4]; // 0x1F4 float32
    std::uint8_t m_flRotationRandExponent[0x4]; // 0x1F8 float32
    std::uint8_t m_bRandomlyFlipDirection[0xC]; // 0x1FC bool
};

struct C_OP_DistanceBetweenVecs {
    static constexpr std::size_t size = 0x1580;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldOutput[0x8]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_vecPoint1[0x6D8]; // 0x1E8 CPerParticleVecInput
    std::uint8_t m_vecPoint2[0x6D8]; // 0x8C0 CPerParticleVecInput
    std::uint8_t m_flInputMin[0x178]; // 0xF98 CPerParticleFloatInput
    std::uint8_t m_flInputMax[0x178]; // 0x1110 CPerParticleFloatInput
    std::uint8_t m_flOutputMin[0x178]; // 0x1288 CPerParticleFloatInput
    std::uint8_t m_flOutputMax[0x178]; // 0x1400 CPerParticleFloatInput
    std::uint8_t m_nSetMethod[0x4]; // 0x1578 ParticleSetMethod_t
    std::uint8_t m_bDeltaTime[0x4]; // 0x157C bool
};

struct C_OP_DampenToCP {
    static constexpr std::size_t size = 0x1F0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nControlPointNumber[0x4]; // 0x1E0 int32
    std::uint8_t m_flRange[0x4]; // 0x1E4 float32
    std::uint8_t m_flScale[0x8]; // 0x1E8 float32
};

struct C_OP_CalculateVectorAttribute {
    static constexpr std::size_t size = 0x240;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_vStartValue[0xC]; // 0x1E0 Vector
    std::uint8_t m_nFieldInput1[0x4]; // 0x1EC ParticleAttributeIndex_t
    std::uint8_t m_flInputScale1[0x4]; // 0x1F0 float32
    std::uint8_t m_nFieldInput2[0x4]; // 0x1F4 ParticleAttributeIndex_t
    std::uint8_t m_flInputScale2[0x4]; // 0x1F8 float32
    std::uint8_t m_nControlPointInput1[0x14]; // 0x1FC ControlPointReference_t
    std::uint8_t m_flControlPointScale1[0x4]; // 0x210 float32
    std::uint8_t m_nControlPointInput2[0x14]; // 0x214 ControlPointReference_t
    std::uint8_t m_flControlPointScale2[0x4]; // 0x228 float32
    std::uint8_t m_nFieldOutput[0x4]; // 0x22C ParticleAttributeIndex_t
    std::uint8_t m_vFinalOutputScale[0x10]; // 0x230 Vector
};

struct C_OP_LockToBone {
    static constexpr std::size_t size = 0xBA0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_modelInput[0x60]; // 0x1E0 CParticleModelInput
    std::uint8_t m_transformInput[0x68]; // 0x240 CParticleTransformInput
    std::uint8_t m_flLifeTimeFadeStart[0x4]; // 0x2A8 float32
    std::uint8_t m_flLifeTimeFadeEnd[0x4]; // 0x2AC float32
    std::uint8_t m_flJumpThreshold[0x4]; // 0x2B0 float32
    std::uint8_t m_flPrevPosScale[0x4]; // 0x2B4 float32
    std::uint8_t m_HitboxSetName[0x80]; // 0x2B8 char[128]
    std::uint8_t m_bRigid[0x1]; // 0x338 bool
    std::uint8_t m_bUseBones[0x3]; // 0x339 bool
    std::uint8_t m_nFieldOutput[0x4]; // 0x33C ParticleAttributeIndex_t
    std::uint8_t m_nFieldOutputPrev[0x4]; // 0x340 ParticleAttributeIndex_t
    std::uint8_t m_nRotationSetType[0x4]; // 0x344 ParticleRotationLockType_t
    std::uint8_t m_bRigidRotationLock[0x8]; // 0x348 bool
    std::uint8_t m_vecRotation[0x6D8]; // 0x350 CPerParticleVecInput
    std::uint8_t m_flRotLerp[0x178]; // 0xA28 CPerParticleFloatInput
};

struct C_OP_RemapNamedModelBodyPartOnceTimed {
    static constexpr std::size_t size = 0x240;
    std::uint8_t pad_0[0x240]; // 0x0
};

struct C_OP_ScreenSpaceRotateTowardTarget {
    static constexpr std::size_t size = 0xBB0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_vecTargetPosition[0x6D8]; // 0x1E0 CPerParticleVecInput
    std::uint8_t m_flOutputRemap[0x178]; // 0x8B8 CParticleRemapFloatInput
    std::uint8_t m_nSetMethod[0x8]; // 0xA30 ParticleSetMethod_t
    std::uint8_t m_flScreenEdgeAlignmentDistance[0x178]; // 0xA38 CPerParticleFloatInput
};

struct C_OP_MovementMaintainOffset {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_vecOffset[0xC]; // 0x1E0 Vector
    std::uint8_t m_nCP[0x4]; // 0x1EC int32
    std::uint8_t m_bRadiusScale[0x8]; // 0x1F0 bool
};

struct C_INIT_CreateWithinCapsuleTransform {
    static constexpr std::size_t size = 0x1768;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_fRadiusMin[0x178]; // 0x1E8 CPerParticleFloatInput
    std::uint8_t m_fRadiusMax[0x178]; // 0x360 CPerParticleFloatInput
    std::uint8_t m_fHeight[0x178]; // 0x4D8 CPerParticleFloatInput
    std::uint8_t m_TransformInput[0x68]; // 0x650 CParticleTransformInput
    std::uint8_t m_fSpeedMin[0x178]; // 0x6B8 CPerParticleFloatInput
    std::uint8_t m_fSpeedMax[0x178]; // 0x830 CPerParticleFloatInput
    std::uint8_t m_fSpeedRandExp[0x8]; // 0x9A8 float32
    std::uint8_t m_LocalCoordinateSystemSpeedMin[0x6D8]; // 0x9B0 CPerParticleVecInput
    std::uint8_t m_LocalCoordinateSystemSpeedMax[0x6D8]; // 0x1088 CPerParticleVecInput
    std::uint8_t m_nFieldOutput[0x4]; // 0x1760 ParticleAttributeIndex_t
    std::uint8_t m_nFieldVelocity[0x4]; // 0x1764 ParticleAttributeIndex_t
};

struct C_OP_SetVec {
    static constexpr std::size_t size = 0xA40;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_InputValue[0x6D8]; // 0x1E0 CPerParticleVecInput
    std::uint8_t m_nOutputField[0x4]; // 0x8B8 ParticleAttributeIndex_t
    std::uint8_t m_nSetMethod[0x4]; // 0x8BC ParticleSetMethod_t
    std::uint8_t m_Lerp[0x178]; // 0x8C0 CPerParticleFloatInput
    std::uint8_t m_bNormalizedOutput[0x8]; // 0xA38 bool
};

struct C_INIT_CreateFromParentParticles {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_flVelocityScale[0x4]; // 0x1E8 float32
    std::uint8_t m_flIncrement[0x4]; // 0x1EC float32
    std::uint8_t m_bRandomDistribution[0x4]; // 0x1F0 bool
    std::uint8_t m_nRandomSeed[0x4]; // 0x1F4 int32
    std::uint8_t m_bSubFrame[0x1]; // 0x1F8 bool
    std::uint8_t m_bSetRopeSegmentID[0x7]; // 0x1F9 bool
};

struct C_INIT_CheckParticleForWater {
    static constexpr std::size_t size = 0x4E8;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_flRadius[0x178]; // 0x1E8 CPerParticleFloatInput
    std::uint8_t m_nFieldOutput[0x8]; // 0x360 ParticleAttributeIndex_t
    std::uint8_t m_flOutputRemap[0x178]; // 0x368 CParticleRemapFloatInput
    std::uint8_t m_nSetMethod[0x8]; // 0x4E0 ParticleSetMethod_t
};

struct C_INIT_RandomNamedModelBodyPart {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x210]; // 0x0
};

struct C_OP_RenderOmni2Light {
    static constexpr std::size_t size = 0x2E88;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_nLightType[0x4]; // 0x230 ParticleOmni2LightTypeChoiceList_t
    std::uint8_t m_nMaxAllowed[0x4]; // 0x234 uint16
    std::uint8_t m_vColorBlend[0x6D8]; // 0x238 CParticleCollectionVecInput
    std::uint8_t m_nColorBlendType[0x8]; // 0x910 ParticleColorBlendType_t
    std::uint8_t m_strLightStyle[0x8]; // 0x918 CUtlString
    std::uint8_t m_flLightStyleTime[0x178]; // 0x920 CPerParticleFloatInput
    std::uint8_t m_nBrightnessUnit[0x8]; // 0xA98 ParticleLightUnitChoiceList_t
    std::uint8_t m_flBrightnessLumens[0x178]; // 0xAA0 CPerParticleFloatInput
    std::uint8_t m_flBrightnessCandelas[0x178]; // 0xC18 CPerParticleFloatInput
    std::uint8_t m_bCastShadows[0x1]; // 0xD90 bool
    std::uint8_t m_bDynamicBounce[0x7]; // 0xD91 bool
    std::uint8_t m_flBounceScale[0x178]; // 0xD98 CParticleCollectionFloatInput
    std::uint8_t m_bFog[0x8]; // 0xF10 bool
    std::uint8_t m_flFogScale[0x178]; // 0xF18 CPerParticleFloatInput
    std::uint8_t m_flLuminaireRadius[0x178]; // 0x1090 CPerParticleFloatInput
    std::uint8_t m_nOrientationType[0x8]; // 0x1208 ParticleOmni2LighOrientationChoiceList_t
    std::uint8_t m_vNormal[0x6D8]; // 0x1210 CPerParticleVecInput
    std::uint8_t m_vTarget[0x6D8]; // 0x18E8 CPerParticleVecInput
    std::uint8_t m_flFOVAngle[0x178]; // 0x1FC0 CPerParticleFloatInput
    std::uint8_t m_flBarnShape[0x178]; // 0x2138 CPerParticleFloatInput
    std::uint8_t m_flBarnNearSizeX[0x178]; // 0x22B0 CPerParticleFloatInput
    std::uint8_t m_flBarnNearSizeY[0x178]; // 0x2428 CPerParticleFloatInput
    std::uint8_t m_flBarnSoftX[0x178]; // 0x25A0 CPerParticleFloatInput
    std::uint8_t m_flBarnSoftY[0x178]; // 0x2718 CPerParticleFloatInput
    std::uint8_t m_flSkirt[0x178]; // 0x2890 CPerParticleFloatInput
    std::uint8_t m_flRange[0x178]; // 0x2A08 CPerParticleFloatInput
    std::uint8_t m_flInnerConeAngle[0x178]; // 0x2B80 CPerParticleFloatInput
    std::uint8_t m_flOuterConeAngle[0x178]; // 0x2CF8 CPerParticleFloatInput
    std::uint8_t m_hLightCookie[0x8]; // 0x2E70 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_bSphericalCookie[0x10]; // 0x2E78 bool
};

struct C_OP_ConnectParentParticleToNearest {
    static constexpr std::size_t size = 0x4E0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFirstControlPoint[0x4]; // 0x1E0 int32
    std::uint8_t m_nSecondControlPoint[0x4]; // 0x1E4 int32
    std::uint8_t m_bUseRadius[0x8]; // 0x1E8 bool
    std::uint8_t m_flRadiusScale[0x178]; // 0x1F0 CParticleCollectionFloatInput
    std::uint8_t m_flParentRadiusScale[0x178]; // 0x368 CParticleCollectionFloatInput
};

struct CPAssignment_t {
    static constexpr std::size_t size = 0x6E8;
    std::uint8_t m_nCPNumber[0x8]; // 0x0 int32
    std::uint8_t m_Pos[0x6D8]; // 0x8 CPerParticleVecInput
    std::uint8_t m_nOrientationMode[0x8]; // 0x6E0 ParticleOrientationSetMode_t
};

struct C_INIT_RemapParticleCountToNamedModelBodyPartScalar {
    static constexpr std::size_t size = 0x238;
    std::uint8_t pad_0[0x238]; // 0x0
};

struct C_INIT_InitSkinnedPositionFromCPSnapshot {
    static constexpr std::size_t size = 0x398;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nSnapshotControlPointNumber[0x4]; // 0x1E8 int32
    std::uint8_t m_nControlPointNumber[0x4]; // 0x1EC int32
    std::uint8_t m_bRandom[0x4]; // 0x1F0 bool
    std::uint8_t m_nRandomSeed[0x4]; // 0x1F4 int32
    std::uint8_t m_bRigid[0x1]; // 0x1F8 bool
    std::uint8_t m_bSetNormal[0x1]; // 0x1F9 bool
    std::uint8_t m_bIgnoreDt[0x2]; // 0x1FA bool
    std::uint8_t m_flMinNormalVelocity[0x4]; // 0x1FC float32
    std::uint8_t m_flMaxNormalVelocity[0x4]; // 0x200 float32
    std::uint8_t m_nIndexType[0x4]; // 0x204 SnapshotIndexType_t
    std::uint8_t m_flReadIndex[0x178]; // 0x208 CPerParticleFloatInput
    std::uint8_t m_flIncrement[0x4]; // 0x380 float32
    std::uint8_t m_nFullLoopIncrement[0x4]; // 0x384 int32
    std::uint8_t m_nSnapShotStartPoint[0x4]; // 0x388 int32
    std::uint8_t m_flBoneVelocity[0x4]; // 0x38C float32
    std::uint8_t m_flBoneVelocityMax[0x4]; // 0x390 float32
    std::uint8_t m_bCopyColor[0x1]; // 0x394 bool
    std::uint8_t m_bCopyAlpha[0x1]; // 0x395 bool
    std::uint8_t m_bSetRadius[0x2]; // 0x396 bool
};

struct C_OP_LagCompensation {
    static constexpr std::size_t size = 0x1F0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nDesiredVelocityCP[0x4]; // 0x1E0 int32
    std::uint8_t m_nLatencyCP[0x4]; // 0x1E4 int32
    std::uint8_t m_nLatencyCPField[0x4]; // 0x1E8 int32
    std::uint8_t m_nDesiredVelocityCPField[0x4]; // 0x1EC int32
};

struct C_OP_CollideWithSelf {
    static constexpr std::size_t size = 0x4D0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flRadiusScale[0x178]; // 0x1E0 CPerParticleFloatInput
    std::uint8_t m_flMinimumSpeed[0x178]; // 0x358 CPerParticleFloatInput
};

struct C_OP_Noise {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_flOutputMin[0x4]; // 0x1E4 float32
    std::uint8_t m_flOutputMax[0x4]; // 0x1E8 float32
    std::uint8_t m_fl4NoiseScale[0x4]; // 0x1EC float32
    std::uint8_t m_bAdditive[0x4]; // 0x1F0 bool
    std::uint8_t m_flNoiseAnimationTimeScale[0x4]; // 0x1F4 float32
};

struct C_OP_FadeAndKillForTracers {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flStartFadeInTime[0x4]; // 0x1E0 float32
    std::uint8_t m_flEndFadeInTime[0x4]; // 0x1E4 float32
    std::uint8_t m_flStartFadeOutTime[0x4]; // 0x1E8 float32
    std::uint8_t m_flEndFadeOutTime[0x4]; // 0x1EC float32
    std::uint8_t m_flStartAlpha[0x4]; // 0x1F0 float32
    std::uint8_t m_flEndAlpha[0x4]; // 0x1F4 float32
};

struct C_OP_ColorAdjustHSL {
    static constexpr std::size_t size = 0x648;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flHueAdjust[0x178]; // 0x1E0 CPerParticleFloatInput
    std::uint8_t m_flSaturationAdjust[0x178]; // 0x358 CPerParticleFloatInput
    std::uint8_t m_flLightnessAdjust[0x178]; // 0x4D0 CPerParticleFloatInput
};

struct CParticleMassCalculationParameters {
    static constexpr std::size_t size = 0x470;
    std::uint8_t m_nMassMode[0x8]; // 0x0 ParticleMassMode_t
    std::uint8_t m_flRadius[0x178]; // 0x8 CPerParticleFloatInput
    std::uint8_t m_flNominalRadius[0x178]; // 0x180 CPerParticleFloatInput
    std::uint8_t m_flScale[0x178]; // 0x2F8 CPerParticleFloatInput
};

struct C_OP_SequenceFromModel {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nControlPointNumber[0x4]; // 0x1E0 int32
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E4 ParticleAttributeIndex_t
    std::uint8_t m_nFieldOutputAnim[0x4]; // 0x1E8 ParticleAttributeIndex_t
    std::uint8_t m_flInputMin[0x4]; // 0x1EC float32
    std::uint8_t m_flInputMax[0x4]; // 0x1F0 float32
    std::uint8_t m_flOutputMin[0x4]; // 0x1F4 float32
    std::uint8_t m_flOutputMax[0x4]; // 0x1F8 float32
    std::uint8_t m_nSetMethod[0x4]; // 0x1FC ParticleSetMethod_t
};

struct C_OP_AlphaDecay {
    static constexpr std::size_t size = 0x1E8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flMinAlpha[0x8]; // 0x1E0 float32
};

struct C_OP_RemapDensityGradientToVectorAttribute {
    static constexpr std::size_t size = 0x1E8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flRadiusScale[0x4]; // 0x1E0 float32
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E4 ParticleAttributeIndex_t
};

struct C_INIT_InitVec {
    static constexpr std::size_t size = 0x8D0;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_InputValue[0x6D8]; // 0x1E8 CPerParticleVecInput
    std::uint8_t m_nOutputField[0x4]; // 0x8C0 ParticleAttributeIndex_t
    std::uint8_t m_nSetMethod[0x4]; // 0x8C4 ParticleSetMethod_t
    std::uint8_t m_bNormalizedOutput[0x1]; // 0x8C8 bool
    std::uint8_t m_bWritePreviousPosition[0x7]; // 0x8C9 bool
};

struct C_INIT_SetHitboxToModel {
    static constexpr std::size_t size = 0xAD8;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nControlPointNumber[0x4]; // 0x1E8 int32
    std::uint8_t m_nForceInModel[0x4]; // 0x1EC int32
    std::uint8_t m_bEvenDistribution[0x4]; // 0x1F0 bool
    std::uint8_t m_nDesiredHitbox[0x4]; // 0x1F4 int32
    std::uint8_t m_vecHitBoxScale[0x6D8]; // 0x1F8 CParticleCollectionVecInput
    std::uint8_t m_vecDirectionBias[0xC]; // 0x8D0 Vector
    std::uint8_t m_bMaintainHitbox[0x1]; // 0x8DC bool
    std::uint8_t m_bUseBones[0x1]; // 0x8DD bool
    std::uint8_t m_HitboxSetName[0x82]; // 0x8DE char[128]
    std::uint8_t m_flShellSize[0x178]; // 0x960 CParticleCollectionFloatInput
};

struct C_OP_MovementMoveAlongSkinnedCPSnapshot {
    static constexpr std::size_t size = 0x4E0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nControlPointNumber[0x4]; // 0x1E0 int32
    std::uint8_t m_nSnapshotControlPointNumber[0x4]; // 0x1E4 int32
    std::uint8_t m_bSetNormal[0x1]; // 0x1E8 bool
    std::uint8_t m_bSetRadius[0x7]; // 0x1E9 bool
    std::uint8_t m_flInterpolation[0x178]; // 0x1F0 CPerParticleFloatInput
    std::uint8_t m_flTValue[0x178]; // 0x368 CPerParticleFloatInput
};

struct C_OP_LerpScalar {
    static constexpr std::size_t size = 0x368;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldOutput[0x8]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_flOutput[0x178]; // 0x1E8 CPerParticleFloatInput
    std::uint8_t m_flStartTime[0x4]; // 0x360 float32
    std::uint8_t m_flEndTime[0x4]; // 0x364 float32
};

struct C_INIT_InitialRepulsionVelocity {
    static constexpr std::size_t size = 0x2A0;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_CollisionGroupName[0x80]; // 0x1E8 char[128]
    std::uint8_t m_nTraceSet[0x4]; // 0x268 ParticleTraceSet_t
    std::uint8_t m_vecOutputMin[0xC]; // 0x26C Vector
    std::uint8_t m_vecOutputMax[0xC]; // 0x278 Vector
    std::uint8_t m_nControlPointNumber[0x4]; // 0x284 int32
    std::uint8_t m_bPerParticle[0x1]; // 0x288 bool
    std::uint8_t m_bTranslate[0x1]; // 0x289 bool
    std::uint8_t m_bProportional[0x2]; // 0x28A bool
    std::uint8_t m_flTraceLength[0x4]; // 0x28C float32
    std::uint8_t m_bPerParticleTR[0x1]; // 0x290 bool
    std::uint8_t m_bInherit[0x3]; // 0x291 bool
    std::uint8_t m_nChildCP[0x4]; // 0x294 int32
    std::uint8_t m_nChildGroupID[0x8]; // 0x298 int32
};

struct C_OP_ClampScalar {
    static constexpr std::size_t size = 0x4D8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldOutput[0x8]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_flOutputMin[0x178]; // 0x1E8 CPerParticleFloatInput
    std::uint8_t m_flOutputMax[0x178]; // 0x360 CPerParticleFloatInput
};

struct C_OP_SetControlPointToHMD {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nCP1[0x4]; // 0x1E8 int32
    std::uint8_t m_vecCP1Pos[0xC]; // 0x1EC Vector
    std::uint8_t m_bOrientToHMD[0x8]; // 0x1F8 bool
};

struct C_OP_DifferencePreviousParticle {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldInput[0x4]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E4 ParticleAttributeIndex_t
    std::uint8_t m_flInputMin[0x4]; // 0x1E8 float32
    std::uint8_t m_flInputMax[0x4]; // 0x1EC float32
    std::uint8_t m_flOutputMin[0x4]; // 0x1F0 float32
    std::uint8_t m_flOutputMax[0x4]; // 0x1F4 float32
    std::uint8_t m_nSetMethod[0x4]; // 0x1F8 ParticleSetMethod_t
    std::uint8_t m_bActiveRange[0x1]; // 0x1FC bool
    std::uint8_t m_bSetPreviousParticle[0x3]; // 0x1FD bool
};

struct C_OP_SetControlPointFieldFromVectorExpression {
    static constexpr std::size_t size = 0x1298;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nExpression[0x8]; // 0x1E8 VectorFloatExpressionType_t
    std::uint8_t m_vecInput1[0x6D8]; // 0x1F0 CParticleCollectionVecInput
    std::uint8_t m_vecInput2[0x6D8]; // 0x8C8 CParticleCollectionVecInput
    std::uint8_t m_flLerp[0x178]; // 0xFA0 CPerParticleFloatInput
    std::uint8_t m_flOutputRemap[0x178]; // 0x1118 CParticleRemapFloatInput
    std::uint8_t m_nOutputCP[0x4]; // 0x1290 int32
    std::uint8_t m_nOutVectorField[0x4]; // 0x1294 int32
};

struct C_OP_PercentageBetweenTransforms {
    static constexpr std::size_t size = 0x2D0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_flInputMin[0x4]; // 0x1E4 float32
    std::uint8_t m_flInputMax[0x4]; // 0x1E8 float32
    std::uint8_t m_flOutputMin[0x4]; // 0x1EC float32
    std::uint8_t m_flOutputMax[0x8]; // 0x1F0 float32
    std::uint8_t m_TransformStart[0x68]; // 0x1F8 CParticleTransformInput
    std::uint8_t m_TransformEnd[0x68]; // 0x260 CParticleTransformInput
    std::uint8_t m_nSetMethod[0x4]; // 0x2C8 ParticleSetMethod_t
    std::uint8_t m_bActiveRange[0x1]; // 0x2CC bool
    std::uint8_t m_bRadialCheck[0x3]; // 0x2CD bool
};

struct C_INIT_PlaneCull {
    static constexpr std::size_t size = 0x370;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nControlPoint[0x8]; // 0x1E8 int32
    std::uint8_t m_flDistance[0x178]; // 0x1F0 CParticleCollectionFloatInput
    std::uint8_t m_bCullInside[0x8]; // 0x368 bool
};

struct C_OP_RemapNamedModelSequenceEndCap {
    static constexpr std::size_t size = 0x240;
    std::uint8_t pad_0[0x240]; // 0x0
};

struct C_INIT_InitFromCPSnapshot {
    static constexpr std::size_t size = 0x500;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nControlPointNumber[0x8]; // 0x1E8 int32
    std::uint8_t m_strSnapshotSubset[0x8]; // 0x1F0 CUtlString
    std::uint8_t m_nAttributeToRead[0x4]; // 0x1F8 ParticleAttributeIndex_t
    std::uint8_t m_nAttributeToWrite[0x4]; // 0x1FC ParticleAttributeIndex_t
    std::uint8_t m_nLocalSpaceCP[0x4]; // 0x200 int32
    std::uint8_t m_bRandom[0x1]; // 0x204 bool
    std::uint8_t m_bReverse[0x3]; // 0x205 bool
    std::uint8_t m_nSnapShotIncrement[0x178]; // 0x208 CParticleCollectionFloatInput
    std::uint8_t m_nManualSnapshotIndex[0x178]; // 0x380 CPerParticleFloatInput
    std::uint8_t m_nRandomSeed[0x4]; // 0x4F8 int32
    std::uint8_t m_bLocalSpaceAngles[0x4]; // 0x4FC bool
};

struct C_OP_RenderCables {
    static constexpr std::size_t size = 0x15A8;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_flRadiusScale[0x178]; // 0x230 CParticleCollectionFloatInput
    std::uint8_t m_flAlphaScale[0x178]; // 0x3A8 CParticleCollectionFloatInput
    std::uint8_t m_vecColorScale[0x6D8]; // 0x520 CParticleCollectionVecInput
    std::uint8_t m_nColorBlendType[0x8]; // 0xBF8 ParticleColorBlendType_t
    std::uint8_t m_hMaterial[0x8]; // 0xC00 CStrongHandle<InfoForResourceTypeIMaterial2>
    std::uint8_t m_nTextureRepetitionMode[0x8]; // 0xC08 TextureRepetitionMode_t
    std::uint8_t m_flTextureRepeatsPerSegment[0x178]; // 0xC10 CParticleCollectionFloatInput
    std::uint8_t m_flTextureRepeatsCircumference[0x178]; // 0xD88 CParticleCollectionFloatInput
    std::uint8_t m_flColorMapOffsetV[0x178]; // 0xF00 CParticleCollectionFloatInput
    std::uint8_t m_flColorMapOffsetU[0x178]; // 0x1078 CParticleCollectionFloatInput
    std::uint8_t m_flNormalMapOffsetV[0x178]; // 0x11F0 CParticleCollectionFloatInput
    std::uint8_t m_flNormalMapOffsetU[0x178]; // 0x1368 CParticleCollectionFloatInput
    std::uint8_t m_bDrawCableCaps[0x4]; // 0x14E0 bool
    std::uint8_t m_flCapRoundness[0x4]; // 0x14E4 float32
    std::uint8_t m_flCapOffsetAmount[0x4]; // 0x14E8 float32
    std::uint8_t m_flTessScale[0x4]; // 0x14EC float32
    std::uint8_t m_nMinTesselation[0x4]; // 0x14F0 int32
    std::uint8_t m_nMaxTesselation[0x4]; // 0x14F4 int32
    std::uint8_t m_nRoundness[0x4]; // 0x14F8 int32
    std::uint8_t m_nForceRoundnessFixed[0x1]; // 0x14FC bool
    std::uint8_t m_bOnlyRenderInEffectsBloomPass[0x3]; // 0x14FD bool
    std::uint8_t m_LightingTransform[0x68]; // 0x1500 CParticleTransformInput
    std::uint8_t m_MaterialFloatVars[0x20]; // 0x1568 CUtlLeanVector<FloatInputMaterialVariable_t>
    std::uint8_t m_MaterialVecVars[0x20]; // 0x1588 CUtlLeanVector<VecInputMaterialVariable_t>
};

struct C_INIT_InheritVelocity {
    static constexpr std::size_t size = 0x1F0;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nControlPointNumber[0x4]; // 0x1E8 int32
    std::uint8_t m_flVelocityScale[0x4]; // 0x1EC float32
};

struct C_OP_SetControlPointToWaterSurface {
    static constexpr std::size_t size = 0x380;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nSourceCP[0x4]; // 0x1E8 int32
    std::uint8_t m_nDestCP[0x4]; // 0x1EC int32
    std::uint8_t m_nFlowCP[0x4]; // 0x1F0 int32
    std::uint8_t m_nActiveCP[0x4]; // 0x1F4 int32
    std::uint8_t m_nActiveCPField[0x8]; // 0x1F8 int32
    std::uint8_t m_flRetestRate[0x178]; // 0x200 CParticleCollectionFloatInput
    std::uint8_t m_bAdaptiveThreshold[0x8]; // 0x378 bool
};

struct C_INIT_PositionOffset {
    static constexpr std::size_t size = 0x1010;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_OffsetMin[0x6D8]; // 0x1E8 CPerParticleVecInput
    std::uint8_t m_OffsetMax[0x6D8]; // 0x8C0 CPerParticleVecInput
    std::uint8_t m_TransformInput[0x68]; // 0xF98 CParticleTransformInput
    std::uint8_t m_bLocalCoords[0x1]; // 0x1000 bool
    std::uint8_t m_bProportional[0x3]; // 0x1001 bool
    std::uint8_t m_randomnessParameters[0xC]; // 0x1004 CRandomNumberGeneratorParameters
};

struct C_INIT_NormalAlignToCP {
    static constexpr std::size_t size = 0x258;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_transformInput[0x68]; // 0x1E8 CParticleTransformInput
    std::uint8_t m_nControlPointAxis[0x8]; // 0x250 ParticleControlPointAxis_t
};

struct C_OP_ShapeMatchingConstraint {
    static constexpr std::size_t size = 0x1E8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flShapeRestorationTime[0x8]; // 0x1E0 float32
};

struct C_OP_SetChildControlPoints {
    static constexpr std::size_t size = 0x370;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nChildGroupID[0x4]; // 0x1E0 int32
    std::uint8_t m_nFirstControlPoint[0x4]; // 0x1E4 int32
    std::uint8_t m_nNumControlPoints[0x8]; // 0x1E8 int32
    std::uint8_t m_nFirstSourcePoint[0x178]; // 0x1F0 CParticleCollectionFloatInput
    std::uint8_t m_bReverse[0x1]; // 0x368 bool
    std::uint8_t m_bSetOrientation[0x3]; // 0x369 bool
    std::uint8_t m_nOrientation[0x4]; // 0x36C ParticleOrientationType_t
};

struct C_OP_ChladniWave {
    static constexpr std::size_t size = 0x1588;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldOutput[0x8]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_flInputMin[0x178]; // 0x1E8 CPerParticleFloatInput
    std::uint8_t m_flInputMax[0x178]; // 0x360 CPerParticleFloatInput
    std::uint8_t m_flOutputMin[0x178]; // 0x4D8 CPerParticleFloatInput
    std::uint8_t m_flOutputMax[0x178]; // 0x650 CPerParticleFloatInput
    std::uint8_t m_vecWaveLength[0x6D8]; // 0x7C8 CPerParticleVecInput
    std::uint8_t m_vecHarmonics[0x6D8]; // 0xEA0 CPerParticleVecInput
    std::uint8_t m_nSetMethod[0x4]; // 0x1578 ParticleSetMethod_t
    std::uint8_t m_nLocalSpaceControlPoint[0x4]; // 0x157C int32
    std::uint8_t m_b3D[0x8]; // 0x1580 bool
};

struct C_OP_RemapDirectionToCPToVector {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nCP[0x4]; // 0x1E0 int32
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E4 ParticleAttributeIndex_t
    std::uint8_t m_flScale[0x4]; // 0x1E8 float32
    std::uint8_t m_flOffsetRot[0x4]; // 0x1EC float32
    std::uint8_t m_vecOffsetAxis[0xC]; // 0x1F0 Vector
    std::uint8_t m_bNormalize[0x4]; // 0x1FC bool
    std::uint8_t m_nFieldStrength[0x8]; // 0x200 ParticleAttributeIndex_t
};

struct C_OP_DriveCPFromGlobalSoundFloat {
    static constexpr std::size_t size = 0x220;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nOutputControlPoint[0x4]; // 0x1E8 int32
    std::uint8_t m_nOutputField[0x4]; // 0x1EC int32
    std::uint8_t m_flInputMin[0x4]; // 0x1F0 float32
    std::uint8_t m_flInputMax[0x4]; // 0x1F4 float32
    std::uint8_t m_flOutputMin[0x4]; // 0x1F8 float32
    std::uint8_t m_flOutputMax[0x4]; // 0x1FC float32
    std::uint8_t m_StackName[0x8]; // 0x200 CUtlString
    std::uint8_t m_OperatorName[0x8]; // 0x208 CUtlString
    std::uint8_t m_FieldName[0x10]; // 0x210 CUtlString
};

struct C_INIT_ScreenSpacePositionOfTarget {
    static constexpr std::size_t size = 0xA40;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_vecTargetPosition[0x6D8]; // 0x1E8 CPerParticleVecInput
    std::uint8_t m_bOututBehindness[0x4]; // 0x8C0 bool
    std::uint8_t m_nBehindFieldOutput[0x4]; // 0x8C4 ParticleAttributeIndex_t
    std::uint8_t m_flBehindOutputRemap[0x178]; // 0x8C8 CParticleRemapFloatInput
};

struct C_OP_RtEnvCull {
    static constexpr std::size_t size = 0x288;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_vecTestDir[0xC]; // 0x1E0 Vector
    std::uint8_t m_vecTestNormal[0xC]; // 0x1EC Vector
    std::uint8_t m_bCullOnMiss[0x1]; // 0x1F8 bool
    std::uint8_t m_bStickInsteadOfCull[0x1]; // 0x1F9 bool
    std::uint8_t m_RtEnvName[0x82]; // 0x1FA char[128]
    std::uint8_t m_nRTEnvCP[0x4]; // 0x27C int32
    std::uint8_t m_nComponent[0x8]; // 0x280 int32
};

struct C_OP_PinParticleToCP {
    static constexpr std::size_t size = 0x11B0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nControlPointNumber[0x8]; // 0x1E0 int32
    std::uint8_t m_vecOffset[0x6D8]; // 0x1E8 CParticleCollectionVecInput
    std::uint8_t m_bOffsetLocal[0x4]; // 0x8C0 bool
    std::uint8_t m_nParticleSelection[0x4]; // 0x8C4 ParticleSelection_t
    std::uint8_t m_nParticleNumber[0x178]; // 0x8C8 CParticleCollectionFloatInput
    std::uint8_t m_nPinBreakType[0x8]; // 0xA40 ParticlePinDistance_t
    std::uint8_t m_flBreakDistance[0x178]; // 0xA48 CParticleCollectionFloatInput
    std::uint8_t m_flBreakSpeed[0x178]; // 0xBC0 CParticleCollectionFloatInput
    std::uint8_t m_flAge[0x178]; // 0xD38 CParticleCollectionFloatInput
    std::uint8_t m_nBreakControlPointNumber[0x4]; // 0xEB0 int32
    std::uint8_t m_nBreakControlPointNumber2[0x4]; // 0xEB4 int32
    std::uint8_t m_flBreakValue[0x178]; // 0xEB8 CParticleCollectionFloatInput
    std::uint8_t m_flInterpolation[0x178]; // 0x1030 CPerParticleFloatInput
    std::uint8_t m_bRetainInitialVelocity[0x8]; // 0x11A8 bool
};

struct C_OP_RemapCPtoVector {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nCPInput[0x4]; // 0x1E0 int32
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E4 ParticleAttributeIndex_t
    std::uint8_t m_nLocalSpaceCP[0x4]; // 0x1E8 int32
    std::uint8_t m_vInputMin[0xC]; // 0x1EC Vector
    std::uint8_t m_vInputMax[0xC]; // 0x1F8 Vector
    std::uint8_t m_vOutputMin[0xC]; // 0x204 Vector
    std::uint8_t m_vOutputMax[0xC]; // 0x210 Vector
    std::uint8_t m_flStartTime[0x4]; // 0x21C float32
    std::uint8_t m_flEndTime[0x4]; // 0x220 float32
    std::uint8_t m_flInterpRate[0x4]; // 0x224 float32
    std::uint8_t m_nSetMethod[0x4]; // 0x228 ParticleSetMethod_t
    std::uint8_t m_bOffset[0x1]; // 0x22C bool
    std::uint8_t m_bAccelerate[0x3]; // 0x22D bool
};

struct C_INIT_CreateParticleImpulse {
    static constexpr std::size_t size = 0x660;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_InputRadius[0x178]; // 0x1E8 CPerParticleFloatInput
    std::uint8_t m_InputMagnitude[0x178]; // 0x360 CPerParticleFloatInput
    std::uint8_t m_nFalloffFunction[0x8]; // 0x4D8 ParticleFalloffFunction_t
    std::uint8_t m_InputFalloffExp[0x178]; // 0x4E0 CPerParticleFloatInput
    std::uint8_t m_nImpulseType[0x8]; // 0x658 ParticleImpulseType_t
};

struct C_OP_DensityForce {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1F0]; // 0x0
    std::uint8_t m_flRadiusScale[0x4]; // 0x1F0 float32
    std::uint8_t m_flForceScale[0x4]; // 0x1F4 float32
    std::uint8_t m_flTargetDensity[0x8]; // 0x1F8 float32
};

struct C_INIT_CreateInEpitrochoid {
    static constexpr std::size_t size = 0x840;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nComponent1[0x4]; // 0x1E8 int32
    std::uint8_t m_nComponent2[0x4]; // 0x1EC int32
    std::uint8_t m_TransformInput[0x68]; // 0x1F0 CParticleTransformInput
    std::uint8_t m_flParticleDensity[0x178]; // 0x258 CPerParticleFloatInput
    std::uint8_t m_flOffset[0x178]; // 0x3D0 CPerParticleFloatInput
    std::uint8_t m_flRadius1[0x178]; // 0x548 CPerParticleFloatInput
    std::uint8_t m_flRadius2[0x178]; // 0x6C0 CPerParticleFloatInput
    std::uint8_t m_bUseCount[0x1]; // 0x838 bool
    std::uint8_t m_bUseLocalCoords[0x1]; // 0x839 bool
    std::uint8_t m_bOffsetExistingPos[0x6]; // 0x83A bool
};

struct C_OP_ConstrainDistanceToUserSpecifiedPath {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_fMinDistance[0x4]; // 0x1E0 float32
    std::uint8_t m_flMaxDistance[0x4]; // 0x1E4 float32
    std::uint8_t m_flTimeScale[0x4]; // 0x1E8 float32
    std::uint8_t m_bLoopedPath[0x4]; // 0x1EC bool
    std::uint8_t m_pointList[0x18]; // 0x1F0 CUtlVector<PointDefinitionWithTimeValues_t>
};

struct C_OP_SetControlPointPositions {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_bUseWorldLocation[0x1]; // 0x1E8 bool
    std::uint8_t m_bOrient[0x1]; // 0x1E9 bool
    std::uint8_t m_bSetOnce[0x2]; // 0x1EA bool
    std::uint8_t m_nCP1[0x4]; // 0x1EC int32
    std::uint8_t m_nCP2[0x4]; // 0x1F0 int32
    std::uint8_t m_nCP3[0x4]; // 0x1F4 int32
    std::uint8_t m_nCP4[0x4]; // 0x1F8 int32
    std::uint8_t m_vecCP1Pos[0xC]; // 0x1FC Vector
    std::uint8_t m_vecCP2Pos[0xC]; // 0x208 Vector
    std::uint8_t m_vecCP3Pos[0xC]; // 0x214 Vector
    std::uint8_t m_vecCP4Pos[0xC]; // 0x220 Vector
    std::uint8_t m_nHeadLocation[0x4]; // 0x22C int32
};

struct C_OP_SetFloatAttributeToVectorExpression {
    static constexpr std::size_t size = 0x1118;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nExpression[0x8]; // 0x1E0 VectorFloatExpressionType_t
    std::uint8_t m_vInput1[0x6D8]; // 0x1E8 CPerParticleVecInput
    std::uint8_t m_vInput2[0x6D8]; // 0x8C0 CPerParticleVecInput
    std::uint8_t m_flOutputRemap[0x178]; // 0xF98 CParticleRemapFloatInput
    std::uint8_t m_nOutputField[0x4]; // 0x1110 ParticleAttributeIndex_t
    std::uint8_t m_nSetMethod[0x4]; // 0x1114 ParticleSetMethod_t
};

struct C_OP_MovementRotateParticleAroundAxis {
    static constexpr std::size_t size = 0xAA0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_vecRotAxis[0x6D8]; // 0x1E0 CParticleCollectionVecInput
    std::uint8_t m_flRotRate[0x178]; // 0x8B8 CParticleCollectionFloatInput
    std::uint8_t m_TransformInput[0x68]; // 0xA30 CParticleTransformInput
    std::uint8_t m_bLocalSpace[0x8]; // 0xA98 bool
};

struct C_OP_IntraParticleForce {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x1F0]; // 0x0
    std::uint8_t m_flAttractionMinDistance[0x4]; // 0x1F0 float32
    std::uint8_t m_flAttractionMaxDistance[0x4]; // 0x1F4 float32
    std::uint8_t m_flAttractionMaxStrength[0x4]; // 0x1F8 float32
    std::uint8_t m_flRepulsionMinDistance[0x4]; // 0x1FC float32
    std::uint8_t m_flRepulsionMaxDistance[0x4]; // 0x200 float32
    std::uint8_t m_flRepulsionMaxStrength[0x4]; // 0x204 float32
    std::uint8_t m_bUseAABB[0x8]; // 0x208 bool
};

struct C_INIT_InitFloat {
    static constexpr std::size_t size = 0x4E8;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_InputValue[0x178]; // 0x1E8 CPerParticleFloatInput
    std::uint8_t m_nOutputField[0x4]; // 0x360 ParticleAttributeIndex_t
    std::uint8_t m_nSetMethod[0x4]; // 0x364 ParticleSetMethod_t
    std::uint8_t m_InputStrength[0x180]; // 0x368 CPerParticleFloatInput
};

struct C_INIT_CreateOnModel {
    static constexpr std::size_t size = 0x13F0;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_modelInput[0x60]; // 0x1E8 CParticleModelInput
    std::uint8_t m_transformInput[0x68]; // 0x248 CParticleTransformInput
    std::uint8_t m_nForceInModel[0x4]; // 0x2B0 int32
    std::uint8_t m_bScaleToVolume[0x1]; // 0x2B4 bool
    std::uint8_t m_bEvenDistribution[0x3]; // 0x2B5 bool
    std::uint8_t m_nDesiredHitbox[0x178]; // 0x2B8 CParticleCollectionFloatInput
    std::uint8_t m_nHitboxValueFromControlPointIndex[0x8]; // 0x430 int32
    std::uint8_t m_vecHitBoxScale[0x6D8]; // 0x438 CParticleCollectionVecInput
    std::uint8_t m_flBoneVelocity[0x4]; // 0xB10 float32
    std::uint8_t m_flMaxBoneVelocity[0x4]; // 0xB14 float32
    std::uint8_t m_vecDirectionBias[0x6D8]; // 0xB18 CParticleCollectionVecInput
    std::uint8_t m_HitboxSetName[0x80]; // 0x11F0 char[128]
    std::uint8_t m_bLocalCoords[0x1]; // 0x1270 bool
    std::uint8_t m_bUseBones[0x1]; // 0x1271 bool
    std::uint8_t m_bUseMesh[0x6]; // 0x1272 bool
    std::uint8_t m_flShellSize[0x178]; // 0x1278 CParticleCollectionFloatInput
};

struct C_OP_InheritFromPeerSystem {
    static constexpr std::size_t size = 0x1F0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_nFieldInput[0x4]; // 0x1E4 ParticleAttributeIndex_t
    std::uint8_t m_nIncrement[0x4]; // 0x1E8 int32
    std::uint8_t m_nGroupID[0x4]; // 0x1EC int32
};

struct C_OP_PerParticleForce {
    static constexpr std::size_t size = 0xA48;
    std::uint8_t pad_0[0x1F0]; // 0x0
    std::uint8_t m_flForceScale[0x178]; // 0x1F0 CPerParticleFloatInput
    std::uint8_t m_vForce[0x6D8]; // 0x368 CPerParticleVecInput
    std::uint8_t m_nCP[0x8]; // 0xA40 int32
};

struct C_INIT_RandomNamedModelMeshGroup {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x210]; // 0x0
};

struct C_OP_RenderProjected {
    static constexpr std::size_t size = 0xF58;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_bProjectCharacter[0x1]; // 0x230 bool
    std::uint8_t m_bProjectWorld[0x1]; // 0x231 bool
    std::uint8_t m_bProjectWater[0x1]; // 0x232 bool
    std::uint8_t m_bFlipHorizontal[0x1]; // 0x233 bool
    std::uint8_t m_bEnableProjectedDepthControls[0x4]; // 0x234 bool
    std::uint8_t m_flMinProjectionDepth[0x4]; // 0x238 float32
    std::uint8_t m_flMaxProjectionDepth[0x4]; // 0x23C float32
    std::uint8_t m_vecProjectedMaterials[0x18]; // 0x240 CUtlVector<RenderProjectedMaterial_t>
    std::uint8_t m_flMaterialSelection[0x178]; // 0x258 CPerParticleFloatInput
    std::uint8_t m_flAnimationTimeScale[0x4]; // 0x3D0 float32
    std::uint8_t m_bOrientToNormal[0x4]; // 0x3D4 bool
    std::uint8_t m_MaterialVars[0x18]; // 0x3D8 CUtlVector<MaterialVariable_t>
    std::uint8_t m_flRadiusScale[0x178]; // 0x3F0 CParticleCollectionFloatInput
    std::uint8_t m_flAlphaScale[0x178]; // 0x568 CParticleCollectionFloatInput
    std::uint8_t m_flRollScale[0x178]; // 0x6E0 CParticleCollectionFloatInput
    std::uint8_t m_nAlpha2Field[0x8]; // 0x858 ParticleAttributeIndex_t
    std::uint8_t m_vecColorScale[0x6D8]; // 0x860 CParticleCollectionVecInput
    std::uint8_t m_nColorBlendType[0x20]; // 0xF38 ParticleColorBlendType_t
};

struct C_OP_MaxVelocity {
    static constexpr std::size_t size = 0x4D0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flMaxVelocity[0x178]; // 0x1E0 CPerParticleFloatInput
    std::uint8_t m_flMinVelocity[0x178]; // 0x358 CPerParticleFloatInput
};

struct C_INIT_VelocityFromNormal {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_fSpeedMin[0x4]; // 0x1E8 float32
    std::uint8_t m_fSpeedMax[0x4]; // 0x1EC float32
    std::uint8_t m_bIgnoreDt[0x8]; // 0x1F0 bool
};

struct C_OP_MaintainEmitter {
    static constexpr std::size_t size = 0x670;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nParticlesToMaintain[0x178]; // 0x1E8 CParticleCollectionFloatInput
    std::uint8_t m_flStartTime[0x8]; // 0x360 float32
    std::uint8_t m_flEmissionDuration[0x178]; // 0x368 CParticleCollectionFloatInput
    std::uint8_t m_flEmissionRate[0x4]; // 0x4E0 float32
    std::uint8_t m_nSnapshotControlPoint[0x4]; // 0x4E4 int32
    std::uint8_t m_strSnapshotSubset[0x8]; // 0x4E8 CUtlString
    std::uint8_t m_bEmitInstantaneously[0x1]; // 0x4F0 bool
    std::uint8_t m_bFinalEmitOnStop[0x7]; // 0x4F1 bool
    std::uint8_t m_flScale[0x178]; // 0x4F8 CParticleCollectionFloatInput
};

struct C_INIT_PositionOffsetToCP {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nControlPointNumberStart[0x4]; // 0x1E8 int32
    std::uint8_t m_nControlPointNumberEnd[0x4]; // 0x1EC int32
    std::uint8_t m_bLocalCoords[0x8]; // 0x1F0 bool
};

struct C_INIT_RemapInitialTransformDirectionToRotation {
    static constexpr std::size_t size = 0x260;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_TransformInput[0x68]; // 0x1E8 CParticleTransformInput
    std::uint8_t m_nFieldOutput[0x4]; // 0x250 ParticleAttributeIndex_t
    std::uint8_t m_flOffsetRot[0x4]; // 0x254 float32
    std::uint8_t m_nComponent[0x8]; // 0x258 int32
};

struct C_OP_FadeAndKill {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flStartFadeInTime[0x4]; // 0x1E0 float32
    std::uint8_t m_flEndFadeInTime[0x4]; // 0x1E4 float32
    std::uint8_t m_flStartFadeOutTime[0x4]; // 0x1E8 float32
    std::uint8_t m_flEndFadeOutTime[0x4]; // 0x1EC float32
    std::uint8_t m_flStartAlpha[0x4]; // 0x1F0 float32
    std::uint8_t m_flEndAlpha[0x4]; // 0x1F4 float32
    std::uint8_t m_bForcePreserveParticleOrder[0x8]; // 0x1F8 bool
};

struct C_OP_ColorInterpolate {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_ColorFade[0x10]; // 0x1E0 Color
    std::uint8_t m_flFadeStartTime[0x4]; // 0x1F0 float32
    std::uint8_t m_flFadeEndTime[0x4]; // 0x1F4 float32
    std::uint8_t m_nFieldOutput[0x4]; // 0x1F8 ParticleAttributeIndex_t
    std::uint8_t m_bEaseInOut[0x4]; // 0x1FC bool
};

struct C_OP_RampScalarSpline {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_RateMin[0x4]; // 0x1E0 float32
    std::uint8_t m_RateMax[0x4]; // 0x1E4 float32
    std::uint8_t m_flStartTime_min[0x4]; // 0x1E8 float32
    std::uint8_t m_flStartTime_max[0x4]; // 0x1EC float32
    std::uint8_t m_flEndTime_min[0x4]; // 0x1F0 float32
    std::uint8_t m_flEndTime_max[0x4]; // 0x1F4 float32
    std::uint8_t m_flBias[0x28]; // 0x1F8 float32
    std::uint8_t m_nField[0x4]; // 0x220 ParticleAttributeIndex_t
    std::uint8_t m_bProportionalOp[0x1]; // 0x224 bool
    std::uint8_t m_bEaseOut[0xB]; // 0x225 bool
};

struct C_OP_RemapNamedModelSequenceOnceTimed {
    static constexpr std::size_t size = 0x240;
    std::uint8_t pad_0[0x240]; // 0x0
};

struct C_OP_SetControlPointFromObjectScale {
    static constexpr std::size_t size = 0x1F0;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nCPInput[0x4]; // 0x1E8 int32
    std::uint8_t m_nCPOutput[0x4]; // 0x1EC int32
};

struct C_OP_MaintainSequentialPath {
    static constexpr std::size_t size = 0x690;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_fMaxDistance[0x178]; // 0x1E0 CParticleCollectionFloatInput
    std::uint8_t m_flNumToAssign[0x178]; // 0x358 CParticleCollectionFloatInput
    std::uint8_t m_flCohesionStrength[0x178]; // 0x4D0 CParticleCollectionFloatInput
    std::uint8_t m_flTolerance[0x4]; // 0x648 float32
    std::uint8_t m_bLoop[0x1]; // 0x64C bool
    std::uint8_t m_bUseParticleCount[0x3]; // 0x64D bool
    std::uint8_t m_PathParams[0x40]; // 0x650 CPathParameters
};

struct C_OP_RemapNamedModelBodyPartEndCap {
    static constexpr std::size_t size = 0x240;
    std::uint8_t pad_0[0x240]; // 0x0
};

struct C_OP_StopAfterCPDuration {
    static constexpr std::size_t size = 0x368;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_flDuration[0x178]; // 0x1E8 CParticleCollectionFloatInput
    std::uint8_t m_bDestroyImmediately[0x1]; // 0x360 bool
    std::uint8_t m_bPlayEndCap[0x7]; // 0x361 bool
};

struct CGeneralSpin {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nSpinRateDegrees[0x4]; // 0x1E0 int32
    std::uint8_t m_nSpinRateMinDegrees[0x8]; // 0x1E4 int32
    std::uint8_t m_fSpinRateStopTime[0xC]; // 0x1EC float32
};

struct C_OP_LockToSavedSequentialPath {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x1E4]; // 0x0
    std::uint8_t m_flFadeStart[0x4]; // 0x1E4 float32
    std::uint8_t m_flFadeEnd[0x4]; // 0x1E8 float32
    std::uint8_t m_bCPPairs[0x4]; // 0x1EC bool
    std::uint8_t m_PathParams[0x40]; // 0x1F0 CPathParameters
};

struct C_INIT_RemapNamedModelElementToScalar {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_hModel[0x8]; // 0x1E8 CStrongHandle<InfoForResourceTypeCModel>
    std::uint8_t m_names[0x18]; // 0x1F0 CUtlVector<CUtlString>
    std::uint8_t m_values[0x18]; // 0x208 CUtlVector<float32>
    std::uint8_t m_nFieldInput[0x4]; // 0x220 ParticleAttributeIndex_t
    std::uint8_t m_nFieldOutput[0x4]; // 0x224 ParticleAttributeIndex_t
    std::uint8_t m_nSetMethod[0x4]; // 0x228 ParticleSetMethod_t
    std::uint8_t m_bModelFromRenderer[0x4]; // 0x22C bool
};

struct C_OP_ClampVector {
    static constexpr std::size_t size = 0xF98;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldOutput[0x8]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_vecOutputMin[0x6D8]; // 0x1E8 CPerParticleVecInput
    std::uint8_t m_vecOutputMax[0x6D8]; // 0x8C0 CPerParticleVecInput
};

struct C_OP_RenderStatusEffectCitadel {
    static constexpr std::size_t size = 0x260;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_pTextureColorWarp[0x8]; // 0x230 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_pTextureNormal[0x8]; // 0x238 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_pTextureMetalness[0x8]; // 0x240 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_pTextureRoughness[0x8]; // 0x248 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_pTextureSelfIllum[0x8]; // 0x250 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_pTextureDetail[0x8]; // 0x258 CStrongHandle<InfoForResourceTypeCTextureBase>
};

struct IParticleSystemDefinition {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct C_OP_WindForce {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1F0]; // 0x0
    std::uint8_t m_vForce[0x10]; // 0x1F0 Vector
};

struct C_OP_SetVariable {
    static constexpr std::size_t size = 0xB08;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_variableReference[0x50]; // 0x1E8 CParticleVariableRef
    std::uint8_t m_transformInput[0x68]; // 0x238 CParticleTransformInput
    std::uint8_t m_positionOffset[0xC]; // 0x2A0 Vector
    std::uint8_t m_rotationOffset[0xC]; // 0x2AC QAngle
    std::uint8_t m_vecInput[0x6D8]; // 0x2B8 CParticleCollectionVecInput
    std::uint8_t m_floatInput[0x178]; // 0x990 CParticleCollectionFloatInput
};

struct C_OP_RenderStandardLight {
    static constexpr std::size_t size = 0x1828;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_nLightType[0x4]; // 0x230 ParticleLightTypeChoiceList_t
    std::uint8_t m_nMaxAllowed[0x4]; // 0x234 uint16
    std::uint8_t m_vecColorScale[0x6D8]; // 0x238 CParticleCollectionVecInput
    std::uint8_t m_nColorBlendType[0x8]; // 0x910 ParticleColorBlendType_t
    std::uint8_t m_strLightStyle[0x8]; // 0x918 CUtlString
    std::uint8_t m_flLightStyleTime[0x178]; // 0x920 CPerParticleFloatInput
    std::uint8_t m_flIntensity[0x178]; // 0xA98 CPerParticleFloatInput
    std::uint8_t m_bCastShadows[0x1]; // 0xC10 bool
    std::uint8_t m_bDynamicBounce[0x7]; // 0xC11 bool
    std::uint8_t m_flBounceScale[0x178]; // 0xC18 CParticleCollectionFloatInput
    std::uint8_t m_flTheta[0x178]; // 0xD90 CParticleCollectionFloatInput
    std::uint8_t m_flPhi[0x178]; // 0xF08 CParticleCollectionFloatInput
    std::uint8_t m_flRadiusMultiplier[0x178]; // 0x1080 CParticleCollectionFloatInput
    std::uint8_t m_nAttenuationStyle[0x8]; // 0x11F8 StandardLightingAttenuationStyle_t
    std::uint8_t m_flFalloffLinearity[0x178]; // 0x1200 CParticleCollectionFloatInput
    std::uint8_t m_flFiftyPercentFalloff[0x178]; // 0x1378 CParticleCollectionFloatInput
    std::uint8_t m_flZeroPercentFalloff[0x178]; // 0x14F0 CParticleCollectionFloatInput
    std::uint8_t m_bRenderDiffuse[0x1]; // 0x1668 bool
    std::uint8_t m_bRenderSpecular[0x7]; // 0x1669 bool
    std::uint8_t m_lightCookie[0x8]; // 0x1670 CUtlString
    std::uint8_t m_nPriority[0x4]; // 0x1678 int32
    std::uint8_t m_nFogLightingMode[0x4]; // 0x167C ParticleLightFogLightingMode_t
    std::uint8_t m_flFogContribution[0x178]; // 0x1680 CParticleCollectionRendererFloatInput
    std::uint8_t m_nCapsuleLightBehavior[0x4]; // 0x17F8 ParticleLightBehaviorChoiceList_t
    std::uint8_t m_flCapsuleLength[0x4]; // 0x17FC float32
    std::uint8_t m_bReverseOrder[0x1]; // 0x1800 bool
    std::uint8_t m_bClosedLoop[0x3]; // 0x1801 bool
    std::uint8_t m_nPrevPntSource[0x4]; // 0x1804 ParticleAttributeIndex_t
    std::uint8_t m_flMaxLength[0x4]; // 0x1808 float32
    std::uint8_t m_flMinLength[0x4]; // 0x180C float32
    std::uint8_t m_bIgnoreDT[0x4]; // 0x1810 bool
    std::uint8_t m_flConstrainRadiusToLengthRatio[0x4]; // 0x1814 float32
    std::uint8_t m_flLengthScale[0x4]; // 0x1818 float32
    std::uint8_t m_flLengthFadeInTime[0xC]; // 0x181C float32
};

struct C_OP_DistanceToTransform {
    static constexpr std::size_t size = 0xFA0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldOutput[0x8]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_flInputMin[0x178]; // 0x1E8 CPerParticleFloatInput
    std::uint8_t m_flInputMax[0x178]; // 0x360 CPerParticleFloatInput
    std::uint8_t m_flOutputMin[0x178]; // 0x4D8 CPerParticleFloatInput
    std::uint8_t m_flOutputMax[0x178]; // 0x650 CPerParticleFloatInput
    std::uint8_t m_TransformStart[0x68]; // 0x7C8 CParticleTransformInput
    std::uint8_t m_bLOS[0x1]; // 0x830 bool
    std::uint8_t m_CollisionGroupName[0x83]; // 0x831 char[128]
    std::uint8_t m_nTraceSet[0x4]; // 0x8B4 ParticleTraceSet_t
    std::uint8_t m_flMaxTraceLength[0x4]; // 0x8B8 float32
    std::uint8_t m_flLOSScale[0x4]; // 0x8BC float32
    std::uint8_t m_nSetMethod[0x4]; // 0x8C0 ParticleSetMethod_t
    std::uint8_t m_bActiveRange[0x1]; // 0x8C4 bool
    std::uint8_t m_bAdditive[0x3]; // 0x8C5 bool
    std::uint8_t m_vecComponentScale[0x6D8]; // 0x8C8 CPerParticleVecInput
};

struct C_OP_RemapControlPointOrientationToRotation {
    static constexpr std::size_t size = 0x1F0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nCP[0x4]; // 0x1E0 int32
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E4 ParticleAttributeIndex_t
    std::uint8_t m_flOffsetRot[0x4]; // 0x1E8 float32
    std::uint8_t m_nComponent[0x4]; // 0x1EC int32
};

struct C_OP_SetControlPointToCenter {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nCP1[0x4]; // 0x1E8 int32
    std::uint8_t m_vecCP1Pos[0xC]; // 0x1EC Vector
    std::uint8_t m_bUseAvgParticlePos[0x4]; // 0x1F8 bool
    std::uint8_t m_nSetParent[0x4]; // 0x1FC ParticleParentSetMode_t
};

struct C_OP_RemapAverageScalarValuetoCP {
    static constexpr std::size_t size = 0x4F0;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nExpression[0x8]; // 0x1E8 SetStatisticExpressionType_t
    std::uint8_t m_flDecimalPlaces[0x178]; // 0x1F0 CParticleCollectionFloatInput
    std::uint8_t m_nOutControlPointNumber[0x4]; // 0x368 int32
    std::uint8_t m_nOutVectorField[0x4]; // 0x36C int32
    std::uint8_t m_nField[0x8]; // 0x370 ParticleAttributeIndex_t
    std::uint8_t m_flOutputRemap[0x178]; // 0x378 CParticleRemapFloatInput
};

struct C_OP_RemapDotProductToScalar {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nInputCP1[0x4]; // 0x1E0 int32
    std::uint8_t m_nInputCP2[0x4]; // 0x1E4 int32
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E8 ParticleAttributeIndex_t
    std::uint8_t m_flInputMin[0x4]; // 0x1EC float32
    std::uint8_t m_flInputMax[0x4]; // 0x1F0 float32
    std::uint8_t m_flOutputMin[0x4]; // 0x1F4 float32
    std::uint8_t m_flOutputMax[0x4]; // 0x1F8 float32
    std::uint8_t m_bUseParticleVelocity[0x4]; // 0x1FC bool
    std::uint8_t m_nSetMethod[0x4]; // 0x200 ParticleSetMethod_t
    std::uint8_t m_bActiveRange[0x1]; // 0x204 bool
    std::uint8_t m_bUseParticleNormal[0x3]; // 0x205 bool
};

struct C_OP_RemapCPtoCP {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nInputControlPoint[0x4]; // 0x1E8 int32
    std::uint8_t m_nOutputControlPoint[0x4]; // 0x1EC int32
    std::uint8_t m_nInputField[0x4]; // 0x1F0 int32
    std::uint8_t m_nOutputField[0x4]; // 0x1F4 int32
    std::uint8_t m_flInputMin[0x4]; // 0x1F8 float32
    std::uint8_t m_flInputMax[0x4]; // 0x1FC float32
    std::uint8_t m_flOutputMin[0x4]; // 0x200 float32
    std::uint8_t m_flOutputMax[0x4]; // 0x204 float32
    std::uint8_t m_bDerivative[0x4]; // 0x208 bool
    std::uint8_t m_flInterpRate[0x4]; // 0x20C float32
};

struct C_OP_SetControlPointRotation {
    static constexpr std::size_t size = 0xA40;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_vecRotAxis[0x6D8]; // 0x1E8 CParticleCollectionVecInput
    std::uint8_t m_flRotRate[0x178]; // 0x8C0 CParticleCollectionFloatInput
    std::uint8_t m_nCP[0x4]; // 0xA38 int32
    std::uint8_t m_nLocalCP[0x4]; // 0xA3C int32
};

struct C_OP_CurlNoiseForce {
    static constexpr std::size_t size = 0x2048;
    std::uint8_t pad_0[0x1F0]; // 0x0
    std::uint8_t m_nNoiseType[0x8]; // 0x1F0 ParticleDirectionNoiseType_t
    std::uint8_t m_vecNoiseFreq[0x6D8]; // 0x1F8 CPerParticleVecInput
    std::uint8_t m_vecNoiseScale[0x6D8]; // 0x8D0 CPerParticleVecInput
    std::uint8_t m_vecOffset[0x6D8]; // 0xFA8 CPerParticleVecInput
    std::uint8_t m_vecOffsetRate[0x6D8]; // 0x1680 CPerParticleVecInput
    std::uint8_t m_flWorleySeed[0x178]; // 0x1D58 CPerParticleFloatInput
    std::uint8_t m_flWorleyJitter[0x178]; // 0x1ED0 CPerParticleFloatInput
};

struct C_INIT_Orient2DRelToCP {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nCP[0x4]; // 0x1E8 int32
    std::uint8_t m_nFieldOutput[0x4]; // 0x1EC ParticleAttributeIndex_t
    std::uint8_t m_flRotOffset[0x8]; // 0x1F0 float32
};

struct C_OP_SetSimulationRate {
    static constexpr std::size_t size = 0x360;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_flSimulationScale[0x178]; // 0x1E8 CParticleCollectionFloatInput
};

struct C_OP_FadeIn {
    static constexpr std::size_t size = 0x1F0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flFadeInTimeMin[0x4]; // 0x1E0 float32
    std::uint8_t m_flFadeInTimeMax[0x4]; // 0x1E4 float32
    std::uint8_t m_flFadeInTimeExp[0x4]; // 0x1E8 float32
    std::uint8_t m_bProportional[0x4]; // 0x1EC bool
};

struct C_OP_RenderScreenShake {
    static constexpr std::size_t size = 0x258;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_flDurationScale[0x4]; // 0x230 float32
    std::uint8_t m_flRadiusScale[0x4]; // 0x234 float32
    std::uint8_t m_flFrequencyScale[0x4]; // 0x238 float32
    std::uint8_t m_flAmplitudeScale[0x4]; // 0x23C float32
    std::uint8_t m_nRadiusField[0x4]; // 0x240 ParticleAttributeIndex_t
    std::uint8_t m_nDurationField[0x4]; // 0x244 ParticleAttributeIndex_t
    std::uint8_t m_nFrequencyField[0x4]; // 0x248 ParticleAttributeIndex_t
    std::uint8_t m_nAmplitudeField[0x4]; // 0x24C ParticleAttributeIndex_t
    std::uint8_t m_nFilterCP[0x8]; // 0x250 int32
};

struct C_OP_RemapBoundingVolumetoCP {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nOutControlPointNumber[0x4]; // 0x1E8 int32
    std::uint8_t m_flInputMin[0x4]; // 0x1EC float32
    std::uint8_t m_flInputMax[0x4]; // 0x1F0 float32
    std::uint8_t m_flOutputMin[0x4]; // 0x1F4 float32
    std::uint8_t m_flOutputMax[0x8]; // 0x1F8 float32
};

struct C_OP_HSVShiftToCP {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nColorCP[0x4]; // 0x1E8 int32
    std::uint8_t m_nColorGemEnableCP[0x4]; // 0x1EC int32
    std::uint8_t m_nOutputCP[0x4]; // 0x1F0 int32
    std::uint8_t m_DefaultHSVColor[0x14]; // 0x1F4 Color
};

struct C_OP_RemapVectorToRotations {
    static constexpr std::size_t size = 0xF90;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_vecInput[0x6D8]; // 0x1E0 CPerParticleVecInput
    std::uint8_t m_vecRotation[0x6D8]; // 0x8B8 CPerParticleVecInput
};

struct C_INIT_GlobalScale {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_flScale[0x4]; // 0x1E8 float32
    std::uint8_t m_nScaleControlPointNumber[0x4]; // 0x1EC int32
    std::uint8_t m_nControlPointNumber[0x4]; // 0x1F0 int32
    std::uint8_t m_bScaleRadius[0x1]; // 0x1F4 bool
    std::uint8_t m_bScalePosition[0x1]; // 0x1F5 bool
    std::uint8_t m_bScaleVelocity[0x2]; // 0x1F6 bool
};

struct C_INIT_RadiusFromCPObject {
    static constexpr std::size_t size = 0x1F0;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nControlPoint[0x8]; // 0x1E8 int32
};

struct C_INIT_InitialVelocityFromHitbox {
    static constexpr std::size_t size = 0x278;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_flVelocityMin[0x4]; // 0x1E8 float32
    std::uint8_t m_flVelocityMax[0x4]; // 0x1EC float32
    std::uint8_t m_nControlPointNumber[0x4]; // 0x1F0 int32
    std::uint8_t m_HitboxSetName[0x80]; // 0x1F4 char[128]
    std::uint8_t m_bUseBones[0x4]; // 0x274 bool
};

struct C_OP_LerpVector {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_vecOutput[0xC]; // 0x1E4 Vector
    std::uint8_t m_flStartTime[0x4]; // 0x1F0 float32
    std::uint8_t m_flEndTime[0x4]; // 0x1F4 float32
    std::uint8_t m_nSetMethod[0x8]; // 0x1F8 ParticleSetMethod_t
};

struct C_OP_SetControlPointFieldToWater {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nSourceCP[0x4]; // 0x1E8 int32
    std::uint8_t m_nDestCP[0x4]; // 0x1EC int32
    std::uint8_t m_nCPField[0x8]; // 0x1F0 int32
};

struct TextureGroup_t {
    static constexpr std::size_t size = 0xC18;
    std::uint8_t m_bEnabled[0x1]; // 0x0 bool
    std::uint8_t m_bReplaceTextureWithGradient[0x7]; // 0x1 bool
    std::uint8_t m_hTexture[0x8]; // 0x8 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Gradient[0x18]; // 0x10 CColorGradient
    std::uint8_t m_nTextureType[0x4]; // 0x28 SpriteCardTextureType_t
    std::uint8_t m_nTextureChannels[0x4]; // 0x2C SpriteCardTextureChannel_t
    std::uint8_t m_nTextureBlendMode[0x8]; // 0x30 ParticleTextureLayerBlendType_t
    std::uint8_t m_flTextureBlend[0x178]; // 0x38 CParticleCollectionRendererFloatInput
    std::uint8_t m_TextureControls[0xA68]; // 0x1B0 TextureControls_t
};

struct C_OP_TimeVaryingForce {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x1F0]; // 0x0
    std::uint8_t m_flStartLerpTime[0x4]; // 0x1F0 float32
    std::uint8_t m_StartingForce[0xC]; // 0x1F4 Vector
    std::uint8_t m_flEndLerpTime[0x4]; // 0x200 float32
    std::uint8_t m_EndingForce[0xC]; // 0x204 Vector
};

struct C_OP_SetCPOrientationToGroundNormal {
    static constexpr std::size_t size = 0x290;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flInterpRate[0x4]; // 0x1E0 float32
    std::uint8_t m_flMaxTraceLength[0x4]; // 0x1E4 float32
    std::uint8_t m_flTolerance[0x4]; // 0x1E8 float32
    std::uint8_t m_flTraceOffset[0x4]; // 0x1EC float32
    std::uint8_t m_CollisionGroupName[0x80]; // 0x1F0 char[128]
    std::uint8_t m_nTraceSet[0x4]; // 0x270 ParticleTraceSet_t
    std::uint8_t m_nInputCP[0x4]; // 0x274 int32
    std::uint8_t m_nOutputCP[0x10]; // 0x278 int32
    std::uint8_t m_bIncludeWater[0x8]; // 0x288 bool
};

struct C_OP_SnapshotSkinToBones {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_bTransformNormals[0x1]; // 0x1E0 bool
    std::uint8_t m_bTransformRadii[0x3]; // 0x1E1 bool
    std::uint8_t m_nControlPointNumber[0x4]; // 0x1E4 int32
    std::uint8_t m_flLifeTimeFadeStart[0x4]; // 0x1E8 float32
    std::uint8_t m_flLifeTimeFadeEnd[0x4]; // 0x1EC float32
    std::uint8_t m_flJumpThreshold[0x4]; // 0x1F0 float32
    std::uint8_t m_flPrevPosScale[0x4]; // 0x1F4 float32
};

struct C_INIT_CreateWithinSphereTransform {
    static constexpr std::size_t size = 0x1CD8;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_fRadiusMin[0x178]; // 0x1E8 CPerParticleFloatInput
    std::uint8_t m_fRadiusMax[0x178]; // 0x360 CPerParticleFloatInput
    std::uint8_t m_vecDistanceBias[0x6D8]; // 0x4D8 CPerParticleVecInput
    std::uint8_t m_vecDistanceBiasAbs[0x10]; // 0xBB0 Vector
    std::uint8_t m_TransformInput[0x68]; // 0xBC0 CParticleTransformInput
    std::uint8_t m_fSpeedMin[0x178]; // 0xC28 CPerParticleFloatInput
    std::uint8_t m_fSpeedMax[0x178]; // 0xDA0 CPerParticleFloatInput
    std::uint8_t m_fSpeedRandExp[0x4]; // 0xF18 float32
    std::uint8_t m_bLocalCoords[0x4]; // 0xF1C bool
    std::uint8_t m_LocalCoordinateSystemSpeedMin[0x6D8]; // 0xF20 CPerParticleVecInput
    std::uint8_t m_LocalCoordinateSystemSpeedMax[0x6D8]; // 0x15F8 CPerParticleVecInput
    std::uint8_t m_nFieldOutput[0x4]; // 0x1CD0 ParticleAttributeIndex_t
    std::uint8_t m_nFieldVelocity[0x4]; // 0x1CD4 ParticleAttributeIndex_t
};

struct C_OP_RadiusDecay {
    static constexpr std::size_t size = 0x1E8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flMinRadius[0x8]; // 0x1E0 float32
};

struct C_INIT_RemapNamedModelBodyPartToScalar {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x230]; // 0x0
};

struct C_INIT_RemapScalarToVector {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nFieldInput[0x4]; // 0x1E8 ParticleAttributeIndex_t
    std::uint8_t m_nFieldOutput[0x4]; // 0x1EC ParticleAttributeIndex_t
    std::uint8_t m_flInputMin[0x4]; // 0x1F0 float32
    std::uint8_t m_flInputMax[0x4]; // 0x1F4 float32
    std::uint8_t m_vecOutputMin[0xC]; // 0x1F8 Vector
    std::uint8_t m_vecOutputMax[0xC]; // 0x204 Vector
    std::uint8_t m_flStartTime[0x4]; // 0x210 float32
    std::uint8_t m_flEndTime[0x4]; // 0x214 float32
    std::uint8_t m_nSetMethod[0x4]; // 0x218 ParticleSetMethod_t
    std::uint8_t m_nControlPointNumber[0x4]; // 0x21C int32
    std::uint8_t m_bLocalCoords[0x4]; // 0x220 bool
    std::uint8_t m_flRemapBias[0xC]; // 0x224 float32
};

struct C_INIT_InitialSequenceFromModel {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nControlPointNumber[0x4]; // 0x1E8 int32
    std::uint8_t m_nFieldOutput[0x4]; // 0x1EC ParticleAttributeIndex_t
    std::uint8_t m_nFieldOutputAnim[0x4]; // 0x1F0 ParticleAttributeIndex_t
    std::uint8_t m_flInputMin[0x4]; // 0x1F4 float32
    std::uint8_t m_flInputMax[0x4]; // 0x1F8 float32
    std::uint8_t m_flOutputMin[0x4]; // 0x1FC float32
    std::uint8_t m_flOutputMax[0x4]; // 0x200 float32
    std::uint8_t m_nSetMethod[0x4]; // 0x204 ParticleSetMethod_t
};

struct C_OP_NoiseEmitter {
    static constexpr std::size_t size = 0x228;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_flEmissionDuration[0x4]; // 0x1E8 float32
    std::uint8_t m_flStartTime[0x4]; // 0x1EC float32
    std::uint8_t m_flEmissionScale[0x4]; // 0x1F0 float32
    std::uint8_t m_nScaleControlPoint[0x4]; // 0x1F4 int32
    std::uint8_t m_nScaleControlPointField[0x4]; // 0x1F8 int32
    std::uint8_t m_nWorldNoisePoint[0x4]; // 0x1FC int32
    std::uint8_t m_bAbsVal[0x1]; // 0x200 bool
    std::uint8_t m_bAbsValInv[0x3]; // 0x201 bool
    std::uint8_t m_flOffset[0x4]; // 0x204 float32
    std::uint8_t m_flOutputMin[0x4]; // 0x208 float32
    std::uint8_t m_flOutputMax[0x4]; // 0x20C float32
    std::uint8_t m_flNoiseScale[0x4]; // 0x210 float32
    std::uint8_t m_flWorldNoiseScale[0x4]; // 0x214 float32
    std::uint8_t m_vecOffsetLoc[0xC]; // 0x218 Vector
    std::uint8_t m_flWorldTimeScale[0x4]; // 0x224 float32
};

struct CParticleFunctionInitializer {
    static constexpr std::size_t size = 0x1E8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nAssociatedEmitterIndex[0x8]; // 0x1E0 int32
};

struct C_OP_SelectivelyEnableChildren {
    static constexpr std::size_t size = 0x658;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nChildGroupID[0x178]; // 0x1E8 CParticleCollectionFloatInput
    std::uint8_t m_nFirstChild[0x178]; // 0x360 CParticleCollectionFloatInput
    std::uint8_t m_nNumChildrenToEnable[0x178]; // 0x4D8 CParticleCollectionFloatInput
    std::uint8_t m_bPlayEndcapOnStop[0x1]; // 0x650 bool
    std::uint8_t m_bDestroyImmediately[0x7]; // 0x651 bool
};

struct ModelReference_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_model[0x8]; // 0x0 CStrongHandle<InfoForResourceTypeCModel>
    std::uint8_t m_flRelativeProbabilityOfSpawn[0x8]; // 0x8 float32
};

struct C_OP_PlanarConstraint {
    static constexpr std::size_t size = 0x4F8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_PointOnPlane[0xC]; // 0x1E0 Vector
    std::uint8_t m_PlaneNormal[0xC]; // 0x1EC Vector
    std::uint8_t m_nControlPointNumber[0x4]; // 0x1F8 int32
    std::uint8_t m_bGlobalOrigin[0x1]; // 0x1FC bool
    std::uint8_t m_bGlobalNormal[0x3]; // 0x1FD bool
    std::uint8_t m_flRadiusScale[0x178]; // 0x200 CPerParticleFloatInput
    std::uint8_t m_flMaximumDistanceToCP[0x178]; // 0x378 CParticleCollectionFloatInput
    std::uint8_t m_bUseOldCode[0x8]; // 0x4F0 bool
};

struct C_INIT_CreateFromCPs {
    static constexpr std::size_t size = 0x370;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nIncrement[0x4]; // 0x1E8 int32
    std::uint8_t m_nMinCP[0x4]; // 0x1EC int32
    std::uint8_t m_nMaxCP[0x8]; // 0x1F0 int32
    std::uint8_t m_nDynamicCPCount[0x178]; // 0x1F8 CParticleCollectionFloatInput
};

struct C_OP_LockPoints {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nMinCol[0x4]; // 0x1E0 int32
    std::uint8_t m_nMaxCol[0x4]; // 0x1E4 int32
    std::uint8_t m_nMinRow[0x4]; // 0x1E8 int32
    std::uint8_t m_nMaxRow[0x4]; // 0x1EC int32
    std::uint8_t m_nControlPoint[0x4]; // 0x1F0 int32
    std::uint8_t m_flBlendValue[0x4]; // 0x1F4 float32
};

struct C_INIT_CreateSpiralSphere {
    static constexpr std::size_t size = 0x838;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_TransformInput[0x68]; // 0x1E8 CParticleTransformInput
    std::uint8_t m_flDensity[0x178]; // 0x250 CPerParticleFloatInput
    std::uint8_t m_flInitialRadius[0x178]; // 0x3C8 CPerParticleFloatInput
    std::uint8_t m_flInitialSpeedMin[0x178]; // 0x540 CPerParticleFloatInput
    std::uint8_t m_flInitialSpeedMax[0x178]; // 0x6B8 CPerParticleFloatInput
    std::uint8_t m_bUseParticleCount[0x8]; // 0x830 bool
};

struct C_OP_CPVelocityForce {
    static constexpr std::size_t size = 0x370;
    std::uint8_t pad_0[0x1F0]; // 0x0
    std::uint8_t m_nControlPointNumber[0x8]; // 0x1F0 int32
    std::uint8_t m_flScale[0x178]; // 0x1F8 CPerParticleFloatInput
};

struct C_OP_RemapNamedModelElementEndCap {
    static constexpr std::size_t size = 0x240;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_hModel[0x8]; // 0x1E0 CStrongHandle<InfoForResourceTypeCModel>
    std::uint8_t m_inNames[0x18]; // 0x1E8 CUtlVector<CUtlString>
    std::uint8_t m_outNames[0x18]; // 0x200 CUtlVector<CUtlString>
    std::uint8_t m_fallbackNames[0x18]; // 0x218 CUtlVector<CUtlString>
    std::uint8_t m_bModelFromRenderer[0x4]; // 0x230 bool
    std::uint8_t m_nFieldInput[0x4]; // 0x234 ParticleAttributeIndex_t
    std::uint8_t m_nFieldOutput[0x8]; // 0x238 ParticleAttributeIndex_t
};

struct C_INIT_ScaleVelocity {
    static constexpr std::size_t size = 0x8C0;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_vecScale[0x6D8]; // 0x1E8 CParticleCollectionVecInput
};

struct C_OP_MoveToHitbox {
    static constexpr std::size_t size = 0x4B8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_modelInput[0x60]; // 0x1E0 CParticleModelInput
    std::uint8_t m_transformInput[0x6C]; // 0x240 CParticleTransformInput
    std::uint8_t m_flLifeTimeLerpStart[0x4]; // 0x2AC float32
    std::uint8_t m_flLifeTimeLerpEnd[0x4]; // 0x2B0 float32
    std::uint8_t m_flPrevPosScale[0x4]; // 0x2B4 float32
    std::uint8_t m_HitboxSetName[0x80]; // 0x2B8 char[128]
    std::uint8_t m_bUseBones[0x4]; // 0x338 bool
    std::uint8_t m_nLerpType[0x4]; // 0x33C HitboxLerpType_t
    std::uint8_t m_flInterpolation[0x178]; // 0x340 CPerParticleFloatInput
};

struct C_OP_PinRopeSegmentParticleToParent {
    static constexpr std::size_t size = 0x4D8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nParticleSelection[0x8]; // 0x1E0 ParticleSelection_t
    std::uint8_t m_nParticleNumber[0x178]; // 0x1E8 CParticleCollectionFloatInput
    std::uint8_t m_flInterpolation[0x178]; // 0x360 CPerParticleFloatInput
};

struct C_INIT_PointList {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nFieldOutput[0x8]; // 0x1E8 ParticleAttributeIndex_t
    std::uint8_t m_pointList[0x18]; // 0x1F0 CUtlVector<PointDefinition_t>
    std::uint8_t m_bPlaceAlongPath[0x1]; // 0x208 bool
    std::uint8_t m_bClosedLoop[0x3]; // 0x209 bool
    std::uint8_t m_nNumPointsAlongPath[0x4]; // 0x20C int32
};

struct C_OP_LerpToOtherAttribute {
    static constexpr std::size_t size = 0x390;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flInterpolation[0x178]; // 0x1E0 CPerParticleFloatInput
    std::uint8_t m_nFieldInputFrom[0x4]; // 0x358 ParticleAttributeIndex_t
    std::uint8_t m_nFieldInput[0x4]; // 0x35C ParticleAttributeIndex_t
    std::uint8_t m_nFieldOutput[0x30]; // 0x360 ParticleAttributeIndex_t
};

struct C_INIT_RandomColor {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x204]; // 0x0
    std::uint8_t m_ColorMin[0x4]; // 0x204 Color
    std::uint8_t m_ColorMax[0x4]; // 0x208 Color
    std::uint8_t m_TintMin[0x4]; // 0x20C Color
    std::uint8_t m_TintMax[0x4]; // 0x210 Color
    std::uint8_t m_flTintPerc[0x4]; // 0x214 float32
    std::uint8_t m_flUpdateThreshold[0x4]; // 0x218 float32
    std::uint8_t m_nTintCP[0x4]; // 0x21C int32
    std::uint8_t m_nFieldOutput[0x4]; // 0x220 ParticleAttributeIndex_t
    std::uint8_t m_nTintBlendMode[0x4]; // 0x224 ParticleColorBlendMode_t
    std::uint8_t m_flLightAmplification[0x8]; // 0x228 float32
};

struct C_OP_SetGravityToCP {
    static constexpr std::size_t size = 0x370;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nCPInput[0x4]; // 0x1E8 int32
    std::uint8_t m_nCPOutput[0x4]; // 0x1EC int32
    std::uint8_t m_flScale[0x178]; // 0x1F0 CParticleCollectionFloatInput
    std::uint8_t m_bSetPosition[0x1]; // 0x368 bool
    std::uint8_t m_bSetOrientation[0x1]; // 0x369 bool
    std::uint8_t m_bSetZDown[0x6]; // 0x36A bool
};

struct C_INIT_RemapParticleCountToScalar {
    static constexpr std::size_t size = 0x218;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E8 ParticleAttributeIndex_t
    std::uint8_t m_nInputMin[0x4]; // 0x1EC int32
    std::uint8_t m_nInputMax[0x4]; // 0x1F0 int32
    std::uint8_t m_nScaleControlPoint[0x4]; // 0x1F4 int32
    std::uint8_t m_nScaleControlPointField[0x4]; // 0x1F8 int32
    std::uint8_t m_flOutputMin[0x4]; // 0x1FC float32
    std::uint8_t m_flOutputMax[0x4]; // 0x200 float32
    std::uint8_t m_nSetMethod[0x4]; // 0x204 ParticleSetMethod_t
    std::uint8_t m_bActiveRange[0x1]; // 0x208 bool
    std::uint8_t m_bInvert[0x1]; // 0x209 bool
    std::uint8_t m_bWrap[0x2]; // 0x20A bool
    std::uint8_t m_flRemapBias[0xC]; // 0x20C float32
};

struct C_INIT_InheritFromParentParticles {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_flScale[0x4]; // 0x1E8 float32
    std::uint8_t m_nFieldOutput[0x4]; // 0x1EC ParticleAttributeIndex_t
    std::uint8_t m_nIncrement[0x4]; // 0x1F0 int32
    std::uint8_t m_bRandomDistribution[0x4]; // 0x1F4 bool
    std::uint8_t m_nRandomSeed[0x8]; // 0x1F8 int32
};

struct C_OP_RampScalarLinearSimple {
    static constexpr std::size_t size = 0x220;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_Rate[0x4]; // 0x1E0 float32
    std::uint8_t m_flStartTime[0x4]; // 0x1E4 float32
    std::uint8_t m_flEndTime[0x28]; // 0x1E8 float32
    std::uint8_t m_nField[0x10]; // 0x210 ParticleAttributeIndex_t
};

struct C_INIT_ChaoticAttractor {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_flAParm[0x4]; // 0x1E8 float32
    std::uint8_t m_flBParm[0x4]; // 0x1EC float32
    std::uint8_t m_flCParm[0x4]; // 0x1F0 float32
    std::uint8_t m_flDParm[0x4]; // 0x1F4 float32
    std::uint8_t m_flScale[0x4]; // 0x1F8 float32
    std::uint8_t m_flSpeedMin[0x4]; // 0x1FC float32
    std::uint8_t m_flSpeedMax[0x4]; // 0x200 float32
    std::uint8_t m_nBaseCP[0x4]; // 0x204 int32
    std::uint8_t m_bUniformSpeed[0x8]; // 0x208 bool
};

struct C_OP_MovementRigidAttachToCP {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nControlPointNumber[0x4]; // 0x1E0 int32
    std::uint8_t m_nScaleControlPoint[0x4]; // 0x1E4 int32
    std::uint8_t m_nScaleCPField[0x4]; // 0x1E8 int32
    std::uint8_t m_nFieldInput[0x4]; // 0x1EC ParticleAttributeIndex_t
    std::uint8_t m_nFieldOutput[0x4]; // 0x1F0 ParticleAttributeIndex_t
    std::uint8_t m_bOffsetLocal[0x4]; // 0x1F4 bool
};

struct C_OP_RenderFlattenGrass {
    static constexpr std::size_t size = 0x240;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_flFlattenStrength[0x4]; // 0x230 float32
    std::uint8_t m_nStrengthFieldOverride[0x4]; // 0x234 ParticleAttributeIndex_t
    std::uint8_t m_flRadiusScale[0x8]; // 0x238 float32
};

struct C_OP_RenderLightBeam {
    static constexpr std::size_t size = 0x2038;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_nMaxAllowed[0x8]; // 0x230 uint16
    std::uint8_t m_vColorBlend[0x6D8]; // 0x238 CParticleCollectionVecInput
    std::uint8_t m_nColorBlendType[0x8]; // 0x910 ParticleColorBlendType_t
    std::uint8_t m_strLightStyle[0x8]; // 0x918 CUtlString
    std::uint8_t m_flLightStyleTime[0x178]; // 0x920 CPerParticleFloatInput
    std::uint8_t m_flBrightnessLumensPerMeter[0x178]; // 0xA98 CParticleCollectionFloatInput
    std::uint8_t m_flNumberOfLightsToCreate[0x178]; // 0xC10 CParticleCollectionFloatInput
    std::uint8_t m_bCastShadows[0x1]; // 0xD88 bool
    std::uint8_t m_bDynamicBounce[0x7]; // 0xD89 bool
    std::uint8_t m_flBounceScale[0x178]; // 0xD90 CParticleCollectionFloatInput
    std::uint8_t m_flSkirt[0x178]; // 0xF08 CParticleCollectionFloatInput
    std::uint8_t m_flRange[0x178]; // 0x1080 CParticleCollectionFloatInput
    std::uint8_t m_flThickness[0x178]; // 0x11F8 CParticleCollectionFloatInput
    std::uint8_t m_flInnerConeAngle[0x178]; // 0x1370 CParticleCollectionFloatInput
    std::uint8_t m_flOuterConeAngle[0x178]; // 0x14E8 CParticleCollectionFloatInput
    std::uint8_t m_vecConeRotationOffset[0x6D8]; // 0x1660 CParticleCollectionVecInput
    std::uint8_t m_nFogLightingMode[0x8]; // 0x1D38 ParticleLightFogLightingMode_t
    std::uint8_t m_flFogContribution[0x178]; // 0x1D40 CParticleCollectionRendererFloatInput
    std::uint8_t m_flRenderFilter[0x178]; // 0x1EB8 CPerParticleFloatInput
    std::uint8_t m_bDebugOrientation[0x8]; // 0x2030 bool
};

struct C_INIT_SkyVisCull {
    static constexpr std::size_t size = 0x8C8;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_vecTestDir[0x6D8]; // 0x1E8 CParticleCollectionVecInput
    std::uint8_t m_nTraceSet[0x4]; // 0x8C0 ParticleTraceSet_t
    std::uint8_t m_bCullOnSky[0x4]; // 0x8C4 bool
};

struct C_OP_EnableChildrenFromParentParticleCount {
    static constexpr std::size_t size = 0x370;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nChildGroupID[0x4]; // 0x1E8 int32
    std::uint8_t m_nFirstChild[0x4]; // 0x1EC int32
    std::uint8_t m_nNumChildrenToEnable[0x178]; // 0x1F0 CParticleCollectionFloatInput
    std::uint8_t m_bDisableChildren[0x1]; // 0x368 bool
    std::uint8_t m_bPlayEndcapOnStop[0x1]; // 0x369 bool
    std::uint8_t m_bDestroyImmediately[0x6]; // 0x36A bool
};

struct C_INIT_DistanceToCPInit {
    static constexpr std::size_t size = 0x9F8;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nFieldOutput[0x8]; // 0x1E8 ParticleAttributeIndex_t
    std::uint8_t m_flInputMin[0x178]; // 0x1F0 CPerParticleFloatInput
    std::uint8_t m_flInputMax[0x178]; // 0x368 CPerParticleFloatInput
    std::uint8_t m_flOutputMin[0x178]; // 0x4E0 CPerParticleFloatInput
    std::uint8_t m_flOutputMax[0x178]; // 0x658 CPerParticleFloatInput
    std::uint8_t m_nStartCP[0x4]; // 0x7D0 int32
    std::uint8_t m_bLOS[0x1]; // 0x7D4 bool
    std::uint8_t m_CollisionGroupName[0x83]; // 0x7D5 char[128]
    std::uint8_t m_nTraceSet[0x8]; // 0x858 ParticleTraceSet_t
    std::uint8_t m_flMaxTraceLength[0x178]; // 0x860 CPerParticleFloatInput
    std::uint8_t m_flLOSScale[0x4]; // 0x9D8 float32
    std::uint8_t m_nSetMethod[0x4]; // 0x9DC ParticleSetMethod_t
    std::uint8_t m_bActiveRange[0x4]; // 0x9E0 bool
    std::uint8_t m_vecDistanceScale[0xC]; // 0x9E4 Vector
    std::uint8_t m_flRemapBias[0x8]; // 0x9F0 float32
};

struct C_OP_EndCapDecay {
    static constexpr std::size_t size = 0x1E0;
    std::uint8_t pad_0[0x1E0]; // 0x0
};

struct C_OP_ForceBasedOnDistanceToPlane {
    static constexpr std::size_t size = 0x228;
    std::uint8_t pad_0[0x1F0]; // 0x0
    std::uint8_t m_flMinDist[0x4]; // 0x1F0 float32
    std::uint8_t m_vecForceAtMinDist[0xC]; // 0x1F4 Vector
    std::uint8_t m_flMaxDist[0x4]; // 0x200 float32
    std::uint8_t m_vecForceAtMaxDist[0xC]; // 0x204 Vector
    std::uint8_t m_vecPlaneNormal[0xC]; // 0x210 Vector
    std::uint8_t m_nControlPointNumber[0x4]; // 0x21C int32
    std::uint8_t m_flExponent[0x8]; // 0x220 float32
};

struct C_OP_RemapDensityToVector {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flRadiusScale[0x4]; // 0x1E0 float32
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E4 ParticleAttributeIndex_t
    std::uint8_t m_flDensityMin[0x4]; // 0x1E8 float32
    std::uint8_t m_flDensityMax[0x4]; // 0x1EC float32
    std::uint8_t m_vecOutputMin[0xC]; // 0x1F0 Vector
    std::uint8_t m_vecOutputMax[0xC]; // 0x1FC Vector
    std::uint8_t m_bUseParentDensity[0x4]; // 0x208 bool
    std::uint8_t m_nVoxelGridResolution[0x4]; // 0x20C int32
};

struct ParticleControlPointConfiguration_t {
    static constexpr std::size_t size = 0x90;
    std::uint8_t m_name[0x8]; // 0x0 CUtlString
    std::uint8_t m_drivers[0x18]; // 0x8 CUtlVector<ParticleControlPointDriver_t>
    std::uint8_t m_previewState[0x70]; // 0x20 ParticlePreviewState_t
};

struct C_INIT_SetRigidAttachment {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nControlPointNumber[0x4]; // 0x1E8 int32
    std::uint8_t m_nFieldInput[0x4]; // 0x1EC ParticleAttributeIndex_t
    std::uint8_t m_nFieldOutput[0x4]; // 0x1F0 ParticleAttributeIndex_t
    std::uint8_t m_bLocalSpace[0x4]; // 0x1F4 bool
};

struct MaterialVariable_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_strVariable[0x8]; // 0x0 CUtlString
    std::uint8_t m_nVariableField[0x4]; // 0x8 ParticleAttributeIndex_t
    std::uint8_t m_flScale[0x4]; // 0xC float32
};

struct CParticleFunctionConstraint {
    static constexpr std::size_t size = 0x1E0;
    std::uint8_t pad_0[0x1E0]; // 0x0
};

struct C_OP_RemapSpeed {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_flInputMin[0x4]; // 0x1E4 float32
    std::uint8_t m_flInputMax[0x4]; // 0x1E8 float32
    std::uint8_t m_flOutputMin[0x4]; // 0x1EC float32
    std::uint8_t m_flOutputMax[0x4]; // 0x1F0 float32
    std::uint8_t m_nSetMethod[0x4]; // 0x1F4 ParticleSetMethod_t
    std::uint8_t m_bIgnoreDelta[0x8]; // 0x1F8 bool
};

struct C_OP_RenderModels {
    static constexpr std::size_t size = 0x2EE8;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_bOnlyRenderInEffectsBloomPass[0x1]; // 0x230 bool
    std::uint8_t m_bOnlyRenderInEffectsWaterPass[0x1]; // 0x231 bool
    std::uint8_t m_bUseMixedResolutionRendering[0x1]; // 0x232 bool
    std::uint8_t m_bOnlyRenderInEffecsGameOverlay[0x5]; // 0x233 bool
    std::uint8_t m_ModelList[0x18]; // 0x238 CUtlVector<ModelReference_t>
    std::uint8_t m_nBodyGroupField[0x4]; // 0x250 ParticleAttributeIndex_t
    std::uint8_t m_nSubModelField[0x4]; // 0x254 ParticleAttributeIndex_t
    std::uint8_t m_bIgnoreNormal[0x1]; // 0x258 bool
    std::uint8_t m_bOrientZ[0x1]; // 0x259 bool
    std::uint8_t m_bCenterOffset[0x6]; // 0x25A bool
    std::uint8_t m_vecLocalOffset[0x6D8]; // 0x260 CPerParticleVecInput
    std::uint8_t m_vecLocalRotation[0x6D8]; // 0x938 CPerParticleVecInput
    std::uint8_t m_bIgnoreRadius[0x4]; // 0x1010 bool
    std::uint8_t m_nModelScaleCP[0x4]; // 0x1014 int32
    std::uint8_t m_vecComponentScale[0x6D8]; // 0x1018 CPerParticleVecInput
    std::uint8_t m_bLocalScale[0x4]; // 0x16F0 bool
    std::uint8_t m_nSizeCullBloat[0x4]; // 0x16F4 int32
    std::uint8_t m_bAnimated[0x8]; // 0x16F8 bool
    std::uint8_t m_flAnimationRate[0x178]; // 0x1700 CPerParticleFloatInput
    std::uint8_t m_bScaleAnimationRate[0x1]; // 0x1878 bool
    std::uint8_t m_bForceLoopingAnimation[0x1]; // 0x1879 bool
    std::uint8_t m_bResetAnimOnStop[0x1]; // 0x187A bool
    std::uint8_t m_bManualAnimFrame[0x1]; // 0x187B bool
    std::uint8_t m_nAnimationScaleField[0x4]; // 0x187C ParticleAttributeIndex_t
    std::uint8_t m_nAnimationField[0x4]; // 0x1880 ParticleAttributeIndex_t
    std::uint8_t m_nManualFrameField[0x4]; // 0x1884 ParticleAttributeIndex_t
    std::uint8_t m_ActivityName[0x100]; // 0x1888 char[256]
    std::uint8_t m_SequenceName[0x100]; // 0x1988 char[256]
    std::uint8_t m_bEnableClothSimulation[0x1]; // 0x1A88 bool
    std::uint8_t m_bDisableClothGroundCollision[0x1]; // 0x1A89 bool
    std::uint8_t m_ClothEffectName[0x46]; // 0x1A8A char[64]
    std::uint8_t m_hOverrideMaterial[0x8]; // 0x1AD0 CStrongHandle<InfoForResourceTypeIMaterial2>
    std::uint8_t m_bOverrideTranslucentMaterials[0x8]; // 0x1AD8 bool
    std::uint8_t m_nSkin[0x178]; // 0x1AE0 CPerParticleFloatInput
    std::uint8_t m_MaterialVars[0x18]; // 0x1C58 CUtlVector<MaterialVariable_t>
    std::uint8_t m_flRenderFilter[0x178]; // 0x1C70 CPerParticleFloatInput
    std::uint8_t m_flManualModelSelection[0x178]; // 0x1DE8 CPerParticleFloatInput
    std::uint8_t m_modelInput[0x60]; // 0x1F60 CParticleModelInput
    std::uint8_t m_nLOD[0x4]; // 0x1FC0 int32
    std::uint8_t m_EconSlotName[0x100]; // 0x1FC4 char[256]
    std::uint8_t m_bOriginalModel[0x1]; // 0x20C4 bool
    std::uint8_t m_bSuppressTint[0x3]; // 0x20C5 bool
    std::uint8_t m_nSubModelFieldType[0x4]; // 0x20C8 RenderModelSubModelFieldType_t
    std::uint8_t m_bDisableShadows[0x1]; // 0x20CC bool
    std::uint8_t m_bDisableDepthPrepass[0x1]; // 0x20CD bool
    std::uint8_t m_bAcceptsDecals[0x1]; // 0x20CE bool
    std::uint8_t m_bForceDrawInterlevedWithSiblings[0x1]; // 0x20CF bool
    std::uint8_t m_bDoNotDrawInParticlePass[0x1]; // 0x20D0 bool
    std::uint8_t m_bAllowApproximateTransforms[0x1]; // 0x20D1 bool
    std::uint8_t m_szRenderAttribute[0x106]; // 0x20D2 char[260]
    std::uint8_t m_flRadiusScale[0x178]; // 0x21D8 CParticleCollectionFloatInput
    std::uint8_t m_flAlphaScale[0x178]; // 0x2350 CParticleCollectionFloatInput
    std::uint8_t m_flRollScale[0x178]; // 0x24C8 CParticleCollectionFloatInput
    std::uint8_t m_nAlpha2Field[0x8]; // 0x2640 ParticleAttributeIndex_t
    std::uint8_t m_vecColorScale[0x6D8]; // 0x2648 CParticleCollectionVecInput
    std::uint8_t m_nColorBlendType[0x8]; // 0x2D20 ParticleColorBlendType_t
    std::uint8_t m_strLightStyle[0x8]; // 0x2D28 CUtlString
    std::uint8_t m_flLightStyleTime[0x1B8]; // 0x2D30 CPerParticleFloatInput
};

struct C_OP_RenderClientPhysicsImpulse {
    static constexpr std::size_t size = 0x528;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_flRadius[0x178]; // 0x230 CPerParticleFloatInput
    std::uint8_t m_flMagnitude[0x178]; // 0x3A8 CPerParticleFloatInput
    std::uint8_t m_nSimIdFilter[0x8]; // 0x520 int32
};

struct CParticleFunctionEmitter {
    static constexpr std::size_t size = 0x1E8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nEmitterIndex[0x8]; // 0x1E0 int32
};

struct C_INIT_RemapNamedModelMeshGroupToScalar {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x230]; // 0x0
};

struct C_OP_SetControlPointOrientationToCPVelocity {
    static constexpr std::size_t size = 0x1F0;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nCPInput[0x4]; // 0x1E8 int32
    std::uint8_t m_nCPOutput[0x4]; // 0x1EC int32
};

struct C_OP_RopeSpringConstraint {
    static constexpr std::size_t size = 0x7C8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flRestLength[0x178]; // 0x1E0 CParticleCollectionFloatInput
    std::uint8_t m_flMinDistance[0x178]; // 0x358 CParticleCollectionFloatInput
    std::uint8_t m_flMaxDistance[0x178]; // 0x4D0 CParticleCollectionFloatInput
    std::uint8_t m_flAdjustmentScale[0x8]; // 0x648 float32
    std::uint8_t m_flInitialRestingLength[0x178]; // 0x650 CParticleCollectionFloatInput
};

struct C_INIT_PositionWarpScalar {
    static constexpr std::size_t size = 0x388;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_vecWarpMin[0xC]; // 0x1E8 Vector
    std::uint8_t m_vecWarpMax[0xC]; // 0x1F4 Vector
    std::uint8_t m_InputValue[0x178]; // 0x200 CPerParticleFloatInput
    std::uint8_t m_flPrevPosScale[0x4]; // 0x378 float32
    std::uint8_t m_nScaleControlPointNumber[0x4]; // 0x37C int32
    std::uint8_t m_nControlPointNumber[0x8]; // 0x380 int32
};

struct C_OP_ForceControlPointStub {
    static constexpr std::size_t size = 0x1F0;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_ControlPoint[0x8]; // 0x1E8 int32
};

struct C_OP_VectorNoise {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_vecOutputMin[0xC]; // 0x1E4 Vector
    std::uint8_t m_vecOutputMax[0xC]; // 0x1F0 Vector
    std::uint8_t m_fl4NoiseScale[0x4]; // 0x1FC float32
    std::uint8_t m_bAdditive[0x1]; // 0x200 bool
    std::uint8_t m_bOffset[0x3]; // 0x201 bool
    std::uint8_t m_flNoiseAnimationTimeScale[0x4]; // 0x204 float32
};

struct C_OP_RemapParticleCountToScalar {
    static constexpr std::size_t size = 0x7D0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldOutput[0x8]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_nInputMin[0x178]; // 0x1E8 CParticleCollectionFloatInput
    std::uint8_t m_nInputMax[0x178]; // 0x360 CParticleCollectionFloatInput
    std::uint8_t m_flOutputMin[0x178]; // 0x4D8 CParticleCollectionFloatInput
    std::uint8_t m_flOutputMax[0x178]; // 0x650 CParticleCollectionFloatInput
    std::uint8_t m_bActiveRange[0x4]; // 0x7C8 bool
    std::uint8_t m_nSetMethod[0x4]; // 0x7CC ParticleSetMethod_t
};

struct C_INIT_QuantizeFloat {
    static constexpr std::size_t size = 0x368;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_InputValue[0x178]; // 0x1E8 CPerParticleFloatInput
    std::uint8_t m_nOutputField[0x8]; // 0x360 ParticleAttributeIndex_t
};

struct C_OP_RemapModelVolumetoCP {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nBBoxType[0x4]; // 0x1E8 BBoxVolumeType_t
    std::uint8_t m_nInControlPointNumber[0x4]; // 0x1EC int32
    std::uint8_t m_nOutControlPointNumber[0x4]; // 0x1F0 int32
    std::uint8_t m_nOutControlPointMaxNumber[0x4]; // 0x1F4 int32
    std::uint8_t m_nField[0x4]; // 0x1F8 int32
    std::uint8_t m_flInputMin[0x4]; // 0x1FC float32
    std::uint8_t m_flInputMax[0x4]; // 0x200 float32
    std::uint8_t m_flOutputMin[0x4]; // 0x204 float32
    std::uint8_t m_flOutputMax[0x4]; // 0x208 float32
    std::uint8_t m_bBBoxOnly[0x1]; // 0x20C bool
    std::uint8_t m_bCubeRoot[0x3]; // 0x20D bool
};

struct C_OP_SetToCP {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nControlPointNumber[0x4]; // 0x1E0 int32
    std::uint8_t m_vecOffset[0xC]; // 0x1E4 Vector
    std::uint8_t m_bOffsetLocal[0x8]; // 0x1F0 bool
};

struct ParticleControlPointDriver_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t m_iControlPoint[0x10]; // 0x0 ParticleParamID_t
    std::uint8_t m_iAttachType[0x8]; // 0x10 ParticleAttachment_t
    std::uint8_t m_attachmentName[0x8]; // 0x18 CUtlString
    std::uint8_t m_vecOffset[0xC]; // 0x20 Vector
    std::uint8_t m_angOffset[0xC]; // 0x2C QAngle
    std::uint8_t m_entityName[0x8]; // 0x38 CUtlString
};

struct C_OP_ParentVortices {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1F0]; // 0x0
    std::uint8_t m_flForceScale[0x4]; // 0x1F0 float32
    std::uint8_t m_vecTwistAxis[0xC]; // 0x1F4 Vector
    std::uint8_t m_bFlipBasedOnYaw[0x8]; // 0x200 bool
};

struct C_OP_SetControlPointToCPVelocity {
    static constexpr std::size_t size = 0x8D8;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nCPInput[0x4]; // 0x1E8 int32
    std::uint8_t m_nCPOutputVel[0x4]; // 0x1EC int32
    std::uint8_t m_bNormalize[0x4]; // 0x1F0 bool
    std::uint8_t m_nCPOutputMag[0x4]; // 0x1F4 int32
    std::uint8_t m_nCPField[0x8]; // 0x1F8 int32
    std::uint8_t m_vecComparisonVelocity[0x6D8]; // 0x200 CParticleCollectionVecInput
};

struct C_OP_ClientPhysics {
    static constexpr std::size_t size = 0x558;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_strPhysicsType[0x8]; // 0x230 CUtlString
    std::uint8_t m_bStartAsleep[0x8]; // 0x238 bool
    std::uint8_t m_flPlayerWakeRadius[0x178]; // 0x240 CParticleCollectionFloatInput
    std::uint8_t m_flVehicleWakeRadius[0x178]; // 0x3B8 CParticleCollectionFloatInput
    std::uint8_t m_bUseHighQualitySimulation[0x4]; // 0x530 bool
    std::uint8_t m_nMaxParticleCount[0x4]; // 0x534 int32
    std::uint8_t m_bRespectExclusionVolumes[0x1]; // 0x538 bool
    std::uint8_t m_bKillParticles[0x1]; // 0x539 bool
    std::uint8_t m_bDeleteSim[0x2]; // 0x53A bool
    std::uint8_t m_nControlPoint[0x4]; // 0x53C int32
    std::uint8_t m_nForcedSimId[0x4]; // 0x540 int32
    std::uint8_t m_nColorBlendType[0x4]; // 0x544 ParticleColorBlendType_t
    std::uint8_t m_nForcedStatusEffects[0x4]; // 0x548 ParticleAttrBoxFlags_t
    std::uint8_t m_nNoCollisionAttribute[0x4]; // 0x54C ParticleAttributeIndex_t
    std::uint8_t m_nZeroGravityAttribute[0x8]; // 0x550 ParticleAttributeIndex_t
};

struct C_OP_SpinYaw {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0x1F8]; // 0x0
};

struct PointDefinitionWithTimeValues_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x14]; // 0x0
    std::uint8_t m_flTimeDuration[0x4]; // 0x14 float32
};

struct RenderProjectedMaterial_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_hMaterial[0x8]; // 0x0 CStrongHandle<InfoForResourceTypeIMaterial2>
};

struct C_INIT_SetFloatAttributeToVectorExpression {
    static constexpr std::size_t size = 0x1120;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nExpression[0x8]; // 0x1E8 VectorFloatExpressionType_t
    std::uint8_t m_vInput1[0x6D8]; // 0x1F0 CPerParticleVecInput
    std::uint8_t m_vInput2[0x6D8]; // 0x8C8 CPerParticleVecInput
    std::uint8_t m_flOutputRemap[0x178]; // 0xFA0 CParticleRemapFloatInput
    std::uint8_t m_nOutputField[0x4]; // 0x1118 ParticleAttributeIndex_t
    std::uint8_t m_nSetMethod[0x4]; // 0x111C ParticleSetMethod_t
};

struct C_OP_ExternalWindForce {
    static constexpr std::size_t size = 0x2050;
    std::uint8_t pad_0[0x1F0]; // 0x0
    std::uint8_t m_vecSamplePosition[0x6D8]; // 0x1F0 CPerParticleVecInput
    std::uint8_t m_vecScale[0x6D8]; // 0x8C8 CPerParticleVecInput
    std::uint8_t m_bSampleWind[0x1]; // 0xFA0 bool
    std::uint8_t m_bSampleWater[0x1]; // 0xFA1 bool
    std::uint8_t m_bDampenNearWaterPlane[0x1]; // 0xFA2 bool
    std::uint8_t m_bSampleGravity[0x5]; // 0xFA3 bool
    std::uint8_t m_vecGravityForce[0x6D8]; // 0xFA8 CPerParticleVecInput
    std::uint8_t m_bUseBasicMovementGravity[0x8]; // 0x1680 bool
    std::uint8_t m_flLocalGravityScale[0x178]; // 0x1688 CPerParticleFloatInput
    std::uint8_t m_flLocalBuoyancyScale[0x178]; // 0x1800 CPerParticleFloatInput
    std::uint8_t m_vecBuoyancyForce[0x6D8]; // 0x1978 CPerParticleVecInput
};

struct C_INIT_ModelCull {
    static constexpr std::size_t size = 0x270;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_nControlPointNumber[0x4]; // 0x1E8 int32
    std::uint8_t m_bBoundBox[0x1]; // 0x1EC bool
    std::uint8_t m_bCullOutside[0x1]; // 0x1ED bool
    std::uint8_t m_bUseBones[0x1]; // 0x1EE bool
    std::uint8_t m_HitboxSetName[0x81]; // 0x1EF char[128]
};

struct C_OP_RenderSprites {
    static constexpr std::size_t size = 0x41C8;
    std::uint8_t pad_0[0x2ED8]; // 0x0
    std::uint8_t m_nSequenceOverride[0x178]; // 0x2ED8 CParticleCollectionRendererFloatInput
    std::uint8_t m_bSequenceNumbersAreRawSequenceIndices[0x4]; // 0x3050 bool
    std::uint8_t m_nOrientationType[0x4]; // 0x3054 ParticleOrientationChoiceList_t
    std::uint8_t m_nOrientationControlPoint[0x4]; // 0x3058 int32
    std::uint8_t m_bUseYawWithNormalAligned[0x4]; // 0x305C bool
    std::uint8_t m_flMinSize[0x178]; // 0x3060 CParticleCollectionRendererFloatInput
    std::uint8_t m_flMaxSize[0x178]; // 0x31D8 CParticleCollectionRendererFloatInput
    std::uint8_t m_flSubPixelAAScale[0x178]; // 0x3350 CParticleCollectionRendererFloatInput
    std::uint8_t m_flStartFadeSize[0x178]; // 0x34C8 CParticleCollectionRendererFloatInput
    std::uint8_t m_flEndFadeSize[0x178]; // 0x3640 CParticleCollectionRendererFloatInput
    std::uint8_t m_flStartFadeDot[0x4]; // 0x37B8 float32
    std::uint8_t m_flEndFadeDot[0x4]; // 0x37BC float32
    std::uint8_t m_bDistanceAlpha[0x1]; // 0x37C0 bool
    std::uint8_t m_bSoftEdges[0x3]; // 0x37C1 bool
    std::uint8_t m_flEdgeSoftnessStart[0x4]; // 0x37C4 float32
    std::uint8_t m_flEdgeSoftnessEnd[0x4]; // 0x37C8 float32
    std::uint8_t m_bOutline[0x4]; // 0x37CC bool
    std::uint8_t m_OutlineColor[0x4]; // 0x37D0 Color
    std::uint8_t m_nOutlineAlpha[0x4]; // 0x37D4 int32
    std::uint8_t m_flOutlineStart0[0x4]; // 0x37D8 float32
    std::uint8_t m_flOutlineStart1[0x4]; // 0x37DC float32
    std::uint8_t m_flOutlineEnd0[0x4]; // 0x37E0 float32
    std::uint8_t m_flOutlineEnd1[0x4]; // 0x37E4 float32
    std::uint8_t m_nLightingMode[0x8]; // 0x37E8 ParticleLightingQuality_t
    std::uint8_t m_vecLightingOverride[0x6D8]; // 0x37F0 CParticleCollectionRendererVecInput
    std::uint8_t m_flLightingTessellation[0x178]; // 0x3EC8 CParticleCollectionRendererFloatInput
    std::uint8_t m_flLightingDirectionality[0x178]; // 0x4040 CParticleCollectionRendererFloatInput
    std::uint8_t m_bParticleShadows[0x4]; // 0x41B8 bool
    std::uint8_t m_flShadowDensity[0xC]; // 0x41BC float32
};

struct C_OP_PercentageBetweenTransformLerpCPs {
    static constexpr std::size_t size = 0x2D8;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_flInputMin[0x4]; // 0x1E4 float32
    std::uint8_t m_flInputMax[0x8]; // 0x1E8 float32
    std::uint8_t m_TransformStart[0x68]; // 0x1F0 CParticleTransformInput
    std::uint8_t m_TransformEnd[0x68]; // 0x258 CParticleTransformInput
    std::uint8_t m_nOutputStartCP[0x4]; // 0x2C0 int32
    std::uint8_t m_nOutputStartField[0x4]; // 0x2C4 int32
    std::uint8_t m_nOutputEndCP[0x4]; // 0x2C8 int32
    std::uint8_t m_nOutputEndField[0x4]; // 0x2CC int32
    std::uint8_t m_nSetMethod[0x4]; // 0x2D0 ParticleSetMethod_t
    std::uint8_t m_bActiveRange[0x1]; // 0x2D4 bool
    std::uint8_t m_bRadialCheck[0x3]; // 0x2D5 bool
};

struct C_OP_SetPerChildControlPoint {
    static constexpr std::size_t size = 0x4F0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nChildGroupID[0x4]; // 0x1E0 int32
    std::uint8_t m_nFirstControlPoint[0x4]; // 0x1E4 int32
    std::uint8_t m_nNumControlPoints[0x8]; // 0x1E8 int32
    std::uint8_t m_nParticleIncrement[0x178]; // 0x1F0 CParticleCollectionFloatInput
    std::uint8_t m_nFirstSourcePoint[0x178]; // 0x368 CParticleCollectionFloatInput
    std::uint8_t m_bSetOrientation[0x4]; // 0x4E0 bool
    std::uint8_t m_nOrientationField[0x4]; // 0x4E4 ParticleAttributeIndex_t
    std::uint8_t m_bNumBasedOnParticleCount[0x8]; // 0x4E8 bool
};

struct C_OP_RenderTreeShake {
    static constexpr std::size_t size = 0x258;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_flPeakStrength[0x4]; // 0x230 float32
    std::uint8_t m_nPeakStrengthFieldOverride[0x4]; // 0x234 ParticleAttributeIndex_t
    std::uint8_t m_flRadius[0x4]; // 0x238 float32
    std::uint8_t m_nRadiusFieldOverride[0x4]; // 0x23C ParticleAttributeIndex_t
    std::uint8_t m_flShakeDuration[0x4]; // 0x240 float32
    std::uint8_t m_flTransitionTime[0x4]; // 0x244 float32
    std::uint8_t m_flTwistAmount[0x4]; // 0x248 float32
    std::uint8_t m_flRadialAmount[0x4]; // 0x24C float32
    std::uint8_t m_flControlPointOrientationAmount[0x4]; // 0x250 float32
    std::uint8_t m_nControlPointForLinearDirection[0x4]; // 0x254 int32
};

struct C_OP_WorldCollideConstraint {
    static constexpr std::size_t size = 0x1E0;
    std::uint8_t pad_0[0x1E0]; // 0x0
};

struct C_OP_SetAttributeToScalarExpression {
    static constexpr std::size_t size = 0x680;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nExpression[0x8]; // 0x1E0 ScalarExpressionType_t
    std::uint8_t m_flInput1[0x178]; // 0x1E8 CPerParticleFloatInput
    std::uint8_t m_flInput2[0x178]; // 0x360 CPerParticleFloatInput
    std::uint8_t m_flOutputRemap[0x178]; // 0x4D8 CParticleRemapFloatInput
    std::uint8_t m_nOutputField[0x4]; // 0x650 ParticleAttributeIndex_t
    std::uint8_t m_nSetMethod[0x2C]; // 0x654 ParticleSetMethod_t
};

struct C_OP_CycleScalar {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nDestField[0x4]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_flStartValue[0x4]; // 0x1E4 float32
    std::uint8_t m_flEndValue[0x4]; // 0x1E8 float32
    std::uint8_t m_flCycleTime[0x4]; // 0x1EC float32
    std::uint8_t m_bDoNotRepeatCycle[0x1]; // 0x1F0 bool
    std::uint8_t m_bSynchronizeParticles[0x3]; // 0x1F1 bool
    std::uint8_t m_nCPScale[0x4]; // 0x1F4 int32
    std::uint8_t m_nCPFieldMin[0x4]; // 0x1F8 int32
    std::uint8_t m_nCPFieldMax[0x4]; // 0x1FC int32
    std::uint8_t m_nSetMethod[0x8]; // 0x200 ParticleSetMethod_t
};

struct C_OP_RenderMaterialProxy {
    static constexpr std::size_t size = 0xC40;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t m_nMaterialControlPoint[0x4]; // 0x230 int32
    std::uint8_t m_nProxyType[0x4]; // 0x234 MaterialProxyType_t
    std::uint8_t m_MaterialVars[0x18]; // 0x238 CUtlVector<MaterialVariable_t>
    std::uint8_t m_hOverrideMaterial[0x8]; // 0x250 CStrongHandle<InfoForResourceTypeIMaterial2>
    std::uint8_t m_flMaterialOverrideEnabled[0x178]; // 0x258 CParticleCollectionFloatInput
    std::uint8_t m_vecColorScale[0x6D8]; // 0x3D0 CParticleCollectionVecInput
    std::uint8_t m_flAlpha[0x178]; // 0xAA8 CPerParticleFloatInput
    std::uint8_t m_nColorBlendType[0x20]; // 0xC20 ParticleColorBlendType_t
};

struct FloatInputMaterialVariable_t {
    static constexpr std::size_t size = 0x180;
    std::uint8_t m_strVariable[0x8]; // 0x0 CUtlString
    std::uint8_t m_flInput[0x178]; // 0x8 CParticleCollectionFloatInput
};

struct C_OP_RampScalarLinear {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_RateMin[0x4]; // 0x1E0 float32
    std::uint8_t m_RateMax[0x4]; // 0x1E4 float32
    std::uint8_t m_flStartTime_min[0x4]; // 0x1E8 float32
    std::uint8_t m_flStartTime_max[0x4]; // 0x1EC float32
    std::uint8_t m_flEndTime_min[0x4]; // 0x1F0 float32
    std::uint8_t m_flEndTime_max[0x2C]; // 0x1F4 float32
    std::uint8_t m_nField[0x4]; // 0x220 ParticleAttributeIndex_t
    std::uint8_t m_bProportionalOp[0xC]; // 0x224 bool
};

struct C_OP_RotateVector {
    static constexpr std::size_t size = 0x380;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_vecRotAxisMin[0xC]; // 0x1E4 Vector
    std::uint8_t m_vecRotAxisMax[0xC]; // 0x1F0 Vector
    std::uint8_t m_flRotRateMin[0x4]; // 0x1FC float32
    std::uint8_t m_flRotRateMax[0x4]; // 0x200 float32
    std::uint8_t m_bNormalize[0x4]; // 0x204 bool
    std::uint8_t m_flScale[0x178]; // 0x208 CPerParticleFloatInput
};

struct C_INIT_InitVecCollection {
    static constexpr std::size_t size = 0x8C8;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_InputValue[0x6D8]; // 0x1E8 CParticleCollectionVecInput
    std::uint8_t m_nOutputField[0x8]; // 0x8C0 ParticleAttributeIndex_t
};

struct C_INIT_RemapParticleCountToNamedModelMeshGroupScalar {
    static constexpr std::size_t size = 0x238;
    std::uint8_t pad_0[0x238]; // 0x0
};

struct C_INIT_SequenceFromCP {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1E8]; // 0x0
    std::uint8_t m_bKillUnused[0x1]; // 0x1E8 bool
    std::uint8_t m_bRadiusScale[0x3]; // 0x1E9 bool
    std::uint8_t m_nCP[0x4]; // 0x1EC int32
    std::uint8_t m_vecOffset[0x10]; // 0x1F0 Vector
};

struct C_OP_CPOffsetToPercentageBetweenCPs {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_flInputMin[0x4]; // 0x1E0 float32
    std::uint8_t m_flInputMax[0x4]; // 0x1E4 float32
    std::uint8_t m_flInputBias[0x4]; // 0x1E8 float32
    std::uint8_t m_nStartCP[0x4]; // 0x1EC int32
    std::uint8_t m_nEndCP[0x4]; // 0x1F0 int32
    std::uint8_t m_nOffsetCP[0x4]; // 0x1F4 int32
    std::uint8_t m_nOuputCP[0x4]; // 0x1F8 int32
    std::uint8_t m_nInputCP[0x4]; // 0x1FC int32
    std::uint8_t m_bRadialCheck[0x1]; // 0x200 bool
    std::uint8_t m_bScaleOffset[0x3]; // 0x201 bool
    std::uint8_t m_vecOffset[0xC]; // 0x204 Vector
};

struct C_OP_LerpEndCapScalar {
    static constexpr std::size_t size = 0x1F0;
    std::uint8_t pad_0[0x1E0]; // 0x0
    std::uint8_t m_nFieldOutput[0x4]; // 0x1E0 ParticleAttributeIndex_t
    std::uint8_t m_flOutput[0x4]; // 0x1E4 float32
    std::uint8_t m_flLerpTime[0x8]; // 0x1E8 float32
};

} // namespace