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

namespace cs2::particles_dll {

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
    DETAIL_2_COMBO_UNINITIALIZED = -1,
    DETAIL_2_COMBO_OFF = 0,
    DETAIL_2_COMBO_ADD = 1,
    DETAIL_2_COMBO_ADD_SELF_ILLUM = 2,
    DETAIL_2_COMBO_MOD2X = 3,
    DETAIL_2_COMBO_MUL = 4,
    DETAIL_2_COMBO_CROSSFADE = 5,
};

enum class MissingParentInheritBehavior_t : std::int32_t {
    MISSING_PARENT_DO_NOTHING = -1,
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
    SCALAR_EXPRESSION_UNINITIALIZED = -1,
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
    PARTICLE_LIGHTING_PER_PIXEL = -1,
    PARTICLE_LIGHTING_OVERRIDE_POSITION = 2,
    PARTICLE_LIGHTING_OVERRIDE_COLOR = 3,
    PARTICLE_LIGHTING_ADD_EXTRA_LIGHT = 4,
};

enum class ParticleVolumetricSmokeCreationType_t : std::int32_t {
    PARTICLE_VOLUMETRIC_SMOKE_TYPE_CONTINUOUS = 0,
    PARTICLE_VOLUMETRIC_SMOKE_TYPE_IMPULSE = 1,
};

enum class SetStatisticExpressionType_t : std::int32_t {
    SET_EXPRESSION_UNINITIALIZED = -1,
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
    PARTICLE_PIN_DISTANCE_NONE = -1,
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
    VECTOR_FLOAT_EXPRESSION_UNINITIALIZED = -1,
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
    VECTOR_EXPRESSION_UNINITIALIZED = -1,
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
    PARTICLE_TOOLS_STATE_ALWAYS_ON = -1,
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
    PARTICLE_MULTISEGMENT_SPECIAL_NONE = -1,
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
    PARTICLE_SEQUENCE_CROP_OVERRIDE_DEFAULT = -1,
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
    COLLISION_MODE_DISABLED = -1,
};

enum class ParticleSortingChoiceList_t : std::int32_t {
    PARTICLE_SORTING_NEAREST = 0,
    PARTICLE_SORTING_CREATION_TIME = 1,
};

enum class ParticleEndcapMode_t : std::int32_t {
    PARTICLE_ENDCAP_ALWAYS_ON = -1,
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
    PARTICLE_ORIENTATION_SET_NONE = -1,
    PARTICLE_ORIENTATION_SET_FROM_VELOCITY = 0,
    PARTICLE_ORIENTATION_SET_FROM_NORMAL = 1,
    PARTICLE_ORIENTATION_SET_FROM_ROTATIONS = 2,
};

enum class ParticleCollisionMask_t : std::int32_t {
    PARTICLE_MASK_ALL = -1,
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

struct IParticleCollection {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct C_OP_RemapGravityToVector {
    static constexpr std::size_t size = 0x930;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x6d8]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x8b8 
    std::uint8_t _[0x4]; // 0x8bc 
    std::uint8_t _[0x70]; // 0x8c0 
};

struct C_OP_Decay {
    static constexpr std::size_t size = 0x1e8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x1]; // 0x1e0 
    std::uint8_t _[0x7]; // 0x1e1 
};

struct C_OP_RenderDeferredLight {
    static constexpr std::size_t size = 0x948;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x4]; // 0x230 
    std::uint8_t _[0x4]; // 0x234 
    std::uint8_t _[0x8]; // 0x238 
    std::uint8_t _[0x6d8]; // 0x240 
    std::uint8_t _[0x4]; // 0x918 
    std::uint8_t _[0x1]; // 0x91c 
    std::uint8_t _[0x3]; // 0x91d 
    std::uint8_t _[0x8]; // 0x920 
    std::uint8_t _[0x4]; // 0x928 
    std::uint8_t _[0x4]; // 0x92c 
    std::uint8_t _[0x4]; // 0x930 
    std::uint8_t _[0x4]; // 0x934 
    std::uint8_t _[0x4]; // 0x938 
    std::uint8_t _[0x4]; // 0x93c 
    std::uint8_t _[0x4]; // 0x940 
    std::uint8_t _[0x4]; // 0x944 
};

struct C_OP_RemapSpeedtoCP {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x4]; // 0x200 
    std::uint8_t _[0x4]; // 0x204 
};

struct C_OP_RemapTransformToVelocity {
    static constexpr std::size_t size = 0x248;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x68]; // 0x1e0 
};

struct CollisionGroupContext_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CParticleFunctionPreEmission {
    static constexpr std::size_t size = 0x1e8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
};

struct C_OP_FadeOutSimple {
    static constexpr std::size_t size = 0x1e8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
};

struct C_OP_SpringToVectorConstraint {
    static constexpr std::size_t size = 0xe98;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x178]; // 0x1e0 
    std::uint8_t _[0x178]; // 0x358 
    std::uint8_t _[0x178]; // 0x4d0 
    std::uint8_t _[0x178]; // 0x648 
    std::uint8_t _[0x6d8]; // 0x7c0 
};

struct C_OP_RenderRopes {
    static constexpr std::size_t size = 0x3528;
    std::uint8_t pad_0[0x2ed8]; // 0x0
    std::uint8_t _[0x4]; // 0x2ed8 
    std::uint8_t _[0x4]; // 0x2edc 
    std::uint8_t _[0x4]; // 0x2ee0 
    std::uint8_t _[0x4]; // 0x2ee4 
    std::uint8_t _[0x4]; // 0x2ee8 
    std::uint8_t _[0x4]; // 0x2eec 
    std::uint8_t _[0x8]; // 0x2ef0 
    std::uint8_t _[0x178]; // 0x2ef8 
    std::uint8_t _[0x4]; // 0x3070 
    std::uint8_t _[0x4]; // 0x3074 
    std::uint8_t _[0x4]; // 0x3078 
    std::uint8_t _[0x4]; // 0x307c 
    std::uint8_t _[0x178]; // 0x3080 
    std::uint8_t _[0x178]; // 0x31f8 
    std::uint8_t _[0x178]; // 0x3370 
    std::uint8_t _[0x4]; // 0x34e8 
    std::uint8_t _[0x4]; // 0x34ec 
    std::uint8_t _[0x4]; // 0x34f0 
    std::uint8_t _[0x4]; // 0x34f4 
    std::uint8_t _[0x4]; // 0x34f8 
    std::uint8_t _[0x4]; // 0x34fc 
    std::uint8_t _[0x5]; // 0x3500 
    std::uint8_t _[0x3]; // 0x3505 
    std::uint8_t _[0x4]; // 0x3508 
    std::uint8_t _[0x4]; // 0x350c 
    std::uint8_t _[0x1]; // 0x3510 
    std::uint8_t _[0x3]; // 0x3511 
    std::uint8_t _[0x4]; // 0x3514 
    std::uint8_t _[0x4]; // 0x3518 
    std::uint8_t _[0x4]; // 0x351c 
    std::uint8_t _[0x4]; // 0x3520 
    std::uint8_t _[0x1]; // 0x3524 
    std::uint8_t _[0x3]; // 0x3525 
};

struct C_INIT_StatusEffectCitadel {
    static constexpr std::size_t size = 0x238;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x4]; // 0x200 
    std::uint8_t _[0x4]; // 0x204 
    std::uint8_t _[0x4]; // 0x208 
    std::uint8_t _[0x4]; // 0x20c 
    std::uint8_t _[0x4]; // 0x210 
    std::uint8_t _[0x4]; // 0x214 
    std::uint8_t _[0x4]; // 0x218 
    std::uint8_t _[0x4]; // 0x21c 
    std::uint8_t _[0x4]; // 0x220 
    std::uint8_t _[0x4]; // 0x224 
    std::uint8_t _[0x4]; // 0x228 
    std::uint8_t _[0x4]; // 0x22c 
    std::uint8_t _[0x8]; // 0x230 
};

struct C_OP_RenderSound {
    static constexpr std::size_t size = 0x360;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x4]; // 0x230 
    std::uint8_t _[0x4]; // 0x234 
    std::uint8_t _[0x4]; // 0x238 
    std::uint8_t _[0x4]; // 0x23c 
    std::uint8_t _[0x4]; // 0x240 
    std::uint8_t _[0x4]; // 0x244 
    std::uint8_t _[0x4]; // 0x248 
    std::uint8_t _[0x4]; // 0x24c 
    std::uint8_t _[0x4]; // 0x250 
    std::uint8_t _[0x4]; // 0x254 
    std::uint8_t _[0x100]; // 0x258 
    std::uint8_t _[0x8]; // 0x358 
};

struct CParticleVisibilityInputs {
    static constexpr std::size_t size = 0x48;
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
    std::uint8_t _[0x1]; // 0x2c 
    std::uint8_t _[0x3]; // 0x2d 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x4]; // 0x44 
};

struct C_OP_SetControlPointsToParticle {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x1]; // 0x1f0 
    std::uint8_t _[0x3]; // 0x1f1 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x8]; // 0x1f8 
};

struct C_OP_RemapCPVelocityToVector {
    static constexpr std::size_t size = 0x1f0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
};

struct C_OP_PointVectorAtNextParticle {
    static constexpr std::size_t size = 0x368;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x8]; // 0x360 
};

struct ParticlePreviewBodyGroup_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
};

struct C_OP_OscillateScalarSimple {
    static constexpr std::size_t size = 0x220;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x30]; // 0x1f0 
};

struct C_INIT_StatusEffect {
    static constexpr std::size_t size = 0x248;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x4]; // 0x200 
    std::uint8_t _[0x4]; // 0x204 
    std::uint8_t _[0x4]; // 0x208 
    std::uint8_t _[0x4]; // 0x20c 
    std::uint8_t _[0x4]; // 0x210 
    std::uint8_t _[0x4]; // 0x214 
    std::uint8_t _[0x4]; // 0x218 
    std::uint8_t _[0x4]; // 0x21c 
    std::uint8_t _[0x4]; // 0x220 
    std::uint8_t _[0x4]; // 0x224 
    std::uint8_t _[0x4]; // 0x228 
    std::uint8_t _[0x1c]; // 0x22c 
};

struct C_INIT_RtEnvCull {
    static constexpr std::size_t size = 0x290;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0xc]; // 0x1e8 
    std::uint8_t _[0xc]; // 0x1f4 
    std::uint8_t _[0x1]; // 0x200 
    std::uint8_t _[0x1]; // 0x201 
    std::uint8_t _[0x1]; // 0x202 
    std::uint8_t _[0x81]; // 0x203 
    std::uint8_t _[0x4]; // 0x284 
    std::uint8_t _[0x8]; // 0x288 
};

struct C_OP_ConstrainDistance {
    static constexpr std::size_t size = 0xc18;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x178]; // 0x1e0 
    std::uint8_t _[0x178]; // 0x358 
    std::uint8_t _[0x68]; // 0x4d0 
    std::uint8_t _[0x6d8]; // 0x538 
    std::uint8_t _[0x8]; // 0xc10 
};

struct C_INIT_RandomVector {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0xc]; // 0x1e8 
    std::uint8_t _[0xc]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x200 
    std::uint8_t _[0xc]; // 0x204 
};

struct C_INIT_InitialVelocityNoise {
    static constexpr std::size_t size = 0x1b60;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0xc]; // 0x1e8 
    std::uint8_t _[0xc]; // 0x1f4 
    std::uint8_t _[0x6d8]; // 0x200 
    std::uint8_t _[0x178]; // 0x8d8 
    std::uint8_t _[0x6d8]; // 0xa50 
    std::uint8_t _[0x6d8]; // 0x1128 
    std::uint8_t _[0x178]; // 0x1800 
    std::uint8_t _[0x178]; // 0x1978 
    std::uint8_t _[0x68]; // 0x1af0 
    std::uint8_t _[0x8]; // 0x1b58 
};

struct ParticleChildrenInfo_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x1]; // 0xc 
    std::uint8_t _[0x3]; // 0xd 
    std::uint8_t _[0x10]; // 0x10 
};

struct C_OP_RemapScalarOnceTimed {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
};

struct C_INIT_RandomNamedModelSequence {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x210]; // 0x0
};

struct C_OP_PlaneCull {
    static constexpr std::size_t size = 0x8c8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
    std::uint8_t _[0x6d8]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x8c0 
    std::uint8_t _[0x4]; // 0x8c4 
};

struct C_INIT_VelocityRandom {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x8]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x1f0 
    std::uint8_t _[0x178]; // 0x368 
    std::uint8_t _[0x6d8]; // 0x4e0 
    std::uint8_t _[0x6d8]; // 0xbb8 
    std::uint8_t _[0x4]; // 0x1290 
    std::uint8_t _[0xc]; // 0x1294 
};

struct C_OP_ModelDampenMovement {
    static constexpr std::size_t size = 0x948;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x1]; // 0x1e4 
    std::uint8_t _[0x1]; // 0x1e5 
    std::uint8_t _[0x1]; // 0x1e6 
    std::uint8_t _[0x81]; // 0x1e7 
    std::uint8_t _[0x6d8]; // 0x268 
    std::uint8_t _[0x8]; // 0x940 
};

struct C_OP_TwistAroundAxis {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1f0]; // 0x0
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0xc]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x200 
    std::uint8_t _[0x4]; // 0x204 
};

struct C_OP_TeleportBeam {
    static constexpr std::size_t size = 0x218;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0xc]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x204 
    std::uint8_t _[0x4]; // 0x208 
    std::uint8_t _[0x4]; // 0x20c 
    std::uint8_t _[0x8]; // 0x210 
};

struct C_OP_RemapExternalWindToCP {
    static constexpr std::size_t size = 0x8d0;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x6d8]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x8c8 
    std::uint8_t _[0x4]; // 0x8cc 
};

struct CBaseRendererSource2 {
    static constexpr std::size_t size = 0x2ed8;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x178]; // 0x230 
    std::uint8_t _[0x178]; // 0x3a8 
    std::uint8_t _[0x178]; // 0x520 
    std::uint8_t _[0x8]; // 0x698 
    std::uint8_t _[0x6d8]; // 0x6a0 
    std::uint8_t _[0x4]; // 0xd78 
    std::uint8_t _[0x4]; // 0xd7c 
    std::uint8_t _[0x8]; // 0xd80 
    std::uint8_t _[0x178]; // 0xd88 
    std::uint8_t _[0x178]; // 0xf00 
    std::uint8_t _[0x4]; // 0x1078 
    std::uint8_t _[0x4]; // 0x107c 
    std::uint8_t _[0x10]; // 0x1080 
    std::uint8_t _[0x4]; // 0x1090 
    std::uint8_t _[0x4]; // 0x1094 
    std::uint8_t _[0x8]; // 0x1098 
    std::uint8_t _[0x178]; // 0x10a0 
    std::uint8_t _[0x178]; // 0x1218 
    std::uint8_t _[0x178]; // 0x1390 
    std::uint8_t _[0x178]; // 0x1508 
    std::uint8_t _[0x178]; // 0x1680 
    std::uint8_t _[0x4]; // 0x17f8 
    std::uint8_t _[0x4]; // 0x17fc 
    std::uint8_t _[0x1]; // 0x1800 
    std::uint8_t _[0x7]; // 0x1801 
    std::uint8_t _[0x178]; // 0x1808 
    std::uint8_t _[0x178]; // 0x1980 
    std::uint8_t _[0x178]; // 0x1af8 
    std::uint8_t _[0x4]; // 0x1c70 
    std::uint8_t _[0x4]; // 0x1c74 
    std::uint8_t _[0x178]; // 0x1c78 
    std::uint8_t _[0x1]; // 0x1df0 
    std::uint8_t _[0x3]; // 0x1df1 
    std::uint8_t _[0x4]; // 0x1df4 
    std::uint8_t _[0x4]; // 0x1df8 
    std::uint8_t _[0x4]; // 0x1dfc 
    std::uint8_t _[0x178]; // 0x1e00 
    std::uint8_t _[0x178]; // 0x1f78 
    std::uint8_t _[0x178]; // 0x20f0 
    std::uint8_t _[0x1]; // 0x2268 
    std::uint8_t _[0x1]; // 0x2269 
    std::uint8_t _[0x6]; // 0x226a 
    std::uint8_t _[0x178]; // 0x2270 
    std::uint8_t _[0x4]; // 0x23e8 
    std::uint8_t _[0x4]; // 0x23ec 
    std::uint8_t _[0x1]; // 0x23f0 
    std::uint8_t _[0x1]; // 0x23f1 
    std::uint8_t _[0x1]; // 0x23f2 
    std::uint8_t _[0x1]; // 0x23f3 
    std::uint8_t _[0x80]; // 0x23f4 
    std::uint8_t _[0x1]; // 0x2474 
    std::uint8_t _[0x80]; // 0x2475 
    std::uint8_t _[0x1]; // 0x24f5 
    std::uint8_t _[0x1]; // 0x24f6 
    std::uint8_t _[0x1]; // 0x24f7 
    std::uint8_t _[0x4]; // 0x24f8 
    std::uint8_t _[0x4]; // 0x24fc 
    std::uint8_t _[0x178]; // 0x2500 
    std::uint8_t _[0x178]; // 0x2678 
    std::uint8_t _[0x178]; // 0x27f0 
    std::uint8_t _[0x178]; // 0x2968 
    std::uint8_t _[0x178]; // 0x2ae0 
    std::uint8_t _[0x4]; // 0x2c58 
    std::uint8_t _[0x1]; // 0x2c5c 
    std::uint8_t _[0x27b]; // 0x2c5d 
};

struct CSpinUpdateBase {
    static constexpr std::size_t size = 0x1e0;
    std::uint8_t pad_0[0x1e0]; // 0x0
};

struct C_OP_OrientTo2dDirection {
    static constexpr std::size_t size = 0x8c8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x6d8]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x8b8 
    std::uint8_t _[0x4]; // 0x8bc 
    std::uint8_t _[0x8]; // 0x8c0 
};

struct C_OP_RemapDotProductToCP {
    static constexpr std::size_t size = 0x7d8;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x178]; // 0x1f8 
    std::uint8_t _[0x178]; // 0x370 
    std::uint8_t _[0x178]; // 0x4e8 
    std::uint8_t _[0x178]; // 0x660 
};

struct C_INIT_RemapParticleCountToNamedModelElementScalar {
    static constexpr std::size_t size = 0x238;
    std::uint8_t pad_0[0x218]; // 0x0
    std::uint8_t _[0x8]; // 0x218 
    std::uint8_t _[0x8]; // 0x220 
    std::uint8_t _[0x8]; // 0x228 
    std::uint8_t _[0x8]; // 0x230 
};

