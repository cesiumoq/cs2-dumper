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

namespace cs2::client_dll {

enum class C_BaseCombatCharacter__WaterWakeMode_t : std::int32_t {
    WATER_WAKE_NONE = 0,
    WATER_WAKE_IDLE = 1,
    WATER_WAKE_WALKING = 2,
    WATER_WAKE_RUNNING = 3,
    WATER_WAKE_WATER_OVERHEAD = 4,
};

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

enum class CompositeMaterialInputLooseVariableType_t : std::int32_t {
    LOOSE_VARIABLE_TYPE_BOOLEAN = 0,
    LOOSE_VARIABLE_TYPE_INTEGER1 = 1,
    LOOSE_VARIABLE_TYPE_INTEGER2 = 2,
    LOOSE_VARIABLE_TYPE_INTEGER3 = 3,
    LOOSE_VARIABLE_TYPE_INTEGER4 = 4,
    LOOSE_VARIABLE_TYPE_FLOAT1 = 5,
    LOOSE_VARIABLE_TYPE_FLOAT2 = 6,
    LOOSE_VARIABLE_TYPE_FLOAT3 = 7,
    LOOSE_VARIABLE_TYPE_FLOAT4 = 8,
    LOOSE_VARIABLE_TYPE_COLOR4 = 9,
    LOOSE_VARIABLE_TYPE_STRING = 10,
    LOOSE_VARIABLE_TYPE_SYSTEMVAR = 11,
    LOOSE_VARIABLE_TYPE_RESOURCE_MATERIAL = 12,
    LOOSE_VARIABLE_TYPE_RESOURCE_TEXTURE = 13,
    LOOSE_VARIABLE_TYPE_PANORAMA_RENDER = 14,
};

enum class CompositeMaterialInputTextureType_t : std::int32_t {
    INPUT_TEXTURE_TYPE_DEFAULT = 0,
    INPUT_TEXTURE_TYPE_NORMALMAP = 1,
    INPUT_TEXTURE_TYPE_COLOR = 2,
    INPUT_TEXTURE_TYPE_MASKS = 3,
    INPUT_TEXTURE_TYPE_ROUGHNESS = 4,
    INPUT_TEXTURE_TYPE_PEARLESCENCE_MASK = 5,
    INPUT_TEXTURE_TYPE_AO = 6,
    INPUT_TEXTURE_TYPE_POSITION = 7,
};

enum class InventoryNodeType_t : std::int32_t {
    NODE_TYPE_INVALID = 0,
    VIRTUAL_NODE_SCHEMA_PREFAB = 1,
    VIRTUAL_NODE_SCHEMA_ITEMDEF = 2,
    VIRTUAL_NODE_SCHEMA_STICKER = 3,
    VIRTUAL_NODE_SCHEMA_KEYCHAIN = 4,
    CONCRETE_NODE_SCHEMA_PREFAB = 5,
    CONCRETE_NODE_SCHEMA_ITEMDEF = 6,
    CONCRETE_NODE_SCHEMA_STICKER = 7,
    CONCRETE_NODE_SCHEMA_KEYCHAIN = 8,
};

enum class CompositeMaterialInputContainerSourceType_t : std::int32_t {
    CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0,
    CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 1,
    CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 2,
    CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 3,
    CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 4,
    CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 5,
};

enum class CompMatPropertyMutatorType_t : std::int32_t {
    COMP_MAT_PROPERTY_MUTATOR_INIT = 0,
    COMP_MAT_PROPERTY_MUTATOR_COPY_MATCHING_KEYS = 1,
    COMP_MAT_PROPERTY_MUTATOR_COPY_KEYS_WITH_SUFFIX = 2,
    COMP_MAT_PROPERTY_MUTATOR_COPY_PROPERTY = 3,
    COMP_MAT_PROPERTY_MUTATOR_SET_VALUE = 4,
    COMP_MAT_PROPERTY_MUTATOR_GENERATE_TEXTURE = 5,
    COMP_MAT_PROPERTY_MUTATOR_CONDITIONAL_MUTATORS = 6,
    COMP_MAT_PROPERTY_MUTATOR_POP_INPUT_QUEUE = 7,
    COMP_MAT_PROPERTY_MUTATOR_DRAW_TEXT = 8,
    COMP_MAT_PROPERTY_MUTATOR_RANDOM_ROLL_INPUT_VARIABLES = 9,
};

enum class CompositeMaterialVarSystemVar_t : std::int32_t {
    COMPMATSYSVAR_COMPOSITETIME = 0,
    COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 1,
};

enum class P2P_Messages : std::int32_t {
    p2p_TextMessage = 256,
    p2p_Voice = 257,
    p2p_Ping = 258,
    p2p_VRAvatarPosition = 259,
    p2p_WatchSynchronization = 260,
    p2p_FightingGame_GameData = 261,
    p2p_FightingGame_Connection = 262,
};

enum class CompositeMaterialMatchFilterType_t : std::int32_t {
    MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0,
    MATCH_FILTER_MATERIAL_SHADER = 1,
    MATCH_FILTER_MATERIAL_NAME_SUBSTR = 2,
    MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 3,
    MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 4,
    MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 5,
};

enum class CompMatPropertyMutatorConditionType_t : std::int32_t {
    COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0,
    COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 1,
    COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 2,
};

struct C_CSGO_TeamIntroCharacterPosition {
    static constexpr std::size_t size = 0x1d18;
    std::uint8_t pad_0[0x1d18]; // 0x0
};

struct C_FireCrackerBlast {
    static constexpr std::size_t size = 0x86a0;
    std::uint8_t pad_0[0x86a0]; // 0x0
};

struct CCSGO_WingmanIntroCounterTerroristPosition {
    static constexpr std::size_t size = 0x1d18;
    std::uint8_t pad_0[0x1d18]; // 0x0
};

struct CPulseCell_WaitForCursorsWithTag {
    static constexpr std::size_t size = 0x130;
    std::uint8_t pad_0[0x128]; // 0x0
    std::uint8_t _[0x4]; // 0x128 
    std::uint8_t _[0x4]; // 0x12c 
};

struct C_SceneEntity__QueuedEvents_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x18]; // 0x0 
};

struct CCSPlayer_PingServices {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x8]; // 0x48 
};

struct CEconItemAttribute {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x8]; // 0x40 
};

struct CPulseCell_RaceCursors {
    static constexpr std::size_t size = 0x138;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x18]; // 0xd8 
    std::uint8_t _[0x48]; // 0xf0 
};

struct CFuncRetakeBarrier {
    static constexpr std::size_t size = 0x14d0;
    std::uint8_t pad_0[0x14d0]; // 0x0
};

struct C_EnvWindShared {
    static constexpr std::size_t size = 0xf8;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x2]; // 0x12 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x2]; // 0x18 
    std::uint8_t _[0x2]; // 0x1a 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x2]; // 0x28 
    std::uint8_t _[0x2]; // 0x2a 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0xc]; // 0x30 
    std::uint8_t _[0xbc]; // 0x3c 
};

struct C_SkyCamera {
    static constexpr std::size_t size = 0x6a0;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x90]; // 0x600 
    std::uint8_t _[0x4]; // 0x690 
    std::uint8_t _[0x4]; // 0x694 
    std::uint8_t _[0x8]; // 0x698 
};

struct CPulseCell_Base {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x40]; // 0x8 
};

struct C_FuncRotating {
    static constexpr std::size_t size = 0x1098;
    std::uint8_t pad_0[0x1098]; // 0x0
};

struct C_SoundOpvarSetPointBase {
    static constexpr std::size_t size = 0x620;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x8]; // 0x600 
    std::uint8_t _[0x8]; // 0x608 
    std::uint8_t _[0x8]; // 0x610 
    std::uint8_t _[0x4]; // 0x618 
    std::uint8_t _[0x1]; // 0x61c 
    std::uint8_t _[0x3]; // 0x61d 
};

struct C_EnvCubemapFog {
    static constexpr std::size_t size = 0x700;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x4]; // 0x600 
    std::uint8_t _[0x4]; // 0x604 
    std::uint8_t _[0x4]; // 0x608 
    std::uint8_t _[0x4]; // 0x60c 
    std::uint8_t _[0x4]; // 0x610 
    std::uint8_t _[0x4]; // 0x614 
    std::uint8_t _[0x4]; // 0x618 
    std::uint8_t _[0x4]; // 0x61c 
    std::uint8_t _[0x4]; // 0x620 
    std::uint8_t _[0x1]; // 0x624 
    std::uint8_t _[0x3]; // 0x625 
    std::uint8_t _[0x4]; // 0x628 
    std::uint8_t _[0x4]; // 0x62c 
    std::uint8_t _[0x8]; // 0x630 
    std::uint8_t _[0x8]; // 0x638 
    std::uint8_t _[0x4]; // 0x640 
    std::uint8_t _[0x4]; // 0x644 
    std::uint8_t _[0x4]; // 0x648 
    std::uint8_t _[0x4]; // 0x64c 
    std::uint8_t _[0x8]; // 0x650 
    std::uint8_t _[0x98]; // 0x658 
    std::uint8_t _[0x8]; // 0x6f0 
    std::uint8_t _[0x1]; // 0x6f8 
    std::uint8_t _[0x7]; // 0x6f9 
};

struct C_CSGO_TeamSelectTerroristPosition {
    static constexpr std::size_t size = 0x1d18;
    std::uint8_t pad_0[0x1d18]; // 0x0
};

struct C_EnvParticleGlow {
    static constexpr std::size_t size = 0x1680;
    std::uint8_t pad_0[0x1668]; // 0x0
    std::uint8_t _[0x4]; // 0x1668 
    std::uint8_t _[0x4]; // 0x166c 
    std::uint8_t _[0x4]; // 0x1670 
    std::uint8_t _[0x4]; // 0x1674 
    std::uint8_t _[0x8]; // 0x1678 
};

struct CCS_PortraitWorldCallbackHandler {
    static constexpr std::size_t size = 0x608;
    std::uint8_t pad_0[0x608]; // 0x0
};

struct CCSPlayerController_InventoryServices {
    static constexpr std::size_t size = 0xf0;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t _[0x18]; // 0x40 
    std::uint8_t _[0x4]; // 0x58 
    std::uint8_t _[0x18]; // 0x5c 
    std::uint8_t _[0x4]; // 0x74 
    std::uint8_t _[0x4]; // 0x78 
    std::uint8_t _[0x4]; // 0x7c 
    std::uint8_t _[0x4]; // 0x80 
    std::uint8_t _[0x4]; // 0x84 
    std::uint8_t _[0x68]; // 0x88 
};

struct CCSPlayerModernJump {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x8]; // 0x30 
};

struct C_EconEntity__AttachedModelData_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CPulse_ResumePoint {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CTriggerFan {
    static constexpr std::size_t size = 0x11e0;
    std::uint8_t pad_0[0x1180]; // 0x0
    std::uint8_t _[0xc]; // 0x1180 
    std::uint8_t _[0xc]; // 0x118c 
    std::uint8_t _[0x1]; // 0x1198 
    std::uint8_t _[0x7]; // 0x1199 
    std::uint8_t _[0x10]; // 0x11a0 
    std::uint8_t _[0x4]; // 0x11b0 
    std::uint8_t _[0x4]; // 0x11b4 
    std::uint8_t _[0x8]; // 0x11b8 
    std::uint8_t _[0x20]; // 0x11c0 
};

struct C_HostageCarriableProp {
    static constexpr std::size_t size = 0x1270;
    std::uint8_t pad_0[0x1270]; // 0x0
};

struct C_BulletHitModel {
    static constexpr std::size_t size = 0x12b8;
    std::uint8_t pad_0[0x1268]; // 0x0
    std::uint8_t _[0x30]; // 0x1268 
    std::uint8_t _[0x4]; // 0x1298 
    std::uint8_t _[0x4]; // 0x129c 
    std::uint8_t _[0x4]; // 0x12a0 
    std::uint8_t _[0x4]; // 0x12a4 
    std::uint8_t _[0x10]; // 0x12a8 
};

struct C_FuncElectrifiedVolume {
    static constexpr std::size_t size = 0x10b0;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t _[0x8]; // 0x1098 
    std::uint8_t _[0x8]; // 0x10a0 
    std::uint8_t _[0x8]; // 0x10a8 
};

struct C_MapVetoPickController {
    static constexpr std::size_t size = 0xf48;
    std::uint8_t pad_0[0x610]; // 0x0
    std::uint8_t _[0x4]; // 0x610 
    std::uint8_t _[0x4]; // 0x614 
    std::uint8_t _[0x100]; // 0x618 
    std::uint8_t _[0x1c]; // 0x718 
    std::uint8_t _[0x100]; // 0x734 
    std::uint8_t _[0x100]; // 0x834 
    std::uint8_t _[0x100]; // 0x934 
    std::uint8_t _[0x100]; // 0xa34 
    std::uint8_t _[0x100]; // 0xb34 
    std::uint8_t _[0x100]; // 0xc34 
    std::uint8_t _[0x100]; // 0xd34 
    std::uint8_t _[0x100]; // 0xe34 
    std::uint8_t _[0x4]; // 0xf34 
    std::uint8_t _[0x4]; // 0xf38 
    std::uint8_t _[0x4]; // 0xf3c 
    std::uint8_t _[0x4]; // 0xf40 
    std::uint8_t _[0x4]; // 0xf44 
};

struct C_EnvVolumetricFogVolume {
    static constexpr std::size_t size = 0x648;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x4]; // 0x600 
    std::uint8_t _[0xc]; // 0x604 
    std::uint8_t _[0xc]; // 0x610 
    std::uint8_t _[0x1]; // 0x61c 
    std::uint8_t _[0x3]; // 0x61d 
    std::uint8_t _[0x4]; // 0x620 
    std::uint8_t _[0x4]; // 0x624 
    std::uint8_t _[0x4]; // 0x628 
    std::uint8_t _[0x4]; // 0x62c 
    std::uint8_t _[0x4]; // 0x630 
    std::uint8_t _[0x4]; // 0x634 
    std::uint8_t _[0x4]; // 0x638 
    std::uint8_t _[0x4]; // 0x63c 
    std::uint8_t _[0x4]; // 0x640 
    std::uint8_t _[0x1]; // 0x644 
    std::uint8_t _[0x1]; // 0x645 
    std::uint8_t _[0x1]; // 0x646 
    std::uint8_t _[0x1]; // 0x647 
};

struct C_CSGO_EndOfMatchCharacterPosition {
    static constexpr std::size_t size = 0x1d18;
    std::uint8_t pad_0[0x1d18]; // 0x0
};

struct CPulseCell_PlaySequence {
    static constexpr std::size_t size = 0x140;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x8]; // 0xd8 
    std::uint8_t _[0x18]; // 0xe0 
    std::uint8_t _[0x48]; // 0xf8 
};

struct C_BarnLight {
    static constexpr std::size_t size = 0x13a8;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t _[0x4]; // 0x1098 
    std::uint8_t _[0x4]; // 0x109c 
    std::uint8_t _[0x4]; // 0x10a0 
    std::uint8_t _[0x4]; // 0x10a4 
    std::uint8_t _[0x4]; // 0x10a8 
    std::uint8_t _[0x4]; // 0x10ac 
    std::uint8_t _[0x4]; // 0x10b0 
    std::uint8_t _[0x4]; // 0x10b4 
    std::uint8_t _[0x4]; // 0x10b8 
    std::uint8_t _[0x4]; // 0x10bc 
    std::uint8_t _[0x4]; // 0x10c0 
    std::uint8_t _[0x4]; // 0x10c4 
    std::uint8_t _[0x8]; // 0x10c8 
    std::uint8_t _[0x8]; // 0x10d0 
    std::uint8_t _[0x8]; // 0x10d8 
    std::uint8_t _[0x18]; // 0x10e0 
    std::uint8_t _[0x18]; // 0x10f8 
    std::uint8_t _[0x18]; // 0x1110 
    std::uint8_t _[0x60]; // 0x1128 
    std::uint8_t _[0x8]; // 0x1188 
    std::uint8_t _[0x4]; // 0x1190 
    std::uint8_t _[0x4]; // 0x1194 
    std::uint8_t _[0x4]; // 0x1198 
    std::uint8_t _[0x4]; // 0x119c 
    std::uint8_t _[0x4]; // 0x11a0 
    std::uint8_t _[0xc]; // 0x11a4 
    std::uint8_t _[0x4]; // 0x11b0 
    std::uint8_t _[0xc]; // 0x11b4 
    std::uint8_t _[0x4]; // 0x11c0 
    std::uint8_t _[0xc]; // 0x11c4 
    std::uint8_t _[0x4]; // 0x11d0 
    std::uint8_t _[0x4]; // 0x11d4 
    std::uint8_t _[0x4]; // 0x11d8 
    std::uint8_t _[0x4]; // 0x11dc 
    std::uint8_t _[0x1]; // 0x11e0 
    std::uint8_t _[0x3]; // 0x11e1 
    std::uint8_t _[0x4]; // 0x11e4 
    std::uint8_t _[0x4]; // 0x11e8 
    std::uint8_t _[0x4]; // 0x11ec 
    std::uint8_t _[0xc]; // 0x11f0 
    std::uint8_t _[0x4]; // 0x11fc 
    std::uint8_t _[0x4]; // 0x1200 
    std::uint8_t _[0x4]; // 0x1204 
    std::uint8_t _[0x4]; // 0x1208 
    std::uint8_t _[0x4]; // 0x120c 
    std::uint8_t _[0x4]; // 0x1210 
    std::uint8_t _[0x4]; // 0x1214 
    std::uint8_t _[0x4]; // 0x1218 
    std::uint8_t _[0x4]; // 0x121c 
    std::uint8_t _[0x4]; // 0x1220 
    std::uint8_t _[0xc]; // 0x1224 
    std::uint8_t _[0xc]; // 0x1230 
    std::uint8_t _[0xc]; // 0x123c 
    std::uint8_t _[0xc]; // 0x1248 
    std::uint8_t _[0xc]; // 0x1254 
    std::uint8_t _[0x4]; // 0x1260 
    std::uint8_t _[0xc]; // 0x1264 
    std::uint8_t _[0xc]; // 0x1270 
    std::uint8_t _[0xc]; // 0x127c 
    std::uint8_t _[0xc]; // 0x1288 
    std::uint8_t _[0xc]; // 0x1294 
    std::uint8_t _[0xc]; // 0x12a0 
    std::uint8_t _[0xc]; // 0x12ac 
    std::uint8_t _[0xc]; // 0x12b8 
    std::uint8_t _[0xc]; // 0x12c4 
    std::uint8_t _[0xc]; // 0x12d0 
    std::uint8_t _[0xc]; // 0x12dc 
    std::uint8_t _[0xc]; // 0x12e8 
    std::uint8_t _[0xc]; // 0x12f4 
    std::uint8_t _[0xc]; // 0x1300 
    std::uint8_t _[0xc]; // 0x130c 
    std::uint8_t _[0xc]; // 0x1318 
    std::uint8_t _[0xc]; // 0x1324 
    std::uint8_t _[0x50]; // 0x1330 
    std::uint8_t _[0x8]; // 0x1380 
    std::uint8_t _[0x20]; // 0x1388 
};

struct CPulseCell_LerpCameraSettings {
    static constexpr std::size_t size = 0x148;
    std::uint8_t pad_0[0x120]; // 0x0
    std::uint8_t _[0x4]; // 0x120 
    std::uint8_t _[0x10]; // 0x124 
    std::uint8_t _[0x14]; // 0x134 
};

struct CPointOffScreenIndicatorUi {
    static constexpr std::size_t size = 0x1310;
    std::uint8_t pad_0[0x1300]; // 0x0
    std::uint8_t _[0x1]; // 0x1300 
    std::uint8_t _[0x3]; // 0x1301 
    std::uint8_t _[0x4]; // 0x1304 
    std::uint8_t _[0x8]; // 0x1308 
};

struct CCSObserver_UseServices {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct C_PostProcessingVolume {
    static constexpr std::size_t size = 0x11c0;
    std::uint8_t pad_0[0x1190]; // 0x0
    std::uint8_t _[0x8]; // 0x1190 
    std::uint8_t _[0x4]; // 0x1198 
    std::uint8_t _[0x4]; // 0x119c 
    std::uint8_t _[0x4]; // 0x11a0 
    std::uint8_t _[0x4]; // 0x11a4 
    std::uint8_t _[0x4]; // 0x11a8 
    std::uint8_t _[0x4]; // 0x11ac 
    std::uint8_t _[0x4]; // 0x11b0 
    std::uint8_t _[0x4]; // 0x11b4 
    std::uint8_t _[0x4]; // 0x11b8 
    std::uint8_t _[0x1]; // 0x11bc 
    std::uint8_t _[0x3]; // 0x11bd 
};

struct CCSMinimapVolume {
    static constexpr std::size_t size = 0x11a8;
    std::uint8_t pad_0[0x1198]; // 0x0
    std::uint8_t _[0x10]; // 0x1198 
};

struct CCSPlayer_UseServices {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct C_BaseModelEntity__Emphasized_Phoneme {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x1]; // 0x1c 
    std::uint8_t _[0x1]; // 0x1d 
    std::uint8_t _[0x2]; // 0x1e 
};

struct C_CSGO_CounterTerroristWingmanIntroCamera {
    static constexpr std::size_t size = 0x690;
    std::uint8_t pad_0[0x690]; // 0x0
};

struct CPulseCell_PickBestOutflowSelector {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x18]; // 0x50 
};

struct CInfoFan {
    static constexpr std::size_t size = 0x658;
    std::uint8_t pad_0[0x640]; // 0x0
    std::uint8_t _[0x4]; // 0x640 
    std::uint8_t _[0x4]; // 0x644 
    std::uint8_t _[0x8]; // 0x648 
    std::uint8_t _[0x8]; // 0x650 
};

struct C_VoteController {
    static constexpr std::size_t size = 0x638;
    std::uint8_t pad_0[0x610]; // 0x0
    std::uint8_t _[0x4]; // 0x610 
    std::uint8_t _[0x4]; // 0x614 
    std::uint8_t _[0x14]; // 0x618 
    std::uint8_t _[0x4]; // 0x62c 
    std::uint8_t _[0x1]; // 0x630 
    std::uint8_t _[0x1]; // 0x631 
    std::uint8_t _[0x6]; // 0x632 
};

struct C_C4 {
    static constexpr std::size_t size = 0x1f60;
    std::uint8_t pad_0[0x1f20]; // 0x0
    std::uint8_t _[0x4]; // 0x1f20 
    std::uint8_t _[0x4]; // 0x1f24 
    std::uint8_t _[0x4]; // 0x1f28 
    std::uint8_t _[0x4]; // 0x1f2c 
    std::uint8_t _[0x1]; // 0x1f30 
    std::uint8_t _[0x7]; // 0x1f31 
    std::uint8_t _[0x18]; // 0x1f38 
    std::uint8_t _[0x4]; // 0x1f50 
    std::uint8_t _[0x7]; // 0x1f54 
    std::uint8_t _[0x5]; // 0x1f5b 
};

struct C_CSPlayerPawnBase {
    static constexpr std::size_t size = 0x1568;
    std::uint8_t pad_0[0x14d8]; // 0x0
    std::uint8_t _[0x8]; // 0x14d8 
    std::uint8_t _[0x4]; // 0x14e0 
    std::uint8_t _[0x4]; // 0x14e4 
    std::uint8_t _[0x4]; // 0x14e8 
    std::uint8_t _[0x4]; // 0x14ec 
    std::uint8_t _[0x4]; // 0x14f0 
    std::uint8_t _[0x4]; // 0x14f4 
    std::uint8_t _[0x4]; // 0x14f8 
    std::uint8_t _[0x4]; // 0x14fc 
    std::uint8_t _[0x4]; // 0x1500 
    std::uint8_t _[0x4]; // 0x1504 
    std::uint8_t _[0x1]; // 0x1508 
    std::uint8_t _[0x1]; // 0x1509 
    std::uint8_t _[0x2]; // 0x150a 
    std::uint8_t _[0x4]; // 0x150c 
    std::uint8_t _[0x4]; // 0x1510 
    std::uint8_t _[0x4]; // 0x1514 
    std::uint8_t _[0x4]; // 0x1518 
    std::uint8_t _[0x8]; // 0x151c 
    std::uint8_t _[0x4]; // 0x1524 
    std::uint8_t _[0x4]; // 0x1528 
    std::uint8_t _[0x4]; // 0x152c 
    std::uint8_t _[0x4]; // 0x1530 
    std::uint8_t _[0x4]; // 0x1534 
    std::uint8_t _[0x28]; // 0x1538 
    std::uint8_t _[0x8]; // 0x1560 
};

struct C_BreakableProp {
    static constexpr std::size_t size = 0x13e0;
    std::uint8_t pad_0[0x12a0]; // 0x0
    std::uint8_t _[0x40]; // 0x12a0 
    std::uint8_t _[0x18]; // 0x12e0 
    std::uint8_t _[0x18]; // 0x12f8 
    std::uint8_t _[0x20]; // 0x1310 
    std::uint8_t _[0x18]; // 0x1330 
    std::uint8_t _[0x4]; // 0x1348 
    std::uint8_t _[0x4]; // 0x134c 
    std::uint8_t _[0x4]; // 0x1350 
    std::uint8_t _[0x4]; // 0x1354 
    std::uint8_t _[0xc]; // 0x1358 
    std::uint8_t _[0x4]; // 0x1364 
    std::uint8_t _[0x4]; // 0x1368 
    std::uint8_t _[0x4]; // 0x136c 
    std::uint8_t _[0x8]; // 0x1370 
    std::uint8_t _[0x8]; // 0x1378 
    std::uint8_t _[0x8]; // 0x1380 
    std::uint8_t _[0x4]; // 0x1388 
    std::uint8_t _[0x4]; // 0x138c 
    std::uint8_t _[0x8]; // 0x1390 
    std::uint8_t _[0x8]; // 0x1398 
    std::uint8_t _[0x8]; // 0x13a0 
    std::uint8_t _[0x8]; // 0x13a8 
    std::uint8_t _[0x8]; // 0x13b0 
    std::uint8_t _[0x8]; // 0x13b8 
    std::uint8_t _[0x8]; // 0x13c0 
    std::uint8_t _[0x4]; // 0x13c8 
    std::uint8_t _[0x4]; // 0x13cc 
    std::uint8_t _[0x4]; // 0x13d0 
    std::uint8_t _[0xc]; // 0x13d4 
};

struct CCSGO_WingmanIntroTerroristPosition {
    static constexpr std::size_t size = 0x1d18;
    std::uint8_t pad_0[0x1d18]; // 0x0
};

