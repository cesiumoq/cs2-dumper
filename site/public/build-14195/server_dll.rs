/* cesium dumper | generated from live schema */
#![allow(non_snake_case, non_camel_case_types, dead_code)]

pub mod server_dll {

    #[repr(C)]
    pub struct CWeaponNOVA {
        pub pad_0: [u8; 0x1280], // 0x0
    }

    #[repr(C)]
    pub struct CPointWorldText {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x200], // 0x850
        pub _: [u8; 0x40], // 0xa50
        pub _: [u8; 0x40], // 0xa90
        pub _: [u8; 0x1], // 0xad0
        pub _: [u8; 0x3], // 0xad1
        pub _: [u8; 0x4], // 0xad4
        pub _: [u8; 0x4], // 0xad8
        pub _: [u8; 0x4], // 0xadc
        pub _: [u8; 0x4], // 0xae0
        pub _: [u8; 0x4], // 0xae4
        pub _: [u8; 0x4], // 0xae8
        pub _: [u8; 0x4], // 0xaec
        pub _: [u8; 0x4], // 0xaf0
        pub _: [u8; 0x4], // 0xaf4
        pub _: [u8; 0x4], // 0xaf8
        pub _: [u8; 0x4], // 0xafc
    }

    #[repr(C)]
    pub struct CAmbientGeneric {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x64], // 0x4b4
        pub _: [u8; 0x1], // 0x518
        pub _: [u8; 0x7], // 0x519
        pub _: [u8; 0x8], // 0x520
        pub _: [u8; 0x8], // 0x528
        pub _: [u8; 0x4], // 0x530
        pub _: [u8; 0x1c], // 0x534
    }

    #[repr(C)]
    pub struct CEnvEntityMaker {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0xc], // 0x4a8
        pub _: [u8; 0xc], // 0x4b4
        pub _: [u8; 0x4], // 0x4c0
        pub _: [u8; 0x4], // 0x4c4
        pub _: [u8; 0xc], // 0x4c8
        pub _: [u8; 0xc], // 0x4d4
        pub _: [u8; 0x4], // 0x4e0
        pub _: [u8; 0x4], // 0x4e4
        pub _: [u8; 0x8], // 0x4e8
        pub _: [u8; 0x8], // 0x4f0
        pub _: [u8; 0x18], // 0x4f8
        pub _: [u8; 0x18], // 0x510
    }

    #[repr(C)]
    pub struct CPulseGraphInstance_GameBlackboard {
        pub pad_0: [u8; 0x150], // 0x0
    }

    #[repr(C)]
    pub struct CPointEntity {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CFilterEnemy {
        pub pad_0: [u8; 0x4e0], // 0x0
        pub _: [u8; 0x8], // 0x4e0
        pub _: [u8; 0x4], // 0x4e8
        pub _: [u8; 0x4], // 0x4ec
        pub _: [u8; 0x8], // 0x4f0
        pub _: [u8; 0x8], // 0x4f8
    }

    #[repr(C)]
    pub struct CCSGO_WingmanIntroCounterTerroristPosition {
        pub pad_0: [u8; 0x1468], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_WaitForCursorsWithTag {
        pub pad_0: [u8; 0x128], // 0x0
        pub _: [u8; 0x4], // 0x128
        pub _: [u8; 0x4], // 0x12c
    }

    #[repr(C)]
    pub struct CFuncTrackAuto {
        pub pad_0: [u8; 0x958], // 0x0
    }

    #[repr(C)]
    pub struct CScriptedSequence {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x8], // 0x4b8
        pub _: [u8; 0x8], // 0x4c0
        pub _: [u8; 0x8], // 0x4c8
        pub _: [u8; 0x8], // 0x4d0
        pub _: [u8; 0x8], // 0x4d8
        pub _: [u8; 0x8], // 0x4e0
        pub _: [u8; 0x4], // 0x4e8
        pub _: [u8; 0x4], // 0x4ec
        pub _: [u8; 0x4], // 0x4f0
        pub _: [u8; 0x4], // 0x4f4
        pub _: [u8; 0x1], // 0x4f8
        pub _: [u8; 0x1], // 0x4f9
        pub _: [u8; 0x1], // 0x4fa
        pub _: [u8; 0x1], // 0x4fb
        pub _: [u8; 0x1], // 0x4fc
        pub _: [u8; 0x1], // 0x4fd
        pub _: [u8; 0x1], // 0x4fe
        pub _: [u8; 0x1], // 0x4ff
        pub _: [u8; 0x1], // 0x500
        pub _: [u8; 0x1], // 0x501
        pub _: [u8; 0x1], // 0x502
        pub _: [u8; 0x1], // 0x503
        pub _: [u8; 0x1], // 0x504
        pub _: [u8; 0x1], // 0x505
        pub _: [u8; 0x1], // 0x506
        pub _: [u8; 0x1], // 0x507
        pub _: [u8; 0x1], // 0x508
        pub _: [u8; 0x1], // 0x509
        pub _: [u8; 0x1], // 0x50a
        pub _: [u8; 0x1], // 0x50b
        pub _: [u8; 0x1], // 0x50c
        pub _: [u8; 0x1], // 0x50d
        pub _: [u8; 0x1], // 0x50e
        pub _: [u8; 0x1], // 0x50f
        pub _: [u8; 0x4], // 0x510
        pub _: [u8; 0x4], // 0x514
        pub _: [u8; 0x4], // 0x518
        pub _: [u8; 0x4], // 0x51c
        pub _: [u8; 0x4], // 0x520
        pub _: [u8; 0x4], // 0x524
        pub _: [u8; 0x4], // 0x528
        pub _: [u8; 0x4], // 0x52c
        pub _: [u8; 0x4], // 0x530
        pub _: [u8; 0x4], // 0x534
        pub _: [u8; 0x4], // 0x538
        pub _: [u8; 0x4], // 0x53c
        pub _: [u8; 0x4], // 0x540
        pub _: [u8; 0x4], // 0x544
        pub _: [u8; 0x1], // 0x548
        pub _: [u8; 0x1], // 0x549
        pub _: [u8; 0x2], // 0x54a
        pub _: [u8; 0x4], // 0x54c
        pub _: [u8; 0x4], // 0x550
        pub _: [u8; 0x1], // 0x554
        pub _: [u8; 0x1], // 0x555
        pub _: [u8; 0x1], // 0x556
        pub _: [u8; 0x1], // 0x557
        pub _: [u8; 0x4], // 0x558
        pub _: [u8; 0x1], // 0x55c
        pub _: [u8; 0x1], // 0x55d
        pub _: [u8; 0x1], // 0x55e
        pub _: [u8; 0x1], // 0x55f
        pub _: [u8; 0x4], // 0x560
        pub _: [u8; 0x4], // 0x564
        pub _: [u8; 0x18], // 0x568
        pub _: [u8; 0x18], // 0x580
        pub _: [u8; 0x18], // 0x598
        pub _: [u8; 0x18], // 0x5b0
        pub _: [u8; 0x18], // 0x5c8
        pub _: [u8; 0x18], // 0x5e0
        pub _: [u8; 0xc8], // 0x5f8
        pub _: [u8; 0x20], // 0x6c0
        pub _: [u8; 0x4], // 0x6e0
        pub _: [u8; 0x4], // 0x6e4
        pub _: [u8; 0x8], // 0x6e8
    }

    #[repr(C)]
    pub struct CFogTrigger {
        pub pad_0: [u8; 0x9c8], // 0x0
        pub _: [u8; 0x68], // 0x9c8
    }

    #[repr(C)]
    pub struct CInfoTeleportDestination {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CPointBroadcastClientCommand {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CCSPlayer_PingServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x14], // 0x48
        pub _: [u8; 0x4], // 0x5c
    }

    #[repr(C)]
    pub struct CHEGrenade {
        pub pad_0: [u8; 0x12c0], // 0x0
    }

    #[repr(C)]
    pub struct CPhysicsSpring {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x4], // 0x4b4
        pub _: [u8; 0x8], // 0x4b8
        pub _: [u8; 0x8], // 0x4c0
        pub _: [u8; 0x8], // 0x4c8
        pub _: [u8; 0xc], // 0x4d0
        pub _: [u8; 0xc], // 0x4dc
        pub _: [u8; 0x8], // 0x4e8
    }

    #[repr(C)]
    pub struct CEnvMuzzleFlash {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x8], // 0x4b0
    }

    #[repr(C)]
    pub struct CEconItemAttribute {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x8], // 0x40
    }

    #[repr(C)]
    pub struct CPulseCell_RaceCursors {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x18], // 0xd8
        pub _: [u8; 0x48], // 0xf0
    }

    #[repr(C)]
    pub struct CWeaponRevolver {
        pub pad_0: [u8; 0x12a0], // 0x0
    }

    #[repr(C)]
    pub struct CFuncTrainControls {
        pub pad_0: [u8; 0x850], // 0x0
    }

    #[repr(C)]
    pub struct CBtActionCombatPositioning {
        pub pad_0: [u8; 0x68], // 0x0
        pub _: [u8; 0x18], // 0x68
        pub _: [u8; 0x8], // 0x80
        pub _: [u8; 0x18], // 0x88
        pub _: [u8; 0x10], // 0xa0
    }

    #[repr(C)]
    pub struct CFuncRetakeBarrier {
        pub pad_0: [u8; 0xcb0], // 0x0
    }

    #[repr(C)]
    pub struct CTriggerBuoyancy {
        pub pad_0: [u8; 0x9c8], // 0x0
        pub _: [u8; 0x118], // 0x9c8
        pub _: [u8; 0x8], // 0xae0
    }

    #[repr(C)]
    pub struct CTonemapController2Alias_env_tonemap_controller2 {
        pub pad_0: [u8; 0x4c0], // 0x0
    }

    #[repr(C)]
    pub struct CPathTrack {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x4], // 0x4b4
        pub _: [u8; 0x4], // 0x4b8
        pub _: [u8; 0x4], // 0x4bc
        pub _: [u8; 0x8], // 0x4c0
        pub _: [u8; 0x4], // 0x4c8
        pub _: [u8; 0x4], // 0x4cc
        pub _: [u8; 0x18], // 0x4d0
    }

    #[repr(C)]
    pub struct CCSGO_EndOfMatchLineupEndpoint {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_Base {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x40], // 0x8
    }

    #[repr(C)]
    pub struct CTriggerProximity {
        pub pad_0: [u8; 0x9c8], // 0x0
        pub _: [u8; 0x8], // 0x9c8
        pub _: [u8; 0x8], // 0x9d0
        pub _: [u8; 0x4], // 0x9d8
        pub _: [u8; 0x4], // 0x9dc
        pub _: [u8; 0x20], // 0x9e0
    }

    #[repr(C)]
    pub struct CTankTrainAI {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x18], // 0x4b0
        pub _: [u8; 0x8], // 0x4c8
        pub _: [u8; 0x8], // 0x4d0
        pub _: [u8; 0x8], // 0x4d8
        pub _: [u8; 0x8], // 0x4e0
    }

    #[repr(C)]
    pub struct CGameText {
        pub pad_0: [u8; 0x860], // 0x0
        pub _: [u8; 0x8], // 0x860
        pub _: [u8; 0x18], // 0x868
    }

    #[repr(C)]
    pub struct CGameEnd {
        pub pad_0: [u8; 0x860], // 0x0
    }

    #[repr(C)]
    pub struct CInfoDeathmatchSpawn {
        pub pad_0: [u8; 0x4b8], // 0x0
    }

    #[repr(C)]
    pub struct CCSPlayerController_InventoryServices {
        pub pad_0: [u8; 0x40], // 0x0
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x18], // 0x44
        pub _: [u8; 0x4], // 0x5c
        pub _: [u8; 0x4], // 0x60
        pub _: [u8; 0x4], // 0x64
        pub _: [u8; 0x4], // 0x68
        pub _: [u8; 0xf1c], // 0x6c
        pub _: [u8; 0x8], // 0xf88
        pub _: [u8; 0x8], // 0xf90
        pub _: [u8; 0x88], // 0xf98
    }

    #[repr(C)]
    pub struct CCSPlayerModernJump {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x8], // 0x30
    }

    #[repr(C)]
    pub struct CPulse_ResumePoint {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct CTriggerFan {
        pub pad_0: [u8; 0x9c8], // 0x0
        pub _: [u8; 0xc], // 0x9c8
        pub _: [u8; 0xc], // 0x9d4
        pub _: [u8; 0x1], // 0x9e0
        pub _: [u8; 0xf], // 0x9e1
        pub _: [u8; 0x10], // 0x9f0
        pub _: [u8; 0x4], // 0xa00
        pub _: [u8; 0x4], // 0xa04
        pub _: [u8; 0x8], // 0xa08
        pub _: [u8; 0x18], // 0xa10
        pub _: [u8; 0xc], // 0xa28
        pub _: [u8; 0xc], // 0xa34
        pub _: [u8; 0xc], // 0xa40
        pub _: [u8; 0xc], // 0xa4c
        pub _: [u8; 0x8], // 0xa58
        pub _: [u8; 0x4], // 0xa60
        pub _: [u8; 0x4], // 0xa64
        pub _: [u8; 0x4], // 0xa68
        pub _: [u8; 0x4], // 0xa6c
        pub _: [u8; 0x4], // 0xa70
        pub _: [u8; 0x4], // 0xa74
        pub _: [u8; 0x4], // 0xa78
        pub _: [u8; 0x4], // 0xa7c
        pub _: [u8; 0x1], // 0xa80
        pub _: [u8; 0x3], // 0xa81
        pub _: [u8; 0xc], // 0xa84
    }

    #[repr(C)]
    pub struct CPhysHingeAlias_phys_hinge_local {
        pub pad_0: [u8; 0x678], // 0x0
    }

    #[repr(C)]
    pub struct CLogicCase {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x100], // 0x4a8
        pub _: [u8; 0x4], // 0x5a8
        pub _: [u8; 0x4], // 0x5ac
        pub _: [u8; 0x20], // 0x5b0
        pub _: [u8; 0x300], // 0x5d0
        pub _: [u8; 0x20], // 0x8d0
    }

    #[repr(C)]
    pub struct CPulseCell_Outflow_PlayVOLine {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x48], // 0xd8
    }

    #[repr(C)]
    pub struct CInfoGameEventProxy {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x8], // 0x4b0
    }

    #[repr(C)]
    pub struct CWeaponBizon {
        pub pad_0: [u8; 0x12a0], // 0x0
    }

    #[repr(C)]
    pub struct CGamePlayerZone {
        pub pad_0: [u8; 0x858], // 0x0
        pub _: [u8; 0x18], // 0x858
        pub _: [u8; 0x18], // 0x870
        pub _: [u8; 0x20], // 0x888
        pub _: [u8; 0x20], // 0x8a8
    }

    #[repr(C)]
    pub struct CBaseToggle {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x4], // 0x850
        pub _: [u8; 0x4], // 0x854
        pub _: [u8; 0x4], // 0x858
        pub _: [u8; 0x4], // 0x85c
        pub _: [u8; 0x4], // 0x860
        pub _: [u8; 0xc], // 0x864
        pub _: [u8; 0xc], // 0x870
        pub _: [u8; 0xc], // 0x87c
        pub _: [u8; 0xc], // 0x888
        pub _: [u8; 0xc], // 0x894
        pub _: [u8; 0x4], // 0x8a0
        pub _: [u8; 0x4], // 0x8a4
        pub _: [u8; 0xc], // 0x8a8
        pub _: [u8; 0xc], // 0x8b4
        pub _: [u8; 0x8], // 0x8c0
        pub _: [u8; 0x8], // 0x8c8
    }

    #[repr(C)]
    pub struct CPulseServerCursor {
        pub pad_0: [u8; 0xe8], // 0x0
        pub _: [u8; 0x4], // 0xe8
        pub _: [u8; 0x4], // 0xec
    }

    #[repr(C)]
    pub struct CPulseCell_PlaySequence {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x8], // 0xd8
        pub _: [u8; 0x18], // 0xe0
        pub _: [u8; 0x48], // 0xf8
    }

    #[repr(C)]
    pub struct CInferno {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x300], // 0x850
        pub _: [u8; 0x300], // 0xb50
        pub _: [u8; 0x40], // 0xe50
        pub _: [u8; 0x300], // 0xe90
        pub _: [u8; 0x4], // 0x1190
        pub _: [u8; 0x4], // 0x1194
        pub _: [u8; 0x4], // 0x1198
        pub _: [u8; 0x4], // 0x119c
        pub _: [u8; 0x1], // 0x11a0
        pub _: [u8; 0x207], // 0x11a1
        pub _: [u8; 0x18], // 0x13a8
        pub _: [u8; 0x18], // 0x13c0
        pub _: [u8; 0x18], // 0x13d8
        pub _: [u8; 0xc], // 0x13f0
        pub _: [u8; 0xc], // 0x13fc
        pub _: [u8; 0xc], // 0x1408
        pub _: [u8; 0xc], // 0x1414
        pub _: [u8; 0x10], // 0x1420
        pub _: [u8; 0x4], // 0x1430
        pub _: [u8; 0x4], // 0x1434
        pub _: [u8; 0x8], // 0x1438
        pub _: [u8; 0x18], // 0x1440
        pub _: [u8; 0x18], // 0x1458
        pub _: [u8; 0x68], // 0x1470
    }

    #[repr(C)]
    pub struct CTouchExpansionComponent {
        pub pad_0: [u8; 0x50], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_Outflow_PlaySceneBase {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x48], // 0xd8
        pub _: [u8; 0x18], // 0x120
    }

    #[repr(C)]
    pub struct CPulseCell_LerpCameraSettings {
        pub pad_0: [u8; 0x120], // 0x0
        pub _: [u8; 0x4], // 0x120
        pub _: [u8; 0x10], // 0x124
        pub _: [u8; 0x14], // 0x134
    }

    #[repr(C)]
    pub struct CWeaponSCAR20 {
        pub pad_0: [u8; 0x12a0], // 0x0
    }

    #[repr(C)]
    pub struct CFuncInteractionLayerClip {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x8], // 0x850
        pub _: [u8; 0x8], // 0x858
        pub _: [u8; 0x8], // 0x860
    }

    #[repr(C)]
    pub struct CCSObserver_UseServices {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct CCSMinimapVolume {
        pub pad_0: [u8; 0x9e0], // 0x0
        pub _: [u8; 0x8], // 0x9e0
    }

    #[repr(C)]
    pub struct CTriggerDetectBulletFire {
        pub pad_0: [u8; 0x9c8], // 0x0
        pub _: [u8; 0x8], // 0x9c8
        pub _: [u8; 0x18], // 0x9d0
    }

    #[repr(C)]
    pub struct CCSPlayer_UseServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x8], // 0x50
    }

    #[repr(C)]
    pub struct CWeaponAWP {
        pub pad_0: [u8; 0x12a0], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_PickBestOutflowSelector {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x18], // 0x50
    }

    #[repr(C)]
    pub struct CInfoFan {
        pub pad_0: [u8; 0x4e8], // 0x0
        pub _: [u8; 0x4], // 0x4e8
        pub _: [u8; 0x4], // 0x4ec
        pub _: [u8; 0x8], // 0x4f0
        pub _: [u8; 0x8], // 0x4f8
    }

    #[repr(C)]
    pub struct CGameRules {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x28], // 0x8
        pub _: [u8; 0x80], // 0x30
        pub _: [u8; 0x4], // 0xb0
        pub _: [u8; 0x4], // 0xb4
        pub _: [u8; 0x8], // 0xb8
        pub _: [u8; 0x4], // 0xc0
        pub _: [u8; 0x4], // 0xc4
        pub _: [u8; 0x8], // 0xc8
    }

    #[repr(C)]
    pub struct CPulseCell_ApplyDynamicAttributeEHandle {
        pub pad_0: [u8; 0xd8], // 0x0
    }

    #[repr(C)]
    pub struct CFish {
        pub pad_0: [u8; 0xa40], // 0x0
        pub _: [u8; 0x4], // 0xa40
        pub _: [u8; 0x4], // 0xa44
        pub _: [u8; 0x4], // 0xa48
        pub _: [u8; 0x4], // 0xa4c
        pub _: [u8; 0x4], // 0xa50
        pub _: [u8; 0x4], // 0xa54
        pub _: [u8; 0x4], // 0xa58
        pub _: [u8; 0xc], // 0xa5c
        pub _: [u8; 0xc], // 0xa68
        pub _: [u8; 0xc], // 0xa74
        pub _: [u8; 0x4], // 0xa80
        pub _: [u8; 0x4], // 0xa84
        pub _: [u8; 0x4], // 0xa88
        pub _: [u8; 0x4], // 0xa8c
        pub _: [u8; 0x4], // 0xa90
        pub _: [u8; 0x4], // 0xa94
        pub _: [u8; 0x18], // 0xa98
        pub _: [u8; 0x8], // 0xab0
        pub _: [u8; 0x18], // 0xab8
        pub _: [u8; 0x18], // 0xad0
        pub _: [u8; 0x18], // 0xae8
        pub _: [u8; 0x18], // 0xb00
        pub _: [u8; 0x18], // 0xb18
        pub _: [u8; 0x20], // 0xb30
    }

    #[repr(C)]
    pub struct CCSBot {
        pub pad_0: [u8; 0x108], // 0x0
        pub _: [u8; 0xc], // 0x108
        pub _: [u8; 0x40], // 0x114
        pub _: [u8; 0x4], // 0x154
        pub _: [u8; 0x8], // 0x158
        pub _: [u8; 0x1c], // 0x160
        pub _: [u8; 0x4], // 0x17c
        pub _: [u8; 0x4], // 0x180
        pub _: [u8; 0x8], // 0x184
        pub _: [u8; 0x4], // 0x18c
        pub _: [u8; 0x18], // 0x190
        pub _: [u8; 0x1], // 0x1a8
        pub _: [u8; 0x3], // 0x1a9
        pub _: [u8; 0x4], // 0x1ac
        pub _: [u8; 0x4], // 0x1b0
        pub _: [u8; 0x4], // 0x1b4
        pub _: [u8; 0x18], // 0x1b8
        pub _: [u8; 0x18], // 0x1d0
        pub _: [u8; 0x18], // 0x1e8
        pub _: [u8; 0x3c8], // 0x200
        pub _: [u8; 0x4], // 0x5c8
        pub _: [u8; 0x1], // 0x5cc
        pub _: [u8; 0x7], // 0x5cd
        pub _: [u8; 0x10], // 0x5d4
        pub _: [u8; 0xc], // 0x5e4
        pub _: [u8; 0x4], // 0x5f0
        pub _: [u8; 0x4], // 0x5f4
        pub _: [u8; 0x4], // 0x5f8
        pub _: [u8; 0x1], // 0x5fc
        pub _: [u8; 0x3], // 0x5fd
        pub _: [u8; 0x10], // 0x600
        pub _: [u8; 0x48f0], // 0x610
        pub _: [u8; 0x4], // 0x4f00
        pub _: [u8; 0x4], // 0x4f04
        pub _: [u8; 0x18], // 0x4f08
        pub _: [u8; 0x18], // 0x4f20
        pub _: [u8; 0x8], // 0x4f38
        pub _: [u8; 0x18], // 0x4f40
        pub _: [u8; 0x2c], // 0x4f58
        pub _: [u8; 0x4c], // 0x4f84
        pub _: [u8; 0x18], // 0x4fd0
        pub _: [u8; 0x18], // 0x4fe8
        pub _: [u8; 0x18], // 0x5000
        pub _: [u8; 0x100], // 0x5018
        pub _: [u8; 0x198], // 0x5118
        pub _: [u8; 0x4], // 0x52b0
        pub _: [u8; 0x4], // 0x52b4
        pub _: [u8; 0x4], // 0x52b8
        pub _: [u8; 0x1], // 0x52bc
        pub _: [u8; 0x3], // 0x52bd
        pub _: [u8; 0x18], // 0x52c0
        pub _: [u8; 0x18], // 0x52d8
        pub _: [u8; 0xc], // 0x52f0
        pub _: [u8; 0x4], // 0x52fc
        pub _: [u8; 0x8], // 0x5300
        pub _: [u8; 0x18], // 0x5308
        pub _: [u8; 0x18], // 0x5320
        pub _: [u8; 0xc], // 0x5338
        pub _: [u8; 0x4], // 0x5344
        pub _: [u8; 0x4], // 0x5348
        pub _: [u8; 0x4], // 0x534c
        pub _: [u8; 0x4], // 0x5350
        pub _: [u8; 0x4], // 0x5354
        pub _: [u8; 0x8], // 0x5358
        pub _: [u8; 0x10], // 0x5360
        pub _: [u8; 0x4], // 0x5370
        pub _: [u8; 0x4], // 0x5374
        pub _: [u8; 0x4], // 0x5378
        pub _: [u8; 0x1], // 0x537c
        pub _: [u8; 0x3], // 0x537d
        pub _: [u8; 0x8], // 0x5380
        pub _: [u8; 0x188], // 0x5388
        pub _: [u8; 0x4], // 0x5510
        pub _: [u8; 0xc], // 0x5514
        pub _: [u8; 0x18], // 0x5520
        pub _: [u8; 0x20], // 0x5538
        pub _: [u8; 0x20], // 0x5558
        pub _: [u8; 0x408], // 0x5578
        pub _: [u8; 0x4], // 0x5980
        pub _: [u8; 0x4], // 0x5984
        pub _: [u8; 0x4], // 0x5988
        pub _: [u8; 0x4], // 0x598c
        pub _: [u8; 0x4], // 0x5990
        pub _: [u8; 0xc], // 0x5994
        pub _: [u8; 0xc], // 0x59a0
        pub _: [u8; 0xc], // 0x59ac
        pub _: [u8; 0xc], // 0x59b8
        pub _: [u8; 0xc], // 0x59c4
        pub _: [u8; 0x4], // 0x59d0
        pub _: [u8; 0x4], // 0x59d4
        pub _: [u8; 0x4], // 0x59d8
        pub _: [u8; 0xc], // 0x59dc
        pub _: [u8; 0x18], // 0x59e8
        pub _: [u8; 0x4], // 0x5a00
        pub _: [u8; 0x1], // 0x5a04
        pub _: [u8; 0x3], // 0x5a05
        pub _: [u8; 0xc], // 0x5a08
        pub _: [u8; 0x4], // 0x5a14
        pub _: [u8; 0x4], // 0x5a18
        pub _: [u8; 0x4], // 0x5a1c
        pub _: [u8; 0x4], // 0x5a20
        pub _: [u8; 0x4], // 0x5a24
        pub _: [u8; 0x4], // 0x5a28
        pub _: [u8; 0x20c], // 0x5a2c
        pub _: [u8; 0x4], // 0x5c38
        pub _: [u8; 0x4], // 0x5c3c
        pub _: [u8; 0x4], // 0x5c40
        pub _: [u8; 0x4], // 0x5c44
        pub _: [u8; 0x10], // 0x5c48
        pub _: [u8; 0x4], // 0x5c58
        pub _: [u8; 0x4], // 0x5c5c
        pub _: [u8; 0x10], // 0x5c60
        pub _: [u8; 0x4], // 0x5c70
        pub _: [u8; 0x1], // 0x5c74
        pub _: [u8; 0x3], // 0x5c75
        pub _: [u8; 0x10], // 0x5c78
        pub _: [u8; 0x18], // 0x5c88
        pub _: [u8; 0x8], // 0x5ca0
        pub _: [u8; 0x18], // 0x5ca8
        pub _: [u8; 0x1], // 0x5cc0
        pub _: [u8; 0x7], // 0x5cc1
        pub _: [u8; 0xb8], // 0x5cc8
        pub _: [u8; 0x1], // 0x5d80
        pub _: [u8; 0x1], // 0x5d81
        pub _: [u8; 0x1], // 0x5d82
        pub _: [u8; 0x1], // 0x5d83
        pub _: [u8; 0x4], // 0x5d84
        pub _: [u8; 0x10], // 0x5d88
        pub _: [u8; 0x18], // 0x5d98
        pub _: [u8; 0x18], // 0x5db0
        pub _: [u8; 0x4], // 0x5dc8
        pub _: [u8; 0x28], // 0x5dcc
        pub _: [u8; 0x4], // 0x5df4
        pub _: [u8; 0x4], // 0x5df8
        pub _: [u8; 0x10], // 0x5dfc
        pub _: [u8; 0x4], // 0x5e0c
        pub _: [u8; 0x4], // 0x5e10
        pub _: [u8; 0x4], // 0x5e14
        pub _: [u8; 0xc], // 0x5e18
        pub _: [u8; 0xc], // 0x5e24
        pub _: [u8; 0x8], // 0x5e30
    }

    #[repr(C)]
    pub struct CHandleTest {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
    }

    #[repr(C)]
    pub struct CLogicNPCCounter {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x18], // 0x4a8
        pub _: [u8; 0x18], // 0x4c0
        pub _: [u8; 0x20], // 0x4d8
        pub _: [u8; 0x20], // 0x4f8
        pub _: [u8; 0x18], // 0x518
        pub _: [u8; 0x18], // 0x530
        pub _: [u8; 0x20], // 0x548
        pub _: [u8; 0x20], // 0x568
        pub _: [u8; 0x18], // 0x588
        pub _: [u8; 0x18], // 0x5a0
        pub _: [u8; 0x20], // 0x5b8
        pub _: [u8; 0x20], // 0x5d8
        pub _: [u8; 0x18], // 0x5f8
        pub _: [u8; 0x18], // 0x610
        pub _: [u8; 0x20], // 0x628
        pub _: [u8; 0x20], // 0x648
        pub _: [u8; 0x8], // 0x668
        pub _: [u8; 0x8], // 0x670
        pub _: [u8; 0x4], // 0x678
        pub _: [u8; 0x4], // 0x67c
        pub _: [u8; 0x4], // 0x680
        pub _: [u8; 0x4], // 0x684
        pub _: [u8; 0x4], // 0x688
        pub _: [u8; 0xc], // 0x68c
        pub _: [u8; 0x8], // 0x698
        pub _: [u8; 0x4], // 0x6a0
        pub _: [u8; 0x4], // 0x6a4
        pub _: [u8; 0x4], // 0x6a8
        pub _: [u8; 0x4], // 0x6ac
        pub _: [u8; 0x4], // 0x6b0
        pub _: [u8; 0x8], // 0x6b4
        pub _: [u8; 0x4], // 0x6bc
        pub _: [u8; 0x8], // 0x6c0
        pub _: [u8; 0x4], // 0x6c8
        pub _: [u8; 0x4], // 0x6cc
        pub _: [u8; 0x4], // 0x6d0
        pub _: [u8; 0x4], // 0x6d4
        pub _: [u8; 0x4], // 0x6d8
        pub _: [u8; 0x8], // 0x6dc
        pub _: [u8; 0x4], // 0x6e4
        pub _: [u8; 0x8], // 0x6e8
        pub _: [u8; 0x4], // 0x6f0
        pub _: [u8; 0x4], // 0x6f4
        pub _: [u8; 0x4], // 0x6f8
        pub _: [u8; 0x4], // 0x6fc
        pub _: [u8; 0x4], // 0x700
        pub _: [u8; 0x8], // 0x704
        pub _: [u8; 0x1c], // 0x70c
    }

    #[repr(C)]
    pub struct CCSPlayer_RadioServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0xc], // 0x54
        pub _: [u8; 0x8], // 0x60
    }

    #[repr(C)]
    pub struct CWeaponSG556 {
        pub pad_0: [u8; 0x12a0], // 0x0
    }

    #[repr(C)]
    pub struct CRagdollConstraint {
        pub pad_0: [u8; 0x508], // 0x0
        pub _: [u8; 0x4], // 0x508
        pub _: [u8; 0x4], // 0x50c
        pub _: [u8; 0x4], // 0x510
        pub _: [u8; 0x4], // 0x514
        pub _: [u8; 0x4], // 0x518
        pub _: [u8; 0x4], // 0x51c
        pub _: [u8; 0x4], // 0x520
        pub _: [u8; 0x4], // 0x524
        pub _: [u8; 0x8], // 0x528
    }

    #[repr(C)]
    pub struct CFuncVehicleClip {
        pub pad_0: [u8; 0x850], // 0x0
    }

    #[repr(C)]
    pub struct CDEagle {
        pub pad_0: [u8; 0x12a0], // 0x0
    }

    #[repr(C)]
    pub struct CWeaponFamas {
        pub pad_0: [u8; 0x12a0], // 0x0
    }

    #[repr(C)]
    pub struct CEnvSplash {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
    }

    #[repr(C)]
    pub struct CPointCameraVFOV {
        pub pad_0: [u8; 0x508], // 0x0
        pub _: [u8; 0x8], // 0x508
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
        pub pad_0: [u8; 0x8d0], // 0x0
        pub _: [u8; 0x4], // 0x8d0
        pub _: [u8; 0xc], // 0x8d4
        pub _: [u8; 0x10], // 0x8e0
        pub _: [u8; 0x8], // 0x8f0
        pub _: [u8; 0x8], // 0x8f8
        pub _: [u8; 0x8], // 0x900
        pub _: [u8; 0x4], // 0x908
        pub _: [u8; 0xc], // 0x90c
        pub _: [u8; 0x18], // 0x918
        pub _: [u8; 0x18], // 0x930
        pub _: [u8; 0x4], // 0x948
        pub _: [u8; 0x1], // 0x94c
        pub _: [u8; 0x1], // 0x94d
        pub _: [u8; 0xa], // 0x94e
    }

    #[repr(C)]
    pub struct CPrecipitationVData {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0xe0], // 0x28
        pub _: [u8; 0xe0], // 0x108
        pub _: [u8; 0xe0], // 0x1e8
        pub _: [u8; 0x4], // 0x2c8
        pub _: [u8; 0x4], // 0x2cc
        pub _: [u8; 0x4], // 0x2d0
        pub _: [u8; 0x4], // 0x2d4
        pub _: [u8; 0x8], // 0x2d8
        pub _: [u8; 0x8], // 0x2e0
        pub _: [u8; 0x4], // 0x2e8
        pub _: [u8; 0x4], // 0x2ec
    }

    #[repr(C)]
    pub struct CPulseCell_WaitForObservable {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x90], // 0xd8
        pub _: [u8; 0x48], // 0x168
    }

    #[repr(C)]
    pub struct CScriptItem {
        pub pad_0: [u8; 0xae0], // 0x0
        pub _: [u8; 0x10], // 0xae0
    }

    #[repr(C)]
    pub struct CDynamicPropAlias_prop_dynamic_override {
        pub pad_0: [u8; 0xc90], // 0x0
    }

    #[repr(C)]
    pub struct CBaseTrigger {
        pub pad_0: [u8; 0x8d0], // 0x0
        pub _: [u8; 0x18], // 0x8d0
        pub _: [u8; 0x18], // 0x8e8
        pub _: [u8; 0x18], // 0x900
        pub _: [u8; 0x18], // 0x918
        pub _: [u8; 0x18], // 0x930
        pub _: [u8; 0x18], // 0x948
        pub _: [u8; 0x18], // 0x960
        pub _: [u8; 0x18], // 0x978
        pub _: [u8; 0x18], // 0x990
        pub _: [u8; 0x8], // 0x9a8
        pub _: [u8; 0x4], // 0x9b0
        pub _: [u8; 0xc], // 0x9b4
        pub _: [u8; 0x8], // 0x9c0
    }

    #[repr(C)]
    pub struct CPointPush {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x4], // 0x4b4
        pub _: [u8; 0x8], // 0x4b8
        pub _: [u8; 0x8], // 0x4c0
        pub _: [u8; 0x8], // 0x4c8
    }

    #[repr(C)]
    pub struct CPulseCell_Step_EntFire {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x8], // 0x48
    }

    #[repr(C)]
    pub struct CCSObserver_ObserverServices {
        pub pad_0: [u8; 0x80], // 0x0
    }

    #[repr(C)]
    pub struct CPlayerPing {
        pub pad_0: [u8; 0x4b0], // 0x0
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x4], // 0x4b4
        pub _: [u8; 0x4], // 0x4b8
        pub _: [u8; 0x1], // 0x4bc
        pub _: [u8; 0x13], // 0x4bd
    }

    #[repr(C)]
    pub struct CHitboxComponent {
        pub pad_0: [u8; 0x14], // 0x0
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct CRopeKeyframe {
        pub pad_0: [u8; 0x858], // 0x0
        pub _: [u8; 0x8], // 0x858
        pub _: [u8; 0x8], // 0x860
        pub _: [u8; 0x4], // 0x868
        pub _: [u8; 0x4], // 0x86c
        pub _: [u8; 0x4], // 0x870
        pub _: [u8; 0x1], // 0x874
        pub _: [u8; 0x3], // 0x875
        pub _: [u8; 0x8], // 0x878
        pub _: [u8; 0x8], // 0x880
        pub _: [u8; 0x1], // 0x888
        pub _: [u8; 0x1], // 0x889
        pub _: [u8; 0x2], // 0x88a
        pub _: [u8; 0x1], // 0x88c
        pub _: [u8; 0x3], // 0x88d
        pub _: [u8; 0x4], // 0x890
        pub _: [u8; 0x1], // 0x894
        pub _: [u8; 0x3], // 0x895
        pub _: [u8; 0x4], // 0x898
        pub _: [u8; 0x4], // 0x89c
        pub _: [u8; 0x1], // 0x8a0
        pub _: [u8; 0x7], // 0x8a1
    }

    #[repr(C)]
    pub struct CSmokeGrenade {
        pub pad_0: [u8; 0x12d0], // 0x0
    }

    #[repr(C)]
    pub struct CBaseCombatCharacter {
        pub pad_0: [u8; 0xa40], // 0x0
        pub _: [u8; 0x8], // 0xa40
        pub _: [u8; 0x18], // 0xa48
        pub _: [u8; 0x4], // 0xa60
        pub _: [u8; 0x1], // 0xa64
        pub _: [u8; 0x43], // 0xa65
        pub _: [u8; 0x18], // 0xaa8
        pub _: [u8; 0x8], // 0xac0
        pub _: [u8; 0x4], // 0xac8
        pub _: [u8; 0x4], // 0xacc
        pub _: [u8; 0x40], // 0xad0
    }

    #[repr(C)]
    pub struct CLogicGameStateReport {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0xc8], // 0x4a8
    }

    #[repr(C)]
    pub struct ServerAuthoritativeWeaponSlot_t {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x2], // 0x30
        pub _: [u8; 0x2], // 0x32
        pub _: [u8; 0x4], // 0x34
    }

    #[repr(C)]
    pub struct CPathQueryComponent {
        pub pad_0: [u8; 0xa0], // 0x0
    }

    #[repr(C)]
    pub struct CLogicRelay {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x18], // 0x4a8
        pub _: [u8; 0x18], // 0x4c0
        pub _: [u8; 0x1], // 0x4d8
        pub _: [u8; 0x1], // 0x4d9
        pub _: [u8; 0x1], // 0x4da
        pub _: [u8; 0x1], // 0x4db
        pub _: [u8; 0x4], // 0x4dc
    }

    #[repr(C)]
    pub struct SequenceHistory_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct CPlayer_ItemServices {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct CPulse_OutflowConnection {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x30], // 0x18
    }

    #[repr(C)]
    pub struct CTestPulseIO {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x18], // 0x4a8
        pub _: [u8; 0x20], // 0x4c0
        pub _: [u8; 0x20], // 0x4e0
        pub _: [u8; 0x20], // 0x500
        pub _: [u8; 0x20], // 0x520
        pub _: [u8; 0x20], // 0x540
        pub _: [u8; 0x28], // 0x560
        pub _: [u8; 0x8], // 0x588
        pub _: [u8; 0x30], // 0x590
        pub _: [u8; 0x18], // 0x5c0
        pub _: [u8; 0x20], // 0x5d8
        pub _: [u8; 0x20], // 0x5f8
        pub _: [u8; 0x20], // 0x618
        pub _: [u8; 0x20], // 0x638
        pub _: [u8; 0x20], // 0x658
        pub _: [u8; 0x28], // 0x678
        pub _: [u8; 0x20], // 0x6a0
        pub _: [u8; 0x20], // 0x6c0
        pub _: [u8; 0x20], // 0x6e0
        pub _: [u8; 0x28], // 0x700
        pub _: [u8; 0x28], // 0x728
        pub _: [u8; 0x20], // 0x750
        pub _: [u8; 0x30], // 0x770
    }

    #[repr(C)]
    pub struct CWeaponUMP45 {
        pub pad_0: [u8; 0x12a0], // 0x0
    }

    #[repr(C)]
    pub struct CGamePlayerEquip {
        pub pad_0: [u8; 0x878], // 0x0
    }

    #[repr(C)]
    pub struct CPointEntityFinder {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x8], // 0x4b8
        pub _: [u8; 0x8], // 0x4c0
        pub _: [u8; 0x4], // 0x4c8
        pub _: [u8; 0x4], // 0x4cc
        pub _: [u8; 0x18], // 0x4d0
    }

    #[repr(C)]
    pub struct CPulseGraphDef {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x10], // 0x8
        pub _: [u8; 0x18], // 0x18
        pub _: [u8; 0x10], // 0x30
        pub _: [u8; 0x10], // 0x40
        pub _: [u8; 0x18], // 0x50
        pub _: [u8; 0x18], // 0x68
        pub _: [u8; 0x18], // 0x80
        pub _: [u8; 0x18], // 0x98
        pub _: [u8; 0x18], // 0xb0
        pub _: [u8; 0x18], // 0xc8
        pub _: [u8; 0x18], // 0xe0
        pub _: [u8; 0x18], // 0xf8
        pub _: [u8; 0x18], // 0x110
        pub _: [u8; 0x18], // 0x128
        pub _: [u8; 0x80], // 0x140
    }

    #[repr(C)]
    pub struct CKnife {
        pub pad_0: [u8; 0x1280], // 0x0
        pub _: [u8; 0x10], // 0x1280
    }

    #[repr(C)]
    pub struct CCSGO_TeamIntroCharacterPosition {
        pub pad_0: [u8; 0x1468], // 0x0
    }

    #[repr(C)]
    pub struct CHostageRescueZoneShim {
        pub pad_0: [u8; 0x9c8], // 0x0
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
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
    }

    #[repr(C)]
    pub struct CRenderComponent {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x40], // 0x10
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
        pub _: [u8; 0x50], // 0x58
        pub _: [u8; 0x8], // 0xa8
    }

    #[repr(C)]
    pub struct CWaterBullet {
        pub pad_0: [u8; 0xa40], // 0x0
    }

    #[repr(C)]
    pub struct CTriggerSoundscape {
        pub pad_0: [u8; 0x9c8], // 0x0
        pub _: [u8; 0x8], // 0x9c8
        pub _: [u8; 0x8], // 0x9d0
        pub _: [u8; 0x18], // 0x9d8
    }

    #[repr(C)]
    pub struct CPulseCell_Outflow_PlayVOLine__CursorState_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CHostageExpresserShim {
        pub pad_0: [u8; 0xb10], // 0x0
        pub _: [u8; 0x10], // 0xb10
    }

    #[repr(C)]
    pub struct CPointChildModifier {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
    }

    #[repr(C)]
    pub struct CCSPlayerLegacyJump {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct CWeaponHKP2000 {
        pub pad_0: [u8; 0x12a0], // 0x0
    }

    #[repr(C)]
    pub struct CShatterGlassShardPhysics {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x8], // 0x850
        pub _: [u8; 0x80], // 0x858
        pub _: [u8; 0x4], // 0x8d8
        pub _: [u8; 0x4], // 0x8dc
    }

    #[repr(C)]
    pub struct CPathParticleRope {
        pub pad_0: [u8; 0x4b0], // 0x0
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x4], // 0x4b4
        pub _: [u8; 0x8], // 0x4b8
        pub _: [u8; 0x18], // 0x4c0
        pub _: [u8; 0x4], // 0x4d8
        pub _: [u8; 0x4], // 0x4dc
        pub _: [u8; 0x4], // 0x4e0
        pub _: [u8; 0x4], // 0x4e4
        pub _: [u8; 0x8], // 0x4e8
        pub _: [u8; 0x8], // 0x4f0
        pub _: [u8; 0x18], // 0x4f8
        pub _: [u8; 0x18], // 0x510
        pub _: [u8; 0x18], // 0x528
        pub _: [u8; 0x18], // 0x540
        pub _: [u8; 0x18], // 0x558
        pub _: [u8; 0x20], // 0x570
    }

    #[repr(C)]
    pub struct CCredits {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x18], // 0x4a8
        pub _: [u8; 0x4], // 0x4c0
        pub _: [u8; 0x4], // 0x4c4
    }

    #[repr(C)]
    pub struct CWeaponFiveSeven {
        pub pad_0: [u8; 0x12a0], // 0x0
    }

    #[repr(C)]
    pub struct CFishPool {
        pub pad_0: [u8; 0x4b8], // 0x0
        pub _: [u8; 0x4], // 0x4b8
        pub _: [u8; 0x4], // 0x4bc
        pub _: [u8; 0x4], // 0x4c0
        pub _: [u8; 0x4], // 0x4c4
        pub _: [u8; 0x8], // 0x4c8
        pub _: [u8; 0x18], // 0x4d0
        pub _: [u8; 0x18], // 0x4e8
    }

    #[repr(C)]
    pub struct CPlayer_MovementServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x20], // 0x50
        pub _: [u8; 0x8], // 0x70
        pub _: [u8; 0x8], // 0x78
        pub _: [u8; 0x8], // 0x80
        pub _: [u8; 0x100], // 0x88
        pub _: [u8; 0x8], // 0x188
        pub _: [u8; 0x10], // 0x190
        pub _: [u8; 0x4], // 0x1a0
        pub _: [u8; 0x4], // 0x1a4
        pub _: [u8; 0x4], // 0x1a8
        pub _: [u8; 0x4], // 0x1ac
        pub _: [u8; 0x10], // 0x1b0
        pub _: [u8; 0x4], // 0x1c0
        pub _: [u8; 0x4], // 0x1c4
        pub _: [u8; 0x4], // 0x1c8
        pub _: [u8; 0x74], // 0x1cc
        pub _: [u8; 0x18], // 0x240
    }

    #[repr(C)]
    pub struct CRagdollPropAlias_physics_prop_ragdoll {
        pub pad_0: [u8; 0xc00], // 0x0
    }

    #[repr(C)]
    pub struct CBreakableProp {
        pub pad_0: [u8; 0xa78], // 0x0
        pub _: [u8; 0x40], // 0xa78
        pub _: [u8; 0x18], // 0xab8
        pub _: [u8; 0x18], // 0xad0
        pub _: [u8; 0x20], // 0xae8
        pub _: [u8; 0x18], // 0xb08
        pub _: [u8; 0x4], // 0xb20
        pub _: [u8; 0x4], // 0xb24
        pub _: [u8; 0xc], // 0xb28
        pub _: [u8; 0x4], // 0xb34
        pub _: [u8; 0x4], // 0xb38
        pub _: [u8; 0xc], // 0xb3c
        pub _: [u8; 0x4], // 0xb48
        pub _: [u8; 0x4], // 0xb4c
        pub _: [u8; 0x4], // 0xb50
        pub _: [u8; 0x4], // 0xb54
        pub _: [u8; 0x8], // 0xb58
        pub _: [u8; 0x8], // 0xb60
        pub _: [u8; 0x4], // 0xb68
        pub _: [u8; 0x4], // 0xb6c
        pub _: [u8; 0x8], // 0xb70
        pub _: [u8; 0x8], // 0xb78
        pub _: [u8; 0x8], // 0xb80
        pub _: [u8; 0x8], // 0xb88
        pub _: [u8; 0x8], // 0xb90
        pub _: [u8; 0x8], // 0xb98
        pub _: [u8; 0x8], // 0xba0
        pub _: [u8; 0x4], // 0xba8
        pub _: [u8; 0x4], // 0xbac
        pub _: [u8; 0x4], // 0xbb0
        pub _: [u8; 0x4], // 0xbb4
        pub _: [u8; 0x8], // 0xbb8
        pub _: [u8; 0x1], // 0xbc0
        pub _: [u8; 0xf], // 0xbc1
    }

    #[repr(C)]
    pub struct CLightEntity {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x8], // 0x850
    }

    #[repr(C)]
    pub struct CInfoDynamicShadowHintBox {
        pub pad_0: [u8; 0x4c0], // 0x0
        pub _: [u8; 0xc], // 0x4c0
        pub _: [u8; 0xc], // 0x4cc
    }

    #[repr(C)]
    pub struct CBaseAnimGraphController {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x18], // 0x20
        pub _: [u8; 0x18], // 0x38
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
        pub _: [u8; 0x4], // 0x58
        pub _: [u8; 0x4], // 0x5c
        pub _: [u8; 0x4], // 0x60
        pub _: [u8; 0x4], // 0x64
        pub _: [u8; 0x4], // 0x68
        pub _: [u8; 0xc], // 0x6c
        pub _: [u8; 0x1], // 0x78
        pub _: [u8; 0x1], // 0x79
        pub _: [u8; 0x1], // 0x7a
        pub _: [u8; 0x1], // 0x7b
        pub _: [u8; 0x4], // 0x7c
        pub _: [u8; 0x2a0], // 0x80
        pub _: [u8; 0x8], // 0x320
        pub _: [u8; 0x68], // 0x328
        pub _: [u8; 0x18], // 0x390
        pub _: [u8; 0x4], // 0x3a8
        pub _: [u8; 0x14], // 0x3ac
        pub _: [u8; 0x4], // 0x3c0
        pub _: [u8; 0x4], // 0x3c4
        pub _: [u8; 0x8], // 0x3c8
        pub _: [u8; 0x18], // 0x3d0
        pub _: [u8; 0x18], // 0x3e8
        pub _: [u8; 0x8], // 0x400
        pub _: [u8; 0x220], // 0x408
        pub _: [u8; 0x28], // 0x628
    }

    #[repr(C)]
    pub struct AnimGraph2SerializedPoseRecipeSlot_t {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x10], // 0x30
    }

    #[repr(C)]
    pub struct CBuoyancyHelper {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x10], // 0x8
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x18], // 0x30
        pub _: [u8; 0x18], // 0x48
        pub _: [u8; 0x18], // 0x60
        pub _: [u8; 0xa0], // 0x78
    }

    #[repr(C)]
    pub struct COrnamentProp {
        pub pad_0: [u8; 0xc90], // 0x0
        pub _: [u8; 0x10], // 0xc90
    }

    #[repr(C)]
    pub struct CCSPlayer_CameraServices {
        pub pad_0: [u8; 0x1b0], // 0x0
    }

    #[repr(C)]
    pub struct CModelPointEntity {
        pub pad_0: [u8; 0x850], // 0x0
    }

    #[repr(C)]
    pub struct CRectLight {
        pub pad_0: [u8; 0xb38], // 0x0
        pub _: [u8; 0x8], // 0xb38
    }

    #[repr(C)]
    pub struct CFilterMultiple {
        pub pad_0: [u8; 0x4e0], // 0x0
        pub _: [u8; 0x8], // 0x4e0
        pub _: [u8; 0x50], // 0x4e8
        pub _: [u8; 0x28], // 0x538
    }

    #[repr(C)]
    pub struct CCSPlayerResource {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0xc], // 0x4a8
        pub _: [u8; 0xc], // 0x4b4
        pub _: [u8; 0x30], // 0x4c0
        pub _: [u8; 0xc], // 0x4f0
        pub _: [u8; 0xc], // 0x4fc
        pub _: [u8; 0x10], // 0x508
        pub _: [u8; 0x10], // 0x518
        pub _: [u8; 0x10], // 0x528
        pub _: [u8; 0x1], // 0x538
        pub _: [u8; 0x7], // 0x539
    }

    #[repr(C)]
    pub struct CPulseCell_FireCursors {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x18], // 0xd8
        pub _: [u8; 0x8], // 0xf0
        pub _: [u8; 0x48], // 0xf8
    }

    #[repr(C)]
    pub struct CFuncNavBlocker {
        pub pad_0: [u8; 0x858], // 0x0
        pub _: [u8; 0x4], // 0x858
        pub _: [u8; 0xc], // 0x85c
    }

    #[repr(C)]
    pub struct CMoverPathNode {
        pub pad_0: [u8; 0x500], // 0x0
        pub _: [u8; 0x20], // 0x500
        pub _: [u8; 0x20], // 0x520
        pub _: [u8; 0x20], // 0x540
        pub _: [u8; 0x20], // 0x560
        pub _: [u8; 0x20], // 0x580
    }

    #[repr(C)]
    pub struct CEnvSoundscape {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x18], // 0x4a8
        pub _: [u8; 0x8], // 0x4c0
        pub _: [u8; 0x8], // 0x4c8
        pub _: [u8; 0x4], // 0x4d0
        pub _: [u8; 0x4], // 0x4d4
        pub _: [u8; 0x8], // 0x4d8
        pub _: [u8; 0x40], // 0x4e0
        pub _: [u8; 0x4], // 0x520
        pub _: [u8; 0x4], // 0x524
        pub _: [u8; 0x8], // 0x528
        pub _: [u8; 0x8], // 0x530
    }

    #[repr(C)]
    pub struct CFuncBrush {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x4], // 0x850
        pub _: [u8; 0x4], // 0x854
        pub _: [u8; 0x8], // 0x858
        pub _: [u8; 0x8], // 0x860
        pub _: [u8; 0x1], // 0x868
        pub _: [u8; 0x7], // 0x869
    }

    #[repr(C)]
    pub struct CBodyComponentPoint {
        pub pad_0: [u8; 0x80], // 0x0
        pub _: [u8; 0x110], // 0x80
    }

    #[repr(C)]
    pub struct CPhysBox {
        pub pad_0: [u8; 0x928], // 0x0
        pub _: [u8; 0x4], // 0x928
        pub _: [u8; 0x4], // 0x92c
        pub _: [u8; 0x4], // 0x930
        pub _: [u8; 0xc], // 0x934
        pub _: [u8; 0xc], // 0x940
        pub _: [u8; 0x1], // 0x94c
        pub _: [u8; 0x1], // 0x94d
        pub _: [u8; 0x2], // 0x94e
        pub _: [u8; 0x8], // 0x950
        pub _: [u8; 0x8], // 0x958
        pub _: [u8; 0x8], // 0x960
        pub _: [u8; 0x8], // 0x968
        pub _: [u8; 0x8], // 0x970
        pub _: [u8; 0x18], // 0x978
        pub _: [u8; 0x18], // 0x990
        pub _: [u8; 0x18], // 0x9a8
        pub _: [u8; 0x18], // 0x9c0
        pub _: [u8; 0x30], // 0x9d8
    }

    #[repr(C)]
    pub struct CSoundEventAABBEntity {
        pub pad_0: [u8; 0x568], // 0x0
        pub _: [u8; 0xc], // 0x568
        pub _: [u8; 0xc], // 0x574
    }

    #[repr(C)]
    pub struct CItemSoda {
        pub pad_0: [u8; 0xa40], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_ApplyDynamicAttributeBase {
        pub pad_0: [u8; 0xd8], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_Timeline__TimelineEvent_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x48], // 0x8
    }

    #[repr(C)]
    pub struct COmniLight {
        pub pad_0: [u8; 0xb38], // 0x0
        pub _: [u8; 0x4], // 0xb38
        pub _: [u8; 0x4], // 0xb3c
        pub _: [u8; 0x8], // 0xb40
    }

    #[repr(C)]
    pub struct CTriggerVolume {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x8], // 0x850
        pub _: [u8; 0x8], // 0x858
    }

    #[repr(C)]
    pub struct CBtNodeCondition {
        pub pad_0: [u8; 0x58], // 0x0
        pub _: [u8; 0x8], // 0x58
    }

    #[repr(C)]
    pub struct CPulseCell_IntervalTimer__CursorState_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
    }

    #[repr(C)]
    pub struct CPulseCell_BaseRequirement {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct CEnvExplosion {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x4], // 0x850
        pub _: [u8; 0x4], // 0x854
        pub _: [u8; 0x4], // 0x858
        pub _: [u8; 0x4], // 0x85c
        pub _: [u8; 0x4], // 0x860
        pub _: [u8; 0x4], // 0x864
        pub _: [u8; 0x4], // 0x868
        pub _: [u8; 0x1], // 0x86c
        pub _: [u8; 0xb], // 0x86d
        pub _: [u8; 0x8], // 0x878
        pub _: [u8; 0x8], // 0x880
        pub _: [u8; 0x4], // 0x888
        pub _: [u8; 0x4], // 0x88c
        pub _: [u8; 0x8], // 0x890
        pub _: [u8; 0x8], // 0x898
        pub _: [u8; 0x8], // 0x8a0
    }

    #[repr(C)]
    pub struct CPulseCell_BaseState {
        pub pad_0: [u8; 0xd8], // 0x0
    }

    #[repr(C)]
    pub struct OutflowWithRequirements_t {
        pub _: [u8; 0x48], // 0x0
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x18], // 0x50
        pub _: [u8; 0x18], // 0x68
    }

    #[repr(C)]
    pub struct CTestPulseIO__ThreeStringArgs_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CPulseCell_IsRequirementValid {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct CFootstepControl {
        pub pad_0: [u8; 0x9c8], // 0x0
        pub _: [u8; 0x8], // 0x9c8
        pub _: [u8; 0x8], // 0x9d0
    }

    #[repr(C)]
    pub struct CCSPlayer_ItemServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x1], // 0x48
        pub _: [u8; 0x7], // 0x49
    }

    #[repr(C)]
    pub struct CPulseCell_Value_Gradient {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x18], // 0x48
    }

    #[repr(C)]
    pub struct CParticleSystem {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x200], // 0x850
        pub _: [u8; 0x1], // 0xa50
        pub _: [u8; 0x3], // 0xa51
        pub _: [u8; 0x4], // 0xa54
        pub _: [u8; 0x4], // 0xa58
        pub _: [u8; 0x4], // 0xa5c
        pub _: [u8; 0x8], // 0xa60
        pub _: [u8; 0x4], // 0xa68
        pub _: [u8; 0x4], // 0xa6c
        pub _: [u8; 0x30], // 0xa70
        pub _: [u8; 0x4], // 0xaa0
        pub _: [u8; 0x100], // 0xaa4
        pub _: [u8; 0x4], // 0xba4
        pub _: [u8; 0x8], // 0xba8
        pub _: [u8; 0x1], // 0xbb0
        pub _: [u8; 0x1], // 0xbb1
        pub _: [u8; 0x1], // 0xbb2
        pub _: [u8; 0x5], // 0xbb3
        pub _: [u8; 0x8], // 0xbb8
        pub _: [u8; 0x200], // 0xbc0
        pub _: [u8; 0x4], // 0xdc0
        pub _: [u8; 0xc], // 0xdc4
        pub _: [u8; 0x4], // 0xdd0
        pub _: [u8; 0x4], // 0xdd4
    }

    #[repr(C)]
    pub struct CTriggerBrush {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x18], // 0x850
        pub _: [u8; 0x18], // 0x868
        pub _: [u8; 0x18], // 0x880
        pub _: [u8; 0x4], // 0x898
        pub _: [u8; 0x4], // 0x89c
    }

    #[repr(C)]
    pub struct IntervalTimer {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
    }

    #[repr(C)]
    pub struct audioparams_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x60], // 0x8
        pub _: [u8; 0x4], // 0x68
        pub _: [u8; 0x4], // 0x6c
        pub _: [u8; 0x4], // 0x70
        pub _: [u8; 0x4], // 0x74
    }

    #[repr(C)]
    pub struct CSoundEventMultiPointEntity {
        pub pad_0: [u8; 0x568], // 0x0
        pub _: [u8; 0x4], // 0x568
        pub _: [u8; 0x4], // 0x56c
        pub _: [u8; 0x4], // 0x570
        pub _: [u8; 0x4], // 0x574
        pub _: [u8; 0x28], // 0x578
    }

    #[repr(C)]
    pub struct CSoundAreaEntityBase {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x10], // 0x4b8
    }

    #[repr(C)]
    pub struct CWeaponM4A1Silencer {
        pub pad_0: [u8; 0x12a0], // 0x0
    }

    #[repr(C)]
    pub struct CTimeline {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x100], // 0x10
        pub _: [u8; 0x100], // 0x110
        pub _: [u8; 0x4], // 0x210
        pub _: [u8; 0x4], // 0x214
        pub _: [u8; 0x4], // 0x218
        pub _: [u8; 0x4], // 0x21c
        pub _: [u8; 0x8], // 0x220
    }

    #[repr(C)]
    pub struct CTestPulseIO__FloatStringArgs_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct CountdownTimer {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct CNoiseStreamData {
        pub _: [u8; 0x50], // 0x0
    }

    #[repr(C)]
    pub struct PulseNodeDynamicOutflows_t__DynamicOutflow_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x48], // 0x8
    }

    #[repr(C)]
    pub struct CItemAssaultSuit {
        pub pad_0: [u8; 0xae0], // 0x0
    }

    #[repr(C)]
    pub struct CBeam {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x4], // 0x850
        pub _: [u8; 0x4], // 0x854
        pub _: [u8; 0x4], // 0x858
        pub _: [u8; 0x4], // 0x85c
        pub _: [u8; 0x8], // 0x860
        pub _: [u8; 0x8], // 0x868
        pub _: [u8; 0x8], // 0x870
        pub _: [u8; 0x4], // 0x878
        pub _: [u8; 0x4], // 0x87c
        pub _: [u8; 0x28], // 0x880
        pub _: [u8; 0xc], // 0x8a8
        pub _: [u8; 0x4], // 0x8b4
        pub _: [u8; 0x4], // 0x8b8
        pub _: [u8; 0x4], // 0x8bc
        pub _: [u8; 0x4], // 0x8c0
        pub _: [u8; 0x4], // 0x8c4
        pub _: [u8; 0x4], // 0x8c8
        pub _: [u8; 0x4], // 0x8cc
        pub _: [u8; 0x4], // 0x8d0
        pub _: [u8; 0x4], // 0x8d4
        pub _: [u8; 0xc], // 0x8d8
        pub _: [u8; 0x4], // 0x8e4
        pub _: [u8; 0x8], // 0x8e8
    }

    #[repr(C)]
    pub struct CLogicEventListener {
        pub pad_0: [u8; 0x4b8], // 0x0
        pub _: [u8; 0x8], // 0x4b8
        pub _: [u8; 0x4], // 0x4c0
        pub _: [u8; 0x4], // 0x4c4
        pub _: [u8; 0x20], // 0x4c8
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
        pub pad_0: [u8; 0x12a0], // 0x0
    }

    #[repr(C)]
    pub struct CWeaponElite {
        pub pad_0: [u8; 0x12a0], // 0x0
    }

    #[repr(C)]
    pub struct CBasePlayerPawn {
        pub pad_0: [u8; 0xb10], // 0x0
        pub _: [u8; 0x8], // 0xb10
        pub _: [u8; 0x8], // 0xb18
        pub _: [u8; 0x8], // 0xb20
        pub _: [u8; 0x8], // 0xb28
        pub _: [u8; 0x8], // 0xb30
        pub _: [u8; 0x8], // 0xb38
        pub _: [u8; 0x8], // 0xb40
        pub _: [u8; 0x8], // 0xb48
        pub _: [u8; 0x10], // 0xb50
        pub _: [u8; 0x68], // 0xb60
        pub _: [u8; 0xc], // 0xbc8
        pub _: [u8; 0xc], // 0xbd4
        pub _: [u8; 0x8], // 0xbe0
        pub _: [u8; 0x90], // 0xbe8
        pub _: [u8; 0x4], // 0xc78
        pub _: [u8; 0x4], // 0xc7c
        pub _: [u8; 0x8], // 0xc80
        pub _: [u8; 0x8], // 0xc88
        pub _: [u8; 0x8], // 0xc90
        pub _: [u8; 0x4], // 0xc98
        pub _: [u8; 0x8], // 0xc9c
        pub _: [u8; 0x4], // 0xca4
        pub _: [u8; 0x4], // 0xca8
        pub _: [u8; 0x4], // 0xcac
        pub _: [u8; 0x20], // 0xcb0
    }

    #[repr(C)]
    pub struct WeaponPurchaseCount_t {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x2], // 0x30
        pub _: [u8; 0x6], // 0x32
    }

    #[repr(C)]
    pub struct CBasePulseGraphInstance {
        pub pad_0: [u8; 0x88], // 0x0
    }

    #[repr(C)]
    pub struct FilterHealth {
        pub pad_0: [u8; 0x4e0], // 0x0
        pub _: [u8; 0x4], // 0x4e0
        pub _: [u8; 0x4], // 0x4e4
        pub _: [u8; 0x8], // 0x4e8
    }

    #[repr(C)]
    pub struct CCSSprite {
        pub pad_0: [u8; 0x8c0], // 0x0
    }

    #[repr(C)]
    pub struct CMathColorBlend {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x4], // 0x4b4
        pub _: [u8; 0x20], // 0x4b8
    }

    #[repr(C)]
    pub struct CShower {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x8], // 0x850
    }

    #[repr(C)]
    pub struct CPulseCell_Inflow_GraphHook {
        pub pad_0: [u8; 0x80], // 0x0
        pub _: [u8; 0x10], // 0x80
    }

    #[repr(C)]
    pub struct CScriptNavBlocker {
        pub pad_0: [u8; 0x868], // 0x0
        pub _: [u8; 0x10], // 0x868
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
        pub _: [u8; 0x18], // 0x640
        pub _: [u8; 0x18], // 0x658
        pub _: [u8; 0x18], // 0x670
        pub _: [u8; 0x8], // 0x688
        pub _: [u8; 0x18], // 0x690
        pub _: [u8; 0x18], // 0x6a8
        pub _: [u8; 0x18], // 0x6c0
        pub _: [u8; 0x18], // 0x6d8
        pub _: [u8; 0x4], // 0x6f0
        pub _: [u8; 0x4], // 0x6f4
        pub _: [u8; 0xc], // 0x6f8
        pub _: [u8; 0xc], // 0x704
        pub _: [u8; 0x4], // 0x710
        pub _: [u8; 0xc], // 0x714
        pub _: [u8; 0x4], // 0x720
        pub _: [u8; 0x4], // 0x724
        pub _: [u8; 0x4], // 0x728
        pub _: [u8; 0x4], // 0x72c
        pub _: [u8; 0x4], // 0x730
        pub _: [u8; 0x4], // 0x734
        pub _: [u8; 0x4], // 0x738
        pub _: [u8; 0x4], // 0x73c
        pub _: [u8; 0x1], // 0x740
        pub _: [u8; 0x3], // 0x741
        pub _: [u8; 0x4], // 0x744
        pub _: [u8; 0x4], // 0x748
        pub _: [u8; 0x4], // 0x74c
        pub _: [u8; 0x4], // 0x750
        pub _: [u8; 0x4], // 0x754
        pub _: [u8; 0x4], // 0x758
        pub _: [u8; 0x4], // 0x75c
    }

    #[repr(C)]
    pub struct CPulseCell_Outflow_PlayVCDBase {
        pub pad_0: [u8; 0x138], // 0x0
    }

    #[repr(C)]
    pub struct CCSObserverPawn {
        pub pad_0: [u8; 0xe50], // 0x0
    }

    #[repr(C)]
    pub struct CTriggerActiveWeaponDetect {
        pub pad_0: [u8; 0x9c8], // 0x0
        pub _: [u8; 0x18], // 0x9c8
        pub _: [u8; 0x8], // 0x9e0
    }

    #[repr(C)]
    pub struct CFuncLadderAlias_func_useableladder {
        pub pad_0: [u8; 0x8e0], // 0x0
    }

    #[repr(C)]
    pub struct CSpriteOriented {
        pub pad_0: [u8; 0x8c0], // 0x0
    }

    #[repr(C)]
    pub struct CPointServerCommand {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct shard_model_desc_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x8], // 0x24
        pub _: [u8; 0x8], // 0x2c
        pub _: [u8; 0xc], // 0x34
        pub _: [u8; 0x18], // 0x40
        pub _: [u8; 0x18], // 0x58
        pub _: [u8; 0x4], // 0x70
        pub _: [u8; 0x1], // 0x74
        pub _: [u8; 0x3], // 0x75
        pub _: [u8; 0x8], // 0x78
    }

    #[repr(C)]
    pub struct CPlayerSprayDecal {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x4], // 0x850
        pub _: [u8; 0x4], // 0x854
        pub _: [u8; 0x4], // 0x858
        pub _: [u8; 0x4], // 0x85c
        pub _: [u8; 0xc], // 0x860
        pub _: [u8; 0xc], // 0x86c
        pub _: [u8; 0xc], // 0x878
        pub _: [u8; 0xc], // 0x884
        pub _: [u8; 0x4], // 0x890
        pub _: [u8; 0x4], // 0x894
        pub _: [u8; 0x4], // 0x898
        pub _: [u8; 0x4], // 0x89c
        pub _: [u8; 0x4], // 0x8a0
        pub _: [u8; 0x1], // 0x8a4
        pub _: [u8; 0x83], // 0x8a5
    }

    #[repr(C)]
    pub struct CFuncWater {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x118], // 0x850
    }

    #[repr(C)]
    pub struct CCSGameModeRules {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x28], // 0x8
    }

    #[repr(C)]
    pub struct CPulseCell_Outflow_PlayVCD__VCDRequirementInfo_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x48], // 0x8
    }

    #[repr(C)]
    pub struct CPulseCell_ApplyDynamicAttributeInt {
        pub pad_0: [u8; 0xd8], // 0x0
    }

    #[repr(C)]
    pub struct CEconEntity {
        pub pad_0: [u8; 0xa58], // 0x0
        pub _: [u8; 0x438], // 0xa58
        pub _: [u8; 0x4], // 0xe90
        pub _: [u8; 0x4], // 0xe94
        pub _: [u8; 0x4], // 0xe98
        pub _: [u8; 0x4], // 0xe9c
        pub _: [u8; 0x4], // 0xea0
        pub _: [u8; 0x4], // 0xea4
        pub _: [u8; 0x4], // 0xea8
        pub _: [u8; 0x4], // 0xeac
    }

    #[repr(C)]
    pub struct CTankTargetChange {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x10], // 0x4a8
        pub _: [u8; 0x8], // 0x4b8
    }

    #[repr(C)]
    pub struct CCSPlayer_WaterServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
        pub _: [u8; 0xc], // 0x58
        pub _: [u8; 0x1c], // 0x64
    }

    #[repr(C)]
    pub struct CLogicDistanceCheck {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x4], // 0x4b8
        pub _: [u8; 0x4], // 0x4bc
        pub _: [u8; 0x18], // 0x4c0
        pub _: [u8; 0x18], // 0x4d8
        pub _: [u8; 0x18], // 0x4f0
    }

    #[repr(C)]
    pub struct CEnvCombinedLightProbeVolume {
        pub pad_0: [u8; 0x5c0], // 0x0
        pub _: [u8; 0x4], // 0x5c0
        pub _: [u8; 0x4], // 0x5c4
        pub _: [u8; 0x8], // 0x5c8
        pub _: [u8; 0x8], // 0x5d0
        pub _: [u8; 0x8], // 0x5d8
        pub _: [u8; 0x8], // 0x5e0
        pub _: [u8; 0x8], // 0x5e8
        pub _: [u8; 0x8], // 0x5f0
        pub _: [u8; 0x8], // 0x5f8
        pub _: [u8; 0x8], // 0x600
        pub _: [u8; 0x8], // 0x608
        pub _: [u8; 0xc], // 0x610
        pub _: [u8; 0xc], // 0x61c
        pub _: [u8; 0x4], // 0x628
        pub _: [u8; 0x4], // 0x62c
        pub _: [u8; 0x4], // 0x630
        pub _: [u8; 0x4], // 0x634
        pub _: [u8; 0x4], // 0x638
        pub _: [u8; 0x4], // 0x63c
        pub _: [u8; 0xc], // 0x640
        pub _: [u8; 0x4], // 0x64c
        pub _: [u8; 0x4], // 0x650
        pub _: [u8; 0x4], // 0x654
        pub _: [u8; 0x4], // 0x658
        pub _: [u8; 0x4], // 0x65c
        pub _: [u8; 0x19], // 0x660
        pub _: [u8; 0x7], // 0x679
    }

    #[repr(C)]
    pub struct ViewAngleServerChange_t {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0xc], // 0x34
        pub _: [u8; 0x8], // 0x40
    }

    #[repr(C)]
    pub struct CLogicDistanceAutosave {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x1], // 0x4b4
        pub _: [u8; 0x1], // 0x4b5
        pub _: [u8; 0x2], // 0x4b6
        pub _: [u8; 0x8], // 0x4b8
    }

    #[repr(C)]
    pub struct CLogicBranch {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x18], // 0x4b0
        pub _: [u8; 0x18], // 0x4c8
        pub _: [u8; 0x18], // 0x4e0
    }

    #[repr(C)]
    pub struct CPulseCell_Outflow_ScriptedSequence {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x8], // 0xd8
        pub _: [u8; 0x4], // 0xe0
        pub _: [u8; 0x1], // 0xe4
        pub _: [u8; 0x1], // 0xe5
        pub _: [u8; 0x2], // 0xe6
        pub _: [u8; 0x38], // 0xe8
        pub _: [u8; 0x18], // 0x120
        pub _: [u8; 0x48], // 0x138
        pub _: [u8; 0x18], // 0x180
    }

    #[repr(C)]
    pub struct CFuncTrackChange {
        pub pad_0: [u8; 0x920], // 0x0
        pub _: [u8; 0x4], // 0x920
        pub _: [u8; 0x4], // 0x924
        pub _: [u8; 0x8], // 0x928
        pub _: [u8; 0x8], // 0x930
        pub _: [u8; 0x8], // 0x938
        pub _: [u8; 0x8], // 0x940
        pub _: [u8; 0x4], // 0x948
        pub _: [u8; 0x4], // 0x94c
        pub _: [u8; 0x8], // 0x950
    }

    #[repr(C)]
    pub struct CFuncTrackTrain {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x4], // 0x850
        pub _: [u8; 0x4], // 0x854
        pub _: [u8; 0xc], // 0x858
        pub _: [u8; 0xc], // 0x864
        pub _: [u8; 0x4], // 0x870
        pub _: [u8; 0xc], // 0x874
        pub _: [u8; 0xc], // 0x880
        pub _: [u8; 0xc], // 0x88c
        pub _: [u8; 0x4], // 0x898
        pub _: [u8; 0x4], // 0x89c
        pub _: [u8; 0x4], // 0x8a0
        pub _: [u8; 0x4], // 0x8a4
        pub _: [u8; 0x4], // 0x8a8
        pub _: [u8; 0x4], // 0x8ac
        pub _: [u8; 0x4], // 0x8b0
        pub _: [u8; 0x4], // 0x8b4
        pub _: [u8; 0x8], // 0x8b8
        pub _: [u8; 0x8], // 0x8c0
        pub _: [u8; 0x8], // 0x8c8
        pub _: [u8; 0x8], // 0x8d0
        pub _: [u8; 0x8], // 0x8d8
        pub _: [u8; 0x4], // 0x8e0
        pub _: [u8; 0x4], // 0x8e4
        pub _: [u8; 0x4], // 0x8e8
        pub _: [u8; 0x4], // 0x8ec
        pub _: [u8; 0x4], // 0x8f0
        pub _: [u8; 0x4], // 0x8f4
        pub _: [u8; 0x18], // 0x8f8
        pub _: [u8; 0x18], // 0x910
        pub _: [u8; 0x18], // 0x928
        pub _: [u8; 0x18], // 0x940
        pub _: [u8; 0x4], // 0x958
        pub _: [u8; 0x4], // 0x95c
        pub _: [u8; 0x4], // 0x960
        pub _: [u8; 0x4], // 0x964
        pub _: [u8; 0x4], // 0x968
        pub _: [u8; 0x4], // 0x96c
        pub _: [u8; 0x8], // 0x970
    }

    #[repr(C)]
    pub struct CEnvInstructorHint {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x8], // 0x4b8
        pub _: [u8; 0x4], // 0x4c0
        pub _: [u8; 0x4], // 0x4c4
        pub _: [u8; 0x8], // 0x4c8
        pub _: [u8; 0x8], // 0x4d0
        pub _: [u8; 0x8], // 0x4d8
        pub _: [u8; 0x8], // 0x4e0
        pub _: [u8; 0x4], // 0x4e8
        pub _: [u8; 0x4], // 0x4ec
        pub _: [u8; 0x4], // 0x4f0
        pub _: [u8; 0x1], // 0x4f4
        pub _: [u8; 0x1], // 0x4f5
        pub _: [u8; 0x1], // 0x4f6
        pub _: [u8; 0x1], // 0x4f7
        pub _: [u8; 0x1], // 0x4f8
        pub _: [u8; 0x3], // 0x4f9
        pub _: [u8; 0x4], // 0x4fc
        pub _: [u8; 0x8], // 0x500
        pub _: [u8; 0x8], // 0x508
        pub _: [u8; 0x1], // 0x510
        pub _: [u8; 0x1], // 0x511
        pub _: [u8; 0x6], // 0x512
    }

    #[repr(C)]
    pub struct CEnvWind {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x130], // 0x4a8
    }

    #[repr(C)]
    pub struct CSoundEventPathCornerEntity {
        pub pad_0: [u8; 0x5a0], // 0x0
        pub _: [u8; 0x20], // 0x5a0
        pub _: [u8; 0x60], // 0x5c0
    }

    #[repr(C)]
    pub struct CCSPlayerBase_CameraServices {
        pub pad_0: [u8; 0x178], // 0x0
        pub _: [u8; 0x4], // 0x178
        pub _: [u8; 0x4], // 0x17c
        pub _: [u8; 0x4], // 0x180
        pub _: [u8; 0x4], // 0x184
        pub _: [u8; 0x8], // 0x188
        pub _: [u8; 0x18], // 0x190
        pub _: [u8; 0x8], // 0x1a8
    }

    #[repr(C)]
    pub struct CPulseCell_ApplyAnimGraphParam__CursorState_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CPulseCell_Inflow_BaseEntrypoint {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x30], // 0x50
    }

    #[repr(C)]
    pub struct CDynamicNavConnectionsVolume {
        pub pad_0: [u8; 0x9e0], // 0x0
        pub _: [u8; 0x8], // 0x9e0
        pub _: [u8; 0x18], // 0x9e8
        pub _: [u8; 0x8], // 0xa00
        pub _: [u8; 0x4], // 0xa08
        pub _: [u8; 0x4], // 0xa0c
        pub _: [u8; 0x4], // 0xa10
        pub _: [u8; 0x4], // 0xa14
    }

    #[repr(C)]
    pub struct CConstraintAnchor {
        pub pad_0: [u8; 0xa40], // 0x0
        pub _: [u8; 0x10], // 0xa40
    }

    #[repr(C)]
    pub struct CPulseCell_WaitForCursorsWithTagBase {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x8], // 0xd8
        pub _: [u8; 0x48], // 0xe0
    }

    #[repr(C)]
    pub struct CCSPlayerPawn {
        pub pad_0: [u8; 0xe30], // 0x0
        pub _: [u8; 0x8], // 0xe30
        pub _: [u8; 0x8], // 0xe38
        pub _: [u8; 0x8], // 0xe40
        pub _: [u8; 0x8], // 0xe48
        pub _: [u8; 0x8], // 0xe50
        pub _: [u8; 0x8], // 0xe58
        pub _: [u8; 0x8], // 0xe60
        pub _: [u8; 0x2], // 0xe68
        pub _: [u8; 0x6], // 0xe6a
        pub _: [u8; 0x8], // 0xe70
        pub _: [u8; 0xf8], // 0xe78
        pub _: [u8; 0x1], // 0xf70
        pub _: [u8; 0x7], // 0xf71
        pub _: [u8; 0x18], // 0xf78
        pub _: [u8; 0x1], // 0xf90
        pub _: [u8; 0x1], // 0xf91
        pub _: [u8; 0x1], // 0xf92
        pub _: [u8; 0x1], // 0xf93
        pub _: [u8; 0x4], // 0xf94
        pub _: [u8; 0x4], // 0xf98
        pub _: [u8; 0x1], // 0xf9c
        pub _: [u8; 0x3], // 0xf9d
        pub _: [u8; 0x4], // 0xfa0
        pub _: [u8; 0x4], // 0xfa4
        pub _: [u8; 0x4], // 0xfa8
        pub _: [u8; 0x4], // 0xfac
        pub _: [u8; 0x38], // 0xfb0
        pub _: [u8; 0x4], // 0xfe8
        pub _: [u8; 0x4], // 0xfec
        pub _: [u8; 0x8], // 0xff0
        pub _: [u8; 0x4], // 0xff8
        pub _: [u8; 0x4], // 0xffc
        pub _: [u8; 0x4], // 0x1000
        pub _: [u8; 0x4], // 0x1004
        pub _: [u8; 0xc], // 0x1008
        pub _: [u8; 0x40], // 0x1014
        pub _: [u8; 0x4], // 0x1054
        pub _: [u8; 0x10], // 0x1058
        pub _: [u8; 0x3e8], // 0x1068
        pub _: [u8; 0x4], // 0x1450
        pub _: [u8; 0xc], // 0x1454
        pub _: [u8; 0x4], // 0x1460
        pub _: [u8; 0x4], // 0x1464
        pub _: [u8; 0x4], // 0x1468
        pub _: [u8; 0x4], // 0x146c
        pub _: [u8; 0x4], // 0x1470
        pub _: [u8; 0x4], // 0x1474
        pub _: [u8; 0x4], // 0x1478
        pub _: [u8; 0x4], // 0x147c
        pub _: [u8; 0x4], // 0x1480
        pub _: [u8; 0x4], // 0x1484
        pub _: [u8; 0x4], // 0x1488
        pub _: [u8; 0x4], // 0x148c
        pub _: [u8; 0x4], // 0x1490
        pub _: [u8; 0x4], // 0x1494
        pub _: [u8; 0x8], // 0x1498
        pub _: [u8; 0x18], // 0x14a0
        pub _: [u8; 0x4], // 0x14b8
        pub _: [u8; 0x1], // 0x14bc
        pub _: [u8; 0x1], // 0x14bd
        pub _: [u8; 0x1], // 0x14be
        pub _: [u8; 0x1], // 0x14bf
        pub _: [u8; 0x4], // 0x14c0
        pub _: [u8; 0x4], // 0x14c4
        pub _: [u8; 0x4], // 0x14c8
        pub _: [u8; 0x4], // 0x14cc
        pub _: [u8; 0x4], // 0x14d0
        pub _: [u8; 0x1], // 0x14d4
        pub _: [u8; 0x3], // 0x14d5
        pub _: [u8; 0x4], // 0x14d8
        pub _: [u8; 0x4], // 0x14dc
        pub _: [u8; 0x4], // 0x14e0
        pub _: [u8; 0xc], // 0x14e4
        pub _: [u8; 0x4], // 0x14f0
        pub _: [u8; 0x4], // 0x14f4
        pub _: [u8; 0x4], // 0x14f8
        pub _: [u8; 0x4], // 0x14fc
        pub _: [u8; 0x8], // 0x1500
        pub _: [u8; 0x4], // 0x1508
        pub _: [u8; 0x4], // 0x150c
        pub _: [u8; 0x4], // 0x1510
        pub _: [u8; 0x4], // 0x1514
        pub _: [u8; 0x2], // 0x1518
        pub _: [u8; 0x2], // 0x151a
        pub _: [u8; 0x4], // 0x151c
        pub _: [u8; 0x4], // 0x1520
        pub _: [u8; 0xc], // 0x1524
        pub _: [u8; 0x4], // 0x1530
        pub _: [u8; 0x4], // 0x1534
        pub _: [u8; 0x4], // 0x1538
        pub _: [u8; 0xc], // 0x153c
        pub _: [u8; 0x14], // 0x1548
        pub _: [u8; 0x4], // 0x155c
        pub _: [u8; 0x4], // 0x1560
        pub _: [u8; 0x4], // 0x1564
        pub _: [u8; 0xc], // 0x1568
        pub _: [u8; 0xc], // 0x1574
        pub _: [u8; 0xc], // 0x1580
        pub _: [u8; 0x14], // 0x158c
        pub _: [u8; 0x1], // 0x15a0
        pub _: [u8; 0x3], // 0x15a1
        pub _: [u8; 0x4], // 0x15a4
        pub _: [u8; 0x4], // 0x15a8
        pub _: [u8; 0x4], // 0x15ac
        pub _: [u8; 0x4], // 0x15b0
        pub _: [u8; 0x1c], // 0x15b4
    }

    #[repr(C)]
    pub struct CEnvLightProbeVolume {
        pub pad_0: [u8; 0x540], // 0x0
        pub _: [u8; 0x8], // 0x540
        pub _: [u8; 0x8], // 0x548
        pub _: [u8; 0x8], // 0x550
        pub _: [u8; 0x8], // 0x558
        pub _: [u8; 0x8], // 0x560
        pub _: [u8; 0x8], // 0x568
        pub _: [u8; 0x8], // 0x570
        pub _: [u8; 0xc], // 0x578
        pub _: [u8; 0xc], // 0x584
        pub _: [u8; 0x4], // 0x590
        pub _: [u8; 0x4], // 0x594
        pub _: [u8; 0x4], // 0x598
        pub _: [u8; 0x4], // 0x59c
        pub _: [u8; 0x4], // 0x5a0
        pub _: [u8; 0x4], // 0x5a4
        pub _: [u8; 0x4], // 0x5a8
        pub _: [u8; 0x4], // 0x5ac
        pub _: [u8; 0x4], // 0x5b0
        pub _: [u8; 0xd], // 0x5b4
        pub _: [u8; 0x7], // 0x5c1
    }

    #[repr(C)]
    pub struct SpawnPoint {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x8], // 0x4b0
    }

    #[repr(C)]
    pub struct CGameSceneNode {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x20], // 0x10
        pub _: [u8; 0x8], // 0x30
        pub _: [u8; 0x8], // 0x38
        pub _: [u8; 0x8], // 0x40
        pub _: [u8; 0x28], // 0x48
        pub _: [u8; 0x10], // 0x70
        pub _: [u8; 0x38], // 0x80
        pub _: [u8; 0xc], // 0xb8
        pub _: [u8; 0x4], // 0xc4
        pub _: [u8; 0xc], // 0xc8
        pub _: [u8; 0xc], // 0xd4
        pub _: [u8; 0x4], // 0xe0
        pub _: [u8; 0x2], // 0xe4
        pub _: [u8; 0x1], // 0xe6
        pub _: [u8; 0x1], // 0xe7
        pub _: [u8; 0x3], // 0xe8
        pub _: [u8; 0x1], // 0xeb
        pub _: [u8; 0x1], // 0xec
        pub _: [u8; 0x3], // 0xed
        pub _: [u8; 0x14], // 0xf0
        pub _: [u8; 0x4], // 0x104
        pub _: [u8; 0x8], // 0x108
    }

    #[repr(C)]
    pub struct CWeaponM249 {
        pub pad_0: [u8; 0x12a0], // 0x0
    }

    #[repr(C)]
    pub struct CRopeKeyframeAlias_move_rope {
        pub pad_0: [u8; 0x8a8], // 0x0
    }

    #[repr(C)]
    pub struct CPlayer_ObserverServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
    }

    #[repr(C)]
    pub struct CCashStack {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x8], // 0x850
    }

    #[repr(C)]
    pub struct CLogicScript {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CAttributeManager__cached_attribute_float_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CPulseGraphInstance_ServerEntity {
        pub pad_0: [u8; 0x118], // 0x0
        pub _: [u8; 0x4], // 0x118
        pub _: [u8; 0x4], // 0x11c
        pub _: [u8; 0x8], // 0x120
        pub _: [u8; 0x8], // 0x128
        pub _: [u8; 0x8], // 0x130
        pub _: [u8; 0x8], // 0x138
    }

    #[repr(C)]
    pub struct CSceneEntityAlias_logic_choreographed_scene {
        pub pad_0: [u8; 0x800], // 0x0
    }

    #[repr(C)]
    pub struct CRagdollManager {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x1], // 0x4b0
        pub _: [u8; 0x7], // 0x4b1
    }

    #[repr(C)]
    pub struct CSoundOpvarSetBoxEntity {
        pub pad_0: [u8; 0x640], // 0x0
        pub _: [u8; 0xc], // 0x640
        pub _: [u8; 0xc], // 0x64c
        pub _: [u8; 0xc], // 0x658
        pub _: [u8; 0xc], // 0x664
        pub _: [u8; 0x4], // 0x670
        pub _: [u8; 0xc], // 0x674
        pub _: [u8; 0xc], // 0x680
        pub _: [u8; 0xc], // 0x68c
        pub _: [u8; 0x10], // 0x698
    }

    #[repr(C)]
    pub struct CPostProcessingVolume {
        pub pad_0: [u8; 0x9d8], // 0x0
        pub _: [u8; 0x8], // 0x9d8
        pub _: [u8; 0x4], // 0x9e0
        pub _: [u8; 0x4], // 0x9e4
        pub _: [u8; 0x4], // 0x9e8
        pub _: [u8; 0x4], // 0x9ec
        pub _: [u8; 0x4], // 0x9f0
        pub _: [u8; 0x4], // 0x9f4
        pub _: [u8; 0x4], // 0x9f8
        pub _: [u8; 0x4], // 0x9fc
        pub _: [u8; 0x4], // 0xa00
        pub _: [u8; 0x1], // 0xa04
        pub _: [u8; 0x3], // 0xa05
    }

    #[repr(C)]
    pub struct CPointProximitySensor {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x20], // 0x4b0
    }

    #[repr(C)]
    pub struct CPulse_InvokeBinding {
        pub _: [u8; 0x30], // 0x0
        pub _: [u8; 0x10], // 0x30
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x4], // 0x44
        pub _: [u8; 0x68], // 0x48
    }

    #[repr(C)]
    pub struct CTriggerLook {
        pub pad_0: [u8; 0x9e0], // 0x0
        pub _: [u8; 0x4], // 0x9e0
        pub _: [u8; 0x4], // 0x9e4
        pub _: [u8; 0x4], // 0x9e8
        pub _: [u8; 0x4], // 0x9ec
        pub _: [u8; 0x4], // 0x9f0
        pub _: [u8; 0x4], // 0x9f4
        pub _: [u8; 0x1], // 0x9f8
        pub _: [u8; 0x1], // 0x9f9
        pub _: [u8; 0x1], // 0x9fa
        pub _: [u8; 0x1], // 0x9fb
        pub _: [u8; 0x1], // 0x9fc
        pub _: [u8; 0x3], // 0x9fd
        pub _: [u8; 0x18], // 0xa00
        pub _: [u8; 0x18], // 0xa18
        pub _: [u8; 0x18], // 0xa30
    }

    #[repr(C)]
    pub struct CPulseCell_Outflow_PlayVCD {
        pub pad_0: [u8; 0x138], // 0x0
        pub _: [u8; 0x8], // 0x138
        pub _: [u8; 0x48], // 0x140
        pub _: [u8; 0x48], // 0x188
        pub _: [u8; 0x18], // 0x1d0
    }

    #[repr(C)]
    pub struct CMultiplayRules {
        pub pad_0: [u8; 0xd0], // 0x0
    }

    #[repr(C)]
    pub struct CMolotovGrenade {
        pub pad_0: [u8; 0x12c0], // 0x0
    }

    #[repr(C)]
    pub struct CPhysTorque {
        pub pad_0: [u8; 0x508], // 0x0
        pub _: [u8; 0x10], // 0x508
    }

    #[repr(C)]
    pub struct CMultiSource {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x80], // 0x4a8
        pub _: [u8; 0x80], // 0x528
        pub _: [u8; 0x18], // 0x5a8
        pub _: [u8; 0x8], // 0x5c0
        pub _: [u8; 0x8], // 0x5c8
    }

    #[repr(C)]
    pub struct CBaseCSGrenade {
        pub pad_0: [u8; 0x1280], // 0x0
        pub _: [u8; 0x1], // 0x1280
        pub _: [u8; 0x1], // 0x1281
        pub _: [u8; 0x1], // 0x1282
        pub _: [u8; 0x1], // 0x1283
        pub _: [u8; 0x4], // 0x1284
        pub _: [u8; 0x4], // 0x1288
        pub _: [u8; 0x4], // 0x128c
        pub _: [u8; 0x4], // 0x1290
        pub _: [u8; 0x4], // 0x1294
        pub _: [u8; 0x4], // 0x1298
        pub _: [u8; 0x4], // 0x129c
        pub _: [u8; 0x4], // 0x12a0
        pub _: [u8; 0x1c], // 0x12a4
    }

    #[repr(C)]
    pub struct CLogicAuto {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x18], // 0x4a8
        pub _: [u8; 0x18], // 0x4c0
        pub _: [u8; 0x18], // 0x4d8
        pub _: [u8; 0x18], // 0x4f0
        pub _: [u8; 0x18], // 0x508
        pub _: [u8; 0x18], // 0x520
        pub _: [u8; 0x18], // 0x538
        pub _: [u8; 0x18], // 0x550
        pub _: [u8; 0x18], // 0x568
        pub _: [u8; 0x18], // 0x580
        pub _: [u8; 0x8], // 0x598
    }

    #[repr(C)]
    pub struct CPhysicsWire {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
    }

    #[repr(C)]
    pub struct CFuncIllusionary {
        pub pad_0: [u8; 0x850], // 0x0
    }

    #[repr(C)]
    pub struct CInfoDynamicShadowHint {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x4], // 0x4b4
        pub _: [u8; 0x8], // 0x4b8
    }

    #[repr(C)]
    pub struct CMarkupVolume {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x8], // 0x850
    }

    #[repr(C)]
    pub struct CGenericLogicPlayerProxy {
        pub pad_0: [u8; 0x518], // 0x0
    }

    #[repr(C)]
    pub struct CPathNode {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0xc], // 0x4a8
        pub _: [u8; 0xc], // 0x4b4
        pub _: [u8; 0x8], // 0x4c0
        pub _: [u8; 0x8], // 0x4c8
        pub _: [u8; 0x20], // 0x4d0
        pub _: [u8; 0x10], // 0x4f0
    }

    #[repr(C)]
    pub struct CCSGO_TeamSelectCounterTerroristPosition {
        pub pad_0: [u8; 0x1468], // 0x0
    }

    #[repr(C)]
    pub struct CTriggerRemove {
        pub pad_0: [u8; 0x9c8], // 0x0
        pub _: [u8; 0x18], // 0x9c8
    }

    #[repr(C)]
    pub struct CLogicGameEventListener {
        pub pad_0: [u8; 0x4b8], // 0x0
        pub _: [u8; 0x18], // 0x4b8
        pub _: [u8; 0x8], // 0x4d0
        pub _: [u8; 0x8], // 0x4d8
        pub _: [u8; 0x1], // 0x4e0
        pub _: [u8; 0x7], // 0x4e1
    }

    #[repr(C)]
    pub struct CServerOnlyModelEntity {
        pub pad_0: [u8; 0x850], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_IntervalTimer {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x48], // 0xd8
        pub _: [u8; 0x48], // 0x120
    }

    #[repr(C)]
    pub struct CMarkupVolumeTagged_Nav {
        pub pad_0: [u8; 0x890], // 0x0
        pub _: [u8; 0x8], // 0x890
    }

    #[repr(C)]
    pub struct CInfoPlayerTerrorist {
        pub pad_0: [u8; 0x4b8], // 0x0
    }

    #[repr(C)]
    pub struct CLogicAutosave {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x8], // 0x4b0
    }

    #[repr(C)]
    pub struct CCSGO_TeamIntroTerroristPosition {
        pub pad_0: [u8; 0x1468], // 0x0
    }

    #[repr(C)]
    pub struct CSingleplayRules {
        pub pad_0: [u8; 0xd0], // 0x0
        pub _: [u8; 0x8], // 0xd0
    }

    #[repr(C)]
    pub struct CEnvWindShared {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x2], // 0x12
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x2], // 0x18
        pub _: [u8; 0x2], // 0x1a
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x2], // 0x28
        pub _: [u8; 0x2], // 0x2a
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x10], // 0x30
        pub _: [u8; 0x18], // 0x40
        pub _: [u8; 0x18], // 0x58
        pub _: [u8; 0xc0], // 0x70
    }

    #[repr(C)]
    pub struct CPointPrefab {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x8], // 0x4b8
        pub _: [u8; 0x1], // 0x4c0
        pub _: [u8; 0x3], // 0x4c1
        pub _: [u8; 0x4], // 0x4c4
        pub _: [u8; 0x68], // 0x4c8
    }

    #[repr(C)]
    pub struct CPulseCell_BaseLerp {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x48], // 0xd8
    }

    #[repr(C)]
    pub struct CEnvInstructorVRHint {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x8], // 0x4b8
        pub _: [u8; 0x8], // 0x4c0
        pub _: [u8; 0x8], // 0x4c8
        pub _: [u8; 0x8], // 0x4d0
        pub _: [u8; 0x8], // 0x4d8
        pub _: [u8; 0x4], // 0x4e0
        pub _: [u8; 0x4], // 0x4e4
    }

    #[repr(C)]
    pub struct CCSGameRulesProxy {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
    }

    #[repr(C)]
    pub struct CPrecipitation {
        pub pad_0: [u8; 0x9c8], // 0x0
    }

    #[repr(C)]
    pub struct CCommentaryViewPosition {
        pub pad_0: [u8; 0x8c0], // 0x0
    }

    #[repr(C)]
    pub struct CEnvGlobal {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x20], // 0x4a8
        pub _: [u8; 0x8], // 0x4c8
        pub _: [u8; 0x4], // 0x4d0
        pub _: [u8; 0x4], // 0x4d4
        pub _: [u8; 0x8], // 0x4d8
    }

    #[repr(C)]
    pub struct CLogicNPCCounterOBB {
        pub pad_0: [u8; 0x758], // 0x0
    }

    #[repr(C)]
    pub struct CPlatTrigger {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x8], // 0x850
    }

    #[repr(C)]
    pub struct CSceneEntity {
        pub pad_0: [u8; 0x4b0], // 0x0
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x8], // 0x4b8
        pub _: [u8; 0x8], // 0x4c0
        pub _: [u8; 0x8], // 0x4c8
        pub _: [u8; 0x8], // 0x4d0
        pub _: [u8; 0x8], // 0x4d8
        pub _: [u8; 0x8], // 0x4e0
        pub _: [u8; 0x8], // 0x4e8
        pub _: [u8; 0x8], // 0x4f0
        pub _: [u8; 0x4], // 0x4f8
        pub _: [u8; 0x4], // 0x4fc
        pub _: [u8; 0x4], // 0x500
        pub _: [u8; 0x4], // 0x504
        pub _: [u8; 0x4], // 0x508
        pub _: [u8; 0x4], // 0x50c
        pub _: [u8; 0x4], // 0x510
        pub _: [u8; 0x4], // 0x514
        pub _: [u8; 0x8], // 0x518
        pub _: [u8; 0x8], // 0x520
        pub _: [u8; 0x1], // 0x528
        pub _: [u8; 0x1], // 0x529
        pub _: [u8; 0x1], // 0x52a
        pub _: [u8; 0x1], // 0x52b
        pub _: [u8; 0x4], // 0x52c
        pub _: [u8; 0x4], // 0x530
        pub _: [u8; 0x4], // 0x534
        pub _: [u8; 0x1], // 0x538
        pub _: [u8; 0x3], // 0x539
        pub _: [u8; 0x4], // 0x53c
        pub _: [u8; 0x4], // 0x540
        pub _: [u8; 0x4], // 0x544
        pub _: [u8; 0x4], // 0x548
        pub _: [u8; 0x4], // 0x54c
        pub _: [u8; 0x4], // 0x550
        pub _: [u8; 0x1], // 0x554
        pub _: [u8; 0x1], // 0x555
        pub _: [u8; 0x1], // 0x556
        pub _: [u8; 0x1], // 0x557
        pub _: [u8; 0x1], // 0x558
        pub _: [u8; 0x1], // 0x559
        pub _: [u8; 0x6], // 0x55a
        pub _: [u8; 0x18], // 0x560
        pub _: [u8; 0x48], // 0x578
        pub _: [u8; 0x8], // 0x5c0
        pub _: [u8; 0x18], // 0x5c8
        pub _: [u8; 0x18], // 0x5e0
        pub _: [u8; 0x18], // 0x5f8
        pub _: [u8; 0x18], // 0x610
        pub _: [u8; 0x18], // 0x628
        pub _: [u8; 0x90], // 0x640
        pub _: [u8; 0x28], // 0x6d0
        pub _: [u8; 0x28], // 0x6f8
        pub _: [u8; 0x28], // 0x720
        pub _: [u8; 0x28], // 0x748
        pub _: [u8; 0x18], // 0x770
        pub _: [u8; 0x4], // 0x788
        pub _: [u8; 0x4], // 0x78c
        pub _: [u8; 0x8], // 0x790
        pub _: [u8; 0x8], // 0x798
        pub _: [u8; 0x1], // 0x7a0
        pub _: [u8; 0x1], // 0x7a1
        pub _: [u8; 0x1], // 0x7a2
        pub _: [u8; 0x1], // 0x7a3
        pub _: [u8; 0x4], // 0x7a4
        pub _: [u8; 0x18], // 0x7a8
        pub _: [u8; 0x18], // 0x7c0
        pub _: [u8; 0x8], // 0x7d8
        pub _: [u8; 0x8], // 0x7e0
        pub _: [u8; 0x4], // 0x7e8
        pub _: [u8; 0x4], // 0x7ec
        pub _: [u8; 0x4], // 0x7f0
        pub _: [u8; 0xc], // 0x7f4
    }

    #[repr(C)]
    pub struct CChoreoInfoTarget {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CTonemapController2 {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x4], // 0x4b4
        pub _: [u8; 0x8], // 0x4b8
    }

    #[repr(C)]
    pub struct CMapSharedEnvironment {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x10], // 0x4a8
    }

    #[repr(C)]
    pub struct CNetworkedSequenceOperation {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x8], // 0x14
        pub _: [u8; 0x1], // 0x1c
        pub _: [u8; 0x3], // 0x1d
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
    }

    #[repr(C)]
    pub struct CPhysMagnet {
        pub pad_0: [u8; 0xa40], // 0x0
        pub _: [u8; 0x18], // 0xa40
        pub _: [u8; 0x18], // 0xa58
        pub _: [u8; 0x4], // 0xa70
        pub _: [u8; 0x4], // 0xa74
        pub _: [u8; 0x8], // 0xa78
        pub _: [u8; 0x18], // 0xa80
        pub _: [u8; 0x1], // 0xa98
        pub _: [u8; 0x3], // 0xa99
        pub _: [u8; 0x4], // 0xa9c
        pub _: [u8; 0x4], // 0xaa0
        pub _: [u8; 0x4], // 0xaa4
        pub _: [u8; 0x8], // 0xaa8
    }

    #[repr(C)]
    pub struct CCSCustomHudLayout {
        pub pad_0: [u8; 0x4b8], // 0x0
        pub _: [u8; 0x8], // 0x4b8
        pub _: [u8; 0x8], // 0x4c0
        pub _: [u8; 0x68], // 0x4c8
        pub _: [u8; 0x198], // 0x530
        pub _: [u8; 0x18], // 0x6c8
        pub _: [u8; 0x18], // 0x6e0
        pub _: [u8; 0x120], // 0x6f8
    }

    #[repr(C)]
    pub struct CEntityInstance {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x8], // 0x28
    }

    #[repr(C)]
    pub struct CGameGibManager {
        pub pad_0: [u8; 0x4c0], // 0x0
        pub _: [u8; 0x4], // 0x4c0
        pub _: [u8; 0x4], // 0x4c4
        pub _: [u8; 0x4], // 0x4c8
        pub _: [u8; 0x4], // 0x4cc
    }

    #[repr(C)]
    pub struct CHandleDummy {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CFuncWallToggle {
        pub pad_0: [u8; 0x858], // 0x0
    }

    #[repr(C)]
    pub struct CCSPlayer_BulletServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x28], // 0x48
    }

    #[repr(C)]
    pub struct CSkyCamera {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x90], // 0x4a8
        pub _: [u8; 0x4], // 0x538
        pub _: [u8; 0x4], // 0x53c
        pub _: [u8; 0x8], // 0x540
    }

    #[repr(C)]
    pub struct CCSGO_EndOfMatchLineupEnd {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CPlayer_AutoaimServices {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct CItemDefuserAlias_item_defuser {
        pub pad_0: [u8; 0xb00], // 0x0
    }

    #[repr(C)]
    pub struct CPathCornerCrash {
        pub pad_0: [u8; 0x4e0], // 0x0
    }

    #[repr(C)]
    pub struct CPhysPulley {
        pub pad_0: [u8; 0x508], // 0x0
        pub _: [u8; 0xc], // 0x508
        pub _: [u8; 0x18], // 0x514
        pub _: [u8; 0x4], // 0x52c
        pub _: [u8; 0x8], // 0x530
    }

    #[repr(C)]
    pub struct CCSPetPlacement {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CWeaponMP5SD {
        pub pad_0: [u8; 0x12a0], // 0x0
    }

    #[repr(C)]
    pub struct CWeaponBaseItem {
        pub pad_0: [u8; 0x1280], // 0x0
        pub _: [u8; 0x1], // 0x1280
        pub _: [u8; 0xf], // 0x1281
    }

    #[repr(C)]
    pub struct CCommentaryAuto {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x18], // 0x4a8
        pub _: [u8; 0x18], // 0x4c0
        pub _: [u8; 0x18], // 0x4d8
    }

    #[repr(C)]
    pub struct CPulseCell_Outflow_ListenForEntityOutput__CursorState_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct ActiveModelConfig_t {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x8], // 0x30
        pub _: [u8; 0x8], // 0x38
        pub _: [u8; 0x18], // 0x40
        pub _: [u8; 0x18], // 0x58
        pub _: [u8; 0x10], // 0x70
        pub _: [u8; 0x20], // 0x80
    }

    #[repr(C)]
    pub struct CWeaponUSPSilencer {
        pub pad_0: [u8; 0x12a0], // 0x0
    }

    #[repr(C)]
    pub struct CSoundStackSave {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
    }

    #[repr(C)]
    pub struct CPulseCell_Value_Curve {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x40], // 0x48
    }

    #[repr(C)]
    pub struct CWeaponMag7 {
        pub pad_0: [u8; 0x12a0], // 0x0
    }

    #[repr(C)]
    pub struct CLogicMeasureMovement {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x8], // 0x4b8
        pub _: [u8; 0x4], // 0x4c0
        pub _: [u8; 0x4], // 0x4c4
        pub _: [u8; 0x4], // 0x4c8
        pub _: [u8; 0x4], // 0x4cc
        pub _: [u8; 0x4], // 0x4d0
        pub _: [u8; 0x4], // 0x4d4
    }

    #[repr(C)]
    pub struct CLogicActivityEvent {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x8], // 0x4b8
    }

    #[repr(C)]
    pub struct CC4 {
        pub pad_0: [u8; 0x12b0], // 0x0
        pub _: [u8; 0xc], // 0x12b0
        pub _: [u8; 0xc], // 0x12bc
        pub _: [u8; 0x1], // 0x12c8
        pub _: [u8; 0x3], // 0x12c9
        pub _: [u8; 0x4], // 0x12cc
        pub _: [u8; 0x1], // 0x12d0
        pub _: [u8; 0x7], // 0x12d1
        pub _: [u8; 0x18], // 0x12d8
        pub _: [u8; 0x4], // 0x12f0
        pub _: [u8; 0x7], // 0x12f4
        pub _: [u8; 0x5], // 0x12fb
    }

    #[repr(C)]
    pub struct CHostageCarriableProp {
        pub pad_0: [u8; 0xa40], // 0x0
    }

    #[repr(C)]
    pub struct CDynamicPropAlias_cable_dynamic {
        pub pad_0: [u8; 0xc90], // 0x0
    }

    #[repr(C)]
    pub struct CCSObserver_CameraServices {
        pub pad_0: [u8; 0x1b0], // 0x0
    }

    #[repr(C)]
    pub struct CEnvDetailController {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
    }

    #[repr(C)]
    pub struct CCSPlayerPawnBase {
        pub pad_0: [u8; 0xce0], // 0x0
        pub _: [u8; 0x50], // 0xce0
        pub _: [u8; 0x8], // 0xd30
        pub _: [u8; 0x4], // 0xd38
        pub _: [u8; 0x4], // 0xd3c
        pub _: [u8; 0xb0], // 0xd40
        pub _: [u8; 0x1], // 0xdf0
        pub _: [u8; 0x3], // 0xdf1
        pub _: [u8; 0x8], // 0xdf4
        pub _: [u8; 0x4], // 0xdfc
        pub _: [u8; 0x4], // 0xe00
        pub _: [u8; 0x4], // 0xe04
        pub _: [u8; 0x4], // 0xe08
        pub _: [u8; 0x4], // 0xe0c
        pub _: [u8; 0x4], // 0xe10
        pub _: [u8; 0xc], // 0xe14
    }

    #[repr(C)]
    pub struct CEnvSoundscapeProxy {
        pub pad_0: [u8; 0x538], // 0x0
        pub _: [u8; 0x8], // 0x538
    }

    #[repr(C)]
    pub struct CPulseCell_Inflow_EventHandler {
        pub pad_0: [u8; 0x80], // 0x0
        pub _: [u8; 0x10], // 0x80
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
        pub pad_0: [u8; 0x9c8], // 0x0
        pub _: [u8; 0x18], // 0x9c8
        pub _: [u8; 0x18], // 0x9e0
        pub _: [u8; 0x18], // 0x9f8
        pub _: [u8; 0x1], // 0xa10
        pub _: [u8; 0x1], // 0xa11
        pub _: [u8; 0x6], // 0xa12
        pub _: [u8; 0x8], // 0xa18
        pub _: [u8; 0x4], // 0xa20
        pub _: [u8; 0x4], // 0xa24
    }

    #[repr(C)]
    pub struct CRuleEntity {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x8], // 0x850
    }

    #[repr(C)]
    pub struct CPhysThruster {
        pub pad_0: [u8; 0x508], // 0x0
        pub _: [u8; 0x10], // 0x508
    }

    #[repr(C)]
    pub struct CInfoPlayerStart {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x1], // 0x4a8
        pub _: [u8; 0x7], // 0x4a9
        pub _: [u8; 0x8], // 0x4b0
    }

    #[repr(C)]
    pub struct CEntityFlame {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x4], // 0x4b4
        pub _: [u8; 0x4], // 0x4b8
        pub _: [u8; 0x4], // 0x4bc
        pub _: [u8; 0x4], // 0x4c0
        pub _: [u8; 0x4], // 0x4c4
        pub _: [u8; 0x4], // 0x4c8
        pub _: [u8; 0x1c], // 0x4cc
    }

    #[repr(C)]
    pub struct CSkeletonInstance {
        pub pad_0: [u8; 0x120], // 0x0
        pub _: [u8; 0x290], // 0x120
        pub _: [u8; 0x1], // 0x3b0
        pub _: [u8; 0x1], // 0x3b1
        pub _: [u8; 0x1], // 0x3b2
        pub _: [u8; 0x5], // 0x3b3
        pub _: [u8; 0x4], // 0x3b8
        pub _: [u8; 0x60], // 0x3bc
        pub _: [u8; 0x44], // 0x41c
    }

    #[repr(C)]
    pub struct CEntityComponent {
        pub pad_0: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct CBasePlatTrain {
        pub pad_0: [u8; 0x8d0], // 0x0
        pub _: [u8; 0x8], // 0x8d0
        pub _: [u8; 0x10], // 0x8d8
        pub _: [u8; 0x4], // 0x8e8
        pub _: [u8; 0x4], // 0x8ec
        pub _: [u8; 0x8], // 0x8f0
    }

    #[repr(C)]
    pub struct CPointTeleport {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0xc], // 0x4a8
        pub _: [u8; 0xc], // 0x4b4
        pub _: [u8; 0x1], // 0x4c0
        pub _: [u8; 0x7], // 0x4c1
    }

    #[repr(C)]
    pub struct CTriggerGameEvent {
        pub pad_0: [u8; 0x9c8], // 0x0
        pub _: [u8; 0x8], // 0x9c8
        pub _: [u8; 0x8], // 0x9d0
        pub _: [u8; 0x8], // 0x9d8
    }

    #[repr(C)]
    pub struct CMessageEntity {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x1], // 0x4b8
        pub _: [u8; 0x1], // 0x4b9
        pub _: [u8; 0x6], // 0x4ba
    }

    #[repr(C)]
    pub struct CEnvEntityIgniter {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
    }

    #[repr(C)]
    pub struct CPulseCell_Outflow_CycleShuffled__InstanceState_t {
        pub _: [u8; 0x20], // 0x0
        pub _: [u8; 0x8], // 0x20
    }

    #[repr(C)]
    pub struct CPulseCell_BaseLerp__CursorState_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct CMarkupVolumeTagged_NavGame {
        pub pad_0: [u8; 0x8b8], // 0x0
        pub _: [u8; 0x1], // 0x8b8
        pub _: [u8; 0x1], // 0x8b9
        pub _: [u8; 0x6], // 0x8ba
    }

    #[repr(C)]
    pub struct CMultiLightProxy {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x4], // 0x4b8
        pub _: [u8; 0x4], // 0x4bc
        pub _: [u8; 0x4], // 0x4c0
        pub _: [u8; 0x4], // 0x4c4
        pub _: [u8; 0x8], // 0x4c8
        pub _: [u8; 0x18], // 0x4d0
    }

    #[repr(C)]
    pub struct CWeaponM4A1 {
        pub pad_0: [u8; 0x12a0], // 0x0
    }

    #[repr(C)]
    pub struct CTriggerHostageReset {
        pub pad_0: [u8; 0x9c8], // 0x0
    }

    #[repr(C)]
    pub struct CEconWearable {
        pub pad_0: [u8; 0xeb0], // 0x0
        pub _: [u8; 0x4], // 0xeb0
        pub _: [u8; 0xc], // 0xeb4
    }

    #[repr(C)]
    pub struct CWeaponMAC10 {
        pub pad_0: [u8; 0x12a0], // 0x0
    }

    #[repr(C)]
    pub struct CFuncLadder {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x10], // 0x850
        pub _: [u8; 0x18], // 0x860
        pub _: [u8; 0xc], // 0x878
        pub _: [u8; 0xc], // 0x884
        pub _: [u8; 0xc], // 0x890
        pub _: [u8; 0x4], // 0x89c
        pub _: [u8; 0x1], // 0x8a0
        pub _: [u8; 0x1], // 0x8a1
        pub _: [u8; 0x6], // 0x8a2
        pub _: [u8; 0x8], // 0x8a8
        pub _: [u8; 0x18], // 0x8b0
        pub _: [u8; 0x18], // 0x8c8
    }

    #[repr(C)]
    pub struct CFogController {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x68], // 0x4a8
        pub _: [u8; 0x4], // 0x510
        pub _: [u8; 0x4], // 0x514
    }

    #[repr(C)]
    pub struct CItem {
        pub pad_0: [u8; 0xa48], // 0x0
        pub _: [u8; 0x18], // 0xa48
        pub _: [u8; 0x18], // 0xa60
        pub _: [u8; 0x8], // 0xa78
        pub _: [u8; 0x18], // 0xa80
        pub _: [u8; 0x18], // 0xa98
        pub _: [u8; 0xc], // 0xab0
        pub _: [u8; 0xc], // 0xabc
        pub _: [u8; 0x18], // 0xac8
    }

    #[repr(C)]
    pub struct CTriggerPush {
        pub pad_0: [u8; 0x9c8], // 0x0
        pub _: [u8; 0xc], // 0x9c8
        pub _: [u8; 0xc], // 0x9d4
        pub _: [u8; 0x1], // 0x9e0
        pub _: [u8; 0x7], // 0x9e1
        pub _: [u8; 0x8], // 0x9e8
        pub _: [u8; 0x4], // 0x9f0
        pub _: [u8; 0x4], // 0x9f4
        pub _: [u8; 0x8], // 0x9f8
    }

    #[repr(C)]
    pub struct CBaseProp {
        pub pad_0: [u8; 0xa40], // 0x0
        pub _: [u8; 0x4], // 0xa40
        pub _: [u8; 0x4], // 0xa44
        pub _: [u8; 0x8], // 0xa48
        pub _: [u8; 0x20], // 0xa50
    }

    #[repr(C)]
    pub struct CInfoOffscreenPanoramaTexture {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x1], // 0x4a8
        pub _: [u8; 0x3], // 0x4a9
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x8], // 0x4b8
        pub _: [u8; 0x8], // 0x4c0
        pub _: [u8; 0x8], // 0x4c8
        pub _: [u8; 0x18], // 0x4d0
        pub _: [u8; 0x8], // 0x4e8
        pub _: [u8; 0x18], // 0x4f0
        pub _: [u8; 0x8], // 0x508
        pub _: [u8; 0x18], // 0x510
    }

    #[repr(C)]
    pub struct CPointAngularVelocitySensor {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x4], // 0x4b4
        pub _: [u8; 0x4], // 0x4b8
        pub _: [u8; 0x4], // 0x4bc
        pub _: [u8; 0x4], // 0x4c0
        pub _: [u8; 0xc], // 0x4c4
        pub _: [u8; 0xc], // 0x4d0
        pub _: [u8; 0x4], // 0x4dc
        pub _: [u8; 0x20], // 0x4e0
        pub _: [u8; 0x18], // 0x500
        pub _: [u8; 0x18], // 0x518
        pub _: [u8; 0x18], // 0x530
        pub _: [u8; 0x18], // 0x548
        pub _: [u8; 0x18], // 0x560
    }

    #[repr(C)]
    pub struct CPlayerVisibility {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x4], // 0x4b4
        pub _: [u8; 0x1], // 0x4b8
        pub _: [u8; 0x7], // 0x4b9
    }

    #[repr(C)]
    pub struct CPulseCell_Step_FollowEntity {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x8], // 0x50
    }

    #[repr(C)]
    pub struct CFlashbang {
        pub pad_0: [u8; 0x12c0], // 0x0
    }

    #[repr(C)]
    pub struct CBasePlayerWeapon {
        pub pad_0: [u8; 0xeb0], // 0x0
        pub _: [u8; 0x4], // 0xeb0
        pub _: [u8; 0x4], // 0xeb4
        pub _: [u8; 0x4], // 0xeb8
        pub _: [u8; 0x4], // 0xebc
        pub _: [u8; 0x4], // 0xec0
        pub _: [u8; 0x4], // 0xec4
        pub _: [u8; 0x8], // 0xec8
        pub _: [u8; 0x20], // 0xed0
    }

    #[repr(C)]
    pub struct CPhysForce {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x4], // 0x4b8
        pub _: [u8; 0x4], // 0x4bc
        pub _: [u8; 0x4], // 0x4c0
        pub _: [u8; 0x4], // 0x4c4
        pub _: [u8; 0x40], // 0x4c8
    }

    #[repr(C)]
    pub struct CCSWeaponBaseVData {
        pub pad_0: [u8; 0x520], // 0x0
        pub _: [u8; 0x4], // 0x520
        pub _: [u8; 0x4], // 0x524
        pub _: [u8; 0xe0], // 0x528
        pub _: [u8; 0xc], // 0x608
        pub _: [u8; 0xc], // 0x614
        pub _: [u8; 0xe0], // 0x620
        pub _: [u8; 0x4], // 0x700
        pub _: [u8; 0x4], // 0x704
        pub _: [u8; 0x4], // 0x708
        pub _: [u8; 0x4], // 0x70c
        pub _: [u8; 0x4], // 0x710
        pub _: [u8; 0x4], // 0x714
        pub _: [u8; 0x4], // 0x718
        pub _: [u8; 0x1], // 0x71c
        pub _: [u8; 0x1], // 0x71d
        pub _: [u8; 0x1], // 0x71e
        pub _: [u8; 0x1], // 0x71f
        pub _: [u8; 0x8], // 0x720
        pub _: [u8; 0x4], // 0x728
        pub _: [u8; 0x1], // 0x72c
        pub _: [u8; 0x3], // 0x72d
        pub _: [u8; 0x4], // 0x730
        pub _: [u8; 0x4], // 0x734
        pub _: [u8; 0x8], // 0x738
        pub _: [u8; 0x4], // 0x740
        pub _: [u8; 0x4], // 0x744
        pub _: [u8; 0x8], // 0x748
        pub _: [u8; 0x8], // 0x750
        pub _: [u8; 0x8], // 0x758
        pub _: [u8; 0x8], // 0x760
        pub _: [u8; 0x8], // 0x768
        pub _: [u8; 0x8], // 0x770
        pub _: [u8; 0x8], // 0x778
        pub _: [u8; 0x8], // 0x780
        pub _: [u8; 0x8], // 0x788
        pub _: [u8; 0x8], // 0x790
        pub _: [u8; 0x8], // 0x798
        pub _: [u8; 0x8], // 0x7a0
        pub _: [u8; 0x8], // 0x7a8
        pub _: [u8; 0x8], // 0x7b0
        pub _: [u8; 0x4], // 0x7b8
        pub _: [u8; 0x4], // 0x7bc
        pub _: [u8; 0x4], // 0x7c0
        pub _: [u8; 0x4], // 0x7c4
        pub _: [u8; 0x4], // 0x7c8
        pub _: [u8; 0x4], // 0x7cc
        pub _: [u8; 0x4], // 0x7d0
        pub _: [u8; 0x4], // 0x7d4
        pub _: [u8; 0x4], // 0x7d8
        pub _: [u8; 0x4], // 0x7dc
        pub _: [u8; 0x4], // 0x7e0
        pub _: [u8; 0x4], // 0x7e4
        pub _: [u8; 0x8], // 0x7e8
        pub _: [u8; 0x1], // 0x7f0
        pub _: [u8; 0x3], // 0x7f1
        pub _: [u8; 0x4], // 0x7f4
        pub _: [u8; 0x4], // 0x7f8
        pub _: [u8; 0x4], // 0x7fc
        pub _: [u8; 0x4], // 0x800
        pub _: [u8; 0x4], // 0x804
        pub _: [u8; 0x4], // 0x808
        pub _: [u8; 0x4], // 0x80c
        pub _: [u8; 0x4], // 0x810
        pub _: [u8; 0x4], // 0x814
        pub _: [u8; 0x4], // 0x818
        pub _: [u8; 0x4], // 0x81c
        pub _: [u8; 0x4], // 0x820
        pub _: [u8; 0x4], // 0x824
        pub _: [u8; 0x4], // 0x828
        pub _: [u8; 0x4], // 0x82c
        pub _: [u8; 0x4], // 0x830
        pub _: [u8; 0x4], // 0x834
        pub _: [u8; 0x4], // 0x838
        pub _: [u8; 0x4], // 0x83c
        pub _: [u8; 0x4], // 0x840
        pub _: [u8; 0x4], // 0x844
        pub _: [u8; 0x4], // 0x848
        pub _: [u8; 0x4], // 0x84c
        pub _: [u8; 0x4], // 0x850
        pub _: [u8; 0x4], // 0x854
        pub _: [u8; 0x4], // 0x858
        pub _: [u8; 0xc], // 0x85c
        pub _: [u8; 0x38], // 0x868
    }

    #[repr(C)]
    pub struct CAttributeManager {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x20], // 0x30
    }

    #[repr(C)]
    pub struct SignatureOutflow_Continue {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct CInfoTarget {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CPlayer_CameraServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0xc], // 0x48
        pub _: [u8; 0x4], // 0x54
        pub _: [u8; 0x8], // 0x58
        pub _: [u8; 0x40], // 0x60
        pub _: [u8; 0x4], // 0xa0
        pub _: [u8; 0x4], // 0xa4
        pub _: [u8; 0x8], // 0xa8
        pub _: [u8; 0x78], // 0xb0
        pub _: [u8; 0x18], // 0x128
        pub _: [u8; 0x4], // 0x140
        pub _: [u8; 0x1c], // 0x144
        pub _: [u8; 0x18], // 0x160
    }

    #[repr(C)]
    pub struct CPulseCell_Timeline {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x18], // 0xd8
        pub _: [u8; 0x8], // 0xf0
        pub _: [u8; 0x48], // 0xf8
    }

    #[repr(C)]
    pub struct CPulseCell_Inflow_EntOutputHandler {
        pub pad_0: [u8; 0x80], // 0x0
        pub _: [u8; 0x10], // 0x80
        pub _: [u8; 0x10], // 0x90
        pub _: [u8; 0x18], // 0xa0
    }

    #[repr(C)]
    pub struct CFilterAttributeInt {
        pub pad_0: [u8; 0x4e0], // 0x0
        pub _: [u8; 0x8], // 0x4e0
    }

    #[repr(C)]
    pub struct CKeepUpright {
        pub pad_0: [u8; 0x4b0], // 0x0
        pub _: [u8; 0xc], // 0x4b0
        pub _: [u8; 0xc], // 0x4bc
        pub _: [u8; 0x8], // 0x4c8
        pub _: [u8; 0x8], // 0x4d0
        pub _: [u8; 0x4], // 0x4d8
        pub _: [u8; 0x4], // 0x4dc
        pub _: [u8; 0x1], // 0x4e0
        pub _: [u8; 0x7], // 0x4e1
    }

    #[repr(C)]
    pub struct CPointTemplate {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x8], // 0x4b8
        pub _: [u8; 0x4], // 0x4c0
        pub _: [u8; 0x4], // 0x4c4
        pub _: [u8; 0x4], // 0x4c8
        pub _: [u8; 0x4], // 0x4cc
        pub _: [u8; 0x18], // 0x4d0
        pub _: [u8; 0x18], // 0x4e8
        pub _: [u8; 0x8], // 0x500
        pub _: [u8; 0x8], // 0x508
        pub _: [u8; 0x30], // 0x510
    }

    #[repr(C)]
    pub struct CEnvVolumetricFogController {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x4], // 0x4b4
        pub _: [u8; 0x4], // 0x4b8
        pub _: [u8; 0x4], // 0x4bc
        pub _: [u8; 0x4], // 0x4c0
        pub _: [u8; 0x4], // 0x4c4
        pub _: [u8; 0x4], // 0x4c8
        pub _: [u8; 0x4], // 0x4cc
        pub _: [u8; 0x4], // 0x4d0
        pub _: [u8; 0x4], // 0x4d4
        pub _: [u8; 0x4], // 0x4d8
        pub _: [u8; 0xc], // 0x4dc
        pub _: [u8; 0xc], // 0x4e8
        pub _: [u8; 0x4], // 0x4f4
        pub _: [u8; 0x4], // 0x4f8
        pub _: [u8; 0x4], // 0x4fc
        pub _: [u8; 0x4], // 0x500
        pub _: [u8; 0x4], // 0x504
        pub _: [u8; 0x4], // 0x508
        pub _: [u8; 0x4], // 0x50c
        pub _: [u8; 0x4], // 0x510
        pub _: [u8; 0x4], // 0x514
        pub _: [u8; 0x4], // 0x518
        pub _: [u8; 0x1], // 0x51c
        pub _: [u8; 0x1], // 0x51d
        pub _: [u8; 0x2], // 0x51e
        pub _: [u8; 0x8], // 0x520
        pub _: [u8; 0x4], // 0x528
        pub _: [u8; 0x4], // 0x52c
        pub _: [u8; 0x4], // 0x530
        pub _: [u8; 0xc], // 0x534
        pub _: [u8; 0x4], // 0x540
        pub _: [u8; 0xc], // 0x544
        pub _: [u8; 0x8], // 0x550
    }

    #[repr(C)]
    pub struct CBot {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x9c], // 0x24
        pub _: [u8; 0x1], // 0xc0
        pub _: [u8; 0x3], // 0xc1
        pub _: [u8; 0x4], // 0xc4
        pub _: [u8; 0x4], // 0xc8
        pub _: [u8; 0x4], // 0xcc
        pub _: [u8; 0x8], // 0xd0
        pub _: [u8; 0x4], // 0xd8
        pub _: [u8; 0x1c], // 0xdc
        pub _: [u8; 0x8], // 0xf8
    }

    #[repr(C)]
    pub struct CPulseCell_Step_SetAnimGraphParam {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x8], // 0x48
    }

    #[repr(C)]
    pub struct CPlayer_FlashlightServices {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct CCSPlayerController {
        pub pad_0: [u8; 0x7e8], // 0x0
        pub _: [u8; 0x8], // 0x7e8
        pub _: [u8; 0x8], // 0x7f0
        pub _: [u8; 0x8], // 0x7f8
        pub _: [u8; 0x8], // 0x800
        pub _: [u8; 0x4], // 0x808
        pub _: [u8; 0x4], // 0x80c
        pub _: [u8; 0x8], // 0x810
        pub _: [u8; 0x8], // 0x818
        pub _: [u8; 0x4], // 0x820
        pub _: [u8; 0x4], // 0x824
        pub _: [u8; 0x4], // 0x828
        pub _: [u8; 0x1], // 0x82c
        pub _: [u8; 0x3], // 0x82d
        pub _: [u8; 0x4], // 0x830
        pub _: [u8; 0x1], // 0x834
        pub _: [u8; 0x1], // 0x835
        pub _: [u8; 0x1], // 0x836
        pub _: [u8; 0x1], // 0x837
        pub _: [u8; 0x1], // 0x838
        pub _: [u8; 0x3], // 0x839
        pub _: [u8; 0x4], // 0x83c
        pub _: [u8; 0x8], // 0x840
        pub _: [u8; 0x4], // 0x848
        pub _: [u8; 0x4], // 0x84c
        pub _: [u8; 0x8], // 0x850
        pub _: [u8; 0x8], // 0x858
        pub _: [u8; 0x4], // 0x860
        pub _: [u8; 0x4], // 0x864
        pub _: [u8; 0x4], // 0x868
        pub _: [u8; 0x4], // 0x86c
        pub _: [u8; 0x4], // 0x870
        pub _: [u8; 0x4], // 0x874
        pub _: [u8; 0x4], // 0x878
        pub _: [u8; 0x4], // 0x87c
        pub _: [u8; 0x4], // 0x880
        pub _: [u8; 0x4], // 0x884
        pub _: [u8; 0x30], // 0x888
        pub _: [u8; 0x4], // 0x8b8
        pub _: [u8; 0x4], // 0x8bc
        pub _: [u8; 0x4], // 0x8c0
        pub _: [u8; 0x4], // 0x8c4
        pub _: [u8; 0x1], // 0x8c8
        pub _: [u8; 0x1], // 0x8c9
        pub _: [u8; 0x1], // 0x8ca
        pub _: [u8; 0x1], // 0x8cb
        pub _: [u8; 0x1], // 0x8cc
        pub _: [u8; 0x3], // 0x8cd
        pub _: [u8; 0x10], // 0x8d0
        pub _: [u8; 0x1], // 0x8e0
        pub _: [u8; 0x1], // 0x8e1
        pub _: [u8; 0x2], // 0x8e2
        pub _: [u8; 0x4], // 0x8e4
        pub _: [u8; 0x4], // 0x8e8
        pub _: [u8; 0x4], // 0x8ec
        pub _: [u8; 0x4], // 0x8f0
        pub _: [u8; 0x4], // 0x8f4
        pub _: [u8; 0x4], // 0x8f8
        pub _: [u8; 0x4], // 0x8fc
        pub _: [u8; 0x4], // 0x900
        pub _: [u8; 0x4], // 0x904
        pub _: [u8; 0x1], // 0x908
        pub _: [u8; 0x1], // 0x909
        pub _: [u8; 0x2], // 0x90a
        pub _: [u8; 0x4], // 0x90c
        pub _: [u8; 0x4], // 0x910
        pub _: [u8; 0x4], // 0x914
        pub _: [u8; 0x4], // 0x918
        pub _: [u8; 0x4], // 0x91c
        pub _: [u8; 0x4], // 0x920
        pub _: [u8; 0x4], // 0x924
        pub _: [u8; 0x8], // 0x928
        pub _: [u8; 0x1], // 0x930
        pub _: [u8; 0x1], // 0x931
        pub _: [u8; 0x2], // 0x932
        pub _: [u8; 0x4], // 0x934
        pub _: [u8; 0x4], // 0x938
        pub _: [u8; 0x4], // 0x93c
        pub _: [u8; 0x4], // 0x940
        pub _: [u8; 0x4], // 0x944
        pub _: [u8; 0x8], // 0x948
        pub _: [u8; 0x18], // 0x950
        pub _: [u8; 0x4], // 0x968
        pub _: [u8; 0x4], // 0x96c
        pub _: [u8; 0x1], // 0x970
        pub _: [u8; 0x1], // 0x971
        pub _: [u8; 0x1], // 0x972
        pub _: [u8; 0x5], // 0x973
        pub _: [u8; 0x8], // 0x978
        pub _: [u8; 0x4], // 0x980
        pub _: [u8; 0x4], // 0x984
        pub _: [u8; 0x4], // 0x988
        pub _: [u8; 0xad], // 0x98c
        pub _: [u8; 0x7f], // 0xa39
    }

    #[repr(C)]
    pub struct CPhysLength {
        pub pad_0: [u8; 0x508], // 0x0
        pub _: [u8; 0x18], // 0x508
        pub _: [u8; 0xc], // 0x520
        pub _: [u8; 0x4], // 0x52c
        pub _: [u8; 0x4], // 0x530
        pub _: [u8; 0x4], // 0x534
    }

    #[repr(C)]
    pub struct CTeam {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x18], // 0x4a8
        pub _: [u8; 0x18], // 0x4c0
        pub _: [u8; 0x4], // 0x4d8
        pub _: [u8; 0x84], // 0x4dc
    }

    #[repr(C)]
    pub struct CLogicNPCCounterAABB {
        pub pad_0: [u8; 0x728], // 0x0
        pub _: [u8; 0xc], // 0x728
        pub _: [u8; 0xc], // 0x734
        pub _: [u8; 0xc], // 0x740
        pub _: [u8; 0xc], // 0x74c
    }

    #[repr(C)]
    pub struct CPulseCell_Outflow_CycleOrdered__InstanceState_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CChicken {
        pub pad_0: [u8; 0xcb0], // 0x0
        pub _: [u8; 0x438], // 0xcb0
        pub _: [u8; 0x18], // 0x10e8
        pub _: [u8; 0x10], // 0x1100
        pub _: [u8; 0x18], // 0x1110
        pub _: [u8; 0x4], // 0x1128
        pub _: [u8; 0xc], // 0x112c
        pub _: [u8; 0x4], // 0x1138
        pub _: [u8; 0x4], // 0x113c
        pub _: [u8; 0x18], // 0x1140
        pub _: [u8; 0x4], // 0x1158
        pub _: [u8; 0x4], // 0x115c
        pub _: [u8; 0x18], // 0x1160
        pub _: [u8; 0x18], // 0x1178
        pub _: [u8; 0x18], // 0x1190
        pub _: [u8; 0x4], // 0x11a8
        pub _: [u8; 0x14], // 0x11ac
        pub _: [u8; 0x18], // 0x11c0
        pub _: [u8; 0x18], // 0x11d8
        pub _: [u8; 0x2010], // 0x11f0
        pub _: [u8; 0x98], // 0x3200
        pub _: [u8; 0xc], // 0x3298
        pub _: [u8; 0x4], // 0x32a4
        pub _: [u8; 0x20], // 0x32a8
        pub _: [u8; 0x1a], // 0x32c8
        pub _: [u8; 0xe], // 0x32e2
    }

    #[repr(C)]
    pub struct CPhysicsPropRespawnable {
        pub pad_0: [u8; 0xd10], // 0x0
        pub _: [u8; 0xc], // 0xd10
        pub _: [u8; 0xc], // 0xd1c
        pub _: [u8; 0xc], // 0xd28
        pub _: [u8; 0xc], // 0xd34
        pub _: [u8; 0x10], // 0xd40
    }

    #[repr(C)]
    pub struct CEnvBeam {
        pub pad_0: [u8; 0x8f0], // 0x0
        pub _: [u8; 0x8], // 0x8f0
        pub _: [u8; 0x8], // 0x8f8
        pub _: [u8; 0x8], // 0x900
        pub _: [u8; 0x8], // 0x908
        pub _: [u8; 0x4], // 0x910
        pub _: [u8; 0x4], // 0x914
        pub _: [u8; 0x4], // 0x918
        pub _: [u8; 0x4], // 0x91c
        pub _: [u8; 0x8], // 0x920
        pub _: [u8; 0x8], // 0x928
        pub _: [u8; 0x4], // 0x930
        pub _: [u8; 0xc], // 0x934
        pub _: [u8; 0xc], // 0x940
        pub _: [u8; 0x4], // 0x94c
        pub _: [u8; 0x8], // 0x950
        pub _: [u8; 0x8], // 0x958
        pub _: [u8; 0x8], // 0x960
        pub _: [u8; 0x8], // 0x968
        pub _: [u8; 0x18], // 0x970
    }

    #[repr(C)]
    pub struct CLightSpotEntity {
        pub pad_0: [u8; 0x858], // 0x0
    }

    #[repr(C)]
    pub struct CCSObservableElement {
        pub pad_0: [u8; 0x4c0], // 0x0
        pub _: [u8; 0x8], // 0x4c0
        pub _: [u8; 0x4], // 0x4c8
        pub _: [u8; 0x4], // 0x4cc
        pub _: [u8; 0x8], // 0x4d0
    }

    #[repr(C)]
    pub struct CWeaponSawedoff {
        pub pad_0: [u8; 0x1280], // 0x0
    }

    #[repr(C)]
    pub struct CTonemapTrigger {
        pub pad_0: [u8; 0x9c8], // 0x0
        pub _: [u8; 0x8], // 0x9c8
        pub _: [u8; 0x8], // 0x9d0
    }

    #[repr(C)]
    pub struct CEnvShake {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x4], // 0x4b4
        pub _: [u8; 0x4], // 0x4b8
        pub _: [u8; 0x4], // 0x4bc
        pub _: [u8; 0x4], // 0x4c0
        pub _: [u8; 0x4], // 0x4c4
        pub _: [u8; 0x4], // 0x4c8
        pub _: [u8; 0xc], // 0x4cc
        pub _: [u8; 0x8], // 0x4d8
        pub _: [u8; 0x18], // 0x4e0
    }

    #[repr(C)]
    pub struct CCSPlayer_MovementServices {
        pub pad_0: [u8; 0x310], // 0x0
        pub _: [u8; 0xe0], // 0x310
        pub _: [u8; 0x4], // 0x3f0
        pub _: [u8; 0x4], // 0x3f4
        pub _: [u8; 0xc], // 0x3f8
        pub _: [u8; 0x4], // 0x404
        pub _: [u8; 0x4], // 0x408
        pub _: [u8; 0x4], // 0x40c
        pub _: [u8; 0x4], // 0x410
        pub _: [u8; 0x1], // 0x414
        pub _: [u8; 0x1], // 0x415
        pub _: [u8; 0x2], // 0x416
        pub _: [u8; 0x4], // 0x418
        pub _: [u8; 0x4], // 0x41c
        pub _: [u8; 0x4], // 0x420
        pub _: [u8; 0xc], // 0x424
        pub _: [u8; 0x8], // 0x430
        pub _: [u8; 0x1], // 0x438
        pub _: [u8; 0x1], // 0x439
        pub _: [u8; 0x20e], // 0x43a
        pub _: [u8; 0x4], // 0x648
        pub _: [u8; 0x4], // 0x64c
        pub _: [u8; 0x4], // 0x650
        pub _: [u8; 0x4], // 0x654
        pub _: [u8; 0x4], // 0x658
        pub _: [u8; 0xc], // 0x65c
        pub _: [u8; 0xc], // 0x668
        pub _: [u8; 0xc], // 0x674
        pub _: [u8; 0x4], // 0x680
        pub _: [u8; 0x4], // 0x684
        pub _: [u8; 0x4], // 0x688
        pub _: [u8; 0x4], // 0x68c
        pub _: [u8; 0x4], // 0x690
        pub _: [u8; 0x4], // 0x694
        pub _: [u8; 0x4], // 0x698
        pub _: [u8; 0x4], // 0x69c
        pub _: [u8; 0x4], // 0x6a0
        pub _: [u8; 0x4], // 0x6a4
        pub _: [u8; 0x4], // 0x6a8
        pub _: [u8; 0x4], // 0x6ac
        pub _: [u8; 0x4], // 0x6b0
        pub _: [u8; 0x4], // 0x6b4
        pub _: [u8; 0x18], // 0x6b8
        pub _: [u8; 0x38], // 0x6d0
        pub _: [u8; 0x4], // 0x708
        pub _: [u8; 0x4], // 0x70c
        pub _: [u8; 0x4], // 0x710
        pub _: [u8; 0x4], // 0x714
        pub _: [u8; 0x90], // 0x718
        pub _: [u8; 0x828], // 0x7a8
        pub _: [u8; 0x10], // 0xfd0
    }

    #[repr(C)]
    pub struct SellbackPurchaseEntry_t {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x8], // 0x40
    }

    #[repr(C)]
    pub struct CTestPulseIO__EntityNameStringArgs_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct CFuncMoverRouter {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x8], // 0x4b8
    }

    #[repr(C)]
    pub struct CTriggerCallback {
        pub pad_0: [u8; 0x9d0], // 0x0
    }

    #[repr(C)]
    pub struct CSoundOpvarSetAutoRoomEntity {
        pub pad_0: [u8; 0x640], // 0x0
        pub _: [u8; 0x18], // 0x640
        pub _: [u8; 0x18], // 0x658
        pub _: [u8; 0x4], // 0x670
        pub _: [u8; 0x4], // 0x674
        pub _: [u8; 0x8], // 0x678
    }

    #[repr(C)]
    pub struct CPulseCell_Outflow_ListenForEntityOutput {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x48], // 0xd8
        pub _: [u8; 0x8], // 0x120
        pub _: [u8; 0x8], // 0x128
    }

    #[repr(C)]
    pub struct CPushable {
        pub pad_0: [u8; 0x928], // 0x0
    }

    #[repr(C)]
    pub struct CRotatorTarget {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CPhysicsEntitySolver {
        pub pad_0: [u8; 0x4c0], // 0x0
        pub _: [u8; 0x4], // 0x4c0
        pub _: [u8; 0x4], // 0x4c4
        pub _: [u8; 0x4], // 0x4c8
        pub _: [u8; 0x4], // 0x4cc
    }

    #[repr(C)]
    pub struct CLogicCollisionPair {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x1], // 0x4b8
        pub _: [u8; 0x1], // 0x4b9
        pub _: [u8; 0x1], // 0x4ba
        pub _: [u8; 0x1], // 0x4bb
        pub _: [u8; 0x4], // 0x4bc
    }

    #[repr(C)]
    pub struct CTestEffect {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x60], // 0x4b0
        pub _: [u8; 0x60], // 0x510
        pub _: [u8; 0x8], // 0x570
    }

    #[repr(C)]
    pub struct CPulseCell_Outflow_ScriptedSequence__CursorState_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CPropDoorRotating {
        pub pad_0: [u8; 0xe90], // 0x0
        pub _: [u8; 0xc], // 0xe90
        pub _: [u8; 0x4], // 0xe9c
        pub _: [u8; 0x4], // 0xea0
        pub _: [u8; 0x4], // 0xea4
        pub _: [u8; 0x4], // 0xea8
        pub _: [u8; 0x4], // 0xeac
        pub _: [u8; 0x4], // 0xeb0
        pub _: [u8; 0xc], // 0xeb4
        pub _: [u8; 0xc], // 0xec0
        pub _: [u8; 0xc], // 0xecc
        pub _: [u8; 0xc], // 0xed8
        pub _: [u8; 0xc], // 0xee4
        pub _: [u8; 0xc], // 0xef0
        pub _: [u8; 0xc], // 0xefc
        pub _: [u8; 0xc], // 0xf08
        pub _: [u8; 0xc], // 0xf14
        pub _: [u8; 0x4], // 0xf20
        pub _: [u8; 0xc], // 0xf24
    }

    #[repr(C)]
    pub struct CEnvParticleGlow {
        pub pad_0: [u8; 0xdd8], // 0x0
        pub _: [u8; 0x4], // 0xdd8
        pub _: [u8; 0x4], // 0xddc
        pub _: [u8; 0x4], // 0xde0
        pub _: [u8; 0x4], // 0xde4
        pub _: [u8; 0x8], // 0xde8
    }

    #[repr(C)]
    pub struct CMathRemap {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x4], // 0x4b4
        pub _: [u8; 0x4], // 0x4b8
        pub _: [u8; 0x4], // 0x4bc
        pub _: [u8; 0x20], // 0x4c0
        pub _: [u8; 0x18], // 0x4e0
        pub _: [u8; 0x18], // 0x4f8
        pub _: [u8; 0x18], // 0x510
        pub _: [u8; 0x18], // 0x528
    }

    #[repr(C)]
    pub struct CSkyCameraVolumeTarget {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x8], // 0x4b0
    }

    #[repr(C)]
    pub struct CSoundOpvarSetOBBWindEntity {
        pub pad_0: [u8; 0x550], // 0x0
        pub _: [u8; 0xc], // 0x550
        pub _: [u8; 0xc], // 0x55c
        pub _: [u8; 0xc], // 0x568
        pub _: [u8; 0xc], // 0x574
        pub _: [u8; 0x4], // 0x580
        pub _: [u8; 0x4], // 0x584
        pub _: [u8; 0x4], // 0x588
        pub _: [u8; 0x4], // 0x58c
    }

    #[repr(C)]
    pub struct PhysicsRagdollPose_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
    }

    #[repr(C)]
    pub struct CPulseCell_ApplyDynamicAttributeBase__CursorState_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct CPropDataComponent {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
    }

    #[repr(C)]
    pub struct CScriptTriggerOnce {
        pub pad_0: [u8; 0x9e0], // 0x0
        pub _: [u8; 0x10], // 0x9e0
    }

    #[repr(C)]
    pub struct CLightOrthoEntity {
        pub pad_0: [u8; 0x858], // 0x0
    }

    #[repr(C)]
    pub struct CInfoInstructorHintHostageRescueZone {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_LimitCount__InstanceState_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CTriggerTeleport {
        pub pad_0: [u8; 0x9c8], // 0x0
        pub _: [u8; 0x8], // 0x9c8
        pub _: [u8; 0x1], // 0x9d0
        pub _: [u8; 0x1], // 0x9d1
        pub _: [u8; 0x6], // 0x9d2
    }

    #[repr(C)]
    pub struct CFuncWall {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x8], // 0x850
    }

    #[repr(C)]
    pub struct CBtActionAim {
        pub pad_0: [u8; 0x68], // 0x0
        pub _: [u8; 0x18], // 0x68
        pub _: [u8; 0x8], // 0x80
        pub _: [u8; 0x4], // 0x88
        pub _: [u8; 0x4], // 0x8c
        pub _: [u8; 0x4], // 0x90
        pub _: [u8; 0x4], // 0x94
        pub _: [u8; 0x4], // 0x98
        pub _: [u8; 0xc], // 0x9c
        pub _: [u8; 0x18], // 0xa8
        pub _: [u8; 0x18], // 0xc0
        pub _: [u8; 0x18], // 0xd8
        pub _: [u8; 0x8], // 0xf0
    }

    #[repr(C)]
    pub struct CCSGO_TeamPreviewCharacterPosition {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x8], // 0x4b8
        pub _: [u8; 0x8], // 0x4c0
        pub _: [u8; 0x3e8], // 0x4c8
        pub _: [u8; 0x3e8], // 0x8b0
        pub _: [u8; 0x3e8], // 0xc98
        pub _: [u8; 0x3e8], // 0x1080
    }

    #[repr(C)]
    pub struct CGameRulesProxy {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CInfoLadderDismount {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CMessage {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x4], // 0x4b4
        pub _: [u8; 0x8], // 0x4b8
        pub _: [u8; 0x8], // 0x4c0
        pub _: [u8; 0x18], // 0x4c8
    }

    #[repr(C)]
    pub struct CPointVelocitySensor {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0xc], // 0x4ac
        pub _: [u8; 0x4], // 0x4b8
        pub _: [u8; 0x4], // 0x4bc
        pub _: [u8; 0x8], // 0x4c0
        pub _: [u8; 0x20], // 0x4c8
    }

    #[repr(C)]
    pub struct CCS2PawnGraphController {
        pub pad_0: [u8; 0x5c0], // 0x0
        pub _: [u8; 0x18], // 0x5c0
        pub _: [u8; 0x18], // 0x5d8
        pub _: [u8; 0x18], // 0x5f0
        pub _: [u8; 0x18], // 0x608
        pub _: [u8; 0x18], // 0x620
        pub _: [u8; 0x18], // 0x638
        pub _: [u8; 0x18], // 0x650
        pub _: [u8; 0x18], // 0x668
        pub _: [u8; 0x18], // 0x680
        pub _: [u8; 0x18], // 0x698
        pub _: [u8; 0x18], // 0x6b0
        pub _: [u8; 0x18], // 0x6c8
        pub _: [u8; 0x18], // 0x6e0
        pub _: [u8; 0x18], // 0x6f8
        pub _: [u8; 0x18], // 0x710
        pub _: [u8; 0x18], // 0x728
        pub _: [u8; 0x18], // 0x740
        pub _: [u8; 0x18], // 0x758
        pub _: [u8; 0x18], // 0x770
        pub _: [u8; 0x18], // 0x788
        pub _: [u8; 0x18], // 0x7a0
        pub _: [u8; 0x18], // 0x7b8
        pub _: [u8; 0x18], // 0x7d0
        pub _: [u8; 0x18], // 0x7e8
        pub _: [u8; 0x18], // 0x800
        pub _: [u8; 0x18], // 0x818
        pub _: [u8; 0x18], // 0x830
        pub _: [u8; 0x18], // 0x848
    }

    #[repr(C)]
    pub struct EngineCountdownTimer {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CScriptTriggerMultiple {
        pub pad_0: [u8; 0x9e0], // 0x0
        pub _: [u8; 0x10], // 0x9e0
    }

    #[repr(C)]
    pub struct CHostage {
        pub pad_0: [u8; 0xb38], // 0x0
        pub _: [u8; 0x18], // 0xb38
        pub _: [u8; 0x18], // 0xb50
        pub _: [u8; 0x18], // 0xb68
        pub _: [u8; 0x18], // 0xb80
        pub _: [u8; 0x18], // 0xb98
        pub _: [u8; 0x4], // 0xbb0
        pub _: [u8; 0x4], // 0xbb4
        pub _: [u8; 0x4], // 0xbb8
        pub _: [u8; 0x4], // 0xbbc
        pub _: [u8; 0xc], // 0xbc0
        pub _: [u8; 0x1], // 0xbcc
        pub _: [u8; 0x3], // 0xbcd
        pub _: [u8; 0x4], // 0xbd0
        pub _: [u8; 0x4], // 0xbd4
        pub _: [u8; 0x8], // 0xbd8
        pub _: [u8; 0x18], // 0xbe0
        pub _: [u8; 0x4], // 0xbf8
        pub _: [u8; 0xc], // 0xbfc
        pub _: [u8; 0x1], // 0xc08
        pub _: [u8; 0x7], // 0xc09
        pub _: [u8; 0x18], // 0xc10
        pub _: [u8; 0x2010], // 0xc28
        pub _: [u8; 0x18], // 0x2c38
        pub _: [u8; 0x90], // 0x2c50
        pub _: [u8; 0x20], // 0x2ce0
        pub _: [u8; 0x1c], // 0x2d00
        pub _: [u8; 0x1], // 0x2d1c
        pub _: [u8; 0x3], // 0x2d1d
        pub _: [u8; 0x4], // 0x2d20
        pub _: [u8; 0x4], // 0x2d24
        pub _: [u8; 0x4], // 0x2d28
        pub _: [u8; 0xc], // 0x2d2c
        pub _: [u8; 0xc], // 0x2d38
        pub _: [u8; 0x4], // 0x2d44
        pub _: [u8; 0x4], // 0x2d48
        pub _: [u8; 0x4], // 0x2d4c
        pub _: [u8; 0x4], // 0x2d50
        pub _: [u8; 0x4], // 0x2d54
        pub _: [u8; 0x38], // 0x2d58
        pub _: [u8; 0x10], // 0x2d90
    }

    #[repr(C)]
    pub struct CEnvSpark {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x4], // 0x4b4
        pub _: [u8; 0x18], // 0x4b8
    }

    #[repr(C)]
    pub struct CCSPlayerController_DamageServices {
        pub pad_0: [u8; 0x40], // 0x0
        pub _: [u8; 0x8], // 0x40
        pub _: [u8; 0x88], // 0x48
    }

    #[repr(C)]
    pub struct CEnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume {
        pub pad_0: [u8; 0x680], // 0x0
    }

    #[repr(C)]
    pub struct CBaseModelEntity__OnDamageLevelChangedArgs_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
    }

    #[repr(C)]
    pub struct CFilterLOS {
        pub pad_0: [u8; 0x4e0], // 0x0
    }

    #[repr(C)]
    pub struct CPointOrient {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x4], // 0x4b4
        pub _: [u8; 0x4], // 0x4b8
        pub _: [u8; 0x4], // 0x4bc
        pub _: [u8; 0x4], // 0x4c0
        pub _: [u8; 0x4], // 0x4c4
    }

    #[repr(C)]
    pub struct sky3dparams_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0xc], // 0xc
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x68], // 0x20
        pub _: [u8; 0x8], // 0x88
    }

    #[repr(C)]
    pub struct CWeaponP250 {
        pub pad_0: [u8; 0x12a0], // 0x0
    }

    #[repr(C)]
    pub struct CDestructiblePartsComponent {
        pub _: [u8; 0x48], // 0x0
        pub _: [u8; 0x18], // 0x48
        pub _: [u8; 0x8], // 0x60
        pub _: [u8; 0x8], // 0x68
    }

    #[repr(C)]
    pub struct CChangeLevel {
        pub pad_0: [u8; 0x9c8], // 0x0
        pub _: [u8; 0x8], // 0x9c8
        pub _: [u8; 0x8], // 0x9d0
        pub _: [u8; 0x18], // 0x9d8
        pub _: [u8; 0x1], // 0x9f0
        pub _: [u8; 0x1], // 0x9f1
        pub _: [u8; 0x1], // 0x9f2
        pub _: [u8; 0x5], // 0x9f3
    }

    #[repr(C)]
    pub struct CBaseButton {
        pub pad_0: [u8; 0x8d0], // 0x0
        pub _: [u8; 0xc], // 0x8d0
        pub _: [u8; 0x1], // 0x8dc
        pub _: [u8; 0x3], // 0x8dd
        pub _: [u8; 0x20], // 0x8e0
        pub _: [u8; 0x8], // 0x900
        pub _: [u8; 0x8], // 0x908
        pub _: [u8; 0x8], // 0x910
        pub _: [u8; 0x8], // 0x918
        pub _: [u8; 0x1], // 0x920
        pub _: [u8; 0x3], // 0x921
        pub _: [u8; 0x4], // 0x924
        pub _: [u8; 0x4], // 0x928
        pub _: [u8; 0x4], // 0x92c
        pub _: [u8; 0x18], // 0x930
        pub _: [u8; 0x18], // 0x948
        pub _: [u8; 0x18], // 0x960
        pub _: [u8; 0x18], // 0x978
        pub _: [u8; 0x18], // 0x990
        pub _: [u8; 0x4], // 0x9a8
        pub _: [u8; 0x4], // 0x9ac
        pub _: [u8; 0x4], // 0x9b0
        pub _: [u8; 0x4], // 0x9b4
        pub _: [u8; 0x8], // 0x9b8
        pub _: [u8; 0x4], // 0x9c0
        pub _: [u8; 0x4], // 0x9c4
        pub _: [u8; 0x8], // 0x9c8
    }

    #[repr(C)]
    pub struct CPulseCell_SoundEventStart {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x8], // 0x48
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
        pub pad_0: [u8; 0xa48], // 0x0
        pub _: [u8; 0x8], // 0xa48
        pub _: [u8; 0x18], // 0xa50
        pub _: [u8; 0x18], // 0xa68
        pub _: [u8; 0x1], // 0xa80
        pub _: [u8; 0x1], // 0xa81
        pub _: [u8; 0x2], // 0xa82
        pub _: [u8; 0x4], // 0xa84
        pub _: [u8; 0x4], // 0xa88
        pub _: [u8; 0x4], // 0xa8c
        pub _: [u8; 0x8], // 0xa90
        pub _: [u8; 0x8], // 0xa98
        pub _: [u8; 0x8], // 0xaa0
        pub _: [u8; 0x18], // 0xaa8
        pub _: [u8; 0x4], // 0xac0
        pub _: [u8; 0xc], // 0xac4
    }

    #[repr(C)]
    pub struct CColorCorrectionVolume {
        pub pad_0: [u8; 0x9c8], // 0x0
        pub _: [u8; 0x4], // 0x9c8
        pub _: [u8; 0x4], // 0x9cc
        pub _: [u8; 0x4], // 0x9d0
        pub _: [u8; 0x200], // 0x9d4
        pub _: [u8; 0x4], // 0xbd4
        pub _: [u8; 0x4], // 0xbd8
        pub _: [u8; 0x4], // 0xbdc
        pub _: [u8; 0x8], // 0xbe0
    }

    #[repr(C)]
    pub struct CCSPlayerController_ActionTrackingServices {
        pub pad_0: [u8; 0x40], // 0x0
        pub _: [u8; 0x88], // 0x40
        pub _: [u8; 0xc0], // 0xc8
        pub _: [u8; 0x4], // 0x188
        pub _: [u8; 0x4], // 0x18c
        pub _: [u8; 0x2d0], // 0x190
    }

    #[repr(C)]
    pub struct CBodyComponentBaseAnimGraph {
        pub pad_0: [u8; 0x4e0], // 0x0
        pub _: [u8; 0x650], // 0x4e0
    }

    #[repr(C)]
    pub struct CPulseCell_BaseYieldingInflow {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x48], // 0x48
        pub _: [u8; 0x48], // 0x90
    }

    #[repr(C)]
    pub struct PulseNodeDynamicOutflows_t {
        pub _: [u8; 0x18], // 0x0
    }

    #[repr(C)]
    pub struct CFogVolume {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x8], // 0x850
        pub _: [u8; 0x8], // 0x858
        pub _: [u8; 0x10], // 0x860
        pub _: [u8; 0x1], // 0x870
        pub _: [u8; 0x7], // 0x871
    }

    #[repr(C)]
    pub struct CFuncRotating {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x18], // 0x850
        pub _: [u8; 0x18], // 0x868
        pub _: [u8; 0x18], // 0x880
        pub _: [u8; 0xc], // 0x898
        pub _: [u8; 0x4], // 0x8a4
        pub _: [u8; 0x4], // 0x8a8
        pub _: [u8; 0x4], // 0x8ac
        pub _: [u8; 0x4], // 0x8b0
        pub _: [u8; 0x4], // 0x8b4
        pub _: [u8; 0x4], // 0x8b8
        pub _: [u8; 0x4], // 0x8bc
        pub _: [u8; 0x8], // 0x8c0
        pub _: [u8; 0x1], // 0x8c8
        pub _: [u8; 0x17], // 0x8c9
        pub _: [u8; 0xc], // 0x8e0
        pub _: [u8; 0xc], // 0x8ec
        pub _: [u8; 0x4], // 0x8f8
        pub _: [u8; 0xc], // 0x8fc
        pub _: [u8; 0x10], // 0x908
    }

    #[repr(C)]
    pub struct CTimerEntity {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x18], // 0x4a8
        pub _: [u8; 0x18], // 0x4c0
        pub _: [u8; 0x18], // 0x4d8
        pub _: [u8; 0x4], // 0x4f0
        pub _: [u8; 0x4], // 0x4f4
        pub _: [u8; 0x4], // 0x4f8
        pub _: [u8; 0x4], // 0x4fc
        pub _: [u8; 0x4], // 0x500
        pub _: [u8; 0x4], // 0x504
        pub _: [u8; 0x4], // 0x508
        pub _: [u8; 0x4], // 0x50c
        pub _: [u8; 0x4], // 0x510
        pub _: [u8; 0x4], // 0x514
    }

    #[repr(C)]
    pub struct CBtActionMoveTo {
        pub pad_0: [u8; 0x60], // 0x0
        pub _: [u8; 0x8], // 0x60
        pub _: [u8; 0x8], // 0x68
        pub _: [u8; 0x8], // 0x70
        pub _: [u8; 0xc], // 0x78
        pub _: [u8; 0x1], // 0x84
        pub _: [u8; 0x3], // 0x85
        pub _: [u8; 0x8], // 0x88
        pub _: [u8; 0x18], // 0x90
        pub _: [u8; 0x18], // 0xa8
        pub _: [u8; 0x18], // 0xc0
        pub _: [u8; 0x4], // 0xd8
        pub _: [u8; 0x4], // 0xdc
        pub _: [u8; 0x4], // 0xe0
        pub _: [u8; 0x4], // 0xe4
    }

    #[repr(C)]
    pub struct CPlayer_MovementServices_Humanoid {
        pub pad_0: [u8; 0x258], // 0x0
        pub _: [u8; 0x4], // 0x258
        pub _: [u8; 0x4], // 0x25c
        pub _: [u8; 0xc], // 0x260
        pub _: [u8; 0x4], // 0x26c
        pub _: [u8; 0x10], // 0x270
        pub _: [u8; 0x4], // 0x280
        pub _: [u8; 0xc], // 0x284
    }

    #[repr(C)]
    pub struct CPulseCell_IsRequirementValid__Criteria_t {
        pub _: [u8; 0x1], // 0x0
    }

    #[repr(C)]
    pub struct CWeaponG3SG1 {
        pub pad_0: [u8; 0x12a0], // 0x0
    }

    #[repr(C)]
    pub struct CTriggerOnce {
        pub pad_0: [u8; 0x9e0], // 0x0
    }

    #[repr(C)]
    pub struct CSMatchStats_t {
        pub pad_0: [u8; 0x68], // 0x0
        pub _: [u8; 0x4], // 0x68
        pub _: [u8; 0x4], // 0x6c
        pub _: [u8; 0x4], // 0x70
        pub _: [u8; 0x4], // 0x74
        pub _: [u8; 0x4], // 0x78
        pub _: [u8; 0x4], // 0x7c
        pub _: [u8; 0x4], // 0x80
        pub _: [u8; 0x4], // 0x84
        pub _: [u8; 0x4], // 0x88
        pub _: [u8; 0x4], // 0x8c
        pub _: [u8; 0x4], // 0x90
        pub _: [u8; 0x4], // 0x94
        pub _: [u8; 0x4], // 0x98
        pub _: [u8; 0x4], // 0x9c
        pub _: [u8; 0x4], // 0xa0
        pub _: [u8; 0x4], // 0xa4
        pub _: [u8; 0x4], // 0xa8
        pub _: [u8; 0x4], // 0xac
        pub _: [u8; 0x4], // 0xb0
        pub _: [u8; 0x4], // 0xb4
        pub _: [u8; 0x8], // 0xb8
    }

    #[repr(C)]
    pub struct EntityRenderAttribute_t {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x14], // 0x34
    }

    #[repr(C)]
    pub struct CPulseCell_Inflow_ObservableVariableListener {
        pub pad_0: [u8; 0x80], // 0x0
        pub _: [u8; 0x2], // 0x80
        pub _: [u8; 0x6], // 0x82
    }

    #[repr(C)]
    pub struct CFuncMonitor {
        pub pad_0: [u8; 0x870], // 0x0
        pub _: [u8; 0x8], // 0x870
        pub _: [u8; 0x4], // 0x878
        pub _: [u8; 0x1], // 0x87c
        pub _: [u8; 0x3], // 0x87d
        pub _: [u8; 0x8], // 0x880
        pub _: [u8; 0x4], // 0x888
        pub _: [u8; 0x1], // 0x88c
        pub _: [u8; 0x1], // 0x88d
        pub _: [u8; 0x2], // 0x88e
    }

    #[repr(C)]
    pub struct CInfoVisibilityBox {
        pub pad_0: [u8; 0x4ac], // 0x0
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0xc], // 0x4b0
        pub _: [u8; 0x4], // 0x4bc
    }

    #[repr(C)]
    pub struct CGunTarget {
        pub pad_0: [u8; 0x8d0], // 0x0
        pub _: [u8; 0x4], // 0x8d0
        pub _: [u8; 0x4], // 0x8d4
        pub _: [u8; 0x8], // 0x8d8
        pub _: [u8; 0x18], // 0x8e0
    }

    #[repr(C)]
    pub struct CSoundEventConeEntity {
        pub pad_0: [u8; 0x568], // 0x0
        pub _: [u8; 0x4], // 0x568
        pub _: [u8; 0x4], // 0x56c
        pub _: [u8; 0x4], // 0x570
        pub _: [u8; 0x4], // 0x574
        pub _: [u8; 0x8], // 0x578
    }

    #[repr(C)]
    pub struct CSoundOpvarSetOBBEntity {
        pub pad_0: [u8; 0x6a8], // 0x0
    }

    #[repr(C)]
    pub struct CDecoyProjectile {
        pub pad_0: [u8; 0xb58], // 0x0
        pub _: [u8; 0x4], // 0xb58
        pub _: [u8; 0x4], // 0xb5c
        pub _: [u8; 0x10], // 0xb60
        pub _: [u8; 0x10], // 0xb70
    }

    #[repr(C)]
    pub struct CPrecipitationBlocker {
        pub pad_0: [u8; 0x850], // 0x0
    }

    #[repr(C)]
    pub struct CSoundOpvarSetPathCornerEntity {
        pub pad_0: [u8; 0x658], // 0x0
        pub _: [u8; 0x4], // 0x658
        pub _: [u8; 0x4], // 0x65c
        pub _: [u8; 0x8], // 0x660
        pub _: [u8; 0x8], // 0x668
    }

    #[repr(C)]
    pub struct CPointClientCommand {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CCSGO_RushIntroTerroristPosition {
        pub pad_0: [u8; 0x1468], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_ApplyParent__CursorState_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct CHostageRescueZone {
        pub pad_0: [u8; 0x9e8], // 0x0
    }

    #[repr(C)]
    pub struct CWorld {
        pub pad_0: [u8; 0x850], // 0x0
    }

    #[repr(C)]
    pub struct CPathMoverEntitySpawner {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x20], // 0x4b0
        pub _: [u8; 0x10], // 0x4d0
        pub _: [u8; 0x10], // 0x4e0
        pub _: [u8; 0x4], // 0x4f0
        pub _: [u8; 0x4], // 0x4f4
        pub _: [u8; 0x4], // 0x4f8
        pub _: [u8; 0x4], // 0x4fc
        pub _: [u8; 0x20], // 0x500
        pub _: [u8; 0x4], // 0x520
        pub _: [u8; 0x4], // 0x524
        pub _: [u8; 0x4], // 0x528
        pub _: [u8; 0x1], // 0x52c
        pub _: [u8; 0x3], // 0x52d
        pub _: [u8; 0x18], // 0x530
        pub _: [u8; 0x18], // 0x548
        pub _: [u8; 0x18], // 0x560
        pub _: [u8; 0x8], // 0x578
        pub _: [u8; 0x8], // 0x580
        pub _: [u8; 0x14], // 0x588
        pub _: [u8; 0xc], // 0x59c
        pub _: [u8; 0x8], // 0x5a8
    }

    #[repr(C)]
    pub struct CModelState {
        pub pad_0: [u8; 0xa0], // 0x0
        pub _: [u8; 0x8], // 0xa0
        pub _: [u8; 0x38], // 0xa8
        pub _: [u8; 0x8], // 0xe0
        pub _: [u8; 0x4], // 0xe8
        pub _: [u8; 0x4], // 0xec
        pub _: [u8; 0x4], // 0xf0
        pub _: [u8; 0x1], // 0xf4
        pub _: [u8; 0xeb], // 0xf5
        pub _: [u8; 0x8], // 0x1e0
        pub _: [u8; 0x50], // 0x1e8
        pub _: [u8; 0x4a], // 0x238
        pub _: [u8; 0x1], // 0x282
        pub _: [u8; 0x1], // 0x283
        pub _: [u8; 0xc], // 0x284
    }

    #[repr(C)]
    pub struct CBaseModelEntity__BodyGroupRequest_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x2], // 0x14
        pub _: [u8; 0x2], // 0x16
    }

    #[repr(C)]
    pub struct CPulseCell_LerpCameraSettings__CursorState_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x10], // 0xc
        pub _: [u8; 0x10], // 0x1c
    }

    #[repr(C)]
    pub struct CPulseCell_Outflow_CycleOrdered {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x18], // 0x48
    }

    #[repr(C)]
    pub struct CWeaponGlock {
        pub pad_0: [u8; 0x12a0], // 0x0
    }

    #[repr(C)]
    pub struct CHEGrenadeProjectile {
        pub pad_0: [u8; 0xb40], // 0x0
    }

    #[repr(C)]
    pub struct CTriggerGravity {
        pub pad_0: [u8; 0x9c8], // 0x0
    }

    #[repr(C)]
    pub struct CCollisionProperty {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x30], // 0x10
        pub _: [u8; 0xc], // 0x40
        pub _: [u8; 0xe], // 0x4c
        pub _: [u8; 0x1], // 0x5a
        pub _: [u8; 0x1], // 0x5b
        pub _: [u8; 0x1], // 0x5c
        pub _: [u8; 0x1], // 0x5d
        pub _: [u8; 0x1], // 0x5e
        pub _: [u8; 0x1], // 0x5f
        pub _: [u8; 0x4], // 0x60
        pub _: [u8; 0xc], // 0x64
        pub _: [u8; 0xc], // 0x70
        pub _: [u8; 0xc], // 0x7c
        pub _: [u8; 0xc], // 0x88
        pub _: [u8; 0xc], // 0x94
        pub _: [u8; 0xc], // 0xa0
        pub _: [u8; 0xc], // 0xac
    }

    #[repr(C)]
    pub struct CWeaponGalilAR {
        pub pad_0: [u8; 0x12a0], // 0x0
    }

    #[repr(C)]
    pub struct CFilterMassGreater {
        pub pad_0: [u8; 0x4e0], // 0x0
        pub _: [u8; 0x8], // 0x4e0
    }

    #[repr(C)]
    pub struct CWeaponMP7 {
        pub pad_0: [u8; 0x12a0], // 0x0
    }

    #[repr(C)]
    pub struct CCSWeaponBaseGun {
        pub pad_0: [u8; 0x1280], // 0x0
        pub _: [u8; 0x4], // 0x1280
        pub _: [u8; 0xc], // 0x1284
        pub _: [u8; 0x4], // 0x1290
        pub _: [u8; 0x1], // 0x1294
        pub _: [u8; 0x3], // 0x1295
        pub _: [u8; 0x4], // 0x1298
        pub _: [u8; 0x1], // 0x129c
        pub _: [u8; 0x1], // 0x129d
        pub _: [u8; 0x1], // 0x129e
        pub _: [u8; 0x1], // 0x129f
    }

    #[repr(C)]
    pub struct CEnableMotionFixup {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CLogicActiveAutosave {
        pub pad_0: [u8; 0x4b8], // 0x0
        pub _: [u8; 0x4], // 0x4b8
        pub _: [u8; 0x4], // 0x4bc
        pub _: [u8; 0x4], // 0x4c0
        pub _: [u8; 0x4], // 0x4c4
    }

    #[repr(C)]
    pub struct CMathCounter {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x1], // 0x4b0
        pub _: [u8; 0x1], // 0x4b1
        pub _: [u8; 0x6], // 0x4b2
        pub _: [u8; 0x20], // 0x4b8
        pub _: [u8; 0x20], // 0x4d8
        pub _: [u8; 0x18], // 0x4f8
        pub _: [u8; 0x18], // 0x510
        pub _: [u8; 0x18], // 0x528
        pub _: [u8; 0x18], // 0x540
    }

    #[repr(C)]
    pub struct CCSCustomPlayerCamera {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x4], // 0x4b4
        pub _: [u8; 0xc], // 0x4b8
        pub _: [u8; 0xc], // 0x4c4
        pub _: [u8; 0x4], // 0x4d0
        pub _: [u8; 0xc], // 0x4d4
    }

    #[repr(C)]
    pub struct CCSGameModeRules_ArmsRace {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x58], // 0x30
    }

    #[repr(C)]
    pub struct CLogicPlayerProxyBase {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x18], // 0x4a8
        pub _: [u8; 0x18], // 0x4c0
        pub _: [u8; 0x18], // 0x4d8
        pub _: [u8; 0x20], // 0x4f0
        pub _: [u8; 0x8], // 0x510
    }

    #[repr(C)]
    pub struct CAttributeContainer {
        pub pad_0: [u8; 0x50], // 0x0
        pub _: [u8; 0x3e8], // 0x50
    }

    #[repr(C)]
    pub struct CCSPlace {
        pub pad_0: [u8; 0x868], // 0x0
        pub _: [u8; 0x8], // 0x868
    }

    #[repr(C)]
    pub struct CPulseCell_ApplyParent {
        pub pad_0: [u8; 0xd8], // 0x0
    }

    #[repr(C)]
    pub struct PulseSelectorOutflowList_t {
        pub _: [u8; 0x18], // 0x0
    }

    #[repr(C)]
    pub struct CFilterContext {
        pub pad_0: [u8; 0x4e0], // 0x0
        pub _: [u8; 0x8], // 0x4e0
    }

    #[repr(C)]
    pub struct CLightEnvironmentEntity {
        pub pad_0: [u8; 0x858], // 0x0
    }

    #[repr(C)]
    pub struct CEnvDecal {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x8], // 0x850
        pub _: [u8; 0x4], // 0x858
        pub _: [u8; 0x4], // 0x85c
        pub _: [u8; 0x4], // 0x860
        pub _: [u8; 0x4], // 0x864
        pub _: [u8; 0x1], // 0x868
        pub _: [u8; 0x1], // 0x869
        pub _: [u8; 0x2], // 0x86a
        pub _: [u8; 0x4], // 0x86c
    }

    #[repr(C)]
    pub struct CEnvVolumetricFogVolume {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0xc], // 0x4ac
        pub _: [u8; 0xc], // 0x4b8
        pub _: [u8; 0x1], // 0x4c4
        pub _: [u8; 0x3], // 0x4c5
        pub _: [u8; 0x4], // 0x4c8
        pub _: [u8; 0x4], // 0x4cc
        pub _: [u8; 0x4], // 0x4d0
        pub _: [u8; 0x4], // 0x4d4
        pub _: [u8; 0x4], // 0x4d8
        pub _: [u8; 0x4], // 0x4dc
        pub _: [u8; 0x4], // 0x4e0
        pub _: [u8; 0x4], // 0x4e4
        pub _: [u8; 0x4], // 0x4e8
        pub _: [u8; 0x1], // 0x4ec
        pub _: [u8; 0x1], // 0x4ed
        pub _: [u8; 0x1], // 0x4ee
        pub _: [u8; 0x1], // 0x4ef
    }

    #[repr(C)]
    pub struct CServerOnlyEntity {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_PlaySequence__CursorState_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CBodyComponentSkeletonInstance {
        pub pad_0: [u8; 0x80], // 0x0
        pub _: [u8; 0x460], // 0x80
    }

    #[repr(C)]
    pub struct CItemGeneric {
        pub pad_0: [u8; 0xaf4], // 0x0
        pub _: [u8; 0x1], // 0xaf4
        pub _: [u8; 0x3], // 0xaf5
        pub _: [u8; 0x4], // 0xaf8
        pub _: [u8; 0x4], // 0xafc
        pub _: [u8; 0x4], // 0xb00
        pub _: [u8; 0x1], // 0xb04
        pub _: [u8; 0x3], // 0xb05
        pub _: [u8; 0x8], // 0xb08
        pub _: [u8; 0x8], // 0xb10
        pub _: [u8; 0x8], // 0xb18
        pub _: [u8; 0x8], // 0xb20
        pub _: [u8; 0x8], // 0xb28
        pub _: [u8; 0x8], // 0xb30
        pub _: [u8; 0x8], // 0xb38
        pub _: [u8; 0x8], // 0xb40
        pub _: [u8; 0x8], // 0xb48
        pub _: [u8; 0x8], // 0xb50
        pub _: [u8; 0x8], // 0xb58
        pub _: [u8; 0x8], // 0xb60
        pub _: [u8; 0x18], // 0xb68
        pub _: [u8; 0x18], // 0xb80
        pub _: [u8; 0x18], // 0xb98
        pub _: [u8; 0x18], // 0xbb0
        pub _: [u8; 0x18], // 0xbc8
        pub _: [u8; 0x8], // 0xbe0
        pub _: [u8; 0x4], // 0xbe8
        pub _: [u8; 0x4], // 0xbec
        pub _: [u8; 0x8], // 0xbf0
        pub _: [u8; 0x4], // 0xbf8
        pub _: [u8; 0x4], // 0xbfc
        pub _: [u8; 0x4], // 0xc00
        pub _: [u8; 0xc], // 0xc04
    }

    #[repr(C)]
    pub struct CPointValueRemapper {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x1], // 0x4a8
        pub _: [u8; 0x3], // 0x4a9
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x8], // 0x4b8
        pub _: [u8; 0x4], // 0x4c0
        pub _: [u8; 0x4], // 0x4c4
        pub _: [u8; 0x4], // 0x4c8
        pub _: [u8; 0x4], // 0x4cc
        pub _: [u8; 0x4], // 0x4d0
        pub _: [u8; 0x4], // 0x4d4
        pub _: [u8; 0x8], // 0x4d8
        pub _: [u8; 0x8], // 0x4e0
        pub _: [u8; 0x8], // 0x4e8
        pub _: [u8; 0x8], // 0x4f0
        pub _: [u8; 0x8], // 0x4f8
        pub _: [u8; 0x18], // 0x500
        pub _: [u8; 0x4], // 0x518
        pub _: [u8; 0x4], // 0x51c
        pub _: [u8; 0x4], // 0x520
        pub _: [u8; 0x4], // 0x524
        pub _: [u8; 0x4], // 0x528
        pub _: [u8; 0x4], // 0x52c
        pub _: [u8; 0x4], // 0x530
        pub _: [u8; 0x4], // 0x534
        pub _: [u8; 0x1], // 0x538
        pub _: [u8; 0x3], // 0x539
        pub _: [u8; 0x4], // 0x53c
        pub _: [u8; 0x4], // 0x540
        pub _: [u8; 0xc], // 0x544
        pub _: [u8; 0x4], // 0x550
        pub _: [u8; 0x4], // 0x554
        pub _: [u8; 0x8], // 0x558
        pub _: [u8; 0x8], // 0x560
        pub _: [u8; 0x8], // 0x568
        pub _: [u8; 0x8], // 0x570
        pub _: [u8; 0x20], // 0x578
        pub _: [u8; 0x20], // 0x598
        pub _: [u8; 0x20], // 0x5b8
        pub _: [u8; 0x18], // 0x5d8
        pub _: [u8; 0x18], // 0x5f0
        pub _: [u8; 0x18], // 0x608
        pub _: [u8; 0x18], // 0x620
        pub _: [u8; 0x18], // 0x638
    }

    #[repr(C)]
    pub struct CBtNodeConditionInactive {
        pub pad_0: [u8; 0x78], // 0x0
        pub _: [u8; 0x4], // 0x78
        pub _: [u8; 0x4], // 0x7c
        pub _: [u8; 0x18], // 0x80
    }

    #[repr(C)]
    pub struct CCSGO_TeamIntroCounterTerroristPosition {
        pub pad_0: [u8; 0x1468], // 0x0
    }

    #[repr(C)]
    pub struct CRagdollProp {
        pub pad_0: [u8; 0xa50], // 0x0
        pub _: [u8; 0x40], // 0xa50
        pub _: [u8; 0x50], // 0xa90
        pub _: [u8; 0x4], // 0xae0
        pub _: [u8; 0x4], // 0xae4
        pub _: [u8; 0x8], // 0xae8
        pub _: [u8; 0x18], // 0xaf0
        pub _: [u8; 0x18], // 0xb08
        pub _: [u8; 0x18], // 0xb20
        pub _: [u8; 0x4], // 0xb38
        pub _: [u8; 0x1], // 0xb3c
        pub _: [u8; 0x3], // 0xb3d
        pub _: [u8; 0x4], // 0xb40
        pub _: [u8; 0x1], // 0xb44
        pub _: [u8; 0x1], // 0xb45
        pub _: [u8; 0x2], // 0xb46
        pub _: [u8; 0x4], // 0xb48
        pub _: [u8; 0x4], // 0xb4c
        pub _: [u8; 0x4], // 0xb50
        pub _: [u8; 0x4], // 0xb54
        pub _: [u8; 0x4], // 0xb58
        pub _: [u8; 0x4], // 0xb5c
        pub _: [u8; 0xc], // 0xb60
        pub _: [u8; 0x4], // 0xb6c
        pub _: [u8; 0x8], // 0xb70
        pub _: [u8; 0x8], // 0xb78
        pub _: [u8; 0x8], // 0xb80
        pub _: [u8; 0x1], // 0xb88
        pub _: [u8; 0x3], // 0xb89
        pub _: [u8; 0x4], // 0xb8c
        pub _: [u8; 0x8], // 0xb90
        pub _: [u8; 0x18], // 0xb98
        pub _: [u8; 0x18], // 0xbb0
        pub _: [u8; 0x18], // 0xbc8
        pub _: [u8; 0x20], // 0xbe0
    }

    #[repr(C)]
    pub struct CScriptComponent {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x8], // 0x30
    }

    #[repr(C)]
    pub struct CFuncTrain {
        pub pad_0: [u8; 0x8f8], // 0x0
        pub _: [u8; 0x4], // 0x8f8
        pub _: [u8; 0x4], // 0x8fc
        pub _: [u8; 0x4], // 0x900
        pub _: [u8; 0x4], // 0x904
        pub _: [u8; 0x8], // 0x908
        pub _: [u8; 0x8], // 0x910
        pub _: [u8; 0x8], // 0x918
    }

    #[repr(C)]
    pub struct CAI_ChangeHintGroup {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x8], // 0x4b8
        pub _: [u8; 0x8], // 0x4c0
    }

    #[repr(C)]
    pub struct CCSPlayer_BuyServices {
        pub pad_0: [u8; 0xd0], // 0x0
        pub _: [u8; 0x88], // 0xd0
    }

    #[repr(C)]
    pub struct CWeaponAug {
        pub pad_0: [u8; 0x12a0], // 0x0
    }

    #[repr(C)]
    pub struct CPhysHinge {
        pub pad_0: [u8; 0x510], // 0x0
        pub _: [u8; 0x98], // 0x510
        pub _: [u8; 0x18], // 0x5a8
        pub _: [u8; 0x18], // 0x5c0
        pub _: [u8; 0x1], // 0x5d8
        pub _: [u8; 0x3], // 0x5d9
        pub _: [u8; 0x40], // 0x5dc
        pub _: [u8; 0x4], // 0x61c
        pub _: [u8; 0x4], // 0x620
        pub _: [u8; 0x4], // 0x624
        pub _: [u8; 0x4], // 0x628
        pub _: [u8; 0x4], // 0x62c
        pub _: [u8; 0x4], // 0x630
        pub _: [u8; 0x4], // 0x634
        pub _: [u8; 0x4], // 0x638
        pub _: [u8; 0x4], // 0x63c
        pub _: [u8; 0x4], // 0x640
        pub _: [u8; 0x4], // 0x644
        pub _: [u8; 0x18], // 0x648
        pub _: [u8; 0x18], // 0x660
    }

    #[repr(C)]
    pub struct CBuyZone {
        pub pad_0: [u8; 0x9c8], // 0x0
        pub _: [u8; 0x8], // 0x9c8
    }

    #[repr(C)]
    pub struct CInfoChoreoAnchor {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x18], // 0x4a8
        pub _: [u8; 0x18], // 0x4c0
    }

    #[repr(C)]
    pub struct CWeaponSSG08 {
        pub pad_0: [u8; 0x12a0], // 0x0
    }

    #[repr(C)]
    pub struct CInfoWorldLayer {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x18], // 0x4a8
        pub _: [u8; 0x8], // 0x4c0
        pub _: [u8; 0x8], // 0x4c8
        pub _: [u8; 0x1], // 0x4d0
        pub _: [u8; 0x1], // 0x4d1
        pub _: [u8; 0x2], // 0x4d2
        pub _: [u8; 0x4], // 0x4d4
    }

    #[repr(C)]
    pub struct CBodyComponentBaseModelEntity {
        pub pad_0: [u8; 0x4e0], // 0x0
    }

    #[repr(C)]
    pub struct CLogicProximity {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CPointGiveAmmo {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
    }

    #[repr(C)]
    pub struct CCSGO_EndOfMatchLineupStart {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct FilterDamageType {
        pub pad_0: [u8; 0x4e0], // 0x0
        pub _: [u8; 0x8], // 0x4e0
    }

    #[repr(C)]
    pub struct CPointCamera {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x4], // 0x4b4
        pub _: [u8; 0x4], // 0x4b8
        pub _: [u8; 0x4], // 0x4bc
        pub _: [u8; 0x4], // 0x4c0
        pub _: [u8; 0x1], // 0x4c4
        pub _: [u8; 0x3], // 0x4c5
        pub _: [u8; 0x4], // 0x4c8
        pub _: [u8; 0x4], // 0x4cc
        pub _: [u8; 0x4], // 0x4d0
        pub _: [u8; 0x4], // 0x4d4
        pub _: [u8; 0x4], // 0x4d8
        pub _: [u8; 0x1], // 0x4dc
        pub _: [u8; 0x1], // 0x4dd
        pub _: [u8; 0x2], // 0x4de
        pub _: [u8; 0x4], // 0x4e0
        pub _: [u8; 0x4], // 0x4e4
        pub _: [u8; 0x4], // 0x4e8
        pub _: [u8; 0x4], // 0x4ec
        pub _: [u8; 0x4], // 0x4f0
        pub _: [u8; 0x4], // 0x4f4
        pub _: [u8; 0x4], // 0x4f8
        pub _: [u8; 0x4], // 0x4fc
        pub _: [u8; 0x8], // 0x500
    }

    #[repr(C)]
    pub struct CAttributeList {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x68], // 0x8
        pub _: [u8; 0x8], // 0x70
    }

    #[repr(C)]
    pub struct CPulseCell_Inflow_Wait {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x48], // 0xd8
    }

    #[repr(C)]
    pub struct CFilterProximity {
        pub pad_0: [u8; 0x4e0], // 0x0
        pub _: [u8; 0x8], // 0x4e0
    }

    #[repr(C)]
    pub struct CCS2WeaponGraphController {
        pub pad_0: [u8; 0xc0], // 0x0
        pub _: [u8; 0x18], // 0xc0
        pub _: [u8; 0x18], // 0xd8
        pub _: [u8; 0x18], // 0xf0
        pub _: [u8; 0x18], // 0x108
        pub _: [u8; 0x18], // 0x120
        pub _: [u8; 0x18], // 0x138
        pub _: [u8; 0x18], // 0x150
        pub _: [u8; 0x18], // 0x168
        pub _: [u8; 0x18], // 0x180
        pub _: [u8; 0x18], // 0x198
        pub _: [u8; 0x18], // 0x1b0
        pub _: [u8; 0x18], // 0x1c8
        pub _: [u8; 0x18], // 0x1e0
        pub _: [u8; 0x18], // 0x1f8
        pub _: [u8; 0x18], // 0x210
        pub _: [u8; 0x18], // 0x228
        pub _: [u8; 0x18], // 0x240
        pub _: [u8; 0x18], // 0x258
        pub _: [u8; 0x18], // 0x270
        pub _: [u8; 0x338], // 0x288
    }

    #[repr(C)]
    pub struct CEffectData {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0xc], // 0x8
        pub _: [u8; 0xc], // 0x14
        pub _: [u8; 0xc], // 0x20
        pub _: [u8; 0xc], // 0x2c
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x4], // 0x44
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x8], // 0x50
        pub _: [u8; 0x4], // 0x58
        pub _: [u8; 0x2], // 0x5c
        pub _: [u8; 0x2], // 0x5e
        pub _: [u8; 0x2], // 0x60
        pub _: [u8; 0x1], // 0x62
        pub _: [u8; 0x1], // 0x63
        pub _: [u8; 0x4], // 0x64
        pub _: [u8; 0x4], // 0x68
        pub _: [u8; 0x4], // 0x6c
    }

    #[repr(C)]
    pub struct CEntityDissolve {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x4], // 0x850
        pub _: [u8; 0x4], // 0x854
        pub _: [u8; 0x4], // 0x858
        pub _: [u8; 0x4], // 0x85c
        pub _: [u8; 0x4], // 0x860
        pub _: [u8; 0x4], // 0x864
        pub _: [u8; 0x4], // 0x868
        pub _: [u8; 0x4], // 0x86c
        pub _: [u8; 0xc], // 0x870
        pub _: [u8; 0x4], // 0x87c
    }

    #[repr(C)]
    pub struct CCSGameRules {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x1], // 0xd8
        pub _: [u8; 0x3], // 0xd9
        pub _: [u8; 0x4], // 0xdc
        pub _: [u8; 0x4], // 0xe0
        pub _: [u8; 0x1], // 0xe4
        pub _: [u8; 0x3], // 0xe5
        pub _: [u8; 0x4], // 0xe8
        pub _: [u8; 0x4], // 0xec
        pub _: [u8; 0x4], // 0xf0
        pub _: [u8; 0x4], // 0xf4
        pub _: [u8; 0x1], // 0xf8
        pub _: [u8; 0x3], // 0xf9
        pub _: [u8; 0x4], // 0xfc
        pub _: [u8; 0x4], // 0x100
        pub _: [u8; 0x4], // 0x104
        pub _: [u8; 0x4], // 0x108
        pub _: [u8; 0x4], // 0x10c
        pub _: [u8; 0x4], // 0x110
        pub _: [u8; 0x4], // 0x114
        pub _: [u8; 0x4], // 0x118
        pub _: [u8; 0x4], // 0x11c
        pub _: [u8; 0x4], // 0x120
        pub _: [u8; 0x4], // 0x124
        pub _: [u8; 0x4], // 0x128
        pub _: [u8; 0x4], // 0x12c
        pub _: [u8; 0x1], // 0x130
        pub _: [u8; 0x1], // 0x131
        pub _: [u8; 0x1], // 0x132
        pub _: [u8; 0x1], // 0x133
        pub _: [u8; 0x4], // 0x134
        pub _: [u8; 0x4], // 0x138
        pub _: [u8; 0x1], // 0x13c
        pub _: [u8; 0x1], // 0x13d
        pub _: [u8; 0x2], // 0x13e
        pub _: [u8; 0x4], // 0x140
        pub _: [u8; 0x4], // 0x144
        pub _: [u8; 0x4], // 0x148
        pub _: [u8; 0x4], // 0x14c
        pub _: [u8; 0x200], // 0x150
        pub _: [u8; 0x200], // 0x350
        pub _: [u8; 0x200], // 0x550
        pub _: [u8; 0x200], // 0x750
        pub _: [u8; 0x4], // 0x950
        pub _: [u8; 0x4], // 0x954
        pub _: [u8; 0x4], // 0x958
        pub _: [u8; 0x1], // 0x95c
        pub _: [u8; 0x1], // 0x95d
        pub _: [u8; 0x1], // 0x95e
        pub _: [u8; 0x1], // 0x95f
        pub _: [u8; 0xc8], // 0x960
        pub _: [u8; 0x10], // 0xa28
        pub _: [u8; 0x4], // 0xa38
        pub _: [u8; 0x4], // 0xa3c
        pub _: [u8; 0x4], // 0xa40
        pub _: [u8; 0x4], // 0xa44
        pub _: [u8; 0x4], // 0xa48
        pub _: [u8; 0x1], // 0xa4c
        pub _: [u8; 0x3], // 0xa4d
        pub _: [u8; 0x78], // 0xa50
        pub _: [u8; 0x78], // 0xac8
        pub _: [u8; 0x78], // 0xb40
        pub _: [u8; 0x80], // 0xbb8
        pub _: [u8; 0x4], // 0xc38
        pub _: [u8; 0x80], // 0xc3c
        pub _: [u8; 0xc], // 0xcbc
        pub _: [u8; 0xc], // 0xcc8
        pub _: [u8; 0x24], // 0xcd4
        pub _: [u8; 0x8], // 0xcf8
        pub _: [u8; 0x28], // 0xd00
        pub _: [u8; 0x28], // 0xd28
        pub _: [u8; 0x4], // 0xd50
        pub _: [u8; 0x4], // 0xd54
        pub _: [u8; 0x20], // 0xd58
        pub _: [u8; 0x4], // 0xd78
        pub _: [u8; 0x4], // 0xd7c
        pub _: [u8; 0x4], // 0xd80
        pub _: [u8; 0x4], // 0xd84
        pub _: [u8; 0x4], // 0xd88
        pub _: [u8; 0x4], // 0xd8c
        pub _: [u8; 0x1], // 0xd90
        pub _: [u8; 0x3], // 0xd91
        pub _: [u8; 0x4], // 0xd94
        pub _: [u8; 0x4], // 0xd98
        pub _: [u8; 0x4], // 0xd9c
        pub _: [u8; 0x8], // 0xda0
        pub _: [u8; 0x18], // 0xda8
        pub _: [u8; 0x4], // 0xdc0
        pub _: [u8; 0x1], // 0xdc4
        pub _: [u8; 0x1], // 0xdc5
        pub _: [u8; 0x1], // 0xdc6
        pub _: [u8; 0x1], // 0xdc7
        pub _: [u8; 0x8], // 0xdc8
        pub _: [u8; 0x1c], // 0xdd0
        pub _: [u8; 0x4], // 0xdec
        pub _: [u8; 0x4], // 0xdf0
        pub _: [u8; 0x4], // 0xdf4
        pub _: [u8; 0x8], // 0xdf8
        pub _: [u8; 0x4], // 0xe00
        pub _: [u8; 0x4], // 0xe04
        pub _: [u8; 0x4], // 0xe08
        pub _: [u8; 0xc], // 0xe0c
        pub _: [u8; 0x4], // 0xe18
        pub _: [u8; 0x4], // 0xe1c
        pub _: [u8; 0x4], // 0xe20
        pub _: [u8; 0x1], // 0xe24
        pub _: [u8; 0x33], // 0xe25
        pub _: [u8; 0x4], // 0xe58
        pub _: [u8; 0x1c], // 0xe5c
        pub _: [u8; 0x4], // 0xe78
        pub _: [u8; 0x4], // 0xe7c
        pub _: [u8; 0x4], // 0xe80
        pub _: [u8; 0x4], // 0xe84
        pub _: [u8; 0x4], // 0xe88
        pub _: [u8; 0x4], // 0xe8c
        pub _: [u8; 0x4], // 0xe90
        pub _: [u8; 0x4], // 0xe94
        pub _: [u8; 0x4], // 0xe98
        pub _: [u8; 0x4], // 0xe9c
        pub _: [u8; 0x4], // 0xea0
        pub _: [u8; 0x4], // 0xea4
        pub _: [u8; 0x8], // 0xea8
        pub _: [u8; 0x4], // 0xeb0
        pub _: [u8; 0x4], // 0xeb4
        pub _: [u8; 0x4], // 0xeb8
        pub _: [u8; 0x1], // 0xebc
        pub _: [u8; 0x1], // 0xebd
        pub _: [u8; 0x1], // 0xebe
        pub _: [u8; 0x5], // 0xebf
        pub _: [u8; 0x8], // 0xec4
        pub _: [u8; 0x1c], // 0xecc
        pub _: [u8; 0x1], // 0xee8
        pub _: [u8; 0xf], // 0xee9
        pub _: [u8; 0x1], // 0xef8
        pub _: [u8; 0x3], // 0xef9
        pub _: [u8; 0x4], // 0xefc
        pub _: [u8; 0x4], // 0xf00
        pub _: [u8; 0x4], // 0xf04
        pub _: [u8; 0x1], // 0xf08
        pub _: [u8; 0x1], // 0xf09
        pub _: [u8; 0x4e], // 0xf0a
        pub _: [u8; 0x10], // 0xf58
        pub _: [u8; 0x18], // 0xf68
        pub _: [u8; 0x18], // 0xf80
        pub _: [u8; 0x4], // 0xf98
        pub _: [u8; 0x4], // 0xf9c
        pub _: [u8; 0x4], // 0xfa0
        pub _: [u8; 0x4], // 0xfa4
        pub _: [u8; 0x8], // 0xfa8
        pub _: [u8; 0x18], // 0xfb0
        pub _: [u8; 0x18], // 0xfc8
        pub _: [u8; 0x4], // 0xfe0
        pub _: [u8; 0x3c], // 0xfe4
        pub _: [u8; 0x1], // 0x1020
        pub _: [u8; 0x3], // 0x1021
        pub _: [u8; 0x4], // 0x1024
        pub _: [u8; 0x4], // 0x1028
        pub _: [u8; 0x4], // 0x102c
        pub _: [u8; 0x4], // 0x1030
        pub _: [u8; 0x4c], // 0x1034
        pub _: [u8; 0x4], // 0x1080
        pub _: [u8; 0x1], // 0x1084
        pub _: [u8; 0x1b], // 0x1085
        pub _: [u8; 0x8], // 0x10a0
        pub _: [u8; 0x98], // 0x10a8
        pub _: [u8; 0x8], // 0x1140
        pub _: [u8; 0x1f0], // 0x1148
        pub _: [u8; 0x60], // 0x1338
        pub _: [u8; 0x28], // 0x1398
        pub _: [u8; 0x4], // 0x13c0
        pub _: [u8; 0x4], // 0x13c4
        pub _: [u8; 0x4], // 0x13c8
        pub _: [u8; 0x4], // 0x13cc
        pub _: [u8; 0x4], // 0x13d0
        pub _: [u8; 0x4], // 0x13d4
        pub _: [u8; 0x4], // 0x13d8
        pub _: [u8; 0x4], // 0x13dc
        pub _: [u8; 0x4], // 0x13e0
        pub _: [u8; 0x4], // 0x13e4
        pub _: [u8; 0x8], // 0x13e8
        pub _: [u8; 0x4], // 0x13f0
        pub _: [u8; 0x4], // 0x13f4
        pub _: [u8; 0x4], // 0x13f8
        pub _: [u8; 0x4], // 0x13fc
        pub _: [u8; 0x8], // 0x1400
        pub _: [u8; 0x4], // 0x1408
        pub _: [u8; 0x4], // 0x140c
        pub _: [u8; 0x4], // 0x1410
        pub _: [u8; 0x4], // 0x1414
        pub _: [u8; 0x4], // 0x1418
        pub _: [u8; 0x400c], // 0x141c
        pub _: [u8; 0xc028], // 0x5428
    }

    #[repr(C)]
    pub struct CPulseCell_ApplyEntityFlags__CursorState_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct CPulseCell_Outflow_CycleShuffled {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x18], // 0x48
    }

    #[repr(C)]
    pub struct CBaseCSGrenadeProjectile {
        pub pad_0: [u8; 0xad0], // 0x0
        pub _: [u8; 0xc], // 0xad0
        pub _: [u8; 0xc], // 0xadc
        pub _: [u8; 0x8], // 0xae8
        pub _: [u8; 0x8], // 0xaf0
        pub _: [u8; 0x4], // 0xaf8
        pub _: [u8; 0xc], // 0xafc
        pub _: [u8; 0x4], // 0xb08
        pub _: [u8; 0x1], // 0xb0c
        pub _: [u8; 0x1], // 0xb0d
        pub _: [u8; 0x2], // 0xb0e
        pub _: [u8; 0xc], // 0xb10
        pub _: [u8; 0x4], // 0xb1c
        pub _: [u8; 0xc], // 0xb20
        pub _: [u8; 0xc], // 0xb2c
        pub _: [u8; 0x4], // 0xb38
        pub _: [u8; 0x4], // 0xb3c
    }

    #[repr(C)]
    pub struct CPhysConstraint {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x8], // 0x4b8
        pub _: [u8; 0x4], // 0x4c0
        pub _: [u8; 0x4], // 0x4c4
        pub _: [u8; 0x8], // 0x4c8
        pub _: [u8; 0x8], // 0x4d0
        pub _: [u8; 0x8], // 0x4d8
        pub _: [u8; 0x4], // 0x4e0
        pub _: [u8; 0x4], // 0x4e4
        pub _: [u8; 0x4], // 0x4e8
        pub _: [u8; 0x1], // 0x4ec
        pub _: [u8; 0x3], // 0x4ed
        pub _: [u8; 0x18], // 0x4f0
    }

    #[repr(C)]
    pub struct CLogicAchievement {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x18], // 0x4b8
    }

    #[repr(C)]
    pub struct CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x2], // 0x8
        pub _: [u8; 0x6], // 0xa
    }

    #[repr(C)]
    pub struct CLightComponent {
        pub pad_0: [u8; 0x38], // 0x0
        pub _: [u8; 0x40], // 0x38
        pub _: [u8; 0x4], // 0x78
        pub _: [u8; 0x4], // 0x7c
        pub _: [u8; 0x4], // 0x80
        pub _: [u8; 0x4], // 0x84
        pub _: [u8; 0x4], // 0x88
        pub _: [u8; 0x4], // 0x8c
        pub _: [u8; 0x4], // 0x90
        pub _: [u8; 0x4], // 0x94
        pub _: [u8; 0x4], // 0x98
        pub _: [u8; 0x4], // 0x9c
        pub _: [u8; 0x4], // 0xa0
        pub _: [u8; 0x4], // 0xa4
        pub _: [u8; 0x8], // 0xa8
        pub _: [u8; 0x4], // 0xb0
        pub _: [u8; 0x4], // 0xb4
        pub _: [u8; 0x4], // 0xb8
        pub _: [u8; 0x4], // 0xbc
        pub _: [u8; 0x4], // 0xc0
        pub _: [u8; 0x4], // 0xc4
        pub _: [u8; 0x4], // 0xc8
        pub _: [u8; 0x4], // 0xcc
        pub _: [u8; 0x4], // 0xd0
        pub _: [u8; 0x4], // 0xd4
        pub _: [u8; 0x8], // 0xd8
        pub _: [u8; 0x4], // 0xe0
        pub _: [u8; 0x4], // 0xe4
        pub _: [u8; 0x4], // 0xe8
        pub _: [u8; 0x4], // 0xec
        pub _: [u8; 0x4], // 0xf0
        pub _: [u8; 0x4], // 0xf4
        pub _: [u8; 0x4], // 0xf8
        pub _: [u8; 0x4], // 0xfc
        pub _: [u8; 0x4], // 0x100
        pub _: [u8; 0x4], // 0x104
        pub _: [u8; 0x4], // 0x108
        pub _: [u8; 0x4], // 0x10c
        pub _: [u8; 0x4], // 0x110
        pub _: [u8; 0x4], // 0x114
        pub _: [u8; 0x4], // 0x118
        pub _: [u8; 0x4], // 0x11c
        pub _: [u8; 0x1], // 0x120
        pub _: [u8; 0x3], // 0x121
        pub _: [u8; 0x4], // 0x124
        pub _: [u8; 0x4], // 0x128
        pub _: [u8; 0x4], // 0x12c
        pub _: [u8; 0x4], // 0x130
        pub _: [u8; 0x4], // 0x134
        pub _: [u8; 0x4], // 0x138
        pub _: [u8; 0x4], // 0x13c
        pub _: [u8; 0x1], // 0x140
        pub _: [u8; 0x1], // 0x141
        pub _: [u8; 0x2], // 0x142
        pub _: [u8; 0xc], // 0x144
        pub _: [u8; 0xc], // 0x150
        pub _: [u8; 0xc], // 0x15c
        pub _: [u8; 0xc], // 0x168
        pub _: [u8; 0xc], // 0x174
        pub _: [u8; 0x4], // 0x180
        pub _: [u8; 0x4], // 0x184
        pub _: [u8; 0x4], // 0x188
        pub _: [u8; 0x4], // 0x18c
        pub _: [u8; 0x4], // 0x190
        pub _: [u8; 0x4], // 0x194
        pub _: [u8; 0x4], // 0x198
        pub _: [u8; 0x1], // 0x19c
        pub _: [u8; 0x3], // 0x19d
        pub _: [u8; 0x4], // 0x1a0
        pub _: [u8; 0x4], // 0x1a4
        pub _: [u8; 0x10], // 0x1a8
        pub _: [u8; 0x8], // 0x1b8
    }

    #[repr(C)]
    pub struct CCSWeaponBase {
        pub pad_0: [u8; 0xef8], // 0x0
        pub _: [u8; 0x1], // 0xef8
        pub _: [u8; 0x1], // 0xef9
        pub _: [u8; 0x2], // 0xefa
        pub _: [u8; 0x4], // 0xefc
        pub _: [u8; 0x4], // 0xf00
        pub _: [u8; 0x4], // 0xf04
        pub _: [u8; 0x1], // 0xf08
        pub _: [u8; 0x2b], // 0xf09
        pub _: [u8; 0x1c], // 0xf34
        pub _: [u8; 0x8], // 0xf50
        pub _: [u8; 0x18], // 0xf58
        pub _: [u8; 0x4], // 0xf70
        pub _: [u8; 0x4], // 0xf74
        pub _: [u8; 0xc], // 0xf78
        pub _: [u8; 0x4], // 0xf84
        pub _: [u8; 0x4], // 0xf88
        pub _: [u8; 0x4], // 0xf8c
        pub _: [u8; 0x4], // 0xf90
        pub _: [u8; 0x4], // 0xf94
        pub _: [u8; 0x4], // 0xf98
        pub _: [u8; 0x4], // 0xf9c
        pub _: [u8; 0x4], // 0xfa0
        pub _: [u8; 0x4], // 0xfa4
        pub _: [u8; 0x4], // 0xfa8
        pub _: [u8; 0x4], // 0xfac
        pub _: [u8; 0x4], // 0xfb0
        pub _: [u8; 0x8], // 0xfb4
        pub _: [u8; 0x1], // 0xfbc
        pub _: [u8; 0x3], // 0xfbd
        pub _: [u8; 0x4], // 0xfc0
        pub _: [u8; 0x1], // 0xfc4
        pub _: [u8; 0x1], // 0xfc5
        pub _: [u8; 0x2], // 0xfc6
        pub _: [u8; 0x4], // 0xfc8
        pub _: [u8; 0x4], // 0xfcc
        pub _: [u8; 0x4], // 0xfd0
        pub _: [u8; 0x4], // 0xfd4
        pub _: [u8; 0x4], // 0xfd8
        pub _: [u8; 0x4], // 0xfdc
        pub _: [u8; 0x18], // 0xfe0
        pub _: [u8; 0x1], // 0xff8
        pub _: [u8; 0x3], // 0xff9
        pub _: [u8; 0x4], // 0xffc
        pub _: [u8; 0x8], // 0x1000
        pub _: [u8; 0x4], // 0x1008
        pub _: [u8; 0x4], // 0x100c
        pub _: [u8; 0x4], // 0x1010
        pub _: [u8; 0x20], // 0x1014
        pub _: [u8; 0x4], // 0x1034
        pub _: [u8; 0x4], // 0x1038
        pub _: [u8; 0x1], // 0x103c
        pub _: [u8; 0x3], // 0x103d
        pub _: [u8; 0x60], // 0x1040
        pub _: [u8; 0x18], // 0x10a0
        pub _: [u8; 0x4], // 0x10b8
        pub _: [u8; 0x4], // 0x10bc
        pub _: [u8; 0x10], // 0x10c0
        pub _: [u8; 0x1b0], // 0x10d0
    }

    #[repr(C)]
    pub struct CPointClientUIDialog {
        pub pad_0: [u8; 0x9b0], // 0x0
        pub _: [u8; 0x4], // 0x9b0
        pub _: [u8; 0x4], // 0x9b4
    }

    #[repr(C)]
    pub struct CLogicLineToEntity {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x28], // 0x4a8
        pub _: [u8; 0x8], // 0x4d0
        pub _: [u8; 0x4], // 0x4d8
        pub _: [u8; 0x4], // 0x4dc
    }

    #[repr(C)]
    pub struct CSoundAreaEntitySphere {
        pub pad_0: [u8; 0x4c8], // 0x0
        pub _: [u8; 0x8], // 0x4c8
    }

    #[repr(C)]
    pub struct CCSPlayer_ActionTrackingServices {
        pub pad_0: [u8; 0x1f8], // 0x0
        pub _: [u8; 0x2c], // 0x1f8
        pub _: [u8; 0x4], // 0x224
        pub _: [u8; 0x70], // 0x228
        pub _: [u8; 0x70], // 0x298
        pub _: [u8; 0x78], // 0x308
    }

    #[repr(C)]
    pub struct CBrokenGlassTrap {
        pub pad_0: [u8; 0x870], // 0x0
    }

    #[repr(C)]
    pub struct CPhysicalButton {
        pub pad_0: [u8; 0x9d0], // 0x0
    }

    #[repr(C)]
    pub struct CInfoSpawnGroupLoadUnload {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x18], // 0x4a8
        pub _: [u8; 0x18], // 0x4c0
        pub _: [u8; 0x18], // 0x4d8
        pub _: [u8; 0x18], // 0x4f0
        pub _: [u8; 0x8], // 0x508
        pub _: [u8; 0x8], // 0x510
        pub _: [u8; 0x8], // 0x518
        pub _: [u8; 0x8], // 0x520
        pub _: [u8; 0x4], // 0x528
        pub _: [u8; 0x1], // 0x52c
        pub _: [u8; 0x1], // 0x52d
        pub _: [u8; 0x1], // 0x52e
        pub _: [u8; 0x51], // 0x52f
    }

    #[repr(C)]
    pub struct CSoundAreaEntityOrientedBox {
        pub pad_0: [u8; 0x4c8], // 0x0
        pub _: [u8; 0xc], // 0x4c8
        pub _: [u8; 0xc], // 0x4d4
    }

    #[repr(C)]
    pub struct CCSObserver_MovementServices {
        pub pad_0: [u8; 0x258], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_Outflow_ListenForAnimgraphTag {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x48], // 0xd8
        pub _: [u8; 0x48], // 0x120
        pub _: [u8; 0x8], // 0x168
    }

    #[repr(C)]
    pub struct CBodyComponent {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x40], // 0x8
        pub _: [u8; 0x30], // 0x48
    }

    #[repr(C)]
    pub struct CPulseCell_Inflow_Method {
        pub pad_0: [u8; 0x80], // 0x0
        pub _: [u8; 0x10], // 0x80
        pub _: [u8; 0x8], // 0x90
        pub _: [u8; 0x8], // 0x98
        pub _: [u8; 0x10], // 0xa0
        pub _: [u8; 0x10], // 0xb0
    }

    #[repr(C)]
    pub struct CDecoyGrenade {
        pub pad_0: [u8; 0x12c0], // 0x0
    }

    #[repr(C)]
    pub struct CEconItemView {
        pub pad_0: [u8; 0x38], // 0x0
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x8], // 0x40
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
        pub _: [u8; 0x4], // 0x58
        pub _: [u8; 0xc], // 0x5c
        pub _: [u8; 0x8], // 0x68
        pub _: [u8; 0x78], // 0x70
        pub _: [u8; 0x78], // 0xe8
        pub _: [u8; 0xa1], // 0x160
        pub _: [u8; 0xa1], // 0x201
        pub _: [u8; 0xa1], // 0x2a2
        pub _: [u8; 0xa5], // 0x343
    }

    #[repr(C)]
    pub struct CIncendiaryGrenade {
        pub pad_0: [u8; 0x12c0], // 0x0
    }

    #[repr(C)]
    pub struct CBaseDMStart {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
    }

    #[repr(C)]
    pub struct CBaseModelEntity {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x18], // 0x4b0
        pub _: [u8; 0x8], // 0x4c8
        pub _: [u8; 0x4], // 0x4d0
        pub _: [u8; 0x4], // 0x4d4
        pub _: [u8; 0x4], // 0x4d8
        pub _: [u8; 0x4], // 0x4dc
        pub _: [u8; 0x4], // 0x4e0
        pub _: [u8; 0x4], // 0x4e4
        pub _: [u8; 0x4], // 0x4e8
        pub _: [u8; 0x4], // 0x4ec
        pub _: [u8; 0x4], // 0x4f0
        pub _: [u8; 0x4], // 0x4f4
        pub _: [u8; 0x1], // 0x4f8
        pub _: [u8; 0x1], // 0x4f9
        pub _: [u8; 0x1], // 0x4fa
        pub _: [u8; 0x1], // 0x4fb
        pub _: [u8; 0x4], // 0x4fc
        pub _: [u8; 0x8], // 0x500
        pub _: [u8; 0x28], // 0x508
        pub _: [u8; 0x8], // 0x530
        pub _: [u8; 0x18], // 0x538
        pub _: [u8; 0x1], // 0x550
        pub _: [u8; 0x1], // 0x551
        pub _: [u8; 0x1e], // 0x552
        pub _: [u8; 0x8], // 0x570
        pub _: [u8; 0x68], // 0x578
        pub _: [u8; 0x1], // 0x5e0
        pub _: [u8; 0x1], // 0x5e1
        pub _: [u8; 0x6], // 0x5e2
        pub _: [u8; 0xb8], // 0x5e8
        pub _: [u8; 0x58], // 0x6a0
        pub _: [u8; 0x4], // 0x6f8
        pub _: [u8; 0x4], // 0x6fc
        pub _: [u8; 0x4], // 0x700
        pub _: [u8; 0x4], // 0x704
        pub _: [u8; 0x4], // 0x708
        pub _: [u8; 0x4], // 0x70c
        pub _: [u8; 0x8], // 0x710
        pub _: [u8; 0xd8], // 0x718
        pub _: [u8; 0x28], // 0x7f0
        pub _: [u8; 0x30], // 0x818
        pub _: [u8; 0x8], // 0x848
    }

    #[repr(C)]
    pub struct fogplayerparams_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
    }

    #[repr(C)]
    pub struct CGlowProperty {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x28], // 0x8
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x4], // 0x44
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x1], // 0x50
        pub _: [u8; 0x7], // 0x51
    }

    #[repr(C)]
    pub struct CInstancedSceneEntity {
        pub pad_0: [u8; 0x800], // 0x0
        pub _: [u8; 0x4], // 0x800
        pub _: [u8; 0x4], // 0x804
        pub _: [u8; 0x4], // 0x808
        pub _: [u8; 0x4], // 0x80c
        pub _: [u8; 0x4], // 0x810
        pub _: [u8; 0x4], // 0x814
    }

    #[repr(C)]
    pub struct CPulseCell_BaseValue {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct CCitadelSoundOpvarSetOBB {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x8], // 0x4b8
        pub _: [u8; 0xc], // 0x4c0
        pub _: [u8; 0xc], // 0x4cc
        pub _: [u8; 0xc], // 0x4d8
        pub _: [u8; 0xc], // 0x4e4
        pub _: [u8; 0x8], // 0x4f0
    }

    #[repr(C)]
    pub struct CSoundEventParameter {
        pub pad_0: [u8; 0x4c0], // 0x0
        pub _: [u8; 0x8], // 0x4c0
        pub _: [u8; 0x8], // 0x4c8
    }

    #[repr(C)]
    pub struct CPlayer_WaterServices {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_BooleanSwitchState {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x90], // 0xd8
        pub _: [u8; 0x48], // 0x168
        pub _: [u8; 0x48], // 0x1b0
    }

    #[repr(C)]
    pub struct CRotButton {
        pub pad_0: [u8; 0x9d0], // 0x0
    }

    #[repr(C)]
    pub struct CEnvViewPunch {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0xc], // 0x4ac
    }

    #[repr(C)]
    pub struct CDamageRecord {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x8], // 0x40
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x8], // 0x50
        pub _: [u8; 0x8], // 0x58
        pub _: [u8; 0x4], // 0x60
        pub _: [u8; 0x4], // 0x64
        pub _: [u8; 0x4], // 0x68
        pub _: [u8; 0x4], // 0x6c
        pub _: [u8; 0x4], // 0x70
        pub _: [u8; 0x1], // 0x74
        pub _: [u8; 0x3], // 0x75
    }

    #[repr(C)]
    pub struct VPhysicsCollisionAttribute_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x2], // 0x28
        pub _: [u8; 0x2], // 0x2a
        pub _: [u8; 0x1], // 0x2c
        pub _: [u8; 0x1], // 0x2d
        pub _: [u8; 0x1], // 0x2e
        pub _: [u8; 0x1], // 0x2f
    }

    #[repr(C)]
    pub struct CItemKevlar {
        pub pad_0: [u8; 0xae0], // 0x0
    }

    #[repr(C)]
    pub struct CFuncShatterglass {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x30], // 0x850
        pub _: [u8; 0x30], // 0x880
        pub _: [u8; 0x18], // 0x8b0
        pub _: [u8; 0x8], // 0x8c8
        pub _: [u8; 0x4], // 0x8d0
        pub _: [u8; 0x4], // 0x8d4
        pub _: [u8; 0x4], // 0x8d8
        pub _: [u8; 0x4], // 0x8dc
        pub _: [u8; 0x4], // 0x8e0
        pub _: [u8; 0x1], // 0x8e4
        pub _: [u8; 0x1], // 0x8e5
        pub _: [u8; 0x1], // 0x8e6
        pub _: [u8; 0x1], // 0x8e7
        pub _: [u8; 0x1], // 0x8e8
        pub _: [u8; 0x1], // 0x8e9
        pub _: [u8; 0x6], // 0x8ea
        pub _: [u8; 0x8], // 0x8f0
        pub _: [u8; 0x8], // 0x8f8
        pub _: [u8; 0x8], // 0x900
        pub _: [u8; 0x8], // 0x908
        pub _: [u8; 0x18], // 0x910
        pub _: [u8; 0x18], // 0x928
        pub _: [u8; 0x18], // 0x940
        pub _: [u8; 0x18], // 0x958
        pub _: [u8; 0x8], // 0x970
        pub _: [u8; 0x8], // 0x978
    }

    #[repr(C)]
    pub struct CNavWalkable {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CPlantedC4 {
        pub pad_0: [u8; 0xa98], // 0x0
        pub _: [u8; 0x4], // 0xa98
        pub _: [u8; 0x4], // 0xa9c
        pub _: [u8; 0x4], // 0xaa0
        pub _: [u8; 0x4], // 0xaa4
        pub _: [u8; 0x8], // 0xaa8
        pub _: [u8; 0x438], // 0xab0
        pub _: [u8; 0x18], // 0xee8
        pub _: [u8; 0x18], // 0xf00
        pub _: [u8; 0x18], // 0xf18
        pub _: [u8; 0x8], // 0xf30
        pub _: [u8; 0x18], // 0xf38
        pub _: [u8; 0x4], // 0xf50
        pub _: [u8; 0x1], // 0xf54
        pub _: [u8; 0x1], // 0xf55
        pub _: [u8; 0x2], // 0xf56
        pub _: [u8; 0x4], // 0xf58
        pub _: [u8; 0x8], // 0xf5c
        pub _: [u8; 0x8], // 0xf64
        pub _: [u8; 0x4], // 0xf6c
        pub _: [u8; 0x4], // 0xf70
        pub _: [u8; 0x4], // 0xf74
        pub _: [u8; 0x4], // 0xf78
        pub _: [u8; 0x1], // 0xf7c
        pub _: [u8; 0x7], // 0xf7d
        pub _: [u8; 0x8], // 0xf84
        pub _: [u8; 0xc], // 0xf8c
        pub _: [u8; 0x8], // 0xf98
    }

    #[repr(C)]
    pub struct CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
        pub pad_0: [u8; 0x540], // 0x0
    }

    #[repr(C)]
    pub struct CVoteController {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x14], // 0x4b0
        pub _: [u8; 0x4], // 0x4c4
        pub _: [u8; 0x8], // 0x4c8
        pub _: [u8; 0x18], // 0x4d0
        pub _: [u8; 0x18], // 0x4e8
        pub _: [u8; 0x18], // 0x500
        pub _: [u8; 0x100], // 0x518
        pub _: [u8; 0x4], // 0x618
        pub _: [u8; 0x4], // 0x61c
        pub _: [u8; 0x8], // 0x620
        pub _: [u8; 0x18], // 0x628
        pub _: [u8; 0x18], // 0x640
    }

    #[repr(C)]
    pub struct CPulseCell_Inflow_Yield {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x48], // 0xd8
    }

    #[repr(C)]
    pub struct CPhysImpact {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x8], // 0x4b0
    }

    #[repr(C)]
    pub struct CBaseEntity {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x8], // 0x30
        pub _: [u8; 0x210], // 0x38
        pub _: [u8; 0x18], // 0x248
        pub _: [u8; 0x4], // 0x260
        pub _: [u8; 0x4], // 0x264
        pub _: [u8; 0x10], // 0x268
        pub _: [u8; 0x8], // 0x278
        pub _: [u8; 0x8], // 0x280
        pub _: [u8; 0x8], // 0x288
        pub _: [u8; 0x18], // 0x290
        pub _: [u8; 0x8], // 0x2a8
        pub _: [u8; 0x8], // 0x2b0
        pub _: [u8; 0x8], // 0x2b8
        pub _: [u8; 0x8], // 0x2c0
        pub _: [u8; 0x8], // 0x2c8
        pub _: [u8; 0x4], // 0x2d0
        pub _: [u8; 0x4], // 0x2d4
        pub _: [u8; 0x4], // 0x2d8
        pub _: [u8; 0x4], // 0x2dc
        pub _: [u8; 0x8], // 0x2e0
        pub _: [u8; 0x8], // 0x2e8
        pub _: [u8; 0x2], // 0x2f0
        pub _: [u8; 0x1], // 0x2f2
        pub _: [u8; 0x1], // 0x2f3
        pub _: [u8; 0x1], // 0x2f4
        pub _: [u8; 0x1], // 0x2f5
        pub _: [u8; 0x1], // 0x2f6
        pub _: [u8; 0x1], // 0x2f7
        pub _: [u8; 0x8], // 0x2f8
        pub _: [u8; 0x8], // 0x300
        pub _: [u8; 0x8], // 0x308
        pub _: [u8; 0x8], // 0x310
        pub _: [u8; 0x4], // 0x318
        pub _: [u8; 0xc], // 0x31c
        pub _: [u8; 0x4], // 0x328
        pub _: [u8; 0x4], // 0x32c
        pub _: [u8; 0x4], // 0x330
        pub _: [u8; 0x1], // 0x334
        pub _: [u8; 0x3], // 0x335
        pub _: [u8; 0xc], // 0x338
        pub _: [u8; 0x4], // 0x344
        pub _: [u8; 0x8], // 0x348
        pub _: [u8; 0x8], // 0x350
        pub _: [u8; 0x8], // 0x358
        pub _: [u8; 0x4], // 0x360
        pub _: [u8; 0x4], // 0x364
        pub _: [u8; 0x8], // 0x368
        pub _: [u8; 0x18], // 0x370
        pub _: [u8; 0x4], // 0x388
        pub _: [u8; 0xc], // 0x38c
        pub _: [u8; 0x30], // 0x398
        pub _: [u8; 0xc], // 0x3c8
        pub _: [u8; 0x4], // 0x3d4
        pub _: [u8; 0x8], // 0x3d8
        pub _: [u8; 0x4], // 0x3e0
        pub _: [u8; 0x4], // 0x3e4
        pub _: [u8; 0x4], // 0x3e8
        pub _: [u8; 0x4], // 0x3ec
        pub _: [u8; 0x4], // 0x3f0
        pub _: [u8; 0x4], // 0x3f4
        pub _: [u8; 0x4], // 0x3f8
        pub _: [u8; 0x4], // 0x3fc
        pub _: [u8; 0x4], // 0x400
        pub _: [u8; 0x4], // 0x404
        pub _: [u8; 0x1], // 0x408
        pub _: [u8; 0x3], // 0x409
        pub _: [u8; 0x4], // 0x40c
        pub _: [u8; 0x1], // 0x410
        pub _: [u8; 0x1], // 0x411
        pub _: [u8; 0x2], // 0x412
        pub _: [u8; 0x4], // 0x414
        pub _: [u8; 0x18], // 0x418
        pub _: [u8; 0x18], // 0x430
        pub _: [u8; 0x18], // 0x448
        pub _: [u8; 0x18], // 0x460
        pub _: [u8; 0x4], // 0x478
        pub _: [u8; 0x4], // 0x47c
        pub _: [u8; 0xc], // 0x480
        pub _: [u8; 0x1], // 0x48c
        pub _: [u8; 0x3], // 0x48d
        pub _: [u8; 0x4], // 0x490
        pub _: [u8; 0x4], // 0x494
        pub _: [u8; 0x4], // 0x498
        pub _: [u8; 0x4], // 0x49c
        pub _: [u8; 0x8], // 0x4a0
    }

    #[repr(C)]
    pub struct CPulseCell_ApplyAnimGraphParam {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x90], // 0xd8
    }

    #[repr(C)]
    pub struct CPlayer_UseServices {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct CGameSceneNodeHandle {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
    }

    #[repr(C)]
    pub struct CMarkupVolumeWithRef {
        pub pad_0: [u8; 0x898], // 0x0
        pub _: [u8; 0x4], // 0x898
        pub _: [u8; 0xc], // 0x89c
        pub _: [u8; 0xc], // 0x8a8
        pub _: [u8; 0x4], // 0x8b4
    }

    #[repr(C)]
    pub struct CCSGO_TeamSelectCharacterPosition {
        pub pad_0: [u8; 0x1468], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_Unknown {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x10], // 0x48
    }

    #[repr(C)]
    pub struct CFuncPlatRot {
        pub pad_0: [u8; 0x908], // 0x0
        pub _: [u8; 0xc], // 0x908
        pub _: [u8; 0xc], // 0x914
    }

    #[repr(C)]
    pub struct CRagdollMagnet {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0xc], // 0x4b4
    }

    #[repr(C)]
    pub struct CInfoInstructorHintTarget {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_ApplyEntityFlags {
        pub pad_0: [u8; 0xd8], // 0x0
    }

    #[repr(C)]
    pub struct CSpriteAlias_env_glow {
        pub pad_0: [u8; 0x8c0], // 0x0
    }

    #[repr(C)]
    pub struct CFireCrackerBlast {
        pub pad_0: [u8; 0x14d8], // 0x0
    }

    #[repr(C)]
    pub struct CSpotlightEnd {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x4], // 0x850
        pub _: [u8; 0x4], // 0x854
        pub _: [u8; 0xc], // 0x858
        pub _: [u8; 0xc], // 0x864
    }

    #[repr(C)]
    pub struct CEnvSky {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x8], // 0x850
        pub _: [u8; 0x8], // 0x858
        pub _: [u8; 0x4], // 0x860
        pub _: [u8; 0x4], // 0x864
        pub _: [u8; 0x4], // 0x868
        pub _: [u8; 0x4], // 0x86c
        pub _: [u8; 0x4], // 0x870
        pub _: [u8; 0x4], // 0x874
        pub _: [u8; 0x4], // 0x878
        pub _: [u8; 0x4], // 0x87c
        pub _: [u8; 0x4], // 0x880
        pub _: [u8; 0x2c], // 0x884
    }

    #[repr(C)]
    pub struct CInfoSpawnGroupLandmark {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CPointAngleSensor {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x4], // 0x4b8
        pub _: [u8; 0x4], // 0x4bc
        pub _: [u8; 0x4], // 0x4c0
        pub _: [u8; 0x4], // 0x4c4
        pub _: [u8; 0x4], // 0x4c8
        pub _: [u8; 0x4], // 0x4cc
        pub _: [u8; 0x18], // 0x4d0
        pub _: [u8; 0x18], // 0x4e8
        pub _: [u8; 0x28], // 0x500
        pub _: [u8; 0x20], // 0x528
    }

    #[repr(C)]
    pub struct CSPerRoundStats_t {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x4], // 0x44
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
        pub _: [u8; 0x4], // 0x58
        pub _: [u8; 0x4], // 0x5c
        pub _: [u8; 0x8], // 0x60
    }

    #[repr(C)]
    pub struct CGenericConstraint {
        pub pad_0: [u8; 0x510], // 0x0
        pub _: [u8; 0x4], // 0x510
        pub _: [u8; 0x4], // 0x514
        pub _: [u8; 0x4], // 0x518
        pub _: [u8; 0x4], // 0x51c
        pub _: [u8; 0x4], // 0x520
        pub _: [u8; 0x4], // 0x524
        pub _: [u8; 0x4], // 0x528
        pub _: [u8; 0x4], // 0x52c
        pub _: [u8; 0x4], // 0x530
        pub _: [u8; 0x4], // 0x534
        pub _: [u8; 0x4], // 0x538
        pub _: [u8; 0x4], // 0x53c
        pub _: [u8; 0x4], // 0x540
        pub _: [u8; 0x4], // 0x544
        pub _: [u8; 0x4], // 0x548
        pub _: [u8; 0x4], // 0x54c
        pub _: [u8; 0x4], // 0x550
        pub _: [u8; 0x4], // 0x554
        pub _: [u8; 0x4], // 0x558
        pub _: [u8; 0x4], // 0x55c
        pub _: [u8; 0x4], // 0x560
        pub _: [u8; 0x4], // 0x564
        pub _: [u8; 0x4], // 0x568
        pub _: [u8; 0x4], // 0x56c
        pub _: [u8; 0x4], // 0x570
        pub _: [u8; 0x4], // 0x574
        pub _: [u8; 0x4], // 0x578
        pub _: [u8; 0x4], // 0x57c
        pub _: [u8; 0x4], // 0x580
        pub _: [u8; 0x4], // 0x584
        pub _: [u8; 0x4], // 0x588
        pub _: [u8; 0x1], // 0x58c
        pub _: [u8; 0x1], // 0x58d
        pub _: [u8; 0x2], // 0x58e
        pub _: [u8; 0x4], // 0x590
        pub _: [u8; 0x4], // 0x594
        pub _: [u8; 0x4], // 0x598
        pub _: [u8; 0x4], // 0x59c
        pub _: [u8; 0x4], // 0x5a0
        pub _: [u8; 0x4], // 0x5a4
        pub _: [u8; 0x4], // 0x5a8
        pub _: [u8; 0x4], // 0x5ac
        pub _: [u8; 0x4], // 0x5b0
        pub _: [u8; 0x4], // 0x5b4
        pub _: [u8; 0x4], // 0x5b8
        pub _: [u8; 0x4], // 0x5bc
        pub _: [u8; 0x18], // 0x5c0
        pub _: [u8; 0x18], // 0x5d8
        pub _: [u8; 0x18], // 0x5f0
    }

    #[repr(C)]
    pub struct CPulseCell_Outflow_CycleRandom {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x18], // 0x48
    }

    #[repr(C)]
    pub struct CPulseCell_Step_PublicOutput {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x8], // 0x48
    }

    #[repr(C)]
    pub struct CEnvLaser {
        pub pad_0: [u8; 0x8f0], // 0x0
        pub _: [u8; 0x8], // 0x8f0
        pub _: [u8; 0x8], // 0x8f8
        pub _: [u8; 0x8], // 0x900
        pub _: [u8; 0xc], // 0x908
        pub _: [u8; 0x4], // 0x914
    }

    #[repr(C)]
    pub struct CSoundOpvarSetEntity {
        pub pad_0: [u8; 0x4c0], // 0x0
        pub _: [u8; 0x8], // 0x4c0
        pub _: [u8; 0x8], // 0x4c8
        pub _: [u8; 0x8], // 0x4d0
        pub _: [u8; 0x4], // 0x4d8
        pub _: [u8; 0x4], // 0x4dc
        pub _: [u8; 0x8], // 0x4e0
        pub _: [u8; 0x8], // 0x4e8
        pub _: [u8; 0x10], // 0x4f0
    }

    #[repr(C)]
    pub struct CEnvBeverage {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
    }

    #[repr(C)]
    pub struct CPhysMotor {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x4], // 0x4b8
        pub _: [u8; 0x4], // 0x4bc
        pub _: [u8; 0x4], // 0x4c0
        pub _: [u8; 0x4], // 0x4c4
        pub _: [u8; 0x4], // 0x4c8
        pub _: [u8; 0x4], // 0x4cc
        pub _: [u8; 0x4], // 0x4d0
        pub _: [u8; 0x4], // 0x4d4
        pub _: [u8; 0x4], // 0x4d8
        pub _: [u8; 0x4], // 0x4dc
        pub _: [u8; 0x8], // 0x4e0
        pub _: [u8; 0x8], // 0x4e8
        pub _: [u8; 0x20], // 0x4f0
    }

    #[repr(C)]
    pub struct CLogicGameEvent {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
    }

    #[repr(C)]
    pub struct CPhysicsPropMultiplayer {
        pub pad_0: [u8; 0xd10], // 0x0
    }

    #[repr(C)]
    pub struct CPhysExplosion {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x4], // 0x4b4
        pub _: [u8; 0x8], // 0x4b8
        pub _: [u8; 0x8], // 0x4c0
        pub _: [u8; 0x4], // 0x4c8
        pub _: [u8; 0x4], // 0x4cc
        pub _: [u8; 0x1], // 0x4d0
        pub _: [u8; 0x1], // 0x4d1
        pub _: [u8; 0x6], // 0x4d2
        pub _: [u8; 0x18], // 0x4d8
    }

    #[repr(C)]
    pub struct CSplineConstraint {
        pub pad_0: [u8; 0x558], // 0x0
        pub _: [u8; 0xc], // 0x558
        pub _: [u8; 0x4], // 0x564
        pub _: [u8; 0x8], // 0x568
        pub _: [u8; 0x1], // 0x570
        pub _: [u8; 0x1], // 0x571
        pub _: [u8; 0x1], // 0x572
        pub _: [u8; 0x1], // 0x573
        pub _: [u8; 0x4], // 0x574
        pub _: [u8; 0x4], // 0x578
        pub _: [u8; 0x4], // 0x57c
        pub _: [u8; 0x4], // 0x580
        pub _: [u8; 0x14], // 0x584
        pub _: [u8; 0xc], // 0x598
        pub _: [u8; 0x4], // 0x5a4
        pub _: [u8; 0x10], // 0x5a8
    }

    #[repr(C)]
    pub struct CLogicCompare {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x20], // 0x4b0
        pub _: [u8; 0x20], // 0x4d0
        pub _: [u8; 0x20], // 0x4f0
        pub _: [u8; 0x20], // 0x510
    }

    #[repr(C)]
    pub struct CSoundEventBoxEntity {
        pub pad_0: [u8; 0x5a0], // 0x0
        pub _: [u8; 0x98], // 0x5a0
        pub _: [u8; 0x60], // 0x638
    }

    #[repr(C)]
    pub struct CCSGameModeRules_Noop {
        pub pad_0: [u8; 0x30], // 0x0
    }

    #[repr(C)]
    pub struct CPulse_BlackboardReference {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x10], // 0x8
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
    }

    #[repr(C)]
    pub struct CFuncTankTrain {
        pub pad_0: [u8; 0x978], // 0x0
        pub _: [u8; 0x18], // 0x978
    }

    #[repr(C)]
    pub struct CPointClientUIWorldPanel {
        pub pad_0: [u8; 0x9b0], // 0x0
        pub _: [u8; 0x1], // 0x9b0
        pub _: [u8; 0x1], // 0x9b1
        pub _: [u8; 0x2], // 0x9b2
        pub _: [u8; 0x4], // 0x9b4
        pub _: [u8; 0x4], // 0x9b8
        pub _: [u8; 0x4], // 0x9bc
        pub _: [u8; 0x4], // 0x9c0
        pub _: [u8; 0x4], // 0x9c4
        pub _: [u8; 0x4], // 0x9c8
        pub _: [u8; 0x4], // 0x9cc
        pub _: [u8; 0x4], // 0x9d0
        pub _: [u8; 0x4], // 0x9d4
        pub _: [u8; 0x4], // 0x9d8
        pub _: [u8; 0x4], // 0x9dc
        pub _: [u8; 0x18], // 0x9e0
        pub _: [u8; 0x1], // 0x9f8
        pub _: [u8; 0x1], // 0x9f9
        pub _: [u8; 0x1], // 0x9fa
        pub _: [u8; 0x1], // 0x9fb
        pub _: [u8; 0x1], // 0x9fc
        pub _: [u8; 0x1], // 0x9fd
        pub _: [u8; 0x1], // 0x9fe
        pub _: [u8; 0x1], // 0x9ff
        pub _: [u8; 0x4], // 0xa00
        pub _: [u8; 0x4], // 0xa04
        pub _: [u8; 0x8], // 0xa08
    }

    #[repr(C)]
    pub struct CSoundEventBoxHelper {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0xc], // 0x4a8
        pub _: [u8; 0xc], // 0x4b4
    }

    #[repr(C)]
    pub struct CSoundEventSphereEntity {
        pub pad_0: [u8; 0x568], // 0x0
        pub _: [u8; 0x8], // 0x568
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
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x4], // 0x44
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
    }

    #[repr(C)]
    pub struct CCSPlayer_AimPunchServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0xc], // 0x50
        pub _: [u8; 0x44], // 0x5c
        pub _: [u8; 0x4], // 0xa0
        pub _: [u8; 0x44], // 0xa4
    }

    #[repr(C)]
    pub struct CRuleBrushEntity {
        pub pad_0: [u8; 0x858], // 0x0
    }

    #[repr(C)]
    pub struct CMapVetoPickController {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x1], // 0x4a8
        pub _: [u8; 0x1f], // 0x4a9
        pub _: [u8; 0x8], // 0x4c8
        pub _: [u8; 0x4], // 0x4d0
        pub _: [u8; 0x4], // 0x4d4
        pub _: [u8; 0x4], // 0x4d8
        pub _: [u8; 0x100], // 0x4dc
        pub _: [u8; 0x1c], // 0x5dc
        pub _: [u8; 0x100], // 0x5f8
        pub _: [u8; 0x100], // 0x6f8
        pub _: [u8; 0x100], // 0x7f8
        pub _: [u8; 0x100], // 0x8f8
        pub _: [u8; 0x100], // 0x9f8
        pub _: [u8; 0x100], // 0xaf8
        pub _: [u8; 0x100], // 0xbf8
        pub _: [u8; 0x100], // 0xcf8
        pub _: [u8; 0x4], // 0xdf8
        pub _: [u8; 0x4], // 0xdfc
        pub _: [u8; 0x8], // 0xe00
        pub _: [u8; 0x20], // 0xe08
        pub _: [u8; 0x20], // 0xe28
        pub _: [u8; 0x20], // 0xe48
        pub _: [u8; 0x20], // 0xe68
        pub _: [u8; 0x20], // 0xe88
    }

    #[repr(C)]
    pub struct CFuncPropRespawnZone {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CFilterModel {
        pub pad_0: [u8; 0x4e0], // 0x0
        pub _: [u8; 0x8], // 0x4e0
    }

    #[repr(C)]
    pub struct CWeaponP90 {
        pub pad_0: [u8; 0x12a0], // 0x0
    }

    #[repr(C)]
    pub struct CNavSpaceInfo {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CPhysSlideConstraint {
        pub pad_0: [u8; 0x510], // 0x0
        pub _: [u8; 0xc], // 0x510
        pub _: [u8; 0x4], // 0x51c
        pub _: [u8; 0x4], // 0x520
        pub _: [u8; 0x4], // 0x524
        pub _: [u8; 0x1], // 0x528
        pub _: [u8; 0x3], // 0x529
        pub _: [u8; 0x4], // 0x52c
        pub _: [u8; 0x4], // 0x530
        pub _: [u8; 0x4], // 0x534
        pub _: [u8; 0x98], // 0x538
    }

    #[repr(C)]
    pub struct CPulseGameBlackboard {
        pub pad_0: [u8; 0x4b0], // 0x0
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x8], // 0x4b8
    }

    #[repr(C)]
    pub struct CSoundEventEntityAlias_snd_event_point {
        pub pad_0: [u8; 0x568], // 0x0
    }

    #[repr(C)]
    pub struct CChoreoComponent {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x28], // 0x8
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x38], // 0x38
        pub _: [u8; 0x4], // 0x70
        pub _: [u8; 0xc], // 0x74
    }

    #[repr(C)]
    pub struct CPulseCell_Value_RandomInt {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct CPointGamestatsCounter {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x8], // 0x4b0
    }

    #[repr(C)]
    pub struct CTextureBasedAnimatable {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x4], // 0x850
        pub _: [u8; 0x4], // 0x854
        pub _: [u8; 0x8], // 0x858
        pub _: [u8; 0x8], // 0x860
        pub _: [u8; 0xc], // 0x868
        pub _: [u8; 0xc], // 0x874
        pub _: [u8; 0x4], // 0x880
        pub _: [u8; 0x4], // 0x884
    }

    #[repr(C)]
    pub struct CSprite {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x8], // 0x850
        pub _: [u8; 0x4], // 0x858
        pub _: [u8; 0x4], // 0x85c
        pub _: [u8; 0x4], // 0x860
        pub _: [u8; 0x4], // 0x864
        pub _: [u8; 0x10], // 0x868
        pub _: [u8; 0x4], // 0x878
        pub _: [u8; 0x4], // 0x87c
        pub _: [u8; 0x4], // 0x880
        pub _: [u8; 0x4], // 0x884
        pub _: [u8; 0x4], // 0x888
        pub _: [u8; 0x4], // 0x88c
        pub _: [u8; 0x4], // 0x890
        pub _: [u8; 0x4], // 0x894
        pub _: [u8; 0x4], // 0x898
        pub _: [u8; 0x4], // 0x89c
        pub _: [u8; 0x4], // 0x8a0
        pub _: [u8; 0x4], // 0x8a4
        pub _: [u8; 0x4], // 0x8a8
        pub _: [u8; 0x4], // 0x8ac
        pub _: [u8; 0x4], // 0x8b0
        pub _: [u8; 0x4], // 0x8b4
        pub _: [u8; 0x4], // 0x8b8
        pub _: [u8; 0x4], // 0x8bc
    }

    #[repr(C)]
    pub struct CDynamicLight {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x1], // 0x850
        pub _: [u8; 0x1], // 0x851
        pub _: [u8; 0x1], // 0x852
        pub _: [u8; 0x1], // 0x853
        pub _: [u8; 0x4], // 0x854
        pub _: [u8; 0x4], // 0x858
        pub _: [u8; 0x4], // 0x85c
        pub _: [u8; 0x4], // 0x860
        pub _: [u8; 0x4], // 0x864
    }

    #[repr(C)]
    pub struct CWeaponTaser {
        pub pad_0: [u8; 0x12a0], // 0x0
        pub _: [u8; 0x4], // 0x12a0
        pub _: [u8; 0xc], // 0x12a4
    }

    #[repr(C)]
    pub struct CEnvCubemapBox {
        pub pad_0: [u8; 0x590], // 0x0
    }

    #[repr(C)]
    pub struct CRotDoor {
        pub pad_0: [u8; 0xa58], // 0x0
        pub _: [u8; 0x8], // 0xa58
    }

    #[repr(C)]
    pub struct CPathMover {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x18], // 0x600
        pub _: [u8; 0x18], // 0x618
        pub _: [u8; 0x8], // 0x630
        pub _: [u8; 0x8], // 0x638
        pub _: [u8; 0x8], // 0x640
        pub _: [u8; 0x8], // 0x648
    }

    #[repr(C)]
    pub struct CFuncVPhysicsClip {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x8], // 0x850
    }

    #[repr(C)]
    pub struct CCSRadarElement {
        pub pad_0: [u8; 0x4c0], // 0x0
        pub _: [u8; 0x4], // 0x4c0
        pub _: [u8; 0x4], // 0x4c4
        pub _: [u8; 0x8], // 0x4c8
    }

    #[repr(C)]
    pub struct CPhysFixed {
        pub pad_0: [u8; 0x508], // 0x0
        pub _: [u8; 0x4], // 0x508
        pub _: [u8; 0x4], // 0x50c
        pub _: [u8; 0x4], // 0x510
        pub _: [u8; 0x4], // 0x514
        pub _: [u8; 0x1], // 0x518
        pub _: [u8; 0x7], // 0x519
        pub _: [u8; 0x8], // 0x520
        pub _: [u8; 0x8], // 0x528
    }

    #[repr(C)]
    pub struct CLogicNavigation {
        pub pad_0: [u8; 0x4b0], // 0x0
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x4], // 0x4b4
    }

    #[repr(C)]
    pub struct CPathSimple {
        pub pad_0: [u8; 0x4b0], // 0x0
        pub _: [u8; 0xf0], // 0x4b0
        pub _: [u8; 0x8], // 0x5a0
        pub _: [u8; 0x8], // 0x5a8
    }

    #[repr(C)]
    pub struct CPathParticleRopeAlias_path_particle_rope_clientside {
        pub pad_0: [u8; 0x590], // 0x0
    }

    #[repr(C)]
    pub struct CFuncElectrifiedVolume {
        pub pad_0: [u8; 0x870], // 0x0
        pub _: [u8; 0x8], // 0x870
        pub _: [u8; 0x8], // 0x878
        pub _: [u8; 0x8], // 0x880
        pub _: [u8; 0x20], // 0x888
    }

    #[repr(C)]
    pub struct CCSMinimapBoundary {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct EntitySpottedState_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0xc], // 0xc
    }

    #[repr(C)]
    pub struct fogparams_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0xc], // 0x8
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x4], // 0x44
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
        pub _: [u8; 0x4], // 0x58
        pub _: [u8; 0x4], // 0x5c
        pub _: [u8; 0x4], // 0x60
        pub _: [u8; 0x1], // 0x64
        pub _: [u8; 0x1], // 0x65
        pub _: [u8; 0x1], // 0x66
        pub _: [u8; 0x1], // 0x67
    }

    #[repr(C)]
    pub struct CSoundEventOBBEntity {
        pub pad_0: [u8; 0x568], // 0x0
        pub _: [u8; 0xc], // 0x568
        pub _: [u8; 0x1c], // 0x574
    }

    #[repr(C)]
    pub struct CFlashbangProjectile {
        pub pad_0: [u8; 0xb40], // 0x0
        pub _: [u8; 0x4], // 0xb40
        pub _: [u8; 0x1], // 0xb44
        pub _: [u8; 0xb], // 0xb45
    }

    #[repr(C)]
    pub struct CTriggerMultiple {
        pub pad_0: [u8; 0x9c8], // 0x0
        pub _: [u8; 0x18], // 0x9c8
    }

    #[repr(C)]
    pub struct CPhysBallSocket {
        pub pad_0: [u8; 0x508], // 0x0
        pub _: [u8; 0x4], // 0x508
        pub _: [u8; 0x4], // 0x50c
        pub _: [u8; 0x4], // 0x510
        pub _: [u8; 0x4], // 0x514
        pub _: [u8; 0x4], // 0x518
        pub _: [u8; 0x4], // 0x51c
    }

    #[repr(C)]
    pub struct CDebugHistory {
        pub pad_0: [u8; 0x3e84e8], // 0x0
        pub _: [u8; 0xfa8], // 0x3e84e8
    }

    #[repr(C)]
    pub struct CSoundOpvarSetPointBase {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x1c], // 0x4ac
        pub _: [u8; 0x58], // 0x4c8
        pub _: [u8; 0xc], // 0x520
        pub _: [u8; 0x4], // 0x52c
        pub _: [u8; 0x8], // 0x530
        pub _: [u8; 0x8], // 0x538
        pub _: [u8; 0x8], // 0x540
        pub _: [u8; 0x4], // 0x548
        pub _: [u8; 0x1], // 0x54c
        pub _: [u8; 0x3], // 0x54d
    }

    #[repr(C)]
    pub struct CExplosionTypeData {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0xe0], // 0x10
        pub _: [u8; 0x1], // 0xf0
        pub _: [u8; 0x7], // 0xf1
        pub _: [u8; 0x8], // 0xf8
    }

    #[repr(C)]
    pub struct CPathKeyFrame {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0xc], // 0x4a8
        pub _: [u8; 0xc], // 0x4b4
        pub _: [u8; 0x10], // 0x4c0
        pub _: [u8; 0x8], // 0x4d0
        pub _: [u8; 0x4], // 0x4d8
        pub _: [u8; 0x4], // 0x4dc
        pub _: [u8; 0x4], // 0x4e0
        pub _: [u8; 0xc], // 0x4e4
    }

    #[repr(C)]
    pub struct CWeaponCZ75a {
        pub pad_0: [u8; 0x12a0], // 0x0
        pub _: [u8; 0x10], // 0x12a0
    }

    #[repr(C)]
    pub struct CScriptTriggerPush {
        pub pad_0: [u8; 0xa00], // 0x0
        pub _: [u8; 0x10], // 0xa00
    }

    #[repr(C)]
    pub struct CRevertSaved {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x4], // 0x850
        pub _: [u8; 0x4], // 0x854
        pub _: [u8; 0x8], // 0x858
    }

    #[repr(C)]
    pub struct CTriggerBombReset {
        pub pad_0: [u8; 0x9c8], // 0x0
    }

    #[repr(C)]
    pub struct CTriggerHurt {
        pub pad_0: [u8; 0x9c8], // 0x0
        pub _: [u8; 0x4], // 0x9c8
        pub _: [u8; 0x4], // 0x9cc
        pub _: [u8; 0x4], // 0x9d0
        pub _: [u8; 0x4], // 0x9d4
        pub _: [u8; 0x4], // 0x9d8
        pub _: [u8; 0x4], // 0x9dc
        pub _: [u8; 0x4], // 0x9e0
        pub _: [u8; 0x4], // 0x9e4
        pub _: [u8; 0xc], // 0x9e8
        pub _: [u8; 0x4], // 0x9f4
        pub _: [u8; 0x8], // 0x9f8
        pub _: [u8; 0x18], // 0xa00
        pub _: [u8; 0x18], // 0xa18
        pub _: [u8; 0x20], // 0xa30
    }

    #[repr(C)]
    pub struct CCSPlayer_WeaponServices {
        pub pad_0: [u8; 0xc0], // 0x0
        pub _: [u8; 0x4], // 0xc0
        pub _: [u8; 0x4], // 0xc4
        pub _: [u8; 0x4], // 0xc8
        pub _: [u8; 0x4], // 0xcc
        pub _: [u8; 0x4], // 0xd0
        pub _: [u8; 0x4], // 0xd4
        pub _: [u8; 0x1], // 0xd8
        pub _: [u8; 0x1], // 0xd9
        pub _: [u8; 0x1], // 0xda
        pub _: [u8; 0x1], // 0xdb
        pub _: [u8; 0x17bc], // 0xdc
        pub _: [u8; 0x18], // 0x1898
        pub _: [u8; 0x8], // 0x18b0
    }

    #[repr(C)]
    pub struct CSkyCameraVolume {
        pub pad_0: [u8; 0x4c0], // 0x0
        pub _: [u8; 0xc], // 0x4c0
        pub _: [u8; 0xc], // 0x4cc
        pub _: [u8; 0x4], // 0x4d8
        pub _: [u8; 0x4], // 0x4dc
        pub _: [u8; 0x1], // 0x4e0
        pub _: [u8; 0x3], // 0x4e1
        pub _: [u8; 0xc], // 0x4e4
        pub _: [u8; 0x1], // 0x4f0
        pub _: [u8; 0x1], // 0x4f1
        pub _: [u8; 0x6], // 0x4f2
        pub _: [u8; 0x8], // 0x4f8
    }

    #[repr(C)]
    pub struct CRetakeGameRules {
        pub pad_0: [u8; 0x138], // 0x0
        pub _: [u8; 0x4], // 0x138
        pub _: [u8; 0x1], // 0x13c
        pub _: [u8; 0x3], // 0x13d
        pub _: [u8; 0x4], // 0x140
        pub _: [u8; 0x4], // 0x144
        pub _: [u8; 0xa8], // 0x148
    }

    #[repr(C)]
    pub struct CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
        pub pad_0: [u8; 0x538], // 0x0
    }

    #[repr(C)]
    pub struct CInfoInstructorHintBombTargetA {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CTeamplayRules {
        pub pad_0: [u8; 0xd0], // 0x0
    }

    #[repr(C)]
    pub struct CScriptTriggerHurt {
        pub pad_0: [u8; 0xa50], // 0x0
        pub _: [u8; 0x10], // 0xa50
    }

    #[repr(C)]
    pub struct CCSCustomHudLayoutState {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x60], // 0x38
        pub _: [u8; 0x100], // 0x98
    }

    #[repr(C)]
    pub struct CCSGO_WingmanIntroCharacterPosition {
        pub pad_0: [u8; 0x1468], // 0x0
    }

    #[repr(C)]
    pub struct CWeaponMP9 {
        pub pad_0: [u8; 0x12a0], // 0x0
    }

    #[repr(C)]
    pub struct CTriggerDetectExplosion {
        pub pad_0: [u8; 0x9f0], // 0x0
        pub _: [u8; 0x18], // 0x9f0
    }

    #[repr(C)]
    pub struct CFilterName {
        pub pad_0: [u8; 0x4e0], // 0x0
        pub _: [u8; 0x8], // 0x4e0
    }

    #[repr(C)]
    pub struct CPulseCell_ApplyDynamicAttributeString {
        pub pad_0: [u8; 0xd8], // 0x0
    }

    #[repr(C)]
    pub struct CSmokeGrenadeProjectile {
        pub pad_0: [u8; 0xb68], // 0x0
        pub _: [u8; 0x4], // 0xb68
        pub _: [u8; 0x4], // 0xb6c
        pub _: [u8; 0x4], // 0xb70
        pub _: [u8; 0xc], // 0xb74
        pub _: [u8; 0x10], // 0xb80
        pub _: [u8; 0x18], // 0xb90
        pub _: [u8; 0x4], // 0xba8
        pub _: [u8; 0x4], // 0xbac
        pub _: [u8; 0x4], // 0xbb0
        pub _: [u8; 0x4], // 0xbb4
        pub _: [u8; 0x2288], // 0xbb8
        pub _: [u8; 0x1], // 0x2e40
        pub _: [u8; 0xf], // 0x2e41
    }

    #[repr(C)]
    pub struct CBlood {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0xc], // 0x4a8
        pub _: [u8; 0xc], // 0x4b4
        pub _: [u8; 0x4], // 0x4c0
        pub _: [u8; 0x4], // 0x4c4
    }

    #[repr(C)]
    pub struct CCSTeam {
        pub pad_0: [u8; 0x560], // 0x0
        pub _: [u8; 0x4], // 0x560
        pub _: [u8; 0x4], // 0x564
        pub _: [u8; 0x1], // 0x568
        pub _: [u8; 0x203], // 0x569
        pub _: [u8; 0x4], // 0x76c
        pub _: [u8; 0x4], // 0x770
        pub _: [u8; 0x4], // 0x774
        pub _: [u8; 0x4], // 0x778
        pub _: [u8; 0x84], // 0x77c
        pub _: [u8; 0x4], // 0x800
        pub _: [u8; 0x8], // 0x804
        pub _: [u8; 0x8], // 0x80c
        pub _: [u8; 0x4], // 0x814
        pub _: [u8; 0x8], // 0x818
    }

    #[repr(C)]
    pub struct CRulePointEntity {
        pub pad_0: [u8; 0x858], // 0x0
        pub _: [u8; 0x8], // 0x858
    }

    #[repr(C)]
    pub struct CPulse_CallInfo {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x30], // 0x18
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
        pub _: [u8; 0x8], // 0x58
    }

    #[repr(C)]
    pub struct CFuncMoveLinearAlias_momentary_door {
        pub pad_0: [u8; 0x958], // 0x0
    }

    #[repr(C)]
    pub struct CBaseAnimGraph {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x98], // 0x850
        pub _: [u8; 0x8], // 0x8e8
        pub _: [u8; 0x8], // 0x8f0
        pub _: [u8; 0x20], // 0x8f8
        pub _: [u8; 0x18], // 0x918
        pub _: [u8; 0x8], // 0x930
        pub _: [u8; 0x1], // 0x938
        pub _: [u8; 0x3], // 0x939
        pub _: [u8; 0xc], // 0x93c
        pub _: [u8; 0x10], // 0x948
        pub _: [u8; 0x8], // 0x958
        pub _: [u8; 0x28], // 0x960
        pub _: [u8; 0x1], // 0x988
        pub _: [u8; 0x1], // 0x989
        pub _: [u8; 0x6], // 0x98a
        pub _: [u8; 0xb0], // 0x990
    }

    #[repr(C)]
    pub struct CEnvCubemapFog {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x4], // 0x4b4
        pub _: [u8; 0x4], // 0x4b8
        pub _: [u8; 0x4], // 0x4bc
        pub _: [u8; 0x4], // 0x4c0
        pub _: [u8; 0x4], // 0x4c4
        pub _: [u8; 0x4], // 0x4c8
        pub _: [u8; 0x1], // 0x4cc
        pub _: [u8; 0x3], // 0x4cd
        pub _: [u8; 0x4], // 0x4d0
        pub _: [u8; 0x4], // 0x4d4
        pub _: [u8; 0x8], // 0x4d8
        pub _: [u8; 0x8], // 0x4e0
        pub _: [u8; 0x4], // 0x4e8
        pub _: [u8; 0x4], // 0x4ec
        pub _: [u8; 0x4], // 0x4f0
        pub _: [u8; 0x4], // 0x4f4
        pub _: [u8; 0x8], // 0x4f8
        pub _: [u8; 0x98], // 0x500
        pub _: [u8; 0x8], // 0x598
        pub _: [u8; 0x1], // 0x5a0
        pub _: [u8; 0x7], // 0x5a1
    }

    #[repr(C)]
    pub struct CPulseCell_InlineNodeSkipSelector {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x18], // 0x50
        pub _: [u8; 0x48], // 0x68
    }

    #[repr(C)]
    pub struct CBaseDoor {
        pub pad_0: [u8; 0x8e0], // 0x0
        pub _: [u8; 0xc], // 0x8e0
        pub _: [u8; 0xc], // 0x8ec
        pub _: [u8; 0x20], // 0x8f8
        pub _: [u8; 0x1], // 0x918
        pub _: [u8; 0x1], // 0x919
        pub _: [u8; 0x1], // 0x91a
        pub _: [u8; 0x1], // 0x91b
        pub _: [u8; 0x4], // 0x91c
        pub _: [u8; 0x4], // 0x920
        pub _: [u8; 0x4], // 0x924
        pub _: [u8; 0x8], // 0x928
        pub _: [u8; 0x8], // 0x930
        pub _: [u8; 0x8], // 0x938
        pub _: [u8; 0x8], // 0x940
        pub _: [u8; 0x8], // 0x948
        pub _: [u8; 0x18], // 0x950
        pub _: [u8; 0x18], // 0x968
        pub _: [u8; 0x18], // 0x980
        pub _: [u8; 0x18], // 0x998
        pub _: [u8; 0x18], // 0x9b0
        pub _: [u8; 0x18], // 0x9c8
        pub _: [u8; 0x18], // 0x9e0
        pub _: [u8; 0x18], // 0x9f8
        pub _: [u8; 0x18], // 0xa10
        pub _: [u8; 0x20], // 0xa28
        pub _: [u8; 0x4], // 0xa48
        pub _: [u8; 0x4], // 0xa4c
        pub _: [u8; 0x1], // 0xa50
        pub _: [u8; 0x7], // 0xa51
    }

    #[repr(C)]
    pub struct CServerOnlyPointEntity {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CGameMoney {
        pub pad_0: [u8; 0x860], // 0x0
        pub _: [u8; 0x18], // 0x860
        pub _: [u8; 0x18], // 0x878
        pub _: [u8; 0x8], // 0x890
        pub _: [u8; 0x8], // 0x898
    }

    #[repr(C)]
    pub struct CEnvHudHint {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
    }

    #[repr(C)]
    pub struct CNullEntity {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CLogicalEntity {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CItemDefuser {
        pub pad_0: [u8; 0xae0], // 0x0
        pub _: [u8; 0x18], // 0xae0
        pub _: [u8; 0x8], // 0xaf8
    }

    #[repr(C)]
    pub struct CItemGenericTriggerHelper {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x8], // 0x850
    }

    #[repr(C)]
    pub struct CPlayer_WeaponServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x18], // 0x48
        pub _: [u8; 0x4], // 0x60
        pub _: [u8; 0x4], // 0x64
        pub _: [u8; 0x40], // 0x68
        pub _: [u8; 0x8], // 0xa8
    }

    #[repr(C)]
    pub struct CRagdollPropAttached {
        pub pad_0: [u8; 0xc00], // 0x0
        pub _: [u8; 0x4], // 0xc00
        pub _: [u8; 0x4], // 0xc04
        pub _: [u8; 0xc], // 0xc08
        pub _: [u8; 0xc], // 0xc14
        pub _: [u8; 0x10], // 0xc20
        pub _: [u8; 0x10], // 0xc30
    }

    #[repr(C)]
    pub struct CItemDogtags {
        pub pad_0: [u8; 0xae0], // 0x0
        pub _: [u8; 0x4], // 0xae0
        pub _: [u8; 0xc], // 0xae4
    }

    #[repr(C)]
    pub struct CFuncPlat {
        pub pad_0: [u8; 0x8f8], // 0x0
        pub _: [u8; 0x8], // 0x8f8
        pub _: [u8; 0x8], // 0x900
    }

    #[repr(C)]
    pub struct CBarnLight {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x4], // 0x850
        pub _: [u8; 0x4], // 0x854
        pub _: [u8; 0x4], // 0x858
        pub _: [u8; 0x4], // 0x85c
        pub _: [u8; 0x4], // 0x860
        pub _: [u8; 0x4], // 0x864
        pub _: [u8; 0x4], // 0x868
        pub _: [u8; 0x4], // 0x86c
        pub _: [u8; 0x4], // 0x870
        pub _: [u8; 0x4], // 0x874
        pub _: [u8; 0x4], // 0x878
        pub _: [u8; 0x4], // 0x87c
        pub _: [u8; 0x8], // 0x880
        pub _: [u8; 0x8], // 0x888
        pub _: [u8; 0x8], // 0x890
        pub _: [u8; 0x18], // 0x898
        pub _: [u8; 0x18], // 0x8b0
        pub _: [u8; 0x18], // 0x8c8
        pub _: [u8; 0x80], // 0x8e0
        pub _: [u8; 0x8], // 0x960
        pub _: [u8; 0x4], // 0x968
        pub _: [u8; 0x4], // 0x96c
        pub _: [u8; 0x4], // 0x970
        pub _: [u8; 0x4], // 0x974
        pub _: [u8; 0x4], // 0x978
        pub _: [u8; 0xc], // 0x97c
        pub _: [u8; 0x4], // 0x988
        pub _: [u8; 0xc], // 0x98c
        pub _: [u8; 0x4], // 0x998
        pub _: [u8; 0xc], // 0x99c
        pub _: [u8; 0x4], // 0x9a8
        pub _: [u8; 0x4], // 0x9ac
        pub _: [u8; 0x4], // 0x9b0
        pub _: [u8; 0x4], // 0x9b4
        pub _: [u8; 0x1], // 0x9b8
        pub _: [u8; 0x3], // 0x9b9
        pub _: [u8; 0x4], // 0x9bc
        pub _: [u8; 0x4], // 0x9c0
        pub _: [u8; 0x4], // 0x9c4
        pub _: [u8; 0xc], // 0x9c8
        pub _: [u8; 0x4], // 0x9d4
        pub _: [u8; 0x4], // 0x9d8
        pub _: [u8; 0x4], // 0x9dc
        pub _: [u8; 0x4], // 0x9e0
        pub _: [u8; 0x4], // 0x9e4
        pub _: [u8; 0x4], // 0x9e8
        pub _: [u8; 0x4], // 0x9ec
        pub _: [u8; 0x4], // 0x9f0
        pub _: [u8; 0x4], // 0x9f4
        pub _: [u8; 0x4], // 0x9f8
        pub _: [u8; 0xc], // 0x9fc
        pub _: [u8; 0xc], // 0xa08
        pub _: [u8; 0xc], // 0xa14
        pub _: [u8; 0xc], // 0xa20
        pub _: [u8; 0xc], // 0xa2c
        pub _: [u8; 0x4], // 0xa38
        pub _: [u8; 0xc], // 0xa3c
        pub _: [u8; 0xc], // 0xa48
        pub _: [u8; 0xc], // 0xa54
        pub _: [u8; 0xc], // 0xa60
        pub _: [u8; 0xc], // 0xa6c
        pub _: [u8; 0xc], // 0xa78
        pub _: [u8; 0xc], // 0xa84
        pub _: [u8; 0xc], // 0xa90
        pub _: [u8; 0xc], // 0xa9c
        pub _: [u8; 0xc], // 0xaa8
        pub _: [u8; 0xc], // 0xab4
        pub _: [u8; 0xc], // 0xac0
        pub _: [u8; 0xc], // 0xacc
        pub _: [u8; 0xc], // 0xad8
        pub _: [u8; 0xc], // 0xae4
        pub _: [u8; 0xc], // 0xaf0
        pub _: [u8; 0xc], // 0xafc
        pub _: [u8; 0xc], // 0xb08
        pub _: [u8; 0x1], // 0xb14
        pub _: [u8; 0x3], // 0xb15
        pub _: [u8; 0x20], // 0xb18
    }

    #[repr(C)]
    pub struct CInstructorEventEntity {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x8], // 0x4b8
    }

    #[repr(C)]
    pub struct CWeaponTec9 {
        pub pad_0: [u8; 0x12a0], // 0x0
    }

    #[repr(C)]
    pub struct CPathCorner {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x1], // 0x4a8
        pub _: [u8; 0x1], // 0x4a9
        pub _: [u8; 0x2], // 0x4aa
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x4], // 0x4b4
        pub _: [u8; 0x4], // 0x4b8
        pub _: [u8; 0x4], // 0x4bc
        pub _: [u8; 0x8], // 0x4c0
        pub _: [u8; 0x18], // 0x4c8
    }

    #[repr(C)]
    pub struct CTriggerSndSosOpvar {
        pub pad_0: [u8; 0x9c8], // 0x0
        pub _: [u8; 0x18], // 0x9c8
        pub _: [u8; 0xc], // 0x9e0
        pub _: [u8; 0x4], // 0x9ec
        pub _: [u8; 0x4], // 0x9f0
        pub _: [u8; 0x4], // 0x9f4
        pub _: [u8; 0x8], // 0x9f8
        pub _: [u8; 0x8], // 0xa00
        pub _: [u8; 0x8], // 0xa08
        pub _: [u8; 0x1], // 0xa10
        pub _: [u8; 0x100], // 0xa11
        pub _: [u8; 0x100], // 0xb11
        pub _: [u8; 0x103], // 0xc11
        pub _: [u8; 0xc], // 0xd14
        pub _: [u8; 0x8], // 0xd20
    }

    #[repr(C)]
    pub struct CPulseCell_LimitCount {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x8], // 0x48
    }

    #[repr(C)]
    pub struct CPulseCell_Step_CallExternalMethod {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x10], // 0xd8
        pub _: [u8; 0x8], // 0xe8
        pub _: [u8; 0x10], // 0xf0
        pub _: [u8; 0x8], // 0x100
        pub _: [u8; 0x48], // 0x108
    }

    #[repr(C)]
    pub struct CPointCommentaryNode {
        pub pad_0: [u8; 0xa40], // 0x0
        pub _: [u8; 0x8], // 0xa40
        pub _: [u8; 0x8], // 0xa48
        pub _: [u8; 0x8], // 0xa50
        pub _: [u8; 0x8], // 0xa58
        pub _: [u8; 0x4], // 0xa60
        pub _: [u8; 0x4], // 0xa64
        pub _: [u8; 0x8], // 0xa68
        pub _: [u8; 0x4], // 0xa70
        pub _: [u8; 0x4], // 0xa74
        pub _: [u8; 0x1], // 0xa78
        pub _: [u8; 0x1], // 0xa79
        pub _: [u8; 0x2], // 0xa7a
        pub _: [u8; 0x4], // 0xa7c
        pub _: [u8; 0xc], // 0xa80
        pub _: [u8; 0xc], // 0xa8c
        pub _: [u8; 0xc], // 0xa98
        pub _: [u8; 0x1], // 0xaa4
        pub _: [u8; 0x3], // 0xaa5
        pub _: [u8; 0xc], // 0xaa8
        pub _: [u8; 0x4], // 0xab4
        pub _: [u8; 0x18], // 0xab8
        pub _: [u8; 0x18], // 0xad0
        pub _: [u8; 0x4], // 0xae8
        pub _: [u8; 0x4], // 0xaec
        pub _: [u8; 0x8], // 0xaf0
        pub _: [u8; 0x8], // 0xaf8
        pub _: [u8; 0x8], // 0xb00
        pub _: [u8; 0x4], // 0xb08
        pub _: [u8; 0x4], // 0xb0c
        pub _: [u8; 0x10], // 0xb10
    }

    #[repr(C)]
    pub struct CMomentaryRotButton {
        pub pad_0: [u8; 0x9d0], // 0x0
        pub _: [u8; 0x20], // 0x9d0
        pub _: [u8; 0x18], // 0x9f0
        pub _: [u8; 0x18], // 0xa08
        pub _: [u8; 0x18], // 0xa20
        pub _: [u8; 0x18], // 0xa38
        pub _: [u8; 0x4], // 0xa50
        pub _: [u8; 0xc], // 0xa54
        pub _: [u8; 0xc], // 0xa60
        pub _: [u8; 0x4], // 0xa6c
        pub _: [u8; 0x8], // 0xa70
        pub _: [u8; 0x4], // 0xa78
        pub _: [u8; 0x4], // 0xa7c
        pub _: [u8; 0x4], // 0xa80
        pub _: [u8; 0x4], // 0xa84
    }

    #[repr(C)]
    pub struct CSceneListManager {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x18], // 0x4a8
        pub _: [u8; 0x80], // 0x4c0
        pub _: [u8; 0x40], // 0x540
    }

    #[repr(C)]
    pub struct CEnvTilt {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x4], // 0x4b4
    }

    #[repr(C)]
    pub struct CEnvSoundscapeTriggerable {
        pub pad_0: [u8; 0x538], // 0x0
    }

    #[repr(C)]
    pub struct CFuncMover {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x8], // 0x850
        pub _: [u8; 0x4], // 0x858
        pub _: [u8; 0x4], // 0x85c
        pub _: [u8; 0x8], // 0x860
        pub _: [u8; 0x8], // 0x868
        pub _: [u8; 0x4], // 0x870
        pub _: [u8; 0x4], // 0x874
        pub _: [u8; 0x4], // 0x878
        pub _: [u8; 0x4], // 0x87c
        pub _: [u8; 0x4], // 0x880
        pub _: [u8; 0x4], // 0x884
        pub _: [u8; 0x4], // 0x888
        pub _: [u8; 0x4], // 0x88c
        pub _: [u8; 0x1], // 0x890
        pub _: [u8; 0x3], // 0x891
        pub _: [u8; 0x4], // 0x894
        pub _: [u8; 0x4], // 0x898
        pub _: [u8; 0x4], // 0x89c
        pub _: [u8; 0x4], // 0x8a0
        pub _: [u8; 0x4], // 0x8a4
        pub _: [u8; 0x4], // 0x8a8
        pub _: [u8; 0x4], // 0x8ac
        pub _: [u8; 0x4], // 0x8b0
        pub _: [u8; 0x4], // 0x8b4
        pub _: [u8; 0x4], // 0x8b8
        pub _: [u8; 0x4], // 0x8bc
        pub _: [u8; 0x4], // 0x8c0
        pub _: [u8; 0x4], // 0x8c4
        pub _: [u8; 0x8], // 0x8c8
        pub _: [u8; 0x8], // 0x8d0
        pub _: [u8; 0x8], // 0x8d8
        pub _: [u8; 0x8], // 0x8e0
        pub _: [u8; 0x8], // 0x8e8
        pub _: [u8; 0x8], // 0x8f0
        pub _: [u8; 0x8], // 0x8f8
        pub _: [u8; 0x20], // 0x900
        pub _: [u8; 0x18], // 0x920
        pub _: [u8; 0x1], // 0x938
        pub _: [u8; 0x1], // 0x939
        pub _: [u8; 0x2], // 0x93a
        pub _: [u8; 0x4], // 0x93c
        pub _: [u8; 0x4], // 0x940
        pub _: [u8; 0x4], // 0x944
        pub _: [u8; 0x4], // 0x948
        pub _: [u8; 0x4], // 0x94c
        pub _: [u8; 0x4], // 0x950
        pub _: [u8; 0x1], // 0x954
        pub _: [u8; 0x1], // 0x955
        pub _: [u8; 0x2], // 0x956
        pub _: [u8; 0x20], // 0x958
        pub _: [u8; 0x8], // 0x978
        pub _: [u8; 0x4], // 0x980
        pub _: [u8; 0xc], // 0x984
        pub _: [u8; 0x4], // 0x990
        pub _: [u8; 0x4], // 0x994
        pub _: [u8; 0x4], // 0x998
        pub _: [u8; 0x4], // 0x99c
        pub _: [u8; 0x4], // 0x9a0
        pub _: [u8; 0x4], // 0x9a4
        pub _: [u8; 0x8], // 0x9a8
        pub _: [u8; 0x8], // 0x9b0
        pub _: [u8; 0x18], // 0x9b8
        pub _: [u8; 0x4], // 0x9d0
        pub _: [u8; 0xc], // 0x9d4
        pub _: [u8; 0x10], // 0x9e0
        pub _: [u8; 0x4], // 0x9f0
        pub _: [u8; 0x1], // 0x9f4
        pub _: [u8; 0x3], // 0x9f5
        pub _: [u8; 0x4], // 0x9f8
        pub _: [u8; 0x4], // 0x9fc
        pub _: [u8; 0x4], // 0xa00
        pub _: [u8; 0x4], // 0xa04
        pub _: [u8; 0x4], // 0xa08
        pub _: [u8; 0x4], // 0xa0c
        pub _: [u8; 0x8], // 0xa10
        pub _: [u8; 0x8], // 0xa18
        pub _: [u8; 0x18], // 0xa20
        pub _: [u8; 0x18], // 0xa38
        pub _: [u8; 0x18], // 0xa50
        pub _: [u8; 0x18], // 0xa68
        pub _: [u8; 0x18], // 0xa80
        pub _: [u8; 0x1], // 0xa98
        pub _: [u8; 0x1f], // 0xa99
        pub _: [u8; 0x4], // 0xab8
        pub _: [u8; 0x4], // 0xabc
        pub _: [u8; 0x8], // 0xac0
        pub _: [u8; 0x8], // 0xac8
        pub _: [u8; 0x4], // 0xad0
        pub _: [u8; 0x4], // 0xad4
        pub _: [u8; 0x4], // 0xad8
        pub _: [u8; 0x4], // 0xadc
        pub _: [u8; 0x4], // 0xae0
        pub _: [u8; 0x8], // 0xae4
        pub _: [u8; 0x4], // 0xaec
        pub _: [u8; 0x4], // 0xaf0
        pub _: [u8; 0x4], // 0xaf4
        pub _: [u8; 0x4], // 0xaf8
        pub _: [u8; 0x4], // 0xafc
        pub _: [u8; 0x20], // 0xb00
        pub _: [u8; 0x1], // 0xb20
        pub _: [u8; 0x1], // 0xb21
        pub _: [u8; 0x1], // 0xb22
        pub _: [u8; 0x1], // 0xb23
        pub _: [u8; 0x4], // 0xb24
        pub _: [u8; 0x4], // 0xb28
        pub _: [u8; 0x4], // 0xb2c
        pub _: [u8; 0x10], // 0xb30
    }

    #[repr(C)]
    pub struct CPhysicsProp {
        pub pad_0: [u8; 0xbe0], // 0x0
        pub _: [u8; 0x18], // 0xbe0
        pub _: [u8; 0x18], // 0xbf8
        pub _: [u8; 0x18], // 0xc10
        pub _: [u8; 0x18], // 0xc28
        pub _: [u8; 0x18], // 0xc40
        pub _: [u8; 0x18], // 0xc58
        pub _: [u8; 0x18], // 0xc70
        pub _: [u8; 0x1], // 0xc88
        pub _: [u8; 0x1], // 0xc89
        pub _: [u8; 0x2], // 0xc8a
        pub _: [u8; 0x4], // 0xc8c
        pub _: [u8; 0x4], // 0xc90
        pub _: [u8; 0x4], // 0xc94
        pub _: [u8; 0x4], // 0xc98
        pub _: [u8; 0x4], // 0xc9c
        pub _: [u8; 0x1], // 0xca0
        pub _: [u8; 0x1], // 0xca1
        pub _: [u8; 0x1], // 0xca2
        pub _: [u8; 0x1], // 0xca3
        pub _: [u8; 0x4], // 0xca4
        pub _: [u8; 0x4], // 0xca8
        pub _: [u8; 0x4], // 0xcac
        pub _: [u8; 0x4], // 0xcb0
        pub _: [u8; 0x4], // 0xcb4
        pub _: [u8; 0x4], // 0xcb8
        pub _: [u8; 0x4], // 0xcbc
        pub _: [u8; 0x4], // 0xcc0
        pub _: [u8; 0x1], // 0xcc4
        pub _: [u8; 0x3], // 0xcc5
        pub _: [u8; 0x4], // 0xcc8
        pub _: [u8; 0x1], // 0xccc
        pub _: [u8; 0x1], // 0xccd
        pub _: [u8; 0x1], // 0xcce
        pub _: [u8; 0x1], // 0xccf
        pub _: [u8; 0x8], // 0xcd0
        pub _: [u8; 0x20], // 0xcd8
        pub _: [u8; 0x10], // 0xcf8
        pub _: [u8; 0x1], // 0xd08
        pub _: [u8; 0x1], // 0xd09
        pub _: [u8; 0x6], // 0xd0a
    }

    #[repr(C)]
    pub struct CFuncNavObstruction {
        pub pad_0: [u8; 0x868], // 0x0
        pub _: [u8; 0x1], // 0x868
        pub _: [u8; 0x7], // 0x869
    }

    #[repr(C)]
    pub struct CPhysWheelConstraint {
        pub pad_0: [u8; 0x508], // 0x0
        pub _: [u8; 0x4], // 0x508
        pub _: [u8; 0x4], // 0x50c
        pub _: [u8; 0x4], // 0x510
        pub _: [u8; 0x4], // 0x514
        pub _: [u8; 0x4], // 0x518
        pub _: [u8; 0x4], // 0x51c
        pub _: [u8; 0x4], // 0x520
        pub _: [u8; 0x4], // 0x524
        pub _: [u8; 0x4], // 0x528
        pub _: [u8; 0x4], // 0x52c
        pub _: [u8; 0x4], // 0x530
        pub _: [u8; 0xc], // 0x534
    }

    #[repr(C)]
    pub struct CSkyboxReference {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
    }

    #[repr(C)]
    pub struct CPointPulse {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CMolotovProjectile {
        pub pad_0: [u8; 0xb40], // 0x0
        pub _: [u8; 0x18], // 0xb40
        pub _: [u8; 0x8], // 0xb58
        pub _: [u8; 0xe0], // 0xb60
    }

    #[repr(C)]
    pub struct CFilterClass {
        pub pad_0: [u8; 0x4e0], // 0x0
        pub _: [u8; 0x8], // 0x4e0
    }

    #[repr(C)]
    pub struct CPathWithDynamicNodes {
        pub pad_0: [u8; 0x5b0], // 0x0
        pub _: [u8; 0x20], // 0x5b0
        pub _: [u8; 0x20], // 0x5d0
        pub _: [u8; 0x4], // 0x5f0
        pub _: [u8; 0xc], // 0x5f4
    }

    #[repr(C)]
    pub struct CColorCorrection {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x4], // 0x4b4
        pub _: [u8; 0x4], // 0x4b8
        pub _: [u8; 0x4], // 0x4bc
        pub _: [u8; 0x4], // 0x4c0
        pub _: [u8; 0x1], // 0x4c4
        pub _: [u8; 0x1], // 0x4c5
        pub _: [u8; 0x1], // 0x4c6
        pub _: [u8; 0x1], // 0x4c7
        pub _: [u8; 0x4], // 0x4c8
        pub _: [u8; 0x4], // 0x4cc
        pub _: [u8; 0x4], // 0x4d0
        pub _: [u8; 0x4], // 0x4d4
        pub _: [u8; 0x200], // 0x4d8
        pub _: [u8; 0x8], // 0x6d8
    }

    #[repr(C)]
    pub struct CPropDoorRotatingBreakable {
        pub pad_0: [u8; 0xf30], // 0x0
        pub _: [u8; 0x1], // 0xf30
        pub _: [u8; 0x3], // 0xf31
        pub _: [u8; 0x4], // 0xf34
        pub _: [u8; 0x18], // 0xf38
    }

    #[repr(C)]
    pub struct CLightDirectionalEntity {
        pub pad_0: [u8; 0x858], // 0x0
    }

    #[repr(C)]
    pub struct CBaseClientUIEntity {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x8], // 0x850
        pub _: [u8; 0x8], // 0x858
        pub _: [u8; 0x8], // 0x860
        pub _: [u8; 0x8], // 0x868
        pub _: [u8; 0x20], // 0x870
        pub _: [u8; 0x20], // 0x890
        pub _: [u8; 0x20], // 0x8b0
        pub _: [u8; 0x20], // 0x8d0
        pub _: [u8; 0x20], // 0x8f0
        pub _: [u8; 0x20], // 0x910
        pub _: [u8; 0x20], // 0x930
        pub _: [u8; 0x20], // 0x950
        pub _: [u8; 0x20], // 0x970
        pub _: [u8; 0x20], // 0x990
    }

    #[repr(C)]
    pub struct CBreakable {
        pub pad_0: [u8; 0x858], // 0x0
        pub _: [u8; 0x40], // 0x858
        pub _: [u8; 0x4], // 0x898
        pub _: [u8; 0x4], // 0x89c
        pub _: [u8; 0x8], // 0x8a0
        pub _: [u8; 0x8], // 0x8a8
        pub _: [u8; 0x4], // 0x8b0
        pub _: [u8; 0x4], // 0x8b4
        pub _: [u8; 0x8], // 0x8b8
        pub _: [u8; 0x4], // 0x8c0
        pub _: [u8; 0x4], // 0x8c4
        pub _: [u8; 0x18], // 0x8c8
        pub _: [u8; 0x18], // 0x8e0
        pub _: [u8; 0x20], // 0x8f8
        pub _: [u8; 0x4], // 0x918
        pub _: [u8; 0x4], // 0x91c
        pub _: [u8; 0x8], // 0x920
    }

    #[repr(C)]
    pub struct CInfoLandmark {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CBaseFilter {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x18], // 0x4b0
        pub _: [u8; 0x18], // 0x4c8
    }

    #[repr(C)]
    pub struct WeaponPurchaseTracker_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x68], // 0x8
    }

    #[repr(C)]
    pub struct CPulseCell_Outflow_PlaySceneBase__CursorState_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x20], // 0x8
    }

    #[repr(C)]
    pub struct CMapInfo {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x1], // 0x4b4
        pub _: [u8; 0x3], // 0x4b5
        pub _: [u8; 0x4], // 0x4b8
        pub _: [u8; 0x4], // 0x4bc
        pub _: [u8; 0x1], // 0x4c0
        pub _: [u8; 0x1], // 0x4c1
        pub _: [u8; 0x2], // 0x4c2
        pub _: [u8; 0x4], // 0x4c4
        pub _: [u8; 0x4], // 0x4c8
        pub _: [u8; 0x4], // 0x4cc
        pub _: [u8; 0x4], // 0x4d0
        pub _: [u8; 0x4], // 0x4d4
    }

    #[repr(C)]
    pub struct CGradientFog {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x4], // 0x4b4
        pub _: [u8; 0x4], // 0x4b8
        pub _: [u8; 0x4], // 0x4bc
        pub _: [u8; 0x4], // 0x4c0
        pub _: [u8; 0x4], // 0x4c4
        pub _: [u8; 0x4], // 0x4c8
        pub _: [u8; 0x4], // 0x4cc
        pub _: [u8; 0x4], // 0x4d0
        pub _: [u8; 0x4], // 0x4d4
        pub _: [u8; 0x4], // 0x4d8
        pub _: [u8; 0x4], // 0x4dc
        pub _: [u8; 0x1], // 0x4e0
        pub _: [u8; 0x1], // 0x4e1
        pub _: [u8; 0x6], // 0x4e2
    }

    #[repr(C)]
    pub struct CSoundOpvarSetAABBEntity {
        pub pad_0: [u8; 0x6a8], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_Outflow_PlaySequence {
        pub pad_0: [u8; 0x138], // 0x0
        pub _: [u8; 0x8], // 0x138
    }

    #[repr(C)]
    pub struct CPulseCell_Outflow_PlayDynamicVCD {
        pub pad_0: [u8; 0x138], // 0x0
    }

    #[repr(C)]
    pub struct CPointClientUIWorldTextPanel {
        pub pad_0: [u8; 0xa10], // 0x0
        pub _: [u8; 0x200], // 0xa10
    }

    #[repr(C)]
    pub struct CEntityIdentity {
        pub pad_0: [u8; 0x14], // 0x0
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x10], // 0x20
        pub _: [u8; 0x8], // 0x30
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x8], // 0x40
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x8], // 0x50
        pub _: [u8; 0x8], // 0x58
        pub _: [u8; 0x8], // 0x60
        pub _: [u8; 0x8], // 0x68
    }

    #[repr(C)]
    pub struct CPulseCell_LimitCount__Criteria_t {
        pub _: [u8; 0x1], // 0x0
    }

    #[repr(C)]
    pub struct CFuncRotator {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x4], // 0x850
        pub _: [u8; 0x1], // 0x854
        pub _: [u8; 0x3], // 0x855
        pub _: [u8; 0x4], // 0x858
        pub _: [u8; 0x4], // 0x85c
        pub _: [u8; 0x4], // 0x860
        pub _: [u8; 0x4], // 0x864
        pub _: [u8; 0x8], // 0x868
        pub _: [u8; 0x18], // 0x870
        pub _: [u8; 0x18], // 0x888
        pub _: [u8; 0x18], // 0x8a0
        pub _: [u8; 0x18], // 0x8b8
        pub _: [u8; 0x18], // 0x8d0
        pub _: [u8; 0x18], // 0x8e8
        pub _: [u8; 0x18], // 0x900
        pub _: [u8; 0x4], // 0x918
        pub _: [u8; 0x4], // 0x91c
        pub _: [u8; 0x8], // 0x920
        pub _: [u8; 0x4], // 0x928
        pub _: [u8; 0x4], // 0x92c
        pub _: [u8; 0x4], // 0x930
        pub _: [u8; 0x4], // 0x934
        pub _: [u8; 0x8], // 0x938
        pub _: [u8; 0x10], // 0x940
        pub _: [u8; 0x4], // 0x950
        pub _: [u8; 0x4], // 0x954
        pub _: [u8; 0x4], // 0x958
        pub _: [u8; 0x4], // 0x95c
        pub _: [u8; 0x8], // 0x960
        pub _: [u8; 0x20], // 0x968
        pub _: [u8; 0x8], // 0x988
        pub _: [u8; 0x4], // 0x990
        pub _: [u8; 0x4], // 0x994
        pub _: [u8; 0x4], // 0x998
        pub _: [u8; 0x4], // 0x99c
        pub _: [u8; 0x10], // 0x9a0
    }

    #[repr(C)]
    pub struct CSoundEventEntity {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x1], // 0x4a8
        pub _: [u8; 0x1], // 0x4a9
        pub _: [u8; 0x1], // 0x4aa
        pub _: [u8; 0x1], // 0x4ab
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x8], // 0x4b8
        pub _: [u8; 0x8], // 0x4c0
        pub _: [u8; 0x30], // 0x4c8
        pub _: [u8; 0x18], // 0x4f8
        pub _: [u8; 0x30], // 0x510
        pub _: [u8; 0x1c], // 0x540
        pub _: [u8; 0x4], // 0x55c
        pub _: [u8; 0x8], // 0x560
    }

    #[repr(C)]
    pub struct CInfoPlayerCounterterrorist {
        pub pad_0: [u8; 0x4b8], // 0x0
    }

    #[repr(C)]
    pub struct CEnvFade {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x18], // 0x4b8
    }

    #[repr(C)]
    pub struct CBasePlayerVData {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0xe0], // 0x28
        pub _: [u8; 0xe0], // 0x108
        pub _: [u8; 0x10], // 0x1e8
        pub _: [u8; 0x10], // 0x1f8
        pub _: [u8; 0x10], // 0x208
        pub _: [u8; 0x10], // 0x218
        pub _: [u8; 0x10], // 0x228
        pub _: [u8; 0x4], // 0x238
        pub _: [u8; 0x4], // 0x23c
        pub _: [u8; 0x4], // 0x240
        pub _: [u8; 0x4], // 0x244
        pub _: [u8; 0x4], // 0x248
        pub _: [u8; 0x4], // 0x24c
        pub _: [u8; 0x4], // 0x250
        pub _: [u8; 0x4], // 0x254
    }

    #[repr(C)]
    pub struct CTriggerImpact {
        pub pad_0: [u8; 0x9e0], // 0x0
        pub _: [u8; 0x4], // 0x9e0
        pub _: [u8; 0x4], // 0x9e4
        pub _: [u8; 0x8], // 0x9e8
        pub _: [u8; 0x28], // 0x9f0
    }

    #[repr(C)]
    pub struct CCSGameModeRules_Deathmatch {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x50], // 0x38
    }

    #[repr(C)]
    pub struct CTestPulseIO__EntityHandleIntArgs_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct CPulseCell_CursorQueue {
        pub pad_0: [u8; 0x128], // 0x0
        pub _: [u8; 0x8], // 0x128
    }

    #[repr(C)]
    pub struct CPulseCell_Value_RandomFloat {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct CPulseExecCursor {
        pub pad_0: [u8; 0xd8], // 0x0
    }

    #[repr(C)]
    pub struct CBasePropDoor {
        pub pad_0: [u8; 0xca0], // 0x0
        pub _: [u8; 0x8], // 0xca0
        pub _: [u8; 0x18], // 0xca8
        pub _: [u8; 0x4], // 0xcc0
        pub _: [u8; 0x4], // 0xcc4
        pub _: [u8; 0x4], // 0xcc8
        pub _: [u8; 0x1], // 0xccc
        pub _: [u8; 0x3], // 0xccd
        pub _: [u8; 0xc], // 0xcd0
        pub _: [u8; 0xc], // 0xcdc
        pub _: [u8; 0x4], // 0xce8
        pub _: [u8; 0x4], // 0xcec
        pub _: [u8; 0x20], // 0xcf0
        pub _: [u8; 0x4], // 0xd10
        pub _: [u8; 0xc], // 0xd14
        pub _: [u8; 0x4], // 0xd20
        pub _: [u8; 0x1c], // 0xd24
        pub _: [u8; 0x8], // 0xd40
        pub _: [u8; 0x8], // 0xd48
        pub _: [u8; 0x8], // 0xd50
        pub _: [u8; 0x8], // 0xd58
        pub _: [u8; 0x8], // 0xd60
        pub _: [u8; 0x8], // 0xd68
        pub _: [u8; 0x8], // 0xd70
        pub _: [u8; 0x8], // 0xd78
        pub _: [u8; 0x8], // 0xd80
        pub _: [u8; 0x4], // 0xd88
        pub _: [u8; 0x4], // 0xd8c
        pub _: [u8; 0x8], // 0xd90
        pub _: [u8; 0x8], // 0xd98
        pub _: [u8; 0x18], // 0xda0
        pub _: [u8; 0x18], // 0xdb8
        pub _: [u8; 0x18], // 0xdd0
        pub _: [u8; 0x18], // 0xde8
        pub _: [u8; 0x18], // 0xe00
        pub _: [u8; 0x18], // 0xe18
        pub _: [u8; 0x18], // 0xe30
        pub _: [u8; 0x18], // 0xe48
        pub _: [u8; 0x18], // 0xe60
        pub _: [u8; 0x18], // 0xe78
    }

    #[repr(C)]
    pub struct CLogicBranchList {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x80], // 0x4a8
        pub _: [u8; 0x18], // 0x528
        pub _: [u8; 0x8], // 0x540
        pub _: [u8; 0x18], // 0x548
        pub _: [u8; 0x18], // 0x560
        pub _: [u8; 0x18], // 0x578
    }

    #[repr(C)]
    pub struct CBtActionParachutePositioning {
        pub pad_0: [u8; 0x58], // 0x0
        pub _: [u8; 0x20], // 0x58
    }

    #[repr(C)]
    pub struct CAK47 {
        pub pad_0: [u8; 0x12a0], // 0x0
    }

    #[repr(C)]
    pub struct CDynamicProp {
        pub pad_0: [u8; 0xbd0], // 0x0
        pub _: [u8; 0x10], // 0xbd0
        pub _: [u8; 0x1], // 0xbe0
        pub _: [u8; 0x1], // 0xbe1
        pub _: [u8; 0x1], // 0xbe2
        pub _: [u8; 0x5], // 0xbe3
        pub _: [u8; 0x18], // 0xbe8
        pub _: [u8; 0x18], // 0xc00
        pub _: [u8; 0x18], // 0xc18
        pub _: [u8; 0x18], // 0xc30
        pub _: [u8; 0x18], // 0xc48
        pub _: [u8; 0x8], // 0xc60
        pub _: [u8; 0x4], // 0xc68
        pub _: [u8; 0x1], // 0xc6c
        pub _: [u8; 0x1], // 0xc6d
        pub _: [u8; 0x1], // 0xc6e
        pub _: [u8; 0x1], // 0xc6f
        pub _: [u8; 0x1], // 0xc70
        pub _: [u8; 0x1], // 0xc71
        pub _: [u8; 0x2], // 0xc72
        pub _: [u8; 0x4], // 0xc74
        pub _: [u8; 0x4], // 0xc78
        pub _: [u8; 0x4], // 0xc7c
        pub _: [u8; 0x4], // 0xc80
        pub _: [u8; 0xc], // 0xc84
    }

    #[repr(C)]
    pub struct CHostageAlias_info_hostage_spawn {
        pub pad_0: [u8; 0x2da0], // 0x0
    }

    #[repr(C)]
    pub struct CFilterTeam {
        pub pad_0: [u8; 0x4e0], // 0x0
        pub _: [u8; 0x8], // 0x4e0
    }

    #[repr(C)]
    pub struct CFuncConveyor {
        pub pad_0: [u8; 0x850], // 0x0
        pub _: [u8; 0x8], // 0x850
        pub _: [u8; 0x4], // 0x858
        pub _: [u8; 0x4], // 0x85c
        pub _: [u8; 0xc], // 0x860
        pub _: [u8; 0xc], // 0x86c
        pub _: [u8; 0x4], // 0x878
        pub _: [u8; 0x4], // 0x87c
        pub _: [u8; 0x4], // 0x880
        pub _: [u8; 0x4], // 0x884
        pub _: [u8; 0x8], // 0x888
        pub _: [u8; 0x18], // 0x890
    }

    #[repr(C)]
    pub struct CTriggerPhysics {
        pub pad_0: [u8; 0x9d0], // 0x0
        pub _: [u8; 0x8], // 0x9d0
        pub _: [u8; 0x4], // 0x9d8
        pub _: [u8; 0x4], // 0x9dc
        pub _: [u8; 0x4], // 0x9e0
        pub _: [u8; 0x4], // 0x9e4
        pub _: [u8; 0x4], // 0x9e8
        pub _: [u8; 0x4], // 0x9ec
        pub _: [u8; 0x4], // 0x9f0
        pub _: [u8; 0x4], // 0x9f4
        pub _: [u8; 0xc], // 0x9f8
        pub _: [u8; 0x4], // 0xa04
        pub _: [u8; 0xc], // 0xa08
        pub _: [u8; 0xc], // 0xa14
        pub _: [u8; 0x1], // 0xa20
        pub _: [u8; 0x7], // 0xa21
    }

    #[repr(C)]
    pub struct CInfoInstructorHintBombTargetB {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CFuncTimescale {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x4], // 0x4b4
        pub _: [u8; 0x8], // 0x4b8
    }

    #[repr(C)]
    pub struct CSoundOpvarSetPointEntity {
        pub pad_0: [u8; 0x550], // 0x0
        pub _: [u8; 0x18], // 0x550
        pub _: [u8; 0x18], // 0x568
        pub _: [u8; 0x44], // 0x580
        pub _: [u8; 0x4], // 0x5c4
        pub _: [u8; 0x4], // 0x5c8
        pub _: [u8; 0x4], // 0x5cc
        pub _: [u8; 0x4], // 0x5d0
        pub _: [u8; 0x4], // 0x5d4
        pub _: [u8; 0x4], // 0x5d8
        pub _: [u8; 0x4], // 0x5dc
        pub _: [u8; 0x4], // 0x5e0
        pub _: [u8; 0x1], // 0x5e4
        pub _: [u8; 0x3], // 0x5e5
        pub _: [u8; 0x4], // 0x5e8
        pub _: [u8; 0x4], // 0x5ec
        pub _: [u8; 0xc], // 0x5f0
        pub _: [u8; 0x4], // 0x5fc
        pub _: [u8; 0x8], // 0x600
        pub _: [u8; 0x8], // 0x608
        pub _: [u8; 0x4], // 0x610
        pub _: [u8; 0xc], // 0x614
        pub _: [u8; 0xc], // 0x620
        pub _: [u8; 0xc], // 0x62c
        pub _: [u8; 0x8], // 0x638
    }

    #[repr(C)]
    pub struct CBasePlayerWeaponVData {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0xe0], // 0x28
        pub _: [u8; 0xe0], // 0x108
        pub _: [u8; 0xe0], // 0x1e8
        pub _: [u8; 0x1], // 0x2c8
        pub _: [u8; 0x7], // 0x2c9
        pub _: [u8; 0x20], // 0x2d0
        pub _: [u8; 0xe0], // 0x2f0
        pub _: [u8; 0x8], // 0x3d0
        pub _: [u8; 0xe0], // 0x3d8
        pub _: [u8; 0x4], // 0x4b8
        pub _: [u8; 0x4], // 0x4bc
        pub _: [u8; 0x4], // 0x4c0
        pub _: [u8; 0x1], // 0x4c4
        pub _: [u8; 0x1], // 0x4c5
        pub _: [u8; 0x1], // 0x4c6
        pub _: [u8; 0x1], // 0x4c7
        pub _: [u8; 0x4], // 0x4c8
        pub _: [u8; 0x1], // 0x4cc
        pub _: [u8; 0x1], // 0x4cd
        pub _: [u8; 0x1], // 0x4ce
        pub _: [u8; 0x1], // 0x4cf
        pub _: [u8; 0x4], // 0x4d0
        pub _: [u8; 0x4], // 0x4d4
        pub _: [u8; 0x4], // 0x4d8
        pub _: [u8; 0x4], // 0x4dc
        pub _: [u8; 0x1], // 0x4e0
        pub _: [u8; 0x1], // 0x4e1
        pub _: [u8; 0x2], // 0x4e2
        pub _: [u8; 0x4], // 0x4e4
        pub _: [u8; 0x4], // 0x4e8
        pub _: [u8; 0x4], // 0x4ec
        pub _: [u8; 0x8], // 0x4f0
        pub _: [u8; 0x28], // 0x4f8
    }

    #[repr(C)]
    pub struct CInfoTargetServerOnly {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CCSGO_RushIntroCharacterPosition {
        pub pad_0: [u8; 0x1468], // 0x0
    }

    #[repr(C)]
    pub struct CServerRagdollTrigger {
        pub pad_0: [u8; 0x9c8], // 0x0
    }

    #[repr(C)]
    pub struct CDynamicPropAlias_dynamic_prop {
        pub pad_0: [u8; 0xc90], // 0x0
    }

    #[repr(C)]
    pub struct CMarkupVolumeTagged {
        pub pad_0: [u8; 0x858], // 0x0
        pub _: [u8; 0x18], // 0x858
        pub _: [u8; 0x18], // 0x870
        pub _: [u8; 0x1], // 0x888
        pub _: [u8; 0x1], // 0x889
        pub _: [u8; 0x1], // 0x88a
        pub _: [u8; 0x1], // 0x88b
        pub _: [u8; 0x4], // 0x88c
    }

    #[repr(C)]
    pub struct CInfoParticleTarget {
        pub pad_0: [u8; 0x4a8], // 0x0
    }

    #[repr(C)]
    pub struct CEnvCubemap {
        pub pad_0: [u8; 0x528], // 0x0
        pub _: [u8; 0x8], // 0x528
        pub _: [u8; 0x4], // 0x530
        pub _: [u8; 0x4], // 0x534
        pub _: [u8; 0xc], // 0x538
        pub _: [u8; 0xc], // 0x544
        pub _: [u8; 0x4], // 0x550
        pub _: [u8; 0x4], // 0x554
        pub _: [u8; 0x4], // 0x558
        pub _: [u8; 0x4], // 0x55c
        pub _: [u8; 0x4], // 0x560
        pub _: [u8; 0xc], // 0x564
        pub _: [u8; 0x4], // 0x570
        pub _: [u8; 0x1], // 0x574
        pub _: [u8; 0x1], // 0x575
        pub _: [u8; 0x1], // 0x576
        pub _: [u8; 0x1], // 0x577
        pub _: [u8; 0x10], // 0x578
        pub _: [u8; 0x8], // 0x588
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
        pub pad_0: [u8; 0x9c8], // 0x0
        pub _: [u8; 0x8], // 0x9c8
        pub _: [u8; 0x8], // 0x9d0
        pub _: [u8; 0x8], // 0x9d8
        pub _: [u8; 0x4], // 0x9e0
        pub _: [u8; 0x4], // 0x9e4
        pub _: [u8; 0x1], // 0x9e8
        pub _: [u8; 0x1], // 0x9e9
        pub _: [u8; 0x6], // 0x9ea
        pub _: [u8; 0x18], // 0x9f0
        pub _: [u8; 0x8], // 0xa08
        pub _: [u8; 0x8], // 0xa10
        pub _: [u8; 0x4], // 0xa18
        pub _: [u8; 0x4], // 0xa1c
        pub _: [u8; 0x18], // 0xa20
        pub _: [u8; 0x18], // 0xa38
        pub _: [u8; 0x18], // 0xa50
    }

    #[repr(C)]
    pub struct CPhysicsPropOverride {
        pub pad_0: [u8; 0xd10], // 0x0
    }

    #[repr(C)]
    pub struct CTriggerSave {
        pub pad_0: [u8; 0x9c8], // 0x0
        pub _: [u8; 0x4], // 0x9c8
        pub _: [u8; 0x4], // 0x9cc
        pub _: [u8; 0x4], // 0x9d0
        pub _: [u8; 0x4], // 0x9d4
    }

    #[repr(C)]
    pub struct CPointHurt {
        pub pad_0: [u8; 0x4a8], // 0x0
        pub _: [u8; 0x4], // 0x4a8
        pub _: [u8; 0x4], // 0x4ac
        pub _: [u8; 0x4], // 0x4b0
        pub _: [u8; 0x4], // 0x4b4
        pub _: [u8; 0x8], // 0x4b8
        pub _: [u8; 0x8], // 0x4c0
    }

    #[repr(C)]
    pub struct CBaseAnimGraphAlias_baseanimating {
        pub pad_0: [u8; 0xa40], // 0x0
    }

    #[repr(C)]
    pub struct CBasePlayerController {
        pub pad_0: [u8; 0x4b0], // 0x0
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x28], // 0x4b8
        pub _: [u8; 0x4], // 0x4e0
        pub _: [u8; 0x8], // 0x4e4
        pub _: [u8; 0x4], // 0x4ec
        pub _: [u8; 0x8], // 0x4f0
        pub _: [u8; 0x18], // 0x4f8
        pub _: [u8; 0x4], // 0x510
        pub _: [u8; 0x4], // 0x514
        pub _: [u8; 0x4], // 0x518
        pub _: [u8; 0x84], // 0x51c
        pub _: [u8; 0x8], // 0x5a0
        pub _: [u8; 0x4], // 0x5a8
        pub _: [u8; 0x1], // 0x5ac
        pub _: [u8; 0x7], // 0x5ad
        pub _: [u8; 0x1], // 0x5b4
        pub _: [u8; 0x13b], // 0x5b5
        pub _: [u8; 0x4], // 0x6f0
        pub _: [u8; 0x4], // 0x6f4
        pub _: [u8; 0x4], // 0x6f8
        pub _: [u8; 0x4], // 0x6fc
        pub _: [u8; 0x10], // 0x700
        pub _: [u8; 0x8], // 0x710
        pub _: [u8; 0x4], // 0x718
        pub _: [u8; 0xbc], // 0x71c
    }

    #[repr(C)]
    pub struct CRangeFloat {
        pub _: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct CDestructiblePart {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x8], // 0x30
        pub _: [u8; 0x18], // 0x38
    }

    #[repr(C)]
    pub struct PhysBlockHeader_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct RelationshipOverride_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
    }

    #[repr(C)]
    pub struct AutoRoomDoorwayPairs_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0xc], // 0xc
    }

    #[repr(C)]
    pub struct NavHull_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CDebugSnapshotData_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0xc], // 0x14
        pub _: [u8; 0x20], // 0x20
        pub _: [u8; 0x98], // 0x40
        pub _: [u8; 0x8], // 0xd8
        pub _: [u8; 0x18], // 0xe0
        pub _: [u8; 0x8], // 0xf8
        pub _: [u8; 0x8], // 0x100
        pub _: [u8; 0x8], // 0x108
        pub _: [u8; 0x10], // 0x110
        pub _: [u8; 0x10], // 0x120
    }

    #[repr(C)]
    pub struct CRemapFloat {
        pub _: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct CHintMessage {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
        pub _: [u8; 0x8], // 0x20
    }

    #[repr(C)]
    pub struct CNavAttribute {
        pub pad_0: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct AI_GroundRootMotionMotor_DebugSnapshotData_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x8], // 0x30
        pub _: [u8; 0x8], // 0x38
        pub _: [u8; 0x8], // 0x40
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
        pub _: [u8; 0x8], // 0x58
        pub _: [u8; 0x4], // 0x60
        pub _: [u8; 0x4], // 0x64
        pub _: [u8; 0x4], // 0x68
        pub _: [u8; 0x4], // 0x6c
        pub _: [u8; 0x8], // 0x70
        pub _: [u8; 0x18], // 0x78
    }

    #[repr(C)]
    pub struct ParticleNode_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0xc], // 0x10
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
    }

    #[repr(C)]
    pub struct CFootstepTableHandle {
        pub pad_0: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct CDecalGroupVData {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x8], // 0x18
    }

    #[repr(C)]
    pub struct CNmSnapWeaponTask {
        pub pad_0: [u8; 0x80], // 0x0
    }

    #[repr(C)]
    pub struct CPlayerControllerComponent {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x38], // 0x8
    }

    #[repr(C)]
    pub struct CResponseQueue {
        pub pad_0: [u8; 0x38], // 0x0
        pub _: [u8; 0x18], // 0x38
    }

    #[repr(C)]
    pub struct CodeGenAABB_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0xc], // 0xc
    }

    #[repr(C)]
    pub struct CScriptUniformRandomStream {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x94], // 0x8
        pub _: [u8; 0x4], // 0x9c
    }

    #[repr(C)]
    pub struct lerpdata_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x14], // 0xc
        pub _: [u8; 0x10], // 0x20
        pub _: [u8; 0x20], // 0x30
    }

    #[repr(C)]
    pub struct WrappedPhysicsJoint_t {
        pub _: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct SimpleConstraintSoundProfile {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x8], // 0x18
    }

    #[repr(C)]
    pub struct CSimpleSimTimer {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct AI_BaseNPCAnimGraph_DebugSnapshotData_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x8], // 0x30
        pub _: [u8; 0x8], // 0x38
        pub _: [u8; 0x8], // 0x40
    }

    #[repr(C)]
    pub struct CPhysicsBodyGameMarkupData {
        pub _: [u8; 0x28], // 0x0
    }

    #[repr(C)]
    pub struct SoundCommand_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0xc], // 0x14
    }

    #[repr(C)]
    pub struct modifiedconvars_t {
        pub _: [u8; 0x80], // 0x0
        pub _: [u8; 0x80], // 0x80
        pub _: [u8; 0x80], // 0x100
    }

    #[repr(C)]
    pub struct CTestPulseIOComponent_Derived {
        pub pad_0: [u8; 0x30], // 0x0
    }

    #[repr(C)]
    pub struct SAVE_HEADER {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x10], // 0x10
        pub _: [u8; 0x30], // 0x20
        pub _: [u8; 0x10], // 0x50
    }

    #[repr(C)]
    pub struct CSkillDamage {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct DebugSnapshotBaseStructuredData_t {
        pub pad_0: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct AI_DefaultNPC_DebugSnapshotData_t__PathQuery_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
    }

    #[repr(C)]
    pub struct CFloatExponentialMovingAverage {
        pub pad_0: [u8; 0x14], // 0x0
    }

    #[repr(C)]
    pub struct physics_save_sphere_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CAnimGraph2InstancePtr {
        pub pad_0: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct GAME_HEADER {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
    }

    #[repr(C)]
    pub struct ChickenPathCost {
        pub pad_0: [u8; 0x30], // 0x0
    }

    #[repr(C)]
    pub struct AI_BaseNPC_DebugSnapshotData_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x8], // 0x30
        pub _: [u8; 0x8], // 0x38
        pub _: [u8; 0x18], // 0x40
        pub _: [u8; 0x18], // 0x58
        pub _: [u8; 0x48], // 0x70
        pub _: [u8; 0x50], // 0xb8
        pub _: [u8; 0x38], // 0x108
        pub _: [u8; 0x48], // 0x140
    }

    #[repr(C)]
    pub struct CDebugDrawHistoryData {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x10], // 0x8
        pub _: [u8; 0x10], // 0x18
        pub _: [u8; 0x10], // 0x28
        pub _: [u8; 0x10], // 0x38
        pub _: [u8; 0x10], // 0x48
        pub _: [u8; 0x10], // 0x58
        pub _: [u8; 0x10], // 0x68
    }

    #[repr(C)]
    pub struct CNmEventConsumer {
        pub pad_0: [u8; 0xb0], // 0x0
    }

    #[repr(C)]
    pub struct CNetworkViewOffsetVector {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
    }

    #[repr(C)]
    pub struct AmmoIndex_t {
        pub _: [u8; 0x1], // 0x0
    }

    #[repr(C)]
    pub struct CNmEventConsumerContact {
        pub pad_0: [u8; 0xb0], // 0x0
    }

    #[repr(C)]
    pub struct CDestructiblePartsSystemData {
        pub _: [u8; 0x28], // 0x0
        pub _: [u8; 0x8], // 0x28
    }

    #[repr(C)]
    pub struct CRopeOverlapHit {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
    }

    #[repr(C)]
    pub struct ActorClipEntry_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct CNavPathCostForTests {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct ResponseContext_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct ApproachAreaCost {
        pub pad_0: [u8; 0x30], // 0x0
    }

    #[repr(C)]
    pub struct CNavVolumeSphericalShell {
        pub pad_0: [u8; 0x88], // 0x0
        pub _: [u8; 0x8], // 0x88
    }

    #[repr(C)]
    pub struct CPlayerPawnComponent {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x28], // 0x8
        pub _: [u8; 0x18], // 0x30
    }

    #[repr(C)]
    pub struct AI_FacingServices_DebugSnapshotData_t {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x10], // 0x18
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x8], // 0x30
        pub _: [u8; 0x8], // 0x38
        pub _: [u8; 0x8], // 0x40
    }

    #[repr(C)]
    pub struct AI_Navigator_DebugSnapshotData_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0xc], // 0x18
        pub _: [u8; 0xc], // 0x24
        pub _: [u8; 0x18], // 0x30
        pub _: [u8; 0x8], // 0x48
    }

    #[repr(C)]
    pub struct CDecalInstance {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0xc], // 0x20
        pub _: [u8; 0xc], // 0x2c
        pub _: [u8; 0xc], // 0x38
        pub _: [u8; 0xc], // 0x44
        pub _: [u8; 0xc], // 0x50
        pub _: [u8; 0x4], // 0x5c
        pub _: [u8; 0x4], // 0x60
        pub _: [u8; 0x4], // 0x64
        pub _: [u8; 0x4], // 0x68
        pub _: [u8; 0x4], // 0x6c
        pub _: [u8; 0x30], // 0x70
        pub _: [u8; 0x30], // 0xa0
        pub _: [u8; 0x4], // 0xd0
        pub _: [u8; 0x4], // 0xd4
        pub _: [u8; 0x4], // 0xd8
        pub _: [u8; 0x4], // 0xdc
        pub _: [u8; 0x4], // 0xe0
        pub _: [u8; 0x14], // 0xe4
        pub _: [u8; 0x4], // 0xf8
        pub _: [u8; 0x2], // 0xfc
        pub _: [u8; 0x1], // 0xfe
        pub _: [u8; 0x9], // 0xff
    }

    #[repr(C)]
    pub struct CGameScriptedMoveData {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0xc], // 0xc
        pub _: [u8; 0xc], // 0x18
        pub _: [u8; 0xc], // 0x24
        pub _: [u8; 0xc], // 0x30
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x4], // 0x44
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x1], // 0x4c
        pub _: [u8; 0x1], // 0x4d
        pub _: [u8; 0x1], // 0x4e
        pub _: [u8; 0x1], // 0x4f
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
        pub _: [u8; 0xc], // 0x58
        pub _: [u8; 0xc], // 0x64
        pub _: [u8; 0x4], // 0x70
    }

    #[repr(C)]
    pub struct CSkeletonAnimationController {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct CNavVolumeMarkupVolume {
        pub pad_0: [u8; 0xe0], // 0x0
    }

    #[repr(C)]
    pub struct CResponseCriteriaSet {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x8], // 0x30
    }

    #[repr(C)]
    pub struct FuncRotatorRotationSummary_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct CAI_Expresser {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x28], // 0x10
        pub _: [u8; 0x28], // 0x38
        pub _: [u8; 0x4], // 0x60
        pub _: [u8; 0x4], // 0x64
        pub _: [u8; 0x4], // 0x68
        pub _: [u8; 0x4], // 0x6c
        pub _: [u8; 0x4], // 0x70
        pub _: [u8; 0x4], // 0x74
        pub _: [u8; 0x1], // 0x78
        pub _: [u8; 0x1], // 0x79
        pub _: [u8; 0x2], // 0x7a
        pub _: [u8; 0x1c], // 0x7c
        pub _: [u8; 0x8], // 0x98
    }

    #[repr(C)]
    pub struct IChoreoServices {
        pub pad_0: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct CNmEventConsumerAttributes {
        pub pad_0: [u8; 0xb0], // 0x0
    }

    #[repr(C)]
    pub struct CStopwatch {
        pub pad_0: [u8; 0xc], // 0x0
        pub _: [u8; 0x4], // 0xc
    }

    #[repr(C)]
    pub struct CNmEventConsumerCloth {
        pub pad_0: [u8; 0xb0], // 0x0
    }

    #[repr(C)]
    pub struct ResponseParams {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x6], // 0x12
        pub _: [u8; 0x8], // 0x18
    }

    #[repr(C)]
    pub struct SPAWNGROUP_HEADER {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x30], // 0x10
        pub _: [u8; 0x1], // 0x40
        pub _: [u8; 0xf], // 0x41
    }

    #[repr(C)]
    pub struct globalentity_t {
        pub _: [u8; 0x2], // 0x0
        pub _: [u8; 0x2], // 0x2
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
    }

    #[repr(C)]
    pub struct CAnimGraphControllerPtr {
        pub _: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct ConstraintSoundInfo {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
        pub _: [u8; 0x20], // 0x20
        pub _: [u8; 0x10], // 0x40
        pub _: [u8; 0x8], // 0x50
        pub _: [u8; 0x20], // 0x58
        pub _: [u8; 0x8], // 0x78
        pub _: [u8; 0x8], // 0x80
        pub _: [u8; 0x8], // 0x88
        pub _: [u8; 0x1], // 0x90
        pub _: [u8; 0x7], // 0x91
    }

    #[repr(C)]
    pub struct CPhysicsBodyGameMarkup {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct PointCameraSettings_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
    }

    #[repr(C)]
    pub struct HUDPanelHasClass_t {
        pub _: [u8; 0x2], // 0x0
        pub _: [u8; 0x2], // 0x2
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct DebugDrawBoneTransforms_t {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x1020], // 0x10
    }

    #[repr(C)]
    pub struct INavPathCost {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct CVectorMovingAverage {
        pub pad_0: [u8; 0x20], // 0x0
    }

    #[repr(C)]
    pub struct HUDPanelDialogVariableString_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x2], // 0x8
        pub _: [u8; 0x6], // 0xa
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
    }

    #[repr(C)]
    pub struct CSoundEnvelope {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
    }

    #[repr(C)]
    pub struct dynpitchvol_base_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x4], // 0x44
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
        pub _: [u8; 0x4], // 0x58
        pub _: [u8; 0x4], // 0x5c
        pub _: [u8; 0x4], // 0x60
    }

    #[repr(C)]
    pub struct CStopwatchBase {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
    }

    #[repr(C)]
    pub struct AI_GroundRootMotionMotor_DebugSnapshotData_t__Event_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x10], // 0x8
    }

    #[repr(C)]
    pub struct CMarkupSearch_PathCostAreaFilter {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x2b0], // 0x8
    }

    #[repr(C)]
    pub struct CNavVolumeVector {
        pub pad_0: [u8; 0x80], // 0x0
        pub _: [u8; 0x20], // 0x80
    }

    #[repr(C)]
    pub struct NavGravity_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0x4], // 0xc
    }

    #[repr(C)]
    pub struct PulseScriptedSequenceData_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x1], // 0x34
        pub _: [u8; 0x1], // 0x35
        pub _: [u8; 0x1], // 0x36
        pub _: [u8; 0x1], // 0x37
    }

    #[repr(C)]
    pub struct CChoreo_GraphController {
        pub pad_0: [u8; 0xc0], // 0x0
        pub _: [u8; 0x18], // 0xc0
        pub _: [u8; 0x18], // 0xd8
        pub _: [u8; 0x18], // 0xf0
    }

    #[repr(C)]
    pub struct CBaseAnimGraphDestructibleParts_GraphController {
        pub pad_0: [u8; 0xc0], // 0x0
    }

    #[repr(C)]
    pub struct ExternalAnimGraphHandle_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CPhysicsShake {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x10], // 0x8
    }

    #[repr(C)]
    pub struct CInfoChoreoAnchorPosition {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x10], // 0x10
        pub _: [u8; 0xc], // 0x20
        pub _: [u8; 0xc], // 0x2c
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0xc], // 0x44
    }

    #[repr(C)]
    pub struct VelocitySampler {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
    }

    #[repr(C)]
    pub struct CTakeDamageResult {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x10], // 0x8
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0xc], // 0x28
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x8], // 0x40
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x1], // 0x50
        pub _: [u8; 0x3], // 0x51
        pub _: [u8; 0xc], // 0x54
    }

    #[repr(C)]
    pub struct CMarkupSearchHelper {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0xc], // 0x18
        pub _: [u8; 0x1], // 0x24
        pub _: [u8; 0x1], // 0x25
        pub _: [u8; 0x28a], // 0x26
    }

    #[repr(C)]
    pub struct SceneEventId_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CCommentarySystem {
        pub pad_0: [u8; 0x12], // 0x0
        pub _: [u8; 0x2], // 0x12
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x1], // 0x1c
        pub _: [u8; 0x3], // 0x1d
        pub _: [u8; 0x18], // 0x20
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x8], // 0x40
        pub _: [u8; 0x18], // 0x48
    }

    #[repr(C)]
    pub struct ResponseFollowup {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x8], // 0x14
    }

    #[repr(C)]
    pub struct AmmoTypeInfo_t {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0xc], // 0x10
        pub _: [u8; 0x8], // 0x1c
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0xc], // 0x2c
    }

    #[repr(C)]
    pub struct CNetworkTransmitComponent {
        pub pad_0: [u8; 0x184], // 0x0
        pub _: [u8; 0x4c], // 0x184
    }

    #[repr(C)]
    pub struct AI_MotorServices_DebugSnapshotData_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0xc], // 0xc
        pub _: [u8; 0x18], // 0x18
        pub _: [u8; 0x8], // 0x30
    }

    #[repr(C)]
    pub struct CPathQueryUtil {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x20], // 0x10
        pub _: [u8; 0x18], // 0x30
        pub _: [u8; 0x18], // 0x48
        pub _: [u8; 0x18], // 0x60
        pub _: [u8; 0x8], // 0x78
    }

    #[repr(C)]
    pub struct RagdollCreationParams_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct CRelativeTransform {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x20], // 0x10
        pub _: [u8; 0x20], // 0x30
        pub _: [u8; 0x10], // 0x50
    }

    #[repr(C)]
    pub struct CRangeInt {
        pub _: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct PathCost {
        pub pad_0: [u8; 0x3c], // 0x0
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x1c], // 0x44
    }

    #[repr(C)]
    pub struct globalentitydatabase_t {
        pub pad_0: [u8; 0x60], // 0x0
        pub _: [u8; 0x18], // 0x60
    }

    #[repr(C)]
    pub struct CNmEventConsumerPulse {
        pub pad_0: [u8; 0xc8], // 0x0
    }

    #[repr(C)]
    pub struct CNMEventPulseState_t {
        pub _: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct CWorldCompositionChunkReferenceElement_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct CRandStopwatch {
        pub pad_0: [u8; 0xc], // 0x0
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
    }

    #[repr(C)]
    pub struct CMovementStatsProperty {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x2c], // 0x14
    }

    #[repr(C)]
    pub struct CGameChoreoServices {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x8], // 0x18
    }

    #[repr(C)]
    pub struct PhysObjectHeader_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x18], // 0x20
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
    }

    #[repr(C)]
    pub struct CSimpleStopwatch {
        pub pad_0: [u8; 0xc], // 0x0
    }

    #[repr(C)]
    pub struct CShatterGlassShard {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x8], // 0x30
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x4], // 0x44
        pub _: [u8; 0xc], // 0x48
        pub _: [u8; 0x4], // 0x54
        pub _: [u8; 0x4], // 0x58
        pub _: [u8; 0x4], // 0x5c
        pub _: [u8; 0x4], // 0x60
        pub _: [u8; 0x4], // 0x64
        pub _: [u8; 0x4], // 0x68
        pub _: [u8; 0x4], // 0x6c
        pub _: [u8; 0x4], // 0x70
        pub _: [u8; 0x4], // 0x74
        pub _: [u8; 0x8], // 0x78
        pub _: [u8; 0x4], // 0x80
        pub _: [u8; 0x8], // 0x84
        pub _: [u8; 0x8], // 0x8c
        pub _: [u8; 0x1], // 0x94
        pub _: [u8; 0x1], // 0x95
        pub _: [u8; 0x2], // 0x96
        pub _: [u8; 0x4], // 0x98
        pub _: [u8; 0x4], // 0x9c
        pub _: [u8; 0x18], // 0xa0
    }

    #[repr(C)]
    pub struct ragdollelement_t {
        pub _: [u8; 0x20], // 0x0
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x8], // 0x28
    }

    #[repr(C)]
    pub struct CGameScriptedMoveDef_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0xc], // 0x10
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x1], // 0x28
        pub _: [u8; 0x3], // 0x29
        pub _: [u8; 0x4], // 0x2c
    }

    #[repr(C)]
    pub struct CNetworkOriginCellCoordQuantizedVector {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x2], // 0x12
        pub _: [u8; 0x2], // 0x14
        pub _: [u8; 0x2], // 0x16
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
    }

    #[repr(C)]
    pub struct CBaseAnimGraphVariationUserData {
        pub pad_0: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct DynamicVolumeDef_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0xc], // 0xc
        pub _: [u8; 0xc], // 0x18
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
    }

    #[repr(C)]
    pub struct CNetworkOriginQuantizedVector {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
    }

    #[repr(C)]
    pub struct magnetted_objects_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct CHintMessageQueue {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
        pub _: [u8; 0x8], // 0x20
    }

    #[repr(C)]
    pub struct CSkillInt {
        pub _: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct thinkfunc_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x8], // 0x18
    }

    #[repr(C)]
    pub struct CNavHullPresetVData {
        pub _: [u8; 0x18], // 0x0
    }

    #[repr(C)]
    pub struct CSkillFloat {
        pub _: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct WaterWheelFrictionScale_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct ragdollhierarchyjoint_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0xc], // 0x4
    }

    #[repr(C)]
    pub struct CSceneEventInfo {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x8], // 0x30
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x1], // 0x44
        pub _: [u8; 0x27], // 0x45
        pub _: [u8; 0x4], // 0x6c
        pub _: [u8; 0x4], // 0x70
        pub _: [u8; 0x1], // 0x74
        pub _: [u8; 0x3], // 0x75
    }

    #[repr(C)]
    pub struct SoundeventPathCornerPairNetworked_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0xc], // 0xc
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
    }

    #[repr(C)]
    pub struct CSoundPatch {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x10], // 0x8
        pub _: [u8; 0x24], // 0x18
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x8], // 0x40
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
        pub _: [u8; 0xc], // 0x58
        pub _: [u8; 0x4], // 0x64
        pub _: [u8; 0x38], // 0x68
        pub _: [u8; 0x4], // 0xa0
        pub _: [u8; 0x4], // 0xa4
        pub _: [u8; 0x8], // 0xa8
    }

    #[repr(C)]
    pub struct CCS2ChickenGraphController {
        pub pad_0: [u8; 0xc0], // 0x0
        pub _: [u8; 0x18], // 0xc0
        pub _: [u8; 0x20], // 0xd8
        pub _: [u8; 0x18], // 0xf8
        pub _: [u8; 0x18], // 0x110
        pub _: [u8; 0x18], // 0x128
        pub _: [u8; 0x18], // 0x140
        pub _: [u8; 0x18], // 0x158
        pub _: [u8; 0x18], // 0x170
        pub _: [u8; 0x18], // 0x188
        pub _: [u8; 0x18], // 0x1a0
        pub _: [u8; 0x18], // 0x1b8
        pub _: [u8; 0x18], // 0x1d0
        pub _: [u8; 0x8], // 0x1e8
    }

    #[repr(C)]
    pub struct levellist_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0xc], // 0x14
        pub _: [u8; 0x10], // 0x20
    }

    #[repr(C)]
    pub struct locksound_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
    }

    #[repr(C)]
    pub struct DecalGroupOption_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
    }

    #[repr(C)]
    pub struct CBtNode {
        pub pad_0: [u8; 0x58], // 0x0
    }

    #[repr(C)]
    pub struct CAnimGraphControllerManager {
        pub _: [u8; 0x90], // 0x0
        pub _: [u8; 0x8], // 0x90
    }

    #[repr(C)]
    pub struct CFiringModeFloat {
        pub _: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct CCopyRecipientFilter {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x20], // 0x10
        pub _: [u8; 0x8], // 0x30
    }

    #[repr(C)]
    pub struct CFloatMovingAverage {
        pub pad_0: [u8; 0x20], // 0x0
    }

    #[repr(C)]
    pub struct FuncMoverMovementSummary_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
    }

    #[repr(C)]
    pub struct CSmoothFunc {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x8], // 0x18
    }

    #[repr(C)]
    pub struct IHasAttributes {
        pub pad_0: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct ragdoll_t {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x18], // 0x18
        pub _: [u8; 0x18], // 0x30
        pub _: [u8; 0x1], // 0x48
        pub _: [u8; 0x7], // 0x49
    }

    #[repr(C)]
    pub struct HullFlags_t {
        pub _: [u8; 0x1], // 0x0
        pub _: [u8; 0x1], // 0x1
        pub _: [u8; 0x1], // 0x2
        pub _: [u8; 0x1], // 0x3
        pub _: [u8; 0x1], // 0x4
        pub _: [u8; 0x1], // 0x5
        pub _: [u8; 0x1], // 0x6
        pub _: [u8; 0x1], // 0x7
        pub _: [u8; 0x1], // 0x8
        pub _: [u8; 0x1], // 0x9
    }

    #[repr(C)]
    pub struct CNavFlags {
        pub _: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct ISkeletonAnimationController {
        pub pad_0: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct CNetworkOriginQuantizedVectorWS {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
    }

    #[repr(C)]
    pub struct GameAmmoTypeInfo_t {
        pub pad_0: [u8; 0x38], // 0x0
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x14], // 0x3c
    }

    #[repr(C)]
    pub struct CMotorController {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0xc], // 0x10
        pub _: [u8; 0x4], // 0x1c
    }

    #[repr(C)]
    pub struct CSimTimer {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
    }

    #[repr(C)]
    pub struct CBaseIssue {
        pub pad_0: [u8; 0x20], // 0x0
        pub _: [u8; 0x40], // 0x20
        pub _: [u8; 0x104], // 0x60
        pub _: [u8; 0x4], // 0x164
        pub _: [u8; 0x4], // 0x168
        pub _: [u8; 0x4], // 0x16c
        pub _: [u8; 0x8], // 0x170
    }

    #[repr(C)]
    pub struct CDynamicPropGraphController {
        pub pad_0: [u8; 0xc0], // 0x0
        pub _: [u8; 0x18], // 0xc0
    }

    #[repr(C)]
    pub struct SummaryTakeDamageInfo_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x118], // 0x8
        pub _: [u8; 0x60], // 0x120
        pub _: [u8; 0x8], // 0x180
    }

    #[repr(C)]
    pub struct INavObstacle {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct entitytable_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0xc], // 0x8
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x8], // 0x30
        pub _: [u8; 0x10], // 0x38
        pub _: [u8; 0x8], // 0x48
    }

    #[repr(C)]
    pub struct AI_MotorServices_DebugSnapshotData_t__MotorPathWaypoint_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
    }

    #[repr(C)]
    pub struct CRR_Response {
        pub _: [u8; 0x1], // 0x0
        pub _: [u8; 0xc0], // 0x1
        pub _: [u8; 0x9f], // 0xc1
        pub _: [u8; 0x20], // 0x160
        pub _: [u8; 0x4], // 0x180
        pub _: [u8; 0x4], // 0x184
        pub _: [u8; 0x8], // 0x188
        pub _: [u8; 0x8], // 0x190
        pub _: [u8; 0x1c], // 0x198
        pub _: [u8; 0x4], // 0x1b4
    }

    #[repr(C)]
    pub struct CVectorExponentialMovingAverage {
        pub pad_0: [u8; 0x2c], // 0x0
    }

    #[repr(C)]
    pub struct CNmAimCSNode__CDefinition {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x2], // 0x18
        pub _: [u8; 0x2], // 0x1a
        pub _: [u8; 0x2], // 0x1c
        pub _: [u8; 0x2], // 0x1e
        pub _: [u8; 0x2], // 0x20
        pub _: [u8; 0x2], // 0x22
        pub _: [u8; 0x2], // 0x24
        pub _: [u8; 0x2], // 0x26
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x8], // 0x30
    }

    #[repr(C)]
    pub struct CConstantForceController {
        pub pad_0: [u8; 0xc], // 0x0
        pub _: [u8; 0xc], // 0xc
        pub _: [u8; 0xc], // 0x18
        pub _: [u8; 0xc], // 0x24
        pub _: [u8; 0x10], // 0x30
    }

    #[repr(C)]
    pub struct WaterWheelDrag_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct CTakeDamageInfo {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0xc], // 0x8
        pub _: [u8; 0xc], // 0x14
        pub _: [u8; 0xc], // 0x20
        pub _: [u8; 0xc], // 0x2c
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x4], // 0x44
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0xc], // 0x54
        pub _: [u8; 0x4], // 0x60
        pub _: [u8; 0x1], // 0x64
        pub _: [u8; 0xb], // 0x65
        pub _: [u8; 0x8], // 0x70
        pub _: [u8; 0x4], // 0x78
        pub _: [u8; 0x4], // 0x7c
        pub _: [u8; 0x4], // 0x80
        pub _: [u8; 0x7c], // 0x84
        pub _: [u8; 0x10], // 0x100
        pub _: [u8; 0x8], // 0x110
    }

    #[repr(C)]
    pub struct CRandSimTimer {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
    }

    #[repr(C)]
    pub struct CBtNodeComposite {
        pub pad_0: [u8; 0x58], // 0x0
    }

    #[repr(C)]
    pub struct CRelativeLocation {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0xc], // 0x1c
        pub _: [u8; 0xc], // 0x28
        pub _: [u8; 0x4], // 0x34
    }

    #[repr(C)]
    pub struct HostagePathCost {
        pub pad_0: [u8; 0x30], // 0x0
    }

    #[repr(C)]
    pub struct Extent {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0xc], // 0xc
    }

    #[repr(C)]
    pub struct sndopvarlatchdata_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0xc], // 0x24
    }

    #[repr(C)]
    pub struct PrecipitationFilter_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct IEconItemInterface {
        pub pad_0: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct PathMoverEntitySpawn {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
        pub _: [u8; 0x8], // 0x20
    }

    #[repr(C)]
    pub struct CMultiplayer_Expresser {
        pub pad_0: [u8; 0xa0], // 0x0
        pub _: [u8; 0x8], // 0xa0
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
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CAI_ExpresserWithFollowup {
        pub pad_0: [u8; 0xa0], // 0x0
    }

    #[repr(C)]
    pub struct CTakeDamageSummaryScopeGuard {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
    }

    #[repr(C)]
    pub struct CIronSightController {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct INavPathCostAreaFilter {
        pub pad_0: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct CNmEventConsumerSound {
        pub pad_0: [u8; 0xb8], // 0x0
    }

    #[repr(C)]
    pub struct CNmEventConsumerLegacy {
        pub pad_0: [u8; 0x3e8], // 0x0
    }

    #[repr(C)]
    pub struct DestructiblePartDamageRequest_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0xc], // 0x20
        pub _: [u8; 0x10], // 0x2c
    }

    #[repr(C)]
    pub struct CInButtonState {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
    }

    #[repr(C)]
    pub struct SoundeventBoxHelperNetworked_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0xc], // 0xc
        pub _: [u8; 0xc], // 0x18
        pub _: [u8; 0xc], // 0x24
    }

    #[repr(C)]
    pub struct CNetworkOriginCellCoordQuantizedVectorWS {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x2], // 0x12
        pub _: [u8; 0x2], // 0x14
        pub _: [u8; 0x2], // 0x16
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
    }

    #[repr(C)]
    pub struct CNmEventConsumerParticle {
        pub pad_0: [u8; 0xb0], // 0x0
    }

    #[repr(C)]
    pub struct CNavHullVData {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x4], // 0x38
    }

    #[repr(C)]
    pub struct CNmEventConsumerCamera {
        pub pad_0: [u8; 0xb0], // 0x0
    }

    #[repr(C)]
    pub struct AI_DefaultNPC_DebugSnapshotData_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x18], // 0x28
        pub _: [u8; 0x28], // 0x40
        pub _: [u8; 0x18], // 0x68
    }

    #[repr(C)]
    pub struct CNavPathCost {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x1], // 0x10
        pub _: [u8; 0x1], // 0x11
        pub _: [u8; 0x2], // 0x12
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x1], // 0x28
        pub _: [u8; 0x1], // 0x29
        pub _: [u8; 0x2], // 0x2a
        pub _: [u8; 0x4], // 0x2c
    }

    #[repr(C)]
    pub struct CNmSnapWeaponNode__CDefinition {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x2], // 0x18
        pub _: [u8; 0x2], // 0x1a
        pub _: [u8; 0x4], // 0x1c
    }

    #[repr(C)]
    pub struct SoundOpvarTraceResult_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
    }

    #[repr(C)]
    pub struct ActorMapping_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct CNavVolumeCalculatedVector {
        pub pad_0: [u8; 0xa0], // 0x0
    }

    #[repr(C)]
    pub struct CFiringModeInt {
        pub _: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct CBtNodeDecorator {
        pub pad_0: [u8; 0x58], // 0x0
    }

    #[repr(C)]
    pub struct CSAdditionalPerRoundStats_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x1], // 0x18
        pub _: [u8; 0x3], // 0x19
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0xe8], // 0x28
    }

    #[repr(C)]
    pub struct CNmEventConsumerBodyGroup {
        pub pad_0: [u8; 0xb0], // 0x0
    }

    #[repr(C)]
    pub struct CEmptyGraphController {
        pub pad_0: [u8; 0xc0], // 0x0
    }

    #[repr(C)]
    pub struct ModelConfigHandle_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CEntitySubclassVDataBase {
        pub pad_0: [u8; 0x28], // 0x0
    }

    #[repr(C)]
    pub struct CBreakableStageHelper {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0xc], // 0xc
    }

    #[repr(C)]
    pub struct CNavVolumeBreadthFirstSearch {
        pub pad_0: [u8; 0xa8], // 0x0
        pub _: [u8; 0xc], // 0xa8
        pub _: [u8; 0xc], // 0xb4
    }

    #[repr(C)]
    pub struct dynpitchvol_t {
        pub pad_0: [u8; 0x64], // 0x0
    }

    #[repr(C)]
    pub struct CSAdditionalMatchStats_t {
        pub pad_0: [u8; 0x110], // 0x0
        pub _: [u8; 0x4], // 0x110
        pub _: [u8; 0x4], // 0x114
        pub _: [u8; 0x4], // 0x118
        pub _: [u8; 0x4], // 0x11c
        pub _: [u8; 0x4], // 0x120
        pub _: [u8; 0x4], // 0x124
        pub _: [u8; 0x4], // 0x128
        pub _: [u8; 0x4], // 0x12c
        pub _: [u8; 0x4], // 0x130
        pub _: [u8; 0x4], // 0x134
        pub _: [u8; 0x4], // 0x138
        pub _: [u8; 0x4], // 0x13c
    }

    #[repr(C)]
    pub struct AI_Navigator_DebugSnapshotData_t__Waypoint_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct CTestPulseIOComponent {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x20], // 0x10
    }

    #[repr(C)]
    pub struct IRagdoll {
        pub pad_0: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct CCSPlayerAnimationState {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x1], // 0x18
        pub _: [u8; 0x1], // 0x19
        pub _: [u8; 0x1], // 0x1a
        pub _: [u8; 0x1], // 0x1b
        pub _: [u8; 0x1], // 0x1c
        pub _: [u8; 0x3], // 0x1d
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x9c], // 0x44
    }

    #[repr(C)]
    pub struct hudtextparms_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x1], // 0x8
        pub _: [u8; 0x3], // 0x9
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
    }

    #[repr(C)]
    pub struct QueuedAISearchId_t {
        pub _: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct CAnimGraphControllerBase {
        pub pad_0: [u8; 0x4c], // 0x0
        pub _: [u8; 0x74], // 0x4c
    }

    #[repr(C)]
    pub struct CNetworkVelocityVector {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
    }

    #[repr(C)]
    pub struct CDestructiblePart_DamageLevel {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x10], // 0x14
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x8], // 0x30
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0xc], // 0x3c
    }

    #[repr(C)]
    pub struct CNavVolumeAll {
        pub pad_0: [u8; 0xa0], // 0x0
    }

    #[repr(C)]
    pub struct CNavVolumeSphere {
        pub pad_0: [u8; 0x78], // 0x0
        pub _: [u8; 0xc], // 0x78
        pub _: [u8; 0x4], // 0x84
    }

    #[repr(C)]
    pub struct Relationship_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

}