struct C_OP_RenderTrails {
    static constexpr std::size_t size = 0x4720;
    std::uint8_t pad_0[0x3358]; // 0x0
    std::uint8_t _[0x4]; // 0x3358 
    std::uint8_t _[0x4]; // 0x335c 
    std::uint8_t _[0x4]; // 0x3360 
    std::uint8_t _[0x4]; // 0x3364 
    std::uint8_t _[0x4]; // 0x3368 
    std::uint8_t _[0x4]; // 0x336c 
    std::uint8_t _[0x4]; // 0x3370 
    std::uint8_t _[0x4]; // 0x3374 
    std::uint8_t _[0x4]; // 0x3378 
    std::uint8_t _[0x4]; // 0x337c 
    std::uint8_t _[0x178]; // 0x3380 
    std::uint8_t _[0x6d8]; // 0x34f8 
    std::uint8_t _[0x178]; // 0x3bd0 
    std::uint8_t _[0x178]; // 0x3d48 
    std::uint8_t _[0x6d8]; // 0x3ec0 
    std::uint8_t _[0x178]; // 0x4598 
    std::uint8_t _[0x4]; // 0x4710 
    std::uint8_t _[0x4]; // 0x4714 
    std::uint8_t _[0x4]; // 0x4718 
    std::uint8_t _[0x4]; // 0x471c 
};

struct C_OP_SetControlPointPositionToTimeOfDayValue {
    static constexpr std::size_t size = 0x280;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x80]; // 0x1ec 
    std::uint8_t _[0x14]; // 0x26c 
};

struct C_OP_DecayMaintainCount {
    static constexpr std::size_t size = 0x380;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x8]; // 0x1e8 
    std::uint8_t _[0x8]; // 0x1f0 
    std::uint8_t _[0x8]; // 0x1f8 
    std::uint8_t _[0x178]; // 0x200 
    std::uint8_t _[0x8]; // 0x378 
};

struct C_INIT_RandomModelSequence {
    static constexpr std::size_t size = 0x3f0;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x100]; // 0x1e8 
    std::uint8_t _[0x100]; // 0x2e8 
    std::uint8_t _[0x8]; // 0x3e8 
};

struct C_OP_ExternalGameImpulseForce {
    static constexpr std::size_t size = 0x370;
    std::uint8_t pad_0[0x1f0]; // 0x0
    std::uint8_t _[0x178]; // 0x1f0 
    std::uint8_t _[0x1]; // 0x368 
    std::uint8_t _[0x1]; // 0x369 
    std::uint8_t _[0x1]; // 0x36a 
    std::uint8_t _[0x5]; // 0x36b 
};

struct C_OP_RemapAverageHitboxSpeedtoCP {
    static constexpr std::size_t size = 0xf38;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x178]; // 0x1f8 
    std::uint8_t _[0x178]; // 0x370 
    std::uint8_t _[0x178]; // 0x4e8 
    std::uint8_t _[0x178]; // 0x660 
    std::uint8_t _[0x8]; // 0x7d8 
    std::uint8_t _[0x6d8]; // 0x7e0 
    std::uint8_t _[0x80]; // 0xeb8 
};

struct C_INIT_RandomAlpha {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0xc]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1fc 
};

struct C_OP_NormalizeVector {
    static constexpr std::size_t size = 0x1e8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
};

struct C_OP_FadeInSimple {
    static constexpr std::size_t size = 0x1e8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
};

struct C_OP_RepeatedTriggerChildGroup {
    static constexpr std::size_t size = 0x660;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x8]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x1f0 
    std::uint8_t _[0x178]; // 0x368 
    std::uint8_t _[0x178]; // 0x4e0 
    std::uint8_t _[0x8]; // 0x658 
};

struct C_OP_RemapVelocityToVector {
    static constexpr std::size_t size = 0x1f0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x8]; // 0x1e8 
};

struct C_INIT_SetHitboxToClosest {
    static constexpr std::size_t size = 0xad0;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x6d8]; // 0x1f0 
    std::uint8_t _[0x80]; // 0x8c8 
    std::uint8_t _[0x1]; // 0x948 
    std::uint8_t _[0x3]; // 0x949 
    std::uint8_t _[0x4]; // 0x94c 
    std::uint8_t _[0x178]; // 0x950 
    std::uint8_t _[0x8]; // 0xac8 
};

struct C_INIT_RingWave {
    static constexpr std::size_t size = 0xe18;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x68]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x250 
    std::uint8_t _[0x178]; // 0x3c8 
    std::uint8_t _[0x178]; // 0x540 
    std::uint8_t _[0x178]; // 0x6b8 
    std::uint8_t _[0x178]; // 0x830 
    std::uint8_t _[0x178]; // 0x9a8 
    std::uint8_t _[0x178]; // 0xb20 
    std::uint8_t _[0x178]; // 0xc98 
    std::uint8_t _[0x1]; // 0xe10 
    std::uint8_t _[0x7]; // 0xe11 
};

struct C_INIT_RandomTrailLength {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x8]; // 0x1f0 
};

struct C_OP_RemapScalar {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x8]; // 0x1f8 
};

struct C_OP_DistanceBetweenTransforms {
    static constexpr std::size_t size = 0x930;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
    std::uint8_t _[0x68]; // 0x1e8 
    std::uint8_t _[0x68]; // 0x250 
    std::uint8_t _[0x178]; // 0x2b8 
    std::uint8_t _[0x178]; // 0x430 
    std::uint8_t _[0x178]; // 0x5a8 
    std::uint8_t _[0x178]; // 0x720 
    std::uint8_t _[0x4]; // 0x898 
    std::uint8_t _[0x4]; // 0x89c 
    std::uint8_t _[0x80]; // 0x8a0 
    std::uint8_t _[0x4]; // 0x920 
    std::uint8_t _[0x4]; // 0x924 
    std::uint8_t _[0x8]; // 0x928 
};

struct C_OP_DecayOffscreen {
    static constexpr std::size_t size = 0x358;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x178]; // 0x1e0 
};

struct C_INIT_CreateSequentialPath {
    static constexpr std::size_t size = 0x240;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x1]; // 0x1f0 
    std::uint8_t _[0x1]; // 0x1f1 
    std::uint8_t _[0xe]; // 0x1f2 
    std::uint8_t _[0x40]; // 0x200 
};

struct C_OP_EndCapTimedDecay {
    static constexpr std::size_t size = 0x358;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x178]; // 0x1e0 
};

struct C_OP_RemapDistanceToLineSegmentBase {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x8]; // 0x1f0 
};

struct C_OP_ContinuousEmitter {
    static constexpr std::size_t size = 0x680;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x360 
    std::uint8_t _[0x178]; // 0x4d8 
    std::uint8_t _[0x4]; // 0x650 
    std::uint8_t _[0x4]; // 0x654 
    std::uint8_t _[0x4]; // 0x658 
    std::uint8_t _[0x4]; // 0x65c 
    std::uint8_t _[0x8]; // 0x660 
    std::uint8_t _[0x8]; // 0x668 
    std::uint8_t _[0x4]; // 0x670 
    std::uint8_t _[0x1]; // 0x674 
    std::uint8_t _[0xb]; // 0x675 
};

struct C_OP_OscillateVectorSimple {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0xc]; // 0x1e0 
    std::uint8_t _[0xc]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x4]; // 0x200 
    std::uint8_t _[0x4]; // 0x204 
};

struct C_INIT_SequenceLifeTime {
    static constexpr std::size_t size = 0x1f0;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x8]; // 0x1e8 
};

struct C_INIT_MoveBetweenPoints {
    static constexpr std::size_t size = 0x948;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x360 
    std::uint8_t _[0x178]; // 0x4d8 
    std::uint8_t _[0x178]; // 0x650 
    std::uint8_t _[0x178]; // 0x7c8 
    std::uint8_t _[0x4]; // 0x940 
    std::uint8_t _[0x4]; // 0x944 
};

struct C_INIT_StatusEffectTf {
    static constexpr std::size_t size = 0x238;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x4]; // 0x200 
    std::uint8_t _[0x4]; // 0x204 
    std::uint8_t _[0x4]; // 0x208 
    std::uint8_t _[0x4]; // 0x20c 
    std::uint8_t _[0x4]; // 0x210 
    std::uint8_t _[0x4]; // 0x214 
    std::uint8_t _[0x4]; // 0x218 
    std::uint8_t _[0x4]; // 0x21c 
    std::uint8_t _[0x4]; // 0x220 
    std::uint8_t _[0x4]; // 0x224 
    std::uint8_t _[0x4]; // 0x228 
    std::uint8_t _[0x4]; // 0x22c 
    std::uint8_t _[0x4]; // 0x230 
    std::uint8_t _[0x4]; // 0x234 
};

struct C_OP_SetUserEvent {
    static constexpr std::size_t size = 0x658;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x178]; // 0x1e0 
    std::uint8_t _[0x178]; // 0x358 
    std::uint8_t _[0x8]; // 0x4d0 
    std::uint8_t _[0x178]; // 0x4d8 
    std::uint8_t _[0x8]; // 0x650 
};

struct C_OP_QuantizeFloat {
    static constexpr std::size_t size = 0x380;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x178]; // 0x1e0 
    std::uint8_t _[0x28]; // 0x358 
};

struct C_OP_BasicMovement {
    static constexpr std::size_t size = 0xea8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x6d8]; // 0x1e0 
    std::uint8_t _[0x178]; // 0x8b8 
    std::uint8_t _[0x470]; // 0xa30 
    std::uint8_t _[0x4]; // 0xea0 
    std::uint8_t _[0x4]; // 0xea4 
};

struct C_INIT_RandomNamedModelElement {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x8]; // 0x1e8 
    std::uint8_t _[0x18]; // 0x1f0 
    std::uint8_t _[0x1]; // 0x208 
    std::uint8_t _[0x1]; // 0x209 
    std::uint8_t _[0x2]; // 0x20a 
    std::uint8_t _[0x4]; // 0x20c 
};

struct C_INIT_InitFromParentKilled {
    static constexpr std::size_t size = 0x270;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x84]; // 0x1ec 
};

struct C_OP_Callback {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x230]; // 0x0
};

struct CParticleFunction {
    static constexpr std::size_t size = 0x1e0;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x178]; // 0x8 
    std::uint8_t _[0x4]; // 0x180 
    std::uint8_t _[0x4]; // 0x184 
    std::uint8_t _[0x4]; // 0x188 
    std::uint8_t _[0x4]; // 0x18c 
    std::uint8_t _[0x4]; // 0x190 
    std::uint8_t _[0x4]; // 0x194 
    std::uint8_t _[0x4]; // 0x198 
    std::uint8_t _[0x4]; // 0x19c 
    std::uint8_t _[0x4]; // 0x1a0 
    std::uint8_t _[0x4]; // 0x1a4 
    std::uint8_t _[0x4]; // 0x1a8 
    std::uint8_t _[0x4]; // 0x1ac 
    std::uint8_t _[0x4]; // 0x1b0 
    std::uint8_t _[0x6]; // 0x1b4 
    std::uint8_t _[0x6]; // 0x1ba 
    std::uint8_t _[0x20]; // 0x1c0 
};

struct C_OP_GlobalLight {
    static constexpr std::size_t size = 0x1e8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x1]; // 0x1e4 
    std::uint8_t _[0x3]; // 0x1e5 
};

struct C_INIT_OffsetVectorToVector {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0xc]; // 0x1f0 
    std::uint8_t _[0xc]; // 0x1fc 
    std::uint8_t _[0x8]; // 0x208 
};

struct C_OP_SetPerChildControlPointFromAttribute {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
};

struct C_OP_SetParentControlPointsToChildCP {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x8]; // 0x1f8 
};

struct C_OP_BoxConstraint {
    static constexpr std::size_t size = 0xf98;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x6d8]; // 0x1e0 
    std::uint8_t _[0x6d8]; // 0x8b8 
    std::uint8_t _[0x4]; // 0xf90 
    std::uint8_t _[0x1]; // 0xf94 
    std::uint8_t _[0x3]; // 0xf95 
};

struct C_INIT_CreatePhyllotaxis {
    static constexpr std::size_t size = 0x218;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x4]; // 0x200 
    std::uint8_t _[0x4]; // 0x204 
    std::uint8_t _[0x4]; // 0x208 
    std::uint8_t _[0x4]; // 0x20c 
    std::uint8_t _[0x4]; // 0x210 
    std::uint8_t _[0x1]; // 0x214 
    std::uint8_t _[0x1]; // 0x215 
    std::uint8_t _[0x2]; // 0x216 
};

struct C_OP_AttractToControlPoint {
    static constexpr std::size_t size = 0x6e0;
    std::uint8_t pad_0[0x1f0]; // 0x0
    std::uint8_t _[0x10]; // 0x1f0 
    std::uint8_t _[0x178]; // 0x200 
    std::uint8_t _[0x178]; // 0x378 
    std::uint8_t _[0x8]; // 0x4f0 
    std::uint8_t _[0x68]; // 0x4f8 
    std::uint8_t _[0x178]; // 0x560 
    std::uint8_t _[0x8]; // 0x6d8 
};

struct C_INIT_RandomLifeTime {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x8]; // 0x1f0 
};

struct C_INIT_RemapParticleCountToNamedModelSequenceScalar {
    static constexpr std::size_t size = 0x238;
    std::uint8_t pad_0[0x238]; // 0x0
};

struct C_INIT_VelocityRadialRandom {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x6d8]; // 0x1f0 
    std::uint8_t _[0x6d8]; // 0x8c8 
    std::uint8_t _[0x178]; // 0xfa0 
    std::uint8_t _[0x178]; // 0x1118 
    std::uint8_t _[0xd]; // 0x1290 
    std::uint8_t _[0x3]; // 0x129d 
};

struct C_INIT_RandomRadius {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x8]; // 0x1f0 
};

struct C_OP_Orient2DRelToCP {
    static constexpr std::size_t size = 0x1f0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
};

struct TextureControls_t {
    static constexpr std::size_t size = 0xa68;
    std::uint8_t _[0x178]; // 0x0 
    std::uint8_t _[0x178]; // 0x178 
    std::uint8_t _[0x178]; // 0x2f0 
    std::uint8_t _[0x178]; // 0x468 
    std::uint8_t _[0x178]; // 0x5e0 
    std::uint8_t _[0x178]; // 0x758 
    std::uint8_t _[0x178]; // 0x8d0 
    std::uint8_t _[0x1]; // 0xa48 
    std::uint8_t _[0x3]; // 0xa49 
    std::uint8_t _[0x4]; // 0xa4c 
    std::uint8_t _[0x4]; // 0xa50 
    std::uint8_t _[0x4]; // 0xa54 
    std::uint8_t _[0x4]; // 0xa58 
    std::uint8_t _[0x4]; // 0xa5c 
    std::uint8_t _[0x4]; // 0xa60 
    std::uint8_t _[0x4]; // 0xa64 
};

struct ControlPointReference_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0xc]; // 0x4 
    std::uint8_t _[0x4]; // 0x10 
};

struct C_OP_SetControlPointToVectorExpression {
    static constexpr std::size_t size = 0x1120;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x6d8]; // 0x1f0 
    std::uint8_t _[0x6d8]; // 0x8c8 
    std::uint8_t _[0x178]; // 0xfa0 
    std::uint8_t _[0x8]; // 0x1118 
};

struct C_OP_LightningSnapshotGenerator {
    static constexpr std::size_t size = 0x16a0;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x8]; // 0x1f0 
    std::uint8_t _[0x178]; // 0x1f8 
    std::uint8_t _[0x178]; // 0x370 
    std::uint8_t _[0x178]; // 0x4e8 
    std::uint8_t _[0x178]; // 0x660 
    std::uint8_t _[0x178]; // 0x7d8 
    std::uint8_t _[0x178]; // 0x950 
    std::uint8_t _[0x178]; // 0xac8 
    std::uint8_t _[0x178]; // 0xc40 
    std::uint8_t _[0x8]; // 0xdb8 
    std::uint8_t _[0x178]; // 0xdc0 
    std::uint8_t _[0x8]; // 0xf38 
    std::uint8_t _[0x178]; // 0xf40 
    std::uint8_t _[0x178]; // 0x10b8 
    std::uint8_t _[0x8]; // 0x1230 
    std::uint8_t _[0x178]; // 0x1238 
    std::uint8_t _[0x178]; // 0x13b0 
    std::uint8_t _[0x178]; // 0x1528 
};

struct C_OP_RemapNamedModelMeshGroupOnceTimed {
    static constexpr std::size_t size = 0x240;
    std::uint8_t pad_0[0x240]; // 0x0
};

struct C_INIT_RemapQAnglesToRotation {
    static constexpr std::size_t size = 0x250;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x68]; // 0x1e8 
};

struct C_INIT_PositionWarp {
    static constexpr std::size_t size = 0xfb8;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x6d8]; // 0x1e8 
    std::uint8_t _[0x6d8]; // 0x8c0 
    std::uint8_t _[0x4]; // 0xf98 
    std::uint8_t _[0x4]; // 0xf9c 
    std::uint8_t _[0x4]; // 0xfa0 
    std::uint8_t _[0x4]; // 0xfa4 
    std::uint8_t _[0x4]; // 0xfa8 
    std::uint8_t _[0x4]; // 0xfac 
    std::uint8_t _[0x1]; // 0xfb0 
    std::uint8_t _[0x7]; // 0xfb1 
};

struct C_OP_SetControlPointFieldToScalarExpression {
    static constexpr std::size_t size = 0x7d8;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x8]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x1f0 
    std::uint8_t _[0x178]; // 0x368 
    std::uint8_t _[0x178]; // 0x4e0 
    std::uint8_t _[0x4]; // 0x658 
    std::uint8_t _[0x4]; // 0x65c 
    std::uint8_t _[0x178]; // 0x660 
};

struct C_OP_CreateParticleSystemRenderer {
    static constexpr std::size_t size = 0x930;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x8]; // 0x230 
    std::uint8_t _[0x8]; // 0x238 
    std::uint8_t _[0x10]; // 0x240 
    std::uint8_t _[0x8]; // 0x250 
    std::uint8_t _[0x6d8]; // 0x258 
};

struct CParticleFunctionForce {
    static constexpr std::size_t size = 0x1f0;
    std::uint8_t pad_0[0x1f0]; // 0x0
};

struct C_INIT_RandomVectorComponent {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
};

struct C_OP_InheritFromParentParticles {
    static constexpr std::size_t size = 0x1f0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
};

struct C_INIT_SetVectorAttributeToVectorExpression {
    static constexpr std::size_t size = 0x1190;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x8]; // 0x1e8 
    std::uint8_t _[0x6d8]; // 0x1f0 
    std::uint8_t _[0x6d8]; // 0x8c8 
    std::uint8_t _[0x178]; // 0xfa0 
    std::uint8_t _[0x4]; // 0x1118 
    std::uint8_t _[0x4]; // 0x111c 
    std::uint8_t _[0x70]; // 0x1120 
};