struct C_RetakeGameRules {
    static constexpr std::size_t size = 0x158;
    std::uint8_t pad_0[0x138]; // 0x0
    std::uint8_t _[0x4]; // 0x138 
    std::uint8_t _[0x1]; // 0x13c 
    std::uint8_t _[0x3]; // 0x13d 
    std::uint8_t _[0x4]; // 0x140 
    std::uint8_t _[0x4]; // 0x144 
    std::uint8_t _[0x10]; // 0x148 
};

struct C_SoundOpvarSetDomeEntity {
    static constexpr std::size_t size = 0x620;
    std::uint8_t pad_0[0x620]; // 0x0
};

struct CPrecipitationVData {
    static constexpr std::size_t size = 0x2f0;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0xe0]; // 0x28 
    std::uint8_t _[0xe0]; // 0x108 
    std::uint8_t _[0xe0]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x2c8 
    std::uint8_t _[0x4]; // 0x2cc 
    std::uint8_t _[0x4]; // 0x2d0 
    std::uint8_t _[0x4]; // 0x2d4 
    std::uint8_t _[0x8]; // 0x2d8 
    std::uint8_t _[0x8]; // 0x2e0 
    std::uint8_t _[0x4]; // 0x2e8 
    std::uint8_t _[0x4]; // 0x2ec 
};

struct CPulseCell_WaitForObservable {
    static constexpr std::size_t size = 0x1b0;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x90]; // 0xd8 
    std::uint8_t _[0x48]; // 0x168 
};

struct C_SoundAreaEntitySphere {
    static constexpr std::size_t size = 0x630;
    std::uint8_t pad_0[0x628]; // 0x0
    std::uint8_t _[0x8]; // 0x628 
};

struct CPulseCell_Step_EntFire {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x8]; // 0x48 
};

struct C_WeaponAWP {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f50]; // 0x0
};

struct C_BaseButton {
    static constexpr std::size_t size = 0x10a8;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t _[0x4]; // 0x1098 
    std::uint8_t _[0x4]; // 0x109c 
    std::uint8_t _[0x8]; // 0x10a0 
};

struct CCSObserver_ObserverServices {
    static constexpr std::size_t size = 0x100;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t _[0x90]; // 0x70 
};

struct CHitboxComponent {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x14]; // 0x0
    std::uint8_t _[0x4]; // 0x14 
};

struct C_SoundEventBoxHelper {
    static constexpr std::size_t size = 0x618;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0xc]; // 0x600 
    std::uint8_t _[0xc]; // 0x60c 
};

struct C_SoundEventBoxEntity {
    static constexpr std::size_t size = 0x6d8;
    std::uint8_t pad_0[0x6c0]; // 0x0
    std::uint8_t _[0x18]; // 0x6c0 
};

struct ServerAuthoritativeWeaponSlot_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x2]; // 0x30 
    std::uint8_t _[0x2]; // 0x32 
    std::uint8_t _[0x4]; // 0x34 
};

struct C_CSMinimapBoundary {
    static constexpr std::size_t size = 0x600;
    std::uint8_t pad_0[0x600]; // 0x0
};

struct CPathQueryComponent {
    static constexpr std::size_t size = 0xa0;
    std::uint8_t pad_0[0xa0]; // 0x0
};

struct C_Precipitation {
    static constexpr std::size_t size = 0x11c0;
    std::uint8_t pad_0[0x1180]; // 0x0
    std::uint8_t _[0x10]; // 0x1180 
    std::uint8_t _[0x8]; // 0x1190 
    std::uint8_t _[0x14]; // 0x1198 
    std::uint8_t _[0x8]; // 0x11ac 
    std::uint8_t _[0x1]; // 0x11b4 
    std::uint8_t _[0x1]; // 0x11b5 
    std::uint8_t _[0x2]; // 0x11b6 
    std::uint8_t _[0x8]; // 0x11b8 
};

struct CLogicRelay {
    static constexpr std::size_t size = 0x638;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x18]; // 0x600 
    std::uint8_t _[0x18]; // 0x618 
    std::uint8_t _[0x1]; // 0x630 
    std::uint8_t _[0x1]; // 0x631 
    std::uint8_t _[0x1]; // 0x632 
    std::uint8_t _[0x1]; // 0x633 
    std::uint8_t _[0x4]; // 0x634 
};

struct SequenceHistory_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
};

struct CPlayer_ItemServices {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulse_OutflowConnection {
    static constexpr std::size_t size = 0x48;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x30]; // 0x18 
};

struct C_WeaponUMP45 {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f50]; // 0x0
};

struct C_WeaponG3SG1 {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f50]; // 0x0
};

struct C_SpotlightEnd {
    static constexpr std::size_t size = 0x10a8;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t _[0x4]; // 0x1098 
    std::uint8_t _[0xc]; // 0x109c 
};

struct C_Fish {
    static constexpr std::size_t size = 0x1358;
    std::uint8_t pad_0[0x1268]; // 0x0
    std::uint8_t _[0xc]; // 0x1268 
    std::uint8_t _[0xc]; // 0x1274 
    std::uint8_t _[0xc]; // 0x1280 
    std::uint8_t _[0x4]; // 0x128c 
    std::uint8_t _[0x4]; // 0x1290 
    std::uint8_t _[0x4]; // 0x1294 
    std::uint8_t _[0x8]; // 0x1298 
    std::uint8_t _[0x18]; // 0x12a0 
    std::uint8_t _[0x4]; // 0x12b8 
    std::uint8_t _[0x4]; // 0x12bc 
    std::uint8_t _[0xc]; // 0x12c0 
    std::uint8_t _[0xc]; // 0x12cc 
    std::uint8_t _[0xc]; // 0x12d8 
    std::uint8_t _[0x4]; // 0x12e4 
    std::uint8_t _[0x4]; // 0x12e8 
    std::uint8_t _[0x4]; // 0x12ec 
    std::uint8_t _[0x4]; // 0x12f0 
    std::uint8_t _[0x4]; // 0x12f4 
    std::uint8_t _[0x4]; // 0x12f8 
    std::uint8_t _[0x50]; // 0x12fc 
    std::uint8_t _[0x4]; // 0x134c 
    std::uint8_t _[0x4]; // 0x1350 
    std::uint8_t _[0x4]; // 0x1354 
};

struct C_WeaponFamas {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f50]; // 0x0
};

struct C_EnvVolumetricFogController {
    static constexpr std::size_t size = 0x6b0;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x4]; // 0x600 
    std::uint8_t _[0x4]; // 0x604 
    std::uint8_t _[0x4]; // 0x608 
    std::uint8_t _[0x4]; // 0x60c 
    std::uint8_t _[0x4]; // 0x610 
    std::uint8_t _[0x4]; // 0x614 
    std::uint8_t _[0x4]; // 0x618 
    std::uint8_t _[0x4]; // 0x61c 
    std::uint8_t _[0x4]; // 0x620 
    std::uint8_t _[0x4]; // 0x624 
    std::uint8_t _[0x4]; // 0x628 
    std::uint8_t _[0x4]; // 0x62c 
    std::uint8_t _[0x4]; // 0x630 
    std::uint8_t _[0xc]; // 0x634 
    std::uint8_t _[0xc]; // 0x640 
    std::uint8_t _[0x4]; // 0x64c 
    std::uint8_t _[0x4]; // 0x650 
    std::uint8_t _[0x4]; // 0x654 
    std::uint8_t _[0x4]; // 0x658 
    std::uint8_t _[0x4]; // 0x65c 
    std::uint8_t _[0x4]; // 0x660 
    std::uint8_t _[0x4]; // 0x664 
    std::uint8_t _[0x4]; // 0x668 
    std::uint8_t _[0x4]; // 0x66c 
    std::uint8_t _[0x4]; // 0x670 
    std::uint8_t _[0x1]; // 0x674 
    std::uint8_t _[0x1]; // 0x675 
    std::uint8_t _[0x2]; // 0x676 
    std::uint8_t _[0x8]; // 0x678 
    std::uint8_t _[0x4]; // 0x680 
    std::uint8_t _[0x4]; // 0x684 
    std::uint8_t _[0x4]; // 0x688 
    std::uint8_t _[0xc]; // 0x68c 
    std::uint8_t _[0x4]; // 0x698 
    std::uint8_t _[0xc]; // 0x69c 
    std::uint8_t _[0x8]; // 0x6a8 
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

struct C_EnvDetailController {
    static constexpr std::size_t size = 0x608;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x4]; // 0x600 
    std::uint8_t _[0x4]; // 0x604 
};

struct CHostageRescueZoneShim {
    static constexpr std::size_t size = 0x1180;
    std::uint8_t pad_0[0x1180]; // 0x0
};

struct CEnvSoundscapeAlias_snd_soundscape {
    static constexpr std::size_t size = 0x690;
    std::uint8_t pad_0[0x690]; // 0x0
};

struct CCSPlayer_HostageServices {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
};

struct C_GameRulesProxy {
    static constexpr std::size_t size = 0x600;
    std::uint8_t pad_0[0x600]; // 0x0
};

struct CRenderComponent {
    static constexpr std::size_t size = 0xd0;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x40]; // 0x10 
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0x4]; // 0x54 
    std::uint8_t _[0x50]; // 0x58 
    std::uint8_t _[0x28]; // 0xa8 
};

struct C_Team {
    static constexpr std::size_t size = 0x6b8;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x18]; // 0x600 
    std::uint8_t _[0x18]; // 0x618 
    std::uint8_t _[0x4]; // 0x630 
    std::uint8_t _[0x84]; // 0x634 
};

struct C_PathParticleRopeAlias_path_particle_rope_clientside {
    static constexpr std::size_t size = 0x710;
    std::uint8_t pad_0[0x710]; // 0x0
};

struct CPointChildModifier {
    static constexpr std::size_t size = 0x608;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x8]; // 0x600 
};

struct CCSPlayerLegacyJump {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
};

struct C_WeaponNOVA {
    static constexpr std::size_t size = 0x1f20;
    std::uint8_t pad_0[0x1f20]; // 0x0
};

struct C_CS2HudModelAddon {
    static constexpr std::size_t size = 0x1330;
    std::uint8_t pad_0[0x1330]; // 0x0
};

struct C_DEagle {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f50]; // 0x0
};

struct C_TriggerMultiple {
    static constexpr std::size_t size = 0x1180;
    std::uint8_t pad_0[0x1180]; // 0x0
};

struct C_CSGO_TerroristRushIntroCamera {
    static constexpr std::size_t size = 0x690;
    std::uint8_t pad_0[0x690]; // 0x0
};

struct C_CSGO_TeamPreviewCamera {
    static constexpr std::size_t size = 0x690;
    std::uint8_t pad_0[0x688]; // 0x0
    std::uint8_t _[0x8]; // 0x688 
};

struct C_ColorCorrectionVolume {
    static constexpr std::size_t size = 0x13a8;
    std::uint8_t pad_0[0x1180]; // 0x0
    std::uint8_t _[0x4]; // 0x1180 
    std::uint8_t _[0x4]; // 0x1184 
    std::uint8_t _[0x4]; // 0x1188 
    std::uint8_t _[0x4]; // 0x118c 
    std::uint8_t _[0x4]; // 0x1190 
    std::uint8_t _[0x4]; // 0x1194 
    std::uint8_t _[0x4]; // 0x1198 
    std::uint8_t _[0x4]; // 0x119c 
    std::uint8_t _[0x208]; // 0x11a0 
};

struct CPlayer_MovementServices {
    static constexpr std::size_t size = 0x258;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x20]; // 0x50 
    std::uint8_t _[0x8]; // 0x70 
    std::uint8_t _[0x8]; // 0x78 
    std::uint8_t _[0x8]; // 0x80 
    std::uint8_t _[0x100]; // 0x88 
    std::uint8_t _[0x8]; // 0x188 
    std::uint8_t _[0x10]; // 0x190 
    std::uint8_t _[0x4]; // 0x1a0 
    std::uint8_t _[0x4]; // 0x1a4 
    std::uint8_t _[0x4]; // 0x1a8 
    std::uint8_t _[0x4]; // 0x1ac 
    std::uint8_t _[0x10]; // 0x1b0 
    std::uint8_t _[0x4]; // 0x1c0 
    std::uint8_t _[0x4]; // 0x1c4 
    std::uint8_t _[0x4]; // 0x1c8 
    std::uint8_t _[0x74]; // 0x1cc 
    std::uint8_t _[0x18]; // 0x240 
};

struct CInfoDynamicShadowHintBox {
    static constexpr std::size_t size = 0x630;
    std::uint8_t pad_0[0x618]; // 0x0
    std::uint8_t _[0xc]; // 0x618 
    std::uint8_t _[0xc]; // 0x624 
};

struct CBaseAnimGraphController {
    static constexpr std::size_t size = 0x6a0;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x18]; // 0x20 
    std::uint8_t _[0x18]; // 0x38 
    std::uint8_t _[0x8]; // 0x50 
    std::uint8_t _[0x4]; // 0x58 
    std::uint8_t _[0x54]; // 0x5c 
    std::uint8_t _[0x4]; // 0xb0 
    std::uint8_t _[0x4]; // 0xb4 
    std::uint8_t _[0x4]; // 0xb8 
    std::uint8_t _[0x4]; // 0xbc 
    std::uint8_t _[0xc]; // 0xc0 
    std::uint8_t _[0x1]; // 0xcc 
    std::uint8_t _[0x1]; // 0xcd 
    std::uint8_t _[0x1]; // 0xce 
    std::uint8_t _[0x1]; // 0xcf 
    std::uint8_t _[0x4]; // 0xd0 
    std::uint8_t _[0x29c]; // 0xd4 
    std::uint8_t _[0x8]; // 0x370 
    std::uint8_t _[0x68]; // 0x378 
    std::uint8_t _[0x18]; // 0x3e0 
    std::uint8_t _[0x4]; // 0x3f8 
    std::uint8_t _[0x4]; // 0x3fc 
    std::uint8_t _[0x4]; // 0x400 
    std::uint8_t _[0x4]; // 0x404 
    std::uint8_t _[0x8]; // 0x408 
    std::uint8_t _[0x18]; // 0x410 
    std::uint8_t _[0x18]; // 0x428 
    std::uint8_t _[0x8]; // 0x440 
    std::uint8_t _[0x220]; // 0x448 
    std::uint8_t _[0x31]; // 0x668 
    std::uint8_t _[0x7]; // 0x699 
};

struct C_ColorCorrection {
    static constexpr std::size_t size = 0x848;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0xc]; // 0x600 
    std::uint8_t _[0x4]; // 0x60c 
    std::uint8_t _[0x4]; // 0x610 
    std::uint8_t _[0x4]; // 0x614 
    std::uint8_t _[0x4]; // 0x618 
    std::uint8_t _[0x4]; // 0x61c 
    std::uint8_t _[0x4]; // 0x620 
    std::uint8_t _[0x200]; // 0x624 
    std::uint8_t _[0x1]; // 0x824 
    std::uint8_t _[0x1]; // 0x825 
    std::uint8_t _[0x1]; // 0x826 
    std::uint8_t _[0x1]; // 0x827 
    std::uint8_t _[0x4]; // 0x828 
    std::uint8_t _[0x4]; // 0x82c 
    std::uint8_t _[0x4]; // 0x830 
    std::uint8_t _[0x4]; // 0x834 
    std::uint8_t _[0x4]; // 0x838 
    std::uint8_t _[0xc]; // 0x83c 
};

struct AnimGraph2SerializedPoseRecipeSlot_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x10]; // 0x30 
};

struct CBuoyancyHelper {
    static constexpr std::size_t size = 0x118;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x10]; // 0x8 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x18]; // 0x30 
    std::uint8_t _[0x18]; // 0x48 
    std::uint8_t _[0x18]; // 0x60 
    std::uint8_t _[0xa0]; // 0x78 
};

struct C_PhysBox {
    static constexpr std::size_t size = 0x1098;
    std::uint8_t pad_0[0x1098]; // 0x0
};

struct CCSPlayer_CameraServices {
    static constexpr std::size_t size = 0x350;
    std::uint8_t pad_0[0x2b0]; // 0x0
    std::uint8_t _[0x4]; // 0x2b0 
    std::uint8_t _[0x4]; // 0x2b4 
    std::uint8_t _[0x8]; // 0x2b8 
    std::uint8_t _[0x90]; // 0x2c0 
};

struct CFilterMultiple {
    static constexpr std::size_t size = 0x6b8;
    std::uint8_t pad_0[0x638]; // 0x0
    std::uint8_t _[0x8]; // 0x638 
    std::uint8_t _[0x50]; // 0x640 
    std::uint8_t _[0x28]; // 0x690 
};

struct CPulseCell_FireCursors {
    static constexpr std::size_t size = 0x140;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x18]; // 0xd8 
    std::uint8_t _[0x8]; // 0xf0 
    std::uint8_t _[0x48]; // 0xf8 
};

struct CEnvSoundscape {
    static constexpr std::size_t size = 0x690;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x18]; // 0x600 
    std::uint8_t _[0x8]; // 0x618 
    std::uint8_t _[0x8]; // 0x620 
    std::uint8_t _[0x4]; // 0x628 
    std::uint8_t _[0x4]; // 0x62c 
    std::uint8_t _[0x8]; // 0x630 
    std::uint8_t _[0x40]; // 0x638 
    std::uint8_t _[0x4]; // 0x678 
    std::uint8_t _[0x4]; // 0x67c 
    std::uint8_t _[0x8]; // 0x680 
    std::uint8_t _[0x8]; // 0x688 
};

struct C_SoundEventEntityAlias_snd_event_point {
    static constexpr std::size_t size = 0x6c0;
    std::uint8_t pad_0[0x6c0]; // 0x0
};

struct C_FogController {
    static constexpr std::size_t size = 0x670;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x68]; // 0x600 
    std::uint8_t _[0x4]; // 0x668 
    std::uint8_t _[0x4]; // 0x66c 
};

struct C_SoundOpvarSetOBBWindEntity {
    static constexpr std::size_t size = 0x620;
    std::uint8_t pad_0[0x620]; // 0x0
};

struct C_MolotovGrenade {
    static constexpr std::size_t size = 0x1fe0;
    std::uint8_t pad_0[0x1fe0]; // 0x0
};

struct C_NetTestBaseCombatCharacter {
    static constexpr std::size_t size = 0x12f0;
    std::uint8_t pad_0[0x12f0]; // 0x0
};

struct CBodyComponentPoint {
    static constexpr std::size_t size = 0x1b0;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t _[0x130]; // 0x80 
};

struct C_WeaponM4A1Silencer {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f50]; // 0x0
};

struct C_SkyCameraVolume {
    static constexpr std::size_t size = 0x658;
    std::uint8_t pad_0[0x618]; // 0x0
    std::uint8_t _[0xc]; // 0x618 
    std::uint8_t _[0xc]; // 0x624 
    std::uint8_t _[0x4]; // 0x630 
    std::uint8_t _[0x4]; // 0x634 
    std::uint8_t _[0x1]; // 0x638 
    std::uint8_t _[0x3]; // 0x639 
    std::uint8_t _[0xc]; // 0x63c 
    std::uint8_t _[0x1]; // 0x648 
    std::uint8_t _[0x1]; // 0x649 
    std::uint8_t _[0x6]; // 0x64a 
    std::uint8_t _[0x8]; // 0x650 
};

struct C_EconItemView {
    static constexpr std::size_t size = 0x5b0;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t _[0x1]; // 0x60 
    std::uint8_t _[0x1f]; // 0x61 
    std::uint8_t _[0x4]; // 0x80 
    std::uint8_t _[0x4]; // 0x84 
    std::uint8_t _[0x130]; // 0x88 
    std::uint8_t _[0x2]; // 0x1b8 
    std::uint8_t _[0x2]; // 0x1ba 
    std::uint8_t _[0x4]; // 0x1bc 
    std::uint8_t _[0x8]; // 0x1c0 
    std::uint8_t _[0x8]; // 0x1c8 
    std::uint8_t _[0x4]; // 0x1d0 
    std::uint8_t _[0x4]; // 0x1d4 
    std::uint8_t _[0x4]; // 0x1d8 
    std::uint8_t _[0xc]; // 0x1dc 
    std::uint8_t _[0x1]; // 0x1e8 
    std::uint8_t _[0x1]; // 0x1e9 
    std::uint8_t _[0x1]; // 0x1ea 
    std::uint8_t _[0x1]; // 0x1eb 
    std::uint8_t _[0x4]; // 0x1ec 
    std::uint8_t _[0x4]; // 0x1f0 
    std::uint8_t _[0x4]; // 0x1f4 
    std::uint8_t _[0x4]; // 0x1f8 
    std::uint8_t _[0x1]; // 0x1fc 
    std::uint8_t _[0xb]; // 0x1fd 
    std::uint8_t _[0x78]; // 0x208 
    std::uint8_t _[0x78]; // 0x280 
    std::uint8_t _[0xa1]; // 0x2f8 
    std::uint8_t _[0xa1]; // 0x399 
    std::uint8_t _[0xa1]; // 0x43a 
    std::uint8_t _[0xcd]; // 0x4db 
    std::uint8_t _[0x8]; // 0x5a8 
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

struct C_SoundEventPathCornerEntity {
    static constexpr std::size_t size = 0x6d8;
    std::uint8_t pad_0[0x6c0]; // 0x0
    std::uint8_t _[0x18]; // 0x6c0 
};

struct C_InfoVisibilityBox {
    static constexpr std::size_t size = 0x618;
    std::uint8_t pad_0[0x604]; // 0x0
    std::uint8_t _[0x4]; // 0x604 
    std::uint8_t _[0xc]; // 0x608 
    std::uint8_t _[0x4]; // 0x614 
};

struct CCSPlayer_ItemServices {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x1]; // 0x48 
    std::uint8_t _[0x7]; // 0x49 
};

struct CPulseCell_Value_Gradient {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x18]; // 0x48 
};

struct IntervalTimer {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
};

struct audioparams_t {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x60]; // 0x8 
    std::uint8_t _[0x4]; // 0x68 
    std::uint8_t _[0x4]; // 0x6c 
    std::uint8_t _[0x4]; // 0x70 
    std::uint8_t _[0x4]; // 0x74 
};

struct C_PathParticleRope {
    static constexpr std::size_t size = 0x710;
    std::uint8_t pad_0[0x608]; // 0x0
    std::uint8_t _[0x4]; // 0x608 
    std::uint8_t _[0x4]; // 0x60c 
    std::uint8_t _[0x8]; // 0x610 
    std::uint8_t _[0x18]; // 0x618 
    std::uint8_t _[0x4]; // 0x630 
    std::uint8_t _[0x4]; // 0x634 
    std::uint8_t _[0x4]; // 0x638 
    std::uint8_t _[0x4]; // 0x63c 
    std::uint8_t _[0x8]; // 0x640 
    std::uint8_t _[0x8]; // 0x648 
    std::uint8_t _[0x18]; // 0x650 
    std::uint8_t _[0x18]; // 0x668 
    std::uint8_t _[0x18]; // 0x680 
    std::uint8_t _[0x18]; // 0x698 
    std::uint8_t _[0x18]; // 0x6b0 
    std::uint8_t _[0x48]; // 0x6c8 
};

struct C_DecoyProjectile {
    static constexpr std::size_t size = 0x1378;
    std::uint8_t pad_0[0x1348]; // 0x0
    std::uint8_t _[0x4]; // 0x1348 
    std::uint8_t _[0x24]; // 0x134c 
    std::uint8_t _[0x8]; // 0x1370 
};

struct C_AttributeContainer {
    static constexpr std::size_t size = 0x610;
    std::uint8_t pad_0[0x50]; // 0x0
    std::uint8_t _[0x5b0]; // 0x50 
    std::uint8_t _[0x8]; // 0x600 
    std::uint8_t _[0x8]; // 0x608 
};

struct C_CSWeaponBase {
    static constexpr std::size_t size = 0x1f20;
    std::uint8_t pad_0[0x19a8]; // 0x0
    std::uint8_t _[0x4]; // 0x19a8 
    std::uint8_t _[0x4]; // 0x19ac 
    std::uint8_t _[0x4]; // 0x19b0 
    std::uint8_t _[0x1]; // 0x19b4 
    std::uint8_t _[0x2b]; // 0x19b5 
    std::uint8_t _[0x4]; // 0x19e0 
    std::uint8_t _[0x4]; // 0x19e4 
    std::uint8_t _[0x18]; // 0x19e8 
    std::uint8_t _[0x4]; // 0x1a00 
    std::uint8_t _[0x4]; // 0x1a04 
    std::uint8_t _[0xc]; // 0x1a08 
    std::uint8_t _[0x4]; // 0x1a14 
    std::uint8_t _[0x4]; // 0x1a18 
    std::uint8_t _[0x4]; // 0x1a1c 
    std::uint8_t _[0x4]; // 0x1a20 
    std::uint8_t _[0x4]; // 0x1a24 
    std::uint8_t _[0x4]; // 0x1a28 
    std::uint8_t _[0x4]; // 0x1a2c 
    std::uint8_t _[0x4]; // 0x1a30 
    std::uint8_t _[0x4]; // 0x1a34 
    std::uint8_t _[0x4]; // 0x1a38 
    std::uint8_t _[0x4]; // 0x1a3c 
    std::uint8_t _[0x4]; // 0x1a40 
    std::uint8_t _[0x4]; // 0x1a44 
    std::uint8_t _[0x8]; // 0x1a48 
    std::uint8_t _[0x1]; // 0x1a50 
    std::uint8_t _[0x3]; // 0x1a51 
    std::uint8_t _[0x4]; // 0x1a54 
    std::uint8_t _[0x1]; // 0x1a58 
    std::uint8_t _[0x3]; // 0x1a59 
    std::uint8_t _[0x4]; // 0x1a5c 
    std::uint8_t _[0x4]; // 0x1a60 
    std::uint8_t _[0x4]; // 0x1a64 
    std::uint8_t _[0x4]; // 0x1a68 
    std::uint8_t _[0x4]; // 0x1a6c 
    std::uint8_t _[0x4]; // 0x1a70 
    std::uint8_t _[0xac]; // 0x1a74 
    std::uint8_t _[0x1]; // 0x1b20 
    std::uint8_t _[0x1]; // 0x1b21 
    std::uint8_t _[0x2]; // 0x1b22 
    std::uint8_t _[0xc]; // 0x1b24 
    std::uint8_t _[0x4]; // 0x1b30 
    std::uint8_t _[0x4]; // 0x1b34 
    std::uint8_t _[0x4]; // 0x1b38 
    std::uint8_t _[0x4]; // 0x1b3c 
    std::uint8_t _[0x24]; // 0x1b40 
    std::uint8_t _[0x4]; // 0x1b64 
    std::uint8_t _[0x4]; // 0x1b68 
    std::uint8_t _[0x1]; // 0x1b6c 
    std::uint8_t _[0x3]; // 0x1b6d 
    std::uint8_t _[0x4]; // 0x1b70 
    std::uint8_t _[0x5c]; // 0x1b74 
    std::uint8_t _[0xb0]; // 0x1bd0 
    std::uint8_t _[0x78]; // 0x1c80 
    std::uint8_t _[0x60]; // 0x1cf8 
    std::uint8_t _[0x14]; // 0x1d58 
    std::uint8_t _[0x1b4]; // 0x1d6c 
};

