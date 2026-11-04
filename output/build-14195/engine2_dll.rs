/* cesium dumper | generated from live schema */
#![allow(non_snake_case, non_camel_case_types, dead_code)]

pub mod engine2_dll {

    #[repr(C)]
    pub struct CEntityInstance {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x8], // 0x28
    }

    #[repr(C)]
    pub struct CEntityComponent {
        pub pad_0: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct CScriptComponent {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x8], // 0x30
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
    pub struct EventClientPostSimulate_t {
        pub pad_0: [u8; 0x30], // 0x0
    }

    #[repr(C)]
    pub struct EventSimpleLoopFrameUpdate_t {
        pub _: [u8; 0x28], // 0x0
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
    }

    #[repr(C)]
    pub struct EventPostAdvanceTick_t {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
    }

    #[repr(C)]
    pub struct CEntityIOOutput {
        pub pad_0: [u8; 0x18], // 0x0
    }

    #[repr(C)]
    pub struct EventClientSceneSystemThreadStateChange_t {
        pub _: [u8; 0x1], // 0x0
    }

    #[repr(C)]
    pub struct EventClientOutput_t {
        pub _: [u8; 0x28], // 0x0
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
    }

    #[repr(C)]
    pub struct EventServerPostSimulate_t {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x8], // 0x30
    }

    #[repr(C)]
    pub struct CEntityComponentHelper {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
    }

    #[repr(C)]
    pub struct GameTime_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct EventServerBeginSimulate_t {
        pub pad_0: [u8; 0x30], // 0x0
    }

    #[repr(C)]
    pub struct EntityIOQueuePrioritizedEvent_t {
        pub pad_0: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x10], // 0x30
        pub _: [u8; 0x90], // 0x40
        pub _: [u8; 0x28], // 0xd0
    }

    #[repr(C)]
    pub struct EventServerEndAsyncPostTickWork_t {
        pub pad_0: [u8; 0x1], // 0x0
    }

    #[repr(C)]
    pub struct EventClientAdvanceTick_t {
        pub pad_0: [u8; 0x40], // 0x0
    }

    #[repr(C)]
    pub struct CNetworkVarChainer {
        pub pad_0: [u8; 0x20], // 0x0
        pub _: [u8; 0x8], // 0x20
    }

    #[repr(C)]
    pub struct EventClientSimulate_t {
        pub pad_0: [u8; 0x30], // 0x0
    }

    #[repr(C)]
    pub struct EventClientPostOutput_t {
        pub _: [u8; 0x28], // 0x0
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x8], // 0x38
    }

    #[repr(C)]
    pub struct GameTick_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct EventClientPollInput_t {
        pub _: [u8; 0x28], // 0x0
        pub _: [u8; 0x8], // 0x28
    }

    #[repr(C)]
    pub struct EventPreDataUpdate_t {
        pub _: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct EventClientProcessGameInput_t {
        pub _: [u8; 0x28], // 0x0
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
    }

    #[repr(C)]
    pub struct EventFrameBoundary_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct EventAppShutdown_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct EventServerPostAdvanceTick_t {
        pub pad_0: [u8; 0x40], // 0x0
        pub _: [u8; 0x8], // 0x40
    }

    #[repr(C)]
    pub struct EventProfileStorageAvailable_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct EventPostDataUpdate_t {
        pub _: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct EventClientPreSimulate_t {
        pub pad_0: [u8; 0x30], // 0x0
    }

    #[repr(C)]
    pub struct EventClientPauseSimulate_t {
        pub pad_0: [u8; 0x30], // 0x0
    }

    #[repr(C)]
    pub struct EventClientProcessNetworking_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CEntityAttributeTable {
        pub _: [u8; 0x28], // 0x0
        pub _: [u8; 0x28], // 0x28
    }

    #[repr(C)]
    pub struct EventClientPreOutputParallelWithServer_t {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct EventAdvanceTick_t {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
    }

    #[repr(C)]
    pub struct EventSplitScreenStateChanged_t {
        pub pad_0: [u8; 0x1], // 0x0
    }

    #[repr(C)]
    pub struct EventClientPostAdvanceTick_t {
        pub pad_0: [u8; 0x40], // 0x0
    }

    #[repr(C)]
    pub struct EventBugBug_t {
        pub pad_0: [u8; 0x20], // 0x0
    }

    #[repr(C)]
    pub struct CVariantDefaultAllocator {
        pub pad_0: [u8; 0x1], // 0x0
    }

    #[repr(C)]
    pub struct EventBugBugComplete_t {
        pub _: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct EventModInitialized_t {
        pub pad_0: [u8; 0x1], // 0x0
    }

    #[repr(C)]
    pub struct EventClientPreOutput_t {
        pub _: [u8; 0x28], // 0x0
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x8], // 0x30
        pub _: [u8; 0x8], // 0x38
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x4], // 0x44
    }

    #[repr(C)]
    pub struct EventClientFrameSimulate_t {
        pub _: [u8; 0x28], // 0x0
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x8], // 0x30
    }

    #[repr(C)]
    pub struct EventServerAdvanceTick_t {
        pub pad_0: [u8; 0x40], // 0x0
    }

    #[repr(C)]
    pub struct EventSetTime_t {
        pub _: [u8; 0x28], // 0x0
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x8], // 0x30
        pub _: [u8; 0x8], // 0x38
        pub _: [u8; 0x8], // 0x40
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x8], // 0x50
        pub _: [u8; 0x8], // 0x58
    }

    #[repr(C)]
    pub struct EventSimulate_t {
        pub _: [u8; 0x28], // 0x0
        pub _: [u8; 0x1], // 0x28
        pub _: [u8; 0x7], // 0x29
    }

    #[repr(C)]
    pub struct CEntityKeyValues {
        pub pad_0: [u8; 0x38], // 0x0
    }

    #[repr(C)]
    pub struct EventClientAdvanceNonRenderedFrame_t {
        pub pad_0: [u8; 0x1], // 0x0
    }

    #[repr(C)]
    pub struct EventServerProcessNetworking_t {
        pub pad_0: [u8; 0x30], // 0x0
    }

    #[repr(C)]
    pub struct CEmptyEntityInstance {
        pub pad_0: [u8; 0x1], // 0x0
    }

    #[repr(C)]
    pub struct EntComponentInfo_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x34], // 0x24
        pub _: [u8; 0x8], // 0x58
    }

    #[repr(C)]
    pub struct EngineLoopState_t {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
    }

    #[repr(C)]
    pub struct EventClientPollNetworking_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct EventServerBeginAsyncPostTickWork_t {
        pub _: [u8; 0x1], // 0x0
    }

    #[repr(C)]
    pub struct EventClientProcessInput_t {
        pub _: [u8; 0x28], // 0x0
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x8], // 0x30
    }

    #[repr(C)]
    pub struct EventServerEndSimulate_t {
        pub _: [u8; 0x1], // 0x0
    }

    #[repr(C)]
    pub struct EventServerPollNetworking_t {
        pub pad_0: [u8; 0x30], // 0x0
    }

}