struct C_OP_RemapTransformVisibilityToVector {
    static constexpr std::size_t size = 0x278;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
    std::uint8_t _[0x68]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x250 
    std::uint8_t _[0x4]; // 0x254 
    std::uint8_t _[0x4]; // 0x258 
    std::uint8_t _[0xc]; // 0x25c 
    std::uint8_t _[0xc]; // 0x268 
    std::uint8_t _[0x4]; // 0x274 
};

struct C_OP_DirectionBetweenVecsToVec {
    static constexpr std::size_t size = 0xf98;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
    std::uint8_t _[0x6d8]; // 0x1e8 
    std::uint8_t _[0x6d8]; // 0x8c0 
};

struct C_OP_MovementLoopInsideSphere {
    static constexpr std::size_t size = 0xa40;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x6d8]; // 0x360 
    std::uint8_t _[0x8]; // 0xa38 
};

struct C_OP_RenderSimpleModelCollection {
    static constexpr std::size_t size = 0x5b0;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x8]; // 0x230 
    std::uint8_t _[0x8]; // 0x238 
    std::uint8_t _[0x60]; // 0x240 
    std::uint8_t _[0x178]; // 0x2a0 
    std::uint8_t _[0x1]; // 0x418 
    std::uint8_t _[0x1]; // 0x419 
    std::uint8_t _[0x6]; // 0x41a 
    std::uint8_t _[0x178]; // 0x420 
    std::uint8_t _[0x18]; // 0x598 
};

struct C_OP_QuantizeCPComponent {
    static constexpr std::size_t size = 0x4e0;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x360 
    std::uint8_t _[0x4]; // 0x364 
    std::uint8_t _[0x178]; // 0x368 
};

struct C_OP_PlayEndCapWhenFinished {
    static constexpr std::size_t size = 0x1f0;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x1]; // 0x1e8 
    std::uint8_t _[0x7]; // 0x1e9 
};

struct C_INIT_InitFloatCollection {
    static constexpr std::size_t size = 0x368;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x8]; // 0x360 
};

struct CPathParameters {
    static constexpr std::size_t size = 0x40;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0xc]; // 0x18 
    std::uint8_t _[0xc]; // 0x24 
    std::uint8_t _[0x10]; // 0x30 
};

struct C_OP_RemapScalarEndCap {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
};

struct C_INIT_CreateFromPlaneCache {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0xc]; // 0x1e8 
    std::uint8_t _[0xd]; // 0x1f4 
    std::uint8_t _[0x7]; // 0x201 
};

struct C_OP_LazyCullCompareFloat {
    static constexpr std::size_t size = 0x648;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x178]; // 0x1e0 
    std::uint8_t _[0x178]; // 0x358 
    std::uint8_t _[0x178]; // 0x4d0 
};

struct C_OP_ControlPointToRadialScreenSpace {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0xc]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x8]; // 0x200 
};

struct C_OP_SpinUpdate {
    static constexpr std::size_t size = 0x1e0;
    std::uint8_t pad_0[0x1e0]; // 0x0
};

struct C_INIT_NormalOffset {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0xc]; // 0x1e8 
    std::uint8_t _[0xc]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x200 
    std::uint8_t _[0x1]; // 0x204 
    std::uint8_t _[0x3]; // 0x205 
};

struct C_OP_RemapDistanceToLineSegmentToVector {
    static constexpr std::size_t size = 0x218;
    std::uint8_t pad_0[0x1f8]; // 0x0
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0xc]; // 0x1fc 
    std::uint8_t _[0x10]; // 0x208 
};

struct C_OP_RenderAsModels {
    static constexpr std::size_t size = 0x268;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x1c]; // 0x230 
    std::uint8_t _[0x4]; // 0x24c 
    std::uint8_t _[0x1]; // 0x250 
    std::uint8_t _[0x3]; // 0x251 
    std::uint8_t _[0x4]; // 0x254 
    std::uint8_t _[0x4]; // 0x258 
    std::uint8_t _[0x4]; // 0x25c 
    std::uint8_t _[0x8]; // 0x260 
};

struct C_INIT_CreationNoise {
    static constexpr std::size_t size = 0x218;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x1]; // 0x1ec 
    std::uint8_t _[0x3]; // 0x1ed 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x4]; // 0x200 
    std::uint8_t _[0xc]; // 0x204 
    std::uint8_t _[0x8]; // 0x210 
};

struct C_OP_Spin {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0x1f8]; // 0x0
};

struct C_OP_GameLiquidSpill {
    static constexpr std::size_t size = 0x6a0;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x178]; // 0x230 
    std::uint8_t _[0x178]; // 0x3a8 
    std::uint8_t _[0x178]; // 0x520 
    std::uint8_t _[0x4]; // 0x698 
    std::uint8_t _[0x4]; // 0x69c 
};

struct C_OP_InstantaneousEmitter {
    static constexpr std::size_t size = 0x668;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x360 
    std::uint8_t _[0x4]; // 0x4d8 
    std::uint8_t _[0x4]; // 0x4dc 
    std::uint8_t _[0x178]; // 0x4e0 
    std::uint8_t _[0x4]; // 0x658 
    std::uint8_t _[0x4]; // 0x65c 
    std::uint8_t _[0x8]; // 0x660 
};

struct C_OP_ConstrainLineLength {
    static constexpr std::size_t size = 0x1e8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
};

struct C_INIT_LifespanFromVelocity {
    static constexpr std::size_t size = 0x2a0;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0xc]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x8]; // 0x200 
    std::uint8_t _[0x80]; // 0x208 
    std::uint8_t _[0x10]; // 0x288 
    std::uint8_t _[0x8]; // 0x298 
};

struct CBaseTrailRenderer {
    static constexpr std::size_t size = 0x3358;
    std::uint8_t pad_0[0x2ed8]; // 0x0
    std::uint8_t _[0x4]; // 0x2ed8 
    std::uint8_t _[0x4]; // 0x2edc 
    std::uint8_t _[0x4]; // 0x2ee0 
    std::uint8_t _[0x4]; // 0x2ee4 
    std::uint8_t _[0x178]; // 0x2ee8 
    std::uint8_t _[0x178]; // 0x3060 
    std::uint8_t _[0x178]; // 0x31d8 
    std::uint8_t _[0x8]; // 0x3350 
};

struct C_INIT_VelocityFromCP {
    static constexpr std::size_t size = 0x930;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x6d8]; // 0x1e8 
    std::uint8_t _[0x68]; // 0x8c0 
    std::uint8_t _[0x4]; // 0x928 
    std::uint8_t _[0x4]; // 0x92c 
};

struct C_OP_SetControlPointOrientation {
    static constexpr std::size_t size = 0x388;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x2]; // 0x1e8 
    std::uint8_t _[0x1]; // 0x1ea 
    std::uint8_t _[0x1]; // 0x1eb 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0xc]; // 0x1f4 
    std::uint8_t _[0x10]; // 0x200 
    std::uint8_t _[0x178]; // 0x210 
};

struct C_OP_MovementSkinnedPositionFromCPSnapshot {
    static constexpr std::size_t size = 0x950;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x1]; // 0x1f0 
    std::uint8_t _[0x3]; // 0x1f1 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x178]; // 0x1f8 
    std::uint8_t _[0x178]; // 0x370 
    std::uint8_t _[0x178]; // 0x4e8 
    std::uint8_t _[0x178]; // 0x660 
    std::uint8_t _[0x178]; // 0x7d8 
};

struct C_OP_MultiSegmentDisplaySnapshotGenerator {
    static constexpr std::size_t size = 0x1a18;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x8]; // 0x1f0 
    std::uint8_t _[0x8]; // 0x1f8 
    std::uint8_t _[0x178]; // 0x200 
    std::uint8_t _[0x178]; // 0x378 
    std::uint8_t _[0x18]; // 0x4f0 
    std::uint8_t _[0x6d8]; // 0x508 
    std::uint8_t _[0x6d8]; // 0xbe0 
    std::uint8_t _[0x178]; // 0x12b8 
    std::uint8_t _[0x178]; // 0x1430 
    std::uint8_t _[0x178]; // 0x15a8 
    std::uint8_t _[0x178]; // 0x1720 
    std::uint8_t _[0x8]; // 0x1898 
    std::uint8_t _[0x178]; // 0x18a0 
};

struct C_OP_OscillateVector {
    static constexpr std::size_t size = 0x690;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0xc]; // 0x1e0 
    std::uint8_t _[0xc]; // 0x1ec 
    std::uint8_t _[0xc]; // 0x1f8 
    std::uint8_t _[0xc]; // 0x204 
    std::uint8_t _[0x4]; // 0x210 
    std::uint8_t _[0x1]; // 0x214 
    std::uint8_t _[0x1]; // 0x215 
    std::uint8_t _[0x2]; // 0x216 
    std::uint8_t _[0x4]; // 0x218 
    std::uint8_t _[0x4]; // 0x21c 
    std::uint8_t _[0x4]; // 0x220 
    std::uint8_t _[0x4]; // 0x224 
    std::uint8_t _[0x178]; // 0x228 
    std::uint8_t _[0x178]; // 0x3a0 
    std::uint8_t _[0x178]; // 0x518 
};

struct C_OP_PositionLock {
    static constexpr std::size_t size = 0xad0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x68]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x248 
    std::uint8_t _[0x4]; // 0x24c 
    std::uint8_t _[0x4]; // 0x250 
    std::uint8_t _[0x4]; // 0x254 
    std::uint8_t _[0x4]; // 0x258 
    std::uint8_t _[0x4]; // 0x25c 
    std::uint8_t _[0x8]; // 0x260 
    std::uint8_t _[0x178]; // 0x268 
    std::uint8_t _[0x4]; // 0x3e0 
    std::uint8_t _[0x4]; // 0x3e4 
    std::uint8_t _[0x8]; // 0x3e8 
    std::uint8_t _[0x6d8]; // 0x3f0 
    std::uint8_t _[0x4]; // 0xac8 
    std::uint8_t _[0x4]; // 0xacc 
};

struct C_OP_RenderVRHapticEvent {
    static constexpr std::size_t size = 0x3b8;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x4]; // 0x230 
    std::uint8_t _[0x4]; // 0x234 
    std::uint8_t _[0x8]; // 0x238 
    std::uint8_t _[0x178]; // 0x240 
};

struct C_OP_SetControlPointToImpactPoint {
    static constexpr std::size_t size = 0x410;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x8]; // 0x1f0 
    std::uint8_t _[0x178]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x370 
    std::uint8_t _[0x4]; // 0x374 
    std::uint8_t _[0xc]; // 0x378 
    std::uint8_t _[0x80]; // 0x384 
    std::uint8_t _[0x4]; // 0x404 
    std::uint8_t _[0x1]; // 0x408 
    std::uint8_t _[0x1]; // 0x409 
    std::uint8_t _[0x6]; // 0x40a 
};

struct C_OP_InterpolateRadius {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x3c]; // 0x1f4 
};

struct C_OP_ReinitializeScalarEndCap {
    static constexpr std::size_t size = 0x1f0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x8]; // 0x1e8 
};

struct C_OP_TurbulenceForce {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x1f0]; // 0x0
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0xc]; // 0x200 
    std::uint8_t _[0xc]; // 0x20c 
    std::uint8_t _[0xc]; // 0x218 
    std::uint8_t _[0xc]; // 0x224 
};

struct C_OP_RemapNamedModelElementOnceTimed {
    static constexpr std::size_t size = 0x240;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
    std::uint8_t _[0x18]; // 0x1e8 
    std::uint8_t _[0x18]; // 0x200 
    std::uint8_t _[0x18]; // 0x218 
    std::uint8_t _[0x1]; // 0x230 
    std::uint8_t _[0x3]; // 0x231 
    std::uint8_t _[0x4]; // 0x234 
    std::uint8_t _[0x4]; // 0x238 
    std::uint8_t _[0x4]; // 0x23c 
};

struct C_OP_SetControlPointToPlayer {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0xc]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x4]; // 0x200 
    std::uint8_t _[0x4]; // 0x204 
};

struct C_OP_EndCapTimedFreeze {
    static constexpr std::size_t size = 0x358;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x178]; // 0x1e0 
};

struct C_OP_RenderGpuImplicit {
    static constexpr std::size_t size = 0x6b8;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x4]; // 0x230 
    std::uint8_t _[0x4]; // 0x234 
    std::uint8_t _[0x8]; // 0x238 
    std::uint8_t _[0x178]; // 0x240 
    std::uint8_t _[0x178]; // 0x3b8 
    std::uint8_t _[0x178]; // 0x530 
    std::uint8_t _[0x8]; // 0x6a8 
    std::uint8_t _[0x8]; // 0x6b0 
};

struct C_OP_SetRandomControlPointPosition {
    static constexpr std::size_t size = 0x500;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x1]; // 0x1e8 
    std::uint8_t _[0x3]; // 0x1e9 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x8]; // 0x1f0 
    std::uint8_t _[0x178]; // 0x1f8 
    std::uint8_t _[0xc]; // 0x370 
    std::uint8_t _[0xc]; // 0x37c 
    std::uint8_t _[0x178]; // 0x388 
};

struct C_OP_RenderVolumetricEmitter {
    static constexpr std::size_t size = 0x2290;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x8]; // 0x230 
    std::uint8_t _[0x4]; // 0x238 
    std::uint8_t _[0x4]; // 0x23c 
    std::uint8_t _[0x8]; // 0x240 
    std::uint8_t _[0x6d8]; // 0x248 
    std::uint8_t _[0x6d8]; // 0x920 
    std::uint8_t _[0x6d8]; // 0xff8 
    std::uint8_t _[0x178]; // 0x16d0 
    std::uint8_t _[0x178]; // 0x1848 
    std::uint8_t _[0x178]; // 0x19c0 
    std::uint8_t _[0x178]; // 0x1b38 
    std::uint8_t _[0x178]; // 0x1cb0 
    std::uint8_t _[0x178]; // 0x1e28 
    std::uint8_t _[0x178]; // 0x1fa0 
    std::uint8_t _[0x178]; // 0x2118 
};

struct C_OP_RemapTransformVisibilityToScalar {
    static constexpr std::size_t size = 0x268;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
    std::uint8_t _[0x68]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x250 
    std::uint8_t _[0x4]; // 0x254 
    std::uint8_t _[0x4]; // 0x258 
    std::uint8_t _[0x4]; // 0x25c 
    std::uint8_t _[0x4]; // 0x260 
    std::uint8_t _[0x4]; // 0x264 
};

struct C_OP_RemapControlPointDirectionToVector {
    static constexpr std::size_t size = 0x1f0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x8]; // 0x1e8 
};

struct C_OP_ScreenSpacePositionOfTarget {
    static constexpr std::size_t size = 0xa40;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x6d8]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x8b8 
    std::uint8_t _[0x4]; // 0x8bc 
    std::uint8_t _[0x178]; // 0x8c0 
    std::uint8_t _[0x8]; // 0xa38 
};

struct CParticleFunctionOperator {
    static constexpr std::size_t size = 0x1e0;
    std::uint8_t pad_0[0x1e0]; // 0x0
};

struct C_OP_DragRelativeToPlane {
    static constexpr std::size_t size = 0xbb8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x178]; // 0x1e0 
    std::uint8_t _[0x178]; // 0x358 
    std::uint8_t _[0x8]; // 0x4d0 
    std::uint8_t _[0x6d8]; // 0x4d8 
    std::uint8_t _[0x8]; // 0xbb0 
};

struct C_OP_SetCPtoVector {
    static constexpr std::size_t size = 0x1e8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
};

struct C_INIT_RandomYaw {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x208]; // 0x0
};

struct C_OP_SnapshotRigidSkinToBones {
    static constexpr std::size_t size = 0x1e8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x1]; // 0x1e0 
    std::uint8_t _[0x3]; // 0x1e1 
    std::uint8_t _[0x4]; // 0x1e4 
};

struct C_OP_SetSingleControlPointPosition {
    static constexpr std::size_t size = 0x930;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x6d8]; // 0x1f0 
    std::uint8_t _[0x68]; // 0x8c8 
};

struct C_INIT_DistanceToNeighborCull {
    static constexpr std::size_t size = 0x668;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x8]; // 0x360 
    std::uint8_t _[0x178]; // 0x368 
    std::uint8_t _[0x8]; // 0x4e0 
    std::uint8_t _[0x178]; // 0x4e8 
    std::uint8_t _[0x4]; // 0x660 
    std::uint8_t _[0x4]; // 0x664 
};

struct C_OP_RemapCPtoScalar {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x4]; // 0x200 
    std::uint8_t _[0x4]; // 0x204 
    std::uint8_t _[0x8]; // 0x208 
};

struct CParticleFunctionRenderer {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x48]; // 0x1e0 
    std::uint8_t _[0x8]; // 0x228 
};