struct CTimeline {
    static constexpr std::size_t size = 0x228;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x100]; // 0x10 
    std::uint8_t _[0x100]; // 0x110 
    std::uint8_t _[0x4]; // 0x210 
    std::uint8_t _[0x4]; // 0x214 
    std::uint8_t _[0x4]; // 0x218 
    std::uint8_t _[0x4]; // 0x21c 
    std::uint8_t _[0x8]; // 0x220 
};

struct C_TonemapController2 {
    static constexpr std::size_t size = 0x618;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x4]; // 0x600 
    std::uint8_t _[0x4]; // 0x604 
    std::uint8_t _[0x4]; // 0x608 
    std::uint8_t _[0x4]; // 0x60c 
    std::uint8_t _[0x8]; // 0x610 
};

struct CountdownTimer {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
};

struct CNoiseStreamData {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x50]; // 0x0 
};

struct PulseNodeDynamicOutflows_t__DynamicOutflow_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x48]; // 0x8 
};

struct C_WeaponMag7 {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f50]; // 0x0
};

struct WeaponPurchaseCount_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x2]; // 0x30 
    std::uint8_t _[0x6]; // 0x32 
};

struct CBasePulseGraphInstance {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x88]; // 0x0
};

struct FilterHealth {
    static constexpr std::size_t size = 0x648;
    std::uint8_t pad_0[0x638]; // 0x0
    std::uint8_t _[0x4]; // 0x638 
    std::uint8_t _[0x4]; // 0x63c 
    std::uint8_t _[0x8]; // 0x640 
};

struct C_PointClientUIHUD {
    static constexpr std::size_t size = 0x1290;
    std::uint8_t pad_0[0x10d0]; // 0x0
    std::uint8_t _[0x178]; // 0x10d0 
    std::uint8_t _[0x4]; // 0x1248 
    std::uint8_t _[0x4]; // 0x124c 
    std::uint8_t _[0x4]; // 0x1250 
    std::uint8_t _[0x4]; // 0x1254 
    std::uint8_t _[0x4]; // 0x1258 
    std::uint8_t _[0x4]; // 0x125c 
    std::uint8_t _[0x4]; // 0x1260 
    std::uint8_t _[0x4]; // 0x1264 
    std::uint8_t _[0x4]; // 0x1268 
    std::uint8_t _[0x4]; // 0x126c 
    std::uint8_t _[0x8]; // 0x1270 
    std::uint8_t _[0x18]; // 0x1278 
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

struct C_InfoLadderDismount {
    static constexpr std::size_t size = 0x600;
    std::uint8_t pad_0[0x600]; // 0x0
};

struct C_PointCommentaryNode {
    static constexpr std::size_t size = 0x12c8;
    std::uint8_t pad_0[0x1280]; // 0x0
    std::uint8_t _[0x1]; // 0x1280 
    std::uint8_t _[0x3]; // 0x1281 
    std::uint8_t _[0x4]; // 0x1284 
    std::uint8_t _[0x4]; // 0x1288 
    std::uint8_t _[0x4]; // 0x128c 
    std::uint8_t _[0x8]; // 0x1290 
    std::uint8_t _[0x8]; // 0x1298 
    std::uint8_t _[0x8]; // 0x12a0 
    std::uint8_t _[0x4]; // 0x12a8 
    std::uint8_t _[0x4]; // 0x12ac 
    std::uint8_t _[0x8]; // 0x12b0 
    std::uint8_t _[0x8]; // 0x12b8 
    std::uint8_t _[0x4]; // 0x12c0 
    std::uint8_t _[0x4]; // 0x12c4 
};

struct CSpriteOriented {
    static constexpr std::size_t size = 0x1118;
    std::uint8_t pad_0[0x1118]; // 0x0
};

struct shard_model_desc_t {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x8]; // 0x24 
    std::uint8_t _[0x8]; // 0x2c 
    std::uint8_t _[0xc]; // 0x34 
    std::uint8_t _[0x18]; // 0x40 
    std::uint8_t _[0x18]; // 0x58 
    std::uint8_t _[0x4]; // 0x70 
    std::uint8_t _[0x1]; // 0x74 
    std::uint8_t _[0x3]; // 0x75 
    std::uint8_t _[0x8]; // 0x78 
};

struct C_KeychainModule {
    static constexpr std::size_t size = 0x1278;
    std::uint8_t pad_0[0x1270]; // 0x0
    std::uint8_t _[0x4]; // 0x1270 
    std::uint8_t _[0x4]; // 0x1274 
};

struct CFuncWater {
    static constexpr std::size_t size = 0x11b0;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t _[0x118]; // 0x1098 
};

struct CCSPlayer_GlowServices {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x50]; // 0x0
};

struct CCSGameModeRules {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x28]; // 0x8 
};

struct C_Flashbang {
    static constexpr std::size_t size = 0x1fe0;
    std::uint8_t pad_0[0x1fe0]; // 0x0
};

struct C_PointClientUIWorldTextPanel {
    static constexpr std::size_t size = 0x1500;
    std::uint8_t pad_0[0x1300]; // 0x0
    std::uint8_t _[0x200]; // 0x1300 
};

struct CCSPlayer_WaterServices {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0xc]; // 0x4c 
    std::uint8_t _[0x18]; // 0x58 
};

struct C_CSObserverPawn {
    static constexpr std::size_t size = 0x1570;
    std::uint8_t pad_0[0x1568]; // 0x0
    std::uint8_t _[0x8]; // 0x1568 
};

struct ViewAngleServerChange_t {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0xc]; // 0x34 
    std::uint8_t _[0x8]; // 0x40 
};

struct C_FuncLadder {
    static constexpr std::size_t size = 0x10f0;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t _[0x10]; // 0x1098 
    std::uint8_t _[0x18]; // 0x10a8 
    std::uint8_t _[0xc]; // 0x10c0 
    std::uint8_t _[0xc]; // 0x10cc 
    std::uint8_t _[0xc]; // 0x10d8 
    std::uint8_t _[0x4]; // 0x10e4 
    std::uint8_t _[0x1]; // 0x10e8 
    std::uint8_t _[0x1]; // 0x10e9 
    std::uint8_t _[0x6]; // 0x10ea 
};

struct C_WeaponMP5SD {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f50]; // 0x0
};

struct C_World {
    static constexpr std::size_t size = 0x1098;
    std::uint8_t pad_0[0x1098]; // 0x0
};

struct C_CSGO_TeamSelectCounterTerroristPosition {
    static constexpr std::size_t size = 0x1d18;
    std::uint8_t pad_0[0x1d18]; // 0x0
};

struct C_WeaponGalilAR {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f50]; // 0x0
};

struct CCSPlayerBase_CameraServices {
    static constexpr std::size_t size = 0x2b0;
    std::uint8_t pad_0[0x298]; // 0x0
    std::uint8_t _[0x4]; // 0x298 
    std::uint8_t _[0x4]; // 0x29c 
    std::uint8_t _[0x4]; // 0x2a0 
    std::uint8_t _[0x4]; // 0x2a4 
    std::uint8_t _[0x4]; // 0x2a8 
    std::uint8_t _[0x4]; // 0x2ac 
};

struct C_TeamplayRules {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x40]; // 0x0
};

struct CPulseCell_Inflow_BaseEntrypoint {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x30]; // 0x50 
};

struct C_WeaponSG556 {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f50]; // 0x0
};

struct C_CSPlayerPawn {
    static constexpr std::size_t size = 0x3720;
    std::uint8_t pad_0[0x1570]; // 0x0
    std::uint8_t _[0x8]; // 0x1570 
    std::uint8_t _[0x8]; // 0x1578 
    std::uint8_t _[0x8]; // 0x1580 
    std::uint8_t _[0x8]; // 0x1588 
    std::uint8_t _[0x8]; // 0x1590 
    std::uint8_t _[0x8]; // 0x1598 
    std::uint8_t _[0x8]; // 0x15a0 
    std::uint8_t _[0x4]; // 0x15a8 
    std::uint8_t _[0x4]; // 0x15ac 
    std::uint8_t _[0x4]; // 0x15b0 
    std::uint8_t _[0x4]; // 0x15b4 
    std::uint8_t _[0x4]; // 0x15b8 
    std::uint8_t _[0x12]; // 0x15bc 
    std::uint8_t _[0x1]; // 0x15ce 
    std::uint8_t _[0x1]; // 0x15cf 
    std::uint8_t _[0x4]; // 0x15d0 
    std::uint8_t _[0x4]; // 0x15d4 
    std::uint8_t _[0x4]; // 0x15d8 
    std::uint8_t _[0x4]; // 0x15dc 
    std::uint8_t _[0x1]; // 0x15e0 
    std::uint8_t _[0x1]; // 0x15e1 
    std::uint8_t _[0x2]; // 0x15e2 
    std::uint8_t _[0x4]; // 0x15e4 
    std::uint8_t _[0x1]; // 0x15e8 
    std::uint8_t _[0x1]; // 0x15e9 
    std::uint8_t _[0x2]; // 0x15ea 
    std::uint8_t _[0x4]; // 0x15ec 
    std::uint8_t _[0x168]; // 0x15f0 
    std::uint8_t _[0x4]; // 0x1758 
    std::uint8_t _[0x4]; // 0x175c 
    std::uint8_t _[0x1]; // 0x1760 
    std::uint8_t _[0x3]; // 0x1761 
    std::uint8_t _[0x4]; // 0x1764 
    std::uint8_t _[0x5]; // 0x1768 
    std::uint8_t _[0x3]; // 0x176d 
    std::uint8_t _[0x5b0]; // 0x1770 
    std::uint8_t _[0x1]; // 0x1d20 
    std::uint8_t _[0x3]; // 0x1d21 
    std::uint8_t _[0x4]; // 0x1d24 
    std::uint8_t _[0xc]; // 0x1d28 
    std::uint8_t _[0x40]; // 0x1d34 
    std::uint8_t _[0x4]; // 0x1d74 
    std::uint8_t _[0xc]; // 0x1d78 
    std::uint8_t _[0x4]; // 0x1d84 
    std::uint8_t _[0x20]; // 0x1d88 
    std::uint8_t _[0x4]; // 0x1da8 
    std::uint8_t _[0xc]; // 0x1dac 
    std::uint8_t _[0x4]; // 0x1db8 
    std::uint8_t _[0x4]; // 0x1dbc 
    std::uint8_t _[0x4]; // 0x1dc0 
    std::uint8_t _[0x4]; // 0x1dc4 
    std::uint8_t _[0x4]; // 0x1dc8 
    std::uint8_t _[0x4]; // 0x1dcc 
    std::uint8_t _[0x48]; // 0x1dd0 
    std::uint8_t _[0x50]; // 0x1e18 
    std::uint8_t _[0x18]; // 0x1e68 
    std::uint8_t _[0x8]; // 0x1e80 
    std::uint8_t _[0x18]; // 0x1e88 
    std::uint8_t _[0x1]; // 0x1ea0 
    std::uint8_t _[0x1]; // 0x1ea1 
    std::uint8_t _[0x1]; // 0x1ea2 
    std::uint8_t _[0x1]; // 0x1ea3 
    std::uint8_t _[0x4]; // 0x1ea4 
    std::uint8_t _[0x4]; // 0x1ea8 
    std::uint8_t _[0x4]; // 0x1eac 
    std::uint8_t _[0x4]; // 0x1eb0 
    std::uint8_t _[0x4]; // 0x1eb4 
    std::uint8_t _[0x4]; // 0x1eb8 
    std::uint8_t _[0x4]; // 0x1ebc 
    std::uint8_t _[0x4]; // 0x1ec0 
    std::uint8_t _[0x4]; // 0x1ec4 
    std::uint8_t _[0x5]; // 0x1ec8 
    std::uint8_t _[0x3]; // 0x1ecd 
    std::uint8_t _[0x4]; // 0x1ed0 
    std::uint8_t _[0x2]; // 0x1ed4 
    std::uint8_t _[0x2]; // 0x1ed6 
    std::uint8_t _[0x4]; // 0x1ed8 
    std::uint8_t _[0x4]; // 0x1edc 
    std::uint8_t _[0x1]; // 0x1ee0 
    std::uint8_t _[0x3]; // 0x1ee1 
    std::uint8_t _[0x4]; // 0x1ee4 
    std::uint8_t _[0x38]; // 0x1ee8 
    std::uint8_t _[0x4]; // 0x1f20 
    std::uint8_t _[0x4]; // 0x1f24 
    std::uint8_t _[0xc]; // 0x1f28 
    std::uint8_t _[0xc]; // 0x1f34 
    std::uint8_t _[0xc]; // 0x1f40 
    std::uint8_t _[0xc]; // 0x1f4c 
    std::uint8_t _[0x15a8]; // 0x1f58 
    std::uint8_t _[0x4]; // 0x3500 
    std::uint8_t _[0x4]; // 0x3504 
    std::uint8_t _[0x4]; // 0x3508 
    std::uint8_t _[0x4]; // 0x350c 
    std::uint8_t _[0x4]; // 0x3510 
    std::uint8_t _[0x74]; // 0x3514 
    std::uint8_t _[0x78]; // 0x3588 
    std::uint8_t _[0x90]; // 0x3600 
    std::uint8_t _[0x10]; // 0x3690 
    std::uint8_t _[0x30]; // 0x36a0 
    std::uint8_t _[0xc]; // 0x36d0 
    std::uint8_t _[0x4]; // 0x36dc 
    std::uint8_t _[0x18]; // 0x36e0 
    std::uint8_t _[0x4]; // 0x36f8 
    std::uint8_t _[0x4]; // 0x36fc 
    std::uint8_t _[0x20]; // 0x3700 
};

struct C_CSGO_TeamIntroTerroristPosition {
    static constexpr std::size_t size = 0x1d18;
    std::uint8_t pad_0[0x1d18]; // 0x0
};

struct CPulseCell_WaitForCursorsWithTagBase {
    static constexpr std::size_t size = 0x128;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x8]; // 0xd8 
    std::uint8_t _[0x48]; // 0xe0 
};

struct C_Hostage {
    static constexpr std::size_t size = 0x13c0;
    std::uint8_t pad_0[0x12f0]; // 0x0
    std::uint8_t _[0x18]; // 0x12f0 
    std::uint8_t _[0x8]; // 0x1308 
    std::uint8_t _[0x18]; // 0x1310 
    std::uint8_t _[0xc]; // 0x1328 
    std::uint8_t _[0x1]; // 0x1334 
    std::uint8_t _[0x3]; // 0x1335 
    std::uint8_t _[0x4]; // 0x1338 
    std::uint8_t _[0x4]; // 0x133c 
    std::uint8_t _[0x4]; // 0x1340 
    std::uint8_t _[0x4]; // 0x1344 
    std::uint8_t _[0xc]; // 0x1348 
    std::uint8_t _[0x4]; // 0x1354 
    std::uint8_t _[0x4]; // 0x1358 
    std::uint8_t _[0x4]; // 0x135c 
    std::uint8_t _[0x8]; // 0x1360 
    std::uint8_t _[0x18]; // 0x1368 
    std::uint8_t _[0x10]; // 0x1380 
    std::uint8_t _[0x18]; // 0x1390 
    std::uint8_t _[0x1]; // 0x13a8 
    std::uint8_t _[0x1]; // 0x13a9 
    std::uint8_t _[0x6]; // 0x13aa 
    std::uint8_t _[0x8]; // 0x13b0 
    std::uint8_t _[0x8]; // 0x13b8 
};

struct C_fogplayerparams_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x8]; // 0x0
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
};

struct CGameSceneNode {
    static constexpr std::size_t size = 0x130;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x20]; // 0x10 
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x8]; // 0x38 
    std::uint8_t _[0x8]; // 0x40 
    std::uint8_t _[0x28]; // 0x48 
    std::uint8_t _[0x10]; // 0x70 
    std::uint8_t _[0x38]; // 0x80 
    std::uint8_t _[0xc]; // 0xb8 
    std::uint8_t _[0x4]; // 0xc4 
    std::uint8_t _[0xc]; // 0xc8 
    std::uint8_t _[0xc]; // 0xd4 
    std::uint8_t _[0x4]; // 0xe0 
    std::uint8_t _[0xc]; // 0xe4 
    std::uint8_t _[0xc]; // 0xf0 
    std::uint8_t _[0x4]; // 0xfc 
    std::uint8_t _[0x2]; // 0x100 
    std::uint8_t _[0x1]; // 0x102 
    std::uint8_t _[0x1]; // 0x103 
    std::uint8_t _[0x3]; // 0x104 
    std::uint8_t _[0x1]; // 0x107 
    std::uint8_t _[0x1]; // 0x108 
    std::uint8_t _[0x3]; // 0x109 
    std::uint8_t _[0x14]; // 0x10c 
    std::uint8_t _[0x4]; // 0x120 
    std::uint8_t _[0xc]; // 0x124 
};

struct CPlayer_ObserverServices {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0x4]; // 0x54 
    std::uint8_t _[0x4]; // 0x58 
    std::uint8_t _[0x4]; // 0x5c 
};

struct CCashStack {
    static constexpr std::size_t size = 0x10a0;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t _[0x8]; // 0x1098 
};

struct C_SoundAreaEntityBase {
    static constexpr std::size_t size = 0x628;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x8]; // 0x600 
    std::uint8_t _[0x8]; // 0x608 
    std::uint8_t _[0x8]; // 0x610 
    std::uint8_t _[0x10]; // 0x618 
};

struct C_PlayerVisibility {
    static constexpr std::size_t size = 0x630;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x4]; // 0x600 
    std::uint8_t _[0x4]; // 0x604 
    std::uint8_t _[0x4]; // 0x608 
    std::uint8_t _[0x4]; // 0x60c 
    std::uint8_t _[0x1]; // 0x610 
    std::uint8_t _[0x1f]; // 0x611 
};

struct CAttributeManager__cached_attribute_float_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
};

struct C_BasePlayerWeapon {
    static constexpr std::size_t size = 0x1950;
    std::uint8_t pad_0[0x1918]; // 0x0
    std::uint8_t _[0x4]; // 0x1918 
    std::uint8_t _[0x4]; // 0x191c 
    std::uint8_t _[0x4]; // 0x1920 
    std::uint8_t _[0x4]; // 0x1924 
    std::uint8_t _[0x4]; // 0x1928 
    std::uint8_t _[0x4]; // 0x192c 
    std::uint8_t _[0x20]; // 0x1930 
};

struct CRagdollManager {
    static constexpr std::size_t size = 0x608;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x8]; // 0x600 
};

struct CSoundOpvarSetBoxEntity {
    static constexpr std::size_t size = 0x620;
    std::uint8_t pad_0[0x620]; // 0x0
};

struct C_HEGrenade {
    static constexpr std::size_t size = 0x1fe0;
    std::uint8_t pad_0[0x1fe0]; // 0x0
};

struct C_EnvSky {
    static constexpr std::size_t size = 0x10f8;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t _[0x8]; // 0x1098 
    std::uint8_t _[0x8]; // 0x10a0 
    std::uint8_t _[0x4]; // 0x10a8 
    std::uint8_t _[0x4]; // 0x10ac 
    std::uint8_t _[0x4]; // 0x10b0 
    std::uint8_t _[0x4]; // 0x10b4 
    std::uint8_t _[0x4]; // 0x10b8 
    std::uint8_t _[0x4]; // 0x10bc 
    std::uint8_t _[0x4]; // 0x10c0 
    std::uint8_t _[0x4]; // 0x10c4 
    std::uint8_t _[0x4]; // 0x10c8 
    std::uint8_t _[0x2c]; // 0x10cc 
};

struct CPulse_InvokeBinding {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t _[0x30]; // 0x0 
    std::uint8_t _[0x10]; // 0x30 
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x4]; // 0x44 
    std::uint8_t _[0x68]; // 0x48 
};

struct C_GameRules {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x28]; // 0x8 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x8]; // 0x38 
};

struct C_WeaponMAC10 {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f50]; // 0x0
};

struct C_CSGO_MapPreviewCameraPath {
    static constexpr std::size_t size = 0x688;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x4]; // 0x600 
    std::uint8_t _[0x4]; // 0x604 
    std::uint8_t _[0x1]; // 0x608 
    std::uint8_t _[0x1]; // 0x609 
    std::uint8_t _[0x2]; // 0x60a 
    std::uint8_t _[0x44]; // 0x60c 
    std::uint8_t _[0x4]; // 0x650 
    std::uint8_t _[0x18]; // 0x654 
    std::uint8_t _[0x4]; // 0x66c 
    std::uint8_t _[0x4]; // 0x670 
    std::uint8_t _[0x4]; // 0x674 
    std::uint8_t _[0x4]; // 0x678 
    std::uint8_t _[0x4]; // 0x67c 
    std::uint8_t _[0x8]; // 0x680 
};

struct C_PointWorldText {
    static constexpr std::size_t size = 0x1370;
    std::uint8_t pad_0[0x10a0]; // 0x0
    std::uint8_t _[0x18]; // 0x10a0 
    std::uint8_t _[0x4]; // 0x10b8 
    std::uint8_t _[0x4]; // 0x10bc 
    std::uint8_t _[0x200]; // 0x10c0 
    std::uint8_t _[0x40]; // 0x12c0 
    std::uint8_t _[0x40]; // 0x1300 
    std::uint8_t _[0x1]; // 0x1340 
    std::uint8_t _[0x3]; // 0x1341 
    std::uint8_t _[0x4]; // 0x1344 
    std::uint8_t _[0x4]; // 0x1348 
    std::uint8_t _[0x4]; // 0x134c 
    std::uint8_t _[0x4]; // 0x1350 
    std::uint8_t _[0x4]; // 0x1354 
    std::uint8_t _[0x4]; // 0x1358 
    std::uint8_t _[0x4]; // 0x135c 
    std::uint8_t _[0x4]; // 0x1360 
    std::uint8_t _[0x4]; // 0x1364 
    std::uint8_t _[0x4]; // 0x1368 
    std::uint8_t _[0x4]; // 0x136c 
};

struct C_RopeKeyframe {
    static constexpr std::size_t size = 0x1408;
    std::uint8_t _[0x10a0]; // 0x0 
    std::uint8_t _[0x4]; // 0x10a0 
    std::uint8_t _[0x4]; // 0x10a4 
    std::uint8_t _[0x4]; // 0x10a8 
    std::uint8_t _[0x4]; // 0x10ac 
    std::uint8_t _[0x4]; // 0x10b0 
    std::uint8_t _[0x4]; // 0x10b4 
    std::uint8_t _[0x18]; // 0x10b8 
    std::uint8_t _[0x4]; // 0x10d0 
    std::uint8_t _[0x4]; // 0x10d4 
    std::uint8_t _[0x8]; // 0x10d8 
    std::uint8_t _[0x278]; // 0x10e0 
    std::uint8_t _[0x4]; // 0x1358 
    std::uint8_t _[0x4]; // 0x135c 
    std::uint8_t _[0x4]; // 0x1360 
    std::uint8_t _[0x1]; // 0x1364 
    std::uint8_t _[0x1]; // 0x1365 
    std::uint8_t _[0x2]; // 0x1366 
    std::uint8_t _[0x2]; // 0x1368 
    std::uint8_t _[0x2]; // 0x136a 
    std::uint8_t _[0x4]; // 0x136c 
    std::uint8_t _[0x1]; // 0x1370 
    std::uint8_t _[0x3]; // 0x1371 
    std::uint8_t _[0x4]; // 0x1374 
    std::uint8_t _[0x10]; // 0x1378 
    std::uint8_t _[0x8]; // 0x1388 
    std::uint8_t _[0x4]; // 0x1390 
    std::uint8_t _[0xc]; // 0x1394 
    std::uint8_t _[0xc]; // 0x13a0 
    std::uint8_t _[0x4]; // 0x13ac 
    std::uint8_t _[0x4]; // 0x13b0 
    std::uint8_t _[0x4]; // 0x13b4 
    std::uint8_t _[0xc]; // 0x13b8 
    std::uint8_t _[0xc]; // 0x13c4 
    std::uint8_t _[0x18]; // 0x13d0 
    std::uint8_t _[0x18]; // 0x13e8 
    std::uint8_t _[0x8]; // 0x1400 
};

struct C_BaseToggle {
    static constexpr std::size_t size = 0x1098;
    std::uint8_t pad_0[0x1098]; // 0x0
};

struct C_EnvCubemapBox {
    static constexpr std::size_t size = 0x6e8;
    std::uint8_t pad_0[0x6e8]; // 0x0
};

struct C_EnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume {
    static constexpr std::size_t size = 0x7d8;
    std::uint8_t pad_0[0x7d8]; // 0x0
};

struct C_RopeKeyframe__CPhysicsDelegate {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
};

struct CInfoDynamicShadowHint {
    static constexpr std::size_t size = 0x618;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x4]; // 0x600 
    std::uint8_t _[0x4]; // 0x604 
    std::uint8_t _[0x4]; // 0x608 
    std::uint8_t _[0x4]; // 0x60c 
    std::uint8_t _[0x8]; // 0x610 
};

struct CPathNode {
    static constexpr std::size_t size = 0x660;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0xc]; // 0x600 
    std::uint8_t _[0xc]; // 0x60c 
    std::uint8_t _[0x8]; // 0x618 
    std::uint8_t _[0x10]; // 0x620 
    std::uint8_t _[0x20]; // 0x630 
    std::uint8_t _[0x10]; // 0x650 
};

struct C_FuncMoveLinear {
    static constexpr std::size_t size = 0x1098;
    std::uint8_t pad_0[0x1098]; // 0x0
};

struct C_EnvShakeVolume {
    static constexpr std::size_t size = 0x650;
    std::uint8_t pad_0[0x618]; // 0x0
    std::uint8_t _[0xc]; // 0x618 
    std::uint8_t _[0xc]; // 0x624 
    std::uint8_t _[0x4]; // 0x630 
    std::uint8_t _[0x4]; // 0x634 
    std::uint8_t _[0x4]; // 0x638 
    std::uint8_t _[0x14]; // 0x63c 
};

struct CServerOnlyModelEntity {
    static constexpr std::size_t size = 0x1098;
    std::uint8_t pad_0[0x1098]; // 0x0
};

struct C_CSGO_TeamSelectCamera {
    static constexpr std::size_t size = 0x690;
    std::uint8_t pad_0[0x690]; // 0x0
};

struct CPulseCell_IntervalTimer {
    static constexpr std::size_t size = 0x168;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x48]; // 0xd8 
    std::uint8_t _[0x48]; // 0x120 
};

