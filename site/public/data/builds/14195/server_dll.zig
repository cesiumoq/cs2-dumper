/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

pub const server = struct {

    pub const CWeaponNOVA = extern struct {
        pad_0: [0x1280]u8, // 0x0
    };
    pub const CPointWorldText = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_messageText: [0x200]u8, // 0x850
        m_FontName: [0x40]u8, // 0xA50
        m_BackgroundMaterialName: [0x40]u8, // 0xA90
        m_bEnabled: [0x1]u8, // 0xAD0
        m_bFullbright: [0x3]u8, // 0xAD1
        m_flWorldUnitsPerPx: [0x4]u8, // 0xAD4
        m_flFontSize: [0x4]u8, // 0xAD8
        m_flDepthOffset: [0x4]u8, // 0xADC
        m_bDrawBackground: [0x4]u8, // 0xAE0
        m_flBackgroundBorderWidth: [0x4]u8, // 0xAE4
        m_flBackgroundBorderHeight: [0x4]u8, // 0xAE8
        m_flBackgroundWorldToUV: [0x4]u8, // 0xAEC
        m_Color: [0x4]u8, // 0xAF0
        m_nJustifyHorizontal: [0x4]u8, // 0xAF4
        m_nJustifyVertical: [0x4]u8, // 0xAF8
        m_nReorientMode: [0x4]u8, // 0xAFC
    };
    pub const CAmbientGeneric = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_radius: [0x4]u8, // 0x4A8
        m_flMaxRadius: [0x4]u8, // 0x4AC
        m_iSoundLevel: [0x4]u8, // 0x4B0
        m_dpv: [0x64]u8, // 0x4B4
        m_fActive: [0x1]u8, // 0x518
        m_fLooping: [0x7]u8, // 0x519
        m_iszSound: [0x8]u8, // 0x520
        m_sSourceEntName: [0x8]u8, // 0x528
        m_hSoundSource: [0x4]u8, // 0x530
        m_nSoundSourceEntIndex: [0x1C]u8, // 0x534
    };
    pub const CEnvEntityMaker = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_vecEntityMins: [0xC]u8, // 0x4A8
        m_vecEntityMaxs: [0xC]u8, // 0x4B4
        m_hCurrentInstance: [0x4]u8, // 0x4C0
        m_hCurrentBlocker: [0x4]u8, // 0x4C4
        m_vecBlockerOrigin: [0xC]u8, // 0x4C8
        m_angPostSpawnDirection: [0xC]u8, // 0x4D4
        m_flPostSpawnDirectionVariance: [0x4]u8, // 0x4E0
        m_flPostSpawnSpeed: [0x4]u8, // 0x4E4
        m_bPostSpawnUseAngles: [0x8]u8, // 0x4E8
        m_iszTemplate: [0x8]u8, // 0x4F0
        m_pOutputOnSpawned: [0x18]u8, // 0x4F8
        m_pOutputOnFailedSpawn: [0x18]u8, // 0x510
    };
    pub const CPulseGraphInstance_GameBlackboard = extern struct {
        pad_0: [0x150]u8, // 0x0
    };
    pub const CPointEntity = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CFilterEnemy = extern struct {
        pad_0: [0x4E0]u8, // 0x0
        m_iszEnemyName: [0x8]u8, // 0x4E0
        m_flRadius: [0x4]u8, // 0x4E8
        m_flOuterRadius: [0x4]u8, // 0x4EC
        m_nMaxSquadmatesPerEnemy: [0x8]u8, // 0x4F0
        m_iszPlayerName: [0x8]u8, // 0x4F8
    };
    pub const CCSGO_WingmanIntroCounterTerroristPosition = extern struct {
        pad_0: [0x1468]u8, // 0x0
    };
    pub const CPulseCell_WaitForCursorsWithTag = extern struct {
        pad_0: [0x128]u8, // 0x0
        m_bTagSelfWhenComplete: [0x4]u8, // 0x128
        m_nDesiredKillPriority: [0x4]u8, // 0x12C
    };
    pub const CFuncTrackAuto = extern struct {
        pad_0: [0x958]u8, // 0x0
    };
    pub const CScriptedSequence = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_iszEntry: [0x8]u8, // 0x4A8
        m_iszPreIdle: [0x8]u8, // 0x4B0
        m_iszPlay: [0x8]u8, // 0x4B8
        m_iszPostIdle: [0x8]u8, // 0x4C0
        m_iszModifierToAddOnPlay: [0x8]u8, // 0x4C8
        m_iszNextScript: [0x8]u8, // 0x4D0
        m_iszEntity: [0x8]u8, // 0x4D8
        m_iszSyncGroup: [0x8]u8, // 0x4E0
        m_nMoveTo: [0x4]u8, // 0x4E8
        m_nMoveToGait: [0x4]u8, // 0x4EC
        m_nHeldWeaponBehavior: [0x4]u8, // 0x4F0
        m_nForcedCrouchState: [0x4]u8, // 0x4F4
        m_bIsPlayingPreIdle: [0x1]u8, // 0x4F8
        m_bIsPlayingEntry: [0x1]u8, // 0x4F9
        m_bIsPlayingAction: [0x1]u8, // 0x4FA
        m_bIsPlayingPostIdle: [0x1]u8, // 0x4FB
        m_bDontRotateOther: [0x1]u8, // 0x4FC
        m_bIsRepeatable: [0x1]u8, // 0x4FD
        m_bShouldLeaveCorpse: [0x1]u8, // 0x4FE
        m_bStartOnSpawn: [0x1]u8, // 0x4FF
        m_bDisallowInterrupts: [0x1]u8, // 0x500
        m_bCanOverrideNPCState: [0x1]u8, // 0x501
        m_bDontTeleportAtEnd: [0x1]u8, // 0x502
        m_bHighPriority: [0x1]u8, // 0x503
        m_bHideDebugComplaints: [0x1]u8, // 0x504
        m_bContinueOnDeath: [0x1]u8, // 0x505
        m_bLoopPreIdleSequence: [0x1]u8, // 0x506
        m_bLoopActionSequence: [0x1]u8, // 0x507
        m_bLoopPostIdleSequence: [0x1]u8, // 0x508
        m_bSynchPostIdles: [0x1]u8, // 0x509
        m_bIgnoreLookAt: [0x1]u8, // 0x50A
        m_bIgnoreGravity: [0x1]u8, // 0x50B
        m_bDisableNPCCollisions: [0x1]u8, // 0x50C
        m_bKeepAnimgraphLockedPost: [0x1]u8, // 0x50D
        m_bDontAddModifiers: [0x1]u8, // 0x50E
        m_bDisableAimingWhileMoving: [0x1]u8, // 0x50F
        m_bIgnoreRotation: [0x4]u8, // 0x510
        m_flRadius: [0x4]u8, // 0x514
        m_flRepeat: [0x4]u8, // 0x518
        m_flPlayAnimFadeInTime: [0x4]u8, // 0x51C
        m_flMoveInterpTime: [0x4]u8, // 0x520
        m_flAngRate: [0x4]u8, // 0x524
        m_flMoveSpeed: [0x4]u8, // 0x528
        m_bWaitUntilMoveCompletesToStartAnimation: [0x4]u8, // 0x52C
        m_nNotReadySequenceCount: [0x4]u8, // 0x530
        m_startTime: [0x4]u8, // 0x534
        m_bWaitForBeginSequence: [0x4]u8, // 0x538
        m_saved_effects: [0x4]u8, // 0x53C
        m_savedFlags: [0x4]u8, // 0x540
        m_savedCollisionGroup: [0x4]u8, // 0x544
        m_bInterruptable: [0x1]u8, // 0x548
        m_sequenceStarted: [0x1]u8, // 0x549
        m_bPositionRelativeToOtherEntity: [0x2]u8, // 0x54A
        m_hTargetEnt: [0x4]u8, // 0x54C
        m_hNextCine: [0x4]u8, // 0x550
        m_bThinking: [0x1]u8, // 0x554
        m_bInitiatedSelfDelete: [0x1]u8, // 0x555
        m_bIsTeleportingDueToMoveTo: [0x1]u8, // 0x556
        m_bAllowCustomInterruptConditions: [0x1]u8, // 0x557
        m_hForcedTarget: [0x4]u8, // 0x558
        m_bDontCancelOtherSequences: [0x1]u8, // 0x55C
        m_bForceSynch: [0x1]u8, // 0x55D
        m_bPreventUpdateYawOnFinish: [0x1]u8, // 0x55E
        m_bEnsureOnNavmeshOnFinish: [0x1]u8, // 0x55F
        m_onDeathBehavior: [0x4]u8, // 0x560
        m_ConflictResponse: [0x4]u8, // 0x564
        m_OnBeginSequence: [0x18]u8, // 0x568
        m_OnActionStartOrLoop: [0x18]u8, // 0x580
        m_OnEndSequence: [0x18]u8, // 0x598
        m_OnPostIdleEndSequence: [0x18]u8, // 0x5B0
        m_OnCancelSequence: [0x18]u8, // 0x5C8
        m_OnCancelFailedSequence: [0x18]u8, // 0x5E0
        m_OnScriptEvent: [0xC8]u8, // 0x5F8
        m_matOtherToMain: [0x20]u8, // 0x6C0
        m_hInteractionMainEntity: [0x4]u8, // 0x6E0
        m_iPlayerDeathBehavior: [0x4]u8, // 0x6E4
        m_bSkipFadeIn: [0x8]u8, // 0x6E8
    };
    pub const CFogTrigger = extern struct {
        pad_0: [0x9C8]u8, // 0x0
        m_fog: [0x68]u8, // 0x9C8
    };
    pub const CInfoTeleportDestination = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CPointBroadcastClientCommand = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CCSPlayer_PingServices = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_flPlayerPingTokens: [0x14]u8, // 0x48
        m_hPlayerPing: [0x4]u8, // 0x5C
    };
    pub const CHEGrenade = extern struct {
        pad_0: [0x12C0]u8, // 0x0
    };
    pub const CPhysicsSpring = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_pSpringJoint: [0x8]u8, // 0x4A8
        m_flFrequency: [0x4]u8, // 0x4B0
        m_flDampingRatio: [0x4]u8, // 0x4B4
        m_flRestLength: [0x8]u8, // 0x4B8
        m_nameAttachStart: [0x8]u8, // 0x4C0
        m_nameAttachEnd: [0x8]u8, // 0x4C8
        m_start: [0xC]u8, // 0x4D0
        m_end: [0xC]u8, // 0x4DC
        m_teleportTick: [0x8]u8, // 0x4E8
    };
    pub const CEnvMuzzleFlash = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_flScale: [0x8]u8, // 0x4A8
        m_iszParentAttachment: [0x8]u8, // 0x4B0
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
    pub const CWeaponRevolver = extern struct {
        pad_0: [0x12A0]u8, // 0x0
    };
    pub const CFuncTrainControls = extern struct {
        pad_0: [0x850]u8, // 0x0
    };
    pub const CBtActionCombatPositioning = extern struct {
        pad_0: [0x68]u8, // 0x0
        m_szSensorInputKey: [0x18]u8, // 0x68
        m_szIsAttackingKey: [0x8]u8, // 0x80
        m_ActionTimer: [0x18]u8, // 0x88
        m_bCrouching: [0x10]u8, // 0xA0
    };
    pub const CFuncRetakeBarrier = extern struct {
        pad_0: [0xCB0]u8, // 0x0
    };
    pub const CTriggerBuoyancy = extern struct {
        pad_0: [0x9C8]u8, // 0x0
        m_BuoyancyHelper: [0x118]u8, // 0x9C8
        m_flFluidDensity: [0x8]u8, // 0xAE0
    };
    pub const CTonemapController2Alias_env_tonemap_controller2 = extern struct {
        pad_0: [0x4C0]u8, // 0x0
    };
    pub const CPathTrack = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_pnext: [0x4]u8, // 0x4A8
        m_pprevious: [0x4]u8, // 0x4AC
        m_paltpath: [0x4]u8, // 0x4B0
        m_flSpeed: [0x4]u8, // 0x4B4
        m_flRadius: [0x4]u8, // 0x4B8
        m_length: [0x4]u8, // 0x4BC
        m_altName: [0x8]u8, // 0x4C0
        m_nIterVal: [0x4]u8, // 0x4C8
        m_eOrientationType: [0x4]u8, // 0x4CC
        m_OnPass: [0x18]u8, // 0x4D0
    };
    pub const CCSGO_EndOfMatchLineupEndpoint = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CPulseCell_Base = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_nEditorNodeID: [0x40]u8, // 0x8
    };
    pub const CTriggerProximity = extern struct {
        pad_0: [0x9C8]u8, // 0x0
        m_hMeasureTarget: [0x8]u8, // 0x9C8
        m_iszMeasureTarget: [0x8]u8, // 0x9D0
        m_fRadius: [0x4]u8, // 0x9D8
        m_nTouchers: [0x4]u8, // 0x9DC
        m_NearestEntityDistance: [0x20]u8, // 0x9E0
    };
    pub const CTankTrainAI = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_hTrain: [0x4]u8, // 0x4A8
        m_hTargetEntity: [0x4]u8, // 0x4AC
        m_soundPlaying: [0x18]u8, // 0x4B0
        m_startSoundName: [0x8]u8, // 0x4C8
        m_engineSoundName: [0x8]u8, // 0x4D0
        m_movementSoundName: [0x8]u8, // 0x4D8
        m_targetEntityName: [0x8]u8, // 0x4E0
    };
    pub const CGameText = extern struct {
        pad_0: [0x860]u8, // 0x0
        m_iszMessage: [0x8]u8, // 0x860
        m_textParms: [0x18]u8, // 0x868
    };
    pub const CGameEnd = extern struct {
        pad_0: [0x860]u8, // 0x0
    };
    pub const CInfoDeathmatchSpawn = extern struct {
        pad_0: [0x4B8]u8, // 0x0
    };
    pub const CCSPlayerController_InventoryServices = extern struct {
        pad_0: [0x40]u8, // 0x0
        m_unMusicID: [0x4]u8, // 0x40
        m_rank: [0x18]u8, // 0x44
        m_nPersonaDataPublicLevel: [0x4]u8, // 0x5C
        m_nPersonaDataPublicCommendsLeader: [0x4]u8, // 0x60
        m_nPersonaDataPublicCommendsTeacher: [0x4]u8, // 0x64
        m_nPersonaDataPublicCommendsFriendly: [0x4]u8, // 0x68
        m_nPersonaDataXpTrailLevel: [0xF1C]u8, // 0x6C
        m_unEquippedPlayerSprayIDs: [0x8]u8, // 0xF88
        m_unCurrentLoadoutHash: [0x8]u8, // 0xF90
        m_vecServerAuthoritativeWeaponSlots: [0x88]u8, // 0xF98
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
    pub const CPulse_ResumePoint = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CTriggerFan = extern struct {
        pad_0: [0x9C8]u8, // 0x0
        m_vFanOriginOffset: [0xC]u8, // 0x9C8
        m_vDirection: [0xC]u8, // 0x9D4
        m_bPushTowardsInfoTarget: [0x1]u8, // 0x9E0
        m_bPushAwayFromInfoTarget: [0xF]u8, // 0x9E1
        m_qNoiseDelta: [0x10]u8, // 0x9F0
        m_hInfoFan: [0x4]u8, // 0xA00
        m_flForce: [0x4]u8, // 0xA04
        m_bFalloff: [0x8]u8, // 0xA08
        m_RampTimer: [0x18]u8, // 0xA10
        m_vFanOriginWS: [0xC]u8, // 0xA28
        m_vFanOriginLS: [0xC]u8, // 0xA34
        m_vFanEndLS: [0xC]u8, // 0xA40
        m_vNoiseDirectionTarget: [0xC]u8, // 0xA4C
        m_iszInfoFan: [0x8]u8, // 0xA58
        m_flRopeForceScale: [0x4]u8, // 0xA60
        m_flParticleForceScale: [0x4]u8, // 0xA64
        m_flPlayerForce: [0x4]u8, // 0xA68
        m_bPlayerWindblock: [0x4]u8, // 0xA6C
        m_flNPCForce: [0x4]u8, // 0xA70
        m_flRampTime: [0x4]u8, // 0xA74
        m_fNoiseDegrees: [0x4]u8, // 0xA78
        m_fNoiseSpeed: [0x4]u8, // 0xA7C
        m_bPushPlayer: [0x1]u8, // 0xA80
        m_bRampDown: [0x3]u8, // 0xA81
        m_nManagerFanIdx: [0xC]u8, // 0xA84
    };
    pub const CPhysHingeAlias_phys_hinge_local = extern struct {
        pad_0: [0x678]u8, // 0x0
    };
    pub const CLogicCase = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_nCase: [0x100]u8, // 0x4A8
        m_nShuffleCases: [0x4]u8, // 0x5A8
        m_nLastShuffleCase: [0x4]u8, // 0x5AC
        m_uchShuffleCaseMap: [0x20]u8, // 0x5B0
        m_OnCase: [0x300]u8, // 0x5D0
        m_OnDefault: [0x20]u8, // 0x8D0
    };
    pub const CPulseCell_Outflow_PlayVOLine = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_OnFinished: [0x48]u8, // 0xD8
    };
    pub const CInfoGameEventProxy = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_iszEventName: [0x8]u8, // 0x4A8
        m_flRange: [0x8]u8, // 0x4B0
    };
    pub const CWeaponBizon = extern struct {
        pad_0: [0x12A0]u8, // 0x0
    };
    pub const CGamePlayerZone = extern struct {
        pad_0: [0x858]u8, // 0x0
        m_OnPlayerInZone: [0x18]u8, // 0x858
        m_OnPlayerOutZone: [0x18]u8, // 0x870
        m_PlayersInCount: [0x20]u8, // 0x888
        m_PlayersOutCount: [0x20]u8, // 0x8A8
    };
    pub const CBaseToggle = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_toggle_state: [0x4]u8, // 0x850
        m_flMoveDistance: [0x4]u8, // 0x854
        m_flWait: [0x4]u8, // 0x858
        m_flLip: [0x4]u8, // 0x85C
        m_bAlwaysFireBlockedOutputs: [0x4]u8, // 0x860
        m_vecPosition1: [0xC]u8, // 0x864
        m_vecPosition2: [0xC]u8, // 0x870
        m_vecMoveAng: [0xC]u8, // 0x87C
        m_vecAngle1: [0xC]u8, // 0x888
        m_vecAngle2: [0xC]u8, // 0x894
        m_flHeight: [0x4]u8, // 0x8A0
        m_hActivator: [0x4]u8, // 0x8A4
        m_vecFinalDest: [0xC]u8, // 0x8A8
        m_vecFinalAngle: [0xC]u8, // 0x8B4
        m_movementType: [0x8]u8, // 0x8C0
        m_sMaster: [0x8]u8, // 0x8C8
    };
    pub const CPulseServerCursor = extern struct {
        pad_0: [0xE8]u8, // 0x0
        m_hActivator: [0x4]u8, // 0xE8
        m_hCaller: [0x4]u8, // 0xEC
    };
    pub const CPulseCell_PlaySequence = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_SequenceName: [0x8]u8, // 0xD8
        m_PulseAnimEvents: [0x18]u8, // 0xE0
        m_OnFinished: [0x48]u8, // 0xF8
    };
    pub const CInferno = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_firePositions: [0x300]u8, // 0x850
        m_fireParentPositions: [0x300]u8, // 0xB50
        m_bFireIsBurning: [0x40]u8, // 0xE50
        m_BurnNormal: [0x300]u8, // 0xE90
        m_fireCount: [0x4]u8, // 0x1190
        m_nInfernoType: [0x4]u8, // 0x1194
        m_nFireEffectTickBegin: [0x4]u8, // 0x1198
        m_nFireLifetime: [0x4]u8, // 0x119C
        m_bInPostEffectTime: [0x1]u8, // 0x11A0
        m_bWasCreatedInSmoke: [0x207]u8, // 0x11A1
        m_extent: [0x18]u8, // 0x13A8
        m_damageTimer: [0x18]u8, // 0x13C0
        m_damageRampTimer: [0x18]u8, // 0x13D8
        m_splashVelocity: [0xC]u8, // 0x13F0
        m_InitialSplashVelocity: [0xC]u8, // 0x13FC
        m_startPos: [0xC]u8, // 0x1408
        m_vecOriginalSpawnLocation: [0xC]u8, // 0x1414
        m_activeTimer: [0x10]u8, // 0x1420
        m_fireSpawnOffset: [0x4]u8, // 0x1430
        m_nMaxFlames: [0x4]u8, // 0x1434
        m_nSpreadCount: [0x8]u8, // 0x1438
        m_BookkeepingTimer: [0x18]u8, // 0x1440
        m_NextSpreadTimer: [0x18]u8, // 0x1458
        m_nSourceItemDefIndex: [0x68]u8, // 0x1470
    };
    pub const CTouchExpansionComponent = extern struct {
        pad_0: [0x50]u8, // 0x0
    };
    pub const CPulseCell_Outflow_PlaySceneBase = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_OnFinished: [0x48]u8, // 0xD8
        m_Triggers: [0x18]u8, // 0x120
    };
    pub const CPulseCell_LerpCameraSettings = extern struct {
        pad_0: [0x120]u8, // 0x0
        m_flSeconds: [0x4]u8, // 0x120
        m_Start: [0x10]u8, // 0x124
        m_End: [0x14]u8, // 0x134
    };
    pub const CWeaponSCAR20 = extern struct {
        pad_0: [0x12A0]u8, // 0x0
    };
    pub const CFuncInteractionLayerClip = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_bDisabled: [0x8]u8, // 0x850
        m_iszInteractsAs: [0x8]u8, // 0x858
        m_iszInteractsWith: [0x8]u8, // 0x860
    };
    pub const CCSObserver_UseServices = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CCSMinimapVolume = extern struct {
        pad_0: [0x9E0]u8, // 0x0
        m_strMinimapName: [0x8]u8, // 0x9E0
    };
    pub const CTriggerDetectBulletFire = extern struct {
        pad_0: [0x9C8]u8, // 0x0
        m_bPlayerFireOnly: [0x8]u8, // 0x9C8
        m_OnDetectedBulletFire: [0x18]u8, // 0x9D0
    };
    pub const CCSPlayer_UseServices = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_hLastKnownUseEntity: [0x4]u8, // 0x48
        m_flLastUseTimeStamp: [0x4]u8, // 0x4C
        m_flTimeLastUsedWindow: [0x8]u8, // 0x50
    };
    pub const CWeaponAWP = extern struct {
        pad_0: [0x12A0]u8, // 0x0
    };
    pub const CPulseCell_PickBestOutflowSelector = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_nCheckType: [0x8]u8, // 0x48
        m_OutflowList: [0x18]u8, // 0x50
    };
    pub const CInfoFan = extern struct {
        pad_0: [0x4E8]u8, // 0x0
        m_fFanForceMaxRadius: [0x4]u8, // 0x4E8
        m_fFanForceMinRadius: [0x4]u8, // 0x4EC
        m_flCurveDistRange: [0x8]u8, // 0x4F0
        m_FanForceCurveString: [0x8]u8, // 0x4F8
    };
    pub const CGameRules = extern struct {
        pad_0: [0x8]u8, // 0x0
        __m_pChainEntity: [0x28]u8, // 0x8
        m_szQuestName: [0x80]u8, // 0x30
        m_nQuestPhase: [0x4]u8, // 0xB0
        m_nLastMatchTime: [0x4]u8, // 0xB4
        m_nLastMatchTime_MatchID64: [0x8]u8, // 0xB8
        m_nTotalPausedTicks: [0x4]u8, // 0xC0
        m_nPauseStartTick: [0x4]u8, // 0xC4
        m_bGamePaused: [0x8]u8, // 0xC8
    };
    pub const CPulseCell_ApplyDynamicAttributeEHandle = extern struct {
        pad_0: [0xD8]u8, // 0x0
    };
    pub const CFish = extern struct {
        pad_0: [0xA40]u8, // 0x0
        m_pool: [0x4]u8, // 0xA40
        m_id: [0x4]u8, // 0xA44
        m_x: [0x4]u8, // 0xA48
        m_y: [0x4]u8, // 0xA4C
        m_z: [0x4]u8, // 0xA50
        m_angle: [0x4]u8, // 0xA54
        m_angleChange: [0x4]u8, // 0xA58
        m_forward: [0xC]u8, // 0xA5C
        m_perp: [0xC]u8, // 0xA68
        m_poolOrigin: [0xC]u8, // 0xA74
        m_waterLevel: [0x4]u8, // 0xA80
        m_speed: [0x4]u8, // 0xA84
        m_desiredSpeed: [0x4]u8, // 0xA88
        m_calmSpeed: [0x4]u8, // 0xA8C
        m_panicSpeed: [0x4]u8, // 0xA90
        m_avoidRange: [0x4]u8, // 0xA94
        m_turnTimer: [0x18]u8, // 0xA98
        m_turnClockwise: [0x8]u8, // 0xAB0
        m_goTimer: [0x18]u8, // 0xAB8
        m_moveTimer: [0x18]u8, // 0xAD0
        m_panicTimer: [0x18]u8, // 0xAE8
        m_disperseTimer: [0x18]u8, // 0xB00
        m_proximityTimer: [0x18]u8, // 0xB18
        m_visible: [0x20]u8, // 0xB30
    };
    pub const CCSBot = extern struct {
        pad_0: [0x108]u8, // 0x0
        m_eyePosition: [0xC]u8, // 0x108
        m_name: [0x40]u8, // 0x114
        m_combatRange: [0x4]u8, // 0x154
        m_isRogue: [0x8]u8, // 0x158
        m_rogueTimer: [0x1C]u8, // 0x160
        m_diedLastRound: [0x4]u8, // 0x17C
        m_safeTime: [0x4]u8, // 0x180
        m_wasSafe: [0x8]u8, // 0x184
        m_blindFire: [0x4]u8, // 0x18C
        m_surpriseTimer: [0x18]u8, // 0x190
        m_bAllowActive: [0x1]u8, // 0x1A8
        m_isFollowing: [0x3]u8, // 0x1A9
        m_leader: [0x4]u8, // 0x1AC
        m_followTimestamp: [0x4]u8, // 0x1B0
        m_allowAutoFollowTime: [0x4]u8, // 0x1B4
        m_hurryTimer: [0x18]u8, // 0x1B8
        m_alertTimer: [0x18]u8, // 0x1D0
        m_sneakTimer: [0x18]u8, // 0x1E8
        m_panicTimer: [0x3C8]u8, // 0x200
        m_stateTimestamp: [0x4]u8, // 0x5C8
        m_isAttacking: [0x1]u8, // 0x5CC
        m_isOpeningDoor: [0x7]u8, // 0x5CD
        m_taskEntity: [0x10]u8, // 0x5D4
        m_goalPosition: [0xC]u8, // 0x5E4
        m_goalEntity: [0x4]u8, // 0x5F0
        m_avoid: [0x4]u8, // 0x5F4
        m_avoidTimestamp: [0x4]u8, // 0x5F8
        m_isStopping: [0x1]u8, // 0x5FC
        m_hasVisitedEnemySpawn: [0x3]u8, // 0x5FD
        m_stillTimer: [0x10]u8, // 0x600
        m_bEyeAnglesUnderPathFinderControl: [0x48F0]u8, // 0x610
        m_pathIndex: [0x4]u8, // 0x4F00
        m_areaEnteredTimestamp: [0x4]u8, // 0x4F04
        m_repathTimer: [0x18]u8, // 0x4F08
        m_avoidFriendTimer: [0x18]u8, // 0x4F20
        m_isFriendInTheWay: [0x8]u8, // 0x4F38
        m_politeTimer: [0x18]u8, // 0x4F40
        m_isWaitingBehindFriend: [0x2C]u8, // 0x4F58
        m_pathLadderEnd: [0x4C]u8, // 0x4F84
        m_mustRunTimer: [0x18]u8, // 0x4FD0
        m_waitTimer: [0x18]u8, // 0x4FE8
        m_updateTravelDistanceTimer: [0x18]u8, // 0x5000
        m_playerTravelDistance: [0x100]u8, // 0x5018
        m_travelDistancePhase: [0x198]u8, // 0x5118
        m_hostageEscortCount: [0x4]u8, // 0x52B0
        m_hostageEscortCountTimestamp: [0x4]u8, // 0x52B4
        m_desiredTeam: [0x4]u8, // 0x52B8
        m_hasJoined: [0x1]u8, // 0x52BC
        m_isWaitingForHostage: [0x3]u8, // 0x52BD
        m_inhibitWaitingForHostageTimer: [0x18]u8, // 0x52C0
        m_waitForHostageTimer: [0x18]u8, // 0x52D8
        m_noisePosition: [0xC]u8, // 0x52F0
        m_noiseTravelDistance: [0x4]u8, // 0x52FC
        m_noiseTimestamp: [0x8]u8, // 0x5300
        m_noiseSource: [0x18]u8, // 0x5308
        m_noiseBendTimer: [0x18]u8, // 0x5320
        m_bentNoisePosition: [0xC]u8, // 0x5338
        m_bendNoisePositionValid: [0x4]u8, // 0x5344
        m_lookAroundStateTimestamp: [0x4]u8, // 0x5348
        m_lookAheadAngle: [0x4]u8, // 0x534C
        m_lookUpAngle: [0x4]u8, // 0x5350
        m_forwardAngle: [0x4]u8, // 0x5354
        m_inhibitLookAroundTimestamp: [0x8]u8, // 0x5358
        m_lookAtSpot: [0x10]u8, // 0x5360
        m_lookAtSpotDuration: [0x4]u8, // 0x5370
        m_lookAtSpotTimestamp: [0x4]u8, // 0x5374
        m_lookAtSpotAngleTolerance: [0x4]u8, // 0x5378
        m_lookAtSpotClearIfClose: [0x1]u8, // 0x537C
        m_lookAtSpotAttack: [0x3]u8, // 0x537D
        m_lookAtDesc: [0x8]u8, // 0x5380
        m_peripheralTimestamp: [0x188]u8, // 0x5388
        m_approachPointCount: [0x4]u8, // 0x5510
        m_approachPointViewPosition: [0xC]u8, // 0x5514
        m_viewSteadyTimer: [0x18]u8, // 0x5520
        m_tossGrenadeTimer: [0x20]u8, // 0x5538
        m_isAvoidingGrenade: [0x20]u8, // 0x5558
        m_spotCheckTimestamp: [0x408]u8, // 0x5578
        m_checkedHidingSpotCount: [0x4]u8, // 0x5980
        m_lookPitch: [0x4]u8, // 0x5984
        m_lookPitchVel: [0x4]u8, // 0x5988
        m_lookYaw: [0x4]u8, // 0x598C
        m_lookYawVel: [0x4]u8, // 0x5990
        m_targetSpot: [0xC]u8, // 0x5994
        m_targetSpotVelocity: [0xC]u8, // 0x59A0
        m_targetSpotPredicted: [0xC]u8, // 0x59AC
        m_aimError: [0xC]u8, // 0x59B8
        m_aimGoal: [0xC]u8, // 0x59C4
        m_targetSpotTime: [0x4]u8, // 0x59D0
        m_aimFocus: [0x4]u8, // 0x59D4
        m_aimFocusInterval: [0x4]u8, // 0x59D8
        m_aimFocusNextUpdate: [0xC]u8, // 0x59DC
        m_ignoreEnemiesTimer: [0x18]u8, // 0x59E8
        m_enemy: [0x4]u8, // 0x5A00
        m_isEnemyVisible: [0x1]u8, // 0x5A04
        m_visibleEnemyParts: [0x3]u8, // 0x5A05
        m_lastEnemyPosition: [0xC]u8, // 0x5A08
        m_lastSawEnemyTimestamp: [0x4]u8, // 0x5A14
        m_firstSawEnemyTimestamp: [0x4]u8, // 0x5A18
        m_currentEnemyAcquireTimestamp: [0x4]u8, // 0x5A1C
        m_enemyDeathTimestamp: [0x4]u8, // 0x5A20
        m_friendDeathTimestamp: [0x4]u8, // 0x5A24
        m_isLastEnemyDead: [0x4]u8, // 0x5A28
        m_nearbyEnemyCount: [0x20C]u8, // 0x5A2C
        m_bomber: [0x4]u8, // 0x5C38
        m_nearbyFriendCount: [0x4]u8, // 0x5C3C
        m_closestVisibleFriend: [0x4]u8, // 0x5C40
        m_closestVisibleHumanFriend: [0x4]u8, // 0x5C44
        m_attentionInterval: [0x10]u8, // 0x5C48
        m_attacker: [0x4]u8, // 0x5C58
        m_attackedTimestamp: [0x4]u8, // 0x5C5C
        m_burnedByFlamesTimer: [0x10]u8, // 0x5C60
        m_lastVictimID: [0x4]u8, // 0x5C70
        m_isAimingAtEnemy: [0x1]u8, // 0x5C74
        m_isRapidFiring: [0x3]u8, // 0x5C75
        m_equipTimer: [0x10]u8, // 0x5C78
        m_zoomTimer: [0x18]u8, // 0x5C88
        m_fireWeaponTimestamp: [0x8]u8, // 0x5CA0
        m_lookForWeaponsOnGroundTimer: [0x18]u8, // 0x5CA8
        m_bIsSleeping: [0x1]u8, // 0x5CC0
        m_isEnemySniperVisible: [0x7]u8, // 0x5CC1
        m_sawEnemySniperTimer: [0xB8]u8, // 0x5CC8
        m_enemyQueueIndex: [0x1]u8, // 0x5D80
        m_enemyQueueCount: [0x1]u8, // 0x5D81
        m_enemyQueueAttendIndex: [0x1]u8, // 0x5D82
        m_isStuck: [0x1]u8, // 0x5D83
        m_stuckTimestamp: [0x4]u8, // 0x5D84
        m_stuckSpot: [0x10]u8, // 0x5D88
        m_wiggleTimer: [0x18]u8, // 0x5D98
        m_stuckJumpTimer: [0x18]u8, // 0x5DB0
        m_nextCleanupCheckTimestamp: [0x4]u8, // 0x5DC8
        m_avgVel: [0x28]u8, // 0x5DCC
        m_avgVelIndex: [0x4]u8, // 0x5DF4
        m_avgVelCount: [0x4]u8, // 0x5DF8
        m_lastOrigin: [0x10]u8, // 0x5DFC
        m_lastRadioRecievedTimestamp: [0x4]u8, // 0x5E0C
        m_lastRadioSentTimestamp: [0x4]u8, // 0x5E10
        m_radioSubject: [0x4]u8, // 0x5E14
        m_radioPosition: [0xC]u8, // 0x5E18
        m_voiceEndTimestamp: [0xC]u8, // 0x5E24
        m_lastValidReactionQueueFrame: [0x8]u8, // 0x5E30
    };
    pub const CHandleTest = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_Handle: [0x4]u8, // 0x4A8
        m_bSendHandle: [0x4]u8, // 0x4AC
    };
    pub const CLogicNPCCounter = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_OnMinCountAll: [0x18]u8, // 0x4A8
        m_OnMaxCountAll: [0x18]u8, // 0x4C0
        m_OnFactorAll: [0x20]u8, // 0x4D8
        m_OnMinPlayerDistAll: [0x20]u8, // 0x4F8
        m_OnMinCount_1: [0x18]u8, // 0x518
        m_OnMaxCount_1: [0x18]u8, // 0x530
        m_OnFactor_1: [0x20]u8, // 0x548
        m_OnMinPlayerDist_1: [0x20]u8, // 0x568
        m_OnMinCount_2: [0x18]u8, // 0x588
        m_OnMaxCount_2: [0x18]u8, // 0x5A0
        m_OnFactor_2: [0x20]u8, // 0x5B8
        m_OnMinPlayerDist_2: [0x20]u8, // 0x5D8
        m_OnMinCount_3: [0x18]u8, // 0x5F8
        m_OnMaxCount_3: [0x18]u8, // 0x610
        m_OnFactor_3: [0x20]u8, // 0x628
        m_OnMinPlayerDist_3: [0x20]u8, // 0x648
        m_hSource: [0x8]u8, // 0x668
        m_iszSourceEntityName: [0x8]u8, // 0x670
        m_flDistanceMax: [0x4]u8, // 0x678
        m_bDisabled: [0x4]u8, // 0x67C
        m_nMinCountAll: [0x4]u8, // 0x680
        m_nMaxCountAll: [0x4]u8, // 0x684
        m_nMinFactorAll: [0x4]u8, // 0x688
        m_nMaxFactorAll: [0xC]u8, // 0x68C
        m_iszNPCClassname_1: [0x8]u8, // 0x698
        m_nNPCState_1: [0x4]u8, // 0x6A0
        m_bInvertState_1: [0x4]u8, // 0x6A4
        m_nMinCount_1: [0x4]u8, // 0x6A8
        m_nMaxCount_1: [0x4]u8, // 0x6AC
        m_nMinFactor_1: [0x4]u8, // 0x6B0
        m_nMaxFactor_1: [0x8]u8, // 0x6B4
        m_flDefaultDist_1: [0x4]u8, // 0x6BC
        m_iszNPCClassname_2: [0x8]u8, // 0x6C0
        m_nNPCState_2: [0x4]u8, // 0x6C8
        m_bInvertState_2: [0x4]u8, // 0x6CC
        m_nMinCount_2: [0x4]u8, // 0x6D0
        m_nMaxCount_2: [0x4]u8, // 0x6D4
        m_nMinFactor_2: [0x4]u8, // 0x6D8
        m_nMaxFactor_2: [0x8]u8, // 0x6DC
        m_flDefaultDist_2: [0x4]u8, // 0x6E4
        m_iszNPCClassname_3: [0x8]u8, // 0x6E8
        m_nNPCState_3: [0x4]u8, // 0x6F0
        m_bInvertState_3: [0x4]u8, // 0x6F4
        m_nMinCount_3: [0x4]u8, // 0x6F8
        m_nMaxCount_3: [0x4]u8, // 0x6FC
        m_nMinFactor_3: [0x4]u8, // 0x700
        m_nMaxFactor_3: [0x8]u8, // 0x704
        m_flDefaultDist_3: [0x1C]u8, // 0x70C
    };
    pub const CCSPlayer_RadioServices = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_flGotHostageTalkTimer: [0x4]u8, // 0x48
        m_flDefusingTalkTimer: [0x4]u8, // 0x4C
        m_flC4PlantTalkTimer: [0x4]u8, // 0x50
        m_flRadioTokenSlots: [0xC]u8, // 0x54
        m_bIgnoreRadio: [0x8]u8, // 0x60
    };
    pub const CWeaponSG556 = extern struct {
        pad_0: [0x12A0]u8, // 0x0
    };
    pub const CRagdollConstraint = extern struct {
        pad_0: [0x508]u8, // 0x0
        m_xmin: [0x4]u8, // 0x508
        m_xmax: [0x4]u8, // 0x50C
        m_ymin: [0x4]u8, // 0x510
        m_ymax: [0x4]u8, // 0x514
        m_zmin: [0x4]u8, // 0x518
        m_zmax: [0x4]u8, // 0x51C
        m_xfriction: [0x4]u8, // 0x520
        m_yfriction: [0x4]u8, // 0x524
        m_zfriction: [0x8]u8, // 0x528
    };
    pub const CFuncVehicleClip = extern struct {
        pad_0: [0x850]u8, // 0x0
    };
    pub const CDEagle = extern struct {
        pad_0: [0x12A0]u8, // 0x0
    };
    pub const CWeaponFamas = extern struct {
        pad_0: [0x12A0]u8, // 0x0
    };
    pub const CEnvSplash = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_flScale: [0x8]u8, // 0x4A8
    };
    pub const CPointCameraVFOV = extern struct {
        pad_0: [0x508]u8, // 0x0
        m_flVerticalFOV: [0x8]u8, // 0x508
    };
    pub const CCSGO_WingmanIntroTerroristPosition = extern struct {
        pad_0: [0x1468]u8, // 0x0
    };
    pub const CCSWeaponBaseShotgun = extern struct {
        pad_0: [0x1280]u8, // 0x0
    };
    pub const CFuncMoveLinear = extern struct {
        pad_0: [0x8D0]u8, // 0x0
        m_authoredPosition: [0x4]u8, // 0x8D0
        m_angMoveEntitySpace: [0xC]u8, // 0x8D4
        m_vecMoveDirParentSpace: [0x10]u8, // 0x8E0
        m_soundStart: [0x8]u8, // 0x8F0
        m_soundStop: [0x8]u8, // 0x8F8
        m_currentSound: [0x8]u8, // 0x900
        m_flBlockDamage: [0x4]u8, // 0x908
        m_flStartPosition: [0xC]u8, // 0x90C
        m_OnFullyOpen: [0x18]u8, // 0x918
        m_OnFullyClosed: [0x18]u8, // 0x930
        m_flSpeed: [0x4]u8, // 0x948
        m_bCreateMovableNavMesh: [0x1]u8, // 0x94C
        m_bAllowMovableNavMeshDockingOnEntireEntity: [0x1]u8, // 0x94D
        m_bCreateNavObstacle: [0xA]u8, // 0x94E
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
    pub const CScriptItem = extern struct {
        pad_0: [0xAE0]u8, // 0x0
        m_MoveTypeOverride: [0x10]u8, // 0xAE0
    };
    pub const CDynamicPropAlias_prop_dynamic_override = extern struct {
        pad_0: [0xC90]u8, // 0x0
    };
    pub const CBaseTrigger = extern struct {
        pad_0: [0x8D0]u8, // 0x0
        m_OnStartTouch: [0x18]u8, // 0x8D0
        m_OnStartTouchAll: [0x18]u8, // 0x8E8
        m_OnEndTouch: [0x18]u8, // 0x900
        m_OnEndTouchAll: [0x18]u8, // 0x918
        m_OnTouching: [0x18]u8, // 0x930
        m_OnTouchingEachEntity: [0x18]u8, // 0x948
        m_OnNotTouching: [0x18]u8, // 0x960
        m_OnTouchingChanged: [0x18]u8, // 0x978
        m_hTouchingEntities: [0x18]u8, // 0x990
        m_iFilterName: [0x8]u8, // 0x9A8
        m_hFilter: [0x4]u8, // 0x9B0
        m_bDisabled: [0xC]u8, // 0x9B4
        m_bUseAsyncQueries: [0x8]u8, // 0x9C0
    };
    pub const CPointPush = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_bEnabled: [0x4]u8, // 0x4A8
        m_flMagnitude: [0x4]u8, // 0x4AC
        m_flRadius: [0x4]u8, // 0x4B0
        m_flInnerRadius: [0x4]u8, // 0x4B4
        m_flConeOfInfluence: [0x8]u8, // 0x4B8
        m_iszFilterName: [0x8]u8, // 0x4C0
        m_hFilter: [0x8]u8, // 0x4C8
    };
    pub const CPulseCell_Step_EntFire = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_Input: [0x8]u8, // 0x48
    };
    pub const CCSObserver_ObserverServices = extern struct {
        pad_0: [0x80]u8, // 0x0
    };
    pub const CPlayerPing = extern struct {
        pad_0: [0x4B0]u8, // 0x0
        m_hPlayer: [0x4]u8, // 0x4B0
        m_hPingedEntity: [0x4]u8, // 0x4B4
        m_iType: [0x4]u8, // 0x4B8
        m_bUrgent: [0x1]u8, // 0x4BC
        m_szPlaceName: [0x13]u8, // 0x4BD
    };
    pub const CHitboxComponent = extern struct {
        pad_0: [0x14]u8, // 0x0
        m_flBoundsExpandRadius: [0x4]u8, // 0x14
    };
    pub const CRopeKeyframe = extern struct {
        pad_0: [0x858]u8, // 0x0
        m_RopeFlags: [0x8]u8, // 0x858
        m_iNextLinkName: [0x8]u8, // 0x860
        m_Slack: [0x4]u8, // 0x868
        m_Width: [0x4]u8, // 0x86C
        m_TextureScale: [0x4]u8, // 0x870
        m_nSegments: [0x1]u8, // 0x874
        m_bConstrainBetweenEndpoints: [0x3]u8, // 0x875
        m_strRopeMaterialModel: [0x8]u8, // 0x878
        m_iRopeMaterialModelIndex: [0x8]u8, // 0x880
        m_Subdiv: [0x1]u8, // 0x888
        m_nChangeCount: [0x1]u8, // 0x889
        m_RopeLength: [0x2]u8, // 0x88A
        m_fLockedPoints: [0x1]u8, // 0x88C
        m_bCreatedFromMapFile: [0x3]u8, // 0x88D
        m_flScrollSpeed: [0x4]u8, // 0x890
        m_bStartPointValid: [0x1]u8, // 0x894
        m_bEndPointValid: [0x3]u8, // 0x895
        m_hStartPoint: [0x4]u8, // 0x898
        m_hEndPoint: [0x4]u8, // 0x89C
        m_iStartAttachment: [0x1]u8, // 0x8A0
        m_iEndAttachment: [0x7]u8, // 0x8A1
    };
    pub const CSmokeGrenade = extern struct {
        pad_0: [0x12D0]u8, // 0x0
    };
    pub const CBaseCombatCharacter = extern struct {
        pad_0: [0xA40]u8, // 0x0
        m_bForceServerRagdoll: [0x8]u8, // 0xA40
        m_hMyWearables: [0x18]u8, // 0xA48
        m_impactEnergyScale: [0x4]u8, // 0xA60
        m_bApplyStressDamage: [0x1]u8, // 0xA64
        m_bDeathEventsDispatched: [0x43]u8, // 0xA65
        m_vecRelationships: [0x18]u8, // 0xAA8
        m_strRelationships: [0x8]u8, // 0xAC0
        m_eHull: [0x4]u8, // 0xAC8
        m_nNavHullIdx: [0x4]u8, // 0xACC
        m_movementStats: [0x40]u8, // 0xAD0
    };
    pub const CLogicGameStateReport = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_bDisabled: [0xC8]u8, // 0x4A8
    };
    pub const ServerAuthoritativeWeaponSlot_t = extern struct {
        pad_0: [0x30]u8, // 0x0
        unClass: [0x2]u8, // 0x30
        unSlot: [0x2]u8, // 0x32
        unItemDefIdx: [0x4]u8, // 0x34
    };
    pub const CPathQueryComponent = extern struct {
        pad_0: [0xA0]u8, // 0x0
    };
    pub const CLogicRelay = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_OnSpawn: [0x18]u8, // 0x4A8
        m_OnTrigger: [0x18]u8, // 0x4C0
        m_bDisabled: [0x1]u8, // 0x4D8
        m_bWaitForRefire: [0x1]u8, // 0x4D9
        m_bTriggerOnce: [0x1]u8, // 0x4DA
        m_bFastRetrigger: [0x1]u8, // 0x4DB
        m_bPassthoughCaller: [0x4]u8, // 0x4DC
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
    pub const CTestPulseIO = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_OnVariantVoid: [0x18]u8, // 0x4A8
        m_OnVariantBool: [0x20]u8, // 0x4C0
        m_OnVariantInt: [0x20]u8, // 0x4E0
        m_OnVariantFloat: [0x20]u8, // 0x500
        m_OnVariantString: [0x20]u8, // 0x520
        m_OnVariantColor: [0x20]u8, // 0x540
        m_OnVariantVector: [0x28]u8, // 0x560
        m_bAllowEmptyInputs: [0x8]u8, // 0x588
        m_TestComponent: [0x30]u8, // 0x590
        m_OnInternalTestVoid: [0x18]u8, // 0x5C0
        m_OnInternalTestBool: [0x20]u8, // 0x5D8
        m_OnInternalTestInt: [0x20]u8, // 0x5F8
        m_OnInternalTestFloat: [0x20]u8, // 0x618
        m_OnInternalTestString: [0x20]u8, // 0x638
        m_OnInternalTestColor: [0x20]u8, // 0x658
        m_OnInternalTestVector: [0x28]u8, // 0x678
        m_OnInternalTestEntityName: [0x20]u8, // 0x6A0
        m_OnInternalTestEntityHandle: [0x20]u8, // 0x6C0
        m_OnInternalTestSchemaEnum: [0x20]u8, // 0x6E0
        m_OnInternalTestFloatString: [0x28]u8, // 0x700
        m_OnInternalTestEntityNameString: [0x28]u8, // 0x728
        m_OnInternalTestEntityHandleInt: [0x20]u8, // 0x750
        m_OnInternalTestStringStringString: [0x30]u8, // 0x770
    };
    pub const CWeaponUMP45 = extern struct {
        pad_0: [0x12A0]u8, // 0x0
    };
    pub const CGamePlayerEquip = extern struct {
        pad_0: [0x878]u8, // 0x0
    };
    pub const CPointEntityFinder = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_hEntity: [0x8]u8, // 0x4A8
        m_iFilterName: [0x8]u8, // 0x4B0
        m_hFilter: [0x8]u8, // 0x4B8
        m_iRefName: [0x8]u8, // 0x4C0
        m_hReference: [0x4]u8, // 0x4C8
        m_FindMethod: [0x4]u8, // 0x4CC
        m_OnFoundEntity: [0x18]u8, // 0x4D0
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
    pub const CKnife = extern struct {
        pad_0: [0x1280]u8, // 0x0
        m_bFirstAttack: [0x10]u8, // 0x1280
    };
    pub const CCSGO_TeamIntroCharacterPosition = extern struct {
        pad_0: [0x1468]u8, // 0x0
    };
    pub const CHostageRescueZoneShim = extern struct {
        pad_0: [0x9C8]u8, // 0x0
    };
    pub const CSimpleMarkupVolumeTagged = extern struct {
        pad_0: [0x890]u8, // 0x0
    };
    pub const CEnvSoundscapeAlias_snd_soundscape = extern struct {
        pad_0: [0x538]u8, // 0x0
    };
    pub const CCSPlayer_HostageServices = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_hCarriedHostage: [0x4]u8, // 0x48
        m_hCarriedHostageProp: [0x4]u8, // 0x4C
    };
    pub const CRenderComponent = extern struct {
        pad_0: [0x10]u8, // 0x0
        __m_pChainEntity: [0x40]u8, // 0x10
        m_bIsRenderingWithViewModels: [0x4]u8, // 0x50
        m_nSplitscreenFlags: [0x4]u8, // 0x54
        m_bEnableRendering: [0x50]u8, // 0x58
        m_bInterpolationReadyToDraw: [0x8]u8, // 0xA8
    };
    pub const CWaterBullet = extern struct {
        pad_0: [0xA40]u8, // 0x0
    };
    pub const CTriggerSoundscape = extern struct {
        pad_0: [0x9C8]u8, // 0x0
        m_hSoundscape: [0x8]u8, // 0x9C8
        m_SoundscapeName: [0x8]u8, // 0x9D0
        m_spectators: [0x18]u8, // 0x9D8
    };
    pub const CPulseCell_Outflow_PlayVOLine__CursorState_t = extern struct {
        m_sceneInstance: [0x4]u8, // 0x0
    };
    pub const CHostageExpresserShim = extern struct {
        pad_0: [0xB10]u8, // 0x0
        m_pExpresser: [0x10]u8, // 0xB10
    };
    pub const CPointChildModifier = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_bOrphanInsteadOfDeletingChildrenOnRemove: [0x8]u8, // 0x4A8
    };
    pub const CCSPlayerLegacyJump = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_bOldJumpPressed: [0x4]u8, // 0x10
        m_flJumpPressedTime: [0x4]u8, // 0x14
    };
    pub const CWeaponHKP2000 = extern struct {
        pad_0: [0x12A0]u8, // 0x0
    };
    pub const CShatterGlassShardPhysics = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_hParentShard: [0x8]u8, // 0x850
        m_ShardDesc: [0x80]u8, // 0x858
        m_nPoolState: [0x4]u8, // 0x8D8
        m_bTouchedByPlayer: [0x4]u8, // 0x8DC
    };
    pub const CPathParticleRope = extern struct {
        pad_0: [0x4B0]u8, // 0x0
        m_bStartActive: [0x4]u8, // 0x4B0
        m_flMaxSimulationTime: [0x4]u8, // 0x4B4
        m_iszEffectName: [0x8]u8, // 0x4B8
        m_PathNodes_Name: [0x18]u8, // 0x4C0
        m_flParticleSpacing: [0x4]u8, // 0x4D8
        m_flSlack: [0x4]u8, // 0x4DC
        m_flRadius: [0x4]u8, // 0x4E0
        m_ColorTint: [0x4]u8, // 0x4E4
        m_nEffectState: [0x8]u8, // 0x4E8
        m_iEffectIndex: [0x8]u8, // 0x4F0
        m_PathNodes_Position: [0x18]u8, // 0x4F8
        m_PathNodes_TangentIn: [0x18]u8, // 0x510
        m_PathNodes_TangentOut: [0x18]u8, // 0x528
        m_PathNodes_Color: [0x18]u8, // 0x540
        m_PathNodes_PinEnabled: [0x18]u8, // 0x558
        m_PathNodes_RadiusScale: [0x20]u8, // 0x570
    };
    pub const CCredits = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_OnCreditsDone: [0x18]u8, // 0x4A8
        m_bRolledOutroCredits: [0x4]u8, // 0x4C0
        m_flLogoLength: [0x4]u8, // 0x4C4
    };
    pub const CWeaponFiveSeven = extern struct {
        pad_0: [0x12A0]u8, // 0x0
    };
    pub const CFishPool = extern struct {
        pad_0: [0x4B8]u8, // 0x0
        m_fishCount: [0x4]u8, // 0x4B8
        m_maxRange: [0x4]u8, // 0x4BC
        m_swimDepth: [0x4]u8, // 0x4C0
        m_waterLevel: [0x4]u8, // 0x4C4
        m_isDormant: [0x8]u8, // 0x4C8
        m_fishes: [0x18]u8, // 0x4D0
        m_visTimer: [0x18]u8, // 0x4E8
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
    pub const CRagdollPropAlias_physics_prop_ragdoll = extern struct {
        pad_0: [0xC00]u8, // 0x0
    };
    pub const CBreakableProp = extern struct {
        pad_0: [0xA78]u8, // 0x0
        m_CPropDataComponent: [0x40]u8, // 0xA78
        m_OnStartDeath: [0x18]u8, // 0xAB8
        m_OnBreak: [0x18]u8, // 0xAD0
        m_OnHealthChanged: [0x20]u8, // 0xAE8
        m_OnTakeDamage: [0x18]u8, // 0xB08
        m_impactEnergyScale: [0x4]u8, // 0xB20
        m_iMinHealthDmg: [0x4]u8, // 0xB24
        m_preferredCarryAngles: [0xC]u8, // 0xB28
        m_flPressureDelay: [0x4]u8, // 0xB34
        m_flDefBurstScale: [0x4]u8, // 0xB38
        m_vDefBurstOffset: [0xC]u8, // 0xB3C
        m_hBreaker: [0x4]u8, // 0xB48
        m_PerformanceMode: [0x4]u8, // 0xB4C
        m_flPreventDamageBeforeTime: [0x4]u8, // 0xB50
        m_BreakableContentsType: [0x4]u8, // 0xB54
        m_strBreakableContentsPropGroupOverride: [0x8]u8, // 0xB58
        m_strBreakableContentsParticleOverride: [0x8]u8, // 0xB60
        m_bHasBreakPiecesOrCommands: [0x4]u8, // 0xB68
        m_explodeDamage: [0x4]u8, // 0xB6C
        m_explodeRadius: [0x8]u8, // 0xB70
        m_sExplosionType: [0x8]u8, // 0xB78
        m_explosionDelay: [0x8]u8, // 0xB80
        m_explosionBuildupSound: [0x8]u8, // 0xB88
        m_explosionCustomEffect: [0x8]u8, // 0xB90
        m_explosionCustomSound: [0x8]u8, // 0xB98
        m_explosionModifier: [0x8]u8, // 0xBA0
        m_hPhysicsAttacker: [0x4]u8, // 0xBA8
        m_flLastPhysicsInfluenceTime: [0x4]u8, // 0xBAC
        m_flDefaultFadeScale: [0x4]u8, // 0xBB0
        m_hLastAttacker: [0x4]u8, // 0xBB4
        m_iszPuntSound: [0x8]u8, // 0xBB8
        m_bUsePuntSound: [0x1]u8, // 0xBC0
        m_bOriginalBlockLOS: [0xF]u8, // 0xBC1
    };
    pub const CLightEntity = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_CLightComponent: [0x8]u8, // 0x850
    };
    pub const CInfoDynamicShadowHintBox = extern struct {
        pad_0: [0x4C0]u8, // 0x0
        m_vBoxMins: [0xC]u8, // 0x4C0
        m_vBoxMaxs: [0xC]u8, // 0x4CC
    };
    pub const CBaseAnimGraphController = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_nAnimationAlgorithm: [0x4]u8, // 0x18
        m_nNextExternalGraphHandle: [0x4]u8, // 0x1C
        m_vecSecondarySkeletonSlotIDs: [0x18]u8, // 0x20
        m_vecSecondarySkeletons: [0x18]u8, // 0x38
        m_nSecondarySkeletonMasterCount: [0x4]u8, // 0x50
        m_flSoundSyncTime: [0x4]u8, // 0x54
        m_nActiveIKChainMask: [0x4]u8, // 0x58
        m_hSequence: [0x4]u8, // 0x5C
        m_flSeqStartTime: [0x4]u8, // 0x60
        m_flSeqFixedCycle: [0x4]u8, // 0x64
        m_nAnimLoopMode: [0x4]u8, // 0x68
        m_flPlaybackRate: [0xC]u8, // 0x6C
        m_nNotifyState: [0x1]u8, // 0x78
        m_bNetworkedAnimationInputsChanged: [0x1]u8, // 0x79
        m_bNetworkedSequenceChanged: [0x1]u8, // 0x7A
        m_bLastUpdateSkipped: [0x1]u8, // 0x7B
        m_bSequenceFinished: [0x4]u8, // 0x7C
        m_nPrevAnimUpdateTick: [0x2A0]u8, // 0x80
        m_hGraphDefinitionAG2: [0x8]u8, // 0x320
        m_SerializePoseRecipeAG2Slots: [0x68]u8, // 0x328
        m_SerializePoseRecipeAG2Dynamic: [0x18]u8, // 0x390
        m_nSerializePoseRecipeAG2ActiveSlot: [0x4]u8, // 0x3A8
        m_nSerializePoseRecipeVersionAG2: [0x14]u8, // 0x3AC
        m_nServerGraphInstanceIteration: [0x4]u8, // 0x3C0
        m_nServerSerializationContextIteration: [0x4]u8, // 0x3C4
        m_primaryGraphId: [0x8]u8, // 0x3C8
        m_vecExternalGraphIds: [0x18]u8, // 0x3D0
        m_vecExternalClipIds: [0x18]u8, // 0x3E8
        m_sAnimGraph2Identifier: [0x8]u8, // 0x400
        m_pGraphInstanceAG2: [0x220]u8, // 0x408
        m_vecExternalGraphs: [0x28]u8, // 0x628
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
    pub const COrnamentProp = extern struct {
        pad_0: [0xC90]u8, // 0x0
        m_initialOwner: [0x10]u8, // 0xC90
    };
    pub const CCSPlayer_CameraServices = extern struct {
        pad_0: [0x1B0]u8, // 0x0
    };
    pub const CModelPointEntity = extern struct {
        pad_0: [0x850]u8, // 0x0
    };
    pub const CRectLight = extern struct {
        pad_0: [0xB38]u8, // 0x0
        m_bShowLight: [0x8]u8, // 0xB38
    };
    pub const CFilterMultiple = extern struct {
        pad_0: [0x4E0]u8, // 0x0
        m_nFilterType: [0x8]u8, // 0x4E0
        m_iFilterName: [0x50]u8, // 0x4E8
        m_hFilter: [0x28]u8, // 0x538
    };
    pub const CCSPlayerResource = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_bHostageAlive: [0xC]u8, // 0x4A8
        m_isHostageFollowingSomeone: [0xC]u8, // 0x4B4
        m_iHostageEntityIDs: [0x30]u8, // 0x4C0
        m_bombsiteCenterA: [0xC]u8, // 0x4F0
        m_bombsiteCenterB: [0xC]u8, // 0x4FC
        m_hostageRescueX: [0x10]u8, // 0x508
        m_hostageRescueY: [0x10]u8, // 0x518
        m_hostageRescueZ: [0x10]u8, // 0x528
        m_bEndMatchNextMapAllVoted: [0x1]u8, // 0x538
        m_foundGoalPositions: [0x7]u8, // 0x539
    };
    pub const CPulseCell_FireCursors = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_Outflows: [0x18]u8, // 0xD8
        m_bWaitForChildOutflows: [0x8]u8, // 0xF0
        m_OnFinished: [0x48]u8, // 0xF8
    };
    pub const CFuncNavBlocker = extern struct {
        pad_0: [0x858]u8, // 0x0
        m_bDisabled: [0x4]u8, // 0x858
        m_nBlockedTeamNumber: [0xC]u8, // 0x85C
    };
    pub const CMoverPathNode = extern struct {
        pad_0: [0x500]u8, // 0x0
        m_OnStartFromOrInSegment: [0x20]u8, // 0x500
        m_OnStoppedAtOrInSegment: [0x20]u8, // 0x520
        m_OnPassThrough: [0x20]u8, // 0x540
        m_OnPassThroughForward: [0x20]u8, // 0x560
        m_OnPassThroughReverse: [0x20]u8, // 0x580
    };
    pub const CEnvSoundscape = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_OnPlay: [0x18]u8, // 0x4A8
        m_flRadius: [0x8]u8, // 0x4C0
        m_soundEventName: [0x8]u8, // 0x4C8
        m_bOverrideWithEvent: [0x4]u8, // 0x4D0
        m_soundscapeIndex: [0x4]u8, // 0x4D4
        m_soundscapeEntityListId: [0x8]u8, // 0x4D8
        m_positionNames: [0x40]u8, // 0x4E0
        m_hProxySoundscape: [0x4]u8, // 0x520
        m_bDisabled: [0x4]u8, // 0x524
        m_soundscapeName: [0x8]u8, // 0x528
        m_soundEventHash: [0x8]u8, // 0x530
    };
    pub const CFuncBrush = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_iSolidity: [0x4]u8, // 0x850
        m_iDisabled: [0x4]u8, // 0x854
        m_bSolidBsp: [0x8]u8, // 0x858
        m_iszExcludedClass: [0x8]u8, // 0x860
        m_bInvertExclusion: [0x1]u8, // 0x868
        m_bScriptedMovement: [0x7]u8, // 0x869
    };
    pub const CBodyComponentPoint = extern struct {
        pad_0: [0x80]u8, // 0x0
        m_sceneNode: [0x110]u8, // 0x80
    };
    pub const CPhysBox = extern struct {
        pad_0: [0x928]u8, // 0x0
        m_damageType: [0x4]u8, // 0x928
        m_damageToEnableMotion: [0x4]u8, // 0x92C
        m_flForceToEnableMotion: [0x4]u8, // 0x930
        m_vHoverPosePosition: [0xC]u8, // 0x934
        m_angHoverPoseAngles: [0xC]u8, // 0x940
        m_bNotSolidToWorld: [0x1]u8, // 0x94C
        m_bEnableUseOutput: [0x1]u8, // 0x94D
        m_nHoverPoseFlags: [0x2]u8, // 0x94E
        m_flTouchOutputPerEntityDelay: [0x8]u8, // 0x950
        m_iszCollisionGroup: [0x8]u8, // 0x958
        m_iszInteractsAs: [0x8]u8, // 0x960
        m_iszInteractsWith: [0x8]u8, // 0x968
        m_iszInteractsExclude: [0x8]u8, // 0x970
        m_OnDamaged: [0x18]u8, // 0x978
        m_OnAwakened: [0x18]u8, // 0x990
        m_OnMotionEnabled: [0x18]u8, // 0x9A8
        m_OnPlayerUse: [0x18]u8, // 0x9C0
        m_OnStartTouch: [0x30]u8, // 0x9D8
    };
    pub const CSoundEventAABBEntity = extern struct {
        pad_0: [0x568]u8, // 0x0
        m_vMins: [0xC]u8, // 0x568
        m_vMaxs: [0xC]u8, // 0x574
    };
    pub const CItemSoda = extern struct {
        pad_0: [0xA40]u8, // 0x0
    };
    pub const CPulseCell_ApplyDynamicAttributeBase = extern struct {
        pad_0: [0xD8]u8, // 0x0
    };
    pub const CPulseCell_Timeline__TimelineEvent_t = extern struct {
        m_flTimeFromPrevious: [0x8]u8, // 0x0
        m_EventOutflow: [0x48]u8, // 0x8
    };
    pub const COmniLight = extern struct {
        pad_0: [0xB38]u8, // 0x0
        m_flInnerAngle: [0x4]u8, // 0xB38
        m_flOuterAngle: [0x4]u8, // 0xB3C
        m_bShowLight: [0x8]u8, // 0xB40
    };
    pub const CTriggerVolume = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_iFilterName: [0x8]u8, // 0x850
        m_hFilter: [0x8]u8, // 0x858
    };
    pub const CBtNodeCondition = extern struct {
        pad_0: [0x58]u8, // 0x0
        m_bNegated: [0x8]u8, // 0x58
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
    pub const CEnvExplosion = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_iMagnitude: [0x4]u8, // 0x850
        m_flPlayerDamage: [0x4]u8, // 0x854
        m_iRadiusOverride: [0x4]u8, // 0x858
        m_flInnerRadius: [0x4]u8, // 0x85C
        m_flDamageForce: [0x4]u8, // 0x860
        m_hInflictor: [0x4]u8, // 0x864
        m_iCustomDamageType: [0x4]u8, // 0x868
        m_bHasCustomDamageType: [0x1]u8, // 0x86C
        m_bCreateDebris: [0xB]u8, // 0x86D
        m_iszCustomEffectName: [0x8]u8, // 0x878
        m_iszCustomSoundName: [0x8]u8, // 0x880
        m_bSuppressParticleImpulse: [0x4]u8, // 0x888
        m_iClassIgnore: [0x4]u8, // 0x88C
        m_iClassIgnore2: [0x8]u8, // 0x890
        m_iszEntityIgnoreName: [0x8]u8, // 0x898
        m_hEntityIgnore: [0x8]u8, // 0x8A0
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
    pub const CTestPulseIO__ThreeStringArgs_t = extern struct {
        strArg1: [0x8]u8, // 0x0
        strArg2: [0x8]u8, // 0x8
        strArg3: [0x8]u8, // 0x10
    };
    pub const CPulseCell_IsRequirementValid = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CFootstepControl = extern struct {
        pad_0: [0x9C8]u8, // 0x0
        m_source: [0x8]u8, // 0x9C8
        m_destination: [0x8]u8, // 0x9D0
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
    pub const CParticleSystem = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_szSnapshotFileName: [0x200]u8, // 0x850
        m_bActive: [0x1]u8, // 0xA50
        m_bFrozen: [0x3]u8, // 0xA51
        m_flFreezeTransitionDuration: [0x4]u8, // 0xA54
        m_nStopType: [0x4]u8, // 0xA58
        m_bAnimateDuringGameplayPause: [0x4]u8, // 0xA5C
        m_iEffectIndex: [0x8]u8, // 0xA60
        m_flStartTime: [0x4]u8, // 0xA68
        m_flPreSimTime: [0x4]u8, // 0xA6C
        m_vServerControlPoints: [0x30]u8, // 0xA70
        m_iServerControlPointAssignments: [0x4]u8, // 0xAA0
        m_hControlPointEnts: [0x100]u8, // 0xAA4
        m_bDataStringLocalized: [0x4]u8, // 0xBA4
        m_strDataString: [0x8]u8, // 0xBA8
        m_bNoSave: [0x1]u8, // 0xBB0
        m_bNoFreeze: [0x1]u8, // 0xBB1
        m_bNoRamp: [0x1]u8, // 0xBB2
        m_bStartActive: [0x5]u8, // 0xBB3
        m_iszEffectName: [0x8]u8, // 0xBB8
        m_iszControlPointNames: [0x200]u8, // 0xBC0
        m_nDataCP: [0x4]u8, // 0xDC0
        m_vecDataCPValue: [0xC]u8, // 0xDC4
        m_nTintCP: [0x4]u8, // 0xDD0
        m_clrTint: [0x4]u8, // 0xDD4
    };
    pub const CTriggerBrush = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_OnStartTouch: [0x18]u8, // 0x850
        m_OnEndTouch: [0x18]u8, // 0x868
        m_OnUse: [0x18]u8, // 0x880
        m_iInputFilter: [0x4]u8, // 0x898
        m_iDontMessageParent: [0x4]u8, // 0x89C
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
    pub const CSoundEventMultiPointEntity = extern struct {
        pad_0: [0x568]u8, // 0x0
        m_iCountMax: [0x4]u8, // 0x568
        m_flDistanceMax: [0x4]u8, // 0x56C
        m_flDistMaxSqr: [0x4]u8, // 0x570
        m_flDotProductMax: [0x4]u8, // 0x574
        m_bPlaying: [0x28]u8, // 0x578
    };
    pub const CSoundAreaEntityBase = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_bDisabled: [0x8]u8, // 0x4A8
        m_iszSoundAreaType: [0x8]u8, // 0x4B0
        m_vPos: [0x10]u8, // 0x4B8
    };
    pub const CWeaponM4A1Silencer = extern struct {
        pad_0: [0x12A0]u8, // 0x0
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
    pub const CTestPulseIO__FloatStringArgs_t = extern struct {
        flOutFloat: [0x8]u8, // 0x0
        strOutString: [0x8]u8, // 0x8
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
    pub const CItemAssaultSuit = extern struct {
        pad_0: [0xAE0]u8, // 0x0
    };
    pub const CBeam = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_flFrameRate: [0x4]u8, // 0x850
        m_flHDRColorScale: [0x4]u8, // 0x854
        m_flFireTime: [0x4]u8, // 0x858
        m_flDamage: [0x4]u8, // 0x85C
        m_nNumBeamEnts: [0x8]u8, // 0x860
        m_hBaseMaterial: [0x8]u8, // 0x868
        m_nHaloIndex: [0x8]u8, // 0x870
        m_nBeamType: [0x4]u8, // 0x878
        m_nBeamFlags: [0x4]u8, // 0x87C
        m_hAttachEntity: [0x28]u8, // 0x880
        m_nAttachIndex: [0xC]u8, // 0x8A8
        m_fWidth: [0x4]u8, // 0x8B4
        m_fEndWidth: [0x4]u8, // 0x8B8
        m_fFadeLength: [0x4]u8, // 0x8BC
        m_fHaloScale: [0x4]u8, // 0x8C0
        m_fAmplitude: [0x4]u8, // 0x8C4
        m_fStartFrame: [0x4]u8, // 0x8C8
        m_fSpeed: [0x4]u8, // 0x8CC
        m_flFrame: [0x4]u8, // 0x8D0
        m_bTurnedOff: [0x4]u8, // 0x8D4
        m_vecEndPos: [0xC]u8, // 0x8D8
        m_hEndEntity: [0x4]u8, // 0x8E4
        m_nDissolveType: [0x8]u8, // 0x8E8
    };
    pub const CLogicEventListener = extern struct {
        pad_0: [0x4B8]u8, // 0x0
        m_strEventName: [0x8]u8, // 0x4B8
        m_bIsEnabled: [0x4]u8, // 0x4C0
        m_nTeam: [0x4]u8, // 0x4C4
        m_OnEventFired: [0x20]u8, // 0x4C8
    };
    pub const CCSGO_TeamSelectTerroristPosition = extern struct {
        pad_0: [0x1468]u8, // 0x0
    };
    pub const CInfoData = extern struct {
        pad_0: [0x840]u8, // 0x0
    };
    pub const CWeaponNegev = extern struct {
        pad_0: [0x12A0]u8, // 0x0
    };
    pub const CWeaponElite = extern struct {
        pad_0: [0x12A0]u8, // 0x0
    };
    pub const CBasePlayerPawn = extern struct {
        pad_0: [0xB10]u8, // 0x0
        m_pWeaponServices: [0x8]u8, // 0xB10
        m_pItemServices: [0x8]u8, // 0xB18
        m_pAutoaimServices: [0x8]u8, // 0xB20
        m_pObserverServices: [0x8]u8, // 0xB28
        m_pWaterServices: [0x8]u8, // 0xB30
        m_pUseServices: [0x8]u8, // 0xB38
        m_pFlashlightServices: [0x8]u8, // 0xB40
        m_pCameraServices: [0x8]u8, // 0xB48
        m_pMovementServices: [0x10]u8, // 0xB50
        m_ServerViewAngleChanges: [0x68]u8, // 0xB60
        v_angle: [0xC]u8, // 0xBC8
        v_anglePrevious: [0xC]u8, // 0xBD4
        m_iHideHUD: [0x8]u8, // 0xBE0
        m_skybox3d: [0x90]u8, // 0xBE8
        m_fTimeLastHurt: [0x4]u8, // 0xC78
        m_flDeathTime: [0x4]u8, // 0xC7C
        m_fNextSuicideTime: [0x8]u8, // 0xC80
        m_fInitHUD: [0x8]u8, // 0xC88
        m_pExpresser: [0x8]u8, // 0xC90
        m_hController: [0x4]u8, // 0xC98
        m_hDefaultController: [0x8]u8, // 0xC9C
        m_fHltvReplayDelay: [0x4]u8, // 0xCA4
        m_fHltvReplayEnd: [0x4]u8, // 0xCA8
        m_iHltvReplayEntity: [0x4]u8, // 0xCAC
        m_sndOpvarLatchData: [0x20]u8, // 0xCB0
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
        pad_0: [0x4E0]u8, // 0x0
        m_bAdrenalineActive: [0x4]u8, // 0x4E0
        m_iHealthMin: [0x4]u8, // 0x4E4
        m_iHealthMax: [0x8]u8, // 0x4E8
    };
    pub const CCSSprite = extern struct {
        pad_0: [0x8C0]u8, // 0x0
    };
    pub const CMathColorBlend = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_flInMin: [0x4]u8, // 0x4A8
        m_flInMax: [0x4]u8, // 0x4AC
        m_OutColor1: [0x4]u8, // 0x4B0
        m_OutColor2: [0x4]u8, // 0x4B4
        m_OutValue: [0x20]u8, // 0x4B8
    };
    pub const CShower = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_flSpeed: [0x8]u8, // 0x850
    };
    pub const CPulseCell_Inflow_GraphHook = extern struct {
        pad_0: [0x80]u8, // 0x0
        m_HookName: [0x10]u8, // 0x80
    };
    pub const CScriptNavBlocker = extern struct {
        pad_0: [0x868]u8, // 0x0
        m_vExtent: [0x10]u8, // 0x868
    };
    pub const CEntityBlocker = extern struct {
        pad_0: [0x850]u8, // 0x0
    };
    pub const SignatureOutflow_Resume = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CSoundOpvarSetDomeEntity = extern struct {
        pad_0: [0x640]u8, // 0x0
        m_arDirections: [0x18]u8, // 0x640
        m_arOpenness: [0x18]u8, // 0x658
        m_arNeighbors: [0x18]u8, // 0x670
        m_nCurrentIndex: [0x8]u8, // 0x688
        m_arClusterParent: [0x18]u8, // 0x690
        m_arClusterSize: [0x18]u8, // 0x6A8
        m_arClusterWeight: [0x18]u8, // 0x6C0
        m_arClusterDirSum: [0x18]u8, // 0x6D8
        m_nClusterIndex: [0x4]u8, // 0x6F0
        m_flClusteredOpenness: [0x4]u8, // 0x6F4
        m_vClusterDirection: [0xC]u8, // 0x6F8
        m_vSmoothedOpenDir: [0xC]u8, // 0x704
        m_nDirWarmupThinksRemaining: [0x4]u8, // 0x710
        m_vLastTraceOrigin: [0xC]u8, // 0x714
        m_bTraceOriginValid: [0x4]u8, // 0x720
        m_nCatchUpThinksRemaining: [0x4]u8, // 0x724
        m_bDiscontinuityPending: [0x4]u8, // 0x728
        m_flSmoothedOpenness: [0x4]u8, // 0x72C
        m_flLastSmoothTime: [0x4]u8, // 0x730
        m_flSize: [0x4]u8, // 0x734
        m_nTotalDirections: [0x4]u8, // 0x738
        m_nTracesPerFrame: [0x4]u8, // 0x73C
        m_bDomeMode: [0x1]u8, // 0x740
        m_bMultiWall: [0x3]u8, // 0x741
        m_flWallTransmission: [0x4]u8, // 0x744
        m_nClusterK: [0x4]u8, // 0x748
        m_flClusterP: [0x4]u8, // 0x74C
        m_flClusterBlend: [0x4]u8, // 0x750
        m_flOpennessExponent: [0x4]u8, // 0x754
        m_flShoulderExponent: [0x4]u8, // 0x758
        m_flSmoothHalfLife: [0x4]u8, // 0x75C
    };
    pub const CPulseCell_Outflow_PlayVCDBase = extern struct {
        pad_0: [0x138]u8, // 0x0
    };
    pub const CCSObserverPawn = extern struct {
        pad_0: [0xE50]u8, // 0x0
    };
    pub const CTriggerActiveWeaponDetect = extern struct {
        pad_0: [0x9C8]u8, // 0x0
        m_OnTouchedActiveWeapon: [0x18]u8, // 0x9C8
        m_iszWeaponClassName: [0x8]u8, // 0x9E0
    };
    pub const CFuncLadderAlias_func_useableladder = extern struct {
        pad_0: [0x8E0]u8, // 0x0
    };
    pub const CSpriteOriented = extern struct {
        pad_0: [0x8C0]u8, // 0x0
    };
    pub const CPointServerCommand = extern struct {
        pad_0: [0x4A8]u8, // 0x0
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
    pub const CPlayerSprayDecal = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_nUniqueID: [0x4]u8, // 0x850
        m_unAccountID: [0x4]u8, // 0x854
        m_unTraceID: [0x4]u8, // 0x858
        m_rtGcTime: [0x4]u8, // 0x85C
        m_vecEndPos: [0xC]u8, // 0x860
        m_vecStart: [0xC]u8, // 0x86C
        m_vecLeft: [0xC]u8, // 0x878
        m_vecNormal: [0xC]u8, // 0x884
        m_nPlayer: [0x4]u8, // 0x890
        m_nEntity: [0x4]u8, // 0x894
        m_nHitbox: [0x4]u8, // 0x898
        m_flCreationTime: [0x4]u8, // 0x89C
        m_nTintID: [0x4]u8, // 0x8A0
        m_nVersion: [0x1]u8, // 0x8A4
        m_ubSignature: [0x83]u8, // 0x8A5
    };
    pub const CFuncWater = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_BuoyancyHelper: [0x118]u8, // 0x850
    };
    pub const CCSGameModeRules = extern struct {
        pad_0: [0x8]u8, // 0x0
        __m_pChainEntity: [0x28]u8, // 0x8
    };
    pub const CPulseCell_Outflow_PlayVCD__VCDRequirementInfo_t = extern struct {
        m_nEventID: [0x8]u8, // 0x0
        m_Outflow: [0x48]u8, // 0x8
    };
    pub const CPulseCell_ApplyDynamicAttributeInt = extern struct {
        pad_0: [0xD8]u8, // 0x0
    };
    pub const CEconEntity = extern struct {
        pad_0: [0xA58]u8, // 0x0
        m_AttributeManager: [0x438]u8, // 0xA58
        m_OriginalOwnerXuidLow: [0x4]u8, // 0xE90
        m_OriginalOwnerXuidHigh: [0x4]u8, // 0xE94
        m_nFallbackPaintKit: [0x4]u8, // 0xE98
        m_nFallbackSeed: [0x4]u8, // 0xE9C
        m_flFallbackWear: [0x4]u8, // 0xEA0
        m_nFallbackStatTrak: [0x4]u8, // 0xEA4
        m_hOldProvidee: [0x4]u8, // 0xEA8
        m_iOldOwnerClass: [0x4]u8, // 0xEAC
    };
    pub const CTankTargetChange = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_newTarget: [0x10]u8, // 0x4A8
        m_newTargetName: [0x8]u8, // 0x4B8
    };
    pub const CCSPlayer_WaterServices = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_NextDrownDamageTime: [0x4]u8, // 0x48
        m_nDrownDmgRate: [0x4]u8, // 0x4C
        m_AirFinishedTime: [0x4]u8, // 0x50
        m_flWaterJumpTime: [0x4]u8, // 0x54
        m_vecWaterJumpVel: [0xC]u8, // 0x58
        m_flSwimSoundTime: [0x1C]u8, // 0x64
    };
    pub const CLogicDistanceCheck = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_iszEntityA: [0x8]u8, // 0x4A8
        m_iszEntityB: [0x8]u8, // 0x4B0
        m_flZone1Distance: [0x4]u8, // 0x4B8
        m_flZone2Distance: [0x4]u8, // 0x4BC
        m_InZone1: [0x18]u8, // 0x4C0
        m_InZone2: [0x18]u8, // 0x4D8
        m_InZone3: [0x18]u8, // 0x4F0
    };
    pub const CEnvCombinedLightProbeVolume = extern struct {
        pad_0: [0x5C0]u8, // 0x0
        m_Entity_Color: [0x4]u8, // 0x5C0
        m_Entity_flBrightness: [0x4]u8, // 0x5C4
        m_Entity_hCubemapTexture: [0x8]u8, // 0x5C8
        m_Entity_bCustomCubemapTexture: [0x8]u8, // 0x5D0
        m_Entity_hLightProbeTexture_AmbientCube: [0x8]u8, // 0x5D8
        m_Entity_hLightProbeTexture_SDF: [0x8]u8, // 0x5E0
        m_Entity_hLightProbeTexture_SH2_DC: [0x8]u8, // 0x5E8
        m_Entity_hLightProbeTexture_SH2_L1: [0x8]u8, // 0x5F0
        m_Entity_hLightProbeDirectLightIndicesTexture: [0x8]u8, // 0x5F8
        m_Entity_hLightProbeDirectLightScalarsTexture: [0x8]u8, // 0x600
        m_Entity_hLightProbeDirectLightShadowsTexture: [0x8]u8, // 0x608
        m_Entity_vBoxMins: [0xC]u8, // 0x610
        m_Entity_vBoxMaxs: [0xC]u8, // 0x61C
        m_Entity_bMoveable: [0x4]u8, // 0x628
        m_Entity_nHandshake: [0x4]u8, // 0x62C
        m_Entity_nEnvCubeMapArrayIndex: [0x4]u8, // 0x630
        m_Entity_nPriority: [0x4]u8, // 0x634
        m_Entity_bStartDisabled: [0x4]u8, // 0x638
        m_Entity_flEdgeFadeDist: [0x4]u8, // 0x63C
        m_Entity_vEdgeFadeDists: [0xC]u8, // 0x640
        m_Entity_nLightProbeSizeX: [0x4]u8, // 0x64C
        m_Entity_nLightProbeSizeY: [0x4]u8, // 0x650
        m_Entity_nLightProbeSizeZ: [0x4]u8, // 0x654
        m_Entity_nLightProbeAtlasX: [0x4]u8, // 0x658
        m_Entity_nLightProbeAtlasY: [0x4]u8, // 0x65C
        m_Entity_nLightProbeAtlasZ: [0x19]u8, // 0x660
        m_Entity_bEnabled: [0x7]u8, // 0x679
    };
    pub const ViewAngleServerChange_t = extern struct {
        pad_0: [0x30]u8, // 0x0
        nType: [0x4]u8, // 0x30
        qAngle: [0xC]u8, // 0x34
        nIndex: [0x8]u8, // 0x40
    };
    pub const CLogicDistanceAutosave = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_iszTargetEntity: [0x8]u8, // 0x4A8
        m_flDistanceToPlayer: [0x4]u8, // 0x4B0
        m_bForceNewLevelUnit: [0x1]u8, // 0x4B4
        m_bCheckCough: [0x1]u8, // 0x4B5
        m_bThinkDangerous: [0x2]u8, // 0x4B6
        m_flDangerousTime: [0x8]u8, // 0x4B8
    };
    pub const CLogicBranch = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_bInValue: [0x8]u8, // 0x4A8
        m_Listeners: [0x18]u8, // 0x4B0
        m_OnTrue: [0x18]u8, // 0x4C8
        m_OnFalse: [0x18]u8, // 0x4E0
    };
    pub const CPulseCell_Outflow_ScriptedSequence = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_szSyncGroup: [0x8]u8, // 0xD8
        m_nExpectedNumSequencesInSyncGroup: [0x4]u8, // 0xE0
        m_bEnsureOnNavmeshOnFinish: [0x1]u8, // 0xE4
        m_bDontTeleportAtEnd: [0x1]u8, // 0xE5
        m_bDisallowInterrupts: [0x2]u8, // 0xE6
        m_scriptedSequenceDataMain: [0x38]u8, // 0xE8
        m_vecAdditionalActors: [0x18]u8, // 0x120
        m_OnFinished: [0x48]u8, // 0x138
        m_Triggers: [0x18]u8, // 0x180
    };
    pub const CFuncTrackChange = extern struct {
        pad_0: [0x920]u8, // 0x0
        m_trackTop: [0x4]u8, // 0x920
        m_trackBottom: [0x4]u8, // 0x924
        m_train: [0x8]u8, // 0x928
        m_trackTopName: [0x8]u8, // 0x930
        m_trackBottomName: [0x8]u8, // 0x938
        m_trainName: [0x8]u8, // 0x940
        m_code: [0x4]u8, // 0x948
        m_targetState: [0x4]u8, // 0x94C
        m_use: [0x8]u8, // 0x950
    };
    pub const CFuncTrackTrain = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_ppath: [0x4]u8, // 0x850
        m_length: [0x4]u8, // 0x854
        m_vPosPrev: [0xC]u8, // 0x858
        m_angPrev: [0xC]u8, // 0x864
        m_flSpeed: [0x4]u8, // 0x870
        m_controlMins: [0xC]u8, // 0x874
        m_controlMaxs: [0xC]u8, // 0x880
        m_lastBlockPos: [0xC]u8, // 0x88C
        m_lastBlockTick: [0x4]u8, // 0x898
        m_flVolume: [0x4]u8, // 0x89C
        m_flBank: [0x4]u8, // 0x8A0
        m_oldSpeed: [0x4]u8, // 0x8A4
        m_flBlockDamage: [0x4]u8, // 0x8A8
        m_height: [0x4]u8, // 0x8AC
        m_maxSpeed: [0x4]u8, // 0x8B0
        m_dir: [0x4]u8, // 0x8B4
        m_iszSoundMove: [0x8]u8, // 0x8B8
        m_iszSoundMovePing: [0x8]u8, // 0x8C0
        m_iszSoundStart: [0x8]u8, // 0x8C8
        m_iszSoundStop: [0x8]u8, // 0x8D0
        m_strPathTarget: [0x8]u8, // 0x8D8
        m_flMoveSoundMinDuration: [0x4]u8, // 0x8E0
        m_flMoveSoundMaxDuration: [0x4]u8, // 0x8E4
        m_flNextMoveSoundTime: [0x4]u8, // 0x8E8
        m_flMoveSoundMinPitch: [0x4]u8, // 0x8EC
        m_flMoveSoundMaxPitch: [0x4]u8, // 0x8F0
        m_eOrientationType: [0x4]u8, // 0x8F4
        m_eVelocityType: [0x18]u8, // 0x8F8
        m_OnStart: [0x18]u8, // 0x910
        m_OnNext: [0x18]u8, // 0x928
        m_OnArrivedAtDestinationNode: [0x18]u8, // 0x940
        m_bManualSpeedChanges: [0x4]u8, // 0x958
        m_flDesiredSpeed: [0x4]u8, // 0x95C
        m_flSpeedChangeTime: [0x4]u8, // 0x960
        m_flAccelSpeed: [0x4]u8, // 0x964
        m_flDecelSpeed: [0x4]u8, // 0x968
        m_bAccelToSpeed: [0x4]u8, // 0x96C
        m_flNextMPSoundTime: [0x8]u8, // 0x970
    };
    pub const CEnvInstructorHint = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_iszName: [0x8]u8, // 0x4A8
        m_iszReplace_Key: [0x8]u8, // 0x4B0
        m_iszHintTargetEntity: [0x8]u8, // 0x4B8
        m_iTimeout: [0x4]u8, // 0x4C0
        m_iDisplayLimit: [0x4]u8, // 0x4C4
        m_iszIcon_Onscreen: [0x8]u8, // 0x4C8
        m_iszIcon_Offscreen: [0x8]u8, // 0x4D0
        m_iszCaption: [0x8]u8, // 0x4D8
        m_iszActivatorCaption: [0x8]u8, // 0x4E0
        m_Color: [0x4]u8, // 0x4E8
        m_fIconOffset: [0x4]u8, // 0x4EC
        m_fRange: [0x4]u8, // 0x4F0
        m_iPulseOption: [0x1]u8, // 0x4F4
        m_iAlphaOption: [0x1]u8, // 0x4F5
        m_iShakeOption: [0x1]u8, // 0x4F6
        m_bStatic: [0x1]u8, // 0x4F7
        m_bNoOffscreen: [0x1]u8, // 0x4F8
        m_bForceCaption: [0x3]u8, // 0x4F9
        m_iInstanceType: [0x4]u8, // 0x4FC
        m_bSuppressRest: [0x8]u8, // 0x500
        m_iszBinding: [0x8]u8, // 0x508
        m_bAllowNoDrawTarget: [0x1]u8, // 0x510
        m_bAutoStart: [0x1]u8, // 0x511
        m_bLocalPlayerOnly: [0x6]u8, // 0x512
    };
    pub const CEnvWind = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_EnvWindShared: [0x130]u8, // 0x4A8
    };
    pub const CSoundEventPathCornerEntity = extern struct {
        pad_0: [0x5A0]u8, // 0x0
        m_iszPathCorner: [0x20]u8, // 0x5A0
        m_vecCornerPairsNetworked: [0x60]u8, // 0x5C0
    };
    pub const CCSPlayerBase_CameraServices = extern struct {
        pad_0: [0x178]u8, // 0x0
        m_iFOV: [0x4]u8, // 0x178
        m_iFOVStart: [0x4]u8, // 0x17C
        m_flFOVTime: [0x4]u8, // 0x180
        m_flFOVRate: [0x4]u8, // 0x184
        m_hZoomOwner: [0x8]u8, // 0x188
        m_hTriggerFogList: [0x18]u8, // 0x190
        m_hLastFogTrigger: [0x8]u8, // 0x1A8
    };
    pub const CPulseCell_ApplyAnimGraphParam__CursorState_t = extern struct {
        hEntity: [0x8]u8, // 0x0
        sParamName: [0x8]u8, // 0x8
        bApplyToExternalGraphs: [0x8]u8, // 0x10
    };
    pub const CPulseCell_Inflow_BaseEntrypoint = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_EntryChunk: [0x8]u8, // 0x48
        m_RegisterMap: [0x30]u8, // 0x50
    };
    pub const CDynamicNavConnectionsVolume = extern struct {
        pad_0: [0x9E0]u8, // 0x0
        m_iszConnectionTarget: [0x8]u8, // 0x9E0
        m_vecConnections: [0x18]u8, // 0x9E8
        m_sTransitionType: [0x8]u8, // 0xA00
        m_bConnectionsEnabled: [0x4]u8, // 0xA08
        m_flTargetAreaSearchRadius: [0x4]u8, // 0xA0C
        m_flUpdateDistance: [0x4]u8, // 0xA10
        m_flMaxConnectionDistance: [0x4]u8, // 0xA14
    };
    pub const CConstraintAnchor = extern struct {
        pad_0: [0xA40]u8, // 0x0
        m_massScale: [0x10]u8, // 0xA40
    };
    pub const CPulseCell_WaitForCursorsWithTagBase = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_nCursorsAllowedToWait: [0x8]u8, // 0xD8
        m_WaitComplete: [0x48]u8, // 0xE0
    };
    pub const CCSPlayerPawn = extern struct {
        pad_0: [0xE30]u8, // 0x0
        m_pBulletServices: [0x8]u8, // 0xE30
        m_pHostageServices: [0x8]u8, // 0xE38
        m_pBuyServices: [0x8]u8, // 0xE40
        m_pActionTrackingServices: [0x8]u8, // 0xE48
        m_pAimPunchServices: [0x8]u8, // 0xE50
        m_pRadioServices: [0x8]u8, // 0xE58
        m_pDamageReactServices: [0x8]u8, // 0xE60
        m_nCharacterDefIndex: [0x2]u8, // 0xE68
        m_bHasFemaleVoice: [0x6]u8, // 0xE6A
        m_strVOPrefix: [0x8]u8, // 0xE70
        m_szLastPlaceName: [0xF8]u8, // 0xE78
        m_bInHostageResetZone: [0x1]u8, // 0xF70
        m_bInBuyZone: [0x7]u8, // 0xF71
        m_TouchingBuyZones: [0x18]u8, // 0xF78
        m_bWasInBuyZone: [0x1]u8, // 0xF90
        m_bInHostageRescueZone: [0x1]u8, // 0xF91
        m_bInBombZone: [0x1]u8, // 0xF92
        m_bWasInHostageRescueZone: [0x1]u8, // 0xF93
        m_iRetakesOffering: [0x4]u8, // 0xF94
        m_iRetakesOfferingCard: [0x4]u8, // 0xF98
        m_bRetakesHasDefuseKit: [0x1]u8, // 0xF9C
        m_bRetakesMVPLastRound: [0x3]u8, // 0xF9D
        m_iRetakesMVPBoostItem: [0x4]u8, // 0xFA0
        m_RetakesMVPBoostExtraUtility: [0x4]u8, // 0xFA4
        m_flHealthShotBoostExpirationTime: [0x4]u8, // 0xFA8
        m_flLandingTimeSeconds: [0x4]u8, // 0xFAC
        m_bIsBuyMenuOpen: [0x38]u8, // 0xFB0
        m_lastLandTime: [0x4]u8, // 0xFE8
        m_bOnGroundLastTick: [0x4]u8, // 0xFEC
        m_iPlayerLocked: [0x8]u8, // 0xFF0
        m_flTimeOfLastInjury: [0x4]u8, // 0xFF8
        m_flNextSprayDecalTime: [0x4]u8, // 0xFFC
        m_bNextSprayDecalTimeExpedited: [0x4]u8, // 0x1000
        m_nRagdollDamageBone: [0x4]u8, // 0x1004
        m_vRagdollDamageForce: [0xC]u8, // 0x1008
        m_szRagdollDamageWeaponName: [0x40]u8, // 0x1014
        m_bRagdollDamageHeadshot: [0x4]u8, // 0x1054
        m_vRagdollServerOrigin: [0x10]u8, // 0x1058
        m_EconGloves: [0x3E8]u8, // 0x1068
        m_nEconGlovesChanged: [0x4]u8, // 0x1450
        m_qDeathEyeAngles: [0xC]u8, // 0x1454
        m_bLeftHanded: [0x4]u8, // 0x1460
        m_fSwitchedHandednessTime: [0x4]u8, // 0x1464
        m_flViewmodelOffsetX: [0x4]u8, // 0x1468
        m_flViewmodelOffsetY: [0x4]u8, // 0x146C
        m_flViewmodelOffsetZ: [0x4]u8, // 0x1470
        m_flViewmodelFOV: [0x4]u8, // 0x1474
        m_bIsWalking: [0x4]u8, // 0x1478
        m_fLastGivenDefuserTime: [0x4]u8, // 0x147C
        m_fLastGivenBombTime: [0x4]u8, // 0x1480
        m_flDealtDamageToEnemyMostRecentTimestamp: [0x4]u8, // 0x1484
        m_iDisplayHistoryBits: [0x4]u8, // 0x1488
        m_flLastAttackedTeammate: [0x4]u8, // 0x148C
        m_allowAutoFollowTime: [0x4]u8, // 0x1490
        m_bResetArmorNextSpawn: [0x4]u8, // 0x1494
        m_nLastKillerIndex: [0x8]u8, // 0x1498
        m_entitySpottedState: [0x18]u8, // 0x14A0
        m_nSpotRules: [0x4]u8, // 0x14B8
        m_bIsScoped: [0x1]u8, // 0x14BC
        m_bResumeZoom: [0x1]u8, // 0x14BD
        m_bIsDefusing: [0x1]u8, // 0x14BE
        m_bIsGrabbingHostage: [0x1]u8, // 0x14BF
        m_iBlockingUseActionInProgress: [0x4]u8, // 0x14C0
        m_flEmitSoundTime: [0x4]u8, // 0x14C4
        m_bInNoDefuseArea: [0x4]u8, // 0x14C8
        m_iBombSiteIndex: [0x4]u8, // 0x14CC
        m_nWhichBombZone: [0x4]u8, // 0x14D0
        m_bInBombZoneTrigger: [0x1]u8, // 0x14D4
        m_bWasInBombZoneTrigger: [0x3]u8, // 0x14D5
        m_iShotsFired: [0x4]u8, // 0x14D8
        m_flFlinchStack: [0x4]u8, // 0x14DC
        m_flVelocityModifier: [0x4]u8, // 0x14E0
        m_vecTotalBulletForce: [0xC]u8, // 0x14E4
        m_bWaitForNoAttack: [0x4]u8, // 0x14F0
        m_ignoreLadderJumpTime: [0x4]u8, // 0x14F4
        m_bKilledByHeadshot: [0x4]u8, // 0x14F8
        m_LastHitBox: [0x4]u8, // 0x14FC
        m_pBot: [0x8]u8, // 0x1500
        m_bBotAllowActive: [0x4]u8, // 0x1508
        m_nLastPickupPriority: [0x4]u8, // 0x150C
        m_flLastPickupPriorityTime: [0x4]u8, // 0x1510
        m_ArmorValue: [0x4]u8, // 0x1514
        m_unCurrentEquipmentValue: [0x2]u8, // 0x1518
        m_unRoundStartEquipmentValue: [0x2]u8, // 0x151A
        m_unFreezetimeEndEquipmentValue: [0x4]u8, // 0x151C
        m_iLastWeaponFireUsercmd: [0x4]u8, // 0x1520
        m_bIsSpawning: [0xC]u8, // 0x1524
        m_iDeathFlags: [0x4]u8, // 0x1530
        m_bHasDeathInfo: [0x4]u8, // 0x1534
        m_flDeathInfoTime: [0x4]u8, // 0x1538
        m_vecDeathInfoOrigin: [0xC]u8, // 0x153C
        m_vecPlayerPatchEconIndices: [0x14]u8, // 0x1548
        m_GunGameImmunityColor: [0x4]u8, // 0x155C
        m_grenadeParameterStashTime: [0x4]u8, // 0x1560
        m_bGrenadeParametersStashed: [0x4]u8, // 0x1564
        m_angStashedShootAngles: [0xC]u8, // 0x1568
        m_vecStashedGrenadeThrowPosition: [0xC]u8, // 0x1574
        m_vecStashedGrenadeThrowPawnCenter: [0xC]u8, // 0x1580
        m_vecStashedVelocity: [0x14]u8, // 0x158C
        m_bCommittingSuicideOnTeamChange: [0x1]u8, // 0x15A0
        m_wasNotKilledNaturally: [0x3]u8, // 0x15A1
        m_fImmuneToGunGameDamageTime: [0x4]u8, // 0x15A4
        m_bGunGameImmunity: [0x4]u8, // 0x15A8
        m_flBigHeadScale: [0x4]u8, // 0x15AC
        m_fMolotovDamageTime: [0x4]u8, // 0x15B0
        m_angEyeAngles: [0x1C]u8, // 0x15B4
    };
    pub const CEnvLightProbeVolume = extern struct {
        pad_0: [0x540]u8, // 0x0
        m_Entity_hLightProbeTexture_AmbientCube: [0x8]u8, // 0x540
        m_Entity_hLightProbeTexture_SDF: [0x8]u8, // 0x548
        m_Entity_hLightProbeTexture_SH2_DC: [0x8]u8, // 0x550
        m_Entity_hLightProbeTexture_SH2_L1: [0x8]u8, // 0x558
        m_Entity_hLightProbeDirectLightIndicesTexture: [0x8]u8, // 0x560
        m_Entity_hLightProbeDirectLightScalarsTexture: [0x8]u8, // 0x568
        m_Entity_hLightProbeDirectLightShadowsTexture: [0x8]u8, // 0x570
        m_Entity_vBoxMins: [0xC]u8, // 0x578
        m_Entity_vBoxMaxs: [0xC]u8, // 0x584
        m_Entity_bMoveable: [0x4]u8, // 0x590
        m_Entity_nHandshake: [0x4]u8, // 0x594
        m_Entity_nPriority: [0x4]u8, // 0x598
        m_Entity_bStartDisabled: [0x4]u8, // 0x59C
        m_Entity_nLightProbeSizeX: [0x4]u8, // 0x5A0
        m_Entity_nLightProbeSizeY: [0x4]u8, // 0x5A4
        m_Entity_nLightProbeSizeZ: [0x4]u8, // 0x5A8
        m_Entity_nLightProbeAtlasX: [0x4]u8, // 0x5AC
        m_Entity_nLightProbeAtlasY: [0x4]u8, // 0x5B0
        m_Entity_nLightProbeAtlasZ: [0xD]u8, // 0x5B4
        m_Entity_bEnabled: [0x7]u8, // 0x5C1
    };
    pub const SpawnPoint = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_iPriority: [0x4]u8, // 0x4A8
        m_bEnabled: [0x4]u8, // 0x4AC
        m_nType: [0x8]u8, // 0x4B0
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
        m_nParentAttachmentOrBone: [0x2]u8, // 0xE4
        m_bDebugAbsOriginChanges: [0x1]u8, // 0xE6
        m_bDormant: [0x1]u8, // 0xE7
        m_bForceParentToBeNetworked: [0x3]u8, // 0xE8
        m_nHierarchicalDepth: [0x1]u8, // 0xEB
        m_nHierarchyType: [0x1]u8, // 0xEC
        m_nDoNotSetAnimTimeInInvalidatePhysicsCount: [0x3]u8, // 0xED
        m_name: [0x14]u8, // 0xF0
        m_hierarchyAttachName: [0x4]u8, // 0x104
        m_flClientLocalScale: [0x8]u8, // 0x108
    };
    pub const CWeaponM249 = extern struct {
        pad_0: [0x12A0]u8, // 0x0
    };
    pub const CRopeKeyframeAlias_move_rope = extern struct {
        pad_0: [0x8A8]u8, // 0x0
    };
    pub const CPlayer_ObserverServices = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_iObserverMode: [0x4]u8, // 0x48
        m_hObserverTarget: [0x4]u8, // 0x4C
        m_iObserverLastMode: [0x4]u8, // 0x50
        m_bForcedObserverMode: [0x4]u8, // 0x54
    };
    pub const CCashStack = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_nCashStackValue: [0x8]u8, // 0x850
    };
    pub const CLogicScript = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CAttributeManager__cached_attribute_float_t = extern struct {
        flIn: [0x8]u8, // 0x0
        iAttribHook: [0x8]u8, // 0x8
        flOut: [0x8]u8, // 0x10
    };
    pub const CPulseGraphInstance_ServerEntity = extern struct {
        pad_0: [0x118]u8, // 0x0
        m_hOwner: [0x4]u8, // 0x118
        m_bActivated: [0x4]u8, // 0x11C
        m_sNameFixupStaticPrefix: [0x8]u8, // 0x120
        m_sNameFixupParent: [0x8]u8, // 0x128
        m_sNameFixupLocal: [0x8]u8, // 0x130
        m_sProceduralWorldNameForRelays: [0x8]u8, // 0x138
    };
    pub const CSceneEntityAlias_logic_choreographed_scene = extern struct {
        pad_0: [0x800]u8, // 0x0
    };
    pub const CRagdollManager = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_iCurrentMaxRagdollCount: [0x4]u8, // 0x4A8
        m_iMaxRagdollCount: [0x4]u8, // 0x4AC
        m_bSaveImportant: [0x1]u8, // 0x4B0
        m_bCanTakeDamage: [0x7]u8, // 0x4B1
    };
    pub const CSoundOpvarSetBoxEntity = extern struct {
        pad_0: [0x640]u8, // 0x0
        m_vDistanceInnerMins: [0xC]u8, // 0x640
        m_vDistanceInnerMaxs: [0xC]u8, // 0x64C
        m_vDistanceOuterMins: [0xC]u8, // 0x658
        m_vDistanceOuterMaxs: [0xC]u8, // 0x664
        m_nBoxDirection: [0x4]u8, // 0x670
        m_vInnerMins: [0xC]u8, // 0x674
        m_vInnerMaxs: [0xC]u8, // 0x680
        m_vOuterMins: [0xC]u8, // 0x68C
        m_vOuterMaxs: [0x10]u8, // 0x698
    };
    pub const CPostProcessingVolume = extern struct {
        pad_0: [0x9D8]u8, // 0x0
        m_hPostSettings: [0x8]u8, // 0x9D8
        m_flFadeDuration: [0x4]u8, // 0x9E0
        m_flMinLogExposure: [0x4]u8, // 0x9E4
        m_flMaxLogExposure: [0x4]u8, // 0x9E8
        m_flMinExposure: [0x4]u8, // 0x9EC
        m_flMaxExposure: [0x4]u8, // 0x9F0
        m_flExposureCompensation: [0x4]u8, // 0x9F4
        m_flExposureFadeSpeedUp: [0x4]u8, // 0x9F8
        m_flExposureFadeSpeedDown: [0x4]u8, // 0x9FC
        m_flTonemapEVSmoothingRange: [0x4]u8, // 0xA00
        m_bMaster: [0x1]u8, // 0xA04
        m_bExposureControl: [0x3]u8, // 0xA05
    };
    pub const CPointProximitySensor = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_bDisabled: [0x4]u8, // 0x4A8
        m_hTargetEntity: [0x4]u8, // 0x4AC
        m_Distance: [0x20]u8, // 0x4B0
    };
    pub const CPulse_InvokeBinding = extern struct {
        m_RegisterMap: [0x30]u8, // 0x0
        m_FuncName: [0x10]u8, // 0x30
        m_nCellIndex: [0x4]u8, // 0x40
        m_nSrcChunk: [0x4]u8, // 0x44
        m_nSrcInstruction: [0x68]u8, // 0x48
    };
    pub const CTriggerLook = extern struct {
        pad_0: [0x9E0]u8, // 0x0
        m_hLookTarget: [0x4]u8, // 0x9E0
        m_flFieldOfView: [0x4]u8, // 0x9E4
        m_flLookTime: [0x4]u8, // 0x9E8
        m_flLookTimeTotal: [0x4]u8, // 0x9EC
        m_flLookTimeLast: [0x4]u8, // 0x9F0
        m_flTimeoutDuration: [0x4]u8, // 0x9F4
        m_bTimeoutFired: [0x1]u8, // 0x9F8
        m_bIsLooking: [0x1]u8, // 0x9F9
        m_b2DFOV: [0x1]u8, // 0x9FA
        m_bUseVelocity: [0x1]u8, // 0x9FB
        m_bTestOcclusion: [0x1]u8, // 0x9FC
        m_bTestAllVisibleOcclusion: [0x3]u8, // 0x9FD
        m_OnTimeout: [0x18]u8, // 0xA00
        m_OnStartLook: [0x18]u8, // 0xA18
        m_OnEndLook: [0x18]u8, // 0xA30
    };
    pub const CPulseCell_Outflow_PlayVCD = extern struct {
        pad_0: [0x138]u8, // 0x0
        m_hChoreoScene: [0x8]u8, // 0x138
        m_OnPaused: [0x48]u8, // 0x140
        m_OnResumed: [0x48]u8, // 0x188
        m_OutRequirements: [0x18]u8, // 0x1D0
    };
    pub const CMultiplayRules = extern struct {
        pad_0: [0xD0]u8, // 0x0
    };
    pub const CMolotovGrenade = extern struct {
        pad_0: [0x12C0]u8, // 0x0
    };
    pub const CPhysTorque = extern struct {
        pad_0: [0x508]u8, // 0x0
        m_axis: [0x10]u8, // 0x508
    };
    pub const CMultiSource = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_rgEntities: [0x80]u8, // 0x4A8
        m_rgTriggered: [0x80]u8, // 0x528
        m_OnTrigger: [0x18]u8, // 0x5A8
        m_iTotal: [0x8]u8, // 0x5C0
        m_globalstate: [0x8]u8, // 0x5C8
    };
    pub const CBaseCSGrenade = extern struct {
        pad_0: [0x1280]u8, // 0x0
        m_bRedraw: [0x1]u8, // 0x1280
        m_bIsHeldByPlayer: [0x1]u8, // 0x1281
        m_bPinPulled: [0x1]u8, // 0x1282
        m_bJumpThrow: [0x1]u8, // 0x1283
        m_bThrowAnimating: [0x4]u8, // 0x1284
        m_fThrowTime: [0x4]u8, // 0x1288
        m_flThrowStrength: [0x4]u8, // 0x128C
        m_fDropTime: [0x4]u8, // 0x1290
        m_fPinPullTime: [0x4]u8, // 0x1294
        m_bJustPulledPin: [0x4]u8, // 0x1298
        m_nNextHoldTick: [0x4]u8, // 0x129C
        m_flNextHoldFrac: [0x4]u8, // 0x12A0
        m_hSwitchToWeaponAfterThrow: [0x1C]u8, // 0x12A4
    };
    pub const CLogicAuto = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_OnMapSpawn: [0x18]u8, // 0x4A8
        m_OnDemoMapSpawn: [0x18]u8, // 0x4C0
        m_OnNewGame: [0x18]u8, // 0x4D8
        m_OnLoadGame: [0x18]u8, // 0x4F0
        m_OnMapTransition: [0x18]u8, // 0x508
        m_OnBackgroundMap: [0x18]u8, // 0x520
        m_OnMultiNewMap: [0x18]u8, // 0x538
        m_OnMultiNewRound: [0x18]u8, // 0x550
        m_OnVREnabled: [0x18]u8, // 0x568
        m_OnVRNotEnabled: [0x18]u8, // 0x580
        m_globalstate: [0x8]u8, // 0x598
    };
    pub const CPhysicsWire = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_nDensity: [0x8]u8, // 0x4A8
    };
    pub const CFuncIllusionary = extern struct {
        pad_0: [0x850]u8, // 0x0
    };
    pub const CInfoDynamicShadowHint = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_bDisabled: [0x4]u8, // 0x4A8
        m_flRange: [0x4]u8, // 0x4AC
        m_nImportance: [0x4]u8, // 0x4B0
        m_nLightChoice: [0x4]u8, // 0x4B4
        m_hLight: [0x8]u8, // 0x4B8
    };
    pub const CMarkupVolume = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_bDisabled: [0x8]u8, // 0x850
    };
    pub const CGenericLogicPlayerProxy = extern struct {
        pad_0: [0x518]u8, // 0x0
    };
    pub const CPathNode = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_vInTangentLocal: [0xC]u8, // 0x4A8
        m_vOutTangentLocal: [0xC]u8, // 0x4B4
        m_strParentPathUniqueID: [0x8]u8, // 0x4C0
        m_strPathNodeParameter: [0x8]u8, // 0x4C8
        m_xWSPrevParent: [0x20]u8, // 0x4D0
        m_hPath: [0x10]u8, // 0x4F0
    };
    pub const CCSGO_TeamSelectCounterTerroristPosition = extern struct {
        pad_0: [0x1468]u8, // 0x0
    };
    pub const CTriggerRemove = extern struct {
        pad_0: [0x9C8]u8, // 0x0
        m_OnRemove: [0x18]u8, // 0x9C8
    };
    pub const CLogicGameEventListener = extern struct {
        pad_0: [0x4B8]u8, // 0x0
        m_OnEventFired: [0x18]u8, // 0x4B8
        m_iszGameEventName: [0x8]u8, // 0x4D0
        m_iszGameEventItem: [0x8]u8, // 0x4D8
        m_bEnabled: [0x1]u8, // 0x4E0
        m_bStartDisabled: [0x7]u8, // 0x4E1
    };
    pub const CServerOnlyModelEntity = extern struct {
        pad_0: [0x850]u8, // 0x0
    };
    pub const CPulseCell_IntervalTimer = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_Completed: [0x48]u8, // 0xD8
        m_OnInterval: [0x48]u8, // 0x120
    };
    pub const CMarkupVolumeTagged_Nav = extern struct {
        pad_0: [0x890]u8, // 0x0
        m_nScopes: [0x8]u8, // 0x890
    };
    pub const CInfoPlayerTerrorist = extern struct {
        pad_0: [0x4B8]u8, // 0x0
    };
    pub const CLogicAutosave = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_bForceNewLevelUnit: [0x4]u8, // 0x4A8
        m_minHitPoints: [0x4]u8, // 0x4AC
        m_minHitPointsToCommit: [0x8]u8, // 0x4B0
    };
    pub const CCSGO_TeamIntroTerroristPosition = extern struct {
        pad_0: [0x1468]u8, // 0x0
    };
    pub const CSingleplayRules = extern struct {
        pad_0: [0xD0]u8, // 0x0
        m_bSinglePlayerGameEnding: [0x8]u8, // 0xD0
    };
    pub const CEnvWindShared = extern struct {
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
        m_location: [0x10]u8, // 0x30
        m_OnGustStart: [0x18]u8, // 0x40
        m_OnGustEnd: [0x18]u8, // 0x58
        m_hEntOwner: [0xC0]u8, // 0x70
    };
    pub const CPointPrefab = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_targetMapName: [0x8]u8, // 0x4A8
        m_forceWorldGroupID: [0x8]u8, // 0x4B0
        m_associatedRelayTargetName: [0x8]u8, // 0x4B8
        m_fixupNames: [0x1]u8, // 0x4C0
        m_bLoadDynamic: [0x3]u8, // 0x4C1
        m_associatedRelayEntity: [0x4]u8, // 0x4C4
        m_ProceduralRelaySources: [0x68]u8, // 0x4C8
    };
    pub const CPulseCell_BaseLerp = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_WakeResume: [0x48]u8, // 0xD8
    };
    pub const CEnvInstructorVRHint = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_iszName: [0x8]u8, // 0x4A8
        m_iszHintTargetEntity: [0x8]u8, // 0x4B0
        m_iTimeout: [0x8]u8, // 0x4B8
        m_iszCaption: [0x8]u8, // 0x4C0
        m_iszStartSound: [0x8]u8, // 0x4C8
        m_iLayoutFileType: [0x8]u8, // 0x4D0
        m_iszCustomLayoutFile: [0x8]u8, // 0x4D8
        m_iAttachType: [0x4]u8, // 0x4E0
        m_flHeightOffset: [0x4]u8, // 0x4E4
    };
    pub const CCSGameRulesProxy = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_pGameRules: [0x8]u8, // 0x4A8
    };
    pub const CPrecipitation = extern struct {
        pad_0: [0x9C8]u8, // 0x0
    };
    pub const CCommentaryViewPosition = extern struct {
        pad_0: [0x8C0]u8, // 0x0
    };
    pub const CEnvGlobal = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_outCounter: [0x20]u8, // 0x4A8
        m_globalstate: [0x8]u8, // 0x4C8
        m_triggermode: [0x4]u8, // 0x4D0
        m_initialstate: [0x4]u8, // 0x4D4
        m_counter: [0x8]u8, // 0x4D8
    };
    pub const CLogicNPCCounterOBB = extern struct {
        pad_0: [0x758]u8, // 0x0
    };
    pub const CPlatTrigger = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_pPlatform: [0x8]u8, // 0x850
    };
    pub const CSceneEntity = extern struct {
        pad_0: [0x4B0]u8, // 0x0
        m_iszSceneFile: [0x8]u8, // 0x4B0
        m_iszTarget1: [0x8]u8, // 0x4B8
        m_iszTarget2: [0x8]u8, // 0x4C0
        m_iszTarget3: [0x8]u8, // 0x4C8
        m_iszTarget4: [0x8]u8, // 0x4D0
        m_iszTarget5: [0x8]u8, // 0x4D8
        m_iszTarget6: [0x8]u8, // 0x4E0
        m_iszTarget7: [0x8]u8, // 0x4E8
        m_iszTarget8: [0x8]u8, // 0x4F0
        m_hTarget1: [0x4]u8, // 0x4F8
        m_hTarget2: [0x4]u8, // 0x4FC
        m_hTarget3: [0x4]u8, // 0x500
        m_hTarget4: [0x4]u8, // 0x504
        m_hTarget5: [0x4]u8, // 0x508
        m_hTarget6: [0x4]u8, // 0x50C
        m_hTarget7: [0x4]u8, // 0x510
        m_hTarget8: [0x4]u8, // 0x514
        m_hLocatorOrigin: [0x8]u8, // 0x518
        m_sTargetAttachment: [0x8]u8, // 0x520
        m_bIsPlayingBack: [0x1]u8, // 0x528
        m_bPaused: [0x1]u8, // 0x529
        m_bMultiplayer: [0x1]u8, // 0x52A
        m_bAutogenerated: [0x1]u8, // 0x52B
        m_flForceClientTime: [0x4]u8, // 0x52C
        m_flCurrentTime: [0x4]u8, // 0x530
        m_flFrameTime: [0x4]u8, // 0x534
        m_bCancelAtNextInterrupt: [0x1]u8, // 0x538
        m_bRemoveOnCompletion: [0x3]u8, // 0x539
        m_fPitch: [0x4]u8, // 0x53C
        m_bAutomated: [0x4]u8, // 0x540
        m_nAutomatedAction: [0x4]u8, // 0x544
        m_flAutomationDelay: [0x4]u8, // 0x548
        m_flAutomationTime: [0x4]u8, // 0x54C
        m_nSpeechPriority: [0x4]u8, // 0x550
        m_bPausedViaInput: [0x1]u8, // 0x554
        m_bPauseAtNextInterrupt: [0x1]u8, // 0x555
        m_bWaitingForActor: [0x1]u8, // 0x556
        m_bWaitingForInterrupt: [0x1]u8, // 0x557
        m_bInterruptedActorsScenes: [0x1]u8, // 0x558
        m_bBreakOnNonIdle: [0x1]u8, // 0x559
        m_bSceneFinished: [0x6]u8, // 0x55A
        m_hActorList: [0x18]u8, // 0x560
        m_hRemoveActorList: [0x48]u8, // 0x578
        m_nSceneStringIndex: [0x8]u8, // 0x5C0
        m_OnStart: [0x18]u8, // 0x5C8
        m_OnCompletion: [0x18]u8, // 0x5E0
        m_OnCanceled: [0x18]u8, // 0x5F8
        m_OnPaused: [0x18]u8, // 0x610
        m_OnResumed: [0x18]u8, // 0x628
        m_OnPulseRequirement: [0x90]u8, // 0x640
        m_TargetNameMap: [0x28]u8, // 0x6D0
        m_AnchorNameMap: [0x28]u8, // 0x6F8
        m_ActorGraphMap: [0x28]u8, // 0x720
        m_ActorClipMap: [0x28]u8, // 0x748
        m_ActorMap: [0x18]u8, // 0x770
        m_hInterruptScene: [0x4]u8, // 0x788
        m_nInterruptCount: [0x4]u8, // 0x78C
        m_responseConcept: [0x8]u8, // 0x790
        m_responseCriteria: [0x8]u8, // 0x798
        m_bSceneMissing: [0x1]u8, // 0x7A0
        m_bInterrupted: [0x1]u8, // 0x7A1
        m_bCompletedEarly: [0x1]u8, // 0x7A2
        m_bInterruptSceneFinished: [0x1]u8, // 0x7A3
        m_bRestoring: [0x4]u8, // 0x7A4
        m_hNotifySceneCompletion: [0x18]u8, // 0x7A8
        m_hListManagers: [0x18]u8, // 0x7C0
        m_iszSoundName: [0x8]u8, // 0x7D8
        m_iszSequenceName: [0x8]u8, // 0x7E0
        m_hActor: [0x4]u8, // 0x7E8
        m_hActivator: [0x4]u8, // 0x7EC
        m_BusyActor: [0x4]u8, // 0x7F0
        m_iPlayerDeathBehavior: [0xC]u8, // 0x7F4
    };
    pub const CChoreoInfoTarget = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CTonemapController2 = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_flAutoExposureMin: [0x4]u8, // 0x4A8
        m_flAutoExposureMax: [0x4]u8, // 0x4AC
        m_flExposureAdaptationSpeedUp: [0x4]u8, // 0x4B0
        m_flExposureAdaptationSpeedDown: [0x4]u8, // 0x4B4
        m_flTonemapEVSmoothingRange: [0x8]u8, // 0x4B8
    };
    pub const CMapSharedEnvironment = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_targetMapName: [0x10]u8, // 0x4A8
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
    pub const CPhysMagnet = extern struct {
        pad_0: [0xA40]u8, // 0x0
        m_OnMagnetAttach: [0x18]u8, // 0xA40
        m_OnMagnetDetach: [0x18]u8, // 0xA58
        m_massScale: [0x4]u8, // 0xA70
        m_forceLimit: [0x4]u8, // 0xA74
        m_torqueLimit: [0x8]u8, // 0xA78
        m_MagnettedEntities: [0x18]u8, // 0xA80
        m_bActive: [0x1]u8, // 0xA98
        m_bHasHitSomething: [0x3]u8, // 0xA99
        m_flTotalMass: [0x4]u8, // 0xA9C
        m_flRadius: [0x4]u8, // 0xAA0
        m_flNextSuckTime: [0x4]u8, // 0xAA4
        m_iMaxObjectsAttached: [0x8]u8, // 0xAA8
    };
    pub const CCSCustomHudLayout = extern struct {
        pad_0: [0x4B8]u8, // 0x0
        m_strLayout: [0x8]u8, // 0x4B8
        m_bObservable: [0x8]u8, // 0x4C0
        m_vecPlayerLayoutStates: [0x68]u8, // 0x4C8
        m_globalLayoutState: [0x198]u8, // 0x530
        m_vecPanelIds: [0x18]u8, // 0x6C8
        m_vecClassNames: [0x18]u8, // 0x6E0
        m_vecDialogVariableNames: [0x120]u8, // 0x6F8
    };
    pub const CEntityInstance = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_iszPrivateVScripts: [0x8]u8, // 0x8
        m_pEntity: [0x18]u8, // 0x10
        m_CScriptComponent: [0x8]u8, // 0x28
    };
    pub const CGameGibManager = extern struct {
        pad_0: [0x4C0]u8, // 0x0
        m_bAllowNewGibs: [0x4]u8, // 0x4C0
        m_iCurrentMaxPieces: [0x4]u8, // 0x4C4
        m_iMaxPieces: [0x4]u8, // 0x4C8
        m_iLastFrame: [0x4]u8, // 0x4CC
    };
    pub const CHandleDummy = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CFuncWallToggle = extern struct {
        pad_0: [0x858]u8, // 0x0
    };
    pub const CCSPlayer_BulletServices = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_totalHitsOnServer: [0x28]u8, // 0x48
    };
    pub const CSkyCamera = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_skyboxData: [0x90]u8, // 0x4A8
        m_skyboxSlotToken: [0x4]u8, // 0x538
        m_bUseAngles: [0x4]u8, // 0x53C
        m_pNext: [0x8]u8, // 0x540
    };
    pub const CCSGO_EndOfMatchLineupEnd = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CPlayer_AutoaimServices = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CItemDefuserAlias_item_defuser = extern struct {
        pad_0: [0xB00]u8, // 0x0
    };
    pub const CPathCornerCrash = extern struct {
        pad_0: [0x4E0]u8, // 0x0
    };
    pub const CPhysPulley = extern struct {
        pad_0: [0x508]u8, // 0x0
        m_position2: [0xC]u8, // 0x508
        m_offset: [0x18]u8, // 0x514
        m_addLength: [0x4]u8, // 0x52C
        m_gearRatio: [0x8]u8, // 0x530
    };
    pub const CCSPetPlacement = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CWeaponMP5SD = extern struct {
        pad_0: [0x12A0]u8, // 0x0
    };
    pub const CWeaponBaseItem = extern struct {
        pad_0: [0x1280]u8, // 0x0
        m_bSequenceInProgress: [0x1]u8, // 0x1280
        m_bRedraw: [0xF]u8, // 0x1281
    };
    pub const CCommentaryAuto = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_OnCommentaryNewGame: [0x18]u8, // 0x4A8
        m_OnCommentaryMidGame: [0x18]u8, // 0x4C0
        m_OnCommentaryMultiplayerSpawn: [0x18]u8, // 0x4D8
    };
    pub const CPulseCell_Outflow_ListenForEntityOutput__CursorState_t = extern struct {
        m_entity: [0x4]u8, // 0x0
    };
    pub const ActiveModelConfig_t = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_Handle: [0x8]u8, // 0x30
        m_Name: [0x8]u8, // 0x38
        m_AssociatedEntities: [0x18]u8, // 0x40
        m_AssociatedEntityNames: [0x18]u8, // 0x58
        m_vecAssociatedEntityCollidesWithHierarchy: [0x10]u8, // 0x70
        m_vecAssociatedEntityCollidesOutsideHierarchy: [0x20]u8, // 0x80
    };
    pub const CWeaponUSPSilencer = extern struct {
        pad_0: [0x12A0]u8, // 0x0
    };
    pub const CSoundStackSave = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_iszStackName: [0x8]u8, // 0x4A8
    };
    pub const CPulseCell_Value_Curve = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_Curve: [0x40]u8, // 0x48
    };
    pub const CWeaponMag7 = extern struct {
        pad_0: [0x12A0]u8, // 0x0
    };
    pub const CLogicMeasureMovement = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_strMeasureTarget: [0x8]u8, // 0x4A8
        m_strMeasureReference: [0x8]u8, // 0x4B0
        m_strTargetReference: [0x8]u8, // 0x4B8
        m_hMeasureTarget: [0x4]u8, // 0x4C0
        m_hMeasureReference: [0x4]u8, // 0x4C4
        m_hTarget: [0x4]u8, // 0x4C8
        m_hTargetReference: [0x4]u8, // 0x4CC
        m_flScale: [0x4]u8, // 0x4D0
        m_nMeasureType: [0x4]u8, // 0x4D4
    };
    pub const CLogicActivityEvent = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_nEventType: [0x4]u8, // 0x4A8
        m_flDuration: [0x4]u8, // 0x4AC
        m_iszSourceEntityName: [0x8]u8, // 0x4B0
        m_hSource: [0x8]u8, // 0x4B8
    };
    pub const CC4 = extern struct {
        pad_0: [0x12B0]u8, // 0x0
        m_vecLastValidPlayerHeldPosition: [0xC]u8, // 0x12B0
        m_vecLastValidDroppedPosition: [0xC]u8, // 0x12BC
        m_bDoValidDroppedPositionCheck: [0x1]u8, // 0x12C8
        m_bStartedArming: [0x3]u8, // 0x12C9
        m_fArmedTime: [0x4]u8, // 0x12CC
        m_bBombPlacedAnimation: [0x1]u8, // 0x12D0
        m_bIsPlantingViaUse: [0x7]u8, // 0x12D1
        m_entitySpottedState: [0x18]u8, // 0x12D8
        m_nSpotRules: [0x4]u8, // 0x12F0
        m_bPlayedArmingBeeps: [0x7]u8, // 0x12F4
        m_bBombPlanted: [0x5]u8, // 0x12FB
    };
    pub const CHostageCarriableProp = extern struct {
        pad_0: [0xA40]u8, // 0x0
    };
    pub const CDynamicPropAlias_cable_dynamic = extern struct {
        pad_0: [0xC90]u8, // 0x0
    };
    pub const CCSObserver_CameraServices = extern struct {
        pad_0: [0x1B0]u8, // 0x0
    };
    pub const CEnvDetailController = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_flFadeStartDist: [0x4]u8, // 0x4A8
        m_flFadeEndDist: [0x4]u8, // 0x4AC
    };
    pub const CCSPlayerPawnBase = extern struct {
        pad_0: [0xCE0]u8, // 0x0
        m_CTouchExpansionComponent: [0x50]u8, // 0xCE0
        m_pPingServices: [0x8]u8, // 0xD30
        m_blindUntilTime: [0x4]u8, // 0xD38
        m_blindStartTime: [0x4]u8, // 0xD3C
        m_iPlayerState: [0xB0]u8, // 0xD40
        m_bRespawning: [0x1]u8, // 0xDF0
        m_bHasMovedSinceSpawn: [0x3]u8, // 0xDF1
        m_iNumSpawns: [0x8]u8, // 0xDF4
        m_flIdleTimeSinceLastAction: [0x4]u8, // 0xDFC
        m_fNextRadarUpdateTime: [0x4]u8, // 0xE00
        m_flFlashDuration: [0x4]u8, // 0xE04
        m_flFlashMaxAlpha: [0x4]u8, // 0xE08
        m_flProgressBarStartTime: [0x4]u8, // 0xE0C
        m_iProgressBarDuration: [0x4]u8, // 0xE10
        m_hOriginalController: [0xC]u8, // 0xE14
    };
    pub const CEnvSoundscapeProxy = extern struct {
        pad_0: [0x538]u8, // 0x0
        m_MainSoundscapeName: [0x8]u8, // 0x538
    };
    pub const CPulseCell_Inflow_EventHandler = extern struct {
        pad_0: [0x80]u8, // 0x0
        m_EventName: [0x10]u8, // 0x80
    };
    pub const CCSPointScriptEntity = extern struct {
        pad_0: [0x668]u8, // 0x0
    };
    pub const CPulseCell_BaseFlow = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CBombTarget = extern struct {
        pad_0: [0x9C8]u8, // 0x0
        m_OnBombExplode: [0x18]u8, // 0x9C8
        m_OnBombPlanted: [0x18]u8, // 0x9E0
        m_OnBombDefused: [0x18]u8, // 0x9F8
        m_bIsBombSiteB: [0x1]u8, // 0xA10
        m_bIsHeistBombTarget: [0x1]u8, // 0xA11
        m_bBombPlantedHere: [0x6]u8, // 0xA12
        m_szMountTarget: [0x8]u8, // 0xA18
        m_hInstructorHint: [0x4]u8, // 0xA20
        m_nBombSiteDesignation: [0x4]u8, // 0xA24
    };
    pub const CRuleEntity = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_iszMaster: [0x8]u8, // 0x850
    };
    pub const CPhysThruster = extern struct {
        pad_0: [0x508]u8, // 0x0
        m_localOrigin: [0x10]u8, // 0x508
    };
    pub const CInfoPlayerStart = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_bDisabled: [0x1]u8, // 0x4A8
        m_bIsMaster: [0x7]u8, // 0x4A9
        m_pPawnSubclass: [0x8]u8, // 0x4B0
    };
    pub const CEntityFlame = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_hEntAttached: [0x4]u8, // 0x4A8
        m_bCheapEffect: [0x4]u8, // 0x4AC
        m_flSize: [0x4]u8, // 0x4B0
        m_bUseHitboxes: [0x4]u8, // 0x4B4
        m_iNumHitboxFires: [0x4]u8, // 0x4B8
        m_flHitboxFireScale: [0x4]u8, // 0x4BC
        m_flLifetime: [0x4]u8, // 0x4C0
        m_hAttacker: [0x4]u8, // 0x4C4
        m_flDirectDamagePerSecond: [0x4]u8, // 0x4C8
        m_iCustomDamageType: [0x1C]u8, // 0x4CC
    };
    pub const CSkeletonInstance = extern struct {
        pad_0: [0x120]u8, // 0x0
        m_modelState: [0x290]u8, // 0x120
        m_bUseParentRenderBounds: [0x1]u8, // 0x3B0
        m_bDisableSolidCollisionsForHierarchy: [0x1]u8, // 0x3B1
        m_bDirtyMotionType: [0x1]u8, // 0x3B2
        m_bIsGeneratingLatchedParentSpaceState: [0x5]u8, // 0x3B3
        m_materialGroup: [0x4]u8, // 0x3B8
        m_nHitboxSet: [0x60]u8, // 0x3BC
        m_bForceServerConstraintsEnabled: [0x44]u8, // 0x41C
    };
    pub const CEntityComponent = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const CBasePlatTrain = extern struct {
        pad_0: [0x8D0]u8, // 0x0
        m_NoiseMoving: [0x8]u8, // 0x8D0
        m_NoiseArrived: [0x10]u8, // 0x8D8
        m_volume: [0x4]u8, // 0x8E8
        m_flTWidth: [0x4]u8, // 0x8EC
        m_flTLength: [0x8]u8, // 0x8F0
    };
    pub const CPointTeleport = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_vSaveOrigin: [0xC]u8, // 0x4A8
        m_vSaveAngles: [0xC]u8, // 0x4B4
        m_bTeleportParentedEntities: [0x1]u8, // 0x4C0
        m_bTeleportUseCurrentAngle: [0x7]u8, // 0x4C1
    };
    pub const CTriggerGameEvent = extern struct {
        pad_0: [0x9C8]u8, // 0x0
        m_strStartTouchEventName: [0x8]u8, // 0x9C8
        m_strEndTouchEventName: [0x8]u8, // 0x9D0
        m_strTriggerID: [0x8]u8, // 0x9D8
    };
    pub const CMessageEntity = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_radius: [0x8]u8, // 0x4A8
        m_messageText: [0x8]u8, // 0x4B0
        m_drawText: [0x1]u8, // 0x4B8
        m_bDeveloperOnly: [0x1]u8, // 0x4B9
        m_bEnabled: [0x6]u8, // 0x4BA
    };
    pub const CEnvEntityIgniter = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_flLifetime: [0x8]u8, // 0x4A8
    };
    pub const CPulseCell_Outflow_CycleShuffled__InstanceState_t = extern struct {
        m_Shuffle: [0x20]u8, // 0x0
        m_nNextShuffle: [0x8]u8, // 0x20
    };
    pub const CPulseCell_BaseLerp__CursorState_t = extern struct {
        m_StartTime: [0x4]u8, // 0x0
        m_EndTime: [0x4]u8, // 0x4
    };
    pub const CMarkupVolumeTagged_NavGame = extern struct {
        pad_0: [0x8B8]u8, // 0x0
        m_nScopes: [0x1]u8, // 0x8B8
        m_bFloodFillAttribute: [0x1]u8, // 0x8B9
        m_bSplitNavSpace: [0x6]u8, // 0x8BA
    };
    pub const CMultiLightProxy = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_iszLightNameFilter: [0x8]u8, // 0x4A8
        m_iszLightClassFilter: [0x8]u8, // 0x4B0
        m_flLightRadiusFilter: [0x4]u8, // 0x4B8
        m_flBrightnessDelta: [0x4]u8, // 0x4BC
        m_bPerformScreenFade: [0x4]u8, // 0x4C0
        m_flTargetBrightnessMultiplier: [0x4]u8, // 0x4C4
        m_flCurrentBrightnessMultiplier: [0x8]u8, // 0x4C8
        m_vecLights: [0x18]u8, // 0x4D0
    };
    pub const CWeaponM4A1 = extern struct {
        pad_0: [0x12A0]u8, // 0x0
    };
    pub const CTriggerHostageReset = extern struct {
        pad_0: [0x9C8]u8, // 0x0
    };
    pub const CEconWearable = extern struct {
        pad_0: [0xEB0]u8, // 0x0
        m_nForceSkin: [0x4]u8, // 0xEB0
        m_bAlwaysAllow: [0xC]u8, // 0xEB4
    };
    pub const CWeaponMAC10 = extern struct {
        pad_0: [0x12A0]u8, // 0x0
    };
    pub const CFuncLadder = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_vecLadderDir: [0x10]u8, // 0x850
        m_Dismounts: [0x18]u8, // 0x860
        m_vecLocalTop: [0xC]u8, // 0x878
        m_vecPlayerMountPositionTop: [0xC]u8, // 0x884
        m_vecPlayerMountPositionBottom: [0xC]u8, // 0x890
        m_flAutoRideSpeed: [0x4]u8, // 0x89C
        m_bDisabled: [0x1]u8, // 0x8A0
        m_bFakeLadder: [0x1]u8, // 0x8A1
        m_bHasSlack: [0x6]u8, // 0x8A2
        m_surfacePropName: [0x8]u8, // 0x8A8
        m_OnPlayerGotOnLadder: [0x18]u8, // 0x8B0
        m_OnPlayerGotOffLadder: [0x18]u8, // 0x8C8
    };
    pub const CFogController = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_fog: [0x68]u8, // 0x4A8
        m_bUseAngles: [0x4]u8, // 0x510
        m_iChangedVariables: [0x4]u8, // 0x514
    };
    pub const CItem = extern struct {
        pad_0: [0xA48]u8, // 0x0
        m_OnPlayerTouch: [0x18]u8, // 0xA48
        m_OnPlayerPickup: [0x18]u8, // 0xA60
        m_bActivateWhenAtRest: [0x8]u8, // 0xA78
        m_OnCacheInteraction: [0x18]u8, // 0xA80
        m_OnGlovePulled: [0x18]u8, // 0xA98
        m_vOriginalSpawnOrigin: [0xC]u8, // 0xAB0
        m_vOriginalSpawnAngles: [0xC]u8, // 0xABC
        m_bPhysStartAsleep: [0x18]u8, // 0xAC8
    };
    pub const CTriggerPush = extern struct {
        pad_0: [0x9C8]u8, // 0x0
        m_angPushEntitySpace: [0xC]u8, // 0x9C8
        m_vecPushDirEntitySpace: [0xC]u8, // 0x9D4
        m_bTriggerOnStartTouch: [0x1]u8, // 0x9E0
        m_bUsePathSimple: [0x7]u8, // 0x9E1
        m_iszPathSimpleName: [0x8]u8, // 0x9E8
        m_PathSimple: [0x4]u8, // 0x9F0
        m_splinePushType: [0x4]u8, // 0x9F4
        m_flSpeed: [0x8]u8, // 0x9F8
    };
    pub const CBaseProp = extern struct {
        pad_0: [0xA40]u8, // 0x0
        m_bModelOverrodeBlockLOS: [0x4]u8, // 0xA40
        m_iShapeType: [0x4]u8, // 0xA44
        m_bConformToCollisionBounds: [0x8]u8, // 0xA48
        m_mPreferredCatchTransform: [0x20]u8, // 0xA50
    };
    pub const CInfoOffscreenPanoramaTexture = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_bDisabled: [0x1]u8, // 0x4A8
        m_bEnableMipGen: [0x3]u8, // 0x4A9
        m_nResolutionX: [0x4]u8, // 0x4AC
        m_nResolutionY: [0x8]u8, // 0x4B0
        m_szPanelType: [0x8]u8, // 0x4B8
        m_szLayoutFileName: [0x8]u8, // 0x4C0
        m_RenderAttrName: [0x8]u8, // 0x4C8
        m_TargetEntities: [0x18]u8, // 0x4D0
        m_nTargetChangeCount: [0x8]u8, // 0x4E8
        m_vecCSSClasses: [0x18]u8, // 0x4F0
        m_szTargetsName: [0x8]u8, // 0x508
        m_AdditionalTargetEntities: [0x18]u8, // 0x510
    };
    pub const CPointAngularVelocitySensor = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_hTargetEntity: [0x4]u8, // 0x4A8
        m_flThreshold: [0x4]u8, // 0x4AC
        m_nLastCompareResult: [0x4]u8, // 0x4B0
        m_nLastFireResult: [0x4]u8, // 0x4B4
        m_flFireTime: [0x4]u8, // 0x4B8
        m_flFireInterval: [0x4]u8, // 0x4BC
        m_flLastAngVelocity: [0x4]u8, // 0x4C0
        m_lastOrientation: [0xC]u8, // 0x4C4
        m_vecAxis: [0xC]u8, // 0x4D0
        m_bUseHelper: [0x4]u8, // 0x4DC
        m_AngularVelocity: [0x20]u8, // 0x4E0
        m_OnLessThan: [0x18]u8, // 0x500
        m_OnLessThanOrEqualTo: [0x18]u8, // 0x518
        m_OnGreaterThan: [0x18]u8, // 0x530
        m_OnGreaterThanOrEqualTo: [0x18]u8, // 0x548
        m_OnEqualTo: [0x18]u8, // 0x560
    };
    pub const CPlayerVisibility = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_flVisibilityStrength: [0x4]u8, // 0x4A8
        m_flFogDistanceMultiplier: [0x4]u8, // 0x4AC
        m_flFogMaxDensityMultiplier: [0x4]u8, // 0x4B0
        m_flFadeTime: [0x4]u8, // 0x4B4
        m_bStartDisabled: [0x1]u8, // 0x4B8
        m_bIsEnabled: [0x7]u8, // 0x4B9
    };
    pub const CPulseCell_Step_FollowEntity = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_ParamBoneOrAttachName: [0x8]u8, // 0x48
        m_ParamBoneOrAttachNameChild: [0x8]u8, // 0x50
    };
    pub const CFlashbang = extern struct {
        pad_0: [0x12C0]u8, // 0x0
    };
    pub const CBasePlayerWeapon = extern struct {
        pad_0: [0xEB0]u8, // 0x0
        m_nNextPrimaryAttackTick: [0x4]u8, // 0xEB0
        m_flNextPrimaryAttackTickRatio: [0x4]u8, // 0xEB4
        m_nNextSecondaryAttackTick: [0x4]u8, // 0xEB8
        m_flNextSecondaryAttackTickRatio: [0x4]u8, // 0xEBC
        m_iClip1: [0x4]u8, // 0xEC0
        m_iClip2: [0x4]u8, // 0xEC4
        m_pReserveAmmo: [0x8]u8, // 0xEC8
        m_OnPlayerUse: [0x20]u8, // 0xED0
    };
    pub const CPhysForce = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_pController: [0x8]u8, // 0x4A8
        m_nameAttach: [0x8]u8, // 0x4B0
        m_force: [0x4]u8, // 0x4B8
        m_forceTime: [0x4]u8, // 0x4BC
        m_attachedObject: [0x4]u8, // 0x4C0
        m_wasRestored: [0x4]u8, // 0x4C4
        m_integrator: [0x40]u8, // 0x4C8
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
        pad_0: [0x4A8]u8, // 0x0
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
        m_flOldPlayerViewOffsetZ: [0x1C]u8, // 0x144
        m_hTriggerSoundscapeList: [0x18]u8, // 0x160
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
    pub const CFilterAttributeInt = extern struct {
        pad_0: [0x4E0]u8, // 0x0
        m_sAttributeName: [0x8]u8, // 0x4E0
    };
    pub const CKeepUpright = extern struct {
        pad_0: [0x4B0]u8, // 0x0
        m_worldGoalAxis: [0xC]u8, // 0x4B0
        m_localTestAxis: [0xC]u8, // 0x4BC
        m_pController: [0x8]u8, // 0x4C8
        m_nameAttach: [0x8]u8, // 0x4D0
        m_attachedObject: [0x4]u8, // 0x4D8
        m_angularLimit: [0x4]u8, // 0x4DC
        m_bActive: [0x1]u8, // 0x4E0
        m_bDampAllRotation: [0x7]u8, // 0x4E1
    };
    pub const CPointTemplate = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_iszWorldName: [0x8]u8, // 0x4A8
        m_iszSource2EntityLumpName: [0x8]u8, // 0x4B0
        m_iszEntityFilterName: [0x8]u8, // 0x4B8
        m_flTimeoutInterval: [0x4]u8, // 0x4C0
        m_bAsynchronouslySpawnEntities: [0x4]u8, // 0x4C4
        m_clientOnlyEntityBehavior: [0x4]u8, // 0x4C8
        m_ownerSpawnGroupType: [0x4]u8, // 0x4CC
        m_createdSpawnGroupHandles: [0x18]u8, // 0x4D0
        m_SpawnedEntityHandles: [0x18]u8, // 0x4E8
        m_ScriptSpawnCallback: [0x8]u8, // 0x500
        m_ScriptCallbackScope: [0x8]u8, // 0x508
        m_OnEntitySpawned: [0x30]u8, // 0x510
    };
    pub const CEnvVolumetricFogController = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_flScattering: [0x4]u8, // 0x4A8
        m_TintColor: [0x4]u8, // 0x4AC
        m_flAnisotropy: [0x4]u8, // 0x4B0
        m_flFadeSpeed: [0x4]u8, // 0x4B4
        m_flDrawDistance: [0x4]u8, // 0x4B8
        m_flFadeInStart: [0x4]u8, // 0x4BC
        m_flFadeInEnd: [0x4]u8, // 0x4C0
        m_flIndirectStrength: [0x4]u8, // 0x4C4
        m_nVolumeDepth: [0x4]u8, // 0x4C8
        m_fFirstVolumeSliceThickness: [0x4]u8, // 0x4CC
        m_nIndirectTextureDimX: [0x4]u8, // 0x4D0
        m_nIndirectTextureDimY: [0x4]u8, // 0x4D4
        m_nIndirectTextureDimZ: [0x4]u8, // 0x4D8
        m_vBoxMins: [0xC]u8, // 0x4DC
        m_vBoxMaxs: [0xC]u8, // 0x4E8
        m_bActive: [0x4]u8, // 0x4F4
        m_flStartAnisoTime: [0x4]u8, // 0x4F8
        m_flStartScatterTime: [0x4]u8, // 0x4FC
        m_flStartDrawDistanceTime: [0x4]u8, // 0x500
        m_flStartAnisotropy: [0x4]u8, // 0x504
        m_flStartScattering: [0x4]u8, // 0x508
        m_flStartDrawDistance: [0x4]u8, // 0x50C
        m_flDefaultAnisotropy: [0x4]u8, // 0x510
        m_flDefaultScattering: [0x4]u8, // 0x514
        m_flDefaultDrawDistance: [0x4]u8, // 0x518
        m_bStartDisabled: [0x1]u8, // 0x51C
        m_bEnableIndirect: [0x1]u8, // 0x51D
        m_bIsMaster: [0x2]u8, // 0x51E
        m_hFogIndirectTexture: [0x8]u8, // 0x520
        m_nForceRefreshCount: [0x4]u8, // 0x528
        m_fNoiseSpeed: [0x4]u8, // 0x52C
        m_fNoiseStrength: [0x4]u8, // 0x530
        m_vNoiseScale: [0xC]u8, // 0x534
        m_fWindSpeed: [0x4]u8, // 0x540
        m_vWindDirection: [0xC]u8, // 0x544
        m_bFirstTime: [0x8]u8, // 0x550
    };
    pub const CBot = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_pController: [0x8]u8, // 0x10
        m_pPlayer: [0x8]u8, // 0x18
        m_bHasSpawned: [0x4]u8, // 0x20
        m_id: [0x9C]u8, // 0x24
        m_isRunning: [0x1]u8, // 0xC0
        m_isCrouching: [0x3]u8, // 0xC1
        m_forwardSpeed: [0x4]u8, // 0xC4
        m_leftSpeed: [0x4]u8, // 0xC8
        m_verticalSpeed: [0x4]u8, // 0xCC
        m_buttonFlags: [0x8]u8, // 0xD0
        m_jumpTimestamp: [0x4]u8, // 0xD8
        m_viewForward: [0x1C]u8, // 0xDC
        m_postureStackIndex: [0x8]u8, // 0xF8
    };
    pub const CPulseCell_Step_SetAnimGraphParam = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_ParamName: [0x8]u8, // 0x48
    };
    pub const CPlayer_FlashlightServices = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CCSPlayerController = extern struct {
        pad_0: [0x7E8]u8, // 0x0
        m_pInGameMoneyServices: [0x8]u8, // 0x7E8
        m_pInventoryServices: [0x8]u8, // 0x7F0
        m_pActionTrackingServices: [0x8]u8, // 0x7F8
        m_pDamageServices: [0x8]u8, // 0x800
        m_iPing: [0x4]u8, // 0x808
        m_bHasCommunicationAbuseMute: [0x4]u8, // 0x80C
        m_uiCommunicationMuteFlags: [0x8]u8, // 0x810
        m_szCrosshairCodes: [0x8]u8, // 0x818
        m_iPendingTeamNum: [0x4]u8, // 0x820
        m_flForceTeamTime: [0x4]u8, // 0x824
        m_iCompTeammateColor: [0x4]u8, // 0x828
        m_bEverPlayedOnTeam: [0x1]u8, // 0x82C
        m_bAttemptedToGetColor: [0x3]u8, // 0x82D
        m_iTeammatePreferredColor: [0x4]u8, // 0x830
        m_bTeamChanged: [0x1]u8, // 0x834
        m_bInSwitchTeam: [0x1]u8, // 0x835
        m_bHasSeenJoinGame: [0x1]u8, // 0x836
        m_bJustBecameSpectator: [0x1]u8, // 0x837
        m_bSwitchTeamsOnNextRoundReset: [0x1]u8, // 0x838
        m_bRemoveAllItemsOnNextRoundReset: [0x3]u8, // 0x839
        m_flLastJoinTeamTime: [0x4]u8, // 0x83C
        m_szClan: [0x8]u8, // 0x840
        m_unClanId32bit: [0x4]u8, // 0x848
        m_iCoachingTeam: [0x4]u8, // 0x84C
        m_nPlayerDominated: [0x8]u8, // 0x850
        m_nPlayerDominatingMe: [0x8]u8, // 0x858
        m_iCompetitiveRanking: [0x4]u8, // 0x860
        m_iCompetitiveWins: [0x4]u8, // 0x864
        m_iCompetitiveRankType: [0x4]u8, // 0x868
        m_iCompetitiveRankingPredicted_Win: [0x4]u8, // 0x86C
        m_iCompetitiveRankingPredicted_Loss: [0x4]u8, // 0x870
        m_iCompetitiveRankingPredicted_Tie: [0x4]u8, // 0x874
        m_nEndMatchNextMapVote: [0x4]u8, // 0x878
        m_unActiveQuestId: [0x4]u8, // 0x87C
        m_rtActiveMissionPeriod: [0x4]u8, // 0x880
        m_nQuestProgressReason: [0x4]u8, // 0x884
        m_unPlayerTvControlFlags: [0x30]u8, // 0x888
        m_iDraftIndex: [0x4]u8, // 0x8B8
        m_msQueuedModeDisconnectionTimestamp: [0x4]u8, // 0x8BC
        m_uiAbandonRecordedReason: [0x4]u8, // 0x8C0
        m_eNetworkDisconnectionReason: [0x4]u8, // 0x8C4
        m_bCannotBeKicked: [0x1]u8, // 0x8C8
        m_bEverFullyConnected: [0x1]u8, // 0x8C9
        m_bAbandonAllowsSurrender: [0x1]u8, // 0x8CA
        m_bAbandonOffersInstantSurrender: [0x1]u8, // 0x8CB
        m_bDisconnection1MinWarningPrinted: [0x1]u8, // 0x8CC
        m_bScoreReported: [0x3]u8, // 0x8CD
        m_nDisconnectionTick: [0x10]u8, // 0x8D0
        m_bControllingBot: [0x1]u8, // 0x8E0
        m_bHasControlledBotThisRound: [0x1]u8, // 0x8E1
        m_bHasBeenControlledByPlayerThisRound: [0x2]u8, // 0x8E2
        m_nBotsControlledThisRound: [0x4]u8, // 0x8E4
        m_bCanControlObservedBot: [0x4]u8, // 0x8E8
        m_hPlayerPawn: [0x4]u8, // 0x8EC
        m_hObserverPawn: [0x4]u8, // 0x8F0
        m_DesiredObserverMode: [0x4]u8, // 0x8F4
        m_hDesiredObserverTarget: [0x4]u8, // 0x8F8
        m_bPawnIsAlive: [0x4]u8, // 0x8FC
        m_iPawnHealth: [0x4]u8, // 0x900
        m_iPawnArmor: [0x4]u8, // 0x904
        m_bPawnHasDefuser: [0x1]u8, // 0x908
        m_bPawnHasHelmet: [0x1]u8, // 0x909
        m_nPawnCharacterDefIndex: [0x2]u8, // 0x90A
        m_iPawnLifetimeStart: [0x4]u8, // 0x90C
        m_iPawnLifetimeEnd: [0x4]u8, // 0x910
        m_iPawnBotDifficulty: [0x4]u8, // 0x914
        m_hOriginalControllerOfCurrentPawn: [0x4]u8, // 0x918
        m_iScore: [0x4]u8, // 0x91C
        m_iRoundScore: [0x4]u8, // 0x920
        m_iRoundsWon: [0x4]u8, // 0x924
        m_recentKillQueue: [0x8]u8, // 0x928
        m_nFirstKill: [0x1]u8, // 0x930
        m_nKillCount: [0x1]u8, // 0x931
        m_bMvpNoMusic: [0x2]u8, // 0x932
        m_eMvpReason: [0x4]u8, // 0x934
        m_iMusicKitID: [0x4]u8, // 0x938
        m_iMusicKitMVPs: [0x4]u8, // 0x93C
        m_iMVPs: [0x4]u8, // 0x940
        m_nUpdateCounter: [0x4]u8, // 0x944
        m_flSmoothedPing: [0x8]u8, // 0x948
        m_lastHeldVoteTimer: [0x18]u8, // 0x950
        m_bShowHints: [0x4]u8, // 0x968
        m_iNextTimeCheck: [0x4]u8, // 0x96C
        m_bJustDidTeamKill: [0x1]u8, // 0x970
        m_bPunishForTeamKill: [0x1]u8, // 0x971
        m_bGaveTeamDamageWarning: [0x1]u8, // 0x972
        m_bGaveTeamDamageWarningThisRound: [0x5]u8, // 0x973
        m_dblLastReceivedPacketPlatFloatTime: [0x8]u8, // 0x978
        m_LastTeamDamageWarningTime: [0x4]u8, // 0x980
        m_LastTimePlayerWasDisconnectedForPawnsRemove: [0x4]u8, // 0x984
        m_nSuspiciousHitCount: [0x4]u8, // 0x988
        m_nNonSuspiciousHitStreak: [0xAD]u8, // 0x98C
        m_bFireBulletsSeedSynchronized: [0x7F]u8, // 0xA39
    };
    pub const CPhysLength = extern struct {
        pad_0: [0x508]u8, // 0x0
        m_offset: [0x18]u8, // 0x508
        m_vecAttach: [0xC]u8, // 0x520
        m_addLength: [0x4]u8, // 0x52C
        m_minLength: [0x4]u8, // 0x530
        m_totalLength: [0x4]u8, // 0x534
    };
    pub const CTeam = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_aPlayerControllers: [0x18]u8, // 0x4A8
        m_aPlayers: [0x18]u8, // 0x4C0
        m_iScore: [0x4]u8, // 0x4D8
        m_szTeamname: [0x84]u8, // 0x4DC
    };
    pub const CLogicNPCCounterAABB = extern struct {
        pad_0: [0x728]u8, // 0x0
        m_vDistanceOuterMins: [0xC]u8, // 0x728
        m_vDistanceOuterMaxs: [0xC]u8, // 0x734
        m_vOuterMins: [0xC]u8, // 0x740
        m_vOuterMaxs: [0xC]u8, // 0x74C
    };
    pub const CPulseCell_Outflow_CycleOrdered__InstanceState_t = extern struct {
        m_nNextIndex: [0x4]u8, // 0x0
    };
    pub const CChicken = extern struct {
        pad_0: [0xCB0]u8, // 0x0
        m_AttributeManager: [0x438]u8, // 0xCB0
        m_updateTimer: [0x18]u8, // 0x10E8
        m_stuckAnchor: [0x10]u8, // 0x1100
        m_collisionStuckTimer: [0x18]u8, // 0x1110
        m_isOnGround: [0x4]u8, // 0x1128
        m_vFallVelocity: [0xC]u8, // 0x112C
        m_desiredActivity: [0x4]u8, // 0x1138
        m_currentActivity: [0x4]u8, // 0x113C
        m_activityTimer: [0x18]u8, // 0x1140
        m_turnRate: [0x4]u8, // 0x1158
        m_fleeFrom: [0x4]u8, // 0x115C
        m_moveRateThrottleTimer: [0x18]u8, // 0x1160
        m_startleTimer: [0x18]u8, // 0x1178
        m_vocalizeTimer: [0x18]u8, // 0x1190
        m_leader: [0x4]u8, // 0x11A8
        m_owner: [0x14]u8, // 0x11AC
        m_reuseTimer: [0x18]u8, // 0x11C0
        m_jumpTimer: [0x18]u8, // 0x11D8
        m_flLastJumpTime: [0x2010]u8, // 0x11F0
        m_repathTimer: [0x98]u8, // 0x3200
        m_vecPathGoal: [0xC]u8, // 0x3298
        m_flActiveFollowStartTime: [0x4]u8, // 0x32A4
        m_followMinuteTimer: [0x20]u8, // 0x32A8
        m_BlockDirectionTimer: [0x1A]u8, // 0x32C8
        m_bSpawnDyingParticles: [0xE]u8, // 0x32E2
    };
    pub const CPhysicsPropRespawnable = extern struct {
        pad_0: [0xD10]u8, // 0x0
        m_vOriginalSpawnOrigin: [0xC]u8, // 0xD10
        m_vOriginalSpawnAngles: [0xC]u8, // 0xD1C
        m_vOriginalMins: [0xC]u8, // 0xD28
        m_vOriginalMaxs: [0xC]u8, // 0xD34
        m_flRespawnDuration: [0x10]u8, // 0xD40
    };
    pub const CEnvBeam = extern struct {
        pad_0: [0x8F0]u8, // 0x0
        m_active: [0x8]u8, // 0x8F0
        m_spriteTexture: [0x8]u8, // 0x8F8
        m_iszStartEntity: [0x8]u8, // 0x900
        m_iszEndEntity: [0x8]u8, // 0x908
        m_life: [0x4]u8, // 0x910
        m_boltWidth: [0x4]u8, // 0x914
        m_noiseAmplitude: [0x4]u8, // 0x918
        m_speed: [0x4]u8, // 0x91C
        m_restrike: [0x8]u8, // 0x920
        m_iszSpriteName: [0x8]u8, // 0x928
        m_frameStart: [0x4]u8, // 0x930
        m_vEndPointWorld: [0xC]u8, // 0x934
        m_vEndPointRelative: [0xC]u8, // 0x940
        m_radius: [0x4]u8, // 0x94C
        m_TouchType: [0x8]u8, // 0x950
        m_iFilterName: [0x8]u8, // 0x958
        m_hFilter: [0x8]u8, // 0x960
        m_iszDecal: [0x8]u8, // 0x968
        m_OnTouchedByEntity: [0x18]u8, // 0x970
    };
    pub const CLightSpotEntity = extern struct {
        pad_0: [0x858]u8, // 0x0
    };
    pub const CCSObservableElement = extern struct {
        pad_0: [0x4C0]u8, // 0x0
        m_iszObservableModelEntity: [0x8]u8, // 0x4C0
        m_hObservableModelEntity: [0x4]u8, // 0x4C8
        m_hObservableModelEntity2: [0x4]u8, // 0x4CC
        m_nTeamFilter: [0x8]u8, // 0x4D0
    };
    pub const CWeaponSawedoff = extern struct {
        pad_0: [0x1280]u8, // 0x0
    };
    pub const CTonemapTrigger = extern struct {
        pad_0: [0x9C8]u8, // 0x0
        m_tonemapControllerName: [0x8]u8, // 0x9C8
        m_hTonemapController: [0x8]u8, // 0x9D0
    };
    pub const CEnvShake = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_limitToEntity: [0x8]u8, // 0x4A8
        m_Amplitude: [0x4]u8, // 0x4B0
        m_Frequency: [0x4]u8, // 0x4B4
        m_Duration: [0x4]u8, // 0x4B8
        m_Radius: [0x4]u8, // 0x4BC
        m_stopTime: [0x4]u8, // 0x4C0
        m_nextShake: [0x4]u8, // 0x4C4
        m_currentAmp: [0x4]u8, // 0x4C8
        m_maxForce: [0xC]u8, // 0x4CC
        m_pShakeController: [0x8]u8, // 0x4D8
        m_shakeCallback: [0x18]u8, // 0x4E0
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
        m_bMadeFootstepNoise: [0x4]u8, // 0x684
        m_iFootsteps: [0x4]u8, // 0x688
        m_fStashGrenadeParameterWhen: [0x4]u8, // 0x68C
        m_bUseFrictionStashedSpeed: [0x4]u8, // 0x690
        m_flUseFrictionStashedSpeedUntilFrac: [0x4]u8, // 0x694
        m_flFrictionStashedSpeed: [0x4]u8, // 0x698
        m_flStamina: [0x4]u8, // 0x69C
        m_flHeightAtJumpStart: [0x4]u8, // 0x6A0
        m_flMaxJumpHeightThisJump: [0x4]u8, // 0x6A4
        m_flMaxJumpHeightLastJump: [0x4]u8, // 0x6A8
        m_flStaminaAtJumpStart: [0x4]u8, // 0x6AC
        m_flVelMulAtJumpStart: [0x4]u8, // 0x6B0
        m_flAccumulatedJumpError: [0x4]u8, // 0x6B4
        m_LegacyJump: [0x18]u8, // 0x6B8
        m_ModernJump: [0x38]u8, // 0x6D0
        m_nLastJumpTick: [0x4]u8, // 0x708
        m_flLastJumpFrac: [0x4]u8, // 0x70C
        m_flLastJumpVelocityZ: [0x4]u8, // 0x710
        m_bJumpApexPending: [0x4]u8, // 0x714
        m_flTicksSinceLastSurfingDetected: [0x90]u8, // 0x718
        m_vecWalkWishVel: [0x828]u8, // 0x7A8
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
    pub const CTestPulseIO__EntityNameStringArgs_t = extern struct {
        nameA: [0x8]u8, // 0x0
        strValueB: [0x8]u8, // 0x8
    };
    pub const CFuncMoverRouter = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_nMoverIndex: [0x4]u8, // 0x4A8
        m_bRouteToAllMovers: [0x4]u8, // 0x4AC
        m_hPathMover: [0x8]u8, // 0x4B0
        m_iszPathMoverName: [0x8]u8, // 0x4B8
    };
    pub const CTriggerCallback = extern struct {
        pad_0: [0x9D0]u8, // 0x0
    };
    pub const CSoundOpvarSetAutoRoomEntity = extern struct {
        pad_0: [0x640]u8, // 0x0
        m_traceResults: [0x18]u8, // 0x640
        m_doorwayPairs: [0x18]u8, // 0x658
        m_flSize: [0x4]u8, // 0x670
        m_flHeightTolerance: [0x4]u8, // 0x674
        m_flSizeSqr: [0x8]u8, // 0x678
    };
    pub const CPulseCell_Outflow_ListenForEntityOutput = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_OnFired: [0x48]u8, // 0xD8
        m_strEntityOutput: [0x8]u8, // 0x120
        m_bListenUntilCanceled: [0x8]u8, // 0x128
    };
    pub const CPushable = extern struct {
        pad_0: [0x928]u8, // 0x0
    };
    pub const CRotatorTarget = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CPhysicsEntitySolver = extern struct {
        pad_0: [0x4C0]u8, // 0x0
        m_hMovingEntity: [0x4]u8, // 0x4C0
        m_hPhysicsBlocker: [0x4]u8, // 0x4C4
        m_separationDuration: [0x4]u8, // 0x4C8
        m_cancelTime: [0x4]u8, // 0x4CC
    };
    pub const CLogicCollisionPair = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_nameAttach1: [0x8]u8, // 0x4A8
        m_nameAttach2: [0x8]u8, // 0x4B0
        m_includeHierarchy: [0x1]u8, // 0x4B8
        m_supportMultipleEntitiesWithSameName: [0x1]u8, // 0x4B9
        m_disabled: [0x1]u8, // 0x4BA
        m_succeeded: [0x1]u8, // 0x4BB
        m_allowMissing: [0x4]u8, // 0x4BC
    };
    pub const CTestEffect = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_iLoop: [0x4]u8, // 0x4A8
        m_iBeam: [0x4]u8, // 0x4AC
        m_pBeam: [0x60]u8, // 0x4B0
        m_flBeamTime: [0x60]u8, // 0x510
        m_flStartTime: [0x8]u8, // 0x570
    };
    pub const CPulseCell_Outflow_ScriptedSequence__CursorState_t = extern struct {
        m_scriptedSequence: [0x4]u8, // 0x0
    };
    pub const CPropDoorRotating = extern struct {
        pad_0: [0xE90]u8, // 0x0
        m_vecAxis: [0xC]u8, // 0xE90
        m_flDistance: [0x4]u8, // 0xE9C
        m_eSpawnPosition: [0x4]u8, // 0xEA0
        m_eOpenDirection: [0x4]u8, // 0xEA4
        m_eCurrentOpenDirection: [0x4]u8, // 0xEA8
        m_eDefaultCheckDirection: [0x4]u8, // 0xEAC
        m_flAjarAngle: [0x4]u8, // 0xEB0
        m_angRotationAjarDeprecated: [0xC]u8, // 0xEB4
        m_angRotationClosed: [0xC]u8, // 0xEC0
        m_angRotationOpenForward: [0xC]u8, // 0xECC
        m_angRotationOpenBack: [0xC]u8, // 0xED8
        m_angGoal: [0xC]u8, // 0xEE4
        m_vecForwardBoundsMin: [0xC]u8, // 0xEF0
        m_vecForwardBoundsMax: [0xC]u8, // 0xEFC
        m_vecBackBoundsMin: [0xC]u8, // 0xF08
        m_vecBackBoundsMax: [0xC]u8, // 0xF14
        m_bAjarDoorShouldntAlwaysOpen: [0x4]u8, // 0xF20
        m_hEntityBlocker: [0xC]u8, // 0xF24
    };
    pub const CEnvParticleGlow = extern struct {
        pad_0: [0xDD8]u8, // 0x0
        m_flAlphaScale: [0x4]u8, // 0xDD8
        m_flRadiusScale: [0x4]u8, // 0xDDC
        m_flSelfIllumScale: [0x4]u8, // 0xDE0
        m_ColorTint: [0x4]u8, // 0xDE4
        m_hTextureOverride: [0x8]u8, // 0xDE8
    };
    pub const CMathRemap = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_flInMin: [0x4]u8, // 0x4A8
        m_flInMax: [0x4]u8, // 0x4AC
        m_flOut1: [0x4]u8, // 0x4B0
        m_flOut2: [0x4]u8, // 0x4B4
        m_flOldInValue: [0x4]u8, // 0x4B8
        m_bEnabled: [0x4]u8, // 0x4BC
        m_OutValue: [0x20]u8, // 0x4C0
        m_OnRoseAboveMin: [0x18]u8, // 0x4E0
        m_OnRoseAboveMax: [0x18]u8, // 0x4F8
        m_OnFellBelowMin: [0x18]u8, // 0x510
        m_OnFellBelowMax: [0x18]u8, // 0x528
    };
    pub const CSkyCameraVolumeTarget = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_nSkyboxScale: [0x8]u8, // 0x4A8
        m_hSkyMaterial: [0x8]u8, // 0x4B0
    };
    pub const CSoundOpvarSetOBBWindEntity = extern struct {
        pad_0: [0x550]u8, // 0x0
        m_vMins: [0xC]u8, // 0x550
        m_vMaxs: [0xC]u8, // 0x55C
        m_vDistanceMins: [0xC]u8, // 0x568
        m_vDistanceMaxs: [0xC]u8, // 0x574
        m_flWindMin: [0x4]u8, // 0x580
        m_flWindMax: [0x4]u8, // 0x584
        m_flWindMapMin: [0x4]u8, // 0x588
        m_flWindMapMax: [0x4]u8, // 0x58C
    };
    pub const PhysicsRagdollPose_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_RelativeTransforms: [0x18]u8, // 0x8
        m_hOwner: [0x4]u8, // 0x20
        m_bSetFromDebugHistory: [0x4]u8, // 0x24
    };
    pub const CPulseCell_ApplyDynamicAttributeBase__CursorState_t = extern struct {
        m_hEntity: [0x8]u8, // 0x0
        m_szAttributeKey: [0x8]u8, // 0x8
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
    pub const CScriptTriggerOnce = extern struct {
        pad_0: [0x9E0]u8, // 0x0
        m_vExtent: [0x10]u8, // 0x9E0
    };
    pub const CLightOrthoEntity = extern struct {
        pad_0: [0x858]u8, // 0x0
    };
    pub const CInfoInstructorHintHostageRescueZone = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CPulseCell_LimitCount__InstanceState_t = extern struct {
        m_nCurrentCount: [0x4]u8, // 0x0
    };
    pub const CTriggerTeleport = extern struct {
        pad_0: [0x9C8]u8, // 0x0
        m_iLandmark: [0x8]u8, // 0x9C8
        m_bUseLandmarkAngles: [0x1]u8, // 0x9D0
        m_bMirrorPlayer: [0x1]u8, // 0x9D1
        m_bCheckDestIfClearForPlayer: [0x6]u8, // 0x9D2
    };
    pub const CFuncWall = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_nState: [0x8]u8, // 0x850
    };
    pub const CBtActionAim = extern struct {
        pad_0: [0x68]u8, // 0x0
        m_szSensorInputKey: [0x18]u8, // 0x68
        m_szAimReadyKey: [0x8]u8, // 0x80
        m_flZoomCooldownTimestamp: [0x4]u8, // 0x88
        m_bDoneAiming: [0x4]u8, // 0x8C
        m_flLerpStartTime: [0x4]u8, // 0x90
        m_flNextLookTargetLerpTime: [0x4]u8, // 0x94
        m_flPenaltyReductionRatio: [0x4]u8, // 0x98
        m_NextLookTarget: [0xC]u8, // 0x9C
        m_AimTimer: [0x18]u8, // 0xA8
        m_SniperHoldTimer: [0x18]u8, // 0xC0
        m_FocusIntervalTimer: [0x18]u8, // 0xD8
        m_bAcquired: [0x8]u8, // 0xF0
    };
    pub const CCSGO_TeamPreviewCharacterPosition = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_nVariant: [0x4]u8, // 0x4A8
        m_nRandom: [0x4]u8, // 0x4AC
        m_nOrdinal: [0x8]u8, // 0x4B0
        m_sWeaponName: [0x8]u8, // 0x4B8
        m_xuid: [0x8]u8, // 0x4C0
        m_agentItem: [0x3E8]u8, // 0x4C8
        m_glovesItem: [0x3E8]u8, // 0x8B0
        m_weaponItem: [0x3E8]u8, // 0xC98
        m_petItem: [0x3E8]u8, // 0x1080
    };
    pub const CGameRulesProxy = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CInfoLadderDismount = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CMessage = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_iszMessage: [0x8]u8, // 0x4A8
        m_MessageVolume: [0x4]u8, // 0x4B0
        m_MessageAttenuation: [0x4]u8, // 0x4B4
        m_Radius: [0x8]u8, // 0x4B8
        m_sNoise: [0x8]u8, // 0x4C0
        m_OnShowMessage: [0x18]u8, // 0x4C8
    };
    pub const CPointVelocitySensor = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_hTargetEntity: [0x4]u8, // 0x4A8
        m_vecAxis: [0xC]u8, // 0x4AC
        m_bEnabled: [0x4]u8, // 0x4B8
        m_fPrevVelocity: [0x4]u8, // 0x4BC
        m_flAvgInterval: [0x8]u8, // 0x4C0
        m_Velocity: [0x20]u8, // 0x4C8
    };
    pub const CCS2PawnGraphController = extern struct {
        pad_0: [0x5C0]u8, // 0x0
        m_bIsDefusing: [0x18]u8, // 0x5C0
        m_moveType: [0x18]u8, // 0x5D8
        m_moveDirectionID: [0x18]u8, // 0x5F0
        m_flMoveSpeedX: [0x18]u8, // 0x608
        m_flMoveSpeedY: [0x18]u8, // 0x620
        m_flMoveSpeedHorizontal: [0x18]u8, // 0x638
        m_flPreviousMoveSpeedHorizontal: [0x18]u8, // 0x650
        m_flCrouchAmount: [0x18]u8, // 0x668
        m_bIsWalking: [0x18]u8, // 0x680
        m_flWeaponDropAmount: [0x18]u8, // 0x698
        m_groundAction: [0x18]u8, // 0x6B0
        m_groundActionDirectionID: [0x18]u8, // 0x6C8
        m_flGroundTurnAngleOrVelocity: [0x18]u8, // 0x6E0
        m_flLadderCycle: [0x18]u8, // 0x6F8
        m_flLadderYaw: [0x18]u8, // 0x710
        m_flLadderYawBackwards: [0x18]u8, // 0x728
        m_airAction: [0x18]u8, // 0x740
        m_flAirHeightAboveGround: [0x18]u8, // 0x758
        m_leftFootTarget: [0x18]u8, // 0x770
        m_rightFootTarget: [0x18]u8, // 0x788
        m_flFlashedAmount: [0x18]u8, // 0x7A0
        m_flAimPitchAngle: [0x18]u8, // 0x7B8
        m_flAimYawAngle: [0x18]u8, // 0x7D0
        m_flinchHead: [0x18]u8, // 0x7E8
        m_flinchHeadRestart: [0x18]u8, // 0x800
        m_flinchBody: [0x18]u8, // 0x818
        m_flinchBodyRestart: [0x18]u8, // 0x830
        m_flinchIsOnFire: [0x18]u8, // 0x848
    };
    pub const EngineCountdownTimer = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_duration: [0x4]u8, // 0x8
        m_timestamp: [0x4]u8, // 0xC
        m_timescale: [0x8]u8, // 0x10
    };
    pub const CScriptTriggerMultiple = extern struct {
        pad_0: [0x9E0]u8, // 0x0
        m_vExtent: [0x10]u8, // 0x9E0
    };
    pub const CHostage = extern struct {
        pad_0: [0xB38]u8, // 0x0
        m_OnHostageBeginGrab: [0x18]u8, // 0xB38
        m_OnFirstPickedUp: [0x18]u8, // 0xB50
        m_OnDroppedNotRescued: [0x18]u8, // 0xB68
        m_OnRescued: [0x18]u8, // 0xB80
        m_entitySpottedState: [0x18]u8, // 0xB98
        m_nSpotRules: [0x4]u8, // 0xBB0
        m_uiHostageSpawnExclusionGroupMask: [0x4]u8, // 0xBB4
        m_nHostageSpawnRandomFactor: [0x4]u8, // 0xBB8
        m_bRemove: [0x4]u8, // 0xBBC
        m_vel: [0xC]u8, // 0xBC0
        m_isRescued: [0x1]u8, // 0xBCC
        m_jumpedThisFrame: [0x3]u8, // 0xBCD
        m_nHostageState: [0x4]u8, // 0xBD0
        m_leader: [0x4]u8, // 0xBD4
        m_lastLeader: [0x8]u8, // 0xBD8
        m_reuseTimer: [0x18]u8, // 0xBE0
        m_hasBeenUsed: [0x4]u8, // 0xBF8
        m_accel: [0xC]u8, // 0xBFC
        m_isRunning: [0x1]u8, // 0xC08
        m_isCrouching: [0x7]u8, // 0xC09
        m_jumpTimer: [0x18]u8, // 0xC10
        m_isWaitingForLeader: [0x2010]u8, // 0xC28
        m_repathTimer: [0x18]u8, // 0x2C38
        m_inhibitDoorTimer: [0x90]u8, // 0x2C50
        m_inhibitObstacleAvoidanceTimer: [0x20]u8, // 0x2CE0
        m_wiggleTimer: [0x1C]u8, // 0x2D00
        m_isAdjusted: [0x1]u8, // 0x2D1C
        m_bHandsHaveBeenCut: [0x3]u8, // 0x2D1D
        m_hHostageGrabber: [0x4]u8, // 0x2D20
        m_fLastGrabTime: [0x4]u8, // 0x2D24
        m_flGrabStartTime: [0x4]u8, // 0x2D28
        m_vecPositionWhenStartedDroppingToGround: [0xC]u8, // 0x2D2C
        m_vecGrabbedPos: [0xC]u8, // 0x2D38
        m_flRescueStartTime: [0x4]u8, // 0x2D44
        m_flGrabSuccessTime: [0x4]u8, // 0x2D48
        m_flDropStartTime: [0x4]u8, // 0x2D4C
        m_nApproachRewardPayouts: [0x4]u8, // 0x2D50
        m_nPickupEventCount: [0x4]u8, // 0x2D54
        m_vecSpawnGroundPos: [0x38]u8, // 0x2D58
        m_vecHostageResetPosition: [0x10]u8, // 0x2D90
    };
    pub const CEnvSpark = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_flDelay: [0x4]u8, // 0x4A8
        m_nMagnitude: [0x4]u8, // 0x4AC
        m_nTrailLength: [0x4]u8, // 0x4B0
        m_nType: [0x4]u8, // 0x4B4
        m_OnSpark: [0x18]u8, // 0x4B8
    };
    pub const CCSPlayerController_DamageServices = extern struct {
        pad_0: [0x40]u8, // 0x0
        m_nSendUpdate: [0x8]u8, // 0x40
        m_DamageList: [0x88]u8, // 0x48
    };
    pub const CEnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume = extern struct {
        pad_0: [0x680]u8, // 0x0
    };
    pub const CBaseModelEntity__OnDamageLevelChangedArgs_t = extern struct {
        nHitGroup: [0x4]u8, // 0x0
        nDamageLevel: [0x4]u8, // 0x4
        nDamageLevelsRemaining: [0x4]u8, // 0x8
        nPrevDamageLevel: [0x4]u8, // 0xC
    };
    pub const CFilterLOS = extern struct {
        pad_0: [0x4E0]u8, // 0x0
    };
    pub const CPointOrient = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_iszSpawnTargetName: [0x8]u8, // 0x4A8
        m_hTarget: [0x4]u8, // 0x4B0
        m_bActive: [0x4]u8, // 0x4B4
        m_nGoalDirection: [0x4]u8, // 0x4B8
        m_nConstraint: [0x4]u8, // 0x4BC
        m_flMaxTurnRate: [0x4]u8, // 0x4C0
        m_flLastGameTime: [0x4]u8, // 0x4C4
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
    pub const CWeaponP250 = extern struct {
        pad_0: [0x12A0]u8, // 0x0
    };
    pub const CDestructiblePartsComponent = extern struct {
        __m_pChainEntity: [0x48]u8, // 0x0
        m_vecDamageTakenByHitGroup: [0x18]u8, // 0x48
        m_hOwner: [0x8]u8, // 0x60
        m_pAnimGraphDestructibleGraphController: [0x8]u8, // 0x68
    };
    pub const CChangeLevel = extern struct {
        pad_0: [0x9C8]u8, // 0x0
        m_sMapName: [0x8]u8, // 0x9C8
        m_sLandmarkName: [0x8]u8, // 0x9D0
        m_OnChangeLevel: [0x18]u8, // 0x9D8
        m_bTouched: [0x1]u8, // 0x9F0
        m_bNoTouch: [0x1]u8, // 0x9F1
        m_bNewChapter: [0x1]u8, // 0x9F2
        m_bOnChangeLevelFired: [0x5]u8, // 0x9F3
    };
    pub const CBaseButton = extern struct {
        pad_0: [0x8D0]u8, // 0x0
        m_angMoveEntitySpace: [0xC]u8, // 0x8D0
        m_fStayPushed: [0x1]u8, // 0x8DC
        m_fRotating: [0x3]u8, // 0x8DD
        m_ls: [0x20]u8, // 0x8E0
        m_sUseSound: [0x8]u8, // 0x900
        m_sLockedSound: [0x8]u8, // 0x908
        m_sUnlockedSound: [0x8]u8, // 0x910
        m_sOverrideAnticipationName: [0x8]u8, // 0x918
        m_bLocked: [0x1]u8, // 0x920
        m_bDisabled: [0x3]u8, // 0x921
        m_flSpeed: [0x4]u8, // 0x924
        m_flUseLockedTime: [0x4]u8, // 0x928
        m_bSolidBsp: [0x4]u8, // 0x92C
        m_OnDamaged: [0x18]u8, // 0x930
        m_OnPressed: [0x18]u8, // 0x948
        m_OnUseLocked: [0x18]u8, // 0x960
        m_OnIn: [0x18]u8, // 0x978
        m_OnOut: [0x18]u8, // 0x990
        m_nState: [0x4]u8, // 0x9A8
        m_hConstraint: [0x4]u8, // 0x9AC
        m_hConstraintParent: [0x4]u8, // 0x9B0
        m_bForceNpcExclude: [0x4]u8, // 0x9B4
        m_sGlowEntity: [0x8]u8, // 0x9B8
        m_glowEntity: [0x4]u8, // 0x9C0
        m_usable: [0x4]u8, // 0x9C4
        m_szDisplayText: [0x8]u8, // 0x9C8
    };
    pub const CPulseCell_SoundEventStart = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_Type: [0x8]u8, // 0x48
    };
    pub const CPulseCell_Step_DebugLog = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CItem_Healthshot = extern struct {
        pad_0: [0x1290]u8, // 0x0
    };
    pub const CBaseGrenade = extern struct {
        pad_0: [0xA48]u8, // 0x0
        m_bDamageDetonating: [0x8]u8, // 0xA48
        m_OnPlayerPickup: [0x18]u8, // 0xA50
        m_OnExplode: [0x18]u8, // 0xA68
        m_bHasWarnedAI: [0x1]u8, // 0xA80
        m_bIsSmokeGrenade: [0x1]u8, // 0xA81
        m_bIsLive: [0x2]u8, // 0xA82
        m_DmgRadius: [0x4]u8, // 0xA84
        m_flDetonateTime: [0x4]u8, // 0xA88
        m_flWarnAITime: [0x4]u8, // 0xA8C
        m_flDamage: [0x8]u8, // 0xA90
        m_iszBounceSound: [0x8]u8, // 0xA98
        m_ExplosionSound: [0x8]u8, // 0xAA0
        m_hThrower: [0x18]u8, // 0xAA8
        m_flNextAttack: [0x4]u8, // 0xAC0
        m_hOriginalThrower: [0xC]u8, // 0xAC4
    };
    pub const CColorCorrectionVolume = extern struct {
        pad_0: [0x9C8]u8, // 0x0
        m_MaxWeight: [0x4]u8, // 0x9C8
        m_FadeDuration: [0x4]u8, // 0x9CC
        m_Weight: [0x4]u8, // 0x9D0
        m_lookupFilename: [0x200]u8, // 0x9D4
        m_LastEnterWeight: [0x4]u8, // 0xBD4
        m_LastEnterTime: [0x4]u8, // 0xBD8
        m_LastExitWeight: [0x4]u8, // 0xBDC
        m_LastExitTime: [0x8]u8, // 0xBE0
    };
    pub const CCSPlayerController_ActionTrackingServices = extern struct {
        pad_0: [0x40]u8, // 0x0
        m_perRoundStats: [0x88]u8, // 0x40
        m_matchStats: [0xC0]u8, // 0xC8
        m_iNumRoundKills: [0x4]u8, // 0x188
        m_iNumRoundKillsHeadshots: [0x4]u8, // 0x18C
        m_flTotalRoundDamageDealt: [0x2D0]u8, // 0x190
    };
    pub const CBodyComponentBaseAnimGraph = extern struct {
        pad_0: [0x4E0]u8, // 0x0
        m_animationController: [0x650]u8, // 0x4E0
    };
    pub const CPulseCell_BaseYieldingInflow = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_BaseFlow_OnAfterCancel: [0x48]u8, // 0x48
        m_BaseFlow_WhileActive: [0x48]u8, // 0x90
    };
    pub const PulseNodeDynamicOutflows_t = extern struct {
        m_Outflows: [0x18]u8, // 0x0
    };
    pub const CFogVolume = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_fogName: [0x8]u8, // 0x850
        m_postProcessName: [0x8]u8, // 0x858
        m_colorCorrectionName: [0x10]u8, // 0x860
        m_bDisabled: [0x1]u8, // 0x870
        m_bInFogVolumesList: [0x7]u8, // 0x871
    };
    pub const CFuncRotating = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_OnStopped: [0x18]u8, // 0x850
        m_OnStarted: [0x18]u8, // 0x868
        m_OnReachedStart: [0x18]u8, // 0x880
        m_localRotationVector: [0xC]u8, // 0x898
        m_flSpeed: [0x4]u8, // 0x8A4
        m_flFanFriction: [0x4]u8, // 0x8A8
        m_flAttenuation: [0x4]u8, // 0x8AC
        m_flVolume: [0x4]u8, // 0x8B0
        m_flTargetSpeed: [0x4]u8, // 0x8B4
        m_flMaxSpeed: [0x4]u8, // 0x8B8
        m_flBlockDamage: [0x4]u8, // 0x8BC
        m_NoiseRunning: [0x8]u8, // 0x8C0
        m_bReversed: [0x1]u8, // 0x8C8
        m_bAccelDecel: [0x17]u8, // 0x8C9
        m_prevLocalAngles: [0xC]u8, // 0x8E0
        m_angStart: [0xC]u8, // 0x8EC
        m_bStopAtStartPos: [0x4]u8, // 0x8F8
        m_vecClientOrigin: [0xC]u8, // 0x8FC
        m_vecClientAngles: [0x10]u8, // 0x908
    };
    pub const CTimerEntity = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_OnTimer: [0x18]u8, // 0x4A8
        m_OnTimerHigh: [0x18]u8, // 0x4C0
        m_OnTimerLow: [0x18]u8, // 0x4D8
        m_iDisabled: [0x4]u8, // 0x4F0
        m_flInitialDelay: [0x4]u8, // 0x4F4
        m_flRefireTime: [0x4]u8, // 0x4F8
        m_bUpDownState: [0x4]u8, // 0x4FC
        m_iUseRandomTime: [0x4]u8, // 0x500
        m_bPauseAfterFiring: [0x4]u8, // 0x504
        m_flLowerRandomBound: [0x4]u8, // 0x508
        m_flUpperRandomBound: [0x4]u8, // 0x50C
        m_flRemainingTime: [0x4]u8, // 0x510
        m_bPaused: [0x4]u8, // 0x514
    };
    pub const CBtActionMoveTo = extern struct {
        pad_0: [0x60]u8, // 0x0
        m_szDestinationInputKey: [0x8]u8, // 0x60
        m_szHidingSpotInputKey: [0x8]u8, // 0x68
        m_szThreatInputKey: [0x8]u8, // 0x70
        m_vecDestination: [0xC]u8, // 0x78
        m_bAutoLookAdjust: [0x1]u8, // 0x84
        m_bComputePath: [0x3]u8, // 0x85
        m_flDamagingAreasPenaltyCost: [0x8]u8, // 0x88
        m_CheckApproximateCornersTimer: [0x18]u8, // 0x90
        m_CheckHighPriorityItem: [0x18]u8, // 0xA8
        m_RepathTimer: [0x18]u8, // 0xC0
        m_flArrivalEpsilon: [0x4]u8, // 0xD8
        m_flAdditionalArrivalEpsilon2D: [0x4]u8, // 0xDC
        m_flHidingSpotCheckDistanceThreshold: [0x4]u8, // 0xE0
        m_flNearestAreaDistanceThreshold: [0x4]u8, // 0xE4
    };
    pub const CPlayer_MovementServices_Humanoid = extern struct {
        pad_0: [0x258]u8, // 0x0
        m_flStepSoundTime: [0x4]u8, // 0x258
        m_flFallVelocity: [0x4]u8, // 0x25C
        m_groundNormal: [0xC]u8, // 0x260
        m_flSurfaceFriction: [0x4]u8, // 0x26C
        m_surfaceProps: [0x10]u8, // 0x270
        m_nStepside: [0x4]u8, // 0x280
        m_vecSmoothedVelocity: [0xC]u8, // 0x284
    };
    pub const CPulseCell_IsRequirementValid__Criteria_t = extern struct {
        m_bIsValid: [0x1]u8, // 0x0
    };
    pub const CWeaponG3SG1 = extern struct {
        pad_0: [0x12A0]u8, // 0x0
    };
    pub const CTriggerOnce = extern struct {
        pad_0: [0x9E0]u8, // 0x0
    };
    pub const CSMatchStats_t = extern struct {
        pad_0: [0x68]u8, // 0x0
        m_iEnemy5Ks: [0x4]u8, // 0x68
        m_iEnemy4Ks: [0x4]u8, // 0x6C
        m_iEnemy3Ks: [0x4]u8, // 0x70
        m_iEnemyKnifeKills: [0x4]u8, // 0x74
        m_iEnemyTaserKills: [0x4]u8, // 0x78
        m_iEnemy2Ks: [0x4]u8, // 0x7C
        m_iUtility_Count: [0x4]u8, // 0x80
        m_iUtility_Successes: [0x4]u8, // 0x84
        m_iUtility_Enemies: [0x4]u8, // 0x88
        m_iFlash_Count: [0x4]u8, // 0x8C
        m_iFlash_Successes: [0x4]u8, // 0x90
        m_flHealthPointsRemovedTotal: [0x4]u8, // 0x94
        m_flHealthPointsDealtTotal: [0x4]u8, // 0x98
        m_nShotsFiredTotal: [0x4]u8, // 0x9C
        m_nShotsOnTargetTotal: [0x4]u8, // 0xA0
        m_i1v1Count: [0x4]u8, // 0xA4
        m_i1v1Wins: [0x4]u8, // 0xA8
        m_i1v2Count: [0x4]u8, // 0xAC
        m_i1v2Wins: [0x4]u8, // 0xB0
        m_iEntryCount: [0x4]u8, // 0xB4
        m_iEntryWins: [0x8]u8, // 0xB8
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
    pub const CFuncMonitor = extern struct {
        pad_0: [0x870]u8, // 0x0
        m_targetCamera: [0x8]u8, // 0x870
        m_nResolutionEnum: [0x4]u8, // 0x878
        m_bRenderShadows: [0x1]u8, // 0x87C
        m_bUseUniqueColorTarget: [0x3]u8, // 0x87D
        m_brushModelName: [0x8]u8, // 0x880
        m_hTargetCamera: [0x4]u8, // 0x888
        m_bEnabled: [0x1]u8, // 0x88C
        m_bDraw3DSkybox: [0x1]u8, // 0x88D
        m_bStartEnabled: [0x2]u8, // 0x88E
    };
    pub const CInfoVisibilityBox = extern struct {
        pad_0: [0x4AC]u8, // 0x0
        m_nMode: [0x4]u8, // 0x4AC
        m_vBoxSize: [0xC]u8, // 0x4B0
        m_bEnabled: [0x4]u8, // 0x4BC
    };
    pub const CGunTarget = extern struct {
        pad_0: [0x8D0]u8, // 0x0
        m_flSpeed: [0x4]u8, // 0x8D0
        m_on: [0x4]u8, // 0x8D4
        m_hTargetEnt: [0x8]u8, // 0x8D8
        m_OnDeath: [0x18]u8, // 0x8E0
    };
    pub const CSoundEventConeEntity = extern struct {
        pad_0: [0x568]u8, // 0x0
        m_flEmitterAngle: [0x4]u8, // 0x568
        m_flSweetSpotAngle: [0x4]u8, // 0x56C
        m_flAttenMin: [0x4]u8, // 0x570
        m_flAttenMax: [0x4]u8, // 0x574
        m_iszParameterName: [0x8]u8, // 0x578
    };
    pub const CSoundOpvarSetOBBEntity = extern struct {
        pad_0: [0x6A8]u8, // 0x0
    };
    pub const CDecoyProjectile = extern struct {
        pad_0: [0xB58]u8, // 0x0
        m_nDecoyShotTick: [0x4]u8, // 0xB58
        m_shotsRemaining: [0x4]u8, // 0xB5C
        m_fExpireTime: [0x10]u8, // 0xB60
        m_decoyWeaponDefIndex: [0x10]u8, // 0xB70
    };
    pub const CPrecipitationBlocker = extern struct {
        pad_0: [0x850]u8, // 0x0
    };
    pub const CSoundOpvarSetPathCornerEntity = extern struct {
        pad_0: [0x658]u8, // 0x0
        m_bUseParentedPath: [0x4]u8, // 0x658
        m_flDistMinSqr: [0x4]u8, // 0x65C
        m_flDistMaxSqr: [0x8]u8, // 0x660
        m_iszPathCornerEntityName: [0x8]u8, // 0x668
    };
    pub const CPointClientCommand = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CCSGO_RushIntroTerroristPosition = extern struct {
        pad_0: [0x1468]u8, // 0x0
    };
    pub const CPulseCell_ApplyParent__CursorState_t = extern struct {
        m_hParentEntity: [0x4]u8, // 0x0
        m_hChildEntity: [0x4]u8, // 0x4
    };
    pub const CHostageRescueZone = extern struct {
        pad_0: [0x9E8]u8, // 0x0
    };
    pub const CWorld = extern struct {
        pad_0: [0x850]u8, // 0x0
    };
    pub const CPathMoverEntitySpawner = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_eTemplateChoiceStrategy: [0x8]u8, // 0x4A8
        m_szSpawnTemplates: [0x20]u8, // 0x4B0
        m_szSpawnTemplateParams: [0x10]u8, // 0x4D0
        m_szSpawnTemplateCount: [0x10]u8, // 0x4E0
        m_nSpawnIndex: [0x4]u8, // 0x4F0
        m_hPathMover: [0x4]u8, // 0x4F4
        m_flSpawnFrequencySeconds: [0x4]u8, // 0x4F8
        m_flSpawnFrequencyDistToNearestMover: [0x4]u8, // 0x4FC
        m_mapSpawnedMoverTemplates: [0x20]u8, // 0x500
        m_nMaxActive: [0x4]u8, // 0x520
        m_nSpawnNum: [0x4]u8, // 0x524
        m_flLastSpawnTime: [0x4]u8, // 0x528
        m_bEnabled: [0x1]u8, // 0x52C
        m_bDestroyMoverOnArrivedAtEnd: [0x3]u8, // 0x52D
        m_vecQueuedRemovals: [0x18]u8, // 0x530
        m_OnTemplateSpawned: [0x18]u8, // 0x548
        m_OnTemplateGroupSpawned: [0x18]u8, // 0x560
        m_iszPathMoverName: [0x8]u8, // 0x578
        m_bPrepopulateOnSpawn: [0x8]u8, // 0x580
        m_iszPathNodeStartName: [0x14]u8, // 0x588
        m_vMoverSpawnPos: [0xC]u8, // 0x59C
        m_bRunningDebugThink: [0x8]u8, // 0x5A8
    };
    pub const CModelState = extern struct {
        pad_0: [0xA0]u8, // 0x0
        m_hModel: [0x8]u8, // 0xA0
        m_ModelName: [0x38]u8, // 0xA8
        m_pVPhysicsAggregate: [0x8]u8, // 0xE0
        m_flRootBoneOffset_x: [0x4]u8, // 0xE8
        m_flRootBoneOffset_y: [0x4]u8, // 0xEC
        m_flRootBoneOffset_z: [0x4]u8, // 0xF0
        m_nRootBoneOffsetResetSerialNumber: [0x1]u8, // 0xF4
        m_bClientClothCreationSuppressed: [0xEB]u8, // 0xF5
        m_nAnimStateNoInterpSerialNumber: [0x8]u8, // 0x1E0
        m_MeshGroupMask: [0x50]u8, // 0x1E8
        m_nBodyGroupChoices: [0x4A]u8, // 0x238
        m_nIdealMotionType: [0x1]u8, // 0x282
        m_nForceLOD: [0x1]u8, // 0x283
        m_nClothUpdateFlags: [0xC]u8, // 0x284
    };
    pub const CBaseModelEntity__BodyGroupRequest_t = extern struct {
        m_uRequestID: [0x4]u8, // 0x0
        m_nGroupName: [0x4]u8, // 0x4
        m_sChoiceName: [0x8]u8, // 0x8
        m_nGroup: [0x4]u8, // 0x10
        m_uChoice: [0x2]u8, // 0x14
        m_uRefCount: [0x2]u8, // 0x16
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
    pub const CWeaponGlock = extern struct {
        pad_0: [0x12A0]u8, // 0x0
    };
    pub const CHEGrenadeProjectile = extern struct {
        pad_0: [0xB40]u8, // 0x0
    };
    pub const CTriggerGravity = extern struct {
        pad_0: [0x9C8]u8, // 0x0
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
    pub const CWeaponGalilAR = extern struct {
        pad_0: [0x12A0]u8, // 0x0
    };
    pub const CFilterMassGreater = extern struct {
        pad_0: [0x4E0]u8, // 0x0
        m_fFilterMass: [0x8]u8, // 0x4E0
    };
    pub const CWeaponMP7 = extern struct {
        pad_0: [0x12A0]u8, // 0x0
    };
    pub const CCSWeaponBaseGun = extern struct {
        pad_0: [0x1280]u8, // 0x0
        m_zoomLevel: [0x4]u8, // 0x1280
        m_iBurstShotsRemaining: [0xC]u8, // 0x1284
        m_silencedModelIndex: [0x4]u8, // 0x1290
        m_inPrecache: [0x1]u8, // 0x1294
        m_bNeedsBoltAction: [0x3]u8, // 0x1295
        m_nRevolverCylinderIdx: [0x4]u8, // 0x1298
        m_bSkillReloadAvailable: [0x1]u8, // 0x129C
        m_bSkillReloadLiftedReloadKey: [0x1]u8, // 0x129D
        m_bSkillBoltInterruptAvailable: [0x1]u8, // 0x129E
        m_bSkillBoltLiftedFireKey: [0x1]u8, // 0x129F
    };
    pub const CEnableMotionFixup = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CLogicActiveAutosave = extern struct {
        pad_0: [0x4B8]u8, // 0x0
        m_TriggerHitPoints: [0x4]u8, // 0x4B8
        m_flTimeToTrigger: [0x4]u8, // 0x4BC
        m_flStartTime: [0x4]u8, // 0x4C0
        m_flDangerousTime: [0x4]u8, // 0x4C4
    };
    pub const CMathCounter = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_flMin: [0x4]u8, // 0x4A8
        m_flMax: [0x4]u8, // 0x4AC
        m_bHitMin: [0x1]u8, // 0x4B0
        m_bHitMax: [0x1]u8, // 0x4B1
        m_bDisabled: [0x6]u8, // 0x4B2
        m_OutValue: [0x20]u8, // 0x4B8
        m_OnGetValue: [0x20]u8, // 0x4D8
        m_OnHitMin: [0x18]u8, // 0x4F8
        m_OnHitMax: [0x18]u8, // 0x510
        m_OnChangedFromMin: [0x18]u8, // 0x528
        m_OnChangedFromMax: [0x18]u8, // 0x540
    };
    pub const CCSCustomPlayerCamera = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_hPawn: [0x4]u8, // 0x4A8
        m_nCameraMode: [0x4]u8, // 0x4AC
        m_hFollowEntity: [0x4]u8, // 0x4B0
        m_bFollowEyes: [0x4]u8, // 0x4B4
        m_vecFollowOffset: [0xC]u8, // 0x4B8
        m_vecCameraOffset: [0xC]u8, // 0x4C4
        m_bClipCameraOffset: [0x4]u8, // 0x4D0
        m_flCameraOffsetReturnStrength: [0xC]u8, // 0x4D4
    };
    pub const CCSGameModeRules_ArmsRace = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_WeaponSequence: [0x58]u8, // 0x30
    };
    pub const CLogicPlayerProxyBase = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_PlayerHasAmmo: [0x18]u8, // 0x4A8
        m_PlayerHasNoAmmo: [0x18]u8, // 0x4C0
        m_PlayerDied: [0x18]u8, // 0x4D8
        m_RequestedPlayerHealth: [0x20]u8, // 0x4F0
        m_hPlayer: [0x8]u8, // 0x510
    };
    pub const CAttributeContainer = extern struct {
        pad_0: [0x50]u8, // 0x0
        m_Item: [0x3E8]u8, // 0x50
    };
    pub const CCSPlace = extern struct {
        pad_0: [0x868]u8, // 0x0
        m_name: [0x8]u8, // 0x868
    };
    pub const CPulseCell_ApplyParent = extern struct {
        pad_0: [0xD8]u8, // 0x0
    };
    pub const PulseSelectorOutflowList_t = extern struct {
        m_Outflows: [0x18]u8, // 0x0
    };
    pub const CFilterContext = extern struct {
        pad_0: [0x4E0]u8, // 0x0
        m_iFilterContext: [0x8]u8, // 0x4E0
    };
    pub const CLightEnvironmentEntity = extern struct {
        pad_0: [0x858]u8, // 0x0
    };
    pub const CEnvDecal = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_hDecalMaterial: [0x8]u8, // 0x850
        m_flWidth: [0x4]u8, // 0x858
        m_flHeight: [0x4]u8, // 0x85C
        m_flDepth: [0x4]u8, // 0x860
        m_nRenderOrder: [0x4]u8, // 0x864
        m_bProjectOnWorld: [0x1]u8, // 0x868
        m_bProjectOnCharacters: [0x1]u8, // 0x869
        m_bProjectOnWater: [0x2]u8, // 0x86A
        m_flDepthSortBias: [0x4]u8, // 0x86C
    };
    pub const CEnvVolumetricFogVolume = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_bActive: [0x4]u8, // 0x4A8
        m_vBoxMins: [0xC]u8, // 0x4AC
        m_vBoxMaxs: [0xC]u8, // 0x4B8
        m_bStartDisabled: [0x1]u8, // 0x4C4
        m_bIndirectUseLPVs: [0x3]u8, // 0x4C5
        m_flStrength: [0x4]u8, // 0x4C8
        m_nFalloffShape: [0x4]u8, // 0x4CC
        m_flFalloffExponent: [0x4]u8, // 0x4D0
        m_flHeightFogDepth: [0x4]u8, // 0x4D4
        m_fHeightFogEdgeWidth: [0x4]u8, // 0x4D8
        m_fIndirectLightStrength: [0x4]u8, // 0x4DC
        m_fSunLightStrength: [0x4]u8, // 0x4E0
        m_fNoiseStrength: [0x4]u8, // 0x4E4
        m_TintColor: [0x4]u8, // 0x4E8
        m_bOverrideTintColor: [0x1]u8, // 0x4EC
        m_bOverrideIndirectLightStrength: [0x1]u8, // 0x4ED
        m_bOverrideSunLightStrength: [0x1]u8, // 0x4EE
        m_bOverrideNoiseStrength: [0x1]u8, // 0x4EF
    };
    pub const CServerOnlyEntity = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CPulseCell_PlaySequence__CursorState_t = extern struct {
        m_hTarget: [0x4]u8, // 0x0
    };
    pub const CBodyComponentSkeletonInstance = extern struct {
        pad_0: [0x80]u8, // 0x0
        m_skeletonInstance: [0x460]u8, // 0x80
    };
    pub const CItemGeneric = extern struct {
        pad_0: [0xAF4]u8, // 0x0
        m_bHasTriggerRadius: [0x1]u8, // 0xAF4
        m_bHasPickupRadius: [0x3]u8, // 0xAF5
        m_flPickupRadiusSqr: [0x4]u8, // 0xAF8
        m_flTriggerRadiusSqr: [0x4]u8, // 0xAFC
        m_flLastPickupCheck: [0x4]u8, // 0xB00
        m_bPlayerCounterListenerAdded: [0x1]u8, // 0xB04
        m_bPlayerInTriggerRadius: [0x3]u8, // 0xB05
        m_hSpawnParticleEffect: [0x8]u8, // 0xB08
        m_pAmbientSoundEffect: [0x8]u8, // 0xB10
        m_bAutoStartAmbientSound: [0x8]u8, // 0xB18
        m_pSpawnScriptFunction: [0x8]u8, // 0xB20
        m_hPickupParticleEffect: [0x8]u8, // 0xB28
        m_pPickupSoundEffect: [0x8]u8, // 0xB30
        m_pPickupScriptFunction: [0x8]u8, // 0xB38
        m_hTimeoutParticleEffect: [0x8]u8, // 0xB40
        m_pTimeoutSoundEffect: [0x8]u8, // 0xB48
        m_pTimeoutScriptFunction: [0x8]u8, // 0xB50
        m_pPickupFilterName: [0x8]u8, // 0xB58
        m_hPickupFilter: [0x8]u8, // 0xB60
        m_OnPickup: [0x18]u8, // 0xB68
        m_OnTimeout: [0x18]u8, // 0xB80
        m_OnTriggerStartTouch: [0x18]u8, // 0xB98
        m_OnTriggerTouch: [0x18]u8, // 0xBB0
        m_OnTriggerEndTouch: [0x18]u8, // 0xBC8
        m_pAllowPickupScriptFunction: [0x8]u8, // 0xBE0
        m_flPickupRadius: [0x4]u8, // 0xBE8
        m_flTriggerRadius: [0x4]u8, // 0xBEC
        m_pTriggerSoundEffect: [0x8]u8, // 0xBF0
        m_bGlowWhenInTrigger: [0x4]u8, // 0xBF8
        m_glowColor: [0x4]u8, // 0xBFC
        m_bUseable: [0x4]u8, // 0xC00
        m_hTriggerHelper: [0xC]u8, // 0xC04
    };
    pub const CPointValueRemapper = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_bDisabled: [0x1]u8, // 0x4A8
        m_bUpdateOnClient: [0x3]u8, // 0x4A9
        m_nInputType: [0x4]u8, // 0x4AC
        m_iszRemapLineStartName: [0x8]u8, // 0x4B0
        m_iszRemapLineEndName: [0x8]u8, // 0x4B8
        m_hRemapLineStart: [0x4]u8, // 0x4C0
        m_hRemapLineEnd: [0x4]u8, // 0x4C4
        m_flMaximumChangePerSecond: [0x4]u8, // 0x4C8
        m_flDisengageDistance: [0x4]u8, // 0x4CC
        m_flEngageDistance: [0x4]u8, // 0x4D0
        m_bRequiresUseKey: [0x4]u8, // 0x4D4
        m_nOutputType: [0x8]u8, // 0x4D8
        m_iszOutputEntityName: [0x8]u8, // 0x4E0
        m_iszOutputEntity2Name: [0x8]u8, // 0x4E8
        m_iszOutputEntity3Name: [0x8]u8, // 0x4F0
        m_iszOutputEntity4Name: [0x8]u8, // 0x4F8
        m_hOutputEntities: [0x18]u8, // 0x500
        m_nHapticsType: [0x4]u8, // 0x518
        m_nMomentumType: [0x4]u8, // 0x51C
        m_flMomentumModifier: [0x4]u8, // 0x520
        m_flSnapValue: [0x4]u8, // 0x524
        m_flCurrentMomentum: [0x4]u8, // 0x528
        m_nRatchetType: [0x4]u8, // 0x52C
        m_flRatchetOffset: [0x4]u8, // 0x530
        m_flInputOffset: [0x4]u8, // 0x534
        m_bEngaged: [0x1]u8, // 0x538
        m_bFirstUpdate: [0x3]u8, // 0x539
        m_flPreviousValue: [0x4]u8, // 0x53C
        m_flPreviousUpdateTickTime: [0x4]u8, // 0x540
        m_vecPreviousTestPoint: [0xC]u8, // 0x544
        m_hUsingPlayer: [0x4]u8, // 0x550
        m_flCustomOutputValue: [0x4]u8, // 0x554
        m_iszSoundEngage: [0x8]u8, // 0x558
        m_iszSoundDisengage: [0x8]u8, // 0x560
        m_iszSoundReachedValueZero: [0x8]u8, // 0x568
        m_iszSoundReachedValueOne: [0x8]u8, // 0x570
        m_iszSoundMovingLoop: [0x20]u8, // 0x578
        m_Position: [0x20]u8, // 0x598
        m_PositionDelta: [0x20]u8, // 0x5B8
        m_OnReachedValueZero: [0x18]u8, // 0x5D8
        m_OnReachedValueOne: [0x18]u8, // 0x5F0
        m_OnReachedValueCustom: [0x18]u8, // 0x608
        m_OnEngage: [0x18]u8, // 0x620
        m_OnDisengage: [0x18]u8, // 0x638
    };
    pub const CBtNodeConditionInactive = extern struct {
        pad_0: [0x78]u8, // 0x0
        m_flRoundStartThresholdSeconds: [0x4]u8, // 0x78
        m_flSensorInactivityThresholdSeconds: [0x4]u8, // 0x7C
        m_SensorInactivityTimer: [0x18]u8, // 0x80
    };
    pub const CCSGO_TeamIntroCounterTerroristPosition = extern struct {
        pad_0: [0x1468]u8, // 0x0
    };
    pub const CRagdollProp = extern struct {
        pad_0: [0xA50]u8, // 0x0
        m_CPropDataComponent: [0x40]u8, // 0xA50
        m_ragdoll: [0x50]u8, // 0xA90
        m_bStartDisabled: [0x4]u8, // 0xAE0
        m_massScale: [0x4]u8, // 0xAE4
        m_buoyancyScale: [0x8]u8, // 0xAE8
        m_ragEnabled: [0x18]u8, // 0xAF0
        m_ragPos: [0x18]u8, // 0xB08
        m_ragAngles: [0x18]u8, // 0xB20
        m_lastUpdateTickCount: [0x4]u8, // 0xB38
        m_allAsleep: [0x1]u8, // 0xB3C
        m_bFirstCollisionAfterLaunch: [0x3]u8, // 0xB3D
        m_nNavObstacleType: [0x4]u8, // 0xB40
        m_bUpdateNavWhenMoving: [0x1]u8, // 0xB44
        m_bForceNavObstacleCut: [0x1]u8, // 0xB45
        m_bAttachedToReferenceFrame: [0x2]u8, // 0xB46
        m_hDamageEntity: [0x4]u8, // 0xB48
        m_hKiller: [0x4]u8, // 0xB4C
        m_hPhysicsAttacker: [0x4]u8, // 0xB50
        m_flLastPhysicsInfluenceTime: [0x4]u8, // 0xB54
        m_flFadeOutStartTime: [0x4]u8, // 0xB58
        m_flFadeTime: [0x4]u8, // 0xB5C
        m_vecLastOrigin: [0xC]u8, // 0xB60
        m_flAwakeTime: [0x4]u8, // 0xB6C
        m_flLastOriginChangeTime: [0x8]u8, // 0xB70
        m_strOriginClassName: [0x8]u8, // 0xB78
        m_strSourceClassName: [0x8]u8, // 0xB80
        m_bHasBeenPhysgunned: [0x1]u8, // 0xB88
        m_bAllowStretch: [0x3]u8, // 0xB89
        m_flBlendWeight: [0x4]u8, // 0xB8C
        m_flDefaultFadeScale: [0x8]u8, // 0xB90
        m_ragdollMins: [0x18]u8, // 0xB98
        m_ragdollMaxs: [0x18]u8, // 0xBB0
        m_bShouldDeleteActivationRecord: [0x18]u8, // 0xBC8
        m_vecNavObstacles: [0x20]u8, // 0xBE0
    };
    pub const CScriptComponent = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_scriptClassName: [0x8]u8, // 0x30
    };
    pub const CFuncTrain = extern struct {
        pad_0: [0x8F8]u8, // 0x0
        m_hCurrentTarget: [0x4]u8, // 0x8F8
        m_activated: [0x4]u8, // 0x8FC
        m_hEnemy: [0x4]u8, // 0x900
        m_flBlockDamage: [0x4]u8, // 0x904
        m_flNextBlockTime: [0x8]u8, // 0x908
        m_iszLastTarget: [0x8]u8, // 0x910
        m_flSpeed: [0x8]u8, // 0x918
    };
    pub const CAI_ChangeHintGroup = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_iSearchType: [0x8]u8, // 0x4A8
        m_strSearchName: [0x8]u8, // 0x4B0
        m_strNewHintGroup: [0x8]u8, // 0x4B8
        m_flRadius: [0x8]u8, // 0x4C0
    };
    pub const CCSPlayer_BuyServices = extern struct {
        pad_0: [0xD0]u8, // 0x0
        m_vecSellbackPurchaseEntries: [0x88]u8, // 0xD0
    };
    pub const CWeaponAug = extern struct {
        pad_0: [0x12A0]u8, // 0x0
    };
    pub const CPhysHinge = extern struct {
        pad_0: [0x510]u8, // 0x0
        m_soundInfo: [0x98]u8, // 0x510
        m_NotifyMinLimitReached: [0x18]u8, // 0x5A8
        m_NotifyMaxLimitReached: [0x18]u8, // 0x5C0
        m_bAtMinLimit: [0x1]u8, // 0x5D8
        m_bAtMaxLimit: [0x3]u8, // 0x5D9
        m_hinge: [0x40]u8, // 0x5DC
        m_hingeFriction: [0x4]u8, // 0x61C
        m_systemLoadScale: [0x4]u8, // 0x620
        m_bIsAxisLocal: [0x4]u8, // 0x624
        m_flMinRotation: [0x4]u8, // 0x628
        m_flMaxRotation: [0x4]u8, // 0x62C
        m_flInitialRotation: [0x4]u8, // 0x630
        m_flMotorFrequency: [0x4]u8, // 0x634
        m_flMotorDampingRatio: [0x4]u8, // 0x638
        m_flAngleSpeed: [0x4]u8, // 0x63C
        m_flAngleSpeedThreshold: [0x4]u8, // 0x640
        m_flLimitsDebugVisRotation: [0x4]u8, // 0x644
        m_OnStartMoving: [0x18]u8, // 0x648
        m_OnStopMoving: [0x18]u8, // 0x660
    };
    pub const CBuyZone = extern struct {
        pad_0: [0x9C8]u8, // 0x0
        m_LegacyTeamNum: [0x8]u8, // 0x9C8
    };
    pub const CInfoChoreoAnchor = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_vecTargetEntries: [0x18]u8, // 0x4A8
        m_vecTargetWarps: [0x18]u8, // 0x4C0
    };
    pub const CWeaponSSG08 = extern struct {
        pad_0: [0x12A0]u8, // 0x0
    };
    pub const CInfoWorldLayer = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_pOutputOnEntitiesSpawned: [0x18]u8, // 0x4A8
        m_worldName: [0x8]u8, // 0x4C0
        m_layerName: [0x8]u8, // 0x4C8
        m_bWorldLayerVisible: [0x1]u8, // 0x4D0
        m_bEntitiesSpawned: [0x1]u8, // 0x4D1
        m_bCreateAsChildSpawnGroup: [0x2]u8, // 0x4D2
        m_hLayerSpawnGroup: [0x4]u8, // 0x4D4
    };
    pub const CBodyComponentBaseModelEntity = extern struct {
        pad_0: [0x4E0]u8, // 0x0
    };
    pub const CLogicProximity = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CPointGiveAmmo = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_pActivator: [0x8]u8, // 0x4A8
    };
    pub const CCSGO_EndOfMatchLineupStart = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const FilterDamageType = extern struct {
        pad_0: [0x4E0]u8, // 0x0
        m_iDamageType: [0x8]u8, // 0x4E0
    };
    pub const CPointCamera = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_FOV: [0x4]u8, // 0x4A8
        m_Resolution: [0x4]u8, // 0x4AC
        m_bFogEnable: [0x4]u8, // 0x4B0
        m_FogColor: [0x4]u8, // 0x4B4
        m_flFogStart: [0x4]u8, // 0x4B8
        m_flFogEnd: [0x4]u8, // 0x4BC
        m_flFogMaxDensity: [0x4]u8, // 0x4C0
        m_bActive: [0x1]u8, // 0x4C4
        m_bUseScreenAspectRatio: [0x3]u8, // 0x4C5
        m_flAspectRatio: [0x4]u8, // 0x4C8
        m_bNoSky: [0x4]u8, // 0x4CC
        m_fBrightness: [0x4]u8, // 0x4D0
        m_flZFar: [0x4]u8, // 0x4D4
        m_flZNear: [0x4]u8, // 0x4D8
        m_bCanHLTVUse: [0x1]u8, // 0x4DC
        m_bAlignWithParent: [0x1]u8, // 0x4DD
        m_bDofEnabled: [0x2]u8, // 0x4DE
        m_flDofNearBlurry: [0x4]u8, // 0x4E0
        m_flDofNearCrisp: [0x4]u8, // 0x4E4
        m_flDofFarCrisp: [0x4]u8, // 0x4E8
        m_flDofFarBlurry: [0x4]u8, // 0x4EC
        m_flDofTiltToGround: [0x4]u8, // 0x4F0
        m_TargetFOV: [0x4]u8, // 0x4F4
        m_DegreesPerSecond: [0x4]u8, // 0x4F8
        m_bIsOn: [0x4]u8, // 0x4FC
        m_pNext: [0x8]u8, // 0x500
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
        pad_0: [0x4E0]u8, // 0x0
        m_flRadius: [0x8]u8, // 0x4E0
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
        m_reloadStage: [0x338]u8, // 0x288
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
        m_iEffectName: [0x4]u8, // 0x6C
    };
    pub const CEntityDissolve = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_flFadeInStart: [0x4]u8, // 0x850
        m_flFadeInLength: [0x4]u8, // 0x854
        m_flFadeOutModelStart: [0x4]u8, // 0x858
        m_flFadeOutModelLength: [0x4]u8, // 0x85C
        m_flFadeOutStart: [0x4]u8, // 0x860
        m_flFadeOutLength: [0x4]u8, // 0x864
        m_flStartTime: [0x4]u8, // 0x868
        m_nDissolveType: [0x4]u8, // 0x86C
        m_vDissolverOrigin: [0xC]u8, // 0x870
        m_nMagnitude: [0x4]u8, // 0x87C
    };
    pub const CCSGameRules = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_bFreezePeriod: [0x1]u8, // 0xD8
        m_bWarmupPeriod: [0x3]u8, // 0xD9
        m_fWarmupPeriodEnd: [0x4]u8, // 0xDC
        m_fWarmupPeriodStart: [0x4]u8, // 0xE0
        m_bTerroristTimeOutActive: [0x1]u8, // 0xE4
        m_bCTTimeOutActive: [0x3]u8, // 0xE5
        m_flTerroristTimeOutRemaining: [0x4]u8, // 0xE8
        m_flCTTimeOutRemaining: [0x4]u8, // 0xEC
        m_nTerroristTimeOuts: [0x4]u8, // 0xF0
        m_nCTTimeOuts: [0x4]u8, // 0xF4
        m_bTechnicalTimeOut: [0x1]u8, // 0xF8
        m_bMatchWaitingForResume: [0x3]u8, // 0xF9
        m_iFreezeTime: [0x4]u8, // 0xFC
        m_iRoundTime: [0x4]u8, // 0x100
        m_fMatchStartTime: [0x4]u8, // 0x104
        m_fRoundStartTime: [0x4]u8, // 0x108
        m_flRestartRoundTime: [0x4]u8, // 0x10C
        m_bGameRestart: [0x4]u8, // 0x110
        m_flGameStartTime: [0x4]u8, // 0x114
        m_timeUntilNextPhaseStarts: [0x4]u8, // 0x118
        m_gamePhase: [0x4]u8, // 0x11C
        m_totalRoundsPlayed: [0x4]u8, // 0x120
        m_nRoundsPlayedThisPhase: [0x4]u8, // 0x124
        m_nOvertimePlaying: [0x4]u8, // 0x128
        m_iHostagesRemaining: [0x4]u8, // 0x12C
        m_bAnyHostageReached: [0x1]u8, // 0x130
        m_bMapHasBombTarget: [0x1]u8, // 0x131
        m_bMapHasRescueZone: [0x1]u8, // 0x132
        m_bMapHasBuyZone: [0x1]u8, // 0x133
        m_bIsQueuedMatchmaking: [0x4]u8, // 0x134
        m_nQueuedMatchmakingMode: [0x4]u8, // 0x138
        m_bIsValveDS: [0x1]u8, // 0x13C
        m_bLogoMap: [0x1]u8, // 0x13D
        m_bPlayAllStepSoundsOnServer: [0x2]u8, // 0x13E
        m_iSpectatorSlotCount: [0x4]u8, // 0x140
        m_MatchDevice: [0x4]u8, // 0x144
        m_bHasMatchStarted: [0x4]u8, // 0x148
        m_nNextMapInMapgroup: [0x4]u8, // 0x14C
        m_szTournamentEventName: [0x200]u8, // 0x150
        m_szTournamentEventStage: [0x200]u8, // 0x350
        m_szMatchStatTxt: [0x200]u8, // 0x550
        m_szTournamentPredictionsTxt: [0x200]u8, // 0x750
        m_nTournamentPredictionsPct: [0x4]u8, // 0x950
        m_flCMMItemDropRevealStartTime: [0x4]u8, // 0x954
        m_flCMMItemDropRevealEndTime: [0x4]u8, // 0x958
        m_bIsDroppingItems: [0x1]u8, // 0x95C
        m_bIsQuestEligible: [0x1]u8, // 0x95D
        m_bIsHltvActive: [0x1]u8, // 0x95E
        m_bBombPlanted: [0x1]u8, // 0x95F
        m_arrProhibitedItemIndices: [0xC8]u8, // 0x960
        m_arrTournamentActiveCasterAccounts: [0x10]u8, // 0xA28
        m_numBestOfMaps: [0x4]u8, // 0xA38
        m_nHalloweenMaskListSeed: [0x4]u8, // 0xA3C
        m_bBombDropped: [0x4]u8, // 0xA40
        m_iRoundWinStatus: [0x4]u8, // 0xA44
        m_eRoundWinReason: [0x4]u8, // 0xA48
        m_bTCantBuy: [0x1]u8, // 0xA4C
        m_bCTCantBuy: [0x3]u8, // 0xA4D
        m_iMatchStats_RoundResults: [0x78]u8, // 0xA50
        m_iMatchStats_PlayersAlive_CT: [0x78]u8, // 0xAC8
        m_iMatchStats_PlayersAlive_T: [0x78]u8, // 0xB40
        m_TeamRespawnWaveTimes: [0x80]u8, // 0xBB8
        m_nActiveMutators: [0x4]u8, // 0xC38
        m_flNextRespawnWave: [0x80]u8, // 0xC3C
        m_vMinimapMins: [0xC]u8, // 0xCBC
        m_vMinimapMaxs: [0xC]u8, // 0xCC8
        m_MinimapVerticalSectionHeights: [0x24]u8, // 0xCD4
        m_ullLocalMatchID: [0x8]u8, // 0xCF8
        m_nEndMatchMapGroupVoteTypes: [0x28]u8, // 0xD00
        m_nEndMatchMapGroupVoteOptions: [0x28]u8, // 0xD28
        m_nEndMatchMapVoteWinner: [0x4]u8, // 0xD50
        m_iNumConsecutiveCTLoses: [0x4]u8, // 0xD54
        m_iNumConsecutiveTerroristLoses: [0x20]u8, // 0xD58
        m_bHasHostageBeenTouched: [0x4]u8, // 0xD78
        m_flIntermissionStartTime: [0x4]u8, // 0xD7C
        m_flIntermissionEndTime: [0x4]u8, // 0xD80
        m_bLevelInitialized: [0x4]u8, // 0xD84
        m_iTotalRoundsPlayed: [0x4]u8, // 0xD88
        m_iUnBalancedRounds: [0x4]u8, // 0xD8C
        m_endMatchOnRoundReset: [0x1]u8, // 0xD90
        m_endMatchOnThink: [0x3]u8, // 0xD91
        m_iNumTerrorist: [0x4]u8, // 0xD94
        m_iNumCT: [0x4]u8, // 0xD98
        m_iNumSpawnableTerrorist: [0x4]u8, // 0xD9C
        m_iNumSpawnableCT: [0x8]u8, // 0xDA0
        m_arrSelectedHostageSpawnIndices: [0x18]u8, // 0xDA8
        m_nSpawnPointsRandomSeed: [0x4]u8, // 0xDC0
        m_bFirstConnected: [0x1]u8, // 0xDC4
        m_bCompleteReset: [0x1]u8, // 0xDC5
        m_bPickNewTeamsOnReset: [0x1]u8, // 0xDC6
        m_bScrambleTeamsOnRestart: [0x1]u8, // 0xDC7
        m_bSwapTeamsOnRestart: [0x8]u8, // 0xDC8
        m_nEndMatchTiedVotes: [0x1C]u8, // 0xDD0
        m_bNeedToAskPlayersForContinueVote: [0x4]u8, // 0xDEC
        m_numQueuedMatchmakingAccounts: [0x4]u8, // 0xDF0
        m_fAvgPlayerRank: [0x4]u8, // 0xDF4
        m_pQueuedMatchmakingReservationString: [0x8]u8, // 0xDF8
        m_numTotalTournamentDrops: [0x4]u8, // 0xE00
        m_numSpectatorsCountMax: [0x4]u8, // 0xE04
        m_numSpectatorsCountMaxTV: [0x4]u8, // 0xE08
        m_numSpectatorsCountMaxLnk: [0xC]u8, // 0xE0C
        m_bQueuedMatchmakingReportedRoundStatsPendingSend: [0x4]u8, // 0xE18
        m_nCTsAliveAtFreezetimeEnd: [0x4]u8, // 0xE1C
        m_nTerroristsAliveAtFreezetimeEnd: [0x4]u8, // 0xE20
        m_bForceTeamChangeSilent: [0x1]u8, // 0xE24
        m_bLoadingRoundBackupData: [0x33]u8, // 0xE25
        m_nMatchInfoShowType: [0x4]u8, // 0xE58
        m_flMatchInfoDecidedTime: [0x1C]u8, // 0xE5C
        mTeamDMLastWinningTeamNumber: [0x4]u8, // 0xE78
        mTeamDMLastThinkTime: [0x4]u8, // 0xE7C
        m_flTeamDMLastAnnouncementTime: [0x4]u8, // 0xE80
        m_iAccountTerrorist: [0x4]u8, // 0xE84
        m_iAccountCT: [0x4]u8, // 0xE88
        m_iSpawnPointCount_Terrorist: [0x4]u8, // 0xE8C
        m_iSpawnPointCount_CT: [0x4]u8, // 0xE90
        m_iMaxNumTerrorists: [0x4]u8, // 0xE94
        m_iMaxNumCTs: [0x4]u8, // 0xE98
        m_iLoserBonusMostRecentTeam: [0x4]u8, // 0xE9C
        m_tmNextPeriodicThink: [0x4]u8, // 0xEA0
        m_bVoiceWonMatchBragFired: [0x4]u8, // 0xEA4
        m_fWarmupNextChatNoticeTime: [0x8]u8, // 0xEA8
        m_iHostagesRescued: [0x4]u8, // 0xEB0
        m_iHostagesTouched: [0x4]u8, // 0xEB4
        m_flNextHostageAnnouncement: [0x4]u8, // 0xEB8
        m_bNoTerroristsKilled: [0x1]u8, // 0xEBC
        m_bNoCTsKilled: [0x1]u8, // 0xEBD
        m_bNoEnemiesKilled: [0x1]u8, // 0xEBE
        m_bCanDonateWeapons: [0x5]u8, // 0xEBF
        m_firstKillTime: [0x8]u8, // 0xEC4
        m_firstBloodTime: [0x1C]u8, // 0xECC
        m_hostageWasInjured: [0x1]u8, // 0xEE8
        m_hostageWasKilled: [0xF]u8, // 0xEE9
        m_bVoteCalled: [0x1]u8, // 0xEF8
        m_bServerVoteOnReset: [0x3]u8, // 0xEF9
        m_flVoteCheckThrottle: [0x4]u8, // 0xEFC
        m_bBuyTimeEnded: [0x4]u8, // 0xF00
        m_nLastFreezeEndBeep: [0x4]u8, // 0xF04
        m_bTargetBombed: [0x1]u8, // 0xF08
        m_bBombDefused: [0x1]u8, // 0xF09
        m_bMapHasBombZone: [0x4E]u8, // 0xF0A
        m_vecMainCTSpawnPos: [0x10]u8, // 0xF58
        m_CTSpawnPointsMasterList: [0x18]u8, // 0xF68
        m_TerroristSpawnPointsMasterList: [0x18]u8, // 0xF80
        m_bRespawningAllRespawnablePlayers: [0x4]u8, // 0xF98
        m_iNextCTSpawnPoint: [0x4]u8, // 0xF9C
        m_flCTSpawnPointUsedTime: [0x4]u8, // 0xFA0
        m_iNextTerroristSpawnPoint: [0x4]u8, // 0xFA4
        m_flTerroristSpawnPointUsedTime: [0x8]u8, // 0xFA8
        m_CTSpawnPoints: [0x18]u8, // 0xFB0
        m_TerroristSpawnPoints: [0x18]u8, // 0xFC8
        m_bIsUnreservedGameServer: [0x4]u8, // 0xFE0
        m_fAutobalanceDisplayTime: [0x3C]u8, // 0xFE4
        m_bAllowWeaponSwitch: [0x1]u8, // 0x1020
        m_bRoundTimeWarningTriggered: [0x3]u8, // 0x1021
        m_phaseChangeAnnouncementTime: [0x4]u8, // 0x1024
        m_fNextUpdateTeamClanNamesTime: [0x4]u8, // 0x1028
        m_flLastThinkTime: [0x4]u8, // 0x102C
        m_fAccumulatedRoundOffDamage: [0x4]u8, // 0x1030
        m_nShorthandedBonusLastEvalRound: [0x4C]u8, // 0x1034
        m_nMatchAbortedEarlyReason: [0x4]u8, // 0x1080
        m_bHasTriggeredRoundStartMusic: [0x1]u8, // 0x1084
        m_bSwitchingTeamsAtRoundReset: [0x1B]u8, // 0x1085
        m_pGameModeRules: [0x8]u8, // 0x10A0
        m_BtGlobalBlackboard: [0x98]u8, // 0x10A8
        m_hPlayerResource: [0x8]u8, // 0x1140
        m_RetakeRules: [0x1F0]u8, // 0x1148
        m_arrTeamUniqueKillWeaponsMatch: [0x60]u8, // 0x1338
        m_bTeamLastKillUsedUniqueWeaponMatch: [0x28]u8, // 0x1398
        m_nMatchEndCount: [0x4]u8, // 0x13C0
        m_nTTeamIntroVariant: [0x4]u8, // 0x13C4
        m_nCTTeamIntroVariant: [0x4]u8, // 0x13C8
        m_bTeamIntroPeriod: [0x4]u8, // 0x13CC
        m_fTeamIntroPeriodEnd: [0x4]u8, // 0x13D0
        m_bPlayedTeamIntroVO: [0x4]u8, // 0x13D4
        m_iRoundEndWinnerTeam: [0x4]u8, // 0x13D8
        m_eRoundEndReason: [0x4]u8, // 0x13DC
        m_bRoundEndShowTimerDefend: [0x4]u8, // 0x13E0
        m_iRoundEndTimerTime: [0x4]u8, // 0x13E4
        m_sRoundEndFunFactToken: [0x8]u8, // 0x13E8
        m_iRoundEndFunFactPlayerSlot: [0x4]u8, // 0x13F0
        m_iRoundEndFunFactData1: [0x4]u8, // 0x13F4
        m_iRoundEndFunFactData2: [0x4]u8, // 0x13F8
        m_iRoundEndFunFactData3: [0x4]u8, // 0x13FC
        m_sRoundEndMessage: [0x8]u8, // 0x1400
        m_iRoundEndPlayerCount: [0x4]u8, // 0x1408
        m_bRoundEndNoMusic: [0x4]u8, // 0x140C
        m_iRoundEndLegacy: [0x4]u8, // 0x1410
        m_nRoundEndCount: [0x4]u8, // 0x1414
        m_iRoundStartRoundNumber: [0x4]u8, // 0x1418
        m_nRoundStartCount: [0x400C]u8, // 0x141C
        m_flLastPerfSampleTime: [0xC028]u8, // 0x5428
    };
    pub const CPulseCell_ApplyEntityFlags__CursorState_t = extern struct {
        m_hEntity: [0x4]u8, // 0x0
        m_uFlags: [0x4]u8, // 0x4
    };
    pub const CPulseCell_Outflow_CycleShuffled = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_Outputs: [0x18]u8, // 0x48
    };
    pub const CBaseCSGrenadeProjectile = extern struct {
        pad_0: [0xAD0]u8, // 0x0
        m_vInitialPosition: [0xC]u8, // 0xAD0
        m_vInitialVelocity: [0xC]u8, // 0xADC
        m_nBounces: [0x8]u8, // 0xAE8
        m_nExplodeEffectIndex: [0x8]u8, // 0xAF0
        m_nExplodeEffectTickBegin: [0x4]u8, // 0xAF8
        m_vecExplodeEffectOrigin: [0xC]u8, // 0xAFC
        m_flSpawnTime: [0x4]u8, // 0xB08
        m_unOGSExtraFlags: [0x1]u8, // 0xB0C
        m_bDetonationRecorded: [0x1]u8, // 0xB0D
        m_nItemIndex: [0x2]u8, // 0xB0E
        m_vecOriginalSpawnLocation: [0xC]u8, // 0xB10
        m_flLastBounceSoundTime: [0x4]u8, // 0xB1C
        m_vecGrenadeSpin: [0xC]u8, // 0xB20
        m_vecLastHitSurfaceNormal: [0xC]u8, // 0xB2C
        m_nTicksAtZeroVelocity: [0x4]u8, // 0xB38
        m_bHasEverHitEnemy: [0x4]u8, // 0xB3C
    };
    pub const CPhysConstraint = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_hJoint: [0x8]u8, // 0x4A8
        m_nameAttach1: [0x8]u8, // 0x4B0
        m_nameAttach2: [0x8]u8, // 0x4B8
        m_hAttach1: [0x4]u8, // 0x4C0
        m_hAttach2: [0x4]u8, // 0x4C4
        m_nameAttachment1: [0x8]u8, // 0x4C8
        m_nameAttachment2: [0x8]u8, // 0x4D0
        m_breakSound: [0x8]u8, // 0x4D8
        m_forceLimit: [0x4]u8, // 0x4E0
        m_torqueLimit: [0x4]u8, // 0x4E4
        m_minTeleportDistance: [0x4]u8, // 0x4E8
        m_bSnapObjectPositions: [0x1]u8, // 0x4EC
        m_bTreatEntity1AsInfiniteMass: [0x3]u8, // 0x4ED
        m_OnBreak: [0x18]u8, // 0x4F0
    };
    pub const CLogicAchievement = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_bDisabled: [0x8]u8, // 0x4A8
        m_iszAchievementEventID: [0x8]u8, // 0x4B0
        m_OnFired: [0x18]u8, // 0x4B8
    };
    pub const CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t = extern struct {
        pItem: [0x8]u8, // 0x0
        team: [0x2]u8, // 0x8
        slot: [0x6]u8, // 0xA
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
        m_flMinRoughness: [0x10]u8, // 0x1A8
        m_bPvsModifyEntity: [0x8]u8, // 0x1B8
    };
    pub const CCSWeaponBase = extern struct {
        pad_0: [0xEF8]u8, // 0x0
        m_bRemoveable: [0x1]u8, // 0xEF8
        m_bPlayerAmmoStockOnPickup: [0x1]u8, // 0xEF9
        m_bRequireUseToTouch: [0x2]u8, // 0xEFA
        m_iWeaponGameplayAnimState: [0x4]u8, // 0xEFC
        m_flWeaponGameplayAnimStateTimestamp: [0x4]u8, // 0xF00
        m_flInspectCancelCompleteTime: [0x4]u8, // 0xF04
        m_bInspectPending: [0x1]u8, // 0xF08
        m_bInspectShouldLoop: [0x2B]u8, // 0xF09
        m_nLastEmptySoundCmdNum: [0x1C]u8, // 0xF34
        m_bFireOnEmpty: [0x8]u8, // 0xF50
        m_OnPlayerPickup: [0x18]u8, // 0xF58
        m_weaponMode: [0x4]u8, // 0xF70
        m_flTurningInaccuracyDelta: [0x4]u8, // 0xF74
        m_vecTurningInaccuracyEyeDirLast: [0xC]u8, // 0xF78
        m_flTurningInaccuracy: [0x4]u8, // 0xF84
        m_fAccuracyPenalty: [0x4]u8, // 0xF88
        m_flLastAccuracyUpdateTime: [0x4]u8, // 0xF8C
        m_fAccuracySmoothedForZoom: [0x4]u8, // 0xF90
        m_iRecoilIndex: [0x4]u8, // 0xF94
        m_flRecoilIndex: [0x4]u8, // 0xF98
        m_bBurstMode: [0x4]u8, // 0xF9C
        m_nPostponeFireReadyTicks: [0x4]u8, // 0xFA0
        m_flPostponeFireReadyFrac: [0x4]u8, // 0xFA4
        m_bInReload: [0x4]u8, // 0xFA8
        m_nDeployTick: [0x4]u8, // 0xFAC
        m_flAttackHoldStartTime: [0x4]u8, // 0xFB0
        m_flDroppedAtTime: [0x8]u8, // 0xFB4
        m_bIsHauledBack: [0x1]u8, // 0xFBC
        m_bSilencerOn: [0x3]u8, // 0xFBD
        m_flTimeSilencerSwitchComplete: [0x4]u8, // 0xFC0
        m_bIsInStealthReload: [0x1]u8, // 0xFC4
        m_bInSilentReloadSection: [0x1]u8, // 0xFC5
        m_bSilentReloadStatPending: [0x2]u8, // 0xFC6
        m_flStealthReloadHoldStartTime: [0x4]u8, // 0xFC8
        m_bReloadHeldSinceStart: [0x4]u8, // 0xFCC
        m_flWeaponActionPlaybackRate: [0x4]u8, // 0xFD0
        m_iOriginalTeamNumber: [0x4]u8, // 0xFD4
        m_iMostRecentTeamNumber: [0x4]u8, // 0xFD8
        m_bDroppedNearBuyZone: [0x4]u8, // 0xFDC
        m_flNextAttackRenderTimeOffset: [0x18]u8, // 0xFE0
        m_bCanBePickedUp: [0x1]u8, // 0xFF8
        m_bUseCanOverrideNextOwnerTouchTime: [0x3]u8, // 0xFF9
        m_nextOwnerTouchTime: [0x4]u8, // 0xFFC
        m_nextPrevOwnerTouchTime: [0x8]u8, // 0x1000
        m_nextPrevOwnerUseTime: [0x4]u8, // 0x1008
        m_hPrevOwner: [0x4]u8, // 0x100C
        m_nDropTick: [0x4]u8, // 0x1010
        m_bWasActiveWeaponWhenDropped: [0x20]u8, // 0x1014
        m_donated: [0x4]u8, // 0x1034
        m_fLastShotTime: [0x4]u8, // 0x1038
        m_bWasOwnedByCT: [0x1]u8, // 0x103C
        m_bWasOwnedByTerrorist: [0x3]u8, // 0x103D
        m_numRemoveUnownedWeaponThink: [0x60]u8, // 0x1040
        m_IronSightController: [0x18]u8, // 0x10A0
        m_iIronSightMode: [0x4]u8, // 0x10B8
        m_flLastLOSTraceFailureTime: [0x4]u8, // 0x10BC
        m_flWatTickOffset: [0x10]u8, // 0x10C0
        m_flLastShakeTime: [0x1B0]u8, // 0x10D0
    };
    pub const CPointClientUIDialog = extern struct {
        pad_0: [0x9B0]u8, // 0x0
        m_hActivator: [0x4]u8, // 0x9B0
        m_bStartEnabled: [0x4]u8, // 0x9B4
    };
    pub const CLogicLineToEntity = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_Line: [0x28]u8, // 0x4A8
        m_SourceName: [0x8]u8, // 0x4D0
        m_StartEntity: [0x4]u8, // 0x4D8
        m_EndEntity: [0x4]u8, // 0x4DC
    };
    pub const CSoundAreaEntitySphere = extern struct {
        pad_0: [0x4C8]u8, // 0x0
        m_flRadius: [0x8]u8, // 0x4C8
    };
    pub const CCSPlayer_ActionTrackingServices = extern struct {
        pad_0: [0x1F8]u8, // 0x0
        m_hLastWeaponBeforeC4AutoSwitch: [0x2C]u8, // 0x1F8
        m_bIsRescuing: [0x4]u8, // 0x224
        m_weaponPurchasesThisMatch: [0x70]u8, // 0x228
        m_weaponPurchasesThisRound: [0x70]u8, // 0x298
        m_weaponCarryOverIntoThisRound: [0x78]u8, // 0x308
    };
    pub const CBrokenGlassTrap = extern struct {
        pad_0: [0x870]u8, // 0x0
    };
    pub const CPhysicalButton = extern struct {
        pad_0: [0x9D0]u8, // 0x0
    };
    pub const CInfoSpawnGroupLoadUnload = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_OnSpawnGroupLoadStarted: [0x18]u8, // 0x4A8
        m_OnSpawnGroupLoadFinished: [0x18]u8, // 0x4C0
        m_OnSpawnGroupUnloadStarted: [0x18]u8, // 0x4D8
        m_OnSpawnGroupUnloadFinished: [0x18]u8, // 0x4F0
        m_iszSpawnGroupName: [0x8]u8, // 0x508
        m_iszSpawnGroupFilterName: [0x8]u8, // 0x510
        m_iszLandmarkName: [0x8]u8, // 0x518
        m_sFixedSpawnGroupName: [0x8]u8, // 0x520
        m_flTimeoutInterval: [0x4]u8, // 0x528
        m_bAutoActivate: [0x1]u8, // 0x52C
        m_bUnloadingStarted: [0x1]u8, // 0x52D
        m_bQueueActiveSpawnGroupChange: [0x1]u8, // 0x52E
        m_bQueueFinishLoading: [0x51]u8, // 0x52F
    };
    pub const CSoundAreaEntityOrientedBox = extern struct {
        pad_0: [0x4C8]u8, // 0x0
        m_vMin: [0xC]u8, // 0x4C8
        m_vMax: [0xC]u8, // 0x4D4
    };
    pub const CCSObserver_MovementServices = extern struct {
        pad_0: [0x258]u8, // 0x0
    };
    pub const CPulseCell_Outflow_ListenForAnimgraphTag = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_OnStart: [0x48]u8, // 0xD8
        m_OnEnd: [0x48]u8, // 0x120
        m_TagName: [0x8]u8, // 0x168
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
    pub const CDecoyGrenade = extern struct {
        pad_0: [0x12C0]u8, // 0x0
    };
    pub const CEconItemView = extern struct {
        pad_0: [0x38]u8, // 0x0
        m_iItemDefinitionIndex: [0x4]u8, // 0x38
        m_iEntityQuality: [0x4]u8, // 0x3C
        m_iEntityLevel: [0x8]u8, // 0x40
        m_iItemID: [0x8]u8, // 0x48
        m_iItemIDHigh: [0x4]u8, // 0x50
        m_iItemIDLow: [0x4]u8, // 0x54
        m_iAccountID: [0x4]u8, // 0x58
        m_iInventoryPosition: [0xC]u8, // 0x5C
        m_bInitialized: [0x8]u8, // 0x68
        m_AttributeList: [0x78]u8, // 0x70
        m_NetworkedDynamicAttributes: [0x78]u8, // 0xE8
        m_szCustomName: [0xA1]u8, // 0x160
        m_szCustomNameOverride: [0xA1]u8, // 0x201
        m_szCustomNameOverride2: [0xA1]u8, // 0x2A2
        m_szCustomNameOverride3: [0xA5]u8, // 0x343
    };
    pub const CIncendiaryGrenade = extern struct {
        pad_0: [0x12C0]u8, // 0x0
    };
    pub const CBaseDMStart = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_Master: [0x8]u8, // 0x4A8
    };
    pub const CBaseModelEntity = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_CRenderComponent: [0x8]u8, // 0x4A8
        m_CHitboxComponent: [0x18]u8, // 0x4B0
        m_pChoreoComponent: [0x8]u8, // 0x4C8
        m_nDestructiblePartInitialStateDestructed0: [0x4]u8, // 0x4D0
        m_nDestructiblePartInitialStateDestructed1: [0x4]u8, // 0x4D4
        m_nDestructiblePartInitialStateDestructed2: [0x4]u8, // 0x4D8
        m_nDestructiblePartInitialStateDestructed3: [0x4]u8, // 0x4DC
        m_nDestructiblePartInitialStateDestructed4: [0x4]u8, // 0x4E0
        m_nDestructiblePartInitialStateDestructed0_PartIndex: [0x4]u8, // 0x4E4
        m_nDestructiblePartInitialStateDestructed1_PartIndex: [0x4]u8, // 0x4E8
        m_nDestructiblePartInitialStateDestructed2_PartIndex: [0x4]u8, // 0x4EC
        m_nDestructiblePartInitialStateDestructed3_PartIndex: [0x4]u8, // 0x4F0
        m_nDestructiblePartInitialStateDestructed4_PartIndex: [0x4]u8, // 0x4F4
        m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces: [0x1]u8, // 0x4F8
        m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces: [0x1]u8, // 0x4F9
        m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces: [0x1]u8, // 0x4FA
        m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces: [0x1]u8, // 0x4FB
        m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces: [0x4]u8, // 0x4FC
        m_pDestructiblePartsSystemComponent: [0x8]u8, // 0x500
        m_OnDestructibleHitGroupDamageLevelChanged: [0x28]u8, // 0x508
        m_flDissolveStartTime: [0x8]u8, // 0x530
        m_OnIgnite: [0x18]u8, // 0x538
        m_nRenderMode: [0x1]u8, // 0x550
        m_nRenderFX: [0x1]u8, // 0x551
        m_bAllowFadeInView: [0x1E]u8, // 0x552
        m_clrRender: [0x8]u8, // 0x570
        m_vecRenderAttributes: [0x68]u8, // 0x578
        m_bRenderToCubemaps: [0x1]u8, // 0x5E0
        m_bExpandRenderBoundsToIncludeCloth: [0x1]u8, // 0x5E1
        m_bNoInterpolate: [0x6]u8, // 0x5E2
        m_Collision: [0xB8]u8, // 0x5E8
        m_Glow: [0x58]u8, // 0x6A0
        m_flGlowBackfaceMult: [0x4]u8, // 0x6F8
        m_fadeMinDist: [0x4]u8, // 0x6FC
        m_fadeMaxDist: [0x4]u8, // 0x700
        m_flFadeScale: [0x4]u8, // 0x704
        m_flShadowStrength: [0x4]u8, // 0x708
        m_nObjectCulling: [0x4]u8, // 0x70C
        m_bodyGroupTotalRequestCount: [0x8]u8, // 0x710
        m_bodyGroupRequests: [0xD8]u8, // 0x718
        m_bodyGroupChoices: [0x28]u8, // 0x7F0
        m_vecViewOffset: [0x30]u8, // 0x818
        m_bvDisabledHitGroups: [0x8]u8, // 0x848
    };
    pub const fogplayerparams_t = extern struct {
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
    pub const CInstancedSceneEntity = extern struct {
        pad_0: [0x800]u8, // 0x0
        m_hOwner: [0x4]u8, // 0x800
        m_bHadOwner: [0x4]u8, // 0x804
        m_flPostSpeakDelay: [0x4]u8, // 0x808
        m_flPreDelay: [0x4]u8, // 0x80C
        m_bIsBackground: [0x4]u8, // 0x810
        m_hTarget: [0x4]u8, // 0x814
    };
    pub const CPulseCell_BaseValue = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CCitadelSoundOpvarSetOBB = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_iszStackName: [0x8]u8, // 0x4A8
        m_iszOperatorName: [0x8]u8, // 0x4B0
        m_iszOpvarName: [0x8]u8, // 0x4B8
        m_vDistanceInnerMins: [0xC]u8, // 0x4C0
        m_vDistanceInnerMaxs: [0xC]u8, // 0x4CC
        m_vDistanceOuterMins: [0xC]u8, // 0x4D8
        m_vDistanceOuterMaxs: [0xC]u8, // 0x4E4
        m_nAABBDirection: [0x8]u8, // 0x4F0
    };
    pub const CSoundEventParameter = extern struct {
        pad_0: [0x4C0]u8, // 0x0
        m_iszParamName: [0x8]u8, // 0x4C0
        m_flFloatValue: [0x8]u8, // 0x4C8
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
    pub const CRotButton = extern struct {
        pad_0: [0x9D0]u8, // 0x0
    };
    pub const CEnvViewPunch = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_flRadius: [0x4]u8, // 0x4A8
        m_angViewPunch: [0xC]u8, // 0x4AC
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
    pub const CItemKevlar = extern struct {
        pad_0: [0xAE0]u8, // 0x0
    };
    pub const CFuncShatterglass = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_matPanelTransform: [0x30]u8, // 0x850
        m_matPanelTransformWsTemp: [0x30]u8, // 0x880
        m_vecShatterGlassShards: [0x18]u8, // 0x8B0
        m_PanelSize: [0x8]u8, // 0x8C8
        m_flLastShatterSoundEmitTime: [0x4]u8, // 0x8D0
        m_flLastCleanupTime: [0x4]u8, // 0x8D4
        m_flInitAtTime: [0x4]u8, // 0x8D8
        m_flGlassThickness: [0x4]u8, // 0x8DC
        m_flSpawnInvulnerability: [0x4]u8, // 0x8E0
        m_bBreakSilent: [0x1]u8, // 0x8E4
        m_bBreakShardless: [0x1]u8, // 0x8E5
        m_bBroken: [0x1]u8, // 0x8E6
        m_bGlassNavIgnore: [0x1]u8, // 0x8E7
        m_bGlassInFrame: [0x1]u8, // 0x8E8
        m_bStartBroken: [0x1]u8, // 0x8E9
        m_iInitialDamageType: [0x6]u8, // 0x8EA
        m_szDamagePositioningEntityName01: [0x8]u8, // 0x8F0
        m_szDamagePositioningEntityName02: [0x8]u8, // 0x8F8
        m_szDamagePositioningEntityName03: [0x8]u8, // 0x900
        m_szDamagePositioningEntityName04: [0x8]u8, // 0x908
        m_vInitialDamagePositions: [0x18]u8, // 0x910
        m_vExtraDamagePositions: [0x18]u8, // 0x928
        m_vInitialPanelVertices: [0x18]u8, // 0x940
        m_OnBroken: [0x18]u8, // 0x958
        m_iSurfaceType: [0x8]u8, // 0x970
        m_hMaterialDamageBase: [0x8]u8, // 0x978
    };
    pub const CNavWalkable = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CPlantedC4 = extern struct {
        pad_0: [0xA98]u8, // 0x0
        m_bBombTicking: [0x4]u8, // 0xA98
        m_flC4Blow: [0x4]u8, // 0xA9C
        m_nBombSite: [0x4]u8, // 0xAA0
        m_nSourceSoundscapeHash: [0x4]u8, // 0xAA4
        m_bAbortDetonationBecauseWorldIsFrozen: [0x8]u8, // 0xAA8
        m_AttributeManager: [0x438]u8, // 0xAB0
        m_OnBombDefused: [0x18]u8, // 0xEE8
        m_OnBombBeginDefuse: [0x18]u8, // 0xF00
        m_OnBombDefuseAborted: [0x18]u8, // 0xF18
        m_bCannotBeDefused: [0x8]u8, // 0xF30
        m_entitySpottedState: [0x18]u8, // 0xF38
        m_nSpotRules: [0x4]u8, // 0xF50
        m_bHasExploded: [0x1]u8, // 0xF54
        m_bBombDefused: [0x1]u8, // 0xF55
        m_bTrainingPlacedByPlayer: [0x2]u8, // 0xF56
        m_flTimerLength: [0x4]u8, // 0xF58
        m_bBeingDefused: [0x8]u8, // 0xF5C
        m_fLastDefuseTime: [0x8]u8, // 0xF64
        m_flDefuseLength: [0x4]u8, // 0xF6C
        m_flDefuseCountDown: [0x4]u8, // 0xF70
        m_hBombDefuser: [0x4]u8, // 0xF74
        m_iProgressBarTime: [0x4]u8, // 0xF78
        m_bVoiceAlertFired: [0x1]u8, // 0xF7C
        m_bVoiceAlertPlayed: [0x7]u8, // 0xF7D
        m_flNextBotBeepTime: [0x8]u8, // 0xF84
        m_angCatchUpToPlayerEye: [0xC]u8, // 0xF8C
        m_flLastSpinDetectionTime: [0x8]u8, // 0xF98
    };
    pub const CEnvSoundscapeProxyAlias_snd_soundscape_proxy = extern struct {
        pad_0: [0x540]u8, // 0x0
    };
    pub const CVoteController = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_iActiveIssueIndex: [0x4]u8, // 0x4A8
        m_iOnlyTeamToVote: [0x4]u8, // 0x4AC
        m_nVoteOptionCount: [0x14]u8, // 0x4B0
        m_nPotentialVotes: [0x4]u8, // 0x4C4
        m_bIsYesNoVote: [0x8]u8, // 0x4C8
        m_acceptingVotesTimer: [0x18]u8, // 0x4D0
        m_executeCommandTimer: [0x18]u8, // 0x4E8
        m_resetVoteTimer: [0x18]u8, // 0x500
        m_nVotesCast: [0x100]u8, // 0x518
        m_playerHoldingVote: [0x4]u8, // 0x618
        m_playerOverrideForVote: [0x4]u8, // 0x61C
        m_nHighestCountIndex: [0x8]u8, // 0x620
        m_potentialIssues: [0x18]u8, // 0x628
        m_VoteOptions: [0x18]u8, // 0x640
    };
    pub const CPulseCell_Inflow_Yield = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_UnyieldResume: [0x48]u8, // 0xD8
    };
    pub const CPhysImpact = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_damage: [0x4]u8, // 0x4A8
        m_distance: [0x4]u8, // 0x4AC
        m_directionEntityName: [0x8]u8, // 0x4B0
    };
    pub const CBaseEntity = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_CBodyComponent: [0x8]u8, // 0x30
        m_NetworkTransmitComponent: [0x210]u8, // 0x38
        m_aThinkFunctions: [0x18]u8, // 0x248
        m_iCurrentThinkContext: [0x4]u8, // 0x260
        m_nLastThinkTick: [0x4]u8, // 0x264
        m_bDisabledContextThinks: [0x10]u8, // 0x268
        m_isSteadyState: [0x8]u8, // 0x278
        m_lastNetworkChange: [0x8]u8, // 0x280
        m_think: [0x8]u8, // 0x288
        m_ResponseContexts: [0x18]u8, // 0x290
        m_iszResponseContext: [0x8]u8, // 0x2A8
        m_pfnTouch: [0x8]u8, // 0x2B0
        m_pfnUse: [0x8]u8, // 0x2B8
        m_pfnBlocked: [0x8]u8, // 0x2C0
        m_pfnMoveDone: [0x8]u8, // 0x2C8
        m_iHealth: [0x4]u8, // 0x2D0
        m_iMaxHealth: [0x4]u8, // 0x2D4
        m_lifeState: [0x4]u8, // 0x2D8
        m_flDamageAccumulator: [0x4]u8, // 0x2DC
        m_bTakesDamage: [0x8]u8, // 0x2E0
        m_nTakeDamageFlags: [0x8]u8, // 0x2E8
        m_nPlatformType: [0x2]u8, // 0x2F0
        m_MoveCollide: [0x1]u8, // 0x2F2
        m_MoveType: [0x1]u8, // 0x2F3
        m_nPreviouslySetMoveType: [0x1]u8, // 0x2F4
        m_nActualMoveType: [0x1]u8, // 0x2F5
        m_nWaterTouch: [0x1]u8, // 0x2F6
        m_nSlimeTouch: [0x1]u8, // 0x2F7
        m_bRestoreInHierarchy: [0x8]u8, // 0x2F8
        m_target: [0x8]u8, // 0x300
        m_hDamageFilter: [0x8]u8, // 0x308
        m_iszDamageFilterName: [0x8]u8, // 0x310
        m_flMoveDoneTime: [0x4]u8, // 0x318
        m_nSubclassID: [0xC]u8, // 0x31C
        m_flAnimTime: [0x4]u8, // 0x328
        m_flSimulationTime: [0x4]u8, // 0x32C
        m_flCreateTime: [0x4]u8, // 0x330
        m_bClientSideRagdoll: [0x1]u8, // 0x334
        m_ubInterpolationFrame: [0x3]u8, // 0x335
        m_vPrevVPhysicsUpdatePos: [0xC]u8, // 0x338
        m_iTeamNum: [0x4]u8, // 0x344
        m_iGlobalname: [0x8]u8, // 0x348
        m_iSentToClients: [0x8]u8, // 0x350
        m_sUniqueHammerID: [0x8]u8, // 0x358
        m_spawnflags: [0x4]u8, // 0x360
        m_nNextThinkTick: [0x4]u8, // 0x364
        m_nSimulationTick: [0x8]u8, // 0x368
        m_OnKilled: [0x18]u8, // 0x370
        m_fFlags: [0x4]u8, // 0x388
        m_vecAbsVelocity: [0xC]u8, // 0x38C
        m_vecVelocity: [0x30]u8, // 0x398
        m_vecBaseVelocity: [0xC]u8, // 0x3C8
        m_nPushEnumCount: [0x4]u8, // 0x3D4
        m_pCollision: [0x8]u8, // 0x3D8
        m_hEffectEntity: [0x4]u8, // 0x3E0
        m_hOwnerEntity: [0x4]u8, // 0x3E4
        m_fEffects: [0x4]u8, // 0x3E8
        m_hGroundEntity: [0x4]u8, // 0x3EC
        m_nGroundBodyIndex: [0x4]u8, // 0x3F0
        m_flFriction: [0x4]u8, // 0x3F4
        m_flElasticity: [0x4]u8, // 0x3F8
        m_flGravityScale: [0x4]u8, // 0x3FC
        m_flTimeScale: [0x4]u8, // 0x400
        m_flWaterLevel: [0x4]u8, // 0x404
        m_bGravityDisabled: [0x1]u8, // 0x408
        m_bAnimatedEveryTick: [0x3]u8, // 0x409
        m_flActualGravityScale: [0x4]u8, // 0x40C
        m_bGravityActuallyDisabled: [0x1]u8, // 0x410
        m_bDisableLowViolence: [0x1]u8, // 0x411
        m_nWaterType: [0x2]u8, // 0x412
        m_iEFlags: [0x4]u8, // 0x414
        m_OnUser1: [0x18]u8, // 0x418
        m_OnUser2: [0x18]u8, // 0x430
        m_OnUser3: [0x18]u8, // 0x448
        m_OnUser4: [0x18]u8, // 0x460
        m_iInitialTeamNum: [0x4]u8, // 0x478
        m_flNavIgnoreUntilTime: [0x4]u8, // 0x47C
        m_vecAngVelocity: [0xC]u8, // 0x480
        m_bNetworkQuantizeOriginAndAngles: [0x1]u8, // 0x48C
        m_bLagCompensate: [0x3]u8, // 0x48D
        m_pBlocker: [0x4]u8, // 0x490
        m_flLocalTime: [0x4]u8, // 0x494
        m_flVPhysicsUpdateLocalTime: [0x4]u8, // 0x498
        m_nBloodType: [0x4]u8, // 0x49C
        m_pPulseGraphInstance: [0x8]u8, // 0x4A0
    };
    pub const CPulseCell_ApplyAnimGraphParam = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_value: [0x90]u8, // 0xD8
    };
    pub const CPlayer_UseServices = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CGameSceneNodeHandle = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_hOwner: [0x4]u8, // 0x8
        m_name: [0x4]u8, // 0xC
    };
    pub const CMarkupVolumeWithRef = extern struct {
        pad_0: [0x898]u8, // 0x0
        m_bUseRef: [0x4]u8, // 0x898
        m_vRefPosEntitySpace: [0xC]u8, // 0x89C
        m_vRefPosWorldSpace: [0xC]u8, // 0x8A8
        m_flRefDot: [0x4]u8, // 0x8B4
    };
    pub const CCSGO_TeamSelectCharacterPosition = extern struct {
        pad_0: [0x1468]u8, // 0x0
    };
    pub const CPulseCell_Unknown = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_UnknownKeys: [0x10]u8, // 0x48
    };
    pub const CFuncPlatRot = extern struct {
        pad_0: [0x908]u8, // 0x0
        m_end: [0xC]u8, // 0x908
        m_start: [0xC]u8, // 0x914
    };
    pub const CRagdollMagnet = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_bDisabled: [0x4]u8, // 0x4A8
        m_radius: [0x4]u8, // 0x4AC
        m_force: [0x4]u8, // 0x4B0
        m_axis: [0xC]u8, // 0x4B4
    };
    pub const CInfoInstructorHintTarget = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CPulseCell_ApplyEntityFlags = extern struct {
        pad_0: [0xD8]u8, // 0x0
    };
    pub const CSpriteAlias_env_glow = extern struct {
        pad_0: [0x8C0]u8, // 0x0
    };
    pub const CFireCrackerBlast = extern struct {
        pad_0: [0x14D8]u8, // 0x0
    };
    pub const CSpotlightEnd = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_flLightScale: [0x4]u8, // 0x850
        m_Radius: [0x4]u8, // 0x854
        m_vSpotlightDir: [0xC]u8, // 0x858
        m_vSpotlightOrg: [0xC]u8, // 0x864
    };
    pub const CEnvSky = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_hSkyMaterial: [0x8]u8, // 0x850
        m_hSkyMaterialLightingOnly: [0x8]u8, // 0x858
        m_bStartDisabled: [0x4]u8, // 0x860
        m_vTintColor: [0x4]u8, // 0x864
        m_vTintColorLightingOnly: [0x4]u8, // 0x868
        m_flBrightnessScale: [0x4]u8, // 0x86C
        m_nFogType: [0x4]u8, // 0x870
        m_flFogMinStart: [0x4]u8, // 0x874
        m_flFogMinEnd: [0x4]u8, // 0x878
        m_flFogMaxStart: [0x4]u8, // 0x87C
        m_flFogMaxEnd: [0x4]u8, // 0x880
        m_bEnabled: [0x2C]u8, // 0x884
    };
    pub const CInfoSpawnGroupLandmark = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CPointAngleSensor = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_bDisabled: [0x8]u8, // 0x4A8
        m_nLookAtName: [0x8]u8, // 0x4B0
        m_hTargetEntity: [0x4]u8, // 0x4B8
        m_hLookAtEntity: [0x4]u8, // 0x4BC
        m_flDuration: [0x4]u8, // 0x4C0
        m_flDotTolerance: [0x4]u8, // 0x4C4
        m_flFacingTime: [0x4]u8, // 0x4C8
        m_bFired: [0x4]u8, // 0x4CC
        m_OnFacingLookat: [0x18]u8, // 0x4D0
        m_OnNotFacingLookat: [0x18]u8, // 0x4E8
        m_TargetDir: [0x28]u8, // 0x500
        m_FacingPercentage: [0x20]u8, // 0x528
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
    pub const CGenericConstraint = extern struct {
        pad_0: [0x510]u8, // 0x0
        m_bPlaceAnchorsAtConstraintTransform: [0x4]u8, // 0x510
        m_nLinearMotionX: [0x4]u8, // 0x514
        m_nLinearMotionY: [0x4]u8, // 0x518
        m_nLinearMotionZ: [0x4]u8, // 0x51C
        m_flLinearFrequencyX: [0x4]u8, // 0x520
        m_flLinearFrequencyY: [0x4]u8, // 0x524
        m_flLinearFrequencyZ: [0x4]u8, // 0x528
        m_flLinearDampingRatioX: [0x4]u8, // 0x52C
        m_flLinearDampingRatioY: [0x4]u8, // 0x530
        m_flLinearDampingRatioZ: [0x4]u8, // 0x534
        m_flMaxLinearImpulseX: [0x4]u8, // 0x538
        m_flMaxLinearImpulseY: [0x4]u8, // 0x53C
        m_flMaxLinearImpulseZ: [0x4]u8, // 0x540
        m_flBreakAfterTimeX: [0x4]u8, // 0x544
        m_flBreakAfterTimeY: [0x4]u8, // 0x548
        m_flBreakAfterTimeZ: [0x4]u8, // 0x54C
        m_flBreakAfterTimeStartTimeX: [0x4]u8, // 0x550
        m_flBreakAfterTimeStartTimeY: [0x4]u8, // 0x554
        m_flBreakAfterTimeStartTimeZ: [0x4]u8, // 0x558
        m_flBreakAfterTimeThresholdX: [0x4]u8, // 0x55C
        m_flBreakAfterTimeThresholdY: [0x4]u8, // 0x560
        m_flBreakAfterTimeThresholdZ: [0x4]u8, // 0x564
        m_flNotifyForceX: [0x4]u8, // 0x568
        m_flNotifyForceY: [0x4]u8, // 0x56C
        m_flNotifyForceZ: [0x4]u8, // 0x570
        m_flNotifyForceMinTimeX: [0x4]u8, // 0x574
        m_flNotifyForceMinTimeY: [0x4]u8, // 0x578
        m_flNotifyForceMinTimeZ: [0x4]u8, // 0x57C
        m_flNotifyForceLastTimeX: [0x4]u8, // 0x580
        m_flNotifyForceLastTimeY: [0x4]u8, // 0x584
        m_flNotifyForceLastTimeZ: [0x4]u8, // 0x588
        m_bAxisNotifiedX: [0x1]u8, // 0x58C
        m_bAxisNotifiedY: [0x1]u8, // 0x58D
        m_bAxisNotifiedZ: [0x2]u8, // 0x58E
        m_nAngularMotionX: [0x4]u8, // 0x590
        m_nAngularMotionY: [0x4]u8, // 0x594
        m_nAngularMotionZ: [0x4]u8, // 0x598
        m_flAngularFrequencyX: [0x4]u8, // 0x59C
        m_flAngularFrequencyY: [0x4]u8, // 0x5A0
        m_flAngularFrequencyZ: [0x4]u8, // 0x5A4
        m_flAngularDampingRatioX: [0x4]u8, // 0x5A8
        m_flAngularDampingRatioY: [0x4]u8, // 0x5AC
        m_flAngularDampingRatioZ: [0x4]u8, // 0x5B0
        m_flMaxAngularImpulseX: [0x4]u8, // 0x5B4
        m_flMaxAngularImpulseY: [0x4]u8, // 0x5B8
        m_flMaxAngularImpulseZ: [0x4]u8, // 0x5BC
        m_NotifyForceReachedX: [0x18]u8, // 0x5C0
        m_NotifyForceReachedY: [0x18]u8, // 0x5D8
        m_NotifyForceReachedZ: [0x18]u8, // 0x5F0
    };
    pub const CPulseCell_Outflow_CycleRandom = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_Outputs: [0x18]u8, // 0x48
    };
    pub const CPulseCell_Step_PublicOutput = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_OutputIndex: [0x8]u8, // 0x48
    };
    pub const CEnvLaser = extern struct {
        pad_0: [0x8F0]u8, // 0x0
        m_iszLaserTarget: [0x8]u8, // 0x8F0
        m_pSprite: [0x8]u8, // 0x8F8
        m_iszSpriteName: [0x8]u8, // 0x900
        m_firePosition: [0xC]u8, // 0x908
        m_flStartFrame: [0x4]u8, // 0x914
    };
    pub const CSoundOpvarSetEntity = extern struct {
        pad_0: [0x4C0]u8, // 0x0
        m_iszStackName: [0x8]u8, // 0x4C0
        m_iszOperatorName: [0x8]u8, // 0x4C8
        m_iszOpvarName: [0x8]u8, // 0x4D0
        m_nOpvarType: [0x4]u8, // 0x4D8
        m_nOpvarIndex: [0x4]u8, // 0x4DC
        m_flOpvarValue: [0x8]u8, // 0x4E0
        m_OpvarValueString: [0x8]u8, // 0x4E8
        m_bSetOnSpawn: [0x10]u8, // 0x4F0
    };
    pub const CEnvBeverage = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_CanInDispenser: [0x4]u8, // 0x4A8
        m_nBeverageType: [0x4]u8, // 0x4AC
    };
    pub const CPhysMotor = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_nameAttach: [0x8]u8, // 0x4A8
        m_nameAnchor: [0x8]u8, // 0x4B0
        m_hAttachedObject: [0x4]u8, // 0x4B8
        m_hAnchorObject: [0x4]u8, // 0x4BC
        m_spinUp: [0x4]u8, // 0x4C0
        m_spinDown: [0x4]u8, // 0x4C4
        m_flMotorFriction: [0x4]u8, // 0x4C8
        m_additionalAcceleration: [0x4]u8, // 0x4CC
        m_angularAcceleration: [0x4]u8, // 0x4D0
        m_flTorqueScale: [0x4]u8, // 0x4D4
        m_flTargetSpeed: [0x4]u8, // 0x4D8
        m_flSpeedWhenSpinUpOrSpinDownStarted: [0x4]u8, // 0x4DC
        m_pFixedWorldBody: [0x8]u8, // 0x4E0
        m_pMotorJoint: [0x8]u8, // 0x4E8
        m_motor: [0x20]u8, // 0x4F0
    };
    pub const CLogicGameEvent = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_iszEventName: [0x8]u8, // 0x4A8
    };
    pub const CPhysicsPropMultiplayer = extern struct {
        pad_0: [0xD10]u8, // 0x0
    };
    pub const CPhysExplosion = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_bExplodeOnSpawn: [0x4]u8, // 0x4A8
        m_flMagnitude: [0x4]u8, // 0x4AC
        m_flDamage: [0x4]u8, // 0x4B0
        m_radius: [0x4]u8, // 0x4B4
        m_targetEntityName: [0x8]u8, // 0x4B8
        m_ignoreEntityName: [0x8]u8, // 0x4C0
        m_flInnerRadius: [0x4]u8, // 0x4C8
        m_flPushScale: [0x4]u8, // 0x4CC
        m_bConvertToDebrisWhenPossible: [0x1]u8, // 0x4D0
        m_bAffectInvulnerableEnts: [0x1]u8, // 0x4D1
        m_bDisablePushClamp: [0x6]u8, // 0x4D2
        m_OnPushedPlayer: [0x18]u8, // 0x4D8
    };
    pub const CSplineConstraint = extern struct {
        pad_0: [0x558]u8, // 0x0
        m_vAnchorOffsetRestore: [0xC]u8, // 0x558
        m_hSplineEntity: [0x4]u8, // 0x564
        m_pSplineBody: [0x8]u8, // 0x568
        m_bEnableLateralConstraint: [0x1]u8, // 0x570
        m_bEnableVerticalConstraint: [0x1]u8, // 0x571
        m_bEnableAngularConstraint: [0x1]u8, // 0x572
        m_bEnableLimit: [0x1]u8, // 0x573
        m_bFireEventsOnPath: [0x4]u8, // 0x574
        m_flLinearFrequency: [0x4]u8, // 0x578
        m_flLinarDampingRatio: [0x4]u8, // 0x57C
        m_flJointFriction: [0x4]u8, // 0x580
        m_flTransitionTime: [0x14]u8, // 0x584
        m_vPreSolveAnchorPos: [0xC]u8, // 0x598
        m_StartTransitionTime: [0x4]u8, // 0x5A4
        m_vTangentSpaceAnchorAtTransitionStart: [0x10]u8, // 0x5A8
    };
    pub const CLogicCompare = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_flInValue: [0x4]u8, // 0x4A8
        m_flCompareValue: [0x4]u8, // 0x4AC
        m_OnLessThan: [0x20]u8, // 0x4B0
        m_OnEqualTo: [0x20]u8, // 0x4D0
        m_OnNotEqualTo: [0x20]u8, // 0x4F0
        m_OnGreaterThan: [0x20]u8, // 0x510
    };
    pub const CSoundEventBoxEntity = extern struct {
        pad_0: [0x5A0]u8, // 0x0
        m_iszBoxEntities: [0x98]u8, // 0x5A0
        m_vecBoxHelpersNetworked: [0x60]u8, // 0x638
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
    pub const CFuncTankTrain = extern struct {
        pad_0: [0x978]u8, // 0x0
        m_OnDeath: [0x18]u8, // 0x978
    };
    pub const CPointClientUIWorldPanel = extern struct {
        pad_0: [0x9B0]u8, // 0x0
        m_bIgnoreInput: [0x1]u8, // 0x9B0
        m_bLit: [0x1]u8, // 0x9B1
        m_bFollowPlayerAcrossTeleport: [0x2]u8, // 0x9B2
        m_flWidth: [0x4]u8, // 0x9B4
        m_flHeight: [0x4]u8, // 0x9B8
        m_flDPI: [0x4]u8, // 0x9BC
        m_flWindowUIScale: [0x4]u8, // 0x9C0
        m_flInteractDistance: [0x4]u8, // 0x9C4
        m_flDepthOffset: [0x4]u8, // 0x9C8
        m_unOwnerContext: [0x4]u8, // 0x9CC
        m_unHorizontalAlign: [0x4]u8, // 0x9D0
        m_unVerticalAlign: [0x4]u8, // 0x9D4
        m_unOrientation: [0x4]u8, // 0x9D8
        m_bAllowInteractionFromAllSceneWorlds: [0x4]u8, // 0x9DC
        m_vecCSSClasses: [0x18]u8, // 0x9E0
        m_bOpaque: [0x1]u8, // 0x9F8
        m_bNoDepth: [0x1]u8, // 0x9F9
        m_bVisibleWhenParentNoDraw: [0x1]u8, // 0x9FA
        m_bRenderBackface: [0x1]u8, // 0x9FB
        m_bUseOffScreenIndicator: [0x1]u8, // 0x9FC
        m_bExcludeFromSaveGames: [0x1]u8, // 0x9FD
        m_bGrabbable: [0x1]u8, // 0x9FE
        m_bOnlyRenderToTexture: [0x1]u8, // 0x9FF
        m_bDisableMipGen: [0x4]u8, // 0xA00
        m_nExplicitImageLayout: [0x4]u8, // 0xA04
        m_bIgnoreParentOrientation: [0x8]u8, // 0xA08
    };
    pub const CSoundEventBoxHelper = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_vMins: [0xC]u8, // 0x4A8
        m_vMaxs: [0xC]u8, // 0x4B4
    };
    pub const CSoundEventSphereEntity = extern struct {
        pad_0: [0x568]u8, // 0x0
        m_flRadius: [0x8]u8, // 0x568
    };
    pub const CCSGO_RushIntroCounterTerroristPosition = extern struct {
        pad_0: [0x1468]u8, // 0x0
    };
    pub const CPulseCell_ReturnValues = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CCSPlayerController_InGameMoneyServices = extern struct {
        pad_0: [0x40]u8, // 0x0
        m_bReceivesMoneyNextRound: [0x4]u8, // 0x40
        m_iMoneyEarnedForNextRound: [0x4]u8, // 0x44
        m_iAccount: [0x4]u8, // 0x48
        m_iStartAccount: [0x4]u8, // 0x4C
        m_iTotalCashSpent: [0x4]u8, // 0x50
        m_iCashSpentThisRound: [0x4]u8, // 0x54
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
    pub const CRuleBrushEntity = extern struct {
        pad_0: [0x858]u8, // 0x0
    };
    pub const CMapVetoPickController = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_bPlayedIntroVcd: [0x1]u8, // 0x4A8
        m_bNeedToPlayFiveSecondsRemaining: [0x1F]u8, // 0x4A9
        m_dblPreMatchDraftSequenceTime: [0x8]u8, // 0x4C8
        m_bPreMatchDraftStateChanged: [0x4]u8, // 0x4D0
        m_nDraftType: [0x4]u8, // 0x4D4
        m_nTeamWinningCoinToss: [0x4]u8, // 0x4D8
        m_nTeamWithFirstChoice: [0x100]u8, // 0x4DC
        m_nVoteMapIdsList: [0x1C]u8, // 0x5DC
        m_nAccountIDs: [0x100]u8, // 0x5F8
        m_nMapId0: [0x100]u8, // 0x6F8
        m_nMapId1: [0x100]u8, // 0x7F8
        m_nMapId2: [0x100]u8, // 0x8F8
        m_nMapId3: [0x100]u8, // 0x9F8
        m_nMapId4: [0x100]u8, // 0xAF8
        m_nMapId5: [0x100]u8, // 0xBF8
        m_nStartingSide0: [0x100]u8, // 0xCF8
        m_nCurrentPhase: [0x4]u8, // 0xDF8
        m_nPhaseStartTick: [0x4]u8, // 0xDFC
        m_nPhaseDurationTicks: [0x8]u8, // 0xE00
        m_OnMapVetoed: [0x20]u8, // 0xE08
        m_OnMapPicked: [0x20]u8, // 0xE28
        m_OnSidesPicked: [0x20]u8, // 0xE48
        m_OnNewPhaseStarted: [0x20]u8, // 0xE68
        m_OnLevelTransition: [0x20]u8, // 0xE88
    };
    pub const CFuncPropRespawnZone = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CFilterModel = extern struct {
        pad_0: [0x4E0]u8, // 0x0
        m_iFilterModel: [0x8]u8, // 0x4E0
    };
    pub const CWeaponP90 = extern struct {
        pad_0: [0x12A0]u8, // 0x0
    };
    pub const CNavSpaceInfo = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CPhysSlideConstraint = extern struct {
        pad_0: [0x510]u8, // 0x0
        m_axisEnd: [0xC]u8, // 0x510
        m_slideFriction: [0x4]u8, // 0x51C
        m_systemLoadScale: [0x4]u8, // 0x520
        m_initialOffset: [0x4]u8, // 0x524
        m_bEnableLinearConstraint: [0x1]u8, // 0x528
        m_bEnableAngularConstraint: [0x3]u8, // 0x529
        m_flMotorFrequency: [0x4]u8, // 0x52C
        m_flMotorDampingRatio: [0x4]u8, // 0x530
        m_bUseEntityPivot: [0x4]u8, // 0x534
        m_soundInfo: [0x98]u8, // 0x538
    };
    pub const CPulseGameBlackboard = extern struct {
        pad_0: [0x4B0]u8, // 0x0
        m_strGraphName: [0x8]u8, // 0x4B0
        m_strStateBlob: [0x8]u8, // 0x4B8
    };
    pub const CSoundEventEntityAlias_snd_event_point = extern struct {
        pad_0: [0x568]u8, // 0x0
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
    pub const CPointGamestatsCounter = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_strStatisticName: [0x8]u8, // 0x4A8
        m_bDisabled: [0x8]u8, // 0x4B0
    };
    pub const CTextureBasedAnimatable = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_bLoop: [0x4]u8, // 0x850
        m_flFPS: [0x4]u8, // 0x854
        m_hPositionKeys: [0x8]u8, // 0x858
        m_hRotationKeys: [0x8]u8, // 0x860
        m_vAnimationBoundsMin: [0xC]u8, // 0x868
        m_vAnimationBoundsMax: [0xC]u8, // 0x874
        m_flStartTime: [0x4]u8, // 0x880
        m_flStartFrame: [0x4]u8, // 0x884
    };
    pub const CSprite = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_hSpriteMaterial: [0x8]u8, // 0x850
        m_hAttachedToEntity: [0x4]u8, // 0x858
        m_nAttachment: [0x4]u8, // 0x85C
        m_flSpriteFramerate: [0x4]u8, // 0x860
        m_flFrame: [0x4]u8, // 0x864
        m_flDieTime: [0x10]u8, // 0x868
        m_nBrightness: [0x4]u8, // 0x878
        m_flBrightnessDuration: [0x4]u8, // 0x87C
        m_flSpriteScale: [0x4]u8, // 0x880
        m_flScaleDuration: [0x4]u8, // 0x884
        m_bWorldSpaceScale: [0x4]u8, // 0x888
        m_flGlowProxySize: [0x4]u8, // 0x88C
        m_flHDRColorScale: [0x4]u8, // 0x890
        m_flLastTime: [0x4]u8, // 0x894
        m_flMaxFrame: [0x4]u8, // 0x898
        m_flStartScale: [0x4]u8, // 0x89C
        m_flDestScale: [0x4]u8, // 0x8A0
        m_flScaleTimeStart: [0x4]u8, // 0x8A4
        m_nStartBrightness: [0x4]u8, // 0x8A8
        m_nDestBrightness: [0x4]u8, // 0x8AC
        m_flBrightnessTimeStart: [0x4]u8, // 0x8B0
        m_nSpriteWidth: [0x4]u8, // 0x8B4
        m_nSpriteHeight: [0x4]u8, // 0x8B8
        m_flSpeed: [0x4]u8, // 0x8BC
    };
    pub const CDynamicLight = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_ActualFlags: [0x1]u8, // 0x850
        m_Flags: [0x1]u8, // 0x851
        m_LightStyle: [0x1]u8, // 0x852
        m_On: [0x1]u8, // 0x853
        m_Radius: [0x4]u8, // 0x854
        m_Exponent: [0x4]u8, // 0x858
        m_InnerAngle: [0x4]u8, // 0x85C
        m_OuterAngle: [0x4]u8, // 0x860
        m_SpotRadius: [0x4]u8, // 0x864
    };
    pub const CWeaponTaser = extern struct {
        pad_0: [0x12A0]u8, // 0x0
        m_fFireTime: [0x4]u8, // 0x12A0
        m_nLastAttackTick: [0xC]u8, // 0x12A4
    };
    pub const CEnvCubemapBox = extern struct {
        pad_0: [0x590]u8, // 0x0
    };
    pub const CRotDoor = extern struct {
        pad_0: [0xA58]u8, // 0x0
        m_bSolidBsp: [0x8]u8, // 0xA58
    };
    pub const CPathMover = extern struct {
        pad_0: [0x600]u8, // 0x0
        m_vecMovers: [0x18]u8, // 0x600
        m_vecSpawners: [0x18]u8, // 0x618
        m_iszMoverSpawnerName: [0x8]u8, // 0x630
        m_hMoverRouter: [0x8]u8, // 0x638
        m_iszMoverRouterName: [0x8]u8, // 0x640
        m_flSampleSpacing: [0x8]u8, // 0x648
    };
    pub const CFuncVPhysicsClip = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_bDisabled: [0x8]u8, // 0x850
    };
    pub const CCSRadarElement = extern struct {
        pad_0: [0x4C0]u8, // 0x0
        m_nElementType: [0x4]u8, // 0x4C0
        m_nElementColor: [0x4]u8, // 0x4C4
        m_nTeamFilter: [0x8]u8, // 0x4C8
    };
    pub const CPhysFixed = extern struct {
        pad_0: [0x508]u8, // 0x0
        m_flLinearFrequency: [0x4]u8, // 0x508
        m_flLinearDampingRatio: [0x4]u8, // 0x50C
        m_flAngularFrequency: [0x4]u8, // 0x510
        m_flAngularDampingRatio: [0x4]u8, // 0x514
        m_bEnableLinearConstraint: [0x1]u8, // 0x518
        m_bEnableAngularConstraint: [0x7]u8, // 0x519
        m_sBoneName1: [0x8]u8, // 0x520
        m_sBoneName2: [0x8]u8, // 0x528
    };
    pub const CLogicNavigation = extern struct {
        pad_0: [0x4B0]u8, // 0x0
        m_isOn: [0x4]u8, // 0x4B0
        m_navProperty: [0x4]u8, // 0x4B4
    };
    pub const CPathSimple = extern struct {
        pad_0: [0x4B0]u8, // 0x0
        m_CPathQueryComponent: [0xF0]u8, // 0x4B0
        m_pathString: [0x8]u8, // 0x5A0
        m_bClosedLoop: [0x8]u8, // 0x5A8
    };
    pub const CPathParticleRopeAlias_path_particle_rope_clientside = extern struct {
        pad_0: [0x590]u8, // 0x0
    };
    pub const CFuncElectrifiedVolume = extern struct {
        pad_0: [0x870]u8, // 0x0
        m_EffectName: [0x8]u8, // 0x870
        m_EffectInterpenetrateName: [0x8]u8, // 0x878
        m_EffectZapName: [0x8]u8, // 0x880
        m_iszEffectSource: [0x20]u8, // 0x888
    };
    pub const CCSMinimapBoundary = extern struct {
        pad_0: [0x4A8]u8, // 0x0
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
    pub const CSoundEventOBBEntity = extern struct {
        pad_0: [0x568]u8, // 0x0
        m_vMins: [0xC]u8, // 0x568
        m_vMaxs: [0x1C]u8, // 0x574
    };
    pub const CFlashbangProjectile = extern struct {
        pad_0: [0xB40]u8, // 0x0
        m_flTimeToDetonate: [0x4]u8, // 0xB40
        m_numOpponentsHit: [0x1]u8, // 0xB44
        m_numTeammatesHit: [0xB]u8, // 0xB45
    };
    pub const CTriggerMultiple = extern struct {
        pad_0: [0x9C8]u8, // 0x0
        m_OnTrigger: [0x18]u8, // 0x9C8
    };
    pub const CPhysBallSocket = extern struct {
        pad_0: [0x508]u8, // 0x0
        m_flJointFriction: [0x4]u8, // 0x508
        m_bEnableSwingLimit: [0x4]u8, // 0x50C
        m_flSwingLimit: [0x4]u8, // 0x510
        m_bEnableTwistLimit: [0x4]u8, // 0x514
        m_flMinTwistAngle: [0x4]u8, // 0x518
        m_flMaxTwistAngle: [0x4]u8, // 0x51C
    };
    pub const CDebugHistory = extern struct {
        pad_0: [0x3E84E8]u8, // 0x0
        m_nNpcEvents: [0xFA8]u8, // 0x3E84E8
    };
    pub const CSoundOpvarSetPointBase = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_bDisabled: [0x4]u8, // 0x4A8
        m_hSource: [0x1C]u8, // 0x4AC
        m_iszSourceEntityName: [0x58]u8, // 0x4C8
        m_vLastPosition: [0xC]u8, // 0x520
        m_flRefreshTime: [0x4]u8, // 0x52C
        m_iszStackName: [0x8]u8, // 0x530
        m_iszOperatorName: [0x8]u8, // 0x538
        m_iszOpvarName: [0x8]u8, // 0x540
        m_iOpvarIndex: [0x4]u8, // 0x548
        m_bUseAutoCompare: [0x1]u8, // 0x54C
        m_bFastRefresh: [0x3]u8, // 0x54D
    };
    pub const CExplosionTypeData = extern struct {
        m_SoundName: [0x10]u8, // 0x0
        m_ParticleEffect: [0xE0]u8, // 0x10
        m_bIsIncindiary: [0x1]u8, // 0xF0
        m_bHasForces: [0x7]u8, // 0xF1
        m_DecalType: [0x8]u8, // 0xF8
    };
    pub const CPathKeyFrame = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_Origin: [0xC]u8, // 0x4A8
        m_Angles: [0xC]u8, // 0x4B4
        m_qAngle: [0x10]u8, // 0x4C0
        m_iNextKey: [0x8]u8, // 0x4D0
        m_flNextTime: [0x4]u8, // 0x4D8
        m_pNextKey: [0x4]u8, // 0x4DC
        m_pPrevKey: [0x4]u8, // 0x4E0
        m_flMoveSpeed: [0xC]u8, // 0x4E4
    };
    pub const CWeaponCZ75a = extern struct {
        pad_0: [0x12A0]u8, // 0x0
        m_bMagazineRemoved: [0x10]u8, // 0x12A0
    };
    pub const CScriptTriggerPush = extern struct {
        pad_0: [0xA00]u8, // 0x0
        m_vExtent: [0x10]u8, // 0xA00
    };
    pub const CRevertSaved = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_loadTime: [0x4]u8, // 0x850
        m_Duration: [0x4]u8, // 0x854
        m_HoldTime: [0x8]u8, // 0x858
    };
    pub const CTriggerBombReset = extern struct {
        pad_0: [0x9C8]u8, // 0x0
    };
    pub const CTriggerHurt = extern struct {
        pad_0: [0x9C8]u8, // 0x0
        m_flOriginalDamage: [0x4]u8, // 0x9C8
        m_flDamage: [0x4]u8, // 0x9CC
        m_flDamageCap: [0x4]u8, // 0x9D0
        m_flLastDmgTime: [0x4]u8, // 0x9D4
        m_flForgivenessDelay: [0x4]u8, // 0x9D8
        m_bitsDamageInflict: [0x4]u8, // 0x9DC
        m_damageModel: [0x4]u8, // 0x9E0
        m_bNoDmgForce: [0x4]u8, // 0x9E4
        m_vDamageForce: [0xC]u8, // 0x9E8
        m_thinkAlways: [0x4]u8, // 0x9F4
        m_hurtThinkPeriod: [0x8]u8, // 0x9F8
        m_OnHurt: [0x18]u8, // 0xA00
        m_OnHurtPlayer: [0x18]u8, // 0xA18
        m_hurtEntities: [0x20]u8, // 0xA30
    };
    pub const CCSPlayer_WeaponServices = extern struct {
        pad_0: [0xC0]u8, // 0x0
        m_flNextAttack: [0x4]u8, // 0xC0
        m_hSavedWeapon: [0x4]u8, // 0xC4
        m_nTimeToMelee: [0x4]u8, // 0xC8
        m_nTimeToSecondary: [0x4]u8, // 0xCC
        m_nTimeToPrimary: [0x4]u8, // 0xD0
        m_nTimeToSniperRifle: [0x4]u8, // 0xD4
        m_bIsBeingGivenItem: [0x1]u8, // 0xD8
        m_bIsPickingUpItemWithUse: [0x1]u8, // 0xD9
        m_bPickedUpWeapon: [0x1]u8, // 0xDA
        m_bDisableAutoDeploy: [0x1]u8, // 0xDB
        m_bIsPickingUpGroundWeapon: [0x17BC]u8, // 0xDC
        m_networkAnimTiming: [0x18]u8, // 0x1898
        m_bBlockInspectUntilNextGraphUpdate: [0x8]u8, // 0x18B0
    };
    pub const CSkyCameraVolume = extern struct {
        pad_0: [0x4C0]u8, // 0x0
        m_vBoxMins: [0xC]u8, // 0x4C0
        m_vBoxMaxs: [0xC]u8, // 0x4CC
        m_hTarget: [0x4]u8, // 0x4D8
        m_nPriority: [0x4]u8, // 0x4DC
        m_bIsEnabled: [0x1]u8, // 0x4E0
        m_bSkyboxBlurEffect: [0x3]u8, // 0x4E1
        m_vBlurOrigin: [0xC]u8, // 0x4E4
        m_bSkyboxReceivesWorldCsm: [0x1]u8, // 0x4F0
        m_bWorldReceivesSkyboxCsm: [0x1]u8, // 0x4F1
        m_bStartDisabled: [0x6]u8, // 0x4F2
        m_iszTargetName: [0x8]u8, // 0x4F8
    };
    pub const CRetakeGameRules = extern struct {
        pad_0: [0x138]u8, // 0x0
        m_nMatchSeed: [0x4]u8, // 0x138
        m_bBlockersPresent: [0x1]u8, // 0x13C
        m_bRoundInProgress: [0x3]u8, // 0x13D
        m_iFirstSecondHalfRound: [0x4]u8, // 0x140
        m_iBombSite: [0x4]u8, // 0x144
        m_hBombPlanter: [0xA8]u8, // 0x148
    };
    pub const CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable = extern struct {
        pad_0: [0x538]u8, // 0x0
    };
    pub const CInfoInstructorHintBombTargetA = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CTeamplayRules = extern struct {
        pad_0: [0xD0]u8, // 0x0
    };
    pub const CScriptTriggerHurt = extern struct {
        pad_0: [0xA50]u8, // 0x0
        m_vExtent: [0x10]u8, // 0xA50
    };
    pub const CCSCustomHudLayoutState = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_playerSlot: [0x4]u8, // 0x30
        m_bInputCaptureEnabled: [0x4]u8, // 0x34
        m_vecHasClasses: [0x60]u8, // 0x38
        m_vecDialogVariableStrings: [0x100]u8, // 0x98
    };
    pub const CCSGO_WingmanIntroCharacterPosition = extern struct {
        pad_0: [0x1468]u8, // 0x0
    };
    pub const CWeaponMP9 = extern struct {
        pad_0: [0x12A0]u8, // 0x0
    };
    pub const CTriggerDetectExplosion = extern struct {
        pad_0: [0x9F0]u8, // 0x0
        m_OnDetectedExplosion: [0x18]u8, // 0x9F0
    };
    pub const CFilterName = extern struct {
        pad_0: [0x4E0]u8, // 0x0
        m_iFilterName: [0x8]u8, // 0x4E0
    };
    pub const CPulseCell_ApplyDynamicAttributeString = extern struct {
        pad_0: [0xD8]u8, // 0x0
    };
    pub const CSmokeGrenadeProjectile = extern struct {
        pad_0: [0xB68]u8, // 0x0
        m_nSmokeEffectTickBegin: [0x4]u8, // 0xB68
        m_bDidSmokeEffect: [0x4]u8, // 0xB6C
        m_nRandomSeed: [0x4]u8, // 0xB70
        m_vSmokeColor: [0xC]u8, // 0xB74
        m_vSmokeDetonationPos: [0x10]u8, // 0xB80
        m_VoxelFrameData: [0x18]u8, // 0xB90
        m_nVoxelFrameDataSize: [0x4]u8, // 0xBA8
        m_nVoxelUpdate: [0x4]u8, // 0xBAC
        m_nSmokeLightProbeRegen: [0x4]u8, // 0xBB0
        m_flLastBounce: [0x4]u8, // 0xBB4
        m_fllastSimulationTime: [0x2288]u8, // 0xBB8
        m_bExplodeFromInferno: [0x1]u8, // 0x2E40
        m_bDidGroundScorch: [0xF]u8, // 0x2E41
    };
    pub const CBlood = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_vecSprayAngles: [0xC]u8, // 0x4A8
        m_vecSprayDir: [0xC]u8, // 0x4B4
        m_flAmount: [0x4]u8, // 0x4C0
        m_Color: [0x4]u8, // 0x4C4
    };
    pub const CCSTeam = extern struct {
        pad_0: [0x560]u8, // 0x0
        m_nLastRecievedShorthandedRoundBonus: [0x4]u8, // 0x560
        m_nShorthandedRoundBonusStartRound: [0x4]u8, // 0x564
        m_bSurrendered: [0x1]u8, // 0x568
        m_szTeamMatchStat: [0x203]u8, // 0x569
        m_numMapVictories: [0x4]u8, // 0x76C
        m_scoreFirstHalf: [0x4]u8, // 0x770
        m_scoreSecondHalf: [0x4]u8, // 0x774
        m_scoreOvertime: [0x4]u8, // 0x778
        m_szClanTeamname: [0x84]u8, // 0x77C
        m_iClanID: [0x4]u8, // 0x800
        m_szTeamFlagImage: [0x8]u8, // 0x804
        m_szTeamLogoImage: [0x8]u8, // 0x80C
        m_flNextResourceTime: [0x4]u8, // 0x814
        m_iLastUpdateSentAt: [0x8]u8, // 0x818
    };
    pub const CRulePointEntity = extern struct {
        pad_0: [0x858]u8, // 0x0
        m_Score: [0x8]u8, // 0x858
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
    pub const CFuncMoveLinearAlias_momentary_door = extern struct {
        pad_0: [0x958]u8, // 0x0
    };
    pub const CBaseAnimGraph = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_graphControllerManager: [0x98]u8, // 0x850
        m_pMainGraphController: [0x8]u8, // 0x8E8
        m_bInitiallyPopulateInterpHistory: [0x8]u8, // 0x8F0
        m_OnLayerCycleUpdated: [0x20]u8, // 0x8F8
        m_OnExternalChoreoGraphChanged: [0x18]u8, // 0x918
        m_pChoreoServices: [0x8]u8, // 0x930
        m_bAnimGraphUpdateEnabled: [0x1]u8, // 0x938
        m_bAnimationUpdateScheduled: [0x3]u8, // 0x939
        m_vecForce: [0xC]u8, // 0x93C
        m_nForceBone: [0x10]u8, // 0x948
        m_pRagdollControl: [0x8]u8, // 0x958
        m_RagdollPose: [0x28]u8, // 0x960
        m_bRagdollEnabled: [0x1]u8, // 0x988
        m_bRagdollClientSide: [0x1]u8, // 0x989
        m_bShouldUpdateTransformations: [0x6]u8, // 0x98A
        m_xParentedRagdollRootInEntitySpace: [0xB0]u8, // 0x990
    };
    pub const CEnvCubemapFog = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_flEndDistance: [0x4]u8, // 0x4A8
        m_flStartDistance: [0x4]u8, // 0x4AC
        m_flFogFalloffExponent: [0x4]u8, // 0x4B0
        m_bHeightFogEnabled: [0x4]u8, // 0x4B4
        m_flFogHeightWidth: [0x4]u8, // 0x4B8
        m_flFogHeightEnd: [0x4]u8, // 0x4BC
        m_flFogHeightStart: [0x4]u8, // 0x4C0
        m_flFogHeightExponent: [0x4]u8, // 0x4C4
        m_flLODBias: [0x4]u8, // 0x4C8
        m_bActive: [0x1]u8, // 0x4CC
        m_bStartDisabled: [0x3]u8, // 0x4CD
        m_flFogMaxOpacity: [0x4]u8, // 0x4D0
        m_nCubemapSourceType: [0x4]u8, // 0x4D4
        m_hSkyMaterial: [0x8]u8, // 0x4D8
        m_iszSkyEntity: [0x8]u8, // 0x4E0
        m_nHeightFogType: [0x4]u8, // 0x4E8
        m_nFogHeightBlendMode: [0x4]u8, // 0x4EC
        m_nFogHeightCoordinateSpace: [0x4]u8, // 0x4F0
        m_nDistanceFogType: [0x4]u8, // 0x4F4
        m_DistanceFogCurveString: [0x8]u8, // 0x4F8
        m_HeightFogCurveString: [0x98]u8, // 0x500
        m_hFogCubemapTexture: [0x8]u8, // 0x598
        m_bHasHeightFogEnd: [0x1]u8, // 0x5A0
        m_bFirstTime: [0x7]u8, // 0x5A1
    };
    pub const CPulseCell_InlineNodeSkipSelector = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_nFlowNodeID: [0x4]u8, // 0x48
        m_bAnd: [0x4]u8, // 0x4C
        m_PassOutflow: [0x18]u8, // 0x50
        m_FailOutflow: [0x48]u8, // 0x68
    };
    pub const CBaseDoor = extern struct {
        pad_0: [0x8E0]u8, // 0x0
        m_angMoveEntitySpace: [0xC]u8, // 0x8E0
        m_vecMoveDirParentSpace: [0xC]u8, // 0x8EC
        m_ls: [0x20]u8, // 0x8F8
        m_bForceClosed: [0x1]u8, // 0x918
        m_bDoorGroup: [0x1]u8, // 0x919
        m_bLocked: [0x1]u8, // 0x91A
        m_bIgnoreDebris: [0x1]u8, // 0x91B
        m_bNoNPCs: [0x4]u8, // 0x91C
        m_eSpawnPosition: [0x4]u8, // 0x920
        m_flBlockDamage: [0x4]u8, // 0x924
        m_NoiseMoving: [0x8]u8, // 0x928
        m_NoiseArrived: [0x8]u8, // 0x930
        m_NoiseMovingClosed: [0x8]u8, // 0x938
        m_NoiseArrivedClosed: [0x8]u8, // 0x940
        m_ChainTarget: [0x8]u8, // 0x948
        m_OnBlockedClosing: [0x18]u8, // 0x950
        m_OnBlockedOpening: [0x18]u8, // 0x968
        m_OnUnblockedClosing: [0x18]u8, // 0x980
        m_OnUnblockedOpening: [0x18]u8, // 0x998
        m_OnFullyClosed: [0x18]u8, // 0x9B0
        m_OnFullyOpen: [0x18]u8, // 0x9C8
        m_OnClose: [0x18]u8, // 0x9E0
        m_OnOpen: [0x18]u8, // 0x9F8
        m_OnLockedUse: [0x18]u8, // 0xA10
        m_bLoopMoveSound: [0x20]u8, // 0xA28
        m_bCreateNavObstacle: [0x4]u8, // 0xA48
        m_flSpeed: [0x4]u8, // 0xA4C
        m_isChaining: [0x1]u8, // 0xA50
        m_bIsUsable: [0x7]u8, // 0xA51
    };
    pub const CServerOnlyPointEntity = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CGameMoney = extern struct {
        pad_0: [0x860]u8, // 0x0
        m_OnMoneySpent: [0x18]u8, // 0x860
        m_OnMoneySpentFail: [0x18]u8, // 0x878
        m_nMoney: [0x8]u8, // 0x890
        m_strAwardText: [0x8]u8, // 0x898
    };
    pub const CEnvHudHint = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_iszMessage: [0x8]u8, // 0x4A8
    };
    pub const CNullEntity = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CLogicalEntity = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CItemDefuser = extern struct {
        pad_0: [0xAE0]u8, // 0x0
        m_entitySpottedState: [0x18]u8, // 0xAE0
        m_nSpotRules: [0x8]u8, // 0xAF8
    };
    pub const CItemGenericTriggerHelper = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_hParentItem: [0x8]u8, // 0x850
    };
    pub const CPlayer_WeaponServices = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_hMyWeapons: [0x18]u8, // 0x48
        m_hActiveWeapon: [0x4]u8, // 0x60
        m_hLastWeapon: [0x4]u8, // 0x64
        m_iAmmo: [0x40]u8, // 0x68
        m_bPreventWeaponPickup: [0x8]u8, // 0xA8
    };
    pub const CRagdollPropAttached = extern struct {
        pad_0: [0xC00]u8, // 0x0
        m_boneIndexAttached: [0x4]u8, // 0xC00
        m_ragdollAttachedObjectIndex: [0x4]u8, // 0xC04
        m_attachmentPointBoneSpace: [0xC]u8, // 0xC08
        m_attachmentPointRagdollSpace: [0xC]u8, // 0xC14
        m_bShouldDetach: [0x10]u8, // 0xC20
        m_bShouldDeleteAttachedActivationRecord: [0x10]u8, // 0xC30
    };
    pub const CItemDogtags = extern struct {
        pad_0: [0xAE0]u8, // 0x0
        m_OwningPlayer: [0x4]u8, // 0xAE0
        m_KillingPlayer: [0xC]u8, // 0xAE4
    };
    pub const CFuncPlat = extern struct {
        pad_0: [0x8F8]u8, // 0x0
        m_flSpeed: [0x8]u8, // 0x8F8
        m_sNoise: [0x8]u8, // 0x900
    };
    pub const CBarnLight = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_bEnabled: [0x4]u8, // 0x850
        m_nColorMode: [0x4]u8, // 0x854
        m_Color: [0x4]u8, // 0x858
        m_flColorTemperature: [0x4]u8, // 0x85C
        m_flBrightness: [0x4]u8, // 0x860
        m_flBrightnessScale: [0x4]u8, // 0x864
        m_nDirectLight: [0x4]u8, // 0x868
        m_nBakedShadowIndex: [0x4]u8, // 0x86C
        m_nLightPathUniqueId: [0x4]u8, // 0x870
        m_nLightMapUniqueId: [0x4]u8, // 0x874
        m_nLuminaireShape: [0x4]u8, // 0x878
        m_flLuminaireSize: [0x4]u8, // 0x87C
        m_flLuminaireAnisotropy: [0x8]u8, // 0x880
        m_LightStyleString: [0x8]u8, // 0x888
        m_flLightStyleStartTime: [0x8]u8, // 0x890
        m_QueuedLightStyleStrings: [0x18]u8, // 0x898
        m_LightStyleEvents: [0x18]u8, // 0x8B0
        m_LightStyleTargets: [0x18]u8, // 0x8C8
        m_StyleEvent: [0x80]u8, // 0x8E0
        m_hLightCookie: [0x8]u8, // 0x960
        m_flShape: [0x4]u8, // 0x968
        m_flSoftX: [0x4]u8, // 0x96C
        m_flSoftY: [0x4]u8, // 0x970
        m_flSkirt: [0x4]u8, // 0x974
        m_flSkirtNear: [0x4]u8, // 0x978
        m_vSizeParams: [0xC]u8, // 0x97C
        m_flRange: [0x4]u8, // 0x988
        m_vShear: [0xC]u8, // 0x98C
        m_nBakeSpecularToCubemaps: [0x4]u8, // 0x998
        m_vBakeSpecularToCubemapsSize: [0xC]u8, // 0x99C
        m_flBakeSpecularToCubemapsScale: [0x4]u8, // 0x9A8
        m_nCastShadows: [0x4]u8, // 0x9AC
        m_nShadowMapSize: [0x4]u8, // 0x9B0
        m_nShadowPriority: [0x4]u8, // 0x9B4
        m_bContactShadow: [0x1]u8, // 0x9B8
        m_bForceShadowsEnabled: [0x3]u8, // 0x9B9
        m_nBounceLight: [0x4]u8, // 0x9BC
        m_flBounceScale: [0x4]u8, // 0x9C0
        m_flMinRoughness: [0x4]u8, // 0x9C4
        m_vAlternateColor: [0xC]u8, // 0x9C8
        m_fAlternateColorBrightness: [0x4]u8, // 0x9D4
        m_nFog: [0x4]u8, // 0x9D8
        m_flFogStrength: [0x4]u8, // 0x9DC
        m_nFogShadows: [0x4]u8, // 0x9E0
        m_flFogScale: [0x4]u8, // 0x9E4
        m_flFadeSizeStart: [0x4]u8, // 0x9E8
        m_flFadeSizeEnd: [0x4]u8, // 0x9EC
        m_flShadowFadeSizeStart: [0x4]u8, // 0x9F0
        m_flShadowFadeSizeEnd: [0x4]u8, // 0x9F4
        m_bPrecomputedFieldsValid: [0x4]u8, // 0x9F8
        m_vPrecomputedBoundsMins: [0xC]u8, // 0x9FC
        m_vPrecomputedBoundsMaxs: [0xC]u8, // 0xA08
        m_vPrecomputedOBBOrigin: [0xC]u8, // 0xA14
        m_vPrecomputedOBBAngles: [0xC]u8, // 0xA20
        m_vPrecomputedOBBExtent: [0xC]u8, // 0xA2C
        m_nPrecomputedSubFrusta: [0x4]u8, // 0xA38
        m_vPrecomputedOBBOrigin0: [0xC]u8, // 0xA3C
        m_vPrecomputedOBBAngles0: [0xC]u8, // 0xA48
        m_vPrecomputedOBBExtent0: [0xC]u8, // 0xA54
        m_vPrecomputedOBBOrigin1: [0xC]u8, // 0xA60
        m_vPrecomputedOBBAngles1: [0xC]u8, // 0xA6C
        m_vPrecomputedOBBExtent1: [0xC]u8, // 0xA78
        m_vPrecomputedOBBOrigin2: [0xC]u8, // 0xA84
        m_vPrecomputedOBBAngles2: [0xC]u8, // 0xA90
        m_vPrecomputedOBBExtent2: [0xC]u8, // 0xA9C
        m_vPrecomputedOBBOrigin3: [0xC]u8, // 0xAA8
        m_vPrecomputedOBBAngles3: [0xC]u8, // 0xAB4
        m_vPrecomputedOBBExtent3: [0xC]u8, // 0xAC0
        m_vPrecomputedOBBOrigin4: [0xC]u8, // 0xACC
        m_vPrecomputedOBBAngles4: [0xC]u8, // 0xAD8
        m_vPrecomputedOBBExtent4: [0xC]u8, // 0xAE4
        m_vPrecomputedOBBOrigin5: [0xC]u8, // 0xAF0
        m_vPrecomputedOBBAngles5: [0xC]u8, // 0xAFC
        m_vPrecomputedOBBExtent5: [0xC]u8, // 0xB08
        m_bPvsModifyEntity: [0x1]u8, // 0xB14
        m_bTransmitAlways: [0x3]u8, // 0xB15
        m_VisClusters: [0x20]u8, // 0xB18
    };
    pub const CInstructorEventEntity = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_iszName: [0x8]u8, // 0x4A8
        m_iszHintTargetEntity: [0x8]u8, // 0x4B0
        m_hTargetPlayer: [0x8]u8, // 0x4B8
    };
    pub const CWeaponTec9 = extern struct {
        pad_0: [0x12A0]u8, // 0x0
    };
    pub const CPathCorner = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_bTriggerLocomotionStop: [0x1]u8, // 0x4A8
        m_bSmoothArrival: [0x1]u8, // 0x4A9
        m_bExactPositioning: [0x2]u8, // 0x4AA
        m_flWait: [0x4]u8, // 0x4AC
        m_flRadius: [0x4]u8, // 0x4B0
        m_flWaypointSuccessRadiusWhenBlocked: [0x4]u8, // 0x4B4
        m_flWaypointSuccessRadius: [0x4]u8, // 0x4B8
        m_flPathEndDistanceFromGoal: [0x4]u8, // 0x4BC
        m_flSpeed: [0x8]u8, // 0x4C0
        m_OnPass: [0x18]u8, // 0x4C8
    };
    pub const CTriggerSndSosOpvar = extern struct {
        pad_0: [0x9C8]u8, // 0x0
        m_hTouchingPlayers: [0x18]u8, // 0x9C8
        m_flPosition: [0xC]u8, // 0x9E0
        m_flCenterSize: [0x4]u8, // 0x9EC
        m_flMinVal: [0x4]u8, // 0x9F0
        m_flMaxVal: [0x4]u8, // 0x9F4
        m_opvarName: [0x8]u8, // 0x9F8
        m_stackName: [0x8]u8, // 0xA00
        m_operatorName: [0x8]u8, // 0xA08
        m_bVolIs2D: [0x1]u8, // 0xA10
        m_opvarNameChar: [0x100]u8, // 0xA11
        m_stackNameChar: [0x100]u8, // 0xB11
        m_operatorNameChar: [0x103]u8, // 0xC11
        m_VecNormPos: [0xC]u8, // 0xD14
        m_flNormCenterSize: [0x8]u8, // 0xD20
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
    pub const CPointCommentaryNode = extern struct {
        pad_0: [0xA40]u8, // 0x0
        m_iszPreCommands: [0x8]u8, // 0xA40
        m_iszPostCommands: [0x8]u8, // 0xA48
        m_iszCommentaryFile: [0x8]u8, // 0xA50
        m_iszViewTarget: [0x8]u8, // 0xA58
        m_hViewTarget: [0x4]u8, // 0xA60
        m_hViewTargetAngles: [0x4]u8, // 0xA64
        m_iszViewPosition: [0x8]u8, // 0xA68
        m_hViewPosition: [0x4]u8, // 0xA70
        m_hViewPositionMover: [0x4]u8, // 0xA74
        m_bPreventMovement: [0x1]u8, // 0xA78
        m_bUnderCrosshair: [0x1]u8, // 0xA79
        m_bUnstoppable: [0x2]u8, // 0xA7A
        m_flFinishedTime: [0x4]u8, // 0xA7C
        m_vecFinishOrigin: [0xC]u8, // 0xA80
        m_vecOriginalAngles: [0xC]u8, // 0xA8C
        m_vecFinishAngles: [0xC]u8, // 0xA98
        m_bPreventChangesWhileMoving: [0x1]u8, // 0xAA4
        m_bDisabled: [0x3]u8, // 0xAA5
        m_vecTeleportOrigin: [0xC]u8, // 0xAA8
        m_flAbortedPlaybackAt: [0x4]u8, // 0xAB4
        m_pOnCommentaryStarted: [0x18]u8, // 0xAB8
        m_pOnCommentaryStopped: [0x18]u8, // 0xAD0
        m_bActive: [0x4]u8, // 0xAE8
        m_flStartTime: [0x4]u8, // 0xAEC
        m_flStartTimeInCommentary: [0x8]u8, // 0xAF0
        m_iszTitle: [0x8]u8, // 0xAF8
        m_iszSpeakers: [0x8]u8, // 0xB00
        m_iNodeNumber: [0x4]u8, // 0xB08
        m_iNodeNumberMax: [0x4]u8, // 0xB0C
        m_bListenedTo: [0x10]u8, // 0xB10
    };
    pub const CMomentaryRotButton = extern struct {
        pad_0: [0x9D0]u8, // 0x0
        m_Position: [0x20]u8, // 0x9D0
        m_OnUnpressed: [0x18]u8, // 0x9F0
        m_OnFullyOpen: [0x18]u8, // 0xA08
        m_OnFullyClosed: [0x18]u8, // 0xA20
        m_OnReachedPosition: [0x18]u8, // 0xA38
        m_lastUsed: [0x4]u8, // 0xA50
        m_start: [0xC]u8, // 0xA54
        m_end: [0xC]u8, // 0xA60
        m_IdealYaw: [0x4]u8, // 0xA6C
        m_sNoise: [0x8]u8, // 0xA70
        m_bUpdateTarget: [0x4]u8, // 0xA78
        m_direction: [0x4]u8, // 0xA7C
        m_returnSpeed: [0x4]u8, // 0xA80
        m_flStartPosition: [0x4]u8, // 0xA84
    };
    pub const CSceneListManager = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_hListManagers: [0x18]u8, // 0x4A8
        m_iszScenes: [0x80]u8, // 0x4C0
        m_hScenes: [0x40]u8, // 0x540
    };
    pub const CEnvTilt = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_Duration: [0x4]u8, // 0x4A8
        m_Radius: [0x4]u8, // 0x4AC
        m_TiltTime: [0x4]u8, // 0x4B0
        m_stopTime: [0x4]u8, // 0x4B4
    };
    pub const CEnvSoundscapeTriggerable = extern struct {
        pad_0: [0x538]u8, // 0x0
    };
    pub const CFuncMover = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_iszPathName: [0x8]u8, // 0x850
        m_hPathMover: [0x4]u8, // 0x858
        m_hPrevPathMover: [0x4]u8, // 0x85C
        m_iszPathNodeStart: [0x8]u8, // 0x860
        m_iszPathNodeEnd: [0x8]u8, // 0x868
        m_bIgnoreEndNode: [0x4]u8, // 0x870
        m_eMoveType: [0x4]u8, // 0x874
        m_bIsReversing: [0x4]u8, // 0x878
        m_flStartSpeed: [0x4]u8, // 0x87C
        m_flPathLocation: [0x4]u8, // 0x880
        m_flT: [0x4]u8, // 0x884
        m_nCurrentNodeIndex: [0x4]u8, // 0x888
        m_nPreviousNodeIndex: [0x4]u8, // 0x88C
        m_eSolidType: [0x1]u8, // 0x890
        m_bIsMoving: [0x3]u8, // 0x891
        m_flTimeToReachMaxSpeed: [0x4]u8, // 0x894
        m_flDistanceToReachMaxSpeed: [0x4]u8, // 0x898
        m_flTimeToReachZeroSpeed: [0x4]u8, // 0x89C
        m_flComputedDistanceToReachMaxSpeed: [0x4]u8, // 0x8A0
        m_flComputedDistanceToReachZeroSpeed: [0x4]u8, // 0x8A4
        m_flStartCurveScale: [0x4]u8, // 0x8A8
        m_flStopCurveScale: [0x4]u8, // 0x8AC
        m_flDistanceToReachZeroSpeed: [0x4]u8, // 0x8B0
        m_flTimeMovementStart: [0x4]u8, // 0x8B4
        m_flTimeMovementStop: [0x4]u8, // 0x8B8
        m_hStopAtNode: [0x4]u8, // 0x8BC
        m_flPathLocationToBeginStop: [0x4]u8, // 0x8C0
        m_flPathLocationStart: [0x4]u8, // 0x8C4
        m_flBeginStopT: [0x8]u8, // 0x8C8
        m_iszStartForwardSound: [0x8]u8, // 0x8D0
        m_iszLoopForwardSound: [0x8]u8, // 0x8D8
        m_iszStopForwardSound: [0x8]u8, // 0x8E0
        m_iszStartReverseSound: [0x8]u8, // 0x8E8
        m_iszLoopReverseSound: [0x8]u8, // 0x8F0
        m_iszStopReverseSound: [0x8]u8, // 0x8F8
        m_iszArriveAtDestinationSound: [0x20]u8, // 0x900
        m_OnMovementEnd: [0x18]u8, // 0x920
        m_bStartAtClosestPoint: [0x1]u8, // 0x938
        m_bStartAtEnd: [0x1]u8, // 0x939
        m_bStartFollowingClosestMover: [0x2]u8, // 0x93A
        m_flStartFollowingClosestMoverWhenWithinDistance: [0x4]u8, // 0x93C
        m_flStartFollowingClosestMoverWhenOutsideDistance: [0x4]u8, // 0x940
        m_eOrientationUpdate: [0x4]u8, // 0x944
        m_flTimeStartOrientationChange: [0x4]u8, // 0x948
        m_flTimeToBlendToNewOrientation: [0x4]u8, // 0x94C
        m_flDurationBlendToNewOrientationRan: [0x4]u8, // 0x950
        m_bCreateMovableNavMesh: [0x1]u8, // 0x954
        m_bCreateMovableSurfaceGraph: [0x1]u8, // 0x955
        m_bAllowMovableNavMeshDockingOnEntireEntity: [0x2]u8, // 0x956
        m_OnNodePassed: [0x20]u8, // 0x958
        m_iszOrientationMatchEntityName: [0x8]u8, // 0x978
        m_hOrientationMatchEntity: [0x4]u8, // 0x980
        m_vLerpToNewPosStartWS: [0xC]u8, // 0x984
        m_flLerpToPositionTargetT: [0x4]u8, // 0x990
        m_flLerpToPositionT: [0x4]u8, // 0x994
        m_flLerpToPositionDeltaT: [0x4]u8, // 0x998
        m_hTransitionSourcePath: [0x4]u8, // 0x99C
        m_flTransitionSourceT: [0x4]u8, // 0x9A0
        m_flTransitionSourcePathLocation: [0x4]u8, // 0x9A4
        m_iszTransitionSourcePathNodeStart: [0x8]u8, // 0x9A8
        m_bStoppedDuringTransition: [0x8]u8, // 0x9B0
        m_OnLerpToPositionComplete: [0x18]u8, // 0x9B8
        m_bIsPaused: [0x4]u8, // 0x9D0
        m_eTransitionedToPathNodeAction: [0xC]u8, // 0x9D4
        m_qTransitionSourceOrientation: [0x10]u8, // 0x9E0
        m_nDelayedTeleportToNode: [0x4]u8, // 0x9F0
        m_bIsImGuiLogging: [0x1]u8, // 0x9F4
        m_bIsImGuiEntTextLogging: [0x3]u8, // 0x9F5
        m_flSpeed: [0x4]u8, // 0x9F8
        m_hFollowEntity: [0x4]u8, // 0x9FC
        m_flFollowDistance: [0x4]u8, // 0xA00
        m_flFollowMinimumSpeed: [0x4]u8, // 0xA04
        m_flCurFollowEntityT: [0x4]u8, // 0xA08
        m_flCurFollowSpeed: [0x4]u8, // 0xA0C
        m_strOrientationFaceEntityName: [0x8]u8, // 0xA10
        m_hOrientationFaceEntity: [0x8]u8, // 0xA18
        m_OnStart: [0x18]u8, // 0xA20
        m_OnStartForward: [0x18]u8, // 0xA38
        m_OnStartReverse: [0x18]u8, // 0xA50
        m_OnStop: [0x18]u8, // 0xA68
        m_OnStopped: [0x18]u8, // 0xA80
        m_bNextNodeReturnsCurrent: [0x1]u8, // 0xA98
        m_bStartedMoving: [0x1F]u8, // 0xA99
        m_eFollowEntityDirection: [0x4]u8, // 0xAB8
        m_hFollowMover: [0x4]u8, // 0xABC
        m_iszFollowEntityName: [0x8]u8, // 0xAC0
        m_iszFollowMoverEntityName: [0x8]u8, // 0xAC8
        m_flFollowMoverDistance: [0x4]u8, // 0xAD0
        m_flFollowMoverRatio: [0x4]u8, // 0xAD4
        m_flFollowMoverCalculatedDistance: [0x4]u8, // 0xAD8
        m_flFollowMoverSpringStrength: [0x4]u8, // 0xADC
        m_nFollowMoverConstraintPriority: [0x4]u8, // 0xAE0
        m_vecFollowMoverCouplerRange: [0x8]u8, // 0xAE4
        m_bFollowConstraintsInitialized: [0x4]u8, // 0xAEC
        m_eFollowConstraint: [0x4]u8, // 0xAF0
        m_flFollowMoverSpeed: [0x4]u8, // 0xAF4
        m_flFollowMoverVelocity: [0x4]u8, // 0xAF8
        m_nTickMovementRan: [0x4]u8, // 0xAFC
        m_movementSummary: [0x20]u8, // 0xB00
        m_bStopFromBeginStopTarget: [0x1]u8, // 0xB20
        m_bQueueStop: [0x1]u8, // 0xB21
        m_bQueueStopMoving: [0x1]u8, // 0xB22
        m_bQueueSetupPathMover: [0x1]u8, // 0xB23
        m_ePathRebuildStrategy: [0x4]u8, // 0xB24
        m_eFindFollowMoverStrategy: [0x4]u8, // 0xB28
        m_bDisableDecelerationToStop: [0x4]u8, // 0xB2C
        m_vOffsetFromPath: [0x10]u8, // 0xB30
    };
    pub const CPhysicsProp = extern struct {
        pad_0: [0xBE0]u8, // 0x0
        m_MotionEnabled: [0x18]u8, // 0xBE0
        m_OnAwakened: [0x18]u8, // 0xBF8
        m_OnAwake: [0x18]u8, // 0xC10
        m_OnAsleep: [0x18]u8, // 0xC28
        m_OnPlayerUse: [0x18]u8, // 0xC40
        m_OnOutOfWorld: [0x18]u8, // 0xC58
        m_OnPlayerPickup: [0x18]u8, // 0xC70
        m_bForceNavIgnore: [0x1]u8, // 0xC88
        m_bNoNavmeshBlocker: [0x1]u8, // 0xC89
        m_bForceNpcExclude: [0x2]u8, // 0xC8A
        m_massScale: [0x4]u8, // 0xC8C
        m_buoyancyScale: [0x4]u8, // 0xC90
        m_damageType: [0x4]u8, // 0xC94
        m_damageToEnableMotion: [0x4]u8, // 0xC98
        m_flForceToEnableMotion: [0x4]u8, // 0xC9C
        m_bDroppedByPlayer: [0x1]u8, // 0xCA0
        m_bTouchedByPlayer: [0x1]u8, // 0xCA1
        m_bFirstCollisionAfterLaunch: [0x1]u8, // 0xCA2
        m_bHasBeenAwakened: [0x1]u8, // 0xCA3
        m_bIsOverrideProp: [0x4]u8, // 0xCA4
        m_flLastBurn: [0x4]u8, // 0xCA8
        m_nDynamicContinuousContactBehavior: [0x4]u8, // 0xCAC
        m_fNextCheckDisableMotionContactsTime: [0x4]u8, // 0xCB0
        m_iInitialGlowState: [0x4]u8, // 0xCB4
        m_nGlowRange: [0x4]u8, // 0xCB8
        m_nGlowRangeMin: [0x4]u8, // 0xCBC
        m_glowColor: [0x4]u8, // 0xCC0
        m_bShouldAutoConvertBackFromDebris: [0x1]u8, // 0xCC4
        m_bMuteImpactEffects: [0x3]u8, // 0xCC5
        m_nNavObstacleType: [0x4]u8, // 0xCC8
        m_bUpdateNavWhenMoving: [0x1]u8, // 0xCCC
        m_bForceNavObstacleCut: [0x1]u8, // 0xCCD
        m_bAcceptDamageFromHeldObjects: [0x1]u8, // 0xCCE
        m_bEnableUseOutput: [0x1]u8, // 0xCCF
        m_CrateType: [0x8]u8, // 0xCD0
        m_strItemClass: [0x20]u8, // 0xCD8
        m_nItemCount: [0x10]u8, // 0xCF8
        m_bRemovableForAmmoBalancing: [0x1]u8, // 0xD08
        m_bAwake: [0x1]u8, // 0xD09
        m_bAttachedToReferenceFrame: [0x6]u8, // 0xD0A
    };
    pub const CFuncNavObstruction = extern struct {
        pad_0: [0x868]u8, // 0x0
        m_bDisabled: [0x1]u8, // 0x868
        m_bUseAsyncObstacleUpdate: [0x7]u8, // 0x869
    };
    pub const CPhysWheelConstraint = extern struct {
        pad_0: [0x508]u8, // 0x0
        m_flSuspensionFrequency: [0x4]u8, // 0x508
        m_flSuspensionDampingRatio: [0x4]u8, // 0x50C
        m_flSuspensionHeightOffset: [0x4]u8, // 0x510
        m_bEnableSuspensionLimit: [0x4]u8, // 0x514
        m_flMinSuspensionOffset: [0x4]u8, // 0x518
        m_flMaxSuspensionOffset: [0x4]u8, // 0x51C
        m_bEnableSteeringLimit: [0x4]u8, // 0x520
        m_flMinSteeringAngle: [0x4]u8, // 0x524
        m_flMaxSteeringAngle: [0x4]u8, // 0x528
        m_flSteeringAxisFriction: [0x4]u8, // 0x52C
        m_flSpinAxisFriction: [0x4]u8, // 0x530
        m_hSteeringMimicsEntity: [0xC]u8, // 0x534
    };
    pub const CSkyboxReference = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_worldGroupId: [0x4]u8, // 0x4A8
        m_hSkyCamera: [0x4]u8, // 0x4AC
    };
    pub const CPointPulse = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CMolotovProjectile = extern struct {
        pad_0: [0xB40]u8, // 0x0
        m_bIsIncGrenade: [0x18]u8, // 0xB40
        m_bDetonated: [0x8]u8, // 0xB58
        m_stillTimer: [0xE0]u8, // 0xB60
    };
    pub const CFilterClass = extern struct {
        pad_0: [0x4E0]u8, // 0x0
        m_iFilterClass: [0x8]u8, // 0x4E0
    };
    pub const CPathWithDynamicNodes = extern struct {
        pad_0: [0x5B0]u8, // 0x0
        m_vecPathNodes: [0x20]u8, // 0x5B0
        m_xInitialPathWorldToLocal: [0x20]u8, // 0x5D0
        m_eDesiredDirection: [0x4]u8, // 0x5F0
        m_bIgnoreParentRotation: [0xC]u8, // 0x5F4
    };
    pub const CColorCorrection = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_flFadeInDuration: [0x4]u8, // 0x4A8
        m_flFadeOutDuration: [0x4]u8, // 0x4AC
        m_flStartFadeInWeight: [0x4]u8, // 0x4B0
        m_flStartFadeOutWeight: [0x4]u8, // 0x4B4
        m_flTimeStartFadeIn: [0x4]u8, // 0x4B8
        m_flTimeStartFadeOut: [0x4]u8, // 0x4BC
        m_flMaxWeight: [0x4]u8, // 0x4C0
        m_bStartDisabled: [0x1]u8, // 0x4C4
        m_bEnabled: [0x1]u8, // 0x4C5
        m_bMaster: [0x1]u8, // 0x4C6
        m_bClientSide: [0x1]u8, // 0x4C7
        m_bExclusive: [0x4]u8, // 0x4C8
        m_MinFalloff: [0x4]u8, // 0x4CC
        m_MaxFalloff: [0x4]u8, // 0x4D0
        m_flCurWeight: [0x4]u8, // 0x4D4
        m_netlookupFilename: [0x200]u8, // 0x4D8
        m_lookupFilename: [0x8]u8, // 0x6D8
    };
    pub const CPropDoorRotatingBreakable = extern struct {
        pad_0: [0xF30]u8, // 0x0
        m_bBreakable: [0x1]u8, // 0xF30
        m_isAbleToCloseAreaPortals: [0x3]u8, // 0xF31
        m_currentDamageState: [0x4]u8, // 0xF34
        m_damageStates: [0x18]u8, // 0xF38
    };
    pub const CLightDirectionalEntity = extern struct {
        pad_0: [0x858]u8, // 0x0
    };
    pub const CBaseClientUIEntity = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_bEnabled: [0x8]u8, // 0x850
        m_DialogXMLName: [0x8]u8, // 0x858
        m_PanelClassName: [0x8]u8, // 0x860
        m_PanelID: [0x8]u8, // 0x868
        m_CustomOutput0: [0x20]u8, // 0x870
        m_CustomOutput1: [0x20]u8, // 0x890
        m_CustomOutput2: [0x20]u8, // 0x8B0
        m_CustomOutput3: [0x20]u8, // 0x8D0
        m_CustomOutput4: [0x20]u8, // 0x8F0
        m_CustomOutput5: [0x20]u8, // 0x910
        m_CustomOutput6: [0x20]u8, // 0x930
        m_CustomOutput7: [0x20]u8, // 0x950
        m_CustomOutput8: [0x20]u8, // 0x970
        m_CustomOutput9: [0x20]u8, // 0x990
    };
    pub const CBreakable = extern struct {
        pad_0: [0x858]u8, // 0x0
        m_CPropDataComponent: [0x40]u8, // 0x858
        m_Material: [0x4]u8, // 0x898
        m_hBreaker: [0x4]u8, // 0x89C
        m_Explosion: [0x8]u8, // 0x8A0
        m_iszSpawnObject: [0x8]u8, // 0x8A8
        m_flPressureDelay: [0x4]u8, // 0x8B0
        m_iMinHealthDmg: [0x4]u8, // 0x8B4
        m_iszPropData: [0x8]u8, // 0x8B8
        m_impactEnergyScale: [0x4]u8, // 0x8C0
        m_nOverrideBlockLOS: [0x4]u8, // 0x8C4
        m_OnStartDeath: [0x18]u8, // 0x8C8
        m_OnBreak: [0x18]u8, // 0x8E0
        m_OnHealthChanged: [0x20]u8, // 0x8F8
        m_PerformanceMode: [0x4]u8, // 0x918
        m_hPhysicsAttacker: [0x4]u8, // 0x91C
        m_flLastPhysicsInfluenceTime: [0x8]u8, // 0x920
    };
    pub const CInfoLandmark = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CBaseFilter = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_bNegated: [0x8]u8, // 0x4A8
        m_OnPass: [0x18]u8, // 0x4B0
        m_OnFail: [0x18]u8, // 0x4C8
    };
    pub const WeaponPurchaseTracker_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_weaponPurchases: [0x68]u8, // 0x8
    };
    pub const CPulseCell_Outflow_PlaySceneBase__CursorState_t = extern struct {
        m_sceneInstance: [0x4]u8, // 0x0
        m_mainActor: [0x4]u8, // 0x4
        m_cursorIDToEventID: [0x20]u8, // 0x8
    };
    pub const CMapInfo = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_iBuyingStatus: [0x4]u8, // 0x4A8
        m_flBombRadius: [0x4]u8, // 0x4AC
        m_iPetPopulation: [0x4]u8, // 0x4B0
        m_bUseNormalSpawnsForDM: [0x1]u8, // 0x4B4
        m_bDisableAutoGeneratedDMSpawns: [0x3]u8, // 0x4B5
        m_flBotMaxVisionDistance: [0x4]u8, // 0x4B8
        m_iHostageCount: [0x4]u8, // 0x4BC
        m_bFadePlayerVisibilityFarZ: [0x1]u8, // 0x4C0
        m_bRainTraceToSkyEnabled: [0x1]u8, // 0x4C1
        m_bGPUCullSkybox: [0x2]u8, // 0x4C2
        m_flEnvRainStrength: [0x4]u8, // 0x4C4
        m_flEnvPuddleRippleStrength: [0x4]u8, // 0x4C8
        m_flEnvPuddleRippleDirection: [0x4]u8, // 0x4CC
        m_flEnvWetnessCoverage: [0x4]u8, // 0x4D0
        m_flEnvWetnessDryingAmount: [0x4]u8, // 0x4D4
    };
    pub const CGradientFog = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_hGradientFogTexture: [0x8]u8, // 0x4A8
        m_flFogStartDistance: [0x4]u8, // 0x4B0
        m_flFogEndDistance: [0x4]u8, // 0x4B4
        m_bHeightFogEnabled: [0x4]u8, // 0x4B8
        m_flFogStartHeight: [0x4]u8, // 0x4BC
        m_flFogEndHeight: [0x4]u8, // 0x4C0
        m_flFarZ: [0x4]u8, // 0x4C4
        m_flFogMaxOpacity: [0x4]u8, // 0x4C8
        m_flFogFalloffExponent: [0x4]u8, // 0x4CC
        m_flFogVerticalExponent: [0x4]u8, // 0x4D0
        m_fogColor: [0x4]u8, // 0x4D4
        m_flFogStrength: [0x4]u8, // 0x4D8
        m_flFadeTime: [0x4]u8, // 0x4DC
        m_bStartDisabled: [0x1]u8, // 0x4E0
        m_bIsEnabled: [0x1]u8, // 0x4E1
        m_bGradientFogNeedsTextures: [0x6]u8, // 0x4E2
    };
    pub const CSoundOpvarSetAABBEntity = extern struct {
        pad_0: [0x6A8]u8, // 0x0
    };
    pub const CPulseCell_Outflow_PlaySequence = extern struct {
        pad_0: [0x138]u8, // 0x0
        m_ParamSequenceName: [0x8]u8, // 0x138
    };
    pub const CPulseCell_Outflow_PlayDynamicVCD = extern struct {
        pad_0: [0x138]u8, // 0x0
    };
    pub const CPointClientUIWorldTextPanel = extern struct {
        pad_0: [0xA10]u8, // 0x0
        m_messageText: [0x200]u8, // 0xA10
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
    pub const CFuncRotator = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_eRotateType: [0x4]u8, // 0x850
        m_bIsRotating: [0x1]u8, // 0x854
        m_eSolidType: [0x3]u8, // 0x855
        m_flSpeed: [0x4]u8, // 0x858
        m_flRotationDistanceDegrees: [0x4]u8, // 0x85C
        m_flTimeToCompleteRotation: [0x4]u8, // 0x860
        m_hRotatorTarget: [0x4]u8, // 0x864
        m_strRotatorTarget: [0x8]u8, // 0x868
        m_OnRotationStarted: [0x18]u8, // 0x870
        m_OnRotationCompleted: [0x18]u8, // 0x888
        m_OnOscillate: [0x18]u8, // 0x8A0
        m_OnOscillateStartArrive: [0x18]u8, // 0x8B8
        m_OnOscillateStartDepart: [0x18]u8, // 0x8D0
        m_OnOscillateEndArrive: [0x18]u8, // 0x8E8
        m_OnOscillateEndDepart: [0x18]u8, // 0x900
        m_nTickRotateRan: [0x4]u8, // 0x918
        m_bStartedRotating: [0x4]u8, // 0x91C
        m_rotationSummary: [0x8]u8, // 0x920
        m_flTimeToReachMaxSpeed: [0x4]u8, // 0x928
        m_flTimeToReachZeroSpeed: [0x4]u8, // 0x92C
        m_flTimeRotationStart: [0x4]u8, // 0x930
        m_flTimeRotationStop: [0x4]u8, // 0x934
        m_flStartSpeed: [0x8]u8, // 0x938
        m_qSpawnOrientation: [0x10]u8, // 0x940
        m_bReturningToInitialRotation: [0x4]u8, // 0x950
        m_flMinYawRotation: [0x4]u8, // 0x954
        m_flMaxYawRotation: [0x4]u8, // 0x958
        m_bOscillationFromStart: [0x4]u8, // 0x95C
        m_iszStartSound: [0x8]u8, // 0x960
        m_iszLoopSound: [0x20]u8, // 0x968
        m_iszStopSound: [0x8]u8, // 0x988
        m_flTargetAngle: [0x4]u8, // 0x990
        m_flCurrentAngle: [0x4]u8, // 0x994
        m_eRotationAxis: [0x4]u8, // 0x998
        m_flSpeedDriftFromOverRotate: [0x4]u8, // 0x99C
        m_bQueueStop: [0x10]u8, // 0x9A0
    };
    pub const CSoundEventEntity = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_bStartOnSpawn: [0x1]u8, // 0x4A8
        m_bToLocalPlayer: [0x1]u8, // 0x4A9
        m_bStopOnNew: [0x1]u8, // 0x4AA
        m_bSaveRestore: [0x1]u8, // 0x4AB
        m_bSavedIsPlaying: [0x4]u8, // 0x4AC
        m_flSavedElapsedTime: [0x8]u8, // 0x4B0
        m_iszSourceEntityName: [0x8]u8, // 0x4B8
        m_iszAttachmentName: [0x8]u8, // 0x4C0
        m_onGUIDChanged: [0x30]u8, // 0x4C8
        m_onSoundFinished: [0x18]u8, // 0x4F8
        m_flClientCullRadius: [0x30]u8, // 0x510
        m_iszSoundName: [0x1C]u8, // 0x540
        m_hSource: [0x4]u8, // 0x55C
        m_nEntityIndexSelection: [0x8]u8, // 0x560
    };
    pub const CInfoPlayerCounterterrorist = extern struct {
        pad_0: [0x4B8]u8, // 0x0
    };
    pub const CEnvFade = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_fadeColor: [0x4]u8, // 0x4A8
        m_Duration: [0x4]u8, // 0x4AC
        m_HoldDuration: [0x8]u8, // 0x4B0
        m_OnBeginFade: [0x18]u8, // 0x4B8
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
    pub const CTriggerImpact = extern struct {
        pad_0: [0x9E0]u8, // 0x0
        m_flMagnitude: [0x4]u8, // 0x9E0
        m_flNoise: [0x4]u8, // 0x9E4
        m_flViewkick: [0x8]u8, // 0x9E8
        m_pOutputForce: [0x28]u8, // 0x9F0
    };
    pub const CCSGameModeRules_Deathmatch = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_flDMBonusStartTime: [0x4]u8, // 0x30
        m_flDMBonusTimeLength: [0x4]u8, // 0x34
        m_sDMBonusWeapon: [0x50]u8, // 0x38
    };
    pub const CTestPulseIO__EntityHandleIntArgs_t = extern struct {
        handleA: [0x4]u8, // 0x0
        valueB: [0x4]u8, // 0x4
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
    pub const CBasePropDoor = extern struct {
        pad_0: [0xCA0]u8, // 0x0
        m_flAutoReturnDelay: [0x8]u8, // 0xCA0
        m_hDoorList: [0x18]u8, // 0xCA8
        m_nHardwareType: [0x4]u8, // 0xCC0
        m_bNeedsHardware: [0x4]u8, // 0xCC4
        m_eDoorState: [0x4]u8, // 0xCC8
        m_bLocked: [0x1]u8, // 0xCCC
        m_bNoNPCs: [0x3]u8, // 0xCCD
        m_closedPosition: [0xC]u8, // 0xCD0
        m_closedAngles: [0xC]u8, // 0xCDC
        m_hBlocker: [0x4]u8, // 0xCE8
        m_bFirstBlocked: [0x4]u8, // 0xCEC
        m_ls: [0x20]u8, // 0xCF0
        m_bForceClosed: [0x4]u8, // 0xD10
        m_vecLatchWorldPosition: [0xC]u8, // 0xD14
        m_hActivator: [0x4]u8, // 0xD20
        m_flSpeed: [0x1C]u8, // 0xD24
        m_SoundMoving: [0x8]u8, // 0xD40
        m_SoundOpen: [0x8]u8, // 0xD48
        m_SoundClose: [0x8]u8, // 0xD50
        m_SoundLock: [0x8]u8, // 0xD58
        m_SoundUnlock: [0x8]u8, // 0xD60
        m_SoundLatch: [0x8]u8, // 0xD68
        m_SoundPound: [0x8]u8, // 0xD70
        m_SoundJiggle: [0x8]u8, // 0xD78
        m_SoundLockedAnim: [0x8]u8, // 0xD80
        m_numCloseAttempts: [0x4]u8, // 0xD88
        m_nPhysicsMaterial: [0x4]u8, // 0xD8C
        m_SlaveName: [0x8]u8, // 0xD90
        m_hMaster: [0x8]u8, // 0xD98
        m_OnBlockedClosing: [0x18]u8, // 0xDA0
        m_OnBlockedOpening: [0x18]u8, // 0xDB8
        m_OnUnblockedClosing: [0x18]u8, // 0xDD0
        m_OnUnblockedOpening: [0x18]u8, // 0xDE8
        m_OnFullyClosed: [0x18]u8, // 0xE00
        m_OnFullyOpen: [0x18]u8, // 0xE18
        m_OnClose: [0x18]u8, // 0xE30
        m_OnOpen: [0x18]u8, // 0xE48
        m_OnLockedUse: [0x18]u8, // 0xE60
        m_OnAjarOpen: [0x18]u8, // 0xE78
    };
    pub const CLogicBranchList = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_nLogicBranchNames: [0x80]u8, // 0x4A8
        m_LogicBranchList: [0x18]u8, // 0x528
        m_eLastState: [0x8]u8, // 0x540
        m_OnAllTrue: [0x18]u8, // 0x548
        m_OnAllFalse: [0x18]u8, // 0x560
        m_OnMixed: [0x18]u8, // 0x578
    };
    pub const CBtActionParachutePositioning = extern struct {
        pad_0: [0x58]u8, // 0x0
        m_ActionTimer: [0x20]u8, // 0x58
    };
    pub const CAK47 = extern struct {
        pad_0: [0x12A0]u8, // 0x0
    };
    pub const CDynamicProp = extern struct {
        pad_0: [0xBD0]u8, // 0x0
        m_bGraphControllerEnabled: [0x10]u8, // 0xBD0
        m_bCreateNavObstacle: [0x1]u8, // 0xBE0
        m_bNavObstacleUpdatesOverridden: [0x1]u8, // 0xBE1
        m_bUseHitboxesForRenderBox: [0x1]u8, // 0xBE2
        m_bUseAnimGraph: [0x5]u8, // 0xBE3
        m_pOutputAnimBegun: [0x18]u8, // 0xBE8
        m_pOutputAnimOver: [0x18]u8, // 0xC00
        m_pOutputAnimLoopCycleOver: [0x18]u8, // 0xC18
        m_OnAnimReachedStart: [0x18]u8, // 0xC30
        m_OnAnimReachedEnd: [0x18]u8, // 0xC48
        m_iszIdleAnim: [0x8]u8, // 0xC60
        m_nIdleAnimLoopMode: [0x4]u8, // 0xC68
        m_bRandomizeCycle: [0x1]u8, // 0xC6C
        m_bStartDisabled: [0x1]u8, // 0xC6D
        m_bFiredStartEndOutput: [0x1]u8, // 0xC6E
        m_bForceNpcExclude: [0x1]u8, // 0xC6F
        m_bCreateMovableSurfaceGraph: [0x1]u8, // 0xC70
        m_bCreateNonSolid: [0x1]u8, // 0xC71
        m_bIsOverrideProp: [0x2]u8, // 0xC72
        m_iInitialGlowState: [0x4]u8, // 0xC74
        m_nGlowRange: [0x4]u8, // 0xC78
        m_nGlowRangeMin: [0x4]u8, // 0xC7C
        m_glowColor: [0x4]u8, // 0xC80
        m_nGlowTeam: [0xC]u8, // 0xC84
    };
    pub const CHostageAlias_info_hostage_spawn = extern struct {
        pad_0: [0x2DA0]u8, // 0x0
    };
    pub const CFilterTeam = extern struct {
        pad_0: [0x4E0]u8, // 0x0
        m_iFilterTeam: [0x8]u8, // 0x4E0
    };
    pub const CFuncConveyor = extern struct {
        pad_0: [0x850]u8, // 0x0
        m_szConveyorModels: [0x8]u8, // 0x850
        m_flTransitionDurationSeconds: [0x4]u8, // 0x858
        m_flSpeed: [0x4]u8, // 0x85C
        m_angMoveEntitySpace: [0xC]u8, // 0x860
        m_vecMoveDirEntitySpace: [0xC]u8, // 0x86C
        m_flTargetSpeed: [0x4]u8, // 0x878
        m_nTransitionStartTick: [0x4]u8, // 0x87C
        m_nTransitionDurationTicks: [0x4]u8, // 0x880
        m_flTransitionStartSpeed: [0x4]u8, // 0x884
        m_flFrictionScale: [0x8]u8, // 0x888
        m_hConveyorModels: [0x18]u8, // 0x890
    };
    pub const CTriggerPhysics = extern struct {
        pad_0: [0x9D0]u8, // 0x0
        m_pController: [0x8]u8, // 0x9D0
        m_gravityScale: [0x4]u8, // 0x9D8
        m_linearLimit: [0x4]u8, // 0x9DC
        m_linearDamping: [0x4]u8, // 0x9E0
        m_angularLimit: [0x4]u8, // 0x9E4
        m_angularDamping: [0x4]u8, // 0x9E8
        m_linearForce: [0x4]u8, // 0x9EC
        m_flFrequency: [0x4]u8, // 0x9F0
        m_flDampingRatio: [0x4]u8, // 0x9F4
        m_vecLinearForcePointAt: [0xC]u8, // 0x9F8
        m_bCollapseToForcePoint: [0x4]u8, // 0xA04
        m_vecLinearForcePointAtWorld: [0xC]u8, // 0xA08
        m_vecLinearForceDirection: [0xC]u8, // 0xA14
        m_bForceDirectionIsInLocalSpace: [0x1]u8, // 0xA20
        m_bConvertToDebrisWhenPossible: [0x7]u8, // 0xA21
    };
    pub const CInfoInstructorHintBombTargetB = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CFuncTimescale = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_flDesiredTimescale: [0x4]u8, // 0x4A8
        m_flAcceleration: [0x4]u8, // 0x4AC
        m_flMinBlendRate: [0x4]u8, // 0x4B0
        m_flBlendDeltaMultiplier: [0x4]u8, // 0x4B4
        m_isStarted: [0x8]u8, // 0x4B8
    };
    pub const CSoundOpvarSetPointEntity = extern struct {
        pad_0: [0x550]u8, // 0x0
        m_OnEnter: [0x18]u8, // 0x550
        m_OnExit: [0x18]u8, // 0x568
        m_bAutoDisable: [0x44]u8, // 0x580
        m_flDistanceMin: [0x4]u8, // 0x5C4
        m_flDistanceMax: [0x4]u8, // 0x5C8
        m_flDistanceMapMin: [0x4]u8, // 0x5CC
        m_flDistanceMapMax: [0x4]u8, // 0x5D0
        m_flOcclusionRadius: [0x4]u8, // 0x5D4
        m_flOcclusionMin: [0x4]u8, // 0x5D8
        m_flOcclusionMax: [0x4]u8, // 0x5DC
        m_flValSetOnDisable: [0x4]u8, // 0x5E0
        m_bSetValueOnDisable: [0x1]u8, // 0x5E4
        m_bReloading: [0x3]u8, // 0x5E5
        m_nSimulationMode: [0x4]u8, // 0x5E8
        m_nVisibilitySamples: [0x4]u8, // 0x5EC
        m_vDynamicProxyPoint: [0xC]u8, // 0x5F0
        m_flDynamicMaximumOcclusion: [0x4]u8, // 0x5FC
        m_hDynamicEntity: [0x8]u8, // 0x600
        m_iszDynamicEntityName: [0x8]u8, // 0x608
        m_flPathingDistanceNormFactor: [0x4]u8, // 0x610
        m_vPathingSourcePos: [0xC]u8, // 0x614
        m_vPathingListenerPos: [0xC]u8, // 0x620
        m_vPathingDirection: [0xC]u8, // 0x62C
        m_nPathingSourceIndex: [0x8]u8, // 0x638
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
    pub const CInfoTargetServerOnly = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CCSGO_RushIntroCharacterPosition = extern struct {
        pad_0: [0x1468]u8, // 0x0
    };
    pub const CServerRagdollTrigger = extern struct {
        pad_0: [0x9C8]u8, // 0x0
    };
    pub const CDynamicPropAlias_dynamic_prop = extern struct {
        pad_0: [0xC90]u8, // 0x0
    };
    pub const CMarkupVolumeTagged = extern struct {
        pad_0: [0x858]u8, // 0x0
        m_GroupNames: [0x18]u8, // 0x858
        m_Tags: [0x18]u8, // 0x870
        m_bIsGroup: [0x1]u8, // 0x888
        m_bGroupByPrefab: [0x1]u8, // 0x889
        m_bGroupByVolume: [0x1]u8, // 0x88A
        m_bGroupOtherGroups: [0x1]u8, // 0x88B
        m_bIsInGroup: [0x4]u8, // 0x88C
    };
    pub const CInfoParticleTarget = extern struct {
        pad_0: [0x4A8]u8, // 0x0
    };
    pub const CEnvCubemap = extern struct {
        pad_0: [0x528]u8, // 0x0
        m_Entity_hCubemapTexture: [0x8]u8, // 0x528
        m_Entity_bCustomCubemapTexture: [0x4]u8, // 0x530
        m_Entity_flInfluenceRadius: [0x4]u8, // 0x534
        m_Entity_vBoxProjectMins: [0xC]u8, // 0x538
        m_Entity_vBoxProjectMaxs: [0xC]u8, // 0x544
        m_Entity_bMoveable: [0x4]u8, // 0x550
        m_Entity_nHandshake: [0x4]u8, // 0x554
        m_Entity_nEnvCubeMapArrayIndex: [0x4]u8, // 0x558
        m_Entity_nPriority: [0x4]u8, // 0x55C
        m_Entity_flEdgeFadeDist: [0x4]u8, // 0x560
        m_Entity_vEdgeFadeDists: [0xC]u8, // 0x564
        m_Entity_flDiffuseScale: [0x4]u8, // 0x570
        m_Entity_bStartDisabled: [0x1]u8, // 0x574
        m_Entity_bDefaultEnvMap: [0x1]u8, // 0x575
        m_Entity_bDefaultSpecEnvMap: [0x1]u8, // 0x576
        m_Entity_bIndoorCubeMap: [0x1]u8, // 0x577
        m_Entity_bCopyDiffuseFromDefaultCubemap: [0x10]u8, // 0x578
        m_Entity_bEnabled: [0x8]u8, // 0x588
    };
    pub const CCSPlayer_DamageReactServices = extern struct {
        pad_0: [0x68]u8, // 0x0
    };
    pub const CWeaponXM1014 = extern struct {
        pad_0: [0x1280]u8, // 0x0
    };
    pub const CTriggerLerpObject = extern struct {
        pad_0: [0x9C8]u8, // 0x0
        m_iszLerpTarget: [0x8]u8, // 0x9C8
        m_hLerpTarget: [0x8]u8, // 0x9D0
        m_iszLerpTargetAttachment: [0x8]u8, // 0x9D8
        m_hLerpTargetAttachment: [0x4]u8, // 0x9E0
        m_flLerpDuration: [0x4]u8, // 0x9E4
        m_bAttachedEntityWasParented: [0x1]u8, // 0x9E8
        m_bLerpRestoreMoveType: [0x1]u8, // 0x9E9
        m_bSingleLerpObject: [0x6]u8, // 0x9EA
        m_vecLerpingObjects: [0x18]u8, // 0x9F0
        m_iszLerpEffect: [0x8]u8, // 0xA08
        m_iszLerpSound: [0x8]u8, // 0xA10
        m_bAttachTouchingObject: [0x4]u8, // 0xA18
        m_hEntityToWaitForDisconnect: [0x4]u8, // 0xA1C
        m_OnLerpStarted: [0x18]u8, // 0xA20
        m_OnLerpFinished: [0x18]u8, // 0xA38
        m_OnDetached: [0x18]u8, // 0xA50
    };
    pub const CPhysicsPropOverride = extern struct {
        pad_0: [0xD10]u8, // 0x0
    };
    pub const CTriggerSave = extern struct {
        pad_0: [0x9C8]u8, // 0x0
        m_bForceNewLevelUnit: [0x4]u8, // 0x9C8
        m_fDangerousTimer: [0x4]u8, // 0x9CC
        m_minHitPoints: [0x4]u8, // 0x9D0
        m_flRetriggerDelay: [0x4]u8, // 0x9D4
    };
    pub const CPointHurt = extern struct {
        pad_0: [0x4A8]u8, // 0x0
        m_nDamage: [0x4]u8, // 0x4A8
        m_bitsDamageType: [0x4]u8, // 0x4AC
        m_flRadius: [0x4]u8, // 0x4B0
        m_flDelay: [0x4]u8, // 0x4B4
        m_strTarget: [0x8]u8, // 0x4B8
        m_pActivator: [0x8]u8, // 0x4C0
    };
    pub const CBaseAnimGraphAlias_baseanimating = extern struct {
        pad_0: [0xA40]u8, // 0x0
    };
    pub const CBasePlayerController = extern struct {
        pad_0: [0x4B0]u8, // 0x0
        m_nInButtonsWhichAreToggles: [0x8]u8, // 0x4B0
        m_nTickBase: [0x28]u8, // 0x4B8
        m_hPawn: [0x4]u8, // 0x4E0
        m_bKnownTeamMismatch: [0x8]u8, // 0x4E4
        m_nSplitScreenSlot: [0x4]u8, // 0x4EC
        m_hSplitOwner: [0x8]u8, // 0x4F0
        m_hSplitScreenPlayers: [0x18]u8, // 0x4F8
        m_bIsHLTV: [0x4]u8, // 0x510
        m_iConnected: [0x4]u8, // 0x514
        m_iMostConnected: [0x4]u8, // 0x518
        m_iszPlayerName: [0x84]u8, // 0x51C
        m_szNetworkIDString: [0x8]u8, // 0x5A0
        m_fLerpTime: [0x4]u8, // 0x5A8
        m_bLagCompensation: [0x1]u8, // 0x5AC
        m_bPredict: [0x7]u8, // 0x5AD
        m_bIsLowViolence: [0x1]u8, // 0x5B4
        m_bGamePaused: [0x13B]u8, // 0x5B5
        m_iIgnoreGlobalChat: [0x4]u8, // 0x6F0
        m_flLastPlayerTalkTime: [0x4]u8, // 0x6F4
        m_flLastEntitySteadyState: [0x4]u8, // 0x6F8
        m_nAvailableEntitySteadyState: [0x4]u8, // 0x6FC
        m_bHasAnySteadyStateEnts: [0x10]u8, // 0x700
        m_steamID: [0x8]u8, // 0x710
        m_bNoClipEnabled: [0x4]u8, // 0x718
        m_iDesiredFOV: [0xBC]u8, // 0x71C
    };
    pub const CRangeFloat = extern struct {
        m_pValue: [0x8]u8, // 0x0
    };
    pub const CDestructiblePart = extern struct {
        m_DebugName: [0x8]u8, // 0x0
        m_nHitGroup: [0x4]u8, // 0x8
        m_bDisableHitGroupWhenDestroyed: [0x4]u8, // 0xC
        m_nOtherHitgroupsToDestroyWhenFullyDestructed: [0x18]u8, // 0x10
        m_bOnlyDestroyWhenGibbing: [0x8]u8, // 0x28
        m_sBodyGroupName: [0x8]u8, // 0x30
        m_DamageLevels: [0x18]u8, // 0x38
    };
    pub const PhysBlockHeader_t = extern struct {
        nSaved: [0x8]u8, // 0x0
        pWorldObject: [0x8]u8, // 0x8
    };
    pub const RelationshipOverride_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        entity: [0x4]u8, // 0x8
        classType: [0x4]u8, // 0xC
    };
    pub const AutoRoomDoorwayPairs_t = extern struct {
        vP1: [0xC]u8, // 0x0
        vP2: [0xC]u8, // 0xC
    };
    pub const NavHull_t = extern struct {
        m_nHullIdx: [0x4]u8, // 0x0
    };
    pub const CDebugSnapshotData_t = extern struct {
        m_text: [0x8]u8, // 0x0
        m_dataType: [0x4]u8, // 0x8
        m_userFlags: [0x4]u8, // 0xC
        m_userData: [0x4]u8, // 0x10
        m_userVector: [0xC]u8, // 0x14
        m_userTransform: [0x20]u8, // 0x20
        m_userShape: [0x98]u8, // 0x40
        m_drawColor: [0x8]u8, // 0xD8
        m_vecDebugOverlayData: [0x18]u8, // 0xE0
        m_pStructuredData: [0x8]u8, // 0xF8
        m_hEntity: [0x8]u8, // 0x100
        m_sEntityName: [0x8]u8, // 0x108
        m_nEntityIndex: [0x10]u8, // 0x110
        m_children: [0x10]u8, // 0x120
    };
    pub const CRemapFloat = extern struct {
        m_pValue: [0x10]u8, // 0x0
    };
    pub const CHintMessage = extern struct {
        m_hintString: [0x8]u8, // 0x0
        m_args: [0x18]u8, // 0x8
        m_duration: [0x8]u8, // 0x20
    };
    pub const CNavAttribute = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const AI_GroundRootMotionMotor_DebugSnapshotData_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        desired_movement_gait_set: [0x8]u8, // 0x8
        desired_movement_gait: [0x8]u8, // 0x10
        current_movement_gait_set: [0x8]u8, // 0x18
        current_movement_gait: [0x8]u8, // 0x20
        movement_setting_id: [0x8]u8, // 0x28
        gait_switch_blocked_reason: [0x8]u8, // 0x30
        b_goal_completion_allowed: [0x8]u8, // 0x38
        state: [0x8]u8, // 0x40
        n_state_active_tick_count: [0x4]u8, // 0x48
        b_has_path: [0x4]u8, // 0x4C
        f_remaining_ground_path_length: [0x4]u8, // 0x50
        f_current_speed: [0x4]u8, // 0x54
        move_type: [0x8]u8, // 0x58
        f_forward_strafing_angle_actual: [0x4]u8, // 0x60
        f_forward_strafing_angle_desired: [0x4]u8, // 0x64
        f_forward_strafing_angle_committed: [0x4]u8, // 0x68
        f_current_lean: [0x4]u8, // 0x6C
        f_target_lean: [0x8]u8, // 0x70
        vec_events: [0x18]u8, // 0x78
    };
    pub const ParticleNode_t = extern struct {
        m_hEntity: [0x4]u8, // 0x0
        m_iIndex: [0x4]u8, // 0x4
        m_flStartTime: [0x4]u8, // 0x8
        m_flGrowthDuration: [0x4]u8, // 0xC
        m_vecGrowthOrigin: [0xC]u8, // 0x10
        m_flEndcapTime: [0x4]u8, // 0x1C
        m_bMarkedForDelete: [0x4]u8, // 0x20
    };
    pub const CFootstepTableHandle = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const CDecalGroupVData = extern struct {
        m_vecOptions: [0x18]u8, // 0x0
        m_flTotalProbability: [0x8]u8, // 0x18
    };
    pub const CNmSnapWeaponTask = extern struct {
        pad_0: [0x80]u8, // 0x0
    };
    pub const CPlayerControllerComponent = extern struct {
        pad_0: [0x8]u8, // 0x0
        __m_pChainEntity: [0x38]u8, // 0x8
    };
    pub const CResponseQueue = extern struct {
        pad_0: [0x38]u8, // 0x0
        m_ExpresserTargets: [0x18]u8, // 0x38
    };
    pub const CodeGenAABB_t = extern struct {
        m_vMinBounds: [0xC]u8, // 0x0
        m_vMaxBounds: [0xC]u8, // 0xC
    };
    pub const CScriptUniformRandomStream = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_hScriptScope: [0x94]u8, // 0x8
        m_nInitialSeed: [0x4]u8, // 0x9C
    };
    pub const lerpdata_t = extern struct {
        m_hEnt: [0x4]u8, // 0x0
        m_MoveType: [0x4]u8, // 0x4
        m_flStartTime: [0x4]u8, // 0x8
        m_vecStartOrigin: [0x14]u8, // 0xC
        m_qStartRot: [0x10]u8, // 0x20
        m_nFXIndex: [0x20]u8, // 0x30
    };
    pub const WrappedPhysicsJoint_t = extern struct {
        m_pJoint: [0x8]u8, // 0x0
    };
    pub const SimpleConstraintSoundProfile = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_flKeyPointMinSoundThreshold: [0x4]u8, // 0x8
        m_flKeyPointMaxSoundThreshold: [0x4]u8, // 0xC
        m_reversalSoundThresholdSmall: [0x4]u8, // 0x10
        m_reversalSoundThresholdMedium: [0x4]u8, // 0x14
        m_reversalSoundThresholdLarge: [0x8]u8, // 0x18
    };
    pub const CSimpleSimTimer = extern struct {
        m_flNext: [0x4]u8, // 0x0
        m_nWorldGroupId: [0x4]u8, // 0x4
    };
    pub const AI_BaseNPCAnimGraph_DebugSnapshotData_t = extern struct {
        ag2_update_id: [0x8]u8, // 0x0
        e_action_desired: [0x8]u8, // 0x8
        e_action_handshake_restart: [0x8]u8, // 0x10
        e_action_handshake_body_authority_current: [0x8]u8, // 0x18
        e_action_handshake_body_authority_desired: [0x8]u8, // 0x20
        e_movement_type_desired: [0x8]u8, // 0x28
        e_movement_handshake_restart: [0x8]u8, // 0x30
        e_movement_handshake_body_authority_current: [0x8]u8, // 0x38
        e_movement_handshake_body_authority_desired: [0x8]u8, // 0x40
    };
    pub const CPhysicsBodyGameMarkupData = extern struct {
        m_PhysicsBodyMarkupByBoneName: [0x28]u8, // 0x0
    };
    pub const SoundCommand_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_time: [0x4]u8, // 0x8
        m_deltaTime: [0x4]u8, // 0xC
        m_command: [0x4]u8, // 0x10
        m_value: [0xC]u8, // 0x14
    };
    pub const modifiedconvars_t = extern struct {
        pszConvar: [0x80]u8, // 0x0
        pszCurrentValue: [0x80]u8, // 0x80
        pszOrgValue: [0x80]u8, // 0x100
    };
    pub const CTestPulseIOComponent_Derived = extern struct {
        pad_0: [0x30]u8, // 0x0
    };
    pub const SAVE_HEADER = extern struct {
        m_saveId: [0x4]u8, // 0x0
        m_version: [0x4]u8, // 0x4
        m_nConnectionCount: [0x4]u8, // 0x8
        m_nMapVersion: [0x4]u8, // 0xC
        m_sSpawnGroupName: [0x10]u8, // 0x10
        m_vecWorldOffset: [0x30]u8, // 0x20
        m_flSaveTime: [0x10]u8, // 0x50
    };
    pub const CSkillDamage = extern struct {
        m_flDamage: [0x10]u8, // 0x0
        m_flNPCDamageScalarVsNPC: [0x4]u8, // 0x10
        m_flPhysicsForceDamage: [0x4]u8, // 0x14
    };
    pub const DebugSnapshotBaseStructuredData_t = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const AI_DefaultNPC_DebugSnapshotData_t__PathQuery_t = extern struct {
        m_nInitialMovementId: [0x8]u8, // 0x0
        m_nCurrentMovementId: [0x8]u8, // 0x8
        m_nMode: [0x8]u8, // 0x10
        m_nType: [0x8]u8, // 0x18
        m_nState: [0x8]u8, // 0x20
    };
    pub const CFloatExponentialMovingAverage = extern struct {
        pad_0: [0x14]u8, // 0x0
    };
    pub const physics_save_sphere_t = extern struct {
        radius: [0x4]u8, // 0x0
    };
    pub const CAnimGraph2InstancePtr = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const GAME_HEADER = extern struct {
        m_sComment: [0x8]u8, // 0x0
        m_nSpawnGroupCount: [0x8]u8, // 0x8
        m_sLandmark: [0x8]u8, // 0x10
        m_sRequiredAddons: [0x8]u8, // 0x18
    };
    pub const ChickenPathCost = extern struct {
        pad_0: [0x30]u8, // 0x0
    };
    pub const AI_BaseNPC_DebugSnapshotData_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        npc_state: [0x8]u8, // 0x8
        current_enemy: [0x8]u8, // 0x10
        s_current_schedule: [0x8]u8, // 0x18
        s_current_task: [0x8]u8, // 0x20
        s_prev_schedule: [0x8]u8, // 0x28
        s_npc_current_movement: [0x8]u8, // 0x30
        s_last_task_end_location: [0x8]u8, // 0x38
        conditions: [0x18]u8, // 0x40
        anim_events: [0x18]u8, // 0x58
        animgraph: [0x48]u8, // 0x70
        navigator: [0x50]u8, // 0xB8
        motorServices: [0x38]u8, // 0x108
        facingServices: [0x48]u8, // 0x140
    };
    pub const CDebugDrawHistoryData = extern struct {
        m_hEntity: [0x4]u8, // 0x0
        m_etype: [0x4]u8, // 0x4
        m_vectors: [0x10]u8, // 0x8
        m_colors: [0x10]u8, // 0x18
        m_dimensions: [0x10]u8, // 0x28
        m_times: [0x10]u8, // 0x38
        m_uint64s: [0x10]u8, // 0x48
        m_bools: [0x10]u8, // 0x58
        m_strings: [0x10]u8, // 0x68
    };
    pub const CNmEventConsumer = extern struct {
        pad_0: [0xB0]u8, // 0x0
    };
    pub const CNetworkViewOffsetVector = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_vecX: [0x8]u8, // 0x10
        m_vecY: [0x8]u8, // 0x18
        m_vecZ: [0x8]u8, // 0x20
    };
    pub const AmmoIndex_t = extern struct {
        m_Value: [0x1]u8, // 0x0
    };
    pub const CNmEventConsumerContact = extern struct {
        pad_0: [0xB0]u8, // 0x0
    };
    pub const CDestructiblePartsSystemData = extern struct {
        m_PartsDataByHitGroup: [0x28]u8, // 0x0
        m_nMinMaxNumberHitGroupsToDestroyWhenGibbing: [0x8]u8, // 0x28
    };
    pub const CRopeOverlapHit = extern struct {
        m_hEntity: [0x8]u8, // 0x0
        m_vecOverlappingLinks: [0x18]u8, // 0x8
    };
    pub const ActorClipEntry_t = extern struct {
        m_sClipName: [0x8]u8, // 0x0
        m_bLooping: [0x8]u8, // 0x8
    };
    pub const CNavPathCostForTests = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const ResponseContext_t = extern struct {
        m_iszName: [0x8]u8, // 0x0
        m_iszValue: [0x8]u8, // 0x8
        m_fExpirationTime: [0x8]u8, // 0x10
    };
    pub const ApproachAreaCost = extern struct {
        pad_0: [0x30]u8, // 0x0
    };
    pub const CNavVolumeSphericalShell = extern struct {
        pad_0: [0x88]u8, // 0x0
        m_flRadiusInner: [0x8]u8, // 0x88
    };
    pub const CPlayerPawnComponent = extern struct {
        pad_0: [0x8]u8, // 0x0
        __m_pChainEntity: [0x28]u8, // 0x8
        m_pComponentGraphController: [0x18]u8, // 0x30
    };
    pub const AI_FacingServices_DebugSnapshotData_t = extern struct {
        npc_position: [0x10]u8, // 0x0
        facing_target_source: [0x8]u8, // 0x10
        facing_target: [0x10]u8, // 0x18
        schedule_facing_priority: [0x8]u8, // 0x28
        strafing_source: [0x8]u8, // 0x30
        strafing_enabled: [0x8]u8, // 0x38
        movement_id: [0x8]u8, // 0x40
    };
    pub const AI_Navigator_DebugSnapshotData_t = extern struct {
        s_movement_id: [0x8]u8, // 0x0
        s_movement_serial_number: [0x8]u8, // 0x8
        s_goal_source_location: [0x8]u8, // 0x10
        last_waypoint_pos: [0xC]u8, // 0x18
        goal_location: [0xC]u8, // 0x24
        waypoints: [0x18]u8, // 0x30
        s_arrival_movement_gait_set: [0x8]u8, // 0x48
    };
    pub const CDecalInstance = extern struct {
        m_sDecalGroup: [0x8]u8, // 0x0
        m_hMaterial: [0x8]u8, // 0x8
        m_sSequenceName: [0x4]u8, // 0x10
        m_hEntity: [0x4]u8, // 0x14
        m_nBoneIndex: [0x4]u8, // 0x18
        m_nTriangleIndex: [0x4]u8, // 0x1C
        m_vPositionLS: [0xC]u8, // 0x20
        m_vPositionOS: [0xC]u8, // 0x2C
        m_vNormalLS: [0xC]u8, // 0x38
        m_vNormalOS: [0xC]u8, // 0x44
        m_vSAxisLS: [0xC]u8, // 0x50
        m_nFlags: [0x4]u8, // 0x5C
        m_Color: [0x4]u8, // 0x60
        m_flWidth: [0x4]u8, // 0x64
        m_flHeight: [0x4]u8, // 0x68
        m_flDepth: [0x4]u8, // 0x6C
        m_mTransform: [0x30]u8, // 0x70
        m_mLocalToTriangle: [0x30]u8, // 0xA0
        m_flAnimationScale: [0x4]u8, // 0xD0
        m_flAnimationStartTime: [0x4]u8, // 0xD4
        m_flPlaceTime: [0x4]u8, // 0xD8
        m_flFadeStartTime: [0x4]u8, // 0xDC
        m_flFadeDuration: [0x4]u8, // 0xE0
        m_flLightingOriginOffset: [0x14]u8, // 0xE4
        m_flBoundingRadiusSqr: [0x4]u8, // 0xF8
        m_nSequenceIndex: [0x2]u8, // 0xFC
        m_bIsAdjacent: [0x1]u8, // 0xFE
        m_bDoDecalLightmapping: [0x9]u8, // 0xFF
    };
    pub const CGameScriptedMoveData = extern struct {
        m_vAccumulatedRootMotion: [0xC]u8, // 0x0
        m_angAccumulatedRootMotionRotation: [0xC]u8, // 0xC
        m_vSrc: [0xC]u8, // 0x18
        m_angSrc: [0xC]u8, // 0x24
        m_angCurrent: [0xC]u8, // 0x30
        m_flLockedSpeed: [0x4]u8, // 0x3C
        m_flAngRate: [0x4]u8, // 0x40
        m_flDuration: [0x4]u8, // 0x44
        m_flStartTime: [0x4]u8, // 0x48
        m_bActive: [0x1]u8, // 0x4C
        m_bTeleportOnEnd: [0x1]u8, // 0x4D
        m_bIgnoreRotation: [0x1]u8, // 0x4E
        m_bSuccess: [0x1]u8, // 0x4F
        m_nForcedCrouchState: [0x4]u8, // 0x50
        m_bIgnoreCollisions: [0x4]u8, // 0x54
        m_vDest: [0xC]u8, // 0x58
        m_angDst: [0xC]u8, // 0x64
        m_hDestEntity: [0x4]u8, // 0x70
    };
    pub const CSkeletonAnimationController = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_pSkeletonInstance: [0x8]u8, // 0x8
    };
    pub const CNavVolumeMarkupVolume = extern struct {
        pad_0: [0xE0]u8, // 0x0
    };
    pub const CResponseCriteriaSet = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_bOverrideOnAppend: [0x8]u8, // 0x30
    };
    pub const FuncRotatorRotationSummary_t = extern struct {
        nTick: [0x4]u8, // 0x0
        nFlags: [0x4]u8, // 0x4
    };
    pub const CAI_Expresser = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_conceptCooldowns: [0x28]u8, // 0x10
        m_ruleCooldowns: [0x28]u8, // 0x38
        m_flStopTalkTime: [0x4]u8, // 0x60
        m_flStopTalkTimeWithoutDelay: [0x4]u8, // 0x64
        m_flQueuedSpeechTime: [0x4]u8, // 0x68
        m_flBlockedTalkTime: [0x4]u8, // 0x6C
        m_voicePitch: [0x4]u8, // 0x70
        m_flLastTimeAcceptedSpeak: [0x4]u8, // 0x74
        m_bAllowSpeakingInterrupts: [0x1]u8, // 0x78
        m_bConsiderSceneInvolvementAsSpeech: [0x1]u8, // 0x79
        m_bSceneEntityDisabled: [0x2]u8, // 0x7A
        m_nLastSpokenPriority: [0x1C]u8, // 0x7C
        m_pOuter: [0x8]u8, // 0x98
    };
    pub const IChoreoServices = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const CNmEventConsumerAttributes = extern struct {
        pad_0: [0xB0]u8, // 0x0
    };
    pub const CStopwatch = extern struct {
        pad_0: [0xC]u8, // 0x0
        m_flInterval: [0x4]u8, // 0xC
    };
    pub const CNmEventConsumerCloth = extern struct {
        pad_0: [0xB0]u8, // 0x0
    };
    pub const ResponseParams = extern struct {
        pad_0: [0x10]u8, // 0x0
        odds: [0x2]u8, // 0x10
        flags: [0x6]u8, // 0x12
        m_pFollowup: [0x8]u8, // 0x18
    };
    pub const SPAWNGROUP_HEADER = extern struct {
        m_sGroupName: [0x8]u8, // 0x0
        m_sEntityLumpName: [0x8]u8, // 0x8
        m_vecWorldOffset: [0x30]u8, // 0x10
        m_bClientSpawnGroup: [0x1]u8, // 0x40
        m_bSuppressAllEntities: [0xF]u8, // 0x41
    };
    pub const globalentity_t = extern struct {
        name: [0x2]u8, // 0x0
        levelName: [0x2]u8, // 0x2
        state: [0x4]u8, // 0x4
        counter: [0x4]u8, // 0x8
    };
    pub const CAnimGraphControllerPtr = extern struct {
        m_pController: [0x8]u8, // 0x0
    };
    pub const ConstraintSoundInfo = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_vSampler: [0x18]u8, // 0x8
        m_soundProfile: [0x20]u8, // 0x20
        m_forwardAxis: [0x10]u8, // 0x40
        m_iszTravelSoundFwd: [0x8]u8, // 0x50
        m_iszTravelSoundBack: [0x20]u8, // 0x58
        m_iszReversalSoundSmall: [0x8]u8, // 0x78
        m_iszReversalSoundMedium: [0x8]u8, // 0x80
        m_iszReversalSoundLarge: [0x8]u8, // 0x88
        m_bPlayTravelSound: [0x1]u8, // 0x90
        m_bPlayReversalSound: [0x7]u8, // 0x91
    };
    pub const CPhysicsBodyGameMarkup = extern struct {
        m_TargetBody: [0x8]u8, // 0x0
        m_Tag: [0x8]u8, // 0x8
    };
    pub const PointCameraSettings_t = extern struct {
        m_flNearBlurryDistance: [0x4]u8, // 0x0
        m_flNearCrispDistance: [0x4]u8, // 0x4
        m_flFarCrispDistance: [0x4]u8, // 0x8
        m_flFarBlurryDistance: [0x4]u8, // 0xC
    };
    pub const HUDPanelHasClass_t = extern struct {
        m_nPanelIdIndex: [0x2]u8, // 0x0
        m_nClassNameIndex: [0x2]u8, // 0x2
        m_eClassStatus: [0x4]u8, // 0x4
    };
    pub const DebugDrawBoneTransforms_t = extern struct {
        pad_0: [0x10]u8, // 0x0
        vecBones: [0x1020]u8, // 0x10
    };
    pub const INavPathCost = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_navHull: [0x8]u8, // 0x8
    };
    pub const CVectorMovingAverage = extern struct {
        pad_0: [0x20]u8, // 0x0
    };
    pub const HUDPanelDialogVariableString_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_nPanelIdIndex: [0x2]u8, // 0x8
        m_nDialogVariableIndex: [0x6]u8, // 0xA
        m_sValue: [0x8]u8, // 0x10
        m_bIsSet: [0x8]u8, // 0x18
    };
    pub const CSoundEnvelope = extern struct {
        m_current: [0x4]u8, // 0x0
        m_target: [0x4]u8, // 0x4
        m_rate: [0x4]u8, // 0x8
        m_forceupdate: [0x4]u8, // 0xC
    };
    pub const dynpitchvol_base_t = extern struct {
        preset: [0x4]u8, // 0x0
        pitchrun: [0x4]u8, // 0x4
        pitchstart: [0x4]u8, // 0x8
        spinup: [0x4]u8, // 0xC
        spindown: [0x4]u8, // 0x10
        volrun: [0x4]u8, // 0x14
        volstart: [0x4]u8, // 0x18
        fadein: [0x4]u8, // 0x1C
        fadeout: [0x4]u8, // 0x20
        lfotype: [0x4]u8, // 0x24
        lforate: [0x4]u8, // 0x28
        lfomodpitch: [0x4]u8, // 0x2C
        lfomodvol: [0x4]u8, // 0x30
        cspinup: [0x4]u8, // 0x34
        cspincount: [0x4]u8, // 0x38
        pitch: [0x4]u8, // 0x3C
        spinupsav: [0x4]u8, // 0x40
        spindownsav: [0x4]u8, // 0x44
        pitchfrac: [0x4]u8, // 0x48
        vol: [0x4]u8, // 0x4C
        fadeinsav: [0x4]u8, // 0x50
        fadeoutsav: [0x4]u8, // 0x54
        volfrac: [0x4]u8, // 0x58
        lfofrac: [0x4]u8, // 0x5C
        lfomult: [0x4]u8, // 0x60
    };
    pub const CStopwatchBase = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_bIsRunning: [0x4]u8, // 0x8
    };
    pub const AI_GroundRootMotionMotor_DebugSnapshotData_t__Event_t = extern struct {
        description: [0x8]u8, // 0x0
        location: [0x10]u8, // 0x8
    };
    pub const CMarkupSearch_PathCostAreaFilter = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_searchHelper: [0x2B0]u8, // 0x8
    };
    pub const CNavVolumeVector = extern struct {
        pad_0: [0x80]u8, // 0x0
        m_bHasBeenPreFiltered: [0x20]u8, // 0x80
    };
    pub const NavGravity_t = extern struct {
        m_vGravity: [0xC]u8, // 0x0
        m_bDefault: [0x4]u8, // 0xC
    };
    pub const PulseScriptedSequenceData_t = extern struct {
        m_nActorID: [0x8]u8, // 0x0
        m_szPreIdleSequence: [0x8]u8, // 0x8
        m_szEntrySequence: [0x8]u8, // 0x10
        m_szSequence: [0x8]u8, // 0x18
        m_szExitSequence: [0x8]u8, // 0x20
        m_nMoveTo: [0x4]u8, // 0x28
        m_nMoveToGait: [0x4]u8, // 0x2C
        m_nHeldWeaponBehavior: [0x4]u8, // 0x30
        m_bLoopPreIdleSequence: [0x1]u8, // 0x34
        m_bLoopActionSequence: [0x1]u8, // 0x35
        m_bLoopPostIdleSequence: [0x1]u8, // 0x36
        m_bIgnoreLookAt: [0x1]u8, // 0x37
    };
    pub const CChoreo_GraphController = extern struct {
        pad_0: [0xC0]u8, // 0x0
        m_eChoreoState: [0x18]u8, // 0xC0
        m_tChoreoTargetWarp: [0x18]u8, // 0xD8
        m_tChoreoExitWarp: [0x18]u8, // 0xF0
    };
    pub const CBaseAnimGraphDestructibleParts_GraphController = extern struct {
        pad_0: [0xC0]u8, // 0x0
    };
    pub const ExternalAnimGraphHandle_t = extern struct {
        m_Value: [0x4]u8, // 0x0
    };
    pub const CPhysicsShake = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_force: [0x10]u8, // 0x8
    };
    pub const CInfoChoreoAnchorPosition = extern struct {
        m_vOriginLS: [0x10]u8, // 0x0
        m_qAnglesLS: [0x10]u8, // 0x10
        m_vExtentsMin: [0xC]u8, // 0x20
        m_vExtentsMax: [0xC]u8, // 0x2C
        m_flRadius: [0x4]u8, // 0x38
        m_bOnlyWarpPosition: [0x4]u8, // 0x3C
        m_hParent: [0x4]u8, // 0x40
        m_nShapeType: [0xC]u8, // 0x44
    };
    pub const VelocitySampler = extern struct {
        m_prevSample: [0xC]u8, // 0x0
        m_fPrevSampleTime: [0x4]u8, // 0xC
        m_fIdealSampleRate: [0x4]u8, // 0x10
    };
    pub const CTakeDamageResult = extern struct {
        m_pOriginatingInfo: [0x8]u8, // 0x0
        m_DestructibleHitGroupRequests: [0x10]u8, // 0x8
        m_nHealthLost: [0x4]u8, // 0x18
        m_nHealthBefore: [0x4]u8, // 0x1C
        m_flDamageDealt: [0x4]u8, // 0x20
        m_flPreModifiedDamage: [0x4]u8, // 0x24
        m_vDamagePosition: [0xC]u8, // 0x28
        m_nTotalledHealthLost: [0x4]u8, // 0x34
        m_flTotalledDamageDealt: [0x4]u8, // 0x38
        m_flTotalledPreModifiedDamage: [0x4]u8, // 0x3C
        m_flNewDamageAccumulatorValue: [0x8]u8, // 0x40
        m_nDamageFlags: [0x8]u8, // 0x48
        m_bWasDamageSuppressed: [0x1]u8, // 0x50
        m_bSuppressFlinch: [0x3]u8, // 0x51
        m_nOverrideFlinchHitGroup: [0xC]u8, // 0x54
    };
    pub const CMarkupSearchHelper = extern struct {
        m_navHull: [0x8]u8, // 0x0
        m_tagString: [0x8]u8, // 0x8
        m_nameString: [0x8]u8, // 0x10
        m_vRefPos: [0xC]u8, // 0x18
        m_bRefPosSet: [0x1]u8, // 0x24
        m_bUseStepHeight: [0x1]u8, // 0x25
        m_bActive: [0x28A]u8, // 0x26
    };
    pub const SceneEventId_t = extern struct {
        m_Value: [0x4]u8, // 0x0
    };
    pub const CCommentarySystem = extern struct {
        pad_0: [0x12]u8, // 0x0
        m_bCommentaryEnabledMidGame: [0x2]u8, // 0x12
        m_flNextTeleportTime: [0x4]u8, // 0x14
        m_iTeleportStage: [0x4]u8, // 0x18
        m_bCheatState: [0x1]u8, // 0x1C
        m_bIsFirstSpawnGroupToLoad: [0x3]u8, // 0x1D
        m_ModifiedConvars: [0x18]u8, // 0x20
        m_hCurrentNode: [0x4]u8, // 0x38
        m_hActiveCommentaryNode: [0x4]u8, // 0x3C
        m_hLastCommentaryNode: [0x8]u8, // 0x40
        m_vecNodes: [0x18]u8, // 0x48
    };
    pub const ResponseFollowup = extern struct {
        followup_concept: [0x8]u8, // 0x0
        followup_contexts: [0x8]u8, // 0x8
        followup_delay: [0x4]u8, // 0x10
        followup_target: [0x8]u8, // 0x14
    };
    pub const AmmoTypeInfo_t = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nMaxCarry: [0xC]u8, // 0x10
        m_nSplashSize: [0x8]u8, // 0x1C
        m_nFlags: [0x4]u8, // 0x24
        m_flMass: [0x4]u8, // 0x28
        m_flSpeed: [0xC]u8, // 0x2C
    };
    pub const CNetworkTransmitComponent = extern struct {
        pad_0: [0x184]u8, // 0x0
        m_nTransmitStateOwnedCounter: [0x4C]u8, // 0x184
    };
    pub const AI_MotorServices_DebugSnapshotData_t = extern struct {
        active_motor: [0x8]u8, // 0x0
        desired_speed: [0x4]u8, // 0x8
        motor_velocity: [0xC]u8, // 0xC
        motor_path: [0x18]u8, // 0x18
        ground_entity_debug_name: [0x8]u8, // 0x30
    };
    pub const CPathQueryUtil = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_PathToEntityTransform: [0x20]u8, // 0x10
        m_vecPathSamplePositions: [0x18]u8, // 0x30
        m_vecPathSampleParameters: [0x18]u8, // 0x48
        m_vecPathSampleDistances: [0x18]u8, // 0x60
        m_bIsClosedLoop: [0x8]u8, // 0x78
    };
    pub const RagdollCreationParams_t = extern struct {
        m_vForce: [0xC]u8, // 0x0
        m_nForceBone: [0x4]u8, // 0xC
        m_bForceCurrentWorldTransform: [0x4]u8, // 0x10
        m_nHealthToGrant: [0x4]u8, // 0x14
    };
    pub const CRelativeTransform = extern struct {
        m_bTransformIsWorldSpace: [0x10]u8, // 0x0
        m_transform: [0x20]u8, // 0x10
        m_transformWS: [0x20]u8, // 0x30
        m_hEntity: [0x10]u8, // 0x50
    };
    pub const CRangeInt = extern struct {
        m_pValue: [0x8]u8, // 0x0
    };
    pub const PathCost = extern struct {
        pad_0: [0x3C]u8, // 0x0
        m_dangerFactor: [0x4]u8, // 0x3C
        m_damagingAreasPenaltyCost: [0x4]u8, // 0x40
        m_flAgentMaxClimb: [0x1C]u8, // 0x44
    };
    pub const globalentitydatabase_t = extern struct {
        pad_0: [0x60]u8, // 0x0
        m_list: [0x18]u8, // 0x60
    };
    pub const CNmEventConsumerPulse = extern struct {
        pad_0: [0xC8]u8, // 0x0
    };
    pub const CNMEventPulseState_t = extern struct {
        m_eventID: [0x8]u8, // 0x0
    };
    pub const CWorldCompositionChunkReferenceElement_t = extern struct {
        m_strMapToLoad: [0x8]u8, // 0x0
        m_strLandmarkName: [0x8]u8, // 0x8
    };
    pub const CRandStopwatch = extern struct {
        pad_0: [0xC]u8, // 0x0
        m_flMinInterval: [0x4]u8, // 0xC
        m_flMaxInterval: [0x4]u8, // 0x10
    };
    pub const CMovementStatsProperty = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nUseCounter: [0x4]u8, // 0x10
        m_emaMovementDirection: [0x2C]u8, // 0x14
    };
    pub const CGameChoreoServices = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_hOwner: [0x4]u8, // 0x8
        m_hScriptedSequence: [0x4]u8, // 0xC
        m_scriptState: [0x4]u8, // 0x10
        m_choreoState: [0x4]u8, // 0x14
        m_flTimeStartedState: [0x8]u8, // 0x18
    };
    pub const PhysObjectHeader_t = extern struct {
        type: [0x4]u8, // 0x0
        hEntity: [0x4]u8, // 0x4
        fieldName: [0x8]u8, // 0x8
        bSaveObject: [0x8]u8, // 0x10
        modelName: [0x8]u8, // 0x18
        bbox: [0x18]u8, // 0x20
        sphere: [0x4]u8, // 0x38
        iCollide: [0x4]u8, // 0x3C
    };
    pub const CSimpleStopwatch = extern struct {
        pad_0: [0xC]u8, // 0x0
    };
    pub const CShatterGlassShard = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_hShardHandle: [0x8]u8, // 0x8
        m_vecPanelVertices: [0x18]u8, // 0x10
        m_vLocalPanelSpaceOrigin: [0x8]u8, // 0x28
        m_hModel: [0x8]u8, // 0x30
        m_hPhysicsEntity: [0x4]u8, // 0x38
        m_hParentPanel: [0x4]u8, // 0x3C
        m_hParentShard: [0x4]u8, // 0x40
        m_ShatterStressType: [0x4]u8, // 0x44
        m_vecStressVelocity: [0xC]u8, // 0x48
        m_bCreatedModel: [0x4]u8, // 0x54
        m_flLongestEdge: [0x4]u8, // 0x58
        m_flShortestEdge: [0x4]u8, // 0x5C
        m_flLongestAcross: [0x4]u8, // 0x60
        m_flShortestAcross: [0x4]u8, // 0x64
        m_flSumOfAllEdges: [0x4]u8, // 0x68
        m_flArea: [0x4]u8, // 0x6C
        m_nOnFrameEdge: [0x4]u8, // 0x70
        m_nSubShardGeneration: [0x4]u8, // 0x74
        m_vecAverageVertPosition: [0x8]u8, // 0x78
        m_bAverageVertPositionIsValid: [0x4]u8, // 0x80
        m_vecPanelSpaceStressPositionA: [0x8]u8, // 0x84
        m_vecPanelSpaceStressPositionB: [0x8]u8, // 0x8C
        m_bStressPositionAIsValid: [0x1]u8, // 0x94
        m_bStressPositionBIsValid: [0x1]u8, // 0x95
        m_bFlaggedForRemoval: [0x2]u8, // 0x96
        m_flPhysicsEntitySpawnedAtTime: [0x4]u8, // 0x98
        m_hEntityHittingMe: [0x4]u8, // 0x9C
        m_vecNeighbors: [0x18]u8, // 0xA0
    };
    pub const ragdollelement_t = extern struct {
        originParentSpace: [0x20]u8, // 0x0
        parentIndex: [0x4]u8, // 0x20
        m_flRadius: [0x4]u8, // 0x24
        m_nHeight: [0x8]u8, // 0x28
    };
    pub const CGameScriptedMoveDef_t = extern struct {
        m_vDestOffset: [0xC]u8, // 0x0
        m_hDestEntity: [0x4]u8, // 0xC
        m_angDest: [0xC]u8, // 0x10
        m_flDuration: [0x4]u8, // 0x1C
        m_flAngRate: [0x4]u8, // 0x20
        m_flMoveSpeed: [0x4]u8, // 0x24
        m_bAimDisabled: [0x1]u8, // 0x28
        m_bIgnoreRotation: [0x3]u8, // 0x29
        m_nForcedCrouchState: [0x4]u8, // 0x2C
    };
    pub const CNetworkOriginCellCoordQuantizedVector = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_cellX: [0x2]u8, // 0x10
        m_cellY: [0x2]u8, // 0x12
        m_cellZ: [0x2]u8, // 0x14
        m_nOutsideWorld: [0x2]u8, // 0x16
        m_vecX: [0x8]u8, // 0x18
        m_vecY: [0x8]u8, // 0x20
        m_vecZ: [0x8]u8, // 0x28
    };
    pub const CBaseAnimGraphVariationUserData = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const DynamicVolumeDef_t = extern struct {
        m_source: [0x4]u8, // 0x0
        m_target: [0x4]u8, // 0x4
        m_nHullIdx: [0x4]u8, // 0x8
        m_vSourceAnchorPos: [0xC]u8, // 0xC
        m_vTargetAnchorPos: [0xC]u8, // 0x18
        m_nAreaSrc: [0x4]u8, // 0x24
        m_nAreaDst: [0x4]u8, // 0x28
        m_bAttached: [0x4]u8, // 0x2C
    };
    pub const CNetworkOriginQuantizedVector = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_vecX: [0x8]u8, // 0x10
        m_vecY: [0x8]u8, // 0x18
        m_vecZ: [0x8]u8, // 0x20
    };
    pub const magnetted_objects_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        hEntity: [0x8]u8, // 0x8
    };
    pub const CHintMessageQueue = extern struct {
        m_tmMessageEnd: [0x8]u8, // 0x0
        m_messages: [0x18]u8, // 0x8
        m_pPlayerController: [0x8]u8, // 0x20
    };
    pub const CSkillInt = extern struct {
        m_pValue: [0x10]u8, // 0x0
    };
    pub const thinkfunc_t = extern struct {
        m_think: [0x8]u8, // 0x0
        m_hFn: [0x8]u8, // 0x8
        m_nContext: [0x4]u8, // 0x10
        m_nNextThinkTick: [0x4]u8, // 0x14
        m_nLastThinkTick: [0x8]u8, // 0x18
    };
    pub const CNavHullPresetVData = extern struct {
        m_vecNavHulls: [0x18]u8, // 0x0
    };
    pub const CSkillFloat = extern struct {
        m_pValue: [0x10]u8, // 0x0
    };
    pub const WaterWheelFrictionScale_t = extern struct {
        m_flFractionOfWheelSubmerged: [0x4]u8, // 0x0
        m_flFrictionScale: [0x4]u8, // 0x4
    };
    pub const ragdollhierarchyjoint_t = extern struct {
        parentIndex: [0x4]u8, // 0x0
        childIndex: [0xC]u8, // 0x4
    };
    pub const CSceneEventInfo = extern struct {
        m_iLayer: [0x4]u8, // 0x0
        m_iPriority: [0x4]u8, // 0x4
        m_hSequence: [0x4]u8, // 0x8
        m_flWeight: [0x4]u8, // 0xC
        m_flLastAccumulatedTime: [0x4]u8, // 0x10
        m_flLastJumpFromTime: [0x4]u8, // 0x14
        m_flLastJumpToTime: [0x4]u8, // 0x18
        m_flLastCycle: [0x4]u8, // 0x1C
        m_hAnimClip: [0x8]u8, // 0x20
        m_sAnimClipSlot: [0x8]u8, // 0x28
        m_sAnimClipSlotWeight: [0x8]u8, // 0x30
        m_bHasArrived: [0x4]u8, // 0x38
        m_nType: [0x4]u8, // 0x3C
        m_flNext: [0x4]u8, // 0x40
        m_bIsGesture: [0x1]u8, // 0x44
        m_bShouldRemove: [0x27]u8, // 0x45
        m_hTarget: [0x4]u8, // 0x6C
        m_nSceneEventId: [0x4]u8, // 0x70
        m_bClientSide: [0x1]u8, // 0x74
        m_bStarted: [0x3]u8, // 0x75
    };
    pub const SoundeventPathCornerPairNetworked_t = extern struct {
        vP1: [0xC]u8, // 0x0
        vP2: [0xC]u8, // 0xC
        flPathLengthSqr: [0x4]u8, // 0x18
        flP1Pct: [0x4]u8, // 0x1C
        flP2Pct: [0x4]u8, // 0x20
    };
    pub const CSoundPatch = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_pitch: [0x10]u8, // 0x8
        m_volume: [0x24]u8, // 0x18
        m_shutdownTime: [0x4]u8, // 0x3C
        m_flLastTime: [0x8]u8, // 0x40
        m_iszSoundScriptName: [0x8]u8, // 0x48
        m_hEnt: [0x4]u8, // 0x50
        m_soundEntityIndex: [0x4]u8, // 0x54
        m_soundOrigin: [0xC]u8, // 0x58
        m_isPlaying: [0x4]u8, // 0x64
        m_Filter: [0x38]u8, // 0x68
        m_flCloseCaptionDuration: [0x4]u8, // 0xA0
        m_bUpdatedSoundOrigin: [0x4]u8, // 0xA4
        m_iszClassName: [0x8]u8, // 0xA8
    };
    pub const CCS2ChickenGraphController = extern struct {
        pad_0: [0xC0]u8, // 0x0
        m_action: [0x18]u8, // 0xC0
        m_bActionReset: [0x20]u8, // 0xD8
        m_actionVariation: [0x18]u8, // 0xF8
        m_bInWater: [0x18]u8, // 0x110
        m_mode: [0x18]u8, // 0x128
        m_lifeStage: [0x18]u8, // 0x140
        m_idlePhase: [0x18]u8, // 0x158
        m_turnAngle: [0x18]u8, // 0x170
        m_bHasLookatTarget: [0x18]u8, // 0x188
        m_lookatTarget: [0x18]u8, // 0x1A0
        m_bFlinch: [0x18]u8, // 0x1B8
        m_flinchVariation: [0x18]u8, // 0x1D0
        m_bHasActionCompletedEvent: [0x8]u8, // 0x1E8
    };
    pub const levellist_t = extern struct {
        m_sMapName: [0x8]u8, // 0x0
        m_sLandmarkName: [0x8]u8, // 0x8
        m_hEntLandmark: [0x4]u8, // 0x10
        m_vecLandmarkOrigin: [0xC]u8, // 0x14
        m_vecLandmarkAngles: [0x10]u8, // 0x20
    };
    pub const locksound_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        sLockedSound: [0x8]u8, // 0x8
        sUnlockedSound: [0x8]u8, // 0x10
        flwaitSound: [0x8]u8, // 0x18
    };
    pub const DecalGroupOption_t = extern struct {
        m_hMaterial: [0x8]u8, // 0x0
        m_sSequenceName: [0x8]u8, // 0x8
        m_flProbability: [0x4]u8, // 0x10
        m_bEnableAngleBetweenNormalAndGravityRange: [0x4]u8, // 0x14
        m_flMinAngleBetweenNormalAndGravity: [0x4]u8, // 0x18
        m_flMaxAngleBetweenNormalAndGravity: [0x4]u8, // 0x1C
    };
    pub const CBtNode = extern struct {
        pad_0: [0x58]u8, // 0x0
    };
    pub const CAnimGraphControllerManager = extern struct {
        m_controllers: [0x90]u8, // 0x0
        m_bGraphBindingsCreated: [0x8]u8, // 0x90
    };
    pub const CFiringModeFloat = extern struct {
        m_flValues: [0x8]u8, // 0x0
    };
    pub const CCopyRecipientFilter = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_Flags: [0x8]u8, // 0x8
        m_Recipients: [0x20]u8, // 0x10
        m_slotPlayerExcludedDueToPrediction: [0x8]u8, // 0x30
    };
    pub const CFloatMovingAverage = extern struct {
        pad_0: [0x20]u8, // 0x0
    };
    pub const FuncMoverMovementSummary_t = extern struct {
        flStartT: [0x4]u8, // 0x0
        flEndT: [0x4]u8, // 0x4
        nStartNodeIndex: [0x4]u8, // 0x8
        nStopNodeIndex: [0x4]u8, // 0xC
        nMovementMode: [0x4]u8, // 0x10
        nFlags: [0x4]u8, // 0x14
        nTick: [0x4]u8, // 0x18
        hPathMover: [0x4]u8, // 0x1C
    };
    pub const CSmoothFunc = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_flSmoothAmplitude: [0x4]u8, // 0x8
        m_flSmoothBias: [0x4]u8, // 0xC
        m_flSmoothDuration: [0x4]u8, // 0x10
        m_flSmoothRemainingTime: [0x4]u8, // 0x14
        m_nSmoothDir: [0x8]u8, // 0x18
    };
    pub const IHasAttributes = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const ragdoll_t = extern struct {
        list: [0x18]u8, // 0x0
        hierarchyJoints: [0x18]u8, // 0x18
        boneIndex: [0x18]u8, // 0x30
        allowStretch: [0x1]u8, // 0x48
        unused: [0x7]u8, // 0x49
    };
    pub const HullFlags_t = extern struct {
        m_bHull_Human: [0x1]u8, // 0x0
        m_bHull_SmallCentered: [0x1]u8, // 0x1
        m_bHull_WideHuman: [0x1]u8, // 0x2
        m_bHull_Tiny: [0x1]u8, // 0x3
        m_bHull_Medium: [0x1]u8, // 0x4
        m_bHull_TinyCentered: [0x1]u8, // 0x5
        m_bHull_Large: [0x1]u8, // 0x6
        m_bHull_LargeCentered: [0x1]u8, // 0x7
        m_bHull_MediumTall: [0x1]u8, // 0x8
        m_bHull_Small: [0x1]u8, // 0x9
    };
    pub const CNavFlags = extern struct {
        m_Flags: [0x8]u8, // 0x0
    };
    pub const ISkeletonAnimationController = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const CNetworkOriginQuantizedVectorWS = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_vecX: [0x8]u8, // 0x10
        m_vecY: [0x8]u8, // 0x18
        m_vecZ: [0x8]u8, // 0x20
    };
    pub const GameAmmoTypeInfo_t = extern struct {
        pad_0: [0x38]u8, // 0x0
        m_nBuySize: [0x4]u8, // 0x38
        m_nCost: [0x14]u8, // 0x3C
    };
    pub const CMotorController = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_speed: [0x4]u8, // 0x8
        m_maxTorque: [0x4]u8, // 0xC
        m_axis: [0xC]u8, // 0x10
        m_inertiaFactor: [0x4]u8, // 0x1C
    };
    pub const CSimTimer = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_flInterval: [0x4]u8, // 0x8
    };
    pub const CBaseIssue = extern struct {
        pad_0: [0x20]u8, // 0x0
        m_szTypeString: [0x40]u8, // 0x20
        m_szDetailsString: [0x104]u8, // 0x60
        m_iNumYesVotes: [0x4]u8, // 0x164
        m_iNumNoVotes: [0x4]u8, // 0x168
        m_iNumPotentialVotes: [0x4]u8, // 0x16C
        m_pVoteController: [0x8]u8, // 0x170
    };
    pub const CDynamicPropGraphController = extern struct {
        pad_0: [0xC0]u8, // 0x0
        m_sActionState: [0x18]u8, // 0xC0
    };
    pub const SummaryTakeDamageInfo_t = extern struct {
        nSummarisedCount: [0x8]u8, // 0x0
        info: [0x118]u8, // 0x8
        result: [0x60]u8, // 0x120
        hTarget: [0x8]u8, // 0x180
    };
    pub const INavObstacle = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_nId: [0x8]u8, // 0x8
    };
    pub const entitytable_t = extern struct {
        id: [0x4]u8, // 0x0
        edictindex: [0x4]u8, // 0x4
        saveentityindex: [0xC]u8, // 0x8
        bWasSaved: [0x4]u8, // 0x14
        flags: [0x8]u8, // 0x18
        classname: [0x8]u8, // 0x20
        globalname: [0x8]u8, // 0x28
        entityname: [0x8]u8, // 0x30
        landmarkModelSpace: [0x10]u8, // 0x38
        m_pPrecacheEntityKeys: [0x8]u8, // 0x48
    };
    pub const AI_MotorServices_DebugSnapshotData_t__MotorPathWaypoint_t = extern struct {
        position: [0xC]u8, // 0x0
        nav_type: [0x4]u8, // 0xC
        flags: [0x4]u8, // 0x10
    };
    pub const CRR_Response = extern struct {
        m_Type: [0x1]u8, // 0x0
        m_szResponseName: [0xC0]u8, // 0x1
        m_szMatchingRule: [0x9F]u8, // 0xC1
        m_Params: [0x20]u8, // 0x160
        m_fMatchScore: [0x4]u8, // 0x180
        m_bAnyMatchingRulesInCooldown: [0x4]u8, // 0x184
        m_szSpeakerContext: [0x8]u8, // 0x188
        m_szWorldContext: [0x8]u8, // 0x190
        m_Followup: [0x1C]u8, // 0x198
        m_recipientFilter: [0x4]u8, // 0x1B4
    };
    pub const CVectorExponentialMovingAverage = extern struct {
        pad_0: [0x2C]u8, // 0x0
    };
    pub const CNmAimCSNode__CDefinition = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_nVerticalAngleNodeIdx: [0x2]u8, // 0x18
        m_nHorizontalAngleNodeIdx: [0x2]u8, // 0x1A
        m_nWeaponCategoryNodeIdx: [0x2]u8, // 0x1C
        m_nWeaponTypeNodeIdx: [0x2]u8, // 0x1E
        m_nWeaponActionNodeIdx: [0x2]u8, // 0x20
        m_nWeaponDropNodeIdx: [0x2]u8, // 0x22
        m_nIsDefusingNodeIdx: [0x2]u8, // 0x24
        m_nCrouchWeightNodeIdx: [0x2]u8, // 0x26
        m_flHandIKBlendInTimeSeconds: [0x4]u8, // 0x28
        m_flActionBlendTimeSeconds: [0x4]u8, // 0x2C
        m_flPlantingBlendTimeSeconds: [0x8]u8, // 0x30
    };
    pub const CConstantForceController = extern struct {
        pad_0: [0xC]u8, // 0x0
        m_linear: [0xC]u8, // 0xC
        m_angular: [0xC]u8, // 0x18
        m_linearSave: [0xC]u8, // 0x24
        m_angularSave: [0x10]u8, // 0x30
    };
    pub const WaterWheelDrag_t = extern struct {
        m_flFractionOfWheelSubmerged: [0x4]u8, // 0x0
        m_flWheelDrag: [0x4]u8, // 0x4
    };
    pub const CTakeDamageInfo = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_vecDamageForce: [0xC]u8, // 0x8
        m_vecDamagePosition: [0xC]u8, // 0x14
        m_vecReportedPosition: [0xC]u8, // 0x20
        m_vecDamageDirection: [0xC]u8, // 0x2C
        m_hInflictor: [0x4]u8, // 0x38
        m_hAttacker: [0x4]u8, // 0x3C
        m_hAbility: [0x4]u8, // 0x40
        m_flDamage: [0x4]u8, // 0x44
        m_flTotalledDamage: [0x4]u8, // 0x48
        m_bitsDamageType: [0x4]u8, // 0x4C
        m_iDamageCustom: [0x4]u8, // 0x50
        m_iAmmoType: [0xC]u8, // 0x54
        m_flOriginalDamage: [0x4]u8, // 0x60
        m_bShouldBleed: [0x1]u8, // 0x64
        m_bShouldSpark: [0xB]u8, // 0x65
        m_nDamageFlags: [0x8]u8, // 0x70
        m_iHitGroupId: [0x4]u8, // 0x78
        m_nNumObjectsPenetrated: [0x4]u8, // 0x7C
        m_flFriendlyFireDamageReductionRatio: [0x4]u8, // 0x80
        m_bStoppedBullet: [0x7C]u8, // 0x84
        m_DestructibleHitGroupRequests: [0x10]u8, // 0x100
        m_bInTakeDamageFlow: [0x8]u8, // 0x110
    };
    pub const CRandSimTimer = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_flMinInterval: [0x4]u8, // 0x8
        m_flMaxInterval: [0x4]u8, // 0xC
    };
    pub const CBtNodeComposite = extern struct {
        pad_0: [0x58]u8, // 0x0
    };
    pub const CRelativeLocation = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_Type: [0x4]u8, // 0x18
        m_vRelativeOffset: [0xC]u8, // 0x1C
        m_vWorldSpacePos: [0xC]u8, // 0x28
        m_hEntity: [0x4]u8, // 0x34
    };
    pub const HostagePathCost = extern struct {
        pad_0: [0x30]u8, // 0x0
    };
    pub const Extent = extern struct {
        lo: [0xC]u8, // 0x0
        hi: [0xC]u8, // 0xC
    };
    pub const sndopvarlatchdata_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_iszStack: [0x8]u8, // 0x8
        m_iszOperator: [0x8]u8, // 0x10
        m_iszOpvar: [0x8]u8, // 0x18
        m_flVal: [0x4]u8, // 0x20
        m_vPos: [0xC]u8, // 0x24
    };
    pub const PrecipitationFilter_t = extern struct {
        m_flMaxRadius: [0x4]u8, // 0x0
    };
    pub const IEconItemInterface = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const PathMoverEntitySpawn = extern struct {
        hMover: [0x8]u8, // 0x0
        vecOtherEntities: [0x18]u8, // 0x8
        nSpawnNumber: [0x8]u8, // 0x20
    };
    pub const CMultiplayer_Expresser = extern struct {
        pad_0: [0xA0]u8, // 0x0
        m_bAllowMultipleScenes: [0x8]u8, // 0xA0
    };
    pub const CNavVolume = extern struct {
        pad_0: [0x78]u8, // 0x0
    };
    pub const QuestProgress = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const CExternalAnimGraphList = extern struct {
        pad_0: [0x20]u8, // 0x0
    };
    pub const CNmAimCSTask = extern struct {
        pad_0: [0x130]u8, // 0x0
    };
    pub const ParticleIndex_t = extern struct {
        m_Value: [0x4]u8, // 0x0
    };
    pub const CAI_ExpresserWithFollowup = extern struct {
        pad_0: [0xA0]u8, // 0x0
    };
    pub const CTakeDamageSummaryScopeGuard = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_vecSummaries: [0x18]u8, // 0x8
    };
    pub const CIronSightController = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_bIronSightAvailable: [0x4]u8, // 0x8
        m_flIronSightAmount: [0x4]u8, // 0xC
        m_flIronSightAmountGained: [0x4]u8, // 0x10
        m_flIronSightAmountBiased: [0x4]u8, // 0x14
    };
    pub const INavPathCostAreaFilter = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const CNmEventConsumerSound = extern struct {
        pad_0: [0xB8]u8, // 0x0
    };
    pub const CNmEventConsumerLegacy = extern struct {
        pad_0: [0x3E8]u8, // 0x0
    };
    pub const DestructiblePartDamageRequest_t = extern struct {
        m_nHitGroup: [0x4]u8, // 0x0
        m_nDamageLevel: [0x4]u8, // 0x4
        m_nDesiredHealth: [0x4]u8, // 0x8
        m_nDestroyFlags: [0x4]u8, // 0xC
        m_nDamageType: [0x4]u8, // 0x10
        m_flBreakDamage: [0x4]u8, // 0x14
        m_flBreakDamageRadius: [0x4]u8, // 0x18
        m_hAttacker: [0x4]u8, // 0x1C
        m_vWsBreakDamageOrigin: [0xC]u8, // 0x20
        m_vWsBreakDamageForce: [0x10]u8, // 0x2C
    };
    pub const CInButtonState = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_pButtonStates: [0x18]u8, // 0x8
    };
    pub const SoundeventBoxHelperNetworked_t = extern struct {
        vOrigin: [0xC]u8, // 0x0
        qAngles: [0xC]u8, // 0xC
        vMins: [0xC]u8, // 0x18
        vMaxs: [0xC]u8, // 0x24
    };
    pub const CNetworkOriginCellCoordQuantizedVectorWS = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_cellX: [0x2]u8, // 0x10
        m_cellY: [0x2]u8, // 0x12
        m_cellZ: [0x2]u8, // 0x14
        m_nOutsideWorld: [0x2]u8, // 0x16
        m_vecX: [0x8]u8, // 0x18
        m_vecY: [0x8]u8, // 0x20
        m_vecZ: [0x8]u8, // 0x28
    };
    pub const CNmEventConsumerParticle = extern struct {
        pad_0: [0xB0]u8, // 0x0
    };
    pub const CNavHullVData = extern struct {
        m_bAgentEnabled: [0x4]u8, // 0x0
        m_agentRadius: [0x4]u8, // 0x4
        m_agentHeight: [0x4]u8, // 0x8
        m_agentShortHeightEnabled: [0x4]u8, // 0xC
        m_agentShortHeight: [0x4]u8, // 0x10
        m_agentCrawlEnabled: [0x4]u8, // 0x14
        m_agentCrawlHeight: [0x4]u8, // 0x18
        m_agentMaxClimb: [0x4]u8, // 0x1C
        m_agentMaxSlope: [0x4]u8, // 0x20
        m_agentMaxJumpDownDist: [0x4]u8, // 0x24
        m_agentMaxJumpHorizDistBase: [0x4]u8, // 0x28
        m_agentMaxJumpUpDist: [0x4]u8, // 0x2C
        m_agentBorderErosion: [0x4]u8, // 0x30
        m_flowMapGenerationEnabled: [0x4]u8, // 0x34
        m_flowMapNodeMaxRadius: [0x4]u8, // 0x38
    };
    pub const CNmEventConsumerCamera = extern struct {
        pad_0: [0xB0]u8, // 0x0
    };
    pub const AI_DefaultNPC_DebugSnapshotData_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        s_npc_current_ability: [0x8]u8, // 0x8
        s_npc_current_held_ability: [0x8]u8, // 0x10
        s_npc_tactic_current: [0x8]u8, // 0x18
        s_npc_tactic_phase: [0x8]u8, // 0x20
        tactic_interrupt_conditions: [0x18]u8, // 0x28
        path_query: [0x28]u8, // 0x40
        path_queries_speculative: [0x18]u8, // 0x68
    };
    pub const CNavPathCost = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_bAllowLadders: [0x1]u8, // 0x10
        m_bCanFly: [0x1]u8, // 0x11
        m_bCanSwim: [0x2]u8, // 0x12
        m_flWaterToGroundMaxHeight: [0x4]u8, // 0x14
        m_flGroundToWaterMaxHeight: [0x4]u8, // 0x18
        m_flGroundToWaterTransitionDistance: [0x4]u8, // 0x1C
        m_flWaterToGroundTransitionDistance: [0x4]u8, // 0x20
        m_flFlyingTransitionTolerance: [0x4]u8, // 0x24
        m_bOptimizeFlySpacePathfinds: [0x1]u8, // 0x28
        m_bStringPullFlySpacePathfinds: [0x1]u8, // 0x29
        m_bSupportsTransitions: [0x2]u8, // 0x2A
        m_flTransitionPenalty: [0x4]u8, // 0x2C
    };
    pub const CNmSnapWeaponNode__CDefinition = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_nFlashedAmountNodeIdx: [0x2]u8, // 0x18
        m_nWeaponCategoryNodeIdx: [0x2]u8, // 0x1A
        m_nWeaponTypeNodeIdx: [0x4]u8, // 0x1C
    };
    pub const SoundOpvarTraceResult_t = extern struct {
        vPos: [0xC]u8, // 0x0
        bDidHit: [0x4]u8, // 0xC
        flDistSqrToCenter: [0x4]u8, // 0x10
    };
    pub const ActorMapping_t = extern struct {
        m_sActorName: [0x8]u8, // 0x0
        m_hEntity: [0x8]u8, // 0x8
    };
    pub const CNavVolumeCalculatedVector = extern struct {
        pad_0: [0xA0]u8, // 0x0
    };
    pub const CFiringModeInt = extern struct {
        m_nValues: [0x8]u8, // 0x0
    };
    pub const CBtNodeDecorator = extern struct {
        pad_0: [0x58]u8, // 0x0
    };
    pub const CSAdditionalPerRoundStats_t = extern struct {
        m_numChickensKilled: [0x4]u8, // 0x0
        m_killsWhileBlind: [0x4]u8, // 0x4
        m_bombCarrierkills: [0x4]u8, // 0x8
        m_flBurnDamageInflicted: [0x4]u8, // 0xC
        m_flBlastDamageInflicted: [0x4]u8, // 0x10
        m_iDinks: [0x4]u8, // 0x14
        m_bFreshStartThisRound: [0x1]u8, // 0x18
        m_bBombPlantedAndAlive: [0x3]u8, // 0x19
        m_nDefuseStarts: [0x4]u8, // 0x1C
        m_nHostagePickUps: [0x4]u8, // 0x20
        m_numTeammatesFlashed: [0x4]u8, // 0x24
        m_strAnnotationsWorkshopId: [0xE8]u8, // 0x28
    };
    pub const CNmEventConsumerBodyGroup = extern struct {
        pad_0: [0xB0]u8, // 0x0
    };
    pub const CEmptyGraphController = extern struct {
        pad_0: [0xC0]u8, // 0x0
    };
    pub const ModelConfigHandle_t = extern struct {
        m_Value: [0x4]u8, // 0x0
    };
    pub const CEntitySubclassVDataBase = extern struct {
        pad_0: [0x28]u8, // 0x0
    };
    pub const CBreakableStageHelper = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_nCurrentStage: [0x4]u8, // 0x8
        m_nStageCount: [0xC]u8, // 0xC
    };
    pub const CNavVolumeBreadthFirstSearch = extern struct {
        pad_0: [0xA8]u8, // 0x0
        m_vStartPos: [0xC]u8, // 0xA8
        m_flSearchDist: [0xC]u8, // 0xB4
    };
    pub const dynpitchvol_t = extern struct {
        pad_0: [0x64]u8, // 0x0
    };
    pub const CSAdditionalMatchStats_t = extern struct {
        pad_0: [0x110]u8, // 0x0
        m_numRoundsSurvivedStreak: [0x4]u8, // 0x110
        m_maxNumRoundsSurvivedStreak: [0x4]u8, // 0x114
        m_numRoundsSurvivedTotal: [0x4]u8, // 0x118
        m_iRoundsWonWithoutPurchase: [0x4]u8, // 0x11C
        m_iRoundsWonWithoutPurchaseTotal: [0x4]u8, // 0x120
        m_numFirstKills: [0x4]u8, // 0x124
        m_numClutchKills: [0x4]u8, // 0x128
        m_numPistolKills: [0x4]u8, // 0x12C
        m_numSniperKills: [0x4]u8, // 0x130
        m_iNumSuicides: [0x4]u8, // 0x134
        m_iNumTeamKills: [0x4]u8, // 0x138
        m_flTeamDamage: [0x4]u8, // 0x13C
    };
    pub const AI_Navigator_DebugSnapshotData_t__Waypoint_t = extern struct {
        position: [0xC]u8, // 0x0
        nav_type: [0x4]u8, // 0xC
        flags: [0x4]u8, // 0x10
        is_pathcorner: [0x4]u8, // 0x14
    };
    pub const CTestPulseIOComponent = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_ComponentData: [0x8]u8, // 0x8
        m_OnComponentTestFunc: [0x20]u8, // 0x10
    };
    pub const IRagdoll = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const CCSPlayerAnimationState = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_currentMoveType: [0x1]u8, // 0x18
        m_groundMoveState: [0x1]u8, // 0x19
        m_groundActionDirection: [0x1]u8, // 0x1A
        m_airAction: [0x1]u8, // 0x1B
        m_bWasOnGroundLastUpdate: [0x1]u8, // 0x1C
        m_bWasStationaryLastUpdate: [0x3]u8, // 0x1D
        m_actionStartTick: [0x4]u8, // 0x20
        m_staticAimTimerStartTick: [0x4]u8, // 0x24
        m_plantAndTurnStartTick: [0x4]u8, // 0x28
        m_flTurnOnSpotAngle: [0x4]u8, // 0x2C
        m_flPreviousAimYaw: [0x4]u8, // 0x30
        m_flPreviousHorizontalSpeed: [0x4]u8, // 0x34
        m_flFootIKOffsetLeft: [0x4]u8, // 0x38
        m_flFootIKOffsetRight: [0x4]u8, // 0x3C
        m_flWeaponDropPercentageDueToMovement: [0x4]u8, // 0x40
        m_flWeaponDropSmoothDampVelocity: [0x9C]u8, // 0x44
    };
    pub const hudtextparms_t = extern struct {
        color1: [0x4]u8, // 0x0
        color2: [0x4]u8, // 0x4
        effect: [0x1]u8, // 0x8
        channel: [0x3]u8, // 0x9
        x: [0x4]u8, // 0xC
        y: [0x4]u8, // 0x10
    };
    pub const QueuedAISearchId_t = extern struct {
        m_Value: [0x8]u8, // 0x0
    };
    pub const CAnimGraphControllerBase = extern struct {
        pad_0: [0x4C]u8, // 0x0
        m_hExternalGraph: [0x74]u8, // 0x4C
    };
    pub const CNetworkVelocityVector = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_vecX: [0x8]u8, // 0x10
        m_vecY: [0x8]u8, // 0x18
        m_vecZ: [0x8]u8, // 0x20
    };
    pub const CDestructiblePart_DamageLevel = extern struct {
        m_sName: [0x8]u8, // 0x0
        m_sBreakablePieceName: [0x8]u8, // 0x8
        m_nBodyGroupValue: [0x4]u8, // 0x10
        m_nHealth: [0x10]u8, // 0x14
        m_flCriticalDamagePercent: [0x4]u8, // 0x24
        m_nDamagePassthroughType: [0x4]u8, // 0x28
        m_nDestructionDeathBehavior: [0x4]u8, // 0x2C
        m_sCustomDeathHandshake: [0x8]u8, // 0x30
        m_bShouldDestroyOnDeath: [0x4]u8, // 0x38
        m_flDeathDestroyTime: [0xC]u8, // 0x3C
    };
    pub const CNavVolumeAll = extern struct {
        pad_0: [0xA0]u8, // 0x0
    };
    pub const CNavVolumeSphere = extern struct {
        pad_0: [0x78]u8, // 0x0
        m_vCenter: [0xC]u8, // 0x78
        m_flRadius: [0x4]u8, // 0x84
    };
    pub const Relationship_t = extern struct {
        disposition: [0x4]u8, // 0x0
        priority: [0x4]u8, // 0x4
    };
};