struct CParticleSystemDefinition {
    static constexpr std::size_t size = 0x590;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x18]; // 0x28 
    std::uint8_t _[0x18]; // 0x40 
    std::uint8_t _[0x18]; // 0x58 
    std::uint8_t _[0x18]; // 0x70 
    std::uint8_t _[0x18]; // 0x88 
    std::uint8_t _[0x18]; // 0xa0 
    std::uint8_t _[0xc0]; // 0xb8 
    std::uint8_t _[0xe0]; // 0x178 
    std::uint8_t _[0x4]; // 0x258 
    std::uint8_t _[0x4]; // 0x25c 
    std::uint8_t _[0x4]; // 0x260 
    std::uint8_t _[0xc]; // 0x264 
    std::uint8_t _[0xc]; // 0x270 
    std::uint8_t _[0x4]; // 0x27c 
    std::uint8_t _[0x4]; // 0x280 
    std::uint8_t _[0x1]; // 0x284 
    std::uint8_t _[0x3]; // 0x285 
    std::uint8_t _[0x8]; // 0x288 
    std::uint8_t _[0x18]; // 0x290 
    std::uint8_t _[0x4]; // 0x2a8 
    std::uint8_t _[0xc]; // 0x2ac 
    std::uint8_t _[0x4]; // 0x2b8 
    std::uint8_t _[0x4]; // 0x2bc 
    std::uint8_t _[0x4]; // 0x2c0 
    std::uint8_t _[0x4]; // 0x2c4 
    std::uint8_t _[0x4]; // 0x2c8 
    std::uint8_t _[0x4]; // 0x2cc 
    std::uint8_t _[0x8]; // 0x2d0 
    std::uint8_t _[0x8]; // 0x2d8 
    std::uint8_t _[0x8]; // 0x2e0 
    std::uint8_t _[0x4]; // 0x2e8 
    std::uint8_t _[0x4]; // 0x2ec 
    std::uint8_t _[0x8]; // 0x2f0 
    std::uint8_t _[0x8]; // 0x2f8 
    std::uint8_t _[0x8]; // 0x300 
    std::uint8_t _[0x8]; // 0x308 
    std::uint8_t _[0x8]; // 0x310 
    std::uint8_t _[0x4]; // 0x318 
    std::uint8_t _[0x4]; // 0x31c 
    std::uint8_t _[0x4]; // 0x320 
    std::uint8_t _[0x4]; // 0x324 
    std::uint8_t _[0x4]; // 0x328 
    std::uint8_t _[0x4]; // 0x32c 
    std::uint8_t _[0x4]; // 0x330 
    std::uint8_t _[0x4]; // 0x334 
    std::uint8_t _[0x4]; // 0x338 
    std::uint8_t _[0x4]; // 0x33c 
    std::uint8_t _[0x4]; // 0x340 
    std::uint8_t _[0x4]; // 0x344 
    std::uint8_t _[0x4]; // 0x348 
    std::uint8_t _[0x4]; // 0x34c 
    std::uint8_t _[0x4]; // 0x350 
    std::uint8_t _[0x4]; // 0x354 
    std::uint8_t _[0x1]; // 0x358 
    std::uint8_t _[0x1]; // 0x359 
    std::uint8_t _[0x1]; // 0x35a 
    std::uint8_t _[0x1]; // 0x35b 
    std::uint8_t _[0x4]; // 0x35c 
    std::uint8_t _[0x8]; // 0x360 
    std::uint8_t _[0x8]; // 0x368 
    std::uint8_t _[0x4]; // 0x370 
    std::uint8_t _[0x4]; // 0x374 
    std::uint8_t _[0x48]; // 0x378 
    std::uint8_t _[0x1d0]; // 0x3c0 
};

struct C_OP_RemapNamedModelMeshGroupEndCap {
    static constexpr std::size_t size = 0x240;
    std::uint8_t pad_0[0x240]; // 0x0
};

struct C_OP_PercentageBetweenTransformsVector {
    static constexpr std::size_t size = 0x2e0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0xc]; // 0x1ec 
    std::uint8_t _[0x10]; // 0x1f8 
    std::uint8_t _[0x68]; // 0x208 
    std::uint8_t _[0x68]; // 0x270 
    std::uint8_t _[0x4]; // 0x2d8 
    std::uint8_t _[0x1]; // 0x2dc 
    std::uint8_t _[0x3]; // 0x2dd 
};

struct C_OP_RenderScreenVelocityRotate {
    static constexpr std::size_t size = 0x238;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x4]; // 0x230 
    std::uint8_t _[0x4]; // 0x234 
};

struct C_OP_UpdateLightSource {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
};

struct C_INIT_CreateWithinBox {
    static constexpr std::size_t size = 0xfb0;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x6d8]; // 0x1e8 
    std::uint8_t _[0x6d8]; // 0x8c0 
    std::uint8_t _[0x4]; // 0xf98 
    std::uint8_t _[0x4]; // 0xf9c 
    std::uint8_t _[0x8]; // 0xfa0 
    std::uint8_t _[0x8]; // 0xfa8 
};

struct C_OP_ChooseRandomChildrenInGroup {
    static constexpr std::size_t size = 0x368;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x8]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x1f0 
};

struct C_OP_ControlpointLight {
    static constexpr std::size_t size = 0x6f0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x490]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x670 
    std::uint8_t _[0x4]; // 0x674 
    std::uint8_t _[0x4]; // 0x678 
    std::uint8_t _[0x4]; // 0x67c 
    std::uint8_t _[0xc]; // 0x680 
    std::uint8_t _[0xc]; // 0x68c 
    std::uint8_t _[0xc]; // 0x698 
    std::uint8_t _[0xc]; // 0x6a4 
    std::uint8_t _[0x4]; // 0x6b0 
    std::uint8_t _[0x4]; // 0x6b4 
    std::uint8_t _[0x4]; // 0x6b8 
    std::uint8_t _[0x4]; // 0x6bc 
    std::uint8_t _[0x4]; // 0x6c0 
    std::uint8_t _[0x4]; // 0x6c4 
    std::uint8_t _[0x4]; // 0x6c8 
    std::uint8_t _[0x4]; // 0x6cc 
    std::uint8_t _[0x4]; // 0x6d0 
    std::uint8_t _[0x4]; // 0x6d4 
    std::uint8_t _[0x4]; // 0x6d8 
    std::uint8_t _[0x4]; // 0x6dc 
    std::uint8_t _[0x1]; // 0x6e0 
    std::uint8_t _[0x1]; // 0x6e1 
    std::uint8_t _[0x1]; // 0x6e2 
    std::uint8_t _[0x1]; // 0x6e3 
    std::uint8_t _[0x1]; // 0x6e4 
    std::uint8_t _[0x1]; // 0x6e5 
    std::uint8_t _[0x1]; // 0x6e6 
    std::uint8_t _[0x1]; // 0x6e7 
    std::uint8_t _[0x1]; // 0x6e8 
    std::uint8_t _[0x5]; // 0x6e9 
    std::uint8_t _[0x1]; // 0x6ee 
    std::uint8_t _[0x1]; // 0x6ef 
};

struct C_OP_VectorFieldSnapshot {
    static constexpr std::size_t size = 0xa50;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x8]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x1f0 
    std::uint8_t _[0x6d8]; // 0x368 
    std::uint8_t _[0x4]; // 0xa40 
    std::uint8_t _[0x1]; // 0xa44 
    std::uint8_t _[0x3]; // 0xa45 
    std::uint8_t _[0x8]; // 0xa48 
};

struct C_OP_CylindricalDistanceToTransform {
    static constexpr std::size_t size = 0x8a0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x360 
    std::uint8_t _[0x178]; // 0x4d8 
    std::uint8_t _[0x178]; // 0x650 
    std::uint8_t _[0x68]; // 0x7c8 
    std::uint8_t _[0x68]; // 0x830 
    std::uint8_t _[0x4]; // 0x898 
    std::uint8_t _[0x1]; // 0x89c 
    std::uint8_t _[0x1]; // 0x89d 
    std::uint8_t _[0x2]; // 0x89e 
};

struct C_INIT_PositionPlaceOnGround {
    static constexpr std::size_t size = 0xc68;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x360 
    std::uint8_t _[0x6d8]; // 0x4d8 
    std::uint8_t _[0x80]; // 0xbb0 
    std::uint8_t _[0x10]; // 0xc30 
    std::uint8_t _[0x4]; // 0xc40 
    std::uint8_t _[0x4]; // 0xc44 
    std::uint8_t _[0x4]; // 0xc48 
    std::uint8_t _[0x1]; // 0xc4c 
    std::uint8_t _[0x3]; // 0xc4d 
    std::uint8_t _[0x4]; // 0xc50 
    std::uint8_t _[0x4]; // 0xc54 
    std::uint8_t _[0x4]; // 0xc58 
    std::uint8_t _[0x4]; // 0xc5c 
    std::uint8_t _[0x8]; // 0xc60 
};

struct C_INIT_RandomScalar {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
};

struct C_OP_RenderPostProcessing {
    static constexpr std::size_t size = 0x3b8;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x178]; // 0x230 
    std::uint8_t _[0x8]; // 0x3a8 
    std::uint8_t _[0x8]; // 0x3b0 
};

struct C_OP_WorldTraceConstraint {
    static constexpr std::size_t size = 0xa08;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0xc]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x80]; // 0x1fc 
    std::uint8_t _[0x1]; // 0x27c 
    std::uint8_t _[0x1]; // 0x27d 
    std::uint8_t _[0x2]; // 0x27e 
    std::uint8_t _[0x4]; // 0x280 
    std::uint8_t _[0x4]; // 0x284 
    std::uint8_t _[0x4]; // 0x288 
    std::uint8_t _[0x4]; // 0x28c 
    std::uint8_t _[0x4]; // 0x290 
    std::uint8_t _[0x4]; // 0x294 
    std::uint8_t _[0x178]; // 0x298 
    std::uint8_t _[0x178]; // 0x410 
    std::uint8_t _[0x178]; // 0x588 
    std::uint8_t _[0x178]; // 0x700 
    std::uint8_t _[0x1]; // 0x878 
    std::uint8_t _[0x3]; // 0x879 
    std::uint8_t _[0x4]; // 0x87c 
    std::uint8_t _[0x1]; // 0x880 
    std::uint8_t _[0x3]; // 0x881 
    std::uint8_t _[0x4]; // 0x884 
    std::uint8_t _[0x178]; // 0x888 
    std::uint8_t _[0x4]; // 0xa00 
    std::uint8_t _[0x4]; // 0xa04 
};

struct C_OP_RenderBlobs {
    static constexpr std::size_t size = 0x6e0;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x178]; // 0x230 
    std::uint8_t _[0x178]; // 0x3a8 
    std::uint8_t _[0x178]; // 0x520 
    std::uint8_t _[0x4]; // 0x698 
    std::uint8_t _[0x4]; // 0x69c 
    std::uint8_t _[0x8]; // 0x6a0 
    std::uint8_t _[0x30]; // 0x6a8 
    std::uint8_t _[0x8]; // 0x6d8 
};

struct C_OP_OscillateScalar {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x1]; // 0x1f4 
    std::uint8_t _[0x3]; // 0x1f5 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x4]; // 0x200 
    std::uint8_t _[0x4]; // 0x204 
    std::uint8_t _[0x4]; // 0x208 
    std::uint8_t _[0x4]; // 0x20c 
};

struct C_OP_FadeOut {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x34]; // 0x1ec 
    std::uint8_t _[0x1]; // 0x220 
    std::uint8_t _[0xf]; // 0x221 
};

struct C_OP_WaterImpulseRenderer {
    static constexpr std::size_t size = 0x1068;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x6d8]; // 0x230 
    std::uint8_t _[0x178]; // 0x908 
    std::uint8_t _[0x178]; // 0xa80 
    std::uint8_t _[0x178]; // 0xbf8 
    std::uint8_t _[0x178]; // 0xd70 
    std::uint8_t _[0x178]; // 0xee8 
    std::uint8_t _[0x4]; // 0x1060 
    std::uint8_t _[0x4]; // 0x1064 
};

struct C_INIT_RandomSequence {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x1]; // 0x1f0 
    std::uint8_t _[0x7]; // 0x1f1 
    std::uint8_t _[0x38]; // 0x1f8 
};

struct C_OP_RampScalarSplineSimple {
    static constexpr std::size_t size = 0x220;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x28]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x210 
    std::uint8_t _[0xc]; // 0x214 
};

struct C_INIT_DistanceCull {
    static constexpr std::size_t size = 0x370;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x8]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x1f0 
    std::uint8_t _[0x8]; // 0x368 
};

struct C_OP_CollideWithParentParticles {
    static constexpr std::size_t size = 0x4d0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x178]; // 0x1e0 
    std::uint8_t _[0x178]; // 0x358 
};

struct C_INIT_InitFromVectorFieldSnapshot {
    static constexpr std::size_t size = 0x8d0;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x6d8]; // 0x1f8 
};

struct C_OP_SetVectorAttributeToVectorExpression {
    static constexpr std::size_t size = 0x1180;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
    std::uint8_t _[0x6d8]; // 0x1e8 
    std::uint8_t _[0x6d8]; // 0x8c0 
    std::uint8_t _[0x178]; // 0xf98 
    std::uint8_t _[0x4]; // 0x1110 
    std::uint8_t _[0x4]; // 0x1114 
    std::uint8_t _[0x68]; // 0x1118 
};

struct C_INIT_AddVectorToVector {
    static constexpr std::size_t size = 0x220;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0xc]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0xc]; // 0x1fc 
    std::uint8_t _[0xc]; // 0x208 
    std::uint8_t _[0xc]; // 0x214 
};

struct C_INIT_RemapInitialVisibilityScalar {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1ec]; // 0x0
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
};

struct C_OP_RemapTransformOrientationToYaw {
    static constexpr std::size_t size = 0x258;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x68]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x248 
    std::uint8_t _[0x4]; // 0x24c 
    std::uint8_t _[0x8]; // 0x250 
};

struct C_OP_RenderStatusEffect {
    static constexpr std::size_t size = 0x268;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x8]; // 0x230 
    std::uint8_t _[0x8]; // 0x238 
    std::uint8_t _[0x8]; // 0x240 
    std::uint8_t _[0x8]; // 0x248 
    std::uint8_t _[0x8]; // 0x250 
    std::uint8_t _[0x8]; // 0x258 
    std::uint8_t _[0x8]; // 0x260 
};

struct C_OP_RandomForce {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1f0]; // 0x0
    std::uint8_t _[0xc]; // 0x1f0 
    std::uint8_t _[0xc]; // 0x1fc 
};

struct C_OP_RemapParticleCountOnScalarEndCap {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x8]; // 0x1f8 
};

struct ParticlePreviewState_t {
    static constexpr std::size_t size = 0x70;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x18]; // 0x30 
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x1]; // 0x50 
    std::uint8_t _[0x1]; // 0x51 
    std::uint8_t _[0x1]; // 0x52 
    std::uint8_t _[0x1]; // 0x53 
    std::uint8_t _[0x1]; // 0x54 
    std::uint8_t _[0x3]; // 0x55 
    std::uint8_t _[0xc]; // 0x58 
    std::uint8_t _[0xc]; // 0x64 
};

struct C_OP_LocalAccelerationForce {
    static constexpr std::size_t size = 0x8d0;
    std::uint8_t pad_0[0x1f0]; // 0x0
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x6d8]; // 0x1f8 
};

struct C_OP_ModelCull {
    static constexpr std::size_t size = 0x268;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x1]; // 0x1e4 
    std::uint8_t _[0x1]; // 0x1e5 
    std::uint8_t _[0x1]; // 0x1e6 
    std::uint8_t _[0x81]; // 0x1e7 
};

struct C_OP_SetFloat {
    static constexpr std::size_t size = 0x510;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x178]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x358 
    std::uint8_t _[0x4]; // 0x35c 
    std::uint8_t _[0x1b0]; // 0x360 
};

struct C_INIT_RemapTransformToVector {
    static constexpr std::size_t size = 0x308;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0xc]; // 0x1ec 
    std::uint8_t _[0xc]; // 0x1f8 
    std::uint8_t _[0xc]; // 0x204 
    std::uint8_t _[0x10]; // 0x210 
    std::uint8_t _[0x68]; // 0x220 
    std::uint8_t _[0x68]; // 0x288 
    std::uint8_t _[0x4]; // 0x2f0 
    std::uint8_t _[0x4]; // 0x2f4 
    std::uint8_t _[0x4]; // 0x2f8 
    std::uint8_t _[0x1]; // 0x2fc 
    std::uint8_t _[0x3]; // 0x2fd 
    std::uint8_t _[0x8]; // 0x300 
};

struct C_OP_ScreenSpaceDistanceToEdge {
    static constexpr std::size_t size = 0x500;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x360 
    std::uint8_t _[0x28]; // 0x4d8 
};

struct C_OP_RenderStatusEffectTf {
    static constexpr std::size_t size = 0x268;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x8]; // 0x230 
    std::uint8_t _[0x8]; // 0x238 
    std::uint8_t _[0x8]; // 0x240 
    std::uint8_t _[0x8]; // 0x248 
    std::uint8_t _[0x8]; // 0x250 
    std::uint8_t _[0x8]; // 0x258 
    std::uint8_t _[0x8]; // 0x260 
};

struct C_OP_RemapDistanceToLineSegmentToScalar {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1f8]; // 0x0
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x8]; // 0x200 
};

struct C_OP_RemapVectortoCP {
    static constexpr std::size_t size = 0x1f0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x8]; // 0x1e8 
};

struct C_OP_SetFromCPSnapshot {
    static constexpr std::size_t size = 0x678;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
    std::uint8_t _[0x8]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x1]; // 0x1fc 
    std::uint8_t _[0x3]; // 0x1fd 
    std::uint8_t _[0x8]; // 0x200 
    std::uint8_t _[0x178]; // 0x208 
    std::uint8_t _[0x178]; // 0x380 
    std::uint8_t _[0x178]; // 0x4f8 
    std::uint8_t _[0x1]; // 0x670 
    std::uint8_t _[0x7]; // 0x671 
};

struct C_OP_DistanceBetweenCPsToCP {
    static constexpr std::size_t size = 0x2a0;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x4]; // 0x200 
    std::uint8_t _[0x4]; // 0x204 
    std::uint8_t _[0x4]; // 0x208 
    std::uint8_t _[0x4]; // 0x20c 
    std::uint8_t _[0x4]; // 0x210 
    std::uint8_t _[0x1]; // 0x214 
    std::uint8_t _[0x83]; // 0x215 
    std::uint8_t _[0x4]; // 0x298 
    std::uint8_t _[0x4]; // 0x29c 
};

struct C_OP_SetControlPointToHand {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0xc]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1fc 
};

struct C_OP_ConstrainDistanceToPath {
    static constexpr std::size_t size = 0x240;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x40]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x230 
    std::uint8_t _[0x4]; // 0x234 
    std::uint8_t _[0x8]; // 0x238 
};

struct C_OP_DistanceCull {
    static constexpr std::size_t size = 0x370;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0xc]; // 0x1e4 
    std::uint8_t _[0x178]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x368 
    std::uint8_t _[0x4]; // 0x36c 
};

struct C_INIT_CreateAlongPath {
    static constexpr std::size_t size = 0x540;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x180]; // 0x360 
    std::uint8_t _[0x40]; // 0x4e0 
    std::uint8_t _[0x4]; // 0x520 
    std::uint8_t _[0xc]; // 0x524 
    std::uint8_t _[0x10]; // 0x530 
};

struct C_OP_GameDecalRenderer {
    static constexpr std::size_t size = 0x1cc0;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x8]; // 0x230 
    std::uint8_t _[0x8]; // 0x238 
    std::uint8_t _[0x8]; // 0x240 
    std::uint8_t _[0x8]; // 0x248 
    std::uint8_t _[0x6d8]; // 0x250 
    std::uint8_t _[0x6d8]; // 0x928 
    std::uint8_t _[0x178]; // 0x1000 
    std::uint8_t _[0x178]; // 0x1178 
    std::uint8_t _[0x178]; // 0x12f0 
    std::uint8_t _[0x178]; // 0x1468 
    std::uint8_t _[0x6d8]; // 0x15e0 
    std::uint8_t _[0x1]; // 0x1cb8 
    std::uint8_t _[0x1]; // 0x1cb9 
    std::uint8_t _[0x1]; // 0x1cba 
    std::uint8_t _[0x1]; // 0x1cbb 
    std::uint8_t _[0x4]; // 0x1cbc 
};