struct C_WeaponXM1014 {
    static constexpr std::size_t size = 0x1f20;
    std::uint8_t pad_0[0x1f20]; // 0x0
};

struct C_WorldModelGloves {
    static constexpr std::size_t size = 0x1270;
    std::uint8_t pad_0[0x1270]; // 0x0
};

struct C_PhysicsPropMultiplayer {
    static constexpr std::size_t size = 0x13f0;
    std::uint8_t pad_0[0x13f0]; // 0x0
};

struct C_SoundEventOBBEntity {
    static constexpr std::size_t size = 0x6e8;
    std::uint8_t pad_0[0x6c0]; // 0x0
    std::uint8_t _[0xc]; // 0x6c0 
    std::uint8_t _[0x1c]; // 0x6cc 
};

struct CPulseCell_BaseLerp {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x48]; // 0xd8 
};

struct C_WeaponAug {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f50]; // 0x0
};

struct C_BasePropDoor {
    static constexpr std::size_t size = 0x14f0;
    std::uint8_t pad_0[0x14c0]; // 0x0
    std::uint8_t _[0x4]; // 0x14c0 
    std::uint8_t _[0x1]; // 0x14c4 
    std::uint8_t _[0x1]; // 0x14c5 
    std::uint8_t _[0x2]; // 0x14c6 
    std::uint8_t _[0xc]; // 0x14c8 
    std::uint8_t _[0xc]; // 0x14d4 
    std::uint8_t _[0x4]; // 0x14e0 
    std::uint8_t _[0xc]; // 0x14e4 
};

struct CChoreoInfoTarget {
    static constexpr std::size_t size = 0x600;
    std::uint8_t pad_0[0x600]; // 0x0
};

struct CNetworkedSequenceOperation {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x8]; // 0x14 
    std::uint8_t _[0x1]; // 0x1c 
    std::uint8_t _[0x3]; // 0x1d 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
};

struct C_Item_Healthshot {
    static constexpr std::size_t size = 0x1f30;
    std::uint8_t pad_0[0x1f30]; // 0x0
};

struct CCSCustomHudLayout {
    static constexpr std::size_t size = 0x840;
    std::uint8_t pad_0[0x618]; // 0x0
    std::uint8_t _[0x8]; // 0x618 
    std::uint8_t _[0x8]; // 0x620 
    std::uint8_t _[0x68]; // 0x628 
    std::uint8_t _[0x108]; // 0x690 
    std::uint8_t _[0x18]; // 0x798 
    std::uint8_t _[0x18]; // 0x7b0 
    std::uint8_t _[0x78]; // 0x7c8 
};

struct CEntityInstance {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x8]; // 0x28 
};

struct C_BaseModelEntity {
    static constexpr std::size_t size = 0x1098;
    std::uint8_t pad_0[0xaf8]; // 0x0
    std::uint8_t _[0x8]; // 0xaf8 
    std::uint8_t _[0x18]; // 0xb00 
    std::uint8_t _[0x8]; // 0xb18 
    std::uint8_t _[0x4]; // 0xb20 
    std::uint8_t _[0x4]; // 0xb24 
    std::uint8_t _[0x4]; // 0xb28 
    std::uint8_t _[0x4]; // 0xb2c 
    std::uint8_t _[0x4]; // 0xb30 
    std::uint8_t _[0x4]; // 0xb34 
    std::uint8_t _[0x4]; // 0xb38 
    std::uint8_t _[0x4]; // 0xb3c 
    std::uint8_t _[0x4]; // 0xb40 
    std::uint8_t _[0x4]; // 0xb44 
    std::uint8_t _[0x1]; // 0xb48 
    std::uint8_t _[0x1]; // 0xb49 
    std::uint8_t _[0x1]; // 0xb4a 
    std::uint8_t _[0x1]; // 0xb4b 
    std::uint8_t _[0x4]; // 0xb4c 
    std::uint8_t _[0x128]; // 0xb50 
    std::uint8_t _[0x1]; // 0xc78 
    std::uint8_t _[0x3]; // 0xc79 
    std::uint8_t _[0x4]; // 0xc7c 
    std::uint8_t _[0x1]; // 0xc80 
    std::uint8_t _[0x1]; // 0xc81 
    std::uint8_t _[0x1e]; // 0xc82 
    std::uint8_t _[0x8]; // 0xca0 
    std::uint8_t _[0x80]; // 0xca8 
    std::uint8_t _[0x1]; // 0xd28 
    std::uint8_t _[0x1]; // 0xd29 
    std::uint8_t _[0x6]; // 0xd2a 
    std::uint8_t _[0xb8]; // 0xd30 
    std::uint8_t _[0x58]; // 0xde8 
    std::uint8_t _[0x4]; // 0xe40 
    std::uint8_t _[0x4]; // 0xe44 
    std::uint8_t _[0x4]; // 0xe48 
    std::uint8_t _[0x4]; // 0xe4c 
    std::uint8_t _[0x4]; // 0xe50 
    std::uint8_t _[0x1]; // 0xe54 
    std::uint8_t _[0x3]; // 0xe55 
    std::uint8_t _[0x8]; // 0xe58 
    std::uint8_t _[0xd8]; // 0xe60 
    std::uint8_t _[0x28]; // 0xf38 
    std::uint8_t _[0xe0]; // 0xf60 
    std::uint8_t _[0x8]; // 0x1040 
    std::uint8_t _[0x4]; // 0x1048 
    std::uint8_t _[0x3c]; // 0x104c 
    std::uint8_t _[0x10]; // 0x1088 
};

struct CCSPlayer_BulletServices {
    static constexpr std::size_t size = 0xa8;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x60]; // 0x48 
};

struct C_SoundOpvarSetAutoRoomEntity {
    static constexpr std::size_t size = 0x620;
    std::uint8_t pad_0[0x620]; // 0x0
};

struct C_EnvCombinedLightProbeVolume {
    static constexpr std::size_t size = 0x7d8;
    std::uint8_t pad_0[0x718]; // 0x0
    std::uint8_t _[0x4]; // 0x718 
    std::uint8_t _[0x4]; // 0x71c 
    std::uint8_t _[0x8]; // 0x720 
    std::uint8_t _[0x8]; // 0x728 
    std::uint8_t _[0x8]; // 0x730 
    std::uint8_t _[0x8]; // 0x738 
    std::uint8_t _[0x8]; // 0x740 
    std::uint8_t _[0x8]; // 0x748 
    std::uint8_t _[0x8]; // 0x750 
    std::uint8_t _[0x8]; // 0x758 
    std::uint8_t _[0x8]; // 0x760 
    std::uint8_t _[0xc]; // 0x768 
    std::uint8_t _[0xc]; // 0x774 
    std::uint8_t _[0x4]; // 0x780 
    std::uint8_t _[0x4]; // 0x784 
    std::uint8_t _[0x4]; // 0x788 
    std::uint8_t _[0x4]; // 0x78c 
    std::uint8_t _[0x4]; // 0x790 
    std::uint8_t _[0x4]; // 0x794 
    std::uint8_t _[0xc]; // 0x798 
    std::uint8_t _[0x4]; // 0x7a4 
    std::uint8_t _[0x4]; // 0x7a8 
    std::uint8_t _[0x4]; // 0x7ac 
    std::uint8_t _[0x4]; // 0x7b0 
    std::uint8_t _[0x4]; // 0x7b4 
    std::uint8_t _[0x19]; // 0x7b8 
    std::uint8_t _[0x7]; // 0x7d1 
};

struct CCSGO_EndOfMatchLineupEnd {
    static constexpr std::size_t size = 0x600;
    std::uint8_t pad_0[0x600]; // 0x0
};

struct C_MultiplayRules {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x40]; // 0x0
};

struct CPlayer_AutoaimServices {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct C_LightDirectionalEntity {
    static constexpr std::size_t size = 0x10a0;
    std::uint8_t pad_0[0x10a0]; // 0x0
};

struct C_BaseEntity {
    static constexpr std::size_t size = 0x600;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x2f0]; // 0x38 
    std::uint8_t _[0x8]; // 0x328 
    std::uint8_t _[0x8]; // 0x330 
    std::uint8_t _[0x8]; // 0x338 
    std::uint8_t _[0x8]; // 0x340 
    std::uint8_t _[0x4]; // 0x348 
    std::uint8_t _[0x4]; // 0x34c 
    std::uint8_t _[0x4]; // 0x350 
    std::uint8_t _[0x1]; // 0x354 
    std::uint8_t _[0x3]; // 0x355 
    std::uint8_t _[0x8]; // 0x358 
    std::uint8_t _[0x1]; // 0x360 
    std::uint8_t _[0x3]; // 0x361 
    std::uint8_t _[0x4]; // 0x364 
    std::uint8_t _[0x4]; // 0x368 
    std::uint8_t _[0x4]; // 0x36c 
    std::uint8_t _[0x4]; // 0x370 
    std::uint8_t _[0x4]; // 0x374 
    std::uint8_t _[0x1]; // 0x378 
    std::uint8_t _[0x1]; // 0x379 
    std::uint8_t _[0x1]; // 0x37a 
    std::uint8_t _[0x1]; // 0x37b 
    std::uint8_t _[0x4]; // 0x37c 
    std::uint8_t _[0x10]; // 0x380 
    std::uint8_t _[0x4]; // 0x390 
    std::uint8_t _[0x4]; // 0x394 
    std::uint8_t _[0x18]; // 0x398 
    std::uint8_t _[0x4]; // 0x3b0 
    std::uint8_t _[0x4]; // 0x3b4 
    std::uint8_t _[0x4]; // 0x3b8 
    std::uint8_t _[0x1]; // 0x3bc 
    std::uint8_t _[0x1]; // 0x3bd 
    std::uint8_t _[0x1]; // 0x3be 
    std::uint8_t _[0x1]; // 0x3bf 
    std::uint8_t _[0x8]; // 0x3c0 
    std::uint8_t _[0x18]; // 0x3c8 
    std::uint8_t _[0x4]; // 0x3e0 
    std::uint8_t _[0x2]; // 0x3e4 
    std::uint8_t _[0x1]; // 0x3e6 
    std::uint8_t _[0x1]; // 0x3e7 
    std::uint8_t _[0x4]; // 0x3e8 
    std::uint8_t _[0x8]; // 0x3ec 
    std::uint8_t _[0x4]; // 0x3f4 
    std::uint8_t _[0xc]; // 0x3f8 
    std::uint8_t _[0x2c]; // 0x404 
    std::uint8_t _[0xe0]; // 0x430 
    std::uint8_t _[0xc]; // 0x510 
    std::uint8_t _[0x4]; // 0x51c 
    std::uint8_t _[0x4]; // 0x520 
    std::uint8_t _[0x1]; // 0x524 
    std::uint8_t _[0x1]; // 0x525 
    std::uint8_t _[0x2]; // 0x526 
    std::uint8_t _[0x4]; // 0x528 
    std::uint8_t _[0x4]; // 0x52c 
    std::uint8_t _[0x4]; // 0x530 
    std::uint8_t _[0x4]; // 0x534 
    std::uint8_t _[0x4]; // 0x538 
    std::uint8_t _[0x4]; // 0x53c 
    std::uint8_t _[0x4]; // 0x540 
    std::uint8_t _[0x4]; // 0x544 
    std::uint8_t _[0x1]; // 0x548 
    std::uint8_t _[0x3]; // 0x549 
    std::uint8_t _[0x4]; // 0x54c 
    std::uint8_t _[0x10]; // 0x550 
    std::uint8_t _[0x4]; // 0x560 
    std::uint8_t _[0x4]; // 0x564 
    std::uint8_t _[0x1]; // 0x568 
    std::uint8_t _[0x1]; // 0x569 
    std::uint8_t _[0x2]; // 0x56a 
    std::uint8_t _[0x4]; // 0x56c 
    std::uint8_t _[0x4]; // 0x570 
    std::uint8_t _[0x4]; // 0x574 
    std::uint8_t _[0x30]; // 0x578 
    std::uint8_t _[0xc]; // 0x5a8 
    std::uint8_t _[0x4]; // 0x5b4 
    std::uint8_t _[0x18]; // 0x5b8 
    std::uint8_t _[0x11]; // 0x5d0 
    std::uint8_t _[0x1]; // 0x5e1 
    std::uint8_t _[0xe]; // 0x5e2 
    std::uint8_t _[0x8]; // 0x5f0 
    std::uint8_t _[0x8]; // 0x5f8 
};

struct ActiveModelConfig_t {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x8]; // 0x38 
    std::uint8_t _[0x18]; // 0x40 
    std::uint8_t _[0x18]; // 0x58 
};

struct C_WeaponSSG08 {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f50]; // 0x0
};

struct CPulseCell_Value_Curve {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x40]; // 0x48 
};

struct C_Chicken {
    static constexpr std::size_t size = 0x1ba0;
    std::uint8_t pad_0[0x14c0]; // 0x0
    std::uint8_t _[0x4]; // 0x14c0 
    std::uint8_t _[0x4]; // 0x14c4 
    std::uint8_t _[0x610]; // 0x14c8 
    std::uint8_t _[0x4]; // 0x1ad8 
    std::uint8_t _[0x4]; // 0x1adc 
    std::uint8_t _[0x88]; // 0x1ae0 
    std::uint8_t _[0x38]; // 0x1b68 
};

struct C_BasePlayerPawn {
    static constexpr std::size_t size = 0x14c8;
    std::uint8_t pad_0[0x12f0]; // 0x0
    std::uint8_t _[0x8]; // 0x12f0 
    std::uint8_t _[0x8]; // 0x12f8 
    std::uint8_t _[0x8]; // 0x1300 
    std::uint8_t _[0x8]; // 0x1308 
    std::uint8_t _[0x8]; // 0x1310 
    std::uint8_t _[0x8]; // 0x1318 
    std::uint8_t _[0x8]; // 0x1320 
    std::uint8_t _[0x8]; // 0x1328 
    std::uint8_t _[0x10]; // 0x1330 
    std::uint8_t _[0x68]; // 0x1340 
    std::uint8_t _[0xc]; // 0x13a8 
    std::uint8_t _[0xc]; // 0x13b4 
    std::uint8_t _[0x8]; // 0x13c0 
    std::uint8_t _[0x90]; // 0x13c8 
    std::uint8_t _[0x8]; // 0x1458 
    std::uint8_t _[0xc]; // 0x1460 
    std::uint8_t _[0x20]; // 0x146c 
    std::uint8_t _[0xc]; // 0x148c 
    std::uint8_t _[0x4]; // 0x1498 
    std::uint8_t _[0x4]; // 0x149c 
    std::uint8_t _[0x4]; // 0x14a0 
    std::uint8_t _[0xc]; // 0x14a4 
    std::uint8_t _[0x4]; // 0x14b0 
    std::uint8_t _[0x4]; // 0x14b4 
    std::uint8_t _[0x4]; // 0x14b8 
    std::uint8_t _[0x4]; // 0x14bc 
    std::uint8_t _[0x4]; // 0x14c0 
    std::uint8_t _[0x4]; // 0x14c4 
};

struct C_SoundOpvarSetAABBEntity {
    static constexpr std::size_t size = 0x620;
    std::uint8_t pad_0[0x620]; // 0x0
};

struct C_WeaponBizon {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f50]; // 0x0
};

struct C_StattrakModule {
    static constexpr std::size_t size = 0x1278;
    std::uint8_t pad_0[0x1270]; // 0x0
    std::uint8_t _[0x8]; // 0x1270 
};

struct CCSObserver_CameraServices {
    static constexpr std::size_t size = 0x2b8;
    std::uint8_t pad_0[0x2b0]; // 0x0
    std::uint8_t _[0x8]; // 0x2b0 
};

struct CEnvSoundscapeProxy {
    static constexpr std::size_t size = 0x698;
    std::uint8_t pad_0[0x690]; // 0x0
    std::uint8_t _[0x8]; // 0x690 
};

struct C_SoundEventEntity {
    static constexpr std::size_t size = 0x6c0;
    std::uint8_t _[0x600]; // 0x0 
    std::uint8_t _[0x1]; // 0x600 
    std::uint8_t _[0x1]; // 0x601 
    std::uint8_t _[0x1]; // 0x602 
    std::uint8_t _[0x1]; // 0x603 
    std::uint8_t _[0x4]; // 0x604 
    std::uint8_t _[0x8]; // 0x608 
    std::uint8_t _[0x8]; // 0x610 
    std::uint8_t _[0x8]; // 0x618 
    std::uint8_t _[0x30]; // 0x620 
    std::uint8_t _[0x18]; // 0x650 
    std::uint8_t _[0x30]; // 0x668 
    std::uint8_t _[0x1c]; // 0x698 
    std::uint8_t _[0x4]; // 0x6b4 
    std::uint8_t _[0x8]; // 0x6b8 
};

struct CPulseCell_Inflow_EventHandler {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t _[0x10]; // 0x80 
};

struct C_LightOrthoEntity {
    static constexpr std::size_t size = 0x10a0;
    std::uint8_t pad_0[0x10a0]; // 0x0
};

struct CPulseCell_BaseFlow {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CBombTarget {
    static constexpr std::size_t size = 0x1188;
    std::uint8_t pad_0[0x1180]; // 0x0
    std::uint8_t _[0x8]; // 0x1180 
};

struct C_Knife {
    static constexpr std::size_t size = 0x1f30;
    std::uint8_t pad_0[0x1f20]; // 0x0
    std::uint8_t _[0x10]; // 0x1f20 
};

struct C_CSGO_TerroristWingmanIntroCamera {
    static constexpr std::size_t size = 0x690;
    std::uint8_t pad_0[0x690]; // 0x0
};

struct CSkeletonInstance {
    static constexpr std::size_t size = 0x490;
    std::uint8_t pad_0[0x140]; // 0x0
    std::uint8_t _[0x2b0]; // 0x140 
    std::uint8_t _[0x1]; // 0x3f0 
    std::uint8_t _[0x1]; // 0x3f1 
    std::uint8_t _[0x1]; // 0x3f2 
    std::uint8_t _[0x5]; // 0x3f3 
    std::uint8_t _[0x4]; // 0x3f8 
    std::uint8_t _[0x94]; // 0x3fc 
};

struct CEntityComponent {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct C_ItemDogtags {
    static constexpr std::size_t size = 0x1a20;
    std::uint8_t pad_0[0x1a18]; // 0x0
    std::uint8_t _[0x4]; // 0x1a18 
    std::uint8_t _[0x4]; // 0x1a1c 
};

struct C_LateUpdatedAnimating {
    static constexpr std::size_t size = 0x1320;
    std::uint8_t pad_0[0x1320]; // 0x0
};

struct C_CSGO_TeamPreviewCameraBone {
    static constexpr std::size_t size = 0x690;
    std::uint8_t pad_0[0x690]; // 0x0
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

struct C_BaseClientUIEntity {
    static constexpr std::size_t size = 0x10c8;
    std::uint8_t pad_0[0x10a0]; // 0x0
    std::uint8_t _[0x8]; // 0x10a0 
    std::uint8_t _[0x8]; // 0x10a8 
    std::uint8_t _[0x8]; // 0x10b0 
    std::uint8_t _[0x10]; // 0x10b8 
};

struct C_WeaponUSPSilencer {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f50]; // 0x0
};

struct C_MolotovProjectile {
    static constexpr std::size_t size = 0x1370;
    std::uint8_t pad_0[0x1348]; // 0x0
    std::uint8_t _[0x28]; // 0x1348 
};

struct C_TriggerLerpObject {
    static constexpr std::size_t size = 0x1180;
    std::uint8_t pad_0[0x1180]; // 0x0
};

struct C_WeaponRevolver {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f50]; // 0x0
};

struct C_WeaponElite {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f50]; // 0x0
};

struct C_DynamicPropAlias_cable_dynamic {
    static constexpr std::size_t size = 0x14b0;
    std::uint8_t pad_0[0x14b0]; // 0x0
};

struct CBaseProp {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x1268]; // 0x0
    std::uint8_t _[0x4]; // 0x1268 
    std::uint8_t _[0x4]; // 0x126c 
    std::uint8_t _[0x10]; // 0x1270 
    std::uint8_t _[0x20]; // 0x1280 
};

struct CInfoOffscreenPanoramaTexture {
    static constexpr std::size_t size = 0x808;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x1]; // 0x600 
    std::uint8_t _[0x3]; // 0x601 
    std::uint8_t _[0x4]; // 0x604 
    std::uint8_t _[0x8]; // 0x608 
    std::uint8_t _[0x8]; // 0x610 
    std::uint8_t _[0x8]; // 0x618 
    std::uint8_t _[0x8]; // 0x620 
    std::uint8_t _[0x18]; // 0x628 
    std::uint8_t _[0x8]; // 0x640 
    std::uint8_t _[0x18]; // 0x648 
    std::uint8_t _[0x8]; // 0x660 
    std::uint8_t _[0x178]; // 0x668 
    std::uint8_t _[0x28]; // 0x7e0 
};

struct CCSWeaponBaseVData {
    static constexpr std::size_t size = 0x8a0;
    std::uint8_t pad_0[0x520]; // 0x0
    std::uint8_t _[0x4]; // 0x520 
    std::uint8_t _[0x4]; // 0x524 
    std::uint8_t _[0xe0]; // 0x528 
    std::uint8_t _[0xc]; // 0x608 
    std::uint8_t _[0xc]; // 0x614 
    std::uint8_t _[0xe0]; // 0x620 
    std::uint8_t _[0x4]; // 0x700 
    std::uint8_t _[0x4]; // 0x704 
    std::uint8_t _[0x4]; // 0x708 
    std::uint8_t _[0x4]; // 0x70c 
    std::uint8_t _[0x4]; // 0x710 
    std::uint8_t _[0x4]; // 0x714 
    std::uint8_t _[0x4]; // 0x718 
    std::uint8_t _[0x1]; // 0x71c 
    std::uint8_t _[0x1]; // 0x71d 
    std::uint8_t _[0x1]; // 0x71e 
    std::uint8_t _[0x1]; // 0x71f 
    std::uint8_t _[0x8]; // 0x720 
    std::uint8_t _[0x4]; // 0x728 
    std::uint8_t _[0x1]; // 0x72c 
    std::uint8_t _[0x3]; // 0x72d 
    std::uint8_t _[0x4]; // 0x730 
    std::uint8_t _[0x4]; // 0x734 
    std::uint8_t _[0x8]; // 0x738 
    std::uint8_t _[0x4]; // 0x740 
    std::uint8_t _[0x4]; // 0x744 
    std::uint8_t _[0x8]; // 0x748 
    std::uint8_t _[0x8]; // 0x750 
    std::uint8_t _[0x8]; // 0x758 
    std::uint8_t _[0x8]; // 0x760 
    std::uint8_t _[0x8]; // 0x768 
    std::uint8_t _[0x8]; // 0x770 
    std::uint8_t _[0x8]; // 0x778 
    std::uint8_t _[0x8]; // 0x780 
    std::uint8_t _[0x8]; // 0x788 
    std::uint8_t _[0x8]; // 0x790 
    std::uint8_t _[0x8]; // 0x798 
    std::uint8_t _[0x8]; // 0x7a0 
    std::uint8_t _[0x8]; // 0x7a8 
    std::uint8_t _[0x8]; // 0x7b0 
    std::uint8_t _[0x4]; // 0x7b8 
    std::uint8_t _[0x4]; // 0x7bc 
    std::uint8_t _[0x4]; // 0x7c0 
    std::uint8_t _[0x4]; // 0x7c4 
    std::uint8_t _[0x4]; // 0x7c8 
    std::uint8_t _[0x4]; // 0x7cc 
    std::uint8_t _[0x4]; // 0x7d0 
    std::uint8_t _[0x4]; // 0x7d4 
    std::uint8_t _[0x4]; // 0x7d8 
    std::uint8_t _[0x4]; // 0x7dc 
    std::uint8_t _[0x4]; // 0x7e0 
    std::uint8_t _[0x4]; // 0x7e4 
    std::uint8_t _[0x8]; // 0x7e8 
    std::uint8_t _[0x1]; // 0x7f0 
    std::uint8_t _[0x3]; // 0x7f1 
    std::uint8_t _[0x4]; // 0x7f4 
    std::uint8_t _[0x4]; // 0x7f8 
    std::uint8_t _[0x4]; // 0x7fc 
    std::uint8_t _[0x4]; // 0x800 
    std::uint8_t _[0x4]; // 0x804 
    std::uint8_t _[0x4]; // 0x808 
    std::uint8_t _[0x4]; // 0x80c 
    std::uint8_t _[0x4]; // 0x810 
    std::uint8_t _[0x4]; // 0x814 
    std::uint8_t _[0x4]; // 0x818 
    std::uint8_t _[0x4]; // 0x81c 
    std::uint8_t _[0x4]; // 0x820 
    std::uint8_t _[0x4]; // 0x824 
    std::uint8_t _[0x4]; // 0x828 
    std::uint8_t _[0x4]; // 0x82c 
    std::uint8_t _[0x4]; // 0x830 
    std::uint8_t _[0x4]; // 0x834 
    std::uint8_t _[0x4]; // 0x838 
    std::uint8_t _[0x4]; // 0x83c 
    std::uint8_t _[0x4]; // 0x840 
    std::uint8_t _[0x4]; // 0x844 
    std::uint8_t _[0x4]; // 0x848 
    std::uint8_t _[0x4]; // 0x84c 
    std::uint8_t _[0x4]; // 0x850 
    std::uint8_t _[0x4]; // 0x854 
    std::uint8_t _[0x4]; // 0x858 
    std::uint8_t _[0xc]; // 0x85c 
    std::uint8_t _[0x38]; // 0x868 
};

struct CAttributeManager {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x18]; // 0x8 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x20]; // 0x30 
};

