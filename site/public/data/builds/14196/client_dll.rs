/* cesium dumper | generated from live schema */
#![allow(non_snake_case, non_camel_case_types, dead_code)]

pub mod client_dll {

    #[repr(C)]
    pub struct C_CSGO_TeamIntroCharacterPosition {
        pub pad_0: [u8; 0x1d18], // 0x0
    }

    #[repr(C)]
    pub struct C_FireCrackerBlast {
        pub pad_0: [u8; 0x86a0], // 0x0
    }

    #[repr(C)]
    pub struct CCSGO_WingmanIntroCounterTerroristPosition {
        pub pad_0: [u8; 0x1d18], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_WaitForCursorsWithTag {
        pub pad_0: [u8; 0x128], // 0x0
        pub _: [u8; 0x4], // 0x128
        pub _: [u8; 0x4], // 0x12c
    }

    #[repr(C)]
    pub struct C_SceneEntity__QueuedEvents_t {
        pub _: [u8; 0x18], // 0x0
    }

    #[repr(C)]
    pub struct CCSPlayer_PingServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x8], // 0x48
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
    pub struct CFuncRetakeBarrier {
        pub pad_0: [u8; 0x14d0], // 0x0
    }

    #[repr(C)]
    pub struct C_EnvWindShared {
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
        pub _: [u8; 0xc], // 0x30
        pub _: [u8; 0xbc], // 0x3c
    }

