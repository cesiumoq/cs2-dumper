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

namespace cs2::client {

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
    static constexpr std::size_t size = 0x1D18;
    std::uint8_t pad_0[0x1D18]; // 0x0
};

struct C_FireCrackerBlast {
    static constexpr std::size_t size = 0x86A0;
    std::uint8_t pad_0[0x86A0]; // 0x0
};

struct CCSGO_WingmanIntroCounterTerroristPosition {
    static constexpr std::size_t size = 0x1D18;
    std::uint8_t pad_0[0x1D18]; // 0x0
};

struct CPulseCell_WaitForCursorsWithTag {
    static constexpr std::size_t size = 0x130;
    std::uint8_t pad_0[0x128]; // 0x0
    std::uint8_t m_bTagSelfWhenComplete[0x4]; // 0x128 bool
    std::uint8_t m_nDesiredKillPriority[0x4]; // 0x12C PulseCursorCancelPriority_t
};

struct C_SceneEntity__QueuedEvents_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t starttime[0x18]; // 0x0 float32
};

struct CCSPlayer_PingServices {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_hPlayerPing[0x8]; // 0x48 CHandle<C_PlayerPing>
};

struct CEconItemAttribute {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_iAttributeDefinitionIndex[0x4]; // 0x30 uint16
    std::uint8_t m_flValue[0x4]; // 0x34 float32
    std::uint8_t m_flInitialValue[0x4]; // 0x38 float32
    std::uint8_t m_nRefundableCurrency[0x4]; // 0x3C int32
    std::uint8_t m_bSetBonus[0x8]; // 0x40 bool
};

struct CPulseCell_RaceCursors {
    static constexpr std::size_t size = 0x138;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_Outflows[0x18]; // 0xD8 CUtlVector<CPulse_OutflowConnection>
    std::uint8_t m_OnFinished[0x48]; // 0xF0 CPulse_ResumePoint
};

struct CFuncRetakeBarrier {
    static constexpr std::size_t size = 0x14D0;
    std::uint8_t pad_0[0x14D0]; // 0x0
};

struct C_EnvWindShared {
    static constexpr std::size_t size = 0xF8;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_flStartTime[0x4]; // 0x8 GameTime_t
    std::uint8_t m_iWindSeed[0x4]; // 0xC uint32
    std::uint8_t m_iMinWind[0x2]; // 0x10 uint16
    std::uint8_t m_iMaxWind[0x2]; // 0x12 uint16
    std::uint8_t m_windRadius[0x4]; // 0x14 int32
    std::uint8_t m_iMinGust[0x2]; // 0x18 uint16
    std::uint8_t m_iMaxGust[0x2]; // 0x1A uint16
    std::uint8_t m_flMinGustDelay[0x4]; // 0x1C float32
    std::uint8_t m_flMaxGustDelay[0x4]; // 0x20 float32
    std::uint8_t m_flGustDuration[0x4]; // 0x24 float32
    std::uint8_t m_iGustDirChange[0x2]; // 0x28 uint16
    std::uint8_t m_iInitialWindDir[0x2]; // 0x2A uint16
    std::uint8_t m_flInitialWindSpeed[0x4]; // 0x2C float32
    std::uint8_t m_location[0xC]; // 0x30 VectorWS
    std::uint8_t m_hEntOwner[0xBC]; // 0x3C CHandle<C_BaseEntity>
};

struct C_SkyCamera {
    static constexpr std::size_t size = 0x6A0;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_skyboxData[0x90]; // 0x600 sky3dparams_t
    std::uint8_t m_skyboxSlotToken[0x4]; // 0x690 CUtlStringToken
    std::uint8_t m_bUseAngles[0x4]; // 0x694 bool
    std::uint8_t m_pNext[0x8]; // 0x698 C_SkyCamera*
};

struct CPulseCell_Base {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_nEditorNodeID[0x40]; // 0x8 PulseDocNodeID_t
};

struct C_FuncRotating {
    static constexpr std::size_t size = 0x1098;
    std::uint8_t pad_0[0x1098]; // 0x0
};

struct C_SoundOpvarSetPointBase {
    static constexpr std::size_t size = 0x620;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_iszStackName[0x8]; // 0x600 CUtlSymbolLarge
    std::uint8_t m_iszOperatorName[0x8]; // 0x608 CUtlSymbolLarge
    std::uint8_t m_iszOpvarName[0x8]; // 0x610 CUtlSymbolLarge
    std::uint8_t m_iOpvarIndex[0x4]; // 0x618 int32
    std::uint8_t m_bUseAutoCompare[0x1]; // 0x61C bool
    std::uint8_t m_bFastRefresh[0x3]; // 0x61D bool
};

struct C_EnvCubemapFog {
    static constexpr std::size_t size = 0x700;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_flEndDistance[0x4]; // 0x600 float32
    std::uint8_t m_flStartDistance[0x4]; // 0x604 float32
    std::uint8_t m_flFogFalloffExponent[0x4]; // 0x608 float32
    std::uint8_t m_bHeightFogEnabled[0x4]; // 0x60C bool
    std::uint8_t m_flFogHeightWidth[0x4]; // 0x610 float32
    std::uint8_t m_flFogHeightEnd[0x4]; // 0x614 float32
    std::uint8_t m_flFogHeightStart[0x4]; // 0x618 float32
    std::uint8_t m_flFogHeightExponent[0x4]; // 0x61C float32
    std::uint8_t m_flLODBias[0x4]; // 0x620 float32
    std::uint8_t m_bActive[0x1]; // 0x624 bool
    std::uint8_t m_bStartDisabled[0x3]; // 0x625 bool
    std::uint8_t m_flFogMaxOpacity[0x4]; // 0x628 float32
    std::uint8_t m_nCubemapSourceType[0x4]; // 0x62C int32
    std::uint8_t m_hSkyMaterial[0x8]; // 0x630 CStrongHandle<InfoForResourceTypeIMaterial2>
    std::uint8_t m_iszSkyEntity[0x8]; // 0x638 CUtlSymbolLarge
    std::uint8_t m_nHeightFogType[0x4]; // 0x640 int32
    std::uint8_t m_nFogHeightBlendMode[0x4]; // 0x644 int32
    std::uint8_t m_nFogHeightCoordinateSpace[0x4]; // 0x648 int32
    std::uint8_t m_nDistanceFogType[0x4]; // 0x64C int32
    std::uint8_t m_DistanceFogCurveString[0x8]; // 0x650 CUtlSymbolLarge
    std::uint8_t m_HeightFogCurveString[0x98]; // 0x658 CUtlSymbolLarge
    std::uint8_t m_hFogCubemapTexture[0x8]; // 0x6F0 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_bHasHeightFogEnd[0x1]; // 0x6F8 bool
    std::uint8_t m_bFirstTime[0x7]; // 0x6F9 bool
};

struct C_CSGO_TeamSelectTerroristPosition {
    static constexpr std::size_t size = 0x1D18;
    std::uint8_t pad_0[0x1D18]; // 0x0
};

struct C_EnvParticleGlow {
    static constexpr std::size_t size = 0x1680;
    std::uint8_t pad_0[0x1668]; // 0x0
    std::uint8_t m_flAlphaScale[0x4]; // 0x1668 float32
    std::uint8_t m_flRadiusScale[0x4]; // 0x166C float32
    std::uint8_t m_flSelfIllumScale[0x4]; // 0x1670 float32
    std::uint8_t m_ColorTint[0x4]; // 0x1674 Color
    std::uint8_t m_hTextureOverride[0x8]; // 0x1678 CStrongHandle<InfoForResourceTypeCTextureBase>
};

struct CCS_PortraitWorldCallbackHandler {
    static constexpr std::size_t size = 0x608;
    std::uint8_t pad_0[0x608]; // 0x0
};

struct CCSPlayerController_InventoryServices {
    static constexpr std::size_t size = 0xF0;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t m_vecNetworkableLoadout[0x18]; // 0x40 CUtlVector<CCSPlayerController_InventoryServices::NetworkedLoadoutSlot_t>
    std::uint8_t m_unMusicID[0x4]; // 0x58 uint16
    std::uint8_t m_rank[0x18]; // 0x5C MedalRank_t[6]
    std::uint8_t m_nPersonaDataPublicLevel[0x4]; // 0x74 int32
    std::uint8_t m_nPersonaDataPublicCommendsLeader[0x4]; // 0x78 int32
    std::uint8_t m_nPersonaDataPublicCommendsTeacher[0x4]; // 0x7C int32
    std::uint8_t m_nPersonaDataPublicCommendsFriendly[0x4]; // 0x80 int32
    std::uint8_t m_nPersonaDataXpTrailLevel[0x4]; // 0x84 int32
    std::uint8_t m_vecServerAuthoritativeWeaponSlots[0x68]; // 0x88 C_UtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
};

struct CCSPlayerModernJump {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nLastActualJumpPressTick[0x4]; // 0x10 GameTick_t
    std::uint8_t m_flLastActualJumpPressFrac[0x4]; // 0x14 float32
    std::uint8_t m_nLastUsableJumpPressTick[0x4]; // 0x18 GameTick_t
    std::uint8_t m_flLastUsableJumpPressFrac[0x4]; // 0x1C float32
    std::uint8_t m_nLastLandedTick[0x4]; // 0x20 GameTick_t
    std::uint8_t m_flLastLandedFrac[0x4]; // 0x24 float32
    std::uint8_t m_flLastLandedVelocityX[0x4]; // 0x28 float32
    std::uint8_t m_flLastLandedVelocityY[0x4]; // 0x2C float32
    std::uint8_t m_flLastLandedVelocityZ[0x8]; // 0x30 float32
};

struct C_EconEntity__AttachedModelData_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_iModelDisplayFlags[0x4]; // 0x0 int32
};

struct CPulse_ResumePoint {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CTriggerFan {
    static constexpr std::size_t size = 0x11E0;
    std::uint8_t pad_0[0x1180]; // 0x0
    std::uint8_t m_vFanOriginOffset[0xC]; // 0x1180 Vector
    std::uint8_t m_vDirection[0xC]; // 0x118C Vector
    std::uint8_t m_bPushTowardsInfoTarget[0x1]; // 0x1198 bool
    std::uint8_t m_bPushAwayFromInfoTarget[0x7]; // 0x1199 bool
    std::uint8_t m_qNoiseDelta[0x10]; // 0x11A0 Quaternion
    std::uint8_t m_hInfoFan[0x4]; // 0x11B0 CHandle<CInfoFan>
    std::uint8_t m_flForce[0x4]; // 0x11B4 float32
    std::uint8_t m_bFalloff[0x8]; // 0x11B8 bool
    std::uint8_t m_RampTimer[0x20]; // 0x11C0 CountdownTimer
};

struct C_HostageCarriableProp {
    static constexpr std::size_t size = 0x1270;
    std::uint8_t pad_0[0x1270]; // 0x0
};

struct C_BulletHitModel {
    static constexpr std::size_t size = 0x12B8;
    std::uint8_t pad_0[0x1268]; // 0x0
    std::uint8_t m_matLocal[0x30]; // 0x1268 matrix3x4_t
    std::uint8_t m_iBoneIndex[0x4]; // 0x1298 int32
    std::uint8_t m_hPlayerParent[0x4]; // 0x129C CHandle<C_BaseEntity>
    std::uint8_t m_bIsHit[0x4]; // 0x12A0 bool
    std::uint8_t m_flTimeCreated[0x4]; // 0x12A4 float32
    std::uint8_t m_vecStartPos[0x10]; // 0x12A8 VectorWS
};

struct C_FuncElectrifiedVolume {
    static constexpr std::size_t size = 0x10B0;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t m_nAmbientEffect[0x8]; // 0x1098 ParticleIndex_t
    std::uint8_t m_EffectName[0x8]; // 0x10A0 CUtlSymbolLarge
    std::uint8_t m_bState[0x8]; // 0x10A8 bool
};

struct C_MapVetoPickController {
    static constexpr std::size_t size = 0xF48;
    std::uint8_t pad_0[0x610]; // 0x0
    std::uint8_t m_nDraftType[0x4]; // 0x610 int32
    std::uint8_t m_nTeamWinningCoinToss[0x4]; // 0x614 int32
    std::uint8_t m_nTeamWithFirstChoice[0x100]; // 0x618 int32[64]
    std::uint8_t m_nVoteMapIdsList[0x1C]; // 0x718 int32[7]
    std::uint8_t m_nAccountIDs[0x100]; // 0x734 int32[64]
    std::uint8_t m_nMapId0[0x100]; // 0x834 int32[64]
    std::uint8_t m_nMapId1[0x100]; // 0x934 int32[64]
    std::uint8_t m_nMapId2[0x100]; // 0xA34 int32[64]
    std::uint8_t m_nMapId3[0x100]; // 0xB34 int32[64]
    std::uint8_t m_nMapId4[0x100]; // 0xC34 int32[64]
    std::uint8_t m_nMapId5[0x100]; // 0xD34 int32[64]
    std::uint8_t m_nStartingSide0[0x100]; // 0xE34 int32[64]
    std::uint8_t m_nCurrentPhase[0x4]; // 0xF34 int32
    std::uint8_t m_nPhaseStartTick[0x4]; // 0xF38 int32
    std::uint8_t m_nPhaseDurationTicks[0x4]; // 0xF3C int32
    std::uint8_t m_nPostDataUpdateTick[0x4]; // 0xF40 int32
    std::uint8_t m_bDisabledHud[0x4]; // 0xF44 bool
};

struct C_EnvVolumetricFogVolume {
    static constexpr std::size_t size = 0x648;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_bActive[0x4]; // 0x600 bool
    std::uint8_t m_vBoxMins[0xC]; // 0x604 Vector
    std::uint8_t m_vBoxMaxs[0xC]; // 0x610 Vector
    std::uint8_t m_bStartDisabled[0x1]; // 0x61C bool
    std::uint8_t m_bIndirectUseLPVs[0x3]; // 0x61D bool
    std::uint8_t m_flStrength[0x4]; // 0x620 float32
    std::uint8_t m_nFalloffShape[0x4]; // 0x624 int32
    std::uint8_t m_flFalloffExponent[0x4]; // 0x628 float32
    std::uint8_t m_flHeightFogDepth[0x4]; // 0x62C float32
    std::uint8_t m_fHeightFogEdgeWidth[0x4]; // 0x630 float32
    std::uint8_t m_fIndirectLightStrength[0x4]; // 0x634 float32
    std::uint8_t m_fSunLightStrength[0x4]; // 0x638 float32
    std::uint8_t m_fNoiseStrength[0x4]; // 0x63C float32
    std::uint8_t m_TintColor[0x4]; // 0x640 Color
    std::uint8_t m_bOverrideTintColor[0x1]; // 0x644 bool
    std::uint8_t m_bOverrideIndirectLightStrength[0x1]; // 0x645 bool
    std::uint8_t m_bOverrideSunLightStrength[0x1]; // 0x646 bool
    std::uint8_t m_bOverrideNoiseStrength[0x1]; // 0x647 bool
};

struct C_CSGO_EndOfMatchCharacterPosition {
    static constexpr std::size_t size = 0x1D18;
    std::uint8_t pad_0[0x1D18]; // 0x0
};

struct CPulseCell_PlaySequence {
    static constexpr std::size_t size = 0x140;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_SequenceName[0x8]; // 0xD8 CUtlString
    std::uint8_t m_PulseAnimEvents[0x18]; // 0xE0 PulseNodeDynamicOutflows_t
    std::uint8_t m_OnFinished[0x48]; // 0xF8 CPulse_ResumePoint
};

struct C_BarnLight {
    static constexpr std::size_t size = 0x13A8;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t m_bEnabled[0x4]; // 0x1098 bool
    std::uint8_t m_nColorMode[0x4]; // 0x109C int32
    std::uint8_t m_Color[0x4]; // 0x10A0 Color
    std::uint8_t m_flColorTemperature[0x4]; // 0x10A4 float32
    std::uint8_t m_flBrightness[0x4]; // 0x10A8 float32
    std::uint8_t m_flBrightnessScale[0x4]; // 0x10AC float32
    std::uint8_t m_nDirectLight[0x4]; // 0x10B0 int32
    std::uint8_t m_nBakedShadowIndex[0x4]; // 0x10B4 int32
    std::uint8_t m_nLightPathUniqueId[0x4]; // 0x10B8 int32
    std::uint8_t m_nLightMapUniqueId[0x4]; // 0x10BC int32
    std::uint8_t m_nLuminaireShape[0x4]; // 0x10C0 int32
    std::uint8_t m_flLuminaireSize[0x4]; // 0x10C4 float32
    std::uint8_t m_flLuminaireAnisotropy[0x8]; // 0x10C8 float32
    std::uint8_t m_LightStyleString[0x8]; // 0x10D0 CUtlString
    std::uint8_t m_flLightStyleStartTime[0x8]; // 0x10D8 GameTime_t
    std::uint8_t m_QueuedLightStyleStrings[0x18]; // 0x10E0 C_NetworkUtlVectorBase<CUtlString>
    std::uint8_t m_LightStyleEvents[0x18]; // 0x10F8 C_NetworkUtlVectorBase<CUtlString>
    std::uint8_t m_LightStyleTargets[0x18]; // 0x1110 C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
    std::uint8_t m_StyleEvent[0x60]; // 0x1128 CEntityIOOutput[4]
    std::uint8_t m_hLightCookie[0x8]; // 0x1188 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_flShape[0x4]; // 0x1190 float32
    std::uint8_t m_flSoftX[0x4]; // 0x1194 float32
    std::uint8_t m_flSoftY[0x4]; // 0x1198 float32
    std::uint8_t m_flSkirt[0x4]; // 0x119C float32
    std::uint8_t m_flSkirtNear[0x4]; // 0x11A0 float32
    std::uint8_t m_vSizeParams[0xC]; // 0x11A4 Vector
    std::uint8_t m_flRange[0x4]; // 0x11B0 float32
    std::uint8_t m_vShear[0xC]; // 0x11B4 Vector
    std::uint8_t m_nBakeSpecularToCubemaps[0x4]; // 0x11C0 int32
    std::uint8_t m_vBakeSpecularToCubemapsSize[0xC]; // 0x11C4 Vector
    std::uint8_t m_flBakeSpecularToCubemapsScale[0x4]; // 0x11D0 float32
    std::uint8_t m_nCastShadows[0x4]; // 0x11D4 int32
    std::uint8_t m_nShadowMapSize[0x4]; // 0x11D8 int32
    std::uint8_t m_nShadowPriority[0x4]; // 0x11DC int32
    std::uint8_t m_bContactShadow[0x1]; // 0x11E0 bool
    std::uint8_t m_bForceShadowsEnabled[0x3]; // 0x11E1 bool
    std::uint8_t m_nBounceLight[0x4]; // 0x11E4 int32
    std::uint8_t m_flBounceScale[0x4]; // 0x11E8 float32
    std::uint8_t m_flMinRoughness[0x4]; // 0x11EC float32
    std::uint8_t m_vAlternateColor[0xC]; // 0x11F0 Vector
    std::uint8_t m_fAlternateColorBrightness[0x4]; // 0x11FC float32
    std::uint8_t m_nFog[0x4]; // 0x1200 int32
    std::uint8_t m_flFogStrength[0x4]; // 0x1204 float32
    std::uint8_t m_nFogShadows[0x4]; // 0x1208 int32
    std::uint8_t m_flFogScale[0x4]; // 0x120C float32
    std::uint8_t m_flFadeSizeStart[0x4]; // 0x1210 float32
    std::uint8_t m_flFadeSizeEnd[0x4]; // 0x1214 float32
    std::uint8_t m_flShadowFadeSizeStart[0x4]; // 0x1218 float32
    std::uint8_t m_flShadowFadeSizeEnd[0x4]; // 0x121C float32
    std::uint8_t m_bPrecomputedFieldsValid[0x4]; // 0x1220 bool
    std::uint8_t m_vPrecomputedBoundsMins[0xC]; // 0x1224 Vector
    std::uint8_t m_vPrecomputedBoundsMaxs[0xC]; // 0x1230 Vector
    std::uint8_t m_vPrecomputedOBBOrigin[0xC]; // 0x123C Vector
    std::uint8_t m_vPrecomputedOBBAngles[0xC]; // 0x1248 QAngle
    std::uint8_t m_vPrecomputedOBBExtent[0xC]; // 0x1254 Vector
    std::uint8_t m_nPrecomputedSubFrusta[0x4]; // 0x1260 int32
    std::uint8_t m_vPrecomputedOBBOrigin0[0xC]; // 0x1264 Vector
    std::uint8_t m_vPrecomputedOBBAngles0[0xC]; // 0x1270 QAngle
    std::uint8_t m_vPrecomputedOBBExtent0[0xC]; // 0x127C Vector
    std::uint8_t m_vPrecomputedOBBOrigin1[0xC]; // 0x1288 Vector
    std::uint8_t m_vPrecomputedOBBAngles1[0xC]; // 0x1294 QAngle
    std::uint8_t m_vPrecomputedOBBExtent1[0xC]; // 0x12A0 Vector
    std::uint8_t m_vPrecomputedOBBOrigin2[0xC]; // 0x12AC Vector
    std::uint8_t m_vPrecomputedOBBAngles2[0xC]; // 0x12B8 QAngle
    std::uint8_t m_vPrecomputedOBBExtent2[0xC]; // 0x12C4 Vector
    std::uint8_t m_vPrecomputedOBBOrigin3[0xC]; // 0x12D0 Vector
    std::uint8_t m_vPrecomputedOBBAngles3[0xC]; // 0x12DC QAngle
    std::uint8_t m_vPrecomputedOBBExtent3[0xC]; // 0x12E8 Vector
    std::uint8_t m_vPrecomputedOBBOrigin4[0xC]; // 0x12F4 Vector
    std::uint8_t m_vPrecomputedOBBAngles4[0xC]; // 0x1300 QAngle
    std::uint8_t m_vPrecomputedOBBExtent4[0xC]; // 0x130C Vector
    std::uint8_t m_vPrecomputedOBBOrigin5[0xC]; // 0x1318 Vector
    std::uint8_t m_vPrecomputedOBBAngles5[0xC]; // 0x1324 QAngle
    std::uint8_t m_vPrecomputedOBBExtent5[0x50]; // 0x1330 Vector
    std::uint8_t m_bInitialBoneSetup[0x8]; // 0x1380 bool
    std::uint8_t m_VisClusters[0x20]; // 0x1388 C_NetworkUtlVectorBase<uint16>
};

struct CPulseCell_LerpCameraSettings {
    static constexpr std::size_t size = 0x148;
    std::uint8_t pad_0[0x120]; // 0x0
    std::uint8_t m_flSeconds[0x4]; // 0x120 float32
    std::uint8_t m_Start[0x10]; // 0x124 PointCameraSettings_t
    std::uint8_t m_End[0x14]; // 0x134 PointCameraSettings_t
};

struct CPointOffScreenIndicatorUi {
    static constexpr std::size_t size = 0x1310;
    std::uint8_t pad_0[0x1300]; // 0x0
    std::uint8_t m_bBeenEnabled[0x1]; // 0x1300 bool
    std::uint8_t m_bHide[0x3]; // 0x1301 bool
    std::uint8_t m_flSeenTargetTime[0x4]; // 0x1304 float32
    std::uint8_t m_pTargetPanel[0x8]; // 0x1308 C_PointClientUIWorldPanel*
};

struct CCSObserver_UseServices {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct C_PostProcessingVolume {
    static constexpr std::size_t size = 0x11C0;
    std::uint8_t pad_0[0x1190]; // 0x0
    std::uint8_t m_hPostSettings[0x8]; // 0x1190 CStrongHandle<InfoForResourceTypeCPostProcessingResource>
    std::uint8_t m_flFadeDuration[0x4]; // 0x1198 float32
    std::uint8_t m_flMinLogExposure[0x4]; // 0x119C float32
    std::uint8_t m_flMaxLogExposure[0x4]; // 0x11A0 float32
    std::uint8_t m_flMinExposure[0x4]; // 0x11A4 float32
    std::uint8_t m_flMaxExposure[0x4]; // 0x11A8 float32
    std::uint8_t m_flExposureCompensation[0x4]; // 0x11AC float32
    std::uint8_t m_flExposureFadeSpeedUp[0x4]; // 0x11B0 float32
    std::uint8_t m_flExposureFadeSpeedDown[0x4]; // 0x11B4 float32
    std::uint8_t m_flTonemapEVSmoothingRange[0x4]; // 0x11B8 float32
    std::uint8_t m_bMaster[0x1]; // 0x11BC bool
    std::uint8_t m_bExposureControl[0x3]; // 0x11BD bool
};

struct CCSMinimapVolume {
    static constexpr std::size_t size = 0x11A8;
    std::uint8_t pad_0[0x1198]; // 0x0
    std::uint8_t m_strMinimapName[0x10]; // 0x1198 CUtlString
};

struct CCSPlayer_UseServices {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct C_BaseModelEntity__Emphasized_Phoneme {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_sClassName[0x18]; // 0x0 CUtlString
    std::uint8_t m_flAmount[0x4]; // 0x18 float32
    std::uint8_t m_bRequired[0x1]; // 0x1C bool
    std::uint8_t m_bBasechecked[0x1]; // 0x1D bool
    std::uint8_t m_bValid[0x2]; // 0x1E bool
};

struct C_CSGO_CounterTerroristWingmanIntroCamera {
    static constexpr std::size_t size = 0x690;
    std::uint8_t pad_0[0x690]; // 0x0
};

struct CPulseCell_PickBestOutflowSelector {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_nCheckType[0x8]; // 0x48 PulseBestOutflowRules_t
    std::uint8_t m_OutflowList[0x18]; // 0x50 PulseSelectorOutflowList_t
};

struct CInfoFan {
    static constexpr std::size_t size = 0x658;
    std::uint8_t pad_0[0x640]; // 0x0
    std::uint8_t m_fFanForceMaxRadius[0x4]; // 0x640 float32
    std::uint8_t m_fFanForceMinRadius[0x4]; // 0x644 float32
    std::uint8_t m_flCurveDistRange[0x8]; // 0x648 float32
    std::uint8_t m_FanForceCurveString[0x8]; // 0x650 CUtlSymbolLarge
};

struct C_VoteController {
    static constexpr std::size_t size = 0x638;
    std::uint8_t pad_0[0x610]; // 0x0
    std::uint8_t m_iActiveIssueIndex[0x4]; // 0x610 int32
    std::uint8_t m_iOnlyTeamToVote[0x4]; // 0x614 int32
    std::uint8_t m_nVoteOptionCount[0x14]; // 0x618 int32[5]
    std::uint8_t m_nPotentialVotes[0x4]; // 0x62C int32
    std::uint8_t m_bVotesDirty[0x1]; // 0x630 bool
    std::uint8_t m_bTypeDirty[0x1]; // 0x631 bool
    std::uint8_t m_bIsYesNoVote[0x6]; // 0x632 bool
};

struct C_C4 {
    static constexpr std::size_t size = 0x1F60;
    std::uint8_t pad_0[0x1F20]; // 0x0
    std::uint8_t m_activeLightParticleIndex[0x4]; // 0x1F20 ParticleIndex_t
    std::uint8_t m_eActiveLightEffect[0x4]; // 0x1F24 C4LightEffect_t
    std::uint8_t m_bStartedArming[0x4]; // 0x1F28 bool
    std::uint8_t m_fArmedTime[0x4]; // 0x1F2C GameTime_t
    std::uint8_t m_bBombPlacedAnimation[0x1]; // 0x1F30 bool
    std::uint8_t m_bIsPlantingViaUse[0x7]; // 0x1F31 bool
    std::uint8_t m_entitySpottedState[0x18]; // 0x1F38 EntitySpottedState_t
    std::uint8_t m_nSpotRules[0x4]; // 0x1F50 int32
    std::uint8_t m_bPlayedArmingBeeps[0x7]; // 0x1F54 bool[7]
    std::uint8_t m_bBombPlanted[0x5]; // 0x1F5B bool
};

struct C_CSPlayerPawnBase {
    static constexpr std::size_t size = 0x1568;
    std::uint8_t pad_0[0x14D8]; // 0x0
    std::uint8_t m_pPingServices[0x8]; // 0x14D8 CCSPlayer_PingServices*
    std::uint8_t m_previousPlayerState[0x4]; // 0x14E0 CSPlayerState
    std::uint8_t m_iPlayerState[0x4]; // 0x14E4 CSPlayerState
    std::uint8_t m_bHasMovedSinceSpawn[0x4]; // 0x14E8 bool
    std::uint8_t m_flLastSpawnTimeIndex[0x4]; // 0x14EC GameTime_t
    std::uint8_t m_iProgressBarDuration[0x4]; // 0x14F0 int32
    std::uint8_t m_flProgressBarStartTime[0x4]; // 0x14F4 float32
    std::uint8_t m_flClientDeathTime[0x4]; // 0x14F8 GameTime_t
    std::uint8_t m_flFlashBangTime[0x4]; // 0x14FC float32
    std::uint8_t m_flFlashScreenshotAlpha[0x4]; // 0x1500 float32
    std::uint8_t m_flFlashOverlayAlpha[0x4]; // 0x1504 float32
    std::uint8_t m_bFlashBuildUp[0x1]; // 0x1508 bool
    std::uint8_t m_bFlashDspHasBeenCleared[0x1]; // 0x1509 bool
    std::uint8_t m_bFlashScreenshotHasBeenGrabbed[0x2]; // 0x150A bool
    std::uint8_t m_flFlashMaxAlpha[0x4]; // 0x150C float32
    std::uint8_t m_flFlashDuration[0x4]; // 0x1510 float32
    std::uint8_t m_flClientHealthFadeChangeTimestamp[0x4]; // 0x1514 GameTime_t
    std::uint8_t m_nClientHealthFadeParityValue[0x4]; // 0x1518 int32
    std::uint8_t m_fNextThinkPushAway[0x8]; // 0x151C float32
    std::uint8_t m_flCurrentMusicStartTime[0x4]; // 0x1524 float32
    std::uint8_t m_flMusicRoundStartTime[0x4]; // 0x1528 float32
    std::uint8_t m_bDeferStartMusicOnWarmup[0x4]; // 0x152C bool
    std::uint8_t m_flLastSmokeOverlayAlpha[0x4]; // 0x1530 float32
    std::uint8_t m_flLastSmokeAge[0x4]; // 0x1534 float32
    std::uint8_t m_vLastSmokeOverlayColor[0x28]; // 0x1538 Vector
    std::uint8_t m_hOriginalController[0x8]; // 0x1560 CHandle<CCSPlayerController>
};

struct C_BreakableProp {
    static constexpr std::size_t size = 0x13E0;
    std::uint8_t pad_0[0x12A0]; // 0x0
    std::uint8_t m_CPropDataComponent[0x40]; // 0x12A0 CPropDataComponent
    std::uint8_t m_OnStartDeath[0x18]; // 0x12E0 CEntityIOOutput
    std::uint8_t m_OnBreak[0x18]; // 0x12F8 CEntityIOOutput
    std::uint8_t m_OnHealthChanged[0x20]; // 0x1310 CEntityOutputTemplate<float32>
    std::uint8_t m_OnTakeDamage[0x18]; // 0x1330 CEntityIOOutput
    std::uint8_t m_impactEnergyScale[0x4]; // 0x1348 float32
    std::uint8_t m_iMinHealthDmg[0x4]; // 0x134C int32
    std::uint8_t m_flPressureDelay[0x4]; // 0x1350 float32
    std::uint8_t m_flDefBurstScale[0x4]; // 0x1354 float32
    std::uint8_t m_vDefBurstOffset[0xC]; // 0x1358 Vector
    std::uint8_t m_hBreaker[0x4]; // 0x1364 CHandle<C_BaseEntity>
    std::uint8_t m_PerformanceMode[0x4]; // 0x1368 PerformanceMode_t
    std::uint8_t m_flPreventDamageBeforeTime[0x4]; // 0x136C GameTime_t
    std::uint8_t m_BreakableContentsType[0x8]; // 0x1370 BreakableContentsType_t
    std::uint8_t m_strBreakableContentsPropGroupOverride[0x8]; // 0x1378 CUtlString
    std::uint8_t m_strBreakableContentsParticleOverride[0x8]; // 0x1380 CUtlString
    std::uint8_t m_bHasBreakPiecesOrCommands[0x4]; // 0x1388 bool
    std::uint8_t m_explodeDamage[0x4]; // 0x138C float32
    std::uint8_t m_explodeRadius[0x8]; // 0x1390 float32
    std::uint8_t m_sExplosionType[0x8]; // 0x1398 CGlobalSymbol
    std::uint8_t m_explosionDelay[0x8]; // 0x13A0 float32
    std::uint8_t m_explosionBuildupSound[0x8]; // 0x13A8 CUtlSymbolLarge
    std::uint8_t m_explosionCustomEffect[0x8]; // 0x13B0 CUtlSymbolLarge
    std::uint8_t m_explosionCustomSound[0x8]; // 0x13B8 CUtlSymbolLarge
    std::uint8_t m_explosionModifier[0x8]; // 0x13C0 CUtlSymbolLarge
    std::uint8_t m_hPhysicsAttacker[0x4]; // 0x13C8 CHandle<C_BasePlayerPawn>
    std::uint8_t m_flLastPhysicsInfluenceTime[0x4]; // 0x13CC GameTime_t
    std::uint8_t m_flDefaultFadeScale[0x4]; // 0x13D0 float32
    std::uint8_t m_hLastAttacker[0xC]; // 0x13D4 CHandle<C_BaseEntity>
};

struct CCSGO_WingmanIntroTerroristPosition {
    static constexpr std::size_t size = 0x1D18;
    std::uint8_t pad_0[0x1D18]; // 0x0
};

struct C_RetakeGameRules {
    static constexpr std::size_t size = 0x158;
    std::uint8_t pad_0[0x138]; // 0x0
    std::uint8_t m_nMatchSeed[0x4]; // 0x138 int32
    std::uint8_t m_bBlockersPresent[0x1]; // 0x13C bool
    std::uint8_t m_bRoundInProgress[0x3]; // 0x13D bool
    std::uint8_t m_iFirstSecondHalfRound[0x4]; // 0x140 int32
    std::uint8_t m_iBombSite[0x4]; // 0x144 int32
    std::uint8_t m_hBombPlanter[0x10]; // 0x148 CHandle<C_CSPlayerPawn>
};

struct C_SoundOpvarSetDomeEntity {
    static constexpr std::size_t size = 0x620;
    std::uint8_t pad_0[0x620]; // 0x0
};

struct CPrecipitationVData {
    static constexpr std::size_t size = 0x2F0;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_szParticlePrecipitationEffect[0xE0]; // 0x28 CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    std::uint8_t m_szParticlePrecipitationPuddleEffect[0xE0]; // 0x108 CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    std::uint8_t m_szParticlePrecipitationPostEffect[0xE0]; // 0x1E8 CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    std::uint8_t m_flInnerDistance[0x4]; // 0x2C8 float32
    std::uint8_t m_nAttachType[0x4]; // 0x2CC ParticleAttachment_t
    std::uint8_t m_bBatchSameVolumeType[0x4]; // 0x2D0 bool
    std::uint8_t m_nRTEnvCP[0x4]; // 0x2D4 int32
    std::uint8_t m_nRTEnvCPComponent[0x8]; // 0x2D8 int32
    std::uint8_t m_szModifier[0x8]; // 0x2E0 CUtlString
    std::uint8_t m_nUseSnapshotFromSurfaceGraph[0x4]; // 0x2E8 int32
    std::uint8_t m_snapshotFilter[0x4]; // 0x2EC PrecipitationFilter_t
};

struct CPulseCell_WaitForObservable {
    static constexpr std::size_t size = 0x1B0;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_Condition[0x90]; // 0xD8 CPulseObservableExpression<bool>
    std::uint8_t m_OnTrue[0x48]; // 0x168 CPulse_ResumePoint
};

struct C_SoundAreaEntitySphere {
    static constexpr std::size_t size = 0x630;
    std::uint8_t pad_0[0x628]; // 0x0
    std::uint8_t m_flRadius[0x8]; // 0x628 float32
};

struct CPulseCell_Step_EntFire {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Input[0x8]; // 0x48 CUtlString
};

struct C_WeaponAWP {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F50]; // 0x0
};

struct C_BaseButton {
    static constexpr std::size_t size = 0x10A8;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t m_glowEntity[0x4]; // 0x1098 CHandle<C_BaseModelEntity>
    std::uint8_t m_usable[0x4]; // 0x109C bool
    std::uint8_t m_szDisplayText[0x8]; // 0x10A0 CUtlSymbolLarge
};

struct CCSObserver_ObserverServices {
    static constexpr std::size_t size = 0x100;
    std::uint8_t pad_0[0x70]; // 0x0
    std::uint8_t m_obsInterpState[0x90]; // 0x70 ObserverInterpState_t
};

struct CHitboxComponent {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x14]; // 0x0
    std::uint8_t m_flBoundsExpandRadius[0x4]; // 0x14 float32
};

struct C_SoundEventBoxHelper {
    static constexpr std::size_t size = 0x618;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_vMins[0xC]; // 0x600 Vector
    std::uint8_t m_vMaxs[0xC]; // 0x60C Vector
};

struct C_SoundEventBoxEntity {
    static constexpr std::size_t size = 0x6D8;
    std::uint8_t pad_0[0x6C0]; // 0x0
    std::uint8_t m_vecBoxHelpersNetworked[0x18]; // 0x6C0 C_NetworkUtlVectorBase<SoundeventBoxHelperNetworked_t>
};

struct ServerAuthoritativeWeaponSlot_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t unClass[0x2]; // 0x30 uint16
    std::uint8_t unSlot[0x2]; // 0x32 uint16
    std::uint8_t unItemDefIdx[0x4]; // 0x34 uint16
};

struct C_CSMinimapBoundary {
    static constexpr std::size_t size = 0x600;
    std::uint8_t pad_0[0x600]; // 0x0
};

struct CPathQueryComponent {
    static constexpr std::size_t size = 0xA0;
    std::uint8_t pad_0[0xA0]; // 0x0
};

struct C_Precipitation {
    static constexpr std::size_t size = 0x11C0;
    std::uint8_t pad_0[0x1180]; // 0x0
    std::uint8_t m_flDensity[0x10]; // 0x1180 float32
    std::uint8_t m_flParticleInnerDist[0x8]; // 0x1190 float32
    std::uint8_t m_pParticleDef[0x14]; // 0x1198 char*
    std::uint8_t m_tParticlePrecipTraceTimer[0x8]; // 0x11AC TimedEvent[1]
    std::uint8_t m_bActiveParticlePrecipEmitter[0x1]; // 0x11B4 bool[1]
    std::uint8_t m_bParticlePrecipInitialized[0x1]; // 0x11B5 bool
    std::uint8_t m_bHasSimulatedSinceLastSceneObjectUpdate[0x2]; // 0x11B6 bool
    std::uint8_t m_nAvailableSheetSequencesMaxIndex[0x8]; // 0x11B8 int32
};

struct CLogicRelay {
    static constexpr std::size_t size = 0x638;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_OnSpawn[0x18]; // 0x600 CEntityIOOutput
    std::uint8_t m_OnTrigger[0x18]; // 0x618 CEntityIOOutput
    std::uint8_t m_bDisabled[0x1]; // 0x630 bool
    std::uint8_t m_bWaitForRefire[0x1]; // 0x631 bool
    std::uint8_t m_bTriggerOnce[0x1]; // 0x632 bool
    std::uint8_t m_bFastRetrigger[0x1]; // 0x633 bool
    std::uint8_t m_bPassthoughCaller[0x4]; // 0x634 bool
};

struct SequenceHistory_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_hSequence[0x4]; // 0x0 HSequence
    std::uint8_t m_flSeqStartTime[0x4]; // 0x4 GameTime_t
    std::uint8_t m_flSeqFixedCycle[0x4]; // 0x8 float32
    std::uint8_t m_nSeqLoopMode[0x4]; // 0xC AnimLoopMode_t
    std::uint8_t m_flPlaybackRate[0x4]; // 0x10 float32
    std::uint8_t m_flCyclesPerSecond[0x4]; // 0x14 float32
};

struct CPlayer_ItemServices {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulse_OutflowConnection {
    static constexpr std::size_t size = 0x48;
    std::uint8_t m_SourceOutflowName[0x10]; // 0x0 PulseSymbol_t
    std::uint8_t m_nDestChunk[0x4]; // 0x10 PulseRuntimeChunkIndex_t
    std::uint8_t m_nInstruction[0x4]; // 0x14 int32
    std::uint8_t m_OutflowRegisterMap[0x30]; // 0x18 PulseRegisterMap_t
};

struct C_WeaponUMP45 {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F50]; // 0x0
};

struct C_WeaponG3SG1 {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F50]; // 0x0
};

struct C_SpotlightEnd {
    static constexpr std::size_t size = 0x10A8;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t m_flLightScale[0x4]; // 0x1098 float32
    std::uint8_t m_Radius[0xC]; // 0x109C float32
};

struct C_Fish {
    static constexpr std::size_t size = 0x1358;
    std::uint8_t pad_0[0x1268]; // 0x0
    std::uint8_t m_pos[0xC]; // 0x1268 VectorWS
    std::uint8_t m_vel[0xC]; // 0x1274 Vector
    std::uint8_t m_angles[0xC]; // 0x1280 QAngle
    std::uint8_t m_localLifeState[0x4]; // 0x128C int32
    std::uint8_t m_deathDepth[0x4]; // 0x1290 float32
    std::uint8_t m_deathAngle[0x4]; // 0x1294 float32
    std::uint8_t m_buoyancy[0x8]; // 0x1298 float32
    std::uint8_t m_wiggleTimer[0x18]; // 0x12A0 CountdownTimer
    std::uint8_t m_wigglePhase[0x4]; // 0x12B8 float32
    std::uint8_t m_wiggleRate[0x4]; // 0x12BC float32
    std::uint8_t m_actualPos[0xC]; // 0x12C0 VectorWS
    std::uint8_t m_actualAngles[0xC]; // 0x12CC QAngle
    std::uint8_t m_poolOrigin[0xC]; // 0x12D8 VectorWS
    std::uint8_t m_waterLevel[0x4]; // 0x12E4 float32
    std::uint8_t m_gotUpdate[0x4]; // 0x12E8 bool
    std::uint8_t m_x[0x4]; // 0x12EC float32
    std::uint8_t m_y[0x4]; // 0x12F0 float32
    std::uint8_t m_z[0x4]; // 0x12F4 float32
    std::uint8_t m_angle[0x4]; // 0x12F8 float32
    std::uint8_t m_errorHistory[0x50]; // 0x12FC float32[20]
    std::uint8_t m_errorHistoryIndex[0x4]; // 0x134C int32
    std::uint8_t m_errorHistoryCount[0x4]; // 0x1350 int32
    std::uint8_t m_averageError[0x4]; // 0x1354 float32
};

struct C_WeaponFamas {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F50]; // 0x0
};

struct C_EnvVolumetricFogController {
    static constexpr std::size_t size = 0x6B0;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_flScattering[0x4]; // 0x600 float32
    std::uint8_t m_TintColor[0x4]; // 0x604 Color
    std::uint8_t m_flAnisotropy[0x4]; // 0x608 float32
    std::uint8_t m_flFadeSpeed[0x4]; // 0x60C float32
    std::uint8_t m_flDrawDistance[0x4]; // 0x610 float32
    std::uint8_t m_flFadeInStart[0x4]; // 0x614 float32
    std::uint8_t m_flFadeInEnd[0x4]; // 0x618 float32
    std::uint8_t m_flIndirectStrength[0x4]; // 0x61C float32
    std::uint8_t m_nVolumeDepth[0x4]; // 0x620 int32
    std::uint8_t m_fFirstVolumeSliceThickness[0x4]; // 0x624 float32
    std::uint8_t m_nIndirectTextureDimX[0x4]; // 0x628 int32
    std::uint8_t m_nIndirectTextureDimY[0x4]; // 0x62C int32
    std::uint8_t m_nIndirectTextureDimZ[0x4]; // 0x630 int32
    std::uint8_t m_vBoxMins[0xC]; // 0x634 Vector
    std::uint8_t m_vBoxMaxs[0xC]; // 0x640 Vector
    std::uint8_t m_bActive[0x4]; // 0x64C bool
    std::uint8_t m_flStartAnisoTime[0x4]; // 0x650 GameTime_t
    std::uint8_t m_flStartScatterTime[0x4]; // 0x654 GameTime_t
    std::uint8_t m_flStartDrawDistanceTime[0x4]; // 0x658 GameTime_t
    std::uint8_t m_flStartAnisotropy[0x4]; // 0x65C float32
    std::uint8_t m_flStartScattering[0x4]; // 0x660 float32
    std::uint8_t m_flStartDrawDistance[0x4]; // 0x664 float32
    std::uint8_t m_flDefaultAnisotropy[0x4]; // 0x668 float32
    std::uint8_t m_flDefaultScattering[0x4]; // 0x66C float32
    std::uint8_t m_flDefaultDrawDistance[0x4]; // 0x670 float32
    std::uint8_t m_bStartDisabled[0x1]; // 0x674 bool
    std::uint8_t m_bEnableIndirect[0x1]; // 0x675 bool
    std::uint8_t m_bIsMaster[0x2]; // 0x676 bool
    std::uint8_t m_hFogIndirectTexture[0x8]; // 0x678 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_nForceRefreshCount[0x4]; // 0x680 int32
    std::uint8_t m_fNoiseSpeed[0x4]; // 0x684 float32
    std::uint8_t m_fNoiseStrength[0x4]; // 0x688 float32
    std::uint8_t m_vNoiseScale[0xC]; // 0x68C Vector
    std::uint8_t m_fWindSpeed[0x4]; // 0x698 float32
    std::uint8_t m_vWindDirection[0xC]; // 0x69C Vector
    std::uint8_t m_bFirstTime[0x8]; // 0x6A8 bool
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

struct C_EnvDetailController {
    static constexpr std::size_t size = 0x608;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_flFadeStartDist[0x4]; // 0x600 float32
    std::uint8_t m_flFadeEndDist[0x4]; // 0x604 float32
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
    std::uint8_t m_hCarriedHostage[0x4]; // 0x48 CHandle<C_BaseEntity>
    std::uint8_t m_hCarriedHostageProp[0x4]; // 0x4C CHandle<C_BaseEntity>
};

struct C_GameRulesProxy {
    static constexpr std::size_t size = 0x600;
    std::uint8_t pad_0[0x600]; // 0x0
};

struct CRenderComponent {
    static constexpr std::size_t size = 0xD0;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t __m_pChainEntity[0x40]; // 0x10 CNetworkVarChainer
    std::uint8_t m_bIsRenderingWithViewModels[0x4]; // 0x50 bool
    std::uint8_t m_nSplitscreenFlags[0x4]; // 0x54 uint32
    std::uint8_t m_bEnableRendering[0x50]; // 0x58 bool
    std::uint8_t m_bInterpolationReadyToDraw[0x28]; // 0xA8 bool
};

struct C_Team {
    static constexpr std::size_t size = 0x6B8;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_aPlayerControllers[0x18]; // 0x600 C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
    std::uint8_t m_aPlayers[0x18]; // 0x618 C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
    std::uint8_t m_iScore[0x4]; // 0x630 int32
    std::uint8_t m_szTeamname[0x84]; // 0x634 char[129]
};

struct C_PathParticleRopeAlias_path_particle_rope_clientside {
    static constexpr std::size_t size = 0x710;
    std::uint8_t pad_0[0x710]; // 0x0
};

struct CPointChildModifier {
    static constexpr std::size_t size = 0x608;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_bOrphanInsteadOfDeletingChildrenOnRemove[0x8]; // 0x600 bool
};

struct CCSPlayerLegacyJump {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_bOldJumpPressed[0x4]; // 0x10 bool
    std::uint8_t m_flJumpPressedTime[0x4]; // 0x14 float32
};

struct C_WeaponNOVA {
    static constexpr std::size_t size = 0x1F20;
    std::uint8_t pad_0[0x1F20]; // 0x0
};

struct C_CS2HudModelAddon {
    static constexpr std::size_t size = 0x1330;
    std::uint8_t pad_0[0x1330]; // 0x0
};

struct C_DEagle {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F50]; // 0x0
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
    std::uint8_t m_nVariant[0x8]; // 0x688 int32
};

struct C_ColorCorrectionVolume {
    static constexpr std::size_t size = 0x13A8;
    std::uint8_t pad_0[0x1180]; // 0x0
    std::uint8_t m_LastEnterWeight[0x4]; // 0x1180 float32
    std::uint8_t m_LastEnterTime[0x4]; // 0x1184 GameTime_t
    std::uint8_t m_LastExitWeight[0x4]; // 0x1188 float32
    std::uint8_t m_LastExitTime[0x4]; // 0x118C GameTime_t
    std::uint8_t m_bEnabled[0x4]; // 0x1190 bool
    std::uint8_t m_MaxWeight[0x4]; // 0x1194 float32
    std::uint8_t m_FadeDuration[0x4]; // 0x1198 float32
    std::uint8_t m_Weight[0x4]; // 0x119C float32
    std::uint8_t m_lookupFilename[0x208]; // 0x11A0 char[512]
};

struct CPlayer_MovementServices {
    static constexpr std::size_t size = 0x258;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_nImpulse[0x8]; // 0x48 int32
    std::uint8_t m_nButtons[0x20]; // 0x50 CInButtonState
    std::uint8_t m_nQueuedButtonDownMask[0x8]; // 0x70 uint64
    std::uint8_t m_nQueuedButtonChangeMask[0x8]; // 0x78 uint64
    std::uint8_t m_nButtonDoublePressed[0x8]; // 0x80 uint64
    std::uint8_t m_pButtonPressedCmdNumber[0x100]; // 0x88 uint32[64]
    std::uint8_t m_nLastCommandNumberProcessed[0x8]; // 0x188 uint32
    std::uint8_t m_nToggleButtonDownMask[0x10]; // 0x190 uint64
    std::uint8_t m_flCmdForwardMove[0x4]; // 0x1A0 float32
    std::uint8_t m_flCmdLeftMove[0x4]; // 0x1A4 float32
    std::uint8_t m_flCmdUpMove[0x4]; // 0x1A8 float32
    std::uint8_t m_flMaxspeed[0x4]; // 0x1AC float32
    std::uint8_t m_arrForceSubtickMoveWhen[0x10]; // 0x1B0 float32[4]
    std::uint8_t m_flForwardMove[0x4]; // 0x1C0 float32
    std::uint8_t m_flLeftMove[0x4]; // 0x1C4 float32
    std::uint8_t m_flUpMove[0x4]; // 0x1C8 float32
    std::uint8_t m_vecLastMovementImpulses[0x74]; // 0x1CC Vector
    std::uint8_t m_vecOldViewAngles[0x18]; // 0x240 QAngle
};

struct CInfoDynamicShadowHintBox {
    static constexpr std::size_t size = 0x630;
    std::uint8_t pad_0[0x618]; // 0x0
    std::uint8_t m_vBoxMins[0xC]; // 0x618 Vector
    std::uint8_t m_vBoxMaxs[0xC]; // 0x624 Vector
};

struct CBaseAnimGraphController {
    static constexpr std::size_t size = 0x6A0;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_nAnimationAlgorithm[0x4]; // 0x18 AnimationAlgorithm_t
    std::uint8_t m_nNextExternalGraphHandle[0x4]; // 0x1C ExternalAnimGraphHandle_t
    std::uint8_t m_vecSecondarySkeletonSlotIDs[0x18]; // 0x20 C_NetworkUtlVectorBase<CGlobalSymbol>
    std::uint8_t m_vecSecondarySkeletons[0x18]; // 0x38 C_NetworkUtlVectorBase<CHandle<CBaseAnimGraph>>
    std::uint8_t m_nSecondarySkeletonMasterCount[0x8]; // 0x50 int32
    std::uint8_t m_flSoundSyncTime[0x4]; // 0x58 float32
    std::uint8_t m_nActiveIKChainMask[0x54]; // 0x5C uint32
    std::uint8_t m_hSequence[0x4]; // 0xB0 HSequence
    std::uint8_t m_flSeqStartTime[0x4]; // 0xB4 GameTime_t
    std::uint8_t m_flSeqFixedCycle[0x4]; // 0xB8 float32
    std::uint8_t m_nAnimLoopMode[0x4]; // 0xBC AnimLoopMode_t
    std::uint8_t m_flPlaybackRate[0xC]; // 0xC0 CNetworkedQuantizedFloat
    std::uint8_t m_nNotifyState[0x1]; // 0xCC SequenceFinishNotifyState_t
    std::uint8_t m_bNetworkedAnimationInputsChanged[0x1]; // 0xCD bool
    std::uint8_t m_bNetworkedSequenceChanged[0x1]; // 0xCE bool
    std::uint8_t m_bLastUpdateSkipped[0x1]; // 0xCF bool
    std::uint8_t m_bSequenceFinished[0x4]; // 0xD0 bool
    std::uint8_t m_nPrevAnimUpdateTick[0x29C]; // 0xD4 GameTick_t
    std::uint8_t m_hGraphDefinitionAG2[0x8]; // 0x370 CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
    std::uint8_t m_SerializePoseRecipeAG2Slots[0x68]; // 0x378 C_UtlVectorEmbeddedNetworkVar<AnimGraph2SerializedPoseRecipeSlot_t>
    std::uint8_t m_SerializePoseRecipeAG2Dynamic[0x18]; // 0x3E0 C_NetworkUtlVectorBase<uint8>
    std::uint8_t m_nSerializePoseRecipeAG2ActiveSlot[0x4]; // 0x3F8 uint32
    std::uint8_t m_nSerializePoseRecipeVersionAG2[0x4]; // 0x3FC int32
    std::uint8_t m_nServerGraphInstanceIteration[0x4]; // 0x400 int32
    std::uint8_t m_nServerSerializationContextIteration[0x4]; // 0x404 int32
    std::uint8_t m_primaryGraphId[0x8]; // 0x408 ResourceId_t
    std::uint8_t m_vecExternalGraphIds[0x18]; // 0x410 C_NetworkUtlVectorBase<ResourceId_t>
    std::uint8_t m_vecExternalClipIds[0x18]; // 0x428 C_NetworkUtlVectorBase<ResourceId_t>
    std::uint8_t m_sAnimGraph2Identifier[0x8]; // 0x440 CGlobalSymbol
    std::uint8_t m_pGraphInstanceAG2[0x220]; // 0x448 CAnimGraph2InstancePtr
    std::uint8_t m_vecExternalGraphs[0x31]; // 0x668 CExternalAnimGraphList
    std::uint8_t m_nPrevAnimationAlgorithm[0x7]; // 0x699 AnimationAlgorithm_t
};

struct C_ColorCorrection {
    static constexpr std::size_t size = 0x848;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_vecOrigin[0xC]; // 0x600 VectorWS
    std::uint8_t m_MinFalloff[0x4]; // 0x60C float32
    std::uint8_t m_MaxFalloff[0x4]; // 0x610 float32
    std::uint8_t m_flFadeInDuration[0x4]; // 0x614 float32
    std::uint8_t m_flFadeOutDuration[0x4]; // 0x618 float32
    std::uint8_t m_flMaxWeight[0x4]; // 0x61C float32
    std::uint8_t m_flCurWeight[0x4]; // 0x620 float32
    std::uint8_t m_netlookupFilename[0x200]; // 0x624 char[512]
    std::uint8_t m_bEnabled[0x1]; // 0x824 bool
    std::uint8_t m_bMaster[0x1]; // 0x825 bool
    std::uint8_t m_bClientSide[0x1]; // 0x826 bool
    std::uint8_t m_bExclusive[0x1]; // 0x827 bool
    std::uint8_t m_bEnabledOnClient[0x4]; // 0x828 bool[1]
    std::uint8_t m_flCurWeightOnClient[0x4]; // 0x82C float32[1]
    std::uint8_t m_bFadingIn[0x4]; // 0x830 bool[1]
    std::uint8_t m_flFadeStartWeight[0x4]; // 0x834 float32[1]
    std::uint8_t m_flFadeStartTime[0x4]; // 0x838 float32[1]
    std::uint8_t m_flFadeDuration[0xC]; // 0x83C float32[1]
};

struct AnimGraph2SerializedPoseRecipeSlot_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_topology[0x10]; // 0x30 CUtlBinaryBlock
};

struct CBuoyancyHelper {
    static constexpr std::size_t size = 0x118;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_pController[0x10]; // 0x8 IPhysicsMotionController*
    std::uint8_t m_nFluidType[0x4]; // 0x18 CUtlStringToken
    std::uint8_t m_flFluidDensity[0x4]; // 0x1C float32
    std::uint8_t m_flNeutrallyBuoyantGravity[0x4]; // 0x20 float32
    std::uint8_t m_flNeutrallyBuoyantLinearDamping[0x4]; // 0x24 float32
    std::uint8_t m_flNeutrallyBuoyantAngularDamping[0x4]; // 0x28 float32
    std::uint8_t m_bNeutrallyBuoyant[0x4]; // 0x2C bool
    std::uint8_t m_vecFractionOfWheelSubmergedForWheelFriction[0x18]; // 0x30 CUtlVector<float32>
    std::uint8_t m_vecWheelFrictionScales[0x18]; // 0x48 CUtlVector<float32>
    std::uint8_t m_vecFractionOfWheelSubmergedForWheelDrag[0x18]; // 0x60 CUtlVector<float32>
    std::uint8_t m_vecWheelDrag[0xA0]; // 0x78 CUtlVector<float32>
};

struct C_PhysBox {
    static constexpr std::size_t size = 0x1098;
    std::uint8_t pad_0[0x1098]; // 0x0
};

struct CCSPlayer_CameraServices {
    static constexpr std::size_t size = 0x350;
    std::uint8_t pad_0[0x2B0]; // 0x0
    std::uint8_t m_flDeathCamTilt[0x4]; // 0x2B0 float32
    std::uint8_t m_hDeathCamBounds[0x4]; // 0x2B4 CHandle<C_PointDeathcamBounds>
    std::uint8_t m_bDeathCamBoundsSearched[0x8]; // 0x2B8 bool
    std::uint8_t m_vClientScopeInaccuracy[0x90]; // 0x2C0 Vector
};

struct CFilterMultiple {
    static constexpr std::size_t size = 0x6B8;
    std::uint8_t pad_0[0x638]; // 0x0
    std::uint8_t m_nFilterType[0x8]; // 0x638 filter_t
    std::uint8_t m_iFilterName[0x50]; // 0x640 CUtlSymbolLarge[10]
    std::uint8_t m_hFilter[0x28]; // 0x690 CHandle<C_BaseEntity>[10]
};

struct CPulseCell_FireCursors {
    static constexpr std::size_t size = 0x140;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_Outflows[0x18]; // 0xD8 CUtlVector<CPulse_OutflowConnection>
    std::uint8_t m_bWaitForChildOutflows[0x8]; // 0xF0 bool
    std::uint8_t m_OnFinished[0x48]; // 0xF8 CPulse_ResumePoint
};

struct CEnvSoundscape {
    static constexpr std::size_t size = 0x690;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_OnPlay[0x18]; // 0x600 CEntityIOOutput
    std::uint8_t m_flRadius[0x8]; // 0x618 float32
    std::uint8_t m_soundEventName[0x8]; // 0x620 CGameSoundEventName
    std::uint8_t m_bOverrideWithEvent[0x4]; // 0x628 bool
    std::uint8_t m_soundscapeIndex[0x4]; // 0x62C int32
    std::uint8_t m_soundscapeEntityListId[0x8]; // 0x630 int32
    std::uint8_t m_positionNames[0x40]; // 0x638 CUtlSymbolLarge[8]
    std::uint8_t m_hProxySoundscape[0x4]; // 0x678 CHandle<CEnvSoundscape>
    std::uint8_t m_bDisabled[0x4]; // 0x67C bool
    std::uint8_t m_soundscapeName[0x8]; // 0x680 CUtlSymbolLarge
    std::uint8_t m_soundEventHash[0x8]; // 0x688 uint32
};

struct C_SoundEventEntityAlias_snd_event_point {
    static constexpr std::size_t size = 0x6C0;
    std::uint8_t pad_0[0x6C0]; // 0x0
};

struct C_FogController {
    static constexpr std::size_t size = 0x670;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_fog[0x68]; // 0x600 fogparams_t
    std::uint8_t m_bUseAngles[0x4]; // 0x668 bool
    std::uint8_t m_iChangedVariables[0x4]; // 0x66C int32
};

struct C_SoundOpvarSetOBBWindEntity {
    static constexpr std::size_t size = 0x620;
    std::uint8_t pad_0[0x620]; // 0x0
};

struct C_MolotovGrenade {
    static constexpr std::size_t size = 0x1FE0;
    std::uint8_t pad_0[0x1FE0]; // 0x0
};

struct C_NetTestBaseCombatCharacter {
    static constexpr std::size_t size = 0x12F0;
    std::uint8_t pad_0[0x12F0]; // 0x0
};

struct CBodyComponentPoint {
    static constexpr std::size_t size = 0x1B0;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t m_sceneNode[0x130]; // 0x80 CGameSceneNode
};

struct C_WeaponM4A1Silencer {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F50]; // 0x0
};

struct C_SkyCameraVolume {
    static constexpr std::size_t size = 0x658;
    std::uint8_t pad_0[0x618]; // 0x0
    std::uint8_t m_vBoxMins[0xC]; // 0x618 Vector
    std::uint8_t m_vBoxMaxs[0xC]; // 0x624 Vector
    std::uint8_t m_hTarget[0x4]; // 0x630 CHandle<C_SkyCameraVolumeTarget>
    std::uint8_t m_nPriority[0x4]; // 0x634 int32
    std::uint8_t m_bIsEnabled[0x1]; // 0x638 bool
    std::uint8_t m_bSkyboxBlurEffect[0x3]; // 0x639 bool
    std::uint8_t m_vBlurOrigin[0xC]; // 0x63C Vector
    std::uint8_t m_bSkyboxReceivesWorldCsm[0x1]; // 0x648 bool
    std::uint8_t m_bWorldReceivesSkyboxCsm[0x1]; // 0x649 bool
    std::uint8_t m_bStartDisabled[0x6]; // 0x64A bool
    std::uint8_t m_iszTargetName[0x8]; // 0x650 CUtlSymbolLarge
};

struct C_EconItemView {
    static constexpr std::size_t size = 0x5B0;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t m_bInventoryImageRgbaRequested[0x1]; // 0x60 bool
    std::uint8_t m_bInventoryImageTriedCache[0x1F]; // 0x61 bool
    std::uint8_t m_nInventoryImageRgbaWidth[0x4]; // 0x80 int32
    std::uint8_t m_nInventoryImageRgbaHeight[0x4]; // 0x84 int32
    std::uint8_t m_szCurrentLoadCachedFileName[0x130]; // 0x88 char[260]
    std::uint8_t m_bRestoreCustomMaterialAfterPrecache[0x2]; // 0x1B8 bool
    std::uint8_t m_iItemDefinitionIndex[0x2]; // 0x1BA uint16
    std::uint8_t m_iEntityQuality[0x4]; // 0x1BC int32
    std::uint8_t m_iEntityLevel[0x8]; // 0x1C0 uint32
    std::uint8_t m_iItemID[0x8]; // 0x1C8 uint64
    std::uint8_t m_iItemIDHigh[0x4]; // 0x1D0 uint32
    std::uint8_t m_iItemIDLow[0x4]; // 0x1D4 uint32
    std::uint8_t m_iAccountID[0x4]; // 0x1D8 uint32
    std::uint8_t m_iInventoryPosition[0xC]; // 0x1DC uint32
    std::uint8_t m_bInitialized[0x1]; // 0x1E8 bool
    std::uint8_t m_bDisallowSOC[0x1]; // 0x1E9 bool
    std::uint8_t m_bIsStoreItem[0x1]; // 0x1EA bool
    std::uint8_t m_bIsTradeItem[0x1]; // 0x1EB bool
    std::uint8_t m_iEntityQuantity[0x4]; // 0x1EC int32
    std::uint8_t m_iRarityOverride[0x4]; // 0x1F0 int32
    std::uint8_t m_iQualityOverride[0x4]; // 0x1F4 int32
    std::uint8_t m_iOriginOverride[0x4]; // 0x1F8 int32
    std::uint8_t m_ubStyleOverride[0x1]; // 0x1FC uint8
    std::uint8_t m_unClientFlags[0xB]; // 0x1FD uint8
    std::uint8_t m_AttributeList[0x78]; // 0x208 CAttributeList
    std::uint8_t m_NetworkedDynamicAttributes[0x78]; // 0x280 CAttributeList
    std::uint8_t m_szCustomName[0xA1]; // 0x2F8 char[161]
    std::uint8_t m_szCustomNameOverride[0xA1]; // 0x399 char[161]
    std::uint8_t m_szCustomNameOverride2[0xA1]; // 0x43A char[161]
    std::uint8_t m_szCustomNameOverride3[0xCD]; // 0x4DB char[161]
    std::uint8_t m_bInitializedTags[0x8]; // 0x5A8 bool
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

struct C_SoundEventPathCornerEntity {
    static constexpr std::size_t size = 0x6D8;
    std::uint8_t pad_0[0x6C0]; // 0x0
    std::uint8_t m_vecCornerPairsNetworked[0x18]; // 0x6C0 C_NetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
};

struct C_InfoVisibilityBox {
    static constexpr std::size_t size = 0x618;
    std::uint8_t pad_0[0x604]; // 0x0
    std::uint8_t m_nMode[0x4]; // 0x604 int32
    std::uint8_t m_vBoxSize[0xC]; // 0x608 Vector
    std::uint8_t m_bEnabled[0x4]; // 0x614 bool
};

struct CCSPlayer_ItemServices {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_bHasDefuser[0x1]; // 0x48 bool
    std::uint8_t m_bHasHelmet[0x7]; // 0x49 bool
};

struct CPulseCell_Value_Gradient {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Gradient[0x18]; // 0x48 CColorGradient
};

struct IntervalTimer {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_timestamp[0x4]; // 0x8 GameTime_t
    std::uint8_t m_nWorldGroupId[0x4]; // 0xC WorldGroupId_t
};

struct audioparams_t {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t localSound[0x60]; // 0x8 VectorWS[8]
    std::uint8_t soundscapeIndex[0x4]; // 0x68 int32
    std::uint8_t localBits[0x4]; // 0x6C uint8
    std::uint8_t soundscapeEntityListIndex[0x4]; // 0x70 int32
    std::uint8_t soundEventHash[0x4]; // 0x74 uint32
};

struct C_PathParticleRope {
    static constexpr std::size_t size = 0x710;
    std::uint8_t pad_0[0x608]; // 0x0
    std::uint8_t m_bStartActive[0x4]; // 0x608 bool
    std::uint8_t m_flMaxSimulationTime[0x4]; // 0x60C float32
    std::uint8_t m_iszEffectName[0x8]; // 0x610 CUtlSymbolLarge
    std::uint8_t m_PathNodes_Name[0x18]; // 0x618 CUtlVector<CUtlSymbolLarge>
    std::uint8_t m_flParticleSpacing[0x4]; // 0x630 float32
    std::uint8_t m_flSlack[0x4]; // 0x634 float32
    std::uint8_t m_flRadius[0x4]; // 0x638 float32
    std::uint8_t m_ColorTint[0x4]; // 0x63C Color
    std::uint8_t m_nEffectState[0x8]; // 0x640 int32
    std::uint8_t m_iEffectIndex[0x8]; // 0x648 CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    std::uint8_t m_PathNodes_Position[0x18]; // 0x650 C_NetworkUtlVectorBase<Vector>
    std::uint8_t m_PathNodes_TangentIn[0x18]; // 0x668 C_NetworkUtlVectorBase<Vector>
    std::uint8_t m_PathNodes_TangentOut[0x18]; // 0x680 C_NetworkUtlVectorBase<Vector>
    std::uint8_t m_PathNodes_Color[0x18]; // 0x698 C_NetworkUtlVectorBase<Vector>
    std::uint8_t m_PathNodes_PinEnabled[0x18]; // 0x6B0 C_NetworkUtlVectorBase<bool>
    std::uint8_t m_PathNodes_RadiusScale[0x48]; // 0x6C8 C_NetworkUtlVectorBase<float32>
};

struct C_DecoyProjectile {
    static constexpr std::size_t size = 0x1378;
    std::uint8_t pad_0[0x1348]; // 0x0
    std::uint8_t m_nDecoyShotTick[0x4]; // 0x1348 int32
    std::uint8_t m_nClientLastKnownDecoyShotTick[0x24]; // 0x134C int32
    std::uint8_t m_flTimeParticleEffectSpawn[0x8]; // 0x1370 GameTime_t
};

struct C_AttributeContainer {
    static constexpr std::size_t size = 0x610;
    std::uint8_t pad_0[0x50]; // 0x0
    std::uint8_t m_Item[0x5B0]; // 0x50 C_EconItemView
    std::uint8_t m_iExternalItemProviderRegisteredToken[0x8]; // 0x600 int32
    std::uint8_t m_ullRegisteredAsItemID[0x8]; // 0x608 uint64
};

struct C_CSWeaponBase {
    static constexpr std::size_t size = 0x1F20;
    std::uint8_t pad_0[0x19A8]; // 0x0
    std::uint8_t m_iWeaponGameplayAnimState[0x4]; // 0x19A8 WeaponGameplayAnimState
    std::uint8_t m_flWeaponGameplayAnimStateTimestamp[0x4]; // 0x19AC GameTime_t
    std::uint8_t m_flInspectCancelCompleteTime[0x4]; // 0x19B0 GameTime_t
    std::uint8_t m_bInspectPending[0x1]; // 0x19B4 bool
    std::uint8_t m_bInspectShouldLoop[0x2B]; // 0x19B5 bool
    std::uint8_t m_nLastEmptySoundCmdNum[0x4]; // 0x19E0 int32
    std::uint8_t m_bFireOnEmpty[0x4]; // 0x19E4 bool
    std::uint8_t m_OnPlayerPickup[0x18]; // 0x19E8 CEntityIOOutput
    std::uint8_t m_weaponMode[0x4]; // 0x1A00 CSWeaponMode
    std::uint8_t m_flTurningInaccuracyDelta[0x4]; // 0x1A04 float32
    std::uint8_t m_vecTurningInaccuracyEyeDirLast[0xC]; // 0x1A08 Vector
    std::uint8_t m_flTurningInaccuracy[0x4]; // 0x1A14 float32
    std::uint8_t m_fAccuracyPenalty[0x4]; // 0x1A18 float32
    std::uint8_t m_flLastAccuracyUpdateTime[0x4]; // 0x1A1C GameTime_t
    std::uint8_t m_fAccuracySmoothedForZoom[0x4]; // 0x1A20 float32
    std::uint8_t m_iRecoilIndex[0x4]; // 0x1A24 int32
    std::uint8_t m_flRecoilIndex[0x4]; // 0x1A28 float32
    std::uint8_t m_bBurstMode[0x4]; // 0x1A2C bool
    std::uint8_t m_flLastBurstModeChangeTime[0x4]; // 0x1A30 GameTime_t
    std::uint8_t m_nPostponeFireReadyTicks[0x4]; // 0x1A34 GameTick_t
    std::uint8_t m_flPostponeFireReadyFrac[0x4]; // 0x1A38 float32
    std::uint8_t m_bInReload[0x4]; // 0x1A3C bool
    std::uint8_t m_nDeployTick[0x4]; // 0x1A40 GameTick_t
    std::uint8_t m_flAttackHoldStartTime[0x4]; // 0x1A44 GameTime_t
    std::uint8_t m_flDroppedAtTime[0x8]; // 0x1A48 GameTime_t
    std::uint8_t m_bIsHauledBack[0x1]; // 0x1A50 bool
    std::uint8_t m_bSilencerOn[0x3]; // 0x1A51 bool
    std::uint8_t m_flTimeSilencerSwitchComplete[0x4]; // 0x1A54 GameTime_t
    std::uint8_t m_bIsInStealthReload[0x1]; // 0x1A58 bool
    std::uint8_t m_bInSilentReloadSection[0x3]; // 0x1A59 bool
    std::uint8_t m_flStealthReloadHoldStartTime[0x4]; // 0x1A5C GameTime_t
    std::uint8_t m_bReloadHeldSinceStart[0x4]; // 0x1A60 bool
    std::uint8_t m_flWeaponActionPlaybackRate[0x4]; // 0x1A64 float32
    std::uint8_t m_iOriginalTeamNumber[0x4]; // 0x1A68 int32
    std::uint8_t m_iMostRecentTeamNumber[0x4]; // 0x1A6C int32
    std::uint8_t m_bDroppedNearBuyZone[0x4]; // 0x1A70 bool
    std::uint8_t m_flNextAttackRenderTimeOffset[0xAC]; // 0x1A74 float32
    std::uint8_t m_bClearWeaponIdentifyingUGC[0x1]; // 0x1B20 bool
    std::uint8_t m_bVisualsDataSet[0x1]; // 0x1B21 bool
    std::uint8_t m_bUIWeapon[0x2]; // 0x1B22 bool
    std::uint8_t m_nCustomEconReloadEventId[0xC]; // 0x1B24 int32
    std::uint8_t m_bCanBePickedUp[0x4]; // 0x1B30 bool
    std::uint8_t m_nextPrevOwnerUseTime[0x4]; // 0x1B34 GameTime_t
    std::uint8_t m_hPrevOwner[0x4]; // 0x1B38 CHandle<C_CSPlayerPawn>
    std::uint8_t m_nDropTick[0x4]; // 0x1B3C GameTick_t
    std::uint8_t m_bWasActiveWeaponWhenDropped[0x24]; // 0x1B40 bool
    std::uint8_t m_donated[0x4]; // 0x1B64 bool
    std::uint8_t m_fLastShotTime[0x4]; // 0x1B68 GameTime_t
    std::uint8_t m_bWasOwnedByCT[0x1]; // 0x1B6C bool
    std::uint8_t m_bWasOwnedByTerrorist[0x3]; // 0x1B6D bool
    std::uint8_t m_flNextClientFireBulletTime[0x4]; // 0x1B70 float32
    std::uint8_t m_flNextClientFireBulletTime_Repredict[0x5C]; // 0x1B74 float32
    std::uint8_t m_IronSightController[0xB0]; // 0x1BD0 C_IronSightController
    std::uint8_t m_iIronSightMode[0x78]; // 0x1C80 int32
    std::uint8_t m_flLastLOSTraceFailureTime[0x60]; // 0x1CF8 GameTime_t
    std::uint8_t m_flWatTickOffset[0x14]; // 0x1D58 float32
    std::uint8_t m_flLastShakeTime[0x1B4]; // 0x1D6C GameTime_t
};

struct CTimeline {
    static constexpr std::size_t size = 0x228;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_flValues[0x100]; // 0x10 float32[64]
    std::uint8_t m_nValueCounts[0x100]; // 0x110 int32[64]
    std::uint8_t m_nBucketCount[0x4]; // 0x210 int32
    std::uint8_t m_flInterval[0x4]; // 0x214 float32
    std::uint8_t m_flFinalValue[0x4]; // 0x218 float32
    std::uint8_t m_nCompressionType[0x4]; // 0x21C TimelineCompression_t
    std::uint8_t m_bStopped[0x8]; // 0x220 bool
};

struct C_TonemapController2 {
    static constexpr std::size_t size = 0x618;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_flAutoExposureMin[0x4]; // 0x600 float32
    std::uint8_t m_flAutoExposureMax[0x4]; // 0x604 float32
    std::uint8_t m_flExposureAdaptationSpeedUp[0x4]; // 0x608 float32
    std::uint8_t m_flExposureAdaptationSpeedDown[0x4]; // 0x60C float32
    std::uint8_t m_flTonemapEVSmoothingRange[0x8]; // 0x610 float32
};

struct CountdownTimer {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_duration[0x4]; // 0x8 float32
    std::uint8_t m_timestamp[0x4]; // 0xC GameTime_t
    std::uint8_t m_timescale[0x4]; // 0x10 float32
    std::uint8_t m_nWorldGroupId[0x4]; // 0x14 WorldGroupId_t
};

struct CNoiseStreamData {
    static constexpr std::size_t size = 0x50;
    std::uint8_t m_Stream[0x50]; // 0x0 NoiseStreamDef_t
};

struct PulseNodeDynamicOutflows_t__DynamicOutflow_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t m_OutflowID[0x8]; // 0x0 CGlobalSymbol
    std::uint8_t m_Connection[0x48]; // 0x8 CPulse_OutflowConnection
};

struct C_WeaponMag7 {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F50]; // 0x0
};

struct WeaponPurchaseCount_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_nItemDefIndex[0x2]; // 0x30 uint16
    std::uint8_t m_nCount[0x6]; // 0x32 uint16
};

struct CBasePulseGraphInstance {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x88]; // 0x0
};

struct FilterHealth {
    static constexpr std::size_t size = 0x648;
    std::uint8_t pad_0[0x638]; // 0x0
    std::uint8_t m_bAdrenalineActive[0x4]; // 0x638 bool
    std::uint8_t m_iHealthMin[0x4]; // 0x63C int32
    std::uint8_t m_iHealthMax[0x8]; // 0x640 int32
};

struct C_PointClientUIHUD {
    static constexpr std::size_t size = 0x1290;
    std::uint8_t pad_0[0x10D0]; // 0x0
    std::uint8_t m_bCheckCSSClasses[0x178]; // 0x10D0 bool
    std::uint8_t m_bIgnoreInput[0x4]; // 0x1248 bool
    std::uint8_t m_flWidth[0x4]; // 0x124C float32
    std::uint8_t m_flHeight[0x4]; // 0x1250 float32
    std::uint8_t m_flDPI[0x4]; // 0x1254 float32
    std::uint8_t m_flInteractDistance[0x4]; // 0x1258 float32
    std::uint8_t m_flDepthOffset[0x4]; // 0x125C float32
    std::uint8_t m_unOwnerContext[0x4]; // 0x1260 uint32
    std::uint8_t m_unHorizontalAlign[0x4]; // 0x1264 uint32
    std::uint8_t m_unVerticalAlign[0x4]; // 0x1268 uint32
    std::uint8_t m_unOrientation[0x4]; // 0x126C uint32
    std::uint8_t m_bAllowInteractionFromAllSceneWorlds[0x8]; // 0x1270 bool
    std::uint8_t m_vecCSSClasses[0x18]; // 0x1278 C_NetworkUtlVectorBase<CUtlSymbolLarge>
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

struct C_InfoLadderDismount {
    static constexpr std::size_t size = 0x600;
    std::uint8_t pad_0[0x600]; // 0x0
};

struct C_PointCommentaryNode {
    static constexpr std::size_t size = 0x12C8;
    std::uint8_t pad_0[0x1280]; // 0x0
    std::uint8_t m_bActive[0x1]; // 0x1280 bool
    std::uint8_t m_bWasActive[0x3]; // 0x1281 bool
    std::uint8_t m_flEndTime[0x4]; // 0x1284 GameTime_t
    std::uint8_t m_flStartTime[0x4]; // 0x1288 GameTime_t
    std::uint8_t m_flStartTimeInCommentary[0x4]; // 0x128C float32
    std::uint8_t m_iszCommentaryFile[0x8]; // 0x1290 CUtlSymbolLarge
    std::uint8_t m_iszTitle[0x8]; // 0x1298 CUtlSymbolLarge
    std::uint8_t m_iszSpeakers[0x8]; // 0x12A0 CUtlSymbolLarge
    std::uint8_t m_iNodeNumber[0x4]; // 0x12A8 int32
    std::uint8_t m_iNodeNumberMax[0x4]; // 0x12AC int32
    std::uint8_t m_bListenedTo[0x8]; // 0x12B0 bool
    std::uint8_t m_sndCommentary[0x8]; // 0x12B8 CSoundPatch*
    std::uint8_t m_hViewPosition[0x4]; // 0x12C0 CHandle<C_BaseEntity>
    std::uint8_t m_bRestartAfterRestore[0x4]; // 0x12C4 bool
};

struct CSpriteOriented {
    static constexpr std::size_t size = 0x1118;
    std::uint8_t pad_0[0x1118]; // 0x0
};

struct shard_model_desc_t {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_nModelID[0x8]; // 0x8 int32
    std::uint8_t m_hMaterialBase[0x8]; // 0x10 CStrongHandle<InfoForResourceTypeIMaterial2>
    std::uint8_t m_hMaterialDamageOverlay[0x8]; // 0x18 CStrongHandle<InfoForResourceTypeIMaterial2>
    std::uint8_t m_solid[0x4]; // 0x20 ShardSolid_t
    std::uint8_t m_vecPanelSize[0x8]; // 0x24 Vector2D
    std::uint8_t m_vecStressPositionA[0x8]; // 0x2C Vector2D
    std::uint8_t m_vecStressPositionB[0xC]; // 0x34 Vector2D
    std::uint8_t m_vecPanelVertices[0x18]; // 0x40 C_NetworkUtlVectorBase<Vector2D>
    std::uint8_t m_vInitialPanelVertices[0x18]; // 0x58 C_NetworkUtlVectorBase<Vector4D>
    std::uint8_t m_flGlassHalfThickness[0x4]; // 0x70 float32
    std::uint8_t m_bHasParent[0x1]; // 0x74 bool
    std::uint8_t m_bParentFrozen[0x3]; // 0x75 bool
    std::uint8_t m_SurfacePropStringToken[0x8]; // 0x78 CUtlStringToken
};

struct C_KeychainModule {
    static constexpr std::size_t size = 0x1278;
    std::uint8_t pad_0[0x1270]; // 0x0
    std::uint8_t m_nKeychainDefID[0x4]; // 0x1270 uint32
    std::uint8_t m_nKeychainSeed[0x4]; // 0x1274 uint32
};

struct CFuncWater {
    static constexpr std::size_t size = 0x11B0;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t m_BuoyancyHelper[0x118]; // 0x1098 CBuoyancyHelper
};

struct CCSPlayer_GlowServices {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x50]; // 0x0
};

struct CCSGameModeRules {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t __m_pChainEntity[0x28]; // 0x8 CNetworkVarChainer
};

struct C_Flashbang {
    static constexpr std::size_t size = 0x1FE0;
    std::uint8_t pad_0[0x1FE0]; // 0x0
};

struct C_PointClientUIWorldTextPanel {
    static constexpr std::size_t size = 0x1500;
    std::uint8_t pad_0[0x1300]; // 0x0
    std::uint8_t m_messageText[0x200]; // 0x1300 char[512]
};

struct CCSPlayer_WaterServices {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_flWaterJumpTime[0x4]; // 0x48 float32
    std::uint8_t m_vecWaterJumpVel[0xC]; // 0x4C Vector
    std::uint8_t m_flSwimSoundTime[0x18]; // 0x58 float32
};

struct C_CSObserverPawn {
    static constexpr std::size_t size = 0x1570;
    std::uint8_t pad_0[0x1568]; // 0x0
    std::uint8_t m_hDetectParentChange[0x8]; // 0x1568 CEntityHandle
};

struct ViewAngleServerChange_t {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t nType[0x4]; // 0x30 FixAngleSet_t
    std::uint8_t qAngle[0xC]; // 0x34 QAngle
    std::uint8_t nIndex[0x8]; // 0x40 uint32
};

struct C_FuncLadder {
    static constexpr std::size_t size = 0x10F0;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t m_vecLadderDir[0x10]; // 0x1098 Vector
    std::uint8_t m_Dismounts[0x18]; // 0x10A8 CUtlVector<CHandle<C_InfoLadderDismount>>
    std::uint8_t m_vecLocalTop[0xC]; // 0x10C0 Vector
    std::uint8_t m_vecPlayerMountPositionTop[0xC]; // 0x10CC VectorWS
    std::uint8_t m_vecPlayerMountPositionBottom[0xC]; // 0x10D8 VectorWS
    std::uint8_t m_flAutoRideSpeed[0x4]; // 0x10E4 float32
    std::uint8_t m_bDisabled[0x1]; // 0x10E8 bool
    std::uint8_t m_bFakeLadder[0x1]; // 0x10E9 bool
    std::uint8_t m_bHasSlack[0x6]; // 0x10EA bool
};

struct C_WeaponMP5SD {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F50]; // 0x0
};

struct C_World {
    static constexpr std::size_t size = 0x1098;
    std::uint8_t pad_0[0x1098]; // 0x0
};

struct C_CSGO_TeamSelectCounterTerroristPosition {
    static constexpr std::size_t size = 0x1D18;
    std::uint8_t pad_0[0x1D18]; // 0x0
};

struct C_WeaponGalilAR {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F50]; // 0x0
};

struct CCSPlayerBase_CameraServices {
    static constexpr std::size_t size = 0x2B0;
    std::uint8_t pad_0[0x298]; // 0x0
    std::uint8_t m_iFOV[0x4]; // 0x298 uint32
    std::uint8_t m_iFOVStart[0x4]; // 0x29C uint32
    std::uint8_t m_flFOVTime[0x4]; // 0x2A0 GameTime_t
    std::uint8_t m_flFOVRate[0x4]; // 0x2A4 float32
    std::uint8_t m_hZoomOwner[0x4]; // 0x2A8 CHandle<C_BaseEntity>
    std::uint8_t m_flLastShotFOV[0x4]; // 0x2AC float32
};

struct C_TeamplayRules {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x40]; // 0x0
};

struct CPulseCell_Inflow_BaseEntrypoint {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_EntryChunk[0x8]; // 0x48 PulseRuntimeChunkIndex_t
    std::uint8_t m_RegisterMap[0x30]; // 0x50 PulseRegisterMap_t
};

struct C_WeaponSG556 {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F50]; // 0x0
};

struct C_CSPlayerPawn {
    static constexpr std::size_t size = 0x3720;
    std::uint8_t pad_0[0x1570]; // 0x0
    std::uint8_t m_pBulletServices[0x8]; // 0x1570 CCSPlayer_BulletServices*
    std::uint8_t m_pHostageServices[0x8]; // 0x1578 CCSPlayer_HostageServices*
    std::uint8_t m_pBuyServices[0x8]; // 0x1580 CCSPlayer_BuyServices*
    std::uint8_t m_pGlowServices[0x8]; // 0x1588 CCSPlayer_GlowServices*
    std::uint8_t m_pActionTrackingServices[0x8]; // 0x1590 CCSPlayer_ActionTrackingServices*
    std::uint8_t m_pAimPunchServices[0x8]; // 0x1598 CCSPlayer_AimPunchServices*
    std::uint8_t m_pDamageReactServices[0x8]; // 0x15A0 CCSPlayer_DamageReactServices*
    std::uint8_t m_flHealthShotBoostExpirationTime[0x4]; // 0x15A8 GameTime_t
    std::uint8_t m_flLastFiredWeaponTime[0x4]; // 0x15AC GameTime_t
    std::uint8_t m_bHasFemaleVoice[0x4]; // 0x15B0 bool
    std::uint8_t m_flLandingTimeSeconds[0x4]; // 0x15B4 float32
    std::uint8_t m_flOldFallVelocity[0x4]; // 0x15B8 float32
    std::uint8_t m_szLastPlaceName[0x12]; // 0x15BC char[18]
    std::uint8_t m_bPrevDefuser[0x1]; // 0x15CE bool
    std::uint8_t m_bPrevHelmet[0x1]; // 0x15CF bool
    std::uint8_t m_nPrevArmorVal[0x4]; // 0x15D0 int32
    std::uint8_t m_nPrevGrenadeAmmoCount[0x4]; // 0x15D4 int32
    std::uint8_t m_unPreviousWeaponHash[0x4]; // 0x15D8 uint32
    std::uint8_t m_unWeaponHash[0x4]; // 0x15DC uint32
    std::uint8_t m_bInBuyZone[0x1]; // 0x15E0 bool
    std::uint8_t m_bPreviouslyInBuyZone[0x1]; // 0x15E1 bool
    std::uint8_t m_bInLanding[0x2]; // 0x15E2 bool
    std::uint8_t m_flLandingStartTime[0x4]; // 0x15E4 float32
    std::uint8_t m_bInHostageRescueZone[0x1]; // 0x15E8 bool
    std::uint8_t m_bInBombZone[0x1]; // 0x15E9 bool
    std::uint8_t m_bIsBuyMenuOpen[0x2]; // 0x15EA bool
    std::uint8_t m_flTimeOfLastInjury[0x4]; // 0x15EC GameTime_t
    std::uint8_t m_flNextSprayDecalTime[0x168]; // 0x15F0 GameTime_t
    std::uint8_t m_iRetakesOffering[0x4]; // 0x1758 int32
    std::uint8_t m_iRetakesOfferingCard[0x4]; // 0x175C int32
    std::uint8_t m_bRetakesHasDefuseKit[0x1]; // 0x1760 bool
    std::uint8_t m_bRetakesMVPLastRound[0x3]; // 0x1761 bool
    std::uint8_t m_iRetakesMVPBoostItem[0x4]; // 0x1764 int32
    std::uint8_t m_RetakesMVPBoostExtraUtility[0x5]; // 0x1768 loadout_slot_t
    std::uint8_t m_bNeedToReApplyGloves[0x3]; // 0x176D bool
    std::uint8_t m_EconGloves[0x5B0]; // 0x1770 C_EconItemView
    std::uint8_t m_nEconGlovesChanged[0x1]; // 0x1D20 uint8
    std::uint8_t m_bMustSyncRagdollState[0x3]; // 0x1D21 bool
    std::uint8_t m_nRagdollDamageBone[0x4]; // 0x1D24 int32
    std::uint8_t m_vRagdollDamageForce[0xC]; // 0x1D28 Vector
    std::uint8_t m_szRagdollDamageWeaponName[0x40]; // 0x1D34 char[64]
    std::uint8_t m_bRagdollDamageHeadshot[0x4]; // 0x1D74 bool
    std::uint8_t m_vRagdollServerOrigin[0xC]; // 0x1D78 VectorWS
    std::uint8_t m_lastLandTime[0x4]; // 0x1D84 GameTime_t
    std::uint8_t m_bOnGroundLastTick[0x20]; // 0x1D88 bool
    std::uint8_t m_hHudModelArms[0x4]; // 0x1DA8 CHandle<C_CS2HudModelArms>
    std::uint8_t m_qDeathEyeAngles[0xC]; // 0x1DAC QAngle
    std::uint8_t m_bLeftHanded[0x4]; // 0x1DB8 bool
    std::uint8_t m_fSwitchedHandednessTime[0x4]; // 0x1DBC GameTime_t
    std::uint8_t m_flViewmodelOffsetX[0x4]; // 0x1DC0 float32
    std::uint8_t m_flViewmodelOffsetY[0x4]; // 0x1DC4 float32
    std::uint8_t m_flViewmodelOffsetZ[0x4]; // 0x1DC8 float32
    std::uint8_t m_flViewmodelFOV[0x4]; // 0x1DCC float32
    std::uint8_t m_vecPlayerPatchEconIndices[0x48]; // 0x1DD0 uint32[5]
    std::uint8_t m_GunGameImmunityColor[0x50]; // 0x1E18 Color
    std::uint8_t m_vecBulletHitModels[0x18]; // 0x1E68 CUtlVector<C_BulletHitModel*>
    std::uint8_t m_bIsWalking[0x8]; // 0x1E80 bool
    std::uint8_t m_entitySpottedState[0x18]; // 0x1E88 EntitySpottedState_t
    std::uint8_t m_bIsScoped[0x1]; // 0x1EA0 bool
    std::uint8_t m_bResumeZoom[0x1]; // 0x1EA1 bool
    std::uint8_t m_bIsDefusing[0x1]; // 0x1EA2 bool
    std::uint8_t m_bIsGrabbingHostage[0x1]; // 0x1EA3 bool
    std::uint8_t m_iBlockingUseActionInProgress[0x4]; // 0x1EA4 CSPlayerBlockingUseAction_t
    std::uint8_t m_flEmitSoundTime[0x4]; // 0x1EA8 GameTime_t
    std::uint8_t m_flEmitSoundTime_Client[0x4]; // 0x1EAC GameTime_t
    std::uint8_t m_bInNoDefuseArea[0x4]; // 0x1EB0 bool
    std::uint8_t m_nWhichBombZone[0x4]; // 0x1EB4 int32
    std::uint8_t m_iShotsFired[0x4]; // 0x1EB8 int32
    std::uint8_t m_flFlinchStack[0x4]; // 0x1EBC float32
    std::uint8_t m_flVelocityModifier[0x4]; // 0x1EC0 float32
    std::uint8_t m_bWaitForNoAttack[0x4]; // 0x1EC4 bool
    std::uint8_t m_ignoreLadderJumpTime[0x5]; // 0x1EC8 float32
    std::uint8_t m_bKilledByHeadshot[0x3]; // 0x1ECD bool
    std::uint8_t m_ArmorValue[0x4]; // 0x1ED0 int32
    std::uint8_t m_unCurrentEquipmentValue[0x2]; // 0x1ED4 uint16
    std::uint8_t m_unRoundStartEquipmentValue[0x2]; // 0x1ED6 uint16
    std::uint8_t m_unFreezetimeEndEquipmentValue[0x4]; // 0x1ED8 uint16
    std::uint8_t m_nLastKillerIndex[0x4]; // 0x1EDC CEntityIndex
    std::uint8_t m_bOldIsScoped[0x1]; // 0x1EE0 bool
    std::uint8_t m_bHasDeathInfo[0x3]; // 0x1EE1 bool
    std::uint8_t m_flDeathInfoTime[0x4]; // 0x1EE4 float32
    std::uint8_t m_vecDeathInfoOrigin[0x38]; // 0x1EE8 VectorWS
    std::uint8_t m_grenadeParameterStashTime[0x4]; // 0x1F20 GameTime_t
    std::uint8_t m_bGrenadeParametersStashed[0x4]; // 0x1F24 bool
    std::uint8_t m_angStashedShootAngles[0xC]; // 0x1F28 QAngle
    std::uint8_t m_vecStashedGrenadeThrowPosition[0xC]; // 0x1F34 VectorWS
    std::uint8_t m_vecStashedGrenadeThrowPawnCenter[0xC]; // 0x1F40 VectorWS
    std::uint8_t m_vecStashedVelocity[0xC]; // 0x1F4C Vector
    std::uint8_t m_flInterpolatedInaccuracy[0x15A8]; // 0x1F58 float32
    std::uint8_t m_bShouldAutobuyDMWeapons[0x4]; // 0x3500 bool
    std::uint8_t m_fImmuneToGunGameDamageTime[0x4]; // 0x3504 GameTime_t
    std::uint8_t m_bGunGameImmunity[0x4]; // 0x3508 bool
    std::uint8_t m_fImmuneToGunGameDamageTimeLast[0x4]; // 0x350C GameTime_t
    std::uint8_t m_flBigHeadScale[0x4]; // 0x3510 float32
    std::uint8_t m_fMolotovDamageTime[0x74]; // 0x3514 float32
    std::uint8_t m_nPlayerInfernoBodyFx[0x78]; // 0x3588 ParticleIndex_t
    std::uint8_t m_angEyeAngles[0x90]; // 0x3600 QAngle
    std::uint8_t m_arrOldEyeAnglesTimes[0x10]; // 0x3690 GameTime_t[4]
    std::uint8_t m_arrOldEyeAngles[0x30]; // 0x36A0 QAngle[4]
    std::uint8_t m_angEyeAnglesVelocity[0xC]; // 0x36D0 QAngle
    std::uint8_t m_iIDEntIndex[0x4]; // 0x36DC CEntityIndex
    std::uint8_t m_delayTargetIDTimer[0x18]; // 0x36E0 CountdownTimer
    std::uint8_t m_iTargetItemEntIdx[0x4]; // 0x36F8 CEntityIndex
    std::uint8_t m_iOldIDEntIndex[0x4]; // 0x36FC CEntityIndex
    std::uint8_t m_holdTargetIDTimer[0x20]; // 0x3700 CountdownTimer
};

struct C_CSGO_TeamIntroTerroristPosition {
    static constexpr std::size_t size = 0x1D18;
    std::uint8_t pad_0[0x1D18]; // 0x0
};

struct CPulseCell_WaitForCursorsWithTagBase {
    static constexpr std::size_t size = 0x128;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_nCursorsAllowedToWait[0x8]; // 0xD8 int32
    std::uint8_t m_WaitComplete[0x48]; // 0xE0 CPulse_ResumePoint
};

struct C_Hostage {
    static constexpr std::size_t size = 0x13C0;
    std::uint8_t pad_0[0x12F0]; // 0x0
    std::uint8_t m_entitySpottedState[0x18]; // 0x12F0 EntitySpottedState_t
    std::uint8_t m_leader[0x8]; // 0x1308 CHandle<C_BaseEntity>
    std::uint8_t m_reuseTimer[0x18]; // 0x1310 CountdownTimer
    std::uint8_t m_vel[0xC]; // 0x1328 Vector
    std::uint8_t m_isRescued[0x1]; // 0x1334 bool
    std::uint8_t m_jumpedThisFrame[0x3]; // 0x1335 bool
    std::uint8_t m_nHostageState[0x4]; // 0x1338 int32
    std::uint8_t m_bHandsHaveBeenCut[0x4]; // 0x133C bool
    std::uint8_t m_hHostageGrabber[0x4]; // 0x1340 CHandle<C_CSPlayerPawn>
    std::uint8_t m_fLastGrabTime[0x4]; // 0x1344 GameTime_t
    std::uint8_t m_vecGrabbedPos[0xC]; // 0x1348 VectorWS
    std::uint8_t m_flRescueStartTime[0x4]; // 0x1354 GameTime_t
    std::uint8_t m_flGrabSuccessTime[0x4]; // 0x1358 GameTime_t
    std::uint8_t m_flDropStartTime[0x4]; // 0x135C GameTime_t
    std::uint8_t m_flDeadOrRescuedTime[0x8]; // 0x1360 GameTime_t
    std::uint8_t m_blinkTimer[0x18]; // 0x1368 CountdownTimer
    std::uint8_t m_lookAt[0x10]; // 0x1380 VectorWS
    std::uint8_t m_lookAroundTimer[0x18]; // 0x1390 CountdownTimer
    std::uint8_t m_isInit[0x1]; // 0x13A8 bool
    std::uint8_t m_eyeAttachment[0x1]; // 0x13A9 AttachmentHandle_t
    std::uint8_t m_chestAttachment[0x6]; // 0x13AA AttachmentHandle_t
    std::uint8_t m_pPredictionOwner[0x8]; // 0x13B0 CBasePlayerController*
    std::uint8_t m_fNewestAlphaThinkTime[0x8]; // 0x13B8 GameTime_t
};

struct C_fogplayerparams_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_hCtrl[0x4]; // 0x8 CHandle<C_FogController>
    std::uint8_t m_flTransitionTime[0x4]; // 0xC float32
    std::uint8_t m_OldColor[0x4]; // 0x10 Color
    std::uint8_t m_flOldStart[0x4]; // 0x14 float32
    std::uint8_t m_flOldEnd[0x4]; // 0x18 float32
    std::uint8_t m_flOldMaxDensity[0x4]; // 0x1C float32
    std::uint8_t m_flOldHDRColorScale[0x4]; // 0x20 float32
    std::uint8_t m_flOldFarZ[0x4]; // 0x24 float32
    std::uint8_t m_NewColor[0x4]; // 0x28 Color
    std::uint8_t m_flNewStart[0x4]; // 0x2C float32
    std::uint8_t m_flNewEnd[0x4]; // 0x30 float32
    std::uint8_t m_flNewMaxDensity[0x4]; // 0x34 float32
    std::uint8_t m_flNewHDRColorScale[0x4]; // 0x38 float32
    std::uint8_t m_flNewFarZ[0x4]; // 0x3C float32
};

struct CGameSceneNode {
    static constexpr std::size_t size = 0x130;
    std::uint8_t m_bDirtyHierarchy[0x10]; // 0x0 bitfield:1
    std::uint8_t m_nodeToWorld[0x20]; // 0x10 CTransformWS
    std::uint8_t m_pOwner[0x8]; // 0x30 CEntityInstance*
    std::uint8_t m_pParent[0x8]; // 0x38 CGameSceneNode*
    std::uint8_t m_pChild[0x8]; // 0x40 CGameSceneNode*
    std::uint8_t m_pNextSibling[0x28]; // 0x48 CGameSceneNode*
    std::uint8_t m_hParent[0x10]; // 0x70 CGameSceneNodeHandle
    std::uint8_t m_vecOrigin[0x38]; // 0x80 CNetworkOriginCellCoordQuantizedVector
    std::uint8_t m_angRotation[0xC]; // 0xB8 QAngle
    std::uint8_t m_flScale[0x4]; // 0xC4 float32
    std::uint8_t m_vecAbsOrigin[0xC]; // 0xC8 VectorWS
    std::uint8_t m_angAbsRotation[0xC]; // 0xD4 QAngle
    std::uint8_t m_flAbsScale[0x4]; // 0xE0 float32
    std::uint8_t m_vecWrappedLocalOrigin[0xC]; // 0xE4 Vector
    std::uint8_t m_angWrappedLocalRotation[0xC]; // 0xF0 QAngle
    std::uint8_t m_flWrappedScale[0x4]; // 0xFC float32
    std::uint8_t m_nParentAttachmentOrBone[0x2]; // 0x100 int16
    std::uint8_t m_bDebugAbsOriginChanges[0x1]; // 0x102 bool
    std::uint8_t m_bDormant[0x1]; // 0x103 bool
    std::uint8_t m_bForceParentToBeNetworked[0x3]; // 0x104 bool
    std::uint8_t m_nHierarchicalDepth[0x1]; // 0x107 uint8
    std::uint8_t m_nHierarchyType[0x1]; // 0x108 uint8
    std::uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount[0x3]; // 0x109 uint8
    std::uint8_t m_name[0x14]; // 0x10C CUtlStringToken
    std::uint8_t m_hierarchyAttachName[0x4]; // 0x120 CUtlStringToken
    std::uint8_t m_flClientLocalScale[0xC]; // 0x124 float32
};

struct CPlayer_ObserverServices {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_iObserverMode[0x4]; // 0x48 uint8
    std::uint8_t m_hObserverTarget[0x4]; // 0x4C CHandle<C_BaseEntity>
    std::uint8_t m_iObserverLastMode[0x4]; // 0x50 ObserverMode_t
    std::uint8_t m_bForcedObserverMode[0x4]; // 0x54 bool
    std::uint8_t m_flObserverChaseDistance[0x4]; // 0x58 float32
    std::uint8_t m_flObserverChaseDistanceCalcTime[0x4]; // 0x5C GameTime_t
};

struct CCashStack {
    static constexpr std::size_t size = 0x10A0;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t m_nCashStackValue[0x8]; // 0x1098 int32
};

struct C_SoundAreaEntityBase {
    static constexpr std::size_t size = 0x628;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_bDisabled[0x8]; // 0x600 bool
    std::uint8_t m_bWasEnabled[0x8]; // 0x608 bool
    std::uint8_t m_iszSoundAreaType[0x8]; // 0x610 CUtlSymbolLarge
    std::uint8_t m_vPos[0x10]; // 0x618 Vector
};

struct C_PlayerVisibility {
    static constexpr std::size_t size = 0x630;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_flVisibilityStrength[0x4]; // 0x600 float32
    std::uint8_t m_flFogDistanceMultiplier[0x4]; // 0x604 float32
    std::uint8_t m_flFogMaxDensityMultiplier[0x4]; // 0x608 float32
    std::uint8_t m_flFadeTime[0x4]; // 0x60C float32
    std::uint8_t m_bStartDisabled[0x1]; // 0x610 bool
    std::uint8_t m_bIsEnabled[0x1F]; // 0x611 bool
};

struct CAttributeManager__cached_attribute_float_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t flIn[0x8]; // 0x0 float32
    std::uint8_t iAttribHook[0x8]; // 0x8 CUtlSymbolLarge
    std::uint8_t flOut[0x8]; // 0x10 float32
};

struct C_BasePlayerWeapon {
    static constexpr std::size_t size = 0x1950;
    std::uint8_t pad_0[0x1918]; // 0x0
    std::uint8_t m_nNextPrimaryAttackTick[0x4]; // 0x1918 GameTick_t
    std::uint8_t m_flNextPrimaryAttackTickRatio[0x4]; // 0x191C float32
    std::uint8_t m_nNextSecondaryAttackTick[0x4]; // 0x1920 GameTick_t
    std::uint8_t m_flNextSecondaryAttackTickRatio[0x4]; // 0x1924 float32
    std::uint8_t m_iClip1[0x4]; // 0x1928 int32
    std::uint8_t m_iClip2[0x4]; // 0x192C int32
    std::uint8_t m_pReserveAmmo[0x20]; // 0x1930 int32[2]
};

struct CRagdollManager {
    static constexpr std::size_t size = 0x608;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_iCurrentMaxRagdollCount[0x8]; // 0x600 int8
};

struct CSoundOpvarSetBoxEntity {
    static constexpr std::size_t size = 0x620;
    std::uint8_t pad_0[0x620]; // 0x0
};

struct C_HEGrenade {
    static constexpr std::size_t size = 0x1FE0;
    std::uint8_t pad_0[0x1FE0]; // 0x0
};

struct C_EnvSky {
    static constexpr std::size_t size = 0x10F8;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t m_hSkyMaterial[0x8]; // 0x1098 CStrongHandle<InfoForResourceTypeIMaterial2>
    std::uint8_t m_hSkyMaterialLightingOnly[0x8]; // 0x10A0 CStrongHandle<InfoForResourceTypeIMaterial2>
    std::uint8_t m_bStartDisabled[0x4]; // 0x10A8 bool
    std::uint8_t m_vTintColor[0x4]; // 0x10AC Color
    std::uint8_t m_vTintColorLightingOnly[0x4]; // 0x10B0 Color
    std::uint8_t m_flBrightnessScale[0x4]; // 0x10B4 float32
    std::uint8_t m_nFogType[0x4]; // 0x10B8 int32
    std::uint8_t m_flFogMinStart[0x4]; // 0x10BC float32
    std::uint8_t m_flFogMinEnd[0x4]; // 0x10C0 float32
    std::uint8_t m_flFogMaxStart[0x4]; // 0x10C4 float32
    std::uint8_t m_flFogMaxEnd[0x4]; // 0x10C8 float32
    std::uint8_t m_bEnabled[0x2C]; // 0x10CC bool
};

struct CPulse_InvokeBinding {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t m_RegisterMap[0x30]; // 0x0 PulseRegisterMap_t
    std::uint8_t m_FuncName[0x10]; // 0x30 PulseSymbol_t
    std::uint8_t m_nCellIndex[0x4]; // 0x40 PulseRuntimeCellIndex_t
    std::uint8_t m_nSrcChunk[0x4]; // 0x44 PulseRuntimeChunkIndex_t
    std::uint8_t m_nSrcInstruction[0x68]; // 0x48 int32
};

struct C_GameRules {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t __m_pChainEntity[0x28]; // 0x8 CNetworkVarChainer
    std::uint8_t m_nTotalPausedTicks[0x4]; // 0x30 int32
    std::uint8_t m_nPauseStartTick[0x4]; // 0x34 int32
    std::uint8_t m_bGamePaused[0x8]; // 0x38 bool
};

struct C_WeaponMAC10 {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F50]; // 0x0
};

struct C_CSGO_MapPreviewCameraPath {
    static constexpr std::size_t size = 0x688;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_flZFar[0x4]; // 0x600 float32
    std::uint8_t m_flZNear[0x4]; // 0x604 float32
    std::uint8_t m_bLoop[0x1]; // 0x608 bool
    std::uint8_t m_bVerticalFOV[0x1]; // 0x609 bool
    std::uint8_t m_bConstantSpeed[0x2]; // 0x60A bool
    std::uint8_t m_flDuration[0x44]; // 0x60C float32
    std::uint8_t m_flPathLength[0x4]; // 0x650 float32
    std::uint8_t m_flPathDuration[0x18]; // 0x654 float32
    std::uint8_t m_bDofEnabled[0x4]; // 0x66C bool
    std::uint8_t m_flDofNearBlurry[0x4]; // 0x670 float32
    std::uint8_t m_flDofNearCrisp[0x4]; // 0x674 float32
    std::uint8_t m_flDofFarCrisp[0x4]; // 0x678 float32
    std::uint8_t m_flDofFarBlurry[0x4]; // 0x67C float32
    std::uint8_t m_flDofTiltToGround[0x8]; // 0x680 float32
};

struct C_PointWorldText {
    static constexpr std::size_t size = 0x1370;
    std::uint8_t pad_0[0x10A0]; // 0x0
    std::uint8_t m_bForceRecreateNextUpdate[0x18]; // 0x10A0 bool
    std::uint8_t m_nTextWidthPx[0x4]; // 0x10B8 int32
    std::uint8_t m_nTextHeightPx[0x4]; // 0x10BC int32
    std::uint8_t m_messageText[0x200]; // 0x10C0 char[512]
    std::uint8_t m_FontName[0x40]; // 0x12C0 char[64]
    std::uint8_t m_BackgroundMaterialName[0x40]; // 0x1300 char[64]
    std::uint8_t m_bEnabled[0x1]; // 0x1340 bool
    std::uint8_t m_bFullbright[0x3]; // 0x1341 bool
    std::uint8_t m_flWorldUnitsPerPx[0x4]; // 0x1344 float32
    std::uint8_t m_flFontSize[0x4]; // 0x1348 float32
    std::uint8_t m_flDepthOffset[0x4]; // 0x134C float32
    std::uint8_t m_bDrawBackground[0x4]; // 0x1350 bool
    std::uint8_t m_flBackgroundBorderWidth[0x4]; // 0x1354 float32
    std::uint8_t m_flBackgroundBorderHeight[0x4]; // 0x1358 float32
    std::uint8_t m_flBackgroundWorldToUV[0x4]; // 0x135C float32
    std::uint8_t m_Color[0x4]; // 0x1360 Color
    std::uint8_t m_nJustifyHorizontal[0x4]; // 0x1364 PointWorldTextJustifyHorizontal_t
    std::uint8_t m_nJustifyVertical[0x4]; // 0x1368 PointWorldTextJustifyVertical_t
    std::uint8_t m_nReorientMode[0x4]; // 0x136C PointWorldTextReorientMode_t
};

struct C_RopeKeyframe {
    static constexpr std::size_t size = 0x1408;
    std::uint8_t m_bEndPointAttachmentPositionsDirty[0x10A0]; // 0x0 bitfield:1
    std::uint8_t m_LinksTouchingSomething[0x4]; // 0x10A0 CBitVec<10>
    std::uint8_t m_nLinksTouchingSomething[0x4]; // 0x10A4 int32
    std::uint8_t m_bApplyWind[0x4]; // 0x10A8 bool
    std::uint8_t m_fPrevLockedPoints[0x4]; // 0x10AC int32
    std::uint8_t m_iForcePointMoveCounter[0x4]; // 0x10B0 int32
    std::uint8_t m_bPrevEndPointPos[0x4]; // 0x10B4 bool[2]
    std::uint8_t m_vPrevEndPointPos[0x18]; // 0x10B8 VectorWS[2]
    std::uint8_t m_flCurScroll[0x4]; // 0x10D0 float32
    std::uint8_t m_flScrollSpeed[0x4]; // 0x10D4 float32
    std::uint8_t m_RopeFlags[0x8]; // 0x10D8 uint16
    std::uint8_t m_iRopeMaterialModelIndex[0x278]; // 0x10E0 CStrongHandle<InfoForResourceTypeIMaterial2>
    std::uint8_t m_nSegments[0x4]; // 0x1358 uint8
    std::uint8_t m_hStartPoint[0x4]; // 0x135C CHandle<C_BaseEntity>
    std::uint8_t m_hEndPoint[0x4]; // 0x1360 CHandle<C_BaseEntity>
    std::uint8_t m_iStartAttachment[0x1]; // 0x1364 AttachmentHandle_t
    std::uint8_t m_iEndAttachment[0x1]; // 0x1365 AttachmentHandle_t
    std::uint8_t m_Subdiv[0x2]; // 0x1366 uint8
    std::uint8_t m_RopeLength[0x2]; // 0x1368 int16
    std::uint8_t m_Slack[0x2]; // 0x136A int16
    std::uint8_t m_TextureScale[0x4]; // 0x136C float32
    std::uint8_t m_fLockedPoints[0x1]; // 0x1370 uint8
    std::uint8_t m_nChangeCount[0x3]; // 0x1371 uint8
    std::uint8_t m_Width[0x4]; // 0x1374 float32
    std::uint8_t m_PhysicsDelegate[0x10]; // 0x1378 C_RopeKeyframe::CPhysicsDelegate
    std::uint8_t m_hMaterial[0x8]; // 0x1388 CStrongHandle<InfoForResourceTypeIMaterial2>
    std::uint8_t m_TextureHeight[0x4]; // 0x1390 int32
    std::uint8_t m_vecImpulse[0xC]; // 0x1394 Vector
    std::uint8_t m_vecPreviousImpulse[0xC]; // 0x13A0 Vector
    std::uint8_t m_flCurrentGustTimer[0x4]; // 0x13AC float32
    std::uint8_t m_flCurrentGustLifetime[0x4]; // 0x13B0 float32
    std::uint8_t m_flTimeToNextGust[0x4]; // 0x13B4 float32
    std::uint8_t m_vWindDir[0xC]; // 0x13B8 Vector
    std::uint8_t m_vColorMod[0xC]; // 0x13C4 Vector
    std::uint8_t m_vCachedEndPointAttachmentPos[0x18]; // 0x13D0 VectorWS[2]
    std::uint8_t m_vCachedEndPointAttachmentAngle[0x18]; // 0x13E8 QAngle[2]
    std::uint8_t m_bConstrainBetweenEndpoints[0x8]; // 0x1400 bool
};

struct C_BaseToggle {
    static constexpr std::size_t size = 0x1098;
    std::uint8_t pad_0[0x1098]; // 0x0
};

struct C_EnvCubemapBox {
    static constexpr std::size_t size = 0x6E8;
    std::uint8_t pad_0[0x6E8]; // 0x0
};

struct C_EnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume {
    static constexpr std::size_t size = 0x7D8;
    std::uint8_t pad_0[0x7D8]; // 0x0
};

struct C_RopeKeyframe__CPhysicsDelegate {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_pKeyframe[0x8]; // 0x8 C_RopeKeyframe*
};

struct CInfoDynamicShadowHint {
    static constexpr std::size_t size = 0x618;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_bDisabled[0x4]; // 0x600 bool
    std::uint8_t m_flRange[0x4]; // 0x604 float32
    std::uint8_t m_nImportance[0x4]; // 0x608 int32
    std::uint8_t m_nLightChoice[0x4]; // 0x60C int32
    std::uint8_t m_hLight[0x8]; // 0x610 CHandle<C_BaseEntity>
};

struct CPathNode {
    static constexpr std::size_t size = 0x660;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_vInTangentLocal[0xC]; // 0x600 Vector
    std::uint8_t m_vOutTangentLocal[0xC]; // 0x60C Vector
    std::uint8_t m_strParentPathUniqueID[0x8]; // 0x618 CUtlString
    std::uint8_t m_strPathNodeParameter[0x10]; // 0x620 CUtlString
    std::uint8_t m_xWSPrevParent[0x20]; // 0x630 CTransformWS
    std::uint8_t m_hPath[0x10]; // 0x650 CHandle<CPathWithDynamicNodes>
};

struct C_FuncMoveLinear {
    static constexpr std::size_t size = 0x1098;
    std::uint8_t pad_0[0x1098]; // 0x0
};

struct C_EnvShakeVolume {
    static constexpr std::size_t size = 0x650;
    std::uint8_t pad_0[0x618]; // 0x0
    std::uint8_t m_vBoxMins[0xC]; // 0x618 Vector
    std::uint8_t m_vBoxMaxs[0xC]; // 0x624 Vector
    std::uint8_t m_flAmplitude[0x4]; // 0x630 float32
    std::uint8_t m_flFrequency[0x4]; // 0x634 float32
    std::uint8_t m_flFalloffDistance[0x4]; // 0x638 float32
    std::uint8_t m_flRollScale[0x14]; // 0x63C float32
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
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_Completed[0x48]; // 0xD8 CPulse_ResumePoint
    std::uint8_t m_OnInterval[0x48]; // 0x120 SignatureOutflow_Continue
};

struct C_WeaponXM1014 {
    static constexpr std::size_t size = 0x1F20;
    std::uint8_t pad_0[0x1F20]; // 0x0
};

struct C_WorldModelGloves {
    static constexpr std::size_t size = 0x1270;
    std::uint8_t pad_0[0x1270]; // 0x0
};

struct C_PhysicsPropMultiplayer {
    static constexpr std::size_t size = 0x13F0;
    std::uint8_t pad_0[0x13F0]; // 0x0
};

struct C_SoundEventOBBEntity {
    static constexpr std::size_t size = 0x6E8;
    std::uint8_t pad_0[0x6C0]; // 0x0
    std::uint8_t m_vMins[0xC]; // 0x6C0 Vector
    std::uint8_t m_vMaxs[0x1C]; // 0x6CC Vector
};

struct CPulseCell_BaseLerp {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_WakeResume[0x48]; // 0xD8 CPulse_ResumePoint
};

struct C_WeaponAug {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F50]; // 0x0
};

struct C_BasePropDoor {
    static constexpr std::size_t size = 0x14F0;
    std::uint8_t pad_0[0x14C0]; // 0x0
    std::uint8_t m_eDoorState[0x4]; // 0x14C0 DoorState_t
    std::uint8_t m_modelChanged[0x1]; // 0x14C4 bool
    std::uint8_t m_bLocked[0x1]; // 0x14C5 bool
    std::uint8_t m_bNoNPCs[0x2]; // 0x14C6 bool
    std::uint8_t m_closedPosition[0xC]; // 0x14C8 VectorWS
    std::uint8_t m_closedAngles[0xC]; // 0x14D4 QAngle
    std::uint8_t m_hMaster[0x4]; // 0x14E0 CHandle<C_BasePropDoor>
    std::uint8_t m_vWhereToSetLightingOrigin[0xC]; // 0x14E4 VectorWS
};

struct CChoreoInfoTarget {
    static constexpr std::size_t size = 0x600;
    std::uint8_t pad_0[0x600]; // 0x0
};

struct CNetworkedSequenceOperation {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_hSequence[0x4]; // 0x8 HSequence
    std::uint8_t m_flPrevCycle[0x4]; // 0xC float32
    std::uint8_t m_flCycle[0x4]; // 0x10 float32
    std::uint8_t m_flWeight[0x8]; // 0x14 CNetworkedQuantizedFloat
    std::uint8_t m_bSequenceChangeNetworked[0x1]; // 0x1C bool
    std::uint8_t m_bDiscontinuity[0x3]; // 0x1D bool
    std::uint8_t m_flPrevCycleFromDiscontinuity[0x4]; // 0x20 float32
    std::uint8_t m_flPrevCycleForAnimEventDetection[0x4]; // 0x24 float32
};

struct C_Item_Healthshot {
    static constexpr std::size_t size = 0x1F30;
    std::uint8_t pad_0[0x1F30]; // 0x0
};

struct CCSCustomHudLayout {
    static constexpr std::size_t size = 0x840;
    std::uint8_t pad_0[0x618]; // 0x0
    std::uint8_t m_strLayout[0x8]; // 0x618 CUtlSymbolLarge
    std::uint8_t m_bObservable[0x8]; // 0x620 bool
    std::uint8_t m_vecPlayerLayoutStates[0x68]; // 0x628 C_UtlVectorEmbeddedNetworkVar<CCSCustomHudLayoutState>
    std::uint8_t m_globalLayoutState[0x108]; // 0x690 CCSCustomHudLayoutState
    std::uint8_t m_vecPanelIds[0x18]; // 0x798 C_NetworkUtlVectorBase<CUtlString>
    std::uint8_t m_vecClassNames[0x18]; // 0x7B0 C_NetworkUtlVectorBase<CUtlString>
    std::uint8_t m_vecDialogVariableNames[0x78]; // 0x7C8 C_NetworkUtlVectorBase<CUtlString>
};

struct CEntityInstance {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_iszPrivateVScripts[0x8]; // 0x8 CUtlSymbolLarge
    std::uint8_t m_pEntity[0x18]; // 0x10 CEntityIdentity*
    std::uint8_t m_CScriptComponent[0x8]; // 0x28 CScriptComponent*
};

struct C_BaseModelEntity {
    static constexpr std::size_t size = 0x1098;
    std::uint8_t pad_0[0xAF8]; // 0x0
    std::uint8_t m_CRenderComponent[0x8]; // 0xAF8 CRenderComponent*
    std::uint8_t m_CHitboxComponent[0x18]; // 0xB00 CHitboxComponent
    std::uint8_t m_pChoreoComponent[0x8]; // 0xB18 CChoreoComponent*
    std::uint8_t m_nDestructiblePartInitialStateDestructed0[0x4]; // 0xB20 HitGroup_t
    std::uint8_t m_nDestructiblePartInitialStateDestructed1[0x4]; // 0xB24 HitGroup_t
    std::uint8_t m_nDestructiblePartInitialStateDestructed2[0x4]; // 0xB28 HitGroup_t
    std::uint8_t m_nDestructiblePartInitialStateDestructed3[0x4]; // 0xB2C HitGroup_t
    std::uint8_t m_nDestructiblePartInitialStateDestructed4[0x4]; // 0xB30 HitGroup_t
    std::uint8_t m_nDestructiblePartInitialStateDestructed0_PartIndex[0x4]; // 0xB34 int32
    std::uint8_t m_nDestructiblePartInitialStateDestructed1_PartIndex[0x4]; // 0xB38 int32
    std::uint8_t m_nDestructiblePartInitialStateDestructed2_PartIndex[0x4]; // 0xB3C int32
    std::uint8_t m_nDestructiblePartInitialStateDestructed3_PartIndex[0x4]; // 0xB40 int32
    std::uint8_t m_nDestructiblePartInitialStateDestructed4_PartIndex[0x4]; // 0xB44 int32
    std::uint8_t m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces[0x1]; // 0xB48 bool
    std::uint8_t m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces[0x1]; // 0xB49 bool
    std::uint8_t m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces[0x1]; // 0xB4A bool
    std::uint8_t m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces[0x1]; // 0xB4B bool
    std::uint8_t m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces[0x4]; // 0xB4C bool
    std::uint8_t m_pDestructiblePartsSystemComponent[0x128]; // 0xB50 CDestructiblePartsComponent*
    std::uint8_t m_bInitModelEffects[0x1]; // 0xC78 bool
    std::uint8_t m_bDoingModelEffects[0x3]; // 0xC79 bool
    std::uint8_t m_iOldHealth[0x4]; // 0xC7C int32
    std::uint8_t m_nRenderMode[0x1]; // 0xC80 RenderMode_t
    std::uint8_t m_nRenderFX[0x1]; // 0xC81 RenderFx_t
    std::uint8_t m_bAllowFadeInView[0x1E]; // 0xC82 bool
    std::uint8_t m_clrRender[0x8]; // 0xCA0 Color
    std::uint8_t m_vecRenderAttributes[0x80]; // 0xCA8 C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
    std::uint8_t m_bRenderToCubemaps[0x1]; // 0xD28 bool
    std::uint8_t m_bExpandRenderBoundsToIncludeCloth[0x1]; // 0xD29 bool
    std::uint8_t m_bNoInterpolate[0x6]; // 0xD2A bool
    std::uint8_t m_Collision[0xB8]; // 0xD30 CCollisionProperty
    std::uint8_t m_Glow[0x58]; // 0xDE8 CGlowProperty
    std::uint8_t m_flGlowBackfaceMult[0x4]; // 0xE40 float32
    std::uint8_t m_fadeMinDist[0x4]; // 0xE44 float32
    std::uint8_t m_fadeMaxDist[0x4]; // 0xE48 float32
    std::uint8_t m_flFadeScale[0x4]; // 0xE4C float32
    std::uint8_t m_flShadowStrength[0x4]; // 0xE50 float32
    std::uint8_t m_nObjectCulling[0x1]; // 0xE54 uint8
    std::uint8_t m_nRequiredDecalRtEncoding[0x3]; // 0xE55 DecalRtEncoding_t
    std::uint8_t m_bodyGroupTotalRequestCount[0x8]; // 0xE58 uint32
    std::uint8_t m_bodyGroupRequests[0xD8]; // 0xE60 CUtlVectorFixedGrowable<C_BaseModelEntity::BodyGroupRequest_t,8>
    std::uint8_t m_bodyGroupChoices[0x28]; // 0xF38 CUtlOrderedMap<CGlobalSymbol,int32>
    std::uint8_t m_vecViewOffset[0xE0]; // 0xF60 CNetworkViewOffsetVector
    std::uint8_t m_pClientAlphaProperty[0x8]; // 0x1040 CClientAlphaProperty*
    std::uint8_t m_ClientOverrideTint[0x4]; // 0x1048 Color
    std::uint8_t m_bUseClientOverrideTint[0x3C]; // 0x104C bool
    std::uint8_t m_bvDisabledHitGroups[0x10]; // 0x1088 uint32[1]
};

struct CCSPlayer_BulletServices {
    static constexpr std::size_t size = 0xA8;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_totalHitsOnServer[0x60]; // 0x48 int32
};

struct C_SoundOpvarSetAutoRoomEntity {
    static constexpr std::size_t size = 0x620;
    std::uint8_t pad_0[0x620]; // 0x0
};

struct C_EnvCombinedLightProbeVolume {
    static constexpr std::size_t size = 0x7D8;
    std::uint8_t pad_0[0x718]; // 0x0
    std::uint8_t m_Entity_Color[0x4]; // 0x718 Color
    std::uint8_t m_Entity_flBrightness[0x4]; // 0x71C float32
    std::uint8_t m_Entity_hCubemapTexture[0x8]; // 0x720 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_bCustomCubemapTexture[0x8]; // 0x728 bool
    std::uint8_t m_Entity_hLightProbeTexture_AmbientCube[0x8]; // 0x730 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_hLightProbeTexture_SDF[0x8]; // 0x738 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_hLightProbeTexture_SH2_DC[0x8]; // 0x740 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_hLightProbeTexture_SH2_L1[0x8]; // 0x748 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_hLightProbeDirectLightIndicesTexture[0x8]; // 0x750 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_hLightProbeDirectLightScalarsTexture[0x8]; // 0x758 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_hLightProbeDirectLightShadowsTexture[0x8]; // 0x760 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_vBoxMins[0xC]; // 0x768 Vector
    std::uint8_t m_Entity_vBoxMaxs[0xC]; // 0x774 Vector
    std::uint8_t m_Entity_bMoveable[0x4]; // 0x780 bool
    std::uint8_t m_Entity_nHandshake[0x4]; // 0x784 int32
    std::uint8_t m_Entity_nEnvCubeMapArrayIndex[0x4]; // 0x788 int32
    std::uint8_t m_Entity_nPriority[0x4]; // 0x78C int32
    std::uint8_t m_Entity_bStartDisabled[0x4]; // 0x790 bool
    std::uint8_t m_Entity_flEdgeFadeDist[0x4]; // 0x794 float32
    std::uint8_t m_Entity_vEdgeFadeDists[0xC]; // 0x798 Vector
    std::uint8_t m_Entity_nLightProbeSizeX[0x4]; // 0x7A4 int32
    std::uint8_t m_Entity_nLightProbeSizeY[0x4]; // 0x7A8 int32
    std::uint8_t m_Entity_nLightProbeSizeZ[0x4]; // 0x7AC int32
    std::uint8_t m_Entity_nLightProbeAtlasX[0x4]; // 0x7B0 int32
    std::uint8_t m_Entity_nLightProbeAtlasY[0x4]; // 0x7B4 int32
    std::uint8_t m_Entity_nLightProbeAtlasZ[0x19]; // 0x7B8 int32
    std::uint8_t m_Entity_bEnabled[0x7]; // 0x7D1 bool
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
    static constexpr std::size_t size = 0x10A0;
    std::uint8_t pad_0[0x10A0]; // 0x0
};

struct C_BaseEntity {
    static constexpr std::size_t size = 0x600;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_CBodyComponent[0x8]; // 0x30 CBodyComponent*
    std::uint8_t m_NetworkTransmitComponent[0x2F0]; // 0x38 CNetworkTransmitComponent
    std::uint8_t m_nLastThinkTick[0x8]; // 0x328 GameTick_t
    std::uint8_t m_pGameSceneNode[0x8]; // 0x330 CGameSceneNode*
    std::uint8_t m_pRenderComponent[0x8]; // 0x338 CRenderComponent*
    std::uint8_t m_pCollision[0x8]; // 0x340 CCollisionProperty*
    std::uint8_t m_iMaxHealth[0x4]; // 0x348 int32
    std::uint8_t m_iHealth[0x4]; // 0x34C int32
    std::uint8_t m_flDamageAccumulator[0x4]; // 0x350 float32
    std::uint8_t m_lifeState[0x1]; // 0x354 uint8
    std::uint8_t m_bTakesDamage[0x3]; // 0x355 bool
    std::uint8_t m_nTakeDamageFlags[0x8]; // 0x358 TakeDamageFlags_t
    std::uint8_t m_nPlatformType[0x1]; // 0x360 EntityPlatformTypes_t
    std::uint8_t m_ubInterpolationFrame[0x3]; // 0x361 uint8
    std::uint8_t m_hSceneObjectController[0x4]; // 0x364 CHandle<C_BaseEntity>
    std::uint8_t m_nNoInterpolationTick[0x4]; // 0x368 int32
    std::uint8_t m_nVisibilityNoInterpolationTick[0x4]; // 0x36C int32
    std::uint8_t m_flProxyRandomValue[0x4]; // 0x370 float32
    std::uint8_t m_iEFlags[0x4]; // 0x374 int32
    std::uint8_t m_nWaterType[0x1]; // 0x378 uint8
    std::uint8_t m_bInterpolateEvenWithNoModel[0x1]; // 0x379 bool
    std::uint8_t m_bPredictionEligible[0x1]; // 0x37A bool
    std::uint8_t m_bApplyLayerMatchIDToModel[0x1]; // 0x37B bool
    std::uint8_t m_tokLayerMatchID[0x4]; // 0x37C CUtlStringToken
    std::uint8_t m_nSubclassID[0x10]; // 0x380 CUtlStringToken
    std::uint8_t m_nSimulationTick[0x4]; // 0x390 int32
    std::uint8_t m_iCurrentThinkContext[0x4]; // 0x394 int32
    std::uint8_t m_aThinkFunctions[0x18]; // 0x398 CUtlVector<thinkfunc_t>
    std::uint8_t m_bDisabledContextThinks[0x4]; // 0x3B0 bool
    std::uint8_t m_flAnimTime[0x4]; // 0x3B4 float32
    std::uint8_t m_flSimulationTime[0x4]; // 0x3B8 float32
    std::uint8_t m_nSceneObjectOverrideFlags[0x1]; // 0x3BC uint8
    std::uint8_t m_bHasSuccessfullyInterpolated[0x1]; // 0x3BD bool
    std::uint8_t m_bHasAddedVarsToInterpolation[0x1]; // 0x3BE bool
    std::uint8_t m_bRenderEvenWhenNotSuccessfullyInterpolated[0x1]; // 0x3BF bool
    std::uint8_t m_nInterpolationLatchDirtyFlags[0x8]; // 0x3C0 int32[2]
    std::uint8_t m_ListEntry[0x18]; // 0x3C8 uint16[11]
    std::uint8_t m_flCreateTime[0x4]; // 0x3E0 GameTime_t
    std::uint8_t m_EntClientFlags[0x2]; // 0x3E4 uint16
    std::uint8_t m_bClientSideRagdoll[0x1]; // 0x3E6 bool
    std::uint8_t m_iTeamNum[0x1]; // 0x3E7 uint8
    std::uint8_t m_spawnflags[0x4]; // 0x3E8 uint32
    std::uint8_t m_nNextThinkTick[0x8]; // 0x3EC GameTick_t
    std::uint8_t m_fFlags[0x4]; // 0x3F4 uint32
    std::uint8_t m_vecAbsVelocity[0xC]; // 0x3F8 Vector
    std::uint8_t m_vecServerVelocity[0x2C]; // 0x404 CNetworkVelocityVector
    std::uint8_t m_vecVelocity[0xE0]; // 0x430 CNetworkVelocityVector
    std::uint8_t m_vecBaseVelocity[0xC]; // 0x510 Vector
    std::uint8_t m_hEffectEntity[0x4]; // 0x51C CHandle<C_BaseEntity>
    std::uint8_t m_hOwnerEntity[0x4]; // 0x520 CHandle<C_BaseEntity>
    std::uint8_t m_MoveCollide[0x1]; // 0x524 MoveCollide_t
    std::uint8_t m_MoveType[0x1]; // 0x525 MoveType_t
    std::uint8_t m_nActualMoveType[0x2]; // 0x526 MoveType_t
    std::uint8_t m_flWaterLevel[0x4]; // 0x528 float32
    std::uint8_t m_fEffects[0x4]; // 0x52C uint32
    std::uint8_t m_hGroundEntity[0x4]; // 0x530 CHandle<C_BaseEntity>
    std::uint8_t m_nGroundBodyIndex[0x4]; // 0x534 int32
    std::uint8_t m_flFriction[0x4]; // 0x538 float32
    std::uint8_t m_flElasticity[0x4]; // 0x53C float32
    std::uint8_t m_flGravityScale[0x4]; // 0x540 float32
    std::uint8_t m_flTimeScale[0x4]; // 0x544 float32
    std::uint8_t m_bAnimatedEveryTick[0x1]; // 0x548 bool
    std::uint8_t m_bGravityDisabled[0x3]; // 0x549 bool
    std::uint8_t m_flNavIgnoreUntilTime[0x4]; // 0x54C GameTime_t
    std::uint8_t m_hThink[0x10]; // 0x550 uint16
    std::uint8_t m_fBBoxVisFlags[0x4]; // 0x560 uint8
    std::uint8_t m_flActualGravityScale[0x4]; // 0x564 float32
    std::uint8_t m_bGravityActuallyDisabled[0x1]; // 0x568 bool
    std::uint8_t m_bPredictable[0x1]; // 0x569 bool
    std::uint8_t m_bRenderWithViewModels[0x2]; // 0x56A bool
    std::uint8_t m_nFirstPredictableCommand[0x4]; // 0x56C int32
    std::uint8_t m_nLastPredictableCommand[0x4]; // 0x570 int32
    std::uint8_t m_hOldMoveParent[0x4]; // 0x574 CHandle<C_BaseEntity>
    std::uint8_t m_Particles[0x30]; // 0x578 CParticleProperty
    std::uint8_t m_vecAngVelocity[0xC]; // 0x5A8 QAngle
    std::uint8_t m_DataChangeEventRef[0x4]; // 0x5B4 int32
    std::uint8_t m_dependencies[0x18]; // 0x5B8 CUtlVector<CEntityHandle>
    std::uint8_t m_nCreationTick[0x11]; // 0x5D0 int32
    std::uint8_t m_bAnimTimeChanged[0x1]; // 0x5E1 bool
    std::uint8_t m_bSimulationTimeChanged[0xE]; // 0x5E2 bool
    std::uint8_t m_sUniqueHammerID[0x8]; // 0x5F0 CUtlString
    std::uint8_t m_nBloodType[0x8]; // 0x5F8 BloodType
};

struct ActiveModelConfig_t {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_Handle[0x8]; // 0x30 ModelConfigHandle_t
    std::uint8_t m_Name[0x8]; // 0x38 CUtlSymbolLarge
    std::uint8_t m_AssociatedEntities[0x18]; // 0x40 C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
    std::uint8_t m_AssociatedEntityNames[0x18]; // 0x58 C_NetworkUtlVectorBase<CUtlSymbolLarge>
};

struct C_WeaponSSG08 {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F50]; // 0x0
};

struct CPulseCell_Value_Curve {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Curve[0x40]; // 0x48 CPiecewiseCurve
};

struct C_Chicken {
    static constexpr std::size_t size = 0x1BA0;
    std::uint8_t pad_0[0x14C0]; // 0x0
    std::uint8_t m_leader[0x4]; // 0x14C0 CHandle<C_CSPlayerPawn>
    std::uint8_t m_owner[0x4]; // 0x14C4 CHandle<CCSPlayerController>
    std::uint8_t m_AttributeManager[0x610]; // 0x14C8 C_AttributeContainer
    std::uint8_t m_bAttributesInitialized[0x4]; // 0x1AD8 bool
    std::uint8_t m_hWaterWakeParticles[0x4]; // 0x1ADC ParticleIndex_t
    std::uint8_t m_bIsPreviewModel[0x88]; // 0x1AE0 bool
    std::uint8_t m_bSpawnDyingParticles[0x38]; // 0x1B68 bool
};

struct C_BasePlayerPawn {
    static constexpr std::size_t size = 0x14C8;
    std::uint8_t pad_0[0x12F0]; // 0x0
    std::uint8_t m_pWeaponServices[0x8]; // 0x12F0 CPlayer_WeaponServices*
    std::uint8_t m_pItemServices[0x8]; // 0x12F8 CPlayer_ItemServices*
    std::uint8_t m_pAutoaimServices[0x8]; // 0x1300 CPlayer_AutoaimServices*
    std::uint8_t m_pObserverServices[0x8]; // 0x1308 CPlayer_ObserverServices*
    std::uint8_t m_pWaterServices[0x8]; // 0x1310 CPlayer_WaterServices*
    std::uint8_t m_pUseServices[0x8]; // 0x1318 CPlayer_UseServices*
    std::uint8_t m_pFlashlightServices[0x8]; // 0x1320 CPlayer_FlashlightServices*
    std::uint8_t m_pCameraServices[0x8]; // 0x1328 CPlayer_CameraServices*
    std::uint8_t m_pMovementServices[0x10]; // 0x1330 CPlayer_MovementServices*
    std::uint8_t m_ServerViewAngleChanges[0x68]; // 0x1340 C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
    std::uint8_t v_angle[0xC]; // 0x13A8 QAngle
    std::uint8_t v_anglePrevious[0xC]; // 0x13B4 QAngle
    std::uint8_t m_iHideHUD[0x8]; // 0x13C0 uint32
    std::uint8_t m_skybox3d[0x90]; // 0x13C8 sky3dparams_t
    std::uint8_t m_flDeathTime[0x8]; // 0x1458 GameTime_t
    std::uint8_t m_vecPredictionError[0xC]; // 0x1460 Vector
    std::uint8_t m_flPredictionErrorTime[0x20]; // 0x146C GameTime_t
    std::uint8_t m_vecLastCameraSetupLocalOrigin[0xC]; // 0x148C Vector
    std::uint8_t m_flLastCameraSetupTime[0x4]; // 0x1498 GameTime_t
    std::uint8_t m_flFOVSensitivityAdjust[0x4]; // 0x149C float32
    std::uint8_t m_flMouseSensitivity[0x4]; // 0x14A0 float32
    std::uint8_t m_vOldOrigin[0xC]; // 0x14A4 Vector
    std::uint8_t m_flOldSimulationTime[0x4]; // 0x14B0 float32
    std::uint8_t m_nLastExecutedCommandNumber[0x4]; // 0x14B4 int32
    std::uint8_t m_nLastExecutedCommandTick[0x4]; // 0x14B8 int32
    std::uint8_t m_hController[0x4]; // 0x14BC CHandle<CBasePlayerController>
    std::uint8_t m_hDefaultController[0x4]; // 0x14C0 CHandle<CBasePlayerController>
    std::uint8_t m_bIsSwappingToPredictableController[0x4]; // 0x14C4 bool
};

struct C_SoundOpvarSetAABBEntity {
    static constexpr std::size_t size = 0x620;
    std::uint8_t pad_0[0x620]; // 0x0
};

struct C_WeaponBizon {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F50]; // 0x0
};

struct C_StattrakModule {
    static constexpr std::size_t size = 0x1278;
    std::uint8_t pad_0[0x1270]; // 0x0
    std::uint8_t m_bKnife[0x8]; // 0x1270 bool
};

struct CCSObserver_CameraServices {
    static constexpr std::size_t size = 0x2B8;
    std::uint8_t pad_0[0x2B0]; // 0x0
    std::uint8_t m_hPrevPostProcessingVolume[0x8]; // 0x2B0 CHandle<C_PostProcessingVolume>
};

struct CEnvSoundscapeProxy {
    static constexpr std::size_t size = 0x698;
    std::uint8_t pad_0[0x690]; // 0x0
    std::uint8_t m_MainSoundscapeName[0x8]; // 0x690 CUtlSymbolLarge
};

struct C_SoundEventEntity {
    static constexpr std::size_t size = 0x6C0;
    std::uint8_t m_bClientSideOnly[0x600]; // 0x0 bitfield:1
    std::uint8_t m_bStartOnSpawn[0x1]; // 0x600 bool
    std::uint8_t m_bToLocalPlayer[0x1]; // 0x601 bool
    std::uint8_t m_bStopOnNew[0x1]; // 0x602 bool
    std::uint8_t m_bSaveRestore[0x1]; // 0x603 bool
    std::uint8_t m_bSavedIsPlaying[0x4]; // 0x604 bool
    std::uint8_t m_flSavedElapsedTime[0x8]; // 0x608 float32
    std::uint8_t m_iszSourceEntityName[0x8]; // 0x610 CUtlSymbolLarge
    std::uint8_t m_iszAttachmentName[0x8]; // 0x618 CUtlSymbolLarge
    std::uint8_t m_onGUIDChanged[0x30]; // 0x620 CEntityOutputTemplate<SndOpEventGuid_t>
    std::uint8_t m_onSoundFinished[0x18]; // 0x650 CEntityIOOutput
    std::uint8_t m_flClientCullRadius[0x30]; // 0x668 float32
    std::uint8_t m_iszSoundName[0x1C]; // 0x698 CUtlSymbolLarge
    std::uint8_t m_hSource[0x4]; // 0x6B4 CEntityHandle
    std::uint8_t m_nEntityIndexSelection[0x8]; // 0x6B8 int32
};

struct CPulseCell_Inflow_EventHandler {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t m_EventName[0x10]; // 0x80 PulseSymbol_t
};

struct C_LightOrthoEntity {
    static constexpr std::size_t size = 0x10A0;
    std::uint8_t pad_0[0x10A0]; // 0x0
};

struct CPulseCell_BaseFlow {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CBombTarget {
    static constexpr std::size_t size = 0x1188;
    std::uint8_t pad_0[0x1180]; // 0x0
    std::uint8_t m_bBombPlantedHere[0x8]; // 0x1180 bool
};

struct C_Knife {
    static constexpr std::size_t size = 0x1F30;
    std::uint8_t pad_0[0x1F20]; // 0x0
    std::uint8_t m_bFirstAttack[0x10]; // 0x1F20 bool
};

struct C_CSGO_TerroristWingmanIntroCamera {
    static constexpr std::size_t size = 0x690;
    std::uint8_t pad_0[0x690]; // 0x0
};

struct CSkeletonInstance {
    static constexpr std::size_t size = 0x490;
    std::uint8_t pad_0[0x140]; // 0x0
    std::uint8_t m_modelState[0x2B0]; // 0x140 CModelState
    std::uint8_t m_bUseParentRenderBounds[0x1]; // 0x3F0 bool
    std::uint8_t m_bDisableSolidCollisionsForHierarchy[0x1]; // 0x3F1 bool
    std::uint8_t m_bDirtyMotionType[0x1]; // 0x3F2 bool
    std::uint8_t m_bIsGeneratingLatchedParentSpaceState[0x5]; // 0x3F3 bool
    std::uint8_t m_materialGroup[0x4]; // 0x3F8 CUtlStringToken
    std::uint8_t m_nHitboxSet[0x94]; // 0x3FC uint8
};

struct CEntityComponent {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct C_ItemDogtags {
    static constexpr std::size_t size = 0x1A20;
    std::uint8_t pad_0[0x1A18]; // 0x0
    std::uint8_t m_OwningPlayer[0x4]; // 0x1A18 CHandle<C_CSPlayerPawn>
    std::uint8_t m_KillingPlayer[0x4]; // 0x1A1C CHandle<C_CSPlayerPawn>
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
    std::uint8_t m_Shuffle[0x20]; // 0x0 CUtlVectorFixedGrowable<uint8,8>
    std::uint8_t m_nNextShuffle[0x8]; // 0x20 int32
};

struct CPulseCell_BaseLerp__CursorState_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_StartTime[0x4]; // 0x0 GameTime_t
    std::uint8_t m_EndTime[0x4]; // 0x4 GameTime_t
};

struct C_BaseClientUIEntity {
    static constexpr std::size_t size = 0x10C8;
    std::uint8_t pad_0[0x10A0]; // 0x0
    std::uint8_t m_bEnabled[0x8]; // 0x10A0 bool
    std::uint8_t m_DialogXMLName[0x8]; // 0x10A8 CUtlSymbolLarge
    std::uint8_t m_PanelClassName[0x8]; // 0x10B0 CUtlSymbolLarge
    std::uint8_t m_PanelID[0x10]; // 0x10B8 CUtlSymbolLarge
};

struct C_WeaponUSPSilencer {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F50]; // 0x0
};

struct C_MolotovProjectile {
    static constexpr std::size_t size = 0x1370;
    std::uint8_t pad_0[0x1348]; // 0x0
    std::uint8_t m_bIsIncGrenade[0x28]; // 0x1348 bool
};

struct C_TriggerLerpObject {
    static constexpr std::size_t size = 0x1180;
    std::uint8_t pad_0[0x1180]; // 0x0
};

struct C_WeaponRevolver {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F50]; // 0x0
};

struct C_WeaponElite {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F50]; // 0x0
};

struct C_DynamicPropAlias_cable_dynamic {
    static constexpr std::size_t size = 0x14B0;
    std::uint8_t pad_0[0x14B0]; // 0x0
};

struct CBaseProp {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x1268]; // 0x0
    std::uint8_t m_bModelOverrodeBlockLOS[0x4]; // 0x1268 bool
    std::uint8_t m_iShapeType[0x4]; // 0x126C int32
    std::uint8_t m_bConformToCollisionBounds[0x10]; // 0x1270 bool
    std::uint8_t m_mPreferredCatchTransform[0x20]; // 0x1280 CTransform
};

struct CInfoOffscreenPanoramaTexture {
    static constexpr std::size_t size = 0x808;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_bDisabled[0x1]; // 0x600 bool
    std::uint8_t m_bEnableMipGen[0x3]; // 0x601 bool
    std::uint8_t m_nResolutionX[0x4]; // 0x604 int32
    std::uint8_t m_nResolutionY[0x8]; // 0x608 int32
    std::uint8_t m_szPanelType[0x8]; // 0x610 CUtlSymbolLarge
    std::uint8_t m_szLayoutFileName[0x8]; // 0x618 CUtlSymbolLarge
    std::uint8_t m_RenderAttrName[0x8]; // 0x620 CUtlSymbolLarge
    std::uint8_t m_TargetEntities[0x18]; // 0x628 C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
    std::uint8_t m_nTargetChangeCount[0x8]; // 0x640 int32
    std::uint8_t m_vecCSSClasses[0x18]; // 0x648 C_NetworkUtlVectorBase<CUtlSymbolLarge>
    std::uint8_t m_szTargetsName[0x8]; // 0x660 CUtlSymbolLarge
    std::uint8_t m_AdditionalTargetEntities[0x178]; // 0x668 CUtlVector<CHandle<C_BaseModelEntity>>
    std::uint8_t m_bCheckCSSClasses[0x28]; // 0x7E0 bool
};

struct CCSWeaponBaseVData {
    static constexpr std::size_t size = 0x8A0;
    std::uint8_t pad_0[0x520]; // 0x0
    std::uint8_t m_WeaponType[0x4]; // 0x520 CSWeaponType
    std::uint8_t m_WeaponCategory[0x4]; // 0x524 CSWeaponCategory
    std::uint8_t m_szAnimSkeleton[0xE0]; // 0x528 CResourceNameTyped<CWeakHandle<InfoForResourceTypeCNmSkeleton>>
    std::uint8_t m_vecMuzzlePos0[0xC]; // 0x608 Vector
    std::uint8_t m_vecMuzzlePos1[0xC]; // 0x614 Vector
    std::uint8_t m_szTracerParticle[0xE0]; // 0x620 CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    std::uint8_t m_GearSlot[0x4]; // 0x700 gear_slot_t
    std::uint8_t m_GearSlotPosition[0x4]; // 0x704 int32
    std::uint8_t m_DefaultLoadoutSlot[0x4]; // 0x708 loadout_slot_t
    std::uint8_t m_nPrice[0x4]; // 0x70C int32
    std::uint8_t m_nKillAward[0x4]; // 0x710 int32
    std::uint8_t m_nPrimaryReserveAmmoMax[0x4]; // 0x714 int32
    std::uint8_t m_nSecondaryReserveAmmoMax[0x4]; // 0x718 int32
    std::uint8_t m_bMeleeWeapon[0x1]; // 0x71C bool
    std::uint8_t m_bHasBurstMode[0x1]; // 0x71D bool
    std::uint8_t m_bIsRevolver[0x1]; // 0x71E bool
    std::uint8_t m_bCannotShootUnderwater[0x1]; // 0x71F bool
    std::uint8_t m_szName[0x8]; // 0x720 CGlobalSymbol
    std::uint8_t m_eSilencerType[0x4]; // 0x728 CSWeaponSilencerType
    std::uint8_t m_bShowCrosshair[0x1]; // 0x72C bool
    std::uint8_t m_bIsFullAuto[0x3]; // 0x72D bool
    std::uint8_t m_nNumBullets[0x4]; // 0x730 int32
    std::uint8_t m_bReloadsSingleShells[0x4]; // 0x734 bool
    std::uint8_t m_flCycleTime[0x8]; // 0x738 CFiringModeFloat
    std::uint8_t m_flCycleTimeWhenInBurstMode[0x4]; // 0x740 float32
    std::uint8_t m_flTimeBetweenBurstShots[0x4]; // 0x744 float32
    std::uint8_t m_flMaxSpeed[0x8]; // 0x748 CFiringModeFloat
    std::uint8_t m_flSpread[0x8]; // 0x750 CFiringModeFloat
    std::uint8_t m_flInaccuracyCrouch[0x8]; // 0x758 CFiringModeFloat
    std::uint8_t m_flInaccuracyStand[0x8]; // 0x760 CFiringModeFloat
    std::uint8_t m_flInaccuracyJump[0x8]; // 0x768 CFiringModeFloat
    std::uint8_t m_flInaccuracyLand[0x8]; // 0x770 CFiringModeFloat
    std::uint8_t m_flInaccuracyLadder[0x8]; // 0x778 CFiringModeFloat
    std::uint8_t m_flInaccuracyFire[0x8]; // 0x780 CFiringModeFloat
    std::uint8_t m_flInaccuracyMove[0x8]; // 0x788 CFiringModeFloat
    std::uint8_t m_flRecoilAngle[0x8]; // 0x790 CFiringModeFloat
    std::uint8_t m_flRecoilAngleVariance[0x8]; // 0x798 CFiringModeFloat
    std::uint8_t m_flRecoilMagnitude[0x8]; // 0x7A0 CFiringModeFloat
    std::uint8_t m_flRecoilMagnitudeVariance[0x8]; // 0x7A8 CFiringModeFloat
    std::uint8_t m_nTracerFrequency[0x8]; // 0x7B0 CFiringModeInt
    std::uint8_t m_flInaccuracyJumpInitial[0x4]; // 0x7B8 float32
    std::uint8_t m_flInaccuracyJumpApex[0x4]; // 0x7BC float32
    std::uint8_t m_flInaccuracyReload[0x4]; // 0x7C0 float32
    std::uint8_t m_flDeployDuration[0x4]; // 0x7C4 float32
    std::uint8_t m_flDisallowAttackAfterReloadStartDuration[0x4]; // 0x7C8 float32
    std::uint8_t m_nBurstShotCount[0x4]; // 0x7CC int32
    std::uint8_t m_bAllowBurstHolster[0x4]; // 0x7D0 bool
    std::uint8_t m_nRecoilSeed[0x4]; // 0x7D4 int32
    std::uint8_t m_nSpreadSeed[0x4]; // 0x7D8 int32
    std::uint8_t m_flAttackMovespeedFactor[0x4]; // 0x7DC float32
    std::uint8_t m_flInaccuracyPitchShift[0x4]; // 0x7E0 float32
    std::uint8_t m_flInaccuracyAltSoundThreshold[0x4]; // 0x7E4 float32
    std::uint8_t m_szUseRadioSubtitle[0x8]; // 0x7E8 CUtlString
    std::uint8_t m_bUnzoomsAfterShot[0x1]; // 0x7F0 bool
    std::uint8_t m_bHideViewModelWhenZoomed[0x3]; // 0x7F1 bool
    std::uint8_t m_nZoomLevels[0x4]; // 0x7F4 int32
    std::uint8_t m_nZoomFOV1[0x4]; // 0x7F8 int32
    std::uint8_t m_nZoomFOV2[0x4]; // 0x7FC int32
    std::uint8_t m_flZoomTime0[0x4]; // 0x800 float32
    std::uint8_t m_flZoomTime1[0x4]; // 0x804 float32
    std::uint8_t m_flZoomTime2[0x4]; // 0x808 float32
    std::uint8_t m_flIronSightPullUpSpeed[0x4]; // 0x80C float32
    std::uint8_t m_flIronSightPutDownSpeed[0x4]; // 0x810 float32
    std::uint8_t m_flIronSightFOV[0x4]; // 0x814 float32
    std::uint8_t m_flIronSightPivotForward[0x4]; // 0x818 float32
    std::uint8_t m_flIronSightLooseness[0x4]; // 0x81C float32
    std::uint8_t m_nDamage[0x4]; // 0x820 int32
    std::uint8_t m_flHeadshotMultiplier[0x4]; // 0x824 float32
    std::uint8_t m_flArmorRatio[0x4]; // 0x828 float32
    std::uint8_t m_flPenetration[0x4]; // 0x82C float32
    std::uint8_t m_flRange[0x4]; // 0x830 float32
    std::uint8_t m_flRangeModifier[0x4]; // 0x834 float32
    std::uint8_t m_flFlinchVelocityModifierLarge[0x4]; // 0x838 float32
    std::uint8_t m_flFlinchVelocityModifierSmall[0x4]; // 0x83C float32
    std::uint8_t m_flRecoveryTimeCrouch[0x4]; // 0x840 float32
    std::uint8_t m_flRecoveryTimeStand[0x4]; // 0x844 float32
    std::uint8_t m_flRecoveryTimeCrouchFinal[0x4]; // 0x848 float32
    std::uint8_t m_flRecoveryTimeStandFinal[0x4]; // 0x84C float32
    std::uint8_t m_nRecoveryTransitionStartBullet[0x4]; // 0x850 int32
    std::uint8_t m_nRecoveryTransitionEndBullet[0x4]; // 0x854 int32
    std::uint8_t m_flThrowVelocity[0x4]; // 0x858 float32
    std::uint8_t m_vSmokeColor[0xC]; // 0x85C Vector
    std::uint8_t m_szAnimClass[0x38]; // 0x868 CGlobalSymbol
};

struct CAttributeManager {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_Providers[0x18]; // 0x8 CUtlVector<CHandle<C_BaseEntity>>
    std::uint8_t m_iReapplyProvisionParity[0x4]; // 0x20 int32
    std::uint8_t m_hOuter[0x4]; // 0x24 CHandle<C_BaseEntity>
    std::uint8_t m_bPreventLoopback[0x4]; // 0x28 bool
    std::uint8_t m_ProviderType[0x4]; // 0x2C attributeprovidertypes_t
    std::uint8_t m_CachedResults[0x20]; // 0x30 CUtlVector<CAttributeManager::cached_attribute_float_t>
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
    std::uint8_t m_vecCsViewPunchAngle[0xC]; // 0x48 QAngle
    std::uint8_t m_nCsViewPunchAngleTick[0x4]; // 0x54 GameTick_t
    std::uint8_t m_flCsViewPunchAngleTickRatio[0x8]; // 0x58 float32
    std::uint8_t m_PlayerFog[0x40]; // 0x60 C_fogplayerparams_t
    std::uint8_t m_hColorCorrectionCtrl[0x4]; // 0xA0 CHandle<C_ColorCorrection>
    std::uint8_t m_hViewEntity[0x4]; // 0xA4 CHandle<C_BaseEntity>
    std::uint8_t m_hTonemapController[0x8]; // 0xA8 CHandle<C_TonemapController2>
    std::uint8_t m_audio[0x78]; // 0xB0 audioparams_t
    std::uint8_t m_PostProcessingVolumes[0x18]; // 0x128 C_NetworkUtlVectorBase<CHandle<C_PostProcessingVolume>>
    std::uint8_t m_flOldPlayerZ[0x4]; // 0x140 float32
    std::uint8_t m_flOldPlayerViewOffsetZ[0x4]; // 0x144 float32
    std::uint8_t m_CurrentFog[0x68]; // 0x148 fogparams_t
    std::uint8_t m_hOldFogController[0x4]; // 0x1B0 CHandle<C_FogController>
    std::uint8_t m_bOverrideFogColor[0x8]; // 0x1B4 bool[5]
    std::uint8_t m_OverrideFogColor[0x14]; // 0x1BC Color[5]
    std::uint8_t m_bOverrideFogStartEnd[0x8]; // 0x1D0 bool[5]
    std::uint8_t m_fOverrideFogStart[0x14]; // 0x1D8 float32[5]
    std::uint8_t m_fOverrideFogEnd[0x14]; // 0x1EC float32[5]
    std::uint8_t m_hActivePostProcessingVolume[0x8]; // 0x200 CHandle<C_PostProcessingVolume>
    std::uint8_t m_angDemoViewAngles[0x90]; // 0x208 QAngle
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

struct C_BaseCSGrenade {
    static constexpr std::size_t size = 0x1FE0;
    std::uint8_t pad_0[0x1F20]; // 0x0
    std::uint8_t m_bClientPredictDelete[0x1]; // 0x1F20 bool
    std::uint8_t m_bRedraw[0x1]; // 0x1F21 bool
    std::uint8_t m_bIsHeldByPlayer[0x1]; // 0x1F22 bool
    std::uint8_t m_bPinPulled[0x1]; // 0x1F23 bool
    std::uint8_t m_bJumpThrow[0x1]; // 0x1F24 bool
    std::uint8_t m_bThrowAnimating[0x3]; // 0x1F25 bool
    std::uint8_t m_fThrowTime[0x8]; // 0x1F28 GameTime_t
    std::uint8_t m_flThrowStrength[0x78]; // 0x1F30 float32
    std::uint8_t m_fDropTime[0x4]; // 0x1FA8 GameTime_t
    std::uint8_t m_fPinPullTime[0x4]; // 0x1FAC GameTime_t
    std::uint8_t m_bJustPulledPin[0x4]; // 0x1FB0 bool
    std::uint8_t m_nNextHoldTick[0x4]; // 0x1FB4 GameTick_t
    std::uint8_t m_flNextHoldFrac[0x4]; // 0x1FB8 float32
    std::uint8_t m_hSwitchToWeaponAfterThrow[0x24]; // 0x1FBC CHandle<C_CSWeaponBase>
};

struct CFilterAttributeInt {
    static constexpr std::size_t size = 0x640;
    std::uint8_t pad_0[0x638]; // 0x0
    std::uint8_t m_sAttributeName[0x8]; // 0x638 CUtlSymbolLarge
};

struct CPointTemplate {
    static constexpr std::size_t size = 0x698;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_iszWorldName[0x8]; // 0x600 CUtlSymbolLarge
    std::uint8_t m_iszSource2EntityLumpName[0x8]; // 0x608 CUtlSymbolLarge
    std::uint8_t m_iszEntityFilterName[0x8]; // 0x610 CUtlSymbolLarge
    std::uint8_t m_flTimeoutInterval[0x4]; // 0x618 float32
    std::uint8_t m_bAsynchronouslySpawnEntities[0x4]; // 0x61C bool
    std::uint8_t m_clientOnlyEntityBehavior[0x4]; // 0x620 PointTemplateClientOnlyEntityBehavior_t
    std::uint8_t m_ownerSpawnGroupType[0x4]; // 0x624 PointTemplateOwnerSpawnGroupType_t
    std::uint8_t m_createdSpawnGroupHandles[0x18]; // 0x628 CUtlVector<uint32>
    std::uint8_t m_SpawnedEntityHandles[0x18]; // 0x640 CUtlVector<CEntityHandle>
    std::uint8_t m_ScriptSpawnCallback[0x8]; // 0x658 HSCRIPT
    std::uint8_t m_ScriptCallbackScope[0x8]; // 0x660 HSCRIPT
    std::uint8_t m_OnEntitySpawned[0x30]; // 0x668 CEntityOutputTemplate<CUtlVector<CEntityHandle>>
};

struct CPlayer_FlashlightServices {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CCSPlayerController {
    static constexpr std::size_t size = 0x980;
    std::uint8_t pad_0[0x818]; // 0x0
    std::uint8_t m_pInGameMoneyServices[0x8]; // 0x818 CCSPlayerController_InGameMoneyServices*
    std::uint8_t m_pInventoryServices[0x8]; // 0x820 CCSPlayerController_InventoryServices*
    std::uint8_t m_pActionTrackingServices[0x8]; // 0x828 CCSPlayerController_ActionTrackingServices*
    std::uint8_t m_pDamageServices[0x8]; // 0x830 CCSPlayerController_DamageServices*
    std::uint8_t m_iPing[0x4]; // 0x838 uint32
    std::uint8_t m_bHasCommunicationAbuseMute[0x4]; // 0x83C bool
    std::uint8_t m_uiCommunicationMuteFlags[0x8]; // 0x840 uint32
    std::uint8_t m_szCrosshairCodes[0x8]; // 0x848 CUtlSymbolLarge
    std::uint8_t m_iPendingTeamNum[0x4]; // 0x850 uint8
    std::uint8_t m_flForceTeamTime[0x4]; // 0x854 GameTime_t
    std::uint8_t m_iCompTeammateColor[0x4]; // 0x858 int32
    std::uint8_t m_bEverPlayedOnTeam[0x4]; // 0x85C bool
    std::uint8_t m_flPreviousForceJoinTeamTime[0x8]; // 0x860 GameTime_t
    std::uint8_t m_szClan[0x8]; // 0x868 CUtlSymbolLarge
    std::uint8_t m_unClanId32bit[0x8]; // 0x870 uint32
    std::uint8_t m_sSanitizedPlayerName[0x8]; // 0x878 CUtlString
    std::uint8_t m_sSanitizedClanTag[0x8]; // 0x880 CUtlString
    std::uint8_t m_iCoachingTeam[0x8]; // 0x888 int32
    std::uint8_t m_nPlayerDominated[0x8]; // 0x890 uint64
    std::uint8_t m_nPlayerDominatingMe[0x8]; // 0x898 uint64
    std::uint8_t m_iCompetitiveRanking[0x4]; // 0x8A0 int32
    std::uint8_t m_iCompetitiveWins[0x4]; // 0x8A4 int32
    std::uint8_t m_iCompetitiveRankType[0x4]; // 0x8A8 int8
    std::uint8_t m_iCompetitiveRankingPredicted_Win[0x4]; // 0x8AC int32
    std::uint8_t m_iCompetitiveRankingPredicted_Loss[0x4]; // 0x8B0 int32
    std::uint8_t m_iCompetitiveRankingPredicted_Tie[0x4]; // 0x8B4 int32
    std::uint8_t m_nEndMatchNextMapVote[0x4]; // 0x8B8 int32
    std::uint8_t m_unActiveQuestId[0x4]; // 0x8BC uint16
    std::uint8_t m_rtActiveMissionPeriod[0x4]; // 0x8C0 uint32
    std::uint8_t m_nQuestProgressReason[0x4]; // 0x8C4 QuestProgress::Reason
    std::uint8_t m_unPlayerTvControlFlags[0x30]; // 0x8C8 uint32
    std::uint8_t m_iDraftIndex[0x4]; // 0x8F8 int32
    std::uint8_t m_msQueuedModeDisconnectionTimestamp[0x4]; // 0x8FC uint32
    std::uint8_t m_uiAbandonRecordedReason[0x4]; // 0x900 uint32
    std::uint8_t m_eNetworkDisconnectionReason[0x4]; // 0x904 uint32
    std::uint8_t m_bCannotBeKicked[0x1]; // 0x908 bool
    std::uint8_t m_bEverFullyConnected[0x1]; // 0x909 bool
    std::uint8_t m_bAbandonAllowsSurrender[0x1]; // 0x90A bool
    std::uint8_t m_bAbandonOffersInstantSurrender[0x1]; // 0x90B bool
    std::uint8_t m_bDisconnection1MinWarningPrinted[0x1]; // 0x90C bool
    std::uint8_t m_bScoreReported[0x3]; // 0x90D bool
    std::uint8_t m_nDisconnectionTick[0x10]; // 0x910 int32
    std::uint8_t m_bControllingBot[0x1]; // 0x920 bool
    std::uint8_t m_bHasControlledBotThisRound[0x1]; // 0x921 bool
    std::uint8_t m_bHasBeenControlledByPlayerThisRound[0x2]; // 0x922 bool
    std::uint8_t m_nBotsControlledThisRound[0x4]; // 0x924 int32
    std::uint8_t m_bCanControlObservedBot[0x4]; // 0x928 bool
    std::uint8_t m_hPlayerPawn[0x4]; // 0x92C CHandle<C_CSPlayerPawn>
    std::uint8_t m_hObserverPawn[0x4]; // 0x930 CHandle<C_CSObserverPawn>
    std::uint8_t m_bPawnIsAlive[0x4]; // 0x934 bool
    std::uint8_t m_iPawnHealth[0x4]; // 0x938 uint32
    std::uint8_t m_iPawnArmor[0x4]; // 0x93C int32
    std::uint8_t m_bPawnHasDefuser[0x1]; // 0x940 bool
    std::uint8_t m_bPawnHasHelmet[0x1]; // 0x941 bool
    std::uint8_t m_nPawnCharacterDefIndex[0x2]; // 0x942 uint16
    std::uint8_t m_iPawnLifetimeStart[0x4]; // 0x944 int32
    std::uint8_t m_iPawnLifetimeEnd[0x4]; // 0x948 int32
    std::uint8_t m_iPawnBotDifficulty[0x4]; // 0x94C int32
    std::uint8_t m_hOriginalControllerOfCurrentPawn[0x4]; // 0x950 CHandle<CCSPlayerController>
    std::uint8_t m_iScore[0x4]; // 0x954 int32
    std::uint8_t m_recentKillQueue[0x8]; // 0x958 uint8[8]
    std::uint8_t m_nFirstKill[0x1]; // 0x960 uint8
    std::uint8_t m_nKillCount[0x1]; // 0x961 uint8
    std::uint8_t m_bMvpNoMusic[0x2]; // 0x962 bool
    std::uint8_t m_eMvpReason[0x4]; // 0x964 int32
    std::uint8_t m_iMusicKitID[0x4]; // 0x968 int32
    std::uint8_t m_iMusicKitMVPs[0x4]; // 0x96C int32
    std::uint8_t m_iMVPs[0x4]; // 0x970 int32
    std::uint8_t m_bIsPlayerNameDirty[0x8]; // 0x974 bool
    std::uint8_t m_bFireBulletsSeedSynchronized[0x4]; // 0x97C bool
};

struct C_CSGO_CounterTerroristRushIntroCamera {
    static constexpr std::size_t size = 0x690;
    std::uint8_t pad_0[0x690]; // 0x0
};

struct C_CSGO_TeamIntroCounterTerroristPosition {
    static constexpr std::size_t size = 0x1D18;
    std::uint8_t pad_0[0x1D18]; // 0x0
};

struct C_CSGO_PreviewModel {
    static constexpr std::size_t size = 0x18B8;
    std::uint8_t pad_0[0x1268]; // 0x0
    std::uint8_t m_defaultAnim[0x8]; // 0x1268 CUtlString
    std::uint8_t m_nDefaultAnimLoopMode[0x4]; // 0x1270 AnimLoopMode_t
    std::uint8_t m_flInitialModelScale[0x4]; // 0x1274 float32
    std::uint8_t m_sInitialWeaponState[0x640]; // 0x1278 CUtlString
};

struct C_CSGO_TeamSelectCharacterPosition {
    static constexpr std::size_t size = 0x1D18;
    std::uint8_t pad_0[0x1D18]; // 0x0
};

struct CPulseCell_Outflow_CycleOrdered__InstanceState_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_nNextIndex[0x4]; // 0x0 int32
};

struct CCSObservableElement {
    static constexpr std::size_t size = 0x630;
    std::uint8_t pad_0[0x618]; // 0x0
    std::uint8_t m_iszObservableModelEntity[0x8]; // 0x618 CUtlSymbolLarge
    std::uint8_t m_hObservableModelEntity[0x4]; // 0x620 CHandle<C_BaseEntity>
    std::uint8_t m_hObservableModelEntity2[0x4]; // 0x624 CHandle<C_BaseEntity>
    std::uint8_t m_nTeamFilter[0x8]; // 0x628 uint32
};

struct C_SoundEventAABBEntity {
    static constexpr std::size_t size = 0x6D8;
    std::uint8_t pad_0[0x6C0]; // 0x0
    std::uint8_t m_vMins[0xC]; // 0x6C0 Vector
    std::uint8_t m_vMaxs[0xC]; // 0x6CC Vector
};

struct CCSPlayer_MovementServices {
    static constexpr std::size_t size = 0xFE0;
    std::uint8_t pad_0[0x310]; // 0x0
    std::uint8_t m_AnimationState[0xE0]; // 0x310 CCSPlayerAnimationState
    std::uint8_t m_bUsingGroundTopologyOffset[0x4]; // 0x3F0 bool
    std::uint8_t m_flUsingGroundTopologyOffsetTransitionSmoothing[0x4]; // 0x3F4 float32
    std::uint8_t m_vecLadderNormal[0xC]; // 0x3F8 Vector
    std::uint8_t m_nLadderSurfacePropIndex[0x4]; // 0x404 int32
    std::uint8_t m_bDucked[0x4]; // 0x408 bool
    std::uint8_t m_flDuckAmount[0x4]; // 0x40C float32
    std::uint8_t m_flDuckSpeed[0x4]; // 0x410 float32
    std::uint8_t m_bDuckOverride[0x1]; // 0x414 bool
    std::uint8_t m_bDesiresDuck[0x1]; // 0x415 bool
    std::uint8_t m_bDucking[0x2]; // 0x416 bool
    std::uint8_t m_flDuckRootOffset[0x4]; // 0x418 float32
    std::uint8_t m_flDuckViewOffset[0x4]; // 0x41C float32
    std::uint8_t m_flLastDuckTime[0x4]; // 0x420 float32
    std::uint8_t m_flBombPlantViewOffset[0xC]; // 0x424 float32
    std::uint8_t m_vecLastPositionAtFullCrouchSpeed[0x8]; // 0x430 Vector2D
    std::uint8_t m_duckUntilOnGround[0x1]; // 0x438 bool
    std::uint8_t m_bHasWalkMovedSinceLastJump[0x1]; // 0x439 bool
    std::uint8_t m_bInStuckTest[0x20E]; // 0x43A bool
    std::uint8_t m_nTraceCount[0x4]; // 0x648 int32
    std::uint8_t m_StuckLast[0x4]; // 0x64C int32
    std::uint8_t m_bSpeedCropped[0x4]; // 0x650 bool
    std::uint8_t m_nOldWaterLevel[0x4]; // 0x654 int32
    std::uint8_t m_flWaterEntryTime[0x4]; // 0x658 float32
    std::uint8_t m_vecForward[0xC]; // 0x65C Vector
    std::uint8_t m_vecLeft[0xC]; // 0x668 Vector
    std::uint8_t m_vecUp[0xC]; // 0x674 Vector
    std::uint8_t m_nGameCodeHasMovedPlayerAfterCommand[0x4]; // 0x680 int32
    std::uint8_t m_fStashGrenadeParameterWhen[0x4]; // 0x684 GameTime_t
    std::uint8_t m_bUseFrictionStashedSpeed[0x4]; // 0x688 bool
    std::uint8_t m_flUseFrictionStashedSpeedUntilFrac[0x4]; // 0x68C float32
    std::uint8_t m_flFrictionStashedSpeed[0x4]; // 0x690 float32
    std::uint8_t m_flStamina[0x4]; // 0x694 float32
    std::uint8_t m_flHeightAtJumpStart[0x4]; // 0x698 float32
    std::uint8_t m_flMaxJumpHeightThisJump[0x4]; // 0x69C float32
    std::uint8_t m_flMaxJumpHeightLastJump[0x4]; // 0x6A0 float32
    std::uint8_t m_flStaminaAtJumpStart[0x4]; // 0x6A4 float32
    std::uint8_t m_flVelMulAtJumpStart[0x4]; // 0x6A8 float32
    std::uint8_t m_flAccumulatedJumpError[0x4]; // 0x6AC float32
    std::uint8_t m_LegacyJump[0x18]; // 0x6B0 CCSPlayerLegacyJump
    std::uint8_t m_ModernJump[0x38]; // 0x6C8 CCSPlayerModernJump
    std::uint8_t m_nLastJumpTick[0x4]; // 0x700 GameTick_t
    std::uint8_t m_flLastJumpFrac[0x4]; // 0x704 float32
    std::uint8_t m_flLastJumpVelocityZ[0x4]; // 0x708 float32
    std::uint8_t m_bJumpApexPending[0x4]; // 0x70C bool
    std::uint8_t m_flTicksSinceLastSurfingDetected[0x4]; // 0x710 float32
    std::uint8_t m_bWasSurfing[0x90]; // 0x714 bool
    std::uint8_t m_vecWalkWishVel[0x82C]; // 0x7A4 Vector2D
    std::uint8_t m_bHasEverProcessedCommand[0x10]; // 0xFD0 bool
};

struct SellbackPurchaseEntry_t {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_unDefIdx[0x4]; // 0x30 uint16
    std::uint8_t m_nCost[0x4]; // 0x34 int32
    std::uint8_t m_nPrevArmor[0x4]; // 0x38 int32
    std::uint8_t m_bPrevHelmet[0x4]; // 0x3C bool
    std::uint8_t m_hItem[0x8]; // 0x40 CEntityHandle
};

struct C_TintController {
    static constexpr std::size_t size = 0x618;
    std::uint8_t pad_0[0x618]; // 0x0
};

struct C_WeaponBaseItem {
    static constexpr std::size_t size = 0x1F30;
    std::uint8_t pad_0[0x1F20]; // 0x0
    std::uint8_t m_bSequenceInProgress[0x1]; // 0x1F20 bool
    std::uint8_t m_bRedraw[0xF]; // 0x1F21 bool
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
    std::uint8_t m_RelativeTransforms[0x18]; // 0x8 C_NetworkUtlVectorBase<CTransform>
    std::uint8_t m_hOwner[0x4]; // 0x20 CHandle<C_BaseEntity>
    std::uint8_t m_bSetFromDebugHistory[0x24]; // 0x24 bool
};

struct CPropDataComponent {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_flDmgModBullet[0x4]; // 0x10 float32
    std::uint8_t m_flDmgModClub[0x4]; // 0x14 float32
    std::uint8_t m_flDmgModExplosive[0x4]; // 0x18 float32
    std::uint8_t m_flDmgModFire[0x4]; // 0x1C float32
    std::uint8_t m_iszPhysicsDamageTableName[0x8]; // 0x20 CUtlSymbolLarge
    std::uint8_t m_iszBasePropData[0x8]; // 0x28 CUtlSymbolLarge
    std::uint8_t m_nInteractions[0x4]; // 0x30 int32
    std::uint8_t m_bSpawnMotionDisabled[0x4]; // 0x34 bool
    std::uint8_t m_nDisableTakePhysicsDamageSpawnFlag[0x4]; // 0x38 int32
    std::uint8_t m_nMotionDisabledSpawnFlag[0x4]; // 0x3C int32
};

struct CPulseCell_LimitCount__InstanceState_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_nCurrentCount[0x4]; // 0x0 int32
};

struct C_WeaponCZ75a {
    static constexpr std::size_t size = 0x1F60;
    std::uint8_t pad_0[0x1F50]; // 0x0
    std::uint8_t m_bMagazineRemoved[0x10]; // 0x1F50 bool
};

struct C_DynamicLight {
    static constexpr std::size_t size = 0x10C0;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t m_Flags[0x1]; // 0x1098 uint8
    std::uint8_t m_LightStyle[0x3]; // 0x1099 uint8
    std::uint8_t m_Radius[0x4]; // 0x109C float32
    std::uint8_t m_Exponent[0x4]; // 0x10A0 int32
    std::uint8_t m_InnerAngle[0x4]; // 0x10A4 float32
    std::uint8_t m_OuterAngle[0x4]; // 0x10A8 float32
    std::uint8_t m_SpotRadius[0x14]; // 0x10AC float32
};

struct CCS2PawnGraphController {
    static constexpr std::size_t size = 0x578;
    std::uint8_t pad_0[0x2D8]; // 0x0
    std::uint8_t m_bIsDefusing[0x18]; // 0x2D8 CAnimGraph2ParamOptionalRef<bool>
    std::uint8_t m_moveType[0x18]; // 0x2F0 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_moveDirectionID[0x18]; // 0x308 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_flMoveSpeedX[0x18]; // 0x320 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_flMoveSpeedY[0x18]; // 0x338 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_flMoveSpeedHorizontal[0x18]; // 0x350 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_flPreviousMoveSpeedHorizontal[0x18]; // 0x368 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_flCrouchAmount[0x18]; // 0x380 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_bIsWalking[0x18]; // 0x398 CAnimGraph2ParamOptionalRef<bool>
    std::uint8_t m_flWeaponDropAmount[0x18]; // 0x3B0 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_groundAction[0x18]; // 0x3C8 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_groundActionDirectionID[0x18]; // 0x3E0 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_flGroundTurnAngleOrVelocity[0x18]; // 0x3F8 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_flLadderCycle[0x18]; // 0x410 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_flLadderYaw[0x18]; // 0x428 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_flLadderYawBackwards[0x18]; // 0x440 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_airAction[0x18]; // 0x458 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_flAirHeightAboveGround[0x18]; // 0x470 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_leftFootTarget[0x18]; // 0x488 CAnimGraph2ParamOptionalRef<CNmTarget>
    std::uint8_t m_rightFootTarget[0x18]; // 0x4A0 CAnimGraph2ParamOptionalRef<CNmTarget>
    std::uint8_t m_flFlashedAmount[0x18]; // 0x4B8 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_flAimPitchAngle[0x18]; // 0x4D0 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_flAimYawAngle[0x18]; // 0x4E8 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_flinchHead[0x18]; // 0x500 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_flinchHeadRestart[0x18]; // 0x518 CAnimGraph2ParamOptionalRef<bool>
    std::uint8_t m_flinchBody[0x18]; // 0x530 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_flinchBodyRestart[0x18]; // 0x548 CAnimGraph2ParamOptionalRef<bool>
    std::uint8_t m_flinchIsOnFire[0x18]; // 0x560 CAnimGraph2ParamOptionalRef<bool>
};

struct EngineCountdownTimer {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_duration[0x4]; // 0x8 float32
    std::uint8_t m_timestamp[0x4]; // 0xC float32
    std::uint8_t m_timescale[0x8]; // 0x10 float32
};

struct C_SoundEventSphereEntity {
    static constexpr std::size_t size = 0x6C8;
    std::uint8_t pad_0[0x6C0]; // 0x0
    std::uint8_t m_flRadius[0x8]; // 0x6C0 float32
};

struct CCSPlayerController_DamageServices {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t m_nSendUpdate[0x8]; // 0x40 int32
    std::uint8_t m_DamageList[0x68]; // 0x48 C_UtlVectorEmbeddedNetworkVar<CDamageRecord>
};

struct C_CSGO_TeamPreviewModel {
    static constexpr std::size_t size = 0x37D0;
    std::uint8_t pad_0[0x37D0]; // 0x0
};

struct C_TonemapController2Alias_env_tonemap_controller2 {
    static constexpr std::size_t size = 0x618;
    std::uint8_t pad_0[0x618]; // 0x0
};

struct C_Inferno {
    static constexpr std::size_t size = 0x86A0;
    std::uint8_t pad_0[0x10D8]; // 0x0
    std::uint8_t m_nfxFireDamageEffect[0x8]; // 0x10D8 ParticleIndex_t
    std::uint8_t m_hInfernoPointsSnapshot[0x8]; // 0x10E0 CStrongHandle<InfoForResourceTypeIParticleSnapshot>
    std::uint8_t m_hInfernoFillerPointsSnapshot[0x8]; // 0x10E8 CStrongHandle<InfoForResourceTypeIParticleSnapshot>
    std::uint8_t m_hInfernoOutlinePointsSnapshot[0x8]; // 0x10F0 CStrongHandle<InfoForResourceTypeIParticleSnapshot>
    std::uint8_t m_hInfernoClimbingOutlinePointsSnapshot[0x8]; // 0x10F8 CStrongHandle<InfoForResourceTypeIParticleSnapshot>
    std::uint8_t m_hInfernoDecalsSnapshot[0x8]; // 0x1100 CStrongHandle<InfoForResourceTypeIParticleSnapshot>
    std::uint8_t m_firePositions[0x300]; // 0x1108 VectorWS[64]
    std::uint8_t m_fireParentPositions[0x300]; // 0x1408 VectorWS[64]
    std::uint8_t m_bFireIsBurning[0x40]; // 0x1708 bool[64]
    std::uint8_t m_BurnNormal[0x300]; // 0x1748 Vector[64]
    std::uint8_t m_fireCount[0x4]; // 0x1A48 int32
    std::uint8_t m_nInfernoType[0x4]; // 0x1A4C int32
    std::uint8_t m_nFireLifetime[0x4]; // 0x1A50 float32
    std::uint8_t m_bInPostEffectTime[0x4]; // 0x1A54 bool
    std::uint8_t m_lastFireCount[0x4]; // 0x1A58 int32
    std::uint8_t m_nFireEffectTickBegin[0x6C04]; // 0x1A5C int32
    std::uint8_t m_drawableCount[0x4]; // 0x8660 int32
    std::uint8_t m_blosCheck[0x4]; // 0x8664 bool
    std::uint8_t m_nlosperiod[0x4]; // 0x8668 int32
    std::uint8_t m_maxFireHalfWidth[0x4]; // 0x866C float32
    std::uint8_t m_maxFireHeight[0x4]; // 0x8670 float32
    std::uint8_t m_minBounds[0xC]; // 0x8674 VectorWS
    std::uint8_t m_maxBounds[0xC]; // 0x8680 VectorWS
    std::uint8_t m_flLastGrassBurnThink[0x14]; // 0x868C float32
};

struct CFilterLOS {
    static constexpr std::size_t size = 0x638;
    std::uint8_t pad_0[0x638]; // 0x0
};

struct CPointOrient {
    static constexpr std::size_t size = 0x620;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_iszSpawnTargetName[0x8]; // 0x600 CUtlSymbolLarge
    std::uint8_t m_hTarget[0x4]; // 0x608 CHandle<C_BaseEntity>
    std::uint8_t m_bActive[0x4]; // 0x60C bool
    std::uint8_t m_nGoalDirection[0x4]; // 0x610 PointOrientGoalDirectionType_t
    std::uint8_t m_nConstraint[0x4]; // 0x614 PointOrientConstraint_t
    std::uint8_t m_flMaxTurnRate[0x4]; // 0x618 float32
    std::uint8_t m_flLastGameTime[0x4]; // 0x61C GameTime_t
};

struct C_GlobalLight {
    static constexpr std::size_t size = 0xAF0;
    std::uint8_t pad_0[0xAC0]; // 0x0
    std::uint8_t m_WindClothForceHandle[0x30]; // 0xAC0 uint16
};

struct C_EnvWindClientside {
    static constexpr std::size_t size = 0x6F8;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_EnvWindShared[0xF8]; // 0x600 C_EnvWindShared
};

struct sky3dparams_t {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t scale[0x4]; // 0x8 int16
    std::uint8_t origin[0xC]; // 0xC VectorWS
    std::uint8_t bClip3DSkyBoxNearToWorldFar[0x4]; // 0x18 bool
    std::uint8_t flClip3DSkyBoxNearToWorldFarOffset[0x4]; // 0x1C float32
    std::uint8_t fog[0x68]; // 0x20 fogparams_t
    std::uint8_t m_nWorldGroupID[0x8]; // 0x88 WorldGroupId_t
};

struct C_FlashbangProjectile {
    static constexpr std::size_t size = 0x1348;
    std::uint8_t pad_0[0x1348]; // 0x0
};

struct C_SoundEventConeEntity {
    static constexpr std::size_t size = 0x6D8;
    std::uint8_t pad_0[0x6C0]; // 0x0
    std::uint8_t m_flEmitterAngle[0x4]; // 0x6C0 float32
    std::uint8_t m_flSweetSpotAngle[0x4]; // 0x6C4 float32
    std::uint8_t m_flAttenMin[0x4]; // 0x6C8 float32
    std::uint8_t m_flAttenMax[0x4]; // 0x6CC float32
    std::uint8_t m_iszParameterName[0x8]; // 0x6D0 CUtlSymbolLarge
};

struct CDestructiblePartsComponent {
    static constexpr std::size_t size = 0x70;
    std::uint8_t __m_pChainEntity[0x48]; // 0x0 CNetworkVarChainer
    std::uint8_t m_vecDamageTakenByHitGroup[0x18]; // 0x48 CUtlVector<uint16>
    std::uint8_t m_hOwner[0x8]; // 0x60 CHandle<C_BaseModelEntity>
    std::uint8_t m_pAnimGraphDestructibleGraphController[0x8]; // 0x68 CAnimGraphControllerPtr
};

struct C_WeaponP90 {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F50]; // 0x0
};

struct C_EnvWind {
    static constexpr std::size_t size = 0x6F8;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_EnvWindShared[0xF8]; // 0x600 C_EnvWindShared
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
    std::uint8_t m_vBoxMins[0xC]; // 0x600 Vector
    std::uint8_t m_vBoxMaxs[0xC]; // 0x60C Vector
    std::uint8_t m_flLerpDistance[0x8]; // 0x618 float32
};

struct CCSPlayerController_ActionTrackingServices {
    static constexpr std::size_t size = 0x138;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t m_perRoundStats[0x68]; // 0x40 C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
    std::uint8_t m_matchStats[0x80]; // 0xA8 CSMatchStats_t
    std::uint8_t m_iNumRoundKills[0x4]; // 0x128 int32
    std::uint8_t m_iNumRoundKillsHeadshots[0x4]; // 0x12C int32
    std::uint8_t m_flTotalRoundDamageDealt[0x8]; // 0x130 float32
};

struct CBodyComponentBaseAnimGraph {
    static constexpr std::size_t size = 0xBB0;
    std::uint8_t pad_0[0x510]; // 0x0
    std::uint8_t m_animationController[0x6A0]; // 0x510 CBaseAnimGraphController
};

struct C_CSGO_PreviewModelAlias_csgo_item_previewmodel {
    static constexpr std::size_t size = 0x18B8;
    std::uint8_t pad_0[0x18B8]; // 0x0
};

struct C_InfoInstructorHintHostageRescueZone {
    static constexpr std::size_t size = 0x600;
    std::uint8_t pad_0[0x600]; // 0x0
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

struct C_TriggerBuoyancy {
    static constexpr std::size_t size = 0x12A0;
    std::uint8_t pad_0[0x1180]; // 0x0
    std::uint8_t m_BuoyancyHelper[0x118]; // 0x1180 CBuoyancyHelper
    std::uint8_t m_flFluidDensity[0x8]; // 0x1298 float32
};

struct CPlayer_MovementServices_Humanoid {
    static constexpr std::size_t size = 0x288;
    std::uint8_t pad_0[0x258]; // 0x0
    std::uint8_t m_flStepSoundTime[0x4]; // 0x258 float32
    std::uint8_t m_flFallVelocity[0x4]; // 0x25C float32
    std::uint8_t m_groundNormal[0xC]; // 0x260 Vector
    std::uint8_t m_flSurfaceFriction[0x4]; // 0x26C float32
    std::uint8_t m_surfaceProps[0x10]; // 0x270 CUtlStringToken
    std::uint8_t m_nStepside[0x8]; // 0x280 int32
};

struct CPulseCell_IsRequirementValid__Criteria_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t m_bIsValid[0x1]; // 0x0 bool
};

struct C_WeaponTec9 {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F50]; // 0x0
};

struct C_PhysPropClientside {
    static constexpr std::size_t size = 0x1410;
    std::uint8_t pad_0[0x13E0]; // 0x0
    std::uint8_t m_flTouchDelta[0x4]; // 0x13E0 GameTime_t
    std::uint8_t m_fDeathTime[0x4]; // 0x13E4 GameTime_t
    std::uint8_t m_vecDamagePosition[0xC]; // 0x13E8 VectorWS
    std::uint8_t m_vecDamageDirection[0xC]; // 0x13F4 Vector
    std::uint8_t m_nDamageType[0x10]; // 0x1400 DamageTypes_t
};

struct C_BaseDoor {
    static constexpr std::size_t size = 0x10A0;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t m_bIsUsable[0x8]; // 0x1098 bool
};

struct CSMatchStats_t {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x68]; // 0x0
    std::uint8_t m_iEnemy5Ks[0x4]; // 0x68 int32
    std::uint8_t m_iEnemy4Ks[0x4]; // 0x6C int32
    std::uint8_t m_iEnemy3Ks[0x4]; // 0x70 int32
    std::uint8_t m_iEnemyKnifeKills[0x4]; // 0x74 int32
    std::uint8_t m_iEnemyTaserKills[0x8]; // 0x78 int32
};

struct EntityRenderAttribute_t {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_ID[0x4]; // 0x30 CUtlStringToken
    std::uint8_t m_Values[0x14]; // 0x34 Vector4D
};

struct CPulseCell_Inflow_ObservableVariableListener {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t m_nBlackboardReference[0x2]; // 0x80 PulseRuntimeBlackboardReferenceIndex_t
    std::uint8_t m_bSelfReference[0x6]; // 0x82 bool
};

struct CCSGO_RushIntroTerroristPosition {
    static constexpr std::size_t size = 0x1D18;
    std::uint8_t pad_0[0x1D18]; // 0x0
};

struct CHostageRescueZone {
    static constexpr std::size_t size = 0x1198;
    std::uint8_t pad_0[0x1198]; // 0x0
};

struct CModelState {
    static constexpr std::size_t size = 0x2B0;
    std::uint8_t pad_0[0xA0]; // 0x0
    std::uint8_t m_hModel[0x8]; // 0xA0 CStrongHandle<InfoForResourceTypeCModel>
    std::uint8_t m_ModelName[0x38]; // 0xA8 CUtlSymbolLarge
    std::uint8_t m_pVPhysicsAggregate[0x8]; // 0xE0 IPhysAggregateInstance*
    std::uint8_t m_flRootBoneOffset_x[0x4]; // 0xE8 float32
    std::uint8_t m_flRootBoneOffset_y[0x4]; // 0xEC float32
    std::uint8_t m_flRootBoneOffset_z[0x4]; // 0xF0 float32
    std::uint8_t m_nRootBoneOffsetResetSerialNumber[0x1C]; // 0xF4 uint8
    std::uint8_t m_bClientClothCreationSuppressed[0xF0]; // 0x110 bool
    std::uint8_t m_nAnimStateNoInterpSerialNumber[0x8]; // 0x200 uint8
    std::uint8_t m_MeshGroupMask[0x50]; // 0x208 uint64
    std::uint8_t m_nBodyGroupChoices[0x4A]; // 0x258 C_NetworkUtlVectorBase<int32>
    std::uint8_t m_nIdealMotionType[0x1]; // 0x2A2 int8
    std::uint8_t m_nForceLOD[0x1]; // 0x2A3 int8
    std::uint8_t m_nClothUpdateFlags[0xC]; // 0x2A4 int8
};

struct CPulseCell_LerpCameraSettings__CursorState_t {
    static constexpr std::size_t size = 0x2C;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_hCamera[0x4]; // 0x8 CHandle<C_PointCamera>
    std::uint8_t m_OverlaidStart[0x10]; // 0xC PointCameraSettings_t
    std::uint8_t m_OverlaidEnd[0x10]; // 0x1C PointCameraSettings_t
};

struct CPulseCell_Outflow_CycleOrdered {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Outputs[0x18]; // 0x48 CUtlVector<CPulse_OutflowConnection>
};

struct C_CSWeaponBaseGun {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F20]; // 0x0
    std::uint8_t m_zoomLevel[0x4]; // 0x1F20 int32
    std::uint8_t m_iBurstShotsRemaining[0x4]; // 0x1F24 int32
    std::uint8_t m_iSilencerBodygroup[0x10]; // 0x1F28 int32
    std::uint8_t m_silencedModelIndex[0x4]; // 0x1F38 int32
    std::uint8_t m_inPrecache[0x1]; // 0x1F3C bool
    std::uint8_t m_bNeedsBoltAction[0x3]; // 0x1F3D bool
    std::uint8_t m_nRevolverCylinderIdx[0x10]; // 0x1F40 int32
};

struct C_CSGameRulesProxy {
    static constexpr std::size_t size = 0x608;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_pGameRules[0x8]; // 0x600 C_CSGameRules*
};

struct CCollisionProperty {
    static constexpr std::size_t size = 0xB8;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_collisionAttribute[0x30]; // 0x10 VPhysicsCollisionAttribute_t
    std::uint8_t m_vecMins[0xC]; // 0x40 Vector
    std::uint8_t m_vecMaxs[0xE]; // 0x4C Vector
    std::uint8_t m_usSolidFlags[0x1]; // 0x5A uint8
    std::uint8_t m_nSolidType[0x1]; // 0x5B SolidType_t
    std::uint8_t m_triggerBloat[0x1]; // 0x5C uint8
    std::uint8_t m_nSurroundType[0x1]; // 0x5D SurroundingBoundsType_t
    std::uint8_t m_CollisionGroup[0x1]; // 0x5E uint8
    std::uint8_t m_nEnablePhysics[0x1]; // 0x5F uint8
    std::uint8_t m_flBoundingRadius[0x4]; // 0x60 float32
    std::uint8_t m_vecSpecifiedSurroundingMins[0xC]; // 0x64 Vector
    std::uint8_t m_vecSpecifiedSurroundingMaxs[0xC]; // 0x70 Vector
    std::uint8_t m_vecSurroundingMaxs[0xC]; // 0x7C Vector
    std::uint8_t m_vecSurroundingMins[0xC]; // 0x88 Vector
    std::uint8_t m_vCapsuleCenter1[0xC]; // 0x94 Vector
    std::uint8_t m_vCapsuleCenter2[0xC]; // 0xA0 Vector
    std::uint8_t m_flCapsuleRadius[0xC]; // 0xAC float32
};

struct C_WeaponP250 {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F50]; // 0x0
};

struct CFilterMassGreater {
    static constexpr std::size_t size = 0x640;
    std::uint8_t pad_0[0x638]; // 0x0
    std::uint8_t m_fFilterMass[0x8]; // 0x638 float32
};

struct C_ShatterGlassShardPhysics {
    static constexpr std::size_t size = 0x1120;
    std::uint8_t pad_0[0x10A0]; // 0x0
    std::uint8_t m_ShardDesc[0x80]; // 0x10A0 shard_model_desc_t
};

struct C_EntityDissolve {
    static constexpr std::size_t size = 0x10E0;
    std::uint8_t pad_0[0x10A0]; // 0x0
    std::uint8_t m_flStartTime[0x4]; // 0x10A0 GameTime_t
    std::uint8_t m_flFadeInStart[0x4]; // 0x10A4 float32
    std::uint8_t m_flFadeInLength[0x4]; // 0x10A8 float32
    std::uint8_t m_flFadeOutModelStart[0x4]; // 0x10AC float32
    std::uint8_t m_flFadeOutModelLength[0x4]; // 0x10B0 float32
    std::uint8_t m_flFadeOutStart[0x4]; // 0x10B4 float32
    std::uint8_t m_flFadeOutLength[0x4]; // 0x10B8 float32
    std::uint8_t m_nDissolveType[0x4]; // 0x10BC EntityDissolveType_t
    std::uint8_t m_nMagnitude[0x4]; // 0x10C0 uint32
    std::uint8_t m_vDissolverOrigin[0xC]; // 0x10C4 VectorWS
    std::uint8_t m_flNextSparkTime[0x4]; // 0x10D0 GameTime_t
    std::uint8_t m_bCoreExplode[0x1]; // 0x10D4 bool
    std::uint8_t m_bLinkedToServerEnt[0xB]; // 0x10D5 bool
};

struct C_SoundOpvarSetOBBEntity {
    static constexpr std::size_t size = 0x620;
    std::uint8_t pad_0[0x620]; // 0x0
};

struct CCSCustomPlayerCamera {
    static constexpr std::size_t size = 0x640;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_hPawn[0x4]; // 0x600 CHandle<C_CSPlayerPawnBase>
    std::uint8_t m_nCameraMode[0x4]; // 0x604 CustomCameraMode_t
    std::uint8_t m_hFollowEntity[0x4]; // 0x608 CHandle<C_BaseEntity>
    std::uint8_t m_bFollowEyes[0x4]; // 0x60C bool
    std::uint8_t m_vecFollowOffset[0xC]; // 0x610 Vector
    std::uint8_t m_vecCameraOffset[0xC]; // 0x61C Vector
    std::uint8_t m_bClipCameraOffset[0x4]; // 0x628 bool
    std::uint8_t m_flCameraOffsetReturnStrength[0x14]; // 0x62C float32
};

struct CCSGameModeRules_ArmsRace {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_WeaponSequence[0x18]; // 0x30 C_NetworkUtlVectorBase<CUtlString>
};

struct C_FuncMonitor {
    static constexpr std::size_t size = 0x1510;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t m_targetCamera[0x8]; // 0x1098 CUtlString
    std::uint8_t m_nResolutionEnum[0x4]; // 0x10A0 int32
    std::uint8_t m_bRenderShadows[0x1]; // 0x10A4 bool
    std::uint8_t m_bUseUniqueColorTarget[0x3]; // 0x10A5 bool
    std::uint8_t m_brushModelName[0x8]; // 0x10A8 CUtlString
    std::uint8_t m_hTargetCamera[0x4]; // 0x10B0 CHandle<C_BaseEntity>
    std::uint8_t m_bEnabled[0x1]; // 0x10B4 bool
    std::uint8_t m_bDraw3DSkybox[0x45B]; // 0x10B5 bool
};

struct C_ClientRagdoll {
    static constexpr std::size_t size = 0x1300;
    std::uint8_t pad_0[0x1268]; // 0x0
    std::uint8_t m_bFadeOut[0x1]; // 0x1268 bool
    std::uint8_t m_bImportant[0x3]; // 0x1269 bool
    std::uint8_t m_flEffectTime[0x4]; // 0x126C GameTime_t
    std::uint8_t m_gibDespawnTime[0x4]; // 0x1270 GameTime_t
    std::uint8_t m_iCurrentFriction[0x4]; // 0x1274 int32
    std::uint8_t m_iMinFriction[0x4]; // 0x1278 int32
    std::uint8_t m_iMaxFriction[0x4]; // 0x127C int32
    std::uint8_t m_iFrictionAnimState[0x4]; // 0x1280 int32
    std::uint8_t m_bReleaseRagdoll[0x1]; // 0x1284 bool
    std::uint8_t m_iEyeAttachment[0x1]; // 0x1285 AttachmentHandle_t
    std::uint8_t m_bFadingOut[0x2]; // 0x1286 bool
    std::uint8_t m_flScaleEnd[0x28]; // 0x1288 float32[10]
    std::uint8_t m_flScaleTimeStart[0x28]; // 0x12B0 GameTime_t[10]
    std::uint8_t m_flScaleTimeEnd[0x28]; // 0x12D8 GameTime_t[10]
};

struct PulseSelectorOutflowList_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_Outflows[0x18]; // 0x0 CUtlVector<OutflowWithRequirements_t>
};

struct C_BaseModelEntity__BodyGroupRequest_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_uRequestID[0x4]; // 0x0 uint32
    std::uint8_t m_nGroupName[0x4]; // 0x4 CUtlStringToken
    std::uint8_t m_sChoiceName[0x8]; // 0x8 CGlobalSymbol
    std::uint8_t m_nGroup[0x4]; // 0x10 int32
    std::uint8_t m_uChoice[0x2]; // 0x14 uint16
    std::uint8_t m_uRefCount[0x2]; // 0x16 uint16
};

struct CPulseCell_PlaySequence__CursorState_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_hTarget[0x4]; // 0x0 CHandle<CBaseAnimGraph>
};

struct CBodyComponentSkeletonInstance {
    static constexpr std::size_t size = 0x510;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t m_skeletonInstance[0x490]; // 0x80 CSkeletonInstance
};

struct C_CS2WeaponModuleBase {
    static constexpr std::size_t size = 0x1270;
    std::uint8_t pad_0[0x1270]; // 0x0
};

struct C_CSGO_TeamPreviewCharacterPosition {
    static constexpr std::size_t size = 0x1D18;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_nVariant[0x4]; // 0x600 int32
    std::uint8_t m_nRandom[0x4]; // 0x604 int32
    std::uint8_t m_nOrdinal[0x8]; // 0x608 int32
    std::uint8_t m_sWeaponName[0x8]; // 0x610 CUtlString
    std::uint8_t m_xuid[0x8]; // 0x618 uint64
    std::uint8_t m_agentItem[0x5B0]; // 0x620 C_EconItemView
    std::uint8_t m_glovesItem[0x5B0]; // 0xBD0 C_EconItemView
    std::uint8_t m_weaponItem[0x5B0]; // 0x1180 C_EconItemView
    std::uint8_t m_petItem[0x5E8]; // 0x1730 C_EconItemView
};

struct C_SmokeGrenadeProjectile {
    static constexpr std::size_t size = 0x1500;
    std::uint8_t pad_0[0x1360]; // 0x0
    std::uint8_t m_nSmokeEffectTickBegin[0x4]; // 0x1360 int32
    std::uint8_t m_bDidSmokeEffect[0x4]; // 0x1364 bool
    std::uint8_t m_nRandomSeed[0x4]; // 0x1368 int32
    std::uint8_t m_vSmokeColor[0xC]; // 0x136C Vector
    std::uint8_t m_vSmokeDetonationPos[0x10]; // 0x1378 VectorWS
    std::uint8_t m_VoxelFrameData[0x18]; // 0x1388 C_NetworkUtlVectorBase<uint8>
    std::uint8_t m_nVoxelFrameDataSize[0x4]; // 0x13A0 int32
    std::uint8_t m_nVoxelUpdate[0x4]; // 0x13A4 int32
    std::uint8_t m_nSmokeLightProbeRegen[0x1]; // 0x13A8 uint8
    std::uint8_t m_bSmokeVolumeDataReceived[0x1]; // 0x13A9 bool
    std::uint8_t m_bSmokeEffectSpawned[0x156]; // 0x13AA bool
};

struct CScriptComponent {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_scriptClassName[0x8]; // 0x30 CUtlSymbolLarge
};

struct CCSPlayer_BuyServices {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_vecSellbackPurchaseEntries[0x68]; // 0x48 C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
};

struct C_SkyCameraVolumeTarget {
    static constexpr std::size_t size = 0x610;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_nSkyboxScale[0x8]; // 0x600 int16
    std::uint8_t m_hSkyMaterial[0x8]; // 0x608 CStrongHandle<InfoForResourceTypeIMaterial2>
};

struct C_PortraitWorldCallbackHandler {
    static constexpr std::size_t size = 0x608;
    std::uint8_t pad_0[0x608]; // 0x0
};

struct C_DynamicProp {
    static constexpr std::size_t size = 0x14B0;
    std::uint8_t pad_0[0x13E0]; // 0x0
    std::uint8_t m_bGraphControllerEnabled[0x1]; // 0x13E0 bool
    std::uint8_t m_bUseHitboxesForRenderBox[0x1]; // 0x13E1 bool
    std::uint8_t m_bUseAnimGraph[0x6]; // 0x13E2 bool
    std::uint8_t m_pOutputAnimBegun[0x18]; // 0x13E8 CEntityIOOutput
    std::uint8_t m_pOutputAnimOver[0x18]; // 0x1400 CEntityIOOutput
    std::uint8_t m_pOutputAnimLoopCycleOver[0x18]; // 0x1418 CEntityIOOutput
    std::uint8_t m_OnAnimReachedStart[0x18]; // 0x1430 CEntityIOOutput
    std::uint8_t m_OnAnimReachedEnd[0x18]; // 0x1448 CEntityIOOutput
    std::uint8_t m_iszIdleAnim[0x8]; // 0x1460 CUtlSymbolLarge
    std::uint8_t m_nIdleAnimLoopMode[0x4]; // 0x1468 AnimLoopMode_t
    std::uint8_t m_bRandomizeCycle[0x1]; // 0x146C bool
    std::uint8_t m_bStartDisabled[0x1]; // 0x146D bool
    std::uint8_t m_bFiredStartEndOutput[0x1]; // 0x146E bool
    std::uint8_t m_bForceNpcExclude[0x1]; // 0x146F bool
    std::uint8_t m_bCreateMovableSurfaceGraph[0x1]; // 0x1470 bool
    std::uint8_t m_bCreateNonSolid[0x1]; // 0x1471 bool
    std::uint8_t m_bIsOverrideProp[0x2]; // 0x1472 bool
    std::uint8_t m_iInitialGlowState[0x4]; // 0x1474 int32
    std::uint8_t m_nGlowRange[0x4]; // 0x1478 int32
    std::uint8_t m_nGlowRangeMin[0x4]; // 0x147C int32
    std::uint8_t m_glowColor[0x4]; // 0x1480 Color
    std::uint8_t m_nGlowTeam[0x4]; // 0x1484 int32
    std::uint8_t m_iCachedFrameCount[0x4]; // 0x1488 int32
    std::uint8_t m_vecCachedRenderMins[0xC]; // 0x148C Vector
    std::uint8_t m_vecCachedRenderMaxs[0x18]; // 0x1498 Vector
};

struct C_CSTeam {
    static constexpr std::size_t size = 0x968;
    std::uint8_t pad_0[0x6B8]; // 0x0
    std::uint8_t m_szTeamMatchStat[0x200]; // 0x6B8 char[512]
    std::uint8_t m_numMapVictories[0x4]; // 0x8B8 int32
    std::uint8_t m_bSurrendered[0x4]; // 0x8BC bool
    std::uint8_t m_scoreFirstHalf[0x4]; // 0x8C0 int32
    std::uint8_t m_scoreSecondHalf[0x4]; // 0x8C4 int32
    std::uint8_t m_scoreOvertime[0x4]; // 0x8C8 int32
    std::uint8_t m_szClanTeamname[0x84]; // 0x8CC char[129]
    std::uint8_t m_iClanID[0x4]; // 0x950 uint32
    std::uint8_t m_szTeamFlagImage[0x8]; // 0x954 char[8]
    std::uint8_t m_szTeamLogoImage[0xC]; // 0x95C char[8]
};

struct C_CS2HudModelWeapon {
    static constexpr std::size_t size = 0x1390;
    std::uint8_t pad_0[0x1390]; // 0x0
};

struct C_TextureBasedAnimatable {
    static constexpr std::size_t size = 0x10D0;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t m_bLoop[0x4]; // 0x1098 bool
    std::uint8_t m_flFPS[0x4]; // 0x109C float32
    std::uint8_t m_hPositionKeys[0x8]; // 0x10A0 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_hRotationKeys[0x8]; // 0x10A8 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_vAnimationBoundsMin[0xC]; // 0x10B0 Vector
    std::uint8_t m_vAnimationBoundsMax[0xC]; // 0x10BC Vector
    std::uint8_t m_flStartTime[0x4]; // 0x10C8 float32
    std::uint8_t m_flStartFrame[0x4]; // 0x10CC float32
};

struct C_LightEnvironmentEntity {
    static constexpr std::size_t size = 0x10A0;
    std::uint8_t pad_0[0x10A0]; // 0x0
};

struct C_TriggerPhysics {
    static constexpr std::size_t size = 0x11D0;
    std::uint8_t pad_0[0x1180]; // 0x0
    std::uint8_t m_gravityScale[0x4]; // 0x1180 float32
    std::uint8_t m_linearLimit[0x4]; // 0x1184 float32
    std::uint8_t m_linearDamping[0x4]; // 0x1188 float32
    std::uint8_t m_angularLimit[0x4]; // 0x118C float32
    std::uint8_t m_angularDamping[0x4]; // 0x1190 float32
    std::uint8_t m_linearForce[0x4]; // 0x1194 float32
    std::uint8_t m_flFrequency[0x4]; // 0x1198 float32
    std::uint8_t m_flDampingRatio[0x4]; // 0x119C float32
    std::uint8_t m_vecLinearForcePointAt[0xC]; // 0x11A0 Vector
    std::uint8_t m_bCollapseToForcePoint[0x4]; // 0x11AC bool
    std::uint8_t m_vecLinearForcePointAtWorld[0xC]; // 0x11B0 VectorWS
    std::uint8_t m_vecLinearForceDirection[0xC]; // 0x11BC Vector
    std::uint8_t m_bForceDirectionIsInLocalSpace[0x1]; // 0x11C8 bool
    std::uint8_t m_bConvertToDebrisWhenPossible[0x7]; // 0x11C9 bool
};

struct C_PropDoorRotating {
    static constexpr std::size_t size = 0x14F0;
    std::uint8_t pad_0[0x14F0]; // 0x0
};

struct C_HandleTest {
    static constexpr std::size_t size = 0x608;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_Handle[0x4]; // 0x600 CHandle<C_BaseEntity>
    std::uint8_t m_bSendHandle[0x4]; // 0x604 bool
};

struct CInfoWorldLayer {
    static constexpr std::size_t size = 0x638;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_pOutputOnEntitiesSpawned[0x18]; // 0x600 CEntityIOOutput
    std::uint8_t m_worldName[0x8]; // 0x618 CUtlSymbolLarge
    std::uint8_t m_layerName[0x8]; // 0x620 CUtlSymbolLarge
    std::uint8_t m_bWorldLayerVisible[0x1]; // 0x628 bool
    std::uint8_t m_bEntitiesSpawned[0x1]; // 0x629 bool
    std::uint8_t m_bCreateAsChildSpawnGroup[0x2]; // 0x62A bool
    std::uint8_t m_hLayerSpawnGroup[0x4]; // 0x62C uint32
    std::uint8_t m_bWorldLayerActuallyVisible[0x8]; // 0x630 bool
};

struct CBodyComponentBaseModelEntity {
    static constexpr std::size_t size = 0x510;
    std::uint8_t pad_0[0x510]; // 0x0
};

struct C_Multimeter {
    static constexpr std::size_t size = 0x1270;
    std::uint8_t pad_0[0x1268]; // 0x0
    std::uint8_t m_hTargetC4[0x8]; // 0x1268 CHandle<C_PlantedC4>
};

struct C_BaseTrigger {
    static constexpr std::size_t size = 0x1180;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t m_OnStartTouch[0x18]; // 0x1098 CEntityIOOutput
    std::uint8_t m_OnStartTouchAll[0x18]; // 0x10B0 CEntityIOOutput
    std::uint8_t m_OnEndTouch[0x18]; // 0x10C8 CEntityIOOutput
    std::uint8_t m_OnEndTouchAll[0x18]; // 0x10E0 CEntityIOOutput
    std::uint8_t m_OnTouching[0x18]; // 0x10F8 CEntityIOOutput
    std::uint8_t m_OnTouchingEachEntity[0x18]; // 0x1110 CEntityIOOutput
    std::uint8_t m_OnNotTouching[0x18]; // 0x1128 CEntityIOOutput
    std::uint8_t m_OnTouchingChanged[0x18]; // 0x1140 CEntityIOOutput
    std::uint8_t m_hTouchingEntities[0x18]; // 0x1158 CUtlVector<CHandle<C_BaseEntity>>
    std::uint8_t m_iFilterName[0x8]; // 0x1170 CUtlSymbolLarge
    std::uint8_t m_hFilter[0x4]; // 0x1178 CHandle<CBaseFilter>
    std::uint8_t m_bDisabled[0x4]; // 0x117C bool
};

struct FilterDamageType {
    static constexpr std::size_t size = 0x640;
    std::uint8_t pad_0[0x638]; // 0x0
    std::uint8_t m_iDamageType[0x8]; // 0x638 int32
};

struct CAttributeList {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_Attributes[0x68]; // 0x8 C_UtlVectorEmbeddedNetworkVar<CEconItemAttribute>
    std::uint8_t m_pManager[0x8]; // 0x70 CAttributeManager*
};

struct CPulseCell_Inflow_Wait {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_WakeResume[0x48]; // 0xD8 CPulse_ResumePoint
};

struct CFilterProximity {
    static constexpr std::size_t size = 0x640;
    std::uint8_t pad_0[0x638]; // 0x0
    std::uint8_t m_flRadius[0x8]; // 0x638 float32
};

struct CCS2WeaponGraphController {
    static constexpr std::size_t size = 0x2D8;
    std::uint8_t pad_0[0xC0]; // 0x0
    std::uint8_t m_action[0x18]; // 0xC0 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_bActionReset[0x18]; // 0xD8 CAnimGraph2ParamOptionalRef<bool>
    std::uint8_t m_flWeaponActionSpeedScale[0x18]; // 0xF0 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_weaponCategory[0x18]; // 0x108 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_weaponType[0x18]; // 0x120 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_weaponExtraInfo[0x18]; // 0x138 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_flWeaponAmmo[0x18]; // 0x150 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_flWeaponAmmoMax[0x18]; // 0x168 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_flWeaponAmmoReserve[0x18]; // 0x180 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_bWeaponIsSilenced[0x18]; // 0x198 CAnimGraph2ParamOptionalRef<bool>
    std::uint8_t m_flWeaponIronsightAmount[0x18]; // 0x1B0 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_bIsUsingLegacyModel[0x18]; // 0x1C8 CAnimGraph2ParamOptionalRef<bool>
    std::uint8_t m_idleVariation[0x18]; // 0x1E0 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_deployVariation[0x18]; // 0x1F8 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_attackType[0x18]; // 0x210 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_attackThrowStrength[0x18]; // 0x228 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_flAttackVariation[0x18]; // 0x240 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_inspectVariation[0x18]; // 0x258 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_inspectExtraInfo[0x18]; // 0x270 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_reloadStage[0x50]; // 0x288 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
};

struct CEffectData {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_vOrigin[0xC]; // 0x8 VectorWS
    std::uint8_t m_vStart[0xC]; // 0x14 VectorWS
    std::uint8_t m_vNormal[0xC]; // 0x20 Vector
    std::uint8_t m_vAngles[0xC]; // 0x2C QAngle
    std::uint8_t m_hEntity[0x4]; // 0x38 CEntityHandle
    std::uint8_t m_hOtherEntity[0x4]; // 0x3C CEntityHandle
    std::uint8_t m_flScale[0x4]; // 0x40 float32
    std::uint8_t m_flMagnitude[0x4]; // 0x44 float32
    std::uint8_t m_flRadius[0x4]; // 0x48 float32
    std::uint8_t m_nSurfaceProp[0x4]; // 0x4C CUtlStringToken
    std::uint8_t m_nEffectIndex[0x8]; // 0x50 CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
    std::uint8_t m_nDamageType[0x4]; // 0x58 uint32
    std::uint8_t m_nPenetrate[0x2]; // 0x5C uint8
    std::uint8_t m_nMaterial[0x2]; // 0x5E uint16
    std::uint8_t m_nHitBox[0x2]; // 0x60 int16
    std::uint8_t m_nColor[0x1]; // 0x62 uint8
    std::uint8_t m_fFlags[0x1]; // 0x63 uint8
    std::uint8_t m_nAttachmentIndex[0x4]; // 0x64 AttachmentHandle_t
    std::uint8_t m_nAttachmentName[0x4]; // 0x68 CUtlStringToken
    std::uint8_t m_iEffectName[0xC]; // 0x6C uint16
};

struct C_ParticleSystem {
    static constexpr std::size_t size = 0x1668;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t m_szSnapshotFileName[0x200]; // 0x1098 char[512]
    std::uint8_t m_bActive[0x1]; // 0x1298 bool
    std::uint8_t m_bFrozen[0x3]; // 0x1299 bool
    std::uint8_t m_flFreezeTransitionDuration[0x4]; // 0x129C float32
    std::uint8_t m_nStopType[0x4]; // 0x12A0 int32
    std::uint8_t m_bAnimateDuringGameplayPause[0x4]; // 0x12A4 bool
    std::uint8_t m_iEffectIndex[0x8]; // 0x12A8 CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    std::uint8_t m_flStartTime[0x4]; // 0x12B0 GameTime_t
    std::uint8_t m_flPreSimTime[0x4]; // 0x12B4 float32
    std::uint8_t m_vServerControlPoints[0x30]; // 0x12B8 Vector[4]
    std::uint8_t m_iServerControlPointAssignments[0x4]; // 0x12E8 uint8[4]
    std::uint8_t m_hControlPointEnts[0x100]; // 0x12EC CHandle<C_BaseEntity>[64]
    std::uint8_t m_bDataStringLocalized[0x4]; // 0x13EC bool
    std::uint8_t m_strDataString[0x8]; // 0x13F0 CUtlString
    std::uint8_t m_bNoSave[0x1]; // 0x13F8 bool
    std::uint8_t m_bNoFreeze[0x1]; // 0x13F9 bool
    std::uint8_t m_bNoRamp[0x1]; // 0x13FA bool
    std::uint8_t m_bStartActive[0x5]; // 0x13FB bool
    std::uint8_t m_iszEffectName[0x8]; // 0x1400 CUtlSymbolLarge
    std::uint8_t m_iszControlPointNames[0x200]; // 0x1408 CUtlSymbolLarge[64]
    std::uint8_t m_nDataCP[0x4]; // 0x1608 int32
    std::uint8_t m_vecDataCPValue[0xC]; // 0x160C Vector
    std::uint8_t m_nTintCP[0x4]; // 0x1618 int32
    std::uint8_t m_clrTint[0x24]; // 0x161C Color
    std::uint8_t m_bOldActive[0x1]; // 0x1640 bool
    std::uint8_t m_bOldFrozen[0x27]; // 0x1641 bool
};

struct CPulseCell_Outflow_CycleShuffled {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Outputs[0x18]; // 0x48 CUtlVector<CPulse_OutflowConnection>
};

struct C_WeaponSCAR20 {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F50]; // 0x0
};

struct C_FuncMover {
    static constexpr std::size_t size = 0x1098;
    std::uint8_t pad_0[0x1098]; // 0x0
};

struct CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
    static constexpr std::size_t size = 0xE8;
    std::uint8_t pItem[0x8]; // 0x0 C_EconItemView*
    std::uint8_t team[0x2]; // 0x8 uint16
    std::uint8_t slot[0xDE]; // 0xA uint16
};

struct CLightComponent {
    static constexpr std::size_t size = 0x1F0;
    std::uint8_t pad_0[0x38]; // 0x0
    std::uint8_t __m_pChainEntity[0x40]; // 0x38 CNetworkVarChainer
    std::uint8_t m_Color[0x4]; // 0x78 Color
    std::uint8_t m_SecondaryColor[0x4]; // 0x7C Color
    std::uint8_t m_flBrightness[0x4]; // 0x80 float32
    std::uint8_t m_flBrightnessScale[0x4]; // 0x84 float32
    std::uint8_t m_flBrightnessMult[0x4]; // 0x88 float32
    std::uint8_t m_flRange[0x4]; // 0x8C float32
    std::uint8_t m_flFalloff[0x4]; // 0x90 float32
    std::uint8_t m_flAttenuation0[0x4]; // 0x94 float32
    std::uint8_t m_flAttenuation1[0x4]; // 0x98 float32
    std::uint8_t m_flAttenuation2[0x4]; // 0x9C float32
    std::uint8_t m_flTheta[0x4]; // 0xA0 float32
    std::uint8_t m_flPhi[0x4]; // 0xA4 float32
    std::uint8_t m_hLightCookie[0x8]; // 0xA8 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_nCascades[0x4]; // 0xB0 int32
    std::uint8_t m_nCastShadows[0x4]; // 0xB4 int32
    std::uint8_t m_nShadowWidth[0x4]; // 0xB8 int32
    std::uint8_t m_nShadowHeight[0x4]; // 0xBC int32
    std::uint8_t m_bRenderDiffuse[0x4]; // 0xC0 bool
    std::uint8_t m_nRenderSpecular[0x4]; // 0xC4 int32
    std::uint8_t m_bRenderTransmissive[0x4]; // 0xC8 bool
    std::uint8_t m_flOrthoLightWidth[0x4]; // 0xCC float32
    std::uint8_t m_flOrthoLightHeight[0x4]; // 0xD0 float32
    std::uint8_t m_nStyle[0x4]; // 0xD4 int32
    std::uint8_t m_Pattern[0x8]; // 0xD8 CUtlString
    std::uint8_t m_nCascadeRenderStaticObjects[0x4]; // 0xE0 int32
    std::uint8_t m_flShadowCascadeCrossFade[0x4]; // 0xE4 float32
    std::uint8_t m_flShadowCascadeDistanceFade[0x4]; // 0xE8 float32
    std::uint8_t m_flShadowCascadeDistance0[0x4]; // 0xEC float32
    std::uint8_t m_flShadowCascadeDistance1[0x4]; // 0xF0 float32
    std::uint8_t m_flShadowCascadeDistance2[0x4]; // 0xF4 float32
    std::uint8_t m_flShadowCascadeDistance3[0x4]; // 0xF8 float32
    std::uint8_t m_nShadowCascadeResolution0[0x4]; // 0xFC int32
    std::uint8_t m_nShadowCascadeResolution1[0x4]; // 0x100 int32
    std::uint8_t m_nShadowCascadeResolution2[0x4]; // 0x104 int32
    std::uint8_t m_nShadowCascadeResolution3[0x4]; // 0x108 int32
    std::uint8_t m_bUsesBakedShadowing[0x4]; // 0x10C bool
    std::uint8_t m_nShadowPriority[0x4]; // 0x110 int32
    std::uint8_t m_nBakedShadowIndex[0x4]; // 0x114 int32
    std::uint8_t m_nLightPathUniqueId[0x4]; // 0x118 int32
    std::uint8_t m_nLightMapUniqueId[0x4]; // 0x11C int32
    std::uint8_t m_bRenderToCubemaps[0x1]; // 0x120 bool
    std::uint8_t m_bAllowSSTGeneration[0x3]; // 0x121 bool
    std::uint8_t m_nDirectLight[0x4]; // 0x124 int32
    std::uint8_t m_nBounceLight[0x4]; // 0x128 int32
    std::uint8_t m_flBounceScale[0x4]; // 0x12C float32
    std::uint8_t m_flFadeMinDist[0x4]; // 0x130 float32
    std::uint8_t m_flFadeMaxDist[0x4]; // 0x134 float32
    std::uint8_t m_flShadowFadeMinDist[0x4]; // 0x138 float32
    std::uint8_t m_flShadowFadeMaxDist[0x4]; // 0x13C float32
    std::uint8_t m_bEnabled[0x1]; // 0x140 bool
    std::uint8_t m_bFlicker[0x1]; // 0x141 bool
    std::uint8_t m_bPrecomputedFieldsValid[0x2]; // 0x142 bool
    std::uint8_t m_vPrecomputedBoundsMins[0xC]; // 0x144 Vector
    std::uint8_t m_vPrecomputedBoundsMaxs[0xC]; // 0x150 Vector
    std::uint8_t m_vPrecomputedOBBOrigin[0xC]; // 0x15C Vector
    std::uint8_t m_vPrecomputedOBBAngles[0xC]; // 0x168 QAngle
    std::uint8_t m_vPrecomputedOBBExtent[0xC]; // 0x174 Vector
    std::uint8_t m_flPrecomputedMaxRange[0x4]; // 0x180 float32
    std::uint8_t m_nFogLightingMode[0x4]; // 0x184 int32
    std::uint8_t m_flFogContributionStength[0x4]; // 0x188 float32
    std::uint8_t m_flNearClipPlane[0x4]; // 0x18C float32
    std::uint8_t m_SkyColor[0x4]; // 0x190 Color
    std::uint8_t m_flSkyIntensity[0x4]; // 0x194 float32
    std::uint8_t m_SkyAmbientBounce[0x4]; // 0x198 Color
    std::uint8_t m_bUseSecondaryColor[0x1]; // 0x19C bool
    std::uint8_t m_bMixedShadows[0x3]; // 0x19D bool
    std::uint8_t m_flLightStyleStartTime[0x4]; // 0x1A0 GameTime_t
    std::uint8_t m_flCapsuleLength[0x4]; // 0x1A4 float32
    std::uint8_t m_flMinRoughness[0x4]; // 0x1A8 float32
    std::uint8_t m_bAmbientOcclusionProxyOverride[0x4]; // 0x1AC bool
    std::uint8_t m_hAmbientOcclusionProxyPosition0[0x4]; // 0x1B0 CHandle<C_BaseEntity>
    std::uint8_t m_hAmbientOcclusionProxyPosition1[0x4]; // 0x1B4 CHandle<C_BaseEntity>
    std::uint8_t m_hAmbientOcclusionProxyPosition2[0x4]; // 0x1B8 CHandle<C_BaseEntity>
    std::uint8_t m_hAmbientOcclusionProxyPosition3[0x4]; // 0x1BC CHandle<C_BaseEntity>
    std::uint8_t m_flAmbientOcclusionProxyStrength0[0x4]; // 0x1C0 float32
    std::uint8_t m_flAmbientOcclusionProxyStrength1[0x4]; // 0x1C4 float32
    std::uint8_t m_flAmbientOcclusionProxyStrength2[0x4]; // 0x1C8 float32
    std::uint8_t m_flAmbientOcclusionProxyStrength3[0x4]; // 0x1CC float32
    std::uint8_t m_flAmbientOcclusionProxyAmbientStrength[0x4]; // 0x1D0 float32
    std::uint8_t m_flAmbientOcclusionProxyConeAngle0[0x4]; // 0x1D4 float32
    std::uint8_t m_flAmbientOcclusionProxyConeAngle1[0x4]; // 0x1D8 float32
    std::uint8_t m_flAmbientOcclusionProxyConeAngle2[0x4]; // 0x1DC float32
    std::uint8_t m_flAmbientOcclusionProxyConeAngle3[0x10]; // 0x1E0 float32
};

struct C_DecoyGrenade {
    static constexpr std::size_t size = 0x1FE0;
    std::uint8_t pad_0[0x1FE0]; // 0x0
};

struct C_WaterBullet {
    static constexpr std::size_t size = 0x1268;
    std::uint8_t pad_0[0x1268]; // 0x0
};

struct CCSPlayer_ActionTrackingServices {
    static constexpr std::size_t size = 0x1A0;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_hLastWeaponBeforeC4AutoSwitch[0x4]; // 0x48 CHandle<C_BasePlayerWeapon>
    std::uint8_t m_bIsRescuing[0x4]; // 0x4C bool
    std::uint8_t m_weaponPurchasesThisMatch[0x70]; // 0x50 WeaponPurchaseTracker_t
    std::uint8_t m_weaponPurchasesThisRound[0x70]; // 0xC0 WeaponPurchaseTracker_t
    std::uint8_t m_weaponCarryOverIntoThisRound[0x70]; // 0x130 WeaponPurchaseTracker_t
};

struct CBrokenGlassTrap {
    static constexpr std::size_t size = 0x1098;
    std::uint8_t pad_0[0x1098]; // 0x0
};

struct C_EnvCubemap {
    static constexpr std::size_t size = 0x6E8;
    std::uint8_t pad_0[0x680]; // 0x0
    std::uint8_t m_Entity_hCubemapTexture[0x8]; // 0x680 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_bCustomCubemapTexture[0x4]; // 0x688 bool
    std::uint8_t m_Entity_flInfluenceRadius[0x4]; // 0x68C float32
    std::uint8_t m_Entity_vBoxProjectMins[0xC]; // 0x690 Vector
    std::uint8_t m_Entity_vBoxProjectMaxs[0xC]; // 0x69C Vector
    std::uint8_t m_Entity_bMoveable[0x4]; // 0x6A8 bool
    std::uint8_t m_Entity_nHandshake[0x4]; // 0x6AC int32
    std::uint8_t m_Entity_nEnvCubeMapArrayIndex[0x4]; // 0x6B0 int32
    std::uint8_t m_Entity_nPriority[0x4]; // 0x6B4 int32
    std::uint8_t m_Entity_flEdgeFadeDist[0x4]; // 0x6B8 float32
    std::uint8_t m_Entity_vEdgeFadeDists[0xC]; // 0x6BC Vector
    std::uint8_t m_Entity_flDiffuseScale[0x4]; // 0x6C8 float32
    std::uint8_t m_Entity_bStartDisabled[0x1]; // 0x6CC bool
    std::uint8_t m_Entity_bDefaultEnvMap[0x1]; // 0x6CD bool
    std::uint8_t m_Entity_bDefaultSpecEnvMap[0x1]; // 0x6CE bool
    std::uint8_t m_Entity_bIndoorCubeMap[0x1]; // 0x6CF bool
    std::uint8_t m_Entity_bCopyDiffuseFromDefaultCubemap[0x10]; // 0x6D0 bool
    std::uint8_t m_Entity_bEnabled[0x8]; // 0x6E0 bool
};

struct CCSObserver_MovementServices {
    static constexpr std::size_t size = 0x258;
    std::uint8_t pad_0[0x258]; // 0x0
};

struct CBodyComponent {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_pSceneNode[0x40]; // 0x8 CGameSceneNode*
    std::uint8_t __m_pChainEntity[0x30]; // 0x48 CNetworkVarChainer
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

struct C_BaseCombatCharacter {
    static constexpr std::size_t size = 0x12F0;
    std::uint8_t pad_0[0x1268]; // 0x0
    std::uint8_t m_hMyWearables[0x18]; // 0x1268 C_NetworkUtlVectorBase<CHandle<C_EconWearable>>
    std::uint8_t m_leftFootAttachment[0x1]; // 0x1280 AttachmentHandle_t
    std::uint8_t m_rightFootAttachment[0x3]; // 0x1281 AttachmentHandle_t
    std::uint8_t m_nWaterWakeMode[0x4]; // 0x1284 C_BaseCombatCharacter::WaterWakeMode_t
    std::uint8_t m_flWaterWorldZ[0x4]; // 0x1288 float32
    std::uint8_t m_flWaterNextTraceTime[0x64]; // 0x128C float32
};

struct CGlowProperty {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_fGlowColor[0x28]; // 0x8 Vector
    std::uint8_t m_iGlowType[0x4]; // 0x30 int32
    std::uint8_t m_iGlowTeam[0x4]; // 0x34 int32
    std::uint8_t m_nGlowRange[0x4]; // 0x38 int32
    std::uint8_t m_nGlowRangeMin[0x4]; // 0x3C int32
    std::uint8_t m_glowColorOverride[0x4]; // 0x40 Color
    std::uint8_t m_bFlashing[0x4]; // 0x44 bool
    std::uint8_t m_flGlowTime[0x4]; // 0x48 float32
    std::uint8_t m_flGlowStartTime[0x4]; // 0x4C float32
    std::uint8_t m_bEligibleForScreenHighlight[0x1]; // 0x50 bool
    std::uint8_t m_bGlowing[0x7]; // 0x51 bool
};

struct C_PointClientUIDialog {
    static constexpr std::size_t size = 0x10D0;
    std::uint8_t pad_0[0x10C8]; // 0x0
    std::uint8_t m_hActivator[0x4]; // 0x10C8 CHandle<C_BaseEntity>
    std::uint8_t m_bStartEnabled[0x4]; // 0x10CC bool
};

struct C_SoundEventMultiPointEntity {
    static constexpr std::size_t size = 0x6C0;
    std::uint8_t pad_0[0x6C0]; // 0x0
};

struct CPulseCell_BaseValue {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct C_WeaponHKP2000 {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F50]; // 0x0
};

struct C_FootstepControl {
    static constexpr std::size_t size = 0x1190;
    std::uint8_t pad_0[0x1180]; // 0x0
    std::uint8_t m_source[0x8]; // 0x1180 CUtlSymbolLarge
    std::uint8_t m_destination[0x8]; // 0x1188 CUtlSymbolLarge
};

struct CCitadelSoundOpvarSetOBB {
    static constexpr std::size_t size = 0x668;
    std::uint8_t pad_0[0x618]; // 0x0
    std::uint8_t m_iszStackName[0x8]; // 0x618 CUtlSymbolLarge
    std::uint8_t m_iszOperatorName[0x8]; // 0x620 CUtlSymbolLarge
    std::uint8_t m_iszOpvarName[0x8]; // 0x628 CUtlSymbolLarge
    std::uint8_t m_vDistanceInnerMins[0xC]; // 0x630 Vector
    std::uint8_t m_vDistanceInnerMaxs[0xC]; // 0x63C Vector
    std::uint8_t m_vDistanceOuterMins[0xC]; // 0x648 Vector
    std::uint8_t m_vDistanceOuterMaxs[0xC]; // 0x654 Vector
    std::uint8_t m_nAABBDirection[0x8]; // 0x660 int32
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
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_Condition[0x90]; // 0xD8 CPulseObservableExpression<bool>
    std::uint8_t m_WhenTrue[0x48]; // 0x168 CPulse_OutflowConnection
    std::uint8_t m_WhenFalse[0x48]; // 0x1B0 CPulse_OutflowConnection
};

struct CDamageRecord {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_PlayerDamager[0x4]; // 0x30 CHandle<C_CSPlayerPawn>
    std::uint8_t m_PlayerRecipient[0x4]; // 0x34 CHandle<C_CSPlayerPawn>
    std::uint8_t m_hPlayerControllerDamager[0x4]; // 0x38 CHandle<CCSPlayerController>
    std::uint8_t m_hPlayerControllerRecipient[0x4]; // 0x3C CHandle<CCSPlayerController>
    std::uint8_t m_szPlayerDamagerName[0x8]; // 0x40 CUtlString
    std::uint8_t m_szPlayerRecipientName[0x8]; // 0x48 CUtlString
    std::uint8_t m_DamagerXuid[0x8]; // 0x50 uint64
    std::uint8_t m_RecipientXuid[0x8]; // 0x58 uint64
    std::uint8_t m_flBulletsDamage[0x4]; // 0x60 float32
    std::uint8_t m_flDamage[0x4]; // 0x64 float32
    std::uint8_t m_flActualHealthRemoved[0x4]; // 0x68 float32
    std::uint8_t m_iNumHits[0x4]; // 0x6C int32
    std::uint8_t m_iLastBulletUpdate[0x4]; // 0x70 int32
    std::uint8_t m_bIsOtherEnemy[0x1]; // 0x74 bool
    std::uint8_t m_killType[0x3]; // 0x75 EKillTypes_t
};

struct VPhysicsCollisionAttribute_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_nInteractsAs[0x8]; // 0x8 uint64
    std::uint8_t m_nInteractsWith[0x8]; // 0x10 uint64
    std::uint8_t m_nInteractsExclude[0x8]; // 0x18 uint64
    std::uint8_t m_nEntityId[0x4]; // 0x20 uint32
    std::uint8_t m_nOwnerId[0x4]; // 0x24 uint32
    std::uint8_t m_nHierarchyId[0x2]; // 0x28 uint16
    std::uint8_t m_nDetailLayerMask[0x2]; // 0x2A uint16
    std::uint8_t m_nDetailLayerMaskType[0x1]; // 0x2C uint8
    std::uint8_t m_nTargetDetailLayer[0x1]; // 0x2D uint8
    std::uint8_t m_nCollisionGroup[0x1]; // 0x2E uint8
    std::uint8_t m_nCollisionFunctionMask[0x1]; // 0x2F uint8
};

struct C_DynamicPropAlias_dynamic_prop {
    static constexpr std::size_t size = 0x14B0;
    std::uint8_t pad_0[0x14B0]; // 0x0
};

struct CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
    static constexpr std::size_t size = 0x698;
    std::uint8_t pad_0[0x698]; // 0x0
};

struct C_OmniLight {
    static constexpr std::size_t size = 0x13B8;
    std::uint8_t pad_0[0x13A8]; // 0x0
    std::uint8_t m_flInnerAngle[0x4]; // 0x13A8 float32
    std::uint8_t m_flOuterAngle[0x4]; // 0x13AC float32
    std::uint8_t m_bShowLight[0x8]; // 0x13B0 bool
};

struct C_SceneEntity {
    static constexpr std::size_t size = 0x668;
    std::uint8_t pad_0[0x608]; // 0x0
    std::uint8_t m_bIsPlayingBack[0x1]; // 0x608 bool
    std::uint8_t m_bPaused[0x1]; // 0x609 bool
    std::uint8_t m_bMultiplayer[0x1]; // 0x60A bool
    std::uint8_t m_bAutogenerated[0x1]; // 0x60B bool
    std::uint8_t m_bAllRequirementsComplete[0x4]; // 0x60C bool
    std::uint8_t m_flForceClientTime[0x4]; // 0x610 float32
    std::uint8_t m_nSceneStringIndex[0x2]; // 0x614 uint16
    std::uint8_t m_bClientOnly[0x2]; // 0x616 bool
    std::uint8_t m_hOwner[0x8]; // 0x618 CHandle<C_BaseModelEntity>
    std::uint8_t m_hActorList[0x18]; // 0x620 C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
    std::uint8_t m_bWasPlaying[0x10]; // 0x638 bool
    std::uint8_t m_QueuedEvents[0x18]; // 0x648 CUtlVector<C_SceneEntity::QueuedEvents_t>
    std::uint8_t m_flCurrentTime[0x8]; // 0x660 float32
};

struct CPulseCell_Inflow_Yield {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_UnyieldResume[0x48]; // 0xD8 CPulse_ResumePoint
};

struct C_NametagModule {
    static constexpr std::size_t size = 0x1278;
    std::uint8_t pad_0[0x1270]; // 0x0
    std::uint8_t m_strNametagString[0x8]; // 0x1270 CUtlString
};

struct C_EconEntity {
    static constexpr std::size_t size = 0x1918;
    std::uint8_t pad_0[0x1278]; // 0x0
    std::uint8_t m_flFlexDelayTime[0x8]; // 0x1278 float32
    std::uint8_t m_flFlexDelayedWeight[0x8]; // 0x1280 float32*
    std::uint8_t m_bAttributesInitialized[0x8]; // 0x1288 bool
    std::uint8_t m_AttributeManager[0x610]; // 0x1290 C_AttributeContainer
    std::uint8_t m_OriginalOwnerXuidLow[0x4]; // 0x18A0 uint32
    std::uint8_t m_OriginalOwnerXuidHigh[0x4]; // 0x18A4 uint32
    std::uint8_t m_nFallbackPaintKit[0x4]; // 0x18A8 int32
    std::uint8_t m_nFallbackSeed[0x4]; // 0x18AC int32
    std::uint8_t m_flFallbackWear[0x4]; // 0x18B0 float32
    std::uint8_t m_nFallbackStatTrak[0x4]; // 0x18B4 int32
    std::uint8_t m_bClientside[0x1]; // 0x18B8 bool
    std::uint8_t m_bParticleSystemsCreated[0x7]; // 0x18B9 bool
    std::uint8_t m_vecAttachedParticles[0x18]; // 0x18C0 CUtlVector<int32>
    std::uint8_t m_hViewmodelAttachment[0x4]; // 0x18D8 CHandle<CBaseAnimGraph>
    std::uint8_t m_iOldTeam[0x4]; // 0x18DC int32
    std::uint8_t m_bAttachmentDirty[0x4]; // 0x18E0 bool
    std::uint8_t m_nUnloadedModelIndex[0x4]; // 0x18E4 int32
    std::uint8_t m_iNumOwnerValidationRetries[0x10]; // 0x18E8 int32
    std::uint8_t m_hOldProvidee[0x8]; // 0x18F8 CHandle<C_BaseEntity>
    std::uint8_t m_vecAttachedModels[0x18]; // 0x1900 CUtlVector<C_EconEntity::AttachedModelData_t>
};

struct CPlayer_UseServices {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct C_PointValueRemapper {
    static constexpr std::size_t size = 0x678;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_bDisabled[0x1]; // 0x600 bool
    std::uint8_t m_bDisabledOld[0x1]; // 0x601 bool
    std::uint8_t m_bUpdateOnClient[0x2]; // 0x602 bool
    std::uint8_t m_nInputType[0x4]; // 0x604 ValueRemapperInputType_t
    std::uint8_t m_hRemapLineStart[0x4]; // 0x608 CHandle<C_BaseEntity>
    std::uint8_t m_hRemapLineEnd[0x4]; // 0x60C CHandle<C_BaseEntity>
    std::uint8_t m_flMaximumChangePerSecond[0x4]; // 0x610 float32
    std::uint8_t m_flDisengageDistance[0x4]; // 0x614 float32
    std::uint8_t m_flEngageDistance[0x4]; // 0x618 float32
    std::uint8_t m_bRequiresUseKey[0x4]; // 0x61C bool
    std::uint8_t m_nOutputType[0x8]; // 0x620 ValueRemapperOutputType_t
    std::uint8_t m_hOutputEntities[0x18]; // 0x628 C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
    std::uint8_t m_nHapticsType[0x4]; // 0x640 ValueRemapperHapticsType_t
    std::uint8_t m_nMomentumType[0x4]; // 0x644 ValueRemapperMomentumType_t
    std::uint8_t m_flMomentumModifier[0x4]; // 0x648 float32
    std::uint8_t m_flSnapValue[0x4]; // 0x64C float32
    std::uint8_t m_flCurrentMomentum[0x4]; // 0x650 float32
    std::uint8_t m_nRatchetType[0x4]; // 0x654 ValueRemapperRatchetType_t
    std::uint8_t m_flRatchetOffset[0x4]; // 0x658 float32
    std::uint8_t m_flInputOffset[0x4]; // 0x65C float32
    std::uint8_t m_bEngaged[0x1]; // 0x660 bool
    std::uint8_t m_bFirstUpdate[0x3]; // 0x661 bool
    std::uint8_t m_flPreviousValue[0x4]; // 0x664 float32
    std::uint8_t m_flPreviousUpdateTickTime[0x4]; // 0x668 GameTime_t
    std::uint8_t m_vecPreviousTestPoint[0xC]; // 0x66C VectorWS
};

struct CGameSceneNodeHandle {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_hOwner[0x4]; // 0x8 CEntityHandle
    std::uint8_t m_name[0x4]; // 0xC CUtlStringToken
};

struct CPulseCell_Unknown {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_UnknownKeys[0x10]; // 0x48 KeyValues3
};

struct C_WeaponMP7 {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F50]; // 0x0
};

struct CSPerRoundStats_t {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_iKills[0x4]; // 0x30 int32
    std::uint8_t m_iDeaths[0x4]; // 0x34 int32
    std::uint8_t m_iAssists[0x4]; // 0x38 int32
    std::uint8_t m_iDamage[0x4]; // 0x3C int32
    std::uint8_t m_iEquipmentValue[0x4]; // 0x40 int32
    std::uint8_t m_iMoneySaved[0x4]; // 0x44 int32
    std::uint8_t m_iKillReward[0x4]; // 0x48 int32
    std::uint8_t m_iLiveTime[0x4]; // 0x4C int32
    std::uint8_t m_iHeadShotKills[0x4]; // 0x50 int32
    std::uint8_t m_iObjective[0x4]; // 0x54 int32
    std::uint8_t m_iCashEarned[0x4]; // 0x58 int32
    std::uint8_t m_iUtilityDamage[0x4]; // 0x5C int32
    std::uint8_t m_iEnemiesFlashed[0x8]; // 0x60 int32
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

struct C_CS2HudModelBase {
    static constexpr std::size_t size = 0x1350;
    std::uint8_t pad_0[0x1350]; // 0x0
};

struct C_CSGameRules {
    static constexpr std::size_t size = 0x4F68;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t m_bFreezePeriod[0x1]; // 0x40 bool
    std::uint8_t m_bWarmupPeriod[0x3]; // 0x41 bool
    std::uint8_t m_fWarmupPeriodEnd[0x4]; // 0x44 GameTime_t
    std::uint8_t m_fWarmupPeriodStart[0x4]; // 0x48 GameTime_t
    std::uint8_t m_bTerroristTimeOutActive[0x1]; // 0x4C bool
    std::uint8_t m_bCTTimeOutActive[0x3]; // 0x4D bool
    std::uint8_t m_flTerroristTimeOutRemaining[0x4]; // 0x50 float32
    std::uint8_t m_flCTTimeOutRemaining[0x4]; // 0x54 float32
    std::uint8_t m_nTerroristTimeOuts[0x4]; // 0x58 int32
    std::uint8_t m_nCTTimeOuts[0x4]; // 0x5C int32
    std::uint8_t m_bTechnicalTimeOut[0x1]; // 0x60 bool
    std::uint8_t m_bMatchWaitingForResume[0x3]; // 0x61 bool
    std::uint8_t m_iFreezeTime[0x4]; // 0x64 int32
    std::uint8_t m_iRoundTime[0x4]; // 0x68 int32
    std::uint8_t m_fMatchStartTime[0x4]; // 0x6C float32
    std::uint8_t m_fRoundStartTime[0x4]; // 0x70 GameTime_t
    std::uint8_t m_flRestartRoundTime[0x4]; // 0x74 GameTime_t
    std::uint8_t m_bGameRestart[0x4]; // 0x78 bool
    std::uint8_t m_flGameStartTime[0x4]; // 0x7C float32
    std::uint8_t m_timeUntilNextPhaseStarts[0x4]; // 0x80 float32
    std::uint8_t m_gamePhase[0x4]; // 0x84 int32
    std::uint8_t m_totalRoundsPlayed[0x4]; // 0x88 int32
    std::uint8_t m_nRoundsPlayedThisPhase[0x4]; // 0x8C int32
    std::uint8_t m_nOvertimePlaying[0x4]; // 0x90 int32
    std::uint8_t m_iHostagesRemaining[0x4]; // 0x94 int32
    std::uint8_t m_bAnyHostageReached[0x1]; // 0x98 bool
    std::uint8_t m_bMapHasBombTarget[0x1]; // 0x99 bool
    std::uint8_t m_bMapHasRescueZone[0x1]; // 0x9A bool
    std::uint8_t m_bMapHasBuyZone[0x1]; // 0x9B bool
    std::uint8_t m_bIsQueuedMatchmaking[0x4]; // 0x9C bool
    std::uint8_t m_nQueuedMatchmakingMode[0x4]; // 0xA0 int32
    std::uint8_t m_bIsValveDS[0x1]; // 0xA4 bool
    std::uint8_t m_bLogoMap[0x1]; // 0xA5 bool
    std::uint8_t m_bPlayAllStepSoundsOnServer[0x2]; // 0xA6 bool
    std::uint8_t m_iSpectatorSlotCount[0x4]; // 0xA8 int32
    std::uint8_t m_MatchDevice[0x4]; // 0xAC int32
    std::uint8_t m_bHasMatchStarted[0x4]; // 0xB0 bool
    std::uint8_t m_nNextMapInMapgroup[0x4]; // 0xB4 int32
    std::uint8_t m_szTournamentEventName[0x200]; // 0xB8 char[512]
    std::uint8_t m_szTournamentEventStage[0x200]; // 0x2B8 char[512]
    std::uint8_t m_szMatchStatTxt[0x200]; // 0x4B8 char[512]
    std::uint8_t m_szTournamentPredictionsTxt[0x200]; // 0x6B8 char[512]
    std::uint8_t m_nTournamentPredictionsPct[0x4]; // 0x8B8 int32
    std::uint8_t m_flCMMItemDropRevealStartTime[0x4]; // 0x8BC GameTime_t
    std::uint8_t m_flCMMItemDropRevealEndTime[0x4]; // 0x8C0 GameTime_t
    std::uint8_t m_bIsDroppingItems[0x1]; // 0x8C4 bool
    std::uint8_t m_bIsQuestEligible[0x1]; // 0x8C5 bool
    std::uint8_t m_bIsHltvActive[0x1]; // 0x8C6 bool
    std::uint8_t m_bBombPlanted[0x1]; // 0x8C7 bool
    std::uint8_t m_arrProhibitedItemIndices[0xC8]; // 0x8C8 uint16[100]
    std::uint8_t m_arrTournamentActiveCasterAccounts[0x10]; // 0x990 uint32[4]
    std::uint8_t m_numBestOfMaps[0x4]; // 0x9A0 int32
    std::uint8_t m_nHalloweenMaskListSeed[0x4]; // 0x9A4 int32
    std::uint8_t m_bBombDropped[0x4]; // 0x9A8 bool
    std::uint8_t m_iRoundWinStatus[0x4]; // 0x9AC int32
    std::uint8_t m_eRoundWinReason[0x4]; // 0x9B0 int32
    std::uint8_t m_bTCantBuy[0x1]; // 0x9B4 bool
    std::uint8_t m_bCTCantBuy[0x3]; // 0x9B5 bool
    std::uint8_t m_iMatchStats_RoundResults[0x78]; // 0x9B8 int32[30]
    std::uint8_t m_iMatchStats_PlayersAlive_CT[0x78]; // 0xA30 int32[30]
    std::uint8_t m_iMatchStats_PlayersAlive_T[0x78]; // 0xAA8 int32[30]
    std::uint8_t m_TeamRespawnWaveTimes[0x80]; // 0xB20 float32[32]
    std::uint8_t m_nActiveMutators[0x4]; // 0xBA0 int32
    std::uint8_t m_flNextRespawnWave[0x80]; // 0xBA4 GameTime_t[32]
    std::uint8_t m_vMinimapMins[0xC]; // 0xC24 VectorWS
    std::uint8_t m_vMinimapMaxs[0xC]; // 0xC30 VectorWS
    std::uint8_t m_MinimapVerticalSectionHeights[0x24]; // 0xC3C float32[8]
    std::uint8_t m_ullLocalMatchID[0x8]; // 0xC60 uint64
    std::uint8_t m_nEndMatchMapGroupVoteTypes[0x28]; // 0xC68 int32[10]
    std::uint8_t m_nEndMatchMapGroupVoteOptions[0x28]; // 0xC90 int32[10]
    std::uint8_t m_nEndMatchMapVoteWinner[0x4]; // 0xCB8 int32
    std::uint8_t m_iNumConsecutiveCTLoses[0x4]; // 0xCBC int32
    std::uint8_t m_iNumConsecutiveTerroristLoses[0xC0]; // 0xCC0 int32
    std::uint8_t m_nMatchAbortedEarlyReason[0x4]; // 0xD80 int32
    std::uint8_t m_bHasTriggeredRoundStartMusic[0x1]; // 0xD84 bool
    std::uint8_t m_bSwitchingTeamsAtRoundReset[0x1B]; // 0xD85 bool
    std::uint8_t m_pGameModeRules[0x8]; // 0xDA0 CCSGameModeRules*
    std::uint8_t m_RetakeRules[0x158]; // 0xDA8 C_RetakeGameRules
    std::uint8_t m_nMatchEndCount[0x4]; // 0xF00 uint8
    std::uint8_t m_nTTeamIntroVariant[0x4]; // 0xF04 int32
    std::uint8_t m_nCTTeamIntroVariant[0x4]; // 0xF08 int32
    std::uint8_t m_bTeamIntroPeriod[0x4]; // 0xF0C bool
    std::uint8_t m_iRoundEndWinnerTeam[0x4]; // 0xF10 int32
    std::uint8_t m_eRoundEndReason[0x4]; // 0xF14 int32
    std::uint8_t m_bRoundEndShowTimerDefend[0x4]; // 0xF18 bool
    std::uint8_t m_iRoundEndTimerTime[0x4]; // 0xF1C int32
    std::uint8_t m_sRoundEndFunFactToken[0x8]; // 0xF20 CUtlString
    std::uint8_t m_iRoundEndFunFactPlayerSlot[0x4]; // 0xF28 CPlayerSlot
    std::uint8_t m_iRoundEndFunFactData1[0x4]; // 0xF2C int32
    std::uint8_t m_iRoundEndFunFactData2[0x4]; // 0xF30 int32
    std::uint8_t m_iRoundEndFunFactData3[0x4]; // 0xF34 int32
    std::uint8_t m_sRoundEndMessage[0x8]; // 0xF38 CUtlString
    std::uint8_t m_iRoundEndPlayerCount[0x4]; // 0xF40 int32
    std::uint8_t m_bRoundEndNoMusic[0x4]; // 0xF44 bool
    std::uint8_t m_iRoundEndLegacy[0x4]; // 0xF48 int32
    std::uint8_t m_nRoundEndCount[0x4]; // 0xF4C uint8
    std::uint8_t m_iRoundStartRoundNumber[0x4]; // 0xF50 int32
    std::uint8_t m_nRoundStartCount[0x400C]; // 0xF54 uint8
    std::uint8_t m_flLastPerfSampleTime[0x8]; // 0x4F60 float64
};

struct CGrenadeTracer {
    static constexpr std::size_t size = 0x1530;
    std::uint8_t pad_0[0x10B0]; // 0x0
    std::uint8_t m_flTracerDuration[0x4]; // 0x10B0 float32
    std::uint8_t m_nType[0x47C]; // 0x10B4 GrenadeType_t
};

struct CCSGameModeRules_Noop {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x30]; // 0x0
};

struct CPulse_BlackboardReference {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_hBlackboardResource[0x8]; // 0x0 CStrongHandle<InfoForResourceTypeIPulseGraphDef>
    std::uint8_t m_BlackboardResource[0x10]; // 0x8 PulseSymbol_t
    std::uint8_t m_nNodeID[0x8]; // 0x18 PulseDocNodeID_t
    std::uint8_t m_NodeName[0x8]; // 0x20 CGlobalSymbol
};

struct C_BaseCSGrenadeProjectile {
    static constexpr std::size_t size = 0x1348;
    std::uint8_t pad_0[0x12B0]; // 0x0
    std::uint8_t m_vInitialPosition[0xC]; // 0x12B0 VectorWS
    std::uint8_t m_vInitialVelocity[0xC]; // 0x12BC Vector
    std::uint8_t m_nBounces[0x8]; // 0x12C8 int32
    std::uint8_t m_nExplodeEffectIndex[0x8]; // 0x12D0 CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    std::uint8_t m_nExplodeEffectTickBegin[0x4]; // 0x12D8 int32
    std::uint8_t m_vecExplodeEffectOrigin[0xC]; // 0x12DC VectorWS
    std::uint8_t m_flSpawnTime[0x4]; // 0x12E8 GameTime_t
    std::uint8_t vecLastTrailLinePos[0xC]; // 0x12EC Vector
    std::uint8_t flNextTrailLineTime[0x4]; // 0x12F8 GameTime_t
    std::uint8_t m_bExplodeEffectBegan[0x1]; // 0x12FC bool
    std::uint8_t m_bCanCreateGrenadeTrail[0x3]; // 0x12FD bool
    std::uint8_t m_nSnapshotTrajectoryEffectIndex[0x8]; // 0x1300 ParticleIndex_t
    std::uint8_t m_hSnapshotTrajectoryParticleSnapshot[0x8]; // 0x1308 CStrongHandle<InfoForResourceTypeIParticleSnapshot>
    std::uint8_t m_arrTrajectoryTrailPoints[0x18]; // 0x1310 CUtlVector<Vector>
    std::uint8_t m_arrTrajectoryTrailPointCreationTimes[0x18]; // 0x1328 CUtlVector<float32>
    std::uint8_t m_flTrajectoryTrailEffectCreationTime[0x8]; // 0x1340 float32
};

struct CCSGO_RushIntroCounterTerroristPosition {
    static constexpr std::size_t size = 0x1D18;
    std::uint8_t pad_0[0x1D18]; // 0x0
};

struct CPulseCell_ReturnValues {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct C_GradientFog {
    static constexpr std::size_t size = 0x698;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_hGradientFogTexture[0x8]; // 0x600 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_flFogStartDistance[0x4]; // 0x608 float32
    std::uint8_t m_flFogEndDistance[0x4]; // 0x60C float32
    std::uint8_t m_bHeightFogEnabled[0x4]; // 0x610 bool
    std::uint8_t m_flFogStartHeight[0x4]; // 0x614 float32
    std::uint8_t m_flFogEndHeight[0x4]; // 0x618 float32
    std::uint8_t m_flFarZ[0x4]; // 0x61C float32
    std::uint8_t m_flFogMaxOpacity[0x4]; // 0x620 float32
    std::uint8_t m_flFogFalloffExponent[0x4]; // 0x624 float32
    std::uint8_t m_flFogVerticalExponent[0x4]; // 0x628 float32
    std::uint8_t m_fogColor[0x4]; // 0x62C Color
    std::uint8_t m_flFogStrength[0x4]; // 0x630 float32
    std::uint8_t m_flFadeTime[0x4]; // 0x634 float32
    std::uint8_t m_bStartDisabled[0x1]; // 0x638 bool
    std::uint8_t m_bIsEnabled[0x1]; // 0x639 bool
    std::uint8_t m_bGradientFogNeedsTextures[0x5E]; // 0x63A bool
};

struct CCSPlayerController_InGameMoneyServices {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t m_iAccount[0x4]; // 0x40 int32
    std::uint8_t m_iStartAccount[0x4]; // 0x44 int32
    std::uint8_t m_iTotalCashSpent[0x4]; // 0x48 int32
    std::uint8_t m_iCashSpentThisRound[0x4]; // 0x4C int32
};

struct CCSPlayer_AimPunchServices {
    static constexpr std::size_t size = 0xE8;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_predictableBaseTick[0x4]; // 0x48 GameTick_t
    std::uint8_t m_predictableBaseTickInterpAmount[0x4]; // 0x4C float32
    std::uint8_t m_predictableBaseAngle[0xC]; // 0x50 QAngle
    std::uint8_t m_predictableBaseAngleVel[0x44]; // 0x5C QAngle
    std::uint8_t m_unpredictableBaseTick[0x4]; // 0xA0 GameTick_t
    std::uint8_t m_unpredictableBaseAngle[0x44]; // 0xA4 QAngle
};

struct C_HEGrenadeProjectile {
    static constexpr std::size_t size = 0x1348;
    std::uint8_t pad_0[0x1348]; // 0x0
};

struct CFilterModel {
    static constexpr std::size_t size = 0x640;
    std::uint8_t pad_0[0x638]; // 0x0
    std::uint8_t m_iFilterModel[0x8]; // 0x638 CUtlSymbolLarge
};

struct C_SoundAreaEntityOrientedBox {
    static constexpr std::size_t size = 0x640;
    std::uint8_t pad_0[0x628]; // 0x0
    std::uint8_t m_vMin[0xC]; // 0x628 Vector
    std::uint8_t m_vMax[0xC]; // 0x634 Vector
};

struct C_SoundOpvarSetPointEntity {
    static constexpr std::size_t size = 0x620;
    std::uint8_t pad_0[0x620]; // 0x0
};

struct CPulseGameBlackboard {
    static constexpr std::size_t size = 0x618;
    std::uint8_t pad_0[0x608]; // 0x0
    std::uint8_t m_strGraphName[0x8]; // 0x608 CUtlString
    std::uint8_t m_strStateBlob[0x8]; // 0x610 CUtlString
};

struct CChoreoComponent {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t __m_pChainEntity[0x28]; // 0x8 CNetworkVarChainer
    std::uint8_t m_hOwner[0x4]; // 0x30 CHandle<C_BaseModelEntity>
    std::uint8_t m_nExernalChoreoGraphCount[0x4]; // 0x34 int32
    std::uint8_t m_sActiveExternalChoreoGraphSlotID[0x38]; // 0x38 CGlobalSymbol
    std::uint8_t m_nNextSceneEventId[0x4]; // 0x70 SceneEventId_t
    std::uint8_t m_flAllowResponsesEndTime[0xC]; // 0x74 GameTime_t
};

struct CPulseCell_Value_RandomInt {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct C_CSWeaponBaseShotgun {
    static constexpr std::size_t size = 0x1F20;
    std::uint8_t pad_0[0x1F20]; // 0x0
};

struct C_RagdollPropAttached {
    static constexpr std::size_t size = 0x1328;
    std::uint8_t pad_0[0x12F0]; // 0x0
    std::uint8_t m_boneIndexAttached[0x4]; // 0x12F0 uint32
    std::uint8_t m_ragdollAttachedObjectIndex[0x4]; // 0x12F4 uint32
    std::uint8_t m_attachmentPointBoneSpace[0xC]; // 0x12F8 Vector
    std::uint8_t m_attachmentPointRagdollSpace[0xC]; // 0x1304 Vector
    std::uint8_t m_vecOffset[0xC]; // 0x1310 Vector
    std::uint8_t m_parentTime[0x4]; // 0x131C float32
    std::uint8_t m_bHasParent[0x8]; // 0x1320 bool
};

struct C_ModelPointEntity {
    static constexpr std::size_t size = 0x1098;
    std::uint8_t pad_0[0x1098]; // 0x0
};

struct C_CSGO_PreviewPlayer {
    static constexpr std::size_t size = 0x37D0;
    std::uint8_t pad_0[0x3720]; // 0x0
    std::uint8_t m_animgraphCharacterModeString[0x8]; // 0x3720 CGlobalSymbol
    std::uint8_t m_flInitialModelScale[0xA8]; // 0x3728 float32
};

struct C_RectLight {
    static constexpr std::size_t size = 0x13B0;
    std::uint8_t pad_0[0x13A8]; // 0x0
    std::uint8_t m_bShowLight[0x8]; // 0x13A8 bool
};

struct CCSRadarElement {
    static constexpr std::size_t size = 0x628;
    std::uint8_t pad_0[0x618]; // 0x0
    std::uint8_t m_nElementType[0x4]; // 0x618 uint32
    std::uint8_t m_nElementColor[0x4]; // 0x61C uint32
    std::uint8_t m_nTeamFilter[0x8]; // 0x620 uint32
};

struct CPathSimple {
    static constexpr std::size_t size = 0x710;
    std::uint8_t pad_0[0x610]; // 0x0
    std::uint8_t m_CPathQueryComponent[0xF0]; // 0x610 CPathQueryComponent
    std::uint8_t m_pathString[0x8]; // 0x700 CUtlString
    std::uint8_t m_bClosedLoop[0x8]; // 0x708 bool
};

struct C_FuncTrackTrain {
    static constexpr std::size_t size = 0x10A8;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t m_nLongAxis[0x4]; // 0x1098 int32
    std::uint8_t m_flRadius[0x4]; // 0x109C float32
    std::uint8_t m_flLineLength[0x8]; // 0x10A0 float32
};

struct C_EconWearable {
    static constexpr std::size_t size = 0x1920;
    std::uint8_t pad_0[0x1918]; // 0x0
    std::uint8_t m_nForceSkin[0x4]; // 0x1918 int32
    std::uint8_t m_bAlwaysAllow[0x4]; // 0x191C bool
};

struct C_EnvDecal {
    static constexpr std::size_t size = 0x10D0;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t m_hDecalMaterial[0x8]; // 0x1098 CStrongHandle<InfoForResourceTypeIMaterial2>
    std::uint8_t m_flWidth[0x4]; // 0x10A0 float32
    std::uint8_t m_flHeight[0x4]; // 0x10A4 float32
    std::uint8_t m_flDepth[0x4]; // 0x10A8 float32
    std::uint8_t m_nRenderOrder[0x4]; // 0x10AC uint32
    std::uint8_t m_bProjectOnWorld[0x1]; // 0x10B0 bool
    std::uint8_t m_bProjectOnCharacters[0x1]; // 0x10B1 bool
    std::uint8_t m_bProjectOnWater[0x2]; // 0x10B2 bool
    std::uint8_t m_flDepthSortBias[0x1C]; // 0x10B4 float32
};

struct EntitySpottedState_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_bSpotted[0x4]; // 0x8 bool
    std::uint8_t m_bSpottedByMask[0xC]; // 0xC uint32[2]
};

struct fogparams_t {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t dirPrimary[0xC]; // 0x8 Vector
    std::uint8_t colorPrimary[0x4]; // 0x14 Color
    std::uint8_t colorSecondary[0x4]; // 0x18 Color
    std::uint8_t colorPrimaryLerpTo[0x4]; // 0x1C Color
    std::uint8_t colorSecondaryLerpTo[0x4]; // 0x20 Color
    std::uint8_t start[0x4]; // 0x24 float32
    std::uint8_t end[0x4]; // 0x28 float32
    std::uint8_t farz[0x4]; // 0x2C float32
    std::uint8_t maxdensity[0x4]; // 0x30 float32
    std::uint8_t exponent[0x4]; // 0x34 float32
    std::uint8_t HDRColorScale[0x4]; // 0x38 float32
    std::uint8_t skyboxFogFactor[0x4]; // 0x3C float32
    std::uint8_t skyboxFogFactorLerpTo[0x4]; // 0x40 float32
    std::uint8_t startLerpTo[0x4]; // 0x44 float32
    std::uint8_t endLerpTo[0x4]; // 0x48 float32
    std::uint8_t maxdensityLerpTo[0x4]; // 0x4C float32
    std::uint8_t lerptime[0x4]; // 0x50 GameTime_t
    std::uint8_t duration[0x4]; // 0x54 float32
    std::uint8_t blendtobackground[0x4]; // 0x58 float32
    std::uint8_t scattering[0x4]; // 0x5C float32
    std::uint8_t locallightscale[0x4]; // 0x60 float32
    std::uint8_t enable[0x1]; // 0x64 bool
    std::uint8_t blend[0x1]; // 0x65 bool
    std::uint8_t m_bPadding2[0x1]; // 0x66 bool
    std::uint8_t m_bPadding[0x1]; // 0x67 bool
};

struct C_WeaponM4A1 {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F50]; // 0x0
};

struct C_Item {
    static constexpr std::size_t size = 0x1A18;
    std::uint8_t pad_0[0x1918]; // 0x0
    std::uint8_t m_pReticleHintTextName[0x100]; // 0x1918 char[256]
};

struct C_CSPetPlacement {
    static constexpr std::size_t size = 0x600;
    std::uint8_t pad_0[0x600]; // 0x0
};

struct C_Beam {
    static constexpr std::size_t size = 0x1150;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t m_flFrameRate[0x4]; // 0x1098 float32
    std::uint8_t m_flHDRColorScale[0x4]; // 0x109C float32
    std::uint8_t m_flFireTime[0x4]; // 0x10A0 GameTime_t
    std::uint8_t m_flDamage[0x4]; // 0x10A4 float32
    std::uint8_t m_nNumBeamEnts[0x4]; // 0x10A8 uint8
    std::uint8_t m_queryHandleHalo[0x24]; // 0x10AC int32
    std::uint8_t m_hBaseMaterial[0x8]; // 0x10D0 CStrongHandle<InfoForResourceTypeIMaterial2>
    std::uint8_t m_nHaloIndex[0x8]; // 0x10D8 CStrongHandle<InfoForResourceTypeIMaterial2>
    std::uint8_t m_nBeamType[0x4]; // 0x10E0 BeamType_t
    std::uint8_t m_nBeamFlags[0x4]; // 0x10E4 uint32
    std::uint8_t m_hAttachEntity[0x28]; // 0x10E8 CHandle<C_BaseEntity>[10]
    std::uint8_t m_nAttachIndex[0xC]; // 0x1110 AttachmentHandle_t[10]
    std::uint8_t m_fWidth[0x4]; // 0x111C float32
    std::uint8_t m_fEndWidth[0x4]; // 0x1120 float32
    std::uint8_t m_fFadeLength[0x4]; // 0x1124 float32
    std::uint8_t m_fHaloScale[0x4]; // 0x1128 float32
    std::uint8_t m_fAmplitude[0x4]; // 0x112C float32
    std::uint8_t m_fStartFrame[0x4]; // 0x1130 float32
    std::uint8_t m_fSpeed[0x4]; // 0x1134 float32
    std::uint8_t m_flFrame[0x4]; // 0x1138 float32
    std::uint8_t m_bTurnedOff[0x4]; // 0x113C bool
    std::uint8_t m_vecEndPos[0xC]; // 0x1140 VectorWS
    std::uint8_t m_hEndEntity[0x4]; // 0x114C CHandle<C_BaseEntity>
};

struct C_EnvLightProbeVolume {
    static constexpr std::size_t size = 0x720;
    std::uint8_t pad_0[0x698]; // 0x0
    std::uint8_t m_Entity_hLightProbeTexture_AmbientCube[0x8]; // 0x698 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_hLightProbeTexture_SDF[0x8]; // 0x6A0 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_hLightProbeTexture_SH2_DC[0x8]; // 0x6A8 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_hLightProbeTexture_SH2_L1[0x8]; // 0x6B0 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_hLightProbeDirectLightIndicesTexture[0x8]; // 0x6B8 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_hLightProbeDirectLightScalarsTexture[0x8]; // 0x6C0 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_hLightProbeDirectLightShadowsTexture[0x8]; // 0x6C8 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_Entity_vBoxMins[0xC]; // 0x6D0 Vector
    std::uint8_t m_Entity_vBoxMaxs[0xC]; // 0x6DC Vector
    std::uint8_t m_Entity_bMoveable[0x4]; // 0x6E8 bool
    std::uint8_t m_Entity_nHandshake[0x4]; // 0x6EC int32
    std::uint8_t m_Entity_nPriority[0x4]; // 0x6F0 int32
    std::uint8_t m_Entity_bStartDisabled[0x4]; // 0x6F4 bool
    std::uint8_t m_Entity_nLightProbeSizeX[0x4]; // 0x6F8 int32
    std::uint8_t m_Entity_nLightProbeSizeY[0x4]; // 0x6FC int32
    std::uint8_t m_Entity_nLightProbeSizeZ[0x4]; // 0x700 int32
    std::uint8_t m_Entity_nLightProbeAtlasX[0x4]; // 0x704 int32
    std::uint8_t m_Entity_nLightProbeAtlasY[0x4]; // 0x708 int32
    std::uint8_t m_Entity_nLightProbeAtlasZ[0xD]; // 0x70C int32
    std::uint8_t m_Entity_bEnabled[0x7]; // 0x719 bool
};

struct CExplosionTypeData {
    static constexpr std::size_t size = 0x100;
    std::uint8_t m_SoundName[0x10]; // 0x0 CSoundEventName
    std::uint8_t m_ParticleEffect[0xE0]; // 0x10 CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    std::uint8_t m_bIsIncindiary[0x1]; // 0xF0 bool
    std::uint8_t m_bHasForces[0x7]; // 0xF1 bool
    std::uint8_t m_DecalType[0x8]; // 0xF8 CGlobalSymbol
};

struct C_FuncConveyor {
    static constexpr std::size_t size = 0x10E0;
    std::uint8_t pad_0[0x10A0]; // 0x0
    std::uint8_t m_vecMoveDirEntitySpace[0xC]; // 0x10A0 Vector
    std::uint8_t m_flTargetSpeed[0x4]; // 0x10AC float32
    std::uint8_t m_nTransitionStartTick[0x4]; // 0x10B0 GameTick_t
    std::uint8_t m_nTransitionDurationTicks[0x4]; // 0x10B4 int32
    std::uint8_t m_flTransitionStartSpeed[0x4]; // 0x10B8 float32
    std::uint8_t m_flFrictionScale[0x4]; // 0x10BC float32
    std::uint8_t m_hConveyorModels[0x18]; // 0x10C0 C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
    std::uint8_t m_flCurrentConveyorOffset[0x4]; // 0x10D8 float32
    std::uint8_t m_flCurrentConveyorSpeed[0x4]; // 0x10DC float32
};

struct CCSPlayer_WeaponServices {
    static constexpr std::size_t size = 0x1608;
    std::uint8_t pad_0[0xD0]; // 0x0
    std::uint8_t m_flNextAttack[0x4]; // 0xD0 GameTime_t
    std::uint8_t m_nOldTotalShootPositionHistoryCount[0x29C]; // 0xD4 uint32
    std::uint8_t m_nOldTotalInputHistoryCount[0x1250]; // 0x370 uint32
    std::uint8_t m_networkAnimTiming[0x18]; // 0x15C0 C_NetworkUtlVectorBase<uint8>
    std::uint8_t m_bBlockInspectUntilNextGraphUpdate[0x30]; // 0x15D8 bool
};

struct C_PhysMagnet {
    static constexpr std::size_t size = 0x1298;
    std::uint8_t pad_0[0x1268]; // 0x0
    std::uint8_t m_aAttachedObjectsFromServer[0x18]; // 0x1268 CUtlVector<int32>
    std::uint8_t m_aAttachedObjects[0x18]; // 0x1280 CUtlVector<CHandle<C_BaseEntity>>
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
    std::uint8_t m_bBombTicking[0x4]; // 0x1288 bool
    std::uint8_t m_nBombSite[0x4]; // 0x128C int32
    std::uint8_t m_nSourceSoundscapeHash[0x8]; // 0x1290 int32
    std::uint8_t m_entitySpottedState[0x18]; // 0x1298 EntitySpottedState_t
    std::uint8_t m_flNextGlow[0x4]; // 0x12B0 GameTime_t
    std::uint8_t m_flNextBeep[0x4]; // 0x12B4 GameTime_t
    std::uint8_t m_flC4Blow[0x4]; // 0x12B8 GameTime_t
    std::uint8_t m_bCannotBeDefused[0x1]; // 0x12BC bool
    std::uint8_t m_bHasExploded[0x3]; // 0x12BD bool
    std::uint8_t m_flTimerLength[0x4]; // 0x12C0 float32
    std::uint8_t m_bBeingDefused[0x4]; // 0x12C4 bool
    std::uint8_t m_bTriggerWarning[0x4]; // 0x12C8 float32
    std::uint8_t m_bExplodeWarning[0x4]; // 0x12CC float32
    std::uint8_t m_bC4Activated[0x1]; // 0x12D0 bool
    std::uint8_t m_bTenSecWarning[0x3]; // 0x12D1 bool
    std::uint8_t m_flDefuseLength[0x4]; // 0x12D4 float32
    std::uint8_t m_flDefuseCountDown[0x4]; // 0x12D8 GameTime_t
    std::uint8_t m_bBombDefused[0x4]; // 0x12DC bool
    std::uint8_t m_hBombDefuser[0x8]; // 0x12E0 CHandle<C_CSPlayerPawn>
    std::uint8_t m_AttributeManager[0x610]; // 0x12E8 C_AttributeContainer
    std::uint8_t m_hDefuserMultimeter[0x4]; // 0x18F8 CHandle<C_Multimeter>
    std::uint8_t m_flNextRadarFlashTime[0x4]; // 0x18FC GameTime_t
    std::uint8_t m_bRadarFlash[0x4]; // 0x1900 bool
    std::uint8_t m_pBombDefuser[0x4]; // 0x1904 CHandle<C_CSPlayerPawn>
    std::uint8_t m_fLastDefuseTime[0x8]; // 0x1908 GameTime_t
    std::uint8_t m_pPredictionOwner[0x8]; // 0x1910 CBasePlayerController*
    std::uint8_t m_vecC4ExplodeSpectatePos[0xC]; // 0x1918 VectorWS
    std::uint8_t m_vecC4ExplodeSpectateAng[0xC]; // 0x1924 QAngle
    std::uint8_t m_flC4ExplodeSpectateDuration[0x28]; // 0x1930 float32
};

struct CCSCustomHudLayoutState {
    static constexpr std::size_t size = 0x108;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_playerSlot[0x4]; // 0x30 CPlayerSlot
    std::uint8_t m_bInputCaptureEnabled[0x4]; // 0x34 bool
    std::uint8_t m_vecHasClasses[0x18]; // 0x38 C_NetworkUtlVectorBase<HUDPanelHasClass_t>
    std::uint8_t m_vecDialogVariableStrings[0xB8]; // 0x50 C_NetworkUtlVectorBase<HUDPanelDialogVariableString_t>
};

struct CCSGO_WingmanIntroCharacterPosition {
    static constexpr std::size_t size = 0x1D18;
    std::uint8_t pad_0[0x1D18]; // 0x0
};

struct CFilterName {
    static constexpr std::size_t size = 0x640;
    std::uint8_t pad_0[0x638]; // 0x0
    std::uint8_t m_iFilterName[0x8]; // 0x638 CUtlSymbolLarge
};

struct C_RagdollProp {
    static constexpr std::size_t size = 0x12F0;
    std::uint8_t pad_0[0x1268]; // 0x0
    std::uint8_t m_ragEnabled[0x18]; // 0x1268 C_NetworkUtlVectorBase<bool>
    std::uint8_t m_ragPos[0x18]; // 0x1280 C_NetworkUtlVectorBase<Vector>
    std::uint8_t m_ragAngles[0x18]; // 0x1298 C_NetworkUtlVectorBase<QAngle>
    std::uint8_t m_flBlendWeight[0x4]; // 0x12B0 float32
    std::uint8_t m_hRagdollSource[0x4]; // 0x12B4 CHandle<C_BaseEntity>
    std::uint8_t m_iEyeAttachment[0x4]; // 0x12B8 AttachmentHandle_t
    std::uint8_t m_flBlendWeightCurrent[0x4]; // 0x12BC float32
    std::uint8_t m_parentPhysicsBoneIndices[0x18]; // 0x12C0 CUtlVector<int32>
    std::uint8_t m_worldSpaceBoneComputationOrder[0x18]; // 0x12D8 CUtlVector<int32>
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

struct C_MapPreviewParticleSystem {
    static constexpr std::size_t size = 0x1668;
    std::uint8_t pad_0[0x1668]; // 0x0
};

struct CBaseAnimGraph {
    static constexpr std::size_t size = 0x1268;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t m_graphControllerManager[0x98]; // 0x1098 CAnimGraphControllerManager
    std::uint8_t m_pMainGraphController[0x8]; // 0x1130 CAnimGraphControllerPtr
    std::uint8_t m_bInitiallyPopulateInterpHistory[0x2]; // 0x1138 bool
    std::uint8_t m_bSuppressAnimEventSounds[0x6]; // 0x113A bool
    std::uint8_t m_OnLayerCycleUpdated[0x20]; // 0x1140 CEntityOutputTemplate<float32>
    std::uint8_t m_OnExternalChoreoGraphChanged[0x20]; // 0x1160 CEntityIOOutput
    std::uint8_t m_bAnimGraphUpdateEnabled[0x1]; // 0x1180 bool
    std::uint8_t m_bAnimationUpdateScheduled[0x3]; // 0x1181 bool
    std::uint8_t m_vecForce[0xC]; // 0x1184 Vector
    std::uint8_t m_nForceBone[0x8]; // 0x1190 int32
    std::uint8_t m_pClientsideRagdoll[0x8]; // 0x1198 CBaseAnimGraph*
    std::uint8_t m_bBuiltRagdoll[0x10]; // 0x11A0 bool
    std::uint8_t m_pRagdollControl[0x8]; // 0x11B0 IPhysicsRagdollControl*
    std::uint8_t m_RagdollPose[0x48]; // 0x11B8 PhysicsRagdollPose_t
    std::uint8_t m_bRagdollEnabled[0x1]; // 0x1200 bool
    std::uint8_t m_bRagdollClientSide[0x1]; // 0x1201 bool
    std::uint8_t m_bShouldUpdateTransformations[0xE]; // 0x1202 bool
    std::uint8_t m_bHasAnimatedMaterialAttributes[0x58]; // 0x1210 bool
};

struct CPulseCell_InlineNodeSkipSelector {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_nFlowNodeID[0x4]; // 0x48 PulseDocNodeID_t
    std::uint8_t m_bAnd[0x4]; // 0x4C bool
    std::uint8_t m_PassOutflow[0x18]; // 0x50 PulseSelectorOutflowList_t
    std::uint8_t m_FailOutflow[0x48]; // 0x68 CPulse_OutflowConnection
};

struct C_LightEntity {
    static constexpr std::size_t size = 0x10A0;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t m_CLightComponent[0x8]; // 0x1098 CLightComponent*
};

struct C_WeaponM249 {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F50]; // 0x0
};

struct C_LocalTempEntity {
    static constexpr std::size_t size = 0x1310;
    std::uint8_t pad_0[0x1268]; // 0x0
    std::uint8_t flags[0x4]; // 0x1268 int32
    std::uint8_t die[0x4]; // 0x126C GameTime_t
    std::uint8_t m_flFrameMax[0x4]; // 0x1270 float32
    std::uint8_t x[0x4]; // 0x1274 float32
    std::uint8_t y[0x4]; // 0x1278 float32
    std::uint8_t fadeSpeed[0x4]; // 0x127C float32
    std::uint8_t bounceFactor[0x4]; // 0x1280 float32
    std::uint8_t hitSound[0x4]; // 0x1284 int32
    std::uint8_t priority[0x4]; // 0x1288 int32
    std::uint8_t tentOffset[0xC]; // 0x128C Vector
    std::uint8_t m_vecTempEntAngVelocity[0xC]; // 0x1298 QAngle
    std::uint8_t tempent_renderamt[0x4]; // 0x12A4 int32
    std::uint8_t m_vecNormal[0xC]; // 0x12A8 Vector
    std::uint8_t m_flSpriteScale[0x4]; // 0x12B4 float32
    std::uint8_t m_nFlickerFrame[0x4]; // 0x12B8 int32
    std::uint8_t m_flFrameRate[0x4]; // 0x12BC float32
    std::uint8_t m_flFrame[0x8]; // 0x12C0 float32
    std::uint8_t m_pszImpactEffect[0x8]; // 0x12C8 char*
    std::uint8_t m_pszParticleEffect[0x8]; // 0x12D0 char*
    std::uint8_t m_bParticleCollision[0x4]; // 0x12D8 bool
    std::uint8_t m_iLastCollisionFrame[0x4]; // 0x12DC int32
    std::uint8_t m_vLastCollisionOrigin[0xC]; // 0x12E0 VectorWS
    std::uint8_t m_vecTempEntVelocity[0xC]; // 0x12EC Vector
    std::uint8_t m_vecPrevAbsOrigin[0xC]; // 0x12F8 VectorWS
    std::uint8_t m_vecTempEntAcceleration[0xC]; // 0x1304 Vector
};

struct C_WeaponTaser {
    static constexpr std::size_t size = 0x1F60;
    std::uint8_t pad_0[0x1F50]; // 0x0
    std::uint8_t m_fFireTime[0x4]; // 0x1F50 GameTime_t
    std::uint8_t m_nLastAttackTick[0xC]; // 0x1F54 int32
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
    static constexpr std::size_t size = 0xA8;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_hMyWeapons[0x18]; // 0x48 C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
    std::uint8_t m_hActiveWeapon[0x4]; // 0x60 CHandle<C_BasePlayerWeapon>
    std::uint8_t m_hLastWeapon[0x4]; // 0x64 CHandle<C_BasePlayerWeapon>
    std::uint8_t m_iAmmo[0x40]; // 0x68 uint16[32]
};

struct C_WeaponNegev {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F50]; // 0x0
};

struct C_WeaponFiveSeven {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F50]; // 0x0
};

struct C_WeaponSawedoff {
    static constexpr std::size_t size = 0x1F20;
    std::uint8_t pad_0[0x1F20]; // 0x0
};

struct C_TriggerVolume {
    static constexpr std::size_t size = 0x1098;
    std::uint8_t pad_0[0x1098]; // 0x0
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

struct C_WeaponMP9 {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F50]; // 0x0
};

struct C_DynamicPropAlias_prop_dynamic_override {
    static constexpr std::size_t size = 0x14B0;
    std::uint8_t pad_0[0x14B0]; // 0x0
};

struct CEnvSoundscapeTriggerable {
    static constexpr std::size_t size = 0x690;
    std::uint8_t pad_0[0x690]; // 0x0
};

struct C_PlayerPing {
    static constexpr std::size_t size = 0x650;
    std::uint8_t pad_0[0x630]; // 0x0
    std::uint8_t m_hPlayer[0x4]; // 0x630 CHandle<C_CSPlayerPawn>
    std::uint8_t m_hPingedEntity[0x4]; // 0x634 CHandle<C_BaseEntity>
    std::uint8_t m_iType[0x4]; // 0x638 int32
    std::uint8_t m_bUrgent[0x1]; // 0x63C bool
    std::uint8_t m_szPlaceName[0x13]; // 0x63D char[18]
};

struct C_AK47 {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F50]; // 0x0
};

struct C_CSGO_MapPreviewCameraPathNode {
    static constexpr std::size_t size = 0x650;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_szParentPathUniqueID[0x8]; // 0x600 CUtlSymbolLarge
    std::uint8_t m_nPathIndex[0x4]; // 0x608 int32
    std::uint8_t m_vInTangentLocal[0xC]; // 0x60C Vector
    std::uint8_t m_vOutTangentLocal[0xC]; // 0x618 Vector
    std::uint8_t m_flFOV[0x4]; // 0x624 float32
    std::uint8_t m_flCameraSpeed[0x4]; // 0x628 float32
    std::uint8_t m_flEaseIn[0x4]; // 0x62C float32
    std::uint8_t m_flEaseOut[0x4]; // 0x630 float32
    std::uint8_t m_vInTangentWorld[0xC]; // 0x634 Vector
    std::uint8_t m_vOutTangentWorld[0x10]; // 0x640 Vector
};

struct C_CSPlayerResource {
    static constexpr std::size_t size = 0x698;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_bHostageAlive[0xC]; // 0x600 bool[12]
    std::uint8_t m_isHostageFollowingSomeone[0xC]; // 0x60C bool[12]
    std::uint8_t m_iHostageEntityIDs[0x30]; // 0x618 CEntityIndex[12]
    std::uint8_t m_bombsiteCenterA[0xC]; // 0x648 VectorWS
    std::uint8_t m_bombsiteCenterB[0xC]; // 0x654 VectorWS
    std::uint8_t m_hostageRescueX[0x10]; // 0x660 int32[4]
    std::uint8_t m_hostageRescueY[0x10]; // 0x670 int32[4]
    std::uint8_t m_hostageRescueZ[0x10]; // 0x680 int32[4]
    std::uint8_t m_bEndMatchNextMapAllVoted[0x1]; // 0x690 bool
    std::uint8_t m_foundGoalPositions[0x7]; // 0x691 bool
};

struct CSkyboxReference {
    static constexpr std::size_t size = 0x608;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_worldGroupId[0x4]; // 0x600 WorldGroupId_t
    std::uint8_t m_hSkyCamera[0x4]; // 0x604 CHandle<C_SkyCamera>
};

struct C_IncendiaryGrenade {
    static constexpr std::size_t size = 0x1FE0;
    std::uint8_t pad_0[0x1FE0]; // 0x0
};

struct CFilterClass {
    static constexpr std::size_t size = 0x640;
    std::uint8_t pad_0[0x638]; // 0x0
    std::uint8_t m_iFilterClass[0x8]; // 0x638 CUtlSymbolLarge
};

struct C_PointCameraVFOV {
    static constexpr std::size_t size = 0x668;
    std::uint8_t pad_0[0x660]; // 0x0
    std::uint8_t m_flVerticalFOV[0x8]; // 0x660 float32
};

struct C_PointCamera {
    static constexpr std::size_t size = 0x660;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_FOV[0x4]; // 0x600 float32
    std::uint8_t m_Resolution[0x4]; // 0x604 float32
    std::uint8_t m_bFogEnable[0x4]; // 0x608 bool
    std::uint8_t m_FogColor[0x4]; // 0x60C Color
    std::uint8_t m_flFogStart[0x4]; // 0x610 float32
    std::uint8_t m_flFogEnd[0x4]; // 0x614 float32
    std::uint8_t m_flFogMaxDensity[0x4]; // 0x618 float32
    std::uint8_t m_bActive[0x1]; // 0x61C bool
    std::uint8_t m_bUseScreenAspectRatio[0x3]; // 0x61D bool
    std::uint8_t m_flAspectRatio[0x4]; // 0x620 float32
    std::uint8_t m_bNoSky[0x4]; // 0x624 bool
    std::uint8_t m_fBrightness[0x4]; // 0x628 float32
    std::uint8_t m_flZFar[0x4]; // 0x62C float32
    std::uint8_t m_flZNear[0x4]; // 0x630 float32
    std::uint8_t m_bCanHLTVUse[0x1]; // 0x634 bool
    std::uint8_t m_bAlignWithParent[0x1]; // 0x635 bool
    std::uint8_t m_bDofEnabled[0x2]; // 0x636 bool
    std::uint8_t m_flDofNearBlurry[0x4]; // 0x638 float32
    std::uint8_t m_flDofNearCrisp[0x4]; // 0x63C float32
    std::uint8_t m_flDofFarCrisp[0x4]; // 0x640 float32
    std::uint8_t m_flDofFarBlurry[0x4]; // 0x644 float32
    std::uint8_t m_flDofTiltToGround[0x4]; // 0x648 float32
    std::uint8_t m_TargetFOV[0x4]; // 0x64C float32
    std::uint8_t m_DegreesPerSecond[0x4]; // 0x650 float32
    std::uint8_t m_bIsOn[0x4]; // 0x654 bool
    std::uint8_t m_pNext[0x8]; // 0x658 C_PointCamera*
};

struct CPathWithDynamicNodes {
    static constexpr std::size_t size = 0x760;
    std::uint8_t pad_0[0x710]; // 0x0
    std::uint8_t m_vecPathNodes[0x20]; // 0x710 C_NetworkUtlVectorBase<CHandle<CPathNode>>
    std::uint8_t m_xInitialPathWorldToLocal[0x20]; // 0x730 CTransform
    std::uint8_t m_eDesiredDirection[0x4]; // 0x750 DirectionAlongSimplePath_t
    std::uint8_t m_bIgnoreParentRotation[0xC]; // 0x754 bool
};

struct CBaseFilter {
    static constexpr std::size_t size = 0x638;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_bNegated[0x8]; // 0x600 bool
    std::uint8_t m_OnPass[0x18]; // 0x608 CEntityIOOutput
    std::uint8_t m_OnFail[0x18]; // 0x620 CEntityIOOutput
};

struct WeaponPurchaseTracker_t {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_weaponPurchases[0x68]; // 0x8 C_UtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
};

struct CMapInfo {
    static constexpr std::size_t size = 0x630;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_iBuyingStatus[0x4]; // 0x600 int32
    std::uint8_t m_flBombRadius[0x4]; // 0x604 float32
    std::uint8_t m_iPetPopulation[0x4]; // 0x608 int32
    std::uint8_t m_bUseNormalSpawnsForDM[0x1]; // 0x60C bool
    std::uint8_t m_bDisableAutoGeneratedDMSpawns[0x3]; // 0x60D bool
    std::uint8_t m_flBotMaxVisionDistance[0x4]; // 0x610 float32
    std::uint8_t m_iHostageCount[0x4]; // 0x614 int32
    std::uint8_t m_bFadePlayerVisibilityFarZ[0x1]; // 0x618 bool
    std::uint8_t m_bRainTraceToSkyEnabled[0x1]; // 0x619 bool
    std::uint8_t m_bGPUCullSkybox[0x2]; // 0x61A bool
    std::uint8_t m_flEnvRainStrength[0x4]; // 0x61C float32
    std::uint8_t m_flEnvPuddleRippleStrength[0x4]; // 0x620 float32
    std::uint8_t m_flEnvPuddleRippleDirection[0x4]; // 0x624 float32
    std::uint8_t m_flEnvWetnessCoverage[0x4]; // 0x628 float32
    std::uint8_t m_flEnvWetnessDryingAmount[0x4]; // 0x62C float32
};

struct C_CSGO_EndOfMatchCamera {
    static constexpr std::size_t size = 0x690;
    std::uint8_t pad_0[0x690]; // 0x0
};

struct C_BaseGrenade {
    static constexpr std::size_t size = 0x12B0;
    std::uint8_t pad_0[0x1268]; // 0x0
    std::uint8_t m_bHasWarnedAI[0x1]; // 0x1268 bool
    std::uint8_t m_bIsSmokeGrenade[0x1]; // 0x1269 bool
    std::uint8_t m_bIsLive[0x2]; // 0x126A bool
    std::uint8_t m_DmgRadius[0x4]; // 0x126C float32
    std::uint8_t m_flDetonateTime[0x4]; // 0x1270 GameTime_t
    std::uint8_t m_flWarnAITime[0x4]; // 0x1274 float32
    std::uint8_t m_flDamage[0x8]; // 0x1278 float32
    std::uint8_t m_iszBounceSound[0x8]; // 0x1280 CUtlSymbolLarge
    std::uint8_t m_ExplosionSound[0x8]; // 0x1288 CUtlString
    std::uint8_t m_hThrower[0x18]; // 0x1290 CHandle<C_CSPlayerPawn>
    std::uint8_t m_flNextAttack[0x4]; // 0x12A8 GameTime_t
    std::uint8_t m_hOriginalThrower[0x4]; // 0x12AC CHandle<C_CSPlayerPawn>
};

struct C_PlayerSprayDecal {
    static constexpr std::size_t size = 0x11A8;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t m_nUniqueID[0x4]; // 0x1098 int32
    std::uint8_t m_unAccountID[0x4]; // 0x109C uint32
    std::uint8_t m_unTraceID[0x4]; // 0x10A0 uint32
    std::uint8_t m_rtGcTime[0x4]; // 0x10A4 uint32
    std::uint8_t m_vecEndPos[0xC]; // 0x10A8 VectorWS
    std::uint8_t m_vecStart[0xC]; // 0x10B4 VectorWS
    std::uint8_t m_vecLeft[0xC]; // 0x10C0 Vector
    std::uint8_t m_vecNormal[0xC]; // 0x10CC Vector
    std::uint8_t m_nPlayer[0x4]; // 0x10D8 int32
    std::uint8_t m_nEntity[0x4]; // 0x10DC int32
    std::uint8_t m_nHitbox[0x4]; // 0x10E0 int32
    std::uint8_t m_flCreationTime[0x4]; // 0x10E4 float32
    std::uint8_t m_nTintID[0x4]; // 0x10E8 int32
    std::uint8_t m_nVersion[0x1]; // 0x10EC uint8
    std::uint8_t m_ubSignature[0x8B]; // 0x10ED uint8[128]
    std::uint8_t m_SprayRenderHelper[0x30]; // 0x1178 CPlayerSprayDecalRenderHelper
};

struct CEntityIdentity {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x14]; // 0x0
    std::uint8_t m_nameStringTableIndex[0x4]; // 0x14 int32
    std::uint8_t m_name[0x8]; // 0x18 CUtlSymbolLarge
    std::uint8_t m_designerName[0x10]; // 0x20 CUtlSymbolLarge
    std::uint8_t m_flags[0x8]; // 0x30 uint32
    std::uint8_t m_worldGroupId[0x4]; // 0x38 WorldGroupId_t
    std::uint8_t m_fDataObjectTypes[0x4]; // 0x3C uint32
    std::uint8_t m_PathIndex[0x8]; // 0x40 ChangeAccessorFieldPathIndex_t
    std::uint8_t m_pAttributes[0x8]; // 0x48 CEntityAttributeTable*
    std::uint8_t m_pPrev[0x8]; // 0x50 CEntityIdentity*
    std::uint8_t m_pNext[0x8]; // 0x58 CEntityIdentity*
    std::uint8_t m_pPrevByClass[0x8]; // 0x60 CEntityIdentity*
    std::uint8_t m_pNextByClass[0x8]; // 0x68 CEntityIdentity*
};

struct CPulseCell_LimitCount__Criteria_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t m_bLimitCountPasses[0x1]; // 0x0 bool
};

struct C_CS2HudModelArms {
    static constexpr std::size_t size = 0x1460;
    std::uint8_t pad_0[0x1460]; // 0x0
};

struct CBasePlayerVData {
    static constexpr std::size_t size = 0x258;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_sModelName[0xE0]; // 0x28 CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    std::uint8_t m_sModelNameAg2Override[0xE0]; // 0x108 CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    std::uint8_t m_flHeadDamageMultiplier[0x10]; // 0x1E8 CSkillFloat
    std::uint8_t m_flChestDamageMultiplier[0x10]; // 0x1F8 CSkillFloat
    std::uint8_t m_flStomachDamageMultiplier[0x10]; // 0x208 CSkillFloat
    std::uint8_t m_flArmDamageMultiplier[0x10]; // 0x218 CSkillFloat
    std::uint8_t m_flLegDamageMultiplier[0x10]; // 0x228 CSkillFloat
    std::uint8_t m_flHoldBreathTime[0x4]; // 0x238 float32
    std::uint8_t m_flDrowningDamageInterval[0x4]; // 0x23C float32
    std::uint8_t m_nDrowningDamageInitial[0x4]; // 0x240 int32
    std::uint8_t m_nDrowningDamageMax[0x4]; // 0x244 int32
    std::uint8_t m_nWaterSpeed[0x4]; // 0x248 int32
    std::uint8_t m_flUseRange[0x4]; // 0x24C float32
    std::uint8_t m_flUseAngleTolerance[0x4]; // 0x250 float32
    std::uint8_t m_flCrouchTime[0x4]; // 0x254 float32
};

struct C_LightSpotEntity {
    static constexpr std::size_t size = 0x10A0;
    std::uint8_t pad_0[0x10A0]; // 0x0
};

struct CCSGameModeRules_Deathmatch {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_flDMBonusStartTime[0x4]; // 0x30 GameTime_t
    std::uint8_t m_flDMBonusTimeLength[0x4]; // 0x34 float32
    std::uint8_t m_sDMBonusWeapon[0x8]; // 0x38 CUtlString
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

struct C_Sprite {
    static constexpr std::size_t size = 0x1118;
    std::uint8_t pad_0[0x1098]; // 0x0
    std::uint8_t m_hSpriteMaterial[0x8]; // 0x1098 CStrongHandle<InfoForResourceTypeIMaterial2>
    std::uint8_t m_hAttachedToEntity[0x4]; // 0x10A0 CHandle<C_BaseEntity>
    std::uint8_t m_nAttachment[0x4]; // 0x10A4 AttachmentHandle_t
    std::uint8_t m_flSpriteFramerate[0x4]; // 0x10A8 float32
    std::uint8_t m_flFrame[0x4]; // 0x10AC float32
    std::uint8_t m_flDieTime[0x10]; // 0x10B0 GameTime_t
    std::uint8_t m_nBrightness[0x4]; // 0x10C0 uint32
    std::uint8_t m_flBrightnessDuration[0x4]; // 0x10C4 float32
    std::uint8_t m_flSpriteScale[0x4]; // 0x10C8 float32
    std::uint8_t m_flScaleDuration[0x4]; // 0x10CC float32
    std::uint8_t m_bWorldSpaceScale[0x4]; // 0x10D0 bool
    std::uint8_t m_flGlowProxySize[0x4]; // 0x10D4 float32
    std::uint8_t m_flHDRColorScale[0x4]; // 0x10D8 float32
    std::uint8_t m_flLastTime[0x4]; // 0x10DC GameTime_t
    std::uint8_t m_flMaxFrame[0x4]; // 0x10E0 float32
    std::uint8_t m_flStartScale[0x4]; // 0x10E4 float32
    std::uint8_t m_flDestScale[0x4]; // 0x10E8 float32
    std::uint8_t m_flScaleTimeStart[0x4]; // 0x10EC GameTime_t
    std::uint8_t m_nStartBrightness[0x4]; // 0x10F0 int32
    std::uint8_t m_nDestBrightness[0x4]; // 0x10F4 int32
    std::uint8_t m_flBrightnessTimeStart[0x10]; // 0x10F8 GameTime_t
    std::uint8_t m_nSpriteWidth[0x4]; // 0x1108 int32
    std::uint8_t m_nSpriteHeight[0x4]; // 0x110C int32
    std::uint8_t m_flSpeed[0x8]; // 0x1110 float32
};

struct C_CsmFovOverride {
    static constexpr std::size_t size = 0x610;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_cameraName[0x8]; // 0x600 CUtlString
    std::uint8_t m_flCsmFovOverrideValue[0x8]; // 0x608 float32
};

struct C_WeaponGlock {
    static constexpr std::size_t size = 0x1F50;
    std::uint8_t pad_0[0x1F50]; // 0x0
};

struct C_PhysicsProp {
    static constexpr std::size_t size = 0x13F0;
    std::uint8_t pad_0[0x13E0]; // 0x0
    std::uint8_t m_bAwake[0x10]; // 0x13E0 bool
};

struct CFilterTeam {
    static constexpr std::size_t size = 0x640;
    std::uint8_t pad_0[0x638]; // 0x0
    std::uint8_t m_iFilterTeam[0x8]; // 0x638 int32
};

struct CBasePlayerWeaponVData {
    static constexpr std::size_t size = 0x520;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_szWorldModel[0xE0]; // 0x28 CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    std::uint8_t m_szWorldModelAg2Override[0xE0]; // 0x108 CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    std::uint8_t m_sToolsOnlyOwnerModelName[0xE0]; // 0x1E8 CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    std::uint8_t m_bBuiltRightHanded[0x1]; // 0x2C8 bool
    std::uint8_t m_bAllowFlipping[0x7]; // 0x2C9 bool
    std::uint8_t m_sMuzzleAttachment[0x20]; // 0x2D0 CAttachmentNameSymbolWithStorage
    std::uint8_t m_szMuzzleFlashParticle[0xE0]; // 0x2F0 CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    std::uint8_t m_szMuzzleFlashParticleConfig[0x8]; // 0x3D0 CUtlString
    std::uint8_t m_szBarrelSmokeParticle[0xE0]; // 0x3D8 CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    std::uint8_t m_nMuzzleSmokeShotThreshold[0x4]; // 0x4B8 uint8
    std::uint8_t m_flMuzzleSmokeTimeout[0x4]; // 0x4BC float32
    std::uint8_t m_flMuzzleSmokeDecrementRate[0x4]; // 0x4C0 float32
    std::uint8_t m_bGenerateMuzzleLight[0x1]; // 0x4C4 bool
    std::uint8_t m_bShouldAnimateInWorld[0x1]; // 0x4C5 bool
    std::uint8_t m_bLinkedCooldowns[0x1]; // 0x4C6 bool
    std::uint8_t m_iFlags[0x1]; // 0x4C7 ItemFlagTypes_t
    std::uint8_t m_iWeight[0x4]; // 0x4C8 int32
    std::uint8_t m_bAutoSwitchTo[0x1]; // 0x4CC bool
    std::uint8_t m_bAutoSwitchFrom[0x1]; // 0x4CD bool
    std::uint8_t m_nPrimaryAmmoType[0x1]; // 0x4CE AmmoIndex_t
    std::uint8_t m_nSecondaryAmmoType[0x1]; // 0x4CF AmmoIndex_t
    std::uint8_t m_iMaxClip1[0x4]; // 0x4D0 int32
    std::uint8_t m_iMaxClip2[0x4]; // 0x4D4 int32
    std::uint8_t m_iDefaultClip1[0x4]; // 0x4D8 int32
    std::uint8_t m_iDefaultClip2[0x4]; // 0x4DC int32
    std::uint8_t m_bReserveAmmoAsClips[0x1]; // 0x4E0 bool
    std::uint8_t m_bTreatAsSingleClip[0x1]; // 0x4E1 bool
    std::uint8_t m_bKeepLoadedAmmo[0x2]; // 0x4E2 bool
    std::uint8_t m_iRumbleEffect[0x4]; // 0x4E4 RumbleEffect_t
    std::uint8_t m_flDropSpeed[0x4]; // 0x4E8 float32
    std::uint8_t m_iSlot[0x4]; // 0x4EC int32
    std::uint8_t m_iPosition[0x8]; // 0x4F0 int32
    std::uint8_t m_aShootSounds[0x28]; // 0x4F8 CUtlOrderedMap<WeaponSound_t,CSoundEventName>
};

struct C_SmokeGrenade {
    static constexpr std::size_t size = 0x1FE0;
    std::uint8_t pad_0[0x1FE0]; // 0x0
};

struct C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel {
    static constexpr std::size_t size = 0x37D0;
    std::uint8_t pad_0[0x37D0]; // 0x0
};

struct CCSGO_RushIntroCharacterPosition {
    static constexpr std::size_t size = 0x1D18;
    std::uint8_t pad_0[0x1D18]; // 0x0
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
    std::uint8_t pad_0[0x10D0]; // 0x0
    std::uint8_t m_bForceRecreateNextUpdate[0x1]; // 0x10D0 bool
    std::uint8_t m_bMoveViewToPlayerNextThink[0x1]; // 0x10D1 bool
    std::uint8_t m_bCheckCSSClasses[0xE]; // 0x10D2 bool
    std::uint8_t m_anchorDeltaTransform[0x190]; // 0x10E0 CTransform
    std::uint8_t m_pOffScreenIndicator[0x28]; // 0x1270 CPointOffScreenIndicatorUi*
    std::uint8_t m_bIgnoreInput[0x1]; // 0x1298 bool
    std::uint8_t m_bLit[0x1]; // 0x1299 bool
    std::uint8_t m_bFollowPlayerAcrossTeleport[0x2]; // 0x129A bool
    std::uint8_t m_flWidth[0x4]; // 0x129C float32
    std::uint8_t m_flHeight[0x4]; // 0x12A0 float32
    std::uint8_t m_flDPI[0x4]; // 0x12A4 float32
    std::uint8_t m_flWindowUIScale[0x4]; // 0x12A8 float32
    std::uint8_t m_flInteractDistance[0x4]; // 0x12AC float32
    std::uint8_t m_flDepthOffset[0x4]; // 0x12B0 float32
    std::uint8_t m_unOwnerContext[0x4]; // 0x12B4 uint32
    std::uint8_t m_unHorizontalAlign[0x4]; // 0x12B8 uint32
    std::uint8_t m_unVerticalAlign[0x4]; // 0x12BC uint32
    std::uint8_t m_unOrientation[0x4]; // 0x12C0 uint32
    std::uint8_t m_bAllowInteractionFromAllSceneWorlds[0x4]; // 0x12C4 bool
    std::uint8_t m_vecCSSClasses[0x18]; // 0x12C8 C_NetworkUtlVectorBase<CUtlSymbolLarge>
    std::uint8_t m_bOpaque[0x1]; // 0x12E0 bool
    std::uint8_t m_bNoDepth[0x1]; // 0x12E1 bool
    std::uint8_t m_bVisibleWhenParentNoDraw[0x1]; // 0x12E2 bool
    std::uint8_t m_bRenderBackface[0x1]; // 0x12E3 bool
    std::uint8_t m_bUseOffScreenIndicator[0x1]; // 0x12E4 bool
    std::uint8_t m_bExcludeFromSaveGames[0x1]; // 0x12E5 bool
    std::uint8_t m_bGrabbable[0x1]; // 0x12E6 bool
    std::uint8_t m_bOnlyRenderToTexture[0x1]; // 0x12E7 bool
    std::uint8_t m_bDisableMipGen[0x4]; // 0x12E8 bool
    std::uint8_t m_nExplicitImageLayout[0x4]; // 0x12EC int32
    std::uint8_t m_bIgnoreParentOrientation[0x10]; // 0x12F0 bool
};

struct C_EntityFlame {
    static constexpr std::size_t size = 0x648;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t m_hEntAttached[0x28]; // 0x600 CHandle<C_BaseEntity>
    std::uint8_t m_hOldAttached[0x4]; // 0x628 CHandle<C_BaseEntity>
    std::uint8_t m_bCheapEffect[0x1C]; // 0x62C bool
};

struct CBaseAnimGraphAlias_baseanimating {
    static constexpr std::size_t size = 0x1268;
    std::uint8_t pad_0[0x1268]; // 0x0
};

struct CBasePlayerController {
    static constexpr std::size_t size = 0x800;
    std::uint8_t pad_0[0x608]; // 0x0
    std::uint8_t m_CommandContext[0xA8]; // 0x608 C_CommandContext
    std::uint8_t m_nInButtonsWhichAreToggles[0x8]; // 0x6B0 uint64
    std::uint8_t m_nTickBase[0x4]; // 0x6B8 uint32
    std::uint8_t m_hPawn[0x4]; // 0x6BC CHandle<C_BasePlayerPawn>
    std::uint8_t m_bKnownTeamMismatch[0x4]; // 0x6C0 bool
    std::uint8_t m_hPredictedPawn[0x8]; // 0x6C4 CHandle<C_BasePlayerPawn>
    std::uint8_t m_nSplitScreenSlot[0x4]; // 0x6CC CSplitScreenSlot
    std::uint8_t m_hSplitOwner[0x8]; // 0x6D0 CHandle<CBasePlayerController>
    std::uint8_t m_hSplitScreenPlayers[0x18]; // 0x6D8 CUtlVector<CHandle<CBasePlayerController>>
    std::uint8_t m_bIsHLTV[0x4]; // 0x6F0 bool
    std::uint8_t m_iConnected[0x4]; // 0x6F4 PlayerConnectedState
    std::uint8_t m_iMostConnected[0x4]; // 0x6F8 PlayerConnectedState
    std::uint8_t m_iszPlayerName[0x8C]; // 0x6FC char[128]
    std::uint8_t m_steamID[0x8]; // 0x788 uint64
    std::uint8_t m_bIsLocalPlayerController[0x1]; // 0x790 bool
    std::uint8_t m_bNoClipEnabled[0x3]; // 0x791 bool
    std::uint8_t m_iDesiredFOV[0x6C]; // 0x794 uint32
};

struct C_CSGO_EndOfMatchLineupEndpoint {
    static constexpr std::size_t size = 0x600;
    std::uint8_t pad_0[0x600]; // 0x0
};

struct GeneratedTextureHandle_t {
    static constexpr std::size_t size = 0x60;
    std::uint8_t m_strBitmapName[0x60]; // 0x0 CUtlString
};

struct CompositeMaterialInputContainer_t {
    static constexpr std::size_t size = 0x138;
    std::uint8_t m_bEnabled[0x4]; // 0x0 bool
    std::uint8_t m_nCompositeMaterialInputContainerSourceType[0x4]; // 0x4 CompositeMaterialInputContainerSourceType_t
    std::uint8_t m_strSpecificContainerMaterial[0xE0]; // 0x8 CResourceNameTyped<CWeakHandle<InfoForResourceTypeIMaterial2>>
    std::uint8_t m_strAttrName[0x8]; // 0xE8 CUtlString
    std::uint8_t m_strAlias[0x8]; // 0xF0 CUtlString
    std::uint8_t m_vecLooseVariables[0x18]; // 0xF8 CUtlVector<CompositeMaterialInputLooseVariable_t>
    std::uint8_t m_strAttrNameForVar[0x8]; // 0x110 CUtlString
    std::uint8_t m_bExposeExternally[0x20]; // 0x118 bool
};

struct CompositeMaterialAssemblyProcedure_t {
    static constexpr std::size_t size = 0x60;
    std::uint8_t m_vecCompMatIncludes[0x18]; // 0x0 CUtlVector<CResourceNameTyped<CWeakHandle<InfoForResourceTypeCCompositeMaterialKit>>>
    std::uint8_t m_vecMatchFilters[0x18]; // 0x18 CUtlVector<CompositeMaterialMatchFilter_t>
    std::uint8_t m_vecCompositeInputContainers[0x18]; // 0x30 CUtlVector<CompositeMaterialInputContainer_t>
    std::uint8_t m_vecPropertyMutators[0x18]; // 0x48 CUtlVector<CompMatPropertyMutator_t>
};

struct CompositeMaterialInputLooseVariable_t {
    static constexpr std::size_t size = 0x288;
    std::uint8_t m_strName[0x8]; // 0x0 CUtlString
    std::uint8_t m_bExposeExternally[0x8]; // 0x8 bool
    std::uint8_t m_strExposedFriendlyName[0x8]; // 0x10 CUtlString
    std::uint8_t m_strExposedFriendlyGroupName[0x8]; // 0x18 CUtlString
    std::uint8_t m_bExposedVariableIsFixedRange[0x8]; // 0x20 bool
    std::uint8_t m_strExposedVisibleWhenTrue[0x8]; // 0x28 CUtlString
    std::uint8_t m_strExposedHiddenWhenTrue[0x8]; // 0x30 CUtlString
    std::uint8_t m_strExposedValueList[0x8]; // 0x38 CUtlString
    std::uint8_t m_nVariableType[0x4]; // 0x40 CompositeMaterialInputLooseVariableType_t
    std::uint8_t m_bValueBoolean[0x4]; // 0x44 bool
    std::uint8_t m_nValueIntX[0x4]; // 0x48 int32
    std::uint8_t m_nValueIntY[0x4]; // 0x4C int32
    std::uint8_t m_nValueIntZ[0x4]; // 0x50 int32
    std::uint8_t m_nValueIntW[0x4]; // 0x54 int32
    std::uint8_t m_bHasFloatBounds[0x4]; // 0x58 bool
    std::uint8_t m_flValueFloatX[0x4]; // 0x5C float32
    std::uint8_t m_flValueFloatX_Min[0x4]; // 0x60 float32
    std::uint8_t m_flValueFloatX_Max[0x4]; // 0x64 float32
    std::uint8_t m_flValueFloatY[0x4]; // 0x68 float32
    std::uint8_t m_flValueFloatY_Min[0x4]; // 0x6C float32
    std::uint8_t m_flValueFloatY_Max[0x4]; // 0x70 float32
    std::uint8_t m_flValueFloatZ[0x4]; // 0x74 float32
    std::uint8_t m_flValueFloatZ_Min[0x4]; // 0x78 float32
    std::uint8_t m_flValueFloatZ_Max[0x4]; // 0x7C float32
    std::uint8_t m_flValueFloatW[0x4]; // 0x80 float32
    std::uint8_t m_flValueFloatW_Min[0x4]; // 0x84 float32
    std::uint8_t m_flValueFloatW_Max[0x4]; // 0x88 float32
    std::uint8_t m_cValueColor4[0x4]; // 0x8C Color
    std::uint8_t m_nValueSystemVar[0x8]; // 0x90 CompositeMaterialVarSystemVar_t
    std::uint8_t m_strResourceMaterial[0xE0]; // 0x98 CResourceNameTyped<CWeakHandle<InfoForResourceTypeIMaterial2>>
    std::uint8_t m_strTextureContentAssetPath[0x8]; // 0x178 CUtlString
    std::uint8_t m_strTextureRuntimeResourcePath[0xE0]; // 0x180 CResourceNameTyped<CWeakHandle<InfoForResourceTypeCTextureBase>>
    std::uint8_t m_strTextureCompilationVtexTemplate[0x8]; // 0x260 CUtlString
    std::uint8_t m_nTextureType[0x8]; // 0x268 CompositeMaterialInputTextureType_t
    std::uint8_t m_strString[0x8]; // 0x270 CUtlString
    std::uint8_t m_strPanoramaPanelPath[0x8]; // 0x278 CUtlString
    std::uint8_t m_nPanoramaRenderRes[0x8]; // 0x280 int32
};

struct screenshake_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t endtime[0x4]; // 0x0 GameTime_t
    std::uint8_t duration[0x4]; // 0x4 float32
    std::uint8_t amplitude[0x4]; // 0x8 float32
    std::uint8_t frequency[0x4]; // 0xC float32
    std::uint8_t nextShake[0x4]; // 0x10 GameTime_t
    std::uint8_t offset[0xC]; // 0x14 Vector
    std::uint8_t angle[0x8]; // 0x20 float32
    std::uint8_t direction[0xC]; // 0x28 Vector
    std::uint8_t nShakeType[0x4]; // 0x34 uint8
};

struct CCS2UIPawnGraphController {
    static constexpr std::size_t size = 0x240;
    std::uint8_t pad_0[0xC0]; // 0x0
    std::uint8_t m_nAnimationSeed[0x18]; // 0xC0 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_characterMode[0x18]; // 0xD8 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_bCharacterModeReset[0x18]; // 0xF0 CAnimGraph2ParamOptionalRef<bool>
    std::uint8_t m_nTeamPreviewVariant[0x18]; // 0x108 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_nTeamPreviewRandom[0x18]; // 0x120 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_nTeamPreviewPosition[0x18]; // 0x138 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_endOfMatchCelebration[0x18]; // 0x150 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_action[0x18]; // 0x168 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_bannerAnimation[0x18]; // 0x180 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_weaponCategory[0x18]; // 0x198 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_weaponType[0x18]; // 0x1B0 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_weaponState[0x18]; // 0x1C8 CAnimGraph2ParamOptionalRef<CGlobalSymbol>
    std::uint8_t m_inspectTurnAngle[0x18]; // 0x1E0 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_nChickSnapshotVariant[0x18]; // 0x1F8 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_nChickLifeStage[0x18]; // 0x210 CAnimGraph2ParamOptionalRef<float32>
    std::uint8_t m_bCT[0x18]; // 0x228 CAnimGraph2ParamOptionalRef<bool>
};

struct inv_image_light_barn_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t color[0xC]; // 0x0 Vector
    std::uint8_t angle[0xC]; // 0xC QAngle
    std::uint8_t brightness[0x4]; // 0x18 float32
    std::uint8_t orbit_distance[0x4]; // 0x1C float32
};

struct inv_image_map_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t map_name[0x8]; // 0x0 CUtlString
    std::uint8_t map_rotation[0x8]; // 0x8 float32
};

struct inv_image_light_fill_t {
    static constexpr std::size_t size = 0x1C;
    std::uint8_t color[0xC]; // 0x0 Vector
    std::uint8_t angle[0xC]; // 0xC QAngle
    std::uint8_t brightness[0x4]; // 0x18 float32
};

struct CInterpolatedValue {
    static constexpr std::size_t size = 0x14;
    std::uint8_t m_flStartTime[0x4]; // 0x0 float32
    std::uint8_t m_flEndTime[0x4]; // 0x4 float32
    std::uint8_t m_flStartValue[0x4]; // 0x8 float32
    std::uint8_t m_flEndValue[0x4]; // 0xC float32
    std::uint8_t m_nInterpType[0x4]; // 0x10 int32
};

struct inv_image_item_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t position[0xC]; // 0x0 Vector
    std::uint8_t angle[0xC]; // 0xC QAngle
    std::uint8_t pose_sequence[0x8]; // 0x18 CUtlString
};

struct TimedEvent {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_TimeBetweenEvents[0x4]; // 0x0 float32
    std::uint8_t m_fNextEvent[0x4]; // 0x4 float32
};

struct CFlashlightEffect {
    static constexpr std::size_t size = 0x2E0;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_bIsOn[0x10]; // 0x10 bool
    std::uint8_t m_bMuzzleFlashEnabled[0x4]; // 0x20 bool
    std::uint8_t m_flMuzzleFlashBrightness[0xC]; // 0x24 float32
    std::uint8_t m_quatMuzzleFlashOrientation[0x10]; // 0x30 Quaternion
    std::uint8_t m_vecMuzzleFlashOrigin[0xC]; // 0x40 VectorWS
    std::uint8_t m_flFov[0x4]; // 0x4C float32
    std::uint8_t m_flFarZ[0x4]; // 0x50 float32
    std::uint8_t m_flLinearAtten[0x4]; // 0x54 float32
    std::uint8_t m_bCastsShadows[0x4]; // 0x58 bool
    std::uint8_t m_flCurrentPullBackDist[0x4]; // 0x5C float32
    std::uint8_t m_FlashlightTexture[0x8]; // 0x60 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_MuzzleFlashTexture[0x8]; // 0x68 CStrongHandle<InfoForResourceTypeCTextureBase>
    std::uint8_t m_textureName[0x270]; // 0x70 char[64]
};

struct inv_image_camera_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t angle[0xC]; // 0x0 QAngle
    std::uint8_t fov_h[0x4]; // 0xC float32
    std::uint8_t fov_v[0x4]; // 0x10 float32
    std::uint8_t znear[0x4]; // 0x14 float32
    std::uint8_t zfar[0x4]; // 0x18 float32
    std::uint8_t target[0xC]; // 0x1C Vector
    std::uint8_t target_nudge[0xC]; // 0x28 Vector
    std::uint8_t orbit_distance[0x4]; // 0x34 float32
};

struct CInventoryImageData {
    static constexpr std::size_t size = 0x100;
    std::uint8_t m_nNodeType[0x8]; // 0x0 InventoryNodeType_t
    std::uint8_t name[0x8]; // 0x8 CUtlString
    std::uint8_t inventory_image_data[0xF0]; // 0x10 inv_image_data_t
};

struct inv_image_clearcolor_t {
    static constexpr std::size_t size = 0xC;
    std::uint8_t color[0xC]; // 0x0 Vector
};

struct C_CommandContext {
    static constexpr std::size_t size = 0xA8;
    std::uint8_t needsprocessing[0xA0]; // 0x0 bool
    std::uint8_t command_number[0x8]; // 0xA0 int32
};

struct CompositeMaterialEditorPoint_t {
    static constexpr std::size_t size = 0x218;
    std::uint8_t m_ModelName[0xE0]; // 0x0 CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    std::uint8_t m_nSequenceIndex[0x4]; // 0xE0 int32
    std::uint8_t m_flCycle[0x4]; // 0xE4 float32
    std::uint8_t m_KVModelStateChoices[0x10]; // 0xE8 KeyValues3
    std::uint8_t m_bEnableChildModel[0x8]; // 0xF8 bool
    std::uint8_t m_ChildModelName[0xE0]; // 0x100 CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    std::uint8_t m_vecCompositeMaterialAssemblyProcedures[0x18]; // 0x1E0 CUtlVector<CompositeMaterialAssemblyProcedure_t>
    std::uint8_t m_vecCompositeMaterials[0x20]; // 0x1F8 CUtlVector<CompositeMaterial_t>
};

struct CPlayerSprayDecalRenderHelper {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x30]; // 0x0
};

struct C_IronSightController {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_bIronSightAvailable[0x4]; // 0x10 bool
    std::uint8_t m_flIronSightAmount[0x4]; // 0x14 float32
    std::uint8_t m_flIronSightAmountGained[0x4]; // 0x18 float32
    std::uint8_t m_flIronSightAmountBiased[0x4]; // 0x1C float32
    std::uint8_t m_flIronSightAmount_Interpolated[0x4]; // 0x20 float32
    std::uint8_t m_flIronSightAmountGained_Interpolated[0x4]; // 0x24 float32
    std::uint8_t m_flIronSightAmountBiased_Interpolated[0x4]; // 0x28 float32
    std::uint8_t m_flInterpolationLastUpdated[0x4]; // 0x2C float32
    std::uint8_t m_angDeltaAverage[0x60]; // 0x30 QAngle[8]
    std::uint8_t m_angViewLast[0xC]; // 0x90 QAngle
    std::uint8_t m_vecDotCoords[0x8]; // 0x9C Vector2D
    std::uint8_t m_flFiringInaccuracyExtraWidthMultiplier[0x4]; // 0xA4 float32
    std::uint8_t m_flSpeedRatio[0x8]; // 0xA8 float32
};

struct CompMatMutatorCondition_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_nMutatorCondition[0x8]; // 0x0 CompMatPropertyMutatorConditionType_t
    std::uint8_t m_strMutatorConditionContainerName[0x8]; // 0x8 CUtlString
    std::uint8_t m_strMutatorConditionContainerVarName[0x8]; // 0x10 CUtlString
    std::uint8_t m_strMutatorConditionContainerVarValue[0x8]; // 0x18 CUtlString
    std::uint8_t m_bPassWhenTrue[0x8]; // 0x20 bool
};

struct inv_image_data_t {
    static constexpr std::size_t size = 0xF0;
    std::uint8_t map[0x10]; // 0x0 inv_image_map_t
    std::uint8_t item[0x20]; // 0x10 inv_image_item_t
    std::uint8_t camera[0x38]; // 0x30 inv_image_camera_t
    std::uint8_t lightsun[0x1C]; // 0x68 inv_image_light_sun_t
    std::uint8_t lightfill[0x1C]; // 0x84 inv_image_light_fill_t
    std::uint8_t light0[0x20]; // 0xA0 inv_image_light_barn_t
    std::uint8_t light1[0x20]; // 0xC0 inv_image_light_barn_t
    std::uint8_t clearcolor[0x10]; // 0xE0 inv_image_clearcolor_t
};

struct CompMatPropertyMutator_t {
    static constexpr std::size_t size = 0x390;
    std::uint8_t m_bEnabled[0x4]; // 0x0 bool
    std::uint8_t m_nMutatorCommandType[0x4]; // 0x4 CompMatPropertyMutatorType_t
    std::uint8_t m_strInitWith_Container[0x8]; // 0x8 CUtlString
    std::uint8_t m_strCopyProperty_InputContainerSrc[0x8]; // 0x10 CUtlString
    std::uint8_t m_strCopyProperty_InputContainerProperty[0x8]; // 0x18 CUtlString
    std::uint8_t m_strCopyProperty_TargetProperty[0x8]; // 0x20 CUtlString
    std::uint8_t m_strRandomRollInputVars_SeedInputVar[0x8]; // 0x28 CUtlString
    std::uint8_t m_vecRandomRollInputVars_InputVarsToRoll[0x18]; // 0x30 CUtlVector<CUtlString>
    std::uint8_t m_strCopyMatchingKeys_InputContainerSrc[0x8]; // 0x48 CUtlString
    std::uint8_t m_strCopyKeysWithSuffix_InputContainerSrc[0x8]; // 0x50 CUtlString
    std::uint8_t m_strCopyKeysWithSuffix_FindSuffix[0x8]; // 0x58 CUtlString
    std::uint8_t m_strCopyKeysWithSuffix_ReplaceSuffix[0x8]; // 0x60 CUtlString
    std::uint8_t m_nSetValue_Value[0x288]; // 0x68 CompositeMaterialInputLooseVariable_t
    std::uint8_t m_strGenerateTexture_TargetParam[0x8]; // 0x2F0 CUtlString
    std::uint8_t m_strGenerateTexture_InitialContainer[0x8]; // 0x2F8 CUtlString
    std::uint8_t m_nResolution[0x4]; // 0x300 int32
    std::uint8_t m_bIsScratchTarget[0x4]; // 0x304 bool
    std::uint8_t m_strCompressionFormat[0x8]; // 0x308 CUtlString
    std::uint8_t m_bSplatDebugInfo[0x1]; // 0x310 bool
    std::uint8_t m_bCaptureInRenderDoc[0x7]; // 0x311 bool
    std::uint8_t m_vecTexGenInstructions[0x18]; // 0x318 CUtlVector<CompMatPropertyMutator_t>
    std::uint8_t m_vecConditionalMutators[0x18]; // 0x330 CUtlVector<CompMatPropertyMutator_t>
    std::uint8_t m_strPopInputQueue_Container[0x8]; // 0x348 CUtlString
    std::uint8_t m_strDrawText_InputContainerSrc[0x8]; // 0x350 CUtlString
    std::uint8_t m_strDrawText_InputContainerProperty[0x8]; // 0x358 CUtlString
    std::uint8_t m_vecDrawText_Position[0x8]; // 0x360 Vector2D
    std::uint8_t m_colDrawText_Color[0x8]; // 0x368 Color
    std::uint8_t m_strDrawText_Font[0x8]; // 0x370 CUtlString
    std::uint8_t m_vecConditions[0x18]; // 0x378 CUtlVector<CompMatMutatorCondition_t>
};

struct CCompositeMaterialEditorDoc {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_nVersion[0x8]; // 0x8 int32
    std::uint8_t m_Points[0x18]; // 0x10 CUtlVector<CompositeMaterialEditorPoint_t>
    std::uint8_t m_KVthumbnail[0x10]; // 0x28 KeyValues3
};

struct CClientAlphaProperty {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_nDesyncOffset[0x10]; // 0x0 bitfield:14
    std::uint8_t m_nDistFadeStart[0x2]; // 0x10 uint16
    std::uint8_t m_nDistFadeEnd[0x5]; // 0x12 uint16
    std::uint8_t m_nAlpha[0x1]; // 0x17 uint8
    std::uint8_t m_flFadeScale[0x4]; // 0x18 float32
    std::uint8_t m_flRenderFxStartTime[0x4]; // 0x1C GameTime_t
    std::uint8_t m_flRenderFxDuration[0x10]; // 0x20 float32
};

struct screenfade_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t Speed[0x4]; // 0x0 float32
    std::uint8_t End[0x4]; // 0x4 float32
    std::uint8_t Reset[0x4]; // 0x8 float32
    std::uint8_t m_Color[0x4]; // 0xC Color
    std::uint8_t Flags[0x18]; // 0x10 int32
};

struct CGlobalLightBase {
    static constexpr std::size_t size = 0x4C0;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_bSpotLight[0x4]; // 0x10 bool
    std::uint8_t m_SpotLightOrigin[0xC]; // 0x14 VectorWS
    std::uint8_t m_SpotLightAngles[0xC]; // 0x20 QAngle
    std::uint8_t m_ShadowDirection[0xC]; // 0x2C Vector
    std::uint8_t m_AmbientDirection[0xC]; // 0x38 Vector
    std::uint8_t m_SpecularDirection[0xC]; // 0x44 Vector
    std::uint8_t m_InspectorSpecularDirection[0xC]; // 0x50 Vector
    std::uint8_t m_flSpecularPower[0x4]; // 0x5C float32
    std::uint8_t m_flSpecularIndependence[0x4]; // 0x60 float32
    std::uint8_t m_SpecularColor[0x4]; // 0x64 Color
    std::uint8_t m_bStartDisabled[0x1]; // 0x68 bool
    std::uint8_t m_bEnabled[0x3]; // 0x69 bool
    std::uint8_t m_LightColor[0x4]; // 0x6C Color
    std::uint8_t m_AmbientColor1[0x4]; // 0x70 Color
    std::uint8_t m_AmbientColor2[0x4]; // 0x74 Color
    std::uint8_t m_AmbientColor3[0x4]; // 0x78 Color
    std::uint8_t m_flSunDistance[0x4]; // 0x7C float32
    std::uint8_t m_flFOV[0x4]; // 0x80 float32
    std::uint8_t m_flNearZ[0x4]; // 0x84 float32
    std::uint8_t m_flFarZ[0x4]; // 0x88 float32
    std::uint8_t m_bEnableShadows[0x1]; // 0x8C bool
    std::uint8_t m_bOldEnableShadows[0x1]; // 0x8D bool
    std::uint8_t m_bBackgroundClearNotRequired[0x2]; // 0x8E bool
    std::uint8_t m_flCloudScale[0x4]; // 0x90 float32
    std::uint8_t m_flCloud1Speed[0x4]; // 0x94 float32
    std::uint8_t m_flCloud1Direction[0x4]; // 0x98 float32
    std::uint8_t m_flCloud2Speed[0x4]; // 0x9C float32
    std::uint8_t m_flCloud2Direction[0x10]; // 0xA0 float32
    std::uint8_t m_flAmbientScale1[0x4]; // 0xB0 float32
    std::uint8_t m_flAmbientScale2[0x4]; // 0xB4 float32
    std::uint8_t m_flGroundScale[0x4]; // 0xB8 float32
    std::uint8_t m_flLightScale[0x4]; // 0xBC float32
    std::uint8_t m_flFoWDarkness[0x4]; // 0xC0 float32
    std::uint8_t m_bEnableSeparateSkyboxFog[0x4]; // 0xC4 bool
    std::uint8_t m_vFowColor[0xC]; // 0xC8 Vector
    std::uint8_t m_ViewOrigin[0xC]; // 0xD4 VectorWS
    std::uint8_t m_ViewAngles[0xC]; // 0xE0 QAngle
    std::uint8_t m_flViewFoV[0x4]; // 0xEC float32
    std::uint8_t m_WorldPoints[0x3B8]; // 0xF0 VectorWS[8]
    std::uint8_t m_vFogOffsetLayer0[0x8]; // 0x4A8 Vector2D
    std::uint8_t m_vFogOffsetLayer1[0x8]; // 0x4B0 Vector2D
    std::uint8_t m_hEnvWind[0x4]; // 0x4B8 CHandle<C_BaseEntity>
    std::uint8_t m_hEnvSky[0x4]; // 0x4BC CHandle<C_BaseEntity>
};

struct IClientAlphaProperty {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct inv_image_light_sun_t {
    static constexpr std::size_t size = 0x1C;
    std::uint8_t color[0xC]; // 0x0 Vector
    std::uint8_t angle[0xC]; // 0xC QAngle
    std::uint8_t brightness[0x4]; // 0x18 float32
};

struct CompositeMaterialMatchFilter_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_nCompositeMaterialMatchFilterType[0x8]; // 0x0 CompositeMaterialMatchFilterType_t
    std::uint8_t m_strMatchFilter[0x8]; // 0x8 CUtlString
    std::uint8_t m_strMatchValue[0x8]; // 0x10 CUtlString
    std::uint8_t m_bPassWhenTrue[0x8]; // 0x18 bool
};

struct CompositeMaterial_t {
    static constexpr std::size_t size = 0xA0;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_TargetKVs[0x10]; // 0x8 KeyValues3
    std::uint8_t m_PreGenerationKVs[0x40]; // 0x18 KeyValues3
    std::uint8_t m_FinalKVs[0x28]; // 0x58 KeyValues3
    std::uint8_t m_vecGeneratedTextures[0x20]; // 0x80 CUtlVector<GeneratedTextureHandle_t>
};

} // namespace