struct SignatureOutflow_Continue {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CInfoTarget {
    static constexpr std::size_t size = 0x600;
    std::uint8_t pad_0[0x600]; // 0x0
};

struct CPlayer_CameraServices {
    static constexpr std::size_t size = 0x298;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0xc]; // 0x48 
    std::uint8_t _[0x4]; // 0x54 
    std::uint8_t _[0x8]; // 0x58 
    std::uint8_t _[0x40]; // 0x60 
    std::uint8_t _[0x4]; // 0xa0 
    std::uint8_t _[0x4]; // 0xa4 
    std::uint8_t _[0x8]; // 0xa8 
    std::uint8_t _[0x78]; // 0xb0 
    std::uint8_t _[0x18]; // 0x128 
    std::uint8_t _[0x4]; // 0x140 
    std::uint8_t _[0x4]; // 0x144 
    std::uint8_t _[0x68]; // 0x148 
    std::uint8_t _[0x4]; // 0x1b0 
    std::uint8_t _[0x8]; // 0x1b4 
    std::uint8_t _[0x14]; // 0x1bc 
    std::uint8_t _[0x8]; // 0x1d0 
    std::uint8_t _[0x14]; // 0x1d8 
    std::uint8_t _[0x14]; // 0x1ec 
    std::uint8_t _[0x8]; // 0x200 
    std::uint8_t _[0x90]; // 0x208 
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

struct C_BaseCSGrenade {
    static constexpr std::size_t size = 0x1fe0;
    std::uint8_t pad_0[0x1f20]; // 0x0
    std::uint8_t _[0x1]; // 0x1f20 
    std::uint8_t _[0x1]; // 0x1f21 
    std::uint8_t _[0x1]; // 0x1f22 
    std::uint8_t _[0x1]; // 0x1f23 
    std::uint8_t _[0x1]; // 0x1f24 
    std::uint8_t _[0x3]; // 0x1f25 
    std::uint8_t _[0x8]; // 0x1f28 
    std::uint8_t _[0x78]; // 0x1f30 
    std::uint8_t _[0x4]; // 0x1fa8 
    std::uint8_t _[0x4]; // 0x1fac 
    std::uint8_t _[0x4]; // 0x1fb0 
    std::uint8_t _[0x4]; // 0x1fb4 
    std::uint8_t _[0x4]; // 0x1fb8 
    std::uint8_t _[0x24]; // 0x1fbc 
};

struct CFilterAttributeInt {
    static constexpr std::size_t size = 0x640;
    std::uint8_t pad_0[0x638]; // 0x0
    std::uint8_t _[0x8]; // 0x638 
};

struct CPointTemplate {
    static constexpr std::size_t size = 0x698;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x8]; // 0x600 
    std::uint8_t _[0x8]; // 0x608 
    std::uint8_t _[0x8]; // 0x610 
    std::uint8_t _[0x4]; // 0x618 
    std::uint8_t _[0x4]; // 0x61c 
    std::uint8_t _[0x4]; // 0x620 
    std::uint8_t _[0x4]; // 0x624 
    std::uint8_t _[0x18]; // 0x628 
    std::uint8_t _[0x18]; // 0x640 
    std::uint8_t _[0x8]; // 0x658 
    std::uint8_t _[0x8]; // 0x660 
    std::uint8_t _[0x30]; // 0x668 
};

struct CPlayer_FlashlightServices {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CCSPlayerController {
    static constexpr std::size_t size = 0x980;
    std::uint8_t pad_0[0x818]; // 0x0
    std::uint8_t _[0x8]; // 0x818 
    std::uint8_t _[0x8]; // 0x820 
    std::uint8_t _[0x8]; // 0x828 
    std::uint8_t _[0x8]; // 0x830 
    std::uint8_t _[0x4]; // 0x838 
    std::uint8_t _[0x4]; // 0x83c 
    std::uint8_t _[0x8]; // 0x840 
    std::uint8_t _[0x8]; // 0x848 
    std::uint8_t _[0x4]; // 0x850 
    std::uint8_t _[0x4]; // 0x854 
    std::uint8_t _[0x4]; // 0x858 
    std::uint8_t _[0x4]; // 0x85c 
    std::uint8_t _[0x8]; // 0x860 
    std::uint8_t _[0x8]; // 0x868 
    std::uint8_t _[0x8]; // 0x870 
    std::uint8_t _[0x8]; // 0x878 
    std::uint8_t _[0x8]; // 0x880 
    std::uint8_t _[0x8]; // 0x888 
    std::uint8_t _[0x8]; // 0x890 
    std::uint8_t _[0x8]; // 0x898 
    std::uint8_t _[0x4]; // 0x8a0 
    std::uint8_t _[0x4]; // 0x8a4 
    std::uint8_t _[0x4]; // 0x8a8 
    std::uint8_t _[0x4]; // 0x8ac 
    std::uint8_t _[0x4]; // 0x8b0 
    std::uint8_t _[0x4]; // 0x8b4 
    std::uint8_t _[0x4]; // 0x8b8 
    std::uint8_t _[0x4]; // 0x8bc 
    std::uint8_t _[0x4]; // 0x8c0 
    std::uint8_t _[0x4]; // 0x8c4 
    std::uint8_t _[0x30]; // 0x8c8 
    std::uint8_t _[0x4]; // 0x8f8 
    std::uint8_t _[0x4]; // 0x8fc 
    std::uint8_t _[0x4]; // 0x900 
    std::uint8_t _[0x4]; // 0x904 
    std::uint8_t _[0x1]; // 0x908 
    std::uint8_t _[0x1]; // 0x909 
    std::uint8_t _[0x1]; // 0x90a 
    std::uint8_t _[0x1]; // 0x90b 
    std::uint8_t _[0x1]; // 0x90c 
    std::uint8_t _[0x3]; // 0x90d 
    std::uint8_t _[0x10]; // 0x910 
    std::uint8_t _[0x1]; // 0x920 
    std::uint8_t _[0x1]; // 0x921 
    std::uint8_t _[0x2]; // 0x922 
    std::uint8_t _[0x4]; // 0x924 
    std::uint8_t _[0x4]; // 0x928 
    std::uint8_t _[0x4]; // 0x92c 
    std::uint8_t _[0x4]; // 0x930 
    std::uint8_t _[0x4]; // 0x934 
    std::uint8_t _[0x4]; // 0x938 
    std::uint8_t _[0x4]; // 0x93c 
    std::uint8_t _[0x1]; // 0x940 
    std::uint8_t _[0x1]; // 0x941 
    std::uint8_t _[0x2]; // 0x942 
    std::uint8_t _[0x4]; // 0x944 
    std::uint8_t _[0x4]; // 0x948 
    std::uint8_t _[0x4]; // 0x94c 
    std::uint8_t _[0x4]; // 0x950 
    std::uint8_t _[0x4]; // 0x954 
    std::uint8_t _[0x8]; // 0x958 
    std::uint8_t _[0x1]; // 0x960 
    std::uint8_t _[0x1]; // 0x961 
    std::uint8_t _[0x2]; // 0x962 
    std::uint8_t _[0x4]; // 0x964 
    std::uint8_t _[0x4]; // 0x968 
    std::uint8_t _[0x4]; // 0x96c 
    std::uint8_t _[0x4]; // 0x970 
    std::uint8_t _[0x8]; // 0x974 
    std::uint8_t _[0x4]; // 0x97c 
};

struct C_CSGO_CounterTerroristRushIntroCamera {
    static constexpr std::size_t size = 0x690;
    std::uint8_t pad_0[0x690]; // 0x0
};

struct C_CSGO_TeamIntroCounterTerroristPosition {
    static constexpr std::size_t size = 0x1d18;
    std::uint8_t pad_0[0x1d18]; // 0x0
};

struct C_CSGO_PreviewModel {
    static constexpr std::size_t size = 0x18b8;
    std::uint8_t pad_0[0x1268]; // 0x0
    std::uint8_t _[0x8]; // 0x1268 
    std::uint8_t _[0x4]; // 0x1270 
    std::uint8_t _[0x4]; // 0x1274 
    std::uint8_t _[0x640]; // 0x1278 
};

struct C_CSGO_TeamSelectCharacterPosition {
    static constexpr std::size_t size = 0x1d18;
    std::uint8_t pad_0[0x1d18]; // 0x0
};

struct CPulseCell_Outflow_CycleOrdered__InstanceState_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CCSObservableElement {
    static constexpr std::size_t size = 0x630;
    std::uint8_t pad_0[0x618]; // 0x0
    std::uint8_t _[0x8]; // 0x618 
    std::uint8_t _[0x4]; // 0x620 
    std::uint8_t _[0x4]; // 0x624 
    std::uint8_t _[0x8]; // 0x628 
};

struct C_SoundEventAABBEntity {
    static constexpr std::size_t size = 0x6d8;
    std::uint8_t pad_0[0x6c0]; // 0x0
    std::uint8_t _[0xc]; // 0x6c0 
    std::uint8_t _[0xc]; // 0x6cc 
};

struct CCSPlayer_MovementServices {
    static constexpr std::size_t size = 0xfe0;
    std::uint8_t pad_0[0x310]; // 0x0
    std::uint8_t _[0xe0]; // 0x310 
    std::uint8_t _[0x4]; // 0x3f0 
    std::uint8_t _[0x4]; // 0x3f4 
    std::uint8_t _[0xc]; // 0x3f8 
    std::uint8_t _[0x4]; // 0x404 
    std::uint8_t _[0x4]; // 0x408 
    std::uint8_t _[0x4]; // 0x40c 
    std::uint8_t _[0x4]; // 0x410 
    std::uint8_t _[0x1]; // 0x414 
    std::uint8_t _[0x1]; // 0x415 
    std::uint8_t _[0x2]; // 0x416 
    std::uint8_t _[0x4]; // 0x418 
    std::uint8_t _[0x4]; // 0x41c 
    std::uint8_t _[0x4]; // 0x420 
    std::uint8_t _[0xc]; // 0x424 
    std::uint8_t _[0x8]; // 0x430 
    std::uint8_t _[0x1]; // 0x438 
    std::uint8_t _[0x1]; // 0x439 
    std::uint8_t _[0x20e]; // 0x43a 
    std::uint8_t _[0x4]; // 0x648 
    std::uint8_t _[0x4]; // 0x64c 
    std::uint8_t _[0x4]; // 0x650 
    std::uint8_t _[0x4]; // 0x654 
    std::uint8_t _[0x4]; // 0x658 
    std::uint8_t _[0xc]; // 0x65c 
    std::uint8_t _[0xc]; // 0x668 
    std::uint8_t _[0xc]; // 0x674 
    std::uint8_t _[0x4]; // 0x680 
    std::uint8_t _[0x4]; // 0x684 
    std::uint8_t _[0x4]; // 0x688 
    std::uint8_t _[0x4]; // 0x68c 
    std::uint8_t _[0x4]; // 0x690 
    std::uint8_t _[0x4]; // 0x694 
    std::uint8_t _[0x4]; // 0x698 
    std::uint8_t _[0x4]; // 0x69c 
    std::uint8_t _[0x4]; // 0x6a0 
    std::uint8_t _[0x4]; // 0x6a4 
    std::uint8_t _[0x4]; // 0x6a8 
    std::uint8_t _[0x4]; // 0x6ac 
    std::uint8_t _[0x18]; // 0x6b0 
    std::uint8_t _[0x38]; // 0x6c8 
    std::uint8_t _[0x4]; // 0x700 
    std::uint8_t _[0x4]; // 0x704 
    std::uint8_t _[0x4]; // 0x708 
    std::uint8_t _[0x4]; // 0x70c 
    std::uint8_t _[0x4]; // 0x710 
    std::uint8_t _[0x90]; // 0x714 
    std::uint8_t _[0x82c]; // 0x7a4 
    std::uint8_t _[0x10]; // 0xfd0 
};

struct SellbackPurchaseEntry_t {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x8]; // 0x40 
};

struct C_TintController {
    static constexpr std::size_t size = 0x618;
    std::uint8_t pad_0[0x618]; // 0x0
};

struct C_WeaponBaseItem {
    static constexpr std::size_t size = 0x1f30;
    std::uint8_t pad_0[0x1f20]; // 0x0
    std::uint8_t _[0x1]; // 0x1f20 
    std::uint8_t _[0xf]; // 0x1f21 
};

struct CWaterSplasher {
    static constexpr std::size_t size = 0x1098;
    std::uint8_t pad_0[0x1098]; // 0x0
};

struct C_FuncBrush {
    static constexpr std::size_t size = 0x1098;
    std::uint8_t pad_0[0x1098]; // 0x0
};

struct PhysicsRagdollPose_t {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x18]; // 0x8 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x24]; // 0x24 
};

struct CPropDataComponent {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
};

struct CPulseCell_LimitCount__InstanceState_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct C_WeaponCZ75a {
    static constexpr std::size_t size = 0x1f60;
    std::uint8_t pad_0[0x1f50]; // 0x0
    std::uint8_t _[0x10]; // 0x1f50 
};

struct C_DynamicLight {
    static constexpr std::size_t size = 0x10c0;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t _[0x1]; // 0x1098 
    std::uint8_t _[0x3]; // 0x1099 
    std::uint8_t _[0x4]; // 0x109c 
    std::uint8_t _[0x4]; // 0x10a0 
    std::uint8_t _[0x4]; // 0x10a4 
    std::uint8_t _[0x4]; // 0x10a8 
    std::uint8_t _[0x14]; // 0x10ac 
};

struct CCS2PawnGraphController {
    static constexpr std::size_t size = 0x578;
    std::uint8_t pad_0[0x2d8]; // 0x0
    std::uint8_t _[0x18]; // 0x2d8 
    std::uint8_t _[0x18]; // 0x2f0 
    std::uint8_t _[0x18]; // 0x308 
    std::uint8_t _[0x18]; // 0x320 
    std::uint8_t _[0x18]; // 0x338 
    std::uint8_t _[0x18]; // 0x350 
    std::uint8_t _[0x18]; // 0x368 
    std::uint8_t _[0x18]; // 0x380 
    std::uint8_t _[0x18]; // 0x398 
    std::uint8_t _[0x18]; // 0x3b0 
    std::uint8_t _[0x18]; // 0x3c8 
    std::uint8_t _[0x18]; // 0x3e0 
    std::uint8_t _[0x18]; // 0x3f8 
    std::uint8_t _[0x18]; // 0x410 
    std::uint8_t _[0x18]; // 0x428 
    std::uint8_t _[0x18]; // 0x440 
    std::uint8_t _[0x18]; // 0x458 
    std::uint8_t _[0x18]; // 0x470 
    std::uint8_t _[0x18]; // 0x488 
    std::uint8_t _[0x18]; // 0x4a0 
    std::uint8_t _[0x18]; // 0x4b8 
    std::uint8_t _[0x18]; // 0x4d0 
    std::uint8_t _[0x18]; // 0x4e8 
    std::uint8_t _[0x18]; // 0x500 
    std::uint8_t _[0x18]; // 0x518 
    std::uint8_t _[0x18]; // 0x530 
    std::uint8_t _[0x18]; // 0x548 
    std::uint8_t _[0x18]; // 0x560 
};

struct EngineCountdownTimer {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x8]; // 0x10 
};

struct C_SoundEventSphereEntity {
    static constexpr std::size_t size = 0x6c8;
    std::uint8_t pad_0[0x6c0]; // 0x0
    std::uint8_t _[0x8]; // 0x6c0 
};

struct CCSPlayerController_DamageServices {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t _[0x8]; // 0x40 
    std::uint8_t _[0x68]; // 0x48 
};

struct C_CSGO_TeamPreviewModel {
    static constexpr std::size_t size = 0x37d0;
    std::uint8_t pad_0[0x37d0]; // 0x0
};

struct C_TonemapController2Alias_env_tonemap_controller2 {
    static constexpr std::size_t size = 0x618;
    std::uint8_t pad_0[0x618]; // 0x0
};

struct C_Inferno {
    static constexpr std::size_t size = 0x86a0;
    std::uint8_t pad_0[0x10d8]; // 0x0
    std::uint8_t _[0x8]; // 0x10d8 
    std::uint8_t _[0x8]; // 0x10e0 
    std::uint8_t _[0x8]; // 0x10e8 
    std::uint8_t _[0x8]; // 0x10f0 
    std::uint8_t _[0x8]; // 0x10f8 
    std::uint8_t _[0x8]; // 0x1100 
    std::uint8_t _[0x300]; // 0x1108 
    std::uint8_t _[0x300]; // 0x1408 
    std::uint8_t _[0x40]; // 0x1708 
    std::uint8_t _[0x300]; // 0x1748 
    std::uint8_t _[0x4]; // 0x1a48 
    std::uint8_t _[0x4]; // 0x1a4c 
    std::uint8_t _[0x4]; // 0x1a50 
    std::uint8_t _[0x4]; // 0x1a54 
    std::uint8_t _[0x4]; // 0x1a58 
    std::uint8_t _[0x6c04]; // 0x1a5c 
    std::uint8_t _[0x4]; // 0x8660 
    std::uint8_t _[0x4]; // 0x8664 
    std::uint8_t _[0x4]; // 0x8668 
    std::uint8_t _[0x4]; // 0x866c 
    std::uint8_t _[0x4]; // 0x8670 
    std::uint8_t _[0xc]; // 0x8674 
    std::uint8_t _[0xc]; // 0x8680 
    std::uint8_t _[0x14]; // 0x868c 
};

struct CFilterLOS {
    static constexpr std::size_t size = 0x638;
    std::uint8_t pad_0[0x638]; // 0x0
};

struct CPointOrient {
    static constexpr std::size_t size = 0x620;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x8]; // 0x600 
    std::uint8_t _[0x4]; // 0x608 
    std::uint8_t _[0x4]; // 0x60c 
    std::uint8_t _[0x4]; // 0x610 
    std::uint8_t _[0x4]; // 0x614 
    std::uint8_t _[0x4]; // 0x618 
    std::uint8_t _[0x4]; // 0x61c 
};

struct C_GlobalLight {
    static constexpr std::size_t size = 0xaf0;
    std::uint8_t pad_0[0xac0]; // 0x0
    std::uint8_t _[0x30]; // 0xac0 
};

struct C_EnvWindClientside {
    static constexpr std::size_t size = 0x6f8;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0xf8]; // 0x600 
};

struct sky3dparams_t {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0xc]; // 0xc 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x68]; // 0x20 
    std::uint8_t _[0x8]; // 0x88 
};

struct C_FlashbangProjectile {
    static constexpr std::size_t size = 0x1348;
    std::uint8_t pad_0[0x1348]; // 0x0
};

struct C_SoundEventConeEntity {
    static constexpr std::size_t size = 0x6d8;
    std::uint8_t pad_0[0x6c0]; // 0x0
    std::uint8_t _[0x4]; // 0x6c0 
    std::uint8_t _[0x4]; // 0x6c4 
    std::uint8_t _[0x4]; // 0x6c8 
    std::uint8_t _[0x4]; // 0x6cc 
    std::uint8_t _[0x8]; // 0x6d0 
};

struct CDestructiblePartsComponent {
    static constexpr std::size_t size = 0x70;
    std::uint8_t _[0x48]; // 0x0 
    std::uint8_t _[0x18]; // 0x48 
    std::uint8_t _[0x8]; // 0x60 
    std::uint8_t _[0x8]; // 0x68 
};

struct C_WeaponP90 {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f50]; // 0x0
};

struct C_EnvWind {
    static constexpr std::size_t size = 0x6f8;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0xf8]; // 0x600 
};

struct C_CSGO_TerroristTeamIntroCamera {
    static constexpr std::size_t size = 0x690;
    std::uint8_t pad_0[0x690]; // 0x0
};

struct CPulseCell_Step_DebugLog {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct C_PointDeathcamBounds {
    static constexpr std::size_t size = 0x620;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0xc]; // 0x600 
    std::uint8_t _[0xc]; // 0x60c 
    std::uint8_t _[0x8]; // 0x618 
};

struct CCSPlayerController_ActionTrackingServices {
    static constexpr std::size_t size = 0x138;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t _[0x68]; // 0x40 
    std::uint8_t _[0x80]; // 0xa8 
    std::uint8_t _[0x4]; // 0x128 
    std::uint8_t _[0x4]; // 0x12c 
    std::uint8_t _[0x8]; // 0x130 
};

struct CBodyComponentBaseAnimGraph {
    static constexpr std::size_t size = 0xbb0;
    std::uint8_t pad_0[0x510]; // 0x0
    std::uint8_t _[0x6a0]; // 0x510 
};

struct C_CSGO_PreviewModelAlias_csgo_item_previewmodel {
    static constexpr std::size_t size = 0x18b8;
    std::uint8_t pad_0[0x18b8]; // 0x0
};

struct C_InfoInstructorHintHostageRescueZone {
    static constexpr std::size_t size = 0x600;
    std::uint8_t pad_0[0x600]; // 0x0
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

struct C_TriggerBuoyancy {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x1180]; // 0x0
    std::uint8_t _[0x118]; // 0x1180 
    std::uint8_t _[0x8]; // 0x1298 
};

struct CPlayer_MovementServices_Humanoid {
    static constexpr std::size_t size = 0x288;
    std::uint8_t pad_0[0x258]; // 0x0
    std::uint8_t _[0x4]; // 0x258 
    std::uint8_t _[0x4]; // 0x25c 
    std::uint8_t _[0xc]; // 0x260 
    std::uint8_t _[0x4]; // 0x26c 
    std::uint8_t _[0x10]; // 0x270 
    std::uint8_t _[0x8]; // 0x280 
};

struct CPulseCell_IsRequirementValid__Criteria_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t _[0x1]; // 0x0 
};

struct C_WeaponTec9 {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f50]; // 0x0
};

struct C_PhysPropClientside {
    static constexpr std::size_t size = 0x1410;
    std::uint8_t pad_0[0x13e0]; // 0x0
    std::uint8_t _[0x4]; // 0x13e0 
    std::uint8_t _[0x4]; // 0x13e4 
    std::uint8_t _[0xc]; // 0x13e8 
    std::uint8_t _[0xc]; // 0x13f4 
    std::uint8_t _[0x10]; // 0x1400 
};

struct C_BaseDoor {
    static constexpr std::size_t size = 0x10a0;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t _[0x8]; // 0x1098 
};

struct CSMatchStats_t {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x68]; // 0x0
    std::uint8_t _[0x4]; // 0x68 
    std::uint8_t _[0x4]; // 0x6c 
    std::uint8_t _[0x4]; // 0x70 
    std::uint8_t _[0x4]; // 0x74 
    std::uint8_t _[0x8]; // 0x78 
};

struct EntityRenderAttribute_t {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x14]; // 0x34 
};

struct CPulseCell_Inflow_ObservableVariableListener {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t _[0x2]; // 0x80 
    std::uint8_t _[0x6]; // 0x82 
};

struct CCSGO_RushIntroTerroristPosition {
    static constexpr std::size_t size = 0x1d18;
    std::uint8_t pad_0[0x1d18]; // 0x0
};

struct CHostageRescueZone {
    static constexpr std::size_t size = 0x1198;
    std::uint8_t pad_0[0x1198]; // 0x0
};

struct CModelState {
    static constexpr std::size_t size = 0x2b0;
    std::uint8_t pad_0[0xa0]; // 0x0
    std::uint8_t _[0x8]; // 0xa0 
    std::uint8_t _[0x38]; // 0xa8 
    std::uint8_t _[0x8]; // 0xe0 
    std::uint8_t _[0x4]; // 0xe8 
    std::uint8_t _[0x4]; // 0xec 
    std::uint8_t _[0x4]; // 0xf0 
    std::uint8_t _[0x1c]; // 0xf4 
    std::uint8_t _[0xf0]; // 0x110 
    std::uint8_t _[0x8]; // 0x200 
    std::uint8_t _[0x50]; // 0x208 
    std::uint8_t _[0x4a]; // 0x258 
    std::uint8_t _[0x1]; // 0x2a2 
    std::uint8_t _[0x1]; // 0x2a3 
    std::uint8_t _[0xc]; // 0x2a4 
};

struct CPulseCell_LerpCameraSettings__CursorState_t {
    static constexpr std::size_t size = 0x2c;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x10]; // 0xc 
    std::uint8_t _[0x10]; // 0x1c 
};

struct CPulseCell_Outflow_CycleOrdered {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x18]; // 0x48 
};

struct C_CSWeaponBaseGun {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f20]; // 0x0
    std::uint8_t _[0x4]; // 0x1f20 
    std::uint8_t _[0x4]; // 0x1f24 
    std::uint8_t _[0x10]; // 0x1f28 
    std::uint8_t _[0x4]; // 0x1f38 
    std::uint8_t _[0x1]; // 0x1f3c 
    std::uint8_t _[0x3]; // 0x1f3d 
    std::uint8_t _[0x10]; // 0x1f40 
};

struct C_CSGameRulesProxy {
    static constexpr std::size_t size = 0x608;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x8]; // 0x600 
};

struct CCollisionProperty {
    static constexpr std::size_t size = 0xb8;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x30]; // 0x10 
    std::uint8_t _[0xc]; // 0x40 
    std::uint8_t _[0xe]; // 0x4c 
    std::uint8_t _[0x1]; // 0x5a 
    std::uint8_t _[0x1]; // 0x5b 
    std::uint8_t _[0x1]; // 0x5c 
    std::uint8_t _[0x1]; // 0x5d 
    std::uint8_t _[0x1]; // 0x5e 
    std::uint8_t _[0x1]; // 0x5f 
    std::uint8_t _[0x4]; // 0x60 
    std::uint8_t _[0xc]; // 0x64 
    std::uint8_t _[0xc]; // 0x70 
    std::uint8_t _[0xc]; // 0x7c 
    std::uint8_t _[0xc]; // 0x88 
    std::uint8_t _[0xc]; // 0x94 
    std::uint8_t _[0xc]; // 0xa0 
    std::uint8_t _[0xc]; // 0xac 
};

struct C_WeaponP250 {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f50]; // 0x0
};

struct CFilterMassGreater {
    static constexpr std::size_t size = 0x640;
    std::uint8_t pad_0[0x638]; // 0x0
    std::uint8_t _[0x8]; // 0x638 
};

struct C_ShatterGlassShardPhysics {
    static constexpr std::size_t size = 0x1120;
    std::uint8_t pad_0[0x10a0]; // 0x0
    std::uint8_t _[0x80]; // 0x10a0 
};

struct C_EntityDissolve {
    static constexpr std::size_t size = 0x10e0;
    std::uint8_t pad_0[0x10a0]; // 0x0
    std::uint8_t _[0x4]; // 0x10a0 
    std::uint8_t _[0x4]; // 0x10a4 
    std::uint8_t _[0x4]; // 0x10a8 
    std::uint8_t _[0x4]; // 0x10ac 
    std::uint8_t _[0x4]; // 0x10b0 
    std::uint8_t _[0x4]; // 0x10b4 
    std::uint8_t _[0x4]; // 0x10b8 
    std::uint8_t _[0x4]; // 0x10bc 
    std::uint8_t _[0x4]; // 0x10c0 
    std::uint8_t _[0xc]; // 0x10c4 
    std::uint8_t _[0x4]; // 0x10d0 
    std::uint8_t _[0x1]; // 0x10d4 
    std::uint8_t _[0xb]; // 0x10d5 
};

struct C_SoundOpvarSetOBBEntity {
    static constexpr std::size_t size = 0x620;
    std::uint8_t pad_0[0x620]; // 0x0
};

struct CCSCustomPlayerCamera {
    static constexpr std::size_t size = 0x640;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x4]; // 0x600 
    std::uint8_t _[0x4]; // 0x604 
    std::uint8_t _[0x4]; // 0x608 
    std::uint8_t _[0x4]; // 0x60c 
    std::uint8_t _[0xc]; // 0x610 
    std::uint8_t _[0xc]; // 0x61c 
    std::uint8_t _[0x4]; // 0x628 
    std::uint8_t _[0x14]; // 0x62c 
};