struct C_OP_SetControlPointsToModelParticles {
    static constexpr std::size_t size = 0x2f0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x80]; // 0x1e0 
    std::uint8_t _[0x80]; // 0x260 
    std::uint8_t _[0x4]; // 0x2e0 
    std::uint8_t _[0x4]; // 0x2e4 
    std::uint8_t _[0x4]; // 0x2e8 
    std::uint8_t _[0x1]; // 0x2ec 
    std::uint8_t _[0x3]; // 0x2ed 
};

struct C_OP_ColorInterpolateRandom {
    static constexpr std::size_t size = 0x220;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x1c]; // 0x1e0 
    std::uint8_t _[0x10]; // 0x1fc 
    std::uint8_t _[0x4]; // 0x20c 
    std::uint8_t _[0x4]; // 0x210 
    std::uint8_t _[0x4]; // 0x214 
    std::uint8_t _[0x8]; // 0x218 
};

struct C_INIT_RemapNamedModelSequenceToScalar {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x230]; // 0x0
};

struct C_OP_RenderLights {
    static constexpr std::size_t size = 0x258;
    std::uint8_t pad_0[0x238]; // 0x0
    std::uint8_t _[0x4]; // 0x238 
    std::uint8_t _[0x4]; // 0x23c 
    std::uint8_t _[0x4]; // 0x240 
    std::uint8_t _[0x4]; // 0x244 
    std::uint8_t _[0x4]; // 0x248 
    std::uint8_t _[0x4]; // 0x24c 
    std::uint8_t _[0x8]; // 0x250 
};

struct C_OP_DecayClampCount {
    static constexpr std::size_t size = 0x358;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x178]; // 0x1e0 
};

struct CRandomNumberGeneratorParameters {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct C_INIT_ColorLitPerParticle {
    static constexpr std::size_t size = 0x220;
    std::uint8_t pad_0[0x200]; // 0x0
    std::uint8_t _[0x4]; // 0x200 
    std::uint8_t _[0x4]; // 0x204 
    std::uint8_t _[0x4]; // 0x208 
    std::uint8_t _[0x4]; // 0x20c 
    std::uint8_t _[0x4]; // 0x210 
    std::uint8_t _[0x4]; // 0x214 
    std::uint8_t _[0x8]; // 0x218 
};

struct C_OP_RenderPoints {
    static constexpr std::size_t size = 0x238;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x8]; // 0x230 
};

struct C_INIT_SetAttributeToScalarExpression {
    static constexpr std::size_t size = 0x680;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x8]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x1f0 
    std::uint8_t _[0x178]; // 0x368 
    std::uint8_t _[0x178]; // 0x4e0 
    std::uint8_t _[0x4]; // 0x658 
    std::uint8_t _[0x24]; // 0x65c 
};

struct C_INIT_CreateOnGrid {
    static constexpr std::size_t size = 0xac0;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x360 
    std::uint8_t _[0x178]; // 0x4d8 
    std::uint8_t _[0x178]; // 0x650 
    std::uint8_t _[0x178]; // 0x7c8 
    std::uint8_t _[0x178]; // 0x940 
    std::uint8_t _[0x4]; // 0xab8 
    std::uint8_t _[0x1]; // 0xabc 
    std::uint8_t _[0x1]; // 0xabd 
    std::uint8_t _[0x2]; // 0xabe 
};

struct C_OP_RampCPLinearRandom {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0xc]; // 0x1ec 
    std::uint8_t _[0x10]; // 0x1f8 
};

struct C_OP_VelocityMatchingForce {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
};

struct C_INIT_RandomAlphaWindowThreshold {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x8]; // 0x1f0 
};

struct C_INIT_CreateOnModelAtHeight {
    static constexpr std::size_t size = 0x1498;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x1]; // 0x1e8 
    std::uint8_t _[0x3]; // 0x1e9 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x178]; // 0x1f8 
    std::uint8_t _[0x6d8]; // 0x370 
    std::uint8_t _[0x6d8]; // 0xa48 
    std::uint8_t _[0x4]; // 0x1120 
    std::uint8_t _[0x1]; // 0x1124 
    std::uint8_t _[0x1]; // 0x1125 
    std::uint8_t _[0x82]; // 0x1126 
    std::uint8_t _[0x178]; // 0x11a8 
    std::uint8_t _[0x178]; // 0x1320 
};

struct C_OP_ModelSurfaceSnapshotGenerator {
    static constexpr std::size_t size = 0x838;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x8]; // 0x1e8 
    std::uint8_t _[0x60]; // 0x1f0 
    std::uint8_t _[0x178]; // 0x250 
    std::uint8_t _[0x178]; // 0x3c8 
    std::uint8_t _[0x178]; // 0x540 
    std::uint8_t _[0x178]; // 0x6b8 
    std::uint8_t _[0x1]; // 0x830 
    std::uint8_t _[0x1]; // 0x831 
    std::uint8_t _[0x1]; // 0x832 
    std::uint8_t _[0x5]; // 0x833 
};

struct C_OP_RestartAfterDuration {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
};

struct C_OP_RenderClothForce {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x230]; // 0x0
};

struct C_OP_RemapVisibilityScalar {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x8]; // 0x1f8 
};

struct C_INIT_CreateSequentialPathV2 {
    static constexpr std::size_t size = 0x530;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x360 
    std::uint8_t _[0x1]; // 0x4d8 
    std::uint8_t _[0x1]; // 0x4d9 
    std::uint8_t _[0x6]; // 0x4da 
    std::uint8_t _[0x50]; // 0x4e0 
};

struct VecInputMaterialVariable_t {
    static constexpr std::size_t size = 0x6e0;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x6d8]; // 0x8 
};

struct C_INIT_RemapInitialDirectionToTransformToVector {
    static constexpr std::size_t size = 0x270;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x68]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x250 
    std::uint8_t _[0x4]; // 0x254 
    std::uint8_t _[0x4]; // 0x258 
    std::uint8_t _[0xc]; // 0x25c 
    std::uint8_t _[0x8]; // 0x268 
};

struct C_OP_LockToSavedSequentialPathV2 {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x8]; // 0x1e8 
    std::uint8_t _[0x40]; // 0x1f0 
};

struct C_OP_NormalLock {
    static constexpr std::size_t size = 0x1e8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
};

struct C_INIT_RemapTransformOrientationToRotations {
    static constexpr std::size_t size = 0x260;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x68]; // 0x1e8 
    std::uint8_t _[0xc]; // 0x250 
    std::uint8_t _[0x1]; // 0x25c 
    std::uint8_t _[0x3]; // 0x25d 
};

struct C_OP_Cull {
    static constexpr std::size_t size = 0x1f0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
};

struct C_INIT_RandomYawFlip {
    static constexpr std::size_t size = 0x1f0;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x8]; // 0x1e8 
};

struct SequenceWeightedList_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct C_OP_ReadFromNeighboringParticle {
    static constexpr std::size_t size = 0x4e0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x8]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x1f0 
    std::uint8_t _[0x178]; // 0x368 
};

struct C_OP_RenderText {
    static constexpr std::size_t size = 0x240;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x8]; // 0x230 
    std::uint8_t _[0x8]; // 0x238 
};

struct C_OP_LerpToInitialPosition {
    static constexpr std::size_t size = 0xbb8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x8]; // 0x360 
    std::uint8_t _[0x178]; // 0x368 
    std::uint8_t _[0x6d8]; // 0x4e0 
};

struct C_INIT_RandomRotation {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x208]; // 0x0
};

struct C_OP_LerpEndCapVector {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0xc]; // 0x1e4 
    std::uint8_t _[0x8]; // 0x1f0 
};

struct C_OP_VelocityDecay {
    static constexpr std::size_t size = 0x1e8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
};

struct C_OP_SetCPOrientationToPointAtCP {
    static constexpr std::size_t size = 0x370;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x178]; // 0x1f0 
    std::uint8_t _[0x1]; // 0x368 
    std::uint8_t _[0x1]; // 0x369 
    std::uint8_t _[0x6]; // 0x36a 
};

struct C_OP_LockToPointList {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
    std::uint8_t _[0x18]; // 0x1e8 
    std::uint8_t _[0x1]; // 0x200 
    std::uint8_t _[0x3]; // 0x201 
    std::uint8_t _[0x4]; // 0x204 
};

struct C_INIT_CreateWithinCone {
    static constexpr std::size_t size = 0x840;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x68]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x250 
    std::uint8_t _[0x178]; // 0x3c8 
    std::uint8_t _[0x178]; // 0x540 
    std::uint8_t _[0x178]; // 0x6b8 
    std::uint8_t _[0x4]; // 0x830 
    std::uint8_t _[0xc]; // 0x834 
};

struct C_OP_MovementPlaceOnGround {
    static constexpr std::size_t size = 0xaf0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x178]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x358 
    std::uint8_t _[0x4]; // 0x35c 
    std::uint8_t _[0x6d8]; // 0x360 
    std::uint8_t _[0x4]; // 0xa38 
    std::uint8_t _[0x4]; // 0xa3c 
    std::uint8_t _[0x80]; // 0xa40 
    std::uint8_t _[0x4]; // 0xac0 
    std::uint8_t _[0x4]; // 0xac4 
    std::uint8_t _[0x4]; // 0xac8 
    std::uint8_t _[0xc]; // 0xacc 
    std::uint8_t _[0x4]; // 0xad8 
    std::uint8_t _[0x1]; // 0xadc 
    std::uint8_t _[0x3]; // 0xadd 
    std::uint8_t _[0x1]; // 0xae0 
    std::uint8_t _[0x3]; // 0xae1 
    std::uint8_t _[0x4]; // 0xae4 
    std::uint8_t _[0x8]; // 0xae8 
};

struct C_OP_SetCPOrientationToDirection {
    static constexpr std::size_t size = 0x1e8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
};

struct C_OP_RemapCrossProductOfTwoVectorsToVector {
    static constexpr std::size_t size = 0xf98;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x6d8]; // 0x1e0 
    std::uint8_t _[0x6d8]; // 0x8b8 
    std::uint8_t _[0x4]; // 0xf90 
    std::uint8_t _[0x4]; // 0xf94 
};

struct C_OP_RemapTransformOrientationToRotations {
    static constexpr std::size_t size = 0x258;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x68]; // 0x1e0 
    std::uint8_t _[0xc]; // 0x248 
    std::uint8_t _[0x1]; // 0x254 
    std::uint8_t _[0x3]; // 0x255 
};

struct C_INIT_RandomRotationSpeed {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x208]; // 0x0
};

struct C_OP_InheritFromParentParticlesV2 {
    static constexpr std::size_t size = 0x658;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x178]; // 0x1e0 
    std::uint8_t _[0x8]; // 0x358 
    std::uint8_t _[0x178]; // 0x360 
    std::uint8_t _[0x1]; // 0x4d8 
    std::uint8_t _[0x1]; // 0x4d9 
    std::uint8_t _[0x2]; // 0x4da 
    std::uint8_t _[0x4]; // 0x4dc 
    std::uint8_t _[0x178]; // 0x4e0 
};

struct C_INIT_RandomSecondSequence {
    static constexpr std::size_t size = 0x1f0;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
};

struct C_OP_SetFloatCollection {
    static constexpr std::size_t size = 0x500;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x178]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x358 
    std::uint8_t _[0x4]; // 0x35c 
    std::uint8_t _[0x1a0]; // 0x360 
};

struct PointDefinition_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0xc]; // 0x8 
};

struct C_OP_SetControlPointPositionToRandomActiveCP {
    static constexpr std::size_t size = 0x370;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x8]; // 0x1f0 
    std::uint8_t _[0x178]; // 0x1f8 
};

struct C_OP_Diffusion {
    static constexpr std::size_t size = 0x1f0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x8]; // 0x1e8 
};

struct C_INIT_AgeNoise {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x1]; // 0x1e8 
    std::uint8_t _[0x3]; // 0x1e9 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x10]; // 0x200 
};

struct C_OP_RemapVectorComponentToScalar {
    static constexpr std::size_t size = 0x1f0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x8]; // 0x1e8 
};

struct CGeneralRandomRotation {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0xc]; // 0x1fc 
};

struct C_OP_DistanceBetweenVecs {
    static constexpr std::size_t size = 0x1580;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
    std::uint8_t _[0x6d8]; // 0x1e8 
    std::uint8_t _[0x6d8]; // 0x8c0 
    std::uint8_t _[0x178]; // 0xf98 
    std::uint8_t _[0x178]; // 0x1110 
    std::uint8_t _[0x178]; // 0x1288 
    std::uint8_t _[0x178]; // 0x1400 
    std::uint8_t _[0x4]; // 0x1578 
    std::uint8_t _[0x4]; // 0x157c 
};

struct C_OP_DampenToCP {
    static constexpr std::size_t size = 0x1f0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x8]; // 0x1e8 
};

struct C_OP_CalculateVectorAttribute {
    static constexpr std::size_t size = 0x240;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0xc]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x14]; // 0x1fc 
    std::uint8_t _[0x4]; // 0x210 
    std::uint8_t _[0x14]; // 0x214 
    std::uint8_t _[0x4]; // 0x228 
    std::uint8_t _[0x4]; // 0x22c 
    std::uint8_t _[0x10]; // 0x230 
};

struct C_OP_LockToBone {
    static constexpr std::size_t size = 0xba0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x60]; // 0x1e0 
    std::uint8_t _[0x68]; // 0x240 
    std::uint8_t _[0x4]; // 0x2a8 
    std::uint8_t _[0x4]; // 0x2ac 
    std::uint8_t _[0x4]; // 0x2b0 
    std::uint8_t _[0x4]; // 0x2b4 
    std::uint8_t _[0x80]; // 0x2b8 
    std::uint8_t _[0x1]; // 0x338 
    std::uint8_t _[0x3]; // 0x339 
    std::uint8_t _[0x4]; // 0x33c 
    std::uint8_t _[0x4]; // 0x340 
    std::uint8_t _[0x4]; // 0x344 
    std::uint8_t _[0x8]; // 0x348 
    std::uint8_t _[0x6d8]; // 0x350 
    std::uint8_t _[0x178]; // 0xa28 
};

struct C_OP_RemapNamedModelBodyPartOnceTimed {
    static constexpr std::size_t size = 0x240;
    std::uint8_t pad_0[0x240]; // 0x0
};

struct C_OP_ScreenSpaceRotateTowardTarget {
    static constexpr std::size_t size = 0xbb0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x6d8]; // 0x1e0 
    std::uint8_t _[0x178]; // 0x8b8 
    std::uint8_t _[0x8]; // 0xa30 
    std::uint8_t _[0x178]; // 0xa38 
};

struct C_OP_MovementMaintainOffset {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0xc]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x8]; // 0x1f0 
};

struct C_INIT_CreateWithinCapsuleTransform {
    static constexpr std::size_t size = 0x1768;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x360 
    std::uint8_t _[0x178]; // 0x4d8 
    std::uint8_t _[0x68]; // 0x650 
    std::uint8_t _[0x178]; // 0x6b8 
    std::uint8_t _[0x178]; // 0x830 
    std::uint8_t _[0x8]; // 0x9a8 
    std::uint8_t _[0x6d8]; // 0x9b0 
    std::uint8_t _[0x6d8]; // 0x1088 
    std::uint8_t _[0x4]; // 0x1760 
    std::uint8_t _[0x4]; // 0x1764 
};

struct C_OP_SetVec {
    static constexpr std::size_t size = 0xa40;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x6d8]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x8b8 
    std::uint8_t _[0x4]; // 0x8bc 
    std::uint8_t _[0x178]; // 0x8c0 
    std::uint8_t _[0x8]; // 0xa38 
};

struct C_INIT_CreateFromParentParticles {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x1]; // 0x1f8 
    std::uint8_t _[0x7]; // 0x1f9 
};

struct C_INIT_CheckParticleForWater {
    static constexpr std::size_t size = 0x4e8;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x8]; // 0x360 
    std::uint8_t _[0x178]; // 0x368 
    std::uint8_t _[0x8]; // 0x4e0 
};

struct C_INIT_RandomNamedModelBodyPart {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x210]; // 0x0
};

struct C_OP_RenderOmni2Light {
    static constexpr std::size_t size = 0x2e88;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x4]; // 0x230 
    std::uint8_t _[0x4]; // 0x234 
    std::uint8_t _[0x6d8]; // 0x238 
    std::uint8_t _[0x8]; // 0x910 
    std::uint8_t _[0x8]; // 0x918 
    std::uint8_t _[0x178]; // 0x920 
    std::uint8_t _[0x8]; // 0xa98 
    std::uint8_t _[0x178]; // 0xaa0 
    std::uint8_t _[0x178]; // 0xc18 
    std::uint8_t _[0x1]; // 0xd90 
    std::uint8_t _[0x7]; // 0xd91 
    std::uint8_t _[0x178]; // 0xd98 
    std::uint8_t _[0x8]; // 0xf10 
    std::uint8_t _[0x178]; // 0xf18 
    std::uint8_t _[0x178]; // 0x1090 
    std::uint8_t _[0x8]; // 0x1208 
    std::uint8_t _[0x6d8]; // 0x1210 
    std::uint8_t _[0x6d8]; // 0x18e8 
    std::uint8_t _[0x178]; // 0x1fc0 
    std::uint8_t _[0x178]; // 0x2138 
    std::uint8_t _[0x178]; // 0x22b0 
    std::uint8_t _[0x178]; // 0x2428 
    std::uint8_t _[0x178]; // 0x25a0 
    std::uint8_t _[0x178]; // 0x2718 
    std::uint8_t _[0x178]; // 0x2890 
    std::uint8_t _[0x178]; // 0x2a08 
    std::uint8_t _[0x178]; // 0x2b80 
    std::uint8_t _[0x178]; // 0x2cf8 
    std::uint8_t _[0x8]; // 0x2e70 
    std::uint8_t _[0x10]; // 0x2e78 
};

struct C_OP_ConnectParentParticleToNearest {
    static constexpr std::size_t size = 0x4e0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x8]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x1f0 
    std::uint8_t _[0x178]; // 0x368 
};

struct CPAssignment_t {
    static constexpr std::size_t size = 0x6e8;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x6d8]; // 0x8 
    std::uint8_t _[0x8]; // 0x6e0 
};

struct C_INIT_RemapParticleCountToNamedModelBodyPartScalar {
    static constexpr std::size_t size = 0x238;
    std::uint8_t pad_0[0x238]; // 0x0
};

