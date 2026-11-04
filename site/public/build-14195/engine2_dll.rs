/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

#![allow(non_snake_case, non_camel_case_types, dead_code)]

pub mod engine2 {

    pub type EntityDormancyType_t = i32;
    pub type EntityIOTargetType_t = i32;
    #[repr(C)]
    pub struct CEntityInstance {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_iszPrivateVScripts: [u8; 0x8], // 0x8
        pub m_pEntity: [u8; 0x18], // 0x10
        pub m_CScriptComponent: [u8; 0x8], // 0x28
    }
    #[repr(C)]
    pub struct CEntityComponent {
        pub pad_0: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct CScriptComponent {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_scriptClassName: [u8; 0x8], // 0x30
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
    pub struct EventClientPostSimulate_t {
        pub pad_0: [u8; 0x30], // 0x0
    }
    #[repr(C)]
    pub struct EventSimpleLoopFrameUpdate_t {
        pub m_LoopState: [u8; 0x28], // 0x0
        pub m_flRealTime: [u8; 0x4], // 0x28
        pub m_flFrameTime: [u8; 0x4], // 0x2C
    }
    #[repr(C)]
    pub struct EventPostAdvanceTick_t {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_nCurrentTick: [u8; 0x4], // 0x30
        pub m_nCurrentTickThisFrame: [u8; 0x4], // 0x34
        pub m_nTotalTicksThisFrame: [u8; 0x4], // 0x38
        pub m_nTotalTicks: [u8; 0x4], // 0x3C
    }
    #[repr(C)]
    pub struct CEntityIOOutput {
        pub pad_0: [u8; 0x18], // 0x0
    }
    #[repr(C)]
    pub struct EventClientSceneSystemThreadStateChange_t {
        pub m_bThreadsActive: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct EventClientOutput_t {
        pub m_LoopState: [u8; 0x28], // 0x0
        pub m_flRenderTime: [u8; 0x4], // 0x28
        pub m_flRealTime: [u8; 0x4], // 0x2C
        pub m_flRenderFrameTimeUnbounded: [u8; 0x4], // 0x30
        pub m_bRenderOnly: [u8; 0x4], // 0x34
    }
    #[repr(C)]
    pub struct EventServerPostSimulate_t {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_bLastTickBeforeClientUpdate: [u8; 0x8], // 0x30
    }
    #[repr(C)]
    pub struct CEntityComponentHelper {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_flags: [u8; 0x8], // 0x8
        pub m_pInfo: [u8; 0x8], // 0x10
        pub m_nPriority: [u8; 0x8], // 0x18
        pub m_pNext: [u8; 0x8], // 0x20
    }
    #[repr(C)]
    pub struct GameTime_t {
        pub m_Value: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct EventServerBeginSimulate_t {
        pub pad_0: [u8; 0x30], // 0x0
    }
    #[repr(C)]
    pub struct EntityIOQueuePrioritizedEvent_t {
        pub pad_0: [u8; 0x4], // 0x0
        pub m_flFireTime: [u8; 0x4], // 0x4
        pub m_targetType: [u8; 0x8], // 0x8
        pub m_pTarget: [u8; 0x8], // 0x10
        pub m_pTargetInput: [u8; 0x8], // 0x18
        pub m_hActivator: [u8; 0x4], // 0x20
        pub m_hCaller: [u8; 0x4], // 0x24
        pub m_hEntTarget: [u8; 0x8], // 0x28
        pub m_variantValue: [u8; 0x10], // 0x30
        pub m_PulseArguments: [u8; 0x90], // 0x40
        pub m_paramMap: [u8; 0x28], // 0xD0
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
        pub m_PathIndex: [u8; 0x8], // 0x20
    }
    #[repr(C)]
    pub struct EventClientSimulate_t {
        pub pad_0: [u8; 0x30], // 0x0
    }
    #[repr(C)]
    pub struct EventClientPostOutput_t {
        pub m_LoopState: [u8; 0x28], // 0x0
        pub m_flRenderTime: [u8; 0x8], // 0x28
        pub m_flRenderFrameTime: [u8; 0x4], // 0x30
        pub m_flRenderFrameTimeUnbounded: [u8; 0x4], // 0x34
        pub m_bRenderOnly: [u8; 0x8], // 0x38
    }
    #[repr(C)]
    pub struct GameTick_t {
        pub m_Value: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct EventClientPollInput_t {
        pub m_LoopState: [u8; 0x28], // 0x0
        pub m_flRealTime: [u8; 0x8], // 0x28
    }
    #[repr(C)]
    pub struct EventPreDataUpdate_t {
        pub m_nCount: [u8; 0x10], // 0x0
    }
    #[repr(C)]
    pub struct EventClientProcessGameInput_t {
        pub m_LoopState: [u8; 0x28], // 0x0
        pub m_flRealTime: [u8; 0x4], // 0x28
        pub m_flFrameTime: [u8; 0x4], // 0x2C
    }
    #[repr(C)]
    pub struct EventFrameBoundary_t {
        pub m_flFrameTime: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct EventAppShutdown_t {
        pub m_nDummy0: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct EventServerPostAdvanceTick_t {
        pub pad_0: [u8; 0x40], // 0x0
        pub m_bLastTickBeforeClientUpdate: [u8; 0x8], // 0x40
    }
    #[repr(C)]
    pub struct EventProfileStorageAvailable_t {
        pub m_nSplitScreenSlot: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct EventPostDataUpdate_t {
        pub m_nCount: [u8; 0x10], // 0x0
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
        pub m_nTickCount: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CEntityAttributeTable {
        pub m_Attributes: [u8; 0x28], // 0x0
        pub m_Names: [u8; 0x28], // 0x28
    }
    #[repr(C)]
    pub struct EventClientPreOutputParallelWithServer_t {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct EventAdvanceTick_t {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_nCurrentTick: [u8; 0x4], // 0x30
        pub m_nCurrentTickThisFrame: [u8; 0x4], // 0x34
        pub m_nTotalTicksThisFrame: [u8; 0x4], // 0x38
        pub m_nTotalTicks: [u8; 0x4], // 0x3C
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
        pub m_pPayload: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct EventModInitialized_t {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct EventClientPreOutput_t {
        pub m_LoopState: [u8; 0x28], // 0x0
        pub m_flRenderTime: [u8; 0x8], // 0x28
        pub m_flRenderFrameTime: [u8; 0x8], // 0x30
        pub m_flRenderFrameTimeUnbounded: [u8; 0x8], // 0x38
        pub m_flRealTime: [u8; 0x4], // 0x40
        pub m_bRenderOnly: [u8; 0x4], // 0x44
    }
    #[repr(C)]
    pub struct EventClientFrameSimulate_t {
        pub m_LoopState: [u8; 0x28], // 0x0
        pub m_flRealTime: [u8; 0x4], // 0x28
        pub m_flFrameTime: [u8; 0x4], // 0x2C
        pub m_bScheduleSendTickPacket: [u8; 0x8], // 0x30
    }
    #[repr(C)]
    pub struct EventServerAdvanceTick_t {
        pub pad_0: [u8; 0x40], // 0x0
    }
    #[repr(C)]
    pub struct EventSetTime_t {
        pub m_LoopState: [u8; 0x28], // 0x0
        pub m_nClientOutputFrames: [u8; 0x8], // 0x28
        pub m_flRealTime: [u8; 0x8], // 0x30
        pub m_flRenderTime: [u8; 0x8], // 0x38
        pub m_flRenderFrameTime: [u8; 0x8], // 0x40
        pub m_flRenderFrameTimeUnbounded: [u8; 0x8], // 0x48
        pub m_flRenderFrameTimeUnscaled: [u8; 0x8], // 0x50
        pub m_flTickRemainder: [u8; 0x8], // 0x58
    }
    #[repr(C)]
    pub struct EventSimulate_t {
        pub m_LoopState: [u8; 0x28], // 0x0
        pub m_bFirstTick: [u8; 0x1], // 0x28
        pub m_bLastTick: [u8; 0x7], // 0x29
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
        pub m_pName: [u8; 0x8], // 0x0
        pub m_pCPPClassname: [u8; 0x8], // 0x8
        pub m_pNetworkDataReferencedDescription: [u8; 0x8], // 0x10
        pub m_pNetworkDataReferencedPtrPropDescription: [u8; 0x8], // 0x18
        pub m_nRuntimeIndex: [u8; 0x4], // 0x20
        pub m_nFlags: [u8; 0x34], // 0x24
        pub m_pBaseClassComponentHelper: [u8; 0x8], // 0x58
    }
    #[repr(C)]
    pub struct EngineLoopState_t {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_nPlatWindowWidth: [u8; 0x4], // 0x18
        pub m_nPlatWindowHeight: [u8; 0x4], // 0x1C
        pub m_nRenderWidth: [u8; 0x4], // 0x20
        pub m_nRenderHeight: [u8; 0x4], // 0x24
    }
    #[repr(C)]
    pub struct EventClientPollNetworking_t {
        pub m_nTickCount: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct EventServerBeginAsyncPostTickWork_t {
        pub m_bIsOncePerFrameAsyncWorkPhase: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct EventClientProcessInput_t {
        pub m_LoopState: [u8; 0x28], // 0x0
        pub m_flRealTime: [u8; 0x4], // 0x28
        pub m_flTickInterval: [u8; 0x4], // 0x2C
        pub m_flTickStartTime: [u8; 0x8], // 0x30
    }
    #[repr(C)]
    pub struct EventServerEndSimulate_t {
        pub m_bLastTick: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct EventServerPollNetworking_t {
        pub pad_0: [u8; 0x30], // 0x0
    }
}