    #[repr(C)]
    pub struct C_SkyCamera {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x90], // 0x600
        pub _: [u8; 0x4], // 0x690
        pub _: [u8; 0x4], // 0x694
        pub _: [u8; 0x8], // 0x698
    }

    #[repr(C)]
    pub struct CPulseCell_Base {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x40], // 0x8
    }

    #[repr(C)]
    pub struct C_FuncRotating {
        pub pad_0: [u8; 0x1098], // 0x0
    }

    #[repr(C)]
    pub struct C_SoundOpvarSetPointBase {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x8], // 0x600
        pub _: [u8; 0x8], // 0x608
        pub _: [u8; 0x8], // 0x610
        pub _: [u8; 0x4], // 0x618
        pub _: [u8; 0x1], // 0x61c
        pub _: [u8; 0x3], // 0x61d
    }

    #[repr(C)]
    pub struct C_EnvCubemapFog {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x4], // 0x600
        pub _: [u8; 0x4], // 0x604
        pub _: [u8; 0x4], // 0x608
        pub _: [u8; 0x4], // 0x60c
        pub _: [u8; 0x4], // 0x610
        pub _: [u8; 0x4], // 0x614
        pub _: [u8; 0x4], // 0x618
        pub _: [u8; 0x4], // 0x61c
        pub _: [u8; 0x4], // 0x620
        pub _: [u8; 0x1], // 0x624
        pub _: [u8; 0x3], // 0x625
        pub _: [u8; 0x4], // 0x628
        pub _: [u8; 0x4], // 0x62c
        pub _: [u8; 0x8], // 0x630
        pub _: [u8; 0x8], // 0x638
        pub _: [u8; 0x4], // 0x640
        pub _: [u8; 0x4], // 0x644
        pub _: [u8; 0x4], // 0x648
        pub _: [u8; 0x4], // 0x64c
        pub _: [u8; 0x8], // 0x650
        pub _: [u8; 0x98], // 0x658
        pub _: [u8; 0x8], // 0x6f0
        pub _: [u8; 0x1], // 0x6f8
        pub _: [u8; 0x7], // 0x6f9
    }

    #[repr(C)]
    pub struct C_CSGO_TeamSelectTerroristPosition {
        pub pad_0: [u8; 0x1d18], // 0x0
    }

    #[repr(C)]
    pub struct C_EnvParticleGlow {
        pub pad_0: [u8; 0x1668], // 0x0
        pub _: [u8; 0x4], // 0x1668
        pub _: [u8; 0x4], // 0x166c
        pub _: [u8; 0x4], // 0x1670
        pub _: [u8; 0x4], // 0x1674
        pub _: [u8; 0x8], // 0x1678
    }

    #[repr(C)]
    pub struct CCS_PortraitWorldCallbackHandler {
        pub pad_0: [u8; 0x608], // 0x0
    }

    #[repr(C)]
    pub struct CCSPlayerController_InventoryServices {
        pub pad_0: [u8; 0x40], // 0x0
        pub _: [u8; 0x18], // 0x40
        pub _: [u8; 0x4], // 0x58
        pub _: [u8; 0x18], // 0x5c
        pub _: [u8; 0x4], // 0x74
        pub _: [u8; 0x4], // 0x78
        pub _: [u8; 0x4], // 0x7c
        pub _: [u8; 0x4], // 0x80
        pub _: [u8; 0x4], // 0x84
        pub _: [u8; 0x68], // 0x88
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
    pub struct C_EconEntity__AttachedModelData_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CPulse_ResumePoint {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct CTriggerFan {
        pub pad_0: [u8; 0x1180], // 0x0
        pub _: [u8; 0xc], // 0x1180
        pub _: [u8; 0xc], // 0x118c
        pub _: [u8; 0x1], // 0x1198
        pub _: [u8; 0x7], // 0x1199
        pub _: [u8; 0x10], // 0x11a0
        pub _: [u8; 0x4], // 0x11b0
        pub _: [u8; 0x4], // 0x11b4
        pub _: [u8; 0x8], // 0x11b8
        pub _: [u8; 0x20], // 0x11c0
    }

    #[repr(C)]
    pub struct C_HostageCarriableProp {
        pub pad_0: [u8; 0x1270], // 0x0
    }

    #[repr(C)]
    pub struct C_BulletHitModel {
        pub pad_0: [u8; 0x1268], // 0x0
        pub _: [u8; 0x30], // 0x1268
        pub _: [u8; 0x4], // 0x1298
        pub _: [u8; 0x4], // 0x129c
        pub _: [u8; 0x4], // 0x12a0
        pub _: [u8; 0x4], // 0x12a4
        pub _: [u8; 0x10], // 0x12a8
    }

    #[repr(C)]
    pub struct C_FuncElectrifiedVolume {
        pub pad_0: [u8; 0x1098], // 0x0
        pub _: [u8; 0x8], // 0x1098
        pub _: [u8; 0x8], // 0x10a0
        pub _: [u8; 0x8], // 0x10a8
    }

    #[repr(C)]
    pub struct C_MapVetoPickController {
        pub pad_0: [u8; 0x610], // 0x0
        pub _: [u8; 0x4], // 0x610
        pub _: [u8; 0x4], // 0x614
        pub _: [u8; 0x100], // 0x618
        pub _: [u8; 0x1c], // 0x718
        pub _: [u8; 0x100], // 0x734
        pub _: [u8; 0x100], // 0x834
        pub _: [u8; 0x100], // 0x934
        pub _: [u8; 0x100], // 0xa34
        pub _: [u8; 0x100], // 0xb34
        pub _: [u8; 0x100], // 0xc34
        pub _: [u8; 0x100], // 0xd34
        pub _: [u8; 0x100], // 0xe34
        pub _: [u8; 0x4], // 0xf34
        pub _: [u8; 0x4], // 0xf38
        pub _: [u8; 0x4], // 0xf3c
        pub _: [u8; 0x4], // 0xf40
        pub _: [u8; 0x4], // 0xf44
    }

    #[repr(C)]
    pub struct C_EnvVolumetricFogVolume {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x4], // 0x600
        pub _: [u8; 0xc], // 0x604
        pub _: [u8; 0xc], // 0x610
        pub _: [u8; 0x1], // 0x61c
        pub _: [u8; 0x3], // 0x61d
        pub _: [u8; 0x4], // 0x620
        pub _: [u8; 0x4], // 0x624
        pub _: [u8; 0x4], // 0x628
        pub _: [u8; 0x4], // 0x62c
        pub _: [u8; 0x4], // 0x630
        pub _: [u8; 0x4], // 0x634
        pub _: [u8; 0x4], // 0x638
        pub _: [u8; 0x4], // 0x63c
        pub _: [u8; 0x4], // 0x640
        pub _: [u8; 0x1], // 0x644
        pub _: [u8; 0x1], // 0x645
        pub _: [u8; 0x1], // 0x646
        pub _: [u8; 0x1], // 0x647
    }

    #[repr(C)]
    pub struct C_CSGO_EndOfMatchCharacterPosition {
        pub pad_0: [u8; 0x1d18], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_PlaySequence {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x8], // 0xd8
        pub _: [u8; 0x18], // 0xe0
        pub _: [u8; 0x48], // 0xf8
    }

    #[repr(C)]
    pub struct C_BarnLight {
        pub pad_0: [u8; 0x1098], // 0x0
        pub _: [u8; 0x4], // 0x1098
        pub _: [u8; 0x4], // 0x109c
        pub _: [u8; 0x4], // 0x10a0
        pub _: [u8; 0x4], // 0x10a4
        pub _: [u8; 0x4], // 0x10a8
        pub _: [u8; 0x4], // 0x10ac
        pub _: [u8; 0x4], // 0x10b0
        pub _: [u8; 0x4], // 0x10b4
        pub _: [u8; 0x4], // 0x10b8
        pub _: [u8; 0x4], // 0x10bc
        pub _: [u8; 0x4], // 0x10c0
        pub _: [u8; 0x4], // 0x10c4
        pub _: [u8; 0x8], // 0x10c8
        pub _: [u8; 0x8], // 0x10d0
        pub _: [u8; 0x8], // 0x10d8
        pub _: [u8; 0x18], // 0x10e0
        pub _: [u8; 0x18], // 0x10f8
        pub _: [u8; 0x18], // 0x1110
        pub _: [u8; 0x60], // 0x1128
        pub _: [u8; 0x8], // 0x1188
        pub _: [u8; 0x4], // 0x1190
        pub _: [u8; 0x4], // 0x1194
        pub _: [u8; 0x4], // 0x1198
        pub _: [u8; 0x4], // 0x119c
        pub _: [u8; 0x4], // 0x11a0
        pub _: [u8; 0xc], // 0x11a4
        pub _: [u8; 0x4], // 0x11b0
        pub _: [u8; 0xc], // 0x11b4
        pub _: [u8; 0x4], // 0x11c0
        pub _: [u8; 0xc], // 0x11c4
        pub _: [u8; 0x4], // 0x11d0
        pub _: [u8; 0x4], // 0x11d4
        pub _: [u8; 0x4], // 0x11d8
        pub _: [u8; 0x4], // 0x11dc
        pub _: [u8; 0x1], // 0x11e0
        pub _: [u8; 0x3], // 0x11e1
        pub _: [u8; 0x4], // 0x11e4
        pub _: [u8; 0x4], // 0x11e8
        pub _: [u8; 0x4], // 0x11ec
        pub _: [u8; 0xc], // 0x11f0
        pub _: [u8; 0x4], // 0x11fc
        pub _: [u8; 0x4], // 0x1200
        pub _: [u8; 0x4], // 0x1204
        pub _: [u8; 0x4], // 0x1208
        pub _: [u8; 0x4], // 0x120c
        pub _: [u8; 0x4], // 0x1210
        pub _: [u8; 0x4], // 0x1214
        pub _: [u8; 0x4], // 0x1218
        pub _: [u8; 0x4], // 0x121c
        pub _: [u8; 0x4], // 0x1220
        pub _: [u8; 0xc], // 0x1224
        pub _: [u8; 0xc], // 0x1230
        pub _: [u8; 0xc], // 0x123c
        pub _: [u8; 0xc], // 0x1248
        pub _: [u8; 0xc], // 0x1254
        pub _: [u8; 0x4], // 0x1260
        pub _: [u8; 0xc], // 0x1264
        pub _: [u8; 0xc], // 0x1270
        pub _: [u8; 0xc], // 0x127c
        pub _: [u8; 0xc], // 0x1288
        pub _: [u8; 0xc], // 0x1294
        pub _: [u8; 0xc], // 0x12a0
        pub _: [u8; 0xc], // 0x12ac
        pub _: [u8; 0xc], // 0x12b8
        pub _: [u8; 0xc], // 0x12c4
        pub _: [u8; 0xc], // 0x12d0
        pub _: [u8; 0xc], // 0x12dc
        pub _: [u8; 0xc], // 0x12e8
        pub _: [u8; 0xc], // 0x12f4
        pub _: [u8; 0xc], // 0x1300
        pub _: [u8; 0xc], // 0x130c
        pub _: [u8; 0xc], // 0x1318
        pub _: [u8; 0xc], // 0x1324
        pub _: [u8; 0x50], // 0x1330
        pub _: [u8; 0x8], // 0x1380
        pub _: [u8; 0x20], // 0x1388
    }

    #[repr(C)]
    pub struct CPulseCell_LerpCameraSettings {
        pub pad_0: [u8; 0x120], // 0x0
        pub _: [u8; 0x4], // 0x120
        pub _: [u8; 0x10], // 0x124
        pub _: [u8; 0x14], // 0x134
    }

    #[repr(C)]
    pub struct CPointOffScreenIndicatorUi {
        pub pad_0: [u8; 0x1300], // 0x0
        pub _: [u8; 0x1], // 0x1300
        pub _: [u8; 0x3], // 0x1301
        pub _: [u8; 0x4], // 0x1304
        pub _: [u8; 0x8], // 0x1308
    }

    #[repr(C)]
    pub struct CCSObserver_UseServices {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct C_PostProcessingVolume {
        pub pad_0: [u8; 0x1190], // 0x0
        pub _: [u8; 0x8], // 0x1190
        pub _: [u8; 0x4], // 0x1198
        pub _: [u8; 0x4], // 0x119c
        pub _: [u8; 0x4], // 0x11a0
        pub _: [u8; 0x4], // 0x11a4
        pub _: [u8; 0x4], // 0x11a8
        pub _: [u8; 0x4], // 0x11ac
        pub _: [u8; 0x4], // 0x11b0
        pub _: [u8; 0x4], // 0x11b4
        pub _: [u8; 0x4], // 0x11b8
        pub _: [u8; 0x1], // 0x11bc
        pub _: [u8; 0x3], // 0x11bd
    }

    #[repr(C)]
    pub struct CCSMinimapVolume {
        pub pad_0: [u8; 0x1198], // 0x0
        pub _: [u8; 0x10], // 0x1198
    }

    #[repr(C)]
    pub struct CCSPlayer_UseServices {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct C_BaseModelEntity__Emphasized_Phoneme {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x1], // 0x1c
        pub _: [u8; 0x1], // 0x1d
        pub _: [u8; 0x2], // 0x1e
    }

    #[repr(C)]
    pub struct C_CSGO_CounterTerroristWingmanIntroCamera {
        pub pad_0: [u8; 0x690], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_PickBestOutflowSelector {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x18], // 0x50
    }

    #[repr(C)]
    pub struct CInfoFan {
        pub pad_0: [u8; 0x640], // 0x0
        pub _: [u8; 0x4], // 0x640
        pub _: [u8; 0x4], // 0x644
        pub _: [u8; 0x8], // 0x648
        pub _: [u8; 0x8], // 0x650
    }

    #[repr(C)]
    pub struct C_VoteController {
        pub pad_0: [u8; 0x610], // 0x0
        pub _: [u8; 0x4], // 0x610
        pub _: [u8; 0x4], // 0x614
        pub _: [u8; 0x14], // 0x618
        pub _: [u8; 0x4], // 0x62c
        pub _: [u8; 0x1], // 0x630
        pub _: [u8; 0x1], // 0x631
        pub _: [u8; 0x6], // 0x632
    }

    #[repr(C)]
    pub struct C_C4 {
        pub pad_0: [u8; 0x1f20], // 0x0
        pub _: [u8; 0x4], // 0x1f20
        pub _: [u8; 0x4], // 0x1f24
        pub _: [u8; 0x4], // 0x1f28
        pub _: [u8; 0x4], // 0x1f2c
        pub _: [u8; 0x1], // 0x1f30
        pub _: [u8; 0x7], // 0x1f31
        pub _: [u8; 0x18], // 0x1f38
        pub _: [u8; 0x4], // 0x1f50
        pub _: [u8; 0x7], // 0x1f54
        pub _: [u8; 0x5], // 0x1f5b
    }

    #[repr(C)]
    pub struct C_CSPlayerPawnBase {
        pub pad_0: [u8; 0x14d8], // 0x0
        pub _: [u8; 0x8], // 0x14d8
        pub _: [u8; 0x4], // 0x14e0
        pub _: [u8; 0x4], // 0x14e4
        pub _: [u8; 0x4], // 0x14e8
        pub _: [u8; 0x4], // 0x14ec
        pub _: [u8; 0x4], // 0x14f0
        pub _: [u8; 0x4], // 0x14f4
        pub _: [u8; 0x4], // 0x14f8
        pub _: [u8; 0x4], // 0x14fc
        pub _: [u8; 0x4], // 0x1500
        pub _: [u8; 0x4], // 0x1504
        pub _: [u8; 0x1], // 0x1508
        pub _: [u8; 0x1], // 0x1509
        pub _: [u8; 0x2], // 0x150a
        pub _: [u8; 0x4], // 0x150c
        pub _: [u8; 0x4], // 0x1510
        pub _: [u8; 0x4], // 0x1514
        pub _: [u8; 0x4], // 0x1518
        pub _: [u8; 0x8], // 0x151c
        pub _: [u8; 0x4], // 0x1524
        pub _: [u8; 0x4], // 0x1528
        pub _: [u8; 0x4], // 0x152c
        pub _: [u8; 0x4], // 0x1530
        pub _: [u8; 0x4], // 0x1534
        pub _: [u8; 0x28], // 0x1538
        pub _: [u8; 0x8], // 0x1560
    }

    #[repr(C)]
    pub struct C_BreakableProp {
        pub pad_0: [u8; 0x12a0], // 0x0
        pub _: [u8; 0x40], // 0x12a0
        pub _: [u8; 0x18], // 0x12e0
        pub _: [u8; 0x18], // 0x12f8
        pub _: [u8; 0x20], // 0x1310
        pub _: [u8; 0x18], // 0x1330
        pub _: [u8; 0x4], // 0x1348
        pub _: [u8; 0x4], // 0x134c
        pub _: [u8; 0x4], // 0x1350
        pub _: [u8; 0x4], // 0x1354
        pub _: [u8; 0xc], // 0x1358
        pub _: [u8; 0x4], // 0x1364
        pub _: [u8; 0x4], // 0x1368
        pub _: [u8; 0x4], // 0x136c
        pub _: [u8; 0x8], // 0x1370
        pub _: [u8; 0x8], // 0x1378
        pub _: [u8; 0x8], // 0x1380
        pub _: [u8; 0x4], // 0x1388
        pub _: [u8; 0x4], // 0x138c
        pub _: [u8; 0x8], // 0x1390
        pub _: [u8; 0x8], // 0x1398
        pub _: [u8; 0x8], // 0x13a0
        pub _: [u8; 0x8], // 0x13a8
        pub _: [u8; 0x8], // 0x13b0
        pub _: [u8; 0x8], // 0x13b8
        pub _: [u8; 0x8], // 0x13c0
        pub _: [u8; 0x4], // 0x13c8
        pub _: [u8; 0x4], // 0x13cc
        pub _: [u8; 0x4], // 0x13d0
        pub _: [u8; 0xc], // 0x13d4
    }

    #[repr(C)]
    pub struct CCSGO_WingmanIntroTerroristPosition {
        pub pad_0: [u8; 0x1d18], // 0x0
    }

    #[repr(C)]
    pub struct C_RetakeGameRules {
        pub pad_0: [u8; 0x138], // 0x0
        pub _: [u8; 0x4], // 0x138
        pub _: [u8; 0x1], // 0x13c
        pub _: [u8; 0x3], // 0x13d
        pub _: [u8; 0x4], // 0x140
        pub _: [u8; 0x4], // 0x144
        pub _: [u8; 0x10], // 0x148
    }

    #[repr(C)]
    pub struct C_SoundOpvarSetDomeEntity {
        pub pad_0: [u8; 0x620], // 0x0
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
    pub struct C_SoundAreaEntitySphere {
        pub pad_0: [u8; 0x628], // 0x0
        pub _: [u8; 0x8], // 0x628
    }

    #[repr(C)]
    pub struct CPulseCell_Step_EntFire {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x8], // 0x48
    }

    #[repr(C)]
    pub struct C_WeaponAWP {
        pub pad_0: [u8; 0x1f50], // 0x0
    }

    #[repr(C)]
    pub struct C_BaseButton {
        pub pad_0: [u8; 0x1098], // 0x0
        pub _: [u8; 0x4], // 0x1098
        pub _: [u8; 0x4], // 0x109c
        pub _: [u8; 0x8], // 0x10a0
    }

    #[repr(C)]
    pub struct CCSObserver_ObserverServices {
        pub pad_0: [u8; 0x70], // 0x0
        pub _: [u8; 0x90], // 0x70
    }

    #[repr(C)]
    pub struct CHitboxComponent {
        pub pad_0: [u8; 0x14], // 0x0
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct C_SoundEventBoxHelper {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0xc], // 0x600
        pub _: [u8; 0xc], // 0x60c
    }

    #[repr(C)]
    pub struct C_SoundEventBoxEntity {
        pub pad_0: [u8; 0x6c0], // 0x0
        pub _: [u8; 0x18], // 0x6c0
    }

    #[repr(C)]
    pub struct ServerAuthoritativeWeaponSlot_t {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x2], // 0x30
        pub _: [u8; 0x2], // 0x32
        pub _: [u8; 0x4], // 0x34
    }

    #[repr(C)]
    pub struct C_CSMinimapBoundary {
        pub pad_0: [u8; 0x600], // 0x0
    }

    #[repr(C)]
    pub struct CPathQueryComponent {
        pub pad_0: [u8; 0xa0], // 0x0
    }

    #[repr(C)]
    pub struct C_Precipitation {
        pub pad_0: [u8; 0x1180], // 0x0
        pub _: [u8; 0x10], // 0x1180
        pub _: [u8; 0x8], // 0x1190
        pub _: [u8; 0x14], // 0x1198
        pub _: [u8; 0x8], // 0x11ac
        pub _: [u8; 0x1], // 0x11b4
        pub _: [u8; 0x1], // 0x11b5
        pub _: [u8; 0x2], // 0x11b6
        pub _: [u8; 0x8], // 0x11b8
    }

    #[repr(C)]
    pub struct CLogicRelay {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x18], // 0x600
        pub _: [u8; 0x18], // 0x618
        pub _: [u8; 0x1], // 0x630
        pub _: [u8; 0x1], // 0x631
        pub _: [u8; 0x1], // 0x632
        pub _: [u8; 0x1], // 0x633
        pub _: [u8; 0x4], // 0x634
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
    pub struct C_WeaponUMP45 {
        pub pad_0: [u8; 0x1f50], // 0x0
    }

    #[repr(C)]
    pub struct C_WeaponG3SG1 {
        pub pad_0: [u8; 0x1f50], // 0x0
    }

    #[repr(C)]
    pub struct C_SpotlightEnd {
        pub pad_0: [u8; 0x1098], // 0x0
        pub _: [u8; 0x4], // 0x1098
        pub _: [u8; 0xc], // 0x109c
    }

    #[repr(C)]
    pub struct C_Fish {
        pub pad_0: [u8; 0x1268], // 0x0
        pub _: [u8; 0xc], // 0x1268
        pub _: [u8; 0xc], // 0x1274
        pub _: [u8; 0xc], // 0x1280
        pub _: [u8; 0x4], // 0x128c
        pub _: [u8; 0x4], // 0x1290
        pub _: [u8; 0x4], // 0x1294
        pub _: [u8; 0x8], // 0x1298
        pub _: [u8; 0x18], // 0x12a0
        pub _: [u8; 0x4], // 0x12b8
        pub _: [u8; 0x4], // 0x12bc
        pub _: [u8; 0xc], // 0x12c0
        pub _: [u8; 0xc], // 0x12cc
        pub _: [u8; 0xc], // 0x12d8
        pub _: [u8; 0x4], // 0x12e4
        pub _: [u8; 0x4], // 0x12e8
        pub _: [u8; 0x4], // 0x12ec
        pub _: [u8; 0x4], // 0x12f0
        pub _: [u8; 0x4], // 0x12f4
        pub _: [u8; 0x4], // 0x12f8
        pub _: [u8; 0x50], // 0x12fc
        pub _: [u8; 0x4], // 0x134c
        pub _: [u8; 0x4], // 0x1350
        pub _: [u8; 0x4], // 0x1354
    }

    #[repr(C)]
    pub struct C_WeaponFamas {
        pub pad_0: [u8; 0x1f50], // 0x0
    }

    #[repr(C)]
    pub struct C_EnvVolumetricFogController {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x4], // 0x600
        pub _: [u8; 0x4], // 0x604
        pub _: [u8; 0x4], // 0x608
        pub _: [u8; 0x4], // 0x60c
        pub _: [u8; 0x4], // 0x610
        pub _: [u8; 0x4], // 0x614
        pub _: [u8; 0x4], // 0x618
        pub _: [u8; 0x4], // 0x61c
        pub _: [u8; 0x4], // 0x620
        pub _: [u8; 0x4], // 0x624
        pub _: [u8; 0x4], // 0x628
        pub _: [u8; 0x4], // 0x62c
        pub _: [u8; 0x4], // 0x630
        pub _: [u8; 0xc], // 0x634
        pub _: [u8; 0xc], // 0x640
        pub _: [u8; 0x4], // 0x64c
        pub _: [u8; 0x4], // 0x650
        pub _: [u8; 0x4], // 0x654
        pub _: [u8; 0x4], // 0x658
        pub _: [u8; 0x4], // 0x65c
        pub _: [u8; 0x4], // 0x660
        pub _: [u8; 0x4], // 0x664
        pub _: [u8; 0x4], // 0x668
        pub _: [u8; 0x4], // 0x66c
        pub _: [u8; 0x4], // 0x670
        pub _: [u8; 0x1], // 0x674
        pub _: [u8; 0x1], // 0x675
        pub _: [u8; 0x2], // 0x676
        pub _: [u8; 0x8], // 0x678
        pub _: [u8; 0x4], // 0x680
        pub _: [u8; 0x4], // 0x684
        pub _: [u8; 0x4], // 0x688
        pub _: [u8; 0xc], // 0x68c
        pub _: [u8; 0x4], // 0x698
        pub _: [u8; 0xc], // 0x69c
        pub _: [u8; 0x8], // 0x6a8
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
    pub struct C_EnvDetailController {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x4], // 0x600
        pub _: [u8; 0x4], // 0x604
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
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
    }

    #[repr(C)]
    pub struct C_GameRulesProxy {
        pub pad_0: [u8; 0x600], // 0x0
    }

    #[repr(C)]
    pub struct CRenderComponent {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x40], // 0x10
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
        pub _: [u8; 0x50], // 0x58
        pub _: [u8; 0x28], // 0xa8
    }

    #[repr(C)]
    pub struct C_Team {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x18], // 0x600
        pub _: [u8; 0x18], // 0x618
        pub _: [u8; 0x4], // 0x630
        pub _: [u8; 0x84], // 0x634
    }

    #[repr(C)]
    pub struct C_PathParticleRopeAlias_path_particle_rope_clientside {
        pub pad_0: [u8; 0x710], // 0x0
    }

    #[repr(C)]
    pub struct CPointChildModifier {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x8], // 0x600
    }

    #[repr(C)]
    pub struct CCSPlayerLegacyJump {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct C_WeaponNOVA {
        pub pad_0: [u8; 0x1f20], // 0x0
    }

    #[repr(C)]
    pub struct C_CS2HudModelAddon {
        pub pad_0: [u8; 0x1330], // 0x0
    }

    #[repr(C)]
    pub struct C_DEagle {
        pub pad_0: [u8; 0x1f50], // 0x0
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
        pub _: [u8; 0x8], // 0x688
    }

    #[repr(C)]
    pub struct C_ColorCorrectionVolume {
        pub pad_0: [u8; 0x1180], // 0x0
        pub _: [u8; 0x4], // 0x1180
        pub _: [u8; 0x4], // 0x1184
        pub _: [u8; 0x4], // 0x1188
        pub _: [u8; 0x4], // 0x118c
        pub _: [u8; 0x4], // 0x1190
        pub _: [u8; 0x4], // 0x1194
        pub _: [u8; 0x4], // 0x1198
        pub _: [u8; 0x4], // 0x119c
        pub _: [u8; 0x208], // 0x11a0
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
    pub struct CInfoDynamicShadowHintBox {
        pub pad_0: [u8; 0x618], // 0x0
        pub _: [u8; 0xc], // 0x618
        pub _: [u8; 0xc], // 0x624
    }

    #[repr(C)]
    pub struct CBaseAnimGraphController {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x18], // 0x20
        pub _: [u8; 0x18], // 0x38
        pub _: [u8; 0x8], // 0x50
        pub _: [u8; 0x4], // 0x58
        pub _: [u8; 0x54], // 0x5c
        pub _: [u8; 0x4], // 0xb0
        pub _: [u8; 0x4], // 0xb4
        pub _: [u8; 0x4], // 0xb8
        pub _: [u8; 0x4], // 0xbc
        pub _: [u8; 0xc], // 0xc0
        pub _: [u8; 0x1], // 0xcc
        pub _: [u8; 0x1], // 0xcd
        pub _: [u8; 0x1], // 0xce
        pub _: [u8; 0x1], // 0xcf
        pub _: [u8; 0x4], // 0xd0
        pub _: [u8; 0x29c], // 0xd4
        pub _: [u8; 0x8], // 0x370
        pub _: [u8; 0x68], // 0x378
        pub _: [u8; 0x18], // 0x3e0
        pub _: [u8; 0x4], // 0x3f8
        pub _: [u8; 0x4], // 0x3fc
        pub _: [u8; 0x4], // 0x400
        pub _: [u8; 0x4], // 0x404
        pub _: [u8; 0x8], // 0x408
        pub _: [u8; 0x18], // 0x410
        pub _: [u8; 0x18], // 0x428
        pub _: [u8; 0x8], // 0x440
        pub _: [u8; 0x220], // 0x448
        pub _: [u8; 0x31], // 0x668
        pub _: [u8; 0x7], // 0x699
    }

    #[repr(C)]
    pub struct C_ColorCorrection {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0xc], // 0x600
        pub _: [u8; 0x4], // 0x60c
        pub _: [u8; 0x4], // 0x610
        pub _: [u8; 0x4], // 0x614
        pub _: [u8; 0x4], // 0x618
        pub _: [u8; 0x4], // 0x61c
        pub _: [u8; 0x4], // 0x620
        pub _: [u8; 0x200], // 0x624
        pub _: [u8; 0x1], // 0x824
        pub _: [u8; 0x1], // 0x825
        pub _: [u8; 0x1], // 0x826
        pub _: [u8; 0x1], // 0x827
        pub _: [u8; 0x4], // 0x828
        pub _: [u8; 0x4], // 0x82c
        pub _: [u8; 0x4], // 0x830
        pub _: [u8; 0x4], // 0x834
        pub _: [u8; 0x4], // 0x838
        pub _: [u8; 0xc], // 0x83c
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
    pub struct C_PhysBox {
        pub pad_0: [u8; 0x1098], // 0x0
    }

    #[repr(C)]
    pub struct CCSPlayer_CameraServices {
        pub pad_0: [u8; 0x2b0], // 0x0
        pub _: [u8; 0x4], // 0x2b0
        pub _: [u8; 0x4], // 0x2b4
        pub _: [u8; 0x8], // 0x2b8
        pub _: [u8; 0x90], // 0x2c0
    }

    #[repr(C)]
    pub struct CFilterMultiple {
        pub pad_0: [u8; 0x638], // 0x0
        pub _: [u8; 0x8], // 0x638
        pub _: [u8; 0x50], // 0x640
        pub _: [u8; 0x28], // 0x690
    }

    #[repr(C)]
    pub struct CPulseCell_FireCursors {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x18], // 0xd8
        pub _: [u8; 0x8], // 0xf0
        pub _: [u8; 0x48], // 0xf8
    }

    #[repr(C)]
    pub struct CEnvSoundscape {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x18], // 0x600
        pub _: [u8; 0x8], // 0x618
        pub _: [u8; 0x8], // 0x620
        pub _: [u8; 0x4], // 0x628
        pub _: [u8; 0x4], // 0x62c
        pub _: [u8; 0x8], // 0x630
        pub _: [u8; 0x40], // 0x638
        pub _: [u8; 0x4], // 0x678
        pub _: [u8; 0x4], // 0x67c
        pub _: [u8; 0x8], // 0x680
        pub _: [u8; 0x8], // 0x688
    }

    #[repr(C)]
    pub struct C_SoundEventEntityAlias_snd_event_point {
        pub pad_0: [u8; 0x6c0], // 0x0
    }

    #[repr(C)]
    pub struct C_FogController {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x68], // 0x600
        pub _: [u8; 0x4], // 0x668
        pub _: [u8; 0x4], // 0x66c
    }

    #[repr(C)]
    pub struct C_SoundOpvarSetOBBWindEntity {
        pub pad_0: [u8; 0x620], // 0x0
    }

    #[repr(C)]
    pub struct C_MolotovGrenade {
        pub pad_0: [u8; 0x1fe0], // 0x0
    }

    #[repr(C)]
    pub struct C_NetTestBaseCombatCharacter {
        pub pad_0: [u8; 0x12f0], // 0x0
    }

    #[repr(C)]
    pub struct CBodyComponentPoint {
        pub pad_0: [u8; 0x80], // 0x0
        pub _: [u8; 0x130], // 0x80
    }

    #[repr(C)]
    pub struct C_WeaponM4A1Silencer {
        pub pad_0: [u8; 0x1f50], // 0x0
    }

    #[repr(C)]
    pub struct C_SkyCameraVolume {
        pub pad_0: [u8; 0x618], // 0x0
        pub _: [u8; 0xc], // 0x618
        pub _: [u8; 0xc], // 0x624
        pub _: [u8; 0x4], // 0x630
        pub _: [u8; 0x4], // 0x634
        pub _: [u8; 0x1], // 0x638
        pub _: [u8; 0x3], // 0x639
        pub _: [u8; 0xc], // 0x63c
        pub _: [u8; 0x1], // 0x648
        pub _: [u8; 0x1], // 0x649
        pub _: [u8; 0x6], // 0x64a
        pub _: [u8; 0x8], // 0x650
    }

    #[repr(C)]
    pub struct C_EconItemView {
        pub pad_0: [u8; 0x60], // 0x0
        pub _: [u8; 0x1], // 0x60
        pub _: [u8; 0x1f], // 0x61
        pub _: [u8; 0x4], // 0x80
        pub _: [u8; 0x4], // 0x84
        pub _: [u8; 0x130], // 0x88
        pub _: [u8; 0x2], // 0x1b8
        pub _: [u8; 0x2], // 0x1ba
        pub _: [u8; 0x4], // 0x1bc
        pub _: [u8; 0x8], // 0x1c0
        pub _: [u8; 0x8], // 0x1c8
        pub _: [u8; 0x4], // 0x1d0
        pub _: [u8; 0x4], // 0x1d4
        pub _: [u8; 0x4], // 0x1d8
        pub _: [u8; 0xc], // 0x1dc
        pub _: [u8; 0x1], // 0x1e8
        pub _: [u8; 0x1], // 0x1e9
        pub _: [u8; 0x1], // 0x1ea
        pub _: [u8; 0x1], // 0x1eb
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x1], // 0x1fc
        pub _: [u8; 0xb], // 0x1fd
        pub _: [u8; 0x78], // 0x208
        pub _: [u8; 0x78], // 0x280
        pub _: [u8; 0xa1], // 0x2f8
        pub _: [u8; 0xa1], // 0x399
        pub _: [u8; 0xa1], // 0x43a
        pub _: [u8; 0xcd], // 0x4db
        pub _: [u8; 0x8], // 0x5a8
    }

    #[repr(C)]
    pub struct CPulseCell_Timeline__TimelineEvent_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x48], // 0x8
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
    pub struct CPulseCell_IsRequirementValid {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct C_SoundEventPathCornerEntity {
        pub pad_0: [u8; 0x6c0], // 0x0
        pub _: [u8; 0x18], // 0x6c0
    }

    #[repr(C)]
    pub struct C_InfoVisibilityBox {
        pub pad_0: [u8; 0x604], // 0x0
        pub _: [u8; 0x4], // 0x604
        pub _: [u8; 0xc], // 0x608
        pub _: [u8; 0x4], // 0x614
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
    pub struct C_PathParticleRope {
        pub pad_0: [u8; 0x608], // 0x0
        pub _: [u8; 0x4], // 0x608
        pub _: [u8; 0x4], // 0x60c
        pub _: [u8; 0x8], // 0x610
        pub _: [u8; 0x18], // 0x618
        pub _: [u8; 0x4], // 0x630
        pub _: [u8; 0x4], // 0x634
        pub _: [u8; 0x4], // 0x638
        pub _: [u8; 0x4], // 0x63c
        pub _: [u8; 0x8], // 0x640
        pub _: [u8; 0x8], // 0x648
        pub _: [u8; 0x18], // 0x650
        pub _: [u8; 0x18], // 0x668
        pub _: [u8; 0x18], // 0x680
        pub _: [u8; 0x18], // 0x698
        pub _: [u8; 0x18], // 0x6b0
        pub _: [u8; 0x48], // 0x6c8
    }

    #[repr(C)]
    pub struct C_DecoyProjectile {
        pub pad_0: [u8; 0x1348], // 0x0
        pub _: [u8; 0x4], // 0x1348
        pub _: [u8; 0x24], // 0x134c
        pub _: [u8; 0x8], // 0x1370
    }

    #[repr(C)]
    pub struct C_AttributeContainer {
        pub pad_0: [u8; 0x50], // 0x0
        pub _: [u8; 0x5b0], // 0x50
        pub _: [u8; 0x8], // 0x600
        pub _: [u8; 0x8], // 0x608
    }

    #[repr(C)]
    pub struct C_CSWeaponBase {
        pub pad_0: [u8; 0x19a8], // 0x0
        pub _: [u8; 0x4], // 0x19a8
        pub _: [u8; 0x4], // 0x19ac
        pub _: [u8; 0x4], // 0x19b0
        pub _: [u8; 0x1], // 0x19b4
        pub _: [u8; 0x2b], // 0x19b5
        pub _: [u8; 0x4], // 0x19e0
        pub _: [u8; 0x4], // 0x19e4
        pub _: [u8; 0x18], // 0x19e8
        pub _: [u8; 0x4], // 0x1a00
        pub _: [u8; 0x4], // 0x1a04
        pub _: [u8; 0xc], // 0x1a08
        pub _: [u8; 0x4], // 0x1a14
        pub _: [u8; 0x4], // 0x1a18
        pub _: [u8; 0x4], // 0x1a1c
        pub _: [u8; 0x4], // 0x1a20
        pub _: [u8; 0x4], // 0x1a24
        pub _: [u8; 0x4], // 0x1a28
        pub _: [u8; 0x4], // 0x1a2c
        pub _: [u8; 0x4], // 0x1a30
        pub _: [u8; 0x4], // 0x1a34
        pub _: [u8; 0x4], // 0x1a38
        pub _: [u8; 0x4], // 0x1a3c
        pub _: [u8; 0x4], // 0x1a40
        pub _: [u8; 0x4], // 0x1a44
        pub _: [u8; 0x8], // 0x1a48
        pub _: [u8; 0x1], // 0x1a50
        pub _: [u8; 0x3], // 0x1a51
        pub _: [u8; 0x4], // 0x1a54
        pub _: [u8; 0x1], // 0x1a58
        pub _: [u8; 0x3], // 0x1a59
        pub _: [u8; 0x4], // 0x1a5c
        pub _: [u8; 0x4], // 0x1a60
        pub _: [u8; 0x4], // 0x1a64
        pub _: [u8; 0x4], // 0x1a68
        pub _: [u8; 0x4], // 0x1a6c
        pub _: [u8; 0x4], // 0x1a70
        pub _: [u8; 0xac], // 0x1a74
        pub _: [u8; 0x1], // 0x1b20
        pub _: [u8; 0x1], // 0x1b21
        pub _: [u8; 0x2], // 0x1b22
        pub _: [u8; 0xc], // 0x1b24
        pub _: [u8; 0x4], // 0x1b30
        pub _: [u8; 0x4], // 0x1b34
        pub _: [u8; 0x4], // 0x1b38
        pub _: [u8; 0x4], // 0x1b3c
        pub _: [u8; 0x24], // 0x1b40
        pub _: [u8; 0x4], // 0x1b64
        pub _: [u8; 0x4], // 0x1b68
        pub _: [u8; 0x1], // 0x1b6c
        pub _: [u8; 0x3], // 0x1b6d
        pub _: [u8; 0x4], // 0x1b70
        pub _: [u8; 0x5c], // 0x1b74
        pub _: [u8; 0xb0], // 0x1bd0
        pub _: [u8; 0x78], // 0x1c80
        pub _: [u8; 0x60], // 0x1cf8
        pub _: [u8; 0x14], // 0x1d58
        pub _: [u8; 0x1b4], // 0x1d6c
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
    pub struct C_TonemapController2 {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x4], // 0x600
        pub _: [u8; 0x4], // 0x604
        pub _: [u8; 0x4], // 0x608
        pub _: [u8; 0x4], // 0x60c
        pub _: [u8; 0x8], // 0x610
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
    pub struct C_WeaponMag7 {
        pub pad_0: [u8; 0x1f50], // 0x0
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
        pub pad_0: [u8; 0x638], // 0x0
        pub _: [u8; 0x4], // 0x638
        pub _: [u8; 0x4], // 0x63c
        pub _: [u8; 0x8], // 0x640
    }

    #[repr(C)]
    pub struct C_PointClientUIHUD {
        pub pad_0: [u8; 0x10d0], // 0x0
        pub _: [u8; 0x178], // 0x10d0
        pub _: [u8; 0x4], // 0x1248
        pub _: [u8; 0x4], // 0x124c
        pub _: [u8; 0x4], // 0x1250
        pub _: [u8; 0x4], // 0x1254
        pub _: [u8; 0x4], // 0x1258
        pub _: [u8; 0x4], // 0x125c
        pub _: [u8; 0x4], // 0x1260
        pub _: [u8; 0x4], // 0x1264
        pub _: [u8; 0x4], // 0x1268
        pub _: [u8; 0x4], // 0x126c
        pub _: [u8; 0x8], // 0x1270
        pub _: [u8; 0x18], // 0x1278
    }

    #[repr(C)]
    pub struct CPulseCell_Inflow_GraphHook {
        pub pad_0: [u8; 0x80], // 0x0
        pub _: [u8; 0x10], // 0x80
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
        pub _: [u8; 0x1], // 0x1280
        pub _: [u8; 0x3], // 0x1281
        pub _: [u8; 0x4], // 0x1284
        pub _: [u8; 0x4], // 0x1288
        pub _: [u8; 0x4], // 0x128c
        pub _: [u8; 0x8], // 0x1290
        pub _: [u8; 0x8], // 0x1298
        pub _: [u8; 0x8], // 0x12a0
        pub _: [u8; 0x4], // 0x12a8
        pub _: [u8; 0x4], // 0x12ac
        pub _: [u8; 0x8], // 0x12b0
        pub _: [u8; 0x8], // 0x12b8
        pub _: [u8; 0x4], // 0x12c0
        pub _: [u8; 0x4], // 0x12c4
    }

    #[repr(C)]
    pub struct CSpriteOriented {
        pub pad_0: [u8; 0x1118], // 0x0
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
    pub struct C_KeychainModule {
        pub pad_0: [u8; 0x1270], // 0x0
        pub _: [u8; 0x4], // 0x1270
        pub _: [u8; 0x4], // 0x1274
    }

    #[repr(C)]
    pub struct CFuncWater {
        pub pad_0: [u8; 0x1098], // 0x0
        pub _: [u8; 0x118], // 0x1098
    }

    #[repr(C)]
    pub struct CCSPlayer_GlowServices {
        pub pad_0: [u8; 0x50], // 0x0
    }

    #[repr(C)]
    pub struct CCSGameModeRules {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x28], // 0x8
    }

    #[repr(C)]
    pub struct C_Flashbang {
        pub pad_0: [u8; 0x1fe0], // 0x0
    }

    #[repr(C)]
    pub struct C_PointClientUIWorldTextPanel {
        pub pad_0: [u8; 0x1300], // 0x0
        pub _: [u8; 0x200], // 0x1300
    }

    #[repr(C)]
    pub struct CCSPlayer_WaterServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0xc], // 0x4c
        pub _: [u8; 0x18], // 0x58
    }

    #[repr(C)]
    pub struct C_CSObserverPawn {
        pub pad_0: [u8; 0x1568], // 0x0
        pub _: [u8; 0x8], // 0x1568
    }

    #[repr(C)]
    pub struct ViewAngleServerChange_t {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0xc], // 0x34
        pub _: [u8; 0x8], // 0x40
    }

    #[repr(C)]
    pub struct C_FuncLadder {
        pub pad_0: [u8; 0x1098], // 0x0
        pub _: [u8; 0x10], // 0x1098
        pub _: [u8; 0x18], // 0x10a8
        pub _: [u8; 0xc], // 0x10c0
        pub _: [u8; 0xc], // 0x10cc
        pub _: [u8; 0xc], // 0x10d8
        pub _: [u8; 0x4], // 0x10e4
        pub _: [u8; 0x1], // 0x10e8
        pub _: [u8; 0x1], // 0x10e9
        pub _: [u8; 0x6], // 0x10ea
    }

    #[repr(C)]
    pub struct C_WeaponMP5SD {
        pub pad_0: [u8; 0x1f50], // 0x0
    }

    #[repr(C)]
    pub struct C_World {
        pub pad_0: [u8; 0x1098], // 0x0
    }

    #[repr(C)]
    pub struct C_CSGO_TeamSelectCounterTerroristPosition {
        pub pad_0: [u8; 0x1d18], // 0x0
    }

    #[repr(C)]
    pub struct C_WeaponGalilAR {
        pub pad_0: [u8; 0x1f50], // 0x0
    }

    #[repr(C)]
    pub struct CCSPlayerBase_CameraServices {
        pub pad_0: [u8; 0x298], // 0x0
        pub _: [u8; 0x4], // 0x298
        pub _: [u8; 0x4], // 0x29c
        pub _: [u8; 0x4], // 0x2a0
        pub _: [u8; 0x4], // 0x2a4
        pub _: [u8; 0x4], // 0x2a8
        pub _: [u8; 0x4], // 0x2ac
    }

    #[repr(C)]
    pub struct C_TeamplayRules {
        pub pad_0: [u8; 0x40], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_Inflow_BaseEntrypoint {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x30], // 0x50
    }

    #[repr(C)]
    pub struct C_WeaponSG556 {
        pub pad_0: [u8; 0x1f50], // 0x0
    }

    #[repr(C)]
    pub struct C_CSPlayerPawn {
        pub pad_0: [u8; 0x1570], // 0x0
        pub _: [u8; 0x8], // 0x1570
        pub _: [u8; 0x8], // 0x1578
        pub _: [u8; 0x8], // 0x1580
        pub _: [u8; 0x8], // 0x1588
        pub _: [u8; 0x8], // 0x1590
        pub _: [u8; 0x8], // 0x1598
        pub _: [u8; 0x8], // 0x15a0
        pub _: [u8; 0x4], // 0x15a8
        pub _: [u8; 0x4], // 0x15ac
        pub _: [u8; 0x4], // 0x15b0
        pub _: [u8; 0x4], // 0x15b4
        pub _: [u8; 0x4], // 0x15b8
        pub _: [u8; 0x12], // 0x15bc
        pub _: [u8; 0x1], // 0x15ce
        pub _: [u8; 0x1], // 0x15cf
        pub _: [u8; 0x4], // 0x15d0
        pub _: [u8; 0x4], // 0x15d4
        pub _: [u8; 0x4], // 0x15d8
        pub _: [u8; 0x4], // 0x15dc
        pub _: [u8; 0x1], // 0x15e0
        pub _: [u8; 0x1], // 0x15e1
        pub _: [u8; 0x2], // 0x15e2
        pub _: [u8; 0x4], // 0x15e4
        pub _: [u8; 0x1], // 0x15e8
        pub _: [u8; 0x1], // 0x15e9
        pub _: [u8; 0x2], // 0x15ea
        pub _: [u8; 0x4], // 0x15ec
        pub _: [u8; 0x168], // 0x15f0
        pub _: [u8; 0x4], // 0x1758
        pub _: [u8; 0x4], // 0x175c
        pub _: [u8; 0x1], // 0x1760
        pub _: [u8; 0x3], // 0x1761
        pub _: [u8; 0x4], // 0x1764
        pub _: [u8; 0x5], // 0x1768
        pub _: [u8; 0x3], // 0x176d
        pub _: [u8; 0x5b0], // 0x1770
        pub _: [u8; 0x1], // 0x1d20
        pub _: [u8; 0x3], // 0x1d21
        pub _: [u8; 0x4], // 0x1d24
        pub _: [u8; 0xc], // 0x1d28
        pub _: [u8; 0x40], // 0x1d34
        pub _: [u8; 0x4], // 0x1d74
        pub _: [u8; 0xc], // 0x1d78
        pub _: [u8; 0x4], // 0x1d84
        pub _: [u8; 0x20], // 0x1d88
        pub _: [u8; 0x4], // 0x1da8
        pub _: [u8; 0xc], // 0x1dac
        pub _: [u8; 0x4], // 0x1db8
        pub _: [u8; 0x4], // 0x1dbc
        pub _: [u8; 0x4], // 0x1dc0
        pub _: [u8; 0x4], // 0x1dc4
        pub _: [u8; 0x4], // 0x1dc8
        pub _: [u8; 0x4], // 0x1dcc
        pub _: [u8; 0x48], // 0x1dd0
        pub _: [u8; 0x50], // 0x1e18
        pub _: [u8; 0x18], // 0x1e68
        pub _: [u8; 0x8], // 0x1e80
        pub _: [u8; 0x18], // 0x1e88
        pub _: [u8; 0x1], // 0x1ea0
        pub _: [u8; 0x1], // 0x1ea1
        pub _: [u8; 0x1], // 0x1ea2
        pub _: [u8; 0x1], // 0x1ea3
        pub _: [u8; 0x4], // 0x1ea4
        pub _: [u8; 0x4], // 0x1ea8
        pub _: [u8; 0x4], // 0x1eac
        pub _: [u8; 0x4], // 0x1eb0
        pub _: [u8; 0x4], // 0x1eb4
        pub _: [u8; 0x4], // 0x1eb8
        pub _: [u8; 0x4], // 0x1ebc
        pub _: [u8; 0x4], // 0x1ec0
        pub _: [u8; 0x4], // 0x1ec4
        pub _: [u8; 0x5], // 0x1ec8
        pub _: [u8; 0x3], // 0x1ecd
        pub _: [u8; 0x4], // 0x1ed0
        pub _: [u8; 0x2], // 0x1ed4
        pub _: [u8; 0x2], // 0x1ed6
        pub _: [u8; 0x4], // 0x1ed8
        pub _: [u8; 0x4], // 0x1edc
        pub _: [u8; 0x1], // 0x1ee0
        pub _: [u8; 0x3], // 0x1ee1
        pub _: [u8; 0x4], // 0x1ee4
        pub _: [u8; 0x38], // 0x1ee8
        pub _: [u8; 0x4], // 0x1f20
        pub _: [u8; 0x4], // 0x1f24
        pub _: [u8; 0xc], // 0x1f28
        pub _: [u8; 0xc], // 0x1f34
        pub _: [u8; 0xc], // 0x1f40
        pub _: [u8; 0xc], // 0x1f4c
        pub _: [u8; 0x15a8], // 0x1f58
        pub _: [u8; 0x4], // 0x3500
        pub _: [u8; 0x4], // 0x3504
        pub _: [u8; 0x4], // 0x3508
        pub _: [u8; 0x4], // 0x350c
        pub _: [u8; 0x4], // 0x3510
        pub _: [u8; 0x74], // 0x3514
        pub _: [u8; 0x78], // 0x3588
        pub _: [u8; 0x90], // 0x3600
        pub _: [u8; 0x10], // 0x3690
        pub _: [u8; 0x30], // 0x36a0
        pub _: [u8; 0xc], // 0x36d0
        pub _: [u8; 0x4], // 0x36dc
        pub _: [u8; 0x18], // 0x36e0
        pub _: [u8; 0x4], // 0x36f8
        pub _: [u8; 0x4], // 0x36fc
        pub _: [u8; 0x20], // 0x3700
    }

    #[repr(C)]
    pub struct C_CSGO_TeamIntroTerroristPosition {
        pub pad_0: [u8; 0x1d18], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_WaitForCursorsWithTagBase {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x8], // 0xd8
        pub _: [u8; 0x48], // 0xe0
    }

    #[repr(C)]
    pub struct C_Hostage {
        pub pad_0: [u8; 0x12f0], // 0x0
        pub _: [u8; 0x18], // 0x12f0
        pub _: [u8; 0x8], // 0x1308
        pub _: [u8; 0x18], // 0x1310
        pub _: [u8; 0xc], // 0x1328
        pub _: [u8; 0x1], // 0x1334
        pub _: [u8; 0x3], // 0x1335
        pub _: [u8; 0x4], // 0x1338
        pub _: [u8; 0x4], // 0x133c
        pub _: [u8; 0x4], // 0x1340
        pub _: [u8; 0x4], // 0x1344
        pub _: [u8; 0xc], // 0x1348
        pub _: [u8; 0x4], // 0x1354
        pub _: [u8; 0x4], // 0x1358
        pub _: [u8; 0x4], // 0x135c
        pub _: [u8; 0x8], // 0x1360
        pub _: [u8; 0x18], // 0x1368
        pub _: [u8; 0x10], // 0x1380
        pub _: [u8; 0x18], // 0x1390
        pub _: [u8; 0x1], // 0x13a8
        pub _: [u8; 0x1], // 0x13a9
        pub _: [u8; 0x6], // 0x13aa
        pub _: [u8; 0x8], // 0x13b0
        pub _: [u8; 0x8], // 0x13b8
    }

    #[repr(C)]
    pub struct C_fogplayerparams_t {
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
        pub _: [u8; 0xc], // 0xe4
        pub _: [u8; 0xc], // 0xf0
        pub _: [u8; 0x4], // 0xfc
        pub _: [u8; 0x2], // 0x100
        pub _: [u8; 0x1], // 0x102
        pub _: [u8; 0x1], // 0x103
        pub _: [u8; 0x3], // 0x104
        pub _: [u8; 0x1], // 0x107
        pub _: [u8; 0x1], // 0x108
        pub _: [u8; 0x3], // 0x109
        pub _: [u8; 0x14], // 0x10c
        pub _: [u8; 0x4], // 0x120
        pub _: [u8; 0xc], // 0x124
    }

    #[repr(C)]
    pub struct CPlayer_ObserverServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
        pub _: [u8; 0x4], // 0x58
        pub _: [u8; 0x4], // 0x5c
    }

    #[repr(C)]
    pub struct CCashStack {
        pub pad_0: [u8; 0x1098], // 0x0
        pub _: [u8; 0x8], // 0x1098
    }

    #[repr(C)]
    pub struct C_SoundAreaEntityBase {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x8], // 0x600
        pub _: [u8; 0x8], // 0x608
        pub _: [u8; 0x8], // 0x610
        pub _: [u8; 0x10], // 0x618
    }

    #[repr(C)]
    pub struct C_PlayerVisibility {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x4], // 0x600
        pub _: [u8; 0x4], // 0x604
        pub _: [u8; 0x4], // 0x608
        pub _: [u8; 0x4], // 0x60c
        pub _: [u8; 0x1], // 0x610
        pub _: [u8; 0x1f], // 0x611
    }

    #[repr(C)]
    pub struct CAttributeManager__cached_attribute_float_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct C_BasePlayerWeapon {
        pub pad_0: [u8; 0x1918], // 0x0
        pub _: [u8; 0x4], // 0x1918
        pub _: [u8; 0x4], // 0x191c
        pub _: [u8; 0x4], // 0x1920
        pub _: [u8; 0x4], // 0x1924
        pub _: [u8; 0x4], // 0x1928
        pub _: [u8; 0x4], // 0x192c
        pub _: [u8; 0x20], // 0x1930
    }

    #[repr(C)]
    pub struct CRagdollManager {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x8], // 0x600
    }

    #[repr(C)]
    pub struct CSoundOpvarSetBoxEntity {
        pub pad_0: [u8; 0x620], // 0x0
    }

    #[repr(C)]
    pub struct C_HEGrenade {
        pub pad_0: [u8; 0x1fe0], // 0x0
    }

    #[repr(C)]
    pub struct C_EnvSky {
        pub pad_0: [u8; 0x1098], // 0x0
        pub _: [u8; 0x8], // 0x1098
        pub _: [u8; 0x8], // 0x10a0
        pub _: [u8; 0x4], // 0x10a8
        pub _: [u8; 0x4], // 0x10ac
        pub _: [u8; 0x4], // 0x10b0
        pub _: [u8; 0x4], // 0x10b4
        pub _: [u8; 0x4], // 0x10b8
        pub _: [u8; 0x4], // 0x10bc
        pub _: [u8; 0x4], // 0x10c0
        pub _: [u8; 0x4], // 0x10c4
        pub _: [u8; 0x4], // 0x10c8
        pub _: [u8; 0x2c], // 0x10cc
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
    pub struct C_GameRules {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x28], // 0x8
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x8], // 0x38
    }

    #[repr(C)]
    pub struct C_WeaponMAC10 {
        pub pad_0: [u8; 0x1f50], // 0x0
    }

    #[repr(C)]
    pub struct C_CSGO_MapPreviewCameraPath {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x4], // 0x600
        pub _: [u8; 0x4], // 0x604
        pub _: [u8; 0x1], // 0x608
        pub _: [u8; 0x1], // 0x609
        pub _: [u8; 0x2], // 0x60a
        pub _: [u8; 0x44], // 0x60c
        pub _: [u8; 0x4], // 0x650
        pub _: [u8; 0x18], // 0x654
        pub _: [u8; 0x4], // 0x66c
        pub _: [u8; 0x4], // 0x670
        pub _: [u8; 0x4], // 0x674
        pub _: [u8; 0x4], // 0x678
        pub _: [u8; 0x4], // 0x67c
        pub _: [u8; 0x8], // 0x680
    }

    #[repr(C)]
    pub struct C_PointWorldText {
        pub pad_0: [u8; 0x10a0], // 0x0
        pub _: [u8; 0x18], // 0x10a0
        pub _: [u8; 0x4], // 0x10b8
        pub _: [u8; 0x4], // 0x10bc
        pub _: [u8; 0x200], // 0x10c0
        pub _: [u8; 0x40], // 0x12c0
        pub _: [u8; 0x40], // 0x1300
        pub _: [u8; 0x1], // 0x1340
        pub _: [u8; 0x3], // 0x1341
        pub _: [u8; 0x4], // 0x1344
        pub _: [u8; 0x4], // 0x1348
        pub _: [u8; 0x4], // 0x134c
        pub _: [u8; 0x4], // 0x1350
        pub _: [u8; 0x4], // 0x1354
        pub _: [u8; 0x4], // 0x1358
        pub _: [u8; 0x4], // 0x135c
        pub _: [u8; 0x4], // 0x1360
        pub _: [u8; 0x4], // 0x1364
        pub _: [u8; 0x4], // 0x1368
        pub _: [u8; 0x4], // 0x136c
    }

    #[repr(C)]
    pub struct C_RopeKeyframe {
        pub _: [u8; 0x10a0], // 0x0
        pub _: [u8; 0x4], // 0x10a0
        pub _: [u8; 0x4], // 0x10a4
        pub _: [u8; 0x4], // 0x10a8
        pub _: [u8; 0x4], // 0x10ac
        pub _: [u8; 0x4], // 0x10b0
        pub _: [u8; 0x4], // 0x10b4
        pub _: [u8; 0x18], // 0x10b8
        pub _: [u8; 0x4], // 0x10d0
        pub _: [u8; 0x4], // 0x10d4
        pub _: [u8; 0x8], // 0x10d8
        pub _: [u8; 0x278], // 0x10e0
        pub _: [u8; 0x4], // 0x1358
        pub _: [u8; 0x4], // 0x135c
        pub _: [u8; 0x4], // 0x1360
        pub _: [u8; 0x1], // 0x1364
        pub _: [u8; 0x1], // 0x1365
        pub _: [u8; 0x2], // 0x1366
        pub _: [u8; 0x2], // 0x1368
        pub _: [u8; 0x2], // 0x136a
        pub _: [u8; 0x4], // 0x136c
        pub _: [u8; 0x1], // 0x1370
        pub _: [u8; 0x3], // 0x1371
        pub _: [u8; 0x4], // 0x1374
        pub _: [u8; 0x10], // 0x1378
        pub _: [u8; 0x8], // 0x1388
        pub _: [u8; 0x4], // 0x1390
        pub _: [u8; 0xc], // 0x1394
        pub _: [u8; 0xc], // 0x13a0
        pub _: [u8; 0x4], // 0x13ac
        pub _: [u8; 0x4], // 0x13b0
        pub _: [u8; 0x4], // 0x13b4
        pub _: [u8; 0xc], // 0x13b8
        pub _: [u8; 0xc], // 0x13c4
        pub _: [u8; 0x18], // 0x13d0
        pub _: [u8; 0x18], // 0x13e8
        pub _: [u8; 0x8], // 0x1400
    }

    #[repr(C)]
    pub struct C_BaseToggle {
        pub pad_0: [u8; 0x1098], // 0x0
    }

    #[repr(C)]
    pub struct C_EnvCubemapBox {
        pub pad_0: [u8; 0x6e8], // 0x0
    }

    #[repr(C)]
    pub struct C_EnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume {
        pub pad_0: [u8; 0x7d8], // 0x0
    }

    #[repr(C)]
    pub struct C_RopeKeyframe__CPhysicsDelegate {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct CInfoDynamicShadowHint {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x4], // 0x600
        pub _: [u8; 0x4], // 0x604
        pub _: [u8; 0x4], // 0x608
        pub _: [u8; 0x4], // 0x60c
        pub _: [u8; 0x8], // 0x610
    }

    #[repr(C)]
    pub struct CPathNode {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0xc], // 0x600
        pub _: [u8; 0xc], // 0x60c
        pub _: [u8; 0x8], // 0x618
        pub _: [u8; 0x10], // 0x620
        pub _: [u8; 0x20], // 0x630
        pub _: [u8; 0x10], // 0x650
    }

    #[repr(C)]
    pub struct C_FuncMoveLinear {
        pub pad_0: [u8; 0x1098], // 0x0
    }

    #[repr(C)]
    pub struct C_EnvShakeVolume {
        pub pad_0: [u8; 0x618], // 0x0
        pub _: [u8; 0xc], // 0x618
        pub _: [u8; 0xc], // 0x624
        pub _: [u8; 0x4], // 0x630
        pub _: [u8; 0x4], // 0x634
        pub _: [u8; 0x4], // 0x638
        pub _: [u8; 0x14], // 0x63c
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
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x48], // 0xd8
        pub _: [u8; 0x48], // 0x120
    }

    #[repr(C)]
    pub struct C_WeaponXM1014 {
        pub pad_0: [u8; 0x1f20], // 0x0
    }

    #[repr(C)]
    pub struct C_WorldModelGloves {
        pub pad_0: [u8; 0x1270], // 0x0
    }

    #[repr(C)]
    pub struct C_PhysicsPropMultiplayer {
        pub pad_0: [u8; 0x13f0], // 0x0
    }

    #[repr(C)]
    pub struct C_SoundEventOBBEntity {
        pub pad_0: [u8; 0x6c0], // 0x0
        pub _: [u8; 0xc], // 0x6c0
        pub _: [u8; 0x1c], // 0x6cc
    }

    #[repr(C)]
    pub struct CPulseCell_BaseLerp {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x48], // 0xd8
    }

    #[repr(C)]
    pub struct C_WeaponAug {
        pub pad_0: [u8; 0x1f50], // 0x0
    }

    #[repr(C)]
    pub struct C_BasePropDoor {
        pub pad_0: [u8; 0x14c0], // 0x0
        pub _: [u8; 0x4], // 0x14c0
        pub _: [u8; 0x1], // 0x14c4
        pub _: [u8; 0x1], // 0x14c5
        pub _: [u8; 0x2], // 0x14c6
        pub _: [u8; 0xc], // 0x14c8
        pub _: [u8; 0xc], // 0x14d4
        pub _: [u8; 0x4], // 0x14e0
        pub _: [u8; 0xc], // 0x14e4
    }

    #[repr(C)]
    pub struct CChoreoInfoTarget {
        pub pad_0: [u8; 0x600], // 0x0
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
    pub struct C_Item_Healthshot {
        pub pad_0: [u8; 0x1f30], // 0x0
    }

    #[repr(C)]
    pub struct CCSCustomHudLayout {
        pub pad_0: [u8; 0x618], // 0x0
        pub _: [u8; 0x8], // 0x618
        pub _: [u8; 0x8], // 0x620
        pub _: [u8; 0x68], // 0x628
        pub _: [u8; 0x108], // 0x690
        pub _: [u8; 0x18], // 0x798
        pub _: [u8; 0x18], // 0x7b0
        pub _: [u8; 0x78], // 0x7c8
    }

    #[repr(C)]
    pub struct CEntityInstance {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x8], // 0x28
    }

    #[repr(C)]
    pub struct C_BaseModelEntity {
        pub pad_0: [u8; 0xaf8], // 0x0
        pub _: [u8; 0x8], // 0xaf8
        pub _: [u8; 0x18], // 0xb00
        pub _: [u8; 0x8], // 0xb18
        pub _: [u8; 0x4], // 0xb20
        pub _: [u8; 0x4], // 0xb24
        pub _: [u8; 0x4], // 0xb28
        pub _: [u8; 0x4], // 0xb2c
        pub _: [u8; 0x4], // 0xb30
        pub _: [u8; 0x4], // 0xb34
        pub _: [u8; 0x4], // 0xb38
        pub _: [u8; 0x4], // 0xb3c
        pub _: [u8; 0x4], // 0xb40
        pub _: [u8; 0x4], // 0xb44
        pub _: [u8; 0x1], // 0xb48
        pub _: [u8; 0x1], // 0xb49
        pub _: [u8; 0x1], // 0xb4a
        pub _: [u8; 0x1], // 0xb4b
        pub _: [u8; 0x4], // 0xb4c
        pub _: [u8; 0x128], // 0xb50
        pub _: [u8; 0x1], // 0xc78
        pub _: [u8; 0x3], // 0xc79
        pub _: [u8; 0x4], // 0xc7c
        pub _: [u8; 0x1], // 0xc80
        pub _: [u8; 0x1], // 0xc81
        pub _: [u8; 0x1e], // 0xc82
        pub _: [u8; 0x8], // 0xca0
        pub _: [u8; 0x80], // 0xca8
        pub _: [u8; 0x1], // 0xd28
        pub _: [u8; 0x1], // 0xd29
        pub _: [u8; 0x6], // 0xd2a
        pub _: [u8; 0xb8], // 0xd30
        pub _: [u8; 0x58], // 0xde8
        pub _: [u8; 0x4], // 0xe40
        pub _: [u8; 0x4], // 0xe44
        pub _: [u8; 0x4], // 0xe48
        pub _: [u8; 0x4], // 0xe4c
        pub _: [u8; 0x4], // 0xe50
        pub _: [u8; 0x1], // 0xe54
        pub _: [u8; 0x3], // 0xe55
        pub _: [u8; 0x8], // 0xe58
        pub _: [u8; 0xd8], // 0xe60
        pub _: [u8; 0x28], // 0xf38
        pub _: [u8; 0xe0], // 0xf60
        pub _: [u8; 0x8], // 0x1040
        pub _: [u8; 0x4], // 0x1048
        pub _: [u8; 0x3c], // 0x104c
        pub _: [u8; 0x10], // 0x1088
    }

    #[repr(C)]
    pub struct CCSPlayer_BulletServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x60], // 0x48
    }

    #[repr(C)]
    pub struct C_SoundOpvarSetAutoRoomEntity {
        pub pad_0: [u8; 0x620], // 0x0
    }

    #[repr(C)]
    pub struct C_EnvCombinedLightProbeVolume {
        pub pad_0: [u8; 0x718], // 0x0
        pub _: [u8; 0x4], // 0x718
        pub _: [u8; 0x4], // 0x71c
        pub _: [u8; 0x8], // 0x720
        pub _: [u8; 0x8], // 0x728
        pub _: [u8; 0x8], // 0x730
        pub _: [u8; 0x8], // 0x738
        pub _: [u8; 0x8], // 0x740
        pub _: [u8; 0x8], // 0x748
        pub _: [u8; 0x8], // 0x750
        pub _: [u8; 0x8], // 0x758
        pub _: [u8; 0x8], // 0x760
        pub _: [u8; 0xc], // 0x768
        pub _: [u8; 0xc], // 0x774
        pub _: [u8; 0x4], // 0x780
        pub _: [u8; 0x4], // 0x784
        pub _: [u8; 0x4], // 0x788
        pub _: [u8; 0x4], // 0x78c
        pub _: [u8; 0x4], // 0x790
        pub _: [u8; 0x4], // 0x794
        pub _: [u8; 0xc], // 0x798
        pub _: [u8; 0x4], // 0x7a4
        pub _: [u8; 0x4], // 0x7a8
        pub _: [u8; 0x4], // 0x7ac
        pub _: [u8; 0x4], // 0x7b0
        pub _: [u8; 0x4], // 0x7b4
        pub _: [u8; 0x19], // 0x7b8
        pub _: [u8; 0x7], // 0x7d1
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
        pub pad_0: [u8; 0x10a0], // 0x0
    }

    #[repr(C)]
    pub struct C_BaseEntity {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x8], // 0x30
        pub _: [u8; 0x2f0], // 0x38
        pub _: [u8; 0x8], // 0x328
        pub _: [u8; 0x8], // 0x330
        pub _: [u8; 0x8], // 0x338
        pub _: [u8; 0x8], // 0x340
        pub _: [u8; 0x4], // 0x348
        pub _: [u8; 0x4], // 0x34c
        pub _: [u8; 0x4], // 0x350
        pub _: [u8; 0x1], // 0x354
        pub _: [u8; 0x3], // 0x355
        pub _: [u8; 0x8], // 0x358
        pub _: [u8; 0x1], // 0x360
        pub _: [u8; 0x3], // 0x361
        pub _: [u8; 0x4], // 0x364
        pub _: [u8; 0x4], // 0x368
        pub _: [u8; 0x4], // 0x36c
        pub _: [u8; 0x4], // 0x370
        pub _: [u8; 0x4], // 0x374
        pub _: [u8; 0x1], // 0x378
        pub _: [u8; 0x1], // 0x379
        pub _: [u8; 0x1], // 0x37a
        pub _: [u8; 0x1], // 0x37b
        pub _: [u8; 0x4], // 0x37c
        pub _: [u8; 0x10], // 0x380
        pub _: [u8; 0x4], // 0x390
        pub _: [u8; 0x4], // 0x394
        pub _: [u8; 0x18], // 0x398
        pub _: [u8; 0x4], // 0x3b0
        pub _: [u8; 0x4], // 0x3b4
        pub _: [u8; 0x4], // 0x3b8
        pub _: [u8; 0x1], // 0x3bc
        pub _: [u8; 0x1], // 0x3bd
        pub _: [u8; 0x1], // 0x3be
        pub _: [u8; 0x1], // 0x3bf
        pub _: [u8; 0x8], // 0x3c0
        pub _: [u8; 0x18], // 0x3c8
        pub _: [u8; 0x4], // 0x3e0
        pub _: [u8; 0x2], // 0x3e4
        pub _: [u8; 0x1], // 0x3e6
        pub _: [u8; 0x1], // 0x3e7
        pub _: [u8; 0x4], // 0x3e8
        pub _: [u8; 0x8], // 0x3ec
        pub _: [u8; 0x4], // 0x3f4
        pub _: [u8; 0xc], // 0x3f8
        pub _: [u8; 0x2c], // 0x404
        pub _: [u8; 0xe0], // 0x430
        pub _: [u8; 0xc], // 0x510
        pub _: [u8; 0x4], // 0x51c
        pub _: [u8; 0x4], // 0x520
        pub _: [u8; 0x1], // 0x524
        pub _: [u8; 0x1], // 0x525
        pub _: [u8; 0x2], // 0x526
        pub _: [u8; 0x4], // 0x528
        pub _: [u8; 0x4], // 0x52c
        pub _: [u8; 0x4], // 0x530
        pub _: [u8; 0x4], // 0x534
        pub _: [u8; 0x4], // 0x538
        pub _: [u8; 0x4], // 0x53c
        pub _: [u8; 0x4], // 0x540
        pub _: [u8; 0x4], // 0x544
        pub _: [u8; 0x1], // 0x548
        pub _: [u8; 0x3], // 0x549
        pub _: [u8; 0x4], // 0x54c
        pub _: [u8; 0x10], // 0x550
        pub _: [u8; 0x4], // 0x560
        pub _: [u8; 0x4], // 0x564
        pub _: [u8; 0x1], // 0x568
        pub _: [u8; 0x1], // 0x569
        pub _: [u8; 0x2], // 0x56a
        pub _: [u8; 0x4], // 0x56c
        pub _: [u8; 0x4], // 0x570
        pub _: [u8; 0x4], // 0x574
        pub _: [u8; 0x30], // 0x578
        pub _: [u8; 0xc], // 0x5a8
        pub _: [u8; 0x4], // 0x5b4
        pub _: [u8; 0x18], // 0x5b8
        pub _: [u8; 0x11], // 0x5d0
        pub _: [u8; 0x1], // 0x5e1
        pub _: [u8; 0xe], // 0x5e2
        pub _: [u8; 0x8], // 0x5f0
        pub _: [u8; 0x8], // 0x5f8
    }

    #[repr(C)]
    pub struct ActiveModelConfig_t {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x8], // 0x30
        pub _: [u8; 0x8], // 0x38
        pub _: [u8; 0x18], // 0x40
        pub _: [u8; 0x18], // 0x58
    }

    #[repr(C)]
    pub struct C_WeaponSSG08 {
        pub pad_0: [u8; 0x1f50], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_Value_Curve {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x40], // 0x48
    }

    #[repr(C)]
    pub struct C_Chicken {
        pub pad_0: [u8; 0x14c0], // 0x0
        pub _: [u8; 0x4], // 0x14c0
        pub _: [u8; 0x4], // 0x14c4
        pub _: [u8; 0x610], // 0x14c8
        pub _: [u8; 0x4], // 0x1ad8
        pub _: [u8; 0x4], // 0x1adc
        pub _: [u8; 0x88], // 0x1ae0
        pub _: [u8; 0x38], // 0x1b68
    }

    #[repr(C)]
    pub struct C_BasePlayerPawn {
        pub pad_0: [u8; 0x12f0], // 0x0
        pub _: [u8; 0x8], // 0x12f0
        pub _: [u8; 0x8], // 0x12f8
        pub _: [u8; 0x8], // 0x1300
        pub _: [u8; 0x8], // 0x1308
        pub _: [u8; 0x8], // 0x1310
        pub _: [u8; 0x8], // 0x1318
        pub _: [u8; 0x8], // 0x1320
        pub _: [u8; 0x8], // 0x1328
        pub _: [u8; 0x10], // 0x1330
        pub _: [u8; 0x68], // 0x1340
        pub _: [u8; 0xc], // 0x13a8
        pub _: [u8; 0xc], // 0x13b4
        pub _: [u8; 0x8], // 0x13c0
        pub _: [u8; 0x90], // 0x13c8
        pub _: [u8; 0x8], // 0x1458
        pub _: [u8; 0xc], // 0x1460
        pub _: [u8; 0x20], // 0x146c
        pub _: [u8; 0xc], // 0x148c
        pub _: [u8; 0x4], // 0x1498
        pub _: [u8; 0x4], // 0x149c
        pub _: [u8; 0x4], // 0x14a0
        pub _: [u8; 0xc], // 0x14a4
        pub _: [u8; 0x4], // 0x14b0
        pub _: [u8; 0x4], // 0x14b4
        pub _: [u8; 0x4], // 0x14b8
        pub _: [u8; 0x4], // 0x14bc
        pub _: [u8; 0x4], // 0x14c0
        pub _: [u8; 0x4], // 0x14c4
    }

    #[repr(C)]
    pub struct C_SoundOpvarSetAABBEntity {
        pub pad_0: [u8; 0x620], // 0x0
    }

    #[repr(C)]
    pub struct C_WeaponBizon {
        pub pad_0: [u8; 0x1f50], // 0x0
    }

    #[repr(C)]
    pub struct C_StattrakModule {
        pub pad_0: [u8; 0x1270], // 0x0
        pub _: [u8; 0x8], // 0x1270
    }

    #[repr(C)]
    pub struct CCSObserver_CameraServices {
        pub pad_0: [u8; 0x2b0], // 0x0
        pub _: [u8; 0x8], // 0x2b0
    }

    #[repr(C)]
    pub struct CEnvSoundscapeProxy {
        pub pad_0: [u8; 0x690], // 0x0
        pub _: [u8; 0x8], // 0x690
    }

    #[repr(C)]
    pub struct C_SoundEventEntity {
        pub _: [u8; 0x600], // 0x0
        pub _: [u8; 0x1], // 0x600
        pub _: [u8; 0x1], // 0x601
        pub _: [u8; 0x1], // 0x602
        pub _: [u8; 0x1], // 0x603
        pub _: [u8; 0x4], // 0x604
        pub _: [u8; 0x8], // 0x608
        pub _: [u8; 0x8], // 0x610
        pub _: [u8; 0x8], // 0x618
        pub _: [u8; 0x30], // 0x620
        pub _: [u8; 0x18], // 0x650
        pub _: [u8; 0x30], // 0x668
        pub _: [u8; 0x1c], // 0x698
        pub _: [u8; 0x4], // 0x6b4
        pub _: [u8; 0x8], // 0x6b8
    }

    #[repr(C)]
    pub struct CPulseCell_Inflow_EventHandler {
        pub pad_0: [u8; 0x80], // 0x0
        pub _: [u8; 0x10], // 0x80
    }

    #[repr(C)]
    pub struct C_LightOrthoEntity {
        pub pad_0: [u8; 0x10a0], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_BaseFlow {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct CBombTarget {
        pub pad_0: [u8; 0x1180], // 0x0
        pub _: [u8; 0x8], // 0x1180
    }

    #[repr(C)]
    pub struct C_Knife {
        pub pad_0: [u8; 0x1f20], // 0x0
        pub _: [u8; 0x10], // 0x1f20
    }

    #[repr(C)]
    pub struct C_CSGO_TerroristWingmanIntroCamera {
        pub pad_0: [u8; 0x690], // 0x0
    }

    #[repr(C)]
    pub struct CSkeletonInstance {
        pub pad_0: [u8; 0x140], // 0x0
        pub _: [u8; 0x2b0], // 0x140
        pub _: [u8; 0x1], // 0x3f0
        pub _: [u8; 0x1], // 0x3f1
        pub _: [u8; 0x1], // 0x3f2
        pub _: [u8; 0x5], // 0x3f3
        pub _: [u8; 0x4], // 0x3f8
        pub _: [u8; 0x94], // 0x3fc
    }

    #[repr(C)]
    pub struct CEntityComponent {
        pub pad_0: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct C_ItemDogtags {
        pub pad_0: [u8; 0x1a18], // 0x0
        pub _: [u8; 0x4], // 0x1a18
        pub _: [u8; 0x4], // 0x1a1c
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
        pub _: [u8; 0x20], // 0x0
        pub _: [u8; 0x8], // 0x20
    }

    #[repr(C)]
    pub struct CPulseCell_BaseLerp__CursorState_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct C_BaseClientUIEntity {
        pub pad_0: [u8; 0x10a0], // 0x0
        pub _: [u8; 0x8], // 0x10a0
        pub _: [u8; 0x8], // 0x10a8
        pub _: [u8; 0x8], // 0x10b0
        pub _: [u8; 0x10], // 0x10b8
    }

    #[repr(C)]
    pub struct C_WeaponUSPSilencer {
        pub pad_0: [u8; 0x1f50], // 0x0
    }

    #[repr(C)]
    pub struct C_MolotovProjectile {
        pub pad_0: [u8; 0x1348], // 0x0
        pub _: [u8; 0x28], // 0x1348
    }

    #[repr(C)]
    pub struct C_TriggerLerpObject {
        pub pad_0: [u8; 0x1180], // 0x0
    }

    #[repr(C)]
    pub struct C_WeaponRevolver {
        pub pad_0: [u8; 0x1f50], // 0x0
    }

    #[repr(C)]
    pub struct C_WeaponElite {
        pub pad_0: [u8; 0x1f50], // 0x0
    }

    #[repr(C)]
    pub struct C_DynamicPropAlias_cable_dynamic {
        pub pad_0: [u8; 0x14b0], // 0x0
    }

    #[repr(C)]
    pub struct CBaseProp {
        pub pad_0: [u8; 0x1268], // 0x0
        pub _: [u8; 0x4], // 0x1268
        pub _: [u8; 0x4], // 0x126c
        pub _: [u8; 0x10], // 0x1270
        pub _: [u8; 0x20], // 0x1280
    }

    #[repr(C)]
    pub struct CInfoOffscreenPanoramaTexture {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x1], // 0x600
        pub _: [u8; 0x3], // 0x601
        pub _: [u8; 0x4], // 0x604
        pub _: [u8; 0x8], // 0x608
        pub _: [u8; 0x8], // 0x610
        pub _: [u8; 0x8], // 0x618
        pub _: [u8; 0x8], // 0x620
        pub _: [u8; 0x18], // 0x628
        pub _: [u8; 0x8], // 0x640
        pub _: [u8; 0x18], // 0x648
        pub _: [u8; 0x8], // 0x660
        pub _: [u8; 0x178], // 0x668
        pub _: [u8; 0x28], // 0x7e0
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
        pub pad_0: [u8; 0x600], // 0x0
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
        pub _: [u8; 0x4], // 0x144
        pub _: [u8; 0x68], // 0x148
        pub _: [u8; 0x4], // 0x1b0
        pub _: [u8; 0x8], // 0x1b4
        pub _: [u8; 0x14], // 0x1bc
        pub _: [u8; 0x8], // 0x1d0
        pub _: [u8; 0x14], // 0x1d8
        pub _: [u8; 0x14], // 0x1ec
        pub _: [u8; 0x8], // 0x200
        pub _: [u8; 0x90], // 0x208
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
    pub struct C_BaseCSGrenade {
        pub pad_0: [u8; 0x1f20], // 0x0
        pub _: [u8; 0x1], // 0x1f20
        pub _: [u8; 0x1], // 0x1f21
        pub _: [u8; 0x1], // 0x1f22
        pub _: [u8; 0x1], // 0x1f23
        pub _: [u8; 0x1], // 0x1f24
        pub _: [u8; 0x3], // 0x1f25
        pub _: [u8; 0x8], // 0x1f28
        pub _: [u8; 0x78], // 0x1f30
        pub _: [u8; 0x4], // 0x1fa8
        pub _: [u8; 0x4], // 0x1fac
        pub _: [u8; 0x4], // 0x1fb0
        pub _: [u8; 0x4], // 0x1fb4
        pub _: [u8; 0x4], // 0x1fb8
        pub _: [u8; 0x24], // 0x1fbc
    }

    #[repr(C)]
    pub struct CFilterAttributeInt {
        pub pad_0: [u8; 0x638], // 0x0
        pub _: [u8; 0x8], // 0x638
    }

    #[repr(C)]
    pub struct CPointTemplate {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x8], // 0x600
        pub _: [u8; 0x8], // 0x608
        pub _: [u8; 0x8], // 0x610
        pub _: [u8; 0x4], // 0x618
        pub _: [u8; 0x4], // 0x61c
        pub _: [u8; 0x4], // 0x620
        pub _: [u8; 0x4], // 0x624
        pub _: [u8; 0x18], // 0x628
        pub _: [u8; 0x18], // 0x640
        pub _: [u8; 0x8], // 0x658
        pub _: [u8; 0x8], // 0x660
        pub _: [u8; 0x30], // 0x668
    }

    #[repr(C)]
    pub struct CPlayer_FlashlightServices {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct CCSPlayerController {
        pub pad_0: [u8; 0x818], // 0x0
        pub _: [u8; 0x8], // 0x818
        pub _: [u8; 0x8], // 0x820
        pub _: [u8; 0x8], // 0x828
        pub _: [u8; 0x8], // 0x830
        pub _: [u8; 0x4], // 0x838
        pub _: [u8; 0x4], // 0x83c
        pub _: [u8; 0x8], // 0x840
        pub _: [u8; 0x8], // 0x848
        pub _: [u8; 0x4], // 0x850
        pub _: [u8; 0x4], // 0x854
        pub _: [u8; 0x4], // 0x858
        pub _: [u8; 0x4], // 0x85c
        pub _: [u8; 0x8], // 0x860
        pub _: [u8; 0x8], // 0x868
        pub _: [u8; 0x8], // 0x870
        pub _: [u8; 0x8], // 0x878
        pub _: [u8; 0x8], // 0x880
        pub _: [u8; 0x8], // 0x888
        pub _: [u8; 0x8], // 0x890
        pub _: [u8; 0x8], // 0x898
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
        pub _: [u8; 0x30], // 0x8c8
        pub _: [u8; 0x4], // 0x8f8
        pub _: [u8; 0x4], // 0x8fc
        pub _: [u8; 0x4], // 0x900
        pub _: [u8; 0x4], // 0x904
        pub _: [u8; 0x1], // 0x908
        pub _: [u8; 0x1], // 0x909
        pub _: [u8; 0x1], // 0x90a
        pub _: [u8; 0x1], // 0x90b
        pub _: [u8; 0x1], // 0x90c
        pub _: [u8; 0x3], // 0x90d
        pub _: [u8; 0x10], // 0x910
        pub _: [u8; 0x1], // 0x920
        pub _: [u8; 0x1], // 0x921
        pub _: [u8; 0x2], // 0x922
        pub _: [u8; 0x4], // 0x924
        pub _: [u8; 0x4], // 0x928
        pub _: [u8; 0x4], // 0x92c
        pub _: [u8; 0x4], // 0x930
        pub _: [u8; 0x4], // 0x934
        pub _: [u8; 0x4], // 0x938
        pub _: [u8; 0x4], // 0x93c
        pub _: [u8; 0x1], // 0x940
        pub _: [u8; 0x1], // 0x941
        pub _: [u8; 0x2], // 0x942
        pub _: [u8; 0x4], // 0x944
        pub _: [u8; 0x4], // 0x948
        pub _: [u8; 0x4], // 0x94c
        pub _: [u8; 0x4], // 0x950
        pub _: [u8; 0x4], // 0x954
        pub _: [u8; 0x8], // 0x958
        pub _: [u8; 0x1], // 0x960
        pub _: [u8; 0x1], // 0x961
        pub _: [u8; 0x2], // 0x962
        pub _: [u8; 0x4], // 0x964
        pub _: [u8; 0x4], // 0x968
        pub _: [u8; 0x4], // 0x96c
        pub _: [u8; 0x4], // 0x970
        pub _: [u8; 0x8], // 0x974
        pub _: [u8; 0x4], // 0x97c
    }

    #[repr(C)]
    pub struct C_CSGO_CounterTerroristRushIntroCamera {
        pub pad_0: [u8; 0x690], // 0x0
    }

    #[repr(C)]
    pub struct C_CSGO_TeamIntroCounterTerroristPosition {
        pub pad_0: [u8; 0x1d18], // 0x0
    }

    #[repr(C)]
    pub struct C_CSGO_PreviewModel {
        pub pad_0: [u8; 0x1268], // 0x0
        pub _: [u8; 0x8], // 0x1268
        pub _: [u8; 0x4], // 0x1270
        pub _: [u8; 0x4], // 0x1274
        pub _: [u8; 0x640], // 0x1278
    }

    #[repr(C)]
    pub struct C_CSGO_TeamSelectCharacterPosition {
        pub pad_0: [u8; 0x1d18], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_Outflow_CycleOrdered__InstanceState_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CCSObservableElement {
        pub pad_0: [u8; 0x618], // 0x0
        pub _: [u8; 0x8], // 0x618
        pub _: [u8; 0x4], // 0x620
        pub _: [u8; 0x4], // 0x624
        pub _: [u8; 0x8], // 0x628
    }

    #[repr(C)]
    pub struct C_SoundEventAABBEntity {
        pub pad_0: [u8; 0x6c0], // 0x0
        pub _: [u8; 0xc], // 0x6c0
        pub _: [u8; 0xc], // 0x6cc
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
        pub _: [u8; 0x18], // 0x6b0
        pub _: [u8; 0x38], // 0x6c8
        pub _: [u8; 0x4], // 0x700
        pub _: [u8; 0x4], // 0x704
        pub _: [u8; 0x4], // 0x708
        pub _: [u8; 0x4], // 0x70c
        pub _: [u8; 0x4], // 0x710
        pub _: [u8; 0x90], // 0x714
        pub _: [u8; 0x82c], // 0x7a4
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
    pub struct C_TintController {
        pub pad_0: [u8; 0x618], // 0x0
    }

    #[repr(C)]
    pub struct C_WeaponBaseItem {
        pub pad_0: [u8; 0x1f20], // 0x0
        pub _: [u8; 0x1], // 0x1f20
        pub _: [u8; 0xf], // 0x1f21
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
        pub _: [u8; 0x18], // 0x8
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x24], // 0x24
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
    pub struct CPulseCell_LimitCount__InstanceState_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct C_WeaponCZ75a {
        pub pad_0: [u8; 0x1f50], // 0x0
        pub _: [u8; 0x10], // 0x1f50
    }

    #[repr(C)]
    pub struct C_DynamicLight {
        pub pad_0: [u8; 0x1098], // 0x0
        pub _: [u8; 0x1], // 0x1098
        pub _: [u8; 0x3], // 0x1099
        pub _: [u8; 0x4], // 0x109c
        pub _: [u8; 0x4], // 0x10a0
        pub _: [u8; 0x4], // 0x10a4
        pub _: [u8; 0x4], // 0x10a8
        pub _: [u8; 0x14], // 0x10ac
    }

    #[repr(C)]
    pub struct CCS2PawnGraphController {
        pub pad_0: [u8; 0x2d8], // 0x0
        pub _: [u8; 0x18], // 0x2d8
        pub _: [u8; 0x18], // 0x2f0
        pub _: [u8; 0x18], // 0x308
        pub _: [u8; 0x18], // 0x320
        pub _: [u8; 0x18], // 0x338
        pub _: [u8; 0x18], // 0x350
        pub _: [u8; 0x18], // 0x368
        pub _: [u8; 0x18], // 0x380
        pub _: [u8; 0x18], // 0x398
        pub _: [u8; 0x18], // 0x3b0
        pub _: [u8; 0x18], // 0x3c8
        pub _: [u8; 0x18], // 0x3e0
        pub _: [u8; 0x18], // 0x3f8
        pub _: [u8; 0x18], // 0x410
        pub _: [u8; 0x18], // 0x428
        pub _: [u8; 0x18], // 0x440
        pub _: [u8; 0x18], // 0x458
        pub _: [u8; 0x18], // 0x470
        pub _: [u8; 0x18], // 0x488
        pub _: [u8; 0x18], // 0x4a0
        pub _: [u8; 0x18], // 0x4b8
        pub _: [u8; 0x18], // 0x4d0
        pub _: [u8; 0x18], // 0x4e8
        pub _: [u8; 0x18], // 0x500
        pub _: [u8; 0x18], // 0x518
        pub _: [u8; 0x18], // 0x530
        pub _: [u8; 0x18], // 0x548
        pub _: [u8; 0x18], // 0x560
    }

    #[repr(C)]
    pub struct EngineCountdownTimer {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct C_SoundEventSphereEntity {
        pub pad_0: [u8; 0x6c0], // 0x0
        pub _: [u8; 0x8], // 0x6c0
    }

    #[repr(C)]
    pub struct CCSPlayerController_DamageServices {
        pub pad_0: [u8; 0x40], // 0x0
        pub _: [u8; 0x8], // 0x40
        pub _: [u8; 0x68], // 0x48
    }

    #[repr(C)]
    pub struct C_CSGO_TeamPreviewModel {
        pub pad_0: [u8; 0x37d0], // 0x0
    }

    #[repr(C)]
    pub struct C_TonemapController2Alias_env_tonemap_controller2 {
        pub pad_0: [u8; 0x618], // 0x0
    }

    #[repr(C)]
    pub struct C_Inferno {
        pub pad_0: [u8; 0x10d8], // 0x0
        pub _: [u8; 0x8], // 0x10d8
        pub _: [u8; 0x8], // 0x10e0
        pub _: [u8; 0x8], // 0x10e8
        pub _: [u8; 0x8], // 0x10f0
        pub _: [u8; 0x8], // 0x10f8
        pub _: [u8; 0x8], // 0x1100
        pub _: [u8; 0x300], // 0x1108
        pub _: [u8; 0x300], // 0x1408
        pub _: [u8; 0x40], // 0x1708
        pub _: [u8; 0x300], // 0x1748
        pub _: [u8; 0x4], // 0x1a48
        pub _: [u8; 0x4], // 0x1a4c
        pub _: [u8; 0x4], // 0x1a50
        pub _: [u8; 0x4], // 0x1a54
        pub _: [u8; 0x4], // 0x1a58
        pub _: [u8; 0x6c04], // 0x1a5c
        pub _: [u8; 0x4], // 0x8660
        pub _: [u8; 0x4], // 0x8664
        pub _: [u8; 0x4], // 0x8668
        pub _: [u8; 0x4], // 0x866c
        pub _: [u8; 0x4], // 0x8670
        pub _: [u8; 0xc], // 0x8674
        pub _: [u8; 0xc], // 0x8680
        pub _: [u8; 0x14], // 0x868c
    }

    #[repr(C)]
    pub struct CFilterLOS {
        pub pad_0: [u8; 0x638], // 0x0
    }

    #[repr(C)]
    pub struct CPointOrient {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x8], // 0x600
        pub _: [u8; 0x4], // 0x608
        pub _: [u8; 0x4], // 0x60c
        pub _: [u8; 0x4], // 0x610
        pub _: [u8; 0x4], // 0x614
        pub _: [u8; 0x4], // 0x618
        pub _: [u8; 0x4], // 0x61c
    }

    #[repr(C)]
    pub struct C_GlobalLight {
        pub pad_0: [u8; 0xac0], // 0x0
        pub _: [u8; 0x30], // 0xac0
    }

    #[repr(C)]
    pub struct C_EnvWindClientside {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0xf8], // 0x600
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
    pub struct C_FlashbangProjectile {
        pub pad_0: [u8; 0x1348], // 0x0
    }

    #[repr(C)]
    pub struct C_SoundEventConeEntity {
        pub pad_0: [u8; 0x6c0], // 0x0
        pub _: [u8; 0x4], // 0x6c0
        pub _: [u8; 0x4], // 0x6c4
        pub _: [u8; 0x4], // 0x6c8
        pub _: [u8; 0x4], // 0x6cc
        pub _: [u8; 0x8], // 0x6d0
    }

    #[repr(C)]
    pub struct CDestructiblePartsComponent {
        pub _: [u8; 0x48], // 0x0
        pub _: [u8; 0x18], // 0x48
        pub _: [u8; 0x8], // 0x60
        pub _: [u8; 0x8], // 0x68
    }

    #[repr(C)]
    pub struct C_WeaponP90 {
        pub pad_0: [u8; 0x1f50], // 0x0
    }

    #[repr(C)]
    pub struct C_EnvWind {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0xf8], // 0x600
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
        pub _: [u8; 0xc], // 0x600
        pub _: [u8; 0xc], // 0x60c
        pub _: [u8; 0x8], // 0x618
    }

    #[repr(C)]
    pub struct CCSPlayerController_ActionTrackingServices {
        pub pad_0: [u8; 0x40], // 0x0
        pub _: [u8; 0x68], // 0x40
        pub _: [u8; 0x80], // 0xa8
        pub _: [u8; 0x4], // 0x128
        pub _: [u8; 0x4], // 0x12c
        pub _: [u8; 0x8], // 0x130
    }

    #[repr(C)]
    pub struct CBodyComponentBaseAnimGraph {
        pub pad_0: [u8; 0x510], // 0x0
        pub _: [u8; 0x6a0], // 0x510
    }

    #[repr(C)]
    pub struct C_CSGO_PreviewModelAlias_csgo_item_previewmodel {
        pub pad_0: [u8; 0x18b8], // 0x0
    }

    #[repr(C)]
    pub struct C_InfoInstructorHintHostageRescueZone {
        pub pad_0: [u8; 0x600], // 0x0
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
    pub struct C_TriggerBuoyancy {
        pub pad_0: [u8; 0x1180], // 0x0
        pub _: [u8; 0x118], // 0x1180
        pub _: [u8; 0x8], // 0x1298
    }

    #[repr(C)]
    pub struct CPlayer_MovementServices_Humanoid {
        pub pad_0: [u8; 0x258], // 0x0
        pub _: [u8; 0x4], // 0x258
        pub _: [u8; 0x4], // 0x25c
        pub _: [u8; 0xc], // 0x260
        pub _: [u8; 0x4], // 0x26c
        pub _: [u8; 0x10], // 0x270
        pub _: [u8; 0x8], // 0x280
    }

    #[repr(C)]
    pub struct CPulseCell_IsRequirementValid__Criteria_t {
        pub _: [u8; 0x1], // 0x0
    }

    #[repr(C)]
    pub struct C_WeaponTec9 {
        pub pad_0: [u8; 0x1f50], // 0x0
    }

    #[repr(C)]
    pub struct C_PhysPropClientside {
        pub pad_0: [u8; 0x13e0], // 0x0
        pub _: [u8; 0x4], // 0x13e0
        pub _: [u8; 0x4], // 0x13e4
        pub _: [u8; 0xc], // 0x13e8
        pub _: [u8; 0xc], // 0x13f4
        pub _: [u8; 0x10], // 0x1400
    }

    #[repr(C)]
    pub struct C_BaseDoor {
        pub pad_0: [u8; 0x1098], // 0x0
        pub _: [u8; 0x8], // 0x1098
    }

    #[repr(C)]
    pub struct CSMatchStats_t {
        pub pad_0: [u8; 0x68], // 0x0
        pub _: [u8; 0x4], // 0x68
        pub _: [u8; 0x4], // 0x6c
        pub _: [u8; 0x4], // 0x70
        pub _: [u8; 0x4], // 0x74
        pub _: [u8; 0x8], // 0x78
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
    pub struct CCSGO_RushIntroTerroristPosition {
        pub pad_0: [u8; 0x1d18], // 0x0
    }

    #[repr(C)]
    pub struct CHostageRescueZone {
        pub pad_0: [u8; 0x1198], // 0x0
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
        pub _: [u8; 0x1c], // 0xf4
        pub _: [u8; 0xf0], // 0x110
        pub _: [u8; 0x8], // 0x200
        pub _: [u8; 0x50], // 0x208
        pub _: [u8; 0x4a], // 0x258
        pub _: [u8; 0x1], // 0x2a2
        pub _: [u8; 0x1], // 0x2a3
        pub _: [u8; 0xc], // 0x2a4
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
    pub struct C_CSWeaponBaseGun {
        pub pad_0: [u8; 0x1f20], // 0x0
        pub _: [u8; 0x4], // 0x1f20
        pub _: [u8; 0x4], // 0x1f24
        pub _: [u8; 0x10], // 0x1f28
        pub _: [u8; 0x4], // 0x1f38
        pub _: [u8; 0x1], // 0x1f3c
        pub _: [u8; 0x3], // 0x1f3d
        pub _: [u8; 0x10], // 0x1f40
    }

    #[repr(C)]
    pub struct C_CSGameRulesProxy {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x8], // 0x600
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
    pub struct C_WeaponP250 {
        pub pad_0: [u8; 0x1f50], // 0x0
    }

    #[repr(C)]
    pub struct CFilterMassGreater {
        pub pad_0: [u8; 0x638], // 0x0
        pub _: [u8; 0x8], // 0x638
    }

    #[repr(C)]
    pub struct C_ShatterGlassShardPhysics {
        pub pad_0: [u8; 0x10a0], // 0x0
        pub _: [u8; 0x80], // 0x10a0
    }

    #[repr(C)]
    pub struct C_EntityDissolve {
        pub pad_0: [u8; 0x10a0], // 0x0
        pub _: [u8; 0x4], // 0x10a0
        pub _: [u8; 0x4], // 0x10a4
        pub _: [u8; 0x4], // 0x10a8
        pub _: [u8; 0x4], // 0x10ac
        pub _: [u8; 0x4], // 0x10b0
        pub _: [u8; 0x4], // 0x10b4
        pub _: [u8; 0x4], // 0x10b8
        pub _: [u8; 0x4], // 0x10bc
        pub _: [u8; 0x4], // 0x10c0
        pub _: [u8; 0xc], // 0x10c4
        pub _: [u8; 0x4], // 0x10d0
        pub _: [u8; 0x1], // 0x10d4
        pub _: [u8; 0xb], // 0x10d5
    }

    #[repr(C)]
    pub struct C_SoundOpvarSetOBBEntity {
        pub pad_0: [u8; 0x620], // 0x0
    }

    #[repr(C)]
    pub struct CCSCustomPlayerCamera {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x4], // 0x600
        pub _: [u8; 0x4], // 0x604
        pub _: [u8; 0x4], // 0x608
        pub _: [u8; 0x4], // 0x60c
        pub _: [u8; 0xc], // 0x610
        pub _: [u8; 0xc], // 0x61c
        pub _: [u8; 0x4], // 0x628
        pub _: [u8; 0x14], // 0x62c
    }

    #[repr(C)]
    pub struct CCSGameModeRules_ArmsRace {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x18], // 0x30
    }

    #[repr(C)]
    pub struct C_FuncMonitor {
        pub pad_0: [u8; 0x1098], // 0x0
        pub _: [u8; 0x8], // 0x1098
        pub _: [u8; 0x4], // 0x10a0
        pub _: [u8; 0x1], // 0x10a4
        pub _: [u8; 0x3], // 0x10a5
        pub _: [u8; 0x8], // 0x10a8
        pub _: [u8; 0x4], // 0x10b0
        pub _: [u8; 0x1], // 0x10b4
        pub _: [u8; 0x45b], // 0x10b5
    }

    #[repr(C)]
    pub struct C_ClientRagdoll {
        pub pad_0: [u8; 0x1268], // 0x0
        pub _: [u8; 0x1], // 0x1268
        pub _: [u8; 0x3], // 0x1269
        pub _: [u8; 0x4], // 0x126c
        pub _: [u8; 0x4], // 0x1270
        pub _: [u8; 0x4], // 0x1274
        pub _: [u8; 0x4], // 0x1278
        pub _: [u8; 0x4], // 0x127c
        pub _: [u8; 0x4], // 0x1280
        pub _: [u8; 0x1], // 0x1284
        pub _: [u8; 0x1], // 0x1285
        pub _: [u8; 0x2], // 0x1286
        pub _: [u8; 0x28], // 0x1288
        pub _: [u8; 0x28], // 0x12b0
        pub _: [u8; 0x28], // 0x12d8
    }

    #[repr(C)]
    pub struct PulseSelectorOutflowList_t {
        pub _: [u8; 0x18], // 0x0
    }

    #[repr(C)]
    pub struct C_BaseModelEntity__BodyGroupRequest_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x2], // 0x14
        pub _: [u8; 0x2], // 0x16
    }

    #[repr(C)]
    pub struct CPulseCell_PlaySequence__CursorState_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CBodyComponentSkeletonInstance {
        pub pad_0: [u8; 0x80], // 0x0
        pub _: [u8; 0x490], // 0x80
    }

    #[repr(C)]
    pub struct C_CS2WeaponModuleBase {
        pub pad_0: [u8; 0x1270], // 0x0
    }

    #[repr(C)]
    pub struct C_CSGO_TeamPreviewCharacterPosition {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x4], // 0x600
        pub _: [u8; 0x4], // 0x604
        pub _: [u8; 0x8], // 0x608
        pub _: [u8; 0x8], // 0x610
        pub _: [u8; 0x8], // 0x618
        pub _: [u8; 0x5b0], // 0x620
        pub _: [u8; 0x5b0], // 0xbd0
        pub _: [u8; 0x5b0], // 0x1180
        pub _: [u8; 0x5e8], // 0x1730
    }

    #[repr(C)]
    pub struct C_SmokeGrenadeProjectile {
        pub pad_0: [u8; 0x1360], // 0x0
        pub _: [u8; 0x4], // 0x1360
        pub _: [u8; 0x4], // 0x1364
        pub _: [u8; 0x4], // 0x1368
        pub _: [u8; 0xc], // 0x136c
        pub _: [u8; 0x10], // 0x1378
        pub _: [u8; 0x18], // 0x1388
        pub _: [u8; 0x4], // 0x13a0
        pub _: [u8; 0x4], // 0x13a4
        pub _: [u8; 0x1], // 0x13a8
        pub _: [u8; 0x1], // 0x13a9
        pub _: [u8; 0x156], // 0x13aa
    }

    #[repr(C)]
    pub struct CScriptComponent {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x8], // 0x30
    }

    #[repr(C)]
    pub struct CCSPlayer_BuyServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x68], // 0x48
    }

    #[repr(C)]
    pub struct C_SkyCameraVolumeTarget {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x8], // 0x600
        pub _: [u8; 0x8], // 0x608
    }

    #[repr(C)]
    pub struct C_PortraitWorldCallbackHandler {
        pub pad_0: [u8; 0x608], // 0x0
    }

    #[repr(C)]
    pub struct C_DynamicProp {
        pub pad_0: [u8; 0x13e0], // 0x0
        pub _: [u8; 0x1], // 0x13e0
        pub _: [u8; 0x1], // 0x13e1
        pub _: [u8; 0x6], // 0x13e2
        pub _: [u8; 0x18], // 0x13e8
        pub _: [u8; 0x18], // 0x1400
        pub _: [u8; 0x18], // 0x1418
        pub _: [u8; 0x18], // 0x1430
        pub _: [u8; 0x18], // 0x1448
        pub _: [u8; 0x8], // 0x1460
        pub _: [u8; 0x4], // 0x1468
        pub _: [u8; 0x1], // 0x146c
        pub _: [u8; 0x1], // 0x146d
        pub _: [u8; 0x1], // 0x146e
        pub _: [u8; 0x1], // 0x146f
        pub _: [u8; 0x1], // 0x1470
        pub _: [u8; 0x1], // 0x1471
        pub _: [u8; 0x2], // 0x1472
        pub _: [u8; 0x4], // 0x1474
        pub _: [u8; 0x4], // 0x1478
        pub _: [u8; 0x4], // 0x147c
        pub _: [u8; 0x4], // 0x1480
        pub _: [u8; 0x4], // 0x1484
        pub _: [u8; 0x4], // 0x1488
        pub _: [u8; 0xc], // 0x148c
        pub _: [u8; 0x18], // 0x1498
    }

    #[repr(C)]
    pub struct C_CSTeam {
        pub pad_0: [u8; 0x6b8], // 0x0
        pub _: [u8; 0x200], // 0x6b8
        pub _: [u8; 0x4], // 0x8b8
        pub _: [u8; 0x4], // 0x8bc
        pub _: [u8; 0x4], // 0x8c0
        pub _: [u8; 0x4], // 0x8c4
        pub _: [u8; 0x4], // 0x8c8
        pub _: [u8; 0x84], // 0x8cc
        pub _: [u8; 0x4], // 0x950
        pub _: [u8; 0x8], // 0x954
        pub _: [u8; 0xc], // 0x95c
    }

    #[repr(C)]
    pub struct C_CS2HudModelWeapon {
        pub pad_0: [u8; 0x1390], // 0x0
    }

    #[repr(C)]
    pub struct C_TextureBasedAnimatable {
        pub pad_0: [u8; 0x1098], // 0x0
        pub _: [u8; 0x4], // 0x1098
        pub _: [u8; 0x4], // 0x109c
        pub _: [u8; 0x8], // 0x10a0
        pub _: [u8; 0x8], // 0x10a8
        pub _: [u8; 0xc], // 0x10b0
        pub _: [u8; 0xc], // 0x10bc
        pub _: [u8; 0x4], // 0x10c8
        pub _: [u8; 0x4], // 0x10cc
    }

    #[repr(C)]
    pub struct C_LightEnvironmentEntity {
        pub pad_0: [u8; 0x10a0], // 0x0
    }

    #[repr(C)]
    pub struct C_TriggerPhysics {
        pub pad_0: [u8; 0x1180], // 0x0
        pub _: [u8; 0x4], // 0x1180
        pub _: [u8; 0x4], // 0x1184
        pub _: [u8; 0x4], // 0x1188
        pub _: [u8; 0x4], // 0x118c
        pub _: [u8; 0x4], // 0x1190
        pub _: [u8; 0x4], // 0x1194
        pub _: [u8; 0x4], // 0x1198
        pub _: [u8; 0x4], // 0x119c
        pub _: [u8; 0xc], // 0x11a0
        pub _: [u8; 0x4], // 0x11ac
        pub _: [u8; 0xc], // 0x11b0
        pub _: [u8; 0xc], // 0x11bc
        pub _: [u8; 0x1], // 0x11c8
        pub _: [u8; 0x7], // 0x11c9
    }

    #[repr(C)]
    pub struct C_PropDoorRotating {
        pub pad_0: [u8; 0x14f0], // 0x0
    }

    #[repr(C)]
    pub struct C_HandleTest {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x4], // 0x600
        pub _: [u8; 0x4], // 0x604
    }

    #[repr(C)]
    pub struct CInfoWorldLayer {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x18], // 0x600
        pub _: [u8; 0x8], // 0x618
        pub _: [u8; 0x8], // 0x620
        pub _: [u8; 0x1], // 0x628
        pub _: [u8; 0x1], // 0x629
        pub _: [u8; 0x2], // 0x62a
        pub _: [u8; 0x4], // 0x62c
        pub _: [u8; 0x8], // 0x630
    }

    #[repr(C)]
    pub struct CBodyComponentBaseModelEntity {
        pub pad_0: [u8; 0x510], // 0x0
    }

    #[repr(C)]
    pub struct C_Multimeter {
        pub pad_0: [u8; 0x1268], // 0x0
        pub _: [u8; 0x8], // 0x1268
    }

    #[repr(C)]
    pub struct C_BaseTrigger {
        pub pad_0: [u8; 0x1098], // 0x0
        pub _: [u8; 0x18], // 0x1098
        pub _: [u8; 0x18], // 0x10b0
        pub _: [u8; 0x18], // 0x10c8
        pub _: [u8; 0x18], // 0x10e0
        pub _: [u8; 0x18], // 0x10f8
        pub _: [u8; 0x18], // 0x1110
        pub _: [u8; 0x18], // 0x1128
        pub _: [u8; 0x18], // 0x1140
        pub _: [u8; 0x18], // 0x1158
        pub _: [u8; 0x8], // 0x1170
        pub _: [u8; 0x4], // 0x1178
        pub _: [u8; 0x4], // 0x117c
    }

    #[repr(C)]
    pub struct FilterDamageType {
        pub pad_0: [u8; 0x638], // 0x0
        pub _: [u8; 0x8], // 0x638
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
        pub pad_0: [u8; 0x638], // 0x0
        pub _: [u8; 0x8], // 0x638
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
        pub _: [u8; 0x50], // 0x288
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
        pub _: [u8; 0xc], // 0x6c
    }

    #[repr(C)]
    pub struct C_ParticleSystem {
        pub pad_0: [u8; 0x1098], // 0x0
        pub _: [u8; 0x200], // 0x1098
        pub _: [u8; 0x1], // 0x1298
        pub _: [u8; 0x3], // 0x1299
        pub _: [u8; 0x4], // 0x129c
        pub _: [u8; 0x4], // 0x12a0
        pub _: [u8; 0x4], // 0x12a4
        pub _: [u8; 0x8], // 0x12a8
        pub _: [u8; 0x4], // 0x12b0
        pub _: [u8; 0x4], // 0x12b4
        pub _: [u8; 0x30], // 0x12b8
        pub _: [u8; 0x4], // 0x12e8
        pub _: [u8; 0x100], // 0x12ec
        pub _: [u8; 0x4], // 0x13ec
        pub _: [u8; 0x8], // 0x13f0
        pub _: [u8; 0x1], // 0x13f8
        pub _: [u8; 0x1], // 0x13f9
        pub _: [u8; 0x1], // 0x13fa
        pub _: [u8; 0x5], // 0x13fb
        pub _: [u8; 0x8], // 0x1400
        pub _: [u8; 0x200], // 0x1408
        pub _: [u8; 0x4], // 0x1608
        pub _: [u8; 0xc], // 0x160c
        pub _: [u8; 0x4], // 0x1618
        pub _: [u8; 0x24], // 0x161c
        pub _: [u8; 0x1], // 0x1640
        pub _: [u8; 0x27], // 0x1641
    }

    #[repr(C)]
    pub struct CPulseCell_Outflow_CycleShuffled {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x18], // 0x48
    }

    #[repr(C)]
    pub struct C_WeaponSCAR20 {
        pub pad_0: [u8; 0x1f50], // 0x0
    }

    #[repr(C)]
    pub struct C_FuncMover {
        pub pad_0: [u8; 0x1098], // 0x0
    }

    #[repr(C)]
    pub struct CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x2], // 0x8
        pub _: [u8; 0xde], // 0xa
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
        pub _: [u8; 0x4], // 0x1a8
        pub _: [u8; 0x4], // 0x1ac
        pub _: [u8; 0x4], // 0x1b0
        pub _: [u8; 0x4], // 0x1b4
        pub _: [u8; 0x4], // 0x1b8
        pub _: [u8; 0x4], // 0x1bc
        pub _: [u8; 0x4], // 0x1c0
        pub _: [u8; 0x4], // 0x1c4
        pub _: [u8; 0x4], // 0x1c8
        pub _: [u8; 0x4], // 0x1cc
        pub _: [u8; 0x4], // 0x1d0
        pub _: [u8; 0x4], // 0x1d4
        pub _: [u8; 0x4], // 0x1d8
        pub _: [u8; 0x4], // 0x1dc
        pub _: [u8; 0x10], // 0x1e0
    }

    #[repr(C)]
    pub struct C_DecoyGrenade {
        pub pad_0: [u8; 0x1fe0], // 0x0
    }

    #[repr(C)]
    pub struct C_WaterBullet {
        pub pad_0: [u8; 0x1268], // 0x0
    }

    #[repr(C)]
    pub struct CCSPlayer_ActionTrackingServices {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x70], // 0x50
        pub _: [u8; 0x70], // 0xc0
        pub _: [u8; 0x70], // 0x130
    }

    #[repr(C)]
    pub struct CBrokenGlassTrap {
        pub pad_0: [u8; 0x1098], // 0x0
    }

    #[repr(C)]
    pub struct C_EnvCubemap {
        pub pad_0: [u8; 0x680], // 0x0
        pub _: [u8; 0x8], // 0x680
        pub _: [u8; 0x4], // 0x688
        pub _: [u8; 0x4], // 0x68c
        pub _: [u8; 0xc], // 0x690
        pub _: [u8; 0xc], // 0x69c
        pub _: [u8; 0x4], // 0x6a8
        pub _: [u8; 0x4], // 0x6ac
        pub _: [u8; 0x4], // 0x6b0
        pub _: [u8; 0x4], // 0x6b4
        pub _: [u8; 0x4], // 0x6b8
        pub _: [u8; 0xc], // 0x6bc
        pub _: [u8; 0x4], // 0x6c8
        pub _: [u8; 0x1], // 0x6cc
        pub _: [u8; 0x1], // 0x6cd
        pub _: [u8; 0x1], // 0x6ce
        pub _: [u8; 0x1], // 0x6cf
        pub _: [u8; 0x10], // 0x6d0
        pub _: [u8; 0x8], // 0x6e0
    }

    #[repr(C)]
    pub struct CCSObserver_MovementServices {
        pub pad_0: [u8; 0x258], // 0x0
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
    pub struct C_BaseCombatCharacter {
        pub pad_0: [u8; 0x1268], // 0x0
        pub _: [u8; 0x18], // 0x1268
        pub _: [u8; 0x1], // 0x1280
        pub _: [u8; 0x3], // 0x1281
        pub _: [u8; 0x4], // 0x1284
        pub _: [u8; 0x4], // 0x1288
        pub _: [u8; 0x64], // 0x128c
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
    pub struct C_PointClientUIDialog {
        pub pad_0: [u8; 0x10c8], // 0x0
        pub _: [u8; 0x4], // 0x10c8
        pub _: [u8; 0x4], // 0x10cc
    }

    #[repr(C)]
    pub struct C_SoundEventMultiPointEntity {
        pub pad_0: [u8; 0x6c0], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_BaseValue {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct C_WeaponHKP2000 {
        pub pad_0: [u8; 0x1f50], // 0x0
    }

    #[repr(C)]
    pub struct C_FootstepControl {
        pub pad_0: [u8; 0x1180], // 0x0
        pub _: [u8; 0x8], // 0x1180
        pub _: [u8; 0x8], // 0x1188
    }

    #[repr(C)]
    pub struct CCitadelSoundOpvarSetOBB {
        pub pad_0: [u8; 0x618], // 0x0
        pub _: [u8; 0x8], // 0x618
        pub _: [u8; 0x8], // 0x620
        pub _: [u8; 0x8], // 0x628
        pub _: [u8; 0xc], // 0x630
        pub _: [u8; 0xc], // 0x63c
        pub _: [u8; 0xc], // 0x648
        pub _: [u8; 0xc], // 0x654
        pub _: [u8; 0x8], // 0x660
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
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x90], // 0xd8
        pub _: [u8; 0x48], // 0x168
        pub _: [u8; 0x48], // 0x1b0
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
    pub struct C_DynamicPropAlias_dynamic_prop {
        pub pad_0: [u8; 0x14b0], // 0x0
    }

    #[repr(C)]
    pub struct CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
        pub pad_0: [u8; 0x698], // 0x0
    }

    #[repr(C)]
    pub struct C_OmniLight {
        pub pad_0: [u8; 0x13a8], // 0x0
        pub _: [u8; 0x4], // 0x13a8
        pub _: [u8; 0x4], // 0x13ac
        pub _: [u8; 0x8], // 0x13b0
    }

    #[repr(C)]
    pub struct C_SceneEntity {
        pub pad_0: [u8; 0x608], // 0x0
        pub _: [u8; 0x1], // 0x608
        pub _: [u8; 0x1], // 0x609
        pub _: [u8; 0x1], // 0x60a
        pub _: [u8; 0x1], // 0x60b
        pub _: [u8; 0x4], // 0x60c
        pub _: [u8; 0x4], // 0x610
        pub _: [u8; 0x2], // 0x614
        pub _: [u8; 0x2], // 0x616
        pub _: [u8; 0x8], // 0x618
        pub _: [u8; 0x18], // 0x620
        pub _: [u8; 0x10], // 0x638
        pub _: [u8; 0x18], // 0x648
        pub _: [u8; 0x8], // 0x660
    }

    #[repr(C)]
    pub struct CPulseCell_Inflow_Yield {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x48], // 0xd8
    }

    #[repr(C)]
    pub struct C_NametagModule {
        pub pad_0: [u8; 0x1270], // 0x0
        pub _: [u8; 0x8], // 0x1270
    }

    #[repr(C)]
    pub struct C_EconEntity {
        pub pad_0: [u8; 0x1278], // 0x0
        pub _: [u8; 0x8], // 0x1278
        pub _: [u8; 0x8], // 0x1280
        pub _: [u8; 0x8], // 0x1288
        pub _: [u8; 0x610], // 0x1290
        pub _: [u8; 0x4], // 0x18a0
        pub _: [u8; 0x4], // 0x18a4
        pub _: [u8; 0x4], // 0x18a8
        pub _: [u8; 0x4], // 0x18ac
        pub _: [u8; 0x4], // 0x18b0
        pub _: [u8; 0x4], // 0x18b4
        pub _: [u8; 0x1], // 0x18b8
        pub _: [u8; 0x7], // 0x18b9
        pub _: [u8; 0x18], // 0x18c0
        pub _: [u8; 0x4], // 0x18d8
        pub _: [u8; 0x4], // 0x18dc
        pub _: [u8; 0x4], // 0x18e0
        pub _: [u8; 0x4], // 0x18e4
        pub _: [u8; 0x10], // 0x18e8
        pub _: [u8; 0x8], // 0x18f8
        pub _: [u8; 0x18], // 0x1900
    }

    #[repr(C)]
    pub struct CPlayer_UseServices {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct C_PointValueRemapper {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x1], // 0x600
        pub _: [u8; 0x1], // 0x601
        pub _: [u8; 0x2], // 0x602
        pub _: [u8; 0x4], // 0x604
        pub _: [u8; 0x4], // 0x608
        pub _: [u8; 0x4], // 0x60c
        pub _: [u8; 0x4], // 0x610
        pub _: [u8; 0x4], // 0x614
        pub _: [u8; 0x4], // 0x618
        pub _: [u8; 0x4], // 0x61c
        pub _: [u8; 0x8], // 0x620
        pub _: [u8; 0x18], // 0x628
        pub _: [u8; 0x4], // 0x640
        pub _: [u8; 0x4], // 0x644
        pub _: [u8; 0x4], // 0x648
        pub _: [u8; 0x4], // 0x64c
        pub _: [u8; 0x4], // 0x650
        pub _: [u8; 0x4], // 0x654
        pub _: [u8; 0x4], // 0x658
        pub _: [u8; 0x4], // 0x65c
        pub _: [u8; 0x1], // 0x660
        pub _: [u8; 0x3], // 0x661
        pub _: [u8; 0x4], // 0x664
        pub _: [u8; 0x4], // 0x668
        pub _: [u8; 0xc], // 0x66c
    }

    #[repr(C)]
    pub struct CGameSceneNodeHandle {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
    }

    #[repr(C)]
    pub struct CPulseCell_Unknown {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x10], // 0x48
    }

    #[repr(C)]
    pub struct C_WeaponMP7 {
        pub pad_0: [u8; 0x1f50], // 0x0
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
    pub struct C_CS2HudModelBase {
        pub pad_0: [u8; 0x1350], // 0x0
    }

    #[repr(C)]
    pub struct C_CSGameRules {
        pub pad_0: [u8; 0x40], // 0x0
        pub _: [u8; 0x1], // 0x40
        pub _: [u8; 0x3], // 0x41
        pub _: [u8; 0x4], // 0x44
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x1], // 0x4c
        pub _: [u8; 0x3], // 0x4d
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
        pub _: [u8; 0x4], // 0x58
        pub _: [u8; 0x4], // 0x5c
        pub _: [u8; 0x1], // 0x60
        pub _: [u8; 0x3], // 0x61
        pub _: [u8; 0x4], // 0x64
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
        pub _: [u8; 0x1], // 0x98
        pub _: [u8; 0x1], // 0x99
        pub _: [u8; 0x1], // 0x9a
        pub _: [u8; 0x1], // 0x9b
        pub _: [u8; 0x4], // 0x9c
        pub _: [u8; 0x4], // 0xa0
        pub _: [u8; 0x1], // 0xa4
        pub _: [u8; 0x1], // 0xa5
        pub _: [u8; 0x2], // 0xa6
        pub _: [u8; 0x4], // 0xa8
        pub _: [u8; 0x4], // 0xac
        pub _: [u8; 0x4], // 0xb0
        pub _: [u8; 0x4], // 0xb4
        pub _: [u8; 0x200], // 0xb8
        pub _: [u8; 0x200], // 0x2b8
        pub _: [u8; 0x200], // 0x4b8
        pub _: [u8; 0x200], // 0x6b8
        pub _: [u8; 0x4], // 0x8b8
        pub _: [u8; 0x4], // 0x8bc
        pub _: [u8; 0x4], // 0x8c0
        pub _: [u8; 0x1], // 0x8c4
        pub _: [u8; 0x1], // 0x8c5
        pub _: [u8; 0x1], // 0x8c6
        pub _: [u8; 0x1], // 0x8c7
        pub _: [u8; 0xc8], // 0x8c8
        pub _: [u8; 0x10], // 0x990
        pub _: [u8; 0x4], // 0x9a0
        pub _: [u8; 0x4], // 0x9a4
        pub _: [u8; 0x4], // 0x9a8
        pub _: [u8; 0x4], // 0x9ac
        pub _: [u8; 0x4], // 0x9b0
        pub _: [u8; 0x1], // 0x9b4
        pub _: [u8; 0x3], // 0x9b5
        pub _: [u8; 0x78], // 0x9b8
        pub _: [u8; 0x78], // 0xa30
        pub _: [u8; 0x78], // 0xaa8
        pub _: [u8; 0x80], // 0xb20
        pub _: [u8; 0x4], // 0xba0
        pub _: [u8; 0x80], // 0xba4
        pub _: [u8; 0xc], // 0xc24
        pub _: [u8; 0xc], // 0xc30
        pub _: [u8; 0x24], // 0xc3c
        pub _: [u8; 0x8], // 0xc60
        pub _: [u8; 0x28], // 0xc68
        pub _: [u8; 0x28], // 0xc90
        pub _: [u8; 0x4], // 0xcb8
        pub _: [u8; 0x4], // 0xcbc
        pub _: [u8; 0xc0], // 0xcc0
        pub _: [u8; 0x4], // 0xd80
        pub _: [u8; 0x1], // 0xd84
        pub _: [u8; 0x1b], // 0xd85
        pub _: [u8; 0x8], // 0xda0
        pub _: [u8; 0x158], // 0xda8
        pub _: [u8; 0x4], // 0xf00
        pub _: [u8; 0x4], // 0xf04
        pub _: [u8; 0x4], // 0xf08
        pub _: [u8; 0x4], // 0xf0c
        pub _: [u8; 0x4], // 0xf10
        pub _: [u8; 0x4], // 0xf14
        pub _: [u8; 0x4], // 0xf18
        pub _: [u8; 0x4], // 0xf1c
        pub _: [u8; 0x8], // 0xf20
        pub _: [u8; 0x4], // 0xf28
        pub _: [u8; 0x4], // 0xf2c
        pub _: [u8; 0x4], // 0xf30
        pub _: [u8; 0x4], // 0xf34
        pub _: [u8; 0x8], // 0xf38
        pub _: [u8; 0x4], // 0xf40
        pub _: [u8; 0x4], // 0xf44
        pub _: [u8; 0x4], // 0xf48
        pub _: [u8; 0x4], // 0xf4c
        pub _: [u8; 0x4], // 0xf50
        pub _: [u8; 0x400c], // 0xf54
        pub _: [u8; 0x8], // 0x4f60
    }

    #[repr(C)]
    pub struct CGrenadeTracer {
        pub pad_0: [u8; 0x10b0], // 0x0
        pub _: [u8; 0x4], // 0x10b0
        pub _: [u8; 0x47c], // 0x10b4
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
    pub struct C_BaseCSGrenadeProjectile {
        pub pad_0: [u8; 0x12b0], // 0x0
        pub _: [u8; 0xc], // 0x12b0
        pub _: [u8; 0xc], // 0x12bc
        pub _: [u8; 0x8], // 0x12c8
        pub _: [u8; 0x8], // 0x12d0
        pub _: [u8; 0x4], // 0x12d8
        pub _: [u8; 0xc], // 0x12dc
        pub _: [u8; 0x4], // 0x12e8
        pub _: [u8; 0xc], // 0x12ec
        pub _: [u8; 0x4], // 0x12f8
        pub _: [u8; 0x1], // 0x12fc
        pub _: [u8; 0x3], // 0x12fd
        pub _: [u8; 0x8], // 0x1300
        pub _: [u8; 0x8], // 0x1308
        pub _: [u8; 0x18], // 0x1310
        pub _: [u8; 0x18], // 0x1328
        pub _: [u8; 0x8], // 0x1340
    }

    #[repr(C)]
    pub struct CCSGO_RushIntroCounterTerroristPosition {
        pub pad_0: [u8; 0x1d18], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_ReturnValues {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct C_GradientFog {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x8], // 0x600
        pub _: [u8; 0x4], // 0x608
        pub _: [u8; 0x4], // 0x60c
        pub _: [u8; 0x4], // 0x610
        pub _: [u8; 0x4], // 0x614
        pub _: [u8; 0x4], // 0x618
        pub _: [u8; 0x4], // 0x61c
        pub _: [u8; 0x4], // 0x620
        pub _: [u8; 0x4], // 0x624
        pub _: [u8; 0x4], // 0x628
        pub _: [u8; 0x4], // 0x62c
        pub _: [u8; 0x4], // 0x630
        pub _: [u8; 0x4], // 0x634
        pub _: [u8; 0x1], // 0x638
        pub _: [u8; 0x1], // 0x639
        pub _: [u8; 0x5e], // 0x63a
    }

    #[repr(C)]
    pub struct CCSPlayerController_InGameMoneyServices {
        pub pad_0: [u8; 0x40], // 0x0
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x4], // 0x44
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
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
    pub struct C_HEGrenadeProjectile {
        pub pad_0: [u8; 0x1348], // 0x0
    }

    #[repr(C)]
    pub struct CFilterModel {
        pub pad_0: [u8; 0x638], // 0x0
        pub _: [u8; 0x8], // 0x638
    }

    #[repr(C)]
    pub struct C_SoundAreaEntityOrientedBox {
        pub pad_0: [u8; 0x628], // 0x0
        pub _: [u8; 0xc], // 0x628
        pub _: [u8; 0xc], // 0x634
    }

    #[repr(C)]
    pub struct C_SoundOpvarSetPointEntity {
        pub pad_0: [u8; 0x620], // 0x0
    }

    #[repr(C)]
    pub struct CPulseGameBlackboard {
        pub pad_0: [u8; 0x608], // 0x0
        pub _: [u8; 0x8], // 0x608
        pub _: [u8; 0x8], // 0x610
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
    pub struct C_CSWeaponBaseShotgun {
        pub pad_0: [u8; 0x1f20], // 0x0
    }

    #[repr(C)]
    pub struct C_RagdollPropAttached {
        pub pad_0: [u8; 0x12f0], // 0x0
        pub _: [u8; 0x4], // 0x12f0
        pub _: [u8; 0x4], // 0x12f4
        pub _: [u8; 0xc], // 0x12f8
        pub _: [u8; 0xc], // 0x1304
        pub _: [u8; 0xc], // 0x1310
        pub _: [u8; 0x4], // 0x131c
        pub _: [u8; 0x8], // 0x1320
    }

    #[repr(C)]
    pub struct C_ModelPointEntity {
        pub pad_0: [u8; 0x1098], // 0x0
    }

    #[repr(C)]
    pub struct C_CSGO_PreviewPlayer {
        pub pad_0: [u8; 0x3720], // 0x0
        pub _: [u8; 0x8], // 0x3720
        pub _: [u8; 0xa8], // 0x3728
    }

    #[repr(C)]
    pub struct C_RectLight {
        pub pad_0: [u8; 0x13a8], // 0x0
        pub _: [u8; 0x8], // 0x13a8
    }

    #[repr(C)]
    pub struct CCSRadarElement {
        pub pad_0: [u8; 0x618], // 0x0
        pub _: [u8; 0x4], // 0x618
        pub _: [u8; 0x4], // 0x61c
        pub _: [u8; 0x8], // 0x620
    }

    #[repr(C)]
    pub struct CPathSimple {
        pub pad_0: [u8; 0x610], // 0x0
        pub _: [u8; 0xf0], // 0x610
        pub _: [u8; 0x8], // 0x700
        pub _: [u8; 0x8], // 0x708
    }

    #[repr(C)]
    pub struct C_FuncTrackTrain {
        pub pad_0: [u8; 0x1098], // 0x0
        pub _: [u8; 0x4], // 0x1098
        pub _: [u8; 0x4], // 0x109c
        pub _: [u8; 0x8], // 0x10a0
    }

    #[repr(C)]
    pub struct C_EconWearable {
        pub pad_0: [u8; 0x1918], // 0x0
        pub _: [u8; 0x4], // 0x1918
        pub _: [u8; 0x4], // 0x191c
    }

    #[repr(C)]
    pub struct C_EnvDecal {
        pub pad_0: [u8; 0x1098], // 0x0
        pub _: [u8; 0x8], // 0x1098
        pub _: [u8; 0x4], // 0x10a0
        pub _: [u8; 0x4], // 0x10a4
        pub _: [u8; 0x4], // 0x10a8
        pub _: [u8; 0x4], // 0x10ac
        pub _: [u8; 0x1], // 0x10b0
        pub _: [u8; 0x1], // 0x10b1
        pub _: [u8; 0x2], // 0x10b2
        pub _: [u8; 0x1c], // 0x10b4
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
    pub struct C_WeaponM4A1 {
        pub pad_0: [u8; 0x1f50], // 0x0
    }

    #[repr(C)]
    pub struct C_Item {
        pub pad_0: [u8; 0x1918], // 0x0
        pub _: [u8; 0x100], // 0x1918
    }

    #[repr(C)]
    pub struct C_CSPetPlacement {
        pub pad_0: [u8; 0x600], // 0x0
    }

    #[repr(C)]
    pub struct C_Beam {
        pub pad_0: [u8; 0x1098], // 0x0
        pub _: [u8; 0x4], // 0x1098
        pub _: [u8; 0x4], // 0x109c
        pub _: [u8; 0x4], // 0x10a0
        pub _: [u8; 0x4], // 0x10a4
        pub _: [u8; 0x4], // 0x10a8
        pub _: [u8; 0x24], // 0x10ac
        pub _: [u8; 0x8], // 0x10d0
        pub _: [u8; 0x8], // 0x10d8
        pub _: [u8; 0x4], // 0x10e0
        pub _: [u8; 0x4], // 0x10e4
        pub _: [u8; 0x28], // 0x10e8
        pub _: [u8; 0xc], // 0x1110
        pub _: [u8; 0x4], // 0x111c
        pub _: [u8; 0x4], // 0x1120
        pub _: [u8; 0x4], // 0x1124
        pub _: [u8; 0x4], // 0x1128
        pub _: [u8; 0x4], // 0x112c
        pub _: [u8; 0x4], // 0x1130
        pub _: [u8; 0x4], // 0x1134
        pub _: [u8; 0x4], // 0x1138
        pub _: [u8; 0x4], // 0x113c
        pub _: [u8; 0xc], // 0x1140
        pub _: [u8; 0x4], // 0x114c
    }

    #[repr(C)]
    pub struct C_EnvLightProbeVolume {
        pub pad_0: [u8; 0x698], // 0x0
        pub _: [u8; 0x8], // 0x698
        pub _: [u8; 0x8], // 0x6a0
        pub _: [u8; 0x8], // 0x6a8
        pub _: [u8; 0x8], // 0x6b0
        pub _: [u8; 0x8], // 0x6b8
        pub _: [u8; 0x8], // 0x6c0
        pub _: [u8; 0x8], // 0x6c8
        pub _: [u8; 0xc], // 0x6d0
        pub _: [u8; 0xc], // 0x6dc
        pub _: [u8; 0x4], // 0x6e8
        pub _: [u8; 0x4], // 0x6ec
        pub _: [u8; 0x4], // 0x6f0
        pub _: [u8; 0x4], // 0x6f4
        pub _: [u8; 0x4], // 0x6f8
        pub _: [u8; 0x4], // 0x6fc
        pub _: [u8; 0x4], // 0x700
        pub _: [u8; 0x4], // 0x704
        pub _: [u8; 0x4], // 0x708
        pub _: [u8; 0xd], // 0x70c
        pub _: [u8; 0x7], // 0x719
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
    pub struct C_FuncConveyor {
        pub pad_0: [u8; 0x10a0], // 0x0
        pub _: [u8; 0xc], // 0x10a0
        pub _: [u8; 0x4], // 0x10ac
        pub _: [u8; 0x4], // 0x10b0
        pub _: [u8; 0x4], // 0x10b4
        pub _: [u8; 0x4], // 0x10b8
        pub _: [u8; 0x4], // 0x10bc
        pub _: [u8; 0x18], // 0x10c0
        pub _: [u8; 0x4], // 0x10d8
        pub _: [u8; 0x4], // 0x10dc
    }

    #[repr(C)]
    pub struct CCSPlayer_WeaponServices {
        pub pad_0: [u8; 0xd0], // 0x0
        pub _: [u8; 0x4], // 0xd0
        pub _: [u8; 0x29c], // 0xd4
        pub _: [u8; 0x1250], // 0x370
        pub _: [u8; 0x18], // 0x15c0
        pub _: [u8; 0x30], // 0x15d8
    }

    #[repr(C)]
    pub struct C_PhysMagnet {
        pub pad_0: [u8; 0x1268], // 0x0
        pub _: [u8; 0x18], // 0x1268
        pub _: [u8; 0x18], // 0x1280
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
        pub _: [u8; 0x4], // 0x1288
        pub _: [u8; 0x4], // 0x128c
        pub _: [u8; 0x8], // 0x1290
        pub _: [u8; 0x18], // 0x1298
        pub _: [u8; 0x4], // 0x12b0
        pub _: [u8; 0x4], // 0x12b4
        pub _: [u8; 0x4], // 0x12b8
        pub _: [u8; 0x1], // 0x12bc
        pub _: [u8; 0x3], // 0x12bd
        pub _: [u8; 0x4], // 0x12c0
        pub _: [u8; 0x4], // 0x12c4
        pub _: [u8; 0x4], // 0x12c8
        pub _: [u8; 0x4], // 0x12cc
        pub _: [u8; 0x1], // 0x12d0
        pub _: [u8; 0x3], // 0x12d1
        pub _: [u8; 0x4], // 0x12d4
        pub _: [u8; 0x4], // 0x12d8
        pub _: [u8; 0x4], // 0x12dc
        pub _: [u8; 0x8], // 0x12e0
        pub _: [u8; 0x610], // 0x12e8
        pub _: [u8; 0x4], // 0x18f8
        pub _: [u8; 0x4], // 0x18fc
        pub _: [u8; 0x4], // 0x1900
        pub _: [u8; 0x4], // 0x1904
        pub _: [u8; 0x8], // 0x1908
        pub _: [u8; 0x8], // 0x1910
        pub _: [u8; 0xc], // 0x1918
        pub _: [u8; 0xc], // 0x1924
        pub _: [u8; 0x28], // 0x1930
    }

    #[repr(C)]
    pub struct CCSCustomHudLayoutState {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x18], // 0x38
        pub _: [u8; 0xb8], // 0x50
    }

    #[repr(C)]
    pub struct CCSGO_WingmanIntroCharacterPosition {
        pub pad_0: [u8; 0x1d18], // 0x0
    }

    #[repr(C)]
    pub struct CFilterName {
        pub pad_0: [u8; 0x638], // 0x0
        pub _: [u8; 0x8], // 0x638
    }

    #[repr(C)]
    pub struct C_RagdollProp {
        pub pad_0: [u8; 0x1268], // 0x0
        pub _: [u8; 0x18], // 0x1268
        pub _: [u8; 0x18], // 0x1280
        pub _: [u8; 0x18], // 0x1298
        pub _: [u8; 0x4], // 0x12b0
        pub _: [u8; 0x4], // 0x12b4
        pub _: [u8; 0x4], // 0x12b8
        pub _: [u8; 0x4], // 0x12bc
        pub _: [u8; 0x18], // 0x12c0
        pub _: [u8; 0x18], // 0x12d8
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
    pub struct C_MapPreviewParticleSystem {
        pub pad_0: [u8; 0x1668], // 0x0
    }

    #[repr(C)]
    pub struct CBaseAnimGraph {
        pub pad_0: [u8; 0x1098], // 0x0
        pub _: [u8; 0x98], // 0x1098
        pub _: [u8; 0x8], // 0x1130
        pub _: [u8; 0x2], // 0x1138
        pub _: [u8; 0x6], // 0x113a
        pub _: [u8; 0x20], // 0x1140
        pub _: [u8; 0x20], // 0x1160
        pub _: [u8; 0x1], // 0x1180
        pub _: [u8; 0x3], // 0x1181
        pub _: [u8; 0xc], // 0x1184
        pub _: [u8; 0x8], // 0x1190
        pub _: [u8; 0x8], // 0x1198
        pub _: [u8; 0x10], // 0x11a0
        pub _: [u8; 0x8], // 0x11b0
        pub _: [u8; 0x48], // 0x11b8
        pub _: [u8; 0x1], // 0x1200
        pub _: [u8; 0x1], // 0x1201
        pub _: [u8; 0xe], // 0x1202
        pub _: [u8; 0x58], // 0x1210
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
    pub struct C_LightEntity {
        pub pad_0: [u8; 0x1098], // 0x0
        pub _: [u8; 0x8], // 0x1098
    }

    #[repr(C)]
    pub struct C_WeaponM249 {
        pub pad_0: [u8; 0x1f50], // 0x0
    }

    #[repr(C)]
    pub struct C_LocalTempEntity {
        pub pad_0: [u8; 0x1268], // 0x0
        pub _: [u8; 0x4], // 0x1268
        pub _: [u8; 0x4], // 0x126c
        pub _: [u8; 0x4], // 0x1270
        pub _: [u8; 0x4], // 0x1274
        pub _: [u8; 0x4], // 0x1278
        pub _: [u8; 0x4], // 0x127c
        pub _: [u8; 0x4], // 0x1280
        pub _: [u8; 0x4], // 0x1284
        pub _: [u8; 0x4], // 0x1288
        pub _: [u8; 0xc], // 0x128c
        pub _: [u8; 0xc], // 0x1298
        pub _: [u8; 0x4], // 0x12a4
        pub _: [u8; 0xc], // 0x12a8
        pub _: [u8; 0x4], // 0x12b4
        pub _: [u8; 0x4], // 0x12b8
        pub _: [u8; 0x4], // 0x12bc
        pub _: [u8; 0x8], // 0x12c0
        pub _: [u8; 0x8], // 0x12c8
        pub _: [u8; 0x8], // 0x12d0
        pub _: [u8; 0x4], // 0x12d8
        pub _: [u8; 0x4], // 0x12dc
        pub _: [u8; 0xc], // 0x12e0
        pub _: [u8; 0xc], // 0x12ec
        pub _: [u8; 0xc], // 0x12f8
        pub _: [u8; 0xc], // 0x1304
    }

    #[repr(C)]
    pub struct C_WeaponTaser {
        pub pad_0: [u8; 0x1f50], // 0x0
        pub _: [u8; 0x4], // 0x1f50
        pub _: [u8; 0xc], // 0x1f54
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
        pub _: [u8; 0x18], // 0x48
        pub _: [u8; 0x4], // 0x60
        pub _: [u8; 0x4], // 0x64
        pub _: [u8; 0x40], // 0x68
    }

    #[repr(C)]
    pub struct C_WeaponNegev {
        pub pad_0: [u8; 0x1f50], // 0x0
    }

    #[repr(C)]
    pub struct C_WeaponFiveSeven {
        pub pad_0: [u8; 0x1f50], // 0x0
    }

    #[repr(C)]
    pub struct C_WeaponSawedoff {
        pub pad_0: [u8; 0x1f20], // 0x0
    }

    #[repr(C)]
    pub struct C_TriggerVolume {
        pub pad_0: [u8; 0x1098], // 0x0
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
    pub struct C_WeaponMP9 {
        pub pad_0: [u8; 0x1f50], // 0x0
    }

    #[repr(C)]
    pub struct C_DynamicPropAlias_prop_dynamic_override {
        pub pad_0: [u8; 0x14b0], // 0x0
    }

    #[repr(C)]
    pub struct CEnvSoundscapeTriggerable {
        pub pad_0: [u8; 0x690], // 0x0
    }

    #[repr(C)]
    pub struct C_PlayerPing {
        pub pad_0: [u8; 0x630], // 0x0
        pub _: [u8; 0x4], // 0x630
        pub _: [u8; 0x4], // 0x634
        pub _: [u8; 0x4], // 0x638
        pub _: [u8; 0x1], // 0x63c
        pub _: [u8; 0x13], // 0x63d
    }

    #[repr(C)]
    pub struct C_AK47 {
        pub pad_0: [u8; 0x1f50], // 0x0
    }

    #[repr(C)]
    pub struct C_CSGO_MapPreviewCameraPathNode {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x8], // 0x600
        pub _: [u8; 0x4], // 0x608
        pub _: [u8; 0xc], // 0x60c
        pub _: [u8; 0xc], // 0x618
        pub _: [u8; 0x4], // 0x624
        pub _: [u8; 0x4], // 0x628
        pub _: [u8; 0x4], // 0x62c
        pub _: [u8; 0x4], // 0x630
        pub _: [u8; 0xc], // 0x634
        pub _: [u8; 0x10], // 0x640
    }

    #[repr(C)]
    pub struct C_CSPlayerResource {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0xc], // 0x600
        pub _: [u8; 0xc], // 0x60c
        pub _: [u8; 0x30], // 0x618
        pub _: [u8; 0xc], // 0x648
        pub _: [u8; 0xc], // 0x654
        pub _: [u8; 0x10], // 0x660
        pub _: [u8; 0x10], // 0x670
        pub _: [u8; 0x10], // 0x680
        pub _: [u8; 0x1], // 0x690
        pub _: [u8; 0x7], // 0x691
    }

    #[repr(C)]
    pub struct CSkyboxReference {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x4], // 0x600
        pub _: [u8; 0x4], // 0x604
    }

    #[repr(C)]
    pub struct C_IncendiaryGrenade {
        pub pad_0: [u8; 0x1fe0], // 0x0
    }

    #[repr(C)]
    pub struct CFilterClass {
        pub pad_0: [u8; 0x638], // 0x0
        pub _: [u8; 0x8], // 0x638
    }

    #[repr(C)]
    pub struct C_PointCameraVFOV {
        pub pad_0: [u8; 0x660], // 0x0
        pub _: [u8; 0x8], // 0x660
    }

    #[repr(C)]
    pub struct C_PointCamera {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x4], // 0x600
        pub _: [u8; 0x4], // 0x604
        pub _: [u8; 0x4], // 0x608
        pub _: [u8; 0x4], // 0x60c
        pub _: [u8; 0x4], // 0x610
        pub _: [u8; 0x4], // 0x614
        pub _: [u8; 0x4], // 0x618
        pub _: [u8; 0x1], // 0x61c
        pub _: [u8; 0x3], // 0x61d
        pub _: [u8; 0x4], // 0x620
        pub _: [u8; 0x4], // 0x624
        pub _: [u8; 0x4], // 0x628
        pub _: [u8; 0x4], // 0x62c
        pub _: [u8; 0x4], // 0x630
        pub _: [u8; 0x1], // 0x634
        pub _: [u8; 0x1], // 0x635
        pub _: [u8; 0x2], // 0x636
        pub _: [u8; 0x4], // 0x638
        pub _: [u8; 0x4], // 0x63c
        pub _: [u8; 0x4], // 0x640
        pub _: [u8; 0x4], // 0x644
        pub _: [u8; 0x4], // 0x648
        pub _: [u8; 0x4], // 0x64c
        pub _: [u8; 0x4], // 0x650
        pub _: [u8; 0x4], // 0x654
        pub _: [u8; 0x8], // 0x658
    }

    #[repr(C)]
    pub struct CPathWithDynamicNodes {
        pub pad_0: [u8; 0x710], // 0x0
        pub _: [u8; 0x20], // 0x710
        pub _: [u8; 0x20], // 0x730
        pub _: [u8; 0x4], // 0x750
        pub _: [u8; 0xc], // 0x754
    }

    #[repr(C)]
    pub struct CBaseFilter {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x8], // 0x600
        pub _: [u8; 0x18], // 0x608
        pub _: [u8; 0x18], // 0x620
    }

    #[repr(C)]
    pub struct WeaponPurchaseTracker_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x68], // 0x8
    }

    #[repr(C)]
    pub struct CMapInfo {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x4], // 0x600
        pub _: [u8; 0x4], // 0x604
        pub _: [u8; 0x4], // 0x608
        pub _: [u8; 0x1], // 0x60c
        pub _: [u8; 0x3], // 0x60d
        pub _: [u8; 0x4], // 0x610
        pub _: [u8; 0x4], // 0x614
        pub _: [u8; 0x1], // 0x618
        pub _: [u8; 0x1], // 0x619
        pub _: [u8; 0x2], // 0x61a
        pub _: [u8; 0x4], // 0x61c
        pub _: [u8; 0x4], // 0x620
        pub _: [u8; 0x4], // 0x624
        pub _: [u8; 0x4], // 0x628
        pub _: [u8; 0x4], // 0x62c
    }

    #[repr(C)]
    pub struct C_CSGO_EndOfMatchCamera {
        pub pad_0: [u8; 0x690], // 0x0
    }

    #[repr(C)]
    pub struct C_BaseGrenade {
        pub pad_0: [u8; 0x1268], // 0x0
        pub _: [u8; 0x1], // 0x1268
        pub _: [u8; 0x1], // 0x1269
        pub _: [u8; 0x2], // 0x126a
        pub _: [u8; 0x4], // 0x126c
        pub _: [u8; 0x4], // 0x1270
        pub _: [u8; 0x4], // 0x1274
        pub _: [u8; 0x8], // 0x1278
        pub _: [u8; 0x8], // 0x1280
        pub _: [u8; 0x8], // 0x1288
        pub _: [u8; 0x18], // 0x1290
        pub _: [u8; 0x4], // 0x12a8
        pub _: [u8; 0x4], // 0x12ac
    }

    #[repr(C)]
    pub struct C_PlayerSprayDecal {
        pub pad_0: [u8; 0x1098], // 0x0
        pub _: [u8; 0x4], // 0x1098
        pub _: [u8; 0x4], // 0x109c
        pub _: [u8; 0x4], // 0x10a0
        pub _: [u8; 0x4], // 0x10a4
        pub _: [u8; 0xc], // 0x10a8
        pub _: [u8; 0xc], // 0x10b4
        pub _: [u8; 0xc], // 0x10c0
        pub _: [u8; 0xc], // 0x10cc
        pub _: [u8; 0x4], // 0x10d8
        pub _: [u8; 0x4], // 0x10dc
        pub _: [u8; 0x4], // 0x10e0
        pub _: [u8; 0x4], // 0x10e4
        pub _: [u8; 0x4], // 0x10e8
        pub _: [u8; 0x1], // 0x10ec
        pub _: [u8; 0x8b], // 0x10ed
        pub _: [u8; 0x30], // 0x1178
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
    pub struct C_CS2HudModelArms {
        pub pad_0: [u8; 0x1460], // 0x0
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
    pub struct C_LightSpotEntity {
        pub pad_0: [u8; 0x10a0], // 0x0
    }

    #[repr(C)]
    pub struct CCSGameModeRules_Deathmatch {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x8], // 0x38
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
    pub struct C_Sprite {
        pub pad_0: [u8; 0x1098], // 0x0
        pub _: [u8; 0x8], // 0x1098
        pub _: [u8; 0x4], // 0x10a0
        pub _: [u8; 0x4], // 0x10a4
        pub _: [u8; 0x4], // 0x10a8
        pub _: [u8; 0x4], // 0x10ac
        pub _: [u8; 0x10], // 0x10b0
        pub _: [u8; 0x4], // 0x10c0
        pub _: [u8; 0x4], // 0x10c4
        pub _: [u8; 0x4], // 0x10c8
        pub _: [u8; 0x4], // 0x10cc
        pub _: [u8; 0x4], // 0x10d0
        pub _: [u8; 0x4], // 0x10d4
        pub _: [u8; 0x4], // 0x10d8
        pub _: [u8; 0x4], // 0x10dc
        pub _: [u8; 0x4], // 0x10e0
        pub _: [u8; 0x4], // 0x10e4
        pub _: [u8; 0x4], // 0x10e8
        pub _: [u8; 0x4], // 0x10ec
        pub _: [u8; 0x4], // 0x10f0
        pub _: [u8; 0x4], // 0x10f4
        pub _: [u8; 0x10], // 0x10f8
        pub _: [u8; 0x4], // 0x1108
        pub _: [u8; 0x4], // 0x110c
        pub _: [u8; 0x8], // 0x1110
    }

    #[repr(C)]
    pub struct C_CsmFovOverride {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x8], // 0x600
        pub _: [u8; 0x8], // 0x608
    }

    #[repr(C)]
    pub struct C_WeaponGlock {
        pub pad_0: [u8; 0x1f50], // 0x0
    }

    #[repr(C)]
    pub struct C_PhysicsProp {
        pub pad_0: [u8; 0x13e0], // 0x0
        pub _: [u8; 0x10], // 0x13e0
    }

    #[repr(C)]
    pub struct CFilterTeam {
        pub pad_0: [u8; 0x638], // 0x0
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
    pub struct C_SmokeGrenade {
        pub pad_0: [u8; 0x1fe0], // 0x0
    }

    #[repr(C)]
    pub struct C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel {
        pub pad_0: [u8; 0x37d0], // 0x0
    }

    #[repr(C)]
    pub struct CCSGO_RushIntroCharacterPosition {
        pub pad_0: [u8; 0x1d18], // 0x0
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
        pub pad_0: [u8; 0x10d0], // 0x0
        pub _: [u8; 0x1], // 0x10d0
        pub _: [u8; 0x1], // 0x10d1
        pub _: [u8; 0xe], // 0x10d2
        pub _: [u8; 0x190], // 0x10e0
        pub _: [u8; 0x28], // 0x1270
        pub _: [u8; 0x1], // 0x1298
        pub _: [u8; 0x1], // 0x1299
        pub _: [u8; 0x2], // 0x129a
        pub _: [u8; 0x4], // 0x129c
        pub _: [u8; 0x4], // 0x12a0
        pub _: [u8; 0x4], // 0x12a4
        pub _: [u8; 0x4], // 0x12a8
        pub _: [u8; 0x4], // 0x12ac
        pub _: [u8; 0x4], // 0x12b0
        pub _: [u8; 0x4], // 0x12b4
        pub _: [u8; 0x4], // 0x12b8
        pub _: [u8; 0x4], // 0x12bc
        pub _: [u8; 0x4], // 0x12c0
        pub _: [u8; 0x4], // 0x12c4
        pub _: [u8; 0x18], // 0x12c8
        pub _: [u8; 0x1], // 0x12e0
        pub _: [u8; 0x1], // 0x12e1
        pub _: [u8; 0x1], // 0x12e2
        pub _: [u8; 0x1], // 0x12e3
        pub _: [u8; 0x1], // 0x12e4
        pub _: [u8; 0x1], // 0x12e5
        pub _: [u8; 0x1], // 0x12e6
        pub _: [u8; 0x1], // 0x12e7
        pub _: [u8; 0x4], // 0x12e8
        pub _: [u8; 0x4], // 0x12ec
        pub _: [u8; 0x10], // 0x12f0
    }

    #[repr(C)]
    pub struct C_EntityFlame {
        pub pad_0: [u8; 0x600], // 0x0
        pub _: [u8; 0x28], // 0x600
        pub _: [u8; 0x4], // 0x628
        pub _: [u8; 0x1c], // 0x62c
    }

    #[repr(C)]
    pub struct CBaseAnimGraphAlias_baseanimating {
        pub pad_0: [u8; 0x1268], // 0x0
    }

    #[repr(C)]
    pub struct CBasePlayerController {
        pub pad_0: [u8; 0x608], // 0x0
        pub _: [u8; 0xa8], // 0x608
        pub _: [u8; 0x8], // 0x6b0
        pub _: [u8; 0x4], // 0x6b8
        pub _: [u8; 0x4], // 0x6bc
        pub _: [u8; 0x4], // 0x6c0
        pub _: [u8; 0x8], // 0x6c4
        pub _: [u8; 0x4], // 0x6cc
        pub _: [u8; 0x8], // 0x6d0
        pub _: [u8; 0x18], // 0x6d8
        pub _: [u8; 0x4], // 0x6f0
        pub _: [u8; 0x4], // 0x6f4
        pub _: [u8; 0x4], // 0x6f8
        pub _: [u8; 0x8c], // 0x6fc
        pub _: [u8; 0x8], // 0x788
        pub _: [u8; 0x1], // 0x790
        pub _: [u8; 0x3], // 0x791
        pub _: [u8; 0x6c], // 0x794
    }

    #[repr(C)]
    pub struct C_CSGO_EndOfMatchLineupEndpoint {
        pub pad_0: [u8; 0x600], // 0x0
    }

    #[repr(C)]
    pub struct GeneratedTextureHandle_t {
        pub _: [u8; 0x60], // 0x0
    }

    #[repr(C)]
    pub struct CompositeMaterialInputContainer_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0xe0], // 0x8
        pub _: [u8; 0x8], // 0xe8
        pub _: [u8; 0x8], // 0xf0
        pub _: [u8; 0x18], // 0xf8
        pub _: [u8; 0x8], // 0x110
        pub _: [u8; 0x20], // 0x118
    }

    #[repr(C)]
    pub struct CompositeMaterialAssemblyProcedure_t {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x18], // 0x18
        pub _: [u8; 0x18], // 0x30
        pub _: [u8; 0x18], // 0x48
    }

    #[repr(C)]
    pub struct CompositeMaterialInputLooseVariable_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x8], // 0x30
        pub _: [u8; 0x8], // 0x38
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x4], // 0x44
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
        pub _: [u8; 0x4], // 0x58
        pub _: [u8; 0x4], // 0x5c
        pub _: [u8; 0x4], // 0x60
        pub _: [u8; 0x4], // 0x64
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
        pub _: [u8; 0x8], // 0x90
        pub _: [u8; 0xe0], // 0x98
        pub _: [u8; 0x8], // 0x178
        pub _: [u8; 0xe0], // 0x180
        pub _: [u8; 0x8], // 0x260
        pub _: [u8; 0x8], // 0x268
        pub _: [u8; 0x8], // 0x270
        pub _: [u8; 0x8], // 0x278
        pub _: [u8; 0x8], // 0x280
    }

    #[repr(C)]
    pub struct screenshake_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0xc], // 0x14
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0xc], // 0x28
        pub _: [u8; 0x4], // 0x34
    }

    #[repr(C)]
    pub struct CCS2UIPawnGraphController {
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
    }

    #[repr(C)]
    pub struct inv_image_light_barn_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0xc], // 0xc
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
    }

    #[repr(C)]
    pub struct inv_image_map_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct inv_image_light_fill_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0xc], // 0xc
        pub _: [u8; 0x4], // 0x18
    }

    #[repr(C)]
    pub struct CInterpolatedValue {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
    }

    #[repr(C)]
    pub struct inv_image_item_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0xc], // 0xc
        pub _: [u8; 0x8], // 0x18
    }

    #[repr(C)]
    pub struct TimedEvent {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct CFlashlightEffect {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x10], // 0x10
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0xc], // 0x24
        pub _: [u8; 0x10], // 0x30
        pub _: [u8; 0xc], // 0x40
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
        pub _: [u8; 0x4], // 0x58
        pub _: [u8; 0x4], // 0x5c
        pub _: [u8; 0x8], // 0x60
        pub _: [u8; 0x8], // 0x68
        pub _: [u8; 0x270], // 0x70
    }

    #[repr(C)]
    pub struct inv_image_camera_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0xc], // 0x1c
        pub _: [u8; 0xc], // 0x28
        pub _: [u8; 0x4], // 0x34
    }

    #[repr(C)]
    pub struct CInventoryImageData {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0xf0], // 0x10
    }

    #[repr(C)]
    pub struct inv_image_clearcolor_t {
        pub _: [u8; 0xc], // 0x0
    }

    #[repr(C)]
    pub struct C_CommandContext {
        pub _: [u8; 0xa0], // 0x0
        pub _: [u8; 0x8], // 0xa0
    }

    #[repr(C)]
    pub struct CompositeMaterialEditorPoint_t {
        pub _: [u8; 0xe0], // 0x0
        pub _: [u8; 0x4], // 0xe0
        pub _: [u8; 0x4], // 0xe4
        pub _: [u8; 0x10], // 0xe8
        pub _: [u8; 0x8], // 0xf8
        pub _: [u8; 0xe0], // 0x100
        pub _: [u8; 0x18], // 0x1e0
        pub _: [u8; 0x20], // 0x1f8
    }

    #[repr(C)]
    pub struct CPlayerSprayDecalRenderHelper {
        pub pad_0: [u8; 0x30], // 0x0
    }

    #[repr(C)]
    pub struct C_IronSightController {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x60], // 0x30
        pub _: [u8; 0xc], // 0x90
        pub _: [u8; 0x8], // 0x9c
        pub _: [u8; 0x4], // 0xa4
        pub _: [u8; 0x8], // 0xa8
    }

    #[repr(C)]
    pub struct CompMatMutatorCondition_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
    }

    #[repr(C)]
    pub struct inv_image_data_t {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x20], // 0x10
        pub _: [u8; 0x38], // 0x30
        pub _: [u8; 0x1c], // 0x68
        pub _: [u8; 0x1c], // 0x84
        pub _: [u8; 0x20], // 0xa0
        pub _: [u8; 0x20], // 0xc0
        pub _: [u8; 0x10], // 0xe0
    }

    #[repr(C)]
    pub struct CompMatPropertyMutator_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x18], // 0x30
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x8], // 0x50
        pub _: [u8; 0x8], // 0x58
        pub _: [u8; 0x8], // 0x60
        pub _: [u8; 0x288], // 0x68
        pub _: [u8; 0x8], // 0x2f0
        pub _: [u8; 0x8], // 0x2f8
        pub _: [u8; 0x4], // 0x300
        pub _: [u8; 0x4], // 0x304
        pub _: [u8; 0x8], // 0x308
        pub _: [u8; 0x1], // 0x310
        pub _: [u8; 0x7], // 0x311
        pub _: [u8; 0x18], // 0x318
        pub _: [u8; 0x18], // 0x330
        pub _: [u8; 0x8], // 0x348
        pub _: [u8; 0x8], // 0x350
        pub _: [u8; 0x8], // 0x358
        pub _: [u8; 0x8], // 0x360
        pub _: [u8; 0x8], // 0x368
        pub _: [u8; 0x8], // 0x370
        pub _: [u8; 0x18], // 0x378
    }

    #[repr(C)]
    pub struct CCompositeMaterialEditorDoc {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x10], // 0x28
    }

    #[repr(C)]
    pub struct CClientAlphaProperty {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x5], // 0x12
        pub _: [u8; 0x1], // 0x17
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x10], // 0x20
    }

    #[repr(C)]
    pub struct screenfade_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x18], // 0x10
    }

    #[repr(C)]
    pub struct CGlobalLightBase {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0xc], // 0x14
        pub _: [u8; 0xc], // 0x20
        pub _: [u8; 0xc], // 0x2c
        pub _: [u8; 0xc], // 0x38
        pub _: [u8; 0xc], // 0x44
        pub _: [u8; 0xc], // 0x50
        pub _: [u8; 0x4], // 0x5c
        pub _: [u8; 0x4], // 0x60
        pub _: [u8; 0x4], // 0x64
        pub _: [u8; 0x1], // 0x68
        pub _: [u8; 0x3], // 0x69
        pub _: [u8; 0x4], // 0x6c
        pub _: [u8; 0x4], // 0x70
        pub _: [u8; 0x4], // 0x74
        pub _: [u8; 0x4], // 0x78
        pub _: [u8; 0x4], // 0x7c
        pub _: [u8; 0x4], // 0x80
        pub _: [u8; 0x4], // 0x84
        pub _: [u8; 0x4], // 0x88
        pub _: [u8; 0x1], // 0x8c
        pub _: [u8; 0x1], // 0x8d
        pub _: [u8; 0x2], // 0x8e
        pub _: [u8; 0x4], // 0x90
        pub _: [u8; 0x4], // 0x94
        pub _: [u8; 0x4], // 0x98
        pub _: [u8; 0x4], // 0x9c
        pub _: [u8; 0x10], // 0xa0
        pub _: [u8; 0x4], // 0xb0
        pub _: [u8; 0x4], // 0xb4
        pub _: [u8; 0x4], // 0xb8
        pub _: [u8; 0x4], // 0xbc
        pub _: [u8; 0x4], // 0xc0
        pub _: [u8; 0x4], // 0xc4
        pub _: [u8; 0xc], // 0xc8
        pub _: [u8; 0xc], // 0xd4
        pub _: [u8; 0xc], // 0xe0
        pub _: [u8; 0x4], // 0xec
        pub _: [u8; 0x3b8], // 0xf0
        pub _: [u8; 0x8], // 0x4a8
        pub _: [u8; 0x8], // 0x4b0
        pub _: [u8; 0x4], // 0x4b8
        pub _: [u8; 0x4], // 0x4bc
    }

    #[repr(C)]
    pub struct IClientAlphaProperty {
        pub pad_0: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct inv_image_light_sun_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0xc], // 0xc
        pub _: [u8; 0x4], // 0x18
    }

    #[repr(C)]
    pub struct CompositeMaterialMatchFilter_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
    }

    #[repr(C)]
    pub struct CompositeMaterial_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x10], // 0x8
        pub _: [u8; 0x40], // 0x18
        pub _: [u8; 0x28], // 0x58
        pub _: [u8; 0x20], // 0x80
    }

}