struct C_INIT_InitSkinnedPositionFromCPSnapshot {
    static constexpr std::size_t size = 0x398;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x1]; // 0x1f8 
    std::uint8_t _[0x1]; // 0x1f9 
    std::uint8_t _[0x2]; // 0x1fa 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x4]; // 0x200 
    std::uint8_t _[0x4]; // 0x204 
    std::uint8_t _[0x178]; // 0x208 
    std::uint8_t _[0x4]; // 0x380 
    std::uint8_t _[0x4]; // 0x384 
    std::uint8_t _[0x4]; // 0x388 
    std::uint8_t _[0x4]; // 0x38c 
    std::uint8_t _[0x4]; // 0x390 
    std::uint8_t _[0x1]; // 0x394 
    std::uint8_t _[0x1]; // 0x395 
    std::uint8_t _[0x2]; // 0x396 
};

struct C_OP_LagCompensation {
    static constexpr std::size_t size = 0x1f0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
};

struct C_OP_CollideWithSelf {
    static constexpr std::size_t size = 0x4d0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x178]; // 0x1e0 
    std::uint8_t _[0x178]; // 0x358 
};

struct C_OP_Noise {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
};

struct C_OP_FadeAndKillForTracers {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
};

struct C_OP_ColorAdjustHSL {
    static constexpr std::size_t size = 0x648;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x178]; // 0x1e0 
    std::uint8_t _[0x178]; // 0x358 
    std::uint8_t _[0x178]; // 0x4d0 
};

struct CParticleMassCalculationParameters {
    static constexpr std::size_t size = 0x470;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x178]; // 0x8 
    std::uint8_t _[0x178]; // 0x180 
    std::uint8_t _[0x178]; // 0x2f8 
};

struct C_OP_SequenceFromModel {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
};

struct C_OP_AlphaDecay {
    static constexpr std::size_t size = 0x1e8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
};

struct C_OP_RemapDensityGradientToVectorAttribute {
    static constexpr std::size_t size = 0x1e8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
};

struct C_INIT_InitVec {
    static constexpr std::size_t size = 0x8d0;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x6d8]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x8c0 
    std::uint8_t _[0x4]; // 0x8c4 
    std::uint8_t _[0x1]; // 0x8c8 
    std::uint8_t _[0x7]; // 0x8c9 
};

struct C_INIT_SetHitboxToModel {
    static constexpr std::size_t size = 0xad8;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x6d8]; // 0x1f8 
    std::uint8_t _[0xc]; // 0x8d0 
    std::uint8_t _[0x1]; // 0x8dc 
    std::uint8_t _[0x1]; // 0x8dd 
    std::uint8_t _[0x82]; // 0x8de 
    std::uint8_t _[0x178]; // 0x960 
};

struct C_OP_MovementMoveAlongSkinnedCPSnapshot {
    static constexpr std::size_t size = 0x4e0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x1]; // 0x1e8 
    std::uint8_t _[0x7]; // 0x1e9 
    std::uint8_t _[0x178]; // 0x1f0 
    std::uint8_t _[0x178]; // 0x368 
};

struct C_OP_LerpScalar {
    static constexpr std::size_t size = 0x368;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x360 
    std::uint8_t _[0x4]; // 0x364 
};

struct C_INIT_InitialRepulsionVelocity {
    static constexpr std::size_t size = 0x2a0;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x80]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x268 
    std::uint8_t _[0xc]; // 0x26c 
    std::uint8_t _[0xc]; // 0x278 
    std::uint8_t _[0x4]; // 0x284 
    std::uint8_t _[0x1]; // 0x288 
    std::uint8_t _[0x1]; // 0x289 
    std::uint8_t _[0x2]; // 0x28a 
    std::uint8_t _[0x4]; // 0x28c 
    std::uint8_t _[0x1]; // 0x290 
    std::uint8_t _[0x3]; // 0x291 
    std::uint8_t _[0x4]; // 0x294 
    std::uint8_t _[0x8]; // 0x298 
};

struct C_OP_ClampScalar {
    static constexpr std::size_t size = 0x4d8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x360 
};

struct C_OP_SetControlPointToHMD {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0xc]; // 0x1ec 
    std::uint8_t _[0x8]; // 0x1f8 
};

struct C_OP_DifferencePreviousParticle {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x1]; // 0x1fc 
    std::uint8_t _[0x3]; // 0x1fd 
};

struct C_OP_SetControlPointFieldFromVectorExpression {
    static constexpr std::size_t size = 0x1298;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x8]; // 0x1e8 
    std::uint8_t _[0x6d8]; // 0x1f0 
    std::uint8_t _[0x6d8]; // 0x8c8 
    std::uint8_t _[0x178]; // 0xfa0 
    std::uint8_t _[0x178]; // 0x1118 
    std::uint8_t _[0x4]; // 0x1290 
    std::uint8_t _[0x4]; // 0x1294 
};

struct C_OP_PercentageBetweenTransforms {
    static constexpr std::size_t size = 0x2d0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x8]; // 0x1f0 
    std::uint8_t _[0x68]; // 0x1f8 
    std::uint8_t _[0x68]; // 0x260 
    std::uint8_t _[0x4]; // 0x2c8 
    std::uint8_t _[0x1]; // 0x2cc 
    std::uint8_t _[0x3]; // 0x2cd 
};

struct C_INIT_PlaneCull {
    static constexpr std::size_t size = 0x370;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x8]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x1f0 
    std::uint8_t _[0x8]; // 0x368 
};

struct C_OP_RemapNamedModelSequenceEndCap {
    static constexpr std::size_t size = 0x240;
    std::uint8_t pad_0[0x240]; // 0x0
};

struct C_INIT_InitFromCPSnapshot {
    static constexpr std::size_t size = 0x500;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x8]; // 0x1e8 
    std::uint8_t _[0x8]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x4]; // 0x200 
    std::uint8_t _[0x1]; // 0x204 
    std::uint8_t _[0x3]; // 0x205 
    std::uint8_t _[0x178]; // 0x208 
    std::uint8_t _[0x178]; // 0x380 
    std::uint8_t _[0x4]; // 0x4f8 
    std::uint8_t _[0x4]; // 0x4fc 
};

struct C_OP_RenderCables {
    static constexpr std::size_t size = 0x15a8;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x178]; // 0x230 
    std::uint8_t _[0x178]; // 0x3a8 
    std::uint8_t _[0x6d8]; // 0x520 
    std::uint8_t _[0x8]; // 0xbf8 
    std::uint8_t _[0x8]; // 0xc00 
    std::uint8_t _[0x8]; // 0xc08 
    std::uint8_t _[0x178]; // 0xc10 
    std::uint8_t _[0x178]; // 0xd88 
    std::uint8_t _[0x178]; // 0xf00 
    std::uint8_t _[0x178]; // 0x1078 
    std::uint8_t _[0x178]; // 0x11f0 
    std::uint8_t _[0x178]; // 0x1368 
    std::uint8_t _[0x4]; // 0x14e0 
    std::uint8_t _[0x4]; // 0x14e4 
    std::uint8_t _[0x4]; // 0x14e8 
    std::uint8_t _[0x4]; // 0x14ec 
    std::uint8_t _[0x4]; // 0x14f0 
    std::uint8_t _[0x4]; // 0x14f4 
    std::uint8_t _[0x4]; // 0x14f8 
    std::uint8_t _[0x1]; // 0x14fc 
    std::uint8_t _[0x3]; // 0x14fd 
    std::uint8_t _[0x68]; // 0x1500 
    std::uint8_t _[0x20]; // 0x1568 
    std::uint8_t _[0x20]; // 0x1588 
};

struct C_INIT_InheritVelocity {
    static constexpr std::size_t size = 0x1f0;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
};

struct C_OP_SetControlPointToWaterSurface {
    static constexpr std::size_t size = 0x380;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x8]; // 0x1f8 
    std::uint8_t _[0x178]; // 0x200 
    std::uint8_t _[0x8]; // 0x378 
};

struct C_INIT_PositionOffset {
    static constexpr std::size_t size = 0x1010;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x6d8]; // 0x1e8 
    std::uint8_t _[0x6d8]; // 0x8c0 
    std::uint8_t _[0x68]; // 0xf98 
    std::uint8_t _[0x1]; // 0x1000 
    std::uint8_t _[0x3]; // 0x1001 
    std::uint8_t _[0xc]; // 0x1004 
};

struct C_INIT_NormalAlignToCP {
    static constexpr std::size_t size = 0x258;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x68]; // 0x1e8 
    std::uint8_t _[0x8]; // 0x250 
};

struct C_OP_ShapeMatchingConstraint {
    static constexpr std::size_t size = 0x1e8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
};

struct C_OP_SetChildControlPoints {
    static constexpr std::size_t size = 0x370;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x8]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x1f0 
    std::uint8_t _[0x1]; // 0x368 
    std::uint8_t _[0x3]; // 0x369 
    std::uint8_t _[0x4]; // 0x36c 
};

struct C_OP_ChladniWave {
    static constexpr std::size_t size = 0x1588;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x360 
    std::uint8_t _[0x178]; // 0x4d8 
    std::uint8_t _[0x178]; // 0x650 
    std::uint8_t _[0x6d8]; // 0x7c8 
    std::uint8_t _[0x6d8]; // 0xea0 
    std::uint8_t _[0x4]; // 0x1578 
    std::uint8_t _[0x4]; // 0x157c 
    std::uint8_t _[0x8]; // 0x1580 
};

struct C_OP_RemapDirectionToCPToVector {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0xc]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x8]; // 0x200 
};

struct C_OP_DriveCPFromGlobalSoundFloat {
    static constexpr std::size_t size = 0x220;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x8]; // 0x200 
    std::uint8_t _[0x8]; // 0x208 
    std::uint8_t _[0x10]; // 0x210 
};

struct C_INIT_ScreenSpacePositionOfTarget {
    static constexpr std::size_t size = 0xa40;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x6d8]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x8c0 
    std::uint8_t _[0x4]; // 0x8c4 
    std::uint8_t _[0x178]; // 0x8c8 
};

struct C_OP_RtEnvCull {
    static constexpr std::size_t size = 0x288;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0xc]; // 0x1e0 
    std::uint8_t _[0xc]; // 0x1ec 
    std::uint8_t _[0x1]; // 0x1f8 
    std::uint8_t _[0x1]; // 0x1f9 
    std::uint8_t _[0x82]; // 0x1fa 
    std::uint8_t _[0x4]; // 0x27c 
    std::uint8_t _[0x8]; // 0x280 
};

struct C_OP_PinParticleToCP {
    static constexpr std::size_t size = 0x11b0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
    std::uint8_t _[0x6d8]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x8c0 
    std::uint8_t _[0x4]; // 0x8c4 
    std::uint8_t _[0x178]; // 0x8c8 
    std::uint8_t _[0x8]; // 0xa40 
    std::uint8_t _[0x178]; // 0xa48 
    std::uint8_t _[0x178]; // 0xbc0 
    std::uint8_t _[0x178]; // 0xd38 
    std::uint8_t _[0x4]; // 0xeb0 
    std::uint8_t _[0x4]; // 0xeb4 
    std::uint8_t _[0x178]; // 0xeb8 
    std::uint8_t _[0x178]; // 0x1030 
    std::uint8_t _[0x8]; // 0x11a8 
};

struct C_OP_RemapCPtoVector {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0xc]; // 0x1ec 
    std::uint8_t _[0xc]; // 0x1f8 
    std::uint8_t _[0xc]; // 0x204 
    std::uint8_t _[0xc]; // 0x210 
    std::uint8_t _[0x4]; // 0x21c 
    std::uint8_t _[0x4]; // 0x220 
    std::uint8_t _[0x4]; // 0x224 
    std::uint8_t _[0x4]; // 0x228 
    std::uint8_t _[0x1]; // 0x22c 
    std::uint8_t _[0x3]; // 0x22d 
};

struct C_INIT_CreateParticleImpulse {
    static constexpr std::size_t size = 0x660;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x360 
    std::uint8_t _[0x8]; // 0x4d8 
    std::uint8_t _[0x178]; // 0x4e0 
    std::uint8_t _[0x8]; // 0x658 
};

struct C_OP_DensityForce {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1f0]; // 0x0
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x8]; // 0x1f8 
};

struct C_INIT_CreateInEpitrochoid {
    static constexpr std::size_t size = 0x840;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x68]; // 0x1f0 
    std::uint8_t _[0x178]; // 0x258 
    std::uint8_t _[0x178]; // 0x3d0 
    std::uint8_t _[0x178]; // 0x548 
    std::uint8_t _[0x178]; // 0x6c0 
    std::uint8_t _[0x1]; // 0x838 
    std::uint8_t _[0x1]; // 0x839 
    std::uint8_t _[0x6]; // 0x83a 
};

struct C_OP_ConstrainDistanceToUserSpecifiedPath {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x18]; // 0x1f0 
};

struct C_OP_SetControlPointPositions {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x1]; // 0x1e8 
    std::uint8_t _[0x1]; // 0x1e9 
    std::uint8_t _[0x2]; // 0x1ea 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0xc]; // 0x1fc 
    std::uint8_t _[0xc]; // 0x208 
    std::uint8_t _[0xc]; // 0x214 
    std::uint8_t _[0xc]; // 0x220 
    std::uint8_t _[0x4]; // 0x22c 
};

struct C_OP_SetFloatAttributeToVectorExpression {
    static constexpr std::size_t size = 0x1118;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
    std::uint8_t _[0x6d8]; // 0x1e8 
    std::uint8_t _[0x6d8]; // 0x8c0 
    std::uint8_t _[0x178]; // 0xf98 
    std::uint8_t _[0x4]; // 0x1110 
    std::uint8_t _[0x4]; // 0x1114 
};

struct C_OP_MovementRotateParticleAroundAxis {
    static constexpr std::size_t size = 0xaa0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x6d8]; // 0x1e0 
    std::uint8_t _[0x178]; // 0x8b8 
    std::uint8_t _[0x68]; // 0xa30 
    std::uint8_t _[0x8]; // 0xa98 
};

struct C_OP_IntraParticleForce {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x1f0]; // 0x0
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x4]; // 0x200 
    std::uint8_t _[0x4]; // 0x204 
    std::uint8_t _[0x8]; // 0x208 
};

struct C_INIT_InitFloat {
    static constexpr std::size_t size = 0x4e8;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x360 
    std::uint8_t _[0x4]; // 0x364 
    std::uint8_t _[0x180]; // 0x368 
};

struct C_INIT_CreateOnModel {
    static constexpr std::size_t size = 0x13f0;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x60]; // 0x1e8 
    std::uint8_t _[0x68]; // 0x248 
    std::uint8_t _[0x4]; // 0x2b0 
    std::uint8_t _[0x1]; // 0x2b4 
    std::uint8_t _[0x3]; // 0x2b5 
    std::uint8_t _[0x178]; // 0x2b8 
    std::uint8_t _[0x8]; // 0x430 
    std::uint8_t _[0x6d8]; // 0x438 
    std::uint8_t _[0x4]; // 0xb10 
    std::uint8_t _[0x4]; // 0xb14 
    std::uint8_t _[0x6d8]; // 0xb18 
    std::uint8_t _[0x80]; // 0x11f0 
    std::uint8_t _[0x1]; // 0x1270 
    std::uint8_t _[0x1]; // 0x1271 
    std::uint8_t _[0x6]; // 0x1272 
    std::uint8_t _[0x178]; // 0x1278 
};

struct C_OP_InheritFromPeerSystem {
    static constexpr std::size_t size = 0x1f0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
};

struct C_OP_PerParticleForce {
    static constexpr std::size_t size = 0xa48;
    std::uint8_t pad_0[0x1f0]; // 0x0
    std::uint8_t _[0x178]; // 0x1f0 
    std::uint8_t _[0x6d8]; // 0x368 
    std::uint8_t _[0x8]; // 0xa40 
};

struct C_INIT_RandomNamedModelMeshGroup {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x210]; // 0x0
};

struct C_OP_RenderProjected {
    static constexpr std::size_t size = 0xf58;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x1]; // 0x230 
    std::uint8_t _[0x1]; // 0x231 
    std::uint8_t _[0x1]; // 0x232 
    std::uint8_t _[0x1]; // 0x233 
    std::uint8_t _[0x4]; // 0x234 
    std::uint8_t _[0x4]; // 0x238 
    std::uint8_t _[0x4]; // 0x23c 
    std::uint8_t _[0x18]; // 0x240 
    std::uint8_t _[0x178]; // 0x258 
    std::uint8_t _[0x4]; // 0x3d0 
    std::uint8_t _[0x4]; // 0x3d4 
    std::uint8_t _[0x18]; // 0x3d8 
    std::uint8_t _[0x178]; // 0x3f0 
    std::uint8_t _[0x178]; // 0x568 
    std::uint8_t _[0x178]; // 0x6e0 
    std::uint8_t _[0x8]; // 0x858 
    std::uint8_t _[0x6d8]; // 0x860 
    std::uint8_t _[0x20]; // 0xf38 
};

struct C_OP_MaxVelocity {
    static constexpr std::size_t size = 0x4d0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x178]; // 0x1e0 
    std::uint8_t _[0x178]; // 0x358 
};

struct C_INIT_VelocityFromNormal {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x8]; // 0x1f0 
};

struct C_OP_MaintainEmitter {
    static constexpr std::size_t size = 0x670;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x8]; // 0x360 
    std::uint8_t _[0x178]; // 0x368 
    std::uint8_t _[0x4]; // 0x4e0 
    std::uint8_t _[0x4]; // 0x4e4 
    std::uint8_t _[0x8]; // 0x4e8 
    std::uint8_t _[0x1]; // 0x4f0 
    std::uint8_t _[0x7]; // 0x4f1 
    std::uint8_t _[0x178]; // 0x4f8 
};

struct C_INIT_PositionOffsetToCP {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x8]; // 0x1f0 
};

struct C_INIT_RemapInitialTransformDirectionToRotation {
    static constexpr std::size_t size = 0x260;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x68]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x250 
    std::uint8_t _[0x4]; // 0x254 
    std::uint8_t _[0x8]; // 0x258 
};

struct C_OP_FadeAndKill {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x8]; // 0x1f8 
};

struct C_OP_ColorInterpolate {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x10]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
};

struct C_OP_RampScalarSpline {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x28]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x220 
    std::uint8_t _[0x1]; // 0x224 
    std::uint8_t _[0xb]; // 0x225 
};

struct C_OP_RemapNamedModelSequenceOnceTimed {
    static constexpr std::size_t size = 0x240;
    std::uint8_t pad_0[0x240]; // 0x0
};

struct C_OP_SetControlPointFromObjectScale {
    static constexpr std::size_t size = 0x1f0;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
};

