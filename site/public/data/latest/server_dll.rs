/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

#![allow(non_snake_case, non_camel_case_types, dead_code)]

pub mod server {

    pub type CLogicBranchList__LogicBranchListenerLastState_t = i32;
    pub type CFuncMover__Move_t = i32;
    pub type CFuncRotator__Rotate_t = i32;
    pub type CFuncRotator__RotationAxis_t = i32;
    pub type PulseBestOutflowRules_t = i32;
    pub type CPhysicsProp__CrateType_t = i32;
    pub type CFuncMover__FindFollowMoverStrategy_t = i32;
    pub type CPathMoverEntitySpawner__TemplateChoiceStrategy_t = i32;
    pub type PulseCursorCancelPriority_t = i32;
    pub type PulseMethodCallMode_t = i32;
    pub type CFuncMover__FollowConstraint_t = i32;
    pub type CFuncMover__FollowEntityDirection_t = i32;
    pub type CFuncMover__PathRebuildStrategy_t = i32;
    pub type CFuncMover__TransitionToPathNodeAction_t = i32;
    pub type PulseCursorWakePriority_t = i32;
    pub type CFuncMover__OrientationUpdate_t = i32;
    pub type PropDoorRotatingOpenDirection_e = i32;
    pub type PulseCollisionGroup_t = i32;
    pub type SceneOnPlayerDeath_t = i32;
    pub type LessonPanelLayoutFileTypes_t = i32;
    pub type TimelineCompression_t = i32;
    pub type CustomCameraMode_t = i32;
    pub type SubclassVDataChangeType_t = i32;
    pub type C4LightEffect_t = i32;
    pub type StanceType_t = i32;
    pub type Explosions = i32;
    pub type PreviewCharacterMode = i32;
    pub type ObserverInterpState_t = i32;
    pub type ENetworkDisconnectionReason = i32;
    pub type WorldTextPanelOrientation_t = i32;
    pub type EDestructibleParts_DestroyParameterFlags = i32;
    pub type DIALOG_TYPE = i32;
    pub type WorldTextPanelHorizontalAlign_t = i32;
    pub type SequenceFinishNotifyState_t = i32;
    pub type SoundEventStartType_t = i32;
    pub type EDemoCommands = i32;
    pub type ChoreoLookAtConditions_t = i32;
    pub type soundcommands_t = i32;
    pub type AnimGraphDebugDrawType_t = i32;
    pub type TrainOrientationType_t = i32;
    pub type CInfoChoreoLocatorShapeType_t = i32;
    pub type CSWeaponCategory = i32;
    pub type BeginDeathLifeStateTransition_t = i32;
    pub type EGCItemCustomizationNotification = i32;
    pub type PointOrientGoalDirectionType_t = i32;
    pub type ItemFlagTypes_t = i32;
    pub type SurroundingBoundsType_t = i32;
    pub type LifeState_t = i32;
    pub type PointOrientConstraint_t = i32;
    pub type EHitGroup = i32;
    pub type NPCFollowFormation_t = i32;
    pub type SVC_Messages = i32;
    pub type QuestType = i32;
    pub type ECsgoGCMsg = i32;
    pub type GLOBALESTATE = i32;
    pub type AnimationAlgorithm_t = i32;
    pub type CSWeaponMode = i32;
    pub type OnFrame = i32;
    pub type Materials = i32;
    pub type BloodType = i32;
    pub type NavScope_t = i32;
    pub type BreakableContentsType_t = i32;
    pub type AnimLoopMode_t = i32;
    pub type EBaseUserMessages = i32;
    pub type Class_T = i32;
    pub type filter_t = i32;
    pub type CSWeaponSilencerType = i32;
    pub type EProceduralRagdollWeightIndexPropagationMethod = i32;
    pub type GameAnimEventIndex_t = i32;
    pub type EGCToGCMsg = i32;
    pub type EQueryCvarValueStatus = i32;
    pub type GC_BannedWordType = i32;
    pub type ESource2PlayStatsFieldType = i32;
    pub type FixAngleSet_t = i32;
    pub type IChoreoServices__ScriptState_t = i32;
    pub type Touch_t = i32;
    pub type CCSPlayerAnimationState__MoveType_t = i32;
    pub type TrainVelocityType_t = i32;
    pub type SignonState_t = i32;
    pub type CSWeaponType = i32;
    pub type NavScopeFlags_t = i32;
    pub type EntFinderMethod_t = i32;
    pub type TestInputOutputCombinationsEnum_t = i32;
    pub type FuncMoverMovementSummaryFlags_t = i32;
    pub type EGCBaseClientMsg = i32;
    pub type PropDoorRotatingSpawnPos_t = i32;
    pub type ShardSolid_t = i32;
    pub type ESplitScreenMessageType = i32;
    pub type EntityPlatformTypes_t = i32;
    pub type PulseNPCCondition_t = i32;
    pub type RenderMode_t = i32;
    pub type EGCSystemMsg = i32;
    pub type ECommunityItemClass = i32;
    pub type ETeam = i32;
    pub type ForcedCrouchState_t = i32;
    pub type EBasePredictionEvents = i32;
    pub type EClientReportingVersion = i32;
    pub type EGCBaseProtoObjectTypes = i32;
    pub type PerformanceMode_t = i32;
    pub type TOGGLE_STATE = i32;
    pub type loadout_slot_t = i32;
    pub type EDestructiblePartDamagePassThroughType = i32;
    pub type RadiusDmgOverride_t = i32;
    pub type VoiceDataFormat_t = i32;
    pub type NavAttributeEnum = i32;
    pub type MoveLinearAuthoredPos_t = i32;
    pub type ValueRemapperMomentumType_t = i32;
    pub type Hull_t = i32;
    pub type ExternalAnimGraphInactiveBehavior_t = i32;
    pub type NET_Messages = i32;
    pub type EWeaponType = i32;
    pub type EBaseEntityMessages = i32;
    pub type ECSPredictionEvents = i32;
    pub type CCSPlayerAnimationState__GroundMoveState_t = i32;
    pub type PreviewWeaponState = i32;
    pub type EInButtonState = i32;
    pub type WeaponAttackType_t = i32;
    pub type CDebugOverlayFilterTextType_t = i32;
    pub type PARTICLE_MESSAGE = i32;
    pub type CSPlayerBlockingUseAction_t = i32;
    pub type ShatterDamageCause = i32;
    pub type ECommunityItemAttribute = i32;
    pub type SVC_Messages_LowFrequency = i32;
    pub type eRollType = i32;
    pub type ScriptedOnDeath_t = i32;
    pub type CSWeaponNameID = i32;
    pub type ChoreoLookAtSpeed_t = i32;
    pub type SpawnGroupFlags_t = i32;
    pub type ECSUsrMsg_DisconnectToLobby_Action = i32;
    pub type ECsgoSteamUserStat = i32;
    pub type gear_slot_t = i32;
    pub type CSPlayerState = i32;
    pub type RequestPause_t = i32;
    pub type ScriptedConflictResponse_t = i32;
    pub type WaterLevel_t = i32;
    pub type WorldTextPanelVerticalAlign_t = i32;
    pub type RelativeLocationType_t = i32;
    pub type CLC_Messages = i32;
    pub type EClientUIEvent = i32;
    pub type AmmoPosition_t = i32;
    pub type CDebugOverlayFilterType_t = i32;
    pub type PreviewEOMCelebration = i32;
    pub type ESOMsg = i32;
    pub type SaveRestoreTableFlags_t = i32;
    pub type InputBitMask_t = i32;
    pub type HitGroup_t = i32;
    pub type FuncRotatorRotationSummaryFlags_t = i32;
    pub type PointWorldTextReorientMode_t = i32;
    pub type DebugOverlayBits_t = i32;
    pub type AmmoFlags_t = i32;
    pub type EBaseGameEvents = i32;
    pub type DecalFlags_t = i32;
    pub type ECstrike15UserMessages = i32;
    pub type HierarchyType_t = i32;
    pub type doorCheck_e = i32;
    pub type BeamType_t = i32;
    pub type ReplayEventType_t = i32;
    pub type EntitySubclassScope_t = i32;
    pub type PointTemplateClientOnlyEntityBehavior_t = i32;
    pub type CDebugOverlayCombinedTypes_t = i32;
    pub type ShatterGlassStressType = i32;
    pub type TrackOrientationType_t = i32;
    pub type WeaponSwitchReason_t = i32;
    pub type ValueRemapperRatchetType_t = i32;
    pub type NavDirType = i32;
    pub type EGCBaseMsg = i32;
    pub type CRR_Response__ResponseEnum_t = i32;
    pub type MoveMountingAmount_t = i32;
    pub type EHudPanelClassStatus_t = i32;
    pub type GCClientLauncherType = i32;
    pub type ChoreoStrafeMode_t = i32;
    pub type HoverPoseFlags_t = i32;
    pub type RenderFx_t = i32;
    pub type vote_create_failed_t = i32;
    pub type RumbleEffect_t = i32;
    pub type LatchDirtyPermission_t = i32;
    pub type DoorState_t = i32;
    pub type ChoreoLookAtMode_t = i32;
    pub type ChatIgnoreType_t = i32;
    pub type PlayerConnectedState = i32;
    pub type PreviewCharacterBannerAnimation = i32;
    pub type EntityDissolveType_t = i32;
    pub type navproperties_t = i32;
    pub type Bidirectional_Messages = i32;
    pub type EntityEffects_t = i32;
    pub type ChoreoExternalAnimgraphControlState_t = i32;
    pub type SolidType_t = i32;
    pub type DamageTypes_t = i32;
    pub type PointWorldTextJustifyVertical_t = i32;
    pub type EProtoDebugVisiblity = i32;
    pub type attributeprovidertypes_t = i32;
    pub type EGCMsgResponse = i32;
    pub type MoveCollide_t = i32;
    pub type IChoreoServices__ChoreoState_t = i32;
    pub type PrefetchType = i32;
    pub type ValueRemapperOutputType_t = i32;
    pub type ETEProtobufIds = i32;
    pub type INavObstacle__NavObstacleType_t = i32;
    pub type PointTemplateOwnerSpawnGroupType_t = i32;
    pub type EContributionScoreFlag_t = i32;
    pub type CCSPlayerAnimationState__Direction_t = i32;
    pub type eSplinePushType = i32;
    pub type ChoreoScriptedMoveTo_t = i32;
    pub type WeaponGameplayAnimState = i32;
    pub type EDestructiblePartRadiusDamageApplyType = i32;
    pub type EntityDistanceMode_t = i32;
    pub type PulseTraceContents_t = i32;
    pub type NavAttributeDynamicType = i32;
    pub type PointWorldTextJustifyHorizontal_t = i32;
    pub type EHapticPulseType = i32;
    pub type EGCItemMsg = i32;
    pub type ShakeCommand_t = i32;
    pub type Flags_t = i32;
    pub type TRAIN_CODE = i32;
    pub type DestructiblePartDestructionDeathBehavior_t = i32;
    pub type BrushSolidities_e = i32;
    pub type GCProtoBufMsgSrc = i32;
    pub type QuestProgress__Reason = i32;
    pub type ModifyDamageReturn_t = i32;
    pub type ShadowType_t = i32;
    pub type DirectionAlongSimplePath_t = i32;
    pub type GrenadeType_t = i32;
    pub type ValueRemapperInputType_t = i32;
    pub type EKillTypes_t = i32;
    pub type WeaponSound_t = i32;
    pub type TakeDamageFlags_t = i32;
    pub type ShatterGlassEntityPoolState_t = i32;
    pub type EGCPetMsg = i32;
    pub type ValueRemapperHapticsType_t = i32;
    pub type Disposition_t = i32;
    pub type GCConnectionStatus = i32;
    pub type CanPlaySequence_t = i32;
    pub type BodySectionMutex_t = i32;
    pub type EChickenActivity = i32;
    pub type CCSPlayerAnimationState__AirAction_t = i32;
    pub type MedalRank_t = i32;
    pub type EBaseClientMessages = i32;
    pub type ObserverMode_t = i32;
    pub type FuncDoorSpawnPos_t = i32;
    pub type EOverrideBlockLOS_t = i32;
    pub type EntityAttachmentType_t = i32;
    pub type ECsgoGameEvents = i32;
    pub type MoveType_t = i32;
    #[repr(C)]
    pub struct CWeaponNOVA {
        pub pad_0: [u8; 0x1280], // 0x0
    }
    #[repr(C)]
    pub struct CPointWorldText {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_messageText: [u8; 0x200], // 0x850
        pub m_FontName: [u8; 0x40], // 0xA50
        pub m_BackgroundMaterialName: [u8; 0x40], // 0xA90
        pub m_bEnabled: [u8; 0x1], // 0xAD0
        pub m_bFullbright: [u8; 0x3], // 0xAD1
        pub m_flWorldUnitsPerPx: [u8; 0x4], // 0xAD4
        pub m_flFontSize: [u8; 0x4], // 0xAD8
        pub m_flDepthOffset: [u8; 0x4], // 0xADC
        pub m_bDrawBackground: [u8; 0x4], // 0xAE0
        pub m_flBackgroundBorderWidth: [u8; 0x4], // 0xAE4
        pub m_flBackgroundBorderHeight: [u8; 0x4], // 0xAE8
        pub m_flBackgroundWorldToUV: [u8; 0x4], // 0xAEC
        pub m_Color: [u8; 0x4], // 0xAF0
        pub m_nJustifyHorizontal: [u8; 0x4], // 0xAF4
        pub m_nJustifyVertical: [u8; 0x4], // 0xAF8
        pub m_nReorientMode: [u8; 0x4], // 0xAFC
    }
    #[repr(C)]
    pub struct CAmbientGeneric {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_radius: [u8; 0x4], // 0x4A8
        pub m_flMaxRadius: [u8; 0x4], // 0x4AC
        pub m_iSoundLevel: [u8; 0x4], // 0x4B0
        pub m_dpv: [u8; 0x64], // 0x4B4
        pub m_fActive: [u8; 0x1], // 0x518
        pub m_fLooping: [u8; 0x7], // 0x519
        pub m_iszSound: [u8; 0x8], // 0x520
        pub m_sSourceEntName: [u8; 0x8], // 0x528
        pub m_hSoundSource: [u8; 0x4], // 0x530
        pub m_nSoundSourceEntIndex: [u8; 0x1C], // 0x534
    }
    #[repr(C)]
    pub struct CEnvEntityMaker {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_vecEntityMins: [u8; 0xC], // 0x4A8
        pub m_vecEntityMaxs: [u8; 0xC], // 0x4B4
        pub m_hCurrentInstance: [u8; 0x4], // 0x4C0
        pub m_hCurrentBlocker: [u8; 0x4], // 0x4C4
        pub m_vecBlockerOrigin: [u8; 0xC], // 0x4C8
        pub m_angPostSpawnDirection: [u8; 0xC], // 0x4D4
        pub m_flPostSpawnDirectionVariance: [u8; 0x4], // 0x4E0
        pub m_flPostSpawnSpeed: [u8; 0x4], // 0x4E4
        pub m_bPostSpawnUseAngles: [u8; 0x8], // 0x4E8
        pub m_iszTemplate: [u8; 0x8], // 0x4F0
        pub m_pOutputOnSpawned: [u8; 0x18], // 0x4F8
        pub m_pOutputOnFailedSpawn: [u8; 0x18], // 0x510
    }
    #[repr(C)]
    pub struct CPulseGraphInstance_GameBlackboard {
        pub pad_0: [u8; 0x150], // 0x0
    }
    #[repr(C)]
    pub struct CPointEntity {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CFilterEnemy {
        pub pad_0: [u8; 0x4E0], // 0x0
        pub m_iszEnemyName: [u8; 0x8], // 0x4E0
        pub m_flRadius: [u8; 0x4], // 0x4E8
        pub m_flOuterRadius: [u8; 0x4], // 0x4EC
        pub m_nMaxSquadmatesPerEnemy: [u8; 0x8], // 0x4F0
        pub m_iszPlayerName: [u8; 0x8], // 0x4F8
    }
    #[repr(C)]
    pub struct CCSGO_WingmanIntroCounterTerroristPosition {
        pub pad_0: [u8; 0x1468], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_WaitForCursorsWithTag {
        pub pad_0: [u8; 0x128], // 0x0
        pub m_bTagSelfWhenComplete: [u8; 0x4], // 0x128
        pub m_nDesiredKillPriority: [u8; 0x4], // 0x12C
    }
    #[repr(C)]
    pub struct CFuncTrackAuto {
        pub pad_0: [u8; 0x958], // 0x0
    }
    #[repr(C)]
    pub struct CScriptedSequence {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_iszEntry: [u8; 0x8], // 0x4A8
        pub m_iszPreIdle: [u8; 0x8], // 0x4B0
        pub m_iszPlay: [u8; 0x8], // 0x4B8
        pub m_iszPostIdle: [u8; 0x8], // 0x4C0
        pub m_iszModifierToAddOnPlay: [u8; 0x8], // 0x4C8
        pub m_iszNextScript: [u8; 0x8], // 0x4D0
        pub m_iszEntity: [u8; 0x8], // 0x4D8
        pub m_iszSyncGroup: [u8; 0x8], // 0x4E0
        pub m_nMoveTo: [u8; 0x4], // 0x4E8
        pub m_nMoveToGait: [u8; 0x4], // 0x4EC
        pub m_nHeldWeaponBehavior: [u8; 0x4], // 0x4F0
        pub m_nForcedCrouchState: [u8; 0x4], // 0x4F4
        pub m_bIsPlayingPreIdle: [u8; 0x1], // 0x4F8
        pub m_bIsPlayingEntry: [u8; 0x1], // 0x4F9
        pub m_bIsPlayingAction: [u8; 0x1], // 0x4FA
        pub m_bIsPlayingPostIdle: [u8; 0x1], // 0x4FB
        pub m_bDontRotateOther: [u8; 0x1], // 0x4FC
        pub m_bIsRepeatable: [u8; 0x1], // 0x4FD
        pub m_bShouldLeaveCorpse: [u8; 0x1], // 0x4FE
        pub m_bStartOnSpawn: [u8; 0x1], // 0x4FF
        pub m_bDisallowInterrupts: [u8; 0x1], // 0x500
        pub m_bCanOverrideNPCState: [u8; 0x1], // 0x501
        pub m_bDontTeleportAtEnd: [u8; 0x1], // 0x502
        pub m_bHighPriority: [u8; 0x1], // 0x503
        pub m_bHideDebugComplaints: [u8; 0x1], // 0x504
        pub m_bContinueOnDeath: [u8; 0x1], // 0x505
        pub m_bLoopPreIdleSequence: [u8; 0x1], // 0x506
        pub m_bLoopActionSequence: [u8; 0x1], // 0x507
        pub m_bLoopPostIdleSequence: [u8; 0x1], // 0x508
        pub m_bSynchPostIdles: [u8; 0x1], // 0x509
        pub m_bIgnoreLookAt: [u8; 0x1], // 0x50A
        pub m_bIgnoreGravity: [u8; 0x1], // 0x50B
        pub m_bDisableNPCCollisions: [u8; 0x1], // 0x50C
        pub m_bKeepAnimgraphLockedPost: [u8; 0x1], // 0x50D
        pub m_bDontAddModifiers: [u8; 0x1], // 0x50E
        pub m_bDisableAimingWhileMoving: [u8; 0x1], // 0x50F
        pub m_bIgnoreRotation: [u8; 0x4], // 0x510
        pub m_flRadius: [u8; 0x4], // 0x514
        pub m_flRepeat: [u8; 0x4], // 0x518
        pub m_flPlayAnimFadeInTime: [u8; 0x4], // 0x51C
        pub m_flMoveInterpTime: [u8; 0x4], // 0x520
        pub m_flAngRate: [u8; 0x4], // 0x524
        pub m_flMoveSpeed: [u8; 0x4], // 0x528
        pub m_bWaitUntilMoveCompletesToStartAnimation: [u8; 0x4], // 0x52C
        pub m_nNotReadySequenceCount: [u8; 0x4], // 0x530
        pub m_startTime: [u8; 0x4], // 0x534
        pub m_bWaitForBeginSequence: [u8; 0x4], // 0x538
        pub m_saved_effects: [u8; 0x4], // 0x53C
        pub m_savedFlags: [u8; 0x4], // 0x540
        pub m_savedCollisionGroup: [u8; 0x4], // 0x544
        pub m_bInterruptable: [u8; 0x1], // 0x548
        pub m_sequenceStarted: [u8; 0x1], // 0x549
        pub m_bPositionRelativeToOtherEntity: [u8; 0x2], // 0x54A
        pub m_hTargetEnt: [u8; 0x4], // 0x54C
        pub m_hNextCine: [u8; 0x4], // 0x550
        pub m_bThinking: [u8; 0x1], // 0x554
        pub m_bInitiatedSelfDelete: [u8; 0x1], // 0x555
        pub m_bIsTeleportingDueToMoveTo: [u8; 0x1], // 0x556
        pub m_bAllowCustomInterruptConditions: [u8; 0x1], // 0x557
        pub m_hForcedTarget: [u8; 0x4], // 0x558
        pub m_bDontCancelOtherSequences: [u8; 0x1], // 0x55C
        pub m_bForceSynch: [u8; 0x1], // 0x55D
        pub m_bPreventUpdateYawOnFinish: [u8; 0x1], // 0x55E
        pub m_bEnsureOnNavmeshOnFinish: [u8; 0x1], // 0x55F
        pub m_onDeathBehavior: [u8; 0x4], // 0x560
        pub m_ConflictResponse: [u8; 0x4], // 0x564
        pub m_OnBeginSequence: [u8; 0x18], // 0x568
        pub m_OnActionStartOrLoop: [u8; 0x18], // 0x580
        pub m_OnEndSequence: [u8; 0x18], // 0x598
        pub m_OnPostIdleEndSequence: [u8; 0x18], // 0x5B0
        pub m_OnCancelSequence: [u8; 0x18], // 0x5C8
        pub m_OnCancelFailedSequence: [u8; 0x18], // 0x5E0
        pub m_OnScriptEvent: [u8; 0xC8], // 0x5F8
        pub m_matOtherToMain: [u8; 0x20], // 0x6C0
        pub m_hInteractionMainEntity: [u8; 0x4], // 0x6E0
        pub m_iPlayerDeathBehavior: [u8; 0x4], // 0x6E4
        pub m_bSkipFadeIn: [u8; 0x8], // 0x6E8
    }
    #[repr(C)]
    pub struct CFogTrigger {
        pub pad_0: [u8; 0x9C8], // 0x0
        pub m_fog: [u8; 0x68], // 0x9C8
    }
    #[repr(C)]
    pub struct CInfoTeleportDestination {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CPointBroadcastClientCommand {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CCSPlayer_PingServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_flPlayerPingTokens: [u8; 0x14], // 0x48
        pub m_hPlayerPing: [u8; 0x4], // 0x5C
    }
    #[repr(C)]
    pub struct CHEGrenade {
        pub pad_0: [u8; 0x12C0], // 0x0
    }
    #[repr(C)]
    pub struct CPhysicsSpring {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_pSpringJoint: [u8; 0x8], // 0x4A8
        pub m_flFrequency: [u8; 0x4], // 0x4B0
        pub m_flDampingRatio: [u8; 0x4], // 0x4B4
        pub m_flRestLength: [u8; 0x8], // 0x4B8
        pub m_nameAttachStart: [u8; 0x8], // 0x4C0
        pub m_nameAttachEnd: [u8; 0x8], // 0x4C8
        pub m_start: [u8; 0xC], // 0x4D0
        pub m_end: [u8; 0xC], // 0x4DC
        pub m_teleportTick: [u8; 0x8], // 0x4E8
    }
    #[repr(C)]
    pub struct CEnvMuzzleFlash {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_flScale: [u8; 0x8], // 0x4A8
        pub m_iszParentAttachment: [u8; 0x8], // 0x4B0
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
    pub struct CWeaponRevolver {
        pub pad_0: [u8; 0x12A0], // 0x0
    }
    #[repr(C)]
    pub struct CFuncTrainControls {
        pub pad_0: [u8; 0x850], // 0x0
    }
    #[repr(C)]
    pub struct CBtActionCombatPositioning {
        pub pad_0: [u8; 0x68], // 0x0
        pub m_szSensorInputKey: [u8; 0x18], // 0x68
        pub m_szIsAttackingKey: [u8; 0x8], // 0x80
        pub m_ActionTimer: [u8; 0x18], // 0x88
        pub m_bCrouching: [u8; 0x10], // 0xA0
    }
    #[repr(C)]
    pub struct CFuncRetakeBarrier {
        pub pad_0: [u8; 0xCB0], // 0x0
    }
    #[repr(C)]
    pub struct CTriggerBuoyancy {
        pub pad_0: [u8; 0x9C8], // 0x0
        pub m_BuoyancyHelper: [u8; 0x118], // 0x9C8
        pub m_flFluidDensity: [u8; 0x8], // 0xAE0
    }
    #[repr(C)]
    pub struct CTonemapController2Alias_env_tonemap_controller2 {
        pub pad_0: [u8; 0x4C0], // 0x0
    }
    #[repr(C)]
    pub struct CPathTrack {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_pnext: [u8; 0x4], // 0x4A8
        pub m_pprevious: [u8; 0x4], // 0x4AC
        pub m_paltpath: [u8; 0x4], // 0x4B0
        pub m_flSpeed: [u8; 0x4], // 0x4B4
        pub m_flRadius: [u8; 0x4], // 0x4B8
        pub m_length: [u8; 0x4], // 0x4BC
        pub m_altName: [u8; 0x8], // 0x4C0
        pub m_nIterVal: [u8; 0x4], // 0x4C8
        pub m_eOrientationType: [u8; 0x4], // 0x4CC
        pub m_OnPass: [u8; 0x18], // 0x4D0
    }
    #[repr(C)]
    pub struct CCSGO_EndOfMatchLineupEndpoint {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_Base {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_nEditorNodeID: [u8; 0x40], // 0x8
    }
    #[repr(C)]
    pub struct CTriggerProximity {
        pub pad_0: [u8; 0x9C8], // 0x0
        pub m_hMeasureTarget: [u8; 0x8], // 0x9C8
        pub m_iszMeasureTarget: [u8; 0x8], // 0x9D0
        pub m_fRadius: [u8; 0x4], // 0x9D8
        pub m_nTouchers: [u8; 0x4], // 0x9DC
        pub m_NearestEntityDistance: [u8; 0x20], // 0x9E0
    }
    #[repr(C)]
    pub struct CTankTrainAI {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_hTrain: [u8; 0x4], // 0x4A8
        pub m_hTargetEntity: [u8; 0x4], // 0x4AC
        pub m_soundPlaying: [u8; 0x18], // 0x4B0
        pub m_startSoundName: [u8; 0x8], // 0x4C8
        pub m_engineSoundName: [u8; 0x8], // 0x4D0
        pub m_movementSoundName: [u8; 0x8], // 0x4D8
        pub m_targetEntityName: [u8; 0x8], // 0x4E0
    }
    #[repr(C)]
    pub struct CGameText {
        pub pad_0: [u8; 0x860], // 0x0
        pub m_iszMessage: [u8; 0x8], // 0x860
        pub m_textParms: [u8; 0x18], // 0x868
    }
    #[repr(C)]
    pub struct CGameEnd {
        pub pad_0: [u8; 0x860], // 0x0
    }
    #[repr(C)]
    pub struct CInfoDeathmatchSpawn {
        pub pad_0: [u8; 0x4B8], // 0x0
    }
    #[repr(C)]
    pub struct CCSPlayerController_InventoryServices {
        pub pad_0: [u8; 0x40], // 0x0
        pub m_unMusicID: [u8; 0x4], // 0x40
        pub m_rank: [u8; 0x18], // 0x44
        pub m_nPersonaDataPublicLevel: [u8; 0x4], // 0x5C
        pub m_nPersonaDataPublicCommendsLeader: [u8; 0x4], // 0x60
        pub m_nPersonaDataPublicCommendsTeacher: [u8; 0x4], // 0x64
        pub m_nPersonaDataPublicCommendsFriendly: [u8; 0x4], // 0x68
        pub m_nPersonaDataXpTrailLevel: [u8; 0xF1C], // 0x6C
        pub m_unEquippedPlayerSprayIDs: [u8; 0x8], // 0xF88
        pub m_unCurrentLoadoutHash: [u8; 0x8], // 0xF90
        pub m_vecServerAuthoritativeWeaponSlots: [u8; 0x88], // 0xF98
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
    pub struct CPulse_ResumePoint {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CTriggerFan {
        pub pad_0: [u8; 0x9C8], // 0x0
        pub m_vFanOriginOffset: [u8; 0xC], // 0x9C8
        pub m_vDirection: [u8; 0xC], // 0x9D4
        pub m_bPushTowardsInfoTarget: [u8; 0x1], // 0x9E0
        pub m_bPushAwayFromInfoTarget: [u8; 0xF], // 0x9E1
        pub m_qNoiseDelta: [u8; 0x10], // 0x9F0
        pub m_hInfoFan: [u8; 0x4], // 0xA00
        pub m_flForce: [u8; 0x4], // 0xA04
        pub m_bFalloff: [u8; 0x8], // 0xA08
        pub m_RampTimer: [u8; 0x18], // 0xA10
        pub m_vFanOriginWS: [u8; 0xC], // 0xA28
        pub m_vFanOriginLS: [u8; 0xC], // 0xA34
        pub m_vFanEndLS: [u8; 0xC], // 0xA40
        pub m_vNoiseDirectionTarget: [u8; 0xC], // 0xA4C
        pub m_iszInfoFan: [u8; 0x8], // 0xA58
        pub m_flRopeForceScale: [u8; 0x4], // 0xA60
        pub m_flParticleForceScale: [u8; 0x4], // 0xA64
        pub m_flPlayerForce: [u8; 0x4], // 0xA68
        pub m_bPlayerWindblock: [u8; 0x4], // 0xA6C
        pub m_flNPCForce: [u8; 0x4], // 0xA70
        pub m_flRampTime: [u8; 0x4], // 0xA74
        pub m_fNoiseDegrees: [u8; 0x4], // 0xA78
        pub m_fNoiseSpeed: [u8; 0x4], // 0xA7C
        pub m_bPushPlayer: [u8; 0x1], // 0xA80
        pub m_bRampDown: [u8; 0x3], // 0xA81
        pub m_nManagerFanIdx: [u8; 0xC], // 0xA84
    }
    #[repr(C)]
    pub struct CPhysHingeAlias_phys_hinge_local {
        pub pad_0: [u8; 0x678], // 0x0
    }
    #[repr(C)]
    pub struct CLogicCase {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_nCase: [u8; 0x100], // 0x4A8
        pub m_nShuffleCases: [u8; 0x4], // 0x5A8
        pub m_nLastShuffleCase: [u8; 0x4], // 0x5AC
        pub m_uchShuffleCaseMap: [u8; 0x20], // 0x5B0
        pub m_OnCase: [u8; 0x300], // 0x5D0
        pub m_OnDefault: [u8; 0x20], // 0x8D0
    }
    #[repr(C)]
    pub struct CPulseCell_Outflow_PlayVOLine {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_OnFinished: [u8; 0x48], // 0xD8
    }
    #[repr(C)]
    pub struct CInfoGameEventProxy {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_iszEventName: [u8; 0x8], // 0x4A8
        pub m_flRange: [u8; 0x8], // 0x4B0
    }
    #[repr(C)]
    pub struct CWeaponBizon {
        pub pad_0: [u8; 0x12A0], // 0x0
    }
    #[repr(C)]
    pub struct CGamePlayerZone {
        pub pad_0: [u8; 0x858], // 0x0
        pub m_OnPlayerInZone: [u8; 0x18], // 0x858
        pub m_OnPlayerOutZone: [u8; 0x18], // 0x870
        pub m_PlayersInCount: [u8; 0x20], // 0x888
        pub m_PlayersOutCount: [u8; 0x20], // 0x8A8
    }
    #[repr(C)]
    pub struct CBaseToggle {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_toggle_state: [u8; 0x4], // 0x850
        pub m_flMoveDistance: [u8; 0x4], // 0x854
        pub m_flWait: [u8; 0x4], // 0x858
        pub m_flLip: [u8; 0x4], // 0x85C
        pub m_bAlwaysFireBlockedOutputs: [u8; 0x4], // 0x860
        pub m_vecPosition1: [u8; 0xC], // 0x864
        pub m_vecPosition2: [u8; 0xC], // 0x870
        pub m_vecMoveAng: [u8; 0xC], // 0x87C
        pub m_vecAngle1: [u8; 0xC], // 0x888
        pub m_vecAngle2: [u8; 0xC], // 0x894
        pub m_flHeight: [u8; 0x4], // 0x8A0
        pub m_hActivator: [u8; 0x4], // 0x8A4
        pub m_vecFinalDest: [u8; 0xC], // 0x8A8
        pub m_vecFinalAngle: [u8; 0xC], // 0x8B4
        pub m_movementType: [u8; 0x8], // 0x8C0
        pub m_sMaster: [u8; 0x8], // 0x8C8
    }
    #[repr(C)]
    pub struct CPulseServerCursor {
        pub pad_0: [u8; 0xE8], // 0x0
        pub m_hActivator: [u8; 0x4], // 0xE8
        pub m_hCaller: [u8; 0x4], // 0xEC
    }
    #[repr(C)]
    pub struct CPulseCell_PlaySequence {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_SequenceName: [u8; 0x8], // 0xD8
        pub m_PulseAnimEvents: [u8; 0x18], // 0xE0
        pub m_OnFinished: [u8; 0x48], // 0xF8
    }
    #[repr(C)]
    pub struct CInferno {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_firePositions: [u8; 0x300], // 0x850
        pub m_fireParentPositions: [u8; 0x300], // 0xB50
        pub m_bFireIsBurning: [u8; 0x40], // 0xE50
        pub m_BurnNormal: [u8; 0x300], // 0xE90
        pub m_fireCount: [u8; 0x4], // 0x1190
        pub m_nInfernoType: [u8; 0x4], // 0x1194
        pub m_nFireEffectTickBegin: [u8; 0x4], // 0x1198
        pub m_nFireLifetime: [u8; 0x4], // 0x119C
        pub m_bInPostEffectTime: [u8; 0x1], // 0x11A0
        pub m_bWasCreatedInSmoke: [u8; 0x207], // 0x11A1
        pub m_extent: [u8; 0x18], // 0x13A8
        pub m_damageTimer: [u8; 0x18], // 0x13C0
        pub m_damageRampTimer: [u8; 0x18], // 0x13D8
        pub m_splashVelocity: [u8; 0xC], // 0x13F0
        pub m_InitialSplashVelocity: [u8; 0xC], // 0x13FC
        pub m_startPos: [u8; 0xC], // 0x1408
        pub m_vecOriginalSpawnLocation: [u8; 0xC], // 0x1414
        pub m_activeTimer: [u8; 0x10], // 0x1420
        pub m_fireSpawnOffset: [u8; 0x4], // 0x1430
        pub m_nMaxFlames: [u8; 0x4], // 0x1434
        pub m_nSpreadCount: [u8; 0x8], // 0x1438
        pub m_BookkeepingTimer: [u8; 0x18], // 0x1440
        pub m_NextSpreadTimer: [u8; 0x18], // 0x1458
        pub m_nSourceItemDefIndex: [u8; 0x68], // 0x1470
    }
    #[repr(C)]
    pub struct CTouchExpansionComponent {
        pub pad_0: [u8; 0x50], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_Outflow_PlaySceneBase {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_OnFinished: [u8; 0x48], // 0xD8
        pub m_Triggers: [u8; 0x18], // 0x120
    }
    #[repr(C)]
    pub struct CPulseCell_LerpCameraSettings {
        pub pad_0: [u8; 0x120], // 0x0
        pub m_flSeconds: [u8; 0x4], // 0x120
        pub m_Start: [u8; 0x10], // 0x124
        pub m_End: [u8; 0x14], // 0x134
    }
    #[repr(C)]
    pub struct CWeaponSCAR20 {
        pub pad_0: [u8; 0x12A0], // 0x0
    }
    #[repr(C)]
    pub struct CFuncInteractionLayerClip {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_bDisabled: [u8; 0x8], // 0x850
        pub m_iszInteractsAs: [u8; 0x8], // 0x858
        pub m_iszInteractsWith: [u8; 0x8], // 0x860
    }
    #[repr(C)]
    pub struct CCSObserver_UseServices {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CCSMinimapVolume {
        pub pad_0: [u8; 0x9E0], // 0x0
        pub m_strMinimapName: [u8; 0x8], // 0x9E0
    }
    #[repr(C)]
    pub struct CTriggerDetectBulletFire {
        pub pad_0: [u8; 0x9C8], // 0x0
        pub m_bPlayerFireOnly: [u8; 0x8], // 0x9C8
        pub m_OnDetectedBulletFire: [u8; 0x18], // 0x9D0
    }
    #[repr(C)]
    pub struct CCSPlayer_UseServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_hLastKnownUseEntity: [u8; 0x4], // 0x48
        pub m_flLastUseTimeStamp: [u8; 0x4], // 0x4C
        pub m_flTimeLastUsedWindow: [u8; 0x8], // 0x50
    }
    #[repr(C)]
    pub struct CWeaponAWP {
        pub pad_0: [u8; 0x12A0], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_PickBestOutflowSelector {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_nCheckType: [u8; 0x8], // 0x48
        pub m_OutflowList: [u8; 0x18], // 0x50
    }
    #[repr(C)]
    pub struct CInfoFan {
        pub pad_0: [u8; 0x4E8], // 0x0
        pub m_fFanForceMaxRadius: [u8; 0x4], // 0x4E8
        pub m_fFanForceMinRadius: [u8; 0x4], // 0x4EC
        pub m_flCurveDistRange: [u8; 0x8], // 0x4F0
        pub m_FanForceCurveString: [u8; 0x8], // 0x4F8
    }
    #[repr(C)]
    pub struct CGameRules {
        pub pad_0: [u8; 0x8], // 0x0
        pub __m_pChainEntity: [u8; 0x28], // 0x8
        pub m_szQuestName: [u8; 0x80], // 0x30
        pub m_nQuestPhase: [u8; 0x4], // 0xB0
        pub m_nLastMatchTime: [u8; 0x4], // 0xB4
        pub m_nLastMatchTime_MatchID64: [u8; 0x8], // 0xB8
        pub m_nTotalPausedTicks: [u8; 0x4], // 0xC0
        pub m_nPauseStartTick: [u8; 0x4], // 0xC4
        pub m_bGamePaused: [u8; 0x8], // 0xC8
    }
    #[repr(C)]
    pub struct CPulseCell_ApplyDynamicAttributeEHandle {
        pub pad_0: [u8; 0xD8], // 0x0
    }
    #[repr(C)]
    pub struct CFish {
        pub pad_0: [u8; 0xA40], // 0x0
        pub m_pool: [u8; 0x4], // 0xA40
        pub m_id: [u8; 0x4], // 0xA44
        pub m_x: [u8; 0x4], // 0xA48
        pub m_y: [u8; 0x4], // 0xA4C
        pub m_z: [u8; 0x4], // 0xA50
        pub m_angle: [u8; 0x4], // 0xA54
        pub m_angleChange: [u8; 0x4], // 0xA58
        pub m_forward: [u8; 0xC], // 0xA5C
        pub m_perp: [u8; 0xC], // 0xA68
        pub m_poolOrigin: [u8; 0xC], // 0xA74
        pub m_waterLevel: [u8; 0x4], // 0xA80
        pub m_speed: [u8; 0x4], // 0xA84
        pub m_desiredSpeed: [u8; 0x4], // 0xA88
        pub m_calmSpeed: [u8; 0x4], // 0xA8C
        pub m_panicSpeed: [u8; 0x4], // 0xA90
        pub m_avoidRange: [u8; 0x4], // 0xA94
        pub m_turnTimer: [u8; 0x18], // 0xA98
        pub m_turnClockwise: [u8; 0x8], // 0xAB0
        pub m_goTimer: [u8; 0x18], // 0xAB8
        pub m_moveTimer: [u8; 0x18], // 0xAD0
        pub m_panicTimer: [u8; 0x18], // 0xAE8
        pub m_disperseTimer: [u8; 0x18], // 0xB00
        pub m_proximityTimer: [u8; 0x18], // 0xB18
        pub m_visible: [u8; 0x20], // 0xB30
    }
    #[repr(C)]
    pub struct CCSBot {
        pub pad_0: [u8; 0x108], // 0x0
        pub m_eyePosition: [u8; 0xC], // 0x108
        pub m_name: [u8; 0x40], // 0x114
        pub m_combatRange: [u8; 0x4], // 0x154
        pub m_isRogue: [u8; 0x8], // 0x158
        pub m_rogueTimer: [u8; 0x1C], // 0x160
        pub m_diedLastRound: [u8; 0x4], // 0x17C
        pub m_safeTime: [u8; 0x4], // 0x180
        pub m_wasSafe: [u8; 0x8], // 0x184
        pub m_blindFire: [u8; 0x4], // 0x18C
        pub m_surpriseTimer: [u8; 0x18], // 0x190
        pub m_bAllowActive: [u8; 0x1], // 0x1A8
        pub m_isFollowing: [u8; 0x3], // 0x1A9
        pub m_leader: [u8; 0x4], // 0x1AC
        pub m_followTimestamp: [u8; 0x4], // 0x1B0
        pub m_allowAutoFollowTime: [u8; 0x4], // 0x1B4
        pub m_hurryTimer: [u8; 0x18], // 0x1B8
        pub m_alertTimer: [u8; 0x18], // 0x1D0
        pub m_sneakTimer: [u8; 0x18], // 0x1E8
        pub m_panicTimer: [u8; 0x3C8], // 0x200
        pub m_stateTimestamp: [u8; 0x4], // 0x5C8
        pub m_isAttacking: [u8; 0x1], // 0x5CC
        pub m_isOpeningDoor: [u8; 0x7], // 0x5CD
        pub m_taskEntity: [u8; 0x10], // 0x5D4
        pub m_goalPosition: [u8; 0xC], // 0x5E4
        pub m_goalEntity: [u8; 0x4], // 0x5F0
        pub m_avoid: [u8; 0x4], // 0x5F4
        pub m_avoidTimestamp: [u8; 0x4], // 0x5F8
        pub m_isStopping: [u8; 0x1], // 0x5FC
        pub m_hasVisitedEnemySpawn: [u8; 0x3], // 0x5FD
        pub m_stillTimer: [u8; 0x10], // 0x600
        pub m_bEyeAnglesUnderPathFinderControl: [u8; 0x48F0], // 0x610
        pub m_pathIndex: [u8; 0x4], // 0x4F00
        pub m_areaEnteredTimestamp: [u8; 0x4], // 0x4F04
        pub m_repathTimer: [u8; 0x18], // 0x4F08
        pub m_avoidFriendTimer: [u8; 0x18], // 0x4F20
        pub m_isFriendInTheWay: [u8; 0x8], // 0x4F38
        pub m_politeTimer: [u8; 0x18], // 0x4F40
        pub m_isWaitingBehindFriend: [u8; 0x2C], // 0x4F58
        pub m_pathLadderEnd: [u8; 0x4C], // 0x4F84
        pub m_mustRunTimer: [u8; 0x18], // 0x4FD0
        pub m_waitTimer: [u8; 0x18], // 0x4FE8
        pub m_updateTravelDistanceTimer: [u8; 0x18], // 0x5000
        pub m_playerTravelDistance: [u8; 0x100], // 0x5018
        pub m_travelDistancePhase: [u8; 0x198], // 0x5118
        pub m_hostageEscortCount: [u8; 0x4], // 0x52B0
        pub m_hostageEscortCountTimestamp: [u8; 0x4], // 0x52B4
        pub m_desiredTeam: [u8; 0x4], // 0x52B8
        pub m_hasJoined: [u8; 0x1], // 0x52BC
        pub m_isWaitingForHostage: [u8; 0x3], // 0x52BD
        pub m_inhibitWaitingForHostageTimer: [u8; 0x18], // 0x52C0
        pub m_waitForHostageTimer: [u8; 0x18], // 0x52D8
        pub m_noisePosition: [u8; 0xC], // 0x52F0
        pub m_noiseTravelDistance: [u8; 0x4], // 0x52FC
        pub m_noiseTimestamp: [u8; 0x8], // 0x5300
        pub m_noiseSource: [u8; 0x18], // 0x5308
        pub m_noiseBendTimer: [u8; 0x18], // 0x5320
        pub m_bentNoisePosition: [u8; 0xC], // 0x5338
        pub m_bendNoisePositionValid: [u8; 0x4], // 0x5344
        pub m_lookAroundStateTimestamp: [u8; 0x4], // 0x5348
        pub m_lookAheadAngle: [u8; 0x4], // 0x534C
        pub m_lookUpAngle: [u8; 0x4], // 0x5350
        pub m_forwardAngle: [u8; 0x4], // 0x5354
        pub m_inhibitLookAroundTimestamp: [u8; 0x8], // 0x5358
        pub m_lookAtSpot: [u8; 0x10], // 0x5360
        pub m_lookAtSpotDuration: [u8; 0x4], // 0x5370
        pub m_lookAtSpotTimestamp: [u8; 0x4], // 0x5374
        pub m_lookAtSpotAngleTolerance: [u8; 0x4], // 0x5378
        pub m_lookAtSpotClearIfClose: [u8; 0x1], // 0x537C
        pub m_lookAtSpotAttack: [u8; 0x3], // 0x537D
        pub m_lookAtDesc: [u8; 0x8], // 0x5380
        pub m_peripheralTimestamp: [u8; 0x188], // 0x5388
        pub m_approachPointCount: [u8; 0x4], // 0x5510
        pub m_approachPointViewPosition: [u8; 0xC], // 0x5514
        pub m_viewSteadyTimer: [u8; 0x18], // 0x5520
        pub m_tossGrenadeTimer: [u8; 0x20], // 0x5538
        pub m_isAvoidingGrenade: [u8; 0x20], // 0x5558
        pub m_spotCheckTimestamp: [u8; 0x408], // 0x5578
        pub m_checkedHidingSpotCount: [u8; 0x4], // 0x5980
        pub m_lookPitch: [u8; 0x4], // 0x5984
        pub m_lookPitchVel: [u8; 0x4], // 0x5988
        pub m_lookYaw: [u8; 0x4], // 0x598C
        pub m_lookYawVel: [u8; 0x4], // 0x5990
        pub m_targetSpot: [u8; 0xC], // 0x5994
        pub m_targetSpotVelocity: [u8; 0xC], // 0x59A0
        pub m_targetSpotPredicted: [u8; 0xC], // 0x59AC
        pub m_aimError: [u8; 0xC], // 0x59B8
        pub m_aimGoal: [u8; 0xC], // 0x59C4
        pub m_targetSpotTime: [u8; 0x4], // 0x59D0
        pub m_aimFocus: [u8; 0x4], // 0x59D4
        pub m_aimFocusInterval: [u8; 0x4], // 0x59D8
        pub m_aimFocusNextUpdate: [u8; 0xC], // 0x59DC
        pub m_ignoreEnemiesTimer: [u8; 0x18], // 0x59E8
        pub m_enemy: [u8; 0x4], // 0x5A00
        pub m_isEnemyVisible: [u8; 0x1], // 0x5A04
        pub m_visibleEnemyParts: [u8; 0x3], // 0x5A05
        pub m_lastEnemyPosition: [u8; 0xC], // 0x5A08
        pub m_lastSawEnemyTimestamp: [u8; 0x4], // 0x5A14
        pub m_firstSawEnemyTimestamp: [u8; 0x4], // 0x5A18
        pub m_currentEnemyAcquireTimestamp: [u8; 0x4], // 0x5A1C
        pub m_enemyDeathTimestamp: [u8; 0x4], // 0x5A20
        pub m_friendDeathTimestamp: [u8; 0x4], // 0x5A24
        pub m_isLastEnemyDead: [u8; 0x4], // 0x5A28
        pub m_nearbyEnemyCount: [u8; 0x20C], // 0x5A2C
        pub m_bomber: [u8; 0x4], // 0x5C38
        pub m_nearbyFriendCount: [u8; 0x4], // 0x5C3C
        pub m_closestVisibleFriend: [u8; 0x4], // 0x5C40
        pub m_closestVisibleHumanFriend: [u8; 0x4], // 0x5C44
        pub m_attentionInterval: [u8; 0x10], // 0x5C48
        pub m_attacker: [u8; 0x4], // 0x5C58
        pub m_attackedTimestamp: [u8; 0x4], // 0x5C5C
        pub m_burnedByFlamesTimer: [u8; 0x10], // 0x5C60
        pub m_lastVictimID: [u8; 0x4], // 0x5C70
        pub m_isAimingAtEnemy: [u8; 0x1], // 0x5C74
        pub m_isRapidFiring: [u8; 0x3], // 0x5C75
        pub m_equipTimer: [u8; 0x10], // 0x5C78
        pub m_zoomTimer: [u8; 0x18], // 0x5C88
        pub m_fireWeaponTimestamp: [u8; 0x8], // 0x5CA0
        pub m_lookForWeaponsOnGroundTimer: [u8; 0x18], // 0x5CA8
        pub m_bIsSleeping: [u8; 0x1], // 0x5CC0
        pub m_isEnemySniperVisible: [u8; 0x7], // 0x5CC1
        pub m_sawEnemySniperTimer: [u8; 0xB8], // 0x5CC8
        pub m_enemyQueueIndex: [u8; 0x1], // 0x5D80
        pub m_enemyQueueCount: [u8; 0x1], // 0x5D81
        pub m_enemyQueueAttendIndex: [u8; 0x1], // 0x5D82
        pub m_isStuck: [u8; 0x1], // 0x5D83
        pub m_stuckTimestamp: [u8; 0x4], // 0x5D84
        pub m_stuckSpot: [u8; 0x10], // 0x5D88
        pub m_wiggleTimer: [u8; 0x18], // 0x5D98
        pub m_stuckJumpTimer: [u8; 0x18], // 0x5DB0
        pub m_nextCleanupCheckTimestamp: [u8; 0x4], // 0x5DC8
        pub m_avgVel: [u8; 0x28], // 0x5DCC
        pub m_avgVelIndex: [u8; 0x4], // 0x5DF4
        pub m_avgVelCount: [u8; 0x4], // 0x5DF8
        pub m_lastOrigin: [u8; 0x10], // 0x5DFC
        pub m_lastRadioRecievedTimestamp: [u8; 0x4], // 0x5E0C
        pub m_lastRadioSentTimestamp: [u8; 0x4], // 0x5E10
        pub m_radioSubject: [u8; 0x4], // 0x5E14
        pub m_radioPosition: [u8; 0xC], // 0x5E18
        pub m_voiceEndTimestamp: [u8; 0xC], // 0x5E24
        pub m_lastValidReactionQueueFrame: [u8; 0x8], // 0x5E30
    }
    #[repr(C)]
    pub struct CHandleTest {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_Handle: [u8; 0x4], // 0x4A8
        pub m_bSendHandle: [u8; 0x4], // 0x4AC
    }
    #[repr(C)]
    pub struct CLogicNPCCounter {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_OnMinCountAll: [u8; 0x18], // 0x4A8
        pub m_OnMaxCountAll: [u8; 0x18], // 0x4C0
        pub m_OnFactorAll: [u8; 0x20], // 0x4D8
        pub m_OnMinPlayerDistAll: [u8; 0x20], // 0x4F8
        pub m_OnMinCount_1: [u8; 0x18], // 0x518
        pub m_OnMaxCount_1: [u8; 0x18], // 0x530
        pub m_OnFactor_1: [u8; 0x20], // 0x548
        pub m_OnMinPlayerDist_1: [u8; 0x20], // 0x568
        pub m_OnMinCount_2: [u8; 0x18], // 0x588
        pub m_OnMaxCount_2: [u8; 0x18], // 0x5A0
        pub m_OnFactor_2: [u8; 0x20], // 0x5B8
        pub m_OnMinPlayerDist_2: [u8; 0x20], // 0x5D8
        pub m_OnMinCount_3: [u8; 0x18], // 0x5F8
        pub m_OnMaxCount_3: [u8; 0x18], // 0x610
        pub m_OnFactor_3: [u8; 0x20], // 0x628
        pub m_OnMinPlayerDist_3: [u8; 0x20], // 0x648
        pub m_hSource: [u8; 0x8], // 0x668
        pub m_iszSourceEntityName: [u8; 0x8], // 0x670
        pub m_flDistanceMax: [u8; 0x4], // 0x678
        pub m_bDisabled: [u8; 0x4], // 0x67C
        pub m_nMinCountAll: [u8; 0x4], // 0x680
        pub m_nMaxCountAll: [u8; 0x4], // 0x684
        pub m_nMinFactorAll: [u8; 0x4], // 0x688
        pub m_nMaxFactorAll: [u8; 0xC], // 0x68C
        pub m_iszNPCClassname_1: [u8; 0x8], // 0x698
        pub m_nNPCState_1: [u8; 0x4], // 0x6A0
        pub m_bInvertState_1: [u8; 0x4], // 0x6A4
        pub m_nMinCount_1: [u8; 0x4], // 0x6A8
        pub m_nMaxCount_1: [u8; 0x4], // 0x6AC
        pub m_nMinFactor_1: [u8; 0x4], // 0x6B0
        pub m_nMaxFactor_1: [u8; 0x8], // 0x6B4
        pub m_flDefaultDist_1: [u8; 0x4], // 0x6BC
        pub m_iszNPCClassname_2: [u8; 0x8], // 0x6C0
        pub m_nNPCState_2: [u8; 0x4], // 0x6C8
        pub m_bInvertState_2: [u8; 0x4], // 0x6CC
        pub m_nMinCount_2: [u8; 0x4], // 0x6D0
        pub m_nMaxCount_2: [u8; 0x4], // 0x6D4
        pub m_nMinFactor_2: [u8; 0x4], // 0x6D8
        pub m_nMaxFactor_2: [u8; 0x8], // 0x6DC
        pub m_flDefaultDist_2: [u8; 0x4], // 0x6E4
        pub m_iszNPCClassname_3: [u8; 0x8], // 0x6E8
        pub m_nNPCState_3: [u8; 0x4], // 0x6F0
        pub m_bInvertState_3: [u8; 0x4], // 0x6F4
        pub m_nMinCount_3: [u8; 0x4], // 0x6F8
        pub m_nMaxCount_3: [u8; 0x4], // 0x6FC
        pub m_nMinFactor_3: [u8; 0x4], // 0x700
        pub m_nMaxFactor_3: [u8; 0x8], // 0x704
        pub m_flDefaultDist_3: [u8; 0x1C], // 0x70C
    }
    #[repr(C)]
    pub struct CCSPlayer_RadioServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_flGotHostageTalkTimer: [u8; 0x4], // 0x48
        pub m_flDefusingTalkTimer: [u8; 0x4], // 0x4C
        pub m_flC4PlantTalkTimer: [u8; 0x4], // 0x50
        pub m_flRadioTokenSlots: [u8; 0xC], // 0x54
        pub m_bIgnoreRadio: [u8; 0x8], // 0x60
    }
    #[repr(C)]
    pub struct CWeaponSG556 {
        pub pad_0: [u8; 0x12A0], // 0x0
    }
    #[repr(C)]
    pub struct CRagdollConstraint {
        pub pad_0: [u8; 0x508], // 0x0
        pub m_xmin: [u8; 0x4], // 0x508
        pub m_xmax: [u8; 0x4], // 0x50C
        pub m_ymin: [u8; 0x4], // 0x510
        pub m_ymax: [u8; 0x4], // 0x514
        pub m_zmin: [u8; 0x4], // 0x518
        pub m_zmax: [u8; 0x4], // 0x51C
        pub m_xfriction: [u8; 0x4], // 0x520
        pub m_yfriction: [u8; 0x4], // 0x524
        pub m_zfriction: [u8; 0x8], // 0x528
    }
    #[repr(C)]
    pub struct CFuncVehicleClip {
        pub pad_0: [u8; 0x850], // 0x0
    }
    #[repr(C)]
    pub struct CDEagle {
        pub pad_0: [u8; 0x12A0], // 0x0
    }
    #[repr(C)]
    pub struct CWeaponFamas {
        pub pad_0: [u8; 0x12A0], // 0x0
    }
    #[repr(C)]
    pub struct CEnvSplash {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_flScale: [u8; 0x8], // 0x4A8
    }
    #[repr(C)]
    pub struct CPointCameraVFOV {
        pub pad_0: [u8; 0x508], // 0x0
        pub m_flVerticalFOV: [u8; 0x8], // 0x508
    }
    #[repr(C)]
    pub struct CCSGO_WingmanIntroTerroristPosition {
        pub pad_0: [u8; 0x1468], // 0x0
    }
    #[repr(C)]
    pub struct CCSWeaponBaseShotgun {
        pub pad_0: [u8; 0x1280], // 0x0
    }
    #[repr(C)]
    pub struct CFuncMoveLinear {
        pub pad_0: [u8; 0x8D0], // 0x0
        pub m_authoredPosition: [u8; 0x4], // 0x8D0
        pub m_angMoveEntitySpace: [u8; 0xC], // 0x8D4
        pub m_vecMoveDirParentSpace: [u8; 0x10], // 0x8E0
        pub m_soundStart: [u8; 0x8], // 0x8F0
        pub m_soundStop: [u8; 0x8], // 0x8F8
        pub m_currentSound: [u8; 0x8], // 0x900
        pub m_flBlockDamage: [u8; 0x4], // 0x908
        pub m_flStartPosition: [u8; 0xC], // 0x90C
        pub m_OnFullyOpen: [u8; 0x18], // 0x918
        pub m_OnFullyClosed: [u8; 0x18], // 0x930
        pub m_flSpeed: [u8; 0x4], // 0x948
        pub m_bCreateMovableNavMesh: [u8; 0x1], // 0x94C
        pub m_bAllowMovableNavMeshDockingOnEntireEntity: [u8; 0x1], // 0x94D
        pub m_bCreateNavObstacle: [u8; 0xA], // 0x94E
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
    pub struct CScriptItem {
        pub pad_0: [u8; 0xAE0], // 0x0
        pub m_MoveTypeOverride: [u8; 0x10], // 0xAE0
    }
    #[repr(C)]
    pub struct CDynamicPropAlias_prop_dynamic_override {
        pub pad_0: [u8; 0xC90], // 0x0
    }
    #[repr(C)]
    pub struct CBaseTrigger {
        pub pad_0: [u8; 0x8D0], // 0x0
        pub m_OnStartTouch: [u8; 0x18], // 0x8D0
        pub m_OnStartTouchAll: [u8; 0x18], // 0x8E8
        pub m_OnEndTouch: [u8; 0x18], // 0x900
        pub m_OnEndTouchAll: [u8; 0x18], // 0x918
        pub m_OnTouching: [u8; 0x18], // 0x930
        pub m_OnTouchingEachEntity: [u8; 0x18], // 0x948
        pub m_OnNotTouching: [u8; 0x18], // 0x960
        pub m_OnTouchingChanged: [u8; 0x18], // 0x978
        pub m_hTouchingEntities: [u8; 0x18], // 0x990
        pub m_iFilterName: [u8; 0x8], // 0x9A8
        pub m_hFilter: [u8; 0x4], // 0x9B0
        pub m_bDisabled: [u8; 0xC], // 0x9B4
        pub m_bUseAsyncQueries: [u8; 0x8], // 0x9C0
    }
    #[repr(C)]
    pub struct CPointPush {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_bEnabled: [u8; 0x4], // 0x4A8
        pub m_flMagnitude: [u8; 0x4], // 0x4AC
        pub m_flRadius: [u8; 0x4], // 0x4B0
        pub m_flInnerRadius: [u8; 0x4], // 0x4B4
        pub m_flConeOfInfluence: [u8; 0x8], // 0x4B8
        pub m_iszFilterName: [u8; 0x8], // 0x4C0
        pub m_hFilter: [u8; 0x8], // 0x4C8
    }
    #[repr(C)]
    pub struct CPulseCell_Step_EntFire {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_Input: [u8; 0x8], // 0x48
    }
    #[repr(C)]
    pub struct CCSObserver_ObserverServices {
        pub pad_0: [u8; 0x80], // 0x0
    }
    #[repr(C)]
    pub struct CPlayerPing {
        pub pad_0: [u8; 0x4B0], // 0x0
        pub m_hPlayer: [u8; 0x4], // 0x4B0
        pub m_hPingedEntity: [u8; 0x4], // 0x4B4
        pub m_iType: [u8; 0x4], // 0x4B8
        pub m_bUrgent: [u8; 0x1], // 0x4BC
        pub m_szPlaceName: [u8; 0x13], // 0x4BD
    }
    #[repr(C)]
    pub struct CHitboxComponent {
        pub pad_0: [u8; 0x14], // 0x0
        pub m_flBoundsExpandRadius: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct CRopeKeyframe {
        pub pad_0: [u8; 0x858], // 0x0
        pub m_RopeFlags: [u8; 0x8], // 0x858
        pub m_iNextLinkName: [u8; 0x8], // 0x860
        pub m_Slack: [u8; 0x4], // 0x868
        pub m_Width: [u8; 0x4], // 0x86C
        pub m_TextureScale: [u8; 0x4], // 0x870
        pub m_nSegments: [u8; 0x1], // 0x874
        pub m_bConstrainBetweenEndpoints: [u8; 0x3], // 0x875
        pub m_strRopeMaterialModel: [u8; 0x8], // 0x878
        pub m_iRopeMaterialModelIndex: [u8; 0x8], // 0x880
        pub m_Subdiv: [u8; 0x1], // 0x888
        pub m_nChangeCount: [u8; 0x1], // 0x889
        pub m_RopeLength: [u8; 0x2], // 0x88A
        pub m_fLockedPoints: [u8; 0x1], // 0x88C
        pub m_bCreatedFromMapFile: [u8; 0x3], // 0x88D
        pub m_flScrollSpeed: [u8; 0x4], // 0x890
        pub m_bStartPointValid: [u8; 0x1], // 0x894
        pub m_bEndPointValid: [u8; 0x3], // 0x895
        pub m_hStartPoint: [u8; 0x4], // 0x898
        pub m_hEndPoint: [u8; 0x4], // 0x89C
        pub m_iStartAttachment: [u8; 0x1], // 0x8A0
        pub m_iEndAttachment: [u8; 0x7], // 0x8A1
    }
    #[repr(C)]
    pub struct CSmokeGrenade {
        pub pad_0: [u8; 0x12D0], // 0x0
    }
    #[repr(C)]
    pub struct CBaseCombatCharacter {
        pub pad_0: [u8; 0xA40], // 0x0
        pub m_bForceServerRagdoll: [u8; 0x8], // 0xA40
        pub m_hMyWearables: [u8; 0x18], // 0xA48
        pub m_impactEnergyScale: [u8; 0x4], // 0xA60
        pub m_bApplyStressDamage: [u8; 0x1], // 0xA64
        pub m_bDeathEventsDispatched: [u8; 0x43], // 0xA65
        pub m_vecRelationships: [u8; 0x18], // 0xAA8
        pub m_strRelationships: [u8; 0x8], // 0xAC0
        pub m_eHull: [u8; 0x4], // 0xAC8
        pub m_nNavHullIdx: [u8; 0x4], // 0xACC
        pub m_movementStats: [u8; 0x40], // 0xAD0
    }
    #[repr(C)]
    pub struct CLogicGameStateReport {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_bDisabled: [u8; 0xC8], // 0x4A8
    }
    #[repr(C)]
    pub struct ServerAuthoritativeWeaponSlot_t {
        pub pad_0: [u8; 0x30], // 0x0
        pub unClass: [u8; 0x2], // 0x30
        pub unSlot: [u8; 0x2], // 0x32
        pub unItemDefIdx: [u8; 0x4], // 0x34
    }
    #[repr(C)]
    pub struct CPathQueryComponent {
        pub pad_0: [u8; 0xA0], // 0x0
    }
    #[repr(C)]
    pub struct CLogicRelay {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_OnSpawn: [u8; 0x18], // 0x4A8
        pub m_OnTrigger: [u8; 0x18], // 0x4C0
        pub m_bDisabled: [u8; 0x1], // 0x4D8
        pub m_bWaitForRefire: [u8; 0x1], // 0x4D9
        pub m_bTriggerOnce: [u8; 0x1], // 0x4DA
        pub m_bFastRetrigger: [u8; 0x1], // 0x4DB
        pub m_bPassthoughCaller: [u8; 0x4], // 0x4DC
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
    pub struct CTestPulseIO {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_OnVariantVoid: [u8; 0x18], // 0x4A8
        pub m_OnVariantBool: [u8; 0x20], // 0x4C0
        pub m_OnVariantInt: [u8; 0x20], // 0x4E0
        pub m_OnVariantFloat: [u8; 0x20], // 0x500
        pub m_OnVariantString: [u8; 0x20], // 0x520
        pub m_OnVariantColor: [u8; 0x20], // 0x540
        pub m_OnVariantVector: [u8; 0x28], // 0x560
        pub m_bAllowEmptyInputs: [u8; 0x8], // 0x588
        pub m_TestComponent: [u8; 0x30], // 0x590
        pub m_OnInternalTestVoid: [u8; 0x18], // 0x5C0
        pub m_OnInternalTestBool: [u8; 0x20], // 0x5D8
        pub m_OnInternalTestInt: [u8; 0x20], // 0x5F8
        pub m_OnInternalTestFloat: [u8; 0x20], // 0x618
        pub m_OnInternalTestString: [u8; 0x20], // 0x638
        pub m_OnInternalTestColor: [u8; 0x20], // 0x658
        pub m_OnInternalTestVector: [u8; 0x28], // 0x678
        pub m_OnInternalTestEntityName: [u8; 0x20], // 0x6A0
        pub m_OnInternalTestEntityHandle: [u8; 0x20], // 0x6C0
        pub m_OnInternalTestSchemaEnum: [u8; 0x20], // 0x6E0
        pub m_OnInternalTestFloatString: [u8; 0x28], // 0x700
        pub m_OnInternalTestEntityNameString: [u8; 0x28], // 0x728
        pub m_OnInternalTestEntityHandleInt: [u8; 0x20], // 0x750
        pub m_OnInternalTestStringStringString: [u8; 0x30], // 0x770
    }
    #[repr(C)]
    pub struct CWeaponUMP45 {
        pub pad_0: [u8; 0x12A0], // 0x0
    }
    #[repr(C)]
    pub struct CGamePlayerEquip {
        pub pad_0: [u8; 0x878], // 0x0
    }
    #[repr(C)]
    pub struct CPointEntityFinder {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_hEntity: [u8; 0x8], // 0x4A8
        pub m_iFilterName: [u8; 0x8], // 0x4B0
        pub m_hFilter: [u8; 0x8], // 0x4B8
        pub m_iRefName: [u8; 0x8], // 0x4C0
        pub m_hReference: [u8; 0x4], // 0x4C8
        pub m_FindMethod: [u8; 0x4], // 0x4CC
        pub m_OnFoundEntity: [u8; 0x18], // 0x4D0
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
    pub struct CKnife {
        pub pad_0: [u8; 0x1280], // 0x0
        pub m_bFirstAttack: [u8; 0x10], // 0x1280
    }
    #[repr(C)]
    pub struct CCSGO_TeamIntroCharacterPosition {
        pub pad_0: [u8; 0x1468], // 0x0
    }
    #[repr(C)]
    pub struct CHostageRescueZoneShim {
        pub pad_0: [u8; 0x9C8], // 0x0
    }
    #[repr(C)]
    pub struct CSimpleMarkupVolumeTagged {
        pub pad_0: [u8; 0x890], // 0x0
    }
    #[repr(C)]
    pub struct CEnvSoundscapeAlias_snd_soundscape {
        pub pad_0: [u8; 0x538], // 0x0
    }
    #[repr(C)]
    pub struct CCSPlayer_HostageServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_hCarriedHostage: [u8; 0x4], // 0x48
        pub m_hCarriedHostageProp: [u8; 0x4], // 0x4C
    }
    #[repr(C)]
    pub struct CRenderComponent {
        pub pad_0: [u8; 0x10], // 0x0
        pub __m_pChainEntity: [u8; 0x40], // 0x10
        pub m_bIsRenderingWithViewModels: [u8; 0x4], // 0x50
        pub m_nSplitscreenFlags: [u8; 0x4], // 0x54
        pub m_bEnableRendering: [u8; 0x50], // 0x58
        pub m_bInterpolationReadyToDraw: [u8; 0x8], // 0xA8
    }
    #[repr(C)]
    pub struct CWaterBullet {
        pub pad_0: [u8; 0xA40], // 0x0
    }
    #[repr(C)]
    pub struct CTriggerSoundscape {
        pub pad_0: [u8; 0x9C8], // 0x0
        pub m_hSoundscape: [u8; 0x8], // 0x9C8
        pub m_SoundscapeName: [u8; 0x8], // 0x9D0
        pub m_spectators: [u8; 0x18], // 0x9D8
    }
    #[repr(C)]
    pub struct CPulseCell_Outflow_PlayVOLine__CursorState_t {
        pub m_sceneInstance: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CHostageExpresserShim {
        pub pad_0: [u8; 0xB10], // 0x0
        pub m_pExpresser: [u8; 0x10], // 0xB10
    }
    #[repr(C)]
    pub struct CPointChildModifier {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_bOrphanInsteadOfDeletingChildrenOnRemove: [u8; 0x8], // 0x4A8
    }
    #[repr(C)]
    pub struct CCSPlayerLegacyJump {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_bOldJumpPressed: [u8; 0x4], // 0x10
        pub m_flJumpPressedTime: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct CWeaponHKP2000 {
        pub pad_0: [u8; 0x12A0], // 0x0
    }
    #[repr(C)]
    pub struct CShatterGlassShardPhysics {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_hParentShard: [u8; 0x8], // 0x850
        pub m_ShardDesc: [u8; 0x80], // 0x858
        pub m_nPoolState: [u8; 0x4], // 0x8D8
        pub m_bTouchedByPlayer: [u8; 0x4], // 0x8DC
    }
    #[repr(C)]
    pub struct CPathParticleRope {
        pub pad_0: [u8; 0x4B0], // 0x0
        pub m_bStartActive: [u8; 0x4], // 0x4B0
        pub m_flMaxSimulationTime: [u8; 0x4], // 0x4B4
        pub m_iszEffectName: [u8; 0x8], // 0x4B8
        pub m_PathNodes_Name: [u8; 0x18], // 0x4C0
        pub m_flParticleSpacing: [u8; 0x4], // 0x4D8
        pub m_flSlack: [u8; 0x4], // 0x4DC
        pub m_flRadius: [u8; 0x4], // 0x4E0
        pub m_ColorTint: [u8; 0x4], // 0x4E4
        pub m_nEffectState: [u8; 0x8], // 0x4E8
        pub m_iEffectIndex: [u8; 0x8], // 0x4F0
        pub m_PathNodes_Position: [u8; 0x18], // 0x4F8
        pub m_PathNodes_TangentIn: [u8; 0x18], // 0x510
        pub m_PathNodes_TangentOut: [u8; 0x18], // 0x528
        pub m_PathNodes_Color: [u8; 0x18], // 0x540
        pub m_PathNodes_PinEnabled: [u8; 0x18], // 0x558
        pub m_PathNodes_RadiusScale: [u8; 0x20], // 0x570
    }
    #[repr(C)]
    pub struct CCredits {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_OnCreditsDone: [u8; 0x18], // 0x4A8
        pub m_bRolledOutroCredits: [u8; 0x4], // 0x4C0
        pub m_flLogoLength: [u8; 0x4], // 0x4C4
    }
    #[repr(C)]
    pub struct CWeaponFiveSeven {
        pub pad_0: [u8; 0x12A0], // 0x0
    }
    #[repr(C)]
    pub struct CFishPool {
        pub pad_0: [u8; 0x4B8], // 0x0
        pub m_fishCount: [u8; 0x4], // 0x4B8
        pub m_maxRange: [u8; 0x4], // 0x4BC
        pub m_swimDepth: [u8; 0x4], // 0x4C0
        pub m_waterLevel: [u8; 0x4], // 0x4C4
        pub m_isDormant: [u8; 0x8], // 0x4C8
        pub m_fishes: [u8; 0x18], // 0x4D0
        pub m_visTimer: [u8; 0x18], // 0x4E8
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
    pub struct CRagdollPropAlias_physics_prop_ragdoll {
        pub pad_0: [u8; 0xC00], // 0x0
    }
    #[repr(C)]
    pub struct CBreakableProp {
        pub pad_0: [u8; 0xA78], // 0x0
        pub m_CPropDataComponent: [u8; 0x40], // 0xA78
        pub m_OnStartDeath: [u8; 0x18], // 0xAB8
        pub m_OnBreak: [u8; 0x18], // 0xAD0
        pub m_OnHealthChanged: [u8; 0x20], // 0xAE8
        pub m_OnTakeDamage: [u8; 0x18], // 0xB08
        pub m_impactEnergyScale: [u8; 0x4], // 0xB20
        pub m_iMinHealthDmg: [u8; 0x4], // 0xB24
        pub m_preferredCarryAngles: [u8; 0xC], // 0xB28
        pub m_flPressureDelay: [u8; 0x4], // 0xB34
        pub m_flDefBurstScale: [u8; 0x4], // 0xB38
        pub m_vDefBurstOffset: [u8; 0xC], // 0xB3C
        pub m_hBreaker: [u8; 0x4], // 0xB48
        pub m_PerformanceMode: [u8; 0x4], // 0xB4C
        pub m_flPreventDamageBeforeTime: [u8; 0x4], // 0xB50
        pub m_BreakableContentsType: [u8; 0x4], // 0xB54
        pub m_strBreakableContentsPropGroupOverride: [u8; 0x8], // 0xB58
        pub m_strBreakableContentsParticleOverride: [u8; 0x8], // 0xB60
        pub m_bHasBreakPiecesOrCommands: [u8; 0x4], // 0xB68
        pub m_explodeDamage: [u8; 0x4], // 0xB6C
        pub m_explodeRadius: [u8; 0x8], // 0xB70
        pub m_sExplosionType: [u8; 0x8], // 0xB78
        pub m_explosionDelay: [u8; 0x8], // 0xB80
        pub m_explosionBuildupSound: [u8; 0x8], // 0xB88
        pub m_explosionCustomEffect: [u8; 0x8], // 0xB90
        pub m_explosionCustomSound: [u8; 0x8], // 0xB98
        pub m_explosionModifier: [u8; 0x8], // 0xBA0
        pub m_hPhysicsAttacker: [u8; 0x4], // 0xBA8
        pub m_flLastPhysicsInfluenceTime: [u8; 0x4], // 0xBAC
        pub m_flDefaultFadeScale: [u8; 0x4], // 0xBB0
        pub m_hLastAttacker: [u8; 0x4], // 0xBB4
        pub m_iszPuntSound: [u8; 0x8], // 0xBB8
        pub m_bUsePuntSound: [u8; 0x1], // 0xBC0
        pub m_bOriginalBlockLOS: [u8; 0xF], // 0xBC1
    }
    #[repr(C)]
    pub struct CLightEntity {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_CLightComponent: [u8; 0x8], // 0x850
    }
    #[repr(C)]
    pub struct CInfoDynamicShadowHintBox {
        pub pad_0: [u8; 0x4C0], // 0x0
        pub m_vBoxMins: [u8; 0xC], // 0x4C0
        pub m_vBoxMaxs: [u8; 0xC], // 0x4CC
    }
    #[repr(C)]
    pub struct CBaseAnimGraphController {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_nAnimationAlgorithm: [u8; 0x4], // 0x18
        pub m_nNextExternalGraphHandle: [u8; 0x4], // 0x1C
        pub m_vecSecondarySkeletonSlotIDs: [u8; 0x18], // 0x20
        pub m_vecSecondarySkeletons: [u8; 0x18], // 0x38
        pub m_nSecondarySkeletonMasterCount: [u8; 0x4], // 0x50
        pub m_flSoundSyncTime: [u8; 0x4], // 0x54
        pub m_nActiveIKChainMask: [u8; 0x4], // 0x58
        pub m_hSequence: [u8; 0x4], // 0x5C
        pub m_flSeqStartTime: [u8; 0x4], // 0x60
        pub m_flSeqFixedCycle: [u8; 0x4], // 0x64
        pub m_nAnimLoopMode: [u8; 0x4], // 0x68
        pub m_flPlaybackRate: [u8; 0xC], // 0x6C
        pub m_nNotifyState: [u8; 0x1], // 0x78
        pub m_bNetworkedAnimationInputsChanged: [u8; 0x1], // 0x79
        pub m_bNetworkedSequenceChanged: [u8; 0x1], // 0x7A
        pub m_bLastUpdateSkipped: [u8; 0x1], // 0x7B
        pub m_bSequenceFinished: [u8; 0x4], // 0x7C
        pub m_nPrevAnimUpdateTick: [u8; 0x2A0], // 0x80
        pub m_hGraphDefinitionAG2: [u8; 0x8], // 0x320
        pub m_SerializePoseRecipeAG2Slots: [u8; 0x68], // 0x328
        pub m_SerializePoseRecipeAG2Dynamic: [u8; 0x18], // 0x390
        pub m_nSerializePoseRecipeAG2ActiveSlot: [u8; 0x4], // 0x3A8
        pub m_nSerializePoseRecipeVersionAG2: [u8; 0x14], // 0x3AC
        pub m_nServerGraphInstanceIteration: [u8; 0x4], // 0x3C0
        pub m_nServerSerializationContextIteration: [u8; 0x4], // 0x3C4
        pub m_primaryGraphId: [u8; 0x8], // 0x3C8
        pub m_vecExternalGraphIds: [u8; 0x18], // 0x3D0
        pub m_vecExternalClipIds: [u8; 0x18], // 0x3E8
        pub m_sAnimGraph2Identifier: [u8; 0x8], // 0x400
        pub m_pGraphInstanceAG2: [u8; 0x220], // 0x408
        pub m_vecExternalGraphs: [u8; 0x28], // 0x628
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
    pub struct COrnamentProp {
        pub pad_0: [u8; 0xC90], // 0x0
        pub m_initialOwner: [u8; 0x10], // 0xC90
    }
    #[repr(C)]
    pub struct CCSPlayer_CameraServices {
        pub pad_0: [u8; 0x1B0], // 0x0
    }
    #[repr(C)]
    pub struct CModelPointEntity {
        pub pad_0: [u8; 0x850], // 0x0
    }
    #[repr(C)]
    pub struct CRectLight {
        pub pad_0: [u8; 0xB38], // 0x0
        pub m_bShowLight: [u8; 0x8], // 0xB38
    }
    #[repr(C)]
    pub struct CFilterMultiple {
        pub pad_0: [u8; 0x4E0], // 0x0
        pub m_nFilterType: [u8; 0x8], // 0x4E0
        pub m_iFilterName: [u8; 0x50], // 0x4E8
        pub m_hFilter: [u8; 0x28], // 0x538
    }
    #[repr(C)]
    pub struct CCSPlayerResource {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_bHostageAlive: [u8; 0xC], // 0x4A8
        pub m_isHostageFollowingSomeone: [u8; 0xC], // 0x4B4
        pub m_iHostageEntityIDs: [u8; 0x30], // 0x4C0
        pub m_bombsiteCenterA: [u8; 0xC], // 0x4F0
        pub m_bombsiteCenterB: [u8; 0xC], // 0x4FC
        pub m_hostageRescueX: [u8; 0x10], // 0x508
        pub m_hostageRescueY: [u8; 0x10], // 0x518
        pub m_hostageRescueZ: [u8; 0x10], // 0x528
        pub m_bEndMatchNextMapAllVoted: [u8; 0x1], // 0x538
        pub m_foundGoalPositions: [u8; 0x7], // 0x539
    }
    #[repr(C)]
    pub struct CPulseCell_FireCursors {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_Outflows: [u8; 0x18], // 0xD8
        pub m_bWaitForChildOutflows: [u8; 0x8], // 0xF0
        pub m_OnFinished: [u8; 0x48], // 0xF8
    }
    #[repr(C)]
    pub struct CFuncNavBlocker {
        pub pad_0: [u8; 0x858], // 0x0
        pub m_bDisabled: [u8; 0x4], // 0x858
        pub m_nBlockedTeamNumber: [u8; 0xC], // 0x85C
    }
    #[repr(C)]
    pub struct CMoverPathNode {
        pub pad_0: [u8; 0x500], // 0x0
        pub m_OnStartFromOrInSegment: [u8; 0x20], // 0x500
        pub m_OnStoppedAtOrInSegment: [u8; 0x20], // 0x520
        pub m_OnPassThrough: [u8; 0x20], // 0x540
        pub m_OnPassThroughForward: [u8; 0x20], // 0x560
        pub m_OnPassThroughReverse: [u8; 0x20], // 0x580
    }
    #[repr(C)]
    pub struct CEnvSoundscape {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_OnPlay: [u8; 0x18], // 0x4A8
        pub m_flRadius: [u8; 0x8], // 0x4C0
        pub m_soundEventName: [u8; 0x8], // 0x4C8
        pub m_bOverrideWithEvent: [u8; 0x4], // 0x4D0
        pub m_soundscapeIndex: [u8; 0x4], // 0x4D4
        pub m_soundscapeEntityListId: [u8; 0x8], // 0x4D8
        pub m_positionNames: [u8; 0x40], // 0x4E0
        pub m_hProxySoundscape: [u8; 0x4], // 0x520
        pub m_bDisabled: [u8; 0x4], // 0x524
        pub m_soundscapeName: [u8; 0x8], // 0x528
        pub m_soundEventHash: [u8; 0x8], // 0x530
    }
    #[repr(C)]
    pub struct CFuncBrush {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_iSolidity: [u8; 0x4], // 0x850
        pub m_iDisabled: [u8; 0x4], // 0x854
        pub m_bSolidBsp: [u8; 0x8], // 0x858
        pub m_iszExcludedClass: [u8; 0x8], // 0x860
        pub m_bInvertExclusion: [u8; 0x1], // 0x868
        pub m_bScriptedMovement: [u8; 0x7], // 0x869
    }
    #[repr(C)]
    pub struct CBodyComponentPoint {
        pub pad_0: [u8; 0x80], // 0x0
        pub m_sceneNode: [u8; 0x110], // 0x80
    }
    #[repr(C)]
    pub struct CPhysBox {
        pub pad_0: [u8; 0x928], // 0x0
        pub m_damageType: [u8; 0x4], // 0x928
        pub m_damageToEnableMotion: [u8; 0x4], // 0x92C
        pub m_flForceToEnableMotion: [u8; 0x4], // 0x930
        pub m_vHoverPosePosition: [u8; 0xC], // 0x934
        pub m_angHoverPoseAngles: [u8; 0xC], // 0x940
        pub m_bNotSolidToWorld: [u8; 0x1], // 0x94C
        pub m_bEnableUseOutput: [u8; 0x1], // 0x94D
        pub m_nHoverPoseFlags: [u8; 0x2], // 0x94E
        pub m_flTouchOutputPerEntityDelay: [u8; 0x8], // 0x950
        pub m_iszCollisionGroup: [u8; 0x8], // 0x958
        pub m_iszInteractsAs: [u8; 0x8], // 0x960
        pub m_iszInteractsWith: [u8; 0x8], // 0x968
        pub m_iszInteractsExclude: [u8; 0x8], // 0x970
        pub m_OnDamaged: [u8; 0x18], // 0x978
        pub m_OnAwakened: [u8; 0x18], // 0x990
        pub m_OnMotionEnabled: [u8; 0x18], // 0x9A8
        pub m_OnPlayerUse: [u8; 0x18], // 0x9C0
        pub m_OnStartTouch: [u8; 0x30], // 0x9D8
    }
    #[repr(C)]
    pub struct CSoundEventAABBEntity {
        pub pad_0: [u8; 0x568], // 0x0
        pub m_vMins: [u8; 0xC], // 0x568
        pub m_vMaxs: [u8; 0xC], // 0x574
    }
    #[repr(C)]
    pub struct CItemSoda {
        pub pad_0: [u8; 0xA40], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_ApplyDynamicAttributeBase {
        pub pad_0: [u8; 0xD8], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_Timeline__TimelineEvent_t {
        pub m_flTimeFromPrevious: [u8; 0x8], // 0x0
        pub m_EventOutflow: [u8; 0x48], // 0x8
    }
    #[repr(C)]
    pub struct COmniLight {
        pub pad_0: [u8; 0xB38], // 0x0
        pub m_flInnerAngle: [u8; 0x4], // 0xB38
        pub m_flOuterAngle: [u8; 0x4], // 0xB3C
        pub m_bShowLight: [u8; 0x8], // 0xB40
    }
    #[repr(C)]
    pub struct CTriggerVolume {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_iFilterName: [u8; 0x8], // 0x850
        pub m_hFilter: [u8; 0x8], // 0x858
    }
    #[repr(C)]
    pub struct CBtNodeCondition {
        pub pad_0: [u8; 0x58], // 0x0
        pub m_bNegated: [u8; 0x8], // 0x58
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
    pub struct CEnvExplosion {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_iMagnitude: [u8; 0x4], // 0x850
        pub m_flPlayerDamage: [u8; 0x4], // 0x854
        pub m_iRadiusOverride: [u8; 0x4], // 0x858
        pub m_flInnerRadius: [u8; 0x4], // 0x85C
        pub m_flDamageForce: [u8; 0x4], // 0x860
        pub m_hInflictor: [u8; 0x4], // 0x864
        pub m_iCustomDamageType: [u8; 0x4], // 0x868
        pub m_bHasCustomDamageType: [u8; 0x1], // 0x86C
        pub m_bCreateDebris: [u8; 0xB], // 0x86D
        pub m_iszCustomEffectName: [u8; 0x8], // 0x878
        pub m_iszCustomSoundName: [u8; 0x8], // 0x880
        pub m_bSuppressParticleImpulse: [u8; 0x4], // 0x888
        pub m_iClassIgnore: [u8; 0x4], // 0x88C
        pub m_iClassIgnore2: [u8; 0x8], // 0x890
        pub m_iszEntityIgnoreName: [u8; 0x8], // 0x898
        pub m_hEntityIgnore: [u8; 0x8], // 0x8A0
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
    pub struct CTestPulseIO__ThreeStringArgs_t {
        pub strArg1: [u8; 0x8], // 0x0
        pub strArg2: [u8; 0x8], // 0x8
        pub strArg3: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CPulseCell_IsRequirementValid {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CFootstepControl {
        pub pad_0: [u8; 0x9C8], // 0x0
        pub m_source: [u8; 0x8], // 0x9C8
        pub m_destination: [u8; 0x8], // 0x9D0
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
    pub struct CParticleSystem {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_szSnapshotFileName: [u8; 0x200], // 0x850
        pub m_bActive: [u8; 0x1], // 0xA50
        pub m_bFrozen: [u8; 0x3], // 0xA51
        pub m_flFreezeTransitionDuration: [u8; 0x4], // 0xA54
        pub m_nStopType: [u8; 0x4], // 0xA58
        pub m_bAnimateDuringGameplayPause: [u8; 0x4], // 0xA5C
        pub m_iEffectIndex: [u8; 0x8], // 0xA60
        pub m_flStartTime: [u8; 0x4], // 0xA68
        pub m_flPreSimTime: [u8; 0x4], // 0xA6C
        pub m_vServerControlPoints: [u8; 0x30], // 0xA70
        pub m_iServerControlPointAssignments: [u8; 0x4], // 0xAA0
        pub m_hControlPointEnts: [u8; 0x100], // 0xAA4
        pub m_bDataStringLocalized: [u8; 0x4], // 0xBA4
        pub m_strDataString: [u8; 0x8], // 0xBA8
        pub m_bNoSave: [u8; 0x1], // 0xBB0
        pub m_bNoFreeze: [u8; 0x1], // 0xBB1
        pub m_bNoRamp: [u8; 0x1], // 0xBB2
        pub m_bStartActive: [u8; 0x5], // 0xBB3
        pub m_iszEffectName: [u8; 0x8], // 0xBB8
        pub m_iszControlPointNames: [u8; 0x200], // 0xBC0
        pub m_nDataCP: [u8; 0x4], // 0xDC0
        pub m_vecDataCPValue: [u8; 0xC], // 0xDC4
        pub m_nTintCP: [u8; 0x4], // 0xDD0
        pub m_clrTint: [u8; 0x4], // 0xDD4
    }
    #[repr(C)]
    pub struct CTriggerBrush {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_OnStartTouch: [u8; 0x18], // 0x850
        pub m_OnEndTouch: [u8; 0x18], // 0x868
        pub m_OnUse: [u8; 0x18], // 0x880
        pub m_iInputFilter: [u8; 0x4], // 0x898
        pub m_iDontMessageParent: [u8; 0x4], // 0x89C
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
    pub struct CSoundEventMultiPointEntity {
        pub pad_0: [u8; 0x568], // 0x0
        pub m_iCountMax: [u8; 0x4], // 0x568
        pub m_flDistanceMax: [u8; 0x4], // 0x56C
        pub m_flDistMaxSqr: [u8; 0x4], // 0x570
        pub m_flDotProductMax: [u8; 0x4], // 0x574
        pub m_bPlaying: [u8; 0x28], // 0x578
    }
    #[repr(C)]
    pub struct CSoundAreaEntityBase {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_bDisabled: [u8; 0x8], // 0x4A8
        pub m_iszSoundAreaType: [u8; 0x8], // 0x4B0
        pub m_vPos: [u8; 0x10], // 0x4B8
    }
    #[repr(C)]
    pub struct CWeaponM4A1Silencer {
        pub pad_0: [u8; 0x12A0], // 0x0
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
    pub struct CTestPulseIO__FloatStringArgs_t {
        pub flOutFloat: [u8; 0x8], // 0x0
        pub strOutString: [u8; 0x8], // 0x8
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
    pub struct CItemAssaultSuit {
        pub pad_0: [u8; 0xAE0], // 0x0
    }
    #[repr(C)]
    pub struct CBeam {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_flFrameRate: [u8; 0x4], // 0x850
        pub m_flHDRColorScale: [u8; 0x4], // 0x854
        pub m_flFireTime: [u8; 0x4], // 0x858
        pub m_flDamage: [u8; 0x4], // 0x85C
        pub m_nNumBeamEnts: [u8; 0x8], // 0x860
        pub m_hBaseMaterial: [u8; 0x8], // 0x868
        pub m_nHaloIndex: [u8; 0x8], // 0x870
        pub m_nBeamType: [u8; 0x4], // 0x878
        pub m_nBeamFlags: [u8; 0x4], // 0x87C
        pub m_hAttachEntity: [u8; 0x28], // 0x880
        pub m_nAttachIndex: [u8; 0xC], // 0x8A8
        pub m_fWidth: [u8; 0x4], // 0x8B4
        pub m_fEndWidth: [u8; 0x4], // 0x8B8
        pub m_fFadeLength: [u8; 0x4], // 0x8BC
        pub m_fHaloScale: [u8; 0x4], // 0x8C0
        pub m_fAmplitude: [u8; 0x4], // 0x8C4
        pub m_fStartFrame: [u8; 0x4], // 0x8C8
        pub m_fSpeed: [u8; 0x4], // 0x8CC
        pub m_flFrame: [u8; 0x4], // 0x8D0
        pub m_bTurnedOff: [u8; 0x4], // 0x8D4
        pub m_vecEndPos: [u8; 0xC], // 0x8D8
        pub m_hEndEntity: [u8; 0x4], // 0x8E4
        pub m_nDissolveType: [u8; 0x8], // 0x8E8
    }
    #[repr(C)]
    pub struct CLogicEventListener {
        pub pad_0: [u8; 0x4B8], // 0x0
        pub m_strEventName: [u8; 0x8], // 0x4B8
        pub m_bIsEnabled: [u8; 0x4], // 0x4C0
        pub m_nTeam: [u8; 0x4], // 0x4C4
        pub m_OnEventFired: [u8; 0x20], // 0x4C8
    }
    #[repr(C)]
    pub struct CCSGO_TeamSelectTerroristPosition {
        pub pad_0: [u8; 0x1468], // 0x0
    }
    #[repr(C)]
    pub struct CInfoData {
        pub pad_0: [u8; 0x840], // 0x0
    }
    #[repr(C)]
    pub struct CWeaponNegev {
        pub pad_0: [u8; 0x12A0], // 0x0
    }
    #[repr(C)]
    pub struct CWeaponElite {
        pub pad_0: [u8; 0x12A0], // 0x0
    }
    #[repr(C)]
    pub struct CBasePlayerPawn {
        pub pad_0: [u8; 0xB10], // 0x0
        pub m_pWeaponServices: [u8; 0x8], // 0xB10
        pub m_pItemServices: [u8; 0x8], // 0xB18
        pub m_pAutoaimServices: [u8; 0x8], // 0xB20
        pub m_pObserverServices: [u8; 0x8], // 0xB28
        pub m_pWaterServices: [u8; 0x8], // 0xB30
        pub m_pUseServices: [u8; 0x8], // 0xB38
        pub m_pFlashlightServices: [u8; 0x8], // 0xB40
        pub m_pCameraServices: [u8; 0x8], // 0xB48
        pub m_pMovementServices: [u8; 0x10], // 0xB50
        pub m_ServerViewAngleChanges: [u8; 0x68], // 0xB60
        pub v_angle: [u8; 0xC], // 0xBC8
        pub v_anglePrevious: [u8; 0xC], // 0xBD4
        pub m_iHideHUD: [u8; 0x8], // 0xBE0
        pub m_skybox3d: [u8; 0x90], // 0xBE8
        pub m_fTimeLastHurt: [u8; 0x4], // 0xC78
        pub m_flDeathTime: [u8; 0x4], // 0xC7C
        pub m_fNextSuicideTime: [u8; 0x8], // 0xC80
        pub m_fInitHUD: [u8; 0x8], // 0xC88
        pub m_pExpresser: [u8; 0x8], // 0xC90
        pub m_hController: [u8; 0x4], // 0xC98
        pub m_hDefaultController: [u8; 0x8], // 0xC9C
        pub m_fHltvReplayDelay: [u8; 0x4], // 0xCA4
        pub m_fHltvReplayEnd: [u8; 0x4], // 0xCA8
        pub m_iHltvReplayEntity: [u8; 0x4], // 0xCAC
        pub m_sndOpvarLatchData: [u8; 0x20], // 0xCB0
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
        pub pad_0: [u8; 0x4E0], // 0x0
        pub m_bAdrenalineActive: [u8; 0x4], // 0x4E0
        pub m_iHealthMin: [u8; 0x4], // 0x4E4
        pub m_iHealthMax: [u8; 0x8], // 0x4E8
    }
    #[repr(C)]
    pub struct CCSSprite {
        pub pad_0: [u8; 0x8C0], // 0x0
    }
    #[repr(C)]
    pub struct CMathColorBlend {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_flInMin: [u8; 0x4], // 0x4A8
        pub m_flInMax: [u8; 0x4], // 0x4AC
        pub m_OutColor1: [u8; 0x4], // 0x4B0
        pub m_OutColor2: [u8; 0x4], // 0x4B4
        pub m_OutValue: [u8; 0x20], // 0x4B8
    }
    #[repr(C)]
    pub struct CShower {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_flSpeed: [u8; 0x8], // 0x850
    }
    #[repr(C)]
    pub struct CPulseCell_Inflow_GraphHook {
        pub pad_0: [u8; 0x80], // 0x0
        pub m_HookName: [u8; 0x10], // 0x80
    }
    #[repr(C)]
    pub struct CScriptNavBlocker {
        pub pad_0: [u8; 0x868], // 0x0
        pub m_vExtent: [u8; 0x10], // 0x868
    }
    #[repr(C)]
    pub struct CEntityBlocker {
        pub pad_0: [u8; 0x850], // 0x0
    }
    #[repr(C)]
    pub struct SignatureOutflow_Resume {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CSoundOpvarSetDomeEntity {
        pub pad_0: [u8; 0x640], // 0x0
        pub m_arDirections: [u8; 0x18], // 0x640
        pub m_arOpenness: [u8; 0x18], // 0x658
        pub m_arNeighbors: [u8; 0x18], // 0x670
        pub m_nCurrentIndex: [u8; 0x8], // 0x688
        pub m_arClusterParent: [u8; 0x18], // 0x690
        pub m_arClusterSize: [u8; 0x18], // 0x6A8
        pub m_arClusterWeight: [u8; 0x18], // 0x6C0
        pub m_arClusterDirSum: [u8; 0x18], // 0x6D8
        pub m_nClusterIndex: [u8; 0x4], // 0x6F0
        pub m_flClusteredOpenness: [u8; 0x4], // 0x6F4
        pub m_vClusterDirection: [u8; 0xC], // 0x6F8
        pub m_vSmoothedOpenDir: [u8; 0xC], // 0x704
        pub m_nDirWarmupThinksRemaining: [u8; 0x4], // 0x710
        pub m_vLastTraceOrigin: [u8; 0xC], // 0x714
        pub m_bTraceOriginValid: [u8; 0x4], // 0x720
        pub m_nCatchUpThinksRemaining: [u8; 0x4], // 0x724
        pub m_bDiscontinuityPending: [u8; 0x4], // 0x728
        pub m_flSmoothedOpenness: [u8; 0x4], // 0x72C
        pub m_flLastSmoothTime: [u8; 0x4], // 0x730
        pub m_flSize: [u8; 0x4], // 0x734
        pub m_nTotalDirections: [u8; 0x4], // 0x738
        pub m_nTracesPerFrame: [u8; 0x4], // 0x73C
        pub m_bDomeMode: [u8; 0x1], // 0x740
        pub m_bMultiWall: [u8; 0x3], // 0x741
        pub m_flWallTransmission: [u8; 0x4], // 0x744
        pub m_nClusterK: [u8; 0x4], // 0x748
        pub m_flClusterP: [u8; 0x4], // 0x74C
        pub m_flClusterBlend: [u8; 0x4], // 0x750
        pub m_flOpennessExponent: [u8; 0x4], // 0x754
        pub m_flShoulderExponent: [u8; 0x4], // 0x758
        pub m_flSmoothHalfLife: [u8; 0x4], // 0x75C
    }
    #[repr(C)]
    pub struct CPulseCell_Outflow_PlayVCDBase {
        pub pad_0: [u8; 0x138], // 0x0
    }
    #[repr(C)]
    pub struct CCSObserverPawn {
        pub pad_0: [u8; 0xE50], // 0x0
    }
    #[repr(C)]
    pub struct CTriggerActiveWeaponDetect {
        pub pad_0: [u8; 0x9C8], // 0x0
        pub m_OnTouchedActiveWeapon: [u8; 0x18], // 0x9C8
        pub m_iszWeaponClassName: [u8; 0x8], // 0x9E0
    }
    #[repr(C)]
    pub struct CFuncLadderAlias_func_useableladder {
        pub pad_0: [u8; 0x8E0], // 0x0
    }
    #[repr(C)]
    pub struct CSpriteOriented {
        pub pad_0: [u8; 0x8C0], // 0x0
    }
    #[repr(C)]
    pub struct CPointServerCommand {
        pub pad_0: [u8; 0x4A8], // 0x0
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
    pub struct CPlayerSprayDecal {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_nUniqueID: [u8; 0x4], // 0x850
        pub m_unAccountID: [u8; 0x4], // 0x854
        pub m_unTraceID: [u8; 0x4], // 0x858
        pub m_rtGcTime: [u8; 0x4], // 0x85C
        pub m_vecEndPos: [u8; 0xC], // 0x860
        pub m_vecStart: [u8; 0xC], // 0x86C
        pub m_vecLeft: [u8; 0xC], // 0x878
        pub m_vecNormal: [u8; 0xC], // 0x884
        pub m_nPlayer: [u8; 0x4], // 0x890
        pub m_nEntity: [u8; 0x4], // 0x894
        pub m_nHitbox: [u8; 0x4], // 0x898
        pub m_flCreationTime: [u8; 0x4], // 0x89C
        pub m_nTintID: [u8; 0x4], // 0x8A0
        pub m_nVersion: [u8; 0x1], // 0x8A4
        pub m_ubSignature: [u8; 0x83], // 0x8A5
    }
    #[repr(C)]
    pub struct CFuncWater {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_BuoyancyHelper: [u8; 0x118], // 0x850
    }
    #[repr(C)]
    pub struct CCSGameModeRules {
        pub pad_0: [u8; 0x8], // 0x0
        pub __m_pChainEntity: [u8; 0x28], // 0x8
    }
    #[repr(C)]
    pub struct CPulseCell_Outflow_PlayVCD__VCDRequirementInfo_t {
        pub m_nEventID: [u8; 0x8], // 0x0
        pub m_Outflow: [u8; 0x48], // 0x8
    }
    #[repr(C)]
    pub struct CPulseCell_ApplyDynamicAttributeInt {
        pub pad_0: [u8; 0xD8], // 0x0
    }
    #[repr(C)]
    pub struct CEconEntity {
        pub pad_0: [u8; 0xA58], // 0x0
        pub m_AttributeManager: [u8; 0x438], // 0xA58
        pub m_OriginalOwnerXuidLow: [u8; 0x4], // 0xE90
        pub m_OriginalOwnerXuidHigh: [u8; 0x4], // 0xE94
        pub m_nFallbackPaintKit: [u8; 0x4], // 0xE98
        pub m_nFallbackSeed: [u8; 0x4], // 0xE9C
        pub m_flFallbackWear: [u8; 0x4], // 0xEA0
        pub m_nFallbackStatTrak: [u8; 0x4], // 0xEA4
        pub m_hOldProvidee: [u8; 0x4], // 0xEA8
        pub m_iOldOwnerClass: [u8; 0x4], // 0xEAC
    }
    #[repr(C)]
    pub struct CTankTargetChange {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_newTarget: [u8; 0x10], // 0x4A8
        pub m_newTargetName: [u8; 0x8], // 0x4B8
    }
    #[repr(C)]
    pub struct CCSPlayer_WaterServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_NextDrownDamageTime: [u8; 0x4], // 0x48
        pub m_nDrownDmgRate: [u8; 0x4], // 0x4C
        pub m_AirFinishedTime: [u8; 0x4], // 0x50
        pub m_flWaterJumpTime: [u8; 0x4], // 0x54
        pub m_vecWaterJumpVel: [u8; 0xC], // 0x58
        pub m_flSwimSoundTime: [u8; 0x1C], // 0x64
    }
    #[repr(C)]
    pub struct CLogicDistanceCheck {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_iszEntityA: [u8; 0x8], // 0x4A8
        pub m_iszEntityB: [u8; 0x8], // 0x4B0
        pub m_flZone1Distance: [u8; 0x4], // 0x4B8
        pub m_flZone2Distance: [u8; 0x4], // 0x4BC
        pub m_InZone1: [u8; 0x18], // 0x4C0
        pub m_InZone2: [u8; 0x18], // 0x4D8
        pub m_InZone3: [u8; 0x18], // 0x4F0
    }
    #[repr(C)]
    pub struct CEnvCombinedLightProbeVolume {
        pub pad_0: [u8; 0x5C0], // 0x0
        pub m_Entity_Color: [u8; 0x4], // 0x5C0
        pub m_Entity_flBrightness: [u8; 0x4], // 0x5C4
        pub m_Entity_hCubemapTexture: [u8; 0x8], // 0x5C8
        pub m_Entity_bCustomCubemapTexture: [u8; 0x8], // 0x5D0
        pub m_Entity_hLightProbeTexture_AmbientCube: [u8; 0x8], // 0x5D8
        pub m_Entity_hLightProbeTexture_SDF: [u8; 0x8], // 0x5E0
        pub m_Entity_hLightProbeTexture_SH2_DC: [u8; 0x8], // 0x5E8
        pub m_Entity_hLightProbeTexture_SH2_L1: [u8; 0x8], // 0x5F0
        pub m_Entity_hLightProbeDirectLightIndicesTexture: [u8; 0x8], // 0x5F8
        pub m_Entity_hLightProbeDirectLightScalarsTexture: [u8; 0x8], // 0x600
        pub m_Entity_hLightProbeDirectLightShadowsTexture: [u8; 0x8], // 0x608
        pub m_Entity_vBoxMins: [u8; 0xC], // 0x610
        pub m_Entity_vBoxMaxs: [u8; 0xC], // 0x61C
        pub m_Entity_bMoveable: [u8; 0x4], // 0x628
        pub m_Entity_nHandshake: [u8; 0x4], // 0x62C
        pub m_Entity_nEnvCubeMapArrayIndex: [u8; 0x4], // 0x630
        pub m_Entity_nPriority: [u8; 0x4], // 0x634
        pub m_Entity_bStartDisabled: [u8; 0x4], // 0x638
        pub m_Entity_flEdgeFadeDist: [u8; 0x4], // 0x63C
        pub m_Entity_vEdgeFadeDists: [u8; 0xC], // 0x640
        pub m_Entity_nLightProbeSizeX: [u8; 0x4], // 0x64C
        pub m_Entity_nLightProbeSizeY: [u8; 0x4], // 0x650
        pub m_Entity_nLightProbeSizeZ: [u8; 0x4], // 0x654
        pub m_Entity_nLightProbeAtlasX: [u8; 0x4], // 0x658
        pub m_Entity_nLightProbeAtlasY: [u8; 0x4], // 0x65C
        pub m_Entity_nLightProbeAtlasZ: [u8; 0x19], // 0x660
        pub m_Entity_bEnabled: [u8; 0x7], // 0x679
    }
    #[repr(C)]
    pub struct ViewAngleServerChange_t {
        pub pad_0: [u8; 0x30], // 0x0
        pub nType: [u8; 0x4], // 0x30
        pub qAngle: [u8; 0xC], // 0x34
        pub nIndex: [u8; 0x8], // 0x40
    }
    #[repr(C)]
    pub struct CLogicDistanceAutosave {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_iszTargetEntity: [u8; 0x8], // 0x4A8
        pub m_flDistanceToPlayer: [u8; 0x4], // 0x4B0
        pub m_bForceNewLevelUnit: [u8; 0x1], // 0x4B4
        pub m_bCheckCough: [u8; 0x1], // 0x4B5
        pub m_bThinkDangerous: [u8; 0x2], // 0x4B6
        pub m_flDangerousTime: [u8; 0x8], // 0x4B8
    }
    #[repr(C)]
    pub struct CLogicBranch {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_bInValue: [u8; 0x8], // 0x4A8
        pub m_Listeners: [u8; 0x18], // 0x4B0
        pub m_OnTrue: [u8; 0x18], // 0x4C8
        pub m_OnFalse: [u8; 0x18], // 0x4E0
    }
    #[repr(C)]
    pub struct CPulseCell_Outflow_ScriptedSequence {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_szSyncGroup: [u8; 0x8], // 0xD8
        pub m_nExpectedNumSequencesInSyncGroup: [u8; 0x4], // 0xE0
        pub m_bEnsureOnNavmeshOnFinish: [u8; 0x1], // 0xE4
        pub m_bDontTeleportAtEnd: [u8; 0x1], // 0xE5
        pub m_bDisallowInterrupts: [u8; 0x2], // 0xE6
        pub m_scriptedSequenceDataMain: [u8; 0x38], // 0xE8
        pub m_vecAdditionalActors: [u8; 0x18], // 0x120
        pub m_OnFinished: [u8; 0x48], // 0x138
        pub m_Triggers: [u8; 0x18], // 0x180
    }
    #[repr(C)]
    pub struct CFuncTrackChange {
        pub pad_0: [u8; 0x920], // 0x0
        pub m_trackTop: [u8; 0x4], // 0x920
        pub m_trackBottom: [u8; 0x4], // 0x924
        pub m_train: [u8; 0x8], // 0x928
        pub m_trackTopName: [u8; 0x8], // 0x930
        pub m_trackBottomName: [u8; 0x8], // 0x938
        pub m_trainName: [u8; 0x8], // 0x940
        pub m_code: [u8; 0x4], // 0x948
        pub m_targetState: [u8; 0x4], // 0x94C
        pub m_use: [u8; 0x8], // 0x950
    }
    #[repr(C)]
    pub struct CFuncTrackTrain {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_ppath: [u8; 0x4], // 0x850
        pub m_length: [u8; 0x4], // 0x854
        pub m_vPosPrev: [u8; 0xC], // 0x858
        pub m_angPrev: [u8; 0xC], // 0x864
        pub m_flSpeed: [u8; 0x4], // 0x870
        pub m_controlMins: [u8; 0xC], // 0x874
        pub m_controlMaxs: [u8; 0xC], // 0x880
        pub m_lastBlockPos: [u8; 0xC], // 0x88C
        pub m_lastBlockTick: [u8; 0x4], // 0x898
        pub m_flVolume: [u8; 0x4], // 0x89C
        pub m_flBank: [u8; 0x4], // 0x8A0
        pub m_oldSpeed: [u8; 0x4], // 0x8A4
        pub m_flBlockDamage: [u8; 0x4], // 0x8A8
        pub m_height: [u8; 0x4], // 0x8AC
        pub m_maxSpeed: [u8; 0x4], // 0x8B0
        pub m_dir: [u8; 0x4], // 0x8B4
        pub m_iszSoundMove: [u8; 0x8], // 0x8B8
        pub m_iszSoundMovePing: [u8; 0x8], // 0x8C0
        pub m_iszSoundStart: [u8; 0x8], // 0x8C8
        pub m_iszSoundStop: [u8; 0x8], // 0x8D0
        pub m_strPathTarget: [u8; 0x8], // 0x8D8
        pub m_flMoveSoundMinDuration: [u8; 0x4], // 0x8E0
        pub m_flMoveSoundMaxDuration: [u8; 0x4], // 0x8E4
        pub m_flNextMoveSoundTime: [u8; 0x4], // 0x8E8
        pub m_flMoveSoundMinPitch: [u8; 0x4], // 0x8EC
        pub m_flMoveSoundMaxPitch: [u8; 0x4], // 0x8F0
        pub m_eOrientationType: [u8; 0x4], // 0x8F4
        pub m_eVelocityType: [u8; 0x18], // 0x8F8
        pub m_OnStart: [u8; 0x18], // 0x910
        pub m_OnNext: [u8; 0x18], // 0x928
        pub m_OnArrivedAtDestinationNode: [u8; 0x18], // 0x940
        pub m_bManualSpeedChanges: [u8; 0x4], // 0x958
        pub m_flDesiredSpeed: [u8; 0x4], // 0x95C
        pub m_flSpeedChangeTime: [u8; 0x4], // 0x960
        pub m_flAccelSpeed: [u8; 0x4], // 0x964
        pub m_flDecelSpeed: [u8; 0x4], // 0x968
        pub m_bAccelToSpeed: [u8; 0x4], // 0x96C
        pub m_flNextMPSoundTime: [u8; 0x8], // 0x970
    }
    #[repr(C)]
    pub struct CEnvInstructorHint {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_iszName: [u8; 0x8], // 0x4A8
        pub m_iszReplace_Key: [u8; 0x8], // 0x4B0
        pub m_iszHintTargetEntity: [u8; 0x8], // 0x4B8
        pub m_iTimeout: [u8; 0x4], // 0x4C0
        pub m_iDisplayLimit: [u8; 0x4], // 0x4C4
        pub m_iszIcon_Onscreen: [u8; 0x8], // 0x4C8
        pub m_iszIcon_Offscreen: [u8; 0x8], // 0x4D0
        pub m_iszCaption: [u8; 0x8], // 0x4D8
        pub m_iszActivatorCaption: [u8; 0x8], // 0x4E0
        pub m_Color: [u8; 0x4], // 0x4E8
        pub m_fIconOffset: [u8; 0x4], // 0x4EC
        pub m_fRange: [u8; 0x4], // 0x4F0
        pub m_iPulseOption: [u8; 0x1], // 0x4F4
        pub m_iAlphaOption: [u8; 0x1], // 0x4F5
        pub m_iShakeOption: [u8; 0x1], // 0x4F6
        pub m_bStatic: [u8; 0x1], // 0x4F7
        pub m_bNoOffscreen: [u8; 0x1], // 0x4F8
        pub m_bForceCaption: [u8; 0x3], // 0x4F9
        pub m_iInstanceType: [u8; 0x4], // 0x4FC
        pub m_bSuppressRest: [u8; 0x8], // 0x500
        pub m_iszBinding: [u8; 0x8], // 0x508
        pub m_bAllowNoDrawTarget: [u8; 0x1], // 0x510
        pub m_bAutoStart: [u8; 0x1], // 0x511
        pub m_bLocalPlayerOnly: [u8; 0x6], // 0x512
    }
    #[repr(C)]
    pub struct CEnvWind {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_EnvWindShared: [u8; 0x130], // 0x4A8
    }
    #[repr(C)]
    pub struct CSoundEventPathCornerEntity {
        pub pad_0: [u8; 0x5A0], // 0x0
        pub m_iszPathCorner: [u8; 0x20], // 0x5A0
        pub m_vecCornerPairsNetworked: [u8; 0x60], // 0x5C0
    }
    #[repr(C)]
    pub struct CCSPlayerBase_CameraServices {
        pub pad_0: [u8; 0x178], // 0x0
        pub m_iFOV: [u8; 0x4], // 0x178
        pub m_iFOVStart: [u8; 0x4], // 0x17C
        pub m_flFOVTime: [u8; 0x4], // 0x180
        pub m_flFOVRate: [u8; 0x4], // 0x184
        pub m_hZoomOwner: [u8; 0x8], // 0x188
        pub m_hTriggerFogList: [u8; 0x18], // 0x190
        pub m_hLastFogTrigger: [u8; 0x8], // 0x1A8
    }
    #[repr(C)]
    pub struct CPulseCell_ApplyAnimGraphParam__CursorState_t {
        pub hEntity: [u8; 0x8], // 0x0
        pub sParamName: [u8; 0x8], // 0x8
        pub bApplyToExternalGraphs: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CPulseCell_Inflow_BaseEntrypoint {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_EntryChunk: [u8; 0x8], // 0x48
        pub m_RegisterMap: [u8; 0x30], // 0x50
    }
    #[repr(C)]
    pub struct CDynamicNavConnectionsVolume {
        pub pad_0: [u8; 0x9E0], // 0x0
        pub m_iszConnectionTarget: [u8; 0x8], // 0x9E0
        pub m_vecConnections: [u8; 0x18], // 0x9E8
        pub m_sTransitionType: [u8; 0x8], // 0xA00
        pub m_bConnectionsEnabled: [u8; 0x4], // 0xA08
        pub m_flTargetAreaSearchRadius: [u8; 0x4], // 0xA0C
        pub m_flUpdateDistance: [u8; 0x4], // 0xA10
        pub m_flMaxConnectionDistance: [u8; 0x4], // 0xA14
    }
    #[repr(C)]
    pub struct CConstraintAnchor {
        pub pad_0: [u8; 0xA40], // 0x0
        pub m_massScale: [u8; 0x10], // 0xA40
    }
    #[repr(C)]
    pub struct CPulseCell_WaitForCursorsWithTagBase {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_nCursorsAllowedToWait: [u8; 0x8], // 0xD8
        pub m_WaitComplete: [u8; 0x48], // 0xE0
    }
    #[repr(C)]
    pub struct CCSPlayerPawn {
        pub pad_0: [u8; 0xE30], // 0x0
        pub m_pBulletServices: [u8; 0x8], // 0xE30
        pub m_pHostageServices: [u8; 0x8], // 0xE38
        pub m_pBuyServices: [u8; 0x8], // 0xE40
        pub m_pActionTrackingServices: [u8; 0x8], // 0xE48
        pub m_pAimPunchServices: [u8; 0x8], // 0xE50
        pub m_pRadioServices: [u8; 0x8], // 0xE58
        pub m_pDamageReactServices: [u8; 0x8], // 0xE60
        pub m_nCharacterDefIndex: [u8; 0x2], // 0xE68
        pub m_bHasFemaleVoice: [u8; 0x6], // 0xE6A
        pub m_strVOPrefix: [u8; 0x8], // 0xE70
        pub m_szLastPlaceName: [u8; 0xF8], // 0xE78
        pub m_bInHostageResetZone: [u8; 0x1], // 0xF70
        pub m_bInBuyZone: [u8; 0x7], // 0xF71
        pub m_TouchingBuyZones: [u8; 0x18], // 0xF78
        pub m_bWasInBuyZone: [u8; 0x1], // 0xF90
        pub m_bInHostageRescueZone: [u8; 0x1], // 0xF91
        pub m_bInBombZone: [u8; 0x1], // 0xF92
        pub m_bWasInHostageRescueZone: [u8; 0x1], // 0xF93
        pub m_iRetakesOffering: [u8; 0x4], // 0xF94
        pub m_iRetakesOfferingCard: [u8; 0x4], // 0xF98
        pub m_bRetakesHasDefuseKit: [u8; 0x1], // 0xF9C
        pub m_bRetakesMVPLastRound: [u8; 0x3], // 0xF9D
        pub m_iRetakesMVPBoostItem: [u8; 0x4], // 0xFA0
        pub m_RetakesMVPBoostExtraUtility: [u8; 0x4], // 0xFA4
        pub m_flHealthShotBoostExpirationTime: [u8; 0x4], // 0xFA8
        pub m_flLandingTimeSeconds: [u8; 0x4], // 0xFAC
        pub m_bIsBuyMenuOpen: [u8; 0x38], // 0xFB0
        pub m_lastLandTime: [u8; 0x4], // 0xFE8
        pub m_bOnGroundLastTick: [u8; 0x4], // 0xFEC
        pub m_iPlayerLocked: [u8; 0x8], // 0xFF0
        pub m_flTimeOfLastInjury: [u8; 0x4], // 0xFF8
        pub m_flNextSprayDecalTime: [u8; 0x4], // 0xFFC
        pub m_bNextSprayDecalTimeExpedited: [u8; 0x4], // 0x1000
        pub m_nRagdollDamageBone: [u8; 0x4], // 0x1004
        pub m_vRagdollDamageForce: [u8; 0xC], // 0x1008
        pub m_szRagdollDamageWeaponName: [u8; 0x40], // 0x1014
        pub m_bRagdollDamageHeadshot: [u8; 0x4], // 0x1054
        pub m_vRagdollServerOrigin: [u8; 0x10], // 0x1058
        pub m_EconGloves: [u8; 0x3E8], // 0x1068
        pub m_nEconGlovesChanged: [u8; 0x4], // 0x1450
        pub m_qDeathEyeAngles: [u8; 0xC], // 0x1454
        pub m_bLeftHanded: [u8; 0x4], // 0x1460
        pub m_fSwitchedHandednessTime: [u8; 0x4], // 0x1464
        pub m_flViewmodelOffsetX: [u8; 0x4], // 0x1468
        pub m_flViewmodelOffsetY: [u8; 0x4], // 0x146C
        pub m_flViewmodelOffsetZ: [u8; 0x4], // 0x1470
        pub m_flViewmodelFOV: [u8; 0x4], // 0x1474
        pub m_bIsWalking: [u8; 0x4], // 0x1478
        pub m_fLastGivenDefuserTime: [u8; 0x4], // 0x147C
        pub m_fLastGivenBombTime: [u8; 0x4], // 0x1480
        pub m_flDealtDamageToEnemyMostRecentTimestamp: [u8; 0x4], // 0x1484
        pub m_iDisplayHistoryBits: [u8; 0x4], // 0x1488
        pub m_flLastAttackedTeammate: [u8; 0x4], // 0x148C
        pub m_allowAutoFollowTime: [u8; 0x4], // 0x1490
        pub m_bResetArmorNextSpawn: [u8; 0x4], // 0x1494
        pub m_nLastKillerIndex: [u8; 0x8], // 0x1498
        pub m_entitySpottedState: [u8; 0x18], // 0x14A0
        pub m_nSpotRules: [u8; 0x4], // 0x14B8
        pub m_bIsScoped: [u8; 0x1], // 0x14BC
        pub m_bResumeZoom: [u8; 0x1], // 0x14BD
        pub m_bIsDefusing: [u8; 0x1], // 0x14BE
        pub m_bIsGrabbingHostage: [u8; 0x1], // 0x14BF
        pub m_iBlockingUseActionInProgress: [u8; 0x4], // 0x14C0
        pub m_flEmitSoundTime: [u8; 0x4], // 0x14C4
        pub m_bInNoDefuseArea: [u8; 0x4], // 0x14C8
        pub m_iBombSiteIndex: [u8; 0x4], // 0x14CC
        pub m_nWhichBombZone: [u8; 0x4], // 0x14D0
        pub m_bInBombZoneTrigger: [u8; 0x1], // 0x14D4
        pub m_bWasInBombZoneTrigger: [u8; 0x3], // 0x14D5
        pub m_iShotsFired: [u8; 0x4], // 0x14D8
        pub m_flFlinchStack: [u8; 0x4], // 0x14DC
        pub m_flVelocityModifier: [u8; 0x4], // 0x14E0
        pub m_vecTotalBulletForce: [u8; 0xC], // 0x14E4
        pub m_bWaitForNoAttack: [u8; 0x4], // 0x14F0
        pub m_ignoreLadderJumpTime: [u8; 0x4], // 0x14F4
        pub m_bKilledByHeadshot: [u8; 0x4], // 0x14F8
        pub m_LastHitBox: [u8; 0x4], // 0x14FC
        pub m_pBot: [u8; 0x8], // 0x1500
        pub m_bBotAllowActive: [u8; 0x4], // 0x1508
        pub m_nLastPickupPriority: [u8; 0x4], // 0x150C
        pub m_flLastPickupPriorityTime: [u8; 0x4], // 0x1510
        pub m_ArmorValue: [u8; 0x4], // 0x1514
        pub m_unCurrentEquipmentValue: [u8; 0x2], // 0x1518
        pub m_unRoundStartEquipmentValue: [u8; 0x2], // 0x151A
        pub m_unFreezetimeEndEquipmentValue: [u8; 0x4], // 0x151C
        pub m_iLastWeaponFireUsercmd: [u8; 0x4], // 0x1520
        pub m_bIsSpawning: [u8; 0xC], // 0x1524
        pub m_iDeathFlags: [u8; 0x4], // 0x1530
        pub m_bHasDeathInfo: [u8; 0x4], // 0x1534
        pub m_flDeathInfoTime: [u8; 0x4], // 0x1538
        pub m_vecDeathInfoOrigin: [u8; 0xC], // 0x153C
        pub m_vecPlayerPatchEconIndices: [u8; 0x14], // 0x1548
        pub m_GunGameImmunityColor: [u8; 0x4], // 0x155C
        pub m_grenadeParameterStashTime: [u8; 0x4], // 0x1560
        pub m_bGrenadeParametersStashed: [u8; 0x4], // 0x1564
        pub m_angStashedShootAngles: [u8; 0xC], // 0x1568
        pub m_vecStashedGrenadeThrowPosition: [u8; 0xC], // 0x1574
        pub m_vecStashedGrenadeThrowPawnCenter: [u8; 0xC], // 0x1580
        pub m_vecStashedVelocity: [u8; 0x14], // 0x158C
        pub m_bCommittingSuicideOnTeamChange: [u8; 0x1], // 0x15A0
        pub m_wasNotKilledNaturally: [u8; 0x3], // 0x15A1
        pub m_fImmuneToGunGameDamageTime: [u8; 0x4], // 0x15A4
        pub m_bGunGameImmunity: [u8; 0x4], // 0x15A8
        pub m_flBigHeadScale: [u8; 0x4], // 0x15AC
        pub m_fMolotovDamageTime: [u8; 0x4], // 0x15B0
        pub m_angEyeAngles: [u8; 0x1C], // 0x15B4
    }
    #[repr(C)]
    pub struct CEnvLightProbeVolume {
        pub pad_0: [u8; 0x540], // 0x0
        pub m_Entity_hLightProbeTexture_AmbientCube: [u8; 0x8], // 0x540
        pub m_Entity_hLightProbeTexture_SDF: [u8; 0x8], // 0x548
        pub m_Entity_hLightProbeTexture_SH2_DC: [u8; 0x8], // 0x550
        pub m_Entity_hLightProbeTexture_SH2_L1: [u8; 0x8], // 0x558
        pub m_Entity_hLightProbeDirectLightIndicesTexture: [u8; 0x8], // 0x560
        pub m_Entity_hLightProbeDirectLightScalarsTexture: [u8; 0x8], // 0x568
        pub m_Entity_hLightProbeDirectLightShadowsTexture: [u8; 0x8], // 0x570
        pub m_Entity_vBoxMins: [u8; 0xC], // 0x578
        pub m_Entity_vBoxMaxs: [u8; 0xC], // 0x584
        pub m_Entity_bMoveable: [u8; 0x4], // 0x590
        pub m_Entity_nHandshake: [u8; 0x4], // 0x594
        pub m_Entity_nPriority: [u8; 0x4], // 0x598
        pub m_Entity_bStartDisabled: [u8; 0x4], // 0x59C
        pub m_Entity_nLightProbeSizeX: [u8; 0x4], // 0x5A0
        pub m_Entity_nLightProbeSizeY: [u8; 0x4], // 0x5A4
        pub m_Entity_nLightProbeSizeZ: [u8; 0x4], // 0x5A8
        pub m_Entity_nLightProbeAtlasX: [u8; 0x4], // 0x5AC
        pub m_Entity_nLightProbeAtlasY: [u8; 0x4], // 0x5B0
        pub m_Entity_nLightProbeAtlasZ: [u8; 0xD], // 0x5B4
        pub m_Entity_bEnabled: [u8; 0x7], // 0x5C1
    }
    #[repr(C)]
    pub struct SpawnPoint {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_iPriority: [u8; 0x4], // 0x4A8
        pub m_bEnabled: [u8; 0x4], // 0x4AC
        pub m_nType: [u8; 0x8], // 0x4B0
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
        pub m_nParentAttachmentOrBone: [u8; 0x2], // 0xE4
        pub m_bDebugAbsOriginChanges: [u8; 0x1], // 0xE6
        pub m_bDormant: [u8; 0x1], // 0xE7
        pub m_bForceParentToBeNetworked: [u8; 0x3], // 0xE8
        pub m_nHierarchicalDepth: [u8; 0x1], // 0xEB
        pub m_nHierarchyType: [u8; 0x1], // 0xEC
        pub m_nDoNotSetAnimTimeInInvalidatePhysicsCount: [u8; 0x3], // 0xED
        pub m_name: [u8; 0x14], // 0xF0
        pub m_hierarchyAttachName: [u8; 0x4], // 0x104
        pub m_flClientLocalScale: [u8; 0x8], // 0x108
    }
    #[repr(C)]
    pub struct CWeaponM249 {
        pub pad_0: [u8; 0x12A0], // 0x0
    }
    #[repr(C)]
    pub struct CRopeKeyframeAlias_move_rope {
        pub pad_0: [u8; 0x8A8], // 0x0
    }
    #[repr(C)]
    pub struct CPlayer_ObserverServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_iObserverMode: [u8; 0x4], // 0x48
        pub m_hObserverTarget: [u8; 0x4], // 0x4C
        pub m_iObserverLastMode: [u8; 0x4], // 0x50
        pub m_bForcedObserverMode: [u8; 0x4], // 0x54
    }
    #[repr(C)]
    pub struct CCashStack {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_nCashStackValue: [u8; 0x8], // 0x850
    }
    #[repr(C)]
    pub struct CLogicScript {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CAttributeManager__cached_attribute_float_t {
        pub flIn: [u8; 0x8], // 0x0
        pub iAttribHook: [u8; 0x8], // 0x8
        pub flOut: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CPulseGraphInstance_ServerEntity {
        pub pad_0: [u8; 0x118], // 0x0
        pub m_hOwner: [u8; 0x4], // 0x118
        pub m_bActivated: [u8; 0x4], // 0x11C
        pub m_sNameFixupStaticPrefix: [u8; 0x8], // 0x120
        pub m_sNameFixupParent: [u8; 0x8], // 0x128
        pub m_sNameFixupLocal: [u8; 0x8], // 0x130
        pub m_sProceduralWorldNameForRelays: [u8; 0x8], // 0x138
    }
    #[repr(C)]
    pub struct CSceneEntityAlias_logic_choreographed_scene {
        pub pad_0: [u8; 0x800], // 0x0
    }
    #[repr(C)]
    pub struct CRagdollManager {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_iCurrentMaxRagdollCount: [u8; 0x4], // 0x4A8
        pub m_iMaxRagdollCount: [u8; 0x4], // 0x4AC
        pub m_bSaveImportant: [u8; 0x1], // 0x4B0
        pub m_bCanTakeDamage: [u8; 0x7], // 0x4B1
    }
    #[repr(C)]
    pub struct CSoundOpvarSetBoxEntity {
        pub pad_0: [u8; 0x640], // 0x0
        pub m_vDistanceInnerMins: [u8; 0xC], // 0x640
        pub m_vDistanceInnerMaxs: [u8; 0xC], // 0x64C
        pub m_vDistanceOuterMins: [u8; 0xC], // 0x658
        pub m_vDistanceOuterMaxs: [u8; 0xC], // 0x664
        pub m_nBoxDirection: [u8; 0x4], // 0x670
        pub m_vInnerMins: [u8; 0xC], // 0x674
        pub m_vInnerMaxs: [u8; 0xC], // 0x680
        pub m_vOuterMins: [u8; 0xC], // 0x68C
        pub m_vOuterMaxs: [u8; 0x10], // 0x698
    }
    #[repr(C)]
    pub struct CPostProcessingVolume {
        pub pad_0: [u8; 0x9D8], // 0x0
        pub m_hPostSettings: [u8; 0x8], // 0x9D8
        pub m_flFadeDuration: [u8; 0x4], // 0x9E0
        pub m_flMinLogExposure: [u8; 0x4], // 0x9E4
        pub m_flMaxLogExposure: [u8; 0x4], // 0x9E8
        pub m_flMinExposure: [u8; 0x4], // 0x9EC
        pub m_flMaxExposure: [u8; 0x4], // 0x9F0
        pub m_flExposureCompensation: [u8; 0x4], // 0x9F4
        pub m_flExposureFadeSpeedUp: [u8; 0x4], // 0x9F8
        pub m_flExposureFadeSpeedDown: [u8; 0x4], // 0x9FC
        pub m_flTonemapEVSmoothingRange: [u8; 0x4], // 0xA00
        pub m_bMaster: [u8; 0x1], // 0xA04
        pub m_bExposureControl: [u8; 0x3], // 0xA05
    }
    #[repr(C)]
    pub struct CPointProximitySensor {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_bDisabled: [u8; 0x4], // 0x4A8
        pub m_hTargetEntity: [u8; 0x4], // 0x4AC
        pub m_Distance: [u8; 0x20], // 0x4B0
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
    pub struct CTriggerLook {
        pub pad_0: [u8; 0x9E0], // 0x0
        pub m_hLookTarget: [u8; 0x4], // 0x9E0
        pub m_flFieldOfView: [u8; 0x4], // 0x9E4
        pub m_flLookTime: [u8; 0x4], // 0x9E8
        pub m_flLookTimeTotal: [u8; 0x4], // 0x9EC
        pub m_flLookTimeLast: [u8; 0x4], // 0x9F0
        pub m_flTimeoutDuration: [u8; 0x4], // 0x9F4
        pub m_bTimeoutFired: [u8; 0x1], // 0x9F8
        pub m_bIsLooking: [u8; 0x1], // 0x9F9
        pub m_b2DFOV: [u8; 0x1], // 0x9FA
        pub m_bUseVelocity: [u8; 0x1], // 0x9FB
        pub m_bTestOcclusion: [u8; 0x1], // 0x9FC
        pub m_bTestAllVisibleOcclusion: [u8; 0x3], // 0x9FD
        pub m_OnTimeout: [u8; 0x18], // 0xA00
        pub m_OnStartLook: [u8; 0x18], // 0xA18
        pub m_OnEndLook: [u8; 0x18], // 0xA30
    }
    #[repr(C)]
    pub struct CPulseCell_Outflow_PlayVCD {
        pub pad_0: [u8; 0x138], // 0x0
        pub m_hChoreoScene: [u8; 0x8], // 0x138
        pub m_OnPaused: [u8; 0x48], // 0x140
        pub m_OnResumed: [u8; 0x48], // 0x188
        pub m_OutRequirements: [u8; 0x18], // 0x1D0
    }
    #[repr(C)]
    pub struct CMultiplayRules {
        pub pad_0: [u8; 0xD0], // 0x0
    }
    #[repr(C)]
    pub struct CMolotovGrenade {
        pub pad_0: [u8; 0x12C0], // 0x0
    }
    #[repr(C)]
    pub struct CPhysTorque {
        pub pad_0: [u8; 0x508], // 0x0
        pub m_axis: [u8; 0x10], // 0x508
    }
    #[repr(C)]
    pub struct CMultiSource {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_rgEntities: [u8; 0x80], // 0x4A8
        pub m_rgTriggered: [u8; 0x80], // 0x528
        pub m_OnTrigger: [u8; 0x18], // 0x5A8
        pub m_iTotal: [u8; 0x8], // 0x5C0
        pub m_globalstate: [u8; 0x8], // 0x5C8
    }
    #[repr(C)]
    pub struct CBaseCSGrenade {
        pub pad_0: [u8; 0x1280], // 0x0
        pub m_bRedraw: [u8; 0x1], // 0x1280
        pub m_bIsHeldByPlayer: [u8; 0x1], // 0x1281
        pub m_bPinPulled: [u8; 0x1], // 0x1282
        pub m_bJumpThrow: [u8; 0x1], // 0x1283
        pub m_bThrowAnimating: [u8; 0x4], // 0x1284
        pub m_fThrowTime: [u8; 0x4], // 0x1288
        pub m_flThrowStrength: [u8; 0x4], // 0x128C
        pub m_fDropTime: [u8; 0x4], // 0x1290
        pub m_fPinPullTime: [u8; 0x4], // 0x1294
        pub m_bJustPulledPin: [u8; 0x4], // 0x1298
        pub m_nNextHoldTick: [u8; 0x4], // 0x129C
        pub m_flNextHoldFrac: [u8; 0x4], // 0x12A0
        pub m_hSwitchToWeaponAfterThrow: [u8; 0x1C], // 0x12A4
    }
    #[repr(C)]
    pub struct CLogicAuto {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_OnMapSpawn: [u8; 0x18], // 0x4A8
        pub m_OnDemoMapSpawn: [u8; 0x18], // 0x4C0
        pub m_OnNewGame: [u8; 0x18], // 0x4D8
        pub m_OnLoadGame: [u8; 0x18], // 0x4F0
        pub m_OnMapTransition: [u8; 0x18], // 0x508
        pub m_OnBackgroundMap: [u8; 0x18], // 0x520
        pub m_OnMultiNewMap: [u8; 0x18], // 0x538
        pub m_OnMultiNewRound: [u8; 0x18], // 0x550
        pub m_OnVREnabled: [u8; 0x18], // 0x568
        pub m_OnVRNotEnabled: [u8; 0x18], // 0x580
        pub m_globalstate: [u8; 0x8], // 0x598
    }
    #[repr(C)]
    pub struct CPhysicsWire {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_nDensity: [u8; 0x8], // 0x4A8
    }
    #[repr(C)]
    pub struct CFuncIllusionary {
        pub pad_0: [u8; 0x850], // 0x0
    }
    #[repr(C)]
    pub struct CInfoDynamicShadowHint {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_bDisabled: [u8; 0x4], // 0x4A8
        pub m_flRange: [u8; 0x4], // 0x4AC
        pub m_nImportance: [u8; 0x4], // 0x4B0
        pub m_nLightChoice: [u8; 0x4], // 0x4B4
        pub m_hLight: [u8; 0x8], // 0x4B8
    }
    #[repr(C)]
    pub struct CMarkupVolume {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_bDisabled: [u8; 0x8], // 0x850
    }
    #[repr(C)]
    pub struct CGenericLogicPlayerProxy {
        pub pad_0: [u8; 0x518], // 0x0
    }
    #[repr(C)]
    pub struct CPathNode {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_vInTangentLocal: [u8; 0xC], // 0x4A8
        pub m_vOutTangentLocal: [u8; 0xC], // 0x4B4
        pub m_strParentPathUniqueID: [u8; 0x8], // 0x4C0
        pub m_strPathNodeParameter: [u8; 0x8], // 0x4C8
        pub m_xWSPrevParent: [u8; 0x20], // 0x4D0
        pub m_hPath: [u8; 0x10], // 0x4F0
    }
    #[repr(C)]
    pub struct CCSGO_TeamSelectCounterTerroristPosition {
        pub pad_0: [u8; 0x1468], // 0x0
    }
    #[repr(C)]
    pub struct CTriggerRemove {
        pub pad_0: [u8; 0x9C8], // 0x0
        pub m_OnRemove: [u8; 0x18], // 0x9C8
    }
    #[repr(C)]
    pub struct CLogicGameEventListener {
        pub pad_0: [u8; 0x4B8], // 0x0
        pub m_OnEventFired: [u8; 0x18], // 0x4B8
        pub m_iszGameEventName: [u8; 0x8], // 0x4D0
        pub m_iszGameEventItem: [u8; 0x8], // 0x4D8
        pub m_bEnabled: [u8; 0x1], // 0x4E0
        pub m_bStartDisabled: [u8; 0x7], // 0x4E1
    }
    #[repr(C)]
    pub struct CServerOnlyModelEntity {
        pub pad_0: [u8; 0x850], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_IntervalTimer {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_Completed: [u8; 0x48], // 0xD8
        pub m_OnInterval: [u8; 0x48], // 0x120
    }
    #[repr(C)]
    pub struct CMarkupVolumeTagged_Nav {
        pub pad_0: [u8; 0x890], // 0x0
        pub m_nScopes: [u8; 0x8], // 0x890
    }
    #[repr(C)]
    pub struct CInfoPlayerTerrorist {
        pub pad_0: [u8; 0x4B8], // 0x0
    }
    #[repr(C)]
    pub struct CLogicAutosave {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_bForceNewLevelUnit: [u8; 0x4], // 0x4A8
        pub m_minHitPoints: [u8; 0x4], // 0x4AC
        pub m_minHitPointsToCommit: [u8; 0x8], // 0x4B0
    }
    #[repr(C)]
    pub struct CCSGO_TeamIntroTerroristPosition {
        pub pad_0: [u8; 0x1468], // 0x0
    }
    #[repr(C)]
    pub struct CSingleplayRules {
        pub pad_0: [u8; 0xD0], // 0x0
        pub m_bSinglePlayerGameEnding: [u8; 0x8], // 0xD0
    }
    #[repr(C)]
    pub struct CEnvWindShared {
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
        pub m_location: [u8; 0x10], // 0x30
        pub m_OnGustStart: [u8; 0x18], // 0x40
        pub m_OnGustEnd: [u8; 0x18], // 0x58
        pub m_hEntOwner: [u8; 0xC0], // 0x70
    }
    #[repr(C)]
    pub struct CPointPrefab {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_targetMapName: [u8; 0x8], // 0x4A8
        pub m_forceWorldGroupID: [u8; 0x8], // 0x4B0
        pub m_associatedRelayTargetName: [u8; 0x8], // 0x4B8
        pub m_fixupNames: [u8; 0x1], // 0x4C0
        pub m_bLoadDynamic: [u8; 0x3], // 0x4C1
        pub m_associatedRelayEntity: [u8; 0x4], // 0x4C4
        pub m_ProceduralRelaySources: [u8; 0x68], // 0x4C8
    }
    #[repr(C)]
    pub struct CPulseCell_BaseLerp {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_WakeResume: [u8; 0x48], // 0xD8
    }
    #[repr(C)]
    pub struct CEnvInstructorVRHint {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_iszName: [u8; 0x8], // 0x4A8
        pub m_iszHintTargetEntity: [u8; 0x8], // 0x4B0
        pub m_iTimeout: [u8; 0x8], // 0x4B8
        pub m_iszCaption: [u8; 0x8], // 0x4C0
        pub m_iszStartSound: [u8; 0x8], // 0x4C8
        pub m_iLayoutFileType: [u8; 0x8], // 0x4D0
        pub m_iszCustomLayoutFile: [u8; 0x8], // 0x4D8
        pub m_iAttachType: [u8; 0x4], // 0x4E0
        pub m_flHeightOffset: [u8; 0x4], // 0x4E4
    }
    #[repr(C)]
    pub struct CCSGameRulesProxy {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_pGameRules: [u8; 0x8], // 0x4A8
    }
    #[repr(C)]
    pub struct CPrecipitation {
        pub pad_0: [u8; 0x9C8], // 0x0
    }
    #[repr(C)]
    pub struct CCommentaryViewPosition {
        pub pad_0: [u8; 0x8C0], // 0x0
    }
    #[repr(C)]
    pub struct CEnvGlobal {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_outCounter: [u8; 0x20], // 0x4A8
        pub m_globalstate: [u8; 0x8], // 0x4C8
        pub m_triggermode: [u8; 0x4], // 0x4D0
        pub m_initialstate: [u8; 0x4], // 0x4D4
        pub m_counter: [u8; 0x8], // 0x4D8
    }
    #[repr(C)]
    pub struct CLogicNPCCounterOBB {
        pub pad_0: [u8; 0x758], // 0x0
    }
    #[repr(C)]
    pub struct CPlatTrigger {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_pPlatform: [u8; 0x8], // 0x850
    }
    #[repr(C)]
    pub struct CSceneEntity {
        pub pad_0: [u8; 0x4B0], // 0x0
        pub m_iszSceneFile: [u8; 0x8], // 0x4B0
        pub m_iszTarget1: [u8; 0x8], // 0x4B8
        pub m_iszTarget2: [u8; 0x8], // 0x4C0
        pub m_iszTarget3: [u8; 0x8], // 0x4C8
        pub m_iszTarget4: [u8; 0x8], // 0x4D0
        pub m_iszTarget5: [u8; 0x8], // 0x4D8
        pub m_iszTarget6: [u8; 0x8], // 0x4E0
        pub m_iszTarget7: [u8; 0x8], // 0x4E8
        pub m_iszTarget8: [u8; 0x8], // 0x4F0
        pub m_hTarget1: [u8; 0x4], // 0x4F8
        pub m_hTarget2: [u8; 0x4], // 0x4FC
        pub m_hTarget3: [u8; 0x4], // 0x500
        pub m_hTarget4: [u8; 0x4], // 0x504
        pub m_hTarget5: [u8; 0x4], // 0x508
        pub m_hTarget6: [u8; 0x4], // 0x50C
        pub m_hTarget7: [u8; 0x4], // 0x510
        pub m_hTarget8: [u8; 0x4], // 0x514
        pub m_hLocatorOrigin: [u8; 0x8], // 0x518
        pub m_sTargetAttachment: [u8; 0x8], // 0x520
        pub m_bIsPlayingBack: [u8; 0x1], // 0x528
        pub m_bPaused: [u8; 0x1], // 0x529
        pub m_bMultiplayer: [u8; 0x1], // 0x52A
        pub m_bAutogenerated: [u8; 0x1], // 0x52B
        pub m_flForceClientTime: [u8; 0x4], // 0x52C
        pub m_flCurrentTime: [u8; 0x4], // 0x530
        pub m_flFrameTime: [u8; 0x4], // 0x534
        pub m_bCancelAtNextInterrupt: [u8; 0x1], // 0x538
        pub m_bRemoveOnCompletion: [u8; 0x3], // 0x539
        pub m_fPitch: [u8; 0x4], // 0x53C
        pub m_bAutomated: [u8; 0x4], // 0x540
        pub m_nAutomatedAction: [u8; 0x4], // 0x544
        pub m_flAutomationDelay: [u8; 0x4], // 0x548
        pub m_flAutomationTime: [u8; 0x4], // 0x54C
        pub m_nSpeechPriority: [u8; 0x4], // 0x550
        pub m_bPausedViaInput: [u8; 0x1], // 0x554
        pub m_bPauseAtNextInterrupt: [u8; 0x1], // 0x555
        pub m_bWaitingForActor: [u8; 0x1], // 0x556
        pub m_bWaitingForInterrupt: [u8; 0x1], // 0x557
        pub m_bInterruptedActorsScenes: [u8; 0x1], // 0x558
        pub m_bBreakOnNonIdle: [u8; 0x1], // 0x559
        pub m_bSceneFinished: [u8; 0x6], // 0x55A
        pub m_hActorList: [u8; 0x18], // 0x560
        pub m_hRemoveActorList: [u8; 0x48], // 0x578
        pub m_nSceneStringIndex: [u8; 0x8], // 0x5C0
        pub m_OnStart: [u8; 0x18], // 0x5C8
        pub m_OnCompletion: [u8; 0x18], // 0x5E0
        pub m_OnCanceled: [u8; 0x18], // 0x5F8
        pub m_OnPaused: [u8; 0x18], // 0x610
        pub m_OnResumed: [u8; 0x18], // 0x628
        pub m_OnPulseRequirement: [u8; 0x90], // 0x640
        pub m_TargetNameMap: [u8; 0x28], // 0x6D0
        pub m_AnchorNameMap: [u8; 0x28], // 0x6F8
        pub m_ActorGraphMap: [u8; 0x28], // 0x720
        pub m_ActorClipMap: [u8; 0x28], // 0x748
        pub m_ActorMap: [u8; 0x18], // 0x770
        pub m_hInterruptScene: [u8; 0x4], // 0x788
        pub m_nInterruptCount: [u8; 0x4], // 0x78C
        pub m_responseConcept: [u8; 0x8], // 0x790
        pub m_responseCriteria: [u8; 0x8], // 0x798
        pub m_bSceneMissing: [u8; 0x1], // 0x7A0
        pub m_bInterrupted: [u8; 0x1], // 0x7A1
        pub m_bCompletedEarly: [u8; 0x1], // 0x7A2
        pub m_bInterruptSceneFinished: [u8; 0x1], // 0x7A3
        pub m_bRestoring: [u8; 0x4], // 0x7A4
        pub m_hNotifySceneCompletion: [u8; 0x18], // 0x7A8
        pub m_hListManagers: [u8; 0x18], // 0x7C0
        pub m_iszSoundName: [u8; 0x8], // 0x7D8
        pub m_iszSequenceName: [u8; 0x8], // 0x7E0
        pub m_hActor: [u8; 0x4], // 0x7E8
        pub m_hActivator: [u8; 0x4], // 0x7EC
        pub m_BusyActor: [u8; 0x4], // 0x7F0
        pub m_iPlayerDeathBehavior: [u8; 0xC], // 0x7F4
    }
    #[repr(C)]
    pub struct CChoreoInfoTarget {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CTonemapController2 {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_flAutoExposureMin: [u8; 0x4], // 0x4A8
        pub m_flAutoExposureMax: [u8; 0x4], // 0x4AC
        pub m_flExposureAdaptationSpeedUp: [u8; 0x4], // 0x4B0
        pub m_flExposureAdaptationSpeedDown: [u8; 0x4], // 0x4B4
        pub m_flTonemapEVSmoothingRange: [u8; 0x8], // 0x4B8
    }
    #[repr(C)]
    pub struct CMapSharedEnvironment {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_targetMapName: [u8; 0x10], // 0x4A8
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
    pub struct CPhysMagnet {
        pub pad_0: [u8; 0xA40], // 0x0
        pub m_OnMagnetAttach: [u8; 0x18], // 0xA40
        pub m_OnMagnetDetach: [u8; 0x18], // 0xA58
        pub m_massScale: [u8; 0x4], // 0xA70
        pub m_forceLimit: [u8; 0x4], // 0xA74
        pub m_torqueLimit: [u8; 0x8], // 0xA78
        pub m_MagnettedEntities: [u8; 0x18], // 0xA80
        pub m_bActive: [u8; 0x1], // 0xA98
        pub m_bHasHitSomething: [u8; 0x3], // 0xA99
        pub m_flTotalMass: [u8; 0x4], // 0xA9C
        pub m_flRadius: [u8; 0x4], // 0xAA0
        pub m_flNextSuckTime: [u8; 0x4], // 0xAA4
        pub m_iMaxObjectsAttached: [u8; 0x8], // 0xAA8
    }
    #[repr(C)]
    pub struct CCSCustomHudLayout {
        pub pad_0: [u8; 0x4B8], // 0x0
        pub m_strLayout: [u8; 0x8], // 0x4B8
        pub m_bObservable: [u8; 0x8], // 0x4C0
        pub m_vecPlayerLayoutStates: [u8; 0x68], // 0x4C8
        pub m_globalLayoutState: [u8; 0x198], // 0x530
        pub m_vecPanelIds: [u8; 0x18], // 0x6C8
        pub m_vecClassNames: [u8; 0x18], // 0x6E0
        pub m_vecDialogVariableNames: [u8; 0x120], // 0x6F8
    }
    #[repr(C)]
    pub struct CEntityInstance {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_iszPrivateVScripts: [u8; 0x8], // 0x8
        pub m_pEntity: [u8; 0x18], // 0x10
        pub m_CScriptComponent: [u8; 0x8], // 0x28
    }
    #[repr(C)]
    pub struct CGameGibManager {
        pub pad_0: [u8; 0x4C0], // 0x0
        pub m_bAllowNewGibs: [u8; 0x4], // 0x4C0
        pub m_iCurrentMaxPieces: [u8; 0x4], // 0x4C4
        pub m_iMaxPieces: [u8; 0x4], // 0x4C8
        pub m_iLastFrame: [u8; 0x4], // 0x4CC
    }
    #[repr(C)]
    pub struct CHandleDummy {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CFuncWallToggle {
        pub pad_0: [u8; 0x858], // 0x0
    }
    #[repr(C)]
    pub struct CCSPlayer_BulletServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_totalHitsOnServer: [u8; 0x28], // 0x48
    }
    #[repr(C)]
    pub struct CSkyCamera {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_skyboxData: [u8; 0x90], // 0x4A8
        pub m_skyboxSlotToken: [u8; 0x4], // 0x538
        pub m_bUseAngles: [u8; 0x4], // 0x53C
        pub m_pNext: [u8; 0x8], // 0x540
    }
    #[repr(C)]
    pub struct CCSGO_EndOfMatchLineupEnd {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CPlayer_AutoaimServices {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CItemDefuserAlias_item_defuser {
        pub pad_0: [u8; 0xB00], // 0x0
    }
    #[repr(C)]
    pub struct CPathCornerCrash {
        pub pad_0: [u8; 0x4E0], // 0x0
    }
    #[repr(C)]
    pub struct CPhysPulley {
        pub pad_0: [u8; 0x508], // 0x0
        pub m_position2: [u8; 0xC], // 0x508
        pub m_offset: [u8; 0x18], // 0x514
        pub m_addLength: [u8; 0x4], // 0x52C
        pub m_gearRatio: [u8; 0x8], // 0x530
    }
    #[repr(C)]
    pub struct CCSPetPlacement {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CWeaponMP5SD {
        pub pad_0: [u8; 0x12A0], // 0x0
    }
    #[repr(C)]
    pub struct CWeaponBaseItem {
        pub pad_0: [u8; 0x1280], // 0x0
        pub m_bSequenceInProgress: [u8; 0x1], // 0x1280
        pub m_bRedraw: [u8; 0xF], // 0x1281
    }
    #[repr(C)]
    pub struct CCommentaryAuto {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_OnCommentaryNewGame: [u8; 0x18], // 0x4A8
        pub m_OnCommentaryMidGame: [u8; 0x18], // 0x4C0
        pub m_OnCommentaryMultiplayerSpawn: [u8; 0x18], // 0x4D8
    }
    #[repr(C)]
    pub struct CPulseCell_Outflow_ListenForEntityOutput__CursorState_t {
        pub m_entity: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct ActiveModelConfig_t {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_Handle: [u8; 0x8], // 0x30
        pub m_Name: [u8; 0x8], // 0x38
        pub m_AssociatedEntities: [u8; 0x18], // 0x40
        pub m_AssociatedEntityNames: [u8; 0x18], // 0x58
        pub m_vecAssociatedEntityCollidesWithHierarchy: [u8; 0x10], // 0x70
        pub m_vecAssociatedEntityCollidesOutsideHierarchy: [u8; 0x20], // 0x80
    }
    #[repr(C)]
    pub struct CWeaponUSPSilencer {
        pub pad_0: [u8; 0x12A0], // 0x0
    }
    #[repr(C)]
    pub struct CSoundStackSave {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_iszStackName: [u8; 0x8], // 0x4A8
    }
    #[repr(C)]
    pub struct CPulseCell_Value_Curve {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_Curve: [u8; 0x40], // 0x48
    }
    #[repr(C)]
    pub struct CWeaponMag7 {
        pub pad_0: [u8; 0x12A0], // 0x0
    }
    #[repr(C)]
    pub struct CLogicMeasureMovement {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_strMeasureTarget: [u8; 0x8], // 0x4A8
        pub m_strMeasureReference: [u8; 0x8], // 0x4B0
        pub m_strTargetReference: [u8; 0x8], // 0x4B8
        pub m_hMeasureTarget: [u8; 0x4], // 0x4C0
        pub m_hMeasureReference: [u8; 0x4], // 0x4C4
        pub m_hTarget: [u8; 0x4], // 0x4C8
        pub m_hTargetReference: [u8; 0x4], // 0x4CC
        pub m_flScale: [u8; 0x4], // 0x4D0
        pub m_nMeasureType: [u8; 0x4], // 0x4D4
    }
    #[repr(C)]
    pub struct CLogicActivityEvent {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_nEventType: [u8; 0x4], // 0x4A8
        pub m_flDuration: [u8; 0x4], // 0x4AC
        pub m_iszSourceEntityName: [u8; 0x8], // 0x4B0
        pub m_hSource: [u8; 0x8], // 0x4B8
    }
    #[repr(C)]
    pub struct CC4 {
        pub pad_0: [u8; 0x12B0], // 0x0
        pub m_vecLastValidPlayerHeldPosition: [u8; 0xC], // 0x12B0
        pub m_vecLastValidDroppedPosition: [u8; 0xC], // 0x12BC
        pub m_bDoValidDroppedPositionCheck: [u8; 0x1], // 0x12C8
        pub m_bStartedArming: [u8; 0x3], // 0x12C9
        pub m_fArmedTime: [u8; 0x4], // 0x12CC
        pub m_bBombPlacedAnimation: [u8; 0x1], // 0x12D0
        pub m_bIsPlantingViaUse: [u8; 0x7], // 0x12D1
        pub m_entitySpottedState: [u8; 0x18], // 0x12D8
        pub m_nSpotRules: [u8; 0x4], // 0x12F0
        pub m_bPlayedArmingBeeps: [u8; 0x7], // 0x12F4
        pub m_bBombPlanted: [u8; 0x5], // 0x12FB
    }
    #[repr(C)]
    pub struct CHostageCarriableProp {
        pub pad_0: [u8; 0xA40], // 0x0
    }
    #[repr(C)]
    pub struct CDynamicPropAlias_cable_dynamic {
        pub pad_0: [u8; 0xC90], // 0x0
    }
    #[repr(C)]
    pub struct CCSObserver_CameraServices {
        pub pad_0: [u8; 0x1B0], // 0x0
    }
    #[repr(C)]
    pub struct CEnvDetailController {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_flFadeStartDist: [u8; 0x4], // 0x4A8
        pub m_flFadeEndDist: [u8; 0x4], // 0x4AC
    }
    #[repr(C)]
    pub struct CCSPlayerPawnBase {
        pub pad_0: [u8; 0xCE0], // 0x0
        pub m_CTouchExpansionComponent: [u8; 0x50], // 0xCE0
        pub m_pPingServices: [u8; 0x8], // 0xD30
        pub m_blindUntilTime: [u8; 0x4], // 0xD38
        pub m_blindStartTime: [u8; 0x4], // 0xD3C
        pub m_iPlayerState: [u8; 0xB0], // 0xD40
        pub m_bRespawning: [u8; 0x1], // 0xDF0
        pub m_bHasMovedSinceSpawn: [u8; 0x3], // 0xDF1
        pub m_iNumSpawns: [u8; 0x8], // 0xDF4
        pub m_flIdleTimeSinceLastAction: [u8; 0x4], // 0xDFC
        pub m_fNextRadarUpdateTime: [u8; 0x4], // 0xE00
        pub m_flFlashDuration: [u8; 0x4], // 0xE04
        pub m_flFlashMaxAlpha: [u8; 0x4], // 0xE08
        pub m_flProgressBarStartTime: [u8; 0x4], // 0xE0C
        pub m_iProgressBarDuration: [u8; 0x4], // 0xE10
        pub m_hOriginalController: [u8; 0xC], // 0xE14
    }
    #[repr(C)]
    pub struct CEnvSoundscapeProxy {
        pub pad_0: [u8; 0x538], // 0x0
        pub m_MainSoundscapeName: [u8; 0x8], // 0x538
    }
    #[repr(C)]
    pub struct CPulseCell_Inflow_EventHandler {
        pub pad_0: [u8; 0x80], // 0x0
        pub m_EventName: [u8; 0x10], // 0x80
    }
    #[repr(C)]
    pub struct CCSPointScriptEntity {
        pub pad_0: [u8; 0x668], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_BaseFlow {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CBombTarget {
        pub pad_0: [u8; 0x9C8], // 0x0
        pub m_OnBombExplode: [u8; 0x18], // 0x9C8
        pub m_OnBombPlanted: [u8; 0x18], // 0x9E0
        pub m_OnBombDefused: [u8; 0x18], // 0x9F8
        pub m_bIsBombSiteB: [u8; 0x1], // 0xA10
        pub m_bIsHeistBombTarget: [u8; 0x1], // 0xA11
        pub m_bBombPlantedHere: [u8; 0x6], // 0xA12
        pub m_szMountTarget: [u8; 0x8], // 0xA18
        pub m_hInstructorHint: [u8; 0x4], // 0xA20
        pub m_nBombSiteDesignation: [u8; 0x4], // 0xA24
    }
    #[repr(C)]
    pub struct CRuleEntity {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_iszMaster: [u8; 0x8], // 0x850
    }
    #[repr(C)]
    pub struct CPhysThruster {
        pub pad_0: [u8; 0x508], // 0x0
        pub m_localOrigin: [u8; 0x10], // 0x508
    }
    #[repr(C)]
    pub struct CInfoPlayerStart {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_bDisabled: [u8; 0x1], // 0x4A8
        pub m_bIsMaster: [u8; 0x7], // 0x4A9
        pub m_pPawnSubclass: [u8; 0x8], // 0x4B0
    }
    #[repr(C)]
    pub struct CEntityFlame {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_hEntAttached: [u8; 0x4], // 0x4A8
        pub m_bCheapEffect: [u8; 0x4], // 0x4AC
        pub m_flSize: [u8; 0x4], // 0x4B0
        pub m_bUseHitboxes: [u8; 0x4], // 0x4B4
        pub m_iNumHitboxFires: [u8; 0x4], // 0x4B8
        pub m_flHitboxFireScale: [u8; 0x4], // 0x4BC
        pub m_flLifetime: [u8; 0x4], // 0x4C0
        pub m_hAttacker: [u8; 0x4], // 0x4C4
        pub m_flDirectDamagePerSecond: [u8; 0x4], // 0x4C8
        pub m_iCustomDamageType: [u8; 0x1C], // 0x4CC
    }
    #[repr(C)]
    pub struct CSkeletonInstance {
        pub pad_0: [u8; 0x120], // 0x0
        pub m_modelState: [u8; 0x290], // 0x120
        pub m_bUseParentRenderBounds: [u8; 0x1], // 0x3B0
        pub m_bDisableSolidCollisionsForHierarchy: [u8; 0x1], // 0x3B1
        pub m_bDirtyMotionType: [u8; 0x1], // 0x3B2
        pub m_bIsGeneratingLatchedParentSpaceState: [u8; 0x5], // 0x3B3
        pub m_materialGroup: [u8; 0x4], // 0x3B8
        pub m_nHitboxSet: [u8; 0x60], // 0x3BC
        pub m_bForceServerConstraintsEnabled: [u8; 0x44], // 0x41C
    }
    #[repr(C)]
    pub struct CEntityComponent {
        pub pad_0: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct CBasePlatTrain {
        pub pad_0: [u8; 0x8D0], // 0x0
        pub m_NoiseMoving: [u8; 0x8], // 0x8D0
        pub m_NoiseArrived: [u8; 0x10], // 0x8D8
        pub m_volume: [u8; 0x4], // 0x8E8
        pub m_flTWidth: [u8; 0x4], // 0x8EC
        pub m_flTLength: [u8; 0x8], // 0x8F0
    }
    #[repr(C)]
    pub struct CPointTeleport {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_vSaveOrigin: [u8; 0xC], // 0x4A8
        pub m_vSaveAngles: [u8; 0xC], // 0x4B4
        pub m_bTeleportParentedEntities: [u8; 0x1], // 0x4C0
        pub m_bTeleportUseCurrentAngle: [u8; 0x7], // 0x4C1
    }
    #[repr(C)]
    pub struct CTriggerGameEvent {
        pub pad_0: [u8; 0x9C8], // 0x0
        pub m_strStartTouchEventName: [u8; 0x8], // 0x9C8
        pub m_strEndTouchEventName: [u8; 0x8], // 0x9D0
        pub m_strTriggerID: [u8; 0x8], // 0x9D8
    }
    #[repr(C)]
    pub struct CMessageEntity {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_radius: [u8; 0x8], // 0x4A8
        pub m_messageText: [u8; 0x8], // 0x4B0
        pub m_drawText: [u8; 0x1], // 0x4B8
        pub m_bDeveloperOnly: [u8; 0x1], // 0x4B9
        pub m_bEnabled: [u8; 0x6], // 0x4BA
    }
    #[repr(C)]
    pub struct CEnvEntityIgniter {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_flLifetime: [u8; 0x8], // 0x4A8
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
    pub struct CMarkupVolumeTagged_NavGame {
        pub pad_0: [u8; 0x8B8], // 0x0
        pub m_nScopes: [u8; 0x1], // 0x8B8
        pub m_bFloodFillAttribute: [u8; 0x1], // 0x8B9
        pub m_bSplitNavSpace: [u8; 0x6], // 0x8BA
    }
    #[repr(C)]
    pub struct CMultiLightProxy {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_iszLightNameFilter: [u8; 0x8], // 0x4A8
        pub m_iszLightClassFilter: [u8; 0x8], // 0x4B0
        pub m_flLightRadiusFilter: [u8; 0x4], // 0x4B8
        pub m_flBrightnessDelta: [u8; 0x4], // 0x4BC
        pub m_bPerformScreenFade: [u8; 0x4], // 0x4C0
        pub m_flTargetBrightnessMultiplier: [u8; 0x4], // 0x4C4
        pub m_flCurrentBrightnessMultiplier: [u8; 0x8], // 0x4C8
        pub m_vecLights: [u8; 0x18], // 0x4D0
    }
    #[repr(C)]
    pub struct CWeaponM4A1 {
        pub pad_0: [u8; 0x12A0], // 0x0
    }
    #[repr(C)]
    pub struct CTriggerHostageReset {
        pub pad_0: [u8; 0x9C8], // 0x0
    }
    #[repr(C)]
    pub struct CEconWearable {
        pub pad_0: [u8; 0xEB0], // 0x0
        pub m_nForceSkin: [u8; 0x4], // 0xEB0
        pub m_bAlwaysAllow: [u8; 0xC], // 0xEB4
    }
    #[repr(C)]
    pub struct CWeaponMAC10 {
        pub pad_0: [u8; 0x12A0], // 0x0
    }
    #[repr(C)]
    pub struct CFuncLadder {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_vecLadderDir: [u8; 0x10], // 0x850
        pub m_Dismounts: [u8; 0x18], // 0x860
        pub m_vecLocalTop: [u8; 0xC], // 0x878
        pub m_vecPlayerMountPositionTop: [u8; 0xC], // 0x884
        pub m_vecPlayerMountPositionBottom: [u8; 0xC], // 0x890
        pub m_flAutoRideSpeed: [u8; 0x4], // 0x89C
        pub m_bDisabled: [u8; 0x1], // 0x8A0
        pub m_bFakeLadder: [u8; 0x1], // 0x8A1
        pub m_bHasSlack: [u8; 0x6], // 0x8A2
        pub m_surfacePropName: [u8; 0x8], // 0x8A8
        pub m_OnPlayerGotOnLadder: [u8; 0x18], // 0x8B0
        pub m_OnPlayerGotOffLadder: [u8; 0x18], // 0x8C8
    }
    #[repr(C)]
    pub struct CFogController {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_fog: [u8; 0x68], // 0x4A8
        pub m_bUseAngles: [u8; 0x4], // 0x510
        pub m_iChangedVariables: [u8; 0x4], // 0x514
    }
    #[repr(C)]
    pub struct CItem {
        pub pad_0: [u8; 0xA48], // 0x0
        pub m_OnPlayerTouch: [u8; 0x18], // 0xA48
        pub m_OnPlayerPickup: [u8; 0x18], // 0xA60
        pub m_bActivateWhenAtRest: [u8; 0x8], // 0xA78
        pub m_OnCacheInteraction: [u8; 0x18], // 0xA80
        pub m_OnGlovePulled: [u8; 0x18], // 0xA98
        pub m_vOriginalSpawnOrigin: [u8; 0xC], // 0xAB0
        pub m_vOriginalSpawnAngles: [u8; 0xC], // 0xABC
        pub m_bPhysStartAsleep: [u8; 0x18], // 0xAC8
    }
    #[repr(C)]
    pub struct CTriggerPush {
        pub pad_0: [u8; 0x9C8], // 0x0
        pub m_angPushEntitySpace: [u8; 0xC], // 0x9C8
        pub m_vecPushDirEntitySpace: [u8; 0xC], // 0x9D4
        pub m_bTriggerOnStartTouch: [u8; 0x1], // 0x9E0
        pub m_bUsePathSimple: [u8; 0x7], // 0x9E1
        pub m_iszPathSimpleName: [u8; 0x8], // 0x9E8
        pub m_PathSimple: [u8; 0x4], // 0x9F0
        pub m_splinePushType: [u8; 0x4], // 0x9F4
        pub m_flSpeed: [u8; 0x8], // 0x9F8
    }
    #[repr(C)]
    pub struct CBaseProp {
        pub pad_0: [u8; 0xA40], // 0x0
        pub m_bModelOverrodeBlockLOS: [u8; 0x4], // 0xA40
        pub m_iShapeType: [u8; 0x4], // 0xA44
        pub m_bConformToCollisionBounds: [u8; 0x8], // 0xA48
        pub m_mPreferredCatchTransform: [u8; 0x20], // 0xA50
    }
    #[repr(C)]
    pub struct CInfoOffscreenPanoramaTexture {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_bDisabled: [u8; 0x1], // 0x4A8
        pub m_bEnableMipGen: [u8; 0x3], // 0x4A9
        pub m_nResolutionX: [u8; 0x4], // 0x4AC
        pub m_nResolutionY: [u8; 0x8], // 0x4B0
        pub m_szPanelType: [u8; 0x8], // 0x4B8
        pub m_szLayoutFileName: [u8; 0x8], // 0x4C0
        pub m_RenderAttrName: [u8; 0x8], // 0x4C8
        pub m_TargetEntities: [u8; 0x18], // 0x4D0
        pub m_nTargetChangeCount: [u8; 0x8], // 0x4E8
        pub m_vecCSSClasses: [u8; 0x18], // 0x4F0
        pub m_szTargetsName: [u8; 0x8], // 0x508
        pub m_AdditionalTargetEntities: [u8; 0x18], // 0x510
    }
    #[repr(C)]
    pub struct CPointAngularVelocitySensor {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_hTargetEntity: [u8; 0x4], // 0x4A8
        pub m_flThreshold: [u8; 0x4], // 0x4AC
        pub m_nLastCompareResult: [u8; 0x4], // 0x4B0
        pub m_nLastFireResult: [u8; 0x4], // 0x4B4
        pub m_flFireTime: [u8; 0x4], // 0x4B8
        pub m_flFireInterval: [u8; 0x4], // 0x4BC
        pub m_flLastAngVelocity: [u8; 0x4], // 0x4C0
        pub m_lastOrientation: [u8; 0xC], // 0x4C4
        pub m_vecAxis: [u8; 0xC], // 0x4D0
        pub m_bUseHelper: [u8; 0x4], // 0x4DC
        pub m_AngularVelocity: [u8; 0x20], // 0x4E0
        pub m_OnLessThan: [u8; 0x18], // 0x500
        pub m_OnLessThanOrEqualTo: [u8; 0x18], // 0x518
        pub m_OnGreaterThan: [u8; 0x18], // 0x530
        pub m_OnGreaterThanOrEqualTo: [u8; 0x18], // 0x548
        pub m_OnEqualTo: [u8; 0x18], // 0x560
    }
    #[repr(C)]
    pub struct CPlayerVisibility {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_flVisibilityStrength: [u8; 0x4], // 0x4A8
        pub m_flFogDistanceMultiplier: [u8; 0x4], // 0x4AC
        pub m_flFogMaxDensityMultiplier: [u8; 0x4], // 0x4B0
        pub m_flFadeTime: [u8; 0x4], // 0x4B4
        pub m_bStartDisabled: [u8; 0x1], // 0x4B8
        pub m_bIsEnabled: [u8; 0x7], // 0x4B9
    }
    #[repr(C)]
    pub struct CPulseCell_Step_FollowEntity {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_ParamBoneOrAttachName: [u8; 0x8], // 0x48
        pub m_ParamBoneOrAttachNameChild: [u8; 0x8], // 0x50
    }
    #[repr(C)]
    pub struct CFlashbang {
        pub pad_0: [u8; 0x12C0], // 0x0
    }
    #[repr(C)]
    pub struct CBasePlayerWeapon {
        pub pad_0: [u8; 0xEB0], // 0x0
        pub m_nNextPrimaryAttackTick: [u8; 0x4], // 0xEB0
        pub m_flNextPrimaryAttackTickRatio: [u8; 0x4], // 0xEB4
        pub m_nNextSecondaryAttackTick: [u8; 0x4], // 0xEB8
        pub m_flNextSecondaryAttackTickRatio: [u8; 0x4], // 0xEBC
        pub m_iClip1: [u8; 0x4], // 0xEC0
        pub m_iClip2: [u8; 0x4], // 0xEC4
        pub m_pReserveAmmo: [u8; 0x8], // 0xEC8
        pub m_OnPlayerUse: [u8; 0x20], // 0xED0
    }
    #[repr(C)]
    pub struct CPhysForce {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_pController: [u8; 0x8], // 0x4A8
        pub m_nameAttach: [u8; 0x8], // 0x4B0
        pub m_force: [u8; 0x4], // 0x4B8
        pub m_forceTime: [u8; 0x4], // 0x4BC
        pub m_attachedObject: [u8; 0x4], // 0x4C0
        pub m_wasRestored: [u8; 0x4], // 0x4C4
        pub m_integrator: [u8; 0x40], // 0x4C8
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
        pub pad_0: [u8; 0x4A8], // 0x0
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
        pub m_flOldPlayerViewOffsetZ: [u8; 0x1C], // 0x144
        pub m_hTriggerSoundscapeList: [u8; 0x18], // 0x160
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
    pub struct CFilterAttributeInt {
        pub pad_0: [u8; 0x4E0], // 0x0
        pub m_sAttributeName: [u8; 0x8], // 0x4E0
    }
    #[repr(C)]
    pub struct CKeepUpright {
        pub pad_0: [u8; 0x4B0], // 0x0
        pub m_worldGoalAxis: [u8; 0xC], // 0x4B0
        pub m_localTestAxis: [u8; 0xC], // 0x4BC
        pub m_pController: [u8; 0x8], // 0x4C8
        pub m_nameAttach: [u8; 0x8], // 0x4D0
        pub m_attachedObject: [u8; 0x4], // 0x4D8
        pub m_angularLimit: [u8; 0x4], // 0x4DC
        pub m_bActive: [u8; 0x1], // 0x4E0
        pub m_bDampAllRotation: [u8; 0x7], // 0x4E1
    }
    #[repr(C)]
    pub struct CPointTemplate {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_iszWorldName: [u8; 0x8], // 0x4A8
        pub m_iszSource2EntityLumpName: [u8; 0x8], // 0x4B0
        pub m_iszEntityFilterName: [u8; 0x8], // 0x4B8
        pub m_flTimeoutInterval: [u8; 0x4], // 0x4C0
        pub m_bAsynchronouslySpawnEntities: [u8; 0x4], // 0x4C4
        pub m_clientOnlyEntityBehavior: [u8; 0x4], // 0x4C8
        pub m_ownerSpawnGroupType: [u8; 0x4], // 0x4CC
        pub m_createdSpawnGroupHandles: [u8; 0x18], // 0x4D0
        pub m_SpawnedEntityHandles: [u8; 0x18], // 0x4E8
        pub m_ScriptSpawnCallback: [u8; 0x8], // 0x500
        pub m_ScriptCallbackScope: [u8; 0x8], // 0x508
        pub m_OnEntitySpawned: [u8; 0x30], // 0x510
    }
    #[repr(C)]
    pub struct CEnvVolumetricFogController {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_flScattering: [u8; 0x4], // 0x4A8
        pub m_TintColor: [u8; 0x4], // 0x4AC
        pub m_flAnisotropy: [u8; 0x4], // 0x4B0
        pub m_flFadeSpeed: [u8; 0x4], // 0x4B4
        pub m_flDrawDistance: [u8; 0x4], // 0x4B8
        pub m_flFadeInStart: [u8; 0x4], // 0x4BC
        pub m_flFadeInEnd: [u8; 0x4], // 0x4C0
        pub m_flIndirectStrength: [u8; 0x4], // 0x4C4
        pub m_nVolumeDepth: [u8; 0x4], // 0x4C8
        pub m_fFirstVolumeSliceThickness: [u8; 0x4], // 0x4CC
        pub m_nIndirectTextureDimX: [u8; 0x4], // 0x4D0
        pub m_nIndirectTextureDimY: [u8; 0x4], // 0x4D4
        pub m_nIndirectTextureDimZ: [u8; 0x4], // 0x4D8
        pub m_vBoxMins: [u8; 0xC], // 0x4DC
        pub m_vBoxMaxs: [u8; 0xC], // 0x4E8
        pub m_bActive: [u8; 0x4], // 0x4F4
        pub m_flStartAnisoTime: [u8; 0x4], // 0x4F8
        pub m_flStartScatterTime: [u8; 0x4], // 0x4FC
        pub m_flStartDrawDistanceTime: [u8; 0x4], // 0x500
        pub m_flStartAnisotropy: [u8; 0x4], // 0x504
        pub m_flStartScattering: [u8; 0x4], // 0x508
        pub m_flStartDrawDistance: [u8; 0x4], // 0x50C
        pub m_flDefaultAnisotropy: [u8; 0x4], // 0x510
        pub m_flDefaultScattering: [u8; 0x4], // 0x514
        pub m_flDefaultDrawDistance: [u8; 0x4], // 0x518
        pub m_bStartDisabled: [u8; 0x1], // 0x51C
        pub m_bEnableIndirect: [u8; 0x1], // 0x51D
        pub m_bIsMaster: [u8; 0x2], // 0x51E
        pub m_hFogIndirectTexture: [u8; 0x8], // 0x520
        pub m_nForceRefreshCount: [u8; 0x4], // 0x528
        pub m_fNoiseSpeed: [u8; 0x4], // 0x52C
        pub m_fNoiseStrength: [u8; 0x4], // 0x530
        pub m_vNoiseScale: [u8; 0xC], // 0x534
        pub m_fWindSpeed: [u8; 0x4], // 0x540
        pub m_vWindDirection: [u8; 0xC], // 0x544
        pub m_bFirstTime: [u8; 0x8], // 0x550
    }
    #[repr(C)]
    pub struct CBot {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_pController: [u8; 0x8], // 0x10
        pub m_pPlayer: [u8; 0x8], // 0x18
        pub m_bHasSpawned: [u8; 0x4], // 0x20
        pub m_id: [u8; 0x9C], // 0x24
        pub m_isRunning: [u8; 0x1], // 0xC0
        pub m_isCrouching: [u8; 0x3], // 0xC1
        pub m_forwardSpeed: [u8; 0x4], // 0xC4
        pub m_leftSpeed: [u8; 0x4], // 0xC8
        pub m_verticalSpeed: [u8; 0x4], // 0xCC
        pub m_buttonFlags: [u8; 0x8], // 0xD0
        pub m_jumpTimestamp: [u8; 0x4], // 0xD8
        pub m_viewForward: [u8; 0x1C], // 0xDC
        pub m_postureStackIndex: [u8; 0x8], // 0xF8
    }
    #[repr(C)]
    pub struct CPulseCell_Step_SetAnimGraphParam {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_ParamName: [u8; 0x8], // 0x48
    }
    #[repr(C)]
    pub struct CPlayer_FlashlightServices {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CCSPlayerController {
        pub pad_0: [u8; 0x7E8], // 0x0
        pub m_pInGameMoneyServices: [u8; 0x8], // 0x7E8
        pub m_pInventoryServices: [u8; 0x8], // 0x7F0
        pub m_pActionTrackingServices: [u8; 0x8], // 0x7F8
        pub m_pDamageServices: [u8; 0x8], // 0x800
        pub m_iPing: [u8; 0x4], // 0x808
        pub m_bHasCommunicationAbuseMute: [u8; 0x4], // 0x80C
        pub m_uiCommunicationMuteFlags: [u8; 0x8], // 0x810
        pub m_szCrosshairCodes: [u8; 0x8], // 0x818
        pub m_iPendingTeamNum: [u8; 0x4], // 0x820
        pub m_flForceTeamTime: [u8; 0x4], // 0x824
        pub m_iCompTeammateColor: [u8; 0x4], // 0x828
        pub m_bEverPlayedOnTeam: [u8; 0x1], // 0x82C
        pub m_bAttemptedToGetColor: [u8; 0x3], // 0x82D
        pub m_iTeammatePreferredColor: [u8; 0x4], // 0x830
        pub m_bTeamChanged: [u8; 0x1], // 0x834
        pub m_bInSwitchTeam: [u8; 0x1], // 0x835
        pub m_bHasSeenJoinGame: [u8; 0x1], // 0x836
        pub m_bJustBecameSpectator: [u8; 0x1], // 0x837
        pub m_bSwitchTeamsOnNextRoundReset: [u8; 0x1], // 0x838
        pub m_bRemoveAllItemsOnNextRoundReset: [u8; 0x3], // 0x839
        pub m_flLastJoinTeamTime: [u8; 0x4], // 0x83C
        pub m_szClan: [u8; 0x8], // 0x840
        pub m_unClanId32bit: [u8; 0x4], // 0x848
        pub m_iCoachingTeam: [u8; 0x4], // 0x84C
        pub m_nPlayerDominated: [u8; 0x8], // 0x850
        pub m_nPlayerDominatingMe: [u8; 0x8], // 0x858
        pub m_iCompetitiveRanking: [u8; 0x4], // 0x860
        pub m_iCompetitiveWins: [u8; 0x4], // 0x864
        pub m_iCompetitiveRankType: [u8; 0x4], // 0x868
        pub m_iCompetitiveRankingPredicted_Win: [u8; 0x4], // 0x86C
        pub m_iCompetitiveRankingPredicted_Loss: [u8; 0x4], // 0x870
        pub m_iCompetitiveRankingPredicted_Tie: [u8; 0x4], // 0x874
        pub m_nEndMatchNextMapVote: [u8; 0x4], // 0x878
        pub m_unActiveQuestId: [u8; 0x4], // 0x87C
        pub m_rtActiveMissionPeriod: [u8; 0x4], // 0x880
        pub m_nQuestProgressReason: [u8; 0x4], // 0x884
        pub m_unPlayerTvControlFlags: [u8; 0x30], // 0x888
        pub m_iDraftIndex: [u8; 0x4], // 0x8B8
        pub m_msQueuedModeDisconnectionTimestamp: [u8; 0x4], // 0x8BC
        pub m_uiAbandonRecordedReason: [u8; 0x4], // 0x8C0
        pub m_eNetworkDisconnectionReason: [u8; 0x4], // 0x8C4
        pub m_bCannotBeKicked: [u8; 0x1], // 0x8C8
        pub m_bEverFullyConnected: [u8; 0x1], // 0x8C9
        pub m_bAbandonAllowsSurrender: [u8; 0x1], // 0x8CA
        pub m_bAbandonOffersInstantSurrender: [u8; 0x1], // 0x8CB
        pub m_bDisconnection1MinWarningPrinted: [u8; 0x1], // 0x8CC
        pub m_bScoreReported: [u8; 0x3], // 0x8CD
        pub m_nDisconnectionTick: [u8; 0x10], // 0x8D0
        pub m_bControllingBot: [u8; 0x1], // 0x8E0
        pub m_bHasControlledBotThisRound: [u8; 0x1], // 0x8E1
        pub m_bHasBeenControlledByPlayerThisRound: [u8; 0x2], // 0x8E2
        pub m_nBotsControlledThisRound: [u8; 0x4], // 0x8E4
        pub m_bCanControlObservedBot: [u8; 0x4], // 0x8E8
        pub m_hPlayerPawn: [u8; 0x4], // 0x8EC
        pub m_hObserverPawn: [u8; 0x4], // 0x8F0
        pub m_DesiredObserverMode: [u8; 0x4], // 0x8F4
        pub m_hDesiredObserverTarget: [u8; 0x4], // 0x8F8
        pub m_bPawnIsAlive: [u8; 0x4], // 0x8FC
        pub m_iPawnHealth: [u8; 0x4], // 0x900
        pub m_iPawnArmor: [u8; 0x4], // 0x904
        pub m_bPawnHasDefuser: [u8; 0x1], // 0x908
        pub m_bPawnHasHelmet: [u8; 0x1], // 0x909
        pub m_nPawnCharacterDefIndex: [u8; 0x2], // 0x90A
        pub m_iPawnLifetimeStart: [u8; 0x4], // 0x90C
        pub m_iPawnLifetimeEnd: [u8; 0x4], // 0x910
        pub m_iPawnBotDifficulty: [u8; 0x4], // 0x914
        pub m_hOriginalControllerOfCurrentPawn: [u8; 0x4], // 0x918
        pub m_iScore: [u8; 0x4], // 0x91C
        pub m_iRoundScore: [u8; 0x4], // 0x920
        pub m_iRoundsWon: [u8; 0x4], // 0x924
        pub m_recentKillQueue: [u8; 0x8], // 0x928
        pub m_nFirstKill: [u8; 0x1], // 0x930
        pub m_nKillCount: [u8; 0x1], // 0x931
        pub m_bMvpNoMusic: [u8; 0x2], // 0x932
        pub m_eMvpReason: [u8; 0x4], // 0x934
        pub m_iMusicKitID: [u8; 0x4], // 0x938
        pub m_iMusicKitMVPs: [u8; 0x4], // 0x93C
        pub m_iMVPs: [u8; 0x4], // 0x940
        pub m_nUpdateCounter: [u8; 0x4], // 0x944
        pub m_flSmoothedPing: [u8; 0x8], // 0x948
        pub m_lastHeldVoteTimer: [u8; 0x18], // 0x950
        pub m_bShowHints: [u8; 0x4], // 0x968
        pub m_iNextTimeCheck: [u8; 0x4], // 0x96C
        pub m_bJustDidTeamKill: [u8; 0x1], // 0x970
        pub m_bPunishForTeamKill: [u8; 0x1], // 0x971
        pub m_bGaveTeamDamageWarning: [u8; 0x1], // 0x972
        pub m_bGaveTeamDamageWarningThisRound: [u8; 0x5], // 0x973
        pub m_dblLastReceivedPacketPlatFloatTime: [u8; 0x8], // 0x978
        pub m_LastTeamDamageWarningTime: [u8; 0x4], // 0x980
        pub m_LastTimePlayerWasDisconnectedForPawnsRemove: [u8; 0x4], // 0x984
        pub m_nSuspiciousHitCount: [u8; 0x4], // 0x988
        pub m_nNonSuspiciousHitStreak: [u8; 0xAD], // 0x98C
        pub m_bFireBulletsSeedSynchronized: [u8; 0x7F], // 0xA39
    }
    #[repr(C)]
    pub struct CPhysLength {
        pub pad_0: [u8; 0x508], // 0x0
        pub m_offset: [u8; 0x18], // 0x508
        pub m_vecAttach: [u8; 0xC], // 0x520
        pub m_addLength: [u8; 0x4], // 0x52C
        pub m_minLength: [u8; 0x4], // 0x530
        pub m_totalLength: [u8; 0x4], // 0x534
    }
    #[repr(C)]
    pub struct CTeam {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_aPlayerControllers: [u8; 0x18], // 0x4A8
        pub m_aPlayers: [u8; 0x18], // 0x4C0
        pub m_iScore: [u8; 0x4], // 0x4D8
        pub m_szTeamname: [u8; 0x84], // 0x4DC
    }
    #[repr(C)]
    pub struct CLogicNPCCounterAABB {
        pub pad_0: [u8; 0x728], // 0x0
        pub m_vDistanceOuterMins: [u8; 0xC], // 0x728
        pub m_vDistanceOuterMaxs: [u8; 0xC], // 0x734
        pub m_vOuterMins: [u8; 0xC], // 0x740
        pub m_vOuterMaxs: [u8; 0xC], // 0x74C
    }
    #[repr(C)]
    pub struct CPulseCell_Outflow_CycleOrdered__InstanceState_t {
        pub m_nNextIndex: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CChicken {
        pub pad_0: [u8; 0xCB0], // 0x0
        pub m_AttributeManager: [u8; 0x438], // 0xCB0
        pub m_updateTimer: [u8; 0x18], // 0x10E8
        pub m_stuckAnchor: [u8; 0x10], // 0x1100
        pub m_collisionStuckTimer: [u8; 0x18], // 0x1110
        pub m_isOnGround: [u8; 0x4], // 0x1128
        pub m_vFallVelocity: [u8; 0xC], // 0x112C
        pub m_desiredActivity: [u8; 0x4], // 0x1138
        pub m_currentActivity: [u8; 0x4], // 0x113C
        pub m_activityTimer: [u8; 0x18], // 0x1140
        pub m_turnRate: [u8; 0x4], // 0x1158
        pub m_fleeFrom: [u8; 0x4], // 0x115C
        pub m_moveRateThrottleTimer: [u8; 0x18], // 0x1160
        pub m_startleTimer: [u8; 0x18], // 0x1178
        pub m_vocalizeTimer: [u8; 0x18], // 0x1190
        pub m_leader: [u8; 0x4], // 0x11A8
        pub m_owner: [u8; 0x14], // 0x11AC
        pub m_reuseTimer: [u8; 0x18], // 0x11C0
        pub m_jumpTimer: [u8; 0x18], // 0x11D8
        pub m_flLastJumpTime: [u8; 0x2010], // 0x11F0
        pub m_repathTimer: [u8; 0x98], // 0x3200
        pub m_vecPathGoal: [u8; 0xC], // 0x3298
        pub m_flActiveFollowStartTime: [u8; 0x4], // 0x32A4
        pub m_followMinuteTimer: [u8; 0x20], // 0x32A8
        pub m_BlockDirectionTimer: [u8; 0x1A], // 0x32C8
        pub m_bSpawnDyingParticles: [u8; 0xE], // 0x32E2
    }
    #[repr(C)]
    pub struct CPhysicsPropRespawnable {
        pub pad_0: [u8; 0xD10], // 0x0
        pub m_vOriginalSpawnOrigin: [u8; 0xC], // 0xD10
        pub m_vOriginalSpawnAngles: [u8; 0xC], // 0xD1C
        pub m_vOriginalMins: [u8; 0xC], // 0xD28
        pub m_vOriginalMaxs: [u8; 0xC], // 0xD34
        pub m_flRespawnDuration: [u8; 0x10], // 0xD40
    }
    #[repr(C)]
    pub struct CEnvBeam {
        pub pad_0: [u8; 0x8F0], // 0x0
        pub m_active: [u8; 0x8], // 0x8F0
        pub m_spriteTexture: [u8; 0x8], // 0x8F8
        pub m_iszStartEntity: [u8; 0x8], // 0x900
        pub m_iszEndEntity: [u8; 0x8], // 0x908
        pub m_life: [u8; 0x4], // 0x910
        pub m_boltWidth: [u8; 0x4], // 0x914
        pub m_noiseAmplitude: [u8; 0x4], // 0x918
        pub m_speed: [u8; 0x4], // 0x91C
        pub m_restrike: [u8; 0x8], // 0x920
        pub m_iszSpriteName: [u8; 0x8], // 0x928
        pub m_frameStart: [u8; 0x4], // 0x930
        pub m_vEndPointWorld: [u8; 0xC], // 0x934
        pub m_vEndPointRelative: [u8; 0xC], // 0x940
        pub m_radius: [u8; 0x4], // 0x94C
        pub m_TouchType: [u8; 0x8], // 0x950
        pub m_iFilterName: [u8; 0x8], // 0x958
        pub m_hFilter: [u8; 0x8], // 0x960
        pub m_iszDecal: [u8; 0x8], // 0x968
        pub m_OnTouchedByEntity: [u8; 0x18], // 0x970
    }
    #[repr(C)]
    pub struct CLightSpotEntity {
        pub pad_0: [u8; 0x858], // 0x0
    }
    #[repr(C)]
    pub struct CCSObservableElement {
        pub pad_0: [u8; 0x4C0], // 0x0
        pub m_iszObservableModelEntity: [u8; 0x8], // 0x4C0
        pub m_hObservableModelEntity: [u8; 0x4], // 0x4C8
        pub m_hObservableModelEntity2: [u8; 0x4], // 0x4CC
        pub m_nTeamFilter: [u8; 0x8], // 0x4D0
    }
    #[repr(C)]
    pub struct CWeaponSawedoff {
        pub pad_0: [u8; 0x1280], // 0x0
    }
    #[repr(C)]
    pub struct CTonemapTrigger {
        pub pad_0: [u8; 0x9C8], // 0x0
        pub m_tonemapControllerName: [u8; 0x8], // 0x9C8
        pub m_hTonemapController: [u8; 0x8], // 0x9D0
    }
    #[repr(C)]
    pub struct CEnvShake {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_limitToEntity: [u8; 0x8], // 0x4A8
        pub m_Amplitude: [u8; 0x4], // 0x4B0
        pub m_Frequency: [u8; 0x4], // 0x4B4
        pub m_Duration: [u8; 0x4], // 0x4B8
        pub m_Radius: [u8; 0x4], // 0x4BC
        pub m_stopTime: [u8; 0x4], // 0x4C0
        pub m_nextShake: [u8; 0x4], // 0x4C4
        pub m_currentAmp: [u8; 0x4], // 0x4C8
        pub m_maxForce: [u8; 0xC], // 0x4CC
        pub m_pShakeController: [u8; 0x8], // 0x4D8
        pub m_shakeCallback: [u8; 0x18], // 0x4E0
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
        pub m_bMadeFootstepNoise: [u8; 0x4], // 0x684
        pub m_iFootsteps: [u8; 0x4], // 0x688
        pub m_fStashGrenadeParameterWhen: [u8; 0x4], // 0x68C
        pub m_bUseFrictionStashedSpeed: [u8; 0x4], // 0x690
        pub m_flUseFrictionStashedSpeedUntilFrac: [u8; 0x4], // 0x694
        pub m_flFrictionStashedSpeed: [u8; 0x4], // 0x698
        pub m_flStamina: [u8; 0x4], // 0x69C
        pub m_flHeightAtJumpStart: [u8; 0x4], // 0x6A0
        pub m_flMaxJumpHeightThisJump: [u8; 0x4], // 0x6A4
        pub m_flMaxJumpHeightLastJump: [u8; 0x4], // 0x6A8
        pub m_flStaminaAtJumpStart: [u8; 0x4], // 0x6AC
        pub m_flVelMulAtJumpStart: [u8; 0x4], // 0x6B0
        pub m_flAccumulatedJumpError: [u8; 0x4], // 0x6B4
        pub m_LegacyJump: [u8; 0x18], // 0x6B8
        pub m_ModernJump: [u8; 0x38], // 0x6D0
        pub m_nLastJumpTick: [u8; 0x4], // 0x708
        pub m_flLastJumpFrac: [u8; 0x4], // 0x70C
        pub m_flLastJumpVelocityZ: [u8; 0x4], // 0x710
        pub m_bJumpApexPending: [u8; 0x4], // 0x714
        pub m_flTicksSinceLastSurfingDetected: [u8; 0x90], // 0x718
        pub m_vecWalkWishVel: [u8; 0x828], // 0x7A8
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
    pub struct CTestPulseIO__EntityNameStringArgs_t {
        pub nameA: [u8; 0x8], // 0x0
        pub strValueB: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct CFuncMoverRouter {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_nMoverIndex: [u8; 0x4], // 0x4A8
        pub m_bRouteToAllMovers: [u8; 0x4], // 0x4AC
        pub m_hPathMover: [u8; 0x8], // 0x4B0
        pub m_iszPathMoverName: [u8; 0x8], // 0x4B8
    }
    #[repr(C)]
    pub struct CTriggerCallback {
        pub pad_0: [u8; 0x9D0], // 0x0
    }
    #[repr(C)]
    pub struct CSoundOpvarSetAutoRoomEntity {
        pub pad_0: [u8; 0x640], // 0x0
        pub m_traceResults: [u8; 0x18], // 0x640
        pub m_doorwayPairs: [u8; 0x18], // 0x658
        pub m_flSize: [u8; 0x4], // 0x670
        pub m_flHeightTolerance: [u8; 0x4], // 0x674
        pub m_flSizeSqr: [u8; 0x8], // 0x678
    }
    #[repr(C)]
    pub struct CPulseCell_Outflow_ListenForEntityOutput {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_OnFired: [u8; 0x48], // 0xD8
        pub m_strEntityOutput: [u8; 0x8], // 0x120
        pub m_bListenUntilCanceled: [u8; 0x8], // 0x128
    }
    #[repr(C)]
    pub struct CPushable {
        pub pad_0: [u8; 0x928], // 0x0
    }
    #[repr(C)]
    pub struct CRotatorTarget {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CPhysicsEntitySolver {
        pub pad_0: [u8; 0x4C0], // 0x0
        pub m_hMovingEntity: [u8; 0x4], // 0x4C0
        pub m_hPhysicsBlocker: [u8; 0x4], // 0x4C4
        pub m_separationDuration: [u8; 0x4], // 0x4C8
        pub m_cancelTime: [u8; 0x4], // 0x4CC
    }
    #[repr(C)]
    pub struct CLogicCollisionPair {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_nameAttach1: [u8; 0x8], // 0x4A8
        pub m_nameAttach2: [u8; 0x8], // 0x4B0
        pub m_includeHierarchy: [u8; 0x1], // 0x4B8
        pub m_supportMultipleEntitiesWithSameName: [u8; 0x1], // 0x4B9
        pub m_disabled: [u8; 0x1], // 0x4BA
        pub m_succeeded: [u8; 0x1], // 0x4BB
        pub m_allowMissing: [u8; 0x4], // 0x4BC
    }
    #[repr(C)]
    pub struct CTestEffect {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_iLoop: [u8; 0x4], // 0x4A8
        pub m_iBeam: [u8; 0x4], // 0x4AC
        pub m_pBeam: [u8; 0x60], // 0x4B0
        pub m_flBeamTime: [u8; 0x60], // 0x510
        pub m_flStartTime: [u8; 0x8], // 0x570
    }
    #[repr(C)]
    pub struct CPulseCell_Outflow_ScriptedSequence__CursorState_t {
        pub m_scriptedSequence: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CPropDoorRotating {
        pub pad_0: [u8; 0xE90], // 0x0
        pub m_vecAxis: [u8; 0xC], // 0xE90
        pub m_flDistance: [u8; 0x4], // 0xE9C
        pub m_eSpawnPosition: [u8; 0x4], // 0xEA0
        pub m_eOpenDirection: [u8; 0x4], // 0xEA4
        pub m_eCurrentOpenDirection: [u8; 0x4], // 0xEA8
        pub m_eDefaultCheckDirection: [u8; 0x4], // 0xEAC
        pub m_flAjarAngle: [u8; 0x4], // 0xEB0
        pub m_angRotationAjarDeprecated: [u8; 0xC], // 0xEB4
        pub m_angRotationClosed: [u8; 0xC], // 0xEC0
        pub m_angRotationOpenForward: [u8; 0xC], // 0xECC
        pub m_angRotationOpenBack: [u8; 0xC], // 0xED8
        pub m_angGoal: [u8; 0xC], // 0xEE4
        pub m_vecForwardBoundsMin: [u8; 0xC], // 0xEF0
        pub m_vecForwardBoundsMax: [u8; 0xC], // 0xEFC
        pub m_vecBackBoundsMin: [u8; 0xC], // 0xF08
        pub m_vecBackBoundsMax: [u8; 0xC], // 0xF14
        pub m_bAjarDoorShouldntAlwaysOpen: [u8; 0x4], // 0xF20
        pub m_hEntityBlocker: [u8; 0xC], // 0xF24
    }
    #[repr(C)]
    pub struct CEnvParticleGlow {
        pub pad_0: [u8; 0xDD8], // 0x0
        pub m_flAlphaScale: [u8; 0x4], // 0xDD8
        pub m_flRadiusScale: [u8; 0x4], // 0xDDC
        pub m_flSelfIllumScale: [u8; 0x4], // 0xDE0
        pub m_ColorTint: [u8; 0x4], // 0xDE4
        pub m_hTextureOverride: [u8; 0x8], // 0xDE8
    }
    #[repr(C)]
    pub struct CMathRemap {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_flInMin: [u8; 0x4], // 0x4A8
        pub m_flInMax: [u8; 0x4], // 0x4AC
        pub m_flOut1: [u8; 0x4], // 0x4B0
        pub m_flOut2: [u8; 0x4], // 0x4B4
        pub m_flOldInValue: [u8; 0x4], // 0x4B8
        pub m_bEnabled: [u8; 0x4], // 0x4BC
        pub m_OutValue: [u8; 0x20], // 0x4C0
        pub m_OnRoseAboveMin: [u8; 0x18], // 0x4E0
        pub m_OnRoseAboveMax: [u8; 0x18], // 0x4F8
        pub m_OnFellBelowMin: [u8; 0x18], // 0x510
        pub m_OnFellBelowMax: [u8; 0x18], // 0x528
    }
    #[repr(C)]
    pub struct CSkyCameraVolumeTarget {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_nSkyboxScale: [u8; 0x8], // 0x4A8
        pub m_hSkyMaterial: [u8; 0x8], // 0x4B0
    }
    #[repr(C)]
    pub struct CSoundOpvarSetOBBWindEntity {
        pub pad_0: [u8; 0x550], // 0x0
        pub m_vMins: [u8; 0xC], // 0x550
        pub m_vMaxs: [u8; 0xC], // 0x55C
        pub m_vDistanceMins: [u8; 0xC], // 0x568
        pub m_vDistanceMaxs: [u8; 0xC], // 0x574
        pub m_flWindMin: [u8; 0x4], // 0x580
        pub m_flWindMax: [u8; 0x4], // 0x584
        pub m_flWindMapMin: [u8; 0x4], // 0x588
        pub m_flWindMapMax: [u8; 0x4], // 0x58C
    }
    #[repr(C)]
    pub struct PhysicsRagdollPose_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_RelativeTransforms: [u8; 0x18], // 0x8
        pub m_hOwner: [u8; 0x4], // 0x20
        pub m_bSetFromDebugHistory: [u8; 0x4], // 0x24
    }
    #[repr(C)]
    pub struct CPulseCell_ApplyDynamicAttributeBase__CursorState_t {
        pub m_hEntity: [u8; 0x8], // 0x0
        pub m_szAttributeKey: [u8; 0x8], // 0x8
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
    pub struct CScriptTriggerOnce {
        pub pad_0: [u8; 0x9E0], // 0x0
        pub m_vExtent: [u8; 0x10], // 0x9E0
    }
    #[repr(C)]
    pub struct CLightOrthoEntity {
        pub pad_0: [u8; 0x858], // 0x0
    }
    #[repr(C)]
    pub struct CInfoInstructorHintHostageRescueZone {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_LimitCount__InstanceState_t {
        pub m_nCurrentCount: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CTriggerTeleport {
        pub pad_0: [u8; 0x9C8], // 0x0
        pub m_iLandmark: [u8; 0x8], // 0x9C8
        pub m_bUseLandmarkAngles: [u8; 0x1], // 0x9D0
        pub m_bMirrorPlayer: [u8; 0x1], // 0x9D1
        pub m_bCheckDestIfClearForPlayer: [u8; 0x6], // 0x9D2
    }
    #[repr(C)]
    pub struct CFuncWall {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_nState: [u8; 0x8], // 0x850
    }
    #[repr(C)]
    pub struct CBtActionAim {
        pub pad_0: [u8; 0x68], // 0x0
        pub m_szSensorInputKey: [u8; 0x18], // 0x68
        pub m_szAimReadyKey: [u8; 0x8], // 0x80
        pub m_flZoomCooldownTimestamp: [u8; 0x4], // 0x88
        pub m_bDoneAiming: [u8; 0x4], // 0x8C
        pub m_flLerpStartTime: [u8; 0x4], // 0x90
        pub m_flNextLookTargetLerpTime: [u8; 0x4], // 0x94
        pub m_flPenaltyReductionRatio: [u8; 0x4], // 0x98
        pub m_NextLookTarget: [u8; 0xC], // 0x9C
        pub m_AimTimer: [u8; 0x18], // 0xA8
        pub m_SniperHoldTimer: [u8; 0x18], // 0xC0
        pub m_FocusIntervalTimer: [u8; 0x18], // 0xD8
        pub m_bAcquired: [u8; 0x8], // 0xF0
    }
    #[repr(C)]
    pub struct CCSGO_TeamPreviewCharacterPosition {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_nVariant: [u8; 0x4], // 0x4A8
        pub m_nRandom: [u8; 0x4], // 0x4AC
        pub m_nOrdinal: [u8; 0x8], // 0x4B0
        pub m_sWeaponName: [u8; 0x8], // 0x4B8
        pub m_xuid: [u8; 0x8], // 0x4C0
        pub m_agentItem: [u8; 0x3E8], // 0x4C8
        pub m_glovesItem: [u8; 0x3E8], // 0x8B0
        pub m_weaponItem: [u8; 0x3E8], // 0xC98
        pub m_petItem: [u8; 0x3E8], // 0x1080
    }
    #[repr(C)]
    pub struct CGameRulesProxy {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CInfoLadderDismount {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CMessage {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_iszMessage: [u8; 0x8], // 0x4A8
        pub m_MessageVolume: [u8; 0x4], // 0x4B0
        pub m_MessageAttenuation: [u8; 0x4], // 0x4B4
        pub m_Radius: [u8; 0x8], // 0x4B8
        pub m_sNoise: [u8; 0x8], // 0x4C0
        pub m_OnShowMessage: [u8; 0x18], // 0x4C8
    }
    #[repr(C)]
    pub struct CPointVelocitySensor {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_hTargetEntity: [u8; 0x4], // 0x4A8
        pub m_vecAxis: [u8; 0xC], // 0x4AC
        pub m_bEnabled: [u8; 0x4], // 0x4B8
        pub m_fPrevVelocity: [u8; 0x4], // 0x4BC
        pub m_flAvgInterval: [u8; 0x8], // 0x4C0
        pub m_Velocity: [u8; 0x20], // 0x4C8
    }
    #[repr(C)]
    pub struct CCS2PawnGraphController {
        pub pad_0: [u8; 0x5C0], // 0x0
        pub m_bIsDefusing: [u8; 0x18], // 0x5C0
        pub m_moveType: [u8; 0x18], // 0x5D8
        pub m_moveDirectionID: [u8; 0x18], // 0x5F0
        pub m_flMoveSpeedX: [u8; 0x18], // 0x608
        pub m_flMoveSpeedY: [u8; 0x18], // 0x620
        pub m_flMoveSpeedHorizontal: [u8; 0x18], // 0x638
        pub m_flPreviousMoveSpeedHorizontal: [u8; 0x18], // 0x650
        pub m_flCrouchAmount: [u8; 0x18], // 0x668
        pub m_bIsWalking: [u8; 0x18], // 0x680
        pub m_flWeaponDropAmount: [u8; 0x18], // 0x698
        pub m_groundAction: [u8; 0x18], // 0x6B0
        pub m_groundActionDirectionID: [u8; 0x18], // 0x6C8
        pub m_flGroundTurnAngleOrVelocity: [u8; 0x18], // 0x6E0
        pub m_flLadderCycle: [u8; 0x18], // 0x6F8
        pub m_flLadderYaw: [u8; 0x18], // 0x710
        pub m_flLadderYawBackwards: [u8; 0x18], // 0x728
        pub m_airAction: [u8; 0x18], // 0x740
        pub m_flAirHeightAboveGround: [u8; 0x18], // 0x758
        pub m_leftFootTarget: [u8; 0x18], // 0x770
        pub m_rightFootTarget: [u8; 0x18], // 0x788
        pub m_flFlashedAmount: [u8; 0x18], // 0x7A0
        pub m_flAimPitchAngle: [u8; 0x18], // 0x7B8
        pub m_flAimYawAngle: [u8; 0x18], // 0x7D0
        pub m_flinchHead: [u8; 0x18], // 0x7E8
        pub m_flinchHeadRestart: [u8; 0x18], // 0x800
        pub m_flinchBody: [u8; 0x18], // 0x818
        pub m_flinchBodyRestart: [u8; 0x18], // 0x830
        pub m_flinchIsOnFire: [u8; 0x18], // 0x848
    }
    #[repr(C)]
    pub struct EngineCountdownTimer {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_duration: [u8; 0x4], // 0x8
        pub m_timestamp: [u8; 0x4], // 0xC
        pub m_timescale: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CScriptTriggerMultiple {
        pub pad_0: [u8; 0x9E0], // 0x0
        pub m_vExtent: [u8; 0x10], // 0x9E0
    }
    #[repr(C)]
    pub struct CHostage {
        pub pad_0: [u8; 0xB38], // 0x0
        pub m_OnHostageBeginGrab: [u8; 0x18], // 0xB38
        pub m_OnFirstPickedUp: [u8; 0x18], // 0xB50
        pub m_OnDroppedNotRescued: [u8; 0x18], // 0xB68
        pub m_OnRescued: [u8; 0x18], // 0xB80
        pub m_entitySpottedState: [u8; 0x18], // 0xB98
        pub m_nSpotRules: [u8; 0x4], // 0xBB0
        pub m_uiHostageSpawnExclusionGroupMask: [u8; 0x4], // 0xBB4
        pub m_nHostageSpawnRandomFactor: [u8; 0x4], // 0xBB8
        pub m_bRemove: [u8; 0x4], // 0xBBC
        pub m_vel: [u8; 0xC], // 0xBC0
        pub m_isRescued: [u8; 0x1], // 0xBCC
        pub m_jumpedThisFrame: [u8; 0x3], // 0xBCD
        pub m_nHostageState: [u8; 0x4], // 0xBD0
        pub m_leader: [u8; 0x4], // 0xBD4
        pub m_lastLeader: [u8; 0x8], // 0xBD8
        pub m_reuseTimer: [u8; 0x18], // 0xBE0
        pub m_hasBeenUsed: [u8; 0x4], // 0xBF8
        pub m_accel: [u8; 0xC], // 0xBFC
        pub m_isRunning: [u8; 0x1], // 0xC08
        pub m_isCrouching: [u8; 0x7], // 0xC09
        pub m_jumpTimer: [u8; 0x18], // 0xC10
        pub m_isWaitingForLeader: [u8; 0x2010], // 0xC28
        pub m_repathTimer: [u8; 0x18], // 0x2C38
        pub m_inhibitDoorTimer: [u8; 0x90], // 0x2C50
        pub m_inhibitObstacleAvoidanceTimer: [u8; 0x20], // 0x2CE0
        pub m_wiggleTimer: [u8; 0x1C], // 0x2D00
        pub m_isAdjusted: [u8; 0x1], // 0x2D1C
        pub m_bHandsHaveBeenCut: [u8; 0x3], // 0x2D1D
        pub m_hHostageGrabber: [u8; 0x4], // 0x2D20
        pub m_fLastGrabTime: [u8; 0x4], // 0x2D24
        pub m_flGrabStartTime: [u8; 0x4], // 0x2D28
        pub m_vecPositionWhenStartedDroppingToGround: [u8; 0xC], // 0x2D2C
        pub m_vecGrabbedPos: [u8; 0xC], // 0x2D38
        pub m_flRescueStartTime: [u8; 0x4], // 0x2D44
        pub m_flGrabSuccessTime: [u8; 0x4], // 0x2D48
        pub m_flDropStartTime: [u8; 0x4], // 0x2D4C
        pub m_nApproachRewardPayouts: [u8; 0x4], // 0x2D50
        pub m_nPickupEventCount: [u8; 0x4], // 0x2D54
        pub m_vecSpawnGroundPos: [u8; 0x38], // 0x2D58
        pub m_vecHostageResetPosition: [u8; 0x10], // 0x2D90
    }
    #[repr(C)]
    pub struct CEnvSpark {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_flDelay: [u8; 0x4], // 0x4A8
        pub m_nMagnitude: [u8; 0x4], // 0x4AC
        pub m_nTrailLength: [u8; 0x4], // 0x4B0
        pub m_nType: [u8; 0x4], // 0x4B4
        pub m_OnSpark: [u8; 0x18], // 0x4B8
    }
    #[repr(C)]
    pub struct CCSPlayerController_DamageServices {
        pub pad_0: [u8; 0x40], // 0x0
        pub m_nSendUpdate: [u8; 0x8], // 0x40
        pub m_DamageList: [u8; 0x88], // 0x48
    }
    #[repr(C)]
    pub struct CEnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume {
        pub pad_0: [u8; 0x680], // 0x0
    }
    #[repr(C)]
    pub struct CBaseModelEntity__OnDamageLevelChangedArgs_t {
        pub nHitGroup: [u8; 0x4], // 0x0
        pub nDamageLevel: [u8; 0x4], // 0x4
        pub nDamageLevelsRemaining: [u8; 0x4], // 0x8
        pub nPrevDamageLevel: [u8; 0x4], // 0xC
    }
    #[repr(C)]
    pub struct CFilterLOS {
        pub pad_0: [u8; 0x4E0], // 0x0
    }
    #[repr(C)]
    pub struct CPointOrient {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_iszSpawnTargetName: [u8; 0x8], // 0x4A8
        pub m_hTarget: [u8; 0x4], // 0x4B0
        pub m_bActive: [u8; 0x4], // 0x4B4
        pub m_nGoalDirection: [u8; 0x4], // 0x4B8
        pub m_nConstraint: [u8; 0x4], // 0x4BC
        pub m_flMaxTurnRate: [u8; 0x4], // 0x4C0
        pub m_flLastGameTime: [u8; 0x4], // 0x4C4
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
    pub struct CWeaponP250 {
        pub pad_0: [u8; 0x12A0], // 0x0
    }
    #[repr(C)]
    pub struct CDestructiblePartsComponent {
        pub __m_pChainEntity: [u8; 0x48], // 0x0
        pub m_vecDamageTakenByHitGroup: [u8; 0x18], // 0x48
        pub m_hOwner: [u8; 0x8], // 0x60
        pub m_pAnimGraphDestructibleGraphController: [u8; 0x8], // 0x68
    }
    #[repr(C)]
    pub struct CChangeLevel {
        pub pad_0: [u8; 0x9C8], // 0x0
        pub m_sMapName: [u8; 0x8], // 0x9C8
        pub m_sLandmarkName: [u8; 0x8], // 0x9D0
        pub m_OnChangeLevel: [u8; 0x18], // 0x9D8
        pub m_bTouched: [u8; 0x1], // 0x9F0
        pub m_bNoTouch: [u8; 0x1], // 0x9F1
        pub m_bNewChapter: [u8; 0x1], // 0x9F2
        pub m_bOnChangeLevelFired: [u8; 0x5], // 0x9F3
    }
    #[repr(C)]
    pub struct CBaseButton {
        pub pad_0: [u8; 0x8D0], // 0x0
        pub m_angMoveEntitySpace: [u8; 0xC], // 0x8D0
        pub m_fStayPushed: [u8; 0x1], // 0x8DC
        pub m_fRotating: [u8; 0x3], // 0x8DD
        pub m_ls: [u8; 0x20], // 0x8E0
        pub m_sUseSound: [u8; 0x8], // 0x900
        pub m_sLockedSound: [u8; 0x8], // 0x908
        pub m_sUnlockedSound: [u8; 0x8], // 0x910
        pub m_sOverrideAnticipationName: [u8; 0x8], // 0x918
        pub m_bLocked: [u8; 0x1], // 0x920
        pub m_bDisabled: [u8; 0x3], // 0x921
        pub m_flSpeed: [u8; 0x4], // 0x924
        pub m_flUseLockedTime: [u8; 0x4], // 0x928
        pub m_bSolidBsp: [u8; 0x4], // 0x92C
        pub m_OnDamaged: [u8; 0x18], // 0x930
        pub m_OnPressed: [u8; 0x18], // 0x948
        pub m_OnUseLocked: [u8; 0x18], // 0x960
        pub m_OnIn: [u8; 0x18], // 0x978
        pub m_OnOut: [u8; 0x18], // 0x990
        pub m_nState: [u8; 0x4], // 0x9A8
        pub m_hConstraint: [u8; 0x4], // 0x9AC
        pub m_hConstraintParent: [u8; 0x4], // 0x9B0
        pub m_bForceNpcExclude: [u8; 0x4], // 0x9B4
        pub m_sGlowEntity: [u8; 0x8], // 0x9B8
        pub m_glowEntity: [u8; 0x4], // 0x9C0
        pub m_usable: [u8; 0x4], // 0x9C4
        pub m_szDisplayText: [u8; 0x8], // 0x9C8
    }
    #[repr(C)]
    pub struct CPulseCell_SoundEventStart {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_Type: [u8; 0x8], // 0x48
    }
    #[repr(C)]
    pub struct CPulseCell_Step_DebugLog {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CItem_Healthshot {
        pub pad_0: [u8; 0x1290], // 0x0
    }
    #[repr(C)]
    pub struct CBaseGrenade {
        pub pad_0: [u8; 0xA48], // 0x0
        pub m_bDamageDetonating: [u8; 0x8], // 0xA48
        pub m_OnPlayerPickup: [u8; 0x18], // 0xA50
        pub m_OnExplode: [u8; 0x18], // 0xA68
        pub m_bHasWarnedAI: [u8; 0x1], // 0xA80
        pub m_bIsSmokeGrenade: [u8; 0x1], // 0xA81
        pub m_bIsLive: [u8; 0x2], // 0xA82
        pub m_DmgRadius: [u8; 0x4], // 0xA84
        pub m_flDetonateTime: [u8; 0x4], // 0xA88
        pub m_flWarnAITime: [u8; 0x4], // 0xA8C
        pub m_flDamage: [u8; 0x8], // 0xA90
        pub m_iszBounceSound: [u8; 0x8], // 0xA98
        pub m_ExplosionSound: [u8; 0x8], // 0xAA0
        pub m_hThrower: [u8; 0x18], // 0xAA8
        pub m_flNextAttack: [u8; 0x4], // 0xAC0
        pub m_hOriginalThrower: [u8; 0xC], // 0xAC4
    }
    #[repr(C)]
    pub struct CColorCorrectionVolume {
        pub pad_0: [u8; 0x9C8], // 0x0
        pub m_MaxWeight: [u8; 0x4], // 0x9C8
        pub m_FadeDuration: [u8; 0x4], // 0x9CC
        pub m_Weight: [u8; 0x4], // 0x9D0
        pub m_lookupFilename: [u8; 0x200], // 0x9D4
        pub m_LastEnterWeight: [u8; 0x4], // 0xBD4
        pub m_LastEnterTime: [u8; 0x4], // 0xBD8
        pub m_LastExitWeight: [u8; 0x4], // 0xBDC
        pub m_LastExitTime: [u8; 0x8], // 0xBE0
    }
    #[repr(C)]
    pub struct CCSPlayerController_ActionTrackingServices {
        pub pad_0: [u8; 0x40], // 0x0
        pub m_perRoundStats: [u8; 0x88], // 0x40
        pub m_matchStats: [u8; 0xC0], // 0xC8
        pub m_iNumRoundKills: [u8; 0x4], // 0x188
        pub m_iNumRoundKillsHeadshots: [u8; 0x4], // 0x18C
        pub m_flTotalRoundDamageDealt: [u8; 0x2D0], // 0x190
    }
    #[repr(C)]
    pub struct CBodyComponentBaseAnimGraph {
        pub pad_0: [u8; 0x4E0], // 0x0
        pub m_animationController: [u8; 0x650], // 0x4E0
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
    pub struct CFogVolume {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_fogName: [u8; 0x8], // 0x850
        pub m_postProcessName: [u8; 0x8], // 0x858
        pub m_colorCorrectionName: [u8; 0x10], // 0x860
        pub m_bDisabled: [u8; 0x1], // 0x870
        pub m_bInFogVolumesList: [u8; 0x7], // 0x871
    }
    #[repr(C)]
    pub struct CFuncRotating {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_OnStopped: [u8; 0x18], // 0x850
        pub m_OnStarted: [u8; 0x18], // 0x868
        pub m_OnReachedStart: [u8; 0x18], // 0x880
        pub m_localRotationVector: [u8; 0xC], // 0x898
        pub m_flSpeed: [u8; 0x4], // 0x8A4
        pub m_flFanFriction: [u8; 0x4], // 0x8A8
        pub m_flAttenuation: [u8; 0x4], // 0x8AC
        pub m_flVolume: [u8; 0x4], // 0x8B0
        pub m_flTargetSpeed: [u8; 0x4], // 0x8B4
        pub m_flMaxSpeed: [u8; 0x4], // 0x8B8
        pub m_flBlockDamage: [u8; 0x4], // 0x8BC
        pub m_NoiseRunning: [u8; 0x8], // 0x8C0
        pub m_bReversed: [u8; 0x1], // 0x8C8
        pub m_bAccelDecel: [u8; 0x17], // 0x8C9
        pub m_prevLocalAngles: [u8; 0xC], // 0x8E0
        pub m_angStart: [u8; 0xC], // 0x8EC
        pub m_bStopAtStartPos: [u8; 0x4], // 0x8F8
        pub m_vecClientOrigin: [u8; 0xC], // 0x8FC
        pub m_vecClientAngles: [u8; 0x10], // 0x908
    }
    #[repr(C)]
    pub struct CTimerEntity {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_OnTimer: [u8; 0x18], // 0x4A8
        pub m_OnTimerHigh: [u8; 0x18], // 0x4C0
        pub m_OnTimerLow: [u8; 0x18], // 0x4D8
        pub m_iDisabled: [u8; 0x4], // 0x4F0
        pub m_flInitialDelay: [u8; 0x4], // 0x4F4
        pub m_flRefireTime: [u8; 0x4], // 0x4F8
        pub m_bUpDownState: [u8; 0x4], // 0x4FC
        pub m_iUseRandomTime: [u8; 0x4], // 0x500
        pub m_bPauseAfterFiring: [u8; 0x4], // 0x504
        pub m_flLowerRandomBound: [u8; 0x4], // 0x508
        pub m_flUpperRandomBound: [u8; 0x4], // 0x50C
        pub m_flRemainingTime: [u8; 0x4], // 0x510
        pub m_bPaused: [u8; 0x4], // 0x514
    }
    #[repr(C)]
    pub struct CBtActionMoveTo {
        pub pad_0: [u8; 0x60], // 0x0
        pub m_szDestinationInputKey: [u8; 0x8], // 0x60
        pub m_szHidingSpotInputKey: [u8; 0x8], // 0x68
        pub m_szThreatInputKey: [u8; 0x8], // 0x70
        pub m_vecDestination: [u8; 0xC], // 0x78
        pub m_bAutoLookAdjust: [u8; 0x1], // 0x84
        pub m_bComputePath: [u8; 0x3], // 0x85
        pub m_flDamagingAreasPenaltyCost: [u8; 0x8], // 0x88
        pub m_CheckApproximateCornersTimer: [u8; 0x18], // 0x90
        pub m_CheckHighPriorityItem: [u8; 0x18], // 0xA8
        pub m_RepathTimer: [u8; 0x18], // 0xC0
        pub m_flArrivalEpsilon: [u8; 0x4], // 0xD8
        pub m_flAdditionalArrivalEpsilon2D: [u8; 0x4], // 0xDC
        pub m_flHidingSpotCheckDistanceThreshold: [u8; 0x4], // 0xE0
        pub m_flNearestAreaDistanceThreshold: [u8; 0x4], // 0xE4
    }
    #[repr(C)]
    pub struct CPlayer_MovementServices_Humanoid {
        pub pad_0: [u8; 0x258], // 0x0
        pub m_flStepSoundTime: [u8; 0x4], // 0x258
        pub m_flFallVelocity: [u8; 0x4], // 0x25C
        pub m_groundNormal: [u8; 0xC], // 0x260
        pub m_flSurfaceFriction: [u8; 0x4], // 0x26C
        pub m_surfaceProps: [u8; 0x10], // 0x270
        pub m_nStepside: [u8; 0x4], // 0x280
        pub m_vecSmoothedVelocity: [u8; 0xC], // 0x284
    }
    #[repr(C)]
    pub struct CPulseCell_IsRequirementValid__Criteria_t {
        pub m_bIsValid: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct CWeaponG3SG1 {
        pub pad_0: [u8; 0x12A0], // 0x0
    }
    #[repr(C)]
    pub struct CTriggerOnce {
        pub pad_0: [u8; 0x9E0], // 0x0
    }
    #[repr(C)]
    pub struct CSMatchStats_t {
        pub pad_0: [u8; 0x68], // 0x0
        pub m_iEnemy5Ks: [u8; 0x4], // 0x68
        pub m_iEnemy4Ks: [u8; 0x4], // 0x6C
        pub m_iEnemy3Ks: [u8; 0x4], // 0x70
        pub m_iEnemyKnifeKills: [u8; 0x4], // 0x74
        pub m_iEnemyTaserKills: [u8; 0x4], // 0x78
        pub m_iEnemy2Ks: [u8; 0x4], // 0x7C
        pub m_iUtility_Count: [u8; 0x4], // 0x80
        pub m_iUtility_Successes: [u8; 0x4], // 0x84
        pub m_iUtility_Enemies: [u8; 0x4], // 0x88
        pub m_iFlash_Count: [u8; 0x4], // 0x8C
        pub m_iFlash_Successes: [u8; 0x4], // 0x90
        pub m_flHealthPointsRemovedTotal: [u8; 0x4], // 0x94
        pub m_flHealthPointsDealtTotal: [u8; 0x4], // 0x98
        pub m_nShotsFiredTotal: [u8; 0x4], // 0x9C
        pub m_nShotsOnTargetTotal: [u8; 0x4], // 0xA0
        pub m_i1v1Count: [u8; 0x4], // 0xA4
        pub m_i1v1Wins: [u8; 0x4], // 0xA8
        pub m_i1v2Count: [u8; 0x4], // 0xAC
        pub m_i1v2Wins: [u8; 0x4], // 0xB0
        pub m_iEntryCount: [u8; 0x4], // 0xB4
        pub m_iEntryWins: [u8; 0x8], // 0xB8
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
    pub struct CFuncMonitor {
        pub pad_0: [u8; 0x870], // 0x0
        pub m_targetCamera: [u8; 0x8], // 0x870
        pub m_nResolutionEnum: [u8; 0x4], // 0x878
        pub m_bRenderShadows: [u8; 0x1], // 0x87C
        pub m_bUseUniqueColorTarget: [u8; 0x3], // 0x87D
        pub m_brushModelName: [u8; 0x8], // 0x880
        pub m_hTargetCamera: [u8; 0x4], // 0x888
        pub m_bEnabled: [u8; 0x1], // 0x88C
        pub m_bDraw3DSkybox: [u8; 0x1], // 0x88D
        pub m_bStartEnabled: [u8; 0x2], // 0x88E
    }
    #[repr(C)]
    pub struct CInfoVisibilityBox {
        pub pad_0: [u8; 0x4AC], // 0x0
        pub m_nMode: [u8; 0x4], // 0x4AC
        pub m_vBoxSize: [u8; 0xC], // 0x4B0
        pub m_bEnabled: [u8; 0x4], // 0x4BC
    }
    #[repr(C)]
    pub struct CGunTarget {
        pub pad_0: [u8; 0x8D0], // 0x0
        pub m_flSpeed: [u8; 0x4], // 0x8D0
        pub m_on: [u8; 0x4], // 0x8D4
        pub m_hTargetEnt: [u8; 0x8], // 0x8D8
        pub m_OnDeath: [u8; 0x18], // 0x8E0
    }
    #[repr(C)]
    pub struct CSoundEventConeEntity {
        pub pad_0: [u8; 0x568], // 0x0
        pub m_flEmitterAngle: [u8; 0x4], // 0x568
        pub m_flSweetSpotAngle: [u8; 0x4], // 0x56C
        pub m_flAttenMin: [u8; 0x4], // 0x570
        pub m_flAttenMax: [u8; 0x4], // 0x574
        pub m_iszParameterName: [u8; 0x8], // 0x578
    }
    #[repr(C)]
    pub struct CSoundOpvarSetOBBEntity {
        pub pad_0: [u8; 0x6A8], // 0x0
    }
    #[repr(C)]
    pub struct CDecoyProjectile {
        pub pad_0: [u8; 0xB58], // 0x0
        pub m_nDecoyShotTick: [u8; 0x4], // 0xB58
        pub m_shotsRemaining: [u8; 0x4], // 0xB5C
        pub m_fExpireTime: [u8; 0x10], // 0xB60
        pub m_decoyWeaponDefIndex: [u8; 0x10], // 0xB70
    }
    #[repr(C)]
    pub struct CPrecipitationBlocker {
        pub pad_0: [u8; 0x850], // 0x0
    }
    #[repr(C)]
    pub struct CSoundOpvarSetPathCornerEntity {
        pub pad_0: [u8; 0x658], // 0x0
        pub m_bUseParentedPath: [u8; 0x4], // 0x658
        pub m_flDistMinSqr: [u8; 0x4], // 0x65C
        pub m_flDistMaxSqr: [u8; 0x8], // 0x660
        pub m_iszPathCornerEntityName: [u8; 0x8], // 0x668
    }
    #[repr(C)]
    pub struct CPointClientCommand {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CCSGO_RushIntroTerroristPosition {
        pub pad_0: [u8; 0x1468], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_ApplyParent__CursorState_t {
        pub m_hParentEntity: [u8; 0x4], // 0x0
        pub m_hChildEntity: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct CHostageRescueZone {
        pub pad_0: [u8; 0x9E8], // 0x0
    }
    #[repr(C)]
    pub struct CWorld {
        pub pad_0: [u8; 0x850], // 0x0
    }
    #[repr(C)]
    pub struct CPathMoverEntitySpawner {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_eTemplateChoiceStrategy: [u8; 0x8], // 0x4A8
        pub m_szSpawnTemplates: [u8; 0x20], // 0x4B0
        pub m_szSpawnTemplateParams: [u8; 0x10], // 0x4D0
        pub m_szSpawnTemplateCount: [u8; 0x10], // 0x4E0
        pub m_nSpawnIndex: [u8; 0x4], // 0x4F0
        pub m_hPathMover: [u8; 0x4], // 0x4F4
        pub m_flSpawnFrequencySeconds: [u8; 0x4], // 0x4F8
        pub m_flSpawnFrequencyDistToNearestMover: [u8; 0x4], // 0x4FC
        pub m_mapSpawnedMoverTemplates: [u8; 0x20], // 0x500
        pub m_nMaxActive: [u8; 0x4], // 0x520
        pub m_nSpawnNum: [u8; 0x4], // 0x524
        pub m_flLastSpawnTime: [u8; 0x4], // 0x528
        pub m_bEnabled: [u8; 0x1], // 0x52C
        pub m_bDestroyMoverOnArrivedAtEnd: [u8; 0x3], // 0x52D
        pub m_vecQueuedRemovals: [u8; 0x18], // 0x530
        pub m_OnTemplateSpawned: [u8; 0x18], // 0x548
        pub m_OnTemplateGroupSpawned: [u8; 0x18], // 0x560
        pub m_iszPathMoverName: [u8; 0x8], // 0x578
        pub m_bPrepopulateOnSpawn: [u8; 0x8], // 0x580
        pub m_iszPathNodeStartName: [u8; 0x14], // 0x588
        pub m_vMoverSpawnPos: [u8; 0xC], // 0x59C
        pub m_bRunningDebugThink: [u8; 0x8], // 0x5A8
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
        pub m_nRootBoneOffsetResetSerialNumber: [u8; 0x1], // 0xF4
        pub m_bClientClothCreationSuppressed: [u8; 0xEB], // 0xF5
        pub m_nAnimStateNoInterpSerialNumber: [u8; 0x8], // 0x1E0
        pub m_MeshGroupMask: [u8; 0x50], // 0x1E8
        pub m_nBodyGroupChoices: [u8; 0x4A], // 0x238
        pub m_nIdealMotionType: [u8; 0x1], // 0x282
        pub m_nForceLOD: [u8; 0x1], // 0x283
        pub m_nClothUpdateFlags: [u8; 0xC], // 0x284
    }
    #[repr(C)]
    pub struct CBaseModelEntity__BodyGroupRequest_t {
        pub m_uRequestID: [u8; 0x4], // 0x0
        pub m_nGroupName: [u8; 0x4], // 0x4
        pub m_sChoiceName: [u8; 0x8], // 0x8
        pub m_nGroup: [u8; 0x4], // 0x10
        pub m_uChoice: [u8; 0x2], // 0x14
        pub m_uRefCount: [u8; 0x2], // 0x16
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
    pub struct CWeaponGlock {
        pub pad_0: [u8; 0x12A0], // 0x0
    }
    #[repr(C)]
    pub struct CHEGrenadeProjectile {
        pub pad_0: [u8; 0xB40], // 0x0
    }
    #[repr(C)]
    pub struct CTriggerGravity {
        pub pad_0: [u8; 0x9C8], // 0x0
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
    pub struct CWeaponGalilAR {
        pub pad_0: [u8; 0x12A0], // 0x0
    }
    #[repr(C)]
    pub struct CFilterMassGreater {
        pub pad_0: [u8; 0x4E0], // 0x0
        pub m_fFilterMass: [u8; 0x8], // 0x4E0
    }
    #[repr(C)]
    pub struct CWeaponMP7 {
        pub pad_0: [u8; 0x12A0], // 0x0
    }
    #[repr(C)]
    pub struct CCSWeaponBaseGun {
        pub pad_0: [u8; 0x1280], // 0x0
        pub m_zoomLevel: [u8; 0x4], // 0x1280
        pub m_iBurstShotsRemaining: [u8; 0xC], // 0x1284
        pub m_silencedModelIndex: [u8; 0x4], // 0x1290
        pub m_inPrecache: [u8; 0x1], // 0x1294
        pub m_bNeedsBoltAction: [u8; 0x3], // 0x1295
        pub m_nRevolverCylinderIdx: [u8; 0x4], // 0x1298
        pub m_bSkillReloadAvailable: [u8; 0x1], // 0x129C
        pub m_bSkillReloadLiftedReloadKey: [u8; 0x1], // 0x129D
        pub m_bSkillBoltInterruptAvailable: [u8; 0x1], // 0x129E
        pub m_bSkillBoltLiftedFireKey: [u8; 0x1], // 0x129F
    }
    #[repr(C)]
    pub struct CEnableMotionFixup {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CLogicActiveAutosave {
        pub pad_0: [u8; 0x4B8], // 0x0
        pub m_TriggerHitPoints: [u8; 0x4], // 0x4B8
        pub m_flTimeToTrigger: [u8; 0x4], // 0x4BC
        pub m_flStartTime: [u8; 0x4], // 0x4C0
        pub m_flDangerousTime: [u8; 0x4], // 0x4C4
    }
    #[repr(C)]
    pub struct CMathCounter {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_flMin: [u8; 0x4], // 0x4A8
        pub m_flMax: [u8; 0x4], // 0x4AC
        pub m_bHitMin: [u8; 0x1], // 0x4B0
        pub m_bHitMax: [u8; 0x1], // 0x4B1
        pub m_bDisabled: [u8; 0x6], // 0x4B2
        pub m_OutValue: [u8; 0x20], // 0x4B8
        pub m_OnGetValue: [u8; 0x20], // 0x4D8
        pub m_OnHitMin: [u8; 0x18], // 0x4F8
        pub m_OnHitMax: [u8; 0x18], // 0x510
        pub m_OnChangedFromMin: [u8; 0x18], // 0x528
        pub m_OnChangedFromMax: [u8; 0x18], // 0x540
    }
    #[repr(C)]
    pub struct CCSCustomPlayerCamera {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_hPawn: [u8; 0x4], // 0x4A8
        pub m_nCameraMode: [u8; 0x4], // 0x4AC
        pub m_hFollowEntity: [u8; 0x4], // 0x4B0
        pub m_bFollowEyes: [u8; 0x4], // 0x4B4
        pub m_vecFollowOffset: [u8; 0xC], // 0x4B8
        pub m_vecCameraOffset: [u8; 0xC], // 0x4C4
        pub m_bClipCameraOffset: [u8; 0x4], // 0x4D0
        pub m_flCameraOffsetReturnStrength: [u8; 0xC], // 0x4D4
    }
    #[repr(C)]
    pub struct CCSGameModeRules_ArmsRace {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_WeaponSequence: [u8; 0x58], // 0x30
    }
    #[repr(C)]
    pub struct CLogicPlayerProxyBase {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_PlayerHasAmmo: [u8; 0x18], // 0x4A8
        pub m_PlayerHasNoAmmo: [u8; 0x18], // 0x4C0
        pub m_PlayerDied: [u8; 0x18], // 0x4D8
        pub m_RequestedPlayerHealth: [u8; 0x20], // 0x4F0
        pub m_hPlayer: [u8; 0x8], // 0x510
    }
    #[repr(C)]
    pub struct CAttributeContainer {
        pub pad_0: [u8; 0x50], // 0x0
        pub m_Item: [u8; 0x3E8], // 0x50
    }
    #[repr(C)]
    pub struct CCSPlace {
        pub pad_0: [u8; 0x868], // 0x0
        pub m_name: [u8; 0x8], // 0x868
    }
    #[repr(C)]
    pub struct CPulseCell_ApplyParent {
        pub pad_0: [u8; 0xD8], // 0x0
    }
    #[repr(C)]
    pub struct PulseSelectorOutflowList_t {
        pub m_Outflows: [u8; 0x18], // 0x0
    }
    #[repr(C)]
    pub struct CFilterContext {
        pub pad_0: [u8; 0x4E0], // 0x0
        pub m_iFilterContext: [u8; 0x8], // 0x4E0
    }
    #[repr(C)]
    pub struct CLightEnvironmentEntity {
        pub pad_0: [u8; 0x858], // 0x0
    }
    #[repr(C)]
    pub struct CEnvDecal {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_hDecalMaterial: [u8; 0x8], // 0x850
        pub m_flWidth: [u8; 0x4], // 0x858
        pub m_flHeight: [u8; 0x4], // 0x85C
        pub m_flDepth: [u8; 0x4], // 0x860
        pub m_nRenderOrder: [u8; 0x4], // 0x864
        pub m_bProjectOnWorld: [u8; 0x1], // 0x868
        pub m_bProjectOnCharacters: [u8; 0x1], // 0x869
        pub m_bProjectOnWater: [u8; 0x2], // 0x86A
        pub m_flDepthSortBias: [u8; 0x4], // 0x86C
    }
    #[repr(C)]
    pub struct CEnvVolumetricFogVolume {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_bActive: [u8; 0x4], // 0x4A8
        pub m_vBoxMins: [u8; 0xC], // 0x4AC
        pub m_vBoxMaxs: [u8; 0xC], // 0x4B8
        pub m_bStartDisabled: [u8; 0x1], // 0x4C4
        pub m_bIndirectUseLPVs: [u8; 0x3], // 0x4C5
        pub m_flStrength: [u8; 0x4], // 0x4C8
        pub m_nFalloffShape: [u8; 0x4], // 0x4CC
        pub m_flFalloffExponent: [u8; 0x4], // 0x4D0
        pub m_flHeightFogDepth: [u8; 0x4], // 0x4D4
        pub m_fHeightFogEdgeWidth: [u8; 0x4], // 0x4D8
        pub m_fIndirectLightStrength: [u8; 0x4], // 0x4DC
        pub m_fSunLightStrength: [u8; 0x4], // 0x4E0
        pub m_fNoiseStrength: [u8; 0x4], // 0x4E4
        pub m_TintColor: [u8; 0x4], // 0x4E8
        pub m_bOverrideTintColor: [u8; 0x1], // 0x4EC
        pub m_bOverrideIndirectLightStrength: [u8; 0x1], // 0x4ED
        pub m_bOverrideSunLightStrength: [u8; 0x1], // 0x4EE
        pub m_bOverrideNoiseStrength: [u8; 0x1], // 0x4EF
    }
    #[repr(C)]
    pub struct CServerOnlyEntity {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_PlaySequence__CursorState_t {
        pub m_hTarget: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CBodyComponentSkeletonInstance {
        pub pad_0: [u8; 0x80], // 0x0
        pub m_skeletonInstance: [u8; 0x460], // 0x80
    }
    #[repr(C)]
    pub struct CItemGeneric {
        pub pad_0: [u8; 0xAF4], // 0x0
        pub m_bHasTriggerRadius: [u8; 0x1], // 0xAF4
        pub m_bHasPickupRadius: [u8; 0x3], // 0xAF5
        pub m_flPickupRadiusSqr: [u8; 0x4], // 0xAF8
        pub m_flTriggerRadiusSqr: [u8; 0x4], // 0xAFC
        pub m_flLastPickupCheck: [u8; 0x4], // 0xB00
        pub m_bPlayerCounterListenerAdded: [u8; 0x1], // 0xB04
        pub m_bPlayerInTriggerRadius: [u8; 0x3], // 0xB05
        pub m_hSpawnParticleEffect: [u8; 0x8], // 0xB08
        pub m_pAmbientSoundEffect: [u8; 0x8], // 0xB10
        pub m_bAutoStartAmbientSound: [u8; 0x8], // 0xB18
        pub m_pSpawnScriptFunction: [u8; 0x8], // 0xB20
        pub m_hPickupParticleEffect: [u8; 0x8], // 0xB28
        pub m_pPickupSoundEffect: [u8; 0x8], // 0xB30
        pub m_pPickupScriptFunction: [u8; 0x8], // 0xB38
        pub m_hTimeoutParticleEffect: [u8; 0x8], // 0xB40
        pub m_pTimeoutSoundEffect: [u8; 0x8], // 0xB48
        pub m_pTimeoutScriptFunction: [u8; 0x8], // 0xB50
        pub m_pPickupFilterName: [u8; 0x8], // 0xB58
        pub m_hPickupFilter: [u8; 0x8], // 0xB60
        pub m_OnPickup: [u8; 0x18], // 0xB68
        pub m_OnTimeout: [u8; 0x18], // 0xB80
        pub m_OnTriggerStartTouch: [u8; 0x18], // 0xB98
        pub m_OnTriggerTouch: [u8; 0x18], // 0xBB0
        pub m_OnTriggerEndTouch: [u8; 0x18], // 0xBC8
        pub m_pAllowPickupScriptFunction: [u8; 0x8], // 0xBE0
        pub m_flPickupRadius: [u8; 0x4], // 0xBE8
        pub m_flTriggerRadius: [u8; 0x4], // 0xBEC
        pub m_pTriggerSoundEffect: [u8; 0x8], // 0xBF0
        pub m_bGlowWhenInTrigger: [u8; 0x4], // 0xBF8
        pub m_glowColor: [u8; 0x4], // 0xBFC
        pub m_bUseable: [u8; 0x4], // 0xC00
        pub m_hTriggerHelper: [u8; 0xC], // 0xC04
    }
    #[repr(C)]
    pub struct CPointValueRemapper {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_bDisabled: [u8; 0x1], // 0x4A8
        pub m_bUpdateOnClient: [u8; 0x3], // 0x4A9
        pub m_nInputType: [u8; 0x4], // 0x4AC
        pub m_iszRemapLineStartName: [u8; 0x8], // 0x4B0
        pub m_iszRemapLineEndName: [u8; 0x8], // 0x4B8
        pub m_hRemapLineStart: [u8; 0x4], // 0x4C0
        pub m_hRemapLineEnd: [u8; 0x4], // 0x4C4
        pub m_flMaximumChangePerSecond: [u8; 0x4], // 0x4C8
        pub m_flDisengageDistance: [u8; 0x4], // 0x4CC
        pub m_flEngageDistance: [u8; 0x4], // 0x4D0
        pub m_bRequiresUseKey: [u8; 0x4], // 0x4D4
        pub m_nOutputType: [u8; 0x8], // 0x4D8
        pub m_iszOutputEntityName: [u8; 0x8], // 0x4E0
        pub m_iszOutputEntity2Name: [u8; 0x8], // 0x4E8
        pub m_iszOutputEntity3Name: [u8; 0x8], // 0x4F0
        pub m_iszOutputEntity4Name: [u8; 0x8], // 0x4F8
        pub m_hOutputEntities: [u8; 0x18], // 0x500
        pub m_nHapticsType: [u8; 0x4], // 0x518
        pub m_nMomentumType: [u8; 0x4], // 0x51C
        pub m_flMomentumModifier: [u8; 0x4], // 0x520
        pub m_flSnapValue: [u8; 0x4], // 0x524
        pub m_flCurrentMomentum: [u8; 0x4], // 0x528
        pub m_nRatchetType: [u8; 0x4], // 0x52C
        pub m_flRatchetOffset: [u8; 0x4], // 0x530
        pub m_flInputOffset: [u8; 0x4], // 0x534
        pub m_bEngaged: [u8; 0x1], // 0x538
        pub m_bFirstUpdate: [u8; 0x3], // 0x539
        pub m_flPreviousValue: [u8; 0x4], // 0x53C
        pub m_flPreviousUpdateTickTime: [u8; 0x4], // 0x540
        pub m_vecPreviousTestPoint: [u8; 0xC], // 0x544
        pub m_hUsingPlayer: [u8; 0x4], // 0x550
        pub m_flCustomOutputValue: [u8; 0x4], // 0x554
        pub m_iszSoundEngage: [u8; 0x8], // 0x558
        pub m_iszSoundDisengage: [u8; 0x8], // 0x560
        pub m_iszSoundReachedValueZero: [u8; 0x8], // 0x568
        pub m_iszSoundReachedValueOne: [u8; 0x8], // 0x570
        pub m_iszSoundMovingLoop: [u8; 0x20], // 0x578
        pub m_Position: [u8; 0x20], // 0x598
        pub m_PositionDelta: [u8; 0x20], // 0x5B8
        pub m_OnReachedValueZero: [u8; 0x18], // 0x5D8
        pub m_OnReachedValueOne: [u8; 0x18], // 0x5F0
        pub m_OnReachedValueCustom: [u8; 0x18], // 0x608
        pub m_OnEngage: [u8; 0x18], // 0x620
        pub m_OnDisengage: [u8; 0x18], // 0x638
    }
    #[repr(C)]
    pub struct CBtNodeConditionInactive {
        pub pad_0: [u8; 0x78], // 0x0
        pub m_flRoundStartThresholdSeconds: [u8; 0x4], // 0x78
        pub m_flSensorInactivityThresholdSeconds: [u8; 0x4], // 0x7C
        pub m_SensorInactivityTimer: [u8; 0x18], // 0x80
    }
    #[repr(C)]
    pub struct CCSGO_TeamIntroCounterTerroristPosition {
        pub pad_0: [u8; 0x1468], // 0x0
    }
    #[repr(C)]
    pub struct CRagdollProp {
        pub pad_0: [u8; 0xA50], // 0x0
        pub m_CPropDataComponent: [u8; 0x40], // 0xA50
        pub m_ragdoll: [u8; 0x50], // 0xA90
        pub m_bStartDisabled: [u8; 0x4], // 0xAE0
        pub m_massScale: [u8; 0x4], // 0xAE4
        pub m_buoyancyScale: [u8; 0x8], // 0xAE8
        pub m_ragEnabled: [u8; 0x18], // 0xAF0
        pub m_ragPos: [u8; 0x18], // 0xB08
        pub m_ragAngles: [u8; 0x18], // 0xB20
        pub m_lastUpdateTickCount: [u8; 0x4], // 0xB38
        pub m_allAsleep: [u8; 0x1], // 0xB3C
        pub m_bFirstCollisionAfterLaunch: [u8; 0x3], // 0xB3D
        pub m_nNavObstacleType: [u8; 0x4], // 0xB40
        pub m_bUpdateNavWhenMoving: [u8; 0x1], // 0xB44
        pub m_bForceNavObstacleCut: [u8; 0x1], // 0xB45
        pub m_bAttachedToReferenceFrame: [u8; 0x2], // 0xB46
        pub m_hDamageEntity: [u8; 0x4], // 0xB48
        pub m_hKiller: [u8; 0x4], // 0xB4C
        pub m_hPhysicsAttacker: [u8; 0x4], // 0xB50
        pub m_flLastPhysicsInfluenceTime: [u8; 0x4], // 0xB54
        pub m_flFadeOutStartTime: [u8; 0x4], // 0xB58
        pub m_flFadeTime: [u8; 0x4], // 0xB5C
        pub m_vecLastOrigin: [u8; 0xC], // 0xB60
        pub m_flAwakeTime: [u8; 0x4], // 0xB6C
        pub m_flLastOriginChangeTime: [u8; 0x8], // 0xB70
        pub m_strOriginClassName: [u8; 0x8], // 0xB78
        pub m_strSourceClassName: [u8; 0x8], // 0xB80
        pub m_bHasBeenPhysgunned: [u8; 0x1], // 0xB88
        pub m_bAllowStretch: [u8; 0x3], // 0xB89
        pub m_flBlendWeight: [u8; 0x4], // 0xB8C
        pub m_flDefaultFadeScale: [u8; 0x8], // 0xB90
        pub m_ragdollMins: [u8; 0x18], // 0xB98
        pub m_ragdollMaxs: [u8; 0x18], // 0xBB0
        pub m_bShouldDeleteActivationRecord: [u8; 0x18], // 0xBC8
        pub m_vecNavObstacles: [u8; 0x20], // 0xBE0
    }
    #[repr(C)]
    pub struct CScriptComponent {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_scriptClassName: [u8; 0x8], // 0x30
    }
    #[repr(C)]
    pub struct CFuncTrain {
        pub pad_0: [u8; 0x8F8], // 0x0
        pub m_hCurrentTarget: [u8; 0x4], // 0x8F8
        pub m_activated: [u8; 0x4], // 0x8FC
        pub m_hEnemy: [u8; 0x4], // 0x900
        pub m_flBlockDamage: [u8; 0x4], // 0x904
        pub m_flNextBlockTime: [u8; 0x8], // 0x908
        pub m_iszLastTarget: [u8; 0x8], // 0x910
        pub m_flSpeed: [u8; 0x8], // 0x918
    }
    #[repr(C)]
    pub struct CAI_ChangeHintGroup {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_iSearchType: [u8; 0x8], // 0x4A8
        pub m_strSearchName: [u8; 0x8], // 0x4B0
        pub m_strNewHintGroup: [u8; 0x8], // 0x4B8
        pub m_flRadius: [u8; 0x8], // 0x4C0
    }
    #[repr(C)]
    pub struct CCSPlayer_BuyServices {
        pub pad_0: [u8; 0xD0], // 0x0
        pub m_vecSellbackPurchaseEntries: [u8; 0x88], // 0xD0
    }
    #[repr(C)]
    pub struct CWeaponAug {
        pub pad_0: [u8; 0x12A0], // 0x0
    }
    #[repr(C)]
    pub struct CPhysHinge {
        pub pad_0: [u8; 0x510], // 0x0
        pub m_soundInfo: [u8; 0x98], // 0x510
        pub m_NotifyMinLimitReached: [u8; 0x18], // 0x5A8
        pub m_NotifyMaxLimitReached: [u8; 0x18], // 0x5C0
        pub m_bAtMinLimit: [u8; 0x1], // 0x5D8
        pub m_bAtMaxLimit: [u8; 0x3], // 0x5D9
        pub m_hinge: [u8; 0x40], // 0x5DC
        pub m_hingeFriction: [u8; 0x4], // 0x61C
        pub m_systemLoadScale: [u8; 0x4], // 0x620
        pub m_bIsAxisLocal: [u8; 0x4], // 0x624
        pub m_flMinRotation: [u8; 0x4], // 0x628
        pub m_flMaxRotation: [u8; 0x4], // 0x62C
        pub m_flInitialRotation: [u8; 0x4], // 0x630
        pub m_flMotorFrequency: [u8; 0x4], // 0x634
        pub m_flMotorDampingRatio: [u8; 0x4], // 0x638
        pub m_flAngleSpeed: [u8; 0x4], // 0x63C
        pub m_flAngleSpeedThreshold: [u8; 0x4], // 0x640
        pub m_flLimitsDebugVisRotation: [u8; 0x4], // 0x644
        pub m_OnStartMoving: [u8; 0x18], // 0x648
        pub m_OnStopMoving: [u8; 0x18], // 0x660
    }
    #[repr(C)]
    pub struct CBuyZone {
        pub pad_0: [u8; 0x9C8], // 0x0
        pub m_LegacyTeamNum: [u8; 0x8], // 0x9C8
    }
    #[repr(C)]
    pub struct CInfoChoreoAnchor {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_vecTargetEntries: [u8; 0x18], // 0x4A8
        pub m_vecTargetWarps: [u8; 0x18], // 0x4C0
    }
    #[repr(C)]
    pub struct CWeaponSSG08 {
        pub pad_0: [u8; 0x12A0], // 0x0
    }
    #[repr(C)]
    pub struct CInfoWorldLayer {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_pOutputOnEntitiesSpawned: [u8; 0x18], // 0x4A8
        pub m_worldName: [u8; 0x8], // 0x4C0
        pub m_layerName: [u8; 0x8], // 0x4C8
        pub m_bWorldLayerVisible: [u8; 0x1], // 0x4D0
        pub m_bEntitiesSpawned: [u8; 0x1], // 0x4D1
        pub m_bCreateAsChildSpawnGroup: [u8; 0x2], // 0x4D2
        pub m_hLayerSpawnGroup: [u8; 0x4], // 0x4D4
    }
    #[repr(C)]
    pub struct CBodyComponentBaseModelEntity {
        pub pad_0: [u8; 0x4E0], // 0x0
    }
    #[repr(C)]
    pub struct CLogicProximity {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CPointGiveAmmo {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_pActivator: [u8; 0x8], // 0x4A8
    }
    #[repr(C)]
    pub struct CCSGO_EndOfMatchLineupStart {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct FilterDamageType {
        pub pad_0: [u8; 0x4E0], // 0x0
        pub m_iDamageType: [u8; 0x8], // 0x4E0
    }
    #[repr(C)]
    pub struct CPointCamera {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_FOV: [u8; 0x4], // 0x4A8
        pub m_Resolution: [u8; 0x4], // 0x4AC
        pub m_bFogEnable: [u8; 0x4], // 0x4B0
        pub m_FogColor: [u8; 0x4], // 0x4B4
        pub m_flFogStart: [u8; 0x4], // 0x4B8
        pub m_flFogEnd: [u8; 0x4], // 0x4BC
        pub m_flFogMaxDensity: [u8; 0x4], // 0x4C0
        pub m_bActive: [u8; 0x1], // 0x4C4
        pub m_bUseScreenAspectRatio: [u8; 0x3], // 0x4C5
        pub m_flAspectRatio: [u8; 0x4], // 0x4C8
        pub m_bNoSky: [u8; 0x4], // 0x4CC
        pub m_fBrightness: [u8; 0x4], // 0x4D0
        pub m_flZFar: [u8; 0x4], // 0x4D4
        pub m_flZNear: [u8; 0x4], // 0x4D8
        pub m_bCanHLTVUse: [u8; 0x1], // 0x4DC
        pub m_bAlignWithParent: [u8; 0x1], // 0x4DD
        pub m_bDofEnabled: [u8; 0x2], // 0x4DE
        pub m_flDofNearBlurry: [u8; 0x4], // 0x4E0
        pub m_flDofNearCrisp: [u8; 0x4], // 0x4E4
        pub m_flDofFarCrisp: [u8; 0x4], // 0x4E8
        pub m_flDofFarBlurry: [u8; 0x4], // 0x4EC
        pub m_flDofTiltToGround: [u8; 0x4], // 0x4F0
        pub m_TargetFOV: [u8; 0x4], // 0x4F4
        pub m_DegreesPerSecond: [u8; 0x4], // 0x4F8
        pub m_bIsOn: [u8; 0x4], // 0x4FC
        pub m_pNext: [u8; 0x8], // 0x500
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
        pub pad_0: [u8; 0x4E0], // 0x0
        pub m_flRadius: [u8; 0x8], // 0x4E0
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
        pub m_reloadStage: [u8; 0x338], // 0x288
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
        pub m_iEffectName: [u8; 0x4], // 0x6C
    }
    #[repr(C)]
    pub struct CEntityDissolve {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_flFadeInStart: [u8; 0x4], // 0x850
        pub m_flFadeInLength: [u8; 0x4], // 0x854
        pub m_flFadeOutModelStart: [u8; 0x4], // 0x858
        pub m_flFadeOutModelLength: [u8; 0x4], // 0x85C
        pub m_flFadeOutStart: [u8; 0x4], // 0x860
        pub m_flFadeOutLength: [u8; 0x4], // 0x864
        pub m_flStartTime: [u8; 0x4], // 0x868
        pub m_nDissolveType: [u8; 0x4], // 0x86C
        pub m_vDissolverOrigin: [u8; 0xC], // 0x870
        pub m_nMagnitude: [u8; 0x4], // 0x87C
    }
    #[repr(C)]
    pub struct CCSGameRules {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_bFreezePeriod: [u8; 0x1], // 0xD8
        pub m_bWarmupPeriod: [u8; 0x3], // 0xD9
        pub m_fWarmupPeriodEnd: [u8; 0x4], // 0xDC
        pub m_fWarmupPeriodStart: [u8; 0x4], // 0xE0
        pub m_bTerroristTimeOutActive: [u8; 0x1], // 0xE4
        pub m_bCTTimeOutActive: [u8; 0x3], // 0xE5
        pub m_flTerroristTimeOutRemaining: [u8; 0x4], // 0xE8
        pub m_flCTTimeOutRemaining: [u8; 0x4], // 0xEC
        pub m_nTerroristTimeOuts: [u8; 0x4], // 0xF0
        pub m_nCTTimeOuts: [u8; 0x4], // 0xF4
        pub m_bTechnicalTimeOut: [u8; 0x1], // 0xF8
        pub m_bMatchWaitingForResume: [u8; 0x3], // 0xF9
        pub m_iFreezeTime: [u8; 0x4], // 0xFC
        pub m_iRoundTime: [u8; 0x4], // 0x100
        pub m_fMatchStartTime: [u8; 0x4], // 0x104
        pub m_fRoundStartTime: [u8; 0x4], // 0x108
        pub m_flRestartRoundTime: [u8; 0x4], // 0x10C
        pub m_bGameRestart: [u8; 0x4], // 0x110
        pub m_flGameStartTime: [u8; 0x4], // 0x114
        pub m_timeUntilNextPhaseStarts: [u8; 0x4], // 0x118
        pub m_gamePhase: [u8; 0x4], // 0x11C
        pub m_totalRoundsPlayed: [u8; 0x4], // 0x120
        pub m_nRoundsPlayedThisPhase: [u8; 0x4], // 0x124
        pub m_nOvertimePlaying: [u8; 0x4], // 0x128
        pub m_iHostagesRemaining: [u8; 0x4], // 0x12C
        pub m_bAnyHostageReached: [u8; 0x1], // 0x130
        pub m_bMapHasBombTarget: [u8; 0x1], // 0x131
        pub m_bMapHasRescueZone: [u8; 0x1], // 0x132
        pub m_bMapHasBuyZone: [u8; 0x1], // 0x133
        pub m_bIsQueuedMatchmaking: [u8; 0x4], // 0x134
        pub m_nQueuedMatchmakingMode: [u8; 0x4], // 0x138
        pub m_bIsValveDS: [u8; 0x1], // 0x13C
        pub m_bLogoMap: [u8; 0x1], // 0x13D
        pub m_bPlayAllStepSoundsOnServer: [u8; 0x2], // 0x13E
        pub m_iSpectatorSlotCount: [u8; 0x4], // 0x140
        pub m_MatchDevice: [u8; 0x4], // 0x144
        pub m_bHasMatchStarted: [u8; 0x4], // 0x148
        pub m_nNextMapInMapgroup: [u8; 0x4], // 0x14C
        pub m_szTournamentEventName: [u8; 0x200], // 0x150
        pub m_szTournamentEventStage: [u8; 0x200], // 0x350
        pub m_szMatchStatTxt: [u8; 0x200], // 0x550
        pub m_szTournamentPredictionsTxt: [u8; 0x200], // 0x750
        pub m_nTournamentPredictionsPct: [u8; 0x4], // 0x950
        pub m_flCMMItemDropRevealStartTime: [u8; 0x4], // 0x954
        pub m_flCMMItemDropRevealEndTime: [u8; 0x4], // 0x958
        pub m_bIsDroppingItems: [u8; 0x1], // 0x95C
        pub m_bIsQuestEligible: [u8; 0x1], // 0x95D
        pub m_bIsHltvActive: [u8; 0x1], // 0x95E
        pub m_bBombPlanted: [u8; 0x1], // 0x95F
        pub m_arrProhibitedItemIndices: [u8; 0xC8], // 0x960
        pub m_arrTournamentActiveCasterAccounts: [u8; 0x10], // 0xA28
        pub m_numBestOfMaps: [u8; 0x4], // 0xA38
        pub m_nHalloweenMaskListSeed: [u8; 0x4], // 0xA3C
        pub m_bBombDropped: [u8; 0x4], // 0xA40
        pub m_iRoundWinStatus: [u8; 0x4], // 0xA44
        pub m_eRoundWinReason: [u8; 0x4], // 0xA48
        pub m_bTCantBuy: [u8; 0x1], // 0xA4C
        pub m_bCTCantBuy: [u8; 0x3], // 0xA4D
        pub m_iMatchStats_RoundResults: [u8; 0x78], // 0xA50
        pub m_iMatchStats_PlayersAlive_CT: [u8; 0x78], // 0xAC8
        pub m_iMatchStats_PlayersAlive_T: [u8; 0x78], // 0xB40
        pub m_TeamRespawnWaveTimes: [u8; 0x80], // 0xBB8
        pub m_nActiveMutators: [u8; 0x4], // 0xC38
        pub m_flNextRespawnWave: [u8; 0x80], // 0xC3C
        pub m_vMinimapMins: [u8; 0xC], // 0xCBC
        pub m_vMinimapMaxs: [u8; 0xC], // 0xCC8
        pub m_MinimapVerticalSectionHeights: [u8; 0x24], // 0xCD4
        pub m_ullLocalMatchID: [u8; 0x8], // 0xCF8
        pub m_nEndMatchMapGroupVoteTypes: [u8; 0x28], // 0xD00
        pub m_nEndMatchMapGroupVoteOptions: [u8; 0x28], // 0xD28
        pub m_nEndMatchMapVoteWinner: [u8; 0x4], // 0xD50
        pub m_iNumConsecutiveCTLoses: [u8; 0x4], // 0xD54
        pub m_iNumConsecutiveTerroristLoses: [u8; 0x20], // 0xD58
        pub m_bHasHostageBeenTouched: [u8; 0x4], // 0xD78
        pub m_flIntermissionStartTime: [u8; 0x4], // 0xD7C
        pub m_flIntermissionEndTime: [u8; 0x4], // 0xD80
        pub m_bLevelInitialized: [u8; 0x4], // 0xD84
        pub m_iTotalRoundsPlayed: [u8; 0x4], // 0xD88
        pub m_iUnBalancedRounds: [u8; 0x4], // 0xD8C
        pub m_endMatchOnRoundReset: [u8; 0x1], // 0xD90
        pub m_endMatchOnThink: [u8; 0x3], // 0xD91
        pub m_iNumTerrorist: [u8; 0x4], // 0xD94
        pub m_iNumCT: [u8; 0x4], // 0xD98
        pub m_iNumSpawnableTerrorist: [u8; 0x4], // 0xD9C
        pub m_iNumSpawnableCT: [u8; 0x8], // 0xDA0
        pub m_arrSelectedHostageSpawnIndices: [u8; 0x18], // 0xDA8
        pub m_nSpawnPointsRandomSeed: [u8; 0x4], // 0xDC0
        pub m_bFirstConnected: [u8; 0x1], // 0xDC4
        pub m_bCompleteReset: [u8; 0x1], // 0xDC5
        pub m_bPickNewTeamsOnReset: [u8; 0x1], // 0xDC6
        pub m_bScrambleTeamsOnRestart: [u8; 0x1], // 0xDC7
        pub m_bSwapTeamsOnRestart: [u8; 0x8], // 0xDC8
        pub m_nEndMatchTiedVotes: [u8; 0x1C], // 0xDD0
        pub m_bNeedToAskPlayersForContinueVote: [u8; 0x4], // 0xDEC
        pub m_numQueuedMatchmakingAccounts: [u8; 0x4], // 0xDF0
        pub m_fAvgPlayerRank: [u8; 0x4], // 0xDF4
        pub m_pQueuedMatchmakingReservationString: [u8; 0x8], // 0xDF8
        pub m_numTotalTournamentDrops: [u8; 0x4], // 0xE00
        pub m_numSpectatorsCountMax: [u8; 0x4], // 0xE04
        pub m_numSpectatorsCountMaxTV: [u8; 0x4], // 0xE08
        pub m_numSpectatorsCountMaxLnk: [u8; 0xC], // 0xE0C
        pub m_bQueuedMatchmakingReportedRoundStatsPendingSend: [u8; 0x4], // 0xE18
        pub m_nCTsAliveAtFreezetimeEnd: [u8; 0x4], // 0xE1C
        pub m_nTerroristsAliveAtFreezetimeEnd: [u8; 0x4], // 0xE20
        pub m_bForceTeamChangeSilent: [u8; 0x1], // 0xE24
        pub m_bLoadingRoundBackupData: [u8; 0x33], // 0xE25
        pub m_nMatchInfoShowType: [u8; 0x4], // 0xE58
        pub m_flMatchInfoDecidedTime: [u8; 0x1C], // 0xE5C
        pub mTeamDMLastWinningTeamNumber: [u8; 0x4], // 0xE78
        pub mTeamDMLastThinkTime: [u8; 0x4], // 0xE7C
        pub m_flTeamDMLastAnnouncementTime: [u8; 0x4], // 0xE80
        pub m_iAccountTerrorist: [u8; 0x4], // 0xE84
        pub m_iAccountCT: [u8; 0x4], // 0xE88
        pub m_iSpawnPointCount_Terrorist: [u8; 0x4], // 0xE8C
        pub m_iSpawnPointCount_CT: [u8; 0x4], // 0xE90
        pub m_iMaxNumTerrorists: [u8; 0x4], // 0xE94
        pub m_iMaxNumCTs: [u8; 0x4], // 0xE98
        pub m_iLoserBonusMostRecentTeam: [u8; 0x4], // 0xE9C
        pub m_tmNextPeriodicThink: [u8; 0x4], // 0xEA0
        pub m_bVoiceWonMatchBragFired: [u8; 0x4], // 0xEA4
        pub m_fWarmupNextChatNoticeTime: [u8; 0x8], // 0xEA8
        pub m_iHostagesRescued: [u8; 0x4], // 0xEB0
        pub m_iHostagesTouched: [u8; 0x4], // 0xEB4
        pub m_flNextHostageAnnouncement: [u8; 0x4], // 0xEB8
        pub m_bNoTerroristsKilled: [u8; 0x1], // 0xEBC
        pub m_bNoCTsKilled: [u8; 0x1], // 0xEBD
        pub m_bNoEnemiesKilled: [u8; 0x1], // 0xEBE
        pub m_bCanDonateWeapons: [u8; 0x5], // 0xEBF
        pub m_firstKillTime: [u8; 0x8], // 0xEC4
        pub m_firstBloodTime: [u8; 0x1C], // 0xECC
        pub m_hostageWasInjured: [u8; 0x1], // 0xEE8
        pub m_hostageWasKilled: [u8; 0xF], // 0xEE9
        pub m_bVoteCalled: [u8; 0x1], // 0xEF8
        pub m_bServerVoteOnReset: [u8; 0x3], // 0xEF9
        pub m_flVoteCheckThrottle: [u8; 0x4], // 0xEFC
        pub m_bBuyTimeEnded: [u8; 0x4], // 0xF00
        pub m_nLastFreezeEndBeep: [u8; 0x4], // 0xF04
        pub m_bTargetBombed: [u8; 0x1], // 0xF08
        pub m_bBombDefused: [u8; 0x1], // 0xF09
        pub m_bMapHasBombZone: [u8; 0x4E], // 0xF0A
        pub m_vecMainCTSpawnPos: [u8; 0x10], // 0xF58
        pub m_CTSpawnPointsMasterList: [u8; 0x18], // 0xF68
        pub m_TerroristSpawnPointsMasterList: [u8; 0x18], // 0xF80
        pub m_bRespawningAllRespawnablePlayers: [u8; 0x4], // 0xF98
        pub m_iNextCTSpawnPoint: [u8; 0x4], // 0xF9C
        pub m_flCTSpawnPointUsedTime: [u8; 0x4], // 0xFA0
        pub m_iNextTerroristSpawnPoint: [u8; 0x4], // 0xFA4
        pub m_flTerroristSpawnPointUsedTime: [u8; 0x8], // 0xFA8
        pub m_CTSpawnPoints: [u8; 0x18], // 0xFB0
        pub m_TerroristSpawnPoints: [u8; 0x18], // 0xFC8
        pub m_bIsUnreservedGameServer: [u8; 0x4], // 0xFE0
        pub m_fAutobalanceDisplayTime: [u8; 0x3C], // 0xFE4
        pub m_bAllowWeaponSwitch: [u8; 0x1], // 0x1020
        pub m_bRoundTimeWarningTriggered: [u8; 0x3], // 0x1021
        pub m_phaseChangeAnnouncementTime: [u8; 0x4], // 0x1024
        pub m_fNextUpdateTeamClanNamesTime: [u8; 0x4], // 0x1028
        pub m_flLastThinkTime: [u8; 0x4], // 0x102C
        pub m_fAccumulatedRoundOffDamage: [u8; 0x4], // 0x1030
        pub m_nShorthandedBonusLastEvalRound: [u8; 0x4C], // 0x1034
        pub m_nMatchAbortedEarlyReason: [u8; 0x4], // 0x1080
        pub m_bHasTriggeredRoundStartMusic: [u8; 0x1], // 0x1084
        pub m_bSwitchingTeamsAtRoundReset: [u8; 0x1B], // 0x1085
        pub m_pGameModeRules: [u8; 0x8], // 0x10A0
        pub m_BtGlobalBlackboard: [u8; 0x98], // 0x10A8
        pub m_hPlayerResource: [u8; 0x8], // 0x1140
        pub m_RetakeRules: [u8; 0x1F0], // 0x1148
        pub m_arrTeamUniqueKillWeaponsMatch: [u8; 0x60], // 0x1338
        pub m_bTeamLastKillUsedUniqueWeaponMatch: [u8; 0x28], // 0x1398
        pub m_nMatchEndCount: [u8; 0x4], // 0x13C0
        pub m_nTTeamIntroVariant: [u8; 0x4], // 0x13C4
        pub m_nCTTeamIntroVariant: [u8; 0x4], // 0x13C8
        pub m_bTeamIntroPeriod: [u8; 0x4], // 0x13CC
        pub m_fTeamIntroPeriodEnd: [u8; 0x4], // 0x13D0
        pub m_bPlayedTeamIntroVO: [u8; 0x4], // 0x13D4
        pub m_iRoundEndWinnerTeam: [u8; 0x4], // 0x13D8
        pub m_eRoundEndReason: [u8; 0x4], // 0x13DC
        pub m_bRoundEndShowTimerDefend: [u8; 0x4], // 0x13E0
        pub m_iRoundEndTimerTime: [u8; 0x4], // 0x13E4
        pub m_sRoundEndFunFactToken: [u8; 0x8], // 0x13E8
        pub m_iRoundEndFunFactPlayerSlot: [u8; 0x4], // 0x13F0
        pub m_iRoundEndFunFactData1: [u8; 0x4], // 0x13F4
        pub m_iRoundEndFunFactData2: [u8; 0x4], // 0x13F8
        pub m_iRoundEndFunFactData3: [u8; 0x4], // 0x13FC
        pub m_sRoundEndMessage: [u8; 0x8], // 0x1400
        pub m_iRoundEndPlayerCount: [u8; 0x4], // 0x1408
        pub m_bRoundEndNoMusic: [u8; 0x4], // 0x140C
        pub m_iRoundEndLegacy: [u8; 0x4], // 0x1410
        pub m_nRoundEndCount: [u8; 0x4], // 0x1414
        pub m_iRoundStartRoundNumber: [u8; 0x4], // 0x1418
        pub m_nRoundStartCount: [u8; 0x400C], // 0x141C
        pub m_flLastPerfSampleTime: [u8; 0xC028], // 0x5428
    }
    #[repr(C)]
    pub struct CPulseCell_ApplyEntityFlags__CursorState_t {
        pub m_hEntity: [u8; 0x4], // 0x0
        pub m_uFlags: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct CPulseCell_Outflow_CycleShuffled {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_Outputs: [u8; 0x18], // 0x48
    }
    #[repr(C)]
    pub struct CBaseCSGrenadeProjectile {
        pub pad_0: [u8; 0xAD0], // 0x0
        pub m_vInitialPosition: [u8; 0xC], // 0xAD0
        pub m_vInitialVelocity: [u8; 0xC], // 0xADC
        pub m_nBounces: [u8; 0x8], // 0xAE8
        pub m_nExplodeEffectIndex: [u8; 0x8], // 0xAF0
        pub m_nExplodeEffectTickBegin: [u8; 0x4], // 0xAF8
        pub m_vecExplodeEffectOrigin: [u8; 0xC], // 0xAFC
        pub m_flSpawnTime: [u8; 0x4], // 0xB08
        pub m_unOGSExtraFlags: [u8; 0x1], // 0xB0C
        pub m_bDetonationRecorded: [u8; 0x1], // 0xB0D
        pub m_nItemIndex: [u8; 0x2], // 0xB0E
        pub m_vecOriginalSpawnLocation: [u8; 0xC], // 0xB10
        pub m_flLastBounceSoundTime: [u8; 0x4], // 0xB1C
        pub m_vecGrenadeSpin: [u8; 0xC], // 0xB20
        pub m_vecLastHitSurfaceNormal: [u8; 0xC], // 0xB2C
        pub m_nTicksAtZeroVelocity: [u8; 0x4], // 0xB38
        pub m_bHasEverHitEnemy: [u8; 0x4], // 0xB3C
    }
    #[repr(C)]
    pub struct CPhysConstraint {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_hJoint: [u8; 0x8], // 0x4A8
        pub m_nameAttach1: [u8; 0x8], // 0x4B0
        pub m_nameAttach2: [u8; 0x8], // 0x4B8
        pub m_hAttach1: [u8; 0x4], // 0x4C0
        pub m_hAttach2: [u8; 0x4], // 0x4C4
        pub m_nameAttachment1: [u8; 0x8], // 0x4C8
        pub m_nameAttachment2: [u8; 0x8], // 0x4D0
        pub m_breakSound: [u8; 0x8], // 0x4D8
        pub m_forceLimit: [u8; 0x4], // 0x4E0
        pub m_torqueLimit: [u8; 0x4], // 0x4E4
        pub m_minTeleportDistance: [u8; 0x4], // 0x4E8
        pub m_bSnapObjectPositions: [u8; 0x1], // 0x4EC
        pub m_bTreatEntity1AsInfiniteMass: [u8; 0x3], // 0x4ED
        pub m_OnBreak: [u8; 0x18], // 0x4F0
    }
    #[repr(C)]
    pub struct CLogicAchievement {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_bDisabled: [u8; 0x8], // 0x4A8
        pub m_iszAchievementEventID: [u8; 0x8], // 0x4B0
        pub m_OnFired: [u8; 0x18], // 0x4B8
    }
    #[repr(C)]
    pub struct CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
        pub pItem: [u8; 0x8], // 0x0
        pub team: [u8; 0x2], // 0x8
        pub slot: [u8; 0x6], // 0xA
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
        pub m_flMinRoughness: [u8; 0x10], // 0x1A8
        pub m_bPvsModifyEntity: [u8; 0x8], // 0x1B8
    }
    #[repr(C)]
    pub struct CCSWeaponBase {
        pub pad_0: [u8; 0xEF8], // 0x0
        pub m_bRemoveable: [u8; 0x1], // 0xEF8
        pub m_bPlayerAmmoStockOnPickup: [u8; 0x1], // 0xEF9
        pub m_bRequireUseToTouch: [u8; 0x2], // 0xEFA
        pub m_iWeaponGameplayAnimState: [u8; 0x4], // 0xEFC
        pub m_flWeaponGameplayAnimStateTimestamp: [u8; 0x4], // 0xF00
        pub m_flInspectCancelCompleteTime: [u8; 0x4], // 0xF04
        pub m_bInspectPending: [u8; 0x1], // 0xF08
        pub m_bInspectShouldLoop: [u8; 0x2B], // 0xF09
        pub m_nLastEmptySoundCmdNum: [u8; 0x1C], // 0xF34
        pub m_bFireOnEmpty: [u8; 0x8], // 0xF50
        pub m_OnPlayerPickup: [u8; 0x18], // 0xF58
        pub m_weaponMode: [u8; 0x4], // 0xF70
        pub m_flTurningInaccuracyDelta: [u8; 0x4], // 0xF74
        pub m_vecTurningInaccuracyEyeDirLast: [u8; 0xC], // 0xF78
        pub m_flTurningInaccuracy: [u8; 0x4], // 0xF84
        pub m_fAccuracyPenalty: [u8; 0x4], // 0xF88
        pub m_flLastAccuracyUpdateTime: [u8; 0x4], // 0xF8C
        pub m_fAccuracySmoothedForZoom: [u8; 0x4], // 0xF90
        pub m_iRecoilIndex: [u8; 0x4], // 0xF94
        pub m_flRecoilIndex: [u8; 0x4], // 0xF98
        pub m_bBurstMode: [u8; 0x4], // 0xF9C
        pub m_nPostponeFireReadyTicks: [u8; 0x4], // 0xFA0
        pub m_flPostponeFireReadyFrac: [u8; 0x4], // 0xFA4
        pub m_bInReload: [u8; 0x4], // 0xFA8
        pub m_nDeployTick: [u8; 0x4], // 0xFAC
        pub m_flAttackHoldStartTime: [u8; 0x4], // 0xFB0
        pub m_flDroppedAtTime: [u8; 0x8], // 0xFB4
        pub m_bIsHauledBack: [u8; 0x1], // 0xFBC
        pub m_bSilencerOn: [u8; 0x3], // 0xFBD
        pub m_flTimeSilencerSwitchComplete: [u8; 0x4], // 0xFC0
        pub m_bIsInStealthReload: [u8; 0x1], // 0xFC4
        pub m_bInSilentReloadSection: [u8; 0x1], // 0xFC5
        pub m_bSilentReloadStatPending: [u8; 0x2], // 0xFC6
        pub m_flStealthReloadHoldStartTime: [u8; 0x4], // 0xFC8
        pub m_bReloadHeldSinceStart: [u8; 0x4], // 0xFCC
        pub m_flWeaponActionPlaybackRate: [u8; 0x4], // 0xFD0
        pub m_iOriginalTeamNumber: [u8; 0x4], // 0xFD4
        pub m_iMostRecentTeamNumber: [u8; 0x4], // 0xFD8
        pub m_bDroppedNearBuyZone: [u8; 0x4], // 0xFDC
        pub m_flNextAttackRenderTimeOffset: [u8; 0x18], // 0xFE0
        pub m_bCanBePickedUp: [u8; 0x1], // 0xFF8
        pub m_bUseCanOverrideNextOwnerTouchTime: [u8; 0x3], // 0xFF9
        pub m_nextOwnerTouchTime: [u8; 0x4], // 0xFFC
        pub m_nextPrevOwnerTouchTime: [u8; 0x8], // 0x1000
        pub m_nextPrevOwnerUseTime: [u8; 0x4], // 0x1008
        pub m_hPrevOwner: [u8; 0x4], // 0x100C
        pub m_nDropTick: [u8; 0x4], // 0x1010
        pub m_bWasActiveWeaponWhenDropped: [u8; 0x20], // 0x1014
        pub m_donated: [u8; 0x4], // 0x1034
        pub m_fLastShotTime: [u8; 0x4], // 0x1038
        pub m_bWasOwnedByCT: [u8; 0x1], // 0x103C
        pub m_bWasOwnedByTerrorist: [u8; 0x3], // 0x103D
        pub m_numRemoveUnownedWeaponThink: [u8; 0x60], // 0x1040
        pub m_IronSightController: [u8; 0x18], // 0x10A0
        pub m_iIronSightMode: [u8; 0x4], // 0x10B8
        pub m_flLastLOSTraceFailureTime: [u8; 0x4], // 0x10BC
        pub m_flWatTickOffset: [u8; 0x10], // 0x10C0
        pub m_flLastShakeTime: [u8; 0x1B0], // 0x10D0
    }
    #[repr(C)]
    pub struct CPointClientUIDialog {
        pub pad_0: [u8; 0x9B0], // 0x0
        pub m_hActivator: [u8; 0x4], // 0x9B0
        pub m_bStartEnabled: [u8; 0x4], // 0x9B4
    }
    #[repr(C)]
    pub struct CLogicLineToEntity {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_Line: [u8; 0x28], // 0x4A8
        pub m_SourceName: [u8; 0x8], // 0x4D0
        pub m_StartEntity: [u8; 0x4], // 0x4D8
        pub m_EndEntity: [u8; 0x4], // 0x4DC
    }
    #[repr(C)]
    pub struct CSoundAreaEntitySphere {
        pub pad_0: [u8; 0x4C8], // 0x0
        pub m_flRadius: [u8; 0x8], // 0x4C8
    }
    #[repr(C)]
    pub struct CCSPlayer_ActionTrackingServices {
        pub pad_0: [u8; 0x1F8], // 0x0
        pub m_hLastWeaponBeforeC4AutoSwitch: [u8; 0x2C], // 0x1F8
        pub m_bIsRescuing: [u8; 0x4], // 0x224
        pub m_weaponPurchasesThisMatch: [u8; 0x70], // 0x228
        pub m_weaponPurchasesThisRound: [u8; 0x70], // 0x298
        pub m_weaponCarryOverIntoThisRound: [u8; 0x78], // 0x308
    }
    #[repr(C)]
    pub struct CBrokenGlassTrap {
        pub pad_0: [u8; 0x870], // 0x0
    }
    #[repr(C)]
    pub struct CPhysicalButton {
        pub pad_0: [u8; 0x9D0], // 0x0
    }
    #[repr(C)]
    pub struct CInfoSpawnGroupLoadUnload {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_OnSpawnGroupLoadStarted: [u8; 0x18], // 0x4A8
        pub m_OnSpawnGroupLoadFinished: [u8; 0x18], // 0x4C0
        pub m_OnSpawnGroupUnloadStarted: [u8; 0x18], // 0x4D8
        pub m_OnSpawnGroupUnloadFinished: [u8; 0x18], // 0x4F0
        pub m_iszSpawnGroupName: [u8; 0x8], // 0x508
        pub m_iszSpawnGroupFilterName: [u8; 0x8], // 0x510
        pub m_iszLandmarkName: [u8; 0x8], // 0x518
        pub m_sFixedSpawnGroupName: [u8; 0x8], // 0x520
        pub m_flTimeoutInterval: [u8; 0x4], // 0x528
        pub m_bAutoActivate: [u8; 0x1], // 0x52C
        pub m_bUnloadingStarted: [u8; 0x1], // 0x52D
        pub m_bQueueActiveSpawnGroupChange: [u8; 0x1], // 0x52E
        pub m_bQueueFinishLoading: [u8; 0x51], // 0x52F
    }
    #[repr(C)]
    pub struct CSoundAreaEntityOrientedBox {
        pub pad_0: [u8; 0x4C8], // 0x0
        pub m_vMin: [u8; 0xC], // 0x4C8
        pub m_vMax: [u8; 0xC], // 0x4D4
    }
    #[repr(C)]
    pub struct CCSObserver_MovementServices {
        pub pad_0: [u8; 0x258], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_Outflow_ListenForAnimgraphTag {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_OnStart: [u8; 0x48], // 0xD8
        pub m_OnEnd: [u8; 0x48], // 0x120
        pub m_TagName: [u8; 0x8], // 0x168
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
    pub struct CDecoyGrenade {
        pub pad_0: [u8; 0x12C0], // 0x0
    }
    #[repr(C)]
    pub struct CEconItemView {
        pub pad_0: [u8; 0x38], // 0x0
        pub m_iItemDefinitionIndex: [u8; 0x4], // 0x38
        pub m_iEntityQuality: [u8; 0x4], // 0x3C
        pub m_iEntityLevel: [u8; 0x8], // 0x40
        pub m_iItemID: [u8; 0x8], // 0x48
        pub m_iItemIDHigh: [u8; 0x4], // 0x50
        pub m_iItemIDLow: [u8; 0x4], // 0x54
        pub m_iAccountID: [u8; 0x4], // 0x58
        pub m_iInventoryPosition: [u8; 0xC], // 0x5C
        pub m_bInitialized: [u8; 0x8], // 0x68
        pub m_AttributeList: [u8; 0x78], // 0x70
        pub m_NetworkedDynamicAttributes: [u8; 0x78], // 0xE8
        pub m_szCustomName: [u8; 0xA1], // 0x160
        pub m_szCustomNameOverride: [u8; 0xA1], // 0x201
        pub m_szCustomNameOverride2: [u8; 0xA1], // 0x2A2
        pub m_szCustomNameOverride3: [u8; 0xA5], // 0x343
    }
    #[repr(C)]
    pub struct CIncendiaryGrenade {
        pub pad_0: [u8; 0x12C0], // 0x0
    }
    #[repr(C)]
    pub struct CBaseDMStart {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_Master: [u8; 0x8], // 0x4A8
    }
    #[repr(C)]
    pub struct CBaseModelEntity {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_CRenderComponent: [u8; 0x8], // 0x4A8
        pub m_CHitboxComponent: [u8; 0x18], // 0x4B0
        pub m_pChoreoComponent: [u8; 0x8], // 0x4C8
        pub m_nDestructiblePartInitialStateDestructed0: [u8; 0x4], // 0x4D0
        pub m_nDestructiblePartInitialStateDestructed1: [u8; 0x4], // 0x4D4
        pub m_nDestructiblePartInitialStateDestructed2: [u8; 0x4], // 0x4D8
        pub m_nDestructiblePartInitialStateDestructed3: [u8; 0x4], // 0x4DC
        pub m_nDestructiblePartInitialStateDestructed4: [u8; 0x4], // 0x4E0
        pub m_nDestructiblePartInitialStateDestructed0_PartIndex: [u8; 0x4], // 0x4E4
        pub m_nDestructiblePartInitialStateDestructed1_PartIndex: [u8; 0x4], // 0x4E8
        pub m_nDestructiblePartInitialStateDestructed2_PartIndex: [u8; 0x4], // 0x4EC
        pub m_nDestructiblePartInitialStateDestructed3_PartIndex: [u8; 0x4], // 0x4F0
        pub m_nDestructiblePartInitialStateDestructed4_PartIndex: [u8; 0x4], // 0x4F4
        pub m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces: [u8; 0x1], // 0x4F8
        pub m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces: [u8; 0x1], // 0x4F9
        pub m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces: [u8; 0x1], // 0x4FA
        pub m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces: [u8; 0x1], // 0x4FB
        pub m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces: [u8; 0x4], // 0x4FC
        pub m_pDestructiblePartsSystemComponent: [u8; 0x8], // 0x500
        pub m_OnDestructibleHitGroupDamageLevelChanged: [u8; 0x28], // 0x508
        pub m_flDissolveStartTime: [u8; 0x8], // 0x530
        pub m_OnIgnite: [u8; 0x18], // 0x538
        pub m_nRenderMode: [u8; 0x1], // 0x550
        pub m_nRenderFX: [u8; 0x1], // 0x551
        pub m_bAllowFadeInView: [u8; 0x1E], // 0x552
        pub m_clrRender: [u8; 0x8], // 0x570
        pub m_vecRenderAttributes: [u8; 0x68], // 0x578
        pub m_bRenderToCubemaps: [u8; 0x1], // 0x5E0
        pub m_bExpandRenderBoundsToIncludeCloth: [u8; 0x1], // 0x5E1
        pub m_bNoInterpolate: [u8; 0x6], // 0x5E2
        pub m_Collision: [u8; 0xB8], // 0x5E8
        pub m_Glow: [u8; 0x58], // 0x6A0
        pub m_flGlowBackfaceMult: [u8; 0x4], // 0x6F8
        pub m_fadeMinDist: [u8; 0x4], // 0x6FC
        pub m_fadeMaxDist: [u8; 0x4], // 0x700
        pub m_flFadeScale: [u8; 0x4], // 0x704
        pub m_flShadowStrength: [u8; 0x4], // 0x708
        pub m_nObjectCulling: [u8; 0x4], // 0x70C
        pub m_bodyGroupTotalRequestCount: [u8; 0x8], // 0x710
        pub m_bodyGroupRequests: [u8; 0xD8], // 0x718
        pub m_bodyGroupChoices: [u8; 0x28], // 0x7F0
        pub m_vecViewOffset: [u8; 0x30], // 0x818
        pub m_bvDisabledHitGroups: [u8; 0x8], // 0x848
    }
    #[repr(C)]
    pub struct fogplayerparams_t {
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
    pub struct CInstancedSceneEntity {
        pub pad_0: [u8; 0x800], // 0x0
        pub m_hOwner: [u8; 0x4], // 0x800
        pub m_bHadOwner: [u8; 0x4], // 0x804
        pub m_flPostSpeakDelay: [u8; 0x4], // 0x808
        pub m_flPreDelay: [u8; 0x4], // 0x80C
        pub m_bIsBackground: [u8; 0x4], // 0x810
        pub m_hTarget: [u8; 0x4], // 0x814
    }
    #[repr(C)]
    pub struct CPulseCell_BaseValue {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CCitadelSoundOpvarSetOBB {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_iszStackName: [u8; 0x8], // 0x4A8
        pub m_iszOperatorName: [u8; 0x8], // 0x4B0
        pub m_iszOpvarName: [u8; 0x8], // 0x4B8
        pub m_vDistanceInnerMins: [u8; 0xC], // 0x4C0
        pub m_vDistanceInnerMaxs: [u8; 0xC], // 0x4CC
        pub m_vDistanceOuterMins: [u8; 0xC], // 0x4D8
        pub m_vDistanceOuterMaxs: [u8; 0xC], // 0x4E4
        pub m_nAABBDirection: [u8; 0x8], // 0x4F0
    }
    #[repr(C)]
    pub struct CSoundEventParameter {
        pub pad_0: [u8; 0x4C0], // 0x0
        pub m_iszParamName: [u8; 0x8], // 0x4C0
        pub m_flFloatValue: [u8; 0x8], // 0x4C8
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
    pub struct CRotButton {
        pub pad_0: [u8; 0x9D0], // 0x0
    }
    #[repr(C)]
    pub struct CEnvViewPunch {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_flRadius: [u8; 0x4], // 0x4A8
        pub m_angViewPunch: [u8; 0xC], // 0x4AC
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
    pub struct CItemKevlar {
        pub pad_0: [u8; 0xAE0], // 0x0
    }
    #[repr(C)]
    pub struct CFuncShatterglass {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_matPanelTransform: [u8; 0x30], // 0x850
        pub m_matPanelTransformWsTemp: [u8; 0x30], // 0x880
        pub m_vecShatterGlassShards: [u8; 0x18], // 0x8B0
        pub m_PanelSize: [u8; 0x8], // 0x8C8
        pub m_flLastShatterSoundEmitTime: [u8; 0x4], // 0x8D0
        pub m_flLastCleanupTime: [u8; 0x4], // 0x8D4
        pub m_flInitAtTime: [u8; 0x4], // 0x8D8
        pub m_flGlassThickness: [u8; 0x4], // 0x8DC
        pub m_flSpawnInvulnerability: [u8; 0x4], // 0x8E0
        pub m_bBreakSilent: [u8; 0x1], // 0x8E4
        pub m_bBreakShardless: [u8; 0x1], // 0x8E5
        pub m_bBroken: [u8; 0x1], // 0x8E6
        pub m_bGlassNavIgnore: [u8; 0x1], // 0x8E7
        pub m_bGlassInFrame: [u8; 0x1], // 0x8E8
        pub m_bStartBroken: [u8; 0x1], // 0x8E9
        pub m_iInitialDamageType: [u8; 0x6], // 0x8EA
        pub m_szDamagePositioningEntityName01: [u8; 0x8], // 0x8F0
        pub m_szDamagePositioningEntityName02: [u8; 0x8], // 0x8F8
        pub m_szDamagePositioningEntityName03: [u8; 0x8], // 0x900
        pub m_szDamagePositioningEntityName04: [u8; 0x8], // 0x908
        pub m_vInitialDamagePositions: [u8; 0x18], // 0x910
        pub m_vExtraDamagePositions: [u8; 0x18], // 0x928
        pub m_vInitialPanelVertices: [u8; 0x18], // 0x940
        pub m_OnBroken: [u8; 0x18], // 0x958
        pub m_iSurfaceType: [u8; 0x8], // 0x970
        pub m_hMaterialDamageBase: [u8; 0x8], // 0x978
    }
    #[repr(C)]
    pub struct CNavWalkable {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CPlantedC4 {
        pub pad_0: [u8; 0xA98], // 0x0
        pub m_bBombTicking: [u8; 0x4], // 0xA98
        pub m_flC4Blow: [u8; 0x4], // 0xA9C
        pub m_nBombSite: [u8; 0x4], // 0xAA0
        pub m_nSourceSoundscapeHash: [u8; 0x4], // 0xAA4
        pub m_bAbortDetonationBecauseWorldIsFrozen: [u8; 0x8], // 0xAA8
        pub m_AttributeManager: [u8; 0x438], // 0xAB0
        pub m_OnBombDefused: [u8; 0x18], // 0xEE8
        pub m_OnBombBeginDefuse: [u8; 0x18], // 0xF00
        pub m_OnBombDefuseAborted: [u8; 0x18], // 0xF18
        pub m_bCannotBeDefused: [u8; 0x8], // 0xF30
        pub m_entitySpottedState: [u8; 0x18], // 0xF38
        pub m_nSpotRules: [u8; 0x4], // 0xF50
        pub m_bHasExploded: [u8; 0x1], // 0xF54
        pub m_bBombDefused: [u8; 0x1], // 0xF55
        pub m_bTrainingPlacedByPlayer: [u8; 0x2], // 0xF56
        pub m_flTimerLength: [u8; 0x4], // 0xF58
        pub m_bBeingDefused: [u8; 0x8], // 0xF5C
        pub m_fLastDefuseTime: [u8; 0x8], // 0xF64
        pub m_flDefuseLength: [u8; 0x4], // 0xF6C
        pub m_flDefuseCountDown: [u8; 0x4], // 0xF70
        pub m_hBombDefuser: [u8; 0x4], // 0xF74
        pub m_iProgressBarTime: [u8; 0x4], // 0xF78
        pub m_bVoiceAlertFired: [u8; 0x1], // 0xF7C
        pub m_bVoiceAlertPlayed: [u8; 0x7], // 0xF7D
        pub m_flNextBotBeepTime: [u8; 0x8], // 0xF84
        pub m_angCatchUpToPlayerEye: [u8; 0xC], // 0xF8C
        pub m_flLastSpinDetectionTime: [u8; 0x8], // 0xF98
    }
    #[repr(C)]
    pub struct CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
        pub pad_0: [u8; 0x540], // 0x0
    }
    #[repr(C)]
    pub struct CVoteController {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_iActiveIssueIndex: [u8; 0x4], // 0x4A8
        pub m_iOnlyTeamToVote: [u8; 0x4], // 0x4AC
        pub m_nVoteOptionCount: [u8; 0x14], // 0x4B0
        pub m_nPotentialVotes: [u8; 0x4], // 0x4C4
        pub m_bIsYesNoVote: [u8; 0x8], // 0x4C8
        pub m_acceptingVotesTimer: [u8; 0x18], // 0x4D0
        pub m_executeCommandTimer: [u8; 0x18], // 0x4E8
        pub m_resetVoteTimer: [u8; 0x18], // 0x500
        pub m_nVotesCast: [u8; 0x100], // 0x518
        pub m_playerHoldingVote: [u8; 0x4], // 0x618
        pub m_playerOverrideForVote: [u8; 0x4], // 0x61C
        pub m_nHighestCountIndex: [u8; 0x8], // 0x620
        pub m_potentialIssues: [u8; 0x18], // 0x628
        pub m_VoteOptions: [u8; 0x18], // 0x640
    }
    #[repr(C)]
    pub struct CPulseCell_Inflow_Yield {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_UnyieldResume: [u8; 0x48], // 0xD8
    }
    #[repr(C)]
    pub struct CPhysImpact {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_damage: [u8; 0x4], // 0x4A8
        pub m_distance: [u8; 0x4], // 0x4AC
        pub m_directionEntityName: [u8; 0x8], // 0x4B0
    }
    #[repr(C)]
    pub struct CBaseEntity {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_CBodyComponent: [u8; 0x8], // 0x30
        pub m_NetworkTransmitComponent: [u8; 0x210], // 0x38
        pub m_aThinkFunctions: [u8; 0x18], // 0x248
        pub m_iCurrentThinkContext: [u8; 0x4], // 0x260
        pub m_nLastThinkTick: [u8; 0x4], // 0x264
        pub m_bDisabledContextThinks: [u8; 0x10], // 0x268
        pub m_isSteadyState: [u8; 0x8], // 0x278
        pub m_lastNetworkChange: [u8; 0x8], // 0x280
        pub m_think: [u8; 0x8], // 0x288
        pub m_ResponseContexts: [u8; 0x18], // 0x290
        pub m_iszResponseContext: [u8; 0x8], // 0x2A8
        pub m_pfnTouch: [u8; 0x8], // 0x2B0
        pub m_pfnUse: [u8; 0x8], // 0x2B8
        pub m_pfnBlocked: [u8; 0x8], // 0x2C0
        pub m_pfnMoveDone: [u8; 0x8], // 0x2C8
        pub m_iHealth: [u8; 0x4], // 0x2D0
        pub m_iMaxHealth: [u8; 0x4], // 0x2D4
        pub m_lifeState: [u8; 0x4], // 0x2D8
        pub m_flDamageAccumulator: [u8; 0x4], // 0x2DC
        pub m_bTakesDamage: [u8; 0x8], // 0x2E0
        pub m_nTakeDamageFlags: [u8; 0x8], // 0x2E8
        pub m_nPlatformType: [u8; 0x2], // 0x2F0
        pub m_MoveCollide: [u8; 0x1], // 0x2F2
        pub m_MoveType: [u8; 0x1], // 0x2F3
        pub m_nPreviouslySetMoveType: [u8; 0x1], // 0x2F4
        pub m_nActualMoveType: [u8; 0x1], // 0x2F5
        pub m_nWaterTouch: [u8; 0x1], // 0x2F6
        pub m_nSlimeTouch: [u8; 0x1], // 0x2F7
        pub m_bRestoreInHierarchy: [u8; 0x8], // 0x2F8
        pub m_target: [u8; 0x8], // 0x300
        pub m_hDamageFilter: [u8; 0x8], // 0x308
        pub m_iszDamageFilterName: [u8; 0x8], // 0x310
        pub m_flMoveDoneTime: [u8; 0x4], // 0x318
        pub m_nSubclassID: [u8; 0xC], // 0x31C
        pub m_flAnimTime: [u8; 0x4], // 0x328
        pub m_flSimulationTime: [u8; 0x4], // 0x32C
        pub m_flCreateTime: [u8; 0x4], // 0x330
        pub m_bClientSideRagdoll: [u8; 0x1], // 0x334
        pub m_ubInterpolationFrame: [u8; 0x3], // 0x335
        pub m_vPrevVPhysicsUpdatePos: [u8; 0xC], // 0x338
        pub m_iTeamNum: [u8; 0x4], // 0x344
        pub m_iGlobalname: [u8; 0x8], // 0x348
        pub m_iSentToClients: [u8; 0x8], // 0x350
        pub m_sUniqueHammerID: [u8; 0x8], // 0x358
        pub m_spawnflags: [u8; 0x4], // 0x360
        pub m_nNextThinkTick: [u8; 0x4], // 0x364
        pub m_nSimulationTick: [u8; 0x8], // 0x368
        pub m_OnKilled: [u8; 0x18], // 0x370
        pub m_fFlags: [u8; 0x4], // 0x388
        pub m_vecAbsVelocity: [u8; 0xC], // 0x38C
        pub m_vecVelocity: [u8; 0x30], // 0x398
        pub m_vecBaseVelocity: [u8; 0xC], // 0x3C8
        pub m_nPushEnumCount: [u8; 0x4], // 0x3D4
        pub m_pCollision: [u8; 0x8], // 0x3D8
        pub m_hEffectEntity: [u8; 0x4], // 0x3E0
        pub m_hOwnerEntity: [u8; 0x4], // 0x3E4
        pub m_fEffects: [u8; 0x4], // 0x3E8
        pub m_hGroundEntity: [u8; 0x4], // 0x3EC
        pub m_nGroundBodyIndex: [u8; 0x4], // 0x3F0
        pub m_flFriction: [u8; 0x4], // 0x3F4
        pub m_flElasticity: [u8; 0x4], // 0x3F8
        pub m_flGravityScale: [u8; 0x4], // 0x3FC
        pub m_flTimeScale: [u8; 0x4], // 0x400
        pub m_flWaterLevel: [u8; 0x4], // 0x404
        pub m_bGravityDisabled: [u8; 0x1], // 0x408
        pub m_bAnimatedEveryTick: [u8; 0x3], // 0x409
        pub m_flActualGravityScale: [u8; 0x4], // 0x40C
        pub m_bGravityActuallyDisabled: [u8; 0x1], // 0x410
        pub m_bDisableLowViolence: [u8; 0x1], // 0x411
        pub m_nWaterType: [u8; 0x2], // 0x412
        pub m_iEFlags: [u8; 0x4], // 0x414
        pub m_OnUser1: [u8; 0x18], // 0x418
        pub m_OnUser2: [u8; 0x18], // 0x430
        pub m_OnUser3: [u8; 0x18], // 0x448
        pub m_OnUser4: [u8; 0x18], // 0x460
        pub m_iInitialTeamNum: [u8; 0x4], // 0x478
        pub m_flNavIgnoreUntilTime: [u8; 0x4], // 0x47C
        pub m_vecAngVelocity: [u8; 0xC], // 0x480
        pub m_bNetworkQuantizeOriginAndAngles: [u8; 0x1], // 0x48C
        pub m_bLagCompensate: [u8; 0x3], // 0x48D
        pub m_pBlocker: [u8; 0x4], // 0x490
        pub m_flLocalTime: [u8; 0x4], // 0x494
        pub m_flVPhysicsUpdateLocalTime: [u8; 0x4], // 0x498
        pub m_nBloodType: [u8; 0x4], // 0x49C
        pub m_pPulseGraphInstance: [u8; 0x8], // 0x4A0
    }
    #[repr(C)]
    pub struct CPulseCell_ApplyAnimGraphParam {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_value: [u8; 0x90], // 0xD8
    }
    #[repr(C)]
    pub struct CPlayer_UseServices {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CGameSceneNodeHandle {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_hOwner: [u8; 0x4], // 0x8
        pub m_name: [u8; 0x4], // 0xC
    }
    #[repr(C)]
    pub struct CMarkupVolumeWithRef {
        pub pad_0: [u8; 0x898], // 0x0
        pub m_bUseRef: [u8; 0x4], // 0x898
        pub m_vRefPosEntitySpace: [u8; 0xC], // 0x89C
        pub m_vRefPosWorldSpace: [u8; 0xC], // 0x8A8
        pub m_flRefDot: [u8; 0x4], // 0x8B4
    }
    #[repr(C)]
    pub struct CCSGO_TeamSelectCharacterPosition {
        pub pad_0: [u8; 0x1468], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_Unknown {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_UnknownKeys: [u8; 0x10], // 0x48
    }
    #[repr(C)]
    pub struct CFuncPlatRot {
        pub pad_0: [u8; 0x908], // 0x0
        pub m_end: [u8; 0xC], // 0x908
        pub m_start: [u8; 0xC], // 0x914
    }
    #[repr(C)]
    pub struct CRagdollMagnet {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_bDisabled: [u8; 0x4], // 0x4A8
        pub m_radius: [u8; 0x4], // 0x4AC
        pub m_force: [u8; 0x4], // 0x4B0
        pub m_axis: [u8; 0xC], // 0x4B4
    }
    #[repr(C)]
    pub struct CInfoInstructorHintTarget {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_ApplyEntityFlags {
        pub pad_0: [u8; 0xD8], // 0x0
    }
    #[repr(C)]
    pub struct CSpriteAlias_env_glow {
        pub pad_0: [u8; 0x8C0], // 0x0
    }
    #[repr(C)]
    pub struct CFireCrackerBlast {
        pub pad_0: [u8; 0x14D8], // 0x0
    }
    #[repr(C)]
    pub struct CSpotlightEnd {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_flLightScale: [u8; 0x4], // 0x850
        pub m_Radius: [u8; 0x4], // 0x854
        pub m_vSpotlightDir: [u8; 0xC], // 0x858
        pub m_vSpotlightOrg: [u8; 0xC], // 0x864
    }
    #[repr(C)]
    pub struct CEnvSky {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_hSkyMaterial: [u8; 0x8], // 0x850
        pub m_hSkyMaterialLightingOnly: [u8; 0x8], // 0x858
        pub m_bStartDisabled: [u8; 0x4], // 0x860
        pub m_vTintColor: [u8; 0x4], // 0x864
        pub m_vTintColorLightingOnly: [u8; 0x4], // 0x868
        pub m_flBrightnessScale: [u8; 0x4], // 0x86C
        pub m_nFogType: [u8; 0x4], // 0x870
        pub m_flFogMinStart: [u8; 0x4], // 0x874
        pub m_flFogMinEnd: [u8; 0x4], // 0x878
        pub m_flFogMaxStart: [u8; 0x4], // 0x87C
        pub m_flFogMaxEnd: [u8; 0x4], // 0x880
        pub m_bEnabled: [u8; 0x2C], // 0x884
    }
    #[repr(C)]
    pub struct CInfoSpawnGroupLandmark {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CPointAngleSensor {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_bDisabled: [u8; 0x8], // 0x4A8
        pub m_nLookAtName: [u8; 0x8], // 0x4B0
        pub m_hTargetEntity: [u8; 0x4], // 0x4B8
        pub m_hLookAtEntity: [u8; 0x4], // 0x4BC
        pub m_flDuration: [u8; 0x4], // 0x4C0
        pub m_flDotTolerance: [u8; 0x4], // 0x4C4
        pub m_flFacingTime: [u8; 0x4], // 0x4C8
        pub m_bFired: [u8; 0x4], // 0x4CC
        pub m_OnFacingLookat: [u8; 0x18], // 0x4D0
        pub m_OnNotFacingLookat: [u8; 0x18], // 0x4E8
        pub m_TargetDir: [u8; 0x28], // 0x500
        pub m_FacingPercentage: [u8; 0x20], // 0x528
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
    pub struct CGenericConstraint {
        pub pad_0: [u8; 0x510], // 0x0
        pub m_bPlaceAnchorsAtConstraintTransform: [u8; 0x4], // 0x510
        pub m_nLinearMotionX: [u8; 0x4], // 0x514
        pub m_nLinearMotionY: [u8; 0x4], // 0x518
        pub m_nLinearMotionZ: [u8; 0x4], // 0x51C
        pub m_flLinearFrequencyX: [u8; 0x4], // 0x520
        pub m_flLinearFrequencyY: [u8; 0x4], // 0x524
        pub m_flLinearFrequencyZ: [u8; 0x4], // 0x528
        pub m_flLinearDampingRatioX: [u8; 0x4], // 0x52C
        pub m_flLinearDampingRatioY: [u8; 0x4], // 0x530
        pub m_flLinearDampingRatioZ: [u8; 0x4], // 0x534
        pub m_flMaxLinearImpulseX: [u8; 0x4], // 0x538
        pub m_flMaxLinearImpulseY: [u8; 0x4], // 0x53C
        pub m_flMaxLinearImpulseZ: [u8; 0x4], // 0x540
        pub m_flBreakAfterTimeX: [u8; 0x4], // 0x544
        pub m_flBreakAfterTimeY: [u8; 0x4], // 0x548
        pub m_flBreakAfterTimeZ: [u8; 0x4], // 0x54C
        pub m_flBreakAfterTimeStartTimeX: [u8; 0x4], // 0x550
        pub m_flBreakAfterTimeStartTimeY: [u8; 0x4], // 0x554
        pub m_flBreakAfterTimeStartTimeZ: [u8; 0x4], // 0x558
        pub m_flBreakAfterTimeThresholdX: [u8; 0x4], // 0x55C
        pub m_flBreakAfterTimeThresholdY: [u8; 0x4], // 0x560
        pub m_flBreakAfterTimeThresholdZ: [u8; 0x4], // 0x564
        pub m_flNotifyForceX: [u8; 0x4], // 0x568
        pub m_flNotifyForceY: [u8; 0x4], // 0x56C
        pub m_flNotifyForceZ: [u8; 0x4], // 0x570
        pub m_flNotifyForceMinTimeX: [u8; 0x4], // 0x574
        pub m_flNotifyForceMinTimeY: [u8; 0x4], // 0x578
        pub m_flNotifyForceMinTimeZ: [u8; 0x4], // 0x57C
        pub m_flNotifyForceLastTimeX: [u8; 0x4], // 0x580
        pub m_flNotifyForceLastTimeY: [u8; 0x4], // 0x584
        pub m_flNotifyForceLastTimeZ: [u8; 0x4], // 0x588
        pub m_bAxisNotifiedX: [u8; 0x1], // 0x58C
        pub m_bAxisNotifiedY: [u8; 0x1], // 0x58D
        pub m_bAxisNotifiedZ: [u8; 0x2], // 0x58E
        pub m_nAngularMotionX: [u8; 0x4], // 0x590
        pub m_nAngularMotionY: [u8; 0x4], // 0x594
        pub m_nAngularMotionZ: [u8; 0x4], // 0x598
        pub m_flAngularFrequencyX: [u8; 0x4], // 0x59C
        pub m_flAngularFrequencyY: [u8; 0x4], // 0x5A0
        pub m_flAngularFrequencyZ: [u8; 0x4], // 0x5A4
        pub m_flAngularDampingRatioX: [u8; 0x4], // 0x5A8
        pub m_flAngularDampingRatioY: [u8; 0x4], // 0x5AC
        pub m_flAngularDampingRatioZ: [u8; 0x4], // 0x5B0
        pub m_flMaxAngularImpulseX: [u8; 0x4], // 0x5B4
        pub m_flMaxAngularImpulseY: [u8; 0x4], // 0x5B8
        pub m_flMaxAngularImpulseZ: [u8; 0x4], // 0x5BC
        pub m_NotifyForceReachedX: [u8; 0x18], // 0x5C0
        pub m_NotifyForceReachedY: [u8; 0x18], // 0x5D8
        pub m_NotifyForceReachedZ: [u8; 0x18], // 0x5F0
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
    pub struct CEnvLaser {
        pub pad_0: [u8; 0x8F0], // 0x0
        pub m_iszLaserTarget: [u8; 0x8], // 0x8F0
        pub m_pSprite: [u8; 0x8], // 0x8F8
        pub m_iszSpriteName: [u8; 0x8], // 0x900
        pub m_firePosition: [u8; 0xC], // 0x908
        pub m_flStartFrame: [u8; 0x4], // 0x914
    }
    #[repr(C)]
    pub struct CSoundOpvarSetEntity {
        pub pad_0: [u8; 0x4C0], // 0x0
        pub m_iszStackName: [u8; 0x8], // 0x4C0
        pub m_iszOperatorName: [u8; 0x8], // 0x4C8
        pub m_iszOpvarName: [u8; 0x8], // 0x4D0
        pub m_nOpvarType: [u8; 0x4], // 0x4D8
        pub m_nOpvarIndex: [u8; 0x4], // 0x4DC
        pub m_flOpvarValue: [u8; 0x8], // 0x4E0
        pub m_OpvarValueString: [u8; 0x8], // 0x4E8
        pub m_bSetOnSpawn: [u8; 0x10], // 0x4F0
    }
    #[repr(C)]
    pub struct CEnvBeverage {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_CanInDispenser: [u8; 0x4], // 0x4A8
        pub m_nBeverageType: [u8; 0x4], // 0x4AC
    }
    #[repr(C)]
    pub struct CPhysMotor {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_nameAttach: [u8; 0x8], // 0x4A8
        pub m_nameAnchor: [u8; 0x8], // 0x4B0
        pub m_hAttachedObject: [u8; 0x4], // 0x4B8
        pub m_hAnchorObject: [u8; 0x4], // 0x4BC
        pub m_spinUp: [u8; 0x4], // 0x4C0
        pub m_spinDown: [u8; 0x4], // 0x4C4
        pub m_flMotorFriction: [u8; 0x4], // 0x4C8
        pub m_additionalAcceleration: [u8; 0x4], // 0x4CC
        pub m_angularAcceleration: [u8; 0x4], // 0x4D0
        pub m_flTorqueScale: [u8; 0x4], // 0x4D4
        pub m_flTargetSpeed: [u8; 0x4], // 0x4D8
        pub m_flSpeedWhenSpinUpOrSpinDownStarted: [u8; 0x4], // 0x4DC
        pub m_pFixedWorldBody: [u8; 0x8], // 0x4E0
        pub m_pMotorJoint: [u8; 0x8], // 0x4E8
        pub m_motor: [u8; 0x20], // 0x4F0
    }
    #[repr(C)]
    pub struct CLogicGameEvent {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_iszEventName: [u8; 0x8], // 0x4A8
    }
    #[repr(C)]
    pub struct CPhysicsPropMultiplayer {
        pub pad_0: [u8; 0xD10], // 0x0
    }
    #[repr(C)]
    pub struct CPhysExplosion {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_bExplodeOnSpawn: [u8; 0x4], // 0x4A8
        pub m_flMagnitude: [u8; 0x4], // 0x4AC
        pub m_flDamage: [u8; 0x4], // 0x4B0
        pub m_radius: [u8; 0x4], // 0x4B4
        pub m_targetEntityName: [u8; 0x8], // 0x4B8
        pub m_ignoreEntityName: [u8; 0x8], // 0x4C0
        pub m_flInnerRadius: [u8; 0x4], // 0x4C8
        pub m_flPushScale: [u8; 0x4], // 0x4CC
        pub m_bConvertToDebrisWhenPossible: [u8; 0x1], // 0x4D0
        pub m_bAffectInvulnerableEnts: [u8; 0x1], // 0x4D1
        pub m_bDisablePushClamp: [u8; 0x6], // 0x4D2
        pub m_OnPushedPlayer: [u8; 0x18], // 0x4D8
    }
    #[repr(C)]
    pub struct CSplineConstraint {
        pub pad_0: [u8; 0x558], // 0x0
        pub m_vAnchorOffsetRestore: [u8; 0xC], // 0x558
        pub m_hSplineEntity: [u8; 0x4], // 0x564
        pub m_pSplineBody: [u8; 0x8], // 0x568
        pub m_bEnableLateralConstraint: [u8; 0x1], // 0x570
        pub m_bEnableVerticalConstraint: [u8; 0x1], // 0x571
        pub m_bEnableAngularConstraint: [u8; 0x1], // 0x572
        pub m_bEnableLimit: [u8; 0x1], // 0x573
        pub m_bFireEventsOnPath: [u8; 0x4], // 0x574
        pub m_flLinearFrequency: [u8; 0x4], // 0x578
        pub m_flLinarDampingRatio: [u8; 0x4], // 0x57C
        pub m_flJointFriction: [u8; 0x4], // 0x580
        pub m_flTransitionTime: [u8; 0x14], // 0x584
        pub m_vPreSolveAnchorPos: [u8; 0xC], // 0x598
        pub m_StartTransitionTime: [u8; 0x4], // 0x5A4
        pub m_vTangentSpaceAnchorAtTransitionStart: [u8; 0x10], // 0x5A8
    }
    #[repr(C)]
    pub struct CLogicCompare {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_flInValue: [u8; 0x4], // 0x4A8
        pub m_flCompareValue: [u8; 0x4], // 0x4AC
        pub m_OnLessThan: [u8; 0x20], // 0x4B0
        pub m_OnEqualTo: [u8; 0x20], // 0x4D0
        pub m_OnNotEqualTo: [u8; 0x20], // 0x4F0
        pub m_OnGreaterThan: [u8; 0x20], // 0x510
    }
    #[repr(C)]
    pub struct CSoundEventBoxEntity {
        pub pad_0: [u8; 0x5A0], // 0x0
        pub m_iszBoxEntities: [u8; 0x98], // 0x5A0
        pub m_vecBoxHelpersNetworked: [u8; 0x60], // 0x638
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
    pub struct CFuncTankTrain {
        pub pad_0: [u8; 0x978], // 0x0
        pub m_OnDeath: [u8; 0x18], // 0x978
    }
    #[repr(C)]
    pub struct CPointClientUIWorldPanel {
        pub pad_0: [u8; 0x9B0], // 0x0
        pub m_bIgnoreInput: [u8; 0x1], // 0x9B0
        pub m_bLit: [u8; 0x1], // 0x9B1
        pub m_bFollowPlayerAcrossTeleport: [u8; 0x2], // 0x9B2
        pub m_flWidth: [u8; 0x4], // 0x9B4
        pub m_flHeight: [u8; 0x4], // 0x9B8
        pub m_flDPI: [u8; 0x4], // 0x9BC
        pub m_flWindowUIScale: [u8; 0x4], // 0x9C0
        pub m_flInteractDistance: [u8; 0x4], // 0x9C4
        pub m_flDepthOffset: [u8; 0x4], // 0x9C8
        pub m_unOwnerContext: [u8; 0x4], // 0x9CC
        pub m_unHorizontalAlign: [u8; 0x4], // 0x9D0
        pub m_unVerticalAlign: [u8; 0x4], // 0x9D4
        pub m_unOrientation: [u8; 0x4], // 0x9D8
        pub m_bAllowInteractionFromAllSceneWorlds: [u8; 0x4], // 0x9DC
        pub m_vecCSSClasses: [u8; 0x18], // 0x9E0
        pub m_bOpaque: [u8; 0x1], // 0x9F8
        pub m_bNoDepth: [u8; 0x1], // 0x9F9
        pub m_bVisibleWhenParentNoDraw: [u8; 0x1], // 0x9FA
        pub m_bRenderBackface: [u8; 0x1], // 0x9FB
        pub m_bUseOffScreenIndicator: [u8; 0x1], // 0x9FC
        pub m_bExcludeFromSaveGames: [u8; 0x1], // 0x9FD
        pub m_bGrabbable: [u8; 0x1], // 0x9FE
        pub m_bOnlyRenderToTexture: [u8; 0x1], // 0x9FF
        pub m_bDisableMipGen: [u8; 0x4], // 0xA00
        pub m_nExplicitImageLayout: [u8; 0x4], // 0xA04
        pub m_bIgnoreParentOrientation: [u8; 0x8], // 0xA08
    }
    #[repr(C)]
    pub struct CSoundEventBoxHelper {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_vMins: [u8; 0xC], // 0x4A8
        pub m_vMaxs: [u8; 0xC], // 0x4B4
    }
    #[repr(C)]
    pub struct CSoundEventSphereEntity {
        pub pad_0: [u8; 0x568], // 0x0
        pub m_flRadius: [u8; 0x8], // 0x568
    }
    #[repr(C)]
    pub struct CCSGO_RushIntroCounterTerroristPosition {
        pub pad_0: [u8; 0x1468], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_ReturnValues {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CCSPlayerController_InGameMoneyServices {
        pub pad_0: [u8; 0x40], // 0x0
        pub m_bReceivesMoneyNextRound: [u8; 0x4], // 0x40
        pub m_iMoneyEarnedForNextRound: [u8; 0x4], // 0x44
        pub m_iAccount: [u8; 0x4], // 0x48
        pub m_iStartAccount: [u8; 0x4], // 0x4C
        pub m_iTotalCashSpent: [u8; 0x4], // 0x50
        pub m_iCashSpentThisRound: [u8; 0x4], // 0x54
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
    pub struct CRuleBrushEntity {
        pub pad_0: [u8; 0x858], // 0x0
    }
    #[repr(C)]
    pub struct CMapVetoPickController {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_bPlayedIntroVcd: [u8; 0x1], // 0x4A8
        pub m_bNeedToPlayFiveSecondsRemaining: [u8; 0x1F], // 0x4A9
        pub m_dblPreMatchDraftSequenceTime: [u8; 0x8], // 0x4C8
        pub m_bPreMatchDraftStateChanged: [u8; 0x4], // 0x4D0
        pub m_nDraftType: [u8; 0x4], // 0x4D4
        pub m_nTeamWinningCoinToss: [u8; 0x4], // 0x4D8
        pub m_nTeamWithFirstChoice: [u8; 0x100], // 0x4DC
        pub m_nVoteMapIdsList: [u8; 0x1C], // 0x5DC
        pub m_nAccountIDs: [u8; 0x100], // 0x5F8
        pub m_nMapId0: [u8; 0x100], // 0x6F8
        pub m_nMapId1: [u8; 0x100], // 0x7F8
        pub m_nMapId2: [u8; 0x100], // 0x8F8
        pub m_nMapId3: [u8; 0x100], // 0x9F8
        pub m_nMapId4: [u8; 0x100], // 0xAF8
        pub m_nMapId5: [u8; 0x100], // 0xBF8
        pub m_nStartingSide0: [u8; 0x100], // 0xCF8
        pub m_nCurrentPhase: [u8; 0x4], // 0xDF8
        pub m_nPhaseStartTick: [u8; 0x4], // 0xDFC
        pub m_nPhaseDurationTicks: [u8; 0x8], // 0xE00
        pub m_OnMapVetoed: [u8; 0x20], // 0xE08
        pub m_OnMapPicked: [u8; 0x20], // 0xE28
        pub m_OnSidesPicked: [u8; 0x20], // 0xE48
        pub m_OnNewPhaseStarted: [u8; 0x20], // 0xE68
        pub m_OnLevelTransition: [u8; 0x20], // 0xE88
    }
    #[repr(C)]
    pub struct CFuncPropRespawnZone {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CFilterModel {
        pub pad_0: [u8; 0x4E0], // 0x0
        pub m_iFilterModel: [u8; 0x8], // 0x4E0
    }
    #[repr(C)]
    pub struct CWeaponP90 {
        pub pad_0: [u8; 0x12A0], // 0x0
    }
    #[repr(C)]
    pub struct CNavSpaceInfo {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CPhysSlideConstraint {
        pub pad_0: [u8; 0x510], // 0x0
        pub m_axisEnd: [u8; 0xC], // 0x510
        pub m_slideFriction: [u8; 0x4], // 0x51C
        pub m_systemLoadScale: [u8; 0x4], // 0x520
        pub m_initialOffset: [u8; 0x4], // 0x524
        pub m_bEnableLinearConstraint: [u8; 0x1], // 0x528
        pub m_bEnableAngularConstraint: [u8; 0x3], // 0x529
        pub m_flMotorFrequency: [u8; 0x4], // 0x52C
        pub m_flMotorDampingRatio: [u8; 0x4], // 0x530
        pub m_bUseEntityPivot: [u8; 0x4], // 0x534
        pub m_soundInfo: [u8; 0x98], // 0x538
    }
    #[repr(C)]
    pub struct CPulseGameBlackboard {
        pub pad_0: [u8; 0x4B0], // 0x0
        pub m_strGraphName: [u8; 0x8], // 0x4B0
        pub m_strStateBlob: [u8; 0x8], // 0x4B8
    }
    #[repr(C)]
    pub struct CSoundEventEntityAlias_snd_event_point {
        pub pad_0: [u8; 0x568], // 0x0
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
    pub struct CPointGamestatsCounter {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_strStatisticName: [u8; 0x8], // 0x4A8
        pub m_bDisabled: [u8; 0x8], // 0x4B0
    }
    #[repr(C)]
    pub struct CTextureBasedAnimatable {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_bLoop: [u8; 0x4], // 0x850
        pub m_flFPS: [u8; 0x4], // 0x854
        pub m_hPositionKeys: [u8; 0x8], // 0x858
        pub m_hRotationKeys: [u8; 0x8], // 0x860
        pub m_vAnimationBoundsMin: [u8; 0xC], // 0x868
        pub m_vAnimationBoundsMax: [u8; 0xC], // 0x874
        pub m_flStartTime: [u8; 0x4], // 0x880
        pub m_flStartFrame: [u8; 0x4], // 0x884
    }
    #[repr(C)]
    pub struct CSprite {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_hSpriteMaterial: [u8; 0x8], // 0x850
        pub m_hAttachedToEntity: [u8; 0x4], // 0x858
        pub m_nAttachment: [u8; 0x4], // 0x85C
        pub m_flSpriteFramerate: [u8; 0x4], // 0x860
        pub m_flFrame: [u8; 0x4], // 0x864
        pub m_flDieTime: [u8; 0x10], // 0x868
        pub m_nBrightness: [u8; 0x4], // 0x878
        pub m_flBrightnessDuration: [u8; 0x4], // 0x87C
        pub m_flSpriteScale: [u8; 0x4], // 0x880
        pub m_flScaleDuration: [u8; 0x4], // 0x884
        pub m_bWorldSpaceScale: [u8; 0x4], // 0x888
        pub m_flGlowProxySize: [u8; 0x4], // 0x88C
        pub m_flHDRColorScale: [u8; 0x4], // 0x890
        pub m_flLastTime: [u8; 0x4], // 0x894
        pub m_flMaxFrame: [u8; 0x4], // 0x898
        pub m_flStartScale: [u8; 0x4], // 0x89C
        pub m_flDestScale: [u8; 0x4], // 0x8A0
        pub m_flScaleTimeStart: [u8; 0x4], // 0x8A4
        pub m_nStartBrightness: [u8; 0x4], // 0x8A8
        pub m_nDestBrightness: [u8; 0x4], // 0x8AC
        pub m_flBrightnessTimeStart: [u8; 0x4], // 0x8B0
        pub m_nSpriteWidth: [u8; 0x4], // 0x8B4
        pub m_nSpriteHeight: [u8; 0x4], // 0x8B8
        pub m_flSpeed: [u8; 0x4], // 0x8BC
    }
    #[repr(C)]
    pub struct CDynamicLight {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_ActualFlags: [u8; 0x1], // 0x850
        pub m_Flags: [u8; 0x1], // 0x851
        pub m_LightStyle: [u8; 0x1], // 0x852
        pub m_On: [u8; 0x1], // 0x853
        pub m_Radius: [u8; 0x4], // 0x854
        pub m_Exponent: [u8; 0x4], // 0x858
        pub m_InnerAngle: [u8; 0x4], // 0x85C
        pub m_OuterAngle: [u8; 0x4], // 0x860
        pub m_SpotRadius: [u8; 0x4], // 0x864
    }
    #[repr(C)]
    pub struct CWeaponTaser {
        pub pad_0: [u8; 0x12A0], // 0x0
        pub m_fFireTime: [u8; 0x4], // 0x12A0
        pub m_nLastAttackTick: [u8; 0xC], // 0x12A4
    }
    #[repr(C)]
    pub struct CEnvCubemapBox {
        pub pad_0: [u8; 0x590], // 0x0
    }
    #[repr(C)]
    pub struct CRotDoor {
        pub pad_0: [u8; 0xA58], // 0x0
        pub m_bSolidBsp: [u8; 0x8], // 0xA58
    }
    #[repr(C)]
    pub struct CPathMover {
        pub pad_0: [u8; 0x600], // 0x0
        pub m_vecMovers: [u8; 0x18], // 0x600
        pub m_vecSpawners: [u8; 0x18], // 0x618
        pub m_iszMoverSpawnerName: [u8; 0x8], // 0x630
        pub m_hMoverRouter: [u8; 0x8], // 0x638
        pub m_iszMoverRouterName: [u8; 0x8], // 0x640
        pub m_flSampleSpacing: [u8; 0x8], // 0x648
    }
    #[repr(C)]
    pub struct CFuncVPhysicsClip {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_bDisabled: [u8; 0x8], // 0x850
    }
    #[repr(C)]
    pub struct CCSRadarElement {
        pub pad_0: [u8; 0x4C0], // 0x0
        pub m_nElementType: [u8; 0x4], // 0x4C0
        pub m_nElementColor: [u8; 0x4], // 0x4C4
        pub m_nTeamFilter: [u8; 0x8], // 0x4C8
    }
    #[repr(C)]
    pub struct CPhysFixed {
        pub pad_0: [u8; 0x508], // 0x0
        pub m_flLinearFrequency: [u8; 0x4], // 0x508
        pub m_flLinearDampingRatio: [u8; 0x4], // 0x50C
        pub m_flAngularFrequency: [u8; 0x4], // 0x510
        pub m_flAngularDampingRatio: [u8; 0x4], // 0x514
        pub m_bEnableLinearConstraint: [u8; 0x1], // 0x518
        pub m_bEnableAngularConstraint: [u8; 0x7], // 0x519
        pub m_sBoneName1: [u8; 0x8], // 0x520
        pub m_sBoneName2: [u8; 0x8], // 0x528
    }
    #[repr(C)]
    pub struct CLogicNavigation {
        pub pad_0: [u8; 0x4B0], // 0x0
        pub m_isOn: [u8; 0x4], // 0x4B0
        pub m_navProperty: [u8; 0x4], // 0x4B4
    }
    #[repr(C)]
    pub struct CPathSimple {
        pub pad_0: [u8; 0x4B0], // 0x0
        pub m_CPathQueryComponent: [u8; 0xF0], // 0x4B0
        pub m_pathString: [u8; 0x8], // 0x5A0
        pub m_bClosedLoop: [u8; 0x8], // 0x5A8
    }
    #[repr(C)]
    pub struct CPathParticleRopeAlias_path_particle_rope_clientside {
        pub pad_0: [u8; 0x590], // 0x0
    }
    #[repr(C)]
    pub struct CFuncElectrifiedVolume {
        pub pad_0: [u8; 0x870], // 0x0
        pub m_EffectName: [u8; 0x8], // 0x870
        pub m_EffectInterpenetrateName: [u8; 0x8], // 0x878
        pub m_EffectZapName: [u8; 0x8], // 0x880
        pub m_iszEffectSource: [u8; 0x20], // 0x888
    }
    #[repr(C)]
    pub struct CCSMinimapBoundary {
        pub pad_0: [u8; 0x4A8], // 0x0
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
    pub struct CSoundEventOBBEntity {
        pub pad_0: [u8; 0x568], // 0x0
        pub m_vMins: [u8; 0xC], // 0x568
        pub m_vMaxs: [u8; 0x1C], // 0x574
    }
    #[repr(C)]
    pub struct CFlashbangProjectile {
        pub pad_0: [u8; 0xB40], // 0x0
        pub m_flTimeToDetonate: [u8; 0x4], // 0xB40
        pub m_numOpponentsHit: [u8; 0x1], // 0xB44
        pub m_numTeammatesHit: [u8; 0xB], // 0xB45
    }
    #[repr(C)]
    pub struct CTriggerMultiple {
        pub pad_0: [u8; 0x9C8], // 0x0
        pub m_OnTrigger: [u8; 0x18], // 0x9C8
    }
    #[repr(C)]
    pub struct CPhysBallSocket {
        pub pad_0: [u8; 0x508], // 0x0
        pub m_flJointFriction: [u8; 0x4], // 0x508
        pub m_bEnableSwingLimit: [u8; 0x4], // 0x50C
        pub m_flSwingLimit: [u8; 0x4], // 0x510
        pub m_bEnableTwistLimit: [u8; 0x4], // 0x514
        pub m_flMinTwistAngle: [u8; 0x4], // 0x518
        pub m_flMaxTwistAngle: [u8; 0x4], // 0x51C
    }
    #[repr(C)]
    pub struct CDebugHistory {
        pub pad_0: [u8; 0x3E84E8], // 0x0
        pub m_nNpcEvents: [u8; 0xFA8], // 0x3E84E8
    }
    #[repr(C)]
    pub struct CSoundOpvarSetPointBase {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_bDisabled: [u8; 0x4], // 0x4A8
        pub m_hSource: [u8; 0x1C], // 0x4AC
        pub m_iszSourceEntityName: [u8; 0x58], // 0x4C8
        pub m_vLastPosition: [u8; 0xC], // 0x520
        pub m_flRefreshTime: [u8; 0x4], // 0x52C
        pub m_iszStackName: [u8; 0x8], // 0x530
        pub m_iszOperatorName: [u8; 0x8], // 0x538
        pub m_iszOpvarName: [u8; 0x8], // 0x540
        pub m_iOpvarIndex: [u8; 0x4], // 0x548
        pub m_bUseAutoCompare: [u8; 0x1], // 0x54C
        pub m_bFastRefresh: [u8; 0x3], // 0x54D
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
    pub struct CPathKeyFrame {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_Origin: [u8; 0xC], // 0x4A8
        pub m_Angles: [u8; 0xC], // 0x4B4
        pub m_qAngle: [u8; 0x10], // 0x4C0
        pub m_iNextKey: [u8; 0x8], // 0x4D0
        pub m_flNextTime: [u8; 0x4], // 0x4D8
        pub m_pNextKey: [u8; 0x4], // 0x4DC
        pub m_pPrevKey: [u8; 0x4], // 0x4E0
        pub m_flMoveSpeed: [u8; 0xC], // 0x4E4
    }
    #[repr(C)]
    pub struct CWeaponCZ75a {
        pub pad_0: [u8; 0x12A0], // 0x0
        pub m_bMagazineRemoved: [u8; 0x10], // 0x12A0
    }
    #[repr(C)]
    pub struct CScriptTriggerPush {
        pub pad_0: [u8; 0xA00], // 0x0
        pub m_vExtent: [u8; 0x10], // 0xA00
    }
    #[repr(C)]
    pub struct CRevertSaved {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_loadTime: [u8; 0x4], // 0x850
        pub m_Duration: [u8; 0x4], // 0x854
        pub m_HoldTime: [u8; 0x8], // 0x858
    }
    #[repr(C)]
    pub struct CTriggerBombReset {
        pub pad_0: [u8; 0x9C8], // 0x0
    }
    #[repr(C)]
    pub struct CTriggerHurt {
        pub pad_0: [u8; 0x9C8], // 0x0
        pub m_flOriginalDamage: [u8; 0x4], // 0x9C8
        pub m_flDamage: [u8; 0x4], // 0x9CC
        pub m_flDamageCap: [u8; 0x4], // 0x9D0
        pub m_flLastDmgTime: [u8; 0x4], // 0x9D4
        pub m_flForgivenessDelay: [u8; 0x4], // 0x9D8
        pub m_bitsDamageInflict: [u8; 0x4], // 0x9DC
        pub m_damageModel: [u8; 0x4], // 0x9E0
        pub m_bNoDmgForce: [u8; 0x4], // 0x9E4
        pub m_vDamageForce: [u8; 0xC], // 0x9E8
        pub m_thinkAlways: [u8; 0x4], // 0x9F4
        pub m_hurtThinkPeriod: [u8; 0x8], // 0x9F8
        pub m_OnHurt: [u8; 0x18], // 0xA00
        pub m_OnHurtPlayer: [u8; 0x18], // 0xA18
        pub m_hurtEntities: [u8; 0x20], // 0xA30
    }
    #[repr(C)]
    pub struct CCSPlayer_WeaponServices {
        pub pad_0: [u8; 0xC0], // 0x0
        pub m_flNextAttack: [u8; 0x4], // 0xC0
        pub m_hSavedWeapon: [u8; 0x4], // 0xC4
        pub m_nTimeToMelee: [u8; 0x4], // 0xC8
        pub m_nTimeToSecondary: [u8; 0x4], // 0xCC
        pub m_nTimeToPrimary: [u8; 0x4], // 0xD0
        pub m_nTimeToSniperRifle: [u8; 0x4], // 0xD4
        pub m_bIsBeingGivenItem: [u8; 0x1], // 0xD8
        pub m_bIsPickingUpItemWithUse: [u8; 0x1], // 0xD9
        pub m_bPickedUpWeapon: [u8; 0x1], // 0xDA
        pub m_bDisableAutoDeploy: [u8; 0x1], // 0xDB
        pub m_bIsPickingUpGroundWeapon: [u8; 0x17BC], // 0xDC
        pub m_networkAnimTiming: [u8; 0x18], // 0x1898
        pub m_bBlockInspectUntilNextGraphUpdate: [u8; 0x8], // 0x18B0
    }
    #[repr(C)]
    pub struct CSkyCameraVolume {
        pub pad_0: [u8; 0x4C0], // 0x0
        pub m_vBoxMins: [u8; 0xC], // 0x4C0
        pub m_vBoxMaxs: [u8; 0xC], // 0x4CC
        pub m_hTarget: [u8; 0x4], // 0x4D8
        pub m_nPriority: [u8; 0x4], // 0x4DC
        pub m_bIsEnabled: [u8; 0x1], // 0x4E0
        pub m_bSkyboxBlurEffect: [u8; 0x3], // 0x4E1
        pub m_vBlurOrigin: [u8; 0xC], // 0x4E4
        pub m_bSkyboxReceivesWorldCsm: [u8; 0x1], // 0x4F0
        pub m_bWorldReceivesSkyboxCsm: [u8; 0x1], // 0x4F1
        pub m_bStartDisabled: [u8; 0x6], // 0x4F2
        pub m_iszTargetName: [u8; 0x8], // 0x4F8
    }
    #[repr(C)]
    pub struct CRetakeGameRules {
        pub pad_0: [u8; 0x138], // 0x0
        pub m_nMatchSeed: [u8; 0x4], // 0x138
        pub m_bBlockersPresent: [u8; 0x1], // 0x13C
        pub m_bRoundInProgress: [u8; 0x3], // 0x13D
        pub m_iFirstSecondHalfRound: [u8; 0x4], // 0x140
        pub m_iBombSite: [u8; 0x4], // 0x144
        pub m_hBombPlanter: [u8; 0xA8], // 0x148
    }
    #[repr(C)]
    pub struct CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
        pub pad_0: [u8; 0x538], // 0x0
    }
    #[repr(C)]
    pub struct CInfoInstructorHintBombTargetA {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CTeamplayRules {
        pub pad_0: [u8; 0xD0], // 0x0
    }
    #[repr(C)]
    pub struct CScriptTriggerHurt {
        pub pad_0: [u8; 0xA50], // 0x0
        pub m_vExtent: [u8; 0x10], // 0xA50
    }
    #[repr(C)]
    pub struct CCSCustomHudLayoutState {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_playerSlot: [u8; 0x4], // 0x30
        pub m_bInputCaptureEnabled: [u8; 0x4], // 0x34
        pub m_vecHasClasses: [u8; 0x60], // 0x38
        pub m_vecDialogVariableStrings: [u8; 0x100], // 0x98
    }
    #[repr(C)]
    pub struct CCSGO_WingmanIntroCharacterPosition {
        pub pad_0: [u8; 0x1468], // 0x0
    }
    #[repr(C)]
    pub struct CWeaponMP9 {
        pub pad_0: [u8; 0x12A0], // 0x0
    }
    #[repr(C)]
    pub struct CTriggerDetectExplosion {
        pub pad_0: [u8; 0x9F0], // 0x0
        pub m_OnDetectedExplosion: [u8; 0x18], // 0x9F0
    }
    #[repr(C)]
    pub struct CFilterName {
        pub pad_0: [u8; 0x4E0], // 0x0
        pub m_iFilterName: [u8; 0x8], // 0x4E0
    }
    #[repr(C)]
    pub struct CPulseCell_ApplyDynamicAttributeString {
        pub pad_0: [u8; 0xD8], // 0x0
    }
    #[repr(C)]
    pub struct CSmokeGrenadeProjectile {
        pub pad_0: [u8; 0xB68], // 0x0
        pub m_nSmokeEffectTickBegin: [u8; 0x4], // 0xB68
        pub m_bDidSmokeEffect: [u8; 0x4], // 0xB6C
        pub m_nRandomSeed: [u8; 0x4], // 0xB70
        pub m_vSmokeColor: [u8; 0xC], // 0xB74
        pub m_vSmokeDetonationPos: [u8; 0x10], // 0xB80
        pub m_VoxelFrameData: [u8; 0x18], // 0xB90
        pub m_nVoxelFrameDataSize: [u8; 0x4], // 0xBA8
        pub m_nVoxelUpdate: [u8; 0x4], // 0xBAC
        pub m_nSmokeLightProbeRegen: [u8; 0x4], // 0xBB0
        pub m_flLastBounce: [u8; 0x4], // 0xBB4
        pub m_fllastSimulationTime: [u8; 0x2288], // 0xBB8
        pub m_bExplodeFromInferno: [u8; 0x1], // 0x2E40
        pub m_bDidGroundScorch: [u8; 0xF], // 0x2E41
    }
    #[repr(C)]
    pub struct CBlood {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_vecSprayAngles: [u8; 0xC], // 0x4A8
        pub m_vecSprayDir: [u8; 0xC], // 0x4B4
        pub m_flAmount: [u8; 0x4], // 0x4C0
        pub m_Color: [u8; 0x4], // 0x4C4
    }
    #[repr(C)]
    pub struct CCSTeam {
        pub pad_0: [u8; 0x560], // 0x0
        pub m_nLastRecievedShorthandedRoundBonus: [u8; 0x4], // 0x560
        pub m_nShorthandedRoundBonusStartRound: [u8; 0x4], // 0x564
        pub m_bSurrendered: [u8; 0x1], // 0x568
        pub m_szTeamMatchStat: [u8; 0x203], // 0x569
        pub m_numMapVictories: [u8; 0x4], // 0x76C
        pub m_scoreFirstHalf: [u8; 0x4], // 0x770
        pub m_scoreSecondHalf: [u8; 0x4], // 0x774
        pub m_scoreOvertime: [u8; 0x4], // 0x778
        pub m_szClanTeamname: [u8; 0x84], // 0x77C
        pub m_iClanID: [u8; 0x4], // 0x800
        pub m_szTeamFlagImage: [u8; 0x8], // 0x804
        pub m_szTeamLogoImage: [u8; 0x8], // 0x80C
        pub m_flNextResourceTime: [u8; 0x4], // 0x814
        pub m_iLastUpdateSentAt: [u8; 0x8], // 0x818
    }
    #[repr(C)]
    pub struct CRulePointEntity {
        pub pad_0: [u8; 0x858], // 0x0
        pub m_Score: [u8; 0x8], // 0x858
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
    pub struct CFuncMoveLinearAlias_momentary_door {
        pub pad_0: [u8; 0x958], // 0x0
    }
    #[repr(C)]
    pub struct CBaseAnimGraph {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_graphControllerManager: [u8; 0x98], // 0x850
        pub m_pMainGraphController: [u8; 0x8], // 0x8E8
        pub m_bInitiallyPopulateInterpHistory: [u8; 0x8], // 0x8F0
        pub m_OnLayerCycleUpdated: [u8; 0x20], // 0x8F8
        pub m_OnExternalChoreoGraphChanged: [u8; 0x18], // 0x918
        pub m_pChoreoServices: [u8; 0x8], // 0x930
        pub m_bAnimGraphUpdateEnabled: [u8; 0x1], // 0x938
        pub m_bAnimationUpdateScheduled: [u8; 0x3], // 0x939
        pub m_vecForce: [u8; 0xC], // 0x93C
        pub m_nForceBone: [u8; 0x10], // 0x948
        pub m_pRagdollControl: [u8; 0x8], // 0x958
        pub m_RagdollPose: [u8; 0x28], // 0x960
        pub m_bRagdollEnabled: [u8; 0x1], // 0x988
        pub m_bRagdollClientSide: [u8; 0x1], // 0x989
        pub m_bShouldUpdateTransformations: [u8; 0x6], // 0x98A
        pub m_xParentedRagdollRootInEntitySpace: [u8; 0xB0], // 0x990
    }
    #[repr(C)]
    pub struct CEnvCubemapFog {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_flEndDistance: [u8; 0x4], // 0x4A8
        pub m_flStartDistance: [u8; 0x4], // 0x4AC
        pub m_flFogFalloffExponent: [u8; 0x4], // 0x4B0
        pub m_bHeightFogEnabled: [u8; 0x4], // 0x4B4
        pub m_flFogHeightWidth: [u8; 0x4], // 0x4B8
        pub m_flFogHeightEnd: [u8; 0x4], // 0x4BC
        pub m_flFogHeightStart: [u8; 0x4], // 0x4C0
        pub m_flFogHeightExponent: [u8; 0x4], // 0x4C4
        pub m_flLODBias: [u8; 0x4], // 0x4C8
        pub m_bActive: [u8; 0x1], // 0x4CC
        pub m_bStartDisabled: [u8; 0x3], // 0x4CD
        pub m_flFogMaxOpacity: [u8; 0x4], // 0x4D0
        pub m_nCubemapSourceType: [u8; 0x4], // 0x4D4
        pub m_hSkyMaterial: [u8; 0x8], // 0x4D8
        pub m_iszSkyEntity: [u8; 0x8], // 0x4E0
        pub m_nHeightFogType: [u8; 0x4], // 0x4E8
        pub m_nFogHeightBlendMode: [u8; 0x4], // 0x4EC
        pub m_nFogHeightCoordinateSpace: [u8; 0x4], // 0x4F0
        pub m_nDistanceFogType: [u8; 0x4], // 0x4F4
        pub m_DistanceFogCurveString: [u8; 0x8], // 0x4F8
        pub m_HeightFogCurveString: [u8; 0x98], // 0x500
        pub m_hFogCubemapTexture: [u8; 0x8], // 0x598
        pub m_bHasHeightFogEnd: [u8; 0x1], // 0x5A0
        pub m_bFirstTime: [u8; 0x7], // 0x5A1
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
    pub struct CBaseDoor {
        pub pad_0: [u8; 0x8E0], // 0x0
        pub m_angMoveEntitySpace: [u8; 0xC], // 0x8E0
        pub m_vecMoveDirParentSpace: [u8; 0xC], // 0x8EC
        pub m_ls: [u8; 0x20], // 0x8F8
        pub m_bForceClosed: [u8; 0x1], // 0x918
        pub m_bDoorGroup: [u8; 0x1], // 0x919
        pub m_bLocked: [u8; 0x1], // 0x91A
        pub m_bIgnoreDebris: [u8; 0x1], // 0x91B
        pub m_bNoNPCs: [u8; 0x4], // 0x91C
        pub m_eSpawnPosition: [u8; 0x4], // 0x920
        pub m_flBlockDamage: [u8; 0x4], // 0x924
        pub m_NoiseMoving: [u8; 0x8], // 0x928
        pub m_NoiseArrived: [u8; 0x8], // 0x930
        pub m_NoiseMovingClosed: [u8; 0x8], // 0x938
        pub m_NoiseArrivedClosed: [u8; 0x8], // 0x940
        pub m_ChainTarget: [u8; 0x8], // 0x948
        pub m_OnBlockedClosing: [u8; 0x18], // 0x950
        pub m_OnBlockedOpening: [u8; 0x18], // 0x968
        pub m_OnUnblockedClosing: [u8; 0x18], // 0x980
        pub m_OnUnblockedOpening: [u8; 0x18], // 0x998
        pub m_OnFullyClosed: [u8; 0x18], // 0x9B0
        pub m_OnFullyOpen: [u8; 0x18], // 0x9C8
        pub m_OnClose: [u8; 0x18], // 0x9E0
        pub m_OnOpen: [u8; 0x18], // 0x9F8
        pub m_OnLockedUse: [u8; 0x18], // 0xA10
        pub m_bLoopMoveSound: [u8; 0x20], // 0xA28
        pub m_bCreateNavObstacle: [u8; 0x4], // 0xA48
        pub m_flSpeed: [u8; 0x4], // 0xA4C
        pub m_isChaining: [u8; 0x1], // 0xA50
        pub m_bIsUsable: [u8; 0x7], // 0xA51
    }
    #[repr(C)]
    pub struct CServerOnlyPointEntity {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CGameMoney {
        pub pad_0: [u8; 0x860], // 0x0
        pub m_OnMoneySpent: [u8; 0x18], // 0x860
        pub m_OnMoneySpentFail: [u8; 0x18], // 0x878
        pub m_nMoney: [u8; 0x8], // 0x890
        pub m_strAwardText: [u8; 0x8], // 0x898
    }
    #[repr(C)]
    pub struct CEnvHudHint {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_iszMessage: [u8; 0x8], // 0x4A8
    }
    #[repr(C)]
    pub struct CNullEntity {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CLogicalEntity {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CItemDefuser {
        pub pad_0: [u8; 0xAE0], // 0x0
        pub m_entitySpottedState: [u8; 0x18], // 0xAE0
        pub m_nSpotRules: [u8; 0x8], // 0xAF8
    }
    #[repr(C)]
    pub struct CItemGenericTriggerHelper {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_hParentItem: [u8; 0x8], // 0x850
    }
    #[repr(C)]
    pub struct CPlayer_WeaponServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_hMyWeapons: [u8; 0x18], // 0x48
        pub m_hActiveWeapon: [u8; 0x4], // 0x60
        pub m_hLastWeapon: [u8; 0x4], // 0x64
        pub m_iAmmo: [u8; 0x40], // 0x68
        pub m_bPreventWeaponPickup: [u8; 0x8], // 0xA8
    }
    #[repr(C)]
    pub struct CRagdollPropAttached {
        pub pad_0: [u8; 0xC00], // 0x0
        pub m_boneIndexAttached: [u8; 0x4], // 0xC00
        pub m_ragdollAttachedObjectIndex: [u8; 0x4], // 0xC04
        pub m_attachmentPointBoneSpace: [u8; 0xC], // 0xC08
        pub m_attachmentPointRagdollSpace: [u8; 0xC], // 0xC14
        pub m_bShouldDetach: [u8; 0x10], // 0xC20
        pub m_bShouldDeleteAttachedActivationRecord: [u8; 0x10], // 0xC30
    }
    #[repr(C)]
    pub struct CItemDogtags {
        pub pad_0: [u8; 0xAE0], // 0x0
        pub m_OwningPlayer: [u8; 0x4], // 0xAE0
        pub m_KillingPlayer: [u8; 0xC], // 0xAE4
    }
    #[repr(C)]
    pub struct CFuncPlat {
        pub pad_0: [u8; 0x8F8], // 0x0
        pub m_flSpeed: [u8; 0x8], // 0x8F8
        pub m_sNoise: [u8; 0x8], // 0x900
    }
    #[repr(C)]
    pub struct CBarnLight {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_bEnabled: [u8; 0x4], // 0x850
        pub m_nColorMode: [u8; 0x4], // 0x854
        pub m_Color: [u8; 0x4], // 0x858
        pub m_flColorTemperature: [u8; 0x4], // 0x85C
        pub m_flBrightness: [u8; 0x4], // 0x860
        pub m_flBrightnessScale: [u8; 0x4], // 0x864
        pub m_nDirectLight: [u8; 0x4], // 0x868
        pub m_nBakedShadowIndex: [u8; 0x4], // 0x86C
        pub m_nLightPathUniqueId: [u8; 0x4], // 0x870
        pub m_nLightMapUniqueId: [u8; 0x4], // 0x874
        pub m_nLuminaireShape: [u8; 0x4], // 0x878
        pub m_flLuminaireSize: [u8; 0x4], // 0x87C
        pub m_flLuminaireAnisotropy: [u8; 0x8], // 0x880
        pub m_LightStyleString: [u8; 0x8], // 0x888
        pub m_flLightStyleStartTime: [u8; 0x8], // 0x890
        pub m_QueuedLightStyleStrings: [u8; 0x18], // 0x898
        pub m_LightStyleEvents: [u8; 0x18], // 0x8B0
        pub m_LightStyleTargets: [u8; 0x18], // 0x8C8
        pub m_StyleEvent: [u8; 0x80], // 0x8E0
        pub m_hLightCookie: [u8; 0x8], // 0x960
        pub m_flShape: [u8; 0x4], // 0x968
        pub m_flSoftX: [u8; 0x4], // 0x96C
        pub m_flSoftY: [u8; 0x4], // 0x970
        pub m_flSkirt: [u8; 0x4], // 0x974
        pub m_flSkirtNear: [u8; 0x4], // 0x978
        pub m_vSizeParams: [u8; 0xC], // 0x97C
        pub m_flRange: [u8; 0x4], // 0x988
        pub m_vShear: [u8; 0xC], // 0x98C
        pub m_nBakeSpecularToCubemaps: [u8; 0x4], // 0x998
        pub m_vBakeSpecularToCubemapsSize: [u8; 0xC], // 0x99C
        pub m_flBakeSpecularToCubemapsScale: [u8; 0x4], // 0x9A8
        pub m_nCastShadows: [u8; 0x4], // 0x9AC
        pub m_nShadowMapSize: [u8; 0x4], // 0x9B0
        pub m_nShadowPriority: [u8; 0x4], // 0x9B4
        pub m_bContactShadow: [u8; 0x1], // 0x9B8
        pub m_bForceShadowsEnabled: [u8; 0x3], // 0x9B9
        pub m_nBounceLight: [u8; 0x4], // 0x9BC
        pub m_flBounceScale: [u8; 0x4], // 0x9C0
        pub m_flMinRoughness: [u8; 0x4], // 0x9C4
        pub m_vAlternateColor: [u8; 0xC], // 0x9C8
        pub m_fAlternateColorBrightness: [u8; 0x4], // 0x9D4
        pub m_nFog: [u8; 0x4], // 0x9D8
        pub m_flFogStrength: [u8; 0x4], // 0x9DC
        pub m_nFogShadows: [u8; 0x4], // 0x9E0
        pub m_flFogScale: [u8; 0x4], // 0x9E4
        pub m_flFadeSizeStart: [u8; 0x4], // 0x9E8
        pub m_flFadeSizeEnd: [u8; 0x4], // 0x9EC
        pub m_flShadowFadeSizeStart: [u8; 0x4], // 0x9F0
        pub m_flShadowFadeSizeEnd: [u8; 0x4], // 0x9F4
        pub m_bPrecomputedFieldsValid: [u8; 0x4], // 0x9F8
        pub m_vPrecomputedBoundsMins: [u8; 0xC], // 0x9FC
        pub m_vPrecomputedBoundsMaxs: [u8; 0xC], // 0xA08
        pub m_vPrecomputedOBBOrigin: [u8; 0xC], // 0xA14
        pub m_vPrecomputedOBBAngles: [u8; 0xC], // 0xA20
        pub m_vPrecomputedOBBExtent: [u8; 0xC], // 0xA2C
        pub m_nPrecomputedSubFrusta: [u8; 0x4], // 0xA38
        pub m_vPrecomputedOBBOrigin0: [u8; 0xC], // 0xA3C
        pub m_vPrecomputedOBBAngles0: [u8; 0xC], // 0xA48
        pub m_vPrecomputedOBBExtent0: [u8; 0xC], // 0xA54
        pub m_vPrecomputedOBBOrigin1: [u8; 0xC], // 0xA60
        pub m_vPrecomputedOBBAngles1: [u8; 0xC], // 0xA6C
        pub m_vPrecomputedOBBExtent1: [u8; 0xC], // 0xA78
        pub m_vPrecomputedOBBOrigin2: [u8; 0xC], // 0xA84
        pub m_vPrecomputedOBBAngles2: [u8; 0xC], // 0xA90
        pub m_vPrecomputedOBBExtent2: [u8; 0xC], // 0xA9C
        pub m_vPrecomputedOBBOrigin3: [u8; 0xC], // 0xAA8
        pub m_vPrecomputedOBBAngles3: [u8; 0xC], // 0xAB4
        pub m_vPrecomputedOBBExtent3: [u8; 0xC], // 0xAC0
        pub m_vPrecomputedOBBOrigin4: [u8; 0xC], // 0xACC
        pub m_vPrecomputedOBBAngles4: [u8; 0xC], // 0xAD8
        pub m_vPrecomputedOBBExtent4: [u8; 0xC], // 0xAE4
        pub m_vPrecomputedOBBOrigin5: [u8; 0xC], // 0xAF0
        pub m_vPrecomputedOBBAngles5: [u8; 0xC], // 0xAFC
        pub m_vPrecomputedOBBExtent5: [u8; 0xC], // 0xB08
        pub m_bPvsModifyEntity: [u8; 0x1], // 0xB14
        pub m_bTransmitAlways: [u8; 0x3], // 0xB15
        pub m_VisClusters: [u8; 0x20], // 0xB18
    }
    #[repr(C)]
    pub struct CInstructorEventEntity {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_iszName: [u8; 0x8], // 0x4A8
        pub m_iszHintTargetEntity: [u8; 0x8], // 0x4B0
        pub m_hTargetPlayer: [u8; 0x8], // 0x4B8
    }
    #[repr(C)]
    pub struct CWeaponTec9 {
        pub pad_0: [u8; 0x12A0], // 0x0
    }
    #[repr(C)]
    pub struct CPathCorner {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_bTriggerLocomotionStop: [u8; 0x1], // 0x4A8
        pub m_bSmoothArrival: [u8; 0x1], // 0x4A9
        pub m_bExactPositioning: [u8; 0x2], // 0x4AA
        pub m_flWait: [u8; 0x4], // 0x4AC
        pub m_flRadius: [u8; 0x4], // 0x4B0
        pub m_flWaypointSuccessRadiusWhenBlocked: [u8; 0x4], // 0x4B4
        pub m_flWaypointSuccessRadius: [u8; 0x4], // 0x4B8
        pub m_flPathEndDistanceFromGoal: [u8; 0x4], // 0x4BC
        pub m_flSpeed: [u8; 0x8], // 0x4C0
        pub m_OnPass: [u8; 0x18], // 0x4C8
    }
    #[repr(C)]
    pub struct CTriggerSndSosOpvar {
        pub pad_0: [u8; 0x9C8], // 0x0
        pub m_hTouchingPlayers: [u8; 0x18], // 0x9C8
        pub m_flPosition: [u8; 0xC], // 0x9E0
        pub m_flCenterSize: [u8; 0x4], // 0x9EC
        pub m_flMinVal: [u8; 0x4], // 0x9F0
        pub m_flMaxVal: [u8; 0x4], // 0x9F4
        pub m_opvarName: [u8; 0x8], // 0x9F8
        pub m_stackName: [u8; 0x8], // 0xA00
        pub m_operatorName: [u8; 0x8], // 0xA08
        pub m_bVolIs2D: [u8; 0x1], // 0xA10
        pub m_opvarNameChar: [u8; 0x100], // 0xA11
        pub m_stackNameChar: [u8; 0x100], // 0xB11
        pub m_operatorNameChar: [u8; 0x103], // 0xC11
        pub m_VecNormPos: [u8; 0xC], // 0xD14
        pub m_flNormCenterSize: [u8; 0x8], // 0xD20
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
    pub struct CPointCommentaryNode {
        pub pad_0: [u8; 0xA40], // 0x0
        pub m_iszPreCommands: [u8; 0x8], // 0xA40
        pub m_iszPostCommands: [u8; 0x8], // 0xA48
        pub m_iszCommentaryFile: [u8; 0x8], // 0xA50
        pub m_iszViewTarget: [u8; 0x8], // 0xA58
        pub m_hViewTarget: [u8; 0x4], // 0xA60
        pub m_hViewTargetAngles: [u8; 0x4], // 0xA64
        pub m_iszViewPosition: [u8; 0x8], // 0xA68
        pub m_hViewPosition: [u8; 0x4], // 0xA70
        pub m_hViewPositionMover: [u8; 0x4], // 0xA74
        pub m_bPreventMovement: [u8; 0x1], // 0xA78
        pub m_bUnderCrosshair: [u8; 0x1], // 0xA79
        pub m_bUnstoppable: [u8; 0x2], // 0xA7A
        pub m_flFinishedTime: [u8; 0x4], // 0xA7C
        pub m_vecFinishOrigin: [u8; 0xC], // 0xA80
        pub m_vecOriginalAngles: [u8; 0xC], // 0xA8C
        pub m_vecFinishAngles: [u8; 0xC], // 0xA98
        pub m_bPreventChangesWhileMoving: [u8; 0x1], // 0xAA4
        pub m_bDisabled: [u8; 0x3], // 0xAA5
        pub m_vecTeleportOrigin: [u8; 0xC], // 0xAA8
        pub m_flAbortedPlaybackAt: [u8; 0x4], // 0xAB4
        pub m_pOnCommentaryStarted: [u8; 0x18], // 0xAB8
        pub m_pOnCommentaryStopped: [u8; 0x18], // 0xAD0
        pub m_bActive: [u8; 0x4], // 0xAE8
        pub m_flStartTime: [u8; 0x4], // 0xAEC
        pub m_flStartTimeInCommentary: [u8; 0x8], // 0xAF0
        pub m_iszTitle: [u8; 0x8], // 0xAF8
        pub m_iszSpeakers: [u8; 0x8], // 0xB00
        pub m_iNodeNumber: [u8; 0x4], // 0xB08
        pub m_iNodeNumberMax: [u8; 0x4], // 0xB0C
        pub m_bListenedTo: [u8; 0x10], // 0xB10
    }
    #[repr(C)]
    pub struct CMomentaryRotButton {
        pub pad_0: [u8; 0x9D0], // 0x0
        pub m_Position: [u8; 0x20], // 0x9D0
        pub m_OnUnpressed: [u8; 0x18], // 0x9F0
        pub m_OnFullyOpen: [u8; 0x18], // 0xA08
        pub m_OnFullyClosed: [u8; 0x18], // 0xA20
        pub m_OnReachedPosition: [u8; 0x18], // 0xA38
        pub m_lastUsed: [u8; 0x4], // 0xA50
        pub m_start: [u8; 0xC], // 0xA54
        pub m_end: [u8; 0xC], // 0xA60
        pub m_IdealYaw: [u8; 0x4], // 0xA6C
        pub m_sNoise: [u8; 0x8], // 0xA70
        pub m_bUpdateTarget: [u8; 0x4], // 0xA78
        pub m_direction: [u8; 0x4], // 0xA7C
        pub m_returnSpeed: [u8; 0x4], // 0xA80
        pub m_flStartPosition: [u8; 0x4], // 0xA84
    }
    #[repr(C)]
    pub struct CSceneListManager {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_hListManagers: [u8; 0x18], // 0x4A8
        pub m_iszScenes: [u8; 0x80], // 0x4C0
        pub m_hScenes: [u8; 0x40], // 0x540
    }
    #[repr(C)]
    pub struct CEnvTilt {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_Duration: [u8; 0x4], // 0x4A8
        pub m_Radius: [u8; 0x4], // 0x4AC
        pub m_TiltTime: [u8; 0x4], // 0x4B0
        pub m_stopTime: [u8; 0x4], // 0x4B4
    }
    #[repr(C)]
    pub struct CEnvSoundscapeTriggerable {
        pub pad_0: [u8; 0x538], // 0x0
    }
    #[repr(C)]
    pub struct CFuncMover {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_iszPathName: [u8; 0x8], // 0x850
        pub m_hPathMover: [u8; 0x4], // 0x858
        pub m_hPrevPathMover: [u8; 0x4], // 0x85C
        pub m_iszPathNodeStart: [u8; 0x8], // 0x860
        pub m_iszPathNodeEnd: [u8; 0x8], // 0x868
        pub m_bIgnoreEndNode: [u8; 0x4], // 0x870
        pub m_eMoveType: [u8; 0x4], // 0x874
        pub m_bIsReversing: [u8; 0x4], // 0x878
        pub m_flStartSpeed: [u8; 0x4], // 0x87C
        pub m_flPathLocation: [u8; 0x4], // 0x880
        pub m_flT: [u8; 0x4], // 0x884
        pub m_nCurrentNodeIndex: [u8; 0x4], // 0x888
        pub m_nPreviousNodeIndex: [u8; 0x4], // 0x88C
        pub m_eSolidType: [u8; 0x1], // 0x890
        pub m_bIsMoving: [u8; 0x3], // 0x891
        pub m_flTimeToReachMaxSpeed: [u8; 0x4], // 0x894
        pub m_flDistanceToReachMaxSpeed: [u8; 0x4], // 0x898
        pub m_flTimeToReachZeroSpeed: [u8; 0x4], // 0x89C
        pub m_flComputedDistanceToReachMaxSpeed: [u8; 0x4], // 0x8A0
        pub m_flComputedDistanceToReachZeroSpeed: [u8; 0x4], // 0x8A4
        pub m_flStartCurveScale: [u8; 0x4], // 0x8A8
        pub m_flStopCurveScale: [u8; 0x4], // 0x8AC
        pub m_flDistanceToReachZeroSpeed: [u8; 0x4], // 0x8B0
        pub m_flTimeMovementStart: [u8; 0x4], // 0x8B4
        pub m_flTimeMovementStop: [u8; 0x4], // 0x8B8
        pub m_hStopAtNode: [u8; 0x4], // 0x8BC
        pub m_flPathLocationToBeginStop: [u8; 0x4], // 0x8C0
        pub m_flPathLocationStart: [u8; 0x4], // 0x8C4
        pub m_flBeginStopT: [u8; 0x8], // 0x8C8
        pub m_iszStartForwardSound: [u8; 0x8], // 0x8D0
        pub m_iszLoopForwardSound: [u8; 0x8], // 0x8D8
        pub m_iszStopForwardSound: [u8; 0x8], // 0x8E0
        pub m_iszStartReverseSound: [u8; 0x8], // 0x8E8
        pub m_iszLoopReverseSound: [u8; 0x8], // 0x8F0
        pub m_iszStopReverseSound: [u8; 0x8], // 0x8F8
        pub m_iszArriveAtDestinationSound: [u8; 0x20], // 0x900
        pub m_OnMovementEnd: [u8; 0x18], // 0x920
        pub m_bStartAtClosestPoint: [u8; 0x1], // 0x938
        pub m_bStartAtEnd: [u8; 0x1], // 0x939
        pub m_bStartFollowingClosestMover: [u8; 0x2], // 0x93A
        pub m_flStartFollowingClosestMoverWhenWithinDistance: [u8; 0x4], // 0x93C
        pub m_flStartFollowingClosestMoverWhenOutsideDistance: [u8; 0x4], // 0x940
        pub m_eOrientationUpdate: [u8; 0x4], // 0x944
        pub m_flTimeStartOrientationChange: [u8; 0x4], // 0x948
        pub m_flTimeToBlendToNewOrientation: [u8; 0x4], // 0x94C
        pub m_flDurationBlendToNewOrientationRan: [u8; 0x4], // 0x950
        pub m_bCreateMovableNavMesh: [u8; 0x1], // 0x954
        pub m_bCreateMovableSurfaceGraph: [u8; 0x1], // 0x955
        pub m_bAllowMovableNavMeshDockingOnEntireEntity: [u8; 0x2], // 0x956
        pub m_OnNodePassed: [u8; 0x20], // 0x958
        pub m_iszOrientationMatchEntityName: [u8; 0x8], // 0x978
        pub m_hOrientationMatchEntity: [u8; 0x4], // 0x980
        pub m_vLerpToNewPosStartWS: [u8; 0xC], // 0x984
        pub m_flLerpToPositionTargetT: [u8; 0x4], // 0x990
        pub m_flLerpToPositionT: [u8; 0x4], // 0x994
        pub m_flLerpToPositionDeltaT: [u8; 0x4], // 0x998
        pub m_hTransitionSourcePath: [u8; 0x4], // 0x99C
        pub m_flTransitionSourceT: [u8; 0x4], // 0x9A0
        pub m_flTransitionSourcePathLocation: [u8; 0x4], // 0x9A4
        pub m_iszTransitionSourcePathNodeStart: [u8; 0x8], // 0x9A8
        pub m_bStoppedDuringTransition: [u8; 0x8], // 0x9B0
        pub m_OnLerpToPositionComplete: [u8; 0x18], // 0x9B8
        pub m_bIsPaused: [u8; 0x4], // 0x9D0
        pub m_eTransitionedToPathNodeAction: [u8; 0xC], // 0x9D4
        pub m_qTransitionSourceOrientation: [u8; 0x10], // 0x9E0
        pub m_nDelayedTeleportToNode: [u8; 0x4], // 0x9F0
        pub m_bIsImGuiLogging: [u8; 0x1], // 0x9F4
        pub m_bIsImGuiEntTextLogging: [u8; 0x3], // 0x9F5
        pub m_flSpeed: [u8; 0x4], // 0x9F8
        pub m_hFollowEntity: [u8; 0x4], // 0x9FC
        pub m_flFollowDistance: [u8; 0x4], // 0xA00
        pub m_flFollowMinimumSpeed: [u8; 0x4], // 0xA04
        pub m_flCurFollowEntityT: [u8; 0x4], // 0xA08
        pub m_flCurFollowSpeed: [u8; 0x4], // 0xA0C
        pub m_strOrientationFaceEntityName: [u8; 0x8], // 0xA10
        pub m_hOrientationFaceEntity: [u8; 0x8], // 0xA18
        pub m_OnStart: [u8; 0x18], // 0xA20
        pub m_OnStartForward: [u8; 0x18], // 0xA38
        pub m_OnStartReverse: [u8; 0x18], // 0xA50
        pub m_OnStop: [u8; 0x18], // 0xA68
        pub m_OnStopped: [u8; 0x18], // 0xA80
        pub m_bNextNodeReturnsCurrent: [u8; 0x1], // 0xA98
        pub m_bStartedMoving: [u8; 0x1F], // 0xA99
        pub m_eFollowEntityDirection: [u8; 0x4], // 0xAB8
        pub m_hFollowMover: [u8; 0x4], // 0xABC
        pub m_iszFollowEntityName: [u8; 0x8], // 0xAC0
        pub m_iszFollowMoverEntityName: [u8; 0x8], // 0xAC8
        pub m_flFollowMoverDistance: [u8; 0x4], // 0xAD0
        pub m_flFollowMoverRatio: [u8; 0x4], // 0xAD4
        pub m_flFollowMoverCalculatedDistance: [u8; 0x4], // 0xAD8
        pub m_flFollowMoverSpringStrength: [u8; 0x4], // 0xADC
        pub m_nFollowMoverConstraintPriority: [u8; 0x4], // 0xAE0
        pub m_vecFollowMoverCouplerRange: [u8; 0x8], // 0xAE4
        pub m_bFollowConstraintsInitialized: [u8; 0x4], // 0xAEC
        pub m_eFollowConstraint: [u8; 0x4], // 0xAF0
        pub m_flFollowMoverSpeed: [u8; 0x4], // 0xAF4
        pub m_flFollowMoverVelocity: [u8; 0x4], // 0xAF8
        pub m_nTickMovementRan: [u8; 0x4], // 0xAFC
        pub m_movementSummary: [u8; 0x20], // 0xB00
        pub m_bStopFromBeginStopTarget: [u8; 0x1], // 0xB20
        pub m_bQueueStop: [u8; 0x1], // 0xB21
        pub m_bQueueStopMoving: [u8; 0x1], // 0xB22
        pub m_bQueueSetupPathMover: [u8; 0x1], // 0xB23
        pub m_ePathRebuildStrategy: [u8; 0x4], // 0xB24
        pub m_eFindFollowMoverStrategy: [u8; 0x4], // 0xB28
        pub m_bDisableDecelerationToStop: [u8; 0x4], // 0xB2C
        pub m_vOffsetFromPath: [u8; 0x10], // 0xB30
    }
    #[repr(C)]
    pub struct CPhysicsProp {
        pub pad_0: [u8; 0xBE0], // 0x0
        pub m_MotionEnabled: [u8; 0x18], // 0xBE0
        pub m_OnAwakened: [u8; 0x18], // 0xBF8
        pub m_OnAwake: [u8; 0x18], // 0xC10
        pub m_OnAsleep: [u8; 0x18], // 0xC28
        pub m_OnPlayerUse: [u8; 0x18], // 0xC40
        pub m_OnOutOfWorld: [u8; 0x18], // 0xC58
        pub m_OnPlayerPickup: [u8; 0x18], // 0xC70
        pub m_bForceNavIgnore: [u8; 0x1], // 0xC88
        pub m_bNoNavmeshBlocker: [u8; 0x1], // 0xC89
        pub m_bForceNpcExclude: [u8; 0x2], // 0xC8A
        pub m_massScale: [u8; 0x4], // 0xC8C
        pub m_buoyancyScale: [u8; 0x4], // 0xC90
        pub m_damageType: [u8; 0x4], // 0xC94
        pub m_damageToEnableMotion: [u8; 0x4], // 0xC98
        pub m_flForceToEnableMotion: [u8; 0x4], // 0xC9C
        pub m_bDroppedByPlayer: [u8; 0x1], // 0xCA0
        pub m_bTouchedByPlayer: [u8; 0x1], // 0xCA1
        pub m_bFirstCollisionAfterLaunch: [u8; 0x1], // 0xCA2
        pub m_bHasBeenAwakened: [u8; 0x1], // 0xCA3
        pub m_bIsOverrideProp: [u8; 0x4], // 0xCA4
        pub m_flLastBurn: [u8; 0x4], // 0xCA8
        pub m_nDynamicContinuousContactBehavior: [u8; 0x4], // 0xCAC
        pub m_fNextCheckDisableMotionContactsTime: [u8; 0x4], // 0xCB0
        pub m_iInitialGlowState: [u8; 0x4], // 0xCB4
        pub m_nGlowRange: [u8; 0x4], // 0xCB8
        pub m_nGlowRangeMin: [u8; 0x4], // 0xCBC
        pub m_glowColor: [u8; 0x4], // 0xCC0
        pub m_bShouldAutoConvertBackFromDebris: [u8; 0x1], // 0xCC4
        pub m_bMuteImpactEffects: [u8; 0x3], // 0xCC5
        pub m_nNavObstacleType: [u8; 0x4], // 0xCC8
        pub m_bUpdateNavWhenMoving: [u8; 0x1], // 0xCCC
        pub m_bForceNavObstacleCut: [u8; 0x1], // 0xCCD
        pub m_bAcceptDamageFromHeldObjects: [u8; 0x1], // 0xCCE
        pub m_bEnableUseOutput: [u8; 0x1], // 0xCCF
        pub m_CrateType: [u8; 0x8], // 0xCD0
        pub m_strItemClass: [u8; 0x20], // 0xCD8
        pub m_nItemCount: [u8; 0x10], // 0xCF8
        pub m_bRemovableForAmmoBalancing: [u8; 0x1], // 0xD08
        pub m_bAwake: [u8; 0x1], // 0xD09
        pub m_bAttachedToReferenceFrame: [u8; 0x6], // 0xD0A
    }
    #[repr(C)]
    pub struct CFuncNavObstruction {
        pub pad_0: [u8; 0x868], // 0x0
        pub m_bDisabled: [u8; 0x1], // 0x868
        pub m_bUseAsyncObstacleUpdate: [u8; 0x7], // 0x869
    }
    #[repr(C)]
    pub struct CPhysWheelConstraint {
        pub pad_0: [u8; 0x508], // 0x0
        pub m_flSuspensionFrequency: [u8; 0x4], // 0x508
        pub m_flSuspensionDampingRatio: [u8; 0x4], // 0x50C
        pub m_flSuspensionHeightOffset: [u8; 0x4], // 0x510
        pub m_bEnableSuspensionLimit: [u8; 0x4], // 0x514
        pub m_flMinSuspensionOffset: [u8; 0x4], // 0x518
        pub m_flMaxSuspensionOffset: [u8; 0x4], // 0x51C
        pub m_bEnableSteeringLimit: [u8; 0x4], // 0x520
        pub m_flMinSteeringAngle: [u8; 0x4], // 0x524
        pub m_flMaxSteeringAngle: [u8; 0x4], // 0x528
        pub m_flSteeringAxisFriction: [u8; 0x4], // 0x52C
        pub m_flSpinAxisFriction: [u8; 0x4], // 0x530
        pub m_hSteeringMimicsEntity: [u8; 0xC], // 0x534
    }
    #[repr(C)]
    pub struct CSkyboxReference {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_worldGroupId: [u8; 0x4], // 0x4A8
        pub m_hSkyCamera: [u8; 0x4], // 0x4AC
    }
    #[repr(C)]
    pub struct CPointPulse {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CMolotovProjectile {
        pub pad_0: [u8; 0xB40], // 0x0
        pub m_bIsIncGrenade: [u8; 0x18], // 0xB40
        pub m_bDetonated: [u8; 0x8], // 0xB58
        pub m_stillTimer: [u8; 0xE0], // 0xB60
    }
    #[repr(C)]
    pub struct CFilterClass {
        pub pad_0: [u8; 0x4E0], // 0x0
        pub m_iFilterClass: [u8; 0x8], // 0x4E0
    }
    #[repr(C)]
    pub struct CPathWithDynamicNodes {
        pub pad_0: [u8; 0x5B0], // 0x0
        pub m_vecPathNodes: [u8; 0x20], // 0x5B0
        pub m_xInitialPathWorldToLocal: [u8; 0x20], // 0x5D0
        pub m_eDesiredDirection: [u8; 0x4], // 0x5F0
        pub m_bIgnoreParentRotation: [u8; 0xC], // 0x5F4
    }
    #[repr(C)]
    pub struct CColorCorrection {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_flFadeInDuration: [u8; 0x4], // 0x4A8
        pub m_flFadeOutDuration: [u8; 0x4], // 0x4AC
        pub m_flStartFadeInWeight: [u8; 0x4], // 0x4B0
        pub m_flStartFadeOutWeight: [u8; 0x4], // 0x4B4
        pub m_flTimeStartFadeIn: [u8; 0x4], // 0x4B8
        pub m_flTimeStartFadeOut: [u8; 0x4], // 0x4BC
        pub m_flMaxWeight: [u8; 0x4], // 0x4C0
        pub m_bStartDisabled: [u8; 0x1], // 0x4C4
        pub m_bEnabled: [u8; 0x1], // 0x4C5
        pub m_bMaster: [u8; 0x1], // 0x4C6
        pub m_bClientSide: [u8; 0x1], // 0x4C7
        pub m_bExclusive: [u8; 0x4], // 0x4C8
        pub m_MinFalloff: [u8; 0x4], // 0x4CC
        pub m_MaxFalloff: [u8; 0x4], // 0x4D0
        pub m_flCurWeight: [u8; 0x4], // 0x4D4
        pub m_netlookupFilename: [u8; 0x200], // 0x4D8
        pub m_lookupFilename: [u8; 0x8], // 0x6D8
    }
    #[repr(C)]
    pub struct CPropDoorRotatingBreakable {
        pub pad_0: [u8; 0xF30], // 0x0
        pub m_bBreakable: [u8; 0x1], // 0xF30
        pub m_isAbleToCloseAreaPortals: [u8; 0x3], // 0xF31
        pub m_currentDamageState: [u8; 0x4], // 0xF34
        pub m_damageStates: [u8; 0x18], // 0xF38
    }
    #[repr(C)]
    pub struct CLightDirectionalEntity {
        pub pad_0: [u8; 0x858], // 0x0
    }
    #[repr(C)]
    pub struct CBaseClientUIEntity {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_bEnabled: [u8; 0x8], // 0x850
        pub m_DialogXMLName: [u8; 0x8], // 0x858
        pub m_PanelClassName: [u8; 0x8], // 0x860
        pub m_PanelID: [u8; 0x8], // 0x868
        pub m_CustomOutput0: [u8; 0x20], // 0x870
        pub m_CustomOutput1: [u8; 0x20], // 0x890
        pub m_CustomOutput2: [u8; 0x20], // 0x8B0
        pub m_CustomOutput3: [u8; 0x20], // 0x8D0
        pub m_CustomOutput4: [u8; 0x20], // 0x8F0
        pub m_CustomOutput5: [u8; 0x20], // 0x910
        pub m_CustomOutput6: [u8; 0x20], // 0x930
        pub m_CustomOutput7: [u8; 0x20], // 0x950
        pub m_CustomOutput8: [u8; 0x20], // 0x970
        pub m_CustomOutput9: [u8; 0x20], // 0x990
    }
    #[repr(C)]
    pub struct CBreakable {
        pub pad_0: [u8; 0x858], // 0x0
        pub m_CPropDataComponent: [u8; 0x40], // 0x858
        pub m_Material: [u8; 0x4], // 0x898
        pub m_hBreaker: [u8; 0x4], // 0x89C
        pub m_Explosion: [u8; 0x8], // 0x8A0
        pub m_iszSpawnObject: [u8; 0x8], // 0x8A8
        pub m_flPressureDelay: [u8; 0x4], // 0x8B0
        pub m_iMinHealthDmg: [u8; 0x4], // 0x8B4
        pub m_iszPropData: [u8; 0x8], // 0x8B8
        pub m_impactEnergyScale: [u8; 0x4], // 0x8C0
        pub m_nOverrideBlockLOS: [u8; 0x4], // 0x8C4
        pub m_OnStartDeath: [u8; 0x18], // 0x8C8
        pub m_OnBreak: [u8; 0x18], // 0x8E0
        pub m_OnHealthChanged: [u8; 0x20], // 0x8F8
        pub m_PerformanceMode: [u8; 0x4], // 0x918
        pub m_hPhysicsAttacker: [u8; 0x4], // 0x91C
        pub m_flLastPhysicsInfluenceTime: [u8; 0x8], // 0x920
    }
    #[repr(C)]
    pub struct CInfoLandmark {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CBaseFilter {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_bNegated: [u8; 0x8], // 0x4A8
        pub m_OnPass: [u8; 0x18], // 0x4B0
        pub m_OnFail: [u8; 0x18], // 0x4C8
    }
    #[repr(C)]
    pub struct WeaponPurchaseTracker_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_weaponPurchases: [u8; 0x68], // 0x8
    }
    #[repr(C)]
    pub struct CPulseCell_Outflow_PlaySceneBase__CursorState_t {
        pub m_sceneInstance: [u8; 0x4], // 0x0
        pub m_mainActor: [u8; 0x4], // 0x4
        pub m_cursorIDToEventID: [u8; 0x20], // 0x8
    }
    #[repr(C)]
    pub struct CMapInfo {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_iBuyingStatus: [u8; 0x4], // 0x4A8
        pub m_flBombRadius: [u8; 0x4], // 0x4AC
        pub m_iPetPopulation: [u8; 0x4], // 0x4B0
        pub m_bUseNormalSpawnsForDM: [u8; 0x1], // 0x4B4
        pub m_bDisableAutoGeneratedDMSpawns: [u8; 0x3], // 0x4B5
        pub m_flBotMaxVisionDistance: [u8; 0x4], // 0x4B8
        pub m_iHostageCount: [u8; 0x4], // 0x4BC
        pub m_bFadePlayerVisibilityFarZ: [u8; 0x1], // 0x4C0
        pub m_bRainTraceToSkyEnabled: [u8; 0x1], // 0x4C1
        pub m_bGPUCullSkybox: [u8; 0x2], // 0x4C2
        pub m_flEnvRainStrength: [u8; 0x4], // 0x4C4
        pub m_flEnvPuddleRippleStrength: [u8; 0x4], // 0x4C8
        pub m_flEnvPuddleRippleDirection: [u8; 0x4], // 0x4CC
        pub m_flEnvWetnessCoverage: [u8; 0x4], // 0x4D0
        pub m_flEnvWetnessDryingAmount: [u8; 0x4], // 0x4D4
    }
    #[repr(C)]
    pub struct CGradientFog {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_hGradientFogTexture: [u8; 0x8], // 0x4A8
        pub m_flFogStartDistance: [u8; 0x4], // 0x4B0
        pub m_flFogEndDistance: [u8; 0x4], // 0x4B4
        pub m_bHeightFogEnabled: [u8; 0x4], // 0x4B8
        pub m_flFogStartHeight: [u8; 0x4], // 0x4BC
        pub m_flFogEndHeight: [u8; 0x4], // 0x4C0
        pub m_flFarZ: [u8; 0x4], // 0x4C4
        pub m_flFogMaxOpacity: [u8; 0x4], // 0x4C8
        pub m_flFogFalloffExponent: [u8; 0x4], // 0x4CC
        pub m_flFogVerticalExponent: [u8; 0x4], // 0x4D0
        pub m_fogColor: [u8; 0x4], // 0x4D4
        pub m_flFogStrength: [u8; 0x4], // 0x4D8
        pub m_flFadeTime: [u8; 0x4], // 0x4DC
        pub m_bStartDisabled: [u8; 0x1], // 0x4E0
        pub m_bIsEnabled: [u8; 0x1], // 0x4E1
        pub m_bGradientFogNeedsTextures: [u8; 0x6], // 0x4E2
    }
    #[repr(C)]
    pub struct CSoundOpvarSetAABBEntity {
        pub pad_0: [u8; 0x6A8], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_Outflow_PlaySequence {
        pub pad_0: [u8; 0x138], // 0x0
        pub m_ParamSequenceName: [u8; 0x8], // 0x138
    }
    #[repr(C)]
    pub struct CPulseCell_Outflow_PlayDynamicVCD {
        pub pad_0: [u8; 0x138], // 0x0
    }
    #[repr(C)]
    pub struct CPointClientUIWorldTextPanel {
        pub pad_0: [u8; 0xA10], // 0x0
        pub m_messageText: [u8; 0x200], // 0xA10
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
    pub struct CFuncRotator {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_eRotateType: [u8; 0x4], // 0x850
        pub m_bIsRotating: [u8; 0x1], // 0x854
        pub m_eSolidType: [u8; 0x3], // 0x855
        pub m_flSpeed: [u8; 0x4], // 0x858
        pub m_flRotationDistanceDegrees: [u8; 0x4], // 0x85C
        pub m_flTimeToCompleteRotation: [u8; 0x4], // 0x860
        pub m_hRotatorTarget: [u8; 0x4], // 0x864
        pub m_strRotatorTarget: [u8; 0x8], // 0x868
        pub m_OnRotationStarted: [u8; 0x18], // 0x870
        pub m_OnRotationCompleted: [u8; 0x18], // 0x888
        pub m_OnOscillate: [u8; 0x18], // 0x8A0
        pub m_OnOscillateStartArrive: [u8; 0x18], // 0x8B8
        pub m_OnOscillateStartDepart: [u8; 0x18], // 0x8D0
        pub m_OnOscillateEndArrive: [u8; 0x18], // 0x8E8
        pub m_OnOscillateEndDepart: [u8; 0x18], // 0x900
        pub m_nTickRotateRan: [u8; 0x4], // 0x918
        pub m_bStartedRotating: [u8; 0x4], // 0x91C
        pub m_rotationSummary: [u8; 0x8], // 0x920
        pub m_flTimeToReachMaxSpeed: [u8; 0x4], // 0x928
        pub m_flTimeToReachZeroSpeed: [u8; 0x4], // 0x92C
        pub m_flTimeRotationStart: [u8; 0x4], // 0x930
        pub m_flTimeRotationStop: [u8; 0x4], // 0x934
        pub m_flStartSpeed: [u8; 0x8], // 0x938
        pub m_qSpawnOrientation: [u8; 0x10], // 0x940
        pub m_bReturningToInitialRotation: [u8; 0x4], // 0x950
        pub m_flMinYawRotation: [u8; 0x4], // 0x954
        pub m_flMaxYawRotation: [u8; 0x4], // 0x958
        pub m_bOscillationFromStart: [u8; 0x4], // 0x95C
        pub m_iszStartSound: [u8; 0x8], // 0x960
        pub m_iszLoopSound: [u8; 0x20], // 0x968
        pub m_iszStopSound: [u8; 0x8], // 0x988
        pub m_flTargetAngle: [u8; 0x4], // 0x990
        pub m_flCurrentAngle: [u8; 0x4], // 0x994
        pub m_eRotationAxis: [u8; 0x4], // 0x998
        pub m_flSpeedDriftFromOverRotate: [u8; 0x4], // 0x99C
        pub m_bQueueStop: [u8; 0x10], // 0x9A0
    }
    #[repr(C)]
    pub struct CSoundEventEntity {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_bStartOnSpawn: [u8; 0x1], // 0x4A8
        pub m_bToLocalPlayer: [u8; 0x1], // 0x4A9
        pub m_bStopOnNew: [u8; 0x1], // 0x4AA
        pub m_bSaveRestore: [u8; 0x1], // 0x4AB
        pub m_bSavedIsPlaying: [u8; 0x4], // 0x4AC
        pub m_flSavedElapsedTime: [u8; 0x8], // 0x4B0
        pub m_iszSourceEntityName: [u8; 0x8], // 0x4B8
        pub m_iszAttachmentName: [u8; 0x8], // 0x4C0
        pub m_onGUIDChanged: [u8; 0x30], // 0x4C8
        pub m_onSoundFinished: [u8; 0x18], // 0x4F8
        pub m_flClientCullRadius: [u8; 0x30], // 0x510
        pub m_iszSoundName: [u8; 0x1C], // 0x540
        pub m_hSource: [u8; 0x4], // 0x55C
        pub m_nEntityIndexSelection: [u8; 0x8], // 0x560
    }
    #[repr(C)]
    pub struct CInfoPlayerCounterterrorist {
        pub pad_0: [u8; 0x4B8], // 0x0
    }
    #[repr(C)]
    pub struct CEnvFade {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_fadeColor: [u8; 0x4], // 0x4A8
        pub m_Duration: [u8; 0x4], // 0x4AC
        pub m_HoldDuration: [u8; 0x8], // 0x4B0
        pub m_OnBeginFade: [u8; 0x18], // 0x4B8
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
    pub struct CTriggerImpact {
        pub pad_0: [u8; 0x9E0], // 0x0
        pub m_flMagnitude: [u8; 0x4], // 0x9E0
        pub m_flNoise: [u8; 0x4], // 0x9E4
        pub m_flViewkick: [u8; 0x8], // 0x9E8
        pub m_pOutputForce: [u8; 0x28], // 0x9F0
    }
    #[repr(C)]
    pub struct CCSGameModeRules_Deathmatch {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_flDMBonusStartTime: [u8; 0x4], // 0x30
        pub m_flDMBonusTimeLength: [u8; 0x4], // 0x34
        pub m_sDMBonusWeapon: [u8; 0x50], // 0x38
    }
    #[repr(C)]
    pub struct CTestPulseIO__EntityHandleIntArgs_t {
        pub handleA: [u8; 0x4], // 0x0
        pub valueB: [u8; 0x4], // 0x4
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
    pub struct CBasePropDoor {
        pub pad_0: [u8; 0xCA0], // 0x0
        pub m_flAutoReturnDelay: [u8; 0x8], // 0xCA0
        pub m_hDoorList: [u8; 0x18], // 0xCA8
        pub m_nHardwareType: [u8; 0x4], // 0xCC0
        pub m_bNeedsHardware: [u8; 0x4], // 0xCC4
        pub m_eDoorState: [u8; 0x4], // 0xCC8
        pub m_bLocked: [u8; 0x1], // 0xCCC
        pub m_bNoNPCs: [u8; 0x3], // 0xCCD
        pub m_closedPosition: [u8; 0xC], // 0xCD0
        pub m_closedAngles: [u8; 0xC], // 0xCDC
        pub m_hBlocker: [u8; 0x4], // 0xCE8
        pub m_bFirstBlocked: [u8; 0x4], // 0xCEC
        pub m_ls: [u8; 0x20], // 0xCF0
        pub m_bForceClosed: [u8; 0x4], // 0xD10
        pub m_vecLatchWorldPosition: [u8; 0xC], // 0xD14
        pub m_hActivator: [u8; 0x4], // 0xD20
        pub m_flSpeed: [u8; 0x1C], // 0xD24
        pub m_SoundMoving: [u8; 0x8], // 0xD40
        pub m_SoundOpen: [u8; 0x8], // 0xD48
        pub m_SoundClose: [u8; 0x8], // 0xD50
        pub m_SoundLock: [u8; 0x8], // 0xD58
        pub m_SoundUnlock: [u8; 0x8], // 0xD60
        pub m_SoundLatch: [u8; 0x8], // 0xD68
        pub m_SoundPound: [u8; 0x8], // 0xD70
        pub m_SoundJiggle: [u8; 0x8], // 0xD78
        pub m_SoundLockedAnim: [u8; 0x8], // 0xD80
        pub m_numCloseAttempts: [u8; 0x4], // 0xD88
        pub m_nPhysicsMaterial: [u8; 0x4], // 0xD8C
        pub m_SlaveName: [u8; 0x8], // 0xD90
        pub m_hMaster: [u8; 0x8], // 0xD98
        pub m_OnBlockedClosing: [u8; 0x18], // 0xDA0
        pub m_OnBlockedOpening: [u8; 0x18], // 0xDB8
        pub m_OnUnblockedClosing: [u8; 0x18], // 0xDD0
        pub m_OnUnblockedOpening: [u8; 0x18], // 0xDE8
        pub m_OnFullyClosed: [u8; 0x18], // 0xE00
        pub m_OnFullyOpen: [u8; 0x18], // 0xE18
        pub m_OnClose: [u8; 0x18], // 0xE30
        pub m_OnOpen: [u8; 0x18], // 0xE48
        pub m_OnLockedUse: [u8; 0x18], // 0xE60
        pub m_OnAjarOpen: [u8; 0x18], // 0xE78
    }
    #[repr(C)]
    pub struct CLogicBranchList {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_nLogicBranchNames: [u8; 0x80], // 0x4A8
        pub m_LogicBranchList: [u8; 0x18], // 0x528
        pub m_eLastState: [u8; 0x8], // 0x540
        pub m_OnAllTrue: [u8; 0x18], // 0x548
        pub m_OnAllFalse: [u8; 0x18], // 0x560
        pub m_OnMixed: [u8; 0x18], // 0x578
    }
    #[repr(C)]
    pub struct CBtActionParachutePositioning {
        pub pad_0: [u8; 0x58], // 0x0
        pub m_ActionTimer: [u8; 0x20], // 0x58
    }
    #[repr(C)]
    pub struct CAK47 {
        pub pad_0: [u8; 0x12A0], // 0x0
    }
    #[repr(C)]
    pub struct CDynamicProp {
        pub pad_0: [u8; 0xBD0], // 0x0
        pub m_bGraphControllerEnabled: [u8; 0x10], // 0xBD0
        pub m_bCreateNavObstacle: [u8; 0x1], // 0xBE0
        pub m_bNavObstacleUpdatesOverridden: [u8; 0x1], // 0xBE1
        pub m_bUseHitboxesForRenderBox: [u8; 0x1], // 0xBE2
        pub m_bUseAnimGraph: [u8; 0x5], // 0xBE3
        pub m_pOutputAnimBegun: [u8; 0x18], // 0xBE8
        pub m_pOutputAnimOver: [u8; 0x18], // 0xC00
        pub m_pOutputAnimLoopCycleOver: [u8; 0x18], // 0xC18
        pub m_OnAnimReachedStart: [u8; 0x18], // 0xC30
        pub m_OnAnimReachedEnd: [u8; 0x18], // 0xC48
        pub m_iszIdleAnim: [u8; 0x8], // 0xC60
        pub m_nIdleAnimLoopMode: [u8; 0x4], // 0xC68
        pub m_bRandomizeCycle: [u8; 0x1], // 0xC6C
        pub m_bStartDisabled: [u8; 0x1], // 0xC6D
        pub m_bFiredStartEndOutput: [u8; 0x1], // 0xC6E
        pub m_bForceNpcExclude: [u8; 0x1], // 0xC6F
        pub m_bCreateMovableSurfaceGraph: [u8; 0x1], // 0xC70
        pub m_bCreateNonSolid: [u8; 0x1], // 0xC71
        pub m_bIsOverrideProp: [u8; 0x2], // 0xC72
        pub m_iInitialGlowState: [u8; 0x4], // 0xC74
        pub m_nGlowRange: [u8; 0x4], // 0xC78
        pub m_nGlowRangeMin: [u8; 0x4], // 0xC7C
        pub m_glowColor: [u8; 0x4], // 0xC80
        pub m_nGlowTeam: [u8; 0xC], // 0xC84
    }
    #[repr(C)]
    pub struct CHostageAlias_info_hostage_spawn {
        pub pad_0: [u8; 0x2DA0], // 0x0
    }
    #[repr(C)]
    pub struct CFilterTeam {
        pub pad_0: [u8; 0x4E0], // 0x0
        pub m_iFilterTeam: [u8; 0x8], // 0x4E0
    }
    #[repr(C)]
    pub struct CFuncConveyor {
        pub pad_0: [u8; 0x850], // 0x0
        pub m_szConveyorModels: [u8; 0x8], // 0x850
        pub m_flTransitionDurationSeconds: [u8; 0x4], // 0x858
        pub m_flSpeed: [u8; 0x4], // 0x85C
        pub m_angMoveEntitySpace: [u8; 0xC], // 0x860
        pub m_vecMoveDirEntitySpace: [u8; 0xC], // 0x86C
        pub m_flTargetSpeed: [u8; 0x4], // 0x878
        pub m_nTransitionStartTick: [u8; 0x4], // 0x87C
        pub m_nTransitionDurationTicks: [u8; 0x4], // 0x880
        pub m_flTransitionStartSpeed: [u8; 0x4], // 0x884
        pub m_flFrictionScale: [u8; 0x8], // 0x888
        pub m_hConveyorModels: [u8; 0x18], // 0x890
    }
    #[repr(C)]
    pub struct CTriggerPhysics {
        pub pad_0: [u8; 0x9D0], // 0x0
        pub m_pController: [u8; 0x8], // 0x9D0
        pub m_gravityScale: [u8; 0x4], // 0x9D8
        pub m_linearLimit: [u8; 0x4], // 0x9DC
        pub m_linearDamping: [u8; 0x4], // 0x9E0
        pub m_angularLimit: [u8; 0x4], // 0x9E4
        pub m_angularDamping: [u8; 0x4], // 0x9E8
        pub m_linearForce: [u8; 0x4], // 0x9EC
        pub m_flFrequency: [u8; 0x4], // 0x9F0
        pub m_flDampingRatio: [u8; 0x4], // 0x9F4
        pub m_vecLinearForcePointAt: [u8; 0xC], // 0x9F8
        pub m_bCollapseToForcePoint: [u8; 0x4], // 0xA04
        pub m_vecLinearForcePointAtWorld: [u8; 0xC], // 0xA08
        pub m_vecLinearForceDirection: [u8; 0xC], // 0xA14
        pub m_bForceDirectionIsInLocalSpace: [u8; 0x1], // 0xA20
        pub m_bConvertToDebrisWhenPossible: [u8; 0x7], // 0xA21
    }
    #[repr(C)]
    pub struct CInfoInstructorHintBombTargetB {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CFuncTimescale {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_flDesiredTimescale: [u8; 0x4], // 0x4A8
        pub m_flAcceleration: [u8; 0x4], // 0x4AC
        pub m_flMinBlendRate: [u8; 0x4], // 0x4B0
        pub m_flBlendDeltaMultiplier: [u8; 0x4], // 0x4B4
        pub m_isStarted: [u8; 0x8], // 0x4B8
    }
    #[repr(C)]
    pub struct CSoundOpvarSetPointEntity {
        pub pad_0: [u8; 0x550], // 0x0
        pub m_OnEnter: [u8; 0x18], // 0x550
        pub m_OnExit: [u8; 0x18], // 0x568
        pub m_bAutoDisable: [u8; 0x44], // 0x580
        pub m_flDistanceMin: [u8; 0x4], // 0x5C4
        pub m_flDistanceMax: [u8; 0x4], // 0x5C8
        pub m_flDistanceMapMin: [u8; 0x4], // 0x5CC
        pub m_flDistanceMapMax: [u8; 0x4], // 0x5D0
        pub m_flOcclusionRadius: [u8; 0x4], // 0x5D4
        pub m_flOcclusionMin: [u8; 0x4], // 0x5D8
        pub m_flOcclusionMax: [u8; 0x4], // 0x5DC
        pub m_flValSetOnDisable: [u8; 0x4], // 0x5E0
        pub m_bSetValueOnDisable: [u8; 0x1], // 0x5E4
        pub m_bReloading: [u8; 0x3], // 0x5E5
        pub m_nSimulationMode: [u8; 0x4], // 0x5E8
        pub m_nVisibilitySamples: [u8; 0x4], // 0x5EC
        pub m_vDynamicProxyPoint: [u8; 0xC], // 0x5F0
        pub m_flDynamicMaximumOcclusion: [u8; 0x4], // 0x5FC
        pub m_hDynamicEntity: [u8; 0x8], // 0x600
        pub m_iszDynamicEntityName: [u8; 0x8], // 0x608
        pub m_flPathingDistanceNormFactor: [u8; 0x4], // 0x610
        pub m_vPathingSourcePos: [u8; 0xC], // 0x614
        pub m_vPathingListenerPos: [u8; 0xC], // 0x620
        pub m_vPathingDirection: [u8; 0xC], // 0x62C
        pub m_nPathingSourceIndex: [u8; 0x8], // 0x638
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
    pub struct CInfoTargetServerOnly {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CCSGO_RushIntroCharacterPosition {
        pub pad_0: [u8; 0x1468], // 0x0
    }
    #[repr(C)]
    pub struct CServerRagdollTrigger {
        pub pad_0: [u8; 0x9C8], // 0x0
    }
    #[repr(C)]
    pub struct CDynamicPropAlias_dynamic_prop {
        pub pad_0: [u8; 0xC90], // 0x0
    }
    #[repr(C)]
    pub struct CMarkupVolumeTagged {
        pub pad_0: [u8; 0x858], // 0x0
        pub m_GroupNames: [u8; 0x18], // 0x858
        pub m_Tags: [u8; 0x18], // 0x870
        pub m_bIsGroup: [u8; 0x1], // 0x888
        pub m_bGroupByPrefab: [u8; 0x1], // 0x889
        pub m_bGroupByVolume: [u8; 0x1], // 0x88A
        pub m_bGroupOtherGroups: [u8; 0x1], // 0x88B
        pub m_bIsInGroup: [u8; 0x4], // 0x88C
    }
    #[repr(C)]
    pub struct CInfoParticleTarget {
        pub pad_0: [u8; 0x4A8], // 0x0
    }
    #[repr(C)]
    pub struct CEnvCubemap {
        pub pad_0: [u8; 0x528], // 0x0
        pub m_Entity_hCubemapTexture: [u8; 0x8], // 0x528
        pub m_Entity_bCustomCubemapTexture: [u8; 0x4], // 0x530
        pub m_Entity_flInfluenceRadius: [u8; 0x4], // 0x534
        pub m_Entity_vBoxProjectMins: [u8; 0xC], // 0x538
        pub m_Entity_vBoxProjectMaxs: [u8; 0xC], // 0x544
        pub m_Entity_bMoveable: [u8; 0x4], // 0x550
        pub m_Entity_nHandshake: [u8; 0x4], // 0x554
        pub m_Entity_nEnvCubeMapArrayIndex: [u8; 0x4], // 0x558
        pub m_Entity_nPriority: [u8; 0x4], // 0x55C
        pub m_Entity_flEdgeFadeDist: [u8; 0x4], // 0x560
        pub m_Entity_vEdgeFadeDists: [u8; 0xC], // 0x564
        pub m_Entity_flDiffuseScale: [u8; 0x4], // 0x570
        pub m_Entity_bStartDisabled: [u8; 0x1], // 0x574
        pub m_Entity_bDefaultEnvMap: [u8; 0x1], // 0x575
        pub m_Entity_bDefaultSpecEnvMap: [u8; 0x1], // 0x576
        pub m_Entity_bIndoorCubeMap: [u8; 0x1], // 0x577
        pub m_Entity_bCopyDiffuseFromDefaultCubemap: [u8; 0x10], // 0x578
        pub m_Entity_bEnabled: [u8; 0x8], // 0x588
    }
    #[repr(C)]
    pub struct CCSPlayer_DamageReactServices {
        pub pad_0: [u8; 0x68], // 0x0
    }
    #[repr(C)]
    pub struct CWeaponXM1014 {
        pub pad_0: [u8; 0x1280], // 0x0
    }
    #[repr(C)]
    pub struct CTriggerLerpObject {
        pub pad_0: [u8; 0x9C8], // 0x0
        pub m_iszLerpTarget: [u8; 0x8], // 0x9C8
        pub m_hLerpTarget: [u8; 0x8], // 0x9D0
        pub m_iszLerpTargetAttachment: [u8; 0x8], // 0x9D8
        pub m_hLerpTargetAttachment: [u8; 0x4], // 0x9E0
        pub m_flLerpDuration: [u8; 0x4], // 0x9E4
        pub m_bAttachedEntityWasParented: [u8; 0x1], // 0x9E8
        pub m_bLerpRestoreMoveType: [u8; 0x1], // 0x9E9
        pub m_bSingleLerpObject: [u8; 0x6], // 0x9EA
        pub m_vecLerpingObjects: [u8; 0x18], // 0x9F0
        pub m_iszLerpEffect: [u8; 0x8], // 0xA08
        pub m_iszLerpSound: [u8; 0x8], // 0xA10
        pub m_bAttachTouchingObject: [u8; 0x4], // 0xA18
        pub m_hEntityToWaitForDisconnect: [u8; 0x4], // 0xA1C
        pub m_OnLerpStarted: [u8; 0x18], // 0xA20
        pub m_OnLerpFinished: [u8; 0x18], // 0xA38
        pub m_OnDetached: [u8; 0x18], // 0xA50
    }
    #[repr(C)]
    pub struct CPhysicsPropOverride {
        pub pad_0: [u8; 0xD10], // 0x0
    }
    #[repr(C)]
    pub struct CTriggerSave {
        pub pad_0: [u8; 0x9C8], // 0x0
        pub m_bForceNewLevelUnit: [u8; 0x4], // 0x9C8
        pub m_fDangerousTimer: [u8; 0x4], // 0x9CC
        pub m_minHitPoints: [u8; 0x4], // 0x9D0
        pub m_flRetriggerDelay: [u8; 0x4], // 0x9D4
    }
    #[repr(C)]
    pub struct CPointHurt {
        pub pad_0: [u8; 0x4A8], // 0x0
        pub m_nDamage: [u8; 0x4], // 0x4A8
        pub m_bitsDamageType: [u8; 0x4], // 0x4AC
        pub m_flRadius: [u8; 0x4], // 0x4B0
        pub m_flDelay: [u8; 0x4], // 0x4B4
        pub m_strTarget: [u8; 0x8], // 0x4B8
        pub m_pActivator: [u8; 0x8], // 0x4C0
    }
    #[repr(C)]
    pub struct CBaseAnimGraphAlias_baseanimating {
        pub pad_0: [u8; 0xA40], // 0x0
    }
    #[repr(C)]
    pub struct CBasePlayerController {
        pub pad_0: [u8; 0x4B0], // 0x0
        pub m_nInButtonsWhichAreToggles: [u8; 0x8], // 0x4B0
        pub m_nTickBase: [u8; 0x28], // 0x4B8
        pub m_hPawn: [u8; 0x4], // 0x4E0
        pub m_bKnownTeamMismatch: [u8; 0x8], // 0x4E4
        pub m_nSplitScreenSlot: [u8; 0x4], // 0x4EC
        pub m_hSplitOwner: [u8; 0x8], // 0x4F0
        pub m_hSplitScreenPlayers: [u8; 0x18], // 0x4F8
        pub m_bIsHLTV: [u8; 0x4], // 0x510
        pub m_iConnected: [u8; 0x4], // 0x514
        pub m_iMostConnected: [u8; 0x4], // 0x518
        pub m_iszPlayerName: [u8; 0x84], // 0x51C
        pub m_szNetworkIDString: [u8; 0x8], // 0x5A0
        pub m_fLerpTime: [u8; 0x4], // 0x5A8
        pub m_bLagCompensation: [u8; 0x1], // 0x5AC
        pub m_bPredict: [u8; 0x7], // 0x5AD
        pub m_bIsLowViolence: [u8; 0x1], // 0x5B4
        pub m_bGamePaused: [u8; 0x13B], // 0x5B5
        pub m_iIgnoreGlobalChat: [u8; 0x4], // 0x6F0
        pub m_flLastPlayerTalkTime: [u8; 0x4], // 0x6F4
        pub m_flLastEntitySteadyState: [u8; 0x4], // 0x6F8
        pub m_nAvailableEntitySteadyState: [u8; 0x4], // 0x6FC
        pub m_bHasAnySteadyStateEnts: [u8; 0x10], // 0x700
        pub m_steamID: [u8; 0x8], // 0x710
        pub m_bNoClipEnabled: [u8; 0x4], // 0x718
        pub m_iDesiredFOV: [u8; 0xBC], // 0x71C
    }
    #[repr(C)]
    pub struct CRangeFloat {
        pub m_pValue: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct CDestructiblePart {
        pub m_DebugName: [u8; 0x8], // 0x0
        pub m_nHitGroup: [u8; 0x4], // 0x8
        pub m_bDisableHitGroupWhenDestroyed: [u8; 0x4], // 0xC
        pub m_nOtherHitgroupsToDestroyWhenFullyDestructed: [u8; 0x18], // 0x10
        pub m_bOnlyDestroyWhenGibbing: [u8; 0x8], // 0x28
        pub m_sBodyGroupName: [u8; 0x8], // 0x30
        pub m_DamageLevels: [u8; 0x18], // 0x38
    }
    #[repr(C)]
    pub struct PhysBlockHeader_t {
        pub nSaved: [u8; 0x8], // 0x0
        pub pWorldObject: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct RelationshipOverride_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub entity: [u8; 0x4], // 0x8
        pub classType: [u8; 0x4], // 0xC
    }
    #[repr(C)]
    pub struct AutoRoomDoorwayPairs_t {
        pub vP1: [u8; 0xC], // 0x0
        pub vP2: [u8; 0xC], // 0xC
    }
    #[repr(C)]
    pub struct NavHull_t {
        pub m_nHullIdx: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CDebugSnapshotData_t {
        pub m_text: [u8; 0x8], // 0x0
        pub m_dataType: [u8; 0x4], // 0x8
        pub m_userFlags: [u8; 0x4], // 0xC
        pub m_userData: [u8; 0x4], // 0x10
        pub m_userVector: [u8; 0xC], // 0x14
        pub m_userTransform: [u8; 0x20], // 0x20
        pub m_userShape: [u8; 0x98], // 0x40
        pub m_drawColor: [u8; 0x8], // 0xD8
        pub m_vecDebugOverlayData: [u8; 0x18], // 0xE0
        pub m_pStructuredData: [u8; 0x8], // 0xF8
        pub m_hEntity: [u8; 0x8], // 0x100
        pub m_sEntityName: [u8; 0x8], // 0x108
        pub m_nEntityIndex: [u8; 0x10], // 0x110
        pub m_children: [u8; 0x10], // 0x120
    }
    #[repr(C)]
    pub struct CRemapFloat {
        pub m_pValue: [u8; 0x10], // 0x0
    }
    #[repr(C)]
    pub struct CHintMessage {
        pub m_hintString: [u8; 0x8], // 0x0
        pub m_args: [u8; 0x18], // 0x8
        pub m_duration: [u8; 0x8], // 0x20
    }
    #[repr(C)]
    pub struct CNavAttribute {
        pub pad_0: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct AI_GroundRootMotionMotor_DebugSnapshotData_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub desired_movement_gait_set: [u8; 0x8], // 0x8
        pub desired_movement_gait: [u8; 0x8], // 0x10
        pub current_movement_gait_set: [u8; 0x8], // 0x18
        pub current_movement_gait: [u8; 0x8], // 0x20
        pub movement_setting_id: [u8; 0x8], // 0x28
        pub gait_switch_blocked_reason: [u8; 0x8], // 0x30
        pub b_goal_completion_allowed: [u8; 0x8], // 0x38
        pub state: [u8; 0x8], // 0x40
        pub n_state_active_tick_count: [u8; 0x4], // 0x48
        pub b_has_path: [u8; 0x4], // 0x4C
        pub f_remaining_ground_path_length: [u8; 0x4], // 0x50
        pub f_current_speed: [u8; 0x4], // 0x54
        pub move_type: [u8; 0x8], // 0x58
        pub f_forward_strafing_angle_actual: [u8; 0x4], // 0x60
        pub f_forward_strafing_angle_desired: [u8; 0x4], // 0x64
        pub f_forward_strafing_angle_committed: [u8; 0x4], // 0x68
        pub f_current_lean: [u8; 0x4], // 0x6C
        pub f_target_lean: [u8; 0x8], // 0x70
        pub vec_events: [u8; 0x18], // 0x78
    }
    #[repr(C)]
    pub struct ParticleNode_t {
        pub m_hEntity: [u8; 0x4], // 0x0
        pub m_iIndex: [u8; 0x4], // 0x4
        pub m_flStartTime: [u8; 0x4], // 0x8
        pub m_flGrowthDuration: [u8; 0x4], // 0xC
        pub m_vecGrowthOrigin: [u8; 0xC], // 0x10
        pub m_flEndcapTime: [u8; 0x4], // 0x1C
        pub m_bMarkedForDelete: [u8; 0x4], // 0x20
    }
    #[repr(C)]
    pub struct CFootstepTableHandle {
        pub pad_0: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct CDecalGroupVData {
        pub m_vecOptions: [u8; 0x18], // 0x0
        pub m_flTotalProbability: [u8; 0x8], // 0x18
    }
    #[repr(C)]
    pub struct CNmSnapWeaponTask {
        pub pad_0: [u8; 0x80], // 0x0
    }
    #[repr(C)]
    pub struct CPlayerControllerComponent {
        pub pad_0: [u8; 0x8], // 0x0
        pub __m_pChainEntity: [u8; 0x38], // 0x8
    }
    #[repr(C)]
    pub struct CResponseQueue {
        pub pad_0: [u8; 0x38], // 0x0
        pub m_ExpresserTargets: [u8; 0x18], // 0x38
    }
    #[repr(C)]
    pub struct CodeGenAABB_t {
        pub m_vMinBounds: [u8; 0xC], // 0x0
        pub m_vMaxBounds: [u8; 0xC], // 0xC
    }
    #[repr(C)]
    pub struct CScriptUniformRandomStream {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_hScriptScope: [u8; 0x94], // 0x8
        pub m_nInitialSeed: [u8; 0x4], // 0x9C
    }
    #[repr(C)]
    pub struct lerpdata_t {
        pub m_hEnt: [u8; 0x4], // 0x0
        pub m_MoveType: [u8; 0x4], // 0x4
        pub m_flStartTime: [u8; 0x4], // 0x8
        pub m_vecStartOrigin: [u8; 0x14], // 0xC
        pub m_qStartRot: [u8; 0x10], // 0x20
        pub m_nFXIndex: [u8; 0x20], // 0x30
    }
    #[repr(C)]
    pub struct WrappedPhysicsJoint_t {
        pub m_pJoint: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct SimpleConstraintSoundProfile {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_flKeyPointMinSoundThreshold: [u8; 0x4], // 0x8
        pub m_flKeyPointMaxSoundThreshold: [u8; 0x4], // 0xC
        pub m_reversalSoundThresholdSmall: [u8; 0x4], // 0x10
        pub m_reversalSoundThresholdMedium: [u8; 0x4], // 0x14
        pub m_reversalSoundThresholdLarge: [u8; 0x8], // 0x18
    }
    #[repr(C)]
    pub struct CSimpleSimTimer {
        pub m_flNext: [u8; 0x4], // 0x0
        pub m_nWorldGroupId: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct AI_BaseNPCAnimGraph_DebugSnapshotData_t {
        pub ag2_update_id: [u8; 0x8], // 0x0
        pub e_action_desired: [u8; 0x8], // 0x8
        pub e_action_handshake_restart: [u8; 0x8], // 0x10
        pub e_action_handshake_body_authority_current: [u8; 0x8], // 0x18
        pub e_action_handshake_body_authority_desired: [u8; 0x8], // 0x20
        pub e_movement_type_desired: [u8; 0x8], // 0x28
        pub e_movement_handshake_restart: [u8; 0x8], // 0x30
        pub e_movement_handshake_body_authority_current: [u8; 0x8], // 0x38
        pub e_movement_handshake_body_authority_desired: [u8; 0x8], // 0x40
    }
    #[repr(C)]
    pub struct CPhysicsBodyGameMarkupData {
        pub m_PhysicsBodyMarkupByBoneName: [u8; 0x28], // 0x0
    }
    #[repr(C)]
    pub struct SoundCommand_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_time: [u8; 0x4], // 0x8
        pub m_deltaTime: [u8; 0x4], // 0xC
        pub m_command: [u8; 0x4], // 0x10
        pub m_value: [u8; 0xC], // 0x14
    }
    #[repr(C)]
    pub struct modifiedconvars_t {
        pub pszConvar: [u8; 0x80], // 0x0
        pub pszCurrentValue: [u8; 0x80], // 0x80
        pub pszOrgValue: [u8; 0x80], // 0x100
    }
    #[repr(C)]
    pub struct CTestPulseIOComponent_Derived {
        pub pad_0: [u8; 0x30], // 0x0
    }
    #[repr(C)]
    pub struct SAVE_HEADER {
        pub m_saveId: [u8; 0x4], // 0x0
        pub m_version: [u8; 0x4], // 0x4
        pub m_nConnectionCount: [u8; 0x4], // 0x8
        pub m_nMapVersion: [u8; 0x4], // 0xC
        pub m_sSpawnGroupName: [u8; 0x10], // 0x10
        pub m_vecWorldOffset: [u8; 0x30], // 0x20
        pub m_flSaveTime: [u8; 0x10], // 0x50
    }
    #[repr(C)]
    pub struct CSkillDamage {
        pub m_flDamage: [u8; 0x10], // 0x0
        pub m_flNPCDamageScalarVsNPC: [u8; 0x4], // 0x10
        pub m_flPhysicsForceDamage: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct DebugSnapshotBaseStructuredData_t {
        pub pad_0: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct AI_DefaultNPC_DebugSnapshotData_t__PathQuery_t {
        pub m_nInitialMovementId: [u8; 0x8], // 0x0
        pub m_nCurrentMovementId: [u8; 0x8], // 0x8
        pub m_nMode: [u8; 0x8], // 0x10
        pub m_nType: [u8; 0x8], // 0x18
        pub m_nState: [u8; 0x8], // 0x20
    }
    #[repr(C)]
    pub struct CFloatExponentialMovingAverage {
        pub pad_0: [u8; 0x14], // 0x0
    }
    #[repr(C)]
    pub struct physics_save_sphere_t {
        pub radius: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CAnimGraph2InstancePtr {
        pub pad_0: [u8; 0x10], // 0x0
    }
    #[repr(C)]
    pub struct GAME_HEADER {
        pub m_sComment: [u8; 0x8], // 0x0
        pub m_nSpawnGroupCount: [u8; 0x8], // 0x8
        pub m_sLandmark: [u8; 0x8], // 0x10
        pub m_sRequiredAddons: [u8; 0x8], // 0x18
    }
    #[repr(C)]
    pub struct ChickenPathCost {
        pub pad_0: [u8; 0x30], // 0x0
    }
    #[repr(C)]
    pub struct AI_BaseNPC_DebugSnapshotData_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub npc_state: [u8; 0x8], // 0x8
        pub current_enemy: [u8; 0x8], // 0x10
        pub s_current_schedule: [u8; 0x8], // 0x18
        pub s_current_task: [u8; 0x8], // 0x20
        pub s_prev_schedule: [u8; 0x8], // 0x28
        pub s_npc_current_movement: [u8; 0x8], // 0x30
        pub s_last_task_end_location: [u8; 0x8], // 0x38
        pub conditions: [u8; 0x18], // 0x40
        pub anim_events: [u8; 0x18], // 0x58
        pub animgraph: [u8; 0x48], // 0x70
        pub navigator: [u8; 0x50], // 0xB8
        pub motorServices: [u8; 0x38], // 0x108
        pub facingServices: [u8; 0x48], // 0x140
    }
    #[repr(C)]
    pub struct CDebugDrawHistoryData {
        pub m_hEntity: [u8; 0x4], // 0x0
        pub m_etype: [u8; 0x4], // 0x4
        pub m_vectors: [u8; 0x10], // 0x8
        pub m_colors: [u8; 0x10], // 0x18
        pub m_dimensions: [u8; 0x10], // 0x28
        pub m_times: [u8; 0x10], // 0x38
        pub m_uint64s: [u8; 0x10], // 0x48
        pub m_bools: [u8; 0x10], // 0x58
        pub m_strings: [u8; 0x10], // 0x68
    }
    #[repr(C)]
    pub struct CNmEventConsumer {
        pub pad_0: [u8; 0xB0], // 0x0
    }
    #[repr(C)]
    pub struct CNetworkViewOffsetVector {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_vecX: [u8; 0x8], // 0x10
        pub m_vecY: [u8; 0x8], // 0x18
        pub m_vecZ: [u8; 0x8], // 0x20
    }
    #[repr(C)]
    pub struct AmmoIndex_t {
        pub m_Value: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct CNmEventConsumerContact {
        pub pad_0: [u8; 0xB0], // 0x0
    }
    #[repr(C)]
    pub struct CDestructiblePartsSystemData {
        pub m_PartsDataByHitGroup: [u8; 0x28], // 0x0
        pub m_nMinMaxNumberHitGroupsToDestroyWhenGibbing: [u8; 0x8], // 0x28
    }
    #[repr(C)]
    pub struct CRopeOverlapHit {
        pub m_hEntity: [u8; 0x8], // 0x0
        pub m_vecOverlappingLinks: [u8; 0x18], // 0x8
    }
    #[repr(C)]
    pub struct ActorClipEntry_t {
        pub m_sClipName: [u8; 0x8], // 0x0
        pub m_bLooping: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct CNavPathCostForTests {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct ResponseContext_t {
        pub m_iszName: [u8; 0x8], // 0x0
        pub m_iszValue: [u8; 0x8], // 0x8
        pub m_fExpirationTime: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct ApproachAreaCost {
        pub pad_0: [u8; 0x30], // 0x0
    }
    #[repr(C)]
    pub struct CNavVolumeSphericalShell {
        pub pad_0: [u8; 0x88], // 0x0
        pub m_flRadiusInner: [u8; 0x8], // 0x88
    }
    #[repr(C)]
    pub struct CPlayerPawnComponent {
        pub pad_0: [u8; 0x8], // 0x0
        pub __m_pChainEntity: [u8; 0x28], // 0x8
        pub m_pComponentGraphController: [u8; 0x18], // 0x30
    }
    #[repr(C)]
    pub struct AI_FacingServices_DebugSnapshotData_t {
        pub npc_position: [u8; 0x10], // 0x0
        pub facing_target_source: [u8; 0x8], // 0x10
        pub facing_target: [u8; 0x10], // 0x18
        pub schedule_facing_priority: [u8; 0x8], // 0x28
        pub strafing_source: [u8; 0x8], // 0x30
        pub strafing_enabled: [u8; 0x8], // 0x38
        pub movement_id: [u8; 0x8], // 0x40
    }
    #[repr(C)]
    pub struct AI_Navigator_DebugSnapshotData_t {
        pub s_movement_id: [u8; 0x8], // 0x0
        pub s_movement_serial_number: [u8; 0x8], // 0x8
        pub s_goal_source_location: [u8; 0x8], // 0x10
        pub last_waypoint_pos: [u8; 0xC], // 0x18
        pub goal_location: [u8; 0xC], // 0x24
        pub waypoints: [u8; 0x18], // 0x30
        pub s_arrival_movement_gait_set: [u8; 0x8], // 0x48
    }
    #[repr(C)]
    pub struct CDecalInstance {
        pub m_sDecalGroup: [u8; 0x8], // 0x0
        pub m_hMaterial: [u8; 0x8], // 0x8
        pub m_sSequenceName: [u8; 0x4], // 0x10
        pub m_hEntity: [u8; 0x4], // 0x14
        pub m_nBoneIndex: [u8; 0x4], // 0x18
        pub m_nTriangleIndex: [u8; 0x4], // 0x1C
        pub m_vPositionLS: [u8; 0xC], // 0x20
        pub m_vPositionOS: [u8; 0xC], // 0x2C
        pub m_vNormalLS: [u8; 0xC], // 0x38
        pub m_vNormalOS: [u8; 0xC], // 0x44
        pub m_vSAxisLS: [u8; 0xC], // 0x50
        pub m_nFlags: [u8; 0x4], // 0x5C
        pub m_Color: [u8; 0x4], // 0x60
        pub m_flWidth: [u8; 0x4], // 0x64
        pub m_flHeight: [u8; 0x4], // 0x68
        pub m_flDepth: [u8; 0x4], // 0x6C
        pub m_mTransform: [u8; 0x30], // 0x70
        pub m_mLocalToTriangle: [u8; 0x30], // 0xA0
        pub m_flAnimationScale: [u8; 0x4], // 0xD0
        pub m_flAnimationStartTime: [u8; 0x4], // 0xD4
        pub m_flPlaceTime: [u8; 0x4], // 0xD8
        pub m_flFadeStartTime: [u8; 0x4], // 0xDC
        pub m_flFadeDuration: [u8; 0x4], // 0xE0
        pub m_flLightingOriginOffset: [u8; 0x14], // 0xE4
        pub m_flBoundingRadiusSqr: [u8; 0x4], // 0xF8
        pub m_nSequenceIndex: [u8; 0x2], // 0xFC
        pub m_bIsAdjacent: [u8; 0x1], // 0xFE
        pub m_bDoDecalLightmapping: [u8; 0x9], // 0xFF
    }
    #[repr(C)]
    pub struct CGameScriptedMoveData {
        pub m_vAccumulatedRootMotion: [u8; 0xC], // 0x0
        pub m_angAccumulatedRootMotionRotation: [u8; 0xC], // 0xC
        pub m_vSrc: [u8; 0xC], // 0x18
        pub m_angSrc: [u8; 0xC], // 0x24
        pub m_angCurrent: [u8; 0xC], // 0x30
        pub m_flLockedSpeed: [u8; 0x4], // 0x3C
        pub m_flAngRate: [u8; 0x4], // 0x40
        pub m_flDuration: [u8; 0x4], // 0x44
        pub m_flStartTime: [u8; 0x4], // 0x48
        pub m_bActive: [u8; 0x1], // 0x4C
        pub m_bTeleportOnEnd: [u8; 0x1], // 0x4D
        pub m_bIgnoreRotation: [u8; 0x1], // 0x4E
        pub m_bSuccess: [u8; 0x1], // 0x4F
        pub m_nForcedCrouchState: [u8; 0x4], // 0x50
        pub m_bIgnoreCollisions: [u8; 0x4], // 0x54
        pub m_vDest: [u8; 0xC], // 0x58
        pub m_angDst: [u8; 0xC], // 0x64
        pub m_hDestEntity: [u8; 0x4], // 0x70
    }
    #[repr(C)]
    pub struct CSkeletonAnimationController {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_pSkeletonInstance: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct CNavVolumeMarkupVolume {
        pub pad_0: [u8; 0xE0], // 0x0
    }
    #[repr(C)]
    pub struct CResponseCriteriaSet {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_bOverrideOnAppend: [u8; 0x8], // 0x30
    }
    #[repr(C)]
    pub struct FuncRotatorRotationSummary_t {
        pub nTick: [u8; 0x4], // 0x0
        pub nFlags: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct CAI_Expresser {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_conceptCooldowns: [u8; 0x28], // 0x10
        pub m_ruleCooldowns: [u8; 0x28], // 0x38
        pub m_flStopTalkTime: [u8; 0x4], // 0x60
        pub m_flStopTalkTimeWithoutDelay: [u8; 0x4], // 0x64
        pub m_flQueuedSpeechTime: [u8; 0x4], // 0x68
        pub m_flBlockedTalkTime: [u8; 0x4], // 0x6C
        pub m_voicePitch: [u8; 0x4], // 0x70
        pub m_flLastTimeAcceptedSpeak: [u8; 0x4], // 0x74
        pub m_bAllowSpeakingInterrupts: [u8; 0x1], // 0x78
        pub m_bConsiderSceneInvolvementAsSpeech: [u8; 0x1], // 0x79
        pub m_bSceneEntityDisabled: [u8; 0x2], // 0x7A
        pub m_nLastSpokenPriority: [u8; 0x1C], // 0x7C
        pub m_pOuter: [u8; 0x8], // 0x98
    }
    #[repr(C)]
    pub struct IChoreoServices {
        pub pad_0: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct CNmEventConsumerAttributes {
        pub pad_0: [u8; 0xB0], // 0x0
    }
    #[repr(C)]
    pub struct CStopwatch {
        pub pad_0: [u8; 0xC], // 0x0
        pub m_flInterval: [u8; 0x4], // 0xC
    }
    #[repr(C)]
    pub struct CNmEventConsumerCloth {
        pub pad_0: [u8; 0xB0], // 0x0
    }
    #[repr(C)]
    pub struct ResponseParams {
        pub pad_0: [u8; 0x10], // 0x0
        pub odds: [u8; 0x2], // 0x10
        pub flags: [u8; 0x6], // 0x12
        pub m_pFollowup: [u8; 0x8], // 0x18
    }
    #[repr(C)]
    pub struct SPAWNGROUP_HEADER {
        pub m_sGroupName: [u8; 0x8], // 0x0
        pub m_sEntityLumpName: [u8; 0x8], // 0x8
        pub m_vecWorldOffset: [u8; 0x30], // 0x10
        pub m_bClientSpawnGroup: [u8; 0x1], // 0x40
        pub m_bSuppressAllEntities: [u8; 0xF], // 0x41
    }
    #[repr(C)]
    pub struct globalentity_t {
        pub name: [u8; 0x2], // 0x0
        pub levelName: [u8; 0x2], // 0x2
        pub state: [u8; 0x4], // 0x4
        pub counter: [u8; 0x4], // 0x8
    }
    #[repr(C)]
    pub struct CAnimGraphControllerPtr {
        pub m_pController: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct ConstraintSoundInfo {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_vSampler: [u8; 0x18], // 0x8
        pub m_soundProfile: [u8; 0x20], // 0x20
        pub m_forwardAxis: [u8; 0x10], // 0x40
        pub m_iszTravelSoundFwd: [u8; 0x8], // 0x50
        pub m_iszTravelSoundBack: [u8; 0x20], // 0x58
        pub m_iszReversalSoundSmall: [u8; 0x8], // 0x78
        pub m_iszReversalSoundMedium: [u8; 0x8], // 0x80
        pub m_iszReversalSoundLarge: [u8; 0x8], // 0x88
        pub m_bPlayTravelSound: [u8; 0x1], // 0x90
        pub m_bPlayReversalSound: [u8; 0x7], // 0x91
    }
    #[repr(C)]
    pub struct CPhysicsBodyGameMarkup {
        pub m_TargetBody: [u8; 0x8], // 0x0
        pub m_Tag: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct PointCameraSettings_t {
        pub m_flNearBlurryDistance: [u8; 0x4], // 0x0
        pub m_flNearCrispDistance: [u8; 0x4], // 0x4
        pub m_flFarCrispDistance: [u8; 0x4], // 0x8
        pub m_flFarBlurryDistance: [u8; 0x4], // 0xC
    }
    #[repr(C)]
    pub struct HUDPanelHasClass_t {
        pub m_nPanelIdIndex: [u8; 0x2], // 0x0
        pub m_nClassNameIndex: [u8; 0x2], // 0x2
        pub m_eClassStatus: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct DebugDrawBoneTransforms_t {
        pub pad_0: [u8; 0x10], // 0x0
        pub vecBones: [u8; 0x1020], // 0x10
    }
    #[repr(C)]
    pub struct INavPathCost {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_navHull: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct CVectorMovingAverage {
        pub pad_0: [u8; 0x20], // 0x0
    }
    #[repr(C)]
    pub struct HUDPanelDialogVariableString_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_nPanelIdIndex: [u8; 0x2], // 0x8
        pub m_nDialogVariableIndex: [u8; 0x6], // 0xA
        pub m_sValue: [u8; 0x8], // 0x10
        pub m_bIsSet: [u8; 0x8], // 0x18
    }
    #[repr(C)]
    pub struct CSoundEnvelope {
        pub m_current: [u8; 0x4], // 0x0
        pub m_target: [u8; 0x4], // 0x4
        pub m_rate: [u8; 0x4], // 0x8
        pub m_forceupdate: [u8; 0x4], // 0xC
    }
    #[repr(C)]
    pub struct dynpitchvol_base_t {
        pub preset: [u8; 0x4], // 0x0
        pub pitchrun: [u8; 0x4], // 0x4
        pub pitchstart: [u8; 0x4], // 0x8
        pub spinup: [u8; 0x4], // 0xC
        pub spindown: [u8; 0x4], // 0x10
        pub volrun: [u8; 0x4], // 0x14
        pub volstart: [u8; 0x4], // 0x18
        pub fadein: [u8; 0x4], // 0x1C
        pub fadeout: [u8; 0x4], // 0x20
        pub lfotype: [u8; 0x4], // 0x24
        pub lforate: [u8; 0x4], // 0x28
        pub lfomodpitch: [u8; 0x4], // 0x2C
        pub lfomodvol: [u8; 0x4], // 0x30
        pub cspinup: [u8; 0x4], // 0x34
        pub cspincount: [u8; 0x4], // 0x38
        pub pitch: [u8; 0x4], // 0x3C
        pub spinupsav: [u8; 0x4], // 0x40
        pub spindownsav: [u8; 0x4], // 0x44
        pub pitchfrac: [u8; 0x4], // 0x48
        pub vol: [u8; 0x4], // 0x4C
        pub fadeinsav: [u8; 0x4], // 0x50
        pub fadeoutsav: [u8; 0x4], // 0x54
        pub volfrac: [u8; 0x4], // 0x58
        pub lfofrac: [u8; 0x4], // 0x5C
        pub lfomult: [u8; 0x4], // 0x60
    }
    #[repr(C)]
    pub struct CStopwatchBase {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_bIsRunning: [u8; 0x4], // 0x8
    }
    #[repr(C)]
    pub struct AI_GroundRootMotionMotor_DebugSnapshotData_t__Event_t {
        pub description: [u8; 0x8], // 0x0
        pub location: [u8; 0x10], // 0x8
    }
    #[repr(C)]
    pub struct CMarkupSearch_PathCostAreaFilter {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_searchHelper: [u8; 0x2B0], // 0x8
    }
    #[repr(C)]
    pub struct CNavVolumeVector {
        pub pad_0: [u8; 0x80], // 0x0
        pub m_bHasBeenPreFiltered: [u8; 0x20], // 0x80
    }
    #[repr(C)]
    pub struct NavGravity_t {
        pub m_vGravity: [u8; 0xC], // 0x0
        pub m_bDefault: [u8; 0x4], // 0xC
    }
    #[repr(C)]
    pub struct PulseScriptedSequenceData_t {
        pub m_nActorID: [u8; 0x8], // 0x0
        pub m_szPreIdleSequence: [u8; 0x8], // 0x8
        pub m_szEntrySequence: [u8; 0x8], // 0x10
        pub m_szSequence: [u8; 0x8], // 0x18
        pub m_szExitSequence: [u8; 0x8], // 0x20
        pub m_nMoveTo: [u8; 0x4], // 0x28
        pub m_nMoveToGait: [u8; 0x4], // 0x2C
        pub m_nHeldWeaponBehavior: [u8; 0x4], // 0x30
        pub m_bLoopPreIdleSequence: [u8; 0x1], // 0x34
        pub m_bLoopActionSequence: [u8; 0x1], // 0x35
        pub m_bLoopPostIdleSequence: [u8; 0x1], // 0x36
        pub m_bIgnoreLookAt: [u8; 0x1], // 0x37
    }
    #[repr(C)]
    pub struct CChoreo_GraphController {
        pub pad_0: [u8; 0xC0], // 0x0
        pub m_eChoreoState: [u8; 0x18], // 0xC0
        pub m_tChoreoTargetWarp: [u8; 0x18], // 0xD8
        pub m_tChoreoExitWarp: [u8; 0x18], // 0xF0
    }
    #[repr(C)]
    pub struct CBaseAnimGraphDestructibleParts_GraphController {
        pub pad_0: [u8; 0xC0], // 0x0
    }
    #[repr(C)]
    pub struct ExternalAnimGraphHandle_t {
        pub m_Value: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CPhysicsShake {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_force: [u8; 0x10], // 0x8
    }
    #[repr(C)]
    pub struct CInfoChoreoAnchorPosition {
        pub m_vOriginLS: [u8; 0x10], // 0x0
        pub m_qAnglesLS: [u8; 0x10], // 0x10
        pub m_vExtentsMin: [u8; 0xC], // 0x20
        pub m_vExtentsMax: [u8; 0xC], // 0x2C
        pub m_flRadius: [u8; 0x4], // 0x38
        pub m_bOnlyWarpPosition: [u8; 0x4], // 0x3C
        pub m_hParent: [u8; 0x4], // 0x40
        pub m_nShapeType: [u8; 0xC], // 0x44
    }
    #[repr(C)]
    pub struct VelocitySampler {
        pub m_prevSample: [u8; 0xC], // 0x0
        pub m_fPrevSampleTime: [u8; 0x4], // 0xC
        pub m_fIdealSampleRate: [u8; 0x4], // 0x10
    }
    #[repr(C)]
    pub struct CTakeDamageResult {
        pub m_pOriginatingInfo: [u8; 0x8], // 0x0
        pub m_DestructibleHitGroupRequests: [u8; 0x10], // 0x8
        pub m_nHealthLost: [u8; 0x4], // 0x18
        pub m_nHealthBefore: [u8; 0x4], // 0x1C
        pub m_flDamageDealt: [u8; 0x4], // 0x20
        pub m_flPreModifiedDamage: [u8; 0x4], // 0x24
        pub m_vDamagePosition: [u8; 0xC], // 0x28
        pub m_nTotalledHealthLost: [u8; 0x4], // 0x34
        pub m_flTotalledDamageDealt: [u8; 0x4], // 0x38
        pub m_flTotalledPreModifiedDamage: [u8; 0x4], // 0x3C
        pub m_flNewDamageAccumulatorValue: [u8; 0x8], // 0x40
        pub m_nDamageFlags: [u8; 0x8], // 0x48
        pub m_bWasDamageSuppressed: [u8; 0x1], // 0x50
        pub m_bSuppressFlinch: [u8; 0x3], // 0x51
        pub m_nOverrideFlinchHitGroup: [u8; 0xC], // 0x54
    }
    #[repr(C)]
    pub struct CMarkupSearchHelper {
        pub m_navHull: [u8; 0x8], // 0x0
        pub m_tagString: [u8; 0x8], // 0x8
        pub m_nameString: [u8; 0x8], // 0x10
        pub m_vRefPos: [u8; 0xC], // 0x18
        pub m_bRefPosSet: [u8; 0x1], // 0x24
        pub m_bUseStepHeight: [u8; 0x1], // 0x25
        pub m_bActive: [u8; 0x28A], // 0x26
    }
    #[repr(C)]
    pub struct SceneEventId_t {
        pub m_Value: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CCommentarySystem {
        pub pad_0: [u8; 0x12], // 0x0
        pub m_bCommentaryEnabledMidGame: [u8; 0x2], // 0x12
        pub m_flNextTeleportTime: [u8; 0x4], // 0x14
        pub m_iTeleportStage: [u8; 0x4], // 0x18
        pub m_bCheatState: [u8; 0x1], // 0x1C
        pub m_bIsFirstSpawnGroupToLoad: [u8; 0x3], // 0x1D
        pub m_ModifiedConvars: [u8; 0x18], // 0x20
        pub m_hCurrentNode: [u8; 0x4], // 0x38
        pub m_hActiveCommentaryNode: [u8; 0x4], // 0x3C
        pub m_hLastCommentaryNode: [u8; 0x8], // 0x40
        pub m_vecNodes: [u8; 0x18], // 0x48
    }
    #[repr(C)]
    pub struct ResponseFollowup {
        pub followup_concept: [u8; 0x8], // 0x0
        pub followup_contexts: [u8; 0x8], // 0x8
        pub followup_delay: [u8; 0x4], // 0x10
        pub followup_target: [u8; 0x8], // 0x14
    }
    #[repr(C)]
    pub struct AmmoTypeInfo_t {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nMaxCarry: [u8; 0xC], // 0x10
        pub m_nSplashSize: [u8; 0x8], // 0x1C
        pub m_nFlags: [u8; 0x4], // 0x24
        pub m_flMass: [u8; 0x4], // 0x28
        pub m_flSpeed: [u8; 0xC], // 0x2C
    }
    #[repr(C)]
    pub struct CNetworkTransmitComponent {
        pub pad_0: [u8; 0x184], // 0x0
        pub m_nTransmitStateOwnedCounter: [u8; 0x4C], // 0x184
    }
    #[repr(C)]
    pub struct AI_MotorServices_DebugSnapshotData_t {
        pub active_motor: [u8; 0x8], // 0x0
        pub desired_speed: [u8; 0x4], // 0x8
        pub motor_velocity: [u8; 0xC], // 0xC
        pub motor_path: [u8; 0x18], // 0x18
        pub ground_entity_debug_name: [u8; 0x8], // 0x30
    }
    #[repr(C)]
    pub struct CPathQueryUtil {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_PathToEntityTransform: [u8; 0x20], // 0x10
        pub m_vecPathSamplePositions: [u8; 0x18], // 0x30
        pub m_vecPathSampleParameters: [u8; 0x18], // 0x48
        pub m_vecPathSampleDistances: [u8; 0x18], // 0x60
        pub m_bIsClosedLoop: [u8; 0x8], // 0x78
    }
    #[repr(C)]
    pub struct RagdollCreationParams_t {
        pub m_vForce: [u8; 0xC], // 0x0
        pub m_nForceBone: [u8; 0x4], // 0xC
        pub m_bForceCurrentWorldTransform: [u8; 0x4], // 0x10
        pub m_nHealthToGrant: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct CRelativeTransform {
        pub m_bTransformIsWorldSpace: [u8; 0x10], // 0x0
        pub m_transform: [u8; 0x20], // 0x10
        pub m_transformWS: [u8; 0x20], // 0x30
        pub m_hEntity: [u8; 0x10], // 0x50
    }
    #[repr(C)]
    pub struct CRangeInt {
        pub m_pValue: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct PathCost {
        pub pad_0: [u8; 0x3C], // 0x0
        pub m_dangerFactor: [u8; 0x4], // 0x3C
        pub m_damagingAreasPenaltyCost: [u8; 0x4], // 0x40
        pub m_flAgentMaxClimb: [u8; 0x1C], // 0x44
    }
    #[repr(C)]
    pub struct globalentitydatabase_t {
        pub pad_0: [u8; 0x60], // 0x0
        pub m_list: [u8; 0x18], // 0x60
    }
    #[repr(C)]
    pub struct CNmEventConsumerPulse {
        pub pad_0: [u8; 0xC8], // 0x0
    }
    #[repr(C)]
    pub struct CNMEventPulseState_t {
        pub m_eventID: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct CWorldCompositionChunkReferenceElement_t {
        pub m_strMapToLoad: [u8; 0x8], // 0x0
        pub m_strLandmarkName: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct CRandStopwatch {
        pub pad_0: [u8; 0xC], // 0x0
        pub m_flMinInterval: [u8; 0x4], // 0xC
        pub m_flMaxInterval: [u8; 0x4], // 0x10
    }
    #[repr(C)]
    pub struct CMovementStatsProperty {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nUseCounter: [u8; 0x4], // 0x10
        pub m_emaMovementDirection: [u8; 0x2C], // 0x14
    }
    #[repr(C)]
    pub struct CGameChoreoServices {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_hOwner: [u8; 0x4], // 0x8
        pub m_hScriptedSequence: [u8; 0x4], // 0xC
        pub m_scriptState: [u8; 0x4], // 0x10
        pub m_choreoState: [u8; 0x4], // 0x14
        pub m_flTimeStartedState: [u8; 0x8], // 0x18
    }
    #[repr(C)]
    pub struct PhysObjectHeader_t {
        pub type: [u8; 0x4], // 0x0
        pub hEntity: [u8; 0x4], // 0x4
        pub fieldName: [u8; 0x8], // 0x8
        pub bSaveObject: [u8; 0x8], // 0x10
        pub modelName: [u8; 0x8], // 0x18
        pub bbox: [u8; 0x18], // 0x20
        pub sphere: [u8; 0x4], // 0x38
        pub iCollide: [u8; 0x4], // 0x3C
    }
    #[repr(C)]
    pub struct CSimpleStopwatch {
        pub pad_0: [u8; 0xC], // 0x0
    }
    #[repr(C)]
    pub struct CShatterGlassShard {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_hShardHandle: [u8; 0x8], // 0x8
        pub m_vecPanelVertices: [u8; 0x18], // 0x10
        pub m_vLocalPanelSpaceOrigin: [u8; 0x8], // 0x28
        pub m_hModel: [u8; 0x8], // 0x30
        pub m_hPhysicsEntity: [u8; 0x4], // 0x38
        pub m_hParentPanel: [u8; 0x4], // 0x3C
        pub m_hParentShard: [u8; 0x4], // 0x40
        pub m_ShatterStressType: [u8; 0x4], // 0x44
        pub m_vecStressVelocity: [u8; 0xC], // 0x48
        pub m_bCreatedModel: [u8; 0x4], // 0x54
        pub m_flLongestEdge: [u8; 0x4], // 0x58
        pub m_flShortestEdge: [u8; 0x4], // 0x5C
        pub m_flLongestAcross: [u8; 0x4], // 0x60
        pub m_flShortestAcross: [u8; 0x4], // 0x64
        pub m_flSumOfAllEdges: [u8; 0x4], // 0x68
        pub m_flArea: [u8; 0x4], // 0x6C
        pub m_nOnFrameEdge: [u8; 0x4], // 0x70
        pub m_nSubShardGeneration: [u8; 0x4], // 0x74
        pub m_vecAverageVertPosition: [u8; 0x8], // 0x78
        pub m_bAverageVertPositionIsValid: [u8; 0x4], // 0x80
        pub m_vecPanelSpaceStressPositionA: [u8; 0x8], // 0x84
        pub m_vecPanelSpaceStressPositionB: [u8; 0x8], // 0x8C
        pub m_bStressPositionAIsValid: [u8; 0x1], // 0x94
        pub m_bStressPositionBIsValid: [u8; 0x1], // 0x95
        pub m_bFlaggedForRemoval: [u8; 0x2], // 0x96
        pub m_flPhysicsEntitySpawnedAtTime: [u8; 0x4], // 0x98
        pub m_hEntityHittingMe: [u8; 0x4], // 0x9C
        pub m_vecNeighbors: [u8; 0x18], // 0xA0
    }
    #[repr(C)]
    pub struct ragdollelement_t {
        pub originParentSpace: [u8; 0x20], // 0x0
        pub parentIndex: [u8; 0x4], // 0x20
        pub m_flRadius: [u8; 0x4], // 0x24
        pub m_nHeight: [u8; 0x8], // 0x28
    }
    #[repr(C)]
    pub struct CGameScriptedMoveDef_t {
        pub m_vDestOffset: [u8; 0xC], // 0x0
        pub m_hDestEntity: [u8; 0x4], // 0xC
        pub m_angDest: [u8; 0xC], // 0x10
        pub m_flDuration: [u8; 0x4], // 0x1C
        pub m_flAngRate: [u8; 0x4], // 0x20
        pub m_flMoveSpeed: [u8; 0x4], // 0x24
        pub m_bAimDisabled: [u8; 0x1], // 0x28
        pub m_bIgnoreRotation: [u8; 0x3], // 0x29
        pub m_nForcedCrouchState: [u8; 0x4], // 0x2C
    }
    #[repr(C)]
    pub struct CNetworkOriginCellCoordQuantizedVector {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_cellX: [u8; 0x2], // 0x10
        pub m_cellY: [u8; 0x2], // 0x12
        pub m_cellZ: [u8; 0x2], // 0x14
        pub m_nOutsideWorld: [u8; 0x2], // 0x16
        pub m_vecX: [u8; 0x8], // 0x18
        pub m_vecY: [u8; 0x8], // 0x20
        pub m_vecZ: [u8; 0x8], // 0x28
    }
    #[repr(C)]
    pub struct CBaseAnimGraphVariationUserData {
        pub pad_0: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct DynamicVolumeDef_t {
        pub m_source: [u8; 0x4], // 0x0
        pub m_target: [u8; 0x4], // 0x4
        pub m_nHullIdx: [u8; 0x4], // 0x8
        pub m_vSourceAnchorPos: [u8; 0xC], // 0xC
        pub m_vTargetAnchorPos: [u8; 0xC], // 0x18
        pub m_nAreaSrc: [u8; 0x4], // 0x24
        pub m_nAreaDst: [u8; 0x4], // 0x28
        pub m_bAttached: [u8; 0x4], // 0x2C
    }
    #[repr(C)]
    pub struct CNetworkOriginQuantizedVector {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_vecX: [u8; 0x8], // 0x10
        pub m_vecY: [u8; 0x8], // 0x18
        pub m_vecZ: [u8; 0x8], // 0x20
    }
    #[repr(C)]
    pub struct magnetted_objects_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub hEntity: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct CHintMessageQueue {
        pub m_tmMessageEnd: [u8; 0x8], // 0x0
        pub m_messages: [u8; 0x18], // 0x8
        pub m_pPlayerController: [u8; 0x8], // 0x20
    }
    #[repr(C)]
    pub struct CSkillInt {
        pub m_pValue: [u8; 0x10], // 0x0
    }
    #[repr(C)]
    pub struct thinkfunc_t {
        pub m_think: [u8; 0x8], // 0x0
        pub m_hFn: [u8; 0x8], // 0x8
        pub m_nContext: [u8; 0x4], // 0x10
        pub m_nNextThinkTick: [u8; 0x4], // 0x14
        pub m_nLastThinkTick: [u8; 0x8], // 0x18
    }
    #[repr(C)]
    pub struct CNavHullPresetVData {
        pub m_vecNavHulls: [u8; 0x18], // 0x0
    }
    #[repr(C)]
    pub struct CSkillFloat {
        pub m_pValue: [u8; 0x10], // 0x0
    }
    #[repr(C)]
    pub struct WaterWheelFrictionScale_t {
        pub m_flFractionOfWheelSubmerged: [u8; 0x4], // 0x0
        pub m_flFrictionScale: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct ragdollhierarchyjoint_t {
        pub parentIndex: [u8; 0x4], // 0x0
        pub childIndex: [u8; 0xC], // 0x4
    }
    #[repr(C)]
    pub struct CSceneEventInfo {
        pub m_iLayer: [u8; 0x4], // 0x0
        pub m_iPriority: [u8; 0x4], // 0x4
        pub m_hSequence: [u8; 0x4], // 0x8
        pub m_flWeight: [u8; 0x4], // 0xC
        pub m_flLastAccumulatedTime: [u8; 0x4], // 0x10
        pub m_flLastJumpFromTime: [u8; 0x4], // 0x14
        pub m_flLastJumpToTime: [u8; 0x4], // 0x18
        pub m_flLastCycle: [u8; 0x4], // 0x1C
        pub m_hAnimClip: [u8; 0x8], // 0x20
        pub m_sAnimClipSlot: [u8; 0x8], // 0x28
        pub m_sAnimClipSlotWeight: [u8; 0x8], // 0x30
        pub m_bHasArrived: [u8; 0x4], // 0x38
        pub m_nType: [u8; 0x4], // 0x3C
        pub m_flNext: [u8; 0x4], // 0x40
        pub m_bIsGesture: [u8; 0x1], // 0x44
        pub m_bShouldRemove: [u8; 0x27], // 0x45
        pub m_hTarget: [u8; 0x4], // 0x6C
        pub m_nSceneEventId: [u8; 0x4], // 0x70
        pub m_bClientSide: [u8; 0x1], // 0x74
        pub m_bStarted: [u8; 0x3], // 0x75
    }
    #[repr(C)]
    pub struct SoundeventPathCornerPairNetworked_t {
        pub vP1: [u8; 0xC], // 0x0
        pub vP2: [u8; 0xC], // 0xC
        pub flPathLengthSqr: [u8; 0x4], // 0x18
        pub flP1Pct: [u8; 0x4], // 0x1C
        pub flP2Pct: [u8; 0x4], // 0x20
    }
    #[repr(C)]
    pub struct CSoundPatch {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_pitch: [u8; 0x10], // 0x8
        pub m_volume: [u8; 0x24], // 0x18
        pub m_shutdownTime: [u8; 0x4], // 0x3C
        pub m_flLastTime: [u8; 0x8], // 0x40
        pub m_iszSoundScriptName: [u8; 0x8], // 0x48
        pub m_hEnt: [u8; 0x4], // 0x50
        pub m_soundEntityIndex: [u8; 0x4], // 0x54
        pub m_soundOrigin: [u8; 0xC], // 0x58
        pub m_isPlaying: [u8; 0x4], // 0x64
        pub m_Filter: [u8; 0x38], // 0x68
        pub m_flCloseCaptionDuration: [u8; 0x4], // 0xA0
        pub m_bUpdatedSoundOrigin: [u8; 0x4], // 0xA4
        pub m_iszClassName: [u8; 0x8], // 0xA8
    }
    #[repr(C)]
    pub struct CCS2ChickenGraphController {
        pub pad_0: [u8; 0xC0], // 0x0
        pub m_action: [u8; 0x18], // 0xC0
        pub m_bActionReset: [u8; 0x20], // 0xD8
        pub m_actionVariation: [u8; 0x18], // 0xF8
        pub m_bInWater: [u8; 0x18], // 0x110
        pub m_mode: [u8; 0x18], // 0x128
        pub m_lifeStage: [u8; 0x18], // 0x140
        pub m_idlePhase: [u8; 0x18], // 0x158
        pub m_turnAngle: [u8; 0x18], // 0x170
        pub m_bHasLookatTarget: [u8; 0x18], // 0x188
        pub m_lookatTarget: [u8; 0x18], // 0x1A0
        pub m_bFlinch: [u8; 0x18], // 0x1B8
        pub m_flinchVariation: [u8; 0x18], // 0x1D0
        pub m_bHasActionCompletedEvent: [u8; 0x8], // 0x1E8
    }
    #[repr(C)]
    pub struct levellist_t {
        pub m_sMapName: [u8; 0x8], // 0x0
        pub m_sLandmarkName: [u8; 0x8], // 0x8
        pub m_hEntLandmark: [u8; 0x4], // 0x10
        pub m_vecLandmarkOrigin: [u8; 0xC], // 0x14
        pub m_vecLandmarkAngles: [u8; 0x10], // 0x20
    }
    #[repr(C)]
    pub struct locksound_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub sLockedSound: [u8; 0x8], // 0x8
        pub sUnlockedSound: [u8; 0x8], // 0x10
        pub flwaitSound: [u8; 0x8], // 0x18
    }
    #[repr(C)]
    pub struct DecalGroupOption_t {
        pub m_hMaterial: [u8; 0x8], // 0x0
        pub m_sSequenceName: [u8; 0x8], // 0x8
        pub m_flProbability: [u8; 0x4], // 0x10
        pub m_bEnableAngleBetweenNormalAndGravityRange: [u8; 0x4], // 0x14
        pub m_flMinAngleBetweenNormalAndGravity: [u8; 0x4], // 0x18
        pub m_flMaxAngleBetweenNormalAndGravity: [u8; 0x4], // 0x1C
    }
    #[repr(C)]
    pub struct CBtNode {
        pub pad_0: [u8; 0x58], // 0x0
    }
    #[repr(C)]
    pub struct CAnimGraphControllerManager {
        pub m_controllers: [u8; 0x90], // 0x0
        pub m_bGraphBindingsCreated: [u8; 0x8], // 0x90
    }
    #[repr(C)]
    pub struct CFiringModeFloat {
        pub m_flValues: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct CCopyRecipientFilter {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_Flags: [u8; 0x8], // 0x8
        pub m_Recipients: [u8; 0x20], // 0x10
        pub m_slotPlayerExcludedDueToPrediction: [u8; 0x8], // 0x30
    }
    #[repr(C)]
    pub struct CFloatMovingAverage {
        pub pad_0: [u8; 0x20], // 0x0
    }
    #[repr(C)]
    pub struct FuncMoverMovementSummary_t {
        pub flStartT: [u8; 0x4], // 0x0
        pub flEndT: [u8; 0x4], // 0x4
        pub nStartNodeIndex: [u8; 0x4], // 0x8
        pub nStopNodeIndex: [u8; 0x4], // 0xC
        pub nMovementMode: [u8; 0x4], // 0x10
        pub nFlags: [u8; 0x4], // 0x14
        pub nTick: [u8; 0x4], // 0x18
        pub hPathMover: [u8; 0x4], // 0x1C
    }
    #[repr(C)]
    pub struct CSmoothFunc {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_flSmoothAmplitude: [u8; 0x4], // 0x8
        pub m_flSmoothBias: [u8; 0x4], // 0xC
        pub m_flSmoothDuration: [u8; 0x4], // 0x10
        pub m_flSmoothRemainingTime: [u8; 0x4], // 0x14
        pub m_nSmoothDir: [u8; 0x8], // 0x18
    }
    #[repr(C)]
    pub struct IHasAttributes {
        pub pad_0: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct ragdoll_t {
        pub list: [u8; 0x18], // 0x0
        pub hierarchyJoints: [u8; 0x18], // 0x18
        pub boneIndex: [u8; 0x18], // 0x30
        pub allowStretch: [u8; 0x1], // 0x48
        pub unused: [u8; 0x7], // 0x49
    }
    #[repr(C)]
    pub struct HullFlags_t {
        pub m_bHull_Human: [u8; 0x1], // 0x0
        pub m_bHull_SmallCentered: [u8; 0x1], // 0x1
        pub m_bHull_WideHuman: [u8; 0x1], // 0x2
        pub m_bHull_Tiny: [u8; 0x1], // 0x3
        pub m_bHull_Medium: [u8; 0x1], // 0x4
        pub m_bHull_TinyCentered: [u8; 0x1], // 0x5
        pub m_bHull_Large: [u8; 0x1], // 0x6
        pub m_bHull_LargeCentered: [u8; 0x1], // 0x7
        pub m_bHull_MediumTall: [u8; 0x1], // 0x8
        pub m_bHull_Small: [u8; 0x1], // 0x9
    }
    #[repr(C)]
    pub struct CNavFlags {
        pub m_Flags: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct ISkeletonAnimationController {
        pub pad_0: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct CNetworkOriginQuantizedVectorWS {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_vecX: [u8; 0x8], // 0x10
        pub m_vecY: [u8; 0x8], // 0x18
        pub m_vecZ: [u8; 0x8], // 0x20
    }
    #[repr(C)]
    pub struct GameAmmoTypeInfo_t {
        pub pad_0: [u8; 0x38], // 0x0
        pub m_nBuySize: [u8; 0x4], // 0x38
        pub m_nCost: [u8; 0x14], // 0x3C
    }
    #[repr(C)]
    pub struct CMotorController {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_speed: [u8; 0x4], // 0x8
        pub m_maxTorque: [u8; 0x4], // 0xC
        pub m_axis: [u8; 0xC], // 0x10
        pub m_inertiaFactor: [u8; 0x4], // 0x1C
    }
    #[repr(C)]
    pub struct CSimTimer {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_flInterval: [u8; 0x4], // 0x8
    }
    #[repr(C)]
    pub struct CBaseIssue {
        pub pad_0: [u8; 0x20], // 0x0
        pub m_szTypeString: [u8; 0x40], // 0x20
        pub m_szDetailsString: [u8; 0x104], // 0x60
        pub m_iNumYesVotes: [u8; 0x4], // 0x164
        pub m_iNumNoVotes: [u8; 0x4], // 0x168
        pub m_iNumPotentialVotes: [u8; 0x4], // 0x16C
        pub m_pVoteController: [u8; 0x8], // 0x170
    }
    #[repr(C)]
    pub struct CDynamicPropGraphController {
        pub pad_0: [u8; 0xC0], // 0x0
        pub m_sActionState: [u8; 0x18], // 0xC0
    }
    #[repr(C)]
    pub struct SummaryTakeDamageInfo_t {
        pub nSummarisedCount: [u8; 0x8], // 0x0
        pub info: [u8; 0x118], // 0x8
        pub result: [u8; 0x60], // 0x120
        pub hTarget: [u8; 0x8], // 0x180
    }
    #[repr(C)]
    pub struct INavObstacle {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_nId: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct entitytable_t {
        pub id: [u8; 0x4], // 0x0
        pub edictindex: [u8; 0x4], // 0x4
        pub saveentityindex: [u8; 0xC], // 0x8
        pub bWasSaved: [u8; 0x4], // 0x14
        pub flags: [u8; 0x8], // 0x18
        pub classname: [u8; 0x8], // 0x20
        pub globalname: [u8; 0x8], // 0x28
        pub entityname: [u8; 0x8], // 0x30
        pub landmarkModelSpace: [u8; 0x10], // 0x38
        pub m_pPrecacheEntityKeys: [u8; 0x8], // 0x48
    }
    #[repr(C)]
    pub struct AI_MotorServices_DebugSnapshotData_t__MotorPathWaypoint_t {
        pub position: [u8; 0xC], // 0x0
        pub nav_type: [u8; 0x4], // 0xC
        pub flags: [u8; 0x4], // 0x10
    }
    #[repr(C)]
    pub struct CRR_Response {
        pub m_Type: [u8; 0x1], // 0x0
        pub m_szResponseName: [u8; 0xC0], // 0x1
        pub m_szMatchingRule: [u8; 0x9F], // 0xC1
        pub m_Params: [u8; 0x20], // 0x160
        pub m_fMatchScore: [u8; 0x4], // 0x180
        pub m_bAnyMatchingRulesInCooldown: [u8; 0x4], // 0x184
        pub m_szSpeakerContext: [u8; 0x8], // 0x188
        pub m_szWorldContext: [u8; 0x8], // 0x190
        pub m_Followup: [u8; 0x1C], // 0x198
        pub m_recipientFilter: [u8; 0x4], // 0x1B4
    }
    #[repr(C)]
    pub struct CVectorExponentialMovingAverage {
        pub pad_0: [u8; 0x2C], // 0x0
    }
    #[repr(C)]
    pub struct CNmAimCSNode__CDefinition {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_nVerticalAngleNodeIdx: [u8; 0x2], // 0x18
        pub m_nHorizontalAngleNodeIdx: [u8; 0x2], // 0x1A
        pub m_nWeaponCategoryNodeIdx: [u8; 0x2], // 0x1C
        pub m_nWeaponTypeNodeIdx: [u8; 0x2], // 0x1E
        pub m_nWeaponActionNodeIdx: [u8; 0x2], // 0x20
        pub m_nWeaponDropNodeIdx: [u8; 0x2], // 0x22
        pub m_nIsDefusingNodeIdx: [u8; 0x2], // 0x24
        pub m_nCrouchWeightNodeIdx: [u8; 0x2], // 0x26
        pub m_flHandIKBlendInTimeSeconds: [u8; 0x4], // 0x28
        pub m_flActionBlendTimeSeconds: [u8; 0x4], // 0x2C
        pub m_flPlantingBlendTimeSeconds: [u8; 0x8], // 0x30
    }
    #[repr(C)]
    pub struct CConstantForceController {
        pub pad_0: [u8; 0xC], // 0x0
        pub m_linear: [u8; 0xC], // 0xC
        pub m_angular: [u8; 0xC], // 0x18
        pub m_linearSave: [u8; 0xC], // 0x24
        pub m_angularSave: [u8; 0x10], // 0x30
    }
    #[repr(C)]
    pub struct WaterWheelDrag_t {
        pub m_flFractionOfWheelSubmerged: [u8; 0x4], // 0x0
        pub m_flWheelDrag: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct CTakeDamageInfo {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_vecDamageForce: [u8; 0xC], // 0x8
        pub m_vecDamagePosition: [u8; 0xC], // 0x14
        pub m_vecReportedPosition: [u8; 0xC], // 0x20
        pub m_vecDamageDirection: [u8; 0xC], // 0x2C
        pub m_hInflictor: [u8; 0x4], // 0x38
        pub m_hAttacker: [u8; 0x4], // 0x3C
        pub m_hAbility: [u8; 0x4], // 0x40
        pub m_flDamage: [u8; 0x4], // 0x44
        pub m_flTotalledDamage: [u8; 0x4], // 0x48
        pub m_bitsDamageType: [u8; 0x4], // 0x4C
        pub m_iDamageCustom: [u8; 0x4], // 0x50
        pub m_iAmmoType: [u8; 0xC], // 0x54
        pub m_flOriginalDamage: [u8; 0x4], // 0x60
        pub m_bShouldBleed: [u8; 0x1], // 0x64
        pub m_bShouldSpark: [u8; 0xB], // 0x65
        pub m_nDamageFlags: [u8; 0x8], // 0x70
        pub m_iHitGroupId: [u8; 0x4], // 0x78
        pub m_nNumObjectsPenetrated: [u8; 0x4], // 0x7C
        pub m_flFriendlyFireDamageReductionRatio: [u8; 0x4], // 0x80
        pub m_bStoppedBullet: [u8; 0x7C], // 0x84
        pub m_DestructibleHitGroupRequests: [u8; 0x10], // 0x100
        pub m_bInTakeDamageFlow: [u8; 0x8], // 0x110
    }
    #[repr(C)]
    pub struct CRandSimTimer {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_flMinInterval: [u8; 0x4], // 0x8
        pub m_flMaxInterval: [u8; 0x4], // 0xC
    }
    #[repr(C)]
    pub struct CBtNodeComposite {
        pub pad_0: [u8; 0x58], // 0x0
    }
    #[repr(C)]
    pub struct CRelativeLocation {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_Type: [u8; 0x4], // 0x18
        pub m_vRelativeOffset: [u8; 0xC], // 0x1C
        pub m_vWorldSpacePos: [u8; 0xC], // 0x28
        pub m_hEntity: [u8; 0x4], // 0x34
    }
    #[repr(C)]
    pub struct HostagePathCost {
        pub pad_0: [u8; 0x30], // 0x0
    }
    #[repr(C)]
    pub struct Extent {
        pub lo: [u8; 0xC], // 0x0
        pub hi: [u8; 0xC], // 0xC
    }
    #[repr(C)]
    pub struct sndopvarlatchdata_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_iszStack: [u8; 0x8], // 0x8
        pub m_iszOperator: [u8; 0x8], // 0x10
        pub m_iszOpvar: [u8; 0x8], // 0x18
        pub m_flVal: [u8; 0x4], // 0x20
        pub m_vPos: [u8; 0xC], // 0x24
    }
    #[repr(C)]
    pub struct PrecipitationFilter_t {
        pub m_flMaxRadius: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct IEconItemInterface {
        pub pad_0: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct PathMoverEntitySpawn {
        pub hMover: [u8; 0x8], // 0x0
        pub vecOtherEntities: [u8; 0x18], // 0x8
        pub nSpawnNumber: [u8; 0x8], // 0x20
    }
    #[repr(C)]
    pub struct CMultiplayer_Expresser {
        pub pad_0: [u8; 0xA0], // 0x0
        pub m_bAllowMultipleScenes: [u8; 0x8], // 0xA0
    }
    #[repr(C)]
    pub struct CNavVolume {
        pub pad_0: [u8; 0x78], // 0x0
    }
    #[repr(C)]
    pub struct QuestProgress {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct CExternalAnimGraphList {
        pub pad_0: [u8; 0x20], // 0x0
    }
    #[repr(C)]
    pub struct CNmAimCSTask {
        pub pad_0: [u8; 0x130], // 0x0
    }
    #[repr(C)]
    pub struct ParticleIndex_t {
        pub m_Value: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CAI_ExpresserWithFollowup {
        pub pad_0: [u8; 0xA0], // 0x0
    }
    #[repr(C)]
    pub struct CTakeDamageSummaryScopeGuard {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_vecSummaries: [u8; 0x18], // 0x8
    }
    #[repr(C)]
    pub struct CIronSightController {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_bIronSightAvailable: [u8; 0x4], // 0x8
        pub m_flIronSightAmount: [u8; 0x4], // 0xC
        pub m_flIronSightAmountGained: [u8; 0x4], // 0x10
        pub m_flIronSightAmountBiased: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct INavPathCostAreaFilter {
        pub pad_0: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct CNmEventConsumerSound {
        pub pad_0: [u8; 0xB8], // 0x0
    }
    #[repr(C)]
    pub struct CNmEventConsumerLegacy {
        pub pad_0: [u8; 0x3E8], // 0x0
    }
    #[repr(C)]
    pub struct DestructiblePartDamageRequest_t {
        pub m_nHitGroup: [u8; 0x4], // 0x0
        pub m_nDamageLevel: [u8; 0x4], // 0x4
        pub m_nDesiredHealth: [u8; 0x4], // 0x8
        pub m_nDestroyFlags: [u8; 0x4], // 0xC
        pub m_nDamageType: [u8; 0x4], // 0x10
        pub m_flBreakDamage: [u8; 0x4], // 0x14
        pub m_flBreakDamageRadius: [u8; 0x4], // 0x18
        pub m_hAttacker: [u8; 0x4], // 0x1C
        pub m_vWsBreakDamageOrigin: [u8; 0xC], // 0x20
        pub m_vWsBreakDamageForce: [u8; 0x10], // 0x2C
    }
    #[repr(C)]
    pub struct CInButtonState {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_pButtonStates: [u8; 0x18], // 0x8
    }
    #[repr(C)]
    pub struct SoundeventBoxHelperNetworked_t {
        pub vOrigin: [u8; 0xC], // 0x0
        pub qAngles: [u8; 0xC], // 0xC
        pub vMins: [u8; 0xC], // 0x18
        pub vMaxs: [u8; 0xC], // 0x24
    }
    #[repr(C)]
    pub struct CNetworkOriginCellCoordQuantizedVectorWS {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_cellX: [u8; 0x2], // 0x10
        pub m_cellY: [u8; 0x2], // 0x12
        pub m_cellZ: [u8; 0x2], // 0x14
        pub m_nOutsideWorld: [u8; 0x2], // 0x16
        pub m_vecX: [u8; 0x8], // 0x18
        pub m_vecY: [u8; 0x8], // 0x20
        pub m_vecZ: [u8; 0x8], // 0x28
    }
    #[repr(C)]
    pub struct CNmEventConsumerParticle {
        pub pad_0: [u8; 0xB0], // 0x0
    }
    #[repr(C)]
    pub struct CNavHullVData {
        pub m_bAgentEnabled: [u8; 0x4], // 0x0
        pub m_agentRadius: [u8; 0x4], // 0x4
        pub m_agentHeight: [u8; 0x4], // 0x8
        pub m_agentShortHeightEnabled: [u8; 0x4], // 0xC
        pub m_agentShortHeight: [u8; 0x4], // 0x10
        pub m_agentCrawlEnabled: [u8; 0x4], // 0x14
        pub m_agentCrawlHeight: [u8; 0x4], // 0x18
        pub m_agentMaxClimb: [u8; 0x4], // 0x1C
        pub m_agentMaxSlope: [u8; 0x4], // 0x20
        pub m_agentMaxJumpDownDist: [u8; 0x4], // 0x24
        pub m_agentMaxJumpHorizDistBase: [u8; 0x4], // 0x28
        pub m_agentMaxJumpUpDist: [u8; 0x4], // 0x2C
        pub m_agentBorderErosion: [u8; 0x4], // 0x30
        pub m_flowMapGenerationEnabled: [u8; 0x4], // 0x34
        pub m_flowMapNodeMaxRadius: [u8; 0x4], // 0x38
    }
    #[repr(C)]
    pub struct CNmEventConsumerCamera {
        pub pad_0: [u8; 0xB0], // 0x0
    }
    #[repr(C)]
    pub struct AI_DefaultNPC_DebugSnapshotData_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub s_npc_current_ability: [u8; 0x8], // 0x8
        pub s_npc_current_held_ability: [u8; 0x8], // 0x10
        pub s_npc_tactic_current: [u8; 0x8], // 0x18
        pub s_npc_tactic_phase: [u8; 0x8], // 0x20
        pub tactic_interrupt_conditions: [u8; 0x18], // 0x28
        pub path_query: [u8; 0x28], // 0x40
        pub path_queries_speculative: [u8; 0x18], // 0x68
    }
    #[repr(C)]
    pub struct CNavPathCost {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_bAllowLadders: [u8; 0x1], // 0x10
        pub m_bCanFly: [u8; 0x1], // 0x11
        pub m_bCanSwim: [u8; 0x2], // 0x12
        pub m_flWaterToGroundMaxHeight: [u8; 0x4], // 0x14
        pub m_flGroundToWaterMaxHeight: [u8; 0x4], // 0x18
        pub m_flGroundToWaterTransitionDistance: [u8; 0x4], // 0x1C
        pub m_flWaterToGroundTransitionDistance: [u8; 0x4], // 0x20
        pub m_flFlyingTransitionTolerance: [u8; 0x4], // 0x24
        pub m_bOptimizeFlySpacePathfinds: [u8; 0x1], // 0x28
        pub m_bStringPullFlySpacePathfinds: [u8; 0x1], // 0x29
        pub m_bSupportsTransitions: [u8; 0x2], // 0x2A
        pub m_flTransitionPenalty: [u8; 0x4], // 0x2C
    }
    #[repr(C)]
    pub struct CNmSnapWeaponNode__CDefinition {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_nFlashedAmountNodeIdx: [u8; 0x2], // 0x18
        pub m_nWeaponCategoryNodeIdx: [u8; 0x2], // 0x1A
        pub m_nWeaponTypeNodeIdx: [u8; 0x4], // 0x1C
    }
    #[repr(C)]
    pub struct SoundOpvarTraceResult_t {
        pub vPos: [u8; 0xC], // 0x0
        pub bDidHit: [u8; 0x4], // 0xC
        pub flDistSqrToCenter: [u8; 0x4], // 0x10
    }
    #[repr(C)]
    pub struct ActorMapping_t {
        pub m_sActorName: [u8; 0x8], // 0x0
        pub m_hEntity: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct CNavVolumeCalculatedVector {
        pub pad_0: [u8; 0xA0], // 0x0
    }
    #[repr(C)]
    pub struct CFiringModeInt {
        pub m_nValues: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct CBtNodeDecorator {
        pub pad_0: [u8; 0x58], // 0x0
    }
    #[repr(C)]
    pub struct CSAdditionalPerRoundStats_t {
        pub m_numChickensKilled: [u8; 0x4], // 0x0
        pub m_killsWhileBlind: [u8; 0x4], // 0x4
        pub m_bombCarrierkills: [u8; 0x4], // 0x8
        pub m_flBurnDamageInflicted: [u8; 0x4], // 0xC
        pub m_flBlastDamageInflicted: [u8; 0x4], // 0x10
        pub m_iDinks: [u8; 0x4], // 0x14
        pub m_bFreshStartThisRound: [u8; 0x1], // 0x18
        pub m_bBombPlantedAndAlive: [u8; 0x3], // 0x19
        pub m_nDefuseStarts: [u8; 0x4], // 0x1C
        pub m_nHostagePickUps: [u8; 0x4], // 0x20
        pub m_numTeammatesFlashed: [u8; 0x4], // 0x24
        pub m_strAnnotationsWorkshopId: [u8; 0xE8], // 0x28
    }
    #[repr(C)]
    pub struct CNmEventConsumerBodyGroup {
        pub pad_0: [u8; 0xB0], // 0x0
    }
    #[repr(C)]
    pub struct CEmptyGraphController {
        pub pad_0: [u8; 0xC0], // 0x0
    }
    #[repr(C)]
    pub struct ModelConfigHandle_t {
        pub m_Value: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CEntitySubclassVDataBase {
        pub pad_0: [u8; 0x28], // 0x0
    }
    #[repr(C)]
    pub struct CBreakableStageHelper {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_nCurrentStage: [u8; 0x4], // 0x8
        pub m_nStageCount: [u8; 0xC], // 0xC
    }
    #[repr(C)]
    pub struct CNavVolumeBreadthFirstSearch {
        pub pad_0: [u8; 0xA8], // 0x0
        pub m_vStartPos: [u8; 0xC], // 0xA8
        pub m_flSearchDist: [u8; 0xC], // 0xB4
    }
    #[repr(C)]
    pub struct dynpitchvol_t {
        pub pad_0: [u8; 0x64], // 0x0
    }
    #[repr(C)]
    pub struct CSAdditionalMatchStats_t {
        pub pad_0: [u8; 0x110], // 0x0
        pub m_numRoundsSurvivedStreak: [u8; 0x4], // 0x110
        pub m_maxNumRoundsSurvivedStreak: [u8; 0x4], // 0x114
        pub m_numRoundsSurvivedTotal: [u8; 0x4], // 0x118
        pub m_iRoundsWonWithoutPurchase: [u8; 0x4], // 0x11C
        pub m_iRoundsWonWithoutPurchaseTotal: [u8; 0x4], // 0x120
        pub m_numFirstKills: [u8; 0x4], // 0x124
        pub m_numClutchKills: [u8; 0x4], // 0x128
        pub m_numPistolKills: [u8; 0x4], // 0x12C
        pub m_numSniperKills: [u8; 0x4], // 0x130
        pub m_iNumSuicides: [u8; 0x4], // 0x134
        pub m_iNumTeamKills: [u8; 0x4], // 0x138
        pub m_flTeamDamage: [u8; 0x4], // 0x13C
    }
    #[repr(C)]
    pub struct AI_Navigator_DebugSnapshotData_t__Waypoint_t {
        pub position: [u8; 0xC], // 0x0
        pub nav_type: [u8; 0x4], // 0xC
        pub flags: [u8; 0x4], // 0x10
        pub is_pathcorner: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct CTestPulseIOComponent {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_ComponentData: [u8; 0x8], // 0x8
        pub m_OnComponentTestFunc: [u8; 0x20], // 0x10
    }
    #[repr(C)]
    pub struct IRagdoll {
        pub pad_0: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct CCSPlayerAnimationState {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_currentMoveType: [u8; 0x1], // 0x18
        pub m_groundMoveState: [u8; 0x1], // 0x19
        pub m_groundActionDirection: [u8; 0x1], // 0x1A
        pub m_airAction: [u8; 0x1], // 0x1B
        pub m_bWasOnGroundLastUpdate: [u8; 0x1], // 0x1C
        pub m_bWasStationaryLastUpdate: [u8; 0x3], // 0x1D
        pub m_actionStartTick: [u8; 0x4], // 0x20
        pub m_staticAimTimerStartTick: [u8; 0x4], // 0x24
        pub m_plantAndTurnStartTick: [u8; 0x4], // 0x28
        pub m_flTurnOnSpotAngle: [u8; 0x4], // 0x2C
        pub m_flPreviousAimYaw: [u8; 0x4], // 0x30
        pub m_flPreviousHorizontalSpeed: [u8; 0x4], // 0x34
        pub m_flFootIKOffsetLeft: [u8; 0x4], // 0x38
        pub m_flFootIKOffsetRight: [u8; 0x4], // 0x3C
        pub m_flWeaponDropPercentageDueToMovement: [u8; 0x4], // 0x40
        pub m_flWeaponDropSmoothDampVelocity: [u8; 0x9C], // 0x44
    }
    #[repr(C)]
    pub struct hudtextparms_t {
        pub color1: [u8; 0x4], // 0x0
        pub color2: [u8; 0x4], // 0x4
        pub effect: [u8; 0x1], // 0x8
        pub channel: [u8; 0x3], // 0x9
        pub x: [u8; 0x4], // 0xC
        pub y: [u8; 0x4], // 0x10
    }
    #[repr(C)]
    pub struct QueuedAISearchId_t {
        pub m_Value: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct CAnimGraphControllerBase {
        pub pad_0: [u8; 0x4C], // 0x0
        pub m_hExternalGraph: [u8; 0x74], // 0x4C
    }
    #[repr(C)]
    pub struct CNetworkVelocityVector {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_vecX: [u8; 0x8], // 0x10
        pub m_vecY: [u8; 0x8], // 0x18
        pub m_vecZ: [u8; 0x8], // 0x20
    }
    #[repr(C)]
    pub struct CDestructiblePart_DamageLevel {
        pub m_sName: [u8; 0x8], // 0x0
        pub m_sBreakablePieceName: [u8; 0x8], // 0x8
        pub m_nBodyGroupValue: [u8; 0x4], // 0x10
        pub m_nHealth: [u8; 0x10], // 0x14
        pub m_flCriticalDamagePercent: [u8; 0x4], // 0x24
        pub m_nDamagePassthroughType: [u8; 0x4], // 0x28
        pub m_nDestructionDeathBehavior: [u8; 0x4], // 0x2C
        pub m_sCustomDeathHandshake: [u8; 0x8], // 0x30
        pub m_bShouldDestroyOnDeath: [u8; 0x4], // 0x38
        pub m_flDeathDestroyTime: [u8; 0xC], // 0x3C
    }
    #[repr(C)]
    pub struct CNavVolumeAll {
        pub pad_0: [u8; 0xA0], // 0x0
    }
    #[repr(C)]
    pub struct CNavVolumeSphere {
        pub pad_0: [u8; 0x78], // 0x0
        pub m_vCenter: [u8; 0xC], // 0x78
        pub m_flRadius: [u8; 0x4], // 0x84
    }
    #[repr(C)]
    pub struct Relationship_t {
        pub disposition: [u8; 0x4], // 0x0
        pub priority: [u8; 0x4], // 0x4
    }
}
