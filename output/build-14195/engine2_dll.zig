/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

pub const engine2 = struct {

    pub const CEntityInstance = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_iszPrivateVScripts: [0x8]u8, // 0x8
        m_pEntity: [0x18]u8, // 0x10
        m_CScriptComponent: [0x8]u8, // 0x28
    };
    pub const CEntityComponent = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const CScriptComponent = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_scriptClassName: [0x8]u8, // 0x30
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
    pub const EventClientPostSimulate_t = extern struct {
        pad_0: [0x30]u8, // 0x0
    };
    pub const EventSimpleLoopFrameUpdate_t = extern struct {
        m_LoopState: [0x28]u8, // 0x0
        m_flRealTime: [0x4]u8, // 0x28
        m_flFrameTime: [0x4]u8, // 0x2C
    };
    pub const EventPostAdvanceTick_t = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_nCurrentTick: [0x4]u8, // 0x30
        m_nCurrentTickThisFrame: [0x4]u8, // 0x34
        m_nTotalTicksThisFrame: [0x4]u8, // 0x38
        m_nTotalTicks: [0x4]u8, // 0x3C
    };
    pub const CEntityIOOutput = extern struct {
        pad_0: [0x18]u8, // 0x0
    };
    pub const EventClientSceneSystemThreadStateChange_t = extern struct {
        m_bThreadsActive: [0x1]u8, // 0x0
    };
    pub const EventClientOutput_t = extern struct {
        m_LoopState: [0x28]u8, // 0x0
        m_flRenderTime: [0x4]u8, // 0x28
        m_flRealTime: [0x4]u8, // 0x2C
        m_flRenderFrameTimeUnbounded: [0x4]u8, // 0x30
        m_bRenderOnly: [0x4]u8, // 0x34
    };
    pub const EventServerPostSimulate_t = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_bLastTickBeforeClientUpdate: [0x8]u8, // 0x30
    };
    pub const CEntityComponentHelper = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_flags: [0x8]u8, // 0x8
        m_pInfo: [0x8]u8, // 0x10
        m_nPriority: [0x8]u8, // 0x18
        m_pNext: [0x8]u8, // 0x20
    };
    pub const GameTime_t = extern struct {
        m_Value: [0x4]u8, // 0x0
    };
    pub const EventServerBeginSimulate_t = extern struct {
        pad_0: [0x30]u8, // 0x0
    };
    pub const EntityIOQueuePrioritizedEvent_t = extern struct {
        pad_0: [0x4]u8, // 0x0
        m_flFireTime: [0x4]u8, // 0x4
        m_targetType: [0x8]u8, // 0x8
        m_pTarget: [0x8]u8, // 0x10
        m_pTargetInput: [0x8]u8, // 0x18
        m_hActivator: [0x4]u8, // 0x20
        m_hCaller: [0x4]u8, // 0x24
        m_hEntTarget: [0x8]u8, // 0x28
        m_variantValue: [0x10]u8, // 0x30
        m_PulseArguments: [0x90]u8, // 0x40
        m_paramMap: [0x28]u8, // 0xD0
    };
    pub const EventServerEndAsyncPostTickWork_t = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const EventClientAdvanceTick_t = extern struct {
        pad_0: [0x40]u8, // 0x0
    };
    pub const CNetworkVarChainer = extern struct {
        pad_0: [0x20]u8, // 0x0
        m_PathIndex: [0x8]u8, // 0x20
    };
    pub const EventClientSimulate_t = extern struct {
        pad_0: [0x30]u8, // 0x0
    };
    pub const EventClientPostOutput_t = extern struct {
        m_LoopState: [0x28]u8, // 0x0
        m_flRenderTime: [0x8]u8, // 0x28
        m_flRenderFrameTime: [0x4]u8, // 0x30
        m_flRenderFrameTimeUnbounded: [0x4]u8, // 0x34
        m_bRenderOnly: [0x8]u8, // 0x38
    };
    pub const GameTick_t = extern struct {
        m_Value: [0x4]u8, // 0x0
    };
    pub const EventClientPollInput_t = extern struct {
        m_LoopState: [0x28]u8, // 0x0
        m_flRealTime: [0x8]u8, // 0x28
    };
    pub const EventPreDataUpdate_t = extern struct {
        m_nCount: [0x10]u8, // 0x0
    };
    pub const EventClientProcessGameInput_t = extern struct {
        m_LoopState: [0x28]u8, // 0x0
        m_flRealTime: [0x4]u8, // 0x28
        m_flFrameTime: [0x4]u8, // 0x2C
    };
    pub const EventFrameBoundary_t = extern struct {
        m_flFrameTime: [0x4]u8, // 0x0
    };
    pub const EventAppShutdown_t = extern struct {
        m_nDummy0: [0x4]u8, // 0x0
    };
    pub const EventServerPostAdvanceTick_t = extern struct {
        pad_0: [0x40]u8, // 0x0
        m_bLastTickBeforeClientUpdate: [0x8]u8, // 0x40
    };
    pub const EventProfileStorageAvailable_t = extern struct {
        m_nSplitScreenSlot: [0x4]u8, // 0x0
    };
    pub const EventPostDataUpdate_t = extern struct {
        m_nCount: [0x10]u8, // 0x0
    };
    pub const EventClientPreSimulate_t = extern struct {
        pad_0: [0x30]u8, // 0x0
    };
    pub const EventClientPauseSimulate_t = extern struct {
        pad_0: [0x30]u8, // 0x0
    };
    pub const EventClientProcessNetworking_t = extern struct {
        m_nTickCount: [0x4]u8, // 0x0
    };
    pub const CEntityAttributeTable = extern struct {
        m_Attributes: [0x28]u8, // 0x0
        m_Names: [0x28]u8, // 0x28
    };
    pub const EventClientPreOutputParallelWithServer_t = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const EventAdvanceTick_t = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_nCurrentTick: [0x4]u8, // 0x30
        m_nCurrentTickThisFrame: [0x4]u8, // 0x34
        m_nTotalTicksThisFrame: [0x4]u8, // 0x38
        m_nTotalTicks: [0x4]u8, // 0x3C
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
        m_pPayload: [0x8]u8, // 0x0
    };
    pub const EventModInitialized_t = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const EventClientPreOutput_t = extern struct {
        m_LoopState: [0x28]u8, // 0x0
        m_flRenderTime: [0x8]u8, // 0x28
        m_flRenderFrameTime: [0x8]u8, // 0x30
        m_flRenderFrameTimeUnbounded: [0x8]u8, // 0x38
        m_flRealTime: [0x4]u8, // 0x40
        m_bRenderOnly: [0x4]u8, // 0x44
    };
    pub const EventClientFrameSimulate_t = extern struct {
        m_LoopState: [0x28]u8, // 0x0
        m_flRealTime: [0x4]u8, // 0x28
        m_flFrameTime: [0x4]u8, // 0x2C
        m_bScheduleSendTickPacket: [0x8]u8, // 0x30
    };
    pub const EventServerAdvanceTick_t = extern struct {
        pad_0: [0x40]u8, // 0x0
    };
    pub const EventSetTime_t = extern struct {
        m_LoopState: [0x28]u8, // 0x0
        m_nClientOutputFrames: [0x8]u8, // 0x28
        m_flRealTime: [0x8]u8, // 0x30
        m_flRenderTime: [0x8]u8, // 0x38
        m_flRenderFrameTime: [0x8]u8, // 0x40
        m_flRenderFrameTimeUnbounded: [0x8]u8, // 0x48
        m_flRenderFrameTimeUnscaled: [0x8]u8, // 0x50
        m_flTickRemainder: [0x8]u8, // 0x58
    };
    pub const EventSimulate_t = extern struct {
        m_LoopState: [0x28]u8, // 0x0
        m_bFirstTick: [0x1]u8, // 0x28
        m_bLastTick: [0x7]u8, // 0x29
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
        m_pName: [0x8]u8, // 0x0
        m_pCPPClassname: [0x8]u8, // 0x8
        m_pNetworkDataReferencedDescription: [0x8]u8, // 0x10
        m_pNetworkDataReferencedPtrPropDescription: [0x8]u8, // 0x18
        m_nRuntimeIndex: [0x4]u8, // 0x20
        m_nFlags: [0x34]u8, // 0x24
        m_pBaseClassComponentHelper: [0x8]u8, // 0x58
    };
    pub const EngineLoopState_t = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_nPlatWindowWidth: [0x4]u8, // 0x18
        m_nPlatWindowHeight: [0x4]u8, // 0x1C
        m_nRenderWidth: [0x4]u8, // 0x20
        m_nRenderHeight: [0x4]u8, // 0x24
    };
    pub const EventClientPollNetworking_t = extern struct {
        m_nTickCount: [0x4]u8, // 0x0
    };
    pub const EventServerBeginAsyncPostTickWork_t = extern struct {
        m_bIsOncePerFrameAsyncWorkPhase: [0x1]u8, // 0x0
    };
    pub const EventClientProcessInput_t = extern struct {
        m_LoopState: [0x28]u8, // 0x0
        m_flRealTime: [0x4]u8, // 0x28
        m_flTickInterval: [0x4]u8, // 0x2C
        m_flTickStartTime: [0x8]u8, // 0x30
    };
    pub const EventServerEndSimulate_t = extern struct {
        m_bLastTick: [0x1]u8, // 0x0
    };
    pub const EventServerPollNetworking_t = extern struct {
        pad_0: [0x30]u8, // 0x0
    };
};