struct CCSGameModeRules_ArmsRace {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x18]; // 0x30 
};

struct C_FuncMonitor {
    static constexpr std::size_t size = 0x1510;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t _[0x8]; // 0x1098 
    std::uint8_t _[0x4]; // 0x10a0 
    std::uint8_t _[0x1]; // 0x10a4 
    std::uint8_t _[0x3]; // 0x10a5 
    std::uint8_t _[0x8]; // 0x10a8 
    std::uint8_t _[0x4]; // 0x10b0 
    std::uint8_t _[0x1]; // 0x10b4 
    std::uint8_t _[0x45b]; // 0x10b5 
};

struct C_ClientRagdoll {
    static constexpr std::size_t size = 0x1300;
    std::uint8_t pad_0[0x1268]; // 0x0
    std::uint8_t _[0x1]; // 0x1268 
    std::uint8_t _[0x3]; // 0x1269 
    std::uint8_t _[0x4]; // 0x126c 
    std::uint8_t _[0x4]; // 0x1270 
    std::uint8_t _[0x4]; // 0x1274 
    std::uint8_t _[0x4]; // 0x1278 
    std::uint8_t _[0x4]; // 0x127c 
    std::uint8_t _[0x4]; // 0x1280 
    std::uint8_t _[0x1]; // 0x1284 
    std::uint8_t _[0x1]; // 0x1285 
    std::uint8_t _[0x2]; // 0x1286 
    std::uint8_t _[0x28]; // 0x1288 
    std::uint8_t _[0x28]; // 0x12b0 
    std::uint8_t _[0x28]; // 0x12d8 
};

struct PulseSelectorOutflowList_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x18]; // 0x0 
};

struct C_BaseModelEntity__BodyGroupRequest_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x2]; // 0x14 
    std::uint8_t _[0x2]; // 0x16 
};

struct CPulseCell_PlaySequence__CursorState_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CBodyComponentSkeletonInstance {
    static constexpr std::size_t size = 0x510;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t _[0x490]; // 0x80 
};

struct C_CS2WeaponModuleBase {
    static constexpr std::size_t size = 0x1270;
    std::uint8_t pad_0[0x1270]; // 0x0
};

struct C_CSGO_TeamPreviewCharacterPosition {
    static constexpr std::size_t size = 0x1d18;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x4]; // 0x600 
    std::uint8_t _[0x4]; // 0x604 
    std::uint8_t _[0x8]; // 0x608 
    std::uint8_t _[0x8]; // 0x610 
    std::uint8_t _[0x8]; // 0x618 
    std::uint8_t _[0x5b0]; // 0x620 
    std::uint8_t _[0x5b0]; // 0xbd0 
    std::uint8_t _[0x5b0]; // 0x1180 
    std::uint8_t _[0x5e8]; // 0x1730 
};

struct C_SmokeGrenadeProjectile {
    static constexpr std::size_t size = 0x1500;
    std::uint8_t pad_0[0x1360]; // 0x0
    std::uint8_t _[0x4]; // 0x1360 
    std::uint8_t _[0x4]; // 0x1364 
    std::uint8_t _[0x4]; // 0x1368 
    std::uint8_t _[0xc]; // 0x136c 
    std::uint8_t _[0x10]; // 0x1378 
    std::uint8_t _[0x18]; // 0x1388 
    std::uint8_t _[0x4]; // 0x13a0 
    std::uint8_t _[0x4]; // 0x13a4 
    std::uint8_t _[0x1]; // 0x13a8 
    std::uint8_t _[0x1]; // 0x13a9 
    std::uint8_t _[0x156]; // 0x13aa 
};

struct CScriptComponent {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x8]; // 0x30 
};

struct CCSPlayer_BuyServices {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x68]; // 0x48 
};

struct C_SkyCameraVolumeTarget {
    static constexpr std::size_t size = 0x610;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x8]; // 0x600 
    std::uint8_t _[0x8]; // 0x608 
};

struct C_PortraitWorldCallbackHandler {
    static constexpr std::size_t size = 0x608;
    std::uint8_t pad_0[0x608]; // 0x0
};

struct C_DynamicProp {
    static constexpr std::size_t size = 0x14b0;
    std::uint8_t pad_0[0x13e0]; // 0x0
    std::uint8_t _[0x1]; // 0x13e0 
    std::uint8_t _[0x1]; // 0x13e1 
    std::uint8_t _[0x6]; // 0x13e2 
    std::uint8_t _[0x18]; // 0x13e8 
    std::uint8_t _[0x18]; // 0x1400 
    std::uint8_t _[0x18]; // 0x1418 
    std::uint8_t _[0x18]; // 0x1430 
    std::uint8_t _[0x18]; // 0x1448 
    std::uint8_t _[0x8]; // 0x1460 
    std::uint8_t _[0x4]; // 0x1468 
    std::uint8_t _[0x1]; // 0x146c 
    std::uint8_t _[0x1]; // 0x146d 
    std::uint8_t _[0x1]; // 0x146e 
    std::uint8_t _[0x1]; // 0x146f 
    std::uint8_t _[0x1]; // 0x1470 
    std::uint8_t _[0x1]; // 0x1471 
    std::uint8_t _[0x2]; // 0x1472 
    std::uint8_t _[0x4]; // 0x1474 
    std::uint8_t _[0x4]; // 0x1478 
    std::uint8_t _[0x4]; // 0x147c 
    std::uint8_t _[0x4]; // 0x1480 
    std::uint8_t _[0x4]; // 0x1484 
    std::uint8_t _[0x4]; // 0x1488 
    std::uint8_t _[0xc]; // 0x148c 
    std::uint8_t _[0x18]; // 0x1498 
};

struct C_CSTeam {
    static constexpr std::size_t size = 0x968;
    std::uint8_t pad_0[0x6b8]; // 0x0
    std::uint8_t _[0x200]; // 0x6b8 
    std::uint8_t _[0x4]; // 0x8b8 
    std::uint8_t _[0x4]; // 0x8bc 
    std::uint8_t _[0x4]; // 0x8c0 
    std::uint8_t _[0x4]; // 0x8c4 
    std::uint8_t _[0x4]; // 0x8c8 
    std::uint8_t _[0x84]; // 0x8cc 
    std::uint8_t _[0x4]; // 0x950 
    std::uint8_t _[0x8]; // 0x954 
    std::uint8_t _[0xc]; // 0x95c 
};

struct C_CS2HudModelWeapon {
    static constexpr std::size_t size = 0x1390;
    std::uint8_t pad_0[0x1390]; // 0x0
};

struct C_TextureBasedAnimatable {
    static constexpr std::size_t size = 0x10d0;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t _[0x4]; // 0x1098 
    std::uint8_t _[0x4]; // 0x109c 
    std::uint8_t _[0x8]; // 0x10a0 
    std::uint8_t _[0x8]; // 0x10a8 
    std::uint8_t _[0xc]; // 0x10b0 
    std::uint8_t _[0xc]; // 0x10bc 
    std::uint8_t _[0x4]; // 0x10c8 
    std::uint8_t _[0x4]; // 0x10cc 
};

struct C_LightEnvironmentEntity {
    static constexpr std::size_t size = 0x10a0;
    std::uint8_t pad_0[0x10a0]; // 0x0
};

struct C_TriggerPhysics {
    static constexpr std::size_t size = 0x11d0;
    std::uint8_t pad_0[0x1180]; // 0x0
    std::uint8_t _[0x4]; // 0x1180 
    std::uint8_t _[0x4]; // 0x1184 
    std::uint8_t _[0x4]; // 0x1188 
    std::uint8_t _[0x4]; // 0x118c 
    std::uint8_t _[0x4]; // 0x1190 
    std::uint8_t _[0x4]; // 0x1194 
    std::uint8_t _[0x4]; // 0x1198 
    std::uint8_t _[0x4]; // 0x119c 
    std::uint8_t _[0xc]; // 0x11a0 
    std::uint8_t _[0x4]; // 0x11ac 
    std::uint8_t _[0xc]; // 0x11b0 
    std::uint8_t _[0xc]; // 0x11bc 
    std::uint8_t _[0x1]; // 0x11c8 
    std::uint8_t _[0x7]; // 0x11c9 
};

struct C_PropDoorRotating {
    static constexpr std::size_t size = 0x14f0;
    std::uint8_t pad_0[0x14f0]; // 0x0
};

struct C_HandleTest {
    static constexpr std::size_t size = 0x608;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x4]; // 0x600 
    std::uint8_t _[0x4]; // 0x604 
};

struct CInfoWorldLayer {
    static constexpr std::size_t size = 0x638;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x18]; // 0x600 
    std::uint8_t _[0x8]; // 0x618 
    std::uint8_t _[0x8]; // 0x620 
    std::uint8_t _[0x1]; // 0x628 
    std::uint8_t _[0x1]; // 0x629 
    std::uint8_t _[0x2]; // 0x62a 
    std::uint8_t _[0x4]; // 0x62c 
    std::uint8_t _[0x8]; // 0x630 
};

struct CBodyComponentBaseModelEntity {
    static constexpr std::size_t size = 0x510;
    std::uint8_t pad_0[0x510]; // 0x0
};

struct C_Multimeter {
    static constexpr std::size_t size = 0x1270;
    std::uint8_t pad_0[0x1268]; // 0x0
    std::uint8_t _[0x8]; // 0x1268 
};

struct C_BaseTrigger {
    static constexpr std::size_t size = 0x1180;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t _[0x18]; // 0x1098 
    std::uint8_t _[0x18]; // 0x10b0 
    std::uint8_t _[0x18]; // 0x10c8 
    std::uint8_t _[0x18]; // 0x10e0 
    std::uint8_t _[0x18]; // 0x10f8 
    std::uint8_t _[0x18]; // 0x1110 
    std::uint8_t _[0x18]; // 0x1128 
    std::uint8_t _[0x18]; // 0x1140 
    std::uint8_t _[0x18]; // 0x1158 
    std::uint8_t _[0x8]; // 0x1170 
    std::uint8_t _[0x4]; // 0x1178 
    std::uint8_t _[0x4]; // 0x117c 
};

struct FilterDamageType {
    static constexpr std::size_t size = 0x640;
    std::uint8_t pad_0[0x638]; // 0x0
    std::uint8_t _[0x8]; // 0x638 
};

struct CAttributeList {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x68]; // 0x8 
    std::uint8_t _[0x8]; // 0x70 
};

struct CPulseCell_Inflow_Wait {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x48]; // 0xd8 
};

struct CFilterProximity {
    static constexpr std::size_t size = 0x640;
    std::uint8_t pad_0[0x638]; // 0x0
    std::uint8_t _[0x8]; // 0x638 
};

struct CCS2WeaponGraphController {
    static constexpr std::size_t size = 0x2d8;
    std::uint8_t pad_0[0xc0]; // 0x0
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
    std::uint8_t _[0x50]; // 0x288 
};

struct CEffectData {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0xc]; // 0x8 
    std::uint8_t _[0xc]; // 0x14 
    std::uint8_t _[0xc]; // 0x20 
    std::uint8_t _[0xc]; // 0x2c 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x4]; // 0x44 
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x8]; // 0x50 
    std::uint8_t _[0x4]; // 0x58 
    std::uint8_t _[0x2]; // 0x5c 
    std::uint8_t _[0x2]; // 0x5e 
    std::uint8_t _[0x2]; // 0x60 
    std::uint8_t _[0x1]; // 0x62 
    std::uint8_t _[0x1]; // 0x63 
    std::uint8_t _[0x4]; // 0x64 
    std::uint8_t _[0x4]; // 0x68 
    std::uint8_t _[0xc]; // 0x6c 
};

struct C_ParticleSystem {
    static constexpr std::size_t size = 0x1668;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t _[0x200]; // 0x1098 
    std::uint8_t _[0x1]; // 0x1298 
    std::uint8_t _[0x3]; // 0x1299 
    std::uint8_t _[0x4]; // 0x129c 
    std::uint8_t _[0x4]; // 0x12a0 
    std::uint8_t _[0x4]; // 0x12a4 
    std::uint8_t _[0x8]; // 0x12a8 
    std::uint8_t _[0x4]; // 0x12b0 
    std::uint8_t _[0x4]; // 0x12b4 
    std::uint8_t _[0x30]; // 0x12b8 
    std::uint8_t _[0x4]; // 0x12e8 
    std::uint8_t _[0x100]; // 0x12ec 
    std::uint8_t _[0x4]; // 0x13ec 
    std::uint8_t _[0x8]; // 0x13f0 
    std::uint8_t _[0x1]; // 0x13f8 
    std::uint8_t _[0x1]; // 0x13f9 
    std::uint8_t _[0x1]; // 0x13fa 
    std::uint8_t _[0x5]; // 0x13fb 
    std::uint8_t _[0x8]; // 0x1400 
    std::uint8_t _[0x200]; // 0x1408 
    std::uint8_t _[0x4]; // 0x1608 
    std::uint8_t _[0xc]; // 0x160c 
    std::uint8_t _[0x4]; // 0x1618 
    std::uint8_t _[0x24]; // 0x161c 
    std::uint8_t _[0x1]; // 0x1640 
    std::uint8_t _[0x27]; // 0x1641 
};

struct CPulseCell_Outflow_CycleShuffled {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x18]; // 0x48 
};

struct C_WeaponSCAR20 {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f50]; // 0x0
};

struct C_FuncMover {
    static constexpr std::size_t size = 0x1098;
    std::uint8_t pad_0[0x1098]; // 0x0
};

struct CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
    static constexpr std::size_t size = 0xe8;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x2]; // 0x8 
    std::uint8_t _[0xde]; // 0xa 
};

struct CLightComponent {
    static constexpr std::size_t size = 0x1f0;
    std::uint8_t pad_0[0x38]; // 0x0
    std::uint8_t _[0x40]; // 0x38 
    std::uint8_t _[0x4]; // 0x78 
    std::uint8_t _[0x4]; // 0x7c 
    std::uint8_t _[0x4]; // 0x80 
    std::uint8_t _[0x4]; // 0x84 
    std::uint8_t _[0x4]; // 0x88 
    std::uint8_t _[0x4]; // 0x8c 
    std::uint8_t _[0x4]; // 0x90 
    std::uint8_t _[0x4]; // 0x94 
    std::uint8_t _[0x4]; // 0x98 
    std::uint8_t _[0x4]; // 0x9c 
    std::uint8_t _[0x4]; // 0xa0 
    std::uint8_t _[0x4]; // 0xa4 
    std::uint8_t _[0x8]; // 0xa8 
    std::uint8_t _[0x4]; // 0xb0 
    std::uint8_t _[0x4]; // 0xb4 
    std::uint8_t _[0x4]; // 0xb8 
    std::uint8_t _[0x4]; // 0xbc 
    std::uint8_t _[0x4]; // 0xc0 
    std::uint8_t _[0x4]; // 0xc4 
    std::uint8_t _[0x4]; // 0xc8 
    std::uint8_t _[0x4]; // 0xcc 
    std::uint8_t _[0x4]; // 0xd0 
    std::uint8_t _[0x4]; // 0xd4 
    std::uint8_t _[0x8]; // 0xd8 
    std::uint8_t _[0x4]; // 0xe0 
    std::uint8_t _[0x4]; // 0xe4 
    std::uint8_t _[0x4]; // 0xe8 
    std::uint8_t _[0x4]; // 0xec 
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
    std::uint8_t _[0x1]; // 0x120 
    std::uint8_t _[0x3]; // 0x121 
    std::uint8_t _[0x4]; // 0x124 
    std::uint8_t _[0x4]; // 0x128 
    std::uint8_t _[0x4]; // 0x12c 
    std::uint8_t _[0x4]; // 0x130 
    std::uint8_t _[0x4]; // 0x134 
    std::uint8_t _[0x4]; // 0x138 
    std::uint8_t _[0x4]; // 0x13c 
    std::uint8_t _[0x1]; // 0x140 
    std::uint8_t _[0x1]; // 0x141 
    std::uint8_t _[0x2]; // 0x142 
    std::uint8_t _[0xc]; // 0x144 
    std::uint8_t _[0xc]; // 0x150 
    std::uint8_t _[0xc]; // 0x15c 
    std::uint8_t _[0xc]; // 0x168 
    std::uint8_t _[0xc]; // 0x174 
    std::uint8_t _[0x4]; // 0x180 
    std::uint8_t _[0x4]; // 0x184 
    std::uint8_t _[0x4]; // 0x188 
    std::uint8_t _[0x4]; // 0x18c 
    std::uint8_t _[0x4]; // 0x190 
    std::uint8_t _[0x4]; // 0x194 
    std::uint8_t _[0x4]; // 0x198 
    std::uint8_t _[0x1]; // 0x19c 
    std::uint8_t _[0x3]; // 0x19d 
    std::uint8_t _[0x4]; // 0x1a0 
    std::uint8_t _[0x4]; // 0x1a4 
    std::uint8_t _[0x4]; // 0x1a8 
    std::uint8_t _[0x4]; // 0x1ac 
    std::uint8_t _[0x4]; // 0x1b0 
    std::uint8_t _[0x4]; // 0x1b4 
    std::uint8_t _[0x4]; // 0x1b8 
    std::uint8_t _[0x4]; // 0x1bc 
    std::uint8_t _[0x4]; // 0x1c0 
    std::uint8_t _[0x4]; // 0x1c4 
    std::uint8_t _[0x4]; // 0x1c8 
    std::uint8_t _[0x4]; // 0x1cc 
    std::uint8_t _[0x4]; // 0x1d0 
    std::uint8_t _[0x4]; // 0x1d4 
    std::uint8_t _[0x4]; // 0x1d8 
    std::uint8_t _[0x4]; // 0x1dc 
    std::uint8_t _[0x10]; // 0x1e0 
};

struct C_DecoyGrenade {
    static constexpr std::size_t size = 0x1fe0;
    std::uint8_t pad_0[0x1fe0]; // 0x0
};

struct C_WaterBullet {
    static constexpr std::size_t size = 0x1268;
    std::uint8_t pad_0[0x1268]; // 0x0
};

struct CCSPlayer_ActionTrackingServices {
    static constexpr std::size_t size = 0x1a0;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x70]; // 0x50 
    std::uint8_t _[0x70]; // 0xc0 
    std::uint8_t _[0x70]; // 0x130 
};

struct CBrokenGlassTrap {
    static constexpr std::size_t size = 0x1098;
    std::uint8_t pad_0[0x1098]; // 0x0
};

struct C_EnvCubemap {
    static constexpr std::size_t size = 0x6e8;
    std::uint8_t pad_0[0x680]; // 0x0
    std::uint8_t _[0x8]; // 0x680 
    std::uint8_t _[0x4]; // 0x688 
    std::uint8_t _[0x4]; // 0x68c 
    std::uint8_t _[0xc]; // 0x690 
    std::uint8_t _[0xc]; // 0x69c 
    std::uint8_t _[0x4]; // 0x6a8 
    std::uint8_t _[0x4]; // 0x6ac 
    std::uint8_t _[0x4]; // 0x6b0 
    std::uint8_t _[0x4]; // 0x6b4 
    std::uint8_t _[0x4]; // 0x6b8 
    std::uint8_t _[0xc]; // 0x6bc 
    std::uint8_t _[0x4]; // 0x6c8 
    std::uint8_t _[0x1]; // 0x6cc 
    std::uint8_t _[0x1]; // 0x6cd 
    std::uint8_t _[0x1]; // 0x6ce 
    std::uint8_t _[0x1]; // 0x6cf 
    std::uint8_t _[0x10]; // 0x6d0 
    std::uint8_t _[0x8]; // 0x6e0 
};

struct CCSObserver_MovementServices {
    static constexpr std::size_t size = 0x258;
    std::uint8_t pad_0[0x258]; // 0x0
};

struct CBodyComponent {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x40]; // 0x8 
    std::uint8_t _[0x30]; // 0x48 
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

struct C_BaseCombatCharacter {
    static constexpr std::size_t size = 0x12f0;
    std::uint8_t pad_0[0x1268]; // 0x0
    std::uint8_t _[0x18]; // 0x1268 
    std::uint8_t _[0x1]; // 0x1280 
    std::uint8_t _[0x3]; // 0x1281 
    std::uint8_t _[0x4]; // 0x1284 
    std::uint8_t _[0x4]; // 0x1288 
    std::uint8_t _[0x64]; // 0x128c 
};

struct CGlowProperty {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x28]; // 0x8 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x4]; // 0x44 
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x1]; // 0x50 
    std::uint8_t _[0x7]; // 0x51 
};

struct C_PointClientUIDialog {
    static constexpr std::size_t size = 0x10d0;
    std::uint8_t pad_0[0x10c8]; // 0x0
    std::uint8_t _[0x4]; // 0x10c8 
    std::uint8_t _[0x4]; // 0x10cc 
};

struct C_SoundEventMultiPointEntity {
    static constexpr std::size_t size = 0x6c0;
    std::uint8_t pad_0[0x6c0]; // 0x0
};

struct CPulseCell_BaseValue {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct C_WeaponHKP2000 {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f50]; // 0x0
};

struct C_FootstepControl {
    static constexpr std::size_t size = 0x1190;
    std::uint8_t pad_0[0x1180]; // 0x0
    std::uint8_t _[0x8]; // 0x1180 
    std::uint8_t _[0x8]; // 0x1188 
};

struct CCitadelSoundOpvarSetOBB {
    static constexpr std::size_t size = 0x668;
    std::uint8_t pad_0[0x618]; // 0x0
    std::uint8_t _[0x8]; // 0x618 
    std::uint8_t _[0x8]; // 0x620 
    std::uint8_t _[0x8]; // 0x628 
    std::uint8_t _[0xc]; // 0x630 
    std::uint8_t _[0xc]; // 0x63c 
    std::uint8_t _[0xc]; // 0x648 
    std::uint8_t _[0xc]; // 0x654 
    std::uint8_t _[0x8]; // 0x660 
};

struct C_CSGO_EndOfMatchLineupStart {
    static constexpr std::size_t size = 0x600;
    std::uint8_t pad_0[0x600]; // 0x0
};

struct CPlayer_WaterServices {
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

struct CDamageRecord {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x8]; // 0x40 
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x8]; // 0x50 
    std::uint8_t _[0x8]; // 0x58 
    std::uint8_t _[0x4]; // 0x60 
    std::uint8_t _[0x4]; // 0x64 
    std::uint8_t _[0x4]; // 0x68 
    std::uint8_t _[0x4]; // 0x6c 
    std::uint8_t _[0x4]; // 0x70 
    std::uint8_t _[0x1]; // 0x74 
    std::uint8_t _[0x3]; // 0x75 
};

struct VPhysicsCollisionAttribute_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x2]; // 0x28 
    std::uint8_t _[0x2]; // 0x2a 
    std::uint8_t _[0x1]; // 0x2c 
    std::uint8_t _[0x1]; // 0x2d 
    std::uint8_t _[0x1]; // 0x2e 
    std::uint8_t _[0x1]; // 0x2f 
};

struct C_DynamicPropAlias_dynamic_prop {
    static constexpr std::size_t size = 0x14b0;
    std::uint8_t pad_0[0x14b0]; // 0x0
};

struct CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
    static constexpr std::size_t size = 0x698;
    std::uint8_t pad_0[0x698]; // 0x0
};

struct C_OmniLight {
    static constexpr std::size_t size = 0x13b8;
    std::uint8_t pad_0[0x13a8]; // 0x0
    std::uint8_t _[0x4]; // 0x13a8 
    std::uint8_t _[0x4]; // 0x13ac 
    std::uint8_t _[0x8]; // 0x13b0 
};

struct C_SceneEntity {
    static constexpr std::size_t size = 0x668;
    std::uint8_t pad_0[0x608]; // 0x0
    std::uint8_t _[0x1]; // 0x608 
    std::uint8_t _[0x1]; // 0x609 
    std::uint8_t _[0x1]; // 0x60a 
    std::uint8_t _[0x1]; // 0x60b 
    std::uint8_t _[0x4]; // 0x60c 
    std::uint8_t _[0x4]; // 0x610 
    std::uint8_t _[0x2]; // 0x614 
    std::uint8_t _[0x2]; // 0x616 
    std::uint8_t _[0x8]; // 0x618 
    std::uint8_t _[0x18]; // 0x620 
    std::uint8_t _[0x10]; // 0x638 
    std::uint8_t _[0x18]; // 0x648 
    std::uint8_t _[0x8]; // 0x660 
};

struct CPulseCell_Inflow_Yield {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x48]; // 0xd8 
};

struct C_NametagModule {
    static constexpr std::size_t size = 0x1278;
    std::uint8_t pad_0[0x1270]; // 0x0
    std::uint8_t _[0x8]; // 0x1270 
};

struct C_EconEntity {
    static constexpr std::size_t size = 0x1918;
    std::uint8_t pad_0[0x1278]; // 0x0
    std::uint8_t _[0x8]; // 0x1278 
    std::uint8_t _[0x8]; // 0x1280 
    std::uint8_t _[0x8]; // 0x1288 
    std::uint8_t _[0x610]; // 0x1290 
    std::uint8_t _[0x4]; // 0x18a0 
    std::uint8_t _[0x4]; // 0x18a4 
    std::uint8_t _[0x4]; // 0x18a8 
    std::uint8_t _[0x4]; // 0x18ac 
    std::uint8_t _[0x4]; // 0x18b0 
    std::uint8_t _[0x4]; // 0x18b4 
    std::uint8_t _[0x1]; // 0x18b8 
    std::uint8_t _[0x7]; // 0x18b9 
    std::uint8_t _[0x18]; // 0x18c0 
    std::uint8_t _[0x4]; // 0x18d8 
    std::uint8_t _[0x4]; // 0x18dc 
    std::uint8_t _[0x4]; // 0x18e0 
    std::uint8_t _[0x4]; // 0x18e4 
    std::uint8_t _[0x10]; // 0x18e8 
    std::uint8_t _[0x8]; // 0x18f8 
    std::uint8_t _[0x18]; // 0x1900 
};