struct C_OP_MaintainSequentialPath {
    static constexpr std::size_t size = 0x690;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x178]; // 0x1e0 
    std::uint8_t _[0x178]; // 0x358 
    std::uint8_t _[0x178]; // 0x4d0 
    std::uint8_t _[0x4]; // 0x648 
    std::uint8_t _[0x1]; // 0x64c 
    std::uint8_t _[0x3]; // 0x64d 
    std::uint8_t _[0x40]; // 0x650 
};

struct C_OP_RemapNamedModelBodyPartEndCap {
    static constexpr std::size_t size = 0x240;
    std::uint8_t pad_0[0x240]; // 0x0
};

struct C_OP_StopAfterCPDuration {
    static constexpr std::size_t size = 0x368;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x1]; // 0x360 
    std::uint8_t _[0x7]; // 0x361 
};

struct CGeneralSpin {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x8]; // 0x1e4 
    std::uint8_t _[0xc]; // 0x1ec 
};

struct C_OP_LockToSavedSequentialPath {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x1e4]; // 0x0
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x40]; // 0x1f0 
};

struct C_INIT_RemapNamedModelElementToScalar {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x8]; // 0x1e8 
    std::uint8_t _[0x18]; // 0x1f0 
    std::uint8_t _[0x18]; // 0x208 
    std::uint8_t _[0x4]; // 0x220 
    std::uint8_t _[0x4]; // 0x224 
    std::uint8_t _[0x4]; // 0x228 
    std::uint8_t _[0x4]; // 0x22c 
};

struct C_OP_ClampVector {
    static constexpr std::size_t size = 0xf98;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
    std::uint8_t _[0x6d8]; // 0x1e8 
    std::uint8_t _[0x6d8]; // 0x8c0 
};

struct C_OP_RenderStatusEffectCitadel {
    static constexpr std::size_t size = 0x260;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x8]; // 0x230 
    std::uint8_t _[0x8]; // 0x238 
    std::uint8_t _[0x8]; // 0x240 
    std::uint8_t _[0x8]; // 0x248 
    std::uint8_t _[0x8]; // 0x250 
    std::uint8_t _[0x8]; // 0x258 
};

struct IParticleSystemDefinition {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct C_OP_WindForce {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1f0]; // 0x0
    std::uint8_t _[0x10]; // 0x1f0 
};

struct C_OP_SetVariable {
    static constexpr std::size_t size = 0xb08;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x50]; // 0x1e8 
    std::uint8_t _[0x68]; // 0x238 
    std::uint8_t _[0xc]; // 0x2a0 
    std::uint8_t _[0xc]; // 0x2ac 
    std::uint8_t _[0x6d8]; // 0x2b8 
    std::uint8_t _[0x178]; // 0x990 
};

struct C_OP_RenderStandardLight {
    static constexpr std::size_t size = 0x1828;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x4]; // 0x230 
    std::uint8_t _[0x4]; // 0x234 
    std::uint8_t _[0x6d8]; // 0x238 
    std::uint8_t _[0x8]; // 0x910 
    std::uint8_t _[0x8]; // 0x918 
    std::uint8_t _[0x178]; // 0x920 
    std::uint8_t _[0x178]; // 0xa98 
    std::uint8_t _[0x1]; // 0xc10 
    std::uint8_t _[0x7]; // 0xc11 
    std::uint8_t _[0x178]; // 0xc18 
    std::uint8_t _[0x178]; // 0xd90 
    std::uint8_t _[0x178]; // 0xf08 
    std::uint8_t _[0x178]; // 0x1080 
    std::uint8_t _[0x8]; // 0x11f8 
    std::uint8_t _[0x178]; // 0x1200 
    std::uint8_t _[0x178]; // 0x1378 
    std::uint8_t _[0x178]; // 0x14f0 
    std::uint8_t _[0x1]; // 0x1668 
    std::uint8_t _[0x7]; // 0x1669 
    std::uint8_t _[0x8]; // 0x1670 
    std::uint8_t _[0x4]; // 0x1678 
    std::uint8_t _[0x4]; // 0x167c 
    std::uint8_t _[0x178]; // 0x1680 
    std::uint8_t _[0x4]; // 0x17f8 
    std::uint8_t _[0x4]; // 0x17fc 
    std::uint8_t _[0x1]; // 0x1800 
    std::uint8_t _[0x3]; // 0x1801 
    std::uint8_t _[0x4]; // 0x1804 
    std::uint8_t _[0x4]; // 0x1808 
    std::uint8_t _[0x4]; // 0x180c 
    std::uint8_t _[0x4]; // 0x1810 
    std::uint8_t _[0x4]; // 0x1814 
    std::uint8_t _[0x4]; // 0x1818 
    std::uint8_t _[0xc]; // 0x181c 
};

struct C_OP_DistanceToTransform {
    static constexpr std::size_t size = 0xfa0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x360 
    std::uint8_t _[0x178]; // 0x4d8 
    std::uint8_t _[0x178]; // 0x650 
    std::uint8_t _[0x68]; // 0x7c8 
    std::uint8_t _[0x1]; // 0x830 
    std::uint8_t _[0x83]; // 0x831 
    std::uint8_t _[0x4]; // 0x8b4 
    std::uint8_t _[0x4]; // 0x8b8 
    std::uint8_t _[0x4]; // 0x8bc 
    std::uint8_t _[0x4]; // 0x8c0 
    std::uint8_t _[0x1]; // 0x8c4 
    std::uint8_t _[0x3]; // 0x8c5 
    std::uint8_t _[0x6d8]; // 0x8c8 
};

struct C_OP_RemapControlPointOrientationToRotation {
    static constexpr std::size_t size = 0x1f0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
};

struct C_OP_SetControlPointToCenter {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0xc]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
};

struct C_OP_RemapAverageScalarValuetoCP {
    static constexpr std::size_t size = 0x4f0;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x8]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x368 
    std::uint8_t _[0x4]; // 0x36c 
    std::uint8_t _[0x8]; // 0x370 
    std::uint8_t _[0x178]; // 0x378 
};

struct C_OP_RemapDotProductToScalar {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x4]; // 0x200 
    std::uint8_t _[0x1]; // 0x204 
    std::uint8_t _[0x3]; // 0x205 
};

struct C_OP_RemapCPtoCP {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x4]; // 0x200 
    std::uint8_t _[0x4]; // 0x204 
    std::uint8_t _[0x4]; // 0x208 
    std::uint8_t _[0x4]; // 0x20c 
};

struct C_OP_SetControlPointRotation {
    static constexpr std::size_t size = 0xa40;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x6d8]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x8c0 
    std::uint8_t _[0x4]; // 0xa38 
    std::uint8_t _[0x4]; // 0xa3c 
};

struct C_OP_CurlNoiseForce {
    static constexpr std::size_t size = 0x2048;
    std::uint8_t pad_0[0x1f0]; // 0x0
    std::uint8_t _[0x8]; // 0x1f0 
    std::uint8_t _[0x6d8]; // 0x1f8 
    std::uint8_t _[0x6d8]; // 0x8d0 
    std::uint8_t _[0x6d8]; // 0xfa8 
    std::uint8_t _[0x6d8]; // 0x1680 
    std::uint8_t _[0x178]; // 0x1d58 
    std::uint8_t _[0x178]; // 0x1ed0 
};

struct C_INIT_Orient2DRelToCP {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x8]; // 0x1f0 
};

struct C_OP_SetSimulationRate {
    static constexpr std::size_t size = 0x360;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x178]; // 0x1e8 
};

struct C_OP_FadeIn {
    static constexpr std::size_t size = 0x1f0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
};

struct C_OP_RenderScreenShake {
    static constexpr std::size_t size = 0x258;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x4]; // 0x230 
    std::uint8_t _[0x4]; // 0x234 
    std::uint8_t _[0x4]; // 0x238 
    std::uint8_t _[0x4]; // 0x23c 
    std::uint8_t _[0x4]; // 0x240 
    std::uint8_t _[0x4]; // 0x244 
    std::uint8_t _[0x4]; // 0x248 
    std::uint8_t _[0x4]; // 0x24c 
    std::uint8_t _[0x8]; // 0x250 
};

struct C_OP_RemapBoundingVolumetoCP {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x8]; // 0x1f8 
};

struct C_OP_HSVShiftToCP {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x14]; // 0x1f4 
};

struct C_OP_RemapVectorToRotations {
    static constexpr std::size_t size = 0xf90;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x6d8]; // 0x1e0 
    std::uint8_t _[0x6d8]; // 0x8b8 
};

struct C_INIT_GlobalScale {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x1]; // 0x1f4 
    std::uint8_t _[0x1]; // 0x1f5 
    std::uint8_t _[0x2]; // 0x1f6 
};

struct C_INIT_RadiusFromCPObject {
    static constexpr std::size_t size = 0x1f0;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x8]; // 0x1e8 
};

struct C_INIT_InitialVelocityFromHitbox {
    static constexpr std::size_t size = 0x278;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x80]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x274 
};

struct C_OP_LerpVector {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0xc]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x8]; // 0x1f8 
};

struct C_OP_SetControlPointFieldToWater {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x8]; // 0x1f0 
};

struct TextureGroup_t {
    static constexpr std::size_t size = 0xc18;
    std::uint8_t _[0x1]; // 0x0 
    std::uint8_t _[0x7]; // 0x1 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x178]; // 0x38 
    std::uint8_t _[0xa68]; // 0x1b0 
};

struct C_OP_TimeVaryingForce {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x1f0]; // 0x0
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0xc]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x200 
    std::uint8_t _[0xc]; // 0x204 
};

struct C_OP_SetCPOrientationToGroundNormal {
    static constexpr std::size_t size = 0x290;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x80]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x270 
    std::uint8_t _[0x4]; // 0x274 
    std::uint8_t _[0x10]; // 0x278 
    std::uint8_t _[0x8]; // 0x288 
};

struct C_OP_SnapshotSkinToBones {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x1]; // 0x1e0 
    std::uint8_t _[0x3]; // 0x1e1 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
};

struct C_INIT_CreateWithinSphereTransform {
    static constexpr std::size_t size = 0x1cd8;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x360 
    std::uint8_t _[0x6d8]; // 0x4d8 
    std::uint8_t _[0x10]; // 0xbb0 
    std::uint8_t _[0x68]; // 0xbc0 
    std::uint8_t _[0x178]; // 0xc28 
    std::uint8_t _[0x178]; // 0xda0 
    std::uint8_t _[0x4]; // 0xf18 
    std::uint8_t _[0x4]; // 0xf1c 
    std::uint8_t _[0x6d8]; // 0xf20 
    std::uint8_t _[0x6d8]; // 0x15f8 
    std::uint8_t _[0x4]; // 0x1cd0 
    std::uint8_t _[0x4]; // 0x1cd4 
};

struct C_OP_RadiusDecay {
    static constexpr std::size_t size = 0x1e8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
};

struct C_INIT_RemapNamedModelBodyPartToScalar {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x230]; // 0x0
};

struct C_INIT_RemapScalarToVector {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0xc]; // 0x1f8 
    std::uint8_t _[0xc]; // 0x204 
    std::uint8_t _[0x4]; // 0x210 
    std::uint8_t _[0x4]; // 0x214 
    std::uint8_t _[0x4]; // 0x218 
    std::uint8_t _[0x4]; // 0x21c 
    std::uint8_t _[0x4]; // 0x220 
    std::uint8_t _[0xc]; // 0x224 
};

struct C_INIT_InitialSequenceFromModel {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x4]; // 0x200 
    std::uint8_t _[0x4]; // 0x204 
};

struct C_OP_NoiseEmitter {
    static constexpr std::size_t size = 0x228;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x1]; // 0x200 
    std::uint8_t _[0x3]; // 0x201 
    std::uint8_t _[0x4]; // 0x204 
    std::uint8_t _[0x4]; // 0x208 
    std::uint8_t _[0x4]; // 0x20c 
    std::uint8_t _[0x4]; // 0x210 
    std::uint8_t _[0x4]; // 0x214 
    std::uint8_t _[0xc]; // 0x218 
    std::uint8_t _[0x4]; // 0x224 
};

struct CParticleFunctionInitializer {
    static constexpr std::size_t size = 0x1e8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
};

struct C_OP_SelectivelyEnableChildren {
    static constexpr std::size_t size = 0x658;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x360 
    std::uint8_t _[0x178]; // 0x4d8 
    std::uint8_t _[0x1]; // 0x650 
    std::uint8_t _[0x7]; // 0x651 
};

struct ModelReference_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
};

struct C_OP_PlanarConstraint {
    static constexpr std::size_t size = 0x4f8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0xc]; // 0x1e0 
    std::uint8_t _[0xc]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x1]; // 0x1fc 
    std::uint8_t _[0x3]; // 0x1fd 
    std::uint8_t _[0x178]; // 0x200 
    std::uint8_t _[0x178]; // 0x378 
    std::uint8_t _[0x8]; // 0x4f0 
};

struct C_INIT_CreateFromCPs {
    static constexpr std::size_t size = 0x370;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x8]; // 0x1f0 
    std::uint8_t _[0x178]; // 0x1f8 
};

struct C_OP_LockPoints {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
};

struct C_INIT_CreateSpiralSphere {
    static constexpr std::size_t size = 0x838;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x68]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x250 
    std::uint8_t _[0x178]; // 0x3c8 
    std::uint8_t _[0x178]; // 0x540 
    std::uint8_t _[0x178]; // 0x6b8 
    std::uint8_t _[0x8]; // 0x830 
};

struct C_OP_CPVelocityForce {
    static constexpr std::size_t size = 0x370;
    std::uint8_t pad_0[0x1f0]; // 0x0
    std::uint8_t _[0x8]; // 0x1f0 
    std::uint8_t _[0x178]; // 0x1f8 
};

struct C_OP_RemapNamedModelElementEndCap {
    static constexpr std::size_t size = 0x240;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
    std::uint8_t _[0x18]; // 0x1e8 
    std::uint8_t _[0x18]; // 0x200 
    std::uint8_t _[0x18]; // 0x218 
    std::uint8_t _[0x4]; // 0x230 
    std::uint8_t _[0x4]; // 0x234 
    std::uint8_t _[0x8]; // 0x238 
};

struct C_INIT_ScaleVelocity {
    static constexpr std::size_t size = 0x8c0;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x6d8]; // 0x1e8 
};

struct C_OP_MoveToHitbox {
    static constexpr std::size_t size = 0x4b8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x60]; // 0x1e0 
    std::uint8_t _[0x6c]; // 0x240 
    std::uint8_t _[0x4]; // 0x2ac 
    std::uint8_t _[0x4]; // 0x2b0 
    std::uint8_t _[0x4]; // 0x2b4 
    std::uint8_t _[0x80]; // 0x2b8 
    std::uint8_t _[0x4]; // 0x338 
    std::uint8_t _[0x4]; // 0x33c 
    std::uint8_t _[0x178]; // 0x340 
};

struct C_OP_PinRopeSegmentParticleToParent {
    static constexpr std::size_t size = 0x4d8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x360 
};

struct C_INIT_PointList {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x8]; // 0x1e8 
    std::uint8_t _[0x18]; // 0x1f0 
    std::uint8_t _[0x1]; // 0x208 
    std::uint8_t _[0x3]; // 0x209 
    std::uint8_t _[0x4]; // 0x20c 
};

struct C_OP_LerpToOtherAttribute {
    static constexpr std::size_t size = 0x390;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x178]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x358 
    std::uint8_t _[0x4]; // 0x35c 
    std::uint8_t _[0x30]; // 0x360 
};

struct C_INIT_RandomColor {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x204]; // 0x0
    std::uint8_t _[0x4]; // 0x204 
    std::uint8_t _[0x4]; // 0x208 
    std::uint8_t _[0x4]; // 0x20c 
    std::uint8_t _[0x4]; // 0x210 
    std::uint8_t _[0x4]; // 0x214 
    std::uint8_t _[0x4]; // 0x218 
    std::uint8_t _[0x4]; // 0x21c 
    std::uint8_t _[0x4]; // 0x220 
    std::uint8_t _[0x4]; // 0x224 
    std::uint8_t _[0x8]; // 0x228 
};

struct C_OP_SetGravityToCP {
    static constexpr std::size_t size = 0x370;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x178]; // 0x1f0 
    std::uint8_t _[0x1]; // 0x368 
    std::uint8_t _[0x1]; // 0x369 
    std::uint8_t _[0x6]; // 0x36a 
};

struct C_INIT_RemapParticleCountToScalar {
    static constexpr std::size_t size = 0x218;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x4]; // 0x200 
    std::uint8_t _[0x4]; // 0x204 
    std::uint8_t _[0x1]; // 0x208 
    std::uint8_t _[0x1]; // 0x209 
    std::uint8_t _[0x2]; // 0x20a 
    std::uint8_t _[0xc]; // 0x20c 
};

struct C_INIT_InheritFromParentParticles {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x8]; // 0x1f8 
};

struct C_OP_RampScalarLinearSimple {
    static constexpr std::size_t size = 0x220;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x28]; // 0x1e8 
    std::uint8_t _[0x10]; // 0x210 
};

struct C_INIT_ChaoticAttractor {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x4]; // 0x200 
    std::uint8_t _[0x4]; // 0x204 
    std::uint8_t _[0x8]; // 0x208 
};

struct C_OP_MovementRigidAttachToCP {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
};

struct C_OP_RenderFlattenGrass {
    static constexpr std::size_t size = 0x240;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x4]; // 0x230 
    std::uint8_t _[0x4]; // 0x234 
    std::uint8_t _[0x8]; // 0x238 
};

struct C_OP_RenderLightBeam {
    static constexpr std::size_t size = 0x2038;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x8]; // 0x230 
    std::uint8_t _[0x6d8]; // 0x238 
    std::uint8_t _[0x8]; // 0x910 
    std::uint8_t _[0x8]; // 0x918 
    std::uint8_t _[0x178]; // 0x920 
    std::uint8_t _[0x178]; // 0xa98 
    std::uint8_t _[0x178]; // 0xc10 
    std::uint8_t _[0x1]; // 0xd88 
    std::uint8_t _[0x7]; // 0xd89 
    std::uint8_t _[0x178]; // 0xd90 
    std::uint8_t _[0x178]; // 0xf08 
    std::uint8_t _[0x178]; // 0x1080 
    std::uint8_t _[0x178]; // 0x11f8 
    std::uint8_t _[0x178]; // 0x1370 
    std::uint8_t _[0x178]; // 0x14e8 
    std::uint8_t _[0x6d8]; // 0x1660 
    std::uint8_t _[0x8]; // 0x1d38 
    std::uint8_t _[0x178]; // 0x1d40 
    std::uint8_t _[0x178]; // 0x1eb8 
    std::uint8_t _[0x8]; // 0x2030 
};

