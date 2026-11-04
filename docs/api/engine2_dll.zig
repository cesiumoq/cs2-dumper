/* cesium dumper | generated from live schema */
pub const engine2_dll = struct {
    pub const CEntityInstance = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x18]u8, // 0x10
        _: [0x8]u8, // 0x28
    };
    pub const CEntityComponent = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const CScriptComponent = extern struct {
        pad_0: [0x30]u8, // 0x0
        _: [0x8]u8, // 0x30
    };
    pub const CEntityIdentity = extern struct {
        pad_0: [0x14]u8, // 0x0
        _: [0x4]u8, // 0x14
        _: [0x8]u8, // 0x18
        _: [0x10]u8, // 0x20
        _: [0x8]u8, // 0x30
        _: [0x4]u8, // 0x38
        _: [0x4]u8, // 0x3c
        _: [0x8]u8, // 0x40
        _: [0x8]u8, // 0x48
        _: [0x8]u8, // 0x50
        _: [0x8]u8, // 0x58
        _: [0x8]u8, // 0x60
        _: [0x8]u8, // 0x68
    };
    pub const EventClientPostSimulate_t = extern struct {
        pad_0: [0x30]u8, // 0x0
    };
    pub const EventSimpleLoopFrameUpdate_t = extern struct {
        _: [0x28]u8, // 0x0
        _: [0x4]u8, // 0x28
        _: [0x4]u8, // 0x2c
    };
    pub const EventPostAdvanceTick_t = extern struct {
        pad_0: [0x30]u8, // 0x0
        _: [0x4]u8, // 0x30
        _: [0x4]u8, // 0x34
        _: [0x4]u8, // 0x38
        _: [0x4]u8, // 0x3c
    };
    pub const CEntityIOOutput = extern struct {
        pad_0: [0x18]u8, // 0x0
    };
    pub const EventClientSceneSystemThreadStateChange_t = extern struct {
        _: [0x1]u8, // 0x0
    };
    pub const EventClientOutput_t = extern struct {
        _: [0x28]u8, // 0x0
        _: [0x4]u8, // 0x28
        _: [0x4]u8, // 0x2c
        _: [0x4]u8, // 0x30
        _: [0x4]u8, // 0x34
    };
    pub const EventServerPostSimulate_t = extern struct {
        pad_0: [0x30]u8, // 0x0
        _: [0x8]u8, // 0x30
    };
    pub const CEntityComponentHelper = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x8]u8, // 0x10
        _: [0x8]u8, // 0x18
        _: [0x8]u8, // 0x20
    };
    pub const GameTime_t = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const EventServerBeginSimulate_t = extern struct {
        pad_0: [0x30]u8, // 0x0
    };
    pub const EntityIOQueuePrioritizedEvent_t = extern struct {
        pad_0: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x8]u8, // 0x8
        _: [0x8]u8, // 0x10
        _: [0x8]u8, // 0x18
        _: [0x4]u8, // 0x20
        _: [0x4]u8, // 0x24
        _: [0x8]u8, // 0x28
        _: [0x10]u8, // 0x30
        _: [0x90]u8, // 0x40
        _: [0x28]u8, // 0xd0
    };
    pub const EventServerEndAsyncPostTickWork_t = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const EventClientAdvanceTick_t = extern struct {
        pad_0: [0x40]u8, // 0x0
    };
    pub const CNetworkVarChainer = extern struct {
        pad_0: [0x20]u8, // 0x0
        _: [0x8]u8, // 0x20
    };
    pub const EventClientSimulate_t = extern struct {
        pad_0: [0x30]u8, // 0x0
    };
    pub const EventClientPostOutput_t = extern struct {
        _: [0x28]u8, // 0x0
        _: [0x8]u8, // 0x28
        _: [0x4]u8, // 0x30
        _: [0x4]u8, // 0x34
        _: [0x8]u8, // 0x38
    };
    pub const GameTick_t = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const EventClientPollInput_t = extern struct {
        _: [0x28]u8, // 0x0
        _: [0x8]u8, // 0x28
    };
    pub const EventPreDataUpdate_t = extern struct {
        _: [0x10]u8, // 0x0
    };
    pub const EventClientProcessGameInput_t = extern struct {
        _: [0x28]u8, // 0x0
        _: [0x4]u8, // 0x28
        _: [0x4]u8, // 0x2c
    };
    pub const EventFrameBoundary_t = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const EventAppShutdown_t = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const EventServerPostAdvanceTick_t = extern struct {
        pad_0: [0x40]u8, // 0x0
        _: [0x8]u8, // 0x40
    };
    pub const EventProfileStorageAvailable_t = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const EventPostDataUpdate_t = extern struct {
        _: [0x10]u8, // 0x0
    };
    pub const EventClientPreSimulate_t = extern struct {
        pad_0: [0x30]u8, // 0x0
    };
    pub const EventClientPauseSimulate_t = extern struct {
        pad_0: [0x30]u8, // 0x0
    };
    pub const EventClientProcessNetworking_t = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const CEntityAttributeTable = extern struct {
        _: [0x28]u8, // 0x0
        _: [0x28]u8, // 0x28
    };
    pub const EventClientPreOutputParallelWithServer_t = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const EventAdvanceTick_t = extern struct {
        pad_0: [0x30]u8, // 0x0
        _: [0x4]u8, // 0x30
        _: [0x4]u8, // 0x34
        _: [0x4]u8, // 0x38
        _: [0x4]u8, // 0x3c
    };
    pub const EventSplitScreenStateChanged_t = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const EventClientPostAdvanceTick_t = extern struct {
        pad_0: [0x40]u8, // 0x0
    };
    pub const EventBugBug_t = extern struct {
        pad_0: [0x20]u8, // 0x0
    };
    pub const CVariantDefaultAllocator = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const EventBugBugComplete_t = extern struct {
        _: [0x8]u8, // 0x0
    };
    pub const EventModInitialized_t = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const EventClientPreOutput_t = extern struct {
        _: [0x28]u8, // 0x0
        _: [0x8]u8, // 0x28
        _: [0x8]u8, // 0x30
        _: [0x8]u8, // 0x38
        _: [0x4]u8, // 0x40
        _: [0x4]u8, // 0x44
    };
    pub const EventClientFrameSimulate_t = extern struct {
        _: [0x28]u8, // 0x0
        _: [0x4]u8, // 0x28
        _: [0x4]u8, // 0x2c
        _: [0x8]u8, // 0x30
    };
    pub const EventServerAdvanceTick_t = extern struct {
        pad_0: [0x40]u8, // 0x0
    };
    pub const EventSetTime_t = extern struct {
        _: [0x28]u8, // 0x0
        _: [0x8]u8, // 0x28
        _: [0x8]u8, // 0x30
        _: [0x8]u8, // 0x38
        _: [0x8]u8, // 0x40
        _: [0x8]u8, // 0x48
        _: [0x8]u8, // 0x50
        _: [0x8]u8, // 0x58
    };
    pub const EventSimulate_t = extern struct {
        _: [0x28]u8, // 0x0
        _: [0x1]u8, // 0x28
        _: [0x7]u8, // 0x29
    };
    pub const CEntityKeyValues = extern struct {
        pad_0: [0x38]u8, // 0x0
    };
    pub const EventClientAdvanceNonRenderedFrame_t = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const EventServerProcessNetworking_t = extern struct {
        pad_0: [0x30]u8, // 0x0
    };
    pub const CEmptyEntityInstance = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const EntComponentInfo_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x8]u8, // 0x10
        _: [0x8]u8, // 0x18
        _: [0x4]u8, // 0x20
        _: [0x34]u8, // 0x24
        _: [0x8]u8, // 0x58
    };
    pub const EngineLoopState_t = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
        _: [0x4]u8, // 0x20
        _: [0x4]u8, // 0x24
    };
    pub const EventClientPollNetworking_t = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const EventServerBeginAsyncPostTickWork_t = extern struct {
        _: [0x1]u8, // 0x0
    };
    pub const EventClientProcessInput_t = extern struct {
        _: [0x28]u8, // 0x0
        _: [0x4]u8, // 0x28
        _: [0x4]u8, // 0x2c
        _: [0x8]u8, // 0x30
    };
    pub const EventServerEndSimulate_t = extern struct {
        _: [0x1]u8, // 0x0
    };
    pub const EventServerPollNetworking_t = extern struct {
        pad_0: [0x30]u8, // 0x0
    };
};