struct CPlayer_UseServices {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct C_PointValueRemapper {
    static constexpr std::size_t size = 0x678;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x1]; // 0x600 
    std::uint8_t _[0x1]; // 0x601 
    std::uint8_t _[0x2]; // 0x602 
    std::uint8_t _[0x4]; // 0x604 
    std::uint8_t _[0x4]; // 0x608 
    std::uint8_t _[0x4]; // 0x60c 
    std::uint8_t _[0x4]; // 0x610 
    std::uint8_t _[0x4]; // 0x614 
    std::uint8_t _[0x4]; // 0x618 
    std::uint8_t _[0x4]; // 0x61c 
    std::uint8_t _[0x8]; // 0x620 
    std::uint8_t _[0x18]; // 0x628 
    std::uint8_t _[0x4]; // 0x640 
    std::uint8_t _[0x4]; // 0x644 
    std::uint8_t _[0x4]; // 0x648 
    std::uint8_t _[0x4]; // 0x64c 
    std::uint8_t _[0x4]; // 0x650 
    std::uint8_t _[0x4]; // 0x654 
    std::uint8_t _[0x4]; // 0x658 
    std::uint8_t _[0x4]; // 0x65c 
    std::uint8_t _[0x1]; // 0x660 
    std::uint8_t _[0x3]; // 0x661 
    std::uint8_t _[0x4]; // 0x664 
    std::uint8_t _[0x4]; // 0x668 
    std::uint8_t _[0xc]; // 0x66c 
};

struct CGameSceneNodeHandle {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
};

struct CPulseCell_Unknown {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x10]; // 0x48 
};

struct C_WeaponMP7 {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f50]; // 0x0
};

struct CSPerRoundStats_t {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x30]; // 0x0
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
    std::uint8_t _[0x8]; // 0x60 
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

struct C_CS2HudModelBase {
    static constexpr std::size_t size = 0x1350;
    std::uint8_t pad_0[0x1350]; // 0x0
};

struct C_CSGameRules {
    static constexpr std::size_t size = 0x4f68;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t _[0x1]; // 0x40 
    std::uint8_t _[0x3]; // 0x41 
    std::uint8_t _[0x4]; // 0x44 
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x1]; // 0x4c 
    std::uint8_t _[0x3]; // 0x4d 
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0x4]; // 0x54 
    std::uint8_t _[0x4]; // 0x58 
    std::uint8_t _[0x4]; // 0x5c 
    std::uint8_t _[0x1]; // 0x60 
    std::uint8_t _[0x3]; // 0x61 
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
    std::uint8_t _[0x4]; // 0x94 
    std::uint8_t _[0x1]; // 0x98 
    std::uint8_t _[0x1]; // 0x99 
    std::uint8_t _[0x1]; // 0x9a 
    std::uint8_t _[0x1]; // 0x9b 
    std::uint8_t _[0x4]; // 0x9c 
    std::uint8_t _[0x4]; // 0xa0 
    std::uint8_t _[0x1]; // 0xa4 
    std::uint8_t _[0x1]; // 0xa5 
    std::uint8_t _[0x2]; // 0xa6 
    std::uint8_t _[0x4]; // 0xa8 
    std::uint8_t _[0x4]; // 0xac 
    std::uint8_t _[0x4]; // 0xb0 
    std::uint8_t _[0x4]; // 0xb4 
    std::uint8_t _[0x200]; // 0xb8 
    std::uint8_t _[0x200]; // 0x2b8 
    std::uint8_t _[0x200]; // 0x4b8 
    std::uint8_t _[0x200]; // 0x6b8 
    std::uint8_t _[0x4]; // 0x8b8 
    std::uint8_t _[0x4]; // 0x8bc 
    std::uint8_t _[0x4]; // 0x8c0 
    std::uint8_t _[0x1]; // 0x8c4 
    std::uint8_t _[0x1]; // 0x8c5 
    std::uint8_t _[0x1]; // 0x8c6 
    std::uint8_t _[0x1]; // 0x8c7 
    std::uint8_t _[0xc8]; // 0x8c8 
    std::uint8_t _[0x10]; // 0x990 
    std::uint8_t _[0x4]; // 0x9a0 
    std::uint8_t _[0x4]; // 0x9a4 
    std::uint8_t _[0x4]; // 0x9a8 
    std::uint8_t _[0x4]; // 0x9ac 
    std::uint8_t _[0x4]; // 0x9b0 
    std::uint8_t _[0x1]; // 0x9b4 
    std::uint8_t _[0x3]; // 0x9b5 
    std::uint8_t _[0x78]; // 0x9b8 
    std::uint8_t _[0x78]; // 0xa30 
    std::uint8_t _[0x78]; // 0xaa8 
    std::uint8_t _[0x80]; // 0xb20 
    std::uint8_t _[0x4]; // 0xba0 
    std::uint8_t _[0x80]; // 0xba4 
    std::uint8_t _[0xc]; // 0xc24 
    std::uint8_t _[0xc]; // 0xc30 
    std::uint8_t _[0x24]; // 0xc3c 
    std::uint8_t _[0x8]; // 0xc60 
    std::uint8_t _[0x28]; // 0xc68 
    std::uint8_t _[0x28]; // 0xc90 
    std::uint8_t _[0x4]; // 0xcb8 
    std::uint8_t _[0x4]; // 0xcbc 
    std::uint8_t _[0xc0]; // 0xcc0 
    std::uint8_t _[0x4]; // 0xd80 
    std::uint8_t _[0x1]; // 0xd84 
    std::uint8_t _[0x1b]; // 0xd85 
    std::uint8_t _[0x8]; // 0xda0 
    std::uint8_t _[0x158]; // 0xda8 
    std::uint8_t _[0x4]; // 0xf00 
    std::uint8_t _[0x4]; // 0xf04 
    std::uint8_t _[0x4]; // 0xf08 
    std::uint8_t _[0x4]; // 0xf0c 
    std::uint8_t _[0x4]; // 0xf10 
    std::uint8_t _[0x4]; // 0xf14 
    std::uint8_t _[0x4]; // 0xf18 
    std::uint8_t _[0x4]; // 0xf1c 
    std::uint8_t _[0x8]; // 0xf20 
    std::uint8_t _[0x4]; // 0xf28 
    std::uint8_t _[0x4]; // 0xf2c 
    std::uint8_t _[0x4]; // 0xf30 
    std::uint8_t _[0x4]; // 0xf34 
    std::uint8_t _[0x8]; // 0xf38 
    std::uint8_t _[0x4]; // 0xf40 
    std::uint8_t _[0x4]; // 0xf44 
    std::uint8_t _[0x4]; // 0xf48 
    std::uint8_t _[0x4]; // 0xf4c 
    std::uint8_t _[0x4]; // 0xf50 
    std::uint8_t _[0x400c]; // 0xf54 
    std::uint8_t _[0x8]; // 0x4f60 
};

struct CGrenadeTracer {
    static constexpr std::size_t size = 0x1530;
    std::uint8_t pad_0[0x10b0]; // 0x0
    std::uint8_t _[0x4]; // 0x10b0 
    std::uint8_t _[0x47c]; // 0x10b4 
};

struct CCSGameModeRules_Noop {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x30]; // 0x0
};

struct CPulse_BlackboardReference {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x10]; // 0x8 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
};

struct C_BaseCSGrenadeProjectile {
    static constexpr std::size_t size = 0x1348;
    std::uint8_t pad_0[0x12b0]; // 0x0
    std::uint8_t _[0xc]; // 0x12b0 
    std::uint8_t _[0xc]; // 0x12bc 
    std::uint8_t _[0x8]; // 0x12c8 
    std::uint8_t _[0x8]; // 0x12d0 
    std::uint8_t _[0x4]; // 0x12d8 
    std::uint8_t _[0xc]; // 0x12dc 
    std::uint8_t _[0x4]; // 0x12e8 
    std::uint8_t _[0xc]; // 0x12ec 
    std::uint8_t _[0x4]; // 0x12f8 
    std::uint8_t _[0x1]; // 0x12fc 
    std::uint8_t _[0x3]; // 0x12fd 
    std::uint8_t _[0x8]; // 0x1300 
    std::uint8_t _[0x8]; // 0x1308 
    std::uint8_t _[0x18]; // 0x1310 
    std::uint8_t _[0x18]; // 0x1328 
    std::uint8_t _[0x8]; // 0x1340 
};

struct CCSGO_RushIntroCounterTerroristPosition {
    static constexpr std::size_t size = 0x1d18;
    std::uint8_t pad_0[0x1d18]; // 0x0
};

struct CPulseCell_ReturnValues {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct C_GradientFog {
    static constexpr std::size_t size = 0x698;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x8]; // 0x600 
    std::uint8_t _[0x4]; // 0x608 
    std::uint8_t _[0x4]; // 0x60c 
    std::uint8_t _[0x4]; // 0x610 
    std::uint8_t _[0x4]; // 0x614 
    std::uint8_t _[0x4]; // 0x618 
    std::uint8_t _[0x4]; // 0x61c 
    std::uint8_t _[0x4]; // 0x620 
    std::uint8_t _[0x4]; // 0x624 
    std::uint8_t _[0x4]; // 0x628 
    std::uint8_t _[0x4]; // 0x62c 
    std::uint8_t _[0x4]; // 0x630 
    std::uint8_t _[0x4]; // 0x634 
    std::uint8_t _[0x1]; // 0x638 
    std::uint8_t _[0x1]; // 0x639 
    std::uint8_t _[0x5e]; // 0x63a 
};

struct CCSPlayerController_InGameMoneyServices {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x4]; // 0x44 
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
};

struct CCSPlayer_AimPunchServices {
    static constexpr std::size_t size = 0xe8;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0xc]; // 0x50 
    std::uint8_t _[0x44]; // 0x5c 
    std::uint8_t _[0x4]; // 0xa0 
    std::uint8_t _[0x44]; // 0xa4 
};

struct C_HEGrenadeProjectile {
    static constexpr std::size_t size = 0x1348;
    std::uint8_t pad_0[0x1348]; // 0x0
};

struct CFilterModel {
    static constexpr std::size_t size = 0x640;
    std::uint8_t pad_0[0x638]; // 0x0
    std::uint8_t _[0x8]; // 0x638 
};

struct C_SoundAreaEntityOrientedBox {
    static constexpr std::size_t size = 0x640;
    std::uint8_t pad_0[0x628]; // 0x0
    std::uint8_t _[0xc]; // 0x628 
    std::uint8_t _[0xc]; // 0x634 
};

struct C_SoundOpvarSetPointEntity {
    static constexpr std::size_t size = 0x620;
    std::uint8_t pad_0[0x620]; // 0x0
};

struct CPulseGameBlackboard {
    static constexpr std::size_t size = 0x618;
    std::uint8_t pad_0[0x608]; // 0x0
    std::uint8_t _[0x8]; // 0x608 
    std::uint8_t _[0x8]; // 0x610 
};

struct CChoreoComponent {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x28]; // 0x8 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x38]; // 0x38 
    std::uint8_t _[0x4]; // 0x70 
    std::uint8_t _[0xc]; // 0x74 
};

struct CPulseCell_Value_RandomInt {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct C_CSWeaponBaseShotgun {
    static constexpr std::size_t size = 0x1f20;
    std::uint8_t pad_0[0x1f20]; // 0x0
};

struct C_RagdollPropAttached {
    static constexpr std::size_t size = 0x1328;
    std::uint8_t pad_0[0x12f0]; // 0x0
    std::uint8_t _[0x4]; // 0x12f0 
    std::uint8_t _[0x4]; // 0x12f4 
    std::uint8_t _[0xc]; // 0x12f8 
    std::uint8_t _[0xc]; // 0x1304 
    std::uint8_t _[0xc]; // 0x1310 
    std::uint8_t _[0x4]; // 0x131c 
    std::uint8_t _[0x8]; // 0x1320 
};

struct C_ModelPointEntity {
    static constexpr std::size_t size = 0x1098;
    std::uint8_t pad_0[0x1098]; // 0x0
};

struct C_CSGO_PreviewPlayer {
    static constexpr std::size_t size = 0x37d0;
    std::uint8_t pad_0[0x3720]; // 0x0
    std::uint8_t _[0x8]; // 0x3720 
    std::uint8_t _[0xa8]; // 0x3728 
};

struct C_RectLight {
    static constexpr std::size_t size = 0x13b0;
    std::uint8_t pad_0[0x13a8]; // 0x0
    std::uint8_t _[0x8]; // 0x13a8 
};

struct CCSRadarElement {
    static constexpr std::size_t size = 0x628;
    std::uint8_t pad_0[0x618]; // 0x0
    std::uint8_t _[0x4]; // 0x618 
    std::uint8_t _[0x4]; // 0x61c 
    std::uint8_t _[0x8]; // 0x620 
};

struct CPathSimple {
    static constexpr std::size_t size = 0x710;
    std::uint8_t pad_0[0x610]; // 0x0
    std::uint8_t _[0xf0]; // 0x610 
    std::uint8_t _[0x8]; // 0x700 
    std::uint8_t _[0x8]; // 0x708 
};

struct C_FuncTrackTrain {
    static constexpr std::size_t size = 0x10a8;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t _[0x4]; // 0x1098 
    std::uint8_t _[0x4]; // 0x109c 
    std::uint8_t _[0x8]; // 0x10a0 
};

struct C_EconWearable {
    static constexpr std::size_t size = 0x1920;
    std::uint8_t pad_0[0x1918]; // 0x0
    std::uint8_t _[0x4]; // 0x1918 
    std::uint8_t _[0x4]; // 0x191c 
};

struct C_EnvDecal {
    static constexpr std::size_t size = 0x10d0;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t _[0x8]; // 0x1098 
    std::uint8_t _[0x4]; // 0x10a0 
    std::uint8_t _[0x4]; // 0x10a4 
    std::uint8_t _[0x4]; // 0x10a8 
    std::uint8_t _[0x4]; // 0x10ac 
    std::uint8_t _[0x1]; // 0x10b0 
    std::uint8_t _[0x1]; // 0x10b1 
    std::uint8_t _[0x2]; // 0x10b2 
    std::uint8_t _[0x1c]; // 0x10b4 
};

struct EntitySpottedState_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0xc]; // 0xc 
};

struct fogparams_t {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0xc]; // 0x8 
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
    std::uint8_t _[0x1]; // 0x64 
    std::uint8_t _[0x1]; // 0x65 
    std::uint8_t _[0x1]; // 0x66 
    std::uint8_t _[0x1]; // 0x67 
};

struct C_WeaponM4A1 {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f50]; // 0x0
};

struct C_Item {
    static constexpr std::size_t size = 0x1a18;
    std::uint8_t pad_0[0x1918]; // 0x0
    std::uint8_t _[0x100]; // 0x1918 
};

struct C_CSPetPlacement {
    static constexpr std::size_t size = 0x600;
    std::uint8_t pad_0[0x600]; // 0x0
};

struct C_Beam {
    static constexpr std::size_t size = 0x1150;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t _[0x4]; // 0x1098 
    std::uint8_t _[0x4]; // 0x109c 
    std::uint8_t _[0x4]; // 0x10a0 
    std::uint8_t _[0x4]; // 0x10a4 
    std::uint8_t _[0x4]; // 0x10a8 
    std::uint8_t _[0x24]; // 0x10ac 
    std::uint8_t _[0x8]; // 0x10d0 
    std::uint8_t _[0x8]; // 0x10d8 
    std::uint8_t _[0x4]; // 0x10e0 
    std::uint8_t _[0x4]; // 0x10e4 
    std::uint8_t _[0x28]; // 0x10e8 
    std::uint8_t _[0xc]; // 0x1110 
    std::uint8_t _[0x4]; // 0x111c 
    std::uint8_t _[0x4]; // 0x1120 
    std::uint8_t _[0x4]; // 0x1124 
    std::uint8_t _[0x4]; // 0x1128 
    std::uint8_t _[0x4]; // 0x112c 
    std::uint8_t _[0x4]; // 0x1130 
    std::uint8_t _[0x4]; // 0x1134 
    std::uint8_t _[0x4]; // 0x1138 
    std::uint8_t _[0x4]; // 0x113c 
    std::uint8_t _[0xc]; // 0x1140 
    std::uint8_t _[0x4]; // 0x114c 
};

struct C_EnvLightProbeVolume {
    static constexpr std::size_t size = 0x720;
    std::uint8_t pad_0[0x698]; // 0x0
    std::uint8_t _[0x8]; // 0x698 
    std::uint8_t _[0x8]; // 0x6a0 
    std::uint8_t _[0x8]; // 0x6a8 
    std::uint8_t _[0x8]; // 0x6b0 
    std::uint8_t _[0x8]; // 0x6b8 
    std::uint8_t _[0x8]; // 0x6c0 
    std::uint8_t _[0x8]; // 0x6c8 
    std::uint8_t _[0xc]; // 0x6d0 
    std::uint8_t _[0xc]; // 0x6dc 
    std::uint8_t _[0x4]; // 0x6e8 
    std::uint8_t _[0x4]; // 0x6ec 
    std::uint8_t _[0x4]; // 0x6f0 
    std::uint8_t _[0x4]; // 0x6f4 
    std::uint8_t _[0x4]; // 0x6f8 
    std::uint8_t _[0x4]; // 0x6fc 
    std::uint8_t _[0x4]; // 0x700 
    std::uint8_t _[0x4]; // 0x704 
    std::uint8_t _[0x4]; // 0x708 
    std::uint8_t _[0xd]; // 0x70c 
    std::uint8_t _[0x7]; // 0x719 
};

struct CExplosionTypeData {
    static constexpr std::size_t size = 0x100;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0xe0]; // 0x10 
    std::uint8_t _[0x1]; // 0xf0 
    std::uint8_t _[0x7]; // 0xf1 
    std::uint8_t _[0x8]; // 0xf8 
};

struct C_FuncConveyor {
    static constexpr std::size_t size = 0x10e0;
    std::uint8_t pad_0[0x10a0]; // 0x0
    std::uint8_t _[0xc]; // 0x10a0 
    std::uint8_t _[0x4]; // 0x10ac 
    std::uint8_t _[0x4]; // 0x10b0 
    std::uint8_t _[0x4]; // 0x10b4 
    std::uint8_t _[0x4]; // 0x10b8 
    std::uint8_t _[0x4]; // 0x10bc 
    std::uint8_t _[0x18]; // 0x10c0 
    std::uint8_t _[0x4]; // 0x10d8 
    std::uint8_t _[0x4]; // 0x10dc 
};

struct CCSPlayer_WeaponServices {
    static constexpr std::size_t size = 0x1608;
    std::uint8_t pad_0[0xd0]; // 0x0
    std::uint8_t _[0x4]; // 0xd0 
    std::uint8_t _[0x29c]; // 0xd4 
    std::uint8_t _[0x1250]; // 0x370 
    std::uint8_t _[0x18]; // 0x15c0 
    std::uint8_t _[0x30]; // 0x15d8 
};

struct C_PhysMagnet {
    static constexpr std::size_t size = 0x1298;
    std::uint8_t pad_0[0x1268]; // 0x0
    std::uint8_t _[0x18]; // 0x1268 
    std::uint8_t _[0x18]; // 0x1280 
};

struct CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
    static constexpr std::size_t size = 0x690;
    std::uint8_t pad_0[0x690]; // 0x0
};

struct C_Breakable {
    static constexpr std::size_t size = 0x1098;
    std::uint8_t pad_0[0x1098]; // 0x0
};

struct C_PlantedC4 {
    static constexpr std::size_t size = 0x1958;
    std::uint8_t pad_0[0x1288]; // 0x0
    std::uint8_t _[0x4]; // 0x1288 
    std::uint8_t _[0x4]; // 0x128c 
    std::uint8_t _[0x8]; // 0x1290 
    std::uint8_t _[0x18]; // 0x1298 
    std::uint8_t _[0x4]; // 0x12b0 
    std::uint8_t _[0x4]; // 0x12b4 
    std::uint8_t _[0x4]; // 0x12b8 
    std::uint8_t _[0x1]; // 0x12bc 
    std::uint8_t _[0x3]; // 0x12bd 
    std::uint8_t _[0x4]; // 0x12c0 
    std::uint8_t _[0x4]; // 0x12c4 
    std::uint8_t _[0x4]; // 0x12c8 
    std::uint8_t _[0x4]; // 0x12cc 
    std::uint8_t _[0x1]; // 0x12d0 
    std::uint8_t _[0x3]; // 0x12d1 
    std::uint8_t _[0x4]; // 0x12d4 
    std::uint8_t _[0x4]; // 0x12d8 
    std::uint8_t _[0x4]; // 0x12dc 
    std::uint8_t _[0x8]; // 0x12e0 
    std::uint8_t _[0x610]; // 0x12e8 
    std::uint8_t _[0x4]; // 0x18f8 
    std::uint8_t _[0x4]; // 0x18fc 
    std::uint8_t _[0x4]; // 0x1900 
    std::uint8_t _[0x4]; // 0x1904 
    std::uint8_t _[0x8]; // 0x1908 
    std::uint8_t _[0x8]; // 0x1910 
    std::uint8_t _[0xc]; // 0x1918 
    std::uint8_t _[0xc]; // 0x1924 
    std::uint8_t _[0x28]; // 0x1930 
};

struct CCSCustomHudLayoutState {
    static constexpr std::size_t size = 0x108;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x18]; // 0x38 
    std::uint8_t _[0xb8]; // 0x50 
};

struct CCSGO_WingmanIntroCharacterPosition {
    static constexpr std::size_t size = 0x1d18;
    std::uint8_t pad_0[0x1d18]; // 0x0
};

struct CFilterName {
    static constexpr std::size_t size = 0x640;
    std::uint8_t pad_0[0x638]; // 0x0
    std::uint8_t _[0x8]; // 0x638 
};

struct C_RagdollProp {
    static constexpr std::size_t size = 0x12f0;
    std::uint8_t pad_0[0x1268]; // 0x0
    std::uint8_t _[0x18]; // 0x1268 
    std::uint8_t _[0x18]; // 0x1280 
    std::uint8_t _[0x18]; // 0x1298 
    std::uint8_t _[0x4]; // 0x12b0 
    std::uint8_t _[0x4]; // 0x12b4 
    std::uint8_t _[0x4]; // 0x12b8 
    std::uint8_t _[0x4]; // 0x12bc 
    std::uint8_t _[0x18]; // 0x12c0 
    std::uint8_t _[0x18]; // 0x12d8 
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

struct C_MapPreviewParticleSystem {
    static constexpr std::size_t size = 0x1668;
    std::uint8_t pad_0[0x1668]; // 0x0
};

struct CBaseAnimGraph {
    static constexpr std::size_t size = 0x1268;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t _[0x98]; // 0x1098 
    std::uint8_t _[0x8]; // 0x1130 
    std::uint8_t _[0x2]; // 0x1138 
    std::uint8_t _[0x6]; // 0x113a 
    std::uint8_t _[0x20]; // 0x1140 
    std::uint8_t _[0x20]; // 0x1160 
    std::uint8_t _[0x1]; // 0x1180 
    std::uint8_t _[0x3]; // 0x1181 
    std::uint8_t _[0xc]; // 0x1184 
    std::uint8_t _[0x8]; // 0x1190 
    std::uint8_t _[0x8]; // 0x1198 
    std::uint8_t _[0x10]; // 0x11a0 
    std::uint8_t _[0x8]; // 0x11b0 
    std::uint8_t _[0x48]; // 0x11b8 
    std::uint8_t _[0x1]; // 0x1200 
    std::uint8_t _[0x1]; // 0x1201 
    std::uint8_t _[0xe]; // 0x1202 
    std::uint8_t _[0x58]; // 0x1210 
};

struct CPulseCell_InlineNodeSkipSelector {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x18]; // 0x50 
    std::uint8_t _[0x48]; // 0x68 
};

struct C_LightEntity {
    static constexpr std::size_t size = 0x10a0;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t _[0x8]; // 0x1098 
};

struct C_WeaponM249 {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f50]; // 0x0
};

struct C_LocalTempEntity {
    static constexpr std::size_t size = 0x1310;
    std::uint8_t pad_0[0x1268]; // 0x0
    std::uint8_t _[0x4]; // 0x1268 
    std::uint8_t _[0x4]; // 0x126c 
    std::uint8_t _[0x4]; // 0x1270 
    std::uint8_t _[0x4]; // 0x1274 
    std::uint8_t _[0x4]; // 0x1278 
    std::uint8_t _[0x4]; // 0x127c 
    std::uint8_t _[0x4]; // 0x1280 
    std::uint8_t _[0x4]; // 0x1284 
    std::uint8_t _[0x4]; // 0x1288 
    std::uint8_t _[0xc]; // 0x128c 
    std::uint8_t _[0xc]; // 0x1298 
    std::uint8_t _[0x4]; // 0x12a4 
    std::uint8_t _[0xc]; // 0x12a8 
    std::uint8_t _[0x4]; // 0x12b4 
    std::uint8_t _[0x4]; // 0x12b8 
    std::uint8_t _[0x4]; // 0x12bc 
    std::uint8_t _[0x8]; // 0x12c0 
    std::uint8_t _[0x8]; // 0x12c8 
    std::uint8_t _[0x8]; // 0x12d0 
    std::uint8_t _[0x4]; // 0x12d8 
    std::uint8_t _[0x4]; // 0x12dc 
    std::uint8_t _[0xc]; // 0x12e0 
    std::uint8_t _[0xc]; // 0x12ec 
    std::uint8_t _[0xc]; // 0x12f8 
    std::uint8_t _[0xc]; // 0x1304 
};

struct C_WeaponTaser {
    static constexpr std::size_t size = 0x1f60;
    std::uint8_t pad_0[0x1f50]; // 0x0
    std::uint8_t _[0x4]; // 0x1f50 
    std::uint8_t _[0xc]; // 0x1f54 
};

struct C_PointEntity {
    static constexpr std::size_t size = 0x600;
    std::uint8_t pad_0[0x600]; // 0x0
};

struct C_SingleplayRules {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x40]; // 0x0
};

struct CLogicalEntity {
    static constexpr std::size_t size = 0x600;
    std::uint8_t pad_0[0x600]; // 0x0
};

struct C_PrecipitationBlocker {
    static constexpr std::size_t size = 0x1098;
    std::uint8_t pad_0[0x1098]; // 0x0
};

struct C_CSGO_CounterTerroristTeamIntroCamera {
    static constexpr std::size_t size = 0x690;
    std::uint8_t pad_0[0x690]; // 0x0
};

struct C_SoundOpvarSetPathCornerEntity {
    static constexpr std::size_t size = 0x620;
    std::uint8_t pad_0[0x620]; // 0x0
};

struct CPlayer_WeaponServices {
    static constexpr std::size_t size = 0xa8;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x18]; // 0x48 
    std::uint8_t _[0x4]; // 0x60 
    std::uint8_t _[0x4]; // 0x64 
    std::uint8_t _[0x40]; // 0x68 
};

struct C_WeaponNegev {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f50]; // 0x0
};

struct C_WeaponFiveSeven {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f50]; // 0x0
};

struct C_WeaponSawedoff {
    static constexpr std::size_t size = 0x1f20;
    std::uint8_t pad_0[0x1f20]; // 0x0
};

struct C_TriggerVolume {
    static constexpr std::size_t size = 0x1098;
    std::uint8_t pad_0[0x1098]; // 0x0
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

struct C_WeaponMP9 {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f50]; // 0x0
};