struct C_INIT_SkyVisCull {
    static constexpr std::size_t size = 0x8c8;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x6d8]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x8c0 
    std::uint8_t _[0x4]; // 0x8c4 
};

struct C_OP_EnableChildrenFromParentParticleCount {
    static constexpr std::size_t size = 0x370;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x178]; // 0x1f0 
    std::uint8_t _[0x1]; // 0x368 
    std::uint8_t _[0x1]; // 0x369 
    std::uint8_t _[0x6]; // 0x36a 
};

struct C_INIT_DistanceToCPInit {
    static constexpr std::size_t size = 0x9f8;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x8]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x1f0 
    std::uint8_t _[0x178]; // 0x368 
    std::uint8_t _[0x178]; // 0x4e0 
    std::uint8_t _[0x178]; // 0x658 
    std::uint8_t _[0x4]; // 0x7d0 
    std::uint8_t _[0x1]; // 0x7d4 
    std::uint8_t _[0x83]; // 0x7d5 
    std::uint8_t _[0x8]; // 0x858 
    std::uint8_t _[0x178]; // 0x860 
    std::uint8_t _[0x4]; // 0x9d8 
    std::uint8_t _[0x4]; // 0x9dc 
    std::uint8_t _[0x4]; // 0x9e0 
    std::uint8_t _[0xc]; // 0x9e4 
    std::uint8_t _[0x8]; // 0x9f0 
};

struct C_OP_EndCapDecay {
    static constexpr std::size_t size = 0x1e0;
    std::uint8_t pad_0[0x1e0]; // 0x0
};

struct C_OP_ForceBasedOnDistanceToPlane {
    static constexpr std::size_t size = 0x228;
    std::uint8_t pad_0[0x1f0]; // 0x0
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0xc]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x200 
    std::uint8_t _[0xc]; // 0x204 
    std::uint8_t _[0xc]; // 0x210 
    std::uint8_t _[0x4]; // 0x21c 
    std::uint8_t _[0x8]; // 0x220 
};

struct C_OP_RemapDensityToVector {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0xc]; // 0x1f0 
    std::uint8_t _[0xc]; // 0x1fc 
    std::uint8_t _[0x4]; // 0x208 
    std::uint8_t _[0x4]; // 0x20c 
};

struct ParticleControlPointConfiguration_t {
    static constexpr std::size_t size = 0x90;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x18]; // 0x8 
    std::uint8_t _[0x70]; // 0x20 
};

struct C_INIT_SetRigidAttachment {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
};

struct MaterialVariable_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
};

struct CParticleFunctionConstraint {
    static constexpr std::size_t size = 0x1e0;
    std::uint8_t pad_0[0x1e0]; // 0x0
};

struct C_OP_RemapSpeed {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x8]; // 0x1f8 
};

struct C_OP_RenderModels {
    static constexpr std::size_t size = 0x2ee8;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x1]; // 0x230 
    std::uint8_t _[0x1]; // 0x231 
    std::uint8_t _[0x1]; // 0x232 
    std::uint8_t _[0x5]; // 0x233 
    std::uint8_t _[0x18]; // 0x238 
    std::uint8_t _[0x4]; // 0x250 
    std::uint8_t _[0x4]; // 0x254 
    std::uint8_t _[0x1]; // 0x258 
    std::uint8_t _[0x1]; // 0x259 
    std::uint8_t _[0x6]; // 0x25a 
    std::uint8_t _[0x6d8]; // 0x260 
    std::uint8_t _[0x6d8]; // 0x938 
    std::uint8_t _[0x4]; // 0x1010 
    std::uint8_t _[0x4]; // 0x1014 
    std::uint8_t _[0x6d8]; // 0x1018 
    std::uint8_t _[0x4]; // 0x16f0 
    std::uint8_t _[0x4]; // 0x16f4 
    std::uint8_t _[0x8]; // 0x16f8 
    std::uint8_t _[0x178]; // 0x1700 
    std::uint8_t _[0x1]; // 0x1878 
    std::uint8_t _[0x1]; // 0x1879 
    std::uint8_t _[0x1]; // 0x187a 
    std::uint8_t _[0x1]; // 0x187b 
    std::uint8_t _[0x4]; // 0x187c 
    std::uint8_t _[0x4]; // 0x1880 
    std::uint8_t _[0x4]; // 0x1884 
    std::uint8_t _[0x100]; // 0x1888 
    std::uint8_t _[0x100]; // 0x1988 
    std::uint8_t _[0x1]; // 0x1a88 
    std::uint8_t _[0x1]; // 0x1a89 
    std::uint8_t _[0x46]; // 0x1a8a 
    std::uint8_t _[0x8]; // 0x1ad0 
    std::uint8_t _[0x8]; // 0x1ad8 
    std::uint8_t _[0x178]; // 0x1ae0 
    std::uint8_t _[0x18]; // 0x1c58 
    std::uint8_t _[0x178]; // 0x1c70 
    std::uint8_t _[0x178]; // 0x1de8 
    std::uint8_t _[0x60]; // 0x1f60 
    std::uint8_t _[0x4]; // 0x1fc0 
    std::uint8_t _[0x100]; // 0x1fc4 
    std::uint8_t _[0x1]; // 0x20c4 
    std::uint8_t _[0x3]; // 0x20c5 
    std::uint8_t _[0x4]; // 0x20c8 
    std::uint8_t _[0x1]; // 0x20cc 
    std::uint8_t _[0x1]; // 0x20cd 
    std::uint8_t _[0x1]; // 0x20ce 
    std::uint8_t _[0x1]; // 0x20cf 
    std::uint8_t _[0x1]; // 0x20d0 
    std::uint8_t _[0x1]; // 0x20d1 
    std::uint8_t _[0x106]; // 0x20d2 
    std::uint8_t _[0x178]; // 0x21d8 
    std::uint8_t _[0x178]; // 0x2350 
    std::uint8_t _[0x178]; // 0x24c8 
    std::uint8_t _[0x8]; // 0x2640 
    std::uint8_t _[0x6d8]; // 0x2648 
    std::uint8_t _[0x8]; // 0x2d20 
    std::uint8_t _[0x8]; // 0x2d28 
    std::uint8_t _[0x1b8]; // 0x2d30 
};

struct C_OP_RenderClientPhysicsImpulse {
    static constexpr std::size_t size = 0x528;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x178]; // 0x230 
    std::uint8_t _[0x178]; // 0x3a8 
    std::uint8_t _[0x8]; // 0x520 
};

struct CParticleFunctionEmitter {
    static constexpr std::size_t size = 0x1e8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
};

struct C_INIT_RemapNamedModelMeshGroupToScalar {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x230]; // 0x0
};

struct C_OP_SetControlPointOrientationToCPVelocity {
    static constexpr std::size_t size = 0x1f0;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
};

struct C_OP_RopeSpringConstraint {
    static constexpr std::size_t size = 0x7c8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x178]; // 0x1e0 
    std::uint8_t _[0x178]; // 0x358 
    std::uint8_t _[0x178]; // 0x4d0 
    std::uint8_t _[0x8]; // 0x648 
    std::uint8_t _[0x178]; // 0x650 
};

struct C_INIT_PositionWarpScalar {
    static constexpr std::size_t size = 0x388;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0xc]; // 0x1e8 
    std::uint8_t _[0xc]; // 0x1f4 
    std::uint8_t _[0x178]; // 0x200 
    std::uint8_t _[0x4]; // 0x378 
    std::uint8_t _[0x4]; // 0x37c 
    std::uint8_t _[0x8]; // 0x380 
};

struct C_OP_ForceControlPointStub {
    static constexpr std::size_t size = 0x1f0;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x8]; // 0x1e8 
};

struct C_OP_VectorNoise {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0xc]; // 0x1e4 
    std::uint8_t _[0xc]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x1]; // 0x200 
    std::uint8_t _[0x3]; // 0x201 
    std::uint8_t _[0x4]; // 0x204 
};

struct C_OP_RemapParticleCountToScalar {
    static constexpr std::size_t size = 0x7d0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x360 
    std::uint8_t _[0x178]; // 0x4d8 
    std::uint8_t _[0x178]; // 0x650 
    std::uint8_t _[0x4]; // 0x7c8 
    std::uint8_t _[0x4]; // 0x7cc 
};

struct C_INIT_QuantizeFloat {
    static constexpr std::size_t size = 0x368;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x8]; // 0x360 
};

struct C_OP_RemapModelVolumetoCP {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x4]; // 0x200 
    std::uint8_t _[0x4]; // 0x204 
    std::uint8_t _[0x4]; // 0x208 
    std::uint8_t _[0x1]; // 0x20c 
    std::uint8_t _[0x3]; // 0x20d 
};

struct C_OP_SetToCP {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0xc]; // 0x1e4 
    std::uint8_t _[0x8]; // 0x1f0 
};

struct ParticleControlPointDriver_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0xc]; // 0x20 
    std::uint8_t _[0xc]; // 0x2c 
    std::uint8_t _[0x8]; // 0x38 
};

struct C_OP_ParentVortices {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1f0]; // 0x0
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0xc]; // 0x1f4 
    std::uint8_t _[0x8]; // 0x200 
};

struct C_OP_SetControlPointToCPVelocity {
    static constexpr std::size_t size = 0x8d8;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x8]; // 0x1f8 
    std::uint8_t _[0x6d8]; // 0x200 
};

struct C_OP_ClientPhysics {
    static constexpr std::size_t size = 0x558;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x8]; // 0x230 
    std::uint8_t _[0x8]; // 0x238 
    std::uint8_t _[0x178]; // 0x240 
    std::uint8_t _[0x178]; // 0x3b8 
    std::uint8_t _[0x4]; // 0x530 
    std::uint8_t _[0x4]; // 0x534 
    std::uint8_t _[0x1]; // 0x538 
    std::uint8_t _[0x1]; // 0x539 
    std::uint8_t _[0x2]; // 0x53a 
    std::uint8_t _[0x4]; // 0x53c 
    std::uint8_t _[0x4]; // 0x540 
    std::uint8_t _[0x4]; // 0x544 
    std::uint8_t _[0x4]; // 0x548 
    std::uint8_t _[0x4]; // 0x54c 
    std::uint8_t _[0x8]; // 0x550 
};

struct C_OP_SpinYaw {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0x1f8]; // 0x0
};

struct PointDefinitionWithTimeValues_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x14]; // 0x0
    std::uint8_t _[0x4]; // 0x14 
};

struct RenderProjectedMaterial_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x8]; // 0x0 
};

struct C_INIT_SetFloatAttributeToVectorExpression {
    static constexpr std::size_t size = 0x1120;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x8]; // 0x1e8 
    std::uint8_t _[0x6d8]; // 0x1f0 
    std::uint8_t _[0x6d8]; // 0x8c8 
    std::uint8_t _[0x178]; // 0xfa0 
    std::uint8_t _[0x4]; // 0x1118 
    std::uint8_t _[0x4]; // 0x111c 
};

struct C_OP_ExternalWindForce {
    static constexpr std::size_t size = 0x2050;
    std::uint8_t pad_0[0x1f0]; // 0x0
    std::uint8_t _[0x6d8]; // 0x1f0 
    std::uint8_t _[0x6d8]; // 0x8c8 
    std::uint8_t _[0x1]; // 0xfa0 
    std::uint8_t _[0x1]; // 0xfa1 
    std::uint8_t _[0x1]; // 0xfa2 
    std::uint8_t _[0x5]; // 0xfa3 
    std::uint8_t _[0x6d8]; // 0xfa8 
    std::uint8_t _[0x8]; // 0x1680 
    std::uint8_t _[0x178]; // 0x1688 
    std::uint8_t _[0x178]; // 0x1800 
    std::uint8_t _[0x6d8]; // 0x1978 
};

struct C_INIT_ModelCull {
    static constexpr std::size_t size = 0x270;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x1]; // 0x1ec 
    std::uint8_t _[0x1]; // 0x1ed 
    std::uint8_t _[0x1]; // 0x1ee 
    std::uint8_t _[0x81]; // 0x1ef 
};

struct C_OP_RenderSprites {
    static constexpr std::size_t size = 0x41c8;
    std::uint8_t pad_0[0x2ed8]; // 0x0
    std::uint8_t _[0x178]; // 0x2ed8 
    std::uint8_t _[0x4]; // 0x3050 
    std::uint8_t _[0x4]; // 0x3054 
    std::uint8_t _[0x4]; // 0x3058 
    std::uint8_t _[0x4]; // 0x305c 
    std::uint8_t _[0x178]; // 0x3060 
    std::uint8_t _[0x178]; // 0x31d8 
    std::uint8_t _[0x178]; // 0x3350 
    std::uint8_t _[0x178]; // 0x34c8 
    std::uint8_t _[0x178]; // 0x3640 
    std::uint8_t _[0x4]; // 0x37b8 
    std::uint8_t _[0x4]; // 0x37bc 
    std::uint8_t _[0x1]; // 0x37c0 
    std::uint8_t _[0x3]; // 0x37c1 
    std::uint8_t _[0x4]; // 0x37c4 
    std::uint8_t _[0x4]; // 0x37c8 
    std::uint8_t _[0x4]; // 0x37cc 
    std::uint8_t _[0x4]; // 0x37d0 
    std::uint8_t _[0x4]; // 0x37d4 
    std::uint8_t _[0x4]; // 0x37d8 
    std::uint8_t _[0x4]; // 0x37dc 
    std::uint8_t _[0x4]; // 0x37e0 
    std::uint8_t _[0x4]; // 0x37e4 
    std::uint8_t _[0x8]; // 0x37e8 
    std::uint8_t _[0x6d8]; // 0x37f0 
    std::uint8_t _[0x178]; // 0x3ec8 
    std::uint8_t _[0x178]; // 0x4040 
    std::uint8_t _[0x4]; // 0x41b8 
    std::uint8_t _[0xc]; // 0x41bc 
};

struct C_OP_PercentageBetweenTransformLerpCPs {
    static constexpr std::size_t size = 0x2d8;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x8]; // 0x1e8 
    std::uint8_t _[0x68]; // 0x1f0 
    std::uint8_t _[0x68]; // 0x258 
    std::uint8_t _[0x4]; // 0x2c0 
    std::uint8_t _[0x4]; // 0x2c4 
    std::uint8_t _[0x4]; // 0x2c8 
    std::uint8_t _[0x4]; // 0x2cc 
    std::uint8_t _[0x4]; // 0x2d0 
    std::uint8_t _[0x1]; // 0x2d4 
    std::uint8_t _[0x3]; // 0x2d5 
};

struct C_OP_SetPerChildControlPoint {
    static constexpr std::size_t size = 0x4f0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x8]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x1f0 
    std::uint8_t _[0x178]; // 0x368 
    std::uint8_t _[0x4]; // 0x4e0 
    std::uint8_t _[0x4]; // 0x4e4 
    std::uint8_t _[0x8]; // 0x4e8 
};

struct C_OP_RenderTreeShake {
    static constexpr std::size_t size = 0x258;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x4]; // 0x230 
    std::uint8_t _[0x4]; // 0x234 
    std::uint8_t _[0x4]; // 0x238 
    std::uint8_t _[0x4]; // 0x23c 
    std::uint8_t _[0x4]; // 0x240 
    std::uint8_t _[0x4]; // 0x244 
    std::uint8_t _[0x4]; // 0x248 
    std::uint8_t _[0x4]; // 0x24c 
    std::uint8_t _[0x4]; // 0x250 
    std::uint8_t _[0x4]; // 0x254 
};

struct C_OP_WorldCollideConstraint {
    static constexpr std::size_t size = 0x1e0;
    std::uint8_t pad_0[0x1e0]; // 0x0
};

struct C_OP_SetAttributeToScalarExpression {
    static constexpr std::size_t size = 0x680;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x8]; // 0x1e0 
    std::uint8_t _[0x178]; // 0x1e8 
    std::uint8_t _[0x178]; // 0x360 
    std::uint8_t _[0x178]; // 0x4d8 
    std::uint8_t _[0x4]; // 0x650 
    std::uint8_t _[0x2c]; // 0x654 
};

struct C_OP_CycleScalar {
    static constexpr std::size_t size = 0x208;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x1]; // 0x1f0 
    std::uint8_t _[0x3]; // 0x1f1 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x8]; // 0x200 
};

struct C_OP_RenderMaterialProxy {
    static constexpr std::size_t size = 0xc40;
    std::uint8_t pad_0[0x230]; // 0x0
    std::uint8_t _[0x4]; // 0x230 
    std::uint8_t _[0x4]; // 0x234 
    std::uint8_t _[0x18]; // 0x238 
    std::uint8_t _[0x8]; // 0x250 
    std::uint8_t _[0x178]; // 0x258 
    std::uint8_t _[0x6d8]; // 0x3d0 
    std::uint8_t _[0x178]; // 0xaa8 
    std::uint8_t _[0x20]; // 0xc20 
};

struct FloatInputMaterialVariable_t {
    static constexpr std::size_t size = 0x180;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x178]; // 0x8 
};

struct C_OP_RampScalarLinear {
    static constexpr std::size_t size = 0x230;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x2c]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x220 
    std::uint8_t _[0xc]; // 0x224 
};

struct C_OP_RotateVector {
    static constexpr std::size_t size = 0x380;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0xc]; // 0x1e4 
    std::uint8_t _[0xc]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x4]; // 0x200 
    std::uint8_t _[0x4]; // 0x204 
    std::uint8_t _[0x178]; // 0x208 
};

struct C_INIT_InitVecCollection {
    static constexpr std::size_t size = 0x8c8;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x6d8]; // 0x1e8 
    std::uint8_t _[0x8]; // 0x8c0 
};

struct C_INIT_RemapParticleCountToNamedModelMeshGroupScalar {
    static constexpr std::size_t size = 0x238;
    std::uint8_t pad_0[0x238]; // 0x0
};

struct C_INIT_SequenceFromCP {
    static constexpr std::size_t size = 0x200;
    std::uint8_t pad_0[0x1e8]; // 0x0
    std::uint8_t _[0x1]; // 0x1e8 
    std::uint8_t _[0x3]; // 0x1e9 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x10]; // 0x1f0 
};

struct C_OP_CPOffsetToPercentageBetweenCPs {
    static constexpr std::size_t size = 0x210;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x4]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x1fc 
    std::uint8_t _[0x1]; // 0x200 
    std::uint8_t _[0x3]; // 0x201 
    std::uint8_t _[0xc]; // 0x204 
};

struct C_OP_LerpEndCapScalar {
    static constexpr std::size_t size = 0x1f0;
    std::uint8_t pad_0[0x1e0]; // 0x0
    std::uint8_t _[0x4]; // 0x1e0 
    std::uint8_t _[0x4]; // 0x1e4 
    std::uint8_t _[0x8]; // 0x1e8 
};

} // namespace