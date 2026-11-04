/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

#![allow(non_snake_case, non_camel_case_types, dead_code)]

pub mod client {

    pub type C_BaseCombatCharacter__WaterWakeMode_t = i32;
    pub type PulseBestOutflowRules_t = i32;
    pub type PulseCursorCancelPriority_t = i32;
    pub type PulseMethodCallMode_t = i32;
    pub type PulseCursorWakePriority_t = i32;
    pub type CompositeMaterialInputLooseVariableType_t = i32;
    pub type CompositeMaterialInputTextureType_t = i32;
    pub type InventoryNodeType_t = i32;
    pub type CompositeMaterialInputContainerSourceType_t = i32;
    pub type CompMatPropertyMutatorType_t = i32;
    pub type CompositeMaterialVarSystemVar_t = i32;
    pub type P2P_Messages = i32;
    pub type CompositeMaterialMatchFilterType_t = i32;
    pub type CompMatPropertyMutatorConditionType_t = i32;
    #[repr(C)]
    pub struct C_CSGO_TeamIntroCharacterPosition {
        pub pad_0: [u8; 0x1D18], // 0x0
    }
    #[repr(C)]
    pub struct C_FireCrackerBlast {
        pub pad_0: [u8; 0x86A0], // 0x0
    }
    #[repr(C)]
    pub struct CCSGO_WingmanIntroCounterTerroristPosition {
        pub pad_0: [u8; 0x1D18], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_WaitForCursorsWithTag {
        pub pad_0: [u8; 0x128], // 0x0
        pub m_bTagSelfWhenComplete: [u8; 0x4], // 0x128
        pub m_nDesiredKillPriority: [u8; 0x4], // 0x12C
    }
    #[repr(C)]
    pub struct C_SceneEntity__QueuedEvents_t {
        pub starttime: [u8; 0x18], // 0x0
    }
    #[repr(C)]
    pub struct CCSPlayer_PingServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_hPlayerPing: [u8; 0x8], // 0x48
    }
    #[repr(C)]
    pub struct CEconItemAttribute {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_iAttributeDefinitionIndex: [u8; 0x4], // 0x30
        pub m_flValue: [u8; 0x4], // 0x34
        pub m_flInitialValue: [u8; 0x4], // 0x38
        pub m_nRefundableCurrency: [u8; 0x4], // 0x3C
        pub m_bSetBonus: [u8; 0x8], // 0x40
    }
    #[repr(C)]
    pub struct CPulseCell_RaceCursors {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_Outflows: [u8; 0x18], // 0xD8
        pub m_OnFinished: [u8; 0x48], // 0xF0
    }
    #[repr(C)]
    pub struct CFuncRetakeBarrier {
        pub pad_0: [u8; 0x14D0], // 0x0
    }
    #[repr(C)]
    pub struct C_EnvWindShared {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_flStartTime: [u8; 0x4], // 0x8
        pub m_iWindSeed: [u8; 0x4], // 0xC
        pub m_iMinWind: [u8; 0x2], // 0x10
        pub m_iMaxWind: [u8; 0x2], // 0x12
        pub m_windRadius: [u8; 0x4], // 0x14
        pub m_iMinGust: [u8; 0x2], // 0x18
        pub m_iMaxGust: [u8; 0x2], // 0x1A
        pub m_flMinGustDelay: [u8; 0x4], // 0x1C
        pub m_flMaxGustDelay: [u8; 0x4], // 0x20
        pub m_flGustDuration: [u8; 0x4], // 0x24
        pub m_iGustDirChange: [u8; 0x2], // 0x28
        pub m_iInitialWindDir: [u8; 0x2], // 0x2A
        pub m_flInitialWindSpeed: [u8; 0x4], // 0x2C
        pub m_location: [u8; 0xC], // 0x30
        pub m_hEntOwner: [u8; 0xBC], // 0x3C
    }
    #[repr(C)]
    pub struct C_SkyCamera {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_skyboxData: [u8; 0x90], // 0x600
        pub m_skyboxSlotToken: [u8; 0x4], // 0x690
        pub m_bUseAngles: [u8; 0x4], // 0x694
        pub m_pNext: [u8; 0x8], // 0x698
    }
    #[repr(C)]
    pub struct CPulseCell_Base {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_nEditorNodeID: [u8; 0x40], // 0x8
    }
    #[repr(C)]
    pub struct C_FuncRotating {
        pub pad_0: [u8; 0x1098], // 0x0
    }
    #[repr(C)]
    pub struct C_SoundOpvarSetPointBase {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_iszStackName: [u8; 0x8], // 0x600
        pub m_iszOperatorName: [u8; 0x8], // 0x608
        pub m_iszOpvarName: [u8; 0x8], // 0x610
        pub m_iOpvarIndex: [u8; 0x4], // 0x618
        pub m_bUseAutoCompare: [u8; 0x1], // 0x61C
        pub m_bFastRefresh: [u8; 0x3], // 0x61D
    }
    #[repr(C)]
    pub struct C_EnvCubemapFog {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_flEndDistance: [u8; 0x4], // 0x600
        pub m_flStartDistance: [u8; 0x4], // 0x604
        pub m_flFogFalloffExponent: [u8; 0x4], // 0x608
        pub m_bHeightFogEnabled: [u8; 0x4], // 0x60C
        pub m_flFogHeightWidth: [u8; 0x4], // 0x610
        pub m_flFogHeightEnd: [u8; 0x4], // 0x614
        pub m_flFogHeightStart: [u8; 0x4], // 0x618
        pub m_flFogHeightExponent: [u8; 0x4], // 0x61C
        pub m_flLODBias: [u8; 0x4], // 0x620
        pub m_bActive: [u8; 0x1], // 0x624
        pub m_bStartDisabled: [u8; 0x3], // 0x625
        pub m_flFogMaxOpacity: [u8; 0x4], // 0x628
        pub m_nCubemapSourceType: [u8; 0x4], // 0x62C
        pub m_hSkyMaterial: [u8; 0x8], // 0x630
        pub m_iszSkyEntity: [u8; 0x8], // 0x638
        pub m_nHeightFogType: [u8; 0x4], // 0x640
        pub m_nFogHeightBlendMode: [u8; 0x4], // 0x644
        pub m_nFogHeightCoordinateSpace: [u8; 0x4], // 0x648
        pub m_nDistanceFogType: [u8; 0x4], // 0x64C
        pub m_DistanceFogCurveString: [u8; 0x8], // 0x650
        pub m_HeightFogCurveString: [u8; 0x98], // 0x658
        pub m_hFogCubemapTexture: [u8; 0x8], // 0x6F0
        pub m_bHasHeightFogEnd: [u8; 0x1], // 0x6F8
        pub m_bFirstTime: [u8; 0x7], // 0x6F9
    }
    #[repr(C)]
    pub struct C_CSGO_TeamSelectTerroristPosition {
        pub pad_0: [u8; 0x1D18], // 0x0
    }
    #[repr(C)]
    pub struct C_EnvParticleGlow {
        pub pad_0: [u8; 0x1668], // 0x0
        pub m_flAlphaScale: [u8; 0x4], // 0x1668
        pub m_flRadiusScale: [u8; 0x4], // 0x166C
        pub m_flSelfIllumScale: [u8; 0x4], // 0x1670
        pub m_ColorTint: [u8; 0x4], // 0x1674
        pub m_hTextureOverride: [u8; 0x8], // 0x1678
    }
    #[repr(C)]
    pub struct CCS_PortraitWorldCallbackHandler {
        pub pad_0: [u8; 0x608], // 0x0
    }
    #[repr(C)]
    pub struct CCSPlayerController_InventoryServices {
        pub pad_0: [u8; 0x40], // 0x0
        pub m_vecNetworkableLoadout: [u8; 0x18], // 0x40
        pub m_unMusicID: [u8; 0x4], // 0x58
        pub m_rank: [u8; 0x18], // 0x5C
        pub m_nPersonaDataPublicLevel: [u8; 0x4], // 0x74
        pub m_nPersonaDataPublicCommendsLeader: [u8; 0x4], // 0x78
        pub m_nPersonaDataPublicCommendsTeacher: [u8; 0x4], // 0x7C
        pub m_nPersonaDataPublicCommendsFriendly: [u8; 0x4], // 0x80
        pub m_nPersonaDataXpTrailLevel: [u8; 0x4], // 0x84
        pub m_vecServerAuthoritativeWeaponSlots: [u8; 0x68], // 0x88
    }
    #[repr(C)]
    pub struct CCSPlayerModernJump {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nLastActualJumpPressTick: [u8; 0x4], // 0x10
        pub m_flLastActualJumpPressFrac: [u8; 0x4], // 0x14
        pub m_nLastUsableJumpPressTick: [u8; 0x4], // 0x18
        pub m_flLastUsableJumpPressFrac: [u8; 0x4], // 0x1C
        pub m_nLastLandedTick: [u8; 0x4], // 0x20
        pub m_flLastLandedFrac: [u8; 0x4], // 0x24
        pub m_flLastLandedVelocityX: [u8; 0x4], // 0x28
        pub m_flLastLandedVelocityY: [u8; 0x4], // 0x2C
        pub m_flLastLandedVelocityZ: [u8; 0x8], // 0x30
    }
    #[repr(C)]
    pub struct C_EconEntity__AttachedModelData_t {
        pub m_iModelDisplayFlags: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CPulse_ResumePoint {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CTriggerFan {
        pub pad_0: [u8; 0x1180], // 0x0
        pub m_vFanOriginOffset: [u8; 0xC], // 0x1180
        pub m_vDirection: [u8; 0xC], // 0x118C
        pub m_bPushTowardsInfoTarget: [u8; 0x1], // 0x1198
        pub m_bPushAwayFromInfoTarget: [u8; 0x7], // 0x1199
        pub m_qNoiseDelta: [u8; 0x10], // 0x11A0
        pub m_hInfoFan: [u8; 0x4], // 0x11B0
        pub m_flForce: [u8; 0x4], // 0x11B4
        pub m_bFalloff: [u8; 0x8], // 0x11B8
        pub m_RampTimer: [u8; 0x20], // 0x11C0
    }
    #[repr(C)]
    pub struct C_HostageCarriableProp {
        pub pad_0: [u8; 0x1270], // 0x0
    }
    #[repr(C)]
    pub struct C_BulletHitModel {
        pub pad_0: [u8; 0x1268], // 0x0
        pub m_matLocal: [u8; 0x30], // 0x1268
        pub m_iBoneIndex: [u8; 0x4], // 0x1298
        pub m_hPlayerParent: [u8; 0x4], // 0x129C
        pub m_bIsHit: [u8; 0x4], // 0x12A0
        pub m_flTimeCreated: [u8; 0x4], // 0x12A4
        pub m_vecStartPos: [u8; 0x10], // 0x12A8
    }
    #[repr(C)]
    pub struct C_FuncElectrifiedVolume {
        pub pad_0: [u8; 0x1098], // 0x0
        pub m_nAmbientEffect: [u8; 0x8], // 0x1098
        pub m_EffectName: [u8; 0x8], // 0x10A0
        pub m_bState: [u8; 0x8], // 0x10A8
    }
    #[repr(C)]
    pub struct C_MapVetoPickController {
        pub pad_0: [u8; 0x610], // 0x0
        pub m_nDraftType: [u8; 0x4], // 0x610
        pub m_nTeamWinningCoinToss: [u8; 0x4], // 0x614
        pub m_nTeamWithFirstChoice: [u8; 0x100], // 0x618
        pub m_nVoteMapIdsList: [u8; 0x1C], // 0x718
        pub m_nAccountIDs: [u8; 0x100], // 0x734
        pub m_nMapId0: [u8; 0x100], // 0x834
        pub m_nMapId1: [u8; 0x100], // 0x934
        pub m_nMapId2: [u8; 0x100], // 0xA34
        pub m_nMapId3: [u8; 0x100], // 0xB34
        pub m_nMapId4: [u8; 0x100], // 0xC34
        pub m_nMapId5: [u8; 0x100], // 0xD34
        pub m_nStartingSide0: [u8; 0x100], // 0xE34
        pub m_nCurrentPhase: [u8; 0x4], // 0xF34
        pub m_nPhaseStartTick: [u8; 0x4], // 0xF38
        pub m_nPhaseDurationTicks: [u8; 0x4], // 0xF3C
        pub m_nPostDataUpdateTick: [u8; 0x4], // 0xF40
        pub m_bDisabledHud: [u8; 0x4], // 0xF44
    }
    #[repr(C)]
    pub struct C_EnvVolumetricFogVolume {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_bActive: [u8; 0x4], // 0x600
        pub m_vBoxMins: [u8; 0xC], // 0x604
        pub m_vBoxMaxs: [u8; 0xC], // 0x610
        pub m_bStartDisabled: [u8; 0x1], // 0x61C
        pub m_bIndirectUseLPVs: [u8; 0x3], // 0x61D
        pub m_flStrength: [u8; 0x4], // 0x620
        pub m_nFalloffShape: [u8; 0x4], // 0x624
        pub m_flFalloffExponent: [u8; 0x4], // 0x628
        pub m_flHeightFogDepth: [u8; 0x4], // 0x62C
        pub m_fHeightFogEdgeWidth: [u8; 0x4], // 0x630
        pub m_fIndirectLightStrength: [u8; 0x4], // 0x634
        pub m_fSunLightStrength: [u8; 0x4], // 0x638
        pub m_fNoiseStrength: [u8; 0x4], // 0x63C
        pub m_TintColor: [u8; 0x4], // 0x640
        pub m_bOverrideTintColor: [u8; 0x1], // 0x644
        pub m_bOverrideIndirectLightStrength: [u8; 0x1], // 0x645
        pub m_bOverrideSunLightStrength: [u8; 0x1], // 0x646
        pub m_bOverrideNoiseStrength: [u8; 0x1], // 0x647
    }
    #[repr(C)]
    pub struct C_CSGO_EndOfMatchCharacterPosition {
        pub pad_0: [u8; 0x1D18], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_PlaySequence {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_SequenceName: [u8; 0x8], // 0xD8
        pub m_PulseAnimEvents: [u8; 0x18], // 0xE0
        pub m_OnFinished: [u8; 0x48], // 0xF8
    }
    #[repr(C)]
    pub struct C_BarnLight {
        pub pad_0: [u8; 0x1098], // 0x0
        pub m_bEnabled: [u8; 0x4], // 0x1098
        pub m_nColorMode: [u8; 0x4], // 0x109C
        pub m_Color: [u8; 0x4], // 0x10A0
        pub m_flColorTemperature: [u8; 0x4], // 0x10A4
        pub m_flBrightness: [u8; 0x4], // 0x10A8
        pub m_flBrightnessScale: [u8; 0x4], // 0x10AC
        pub m_nDirectLight: [u8; 0x4], // 0x10B0
        pub m_nBakedShadowIndex: [u8; 0x4], // 0x10B4
        pub m_nLightPathUniqueId: [u8; 0x4], // 0x10B8
        pub m_nLightMapUniqueId: [u8; 0x4], // 0x10BC
        pub m_nLuminaireShape: [u8; 0x4], // 0x10C0
        pub m_flLuminaireSize: [u8; 0x4], // 0x10C4
        pub m_flLuminaireAnisotropy: [u8; 0x8], // 0x10C8
        pub m_LightStyleString: [u8; 0x8], // 0x10D0
        pub m_flLightStyleStartTime: [u8; 0x8], // 0x10D8
        pub m_QueuedLightStyleStrings: [u8; 0x18], // 0x10E0
        pub m_LightStyleEvents: [u8; 0x18], // 0x10F8
        pub m_LightStyleTargets: [u8; 0x18], // 0x1110
        pub m_StyleEvent: [u8; 0x60], // 0x1128
        pub m_hLightCookie: [u8; 0x8], // 0x1188
        pub m_flShape: [u8; 0x4], // 0x1190
        pub m_flSoftX: [u8; 0x4], // 0x1194
        pub m_flSoftY: [u8; 0x4], // 0x1198
        pub m_flSkirt: [u8; 0x4], // 0x119C
        pub m_flSkirtNear: [u8; 0x4], // 0x11A0
        pub m_vSizeParams: [u8; 0xC], // 0x11A4
        pub m_flRange: [u8; 0x4], // 0x11B0
        pub m_vShear: [u8; 0xC], // 0x11B4
        pub m_nBakeSpecularToCubemaps: [u8; 0x4], // 0x11C0
        pub m_vBakeSpecularToCubemapsSize: [u8; 0xC], // 0x11C4
        pub m_flBakeSpecularToCubemapsScale: [u8; 0x4], // 0x11D0
        pub m_nCastShadows: [u8; 0x4], // 0x11D4
        pub m_nShadowMapSize: [u8; 0x4], // 0x11D8
        pub m_nShadowPriority: [u8; 0x4], // 0x11DC
        pub m_bContactShadow: [u8; 0x1], // 0x11E0
        pub m_bForceShadowsEnabled: [u8; 0x3], // 0x11E1
        pub m_nBounceLight: [u8; 0x4], // 0x11E4
        pub m_flBounceScale: [u8; 0x4], // 0x11E8
        pub m_flMinRoughness: [u8; 0x4], // 0x11EC
        pub m_vAlternateColor: [u8; 0xC], // 0x11F0
        pub m_fAlternateColorBrightness: [u8; 0x4], // 0x11FC
        pub m_nFog: [u8; 0x4], // 0x1200
        pub m_flFogStrength: [u8; 0x4], // 0x1204
        pub m_nFogShadows: [u8; 0x4], // 0x1208
        pub m_flFogScale: [u8; 0x4], // 0x120C
        pub m_flFadeSizeStart: [u8; 0x4], // 0x1210
        pub m_flFadeSizeEnd: [u8; 0x4], // 0x1214
        pub m_flShadowFadeSizeStart: [u8; 0x4], // 0x1218
        pub m_flShadowFadeSizeEnd: [u8; 0x4], // 0x121C
        pub m_bPrecomputedFieldsValid: [u8; 0x4], // 0x1220
        pub m_vPrecomputedBoundsMins: [u8; 0xC], // 0x1224
        pub m_vPrecomputedBoundsMaxs: [u8; 0xC], // 0x1230
        pub m_vPrecomputedOBBOrigin: [u8; 0xC], // 0x123C
        pub m_vPrecomputedOBBAngles: [u8; 0xC], // 0x1248
        pub m_vPrecomputedOBBExtent: [u8; 0xC], // 0x1254
        pub m_nPrecomputedSubFrusta: [u8; 0x4], // 0x1260
        pub m_vPrecomputedOBBOrigin0: [u8; 0xC], // 0x1264
        pub m_vPrecomputedOBBAngles0: [u8; 0xC], // 0x1270
        pub m_vPrecomputedOBBExtent0: [u8; 0xC], // 0x127C
        pub m_vPrecomputedOBBOrigin1: [u8; 0xC], // 0x1288
        pub m_vPrecomputedOBBAngles1: [u8; 0xC], // 0x1294
        pub m_vPrecomputedOBBExtent1: [u8; 0xC], // 0x12A0
        pub m_vPrecomputedOBBOrigin2: [u8; 0xC], // 0x12AC
        pub m_vPrecomputedOBBAngles2: [u8; 0xC], // 0x12B8
        pub m_vPrecomputedOBBExtent2: [u8; 0xC], // 0x12C4
        pub m_vPrecomputedOBBOrigin3: [u8; 0xC], // 0x12D0
        pub m_vPrecomputedOBBAngles3: [u8; 0xC], // 0x12DC
        pub m_vPrecomputedOBBExtent3: [u8; 0xC], // 0x12E8
        pub m_vPrecomputedOBBOrigin4: [u8; 0xC], // 0x12F4
        pub m_vPrecomputedOBBAngles4: [u8; 0xC], // 0x1300
        pub m_vPrecomputedOBBExtent4: [u8; 0xC], // 0x130C
        pub m_vPrecomputedOBBOrigin5: [u8; 0xC], // 0x1318
        pub m_vPrecomputedOBBAngles5: [u8; 0xC], // 0x1324
        pub m_vPrecomputedOBBExtent5: [u8; 0x50], // 0x1330
        pub m_bInitialBoneSetup: [u8; 0x8], // 0x1380
        pub m_VisClusters: [u8; 0x20], // 0x1388
    }
    #[repr(C)]
    pub struct CPulseCell_LerpCameraSettings {
        pub pad_0: [u8; 0x120], // 0x0
        pub m_flSeconds: [u8; 0x4], // 0x120
        pub m_Start: [u8; 0x10], // 0x124
        pub m_End: [u8; 0x14], // 0x134
    }
    #[repr(C)]
    pub struct CPointOffScreenIndicatorUi {
        pub pad_0: [u8; 0x1300], // 0x0
        pub m_bBeenEnabled: [u8; 0x1], // 0x1300
        pub m_bHide: [u8; 0x3], // 0x1301
        pub m_flSeenTargetTime: [u8; 0x4], // 0x1304
        pub m_pTargetPanel: [u8; 0x8], // 0x1308
    }
    #[repr(C)]
    pub struct CCSObserver_UseServices {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct C_PostProcessingVolume {
        pub pad_0: [u8; 0x1190], // 0x0
        pub m_hPostSettings: [u8; 0x8], // 0x1190
        pub m_flFadeDuration: [u8; 0x4], // 0x1198
        pub m_flMinLogExposure: [u8; 0x4], // 0x119C
        pub m_flMaxLogExposure: [u8; 0x4], // 0x11A0
        pub m_flMinExposure: [u8; 0x4], // 0x11A4
        pub m_flMaxExposure: [u8; 0x4], // 0x11A8
        pub m_flExposureCompensation: [u8; 0x4], // 0x11AC
        pub m_flExposureFadeSpeedUp: [u8; 0x4], // 0x11B0
        pub m_flExposureFadeSpeedDown: [u8; 0x4], // 0x11B4
        pub m_flTonemapEVSmoothingRange: [u8; 0x4], // 0x11B8
        pub m_bMaster: [u8; 0x1], // 0x11BC
        pub m_bExposureControl: [u8; 0x3], // 0x11BD
    }
    #[repr(C)]
    pub struct CCSMinimapVolume {
        pub pad_0: [u8; 0x1198], // 0x0
        pub m_strMinimapName: [u8; 0x10], // 0x1198
    }
    #[repr(C)]
    pub struct CCSPlayer_UseServices {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct C_BaseModelEntity__Emphasized_Phoneme {
        pub m_sClassName: [u8; 0x18], // 0x0
        pub m_flAmount: [u8; 0x4], // 0x18
        pub m_bRequired: [u8; 0x1], // 0x1C
        pub m_bBasechecked: [u8; 0x1], // 0x1D
        pub m_bValid: [u8; 0x2], // 0x1E
    }
    #[repr(C)]
    pub struct C_CSGO_CounterTerroristWingmanIntroCamera {
        pub pad_0: [u8; 0x690], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_PickBestOutflowSelector {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_nCheckType: [u8; 0x8], // 0x48
        pub m_OutflowList: [u8; 0x18], // 0x50
    }
    #[repr(C)]
    pub struct CInfoFan {
        pub pad_0: [u8; 0x640], // 0x0
        pub m_fFanForceMaxRadius: [u8; 0x4], // 0x640
        pub m_fFanForceMinRadius: [u8; 0x4], // 0x644
        pub m_flCurveDistRange: [u8; 0x8], // 0x648
        pub m_FanForceCurveString: [u8; 0x8], // 0x650
    }
    #[repr(C)]
    pub struct C_VoteController {
        pub pad_0: [u8; 0x610], // 0x0
        pub m_iActiveIssueIndex: [u8; 0x4], // 0x610
        pub m_iOnlyTeamToVote: [u8; 0x4], // 0x614
        pub m_nVoteOptionCount: [u8; 0x14], // 0x618
        pub m_nPotentialVotes: [u8; 0x4], // 0x62C
        pub m_bVotesDirty: [u8; 0x1], // 0x630
        pub m_bTypeDirty: [u8; 0x1], // 0x631
        pub m_bIsYesNoVote: [u8; 0x6], // 0x632
    }
    #[repr(C)]
    pub struct C_C4 {
        pub pad_0: [u8; 0x1F20], // 0x0
        pub m_activeLightParticleIndex: [u8; 0x4], // 0x1F20
        pub m_eActiveLightEffect: [u8; 0x4], // 0x1F24
        pub m_bStartedArming: [u8; 0x4], // 0x1F28
        pub m_fArmedTime: [u8; 0x4], // 0x1F2C
        pub m_bBombPlacedAnimation: [u8; 0x1], // 0x1F30
        pub m_bIsPlantingViaUse: [u8; 0x7], // 0x1F31
        pub m_entitySpottedState: [u8; 0x18], // 0x1F38
        pub m_nSpotRules: [u8; 0x4], // 0x1F50
        pub m_bPlayedArmingBeeps: [u8; 0x7], // 0x1F54
        pub m_bBombPlanted: [u8; 0x5], // 0x1F5B
    }
    #[repr(C)]
    pub struct C_CSPlayerPawnBase {
        pub pad_0: [u8; 0x14D8], // 0x0
        pub m_pPingServices: [u8; 0x8], // 0x14D8
        pub m_previousPlayerState: [u8; 0x4], // 0x14E0
        pub m_iPlayerState: [u8; 0x4], // 0x14E4
        pub m_bHasMovedSinceSpawn: [u8; 0x4], // 0x14E8
        pub m_flLastSpawnTimeIndex: [u8; 0x4], // 0x14EC
        pub m_iProgressBarDuration: [u8; 0x4], // 0x14F0
        pub m_flProgressBarStartTime: [u8; 0x4], // 0x14F4
        pub m_flClientDeathTime: [u8; 0x4], // 0x14F8
        pub m_flFlashBangTime: [u8; 0x4], // 0x14FC
        pub m_flFlashScreenshotAlpha: [u8; 0x4], // 0x1500
        pub m_flFlashOverlayAlpha: [u8; 0x4], // 0x1504
        pub m_bFlashBuildUp: [u8; 0x1], // 0x1508
        pub m_bFlashDspHasBeenCleared: [u8; 0x1], // 0x1509
        pub m_bFlashScreenshotHasBeenGrabbed: [u8; 0x2], // 0x150A
        pub m_flFlashMaxAlpha: [u8; 0x4], // 0x150C
        pub m_flFlashDuration: [u8; 0x4], // 0x1510
        pub m_flClientHealthFadeChangeTimestamp: [u8; 0x4], // 0x1514
        pub m_nClientHealthFadeParityValue: [u8; 0x4], // 0x1518
        pub m_fNextThinkPushAway: [u8; 0x8], // 0x151C
        pub m_flCurrentMusicStartTime: [u8; 0x4], // 0x1524
        pub m_flMusicRoundStartTime: [u8; 0x4], // 0x1528
        pub m_bDeferStartMusicOnWarmup: [u8; 0x4], // 0x152C
        pub m_flLastSmokeOverlayAlpha: [u8; 0x4], // 0x1530
        pub m_flLastSmokeAge: [u8; 0x4], // 0x1534
        pub m_vLastSmokeOverlayColor: [u8; 0x28], // 0x1538
        pub m_hOriginalController: [u8; 0x8], // 0x1560
    }
    #[repr(C)]
    pub struct C_BreakableProp {
        pub pad_0: [u8; 0x12A0], // 0x0
        pub m_CPropDataComponent: [u8; 0x40], // 0x12A0
        pub m_OnStartDeath: [u8; 0x18], // 0x12E0
        pub m_OnBreak: [u8; 0x18], // 0x12F8
        pub m_OnHealthChanged: [u8; 0x20], // 0x1310
        pub m_OnTakeDamage: [u8; 0x18], // 0x1330
        pub m_impactEnergyScale: [u8; 0x4], // 0x1348
        pub m_iMinHealthDmg: [u8; 0x4], // 0x134C
        pub m_flPressureDelay: [u8; 0x4], // 0x1350
        pub m_flDefBurstScale: [u8; 0x4], // 0x1354
        pub m_vDefBurstOffset: [u8; 0xC], // 0x1358
        pub m_hBreaker: [u8; 0x4], // 0x1364
        pub m_PerformanceMode: [u8; 0x4], // 0x1368
        pub m_flPreventDamageBeforeTime: [u8; 0x4], // 0x136C
        pub m_BreakableContentsType: [u8; 0x8], // 0x1370
        pub m_strBreakableContentsPropGroupOverride: [u8; 0x8], // 0x1378
        pub m_strBreakableContentsParticleOverride: [u8; 0x8], // 0x1380
        pub m_bHasBreakPiecesOrCommands: [u8; 0x4], // 0x1388
        pub m_explodeDamage: [u8; 0x4], // 0x138C
        pub m_explodeRadius: [u8; 0x8], // 0x1390
        pub m_sExplosionType: [u8; 0x8], // 0x1398
        pub m_explosionDelay: [u8; 0x8], // 0x13A0
        pub m_explosionBuildupSound: [u8; 0x8], // 0x13A8
        pub m_explosionCustomEffect: [u8; 0x8], // 0x13B0
        pub m_explosionCustomSound: [u8; 0x8], // 0x13B8
        pub m_explosionModifier: [u8; 0x8], // 0x13C0
        pub m_hPhysicsAttacker: [u8; 0x4], // 0x13C8
        pub m_flLastPhysicsInfluenceTime: [u8; 0x4], // 0x13CC
        pub m_flDefaultFadeScale: [u8; 0x4], // 0x13D0
        pub m_hLastAttacker: [u8; 0xC], // 0x13D4
    }
    #[repr(C)]
    pub struct CCSGO_WingmanIntroTerroristPosition {
        pub pad_0: [u8; 0x1D18], // 0x0
    }
    #[repr(C)]
    pub struct C_RetakeGameRules {
        pub pad_0: [u8; 0x138], // 0x0
        pub m_nMatchSeed: [u8; 0x4], // 0x138
        pub m_bBlockersPresent: [u8; 0x1], // 0x13C
        pub m_bRoundInProgress: [u8; 0x3], // 0x13D
        pub m_iFirstSecondHalfRound: [u8; 0x4], // 0x140
        pub m_iBombSite: [u8; 0x4], // 0x144
        pub m_hBombPlanter: [u8; 0x10], // 0x148
    }
    #[repr(C)]
    pub struct C_SoundOpvarSetDomeEntity {
        pub pad_0: [u8; 0x620], // 0x0
    }
    #[repr(C)]
    pub struct CPrecipitationVData {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_szParticlePrecipitationEffect: [u8; 0xE0], // 0x28
        pub m_szParticlePrecipitationPuddleEffect: [u8; 0xE0], // 0x108
        pub m_szParticlePrecipitationPostEffect: [u8; 0xE0], // 0x1E8
        pub m_flInnerDistance: [u8; 0x4], // 0x2C8
        pub m_nAttachType: [u8; 0x4], // 0x2CC
        pub m_bBatchSameVolumeType: [u8; 0x4], // 0x2D0
        pub m_nRTEnvCP: [u8; 0x4], // 0x2D4
        pub m_nRTEnvCPComponent: [u8; 0x8], // 0x2D8
        pub m_szModifier: [u8; 0x8], // 0x2E0
        pub m_nUseSnapshotFromSurfaceGraph: [u8; 0x4], // 0x2E8
        pub m_snapshotFilter: [u8; 0x4], // 0x2EC
    }
    #[repr(C)]
    pub struct CPulseCell_WaitForObservable {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_Condition: [u8; 0x90], // 0xD8
        pub m_OnTrue: [u8; 0x48], // 0x168
    }
    #[repr(C)]
    pub struct C_SoundAreaEntitySphere {
        pub pad_0: [u8; 0x628], // 0x0
        pub m_flRadius: [u8; 0x8], // 0x628
    }
    #[repr(C)]
    pub struct CPulseCell_Step_EntFire {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_Input: [u8; 0x8], // 0x48
    }
    #[repr(C)]
    pub struct C_WeaponAWP {
        pub pad_0: [u8; 0x1F50], // 0x0
    }
    #[repr(C)]
    pub struct C_BaseButton {
        pub pad_0: [u8; 0x1098], // 0x0
        pub m_glowEntity: [u8; 0x4], // 0x1098
        pub m_usable: [u8; 0x4], // 0x109C
        pub m_szDisplayText: [u8; 0x8], // 0x10A0
    }
    #[repr(C)]
    pub struct CCSObserver_ObserverServices {
        pub pad_0: [u8; 0x70], // 0x0
        pub m_obsInterpState: [u8; 0x90], // 0x70
    }
    #[repr(C)]
    pub struct CHitboxComponent {
        pub pad_0: [u8; 0x14], // 0x0
        pub m_flBoundsExpandRadius: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct C_SoundEventBoxHelper {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_vMins: [u8; 0xC], // 0x600
        pub m_vMaxs: [u8; 0xC], // 0x60C
    }
    #[repr(C)]
    pub struct C_SoundEventBoxEntity {
        pub pad_0: [u8; 0x6C0], // 0x0
        pub m_vecBoxHelpersNetworked: [u8; 0x18], // 0x6C0
    }
    #[repr(C)]
    pub struct ServerAuthoritativeWeaponSlot_t {
        pub pad_0: [u8; 0x30], // 0x0
        pub unClass: [u8; 0x2], // 0x30
        pub unSlot: [u8; 0x2], // 0x32
        pub unItemDefIdx: [u8; 0x4], // 0x34
    }
    #[repr(C)]
    pub struct C_CSMinimapBoundary {
        pub pad_0: [u8; 0x600], // 0x0
    }
    #[repr(C)]
    pub struct CPathQueryComponent {
        pub pad_0: [u8; 0xA0], // 0x0
    }
    #[repr(C)]
    pub struct C_Precipitation {
        pub pad_0: [u8; 0x1180], // 0x0
        pub m_flDensity: [u8; 0x10], // 0x1180
        pub m_flParticleInnerDist: [u8; 0x8], // 0x1190
        pub m_pParticleDef: [u8; 0x14], // 0x1198
        pub m_tParticlePrecipTraceTimer: [u8; 0x8], // 0x11AC
        pub m_bActiveParticlePrecipEmitter: [u8; 0x1], // 0x11B4
        pub m_bParticlePrecipInitialized: [u8; 0x1], // 0x11B5
        pub m_bHasSimulatedSinceLastSceneObjectUpdate: [u8; 0x2], // 0x11B6
        pub m_nAvailableSheetSequencesMaxIndex: [u8; 0x8], // 0x11B8
    }
    #[repr(C)]
    pub struct CLogicRelay {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_OnSpawn: [u8; 0x18], // 0x600
        pub m_OnTrigger: [u8; 0x18], // 0x618
        pub m_bDisabled: [u8; 0x1], // 0x630
        pub m_bWaitForRefire: [u8; 0x1], // 0x631
        pub m_bTriggerOnce: [u8; 0x1], // 0x632
        pub m_bFastRetrigger: [u8; 0x1], // 0x633
        pub m_bPassthoughCaller: [u8; 0x4], // 0x634
    }
    #[repr(C)]
    pub struct SequenceHistory_t {
        pub m_hSequence: [u8; 0x4], // 0x0
        pub m_flSeqStartTime: [u8; 0x4], // 0x4
        pub m_flSeqFixedCycle: [u8; 0x4], // 0x8
        pub m_nSeqLoopMode: [u8; 0x4], // 0xC
        pub m_flPlaybackRate: [u8; 0x4], // 0x10
        pub m_flCyclesPerSecond: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct CPlayer_ItemServices {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CPulse_OutflowConnection {
        pub m_SourceOutflowName: [u8; 0x10], // 0x0
        pub m_nDestChunk: [u8; 0x4], // 0x10
        pub m_nInstruction: [u8; 0x4], // 0x14
        pub m_OutflowRegisterMap: [u8; 0x30], // 0x18
    }
    #[repr(C)]
    pub struct C_WeaponUMP45 {
        pub pad_0: [u8; 0x1F50], // 0x0
    }
    #[repr(C)]
    pub struct C_WeaponG3SG1 {
        pub pad_0: [u8; 0x1F50], // 0x0
    }
    #[repr(C)]
    pub struct C_SpotlightEnd {
        pub pad_0: [u8; 0x1098], // 0x0
        pub m_flLightScale: [u8; 0x4], // 0x1098
        pub m_Radius: [u8; 0xC], // 0x109C
    }
    #[repr(C)]
    pub struct C_Fish {
        pub pad_0: [u8; 0x1268], // 0x0
        pub m_pos: [u8; 0xC], // 0x1268
        pub m_vel: [u8; 0xC], // 0x1274
        pub m_angles: [u8; 0xC], // 0x1280
        pub m_localLifeState: [u8; 0x4], // 0x128C
        pub m_deathDepth: [u8; 0x4], // 0x1290
        pub m_deathAngle: [u8; 0x4], // 0x1294
        pub m_buoyancy: [u8; 0x8], // 0x1298
        pub m_wiggleTimer: [u8; 0x18], // 0x12A0
        pub m_wigglePhase: [u8; 0x4], // 0x12B8
        pub m_wiggleRate: [u8; 0x4], // 0x12BC
        pub m_actualPos: [u8; 0xC], // 0x12C0
        pub m_actualAngles: [u8; 0xC], // 0x12CC
        pub m_poolOrigin: [u8; 0xC], // 0x12D8
        pub m_waterLevel: [u8; 0x4], // 0x12E4
        pub m_gotUpdate: [u8; 0x4], // 0x12E8
        pub m_x: [u8; 0x4], // 0x12EC
        pub m_y: [u8; 0x4], // 0x12F0
        pub m_z: [u8; 0x4], // 0x12F4
        pub m_angle: [u8; 0x4], // 0x12F8
        pub m_errorHistory: [u8; 0x50], // 0x12FC
        pub m_errorHistoryIndex: [u8; 0x4], // 0x134C
        pub m_errorHistoryCount: [u8; 0x4], // 0x1350
        pub m_averageError: [u8; 0x4], // 0x1354
    }
    #[repr(C)]
    pub struct C_WeaponFamas {
        pub pad_0: [u8; 0x1F50], // 0x0
    }
    #[repr(C)]
    pub struct C_EnvVolumetricFogController {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_flScattering: [u8; 0x4], // 0x600
        pub m_TintColor: [u8; 0x4], // 0x604
        pub m_flAnisotropy: [u8; 0x4], // 0x608
        pub m_flFadeSpeed: [u8; 0x4], // 0x60C
        pub m_flDrawDistance: [u8; 0x4], // 0x610
        pub m_flFadeInStart: [u8; 0x4], // 0x614
        pub m_flFadeInEnd: [u8; 0x4], // 0x618
        pub m_flIndirectStrength: [u8; 0x4], // 0x61C
        pub m_nVolumeDepth: [u8; 0x4], // 0x620
        pub m_fFirstVolumeSliceThickness: [u8; 0x4], // 0x624
        pub m_nIndirectTextureDimX: [u8; 0x4], // 0x628
        pub m_nIndirectTextureDimY: [u8; 0x4], // 0x62C
        pub m_nIndirectTextureDimZ: [u8; 0x4], // 0x630
        pub m_vBoxMins: [u8; 0xC], // 0x634
        pub m_vBoxMaxs: [u8; 0xC], // 0x640
        pub m_bActive: [u8; 0x4], // 0x64C
        pub m_flStartAnisoTime: [u8; 0x4], // 0x650
        pub m_flStartScatterTime: [u8; 0x4], // 0x654
        pub m_flStartDrawDistanceTime: [u8; 0x4], // 0x658
        pub m_flStartAnisotropy: [u8; 0x4], // 0x65C
        pub m_flStartScattering: [u8; 0x4], // 0x660
        pub m_flStartDrawDistance: [u8; 0x4], // 0x664
        pub m_flDefaultAnisotropy: [u8; 0x4], // 0x668
        pub m_flDefaultScattering: [u8; 0x4], // 0x66C
        pub m_flDefaultDrawDistance: [u8; 0x4], // 0x670
        pub m_bStartDisabled: [u8; 0x1], // 0x674
        pub m_bEnableIndirect: [u8; 0x1], // 0x675
        pub m_bIsMaster: [u8; 0x2], // 0x676
        pub m_hFogIndirectTexture: [u8; 0x8], // 0x678
        pub m_nForceRefreshCount: [u8; 0x4], // 0x680
        pub m_fNoiseSpeed: [u8; 0x4], // 0x684
        pub m_fNoiseStrength: [u8; 0x4], // 0x688
        pub m_vNoiseScale: [u8; 0xC], // 0x68C
        pub m_fWindSpeed: [u8; 0x4], // 0x698
        pub m_vWindDirection: [u8; 0xC], // 0x69C
        pub m_bFirstTime: [u8; 0x8], // 0x6A8
    }
    #[repr(C)]
    pub struct CPulseGraphDef {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_DomainIdentifier: [u8; 0x10], // 0x8
        pub m_DomainSubType: [u8; 0x18], // 0x18
        pub m_ParentMapName: [u8; 0x10], // 0x30
        pub m_ParentXmlName: [u8; 0x10], // 0x40
        pub m_Chunks: [u8; 0x18], // 0x50
        pub m_Cells: [u8; 0x18], // 0x68
        pub m_Vars: [u8; 0x18], // 0x80
        pub m_TempVarBanks: [u8; 0x18], // 0x98
        pub m_PublicOutputs: [u8; 0x18], // 0xB0
        pub m_InvokeBindings: [u8; 0x18], // 0xC8
        pub m_CallInfos: [u8; 0x18], // 0xE0
        pub m_Constants: [u8; 0x18], // 0xF8
        pub m_DomainValues: [u8; 0x18], // 0x110
        pub m_BlackboardReferences: [u8; 0x18], // 0x128
        pub m_OutputConnections: [u8; 0x80], // 0x140
    }
    #[repr(C)]
    pub struct C_EnvDetailController {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_flFadeStartDist: [u8; 0x4], // 0x600
        pub m_flFadeEndDist: [u8; 0x4], // 0x604
    }
    #[repr(C)]
    pub struct CHostageRescueZoneShim {
        pub pad_0: [u8; 0x1180], // 0x0
    }
    #[repr(C)]
    pub struct CEnvSoundscapeAlias_snd_soundscape {
        pub pad_0: [u8; 0x690], // 0x0
    }
    #[repr(C)]
    pub struct CCSPlayer_HostageServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_hCarriedHostage: [u8; 0x4], // 0x48
        pub m_hCarriedHostageProp: [u8; 0x4], // 0x4C
    }
    #[repr(C)]
    pub struct C_GameRulesProxy {
        pub pad_0: [u8; 0x600], // 0x0
    }
    #[repr(C)]
    pub struct CRenderComponent {
        pub pad_0: [u8; 0x10], // 0x0
        pub __m_pChainEntity: [u8; 0x40], // 0x10
        pub m_bIsRenderingWithViewModels: [u8; 0x4], // 0x50
        pub m_nSplitscreenFlags: [u8; 0x4], // 0x54
        pub m_bEnableRendering: [u8; 0x50], // 0x58
        pub m_bInterpolationReadyToDraw: [u8; 0x28], // 0xA8
    }
    #[repr(C)]
    pub struct C_Team {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_aPlayerControllers: [u8; 0x18], // 0x600
        pub m_aPlayers: [u8; 0x18], // 0x618
        pub m_iScore: [u8; 0x4], // 0x630
        pub m_szTeamname: [u8; 0x84], // 0x634
    }
    #[repr(C)]
    pub struct C_PathParticleRopeAlias_path_particle_rope_clientside {
        pub pad_0: [u8; 0x710], // 0x0
    }
    #[repr(C)]
    pub struct CPointChildModifier {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_bOrphanInsteadOfDeletingChildrenOnRemove: [u8; 0x8], // 0x600
    }
    #[repr(C)]
    pub struct CCSPlayerLegacyJump {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_bOldJumpPressed: [u8; 0x4], // 0x10
        pub m_flJumpPressedTime: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct C_WeaponNOVA {
        pub pad_0: [u8; 0x1F20], // 0x0
    }
    #[repr(C)]
    pub struct C_CS2HudModelAddon {
        pub pad_0: [u8; 0x1330], // 0x0
    }
    #[repr(C)]
    pub struct C_DEagle {
        pub pad_0: [u8; 0x1F50], // 0x0
    }
    #[repr(C)]
    pub struct C_TriggerMultiple {
        pub pad_0: [u8; 0x1180], // 0x0
    }
    #[repr(C)]
    pub struct C_CSGO_TerroristRushIntroCamera {
        pub pad_0: [u8; 0x690], // 0x0
    }
    #[repr(C)]
    pub struct C_CSGO_TeamPreviewCamera {
        pub pad_0: [u8; 0x688], // 0x0
        pub m_nVariant: [u8; 0x8], // 0x688
    }
    #[repr(C)]
    pub struct C_ColorCorrectionVolume {
        pub pad_0: [u8; 0x1180], // 0x0
        pub m_LastEnterWeight: [u8; 0x4], // 0x1180
        pub m_LastEnterTime: [u8; 0x4], // 0x1184
        pub m_LastExitWeight: [u8; 0x4], // 0x1188
        pub m_LastExitTime: [u8; 0x4], // 0x118C
        pub m_bEnabled: [u8; 0x4], // 0x1190
        pub m_MaxWeight: [u8; 0x4], // 0x1194
        pub m_FadeDuration: [u8; 0x4], // 0x1198
        pub m_Weight: [u8; 0x4], // 0x119C
        pub m_lookupFilename: [u8; 0x208], // 0x11A0
    }
    #[repr(C)]
    pub struct CPlayer_MovementServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_nImpulse: [u8; 0x8], // 0x48
        pub m_nButtons: [u8; 0x20], // 0x50
        pub m_nQueuedButtonDownMask: [u8; 0x8], // 0x70
        pub m_nQueuedButtonChangeMask: [u8; 0x8], // 0x78
        pub m_nButtonDoublePressed: [u8; 0x8], // 0x80
        pub m_pButtonPressedCmdNumber: [u8; 0x100], // 0x88
        pub m_nLastCommandNumberProcessed: [u8; 0x8], // 0x188
        pub m_nToggleButtonDownMask: [u8; 0x10], // 0x190
        pub m_flCmdForwardMove: [u8; 0x4], // 0x1A0
        pub m_flCmdLeftMove: [u8; 0x4], // 0x1A4
        pub m_flCmdUpMove: [u8; 0x4], // 0x1A8
        pub m_flMaxspeed: [u8; 0x4], // 0x1AC
        pub m_arrForceSubtickMoveWhen: [u8; 0x10], // 0x1B0
        pub m_flForwardMove: [u8; 0x4], // 0x1C0
        pub m_flLeftMove: [u8; 0x4], // 0x1C4
        pub m_flUpMove: [u8; 0x4], // 0x1C8
        pub m_vecLastMovementImpulses: [u8; 0x74], // 0x1CC
        pub m_vecOldViewAngles: [u8; 0x18], // 0x240
    }
    #[repr(C)]
    pub struct CInfoDynamicShadowHintBox {
        pub pad_0: [u8; 0x618], // 0x0
        pub m_vBoxMins: [u8; 0xC], // 0x618
        pub m_vBoxMaxs: [u8; 0xC], // 0x624
    }
    #[repr(C)]
    pub struct CBaseAnimGraphController {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_nAnimationAlgorithm: [u8; 0x4], // 0x18
        pub m_nNextExternalGraphHandle: [u8; 0x4], // 0x1C
        pub m_vecSecondarySkeletonSlotIDs: [u8; 0x18], // 0x20
        pub m_vecSecondarySkeletons: [u8; 0x18], // 0x38
        pub m_nSecondarySkeletonMasterCount: [u8; 0x8], // 0x50
        pub m_flSoundSyncTime: [u8; 0x4], // 0x58
        pub m_nActiveIKChainMask: [u8; 0x54], // 0x5C
        pub m_hSequence: [u8; 0x4], // 0xB0
        pub m_flSeqStartTime: [u8; 0x4], // 0xB4
        pub m_flSeqFixedCycle: [u8; 0x4], // 0xB8
        pub m_nAnimLoopMode: [u8; 0x4], // 0xBC
        pub m_flPlaybackRate: [u8; 0xC], // 0xC0
        pub m_nNotifyState: [u8; 0x1], // 0xCC
        pub m_bNetworkedAnimationInputsChanged: [u8; 0x1], // 0xCD
        pub m_bNetworkedSequenceChanged: [u8; 0x1], // 0xCE
        pub m_bLastUpdateSkipped: [u8; 0x1], // 0xCF
        pub m_bSequenceFinished: [u8; 0x4], // 0xD0
        pub m_nPrevAnimUpdateTick: [u8; 0x29C], // 0xD4
        pub m_hGraphDefinitionAG2: [u8; 0x8], // 0x370
        pub m_SerializePoseRecipeAG2Slots: [u8; 0x68], // 0x378
        pub m_SerializePoseRecipeAG2Dynamic: [u8; 0x18], // 0x3E0
        pub m_nSerializePoseRecipeAG2ActiveSlot: [u8; 0x4], // 0x3F8
        pub m_nSerializePoseRecipeVersionAG2: [u8; 0x4], // 0x3FC
        pub m_nServerGraphInstanceIteration: [u8; 0x4], // 0x400
        pub m_nServerSerializationContextIteration: [u8; 0x4], // 0x404
        pub m_primaryGraphId: [u8; 0x8], // 0x408
        pub m_vecExternalGraphIds: [u8; 0x18], // 0x410
        pub m_vecExternalClipIds: [u8; 0x18], // 0x428
        pub m_sAnimGraph2Identifier: [u8; 0x8], // 0x440
        pub m_pGraphInstanceAG2: [u8; 0x220], // 0x448
        pub m_vecExternalGraphs: [u8; 0x31], // 0x668
        pub m_nPrevAnimationAlgorithm: [u8; 0x7], // 0x699
    }
    #[repr(C)]
    pub struct C_ColorCorrection {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_vecOrigin: [u8; 0xC], // 0x600
        pub m_MinFalloff: [u8; 0x4], // 0x60C
        pub m_MaxFalloff: [u8; 0x4], // 0x610
        pub m_flFadeInDuration: [u8; 0x4], // 0x614
        pub m_flFadeOutDuration: [u8; 0x4], // 0x618
        pub m_flMaxWeight: [u8; 0x4], // 0x61C
        pub m_flCurWeight: [u8; 0x4], // 0x620
        pub m_netlookupFilename: [u8; 0x200], // 0x624
        pub m_bEnabled: [u8; 0x1], // 0x824
        pub m_bMaster: [u8; 0x1], // 0x825
        pub m_bClientSide: [u8; 0x1], // 0x826
        pub m_bExclusive: [u8; 0x1], // 0x827
        pub m_bEnabledOnClient: [u8; 0x4], // 0x828
        pub m_flCurWeightOnClient: [u8; 0x4], // 0x82C
        pub m_bFadingIn: [u8; 0x4], // 0x830
        pub m_flFadeStartWeight: [u8; 0x4], // 0x834
        pub m_flFadeStartTime: [u8; 0x4], // 0x838
        pub m_flFadeDuration: [u8; 0xC], // 0x83C
    }
    #[repr(C)]
    pub struct AnimGraph2SerializedPoseRecipeSlot_t {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_topology: [u8; 0x10], // 0x30
    }
    #[repr(C)]
    pub struct CBuoyancyHelper {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_pController: [u8; 0x10], // 0x8
        pub m_nFluidType: [u8; 0x4], // 0x18
        pub m_flFluidDensity: [u8; 0x4], // 0x1C
        pub m_flNeutrallyBuoyantGravity: [u8; 0x4], // 0x20
        pub m_flNeutrallyBuoyantLinearDamping: [u8; 0x4], // 0x24
        pub m_flNeutrallyBuoyantAngularDamping: [u8; 0x4], // 0x28
        pub m_bNeutrallyBuoyant: [u8; 0x4], // 0x2C
        pub m_vecFractionOfWheelSubmergedForWheelFriction: [u8; 0x18], // 0x30
        pub m_vecWheelFrictionScales: [u8; 0x18], // 0x48
        pub m_vecFractionOfWheelSubmergedForWheelDrag: [u8; 0x18], // 0x60
        pub m_vecWheelDrag: [u8; 0xA0], // 0x78
    }
    #[repr(C)]
    pub struct C_PhysBox {
        pub pad_0: [u8; 0x1098], // 0x0
    }
    #[repr(C)]
    pub struct CCSPlayer_CameraServices {
        pub pad_0: [u8; 0x2B0], // 0x0
        pub m_flDeathCamTilt: [u8; 0x4], // 0x2B0
        pub m_hDeathCamBounds: [u8; 0x4], // 0x2B4
        pub m_bDeathCamBoundsSearched: [u8; 0x8], // 0x2B8
        pub m_vClientScopeInaccuracy: [u8; 0x90], // 0x2C0
    }
    #[repr(C)]
    pub struct CFilterMultiple {
        pub pad_0: [u8; 0x638], // 0x0
        pub m_nFilterType: [u8; 0x8], // 0x638
        pub m_iFilterName: [u8; 0x50], // 0x640
        pub m_hFilter: [u8; 0x28], // 0x690
    }
    #[repr(C)]
    pub struct CPulseCell_FireCursors {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_Outflows: [u8; 0x18], // 0xD8
        pub m_bWaitForChildOutflows: [u8; 0x8], // 0xF0
        pub m_OnFinished: [u8; 0x48], // 0xF8
    }
    #[repr(C)]
    pub struct CEnvSoundscape {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_OnPlay: [u8; 0x18], // 0x600
        pub m_flRadius: [u8; 0x8], // 0x618
        pub m_soundEventName: [u8; 0x8], // 0x620
        pub m_bOverrideWithEvent: [u8; 0x4], // 0x628
        pub m_soundscapeIndex: [u8; 0x4], // 0x62C
        pub m_soundscapeEntityListId: [u8; 0x8], // 0x630
        pub m_positionNames: [u8; 0x40], // 0x638
        pub m_hProxySoundscape: [u8; 0x4], // 0x678
        pub m_bDisabled: [u8; 0x4], // 0x67C
        pub m_soundscapeName: [u8; 0x8], // 0x680
        pub m_soundEventHash: [u8; 0x8], // 0x688
    }
    #[repr(C)]
    pub struct C_SoundEventEntityAlias_snd_event_point {
        pub pad_0: [u8; 0x6C0], // 0x0
    }
    #[repr(C)]
    pub struct C_FogController {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_fog: [u8; 0x68], // 0x600
        pub m_bUseAngles: [u8; 0x4], // 0x668
        pub m_iChangedVariables: [u8; 0x4], // 0x66C
    }
    #[repr(C)]
    pub struct C_SoundOpvarSetOBBWindEntity {
        pub pad_0: [u8; 0x620], // 0x0
    }
    #[repr(C)]
    pub struct C_MolotovGrenade {
        pub pad_0: [u8; 0x1FE0], // 0x0
    }
    #[repr(C)]
    pub struct C_NetTestBaseCombatCharacter {
        pub pad_0: [u8; 0x12F0], // 0x0
    }
    #[repr(C)]
    pub struct CBodyComponentPoint {
        pub pad_0: [u8; 0x80], // 0x0
        pub m_sceneNode: [u8; 0x130], // 0x80
    }
    #[repr(C)]
    pub struct C_WeaponM4A1Silencer {
        pub pad_0: [u8; 0x1F50], // 0x0
    }
    #[repr(C)]
    pub struct C_SkyCameraVolume {
        pub pad_0: [u8; 0x618], // 0x0
        pub m_vBoxMins: [u8; 0xC], // 0x618
        pub m_vBoxMaxs: [u8; 0xC], // 0x624
        pub m_hTarget: [u8; 0x4], // 0x630
        pub m_nPriority: [u8; 0x4], // 0x634
        pub m_bIsEnabled: [u8; 0x1], // 0x638
        pub m_bSkyboxBlurEffect: [u8; 0x3], // 0x639
        pub m_vBlurOrigin: [u8; 0xC], // 0x63C
        pub m_bSkyboxReceivesWorldCsm: [u8; 0x1], // 0x648
        pub m_bWorldReceivesSkyboxCsm: [u8; 0x1], // 0x649
        pub m_bStartDisabled: [u8; 0x6], // 0x64A
        pub m_iszTargetName: [u8; 0x8], // 0x650
    }
    #[repr(C)]
    pub struct C_EconItemView {
        pub pad_0: [u8; 0x60], // 0x0
        pub m_bInventoryImageRgbaRequested: [u8; 0x1], // 0x60
        pub m_bInventoryImageTriedCache: [u8; 0x1F], // 0x61
        pub m_nInventoryImageRgbaWidth: [u8; 0x4], // 0x80
        pub m_nInventoryImageRgbaHeight: [u8; 0x4], // 0x84
        pub m_szCurrentLoadCachedFileName: [u8; 0x130], // 0x88
        pub m_bRestoreCustomMaterialAfterPrecache: [u8; 0x2], // 0x1B8
        pub m_iItemDefinitionIndex: [u8; 0x2], // 0x1BA
        pub m_iEntityQuality: [u8; 0x4], // 0x1BC
        pub m_iEntityLevel: [u8; 0x8], // 0x1C0
        pub m_iItemID: [u8; 0x8], // 0x1C8
        pub m_iItemIDHigh: [u8; 0x4], // 0x1D0
        pub m_iItemIDLow: [u8; 0x4], // 0x1D4
        pub m_iAccountID: [u8; 0x4], // 0x1D8
        pub m_iInventoryPosition: [u8; 0xC], // 0x1DC
        pub m_bInitialized: [u8; 0x1], // 0x1E8
        pub m_bDisallowSOC: [u8; 0x1], // 0x1E9
        pub m_bIsStoreItem: [u8; 0x1], // 0x1EA
        pub m_bIsTradeItem: [u8; 0x1], // 0x1EB
        pub m_iEntityQuantity: [u8; 0x4], // 0x1EC
        pub m_iRarityOverride: [u8; 0x4], // 0x1F0
        pub m_iQualityOverride: [u8; 0x4], // 0x1F4
        pub m_iOriginOverride: [u8; 0x4], // 0x1F8
        pub m_ubStyleOverride: [u8; 0x1], // 0x1FC
        pub m_unClientFlags: [u8; 0xB], // 0x1FD
        pub m_AttributeList: [u8; 0x78], // 0x208
        pub m_NetworkedDynamicAttributes: [u8; 0x78], // 0x280
        pub m_szCustomName: [u8; 0xA1], // 0x2F8
        pub m_szCustomNameOverride: [u8; 0xA1], // 0x399
        pub m_szCustomNameOverride2: [u8; 0xA1], // 0x43A
        pub m_szCustomNameOverride3: [u8; 0xCD], // 0x4DB
        pub m_bInitializedTags: [u8; 0x8], // 0x5A8
    }
    #[repr(C)]
    pub struct CPulseCell_Timeline__TimelineEvent_t {
        pub m_flTimeFromPrevious: [u8; 0x8], // 0x0
        pub m_EventOutflow: [u8; 0x48], // 0x8
    }
    #[repr(C)]
    pub struct CPulseCell_IntervalTimer__CursorState_t {
        pub m_StartTime: [u8; 0x4], // 0x0
        pub m_EndTime: [u8; 0x4], // 0x4
        pub m_flWaitInterval: [u8; 0x4], // 0x8
        pub m_flWaitIntervalHigh: [u8; 0x4], // 0xC
        pub m_bCompleteOnNextWake: [u8; 0x4], // 0x10
    }
    #[repr(C)]
    pub struct CPulseCell_BaseRequirement {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_BaseState {
        pub pad_0: [u8; 0xD8], // 0x0
    }
    #[repr(C)]
    pub struct OutflowWithRequirements_t {
        pub m_Connection: [u8; 0x48], // 0x0
        pub m_DestinationFlowNodeID: [u8; 0x8], // 0x48
        pub m_RequirementNodeIDs: [u8; 0x18], // 0x50
        pub m_nCursorStateBlockIndex: [u8; 0x18], // 0x68
    }
    #[repr(C)]
    pub struct CPulseCell_IsRequirementValid {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct C_SoundEventPathCornerEntity {
        pub pad_0: [u8; 0x6C0], // 0x0
        pub m_vecCornerPairsNetworked: [u8; 0x18], // 0x6C0
    }
    #[repr(C)]
    pub struct C_InfoVisibilityBox {
        pub pad_0: [u8; 0x604], // 0x0
        pub m_nMode: [u8; 0x4], // 0x604
        pub m_vBoxSize: [u8; 0xC], // 0x608
        pub m_bEnabled: [u8; 0x4], // 0x614
    }
    #[repr(C)]
    pub struct CCSPlayer_ItemServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_bHasDefuser: [u8; 0x1], // 0x48
        pub m_bHasHelmet: [u8; 0x7], // 0x49
    }
    #[repr(C)]
    pub struct CPulseCell_Value_Gradient {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_Gradient: [u8; 0x18], // 0x48
    }
    #[repr(C)]
    pub struct IntervalTimer {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_timestamp: [u8; 0x4], // 0x8
        pub m_nWorldGroupId: [u8; 0x4], // 0xC
    }
    #[repr(C)]
    pub struct audioparams_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub localSound: [u8; 0x60], // 0x8
        pub soundscapeIndex: [u8; 0x4], // 0x68
        pub localBits: [u8; 0x4], // 0x6C
        pub soundscapeEntityListIndex: [u8; 0x4], // 0x70
        pub soundEventHash: [u8; 0x4], // 0x74
    }
    #[repr(C)]
    pub struct C_PathParticleRope {
        pub pad_0: [u8; 0x608], // 0x0
        pub m_bStartActive: [u8; 0x4], // 0x608
        pub m_flMaxSimulationTime: [u8; 0x4], // 0x60C
        pub m_iszEffectName: [u8; 0x8], // 0x610
        pub m_PathNodes_Name: [u8; 0x18], // 0x618
        pub m_flParticleSpacing: [u8; 0x4], // 0x630
        pub m_flSlack: [u8; 0x4], // 0x634
        pub m_flRadius: [u8; 0x4], // 0x638
        pub m_ColorTint: [u8; 0x4], // 0x63C
        pub m_nEffectState: [u8; 0x8], // 0x640
        pub m_iEffectIndex: [u8; 0x8], // 0x648
        pub m_PathNodes_Position: [u8; 0x18], // 0x650
        pub m_PathNodes_TangentIn: [u8; 0x18], // 0x668
        pub m_PathNodes_TangentOut: [u8; 0x18], // 0x680
        pub m_PathNodes_Color: [u8; 0x18], // 0x698
        pub m_PathNodes_PinEnabled: [u8; 0x18], // 0x6B0
        pub m_PathNodes_RadiusScale: [u8; 0x48], // 0x6C8
    }
    #[repr(C)]
    pub struct C_DecoyProjectile {
        pub pad_0: [u8; 0x1348], // 0x0
        pub m_nDecoyShotTick: [u8; 0x4], // 0x1348
        pub m_nClientLastKnownDecoyShotTick: [u8; 0x24], // 0x134C
        pub m_flTimeParticleEffectSpawn: [u8; 0x8], // 0x1370
    }
    #[repr(C)]
    pub struct C_AttributeContainer {
        pub pad_0: [u8; 0x50], // 0x0
        pub m_Item: [u8; 0x5B0], // 0x50
        pub m_iExternalItemProviderRegisteredToken: [u8; 0x8], // 0x600
        pub m_ullRegisteredAsItemID: [u8; 0x8], // 0x608
    }
    #[repr(C)]
    pub struct C_CSWeaponBase {
        pub pad_0: [u8; 0x19A8], // 0x0
        pub m_iWeaponGameplayAnimState: [u8; 0x4], // 0x19A8
        pub m_flWeaponGameplayAnimStateTimestamp: [u8; 0x4], // 0x19AC
        pub m_flInspectCancelCompleteTime: [u8; 0x4], // 0x19B0
        pub m_bInspectPending: [u8; 0x1], // 0x19B4
        pub m_bInspectShouldLoop: [u8; 0x2B], // 0x19B5
        pub m_nLastEmptySoundCmdNum: [u8; 0x4], // 0x19E0
        pub m_bFireOnEmpty: [u8; 0x4], // 0x19E4
        pub m_OnPlayerPickup: [u8; 0x18], // 0x19E8
        pub m_weaponMode: [u8; 0x4], // 0x1A00
        pub m_flTurningInaccuracyDelta: [u8; 0x4], // 0x1A04
        pub m_vecTurningInaccuracyEyeDirLast: [u8; 0xC], // 0x1A08
        pub m_flTurningInaccuracy: [u8; 0x4], // 0x1A14
        pub m_fAccuracyPenalty: [u8; 0x4], // 0x1A18
        pub m_flLastAccuracyUpdateTime: [u8; 0x4], // 0x1A1C
        pub m_fAccuracySmoothedForZoom: [u8; 0x4], // 0x1A20
        pub m_iRecoilIndex: [u8; 0x4], // 0x1A24
        pub m_flRecoilIndex: [u8; 0x4], // 0x1A28
        pub m_bBurstMode: [u8; 0x4], // 0x1A2C
        pub m_flLastBurstModeChangeTime: [u8; 0x4], // 0x1A30
        pub m_nPostponeFireReadyTicks: [u8; 0x4], // 0x1A34
        pub m_flPostponeFireReadyFrac: [u8; 0x4], // 0x1A38
        pub m_bInReload: [u8; 0x4], // 0x1A3C
        pub m_nDeployTick: [u8; 0x4], // 0x1A40
        pub m_flAttackHoldStartTime: [u8; 0x4], // 0x1A44
        pub m_flDroppedAtTime: [u8; 0x8], // 0x1A48
        pub m_bIsHauledBack: [u8; 0x1], // 0x1A50
        pub m_bSilencerOn: [u8; 0x3], // 0x1A51
        pub m_flTimeSilencerSwitchComplete: [u8; 0x4], // 0x1A54
        pub m_bIsInStealthReload: [u8; 0x1], // 0x1A58
        pub m_bInSilentReloadSection: [u8; 0x3], // 0x1A59
        pub m_flStealthReloadHoldStartTime: [u8; 0x4], // 0x1A5C
        pub m_bReloadHeldSinceStart: [u8; 0x4], // 0x1A60
        pub m_flWeaponActionPlaybackRate: [u8; 0x4], // 0x1A64
        pub m_iOriginalTeamNumber: [u8; 0x4], // 0x1A68
        pub m_iMostRecentTeamNumber: [u8; 0x4], // 0x1A6C
        pub m_bDroppedNearBuyZone: [u8; 0x4], // 0x1A70
        pub m_flNextAttackRenderTimeOffset: [u8; 0xAC], // 0x1A74
        pub m_bClearWeaponIdentifyingUGC: [u8; 0x1], // 0x1B20
        pub m_bVisualsDataSet: [u8; 0x1], // 0x1B21
        pub m_bUIWeapon: [u8; 0x2], // 0x1B22
        pub m_nCustomEconReloadEventId: [u8; 0xC], // 0x1B24
        pub m_bCanBePickedUp: [u8; 0x4], // 0x1B30
        pub m_nextPrevOwnerUseTime: [u8; 0x4], // 0x1B34
        pub m_hPrevOwner: [u8; 0x4], // 0x1B38
        pub m_nDropTick: [u8; 0x4], // 0x1B3C
        pub m_bWasActiveWeaponWhenDropped: [u8; 0x24], // 0x1B40
        pub m_donated: [u8; 0x4], // 0x1B64
        pub m_fLastShotTime: [u8; 0x4], // 0x1B68
        pub m_bWasOwnedByCT: [u8; 0x1], // 0x1B6C
        pub m_bWasOwnedByTerrorist: [u8; 0x3], // 0x1B6D
        pub m_flNextClientFireBulletTime: [u8; 0x4], // 0x1B70
        pub m_flNextClientFireBulletTime_Repredict: [u8; 0x5C], // 0x1B74
        pub m_IronSightController: [u8; 0xB0], // 0x1BD0
        pub m_iIronSightMode: [u8; 0x78], // 0x1C80
        pub m_flLastLOSTraceFailureTime: [u8; 0x60], // 0x1CF8
        pub m_flWatTickOffset: [u8; 0x14], // 0x1D58
        pub m_flLastShakeTime: [u8; 0x1B4], // 0x1D6C
    }
    #[repr(C)]
    pub struct CTimeline {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_flValues: [u8; 0x100], // 0x10
        pub m_nValueCounts: [u8; 0x100], // 0x110
        pub m_nBucketCount: [u8; 0x4], // 0x210
        pub m_flInterval: [u8; 0x4], // 0x214
        pub m_flFinalValue: [u8; 0x4], // 0x218
        pub m_nCompressionType: [u8; 0x4], // 0x21C
        pub m_bStopped: [u8; 0x8], // 0x220
    }
    #[repr(C)]
    pub struct C_TonemapController2 {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_flAutoExposureMin: [u8; 0x4], // 0x600
        pub m_flAutoExposureMax: [u8; 0x4], // 0x604
        pub m_flExposureAdaptationSpeedUp: [u8; 0x4], // 0x608
        pub m_flExposureAdaptationSpeedDown: [u8; 0x4], // 0x60C
        pub m_flTonemapEVSmoothingRange: [u8; 0x8], // 0x610
    }
    #[repr(C)]
    pub struct CountdownTimer {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_duration: [u8; 0x4], // 0x8
        pub m_timestamp: [u8; 0x4], // 0xC
        pub m_timescale: [u8; 0x4], // 0x10
        pub m_nWorldGroupId: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct CNoiseStreamData {
        pub m_Stream: [u8; 0x50], // 0x0
    }
    #[repr(C)]
    pub struct PulseNodeDynamicOutflows_t__DynamicOutflow_t {
        pub m_OutflowID: [u8; 0x8], // 0x0
        pub m_Connection: [u8; 0x48], // 0x8
    }
    #[repr(C)]
    pub struct C_WeaponMag7 {
        pub pad_0: [u8; 0x1F50], // 0x0
    }
    #[repr(C)]
    pub struct WeaponPurchaseCount_t {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_nItemDefIndex: [u8; 0x2], // 0x30
        pub m_nCount: [u8; 0x6], // 0x32
    }
    #[repr(C)]
    pub struct CBasePulseGraphInstance {
        pub pad_0: [u8; 0x88], // 0x0
    }
    #[repr(C)]
    pub struct FilterHealth {
        pub pad_0: [u8; 0x638], // 0x0
        pub m_bAdrenalineActive: [u8; 0x4], // 0x638
        pub m_iHealthMin: [u8; 0x4], // 0x63C
        pub m_iHealthMax: [u8; 0x8], // 0x640
    }
    #[repr(C)]
    pub struct C_PointClientUIHUD {
        pub pad_0: [u8; 0x10D0], // 0x0
        pub m_bCheckCSSClasses: [u8; 0x178], // 0x10D0
        pub m_bIgnoreInput: [u8; 0x4], // 0x1248
        pub m_flWidth: [u8; 0x4], // 0x124C
        pub m_flHeight: [u8; 0x4], // 0x1250
        pub m_flDPI: [u8; 0x4], // 0x1254
        pub m_flInteractDistance: [u8; 0x4], // 0x1258
        pub m_flDepthOffset: [u8; 0x4], // 0x125C
        pub m_unOwnerContext: [u8; 0x4], // 0x1260
        pub m_unHorizontalAlign: [u8; 0x4], // 0x1264
        pub m_unVerticalAlign: [u8; 0x4], // 0x1268
        pub m_unOrientation: [u8; 0x4], // 0x126C
        pub m_bAllowInteractionFromAllSceneWorlds: [u8; 0x8], // 0x1270
        pub m_vecCSSClasses: [u8; 0x18], // 0x1278
    }
    #[repr(C)]
    pub struct CPulseCell_Inflow_GraphHook {
        pub pad_0: [u8; 0x80], // 0x0
        pub m_HookName: [u8; 0x10], // 0x80
    }
    #[repr(C)]
    pub struct SignatureOutflow_Resume {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct C_InfoLadderDismount {
        pub pad_0: [u8; 0x600], // 0x0
    }
    #[repr(C)]
    pub struct C_PointCommentaryNode {
        pub pad_0: [u8; 0x1280], // 0x0
        pub m_bActive: [u8; 0x1], // 0x1280
        pub m_bWasActive: [u8; 0x3], // 0x1281
        pub m_flEndTime: [u8; 0x4], // 0x1284
        pub m_flStartTime: [u8; 0x4], // 0x1288
        pub m_flStartTimeInCommentary: [u8; 0x4], // 0x128C
        pub m_iszCommentaryFile: [u8; 0x8], // 0x1290
        pub m_iszTitle: [u8; 0x8], // 0x1298
        pub m_iszSpeakers: [u8; 0x8], // 0x12A0
        pub m_iNodeNumber: [u8; 0x4], // 0x12A8
        pub m_iNodeNumberMax: [u8; 0x4], // 0x12AC
        pub m_bListenedTo: [u8; 0x8], // 0x12B0
        pub m_sndCommentary: [u8; 0x8], // 0x12B8
        pub m_hViewPosition: [u8; 0x4], // 0x12C0
        pub m_bRestartAfterRestore: [u8; 0x4], // 0x12C4
    }
    #[repr(C)]
    pub struct CSpriteOriented {
        pub pad_0: [u8; 0x1118], // 0x0
    }
    #[repr(C)]
    pub struct shard_model_desc_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_nModelID: [u8; 0x8], // 0x8
        pub m_hMaterialBase: [u8; 0x8], // 0x10
        pub m_hMaterialDamageOverlay: [u8; 0x8], // 0x18
        pub m_solid: [u8; 0x4], // 0x20
        pub m_vecPanelSize: [u8; 0x8], // 0x24
        pub m_vecStressPositionA: [u8; 0x8], // 0x2C
        pub m_vecStressPositionB: [u8; 0xC], // 0x34
        pub m_vecPanelVertices: [u8; 0x18], // 0x40
        pub m_vInitialPanelVertices: [u8; 0x18], // 0x58
        pub m_flGlassHalfThickness: [u8; 0x4], // 0x70
        pub m_bHasParent: [u8; 0x1], // 0x74
        pub m_bParentFrozen: [u8; 0x3], // 0x75
        pub m_SurfacePropStringToken: [u8; 0x8], // 0x78
    }
    #[repr(C)]
    pub struct C_KeychainModule {
        pub pad_0: [u8; 0x1270], // 0x0
        pub m_nKeychainDefID: [u8; 0x4], // 0x1270
        pub m_nKeychainSeed: [u8; 0x4], // 0x1274
    }
    #[repr(C)]
    pub struct CFuncWater {
        pub pad_0: [u8; 0x1098], // 0x0
        pub m_BuoyancyHelper: [u8; 0x118], // 0x1098
    }
    #[repr(C)]
    pub struct CCSPlayer_GlowServices {
        pub pad_0: [u8; 0x50], // 0x0
    }
    #[repr(C)]
    pub struct CCSGameModeRules {
        pub pad_0: [u8; 0x8], // 0x0
        pub __m_pChainEntity: [u8; 0x28], // 0x8
    }
    #[repr(C)]
    pub struct C_Flashbang {
        pub pad_0: [u8; 0x1FE0], // 0x0
    }
    #[repr(C)]
    pub struct C_PointClientUIWorldTextPanel {
        pub pad_0: [u8; 0x1300], // 0x0
        pub m_messageText: [u8; 0x200], // 0x1300
    }
    #[repr(C)]
    pub struct CCSPlayer_WaterServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_flWaterJumpTime: [u8; 0x4], // 0x48
        pub m_vecWaterJumpVel: [u8; 0xC], // 0x4C
        pub m_flSwimSoundTime: [u8; 0x18], // 0x58
    }
    #[repr(C)]
    pub struct C_CSObserverPawn {
        pub pad_0: [u8; 0x1568], // 0x0
        pub m_hDetectParentChange: [u8; 0x8], // 0x1568
    }
    #[repr(C)]
    pub struct ViewAngleServerChange_t {
        pub pad_0: [u8; 0x30], // 0x0
        pub nType: [u8; 0x4], // 0x30
        pub qAngle: [u8; 0xC], // 0x34
        pub nIndex: [u8; 0x8], // 0x40
    }
    #[repr(C)]
    pub struct C_FuncLadder {
        pub pad_0: [u8; 0x1098], // 0x0
        pub m_vecLadderDir: [u8; 0x10], // 0x1098
        pub m_Dismounts: [u8; 0x18], // 0x10A8
        pub m_vecLocalTop: [u8; 0xC], // 0x10C0
        pub m_vecPlayerMountPositionTop: [u8; 0xC], // 0x10CC
        pub m_vecPlayerMountPositionBottom: [u8; 0xC], // 0x10D8
        pub m_flAutoRideSpeed: [u8; 0x4], // 0x10E4
        pub m_bDisabled: [u8; 0x1], // 0x10E8
        pub m_bFakeLadder: [u8; 0x1], // 0x10E9
        pub m_bHasSlack: [u8; 0x6], // 0x10EA
    }
    #[repr(C)]
    pub struct C_WeaponMP5SD {
        pub pad_0: [u8; 0x1F50], // 0x0
    }
    #[repr(C)]
    pub struct C_World {
        pub pad_0: [u8; 0x1098], // 0x0
    }
    #[repr(C)]
    pub struct C_CSGO_TeamSelectCounterTerroristPosition {
        pub pad_0: [u8; 0x1D18], // 0x0
    }
    #[repr(C)]
    pub struct C_WeaponGalilAR {
        pub pad_0: [u8; 0x1F50], // 0x0
    }
    #[repr(C)]
    pub struct CCSPlayerBase_CameraServices {
        pub pad_0: [u8; 0x298], // 0x0
        pub m_iFOV: [u8; 0x4], // 0x298
        pub m_iFOVStart: [u8; 0x4], // 0x29C
        pub m_flFOVTime: [u8; 0x4], // 0x2A0
        pub m_flFOVRate: [u8; 0x4], // 0x2A4
        pub m_hZoomOwner: [u8; 0x4], // 0x2A8
        pub m_flLastShotFOV: [u8; 0x4], // 0x2AC
    }
    #[repr(C)]
    pub struct C_TeamplayRules {
        pub pad_0: [u8; 0x40], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_Inflow_BaseEntrypoint {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_EntryChunk: [u8; 0x8], // 0x48
        pub m_RegisterMap: [u8; 0x30], // 0x50
    }
    #[repr(C)]
    pub struct C_WeaponSG556 {
        pub pad_0: [u8; 0x1F50], // 0x0
    }
    #[repr(C)]
    pub struct C_CSPlayerPawn {
        pub pad_0: [u8; 0x1570], // 0x0
        pub m_pBulletServices: [u8; 0x8], // 0x1570
        pub m_pHostageServices: [u8; 0x8], // 0x1578
        pub m_pBuyServices: [u8; 0x8], // 0x1580
        pub m_pGlowServices: [u8; 0x8], // 0x1588
        pub m_pActionTrackingServices: [u8; 0x8], // 0x1590
        pub m_pAimPunchServices: [u8; 0x8], // 0x1598
        pub m_pDamageReactServices: [u8; 0x8], // 0x15A0
        pub m_flHealthShotBoostExpirationTime: [u8; 0x4], // 0x15A8
        pub m_flLastFiredWeaponTime: [u8; 0x4], // 0x15AC
        pub m_bHasFemaleVoice: [u8; 0x4], // 0x15B0
        pub m_flLandingTimeSeconds: [u8; 0x4], // 0x15B4
        pub m_flOldFallVelocity: [u8; 0x4], // 0x15B8
        pub m_szLastPlaceName: [u8; 0x12], // 0x15BC
        pub m_bPrevDefuser: [u8; 0x1], // 0x15CE
        pub m_bPrevHelmet: [u8; 0x1], // 0x15CF
        pub m_nPrevArmorVal: [u8; 0x4], // 0x15D0
        pub m_nPrevGrenadeAmmoCount: [u8; 0x4], // 0x15D4
        pub m_unPreviousWeaponHash: [u8; 0x4], // 0x15D8
        pub m_unWeaponHash: [u8; 0x4], // 0x15DC
        pub m_bInBuyZone: [u8; 0x1], // 0x15E0
        pub m_bPreviouslyInBuyZone: [u8; 0x1], // 0x15E1
        pub m_bInLanding: [u8; 0x2], // 0x15E2
        pub m_flLandingStartTime: [u8; 0x4], // 0x15E4
        pub m_bInHostageRescueZone: [u8; 0x1], // 0x15E8
        pub m_bInBombZone: [u8; 0x1], // 0x15E9
        pub m_bIsBuyMenuOpen: [u8; 0x2], // 0x15EA
        pub m_flTimeOfLastInjury: [u8; 0x4], // 0x15EC
        pub m_flNextSprayDecalTime: [u8; 0x168], // 0x15F0
        pub m_iRetakesOffering: [u8; 0x4], // 0x1758
        pub m_iRetakesOfferingCard: [u8; 0x4], // 0x175C
        pub m_bRetakesHasDefuseKit: [u8; 0x1], // 0x1760
        pub m_bRetakesMVPLastRound: [u8; 0x3], // 0x1761
        pub m_iRetakesMVPBoostItem: [u8; 0x4], // 0x1764
        pub m_RetakesMVPBoostExtraUtility: [u8; 0x5], // 0x1768
        pub m_bNeedToReApplyGloves: [u8; 0x3], // 0x176D
        pub m_EconGloves: [u8; 0x5B0], // 0x1770
        pub m_nEconGlovesChanged: [u8; 0x1], // 0x1D20
        pub m_bMustSyncRagdollState: [u8; 0x3], // 0x1D21
        pub m_nRagdollDamageBone: [u8; 0x4], // 0x1D24
        pub m_vRagdollDamageForce: [u8; 0xC], // 0x1D28
        pub m_szRagdollDamageWeaponName: [u8; 0x40], // 0x1D34
        pub m_bRagdollDamageHeadshot: [u8; 0x4], // 0x1D74
        pub m_vRagdollServerOrigin: [u8; 0xC], // 0x1D78
        pub m_lastLandTime: [u8; 0x4], // 0x1D84
        pub m_bOnGroundLastTick: [u8; 0x20], // 0x1D88
        pub m_hHudModelArms: [u8; 0x4], // 0x1DA8
        pub m_qDeathEyeAngles: [u8; 0xC], // 0x1DAC
        pub m_bLeftHanded: [u8; 0x4], // 0x1DB8
        pub m_fSwitchedHandednessTime: [u8; 0x4], // 0x1DBC
        pub m_flViewmodelOffsetX: [u8; 0x4], // 0x1DC0
        pub m_flViewmodelOffsetY: [u8; 0x4], // 0x1DC4
        pub m_flViewmodelOffsetZ: [u8; 0x4], // 0x1DC8
        pub m_flViewmodelFOV: [u8; 0x4], // 0x1DCC
        pub m_vecPlayerPatchEconIndices: [u8; 0x48], // 0x1DD0
        pub m_GunGameImmunityColor: [u8; 0x50], // 0x1E18
        pub m_vecBulletHitModels: [u8; 0x18], // 0x1E68
        pub m_bIsWalking: [u8; 0x8], // 0x1E80
        pub m_entitySpottedState: [u8; 0x18], // 0x1E88
        pub m_bIsScoped: [u8; 0x1], // 0x1EA0
        pub m_bResumeZoom: [u8; 0x1], // 0x1EA1
        pub m_bIsDefusing: [u8; 0x1], // 0x1EA2
        pub m_bIsGrabbingHostage: [u8; 0x1], // 0x1EA3
        pub m_iBlockingUseActionInProgress: [u8; 0x4], // 0x1EA4
        pub m_flEmitSoundTime: [u8; 0x4], // 0x1EA8
        pub m_flEmitSoundTime_Client: [u8; 0x4], // 0x1EAC
        pub m_bInNoDefuseArea: [u8; 0x4], // 0x1EB0
        pub m_nWhichBombZone: [u8; 0x4], // 0x1EB4
        pub m_iShotsFired: [u8; 0x4], // 0x1EB8
        pub m_flFlinchStack: [u8; 0x4], // 0x1EBC
        pub m_flVelocityModifier: [u8; 0x4], // 0x1EC0
        pub m_bWaitForNoAttack: [u8; 0x4], // 0x1EC4
        pub m_ignoreLadderJumpTime: [u8; 0x5], // 0x1EC8
        pub m_bKilledByHeadshot: [u8; 0x3], // 0x1ECD
        pub m_ArmorValue: [u8; 0x4], // 0x1ED0
        pub m_unCurrentEquipmentValue: [u8; 0x2], // 0x1ED4
        pub m_unRoundStartEquipmentValue: [u8; 0x2], // 0x1ED6
        pub m_unFreezetimeEndEquipmentValue: [u8; 0x4], // 0x1ED8
        pub m_nLastKillerIndex: [u8; 0x4], // 0x1EDC
        pub m_bOldIsScoped: [u8; 0x1], // 0x1EE0
        pub m_bHasDeathInfo: [u8; 0x3], // 0x1EE1
        pub m_flDeathInfoTime: [u8; 0x4], // 0x1EE4
        pub m_vecDeathInfoOrigin: [u8; 0x38], // 0x1EE8
        pub m_grenadeParameterStashTime: [u8; 0x4], // 0x1F20
        pub m_bGrenadeParametersStashed: [u8; 0x4], // 0x1F24
        pub m_angStashedShootAngles: [u8; 0xC], // 0x1F28
        pub m_vecStashedGrenadeThrowPosition: [u8; 0xC], // 0x1F34
        pub m_vecStashedGrenadeThrowPawnCenter: [u8; 0xC], // 0x1F40
        pub m_vecStashedVelocity: [u8; 0xC], // 0x1F4C
        pub m_flInterpolatedInaccuracy: [u8; 0x15A8], // 0x1F58
        pub m_bShouldAutobuyDMWeapons: [u8; 0x4], // 0x3500
        pub m_fImmuneToGunGameDamageTime: [u8; 0x4], // 0x3504
        pub m_bGunGameImmunity: [u8; 0x4], // 0x3508
        pub m_fImmuneToGunGameDamageTimeLast: [u8; 0x4], // 0x350C
        pub m_flBigHeadScale: [u8; 0x4], // 0x3510
        pub m_fMolotovDamageTime: [u8; 0x74], // 0x3514
        pub m_nPlayerInfernoBodyFx: [u8; 0x78], // 0x3588
        pub m_angEyeAngles: [u8; 0x90], // 0x3600
        pub m_arrOldEyeAnglesTimes: [u8; 0x10], // 0x3690
        pub m_arrOldEyeAngles: [u8; 0x30], // 0x36A0
        pub m_angEyeAnglesVelocity: [u8; 0xC], // 0x36D0
        pub m_iIDEntIndex: [u8; 0x4], // 0x36DC
        pub m_delayTargetIDTimer: [u8; 0x18], // 0x36E0
        pub m_iTargetItemEntIdx: [u8; 0x4], // 0x36F8
        pub m_iOldIDEntIndex: [u8; 0x4], // 0x36FC
        pub m_holdTargetIDTimer: [u8; 0x20], // 0x3700
    }
    #[repr(C)]
    pub struct C_CSGO_TeamIntroTerroristPosition {
        pub pad_0: [u8; 0x1D18], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_WaitForCursorsWithTagBase {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_nCursorsAllowedToWait: [u8; 0x8], // 0xD8
        pub m_WaitComplete: [u8; 0x48], // 0xE0
    }
    #[repr(C)]
    pub struct C_Hostage {
        pub pad_0: [u8; 0x12F0], // 0x0
        pub m_entitySpottedState: [u8; 0x18], // 0x12F0
        pub m_leader: [u8; 0x8], // 0x1308
        pub m_reuseTimer: [u8; 0x18], // 0x1310
        pub m_vel: [u8; 0xC], // 0x1328
        pub m_isRescued: [u8; 0x1], // 0x1334
        pub m_jumpedThisFrame: [u8; 0x3], // 0x1335
        pub m_nHostageState: [u8; 0x4], // 0x1338
        pub m_bHandsHaveBeenCut: [u8; 0x4], // 0x133C
        pub m_hHostageGrabber: [u8; 0x4], // 0x1340
        pub m_fLastGrabTime: [u8; 0x4], // 0x1344
        pub m_vecGrabbedPos: [u8; 0xC], // 0x1348
        pub m_flRescueStartTime: [u8; 0x4], // 0x1354
        pub m_flGrabSuccessTime: [u8; 0x4], // 0x1358
        pub m_flDropStartTime: [u8; 0x4], // 0x135C
        pub m_flDeadOrRescuedTime: [u8; 0x8], // 0x1360
        pub m_blinkTimer: [u8; 0x18], // 0x1368
        pub m_lookAt: [u8; 0x10], // 0x1380
        pub m_lookAroundTimer: [u8; 0x18], // 0x1390
        pub m_isInit: [u8; 0x1], // 0x13A8
        pub m_eyeAttachment: [u8; 0x1], // 0x13A9
        pub m_chestAttachment: [u8; 0x6], // 0x13AA
        pub m_pPredictionOwner: [u8; 0x8], // 0x13B0
        pub m_fNewestAlphaThinkTime: [u8; 0x8], // 0x13B8
    }
    #[repr(C)]
    pub struct C_fogplayerparams_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_hCtrl: [u8; 0x4], // 0x8
        pub m_flTransitionTime: [u8; 0x4], // 0xC
        pub m_OldColor: [u8; 0x4], // 0x10
        pub m_flOldStart: [u8; 0x4], // 0x14
        pub m_flOldEnd: [u8; 0x4], // 0x18
        pub m_flOldMaxDensity: [u8; 0x4], // 0x1C
        pub m_flOldHDRColorScale: [u8; 0x4], // 0x20
        pub m_flOldFarZ: [u8; 0x4], // 0x24
        pub m_NewColor: [u8; 0x4], // 0x28
        pub m_flNewStart: [u8; 0x4], // 0x2C
        pub m_flNewEnd: [u8; 0x4], // 0x30
        pub m_flNewMaxDensity: [u8; 0x4], // 0x34
        pub m_flNewHDRColorScale: [u8; 0x4], // 0x38
        pub m_flNewFarZ: [u8; 0x4], // 0x3C
    }
    #[repr(C)]
    pub struct CGameSceneNode {
        pub m_bDirtyHierarchy: [u8; 0x10], // 0x0
        pub m_nodeToWorld: [u8; 0x20], // 0x10
        pub m_pOwner: [u8; 0x8], // 0x30
        pub m_pParent: [u8; 0x8], // 0x38
        pub m_pChild: [u8; 0x8], // 0x40
        pub m_pNextSibling: [u8; 0x28], // 0x48
        pub m_hParent: [u8; 0x10], // 0x70
        pub m_vecOrigin: [u8; 0x38], // 0x80
        pub m_angRotation: [u8; 0xC], // 0xB8
        pub m_flScale: [u8; 0x4], // 0xC4
        pub m_vecAbsOrigin: [u8; 0xC], // 0xC8
        pub m_angAbsRotation: [u8; 0xC], // 0xD4
        pub m_flAbsScale: [u8; 0x4], // 0xE0
        pub m_vecWrappedLocalOrigin: [u8; 0xC], // 0xE4
        pub m_angWrappedLocalRotation: [u8; 0xC], // 0xF0
        pub m_flWrappedScale: [u8; 0x4], // 0xFC
        pub m_nParentAttachmentOrBone: [u8; 0x2], // 0x100
        pub m_bDebugAbsOriginChanges: [u8; 0x1], // 0x102
        pub m_bDormant: [u8; 0x1], // 0x103
        pub m_bForceParentToBeNetworked: [u8; 0x3], // 0x104
        pub m_nHierarchicalDepth: [u8; 0x1], // 0x107
        pub m_nHierarchyType: [u8; 0x1], // 0x108
        pub m_nDoNotSetAnimTimeInInvalidatePhysicsCount: [u8; 0x3], // 0x109
        pub m_name: [u8; 0x14], // 0x10C
        pub m_hierarchyAttachName: [u8; 0x4], // 0x120
        pub m_flClientLocalScale: [u8; 0xC], // 0x124
    }
    #[repr(C)]
    pub struct CPlayer_ObserverServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_iObserverMode: [u8; 0x4], // 0x48
        pub m_hObserverTarget: [u8; 0x4], // 0x4C
        pub m_iObserverLastMode: [u8; 0x4], // 0x50
        pub m_bForcedObserverMode: [u8; 0x4], // 0x54
        pub m_flObserverChaseDistance: [u8; 0x4], // 0x58
        pub m_flObserverChaseDistanceCalcTime: [u8; 0x4], // 0x5C
    }
    #[repr(C)]
    pub struct CCashStack {
        pub pad_0: [u8; 0x1098], // 0x0
        pub m_nCashStackValue: [u8; 0x8], // 0x1098
    }
    #[repr(C)]
    pub struct C_SoundAreaEntityBase {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_bDisabled: [u8; 0x8], // 0x600
        pub m_bWasEnabled: [u8; 0x8], // 0x608
        pub m_iszSoundAreaType: [u8; 0x8], // 0x610
        pub m_vPos: [u8; 0x10], // 0x618
    }
    #[repr(C)]
    pub struct C_PlayerVisibility {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_flVisibilityStrength: [u8; 0x4], // 0x600
        pub m_flFogDistanceMultiplier: [u8; 0x4], // 0x604
        pub m_flFogMaxDensityMultiplier: [u8; 0x4], // 0x608
        pub m_flFadeTime: [u8; 0x4], // 0x60C
        pub m_bStartDisabled: [u8; 0x1], // 0x610
        pub m_bIsEnabled: [u8; 0x1F], // 0x611
    }
    #[repr(C)]
    pub struct CAttributeManager__cached_attribute_float_t {
        pub flIn: [u8; 0x8], // 0x0
        pub iAttribHook: [u8; 0x8], // 0x8
        pub flOut: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct C_BasePlayerWeapon {
        pub pad_0: [u8; 0x1918], // 0x0
        pub m_nNextPrimaryAttackTick: [u8; 0x4], // 0x1918
        pub m_flNextPrimaryAttackTickRatio: [u8; 0x4], // 0x191C
        pub m_nNextSecondaryAttackTick: [u8; 0x4], // 0x1920
        pub m_flNextSecondaryAttackTickRatio: [u8; 0x4], // 0x1924
        pub m_iClip1: [u8; 0x4], // 0x1928
        pub m_iClip2: [u8; 0x4], // 0x192C
        pub m_pReserveAmmo: [u8; 0x20], // 0x1930
    }
    #[repr(C)]
    pub struct CRagdollManager {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_iCurrentMaxRagdollCount: [u8; 0x8], // 0x600
    }
    #[repr(C)]
    pub struct CSoundOpvarSetBoxEntity {
        pub pad_0: [u8; 0x620], // 0x0
    }
    #[repr(C)]
    pub struct C_HEGrenade {
        pub pad_0: [u8; 0x1FE0], // 0x0
    }
    #[repr(C)]
    pub struct C_EnvSky {
        pub pad_0: [u8; 0x1098], // 0x0
        pub m_hSkyMaterial: [u8; 0x8], // 0x1098
        pub m_hSkyMaterialLightingOnly: [u8; 0x8], // 0x10A0
        pub m_bStartDisabled: [u8; 0x4], // 0x10A8
        pub m_vTintColor: [u8; 0x4], // 0x10AC
        pub m_vTintColorLightingOnly: [u8; 0x4], // 0x10B0
        pub m_flBrightnessScale: [u8; 0x4], // 0x10B4
        pub m_nFogType: [u8; 0x4], // 0x10B8
        pub m_flFogMinStart: [u8; 0x4], // 0x10BC
        pub m_flFogMinEnd: [u8; 0x4], // 0x10C0
        pub m_flFogMaxStart: [u8; 0x4], // 0x10C4
        pub m_flFogMaxEnd: [u8; 0x4], // 0x10C8
        pub m_bEnabled: [u8; 0x2C], // 0x10CC
    }
    #[repr(C)]
    pub struct CPulse_InvokeBinding {
        pub m_RegisterMap: [u8; 0x30], // 0x0
        pub m_FuncName: [u8; 0x10], // 0x30
        pub m_nCellIndex: [u8; 0x4], // 0x40
        pub m_nSrcChunk: [u8; 0x4], // 0x44
        pub m_nSrcInstruction: [u8; 0x68], // 0x48
    }
    #[repr(C)]
    pub struct C_GameRules {
        pub pad_0: [u8; 0x8], // 0x0
        pub __m_pChainEntity: [u8; 0x28], // 0x8
        pub m_nTotalPausedTicks: [u8; 0x4], // 0x30
        pub m_nPauseStartTick: [u8; 0x4], // 0x34
        pub m_bGamePaused: [u8; 0x8], // 0x38
    }
    #[repr(C)]
    pub struct C_WeaponMAC10 {
        pub pad_0: [u8; 0x1F50], // 0x0
    }
    #[repr(C)]
    pub struct C_CSGO_MapPreviewCameraPath {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_flZFar: [u8; 0x4], // 0x600
        pub m_flZNear: [u8; 0x4], // 0x604
        pub m_bLoop: [u8; 0x1], // 0x608
        pub m_bVerticalFOV: [u8; 0x1], // 0x609
        pub m_bConstantSpeed: [u8; 0x2], // 0x60A
        pub m_flDuration: [u8; 0x44], // 0x60C
        pub m_flPathLength: [u8; 0x4], // 0x650
        pub m_flPathDuration: [u8; 0x18], // 0x654
        pub m_bDofEnabled: [u8; 0x4], // 0x66C
        pub m_flDofNearBlurry: [u8; 0x4], // 0x670
        pub m_flDofNearCrisp: [u8; 0x4], // 0x674
        pub m_flDofFarCrisp: [u8; 0x4], // 0x678
        pub m_flDofFarBlurry: [u8; 0x4], // 0x67C
        pub m_flDofTiltToGround: [u8; 0x8], // 0x680
    }
    #[repr(C)]
    pub struct C_PointWorldText {
        pub pad_0: [u8; 0x10A0], // 0x0
        pub m_bForceRecreateNextUpdate: [u8; 0x18], // 0x10A0
        pub m_nTextWidthPx: [u8; 0x4], // 0x10B8
        pub m_nTextHeightPx: [u8; 0x4], // 0x10BC
        pub m_messageText: [u8; 0x200], // 0x10C0
        pub m_FontName: [u8; 0x40], // 0x12C0
        pub m_BackgroundMaterialName: [u8; 0x40], // 0x1300
        pub m_bEnabled: [u8; 0x1], // 0x1340
        pub m_bFullbright: [u8; 0x3], // 0x1341
        pub m_flWorldUnitsPerPx: [u8; 0x4], // 0x1344
        pub m_flFontSize: [u8; 0x4], // 0x1348
        pub m_flDepthOffset: [u8; 0x4], // 0x134C
        pub m_bDrawBackground: [u8; 0x4], // 0x1350
        pub m_flBackgroundBorderWidth: [u8; 0x4], // 0x1354
        pub m_flBackgroundBorderHeight: [u8; 0x4], // 0x1358
        pub m_flBackgroundWorldToUV: [u8; 0x4], // 0x135C
        pub m_Color: [u8; 0x4], // 0x1360
        pub m_nJustifyHorizontal: [u8; 0x4], // 0x1364
        pub m_nJustifyVertical: [u8; 0x4], // 0x1368
        pub m_nReorientMode: [u8; 0x4], // 0x136C
    }
    #[repr(C)]
    pub struct C_RopeKeyframe {
        pub m_bEndPointAttachmentPositionsDirty: [u8; 0x10A0], // 0x0
        pub m_LinksTouchingSomething: [u8; 0x4], // 0x10A0
        pub m_nLinksTouchingSomething: [u8; 0x4], // 0x10A4
        pub m_bApplyWind: [u8; 0x4], // 0x10A8
        pub m_fPrevLockedPoints: [u8; 0x4], // 0x10AC
        pub m_iForcePointMoveCounter: [u8; 0x4], // 0x10B0
        pub m_bPrevEndPointPos: [u8; 0x4], // 0x10B4
        pub m_vPrevEndPointPos: [u8; 0x18], // 0x10B8
        pub m_flCurScroll: [u8; 0x4], // 0x10D0
        pub m_flScrollSpeed: [u8; 0x4], // 0x10D4
        pub m_RopeFlags: [u8; 0x8], // 0x10D8
        pub m_iRopeMaterialModelIndex: [u8; 0x278], // 0x10E0
        pub m_nSegments: [u8; 0x4], // 0x1358
        pub m_hStartPoint: [u8; 0x4], // 0x135C
        pub m_hEndPoint: [u8; 0x4], // 0x1360
        pub m_iStartAttachment: [u8; 0x1], // 0x1364
        pub m_iEndAttachment: [u8; 0x1], // 0x1365
        pub m_Subdiv: [u8; 0x2], // 0x1366
        pub m_RopeLength: [u8; 0x2], // 0x1368
        pub m_Slack: [u8; 0x2], // 0x136A
        pub m_TextureScale: [u8; 0x4], // 0x136C
        pub m_fLockedPoints: [u8; 0x1], // 0x1370
        pub m_nChangeCount: [u8; 0x3], // 0x1371
        pub m_Width: [u8; 0x4], // 0x1374
        pub m_PhysicsDelegate: [u8; 0x10], // 0x1378
        pub m_hMaterial: [u8; 0x8], // 0x1388
        pub m_TextureHeight: [u8; 0x4], // 0x1390
        pub m_vecImpulse: [u8; 0xC], // 0x1394
        pub m_vecPreviousImpulse: [u8; 0xC], // 0x13A0
        pub m_flCurrentGustTimer: [u8; 0x4], // 0x13AC
        pub m_flCurrentGustLifetime: [u8; 0x4], // 0x13B0
        pub m_flTimeToNextGust: [u8; 0x4], // 0x13B4
        pub m_vWindDir: [u8; 0xC], // 0x13B8
        pub m_vColorMod: [u8; 0xC], // 0x13C4
        pub m_vCachedEndPointAttachmentPos: [u8; 0x18], // 0x13D0
        pub m_vCachedEndPointAttachmentAngle: [u8; 0x18], // 0x13E8
        pub m_bConstrainBetweenEndpoints: [u8; 0x8], // 0x1400
    }
    #[repr(C)]
    pub struct C_BaseToggle {
        pub pad_0: [u8; 0x1098], // 0x0
    }
    #[repr(C)]
    pub struct C_EnvCubemapBox {
        pub pad_0: [u8; 0x6E8], // 0x0
    }
    #[repr(C)]
    pub struct C_EnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume {
        pub pad_0: [u8; 0x7D8], // 0x0
    }
    #[repr(C)]
    pub struct C_RopeKeyframe__CPhysicsDelegate {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_pKeyframe: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct CInfoDynamicShadowHint {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_bDisabled: [u8; 0x4], // 0x600
        pub m_flRange: [u8; 0x4], // 0x604
        pub m_nImportance: [u8; 0x4], // 0x608
        pub m_nLightChoice: [u8; 0x4], // 0x60C
        pub m_hLight: [u8; 0x8], // 0x610
    }
    #[repr(C)]
    pub struct CPathNode {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_vInTangentLocal: [u8; 0xC], // 0x600
        pub m_vOutTangentLocal: [u8; 0xC], // 0x60C
        pub m_strParentPathUniqueID: [u8; 0x8], // 0x618
        pub m_strPathNodeParameter: [u8; 0x10], // 0x620
        pub m_xWSPrevParent: [u8; 0x20], // 0x630
        pub m_hPath: [u8; 0x10], // 0x650
    }
    #[repr(C)]
    pub struct C_FuncMoveLinear {
        pub pad_0: [u8; 0x1098], // 0x0
    }
    #[repr(C)]
    pub struct C_EnvShakeVolume {
        pub pad_0: [u8; 0x618], // 0x0
        pub m_vBoxMins: [u8; 0xC], // 0x618
        pub m_vBoxMaxs: [u8; 0xC], // 0x624
        pub m_flAmplitude: [u8; 0x4], // 0x630
        pub m_flFrequency: [u8; 0x4], // 0x634
        pub m_flFalloffDistance: [u8; 0x4], // 0x638
        pub m_flRollScale: [u8; 0x14], // 0x63C
    }
    #[repr(C)]
    pub struct CServerOnlyModelEntity {
        pub pad_0: [u8; 0x1098], // 0x0
    }
    #[repr(C)]
    pub struct C_CSGO_TeamSelectCamera {
        pub pad_0: [u8; 0x690], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_IntervalTimer {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_Completed: [u8; 0x48], // 0xD8
        pub m_OnInterval: [u8; 0x48], // 0x120
    }
    #[repr(C)]
    pub struct C_WeaponXM1014 {
        pub pad_0: [u8; 0x1F20], // 0x0
    }
    #[repr(C)]
    pub struct C_WorldModelGloves {
        pub pad_0: [u8; 0x1270], // 0x0
    }
    #[repr(C)]
    pub struct C_PhysicsPropMultiplayer {
        pub pad_0: [u8; 0x13F0], // 0x0
    }
    #[repr(C)]
    pub struct C_SoundEventOBBEntity {
        pub pad_0: [u8; 0x6C0], // 0x0
        pub m_vMins: [u8; 0xC], // 0x6C0
        pub m_vMaxs: [u8; 0x1C], // 0x6CC
    }
    #[repr(C)]
    pub struct CPulseCell_BaseLerp {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_WakeResume: [u8; 0x48], // 0xD8
    }
    #[repr(C)]
    pub struct C_WeaponAug {
        pub pad_0: [u8; 0x1F50], // 0x0
    }
    #[repr(C)]
    pub struct C_BasePropDoor {
        pub pad_0: [u8; 0x14C0], // 0x0
        pub m_eDoorState: [u8; 0x4], // 0x14C0
        pub m_modelChanged: [u8; 0x1], // 0x14C4
        pub m_bLocked: [u8; 0x1], // 0x14C5
        pub m_bNoNPCs: [u8; 0x2], // 0x14C6
        pub m_closedPosition: [u8; 0xC], // 0x14C8
        pub m_closedAngles: [u8; 0xC], // 0x14D4
        pub m_hMaster: [u8; 0x4], // 0x14E0
        pub m_vWhereToSetLightingOrigin: [u8; 0xC], // 0x14E4
    }
    #[repr(C)]
    pub struct CChoreoInfoTarget {
        pub pad_0: [u8; 0x600], // 0x0
    }
    #[repr(C)]
    pub struct CNetworkedSequenceOperation {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_hSequence: [u8; 0x4], // 0x8
        pub m_flPrevCycle: [u8; 0x4], // 0xC
        pub m_flCycle: [u8; 0x4], // 0x10
        pub m_flWeight: [u8; 0x8], // 0x14
        pub m_bSequenceChangeNetworked: [u8; 0x1], // 0x1C
        pub m_bDiscontinuity: [u8; 0x3], // 0x1D
        pub m_flPrevCycleFromDiscontinuity: [u8; 0x4], // 0x20
        pub m_flPrevCycleForAnimEventDetection: [u8; 0x4], // 0x24
    }
    #[repr(C)]
    pub struct C_Item_Healthshot {
        pub pad_0: [u8; 0x1F30], // 0x0
    }
    #[repr(C)]
    pub struct CCSCustomHudLayout {
        pub pad_0: [u8; 0x618], // 0x0
        pub m_strLayout: [u8; 0x8], // 0x618
        pub m_bObservable: [u8; 0x8], // 0x620
        pub m_vecPlayerLayoutStates: [u8; 0x68], // 0x628
        pub m_globalLayoutState: [u8; 0x108], // 0x690
        pub m_vecPanelIds: [u8; 0x18], // 0x798
        pub m_vecClassNames: [u8; 0x18], // 0x7B0
        pub m_vecDialogVariableNames: [u8; 0x78], // 0x7C8
    }
    #[repr(C)]
    pub struct CEntityInstance {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_iszPrivateVScripts: [u8; 0x8], // 0x8
        pub m_pEntity: [u8; 0x18], // 0x10
        pub m_CScriptComponent: [u8; 0x8], // 0x28
    }
    #[repr(C)]
    pub struct C_BaseModelEntity {
        pub pad_0: [u8; 0xAF8], // 0x0
        pub m_CRenderComponent: [u8; 0x8], // 0xAF8
        pub m_CHitboxComponent: [u8; 0x18], // 0xB00
        pub m_pChoreoComponent: [u8; 0x8], // 0xB18
        pub m_nDestructiblePartInitialStateDestructed0: [u8; 0x4], // 0xB20
        pub m_nDestructiblePartInitialStateDestructed1: [u8; 0x4], // 0xB24
        pub m_nDestructiblePartInitialStateDestructed2: [u8; 0x4], // 0xB28
        pub m_nDestructiblePartInitialStateDestructed3: [u8; 0x4], // 0xB2C
        pub m_nDestructiblePartInitialStateDestructed4: [u8; 0x4], // 0xB30
        pub m_nDestructiblePartInitialStateDestructed0_PartIndex: [u8; 0x4], // 0xB34
        pub m_nDestructiblePartInitialStateDestructed1_PartIndex: [u8; 0x4], // 0xB38
        pub m_nDestructiblePartInitialStateDestructed2_PartIndex: [u8; 0x4], // 0xB3C
        pub m_nDestructiblePartInitialStateDestructed3_PartIndex: [u8; 0x4], // 0xB40
        pub m_nDestructiblePartInitialStateDestructed4_PartIndex: [u8; 0x4], // 0xB44
        pub m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces: [u8; 0x1], // 0xB48
        pub m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces: [u8; 0x1], // 0xB49
        pub m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces: [u8; 0x1], // 0xB4A
        pub m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces: [u8; 0x1], // 0xB4B
        pub m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces: [u8; 0x4], // 0xB4C
        pub m_pDestructiblePartsSystemComponent: [u8; 0x128], // 0xB50
        pub m_bInitModelEffects: [u8; 0x1], // 0xC78
        pub m_bDoingModelEffects: [u8; 0x3], // 0xC79
        pub m_iOldHealth: [u8; 0x4], // 0xC7C
        pub m_nRenderMode: [u8; 0x1], // 0xC80
        pub m_nRenderFX: [u8; 0x1], // 0xC81
        pub m_bAllowFadeInView: [u8; 0x1E], // 0xC82
        pub m_clrRender: [u8; 0x8], // 0xCA0
        pub m_vecRenderAttributes: [u8; 0x80], // 0xCA8
        pub m_bRenderToCubemaps: [u8; 0x1], // 0xD28
        pub m_bExpandRenderBoundsToIncludeCloth: [u8; 0x1], // 0xD29
        pub m_bNoInterpolate: [u8; 0x6], // 0xD2A
        pub m_Collision: [u8; 0xB8], // 0xD30
        pub m_Glow: [u8; 0x58], // 0xDE8
        pub m_flGlowBackfaceMult: [u8; 0x4], // 0xE40
        pub m_fadeMinDist: [u8; 0x4], // 0xE44
        pub m_fadeMaxDist: [u8; 0x4], // 0xE48
        pub m_flFadeScale: [u8; 0x4], // 0xE4C
        pub m_flShadowStrength: [u8; 0x4], // 0xE50
        pub m_nObjectCulling: [u8; 0x1], // 0xE54
        pub m_nRequiredDecalRtEncoding: [u8; 0x3], // 0xE55
        pub m_bodyGroupTotalRequestCount: [u8; 0x8], // 0xE58
        pub m_bodyGroupRequests: [u8; 0xD8], // 0xE60
        pub m_bodyGroupChoices: [u8; 0x28], // 0xF38
        pub m_vecViewOffset: [u8; 0xE0], // 0xF60
        pub m_pClientAlphaProperty: [u8; 0x8], // 0x1040
        pub m_ClientOverrideTint: [u8; 0x4], // 0x1048
        pub m_bUseClientOverrideTint: [u8; 0x3C], // 0x104C
        pub m_bvDisabledHitGroups: [u8; 0x10], // 0x1088
    }
    #[repr(C)]
    pub struct CCSPlayer_BulletServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_totalHitsOnServer: [u8; 0x60], // 0x48
    }
    #[repr(C)]
    pub struct C_SoundOpvarSetAutoRoomEntity {
        pub pad_0: [u8; 0x620], // 0x0
    }
    #[repr(C)]
    pub struct C_EnvCombinedLightProbeVolume {
        pub pad_0: [u8; 0x718], // 0x0
        pub m_Entity_Color: [u8; 0x4], // 0x718
        pub m_Entity_flBrightness: [u8; 0x4], // 0x71C
        pub m_Entity_hCubemapTexture: [u8; 0x8], // 0x720
        pub m_Entity_bCustomCubemapTexture: [u8; 0x8], // 0x728
        pub m_Entity_hLightProbeTexture_AmbientCube: [u8; 0x8], // 0x730
        pub m_Entity_hLightProbeTexture_SDF: [u8; 0x8], // 0x738
        pub m_Entity_hLightProbeTexture_SH2_DC: [u8; 0x8], // 0x740
        pub m_Entity_hLightProbeTexture_SH2_L1: [u8; 0x8], // 0x748
        pub m_Entity_hLightProbeDirectLightIndicesTexture: [u8; 0x8], // 0x750
        pub m_Entity_hLightProbeDirectLightScalarsTexture: [u8; 0x8], // 0x758
        pub m_Entity_hLightProbeDirectLightShadowsTexture: [u8; 0x8], // 0x760
        pub m_Entity_vBoxMins: [u8; 0xC], // 0x768
        pub m_Entity_vBoxMaxs: [u8; 0xC], // 0x774
        pub m_Entity_bMoveable: [u8; 0x4], // 0x780
        pub m_Entity_nHandshake: [u8; 0x4], // 0x784
        pub m_Entity_nEnvCubeMapArrayIndex: [u8; 0x4], // 0x788
        pub m_Entity_nPriority: [u8; 0x4], // 0x78C
        pub m_Entity_bStartDisabled: [u8; 0x4], // 0x790
        pub m_Entity_flEdgeFadeDist: [u8; 0x4], // 0x794
        pub m_Entity_vEdgeFadeDists: [u8; 0xC], // 0x798
        pub m_Entity_nLightProbeSizeX: [u8; 0x4], // 0x7A4
        pub m_Entity_nLightProbeSizeY: [u8; 0x4], // 0x7A8
        pub m_Entity_nLightProbeSizeZ: [u8; 0x4], // 0x7AC
        pub m_Entity_nLightProbeAtlasX: [u8; 0x4], // 0x7B0
        pub m_Entity_nLightProbeAtlasY: [u8; 0x4], // 0x7B4
        pub m_Entity_nLightProbeAtlasZ: [u8; 0x19], // 0x7B8
        pub m_Entity_bEnabled: [u8; 0x7], // 0x7D1
    }
    #[repr(C)]
    pub struct CCSGO_EndOfMatchLineupEnd {
        pub pad_0: [u8; 0x600], // 0x0
    }
    #[repr(C)]
    pub struct C_MultiplayRules {
        pub pad_0: [u8; 0x40], // 0x0
    }
    #[repr(C)]
    pub struct CPlayer_AutoaimServices {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct C_LightDirectionalEntity {
        pub pad_0: [u8; 0x10A0], // 0x0
    }
    #[repr(C)]
    pub struct C_BaseEntity {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_CBodyComponent: [u8; 0x8], // 0x30
        pub m_NetworkTransmitComponent: [u8; 0x2F0], // 0x38
        pub m_nLastThinkTick: [u8; 0x8], // 0x328
        pub m_pGameSceneNode: [u8; 0x8], // 0x330
        pub m_pRenderComponent: [u8; 0x8], // 0x338
        pub m_pCollision: [u8; 0x8], // 0x340
        pub m_iMaxHealth: [u8; 0x4], // 0x348
        pub m_iHealth: [u8; 0x4], // 0x34C
        pub m_flDamageAccumulator: [u8; 0x4], // 0x350
        pub m_lifeState: [u8; 0x1], // 0x354
        pub m_bTakesDamage: [u8; 0x3], // 0x355
        pub m_nTakeDamageFlags: [u8; 0x8], // 0x358
        pub m_nPlatformType: [u8; 0x1], // 0x360
        pub m_ubInterpolationFrame: [u8; 0x3], // 0x361
        pub m_hSceneObjectController: [u8; 0x4], // 0x364
        pub m_nNoInterpolationTick: [u8; 0x4], // 0x368
        pub m_nVisibilityNoInterpolationTick: [u8; 0x4], // 0x36C
        pub m_flProxyRandomValue: [u8; 0x4], // 0x370
        pub m_iEFlags: [u8; 0x4], // 0x374
        pub m_nWaterType: [u8; 0x1], // 0x378
        pub m_bInterpolateEvenWithNoModel: [u8; 0x1], // 0x379
        pub m_bPredictionEligible: [u8; 0x1], // 0x37A
        pub m_bApplyLayerMatchIDToModel: [u8; 0x1], // 0x37B
        pub m_tokLayerMatchID: [u8; 0x4], // 0x37C
        pub m_nSubclassID: [u8; 0x10], // 0x380
        pub m_nSimulationTick: [u8; 0x4], // 0x390
        pub m_iCurrentThinkContext: [u8; 0x4], // 0x394
        pub m_aThinkFunctions: [u8; 0x18], // 0x398
        pub m_bDisabledContextThinks: [u8; 0x4], // 0x3B0
        pub m_flAnimTime: [u8; 0x4], // 0x3B4
        pub m_flSimulationTime: [u8; 0x4], // 0x3B8
        pub m_nSceneObjectOverrideFlags: [u8; 0x1], // 0x3BC
        pub m_bHasSuccessfullyInterpolated: [u8; 0x1], // 0x3BD
        pub m_bHasAddedVarsToInterpolation: [u8; 0x1], // 0x3BE
        pub m_bRenderEvenWhenNotSuccessfullyInterpolated: [u8; 0x1], // 0x3BF
        pub m_nInterpolationLatchDirtyFlags: [u8; 0x8], // 0x3C0
        pub m_ListEntry: [u8; 0x18], // 0x3C8
        pub m_flCreateTime: [u8; 0x4], // 0x3E0
        pub m_EntClientFlags: [u8; 0x2], // 0x3E4
        pub m_bClientSideRagdoll: [u8; 0x1], // 0x3E6
        pub m_iTeamNum: [u8; 0x1], // 0x3E7
        pub m_spawnflags: [u8; 0x4], // 0x3E8
        pub m_nNextThinkTick: [u8; 0x8], // 0x3EC
        pub m_fFlags: [u8; 0x4], // 0x3F4
        pub m_vecAbsVelocity: [u8; 0xC], // 0x3F8
        pub m_vecServerVelocity: [u8; 0x2C], // 0x404
        pub m_vecVelocity: [u8; 0xE0], // 0x430
        pub m_vecBaseVelocity: [u8; 0xC], // 0x510
        pub m_hEffectEntity: [u8; 0x4], // 0x51C
        pub m_hOwnerEntity: [u8; 0x4], // 0x520
        pub m_MoveCollide: [u8; 0x1], // 0x524
        pub m_MoveType: [u8; 0x1], // 0x525
        pub m_nActualMoveType: [u8; 0x2], // 0x526
        pub m_flWaterLevel: [u8; 0x4], // 0x528
        pub m_fEffects: [u8; 0x4], // 0x52C
        pub m_hGroundEntity: [u8; 0x4], // 0x530
        pub m_nGroundBodyIndex: [u8; 0x4], // 0x534
        pub m_flFriction: [u8; 0x4], // 0x538
        pub m_flElasticity: [u8; 0x4], // 0x53C
        pub m_flGravityScale: [u8; 0x4], // 0x540
        pub m_flTimeScale: [u8; 0x4], // 0x544
        pub m_bAnimatedEveryTick: [u8; 0x1], // 0x548
        pub m_bGravityDisabled: [u8; 0x3], // 0x549
        pub m_flNavIgnoreUntilTime: [u8; 0x4], // 0x54C
        pub m_hThink: [u8; 0x10], // 0x550
        pub m_fBBoxVisFlags: [u8; 0x4], // 0x560
        pub m_flActualGravityScale: [u8; 0x4], // 0x564
        pub m_bGravityActuallyDisabled: [u8; 0x1], // 0x568
        pub m_bPredictable: [u8; 0x1], // 0x569
        pub m_bRenderWithViewModels: [u8; 0x2], // 0x56A
        pub m_nFirstPredictableCommand: [u8; 0x4], // 0x56C
        pub m_nLastPredictableCommand: [u8; 0x4], // 0x570
        pub m_hOldMoveParent: [u8; 0x4], // 0x574
        pub m_Particles: [u8; 0x30], // 0x578
        pub m_vecAngVelocity: [u8; 0xC], // 0x5A8
        pub m_DataChangeEventRef: [u8; 0x4], // 0x5B4
        pub m_dependencies: [u8; 0x18], // 0x5B8
        pub m_nCreationTick: [u8; 0x11], // 0x5D0
        pub m_bAnimTimeChanged: [u8; 0x1], // 0x5E1
        pub m_bSimulationTimeChanged: [u8; 0xE], // 0x5E2
        pub m_sUniqueHammerID: [u8; 0x8], // 0x5F0
        pub m_nBloodType: [u8; 0x8], // 0x5F8
    }
    #[repr(C)]
    pub struct ActiveModelConfig_t {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_Handle: [u8; 0x8], // 0x30
        pub m_Name: [u8; 0x8], // 0x38
        pub m_AssociatedEntities: [u8; 0x18], // 0x40
        pub m_AssociatedEntityNames: [u8; 0x18], // 0x58
    }
    #[repr(C)]
    pub struct C_WeaponSSG08 {
        pub pad_0: [u8; 0x1F50], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_Value_Curve {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_Curve: [u8; 0x40], // 0x48
    }
    #[repr(C)]
    pub struct C_Chicken {
        pub pad_0: [u8; 0x14C0], // 0x0
        pub m_leader: [u8; 0x4], // 0x14C0
        pub m_owner: [u8; 0x4], // 0x14C4
        pub m_AttributeManager: [u8; 0x610], // 0x14C8
        pub m_bAttributesInitialized: [u8; 0x4], // 0x1AD8
        pub m_hWaterWakeParticles: [u8; 0x4], // 0x1ADC
        pub m_bIsPreviewModel: [u8; 0x88], // 0x1AE0
        pub m_bSpawnDyingParticles: [u8; 0x38], // 0x1B68
    }
    #[repr(C)]
    pub struct C_BasePlayerPawn {
        pub pad_0: [u8; 0x12F0], // 0x0
        pub m_pWeaponServices: [u8; 0x8], // 0x12F0
        pub m_pItemServices: [u8; 0x8], // 0x12F8
        pub m_pAutoaimServices: [u8; 0x8], // 0x1300
        pub m_pObserverServices: [u8; 0x8], // 0x1308
        pub m_pWaterServices: [u8; 0x8], // 0x1310
        pub m_pUseServices: [u8; 0x8], // 0x1318
        pub m_pFlashlightServices: [u8; 0x8], // 0x1320
        pub m_pCameraServices: [u8; 0x8], // 0x1328
        pub m_pMovementServices: [u8; 0x10], // 0x1330
        pub m_ServerViewAngleChanges: [u8; 0x68], // 0x1340
        pub v_angle: [u8; 0xC], // 0x13A8
        pub v_anglePrevious: [u8; 0xC], // 0x13B4
        pub m_iHideHUD: [u8; 0x8], // 0x13C0
        pub m_skybox3d: [u8; 0x90], // 0x13C8
        pub m_flDeathTime: [u8; 0x8], // 0x1458
        pub m_vecPredictionError: [u8; 0xC], // 0x1460
        pub m_flPredictionErrorTime: [u8; 0x20], // 0x146C
        pub m_vecLastCameraSetupLocalOrigin: [u8; 0xC], // 0x148C
        pub m_flLastCameraSetupTime: [u8; 0x4], // 0x1498
        pub m_flFOVSensitivityAdjust: [u8; 0x4], // 0x149C
        pub m_flMouseSensitivity: [u8; 0x4], // 0x14A0
        pub m_vOldOrigin: [u8; 0xC], // 0x14A4
        pub m_flOldSimulationTime: [u8; 0x4], // 0x14B0
        pub m_nLastExecutedCommandNumber: [u8; 0x4], // 0x14B4
        pub m_nLastExecutedCommandTick: [u8; 0x4], // 0x14B8
        pub m_hController: [u8; 0x4], // 0x14BC
        pub m_hDefaultController: [u8; 0x4], // 0x14C0
        pub m_bIsSwappingToPredictableController: [u8; 0x4], // 0x14C4
    }
    #[repr(C)]
    pub struct C_SoundOpvarSetAABBEntity {
        pub pad_0: [u8; 0x620], // 0x0
    }
    #[repr(C)]
    pub struct C_WeaponBizon {
        pub pad_0: [u8; 0x1F50], // 0x0
    }
    #[repr(C)]
    pub struct C_StattrakModule {
        pub pad_0: [u8; 0x1270], // 0x0
        pub m_bKnife: [u8; 0x8], // 0x1270
    }
    #[repr(C)]
    pub struct CCSObserver_CameraServices {
        pub pad_0: [u8; 0x2B0], // 0x0
        pub m_hPrevPostProcessingVolume: [u8; 0x8], // 0x2B0
    }
    #[repr(C)]
    pub struct CEnvSoundscapeProxy {
        pub pad_0: [u8; 0x690], // 0x0
        pub m_MainSoundscapeName: [u8; 0x8], // 0x690
    }
    #[repr(C)]
    pub struct C_SoundEventEntity {
        pub m_bClientSideOnly: [u8; 0x600], // 0x0
        pub m_bStartOnSpawn: [u8; 0x1], // 0x600
        pub m_bToLocalPlayer: [u8; 0x1], // 0x601
        pub m_bStopOnNew: [u8; 0x1], // 0x602
        pub m_bSaveRestore: [u8; 0x1], // 0x603
        pub m_bSavedIsPlaying: [u8; 0x4], // 0x604
        pub m_flSavedElapsedTime: [u8; 0x8], // 0x608
        pub m_iszSourceEntityName: [u8; 0x8], // 0x610
        pub m_iszAttachmentName: [u8; 0x8], // 0x618
        pub m_onGUIDChanged: [u8; 0x30], // 0x620
        pub m_onSoundFinished: [u8; 0x18], // 0x650
        pub m_flClientCullRadius: [u8; 0x30], // 0x668
        pub m_iszSoundName: [u8; 0x1C], // 0x698
        pub m_hSource: [u8; 0x4], // 0x6B4
        pub m_nEntityIndexSelection: [u8; 0x8], // 0x6B8
    }
    #[repr(C)]
    pub struct CPulseCell_Inflow_EventHandler {
        pub pad_0: [u8; 0x80], // 0x0
        pub m_EventName: [u8; 0x10], // 0x80
    }
    #[repr(C)]
    pub struct C_LightOrthoEntity {
        pub pad_0: [u8; 0x10A0], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_BaseFlow {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CBombTarget {
        pub pad_0: [u8; 0x1180], // 0x0
        pub m_bBombPlantedHere: [u8; 0x8], // 0x1180
    }
    #[repr(C)]
    pub struct C_Knife {
        pub pad_0: [u8; 0x1F20], // 0x0
        pub m_bFirstAttack: [u8; 0x10], // 0x1F20
    }
    #[repr(C)]
    pub struct C_CSGO_TerroristWingmanIntroCamera {
        pub pad_0: [u8; 0x690], // 0x0
    }
    #[repr(C)]
    pub struct CSkeletonInstance {
        pub pad_0: [u8; 0x140], // 0x0
        pub m_modelState: [u8; 0x2B0], // 0x140
        pub m_bUseParentRenderBounds: [u8; 0x1], // 0x3F0
        pub m_bDisableSolidCollisionsForHierarchy: [u8; 0x1], // 0x3F1
        pub m_bDirtyMotionType: [u8; 0x1], // 0x3F2
        pub m_bIsGeneratingLatchedParentSpaceState: [u8; 0x5], // 0x3F3
        pub m_materialGroup: [u8; 0x4], // 0x3F8
        pub m_nHitboxSet: [u8; 0x94], // 0x3FC
    }
    #[repr(C)]
    pub struct CEntityComponent {
        pub pad_0: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct C_ItemDogtags {
        pub pad_0: [u8; 0x1A18], // 0x0
        pub m_OwningPlayer: [u8; 0x4], // 0x1A18
        pub m_KillingPlayer: [u8; 0x4], // 0x1A1C
    }
    #[repr(C)]
    pub struct C_LateUpdatedAnimating {
        pub pad_0: [u8; 0x1320], // 0x0
    }
    #[repr(C)]
    pub struct C_CSGO_TeamPreviewCameraBone {
        pub pad_0: [u8; 0x690], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_Outflow_CycleShuffled__InstanceState_t {
        pub m_Shuffle: [u8; 0x20], // 0x0
        pub m_nNextShuffle: [u8; 0x8], // 0x20
    }
    #[repr(C)]
    pub struct CPulseCell_BaseLerp__CursorState_t {
        pub m_StartTime: [u8; 0x4], // 0x0
        pub m_EndTime: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct C_BaseClientUIEntity {
        pub pad_0: [u8; 0x10A0], // 0x0
        pub m_bEnabled: [u8; 0x8], // 0x10A0
        pub m_DialogXMLName: [u8; 0x8], // 0x10A8
        pub m_PanelClassName: [u8; 0x8], // 0x10B0
        pub m_PanelID: [u8; 0x10], // 0x10B8
    }
    #[repr(C)]
    pub struct C_WeaponUSPSilencer {
        pub pad_0: [u8; 0x1F50], // 0x0
    }
    #[repr(C)]
    pub struct C_MolotovProjectile {
        pub pad_0: [u8; 0x1348], // 0x0
        pub m_bIsIncGrenade: [u8; 0x28], // 0x1348
    }
    #[repr(C)]
    pub struct C_TriggerLerpObject {
        pub pad_0: [u8; 0x1180], // 0x0
    }
    #[repr(C)]
    pub struct C_WeaponRevolver {
        pub pad_0: [u8; 0x1F50], // 0x0
    }
    #[repr(C)]
    pub struct C_WeaponElite {
        pub pad_0: [u8; 0x1F50], // 0x0
    }
    #[repr(C)]
    pub struct C_DynamicPropAlias_cable_dynamic {
        pub pad_0: [u8; 0x14B0], // 0x0
    }
    #[repr(C)]
    pub struct CBaseProp {
        pub pad_0: [u8; 0x1268], // 0x0
        pub m_bModelOverrodeBlockLOS: [u8; 0x4], // 0x1268
        pub m_iShapeType: [u8; 0x4], // 0x126C
        pub m_bConformToCollisionBounds: [u8; 0x10], // 0x1270
        pub m_mPreferredCatchTransform: [u8; 0x20], // 0x1280
    }
    #[repr(C)]
    pub struct CInfoOffscreenPanoramaTexture {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_bDisabled: [u8; 0x1], // 0x600
        pub m_bEnableMipGen: [u8; 0x3], // 0x601
        pub m_nResolutionX: [u8; 0x4], // 0x604
        pub m_nResolutionY: [u8; 0x8], // 0x608
        pub m_szPanelType: [u8; 0x8], // 0x610
        pub m_szLayoutFileName: [u8; 0x8], // 0x618
        pub m_RenderAttrName: [u8; 0x8], // 0x620
        pub m_TargetEntities: [u8; 0x18], // 0x628
        pub m_nTargetChangeCount: [u8; 0x8], // 0x640
        pub m_vecCSSClasses: [u8; 0x18], // 0x648
        pub m_szTargetsName: [u8; 0x8], // 0x660
        pub m_AdditionalTargetEntities: [u8; 0x178], // 0x668
        pub m_bCheckCSSClasses: [u8; 0x28], // 0x7E0
    }
    #[repr(C)]
    pub struct CCSWeaponBaseVData {
        pub pad_0: [u8; 0x520], // 0x0
        pub m_WeaponType: [u8; 0x4], // 0x520
        pub m_WeaponCategory: [u8; 0x4], // 0x524
        pub m_szAnimSkeleton: [u8; 0xE0], // 0x528
        pub m_vecMuzzlePos0: [u8; 0xC], // 0x608
        pub m_vecMuzzlePos1: [u8; 0xC], // 0x614
        pub m_szTracerParticle: [u8; 0xE0], // 0x620
        pub m_GearSlot: [u8; 0x4], // 0x700
        pub m_GearSlotPosition: [u8; 0x4], // 0x704
        pub m_DefaultLoadoutSlot: [u8; 0x4], // 0x708
        pub m_nPrice: [u8; 0x4], // 0x70C
        pub m_nKillAward: [u8; 0x4], // 0x710
        pub m_nPrimaryReserveAmmoMax: [u8; 0x4], // 0x714
        pub m_nSecondaryReserveAmmoMax: [u8; 0x4], // 0x718
        pub m_bMeleeWeapon: [u8; 0x1], // 0x71C
        pub m_bHasBurstMode: [u8; 0x1], // 0x71D
        pub m_bIsRevolver: [u8; 0x1], // 0x71E
        pub m_bCannotShootUnderwater: [u8; 0x1], // 0x71F
        pub m_szName: [u8; 0x8], // 0x720
        pub m_eSilencerType: [u8; 0x4], // 0x728
        pub m_bShowCrosshair: [u8; 0x1], // 0x72C
        pub m_bIsFullAuto: [u8; 0x3], // 0x72D
        pub m_nNumBullets: [u8; 0x4], // 0x730
        pub m_bReloadsSingleShells: [u8; 0x4], // 0x734
        pub m_flCycleTime: [u8; 0x8], // 0x738
        pub m_flCycleTimeWhenInBurstMode: [u8; 0x4], // 0x740
        pub m_flTimeBetweenBurstShots: [u8; 0x4], // 0x744
        pub m_flMaxSpeed: [u8; 0x8], // 0x748
        pub m_flSpread: [u8; 0x8], // 0x750
        pub m_flInaccuracyCrouch: [u8; 0x8], // 0x758
        pub m_flInaccuracyStand: [u8; 0x8], // 0x760
        pub m_flInaccuracyJump: [u8; 0x8], // 0x768
        pub m_flInaccuracyLand: [u8; 0x8], // 0x770
        pub m_flInaccuracyLadder: [u8; 0x8], // 0x778
        pub m_flInaccuracyFire: [u8; 0x8], // 0x780
        pub m_flInaccuracyMove: [u8; 0x8], // 0x788
        pub m_flRecoilAngle: [u8; 0x8], // 0x790
        pub m_flRecoilAngleVariance: [u8; 0x8], // 0x798
        pub m_flRecoilMagnitude: [u8; 0x8], // 0x7A0
        pub m_flRecoilMagnitudeVariance: [u8; 0x8], // 0x7A8
        pub m_nTracerFrequency: [u8; 0x8], // 0x7B0
        pub m_flInaccuracyJumpInitial: [u8; 0x4], // 0x7B8
        pub m_flInaccuracyJumpApex: [u8; 0x4], // 0x7BC
        pub m_flInaccuracyReload: [u8; 0x4], // 0x7C0
        pub m_flDeployDuration: [u8; 0x4], // 0x7C4
        pub m_flDisallowAttackAfterReloadStartDuration: [u8; 0x4], // 0x7C8
        pub m_nBurstShotCount: [u8; 0x4], // 0x7CC
        pub m_bAllowBurstHolster: [u8; 0x4], // 0x7D0
        pub m_nRecoilSeed: [u8; 0x4], // 0x7D4
        pub m_nSpreadSeed: [u8; 0x4], // 0x7D8
        pub m_flAttackMovespeedFactor: [u8; 0x4], // 0x7DC
        pub m_flInaccuracyPitchShift: [u8; 0x4], // 0x7E0
        pub m_flInaccuracyAltSoundThreshold: [u8; 0x4], // 0x7E4
        pub m_szUseRadioSubtitle: [u8; 0x8], // 0x7E8
        pub m_bUnzoomsAfterShot: [u8; 0x1], // 0x7F0
        pub m_bHideViewModelWhenZoomed: [u8; 0x3], // 0x7F1
        pub m_nZoomLevels: [u8; 0x4], // 0x7F4
        pub m_nZoomFOV1: [u8; 0x4], // 0x7F8
        pub m_nZoomFOV2: [u8; 0x4], // 0x7FC
        pub m_flZoomTime0: [u8; 0x4], // 0x800
        pub m_flZoomTime1: [u8; 0x4], // 0x804
        pub m_flZoomTime2: [u8; 0x4], // 0x808
        pub m_flIronSightPullUpSpeed: [u8; 0x4], // 0x80C
        pub m_flIronSightPutDownSpeed: [u8; 0x4], // 0x810
        pub m_flIronSightFOV: [u8; 0x4], // 0x814
        pub m_flIronSightPivotForward: [u8; 0x4], // 0x818
        pub m_flIronSightLooseness: [u8; 0x4], // 0x81C
        pub m_nDamage: [u8; 0x4], // 0x820
        pub m_flHeadshotMultiplier: [u8; 0x4], // 0x824
        pub m_flArmorRatio: [u8; 0x4], // 0x828
        pub m_flPenetration: [u8; 0x4], // 0x82C
        pub m_flRange: [u8; 0x4], // 0x830
        pub m_flRangeModifier: [u8; 0x4], // 0x834
        pub m_flFlinchVelocityModifierLarge: [u8; 0x4], // 0x838
        pub m_flFlinchVelocityModifierSmall: [u8; 0x4], // 0x83C
        pub m_flRecoveryTimeCrouch: [u8; 0x4], // 0x840
        pub m_flRecoveryTimeStand: [u8; 0x4], // 0x844
        pub m_flRecoveryTimeCrouchFinal: [u8; 0x4], // 0x848
        pub m_flRecoveryTimeStandFinal: [u8; 0x4], // 0x84C
        pub m_nRecoveryTransitionStartBullet: [u8; 0x4], // 0x850
        pub m_nRecoveryTransitionEndBullet: [u8; 0x4], // 0x854
        pub m_flThrowVelocity: [u8; 0x4], // 0x858
        pub m_vSmokeColor: [u8; 0xC], // 0x85C
        pub m_szAnimClass: [u8; 0x38], // 0x868
    }
    #[repr(C)]
    pub struct CAttributeManager {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_Providers: [u8; 0x18], // 0x8
        pub m_iReapplyProvisionParity: [u8; 0x4], // 0x20
        pub m_hOuter: [u8; 0x4], // 0x24
        pub m_bPreventLoopback: [u8; 0x4], // 0x28
        pub m_ProviderType: [u8; 0x4], // 0x2C
        pub m_CachedResults: [u8; 0x20], // 0x30
    }
    #[repr(C)]
    pub struct SignatureOutflow_Continue {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CInfoTarget {
        pub pad_0: [u8; 0x600], // 0x0
    }
    #[repr(C)]
    pub struct CPlayer_CameraServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_vecCsViewPunchAngle: [u8; 0xC], // 0x48
        pub m_nCsViewPunchAngleTick: [u8; 0x4], // 0x54
        pub m_flCsViewPunchAngleTickRatio: [u8; 0x8], // 0x58
        pub m_PlayerFog: [u8; 0x40], // 0x60
        pub m_hColorCorrectionCtrl: [u8; 0x4], // 0xA0
        pub m_hViewEntity: [u8; 0x4], // 0xA4
        pub m_hTonemapController: [u8; 0x8], // 0xA8
        pub m_audio: [u8; 0x78], // 0xB0
        pub m_PostProcessingVolumes: [u8; 0x18], // 0x128
        pub m_flOldPlayerZ: [u8; 0x4], // 0x140
        pub m_flOldPlayerViewOffsetZ: [u8; 0x4], // 0x144
        pub m_CurrentFog: [u8; 0x68], // 0x148
        pub m_hOldFogController: [u8; 0x4], // 0x1B0
        pub m_bOverrideFogColor: [u8; 0x8], // 0x1B4
        pub m_OverrideFogColor: [u8; 0x14], // 0x1BC
        pub m_bOverrideFogStartEnd: [u8; 0x8], // 0x1D0
        pub m_fOverrideFogStart: [u8; 0x14], // 0x1D8
        pub m_fOverrideFogEnd: [u8; 0x14], // 0x1EC
        pub m_hActivePostProcessingVolume: [u8; 0x8], // 0x200
        pub m_angDemoViewAngles: [u8; 0x90], // 0x208
    }
    #[repr(C)]
    pub struct CPulseCell_Timeline {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_TimelineEvents: [u8; 0x18], // 0xD8
        pub m_bWaitForChildOutflows: [u8; 0x8], // 0xF0
        pub m_OnFinished: [u8; 0x48], // 0xF8
    }
    #[repr(C)]
    pub struct CPulseCell_Inflow_EntOutputHandler {
        pub pad_0: [u8; 0x80], // 0x0
        pub m_SourceEntity: [u8; 0x10], // 0x80
        pub m_SourceOutput: [u8; 0x10], // 0x90
        pub m_ExpectedParamType: [u8; 0x18], // 0xA0
    }
    #[repr(C)]
    pub struct C_BaseCSGrenade {
        pub pad_0: [u8; 0x1F20], // 0x0
        pub m_bClientPredictDelete: [u8; 0x1], // 0x1F20
        pub m_bRedraw: [u8; 0x1], // 0x1F21
        pub m_bIsHeldByPlayer: [u8; 0x1], // 0x1F22
        pub m_bPinPulled: [u8; 0x1], // 0x1F23
        pub m_bJumpThrow: [u8; 0x1], // 0x1F24
        pub m_bThrowAnimating: [u8; 0x3], // 0x1F25
        pub m_fThrowTime: [u8; 0x8], // 0x1F28
        pub m_flThrowStrength: [u8; 0x78], // 0x1F30
        pub m_fDropTime: [u8; 0x4], // 0x1FA8
        pub m_fPinPullTime: [u8; 0x4], // 0x1FAC
        pub m_bJustPulledPin: [u8; 0x4], // 0x1FB0
        pub m_nNextHoldTick: [u8; 0x4], // 0x1FB4
        pub m_flNextHoldFrac: [u8; 0x4], // 0x1FB8
        pub m_hSwitchToWeaponAfterThrow: [u8; 0x24], // 0x1FBC
    }
    #[repr(C)]
    pub struct CFilterAttributeInt {
        pub pad_0: [u8; 0x638], // 0x0
        pub m_sAttributeName: [u8; 0x8], // 0x638
    }
    #[repr(C)]
    pub struct CPointTemplate {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_iszWorldName: [u8; 0x8], // 0x600
        pub m_iszSource2EntityLumpName: [u8; 0x8], // 0x608
        pub m_iszEntityFilterName: [u8; 0x8], // 0x610
        pub m_flTimeoutInterval: [u8; 0x4], // 0x618
        pub m_bAsynchronouslySpawnEntities: [u8; 0x4], // 0x61C
        pub m_clientOnlyEntityBehavior: [u8; 0x4], // 0x620
        pub m_ownerSpawnGroupType: [u8; 0x4], // 0x624
        pub m_createdSpawnGroupHandles: [u8; 0x18], // 0x628
        pub m_SpawnedEntityHandles: [u8; 0x18], // 0x640
        pub m_ScriptSpawnCallback: [u8; 0x8], // 0x658
        pub m_ScriptCallbackScope: [u8; 0x8], // 0x660
        pub m_OnEntitySpawned: [u8; 0x30], // 0x668
    }
    #[repr(C)]
    pub struct CPlayer_FlashlightServices {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CCSPlayerController {
        pub pad_0: [u8; 0x818], // 0x0
        pub m_pInGameMoneyServices: [u8; 0x8], // 0x818
        pub m_pInventoryServices: [u8; 0x8], // 0x820
        pub m_pActionTrackingServices: [u8; 0x8], // 0x828
        pub m_pDamageServices: [u8; 0x8], // 0x830
        pub m_iPing: [u8; 0x4], // 0x838
        pub m_bHasCommunicationAbuseMute: [u8; 0x4], // 0x83C
        pub m_uiCommunicationMuteFlags: [u8; 0x8], // 0x840
        pub m_szCrosshairCodes: [u8; 0x8], // 0x848
        pub m_iPendingTeamNum: [u8; 0x4], // 0x850
        pub m_flForceTeamTime: [u8; 0x4], // 0x854
        pub m_iCompTeammateColor: [u8; 0x4], // 0x858
        pub m_bEverPlayedOnTeam: [u8; 0x4], // 0x85C
        pub m_flPreviousForceJoinTeamTime: [u8; 0x8], // 0x860
        pub m_szClan: [u8; 0x8], // 0x868
        pub m_unClanId32bit: [u8; 0x8], // 0x870
        pub m_sSanitizedPlayerName: [u8; 0x8], // 0x878
        pub m_sSanitizedClanTag: [u8; 0x8], // 0x880
        pub m_iCoachingTeam: [u8; 0x8], // 0x888
        pub m_nPlayerDominated: [u8; 0x8], // 0x890
        pub m_nPlayerDominatingMe: [u8; 0x8], // 0x898
        pub m_iCompetitiveRanking: [u8; 0x4], // 0x8A0
        pub m_iCompetitiveWins: [u8; 0x4], // 0x8A4
        pub m_iCompetitiveRankType: [u8; 0x4], // 0x8A8
        pub m_iCompetitiveRankingPredicted_Win: [u8; 0x4], // 0x8AC
        pub m_iCompetitiveRankingPredicted_Loss: [u8; 0x4], // 0x8B0
        pub m_iCompetitiveRankingPredicted_Tie: [u8; 0x4], // 0x8B4
        pub m_nEndMatchNextMapVote: [u8; 0x4], // 0x8B8
        pub m_unActiveQuestId: [u8; 0x4], // 0x8BC
        pub m_rtActiveMissionPeriod: [u8; 0x4], // 0x8C0
        pub m_nQuestProgressReason: [u8; 0x4], // 0x8C4
        pub m_unPlayerTvControlFlags: [u8; 0x30], // 0x8C8
        pub m_iDraftIndex: [u8; 0x4], // 0x8F8
        pub m_msQueuedModeDisconnectionTimestamp: [u8; 0x4], // 0x8FC
        pub m_uiAbandonRecordedReason: [u8; 0x4], // 0x900
        pub m_eNetworkDisconnectionReason: [u8; 0x4], // 0x904
        pub m_bCannotBeKicked: [u8; 0x1], // 0x908
        pub m_bEverFullyConnected: [u8; 0x1], // 0x909
        pub m_bAbandonAllowsSurrender: [u8; 0x1], // 0x90A
        pub m_bAbandonOffersInstantSurrender: [u8; 0x1], // 0x90B
        pub m_bDisconnection1MinWarningPrinted: [u8; 0x1], // 0x90C
        pub m_bScoreReported: [u8; 0x3], // 0x90D
        pub m_nDisconnectionTick: [u8; 0x10], // 0x910
        pub m_bControllingBot: [u8; 0x1], // 0x920
        pub m_bHasControlledBotThisRound: [u8; 0x1], // 0x921
        pub m_bHasBeenControlledByPlayerThisRound: [u8; 0x2], // 0x922
        pub m_nBotsControlledThisRound: [u8; 0x4], // 0x924
        pub m_bCanControlObservedBot: [u8; 0x4], // 0x928
        pub m_hPlayerPawn: [u8; 0x4], // 0x92C
        pub m_hObserverPawn: [u8; 0x4], // 0x930
        pub m_bPawnIsAlive: [u8; 0x4], // 0x934
        pub m_iPawnHealth: [u8; 0x4], // 0x938
        pub m_iPawnArmor: [u8; 0x4], // 0x93C
        pub m_bPawnHasDefuser: [u8; 0x1], // 0x940
        pub m_bPawnHasHelmet: [u8; 0x1], // 0x941
        pub m_nPawnCharacterDefIndex: [u8; 0x2], // 0x942
        pub m_iPawnLifetimeStart: [u8; 0x4], // 0x944
        pub m_iPawnLifetimeEnd: [u8; 0x4], // 0x948
        pub m_iPawnBotDifficulty: [u8; 0x4], // 0x94C
        pub m_hOriginalControllerOfCurrentPawn: [u8; 0x4], // 0x950
        pub m_iScore: [u8; 0x4], // 0x954
        pub m_recentKillQueue: [u8; 0x8], // 0x958
        pub m_nFirstKill: [u8; 0x1], // 0x960
        pub m_nKillCount: [u8; 0x1], // 0x961
        pub m_bMvpNoMusic: [u8; 0x2], // 0x962
        pub m_eMvpReason: [u8; 0x4], // 0x964
        pub m_iMusicKitID: [u8; 0x4], // 0x968
        pub m_iMusicKitMVPs: [u8; 0x4], // 0x96C
        pub m_iMVPs: [u8; 0x4], // 0x970
        pub m_bIsPlayerNameDirty: [u8; 0x8], // 0x974
        pub m_bFireBulletsSeedSynchronized: [u8; 0x4], // 0x97C
    }
    #[repr(C)]
    pub struct C_CSGO_CounterTerroristRushIntroCamera {
        pub pad_0: [u8; 0x690], // 0x0
    }
    #[repr(C)]
    pub struct C_CSGO_TeamIntroCounterTerroristPosition {
        pub pad_0: [u8; 0x1D18], // 0x0
    }
    #[repr(C)]
    pub struct C_CSGO_PreviewModel {
        pub pad_0: [u8; 0x1268], // 0x0
        pub m_defaultAnim: [u8; 0x8], // 0x1268
        pub m_nDefaultAnimLoopMode: [u8; 0x4], // 0x1270
        pub m_flInitialModelScale: [u8; 0x4], // 0x1274
        pub m_sInitialWeaponState: [u8; 0x640], // 0x1278
    }
    #[repr(C)]
    pub struct C_CSGO_TeamSelectCharacterPosition {
        pub pad_0: [u8; 0x1D18], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_Outflow_CycleOrdered__InstanceState_t {
        pub m_nNextIndex: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CCSObservableElement {
        pub pad_0: [u8; 0x618], // 0x0
        pub m_iszObservableModelEntity: [u8; 0x8], // 0x618
        pub m_hObservableModelEntity: [u8; 0x4], // 0x620
        pub m_hObservableModelEntity2: [u8; 0x4], // 0x624
        pub m_nTeamFilter: [u8; 0x8], // 0x628
    }
    #[repr(C)]
    pub struct C_SoundEventAABBEntity {
        pub pad_0: [u8; 0x6C0], // 0x0
        pub m_vMins: [u8; 0xC], // 0x6C0
        pub m_vMaxs: [u8; 0xC], // 0x6CC
    }
    #[repr(C)]
    pub struct CCSPlayer_MovementServices {
        pub pad_0: [u8; 0x310], // 0x0
        pub m_AnimationState: [u8; 0xE0], // 0x310
        pub m_bUsingGroundTopologyOffset: [u8; 0x4], // 0x3F0
        pub m_flUsingGroundTopologyOffsetTransitionSmoothing: [u8; 0x4], // 0x3F4
        pub m_vecLadderNormal: [u8; 0xC], // 0x3F8
        pub m_nLadderSurfacePropIndex: [u8; 0x4], // 0x404
        pub m_bDucked: [u8; 0x4], // 0x408
        pub m_flDuckAmount: [u8; 0x4], // 0x40C
        pub m_flDuckSpeed: [u8; 0x4], // 0x410
        pub m_bDuckOverride: [u8; 0x1], // 0x414
        pub m_bDesiresDuck: [u8; 0x1], // 0x415
        pub m_bDucking: [u8; 0x2], // 0x416
        pub m_flDuckRootOffset: [u8; 0x4], // 0x418
        pub m_flDuckViewOffset: [u8; 0x4], // 0x41C
        pub m_flLastDuckTime: [u8; 0x4], // 0x420
        pub m_flBombPlantViewOffset: [u8; 0xC], // 0x424
        pub m_vecLastPositionAtFullCrouchSpeed: [u8; 0x8], // 0x430
        pub m_duckUntilOnGround: [u8; 0x1], // 0x438
        pub m_bHasWalkMovedSinceLastJump: [u8; 0x1], // 0x439
        pub m_bInStuckTest: [u8; 0x20E], // 0x43A
        pub m_nTraceCount: [u8; 0x4], // 0x648
        pub m_StuckLast: [u8; 0x4], // 0x64C
        pub m_bSpeedCropped: [u8; 0x4], // 0x650
        pub m_nOldWaterLevel: [u8; 0x4], // 0x654
        pub m_flWaterEntryTime: [u8; 0x4], // 0x658
        pub m_vecForward: [u8; 0xC], // 0x65C
        pub m_vecLeft: [u8; 0xC], // 0x668
        pub m_vecUp: [u8; 0xC], // 0x674
        pub m_nGameCodeHasMovedPlayerAfterCommand: [u8; 0x4], // 0x680
        pub m_fStashGrenadeParameterWhen: [u8; 0x4], // 0x684
        pub m_bUseFrictionStashedSpeed: [u8; 0x4], // 0x688
        pub m_flUseFrictionStashedSpeedUntilFrac: [u8; 0x4], // 0x68C
        pub m_flFrictionStashedSpeed: [u8; 0x4], // 0x690
        pub m_flStamina: [u8; 0x4], // 0x694
        pub m_flHeightAtJumpStart: [u8; 0x4], // 0x698
        pub m_flMaxJumpHeightThisJump: [u8; 0x4], // 0x69C
        pub m_flMaxJumpHeightLastJump: [u8; 0x4], // 0x6A0
        pub m_flStaminaAtJumpStart: [u8; 0x4], // 0x6A4
        pub m_flVelMulAtJumpStart: [u8; 0x4], // 0x6A8
        pub m_flAccumulatedJumpError: [u8; 0x4], // 0x6AC
        pub m_LegacyJump: [u8; 0x18], // 0x6B0
        pub m_ModernJump: [u8; 0x38], // 0x6C8
        pub m_nLastJumpTick: [u8; 0x4], // 0x700
        pub m_flLastJumpFrac: [u8; 0x4], // 0x704
        pub m_flLastJumpVelocityZ: [u8; 0x4], // 0x708
        pub m_bJumpApexPending: [u8; 0x4], // 0x70C
        pub m_flTicksSinceLastSurfingDetected: [u8; 0x4], // 0x710
        pub m_bWasSurfing: [u8; 0x90], // 0x714
        pub m_vecWalkWishVel: [u8; 0x82C], // 0x7A4
        pub m_bHasEverProcessedCommand: [u8; 0x10], // 0xFD0
    }
    #[repr(C)]
    pub struct SellbackPurchaseEntry_t {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_unDefIdx: [u8; 0x4], // 0x30
        pub m_nCost: [u8; 0x4], // 0x34
        pub m_nPrevArmor: [u8; 0x4], // 0x38
        pub m_bPrevHelmet: [u8; 0x4], // 0x3C
        pub m_hItem: [u8; 0x8], // 0x40
    }
    #[repr(C)]
    pub struct C_TintController {
        pub pad_0: [u8; 0x618], // 0x0
    }
    #[repr(C)]
    pub struct C_WeaponBaseItem {
        pub pad_0: [u8; 0x1F20], // 0x0
        pub m_bSequenceInProgress: [u8; 0x1], // 0x1F20
        pub m_bRedraw: [u8; 0xF], // 0x1F21
    }
    #[repr(C)]
    pub struct CWaterSplasher {
        pub pad_0: [u8; 0x1098], // 0x0
    }
    #[repr(C)]
    pub struct C_FuncBrush {
        pub pad_0: [u8; 0x1098], // 0x0
    }
    #[repr(C)]
    pub struct PhysicsRagdollPose_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_RelativeTransforms: [u8; 0x18], // 0x8
        pub m_hOwner: [u8; 0x4], // 0x20
        pub m_bSetFromDebugHistory: [u8; 0x24], // 0x24
    }
    #[repr(C)]
    pub struct CPropDataComponent {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_flDmgModBullet: [u8; 0x4], // 0x10
        pub m_flDmgModClub: [u8; 0x4], // 0x14
        pub m_flDmgModExplosive: [u8; 0x4], // 0x18
        pub m_flDmgModFire: [u8; 0x4], // 0x1C
        pub m_iszPhysicsDamageTableName: [u8; 0x8], // 0x20
        pub m_iszBasePropData: [u8; 0x8], // 0x28
        pub m_nInteractions: [u8; 0x4], // 0x30
        pub m_bSpawnMotionDisabled: [u8; 0x4], // 0x34
        pub m_nDisableTakePhysicsDamageSpawnFlag: [u8; 0x4], // 0x38
        pub m_nMotionDisabledSpawnFlag: [u8; 0x4], // 0x3C
    }
    #[repr(C)]
    pub struct CPulseCell_LimitCount__InstanceState_t {
        pub m_nCurrentCount: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct C_WeaponCZ75a {
        pub pad_0: [u8; 0x1F50], // 0x0
        pub m_bMagazineRemoved: [u8; 0x10], // 0x1F50
    }
    #[repr(C)]
    pub struct C_DynamicLight {
        pub pad_0: [u8; 0x1098], // 0x0
        pub m_Flags: [u8; 0x1], // 0x1098
        pub m_LightStyle: [u8; 0x3], // 0x1099
        pub m_Radius: [u8; 0x4], // 0x109C
        pub m_Exponent: [u8; 0x4], // 0x10A0
        pub m_InnerAngle: [u8; 0x4], // 0x10A4
        pub m_OuterAngle: [u8; 0x4], // 0x10A8
        pub m_SpotRadius: [u8; 0x14], // 0x10AC
    }
    #[repr(C)]
    pub struct CCS2PawnGraphController {
        pub pad_0: [u8; 0x2D8], // 0x0
        pub m_bIsDefusing: [u8; 0x18], // 0x2D8
        pub m_moveType: [u8; 0x18], // 0x2F0
        pub m_moveDirectionID: [u8; 0x18], // 0x308
        pub m_flMoveSpeedX: [u8; 0x18], // 0x320
        pub m_flMoveSpeedY: [u8; 0x18], // 0x338
        pub m_flMoveSpeedHorizontal: [u8; 0x18], // 0x350
        pub m_flPreviousMoveSpeedHorizontal: [u8; 0x18], // 0x368
        pub m_flCrouchAmount: [u8; 0x18], // 0x380
        pub m_bIsWalking: [u8; 0x18], // 0x398
        pub m_flWeaponDropAmount: [u8; 0x18], // 0x3B0
        pub m_groundAction: [u8; 0x18], // 0x3C8
        pub m_groundActionDirectionID: [u8; 0x18], // 0x3E0
        pub m_flGroundTurnAngleOrVelocity: [u8; 0x18], // 0x3F8
        pub m_flLadderCycle: [u8; 0x18], // 0x410
        pub m_flLadderYaw: [u8; 0x18], // 0x428
        pub m_flLadderYawBackwards: [u8; 0x18], // 0x440
        pub m_airAction: [u8; 0x18], // 0x458
        pub m_flAirHeightAboveGround: [u8; 0x18], // 0x470
        pub m_leftFootTarget: [u8; 0x18], // 0x488
        pub m_rightFootTarget: [u8; 0x18], // 0x4A0
        pub m_flFlashedAmount: [u8; 0x18], // 0x4B8
        pub m_flAimPitchAngle: [u8; 0x18], // 0x4D0
        pub m_flAimYawAngle: [u8; 0x18], // 0x4E8
        pub m_flinchHead: [u8; 0x18], // 0x500
        pub m_flinchHeadRestart: [u8; 0x18], // 0x518
        pub m_flinchBody: [u8; 0x18], // 0x530
        pub m_flinchBodyRestart: [u8; 0x18], // 0x548
        pub m_flinchIsOnFire: [u8; 0x18], // 0x560
    }
    #[repr(C)]
    pub struct EngineCountdownTimer {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_duration: [u8; 0x4], // 0x8
        pub m_timestamp: [u8; 0x4], // 0xC
        pub m_timescale: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct C_SoundEventSphereEntity {
        pub pad_0: [u8; 0x6C0], // 0x0
        pub m_flRadius: [u8; 0x8], // 0x6C0
    }
    #[repr(C)]
    pub struct CCSPlayerController_DamageServices {
        pub pad_0: [u8; 0x40], // 0x0
        pub m_nSendUpdate: [u8; 0x8], // 0x40
        pub m_DamageList: [u8; 0x68], // 0x48
    }
    #[repr(C)]
    pub struct C_CSGO_TeamPreviewModel {
        pub pad_0: [u8; 0x37D0], // 0x0
    }
    #[repr(C)]
    pub struct C_TonemapController2Alias_env_tonemap_controller2 {
        pub pad_0: [u8; 0x618], // 0x0
    }
    #[repr(C)]
    pub struct C_Inferno {
        pub pad_0: [u8; 0x10D8], // 0x0
        pub m_nfxFireDamageEffect: [u8; 0x8], // 0x10D8
        pub m_hInfernoPointsSnapshot: [u8; 0x8], // 0x10E0
        pub m_hInfernoFillerPointsSnapshot: [u8; 0x8], // 0x10E8
        pub m_hInfernoOutlinePointsSnapshot: [u8; 0x8], // 0x10F0
        pub m_hInfernoClimbingOutlinePointsSnapshot: [u8; 0x8], // 0x10F8
        pub m_hInfernoDecalsSnapshot: [u8; 0x8], // 0x1100
        pub m_firePositions: [u8; 0x300], // 0x1108
        pub m_fireParentPositions: [u8; 0x300], // 0x1408
        pub m_bFireIsBurning: [u8; 0x40], // 0x1708
        pub m_BurnNormal: [u8; 0x300], // 0x1748
        pub m_fireCount: [u8; 0x4], // 0x1A48
        pub m_nInfernoType: [u8; 0x4], // 0x1A4C
        pub m_nFireLifetime: [u8; 0x4], // 0x1A50
        pub m_bInPostEffectTime: [u8; 0x4], // 0x1A54
        pub m_lastFireCount: [u8; 0x4], // 0x1A58
        pub m_nFireEffectTickBegin: [u8; 0x6C04], // 0x1A5C
        pub m_drawableCount: [u8; 0x4], // 0x8660
        pub m_blosCheck: [u8; 0x4], // 0x8664
        pub m_nlosperiod: [u8; 0x4], // 0x8668
        pub m_maxFireHalfWidth: [u8; 0x4], // 0x866C
        pub m_maxFireHeight: [u8; 0x4], // 0x8670
        pub m_minBounds: [u8; 0xC], // 0x8674
        pub m_maxBounds: [u8; 0xC], // 0x8680
        pub m_flLastGrassBurnThink: [u8; 0x14], // 0x868C
    }
    #[repr(C)]
    pub struct CFilterLOS {
        pub pad_0: [u8; 0x638], // 0x0
    }
    #[repr(C)]
    pub struct CPointOrient {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_iszSpawnTargetName: [u8; 0x8], // 0x600
        pub m_hTarget: [u8; 0x4], // 0x608
        pub m_bActive: [u8; 0x4], // 0x60C
        pub m_nGoalDirection: [u8; 0x4], // 0x610
        pub m_nConstraint: [u8; 0x4], // 0x614
        pub m_flMaxTurnRate: [u8; 0x4], // 0x618
        pub m_flLastGameTime: [u8; 0x4], // 0x61C
    }
    #[repr(C)]
    pub struct C_GlobalLight {
        pub pad_0: [u8; 0xAC0], // 0x0
        pub m_WindClothForceHandle: [u8; 0x30], // 0xAC0
    }
    #[repr(C)]
    pub struct C_EnvWindClientside {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_EnvWindShared: [u8; 0xF8], // 0x600
    }
    #[repr(C)]
    pub struct sky3dparams_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub scale: [u8; 0x4], // 0x8
        pub origin: [u8; 0xC], // 0xC
        pub bClip3DSkyBoxNearToWorldFar: [u8; 0x4], // 0x18
        pub flClip3DSkyBoxNearToWorldFarOffset: [u8; 0x4], // 0x1C
        pub fog: [u8; 0x68], // 0x20
        pub m_nWorldGroupID: [u8; 0x8], // 0x88
    }
    #[repr(C)]
    pub struct C_FlashbangProjectile {
        pub pad_0: [u8; 0x1348], // 0x0
    }
    #[repr(C)]
    pub struct C_SoundEventConeEntity {
        pub pad_0: [u8; 0x6C0], // 0x0
        pub m_flEmitterAngle: [u8; 0x4], // 0x6C0
        pub m_flSweetSpotAngle: [u8; 0x4], // 0x6C4
        pub m_flAttenMin: [u8; 0x4], // 0x6C8
        pub m_flAttenMax: [u8; 0x4], // 0x6CC
        pub m_iszParameterName: [u8; 0x8], // 0x6D0
    }
    #[repr(C)]
    pub struct CDestructiblePartsComponent {
        pub __m_pChainEntity: [u8; 0x48], // 0x0
        pub m_vecDamageTakenByHitGroup: [u8; 0x18], // 0x48
        pub m_hOwner: [u8; 0x8], // 0x60
        pub m_pAnimGraphDestructibleGraphController: [u8; 0x8], // 0x68
    }
    #[repr(C)]
    pub struct C_WeaponP90 {
        pub pad_0: [u8; 0x1F50], // 0x0
    }
    #[repr(C)]
    pub struct C_EnvWind {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_EnvWindShared: [u8; 0xF8], // 0x600
    }
    #[repr(C)]
    pub struct C_CSGO_TerroristTeamIntroCamera {
        pub pad_0: [u8; 0x690], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_Step_DebugLog {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct C_PointDeathcamBounds {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_vBoxMins: [u8; 0xC], // 0x600
        pub m_vBoxMaxs: [u8; 0xC], // 0x60C
        pub m_flLerpDistance: [u8; 0x8], // 0x618
    }
    #[repr(C)]
    pub struct CCSPlayerController_ActionTrackingServices {
        pub pad_0: [u8; 0x40], // 0x0
        pub m_perRoundStats: [u8; 0x68], // 0x40
        pub m_matchStats: [u8; 0x80], // 0xA8
        pub m_iNumRoundKills: [u8; 0x4], // 0x128
        pub m_iNumRoundKillsHeadshots: [u8; 0x4], // 0x12C
        pub m_flTotalRoundDamageDealt: [u8; 0x8], // 0x130
    }
    #[repr(C)]
    pub struct CBodyComponentBaseAnimGraph {
        pub pad_0: [u8; 0x510], // 0x0
        pub m_animationController: [u8; 0x6A0], // 0x510
    }
    #[repr(C)]
    pub struct C_CSGO_PreviewModelAlias_csgo_item_previewmodel {
        pub pad_0: [u8; 0x18B8], // 0x0
    }
    #[repr(C)]
    pub struct C_InfoInstructorHintHostageRescueZone {
        pub pad_0: [u8; 0x600], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_BaseYieldingInflow {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_BaseFlow_OnAfterCancel: [u8; 0x48], // 0x48
        pub m_BaseFlow_WhileActive: [u8; 0x48], // 0x90
    }
    #[repr(C)]
    pub struct PulseNodeDynamicOutflows_t {
        pub m_Outflows: [u8; 0x18], // 0x0
    }
    #[repr(C)]
    pub struct C_TriggerBuoyancy {
        pub pad_0: [u8; 0x1180], // 0x0
        pub m_BuoyancyHelper: [u8; 0x118], // 0x1180
        pub m_flFluidDensity: [u8; 0x8], // 0x1298
    }
    #[repr(C)]
    pub struct CPlayer_MovementServices_Humanoid {
        pub pad_0: [u8; 0x258], // 0x0
        pub m_flStepSoundTime: [u8; 0x4], // 0x258
        pub m_flFallVelocity: [u8; 0x4], // 0x25C
        pub m_groundNormal: [u8; 0xC], // 0x260
        pub m_flSurfaceFriction: [u8; 0x4], // 0x26C
        pub m_surfaceProps: [u8; 0x10], // 0x270
        pub m_nStepside: [u8; 0x8], // 0x280
    }
    #[repr(C)]
    pub struct CPulseCell_IsRequirementValid__Criteria_t {
        pub m_bIsValid: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct C_WeaponTec9 {
        pub pad_0: [u8; 0x1F50], // 0x0
    }
    #[repr(C)]
    pub struct C_PhysPropClientside {
        pub pad_0: [u8; 0x13E0], // 0x0
        pub m_flTouchDelta: [u8; 0x4], // 0x13E0
        pub m_fDeathTime: [u8; 0x4], // 0x13E4
        pub m_vecDamagePosition: [u8; 0xC], // 0x13E8
        pub m_vecDamageDirection: [u8; 0xC], // 0x13F4
        pub m_nDamageType: [u8; 0x10], // 0x1400
    }
    #[repr(C)]
    pub struct C_BaseDoor {
        pub pad_0: [u8; 0x1098], // 0x0
        pub m_bIsUsable: [u8; 0x8], // 0x1098
    }
    #[repr(C)]
    pub struct CSMatchStats_t {
        pub pad_0: [u8; 0x68], // 0x0
        pub m_iEnemy5Ks: [u8; 0x4], // 0x68
        pub m_iEnemy4Ks: [u8; 0x4], // 0x6C
        pub m_iEnemy3Ks: [u8; 0x4], // 0x70
        pub m_iEnemyKnifeKills: [u8; 0x4], // 0x74
        pub m_iEnemyTaserKills: [u8; 0x8], // 0x78
    }
    #[repr(C)]
    pub struct EntityRenderAttribute_t {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_ID: [u8; 0x4], // 0x30
        pub m_Values: [u8; 0x14], // 0x34
    }
    #[repr(C)]
    pub struct CPulseCell_Inflow_ObservableVariableListener {
        pub pad_0: [u8; 0x80], // 0x0
        pub m_nBlackboardReference: [u8; 0x2], // 0x80
        pub m_bSelfReference: [u8; 0x6], // 0x82
    }
    #[repr(C)]
    pub struct CCSGO_RushIntroTerroristPosition {
        pub pad_0: [u8; 0x1D18], // 0x0
    }
    #[repr(C)]
    pub struct CHostageRescueZone {
        pub pad_0: [u8; 0x1198], // 0x0
    }
    #[repr(C)]
    pub struct CModelState {
        pub pad_0: [u8; 0xA0], // 0x0
        pub m_hModel: [u8; 0x8], // 0xA0
        pub m_ModelName: [u8; 0x38], // 0xA8
        pub m_pVPhysicsAggregate: [u8; 0x8], // 0xE0
        pub m_flRootBoneOffset_x: [u8; 0x4], // 0xE8
        pub m_flRootBoneOffset_y: [u8; 0x4], // 0xEC
        pub m_flRootBoneOffset_z: [u8; 0x4], // 0xF0
        pub m_nRootBoneOffsetResetSerialNumber: [u8; 0x1C], // 0xF4
        pub m_bClientClothCreationSuppressed: [u8; 0xF0], // 0x110
        pub m_nAnimStateNoInterpSerialNumber: [u8; 0x8], // 0x200
        pub m_MeshGroupMask: [u8; 0x50], // 0x208
        pub m_nBodyGroupChoices: [u8; 0x4A], // 0x258
        pub m_nIdealMotionType: [u8; 0x1], // 0x2A2
        pub m_nForceLOD: [u8; 0x1], // 0x2A3
        pub m_nClothUpdateFlags: [u8; 0xC], // 0x2A4
    }
    #[repr(C)]
    pub struct CPulseCell_LerpCameraSettings__CursorState_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_hCamera: [u8; 0x4], // 0x8
        pub m_OverlaidStart: [u8; 0x10], // 0xC
        pub m_OverlaidEnd: [u8; 0x10], // 0x1C
    }
    #[repr(C)]
    pub struct CPulseCell_Outflow_CycleOrdered {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_Outputs: [u8; 0x18], // 0x48
    }
    #[repr(C)]
    pub struct C_CSWeaponBaseGun {
        pub pad_0: [u8; 0x1F20], // 0x0
        pub m_zoomLevel: [u8; 0x4], // 0x1F20
        pub m_iBurstShotsRemaining: [u8; 0x4], // 0x1F24
        pub m_iSilencerBodygroup: [u8; 0x10], // 0x1F28
        pub m_silencedModelIndex: [u8; 0x4], // 0x1F38
        pub m_inPrecache: [u8; 0x1], // 0x1F3C
        pub m_bNeedsBoltAction: [u8; 0x3], // 0x1F3D
        pub m_nRevolverCylinderIdx: [u8; 0x10], // 0x1F40
    }
    #[repr(C)]
    pub struct C_CSGameRulesProxy {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_pGameRules: [u8; 0x8], // 0x600
    }
    #[repr(C)]
    pub struct CCollisionProperty {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_collisionAttribute: [u8; 0x30], // 0x10
        pub m_vecMins: [u8; 0xC], // 0x40
        pub m_vecMaxs: [u8; 0xE], // 0x4C
        pub m_usSolidFlags: [u8; 0x1], // 0x5A
        pub m_nSolidType: [u8; 0x1], // 0x5B
        pub m_triggerBloat: [u8; 0x1], // 0x5C
        pub m_nSurroundType: [u8; 0x1], // 0x5D
        pub m_CollisionGroup: [u8; 0x1], // 0x5E
        pub m_nEnablePhysics: [u8; 0x1], // 0x5F
        pub m_flBoundingRadius: [u8; 0x4], // 0x60
        pub m_vecSpecifiedSurroundingMins: [u8; 0xC], // 0x64
        pub m_vecSpecifiedSurroundingMaxs: [u8; 0xC], // 0x70
        pub m_vecSurroundingMaxs: [u8; 0xC], // 0x7C
        pub m_vecSurroundingMins: [u8; 0xC], // 0x88
        pub m_vCapsuleCenter1: [u8; 0xC], // 0x94
        pub m_vCapsuleCenter2: [u8; 0xC], // 0xA0
        pub m_flCapsuleRadius: [u8; 0xC], // 0xAC
    }
    #[repr(C)]
    pub struct C_WeaponP250 {
        pub pad_0: [u8; 0x1F50], // 0x0
    }
    #[repr(C)]
    pub struct CFilterMassGreater {
        pub pad_0: [u8; 0x638], // 0x0
        pub m_fFilterMass: [u8; 0x8], // 0x638
    }
    #[repr(C)]
    pub struct C_ShatterGlassShardPhysics {
        pub pad_0: [u8; 0x10A0], // 0x0
        pub m_ShardDesc: [u8; 0x80], // 0x10A0
    }
    #[repr(C)]
    pub struct C_EntityDissolve {
        pub pad_0: [u8; 0x10A0], // 0x0
        pub m_flStartTime: [u8; 0x4], // 0x10A0
        pub m_flFadeInStart: [u8; 0x4], // 0x10A4
        pub m_flFadeInLength: [u8; 0x4], // 0x10A8
        pub m_flFadeOutModelStart: [u8; 0x4], // 0x10AC
        pub m_flFadeOutModelLength: [u8; 0x4], // 0x10B0
        pub m_flFadeOutStart: [u8; 0x4], // 0x10B4
        pub m_flFadeOutLength: [u8; 0x4], // 0x10B8
        pub m_nDissolveType: [u8; 0x4], // 0x10BC
        pub m_nMagnitude: [u8; 0x4], // 0x10C0
        pub m_vDissolverOrigin: [u8; 0xC], // 0x10C4
        pub m_flNextSparkTime: [u8; 0x4], // 0x10D0
        pub m_bCoreExplode: [u8; 0x1], // 0x10D4
        pub m_bLinkedToServerEnt: [u8; 0xB], // 0x10D5
    }
    #[repr(C)]
    pub struct C_SoundOpvarSetOBBEntity {
        pub pad_0: [u8; 0x620], // 0x0
    }
    #[repr(C)]
    pub struct CCSCustomPlayerCamera {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_hPawn: [u8; 0x4], // 0x600
        pub m_nCameraMode: [u8; 0x4], // 0x604
        pub m_hFollowEntity: [u8; 0x4], // 0x608
        pub m_bFollowEyes: [u8; 0x4], // 0x60C
        pub m_vecFollowOffset: [u8; 0xC], // 0x610
        pub m_vecCameraOffset: [u8; 0xC], // 0x61C
        pub m_bClipCameraOffset: [u8; 0x4], // 0x628
        pub m_flCameraOffsetReturnStrength: [u8; 0x14], // 0x62C
    }
    #[repr(C)]
    pub struct CCSGameModeRules_ArmsRace {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_WeaponSequence: [u8; 0x18], // 0x30
    }
    #[repr(C)]
    pub struct C_FuncMonitor {
        pub pad_0: [u8; 0x1098], // 0x0
        pub m_targetCamera: [u8; 0x8], // 0x1098
        pub m_nResolutionEnum: [u8; 0x4], // 0x10A0
        pub m_bRenderShadows: [u8; 0x1], // 0x10A4
        pub m_bUseUniqueColorTarget: [u8; 0x3], // 0x10A5
        pub m_brushModelName: [u8; 0x8], // 0x10A8
        pub m_hTargetCamera: [u8; 0x4], // 0x10B0
        pub m_bEnabled: [u8; 0x1], // 0x10B4
        pub m_bDraw3DSkybox: [u8; 0x45B], // 0x10B5
    }
    #[repr(C)]
    pub struct C_ClientRagdoll {
        pub pad_0: [u8; 0x1268], // 0x0
        pub m_bFadeOut: [u8; 0x1], // 0x1268
        pub m_bImportant: [u8; 0x3], // 0x1269
        pub m_flEffectTime: [u8; 0x4], // 0x126C
        pub m_gibDespawnTime: [u8; 0x4], // 0x1270
        pub m_iCurrentFriction: [u8; 0x4], // 0x1274
        pub m_iMinFriction: [u8; 0x4], // 0x1278
        pub m_iMaxFriction: [u8; 0x4], // 0x127C
        pub m_iFrictionAnimState: [u8; 0x4], // 0x1280
        pub m_bReleaseRagdoll: [u8; 0x1], // 0x1284
        pub m_iEyeAttachment: [u8; 0x1], // 0x1285
        pub m_bFadingOut: [u8; 0x2], // 0x1286
        pub m_flScaleEnd: [u8; 0x28], // 0x1288
        pub m_flScaleTimeStart: [u8; 0x28], // 0x12B0
        pub m_flScaleTimeEnd: [u8; 0x28], // 0x12D8
    }
    #[repr(C)]
    pub struct PulseSelectorOutflowList_t {
        pub m_Outflows: [u8; 0x18], // 0x0
    }
    #[repr(C)]
    pub struct C_BaseModelEntity__BodyGroupRequest_t {
        pub m_uRequestID: [u8; 0x4], // 0x0
        pub m_nGroupName: [u8; 0x4], // 0x4
        pub m_sChoiceName: [u8; 0x8], // 0x8
        pub m_nGroup: [u8; 0x4], // 0x10
        pub m_uChoice: [u8; 0x2], // 0x14
        pub m_uRefCount: [u8; 0x2], // 0x16
    }
    #[repr(C)]
    pub struct CPulseCell_PlaySequence__CursorState_t {
        pub m_hTarget: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CBodyComponentSkeletonInstance {
        pub pad_0: [u8; 0x80], // 0x0
        pub m_skeletonInstance: [u8; 0x490], // 0x80
    }
    #[repr(C)]
    pub struct C_CS2WeaponModuleBase {
        pub pad_0: [u8; 0x1270], // 0x0
    }
    #[repr(C)]
    pub struct C_CSGO_TeamPreviewCharacterPosition {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_nVariant: [u8; 0x4], // 0x600
        pub m_nRandom: [u8; 0x4], // 0x604
        pub m_nOrdinal: [u8; 0x8], // 0x608
        pub m_sWeaponName: [u8; 0x8], // 0x610
        pub m_xuid: [u8; 0x8], // 0x618
        pub m_agentItem: [u8; 0x5B0], // 0x620
        pub m_glovesItem: [u8; 0x5B0], // 0xBD0
        pub m_weaponItem: [u8; 0x5B0], // 0x1180
        pub m_petItem: [u8; 0x5E8], // 0x1730
    }
    #[repr(C)]
    pub struct C_SmokeGrenadeProjectile {
        pub pad_0: [u8; 0x1360], // 0x0
        pub m_nSmokeEffectTickBegin: [u8; 0x4], // 0x1360
        pub m_bDidSmokeEffect: [u8; 0x4], // 0x1364
        pub m_nRandomSeed: [u8; 0x4], // 0x1368
        pub m_vSmokeColor: [u8; 0xC], // 0x136C
        pub m_vSmokeDetonationPos: [u8; 0x10], // 0x1378
        pub m_VoxelFrameData: [u8; 0x18], // 0x1388
        pub m_nVoxelFrameDataSize: [u8; 0x4], // 0x13A0
        pub m_nVoxelUpdate: [u8; 0x4], // 0x13A4
        pub m_nSmokeLightProbeRegen: [u8; 0x1], // 0x13A8
        pub m_bSmokeVolumeDataReceived: [u8; 0x1], // 0x13A9
        pub m_bSmokeEffectSpawned: [u8; 0x156], // 0x13AA
    }
    #[repr(C)]
    pub struct CScriptComponent {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_scriptClassName: [u8; 0x8], // 0x30
    }
    #[repr(C)]
    pub struct CCSPlayer_BuyServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_vecSellbackPurchaseEntries: [u8; 0x68], // 0x48
    }
    #[repr(C)]
    pub struct C_SkyCameraVolumeTarget {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_nSkyboxScale: [u8; 0x8], // 0x600
        pub m_hSkyMaterial: [u8; 0x8], // 0x608
    }
    #[repr(C)]
    pub struct C_PortraitWorldCallbackHandler {
        pub pad_0: [u8; 0x608], // 0x0
    }
    #[repr(C)]
    pub struct C_DynamicProp {
        pub pad_0: [u8; 0x13E0], // 0x0
        pub m_bGraphControllerEnabled: [u8; 0x1], // 0x13E0
        pub m_bUseHitboxesForRenderBox: [u8; 0x1], // 0x13E1
        pub m_bUseAnimGraph: [u8; 0x6], // 0x13E2
        pub m_pOutputAnimBegun: [u8; 0x18], // 0x13E8
        pub m_pOutputAnimOver: [u8; 0x18], // 0x1400
        pub m_pOutputAnimLoopCycleOver: [u8; 0x18], // 0x1418
        pub m_OnAnimReachedStart: [u8; 0x18], // 0x1430
        pub m_OnAnimReachedEnd: [u8; 0x18], // 0x1448
        pub m_iszIdleAnim: [u8; 0x8], // 0x1460
        pub m_nIdleAnimLoopMode: [u8; 0x4], // 0x1468
        pub m_bRandomizeCycle: [u8; 0x1], // 0x146C
        pub m_bStartDisabled: [u8; 0x1], // 0x146D
        pub m_bFiredStartEndOutput: [u8; 0x1], // 0x146E
        pub m_bForceNpcExclude: [u8; 0x1], // 0x146F
        pub m_bCreateMovableSurfaceGraph: [u8; 0x1], // 0x1470
        pub m_bCreateNonSolid: [u8; 0x1], // 0x1471
        pub m_bIsOverrideProp: [u8; 0x2], // 0x1472
        pub m_iInitialGlowState: [u8; 0x4], // 0x1474
        pub m_nGlowRange: [u8; 0x4], // 0x1478
        pub m_nGlowRangeMin: [u8; 0x4], // 0x147C
        pub m_glowColor: [u8; 0x4], // 0x1480
        pub m_nGlowTeam: [u8; 0x4], // 0x1484
        pub m_iCachedFrameCount: [u8; 0x4], // 0x1488
        pub m_vecCachedRenderMins: [u8; 0xC], // 0x148C
        pub m_vecCachedRenderMaxs: [u8; 0x18], // 0x1498
    }
    #[repr(C)]
    pub struct C_CSTeam {
        pub pad_0: [u8; 0x6B8], // 0x0
        pub m_szTeamMatchStat: [u8; 0x200], // 0x6B8
        pub m_numMapVictories: [u8; 0x4], // 0x8B8
        pub m_bSurrendered: [u8; 0x4], // 0x8BC
        pub m_scoreFirstHalf: [u8; 0x4], // 0x8C0
        pub m_scoreSecondHalf: [u8; 0x4], // 0x8C4
        pub m_scoreOvertime: [u8; 0x4], // 0x8C8
        pub m_szClanTeamname: [u8; 0x84], // 0x8CC
        pub m_iClanID: [u8; 0x4], // 0x950
        pub m_szTeamFlagImage: [u8; 0x8], // 0x954
        pub m_szTeamLogoImage: [u8; 0xC], // 0x95C
    }
    #[repr(C)]
    pub struct C_CS2HudModelWeapon {
        pub pad_0: [u8; 0x1390], // 0x0
    }
    #[repr(C)]
    pub struct C_TextureBasedAnimatable {
        pub pad_0: [u8; 0x1098], // 0x0
        pub m_bLoop: [u8; 0x4], // 0x1098
        pub m_flFPS: [u8; 0x4], // 0x109C
        pub m_hPositionKeys: [u8; 0x8], // 0x10A0
        pub m_hRotationKeys: [u8; 0x8], // 0x10A8
        pub m_vAnimationBoundsMin: [u8; 0xC], // 0x10B0
        pub m_vAnimationBoundsMax: [u8; 0xC], // 0x10BC
        pub m_flStartTime: [u8; 0x4], // 0x10C8
        pub m_flStartFrame: [u8; 0x4], // 0x10CC
    }
    #[repr(C)]
    pub struct C_LightEnvironmentEntity {
        pub pad_0: [u8; 0x10A0], // 0x0
    }
    #[repr(C)]
    pub struct C_TriggerPhysics {
        pub pad_0: [u8; 0x1180], // 0x0
        pub m_gravityScale: [u8; 0x4], // 0x1180
        pub m_linearLimit: [u8; 0x4], // 0x1184
        pub m_linearDamping: [u8; 0x4], // 0x1188
        pub m_angularLimit: [u8; 0x4], // 0x118C
        pub m_angularDamping: [u8; 0x4], // 0x1190
        pub m_linearForce: [u8; 0x4], // 0x1194
        pub m_flFrequency: [u8; 0x4], // 0x1198
        pub m_flDampingRatio: [u8; 0x4], // 0x119C
        pub m_vecLinearForcePointAt: [u8; 0xC], // 0x11A0
        pub m_bCollapseToForcePoint: [u8; 0x4], // 0x11AC
        pub m_vecLinearForcePointAtWorld: [u8; 0xC], // 0x11B0
        pub m_vecLinearForceDirection: [u8; 0xC], // 0x11BC
        pub m_bForceDirectionIsInLocalSpace: [u8; 0x1], // 0x11C8
        pub m_bConvertToDebrisWhenPossible: [u8; 0x7], // 0x11C9
    }
    #[repr(C)]
    pub struct C_PropDoorRotating {
        pub pad_0: [u8; 0x14F0], // 0x0
    }
    #[repr(C)]
    pub struct C_HandleTest {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_Handle: [u8; 0x4], // 0x600
        pub m_bSendHandle: [u8; 0x4], // 0x604
    }
    #[repr(C)]
    pub struct CInfoWorldLayer {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_pOutputOnEntitiesSpawned: [u8; 0x18], // 0x600
        pub m_worldName: [u8; 0x8], // 0x618
        pub m_layerName: [u8; 0x8], // 0x620
        pub m_bWorldLayerVisible: [u8; 0x1], // 0x628
        pub m_bEntitiesSpawned: [u8; 0x1], // 0x629
        pub m_bCreateAsChildSpawnGroup: [u8; 0x2], // 0x62A
        pub m_hLayerSpawnGroup: [u8; 0x4], // 0x62C
        pub m_bWorldLayerActuallyVisible: [u8; 0x8], // 0x630
    }
    #[repr(C)]
    pub struct CBodyComponentBaseModelEntity {
        pub pad_0: [u8; 0x510], // 0x0
    }
    #[repr(C)]
    pub struct C_Multimeter {
        pub pad_0: [u8; 0x1268], // 0x0
        pub m_hTargetC4: [u8; 0x8], // 0x1268
    }
    #[repr(C)]
    pub struct C_BaseTrigger {
        pub pad_0: [u8; 0x1098], // 0x0
        pub m_OnStartTouch: [u8; 0x18], // 0x1098
        pub m_OnStartTouchAll: [u8; 0x18], // 0x10B0
        pub m_OnEndTouch: [u8; 0x18], // 0x10C8
        pub m_OnEndTouchAll: [u8; 0x18], // 0x10E0
        pub m_OnTouching: [u8; 0x18], // 0x10F8
        pub m_OnTouchingEachEntity: [u8; 0x18], // 0x1110
        pub m_OnNotTouching: [u8; 0x18], // 0x1128
        pub m_OnTouchingChanged: [u8; 0x18], // 0x1140
        pub m_hTouchingEntities: [u8; 0x18], // 0x1158
        pub m_iFilterName: [u8; 0x8], // 0x1170
        pub m_hFilter: [u8; 0x4], // 0x1178
        pub m_bDisabled: [u8; 0x4], // 0x117C
    }
    #[repr(C)]
    pub struct FilterDamageType {
        pub pad_0: [u8; 0x638], // 0x0
        pub m_iDamageType: [u8; 0x8], // 0x638
    }
    #[repr(C)]
    pub struct CAttributeList {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_Attributes: [u8; 0x68], // 0x8
        pub m_pManager: [u8; 0x8], // 0x70
    }
    #[repr(C)]
    pub struct CPulseCell_Inflow_Wait {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_WakeResume: [u8; 0x48], // 0xD8
    }
    #[repr(C)]
    pub struct CFilterProximity {
        pub pad_0: [u8; 0x638], // 0x0
        pub m_flRadius: [u8; 0x8], // 0x638
    }
    #[repr(C)]
    pub struct CCS2WeaponGraphController {
        pub pad_0: [u8; 0xC0], // 0x0
        pub m_action: [u8; 0x18], // 0xC0
        pub m_bActionReset: [u8; 0x18], // 0xD8
        pub m_flWeaponActionSpeedScale: [u8; 0x18], // 0xF0
        pub m_weaponCategory: [u8; 0x18], // 0x108
        pub m_weaponType: [u8; 0x18], // 0x120
        pub m_weaponExtraInfo: [u8; 0x18], // 0x138
        pub m_flWeaponAmmo: [u8; 0x18], // 0x150
        pub m_flWeaponAmmoMax: [u8; 0x18], // 0x168
        pub m_flWeaponAmmoReserve: [u8; 0x18], // 0x180
        pub m_bWeaponIsSilenced: [u8; 0x18], // 0x198
        pub m_flWeaponIronsightAmount: [u8; 0x18], // 0x1B0
        pub m_bIsUsingLegacyModel: [u8; 0x18], // 0x1C8
        pub m_idleVariation: [u8; 0x18], // 0x1E0
        pub m_deployVariation: [u8; 0x18], // 0x1F8
        pub m_attackType: [u8; 0x18], // 0x210
        pub m_attackThrowStrength: [u8; 0x18], // 0x228
        pub m_flAttackVariation: [u8; 0x18], // 0x240
        pub m_inspectVariation: [u8; 0x18], // 0x258
        pub m_inspectExtraInfo: [u8; 0x18], // 0x270
        pub m_reloadStage: [u8; 0x50], // 0x288
    }
    #[repr(C)]
    pub struct CEffectData {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_vOrigin: [u8; 0xC], // 0x8
        pub m_vStart: [u8; 0xC], // 0x14
        pub m_vNormal: [u8; 0xC], // 0x20
        pub m_vAngles: [u8; 0xC], // 0x2C
        pub m_hEntity: [u8; 0x4], // 0x38
        pub m_hOtherEntity: [u8; 0x4], // 0x3C
        pub m_flScale: [u8; 0x4], // 0x40
        pub m_flMagnitude: [u8; 0x4], // 0x44
        pub m_flRadius: [u8; 0x4], // 0x48
        pub m_nSurfaceProp: [u8; 0x4], // 0x4C
        pub m_nEffectIndex: [u8; 0x8], // 0x50
        pub m_nDamageType: [u8; 0x4], // 0x58
        pub m_nPenetrate: [u8; 0x2], // 0x5C
        pub m_nMaterial: [u8; 0x2], // 0x5E
        pub m_nHitBox: [u8; 0x2], // 0x60
        pub m_nColor: [u8; 0x1], // 0x62
        pub m_fFlags: [u8; 0x1], // 0x63
        pub m_nAttachmentIndex: [u8; 0x4], // 0x64
        pub m_nAttachmentName: [u8; 0x4], // 0x68
        pub m_iEffectName: [u8; 0xC], // 0x6C
    }
    #[repr(C)]
    pub struct C_ParticleSystem {
        pub pad_0: [u8; 0x1098], // 0x0
        pub m_szSnapshotFileName: [u8; 0x200], // 0x1098
        pub m_bActive: [u8; 0x1], // 0x1298
        pub m_bFrozen: [u8; 0x3], // 0x1299
        pub m_flFreezeTransitionDuration: [u8; 0x4], // 0x129C
        pub m_nStopType: [u8; 0x4], // 0x12A0
        pub m_bAnimateDuringGameplayPause: [u8; 0x4], // 0x12A4
        pub m_iEffectIndex: [u8; 0x8], // 0x12A8
        pub m_flStartTime: [u8; 0x4], // 0x12B0
        pub m_flPreSimTime: [u8; 0x4], // 0x12B4
        pub m_vServerControlPoints: [u8; 0x30], // 0x12B8
        pub m_iServerControlPointAssignments: [u8; 0x4], // 0x12E8
        pub m_hControlPointEnts: [u8; 0x100], // 0x12EC
        pub m_bDataStringLocalized: [u8; 0x4], // 0x13EC
        pub m_strDataString: [u8; 0x8], // 0x13F0
        pub m_bNoSave: [u8; 0x1], // 0x13F8
        pub m_bNoFreeze: [u8; 0x1], // 0x13F9
        pub m_bNoRamp: [u8; 0x1], // 0x13FA
        pub m_bStartActive: [u8; 0x5], // 0x13FB
        pub m_iszEffectName: [u8; 0x8], // 0x1400
        pub m_iszControlPointNames: [u8; 0x200], // 0x1408
        pub m_nDataCP: [u8; 0x4], // 0x1608
        pub m_vecDataCPValue: [u8; 0xC], // 0x160C
        pub m_nTintCP: [u8; 0x4], // 0x1618
        pub m_clrTint: [u8; 0x24], // 0x161C
        pub m_bOldActive: [u8; 0x1], // 0x1640
        pub m_bOldFrozen: [u8; 0x27], // 0x1641
    }
    #[repr(C)]
    pub struct CPulseCell_Outflow_CycleShuffled {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_Outputs: [u8; 0x18], // 0x48
    }
    #[repr(C)]
    pub struct C_WeaponSCAR20 {
        pub pad_0: [u8; 0x1F50], // 0x0
    }
    #[repr(C)]
    pub struct C_FuncMover {
        pub pad_0: [u8; 0x1098], // 0x0
    }
    #[repr(C)]
    pub struct CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
        pub pItem: [u8; 0x8], // 0x0
        pub team: [u8; 0x2], // 0x8
        pub slot: [u8; 0xDE], // 0xA
    }
    #[repr(C)]
    pub struct CLightComponent {
        pub pad_0: [u8; 0x38], // 0x0
        pub __m_pChainEntity: [u8; 0x40], // 0x38
        pub m_Color: [u8; 0x4], // 0x78
        pub m_SecondaryColor: [u8; 0x4], // 0x7C
        pub m_flBrightness: [u8; 0x4], // 0x80
        pub m_flBrightnessScale: [u8; 0x4], // 0x84
        pub m_flBrightnessMult: [u8; 0x4], // 0x88
        pub m_flRange: [u8; 0x4], // 0x8C
        pub m_flFalloff: [u8; 0x4], // 0x90
        pub m_flAttenuation0: [u8; 0x4], // 0x94
        pub m_flAttenuation1: [u8; 0x4], // 0x98
        pub m_flAttenuation2: [u8; 0x4], // 0x9C
        pub m_flTheta: [u8; 0x4], // 0xA0
        pub m_flPhi: [u8; 0x4], // 0xA4
        pub m_hLightCookie: [u8; 0x8], // 0xA8
        pub m_nCascades: [u8; 0x4], // 0xB0
        pub m_nCastShadows: [u8; 0x4], // 0xB4
        pub m_nShadowWidth: [u8; 0x4], // 0xB8
        pub m_nShadowHeight: [u8; 0x4], // 0xBC
        pub m_bRenderDiffuse: [u8; 0x4], // 0xC0
        pub m_nRenderSpecular: [u8; 0x4], // 0xC4
        pub m_bRenderTransmissive: [u8; 0x4], // 0xC8
        pub m_flOrthoLightWidth: [u8; 0x4], // 0xCC
        pub m_flOrthoLightHeight: [u8; 0x4], // 0xD0
        pub m_nStyle: [u8; 0x4], // 0xD4
        pub m_Pattern: [u8; 0x8], // 0xD8
        pub m_nCascadeRenderStaticObjects: [u8; 0x4], // 0xE0
        pub m_flShadowCascadeCrossFade: [u8; 0x4], // 0xE4
        pub m_flShadowCascadeDistanceFade: [u8; 0x4], // 0xE8
        pub m_flShadowCascadeDistance0: [u8; 0x4], // 0xEC
        pub m_flShadowCascadeDistance1: [u8; 0x4], // 0xF0
        pub m_flShadowCascadeDistance2: [u8; 0x4], // 0xF4
        pub m_flShadowCascadeDistance3: [u8; 0x4], // 0xF8
        pub m_nShadowCascadeResolution0: [u8; 0x4], // 0xFC
        pub m_nShadowCascadeResolution1: [u8; 0x4], // 0x100
        pub m_nShadowCascadeResolution2: [u8; 0x4], // 0x104
        pub m_nShadowCascadeResolution3: [u8; 0x4], // 0x108
        pub m_bUsesBakedShadowing: [u8; 0x4], // 0x10C
        pub m_nShadowPriority: [u8; 0x4], // 0x110
        pub m_nBakedShadowIndex: [u8; 0x4], // 0x114
        pub m_nLightPathUniqueId: [u8; 0x4], // 0x118
        pub m_nLightMapUniqueId: [u8; 0x4], // 0x11C
        pub m_bRenderToCubemaps: [u8; 0x1], // 0x120
        pub m_bAllowSSTGeneration: [u8; 0x3], // 0x121
        pub m_nDirectLight: [u8; 0x4], // 0x124
        pub m_nBounceLight: [u8; 0x4], // 0x128
        pub m_flBounceScale: [u8; 0x4], // 0x12C
        pub m_flFadeMinDist: [u8; 0x4], // 0x130
        pub m_flFadeMaxDist: [u8; 0x4], // 0x134
        pub m_flShadowFadeMinDist: [u8; 0x4], // 0x138
        pub m_flShadowFadeMaxDist: [u8; 0x4], // 0x13C
        pub m_bEnabled: [u8; 0x1], // 0x140
        pub m_bFlicker: [u8; 0x1], // 0x141
        pub m_bPrecomputedFieldsValid: [u8; 0x2], // 0x142
        pub m_vPrecomputedBoundsMins: [u8; 0xC], // 0x144
        pub m_vPrecomputedBoundsMaxs: [u8; 0xC], // 0x150
        pub m_vPrecomputedOBBOrigin: [u8; 0xC], // 0x15C
        pub m_vPrecomputedOBBAngles: [u8; 0xC], // 0x168
        pub m_vPrecomputedOBBExtent: [u8; 0xC], // 0x174
        pub m_flPrecomputedMaxRange: [u8; 0x4], // 0x180
        pub m_nFogLightingMode: [u8; 0x4], // 0x184
        pub m_flFogContributionStength: [u8; 0x4], // 0x188
        pub m_flNearClipPlane: [u8; 0x4], // 0x18C
        pub m_SkyColor: [u8; 0x4], // 0x190
        pub m_flSkyIntensity: [u8; 0x4], // 0x194
        pub m_SkyAmbientBounce: [u8; 0x4], // 0x198
        pub m_bUseSecondaryColor: [u8; 0x1], // 0x19C
        pub m_bMixedShadows: [u8; 0x3], // 0x19D
        pub m_flLightStyleStartTime: [u8; 0x4], // 0x1A0
        pub m_flCapsuleLength: [u8; 0x4], // 0x1A4
        pub m_flMinRoughness: [u8; 0x4], // 0x1A8
        pub m_bAmbientOcclusionProxyOverride: [u8; 0x4], // 0x1AC
        pub m_hAmbientOcclusionProxyPosition0: [u8; 0x4], // 0x1B0
        pub m_hAmbientOcclusionProxyPosition1: [u8; 0x4], // 0x1B4
        pub m_hAmbientOcclusionProxyPosition2: [u8; 0x4], // 0x1B8
        pub m_hAmbientOcclusionProxyPosition3: [u8; 0x4], // 0x1BC
        pub m_flAmbientOcclusionProxyStrength0: [u8; 0x4], // 0x1C0
        pub m_flAmbientOcclusionProxyStrength1: [u8; 0x4], // 0x1C4
        pub m_flAmbientOcclusionProxyStrength2: [u8; 0x4], // 0x1C8
        pub m_flAmbientOcclusionProxyStrength3: [u8; 0x4], // 0x1CC
        pub m_flAmbientOcclusionProxyAmbientStrength: [u8; 0x4], // 0x1D0
        pub m_flAmbientOcclusionProxyConeAngle0: [u8; 0x4], // 0x1D4
        pub m_flAmbientOcclusionProxyConeAngle1: [u8; 0x4], // 0x1D8
        pub m_flAmbientOcclusionProxyConeAngle2: [u8; 0x4], // 0x1DC
        pub m_flAmbientOcclusionProxyConeAngle3: [u8; 0x10], // 0x1E0
    }
    #[repr(C)]
    pub struct C_DecoyGrenade {
        pub pad_0: [u8; 0x1FE0], // 0x0
    }
    #[repr(C)]
    pub struct C_WaterBullet {
        pub pad_0: [u8; 0x1268], // 0x0
    }
    #[repr(C)]
    pub struct CCSPlayer_ActionTrackingServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_hLastWeaponBeforeC4AutoSwitch: [u8; 0x4], // 0x48
        pub m_bIsRescuing: [u8; 0x4], // 0x4C
        pub m_weaponPurchasesThisMatch: [u8; 0x70], // 0x50
        pub m_weaponPurchasesThisRound: [u8; 0x70], // 0xC0
        pub m_weaponCarryOverIntoThisRound: [u8; 0x70], // 0x130
    }
    #[repr(C)]
    pub struct CBrokenGlassTrap {
        pub pad_0: [u8; 0x1098], // 0x0
    }
    #[repr(C)]
    pub struct C_EnvCubemap {
        pub pad_0: [u8; 0x680], // 0x0
        pub m_Entity_hCubemapTexture: [u8; 0x8], // 0x680
        pub m_Entity_bCustomCubemapTexture: [u8; 0x4], // 0x688
        pub m_Entity_flInfluenceRadius: [u8; 0x4], // 0x68C
        pub m_Entity_vBoxProjectMins: [u8; 0xC], // 0x690
        pub m_Entity_vBoxProjectMaxs: [u8; 0xC], // 0x69C
        pub m_Entity_bMoveable: [u8; 0x4], // 0x6A8
        pub m_Entity_nHandshake: [u8; 0x4], // 0x6AC
        pub m_Entity_nEnvCubeMapArrayIndex: [u8; 0x4], // 0x6B0
        pub m_Entity_nPriority: [u8; 0x4], // 0x6B4
        pub m_Entity_flEdgeFadeDist: [u8; 0x4], // 0x6B8
        pub m_Entity_vEdgeFadeDists: [u8; 0xC], // 0x6BC
        pub m_Entity_flDiffuseScale: [u8; 0x4], // 0x6C8
        pub m_Entity_bStartDisabled: [u8; 0x1], // 0x6CC
        pub m_Entity_bDefaultEnvMap: [u8; 0x1], // 0x6CD
        pub m_Entity_bDefaultSpecEnvMap: [u8; 0x1], // 0x6CE
        pub m_Entity_bIndoorCubeMap: [u8; 0x1], // 0x6CF
        pub m_Entity_bCopyDiffuseFromDefaultCubemap: [u8; 0x10], // 0x6D0
        pub m_Entity_bEnabled: [u8; 0x8], // 0x6E0
    }
    #[repr(C)]
    pub struct CCSObserver_MovementServices {
        pub pad_0: [u8; 0x258], // 0x0
    }
    #[repr(C)]
    pub struct CBodyComponent {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_pSceneNode: [u8; 0x40], // 0x8
        pub __m_pChainEntity: [u8; 0x30], // 0x48
    }
    #[repr(C)]
    pub struct CPulseCell_Inflow_Method {
        pub pad_0: [u8; 0x80], // 0x0
        pub m_MethodName: [u8; 0x10], // 0x80
        pub m_Description: [u8; 0x8], // 0x90
        pub m_bIsPublic: [u8; 0x8], // 0x98
        pub m_Args: [u8; 0x10], // 0xA0
        pub m_ReturnValues: [u8; 0x10], // 0xB0
    }
    #[repr(C)]
    pub struct C_BaseCombatCharacter {
        pub pad_0: [u8; 0x1268], // 0x0
        pub m_hMyWearables: [u8; 0x18], // 0x1268
        pub m_leftFootAttachment: [u8; 0x1], // 0x1280
        pub m_rightFootAttachment: [u8; 0x3], // 0x1281
        pub m_nWaterWakeMode: [u8; 0x4], // 0x1284
        pub m_flWaterWorldZ: [u8; 0x4], // 0x1288
        pub m_flWaterNextTraceTime: [u8; 0x64], // 0x128C
    }
    #[repr(C)]
    pub struct CGlowProperty {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_fGlowColor: [u8; 0x28], // 0x8
        pub m_iGlowType: [u8; 0x4], // 0x30
        pub m_iGlowTeam: [u8; 0x4], // 0x34
        pub m_nGlowRange: [u8; 0x4], // 0x38
        pub m_nGlowRangeMin: [u8; 0x4], // 0x3C
        pub m_glowColorOverride: [u8; 0x4], // 0x40
        pub m_bFlashing: [u8; 0x4], // 0x44
        pub m_flGlowTime: [u8; 0x4], // 0x48
        pub m_flGlowStartTime: [u8; 0x4], // 0x4C
        pub m_bEligibleForScreenHighlight: [u8; 0x1], // 0x50
        pub m_bGlowing: [u8; 0x7], // 0x51
    }
    #[repr(C)]
    pub struct C_PointClientUIDialog {
        pub pad_0: [u8; 0x10C8], // 0x0
        pub m_hActivator: [u8; 0x4], // 0x10C8
        pub m_bStartEnabled: [u8; 0x4], // 0x10CC
    }
    #[repr(C)]
    pub struct C_SoundEventMultiPointEntity {
        pub pad_0: [u8; 0x6C0], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_BaseValue {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct C_WeaponHKP2000 {
        pub pad_0: [u8; 0x1F50], // 0x0
    }
    #[repr(C)]
    pub struct C_FootstepControl {
        pub pad_0: [u8; 0x1180], // 0x0
        pub m_source: [u8; 0x8], // 0x1180
        pub m_destination: [u8; 0x8], // 0x1188
    }
    #[repr(C)]
    pub struct CCitadelSoundOpvarSetOBB {
        pub pad_0: [u8; 0x618], // 0x0
        pub m_iszStackName: [u8; 0x8], // 0x618
        pub m_iszOperatorName: [u8; 0x8], // 0x620
        pub m_iszOpvarName: [u8; 0x8], // 0x628
        pub m_vDistanceInnerMins: [u8; 0xC], // 0x630
        pub m_vDistanceInnerMaxs: [u8; 0xC], // 0x63C
        pub m_vDistanceOuterMins: [u8; 0xC], // 0x648
        pub m_vDistanceOuterMaxs: [u8; 0xC], // 0x654
        pub m_nAABBDirection: [u8; 0x8], // 0x660
    }
    #[repr(C)]
    pub struct C_CSGO_EndOfMatchLineupStart {
        pub pad_0: [u8; 0x600], // 0x0
    }
    #[repr(C)]
    pub struct CPlayer_WaterServices {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_BooleanSwitchState {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_Condition: [u8; 0x90], // 0xD8
        pub m_WhenTrue: [u8; 0x48], // 0x168
        pub m_WhenFalse: [u8; 0x48], // 0x1B0
    }
    #[repr(C)]
    pub struct CDamageRecord {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_PlayerDamager: [u8; 0x4], // 0x30
        pub m_PlayerRecipient: [u8; 0x4], // 0x34
        pub m_hPlayerControllerDamager: [u8; 0x4], // 0x38
        pub m_hPlayerControllerRecipient: [u8; 0x4], // 0x3C
        pub m_szPlayerDamagerName: [u8; 0x8], // 0x40
        pub m_szPlayerRecipientName: [u8; 0x8], // 0x48
        pub m_DamagerXuid: [u8; 0x8], // 0x50
        pub m_RecipientXuid: [u8; 0x8], // 0x58
        pub m_flBulletsDamage: [u8; 0x4], // 0x60
        pub m_flDamage: [u8; 0x4], // 0x64
        pub m_flActualHealthRemoved: [u8; 0x4], // 0x68
        pub m_iNumHits: [u8; 0x4], // 0x6C
        pub m_iLastBulletUpdate: [u8; 0x4], // 0x70
        pub m_bIsOtherEnemy: [u8; 0x1], // 0x74
        pub m_killType: [u8; 0x3], // 0x75
    }
    #[repr(C)]
    pub struct VPhysicsCollisionAttribute_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_nInteractsAs: [u8; 0x8], // 0x8
        pub m_nInteractsWith: [u8; 0x8], // 0x10
        pub m_nInteractsExclude: [u8; 0x8], // 0x18
        pub m_nEntityId: [u8; 0x4], // 0x20
        pub m_nOwnerId: [u8; 0x4], // 0x24
        pub m_nHierarchyId: [u8; 0x2], // 0x28
        pub m_nDetailLayerMask: [u8; 0x2], // 0x2A
        pub m_nDetailLayerMaskType: [u8; 0x1], // 0x2C
        pub m_nTargetDetailLayer: [u8; 0x1], // 0x2D
        pub m_nCollisionGroup: [u8; 0x1], // 0x2E
        pub m_nCollisionFunctionMask: [u8; 0x1], // 0x2F
    }
    #[repr(C)]
    pub struct C_DynamicPropAlias_dynamic_prop {
        pub pad_0: [u8; 0x14B0], // 0x0
    }
    #[repr(C)]
    pub struct CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
        pub pad_0: [u8; 0x698], // 0x0
    }
    #[repr(C)]
    pub struct C_OmniLight {
        pub pad_0: [u8; 0x13A8], // 0x0
        pub m_flInnerAngle: [u8; 0x4], // 0x13A8
        pub m_flOuterAngle: [u8; 0x4], // 0x13AC
        pub m_bShowLight: [u8; 0x8], // 0x13B0
    }
    #[repr(C)]
    pub struct C_SceneEntity {
        pub pad_0: [u8; 0x608], // 0x0
        pub m_bIsPlayingBack: [u8; 0x1], // 0x608
        pub m_bPaused: [u8; 0x1], // 0x609
        pub m_bMultiplayer: [u8; 0x1], // 0x60A
        pub m_bAutogenerated: [u8; 0x1], // 0x60B
        pub m_bAllRequirementsComplete: [u8; 0x4], // 0x60C
        pub m_flForceClientTime: [u8; 0x4], // 0x610
        pub m_nSceneStringIndex: [u8; 0x2], // 0x614
        pub m_bClientOnly: [u8; 0x2], // 0x616
        pub m_hOwner: [u8; 0x8], // 0x618
        pub m_hActorList: [u8; 0x18], // 0x620
        pub m_bWasPlaying: [u8; 0x10], // 0x638
        pub m_QueuedEvents: [u8; 0x18], // 0x648
        pub m_flCurrentTime: [u8; 0x8], // 0x660
    }
    #[repr(C)]
    pub struct CPulseCell_Inflow_Yield {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_UnyieldResume: [u8; 0x48], // 0xD8
    }
    #[repr(C)]
    pub struct C_NametagModule {
        pub pad_0: [u8; 0x1270], // 0x0
        pub m_strNametagString: [u8; 0x8], // 0x1270
    }
    #[repr(C)]
    pub struct C_EconEntity {
        pub pad_0: [u8; 0x1278], // 0x0
        pub m_flFlexDelayTime: [u8; 0x8], // 0x1278
        pub m_flFlexDelayedWeight: [u8; 0x8], // 0x1280
        pub m_bAttributesInitialized: [u8; 0x8], // 0x1288
        pub m_AttributeManager: [u8; 0x610], // 0x1290
        pub m_OriginalOwnerXuidLow: [u8; 0x4], // 0x18A0
        pub m_OriginalOwnerXuidHigh: [u8; 0x4], // 0x18A4
        pub m_nFallbackPaintKit: [u8; 0x4], // 0x18A8
        pub m_nFallbackSeed: [u8; 0x4], // 0x18AC
        pub m_flFallbackWear: [u8; 0x4], // 0x18B0
        pub m_nFallbackStatTrak: [u8; 0x4], // 0x18B4
        pub m_bClientside: [u8; 0x1], // 0x18B8
        pub m_bParticleSystemsCreated: [u8; 0x7], // 0x18B9
        pub m_vecAttachedParticles: [u8; 0x18], // 0x18C0
        pub m_hViewmodelAttachment: [u8; 0x4], // 0x18D8
        pub m_iOldTeam: [u8; 0x4], // 0x18DC
        pub m_bAttachmentDirty: [u8; 0x4], // 0x18E0
        pub m_nUnloadedModelIndex: [u8; 0x4], // 0x18E4
        pub m_iNumOwnerValidationRetries: [u8; 0x10], // 0x18E8
        pub m_hOldProvidee: [u8; 0x8], // 0x18F8
        pub m_vecAttachedModels: [u8; 0x18], // 0x1900
    }
    #[repr(C)]
    pub struct CPlayer_UseServices {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct C_PointValueRemapper {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_bDisabled: [u8; 0x1], // 0x600
        pub m_bDisabledOld: [u8; 0x1], // 0x601
        pub m_bUpdateOnClient: [u8; 0x2], // 0x602
        pub m_nInputType: [u8; 0x4], // 0x604
        pub m_hRemapLineStart: [u8; 0x4], // 0x608
        pub m_hRemapLineEnd: [u8; 0x4], // 0x60C
        pub m_flMaximumChangePerSecond: [u8; 0x4], // 0x610
        pub m_flDisengageDistance: [u8; 0x4], // 0x614
        pub m_flEngageDistance: [u8; 0x4], // 0x618
        pub m_bRequiresUseKey: [u8; 0x4], // 0x61C
        pub m_nOutputType: [u8; 0x8], // 0x620
        pub m_hOutputEntities: [u8; 0x18], // 0x628
        pub m_nHapticsType: [u8; 0x4], // 0x640
        pub m_nMomentumType: [u8; 0x4], // 0x644
        pub m_flMomentumModifier: [u8; 0x4], // 0x648
        pub m_flSnapValue: [u8; 0x4], // 0x64C
        pub m_flCurrentMomentum: [u8; 0x4], // 0x650
        pub m_nRatchetType: [u8; 0x4], // 0x654
        pub m_flRatchetOffset: [u8; 0x4], // 0x658
        pub m_flInputOffset: [u8; 0x4], // 0x65C
        pub m_bEngaged: [u8; 0x1], // 0x660
        pub m_bFirstUpdate: [u8; 0x3], // 0x661
        pub m_flPreviousValue: [u8; 0x4], // 0x664
        pub m_flPreviousUpdateTickTime: [u8; 0x4], // 0x668
        pub m_vecPreviousTestPoint: [u8; 0xC], // 0x66C
    }
    #[repr(C)]
    pub struct CGameSceneNodeHandle {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_hOwner: [u8; 0x4], // 0x8
        pub m_name: [u8; 0x4], // 0xC
    }
    #[repr(C)]
    pub struct CPulseCell_Unknown {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_UnknownKeys: [u8; 0x10], // 0x48
    }
    #[repr(C)]
    pub struct C_WeaponMP7 {
        pub pad_0: [u8; 0x1F50], // 0x0
    }
    #[repr(C)]
    pub struct CSPerRoundStats_t {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_iKills: [u8; 0x4], // 0x30
        pub m_iDeaths: [u8; 0x4], // 0x34
        pub m_iAssists: [u8; 0x4], // 0x38
        pub m_iDamage: [u8; 0x4], // 0x3C
        pub m_iEquipmentValue: [u8; 0x4], // 0x40
        pub m_iMoneySaved: [u8; 0x4], // 0x44
        pub m_iKillReward: [u8; 0x4], // 0x48
        pub m_iLiveTime: [u8; 0x4], // 0x4C
        pub m_iHeadShotKills: [u8; 0x4], // 0x50
        pub m_iObjective: [u8; 0x4], // 0x54
        pub m_iCashEarned: [u8; 0x4], // 0x58
        pub m_iUtilityDamage: [u8; 0x4], // 0x5C
        pub m_iEnemiesFlashed: [u8; 0x8], // 0x60
    }
    #[repr(C)]
    pub struct CPulseCell_Outflow_CycleRandom {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_Outputs: [u8; 0x18], // 0x48
    }
    #[repr(C)]
    pub struct CPulseCell_Step_PublicOutput {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_OutputIndex: [u8; 0x8], // 0x48
    }
    #[repr(C)]
    pub struct C_CS2HudModelBase {
        pub pad_0: [u8; 0x1350], // 0x0
    }
    #[repr(C)]
    pub struct C_CSGameRules {
        pub pad_0: [u8; 0x40], // 0x0
        pub m_bFreezePeriod: [u8; 0x1], // 0x40
        pub m_bWarmupPeriod: [u8; 0x3], // 0x41
        pub m_fWarmupPeriodEnd: [u8; 0x4], // 0x44
        pub m_fWarmupPeriodStart: [u8; 0x4], // 0x48
        pub m_bTerroristTimeOutActive: [u8; 0x1], // 0x4C
        pub m_bCTTimeOutActive: [u8; 0x3], // 0x4D
        pub m_flTerroristTimeOutRemaining: [u8; 0x4], // 0x50
        pub m_flCTTimeOutRemaining: [u8; 0x4], // 0x54
        pub m_nTerroristTimeOuts: [u8; 0x4], // 0x58
        pub m_nCTTimeOuts: [u8; 0x4], // 0x5C
        pub m_bTechnicalTimeOut: [u8; 0x1], // 0x60
        pub m_bMatchWaitingForResume: [u8; 0x3], // 0x61
        pub m_iFreezeTime: [u8; 0x4], // 0x64
        pub m_iRoundTime: [u8; 0x4], // 0x68
        pub m_fMatchStartTime: [u8; 0x4], // 0x6C
        pub m_fRoundStartTime: [u8; 0x4], // 0x70
        pub m_flRestartRoundTime: [u8; 0x4], // 0x74
        pub m_bGameRestart: [u8; 0x4], // 0x78
        pub m_flGameStartTime: [u8; 0x4], // 0x7C
        pub m_timeUntilNextPhaseStarts: [u8; 0x4], // 0x80
        pub m_gamePhase: [u8; 0x4], // 0x84
        pub m_totalRoundsPlayed: [u8; 0x4], // 0x88
        pub m_nRoundsPlayedThisPhase: [u8; 0x4], // 0x8C
        pub m_nOvertimePlaying: [u8; 0x4], // 0x90
        pub m_iHostagesRemaining: [u8; 0x4], // 0x94
        pub m_bAnyHostageReached: [u8; 0x1], // 0x98
        pub m_bMapHasBombTarget: [u8; 0x1], // 0x99
        pub m_bMapHasRescueZone: [u8; 0x1], // 0x9A
        pub m_bMapHasBuyZone: [u8; 0x1], // 0x9B
        pub m_bIsQueuedMatchmaking: [u8; 0x4], // 0x9C
        pub m_nQueuedMatchmakingMode: [u8; 0x4], // 0xA0
        pub m_bIsValveDS: [u8; 0x1], // 0xA4
        pub m_bLogoMap: [u8; 0x1], // 0xA5
        pub m_bPlayAllStepSoundsOnServer: [u8; 0x2], // 0xA6
        pub m_iSpectatorSlotCount: [u8; 0x4], // 0xA8
        pub m_MatchDevice: [u8; 0x4], // 0xAC
        pub m_bHasMatchStarted: [u8; 0x4], // 0xB0
        pub m_nNextMapInMapgroup: [u8; 0x4], // 0xB4
        pub m_szTournamentEventName: [u8; 0x200], // 0xB8
        pub m_szTournamentEventStage: [u8; 0x200], // 0x2B8
        pub m_szMatchStatTxt: [u8; 0x200], // 0x4B8
        pub m_szTournamentPredictionsTxt: [u8; 0x200], // 0x6B8
        pub m_nTournamentPredictionsPct: [u8; 0x4], // 0x8B8
        pub m_flCMMItemDropRevealStartTime: [u8; 0x4], // 0x8BC
        pub m_flCMMItemDropRevealEndTime: [u8; 0x4], // 0x8C0
        pub m_bIsDroppingItems: [u8; 0x1], // 0x8C4
        pub m_bIsQuestEligible: [u8; 0x1], // 0x8C5
        pub m_bIsHltvActive: [u8; 0x1], // 0x8C6
        pub m_bBombPlanted: [u8; 0x1], // 0x8C7
        pub m_arrProhibitedItemIndices: [u8; 0xC8], // 0x8C8
        pub m_arrTournamentActiveCasterAccounts: [u8; 0x10], // 0x990
        pub m_numBestOfMaps: [u8; 0x4], // 0x9A0
        pub m_nHalloweenMaskListSeed: [u8; 0x4], // 0x9A4
        pub m_bBombDropped: [u8; 0x4], // 0x9A8
        pub m_iRoundWinStatus: [u8; 0x4], // 0x9AC
        pub m_eRoundWinReason: [u8; 0x4], // 0x9B0
        pub m_bTCantBuy: [u8; 0x1], // 0x9B4
        pub m_bCTCantBuy: [u8; 0x3], // 0x9B5
        pub m_iMatchStats_RoundResults: [u8; 0x78], // 0x9B8
        pub m_iMatchStats_PlayersAlive_CT: [u8; 0x78], // 0xA30
        pub m_iMatchStats_PlayersAlive_T: [u8; 0x78], // 0xAA8
        pub m_TeamRespawnWaveTimes: [u8; 0x80], // 0xB20
        pub m_nActiveMutators: [u8; 0x4], // 0xBA0
        pub m_flNextRespawnWave: [u8; 0x80], // 0xBA4
        pub m_vMinimapMins: [u8; 0xC], // 0xC24
        pub m_vMinimapMaxs: [u8; 0xC], // 0xC30
        pub m_MinimapVerticalSectionHeights: [u8; 0x24], // 0xC3C
        pub m_ullLocalMatchID: [u8; 0x8], // 0xC60
        pub m_nEndMatchMapGroupVoteTypes: [u8; 0x28], // 0xC68
        pub m_nEndMatchMapGroupVoteOptions: [u8; 0x28], // 0xC90
        pub m_nEndMatchMapVoteWinner: [u8; 0x4], // 0xCB8
        pub m_iNumConsecutiveCTLoses: [u8; 0x4], // 0xCBC
        pub m_iNumConsecutiveTerroristLoses: [u8; 0xC0], // 0xCC0
        pub m_nMatchAbortedEarlyReason: [u8; 0x4], // 0xD80
        pub m_bHasTriggeredRoundStartMusic: [u8; 0x1], // 0xD84
        pub m_bSwitchingTeamsAtRoundReset: [u8; 0x1B], // 0xD85
        pub m_pGameModeRules: [u8; 0x8], // 0xDA0
        pub m_RetakeRules: [u8; 0x158], // 0xDA8
        pub m_nMatchEndCount: [u8; 0x4], // 0xF00
        pub m_nTTeamIntroVariant: [u8; 0x4], // 0xF04
        pub m_nCTTeamIntroVariant: [u8; 0x4], // 0xF08
        pub m_bTeamIntroPeriod: [u8; 0x4], // 0xF0C
        pub m_iRoundEndWinnerTeam: [u8; 0x4], // 0xF10
        pub m_eRoundEndReason: [u8; 0x4], // 0xF14
        pub m_bRoundEndShowTimerDefend: [u8; 0x4], // 0xF18
        pub m_iRoundEndTimerTime: [u8; 0x4], // 0xF1C
        pub m_sRoundEndFunFactToken: [u8; 0x8], // 0xF20
        pub m_iRoundEndFunFactPlayerSlot: [u8; 0x4], // 0xF28
        pub m_iRoundEndFunFactData1: [u8; 0x4], // 0xF2C
        pub m_iRoundEndFunFactData2: [u8; 0x4], // 0xF30
        pub m_iRoundEndFunFactData3: [u8; 0x4], // 0xF34
        pub m_sRoundEndMessage: [u8; 0x8], // 0xF38
        pub m_iRoundEndPlayerCount: [u8; 0x4], // 0xF40
        pub m_bRoundEndNoMusic: [u8; 0x4], // 0xF44
        pub m_iRoundEndLegacy: [u8; 0x4], // 0xF48
        pub m_nRoundEndCount: [u8; 0x4], // 0xF4C
        pub m_iRoundStartRoundNumber: [u8; 0x4], // 0xF50
        pub m_nRoundStartCount: [u8; 0x400C], // 0xF54
        pub m_flLastPerfSampleTime: [u8; 0x8], // 0x4F60
    }
    #[repr(C)]
    pub struct CGrenadeTracer {
        pub pad_0: [u8; 0x10B0], // 0x0
        pub m_flTracerDuration: [u8; 0x4], // 0x10B0
        pub m_nType: [u8; 0x47C], // 0x10B4
    }
    #[repr(C)]
    pub struct CCSGameModeRules_Noop {
        pub pad_0: [u8; 0x30], // 0x0
    }
    #[repr(C)]
    pub struct CPulse_BlackboardReference {
        pub m_hBlackboardResource: [u8; 0x8], // 0x0
        pub m_BlackboardResource: [u8; 0x10], // 0x8
        pub m_nNodeID: [u8; 0x8], // 0x18
        pub m_NodeName: [u8; 0x8], // 0x20
    }
    #[repr(C)]
    pub struct C_BaseCSGrenadeProjectile {
        pub pad_0: [u8; 0x12B0], // 0x0
        pub m_vInitialPosition: [u8; 0xC], // 0x12B0
        pub m_vInitialVelocity: [u8; 0xC], // 0x12BC
        pub m_nBounces: [u8; 0x8], // 0x12C8
        pub m_nExplodeEffectIndex: [u8; 0x8], // 0x12D0
        pub m_nExplodeEffectTickBegin: [u8; 0x4], // 0x12D8
        pub m_vecExplodeEffectOrigin: [u8; 0xC], // 0x12DC
        pub m_flSpawnTime: [u8; 0x4], // 0x12E8
        pub vecLastTrailLinePos: [u8; 0xC], // 0x12EC
        pub flNextTrailLineTime: [u8; 0x4], // 0x12F8
        pub m_bExplodeEffectBegan: [u8; 0x1], // 0x12FC
        pub m_bCanCreateGrenadeTrail: [u8; 0x3], // 0x12FD
        pub m_nSnapshotTrajectoryEffectIndex: [u8; 0x8], // 0x1300
        pub m_hSnapshotTrajectoryParticleSnapshot: [u8; 0x8], // 0x1308
        pub m_arrTrajectoryTrailPoints: [u8; 0x18], // 0x1310
        pub m_arrTrajectoryTrailPointCreationTimes: [u8; 0x18], // 0x1328
        pub m_flTrajectoryTrailEffectCreationTime: [u8; 0x8], // 0x1340
    }
    #[repr(C)]
    pub struct CCSGO_RushIntroCounterTerroristPosition {
        pub pad_0: [u8; 0x1D18], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_ReturnValues {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct C_GradientFog {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_hGradientFogTexture: [u8; 0x8], // 0x600
        pub m_flFogStartDistance: [u8; 0x4], // 0x608
        pub m_flFogEndDistance: [u8; 0x4], // 0x60C
        pub m_bHeightFogEnabled: [u8; 0x4], // 0x610
        pub m_flFogStartHeight: [u8; 0x4], // 0x614
        pub m_flFogEndHeight: [u8; 0x4], // 0x618
        pub m_flFarZ: [u8; 0x4], // 0x61C
        pub m_flFogMaxOpacity: [u8; 0x4], // 0x620
        pub m_flFogFalloffExponent: [u8; 0x4], // 0x624
        pub m_flFogVerticalExponent: [u8; 0x4], // 0x628
        pub m_fogColor: [u8; 0x4], // 0x62C
        pub m_flFogStrength: [u8; 0x4], // 0x630
        pub m_flFadeTime: [u8; 0x4], // 0x634
        pub m_bStartDisabled: [u8; 0x1], // 0x638
        pub m_bIsEnabled: [u8; 0x1], // 0x639
        pub m_bGradientFogNeedsTextures: [u8; 0x5E], // 0x63A
    }
    #[repr(C)]
    pub struct CCSPlayerController_InGameMoneyServices {
        pub pad_0: [u8; 0x40], // 0x0
        pub m_iAccount: [u8; 0x4], // 0x40
        pub m_iStartAccount: [u8; 0x4], // 0x44
        pub m_iTotalCashSpent: [u8; 0x4], // 0x48
        pub m_iCashSpentThisRound: [u8; 0x4], // 0x4C
    }
    #[repr(C)]
    pub struct CCSPlayer_AimPunchServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_predictableBaseTick: [u8; 0x4], // 0x48
        pub m_predictableBaseTickInterpAmount: [u8; 0x4], // 0x4C
        pub m_predictableBaseAngle: [u8; 0xC], // 0x50
        pub m_predictableBaseAngleVel: [u8; 0x44], // 0x5C
        pub m_unpredictableBaseTick: [u8; 0x4], // 0xA0
        pub m_unpredictableBaseAngle: [u8; 0x44], // 0xA4
    }
    #[repr(C)]
    pub struct C_HEGrenadeProjectile {
        pub pad_0: [u8; 0x1348], // 0x0
    }
    #[repr(C)]
    pub struct CFilterModel {
        pub pad_0: [u8; 0x638], // 0x0
        pub m_iFilterModel: [u8; 0x8], // 0x638
    }
    #[repr(C)]
    pub struct C_SoundAreaEntityOrientedBox {
        pub pad_0: [u8; 0x628], // 0x0
        pub m_vMin: [u8; 0xC], // 0x628
        pub m_vMax: [u8; 0xC], // 0x634
    }
    #[repr(C)]
    pub struct C_SoundOpvarSetPointEntity {
        pub pad_0: [u8; 0x620], // 0x0
    }
    #[repr(C)]
    pub struct CPulseGameBlackboard {
        pub pad_0: [u8; 0x608], // 0x0
        pub m_strGraphName: [u8; 0x8], // 0x608
        pub m_strStateBlob: [u8; 0x8], // 0x610
    }
    #[repr(C)]
    pub struct CChoreoComponent {
        pub pad_0: [u8; 0x8], // 0x0
        pub __m_pChainEntity: [u8; 0x28], // 0x8
        pub m_hOwner: [u8; 0x4], // 0x30
        pub m_nExernalChoreoGraphCount: [u8; 0x4], // 0x34
        pub m_sActiveExternalChoreoGraphSlotID: [u8; 0x38], // 0x38
        pub m_nNextSceneEventId: [u8; 0x4], // 0x70
        pub m_flAllowResponsesEndTime: [u8; 0xC], // 0x74
    }
    #[repr(C)]
    pub struct CPulseCell_Value_RandomInt {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct C_CSWeaponBaseShotgun {
        pub pad_0: [u8; 0x1F20], // 0x0
    }
    #[repr(C)]
    pub struct C_RagdollPropAttached {
        pub pad_0: [u8; 0x12F0], // 0x0
        pub m_boneIndexAttached: [u8; 0x4], // 0x12F0
        pub m_ragdollAttachedObjectIndex: [u8; 0x4], // 0x12F4
        pub m_attachmentPointBoneSpace: [u8; 0xC], // 0x12F8
        pub m_attachmentPointRagdollSpace: [u8; 0xC], // 0x1304
        pub m_vecOffset: [u8; 0xC], // 0x1310
        pub m_parentTime: [u8; 0x4], // 0x131C
        pub m_bHasParent: [u8; 0x8], // 0x1320
    }
    #[repr(C)]
    pub struct C_ModelPointEntity {
        pub pad_0: [u8; 0x1098], // 0x0
    }
    #[repr(C)]
    pub struct C_CSGO_PreviewPlayer {
        pub pad_0: [u8; 0x3720], // 0x0
        pub m_animgraphCharacterModeString: [u8; 0x8], // 0x3720
        pub m_flInitialModelScale: [u8; 0xA8], // 0x3728
    }
    #[repr(C)]
    pub struct C_RectLight {
        pub pad_0: [u8; 0x13A8], // 0x0
        pub m_bShowLight: [u8; 0x8], // 0x13A8
    }
    #[repr(C)]
    pub struct CCSRadarElement {
        pub pad_0: [u8; 0x618], // 0x0
        pub m_nElementType: [u8; 0x4], // 0x618
        pub m_nElementColor: [u8; 0x4], // 0x61C
        pub m_nTeamFilter: [u8; 0x8], // 0x620
    }
    #[repr(C)]
    pub struct CPathSimple {
        pub pad_0: [u8; 0x610], // 0x0
        pub m_CPathQueryComponent: [u8; 0xF0], // 0x610
        pub m_pathString: [u8; 0x8], // 0x700
        pub m_bClosedLoop: [u8; 0x8], // 0x708
    }
    #[repr(C)]
    pub struct C_FuncTrackTrain {
        pub pad_0: [u8; 0x1098], // 0x0
        pub m_nLongAxis: [u8; 0x4], // 0x1098
        pub m_flRadius: [u8; 0x4], // 0x109C
        pub m_flLineLength: [u8; 0x8], // 0x10A0
    }
    #[repr(C)]
    pub struct C_EconWearable {
        pub pad_0: [u8; 0x1918], // 0x0
        pub m_nForceSkin: [u8; 0x4], // 0x1918
        pub m_bAlwaysAllow: [u8; 0x4], // 0x191C
    }
    #[repr(C)]
    pub struct C_EnvDecal {
        pub pad_0: [u8; 0x1098], // 0x0
        pub m_hDecalMaterial: [u8; 0x8], // 0x1098
        pub m_flWidth: [u8; 0x4], // 0x10A0
        pub m_flHeight: [u8; 0x4], // 0x10A4
        pub m_flDepth: [u8; 0x4], // 0x10A8
        pub m_nRenderOrder: [u8; 0x4], // 0x10AC
        pub m_bProjectOnWorld: [u8; 0x1], // 0x10B0
        pub m_bProjectOnCharacters: [u8; 0x1], // 0x10B1
        pub m_bProjectOnWater: [u8; 0x2], // 0x10B2
        pub m_flDepthSortBias: [u8; 0x1C], // 0x10B4
    }
    #[repr(C)]
    pub struct EntitySpottedState_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_bSpotted: [u8; 0x4], // 0x8
        pub m_bSpottedByMask: [u8; 0xC], // 0xC
    }
    #[repr(C)]
    pub struct fogparams_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub dirPrimary: [u8; 0xC], // 0x8
        pub colorPrimary: [u8; 0x4], // 0x14
        pub colorSecondary: [u8; 0x4], // 0x18
        pub colorPrimaryLerpTo: [u8; 0x4], // 0x1C
        pub colorSecondaryLerpTo: [u8; 0x4], // 0x20
        pub start: [u8; 0x4], // 0x24
        pub end: [u8; 0x4], // 0x28
        pub farz: [u8; 0x4], // 0x2C
        pub maxdensity: [u8; 0x4], // 0x30
        pub exponent: [u8; 0x4], // 0x34
        pub HDRColorScale: [u8; 0x4], // 0x38
        pub skyboxFogFactor: [u8; 0x4], // 0x3C
        pub skyboxFogFactorLerpTo: [u8; 0x4], // 0x40
        pub startLerpTo: [u8; 0x4], // 0x44
        pub endLerpTo: [u8; 0x4], // 0x48
        pub maxdensityLerpTo: [u8; 0x4], // 0x4C
        pub lerptime: [u8; 0x4], // 0x50
        pub duration: [u8; 0x4], // 0x54
        pub blendtobackground: [u8; 0x4], // 0x58
        pub scattering: [u8; 0x4], // 0x5C
        pub locallightscale: [u8; 0x4], // 0x60
        pub enable: [u8; 0x1], // 0x64
        pub blend: [u8; 0x1], // 0x65
        pub m_bPadding2: [u8; 0x1], // 0x66
        pub m_bPadding: [u8; 0x1], // 0x67
    }
    #[repr(C)]
    pub struct C_WeaponM4A1 {
        pub pad_0: [u8; 0x1F50], // 0x0
    }
    #[repr(C)]
    pub struct C_Item {
        pub pad_0: [u8; 0x1918], // 0x0
        pub m_pReticleHintTextName: [u8; 0x100], // 0x1918
    }
    #[repr(C)]
    pub struct C_CSPetPlacement {
        pub pad_0: [u8; 0x600], // 0x0
    }
    #[repr(C)]
    pub struct C_Beam {
        pub pad_0: [u8; 0x1098], // 0x0
        pub m_flFrameRate: [u8; 0x4], // 0x1098
        pub m_flHDRColorScale: [u8; 0x4], // 0x109C
        pub m_flFireTime: [u8; 0x4], // 0x10A0
        pub m_flDamage: [u8; 0x4], // 0x10A4
        pub m_nNumBeamEnts: [u8; 0x4], // 0x10A8
        pub m_queryHandleHalo: [u8; 0x24], // 0x10AC
        pub m_hBaseMaterial: [u8; 0x8], // 0x10D0
        pub m_nHaloIndex: [u8; 0x8], // 0x10D8
        pub m_nBeamType: [u8; 0x4], // 0x10E0
        pub m_nBeamFlags: [u8; 0x4], // 0x10E4
        pub m_hAttachEntity: [u8; 0x28], // 0x10E8
        pub m_nAttachIndex: [u8; 0xC], // 0x1110
        pub m_fWidth: [u8; 0x4], // 0x111C
        pub m_fEndWidth: [u8; 0x4], // 0x1120
        pub m_fFadeLength: [u8; 0x4], // 0x1124
        pub m_fHaloScale: [u8; 0x4], // 0x1128
        pub m_fAmplitude: [u8; 0x4], // 0x112C
        pub m_fStartFrame: [u8; 0x4], // 0x1130
        pub m_fSpeed: [u8; 0x4], // 0x1134
        pub m_flFrame: [u8; 0x4], // 0x1138
        pub m_bTurnedOff: [u8; 0x4], // 0x113C
        pub m_vecEndPos: [u8; 0xC], // 0x1140
        pub m_hEndEntity: [u8; 0x4], // 0x114C
    }
    #[repr(C)]
    pub struct C_EnvLightProbeVolume {
        pub pad_0: [u8; 0x698], // 0x0
        pub m_Entity_hLightProbeTexture_AmbientCube: [u8; 0x8], // 0x698
        pub m_Entity_hLightProbeTexture_SDF: [u8; 0x8], // 0x6A0
        pub m_Entity_hLightProbeTexture_SH2_DC: [u8; 0x8], // 0x6A8
        pub m_Entity_hLightProbeTexture_SH2_L1: [u8; 0x8], // 0x6B0
        pub m_Entity_hLightProbeDirectLightIndicesTexture: [u8; 0x8], // 0x6B8
        pub m_Entity_hLightProbeDirectLightScalarsTexture: [u8; 0x8], // 0x6C0
        pub m_Entity_hLightProbeDirectLightShadowsTexture: [u8; 0x8], // 0x6C8
        pub m_Entity_vBoxMins: [u8; 0xC], // 0x6D0
        pub m_Entity_vBoxMaxs: [u8; 0xC], // 0x6DC
        pub m_Entity_bMoveable: [u8; 0x4], // 0x6E8
        pub m_Entity_nHandshake: [u8; 0x4], // 0x6EC
        pub m_Entity_nPriority: [u8; 0x4], // 0x6F0
        pub m_Entity_bStartDisabled: [u8; 0x4], // 0x6F4
        pub m_Entity_nLightProbeSizeX: [u8; 0x4], // 0x6F8
        pub m_Entity_nLightProbeSizeY: [u8; 0x4], // 0x6FC
        pub m_Entity_nLightProbeSizeZ: [u8; 0x4], // 0x700
        pub m_Entity_nLightProbeAtlasX: [u8; 0x4], // 0x704
        pub m_Entity_nLightProbeAtlasY: [u8; 0x4], // 0x708
        pub m_Entity_nLightProbeAtlasZ: [u8; 0xD], // 0x70C
        pub m_Entity_bEnabled: [u8; 0x7], // 0x719
    }
    #[repr(C)]
    pub struct CExplosionTypeData {
        pub m_SoundName: [u8; 0x10], // 0x0
        pub m_ParticleEffect: [u8; 0xE0], // 0x10
        pub m_bIsIncindiary: [u8; 0x1], // 0xF0
        pub m_bHasForces: [u8; 0x7], // 0xF1
        pub m_DecalType: [u8; 0x8], // 0xF8
    }
    #[repr(C)]
    pub struct C_FuncConveyor {
        pub pad_0: [u8; 0x10A0], // 0x0
        pub m_vecMoveDirEntitySpace: [u8; 0xC], // 0x10A0
        pub m_flTargetSpeed: [u8; 0x4], // 0x10AC
        pub m_nTransitionStartTick: [u8; 0x4], // 0x10B0
        pub m_nTransitionDurationTicks: [u8; 0x4], // 0x10B4
        pub m_flTransitionStartSpeed: [u8; 0x4], // 0x10B8
        pub m_flFrictionScale: [u8; 0x4], // 0x10BC
        pub m_hConveyorModels: [u8; 0x18], // 0x10C0
        pub m_flCurrentConveyorOffset: [u8; 0x4], // 0x10D8
        pub m_flCurrentConveyorSpeed: [u8; 0x4], // 0x10DC
    }
    #[repr(C)]
    pub struct CCSPlayer_WeaponServices {
        pub pad_0: [u8; 0xD0], // 0x0
        pub m_flNextAttack: [u8; 0x4], // 0xD0
        pub m_nOldTotalShootPositionHistoryCount: [u8; 0x29C], // 0xD4
        pub m_nOldTotalInputHistoryCount: [u8; 0x1250], // 0x370
        pub m_networkAnimTiming: [u8; 0x18], // 0x15C0
        pub m_bBlockInspectUntilNextGraphUpdate: [u8; 0x30], // 0x15D8
    }
    #[repr(C)]
    pub struct C_PhysMagnet {
        pub pad_0: [u8; 0x1268], // 0x0
        pub m_aAttachedObjectsFromServer: [u8; 0x18], // 0x1268
        pub m_aAttachedObjects: [u8; 0x18], // 0x1280
    }
    #[repr(C)]
    pub struct CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
        pub pad_0: [u8; 0x690], // 0x0
    }
    #[repr(C)]
    pub struct C_Breakable {
        pub pad_0: [u8; 0x1098], // 0x0
    }
    #[repr(C)]
    pub struct C_PlantedC4 {
        pub pad_0: [u8; 0x1288], // 0x0
        pub m_bBombTicking: [u8; 0x4], // 0x1288
        pub m_nBombSite: [u8; 0x4], // 0x128C
        pub m_nSourceSoundscapeHash: [u8; 0x8], // 0x1290
        pub m_entitySpottedState: [u8; 0x18], // 0x1298
        pub m_flNextGlow: [u8; 0x4], // 0x12B0
        pub m_flNextBeep: [u8; 0x4], // 0x12B4
        pub m_flC4Blow: [u8; 0x4], // 0x12B8
        pub m_bCannotBeDefused: [u8; 0x1], // 0x12BC
        pub m_bHasExploded: [u8; 0x3], // 0x12BD
        pub m_flTimerLength: [u8; 0x4], // 0x12C0
        pub m_bBeingDefused: [u8; 0x4], // 0x12C4
        pub m_bTriggerWarning: [u8; 0x4], // 0x12C8
        pub m_bExplodeWarning: [u8; 0x4], // 0x12CC
        pub m_bC4Activated: [u8; 0x1], // 0x12D0
        pub m_bTenSecWarning: [u8; 0x3], // 0x12D1
        pub m_flDefuseLength: [u8; 0x4], // 0x12D4
        pub m_flDefuseCountDown: [u8; 0x4], // 0x12D8
        pub m_bBombDefused: [u8; 0x4], // 0x12DC
        pub m_hBombDefuser: [u8; 0x8], // 0x12E0
        pub m_AttributeManager: [u8; 0x610], // 0x12E8
        pub m_hDefuserMultimeter: [u8; 0x4], // 0x18F8
        pub m_flNextRadarFlashTime: [u8; 0x4], // 0x18FC
        pub m_bRadarFlash: [u8; 0x4], // 0x1900
        pub m_pBombDefuser: [u8; 0x4], // 0x1904
        pub m_fLastDefuseTime: [u8; 0x8], // 0x1908
        pub m_pPredictionOwner: [u8; 0x8], // 0x1910
        pub m_vecC4ExplodeSpectatePos: [u8; 0xC], // 0x1918
        pub m_vecC4ExplodeSpectateAng: [u8; 0xC], // 0x1924
        pub m_flC4ExplodeSpectateDuration: [u8; 0x28], // 0x1930
    }
    #[repr(C)]
    pub struct CCSCustomHudLayoutState {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_playerSlot: [u8; 0x4], // 0x30
        pub m_bInputCaptureEnabled: [u8; 0x4], // 0x34
        pub m_vecHasClasses: [u8; 0x18], // 0x38
        pub m_vecDialogVariableStrings: [u8; 0xB8], // 0x50
    }
    #[repr(C)]
    pub struct CCSGO_WingmanIntroCharacterPosition {
        pub pad_0: [u8; 0x1D18], // 0x0
    }
    #[repr(C)]
    pub struct CFilterName {
        pub pad_0: [u8; 0x638], // 0x0
        pub m_iFilterName: [u8; 0x8], // 0x638
    }
    #[repr(C)]
    pub struct C_RagdollProp {
        pub pad_0: [u8; 0x1268], // 0x0
        pub m_ragEnabled: [u8; 0x18], // 0x1268
        pub m_ragPos: [u8; 0x18], // 0x1280
        pub m_ragAngles: [u8; 0x18], // 0x1298
        pub m_flBlendWeight: [u8; 0x4], // 0x12B0
        pub m_hRagdollSource: [u8; 0x4], // 0x12B4
        pub m_iEyeAttachment: [u8; 0x4], // 0x12B8
        pub m_flBlendWeightCurrent: [u8; 0x4], // 0x12BC
        pub m_parentPhysicsBoneIndices: [u8; 0x18], // 0x12C0
        pub m_worldSpaceBoneComputationOrder: [u8; 0x18], // 0x12D8
    }
    #[repr(C)]
    pub struct CPulse_CallInfo {
        pub m_PortName: [u8; 0x10], // 0x0
        pub m_nEditorNodeID: [u8; 0x8], // 0x10
        pub m_RegisterMap: [u8; 0x30], // 0x18
        pub m_CallMethodID: [u8; 0x4], // 0x48
        pub m_nSrcChunk: [u8; 0x4], // 0x4C
        pub m_nSrcInstruction: [u8; 0x4], // 0x50
        pub m_nBreakDestChunk: [u8; 0x4], // 0x54
        pub m_nBreakDestInstruction: [u8; 0x8], // 0x58
    }
    #[repr(C)]
    pub struct C_MapPreviewParticleSystem {
        pub pad_0: [u8; 0x1668], // 0x0
    }
    #[repr(C)]
    pub struct CBaseAnimGraph {
        pub pad_0: [u8; 0x1098], // 0x0
        pub m_graphControllerManager: [u8; 0x98], // 0x1098
        pub m_pMainGraphController: [u8; 0x8], // 0x1130
        pub m_bInitiallyPopulateInterpHistory: [u8; 0x2], // 0x1138
        pub m_bSuppressAnimEventSounds: [u8; 0x6], // 0x113A
        pub m_OnLayerCycleUpdated: [u8; 0x20], // 0x1140
        pub m_OnExternalChoreoGraphChanged: [u8; 0x20], // 0x1160
        pub m_bAnimGraphUpdateEnabled: [u8; 0x1], // 0x1180
        pub m_bAnimationUpdateScheduled: [u8; 0x3], // 0x1181
        pub m_vecForce: [u8; 0xC], // 0x1184
        pub m_nForceBone: [u8; 0x8], // 0x1190
        pub m_pClientsideRagdoll: [u8; 0x8], // 0x1198
        pub m_bBuiltRagdoll: [u8; 0x10], // 0x11A0
        pub m_pRagdollControl: [u8; 0x8], // 0x11B0
        pub m_RagdollPose: [u8; 0x48], // 0x11B8
        pub m_bRagdollEnabled: [u8; 0x1], // 0x1200
        pub m_bRagdollClientSide: [u8; 0x1], // 0x1201
        pub m_bShouldUpdateTransformations: [u8; 0xE], // 0x1202
        pub m_bHasAnimatedMaterialAttributes: [u8; 0x58], // 0x1210
    }
    #[repr(C)]
    pub struct CPulseCell_InlineNodeSkipSelector {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_nFlowNodeID: [u8; 0x4], // 0x48
        pub m_bAnd: [u8; 0x4], // 0x4C
        pub m_PassOutflow: [u8; 0x18], // 0x50
        pub m_FailOutflow: [u8; 0x48], // 0x68
    }
    #[repr(C)]
    pub struct C_LightEntity {
        pub pad_0: [u8; 0x1098], // 0x0
        pub m_CLightComponent: [u8; 0x8], // 0x1098
    }
    #[repr(C)]
    pub struct C_WeaponM249 {
        pub pad_0: [u8; 0x1F50], // 0x0
    }
    #[repr(C)]
    pub struct C_LocalTempEntity {
        pub pad_0: [u8; 0x1268], // 0x0
        pub flags: [u8; 0x4], // 0x1268
        pub die: [u8; 0x4], // 0x126C
        pub m_flFrameMax: [u8; 0x4], // 0x1270
        pub x: [u8; 0x4], // 0x1274
        pub y: [u8; 0x4], // 0x1278
        pub fadeSpeed: [u8; 0x4], // 0x127C
        pub bounceFactor: [u8; 0x4], // 0x1280
        pub hitSound: [u8; 0x4], // 0x1284
        pub priority: [u8; 0x4], // 0x1288
        pub tentOffset: [u8; 0xC], // 0x128C
        pub m_vecTempEntAngVelocity: [u8; 0xC], // 0x1298
        pub tempent_renderamt: [u8; 0x4], // 0x12A4
        pub m_vecNormal: [u8; 0xC], // 0x12A8
        pub m_flSpriteScale: [u8; 0x4], // 0x12B4
        pub m_nFlickerFrame: [u8; 0x4], // 0x12B8
        pub m_flFrameRate: [u8; 0x4], // 0x12BC
        pub m_flFrame: [u8; 0x8], // 0x12C0
        pub m_pszImpactEffect: [u8; 0x8], // 0x12C8
        pub m_pszParticleEffect: [u8; 0x8], // 0x12D0
        pub m_bParticleCollision: [u8; 0x4], // 0x12D8
        pub m_iLastCollisionFrame: [u8; 0x4], // 0x12DC
        pub m_vLastCollisionOrigin: [u8; 0xC], // 0x12E0
        pub m_vecTempEntVelocity: [u8; 0xC], // 0x12EC
        pub m_vecPrevAbsOrigin: [u8; 0xC], // 0x12F8
        pub m_vecTempEntAcceleration: [u8; 0xC], // 0x1304
    }
    #[repr(C)]
    pub struct C_WeaponTaser {
        pub pad_0: [u8; 0x1F50], // 0x0
        pub m_fFireTime: [u8; 0x4], // 0x1F50
        pub m_nLastAttackTick: [u8; 0xC], // 0x1F54
    }
    #[repr(C)]
    pub struct C_PointEntity {
        pub pad_0: [u8; 0x600], // 0x0
    }
    #[repr(C)]
    pub struct C_SingleplayRules {
        pub pad_0: [u8; 0x40], // 0x0
    }
    #[repr(C)]
    pub struct CLogicalEntity {
        pub pad_0: [u8; 0x600], // 0x0
    }
    #[repr(C)]
    pub struct C_PrecipitationBlocker {
        pub pad_0: [u8; 0x1098], // 0x0
    }
    #[repr(C)]
    pub struct C_CSGO_CounterTerroristTeamIntroCamera {
        pub pad_0: [u8; 0x690], // 0x0
    }
    #[repr(C)]
    pub struct C_SoundOpvarSetPathCornerEntity {
        pub pad_0: [u8; 0x620], // 0x0
    }
    #[repr(C)]
    pub struct CPlayer_WeaponServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_hMyWeapons: [u8; 0x18], // 0x48
        pub m_hActiveWeapon: [u8; 0x4], // 0x60
        pub m_hLastWeapon: [u8; 0x4], // 0x64
        pub m_iAmmo: [u8; 0x40], // 0x68
    }
    #[repr(C)]
    pub struct C_WeaponNegev {
        pub pad_0: [u8; 0x1F50], // 0x0
    }
    #[repr(C)]
    pub struct C_WeaponFiveSeven {
        pub pad_0: [u8; 0x1F50], // 0x0
    }
    #[repr(C)]
    pub struct C_WeaponSawedoff {
        pub pad_0: [u8; 0x1F20], // 0x0
    }
    #[repr(C)]
    pub struct C_TriggerVolume {
        pub pad_0: [u8; 0x1098], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_LimitCount {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_nLimitCount: [u8; 0x8], // 0x48
    }
    #[repr(C)]
    pub struct CPulseCell_Step_CallExternalMethod {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_MethodName: [u8; 0x10], // 0xD8
        pub m_nBlackboardIndex: [u8; 0x8], // 0xE8
        pub m_ExpectedArgs: [u8; 0x10], // 0xF0
        pub m_nAsyncCallMode: [u8; 0x8], // 0x100
        pub m_OnFinished: [u8; 0x48], // 0x108
    }
    #[repr(C)]
    pub struct C_WeaponMP9 {
        pub pad_0: [u8; 0x1F50], // 0x0
    }
    #[repr(C)]
    pub struct C_DynamicPropAlias_prop_dynamic_override {
        pub pad_0: [u8; 0x14B0], // 0x0
    }
    #[repr(C)]
    pub struct CEnvSoundscapeTriggerable {
        pub pad_0: [u8; 0x690], // 0x0
    }
    #[repr(C)]
    pub struct C_PlayerPing {
        pub pad_0: [u8; 0x630], // 0x0
        pub m_hPlayer: [u8; 0x4], // 0x630
        pub m_hPingedEntity: [u8; 0x4], // 0x634
        pub m_iType: [u8; 0x4], // 0x638
        pub m_bUrgent: [u8; 0x1], // 0x63C
        pub m_szPlaceName: [u8; 0x13], // 0x63D
    }
    #[repr(C)]
    pub struct C_AK47 {
        pub pad_0: [u8; 0x1F50], // 0x0
    }
    #[repr(C)]
    pub struct C_CSGO_MapPreviewCameraPathNode {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_szParentPathUniqueID: [u8; 0x8], // 0x600
        pub m_nPathIndex: [u8; 0x4], // 0x608
        pub m_vInTangentLocal: [u8; 0xC], // 0x60C
        pub m_vOutTangentLocal: [u8; 0xC], // 0x618
        pub m_flFOV: [u8; 0x4], // 0x624
        pub m_flCameraSpeed: [u8; 0x4], // 0x628
        pub m_flEaseIn: [u8; 0x4], // 0x62C
        pub m_flEaseOut: [u8; 0x4], // 0x630
        pub m_vInTangentWorld: [u8; 0xC], // 0x634
        pub m_vOutTangentWorld: [u8; 0x10], // 0x640
    }
    #[repr(C)]
    pub struct C_CSPlayerResource {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_bHostageAlive: [u8; 0xC], // 0x600
        pub m_isHostageFollowingSomeone: [u8; 0xC], // 0x60C
        pub m_iHostageEntityIDs: [u8; 0x30], // 0x618
        pub m_bombsiteCenterA: [u8; 0xC], // 0x648
        pub m_bombsiteCenterB: [u8; 0xC], // 0x654
        pub m_hostageRescueX: [u8; 0x10], // 0x660
        pub m_hostageRescueY: [u8; 0x10], // 0x670
        pub m_hostageRescueZ: [u8; 0x10], // 0x680
        pub m_bEndMatchNextMapAllVoted: [u8; 0x1], // 0x690
        pub m_foundGoalPositions: [u8; 0x7], // 0x691
    }
    #[repr(C)]
    pub struct CSkyboxReference {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_worldGroupId: [u8; 0x4], // 0x600
        pub m_hSkyCamera: [u8; 0x4], // 0x604
    }
    #[repr(C)]
    pub struct C_IncendiaryGrenade {
        pub pad_0: [u8; 0x1FE0], // 0x0
    }
    #[repr(C)]
    pub struct CFilterClass {
        pub pad_0: [u8; 0x638], // 0x0
        pub m_iFilterClass: [u8; 0x8], // 0x638
    }
    #[repr(C)]
    pub struct C_PointCameraVFOV {
        pub pad_0: [u8; 0x660], // 0x0
        pub m_flVerticalFOV: [u8; 0x8], // 0x660
    }
    #[repr(C)]
    pub struct C_PointCamera {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_FOV: [u8; 0x4], // 0x600
        pub m_Resolution: [u8; 0x4], // 0x604
        pub m_bFogEnable: [u8; 0x4], // 0x608
        pub m_FogColor: [u8; 0x4], // 0x60C
        pub m_flFogStart: [u8; 0x4], // 0x610
        pub m_flFogEnd: [u8; 0x4], // 0x614
        pub m_flFogMaxDensity: [u8; 0x4], // 0x618
        pub m_bActive: [u8; 0x1], // 0x61C
        pub m_bUseScreenAspectRatio: [u8; 0x3], // 0x61D
        pub m_flAspectRatio: [u8; 0x4], // 0x620
        pub m_bNoSky: [u8; 0x4], // 0x624
        pub m_fBrightness: [u8; 0x4], // 0x628
        pub m_flZFar: [u8; 0x4], // 0x62C
        pub m_flZNear: [u8; 0x4], // 0x630
        pub m_bCanHLTVUse: [u8; 0x1], // 0x634
        pub m_bAlignWithParent: [u8; 0x1], // 0x635
        pub m_bDofEnabled: [u8; 0x2], // 0x636
        pub m_flDofNearBlurry: [u8; 0x4], // 0x638
        pub m_flDofNearCrisp: [u8; 0x4], // 0x63C
        pub m_flDofFarCrisp: [u8; 0x4], // 0x640
        pub m_flDofFarBlurry: [u8; 0x4], // 0x644
        pub m_flDofTiltToGround: [u8; 0x4], // 0x648
        pub m_TargetFOV: [u8; 0x4], // 0x64C
        pub m_DegreesPerSecond: [u8; 0x4], // 0x650
        pub m_bIsOn: [u8; 0x4], // 0x654
        pub m_pNext: [u8; 0x8], // 0x658
    }
    #[repr(C)]
    pub struct CPathWithDynamicNodes {
        pub pad_0: [u8; 0x710], // 0x0
        pub m_vecPathNodes: [u8; 0x20], // 0x710
        pub m_xInitialPathWorldToLocal: [u8; 0x20], // 0x730
        pub m_eDesiredDirection: [u8; 0x4], // 0x750
        pub m_bIgnoreParentRotation: [u8; 0xC], // 0x754
    }
    #[repr(C)]
    pub struct CBaseFilter {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_bNegated: [u8; 0x8], // 0x600
        pub m_OnPass: [u8; 0x18], // 0x608
        pub m_OnFail: [u8; 0x18], // 0x620
    }
    #[repr(C)]
    pub struct WeaponPurchaseTracker_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_weaponPurchases: [u8; 0x68], // 0x8
    }
    #[repr(C)]
    pub struct CMapInfo {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_iBuyingStatus: [u8; 0x4], // 0x600
        pub m_flBombRadius: [u8; 0x4], // 0x604
        pub m_iPetPopulation: [u8; 0x4], // 0x608
        pub m_bUseNormalSpawnsForDM: [u8; 0x1], // 0x60C
        pub m_bDisableAutoGeneratedDMSpawns: [u8; 0x3], // 0x60D
        pub m_flBotMaxVisionDistance: [u8; 0x4], // 0x610
        pub m_iHostageCount: [u8; 0x4], // 0x614
        pub m_bFadePlayerVisibilityFarZ: [u8; 0x1], // 0x618
        pub m_bRainTraceToSkyEnabled: [u8; 0x1], // 0x619
        pub m_bGPUCullSkybox: [u8; 0x2], // 0x61A
        pub m_flEnvRainStrength: [u8; 0x4], // 0x61C
        pub m_flEnvPuddleRippleStrength: [u8; 0x4], // 0x620
        pub m_flEnvPuddleRippleDirection: [u8; 0x4], // 0x624
        pub m_flEnvWetnessCoverage: [u8; 0x4], // 0x628
        pub m_flEnvWetnessDryingAmount: [u8; 0x4], // 0x62C
    }
    #[repr(C)]
    pub struct C_CSGO_EndOfMatchCamera {
        pub pad_0: [u8; 0x690], // 0x0
    }
    #[repr(C)]
    pub struct C_BaseGrenade {
        pub pad_0: [u8; 0x1268], // 0x0
        pub m_bHasWarnedAI: [u8; 0x1], // 0x1268
        pub m_bIsSmokeGrenade: [u8; 0x1], // 0x1269
        pub m_bIsLive: [u8; 0x2], // 0x126A
        pub m_DmgRadius: [u8; 0x4], // 0x126C
        pub m_flDetonateTime: [u8; 0x4], // 0x1270
        pub m_flWarnAITime: [u8; 0x4], // 0x1274
        pub m_flDamage: [u8; 0x8], // 0x1278
        pub m_iszBounceSound: [u8; 0x8], // 0x1280
        pub m_ExplosionSound: [u8; 0x8], // 0x1288
        pub m_hThrower: [u8; 0x18], // 0x1290
        pub m_flNextAttack: [u8; 0x4], // 0x12A8
        pub m_hOriginalThrower: [u8; 0x4], // 0x12AC
    }
    #[repr(C)]
    pub struct C_PlayerSprayDecal {
        pub pad_0: [u8; 0x1098], // 0x0
        pub m_nUniqueID: [u8; 0x4], // 0x1098
        pub m_unAccountID: [u8; 0x4], // 0x109C
        pub m_unTraceID: [u8; 0x4], // 0x10A0
        pub m_rtGcTime: [u8; 0x4], // 0x10A4
        pub m_vecEndPos: [u8; 0xC], // 0x10A8
        pub m_vecStart: [u8; 0xC], // 0x10B4
        pub m_vecLeft: [u8; 0xC], // 0x10C0
        pub m_vecNormal: [u8; 0xC], // 0x10CC
        pub m_nPlayer: [u8; 0x4], // 0x10D8
        pub m_nEntity: [u8; 0x4], // 0x10DC
        pub m_nHitbox: [u8; 0x4], // 0x10E0
        pub m_flCreationTime: [u8; 0x4], // 0x10E4
        pub m_nTintID: [u8; 0x4], // 0x10E8
        pub m_nVersion: [u8; 0x1], // 0x10EC
        pub m_ubSignature: [u8; 0x8B], // 0x10ED
        pub m_SprayRenderHelper: [u8; 0x30], // 0x1178
    }
    #[repr(C)]
    pub struct CEntityIdentity {
        pub pad_0: [u8; 0x14], // 0x0
        pub m_nameStringTableIndex: [u8; 0x4], // 0x14
        pub m_name: [u8; 0x8], // 0x18
        pub m_designerName: [u8; 0x10], // 0x20
        pub m_flags: [u8; 0x8], // 0x30
        pub m_worldGroupId: [u8; 0x4], // 0x38
        pub m_fDataObjectTypes: [u8; 0x4], // 0x3C
        pub m_PathIndex: [u8; 0x8], // 0x40
        pub m_pAttributes: [u8; 0x8], // 0x48
        pub m_pPrev: [u8; 0x8], // 0x50
        pub m_pNext: [u8; 0x8], // 0x58
        pub m_pPrevByClass: [u8; 0x8], // 0x60
        pub m_pNextByClass: [u8; 0x8], // 0x68
    }
    #[repr(C)]
    pub struct CPulseCell_LimitCount__Criteria_t {
        pub m_bLimitCountPasses: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct C_CS2HudModelArms {
        pub pad_0: [u8; 0x1460], // 0x0
    }
    #[repr(C)]
    pub struct CBasePlayerVData {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_sModelName: [u8; 0xE0], // 0x28
        pub m_sModelNameAg2Override: [u8; 0xE0], // 0x108
        pub m_flHeadDamageMultiplier: [u8; 0x10], // 0x1E8
        pub m_flChestDamageMultiplier: [u8; 0x10], // 0x1F8
        pub m_flStomachDamageMultiplier: [u8; 0x10], // 0x208
        pub m_flArmDamageMultiplier: [u8; 0x10], // 0x218
        pub m_flLegDamageMultiplier: [u8; 0x10], // 0x228
        pub m_flHoldBreathTime: [u8; 0x4], // 0x238
        pub m_flDrowningDamageInterval: [u8; 0x4], // 0x23C
        pub m_nDrowningDamageInitial: [u8; 0x4], // 0x240
        pub m_nDrowningDamageMax: [u8; 0x4], // 0x244
        pub m_nWaterSpeed: [u8; 0x4], // 0x248
        pub m_flUseRange: [u8; 0x4], // 0x24C
        pub m_flUseAngleTolerance: [u8; 0x4], // 0x250
        pub m_flCrouchTime: [u8; 0x4], // 0x254
    }
    #[repr(C)]
    pub struct C_LightSpotEntity {
        pub pad_0: [u8; 0x10A0], // 0x0
    }
    #[repr(C)]
    pub struct CCSGameModeRules_Deathmatch {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_flDMBonusStartTime: [u8; 0x4], // 0x30
        pub m_flDMBonusTimeLength: [u8; 0x4], // 0x34
        pub m_sDMBonusWeapon: [u8; 0x8], // 0x38
    }
    #[repr(C)]
    pub struct CPulseCell_CursorQueue {
        pub pad_0: [u8; 0x128], // 0x0
        pub m_nCursorsAllowedToRunParallel: [u8; 0x8], // 0x128
    }
    #[repr(C)]
    pub struct CPulseCell_Value_RandomFloat {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CPulseExecCursor {
        pub pad_0: [u8; 0xD8], // 0x0
    }
    #[repr(C)]
    pub struct C_Sprite {
        pub pad_0: [u8; 0x1098], // 0x0
        pub m_hSpriteMaterial: [u8; 0x8], // 0x1098
        pub m_hAttachedToEntity: [u8; 0x4], // 0x10A0
        pub m_nAttachment: [u8; 0x4], // 0x10A4
        pub m_flSpriteFramerate: [u8; 0x4], // 0x10A8
        pub m_flFrame: [u8; 0x4], // 0x10AC
        pub m_flDieTime: [u8; 0x10], // 0x10B0
        pub m_nBrightness: [u8; 0x4], // 0x10C0
        pub m_flBrightnessDuration: [u8; 0x4], // 0x10C4
        pub m_flSpriteScale: [u8; 0x4], // 0x10C8
        pub m_flScaleDuration: [u8; 0x4], // 0x10CC
        pub m_bWorldSpaceScale: [u8; 0x4], // 0x10D0
        pub m_flGlowProxySize: [u8; 0x4], // 0x10D4
        pub m_flHDRColorScale: [u8; 0x4], // 0x10D8
        pub m_flLastTime: [u8; 0x4], // 0x10DC
        pub m_flMaxFrame: [u8; 0x4], // 0x10E0
        pub m_flStartScale: [u8; 0x4], // 0x10E4
        pub m_flDestScale: [u8; 0x4], // 0x10E8
        pub m_flScaleTimeStart: [u8; 0x4], // 0x10EC
        pub m_nStartBrightness: [u8; 0x4], // 0x10F0
        pub m_nDestBrightness: [u8; 0x4], // 0x10F4
        pub m_flBrightnessTimeStart: [u8; 0x10], // 0x10F8
        pub m_nSpriteWidth: [u8; 0x4], // 0x1108
        pub m_nSpriteHeight: [u8; 0x4], // 0x110C
        pub m_flSpeed: [u8; 0x8], // 0x1110
    }
    #[repr(C)]
    pub struct C_CsmFovOverride {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_cameraName: [u8; 0x8], // 0x600
        pub m_flCsmFovOverrideValue: [u8; 0x8], // 0x608
    }
    #[repr(C)]
    pub struct C_WeaponGlock {
        pub pad_0: [u8; 0x1F50], // 0x0
    }
    #[repr(C)]
    pub struct C_PhysicsProp {
        pub pad_0: [u8; 0x13E0], // 0x0
        pub m_bAwake: [u8; 0x10], // 0x13E0
    }
    #[repr(C)]
    pub struct CFilterTeam {
        pub pad_0: [u8; 0x638], // 0x0
        pub m_iFilterTeam: [u8; 0x8], // 0x638
    }
    #[repr(C)]
    pub struct CBasePlayerWeaponVData {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_szWorldModel: [u8; 0xE0], // 0x28
        pub m_szWorldModelAg2Override: [u8; 0xE0], // 0x108
        pub m_sToolsOnlyOwnerModelName: [u8; 0xE0], // 0x1E8
        pub m_bBuiltRightHanded: [u8; 0x1], // 0x2C8
        pub m_bAllowFlipping: [u8; 0x7], // 0x2C9
        pub m_sMuzzleAttachment: [u8; 0x20], // 0x2D0
        pub m_szMuzzleFlashParticle: [u8; 0xE0], // 0x2F0
        pub m_szMuzzleFlashParticleConfig: [u8; 0x8], // 0x3D0
        pub m_szBarrelSmokeParticle: [u8; 0xE0], // 0x3D8
        pub m_nMuzzleSmokeShotThreshold: [u8; 0x4], // 0x4B8
        pub m_flMuzzleSmokeTimeout: [u8; 0x4], // 0x4BC
        pub m_flMuzzleSmokeDecrementRate: [u8; 0x4], // 0x4C0
        pub m_bGenerateMuzzleLight: [u8; 0x1], // 0x4C4
        pub m_bShouldAnimateInWorld: [u8; 0x1], // 0x4C5
        pub m_bLinkedCooldowns: [u8; 0x1], // 0x4C6
        pub m_iFlags: [u8; 0x1], // 0x4C7
        pub m_iWeight: [u8; 0x4], // 0x4C8
        pub m_bAutoSwitchTo: [u8; 0x1], // 0x4CC
        pub m_bAutoSwitchFrom: [u8; 0x1], // 0x4CD
        pub m_nPrimaryAmmoType: [u8; 0x1], // 0x4CE
        pub m_nSecondaryAmmoType: [u8; 0x1], // 0x4CF
        pub m_iMaxClip1: [u8; 0x4], // 0x4D0
        pub m_iMaxClip2: [u8; 0x4], // 0x4D4
        pub m_iDefaultClip1: [u8; 0x4], // 0x4D8
        pub m_iDefaultClip2: [u8; 0x4], // 0x4DC
        pub m_bReserveAmmoAsClips: [u8; 0x1], // 0x4E0
        pub m_bTreatAsSingleClip: [u8; 0x1], // 0x4E1
        pub m_bKeepLoadedAmmo: [u8; 0x2], // 0x4E2
        pub m_iRumbleEffect: [u8; 0x4], // 0x4E4
        pub m_flDropSpeed: [u8; 0x4], // 0x4E8
        pub m_iSlot: [u8; 0x4], // 0x4EC
        pub m_iPosition: [u8; 0x8], // 0x4F0
        pub m_aShootSounds: [u8; 0x28], // 0x4F8
    }
    #[repr(C)]
    pub struct C_SmokeGrenade {
        pub pad_0: [u8; 0x1FE0], // 0x0
    }
    #[repr(C)]
    pub struct C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel {
        pub pad_0: [u8; 0x37D0], // 0x0
    }
    #[repr(C)]
    pub struct CCSGO_RushIntroCharacterPosition {
        pub pad_0: [u8; 0x1D18], // 0x0
    }
    #[repr(C)]
    pub struct CInfoParticleTarget {
        pub pad_0: [u8; 0x600], // 0x0
    }
    #[repr(C)]
    pub struct CCSPlayer_DamageReactServices {
        pub pad_0: [u8; 0x50], // 0x0
    }
    #[repr(C)]
    pub struct C_PointClientUIWorldPanel {
        pub pad_0: [u8; 0x10D0], // 0x0
        pub m_bForceRecreateNextUpdate: [u8; 0x1], // 0x10D0
        pub m_bMoveViewToPlayerNextThink: [u8; 0x1], // 0x10D1
        pub m_bCheckCSSClasses: [u8; 0xE], // 0x10D2
        pub m_anchorDeltaTransform: [u8; 0x190], // 0x10E0
        pub m_pOffScreenIndicator: [u8; 0x28], // 0x1270
        pub m_bIgnoreInput: [u8; 0x1], // 0x1298
        pub m_bLit: [u8; 0x1], // 0x1299
        pub m_bFollowPlayerAcrossTeleport: [u8; 0x2], // 0x129A
        pub m_flWidth: [u8; 0x4], // 0x129C
        pub m_flHeight: [u8; 0x4], // 0x12A0
        pub m_flDPI: [u8; 0x4], // 0x12A4
        pub m_flWindowUIScale: [u8; 0x4], // 0x12A8
        pub m_flInteractDistance: [u8; 0x4], // 0x12AC
        pub m_flDepthOffset: [u8; 0x4], // 0x12B0
        pub m_unOwnerContext: [u8; 0x4], // 0x12B4
        pub m_unHorizontalAlign: [u8; 0x4], // 0x12B8
        pub m_unVerticalAlign: [u8; 0x4], // 0x12BC
        pub m_unOrientation: [u8; 0x4], // 0x12C0
        pub m_bAllowInteractionFromAllSceneWorlds: [u8; 0x4], // 0x12C4
        pub m_vecCSSClasses: [u8; 0x18], // 0x12C8
        pub m_bOpaque: [u8; 0x1], // 0x12E0
        pub m_bNoDepth: [u8; 0x1], // 0x12E1
        pub m_bVisibleWhenParentNoDraw: [u8; 0x1], // 0x12E2
        pub m_bRenderBackface: [u8; 0x1], // 0x12E3
        pub m_bUseOffScreenIndicator: [u8; 0x1], // 0x12E4
        pub m_bExcludeFromSaveGames: [u8; 0x1], // 0x12E5
        pub m_bGrabbable: [u8; 0x1], // 0x12E6
        pub m_bOnlyRenderToTexture: [u8; 0x1], // 0x12E7
        pub m_bDisableMipGen: [u8; 0x4], // 0x12E8
        pub m_nExplicitImageLayout: [u8; 0x4], // 0x12EC
        pub m_bIgnoreParentOrientation: [u8; 0x10], // 0x12F0
    }
    #[repr(C)]
    pub struct C_EntityFlame {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_hEntAttached: [u8; 0x28], // 0x600
        pub m_hOldAttached: [u8; 0x4], // 0x628
        pub m_bCheapEffect: [u8; 0x1C], // 0x62C
    }
    #[repr(C)]
    pub struct CBaseAnimGraphAlias_baseanimating {
        pub pad_0: [u8; 0x1268], // 0x0
    }
    #[repr(C)]
    pub struct CBasePlayerController {
        pub pad_0: [u8; 0x608], // 0x0
        pub m_CommandContext: [u8; 0xA8], // 0x608
        pub m_nInButtonsWhichAreToggles: [u8; 0x8], // 0x6B0
        pub m_nTickBase: [u8; 0x4], // 0x6B8
        pub m_hPawn: [u8; 0x4], // 0x6BC
        pub m_bKnownTeamMismatch: [u8; 0x4], // 0x6C0
        pub m_hPredictedPawn: [u8; 0x8], // 0x6C4
        pub m_nSplitScreenSlot: [u8; 0x4], // 0x6CC
        pub m_hSplitOwner: [u8; 0x8], // 0x6D0
        pub m_hSplitScreenPlayers: [u8; 0x18], // 0x6D8
        pub m_bIsHLTV: [u8; 0x4], // 0x6F0
        pub m_iConnected: [u8; 0x4], // 0x6F4
        pub m_iMostConnected: [u8; 0x4], // 0x6F8
        pub m_iszPlayerName: [u8; 0x8C], // 0x6FC
        pub m_steamID: [u8; 0x8], // 0x788
        pub m_bIsLocalPlayerController: [u8; 0x1], // 0x790
        pub m_bNoClipEnabled: [u8; 0x3], // 0x791
        pub m_iDesiredFOV: [u8; 0x6C], // 0x794
    }
    #[repr(C)]
    pub struct C_CSGO_EndOfMatchLineupEndpoint {
        pub pad_0: [u8; 0x600], // 0x0
    }
    #[repr(C)]
    pub struct GeneratedTextureHandle_t {
        pub m_strBitmapName: [u8; 0x60], // 0x0
    }
    #[repr(C)]
    pub struct CompositeMaterialInputContainer_t {
        pub m_bEnabled: [u8; 0x4], // 0x0
        pub m_nCompositeMaterialInputContainerSourceType: [u8; 0x4], // 0x4
        pub m_strSpecificContainerMaterial: [u8; 0xE0], // 0x8
        pub m_strAttrName: [u8; 0x8], // 0xE8
        pub m_strAlias: [u8; 0x8], // 0xF0
        pub m_vecLooseVariables: [u8; 0x18], // 0xF8
        pub m_strAttrNameForVar: [u8; 0x8], // 0x110
        pub m_bExposeExternally: [u8; 0x20], // 0x118
    }
    #[repr(C)]
    pub struct CompositeMaterialAssemblyProcedure_t {
        pub m_vecCompMatIncludes: [u8; 0x18], // 0x0
        pub m_vecMatchFilters: [u8; 0x18], // 0x18
        pub m_vecCompositeInputContainers: [u8; 0x18], // 0x30
        pub m_vecPropertyMutators: [u8; 0x18], // 0x48
    }
    #[repr(C)]
    pub struct CompositeMaterialInputLooseVariable_t {
        pub m_strName: [u8; 0x8], // 0x0
        pub m_bExposeExternally: [u8; 0x8], // 0x8
        pub m_strExposedFriendlyName: [u8; 0x8], // 0x10
        pub m_strExposedFriendlyGroupName: [u8; 0x8], // 0x18
        pub m_bExposedVariableIsFixedRange: [u8; 0x8], // 0x20
        pub m_strExposedVisibleWhenTrue: [u8; 0x8], // 0x28
        pub m_strExposedHiddenWhenTrue: [u8; 0x8], // 0x30
        pub m_strExposedValueList: [u8; 0x8], // 0x38
        pub m_nVariableType: [u8; 0x4], // 0x40
        pub m_bValueBoolean: [u8; 0x4], // 0x44
        pub m_nValueIntX: [u8; 0x4], // 0x48
        pub m_nValueIntY: [u8; 0x4], // 0x4C
        pub m_nValueIntZ: [u8; 0x4], // 0x50
        pub m_nValueIntW: [u8; 0x4], // 0x54
        pub m_bHasFloatBounds: [u8; 0x4], // 0x58
        pub m_flValueFloatX: [u8; 0x4], // 0x5C
        pub m_flValueFloatX_Min: [u8; 0x4], // 0x60
        pub m_flValueFloatX_Max: [u8; 0x4], // 0x64
        pub m_flValueFloatY: [u8; 0x4], // 0x68
        pub m_flValueFloatY_Min: [u8; 0x4], // 0x6C
        pub m_flValueFloatY_Max: [u8; 0x4], // 0x70
        pub m_flValueFloatZ: [u8; 0x4], // 0x74
        pub m_flValueFloatZ_Min: [u8; 0x4], // 0x78
        pub m_flValueFloatZ_Max: [u8; 0x4], // 0x7C
        pub m_flValueFloatW: [u8; 0x4], // 0x80
        pub m_flValueFloatW_Min: [u8; 0x4], // 0x84
        pub m_flValueFloatW_Max: [u8; 0x4], // 0x88
        pub m_cValueColor4: [u8; 0x4], // 0x8C
        pub m_nValueSystemVar: [u8; 0x8], // 0x90
        pub m_strResourceMaterial: [u8; 0xE0], // 0x98
        pub m_strTextureContentAssetPath: [u8; 0x8], // 0x178
        pub m_strTextureRuntimeResourcePath: [u8; 0xE0], // 0x180
        pub m_strTextureCompilationVtexTemplate: [u8; 0x8], // 0x260
        pub m_nTextureType: [u8; 0x8], // 0x268
        pub m_strString: [u8; 0x8], // 0x270
        pub m_strPanoramaPanelPath: [u8; 0x8], // 0x278
        pub m_nPanoramaRenderRes: [u8; 0x8], // 0x280
    }
    #[repr(C)]
    pub struct screenshake_t {
        pub endtime: [u8; 0x4], // 0x0
        pub duration: [u8; 0x4], // 0x4
        pub amplitude: [u8; 0x4], // 0x8
        pub frequency: [u8; 0x4], // 0xC
        pub nextShake: [u8; 0x4], // 0x10
        pub offset: [u8; 0xC], // 0x14
        pub angle: [u8; 0x8], // 0x20
        pub direction: [u8; 0xC], // 0x28
        pub nShakeType: [u8; 0x4], // 0x34
    }
    #[repr(C)]
    pub struct CCS2UIPawnGraphController {
        pub pad_0: [u8; 0xC0], // 0x0
        pub m_nAnimationSeed: [u8; 0x18], // 0xC0
        pub m_characterMode: [u8; 0x18], // 0xD8
        pub m_bCharacterModeReset: [u8; 0x18], // 0xF0
        pub m_nTeamPreviewVariant: [u8; 0x18], // 0x108
        pub m_nTeamPreviewRandom: [u8; 0x18], // 0x120
        pub m_nTeamPreviewPosition: [u8; 0x18], // 0x138
        pub m_endOfMatchCelebration: [u8; 0x18], // 0x150
        pub m_action: [u8; 0x18], // 0x168
        pub m_bannerAnimation: [u8; 0x18], // 0x180
        pub m_weaponCategory: [u8; 0x18], // 0x198
        pub m_weaponType: [u8; 0x18], // 0x1B0
        pub m_weaponState: [u8; 0x18], // 0x1C8
        pub m_inspectTurnAngle: [u8; 0x18], // 0x1E0
        pub m_nChickSnapshotVariant: [u8; 0x18], // 0x1F8
        pub m_nChickLifeStage: [u8; 0x18], // 0x210
        pub m_bCT: [u8; 0x18], // 0x228
    }
    #[repr(C)]
    pub struct inv_image_light_barn_t {
        pub color: [u8; 0xC], // 0x0
        pub angle: [u8; 0xC], // 0xC
        pub brightness: [u8; 0x4], // 0x18
        pub orbit_distance: [u8; 0x4], // 0x1C
    }
    #[repr(C)]
    pub struct inv_image_map_t {
        pub map_name: [u8; 0x8], // 0x0
        pub map_rotation: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct inv_image_light_fill_t {
        pub color: [u8; 0xC], // 0x0
        pub angle: [u8; 0xC], // 0xC
        pub brightness: [u8; 0x4], // 0x18
    }
    #[repr(C)]
    pub struct CInterpolatedValue {
        pub m_flStartTime: [u8; 0x4], // 0x0
        pub m_flEndTime: [u8; 0x4], // 0x4
        pub m_flStartValue: [u8; 0x4], // 0x8
        pub m_flEndValue: [u8; 0x4], // 0xC
        pub m_nInterpType: [u8; 0x4], // 0x10
    }
    #[repr(C)]
    pub struct inv_image_item_t {
        pub position: [u8; 0xC], // 0x0
        pub angle: [u8; 0xC], // 0xC
        pub pose_sequence: [u8; 0x8], // 0x18
    }
    #[repr(C)]
    pub struct TimedEvent {
        pub m_TimeBetweenEvents: [u8; 0x4], // 0x0
        pub m_fNextEvent: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct CFlashlightEffect {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_bIsOn: [u8; 0x10], // 0x10
        pub m_bMuzzleFlashEnabled: [u8; 0x4], // 0x20
        pub m_flMuzzleFlashBrightness: [u8; 0xC], // 0x24
        pub m_quatMuzzleFlashOrientation: [u8; 0x10], // 0x30
        pub m_vecMuzzleFlashOrigin: [u8; 0xC], // 0x40
        pub m_flFov: [u8; 0x4], // 0x4C
        pub m_flFarZ: [u8; 0x4], // 0x50
        pub m_flLinearAtten: [u8; 0x4], // 0x54
        pub m_bCastsShadows: [u8; 0x4], // 0x58
        pub m_flCurrentPullBackDist: [u8; 0x4], // 0x5C
        pub m_FlashlightTexture: [u8; 0x8], // 0x60
        pub m_MuzzleFlashTexture: [u8; 0x8], // 0x68
        pub m_textureName: [u8; 0x270], // 0x70
    }
    #[repr(C)]
    pub struct inv_image_camera_t {
        pub angle: [u8; 0xC], // 0x0
        pub fov_h: [u8; 0x4], // 0xC
        pub fov_v: [u8; 0x4], // 0x10
        pub znear: [u8; 0x4], // 0x14
        pub zfar: [u8; 0x4], // 0x18
        pub target: [u8; 0xC], // 0x1C
        pub target_nudge: [u8; 0xC], // 0x28
        pub orbit_distance: [u8; 0x4], // 0x34
    }
    #[repr(C)]
    pub struct CInventoryImageData {
        pub m_nNodeType: [u8; 0x8], // 0x0
        pub name: [u8; 0x8], // 0x8
        pub inventory_image_data: [u8; 0xF0], // 0x10
    }
    #[repr(C)]
    pub struct inv_image_clearcolor_t {
        pub color: [u8; 0xC], // 0x0
    }
    #[repr(C)]
    pub struct C_CommandContext {
        pub needsprocessing: [u8; 0xA0], // 0x0
        pub command_number: [u8; 0x8], // 0xA0
    }
    #[repr(C)]
    pub struct CompositeMaterialEditorPoint_t {
        pub m_ModelName: [u8; 0xE0], // 0x0
        pub m_nSequenceIndex: [u8; 0x4], // 0xE0
        pub m_flCycle: [u8; 0x4], // 0xE4
        pub m_KVModelStateChoices: [u8; 0x10], // 0xE8
        pub m_bEnableChildModel: [u8; 0x8], // 0xF8
        pub m_ChildModelName: [u8; 0xE0], // 0x100
        pub m_vecCompositeMaterialAssemblyProcedures: [u8; 0x18], // 0x1E0
        pub m_vecCompositeMaterials: [u8; 0x20], // 0x1F8
    }
    #[repr(C)]
    pub struct CPlayerSprayDecalRenderHelper {
        pub pad_0: [u8; 0x30], // 0x0
    }
    #[repr(C)]
    pub struct C_IronSightController {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_bIronSightAvailable: [u8; 0x4], // 0x10
        pub m_flIronSightAmount: [u8; 0x4], // 0x14
        pub m_flIronSightAmountGained: [u8; 0x4], // 0x18
        pub m_flIronSightAmountBiased: [u8; 0x4], // 0x1C
        pub m_flIronSightAmount_Interpolated: [u8; 0x4], // 0x20
        pub m_flIronSightAmountGained_Interpolated: [u8; 0x4], // 0x24
        pub m_flIronSightAmountBiased_Interpolated: [u8; 0x4], // 0x28
        pub m_flInterpolationLastUpdated: [u8; 0x4], // 0x2C
        pub m_angDeltaAverage: [u8; 0x60], // 0x30
        pub m_angViewLast: [u8; 0xC], // 0x90
        pub m_vecDotCoords: [u8; 0x8], // 0x9C
        pub m_flFiringInaccuracyExtraWidthMultiplier: [u8; 0x4], // 0xA4
        pub m_flSpeedRatio: [u8; 0x8], // 0xA8
    }
    #[repr(C)]
    pub struct CompMatMutatorCondition_t {
        pub m_nMutatorCondition: [u8; 0x8], // 0x0
        pub m_strMutatorConditionContainerName: [u8; 0x8], // 0x8
        pub m_strMutatorConditionContainerVarName: [u8; 0x8], // 0x10
        pub m_strMutatorConditionContainerVarValue: [u8; 0x8], // 0x18
        pub m_bPassWhenTrue: [u8; 0x8], // 0x20
    }
    #[repr(C)]
    pub struct inv_image_data_t {
        pub map: [u8; 0x10], // 0x0
        pub item: [u8; 0x20], // 0x10
        pub camera: [u8; 0x38], // 0x30
        pub lightsun: [u8; 0x1C], // 0x68
        pub lightfill: [u8; 0x1C], // 0x84
        pub light0: [u8; 0x20], // 0xA0
        pub light1: [u8; 0x20], // 0xC0
        pub clearcolor: [u8; 0x10], // 0xE0
    }
    #[repr(C)]
    pub struct CompMatPropertyMutator_t {
        pub m_bEnabled: [u8; 0x4], // 0x0
        pub m_nMutatorCommandType: [u8; 0x4], // 0x4
        pub m_strInitWith_Container: [u8; 0x8], // 0x8
        pub m_strCopyProperty_InputContainerSrc: [u8; 0x8], // 0x10
        pub m_strCopyProperty_InputContainerProperty: [u8; 0x8], // 0x18
        pub m_strCopyProperty_TargetProperty: [u8; 0x8], // 0x20
        pub m_strRandomRollInputVars_SeedInputVar: [u8; 0x8], // 0x28
        pub m_vecRandomRollInputVars_InputVarsToRoll: [u8; 0x18], // 0x30
        pub m_strCopyMatchingKeys_InputContainerSrc: [u8; 0x8], // 0x48
        pub m_strCopyKeysWithSuffix_InputContainerSrc: [u8; 0x8], // 0x50
        pub m_strCopyKeysWithSuffix_FindSuffix: [u8; 0x8], // 0x58
        pub m_strCopyKeysWithSuffix_ReplaceSuffix: [u8; 0x8], // 0x60
        pub m_nSetValue_Value: [u8; 0x288], // 0x68
        pub m_strGenerateTexture_TargetParam: [u8; 0x8], // 0x2F0
        pub m_strGenerateTexture_InitialContainer: [u8; 0x8], // 0x2F8
        pub m_nResolution: [u8; 0x4], // 0x300
        pub m_bIsScratchTarget: [u8; 0x4], // 0x304
        pub m_strCompressionFormat: [u8; 0x8], // 0x308
        pub m_bSplatDebugInfo: [u8; 0x1], // 0x310
        pub m_bCaptureInRenderDoc: [u8; 0x7], // 0x311
        pub m_vecTexGenInstructions: [u8; 0x18], // 0x318
        pub m_vecConditionalMutators: [u8; 0x18], // 0x330
        pub m_strPopInputQueue_Container: [u8; 0x8], // 0x348
        pub m_strDrawText_InputContainerSrc: [u8; 0x8], // 0x350
        pub m_strDrawText_InputContainerProperty: [u8; 0x8], // 0x358
        pub m_vecDrawText_Position: [u8; 0x8], // 0x360
        pub m_colDrawText_Color: [u8; 0x8], // 0x368
        pub m_strDrawText_Font: [u8; 0x8], // 0x370
        pub m_vecConditions: [u8; 0x18], // 0x378
    }
    #[repr(C)]
    pub struct CCompositeMaterialEditorDoc {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_nVersion: [u8; 0x8], // 0x8
        pub m_Points: [u8; 0x18], // 0x10
        pub m_KVthumbnail: [u8; 0x10], // 0x28
    }
    #[repr(C)]
    pub struct CClientAlphaProperty {
        pub m_nDesyncOffset: [u8; 0x10], // 0x0
        pub m_nDistFadeStart: [u8; 0x2], // 0x10
        pub m_nDistFadeEnd: [u8; 0x5], // 0x12
        pub m_nAlpha: [u8; 0x1], // 0x17
        pub m_flFadeScale: [u8; 0x4], // 0x18
        pub m_flRenderFxStartTime: [u8; 0x4], // 0x1C
        pub m_flRenderFxDuration: [u8; 0x10], // 0x20
    }
    #[repr(C)]
    pub struct screenfade_t {
        pub Speed: [u8; 0x4], // 0x0
        pub End: [u8; 0x4], // 0x4
        pub Reset: [u8; 0x4], // 0x8
        pub m_Color: [u8; 0x4], // 0xC
        pub Flags: [u8; 0x18], // 0x10
    }
    #[repr(C)]
    pub struct CGlobalLightBase {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_bSpotLight: [u8; 0x4], // 0x10
        pub m_SpotLightOrigin: [u8; 0xC], // 0x14
        pub m_SpotLightAngles: [u8; 0xC], // 0x20
        pub m_ShadowDirection: [u8; 0xC], // 0x2C
        pub m_AmbientDirection: [u8; 0xC], // 0x38
        pub m_SpecularDirection: [u8; 0xC], // 0x44
        pub m_InspectorSpecularDirection: [u8; 0xC], // 0x50
        pub m_flSpecularPower: [u8; 0x4], // 0x5C
        pub m_flSpecularIndependence: [u8; 0x4], // 0x60
        pub m_SpecularColor: [u8; 0x4], // 0x64
        pub m_bStartDisabled: [u8; 0x1], // 0x68
        pub m_bEnabled: [u8; 0x3], // 0x69
        pub m_LightColor: [u8; 0x4], // 0x6C
        pub m_AmbientColor1: [u8; 0x4], // 0x70
        pub m_AmbientColor2: [u8; 0x4], // 0x74
        pub m_AmbientColor3: [u8; 0x4], // 0x78
        pub m_flSunDistance: [u8; 0x4], // 0x7C
        pub m_flFOV: [u8; 0x4], // 0x80
        pub m_flNearZ: [u8; 0x4], // 0x84
        pub m_flFarZ: [u8; 0x4], // 0x88
        pub m_bEnableShadows: [u8; 0x1], // 0x8C
        pub m_bOldEnableShadows: [u8; 0x1], // 0x8D
        pub m_bBackgroundClearNotRequired: [u8; 0x2], // 0x8E
        pub m_flCloudScale: [u8; 0x4], // 0x90
        pub m_flCloud1Speed: [u8; 0x4], // 0x94
        pub m_flCloud1Direction: [u8; 0x4], // 0x98
        pub m_flCloud2Speed: [u8; 0x4], // 0x9C
        pub m_flCloud2Direction: [u8; 0x10], // 0xA0
        pub m_flAmbientScale1: [u8; 0x4], // 0xB0
        pub m_flAmbientScale2: [u8; 0x4], // 0xB4
        pub m_flGroundScale: [u8; 0x4], // 0xB8
        pub m_flLightScale: [u8; 0x4], // 0xBC
        pub m_flFoWDarkness: [u8; 0x4], // 0xC0
        pub m_bEnableSeparateSkyboxFog: [u8; 0x4], // 0xC4
        pub m_vFowColor: [u8; 0xC], // 0xC8
        pub m_ViewOrigin: [u8; 0xC], // 0xD4
        pub m_ViewAngles: [u8; 0xC], // 0xE0
        pub m_flViewFoV: [u8; 0x4], // 0xEC
        pub m_WorldPoints: [u8; 0x3B8], // 0xF0
        pub m_vFogOffsetLayer0: [u8; 0x8], // 0x4A8
        pub m_vFogOffsetLayer1: [u8; 0x8], // 0x4B0
        pub m_hEnvWind: [u8; 0x4], // 0x4B8
        pub m_hEnvSky: [u8; 0x4], // 0x4BC
    }
    #[repr(C)]
    pub struct IClientAlphaProperty {
        pub pad_0: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct inv_image_light_sun_t {
        pub color: [u8; 0xC], // 0x0
        pub angle: [u8; 0xC], // 0xC
        pub brightness: [u8; 0x4], // 0x18
    }
    #[repr(C)]
    pub struct CompositeMaterialMatchFilter_t {
        pub m_nCompositeMaterialMatchFilterType: [u8; 0x8], // 0x0
        pub m_strMatchFilter: [u8; 0x8], // 0x8
        pub m_strMatchValue: [u8; 0x8], // 0x10
        pub m_bPassWhenTrue: [u8; 0x8], // 0x18
    }
    #[repr(C)]
    pub struct CompositeMaterial_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_TargetKVs: [u8; 0x10], // 0x8
        pub m_PreGenerationKVs: [u8; 0x40], // 0x18
        pub m_FinalKVs: [u8; 0x28], // 0x58
        pub m_vecGeneratedTextures: [u8; 0x20], // 0x80
    }
}
