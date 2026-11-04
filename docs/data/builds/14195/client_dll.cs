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

namespace Cs2.client {

    public enum C_BaseCombatCharacter__WaterWakeMode_t : int {
        WATER_WAKE_NONE = 0, 
        WATER_WAKE_IDLE = 1, 
        WATER_WAKE_WALKING = 2, 
        WATER_WAKE_RUNNING = 3, 
        WATER_WAKE_WATER_OVERHEAD = 4, 
    }
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
    public enum CompositeMaterialInputLooseVariableType_t : int {
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
    }
    public enum CompositeMaterialInputTextureType_t : int {
        INPUT_TEXTURE_TYPE_DEFAULT = 0, 
        INPUT_TEXTURE_TYPE_NORMALMAP = 1, 
        INPUT_TEXTURE_TYPE_COLOR = 2, 
        INPUT_TEXTURE_TYPE_MASKS = 3, 
        INPUT_TEXTURE_TYPE_ROUGHNESS = 4, 
        INPUT_TEXTURE_TYPE_PEARLESCENCE_MASK = 5, 
        INPUT_TEXTURE_TYPE_AO = 6, 
        INPUT_TEXTURE_TYPE_POSITION = 7, 
    }
    public enum InventoryNodeType_t : int {
        NODE_TYPE_INVALID = 0, 
        VIRTUAL_NODE_SCHEMA_PREFAB = 1, 
        VIRTUAL_NODE_SCHEMA_ITEMDEF = 2, 
        VIRTUAL_NODE_SCHEMA_STICKER = 3, 
        VIRTUAL_NODE_SCHEMA_KEYCHAIN = 4, 
        CONCRETE_NODE_SCHEMA_PREFAB = 5, 
        CONCRETE_NODE_SCHEMA_ITEMDEF = 6, 
        CONCRETE_NODE_SCHEMA_STICKER = 7, 
        CONCRETE_NODE_SCHEMA_KEYCHAIN = 8, 
    }
    public enum CompositeMaterialInputContainerSourceType_t : int {
        CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0, 
        CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 1, 
        CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 2, 
        CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 3, 
        CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 4, 
        CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 5, 
    }
    public enum CompMatPropertyMutatorType_t : int {
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
    }
    public enum CompositeMaterialVarSystemVar_t : int {
        COMPMATSYSVAR_COMPOSITETIME = 0, 
        COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 1, 
    }
    public enum P2P_Messages : int {
        p2p_TextMessage = 256, 
        p2p_Voice = 257, 
        p2p_Ping = 258, 
        p2p_VRAvatarPosition = 259, 
        p2p_WatchSynchronization = 260, 
        p2p_FightingGame_GameData = 261, 
        p2p_FightingGame_Connection = 262, 
    }
    public enum CompositeMaterialMatchFilterType_t : int {
        MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0, 
        MATCH_FILTER_MATERIAL_SHADER = 1, 
        MATCH_FILTER_MATERIAL_NAME_SUBSTR = 2, 
        MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 3, 
        MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 4, 
        MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 5, 
    }
    public enum CompMatPropertyMutatorConditionType_t : int {
        COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0, 
        COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 1, 
        COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 2, 
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1D18)]
    public unsafe struct C_CSGO_TeamIntroCharacterPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1D18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x86A0)]
    public unsafe struct C_FireCrackerBlast {
        [FieldOffset(0x0)] public fixed byte pad_0[0x86A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1D18)]
    public unsafe struct CCSGO_WingmanIntroCounterTerroristPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1D18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x130)]
    public unsafe struct CPulseCell_WaitForCursorsWithTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x128];
        [FieldOffset(0x128)] public fixed byte m_bTagSelfWhenComplete[0x4];
        [FieldOffset(0x12C)] public fixed byte m_nDesiredKillPriority[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct C_SceneEntity__QueuedEvents_t {
        [FieldOffset(0x0)] public fixed byte starttime[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CCSPlayer_PingServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_hPlayerPing[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CEconItemAttribute {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_iAttributeDefinitionIndex[0x4];
        [FieldOffset(0x34)] public fixed byte m_flValue[0x4];
        [FieldOffset(0x38)] public fixed byte m_flInitialValue[0x4];
        [FieldOffset(0x3C)] public fixed byte m_nRefundableCurrency[0x4];
        [FieldOffset(0x40)] public fixed byte m_bSetBonus[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x138)]
    public unsafe struct CPulseCell_RaceCursors {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_Outflows[0x18];
        [FieldOffset(0xF0)] public fixed byte m_OnFinished[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14D0)]
    public unsafe struct CFuncRetakeBarrier {
        [FieldOffset(0x0)] public fixed byte pad_0[0x14D0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xF8)]
    public unsafe struct C_EnvWindShared {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_flStartTime[0x4];
        [FieldOffset(0xC)] public fixed byte m_iWindSeed[0x4];
        [FieldOffset(0x10)] public fixed byte m_iMinWind[0x2];
        [FieldOffset(0x12)] public fixed byte m_iMaxWind[0x2];
        [FieldOffset(0x14)] public fixed byte m_windRadius[0x4];
        [FieldOffset(0x18)] public fixed byte m_iMinGust[0x2];
        [FieldOffset(0x1A)] public fixed byte m_iMaxGust[0x2];
        [FieldOffset(0x1C)] public fixed byte m_flMinGustDelay[0x4];
        [FieldOffset(0x20)] public fixed byte m_flMaxGustDelay[0x4];
        [FieldOffset(0x24)] public fixed byte m_flGustDuration[0x4];
        [FieldOffset(0x28)] public fixed byte m_iGustDirChange[0x2];
        [FieldOffset(0x2A)] public fixed byte m_iInitialWindDir[0x2];
        [FieldOffset(0x2C)] public fixed byte m_flInitialWindSpeed[0x4];
        [FieldOffset(0x30)] public fixed byte m_location[0xC];
        [FieldOffset(0x3C)] public fixed byte m_hEntOwner[0xBC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6A0)]
    public unsafe struct C_SkyCamera {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_skyboxData[0x90];
        [FieldOffset(0x690)] public fixed byte m_skyboxSlotToken[0x4];
        [FieldOffset(0x694)] public fixed byte m_bUseAngles[0x4];
        [FieldOffset(0x698)] public fixed byte m_pNext[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Base {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_nEditorNodeID[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1098)]
    public unsafe struct C_FuncRotating {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x620)]
    public unsafe struct C_SoundOpvarSetPointBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_iszStackName[0x8];
        [FieldOffset(0x608)] public fixed byte m_iszOperatorName[0x8];
        [FieldOffset(0x610)] public fixed byte m_iszOpvarName[0x8];
        [FieldOffset(0x618)] public fixed byte m_iOpvarIndex[0x4];
        [FieldOffset(0x61C)] public fixed byte m_bUseAutoCompare[0x1];
        [FieldOffset(0x61D)] public fixed byte m_bFastRefresh[0x3];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x700)]
    public unsafe struct C_EnvCubemapFog {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_flEndDistance[0x4];
        [FieldOffset(0x604)] public fixed byte m_flStartDistance[0x4];
        [FieldOffset(0x608)] public fixed byte m_flFogFalloffExponent[0x4];
        [FieldOffset(0x60C)] public fixed byte m_bHeightFogEnabled[0x4];
        [FieldOffset(0x610)] public fixed byte m_flFogHeightWidth[0x4];
        [FieldOffset(0x614)] public fixed byte m_flFogHeightEnd[0x4];
        [FieldOffset(0x618)] public fixed byte m_flFogHeightStart[0x4];
        [FieldOffset(0x61C)] public fixed byte m_flFogHeightExponent[0x4];
        [FieldOffset(0x620)] public fixed byte m_flLODBias[0x4];
        [FieldOffset(0x624)] public fixed byte m_bActive[0x1];
        [FieldOffset(0x625)] public fixed byte m_bStartDisabled[0x3];
        [FieldOffset(0x628)] public fixed byte m_flFogMaxOpacity[0x4];
        [FieldOffset(0x62C)] public fixed byte m_nCubemapSourceType[0x4];
        [FieldOffset(0x630)] public fixed byte m_hSkyMaterial[0x8];
        [FieldOffset(0x638)] public fixed byte m_iszSkyEntity[0x8];
        [FieldOffset(0x640)] public fixed byte m_nHeightFogType[0x4];
        [FieldOffset(0x644)] public fixed byte m_nFogHeightBlendMode[0x4];
        [FieldOffset(0x648)] public fixed byte m_nFogHeightCoordinateSpace[0x4];
        [FieldOffset(0x64C)] public fixed byte m_nDistanceFogType[0x4];
        [FieldOffset(0x650)] public fixed byte m_DistanceFogCurveString[0x8];
        [FieldOffset(0x658)] public fixed byte m_HeightFogCurveString[0x98];
        [FieldOffset(0x6F0)] public fixed byte m_hFogCubemapTexture[0x8];
        [FieldOffset(0x6F8)] public fixed byte m_bHasHeightFogEnd[0x1];
        [FieldOffset(0x6F9)] public fixed byte m_bFirstTime[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1D18)]
    public unsafe struct C_CSGO_TeamSelectTerroristPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1D18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1680)]
    public unsafe struct C_EnvParticleGlow {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1668];
        [FieldOffset(0x1668)] public fixed byte m_flAlphaScale[0x4];
        [FieldOffset(0x166C)] public fixed byte m_flRadiusScale[0x4];
        [FieldOffset(0x1670)] public fixed byte m_flSelfIllumScale[0x4];
        [FieldOffset(0x1674)] public fixed byte m_ColorTint[0x4];
        [FieldOffset(0x1678)] public fixed byte m_hTextureOverride[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x608)]
    public unsafe struct CCS_PortraitWorldCallbackHandler {
        [FieldOffset(0x0)] public fixed byte pad_0[0x608];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xF0)]
    public unsafe struct CCSPlayerController_InventoryServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
        [FieldOffset(0x40)] public fixed byte m_vecNetworkableLoadout[0x18];
        [FieldOffset(0x58)] public fixed byte m_unMusicID[0x4];
        [FieldOffset(0x5C)] public fixed byte m_rank[0x18];
        [FieldOffset(0x74)] public fixed byte m_nPersonaDataPublicLevel[0x4];
        [FieldOffset(0x78)] public fixed byte m_nPersonaDataPublicCommendsLeader[0x4];
        [FieldOffset(0x7C)] public fixed byte m_nPersonaDataPublicCommendsTeacher[0x4];
        [FieldOffset(0x80)] public fixed byte m_nPersonaDataPublicCommendsFriendly[0x4];
        [FieldOffset(0x84)] public fixed byte m_nPersonaDataXpTrailLevel[0x4];
        [FieldOffset(0x88)] public fixed byte m_vecServerAuthoritativeWeaponSlots[0x68];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CCSPlayerModernJump {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nLastActualJumpPressTick[0x4];
        [FieldOffset(0x14)] public fixed byte m_flLastActualJumpPressFrac[0x4];
        [FieldOffset(0x18)] public fixed byte m_nLastUsableJumpPressTick[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flLastUsableJumpPressFrac[0x4];
        [FieldOffset(0x20)] public fixed byte m_nLastLandedTick[0x4];
        [FieldOffset(0x24)] public fixed byte m_flLastLandedFrac[0x4];
        [FieldOffset(0x28)] public fixed byte m_flLastLandedVelocityX[0x4];
        [FieldOffset(0x2C)] public fixed byte m_flLastLandedVelocityY[0x4];
        [FieldOffset(0x30)] public fixed byte m_flLastLandedVelocityZ[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct C_EconEntity__AttachedModelData_t {
        [FieldOffset(0x0)] public fixed byte m_iModelDisplayFlags[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulse_ResumePoint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x11E0)]
    public unsafe struct CTriggerFan {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1180];
        [FieldOffset(0x1180)] public fixed byte m_vFanOriginOffset[0xC];
        [FieldOffset(0x118C)] public fixed byte m_vDirection[0xC];
        [FieldOffset(0x1198)] public fixed byte m_bPushTowardsInfoTarget[0x1];
        [FieldOffset(0x1199)] public fixed byte m_bPushAwayFromInfoTarget[0x7];
        [FieldOffset(0x11A0)] public fixed byte m_qNoiseDelta[0x10];
        [FieldOffset(0x11B0)] public fixed byte m_hInfoFan[0x4];
        [FieldOffset(0x11B4)] public fixed byte m_flForce[0x4];
        [FieldOffset(0x11B8)] public fixed byte m_bFalloff[0x8];
        [FieldOffset(0x11C0)] public fixed byte m_RampTimer[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1270)]
    public unsafe struct C_HostageCarriableProp {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1270];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12B8)]
    public unsafe struct C_BulletHitModel {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1268];
        [FieldOffset(0x1268)] public fixed byte m_matLocal[0x30];
        [FieldOffset(0x1298)] public fixed byte m_iBoneIndex[0x4];
        [FieldOffset(0x129C)] public fixed byte m_hPlayerParent[0x4];
        [FieldOffset(0x12A0)] public fixed byte m_bIsHit[0x4];
        [FieldOffset(0x12A4)] public fixed byte m_flTimeCreated[0x4];
        [FieldOffset(0x12A8)] public fixed byte m_vecStartPos[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10B0)]
    public unsafe struct C_FuncElectrifiedVolume {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
        [FieldOffset(0x1098)] public fixed byte m_nAmbientEffect[0x8];
        [FieldOffset(0x10A0)] public fixed byte m_EffectName[0x8];
        [FieldOffset(0x10A8)] public fixed byte m_bState[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xF48)]
    public unsafe struct C_MapVetoPickController {
        [FieldOffset(0x0)] public fixed byte pad_0[0x610];
        [FieldOffset(0x610)] public fixed byte m_nDraftType[0x4];
        [FieldOffset(0x614)] public fixed byte m_nTeamWinningCoinToss[0x4];
        [FieldOffset(0x618)] public fixed byte m_nTeamWithFirstChoice[0x100];
        [FieldOffset(0x718)] public fixed byte m_nVoteMapIdsList[0x1C];
        [FieldOffset(0x734)] public fixed byte m_nAccountIDs[0x100];
        [FieldOffset(0x834)] public fixed byte m_nMapId0[0x100];
        [FieldOffset(0x934)] public fixed byte m_nMapId1[0x100];
        [FieldOffset(0xA34)] public fixed byte m_nMapId2[0x100];
        [FieldOffset(0xB34)] public fixed byte m_nMapId3[0x100];
        [FieldOffset(0xC34)] public fixed byte m_nMapId4[0x100];
        [FieldOffset(0xD34)] public fixed byte m_nMapId5[0x100];
        [FieldOffset(0xE34)] public fixed byte m_nStartingSide0[0x100];
        [FieldOffset(0xF34)] public fixed byte m_nCurrentPhase[0x4];
        [FieldOffset(0xF38)] public fixed byte m_nPhaseStartTick[0x4];
        [FieldOffset(0xF3C)] public fixed byte m_nPhaseDurationTicks[0x4];
        [FieldOffset(0xF40)] public fixed byte m_nPostDataUpdateTick[0x4];
        [FieldOffset(0xF44)] public fixed byte m_bDisabledHud[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x648)]
    public unsafe struct C_EnvVolumetricFogVolume {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_bActive[0x4];
        [FieldOffset(0x604)] public fixed byte m_vBoxMins[0xC];
        [FieldOffset(0x610)] public fixed byte m_vBoxMaxs[0xC];
        [FieldOffset(0x61C)] public fixed byte m_bStartDisabled[0x1];
        [FieldOffset(0x61D)] public fixed byte m_bIndirectUseLPVs[0x3];
        [FieldOffset(0x620)] public fixed byte m_flStrength[0x4];
        [FieldOffset(0x624)] public fixed byte m_nFalloffShape[0x4];
        [FieldOffset(0x628)] public fixed byte m_flFalloffExponent[0x4];
        [FieldOffset(0x62C)] public fixed byte m_flHeightFogDepth[0x4];
        [FieldOffset(0x630)] public fixed byte m_fHeightFogEdgeWidth[0x4];
        [FieldOffset(0x634)] public fixed byte m_fIndirectLightStrength[0x4];
        [FieldOffset(0x638)] public fixed byte m_fSunLightStrength[0x4];
        [FieldOffset(0x63C)] public fixed byte m_fNoiseStrength[0x4];
        [FieldOffset(0x640)] public fixed byte m_TintColor[0x4];
        [FieldOffset(0x644)] public fixed byte m_bOverrideTintColor[0x1];
        [FieldOffset(0x645)] public fixed byte m_bOverrideIndirectLightStrength[0x1];
        [FieldOffset(0x646)] public fixed byte m_bOverrideSunLightStrength[0x1];
        [FieldOffset(0x647)] public fixed byte m_bOverrideNoiseStrength[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1D18)]
    public unsafe struct C_CSGO_EndOfMatchCharacterPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1D18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x140)]
    public unsafe struct CPulseCell_PlaySequence {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_SequenceName[0x8];
        [FieldOffset(0xE0)] public fixed byte m_PulseAnimEvents[0x18];
        [FieldOffset(0xF8)] public fixed byte m_OnFinished[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x13A8)]
    public unsafe struct C_BarnLight {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
        [FieldOffset(0x1098)] public fixed byte m_bEnabled[0x4];
        [FieldOffset(0x109C)] public fixed byte m_nColorMode[0x4];
        [FieldOffset(0x10A0)] public fixed byte m_Color[0x4];
        [FieldOffset(0x10A4)] public fixed byte m_flColorTemperature[0x4];
        [FieldOffset(0x10A8)] public fixed byte m_flBrightness[0x4];
        [FieldOffset(0x10AC)] public fixed byte m_flBrightnessScale[0x4];
        [FieldOffset(0x10B0)] public fixed byte m_nDirectLight[0x4];
        [FieldOffset(0x10B4)] public fixed byte m_nBakedShadowIndex[0x4];
        [FieldOffset(0x10B8)] public fixed byte m_nLightPathUniqueId[0x4];
        [FieldOffset(0x10BC)] public fixed byte m_nLightMapUniqueId[0x4];
        [FieldOffset(0x10C0)] public fixed byte m_nLuminaireShape[0x4];
        [FieldOffset(0x10C4)] public fixed byte m_flLuminaireSize[0x4];
        [FieldOffset(0x10C8)] public fixed byte m_flLuminaireAnisotropy[0x8];
        [FieldOffset(0x10D0)] public fixed byte m_LightStyleString[0x8];
        [FieldOffset(0x10D8)] public fixed byte m_flLightStyleStartTime[0x8];
        [FieldOffset(0x10E0)] public fixed byte m_QueuedLightStyleStrings[0x18];
        [FieldOffset(0x10F8)] public fixed byte m_LightStyleEvents[0x18];
        [FieldOffset(0x1110)] public fixed byte m_LightStyleTargets[0x18];
        [FieldOffset(0x1128)] public fixed byte m_StyleEvent[0x60];
        [FieldOffset(0x1188)] public fixed byte m_hLightCookie[0x8];
        [FieldOffset(0x1190)] public fixed byte m_flShape[0x4];
        [FieldOffset(0x1194)] public fixed byte m_flSoftX[0x4];
        [FieldOffset(0x1198)] public fixed byte m_flSoftY[0x4];
        [FieldOffset(0x119C)] public fixed byte m_flSkirt[0x4];
        [FieldOffset(0x11A0)] public fixed byte m_flSkirtNear[0x4];
        [FieldOffset(0x11A4)] public fixed byte m_vSizeParams[0xC];
        [FieldOffset(0x11B0)] public fixed byte m_flRange[0x4];
        [FieldOffset(0x11B4)] public fixed byte m_vShear[0xC];
        [FieldOffset(0x11C0)] public fixed byte m_nBakeSpecularToCubemaps[0x4];
        [FieldOffset(0x11C4)] public fixed byte m_vBakeSpecularToCubemapsSize[0xC];
        [FieldOffset(0x11D0)] public fixed byte m_flBakeSpecularToCubemapsScale[0x4];
        [FieldOffset(0x11D4)] public fixed byte m_nCastShadows[0x4];
        [FieldOffset(0x11D8)] public fixed byte m_nShadowMapSize[0x4];
        [FieldOffset(0x11DC)] public fixed byte m_nShadowPriority[0x4];
        [FieldOffset(0x11E0)] public fixed byte m_bContactShadow[0x1];
        [FieldOffset(0x11E1)] public fixed byte m_bForceShadowsEnabled[0x3];
        [FieldOffset(0x11E4)] public fixed byte m_nBounceLight[0x4];
        [FieldOffset(0x11E8)] public fixed byte m_flBounceScale[0x4];
        [FieldOffset(0x11EC)] public fixed byte m_flMinRoughness[0x4];
        [FieldOffset(0x11F0)] public fixed byte m_vAlternateColor[0xC];
        [FieldOffset(0x11FC)] public fixed byte m_fAlternateColorBrightness[0x4];
        [FieldOffset(0x1200)] public fixed byte m_nFog[0x4];
        [FieldOffset(0x1204)] public fixed byte m_flFogStrength[0x4];
        [FieldOffset(0x1208)] public fixed byte m_nFogShadows[0x4];
        [FieldOffset(0x120C)] public fixed byte m_flFogScale[0x4];
        [FieldOffset(0x1210)] public fixed byte m_flFadeSizeStart[0x4];
        [FieldOffset(0x1214)] public fixed byte m_flFadeSizeEnd[0x4];
        [FieldOffset(0x1218)] public fixed byte m_flShadowFadeSizeStart[0x4];
        [FieldOffset(0x121C)] public fixed byte m_flShadowFadeSizeEnd[0x4];
        [FieldOffset(0x1220)] public fixed byte m_bPrecomputedFieldsValid[0x4];
        [FieldOffset(0x1224)] public fixed byte m_vPrecomputedBoundsMins[0xC];
        [FieldOffset(0x1230)] public fixed byte m_vPrecomputedBoundsMaxs[0xC];
        [FieldOffset(0x123C)] public fixed byte m_vPrecomputedOBBOrigin[0xC];
        [FieldOffset(0x1248)] public fixed byte m_vPrecomputedOBBAngles[0xC];
        [FieldOffset(0x1254)] public fixed byte m_vPrecomputedOBBExtent[0xC];
        [FieldOffset(0x1260)] public fixed byte m_nPrecomputedSubFrusta[0x4];
        [FieldOffset(0x1264)] public fixed byte m_vPrecomputedOBBOrigin0[0xC];
        [FieldOffset(0x1270)] public fixed byte m_vPrecomputedOBBAngles0[0xC];
        [FieldOffset(0x127C)] public fixed byte m_vPrecomputedOBBExtent0[0xC];
        [FieldOffset(0x1288)] public fixed byte m_vPrecomputedOBBOrigin1[0xC];
        [FieldOffset(0x1294)] public fixed byte m_vPrecomputedOBBAngles1[0xC];
        [FieldOffset(0x12A0)] public fixed byte m_vPrecomputedOBBExtent1[0xC];
        [FieldOffset(0x12AC)] public fixed byte m_vPrecomputedOBBOrigin2[0xC];
        [FieldOffset(0x12B8)] public fixed byte m_vPrecomputedOBBAngles2[0xC];
        [FieldOffset(0x12C4)] public fixed byte m_vPrecomputedOBBExtent2[0xC];
        [FieldOffset(0x12D0)] public fixed byte m_vPrecomputedOBBOrigin3[0xC];
        [FieldOffset(0x12DC)] public fixed byte m_vPrecomputedOBBAngles3[0xC];
        [FieldOffset(0x12E8)] public fixed byte m_vPrecomputedOBBExtent3[0xC];
        [FieldOffset(0x12F4)] public fixed byte m_vPrecomputedOBBOrigin4[0xC];
        [FieldOffset(0x1300)] public fixed byte m_vPrecomputedOBBAngles4[0xC];
        [FieldOffset(0x130C)] public fixed byte m_vPrecomputedOBBExtent4[0xC];
        [FieldOffset(0x1318)] public fixed byte m_vPrecomputedOBBOrigin5[0xC];
        [FieldOffset(0x1324)] public fixed byte m_vPrecomputedOBBAngles5[0xC];
        [FieldOffset(0x1330)] public fixed byte m_vPrecomputedOBBExtent5[0x50];
        [FieldOffset(0x1380)] public fixed byte m_bInitialBoneSetup[0x8];
        [FieldOffset(0x1388)] public fixed byte m_VisClusters[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x148)]
    public unsafe struct CPulseCell_LerpCameraSettings {
        [FieldOffset(0x0)] public fixed byte pad_0[0x120];
        [FieldOffset(0x120)] public fixed byte m_flSeconds[0x4];
        [FieldOffset(0x124)] public fixed byte m_Start[0x10];
        [FieldOffset(0x134)] public fixed byte m_End[0x14];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1310)]
    public unsafe struct CPointOffScreenIndicatorUi {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1300];
        [FieldOffset(0x1300)] public fixed byte m_bBeenEnabled[0x1];
        [FieldOffset(0x1301)] public fixed byte m_bHide[0x3];
        [FieldOffset(0x1304)] public fixed byte m_flSeenTargetTime[0x4];
        [FieldOffset(0x1308)] public fixed byte m_pTargetPanel[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CCSObserver_UseServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x11C0)]
    public unsafe struct C_PostProcessingVolume {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1190];
        [FieldOffset(0x1190)] public fixed byte m_hPostSettings[0x8];
        [FieldOffset(0x1198)] public fixed byte m_flFadeDuration[0x4];
        [FieldOffset(0x119C)] public fixed byte m_flMinLogExposure[0x4];
        [FieldOffset(0x11A0)] public fixed byte m_flMaxLogExposure[0x4];
        [FieldOffset(0x11A4)] public fixed byte m_flMinExposure[0x4];
        [FieldOffset(0x11A8)] public fixed byte m_flMaxExposure[0x4];
        [FieldOffset(0x11AC)] public fixed byte m_flExposureCompensation[0x4];
        [FieldOffset(0x11B0)] public fixed byte m_flExposureFadeSpeedUp[0x4];
        [FieldOffset(0x11B4)] public fixed byte m_flExposureFadeSpeedDown[0x4];
        [FieldOffset(0x11B8)] public fixed byte m_flTonemapEVSmoothingRange[0x4];
        [FieldOffset(0x11BC)] public fixed byte m_bMaster[0x1];
        [FieldOffset(0x11BD)] public fixed byte m_bExposureControl[0x3];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x11A8)]
    public unsafe struct CCSMinimapVolume {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1198];
        [FieldOffset(0x1198)] public fixed byte m_strMinimapName[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CCSPlayer_UseServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct C_BaseModelEntity__Emphasized_Phoneme {
        [FieldOffset(0x0)] public fixed byte m_sClassName[0x18];
        [FieldOffset(0x18)] public fixed byte m_flAmount[0x4];
        [FieldOffset(0x1C)] public fixed byte m_bRequired[0x1];
        [FieldOffset(0x1D)] public fixed byte m_bBasechecked[0x1];
        [FieldOffset(0x1E)] public fixed byte m_bValid[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x690)]
    public unsafe struct C_CSGO_CounterTerroristWingmanIntroCamera {
        [FieldOffset(0x0)] public fixed byte pad_0[0x690];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct CPulseCell_PickBestOutflowSelector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_nCheckType[0x8];
        [FieldOffset(0x50)] public fixed byte m_OutflowList[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x658)]
    public unsafe struct CInfoFan {
        [FieldOffset(0x0)] public fixed byte pad_0[0x640];
        [FieldOffset(0x640)] public fixed byte m_fFanForceMaxRadius[0x4];
        [FieldOffset(0x644)] public fixed byte m_fFanForceMinRadius[0x4];
        [FieldOffset(0x648)] public fixed byte m_flCurveDistRange[0x8];
        [FieldOffset(0x650)] public fixed byte m_FanForceCurveString[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x638)]
    public unsafe struct C_VoteController {
        [FieldOffset(0x0)] public fixed byte pad_0[0x610];
        [FieldOffset(0x610)] public fixed byte m_iActiveIssueIndex[0x4];
        [FieldOffset(0x614)] public fixed byte m_iOnlyTeamToVote[0x4];
        [FieldOffset(0x618)] public fixed byte m_nVoteOptionCount[0x14];
        [FieldOffset(0x62C)] public fixed byte m_nPotentialVotes[0x4];
        [FieldOffset(0x630)] public fixed byte m_bVotesDirty[0x1];
        [FieldOffset(0x631)] public fixed byte m_bTypeDirty[0x1];
        [FieldOffset(0x632)] public fixed byte m_bIsYesNoVote[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F60)]
    public unsafe struct C_C4 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F20];
        [FieldOffset(0x1F20)] public fixed byte m_activeLightParticleIndex[0x4];
        [FieldOffset(0x1F24)] public fixed byte m_eActiveLightEffect[0x4];
        [FieldOffset(0x1F28)] public fixed byte m_bStartedArming[0x4];
        [FieldOffset(0x1F2C)] public fixed byte m_fArmedTime[0x4];
        [FieldOffset(0x1F30)] public fixed byte m_bBombPlacedAnimation[0x1];
        [FieldOffset(0x1F31)] public fixed byte m_bIsPlantingViaUse[0x7];
        [FieldOffset(0x1F38)] public fixed byte m_entitySpottedState[0x18];
        [FieldOffset(0x1F50)] public fixed byte m_nSpotRules[0x4];
        [FieldOffset(0x1F54)] public fixed byte m_bPlayedArmingBeeps[0x7];
        [FieldOffset(0x1F5B)] public fixed byte m_bBombPlanted[0x5];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1568)]
    public unsafe struct C_CSPlayerPawnBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x14D8];
        [FieldOffset(0x14D8)] public fixed byte m_pPingServices[0x8];
        [FieldOffset(0x14E0)] public fixed byte m_previousPlayerState[0x4];
        [FieldOffset(0x14E4)] public fixed byte m_iPlayerState[0x4];
        [FieldOffset(0x14E8)] public fixed byte m_bHasMovedSinceSpawn[0x4];
        [FieldOffset(0x14EC)] public fixed byte m_flLastSpawnTimeIndex[0x4];
        [FieldOffset(0x14F0)] public fixed byte m_iProgressBarDuration[0x4];
        [FieldOffset(0x14F4)] public fixed byte m_flProgressBarStartTime[0x4];
        [FieldOffset(0x14F8)] public fixed byte m_flClientDeathTime[0x4];
        [FieldOffset(0x14FC)] public fixed byte m_flFlashBangTime[0x4];
        [FieldOffset(0x1500)] public fixed byte m_flFlashScreenshotAlpha[0x4];
        [FieldOffset(0x1504)] public fixed byte m_flFlashOverlayAlpha[0x4];
        [FieldOffset(0x1508)] public fixed byte m_bFlashBuildUp[0x1];
        [FieldOffset(0x1509)] public fixed byte m_bFlashDspHasBeenCleared[0x1];
        [FieldOffset(0x150A)] public fixed byte m_bFlashScreenshotHasBeenGrabbed[0x2];
        [FieldOffset(0x150C)] public fixed byte m_flFlashMaxAlpha[0x4];
        [FieldOffset(0x1510)] public fixed byte m_flFlashDuration[0x4];
        [FieldOffset(0x1514)] public fixed byte m_flClientHealthFadeChangeTimestamp[0x4];
        [FieldOffset(0x1518)] public fixed byte m_nClientHealthFadeParityValue[0x4];
        [FieldOffset(0x151C)] public fixed byte m_fNextThinkPushAway[0x8];
        [FieldOffset(0x1524)] public fixed byte m_flCurrentMusicStartTime[0x4];
        [FieldOffset(0x1528)] public fixed byte m_flMusicRoundStartTime[0x4];
        [FieldOffset(0x152C)] public fixed byte m_bDeferStartMusicOnWarmup[0x4];
        [FieldOffset(0x1530)] public fixed byte m_flLastSmokeOverlayAlpha[0x4];
        [FieldOffset(0x1534)] public fixed byte m_flLastSmokeAge[0x4];
        [FieldOffset(0x1538)] public fixed byte m_vLastSmokeOverlayColor[0x28];
        [FieldOffset(0x1560)] public fixed byte m_hOriginalController[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x13E0)]
    public unsafe struct C_BreakableProp {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12A0];
        [FieldOffset(0x12A0)] public fixed byte m_CPropDataComponent[0x40];
        [FieldOffset(0x12E0)] public fixed byte m_OnStartDeath[0x18];
        [FieldOffset(0x12F8)] public fixed byte m_OnBreak[0x18];
        [FieldOffset(0x1310)] public fixed byte m_OnHealthChanged[0x20];
        [FieldOffset(0x1330)] public fixed byte m_OnTakeDamage[0x18];
        [FieldOffset(0x1348)] public fixed byte m_impactEnergyScale[0x4];
        [FieldOffset(0x134C)] public fixed byte m_iMinHealthDmg[0x4];
        [FieldOffset(0x1350)] public fixed byte m_flPressureDelay[0x4];
        [FieldOffset(0x1354)] public fixed byte m_flDefBurstScale[0x4];
        [FieldOffset(0x1358)] public fixed byte m_vDefBurstOffset[0xC];
        [FieldOffset(0x1364)] public fixed byte m_hBreaker[0x4];
        [FieldOffset(0x1368)] public fixed byte m_PerformanceMode[0x4];
        [FieldOffset(0x136C)] public fixed byte m_flPreventDamageBeforeTime[0x4];
        [FieldOffset(0x1370)] public fixed byte m_BreakableContentsType[0x8];
        [FieldOffset(0x1378)] public fixed byte m_strBreakableContentsPropGroupOverride[0x8];
        [FieldOffset(0x1380)] public fixed byte m_strBreakableContentsParticleOverride[0x8];
        [FieldOffset(0x1388)] public fixed byte m_bHasBreakPiecesOrCommands[0x4];
        [FieldOffset(0x138C)] public fixed byte m_explodeDamage[0x4];
        [FieldOffset(0x1390)] public fixed byte m_explodeRadius[0x8];
        [FieldOffset(0x1398)] public fixed byte m_sExplosionType[0x8];
        [FieldOffset(0x13A0)] public fixed byte m_explosionDelay[0x8];
        [FieldOffset(0x13A8)] public fixed byte m_explosionBuildupSound[0x8];
        [FieldOffset(0x13B0)] public fixed byte m_explosionCustomEffect[0x8];
        [FieldOffset(0x13B8)] public fixed byte m_explosionCustomSound[0x8];
        [FieldOffset(0x13C0)] public fixed byte m_explosionModifier[0x8];
        [FieldOffset(0x13C8)] public fixed byte m_hPhysicsAttacker[0x4];
        [FieldOffset(0x13CC)] public fixed byte m_flLastPhysicsInfluenceTime[0x4];
        [FieldOffset(0x13D0)] public fixed byte m_flDefaultFadeScale[0x4];
        [FieldOffset(0x13D4)] public fixed byte m_hLastAttacker[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1D18)]
    public unsafe struct CCSGO_WingmanIntroTerroristPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1D18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x158)]
    public unsafe struct C_RetakeGameRules {
        [FieldOffset(0x0)] public fixed byte pad_0[0x138];
        [FieldOffset(0x138)] public fixed byte m_nMatchSeed[0x4];
        [FieldOffset(0x13C)] public fixed byte m_bBlockersPresent[0x1];
        [FieldOffset(0x13D)] public fixed byte m_bRoundInProgress[0x3];
        [FieldOffset(0x140)] public fixed byte m_iFirstSecondHalfRound[0x4];
        [FieldOffset(0x144)] public fixed byte m_iBombSite[0x4];
        [FieldOffset(0x148)] public fixed byte m_hBombPlanter[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x620)]
    public unsafe struct C_SoundOpvarSetDomeEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x620];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2F0)]
    public unsafe struct CPrecipitationVData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_szParticlePrecipitationEffect[0xE0];
        [FieldOffset(0x108)] public fixed byte m_szParticlePrecipitationPuddleEffect[0xE0];
        [FieldOffset(0x1E8)] public fixed byte m_szParticlePrecipitationPostEffect[0xE0];
        [FieldOffset(0x2C8)] public fixed byte m_flInnerDistance[0x4];
        [FieldOffset(0x2CC)] public fixed byte m_nAttachType[0x4];
        [FieldOffset(0x2D0)] public fixed byte m_bBatchSameVolumeType[0x4];
        [FieldOffset(0x2D4)] public fixed byte m_nRTEnvCP[0x4];
        [FieldOffset(0x2D8)] public fixed byte m_nRTEnvCPComponent[0x8];
        [FieldOffset(0x2E0)] public fixed byte m_szModifier[0x8];
        [FieldOffset(0x2E8)] public fixed byte m_nUseSnapshotFromSurfaceGraph[0x4];
        [FieldOffset(0x2EC)] public fixed byte m_snapshotFilter[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1B0)]
    public unsafe struct CPulseCell_WaitForObservable {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_Condition[0x90];
        [FieldOffset(0x168)] public fixed byte m_OnTrue[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x630)]
    public unsafe struct C_SoundAreaEntitySphere {
        [FieldOffset(0x0)] public fixed byte pad_0[0x628];
        [FieldOffset(0x628)] public fixed byte m_flRadius[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CPulseCell_Step_EntFire {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Input[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_WeaponAWP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10A8)]
    public unsafe struct C_BaseButton {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
        [FieldOffset(0x1098)] public fixed byte m_glowEntity[0x4];
        [FieldOffset(0x109C)] public fixed byte m_usable[0x4];
        [FieldOffset(0x10A0)] public fixed byte m_szDisplayText[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x100)]
    public unsafe struct CCSObserver_ObserverServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte m_obsInterpState[0x90];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CHitboxComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x14];
        [FieldOffset(0x14)] public fixed byte m_flBoundsExpandRadius[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x618)]
    public unsafe struct C_SoundEventBoxHelper {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_vMins[0xC];
        [FieldOffset(0x60C)] public fixed byte m_vMaxs[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6D8)]
    public unsafe struct C_SoundEventBoxEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x6C0];
        [FieldOffset(0x6C0)] public fixed byte m_vecBoxHelpersNetworked[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct ServerAuthoritativeWeaponSlot_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte unClass[0x2];
        [FieldOffset(0x32)] public fixed byte unSlot[0x2];
        [FieldOffset(0x34)] public fixed byte unItemDefIdx[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x600)]
    public unsafe struct C_CSMinimapBoundary {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA0)]
    public unsafe struct CPathQueryComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x11C0)]
    public unsafe struct C_Precipitation {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1180];
        [FieldOffset(0x1180)] public fixed byte m_flDensity[0x10];
        [FieldOffset(0x1190)] public fixed byte m_flParticleInnerDist[0x8];
        [FieldOffset(0x1198)] public fixed byte m_pParticleDef[0x14];
        [FieldOffset(0x11AC)] public fixed byte m_tParticlePrecipTraceTimer[0x8];
        [FieldOffset(0x11B4)] public fixed byte m_bActiveParticlePrecipEmitter[0x1];
        [FieldOffset(0x11B5)] public fixed byte m_bParticlePrecipInitialized[0x1];
        [FieldOffset(0x11B6)] public fixed byte m_bHasSimulatedSinceLastSceneObjectUpdate[0x2];
        [FieldOffset(0x11B8)] public fixed byte m_nAvailableSheetSequencesMaxIndex[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x638)]
    public unsafe struct CLogicRelay {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_OnSpawn[0x18];
        [FieldOffset(0x618)] public fixed byte m_OnTrigger[0x18];
        [FieldOffset(0x630)] public fixed byte m_bDisabled[0x1];
        [FieldOffset(0x631)] public fixed byte m_bWaitForRefire[0x1];
        [FieldOffset(0x632)] public fixed byte m_bTriggerOnce[0x1];
        [FieldOffset(0x633)] public fixed byte m_bFastRetrigger[0x1];
        [FieldOffset(0x634)] public fixed byte m_bPassthoughCaller[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct SequenceHistory_t {
        [FieldOffset(0x0)] public fixed byte m_hSequence[0x4];
        [FieldOffset(0x4)] public fixed byte m_flSeqStartTime[0x4];
        [FieldOffset(0x8)] public fixed byte m_flSeqFixedCycle[0x4];
        [FieldOffset(0xC)] public fixed byte m_nSeqLoopMode[0x4];
        [FieldOffset(0x10)] public fixed byte m_flPlaybackRate[0x4];
        [FieldOffset(0x14)] public fixed byte m_flCyclesPerSecond[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPlayer_ItemServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulse_OutflowConnection {
        [FieldOffset(0x0)] public fixed byte m_SourceOutflowName[0x10];
        [FieldOffset(0x10)] public fixed byte m_nDestChunk[0x4];
        [FieldOffset(0x14)] public fixed byte m_nInstruction[0x4];
        [FieldOffset(0x18)] public fixed byte m_OutflowRegisterMap[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_WeaponUMP45 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_WeaponG3SG1 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10A8)]
    public unsafe struct C_SpotlightEnd {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
        [FieldOffset(0x1098)] public fixed byte m_flLightScale[0x4];
        [FieldOffset(0x109C)] public fixed byte m_Radius[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1358)]
    public unsafe struct C_Fish {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1268];
        [FieldOffset(0x1268)] public fixed byte m_pos[0xC];
        [FieldOffset(0x1274)] public fixed byte m_vel[0xC];
        [FieldOffset(0x1280)] public fixed byte m_angles[0xC];
        [FieldOffset(0x128C)] public fixed byte m_localLifeState[0x4];
        [FieldOffset(0x1290)] public fixed byte m_deathDepth[0x4];
        [FieldOffset(0x1294)] public fixed byte m_deathAngle[0x4];
        [FieldOffset(0x1298)] public fixed byte m_buoyancy[0x8];
        [FieldOffset(0x12A0)] public fixed byte m_wiggleTimer[0x18];
        [FieldOffset(0x12B8)] public fixed byte m_wigglePhase[0x4];
        [FieldOffset(0x12BC)] public fixed byte m_wiggleRate[0x4];
        [FieldOffset(0x12C0)] public fixed byte m_actualPos[0xC];
        [FieldOffset(0x12CC)] public fixed byte m_actualAngles[0xC];
        [FieldOffset(0x12D8)] public fixed byte m_poolOrigin[0xC];
        [FieldOffset(0x12E4)] public fixed byte m_waterLevel[0x4];
        [FieldOffset(0x12E8)] public fixed byte m_gotUpdate[0x4];
        [FieldOffset(0x12EC)] public fixed byte m_x[0x4];
        [FieldOffset(0x12F0)] public fixed byte m_y[0x4];
        [FieldOffset(0x12F4)] public fixed byte m_z[0x4];
        [FieldOffset(0x12F8)] public fixed byte m_angle[0x4];
        [FieldOffset(0x12FC)] public fixed byte m_errorHistory[0x50];
        [FieldOffset(0x134C)] public fixed byte m_errorHistoryIndex[0x4];
        [FieldOffset(0x1350)] public fixed byte m_errorHistoryCount[0x4];
        [FieldOffset(0x1354)] public fixed byte m_averageError[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_WeaponFamas {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6B0)]
    public unsafe struct C_EnvVolumetricFogController {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_flScattering[0x4];
        [FieldOffset(0x604)] public fixed byte m_TintColor[0x4];
        [FieldOffset(0x608)] public fixed byte m_flAnisotropy[0x4];
        [FieldOffset(0x60C)] public fixed byte m_flFadeSpeed[0x4];
        [FieldOffset(0x610)] public fixed byte m_flDrawDistance[0x4];
        [FieldOffset(0x614)] public fixed byte m_flFadeInStart[0x4];
        [FieldOffset(0x618)] public fixed byte m_flFadeInEnd[0x4];
        [FieldOffset(0x61C)] public fixed byte m_flIndirectStrength[0x4];
        [FieldOffset(0x620)] public fixed byte m_nVolumeDepth[0x4];
        [FieldOffset(0x624)] public fixed byte m_fFirstVolumeSliceThickness[0x4];
        [FieldOffset(0x628)] public fixed byte m_nIndirectTextureDimX[0x4];
        [FieldOffset(0x62C)] public fixed byte m_nIndirectTextureDimY[0x4];
        [FieldOffset(0x630)] public fixed byte m_nIndirectTextureDimZ[0x4];
        [FieldOffset(0x634)] public fixed byte m_vBoxMins[0xC];
        [FieldOffset(0x640)] public fixed byte m_vBoxMaxs[0xC];
        [FieldOffset(0x64C)] public fixed byte m_bActive[0x4];
        [FieldOffset(0x650)] public fixed byte m_flStartAnisoTime[0x4];
        [FieldOffset(0x654)] public fixed byte m_flStartScatterTime[0x4];
        [FieldOffset(0x658)] public fixed byte m_flStartDrawDistanceTime[0x4];
        [FieldOffset(0x65C)] public fixed byte m_flStartAnisotropy[0x4];
        [FieldOffset(0x660)] public fixed byte m_flStartScattering[0x4];
        [FieldOffset(0x664)] public fixed byte m_flStartDrawDistance[0x4];
        [FieldOffset(0x668)] public fixed byte m_flDefaultAnisotropy[0x4];
        [FieldOffset(0x66C)] public fixed byte m_flDefaultScattering[0x4];
        [FieldOffset(0x670)] public fixed byte m_flDefaultDrawDistance[0x4];
        [FieldOffset(0x674)] public fixed byte m_bStartDisabled[0x1];
        [FieldOffset(0x675)] public fixed byte m_bEnableIndirect[0x1];
        [FieldOffset(0x676)] public fixed byte m_bIsMaster[0x2];
        [FieldOffset(0x678)] public fixed byte m_hFogIndirectTexture[0x8];
        [FieldOffset(0x680)] public fixed byte m_nForceRefreshCount[0x4];
        [FieldOffset(0x684)] public fixed byte m_fNoiseSpeed[0x4];
        [FieldOffset(0x688)] public fixed byte m_fNoiseStrength[0x4];
        [FieldOffset(0x68C)] public fixed byte m_vNoiseScale[0xC];
        [FieldOffset(0x698)] public fixed byte m_fWindSpeed[0x4];
        [FieldOffset(0x69C)] public fixed byte m_vWindDirection[0xC];
        [FieldOffset(0x6A8)] public fixed byte m_bFirstTime[0x8];
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
    [StructLayout(LayoutKind.Explicit, Size = 0x608)]
    public unsafe struct C_EnvDetailController {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_flFadeStartDist[0x4];
        [FieldOffset(0x604)] public fixed byte m_flFadeEndDist[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1180)]
    public unsafe struct CHostageRescueZoneShim {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1180];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x690)]
    public unsafe struct CEnvSoundscapeAlias_snd_soundscape {
        [FieldOffset(0x0)] public fixed byte pad_0[0x690];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CCSPlayer_HostageServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_hCarriedHostage[0x4];
        [FieldOffset(0x4C)] public fixed byte m_hCarriedHostageProp[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x600)]
    public unsafe struct C_GameRulesProxy {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD0)]
    public unsafe struct CRenderComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte __m_pChainEntity[0x40];
        [FieldOffset(0x50)] public fixed byte m_bIsRenderingWithViewModels[0x4];
        [FieldOffset(0x54)] public fixed byte m_nSplitscreenFlags[0x4];
        [FieldOffset(0x58)] public fixed byte m_bEnableRendering[0x50];
        [FieldOffset(0xA8)] public fixed byte m_bInterpolationReadyToDraw[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6B8)]
    public unsafe struct C_Team {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_aPlayerControllers[0x18];
        [FieldOffset(0x618)] public fixed byte m_aPlayers[0x18];
        [FieldOffset(0x630)] public fixed byte m_iScore[0x4];
        [FieldOffset(0x634)] public fixed byte m_szTeamname[0x84];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x710)]
    public unsafe struct C_PathParticleRopeAlias_path_particle_rope_clientside {
        [FieldOffset(0x0)] public fixed byte pad_0[0x710];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x608)]
    public unsafe struct CPointChildModifier {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_bOrphanInsteadOfDeletingChildrenOnRemove[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CCSPlayerLegacyJump {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_bOldJumpPressed[0x4];
        [FieldOffset(0x14)] public fixed byte m_flJumpPressedTime[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F20)]
    public unsafe struct C_WeaponNOVA {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1330)]
    public unsafe struct C_CS2HudModelAddon {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1330];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_DEagle {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1180)]
    public unsafe struct C_TriggerMultiple {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1180];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x690)]
    public unsafe struct C_CSGO_TerroristRushIntroCamera {
        [FieldOffset(0x0)] public fixed byte pad_0[0x690];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x690)]
    public unsafe struct C_CSGO_TeamPreviewCamera {
        [FieldOffset(0x0)] public fixed byte pad_0[0x688];
        [FieldOffset(0x688)] public fixed byte m_nVariant[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x13A8)]
    public unsafe struct C_ColorCorrectionVolume {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1180];
        [FieldOffset(0x1180)] public fixed byte m_LastEnterWeight[0x4];
        [FieldOffset(0x1184)] public fixed byte m_LastEnterTime[0x4];
        [FieldOffset(0x1188)] public fixed byte m_LastExitWeight[0x4];
        [FieldOffset(0x118C)] public fixed byte m_LastExitTime[0x4];
        [FieldOffset(0x1190)] public fixed byte m_bEnabled[0x4];
        [FieldOffset(0x1194)] public fixed byte m_MaxWeight[0x4];
        [FieldOffset(0x1198)] public fixed byte m_FadeDuration[0x4];
        [FieldOffset(0x119C)] public fixed byte m_Weight[0x4];
        [FieldOffset(0x11A0)] public fixed byte m_lookupFilename[0x208];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x258)]
    public unsafe struct CPlayer_MovementServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_nImpulse[0x8];
        [FieldOffset(0x50)] public fixed byte m_nButtons[0x20];
        [FieldOffset(0x70)] public fixed byte m_nQueuedButtonDownMask[0x8];
        [FieldOffset(0x78)] public fixed byte m_nQueuedButtonChangeMask[0x8];
        [FieldOffset(0x80)] public fixed byte m_nButtonDoublePressed[0x8];
        [FieldOffset(0x88)] public fixed byte m_pButtonPressedCmdNumber[0x100];
        [FieldOffset(0x188)] public fixed byte m_nLastCommandNumberProcessed[0x8];
        [FieldOffset(0x190)] public fixed byte m_nToggleButtonDownMask[0x10];
        [FieldOffset(0x1A0)] public fixed byte m_flCmdForwardMove[0x4];
        [FieldOffset(0x1A4)] public fixed byte m_flCmdLeftMove[0x4];
        [FieldOffset(0x1A8)] public fixed byte m_flCmdUpMove[0x4];
        [FieldOffset(0x1AC)] public fixed byte m_flMaxspeed[0x4];
        [FieldOffset(0x1B0)] public fixed byte m_arrForceSubtickMoveWhen[0x10];
        [FieldOffset(0x1C0)] public fixed byte m_flForwardMove[0x4];
        [FieldOffset(0x1C4)] public fixed byte m_flLeftMove[0x4];
        [FieldOffset(0x1C8)] public fixed byte m_flUpMove[0x4];
        [FieldOffset(0x1CC)] public fixed byte m_vecLastMovementImpulses[0x74];
        [FieldOffset(0x240)] public fixed byte m_vecOldViewAngles[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x630)]
    public unsafe struct CInfoDynamicShadowHintBox {
        [FieldOffset(0x0)] public fixed byte pad_0[0x618];
        [FieldOffset(0x618)] public fixed byte m_vBoxMins[0xC];
        [FieldOffset(0x624)] public fixed byte m_vBoxMaxs[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6A0)]
    public unsafe struct CBaseAnimGraphController {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_nAnimationAlgorithm[0x4];
        [FieldOffset(0x1C)] public fixed byte m_nNextExternalGraphHandle[0x4];
        [FieldOffset(0x20)] public fixed byte m_vecSecondarySkeletonSlotIDs[0x18];
        [FieldOffset(0x38)] public fixed byte m_vecSecondarySkeletons[0x18];
        [FieldOffset(0x50)] public fixed byte m_nSecondarySkeletonMasterCount[0x8];
        [FieldOffset(0x58)] public fixed byte m_flSoundSyncTime[0x4];
        [FieldOffset(0x5C)] public fixed byte m_nActiveIKChainMask[0x54];
        [FieldOffset(0xB0)] public fixed byte m_hSequence[0x4];
        [FieldOffset(0xB4)] public fixed byte m_flSeqStartTime[0x4];
        [FieldOffset(0xB8)] public fixed byte m_flSeqFixedCycle[0x4];
        [FieldOffset(0xBC)] public fixed byte m_nAnimLoopMode[0x4];
        [FieldOffset(0xC0)] public fixed byte m_flPlaybackRate[0xC];
        [FieldOffset(0xCC)] public fixed byte m_nNotifyState[0x1];
        [FieldOffset(0xCD)] public fixed byte m_bNetworkedAnimationInputsChanged[0x1];
        [FieldOffset(0xCE)] public fixed byte m_bNetworkedSequenceChanged[0x1];
        [FieldOffset(0xCF)] public fixed byte m_bLastUpdateSkipped[0x1];
        [FieldOffset(0xD0)] public fixed byte m_bSequenceFinished[0x4];
        [FieldOffset(0xD4)] public fixed byte m_nPrevAnimUpdateTick[0x29C];
        [FieldOffset(0x370)] public fixed byte m_hGraphDefinitionAG2[0x8];
        [FieldOffset(0x378)] public fixed byte m_SerializePoseRecipeAG2Slots[0x68];
        [FieldOffset(0x3E0)] public fixed byte m_SerializePoseRecipeAG2Dynamic[0x18];
        [FieldOffset(0x3F8)] public fixed byte m_nSerializePoseRecipeAG2ActiveSlot[0x4];
        [FieldOffset(0x3FC)] public fixed byte m_nSerializePoseRecipeVersionAG2[0x4];
        [FieldOffset(0x400)] public fixed byte m_nServerGraphInstanceIteration[0x4];
        [FieldOffset(0x404)] public fixed byte m_nServerSerializationContextIteration[0x4];
        [FieldOffset(0x408)] public fixed byte m_primaryGraphId[0x8];
        [FieldOffset(0x410)] public fixed byte m_vecExternalGraphIds[0x18];
        [FieldOffset(0x428)] public fixed byte m_vecExternalClipIds[0x18];
        [FieldOffset(0x440)] public fixed byte m_sAnimGraph2Identifier[0x8];
        [FieldOffset(0x448)] public fixed byte m_pGraphInstanceAG2[0x220];
        [FieldOffset(0x668)] public fixed byte m_vecExternalGraphs[0x31];
        [FieldOffset(0x699)] public fixed byte m_nPrevAnimationAlgorithm[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x848)]
    public unsafe struct C_ColorCorrection {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_vecOrigin[0xC];
        [FieldOffset(0x60C)] public fixed byte m_MinFalloff[0x4];
        [FieldOffset(0x610)] public fixed byte m_MaxFalloff[0x4];
        [FieldOffset(0x614)] public fixed byte m_flFadeInDuration[0x4];
        [FieldOffset(0x618)] public fixed byte m_flFadeOutDuration[0x4];
        [FieldOffset(0x61C)] public fixed byte m_flMaxWeight[0x4];
        [FieldOffset(0x620)] public fixed byte m_flCurWeight[0x4];
        [FieldOffset(0x624)] public fixed byte m_netlookupFilename[0x200];
        [FieldOffset(0x824)] public fixed byte m_bEnabled[0x1];
        [FieldOffset(0x825)] public fixed byte m_bMaster[0x1];
        [FieldOffset(0x826)] public fixed byte m_bClientSide[0x1];
        [FieldOffset(0x827)] public fixed byte m_bExclusive[0x1];
        [FieldOffset(0x828)] public fixed byte m_bEnabledOnClient[0x4];
        [FieldOffset(0x82C)] public fixed byte m_flCurWeightOnClient[0x4];
        [FieldOffset(0x830)] public fixed byte m_bFadingIn[0x4];
        [FieldOffset(0x834)] public fixed byte m_flFadeStartWeight[0x4];
        [FieldOffset(0x838)] public fixed byte m_flFadeStartTime[0x4];
        [FieldOffset(0x83C)] public fixed byte m_flFadeDuration[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct AnimGraph2SerializedPoseRecipeSlot_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_topology[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x118)]
    public unsafe struct CBuoyancyHelper {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_pController[0x10];
        [FieldOffset(0x18)] public fixed byte m_nFluidType[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flFluidDensity[0x4];
        [FieldOffset(0x20)] public fixed byte m_flNeutrallyBuoyantGravity[0x4];
        [FieldOffset(0x24)] public fixed byte m_flNeutrallyBuoyantLinearDamping[0x4];
        [FieldOffset(0x28)] public fixed byte m_flNeutrallyBuoyantAngularDamping[0x4];
        [FieldOffset(0x2C)] public fixed byte m_bNeutrallyBuoyant[0x4];
        [FieldOffset(0x30)] public fixed byte m_vecFractionOfWheelSubmergedForWheelFriction[0x18];
        [FieldOffset(0x48)] public fixed byte m_vecWheelFrictionScales[0x18];
        [FieldOffset(0x60)] public fixed byte m_vecFractionOfWheelSubmergedForWheelDrag[0x18];
        [FieldOffset(0x78)] public fixed byte m_vecWheelDrag[0xA0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1098)]
    public unsafe struct C_PhysBox {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x350)]
    public unsafe struct CCSPlayer_CameraServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x2B0];
        [FieldOffset(0x2B0)] public fixed byte m_flDeathCamTilt[0x4];
        [FieldOffset(0x2B4)] public fixed byte m_hDeathCamBounds[0x4];
        [FieldOffset(0x2B8)] public fixed byte m_bDeathCamBoundsSearched[0x8];
        [FieldOffset(0x2C0)] public fixed byte m_vClientScopeInaccuracy[0x90];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6B8)]
    public unsafe struct CFilterMultiple {
        [FieldOffset(0x0)] public fixed byte pad_0[0x638];
        [FieldOffset(0x638)] public fixed byte m_nFilterType[0x8];
        [FieldOffset(0x640)] public fixed byte m_iFilterName[0x50];
        [FieldOffset(0x690)] public fixed byte m_hFilter[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x140)]
    public unsafe struct CPulseCell_FireCursors {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_Outflows[0x18];
        [FieldOffset(0xF0)] public fixed byte m_bWaitForChildOutflows[0x8];
        [FieldOffset(0xF8)] public fixed byte m_OnFinished[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x690)]
    public unsafe struct CEnvSoundscape {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_OnPlay[0x18];
        [FieldOffset(0x618)] public fixed byte m_flRadius[0x8];
        [FieldOffset(0x620)] public fixed byte m_soundEventName[0x8];
        [FieldOffset(0x628)] public fixed byte m_bOverrideWithEvent[0x4];
        [FieldOffset(0x62C)] public fixed byte m_soundscapeIndex[0x4];
        [FieldOffset(0x630)] public fixed byte m_soundscapeEntityListId[0x8];
        [FieldOffset(0x638)] public fixed byte m_positionNames[0x40];
        [FieldOffset(0x678)] public fixed byte m_hProxySoundscape[0x4];
        [FieldOffset(0x67C)] public fixed byte m_bDisabled[0x4];
        [FieldOffset(0x680)] public fixed byte m_soundscapeName[0x8];
        [FieldOffset(0x688)] public fixed byte m_soundEventHash[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6C0)]
    public unsafe struct C_SoundEventEntityAlias_snd_event_point {
        [FieldOffset(0x0)] public fixed byte pad_0[0x6C0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x670)]
    public unsafe struct C_FogController {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_fog[0x68];
        [FieldOffset(0x668)] public fixed byte m_bUseAngles[0x4];
        [FieldOffset(0x66C)] public fixed byte m_iChangedVariables[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x620)]
    public unsafe struct C_SoundOpvarSetOBBWindEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x620];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1FE0)]
    public unsafe struct C_MolotovGrenade {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1FE0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12F0)]
    public unsafe struct C_NetTestBaseCombatCharacter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12F0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1B0)]
    public unsafe struct CBodyComponentPoint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte m_sceneNode[0x130];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_WeaponM4A1Silencer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x658)]
    public unsafe struct C_SkyCameraVolume {
        [FieldOffset(0x0)] public fixed byte pad_0[0x618];
        [FieldOffset(0x618)] public fixed byte m_vBoxMins[0xC];
        [FieldOffset(0x624)] public fixed byte m_vBoxMaxs[0xC];
        [FieldOffset(0x630)] public fixed byte m_hTarget[0x4];
        [FieldOffset(0x634)] public fixed byte m_nPriority[0x4];
        [FieldOffset(0x638)] public fixed byte m_bIsEnabled[0x1];
        [FieldOffset(0x639)] public fixed byte m_bSkyboxBlurEffect[0x3];
        [FieldOffset(0x63C)] public fixed byte m_vBlurOrigin[0xC];
        [FieldOffset(0x648)] public fixed byte m_bSkyboxReceivesWorldCsm[0x1];
        [FieldOffset(0x649)] public fixed byte m_bWorldReceivesSkyboxCsm[0x1];
        [FieldOffset(0x64A)] public fixed byte m_bStartDisabled[0x6];
        [FieldOffset(0x650)] public fixed byte m_iszTargetName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x5B0)]
    public unsafe struct C_EconItemView {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
        [FieldOffset(0x60)] public fixed byte m_bInventoryImageRgbaRequested[0x1];
        [FieldOffset(0x61)] public fixed byte m_bInventoryImageTriedCache[0x1F];
        [FieldOffset(0x80)] public fixed byte m_nInventoryImageRgbaWidth[0x4];
        [FieldOffset(0x84)] public fixed byte m_nInventoryImageRgbaHeight[0x4];
        [FieldOffset(0x88)] public fixed byte m_szCurrentLoadCachedFileName[0x130];
        [FieldOffset(0x1B8)] public fixed byte m_bRestoreCustomMaterialAfterPrecache[0x2];
        [FieldOffset(0x1BA)] public fixed byte m_iItemDefinitionIndex[0x2];
        [FieldOffset(0x1BC)] public fixed byte m_iEntityQuality[0x4];
        [FieldOffset(0x1C0)] public fixed byte m_iEntityLevel[0x8];
        [FieldOffset(0x1C8)] public fixed byte m_iItemID[0x8];
        [FieldOffset(0x1D0)] public fixed byte m_iItemIDHigh[0x4];
        [FieldOffset(0x1D4)] public fixed byte m_iItemIDLow[0x4];
        [FieldOffset(0x1D8)] public fixed byte m_iAccountID[0x4];
        [FieldOffset(0x1DC)] public fixed byte m_iInventoryPosition[0xC];
        [FieldOffset(0x1E8)] public fixed byte m_bInitialized[0x1];
        [FieldOffset(0x1E9)] public fixed byte m_bDisallowSOC[0x1];
        [FieldOffset(0x1EA)] public fixed byte m_bIsStoreItem[0x1];
        [FieldOffset(0x1EB)] public fixed byte m_bIsTradeItem[0x1];
        [FieldOffset(0x1EC)] public fixed byte m_iEntityQuantity[0x4];
        [FieldOffset(0x1F0)] public fixed byte m_iRarityOverride[0x4];
        [FieldOffset(0x1F4)] public fixed byte m_iQualityOverride[0x4];
        [FieldOffset(0x1F8)] public fixed byte m_iOriginOverride[0x4];
        [FieldOffset(0x1FC)] public fixed byte m_ubStyleOverride[0x1];
        [FieldOffset(0x1FD)] public fixed byte m_unClientFlags[0xB];
        [FieldOffset(0x208)] public fixed byte m_AttributeList[0x78];
        [FieldOffset(0x280)] public fixed byte m_NetworkedDynamicAttributes[0x78];
        [FieldOffset(0x2F8)] public fixed byte m_szCustomName[0xA1];
        [FieldOffset(0x399)] public fixed byte m_szCustomNameOverride[0xA1];
        [FieldOffset(0x43A)] public fixed byte m_szCustomNameOverride2[0xA1];
        [FieldOffset(0x4DB)] public fixed byte m_szCustomNameOverride3[0xCD];
        [FieldOffset(0x5A8)] public fixed byte m_bInitializedTags[0x8];
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
    [StructLayout(LayoutKind.Explicit, Size = 0x6D8)]
    public unsafe struct C_SoundEventPathCornerEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x6C0];
        [FieldOffset(0x6C0)] public fixed byte m_vecCornerPairsNetworked[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x618)]
    public unsafe struct C_InfoVisibilityBox {
        [FieldOffset(0x0)] public fixed byte pad_0[0x604];
        [FieldOffset(0x604)] public fixed byte m_nMode[0x4];
        [FieldOffset(0x608)] public fixed byte m_vBoxSize[0xC];
        [FieldOffset(0x614)] public fixed byte m_bEnabled[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CCSPlayer_ItemServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_bHasDefuser[0x1];
        [FieldOffset(0x49)] public fixed byte m_bHasHelmet[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulseCell_Value_Gradient {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Gradient[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct IntervalTimer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_timestamp[0x4];
        [FieldOffset(0xC)] public fixed byte m_nWorldGroupId[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct audioparams_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte localSound[0x60];
        [FieldOffset(0x68)] public fixed byte soundscapeIndex[0x4];
        [FieldOffset(0x6C)] public fixed byte localBits[0x4];
        [FieldOffset(0x70)] public fixed byte soundscapeEntityListIndex[0x4];
        [FieldOffset(0x74)] public fixed byte soundEventHash[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x710)]
    public unsafe struct C_PathParticleRope {
        [FieldOffset(0x0)] public fixed byte pad_0[0x608];
        [FieldOffset(0x608)] public fixed byte m_bStartActive[0x4];
        [FieldOffset(0x60C)] public fixed byte m_flMaxSimulationTime[0x4];
        [FieldOffset(0x610)] public fixed byte m_iszEffectName[0x8];
        [FieldOffset(0x618)] public fixed byte m_PathNodes_Name[0x18];
        [FieldOffset(0x630)] public fixed byte m_flParticleSpacing[0x4];
        [FieldOffset(0x634)] public fixed byte m_flSlack[0x4];
        [FieldOffset(0x638)] public fixed byte m_flRadius[0x4];
        [FieldOffset(0x63C)] public fixed byte m_ColorTint[0x4];
        [FieldOffset(0x640)] public fixed byte m_nEffectState[0x8];
        [FieldOffset(0x648)] public fixed byte m_iEffectIndex[0x8];
        [FieldOffset(0x650)] public fixed byte m_PathNodes_Position[0x18];
        [FieldOffset(0x668)] public fixed byte m_PathNodes_TangentIn[0x18];
        [FieldOffset(0x680)] public fixed byte m_PathNodes_TangentOut[0x18];
        [FieldOffset(0x698)] public fixed byte m_PathNodes_Color[0x18];
        [FieldOffset(0x6B0)] public fixed byte m_PathNodes_PinEnabled[0x18];
        [FieldOffset(0x6C8)] public fixed byte m_PathNodes_RadiusScale[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1378)]
    public unsafe struct C_DecoyProjectile {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1348];
        [FieldOffset(0x1348)] public fixed byte m_nDecoyShotTick[0x4];
        [FieldOffset(0x134C)] public fixed byte m_nClientLastKnownDecoyShotTick[0x24];
        [FieldOffset(0x1370)] public fixed byte m_flTimeParticleEffectSpawn[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x610)]
    public unsafe struct C_AttributeContainer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
        [FieldOffset(0x50)] public fixed byte m_Item[0x5B0];
        [FieldOffset(0x600)] public fixed byte m_iExternalItemProviderRegisteredToken[0x8];
        [FieldOffset(0x608)] public fixed byte m_ullRegisteredAsItemID[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F20)]
    public unsafe struct C_CSWeaponBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x19A8];
        [FieldOffset(0x19A8)] public fixed byte m_iWeaponGameplayAnimState[0x4];
        [FieldOffset(0x19AC)] public fixed byte m_flWeaponGameplayAnimStateTimestamp[0x4];
        [FieldOffset(0x19B0)] public fixed byte m_flInspectCancelCompleteTime[0x4];
        [FieldOffset(0x19B4)] public fixed byte m_bInspectPending[0x1];
        [FieldOffset(0x19B5)] public fixed byte m_bInspectShouldLoop[0x2B];
        [FieldOffset(0x19E0)] public fixed byte m_nLastEmptySoundCmdNum[0x4];
        [FieldOffset(0x19E4)] public fixed byte m_bFireOnEmpty[0x4];
        [FieldOffset(0x19E8)] public fixed byte m_OnPlayerPickup[0x18];
        [FieldOffset(0x1A00)] public fixed byte m_weaponMode[0x4];
        [FieldOffset(0x1A04)] public fixed byte m_flTurningInaccuracyDelta[0x4];
        [FieldOffset(0x1A08)] public fixed byte m_vecTurningInaccuracyEyeDirLast[0xC];
        [FieldOffset(0x1A14)] public fixed byte m_flTurningInaccuracy[0x4];
        [FieldOffset(0x1A18)] public fixed byte m_fAccuracyPenalty[0x4];
        [FieldOffset(0x1A1C)] public fixed byte m_flLastAccuracyUpdateTime[0x4];
        [FieldOffset(0x1A20)] public fixed byte m_fAccuracySmoothedForZoom[0x4];
        [FieldOffset(0x1A24)] public fixed byte m_iRecoilIndex[0x4];
        [FieldOffset(0x1A28)] public fixed byte m_flRecoilIndex[0x4];
        [FieldOffset(0x1A2C)] public fixed byte m_bBurstMode[0x4];
        [FieldOffset(0x1A30)] public fixed byte m_flLastBurstModeChangeTime[0x4];
        [FieldOffset(0x1A34)] public fixed byte m_nPostponeFireReadyTicks[0x4];
        [FieldOffset(0x1A38)] public fixed byte m_flPostponeFireReadyFrac[0x4];
        [FieldOffset(0x1A3C)] public fixed byte m_bInReload[0x4];
        [FieldOffset(0x1A40)] public fixed byte m_nDeployTick[0x4];
        [FieldOffset(0x1A44)] public fixed byte m_flAttackHoldStartTime[0x4];
        [FieldOffset(0x1A48)] public fixed byte m_flDroppedAtTime[0x8];
        [FieldOffset(0x1A50)] public fixed byte m_bIsHauledBack[0x1];
        [FieldOffset(0x1A51)] public fixed byte m_bSilencerOn[0x3];
        [FieldOffset(0x1A54)] public fixed byte m_flTimeSilencerSwitchComplete[0x4];
        [FieldOffset(0x1A58)] public fixed byte m_bIsInStealthReload[0x1];
        [FieldOffset(0x1A59)] public fixed byte m_bInSilentReloadSection[0x3];
        [FieldOffset(0x1A5C)] public fixed byte m_flStealthReloadHoldStartTime[0x4];
        [FieldOffset(0x1A60)] public fixed byte m_bReloadHeldSinceStart[0x4];
        [FieldOffset(0x1A64)] public fixed byte m_flWeaponActionPlaybackRate[0x4];
        [FieldOffset(0x1A68)] public fixed byte m_iOriginalTeamNumber[0x4];
        [FieldOffset(0x1A6C)] public fixed byte m_iMostRecentTeamNumber[0x4];
        [FieldOffset(0x1A70)] public fixed byte m_bDroppedNearBuyZone[0x4];
        [FieldOffset(0x1A74)] public fixed byte m_flNextAttackRenderTimeOffset[0xAC];
        [FieldOffset(0x1B20)] public fixed byte m_bClearWeaponIdentifyingUGC[0x1];
        [FieldOffset(0x1B21)] public fixed byte m_bVisualsDataSet[0x1];
        [FieldOffset(0x1B22)] public fixed byte m_bUIWeapon[0x2];
        [FieldOffset(0x1B24)] public fixed byte m_nCustomEconReloadEventId[0xC];
        [FieldOffset(0x1B30)] public fixed byte m_bCanBePickedUp[0x4];
        [FieldOffset(0x1B34)] public fixed byte m_nextPrevOwnerUseTime[0x4];
        [FieldOffset(0x1B38)] public fixed byte m_hPrevOwner[0x4];
        [FieldOffset(0x1B3C)] public fixed byte m_nDropTick[0x4];
        [FieldOffset(0x1B40)] public fixed byte m_bWasActiveWeaponWhenDropped[0x24];
        [FieldOffset(0x1B64)] public fixed byte m_donated[0x4];
        [FieldOffset(0x1B68)] public fixed byte m_fLastShotTime[0x4];
        [FieldOffset(0x1B6C)] public fixed byte m_bWasOwnedByCT[0x1];
        [FieldOffset(0x1B6D)] public fixed byte m_bWasOwnedByTerrorist[0x3];
        [FieldOffset(0x1B70)] public fixed byte m_flNextClientFireBulletTime[0x4];
        [FieldOffset(0x1B74)] public fixed byte m_flNextClientFireBulletTime_Repredict[0x5C];
        [FieldOffset(0x1BD0)] public fixed byte m_IronSightController[0xB0];
        [FieldOffset(0x1C80)] public fixed byte m_iIronSightMode[0x78];
        [FieldOffset(0x1CF8)] public fixed byte m_flLastLOSTraceFailureTime[0x60];
        [FieldOffset(0x1D58)] public fixed byte m_flWatTickOffset[0x14];
        [FieldOffset(0x1D6C)] public fixed byte m_flLastShakeTime[0x1B4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x228)]
    public unsafe struct CTimeline {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_flValues[0x100];
        [FieldOffset(0x110)] public fixed byte m_nValueCounts[0x100];
        [FieldOffset(0x210)] public fixed byte m_nBucketCount[0x4];
        [FieldOffset(0x214)] public fixed byte m_flInterval[0x4];
        [FieldOffset(0x218)] public fixed byte m_flFinalValue[0x4];
        [FieldOffset(0x21C)] public fixed byte m_nCompressionType[0x4];
        [FieldOffset(0x220)] public fixed byte m_bStopped[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x618)]
    public unsafe struct C_TonemapController2 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_flAutoExposureMin[0x4];
        [FieldOffset(0x604)] public fixed byte m_flAutoExposureMax[0x4];
        [FieldOffset(0x608)] public fixed byte m_flExposureAdaptationSpeedUp[0x4];
        [FieldOffset(0x60C)] public fixed byte m_flExposureAdaptationSpeedDown[0x4];
        [FieldOffset(0x610)] public fixed byte m_flTonemapEVSmoothingRange[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CountdownTimer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_duration[0x4];
        [FieldOffset(0xC)] public fixed byte m_timestamp[0x4];
        [FieldOffset(0x10)] public fixed byte m_timescale[0x4];
        [FieldOffset(0x14)] public fixed byte m_nWorldGroupId[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CNoiseStreamData {
        [FieldOffset(0x0)] public fixed byte m_Stream[0x50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct PulseNodeDynamicOutflows_t__DynamicOutflow_t {
        [FieldOffset(0x0)] public fixed byte m_OutflowID[0x8];
        [FieldOffset(0x8)] public fixed byte m_Connection[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_WeaponMag7 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct WeaponPurchaseCount_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_nItemDefIndex[0x2];
        [FieldOffset(0x32)] public fixed byte m_nCount[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CBasePulseGraphInstance {
        [FieldOffset(0x0)] public fixed byte pad_0[0x88];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x648)]
    public unsafe struct FilterHealth {
        [FieldOffset(0x0)] public fixed byte pad_0[0x638];
        [FieldOffset(0x638)] public fixed byte m_bAdrenalineActive[0x4];
        [FieldOffset(0x63C)] public fixed byte m_iHealthMin[0x4];
        [FieldOffset(0x640)] public fixed byte m_iHealthMax[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1290)]
    public unsafe struct C_PointClientUIHUD {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10D0];
        [FieldOffset(0x10D0)] public fixed byte m_bCheckCSSClasses[0x178];
        [FieldOffset(0x1248)] public fixed byte m_bIgnoreInput[0x4];
        [FieldOffset(0x124C)] public fixed byte m_flWidth[0x4];
        [FieldOffset(0x1250)] public fixed byte m_flHeight[0x4];
        [FieldOffset(0x1254)] public fixed byte m_flDPI[0x4];
        [FieldOffset(0x1258)] public fixed byte m_flInteractDistance[0x4];
        [FieldOffset(0x125C)] public fixed byte m_flDepthOffset[0x4];
        [FieldOffset(0x1260)] public fixed byte m_unOwnerContext[0x4];
        [FieldOffset(0x1264)] public fixed byte m_unHorizontalAlign[0x4];
        [FieldOffset(0x1268)] public fixed byte m_unVerticalAlign[0x4];
        [FieldOffset(0x126C)] public fixed byte m_unOrientation[0x4];
        [FieldOffset(0x1270)] public fixed byte m_bAllowInteractionFromAllSceneWorlds[0x8];
        [FieldOffset(0x1278)] public fixed byte m_vecCSSClasses[0x18];
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
    [StructLayout(LayoutKind.Explicit, Size = 0x600)]
    public unsafe struct C_InfoLadderDismount {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12C8)]
    public unsafe struct C_PointCommentaryNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1280];
        [FieldOffset(0x1280)] public fixed byte m_bActive[0x1];
        [FieldOffset(0x1281)] public fixed byte m_bWasActive[0x3];
        [FieldOffset(0x1284)] public fixed byte m_flEndTime[0x4];
        [FieldOffset(0x1288)] public fixed byte m_flStartTime[0x4];
        [FieldOffset(0x128C)] public fixed byte m_flStartTimeInCommentary[0x4];
        [FieldOffset(0x1290)] public fixed byte m_iszCommentaryFile[0x8];
        [FieldOffset(0x1298)] public fixed byte m_iszTitle[0x8];
        [FieldOffset(0x12A0)] public fixed byte m_iszSpeakers[0x8];
        [FieldOffset(0x12A8)] public fixed byte m_iNodeNumber[0x4];
        [FieldOffset(0x12AC)] public fixed byte m_iNodeNumberMax[0x4];
        [FieldOffset(0x12B0)] public fixed byte m_bListenedTo[0x8];
        [FieldOffset(0x12B8)] public fixed byte m_sndCommentary[0x8];
        [FieldOffset(0x12C0)] public fixed byte m_hViewPosition[0x4];
        [FieldOffset(0x12C4)] public fixed byte m_bRestartAfterRestore[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1118)]
    public unsafe struct CSpriteOriented {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1118];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct shard_model_desc_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_nModelID[0x8];
        [FieldOffset(0x10)] public fixed byte m_hMaterialBase[0x8];
        [FieldOffset(0x18)] public fixed byte m_hMaterialDamageOverlay[0x8];
        [FieldOffset(0x20)] public fixed byte m_solid[0x4];
        [FieldOffset(0x24)] public fixed byte m_vecPanelSize[0x8];
        [FieldOffset(0x2C)] public fixed byte m_vecStressPositionA[0x8];
        [FieldOffset(0x34)] public fixed byte m_vecStressPositionB[0xC];
        [FieldOffset(0x40)] public fixed byte m_vecPanelVertices[0x18];
        [FieldOffset(0x58)] public fixed byte m_vInitialPanelVertices[0x18];
        [FieldOffset(0x70)] public fixed byte m_flGlassHalfThickness[0x4];
        [FieldOffset(0x74)] public fixed byte m_bHasParent[0x1];
        [FieldOffset(0x75)] public fixed byte m_bParentFrozen[0x3];
        [FieldOffset(0x78)] public fixed byte m_SurfacePropStringToken[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1278)]
    public unsafe struct C_KeychainModule {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1270];
        [FieldOffset(0x1270)] public fixed byte m_nKeychainDefID[0x4];
        [FieldOffset(0x1274)] public fixed byte m_nKeychainSeed[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x11B0)]
    public unsafe struct CFuncWater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
        [FieldOffset(0x1098)] public fixed byte m_BuoyancyHelper[0x118];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CCSPlayer_GlowServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CCSGameModeRules {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte __m_pChainEntity[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1FE0)]
    public unsafe struct C_Flashbang {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1FE0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1500)]
    public unsafe struct C_PointClientUIWorldTextPanel {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1300];
        [FieldOffset(0x1300)] public fixed byte m_messageText[0x200];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CCSPlayer_WaterServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_flWaterJumpTime[0x4];
        [FieldOffset(0x4C)] public fixed byte m_vecWaterJumpVel[0xC];
        [FieldOffset(0x58)] public fixed byte m_flSwimSoundTime[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1570)]
    public unsafe struct C_CSObserverPawn {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1568];
        [FieldOffset(0x1568)] public fixed byte m_hDetectParentChange[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct ViewAngleServerChange_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte nType[0x4];
        [FieldOffset(0x34)] public fixed byte qAngle[0xC];
        [FieldOffset(0x40)] public fixed byte nIndex[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10F0)]
    public unsafe struct C_FuncLadder {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
        [FieldOffset(0x1098)] public fixed byte m_vecLadderDir[0x10];
        [FieldOffset(0x10A8)] public fixed byte m_Dismounts[0x18];
        [FieldOffset(0x10C0)] public fixed byte m_vecLocalTop[0xC];
        [FieldOffset(0x10CC)] public fixed byte m_vecPlayerMountPositionTop[0xC];
        [FieldOffset(0x10D8)] public fixed byte m_vecPlayerMountPositionBottom[0xC];
        [FieldOffset(0x10E4)] public fixed byte m_flAutoRideSpeed[0x4];
        [FieldOffset(0x10E8)] public fixed byte m_bDisabled[0x1];
        [FieldOffset(0x10E9)] public fixed byte m_bFakeLadder[0x1];
        [FieldOffset(0x10EA)] public fixed byte m_bHasSlack[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_WeaponMP5SD {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1098)]
    public unsafe struct C_World {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1D18)]
    public unsafe struct C_CSGO_TeamSelectCounterTerroristPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1D18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_WeaponGalilAR {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2B0)]
    public unsafe struct CCSPlayerBase_CameraServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x298];
        [FieldOffset(0x298)] public fixed byte m_iFOV[0x4];
        [FieldOffset(0x29C)] public fixed byte m_iFOVStart[0x4];
        [FieldOffset(0x2A0)] public fixed byte m_flFOVTime[0x4];
        [FieldOffset(0x2A4)] public fixed byte m_flFOVRate[0x4];
        [FieldOffset(0x2A8)] public fixed byte m_hZoomOwner[0x4];
        [FieldOffset(0x2AC)] public fixed byte m_flLastShotFOV[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct C_TeamplayRules {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CPulseCell_Inflow_BaseEntrypoint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_EntryChunk[0x8];
        [FieldOffset(0x50)] public fixed byte m_RegisterMap[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_WeaponSG556 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x3720)]
    public unsafe struct C_CSPlayerPawn {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1570];
        [FieldOffset(0x1570)] public fixed byte m_pBulletServices[0x8];
        [FieldOffset(0x1578)] public fixed byte m_pHostageServices[0x8];
        [FieldOffset(0x1580)] public fixed byte m_pBuyServices[0x8];
        [FieldOffset(0x1588)] public fixed byte m_pGlowServices[0x8];
        [FieldOffset(0x1590)] public fixed byte m_pActionTrackingServices[0x8];
        [FieldOffset(0x1598)] public fixed byte m_pAimPunchServices[0x8];
        [FieldOffset(0x15A0)] public fixed byte m_pDamageReactServices[0x8];
        [FieldOffset(0x15A8)] public fixed byte m_flHealthShotBoostExpirationTime[0x4];
        [FieldOffset(0x15AC)] public fixed byte m_flLastFiredWeaponTime[0x4];
        [FieldOffset(0x15B0)] public fixed byte m_bHasFemaleVoice[0x4];
        [FieldOffset(0x15B4)] public fixed byte m_flLandingTimeSeconds[0x4];
        [FieldOffset(0x15B8)] public fixed byte m_flOldFallVelocity[0x4];
        [FieldOffset(0x15BC)] public fixed byte m_szLastPlaceName[0x12];
        [FieldOffset(0x15CE)] public fixed byte m_bPrevDefuser[0x1];
        [FieldOffset(0x15CF)] public fixed byte m_bPrevHelmet[0x1];
        [FieldOffset(0x15D0)] public fixed byte m_nPrevArmorVal[0x4];
        [FieldOffset(0x15D4)] public fixed byte m_nPrevGrenadeAmmoCount[0x4];
        [FieldOffset(0x15D8)] public fixed byte m_unPreviousWeaponHash[0x4];
        [FieldOffset(0x15DC)] public fixed byte m_unWeaponHash[0x4];
        [FieldOffset(0x15E0)] public fixed byte m_bInBuyZone[0x1];
        [FieldOffset(0x15E1)] public fixed byte m_bPreviouslyInBuyZone[0x1];
        [FieldOffset(0x15E2)] public fixed byte m_bInLanding[0x2];
        [FieldOffset(0x15E4)] public fixed byte m_flLandingStartTime[0x4];
        [FieldOffset(0x15E8)] public fixed byte m_bInHostageRescueZone[0x1];
        [FieldOffset(0x15E9)] public fixed byte m_bInBombZone[0x1];
        [FieldOffset(0x15EA)] public fixed byte m_bIsBuyMenuOpen[0x2];
        [FieldOffset(0x15EC)] public fixed byte m_flTimeOfLastInjury[0x4];
        [FieldOffset(0x15F0)] public fixed byte m_flNextSprayDecalTime[0x168];
        [FieldOffset(0x1758)] public fixed byte m_iRetakesOffering[0x4];
        [FieldOffset(0x175C)] public fixed byte m_iRetakesOfferingCard[0x4];
        [FieldOffset(0x1760)] public fixed byte m_bRetakesHasDefuseKit[0x1];
        [FieldOffset(0x1761)] public fixed byte m_bRetakesMVPLastRound[0x3];
        [FieldOffset(0x1764)] public fixed byte m_iRetakesMVPBoostItem[0x4];
        [FieldOffset(0x1768)] public fixed byte m_RetakesMVPBoostExtraUtility[0x5];
        [FieldOffset(0x176D)] public fixed byte m_bNeedToReApplyGloves[0x3];
        [FieldOffset(0x1770)] public fixed byte m_EconGloves[0x5B0];
        [FieldOffset(0x1D20)] public fixed byte m_nEconGlovesChanged[0x1];
        [FieldOffset(0x1D21)] public fixed byte m_bMustSyncRagdollState[0x3];
        [FieldOffset(0x1D24)] public fixed byte m_nRagdollDamageBone[0x4];
        [FieldOffset(0x1D28)] public fixed byte m_vRagdollDamageForce[0xC];
        [FieldOffset(0x1D34)] public fixed byte m_szRagdollDamageWeaponName[0x40];
        [FieldOffset(0x1D74)] public fixed byte m_bRagdollDamageHeadshot[0x4];
        [FieldOffset(0x1D78)] public fixed byte m_vRagdollServerOrigin[0xC];
        [FieldOffset(0x1D84)] public fixed byte m_lastLandTime[0x4];
        [FieldOffset(0x1D88)] public fixed byte m_bOnGroundLastTick[0x20];
        [FieldOffset(0x1DA8)] public fixed byte m_hHudModelArms[0x4];
        [FieldOffset(0x1DAC)] public fixed byte m_qDeathEyeAngles[0xC];
        [FieldOffset(0x1DB8)] public fixed byte m_bLeftHanded[0x4];
        [FieldOffset(0x1DBC)] public fixed byte m_fSwitchedHandednessTime[0x4];
        [FieldOffset(0x1DC0)] public fixed byte m_flViewmodelOffsetX[0x4];
        [FieldOffset(0x1DC4)] public fixed byte m_flViewmodelOffsetY[0x4];
        [FieldOffset(0x1DC8)] public fixed byte m_flViewmodelOffsetZ[0x4];
        [FieldOffset(0x1DCC)] public fixed byte m_flViewmodelFOV[0x4];
        [FieldOffset(0x1DD0)] public fixed byte m_vecPlayerPatchEconIndices[0x48];
        [FieldOffset(0x1E18)] public fixed byte m_GunGameImmunityColor[0x50];
        [FieldOffset(0x1E68)] public fixed byte m_vecBulletHitModels[0x18];
        [FieldOffset(0x1E80)] public fixed byte m_bIsWalking[0x8];
        [FieldOffset(0x1E88)] public fixed byte m_entitySpottedState[0x18];
        [FieldOffset(0x1EA0)] public fixed byte m_bIsScoped[0x1];
        [FieldOffset(0x1EA1)] public fixed byte m_bResumeZoom[0x1];
        [FieldOffset(0x1EA2)] public fixed byte m_bIsDefusing[0x1];
        [FieldOffset(0x1EA3)] public fixed byte m_bIsGrabbingHostage[0x1];
        [FieldOffset(0x1EA4)] public fixed byte m_iBlockingUseActionInProgress[0x4];
        [FieldOffset(0x1EA8)] public fixed byte m_flEmitSoundTime[0x4];
        [FieldOffset(0x1EAC)] public fixed byte m_flEmitSoundTime_Client[0x4];
        [FieldOffset(0x1EB0)] public fixed byte m_bInNoDefuseArea[0x4];
        [FieldOffset(0x1EB4)] public fixed byte m_nWhichBombZone[0x4];
        [FieldOffset(0x1EB8)] public fixed byte m_iShotsFired[0x4];
        [FieldOffset(0x1EBC)] public fixed byte m_flFlinchStack[0x4];
        [FieldOffset(0x1EC0)] public fixed byte m_flVelocityModifier[0x4];
        [FieldOffset(0x1EC4)] public fixed byte m_bWaitForNoAttack[0x4];
        [FieldOffset(0x1EC8)] public fixed byte m_ignoreLadderJumpTime[0x5];
        [FieldOffset(0x1ECD)] public fixed byte m_bKilledByHeadshot[0x3];
        [FieldOffset(0x1ED0)] public fixed byte m_ArmorValue[0x4];
        [FieldOffset(0x1ED4)] public fixed byte m_unCurrentEquipmentValue[0x2];
        [FieldOffset(0x1ED6)] public fixed byte m_unRoundStartEquipmentValue[0x2];
        [FieldOffset(0x1ED8)] public fixed byte m_unFreezetimeEndEquipmentValue[0x4];
        [FieldOffset(0x1EDC)] public fixed byte m_nLastKillerIndex[0x4];
        [FieldOffset(0x1EE0)] public fixed byte m_bOldIsScoped[0x1];
        [FieldOffset(0x1EE1)] public fixed byte m_bHasDeathInfo[0x3];
        [FieldOffset(0x1EE4)] public fixed byte m_flDeathInfoTime[0x4];
        [FieldOffset(0x1EE8)] public fixed byte m_vecDeathInfoOrigin[0x38];
        [FieldOffset(0x1F20)] public fixed byte m_grenadeParameterStashTime[0x4];
        [FieldOffset(0x1F24)] public fixed byte m_bGrenadeParametersStashed[0x4];
        [FieldOffset(0x1F28)] public fixed byte m_angStashedShootAngles[0xC];
        [FieldOffset(0x1F34)] public fixed byte m_vecStashedGrenadeThrowPosition[0xC];
        [FieldOffset(0x1F40)] public fixed byte m_vecStashedGrenadeThrowPawnCenter[0xC];
        [FieldOffset(0x1F4C)] public fixed byte m_vecStashedVelocity[0xC];
        [FieldOffset(0x1F58)] public fixed byte m_flInterpolatedInaccuracy[0x15A8];
        [FieldOffset(0x3500)] public fixed byte m_bShouldAutobuyDMWeapons[0x4];
        [FieldOffset(0x3504)] public fixed byte m_fImmuneToGunGameDamageTime[0x4];
        [FieldOffset(0x3508)] public fixed byte m_bGunGameImmunity[0x4];
        [FieldOffset(0x350C)] public fixed byte m_fImmuneToGunGameDamageTimeLast[0x4];
        [FieldOffset(0x3510)] public fixed byte m_flBigHeadScale[0x4];
        [FieldOffset(0x3514)] public fixed byte m_fMolotovDamageTime[0x74];
        [FieldOffset(0x3588)] public fixed byte m_nPlayerInfernoBodyFx[0x78];
        [FieldOffset(0x3600)] public fixed byte m_angEyeAngles[0x90];
        [FieldOffset(0x3690)] public fixed byte m_arrOldEyeAnglesTimes[0x10];
        [FieldOffset(0x36A0)] public fixed byte m_arrOldEyeAngles[0x30];
        [FieldOffset(0x36D0)] public fixed byte m_angEyeAnglesVelocity[0xC];
        [FieldOffset(0x36DC)] public fixed byte m_iIDEntIndex[0x4];
        [FieldOffset(0x36E0)] public fixed byte m_delayTargetIDTimer[0x18];
        [FieldOffset(0x36F8)] public fixed byte m_iTargetItemEntIdx[0x4];
        [FieldOffset(0x36FC)] public fixed byte m_iOldIDEntIndex[0x4];
        [FieldOffset(0x3700)] public fixed byte m_holdTargetIDTimer[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1D18)]
    public unsafe struct C_CSGO_TeamIntroTerroristPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1D18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x128)]
    public unsafe struct CPulseCell_WaitForCursorsWithTagBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_nCursorsAllowedToWait[0x8];
        [FieldOffset(0xE0)] public fixed byte m_WaitComplete[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x13C0)]
    public unsafe struct C_Hostage {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12F0];
        [FieldOffset(0x12F0)] public fixed byte m_entitySpottedState[0x18];
        [FieldOffset(0x1308)] public fixed byte m_leader[0x8];
        [FieldOffset(0x1310)] public fixed byte m_reuseTimer[0x18];
        [FieldOffset(0x1328)] public fixed byte m_vel[0xC];
        [FieldOffset(0x1334)] public fixed byte m_isRescued[0x1];
        [FieldOffset(0x1335)] public fixed byte m_jumpedThisFrame[0x3];
        [FieldOffset(0x1338)] public fixed byte m_nHostageState[0x4];
        [FieldOffset(0x133C)] public fixed byte m_bHandsHaveBeenCut[0x4];
        [FieldOffset(0x1340)] public fixed byte m_hHostageGrabber[0x4];
        [FieldOffset(0x1344)] public fixed byte m_fLastGrabTime[0x4];
        [FieldOffset(0x1348)] public fixed byte m_vecGrabbedPos[0xC];
        [FieldOffset(0x1354)] public fixed byte m_flRescueStartTime[0x4];
        [FieldOffset(0x1358)] public fixed byte m_flGrabSuccessTime[0x4];
        [FieldOffset(0x135C)] public fixed byte m_flDropStartTime[0x4];
        [FieldOffset(0x1360)] public fixed byte m_flDeadOrRescuedTime[0x8];
        [FieldOffset(0x1368)] public fixed byte m_blinkTimer[0x18];
        [FieldOffset(0x1380)] public fixed byte m_lookAt[0x10];
        [FieldOffset(0x1390)] public fixed byte m_lookAroundTimer[0x18];
        [FieldOffset(0x13A8)] public fixed byte m_isInit[0x1];
        [FieldOffset(0x13A9)] public fixed byte m_eyeAttachment[0x1];
        [FieldOffset(0x13AA)] public fixed byte m_chestAttachment[0x6];
        [FieldOffset(0x13B0)] public fixed byte m_pPredictionOwner[0x8];
        [FieldOffset(0x13B8)] public fixed byte m_fNewestAlphaThinkTime[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct C_fogplayerparams_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_hCtrl[0x4];
        [FieldOffset(0xC)] public fixed byte m_flTransitionTime[0x4];
        [FieldOffset(0x10)] public fixed byte m_OldColor[0x4];
        [FieldOffset(0x14)] public fixed byte m_flOldStart[0x4];
        [FieldOffset(0x18)] public fixed byte m_flOldEnd[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flOldMaxDensity[0x4];
        [FieldOffset(0x20)] public fixed byte m_flOldHDRColorScale[0x4];
        [FieldOffset(0x24)] public fixed byte m_flOldFarZ[0x4];
        [FieldOffset(0x28)] public fixed byte m_NewColor[0x4];
        [FieldOffset(0x2C)] public fixed byte m_flNewStart[0x4];
        [FieldOffset(0x30)] public fixed byte m_flNewEnd[0x4];
        [FieldOffset(0x34)] public fixed byte m_flNewMaxDensity[0x4];
        [FieldOffset(0x38)] public fixed byte m_flNewHDRColorScale[0x4];
        [FieldOffset(0x3C)] public fixed byte m_flNewFarZ[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x130)]
    public unsafe struct CGameSceneNode {
        [FieldOffset(0x0)] public fixed byte m_bDirtyHierarchy[0x10];
        [FieldOffset(0x10)] public fixed byte m_nodeToWorld[0x20];
        [FieldOffset(0x30)] public fixed byte m_pOwner[0x8];
        [FieldOffset(0x38)] public fixed byte m_pParent[0x8];
        [FieldOffset(0x40)] public fixed byte m_pChild[0x8];
        [FieldOffset(0x48)] public fixed byte m_pNextSibling[0x28];
        [FieldOffset(0x70)] public fixed byte m_hParent[0x10];
        [FieldOffset(0x80)] public fixed byte m_vecOrigin[0x38];
        [FieldOffset(0xB8)] public fixed byte m_angRotation[0xC];
        [FieldOffset(0xC4)] public fixed byte m_flScale[0x4];
        [FieldOffset(0xC8)] public fixed byte m_vecAbsOrigin[0xC];
        [FieldOffset(0xD4)] public fixed byte m_angAbsRotation[0xC];
        [FieldOffset(0xE0)] public fixed byte m_flAbsScale[0x4];
        [FieldOffset(0xE4)] public fixed byte m_vecWrappedLocalOrigin[0xC];
        [FieldOffset(0xF0)] public fixed byte m_angWrappedLocalRotation[0xC];
        [FieldOffset(0xFC)] public fixed byte m_flWrappedScale[0x4];
        [FieldOffset(0x100)] public fixed byte m_nParentAttachmentOrBone[0x2];
        [FieldOffset(0x102)] public fixed byte m_bDebugAbsOriginChanges[0x1];
        [FieldOffset(0x103)] public fixed byte m_bDormant[0x1];
        [FieldOffset(0x104)] public fixed byte m_bForceParentToBeNetworked[0x3];
        [FieldOffset(0x107)] public fixed byte m_nHierarchicalDepth[0x1];
        [FieldOffset(0x108)] public fixed byte m_nHierarchyType[0x1];
        [FieldOffset(0x109)] public fixed byte m_nDoNotSetAnimTimeInInvalidatePhysicsCount[0x3];
        [FieldOffset(0x10C)] public fixed byte m_name[0x14];
        [FieldOffset(0x120)] public fixed byte m_hierarchyAttachName[0x4];
        [FieldOffset(0x124)] public fixed byte m_flClientLocalScale[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPlayer_ObserverServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_iObserverMode[0x4];
        [FieldOffset(0x4C)] public fixed byte m_hObserverTarget[0x4];
        [FieldOffset(0x50)] public fixed byte m_iObserverLastMode[0x4];
        [FieldOffset(0x54)] public fixed byte m_bForcedObserverMode[0x4];
        [FieldOffset(0x58)] public fixed byte m_flObserverChaseDistance[0x4];
        [FieldOffset(0x5C)] public fixed byte m_flObserverChaseDistanceCalcTime[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10A0)]
    public unsafe struct CCashStack {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
        [FieldOffset(0x1098)] public fixed byte m_nCashStackValue[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x628)]
    public unsafe struct C_SoundAreaEntityBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_bDisabled[0x8];
        [FieldOffset(0x608)] public fixed byte m_bWasEnabled[0x8];
        [FieldOffset(0x610)] public fixed byte m_iszSoundAreaType[0x8];
        [FieldOffset(0x618)] public fixed byte m_vPos[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x630)]
    public unsafe struct C_PlayerVisibility {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_flVisibilityStrength[0x4];
        [FieldOffset(0x604)] public fixed byte m_flFogDistanceMultiplier[0x4];
        [FieldOffset(0x608)] public fixed byte m_flFogMaxDensityMultiplier[0x4];
        [FieldOffset(0x60C)] public fixed byte m_flFadeTime[0x4];
        [FieldOffset(0x610)] public fixed byte m_bStartDisabled[0x1];
        [FieldOffset(0x611)] public fixed byte m_bIsEnabled[0x1F];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CAttributeManager__cached_attribute_float_t {
        [FieldOffset(0x0)] public fixed byte flIn[0x8];
        [FieldOffset(0x8)] public fixed byte iAttribHook[0x8];
        [FieldOffset(0x10)] public fixed byte flOut[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1950)]
    public unsafe struct C_BasePlayerWeapon {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1918];
        [FieldOffset(0x1918)] public fixed byte m_nNextPrimaryAttackTick[0x4];
        [FieldOffset(0x191C)] public fixed byte m_flNextPrimaryAttackTickRatio[0x4];
        [FieldOffset(0x1920)] public fixed byte m_nNextSecondaryAttackTick[0x4];
        [FieldOffset(0x1924)] public fixed byte m_flNextSecondaryAttackTickRatio[0x4];
        [FieldOffset(0x1928)] public fixed byte m_iClip1[0x4];
        [FieldOffset(0x192C)] public fixed byte m_iClip2[0x4];
        [FieldOffset(0x1930)] public fixed byte m_pReserveAmmo[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x608)]
    public unsafe struct CRagdollManager {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_iCurrentMaxRagdollCount[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x620)]
    public unsafe struct CSoundOpvarSetBoxEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x620];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1FE0)]
    public unsafe struct C_HEGrenade {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1FE0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10F8)]
    public unsafe struct C_EnvSky {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
        [FieldOffset(0x1098)] public fixed byte m_hSkyMaterial[0x8];
        [FieldOffset(0x10A0)] public fixed byte m_hSkyMaterialLightingOnly[0x8];
        [FieldOffset(0x10A8)] public fixed byte m_bStartDisabled[0x4];
        [FieldOffset(0x10AC)] public fixed byte m_vTintColor[0x4];
        [FieldOffset(0x10B0)] public fixed byte m_vTintColorLightingOnly[0x4];
        [FieldOffset(0x10B4)] public fixed byte m_flBrightnessScale[0x4];
        [FieldOffset(0x10B8)] public fixed byte m_nFogType[0x4];
        [FieldOffset(0x10BC)] public fixed byte m_flFogMinStart[0x4];
        [FieldOffset(0x10C0)] public fixed byte m_flFogMinEnd[0x4];
        [FieldOffset(0x10C4)] public fixed byte m_flFogMaxStart[0x4];
        [FieldOffset(0x10C8)] public fixed byte m_flFogMaxEnd[0x4];
        [FieldOffset(0x10CC)] public fixed byte m_bEnabled[0x2C];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CPulse_InvokeBinding {
        [FieldOffset(0x0)] public fixed byte m_RegisterMap[0x30];
        [FieldOffset(0x30)] public fixed byte m_FuncName[0x10];
        [FieldOffset(0x40)] public fixed byte m_nCellIndex[0x4];
        [FieldOffset(0x44)] public fixed byte m_nSrcChunk[0x4];
        [FieldOffset(0x48)] public fixed byte m_nSrcInstruction[0x68];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct C_GameRules {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte __m_pChainEntity[0x28];
        [FieldOffset(0x30)] public fixed byte m_nTotalPausedTicks[0x4];
        [FieldOffset(0x34)] public fixed byte m_nPauseStartTick[0x4];
        [FieldOffset(0x38)] public fixed byte m_bGamePaused[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_WeaponMAC10 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x688)]
    public unsafe struct C_CSGO_MapPreviewCameraPath {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_flZFar[0x4];
        [FieldOffset(0x604)] public fixed byte m_flZNear[0x4];
        [FieldOffset(0x608)] public fixed byte m_bLoop[0x1];
        [FieldOffset(0x609)] public fixed byte m_bVerticalFOV[0x1];
        [FieldOffset(0x60A)] public fixed byte m_bConstantSpeed[0x2];
        [FieldOffset(0x60C)] public fixed byte m_flDuration[0x44];
        [FieldOffset(0x650)] public fixed byte m_flPathLength[0x4];
        [FieldOffset(0x654)] public fixed byte m_flPathDuration[0x18];
        [FieldOffset(0x66C)] public fixed byte m_bDofEnabled[0x4];
        [FieldOffset(0x670)] public fixed byte m_flDofNearBlurry[0x4];
        [FieldOffset(0x674)] public fixed byte m_flDofNearCrisp[0x4];
        [FieldOffset(0x678)] public fixed byte m_flDofFarCrisp[0x4];
        [FieldOffset(0x67C)] public fixed byte m_flDofFarBlurry[0x4];
        [FieldOffset(0x680)] public fixed byte m_flDofTiltToGround[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1370)]
    public unsafe struct C_PointWorldText {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10A0];
        [FieldOffset(0x10A0)] public fixed byte m_bForceRecreateNextUpdate[0x18];
        [FieldOffset(0x10B8)] public fixed byte m_nTextWidthPx[0x4];
        [FieldOffset(0x10BC)] public fixed byte m_nTextHeightPx[0x4];
        [FieldOffset(0x10C0)] public fixed byte m_messageText[0x200];
        [FieldOffset(0x12C0)] public fixed byte m_FontName[0x40];
        [FieldOffset(0x1300)] public fixed byte m_BackgroundMaterialName[0x40];
        [FieldOffset(0x1340)] public fixed byte m_bEnabled[0x1];
        [FieldOffset(0x1341)] public fixed byte m_bFullbright[0x3];
        [FieldOffset(0x1344)] public fixed byte m_flWorldUnitsPerPx[0x4];
        [FieldOffset(0x1348)] public fixed byte m_flFontSize[0x4];
        [FieldOffset(0x134C)] public fixed byte m_flDepthOffset[0x4];
        [FieldOffset(0x1350)] public fixed byte m_bDrawBackground[0x4];
        [FieldOffset(0x1354)] public fixed byte m_flBackgroundBorderWidth[0x4];
        [FieldOffset(0x1358)] public fixed byte m_flBackgroundBorderHeight[0x4];
        [FieldOffset(0x135C)] public fixed byte m_flBackgroundWorldToUV[0x4];
        [FieldOffset(0x1360)] public fixed byte m_Color[0x4];
        [FieldOffset(0x1364)] public fixed byte m_nJustifyHorizontal[0x4];
        [FieldOffset(0x1368)] public fixed byte m_nJustifyVertical[0x4];
        [FieldOffset(0x136C)] public fixed byte m_nReorientMode[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1408)]
    public unsafe struct C_RopeKeyframe {
        [FieldOffset(0x0)] public fixed byte m_bEndPointAttachmentPositionsDirty[0x10A0];
        [FieldOffset(0x10A0)] public fixed byte m_LinksTouchingSomething[0x4];
        [FieldOffset(0x10A4)] public fixed byte m_nLinksTouchingSomething[0x4];
        [FieldOffset(0x10A8)] public fixed byte m_bApplyWind[0x4];
        [FieldOffset(0x10AC)] public fixed byte m_fPrevLockedPoints[0x4];
        [FieldOffset(0x10B0)] public fixed byte m_iForcePointMoveCounter[0x4];
        [FieldOffset(0x10B4)] public fixed byte m_bPrevEndPointPos[0x4];
        [FieldOffset(0x10B8)] public fixed byte m_vPrevEndPointPos[0x18];
        [FieldOffset(0x10D0)] public fixed byte m_flCurScroll[0x4];
        [FieldOffset(0x10D4)] public fixed byte m_flScrollSpeed[0x4];
        [FieldOffset(0x10D8)] public fixed byte m_RopeFlags[0x8];
        [FieldOffset(0x10E0)] public fixed byte m_iRopeMaterialModelIndex[0x278];
        [FieldOffset(0x1358)] public fixed byte m_nSegments[0x4];
        [FieldOffset(0x135C)] public fixed byte m_hStartPoint[0x4];
        [FieldOffset(0x1360)] public fixed byte m_hEndPoint[0x4];
        [FieldOffset(0x1364)] public fixed byte m_iStartAttachment[0x1];
        [FieldOffset(0x1365)] public fixed byte m_iEndAttachment[0x1];
        [FieldOffset(0x1366)] public fixed byte m_Subdiv[0x2];
        [FieldOffset(0x1368)] public fixed byte m_RopeLength[0x2];
        [FieldOffset(0x136A)] public fixed byte m_Slack[0x2];
        [FieldOffset(0x136C)] public fixed byte m_TextureScale[0x4];
        [FieldOffset(0x1370)] public fixed byte m_fLockedPoints[0x1];
        [FieldOffset(0x1371)] public fixed byte m_nChangeCount[0x3];
        [FieldOffset(0x1374)] public fixed byte m_Width[0x4];
        [FieldOffset(0x1378)] public fixed byte m_PhysicsDelegate[0x10];
        [FieldOffset(0x1388)] public fixed byte m_hMaterial[0x8];
        [FieldOffset(0x1390)] public fixed byte m_TextureHeight[0x4];
        [FieldOffset(0x1394)] public fixed byte m_vecImpulse[0xC];
        [FieldOffset(0x13A0)] public fixed byte m_vecPreviousImpulse[0xC];
        [FieldOffset(0x13AC)] public fixed byte m_flCurrentGustTimer[0x4];
        [FieldOffset(0x13B0)] public fixed byte m_flCurrentGustLifetime[0x4];
        [FieldOffset(0x13B4)] public fixed byte m_flTimeToNextGust[0x4];
        [FieldOffset(0x13B8)] public fixed byte m_vWindDir[0xC];
        [FieldOffset(0x13C4)] public fixed byte m_vColorMod[0xC];
        [FieldOffset(0x13D0)] public fixed byte m_vCachedEndPointAttachmentPos[0x18];
        [FieldOffset(0x13E8)] public fixed byte m_vCachedEndPointAttachmentAngle[0x18];
        [FieldOffset(0x1400)] public fixed byte m_bConstrainBetweenEndpoints[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1098)]
    public unsafe struct C_BaseToggle {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6E8)]
    public unsafe struct C_EnvCubemapBox {
        [FieldOffset(0x0)] public fixed byte pad_0[0x6E8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x7D8)]
    public unsafe struct C_EnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume {
        [FieldOffset(0x0)] public fixed byte pad_0[0x7D8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct C_RopeKeyframe__CPhysicsDelegate {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_pKeyframe[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x618)]
    public unsafe struct CInfoDynamicShadowHint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_bDisabled[0x4];
        [FieldOffset(0x604)] public fixed byte m_flRange[0x4];
        [FieldOffset(0x608)] public fixed byte m_nImportance[0x4];
        [FieldOffset(0x60C)] public fixed byte m_nLightChoice[0x4];
        [FieldOffset(0x610)] public fixed byte m_hLight[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x660)]
    public unsafe struct CPathNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_vInTangentLocal[0xC];
        [FieldOffset(0x60C)] public fixed byte m_vOutTangentLocal[0xC];
        [FieldOffset(0x618)] public fixed byte m_strParentPathUniqueID[0x8];
        [FieldOffset(0x620)] public fixed byte m_strPathNodeParameter[0x10];
        [FieldOffset(0x630)] public fixed byte m_xWSPrevParent[0x20];
        [FieldOffset(0x650)] public fixed byte m_hPath[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1098)]
    public unsafe struct C_FuncMoveLinear {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x650)]
    public unsafe struct C_EnvShakeVolume {
        [FieldOffset(0x0)] public fixed byte pad_0[0x618];
        [FieldOffset(0x618)] public fixed byte m_vBoxMins[0xC];
        [FieldOffset(0x624)] public fixed byte m_vBoxMaxs[0xC];
        [FieldOffset(0x630)] public fixed byte m_flAmplitude[0x4];
        [FieldOffset(0x634)] public fixed byte m_flFrequency[0x4];
        [FieldOffset(0x638)] public fixed byte m_flFalloffDistance[0x4];
        [FieldOffset(0x63C)] public fixed byte m_flRollScale[0x14];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1098)]
    public unsafe struct CServerOnlyModelEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x690)]
    public unsafe struct C_CSGO_TeamSelectCamera {
        [FieldOffset(0x0)] public fixed byte pad_0[0x690];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x168)]
    public unsafe struct CPulseCell_IntervalTimer {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_Completed[0x48];
        [FieldOffset(0x120)] public fixed byte m_OnInterval[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F20)]
    public unsafe struct C_WeaponXM1014 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1270)]
    public unsafe struct C_WorldModelGloves {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1270];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x13F0)]
    public unsafe struct C_PhysicsPropMultiplayer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x13F0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6E8)]
    public unsafe struct C_SoundEventOBBEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x6C0];
        [FieldOffset(0x6C0)] public fixed byte m_vMins[0xC];
        [FieldOffset(0x6CC)] public fixed byte m_vMaxs[0x1C];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x120)]
    public unsafe struct CPulseCell_BaseLerp {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_WakeResume[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_WeaponAug {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14F0)]
    public unsafe struct C_BasePropDoor {
        [FieldOffset(0x0)] public fixed byte pad_0[0x14C0];
        [FieldOffset(0x14C0)] public fixed byte m_eDoorState[0x4];
        [FieldOffset(0x14C4)] public fixed byte m_modelChanged[0x1];
        [FieldOffset(0x14C5)] public fixed byte m_bLocked[0x1];
        [FieldOffset(0x14C6)] public fixed byte m_bNoNPCs[0x2];
        [FieldOffset(0x14C8)] public fixed byte m_closedPosition[0xC];
        [FieldOffset(0x14D4)] public fixed byte m_closedAngles[0xC];
        [FieldOffset(0x14E0)] public fixed byte m_hMaster[0x4];
        [FieldOffset(0x14E4)] public fixed byte m_vWhereToSetLightingOrigin[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x600)]
    public unsafe struct CChoreoInfoTarget {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CNetworkedSequenceOperation {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_hSequence[0x4];
        [FieldOffset(0xC)] public fixed byte m_flPrevCycle[0x4];
        [FieldOffset(0x10)] public fixed byte m_flCycle[0x4];
        [FieldOffset(0x14)] public fixed byte m_flWeight[0x8];
        [FieldOffset(0x1C)] public fixed byte m_bSequenceChangeNetworked[0x1];
        [FieldOffset(0x1D)] public fixed byte m_bDiscontinuity[0x3];
        [FieldOffset(0x20)] public fixed byte m_flPrevCycleFromDiscontinuity[0x4];
        [FieldOffset(0x24)] public fixed byte m_flPrevCycleForAnimEventDetection[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F30)]
    public unsafe struct C_Item_Healthshot {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x840)]
    public unsafe struct CCSCustomHudLayout {
        [FieldOffset(0x0)] public fixed byte pad_0[0x618];
        [FieldOffset(0x618)] public fixed byte m_strLayout[0x8];
        [FieldOffset(0x620)] public fixed byte m_bObservable[0x8];
        [FieldOffset(0x628)] public fixed byte m_vecPlayerLayoutStates[0x68];
        [FieldOffset(0x690)] public fixed byte m_globalLayoutState[0x108];
        [FieldOffset(0x798)] public fixed byte m_vecPanelIds[0x18];
        [FieldOffset(0x7B0)] public fixed byte m_vecClassNames[0x18];
        [FieldOffset(0x7C8)] public fixed byte m_vecDialogVariableNames[0x78];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CEntityInstance {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_iszPrivateVScripts[0x8];
        [FieldOffset(0x10)] public fixed byte m_pEntity[0x18];
        [FieldOffset(0x28)] public fixed byte m_CScriptComponent[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1098)]
    public unsafe struct C_BaseModelEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0xAF8];
        [FieldOffset(0xAF8)] public fixed byte m_CRenderComponent[0x8];
        [FieldOffset(0xB00)] public fixed byte m_CHitboxComponent[0x18];
        [FieldOffset(0xB18)] public fixed byte m_pChoreoComponent[0x8];
        [FieldOffset(0xB20)] public fixed byte m_nDestructiblePartInitialStateDestructed0[0x4];
        [FieldOffset(0xB24)] public fixed byte m_nDestructiblePartInitialStateDestructed1[0x4];
        [FieldOffset(0xB28)] public fixed byte m_nDestructiblePartInitialStateDestructed2[0x4];
        [FieldOffset(0xB2C)] public fixed byte m_nDestructiblePartInitialStateDestructed3[0x4];
        [FieldOffset(0xB30)] public fixed byte m_nDestructiblePartInitialStateDestructed4[0x4];
        [FieldOffset(0xB34)] public fixed byte m_nDestructiblePartInitialStateDestructed0_PartIndex[0x4];
        [FieldOffset(0xB38)] public fixed byte m_nDestructiblePartInitialStateDestructed1_PartIndex[0x4];
        [FieldOffset(0xB3C)] public fixed byte m_nDestructiblePartInitialStateDestructed2_PartIndex[0x4];
        [FieldOffset(0xB40)] public fixed byte m_nDestructiblePartInitialStateDestructed3_PartIndex[0x4];
        [FieldOffset(0xB44)] public fixed byte m_nDestructiblePartInitialStateDestructed4_PartIndex[0x4];
        [FieldOffset(0xB48)] public fixed byte m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces[0x1];
        [FieldOffset(0xB49)] public fixed byte m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces[0x1];
        [FieldOffset(0xB4A)] public fixed byte m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces[0x1];
        [FieldOffset(0xB4B)] public fixed byte m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces[0x1];
        [FieldOffset(0xB4C)] public fixed byte m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces[0x4];
        [FieldOffset(0xB50)] public fixed byte m_pDestructiblePartsSystemComponent[0x128];
        [FieldOffset(0xC78)] public fixed byte m_bInitModelEffects[0x1];
        [FieldOffset(0xC79)] public fixed byte m_bDoingModelEffects[0x3];
        [FieldOffset(0xC7C)] public fixed byte m_iOldHealth[0x4];
        [FieldOffset(0xC80)] public fixed byte m_nRenderMode[0x1];
        [FieldOffset(0xC81)] public fixed byte m_nRenderFX[0x1];
        [FieldOffset(0xC82)] public fixed byte m_bAllowFadeInView[0x1E];
        [FieldOffset(0xCA0)] public fixed byte m_clrRender[0x8];
        [FieldOffset(0xCA8)] public fixed byte m_vecRenderAttributes[0x80];
        [FieldOffset(0xD28)] public fixed byte m_bRenderToCubemaps[0x1];
        [FieldOffset(0xD29)] public fixed byte m_bExpandRenderBoundsToIncludeCloth[0x1];
        [FieldOffset(0xD2A)] public fixed byte m_bNoInterpolate[0x6];
        [FieldOffset(0xD30)] public fixed byte m_Collision[0xB8];
        [FieldOffset(0xDE8)] public fixed byte m_Glow[0x58];
        [FieldOffset(0xE40)] public fixed byte m_flGlowBackfaceMult[0x4];
        [FieldOffset(0xE44)] public fixed byte m_fadeMinDist[0x4];
        [FieldOffset(0xE48)] public fixed byte m_fadeMaxDist[0x4];
        [FieldOffset(0xE4C)] public fixed byte m_flFadeScale[0x4];
        [FieldOffset(0xE50)] public fixed byte m_flShadowStrength[0x4];
        [FieldOffset(0xE54)] public fixed byte m_nObjectCulling[0x1];
        [FieldOffset(0xE55)] public fixed byte m_nRequiredDecalRtEncoding[0x3];
        [FieldOffset(0xE58)] public fixed byte m_bodyGroupTotalRequestCount[0x8];
        [FieldOffset(0xE60)] public fixed byte m_bodyGroupRequests[0xD8];
        [FieldOffset(0xF38)] public fixed byte m_bodyGroupChoices[0x28];
        [FieldOffset(0xF60)] public fixed byte m_vecViewOffset[0xE0];
        [FieldOffset(0x1040)] public fixed byte m_pClientAlphaProperty[0x8];
        [FieldOffset(0x1048)] public fixed byte m_ClientOverrideTint[0x4];
        [FieldOffset(0x104C)] public fixed byte m_bUseClientOverrideTint[0x3C];
        [FieldOffset(0x1088)] public fixed byte m_bvDisabledHitGroups[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA8)]
    public unsafe struct CCSPlayer_BulletServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_totalHitsOnServer[0x60];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x620)]
    public unsafe struct C_SoundOpvarSetAutoRoomEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x620];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x7D8)]
    public unsafe struct C_EnvCombinedLightProbeVolume {
        [FieldOffset(0x0)] public fixed byte pad_0[0x718];
        [FieldOffset(0x718)] public fixed byte m_Entity_Color[0x4];
        [FieldOffset(0x71C)] public fixed byte m_Entity_flBrightness[0x4];
        [FieldOffset(0x720)] public fixed byte m_Entity_hCubemapTexture[0x8];
        [FieldOffset(0x728)] public fixed byte m_Entity_bCustomCubemapTexture[0x8];
        [FieldOffset(0x730)] public fixed byte m_Entity_hLightProbeTexture_AmbientCube[0x8];
        [FieldOffset(0x738)] public fixed byte m_Entity_hLightProbeTexture_SDF[0x8];
        [FieldOffset(0x740)] public fixed byte m_Entity_hLightProbeTexture_SH2_DC[0x8];
        [FieldOffset(0x748)] public fixed byte m_Entity_hLightProbeTexture_SH2_L1[0x8];
        [FieldOffset(0x750)] public fixed byte m_Entity_hLightProbeDirectLightIndicesTexture[0x8];
        [FieldOffset(0x758)] public fixed byte m_Entity_hLightProbeDirectLightScalarsTexture[0x8];
        [FieldOffset(0x760)] public fixed byte m_Entity_hLightProbeDirectLightShadowsTexture[0x8];
        [FieldOffset(0x768)] public fixed byte m_Entity_vBoxMins[0xC];
        [FieldOffset(0x774)] public fixed byte m_Entity_vBoxMaxs[0xC];
        [FieldOffset(0x780)] public fixed byte m_Entity_bMoveable[0x4];
        [FieldOffset(0x784)] public fixed byte m_Entity_nHandshake[0x4];
        [FieldOffset(0x788)] public fixed byte m_Entity_nEnvCubeMapArrayIndex[0x4];
        [FieldOffset(0x78C)] public fixed byte m_Entity_nPriority[0x4];
        [FieldOffset(0x790)] public fixed byte m_Entity_bStartDisabled[0x4];
        [FieldOffset(0x794)] public fixed byte m_Entity_flEdgeFadeDist[0x4];
        [FieldOffset(0x798)] public fixed byte m_Entity_vEdgeFadeDists[0xC];
        [FieldOffset(0x7A4)] public fixed byte m_Entity_nLightProbeSizeX[0x4];
        [FieldOffset(0x7A8)] public fixed byte m_Entity_nLightProbeSizeY[0x4];
        [FieldOffset(0x7AC)] public fixed byte m_Entity_nLightProbeSizeZ[0x4];
        [FieldOffset(0x7B0)] public fixed byte m_Entity_nLightProbeAtlasX[0x4];
        [FieldOffset(0x7B4)] public fixed byte m_Entity_nLightProbeAtlasY[0x4];
        [FieldOffset(0x7B8)] public fixed byte m_Entity_nLightProbeAtlasZ[0x19];
        [FieldOffset(0x7D1)] public fixed byte m_Entity_bEnabled[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x600)]
    public unsafe struct CCSGO_EndOfMatchLineupEnd {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct C_MultiplayRules {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPlayer_AutoaimServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10A0)]
    public unsafe struct C_LightDirectionalEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x600)]
    public unsafe struct C_BaseEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_CBodyComponent[0x8];
        [FieldOffset(0x38)] public fixed byte m_NetworkTransmitComponent[0x2F0];
        [FieldOffset(0x328)] public fixed byte m_nLastThinkTick[0x8];
        [FieldOffset(0x330)] public fixed byte m_pGameSceneNode[0x8];
        [FieldOffset(0x338)] public fixed byte m_pRenderComponent[0x8];
        [FieldOffset(0x340)] public fixed byte m_pCollision[0x8];
        [FieldOffset(0x348)] public fixed byte m_iMaxHealth[0x4];
        [FieldOffset(0x34C)] public fixed byte m_iHealth[0x4];
        [FieldOffset(0x350)] public fixed byte m_flDamageAccumulator[0x4];
        [FieldOffset(0x354)] public fixed byte m_lifeState[0x1];
        [FieldOffset(0x355)] public fixed byte m_bTakesDamage[0x3];
        [FieldOffset(0x358)] public fixed byte m_nTakeDamageFlags[0x8];
        [FieldOffset(0x360)] public fixed byte m_nPlatformType[0x1];
        [FieldOffset(0x361)] public fixed byte m_ubInterpolationFrame[0x3];
        [FieldOffset(0x364)] public fixed byte m_hSceneObjectController[0x4];
        [FieldOffset(0x368)] public fixed byte m_nNoInterpolationTick[0x4];
        [FieldOffset(0x36C)] public fixed byte m_nVisibilityNoInterpolationTick[0x4];
        [FieldOffset(0x370)] public fixed byte m_flProxyRandomValue[0x4];
        [FieldOffset(0x374)] public fixed byte m_iEFlags[0x4];
        [FieldOffset(0x378)] public fixed byte m_nWaterType[0x1];
        [FieldOffset(0x379)] public fixed byte m_bInterpolateEvenWithNoModel[0x1];
        [FieldOffset(0x37A)] public fixed byte m_bPredictionEligible[0x1];
        [FieldOffset(0x37B)] public fixed byte m_bApplyLayerMatchIDToModel[0x1];
        [FieldOffset(0x37C)] public fixed byte m_tokLayerMatchID[0x4];
        [FieldOffset(0x380)] public fixed byte m_nSubclassID[0x10];
        [FieldOffset(0x390)] public fixed byte m_nSimulationTick[0x4];
        [FieldOffset(0x394)] public fixed byte m_iCurrentThinkContext[0x4];
        [FieldOffset(0x398)] public fixed byte m_aThinkFunctions[0x18];
        [FieldOffset(0x3B0)] public fixed byte m_bDisabledContextThinks[0x4];
        [FieldOffset(0x3B4)] public fixed byte m_flAnimTime[0x4];
        [FieldOffset(0x3B8)] public fixed byte m_flSimulationTime[0x4];
        [FieldOffset(0x3BC)] public fixed byte m_nSceneObjectOverrideFlags[0x1];
        [FieldOffset(0x3BD)] public fixed byte m_bHasSuccessfullyInterpolated[0x1];
        [FieldOffset(0x3BE)] public fixed byte m_bHasAddedVarsToInterpolation[0x1];
        [FieldOffset(0x3BF)] public fixed byte m_bRenderEvenWhenNotSuccessfullyInterpolated[0x1];
        [FieldOffset(0x3C0)] public fixed byte m_nInterpolationLatchDirtyFlags[0x8];
        [FieldOffset(0x3C8)] public fixed byte m_ListEntry[0x18];
        [FieldOffset(0x3E0)] public fixed byte m_flCreateTime[0x4];
        [FieldOffset(0x3E4)] public fixed byte m_EntClientFlags[0x2];
        [FieldOffset(0x3E6)] public fixed byte m_bClientSideRagdoll[0x1];
        [FieldOffset(0x3E7)] public fixed byte m_iTeamNum[0x1];
        [FieldOffset(0x3E8)] public fixed byte m_spawnflags[0x4];
        [FieldOffset(0x3EC)] public fixed byte m_nNextThinkTick[0x8];
        [FieldOffset(0x3F4)] public fixed byte m_fFlags[0x4];
        [FieldOffset(0x3F8)] public fixed byte m_vecAbsVelocity[0xC];
        [FieldOffset(0x404)] public fixed byte m_vecServerVelocity[0x2C];
        [FieldOffset(0x430)] public fixed byte m_vecVelocity[0xE0];
        [FieldOffset(0x510)] public fixed byte m_vecBaseVelocity[0xC];
        [FieldOffset(0x51C)] public fixed byte m_hEffectEntity[0x4];
        [FieldOffset(0x520)] public fixed byte m_hOwnerEntity[0x4];
        [FieldOffset(0x524)] public fixed byte m_MoveCollide[0x1];
        [FieldOffset(0x525)] public fixed byte m_MoveType[0x1];
        [FieldOffset(0x526)] public fixed byte m_nActualMoveType[0x2];
        [FieldOffset(0x528)] public fixed byte m_flWaterLevel[0x4];
        [FieldOffset(0x52C)] public fixed byte m_fEffects[0x4];
        [FieldOffset(0x530)] public fixed byte m_hGroundEntity[0x4];
        [FieldOffset(0x534)] public fixed byte m_nGroundBodyIndex[0x4];
        [FieldOffset(0x538)] public fixed byte m_flFriction[0x4];
        [FieldOffset(0x53C)] public fixed byte m_flElasticity[0x4];
        [FieldOffset(0x540)] public fixed byte m_flGravityScale[0x4];
        [FieldOffset(0x544)] public fixed byte m_flTimeScale[0x4];
        [FieldOffset(0x548)] public fixed byte m_bAnimatedEveryTick[0x1];
        [FieldOffset(0x549)] public fixed byte m_bGravityDisabled[0x3];
        [FieldOffset(0x54C)] public fixed byte m_flNavIgnoreUntilTime[0x4];
        [FieldOffset(0x550)] public fixed byte m_hThink[0x10];
        [FieldOffset(0x560)] public fixed byte m_fBBoxVisFlags[0x4];
        [FieldOffset(0x564)] public fixed byte m_flActualGravityScale[0x4];
        [FieldOffset(0x568)] public fixed byte m_bGravityActuallyDisabled[0x1];
        [FieldOffset(0x569)] public fixed byte m_bPredictable[0x1];
        [FieldOffset(0x56A)] public fixed byte m_bRenderWithViewModels[0x2];
        [FieldOffset(0x56C)] public fixed byte m_nFirstPredictableCommand[0x4];
        [FieldOffset(0x570)] public fixed byte m_nLastPredictableCommand[0x4];
        [FieldOffset(0x574)] public fixed byte m_hOldMoveParent[0x4];
        [FieldOffset(0x578)] public fixed byte m_Particles[0x30];
        [FieldOffset(0x5A8)] public fixed byte m_vecAngVelocity[0xC];
        [FieldOffset(0x5B4)] public fixed byte m_DataChangeEventRef[0x4];
        [FieldOffset(0x5B8)] public fixed byte m_dependencies[0x18];
        [FieldOffset(0x5D0)] public fixed byte m_nCreationTick[0x11];
        [FieldOffset(0x5E1)] public fixed byte m_bAnimTimeChanged[0x1];
        [FieldOffset(0x5E2)] public fixed byte m_bSimulationTimeChanged[0xE];
        [FieldOffset(0x5F0)] public fixed byte m_sUniqueHammerID[0x8];
        [FieldOffset(0x5F8)] public fixed byte m_nBloodType[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct ActiveModelConfig_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_Handle[0x8];
        [FieldOffset(0x38)] public fixed byte m_Name[0x8];
        [FieldOffset(0x40)] public fixed byte m_AssociatedEntities[0x18];
        [FieldOffset(0x58)] public fixed byte m_AssociatedEntityNames[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_WeaponSSG08 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CPulseCell_Value_Curve {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Curve[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1BA0)]
    public unsafe struct C_Chicken {
        [FieldOffset(0x0)] public fixed byte pad_0[0x14C0];
        [FieldOffset(0x14C0)] public fixed byte m_leader[0x4];
        [FieldOffset(0x14C4)] public fixed byte m_owner[0x4];
        [FieldOffset(0x14C8)] public fixed byte m_AttributeManager[0x610];
        [FieldOffset(0x1AD8)] public fixed byte m_bAttributesInitialized[0x4];
        [FieldOffset(0x1ADC)] public fixed byte m_hWaterWakeParticles[0x4];
        [FieldOffset(0x1AE0)] public fixed byte m_bIsPreviewModel[0x88];
        [FieldOffset(0x1B68)] public fixed byte m_bSpawnDyingParticles[0x38];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14C8)]
    public unsafe struct C_BasePlayerPawn {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12F0];
        [FieldOffset(0x12F0)] public fixed byte m_pWeaponServices[0x8];
        [FieldOffset(0x12F8)] public fixed byte m_pItemServices[0x8];
        [FieldOffset(0x1300)] public fixed byte m_pAutoaimServices[0x8];
        [FieldOffset(0x1308)] public fixed byte m_pObserverServices[0x8];
        [FieldOffset(0x1310)] public fixed byte m_pWaterServices[0x8];
        [FieldOffset(0x1318)] public fixed byte m_pUseServices[0x8];
        [FieldOffset(0x1320)] public fixed byte m_pFlashlightServices[0x8];
        [FieldOffset(0x1328)] public fixed byte m_pCameraServices[0x8];
        [FieldOffset(0x1330)] public fixed byte m_pMovementServices[0x10];
        [FieldOffset(0x1340)] public fixed byte m_ServerViewAngleChanges[0x68];
        [FieldOffset(0x13A8)] public fixed byte v_angle[0xC];
        [FieldOffset(0x13B4)] public fixed byte v_anglePrevious[0xC];
        [FieldOffset(0x13C0)] public fixed byte m_iHideHUD[0x8];
        [FieldOffset(0x13C8)] public fixed byte m_skybox3d[0x90];
        [FieldOffset(0x1458)] public fixed byte m_flDeathTime[0x8];
        [FieldOffset(0x1460)] public fixed byte m_vecPredictionError[0xC];
        [FieldOffset(0x146C)] public fixed byte m_flPredictionErrorTime[0x20];
        [FieldOffset(0x148C)] public fixed byte m_vecLastCameraSetupLocalOrigin[0xC];
        [FieldOffset(0x1498)] public fixed byte m_flLastCameraSetupTime[0x4];
        [FieldOffset(0x149C)] public fixed byte m_flFOVSensitivityAdjust[0x4];
        [FieldOffset(0x14A0)] public fixed byte m_flMouseSensitivity[0x4];
        [FieldOffset(0x14A4)] public fixed byte m_vOldOrigin[0xC];
        [FieldOffset(0x14B0)] public fixed byte m_flOldSimulationTime[0x4];
        [FieldOffset(0x14B4)] public fixed byte m_nLastExecutedCommandNumber[0x4];
        [FieldOffset(0x14B8)] public fixed byte m_nLastExecutedCommandTick[0x4];
        [FieldOffset(0x14BC)] public fixed byte m_hController[0x4];
        [FieldOffset(0x14C0)] public fixed byte m_hDefaultController[0x4];
        [FieldOffset(0x14C4)] public fixed byte m_bIsSwappingToPredictableController[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x620)]
    public unsafe struct C_SoundOpvarSetAABBEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x620];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_WeaponBizon {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1278)]
    public unsafe struct C_StattrakModule {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1270];
        [FieldOffset(0x1270)] public fixed byte m_bKnife[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2B8)]
    public unsafe struct CCSObserver_CameraServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x2B0];
        [FieldOffset(0x2B0)] public fixed byte m_hPrevPostProcessingVolume[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x698)]
    public unsafe struct CEnvSoundscapeProxy {
        [FieldOffset(0x0)] public fixed byte pad_0[0x690];
        [FieldOffset(0x690)] public fixed byte m_MainSoundscapeName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6C0)]
    public unsafe struct C_SoundEventEntity {
        [FieldOffset(0x0)] public fixed byte m_bClientSideOnly[0x600];
        [FieldOffset(0x600)] public fixed byte m_bStartOnSpawn[0x1];
        [FieldOffset(0x601)] public fixed byte m_bToLocalPlayer[0x1];
        [FieldOffset(0x602)] public fixed byte m_bStopOnNew[0x1];
        [FieldOffset(0x603)] public fixed byte m_bSaveRestore[0x1];
        [FieldOffset(0x604)] public fixed byte m_bSavedIsPlaying[0x4];
        [FieldOffset(0x608)] public fixed byte m_flSavedElapsedTime[0x8];
        [FieldOffset(0x610)] public fixed byte m_iszSourceEntityName[0x8];
        [FieldOffset(0x618)] public fixed byte m_iszAttachmentName[0x8];
        [FieldOffset(0x620)] public fixed byte m_onGUIDChanged[0x30];
        [FieldOffset(0x650)] public fixed byte m_onSoundFinished[0x18];
        [FieldOffset(0x668)] public fixed byte m_flClientCullRadius[0x30];
        [FieldOffset(0x698)] public fixed byte m_iszSoundName[0x1C];
        [FieldOffset(0x6B4)] public fixed byte m_hSource[0x4];
        [FieldOffset(0x6B8)] public fixed byte m_nEntityIndexSelection[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CPulseCell_Inflow_EventHandler {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte m_EventName[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10A0)]
    public unsafe struct C_LightOrthoEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_BaseFlow {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1188)]
    public unsafe struct CBombTarget {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1180];
        [FieldOffset(0x1180)] public fixed byte m_bBombPlantedHere[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F30)]
    public unsafe struct C_Knife {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F20];
        [FieldOffset(0x1F20)] public fixed byte m_bFirstAttack[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x690)]
    public unsafe struct C_CSGO_TerroristWingmanIntroCamera {
        [FieldOffset(0x0)] public fixed byte pad_0[0x690];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x490)]
    public unsafe struct CSkeletonInstance {
        [FieldOffset(0x0)] public fixed byte pad_0[0x140];
        [FieldOffset(0x140)] public fixed byte m_modelState[0x2B0];
        [FieldOffset(0x3F0)] public fixed byte m_bUseParentRenderBounds[0x1];
        [FieldOffset(0x3F1)] public fixed byte m_bDisableSolidCollisionsForHierarchy[0x1];
        [FieldOffset(0x3F2)] public fixed byte m_bDirtyMotionType[0x1];
        [FieldOffset(0x3F3)] public fixed byte m_bIsGeneratingLatchedParentSpaceState[0x5];
        [FieldOffset(0x3F8)] public fixed byte m_materialGroup[0x4];
        [FieldOffset(0x3FC)] public fixed byte m_nHitboxSet[0x94];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CEntityComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1A20)]
    public unsafe struct C_ItemDogtags {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1A18];
        [FieldOffset(0x1A18)] public fixed byte m_OwningPlayer[0x4];
        [FieldOffset(0x1A1C)] public fixed byte m_KillingPlayer[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1320)]
    public unsafe struct C_LateUpdatedAnimating {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1320];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x690)]
    public unsafe struct C_CSGO_TeamPreviewCameraBone {
        [FieldOffset(0x0)] public fixed byte pad_0[0x690];
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
    [StructLayout(LayoutKind.Explicit, Size = 0x10C8)]
    public unsafe struct C_BaseClientUIEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10A0];
        [FieldOffset(0x10A0)] public fixed byte m_bEnabled[0x8];
        [FieldOffset(0x10A8)] public fixed byte m_DialogXMLName[0x8];
        [FieldOffset(0x10B0)] public fixed byte m_PanelClassName[0x8];
        [FieldOffset(0x10B8)] public fixed byte m_PanelID[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_WeaponUSPSilencer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1370)]
    public unsafe struct C_MolotovProjectile {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1348];
        [FieldOffset(0x1348)] public fixed byte m_bIsIncGrenade[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1180)]
    public unsafe struct C_TriggerLerpObject {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1180];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_WeaponRevolver {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_WeaponElite {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14B0)]
    public unsafe struct C_DynamicPropAlias_cable_dynamic {
        [FieldOffset(0x0)] public fixed byte pad_0[0x14B0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct CBaseProp {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1268];
        [FieldOffset(0x1268)] public fixed byte m_bModelOverrodeBlockLOS[0x4];
        [FieldOffset(0x126C)] public fixed byte m_iShapeType[0x4];
        [FieldOffset(0x1270)] public fixed byte m_bConformToCollisionBounds[0x10];
        [FieldOffset(0x1280)] public fixed byte m_mPreferredCatchTransform[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x808)]
    public unsafe struct CInfoOffscreenPanoramaTexture {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_bDisabled[0x1];
        [FieldOffset(0x601)] public fixed byte m_bEnableMipGen[0x3];
        [FieldOffset(0x604)] public fixed byte m_nResolutionX[0x4];
        [FieldOffset(0x608)] public fixed byte m_nResolutionY[0x8];
        [FieldOffset(0x610)] public fixed byte m_szPanelType[0x8];
        [FieldOffset(0x618)] public fixed byte m_szLayoutFileName[0x8];
        [FieldOffset(0x620)] public fixed byte m_RenderAttrName[0x8];
        [FieldOffset(0x628)] public fixed byte m_TargetEntities[0x18];
        [FieldOffset(0x640)] public fixed byte m_nTargetChangeCount[0x8];
        [FieldOffset(0x648)] public fixed byte m_vecCSSClasses[0x18];
        [FieldOffset(0x660)] public fixed byte m_szTargetsName[0x8];
        [FieldOffset(0x668)] public fixed byte m_AdditionalTargetEntities[0x178];
        [FieldOffset(0x7E0)] public fixed byte m_bCheckCSSClasses[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8A0)]
    public unsafe struct CCSWeaponBaseVData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x520];
        [FieldOffset(0x520)] public fixed byte m_WeaponType[0x4];
        [FieldOffset(0x524)] public fixed byte m_WeaponCategory[0x4];
        [FieldOffset(0x528)] public fixed byte m_szAnimSkeleton[0xE0];
        [FieldOffset(0x608)] public fixed byte m_vecMuzzlePos0[0xC];
        [FieldOffset(0x614)] public fixed byte m_vecMuzzlePos1[0xC];
        [FieldOffset(0x620)] public fixed byte m_szTracerParticle[0xE0];
        [FieldOffset(0x700)] public fixed byte m_GearSlot[0x4];
        [FieldOffset(0x704)] public fixed byte m_GearSlotPosition[0x4];
        [FieldOffset(0x708)] public fixed byte m_DefaultLoadoutSlot[0x4];
        [FieldOffset(0x70C)] public fixed byte m_nPrice[0x4];
        [FieldOffset(0x710)] public fixed byte m_nKillAward[0x4];
        [FieldOffset(0x714)] public fixed byte m_nPrimaryReserveAmmoMax[0x4];
        [FieldOffset(0x718)] public fixed byte m_nSecondaryReserveAmmoMax[0x4];
        [FieldOffset(0x71C)] public fixed byte m_bMeleeWeapon[0x1];
        [FieldOffset(0x71D)] public fixed byte m_bHasBurstMode[0x1];
        [FieldOffset(0x71E)] public fixed byte m_bIsRevolver[0x1];
        [FieldOffset(0x71F)] public fixed byte m_bCannotShootUnderwater[0x1];
        [FieldOffset(0x720)] public fixed byte m_szName[0x8];
        [FieldOffset(0x728)] public fixed byte m_eSilencerType[0x4];
        [FieldOffset(0x72C)] public fixed byte m_bShowCrosshair[0x1];
        [FieldOffset(0x72D)] public fixed byte m_bIsFullAuto[0x3];
        [FieldOffset(0x730)] public fixed byte m_nNumBullets[0x4];
        [FieldOffset(0x734)] public fixed byte m_bReloadsSingleShells[0x4];
        [FieldOffset(0x738)] public fixed byte m_flCycleTime[0x8];
        [FieldOffset(0x740)] public fixed byte m_flCycleTimeWhenInBurstMode[0x4];
        [FieldOffset(0x744)] public fixed byte m_flTimeBetweenBurstShots[0x4];
        [FieldOffset(0x748)] public fixed byte m_flMaxSpeed[0x8];
        [FieldOffset(0x750)] public fixed byte m_flSpread[0x8];
        [FieldOffset(0x758)] public fixed byte m_flInaccuracyCrouch[0x8];
        [FieldOffset(0x760)] public fixed byte m_flInaccuracyStand[0x8];
        [FieldOffset(0x768)] public fixed byte m_flInaccuracyJump[0x8];
        [FieldOffset(0x770)] public fixed byte m_flInaccuracyLand[0x8];
        [FieldOffset(0x778)] public fixed byte m_flInaccuracyLadder[0x8];
        [FieldOffset(0x780)] public fixed byte m_flInaccuracyFire[0x8];
        [FieldOffset(0x788)] public fixed byte m_flInaccuracyMove[0x8];
        [FieldOffset(0x790)] public fixed byte m_flRecoilAngle[0x8];
        [FieldOffset(0x798)] public fixed byte m_flRecoilAngleVariance[0x8];
        [FieldOffset(0x7A0)] public fixed byte m_flRecoilMagnitude[0x8];
        [FieldOffset(0x7A8)] public fixed byte m_flRecoilMagnitudeVariance[0x8];
        [FieldOffset(0x7B0)] public fixed byte m_nTracerFrequency[0x8];
        [FieldOffset(0x7B8)] public fixed byte m_flInaccuracyJumpInitial[0x4];
        [FieldOffset(0x7BC)] public fixed byte m_flInaccuracyJumpApex[0x4];
        [FieldOffset(0x7C0)] public fixed byte m_flInaccuracyReload[0x4];
        [FieldOffset(0x7C4)] public fixed byte m_flDeployDuration[0x4];
        [FieldOffset(0x7C8)] public fixed byte m_flDisallowAttackAfterReloadStartDuration[0x4];
        [FieldOffset(0x7CC)] public fixed byte m_nBurstShotCount[0x4];
        [FieldOffset(0x7D0)] public fixed byte m_bAllowBurstHolster[0x4];
        [FieldOffset(0x7D4)] public fixed byte m_nRecoilSeed[0x4];
        [FieldOffset(0x7D8)] public fixed byte m_nSpreadSeed[0x4];
        [FieldOffset(0x7DC)] public fixed byte m_flAttackMovespeedFactor[0x4];
        [FieldOffset(0x7E0)] public fixed byte m_flInaccuracyPitchShift[0x4];
        [FieldOffset(0x7E4)] public fixed byte m_flInaccuracyAltSoundThreshold[0x4];
        [FieldOffset(0x7E8)] public fixed byte m_szUseRadioSubtitle[0x8];
        [FieldOffset(0x7F0)] public fixed byte m_bUnzoomsAfterShot[0x1];
        [FieldOffset(0x7F1)] public fixed byte m_bHideViewModelWhenZoomed[0x3];
        [FieldOffset(0x7F4)] public fixed byte m_nZoomLevels[0x4];
        [FieldOffset(0x7F8)] public fixed byte m_nZoomFOV1[0x4];
        [FieldOffset(0x7FC)] public fixed byte m_nZoomFOV2[0x4];
        [FieldOffset(0x800)] public fixed byte m_flZoomTime0[0x4];
        [FieldOffset(0x804)] public fixed byte m_flZoomTime1[0x4];
        [FieldOffset(0x808)] public fixed byte m_flZoomTime2[0x4];
        [FieldOffset(0x80C)] public fixed byte m_flIronSightPullUpSpeed[0x4];
        [FieldOffset(0x810)] public fixed byte m_flIronSightPutDownSpeed[0x4];
        [FieldOffset(0x814)] public fixed byte m_flIronSightFOV[0x4];
        [FieldOffset(0x818)] public fixed byte m_flIronSightPivotForward[0x4];
        [FieldOffset(0x81C)] public fixed byte m_flIronSightLooseness[0x4];
        [FieldOffset(0x820)] public fixed byte m_nDamage[0x4];
        [FieldOffset(0x824)] public fixed byte m_flHeadshotMultiplier[0x4];
        [FieldOffset(0x828)] public fixed byte m_flArmorRatio[0x4];
        [FieldOffset(0x82C)] public fixed byte m_flPenetration[0x4];
        [FieldOffset(0x830)] public fixed byte m_flRange[0x4];
        [FieldOffset(0x834)] public fixed byte m_flRangeModifier[0x4];
        [FieldOffset(0x838)] public fixed byte m_flFlinchVelocityModifierLarge[0x4];
        [FieldOffset(0x83C)] public fixed byte m_flFlinchVelocityModifierSmall[0x4];
        [FieldOffset(0x840)] public fixed byte m_flRecoveryTimeCrouch[0x4];
        [FieldOffset(0x844)] public fixed byte m_flRecoveryTimeStand[0x4];
        [FieldOffset(0x848)] public fixed byte m_flRecoveryTimeCrouchFinal[0x4];
        [FieldOffset(0x84C)] public fixed byte m_flRecoveryTimeStandFinal[0x4];
        [FieldOffset(0x850)] public fixed byte m_nRecoveryTransitionStartBullet[0x4];
        [FieldOffset(0x854)] public fixed byte m_nRecoveryTransitionEndBullet[0x4];
        [FieldOffset(0x858)] public fixed byte m_flThrowVelocity[0x4];
        [FieldOffset(0x85C)] public fixed byte m_vSmokeColor[0xC];
        [FieldOffset(0x868)] public fixed byte m_szAnimClass[0x38];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CAttributeManager {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_Providers[0x18];
        [FieldOffset(0x20)] public fixed byte m_iReapplyProvisionParity[0x4];
        [FieldOffset(0x24)] public fixed byte m_hOuter[0x4];
        [FieldOffset(0x28)] public fixed byte m_bPreventLoopback[0x4];
        [FieldOffset(0x2C)] public fixed byte m_ProviderType[0x4];
        [FieldOffset(0x30)] public fixed byte m_CachedResults[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct SignatureOutflow_Continue {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x600)]
    public unsafe struct CInfoTarget {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x298)]
    public unsafe struct CPlayer_CameraServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_vecCsViewPunchAngle[0xC];
        [FieldOffset(0x54)] public fixed byte m_nCsViewPunchAngleTick[0x4];
        [FieldOffset(0x58)] public fixed byte m_flCsViewPunchAngleTickRatio[0x8];
        [FieldOffset(0x60)] public fixed byte m_PlayerFog[0x40];
        [FieldOffset(0xA0)] public fixed byte m_hColorCorrectionCtrl[0x4];
        [FieldOffset(0xA4)] public fixed byte m_hViewEntity[0x4];
        [FieldOffset(0xA8)] public fixed byte m_hTonemapController[0x8];
        [FieldOffset(0xB0)] public fixed byte m_audio[0x78];
        [FieldOffset(0x128)] public fixed byte m_PostProcessingVolumes[0x18];
        [FieldOffset(0x140)] public fixed byte m_flOldPlayerZ[0x4];
        [FieldOffset(0x144)] public fixed byte m_flOldPlayerViewOffsetZ[0x4];
        [FieldOffset(0x148)] public fixed byte m_CurrentFog[0x68];
        [FieldOffset(0x1B0)] public fixed byte m_hOldFogController[0x4];
        [FieldOffset(0x1B4)] public fixed byte m_bOverrideFogColor[0x8];
        [FieldOffset(0x1BC)] public fixed byte m_OverrideFogColor[0x14];
        [FieldOffset(0x1D0)] public fixed byte m_bOverrideFogStartEnd[0x8];
        [FieldOffset(0x1D8)] public fixed byte m_fOverrideFogStart[0x14];
        [FieldOffset(0x1EC)] public fixed byte m_fOverrideFogEnd[0x14];
        [FieldOffset(0x200)] public fixed byte m_hActivePostProcessingVolume[0x8];
        [FieldOffset(0x208)] public fixed byte m_angDemoViewAngles[0x90];
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
    [StructLayout(LayoutKind.Explicit, Size = 0x1FE0)]
    public unsafe struct C_BaseCSGrenade {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F20];
        [FieldOffset(0x1F20)] public fixed byte m_bClientPredictDelete[0x1];
        [FieldOffset(0x1F21)] public fixed byte m_bRedraw[0x1];
        [FieldOffset(0x1F22)] public fixed byte m_bIsHeldByPlayer[0x1];
        [FieldOffset(0x1F23)] public fixed byte m_bPinPulled[0x1];
        [FieldOffset(0x1F24)] public fixed byte m_bJumpThrow[0x1];
        [FieldOffset(0x1F25)] public fixed byte m_bThrowAnimating[0x3];
        [FieldOffset(0x1F28)] public fixed byte m_fThrowTime[0x8];
        [FieldOffset(0x1F30)] public fixed byte m_flThrowStrength[0x78];
        [FieldOffset(0x1FA8)] public fixed byte m_fDropTime[0x4];
        [FieldOffset(0x1FAC)] public fixed byte m_fPinPullTime[0x4];
        [FieldOffset(0x1FB0)] public fixed byte m_bJustPulledPin[0x4];
        [FieldOffset(0x1FB4)] public fixed byte m_nNextHoldTick[0x4];
        [FieldOffset(0x1FB8)] public fixed byte m_flNextHoldFrac[0x4];
        [FieldOffset(0x1FBC)] public fixed byte m_hSwitchToWeaponAfterThrow[0x24];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x640)]
    public unsafe struct CFilterAttributeInt {
        [FieldOffset(0x0)] public fixed byte pad_0[0x638];
        [FieldOffset(0x638)] public fixed byte m_sAttributeName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x698)]
    public unsafe struct CPointTemplate {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_iszWorldName[0x8];
        [FieldOffset(0x608)] public fixed byte m_iszSource2EntityLumpName[0x8];
        [FieldOffset(0x610)] public fixed byte m_iszEntityFilterName[0x8];
        [FieldOffset(0x618)] public fixed byte m_flTimeoutInterval[0x4];
        [FieldOffset(0x61C)] public fixed byte m_bAsynchronouslySpawnEntities[0x4];
        [FieldOffset(0x620)] public fixed byte m_clientOnlyEntityBehavior[0x4];
        [FieldOffset(0x624)] public fixed byte m_ownerSpawnGroupType[0x4];
        [FieldOffset(0x628)] public fixed byte m_createdSpawnGroupHandles[0x18];
        [FieldOffset(0x640)] public fixed byte m_SpawnedEntityHandles[0x18];
        [FieldOffset(0x658)] public fixed byte m_ScriptSpawnCallback[0x8];
        [FieldOffset(0x660)] public fixed byte m_ScriptCallbackScope[0x8];
        [FieldOffset(0x668)] public fixed byte m_OnEntitySpawned[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPlayer_FlashlightServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x980)]
    public unsafe struct CCSPlayerController {
        [FieldOffset(0x0)] public fixed byte pad_0[0x818];
        [FieldOffset(0x818)] public fixed byte m_pInGameMoneyServices[0x8];
        [FieldOffset(0x820)] public fixed byte m_pInventoryServices[0x8];
        [FieldOffset(0x828)] public fixed byte m_pActionTrackingServices[0x8];
        [FieldOffset(0x830)] public fixed byte m_pDamageServices[0x8];
        [FieldOffset(0x838)] public fixed byte m_iPing[0x4];
        [FieldOffset(0x83C)] public fixed byte m_bHasCommunicationAbuseMute[0x4];
        [FieldOffset(0x840)] public fixed byte m_uiCommunicationMuteFlags[0x8];
        [FieldOffset(0x848)] public fixed byte m_szCrosshairCodes[0x8];
        [FieldOffset(0x850)] public fixed byte m_iPendingTeamNum[0x4];
        [FieldOffset(0x854)] public fixed byte m_flForceTeamTime[0x4];
        [FieldOffset(0x858)] public fixed byte m_iCompTeammateColor[0x4];
        [FieldOffset(0x85C)] public fixed byte m_bEverPlayedOnTeam[0x4];
        [FieldOffset(0x860)] public fixed byte m_flPreviousForceJoinTeamTime[0x8];
        [FieldOffset(0x868)] public fixed byte m_szClan[0x8];
        [FieldOffset(0x870)] public fixed byte m_unClanId32bit[0x8];
        [FieldOffset(0x878)] public fixed byte m_sSanitizedPlayerName[0x8];
        [FieldOffset(0x880)] public fixed byte m_sSanitizedClanTag[0x8];
        [FieldOffset(0x888)] public fixed byte m_iCoachingTeam[0x8];
        [FieldOffset(0x890)] public fixed byte m_nPlayerDominated[0x8];
        [FieldOffset(0x898)] public fixed byte m_nPlayerDominatingMe[0x8];
        [FieldOffset(0x8A0)] public fixed byte m_iCompetitiveRanking[0x4];
        [FieldOffset(0x8A4)] public fixed byte m_iCompetitiveWins[0x4];
        [FieldOffset(0x8A8)] public fixed byte m_iCompetitiveRankType[0x4];
        [FieldOffset(0x8AC)] public fixed byte m_iCompetitiveRankingPredicted_Win[0x4];
        [FieldOffset(0x8B0)] public fixed byte m_iCompetitiveRankingPredicted_Loss[0x4];
        [FieldOffset(0x8B4)] public fixed byte m_iCompetitiveRankingPredicted_Tie[0x4];
        [FieldOffset(0x8B8)] public fixed byte m_nEndMatchNextMapVote[0x4];
        [FieldOffset(0x8BC)] public fixed byte m_unActiveQuestId[0x4];
        [FieldOffset(0x8C0)] public fixed byte m_rtActiveMissionPeriod[0x4];
        [FieldOffset(0x8C4)] public fixed byte m_nQuestProgressReason[0x4];
        [FieldOffset(0x8C8)] public fixed byte m_unPlayerTvControlFlags[0x30];
        [FieldOffset(0x8F8)] public fixed byte m_iDraftIndex[0x4];
        [FieldOffset(0x8FC)] public fixed byte m_msQueuedModeDisconnectionTimestamp[0x4];
        [FieldOffset(0x900)] public fixed byte m_uiAbandonRecordedReason[0x4];
        [FieldOffset(0x904)] public fixed byte m_eNetworkDisconnectionReason[0x4];
        [FieldOffset(0x908)] public fixed byte m_bCannotBeKicked[0x1];
        [FieldOffset(0x909)] public fixed byte m_bEverFullyConnected[0x1];
        [FieldOffset(0x90A)] public fixed byte m_bAbandonAllowsSurrender[0x1];
        [FieldOffset(0x90B)] public fixed byte m_bAbandonOffersInstantSurrender[0x1];
        [FieldOffset(0x90C)] public fixed byte m_bDisconnection1MinWarningPrinted[0x1];
        [FieldOffset(0x90D)] public fixed byte m_bScoreReported[0x3];
        [FieldOffset(0x910)] public fixed byte m_nDisconnectionTick[0x10];
        [FieldOffset(0x920)] public fixed byte m_bControllingBot[0x1];
        [FieldOffset(0x921)] public fixed byte m_bHasControlledBotThisRound[0x1];
        [FieldOffset(0x922)] public fixed byte m_bHasBeenControlledByPlayerThisRound[0x2];
        [FieldOffset(0x924)] public fixed byte m_nBotsControlledThisRound[0x4];
        [FieldOffset(0x928)] public fixed byte m_bCanControlObservedBot[0x4];
        [FieldOffset(0x92C)] public fixed byte m_hPlayerPawn[0x4];
        [FieldOffset(0x930)] public fixed byte m_hObserverPawn[0x4];
        [FieldOffset(0x934)] public fixed byte m_bPawnIsAlive[0x4];
        [FieldOffset(0x938)] public fixed byte m_iPawnHealth[0x4];
        [FieldOffset(0x93C)] public fixed byte m_iPawnArmor[0x4];
        [FieldOffset(0x940)] public fixed byte m_bPawnHasDefuser[0x1];
        [FieldOffset(0x941)] public fixed byte m_bPawnHasHelmet[0x1];
        [FieldOffset(0x942)] public fixed byte m_nPawnCharacterDefIndex[0x2];
        [FieldOffset(0x944)] public fixed byte m_iPawnLifetimeStart[0x4];
        [FieldOffset(0x948)] public fixed byte m_iPawnLifetimeEnd[0x4];
        [FieldOffset(0x94C)] public fixed byte m_iPawnBotDifficulty[0x4];
        [FieldOffset(0x950)] public fixed byte m_hOriginalControllerOfCurrentPawn[0x4];
        [FieldOffset(0x954)] public fixed byte m_iScore[0x4];
        [FieldOffset(0x958)] public fixed byte m_recentKillQueue[0x8];
        [FieldOffset(0x960)] public fixed byte m_nFirstKill[0x1];
        [FieldOffset(0x961)] public fixed byte m_nKillCount[0x1];
        [FieldOffset(0x962)] public fixed byte m_bMvpNoMusic[0x2];
        [FieldOffset(0x964)] public fixed byte m_eMvpReason[0x4];
        [FieldOffset(0x968)] public fixed byte m_iMusicKitID[0x4];
        [FieldOffset(0x96C)] public fixed byte m_iMusicKitMVPs[0x4];
        [FieldOffset(0x970)] public fixed byte m_iMVPs[0x4];
        [FieldOffset(0x974)] public fixed byte m_bIsPlayerNameDirty[0x8];
        [FieldOffset(0x97C)] public fixed byte m_bFireBulletsSeedSynchronized[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x690)]
    public unsafe struct C_CSGO_CounterTerroristRushIntroCamera {
        [FieldOffset(0x0)] public fixed byte pad_0[0x690];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1D18)]
    public unsafe struct C_CSGO_TeamIntroCounterTerroristPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1D18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18B8)]
    public unsafe struct C_CSGO_PreviewModel {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1268];
        [FieldOffset(0x1268)] public fixed byte m_defaultAnim[0x8];
        [FieldOffset(0x1270)] public fixed byte m_nDefaultAnimLoopMode[0x4];
        [FieldOffset(0x1274)] public fixed byte m_flInitialModelScale[0x4];
        [FieldOffset(0x1278)] public fixed byte m_sInitialWeaponState[0x640];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1D18)]
    public unsafe struct C_CSGO_TeamSelectCharacterPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1D18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CPulseCell_Outflow_CycleOrdered__InstanceState_t {
        [FieldOffset(0x0)] public fixed byte m_nNextIndex[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x630)]
    public unsafe struct CCSObservableElement {
        [FieldOffset(0x0)] public fixed byte pad_0[0x618];
        [FieldOffset(0x618)] public fixed byte m_iszObservableModelEntity[0x8];
        [FieldOffset(0x620)] public fixed byte m_hObservableModelEntity[0x4];
        [FieldOffset(0x624)] public fixed byte m_hObservableModelEntity2[0x4];
        [FieldOffset(0x628)] public fixed byte m_nTeamFilter[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6D8)]
    public unsafe struct C_SoundEventAABBEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x6C0];
        [FieldOffset(0x6C0)] public fixed byte m_vMins[0xC];
        [FieldOffset(0x6CC)] public fixed byte m_vMaxs[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xFE0)]
    public unsafe struct CCSPlayer_MovementServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x310];
        [FieldOffset(0x310)] public fixed byte m_AnimationState[0xE0];
        [FieldOffset(0x3F0)] public fixed byte m_bUsingGroundTopologyOffset[0x4];
        [FieldOffset(0x3F4)] public fixed byte m_flUsingGroundTopologyOffsetTransitionSmoothing[0x4];
        [FieldOffset(0x3F8)] public fixed byte m_vecLadderNormal[0xC];
        [FieldOffset(0x404)] public fixed byte m_nLadderSurfacePropIndex[0x4];
        [FieldOffset(0x408)] public fixed byte m_bDucked[0x4];
        [FieldOffset(0x40C)] public fixed byte m_flDuckAmount[0x4];
        [FieldOffset(0x410)] public fixed byte m_flDuckSpeed[0x4];
        [FieldOffset(0x414)] public fixed byte m_bDuckOverride[0x1];
        [FieldOffset(0x415)] public fixed byte m_bDesiresDuck[0x1];
        [FieldOffset(0x416)] public fixed byte m_bDucking[0x2];
        [FieldOffset(0x418)] public fixed byte m_flDuckRootOffset[0x4];
        [FieldOffset(0x41C)] public fixed byte m_flDuckViewOffset[0x4];
        [FieldOffset(0x420)] public fixed byte m_flLastDuckTime[0x4];
        [FieldOffset(0x424)] public fixed byte m_flBombPlantViewOffset[0xC];
        [FieldOffset(0x430)] public fixed byte m_vecLastPositionAtFullCrouchSpeed[0x8];
        [FieldOffset(0x438)] public fixed byte m_duckUntilOnGround[0x1];
        [FieldOffset(0x439)] public fixed byte m_bHasWalkMovedSinceLastJump[0x1];
        [FieldOffset(0x43A)] public fixed byte m_bInStuckTest[0x20E];
        [FieldOffset(0x648)] public fixed byte m_nTraceCount[0x4];
        [FieldOffset(0x64C)] public fixed byte m_StuckLast[0x4];
        [FieldOffset(0x650)] public fixed byte m_bSpeedCropped[0x4];
        [FieldOffset(0x654)] public fixed byte m_nOldWaterLevel[0x4];
        [FieldOffset(0x658)] public fixed byte m_flWaterEntryTime[0x4];
        [FieldOffset(0x65C)] public fixed byte m_vecForward[0xC];
        [FieldOffset(0x668)] public fixed byte m_vecLeft[0xC];
        [FieldOffset(0x674)] public fixed byte m_vecUp[0xC];
        [FieldOffset(0x680)] public fixed byte m_nGameCodeHasMovedPlayerAfterCommand[0x4];
        [FieldOffset(0x684)] public fixed byte m_fStashGrenadeParameterWhen[0x4];
        [FieldOffset(0x688)] public fixed byte m_bUseFrictionStashedSpeed[0x4];
        [FieldOffset(0x68C)] public fixed byte m_flUseFrictionStashedSpeedUntilFrac[0x4];
        [FieldOffset(0x690)] public fixed byte m_flFrictionStashedSpeed[0x4];
        [FieldOffset(0x694)] public fixed byte m_flStamina[0x4];
        [FieldOffset(0x698)] public fixed byte m_flHeightAtJumpStart[0x4];
        [FieldOffset(0x69C)] public fixed byte m_flMaxJumpHeightThisJump[0x4];
        [FieldOffset(0x6A0)] public fixed byte m_flMaxJumpHeightLastJump[0x4];
        [FieldOffset(0x6A4)] public fixed byte m_flStaminaAtJumpStart[0x4];
        [FieldOffset(0x6A8)] public fixed byte m_flVelMulAtJumpStart[0x4];
        [FieldOffset(0x6AC)] public fixed byte m_flAccumulatedJumpError[0x4];
        [FieldOffset(0x6B0)] public fixed byte m_LegacyJump[0x18];
        [FieldOffset(0x6C8)] public fixed byte m_ModernJump[0x38];
        [FieldOffset(0x700)] public fixed byte m_nLastJumpTick[0x4];
        [FieldOffset(0x704)] public fixed byte m_flLastJumpFrac[0x4];
        [FieldOffset(0x708)] public fixed byte m_flLastJumpVelocityZ[0x4];
        [FieldOffset(0x70C)] public fixed byte m_bJumpApexPending[0x4];
        [FieldOffset(0x710)] public fixed byte m_flTicksSinceLastSurfingDetected[0x4];
        [FieldOffset(0x714)] public fixed byte m_bWasSurfing[0x90];
        [FieldOffset(0x7A4)] public fixed byte m_vecWalkWishVel[0x82C];
        [FieldOffset(0xFD0)] public fixed byte m_bHasEverProcessedCommand[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct SellbackPurchaseEntry_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_unDefIdx[0x4];
        [FieldOffset(0x34)] public fixed byte m_nCost[0x4];
        [FieldOffset(0x38)] public fixed byte m_nPrevArmor[0x4];
        [FieldOffset(0x3C)] public fixed byte m_bPrevHelmet[0x4];
        [FieldOffset(0x40)] public fixed byte m_hItem[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x618)]
    public unsafe struct C_TintController {
        [FieldOffset(0x0)] public fixed byte pad_0[0x618];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F30)]
    public unsafe struct C_WeaponBaseItem {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F20];
        [FieldOffset(0x1F20)] public fixed byte m_bSequenceInProgress[0x1];
        [FieldOffset(0x1F21)] public fixed byte m_bRedraw[0xF];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1098)]
    public unsafe struct CWaterSplasher {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1098)]
    public unsafe struct C_FuncBrush {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct PhysicsRagdollPose_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_RelativeTransforms[0x18];
        [FieldOffset(0x20)] public fixed byte m_hOwner[0x4];
        [FieldOffset(0x24)] public fixed byte m_bSetFromDebugHistory[0x24];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CPropDataComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_flDmgModBullet[0x4];
        [FieldOffset(0x14)] public fixed byte m_flDmgModClub[0x4];
        [FieldOffset(0x18)] public fixed byte m_flDmgModExplosive[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flDmgModFire[0x4];
        [FieldOffset(0x20)] public fixed byte m_iszPhysicsDamageTableName[0x8];
        [FieldOffset(0x28)] public fixed byte m_iszBasePropData[0x8];
        [FieldOffset(0x30)] public fixed byte m_nInteractions[0x4];
        [FieldOffset(0x34)] public fixed byte m_bSpawnMotionDisabled[0x4];
        [FieldOffset(0x38)] public fixed byte m_nDisableTakePhysicsDamageSpawnFlag[0x4];
        [FieldOffset(0x3C)] public fixed byte m_nMotionDisabledSpawnFlag[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CPulseCell_LimitCount__InstanceState_t {
        [FieldOffset(0x0)] public fixed byte m_nCurrentCount[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F60)]
    public unsafe struct C_WeaponCZ75a {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
        [FieldOffset(0x1F50)] public fixed byte m_bMagazineRemoved[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10C0)]
    public unsafe struct C_DynamicLight {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
        [FieldOffset(0x1098)] public fixed byte m_Flags[0x1];
        [FieldOffset(0x1099)] public fixed byte m_LightStyle[0x3];
        [FieldOffset(0x109C)] public fixed byte m_Radius[0x4];
        [FieldOffset(0x10A0)] public fixed byte m_Exponent[0x4];
        [FieldOffset(0x10A4)] public fixed byte m_InnerAngle[0x4];
        [FieldOffset(0x10A8)] public fixed byte m_OuterAngle[0x4];
        [FieldOffset(0x10AC)] public fixed byte m_SpotRadius[0x14];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x578)]
    public unsafe struct CCS2PawnGraphController {
        [FieldOffset(0x0)] public fixed byte pad_0[0x2D8];
        [FieldOffset(0x2D8)] public fixed byte m_bIsDefusing[0x18];
        [FieldOffset(0x2F0)] public fixed byte m_moveType[0x18];
        [FieldOffset(0x308)] public fixed byte m_moveDirectionID[0x18];
        [FieldOffset(0x320)] public fixed byte m_flMoveSpeedX[0x18];
        [FieldOffset(0x338)] public fixed byte m_flMoveSpeedY[0x18];
        [FieldOffset(0x350)] public fixed byte m_flMoveSpeedHorizontal[0x18];
        [FieldOffset(0x368)] public fixed byte m_flPreviousMoveSpeedHorizontal[0x18];
        [FieldOffset(0x380)] public fixed byte m_flCrouchAmount[0x18];
        [FieldOffset(0x398)] public fixed byte m_bIsWalking[0x18];
        [FieldOffset(0x3B0)] public fixed byte m_flWeaponDropAmount[0x18];
        [FieldOffset(0x3C8)] public fixed byte m_groundAction[0x18];
        [FieldOffset(0x3E0)] public fixed byte m_groundActionDirectionID[0x18];
        [FieldOffset(0x3F8)] public fixed byte m_flGroundTurnAngleOrVelocity[0x18];
        [FieldOffset(0x410)] public fixed byte m_flLadderCycle[0x18];
        [FieldOffset(0x428)] public fixed byte m_flLadderYaw[0x18];
        [FieldOffset(0x440)] public fixed byte m_flLadderYawBackwards[0x18];
        [FieldOffset(0x458)] public fixed byte m_airAction[0x18];
        [FieldOffset(0x470)] public fixed byte m_flAirHeightAboveGround[0x18];
        [FieldOffset(0x488)] public fixed byte m_leftFootTarget[0x18];
        [FieldOffset(0x4A0)] public fixed byte m_rightFootTarget[0x18];
        [FieldOffset(0x4B8)] public fixed byte m_flFlashedAmount[0x18];
        [FieldOffset(0x4D0)] public fixed byte m_flAimPitchAngle[0x18];
        [FieldOffset(0x4E8)] public fixed byte m_flAimYawAngle[0x18];
        [FieldOffset(0x500)] public fixed byte m_flinchHead[0x18];
        [FieldOffset(0x518)] public fixed byte m_flinchHeadRestart[0x18];
        [FieldOffset(0x530)] public fixed byte m_flinchBody[0x18];
        [FieldOffset(0x548)] public fixed byte m_flinchBodyRestart[0x18];
        [FieldOffset(0x560)] public fixed byte m_flinchIsOnFire[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct EngineCountdownTimer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_duration[0x4];
        [FieldOffset(0xC)] public fixed byte m_timestamp[0x4];
        [FieldOffset(0x10)] public fixed byte m_timescale[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6C8)]
    public unsafe struct C_SoundEventSphereEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x6C0];
        [FieldOffset(0x6C0)] public fixed byte m_flRadius[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CCSPlayerController_DamageServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
        [FieldOffset(0x40)] public fixed byte m_nSendUpdate[0x8];
        [FieldOffset(0x48)] public fixed byte m_DamageList[0x68];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x37D0)]
    public unsafe struct C_CSGO_TeamPreviewModel {
        [FieldOffset(0x0)] public fixed byte pad_0[0x37D0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x618)]
    public unsafe struct C_TonemapController2Alias_env_tonemap_controller2 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x618];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x86A0)]
    public unsafe struct C_Inferno {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10D8];
        [FieldOffset(0x10D8)] public fixed byte m_nfxFireDamageEffect[0x8];
        [FieldOffset(0x10E0)] public fixed byte m_hInfernoPointsSnapshot[0x8];
        [FieldOffset(0x10E8)] public fixed byte m_hInfernoFillerPointsSnapshot[0x8];
        [FieldOffset(0x10F0)] public fixed byte m_hInfernoOutlinePointsSnapshot[0x8];
        [FieldOffset(0x10F8)] public fixed byte m_hInfernoClimbingOutlinePointsSnapshot[0x8];
        [FieldOffset(0x1100)] public fixed byte m_hInfernoDecalsSnapshot[0x8];
        [FieldOffset(0x1108)] public fixed byte m_firePositions[0x300];
        [FieldOffset(0x1408)] public fixed byte m_fireParentPositions[0x300];
        [FieldOffset(0x1708)] public fixed byte m_bFireIsBurning[0x40];
        [FieldOffset(0x1748)] public fixed byte m_BurnNormal[0x300];
        [FieldOffset(0x1A48)] public fixed byte m_fireCount[0x4];
        [FieldOffset(0x1A4C)] public fixed byte m_nInfernoType[0x4];
        [FieldOffset(0x1A50)] public fixed byte m_nFireLifetime[0x4];
        [FieldOffset(0x1A54)] public fixed byte m_bInPostEffectTime[0x4];
        [FieldOffset(0x1A58)] public fixed byte m_lastFireCount[0x4];
        [FieldOffset(0x1A5C)] public fixed byte m_nFireEffectTickBegin[0x6C04];
        [FieldOffset(0x8660)] public fixed byte m_drawableCount[0x4];
        [FieldOffset(0x8664)] public fixed byte m_blosCheck[0x4];
        [FieldOffset(0x8668)] public fixed byte m_nlosperiod[0x4];
        [FieldOffset(0x866C)] public fixed byte m_maxFireHalfWidth[0x4];
        [FieldOffset(0x8670)] public fixed byte m_maxFireHeight[0x4];
        [FieldOffset(0x8674)] public fixed byte m_minBounds[0xC];
        [FieldOffset(0x8680)] public fixed byte m_maxBounds[0xC];
        [FieldOffset(0x868C)] public fixed byte m_flLastGrassBurnThink[0x14];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x638)]
    public unsafe struct CFilterLOS {
        [FieldOffset(0x0)] public fixed byte pad_0[0x638];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x620)]
    public unsafe struct CPointOrient {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_iszSpawnTargetName[0x8];
        [FieldOffset(0x608)] public fixed byte m_hTarget[0x4];
        [FieldOffset(0x60C)] public fixed byte m_bActive[0x4];
        [FieldOffset(0x610)] public fixed byte m_nGoalDirection[0x4];
        [FieldOffset(0x614)] public fixed byte m_nConstraint[0x4];
        [FieldOffset(0x618)] public fixed byte m_flMaxTurnRate[0x4];
        [FieldOffset(0x61C)] public fixed byte m_flLastGameTime[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xAF0)]
    public unsafe struct C_GlobalLight {
        [FieldOffset(0x0)] public fixed byte pad_0[0xAC0];
        [FieldOffset(0xAC0)] public fixed byte m_WindClothForceHandle[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6F8)]
    public unsafe struct C_EnvWindClientside {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_EnvWindShared[0xF8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct sky3dparams_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte scale[0x4];
        [FieldOffset(0xC)] public fixed byte origin[0xC];
        [FieldOffset(0x18)] public fixed byte bClip3DSkyBoxNearToWorldFar[0x4];
        [FieldOffset(0x1C)] public fixed byte flClip3DSkyBoxNearToWorldFarOffset[0x4];
        [FieldOffset(0x20)] public fixed byte fog[0x68];
        [FieldOffset(0x88)] public fixed byte m_nWorldGroupID[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1348)]
    public unsafe struct C_FlashbangProjectile {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1348];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6D8)]
    public unsafe struct C_SoundEventConeEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x6C0];
        [FieldOffset(0x6C0)] public fixed byte m_flEmitterAngle[0x4];
        [FieldOffset(0x6C4)] public fixed byte m_flSweetSpotAngle[0x4];
        [FieldOffset(0x6C8)] public fixed byte m_flAttenMin[0x4];
        [FieldOffset(0x6CC)] public fixed byte m_flAttenMax[0x4];
        [FieldOffset(0x6D0)] public fixed byte m_iszParameterName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CDestructiblePartsComponent {
        [FieldOffset(0x0)] public fixed byte __m_pChainEntity[0x48];
        [FieldOffset(0x48)] public fixed byte m_vecDamageTakenByHitGroup[0x18];
        [FieldOffset(0x60)] public fixed byte m_hOwner[0x8];
        [FieldOffset(0x68)] public fixed byte m_pAnimGraphDestructibleGraphController[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_WeaponP90 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6F8)]
    public unsafe struct C_EnvWind {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_EnvWindShared[0xF8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x690)]
    public unsafe struct C_CSGO_TerroristTeamIntroCamera {
        [FieldOffset(0x0)] public fixed byte pad_0[0x690];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Step_DebugLog {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x620)]
    public unsafe struct C_PointDeathcamBounds {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_vBoxMins[0xC];
        [FieldOffset(0x60C)] public fixed byte m_vBoxMaxs[0xC];
        [FieldOffset(0x618)] public fixed byte m_flLerpDistance[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x138)]
    public unsafe struct CCSPlayerController_ActionTrackingServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
        [FieldOffset(0x40)] public fixed byte m_perRoundStats[0x68];
        [FieldOffset(0xA8)] public fixed byte m_matchStats[0x80];
        [FieldOffset(0x128)] public fixed byte m_iNumRoundKills[0x4];
        [FieldOffset(0x12C)] public fixed byte m_iNumRoundKillsHeadshots[0x4];
        [FieldOffset(0x130)] public fixed byte m_flTotalRoundDamageDealt[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xBB0)]
    public unsafe struct CBodyComponentBaseAnimGraph {
        [FieldOffset(0x0)] public fixed byte pad_0[0x510];
        [FieldOffset(0x510)] public fixed byte m_animationController[0x6A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18B8)]
    public unsafe struct C_CSGO_PreviewModelAlias_csgo_item_previewmodel {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18B8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x600)]
    public unsafe struct C_InfoInstructorHintHostageRescueZone {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
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
    [StructLayout(LayoutKind.Explicit, Size = 0x12A0)]
    public unsafe struct C_TriggerBuoyancy {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1180];
        [FieldOffset(0x1180)] public fixed byte m_BuoyancyHelper[0x118];
        [FieldOffset(0x1298)] public fixed byte m_flFluidDensity[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x288)]
    public unsafe struct CPlayer_MovementServices_Humanoid {
        [FieldOffset(0x0)] public fixed byte pad_0[0x258];
        [FieldOffset(0x258)] public fixed byte m_flStepSoundTime[0x4];
        [FieldOffset(0x25C)] public fixed byte m_flFallVelocity[0x4];
        [FieldOffset(0x260)] public fixed byte m_groundNormal[0xC];
        [FieldOffset(0x26C)] public fixed byte m_flSurfaceFriction[0x4];
        [FieldOffset(0x270)] public fixed byte m_surfaceProps[0x10];
        [FieldOffset(0x280)] public fixed byte m_nStepside[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct CPulseCell_IsRequirementValid__Criteria_t {
        [FieldOffset(0x0)] public fixed byte m_bIsValid[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_WeaponTec9 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1410)]
    public unsafe struct C_PhysPropClientside {
        [FieldOffset(0x0)] public fixed byte pad_0[0x13E0];
        [FieldOffset(0x13E0)] public fixed byte m_flTouchDelta[0x4];
        [FieldOffset(0x13E4)] public fixed byte m_fDeathTime[0x4];
        [FieldOffset(0x13E8)] public fixed byte m_vecDamagePosition[0xC];
        [FieldOffset(0x13F4)] public fixed byte m_vecDamageDirection[0xC];
        [FieldOffset(0x1400)] public fixed byte m_nDamageType[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10A0)]
    public unsafe struct C_BaseDoor {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
        [FieldOffset(0x1098)] public fixed byte m_bIsUsable[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CSMatchStats_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x68];
        [FieldOffset(0x68)] public fixed byte m_iEnemy5Ks[0x4];
        [FieldOffset(0x6C)] public fixed byte m_iEnemy4Ks[0x4];
        [FieldOffset(0x70)] public fixed byte m_iEnemy3Ks[0x4];
        [FieldOffset(0x74)] public fixed byte m_iEnemyKnifeKills[0x4];
        [FieldOffset(0x78)] public fixed byte m_iEnemyTaserKills[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct EntityRenderAttribute_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_ID[0x4];
        [FieldOffset(0x34)] public fixed byte m_Values[0x14];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CPulseCell_Inflow_ObservableVariableListener {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte m_nBlackboardReference[0x2];
        [FieldOffset(0x82)] public fixed byte m_bSelfReference[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1D18)]
    public unsafe struct CCSGO_RushIntroTerroristPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1D18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1198)]
    public unsafe struct CHostageRescueZone {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1198];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2B0)]
    public unsafe struct CModelState {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA0];
        [FieldOffset(0xA0)] public fixed byte m_hModel[0x8];
        [FieldOffset(0xA8)] public fixed byte m_ModelName[0x38];
        [FieldOffset(0xE0)] public fixed byte m_pVPhysicsAggregate[0x8];
        [FieldOffset(0xE8)] public fixed byte m_flRootBoneOffset_x[0x4];
        [FieldOffset(0xEC)] public fixed byte m_flRootBoneOffset_y[0x4];
        [FieldOffset(0xF0)] public fixed byte m_flRootBoneOffset_z[0x4];
        [FieldOffset(0xF4)] public fixed byte m_nRootBoneOffsetResetSerialNumber[0x1C];
        [FieldOffset(0x110)] public fixed byte m_bClientClothCreationSuppressed[0xF0];
        [FieldOffset(0x200)] public fixed byte m_nAnimStateNoInterpSerialNumber[0x8];
        [FieldOffset(0x208)] public fixed byte m_MeshGroupMask[0x50];
        [FieldOffset(0x258)] public fixed byte m_nBodyGroupChoices[0x4A];
        [FieldOffset(0x2A2)] public fixed byte m_nIdealMotionType[0x1];
        [FieldOffset(0x2A3)] public fixed byte m_nForceLOD[0x1];
        [FieldOffset(0x2A4)] public fixed byte m_nClothUpdateFlags[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2C)]
    public unsafe struct CPulseCell_LerpCameraSettings__CursorState_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_hCamera[0x4];
        [FieldOffset(0xC)] public fixed byte m_OverlaidStart[0x10];
        [FieldOffset(0x1C)] public fixed byte m_OverlaidEnd[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulseCell_Outflow_CycleOrdered {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Outputs[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_CSWeaponBaseGun {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F20];
        [FieldOffset(0x1F20)] public fixed byte m_zoomLevel[0x4];
        [FieldOffset(0x1F24)] public fixed byte m_iBurstShotsRemaining[0x4];
        [FieldOffset(0x1F28)] public fixed byte m_iSilencerBodygroup[0x10];
        [FieldOffset(0x1F38)] public fixed byte m_silencedModelIndex[0x4];
        [FieldOffset(0x1F3C)] public fixed byte m_inPrecache[0x1];
        [FieldOffset(0x1F3D)] public fixed byte m_bNeedsBoltAction[0x3];
        [FieldOffset(0x1F40)] public fixed byte m_nRevolverCylinderIdx[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x608)]
    public unsafe struct C_CSGameRulesProxy {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_pGameRules[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB8)]
    public unsafe struct CCollisionProperty {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_collisionAttribute[0x30];
        [FieldOffset(0x40)] public fixed byte m_vecMins[0xC];
        [FieldOffset(0x4C)] public fixed byte m_vecMaxs[0xE];
        [FieldOffset(0x5A)] public fixed byte m_usSolidFlags[0x1];
        [FieldOffset(0x5B)] public fixed byte m_nSolidType[0x1];
        [FieldOffset(0x5C)] public fixed byte m_triggerBloat[0x1];
        [FieldOffset(0x5D)] public fixed byte m_nSurroundType[0x1];
        [FieldOffset(0x5E)] public fixed byte m_CollisionGroup[0x1];
        [FieldOffset(0x5F)] public fixed byte m_nEnablePhysics[0x1];
        [FieldOffset(0x60)] public fixed byte m_flBoundingRadius[0x4];
        [FieldOffset(0x64)] public fixed byte m_vecSpecifiedSurroundingMins[0xC];
        [FieldOffset(0x70)] public fixed byte m_vecSpecifiedSurroundingMaxs[0xC];
        [FieldOffset(0x7C)] public fixed byte m_vecSurroundingMaxs[0xC];
        [FieldOffset(0x88)] public fixed byte m_vecSurroundingMins[0xC];
        [FieldOffset(0x94)] public fixed byte m_vCapsuleCenter1[0xC];
        [FieldOffset(0xA0)] public fixed byte m_vCapsuleCenter2[0xC];
        [FieldOffset(0xAC)] public fixed byte m_flCapsuleRadius[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_WeaponP250 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x640)]
    public unsafe struct CFilterMassGreater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x638];
        [FieldOffset(0x638)] public fixed byte m_fFilterMass[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1120)]
    public unsafe struct C_ShatterGlassShardPhysics {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10A0];
        [FieldOffset(0x10A0)] public fixed byte m_ShardDesc[0x80];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10E0)]
    public unsafe struct C_EntityDissolve {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10A0];
        [FieldOffset(0x10A0)] public fixed byte m_flStartTime[0x4];
        [FieldOffset(0x10A4)] public fixed byte m_flFadeInStart[0x4];
        [FieldOffset(0x10A8)] public fixed byte m_flFadeInLength[0x4];
        [FieldOffset(0x10AC)] public fixed byte m_flFadeOutModelStart[0x4];
        [FieldOffset(0x10B0)] public fixed byte m_flFadeOutModelLength[0x4];
        [FieldOffset(0x10B4)] public fixed byte m_flFadeOutStart[0x4];
        [FieldOffset(0x10B8)] public fixed byte m_flFadeOutLength[0x4];
        [FieldOffset(0x10BC)] public fixed byte m_nDissolveType[0x4];
        [FieldOffset(0x10C0)] public fixed byte m_nMagnitude[0x4];
        [FieldOffset(0x10C4)] public fixed byte m_vDissolverOrigin[0xC];
        [FieldOffset(0x10D0)] public fixed byte m_flNextSparkTime[0x4];
        [FieldOffset(0x10D4)] public fixed byte m_bCoreExplode[0x1];
        [FieldOffset(0x10D5)] public fixed byte m_bLinkedToServerEnt[0xB];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x620)]
    public unsafe struct C_SoundOpvarSetOBBEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x620];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x640)]
    public unsafe struct CCSCustomPlayerCamera {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_hPawn[0x4];
        [FieldOffset(0x604)] public fixed byte m_nCameraMode[0x4];
        [FieldOffset(0x608)] public fixed byte m_hFollowEntity[0x4];
        [FieldOffset(0x60C)] public fixed byte m_bFollowEyes[0x4];
        [FieldOffset(0x610)] public fixed byte m_vecFollowOffset[0xC];
        [FieldOffset(0x61C)] public fixed byte m_vecCameraOffset[0xC];
        [FieldOffset(0x628)] public fixed byte m_bClipCameraOffset[0x4];
        [FieldOffset(0x62C)] public fixed byte m_flCameraOffsetReturnStrength[0x14];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CCSGameModeRules_ArmsRace {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_WeaponSequence[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1510)]
    public unsafe struct C_FuncMonitor {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
        [FieldOffset(0x1098)] public fixed byte m_targetCamera[0x8];
        [FieldOffset(0x10A0)] public fixed byte m_nResolutionEnum[0x4];
        [FieldOffset(0x10A4)] public fixed byte m_bRenderShadows[0x1];
        [FieldOffset(0x10A5)] public fixed byte m_bUseUniqueColorTarget[0x3];
        [FieldOffset(0x10A8)] public fixed byte m_brushModelName[0x8];
        [FieldOffset(0x10B0)] public fixed byte m_hTargetCamera[0x4];
        [FieldOffset(0x10B4)] public fixed byte m_bEnabled[0x1];
        [FieldOffset(0x10B5)] public fixed byte m_bDraw3DSkybox[0x45B];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1300)]
    public unsafe struct C_ClientRagdoll {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1268];
        [FieldOffset(0x1268)] public fixed byte m_bFadeOut[0x1];
        [FieldOffset(0x1269)] public fixed byte m_bImportant[0x3];
        [FieldOffset(0x126C)] public fixed byte m_flEffectTime[0x4];
        [FieldOffset(0x1270)] public fixed byte m_gibDespawnTime[0x4];
        [FieldOffset(0x1274)] public fixed byte m_iCurrentFriction[0x4];
        [FieldOffset(0x1278)] public fixed byte m_iMinFriction[0x4];
        [FieldOffset(0x127C)] public fixed byte m_iMaxFriction[0x4];
        [FieldOffset(0x1280)] public fixed byte m_iFrictionAnimState[0x4];
        [FieldOffset(0x1284)] public fixed byte m_bReleaseRagdoll[0x1];
        [FieldOffset(0x1285)] public fixed byte m_iEyeAttachment[0x1];
        [FieldOffset(0x1286)] public fixed byte m_bFadingOut[0x2];
        [FieldOffset(0x1288)] public fixed byte m_flScaleEnd[0x28];
        [FieldOffset(0x12B0)] public fixed byte m_flScaleTimeStart[0x28];
        [FieldOffset(0x12D8)] public fixed byte m_flScaleTimeEnd[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct PulseSelectorOutflowList_t {
        [FieldOffset(0x0)] public fixed byte m_Outflows[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct C_BaseModelEntity__BodyGroupRequest_t {
        [FieldOffset(0x0)] public fixed byte m_uRequestID[0x4];
        [FieldOffset(0x4)] public fixed byte m_nGroupName[0x4];
        [FieldOffset(0x8)] public fixed byte m_sChoiceName[0x8];
        [FieldOffset(0x10)] public fixed byte m_nGroup[0x4];
        [FieldOffset(0x14)] public fixed byte m_uChoice[0x2];
        [FieldOffset(0x16)] public fixed byte m_uRefCount[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CPulseCell_PlaySequence__CursorState_t {
        [FieldOffset(0x0)] public fixed byte m_hTarget[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x510)]
    public unsafe struct CBodyComponentSkeletonInstance {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte m_skeletonInstance[0x490];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1270)]
    public unsafe struct C_CS2WeaponModuleBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1270];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1D18)]
    public unsafe struct C_CSGO_TeamPreviewCharacterPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_nVariant[0x4];
        [FieldOffset(0x604)] public fixed byte m_nRandom[0x4];
        [FieldOffset(0x608)] public fixed byte m_nOrdinal[0x8];
        [FieldOffset(0x610)] public fixed byte m_sWeaponName[0x8];
        [FieldOffset(0x618)] public fixed byte m_xuid[0x8];
        [FieldOffset(0x620)] public fixed byte m_agentItem[0x5B0];
        [FieldOffset(0xBD0)] public fixed byte m_glovesItem[0x5B0];
        [FieldOffset(0x1180)] public fixed byte m_weaponItem[0x5B0];
        [FieldOffset(0x1730)] public fixed byte m_petItem[0x5E8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1500)]
    public unsafe struct C_SmokeGrenadeProjectile {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1360];
        [FieldOffset(0x1360)] public fixed byte m_nSmokeEffectTickBegin[0x4];
        [FieldOffset(0x1364)] public fixed byte m_bDidSmokeEffect[0x4];
        [FieldOffset(0x1368)] public fixed byte m_nRandomSeed[0x4];
        [FieldOffset(0x136C)] public fixed byte m_vSmokeColor[0xC];
        [FieldOffset(0x1378)] public fixed byte m_vSmokeDetonationPos[0x10];
        [FieldOffset(0x1388)] public fixed byte m_VoxelFrameData[0x18];
        [FieldOffset(0x13A0)] public fixed byte m_nVoxelFrameDataSize[0x4];
        [FieldOffset(0x13A4)] public fixed byte m_nVoxelUpdate[0x4];
        [FieldOffset(0x13A8)] public fixed byte m_nSmokeLightProbeRegen[0x1];
        [FieldOffset(0x13A9)] public fixed byte m_bSmokeVolumeDataReceived[0x1];
        [FieldOffset(0x13AA)] public fixed byte m_bSmokeEffectSpawned[0x156];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CScriptComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_scriptClassName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CCSPlayer_BuyServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_vecSellbackPurchaseEntries[0x68];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x610)]
    public unsafe struct C_SkyCameraVolumeTarget {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_nSkyboxScale[0x8];
        [FieldOffset(0x608)] public fixed byte m_hSkyMaterial[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x608)]
    public unsafe struct C_PortraitWorldCallbackHandler {
        [FieldOffset(0x0)] public fixed byte pad_0[0x608];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14B0)]
    public unsafe struct C_DynamicProp {
        [FieldOffset(0x0)] public fixed byte pad_0[0x13E0];
        [FieldOffset(0x13E0)] public fixed byte m_bGraphControllerEnabled[0x1];
        [FieldOffset(0x13E1)] public fixed byte m_bUseHitboxesForRenderBox[0x1];
        [FieldOffset(0x13E2)] public fixed byte m_bUseAnimGraph[0x6];
        [FieldOffset(0x13E8)] public fixed byte m_pOutputAnimBegun[0x18];
        [FieldOffset(0x1400)] public fixed byte m_pOutputAnimOver[0x18];
        [FieldOffset(0x1418)] public fixed byte m_pOutputAnimLoopCycleOver[0x18];
        [FieldOffset(0x1430)] public fixed byte m_OnAnimReachedStart[0x18];
        [FieldOffset(0x1448)] public fixed byte m_OnAnimReachedEnd[0x18];
        [FieldOffset(0x1460)] public fixed byte m_iszIdleAnim[0x8];
        [FieldOffset(0x1468)] public fixed byte m_nIdleAnimLoopMode[0x4];
        [FieldOffset(0x146C)] public fixed byte m_bRandomizeCycle[0x1];
        [FieldOffset(0x146D)] public fixed byte m_bStartDisabled[0x1];
        [FieldOffset(0x146E)] public fixed byte m_bFiredStartEndOutput[0x1];
        [FieldOffset(0x146F)] public fixed byte m_bForceNpcExclude[0x1];
        [FieldOffset(0x1470)] public fixed byte m_bCreateMovableSurfaceGraph[0x1];
        [FieldOffset(0x1471)] public fixed byte m_bCreateNonSolid[0x1];
        [FieldOffset(0x1472)] public fixed byte m_bIsOverrideProp[0x2];
        [FieldOffset(0x1474)] public fixed byte m_iInitialGlowState[0x4];
        [FieldOffset(0x1478)] public fixed byte m_nGlowRange[0x4];
        [FieldOffset(0x147C)] public fixed byte m_nGlowRangeMin[0x4];
        [FieldOffset(0x1480)] public fixed byte m_glowColor[0x4];
        [FieldOffset(0x1484)] public fixed byte m_nGlowTeam[0x4];
        [FieldOffset(0x1488)] public fixed byte m_iCachedFrameCount[0x4];
        [FieldOffset(0x148C)] public fixed byte m_vecCachedRenderMins[0xC];
        [FieldOffset(0x1498)] public fixed byte m_vecCachedRenderMaxs[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x968)]
    public unsafe struct C_CSTeam {
        [FieldOffset(0x0)] public fixed byte pad_0[0x6B8];
        [FieldOffset(0x6B8)] public fixed byte m_szTeamMatchStat[0x200];
        [FieldOffset(0x8B8)] public fixed byte m_numMapVictories[0x4];
        [FieldOffset(0x8BC)] public fixed byte m_bSurrendered[0x4];
        [FieldOffset(0x8C0)] public fixed byte m_scoreFirstHalf[0x4];
        [FieldOffset(0x8C4)] public fixed byte m_scoreSecondHalf[0x4];
        [FieldOffset(0x8C8)] public fixed byte m_scoreOvertime[0x4];
        [FieldOffset(0x8CC)] public fixed byte m_szClanTeamname[0x84];
        [FieldOffset(0x950)] public fixed byte m_iClanID[0x4];
        [FieldOffset(0x954)] public fixed byte m_szTeamFlagImage[0x8];
        [FieldOffset(0x95C)] public fixed byte m_szTeamLogoImage[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1390)]
    public unsafe struct C_CS2HudModelWeapon {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1390];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10D0)]
    public unsafe struct C_TextureBasedAnimatable {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
        [FieldOffset(0x1098)] public fixed byte m_bLoop[0x4];
        [FieldOffset(0x109C)] public fixed byte m_flFPS[0x4];
        [FieldOffset(0x10A0)] public fixed byte m_hPositionKeys[0x8];
        [FieldOffset(0x10A8)] public fixed byte m_hRotationKeys[0x8];
        [FieldOffset(0x10B0)] public fixed byte m_vAnimationBoundsMin[0xC];
        [FieldOffset(0x10BC)] public fixed byte m_vAnimationBoundsMax[0xC];
        [FieldOffset(0x10C8)] public fixed byte m_flStartTime[0x4];
        [FieldOffset(0x10CC)] public fixed byte m_flStartFrame[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10A0)]
    public unsafe struct C_LightEnvironmentEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x11D0)]
    public unsafe struct C_TriggerPhysics {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1180];
        [FieldOffset(0x1180)] public fixed byte m_gravityScale[0x4];
        [FieldOffset(0x1184)] public fixed byte m_linearLimit[0x4];
        [FieldOffset(0x1188)] public fixed byte m_linearDamping[0x4];
        [FieldOffset(0x118C)] public fixed byte m_angularLimit[0x4];
        [FieldOffset(0x1190)] public fixed byte m_angularDamping[0x4];
        [FieldOffset(0x1194)] public fixed byte m_linearForce[0x4];
        [FieldOffset(0x1198)] public fixed byte m_flFrequency[0x4];
        [FieldOffset(0x119C)] public fixed byte m_flDampingRatio[0x4];
        [FieldOffset(0x11A0)] public fixed byte m_vecLinearForcePointAt[0xC];
        [FieldOffset(0x11AC)] public fixed byte m_bCollapseToForcePoint[0x4];
        [FieldOffset(0x11B0)] public fixed byte m_vecLinearForcePointAtWorld[0xC];
        [FieldOffset(0x11BC)] public fixed byte m_vecLinearForceDirection[0xC];
        [FieldOffset(0x11C8)] public fixed byte m_bForceDirectionIsInLocalSpace[0x1];
        [FieldOffset(0x11C9)] public fixed byte m_bConvertToDebrisWhenPossible[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14F0)]
    public unsafe struct C_PropDoorRotating {
        [FieldOffset(0x0)] public fixed byte pad_0[0x14F0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x608)]
    public unsafe struct C_HandleTest {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_Handle[0x4];
        [FieldOffset(0x604)] public fixed byte m_bSendHandle[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x638)]
    public unsafe struct CInfoWorldLayer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_pOutputOnEntitiesSpawned[0x18];
        [FieldOffset(0x618)] public fixed byte m_worldName[0x8];
        [FieldOffset(0x620)] public fixed byte m_layerName[0x8];
        [FieldOffset(0x628)] public fixed byte m_bWorldLayerVisible[0x1];
        [FieldOffset(0x629)] public fixed byte m_bEntitiesSpawned[0x1];
        [FieldOffset(0x62A)] public fixed byte m_bCreateAsChildSpawnGroup[0x2];
        [FieldOffset(0x62C)] public fixed byte m_hLayerSpawnGroup[0x4];
        [FieldOffset(0x630)] public fixed byte m_bWorldLayerActuallyVisible[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x510)]
    public unsafe struct CBodyComponentBaseModelEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x510];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1270)]
    public unsafe struct C_Multimeter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1268];
        [FieldOffset(0x1268)] public fixed byte m_hTargetC4[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1180)]
    public unsafe struct C_BaseTrigger {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
        [FieldOffset(0x1098)] public fixed byte m_OnStartTouch[0x18];
        [FieldOffset(0x10B0)] public fixed byte m_OnStartTouchAll[0x18];
        [FieldOffset(0x10C8)] public fixed byte m_OnEndTouch[0x18];
        [FieldOffset(0x10E0)] public fixed byte m_OnEndTouchAll[0x18];
        [FieldOffset(0x10F8)] public fixed byte m_OnTouching[0x18];
        [FieldOffset(0x1110)] public fixed byte m_OnTouchingEachEntity[0x18];
        [FieldOffset(0x1128)] public fixed byte m_OnNotTouching[0x18];
        [FieldOffset(0x1140)] public fixed byte m_OnTouchingChanged[0x18];
        [FieldOffset(0x1158)] public fixed byte m_hTouchingEntities[0x18];
        [FieldOffset(0x1170)] public fixed byte m_iFilterName[0x8];
        [FieldOffset(0x1178)] public fixed byte m_hFilter[0x4];
        [FieldOffset(0x117C)] public fixed byte m_bDisabled[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x640)]
    public unsafe struct FilterDamageType {
        [FieldOffset(0x0)] public fixed byte pad_0[0x638];
        [FieldOffset(0x638)] public fixed byte m_iDamageType[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CAttributeList {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_Attributes[0x68];
        [FieldOffset(0x70)] public fixed byte m_pManager[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x120)]
    public unsafe struct CPulseCell_Inflow_Wait {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_WakeResume[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x640)]
    public unsafe struct CFilterProximity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x638];
        [FieldOffset(0x638)] public fixed byte m_flRadius[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2D8)]
    public unsafe struct CCS2WeaponGraphController {
        [FieldOffset(0x0)] public fixed byte pad_0[0xC0];
        [FieldOffset(0xC0)] public fixed byte m_action[0x18];
        [FieldOffset(0xD8)] public fixed byte m_bActionReset[0x18];
        [FieldOffset(0xF0)] public fixed byte m_flWeaponActionSpeedScale[0x18];
        [FieldOffset(0x108)] public fixed byte m_weaponCategory[0x18];
        [FieldOffset(0x120)] public fixed byte m_weaponType[0x18];
        [FieldOffset(0x138)] public fixed byte m_weaponExtraInfo[0x18];
        [FieldOffset(0x150)] public fixed byte m_flWeaponAmmo[0x18];
        [FieldOffset(0x168)] public fixed byte m_flWeaponAmmoMax[0x18];
        [FieldOffset(0x180)] public fixed byte m_flWeaponAmmoReserve[0x18];
        [FieldOffset(0x198)] public fixed byte m_bWeaponIsSilenced[0x18];
        [FieldOffset(0x1B0)] public fixed byte m_flWeaponIronsightAmount[0x18];
        [FieldOffset(0x1C8)] public fixed byte m_bIsUsingLegacyModel[0x18];
        [FieldOffset(0x1E0)] public fixed byte m_idleVariation[0x18];
        [FieldOffset(0x1F8)] public fixed byte m_deployVariation[0x18];
        [FieldOffset(0x210)] public fixed byte m_attackType[0x18];
        [FieldOffset(0x228)] public fixed byte m_attackThrowStrength[0x18];
        [FieldOffset(0x240)] public fixed byte m_flAttackVariation[0x18];
        [FieldOffset(0x258)] public fixed byte m_inspectVariation[0x18];
        [FieldOffset(0x270)] public fixed byte m_inspectExtraInfo[0x18];
        [FieldOffset(0x288)] public fixed byte m_reloadStage[0x50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CEffectData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_vOrigin[0xC];
        [FieldOffset(0x14)] public fixed byte m_vStart[0xC];
        [FieldOffset(0x20)] public fixed byte m_vNormal[0xC];
        [FieldOffset(0x2C)] public fixed byte m_vAngles[0xC];
        [FieldOffset(0x38)] public fixed byte m_hEntity[0x4];
        [FieldOffset(0x3C)] public fixed byte m_hOtherEntity[0x4];
        [FieldOffset(0x40)] public fixed byte m_flScale[0x4];
        [FieldOffset(0x44)] public fixed byte m_flMagnitude[0x4];
        [FieldOffset(0x48)] public fixed byte m_flRadius[0x4];
        [FieldOffset(0x4C)] public fixed byte m_nSurfaceProp[0x4];
        [FieldOffset(0x50)] public fixed byte m_nEffectIndex[0x8];
        [FieldOffset(0x58)] public fixed byte m_nDamageType[0x4];
        [FieldOffset(0x5C)] public fixed byte m_nPenetrate[0x2];
        [FieldOffset(0x5E)] public fixed byte m_nMaterial[0x2];
        [FieldOffset(0x60)] public fixed byte m_nHitBox[0x2];
        [FieldOffset(0x62)] public fixed byte m_nColor[0x1];
        [FieldOffset(0x63)] public fixed byte m_fFlags[0x1];
        [FieldOffset(0x64)] public fixed byte m_nAttachmentIndex[0x4];
        [FieldOffset(0x68)] public fixed byte m_nAttachmentName[0x4];
        [FieldOffset(0x6C)] public fixed byte m_iEffectName[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1668)]
    public unsafe struct C_ParticleSystem {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
        [FieldOffset(0x1098)] public fixed byte m_szSnapshotFileName[0x200];
        [FieldOffset(0x1298)] public fixed byte m_bActive[0x1];
        [FieldOffset(0x1299)] public fixed byte m_bFrozen[0x3];
        [FieldOffset(0x129C)] public fixed byte m_flFreezeTransitionDuration[0x4];
        [FieldOffset(0x12A0)] public fixed byte m_nStopType[0x4];
        [FieldOffset(0x12A4)] public fixed byte m_bAnimateDuringGameplayPause[0x4];
        [FieldOffset(0x12A8)] public fixed byte m_iEffectIndex[0x8];
        [FieldOffset(0x12B0)] public fixed byte m_flStartTime[0x4];
        [FieldOffset(0x12B4)] public fixed byte m_flPreSimTime[0x4];
        [FieldOffset(0x12B8)] public fixed byte m_vServerControlPoints[0x30];
        [FieldOffset(0x12E8)] public fixed byte m_iServerControlPointAssignments[0x4];
        [FieldOffset(0x12EC)] public fixed byte m_hControlPointEnts[0x100];
        [FieldOffset(0x13EC)] public fixed byte m_bDataStringLocalized[0x4];
        [FieldOffset(0x13F0)] public fixed byte m_strDataString[0x8];
        [FieldOffset(0x13F8)] public fixed byte m_bNoSave[0x1];
        [FieldOffset(0x13F9)] public fixed byte m_bNoFreeze[0x1];
        [FieldOffset(0x13FA)] public fixed byte m_bNoRamp[0x1];
        [FieldOffset(0x13FB)] public fixed byte m_bStartActive[0x5];
        [FieldOffset(0x1400)] public fixed byte m_iszEffectName[0x8];
        [FieldOffset(0x1408)] public fixed byte m_iszControlPointNames[0x200];
        [FieldOffset(0x1608)] public fixed byte m_nDataCP[0x4];
        [FieldOffset(0x160C)] public fixed byte m_vecDataCPValue[0xC];
        [FieldOffset(0x1618)] public fixed byte m_nTintCP[0x4];
        [FieldOffset(0x161C)] public fixed byte m_clrTint[0x24];
        [FieldOffset(0x1640)] public fixed byte m_bOldActive[0x1];
        [FieldOffset(0x1641)] public fixed byte m_bOldFrozen[0x27];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulseCell_Outflow_CycleShuffled {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Outputs[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_WeaponSCAR20 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1098)]
    public unsafe struct C_FuncMover {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xE8)]
    public unsafe struct CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
        [FieldOffset(0x0)] public fixed byte pItem[0x8];
        [FieldOffset(0x8)] public fixed byte team[0x2];
        [FieldOffset(0xA)] public fixed byte slot[0xDE];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F0)]
    public unsafe struct CLightComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x38];
        [FieldOffset(0x38)] public fixed byte __m_pChainEntity[0x40];
        [FieldOffset(0x78)] public fixed byte m_Color[0x4];
        [FieldOffset(0x7C)] public fixed byte m_SecondaryColor[0x4];
        [FieldOffset(0x80)] public fixed byte m_flBrightness[0x4];
        [FieldOffset(0x84)] public fixed byte m_flBrightnessScale[0x4];
        [FieldOffset(0x88)] public fixed byte m_flBrightnessMult[0x4];
        [FieldOffset(0x8C)] public fixed byte m_flRange[0x4];
        [FieldOffset(0x90)] public fixed byte m_flFalloff[0x4];
        [FieldOffset(0x94)] public fixed byte m_flAttenuation0[0x4];
        [FieldOffset(0x98)] public fixed byte m_flAttenuation1[0x4];
        [FieldOffset(0x9C)] public fixed byte m_flAttenuation2[0x4];
        [FieldOffset(0xA0)] public fixed byte m_flTheta[0x4];
        [FieldOffset(0xA4)] public fixed byte m_flPhi[0x4];
        [FieldOffset(0xA8)] public fixed byte m_hLightCookie[0x8];
        [FieldOffset(0xB0)] public fixed byte m_nCascades[0x4];
        [FieldOffset(0xB4)] public fixed byte m_nCastShadows[0x4];
        [FieldOffset(0xB8)] public fixed byte m_nShadowWidth[0x4];
        [FieldOffset(0xBC)] public fixed byte m_nShadowHeight[0x4];
        [FieldOffset(0xC0)] public fixed byte m_bRenderDiffuse[0x4];
        [FieldOffset(0xC4)] public fixed byte m_nRenderSpecular[0x4];
        [FieldOffset(0xC8)] public fixed byte m_bRenderTransmissive[0x4];
        [FieldOffset(0xCC)] public fixed byte m_flOrthoLightWidth[0x4];
        [FieldOffset(0xD0)] public fixed byte m_flOrthoLightHeight[0x4];
        [FieldOffset(0xD4)] public fixed byte m_nStyle[0x4];
        [FieldOffset(0xD8)] public fixed byte m_Pattern[0x8];
        [FieldOffset(0xE0)] public fixed byte m_nCascadeRenderStaticObjects[0x4];
        [FieldOffset(0xE4)] public fixed byte m_flShadowCascadeCrossFade[0x4];
        [FieldOffset(0xE8)] public fixed byte m_flShadowCascadeDistanceFade[0x4];
        [FieldOffset(0xEC)] public fixed byte m_flShadowCascadeDistance0[0x4];
        [FieldOffset(0xF0)] public fixed byte m_flShadowCascadeDistance1[0x4];
        [FieldOffset(0xF4)] public fixed byte m_flShadowCascadeDistance2[0x4];
        [FieldOffset(0xF8)] public fixed byte m_flShadowCascadeDistance3[0x4];
        [FieldOffset(0xFC)] public fixed byte m_nShadowCascadeResolution0[0x4];
        [FieldOffset(0x100)] public fixed byte m_nShadowCascadeResolution1[0x4];
        [FieldOffset(0x104)] public fixed byte m_nShadowCascadeResolution2[0x4];
        [FieldOffset(0x108)] public fixed byte m_nShadowCascadeResolution3[0x4];
        [FieldOffset(0x10C)] public fixed byte m_bUsesBakedShadowing[0x4];
        [FieldOffset(0x110)] public fixed byte m_nShadowPriority[0x4];
        [FieldOffset(0x114)] public fixed byte m_nBakedShadowIndex[0x4];
        [FieldOffset(0x118)] public fixed byte m_nLightPathUniqueId[0x4];
        [FieldOffset(0x11C)] public fixed byte m_nLightMapUniqueId[0x4];
        [FieldOffset(0x120)] public fixed byte m_bRenderToCubemaps[0x1];
        [FieldOffset(0x121)] public fixed byte m_bAllowSSTGeneration[0x3];
        [FieldOffset(0x124)] public fixed byte m_nDirectLight[0x4];
        [FieldOffset(0x128)] public fixed byte m_nBounceLight[0x4];
        [FieldOffset(0x12C)] public fixed byte m_flBounceScale[0x4];
        [FieldOffset(0x130)] public fixed byte m_flFadeMinDist[0x4];
        [FieldOffset(0x134)] public fixed byte m_flFadeMaxDist[0x4];
        [FieldOffset(0x138)] public fixed byte m_flShadowFadeMinDist[0x4];
        [FieldOffset(0x13C)] public fixed byte m_flShadowFadeMaxDist[0x4];
        [FieldOffset(0x140)] public fixed byte m_bEnabled[0x1];
        [FieldOffset(0x141)] public fixed byte m_bFlicker[0x1];
        [FieldOffset(0x142)] public fixed byte m_bPrecomputedFieldsValid[0x2];
        [FieldOffset(0x144)] public fixed byte m_vPrecomputedBoundsMins[0xC];
        [FieldOffset(0x150)] public fixed byte m_vPrecomputedBoundsMaxs[0xC];
        [FieldOffset(0x15C)] public fixed byte m_vPrecomputedOBBOrigin[0xC];
        [FieldOffset(0x168)] public fixed byte m_vPrecomputedOBBAngles[0xC];
        [FieldOffset(0x174)] public fixed byte m_vPrecomputedOBBExtent[0xC];
        [FieldOffset(0x180)] public fixed byte m_flPrecomputedMaxRange[0x4];
        [FieldOffset(0x184)] public fixed byte m_nFogLightingMode[0x4];
        [FieldOffset(0x188)] public fixed byte m_flFogContributionStength[0x4];
        [FieldOffset(0x18C)] public fixed byte m_flNearClipPlane[0x4];
        [FieldOffset(0x190)] public fixed byte m_SkyColor[0x4];
        [FieldOffset(0x194)] public fixed byte m_flSkyIntensity[0x4];
        [FieldOffset(0x198)] public fixed byte m_SkyAmbientBounce[0x4];
        [FieldOffset(0x19C)] public fixed byte m_bUseSecondaryColor[0x1];
        [FieldOffset(0x19D)] public fixed byte m_bMixedShadows[0x3];
        [FieldOffset(0x1A0)] public fixed byte m_flLightStyleStartTime[0x4];
        [FieldOffset(0x1A4)] public fixed byte m_flCapsuleLength[0x4];
        [FieldOffset(0x1A8)] public fixed byte m_flMinRoughness[0x4];
        [FieldOffset(0x1AC)] public fixed byte m_bAmbientOcclusionProxyOverride[0x4];
        [FieldOffset(0x1B0)] public fixed byte m_hAmbientOcclusionProxyPosition0[0x4];
        [FieldOffset(0x1B4)] public fixed byte m_hAmbientOcclusionProxyPosition1[0x4];
        [FieldOffset(0x1B8)] public fixed byte m_hAmbientOcclusionProxyPosition2[0x4];
        [FieldOffset(0x1BC)] public fixed byte m_hAmbientOcclusionProxyPosition3[0x4];
        [FieldOffset(0x1C0)] public fixed byte m_flAmbientOcclusionProxyStrength0[0x4];
        [FieldOffset(0x1C4)] public fixed byte m_flAmbientOcclusionProxyStrength1[0x4];
        [FieldOffset(0x1C8)] public fixed byte m_flAmbientOcclusionProxyStrength2[0x4];
        [FieldOffset(0x1CC)] public fixed byte m_flAmbientOcclusionProxyStrength3[0x4];
        [FieldOffset(0x1D0)] public fixed byte m_flAmbientOcclusionProxyAmbientStrength[0x4];
        [FieldOffset(0x1D4)] public fixed byte m_flAmbientOcclusionProxyConeAngle0[0x4];
        [FieldOffset(0x1D8)] public fixed byte m_flAmbientOcclusionProxyConeAngle1[0x4];
        [FieldOffset(0x1DC)] public fixed byte m_flAmbientOcclusionProxyConeAngle2[0x4];
        [FieldOffset(0x1E0)] public fixed byte m_flAmbientOcclusionProxyConeAngle3[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1FE0)]
    public unsafe struct C_DecoyGrenade {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1FE0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1268)]
    public unsafe struct C_WaterBullet {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1268];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1A0)]
    public unsafe struct CCSPlayer_ActionTrackingServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_hLastWeaponBeforeC4AutoSwitch[0x4];
        [FieldOffset(0x4C)] public fixed byte m_bIsRescuing[0x4];
        [FieldOffset(0x50)] public fixed byte m_weaponPurchasesThisMatch[0x70];
        [FieldOffset(0xC0)] public fixed byte m_weaponPurchasesThisRound[0x70];
        [FieldOffset(0x130)] public fixed byte m_weaponCarryOverIntoThisRound[0x70];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1098)]
    public unsafe struct CBrokenGlassTrap {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6E8)]
    public unsafe struct C_EnvCubemap {
        [FieldOffset(0x0)] public fixed byte pad_0[0x680];
        [FieldOffset(0x680)] public fixed byte m_Entity_hCubemapTexture[0x8];
        [FieldOffset(0x688)] public fixed byte m_Entity_bCustomCubemapTexture[0x4];
        [FieldOffset(0x68C)] public fixed byte m_Entity_flInfluenceRadius[0x4];
        [FieldOffset(0x690)] public fixed byte m_Entity_vBoxProjectMins[0xC];
        [FieldOffset(0x69C)] public fixed byte m_Entity_vBoxProjectMaxs[0xC];
        [FieldOffset(0x6A8)] public fixed byte m_Entity_bMoveable[0x4];
        [FieldOffset(0x6AC)] public fixed byte m_Entity_nHandshake[0x4];
        [FieldOffset(0x6B0)] public fixed byte m_Entity_nEnvCubeMapArrayIndex[0x4];
        [FieldOffset(0x6B4)] public fixed byte m_Entity_nPriority[0x4];
        [FieldOffset(0x6B8)] public fixed byte m_Entity_flEdgeFadeDist[0x4];
        [FieldOffset(0x6BC)] public fixed byte m_Entity_vEdgeFadeDists[0xC];
        [FieldOffset(0x6C8)] public fixed byte m_Entity_flDiffuseScale[0x4];
        [FieldOffset(0x6CC)] public fixed byte m_Entity_bStartDisabled[0x1];
        [FieldOffset(0x6CD)] public fixed byte m_Entity_bDefaultEnvMap[0x1];
        [FieldOffset(0x6CE)] public fixed byte m_Entity_bDefaultSpecEnvMap[0x1];
        [FieldOffset(0x6CF)] public fixed byte m_Entity_bIndoorCubeMap[0x1];
        [FieldOffset(0x6D0)] public fixed byte m_Entity_bCopyDiffuseFromDefaultCubemap[0x10];
        [FieldOffset(0x6E0)] public fixed byte m_Entity_bEnabled[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x258)]
    public unsafe struct CCSObserver_MovementServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x258];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CBodyComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_pSceneNode[0x40];
        [FieldOffset(0x48)] public fixed byte __m_pChainEntity[0x30];
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
    [StructLayout(LayoutKind.Explicit, Size = 0x12F0)]
    public unsafe struct C_BaseCombatCharacter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1268];
        [FieldOffset(0x1268)] public fixed byte m_hMyWearables[0x18];
        [FieldOffset(0x1280)] public fixed byte m_leftFootAttachment[0x1];
        [FieldOffset(0x1281)] public fixed byte m_rightFootAttachment[0x3];
        [FieldOffset(0x1284)] public fixed byte m_nWaterWakeMode[0x4];
        [FieldOffset(0x1288)] public fixed byte m_flWaterWorldZ[0x4];
        [FieldOffset(0x128C)] public fixed byte m_flWaterNextTraceTime[0x64];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CGlowProperty {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_fGlowColor[0x28];
        [FieldOffset(0x30)] public fixed byte m_iGlowType[0x4];
        [FieldOffset(0x34)] public fixed byte m_iGlowTeam[0x4];
        [FieldOffset(0x38)] public fixed byte m_nGlowRange[0x4];
        [FieldOffset(0x3C)] public fixed byte m_nGlowRangeMin[0x4];
        [FieldOffset(0x40)] public fixed byte m_glowColorOverride[0x4];
        [FieldOffset(0x44)] public fixed byte m_bFlashing[0x4];
        [FieldOffset(0x48)] public fixed byte m_flGlowTime[0x4];
        [FieldOffset(0x4C)] public fixed byte m_flGlowStartTime[0x4];
        [FieldOffset(0x50)] public fixed byte m_bEligibleForScreenHighlight[0x1];
        [FieldOffset(0x51)] public fixed byte m_bGlowing[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10D0)]
    public unsafe struct C_PointClientUIDialog {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10C8];
        [FieldOffset(0x10C8)] public fixed byte m_hActivator[0x4];
        [FieldOffset(0x10CC)] public fixed byte m_bStartEnabled[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x6C0)]
    public unsafe struct C_SoundEventMultiPointEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x6C0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_BaseValue {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_WeaponHKP2000 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1190)]
    public unsafe struct C_FootstepControl {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1180];
        [FieldOffset(0x1180)] public fixed byte m_source[0x8];
        [FieldOffset(0x1188)] public fixed byte m_destination[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x668)]
    public unsafe struct CCitadelSoundOpvarSetOBB {
        [FieldOffset(0x0)] public fixed byte pad_0[0x618];
        [FieldOffset(0x618)] public fixed byte m_iszStackName[0x8];
        [FieldOffset(0x620)] public fixed byte m_iszOperatorName[0x8];
        [FieldOffset(0x628)] public fixed byte m_iszOpvarName[0x8];
        [FieldOffset(0x630)] public fixed byte m_vDistanceInnerMins[0xC];
        [FieldOffset(0x63C)] public fixed byte m_vDistanceInnerMaxs[0xC];
        [FieldOffset(0x648)] public fixed byte m_vDistanceOuterMins[0xC];
        [FieldOffset(0x654)] public fixed byte m_vDistanceOuterMaxs[0xC];
        [FieldOffset(0x660)] public fixed byte m_nAABBDirection[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x600)]
    public unsafe struct C_CSGO_EndOfMatchLineupStart {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPlayer_WaterServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct CPulseCell_BooleanSwitchState {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_Condition[0x90];
        [FieldOffset(0x168)] public fixed byte m_WhenTrue[0x48];
        [FieldOffset(0x1B0)] public fixed byte m_WhenFalse[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CDamageRecord {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_PlayerDamager[0x4];
        [FieldOffset(0x34)] public fixed byte m_PlayerRecipient[0x4];
        [FieldOffset(0x38)] public fixed byte m_hPlayerControllerDamager[0x4];
        [FieldOffset(0x3C)] public fixed byte m_hPlayerControllerRecipient[0x4];
        [FieldOffset(0x40)] public fixed byte m_szPlayerDamagerName[0x8];
        [FieldOffset(0x48)] public fixed byte m_szPlayerRecipientName[0x8];
        [FieldOffset(0x50)] public fixed byte m_DamagerXuid[0x8];
        [FieldOffset(0x58)] public fixed byte m_RecipientXuid[0x8];
        [FieldOffset(0x60)] public fixed byte m_flBulletsDamage[0x4];
        [FieldOffset(0x64)] public fixed byte m_flDamage[0x4];
        [FieldOffset(0x68)] public fixed byte m_flActualHealthRemoved[0x4];
        [FieldOffset(0x6C)] public fixed byte m_iNumHits[0x4];
        [FieldOffset(0x70)] public fixed byte m_iLastBulletUpdate[0x4];
        [FieldOffset(0x74)] public fixed byte m_bIsOtherEnemy[0x1];
        [FieldOffset(0x75)] public fixed byte m_killType[0x3];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct VPhysicsCollisionAttribute_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_nInteractsAs[0x8];
        [FieldOffset(0x10)] public fixed byte m_nInteractsWith[0x8];
        [FieldOffset(0x18)] public fixed byte m_nInteractsExclude[0x8];
        [FieldOffset(0x20)] public fixed byte m_nEntityId[0x4];
        [FieldOffset(0x24)] public fixed byte m_nOwnerId[0x4];
        [FieldOffset(0x28)] public fixed byte m_nHierarchyId[0x2];
        [FieldOffset(0x2A)] public fixed byte m_nDetailLayerMask[0x2];
        [FieldOffset(0x2C)] public fixed byte m_nDetailLayerMaskType[0x1];
        [FieldOffset(0x2D)] public fixed byte m_nTargetDetailLayer[0x1];
        [FieldOffset(0x2E)] public fixed byte m_nCollisionGroup[0x1];
        [FieldOffset(0x2F)] public fixed byte m_nCollisionFunctionMask[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14B0)]
    public unsafe struct C_DynamicPropAlias_dynamic_prop {
        [FieldOffset(0x0)] public fixed byte pad_0[0x14B0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x698)]
    public unsafe struct CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
        [FieldOffset(0x0)] public fixed byte pad_0[0x698];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x13B8)]
    public unsafe struct C_OmniLight {
        [FieldOffset(0x0)] public fixed byte pad_0[0x13A8];
        [FieldOffset(0x13A8)] public fixed byte m_flInnerAngle[0x4];
        [FieldOffset(0x13AC)] public fixed byte m_flOuterAngle[0x4];
        [FieldOffset(0x13B0)] public fixed byte m_bShowLight[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x668)]
    public unsafe struct C_SceneEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x608];
        [FieldOffset(0x608)] public fixed byte m_bIsPlayingBack[0x1];
        [FieldOffset(0x609)] public fixed byte m_bPaused[0x1];
        [FieldOffset(0x60A)] public fixed byte m_bMultiplayer[0x1];
        [FieldOffset(0x60B)] public fixed byte m_bAutogenerated[0x1];
        [FieldOffset(0x60C)] public fixed byte m_bAllRequirementsComplete[0x4];
        [FieldOffset(0x610)] public fixed byte m_flForceClientTime[0x4];
        [FieldOffset(0x614)] public fixed byte m_nSceneStringIndex[0x2];
        [FieldOffset(0x616)] public fixed byte m_bClientOnly[0x2];
        [FieldOffset(0x618)] public fixed byte m_hOwner[0x8];
        [FieldOffset(0x620)] public fixed byte m_hActorList[0x18];
        [FieldOffset(0x638)] public fixed byte m_bWasPlaying[0x10];
        [FieldOffset(0x648)] public fixed byte m_QueuedEvents[0x18];
        [FieldOffset(0x660)] public fixed byte m_flCurrentTime[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x120)]
    public unsafe struct CPulseCell_Inflow_Yield {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_UnyieldResume[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1278)]
    public unsafe struct C_NametagModule {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1270];
        [FieldOffset(0x1270)] public fixed byte m_strNametagString[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1918)]
    public unsafe struct C_EconEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1278];
        [FieldOffset(0x1278)] public fixed byte m_flFlexDelayTime[0x8];
        [FieldOffset(0x1280)] public fixed byte m_flFlexDelayedWeight[0x8];
        [FieldOffset(0x1288)] public fixed byte m_bAttributesInitialized[0x8];
        [FieldOffset(0x1290)] public fixed byte m_AttributeManager[0x610];
        [FieldOffset(0x18A0)] public fixed byte m_OriginalOwnerXuidLow[0x4];
        [FieldOffset(0x18A4)] public fixed byte m_OriginalOwnerXuidHigh[0x4];
        [FieldOffset(0x18A8)] public fixed byte m_nFallbackPaintKit[0x4];
        [FieldOffset(0x18AC)] public fixed byte m_nFallbackSeed[0x4];
        [FieldOffset(0x18B0)] public fixed byte m_flFallbackWear[0x4];
        [FieldOffset(0x18B4)] public fixed byte m_nFallbackStatTrak[0x4];
        [FieldOffset(0x18B8)] public fixed byte m_bClientside[0x1];
        [FieldOffset(0x18B9)] public fixed byte m_bParticleSystemsCreated[0x7];
        [FieldOffset(0x18C0)] public fixed byte m_vecAttachedParticles[0x18];
        [FieldOffset(0x18D8)] public fixed byte m_hViewmodelAttachment[0x4];
        [FieldOffset(0x18DC)] public fixed byte m_iOldTeam[0x4];
        [FieldOffset(0x18E0)] public fixed byte m_bAttachmentDirty[0x4];
        [FieldOffset(0x18E4)] public fixed byte m_nUnloadedModelIndex[0x4];
        [FieldOffset(0x18E8)] public fixed byte m_iNumOwnerValidationRetries[0x10];
        [FieldOffset(0x18F8)] public fixed byte m_hOldProvidee[0x8];
        [FieldOffset(0x1900)] public fixed byte m_vecAttachedModels[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPlayer_UseServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x678)]
    public unsafe struct C_PointValueRemapper {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_bDisabled[0x1];
        [FieldOffset(0x601)] public fixed byte m_bDisabledOld[0x1];
        [FieldOffset(0x602)] public fixed byte m_bUpdateOnClient[0x2];
        [FieldOffset(0x604)] public fixed byte m_nInputType[0x4];
        [FieldOffset(0x608)] public fixed byte m_hRemapLineStart[0x4];
        [FieldOffset(0x60C)] public fixed byte m_hRemapLineEnd[0x4];
        [FieldOffset(0x610)] public fixed byte m_flMaximumChangePerSecond[0x4];
        [FieldOffset(0x614)] public fixed byte m_flDisengageDistance[0x4];
        [FieldOffset(0x618)] public fixed byte m_flEngageDistance[0x4];
        [FieldOffset(0x61C)] public fixed byte m_bRequiresUseKey[0x4];
        [FieldOffset(0x620)] public fixed byte m_nOutputType[0x8];
        [FieldOffset(0x628)] public fixed byte m_hOutputEntities[0x18];
        [FieldOffset(0x640)] public fixed byte m_nHapticsType[0x4];
        [FieldOffset(0x644)] public fixed byte m_nMomentumType[0x4];
        [FieldOffset(0x648)] public fixed byte m_flMomentumModifier[0x4];
        [FieldOffset(0x64C)] public fixed byte m_flSnapValue[0x4];
        [FieldOffset(0x650)] public fixed byte m_flCurrentMomentum[0x4];
        [FieldOffset(0x654)] public fixed byte m_nRatchetType[0x4];
        [FieldOffset(0x658)] public fixed byte m_flRatchetOffset[0x4];
        [FieldOffset(0x65C)] public fixed byte m_flInputOffset[0x4];
        [FieldOffset(0x660)] public fixed byte m_bEngaged[0x1];
        [FieldOffset(0x661)] public fixed byte m_bFirstUpdate[0x3];
        [FieldOffset(0x664)] public fixed byte m_flPreviousValue[0x4];
        [FieldOffset(0x668)] public fixed byte m_flPreviousUpdateTickTime[0x4];
        [FieldOffset(0x66C)] public fixed byte m_vecPreviousTestPoint[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CGameSceneNodeHandle {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_hOwner[0x4];
        [FieldOffset(0xC)] public fixed byte m_name[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CPulseCell_Unknown {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_UnknownKeys[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_WeaponMP7 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct CSPerRoundStats_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_iKills[0x4];
        [FieldOffset(0x34)] public fixed byte m_iDeaths[0x4];
        [FieldOffset(0x38)] public fixed byte m_iAssists[0x4];
        [FieldOffset(0x3C)] public fixed byte m_iDamage[0x4];
        [FieldOffset(0x40)] public fixed byte m_iEquipmentValue[0x4];
        [FieldOffset(0x44)] public fixed byte m_iMoneySaved[0x4];
        [FieldOffset(0x48)] public fixed byte m_iKillReward[0x4];
        [FieldOffset(0x4C)] public fixed byte m_iLiveTime[0x4];
        [FieldOffset(0x50)] public fixed byte m_iHeadShotKills[0x4];
        [FieldOffset(0x54)] public fixed byte m_iObjective[0x4];
        [FieldOffset(0x58)] public fixed byte m_iCashEarned[0x4];
        [FieldOffset(0x5C)] public fixed byte m_iUtilityDamage[0x4];
        [FieldOffset(0x60)] public fixed byte m_iEnemiesFlashed[0x8];
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
    [StructLayout(LayoutKind.Explicit, Size = 0x1350)]
    public unsafe struct C_CS2HudModelBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1350];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4F68)]
    public unsafe struct C_CSGameRules {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
        [FieldOffset(0x40)] public fixed byte m_bFreezePeriod[0x1];
        [FieldOffset(0x41)] public fixed byte m_bWarmupPeriod[0x3];
        [FieldOffset(0x44)] public fixed byte m_fWarmupPeriodEnd[0x4];
        [FieldOffset(0x48)] public fixed byte m_fWarmupPeriodStart[0x4];
        [FieldOffset(0x4C)] public fixed byte m_bTerroristTimeOutActive[0x1];
        [FieldOffset(0x4D)] public fixed byte m_bCTTimeOutActive[0x3];
        [FieldOffset(0x50)] public fixed byte m_flTerroristTimeOutRemaining[0x4];
        [FieldOffset(0x54)] public fixed byte m_flCTTimeOutRemaining[0x4];
        [FieldOffset(0x58)] public fixed byte m_nTerroristTimeOuts[0x4];
        [FieldOffset(0x5C)] public fixed byte m_nCTTimeOuts[0x4];
        [FieldOffset(0x60)] public fixed byte m_bTechnicalTimeOut[0x1];
        [FieldOffset(0x61)] public fixed byte m_bMatchWaitingForResume[0x3];
        [FieldOffset(0x64)] public fixed byte m_iFreezeTime[0x4];
        [FieldOffset(0x68)] public fixed byte m_iRoundTime[0x4];
        [FieldOffset(0x6C)] public fixed byte m_fMatchStartTime[0x4];
        [FieldOffset(0x70)] public fixed byte m_fRoundStartTime[0x4];
        [FieldOffset(0x74)] public fixed byte m_flRestartRoundTime[0x4];
        [FieldOffset(0x78)] public fixed byte m_bGameRestart[0x4];
        [FieldOffset(0x7C)] public fixed byte m_flGameStartTime[0x4];
        [FieldOffset(0x80)] public fixed byte m_timeUntilNextPhaseStarts[0x4];
        [FieldOffset(0x84)] public fixed byte m_gamePhase[0x4];
        [FieldOffset(0x88)] public fixed byte m_totalRoundsPlayed[0x4];
        [FieldOffset(0x8C)] public fixed byte m_nRoundsPlayedThisPhase[0x4];
        [FieldOffset(0x90)] public fixed byte m_nOvertimePlaying[0x4];
        [FieldOffset(0x94)] public fixed byte m_iHostagesRemaining[0x4];
        [FieldOffset(0x98)] public fixed byte m_bAnyHostageReached[0x1];
        [FieldOffset(0x99)] public fixed byte m_bMapHasBombTarget[0x1];
        [FieldOffset(0x9A)] public fixed byte m_bMapHasRescueZone[0x1];
        [FieldOffset(0x9B)] public fixed byte m_bMapHasBuyZone[0x1];
        [FieldOffset(0x9C)] public fixed byte m_bIsQueuedMatchmaking[0x4];
        [FieldOffset(0xA0)] public fixed byte m_nQueuedMatchmakingMode[0x4];
        [FieldOffset(0xA4)] public fixed byte m_bIsValveDS[0x1];
        [FieldOffset(0xA5)] public fixed byte m_bLogoMap[0x1];
        [FieldOffset(0xA6)] public fixed byte m_bPlayAllStepSoundsOnServer[0x2];
        [FieldOffset(0xA8)] public fixed byte m_iSpectatorSlotCount[0x4];
        [FieldOffset(0xAC)] public fixed byte m_MatchDevice[0x4];
        [FieldOffset(0xB0)] public fixed byte m_bHasMatchStarted[0x4];
        [FieldOffset(0xB4)] public fixed byte m_nNextMapInMapgroup[0x4];
        [FieldOffset(0xB8)] public fixed byte m_szTournamentEventName[0x200];
        [FieldOffset(0x2B8)] public fixed byte m_szTournamentEventStage[0x200];
        [FieldOffset(0x4B8)] public fixed byte m_szMatchStatTxt[0x200];
        [FieldOffset(0x6B8)] public fixed byte m_szTournamentPredictionsTxt[0x200];
        [FieldOffset(0x8B8)] public fixed byte m_nTournamentPredictionsPct[0x4];
        [FieldOffset(0x8BC)] public fixed byte m_flCMMItemDropRevealStartTime[0x4];
        [FieldOffset(0x8C0)] public fixed byte m_flCMMItemDropRevealEndTime[0x4];
        [FieldOffset(0x8C4)] public fixed byte m_bIsDroppingItems[0x1];
        [FieldOffset(0x8C5)] public fixed byte m_bIsQuestEligible[0x1];
        [FieldOffset(0x8C6)] public fixed byte m_bIsHltvActive[0x1];
        [FieldOffset(0x8C7)] public fixed byte m_bBombPlanted[0x1];
        [FieldOffset(0x8C8)] public fixed byte m_arrProhibitedItemIndices[0xC8];
        [FieldOffset(0x990)] public fixed byte m_arrTournamentActiveCasterAccounts[0x10];
        [FieldOffset(0x9A0)] public fixed byte m_numBestOfMaps[0x4];
        [FieldOffset(0x9A4)] public fixed byte m_nHalloweenMaskListSeed[0x4];
        [FieldOffset(0x9A8)] public fixed byte m_bBombDropped[0x4];
        [FieldOffset(0x9AC)] public fixed byte m_iRoundWinStatus[0x4];
        [FieldOffset(0x9B0)] public fixed byte m_eRoundWinReason[0x4];
        [FieldOffset(0x9B4)] public fixed byte m_bTCantBuy[0x1];
        [FieldOffset(0x9B5)] public fixed byte m_bCTCantBuy[0x3];
        [FieldOffset(0x9B8)] public fixed byte m_iMatchStats_RoundResults[0x78];
        [FieldOffset(0xA30)] public fixed byte m_iMatchStats_PlayersAlive_CT[0x78];
        [FieldOffset(0xAA8)] public fixed byte m_iMatchStats_PlayersAlive_T[0x78];
        [FieldOffset(0xB20)] public fixed byte m_TeamRespawnWaveTimes[0x80];
        [FieldOffset(0xBA0)] public fixed byte m_nActiveMutators[0x4];
        [FieldOffset(0xBA4)] public fixed byte m_flNextRespawnWave[0x80];
        [FieldOffset(0xC24)] public fixed byte m_vMinimapMins[0xC];
        [FieldOffset(0xC30)] public fixed byte m_vMinimapMaxs[0xC];
        [FieldOffset(0xC3C)] public fixed byte m_MinimapVerticalSectionHeights[0x24];
        [FieldOffset(0xC60)] public fixed byte m_ullLocalMatchID[0x8];
        [FieldOffset(0xC68)] public fixed byte m_nEndMatchMapGroupVoteTypes[0x28];
        [FieldOffset(0xC90)] public fixed byte m_nEndMatchMapGroupVoteOptions[0x28];
        [FieldOffset(0xCB8)] public fixed byte m_nEndMatchMapVoteWinner[0x4];
        [FieldOffset(0xCBC)] public fixed byte m_iNumConsecutiveCTLoses[0x4];
        [FieldOffset(0xCC0)] public fixed byte m_iNumConsecutiveTerroristLoses[0xC0];
        [FieldOffset(0xD80)] public fixed byte m_nMatchAbortedEarlyReason[0x4];
        [FieldOffset(0xD84)] public fixed byte m_bHasTriggeredRoundStartMusic[0x1];
        [FieldOffset(0xD85)] public fixed byte m_bSwitchingTeamsAtRoundReset[0x1B];
        [FieldOffset(0xDA0)] public fixed byte m_pGameModeRules[0x8];
        [FieldOffset(0xDA8)] public fixed byte m_RetakeRules[0x158];
        [FieldOffset(0xF00)] public fixed byte m_nMatchEndCount[0x4];
        [FieldOffset(0xF04)] public fixed byte m_nTTeamIntroVariant[0x4];
        [FieldOffset(0xF08)] public fixed byte m_nCTTeamIntroVariant[0x4];
        [FieldOffset(0xF0C)] public fixed byte m_bTeamIntroPeriod[0x4];
        [FieldOffset(0xF10)] public fixed byte m_iRoundEndWinnerTeam[0x4];
        [FieldOffset(0xF14)] public fixed byte m_eRoundEndReason[0x4];
        [FieldOffset(0xF18)] public fixed byte m_bRoundEndShowTimerDefend[0x4];
        [FieldOffset(0xF1C)] public fixed byte m_iRoundEndTimerTime[0x4];
        [FieldOffset(0xF20)] public fixed byte m_sRoundEndFunFactToken[0x8];
        [FieldOffset(0xF28)] public fixed byte m_iRoundEndFunFactPlayerSlot[0x4];
        [FieldOffset(0xF2C)] public fixed byte m_iRoundEndFunFactData1[0x4];
        [FieldOffset(0xF30)] public fixed byte m_iRoundEndFunFactData2[0x4];
        [FieldOffset(0xF34)] public fixed byte m_iRoundEndFunFactData3[0x4];
        [FieldOffset(0xF38)] public fixed byte m_sRoundEndMessage[0x8];
        [FieldOffset(0xF40)] public fixed byte m_iRoundEndPlayerCount[0x4];
        [FieldOffset(0xF44)] public fixed byte m_bRoundEndNoMusic[0x4];
        [FieldOffset(0xF48)] public fixed byte m_iRoundEndLegacy[0x4];
        [FieldOffset(0xF4C)] public fixed byte m_nRoundEndCount[0x4];
        [FieldOffset(0xF50)] public fixed byte m_iRoundStartRoundNumber[0x4];
        [FieldOffset(0xF54)] public fixed byte m_nRoundStartCount[0x400C];
        [FieldOffset(0x4F60)] public fixed byte m_flLastPerfSampleTime[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1530)]
    public unsafe struct CGrenadeTracer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10B0];
        [FieldOffset(0x10B0)] public fixed byte m_flTracerDuration[0x4];
        [FieldOffset(0x10B4)] public fixed byte m_nType[0x47C];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CCSGameModeRules_Noop {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CPulse_BlackboardReference {
        [FieldOffset(0x0)] public fixed byte m_hBlackboardResource[0x8];
        [FieldOffset(0x8)] public fixed byte m_BlackboardResource[0x10];
        [FieldOffset(0x18)] public fixed byte m_nNodeID[0x8];
        [FieldOffset(0x20)] public fixed byte m_NodeName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1348)]
    public unsafe struct C_BaseCSGrenadeProjectile {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12B0];
        [FieldOffset(0x12B0)] public fixed byte m_vInitialPosition[0xC];
        [FieldOffset(0x12BC)] public fixed byte m_vInitialVelocity[0xC];
        [FieldOffset(0x12C8)] public fixed byte m_nBounces[0x8];
        [FieldOffset(0x12D0)] public fixed byte m_nExplodeEffectIndex[0x8];
        [FieldOffset(0x12D8)] public fixed byte m_nExplodeEffectTickBegin[0x4];
        [FieldOffset(0x12DC)] public fixed byte m_vecExplodeEffectOrigin[0xC];
        [FieldOffset(0x12E8)] public fixed byte m_flSpawnTime[0x4];
        [FieldOffset(0x12EC)] public fixed byte vecLastTrailLinePos[0xC];
        [FieldOffset(0x12F8)] public fixed byte flNextTrailLineTime[0x4];
        [FieldOffset(0x12FC)] public fixed byte m_bExplodeEffectBegan[0x1];
        [FieldOffset(0x12FD)] public fixed byte m_bCanCreateGrenadeTrail[0x3];
        [FieldOffset(0x1300)] public fixed byte m_nSnapshotTrajectoryEffectIndex[0x8];
        [FieldOffset(0x1308)] public fixed byte m_hSnapshotTrajectoryParticleSnapshot[0x8];
        [FieldOffset(0x1310)] public fixed byte m_arrTrajectoryTrailPoints[0x18];
        [FieldOffset(0x1328)] public fixed byte m_arrTrajectoryTrailPointCreationTimes[0x18];
        [FieldOffset(0x1340)] public fixed byte m_flTrajectoryTrailEffectCreationTime[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1D18)]
    public unsafe struct CCSGO_RushIntroCounterTerroristPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1D18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_ReturnValues {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x698)]
    public unsafe struct C_GradientFog {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_hGradientFogTexture[0x8];
        [FieldOffset(0x608)] public fixed byte m_flFogStartDistance[0x4];
        [FieldOffset(0x60C)] public fixed byte m_flFogEndDistance[0x4];
        [FieldOffset(0x610)] public fixed byte m_bHeightFogEnabled[0x4];
        [FieldOffset(0x614)] public fixed byte m_flFogStartHeight[0x4];
        [FieldOffset(0x618)] public fixed byte m_flFogEndHeight[0x4];
        [FieldOffset(0x61C)] public fixed byte m_flFarZ[0x4];
        [FieldOffset(0x620)] public fixed byte m_flFogMaxOpacity[0x4];
        [FieldOffset(0x624)] public fixed byte m_flFogFalloffExponent[0x4];
        [FieldOffset(0x628)] public fixed byte m_flFogVerticalExponent[0x4];
        [FieldOffset(0x62C)] public fixed byte m_fogColor[0x4];
        [FieldOffset(0x630)] public fixed byte m_flFogStrength[0x4];
        [FieldOffset(0x634)] public fixed byte m_flFadeTime[0x4];
        [FieldOffset(0x638)] public fixed byte m_bStartDisabled[0x1];
        [FieldOffset(0x639)] public fixed byte m_bIsEnabled[0x1];
        [FieldOffset(0x63A)] public fixed byte m_bGradientFogNeedsTextures[0x5E];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CCSPlayerController_InGameMoneyServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
        [FieldOffset(0x40)] public fixed byte m_iAccount[0x4];
        [FieldOffset(0x44)] public fixed byte m_iStartAccount[0x4];
        [FieldOffset(0x48)] public fixed byte m_iTotalCashSpent[0x4];
        [FieldOffset(0x4C)] public fixed byte m_iCashSpentThisRound[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xE8)]
    public unsafe struct CCSPlayer_AimPunchServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_predictableBaseTick[0x4];
        [FieldOffset(0x4C)] public fixed byte m_predictableBaseTickInterpAmount[0x4];
        [FieldOffset(0x50)] public fixed byte m_predictableBaseAngle[0xC];
        [FieldOffset(0x5C)] public fixed byte m_predictableBaseAngleVel[0x44];
        [FieldOffset(0xA0)] public fixed byte m_unpredictableBaseTick[0x4];
        [FieldOffset(0xA4)] public fixed byte m_unpredictableBaseAngle[0x44];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1348)]
    public unsafe struct C_HEGrenadeProjectile {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1348];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x640)]
    public unsafe struct CFilterModel {
        [FieldOffset(0x0)] public fixed byte pad_0[0x638];
        [FieldOffset(0x638)] public fixed byte m_iFilterModel[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x640)]
    public unsafe struct C_SoundAreaEntityOrientedBox {
        [FieldOffset(0x0)] public fixed byte pad_0[0x628];
        [FieldOffset(0x628)] public fixed byte m_vMin[0xC];
        [FieldOffset(0x634)] public fixed byte m_vMax[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x620)]
    public unsafe struct C_SoundOpvarSetPointEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x620];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x618)]
    public unsafe struct CPulseGameBlackboard {
        [FieldOffset(0x0)] public fixed byte pad_0[0x608];
        [FieldOffset(0x608)] public fixed byte m_strGraphName[0x8];
        [FieldOffset(0x610)] public fixed byte m_strStateBlob[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CChoreoComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte __m_pChainEntity[0x28];
        [FieldOffset(0x30)] public fixed byte m_hOwner[0x4];
        [FieldOffset(0x34)] public fixed byte m_nExernalChoreoGraphCount[0x4];
        [FieldOffset(0x38)] public fixed byte m_sActiveExternalChoreoGraphSlotID[0x38];
        [FieldOffset(0x70)] public fixed byte m_nNextSceneEventId[0x4];
        [FieldOffset(0x74)] public fixed byte m_flAllowResponsesEndTime[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Value_RandomInt {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F20)]
    public unsafe struct C_CSWeaponBaseShotgun {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1328)]
    public unsafe struct C_RagdollPropAttached {
        [FieldOffset(0x0)] public fixed byte pad_0[0x12F0];
        [FieldOffset(0x12F0)] public fixed byte m_boneIndexAttached[0x4];
        [FieldOffset(0x12F4)] public fixed byte m_ragdollAttachedObjectIndex[0x4];
        [FieldOffset(0x12F8)] public fixed byte m_attachmentPointBoneSpace[0xC];
        [FieldOffset(0x1304)] public fixed byte m_attachmentPointRagdollSpace[0xC];
        [FieldOffset(0x1310)] public fixed byte m_vecOffset[0xC];
        [FieldOffset(0x131C)] public fixed byte m_parentTime[0x4];
        [FieldOffset(0x1320)] public fixed byte m_bHasParent[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1098)]
    public unsafe struct C_ModelPointEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x37D0)]
    public unsafe struct C_CSGO_PreviewPlayer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x3720];
        [FieldOffset(0x3720)] public fixed byte m_animgraphCharacterModeString[0x8];
        [FieldOffset(0x3728)] public fixed byte m_flInitialModelScale[0xA8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x13B0)]
    public unsafe struct C_RectLight {
        [FieldOffset(0x0)] public fixed byte pad_0[0x13A8];
        [FieldOffset(0x13A8)] public fixed byte m_bShowLight[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x628)]
    public unsafe struct CCSRadarElement {
        [FieldOffset(0x0)] public fixed byte pad_0[0x618];
        [FieldOffset(0x618)] public fixed byte m_nElementType[0x4];
        [FieldOffset(0x61C)] public fixed byte m_nElementColor[0x4];
        [FieldOffset(0x620)] public fixed byte m_nTeamFilter[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x710)]
    public unsafe struct CPathSimple {
        [FieldOffset(0x0)] public fixed byte pad_0[0x610];
        [FieldOffset(0x610)] public fixed byte m_CPathQueryComponent[0xF0];
        [FieldOffset(0x700)] public fixed byte m_pathString[0x8];
        [FieldOffset(0x708)] public fixed byte m_bClosedLoop[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10A8)]
    public unsafe struct C_FuncTrackTrain {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
        [FieldOffset(0x1098)] public fixed byte m_nLongAxis[0x4];
        [FieldOffset(0x109C)] public fixed byte m_flRadius[0x4];
        [FieldOffset(0x10A0)] public fixed byte m_flLineLength[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1920)]
    public unsafe struct C_EconWearable {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1918];
        [FieldOffset(0x1918)] public fixed byte m_nForceSkin[0x4];
        [FieldOffset(0x191C)] public fixed byte m_bAlwaysAllow[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10D0)]
    public unsafe struct C_EnvDecal {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
        [FieldOffset(0x1098)] public fixed byte m_hDecalMaterial[0x8];
        [FieldOffset(0x10A0)] public fixed byte m_flWidth[0x4];
        [FieldOffset(0x10A4)] public fixed byte m_flHeight[0x4];
        [FieldOffset(0x10A8)] public fixed byte m_flDepth[0x4];
        [FieldOffset(0x10AC)] public fixed byte m_nRenderOrder[0x4];
        [FieldOffset(0x10B0)] public fixed byte m_bProjectOnWorld[0x1];
        [FieldOffset(0x10B1)] public fixed byte m_bProjectOnCharacters[0x1];
        [FieldOffset(0x10B2)] public fixed byte m_bProjectOnWater[0x2];
        [FieldOffset(0x10B4)] public fixed byte m_flDepthSortBias[0x1C];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct EntitySpottedState_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_bSpotted[0x4];
        [FieldOffset(0xC)] public fixed byte m_bSpottedByMask[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct fogparams_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte dirPrimary[0xC];
        [FieldOffset(0x14)] public fixed byte colorPrimary[0x4];
        [FieldOffset(0x18)] public fixed byte colorSecondary[0x4];
        [FieldOffset(0x1C)] public fixed byte colorPrimaryLerpTo[0x4];
        [FieldOffset(0x20)] public fixed byte colorSecondaryLerpTo[0x4];
        [FieldOffset(0x24)] public fixed byte start[0x4];
        [FieldOffset(0x28)] public fixed byte end[0x4];
        [FieldOffset(0x2C)] public fixed byte farz[0x4];
        [FieldOffset(0x30)] public fixed byte maxdensity[0x4];
        [FieldOffset(0x34)] public fixed byte exponent[0x4];
        [FieldOffset(0x38)] public fixed byte HDRColorScale[0x4];
        [FieldOffset(0x3C)] public fixed byte skyboxFogFactor[0x4];
        [FieldOffset(0x40)] public fixed byte skyboxFogFactorLerpTo[0x4];
        [FieldOffset(0x44)] public fixed byte startLerpTo[0x4];
        [FieldOffset(0x48)] public fixed byte endLerpTo[0x4];
        [FieldOffset(0x4C)] public fixed byte maxdensityLerpTo[0x4];
        [FieldOffset(0x50)] public fixed byte lerptime[0x4];
        [FieldOffset(0x54)] public fixed byte duration[0x4];
        [FieldOffset(0x58)] public fixed byte blendtobackground[0x4];
        [FieldOffset(0x5C)] public fixed byte scattering[0x4];
        [FieldOffset(0x60)] public fixed byte locallightscale[0x4];
        [FieldOffset(0x64)] public fixed byte enable[0x1];
        [FieldOffset(0x65)] public fixed byte blend[0x1];
        [FieldOffset(0x66)] public fixed byte m_bPadding2[0x1];
        [FieldOffset(0x67)] public fixed byte m_bPadding[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_WeaponM4A1 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1A18)]
    public unsafe struct C_Item {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1918];
        [FieldOffset(0x1918)] public fixed byte m_pReticleHintTextName[0x100];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x600)]
    public unsafe struct C_CSPetPlacement {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1150)]
    public unsafe struct C_Beam {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
        [FieldOffset(0x1098)] public fixed byte m_flFrameRate[0x4];
        [FieldOffset(0x109C)] public fixed byte m_flHDRColorScale[0x4];
        [FieldOffset(0x10A0)] public fixed byte m_flFireTime[0x4];
        [FieldOffset(0x10A4)] public fixed byte m_flDamage[0x4];
        [FieldOffset(0x10A8)] public fixed byte m_nNumBeamEnts[0x4];
        [FieldOffset(0x10AC)] public fixed byte m_queryHandleHalo[0x24];
        [FieldOffset(0x10D0)] public fixed byte m_hBaseMaterial[0x8];
        [FieldOffset(0x10D8)] public fixed byte m_nHaloIndex[0x8];
        [FieldOffset(0x10E0)] public fixed byte m_nBeamType[0x4];
        [FieldOffset(0x10E4)] public fixed byte m_nBeamFlags[0x4];
        [FieldOffset(0x10E8)] public fixed byte m_hAttachEntity[0x28];
        [FieldOffset(0x1110)] public fixed byte m_nAttachIndex[0xC];
        [FieldOffset(0x111C)] public fixed byte m_fWidth[0x4];
        [FieldOffset(0x1120)] public fixed byte m_fEndWidth[0x4];
        [FieldOffset(0x1124)] public fixed byte m_fFadeLength[0x4];
        [FieldOffset(0x1128)] public fixed byte m_fHaloScale[0x4];
        [FieldOffset(0x112C)] public fixed byte m_fAmplitude[0x4];
        [FieldOffset(0x1130)] public fixed byte m_fStartFrame[0x4];
        [FieldOffset(0x1134)] public fixed byte m_fSpeed[0x4];
        [FieldOffset(0x1138)] public fixed byte m_flFrame[0x4];
        [FieldOffset(0x113C)] public fixed byte m_bTurnedOff[0x4];
        [FieldOffset(0x1140)] public fixed byte m_vecEndPos[0xC];
        [FieldOffset(0x114C)] public fixed byte m_hEndEntity[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x720)]
    public unsafe struct C_EnvLightProbeVolume {
        [FieldOffset(0x0)] public fixed byte pad_0[0x698];
        [FieldOffset(0x698)] public fixed byte m_Entity_hLightProbeTexture_AmbientCube[0x8];
        [FieldOffset(0x6A0)] public fixed byte m_Entity_hLightProbeTexture_SDF[0x8];
        [FieldOffset(0x6A8)] public fixed byte m_Entity_hLightProbeTexture_SH2_DC[0x8];
        [FieldOffset(0x6B0)] public fixed byte m_Entity_hLightProbeTexture_SH2_L1[0x8];
        [FieldOffset(0x6B8)] public fixed byte m_Entity_hLightProbeDirectLightIndicesTexture[0x8];
        [FieldOffset(0x6C0)] public fixed byte m_Entity_hLightProbeDirectLightScalarsTexture[0x8];
        [FieldOffset(0x6C8)] public fixed byte m_Entity_hLightProbeDirectLightShadowsTexture[0x8];
        [FieldOffset(0x6D0)] public fixed byte m_Entity_vBoxMins[0xC];
        [FieldOffset(0x6DC)] public fixed byte m_Entity_vBoxMaxs[0xC];
        [FieldOffset(0x6E8)] public fixed byte m_Entity_bMoveable[0x4];
        [FieldOffset(0x6EC)] public fixed byte m_Entity_nHandshake[0x4];
        [FieldOffset(0x6F0)] public fixed byte m_Entity_nPriority[0x4];
        [FieldOffset(0x6F4)] public fixed byte m_Entity_bStartDisabled[0x4];
        [FieldOffset(0x6F8)] public fixed byte m_Entity_nLightProbeSizeX[0x4];
        [FieldOffset(0x6FC)] public fixed byte m_Entity_nLightProbeSizeY[0x4];
        [FieldOffset(0x700)] public fixed byte m_Entity_nLightProbeSizeZ[0x4];
        [FieldOffset(0x704)] public fixed byte m_Entity_nLightProbeAtlasX[0x4];
        [FieldOffset(0x708)] public fixed byte m_Entity_nLightProbeAtlasY[0x4];
        [FieldOffset(0x70C)] public fixed byte m_Entity_nLightProbeAtlasZ[0xD];
        [FieldOffset(0x719)] public fixed byte m_Entity_bEnabled[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x100)]
    public unsafe struct CExplosionTypeData {
        [FieldOffset(0x0)] public fixed byte m_SoundName[0x10];
        [FieldOffset(0x10)] public fixed byte m_ParticleEffect[0xE0];
        [FieldOffset(0xF0)] public fixed byte m_bIsIncindiary[0x1];
        [FieldOffset(0xF1)] public fixed byte m_bHasForces[0x7];
        [FieldOffset(0xF8)] public fixed byte m_DecalType[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10E0)]
    public unsafe struct C_FuncConveyor {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10A0];
        [FieldOffset(0x10A0)] public fixed byte m_vecMoveDirEntitySpace[0xC];
        [FieldOffset(0x10AC)] public fixed byte m_flTargetSpeed[0x4];
        [FieldOffset(0x10B0)] public fixed byte m_nTransitionStartTick[0x4];
        [FieldOffset(0x10B4)] public fixed byte m_nTransitionDurationTicks[0x4];
        [FieldOffset(0x10B8)] public fixed byte m_flTransitionStartSpeed[0x4];
        [FieldOffset(0x10BC)] public fixed byte m_flFrictionScale[0x4];
        [FieldOffset(0x10C0)] public fixed byte m_hConveyorModels[0x18];
        [FieldOffset(0x10D8)] public fixed byte m_flCurrentConveyorOffset[0x4];
        [FieldOffset(0x10DC)] public fixed byte m_flCurrentConveyorSpeed[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1608)]
    public unsafe struct CCSPlayer_WeaponServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD0];
        [FieldOffset(0xD0)] public fixed byte m_flNextAttack[0x4];
        [FieldOffset(0xD4)] public fixed byte m_nOldTotalShootPositionHistoryCount[0x29C];
        [FieldOffset(0x370)] public fixed byte m_nOldTotalInputHistoryCount[0x1250];
        [FieldOffset(0x15C0)] public fixed byte m_networkAnimTiming[0x18];
        [FieldOffset(0x15D8)] public fixed byte m_bBlockInspectUntilNextGraphUpdate[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1298)]
    public unsafe struct C_PhysMagnet {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1268];
        [FieldOffset(0x1268)] public fixed byte m_aAttachedObjectsFromServer[0x18];
        [FieldOffset(0x1280)] public fixed byte m_aAttachedObjects[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x690)]
    public unsafe struct CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
        [FieldOffset(0x0)] public fixed byte pad_0[0x690];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1098)]
    public unsafe struct C_Breakable {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1958)]
    public unsafe struct C_PlantedC4 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1288];
        [FieldOffset(0x1288)] public fixed byte m_bBombTicking[0x4];
        [FieldOffset(0x128C)] public fixed byte m_nBombSite[0x4];
        [FieldOffset(0x1290)] public fixed byte m_nSourceSoundscapeHash[0x8];
        [FieldOffset(0x1298)] public fixed byte m_entitySpottedState[0x18];
        [FieldOffset(0x12B0)] public fixed byte m_flNextGlow[0x4];
        [FieldOffset(0x12B4)] public fixed byte m_flNextBeep[0x4];
        [FieldOffset(0x12B8)] public fixed byte m_flC4Blow[0x4];
        [FieldOffset(0x12BC)] public fixed byte m_bCannotBeDefused[0x1];
        [FieldOffset(0x12BD)] public fixed byte m_bHasExploded[0x3];
        [FieldOffset(0x12C0)] public fixed byte m_flTimerLength[0x4];
        [FieldOffset(0x12C4)] public fixed byte m_bBeingDefused[0x4];
        [FieldOffset(0x12C8)] public fixed byte m_bTriggerWarning[0x4];
        [FieldOffset(0x12CC)] public fixed byte m_bExplodeWarning[0x4];
        [FieldOffset(0x12D0)] public fixed byte m_bC4Activated[0x1];
        [FieldOffset(0x12D1)] public fixed byte m_bTenSecWarning[0x3];
        [FieldOffset(0x12D4)] public fixed byte m_flDefuseLength[0x4];
        [FieldOffset(0x12D8)] public fixed byte m_flDefuseCountDown[0x4];
        [FieldOffset(0x12DC)] public fixed byte m_bBombDefused[0x4];
        [FieldOffset(0x12E0)] public fixed byte m_hBombDefuser[0x8];
        [FieldOffset(0x12E8)] public fixed byte m_AttributeManager[0x610];
        [FieldOffset(0x18F8)] public fixed byte m_hDefuserMultimeter[0x4];
        [FieldOffset(0x18FC)] public fixed byte m_flNextRadarFlashTime[0x4];
        [FieldOffset(0x1900)] public fixed byte m_bRadarFlash[0x4];
        [FieldOffset(0x1904)] public fixed byte m_pBombDefuser[0x4];
        [FieldOffset(0x1908)] public fixed byte m_fLastDefuseTime[0x8];
        [FieldOffset(0x1910)] public fixed byte m_pPredictionOwner[0x8];
        [FieldOffset(0x1918)] public fixed byte m_vecC4ExplodeSpectatePos[0xC];
        [FieldOffset(0x1924)] public fixed byte m_vecC4ExplodeSpectateAng[0xC];
        [FieldOffset(0x1930)] public fixed byte m_flC4ExplodeSpectateDuration[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x108)]
    public unsafe struct CCSCustomHudLayoutState {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_playerSlot[0x4];
        [FieldOffset(0x34)] public fixed byte m_bInputCaptureEnabled[0x4];
        [FieldOffset(0x38)] public fixed byte m_vecHasClasses[0x18];
        [FieldOffset(0x50)] public fixed byte m_vecDialogVariableStrings[0xB8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1D18)]
    public unsafe struct CCSGO_WingmanIntroCharacterPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1D18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x640)]
    public unsafe struct CFilterName {
        [FieldOffset(0x0)] public fixed byte pad_0[0x638];
        [FieldOffset(0x638)] public fixed byte m_iFilterName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12F0)]
    public unsafe struct C_RagdollProp {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1268];
        [FieldOffset(0x1268)] public fixed byte m_ragEnabled[0x18];
        [FieldOffset(0x1280)] public fixed byte m_ragPos[0x18];
        [FieldOffset(0x1298)] public fixed byte m_ragAngles[0x18];
        [FieldOffset(0x12B0)] public fixed byte m_flBlendWeight[0x4];
        [FieldOffset(0x12B4)] public fixed byte m_hRagdollSource[0x4];
        [FieldOffset(0x12B8)] public fixed byte m_iEyeAttachment[0x4];
        [FieldOffset(0x12BC)] public fixed byte m_flBlendWeightCurrent[0x4];
        [FieldOffset(0x12C0)] public fixed byte m_parentPhysicsBoneIndices[0x18];
        [FieldOffset(0x12D8)] public fixed byte m_worldSpaceBoneComputationOrder[0x18];
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
    [StructLayout(LayoutKind.Explicit, Size = 0x1668)]
    public unsafe struct C_MapPreviewParticleSystem {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1668];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1268)]
    public unsafe struct CBaseAnimGraph {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
        [FieldOffset(0x1098)] public fixed byte m_graphControllerManager[0x98];
        [FieldOffset(0x1130)] public fixed byte m_pMainGraphController[0x8];
        [FieldOffset(0x1138)] public fixed byte m_bInitiallyPopulateInterpHistory[0x2];
        [FieldOffset(0x113A)] public fixed byte m_bSuppressAnimEventSounds[0x6];
        [FieldOffset(0x1140)] public fixed byte m_OnLayerCycleUpdated[0x20];
        [FieldOffset(0x1160)] public fixed byte m_OnExternalChoreoGraphChanged[0x20];
        [FieldOffset(0x1180)] public fixed byte m_bAnimGraphUpdateEnabled[0x1];
        [FieldOffset(0x1181)] public fixed byte m_bAnimationUpdateScheduled[0x3];
        [FieldOffset(0x1184)] public fixed byte m_vecForce[0xC];
        [FieldOffset(0x1190)] public fixed byte m_nForceBone[0x8];
        [FieldOffset(0x1198)] public fixed byte m_pClientsideRagdoll[0x8];
        [FieldOffset(0x11A0)] public fixed byte m_bBuiltRagdoll[0x10];
        [FieldOffset(0x11B0)] public fixed byte m_pRagdollControl[0x8];
        [FieldOffset(0x11B8)] public fixed byte m_RagdollPose[0x48];
        [FieldOffset(0x1200)] public fixed byte m_bRagdollEnabled[0x1];
        [FieldOffset(0x1201)] public fixed byte m_bRagdollClientSide[0x1];
        [FieldOffset(0x1202)] public fixed byte m_bShouldUpdateTransformations[0xE];
        [FieldOffset(0x1210)] public fixed byte m_bHasAnimatedMaterialAttributes[0x58];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CPulseCell_InlineNodeSkipSelector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_nFlowNodeID[0x4];
        [FieldOffset(0x4C)] public fixed byte m_bAnd[0x4];
        [FieldOffset(0x50)] public fixed byte m_PassOutflow[0x18];
        [FieldOffset(0x68)] public fixed byte m_FailOutflow[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10A0)]
    public unsafe struct C_LightEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
        [FieldOffset(0x1098)] public fixed byte m_CLightComponent[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_WeaponM249 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1310)]
    public unsafe struct C_LocalTempEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1268];
        [FieldOffset(0x1268)] public fixed byte flags[0x4];
        [FieldOffset(0x126C)] public fixed byte die[0x4];
        [FieldOffset(0x1270)] public fixed byte m_flFrameMax[0x4];
        [FieldOffset(0x1274)] public fixed byte x[0x4];
        [FieldOffset(0x1278)] public fixed byte y[0x4];
        [FieldOffset(0x127C)] public fixed byte fadeSpeed[0x4];
        [FieldOffset(0x1280)] public fixed byte bounceFactor[0x4];
        [FieldOffset(0x1284)] public fixed byte hitSound[0x4];
        [FieldOffset(0x1288)] public fixed byte priority[0x4];
        [FieldOffset(0x128C)] public fixed byte tentOffset[0xC];
        [FieldOffset(0x1298)] public fixed byte m_vecTempEntAngVelocity[0xC];
        [FieldOffset(0x12A4)] public fixed byte tempent_renderamt[0x4];
        [FieldOffset(0x12A8)] public fixed byte m_vecNormal[0xC];
        [FieldOffset(0x12B4)] public fixed byte m_flSpriteScale[0x4];
        [FieldOffset(0x12B8)] public fixed byte m_nFlickerFrame[0x4];
        [FieldOffset(0x12BC)] public fixed byte m_flFrameRate[0x4];
        [FieldOffset(0x12C0)] public fixed byte m_flFrame[0x8];
        [FieldOffset(0x12C8)] public fixed byte m_pszImpactEffect[0x8];
        [FieldOffset(0x12D0)] public fixed byte m_pszParticleEffect[0x8];
        [FieldOffset(0x12D8)] public fixed byte m_bParticleCollision[0x4];
        [FieldOffset(0x12DC)] public fixed byte m_iLastCollisionFrame[0x4];
        [FieldOffset(0x12E0)] public fixed byte m_vLastCollisionOrigin[0xC];
        [FieldOffset(0x12EC)] public fixed byte m_vecTempEntVelocity[0xC];
        [FieldOffset(0x12F8)] public fixed byte m_vecPrevAbsOrigin[0xC];
        [FieldOffset(0x1304)] public fixed byte m_vecTempEntAcceleration[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F60)]
    public unsafe struct C_WeaponTaser {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
        [FieldOffset(0x1F50)] public fixed byte m_fFireTime[0x4];
        [FieldOffset(0x1F54)] public fixed byte m_nLastAttackTick[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x600)]
    public unsafe struct C_PointEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct C_SingleplayRules {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x600)]
    public unsafe struct CLogicalEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1098)]
    public unsafe struct C_PrecipitationBlocker {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x690)]
    public unsafe struct C_CSGO_CounterTerroristTeamIntroCamera {
        [FieldOffset(0x0)] public fixed byte pad_0[0x690];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x620)]
    public unsafe struct C_SoundOpvarSetPathCornerEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x620];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA8)]
    public unsafe struct CPlayer_WeaponServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_hMyWeapons[0x18];
        [FieldOffset(0x60)] public fixed byte m_hActiveWeapon[0x4];
        [FieldOffset(0x64)] public fixed byte m_hLastWeapon[0x4];
        [FieldOffset(0x68)] public fixed byte m_iAmmo[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_WeaponNegev {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_WeaponFiveSeven {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F20)]
    public unsafe struct C_WeaponSawedoff {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1098)]
    public unsafe struct C_TriggerVolume {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
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
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_WeaponMP9 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14B0)]
    public unsafe struct C_DynamicPropAlias_prop_dynamic_override {
        [FieldOffset(0x0)] public fixed byte pad_0[0x14B0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x690)]
    public unsafe struct CEnvSoundscapeTriggerable {
        [FieldOffset(0x0)] public fixed byte pad_0[0x690];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x650)]
    public unsafe struct C_PlayerPing {
        [FieldOffset(0x0)] public fixed byte pad_0[0x630];
        [FieldOffset(0x630)] public fixed byte m_hPlayer[0x4];
        [FieldOffset(0x634)] public fixed byte m_hPingedEntity[0x4];
        [FieldOffset(0x638)] public fixed byte m_iType[0x4];
        [FieldOffset(0x63C)] public fixed byte m_bUrgent[0x1];
        [FieldOffset(0x63D)] public fixed byte m_szPlaceName[0x13];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_AK47 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x650)]
    public unsafe struct C_CSGO_MapPreviewCameraPathNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_szParentPathUniqueID[0x8];
        [FieldOffset(0x608)] public fixed byte m_nPathIndex[0x4];
        [FieldOffset(0x60C)] public fixed byte m_vInTangentLocal[0xC];
        [FieldOffset(0x618)] public fixed byte m_vOutTangentLocal[0xC];
        [FieldOffset(0x624)] public fixed byte m_flFOV[0x4];
        [FieldOffset(0x628)] public fixed byte m_flCameraSpeed[0x4];
        [FieldOffset(0x62C)] public fixed byte m_flEaseIn[0x4];
        [FieldOffset(0x630)] public fixed byte m_flEaseOut[0x4];
        [FieldOffset(0x634)] public fixed byte m_vInTangentWorld[0xC];
        [FieldOffset(0x640)] public fixed byte m_vOutTangentWorld[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x698)]
    public unsafe struct C_CSPlayerResource {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_bHostageAlive[0xC];
        [FieldOffset(0x60C)] public fixed byte m_isHostageFollowingSomeone[0xC];
        [FieldOffset(0x618)] public fixed byte m_iHostageEntityIDs[0x30];
        [FieldOffset(0x648)] public fixed byte m_bombsiteCenterA[0xC];
        [FieldOffset(0x654)] public fixed byte m_bombsiteCenterB[0xC];
        [FieldOffset(0x660)] public fixed byte m_hostageRescueX[0x10];
        [FieldOffset(0x670)] public fixed byte m_hostageRescueY[0x10];
        [FieldOffset(0x680)] public fixed byte m_hostageRescueZ[0x10];
        [FieldOffset(0x690)] public fixed byte m_bEndMatchNextMapAllVoted[0x1];
        [FieldOffset(0x691)] public fixed byte m_foundGoalPositions[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x608)]
    public unsafe struct CSkyboxReference {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_worldGroupId[0x4];
        [FieldOffset(0x604)] public fixed byte m_hSkyCamera[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1FE0)]
    public unsafe struct C_IncendiaryGrenade {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1FE0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x640)]
    public unsafe struct CFilterClass {
        [FieldOffset(0x0)] public fixed byte pad_0[0x638];
        [FieldOffset(0x638)] public fixed byte m_iFilterClass[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x668)]
    public unsafe struct C_PointCameraVFOV {
        [FieldOffset(0x0)] public fixed byte pad_0[0x660];
        [FieldOffset(0x660)] public fixed byte m_flVerticalFOV[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x660)]
    public unsafe struct C_PointCamera {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_FOV[0x4];
        [FieldOffset(0x604)] public fixed byte m_Resolution[0x4];
        [FieldOffset(0x608)] public fixed byte m_bFogEnable[0x4];
        [FieldOffset(0x60C)] public fixed byte m_FogColor[0x4];
        [FieldOffset(0x610)] public fixed byte m_flFogStart[0x4];
        [FieldOffset(0x614)] public fixed byte m_flFogEnd[0x4];
        [FieldOffset(0x618)] public fixed byte m_flFogMaxDensity[0x4];
        [FieldOffset(0x61C)] public fixed byte m_bActive[0x1];
        [FieldOffset(0x61D)] public fixed byte m_bUseScreenAspectRatio[0x3];
        [FieldOffset(0x620)] public fixed byte m_flAspectRatio[0x4];
        [FieldOffset(0x624)] public fixed byte m_bNoSky[0x4];
        [FieldOffset(0x628)] public fixed byte m_fBrightness[0x4];
        [FieldOffset(0x62C)] public fixed byte m_flZFar[0x4];
        [FieldOffset(0x630)] public fixed byte m_flZNear[0x4];
        [FieldOffset(0x634)] public fixed byte m_bCanHLTVUse[0x1];
        [FieldOffset(0x635)] public fixed byte m_bAlignWithParent[0x1];
        [FieldOffset(0x636)] public fixed byte m_bDofEnabled[0x2];
        [FieldOffset(0x638)] public fixed byte m_flDofNearBlurry[0x4];
        [FieldOffset(0x63C)] public fixed byte m_flDofNearCrisp[0x4];
        [FieldOffset(0x640)] public fixed byte m_flDofFarCrisp[0x4];
        [FieldOffset(0x644)] public fixed byte m_flDofFarBlurry[0x4];
        [FieldOffset(0x648)] public fixed byte m_flDofTiltToGround[0x4];
        [FieldOffset(0x64C)] public fixed byte m_TargetFOV[0x4];
        [FieldOffset(0x650)] public fixed byte m_DegreesPerSecond[0x4];
        [FieldOffset(0x654)] public fixed byte m_bIsOn[0x4];
        [FieldOffset(0x658)] public fixed byte m_pNext[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x760)]
    public unsafe struct CPathWithDynamicNodes {
        [FieldOffset(0x0)] public fixed byte pad_0[0x710];
        [FieldOffset(0x710)] public fixed byte m_vecPathNodes[0x20];
        [FieldOffset(0x730)] public fixed byte m_xInitialPathWorldToLocal[0x20];
        [FieldOffset(0x750)] public fixed byte m_eDesiredDirection[0x4];
        [FieldOffset(0x754)] public fixed byte m_bIgnoreParentRotation[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x638)]
    public unsafe struct CBaseFilter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_bNegated[0x8];
        [FieldOffset(0x608)] public fixed byte m_OnPass[0x18];
        [FieldOffset(0x620)] public fixed byte m_OnFail[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct WeaponPurchaseTracker_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_weaponPurchases[0x68];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x630)]
    public unsafe struct CMapInfo {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_iBuyingStatus[0x4];
        [FieldOffset(0x604)] public fixed byte m_flBombRadius[0x4];
        [FieldOffset(0x608)] public fixed byte m_iPetPopulation[0x4];
        [FieldOffset(0x60C)] public fixed byte m_bUseNormalSpawnsForDM[0x1];
        [FieldOffset(0x60D)] public fixed byte m_bDisableAutoGeneratedDMSpawns[0x3];
        [FieldOffset(0x610)] public fixed byte m_flBotMaxVisionDistance[0x4];
        [FieldOffset(0x614)] public fixed byte m_iHostageCount[0x4];
        [FieldOffset(0x618)] public fixed byte m_bFadePlayerVisibilityFarZ[0x1];
        [FieldOffset(0x619)] public fixed byte m_bRainTraceToSkyEnabled[0x1];
        [FieldOffset(0x61A)] public fixed byte m_bGPUCullSkybox[0x2];
        [FieldOffset(0x61C)] public fixed byte m_flEnvRainStrength[0x4];
        [FieldOffset(0x620)] public fixed byte m_flEnvPuddleRippleStrength[0x4];
        [FieldOffset(0x624)] public fixed byte m_flEnvPuddleRippleDirection[0x4];
        [FieldOffset(0x628)] public fixed byte m_flEnvWetnessCoverage[0x4];
        [FieldOffset(0x62C)] public fixed byte m_flEnvWetnessDryingAmount[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x690)]
    public unsafe struct C_CSGO_EndOfMatchCamera {
        [FieldOffset(0x0)] public fixed byte pad_0[0x690];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x12B0)]
    public unsafe struct C_BaseGrenade {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1268];
        [FieldOffset(0x1268)] public fixed byte m_bHasWarnedAI[0x1];
        [FieldOffset(0x1269)] public fixed byte m_bIsSmokeGrenade[0x1];
        [FieldOffset(0x126A)] public fixed byte m_bIsLive[0x2];
        [FieldOffset(0x126C)] public fixed byte m_DmgRadius[0x4];
        [FieldOffset(0x1270)] public fixed byte m_flDetonateTime[0x4];
        [FieldOffset(0x1274)] public fixed byte m_flWarnAITime[0x4];
        [FieldOffset(0x1278)] public fixed byte m_flDamage[0x8];
        [FieldOffset(0x1280)] public fixed byte m_iszBounceSound[0x8];
        [FieldOffset(0x1288)] public fixed byte m_ExplosionSound[0x8];
        [FieldOffset(0x1290)] public fixed byte m_hThrower[0x18];
        [FieldOffset(0x12A8)] public fixed byte m_flNextAttack[0x4];
        [FieldOffset(0x12AC)] public fixed byte m_hOriginalThrower[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x11A8)]
    public unsafe struct C_PlayerSprayDecal {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
        [FieldOffset(0x1098)] public fixed byte m_nUniqueID[0x4];
        [FieldOffset(0x109C)] public fixed byte m_unAccountID[0x4];
        [FieldOffset(0x10A0)] public fixed byte m_unTraceID[0x4];
        [FieldOffset(0x10A4)] public fixed byte m_rtGcTime[0x4];
        [FieldOffset(0x10A8)] public fixed byte m_vecEndPos[0xC];
        [FieldOffset(0x10B4)] public fixed byte m_vecStart[0xC];
        [FieldOffset(0x10C0)] public fixed byte m_vecLeft[0xC];
        [FieldOffset(0x10CC)] public fixed byte m_vecNormal[0xC];
        [FieldOffset(0x10D8)] public fixed byte m_nPlayer[0x4];
        [FieldOffset(0x10DC)] public fixed byte m_nEntity[0x4];
        [FieldOffset(0x10E0)] public fixed byte m_nHitbox[0x4];
        [FieldOffset(0x10E4)] public fixed byte m_flCreationTime[0x4];
        [FieldOffset(0x10E8)] public fixed byte m_nTintID[0x4];
        [FieldOffset(0x10EC)] public fixed byte m_nVersion[0x1];
        [FieldOffset(0x10ED)] public fixed byte m_ubSignature[0x8B];
        [FieldOffset(0x1178)] public fixed byte m_SprayRenderHelper[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CEntityIdentity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x14];
        [FieldOffset(0x14)] public fixed byte m_nameStringTableIndex[0x4];
        [FieldOffset(0x18)] public fixed byte m_name[0x8];
        [FieldOffset(0x20)] public fixed byte m_designerName[0x10];
        [FieldOffset(0x30)] public fixed byte m_flags[0x8];
        [FieldOffset(0x38)] public fixed byte m_worldGroupId[0x4];
        [FieldOffset(0x3C)] public fixed byte m_fDataObjectTypes[0x4];
        [FieldOffset(0x40)] public fixed byte m_PathIndex[0x8];
        [FieldOffset(0x48)] public fixed byte m_pAttributes[0x8];
        [FieldOffset(0x50)] public fixed byte m_pPrev[0x8];
        [FieldOffset(0x58)] public fixed byte m_pNext[0x8];
        [FieldOffset(0x60)] public fixed byte m_pPrevByClass[0x8];
        [FieldOffset(0x68)] public fixed byte m_pNextByClass[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct CPulseCell_LimitCount__Criteria_t {
        [FieldOffset(0x0)] public fixed byte m_bLimitCountPasses[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1460)]
    public unsafe struct C_CS2HudModelArms {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1460];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x258)]
    public unsafe struct CBasePlayerVData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_sModelName[0xE0];
        [FieldOffset(0x108)] public fixed byte m_sModelNameAg2Override[0xE0];
        [FieldOffset(0x1E8)] public fixed byte m_flHeadDamageMultiplier[0x10];
        [FieldOffset(0x1F8)] public fixed byte m_flChestDamageMultiplier[0x10];
        [FieldOffset(0x208)] public fixed byte m_flStomachDamageMultiplier[0x10];
        [FieldOffset(0x218)] public fixed byte m_flArmDamageMultiplier[0x10];
        [FieldOffset(0x228)] public fixed byte m_flLegDamageMultiplier[0x10];
        [FieldOffset(0x238)] public fixed byte m_flHoldBreathTime[0x4];
        [FieldOffset(0x23C)] public fixed byte m_flDrowningDamageInterval[0x4];
        [FieldOffset(0x240)] public fixed byte m_nDrowningDamageInitial[0x4];
        [FieldOffset(0x244)] public fixed byte m_nDrowningDamageMax[0x4];
        [FieldOffset(0x248)] public fixed byte m_nWaterSpeed[0x4];
        [FieldOffset(0x24C)] public fixed byte m_flUseRange[0x4];
        [FieldOffset(0x250)] public fixed byte m_flUseAngleTolerance[0x4];
        [FieldOffset(0x254)] public fixed byte m_flCrouchTime[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10A0)]
    public unsafe struct C_LightSpotEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10A0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CCSGameModeRules_Deathmatch {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_flDMBonusStartTime[0x4];
        [FieldOffset(0x34)] public fixed byte m_flDMBonusTimeLength[0x4];
        [FieldOffset(0x38)] public fixed byte m_sDMBonusWeapon[0x8];
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
    [StructLayout(LayoutKind.Explicit, Size = 0x1118)]
    public unsafe struct C_Sprite {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1098];
        [FieldOffset(0x1098)] public fixed byte m_hSpriteMaterial[0x8];
        [FieldOffset(0x10A0)] public fixed byte m_hAttachedToEntity[0x4];
        [FieldOffset(0x10A4)] public fixed byte m_nAttachment[0x4];
        [FieldOffset(0x10A8)] public fixed byte m_flSpriteFramerate[0x4];
        [FieldOffset(0x10AC)] public fixed byte m_flFrame[0x4];
        [FieldOffset(0x10B0)] public fixed byte m_flDieTime[0x10];
        [FieldOffset(0x10C0)] public fixed byte m_nBrightness[0x4];
        [FieldOffset(0x10C4)] public fixed byte m_flBrightnessDuration[0x4];
        [FieldOffset(0x10C8)] public fixed byte m_flSpriteScale[0x4];
        [FieldOffset(0x10CC)] public fixed byte m_flScaleDuration[0x4];
        [FieldOffset(0x10D0)] public fixed byte m_bWorldSpaceScale[0x4];
        [FieldOffset(0x10D4)] public fixed byte m_flGlowProxySize[0x4];
        [FieldOffset(0x10D8)] public fixed byte m_flHDRColorScale[0x4];
        [FieldOffset(0x10DC)] public fixed byte m_flLastTime[0x4];
        [FieldOffset(0x10E0)] public fixed byte m_flMaxFrame[0x4];
        [FieldOffset(0x10E4)] public fixed byte m_flStartScale[0x4];
        [FieldOffset(0x10E8)] public fixed byte m_flDestScale[0x4];
        [FieldOffset(0x10EC)] public fixed byte m_flScaleTimeStart[0x4];
        [FieldOffset(0x10F0)] public fixed byte m_nStartBrightness[0x4];
        [FieldOffset(0x10F4)] public fixed byte m_nDestBrightness[0x4];
        [FieldOffset(0x10F8)] public fixed byte m_flBrightnessTimeStart[0x10];
        [FieldOffset(0x1108)] public fixed byte m_nSpriteWidth[0x4];
        [FieldOffset(0x110C)] public fixed byte m_nSpriteHeight[0x4];
        [FieldOffset(0x1110)] public fixed byte m_flSpeed[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x610)]
    public unsafe struct C_CsmFovOverride {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_cameraName[0x8];
        [FieldOffset(0x608)] public fixed byte m_flCsmFovOverrideValue[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F50)]
    public unsafe struct C_WeaponGlock {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1F50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x13F0)]
    public unsafe struct C_PhysicsProp {
        [FieldOffset(0x0)] public fixed byte pad_0[0x13E0];
        [FieldOffset(0x13E0)] public fixed byte m_bAwake[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x640)]
    public unsafe struct CFilterTeam {
        [FieldOffset(0x0)] public fixed byte pad_0[0x638];
        [FieldOffset(0x638)] public fixed byte m_iFilterTeam[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x520)]
    public unsafe struct CBasePlayerWeaponVData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_szWorldModel[0xE0];
        [FieldOffset(0x108)] public fixed byte m_szWorldModelAg2Override[0xE0];
        [FieldOffset(0x1E8)] public fixed byte m_sToolsOnlyOwnerModelName[0xE0];
        [FieldOffset(0x2C8)] public fixed byte m_bBuiltRightHanded[0x1];
        [FieldOffset(0x2C9)] public fixed byte m_bAllowFlipping[0x7];
        [FieldOffset(0x2D0)] public fixed byte m_sMuzzleAttachment[0x20];
        [FieldOffset(0x2F0)] public fixed byte m_szMuzzleFlashParticle[0xE0];
        [FieldOffset(0x3D0)] public fixed byte m_szMuzzleFlashParticleConfig[0x8];
        [FieldOffset(0x3D8)] public fixed byte m_szBarrelSmokeParticle[0xE0];
        [FieldOffset(0x4B8)] public fixed byte m_nMuzzleSmokeShotThreshold[0x4];
        [FieldOffset(0x4BC)] public fixed byte m_flMuzzleSmokeTimeout[0x4];
        [FieldOffset(0x4C0)] public fixed byte m_flMuzzleSmokeDecrementRate[0x4];
        [FieldOffset(0x4C4)] public fixed byte m_bGenerateMuzzleLight[0x1];
        [FieldOffset(0x4C5)] public fixed byte m_bShouldAnimateInWorld[0x1];
        [FieldOffset(0x4C6)] public fixed byte m_bLinkedCooldowns[0x1];
        [FieldOffset(0x4C7)] public fixed byte m_iFlags[0x1];
        [FieldOffset(0x4C8)] public fixed byte m_iWeight[0x4];
        [FieldOffset(0x4CC)] public fixed byte m_bAutoSwitchTo[0x1];
        [FieldOffset(0x4CD)] public fixed byte m_bAutoSwitchFrom[0x1];
        [FieldOffset(0x4CE)] public fixed byte m_nPrimaryAmmoType[0x1];
        [FieldOffset(0x4CF)] public fixed byte m_nSecondaryAmmoType[0x1];
        [FieldOffset(0x4D0)] public fixed byte m_iMaxClip1[0x4];
        [FieldOffset(0x4D4)] public fixed byte m_iMaxClip2[0x4];
        [FieldOffset(0x4D8)] public fixed byte m_iDefaultClip1[0x4];
        [FieldOffset(0x4DC)] public fixed byte m_iDefaultClip2[0x4];
        [FieldOffset(0x4E0)] public fixed byte m_bReserveAmmoAsClips[0x1];
        [FieldOffset(0x4E1)] public fixed byte m_bTreatAsSingleClip[0x1];
        [FieldOffset(0x4E2)] public fixed byte m_bKeepLoadedAmmo[0x2];
        [FieldOffset(0x4E4)] public fixed byte m_iRumbleEffect[0x4];
        [FieldOffset(0x4E8)] public fixed byte m_flDropSpeed[0x4];
        [FieldOffset(0x4EC)] public fixed byte m_iSlot[0x4];
        [FieldOffset(0x4F0)] public fixed byte m_iPosition[0x8];
        [FieldOffset(0x4F8)] public fixed byte m_aShootSounds[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1FE0)]
    public unsafe struct C_SmokeGrenade {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1FE0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x37D0)]
    public unsafe struct C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel {
        [FieldOffset(0x0)] public fixed byte pad_0[0x37D0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1D18)]
    public unsafe struct CCSGO_RushIntroCharacterPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1D18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x600)]
    public unsafe struct CInfoParticleTarget {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CCSPlayer_DamageReactServices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1300)]
    public unsafe struct C_PointClientUIWorldPanel {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10D0];
        [FieldOffset(0x10D0)] public fixed byte m_bForceRecreateNextUpdate[0x1];
        [FieldOffset(0x10D1)] public fixed byte m_bMoveViewToPlayerNextThink[0x1];
        [FieldOffset(0x10D2)] public fixed byte m_bCheckCSSClasses[0xE];
        [FieldOffset(0x10E0)] public fixed byte m_anchorDeltaTransform[0x190];
        [FieldOffset(0x1270)] public fixed byte m_pOffScreenIndicator[0x28];
        [FieldOffset(0x1298)] public fixed byte m_bIgnoreInput[0x1];
        [FieldOffset(0x1299)] public fixed byte m_bLit[0x1];
        [FieldOffset(0x129A)] public fixed byte m_bFollowPlayerAcrossTeleport[0x2];
        [FieldOffset(0x129C)] public fixed byte m_flWidth[0x4];
        [FieldOffset(0x12A0)] public fixed byte m_flHeight[0x4];
        [FieldOffset(0x12A4)] public fixed byte m_flDPI[0x4];
        [FieldOffset(0x12A8)] public fixed byte m_flWindowUIScale[0x4];
        [FieldOffset(0x12AC)] public fixed byte m_flInteractDistance[0x4];
        [FieldOffset(0x12B0)] public fixed byte m_flDepthOffset[0x4];
        [FieldOffset(0x12B4)] public fixed byte m_unOwnerContext[0x4];
        [FieldOffset(0x12B8)] public fixed byte m_unHorizontalAlign[0x4];
        [FieldOffset(0x12BC)] public fixed byte m_unVerticalAlign[0x4];
        [FieldOffset(0x12C0)] public fixed byte m_unOrientation[0x4];
        [FieldOffset(0x12C4)] public fixed byte m_bAllowInteractionFromAllSceneWorlds[0x4];
        [FieldOffset(0x12C8)] public fixed byte m_vecCSSClasses[0x18];
        [FieldOffset(0x12E0)] public fixed byte m_bOpaque[0x1];
        [FieldOffset(0x12E1)] public fixed byte m_bNoDepth[0x1];
        [FieldOffset(0x12E2)] public fixed byte m_bVisibleWhenParentNoDraw[0x1];
        [FieldOffset(0x12E3)] public fixed byte m_bRenderBackface[0x1];
        [FieldOffset(0x12E4)] public fixed byte m_bUseOffScreenIndicator[0x1];
        [FieldOffset(0x12E5)] public fixed byte m_bExcludeFromSaveGames[0x1];
        [FieldOffset(0x12E6)] public fixed byte m_bGrabbable[0x1];
        [FieldOffset(0x12E7)] public fixed byte m_bOnlyRenderToTexture[0x1];
        [FieldOffset(0x12E8)] public fixed byte m_bDisableMipGen[0x4];
        [FieldOffset(0x12EC)] public fixed byte m_nExplicitImageLayout[0x4];
        [FieldOffset(0x12F0)] public fixed byte m_bIgnoreParentOrientation[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x648)]
    public unsafe struct C_EntityFlame {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
        [FieldOffset(0x600)] public fixed byte m_hEntAttached[0x28];
        [FieldOffset(0x628)] public fixed byte m_hOldAttached[0x4];
        [FieldOffset(0x62C)] public fixed byte m_bCheapEffect[0x1C];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1268)]
    public unsafe struct CBaseAnimGraphAlias_baseanimating {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1268];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x800)]
    public unsafe struct CBasePlayerController {
        [FieldOffset(0x0)] public fixed byte pad_0[0x608];
        [FieldOffset(0x608)] public fixed byte m_CommandContext[0xA8];
        [FieldOffset(0x6B0)] public fixed byte m_nInButtonsWhichAreToggles[0x8];
        [FieldOffset(0x6B8)] public fixed byte m_nTickBase[0x4];
        [FieldOffset(0x6BC)] public fixed byte m_hPawn[0x4];
        [FieldOffset(0x6C0)] public fixed byte m_bKnownTeamMismatch[0x4];
        [FieldOffset(0x6C4)] public fixed byte m_hPredictedPawn[0x8];
        [FieldOffset(0x6CC)] public fixed byte m_nSplitScreenSlot[0x4];
        [FieldOffset(0x6D0)] public fixed byte m_hSplitOwner[0x8];
        [FieldOffset(0x6D8)] public fixed byte m_hSplitScreenPlayers[0x18];
        [FieldOffset(0x6F0)] public fixed byte m_bIsHLTV[0x4];
        [FieldOffset(0x6F4)] public fixed byte m_iConnected[0x4];
        [FieldOffset(0x6F8)] public fixed byte m_iMostConnected[0x4];
        [FieldOffset(0x6FC)] public fixed byte m_iszPlayerName[0x8C];
        [FieldOffset(0x788)] public fixed byte m_steamID[0x8];
        [FieldOffset(0x790)] public fixed byte m_bIsLocalPlayerController[0x1];
        [FieldOffset(0x791)] public fixed byte m_bNoClipEnabled[0x3];
        [FieldOffset(0x794)] public fixed byte m_iDesiredFOV[0x6C];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x600)]
    public unsafe struct C_CSGO_EndOfMatchLineupEndpoint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x600];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct GeneratedTextureHandle_t {
        [FieldOffset(0x0)] public fixed byte m_strBitmapName[0x60];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x138)]
    public unsafe struct CompositeMaterialInputContainer_t {
        [FieldOffset(0x0)] public fixed byte m_bEnabled[0x4];
        [FieldOffset(0x4)] public fixed byte m_nCompositeMaterialInputContainerSourceType[0x4];
        [FieldOffset(0x8)] public fixed byte m_strSpecificContainerMaterial[0xE0];
        [FieldOffset(0xE8)] public fixed byte m_strAttrName[0x8];
        [FieldOffset(0xF0)] public fixed byte m_strAlias[0x8];
        [FieldOffset(0xF8)] public fixed byte m_vecLooseVariables[0x18];
        [FieldOffset(0x110)] public fixed byte m_strAttrNameForVar[0x8];
        [FieldOffset(0x118)] public fixed byte m_bExposeExternally[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CompositeMaterialAssemblyProcedure_t {
        [FieldOffset(0x0)] public fixed byte m_vecCompMatIncludes[0x18];
        [FieldOffset(0x18)] public fixed byte m_vecMatchFilters[0x18];
        [FieldOffset(0x30)] public fixed byte m_vecCompositeInputContainers[0x18];
        [FieldOffset(0x48)] public fixed byte m_vecPropertyMutators[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x288)]
    public unsafe struct CompositeMaterialInputLooseVariable_t {
        [FieldOffset(0x0)] public fixed byte m_strName[0x8];
        [FieldOffset(0x8)] public fixed byte m_bExposeExternally[0x8];
        [FieldOffset(0x10)] public fixed byte m_strExposedFriendlyName[0x8];
        [FieldOffset(0x18)] public fixed byte m_strExposedFriendlyGroupName[0x8];
        [FieldOffset(0x20)] public fixed byte m_bExposedVariableIsFixedRange[0x8];
        [FieldOffset(0x28)] public fixed byte m_strExposedVisibleWhenTrue[0x8];
        [FieldOffset(0x30)] public fixed byte m_strExposedHiddenWhenTrue[0x8];
        [FieldOffset(0x38)] public fixed byte m_strExposedValueList[0x8];
        [FieldOffset(0x40)] public fixed byte m_nVariableType[0x4];
        [FieldOffset(0x44)] public fixed byte m_bValueBoolean[0x4];
        [FieldOffset(0x48)] public fixed byte m_nValueIntX[0x4];
        [FieldOffset(0x4C)] public fixed byte m_nValueIntY[0x4];
        [FieldOffset(0x50)] public fixed byte m_nValueIntZ[0x4];
        [FieldOffset(0x54)] public fixed byte m_nValueIntW[0x4];
        [FieldOffset(0x58)] public fixed byte m_bHasFloatBounds[0x4];
        [FieldOffset(0x5C)] public fixed byte m_flValueFloatX[0x4];
        [FieldOffset(0x60)] public fixed byte m_flValueFloatX_Min[0x4];
        [FieldOffset(0x64)] public fixed byte m_flValueFloatX_Max[0x4];
        [FieldOffset(0x68)] public fixed byte m_flValueFloatY[0x4];
        [FieldOffset(0x6C)] public fixed byte m_flValueFloatY_Min[0x4];
        [FieldOffset(0x70)] public fixed byte m_flValueFloatY_Max[0x4];
        [FieldOffset(0x74)] public fixed byte m_flValueFloatZ[0x4];
        [FieldOffset(0x78)] public fixed byte m_flValueFloatZ_Min[0x4];
        [FieldOffset(0x7C)] public fixed byte m_flValueFloatZ_Max[0x4];
        [FieldOffset(0x80)] public fixed byte m_flValueFloatW[0x4];
        [FieldOffset(0x84)] public fixed byte m_flValueFloatW_Min[0x4];
        [FieldOffset(0x88)] public fixed byte m_flValueFloatW_Max[0x4];
        [FieldOffset(0x8C)] public fixed byte m_cValueColor4[0x4];
        [FieldOffset(0x90)] public fixed byte m_nValueSystemVar[0x8];
        [FieldOffset(0x98)] public fixed byte m_strResourceMaterial[0xE0];
        [FieldOffset(0x178)] public fixed byte m_strTextureContentAssetPath[0x8];
        [FieldOffset(0x180)] public fixed byte m_strTextureRuntimeResourcePath[0xE0];
        [FieldOffset(0x260)] public fixed byte m_strTextureCompilationVtexTemplate[0x8];
        [FieldOffset(0x268)] public fixed byte m_nTextureType[0x8];
        [FieldOffset(0x270)] public fixed byte m_strString[0x8];
        [FieldOffset(0x278)] public fixed byte m_strPanoramaPanelPath[0x8];
        [FieldOffset(0x280)] public fixed byte m_nPanoramaRenderRes[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct screenshake_t {
        [FieldOffset(0x0)] public fixed byte endtime[0x4];
        [FieldOffset(0x4)] public fixed byte duration[0x4];
        [FieldOffset(0x8)] public fixed byte amplitude[0x4];
        [FieldOffset(0xC)] public fixed byte frequency[0x4];
        [FieldOffset(0x10)] public fixed byte nextShake[0x4];
        [FieldOffset(0x14)] public fixed byte offset[0xC];
        [FieldOffset(0x20)] public fixed byte angle[0x8];
        [FieldOffset(0x28)] public fixed byte direction[0xC];
        [FieldOffset(0x34)] public fixed byte nShakeType[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x240)]
    public unsafe struct CCS2UIPawnGraphController {
        [FieldOffset(0x0)] public fixed byte pad_0[0xC0];
        [FieldOffset(0xC0)] public fixed byte m_nAnimationSeed[0x18];
        [FieldOffset(0xD8)] public fixed byte m_characterMode[0x18];
        [FieldOffset(0xF0)] public fixed byte m_bCharacterModeReset[0x18];
        [FieldOffset(0x108)] public fixed byte m_nTeamPreviewVariant[0x18];
        [FieldOffset(0x120)] public fixed byte m_nTeamPreviewRandom[0x18];
        [FieldOffset(0x138)] public fixed byte m_nTeamPreviewPosition[0x18];
        [FieldOffset(0x150)] public fixed byte m_endOfMatchCelebration[0x18];
        [FieldOffset(0x168)] public fixed byte m_action[0x18];
        [FieldOffset(0x180)] public fixed byte m_bannerAnimation[0x18];
        [FieldOffset(0x198)] public fixed byte m_weaponCategory[0x18];
        [FieldOffset(0x1B0)] public fixed byte m_weaponType[0x18];
        [FieldOffset(0x1C8)] public fixed byte m_weaponState[0x18];
        [FieldOffset(0x1E0)] public fixed byte m_inspectTurnAngle[0x18];
        [FieldOffset(0x1F8)] public fixed byte m_nChickSnapshotVariant[0x18];
        [FieldOffset(0x210)] public fixed byte m_nChickLifeStage[0x18];
        [FieldOffset(0x228)] public fixed byte m_bCT[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct inv_image_light_barn_t {
        [FieldOffset(0x0)] public fixed byte color[0xC];
        [FieldOffset(0xC)] public fixed byte angle[0xC];
        [FieldOffset(0x18)] public fixed byte brightness[0x4];
        [FieldOffset(0x1C)] public fixed byte orbit_distance[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct inv_image_map_t {
        [FieldOffset(0x0)] public fixed byte map_name[0x8];
        [FieldOffset(0x8)] public fixed byte map_rotation[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1C)]
    public unsafe struct inv_image_light_fill_t {
        [FieldOffset(0x0)] public fixed byte color[0xC];
        [FieldOffset(0xC)] public fixed byte angle[0xC];
        [FieldOffset(0x18)] public fixed byte brightness[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct CInterpolatedValue {
        [FieldOffset(0x0)] public fixed byte m_flStartTime[0x4];
        [FieldOffset(0x4)] public fixed byte m_flEndTime[0x4];
        [FieldOffset(0x8)] public fixed byte m_flStartValue[0x4];
        [FieldOffset(0xC)] public fixed byte m_flEndValue[0x4];
        [FieldOffset(0x10)] public fixed byte m_nInterpType[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct inv_image_item_t {
        [FieldOffset(0x0)] public fixed byte position[0xC];
        [FieldOffset(0xC)] public fixed byte angle[0xC];
        [FieldOffset(0x18)] public fixed byte pose_sequence[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct TimedEvent {
        [FieldOffset(0x0)] public fixed byte m_TimeBetweenEvents[0x4];
        [FieldOffset(0x4)] public fixed byte m_fNextEvent[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2E0)]
    public unsafe struct CFlashlightEffect {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_bIsOn[0x10];
        [FieldOffset(0x20)] public fixed byte m_bMuzzleFlashEnabled[0x4];
        [FieldOffset(0x24)] public fixed byte m_flMuzzleFlashBrightness[0xC];
        [FieldOffset(0x30)] public fixed byte m_quatMuzzleFlashOrientation[0x10];
        [FieldOffset(0x40)] public fixed byte m_vecMuzzleFlashOrigin[0xC];
        [FieldOffset(0x4C)] public fixed byte m_flFov[0x4];
        [FieldOffset(0x50)] public fixed byte m_flFarZ[0x4];
        [FieldOffset(0x54)] public fixed byte m_flLinearAtten[0x4];
        [FieldOffset(0x58)] public fixed byte m_bCastsShadows[0x4];
        [FieldOffset(0x5C)] public fixed byte m_flCurrentPullBackDist[0x4];
        [FieldOffset(0x60)] public fixed byte m_FlashlightTexture[0x8];
        [FieldOffset(0x68)] public fixed byte m_MuzzleFlashTexture[0x8];
        [FieldOffset(0x70)] public fixed byte m_textureName[0x270];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct inv_image_camera_t {
        [FieldOffset(0x0)] public fixed byte angle[0xC];
        [FieldOffset(0xC)] public fixed byte fov_h[0x4];
        [FieldOffset(0x10)] public fixed byte fov_v[0x4];
        [FieldOffset(0x14)] public fixed byte znear[0x4];
        [FieldOffset(0x18)] public fixed byte zfar[0x4];
        [FieldOffset(0x1C)] public fixed byte target[0xC];
        [FieldOffset(0x28)] public fixed byte target_nudge[0xC];
        [FieldOffset(0x34)] public fixed byte orbit_distance[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x100)]
    public unsafe struct CInventoryImageData {
        [FieldOffset(0x0)] public fixed byte m_nNodeType[0x8];
        [FieldOffset(0x8)] public fixed byte name[0x8];
        [FieldOffset(0x10)] public fixed byte inventory_image_data[0xF0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct inv_image_clearcolor_t {
        [FieldOffset(0x0)] public fixed byte color[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA8)]
    public unsafe struct C_CommandContext {
        [FieldOffset(0x0)] public fixed byte needsprocessing[0xA0];
        [FieldOffset(0xA0)] public fixed byte command_number[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x218)]
    public unsafe struct CompositeMaterialEditorPoint_t {
        [FieldOffset(0x0)] public fixed byte m_ModelName[0xE0];
        [FieldOffset(0xE0)] public fixed byte m_nSequenceIndex[0x4];
        [FieldOffset(0xE4)] public fixed byte m_flCycle[0x4];
        [FieldOffset(0xE8)] public fixed byte m_KVModelStateChoices[0x10];
        [FieldOffset(0xF8)] public fixed byte m_bEnableChildModel[0x8];
        [FieldOffset(0x100)] public fixed byte m_ChildModelName[0xE0];
        [FieldOffset(0x1E0)] public fixed byte m_vecCompositeMaterialAssemblyProcedures[0x18];
        [FieldOffset(0x1F8)] public fixed byte m_vecCompositeMaterials[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CPlayerSprayDecalRenderHelper {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct C_IronSightController {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_bIronSightAvailable[0x4];
        [FieldOffset(0x14)] public fixed byte m_flIronSightAmount[0x4];
        [FieldOffset(0x18)] public fixed byte m_flIronSightAmountGained[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flIronSightAmountBiased[0x4];
        [FieldOffset(0x20)] public fixed byte m_flIronSightAmount_Interpolated[0x4];
        [FieldOffset(0x24)] public fixed byte m_flIronSightAmountGained_Interpolated[0x4];
        [FieldOffset(0x28)] public fixed byte m_flIronSightAmountBiased_Interpolated[0x4];
        [FieldOffset(0x2C)] public fixed byte m_flInterpolationLastUpdated[0x4];
        [FieldOffset(0x30)] public fixed byte m_angDeltaAverage[0x60];
        [FieldOffset(0x90)] public fixed byte m_angViewLast[0xC];
        [FieldOffset(0x9C)] public fixed byte m_vecDotCoords[0x8];
        [FieldOffset(0xA4)] public fixed byte m_flFiringInaccuracyExtraWidthMultiplier[0x4];
        [FieldOffset(0xA8)] public fixed byte m_flSpeedRatio[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CompMatMutatorCondition_t {
        [FieldOffset(0x0)] public fixed byte m_nMutatorCondition[0x8];
        [FieldOffset(0x8)] public fixed byte m_strMutatorConditionContainerName[0x8];
        [FieldOffset(0x10)] public fixed byte m_strMutatorConditionContainerVarName[0x8];
        [FieldOffset(0x18)] public fixed byte m_strMutatorConditionContainerVarValue[0x8];
        [FieldOffset(0x20)] public fixed byte m_bPassWhenTrue[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xF0)]
    public unsafe struct inv_image_data_t {
        [FieldOffset(0x0)] public fixed byte map[0x10];
        [FieldOffset(0x10)] public fixed byte item[0x20];
        [FieldOffset(0x30)] public fixed byte camera[0x38];
        [FieldOffset(0x68)] public fixed byte lightsun[0x1C];
        [FieldOffset(0x84)] public fixed byte lightfill[0x1C];
        [FieldOffset(0xA0)] public fixed byte light0[0x20];
        [FieldOffset(0xC0)] public fixed byte light1[0x20];
        [FieldOffset(0xE0)] public fixed byte clearcolor[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x390)]
    public unsafe struct CompMatPropertyMutator_t {
        [FieldOffset(0x0)] public fixed byte m_bEnabled[0x4];
        [FieldOffset(0x4)] public fixed byte m_nMutatorCommandType[0x4];
        [FieldOffset(0x8)] public fixed byte m_strInitWith_Container[0x8];
        [FieldOffset(0x10)] public fixed byte m_strCopyProperty_InputContainerSrc[0x8];
        [FieldOffset(0x18)] public fixed byte m_strCopyProperty_InputContainerProperty[0x8];
        [FieldOffset(0x20)] public fixed byte m_strCopyProperty_TargetProperty[0x8];
        [FieldOffset(0x28)] public fixed byte m_strRandomRollInputVars_SeedInputVar[0x8];
        [FieldOffset(0x30)] public fixed byte m_vecRandomRollInputVars_InputVarsToRoll[0x18];
        [FieldOffset(0x48)] public fixed byte m_strCopyMatchingKeys_InputContainerSrc[0x8];
        [FieldOffset(0x50)] public fixed byte m_strCopyKeysWithSuffix_InputContainerSrc[0x8];
        [FieldOffset(0x58)] public fixed byte m_strCopyKeysWithSuffix_FindSuffix[0x8];
        [FieldOffset(0x60)] public fixed byte m_strCopyKeysWithSuffix_ReplaceSuffix[0x8];
        [FieldOffset(0x68)] public fixed byte m_nSetValue_Value[0x288];
        [FieldOffset(0x2F0)] public fixed byte m_strGenerateTexture_TargetParam[0x8];
        [FieldOffset(0x2F8)] public fixed byte m_strGenerateTexture_InitialContainer[0x8];
        [FieldOffset(0x300)] public fixed byte m_nResolution[0x4];
        [FieldOffset(0x304)] public fixed byte m_bIsScratchTarget[0x4];
        [FieldOffset(0x308)] public fixed byte m_strCompressionFormat[0x8];
        [FieldOffset(0x310)] public fixed byte m_bSplatDebugInfo[0x1];
        [FieldOffset(0x311)] public fixed byte m_bCaptureInRenderDoc[0x7];
        [FieldOffset(0x318)] public fixed byte m_vecTexGenInstructions[0x18];
        [FieldOffset(0x330)] public fixed byte m_vecConditionalMutators[0x18];
        [FieldOffset(0x348)] public fixed byte m_strPopInputQueue_Container[0x8];
        [FieldOffset(0x350)] public fixed byte m_strDrawText_InputContainerSrc[0x8];
        [FieldOffset(0x358)] public fixed byte m_strDrawText_InputContainerProperty[0x8];
        [FieldOffset(0x360)] public fixed byte m_vecDrawText_Position[0x8];
        [FieldOffset(0x368)] public fixed byte m_colDrawText_Color[0x8];
        [FieldOffset(0x370)] public fixed byte m_strDrawText_Font[0x8];
        [FieldOffset(0x378)] public fixed byte m_vecConditions[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CCompositeMaterialEditorDoc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_nVersion[0x8];
        [FieldOffset(0x10)] public fixed byte m_Points[0x18];
        [FieldOffset(0x28)] public fixed byte m_KVthumbnail[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CClientAlphaProperty {
        [FieldOffset(0x0)] public fixed byte m_nDesyncOffset[0x10];
        [FieldOffset(0x10)] public fixed byte m_nDistFadeStart[0x2];
        [FieldOffset(0x12)] public fixed byte m_nDistFadeEnd[0x5];
        [FieldOffset(0x17)] public fixed byte m_nAlpha[0x1];
        [FieldOffset(0x18)] public fixed byte m_flFadeScale[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flRenderFxStartTime[0x4];
        [FieldOffset(0x20)] public fixed byte m_flRenderFxDuration[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct screenfade_t {
        [FieldOffset(0x0)] public fixed byte Speed[0x4];
        [FieldOffset(0x4)] public fixed byte End[0x4];
        [FieldOffset(0x8)] public fixed byte Reset[0x4];
        [FieldOffset(0xC)] public fixed byte m_Color[0x4];
        [FieldOffset(0x10)] public fixed byte Flags[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4C0)]
    public unsafe struct CGlobalLightBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_bSpotLight[0x4];
        [FieldOffset(0x14)] public fixed byte m_SpotLightOrigin[0xC];
        [FieldOffset(0x20)] public fixed byte m_SpotLightAngles[0xC];
        [FieldOffset(0x2C)] public fixed byte m_ShadowDirection[0xC];
        [FieldOffset(0x38)] public fixed byte m_AmbientDirection[0xC];
        [FieldOffset(0x44)] public fixed byte m_SpecularDirection[0xC];
        [FieldOffset(0x50)] public fixed byte m_InspectorSpecularDirection[0xC];
        [FieldOffset(0x5C)] public fixed byte m_flSpecularPower[0x4];
        [FieldOffset(0x60)] public fixed byte m_flSpecularIndependence[0x4];
        [FieldOffset(0x64)] public fixed byte m_SpecularColor[0x4];
        [FieldOffset(0x68)] public fixed byte m_bStartDisabled[0x1];
        [FieldOffset(0x69)] public fixed byte m_bEnabled[0x3];
        [FieldOffset(0x6C)] public fixed byte m_LightColor[0x4];
        [FieldOffset(0x70)] public fixed byte m_AmbientColor1[0x4];
        [FieldOffset(0x74)] public fixed byte m_AmbientColor2[0x4];
        [FieldOffset(0x78)] public fixed byte m_AmbientColor3[0x4];
        [FieldOffset(0x7C)] public fixed byte m_flSunDistance[0x4];
        [FieldOffset(0x80)] public fixed byte m_flFOV[0x4];
        [FieldOffset(0x84)] public fixed byte m_flNearZ[0x4];
        [FieldOffset(0x88)] public fixed byte m_flFarZ[0x4];
        [FieldOffset(0x8C)] public fixed byte m_bEnableShadows[0x1];
        [FieldOffset(0x8D)] public fixed byte m_bOldEnableShadows[0x1];
        [FieldOffset(0x8E)] public fixed byte m_bBackgroundClearNotRequired[0x2];
        [FieldOffset(0x90)] public fixed byte m_flCloudScale[0x4];
        [FieldOffset(0x94)] public fixed byte m_flCloud1Speed[0x4];
        [FieldOffset(0x98)] public fixed byte m_flCloud1Direction[0x4];
        [FieldOffset(0x9C)] public fixed byte m_flCloud2Speed[0x4];
        [FieldOffset(0xA0)] public fixed byte m_flCloud2Direction[0x10];
        [FieldOffset(0xB0)] public fixed byte m_flAmbientScale1[0x4];
        [FieldOffset(0xB4)] public fixed byte m_flAmbientScale2[0x4];
        [FieldOffset(0xB8)] public fixed byte m_flGroundScale[0x4];
        [FieldOffset(0xBC)] public fixed byte m_flLightScale[0x4];
        [FieldOffset(0xC0)] public fixed byte m_flFoWDarkness[0x4];
        [FieldOffset(0xC4)] public fixed byte m_bEnableSeparateSkyboxFog[0x4];
        [FieldOffset(0xC8)] public fixed byte m_vFowColor[0xC];
        [FieldOffset(0xD4)] public fixed byte m_ViewOrigin[0xC];
        [FieldOffset(0xE0)] public fixed byte m_ViewAngles[0xC];
        [FieldOffset(0xEC)] public fixed byte m_flViewFoV[0x4];
        [FieldOffset(0xF0)] public fixed byte m_WorldPoints[0x3B8];
        [FieldOffset(0x4A8)] public fixed byte m_vFogOffsetLayer0[0x8];
        [FieldOffset(0x4B0)] public fixed byte m_vFogOffsetLayer1[0x8];
        [FieldOffset(0x4B8)] public fixed byte m_hEnvWind[0x4];
        [FieldOffset(0x4BC)] public fixed byte m_hEnvSky[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct IClientAlphaProperty {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1C)]
    public unsafe struct inv_image_light_sun_t {
        [FieldOffset(0x0)] public fixed byte color[0xC];
        [FieldOffset(0xC)] public fixed byte angle[0xC];
        [FieldOffset(0x18)] public fixed byte brightness[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CompositeMaterialMatchFilter_t {
        [FieldOffset(0x0)] public fixed byte m_nCompositeMaterialMatchFilterType[0x8];
        [FieldOffset(0x8)] public fixed byte m_strMatchFilter[0x8];
        [FieldOffset(0x10)] public fixed byte m_strMatchValue[0x8];
        [FieldOffset(0x18)] public fixed byte m_bPassWhenTrue[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA0)]
    public unsafe struct CompositeMaterial_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_TargetKVs[0x10];
        [FieldOffset(0x18)] public fixed byte m_PreGenerationKVs[0x40];
        [FieldOffset(0x58)] public fixed byte m_FinalKVs[0x28];
        [FieldOffset(0x80)] public fixed byte m_vecGeneratedTextures[0x20];
    }
}