struct C_DynamicPropAlias_prop_dynamic_override {
    static constexpr std::size_t size = 0x14b0;
    std::uint8_t pad_0[0x14b0]; // 0x0
};

struct CEnvSoundscapeTriggerable {
    static constexpr std::size_t size = 0x690;
    std::uint8_t pad_0[0x690]; // 0x0
};

struct C_PlayerPing {
    static constexpr std::size_t size = 0x650;
    std::uint8_t pad_0[0x630]; // 0x0
    std::uint8_t _[0x4]; // 0x630 
    std::uint8_t _[0x4]; // 0x634 
    std::uint8_t _[0x4]; // 0x638 
    std::uint8_t _[0x1]; // 0x63c 
    std::uint8_t _[0x13]; // 0x63d 
};

struct C_AK47 {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f50]; // 0x0
};

struct C_CSGO_MapPreviewCameraPathNode {
    static constexpr std::size_t size = 0x650;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x8]; // 0x600 
    std::uint8_t _[0x4]; // 0x608 
    std::uint8_t _[0xc]; // 0x60c 
    std::uint8_t _[0xc]; // 0x618 
    std::uint8_t _[0x4]; // 0x624 
    std::uint8_t _[0x4]; // 0x628 
    std::uint8_t _[0x4]; // 0x62c 
    std::uint8_t _[0x4]; // 0x630 
    std::uint8_t _[0xc]; // 0x634 
    std::uint8_t _[0x10]; // 0x640 
};

struct C_CSPlayerResource {
    static constexpr std::size_t size = 0x698;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0xc]; // 0x600 
    std::uint8_t _[0xc]; // 0x60c 
    std::uint8_t _[0x30]; // 0x618 
    std::uint8_t _[0xc]; // 0x648 
    std::uint8_t _[0xc]; // 0x654 
    std::uint8_t _[0x10]; // 0x660 
    std::uint8_t _[0x10]; // 0x670 
    std::uint8_t _[0x10]; // 0x680 
    std::uint8_t _[0x1]; // 0x690 
    std::uint8_t _[0x7]; // 0x691 
};

struct CSkyboxReference {
    static constexpr std::size_t size = 0x608;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x4]; // 0x600 
    std::uint8_t _[0x4]; // 0x604 
};

struct C_IncendiaryGrenade {
    static constexpr std::size_t size = 0x1fe0;
    std::uint8_t pad_0[0x1fe0]; // 0x0
};

struct CFilterClass {
    static constexpr std::size_t size = 0x640;
    std::uint8_t pad_0[0x638]; // 0x0
    std::uint8_t _[0x8]; // 0x638 
};

struct C_PointCameraVFOV {
    static constexpr std::size_t size = 0x668;
    std::uint8_t pad_0[0x660]; // 0x0
    std::uint8_t _[0x8]; // 0x660 
};

struct C_PointCamera {
    static constexpr std::size_t size = 0x660;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x4]; // 0x600 
    std::uint8_t _[0x4]; // 0x604 
    std::uint8_t _[0x4]; // 0x608 
    std::uint8_t _[0x4]; // 0x60c 
    std::uint8_t _[0x4]; // 0x610 
    std::uint8_t _[0x4]; // 0x614 
    std::uint8_t _[0x4]; // 0x618 
    std::uint8_t _[0x1]; // 0x61c 
    std::uint8_t _[0x3]; // 0x61d 
    std::uint8_t _[0x4]; // 0x620 
    std::uint8_t _[0x4]; // 0x624 
    std::uint8_t _[0x4]; // 0x628 
    std::uint8_t _[0x4]; // 0x62c 
    std::uint8_t _[0x4]; // 0x630 
    std::uint8_t _[0x1]; // 0x634 
    std::uint8_t _[0x1]; // 0x635 
    std::uint8_t _[0x2]; // 0x636 
    std::uint8_t _[0x4]; // 0x638 
    std::uint8_t _[0x4]; // 0x63c 
    std::uint8_t _[0x4]; // 0x640 
    std::uint8_t _[0x4]; // 0x644 
    std::uint8_t _[0x4]; // 0x648 
    std::uint8_t _[0x4]; // 0x64c 
    std::uint8_t _[0x4]; // 0x650 
    std::uint8_t _[0x4]; // 0x654 
    std::uint8_t _[0x8]; // 0x658 
};

struct CPathWithDynamicNodes {
    static constexpr std::size_t size = 0x760;
    std::uint8_t pad_0[0x710]; // 0x0
    std::uint8_t _[0x20]; // 0x710 
    std::uint8_t _[0x20]; // 0x730 
    std::uint8_t _[0x4]; // 0x750 
    std::uint8_t _[0xc]; // 0x754 
};

struct CBaseFilter {
    static constexpr std::size_t size = 0x638;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x8]; // 0x600 
    std::uint8_t _[0x18]; // 0x608 
    std::uint8_t _[0x18]; // 0x620 
};

struct WeaponPurchaseTracker_t {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x68]; // 0x8 
};

struct CMapInfo {
    static constexpr std::size_t size = 0x630;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x4]; // 0x600 
    std::uint8_t _[0x4]; // 0x604 
    std::uint8_t _[0x4]; // 0x608 
    std::uint8_t _[0x1]; // 0x60c 
    std::uint8_t _[0x3]; // 0x60d 
    std::uint8_t _[0x4]; // 0x610 
    std::uint8_t _[0x4]; // 0x614 
    std::uint8_t _[0x1]; // 0x618 
    std::uint8_t _[0x1]; // 0x619 
    std::uint8_t _[0x2]; // 0x61a 
    std::uint8_t _[0x4]; // 0x61c 
    std::uint8_t _[0x4]; // 0x620 
    std::uint8_t _[0x4]; // 0x624 
    std::uint8_t _[0x4]; // 0x628 
    std::uint8_t _[0x4]; // 0x62c 
};

struct C_CSGO_EndOfMatchCamera {
    static constexpr std::size_t size = 0x690;
    std::uint8_t pad_0[0x690]; // 0x0
};

struct C_BaseGrenade {
    static constexpr std::size_t size = 0x12b0;
    std::uint8_t pad_0[0x1268]; // 0x0
    std::uint8_t _[0x1]; // 0x1268 
    std::uint8_t _[0x1]; // 0x1269 
    std::uint8_t _[0x2]; // 0x126a 
    std::uint8_t _[0x4]; // 0x126c 
    std::uint8_t _[0x4]; // 0x1270 
    std::uint8_t _[0x4]; // 0x1274 
    std::uint8_t _[0x8]; // 0x1278 
    std::uint8_t _[0x8]; // 0x1280 
    std::uint8_t _[0x8]; // 0x1288 
    std::uint8_t _[0x18]; // 0x1290 
    std::uint8_t _[0x4]; // 0x12a8 
    std::uint8_t _[0x4]; // 0x12ac 
};

struct C_PlayerSprayDecal {
    static constexpr std::size_t size = 0x11a8;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t _[0x4]; // 0x1098 
    std::uint8_t _[0x4]; // 0x109c 
    std::uint8_t _[0x4]; // 0x10a0 
    std::uint8_t _[0x4]; // 0x10a4 
    std::uint8_t _[0xc]; // 0x10a8 
    std::uint8_t _[0xc]; // 0x10b4 
    std::uint8_t _[0xc]; // 0x10c0 
    std::uint8_t _[0xc]; // 0x10cc 
    std::uint8_t _[0x4]; // 0x10d8 
    std::uint8_t _[0x4]; // 0x10dc 
    std::uint8_t _[0x4]; // 0x10e0 
    std::uint8_t _[0x4]; // 0x10e4 
    std::uint8_t _[0x4]; // 0x10e8 
    std::uint8_t _[0x1]; // 0x10ec 
    std::uint8_t _[0x8b]; // 0x10ed 
    std::uint8_t _[0x30]; // 0x1178 
};

struct CEntityIdentity {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x14]; // 0x0
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x10]; // 0x20 
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x8]; // 0x40 
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x8]; // 0x50 
    std::uint8_t _[0x8]; // 0x58 
    std::uint8_t _[0x8]; // 0x60 
    std::uint8_t _[0x8]; // 0x68 
};

struct CPulseCell_LimitCount__Criteria_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t _[0x1]; // 0x0 
};

struct C_CS2HudModelArms {
    static constexpr std::size_t size = 0x1460;
    std::uint8_t pad_0[0x1460]; // 0x0
};

struct CBasePlayerVData {
    static constexpr std::size_t size = 0x258;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0xe0]; // 0x28 
    std::uint8_t _[0xe0]; // 0x108 
    std::uint8_t _[0x10]; // 0x1e8 
    std::uint8_t _[0x10]; // 0x1f8 
    std::uint8_t _[0x10]; // 0x208 
    std::uint8_t _[0x10]; // 0x218 
    std::uint8_t _[0x10]; // 0x228 
    std::uint8_t _[0x4]; // 0x238 
    std::uint8_t _[0x4]; // 0x23c 
    std::uint8_t _[0x4]; // 0x240 
    std::uint8_t _[0x4]; // 0x244 
    std::uint8_t _[0x4]; // 0x248 
    std::uint8_t _[0x4]; // 0x24c 
    std::uint8_t _[0x4]; // 0x250 
    std::uint8_t _[0x4]; // 0x254 
};

struct C_LightSpotEntity {
    static constexpr std::size_t size = 0x10a0;
    std::uint8_t pad_0[0x10a0]; // 0x0
};

struct CCSGameModeRules_Deathmatch {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x8]; // 0x38 
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

struct C_Sprite {
    static constexpr std::size_t size = 0x1118;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t _[0x8]; // 0x1098 
    std::uint8_t _[0x4]; // 0x10a0 
    std::uint8_t _[0x4]; // 0x10a4 
    std::uint8_t _[0x4]; // 0x10a8 
    std::uint8_t _[0x4]; // 0x10ac 
    std::uint8_t _[0x10]; // 0x10b0 
    std::uint8_t _[0x4]; // 0x10c0 
    std::uint8_t _[0x4]; // 0x10c4 
    std::uint8_t _[0x4]; // 0x10c8 
    std::uint8_t _[0x4]; // 0x10cc 
    std::uint8_t _[0x4]; // 0x10d0 
    std::uint8_t _[0x4]; // 0x10d4 
    std::uint8_t _[0x4]; // 0x10d8 
    std::uint8_t _[0x4]; // 0x10dc 
    std::uint8_t _[0x4]; // 0x10e0 
    std::uint8_t _[0x4]; // 0x10e4 
    std::uint8_t _[0x4]; // 0x10e8 
    std::uint8_t _[0x4]; // 0x10ec 
    std::uint8_t _[0x4]; // 0x10f0 
    std::uint8_t _[0x4]; // 0x10f4 
    std::uint8_t _[0x10]; // 0x10f8 
    std::uint8_t _[0x4]; // 0x1108 
    std::uint8_t _[0x4]; // 0x110c 
    std::uint8_t _[0x8]; // 0x1110 
};

struct C_CsmFovOverride {
    static constexpr std::size_t size = 0x610;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x8]; // 0x600 
    std::uint8_t _[0x8]; // 0x608 
};

struct C_WeaponGlock {
    static constexpr std::size_t size = 0x1f50;
    std::uint8_t pad_0[0x1f50]; // 0x0
};

struct C_PhysicsProp {
    static constexpr std::size_t size = 0x13f0;
    std::uint8_t pad_0[0x13e0]; // 0x0
    std::uint8_t _[0x10]; // 0x13e0 
};

struct CFilterTeam {
    static constexpr std::size_t size = 0x640;
    std::uint8_t pad_0[0x638]; // 0x0
    std::uint8_t _[0x8]; // 0x638 
};

struct CBasePlayerWeaponVData {
    static constexpr std::size_t size = 0x520;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0xe0]; // 0x28 
    std::uint8_t _[0xe0]; // 0x108 
    std::uint8_t _[0xe0]; // 0x1e8 
    std::uint8_t _[0x1]; // 0x2c8 
    std::uint8_t _[0x7]; // 0x2c9 
    std::uint8_t _[0x20]; // 0x2d0 
    std::uint8_t _[0xe0]; // 0x2f0 
    std::uint8_t _[0x8]; // 0x3d0 
    std::uint8_t _[0xe0]; // 0x3d8 
    std::uint8_t _[0x4]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4bc 
    std::uint8_t _[0x4]; // 0x4c0 
    std::uint8_t _[0x1]; // 0x4c4 
    std::uint8_t _[0x1]; // 0x4c5 
    std::uint8_t _[0x1]; // 0x4c6 
    std::uint8_t _[0x1]; // 0x4c7 
    std::uint8_t _[0x4]; // 0x4c8 
    std::uint8_t _[0x1]; // 0x4cc 
    std::uint8_t _[0x1]; // 0x4cd 
    std::uint8_t _[0x1]; // 0x4ce 
    std::uint8_t _[0x1]; // 0x4cf 
    std::uint8_t _[0x4]; // 0x4d0 
    std::uint8_t _[0x4]; // 0x4d4 
    std::uint8_t _[0x4]; // 0x4d8 
    std::uint8_t _[0x4]; // 0x4dc 
    std::uint8_t _[0x1]; // 0x4e0 
    std::uint8_t _[0x1]; // 0x4e1 
    std::uint8_t _[0x2]; // 0x4e2 
    std::uint8_t _[0x4]; // 0x4e4 
    std::uint8_t _[0x4]; // 0x4e8 
    std::uint8_t _[0x4]; // 0x4ec 
    std::uint8_t _[0x8]; // 0x4f0 
    std::uint8_t _[0x28]; // 0x4f8 
};

struct C_SmokeGrenade {
    static constexpr std::size_t size = 0x1fe0;
    std::uint8_t pad_0[0x1fe0]; // 0x0
};

struct C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel {
    static constexpr std::size_t size = 0x37d0;
    std::uint8_t pad_0[0x37d0]; // 0x0
};

struct CCSGO_RushIntroCharacterPosition {
    static constexpr std::size_t size = 0x1d18;
    std::uint8_t pad_0[0x1d18]; // 0x0
};

struct CInfoParticleTarget {
    static constexpr std::size_t size = 0x600;
    std::uint8_t pad_0[0x600]; // 0x0
};

struct CCSPlayer_DamageReactServices {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x50]; // 0x0
};

struct C_PointClientUIWorldPanel {
    static constexpr std::size_t size = 0x1300;
    std::uint8_t pad_0[0x10d0]; // 0x0
    std::uint8_t _[0x1]; // 0x10d0 
    std::uint8_t _[0x1]; // 0x10d1 
    std::uint8_t _[0xe]; // 0x10d2 
    std::uint8_t _[0x190]; // 0x10e0 
    std::uint8_t _[0x28]; // 0x1270 
    std::uint8_t _[0x1]; // 0x1298 
    std::uint8_t _[0x1]; // 0x1299 
    std::uint8_t _[0x2]; // 0x129a 
    std::uint8_t _[0x4]; // 0x129c 
    std::uint8_t _[0x4]; // 0x12a0 
    std::uint8_t _[0x4]; // 0x12a4 
    std::uint8_t _[0x4]; // 0x12a8 
    std::uint8_t _[0x4]; // 0x12ac 
    std::uint8_t _[0x4]; // 0x12b0 
    std::uint8_t _[0x4]; // 0x12b4 
    std::uint8_t _[0x4]; // 0x12b8 
    std::uint8_t _[0x4]; // 0x12bc 
    std::uint8_t _[0x4]; // 0x12c0 
    std::uint8_t _[0x4]; // 0x12c4 
    std::uint8_t _[0x18]; // 0x12c8 
    std::uint8_t _[0x1]; // 0x12e0 
    std::uint8_t _[0x1]; // 0x12e1 
    std::uint8_t _[0x1]; // 0x12e2 
    std::uint8_t _[0x1]; // 0x12e3 
    std::uint8_t _[0x1]; // 0x12e4 
    std::uint8_t _[0x1]; // 0x12e5 
    std::uint8_t _[0x1]; // 0x12e6 
    std::uint8_t _[0x1]; // 0x12e7 
    std::uint8_t _[0x4]; // 0x12e8 
    std::uint8_t _[0x4]; // 0x12ec 
    std::uint8_t _[0x10]; // 0x12f0 
};

struct C_EntityFlame {
    static constexpr std::size_t size = 0x648;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x28]; // 0x600 
    std::uint8_t _[0x4]; // 0x628 
    std::uint8_t _[0x1c]; // 0x62c 
};

struct CBaseAnimGraphAlias_baseanimating {
    static constexpr std::size_t size = 0x1268;
    std::uint8_t pad_0[0x1268]; // 0x0
};

struct CBasePlayerController {
    static constexpr std::size_t size = 0x800;
    std::uint8_t pad_0[0x608]; // 0x0
    std::uint8_t _[0xa8]; // 0x608 
    std::uint8_t _[0x8]; // 0x6b0 
    std::uint8_t _[0x4]; // 0x6b8 
    std::uint8_t _[0x4]; // 0x6bc 
    std::uint8_t _[0x4]; // 0x6c0 
    std::uint8_t _[0x8]; // 0x6c4 
    std::uint8_t _[0x4]; // 0x6cc 
    std::uint8_t _[0x8]; // 0x6d0 
    std::uint8_t _[0x18]; // 0x6d8 
    std::uint8_t _[0x4]; // 0x6f0 
    std::uint8_t _[0x4]; // 0x6f4 
    std::uint8_t _[0x4]; // 0x6f8 
    std::uint8_t _[0x8c]; // 0x6fc 
    std::uint8_t _[0x8]; // 0x788 
    std::uint8_t _[0x1]; // 0x790 
    std::uint8_t _[0x3]; // 0x791 
    std::uint8_t _[0x6c]; // 0x794 
};

struct C_CSGO_EndOfMatchLineupEndpoint {
    static constexpr std::size_t size = 0x600;
    std::uint8_t pad_0[0x600]; // 0x0
};

struct GeneratedTextureHandle_t {
    static constexpr std::size_t size = 0x60;
    std::uint8_t _[0x60]; // 0x0 
};

struct CompositeMaterialInputContainer_t {
    static constexpr std::size_t size = 0x138;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0xe0]; // 0x8 
    std::uint8_t _[0x8]; // 0xe8 
    std::uint8_t _[0x8]; // 0xf0 
    std::uint8_t _[0x18]; // 0xf8 
    std::uint8_t _[0x8]; // 0x110 
    std::uint8_t _[0x20]; // 0x118 
};

struct CompositeMaterialAssemblyProcedure_t {
    static constexpr std::size_t size = 0x60;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x18]; // 0x18 
    std::uint8_t _[0x18]; // 0x30 
    std::uint8_t _[0x18]; // 0x48 
};

struct CompositeMaterialInputLooseVariable_t {
    static constexpr std::size_t size = 0x288;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x8]; // 0x38 
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
    std::uint8_t _[0x8]; // 0x90 
    std::uint8_t _[0xe0]; // 0x98 
    std::uint8_t _[0x8]; // 0x178 
    std::uint8_t _[0xe0]; // 0x180 
    std::uint8_t _[0x8]; // 0x260 
    std::uint8_t _[0x8]; // 0x268 
    std::uint8_t _[0x8]; // 0x270 
    std::uint8_t _[0x8]; // 0x278 
    std::uint8_t _[0x8]; // 0x280 
};

struct screenshake_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0xc]; // 0x14 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0xc]; // 0x28 
    std::uint8_t _[0x4]; // 0x34 
};

struct CCS2UIPawnGraphController {
    static constexpr std::size_t size = 0x240;
    std::uint8_t pad_0[0xc0]; // 0x0
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
};

struct inv_image_light_barn_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0xc]; // 0xc 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
};

struct inv_image_map_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
};

struct inv_image_light_fill_t {
    static constexpr std::size_t size = 0x1c;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0xc]; // 0xc 
    std::uint8_t _[0x4]; // 0x18 
};

struct CInterpolatedValue {
    static constexpr std::size_t size = 0x14;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
};

struct inv_image_item_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0xc]; // 0xc 
    std::uint8_t _[0x8]; // 0x18 
};

struct TimedEvent {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct CFlashlightEffect {
    static constexpr std::size_t size = 0x2e0;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x10]; // 0x10 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0xc]; // 0x24 
    std::uint8_t _[0x10]; // 0x30 
    std::uint8_t _[0xc]; // 0x40 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0x4]; // 0x54 
    std::uint8_t _[0x4]; // 0x58 
    std::uint8_t _[0x4]; // 0x5c 
    std::uint8_t _[0x8]; // 0x60 
    std::uint8_t _[0x8]; // 0x68 
    std::uint8_t _[0x270]; // 0x70 
};

struct inv_image_camera_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0xc]; // 0x1c 
    std::uint8_t _[0xc]; // 0x28 
    std::uint8_t _[0x4]; // 0x34 
};

struct CInventoryImageData {
    static constexpr std::size_t size = 0x100;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0xf0]; // 0x10 
};

struct inv_image_clearcolor_t {
    static constexpr std::size_t size = 0xc;
    std::uint8_t _[0xc]; // 0x0 
};

struct C_CommandContext {
    static constexpr std::size_t size = 0xa8;
    std::uint8_t _[0xa0]; // 0x0 
    std::uint8_t _[0x8]; // 0xa0 
};

struct CompositeMaterialEditorPoint_t {
    static constexpr std::size_t size = 0x218;
    std::uint8_t _[0xe0]; // 0x0 
    std::uint8_t _[0x4]; // 0xe0 
    std::uint8_t _[0x4]; // 0xe4 
    std::uint8_t _[0x10]; // 0xe8 
    std::uint8_t _[0x8]; // 0xf8 
    std::uint8_t _[0xe0]; // 0x100 
    std::uint8_t _[0x18]; // 0x1e0 
    std::uint8_t _[0x20]; // 0x1f8 
};

struct CPlayerSprayDecalRenderHelper {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x30]; // 0x0
};

struct C_IronSightController {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x60]; // 0x30 
    std::uint8_t _[0xc]; // 0x90 
    std::uint8_t _[0x8]; // 0x9c 
    std::uint8_t _[0x4]; // 0xa4 
    std::uint8_t _[0x8]; // 0xa8 
};

struct CompMatMutatorCondition_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
};

struct inv_image_data_t {
    static constexpr std::size_t size = 0xf0;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x20]; // 0x10 
    std::uint8_t _[0x38]; // 0x30 
    std::uint8_t _[0x1c]; // 0x68 
    std::uint8_t _[0x1c]; // 0x84 
    std::uint8_t _[0x20]; // 0xa0 
    std::uint8_t _[0x20]; // 0xc0 
    std::uint8_t _[0x10]; // 0xe0 
};

struct CompMatPropertyMutator_t {
    static constexpr std::size_t size = 0x390;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x18]; // 0x30 
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x8]; // 0x50 
    std::uint8_t _[0x8]; // 0x58 
    std::uint8_t _[0x8]; // 0x60 
    std::uint8_t _[0x288]; // 0x68 
    std::uint8_t _[0x8]; // 0x2f0 
    std::uint8_t _[0x8]; // 0x2f8 
    std::uint8_t _[0x4]; // 0x300 
    std::uint8_t _[0x4]; // 0x304 
    std::uint8_t _[0x8]; // 0x308 
    std::uint8_t _[0x1]; // 0x310 
    std::uint8_t _[0x7]; // 0x311 
    std::uint8_t _[0x18]; // 0x318 
    std::uint8_t _[0x18]; // 0x330 
    std::uint8_t _[0x8]; // 0x348 
    std::uint8_t _[0x8]; // 0x350 
    std::uint8_t _[0x8]; // 0x358 
    std::uint8_t _[0x8]; // 0x360 
    std::uint8_t _[0x8]; // 0x368 
    std::uint8_t _[0x8]; // 0x370 
    std::uint8_t _[0x18]; // 0x378 
};

struct CCompositeMaterialEditorDoc {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x10]; // 0x28 
};

struct CClientAlphaProperty {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x5]; // 0x12 
    std::uint8_t _[0x1]; // 0x17 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x10]; // 0x20 
};

struct screenfade_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x18]; // 0x10 
};

struct CGlobalLightBase {
    static constexpr std::size_t size = 0x4c0;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0xc]; // 0x14 
    std::uint8_t _[0xc]; // 0x20 
    std::uint8_t _[0xc]; // 0x2c 
    std::uint8_t _[0xc]; // 0x38 
    std::uint8_t _[0xc]; // 0x44 
    std::uint8_t _[0xc]; // 0x50 
    std::uint8_t _[0x4]; // 0x5c 
    std::uint8_t _[0x4]; // 0x60 
    std::uint8_t _[0x4]; // 0x64 
    std::uint8_t _[0x1]; // 0x68 
    std::uint8_t _[0x3]; // 0x69 
    std::uint8_t _[0x4]; // 0x6c 
    std::uint8_t _[0x4]; // 0x70 
    std::uint8_t _[0x4]; // 0x74 
    std::uint8_t _[0x4]; // 0x78 
    std::uint8_t _[0x4]; // 0x7c 
    std::uint8_t _[0x4]; // 0x80 
    std::uint8_t _[0x4]; // 0x84 
    std::uint8_t _[0x4]; // 0x88 
    std::uint8_t _[0x1]; // 0x8c 
    std::uint8_t _[0x1]; // 0x8d 
    std::uint8_t _[0x2]; // 0x8e 
    std::uint8_t _[0x4]; // 0x90 
    std::uint8_t _[0x4]; // 0x94 
    std::uint8_t _[0x4]; // 0x98 
    std::uint8_t _[0x4]; // 0x9c 
    std::uint8_t _[0x10]; // 0xa0 
    std::uint8_t _[0x4]; // 0xb0 
    std::uint8_t _[0x4]; // 0xb4 
    std::uint8_t _[0x4]; // 0xb8 
    std::uint8_t _[0x4]; // 0xbc 
    std::uint8_t _[0x4]; // 0xc0 
    std::uint8_t _[0x4]; // 0xc4 
    std::uint8_t _[0xc]; // 0xc8 
    std::uint8_t _[0xc]; // 0xd4 
    std::uint8_t _[0xc]; // 0xe0 
    std::uint8_t _[0x4]; // 0xec 
    std::uint8_t _[0x3b8]; // 0xf0 
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4bc 
};

struct IClientAlphaProperty {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct inv_image_light_sun_t {
    static constexpr std::size_t size = 0x1c;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0xc]; // 0xc 
    std::uint8_t _[0x4]; // 0x18 
};

struct CompositeMaterialMatchFilter_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
};

struct CompositeMaterial_t {
    static constexpr std::size_t size = 0xa0;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x10]; // 0x8 
    std::uint8_t _[0x40]; // 0x18 
    std::uint8_t _[0x28]; // 0x58 
    std::uint8_t _[0x20]; // 0x80 
};

} // namespace