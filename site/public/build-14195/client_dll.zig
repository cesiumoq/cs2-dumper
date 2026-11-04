/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

pub const client = struct {

    pub const C_CSGO_TeamIntroCharacterPosition = extern struct {
        pad_0: [0x1D18]u8, // 0x0
    };
    pub const C_FireCrackerBlast = extern struct {
        pad_0: [0x86A0]u8, // 0x0
    };
    pub const CCSGO_WingmanIntroCounterTerroristPosition = extern struct {
        pad_0: [0x1D18]u8, // 0x0
    };
    pub const CPulseCell_WaitForCursorsWithTag = extern struct {
        pad_0: [0x128]u8, // 0x0
        m_bTagSelfWhenComplete: [0x4]u8, // 0x128
        m_nDesiredKillPriority: [0x4]u8, // 0x12C
    };
    pub const C_SceneEntity__QueuedEvents_t = extern struct {
        starttime: [0x18]u8, // 0x0
    };
    pub const CCSPlayer_PingServices = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_hPlayerPing: [0x8]u8, // 0x48
    };
    pub const CEconItemAttribute = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_iAttributeDefinitionIndex: [0x4]u8, // 0x30
        m_flValue: [0x4]u8, // 0x34
        m_flInitialValue: [0x4]u8, // 0x38
        m_nRefundableCurrency: [0x4]u8, // 0x3C
        m_bSetBonus: [0x8]u8, // 0x40
    };
    pub const CPulseCell_RaceCursors = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_Outflows: [0x18]u8, // 0xD8
        m_OnFinished: [0x48]u8, // 0xF0
    };
    pub const CFuncRetakeBarrier = extern struct {
        pad_0: [0x14D0]u8, // 0x0
    };
    pub const C_EnvWindShared = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_flStartTime: [0x4]u8, // 0x8
        m_iWindSeed: [0x4]u8, // 0xC
        m_iMinWind: [0x2]u8, // 0x10
        m_iMaxWind: [0x2]u8, // 0x12
        m_windRadius: [0x4]u8, // 0x14
        m_iMinGust: [0x2]u8, // 0x18
        m_iMaxGust: [0x2]u8, // 0x1A
        m_flMinGustDelay: [0x4]u8, // 0x1C
        m_flMaxGustDelay: [0x4]u8, // 0x20
        m_flGustDuration: [0x4]u8, // 0x24
        m_iGustDirChange: [0x2]u8, // 0x28
        m_iInitialWindDir: [0x2]u8, // 0x2A
        m_flInitialWindSpeed: [0x4]u8, // 0x2C
        m_location: [0xC]u8, // 0x30
        m_hEntOwner: [0xBC]u8, // 0x3C
    };
    pub const C_SkyCamera = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_skyboxData: [0x90]u8, // 0x600
        m_skyboxSlotToken: [0x4]u8, // 0x690
        m_bUseAngles: [0x4]u8, // 0x694
        m_pNext: [0x8]u8, // 0x698
    };
    pub const CPulseCell_Base = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_nEditorNodeID: [0x40]u8, // 0x8
    };
    pub const C_FuncRotating = extern struct {
        pad_0: [0x1098]u8, // 0x0
    };
    pub const C_SoundOpvarSetPointBase = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_iszStackName: [0x8]u8, // 0x600
        m_iszOperatorName: [0x8]u8, // 0x608
        m_iszOpvarName: [0x8]u8, // 0x610
        m_iOpvarIndex: [0x4]u8, // 0x618
        m_bUseAutoCompare: [0x1]u8, // 0x61C
        m_bFastRefresh: [0x3]u8, // 0x61D
    };
    pub const C_EnvCubemapFog = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_flEndDistance: [0x4]u8, // 0x600
        m_flStartDistance: [0x4]u8, // 0x604
        m_flFogFalloffExponent: [0x4]u8, // 0x608
        m_bHeightFogEnabled: [0x4]u8, // 0x60C
        m_flFogHeightWidth: [0x4]u8, // 0x610
        m_flFogHeightEnd: [0x4]u8, // 0x614
        m_flFogHeightStart: [0x4]u8, // 0x618
        m_flFogHeightExponent: [0x4]u8, // 0x61C
        m_flLODBias: [0x4]u8, // 0x620
        m_bActive: [0x1]u8, // 0x624
        m_bStartDisabled: [0x3]u8, // 0x625
        m_flFogMaxOpacity: [0x4]u8, // 0x628
        m_nCubemapSourceType: [0x4]u8, // 0x62C
        m_hSkyMaterial: [0x8]u8, // 0x630
        m_iszSkyEntity: [0x8]u8, // 0x638
        m_nHeightFogType: [0x4]u8, // 0x640
        m_nFogHeightBlendMode: [0x4]u8, // 0x644
        m_nFogHeightCoordinateSpace: [0x4]u8, // 0x648
        m_nDistanceFogType: [0x4]u8, // 0x64C
        m_DistanceFogCurveString: [0x8]u8, // 0x650
        m_HeightFogCurveString: [0x98]u8, // 0x658
        m_hFogCubemapTexture: [0x8]u8, // 0x6F0
        m_bHasHeightFogEnd: [0x1]u8, // 0x6F8
        m_bFirstTime: [0x7]u8, // 0x6F9
    };
    pub const C_CSGO_TeamSelectTerroristPosition = extern struct {
        pad_0: [0x1D18]u8, // 0x0
    };
    pub const C_EnvParticleGlow = extern struct {
        pad_0: [0x1668]u8, // 0x0
        m_flAlphaScale: [0x4]u8, // 0x1668
        m_flRadiusScale: [0x4]u8, // 0x166C
        m_flSelfIllumScale: [0x4]u8, // 0x1670
        m_ColorTint: [0x4]u8, // 0x1674
        m_hTextureOverride: [0x8]u8, // 0x1678
    };
    pub const CCS_PortraitWorldCallbackHandler = extern struct {
        pad_0: [0x608]u8, // 0x0
    };
    pub const CCSPlayerController_InventoryServices = extern struct {
        pad_0: [0x40]u8, // 0x0
        m_vecNetworkableLoadout: [0x18]u8, // 0x40
        m_unMusicID: [0x4]u8, // 0x58
        m_rank: [0x18]u8, // 0x5C
        m_nPersonaDataPublicLevel: [0x4]u8, // 0x74
        m_nPersonaDataPublicCommendsLeader: [0x4]u8, // 0x78
        m_nPersonaDataPublicCommendsTeacher: [0x4]u8, // 0x7C
        m_nPersonaDataPublicCommendsFriendly: [0x4]u8, // 0x80
        m_nPersonaDataXpTrailLevel: [0x4]u8, // 0x84
        m_vecServerAuthoritativeWeaponSlots: [0x68]u8, // 0x88
    };
    pub const CCSPlayerModernJump = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nLastActualJumpPressTick: [0x4]u8, // 0x10
        m_flLastActualJumpPressFrac: [0x4]u8, // 0x14
        m_nLastUsableJumpPressTick: [0x4]u8, // 0x18
        m_flLastUsableJumpPressFrac: [0x4]u8, // 0x1C
        m_nLastLandedTick: [0x4]u8, // 0x20
        m_flLastLandedFrac: [0x4]u8, // 0x24
        m_flLastLandedVelocityX: [0x4]u8, // 0x28
        m_flLastLandedVelocityY: [0x4]u8, // 0x2C
        m_flLastLandedVelocityZ: [0x8]u8, // 0x30
    };
    pub const C_EconEntity__AttachedModelData_t = extern struct {
        m_iModelDisplayFlags: [0x4]u8, // 0x0
    };
    pub const CPulse_ResumePoint = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CTriggerFan = extern struct {
        pad_0: [0x1180]u8, // 0x0
        m_vFanOriginOffset: [0xC]u8, // 0x1180
        m_vDirection: [0xC]u8, // 0x118C
        m_bPushTowardsInfoTarget: [0x1]u8, // 0x1198
        m_bPushAwayFromInfoTarget: [0x7]u8, // 0x1199
        m_qNoiseDelta: [0x10]u8, // 0x11A0
        m_hInfoFan: [0x4]u8, // 0x11B0
        m_flForce: [0x4]u8, // 0x11B4
        m_bFalloff: [0x8]u8, // 0x11B8
        m_RampTimer: [0x20]u8, // 0x11C0
    };
    pub const C_HostageCarriableProp = extern struct {
        pad_0: [0x1270]u8, // 0x0
    };
    pub const C_BulletHitModel = extern struct {
        pad_0: [0x1268]u8, // 0x0
        m_matLocal: [0x30]u8, // 0x1268
        m_iBoneIndex: [0x4]u8, // 0x1298
        m_hPlayerParent: [0x4]u8, // 0x129C
        m_bIsHit: [0x4]u8, // 0x12A0
        m_flTimeCreated: [0x4]u8, // 0x12A4
        m_vecStartPos: [0x10]u8, // 0x12A8
    };
    pub const C_FuncElectrifiedVolume = extern struct {
        pad_0: [0x1098]u8, // 0x0
        m_nAmbientEffect: [0x8]u8, // 0x1098
        m_EffectName: [0x8]u8, // 0x10A0
        m_bState: [0x8]u8, // 0x10A8
    };
    pub const C_MapVetoPickController = extern struct {
        pad_0: [0x610]u8, // 0x0
        m_nDraftType: [0x4]u8, // 0x610
        m_nTeamWinningCoinToss: [0x4]u8, // 0x614
        m_nTeamWithFirstChoice: [0x100]u8, // 0x618
        m_nVoteMapIdsList: [0x1C]u8, // 0x718
        m_nAccountIDs: [0x100]u8, // 0x734
        m_nMapId0: [0x100]u8, // 0x834
        m_nMapId1: [0x100]u8, // 0x934
        m_nMapId2: [0x100]u8, // 0xA34
        m_nMapId3: [0x100]u8, // 0xB34
        m_nMapId4: [0x100]u8, // 0xC34
        m_nMapId5: [0x100]u8, // 0xD34
        m_nStartingSide0: [0x100]u8, // 0xE34
        m_nCurrentPhase: [0x4]u8, // 0xF34
        m_nPhaseStartTick: [0x4]u8, // 0xF38
        m_nPhaseDurationTicks: [0x4]u8, // 0xF3C
        m_nPostDataUpdateTick: [0x4]u8, // 0xF40
        m_bDisabledHud: [0x4]u8, // 0xF44
    };
    pub const C_EnvVolumetricFogVolume = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_bActive: [0x4]u8, // 0x600
        m_vBoxMins: [0xC]u8, // 0x604
        m_vBoxMaxs: [0xC]u8, // 0x610
        m_bStartDisabled: [0x1]u8, // 0x61C
        m_bIndirectUseLPVs: [0x3]u8, // 0x61D
        m_flStrength: [0x4]u8, // 0x620
        m_nFalloffShape: [0x4]u8, // 0x624
        m_flFalloffExponent: [0x4]u8, // 0x628
        m_flHeightFogDepth: [0x4]u8, // 0x62C
        m_fHeightFogEdgeWidth: [0x4]u8, // 0x630
        m_fIndirectLightStrength: [0x4]u8, // 0x634
        m_fSunLightStrength: [0x4]u8, // 0x638
        m_fNoiseStrength: [0x4]u8, // 0x63C
        m_TintColor: [0x4]u8, // 0x640
        m_bOverrideTintColor: [0x1]u8, // 0x644
        m_bOverrideIndirectLightStrength: [0x1]u8, // 0x645
        m_bOverrideSunLightStrength: [0x1]u8, // 0x646
        m_bOverrideNoiseStrength: [0x1]u8, // 0x647
    };
    pub const C_CSGO_EndOfMatchCharacterPosition = extern struct {
        pad_0: [0x1D18]u8, // 0x0
    };
    pub const CPulseCell_PlaySequence = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_SequenceName: [0x8]u8, // 0xD8
        m_PulseAnimEvents: [0x18]u8, // 0xE0
        m_OnFinished: [0x48]u8, // 0xF8
    };
    pub const C_BarnLight = extern struct {
        pad_0: [0x1098]u8, // 0x0
        m_bEnabled: [0x4]u8, // 0x1098
        m_nColorMode: [0x4]u8, // 0x109C
        m_Color: [0x4]u8, // 0x10A0
        m_flColorTemperature: [0x4]u8, // 0x10A4
        m_flBrightness: [0x4]u8, // 0x10A8
        m_flBrightnessScale: [0x4]u8, // 0x10AC
        m_nDirectLight: [0x4]u8, // 0x10B0
        m_nBakedShadowIndex: [0x4]u8, // 0x10B4
        m_nLightPathUniqueId: [0x4]u8, // 0x10B8
        m_nLightMapUniqueId: [0x4]u8, // 0x10BC
        m_nLuminaireShape: [0x4]u8, // 0x10C0
        m_flLuminaireSize: [0x4]u8, // 0x10C4
        m_flLuminaireAnisotropy: [0x8]u8, // 0x10C8
        m_LightStyleString: [0x8]u8, // 0x10D0
        m_flLightStyleStartTime: [0x8]u8, // 0x10D8
        m_QueuedLightStyleStrings: [0x18]u8, // 0x10E0
        m_LightStyleEvents: [0x18]u8, // 0x10F8
        m_LightStyleTargets: [0x18]u8, // 0x1110
        m_StyleEvent: [0x60]u8, // 0x1128
        m_hLightCookie: [0x8]u8, // 0x1188
        m_flShape: [0x4]u8, // 0x1190
        m_flSoftX: [0x4]u8, // 0x1194
        m_flSoftY: [0x4]u8, // 0x1198
        m_flSkirt: [0x4]u8, // 0x119C
        m_flSkirtNear: [0x4]u8, // 0x11A0
        m_vSizeParams: [0xC]u8, // 0x11A4
        m_flRange: [0x4]u8, // 0x11B0
        m_vShear: [0xC]u8, // 0x11B4
        m_nBakeSpecularToCubemaps: [0x4]u8, // 0x11C0
        m_vBakeSpecularToCubemapsSize: [0xC]u8, // 0x11C4
        m_flBakeSpecularToCubemapsScale: [0x4]u8, // 0x11D0
        m_nCastShadows: [0x4]u8, // 0x11D4
        m_nShadowMapSize: [0x4]u8, // 0x11D8
        m_nShadowPriority: [0x4]u8, // 0x11DC
        m_bContactShadow: [0x1]u8, // 0x11E0
        m_bForceShadowsEnabled: [0x3]u8, // 0x11E1
        m_nBounceLight: [0x4]u8, // 0x11E4
        m_flBounceScale: [0x4]u8, // 0x11E8
        m_flMinRoughness: [0x4]u8, // 0x11EC
        m_vAlternateColor: [0xC]u8, // 0x11F0
        m_fAlternateColorBrightness: [0x4]u8, // 0x11FC
        m_nFog: [0x4]u8, // 0x1200
        m_flFogStrength: [0x4]u8, // 0x1204
        m_nFogShadows: [0x4]u8, // 0x1208
        m_flFogScale: [0x4]u8, // 0x120C
        m_flFadeSizeStart: [0x4]u8, // 0x1210
        m_flFadeSizeEnd: [0x4]u8, // 0x1214
        m_flShadowFadeSizeStart: [0x4]u8, // 0x1218
        m_flShadowFadeSizeEnd: [0x4]u8, // 0x121C
        m_bPrecomputedFieldsValid: [0x4]u8, // 0x1220
        m_vPrecomputedBoundsMins: [0xC]u8, // 0x1224
        m_vPrecomputedBoundsMaxs: [0xC]u8, // 0x1230
        m_vPrecomputedOBBOrigin: [0xC]u8, // 0x123C
        m_vPrecomputedOBBAngles: [0xC]u8, // 0x1248
        m_vPrecomputedOBBExtent: [0xC]u8, // 0x1254
        m_nPrecomputedSubFrusta: [0x4]u8, // 0x1260
        m_vPrecomputedOBBOrigin0: [0xC]u8, // 0x1264
        m_vPrecomputedOBBAngles0: [0xC]u8, // 0x1270
        m_vPrecomputedOBBExtent0: [0xC]u8, // 0x127C
        m_vPrecomputedOBBOrigin1: [0xC]u8, // 0x1288
        m_vPrecomputedOBBAngles1: [0xC]u8, // 0x1294
        m_vPrecomputedOBBExtent1: [0xC]u8, // 0x12A0
        m_vPrecomputedOBBOrigin2: [0xC]u8, // 0x12AC
        m_vPrecomputedOBBAngles2: [0xC]u8, // 0x12B8
        m_vPrecomputedOBBExtent2: [0xC]u8, // 0x12C4
        m_vPrecomputedOBBOrigin3: [0xC]u8, // 0x12D0
        m_vPrecomputedOBBAngles3: [0xC]u8, // 0x12DC
        m_vPrecomputedOBBExtent3: [0xC]u8, // 0x12E8
        m_vPrecomputedOBBOrigin4: [0xC]u8, // 0x12F4
        m_vPrecomputedOBBAngles4: [0xC]u8, // 0x1300
        m_vPrecomputedOBBExtent4: [0xC]u8, // 0x130C
        m_vPrecomputedOBBOrigin5: [0xC]u8, // 0x1318
        m_vPrecomputedOBBAngles5: [0xC]u8, // 0x1324
        m_vPrecomputedOBBExtent5: [0x50]u8, // 0x1330
        m_bInitialBoneSetup: [0x8]u8, // 0x1380
        m_VisClusters: [0x20]u8, // 0x1388
    };
    pub const CPulseCell_LerpCameraSettings = extern struct {
        pad_0: [0x120]u8, // 0x0
        m_flSeconds: [0x4]u8, // 0x120
        m_Start: [0x10]u8, // 0x124
        m_End: [0x14]u8, // 0x134
    };
    pub const CPointOffScreenIndicatorUi = extern struct {
        pad_0: [0x1300]u8, // 0x0
        m_bBeenEnabled: [0x1]u8, // 0x1300
        m_bHide: [0x3]u8, // 0x1301
        m_flSeenTargetTime: [0x4]u8, // 0x1304
        m_pTargetPanel: [0x8]u8, // 0x1308
    };
    pub const CCSObserver_UseServices = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const C_PostProcessingVolume = extern struct {
        pad_0: [0x1190]u8, // 0x0
        m_hPostSettings: [0x8]u8, // 0x1190
        m_flFadeDuration: [0x4]u8, // 0x1198
        m_flMinLogExposure: [0x4]u8, // 0x119C
        m_flMaxLogExposure: [0x4]u8, // 0x11A0
        m_flMinExposure: [0x4]u8, // 0x11A4
        m_flMaxExposure: [0x4]u8, // 0x11A8
        m_flExposureCompensation: [0x4]u8, // 0x11AC
        m_flExposureFadeSpeedUp: [0x4]u8, // 0x11B0
        m_flExposureFadeSpeedDown: [0x4]u8, // 0x11B4
        m_flTonemapEVSmoothingRange: [0x4]u8, // 0x11B8
        m_bMaster: [0x1]u8, // 0x11BC
        m_bExposureControl: [0x3]u8, // 0x11BD
    };
    pub const CCSMinimapVolume = extern struct {
        pad_0: [0x1198]u8, // 0x0
        m_strMinimapName: [0x10]u8, // 0x1198
    };
    pub const CCSPlayer_UseServices = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const C_BaseModelEntity__Emphasized_Phoneme = extern struct {
        m_sClassName: [0x18]u8, // 0x0
        m_flAmount: [0x4]u8, // 0x18
        m_bRequired: [0x1]u8, // 0x1C
        m_bBasechecked: [0x1]u8, // 0x1D
        m_bValid: [0x2]u8, // 0x1E
    };
    pub const C_CSGO_CounterTerroristWingmanIntroCamera = extern struct {
        pad_0: [0x690]u8, // 0x0
    };
    pub const CPulseCell_PickBestOutflowSelector = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_nCheckType: [0x8]u8, // 0x48
        m_OutflowList: [0x18]u8, // 0x50
    };
    pub const CInfoFan = extern struct {
        pad_0: [0x640]u8, // 0x0
        m_fFanForceMaxRadius: [0x4]u8, // 0x640
        m_fFanForceMinRadius: [0x4]u8, // 0x644
        m_flCurveDistRange: [0x8]u8, // 0x648
        m_FanForceCurveString: [0x8]u8, // 0x650
    };
    pub const C_VoteController = extern struct {
        pad_0: [0x610]u8, // 0x0
        m_iActiveIssueIndex: [0x4]u8, // 0x610
        m_iOnlyTeamToVote: [0x4]u8, // 0x614
        m_nVoteOptionCount: [0x14]u8, // 0x618
        m_nPotentialVotes: [0x4]u8, // 0x62C
        m_bVotesDirty: [0x1]u8, // 0x630
        m_bTypeDirty: [0x1]u8, // 0x631
        m_bIsYesNoVote: [0x6]u8, // 0x632
    };
    pub const C_C4 = extern struct {
        pad_0: [0x1F20]u8, // 0x0
        m_activeLightParticleIndex: [0x4]u8, // 0x1F20
        m_eActiveLightEffect: [0x4]u8, // 0x1F24
        m_bStartedArming: [0x4]u8, // 0x1F28
        m_fArmedTime: [0x4]u8, // 0x1F2C
        m_bBombPlacedAnimation: [0x1]u8, // 0x1F30
        m_bIsPlantingViaUse: [0x7]u8, // 0x1F31
        m_entitySpottedState: [0x18]u8, // 0x1F38
        m_nSpotRules: [0x4]u8, // 0x1F50
        m_bPlayedArmingBeeps: [0x7]u8, // 0x1F54
        m_bBombPlanted: [0x5]u8, // 0x1F5B
    };
    pub const C_CSPlayerPawnBase = extern struct {
        pad_0: [0x14D8]u8, // 0x0
        m_pPingServices: [0x8]u8, // 0x14D8
        m_previousPlayerState: [0x4]u8, // 0x14E0
        m_iPlayerState: [0x4]u8, // 0x14E4
        m_bHasMovedSinceSpawn: [0x4]u8, // 0x14E8
        m_flLastSpawnTimeIndex: [0x4]u8, // 0x14EC
        m_iProgressBarDuration: [0x4]u8, // 0x14F0
        m_flProgressBarStartTime: [0x4]u8, // 0x14F4
        m_flClientDeathTime: [0x4]u8, // 0x14F8
        m_flFlashBangTime: [0x4]u8, // 0x14FC
        m_flFlashScreenshotAlpha: [0x4]u8, // 0x1500
        m_flFlashOverlayAlpha: [0x4]u8, // 0x1504
        m_bFlashBuildUp: [0x1]u8, // 0x1508
        m_bFlashDspHasBeenCleared: [0x1]u8, // 0x1509
        m_bFlashScreenshotHasBeenGrabbed: [0x2]u8, // 0x150A
        m_flFlashMaxAlpha: [0x4]u8, // 0x150C
        m_flFlashDuration: [0x4]u8, // 0x1510
        m_flClientHealthFadeChangeTimestamp: [0x4]u8, // 0x1514
        m_nClientHealthFadeParityValue: [0x4]u8, // 0x1518
        m_fNextThinkPushAway: [0x8]u8, // 0x151C
        m_flCurrentMusicStartTime: [0x4]u8, // 0x1524
        m_flMusicRoundStartTime: [0x4]u8, // 0x1528
        m_bDeferStartMusicOnWarmup: [0x4]u8, // 0x152C
        m_flLastSmokeOverlayAlpha: [0x4]u8, // 0x1530
        m_flLastSmokeAge: [0x4]u8, // 0x1534
        m_vLastSmokeOverlayColor: [0x28]u8, // 0x1538
        m_hOriginalController: [0x8]u8, // 0x1560
    };
    pub const C_BreakableProp = extern struct {
        pad_0: [0x12A0]u8, // 0x0
        m_CPropDataComponent: [0x40]u8, // 0x12A0
        m_OnStartDeath: [0x18]u8, // 0x12E0
        m_OnBreak: [0x18]u8, // 0x12F8
        m_OnHealthChanged: [0x20]u8, // 0x1310
        m_OnTakeDamage: [0x18]u8, // 0x1330
        m_impactEnergyScale: [0x4]u8, // 0x1348
        m_iMinHealthDmg: [0x4]u8, // 0x134C
        m_flPressureDelay: [0x4]u8, // 0x1350
        m_flDefBurstScale: [0x4]u8, // 0x1354
        m_vDefBurstOffset: [0xC]u8, // 0x1358
        m_hBreaker: [0x4]u8, // 0x1364
        m_PerformanceMode: [0x4]u8, // 0x1368
        m_flPreventDamageBeforeTime: [0x4]u8, // 0x136C
        m_BreakableContentsType: [0x8]u8, // 0x1370
        m_strBreakableContentsPropGroupOverride: [0x8]u8, // 0x1378
        m_strBreakableContentsParticleOverride: [0x8]u8, // 0x1380
        m_bHasBreakPiecesOrCommands: [0x4]u8, // 0x1388
        m_explodeDamage: [0x4]u8, // 0x138C
        m_explodeRadius: [0x8]u8, // 0x1390
        m_sExplosionType: [0x8]u8, // 0x1398
        m_explosionDelay: [0x8]u8, // 0x13A0
        m_explosionBuildupSound: [0x8]u8, // 0x13A8
        m_explosionCustomEffect: [0x8]u8, // 0x13B0
        m_explosionCustomSound: [0x8]u8, // 0x13B8
        m_explosionModifier: [0x8]u8, // 0x13C0
        m_hPhysicsAttacker: [0x4]u8, // 0x13C8
        m_flLastPhysicsInfluenceTime: [0x4]u8, // 0x13CC
        m_flDefaultFadeScale: [0x4]u8, // 0x13D0
        m_hLastAttacker: [0xC]u8, // 0x13D4
    };
    pub const CCSGO_WingmanIntroTerroristPosition = extern struct {
        pad_0: [0x1D18]u8, // 0x0
    };
    pub const C_RetakeGameRules = extern struct {
        pad_0: [0x138]u8, // 0x0
        m_nMatchSeed: [0x4]u8, // 0x138
        m_bBlockersPresent: [0x1]u8, // 0x13C
        m_bRoundInProgress: [0x3]u8, // 0x13D
        m_iFirstSecondHalfRound: [0x4]u8, // 0x140
        m_iBombSite: [0x4]u8, // 0x144
        m_hBombPlanter: [0x10]u8, // 0x148
    };
    pub const C_SoundOpvarSetDomeEntity = extern struct {
        pad_0: [0x620]u8, // 0x0
    };
    pub const CPrecipitationVData = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_szParticlePrecipitationEffect: [0xE0]u8, // 0x28
        m_szParticlePrecipitationPuddleEffect: [0xE0]u8, // 0x108
        m_szParticlePrecipitationPostEffect: [0xE0]u8, // 0x1E8
        m_flInnerDistance: [0x4]u8, // 0x2C8
        m_nAttachType: [0x4]u8, // 0x2CC
        m_bBatchSameVolumeType: [0x4]u8, // 0x2D0
        m_nRTEnvCP: [0x4]u8, // 0x2D4
        m_nRTEnvCPComponent: [0x8]u8, // 0x2D8
        m_szModifier: [0x8]u8, // 0x2E0
        m_nUseSnapshotFromSurfaceGraph: [0x4]u8, // 0x2E8
        m_snapshotFilter: [0x4]u8, // 0x2EC
    };
    pub const CPulseCell_WaitForObservable = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_Condition: [0x90]u8, // 0xD8
        m_OnTrue: [0x48]u8, // 0x168
    };
    pub const C_SoundAreaEntitySphere = extern struct {
        pad_0: [0x628]u8, // 0x0
        m_flRadius: [0x8]u8, // 0x628
    };
    pub const CPulseCell_Step_EntFire = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_Input: [0x8]u8, // 0x48
    };
    pub const C_WeaponAWP = extern struct {
        pad_0: [0x1F50]u8, // 0x0
    };
    pub const C_BaseButton = extern struct {
        pad_0: [0x1098]u8, // 0x0
        m_glowEntity: [0x4]u8, // 0x1098
        m_usable: [0x4]u8, // 0x109C
        m_szDisplayText: [0x8]u8, // 0x10A0
    };
    pub const CCSObserver_ObserverServices = extern struct {
        pad_0: [0x70]u8, // 0x0
        m_obsInterpState: [0x90]u8, // 0x70
    };
    pub const CHitboxComponent = extern struct {
        pad_0: [0x14]u8, // 0x0
        m_flBoundsExpandRadius: [0x4]u8, // 0x14
    };
    pub const C_SoundEventBoxHelper = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_vMins: [0xC]u8, // 0x600
        m_vMaxs: [0xC]u8, // 0x60C
    };
    pub const C_SoundEventBoxEntity = extern struct {
        pad_0: [0x6C0]u8, // 0x0
        m_vecBoxHelpersNetworked: [0x18]u8, // 0x6C0
    };
    pub const ServerAuthoritativeWeaponSlot_t = extern struct {
        pad_0: [0x30]u8, // 0x0
        unClass: [0x2]u8, // 0x30
        unSlot: [0x2]u8, // 0x32
        unItemDefIdx: [0x4]u8, // 0x34
    };
    pub const C_CSMinimapBoundary = extern struct {
        pad_0: [0x600]u8, // 0x0
    };
    pub const CPathQueryComponent = extern struct {
        pad_0: [0xA0]u8, // 0x0
    };
    pub const C_Precipitation = extern struct {
        pad_0: [0x1180]u8, // 0x0
        m_flDensity: [0x10]u8, // 0x1180
        m_flParticleInnerDist: [0x8]u8, // 0x1190
        m_pParticleDef: [0x14]u8, // 0x1198
        m_tParticlePrecipTraceTimer: [0x8]u8, // 0x11AC
        m_bActiveParticlePrecipEmitter: [0x1]u8, // 0x11B4
        m_bParticlePrecipInitialized: [0x1]u8, // 0x11B5
        m_bHasSimulatedSinceLastSceneObjectUpdate: [0x2]u8, // 0x11B6
        m_nAvailableSheetSequencesMaxIndex: [0x8]u8, // 0x11B8
    };
    pub const CLogicRelay = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_OnSpawn: [0x18]u8, // 0x600
        m_OnTrigger: [0x18]u8, // 0x618
        m_bDisabled: [0x1]u8, // 0x630
        m_bWaitForRefire: [0x1]u8, // 0x631
        m_bTriggerOnce: [0x1]u8, // 0x632
        m_bFastRetrigger: [0x1]u8, // 0x633
        m_bPassthoughCaller: [0x4]u8, // 0x634
    };
    pub const SequenceHistory_t = extern struct {
        m_hSequence: [0x4]u8, // 0x0
        m_flSeqStartTime: [0x4]u8, // 0x4
        m_flSeqFixedCycle: [0x4]u8, // 0x8
        m_nSeqLoopMode: [0x4]u8, // 0xC
        m_flPlaybackRate: [0x4]u8, // 0x10
        m_flCyclesPerSecond: [0x4]u8, // 0x14
    };
    pub const CPlayer_ItemServices = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulse_OutflowConnection = extern struct {
        m_SourceOutflowName: [0x10]u8, // 0x0
        m_nDestChunk: [0x4]u8, // 0x10
        m_nInstruction: [0x4]u8, // 0x14
        m_OutflowRegisterMap: [0x30]u8, // 0x18
    };
    pub const C_WeaponUMP45 = extern struct {
        pad_0: [0x1F50]u8, // 0x0
    };
    pub const C_WeaponG3SG1 = extern struct {
        pad_0: [0x1F50]u8, // 0x0
    };
    pub const C_SpotlightEnd = extern struct {
        pad_0: [0x1098]u8, // 0x0
        m_flLightScale: [0x4]u8, // 0x1098
        m_Radius: [0xC]u8, // 0x109C
    };
    pub const C_Fish = extern struct {
        pad_0: [0x1268]u8, // 0x0
        m_pos: [0xC]u8, // 0x1268
        m_vel: [0xC]u8, // 0x1274
        m_angles: [0xC]u8, // 0x1280
        m_localLifeState: [0x4]u8, // 0x128C
        m_deathDepth: [0x4]u8, // 0x1290
        m_deathAngle: [0x4]u8, // 0x1294
        m_buoyancy: [0x8]u8, // 0x1298
        m_wiggleTimer: [0x18]u8, // 0x12A0
        m_wigglePhase: [0x4]u8, // 0x12B8
        m_wiggleRate: [0x4]u8, // 0x12BC
        m_actualPos: [0xC]u8, // 0x12C0
        m_actualAngles: [0xC]u8, // 0x12CC
        m_poolOrigin: [0xC]u8, // 0x12D8
        m_waterLevel: [0x4]u8, // 0x12E4
        m_gotUpdate: [0x4]u8, // 0x12E8
        m_x: [0x4]u8, // 0x12EC
        m_y: [0x4]u8, // 0x12F0
        m_z: [0x4]u8, // 0x12F4
        m_angle: [0x4]u8, // 0x12F8
        m_errorHistory: [0x50]u8, // 0x12FC
        m_errorHistoryIndex: [0x4]u8, // 0x134C
        m_errorHistoryCount: [0x4]u8, // 0x1350
        m_averageError: [0x4]u8, // 0x1354
    };
    pub const C_WeaponFamas = extern struct {
        pad_0: [0x1F50]u8, // 0x0
    };
    pub const C_EnvVolumetricFogController = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_flScattering: [0x4]u8, // 0x600
        m_TintColor: [0x4]u8, // 0x604
        m_flAnisotropy: [0x4]u8, // 0x608
        m_flFadeSpeed: [0x4]u8, // 0x60C
        m_flDrawDistance: [0x4]u8, // 0x610
        m_flFadeInStart: [0x4]u8, // 0x614
        m_flFadeInEnd: [0x4]u8, // 0x618
        m_flIndirectStrength: [0x4]u8, // 0x61C
        m_nVolumeDepth: [0x4]u8, // 0x620
        m_fFirstVolumeSliceThickness: [0x4]u8, // 0x624
        m_nIndirectTextureDimX: [0x4]u8, // 0x628
        m_nIndirectTextureDimY: [0x4]u8, // 0x62C
        m_nIndirectTextureDimZ: [0x4]u8, // 0x630
        m_vBoxMins: [0xC]u8, // 0x634
        m_vBoxMaxs: [0xC]u8, // 0x640
        m_bActive: [0x4]u8, // 0x64C
        m_flStartAnisoTime: [0x4]u8, // 0x650
        m_flStartScatterTime: [0x4]u8, // 0x654
        m_flStartDrawDistanceTime: [0x4]u8, // 0x658
        m_flStartAnisotropy: [0x4]u8, // 0x65C
        m_flStartScattering: [0x4]u8, // 0x660
        m_flStartDrawDistance: [0x4]u8, // 0x664
        m_flDefaultAnisotropy: [0x4]u8, // 0x668
        m_flDefaultScattering: [0x4]u8, // 0x66C
        m_flDefaultDrawDistance: [0x4]u8, // 0x670
        m_bStartDisabled: [0x1]u8, // 0x674
        m_bEnableIndirect: [0x1]u8, // 0x675
        m_bIsMaster: [0x2]u8, // 0x676
        m_hFogIndirectTexture: [0x8]u8, // 0x678
        m_nForceRefreshCount: [0x4]u8, // 0x680
        m_fNoiseSpeed: [0x4]u8, // 0x684
        m_fNoiseStrength: [0x4]u8, // 0x688
        m_vNoiseScale: [0xC]u8, // 0x68C
        m_fWindSpeed: [0x4]u8, // 0x698
        m_vWindDirection: [0xC]u8, // 0x69C
        m_bFirstTime: [0x8]u8, // 0x6A8
    };
    pub const CPulseGraphDef = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_DomainIdentifier: [0x10]u8, // 0x8
        m_DomainSubType: [0x18]u8, // 0x18
        m_ParentMapName: [0x10]u8, // 0x30
        m_ParentXmlName: [0x10]u8, // 0x40
        m_Chunks: [0x18]u8, // 0x50
        m_Cells: [0x18]u8, // 0x68
        m_Vars: [0x18]u8, // 0x80
        m_TempVarBanks: [0x18]u8, // 0x98
        m_PublicOutputs: [0x18]u8, // 0xB0
        m_InvokeBindings: [0x18]u8, // 0xC8
        m_CallInfos: [0x18]u8, // 0xE0
        m_Constants: [0x18]u8, // 0xF8
        m_DomainValues: [0x18]u8, // 0x110
        m_BlackboardReferences: [0x18]u8, // 0x128
        m_OutputConnections: [0x80]u8, // 0x140
    };
    pub const C_EnvDetailController = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_flFadeStartDist: [0x4]u8, // 0x600
        m_flFadeEndDist: [0x4]u8, // 0x604
    };
    pub const CHostageRescueZoneShim = extern struct {
        pad_0: [0x1180]u8, // 0x0
    };
    pub const CEnvSoundscapeAlias_snd_soundscape = extern struct {
        pad_0: [0x690]u8, // 0x0
    };
    pub const CCSPlayer_HostageServices = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_hCarriedHostage: [0x4]u8, // 0x48
        m_hCarriedHostageProp: [0x4]u8, // 0x4C
    };
    pub const C_GameRulesProxy = extern struct {
        pad_0: [0x600]u8, // 0x0
    };
    pub const CRenderComponent = extern struct {
        pad_0: [0x10]u8, // 0x0
        __m_pChainEntity: [0x40]u8, // 0x10
        m_bIsRenderingWithViewModels: [0x4]u8, // 0x50
        m_nSplitscreenFlags: [0x4]u8, // 0x54
        m_bEnableRendering: [0x50]u8, // 0x58
        m_bInterpolationReadyToDraw: [0x28]u8, // 0xA8
    };
    pub const C_Team = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_aPlayerControllers: [0x18]u8, // 0x600
        m_aPlayers: [0x18]u8, // 0x618
        m_iScore: [0x4]u8, // 0x630
        m_szTeamname: [0x84]u8, // 0x634
    };
    pub const C_PathParticleRopeAlias_path_particle_rope_clientside = extern struct {
        pad_0: [0x710]u8, // 0x0
    };
    pub const CPointChildModifier = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_bOrphanInsteadOfDeletingChildrenOnRemove: [0x8]u8, // 0x600
    };
    pub const CCSPlayerLegacyJump = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_bOldJumpPressed: [0x4]u8, // 0x10
        m_flJumpPressedTime: [0x4]u8, // 0x14
    };
    pub const C_WeaponNOVA = extern struct {
        pad_0: [0x1F20]u8, // 0x0
    };
    pub const C_CS2HudModelAddon = extern struct {
        pad_0: [0x1330]u8, // 0x0
    };
    pub const C_DEagle = extern struct {
        pad_0: [0x1F50]u8, // 0x0
    };
    pub const C_TriggerMultiple = extern struct {
        pad_0: [0x1180]u8, // 0x0
    };
    pub const C_CSGO_TerroristRushIntroCamera = extern struct {
        pad_0: [0x690]u8, // 0x0
    };
    pub const C_CSGO_TeamPreviewCamera = extern struct {
        pad_0: [0x688]u8, // 0x0
        m_nVariant: [0x8]u8, // 0x688
    };
    pub const C_ColorCorrectionVolume = extern struct {
        pad_0: [0x1180]u8, // 0x0
        m_LastEnterWeight: [0x4]u8, // 0x1180
        m_LastEnterTime: [0x4]u8, // 0x1184
        m_LastExitWeight: [0x4]u8, // 0x1188
        m_LastExitTime: [0x4]u8, // 0x118C
        m_bEnabled: [0x4]u8, // 0x1190
        m_MaxWeight: [0x4]u8, // 0x1194
        m_FadeDuration: [0x4]u8, // 0x1198
        m_Weight: [0x4]u8, // 0x119C
        m_lookupFilename: [0x208]u8, // 0x11A0
    };
    pub const CPlayer_MovementServices = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_nImpulse: [0x8]u8, // 0x48
        m_nButtons: [0x20]u8, // 0x50
        m_nQueuedButtonDownMask: [0x8]u8, // 0x70
        m_nQueuedButtonChangeMask: [0x8]u8, // 0x78
        m_nButtonDoublePressed: [0x8]u8, // 0x80
        m_pButtonPressedCmdNumber: [0x100]u8, // 0x88
        m_nLastCommandNumberProcessed: [0x8]u8, // 0x188
        m_nToggleButtonDownMask: [0x10]u8, // 0x190
        m_flCmdForwardMove: [0x4]u8, // 0x1A0
        m_flCmdLeftMove: [0x4]u8, // 0x1A4
        m_flCmdUpMove: [0x4]u8, // 0x1A8
        m_flMaxspeed: [0x4]u8, // 0x1AC
        m_arrForceSubtickMoveWhen: [0x10]u8, // 0x1B0
        m_flForwardMove: [0x4]u8, // 0x1C0
        m_flLeftMove: [0x4]u8, // 0x1C4
        m_flUpMove: [0x4]u8, // 0x1C8
        m_vecLastMovementImpulses: [0x74]u8, // 0x1CC
        m_vecOldViewAngles: [0x18]u8, // 0x240
    };
    pub const CInfoDynamicShadowHintBox = extern struct {
        pad_0: [0x618]u8, // 0x0
        m_vBoxMins: [0xC]u8, // 0x618
        m_vBoxMaxs: [0xC]u8, // 0x624
    };
    pub const CBaseAnimGraphController = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_nAnimationAlgorithm: [0x4]u8, // 0x18
        m_nNextExternalGraphHandle: [0x4]u8, // 0x1C
        m_vecSecondarySkeletonSlotIDs: [0x18]u8, // 0x20
        m_vecSecondarySkeletons: [0x18]u8, // 0x38
        m_nSecondarySkeletonMasterCount: [0x8]u8, // 0x50
        m_flSoundSyncTime: [0x4]u8, // 0x58
        m_nActiveIKChainMask: [0x54]u8, // 0x5C
        m_hSequence: [0x4]u8, // 0xB0
        m_flSeqStartTime: [0x4]u8, // 0xB4
        m_flSeqFixedCycle: [0x4]u8, // 0xB8
        m_nAnimLoopMode: [0x4]u8, // 0xBC
        m_flPlaybackRate: [0xC]u8, // 0xC0
        m_nNotifyState: [0x1]u8, // 0xCC
        m_bNetworkedAnimationInputsChanged: [0x1]u8, // 0xCD
        m_bNetworkedSequenceChanged: [0x1]u8, // 0xCE
        m_bLastUpdateSkipped: [0x1]u8, // 0xCF
        m_bSequenceFinished: [0x4]u8, // 0xD0
        m_nPrevAnimUpdateTick: [0x29C]u8, // 0xD4
        m_hGraphDefinitionAG2: [0x8]u8, // 0x370
        m_SerializePoseRecipeAG2Slots: [0x68]u8, // 0x378
        m_SerializePoseRecipeAG2Dynamic: [0x18]u8, // 0x3E0
        m_nSerializePoseRecipeAG2ActiveSlot: [0x4]u8, // 0x3F8
        m_nSerializePoseRecipeVersionAG2: [0x4]u8, // 0x3FC
        m_nServerGraphInstanceIteration: [0x4]u8, // 0x400
        m_nServerSerializationContextIteration: [0x4]u8, // 0x404
        m_primaryGraphId: [0x8]u8, // 0x408
        m_vecExternalGraphIds: [0x18]u8, // 0x410
        m_vecExternalClipIds: [0x18]u8, // 0x428
        m_sAnimGraph2Identifier: [0x8]u8, // 0x440
        m_pGraphInstanceAG2: [0x220]u8, // 0x448
        m_vecExternalGraphs: [0x31]u8, // 0x668
        m_nPrevAnimationAlgorithm: [0x7]u8, // 0x699
    };
    pub const C_ColorCorrection = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_vecOrigin: [0xC]u8, // 0x600
        m_MinFalloff: [0x4]u8, // 0x60C
        m_MaxFalloff: [0x4]u8, // 0x610
        m_flFadeInDuration: [0x4]u8, // 0x614
        m_flFadeOutDuration: [0x4]u8, // 0x618
        m_flMaxWeight: [0x4]u8, // 0x61C
        m_flCurWeight: [0x4]u8, // 0x620
        m_netlookupFilename: [0x200]u8, // 0x624
        m_bEnabled: [0x1]u8, // 0x824
        m_bMaster: [0x1]u8, // 0x825
        m_bClientSide: [0x1]u8, // 0x826
        m_bExclusive: [0x1]u8, // 0x827
        m_bEnabledOnClient: [0x4]u8, // 0x828
        m_flCurWeightOnClient: [0x4]u8, // 0x82C
        m_bFadingIn: [0x4]u8, // 0x830
        m_flFadeStartWeight: [0x4]u8, // 0x834
        m_flFadeStartTime: [0x4]u8, // 0x838
        m_flFadeDuration: [0xC]u8, // 0x83C
    };
    pub const AnimGraph2SerializedPoseRecipeSlot_t = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_topology: [0x10]u8, // 0x30
    };
    pub const CBuoyancyHelper = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_pController: [0x10]u8, // 0x8
        m_nFluidType: [0x4]u8, // 0x18
        m_flFluidDensity: [0x4]u8, // 0x1C
        m_flNeutrallyBuoyantGravity: [0x4]u8, // 0x20
        m_flNeutrallyBuoyantLinearDamping: [0x4]u8, // 0x24
        m_flNeutrallyBuoyantAngularDamping: [0x4]u8, // 0x28
        m_bNeutrallyBuoyant: [0x4]u8, // 0x2C
        m_vecFractionOfWheelSubmergedForWheelFriction: [0x18]u8, // 0x30
        m_vecWheelFrictionScales: [0x18]u8, // 0x48
        m_vecFractionOfWheelSubmergedForWheelDrag: [0x18]u8, // 0x60
        m_vecWheelDrag: [0xA0]u8, // 0x78
    };
    pub const C_PhysBox = extern struct {
        pad_0: [0x1098]u8, // 0x0
    };
    pub const CCSPlayer_CameraServices = extern struct {
        pad_0: [0x2B0]u8, // 0x0
        m_flDeathCamTilt: [0x4]u8, // 0x2B0
        m_hDeathCamBounds: [0x4]u8, // 0x2B4
        m_bDeathCamBoundsSearched: [0x8]u8, // 0x2B8
        m_vClientScopeInaccuracy: [0x90]u8, // 0x2C0
    };
    pub const CFilterMultiple = extern struct {
        pad_0: [0x638]u8, // 0x0
        m_nFilterType: [0x8]u8, // 0x638
        m_iFilterName: [0x50]u8, // 0x640
        m_hFilter: [0x28]u8, // 0x690
    };
    pub const CPulseCell_FireCursors = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_Outflows: [0x18]u8, // 0xD8
        m_bWaitForChildOutflows: [0x8]u8, // 0xF0
        m_OnFinished: [0x48]u8, // 0xF8
    };
    pub const CEnvSoundscape = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_OnPlay: [0x18]u8, // 0x600
        m_flRadius: [0x8]u8, // 0x618
        m_soundEventName: [0x8]u8, // 0x620
        m_bOverrideWithEvent: [0x4]u8, // 0x628
        m_soundscapeIndex: [0x4]u8, // 0x62C
        m_soundscapeEntityListId: [0x8]u8, // 0x630
        m_positionNames: [0x40]u8, // 0x638
        m_hProxySoundscape: [0x4]u8, // 0x678
        m_bDisabled: [0x4]u8, // 0x67C
        m_soundscapeName: [0x8]u8, // 0x680
        m_soundEventHash: [0x8]u8, // 0x688
    };
    pub const C_SoundEventEntityAlias_snd_event_point = extern struct {
        pad_0: [0x6C0]u8, // 0x0
    };
    pub const C_FogController = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_fog: [0x68]u8, // 0x600
        m_bUseAngles: [0x4]u8, // 0x668
        m_iChangedVariables: [0x4]u8, // 0x66C
    };
    pub const C_SoundOpvarSetOBBWindEntity = extern struct {
        pad_0: [0x620]u8, // 0x0
    };
    pub const C_MolotovGrenade = extern struct {
        pad_0: [0x1FE0]u8, // 0x0
    };
    pub const C_NetTestBaseCombatCharacter = extern struct {
        pad_0: [0x12F0]u8, // 0x0
    };
    pub const CBodyComponentPoint = extern struct {
        pad_0: [0x80]u8, // 0x0
        m_sceneNode: [0x130]u8, // 0x80
    };
    pub const C_WeaponM4A1Silencer = extern struct {
        pad_0: [0x1F50]u8, // 0x0
    };
    pub const C_SkyCameraVolume = extern struct {
        pad_0: [0x618]u8, // 0x0
        m_vBoxMins: [0xC]u8, // 0x618
        m_vBoxMaxs: [0xC]u8, // 0x624
        m_hTarget: [0x4]u8, // 0x630
        m_nPriority: [0x4]u8, // 0x634
        m_bIsEnabled: [0x1]u8, // 0x638
        m_bSkyboxBlurEffect: [0x3]u8, // 0x639
        m_vBlurOrigin: [0xC]u8, // 0x63C
        m_bSkyboxReceivesWorldCsm: [0x1]u8, // 0x648
        m_bWorldReceivesSkyboxCsm: [0x1]u8, // 0x649
        m_bStartDisabled: [0x6]u8, // 0x64A
        m_iszTargetName: [0x8]u8, // 0x650
    };
    pub const C_EconItemView = extern struct {
        pad_0: [0x60]u8, // 0x0
        m_bInventoryImageRgbaRequested: [0x1]u8, // 0x60
        m_bInventoryImageTriedCache: [0x1F]u8, // 0x61
        m_nInventoryImageRgbaWidth: [0x4]u8, // 0x80
        m_nInventoryImageRgbaHeight: [0x4]u8, // 0x84
        m_szCurrentLoadCachedFileName: [0x130]u8, // 0x88
        m_bRestoreCustomMaterialAfterPrecache: [0x2]u8, // 0x1B8
        m_iItemDefinitionIndex: [0x2]u8, // 0x1BA
        m_iEntityQuality: [0x4]u8, // 0x1BC
        m_iEntityLevel: [0x8]u8, // 0x1C0
        m_iItemID: [0x8]u8, // 0x1C8
        m_iItemIDHigh: [0x4]u8, // 0x1D0
        m_iItemIDLow: [0x4]u8, // 0x1D4
        m_iAccountID: [0x4]u8, // 0x1D8
        m_iInventoryPosition: [0xC]u8, // 0x1DC
        m_bInitialized: [0x1]u8, // 0x1E8
        m_bDisallowSOC: [0x1]u8, // 0x1E9
        m_bIsStoreItem: [0x1]u8, // 0x1EA
        m_bIsTradeItem: [0x1]u8, // 0x1EB
        m_iEntityQuantity: [0x4]u8, // 0x1EC
        m_iRarityOverride: [0x4]u8, // 0x1F0
        m_iQualityOverride: [0x4]u8, // 0x1F4
        m_iOriginOverride: [0x4]u8, // 0x1F8
        m_ubStyleOverride: [0x1]u8, // 0x1FC
        m_unClientFlags: [0xB]u8, // 0x1FD
        m_AttributeList: [0x78]u8, // 0x208
        m_NetworkedDynamicAttributes: [0x78]u8, // 0x280
        m_szCustomName: [0xA1]u8, // 0x2F8
        m_szCustomNameOverride: [0xA1]u8, // 0x399
        m_szCustomNameOverride2: [0xA1]u8, // 0x43A
        m_szCustomNameOverride3: [0xCD]u8, // 0x4DB
        m_bInitializedTags: [0x8]u8, // 0x5A8
    };
    pub const CPulseCell_Timeline__TimelineEvent_t = extern struct {
        m_flTimeFromPrevious: [0x8]u8, // 0x0
        m_EventOutflow: [0x48]u8, // 0x8
    };
    pub const CPulseCell_IntervalTimer__CursorState_t = extern struct {
        m_StartTime: [0x4]u8, // 0x0
        m_EndTime: [0x4]u8, // 0x4
        m_flWaitInterval: [0x4]u8, // 0x8
        m_flWaitIntervalHigh: [0x4]u8, // 0xC
        m_bCompleteOnNextWake: [0x4]u8, // 0x10
    };
    pub const CPulseCell_BaseRequirement = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_BaseState = extern struct {
        pad_0: [0xD8]u8, // 0x0
    };
    pub const OutflowWithRequirements_t = extern struct {
        m_Connection: [0x48]u8, // 0x0
        m_DestinationFlowNodeID: [0x8]u8, // 0x48
        m_RequirementNodeIDs: [0x18]u8, // 0x50
        m_nCursorStateBlockIndex: [0x18]u8, // 0x68
    };
    pub const CPulseCell_IsRequirementValid = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const C_SoundEventPathCornerEntity = extern struct {
        pad_0: [0x6C0]u8, // 0x0
        m_vecCornerPairsNetworked: [0x18]u8, // 0x6C0
    };
    pub const C_InfoVisibilityBox = extern struct {
        pad_0: [0x604]u8, // 0x0
        m_nMode: [0x4]u8, // 0x604
        m_vBoxSize: [0xC]u8, // 0x608
        m_bEnabled: [0x4]u8, // 0x614
    };
    pub const CCSPlayer_ItemServices = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_bHasDefuser: [0x1]u8, // 0x48
        m_bHasHelmet: [0x7]u8, // 0x49
    };
    pub const CPulseCell_Value_Gradient = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_Gradient: [0x18]u8, // 0x48
    };
    pub const IntervalTimer = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_timestamp: [0x4]u8, // 0x8
        m_nWorldGroupId: [0x4]u8, // 0xC
    };
    pub const audioparams_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        localSound: [0x60]u8, // 0x8
        soundscapeIndex: [0x4]u8, // 0x68
        localBits: [0x4]u8, // 0x6C
        soundscapeEntityListIndex: [0x4]u8, // 0x70
        soundEventHash: [0x4]u8, // 0x74
    };
    pub const C_PathParticleRope = extern struct {
        pad_0: [0x608]u8, // 0x0
        m_bStartActive: [0x4]u8, // 0x608
        m_flMaxSimulationTime: [0x4]u8, // 0x60C
        m_iszEffectName: [0x8]u8, // 0x610
        m_PathNodes_Name: [0x18]u8, // 0x618
        m_flParticleSpacing: [0x4]u8, // 0x630
        m_flSlack: [0x4]u8, // 0x634
        m_flRadius: [0x4]u8, // 0x638
        m_ColorTint: [0x4]u8, // 0x63C
        m_nEffectState: [0x8]u8, // 0x640
        m_iEffectIndex: [0x8]u8, // 0x648
        m_PathNodes_Position: [0x18]u8, // 0x650
        m_PathNodes_TangentIn: [0x18]u8, // 0x668
        m_PathNodes_TangentOut: [0x18]u8, // 0x680
        m_PathNodes_Color: [0x18]u8, // 0x698
        m_PathNodes_PinEnabled: [0x18]u8, // 0x6B0
        m_PathNodes_RadiusScale: [0x48]u8, // 0x6C8
    };
    pub const C_DecoyProjectile = extern struct {
        pad_0: [0x1348]u8, // 0x0
        m_nDecoyShotTick: [0x4]u8, // 0x1348
        m_nClientLastKnownDecoyShotTick: [0x24]u8, // 0x134C
        m_flTimeParticleEffectSpawn: [0x8]u8, // 0x1370
    };
    pub const C_AttributeContainer = extern struct {
        pad_0: [0x50]u8, // 0x0
        m_Item: [0x5B0]u8, // 0x50
        m_iExternalItemProviderRegisteredToken: [0x8]u8, // 0x600
        m_ullRegisteredAsItemID: [0x8]u8, // 0x608
    };
    pub const C_CSWeaponBase = extern struct {
        pad_0: [0x19A8]u8, // 0x0
        m_iWeaponGameplayAnimState: [0x4]u8, // 0x19A8
        m_flWeaponGameplayAnimStateTimestamp: [0x4]u8, // 0x19AC
        m_flInspectCancelCompleteTime: [0x4]u8, // 0x19B0
        m_bInspectPending: [0x1]u8, // 0x19B4
        m_bInspectShouldLoop: [0x2B]u8, // 0x19B5
        m_nLastEmptySoundCmdNum: [0x4]u8, // 0x19E0
        m_bFireOnEmpty: [0x4]u8, // 0x19E4
        m_OnPlayerPickup: [0x18]u8, // 0x19E8
        m_weaponMode: [0x4]u8, // 0x1A00
        m_flTurningInaccuracyDelta: [0x4]u8, // 0x1A04
        m_vecTurningInaccuracyEyeDirLast: [0xC]u8, // 0x1A08
        m_flTurningInaccuracy: [0x4]u8, // 0x1A14
        m_fAccuracyPenalty: [0x4]u8, // 0x1A18
        m_flLastAccuracyUpdateTime: [0x4]u8, // 0x1A1C
        m_fAccuracySmoothedForZoom: [0x4]u8, // 0x1A20
        m_iRecoilIndex: [0x4]u8, // 0x1A24
        m_flRecoilIndex: [0x4]u8, // 0x1A28
        m_bBurstMode: [0x4]u8, // 0x1A2C
        m_flLastBurstModeChangeTime: [0x4]u8, // 0x1A30
        m_nPostponeFireReadyTicks: [0x4]u8, // 0x1A34
        m_flPostponeFireReadyFrac: [0x4]u8, // 0x1A38
        m_bInReload: [0x4]u8, // 0x1A3C
        m_nDeployTick: [0x4]u8, // 0x1A40
        m_flAttackHoldStartTime: [0x4]u8, // 0x1A44
        m_flDroppedAtTime: [0x8]u8, // 0x1A48
        m_bIsHauledBack: [0x1]u8, // 0x1A50
        m_bSilencerOn: [0x3]u8, // 0x1A51
        m_flTimeSilencerSwitchComplete: [0x4]u8, // 0x1A54
        m_bIsInStealthReload: [0x1]u8, // 0x1A58
        m_bInSilentReloadSection: [0x3]u8, // 0x1A59
        m_flStealthReloadHoldStartTime: [0x4]u8, // 0x1A5C
        m_bReloadHeldSinceStart: [0x4]u8, // 0x1A60
        m_flWeaponActionPlaybackRate: [0x4]u8, // 0x1A64
        m_iOriginalTeamNumber: [0x4]u8, // 0x1A68
        m_iMostRecentTeamNumber: [0x4]u8, // 0x1A6C
        m_bDroppedNearBuyZone: [0x4]u8, // 0x1A70
        m_flNextAttackRenderTimeOffset: [0xAC]u8, // 0x1A74
        m_bClearWeaponIdentifyingUGC: [0x1]u8, // 0x1B20
        m_bVisualsDataSet: [0x1]u8, // 0x1B21
        m_bUIWeapon: [0x2]u8, // 0x1B22
        m_nCustomEconReloadEventId: [0xC]u8, // 0x1B24
        m_bCanBePickedUp: [0x4]u8, // 0x1B30
        m_nextPrevOwnerUseTime: [0x4]u8, // 0x1B34
        m_hPrevOwner: [0x4]u8, // 0x1B38
        m_nDropTick: [0x4]u8, // 0x1B3C
        m_bWasActiveWeaponWhenDropped: [0x24]u8, // 0x1B40
        m_donated: [0x4]u8, // 0x1B64
        m_fLastShotTime: [0x4]u8, // 0x1B68
        m_bWasOwnedByCT: [0x1]u8, // 0x1B6C
        m_bWasOwnedByTerrorist: [0x3]u8, // 0x1B6D
        m_flNextClientFireBulletTime: [0x4]u8, // 0x1B70
        m_flNextClientFireBulletTime_Repredict: [0x5C]u8, // 0x1B74
        m_IronSightController: [0xB0]u8, // 0x1BD0
        m_iIronSightMode: [0x78]u8, // 0x1C80
        m_flLastLOSTraceFailureTime: [0x60]u8, // 0x1CF8
        m_flWatTickOffset: [0x14]u8, // 0x1D58
        m_flLastShakeTime: [0x1B4]u8, // 0x1D6C
    };
    pub const CTimeline = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_flValues: [0x100]u8, // 0x10
        m_nValueCounts: [0x100]u8, // 0x110
        m_nBucketCount: [0x4]u8, // 0x210
        m_flInterval: [0x4]u8, // 0x214
        m_flFinalValue: [0x4]u8, // 0x218
        m_nCompressionType: [0x4]u8, // 0x21C
        m_bStopped: [0x8]u8, // 0x220
    };
    pub const C_TonemapController2 = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_flAutoExposureMin: [0x4]u8, // 0x600
        m_flAutoExposureMax: [0x4]u8, // 0x604
        m_flExposureAdaptationSpeedUp: [0x4]u8, // 0x608
        m_flExposureAdaptationSpeedDown: [0x4]u8, // 0x60C
        m_flTonemapEVSmoothingRange: [0x8]u8, // 0x610
    };
    pub const CountdownTimer = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_duration: [0x4]u8, // 0x8
        m_timestamp: [0x4]u8, // 0xC
        m_timescale: [0x4]u8, // 0x10
        m_nWorldGroupId: [0x4]u8, // 0x14
    };
    pub const CNoiseStreamData = extern struct {
        m_Stream: [0x50]u8, // 0x0
    };
    pub const PulseNodeDynamicOutflows_t__DynamicOutflow_t = extern struct {
        m_OutflowID: [0x8]u8, // 0x0
        m_Connection: [0x48]u8, // 0x8
    };
    pub const C_WeaponMag7 = extern struct {
        pad_0: [0x1F50]u8, // 0x0
    };
    pub const WeaponPurchaseCount_t = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_nItemDefIndex: [0x2]u8, // 0x30
        m_nCount: [0x6]u8, // 0x32
    };
    pub const CBasePulseGraphInstance = extern struct {
        pad_0: [0x88]u8, // 0x0
    };
    pub const FilterHealth = extern struct {
        pad_0: [0x638]u8, // 0x0
        m_bAdrenalineActive: [0x4]u8, // 0x638
        m_iHealthMin: [0x4]u8, // 0x63C
        m_iHealthMax: [0x8]u8, // 0x640
    };
    pub const C_PointClientUIHUD = extern struct {
        pad_0: [0x10D0]u8, // 0x0
        m_bCheckCSSClasses: [0x178]u8, // 0x10D0
        m_bIgnoreInput: [0x4]u8, // 0x1248
        m_flWidth: [0x4]u8, // 0x124C
        m_flHeight: [0x4]u8, // 0x1250
        m_flDPI: [0x4]u8, // 0x1254
        m_flInteractDistance: [0x4]u8, // 0x1258
        m_flDepthOffset: [0x4]u8, // 0x125C
        m_unOwnerContext: [0x4]u8, // 0x1260
        m_unHorizontalAlign: [0x4]u8, // 0x1264
        m_unVerticalAlign: [0x4]u8, // 0x1268
        m_unOrientation: [0x4]u8, // 0x126C
        m_bAllowInteractionFromAllSceneWorlds: [0x8]u8, // 0x1270
        m_vecCSSClasses: [0x18]u8, // 0x1278
    };
    pub const CPulseCell_Inflow_GraphHook = extern struct {
        pad_0: [0x80]u8, // 0x0
        m_HookName: [0x10]u8, // 0x80
    };
    pub const SignatureOutflow_Resume = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const C_InfoLadderDismount = extern struct {
        pad_0: [0x600]u8, // 0x0
    };
    pub const C_PointCommentaryNode = extern struct {
        pad_0: [0x1280]u8, // 0x0
        m_bActive: [0x1]u8, // 0x1280
        m_bWasActive: [0x3]u8, // 0x1281
        m_flEndTime: [0x4]u8, // 0x1284
        m_flStartTime: [0x4]u8, // 0x1288
        m_flStartTimeInCommentary: [0x4]u8, // 0x128C
        m_iszCommentaryFile: [0x8]u8, // 0x1290
        m_iszTitle: [0x8]u8, // 0x1298
        m_iszSpeakers: [0x8]u8, // 0x12A0
        m_iNodeNumber: [0x4]u8, // 0x12A8
        m_iNodeNumberMax: [0x4]u8, // 0x12AC
        m_bListenedTo: [0x8]u8, // 0x12B0
        m_sndCommentary: [0x8]u8, // 0x12B8
        m_hViewPosition: [0x4]u8, // 0x12C0
        m_bRestartAfterRestore: [0x4]u8, // 0x12C4
    };
    pub const CSpriteOriented = extern struct {
        pad_0: [0x1118]u8, // 0x0
    };
    pub const shard_model_desc_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_nModelID: [0x8]u8, // 0x8
        m_hMaterialBase: [0x8]u8, // 0x10
        m_hMaterialDamageOverlay: [0x8]u8, // 0x18
        m_solid: [0x4]u8, // 0x20
        m_vecPanelSize: [0x8]u8, // 0x24
        m_vecStressPositionA: [0x8]u8, // 0x2C
        m_vecStressPositionB: [0xC]u8, // 0x34
        m_vecPanelVertices: [0x18]u8, // 0x40
        m_vInitialPanelVertices: [0x18]u8, // 0x58
        m_flGlassHalfThickness: [0x4]u8, // 0x70
        m_bHasParent: [0x1]u8, // 0x74
        m_bParentFrozen: [0x3]u8, // 0x75
        m_SurfacePropStringToken: [0x8]u8, // 0x78
    };
    pub const C_KeychainModule = extern struct {
        pad_0: [0x1270]u8, // 0x0
        m_nKeychainDefID: [0x4]u8, // 0x1270
        m_nKeychainSeed: [0x4]u8, // 0x1274
    };
    pub const CFuncWater = extern struct {
        pad_0: [0x1098]u8, // 0x0
        m_BuoyancyHelper: [0x118]u8, // 0x1098
    };
    pub const CCSPlayer_GlowServices = extern struct {
        pad_0: [0x50]u8, // 0x0
    };
    pub const CCSGameModeRules = extern struct {
        pad_0: [0x8]u8, // 0x0
        __m_pChainEntity: [0x28]u8, // 0x8
    };
    pub const C_Flashbang = extern struct {
        pad_0: [0x1FE0]u8, // 0x0
    };
    pub const C_PointClientUIWorldTextPanel = extern struct {
        pad_0: [0x1300]u8, // 0x0
        m_messageText: [0x200]u8, // 0x1300
    };
    pub const CCSPlayer_WaterServices = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_flWaterJumpTime: [0x4]u8, // 0x48
        m_vecWaterJumpVel: [0xC]u8, // 0x4C
        m_flSwimSoundTime: [0x18]u8, // 0x58
    };
    pub const C_CSObserverPawn = extern struct {
        pad_0: [0x1568]u8, // 0x0
        m_hDetectParentChange: [0x8]u8, // 0x1568
    };
    pub const ViewAngleServerChange_t = extern struct {
        pad_0: [0x30]u8, // 0x0
        nType: [0x4]u8, // 0x30
        qAngle: [0xC]u8, // 0x34
        nIndex: [0x8]u8, // 0x40
    };
    pub const C_FuncLadder = extern struct {
        pad_0: [0x1098]u8, // 0x0
        m_vecLadderDir: [0x10]u8, // 0x1098
        m_Dismounts: [0x18]u8, // 0x10A8
        m_vecLocalTop: [0xC]u8, // 0x10C0
        m_vecPlayerMountPositionTop: [0xC]u8, // 0x10CC
        m_vecPlayerMountPositionBottom: [0xC]u8, // 0x10D8
        m_flAutoRideSpeed: [0x4]u8, // 0x10E4
        m_bDisabled: [0x1]u8, // 0x10E8
        m_bFakeLadder: [0x1]u8, // 0x10E9
        m_bHasSlack: [0x6]u8, // 0x10EA
    };
    pub const C_WeaponMP5SD = extern struct {
        pad_0: [0x1F50]u8, // 0x0
    };
    pub const C_World = extern struct {
        pad_0: [0x1098]u8, // 0x0
    };
    pub const C_CSGO_TeamSelectCounterTerroristPosition = extern struct {
        pad_0: [0x1D18]u8, // 0x0
    };
    pub const C_WeaponGalilAR = extern struct {
        pad_0: [0x1F50]u8, // 0x0
    };
    pub const CCSPlayerBase_CameraServices = extern struct {
        pad_0: [0x298]u8, // 0x0
        m_iFOV: [0x4]u8, // 0x298
        m_iFOVStart: [0x4]u8, // 0x29C
        m_flFOVTime: [0x4]u8, // 0x2A0
        m_flFOVRate: [0x4]u8, // 0x2A4
        m_hZoomOwner: [0x4]u8, // 0x2A8
        m_flLastShotFOV: [0x4]u8, // 0x2AC
    };
    pub const C_TeamplayRules = extern struct {
        pad_0: [0x40]u8, // 0x0
    };
    pub const CPulseCell_Inflow_BaseEntrypoint = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_EntryChunk: [0x8]u8, // 0x48
        m_RegisterMap: [0x30]u8, // 0x50
    };
    pub const C_WeaponSG556 = extern struct {
        pad_0: [0x1F50]u8, // 0x0
    };
    pub const C_CSPlayerPawn = extern struct {
        pad_0: [0x1570]u8, // 0x0
        m_pBulletServices: [0x8]u8, // 0x1570
        m_pHostageServices: [0x8]u8, // 0x1578
        m_pBuyServices: [0x8]u8, // 0x1580
        m_pGlowServices: [0x8]u8, // 0x1588
        m_pActionTrackingServices: [0x8]u8, // 0x1590
        m_pAimPunchServices: [0x8]u8, // 0x1598
        m_pDamageReactServices: [0x8]u8, // 0x15A0
        m_flHealthShotBoostExpirationTime: [0x4]u8, // 0x15A8
        m_flLastFiredWeaponTime: [0x4]u8, // 0x15AC
        m_bHasFemaleVoice: [0x4]u8, // 0x15B0
        m_flLandingTimeSeconds: [0x4]u8, // 0x15B4
        m_flOldFallVelocity: [0x4]u8, // 0x15B8
        m_szLastPlaceName: [0x12]u8, // 0x15BC
        m_bPrevDefuser: [0x1]u8, // 0x15CE
        m_bPrevHelmet: [0x1]u8, // 0x15CF
        m_nPrevArmorVal: [0x4]u8, // 0x15D0
        m_nPrevGrenadeAmmoCount: [0x4]u8, // 0x15D4
        m_unPreviousWeaponHash: [0x4]u8, // 0x15D8
        m_unWeaponHash: [0x4]u8, // 0x15DC
        m_bInBuyZone: [0x1]u8, // 0x15E0
        m_bPreviouslyInBuyZone: [0x1]u8, // 0x15E1
        m_bInLanding: [0x2]u8, // 0x15E2
        m_flLandingStartTime: [0x4]u8, // 0x15E4
        m_bInHostageRescueZone: [0x1]u8, // 0x15E8
        m_bInBombZone: [0x1]u8, // 0x15E9
        m_bIsBuyMenuOpen: [0x2]u8, // 0x15EA
        m_flTimeOfLastInjury: [0x4]u8, // 0x15EC
        m_flNextSprayDecalTime: [0x168]u8, // 0x15F0
        m_iRetakesOffering: [0x4]u8, // 0x1758
        m_iRetakesOfferingCard: [0x4]u8, // 0x175C
        m_bRetakesHasDefuseKit: [0x1]u8, // 0x1760
        m_bRetakesMVPLastRound: [0x3]u8, // 0x1761
        m_iRetakesMVPBoostItem: [0x4]u8, // 0x1764
        m_RetakesMVPBoostExtraUtility: [0x5]u8, // 0x1768
        m_bNeedToReApplyGloves: [0x3]u8, // 0x176D
        m_EconGloves: [0x5B0]u8, // 0x1770
        m_nEconGlovesChanged: [0x1]u8, // 0x1D20
        m_bMustSyncRagdollState: [0x3]u8, // 0x1D21
        m_nRagdollDamageBone: [0x4]u8, // 0x1D24
        m_vRagdollDamageForce: [0xC]u8, // 0x1D28
        m_szRagdollDamageWeaponName: [0x40]u8, // 0x1D34
        m_bRagdollDamageHeadshot: [0x4]u8, // 0x1D74
        m_vRagdollServerOrigin: [0xC]u8, // 0x1D78
        m_lastLandTime: [0x4]u8, // 0x1D84
        m_bOnGroundLastTick: [0x20]u8, // 0x1D88
        m_hHudModelArms: [0x4]u8, // 0x1DA8
        m_qDeathEyeAngles: [0xC]u8, // 0x1DAC
        m_bLeftHanded: [0x4]u8, // 0x1DB8
        m_fSwitchedHandednessTime: [0x4]u8, // 0x1DBC
        m_flViewmodelOffsetX: [0x4]u8, // 0x1DC0
        m_flViewmodelOffsetY: [0x4]u8, // 0x1DC4
        m_flViewmodelOffsetZ: [0x4]u8, // 0x1DC8
        m_flViewmodelFOV: [0x4]u8, // 0x1DCC
        m_vecPlayerPatchEconIndices: [0x48]u8, // 0x1DD0
        m_GunGameImmunityColor: [0x50]u8, // 0x1E18
        m_vecBulletHitModels: [0x18]u8, // 0x1E68
        m_bIsWalking: [0x8]u8, // 0x1E80
        m_entitySpottedState: [0x18]u8, // 0x1E88
        m_bIsScoped: [0x1]u8, // 0x1EA0
        m_bResumeZoom: [0x1]u8, // 0x1EA1
        m_bIsDefusing: [0x1]u8, // 0x1EA2
        m_bIsGrabbingHostage: [0x1]u8, // 0x1EA3
        m_iBlockingUseActionInProgress: [0x4]u8, // 0x1EA4
        m_flEmitSoundTime: [0x4]u8, // 0x1EA8
        m_flEmitSoundTime_Client: [0x4]u8, // 0x1EAC
        m_bInNoDefuseArea: [0x4]u8, // 0x1EB0
        m_nWhichBombZone: [0x4]u8, // 0x1EB4
        m_iShotsFired: [0x4]u8, // 0x1EB8
        m_flFlinchStack: [0x4]u8, // 0x1EBC
        m_flVelocityModifier: [0x4]u8, // 0x1EC0
        m_bWaitForNoAttack: [0x4]u8, // 0x1EC4
        m_ignoreLadderJumpTime: [0x5]u8, // 0x1EC8
        m_bKilledByHeadshot: [0x3]u8, // 0x1ECD
        m_ArmorValue: [0x4]u8, // 0x1ED0
        m_unCurrentEquipmentValue: [0x2]u8, // 0x1ED4
        m_unRoundStartEquipmentValue: [0x2]u8, // 0x1ED6
        m_unFreezetimeEndEquipmentValue: [0x4]u8, // 0x1ED8
        m_nLastKillerIndex: [0x4]u8, // 0x1EDC
        m_bOldIsScoped: [0x1]u8, // 0x1EE0
        m_bHasDeathInfo: [0x3]u8, // 0x1EE1
        m_flDeathInfoTime: [0x4]u8, // 0x1EE4
        m_vecDeathInfoOrigin: [0x38]u8, // 0x1EE8
        m_grenadeParameterStashTime: [0x4]u8, // 0x1F20
        m_bGrenadeParametersStashed: [0x4]u8, // 0x1F24
        m_angStashedShootAngles: [0xC]u8, // 0x1F28
        m_vecStashedGrenadeThrowPosition: [0xC]u8, // 0x1F34
        m_vecStashedGrenadeThrowPawnCenter: [0xC]u8, // 0x1F40
        m_vecStashedVelocity: [0xC]u8, // 0x1F4C
        m_flInterpolatedInaccuracy: [0x15A8]u8, // 0x1F58
        m_bShouldAutobuyDMWeapons: [0x4]u8, // 0x3500
        m_fImmuneToGunGameDamageTime: [0x4]u8, // 0x3504
        m_bGunGameImmunity: [0x4]u8, // 0x3508
        m_fImmuneToGunGameDamageTimeLast: [0x4]u8, // 0x350C
        m_flBigHeadScale: [0x4]u8, // 0x3510
        m_fMolotovDamageTime: [0x74]u8, // 0x3514
        m_nPlayerInfernoBodyFx: [0x78]u8, // 0x3588
        m_angEyeAngles: [0x90]u8, // 0x3600
        m_arrOldEyeAnglesTimes: [0x10]u8, // 0x3690
        m_arrOldEyeAngles: [0x30]u8, // 0x36A0
        m_angEyeAnglesVelocity: [0xC]u8, // 0x36D0
        m_iIDEntIndex: [0x4]u8, // 0x36DC
        m_delayTargetIDTimer: [0x18]u8, // 0x36E0
        m_iTargetItemEntIdx: [0x4]u8, // 0x36F8
        m_iOldIDEntIndex: [0x4]u8, // 0x36FC
        m_holdTargetIDTimer: [0x20]u8, // 0x3700
    };
    pub const C_CSGO_TeamIntroTerroristPosition = extern struct {
        pad_0: [0x1D18]u8, // 0x0
    };
    pub const CPulseCell_WaitForCursorsWithTagBase = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_nCursorsAllowedToWait: [0x8]u8, // 0xD8
        m_WaitComplete: [0x48]u8, // 0xE0
    };
    pub const C_Hostage = extern struct {
        pad_0: [0x12F0]u8, // 0x0
        m_entitySpottedState: [0x18]u8, // 0x12F0
        m_leader: [0x8]u8, // 0x1308
        m_reuseTimer: [0x18]u8, // 0x1310
        m_vel: [0xC]u8, // 0x1328
        m_isRescued: [0x1]u8, // 0x1334
        m_jumpedThisFrame: [0x3]u8, // 0x1335
        m_nHostageState: [0x4]u8, // 0x1338
        m_bHandsHaveBeenCut: [0x4]u8, // 0x133C
        m_hHostageGrabber: [0x4]u8, // 0x1340
        m_fLastGrabTime: [0x4]u8, // 0x1344
        m_vecGrabbedPos: [0xC]u8, // 0x1348
        m_flRescueStartTime: [0x4]u8, // 0x1354
        m_flGrabSuccessTime: [0x4]u8, // 0x1358
        m_flDropStartTime: [0x4]u8, // 0x135C
        m_flDeadOrRescuedTime: [0x8]u8, // 0x1360
        m_blinkTimer: [0x18]u8, // 0x1368
        m_lookAt: [0x10]u8, // 0x1380
        m_lookAroundTimer: [0x18]u8, // 0x1390
        m_isInit: [0x1]u8, // 0x13A8
        m_eyeAttachment: [0x1]u8, // 0x13A9
        m_chestAttachment: [0x6]u8, // 0x13AA
        m_pPredictionOwner: [0x8]u8, // 0x13B0
        m_fNewestAlphaThinkTime: [0x8]u8, // 0x13B8
    };
    pub const C_fogplayerparams_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_hCtrl: [0x4]u8, // 0x8
        m_flTransitionTime: [0x4]u8, // 0xC
        m_OldColor: [0x4]u8, // 0x10
        m_flOldStart: [0x4]u8, // 0x14
        m_flOldEnd: [0x4]u8, // 0x18
        m_flOldMaxDensity: [0x4]u8, // 0x1C
        m_flOldHDRColorScale: [0x4]u8, // 0x20
        m_flOldFarZ: [0x4]u8, // 0x24
        m_NewColor: [0x4]u8, // 0x28
        m_flNewStart: [0x4]u8, // 0x2C
        m_flNewEnd: [0x4]u8, // 0x30
        m_flNewMaxDensity: [0x4]u8, // 0x34
        m_flNewHDRColorScale: [0x4]u8, // 0x38
        m_flNewFarZ: [0x4]u8, // 0x3C
    };
    pub const CGameSceneNode = extern struct {
        m_bDirtyHierarchy: [0x10]u8, // 0x0
        m_nodeToWorld: [0x20]u8, // 0x10
        m_pOwner: [0x8]u8, // 0x30
        m_pParent: [0x8]u8, // 0x38
        m_pChild: [0x8]u8, // 0x40
        m_pNextSibling: [0x28]u8, // 0x48
        m_hParent: [0x10]u8, // 0x70
        m_vecOrigin: [0x38]u8, // 0x80
        m_angRotation: [0xC]u8, // 0xB8
        m_flScale: [0x4]u8, // 0xC4
        m_vecAbsOrigin: [0xC]u8, // 0xC8
        m_angAbsRotation: [0xC]u8, // 0xD4
        m_flAbsScale: [0x4]u8, // 0xE0
        m_vecWrappedLocalOrigin: [0xC]u8, // 0xE4
        m_angWrappedLocalRotation: [0xC]u8, // 0xF0
        m_flWrappedScale: [0x4]u8, // 0xFC
        m_nParentAttachmentOrBone: [0x2]u8, // 0x100
        m_bDebugAbsOriginChanges: [0x1]u8, // 0x102
        m_bDormant: [0x1]u8, // 0x103
        m_bForceParentToBeNetworked: [0x3]u8, // 0x104
        m_nHierarchicalDepth: [0x1]u8, // 0x107
        m_nHierarchyType: [0x1]u8, // 0x108
        m_nDoNotSetAnimTimeInInvalidatePhysicsCount: [0x3]u8, // 0x109
        m_name: [0x14]u8, // 0x10C
        m_hierarchyAttachName: [0x4]u8, // 0x120
        m_flClientLocalScale: [0xC]u8, // 0x124
    };
    pub const CPlayer_ObserverServices = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_iObserverMode: [0x4]u8, // 0x48
        m_hObserverTarget: [0x4]u8, // 0x4C
        m_iObserverLastMode: [0x4]u8, // 0x50
        m_bForcedObserverMode: [0x4]u8, // 0x54
        m_flObserverChaseDistance: [0x4]u8, // 0x58
        m_flObserverChaseDistanceCalcTime: [0x4]u8, // 0x5C
    };
    pub const CCashStack = extern struct {
        pad_0: [0x1098]u8, // 0x0
        m_nCashStackValue: [0x8]u8, // 0x1098
    };
    pub const C_SoundAreaEntityBase = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_bDisabled: [0x8]u8, // 0x600
        m_bWasEnabled: [0x8]u8, // 0x608
        m_iszSoundAreaType: [0x8]u8, // 0x610
        m_vPos: [0x10]u8, // 0x618
    };
    pub const C_PlayerVisibility = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_flVisibilityStrength: [0x4]u8, // 0x600
        m_flFogDistanceMultiplier: [0x4]u8, // 0x604
        m_flFogMaxDensityMultiplier: [0x4]u8, // 0x608
        m_flFadeTime: [0x4]u8, // 0x60C
        m_bStartDisabled: [0x1]u8, // 0x610
        m_bIsEnabled: [0x1F]u8, // 0x611
    };
    pub const CAttributeManager__cached_attribute_float_t = extern struct {
        flIn: [0x8]u8, // 0x0
        iAttribHook: [0x8]u8, // 0x8
        flOut: [0x8]u8, // 0x10
    };
    pub const C_BasePlayerWeapon = extern struct {
        pad_0: [0x1918]u8, // 0x0
        m_nNextPrimaryAttackTick: [0x4]u8, // 0x1918
        m_flNextPrimaryAttackTickRatio: [0x4]u8, // 0x191C
        m_nNextSecondaryAttackTick: [0x4]u8, // 0x1920
        m_flNextSecondaryAttackTickRatio: [0x4]u8, // 0x1924
        m_iClip1: [0x4]u8, // 0x1928
        m_iClip2: [0x4]u8, // 0x192C
        m_pReserveAmmo: [0x20]u8, // 0x1930
    };
    pub const CRagdollManager = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_iCurrentMaxRagdollCount: [0x8]u8, // 0x600
    };
    pub const CSoundOpvarSetBoxEntity = extern struct {
        pad_0: [0x620]u8, // 0x0
    };
    pub const C_HEGrenade = extern struct {
        pad_0: [0x1FE0]u8, // 0x0
    };
    pub const C_EnvSky = extern struct {
        pad_0: [0x1098]u8, // 0x0
        m_hSkyMaterial: [0x8]u8, // 0x1098
        m_hSkyMaterialLightingOnly: [0x8]u8, // 0x10A0
        m_bStartDisabled: [0x4]u8, // 0x10A8
        m_vTintColor: [0x4]u8, // 0x10AC
        m_vTintColorLightingOnly: [0x4]u8, // 0x10B0
        m_flBrightnessScale: [0x4]u8, // 0x10B4
        m_nFogType: [0x4]u8, // 0x10B8
        m_flFogMinStart: [0x4]u8, // 0x10BC
        m_flFogMinEnd: [0x4]u8, // 0x10C0
        m_flFogMaxStart: [0x4]u8, // 0x10C4
        m_flFogMaxEnd: [0x4]u8, // 0x10C8
        m_bEnabled: [0x2C]u8, // 0x10CC
    };
    pub const CPulse_InvokeBinding = extern struct {
        m_RegisterMap: [0x30]u8, // 0x0
        m_FuncName: [0x10]u8, // 0x30
        m_nCellIndex: [0x4]u8, // 0x40
        m_nSrcChunk: [0x4]u8, // 0x44
        m_nSrcInstruction: [0x68]u8, // 0x48
    };
    pub const C_GameRules = extern struct {
        pad_0: [0x8]u8, // 0x0
        __m_pChainEntity: [0x28]u8, // 0x8
        m_nTotalPausedTicks: [0x4]u8, // 0x30
        m_nPauseStartTick: [0x4]u8, // 0x34
        m_bGamePaused: [0x8]u8, // 0x38
    };
    pub const C_WeaponMAC10 = extern struct {
        pad_0: [0x1F50]u8, // 0x0
    };
    pub const C_CSGO_MapPreviewCameraPath = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_flZFar: [0x4]u8, // 0x600
        m_flZNear: [0x4]u8, // 0x604
        m_bLoop: [0x1]u8, // 0x608
        m_bVerticalFOV: [0x1]u8, // 0x609
        m_bConstantSpeed: [0x2]u8, // 0x60A
        m_flDuration: [0x44]u8, // 0x60C
        m_flPathLength: [0x4]u8, // 0x650
        m_flPathDuration: [0x18]u8, // 0x654
        m_bDofEnabled: [0x4]u8, // 0x66C
        m_flDofNearBlurry: [0x4]u8, // 0x670
        m_flDofNearCrisp: [0x4]u8, // 0x674
        m_flDofFarCrisp: [0x4]u8, // 0x678
        m_flDofFarBlurry: [0x4]u8, // 0x67C
        m_flDofTiltToGround: [0x8]u8, // 0x680
    };
    pub const C_PointWorldText = extern struct {
        pad_0: [0x10A0]u8, // 0x0
        m_bForceRecreateNextUpdate: [0x18]u8, // 0x10A0
        m_nTextWidthPx: [0x4]u8, // 0x10B8
        m_nTextHeightPx: [0x4]u8, // 0x10BC
        m_messageText: [0x200]u8, // 0x10C0
        m_FontName: [0x40]u8, // 0x12C0
        m_BackgroundMaterialName: [0x40]u8, // 0x1300
        m_bEnabled: [0x1]u8, // 0x1340
        m_bFullbright: [0x3]u8, // 0x1341
        m_flWorldUnitsPerPx: [0x4]u8, // 0x1344
        m_flFontSize: [0x4]u8, // 0x1348
        m_flDepthOffset: [0x4]u8, // 0x134C
        m_bDrawBackground: [0x4]u8, // 0x1350
        m_flBackgroundBorderWidth: [0x4]u8, // 0x1354
        m_flBackgroundBorderHeight: [0x4]u8, // 0x1358
        m_flBackgroundWorldToUV: [0x4]u8, // 0x135C
        m_Color: [0x4]u8, // 0x1360
        m_nJustifyHorizontal: [0x4]u8, // 0x1364
        m_nJustifyVertical: [0x4]u8, // 0x1368
        m_nReorientMode: [0x4]u8, // 0x136C
    };
    pub const C_RopeKeyframe = extern struct {
        m_bEndPointAttachmentPositionsDirty: [0x10A0]u8, // 0x0
        m_LinksTouchingSomething: [0x4]u8, // 0x10A0
        m_nLinksTouchingSomething: [0x4]u8, // 0x10A4
        m_bApplyWind: [0x4]u8, // 0x10A8
        m_fPrevLockedPoints: [0x4]u8, // 0x10AC
        m_iForcePointMoveCounter: [0x4]u8, // 0x10B0
        m_bPrevEndPointPos: [0x4]u8, // 0x10B4
        m_vPrevEndPointPos: [0x18]u8, // 0x10B8
        m_flCurScroll: [0x4]u8, // 0x10D0
        m_flScrollSpeed: [0x4]u8, // 0x10D4
        m_RopeFlags: [0x8]u8, // 0x10D8
        m_iRopeMaterialModelIndex: [0x278]u8, // 0x10E0
        m_nSegments: [0x4]u8, // 0x1358
        m_hStartPoint: [0x4]u8, // 0x135C
        m_hEndPoint: [0x4]u8, // 0x1360
        m_iStartAttachment: [0x1]u8, // 0x1364
        m_iEndAttachment: [0x1]u8, // 0x1365
        m_Subdiv: [0x2]u8, // 0x1366
        m_RopeLength: [0x2]u8, // 0x1368
        m_Slack: [0x2]u8, // 0x136A
        m_TextureScale: [0x4]u8, // 0x136C
        m_fLockedPoints: [0x1]u8, // 0x1370
        m_nChangeCount: [0x3]u8, // 0x1371
        m_Width: [0x4]u8, // 0x1374
        m_PhysicsDelegate: [0x10]u8, // 0x1378
        m_hMaterial: [0x8]u8, // 0x1388
        m_TextureHeight: [0x4]u8, // 0x1390
        m_vecImpulse: [0xC]u8, // 0x1394
        m_vecPreviousImpulse: [0xC]u8, // 0x13A0
        m_flCurrentGustTimer: [0x4]u8, // 0x13AC
        m_flCurrentGustLifetime: [0x4]u8, // 0x13B0
        m_flTimeToNextGust: [0x4]u8, // 0x13B4
        m_vWindDir: [0xC]u8, // 0x13B8
        m_vColorMod: [0xC]u8, // 0x13C4
        m_vCachedEndPointAttachmentPos: [0x18]u8, // 0x13D0
        m_vCachedEndPointAttachmentAngle: [0x18]u8, // 0x13E8
        m_bConstrainBetweenEndpoints: [0x8]u8, // 0x1400
    };
    pub const C_BaseToggle = extern struct {
        pad_0: [0x1098]u8, // 0x0
    };
    pub const C_EnvCubemapBox = extern struct {
        pad_0: [0x6E8]u8, // 0x0
    };
    pub const C_EnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume = extern struct {
        pad_0: [0x7D8]u8, // 0x0
    };
    pub const C_RopeKeyframe__CPhysicsDelegate = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_pKeyframe: [0x8]u8, // 0x8
    };
    pub const CInfoDynamicShadowHint = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_bDisabled: [0x4]u8, // 0x600
        m_flRange: [0x4]u8, // 0x604
        m_nImportance: [0x4]u8, // 0x608
        m_nLightChoice: [0x4]u8, // 0x60C
        m_hLight: [0x8]u8, // 0x610
    };
    pub const CPathNode = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_vInTangentLocal: [0xC]u8, // 0x600
        m_vOutTangentLocal: [0xC]u8, // 0x60C
        m_strParentPathUniqueID: [0x8]u8, // 0x618
        m_strPathNodeParameter: [0x10]u8, // 0x620
        m_xWSPrevParent: [0x20]u8, // 0x630
        m_hPath: [0x10]u8, // 0x650
    };
    pub const C_FuncMoveLinear = extern struct {
        pad_0: [0x1098]u8, // 0x0
    };
    pub const C_EnvShakeVolume = extern struct {
        pad_0: [0x618]u8, // 0x0
        m_vBoxMins: [0xC]u8, // 0x618
        m_vBoxMaxs: [0xC]u8, // 0x624
        m_flAmplitude: [0x4]u8, // 0x630
        m_flFrequency: [0x4]u8, // 0x634
        m_flFalloffDistance: [0x4]u8, // 0x638
        m_flRollScale: [0x14]u8, // 0x63C
    };
    pub const CServerOnlyModelEntity = extern struct {
        pad_0: [0x1098]u8, // 0x0
    };
    pub const C_CSGO_TeamSelectCamera = extern struct {
        pad_0: [0x690]u8, // 0x0
    };
    pub const CPulseCell_IntervalTimer = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_Completed: [0x48]u8, // 0xD8
        m_OnInterval: [0x48]u8, // 0x120
    };
    pub const C_WeaponXM1014 = extern struct {
        pad_0: [0x1F20]u8, // 0x0
    };
    pub const C_WorldModelGloves = extern struct {
        pad_0: [0x1270]u8, // 0x0
    };
    pub const C_PhysicsPropMultiplayer = extern struct {
        pad_0: [0x13F0]u8, // 0x0
    };
    pub const C_SoundEventOBBEntity = extern struct {
        pad_0: [0x6C0]u8, // 0x0
        m_vMins: [0xC]u8, // 0x6C0
        m_vMaxs: [0x1C]u8, // 0x6CC
    };
    pub const CPulseCell_BaseLerp = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_WakeResume: [0x48]u8, // 0xD8
    };
    pub const C_WeaponAug = extern struct {
        pad_0: [0x1F50]u8, // 0x0
    };
    pub const C_BasePropDoor = extern struct {
        pad_0: [0x14C0]u8, // 0x0
        m_eDoorState: [0x4]u8, // 0x14C0
        m_modelChanged: [0x1]u8, // 0x14C4
        m_bLocked: [0x1]u8, // 0x14C5
        m_bNoNPCs: [0x2]u8, // 0x14C6
        m_closedPosition: [0xC]u8, // 0x14C8
        m_closedAngles: [0xC]u8, // 0x14D4
        m_hMaster: [0x4]u8, // 0x14E0
        m_vWhereToSetLightingOrigin: [0xC]u8, // 0x14E4
    };
    pub const CChoreoInfoTarget = extern struct {
        pad_0: [0x600]u8, // 0x0
    };
    pub const CNetworkedSequenceOperation = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_hSequence: [0x4]u8, // 0x8
        m_flPrevCycle: [0x4]u8, // 0xC
        m_flCycle: [0x4]u8, // 0x10
        m_flWeight: [0x8]u8, // 0x14
        m_bSequenceChangeNetworked: [0x1]u8, // 0x1C
        m_bDiscontinuity: [0x3]u8, // 0x1D
        m_flPrevCycleFromDiscontinuity: [0x4]u8, // 0x20
        m_flPrevCycleForAnimEventDetection: [0x4]u8, // 0x24
    };
    pub const C_Item_Healthshot = extern struct {
        pad_0: [0x1F30]u8, // 0x0
    };
    pub const CCSCustomHudLayout = extern struct {
        pad_0: [0x618]u8, // 0x0
        m_strLayout: [0x8]u8, // 0x618
        m_bObservable: [0x8]u8, // 0x620
        m_vecPlayerLayoutStates: [0x68]u8, // 0x628
        m_globalLayoutState: [0x108]u8, // 0x690
        m_vecPanelIds: [0x18]u8, // 0x798
        m_vecClassNames: [0x18]u8, // 0x7B0
        m_vecDialogVariableNames: [0x78]u8, // 0x7C8
    };
    pub const CEntityInstance = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_iszPrivateVScripts: [0x8]u8, // 0x8
        m_pEntity: [0x18]u8, // 0x10
        m_CScriptComponent: [0x8]u8, // 0x28
    };
    pub const C_BaseModelEntity = extern struct {
        pad_0: [0xAF8]u8, // 0x0
        m_CRenderComponent: [0x8]u8, // 0xAF8
        m_CHitboxComponent: [0x18]u8, // 0xB00
        m_pChoreoComponent: [0x8]u8, // 0xB18
        m_nDestructiblePartInitialStateDestructed0: [0x4]u8, // 0xB20
        m_nDestructiblePartInitialStateDestructed1: [0x4]u8, // 0xB24
        m_nDestructiblePartInitialStateDestructed2: [0x4]u8, // 0xB28
        m_nDestructiblePartInitialStateDestructed3: [0x4]u8, // 0xB2C
        m_nDestructiblePartInitialStateDestructed4: [0x4]u8, // 0xB30
        m_nDestructiblePartInitialStateDestructed0_PartIndex: [0x4]u8, // 0xB34
        m_nDestructiblePartInitialStateDestructed1_PartIndex: [0x4]u8, // 0xB38
        m_nDestructiblePartInitialStateDestructed2_PartIndex: [0x4]u8, // 0xB3C
        m_nDestructiblePartInitialStateDestructed3_PartIndex: [0x4]u8, // 0xB40
        m_nDestructiblePartInitialStateDestructed4_PartIndex: [0x4]u8, // 0xB44
        m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces: [0x1]u8, // 0xB48
        m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces: [0x1]u8, // 0xB49
        m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces: [0x1]u8, // 0xB4A
        m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces: [0x1]u8, // 0xB4B
        m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces: [0x4]u8, // 0xB4C
        m_pDestructiblePartsSystemComponent: [0x128]u8, // 0xB50
        m_bInitModelEffects: [0x1]u8, // 0xC78
        m_bDoingModelEffects: [0x3]u8, // 0xC79
        m_iOldHealth: [0x4]u8, // 0xC7C
        m_nRenderMode: [0x1]u8, // 0xC80
        m_nRenderFX: [0x1]u8, // 0xC81
        m_bAllowFadeInView: [0x1E]u8, // 0xC82
        m_clrRender: [0x8]u8, // 0xCA0
        m_vecRenderAttributes: [0x80]u8, // 0xCA8
        m_bRenderToCubemaps: [0x1]u8, // 0xD28
        m_bExpandRenderBoundsToIncludeCloth: [0x1]u8, // 0xD29
        m_bNoInterpolate: [0x6]u8, // 0xD2A
        m_Collision: [0xB8]u8, // 0xD30
        m_Glow: [0x58]u8, // 0xDE8
        m_flGlowBackfaceMult: [0x4]u8, // 0xE40
        m_fadeMinDist: [0x4]u8, // 0xE44
        m_fadeMaxDist: [0x4]u8, // 0xE48
        m_flFadeScale: [0x4]u8, // 0xE4C
        m_flShadowStrength: [0x4]u8, // 0xE50
        m_nObjectCulling: [0x1]u8, // 0xE54
        m_nRequiredDecalRtEncoding: [0x3]u8, // 0xE55
        m_bodyGroupTotalRequestCount: [0x8]u8, // 0xE58
        m_bodyGroupRequests: [0xD8]u8, // 0xE60
        m_bodyGroupChoices: [0x28]u8, // 0xF38
        m_vecViewOffset: [0xE0]u8, // 0xF60
        m_pClientAlphaProperty: [0x8]u8, // 0x1040
        m_ClientOverrideTint: [0x4]u8, // 0x1048
        m_bUseClientOverrideTint: [0x3C]u8, // 0x104C
        m_bvDisabledHitGroups: [0x10]u8, // 0x1088
    };
    pub const CCSPlayer_BulletServices = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_totalHitsOnServer: [0x60]u8, // 0x48
    };
    pub const C_SoundOpvarSetAutoRoomEntity = extern struct {
        pad_0: [0x620]u8, // 0x0
    };
    pub const C_EnvCombinedLightProbeVolume = extern struct {
        pad_0: [0x718]u8, // 0x0
        m_Entity_Color: [0x4]u8, // 0x718
        m_Entity_flBrightness: [0x4]u8, // 0x71C
        m_Entity_hCubemapTexture: [0x8]u8, // 0x720
        m_Entity_bCustomCubemapTexture: [0x8]u8, // 0x728
        m_Entity_hLightProbeTexture_AmbientCube: [0x8]u8, // 0x730
        m_Entity_hLightProbeTexture_SDF: [0x8]u8, // 0x738
        m_Entity_hLightProbeTexture_SH2_DC: [0x8]u8, // 0x740
        m_Entity_hLightProbeTexture_SH2_L1: [0x8]u8, // 0x748
        m_Entity_hLightProbeDirectLightIndicesTexture: [0x8]u8, // 0x750
        m_Entity_hLightProbeDirectLightScalarsTexture: [0x8]u8, // 0x758
        m_Entity_hLightProbeDirectLightShadowsTexture: [0x8]u8, // 0x760
        m_Entity_vBoxMins: [0xC]u8, // 0x768
        m_Entity_vBoxMaxs: [0xC]u8, // 0x774
        m_Entity_bMoveable: [0x4]u8, // 0x780
        m_Entity_nHandshake: [0x4]u8, // 0x784
        m_Entity_nEnvCubeMapArrayIndex: [0x4]u8, // 0x788
        m_Entity_nPriority: [0x4]u8, // 0x78C
        m_Entity_bStartDisabled: [0x4]u8, // 0x790
        m_Entity_flEdgeFadeDist: [0x4]u8, // 0x794
        m_Entity_vEdgeFadeDists: [0xC]u8, // 0x798
        m_Entity_nLightProbeSizeX: [0x4]u8, // 0x7A4
        m_Entity_nLightProbeSizeY: [0x4]u8, // 0x7A8
        m_Entity_nLightProbeSizeZ: [0x4]u8, // 0x7AC
        m_Entity_nLightProbeAtlasX: [0x4]u8, // 0x7B0
        m_Entity_nLightProbeAtlasY: [0x4]u8, // 0x7B4
        m_Entity_nLightProbeAtlasZ: [0x19]u8, // 0x7B8
        m_Entity_bEnabled: [0x7]u8, // 0x7D1
    };
    pub const CCSGO_EndOfMatchLineupEnd = extern struct {
        pad_0: [0x600]u8, // 0x0
    };
    pub const C_MultiplayRules = extern struct {
        pad_0: [0x40]u8, // 0x0
    };
    pub const CPlayer_AutoaimServices = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const C_LightDirectionalEntity = extern struct {
        pad_0: [0x10A0]u8, // 0x0
    };
    pub const C_BaseEntity = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_CBodyComponent: [0x8]u8, // 0x30
        m_NetworkTransmitComponent: [0x2F0]u8, // 0x38
        m_nLastThinkTick: [0x8]u8, // 0x328
        m_pGameSceneNode: [0x8]u8, // 0x330
        m_pRenderComponent: [0x8]u8, // 0x338
        m_pCollision: [0x8]u8, // 0x340
        m_iMaxHealth: [0x4]u8, // 0x348
        m_iHealth: [0x4]u8, // 0x34C
        m_flDamageAccumulator: [0x4]u8, // 0x350
        m_lifeState: [0x1]u8, // 0x354
        m_bTakesDamage: [0x3]u8, // 0x355
        m_nTakeDamageFlags: [0x8]u8, // 0x358
        m_nPlatformType: [0x1]u8, // 0x360
        m_ubInterpolationFrame: [0x3]u8, // 0x361
        m_hSceneObjectController: [0x4]u8, // 0x364
        m_nNoInterpolationTick: [0x4]u8, // 0x368
        m_nVisibilityNoInterpolationTick: [0x4]u8, // 0x36C
        m_flProxyRandomValue: [0x4]u8, // 0x370
        m_iEFlags: [0x4]u8, // 0x374
        m_nWaterType: [0x1]u8, // 0x378
        m_bInterpolateEvenWithNoModel: [0x1]u8, // 0x379
        m_bPredictionEligible: [0x1]u8, // 0x37A
        m_bApplyLayerMatchIDToModel: [0x1]u8, // 0x37B
        m_tokLayerMatchID: [0x4]u8, // 0x37C
        m_nSubclassID: [0x10]u8, // 0x380
        m_nSimulationTick: [0x4]u8, // 0x390
        m_iCurrentThinkContext: [0x4]u8, // 0x394
        m_aThinkFunctions: [0x18]u8, // 0x398
        m_bDisabledContextThinks: [0x4]u8, // 0x3B0
        m_flAnimTime: [0x4]u8, // 0x3B4
        m_flSimulationTime: [0x4]u8, // 0x3B8
        m_nSceneObjectOverrideFlags: [0x1]u8, // 0x3BC
        m_bHasSuccessfullyInterpolated: [0x1]u8, // 0x3BD
        m_bHasAddedVarsToInterpolation: [0x1]u8, // 0x3BE
        m_bRenderEvenWhenNotSuccessfullyInterpolated: [0x1]u8, // 0x3BF
        m_nInterpolationLatchDirtyFlags: [0x8]u8, // 0x3C0
        m_ListEntry: [0x18]u8, // 0x3C8
        m_flCreateTime: [0x4]u8, // 0x3E0
        m_EntClientFlags: [0x2]u8, // 0x3E4
        m_bClientSideRagdoll: [0x1]u8, // 0x3E6
        m_iTeamNum: [0x1]u8, // 0x3E7
        m_spawnflags: [0x4]u8, // 0x3E8
        m_nNextThinkTick: [0x8]u8, // 0x3EC
        m_fFlags: [0x4]u8, // 0x3F4
        m_vecAbsVelocity: [0xC]u8, // 0x3F8
        m_vecServerVelocity: [0x2C]u8, // 0x404
        m_vecVelocity: [0xE0]u8, // 0x430
        m_vecBaseVelocity: [0xC]u8, // 0x510
        m_hEffectEntity: [0x4]u8, // 0x51C
        m_hOwnerEntity: [0x4]u8, // 0x520
        m_MoveCollide: [0x1]u8, // 0x524
        m_MoveType: [0x1]u8, // 0x525
        m_nActualMoveType: [0x2]u8, // 0x526
        m_flWaterLevel: [0x4]u8, // 0x528
        m_fEffects: [0x4]u8, // 0x52C
        m_hGroundEntity: [0x4]u8, // 0x530
        m_nGroundBodyIndex: [0x4]u8, // 0x534
        m_flFriction: [0x4]u8, // 0x538
        m_flElasticity: [0x4]u8, // 0x53C
        m_flGravityScale: [0x4]u8, // 0x540
        m_flTimeScale: [0x4]u8, // 0x544
        m_bAnimatedEveryTick: [0x1]u8, // 0x548
        m_bGravityDisabled: [0x3]u8, // 0x549
        m_flNavIgnoreUntilTime: [0x4]u8, // 0x54C
        m_hThink: [0x10]u8, // 0x550
        m_fBBoxVisFlags: [0x4]u8, // 0x560
        m_flActualGravityScale: [0x4]u8, // 0x564
        m_bGravityActuallyDisabled: [0x1]u8, // 0x568
        m_bPredictable: [0x1]u8, // 0x569
        m_bRenderWithViewModels: [0x2]u8, // 0x56A
        m_nFirstPredictableCommand: [0x4]u8, // 0x56C
        m_nLastPredictableCommand: [0x4]u8, // 0x570
        m_hOldMoveParent: [0x4]u8, // 0x574
        m_Particles: [0x30]u8, // 0x578
        m_vecAngVelocity: [0xC]u8, // 0x5A8
        m_DataChangeEventRef: [0x4]u8, // 0x5B4
        m_dependencies: [0x18]u8, // 0x5B8
        m_nCreationTick: [0x11]u8, // 0x5D0
        m_bAnimTimeChanged: [0x1]u8, // 0x5E1
        m_bSimulationTimeChanged: [0xE]u8, // 0x5E2
        m_sUniqueHammerID: [0x8]u8, // 0x5F0
        m_nBloodType: [0x8]u8, // 0x5F8
    };
    pub const ActiveModelConfig_t = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_Handle: [0x8]u8, // 0x30
        m_Name: [0x8]u8, // 0x38
        m_AssociatedEntities: [0x18]u8, // 0x40
        m_AssociatedEntityNames: [0x18]u8, // 0x58
    };
    pub const C_WeaponSSG08 = extern struct {
        pad_0: [0x1F50]u8, // 0x0
    };
    pub const CPulseCell_Value_Curve = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_Curve: [0x40]u8, // 0x48
    };
    pub const C_Chicken = extern struct {
        pad_0: [0x14C0]u8, // 0x0
        m_leader: [0x4]u8, // 0x14C0
        m_owner: [0x4]u8, // 0x14C4
        m_AttributeManager: [0x610]u8, // 0x14C8
        m_bAttributesInitialized: [0x4]u8, // 0x1AD8
        m_hWaterWakeParticles: [0x4]u8, // 0x1ADC
        m_bIsPreviewModel: [0x88]u8, // 0x1AE0
        m_bSpawnDyingParticles: [0x38]u8, // 0x1B68
    };
    pub const C_BasePlayerPawn = extern struct {
        pad_0: [0x12F0]u8, // 0x0
        m_pWeaponServices: [0x8]u8, // 0x12F0
        m_pItemServices: [0x8]u8, // 0x12F8
        m_pAutoaimServices: [0x8]u8, // 0x1300
        m_pObserverServices: [0x8]u8, // 0x1308
        m_pWaterServices: [0x8]u8, // 0x1310
        m_pUseServices: [0x8]u8, // 0x1318
        m_pFlashlightServices: [0x8]u8, // 0x1320
        m_pCameraServices: [0x8]u8, // 0x1328
        m_pMovementServices: [0x10]u8, // 0x1330
        m_ServerViewAngleChanges: [0x68]u8, // 0x1340
        v_angle: [0xC]u8, // 0x13A8
        v_anglePrevious: [0xC]u8, // 0x13B4
        m_iHideHUD: [0x8]u8, // 0x13C0
        m_skybox3d: [0x90]u8, // 0x13C8
        m_flDeathTime: [0x8]u8, // 0x1458
        m_vecPredictionError: [0xC]u8, // 0x1460
        m_flPredictionErrorTime: [0x20]u8, // 0x146C
        m_vecLastCameraSetupLocalOrigin: [0xC]u8, // 0x148C
        m_flLastCameraSetupTime: [0x4]u8, // 0x1498
        m_flFOVSensitivityAdjust: [0x4]u8, // 0x149C
        m_flMouseSensitivity: [0x4]u8, // 0x14A0
        m_vOldOrigin: [0xC]u8, // 0x14A4
        m_flOldSimulationTime: [0x4]u8, // 0x14B0
        m_nLastExecutedCommandNumber: [0x4]u8, // 0x14B4
        m_nLastExecutedCommandTick: [0x4]u8, // 0x14B8
        m_hController: [0x4]u8, // 0x14BC
        m_hDefaultController: [0x4]u8, // 0x14C0
        m_bIsSwappingToPredictableController: [0x4]u8, // 0x14C4
    };
    pub const C_SoundOpvarSetAABBEntity = extern struct {
        pad_0: [0x620]u8, // 0x0
    };
    pub const C_WeaponBizon = extern struct {
        pad_0: [0x1F50]u8, // 0x0
    };
    pub const C_StattrakModule = extern struct {
        pad_0: [0x1270]u8, // 0x0
        m_bKnife: [0x8]u8, // 0x1270
    };
    pub const CCSObserver_CameraServices = extern struct {
        pad_0: [0x2B0]u8, // 0x0
        m_hPrevPostProcessingVolume: [0x8]u8, // 0x2B0
    };
    pub const CEnvSoundscapeProxy = extern struct {
        pad_0: [0x690]u8, // 0x0
        m_MainSoundscapeName: [0x8]u8, // 0x690
    };
    pub const C_SoundEventEntity = extern struct {
        m_bClientSideOnly: [0x600]u8, // 0x0
        m_bStartOnSpawn: [0x1]u8, // 0x600
        m_bToLocalPlayer: [0x1]u8, // 0x601
        m_bStopOnNew: [0x1]u8, // 0x602
        m_bSaveRestore: [0x1]u8, // 0x603
        m_bSavedIsPlaying: [0x4]u8, // 0x604
        m_flSavedElapsedTime: [0x8]u8, // 0x608
        m_iszSourceEntityName: [0x8]u8, // 0x610
        m_iszAttachmentName: [0x8]u8, // 0x618
        m_onGUIDChanged: [0x30]u8, // 0x620
        m_onSoundFinished: [0x18]u8, // 0x650
        m_flClientCullRadius: [0x30]u8, // 0x668
        m_iszSoundName: [0x1C]u8, // 0x698
        m_hSource: [0x4]u8, // 0x6B4
        m_nEntityIndexSelection: [0x8]u8, // 0x6B8
    };
    pub const CPulseCell_Inflow_EventHandler = extern struct {
        pad_0: [0x80]u8, // 0x0
        m_EventName: [0x10]u8, // 0x80
    };
    pub const C_LightOrthoEntity = extern struct {
        pad_0: [0x10A0]u8, // 0x0
    };
    pub const CPulseCell_BaseFlow = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CBombTarget = extern struct {
        pad_0: [0x1180]u8, // 0x0
        m_bBombPlantedHere: [0x8]u8, // 0x1180
    };
    pub const C_Knife = extern struct {
        pad_0: [0x1F20]u8, // 0x0
        m_bFirstAttack: [0x10]u8, // 0x1F20
    };
    pub const C_CSGO_TerroristWingmanIntroCamera = extern struct {
        pad_0: [0x690]u8, // 0x0
    };
    pub const CSkeletonInstance = extern struct {
        pad_0: [0x140]u8, // 0x0
        m_modelState: [0x2B0]u8, // 0x140
        m_bUseParentRenderBounds: [0x1]u8, // 0x3F0
        m_bDisableSolidCollisionsForHierarchy: [0x1]u8, // 0x3F1
        m_bDirtyMotionType: [0x1]u8, // 0x3F2
        m_bIsGeneratingLatchedParentSpaceState: [0x5]u8, // 0x3F3
        m_materialGroup: [0x4]u8, // 0x3F8
        m_nHitboxSet: [0x94]u8, // 0x3FC
    };
    pub const CEntityComponent = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const C_ItemDogtags = extern struct {
        pad_0: [0x1A18]u8, // 0x0
        m_OwningPlayer: [0x4]u8, // 0x1A18
        m_KillingPlayer: [0x4]u8, // 0x1A1C
    };
    pub const C_LateUpdatedAnimating = extern struct {
        pad_0: [0x1320]u8, // 0x0
    };
    pub const C_CSGO_TeamPreviewCameraBone = extern struct {
        pad_0: [0x690]u8, // 0x0
    };
    pub const CPulseCell_Outflow_CycleShuffled__InstanceState_t = extern struct {
        m_Shuffle: [0x20]u8, // 0x0
        m_nNextShuffle: [0x8]u8, // 0x20
    };
    pub const CPulseCell_BaseLerp__CursorState_t = extern struct {
        m_StartTime: [0x4]u8, // 0x0
        m_EndTime: [0x4]u8, // 0x4
    };
    pub const C_BaseClientUIEntity = extern struct {
        pad_0: [0x10A0]u8, // 0x0
        m_bEnabled: [0x8]u8, // 0x10A0
        m_DialogXMLName: [0x8]u8, // 0x10A8
        m_PanelClassName: [0x8]u8, // 0x10B0
        m_PanelID: [0x10]u8, // 0x10B8
    };
    pub const C_WeaponUSPSilencer = extern struct {
        pad_0: [0x1F50]u8, // 0x0
    };
    pub const C_MolotovProjectile = extern struct {
        pad_0: [0x1348]u8, // 0x0
        m_bIsIncGrenade: [0x28]u8, // 0x1348
    };
    pub const C_TriggerLerpObject = extern struct {
        pad_0: [0x1180]u8, // 0x0
    };
    pub const C_WeaponRevolver = extern struct {
        pad_0: [0x1F50]u8, // 0x0
    };
    pub const C_WeaponElite = extern struct {
        pad_0: [0x1F50]u8, // 0x0
    };
    pub const C_DynamicPropAlias_cable_dynamic = extern struct {
        pad_0: [0x14B0]u8, // 0x0
    };
    pub const CBaseProp = extern struct {
        pad_0: [0x1268]u8, // 0x0
        m_bModelOverrodeBlockLOS: [0x4]u8, // 0x1268
        m_iShapeType: [0x4]u8, // 0x126C
        m_bConformToCollisionBounds: [0x10]u8, // 0x1270
        m_mPreferredCatchTransform: [0x20]u8, // 0x1280
    };
    pub const CInfoOffscreenPanoramaTexture = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_bDisabled: [0x1]u8, // 0x600
        m_bEnableMipGen: [0x3]u8, // 0x601
        m_nResolutionX: [0x4]u8, // 0x604
        m_nResolutionY: [0x8]u8, // 0x608
        m_szPanelType: [0x8]u8, // 0x610
        m_szLayoutFileName: [0x8]u8, // 0x618
        m_RenderAttrName: [0x8]u8, // 0x620
        m_TargetEntities: [0x18]u8, // 0x628
        m_nTargetChangeCount: [0x8]u8, // 0x640
        m_vecCSSClasses: [0x18]u8, // 0x648
        m_szTargetsName: [0x8]u8, // 0x660
        m_AdditionalTargetEntities: [0x178]u8, // 0x668
        m_bCheckCSSClasses: [0x28]u8, // 0x7E0
    };
    pub const CCSWeaponBaseVData = extern struct {
        pad_0: [0x520]u8, // 0x0
        m_WeaponType: [0x4]u8, // 0x520
        m_WeaponCategory: [0x4]u8, // 0x524
        m_szAnimSkeleton: [0xE0]u8, // 0x528
        m_vecMuzzlePos0: [0xC]u8, // 0x608
        m_vecMuzzlePos1: [0xC]u8, // 0x614
        m_szTracerParticle: [0xE0]u8, // 0x620
        m_GearSlot: [0x4]u8, // 0x700
        m_GearSlotPosition: [0x4]u8, // 0x704
        m_DefaultLoadoutSlot: [0x4]u8, // 0x708
        m_nPrice: [0x4]u8, // 0x70C
        m_nKillAward: [0x4]u8, // 0x710
        m_nPrimaryReserveAmmoMax: [0x4]u8, // 0x714
        m_nSecondaryReserveAmmoMax: [0x4]u8, // 0x718
        m_bMeleeWeapon: [0x1]u8, // 0x71C
        m_bHasBurstMode: [0x1]u8, // 0x71D
        m_bIsRevolver: [0x1]u8, // 0x71E
        m_bCannotShootUnderwater: [0x1]u8, // 0x71F
        m_szName: [0x8]u8, // 0x720
        m_eSilencerType: [0x4]u8, // 0x728
        m_bShowCrosshair: [0x1]u8, // 0x72C
        m_bIsFullAuto: [0x3]u8, // 0x72D
        m_nNumBullets: [0x4]u8, // 0x730
        m_bReloadsSingleShells: [0x4]u8, // 0x734
        m_flCycleTime: [0x8]u8, // 0x738
        m_flCycleTimeWhenInBurstMode: [0x4]u8, // 0x740
        m_flTimeBetweenBurstShots: [0x4]u8, // 0x744
        m_flMaxSpeed: [0x8]u8, // 0x748
        m_flSpread: [0x8]u8, // 0x750
        m_flInaccuracyCrouch: [0x8]u8, // 0x758
        m_flInaccuracyStand: [0x8]u8, // 0x760
        m_flInaccuracyJump: [0x8]u8, // 0x768
        m_flInaccuracyLand: [0x8]u8, // 0x770
        m_flInaccuracyLadder: [0x8]u8, // 0x778
        m_flInaccuracyFire: [0x8]u8, // 0x780
        m_flInaccuracyMove: [0x8]u8, // 0x788
        m_flRecoilAngle: [0x8]u8, // 0x790
        m_flRecoilAngleVariance: [0x8]u8, // 0x798
        m_flRecoilMagnitude: [0x8]u8, // 0x7A0
        m_flRecoilMagnitudeVariance: [0x8]u8, // 0x7A8
        m_nTracerFrequency: [0x8]u8, // 0x7B0
        m_flInaccuracyJumpInitial: [0x4]u8, // 0x7B8
        m_flInaccuracyJumpApex: [0x4]u8, // 0x7BC
        m_flInaccuracyReload: [0x4]u8, // 0x7C0
        m_flDeployDuration: [0x4]u8, // 0x7C4
        m_flDisallowAttackAfterReloadStartDuration: [0x4]u8, // 0x7C8
        m_nBurstShotCount: [0x4]u8, // 0x7CC
        m_bAllowBurstHolster: [0x4]u8, // 0x7D0
        m_nRecoilSeed: [0x4]u8, // 0x7D4
        m_nSpreadSeed: [0x4]u8, // 0x7D8
        m_flAttackMovespeedFactor: [0x4]u8, // 0x7DC
        m_flInaccuracyPitchShift: [0x4]u8, // 0x7E0
        m_flInaccuracyAltSoundThreshold: [0x4]u8, // 0x7E4
        m_szUseRadioSubtitle: [0x8]u8, // 0x7E8
        m_bUnzoomsAfterShot: [0x1]u8, // 0x7F0
        m_bHideViewModelWhenZoomed: [0x3]u8, // 0x7F1
        m_nZoomLevels: [0x4]u8, // 0x7F4
        m_nZoomFOV1: [0x4]u8, // 0x7F8
        m_nZoomFOV2: [0x4]u8, // 0x7FC
        m_flZoomTime0: [0x4]u8, // 0x800
        m_flZoomTime1: [0x4]u8, // 0x804
        m_flZoomTime2: [0x4]u8, // 0x808
        m_flIronSightPullUpSpeed: [0x4]u8, // 0x80C
        m_flIronSightPutDownSpeed: [0x4]u8, // 0x810
        m_flIronSightFOV: [0x4]u8, // 0x814
        m_flIronSightPivotForward: [0x4]u8, // 0x818
        m_flIronSightLooseness: [0x4]u8, // 0x81C
        m_nDamage: [0x4]u8, // 0x820
        m_flHeadshotMultiplier: [0x4]u8, // 0x824
        m_flArmorRatio: [0x4]u8, // 0x828
        m_flPenetration: [0x4]u8, // 0x82C
        m_flRange: [0x4]u8, // 0x830
        m_flRangeModifier: [0x4]u8, // 0x834
        m_flFlinchVelocityModifierLarge: [0x4]u8, // 0x838
        m_flFlinchVelocityModifierSmall: [0x4]u8, // 0x83C
        m_flRecoveryTimeCrouch: [0x4]u8, // 0x840
        m_flRecoveryTimeStand: [0x4]u8, // 0x844
        m_flRecoveryTimeCrouchFinal: [0x4]u8, // 0x848
        m_flRecoveryTimeStandFinal: [0x4]u8, // 0x84C
        m_nRecoveryTransitionStartBullet: [0x4]u8, // 0x850
        m_nRecoveryTransitionEndBullet: [0x4]u8, // 0x854
        m_flThrowVelocity: [0x4]u8, // 0x858
        m_vSmokeColor: [0xC]u8, // 0x85C
        m_szAnimClass: [0x38]u8, // 0x868
    };
    pub const CAttributeManager = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_Providers: [0x18]u8, // 0x8
        m_iReapplyProvisionParity: [0x4]u8, // 0x20
        m_hOuter: [0x4]u8, // 0x24
        m_bPreventLoopback: [0x4]u8, // 0x28
        m_ProviderType: [0x4]u8, // 0x2C
        m_CachedResults: [0x20]u8, // 0x30
    };
    pub const SignatureOutflow_Continue = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CInfoTarget = extern struct {
        pad_0: [0x600]u8, // 0x0
    };
    pub const CPlayer_CameraServices = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_vecCsViewPunchAngle: [0xC]u8, // 0x48
        m_nCsViewPunchAngleTick: [0x4]u8, // 0x54
        m_flCsViewPunchAngleTickRatio: [0x8]u8, // 0x58
        m_PlayerFog: [0x40]u8, // 0x60
        m_hColorCorrectionCtrl: [0x4]u8, // 0xA0
        m_hViewEntity: [0x4]u8, // 0xA4
        m_hTonemapController: [0x8]u8, // 0xA8
        m_audio: [0x78]u8, // 0xB0
        m_PostProcessingVolumes: [0x18]u8, // 0x128
        m_flOldPlayerZ: [0x4]u8, // 0x140
        m_flOldPlayerViewOffsetZ: [0x4]u8, // 0x144
        m_CurrentFog: [0x68]u8, // 0x148
        m_hOldFogController: [0x4]u8, // 0x1B0
        m_bOverrideFogColor: [0x8]u8, // 0x1B4
        m_OverrideFogColor: [0x14]u8, // 0x1BC
        m_bOverrideFogStartEnd: [0x8]u8, // 0x1D0
        m_fOverrideFogStart: [0x14]u8, // 0x1D8
        m_fOverrideFogEnd: [0x14]u8, // 0x1EC
        m_hActivePostProcessingVolume: [0x8]u8, // 0x200
        m_angDemoViewAngles: [0x90]u8, // 0x208
    };
    pub const CPulseCell_Timeline = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_TimelineEvents: [0x18]u8, // 0xD8
        m_bWaitForChildOutflows: [0x8]u8, // 0xF0
        m_OnFinished: [0x48]u8, // 0xF8
    };
    pub const CPulseCell_Inflow_EntOutputHandler = extern struct {
        pad_0: [0x80]u8, // 0x0
        m_SourceEntity: [0x10]u8, // 0x80
        m_SourceOutput: [0x10]u8, // 0x90
        m_ExpectedParamType: [0x18]u8, // 0xA0
    };
    pub const C_BaseCSGrenade = extern struct {
        pad_0: [0x1F20]u8, // 0x0
        m_bClientPredictDelete: [0x1]u8, // 0x1F20
        m_bRedraw: [0x1]u8, // 0x1F21
        m_bIsHeldByPlayer: [0x1]u8, // 0x1F22
        m_bPinPulled: [0x1]u8, // 0x1F23
        m_bJumpThrow: [0x1]u8, // 0x1F24
        m_bThrowAnimating: [0x3]u8, // 0x1F25
        m_fThrowTime: [0x8]u8, // 0x1F28
        m_flThrowStrength: [0x78]u8, // 0x1F30
        m_fDropTime: [0x4]u8, // 0x1FA8
        m_fPinPullTime: [0x4]u8, // 0x1FAC
        m_bJustPulledPin: [0x4]u8, // 0x1FB0
        m_nNextHoldTick: [0x4]u8, // 0x1FB4
        m_flNextHoldFrac: [0x4]u8, // 0x1FB8
        m_hSwitchToWeaponAfterThrow: [0x24]u8, // 0x1FBC
    };
    pub const CFilterAttributeInt = extern struct {
        pad_0: [0x638]u8, // 0x0
        m_sAttributeName: [0x8]u8, // 0x638
    };
    pub const CPointTemplate = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_iszWorldName: [0x8]u8, // 0x600
        m_iszSource2EntityLumpName: [0x8]u8, // 0x608
        m_iszEntityFilterName: [0x8]u8, // 0x610
        m_flTimeoutInterval: [0x4]u8, // 0x618
        m_bAsynchronouslySpawnEntities: [0x4]u8, // 0x61C
        m_clientOnlyEntityBehavior: [0x4]u8, // 0x620
        m_ownerSpawnGroupType: [0x4]u8, // 0x624
        m_createdSpawnGroupHandles: [0x18]u8, // 0x628
        m_SpawnedEntityHandles: [0x18]u8, // 0x640
        m_ScriptSpawnCallback: [0x8]u8, // 0x658
        m_ScriptCallbackScope: [0x8]u8, // 0x660
        m_OnEntitySpawned: [0x30]u8, // 0x668
    };
    pub const CPlayer_FlashlightServices = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CCSPlayerController = extern struct {
        pad_0: [0x818]u8, // 0x0
        m_pInGameMoneyServices: [0x8]u8, // 0x818
        m_pInventoryServices: [0x8]u8, // 0x820
        m_pActionTrackingServices: [0x8]u8, // 0x828
        m_pDamageServices: [0x8]u8, // 0x830
        m_iPing: [0x4]u8, // 0x838
        m_bHasCommunicationAbuseMute: [0x4]u8, // 0x83C
        m_uiCommunicationMuteFlags: [0x8]u8, // 0x840
        m_szCrosshairCodes: [0x8]u8, // 0x848
        m_iPendingTeamNum: [0x4]u8, // 0x850
        m_flForceTeamTime: [0x4]u8, // 0x854
        m_iCompTeammateColor: [0x4]u8, // 0x858
        m_bEverPlayedOnTeam: [0x4]u8, // 0x85C
        m_flPreviousForceJoinTeamTime: [0x8]u8, // 0x860
        m_szClan: [0x8]u8, // 0x868
        m_unClanId32bit: [0x8]u8, // 0x870
        m_sSanitizedPlayerName: [0x8]u8, // 0x878
        m_sSanitizedClanTag: [0x8]u8, // 0x880
        m_iCoachingTeam: [0x8]u8, // 0x888
        m_nPlayerDominated: [0x8]u8, // 0x890
        m_nPlayerDominatingMe: [0x8]u8, // 0x898
        m_iCompetitiveRanking: [0x4]u8, // 0x8A0
        m_iCompetitiveWins: [0x4]u8, // 0x8A4
        m_iCompetitiveRankType: [0x4]u8, // 0x8A8
        m_iCompetitiveRankingPredicted_Win: [0x4]u8, // 0x8AC
        m_iCompetitiveRankingPredicted_Loss: [0x4]u8, // 0x8B0
        m_iCompetitiveRankingPredicted_Tie: [0x4]u8, // 0x8B4
        m_nEndMatchNextMapVote: [0x4]u8, // 0x8B8
        m_unActiveQuestId: [0x4]u8, // 0x8BC
        m_rtActiveMissionPeriod: [0x4]u8, // 0x8C0
        m_nQuestProgressReason: [0x4]u8, // 0x8C4
        m_unPlayerTvControlFlags: [0x30]u8, // 0x8C8
        m_iDraftIndex: [0x4]u8, // 0x8F8
        m_msQueuedModeDisconnectionTimestamp: [0x4]u8, // 0x8FC
        m_uiAbandonRecordedReason: [0x4]u8, // 0x900
        m_eNetworkDisconnectionReason: [0x4]u8, // 0x904
        m_bCannotBeKicked: [0x1]u8, // 0x908
        m_bEverFullyConnected: [0x1]u8, // 0x909
        m_bAbandonAllowsSurrender: [0x1]u8, // 0x90A
        m_bAbandonOffersInstantSurrender: [0x1]u8, // 0x90B
        m_bDisconnection1MinWarningPrinted: [0x1]u8, // 0x90C
        m_bScoreReported: [0x3]u8, // 0x90D
        m_nDisconnectionTick: [0x10]u8, // 0x910
        m_bControllingBot: [0x1]u8, // 0x920
        m_bHasControlledBotThisRound: [0x1]u8, // 0x921
        m_bHasBeenControlledByPlayerThisRound: [0x2]u8, // 0x922
        m_nBotsControlledThisRound: [0x4]u8, // 0x924
        m_bCanControlObservedBot: [0x4]u8, // 0x928
        m_hPlayerPawn: [0x4]u8, // 0x92C
        m_hObserverPawn: [0x4]u8, // 0x930
        m_bPawnIsAlive: [0x4]u8, // 0x934
        m_iPawnHealth: [0x4]u8, // 0x938
        m_iPawnArmor: [0x4]u8, // 0x93C
        m_bPawnHasDefuser: [0x1]u8, // 0x940
        m_bPawnHasHelmet: [0x1]u8, // 0x941
        m_nPawnCharacterDefIndex: [0x2]u8, // 0x942
        m_iPawnLifetimeStart: [0x4]u8, // 0x944
        m_iPawnLifetimeEnd: [0x4]u8, // 0x948
        m_iPawnBotDifficulty: [0x4]u8, // 0x94C
        m_hOriginalControllerOfCurrentPawn: [0x4]u8, // 0x950
        m_iScore: [0x4]u8, // 0x954
        m_recentKillQueue: [0x8]u8, // 0x958
        m_nFirstKill: [0x1]u8, // 0x960
        m_nKillCount: [0x1]u8, // 0x961
        m_bMvpNoMusic: [0x2]u8, // 0x962
        m_eMvpReason: [0x4]u8, // 0x964
        m_iMusicKitID: [0x4]u8, // 0x968
        m_iMusicKitMVPs: [0x4]u8, // 0x96C
        m_iMVPs: [0x4]u8, // 0x970
        m_bIsPlayerNameDirty: [0x8]u8, // 0x974
        m_bFireBulletsSeedSynchronized: [0x4]u8, // 0x97C
    };
    pub const C_CSGO_CounterTerroristRushIntroCamera = extern struct {
        pad_0: [0x690]u8, // 0x0
    };
    pub const C_CSGO_TeamIntroCounterTerroristPosition = extern struct {
        pad_0: [0x1D18]u8, // 0x0
    };
    pub const C_CSGO_PreviewModel = extern struct {
        pad_0: [0x1268]u8, // 0x0
        m_defaultAnim: [0x8]u8, // 0x1268
        m_nDefaultAnimLoopMode: [0x4]u8, // 0x1270
        m_flInitialModelScale: [0x4]u8, // 0x1274
        m_sInitialWeaponState: [0x640]u8, // 0x1278
    };
    pub const C_CSGO_TeamSelectCharacterPosition = extern struct {
        pad_0: [0x1D18]u8, // 0x0
    };
    pub const CPulseCell_Outflow_CycleOrdered__InstanceState_t = extern struct {
        m_nNextIndex: [0x4]u8, // 0x0
    };
    pub const CCSObservableElement = extern struct {
        pad_0: [0x618]u8, // 0x0
        m_iszObservableModelEntity: [0x8]u8, // 0x618
        m_hObservableModelEntity: [0x4]u8, // 0x620
        m_hObservableModelEntity2: [0x4]u8, // 0x624
        m_nTeamFilter: [0x8]u8, // 0x628
    };
    pub const C_SoundEventAABBEntity = extern struct {
        pad_0: [0x6C0]u8, // 0x0
        m_vMins: [0xC]u8, // 0x6C0
        m_vMaxs: [0xC]u8, // 0x6CC
    };
    pub const CCSPlayer_MovementServices = extern struct {
        pad_0: [0x310]u8, // 0x0
        m_AnimationState: [0xE0]u8, // 0x310
        m_bUsingGroundTopologyOffset: [0x4]u8, // 0x3F0
        m_flUsingGroundTopologyOffsetTransitionSmoothing: [0x4]u8, // 0x3F4
        m_vecLadderNormal: [0xC]u8, // 0x3F8
        m_nLadderSurfacePropIndex: [0x4]u8, // 0x404
        m_bDucked: [0x4]u8, // 0x408
        m_flDuckAmount: [0x4]u8, // 0x40C
        m_flDuckSpeed: [0x4]u8, // 0x410
        m_bDuckOverride: [0x1]u8, // 0x414
        m_bDesiresDuck: [0x1]u8, // 0x415
        m_bDucking: [0x2]u8, // 0x416
        m_flDuckRootOffset: [0x4]u8, // 0x418
        m_flDuckViewOffset: [0x4]u8, // 0x41C
        m_flLastDuckTime: [0x4]u8, // 0x420
        m_flBombPlantViewOffset: [0xC]u8, // 0x424
        m_vecLastPositionAtFullCrouchSpeed: [0x8]u8, // 0x430
        m_duckUntilOnGround: [0x1]u8, // 0x438
        m_bHasWalkMovedSinceLastJump: [0x1]u8, // 0x439
        m_bInStuckTest: [0x20E]u8, // 0x43A
        m_nTraceCount: [0x4]u8, // 0x648
        m_StuckLast: [0x4]u8, // 0x64C
        m_bSpeedCropped: [0x4]u8, // 0x650
        m_nOldWaterLevel: [0x4]u8, // 0x654
        m_flWaterEntryTime: [0x4]u8, // 0x658
        m_vecForward: [0xC]u8, // 0x65C
        m_vecLeft: [0xC]u8, // 0x668
        m_vecUp: [0xC]u8, // 0x674
        m_nGameCodeHasMovedPlayerAfterCommand: [0x4]u8, // 0x680
        m_fStashGrenadeParameterWhen: [0x4]u8, // 0x684
        m_bUseFrictionStashedSpeed: [0x4]u8, // 0x688
        m_flUseFrictionStashedSpeedUntilFrac: [0x4]u8, // 0x68C
        m_flFrictionStashedSpeed: [0x4]u8, // 0x690
        m_flStamina: [0x4]u8, // 0x694
        m_flHeightAtJumpStart: [0x4]u8, // 0x698
        m_flMaxJumpHeightThisJump: [0x4]u8, // 0x69C
        m_flMaxJumpHeightLastJump: [0x4]u8, // 0x6A0
        m_flStaminaAtJumpStart: [0x4]u8, // 0x6A4
        m_flVelMulAtJumpStart: [0x4]u8, // 0x6A8
        m_flAccumulatedJumpError: [0x4]u8, // 0x6AC
        m_LegacyJump: [0x18]u8, // 0x6B0
        m_ModernJump: [0x38]u8, // 0x6C8
        m_nLastJumpTick: [0x4]u8, // 0x700
        m_flLastJumpFrac: [0x4]u8, // 0x704
        m_flLastJumpVelocityZ: [0x4]u8, // 0x708
        m_bJumpApexPending: [0x4]u8, // 0x70C
        m_flTicksSinceLastSurfingDetected: [0x4]u8, // 0x710
        m_bWasSurfing: [0x90]u8, // 0x714
        m_vecWalkWishVel: [0x82C]u8, // 0x7A4
        m_bHasEverProcessedCommand: [0x10]u8, // 0xFD0
    };
    pub const SellbackPurchaseEntry_t = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_unDefIdx: [0x4]u8, // 0x30
        m_nCost: [0x4]u8, // 0x34
        m_nPrevArmor: [0x4]u8, // 0x38
        m_bPrevHelmet: [0x4]u8, // 0x3C
        m_hItem: [0x8]u8, // 0x40
    };
    pub const C_TintController = extern struct {
        pad_0: [0x618]u8, // 0x0
    };
    pub const C_WeaponBaseItem = extern struct {
        pad_0: [0x1F20]u8, // 0x0
        m_bSequenceInProgress: [0x1]u8, // 0x1F20
        m_bRedraw: [0xF]u8, // 0x1F21
    };
    pub const CWaterSplasher = extern struct {
        pad_0: [0x1098]u8, // 0x0
    };
    pub const C_FuncBrush = extern struct {
        pad_0: [0x1098]u8, // 0x0
    };
    pub const PhysicsRagdollPose_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_RelativeTransforms: [0x18]u8, // 0x8
        m_hOwner: [0x4]u8, // 0x20
        m_bSetFromDebugHistory: [0x24]u8, // 0x24
    };
    pub const CPropDataComponent = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_flDmgModBullet: [0x4]u8, // 0x10
        m_flDmgModClub: [0x4]u8, // 0x14
        m_flDmgModExplosive: [0x4]u8, // 0x18
        m_flDmgModFire: [0x4]u8, // 0x1C
        m_iszPhysicsDamageTableName: [0x8]u8, // 0x20
        m_iszBasePropData: [0x8]u8, // 0x28
        m_nInteractions: [0x4]u8, // 0x30
        m_bSpawnMotionDisabled: [0x4]u8, // 0x34
        m_nDisableTakePhysicsDamageSpawnFlag: [0x4]u8, // 0x38
        m_nMotionDisabledSpawnFlag: [0x4]u8, // 0x3C
    };
    pub const CPulseCell_LimitCount__InstanceState_t = extern struct {
        m_nCurrentCount: [0x4]u8, // 0x0
    };
    pub const C_WeaponCZ75a = extern struct {
        pad_0: [0x1F50]u8, // 0x0
        m_bMagazineRemoved: [0x10]u8, // 0x1F50
    };
    pub const C_DynamicLight = extern struct {
        pad_0: [0x1098]u8, // 0x0
        m_Flags: [0x1]u8, // 0x1098
        m_LightStyle: [0x3]u8, // 0x1099
        m_Radius: [0x4]u8, // 0x109C
        m_Exponent: [0x4]u8, // 0x10A0
        m_InnerAngle: [0x4]u8, // 0x10A4
        m_OuterAngle: [0x4]u8, // 0x10A8
        m_SpotRadius: [0x14]u8, // 0x10AC
    };
    pub const CCS2PawnGraphController = extern struct {
        pad_0: [0x2D8]u8, // 0x0
        m_bIsDefusing: [0x18]u8, // 0x2D8
        m_moveType: [0x18]u8, // 0x2F0
        m_moveDirectionID: [0x18]u8, // 0x308
        m_flMoveSpeedX: [0x18]u8, // 0x320
        m_flMoveSpeedY: [0x18]u8, // 0x338
        m_flMoveSpeedHorizontal: [0x18]u8, // 0x350
        m_flPreviousMoveSpeedHorizontal: [0x18]u8, // 0x368
        m_flCrouchAmount: [0x18]u8, // 0x380
        m_bIsWalking: [0x18]u8, // 0x398
        m_flWeaponDropAmount: [0x18]u8, // 0x3B0
        m_groundAction: [0x18]u8, // 0x3C8
        m_groundActionDirectionID: [0x18]u8, // 0x3E0
        m_flGroundTurnAngleOrVelocity: [0x18]u8, // 0x3F8
        m_flLadderCycle: [0x18]u8, // 0x410
        m_flLadderYaw: [0x18]u8, // 0x428
        m_flLadderYawBackwards: [0x18]u8, // 0x440
        m_airAction: [0x18]u8, // 0x458
        m_flAirHeightAboveGround: [0x18]u8, // 0x470
        m_leftFootTarget: [0x18]u8, // 0x488
        m_rightFootTarget: [0x18]u8, // 0x4A0
        m_flFlashedAmount: [0x18]u8, // 0x4B8
        m_flAimPitchAngle: [0x18]u8, // 0x4D0
        m_flAimYawAngle: [0x18]u8, // 0x4E8
        m_flinchHead: [0x18]u8, // 0x500
        m_flinchHeadRestart: [0x18]u8, // 0x518
        m_flinchBody: [0x18]u8, // 0x530
        m_flinchBodyRestart: [0x18]u8, // 0x548
        m_flinchIsOnFire: [0x18]u8, // 0x560
    };
    pub const EngineCountdownTimer = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_duration: [0x4]u8, // 0x8
        m_timestamp: [0x4]u8, // 0xC
        m_timescale: [0x8]u8, // 0x10
    };
    pub const C_SoundEventSphereEntity = extern struct {
        pad_0: [0x6C0]u8, // 0x0
        m_flRadius: [0x8]u8, // 0x6C0
    };
    pub const CCSPlayerController_DamageServices = extern struct {
        pad_0: [0x40]u8, // 0x0
        m_nSendUpdate: [0x8]u8, // 0x40
        m_DamageList: [0x68]u8, // 0x48
    };
    pub const C_CSGO_TeamPreviewModel = extern struct {
        pad_0: [0x37D0]u8, // 0x0
    };
    pub const C_TonemapController2Alias_env_tonemap_controller2 = extern struct {
        pad_0: [0x618]u8, // 0x0
    };
    pub const C_Inferno = extern struct {
        pad_0: [0x10D8]u8, // 0x0
        m_nfxFireDamageEffect: [0x8]u8, // 0x10D8
        m_hInfernoPointsSnapshot: [0x8]u8, // 0x10E0
        m_hInfernoFillerPointsSnapshot: [0x8]u8, // 0x10E8
        m_hInfernoOutlinePointsSnapshot: [0x8]u8, // 0x10F0
        m_hInfernoClimbingOutlinePointsSnapshot: [0x8]u8, // 0x10F8
        m_hInfernoDecalsSnapshot: [0x8]u8, // 0x1100
        m_firePositions: [0x300]u8, // 0x1108
        m_fireParentPositions: [0x300]u8, // 0x1408
        m_bFireIsBurning: [0x40]u8, // 0x1708
        m_BurnNormal: [0x300]u8, // 0x1748
        m_fireCount: [0x4]u8, // 0x1A48
        m_nInfernoType: [0x4]u8, // 0x1A4C
        m_nFireLifetime: [0x4]u8, // 0x1A50
        m_bInPostEffectTime: [0x4]u8, // 0x1A54
        m_lastFireCount: [0x4]u8, // 0x1A58
        m_nFireEffectTickBegin: [0x6C04]u8, // 0x1A5C
        m_drawableCount: [0x4]u8, // 0x8660
        m_blosCheck: [0x4]u8, // 0x8664
        m_nlosperiod: [0x4]u8, // 0x8668
        m_maxFireHalfWidth: [0x4]u8, // 0x866C
        m_maxFireHeight: [0x4]u8, // 0x8670
        m_minBounds: [0xC]u8, // 0x8674
        m_maxBounds: [0xC]u8, // 0x8680
        m_flLastGrassBurnThink: [0x14]u8, // 0x868C
    };
    pub const CFilterLOS = extern struct {
        pad_0: [0x638]u8, // 0x0
    };
    pub const CPointOrient = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_iszSpawnTargetName: [0x8]u8, // 0x600
        m_hTarget: [0x4]u8, // 0x608
        m_bActive: [0x4]u8, // 0x60C
        m_nGoalDirection: [0x4]u8, // 0x610
        m_nConstraint: [0x4]u8, // 0x614
        m_flMaxTurnRate: [0x4]u8, // 0x618
        m_flLastGameTime: [0x4]u8, // 0x61C
    };
    pub const C_GlobalLight = extern struct {
        pad_0: [0xAC0]u8, // 0x0
        m_WindClothForceHandle: [0x30]u8, // 0xAC0
    };
    pub const C_EnvWindClientside = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_EnvWindShared: [0xF8]u8, // 0x600
    };
    pub const sky3dparams_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        scale: [0x4]u8, // 0x8
        origin: [0xC]u8, // 0xC
        bClip3DSkyBoxNearToWorldFar: [0x4]u8, // 0x18
        flClip3DSkyBoxNearToWorldFarOffset: [0x4]u8, // 0x1C
        fog: [0x68]u8, // 0x20
        m_nWorldGroupID: [0x8]u8, // 0x88
    };
    pub const C_FlashbangProjectile = extern struct {
        pad_0: [0x1348]u8, // 0x0
    };
    pub const C_SoundEventConeEntity = extern struct {
        pad_0: [0x6C0]u8, // 0x0
        m_flEmitterAngle: [0x4]u8, // 0x6C0
        m_flSweetSpotAngle: [0x4]u8, // 0x6C4
        m_flAttenMin: [0x4]u8, // 0x6C8
        m_flAttenMax: [0x4]u8, // 0x6CC
        m_iszParameterName: [0x8]u8, // 0x6D0
    };
    pub const CDestructiblePartsComponent = extern struct {
        __m_pChainEntity: [0x48]u8, // 0x0
        m_vecDamageTakenByHitGroup: [0x18]u8, // 0x48
        m_hOwner: [0x8]u8, // 0x60
        m_pAnimGraphDestructibleGraphController: [0x8]u8, // 0x68
    };
    pub const C_WeaponP90 = extern struct {
        pad_0: [0x1F50]u8, // 0x0
    };
    pub const C_EnvWind = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_EnvWindShared: [0xF8]u8, // 0x600
    };
    pub const C_CSGO_TerroristTeamIntroCamera = extern struct {
        pad_0: [0x690]u8, // 0x0
    };
    pub const CPulseCell_Step_DebugLog = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const C_PointDeathcamBounds = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_vBoxMins: [0xC]u8, // 0x600
        m_vBoxMaxs: [0xC]u8, // 0x60C
        m_flLerpDistance: [0x8]u8, // 0x618
    };
    pub const CCSPlayerController_ActionTrackingServices = extern struct {
        pad_0: [0x40]u8, // 0x0
        m_perRoundStats: [0x68]u8, // 0x40
        m_matchStats: [0x80]u8, // 0xA8
        m_iNumRoundKills: [0x4]u8, // 0x128
        m_iNumRoundKillsHeadshots: [0x4]u8, // 0x12C
        m_flTotalRoundDamageDealt: [0x8]u8, // 0x130
    };
    pub const CBodyComponentBaseAnimGraph = extern struct {
        pad_0: [0x510]u8, // 0x0
        m_animationController: [0x6A0]u8, // 0x510
    };
    pub const C_CSGO_PreviewModelAlias_csgo_item_previewmodel = extern struct {
        pad_0: [0x18B8]u8, // 0x0
    };
    pub const C_InfoInstructorHintHostageRescueZone = extern struct {
        pad_0: [0x600]u8, // 0x0
    };
    pub const CPulseCell_BaseYieldingInflow = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_BaseFlow_OnAfterCancel: [0x48]u8, // 0x48
        m_BaseFlow_WhileActive: [0x48]u8, // 0x90
    };
    pub const PulseNodeDynamicOutflows_t = extern struct {
        m_Outflows: [0x18]u8, // 0x0
    };
    pub const C_TriggerBuoyancy = extern struct {
        pad_0: [0x1180]u8, // 0x0
        m_BuoyancyHelper: [0x118]u8, // 0x1180
        m_flFluidDensity: [0x8]u8, // 0x1298
    };
    pub const CPlayer_MovementServices_Humanoid = extern struct {
        pad_0: [0x258]u8, // 0x0
        m_flStepSoundTime: [0x4]u8, // 0x258
        m_flFallVelocity: [0x4]u8, // 0x25C
        m_groundNormal: [0xC]u8, // 0x260
        m_flSurfaceFriction: [0x4]u8, // 0x26C
        m_surfaceProps: [0x10]u8, // 0x270
        m_nStepside: [0x8]u8, // 0x280
    };
    pub const CPulseCell_IsRequirementValid__Criteria_t = extern struct {
        m_bIsValid: [0x1]u8, // 0x0
    };
    pub const C_WeaponTec9 = extern struct {
        pad_0: [0x1F50]u8, // 0x0
    };
    pub const C_PhysPropClientside = extern struct {
        pad_0: [0x13E0]u8, // 0x0
        m_flTouchDelta: [0x4]u8, // 0x13E0
        m_fDeathTime: [0x4]u8, // 0x13E4
        m_vecDamagePosition: [0xC]u8, // 0x13E8
        m_vecDamageDirection: [0xC]u8, // 0x13F4
        m_nDamageType: [0x10]u8, // 0x1400
    };
    pub const C_BaseDoor = extern struct {
        pad_0: [0x1098]u8, // 0x0
        m_bIsUsable: [0x8]u8, // 0x1098
    };
    pub const CSMatchStats_t = extern struct {
        pad_0: [0x68]u8, // 0x0
        m_iEnemy5Ks: [0x4]u8, // 0x68
        m_iEnemy4Ks: [0x4]u8, // 0x6C
        m_iEnemy3Ks: [0x4]u8, // 0x70
        m_iEnemyKnifeKills: [0x4]u8, // 0x74
        m_iEnemyTaserKills: [0x8]u8, // 0x78
    };
    pub const EntityRenderAttribute_t = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_ID: [0x4]u8, // 0x30
        m_Values: [0x14]u8, // 0x34
    };
    pub const CPulseCell_Inflow_ObservableVariableListener = extern struct {
        pad_0: [0x80]u8, // 0x0
        m_nBlackboardReference: [0x2]u8, // 0x80
        m_bSelfReference: [0x6]u8, // 0x82
    };
    pub const CCSGO_RushIntroTerroristPosition = extern struct {
        pad_0: [0x1D18]u8, // 0x0
    };
    pub const CHostageRescueZone = extern struct {
        pad_0: [0x1198]u8, // 0x0
    };
    pub const CModelState = extern struct {
        pad_0: [0xA0]u8, // 0x0
        m_hModel: [0x8]u8, // 0xA0
        m_ModelName: [0x38]u8, // 0xA8
        m_pVPhysicsAggregate: [0x8]u8, // 0xE0
        m_flRootBoneOffset_x: [0x4]u8, // 0xE8
        m_flRootBoneOffset_y: [0x4]u8, // 0xEC
        m_flRootBoneOffset_z: [0x4]u8, // 0xF0
        m_nRootBoneOffsetResetSerialNumber: [0x1C]u8, // 0xF4
        m_bClientClothCreationSuppressed: [0xF0]u8, // 0x110
        m_nAnimStateNoInterpSerialNumber: [0x8]u8, // 0x200
        m_MeshGroupMask: [0x50]u8, // 0x208
        m_nBodyGroupChoices: [0x4A]u8, // 0x258
        m_nIdealMotionType: [0x1]u8, // 0x2A2
        m_nForceLOD: [0x1]u8, // 0x2A3
        m_nClothUpdateFlags: [0xC]u8, // 0x2A4
    };
    pub const CPulseCell_LerpCameraSettings__CursorState_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_hCamera: [0x4]u8, // 0x8
        m_OverlaidStart: [0x10]u8, // 0xC
        m_OverlaidEnd: [0x10]u8, // 0x1C
    };
    pub const CPulseCell_Outflow_CycleOrdered = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_Outputs: [0x18]u8, // 0x48
    };
    pub const C_CSWeaponBaseGun = extern struct {
        pad_0: [0x1F20]u8, // 0x0
        m_zoomLevel: [0x4]u8, // 0x1F20
        m_iBurstShotsRemaining: [0x4]u8, // 0x1F24
        m_iSilencerBodygroup: [0x10]u8, // 0x1F28
        m_silencedModelIndex: [0x4]u8, // 0x1F38
        m_inPrecache: [0x1]u8, // 0x1F3C
        m_bNeedsBoltAction: [0x3]u8, // 0x1F3D
        m_nRevolverCylinderIdx: [0x10]u8, // 0x1F40
    };
    pub const C_CSGameRulesProxy = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_pGameRules: [0x8]u8, // 0x600
    };
    pub const CCollisionProperty = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_collisionAttribute: [0x30]u8, // 0x10
        m_vecMins: [0xC]u8, // 0x40
        m_vecMaxs: [0xE]u8, // 0x4C
        m_usSolidFlags: [0x1]u8, // 0x5A
        m_nSolidType: [0x1]u8, // 0x5B
        m_triggerBloat: [0x1]u8, // 0x5C
        m_nSurroundType: [0x1]u8, // 0x5D
        m_CollisionGroup: [0x1]u8, // 0x5E
        m_nEnablePhysics: [0x1]u8, // 0x5F
        m_flBoundingRadius: [0x4]u8, // 0x60
        m_vecSpecifiedSurroundingMins: [0xC]u8, // 0x64
        m_vecSpecifiedSurroundingMaxs: [0xC]u8, // 0x70
        m_vecSurroundingMaxs: [0xC]u8, // 0x7C
        m_vecSurroundingMins: [0xC]u8, // 0x88
        m_vCapsuleCenter1: [0xC]u8, // 0x94
        m_vCapsuleCenter2: [0xC]u8, // 0xA0
        m_flCapsuleRadius: [0xC]u8, // 0xAC
    };
    pub const C_WeaponP250 = extern struct {
        pad_0: [0x1F50]u8, // 0x0
    };
    pub const CFilterMassGreater = extern struct {
        pad_0: [0x638]u8, // 0x0
        m_fFilterMass: [0x8]u8, // 0x638
    };
    pub const C_ShatterGlassShardPhysics = extern struct {
        pad_0: [0x10A0]u8, // 0x0
        m_ShardDesc: [0x80]u8, // 0x10A0
    };
    pub const C_EntityDissolve = extern struct {
        pad_0: [0x10A0]u8, // 0x0
        m_flStartTime: [0x4]u8, // 0x10A0
        m_flFadeInStart: [0x4]u8, // 0x10A4
        m_flFadeInLength: [0x4]u8, // 0x10A8
        m_flFadeOutModelStart: [0x4]u8, // 0x10AC
        m_flFadeOutModelLength: [0x4]u8, // 0x10B0
        m_flFadeOutStart: [0x4]u8, // 0x10B4
        m_flFadeOutLength: [0x4]u8, // 0x10B8
        m_nDissolveType: [0x4]u8, // 0x10BC
        m_nMagnitude: [0x4]u8, // 0x10C0
        m_vDissolverOrigin: [0xC]u8, // 0x10C4
        m_flNextSparkTime: [0x4]u8, // 0x10D0
        m_bCoreExplode: [0x1]u8, // 0x10D4
        m_bLinkedToServerEnt: [0xB]u8, // 0x10D5
    };
    pub const C_SoundOpvarSetOBBEntity = extern struct {
        pad_0: [0x620]u8, // 0x0
    };
    pub const CCSCustomPlayerCamera = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_hPawn: [0x4]u8, // 0x600
        m_nCameraMode: [0x4]u8, // 0x604
        m_hFollowEntity: [0x4]u8, // 0x608
        m_bFollowEyes: [0x4]u8, // 0x60C
        m_vecFollowOffset: [0xC]u8, // 0x610
        m_vecCameraOffset: [0xC]u8, // 0x61C
        m_bClipCameraOffset: [0x4]u8, // 0x628
        m_flCameraOffsetReturnStrength: [0x14]u8, // 0x62C
    };
    pub const CCSGameModeRules_ArmsRace = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_WeaponSequence: [0x18]u8, // 0x30
    };
    pub const C_FuncMonitor = extern struct {
        pad_0: [0x1098]u8, // 0x0
        m_targetCamera: [0x8]u8, // 0x1098
        m_nResolutionEnum: [0x4]u8, // 0x10A0
        m_bRenderShadows: [0x1]u8, // 0x10A4
        m_bUseUniqueColorTarget: [0x3]u8, // 0x10A5
        m_brushModelName: [0x8]u8, // 0x10A8
        m_hTargetCamera: [0x4]u8, // 0x10B0
        m_bEnabled: [0x1]u8, // 0x10B4
        m_bDraw3DSkybox: [0x45B]u8, // 0x10B5
    };
    pub const C_ClientRagdoll = extern struct {
        pad_0: [0x1268]u8, // 0x0
        m_bFadeOut: [0x1]u8, // 0x1268
        m_bImportant: [0x3]u8, // 0x1269
        m_flEffectTime: [0x4]u8, // 0x126C
        m_gibDespawnTime: [0x4]u8, // 0x1270
        m_iCurrentFriction: [0x4]u8, // 0x1274
        m_iMinFriction: [0x4]u8, // 0x1278
        m_iMaxFriction: [0x4]u8, // 0x127C
        m_iFrictionAnimState: [0x4]u8, // 0x1280
        m_bReleaseRagdoll: [0x1]u8, // 0x1284
        m_iEyeAttachment: [0x1]u8, // 0x1285
        m_bFadingOut: [0x2]u8, // 0x1286
        m_flScaleEnd: [0x28]u8, // 0x1288
        m_flScaleTimeStart: [0x28]u8, // 0x12B0
        m_flScaleTimeEnd: [0x28]u8, // 0x12D8
    };
    pub const PulseSelectorOutflowList_t = extern struct {
        m_Outflows: [0x18]u8, // 0x0
    };
    pub const C_BaseModelEntity__BodyGroupRequest_t = extern struct {
        m_uRequestID: [0x4]u8, // 0x0
        m_nGroupName: [0x4]u8, // 0x4
        m_sChoiceName: [0x8]u8, // 0x8
        m_nGroup: [0x4]u8, // 0x10
        m_uChoice: [0x2]u8, // 0x14
        m_uRefCount: [0x2]u8, // 0x16
    };
    pub const CPulseCell_PlaySequence__CursorState_t = extern struct {
        m_hTarget: [0x4]u8, // 0x0
    };
    pub const CBodyComponentSkeletonInstance = extern struct {
        pad_0: [0x80]u8, // 0x0
        m_skeletonInstance: [0x490]u8, // 0x80
    };
    pub const C_CS2WeaponModuleBase = extern struct {
        pad_0: [0x1270]u8, // 0x0
    };
    pub const C_CSGO_TeamPreviewCharacterPosition = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_nVariant: [0x4]u8, // 0x600
        m_nRandom: [0x4]u8, // 0x604
        m_nOrdinal: [0x8]u8, // 0x608
        m_sWeaponName: [0x8]u8, // 0x610
        m_xuid: [0x8]u8, // 0x618
        m_agentItem: [0x5B0]u8, // 0x620
        m_glovesItem: [0x5B0]u8, // 0xBD0
        m_weaponItem: [0x5B0]u8, // 0x1180
        m_petItem: [0x5E8]u8, // 0x1730
    };
    pub const C_SmokeGrenadeProjectile = extern struct {
        pad_0: [0x1360]u8, // 0x0
        m_nSmokeEffectTickBegin: [0x4]u8, // 0x1360
        m_bDidSmokeEffect: [0x4]u8, // 0x1364
        m_nRandomSeed: [0x4]u8, // 0x1368
        m_vSmokeColor: [0xC]u8, // 0x136C
        m_vSmokeDetonationPos: [0x10]u8, // 0x1378
        m_VoxelFrameData: [0x18]u8, // 0x1388
        m_nVoxelFrameDataSize: [0x4]u8, // 0x13A0
        m_nVoxelUpdate: [0x4]u8, // 0x13A4
        m_nSmokeLightProbeRegen: [0x1]u8, // 0x13A8
        m_bSmokeVolumeDataReceived: [0x1]u8, // 0x13A9
        m_bSmokeEffectSpawned: [0x156]u8, // 0x13AA
    };
    pub const CScriptComponent = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_scriptClassName: [0x8]u8, // 0x30
    };
    pub const CCSPlayer_BuyServices = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_vecSellbackPurchaseEntries: [0x68]u8, // 0x48
    };
    pub const C_SkyCameraVolumeTarget = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_nSkyboxScale: [0x8]u8, // 0x600
        m_hSkyMaterial: [0x8]u8, // 0x608
    };
    pub const C_PortraitWorldCallbackHandler = extern struct {
        pad_0: [0x608]u8, // 0x0
    };
    pub const C_DynamicProp = extern struct {
        pad_0: [0x13E0]u8, // 0x0
        m_bGraphControllerEnabled: [0x1]u8, // 0x13E0
        m_bUseHitboxesForRenderBox: [0x1]u8, // 0x13E1
        m_bUseAnimGraph: [0x6]u8, // 0x13E2
        m_pOutputAnimBegun: [0x18]u8, // 0x13E8
        m_pOutputAnimOver: [0x18]u8, // 0x1400
        m_pOutputAnimLoopCycleOver: [0x18]u8, // 0x1418
        m_OnAnimReachedStart: [0x18]u8, // 0x1430
        m_OnAnimReachedEnd: [0x18]u8, // 0x1448
        m_iszIdleAnim: [0x8]u8, // 0x1460
        m_nIdleAnimLoopMode: [0x4]u8, // 0x1468
        m_bRandomizeCycle: [0x1]u8, // 0x146C
        m_bStartDisabled: [0x1]u8, // 0x146D
        m_bFiredStartEndOutput: [0x1]u8, // 0x146E
        m_bForceNpcExclude: [0x1]u8, // 0x146F
        m_bCreateMovableSurfaceGraph: [0x1]u8, // 0x1470
        m_bCreateNonSolid: [0x1]u8, // 0x1471
        m_bIsOverrideProp: [0x2]u8, // 0x1472
        m_iInitialGlowState: [0x4]u8, // 0x1474
        m_nGlowRange: [0x4]u8, // 0x1478
        m_nGlowRangeMin: [0x4]u8, // 0x147C
        m_glowColor: [0x4]u8, // 0x1480
        m_nGlowTeam: [0x4]u8, // 0x1484
        m_iCachedFrameCount: [0x4]u8, // 0x1488
        m_vecCachedRenderMins: [0xC]u8, // 0x148C
        m_vecCachedRenderMaxs: [0x18]u8, // 0x1498
    };
    pub const C_CSTeam = extern struct {
        pad_0: [0x6B8]u8, // 0x0
        m_szTeamMatchStat: [0x200]u8, // 0x6B8
        m_numMapVictories: [0x4]u8, // 0x8B8
        m_bSurrendered: [0x4]u8, // 0x8BC
        m_scoreFirstHalf: [0x4]u8, // 0x8C0
        m_scoreSecondHalf: [0x4]u8, // 0x8C4
        m_scoreOvertime: [0x4]u8, // 0x8C8
        m_szClanTeamname: [0x84]u8, // 0x8CC
        m_iClanID: [0x4]u8, // 0x950
        m_szTeamFlagImage: [0x8]u8, // 0x954
        m_szTeamLogoImage: [0xC]u8, // 0x95C
    };
    pub const C_CS2HudModelWeapon = extern struct {
        pad_0: [0x1390]u8, // 0x0
    };
    pub const C_TextureBasedAnimatable = extern struct {
        pad_0: [0x1098]u8, // 0x0
        m_bLoop: [0x4]u8, // 0x1098
        m_flFPS: [0x4]u8, // 0x109C
        m_hPositionKeys: [0x8]u8, // 0x10A0
        m_hRotationKeys: [0x8]u8, // 0x10A8
        m_vAnimationBoundsMin: [0xC]u8, // 0x10B0
        m_vAnimationBoundsMax: [0xC]u8, // 0x10BC
        m_flStartTime: [0x4]u8, // 0x10C8
        m_flStartFrame: [0x4]u8, // 0x10CC
    };
    pub const C_LightEnvironmentEntity = extern struct {
        pad_0: [0x10A0]u8, // 0x0
    };
    pub const C_TriggerPhysics = extern struct {
        pad_0: [0x1180]u8, // 0x0
        m_gravityScale: [0x4]u8, // 0x1180
        m_linearLimit: [0x4]u8, // 0x1184
        m_linearDamping: [0x4]u8, // 0x1188
        m_angularLimit: [0x4]u8, // 0x118C
        m_angularDamping: [0x4]u8, // 0x1190
        m_linearForce: [0x4]u8, // 0x1194
        m_flFrequency: [0x4]u8, // 0x1198
        m_flDampingRatio: [0x4]u8, // 0x119C
        m_vecLinearForcePointAt: [0xC]u8, // 0x11A0
        m_bCollapseToForcePoint: [0x4]u8, // 0x11AC
        m_vecLinearForcePointAtWorld: [0xC]u8, // 0x11B0
        m_vecLinearForceDirection: [0xC]u8, // 0x11BC
        m_bForceDirectionIsInLocalSpace: [0x1]u8, // 0x11C8
        m_bConvertToDebrisWhenPossible: [0x7]u8, // 0x11C9
    };
    pub const C_PropDoorRotating = extern struct {
        pad_0: [0x14F0]u8, // 0x0
    };
    pub const C_HandleTest = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_Handle: [0x4]u8, // 0x600
        m_bSendHandle: [0x4]u8, // 0x604
    };
    pub const CInfoWorldLayer = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_pOutputOnEntitiesSpawned: [0x18]u8, // 0x600
        m_worldName: [0x8]u8, // 0x618
        m_layerName: [0x8]u8, // 0x620
        m_bWorldLayerVisible: [0x1]u8, // 0x628
        m_bEntitiesSpawned: [0x1]u8, // 0x629
        m_bCreateAsChildSpawnGroup: [0x2]u8, // 0x62A
        m_hLayerSpawnGroup: [0x4]u8, // 0x62C
        m_bWorldLayerActuallyVisible: [0x8]u8, // 0x630
    };
    pub const CBodyComponentBaseModelEntity = extern struct {
        pad_0: [0x510]u8, // 0x0
    };
    pub const C_Multimeter = extern struct {
        pad_0: [0x1268]u8, // 0x0
        m_hTargetC4: [0x8]u8, // 0x1268
    };
    pub const C_BaseTrigger = extern struct {
        pad_0: [0x1098]u8, // 0x0
        m_OnStartTouch: [0x18]u8, // 0x1098
        m_OnStartTouchAll: [0x18]u8, // 0x10B0
        m_OnEndTouch: [0x18]u8, // 0x10C8
        m_OnEndTouchAll: [0x18]u8, // 0x10E0
        m_OnTouching: [0x18]u8, // 0x10F8
        m_OnTouchingEachEntity: [0x18]u8, // 0x1110
        m_OnNotTouching: [0x18]u8, // 0x1128
        m_OnTouchingChanged: [0x18]u8, // 0x1140
        m_hTouchingEntities: [0x18]u8, // 0x1158
        m_iFilterName: [0x8]u8, // 0x1170
        m_hFilter: [0x4]u8, // 0x1178
        m_bDisabled: [0x4]u8, // 0x117C
    };
    pub const FilterDamageType = extern struct {
        pad_0: [0x638]u8, // 0x0
        m_iDamageType: [0x8]u8, // 0x638
    };
    pub const CAttributeList = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_Attributes: [0x68]u8, // 0x8
        m_pManager: [0x8]u8, // 0x70
    };
    pub const CPulseCell_Inflow_Wait = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_WakeResume: [0x48]u8, // 0xD8
    };
    pub const CFilterProximity = extern struct {
        pad_0: [0x638]u8, // 0x0
        m_flRadius: [0x8]u8, // 0x638
    };
    pub const CCS2WeaponGraphController = extern struct {
        pad_0: [0xC0]u8, // 0x0
        m_action: [0x18]u8, // 0xC0
        m_bActionReset: [0x18]u8, // 0xD8
        m_flWeaponActionSpeedScale: [0x18]u8, // 0xF0
        m_weaponCategory: [0x18]u8, // 0x108
        m_weaponType: [0x18]u8, // 0x120
        m_weaponExtraInfo: [0x18]u8, // 0x138
        m_flWeaponAmmo: [0x18]u8, // 0x150
        m_flWeaponAmmoMax: [0x18]u8, // 0x168
        m_flWeaponAmmoReserve: [0x18]u8, // 0x180
        m_bWeaponIsSilenced: [0x18]u8, // 0x198
        m_flWeaponIronsightAmount: [0x18]u8, // 0x1B0
        m_bIsUsingLegacyModel: [0x18]u8, // 0x1C8
        m_idleVariation: [0x18]u8, // 0x1E0
        m_deployVariation: [0x18]u8, // 0x1F8
        m_attackType: [0x18]u8, // 0x210
        m_attackThrowStrength: [0x18]u8, // 0x228
        m_flAttackVariation: [0x18]u8, // 0x240
        m_inspectVariation: [0x18]u8, // 0x258
        m_inspectExtraInfo: [0x18]u8, // 0x270
        m_reloadStage: [0x50]u8, // 0x288
    };
    pub const CEffectData = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_vOrigin: [0xC]u8, // 0x8
        m_vStart: [0xC]u8, // 0x14
        m_vNormal: [0xC]u8, // 0x20
        m_vAngles: [0xC]u8, // 0x2C
        m_hEntity: [0x4]u8, // 0x38
        m_hOtherEntity: [0x4]u8, // 0x3C
        m_flScale: [0x4]u8, // 0x40
        m_flMagnitude: [0x4]u8, // 0x44
        m_flRadius: [0x4]u8, // 0x48
        m_nSurfaceProp: [0x4]u8, // 0x4C
        m_nEffectIndex: [0x8]u8, // 0x50
        m_nDamageType: [0x4]u8, // 0x58
        m_nPenetrate: [0x2]u8, // 0x5C
        m_nMaterial: [0x2]u8, // 0x5E
        m_nHitBox: [0x2]u8, // 0x60
        m_nColor: [0x1]u8, // 0x62
        m_fFlags: [0x1]u8, // 0x63
        m_nAttachmentIndex: [0x4]u8, // 0x64
        m_nAttachmentName: [0x4]u8, // 0x68
        m_iEffectName: [0xC]u8, // 0x6C
    };
    pub const C_ParticleSystem = extern struct {
        pad_0: [0x1098]u8, // 0x0
        m_szSnapshotFileName: [0x200]u8, // 0x1098
        m_bActive: [0x1]u8, // 0x1298
        m_bFrozen: [0x3]u8, // 0x1299
        m_flFreezeTransitionDuration: [0x4]u8, // 0x129C
        m_nStopType: [0x4]u8, // 0x12A0
        m_bAnimateDuringGameplayPause: [0x4]u8, // 0x12A4
        m_iEffectIndex: [0x8]u8, // 0x12A8
        m_flStartTime: [0x4]u8, // 0x12B0
        m_flPreSimTime: [0x4]u8, // 0x12B4
        m_vServerControlPoints: [0x30]u8, // 0x12B8
        m_iServerControlPointAssignments: [0x4]u8, // 0x12E8
        m_hControlPointEnts: [0x100]u8, // 0x12EC
        m_bDataStringLocalized: [0x4]u8, // 0x13EC
        m_strDataString: [0x8]u8, // 0x13F0
        m_bNoSave: [0x1]u8, // 0x13F8
        m_bNoFreeze: [0x1]u8, // 0x13F9
        m_bNoRamp: [0x1]u8, // 0x13FA
        m_bStartActive: [0x5]u8, // 0x13FB
        m_iszEffectName: [0x8]u8, // 0x1400
        m_iszControlPointNames: [0x200]u8, // 0x1408
        m_nDataCP: [0x4]u8, // 0x1608
        m_vecDataCPValue: [0xC]u8, // 0x160C
        m_nTintCP: [0x4]u8, // 0x1618
        m_clrTint: [0x24]u8, // 0x161C
        m_bOldActive: [0x1]u8, // 0x1640
        m_bOldFrozen: [0x27]u8, // 0x1641
    };
    pub const CPulseCell_Outflow_CycleShuffled = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_Outputs: [0x18]u8, // 0x48
    };
    pub const C_WeaponSCAR20 = extern struct {
        pad_0: [0x1F50]u8, // 0x0
    };
    pub const C_FuncMover = extern struct {
        pad_0: [0x1098]u8, // 0x0
    };
    pub const CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t = extern struct {
        pItem: [0x8]u8, // 0x0
        team: [0x2]u8, // 0x8
        slot: [0xDE]u8, // 0xA
    };
    pub const CLightComponent = extern struct {
        pad_0: [0x38]u8, // 0x0
        __m_pChainEntity: [0x40]u8, // 0x38
        m_Color: [0x4]u8, // 0x78
        m_SecondaryColor: [0x4]u8, // 0x7C
        m_flBrightness: [0x4]u8, // 0x80
        m_flBrightnessScale: [0x4]u8, // 0x84
        m_flBrightnessMult: [0x4]u8, // 0x88
        m_flRange: [0x4]u8, // 0x8C
        m_flFalloff: [0x4]u8, // 0x90
        m_flAttenuation0: [0x4]u8, // 0x94
        m_flAttenuation1: [0x4]u8, // 0x98
        m_flAttenuation2: [0x4]u8, // 0x9C
        m_flTheta: [0x4]u8, // 0xA0
        m_flPhi: [0x4]u8, // 0xA4
        m_hLightCookie: [0x8]u8, // 0xA8
        m_nCascades: [0x4]u8, // 0xB0
        m_nCastShadows: [0x4]u8, // 0xB4
        m_nShadowWidth: [0x4]u8, // 0xB8
        m_nShadowHeight: [0x4]u8, // 0xBC
        m_bRenderDiffuse: [0x4]u8, // 0xC0
        m_nRenderSpecular: [0x4]u8, // 0xC4
        m_bRenderTransmissive: [0x4]u8, // 0xC8
        m_flOrthoLightWidth: [0x4]u8, // 0xCC
        m_flOrthoLightHeight: [0x4]u8, // 0xD0
        m_nStyle: [0x4]u8, // 0xD4
        m_Pattern: [0x8]u8, // 0xD8
        m_nCascadeRenderStaticObjects: [0x4]u8, // 0xE0
        m_flShadowCascadeCrossFade: [0x4]u8, // 0xE4
        m_flShadowCascadeDistanceFade: [0x4]u8, // 0xE8
        m_flShadowCascadeDistance0: [0x4]u8, // 0xEC
        m_flShadowCascadeDistance1: [0x4]u8, // 0xF0
        m_flShadowCascadeDistance2: [0x4]u8, // 0xF4
        m_flShadowCascadeDistance3: [0x4]u8, // 0xF8
        m_nShadowCascadeResolution0: [0x4]u8, // 0xFC
        m_nShadowCascadeResolution1: [0x4]u8, // 0x100
        m_nShadowCascadeResolution2: [0x4]u8, // 0x104
        m_nShadowCascadeResolution3: [0x4]u8, // 0x108
        m_bUsesBakedShadowing: [0x4]u8, // 0x10C
        m_nShadowPriority: [0x4]u8, // 0x110
        m_nBakedShadowIndex: [0x4]u8, // 0x114
        m_nLightPathUniqueId: [0x4]u8, // 0x118
        m_nLightMapUniqueId: [0x4]u8, // 0x11C
        m_bRenderToCubemaps: [0x1]u8, // 0x120
        m_bAllowSSTGeneration: [0x3]u8, // 0x121
        m_nDirectLight: [0x4]u8, // 0x124
        m_nBounceLight: [0x4]u8, // 0x128
        m_flBounceScale: [0x4]u8, // 0x12C
        m_flFadeMinDist: [0x4]u8, // 0x130
        m_flFadeMaxDist: [0x4]u8, // 0x134
        m_flShadowFadeMinDist: [0x4]u8, // 0x138
        m_flShadowFadeMaxDist: [0x4]u8, // 0x13C
        m_bEnabled: [0x1]u8, // 0x140
        m_bFlicker: [0x1]u8, // 0x141
        m_bPrecomputedFieldsValid: [0x2]u8, // 0x142
        m_vPrecomputedBoundsMins: [0xC]u8, // 0x144
        m_vPrecomputedBoundsMaxs: [0xC]u8, // 0x150
        m_vPrecomputedOBBOrigin: [0xC]u8, // 0x15C
        m_vPrecomputedOBBAngles: [0xC]u8, // 0x168
        m_vPrecomputedOBBExtent: [0xC]u8, // 0x174
        m_flPrecomputedMaxRange: [0x4]u8, // 0x180
        m_nFogLightingMode: [0x4]u8, // 0x184
        m_flFogContributionStength: [0x4]u8, // 0x188
        m_flNearClipPlane: [0x4]u8, // 0x18C
        m_SkyColor: [0x4]u8, // 0x190
        m_flSkyIntensity: [0x4]u8, // 0x194
        m_SkyAmbientBounce: [0x4]u8, // 0x198
        m_bUseSecondaryColor: [0x1]u8, // 0x19C
        m_bMixedShadows: [0x3]u8, // 0x19D
        m_flLightStyleStartTime: [0x4]u8, // 0x1A0
        m_flCapsuleLength: [0x4]u8, // 0x1A4
        m_flMinRoughness: [0x4]u8, // 0x1A8
        m_bAmbientOcclusionProxyOverride: [0x4]u8, // 0x1AC
        m_hAmbientOcclusionProxyPosition0: [0x4]u8, // 0x1B0
        m_hAmbientOcclusionProxyPosition1: [0x4]u8, // 0x1B4
        m_hAmbientOcclusionProxyPosition2: [0x4]u8, // 0x1B8
        m_hAmbientOcclusionProxyPosition3: [0x4]u8, // 0x1BC
        m_flAmbientOcclusionProxyStrength0: [0x4]u8, // 0x1C0
        m_flAmbientOcclusionProxyStrength1: [0x4]u8, // 0x1C4
        m_flAmbientOcclusionProxyStrength2: [0x4]u8, // 0x1C8
        m_flAmbientOcclusionProxyStrength3: [0x4]u8, // 0x1CC
        m_flAmbientOcclusionProxyAmbientStrength: [0x4]u8, // 0x1D0
        m_flAmbientOcclusionProxyConeAngle0: [0x4]u8, // 0x1D4
        m_flAmbientOcclusionProxyConeAngle1: [0x4]u8, // 0x1D8
        m_flAmbientOcclusionProxyConeAngle2: [0x4]u8, // 0x1DC
        m_flAmbientOcclusionProxyConeAngle3: [0x10]u8, // 0x1E0
    };
    pub const C_DecoyGrenade = extern struct {
        pad_0: [0x1FE0]u8, // 0x0
    };
    pub const C_WaterBullet = extern struct {
        pad_0: [0x1268]u8, // 0x0
    };
    pub const CCSPlayer_ActionTrackingServices = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_hLastWeaponBeforeC4AutoSwitch: [0x4]u8, // 0x48
        m_bIsRescuing: [0x4]u8, // 0x4C
        m_weaponPurchasesThisMatch: [0x70]u8, // 0x50
        m_weaponPurchasesThisRound: [0x70]u8, // 0xC0
        m_weaponCarryOverIntoThisRound: [0x70]u8, // 0x130
    };
    pub const CBrokenGlassTrap = extern struct {
        pad_0: [0x1098]u8, // 0x0
    };
    pub const C_EnvCubemap = extern struct {
        pad_0: [0x680]u8, // 0x0
        m_Entity_hCubemapTexture: [0x8]u8, // 0x680
        m_Entity_bCustomCubemapTexture: [0x4]u8, // 0x688
        m_Entity_flInfluenceRadius: [0x4]u8, // 0x68C
        m_Entity_vBoxProjectMins: [0xC]u8, // 0x690
        m_Entity_vBoxProjectMaxs: [0xC]u8, // 0x69C
        m_Entity_bMoveable: [0x4]u8, // 0x6A8
        m_Entity_nHandshake: [0x4]u8, // 0x6AC
        m_Entity_nEnvCubeMapArrayIndex: [0x4]u8, // 0x6B0
        m_Entity_nPriority: [0x4]u8, // 0x6B4
        m_Entity_flEdgeFadeDist: [0x4]u8, // 0x6B8
        m_Entity_vEdgeFadeDists: [0xC]u8, // 0x6BC
        m_Entity_flDiffuseScale: [0x4]u8, // 0x6C8
        m_Entity_bStartDisabled: [0x1]u8, // 0x6CC
        m_Entity_bDefaultEnvMap: [0x1]u8, // 0x6CD
        m_Entity_bDefaultSpecEnvMap: [0x1]u8, // 0x6CE
        m_Entity_bIndoorCubeMap: [0x1]u8, // 0x6CF
        m_Entity_bCopyDiffuseFromDefaultCubemap: [0x10]u8, // 0x6D0
        m_Entity_bEnabled: [0x8]u8, // 0x6E0
    };
    pub const CCSObserver_MovementServices = extern struct {
        pad_0: [0x258]u8, // 0x0
    };
    pub const CBodyComponent = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_pSceneNode: [0x40]u8, // 0x8
        __m_pChainEntity: [0x30]u8, // 0x48
    };
    pub const CPulseCell_Inflow_Method = extern struct {
        pad_0: [0x80]u8, // 0x0
        m_MethodName: [0x10]u8, // 0x80
        m_Description: [0x8]u8, // 0x90
        m_bIsPublic: [0x8]u8, // 0x98
        m_Args: [0x10]u8, // 0xA0
        m_ReturnValues: [0x10]u8, // 0xB0
    };
    pub const C_BaseCombatCharacter = extern struct {
        pad_0: [0x1268]u8, // 0x0
        m_hMyWearables: [0x18]u8, // 0x1268
        m_leftFootAttachment: [0x1]u8, // 0x1280
        m_rightFootAttachment: [0x3]u8, // 0x1281
        m_nWaterWakeMode: [0x4]u8, // 0x1284
        m_flWaterWorldZ: [0x4]u8, // 0x1288
        m_flWaterNextTraceTime: [0x64]u8, // 0x128C
    };
    pub const CGlowProperty = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_fGlowColor: [0x28]u8, // 0x8
        m_iGlowType: [0x4]u8, // 0x30
        m_iGlowTeam: [0x4]u8, // 0x34
        m_nGlowRange: [0x4]u8, // 0x38
        m_nGlowRangeMin: [0x4]u8, // 0x3C
        m_glowColorOverride: [0x4]u8, // 0x40
        m_bFlashing: [0x4]u8, // 0x44
        m_flGlowTime: [0x4]u8, // 0x48
        m_flGlowStartTime: [0x4]u8, // 0x4C
        m_bEligibleForScreenHighlight: [0x1]u8, // 0x50
        m_bGlowing: [0x7]u8, // 0x51
    };
    pub const C_PointClientUIDialog = extern struct {
        pad_0: [0x10C8]u8, // 0x0
        m_hActivator: [0x4]u8, // 0x10C8
        m_bStartEnabled: [0x4]u8, // 0x10CC
    };
    pub const C_SoundEventMultiPointEntity = extern struct {
        pad_0: [0x6C0]u8, // 0x0
    };
    pub const CPulseCell_BaseValue = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const C_WeaponHKP2000 = extern struct {
        pad_0: [0x1F50]u8, // 0x0
    };
    pub const C_FootstepControl = extern struct {
        pad_0: [0x1180]u8, // 0x0
        m_source: [0x8]u8, // 0x1180
        m_destination: [0x8]u8, // 0x1188
    };
    pub const CCitadelSoundOpvarSetOBB = extern struct {
        pad_0: [0x618]u8, // 0x0
        m_iszStackName: [0x8]u8, // 0x618
        m_iszOperatorName: [0x8]u8, // 0x620
        m_iszOpvarName: [0x8]u8, // 0x628
        m_vDistanceInnerMins: [0xC]u8, // 0x630
        m_vDistanceInnerMaxs: [0xC]u8, // 0x63C
        m_vDistanceOuterMins: [0xC]u8, // 0x648
        m_vDistanceOuterMaxs: [0xC]u8, // 0x654
        m_nAABBDirection: [0x8]u8, // 0x660
    };
    pub const C_CSGO_EndOfMatchLineupStart = extern struct {
        pad_0: [0x600]u8, // 0x0
    };
    pub const CPlayer_WaterServices = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_BooleanSwitchState = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_Condition: [0x90]u8, // 0xD8
        m_WhenTrue: [0x48]u8, // 0x168
        m_WhenFalse: [0x48]u8, // 0x1B0
    };
    pub const CDamageRecord = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_PlayerDamager: [0x4]u8, // 0x30
        m_PlayerRecipient: [0x4]u8, // 0x34
        m_hPlayerControllerDamager: [0x4]u8, // 0x38
        m_hPlayerControllerRecipient: [0x4]u8, // 0x3C
        m_szPlayerDamagerName: [0x8]u8, // 0x40
        m_szPlayerRecipientName: [0x8]u8, // 0x48
        m_DamagerXuid: [0x8]u8, // 0x50
        m_RecipientXuid: [0x8]u8, // 0x58
        m_flBulletsDamage: [0x4]u8, // 0x60
        m_flDamage: [0x4]u8, // 0x64
        m_flActualHealthRemoved: [0x4]u8, // 0x68
        m_iNumHits: [0x4]u8, // 0x6C
        m_iLastBulletUpdate: [0x4]u8, // 0x70
        m_bIsOtherEnemy: [0x1]u8, // 0x74
        m_killType: [0x3]u8, // 0x75
    };
    pub const VPhysicsCollisionAttribute_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_nInteractsAs: [0x8]u8, // 0x8
        m_nInteractsWith: [0x8]u8, // 0x10
        m_nInteractsExclude: [0x8]u8, // 0x18
        m_nEntityId: [0x4]u8, // 0x20
        m_nOwnerId: [0x4]u8, // 0x24
        m_nHierarchyId: [0x2]u8, // 0x28
        m_nDetailLayerMask: [0x2]u8, // 0x2A
        m_nDetailLayerMaskType: [0x1]u8, // 0x2C
        m_nTargetDetailLayer: [0x1]u8, // 0x2D
        m_nCollisionGroup: [0x1]u8, // 0x2E
        m_nCollisionFunctionMask: [0x1]u8, // 0x2F
    };
    pub const C_DynamicPropAlias_dynamic_prop = extern struct {
        pad_0: [0x14B0]u8, // 0x0
    };
    pub const CEnvSoundscapeProxyAlias_snd_soundscape_proxy = extern struct {
        pad_0: [0x698]u8, // 0x0
    };
    pub const C_OmniLight = extern struct {
        pad_0: [0x13A8]u8, // 0x0
        m_flInnerAngle: [0x4]u8, // 0x13A8
        m_flOuterAngle: [0x4]u8, // 0x13AC
        m_bShowLight: [0x8]u8, // 0x13B0
    };
    pub const C_SceneEntity = extern struct {
        pad_0: [0x608]u8, // 0x0
        m_bIsPlayingBack: [0x1]u8, // 0x608
        m_bPaused: [0x1]u8, // 0x609
        m_bMultiplayer: [0x1]u8, // 0x60A
        m_bAutogenerated: [0x1]u8, // 0x60B
        m_bAllRequirementsComplete: [0x4]u8, // 0x60C
        m_flForceClientTime: [0x4]u8, // 0x610
        m_nSceneStringIndex: [0x2]u8, // 0x614
        m_bClientOnly: [0x2]u8, // 0x616
        m_hOwner: [0x8]u8, // 0x618
        m_hActorList: [0x18]u8, // 0x620
        m_bWasPlaying: [0x10]u8, // 0x638
        m_QueuedEvents: [0x18]u8, // 0x648
        m_flCurrentTime: [0x8]u8, // 0x660
    };
    pub const CPulseCell_Inflow_Yield = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_UnyieldResume: [0x48]u8, // 0xD8
    };
    pub const C_NametagModule = extern struct {
        pad_0: [0x1270]u8, // 0x0
        m_strNametagString: [0x8]u8, // 0x1270
    };
    pub const C_EconEntity = extern struct {
        pad_0: [0x1278]u8, // 0x0
        m_flFlexDelayTime: [0x8]u8, // 0x1278
        m_flFlexDelayedWeight: [0x8]u8, // 0x1280
        m_bAttributesInitialized: [0x8]u8, // 0x1288
        m_AttributeManager: [0x610]u8, // 0x1290
        m_OriginalOwnerXuidLow: [0x4]u8, // 0x18A0
        m_OriginalOwnerXuidHigh: [0x4]u8, // 0x18A4
        m_nFallbackPaintKit: [0x4]u8, // 0x18A8
        m_nFallbackSeed: [0x4]u8, // 0x18AC
        m_flFallbackWear: [0x4]u8, // 0x18B0
        m_nFallbackStatTrak: [0x4]u8, // 0x18B4
        m_bClientside: [0x1]u8, // 0x18B8
        m_bParticleSystemsCreated: [0x7]u8, // 0x18B9
        m_vecAttachedParticles: [0x18]u8, // 0x18C0
        m_hViewmodelAttachment: [0x4]u8, // 0x18D8
        m_iOldTeam: [0x4]u8, // 0x18DC
        m_bAttachmentDirty: [0x4]u8, // 0x18E0
        m_nUnloadedModelIndex: [0x4]u8, // 0x18E4
        m_iNumOwnerValidationRetries: [0x10]u8, // 0x18E8
        m_hOldProvidee: [0x8]u8, // 0x18F8
        m_vecAttachedModels: [0x18]u8, // 0x1900
    };
    pub const CPlayer_UseServices = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const C_PointValueRemapper = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_bDisabled: [0x1]u8, // 0x600
        m_bDisabledOld: [0x1]u8, // 0x601
        m_bUpdateOnClient: [0x2]u8, // 0x602
        m_nInputType: [0x4]u8, // 0x604
        m_hRemapLineStart: [0x4]u8, // 0x608
        m_hRemapLineEnd: [0x4]u8, // 0x60C
        m_flMaximumChangePerSecond: [0x4]u8, // 0x610
        m_flDisengageDistance: [0x4]u8, // 0x614
        m_flEngageDistance: [0x4]u8, // 0x618
        m_bRequiresUseKey: [0x4]u8, // 0x61C
        m_nOutputType: [0x8]u8, // 0x620
        m_hOutputEntities: [0x18]u8, // 0x628
        m_nHapticsType: [0x4]u8, // 0x640
        m_nMomentumType: [0x4]u8, // 0x644
        m_flMomentumModifier: [0x4]u8, // 0x648
        m_flSnapValue: [0x4]u8, // 0x64C
        m_flCurrentMomentum: [0x4]u8, // 0x650
        m_nRatchetType: [0x4]u8, // 0x654
        m_flRatchetOffset: [0x4]u8, // 0x658
        m_flInputOffset: [0x4]u8, // 0x65C
        m_bEngaged: [0x1]u8, // 0x660
        m_bFirstUpdate: [0x3]u8, // 0x661
        m_flPreviousValue: [0x4]u8, // 0x664
        m_flPreviousUpdateTickTime: [0x4]u8, // 0x668
        m_vecPreviousTestPoint: [0xC]u8, // 0x66C
    };
    pub const CGameSceneNodeHandle = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_hOwner: [0x4]u8, // 0x8
        m_name: [0x4]u8, // 0xC
    };
    pub const CPulseCell_Unknown = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_UnknownKeys: [0x10]u8, // 0x48
    };
    pub const C_WeaponMP7 = extern struct {
        pad_0: [0x1F50]u8, // 0x0
    };
    pub const CSPerRoundStats_t = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_iKills: [0x4]u8, // 0x30
        m_iDeaths: [0x4]u8, // 0x34
        m_iAssists: [0x4]u8, // 0x38
        m_iDamage: [0x4]u8, // 0x3C
        m_iEquipmentValue: [0x4]u8, // 0x40
        m_iMoneySaved: [0x4]u8, // 0x44
        m_iKillReward: [0x4]u8, // 0x48
        m_iLiveTime: [0x4]u8, // 0x4C
        m_iHeadShotKills: [0x4]u8, // 0x50
        m_iObjective: [0x4]u8, // 0x54
        m_iCashEarned: [0x4]u8, // 0x58
        m_iUtilityDamage: [0x4]u8, // 0x5C
        m_iEnemiesFlashed: [0x8]u8, // 0x60
    };
    pub const CPulseCell_Outflow_CycleRandom = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_Outputs: [0x18]u8, // 0x48
    };
    pub const CPulseCell_Step_PublicOutput = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_OutputIndex: [0x8]u8, // 0x48
    };
    pub const C_CS2HudModelBase = extern struct {
        pad_0: [0x1350]u8, // 0x0
    };
    pub const C_CSGameRules = extern struct {
        pad_0: [0x40]u8, // 0x0
        m_bFreezePeriod: [0x1]u8, // 0x40
        m_bWarmupPeriod: [0x3]u8, // 0x41
        m_fWarmupPeriodEnd: [0x4]u8, // 0x44
        m_fWarmupPeriodStart: [0x4]u8, // 0x48
        m_bTerroristTimeOutActive: [0x1]u8, // 0x4C
        m_bCTTimeOutActive: [0x3]u8, // 0x4D
        m_flTerroristTimeOutRemaining: [0x4]u8, // 0x50
        m_flCTTimeOutRemaining: [0x4]u8, // 0x54
        m_nTerroristTimeOuts: [0x4]u8, // 0x58
        m_nCTTimeOuts: [0x4]u8, // 0x5C
        m_bTechnicalTimeOut: [0x1]u8, // 0x60
        m_bMatchWaitingForResume: [0x3]u8, // 0x61
        m_iFreezeTime: [0x4]u8, // 0x64
        m_iRoundTime: [0x4]u8, // 0x68
        m_fMatchStartTime: [0x4]u8, // 0x6C
        m_fRoundStartTime: [0x4]u8, // 0x70
        m_flRestartRoundTime: [0x4]u8, // 0x74
        m_bGameRestart: [0x4]u8, // 0x78
        m_flGameStartTime: [0x4]u8, // 0x7C
        m_timeUntilNextPhaseStarts: [0x4]u8, // 0x80
        m_gamePhase: [0x4]u8, // 0x84
        m_totalRoundsPlayed: [0x4]u8, // 0x88
        m_nRoundsPlayedThisPhase: [0x4]u8, // 0x8C
        m_nOvertimePlaying: [0x4]u8, // 0x90
        m_iHostagesRemaining: [0x4]u8, // 0x94
        m_bAnyHostageReached: [0x1]u8, // 0x98
        m_bMapHasBombTarget: [0x1]u8, // 0x99
        m_bMapHasRescueZone: [0x1]u8, // 0x9A
        m_bMapHasBuyZone: [0x1]u8, // 0x9B
        m_bIsQueuedMatchmaking: [0x4]u8, // 0x9C
        m_nQueuedMatchmakingMode: [0x4]u8, // 0xA0
        m_bIsValveDS: [0x1]u8, // 0xA4
        m_bLogoMap: [0x1]u8, // 0xA5
        m_bPlayAllStepSoundsOnServer: [0x2]u8, // 0xA6
        m_iSpectatorSlotCount: [0x4]u8, // 0xA8
        m_MatchDevice: [0x4]u8, // 0xAC
        m_bHasMatchStarted: [0x4]u8, // 0xB0
        m_nNextMapInMapgroup: [0x4]u8, // 0xB4
        m_szTournamentEventName: [0x200]u8, // 0xB8
        m_szTournamentEventStage: [0x200]u8, // 0x2B8
        m_szMatchStatTxt: [0x200]u8, // 0x4B8
        m_szTournamentPredictionsTxt: [0x200]u8, // 0x6B8
        m_nTournamentPredictionsPct: [0x4]u8, // 0x8B8
        m_flCMMItemDropRevealStartTime: [0x4]u8, // 0x8BC
        m_flCMMItemDropRevealEndTime: [0x4]u8, // 0x8C0
        m_bIsDroppingItems: [0x1]u8, // 0x8C4
        m_bIsQuestEligible: [0x1]u8, // 0x8C5
        m_bIsHltvActive: [0x1]u8, // 0x8C6
        m_bBombPlanted: [0x1]u8, // 0x8C7
        m_arrProhibitedItemIndices: [0xC8]u8, // 0x8C8
        m_arrTournamentActiveCasterAccounts: [0x10]u8, // 0x990
        m_numBestOfMaps: [0x4]u8, // 0x9A0
        m_nHalloweenMaskListSeed: [0x4]u8, // 0x9A4
        m_bBombDropped: [0x4]u8, // 0x9A8
        m_iRoundWinStatus: [0x4]u8, // 0x9AC
        m_eRoundWinReason: [0x4]u8, // 0x9B0
        m_bTCantBuy: [0x1]u8, // 0x9B4
        m_bCTCantBuy: [0x3]u8, // 0x9B5
        m_iMatchStats_RoundResults: [0x78]u8, // 0x9B8
        m_iMatchStats_PlayersAlive_CT: [0x78]u8, // 0xA30
        m_iMatchStats_PlayersAlive_T: [0x78]u8, // 0xAA8
        m_TeamRespawnWaveTimes: [0x80]u8, // 0xB20
        m_nActiveMutators: [0x4]u8, // 0xBA0
        m_flNextRespawnWave: [0x80]u8, // 0xBA4
        m_vMinimapMins: [0xC]u8, // 0xC24
        m_vMinimapMaxs: [0xC]u8, // 0xC30
        m_MinimapVerticalSectionHeights: [0x24]u8, // 0xC3C
        m_ullLocalMatchID: [0x8]u8, // 0xC60
        m_nEndMatchMapGroupVoteTypes: [0x28]u8, // 0xC68
        m_nEndMatchMapGroupVoteOptions: [0x28]u8, // 0xC90
        m_nEndMatchMapVoteWinner: [0x4]u8, // 0xCB8
        m_iNumConsecutiveCTLoses: [0x4]u8, // 0xCBC
        m_iNumConsecutiveTerroristLoses: [0xC0]u8, // 0xCC0
        m_nMatchAbortedEarlyReason: [0x4]u8, // 0xD80
        m_bHasTriggeredRoundStartMusic: [0x1]u8, // 0xD84
        m_bSwitchingTeamsAtRoundReset: [0x1B]u8, // 0xD85
        m_pGameModeRules: [0x8]u8, // 0xDA0
        m_RetakeRules: [0x158]u8, // 0xDA8
        m_nMatchEndCount: [0x4]u8, // 0xF00
        m_nTTeamIntroVariant: [0x4]u8, // 0xF04
        m_nCTTeamIntroVariant: [0x4]u8, // 0xF08
        m_bTeamIntroPeriod: [0x4]u8, // 0xF0C
        m_iRoundEndWinnerTeam: [0x4]u8, // 0xF10
        m_eRoundEndReason: [0x4]u8, // 0xF14
        m_bRoundEndShowTimerDefend: [0x4]u8, // 0xF18
        m_iRoundEndTimerTime: [0x4]u8, // 0xF1C
        m_sRoundEndFunFactToken: [0x8]u8, // 0xF20
        m_iRoundEndFunFactPlayerSlot: [0x4]u8, // 0xF28
        m_iRoundEndFunFactData1: [0x4]u8, // 0xF2C
        m_iRoundEndFunFactData2: [0x4]u8, // 0xF30
        m_iRoundEndFunFactData3: [0x4]u8, // 0xF34
        m_sRoundEndMessage: [0x8]u8, // 0xF38
        m_iRoundEndPlayerCount: [0x4]u8, // 0xF40
        m_bRoundEndNoMusic: [0x4]u8, // 0xF44
        m_iRoundEndLegacy: [0x4]u8, // 0xF48
        m_nRoundEndCount: [0x4]u8, // 0xF4C
        m_iRoundStartRoundNumber: [0x4]u8, // 0xF50
        m_nRoundStartCount: [0x400C]u8, // 0xF54
        m_flLastPerfSampleTime: [0x8]u8, // 0x4F60
    };
    pub const CGrenadeTracer = extern struct {
        pad_0: [0x10B0]u8, // 0x0
        m_flTracerDuration: [0x4]u8, // 0x10B0
        m_nType: [0x47C]u8, // 0x10B4
    };
    pub const CCSGameModeRules_Noop = extern struct {
        pad_0: [0x30]u8, // 0x0
    };
    pub const CPulse_BlackboardReference = extern struct {
        m_hBlackboardResource: [0x8]u8, // 0x0
        m_BlackboardResource: [0x10]u8, // 0x8
        m_nNodeID: [0x8]u8, // 0x18
        m_NodeName: [0x8]u8, // 0x20
    };
    pub const C_BaseCSGrenadeProjectile = extern struct {
        pad_0: [0x12B0]u8, // 0x0
        m_vInitialPosition: [0xC]u8, // 0x12B0
        m_vInitialVelocity: [0xC]u8, // 0x12BC
        m_nBounces: [0x8]u8, // 0x12C8
        m_nExplodeEffectIndex: [0x8]u8, // 0x12D0
        m_nExplodeEffectTickBegin: [0x4]u8, // 0x12D8
        m_vecExplodeEffectOrigin: [0xC]u8, // 0x12DC
        m_flSpawnTime: [0x4]u8, // 0x12E8
        vecLastTrailLinePos: [0xC]u8, // 0x12EC
        flNextTrailLineTime: [0x4]u8, // 0x12F8
        m_bExplodeEffectBegan: [0x1]u8, // 0x12FC
        m_bCanCreateGrenadeTrail: [0x3]u8, // 0x12FD
        m_nSnapshotTrajectoryEffectIndex: [0x8]u8, // 0x1300
        m_hSnapshotTrajectoryParticleSnapshot: [0x8]u8, // 0x1308
        m_arrTrajectoryTrailPoints: [0x18]u8, // 0x1310
        m_arrTrajectoryTrailPointCreationTimes: [0x18]u8, // 0x1328
        m_flTrajectoryTrailEffectCreationTime: [0x8]u8, // 0x1340
    };
    pub const CCSGO_RushIntroCounterTerroristPosition = extern struct {
        pad_0: [0x1D18]u8, // 0x0
    };
    pub const CPulseCell_ReturnValues = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const C_GradientFog = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_hGradientFogTexture: [0x8]u8, // 0x600
        m_flFogStartDistance: [0x4]u8, // 0x608
        m_flFogEndDistance: [0x4]u8, // 0x60C
        m_bHeightFogEnabled: [0x4]u8, // 0x610
        m_flFogStartHeight: [0x4]u8, // 0x614
        m_flFogEndHeight: [0x4]u8, // 0x618
        m_flFarZ: [0x4]u8, // 0x61C
        m_flFogMaxOpacity: [0x4]u8, // 0x620
        m_flFogFalloffExponent: [0x4]u8, // 0x624
        m_flFogVerticalExponent: [0x4]u8, // 0x628
        m_fogColor: [0x4]u8, // 0x62C
        m_flFogStrength: [0x4]u8, // 0x630
        m_flFadeTime: [0x4]u8, // 0x634
        m_bStartDisabled: [0x1]u8, // 0x638
        m_bIsEnabled: [0x1]u8, // 0x639
        m_bGradientFogNeedsTextures: [0x5E]u8, // 0x63A
    };
    pub const CCSPlayerController_InGameMoneyServices = extern struct {
        pad_0: [0x40]u8, // 0x0
        m_iAccount: [0x4]u8, // 0x40
        m_iStartAccount: [0x4]u8, // 0x44
        m_iTotalCashSpent: [0x4]u8, // 0x48
        m_iCashSpentThisRound: [0x4]u8, // 0x4C
    };
    pub const CCSPlayer_AimPunchServices = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_predictableBaseTick: [0x4]u8, // 0x48
        m_predictableBaseTickInterpAmount: [0x4]u8, // 0x4C
        m_predictableBaseAngle: [0xC]u8, // 0x50
        m_predictableBaseAngleVel: [0x44]u8, // 0x5C
        m_unpredictableBaseTick: [0x4]u8, // 0xA0
        m_unpredictableBaseAngle: [0x44]u8, // 0xA4
    };
    pub const C_HEGrenadeProjectile = extern struct {
        pad_0: [0x1348]u8, // 0x0
    };
    pub const CFilterModel = extern struct {
        pad_0: [0x638]u8, // 0x0
        m_iFilterModel: [0x8]u8, // 0x638
    };
    pub const C_SoundAreaEntityOrientedBox = extern struct {
        pad_0: [0x628]u8, // 0x0
        m_vMin: [0xC]u8, // 0x628
        m_vMax: [0xC]u8, // 0x634
    };
    pub const C_SoundOpvarSetPointEntity = extern struct {
        pad_0: [0x620]u8, // 0x0
    };
    pub const CPulseGameBlackboard = extern struct {
        pad_0: [0x608]u8, // 0x0
        m_strGraphName: [0x8]u8, // 0x608
        m_strStateBlob: [0x8]u8, // 0x610
    };
    pub const CChoreoComponent = extern struct {
        pad_0: [0x8]u8, // 0x0
        __m_pChainEntity: [0x28]u8, // 0x8
        m_hOwner: [0x4]u8, // 0x30
        m_nExernalChoreoGraphCount: [0x4]u8, // 0x34
        m_sActiveExternalChoreoGraphSlotID: [0x38]u8, // 0x38
        m_nNextSceneEventId: [0x4]u8, // 0x70
        m_flAllowResponsesEndTime: [0xC]u8, // 0x74
    };
    pub const CPulseCell_Value_RandomInt = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const C_CSWeaponBaseShotgun = extern struct {
        pad_0: [0x1F20]u8, // 0x0
    };
    pub const C_RagdollPropAttached = extern struct {
        pad_0: [0x12F0]u8, // 0x0
        m_boneIndexAttached: [0x4]u8, // 0x12F0
        m_ragdollAttachedObjectIndex: [0x4]u8, // 0x12F4
        m_attachmentPointBoneSpace: [0xC]u8, // 0x12F8
        m_attachmentPointRagdollSpace: [0xC]u8, // 0x1304
        m_vecOffset: [0xC]u8, // 0x1310
        m_parentTime: [0x4]u8, // 0x131C
        m_bHasParent: [0x8]u8, // 0x1320
    };
    pub const C_ModelPointEntity = extern struct {
        pad_0: [0x1098]u8, // 0x0
    };
    pub const C_CSGO_PreviewPlayer = extern struct {
        pad_0: [0x3720]u8, // 0x0
        m_animgraphCharacterModeString: [0x8]u8, // 0x3720
        m_flInitialModelScale: [0xA8]u8, // 0x3728
    };
    pub const C_RectLight = extern struct {
        pad_0: [0x13A8]u8, // 0x0
        m_bShowLight: [0x8]u8, // 0x13A8
    };
    pub const CCSRadarElement = extern struct {
        pad_0: [0x618]u8, // 0x0
        m_nElementType: [0x4]u8, // 0x618
        m_nElementColor: [0x4]u8, // 0x61C
        m_nTeamFilter: [0x8]u8, // 0x620
    };
    pub const CPathSimple = extern struct {
        pad_0: [0x610]u8, // 0x0
        m_CPathQueryComponent: [0xF0]u8, // 0x610
        m_pathString: [0x8]u8, // 0x700
        m_bClosedLoop: [0x8]u8, // 0x708
    };
    pub const C_FuncTrackTrain = extern struct {
        pad_0: [0x1098]u8, // 0x0
        m_nLongAxis: [0x4]u8, // 0x1098
        m_flRadius: [0x4]u8, // 0x109C
        m_flLineLength: [0x8]u8, // 0x10A0
    };
    pub const C_EconWearable = extern struct {
        pad_0: [0x1918]u8, // 0x0
        m_nForceSkin: [0x4]u8, // 0x1918
        m_bAlwaysAllow: [0x4]u8, // 0x191C
    };
    pub const C_EnvDecal = extern struct {
        pad_0: [0x1098]u8, // 0x0
        m_hDecalMaterial: [0x8]u8, // 0x1098
        m_flWidth: [0x4]u8, // 0x10A0
        m_flHeight: [0x4]u8, // 0x10A4
        m_flDepth: [0x4]u8, // 0x10A8
        m_nRenderOrder: [0x4]u8, // 0x10AC
        m_bProjectOnWorld: [0x1]u8, // 0x10B0
        m_bProjectOnCharacters: [0x1]u8, // 0x10B1
        m_bProjectOnWater: [0x2]u8, // 0x10B2
        m_flDepthSortBias: [0x1C]u8, // 0x10B4
    };
    pub const EntitySpottedState_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_bSpotted: [0x4]u8, // 0x8
        m_bSpottedByMask: [0xC]u8, // 0xC
    };
    pub const fogparams_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        dirPrimary: [0xC]u8, // 0x8
        colorPrimary: [0x4]u8, // 0x14
        colorSecondary: [0x4]u8, // 0x18
        colorPrimaryLerpTo: [0x4]u8, // 0x1C
        colorSecondaryLerpTo: [0x4]u8, // 0x20
        start: [0x4]u8, // 0x24
        end: [0x4]u8, // 0x28
        farz: [0x4]u8, // 0x2C
        maxdensity: [0x4]u8, // 0x30
        exponent: [0x4]u8, // 0x34
        HDRColorScale: [0x4]u8, // 0x38
        skyboxFogFactor: [0x4]u8, // 0x3C
        skyboxFogFactorLerpTo: [0x4]u8, // 0x40
        startLerpTo: [0x4]u8, // 0x44
        endLerpTo: [0x4]u8, // 0x48
        maxdensityLerpTo: [0x4]u8, // 0x4C
        lerptime: [0x4]u8, // 0x50
        duration: [0x4]u8, // 0x54
        blendtobackground: [0x4]u8, // 0x58
        scattering: [0x4]u8, // 0x5C
        locallightscale: [0x4]u8, // 0x60
        enable: [0x1]u8, // 0x64
        blend: [0x1]u8, // 0x65
        m_bPadding2: [0x1]u8, // 0x66
        m_bPadding: [0x1]u8, // 0x67
    };
    pub const C_WeaponM4A1 = extern struct {
        pad_0: [0x1F50]u8, // 0x0
    };
    pub const C_Item = extern struct {
        pad_0: [0x1918]u8, // 0x0
        m_pReticleHintTextName: [0x100]u8, // 0x1918
    };
    pub const C_CSPetPlacement = extern struct {
        pad_0: [0x600]u8, // 0x0
    };
    pub const C_Beam = extern struct {
        pad_0: [0x1098]u8, // 0x0
        m_flFrameRate: [0x4]u8, // 0x1098
        m_flHDRColorScale: [0x4]u8, // 0x109C
        m_flFireTime: [0x4]u8, // 0x10A0
        m_flDamage: [0x4]u8, // 0x10A4
        m_nNumBeamEnts: [0x4]u8, // 0x10A8
        m_queryHandleHalo: [0x24]u8, // 0x10AC
        m_hBaseMaterial: [0x8]u8, // 0x10D0
        m_nHaloIndex: [0x8]u8, // 0x10D8
        m_nBeamType: [0x4]u8, // 0x10E0
        m_nBeamFlags: [0x4]u8, // 0x10E4
        m_hAttachEntity: [0x28]u8, // 0x10E8
        m_nAttachIndex: [0xC]u8, // 0x1110
        m_fWidth: [0x4]u8, // 0x111C
        m_fEndWidth: [0x4]u8, // 0x1120
        m_fFadeLength: [0x4]u8, // 0x1124
        m_fHaloScale: [0x4]u8, // 0x1128
        m_fAmplitude: [0x4]u8, // 0x112C
        m_fStartFrame: [0x4]u8, // 0x1130
        m_fSpeed: [0x4]u8, // 0x1134
        m_flFrame: [0x4]u8, // 0x1138
        m_bTurnedOff: [0x4]u8, // 0x113C
        m_vecEndPos: [0xC]u8, // 0x1140
        m_hEndEntity: [0x4]u8, // 0x114C
    };
    pub const C_EnvLightProbeVolume = extern struct {
        pad_0: [0x698]u8, // 0x0
        m_Entity_hLightProbeTexture_AmbientCube: [0x8]u8, // 0x698
        m_Entity_hLightProbeTexture_SDF: [0x8]u8, // 0x6A0
        m_Entity_hLightProbeTexture_SH2_DC: [0x8]u8, // 0x6A8
        m_Entity_hLightProbeTexture_SH2_L1: [0x8]u8, // 0x6B0
        m_Entity_hLightProbeDirectLightIndicesTexture: [0x8]u8, // 0x6B8
        m_Entity_hLightProbeDirectLightScalarsTexture: [0x8]u8, // 0x6C0
        m_Entity_hLightProbeDirectLightShadowsTexture: [0x8]u8, // 0x6C8
        m_Entity_vBoxMins: [0xC]u8, // 0x6D0
        m_Entity_vBoxMaxs: [0xC]u8, // 0x6DC
        m_Entity_bMoveable: [0x4]u8, // 0x6E8
        m_Entity_nHandshake: [0x4]u8, // 0x6EC
        m_Entity_nPriority: [0x4]u8, // 0x6F0
        m_Entity_bStartDisabled: [0x4]u8, // 0x6F4
        m_Entity_nLightProbeSizeX: [0x4]u8, // 0x6F8
        m_Entity_nLightProbeSizeY: [0x4]u8, // 0x6FC
        m_Entity_nLightProbeSizeZ: [0x4]u8, // 0x700
        m_Entity_nLightProbeAtlasX: [0x4]u8, // 0x704
        m_Entity_nLightProbeAtlasY: [0x4]u8, // 0x708
        m_Entity_nLightProbeAtlasZ: [0xD]u8, // 0x70C
        m_Entity_bEnabled: [0x7]u8, // 0x719
    };
    pub const CExplosionTypeData = extern struct {
        m_SoundName: [0x10]u8, // 0x0
        m_ParticleEffect: [0xE0]u8, // 0x10
        m_bIsIncindiary: [0x1]u8, // 0xF0
        m_bHasForces: [0x7]u8, // 0xF1
        m_DecalType: [0x8]u8, // 0xF8
    };
    pub const C_FuncConveyor = extern struct {
        pad_0: [0x10A0]u8, // 0x0
        m_vecMoveDirEntitySpace: [0xC]u8, // 0x10A0
        m_flTargetSpeed: [0x4]u8, // 0x10AC
        m_nTransitionStartTick: [0x4]u8, // 0x10B0
        m_nTransitionDurationTicks: [0x4]u8, // 0x10B4
        m_flTransitionStartSpeed: [0x4]u8, // 0x10B8
        m_flFrictionScale: [0x4]u8, // 0x10BC
        m_hConveyorModels: [0x18]u8, // 0x10C0
        m_flCurrentConveyorOffset: [0x4]u8, // 0x10D8
        m_flCurrentConveyorSpeed: [0x4]u8, // 0x10DC
    };
    pub const CCSPlayer_WeaponServices = extern struct {
        pad_0: [0xD0]u8, // 0x0
        m_flNextAttack: [0x4]u8, // 0xD0
        m_nOldTotalShootPositionHistoryCount: [0x29C]u8, // 0xD4
        m_nOldTotalInputHistoryCount: [0x1250]u8, // 0x370
        m_networkAnimTiming: [0x18]u8, // 0x15C0
        m_bBlockInspectUntilNextGraphUpdate: [0x30]u8, // 0x15D8
    };
    pub const C_PhysMagnet = extern struct {
        pad_0: [0x1268]u8, // 0x0
        m_aAttachedObjectsFromServer: [0x18]u8, // 0x1268
        m_aAttachedObjects: [0x18]u8, // 0x1280
    };
    pub const CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable = extern struct {
        pad_0: [0x690]u8, // 0x0
    };
    pub const C_Breakable = extern struct {
        pad_0: [0x1098]u8, // 0x0
    };
    pub const C_PlantedC4 = extern struct {
        pad_0: [0x1288]u8, // 0x0
        m_bBombTicking: [0x4]u8, // 0x1288
        m_nBombSite: [0x4]u8, // 0x128C
        m_nSourceSoundscapeHash: [0x8]u8, // 0x1290
        m_entitySpottedState: [0x18]u8, // 0x1298
        m_flNextGlow: [0x4]u8, // 0x12B0
        m_flNextBeep: [0x4]u8, // 0x12B4
        m_flC4Blow: [0x4]u8, // 0x12B8
        m_bCannotBeDefused: [0x1]u8, // 0x12BC
        m_bHasExploded: [0x3]u8, // 0x12BD
        m_flTimerLength: [0x4]u8, // 0x12C0
        m_bBeingDefused: [0x4]u8, // 0x12C4
        m_bTriggerWarning: [0x4]u8, // 0x12C8
        m_bExplodeWarning: [0x4]u8, // 0x12CC
        m_bC4Activated: [0x1]u8, // 0x12D0
        m_bTenSecWarning: [0x3]u8, // 0x12D1
        m_flDefuseLength: [0x4]u8, // 0x12D4
        m_flDefuseCountDown: [0x4]u8, // 0x12D8
        m_bBombDefused: [0x4]u8, // 0x12DC
        m_hBombDefuser: [0x8]u8, // 0x12E0
        m_AttributeManager: [0x610]u8, // 0x12E8
        m_hDefuserMultimeter: [0x4]u8, // 0x18F8
        m_flNextRadarFlashTime: [0x4]u8, // 0x18FC
        m_bRadarFlash: [0x4]u8, // 0x1900
        m_pBombDefuser: [0x4]u8, // 0x1904
        m_fLastDefuseTime: [0x8]u8, // 0x1908
        m_pPredictionOwner: [0x8]u8, // 0x1910
        m_vecC4ExplodeSpectatePos: [0xC]u8, // 0x1918
        m_vecC4ExplodeSpectateAng: [0xC]u8, // 0x1924
        m_flC4ExplodeSpectateDuration: [0x28]u8, // 0x1930
    };
    pub const CCSCustomHudLayoutState = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_playerSlot: [0x4]u8, // 0x30
        m_bInputCaptureEnabled: [0x4]u8, // 0x34
        m_vecHasClasses: [0x18]u8, // 0x38
        m_vecDialogVariableStrings: [0xB8]u8, // 0x50
    };
    pub const CCSGO_WingmanIntroCharacterPosition = extern struct {
        pad_0: [0x1D18]u8, // 0x0
    };
    pub const CFilterName = extern struct {
        pad_0: [0x638]u8, // 0x0
        m_iFilterName: [0x8]u8, // 0x638
    };
    pub const C_RagdollProp = extern struct {
        pad_0: [0x1268]u8, // 0x0
        m_ragEnabled: [0x18]u8, // 0x1268
        m_ragPos: [0x18]u8, // 0x1280
        m_ragAngles: [0x18]u8, // 0x1298
        m_flBlendWeight: [0x4]u8, // 0x12B0
        m_hRagdollSource: [0x4]u8, // 0x12B4
        m_iEyeAttachment: [0x4]u8, // 0x12B8
        m_flBlendWeightCurrent: [0x4]u8, // 0x12BC
        m_parentPhysicsBoneIndices: [0x18]u8, // 0x12C0
        m_worldSpaceBoneComputationOrder: [0x18]u8, // 0x12D8
    };
    pub const CPulse_CallInfo = extern struct {
        m_PortName: [0x10]u8, // 0x0
        m_nEditorNodeID: [0x8]u8, // 0x10
        m_RegisterMap: [0x30]u8, // 0x18
        m_CallMethodID: [0x4]u8, // 0x48
        m_nSrcChunk: [0x4]u8, // 0x4C
        m_nSrcInstruction: [0x4]u8, // 0x50
        m_nBreakDestChunk: [0x4]u8, // 0x54
        m_nBreakDestInstruction: [0x8]u8, // 0x58
    };
    pub const C_MapPreviewParticleSystem = extern struct {
        pad_0: [0x1668]u8, // 0x0
    };
    pub const CBaseAnimGraph = extern struct {
        pad_0: [0x1098]u8, // 0x0
        m_graphControllerManager: [0x98]u8, // 0x1098
        m_pMainGraphController: [0x8]u8, // 0x1130
        m_bInitiallyPopulateInterpHistory: [0x2]u8, // 0x1138
        m_bSuppressAnimEventSounds: [0x6]u8, // 0x113A
        m_OnLayerCycleUpdated: [0x20]u8, // 0x1140
        m_OnExternalChoreoGraphChanged: [0x20]u8, // 0x1160
        m_bAnimGraphUpdateEnabled: [0x1]u8, // 0x1180
        m_bAnimationUpdateScheduled: [0x3]u8, // 0x1181
        m_vecForce: [0xC]u8, // 0x1184
        m_nForceBone: [0x8]u8, // 0x1190
        m_pClientsideRagdoll: [0x8]u8, // 0x1198
        m_bBuiltRagdoll: [0x10]u8, // 0x11A0
        m_pRagdollControl: [0x8]u8, // 0x11B0
        m_RagdollPose: [0x48]u8, // 0x11B8
        m_bRagdollEnabled: [0x1]u8, // 0x1200
        m_bRagdollClientSide: [0x1]u8, // 0x1201
        m_bShouldUpdateTransformations: [0xE]u8, // 0x1202
        m_bHasAnimatedMaterialAttributes: [0x58]u8, // 0x1210
    };
    pub const CPulseCell_InlineNodeSkipSelector = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_nFlowNodeID: [0x4]u8, // 0x48
        m_bAnd: [0x4]u8, // 0x4C
        m_PassOutflow: [0x18]u8, // 0x50
        m_FailOutflow: [0x48]u8, // 0x68
    };
    pub const C_LightEntity = extern struct {
        pad_0: [0x1098]u8, // 0x0
        m_CLightComponent: [0x8]u8, // 0x1098
    };
    pub const C_WeaponM249 = extern struct {
        pad_0: [0x1F50]u8, // 0x0
    };
    pub const C_LocalTempEntity = extern struct {
        pad_0: [0x1268]u8, // 0x0
        flags: [0x4]u8, // 0x1268
        die: [0x4]u8, // 0x126C
        m_flFrameMax: [0x4]u8, // 0x1270
        x: [0x4]u8, // 0x1274
        y: [0x4]u8, // 0x1278
        fadeSpeed: [0x4]u8, // 0x127C
        bounceFactor: [0x4]u8, // 0x1280
        hitSound: [0x4]u8, // 0x1284
        priority: [0x4]u8, // 0x1288
        tentOffset: [0xC]u8, // 0x128C
        m_vecTempEntAngVelocity: [0xC]u8, // 0x1298
        tempent_renderamt: [0x4]u8, // 0x12A4
        m_vecNormal: [0xC]u8, // 0x12A8
        m_flSpriteScale: [0x4]u8, // 0x12B4
        m_nFlickerFrame: [0x4]u8, // 0x12B8
        m_flFrameRate: [0x4]u8, // 0x12BC
        m_flFrame: [0x8]u8, // 0x12C0
        m_pszImpactEffect: [0x8]u8, // 0x12C8
        m_pszParticleEffect: [0x8]u8, // 0x12D0
        m_bParticleCollision: [0x4]u8, // 0x12D8
        m_iLastCollisionFrame: [0x4]u8, // 0x12DC
        m_vLastCollisionOrigin: [0xC]u8, // 0x12E0
        m_vecTempEntVelocity: [0xC]u8, // 0x12EC
        m_vecPrevAbsOrigin: [0xC]u8, // 0x12F8
        m_vecTempEntAcceleration: [0xC]u8, // 0x1304
    };
    pub const C_WeaponTaser = extern struct {
        pad_0: [0x1F50]u8, // 0x0
        m_fFireTime: [0x4]u8, // 0x1F50
        m_nLastAttackTick: [0xC]u8, // 0x1F54
    };
    pub const C_PointEntity = extern struct {
        pad_0: [0x600]u8, // 0x0
    };
    pub const C_SingleplayRules = extern struct {
        pad_0: [0x40]u8, // 0x0
    };
    pub const CLogicalEntity = extern struct {
        pad_0: [0x600]u8, // 0x0
    };
    pub const C_PrecipitationBlocker = extern struct {
        pad_0: [0x1098]u8, // 0x0
    };
    pub const C_CSGO_CounterTerroristTeamIntroCamera = extern struct {
        pad_0: [0x690]u8, // 0x0
    };
    pub const C_SoundOpvarSetPathCornerEntity = extern struct {
        pad_0: [0x620]u8, // 0x0
    };
    pub const CPlayer_WeaponServices = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_hMyWeapons: [0x18]u8, // 0x48
        m_hActiveWeapon: [0x4]u8, // 0x60
        m_hLastWeapon: [0x4]u8, // 0x64
        m_iAmmo: [0x40]u8, // 0x68
    };
    pub const C_WeaponNegev = extern struct {
        pad_0: [0x1F50]u8, // 0x0
    };
    pub const C_WeaponFiveSeven = extern struct {
        pad_0: [0x1F50]u8, // 0x0
    };
    pub const C_WeaponSawedoff = extern struct {
        pad_0: [0x1F20]u8, // 0x0
    };
    pub const C_TriggerVolume = extern struct {
        pad_0: [0x1098]u8, // 0x0
    };
    pub const CPulseCell_LimitCount = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_nLimitCount: [0x8]u8, // 0x48
    };
    pub const CPulseCell_Step_CallExternalMethod = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_MethodName: [0x10]u8, // 0xD8
        m_nBlackboardIndex: [0x8]u8, // 0xE8
        m_ExpectedArgs: [0x10]u8, // 0xF0
        m_nAsyncCallMode: [0x8]u8, // 0x100
        m_OnFinished: [0x48]u8, // 0x108
    };
    pub const C_WeaponMP9 = extern struct {
        pad_0: [0x1F50]u8, // 0x0
    };
    pub const C_DynamicPropAlias_prop_dynamic_override = extern struct {
        pad_0: [0x14B0]u8, // 0x0
    };
    pub const CEnvSoundscapeTriggerable = extern struct {
        pad_0: [0x690]u8, // 0x0
    };
    pub const C_PlayerPing = extern struct {
        pad_0: [0x630]u8, // 0x0
        m_hPlayer: [0x4]u8, // 0x630
        m_hPingedEntity: [0x4]u8, // 0x634
        m_iType: [0x4]u8, // 0x638
        m_bUrgent: [0x1]u8, // 0x63C
        m_szPlaceName: [0x13]u8, // 0x63D
    };
    pub const C_AK47 = extern struct {
        pad_0: [0x1F50]u8, // 0x0
    };
    pub const C_CSGO_MapPreviewCameraPathNode = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_szParentPathUniqueID: [0x8]u8, // 0x600
        m_nPathIndex: [0x4]u8, // 0x608
        m_vInTangentLocal: [0xC]u8, // 0x60C
        m_vOutTangentLocal: [0xC]u8, // 0x618
        m_flFOV: [0x4]u8, // 0x624
        m_flCameraSpeed: [0x4]u8, // 0x628
        m_flEaseIn: [0x4]u8, // 0x62C
        m_flEaseOut: [0x4]u8, // 0x630
        m_vInTangentWorld: [0xC]u8, // 0x634
        m_vOutTangentWorld: [0x10]u8, // 0x640
    };
    pub const C_CSPlayerResource = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_bHostageAlive: [0xC]u8, // 0x600
        m_isHostageFollowingSomeone: [0xC]u8, // 0x60C
        m_iHostageEntityIDs: [0x30]u8, // 0x618
        m_bombsiteCenterA: [0xC]u8, // 0x648
        m_bombsiteCenterB: [0xC]u8, // 0x654
        m_hostageRescueX: [0x10]u8, // 0x660
        m_hostageRescueY: [0x10]u8, // 0x670
        m_hostageRescueZ: [0x10]u8, // 0x680
        m_bEndMatchNextMapAllVoted: [0x1]u8, // 0x690
        m_foundGoalPositions: [0x7]u8, // 0x691
    };
    pub const CSkyboxReference = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_worldGroupId: [0x4]u8, // 0x600
        m_hSkyCamera: [0x4]u8, // 0x604
    };
    pub const C_IncendiaryGrenade = extern struct {
        pad_0: [0x1FE0]u8, // 0x0
    };
    pub const CFilterClass = extern struct {
        pad_0: [0x638]u8, // 0x0
        m_iFilterClass: [0x8]u8, // 0x638
    };
    pub const C_PointCameraVFOV = extern struct {
        pad_0: [0x660]u8, // 0x0
        m_flVerticalFOV: [0x8]u8, // 0x660
    };
    pub const C_PointCamera = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_FOV: [0x4]u8, // 0x600
        m_Resolution: [0x4]u8, // 0x604
        m_bFogEnable: [0x4]u8, // 0x608
        m_FogColor: [0x4]u8, // 0x60C
        m_flFogStart: [0x4]u8, // 0x610
        m_flFogEnd: [0x4]u8, // 0x614
        m_flFogMaxDensity: [0x4]u8, // 0x618
        m_bActive: [0x1]u8, // 0x61C
        m_bUseScreenAspectRatio: [0x3]u8, // 0x61D
        m_flAspectRatio: [0x4]u8, // 0x620
        m_bNoSky: [0x4]u8, // 0x624
        m_fBrightness: [0x4]u8, // 0x628
        m_flZFar: [0x4]u8, // 0x62C
        m_flZNear: [0x4]u8, // 0x630
        m_bCanHLTVUse: [0x1]u8, // 0x634
        m_bAlignWithParent: [0x1]u8, // 0x635
        m_bDofEnabled: [0x2]u8, // 0x636
        m_flDofNearBlurry: [0x4]u8, // 0x638
        m_flDofNearCrisp: [0x4]u8, // 0x63C
        m_flDofFarCrisp: [0x4]u8, // 0x640
        m_flDofFarBlurry: [0x4]u8, // 0x644
        m_flDofTiltToGround: [0x4]u8, // 0x648
        m_TargetFOV: [0x4]u8, // 0x64C
        m_DegreesPerSecond: [0x4]u8, // 0x650
        m_bIsOn: [0x4]u8, // 0x654
        m_pNext: [0x8]u8, // 0x658
    };
    pub const CPathWithDynamicNodes = extern struct {
        pad_0: [0x710]u8, // 0x0
        m_vecPathNodes: [0x20]u8, // 0x710
        m_xInitialPathWorldToLocal: [0x20]u8, // 0x730
        m_eDesiredDirection: [0x4]u8, // 0x750
        m_bIgnoreParentRotation: [0xC]u8, // 0x754
    };
    pub const CBaseFilter = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_bNegated: [0x8]u8, // 0x600
        m_OnPass: [0x18]u8, // 0x608
        m_OnFail: [0x18]u8, // 0x620
    };
    pub const WeaponPurchaseTracker_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_weaponPurchases: [0x68]u8, // 0x8
    };
    pub const CMapInfo = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_iBuyingStatus: [0x4]u8, // 0x600
        m_flBombRadius: [0x4]u8, // 0x604
        m_iPetPopulation: [0x4]u8, // 0x608
        m_bUseNormalSpawnsForDM: [0x1]u8, // 0x60C
        m_bDisableAutoGeneratedDMSpawns: [0x3]u8, // 0x60D
        m_flBotMaxVisionDistance: [0x4]u8, // 0x610
        m_iHostageCount: [0x4]u8, // 0x614
        m_bFadePlayerVisibilityFarZ: [0x1]u8, // 0x618
        m_bRainTraceToSkyEnabled: [0x1]u8, // 0x619
        m_bGPUCullSkybox: [0x2]u8, // 0x61A
        m_flEnvRainStrength: [0x4]u8, // 0x61C
        m_flEnvPuddleRippleStrength: [0x4]u8, // 0x620
        m_flEnvPuddleRippleDirection: [0x4]u8, // 0x624
        m_flEnvWetnessCoverage: [0x4]u8, // 0x628
        m_flEnvWetnessDryingAmount: [0x4]u8, // 0x62C
    };
    pub const C_CSGO_EndOfMatchCamera = extern struct {
        pad_0: [0x690]u8, // 0x0
    };
    pub const C_BaseGrenade = extern struct {
        pad_0: [0x1268]u8, // 0x0
        m_bHasWarnedAI: [0x1]u8, // 0x1268
        m_bIsSmokeGrenade: [0x1]u8, // 0x1269
        m_bIsLive: [0x2]u8, // 0x126A
        m_DmgRadius: [0x4]u8, // 0x126C
        m_flDetonateTime: [0x4]u8, // 0x1270
        m_flWarnAITime: [0x4]u8, // 0x1274
        m_flDamage: [0x8]u8, // 0x1278
        m_iszBounceSound: [0x8]u8, // 0x1280
        m_ExplosionSound: [0x8]u8, // 0x1288
        m_hThrower: [0x18]u8, // 0x1290
        m_flNextAttack: [0x4]u8, // 0x12A8
        m_hOriginalThrower: [0x4]u8, // 0x12AC
    };
    pub const C_PlayerSprayDecal = extern struct {
        pad_0: [0x1098]u8, // 0x0
        m_nUniqueID: [0x4]u8, // 0x1098
        m_unAccountID: [0x4]u8, // 0x109C
        m_unTraceID: [0x4]u8, // 0x10A0
        m_rtGcTime: [0x4]u8, // 0x10A4
        m_vecEndPos: [0xC]u8, // 0x10A8
        m_vecStart: [0xC]u8, // 0x10B4
        m_vecLeft: [0xC]u8, // 0x10C0
        m_vecNormal: [0xC]u8, // 0x10CC
        m_nPlayer: [0x4]u8, // 0x10D8
        m_nEntity: [0x4]u8, // 0x10DC
        m_nHitbox: [0x4]u8, // 0x10E0
        m_flCreationTime: [0x4]u8, // 0x10E4
        m_nTintID: [0x4]u8, // 0x10E8
        m_nVersion: [0x1]u8, // 0x10EC
        m_ubSignature: [0x8B]u8, // 0x10ED
        m_SprayRenderHelper: [0x30]u8, // 0x1178
    };
    pub const CEntityIdentity = extern struct {
        pad_0: [0x14]u8, // 0x0
        m_nameStringTableIndex: [0x4]u8, // 0x14
        m_name: [0x8]u8, // 0x18
        m_designerName: [0x10]u8, // 0x20
        m_flags: [0x8]u8, // 0x30
        m_worldGroupId: [0x4]u8, // 0x38
        m_fDataObjectTypes: [0x4]u8, // 0x3C
        m_PathIndex: [0x8]u8, // 0x40
        m_pAttributes: [0x8]u8, // 0x48
        m_pPrev: [0x8]u8, // 0x50
        m_pNext: [0x8]u8, // 0x58
        m_pPrevByClass: [0x8]u8, // 0x60
        m_pNextByClass: [0x8]u8, // 0x68
    };
    pub const CPulseCell_LimitCount__Criteria_t = extern struct {
        m_bLimitCountPasses: [0x1]u8, // 0x0
    };
    pub const C_CS2HudModelArms = extern struct {
        pad_0: [0x1460]u8, // 0x0
    };
    pub const CBasePlayerVData = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_sModelName: [0xE0]u8, // 0x28
        m_sModelNameAg2Override: [0xE0]u8, // 0x108
        m_flHeadDamageMultiplier: [0x10]u8, // 0x1E8
        m_flChestDamageMultiplier: [0x10]u8, // 0x1F8
        m_flStomachDamageMultiplier: [0x10]u8, // 0x208
        m_flArmDamageMultiplier: [0x10]u8, // 0x218
        m_flLegDamageMultiplier: [0x10]u8, // 0x228
        m_flHoldBreathTime: [0x4]u8, // 0x238
        m_flDrowningDamageInterval: [0x4]u8, // 0x23C
        m_nDrowningDamageInitial: [0x4]u8, // 0x240
        m_nDrowningDamageMax: [0x4]u8, // 0x244
        m_nWaterSpeed: [0x4]u8, // 0x248
        m_flUseRange: [0x4]u8, // 0x24C
        m_flUseAngleTolerance: [0x4]u8, // 0x250
        m_flCrouchTime: [0x4]u8, // 0x254
    };
    pub const C_LightSpotEntity = extern struct {
        pad_0: [0x10A0]u8, // 0x0
    };
    pub const CCSGameModeRules_Deathmatch = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_flDMBonusStartTime: [0x4]u8, // 0x30
        m_flDMBonusTimeLength: [0x4]u8, // 0x34
        m_sDMBonusWeapon: [0x8]u8, // 0x38
    };
    pub const CPulseCell_CursorQueue = extern struct {
        pad_0: [0x128]u8, // 0x0
        m_nCursorsAllowedToRunParallel: [0x8]u8, // 0x128
    };
    pub const CPulseCell_Value_RandomFloat = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseExecCursor = extern struct {
        pad_0: [0xD8]u8, // 0x0
    };
    pub const C_Sprite = extern struct {
        pad_0: [0x1098]u8, // 0x0
        m_hSpriteMaterial: [0x8]u8, // 0x1098
        m_hAttachedToEntity: [0x4]u8, // 0x10A0
        m_nAttachment: [0x4]u8, // 0x10A4
        m_flSpriteFramerate: [0x4]u8, // 0x10A8
        m_flFrame: [0x4]u8, // 0x10AC
        m_flDieTime: [0x10]u8, // 0x10B0
        m_nBrightness: [0x4]u8, // 0x10C0
        m_flBrightnessDuration: [0x4]u8, // 0x10C4
        m_flSpriteScale: [0x4]u8, // 0x10C8
        m_flScaleDuration: [0x4]u8, // 0x10CC
        m_bWorldSpaceScale: [0x4]u8, // 0x10D0
        m_flGlowProxySize: [0x4]u8, // 0x10D4
        m_flHDRColorScale: [0x4]u8, // 0x10D8
        m_flLastTime: [0x4]u8, // 0x10DC
        m_flMaxFrame: [0x4]u8, // 0x10E0
        m_flStartScale: [0x4]u8, // 0x10E4
        m_flDestScale: [0x4]u8, // 0x10E8
        m_flScaleTimeStart: [0x4]u8, // 0x10EC
        m_nStartBrightness: [0x4]u8, // 0x10F0
        m_nDestBrightness: [0x4]u8, // 0x10F4
        m_flBrightnessTimeStart: [0x10]u8, // 0x10F8
        m_nSpriteWidth: [0x4]u8, // 0x1108
        m_nSpriteHeight: [0x4]u8, // 0x110C
        m_flSpeed: [0x8]u8, // 0x1110
    };
    pub const C_CsmFovOverride = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_cameraName: [0x8]u8, // 0x600
        m_flCsmFovOverrideValue: [0x8]u8, // 0x608
    };
    pub const C_WeaponGlock = extern struct {
        pad_0: [0x1F50]u8, // 0x0
    };
    pub const C_PhysicsProp = extern struct {
        pad_0: [0x13E0]u8, // 0x0
        m_bAwake: [0x10]u8, // 0x13E0
    };
    pub const CFilterTeam = extern struct {
        pad_0: [0x638]u8, // 0x0
        m_iFilterTeam: [0x8]u8, // 0x638
    };
    pub const CBasePlayerWeaponVData = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_szWorldModel: [0xE0]u8, // 0x28
        m_szWorldModelAg2Override: [0xE0]u8, // 0x108
        m_sToolsOnlyOwnerModelName: [0xE0]u8, // 0x1E8
        m_bBuiltRightHanded: [0x1]u8, // 0x2C8
        m_bAllowFlipping: [0x7]u8, // 0x2C9
        m_sMuzzleAttachment: [0x20]u8, // 0x2D0
        m_szMuzzleFlashParticle: [0xE0]u8, // 0x2F0
        m_szMuzzleFlashParticleConfig: [0x8]u8, // 0x3D0
        m_szBarrelSmokeParticle: [0xE0]u8, // 0x3D8
        m_nMuzzleSmokeShotThreshold: [0x4]u8, // 0x4B8
        m_flMuzzleSmokeTimeout: [0x4]u8, // 0x4BC
        m_flMuzzleSmokeDecrementRate: [0x4]u8, // 0x4C0
        m_bGenerateMuzzleLight: [0x1]u8, // 0x4C4
        m_bShouldAnimateInWorld: [0x1]u8, // 0x4C5
        m_bLinkedCooldowns: [0x1]u8, // 0x4C6
        m_iFlags: [0x1]u8, // 0x4C7
        m_iWeight: [0x4]u8, // 0x4C8
        m_bAutoSwitchTo: [0x1]u8, // 0x4CC
        m_bAutoSwitchFrom: [0x1]u8, // 0x4CD
        m_nPrimaryAmmoType: [0x1]u8, // 0x4CE
        m_nSecondaryAmmoType: [0x1]u8, // 0x4CF
        m_iMaxClip1: [0x4]u8, // 0x4D0
        m_iMaxClip2: [0x4]u8, // 0x4D4
        m_iDefaultClip1: [0x4]u8, // 0x4D8
        m_iDefaultClip2: [0x4]u8, // 0x4DC
        m_bReserveAmmoAsClips: [0x1]u8, // 0x4E0
        m_bTreatAsSingleClip: [0x1]u8, // 0x4E1
        m_bKeepLoadedAmmo: [0x2]u8, // 0x4E2
        m_iRumbleEffect: [0x4]u8, // 0x4E4
        m_flDropSpeed: [0x4]u8, // 0x4E8
        m_iSlot: [0x4]u8, // 0x4EC
        m_iPosition: [0x8]u8, // 0x4F0
        m_aShootSounds: [0x28]u8, // 0x4F8
    };
    pub const C_SmokeGrenade = extern struct {
        pad_0: [0x1FE0]u8, // 0x0
    };
    pub const C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel = extern struct {
        pad_0: [0x37D0]u8, // 0x0
    };
    pub const CCSGO_RushIntroCharacterPosition = extern struct {
        pad_0: [0x1D18]u8, // 0x0
    };
    pub const CInfoParticleTarget = extern struct {
        pad_0: [0x600]u8, // 0x0
    };
    pub const CCSPlayer_DamageReactServices = extern struct {
        pad_0: [0x50]u8, // 0x0
    };
    pub const C_PointClientUIWorldPanel = extern struct {
        pad_0: [0x10D0]u8, // 0x0
        m_bForceRecreateNextUpdate: [0x1]u8, // 0x10D0
        m_bMoveViewToPlayerNextThink: [0x1]u8, // 0x10D1
        m_bCheckCSSClasses: [0xE]u8, // 0x10D2
        m_anchorDeltaTransform: [0x190]u8, // 0x10E0
        m_pOffScreenIndicator: [0x28]u8, // 0x1270
        m_bIgnoreInput: [0x1]u8, // 0x1298
        m_bLit: [0x1]u8, // 0x1299
        m_bFollowPlayerAcrossTeleport: [0x2]u8, // 0x129A
        m_flWidth: [0x4]u8, // 0x129C
        m_flHeight: [0x4]u8, // 0x12A0
        m_flDPI: [0x4]u8, // 0x12A4
        m_flWindowUIScale: [0x4]u8, // 0x12A8
        m_flInteractDistance: [0x4]u8, // 0x12AC
        m_flDepthOffset: [0x4]u8, // 0x12B0
        m_unOwnerContext: [0x4]u8, // 0x12B4
        m_unHorizontalAlign: [0x4]u8, // 0x12B8
        m_unVerticalAlign: [0x4]u8, // 0x12BC
        m_unOrientation: [0x4]u8, // 0x12C0
        m_bAllowInteractionFromAllSceneWorlds: [0x4]u8, // 0x12C4
        m_vecCSSClasses: [0x18]u8, // 0x12C8
        m_bOpaque: [0x1]u8, // 0x12E0
        m_bNoDepth: [0x1]u8, // 0x12E1
        m_bVisibleWhenParentNoDraw: [0x1]u8, // 0x12E2
        m_bRenderBackface: [0x1]u8, // 0x12E3
        m_bUseOffScreenIndicator: [0x1]u8, // 0x12E4
        m_bExcludeFromSaveGames: [0x1]u8, // 0x12E5
        m_bGrabbable: [0x1]u8, // 0x12E6
        m_bOnlyRenderToTexture: [0x1]u8, // 0x12E7
        m_bDisableMipGen: [0x4]u8, // 0x12E8
        m_nExplicitImageLayout: [0x4]u8, // 0x12EC
        m_bIgnoreParentOrientation: [0x10]u8, // 0x12F0
    };
    pub const C_EntityFlame = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_hEntAttached: [0x28]u8, // 0x600
        m_hOldAttached: [0x4]u8, // 0x628
        m_bCheapEffect: [0x1C]u8, // 0x62C
    };
    pub const CBaseAnimGraphAlias_baseanimating = extern struct {
        pad_0: [0x1268]u8, // 0x0
    };
    pub const CBasePlayerController = extern struct {
        pad_0: [0x608]u8, // 0x0
        m_CommandContext: [0xA8]u8, // 0x608
        m_nInButtonsWhichAreToggles: [0x8]u8, // 0x6B0
        m_nTickBase: [0x4]u8, // 0x6B8
        m_hPawn: [0x4]u8, // 0x6BC
        m_bKnownTeamMismatch: [0x4]u8, // 0x6C0
        m_hPredictedPawn: [0x8]u8, // 0x6C4
        m_nSplitScreenSlot: [0x4]u8, // 0x6CC
        m_hSplitOwner: [0x8]u8, // 0x6D0
        m_hSplitScreenPlayers: [0x18]u8, // 0x6D8
        m_bIsHLTV: [0x4]u8, // 0x6F0
        m_iConnected: [0x4]u8, // 0x6F4
        m_iMostConnected: [0x4]u8, // 0x6F8
        m_iszPlayerName: [0x8C]u8, // 0x6FC
        m_steamID: [0x8]u8, // 0x788
        m_bIsLocalPlayerController: [0x1]u8, // 0x790
        m_bNoClipEnabled: [0x3]u8, // 0x791
        m_iDesiredFOV: [0x6C]u8, // 0x794
    };
    pub const C_CSGO_EndOfMatchLineupEndpoint = extern struct {
        pad_0: [0x600]u8, // 0x0
    };
    pub const GeneratedTextureHandle_t = extern struct {
        m_strBitmapName: [0x60]u8, // 0x0
    };
    pub const CompositeMaterialInputContainer_t = extern struct {
        m_bEnabled: [0x4]u8, // 0x0
        m_nCompositeMaterialInputContainerSourceType: [0x4]u8, // 0x4
        m_strSpecificContainerMaterial: [0xE0]u8, // 0x8
        m_strAttrName: [0x8]u8, // 0xE8
        m_strAlias: [0x8]u8, // 0xF0
        m_vecLooseVariables: [0x18]u8, // 0xF8
        m_strAttrNameForVar: [0x8]u8, // 0x110
        m_bExposeExternally: [0x20]u8, // 0x118
    };
    pub const CompositeMaterialAssemblyProcedure_t = extern struct {
        m_vecCompMatIncludes: [0x18]u8, // 0x0
        m_vecMatchFilters: [0x18]u8, // 0x18
        m_vecCompositeInputContainers: [0x18]u8, // 0x30
        m_vecPropertyMutators: [0x18]u8, // 0x48
    };
    pub const CompositeMaterialInputLooseVariable_t = extern struct {
        m_strName: [0x8]u8, // 0x0
        m_bExposeExternally: [0x8]u8, // 0x8
        m_strExposedFriendlyName: [0x8]u8, // 0x10
        m_strExposedFriendlyGroupName: [0x8]u8, // 0x18
        m_bExposedVariableIsFixedRange: [0x8]u8, // 0x20
        m_strExposedVisibleWhenTrue: [0x8]u8, // 0x28
        m_strExposedHiddenWhenTrue: [0x8]u8, // 0x30
        m_strExposedValueList: [0x8]u8, // 0x38
        m_nVariableType: [0x4]u8, // 0x40
        m_bValueBoolean: [0x4]u8, // 0x44
        m_nValueIntX: [0x4]u8, // 0x48
        m_nValueIntY: [0x4]u8, // 0x4C
        m_nValueIntZ: [0x4]u8, // 0x50
        m_nValueIntW: [0x4]u8, // 0x54
        m_bHasFloatBounds: [0x4]u8, // 0x58
        m_flValueFloatX: [0x4]u8, // 0x5C
        m_flValueFloatX_Min: [0x4]u8, // 0x60
        m_flValueFloatX_Max: [0x4]u8, // 0x64
        m_flValueFloatY: [0x4]u8, // 0x68
        m_flValueFloatY_Min: [0x4]u8, // 0x6C
        m_flValueFloatY_Max: [0x4]u8, // 0x70
        m_flValueFloatZ: [0x4]u8, // 0x74
        m_flValueFloatZ_Min: [0x4]u8, // 0x78
        m_flValueFloatZ_Max: [0x4]u8, // 0x7C
        m_flValueFloatW: [0x4]u8, // 0x80
        m_flValueFloatW_Min: [0x4]u8, // 0x84
        m_flValueFloatW_Max: [0x4]u8, // 0x88
        m_cValueColor4: [0x4]u8, // 0x8C
        m_nValueSystemVar: [0x8]u8, // 0x90
        m_strResourceMaterial: [0xE0]u8, // 0x98
        m_strTextureContentAssetPath: [0x8]u8, // 0x178
        m_strTextureRuntimeResourcePath: [0xE0]u8, // 0x180
        m_strTextureCompilationVtexTemplate: [0x8]u8, // 0x260
        m_nTextureType: [0x8]u8, // 0x268
        m_strString: [0x8]u8, // 0x270
        m_strPanoramaPanelPath: [0x8]u8, // 0x278
        m_nPanoramaRenderRes: [0x8]u8, // 0x280
    };
    pub const screenshake_t = extern struct {
        endtime: [0x4]u8, // 0x0
        duration: [0x4]u8, // 0x4
        amplitude: [0x4]u8, // 0x8
        frequency: [0x4]u8, // 0xC
        nextShake: [0x4]u8, // 0x10
        offset: [0xC]u8, // 0x14
        angle: [0x8]u8, // 0x20
        direction: [0xC]u8, // 0x28
        nShakeType: [0x4]u8, // 0x34
    };
    pub const CCS2UIPawnGraphController = extern struct {
        pad_0: [0xC0]u8, // 0x0
        m_nAnimationSeed: [0x18]u8, // 0xC0
        m_characterMode: [0x18]u8, // 0xD8
        m_bCharacterModeReset: [0x18]u8, // 0xF0
        m_nTeamPreviewVariant: [0x18]u8, // 0x108
        m_nTeamPreviewRandom: [0x18]u8, // 0x120
        m_nTeamPreviewPosition: [0x18]u8, // 0x138
        m_endOfMatchCelebration: [0x18]u8, // 0x150
        m_action: [0x18]u8, // 0x168
        m_bannerAnimation: [0x18]u8, // 0x180
        m_weaponCategory: [0x18]u8, // 0x198
        m_weaponType: [0x18]u8, // 0x1B0
        m_weaponState: [0x18]u8, // 0x1C8
        m_inspectTurnAngle: [0x18]u8, // 0x1E0
        m_nChickSnapshotVariant: [0x18]u8, // 0x1F8
        m_nChickLifeStage: [0x18]u8, // 0x210
        m_bCT: [0x18]u8, // 0x228
    };
    pub const inv_image_light_barn_t = extern struct {
        color: [0xC]u8, // 0x0
        angle: [0xC]u8, // 0xC
        brightness: [0x4]u8, // 0x18
        orbit_distance: [0x4]u8, // 0x1C
    };
    pub const inv_image_map_t = extern struct {
        map_name: [0x8]u8, // 0x0
        map_rotation: [0x8]u8, // 0x8
    };
    pub const inv_image_light_fill_t = extern struct {
        color: [0xC]u8, // 0x0
        angle: [0xC]u8, // 0xC
        brightness: [0x4]u8, // 0x18
    };
    pub const CInterpolatedValue = extern struct {
        m_flStartTime: [0x4]u8, // 0x0
        m_flEndTime: [0x4]u8, // 0x4
        m_flStartValue: [0x4]u8, // 0x8
        m_flEndValue: [0x4]u8, // 0xC
        m_nInterpType: [0x4]u8, // 0x10
    };
    pub const inv_image_item_t = extern struct {
        position: [0xC]u8, // 0x0
        angle: [0xC]u8, // 0xC
        pose_sequence: [0x8]u8, // 0x18
    };
    pub const TimedEvent = extern struct {
        m_TimeBetweenEvents: [0x4]u8, // 0x0
        m_fNextEvent: [0x4]u8, // 0x4
    };
    pub const CFlashlightEffect = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_bIsOn: [0x10]u8, // 0x10
        m_bMuzzleFlashEnabled: [0x4]u8, // 0x20
        m_flMuzzleFlashBrightness: [0xC]u8, // 0x24
        m_quatMuzzleFlashOrientation: [0x10]u8, // 0x30
        m_vecMuzzleFlashOrigin: [0xC]u8, // 0x40
        m_flFov: [0x4]u8, // 0x4C
        m_flFarZ: [0x4]u8, // 0x50
        m_flLinearAtten: [0x4]u8, // 0x54
        m_bCastsShadows: [0x4]u8, // 0x58
        m_flCurrentPullBackDist: [0x4]u8, // 0x5C
        m_FlashlightTexture: [0x8]u8, // 0x60
        m_MuzzleFlashTexture: [0x8]u8, // 0x68
        m_textureName: [0x270]u8, // 0x70
    };
    pub const inv_image_camera_t = extern struct {
        angle: [0xC]u8, // 0x0
        fov_h: [0x4]u8, // 0xC
        fov_v: [0x4]u8, // 0x10
        znear: [0x4]u8, // 0x14
        zfar: [0x4]u8, // 0x18
        target: [0xC]u8, // 0x1C
        target_nudge: [0xC]u8, // 0x28
        orbit_distance: [0x4]u8, // 0x34
    };
    pub const CInventoryImageData = extern struct {
        m_nNodeType: [0x8]u8, // 0x0
        name: [0x8]u8, // 0x8
        inventory_image_data: [0xF0]u8, // 0x10
    };
    pub const inv_image_clearcolor_t = extern struct {
        color: [0xC]u8, // 0x0
    };
    pub const C_CommandContext = extern struct {
        needsprocessing: [0xA0]u8, // 0x0
        command_number: [0x8]u8, // 0xA0
    };
    pub const CompositeMaterialEditorPoint_t = extern struct {
        m_ModelName: [0xE0]u8, // 0x0
        m_nSequenceIndex: [0x4]u8, // 0xE0
        m_flCycle: [0x4]u8, // 0xE4
        m_KVModelStateChoices: [0x10]u8, // 0xE8
        m_bEnableChildModel: [0x8]u8, // 0xF8
        m_ChildModelName: [0xE0]u8, // 0x100
        m_vecCompositeMaterialAssemblyProcedures: [0x18]u8, // 0x1E0
        m_vecCompositeMaterials: [0x20]u8, // 0x1F8
    };
    pub const CPlayerSprayDecalRenderHelper = extern struct {
        pad_0: [0x30]u8, // 0x0
    };
    pub const C_IronSightController = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_bIronSightAvailable: [0x4]u8, // 0x10
        m_flIronSightAmount: [0x4]u8, // 0x14
        m_flIronSightAmountGained: [0x4]u8, // 0x18
        m_flIronSightAmountBiased: [0x4]u8, // 0x1C
        m_flIronSightAmount_Interpolated: [0x4]u8, // 0x20
        m_flIronSightAmountGained_Interpolated: [0x4]u8, // 0x24
        m_flIronSightAmountBiased_Interpolated: [0x4]u8, // 0x28
        m_flInterpolationLastUpdated: [0x4]u8, // 0x2C
        m_angDeltaAverage: [0x60]u8, // 0x30
        m_angViewLast: [0xC]u8, // 0x90
        m_vecDotCoords: [0x8]u8, // 0x9C
        m_flFiringInaccuracyExtraWidthMultiplier: [0x4]u8, // 0xA4
        m_flSpeedRatio: [0x8]u8, // 0xA8
    };
    pub const CompMatMutatorCondition_t = extern struct {
        m_nMutatorCondition: [0x8]u8, // 0x0
        m_strMutatorConditionContainerName: [0x8]u8, // 0x8
        m_strMutatorConditionContainerVarName: [0x8]u8, // 0x10
        m_strMutatorConditionContainerVarValue: [0x8]u8, // 0x18
        m_bPassWhenTrue: [0x8]u8, // 0x20
    };
    pub const inv_image_data_t = extern struct {
        map: [0x10]u8, // 0x0
        item: [0x20]u8, // 0x10
        camera: [0x38]u8, // 0x30
        lightsun: [0x1C]u8, // 0x68
        lightfill: [0x1C]u8, // 0x84
        light0: [0x20]u8, // 0xA0
        light1: [0x20]u8, // 0xC0
        clearcolor: [0x10]u8, // 0xE0
    };
    pub const CompMatPropertyMutator_t = extern struct {
        m_bEnabled: [0x4]u8, // 0x0
        m_nMutatorCommandType: [0x4]u8, // 0x4
        m_strInitWith_Container: [0x8]u8, // 0x8
        m_strCopyProperty_InputContainerSrc: [0x8]u8, // 0x10
        m_strCopyProperty_InputContainerProperty: [0x8]u8, // 0x18
        m_strCopyProperty_TargetProperty: [0x8]u8, // 0x20
        m_strRandomRollInputVars_SeedInputVar: [0x8]u8, // 0x28
        m_vecRandomRollInputVars_InputVarsToRoll: [0x18]u8, // 0x30
        m_strCopyMatchingKeys_InputContainerSrc: [0x8]u8, // 0x48
        m_strCopyKeysWithSuffix_InputContainerSrc: [0x8]u8, // 0x50
        m_strCopyKeysWithSuffix_FindSuffix: [0x8]u8, // 0x58
        m_strCopyKeysWithSuffix_ReplaceSuffix: [0x8]u8, // 0x60
        m_nSetValue_Value: [0x288]u8, // 0x68
        m_strGenerateTexture_TargetParam: [0x8]u8, // 0x2F0
        m_strGenerateTexture_InitialContainer: [0x8]u8, // 0x2F8
        m_nResolution: [0x4]u8, // 0x300
        m_bIsScratchTarget: [0x4]u8, // 0x304
        m_strCompressionFormat: [0x8]u8, // 0x308
        m_bSplatDebugInfo: [0x1]u8, // 0x310
        m_bCaptureInRenderDoc: [0x7]u8, // 0x311
        m_vecTexGenInstructions: [0x18]u8, // 0x318
        m_vecConditionalMutators: [0x18]u8, // 0x330
        m_strPopInputQueue_Container: [0x8]u8, // 0x348
        m_strDrawText_InputContainerSrc: [0x8]u8, // 0x350
        m_strDrawText_InputContainerProperty: [0x8]u8, // 0x358
        m_vecDrawText_Position: [0x8]u8, // 0x360
        m_colDrawText_Color: [0x8]u8, // 0x368
        m_strDrawText_Font: [0x8]u8, // 0x370
        m_vecConditions: [0x18]u8, // 0x378
    };
    pub const CCompositeMaterialEditorDoc = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_nVersion: [0x8]u8, // 0x8
        m_Points: [0x18]u8, // 0x10
        m_KVthumbnail: [0x10]u8, // 0x28
    };
    pub const CClientAlphaProperty = extern struct {
        m_nDesyncOffset: [0x10]u8, // 0x0
        m_nDistFadeStart: [0x2]u8, // 0x10
        m_nDistFadeEnd: [0x5]u8, // 0x12
        m_nAlpha: [0x1]u8, // 0x17
        m_flFadeScale: [0x4]u8, // 0x18
        m_flRenderFxStartTime: [0x4]u8, // 0x1C
        m_flRenderFxDuration: [0x10]u8, // 0x20
    };
    pub const screenfade_t = extern struct {
        Speed: [0x4]u8, // 0x0
        End: [0x4]u8, // 0x4
        Reset: [0x4]u8, // 0x8
        m_Color: [0x4]u8, // 0xC
        Flags: [0x18]u8, // 0x10
    };
    pub const CGlobalLightBase = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_bSpotLight: [0x4]u8, // 0x10
        m_SpotLightOrigin: [0xC]u8, // 0x14
        m_SpotLightAngles: [0xC]u8, // 0x20
        m_ShadowDirection: [0xC]u8, // 0x2C
        m_AmbientDirection: [0xC]u8, // 0x38
        m_SpecularDirection: [0xC]u8, // 0x44
        m_InspectorSpecularDirection: [0xC]u8, // 0x50
        m_flSpecularPower: [0x4]u8, // 0x5C
        m_flSpecularIndependence: [0x4]u8, // 0x60
        m_SpecularColor: [0x4]u8, // 0x64
        m_bStartDisabled: [0x1]u8, // 0x68
        m_bEnabled: [0x3]u8, // 0x69
        m_LightColor: [0x4]u8, // 0x6C
        m_AmbientColor1: [0x4]u8, // 0x70
        m_AmbientColor2: [0x4]u8, // 0x74
        m_AmbientColor3: [0x4]u8, // 0x78
        m_flSunDistance: [0x4]u8, // 0x7C
        m_flFOV: [0x4]u8, // 0x80
        m_flNearZ: [0x4]u8, // 0x84
        m_flFarZ: [0x4]u8, // 0x88
        m_bEnableShadows: [0x1]u8, // 0x8C
        m_bOldEnableShadows: [0x1]u8, // 0x8D
        m_bBackgroundClearNotRequired: [0x2]u8, // 0x8E
        m_flCloudScale: [0x4]u8, // 0x90
        m_flCloud1Speed: [0x4]u8, // 0x94
        m_flCloud1Direction: [0x4]u8, // 0x98
        m_flCloud2Speed: [0x4]u8, // 0x9C
        m_flCloud2Direction: [0x10]u8, // 0xA0
        m_flAmbientScale1: [0x4]u8, // 0xB0
        m_flAmbientScale2: [0x4]u8, // 0xB4
        m_flGroundScale: [0x4]u8, // 0xB8
        m_flLightScale: [0x4]u8, // 0xBC
        m_flFoWDarkness: [0x4]u8, // 0xC0
        m_bEnableSeparateSkyboxFog: [0x4]u8, // 0xC4
        m_vFowColor: [0xC]u8, // 0xC8
        m_ViewOrigin: [0xC]u8, // 0xD4
        m_ViewAngles: [0xC]u8, // 0xE0
        m_flViewFoV: [0x4]u8, // 0xEC
        m_WorldPoints: [0x3B8]u8, // 0xF0
        m_vFogOffsetLayer0: [0x8]u8, // 0x4A8
        m_vFogOffsetLayer1: [0x8]u8, // 0x4B0
        m_hEnvWind: [0x4]u8, // 0x4B8
        m_hEnvSky: [0x4]u8, // 0x4BC
    };
    pub const IClientAlphaProperty = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const inv_image_light_sun_t = extern struct {
        color: [0xC]u8, // 0x0
        angle: [0xC]u8, // 0xC
        brightness: [0x4]u8, // 0x18
    };
    pub const CompositeMaterialMatchFilter_t = extern struct {
        m_nCompositeMaterialMatchFilterType: [0x8]u8, // 0x0
        m_strMatchFilter: [0x8]u8, // 0x8
        m_strMatchValue: [0x8]u8, // 0x10
        m_bPassWhenTrue: [0x8]u8, // 0x18
    };
    pub const CompositeMaterial_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_TargetKVs: [0x10]u8, // 0x8
        m_PreGenerationKVs: [0x40]u8, // 0x18
        m_FinalKVs: [0x28]u8, // 0x58
        m_vecGeneratedTextures: [0x20]u8, // 0x80
    };
};
