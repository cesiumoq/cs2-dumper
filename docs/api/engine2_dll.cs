/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Total Offsets   : 202
/*  Dumped At       : 22:50 04/11/2026 (GMT)
/*  Dumped In       : 1,7s
*/

/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

using System;
using System.Runtime.InteropServices;

namespace Cs2.engine2 {

    public enum EntityDormancyType_t : int {
        ENTITY_NOT_DORMANT = 0, 
        ENTITY_DORMANT = 1, 
        ENTITY_SUSPENDED = 2, 
    }
    public enum EntityIOTargetType_t : int {
        ENTITY_IO_TARGET_INVALID = 18446744073709551615, 
        ENTITY_IO_TARGET_ENTITYNAME = 2, 
        ENTITY_IO_TARGET_EHANDLE = 6, 
        ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME = 7, 
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CEntityInstance {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_iszPrivateVScripts[0x8];
        [FieldOffset(0x10)] public fixed byte m_pEntity[0x18];
        [FieldOffset(0x28)] public fixed byte m_CScriptComponent[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CEntityComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CScriptComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_scriptClassName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CEntityIdentity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x14];
        [FieldOffset(0x14)] public fixed byte m_nameStringTableIndex[0x4];
        [FieldOffset(0x18)] public fixed byte m_name[0x8];
        [FieldOffset(0x20)] public fixed byte m_designerName[0x10];
        [FieldOffset(0x30)] public fixed byte m_flags[0x8];
        [FieldOffset(0x38)] public fixed byte m_worldGroupId[0x4];
        [FieldOffset(0x3C)] public fixed byte m_fDataObjectTypes[0x4];
        [FieldOffset(0x40)] public fixed byte m_PathIndex[0x8];
        [FieldOffset(0x48)] public fixed byte m_pAttributes[0x8];
        [FieldOffset(0x50)] public fixed byte m_pPrev[0x8];
        [FieldOffset(0x58)] public fixed byte m_pNext[0x8];
        [FieldOffset(0x60)] public fixed byte m_pPrevByClass[0x8];
        [FieldOffset(0x68)] public fixed byte m_pNextByClass[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct EventClientPostSimulate_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct EventSimpleLoopFrameUpdate_t {
        [FieldOffset(0x0)] public fixed byte m_LoopState[0x28];
        [FieldOffset(0x28)] public fixed byte m_flRealTime[0x4];
        [FieldOffset(0x2C)] public fixed byte m_flFrameTime[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct EventPostAdvanceTick_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_nCurrentTick[0x4];
        [FieldOffset(0x34)] public fixed byte m_nCurrentTickThisFrame[0x4];
        [FieldOffset(0x38)] public fixed byte m_nTotalTicksThisFrame[0x4];
        [FieldOffset(0x3C)] public fixed byte m_nTotalTicks[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CEntityIOOutput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct EventClientSceneSystemThreadStateChange_t {
        [FieldOffset(0x0)] public fixed byte m_bThreadsActive[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct EventClientOutput_t {
        [FieldOffset(0x0)] public fixed byte m_LoopState[0x28];
        [FieldOffset(0x28)] public fixed byte m_flRenderTime[0x4];
        [FieldOffset(0x2C)] public fixed byte m_flRealTime[0x4];
        [FieldOffset(0x30)] public fixed byte m_flRenderFrameTimeUnbounded[0x4];
        [FieldOffset(0x34)] public fixed byte m_bRenderOnly[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct EventServerPostSimulate_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_bLastTickBeforeClientUpdate[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CEntityComponentHelper {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_flags[0x8];
        [FieldOffset(0x10)] public fixed byte m_pInfo[0x8];
        [FieldOffset(0x18)] public fixed byte m_nPriority[0x8];
        [FieldOffset(0x20)] public fixed byte m_pNext[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct GameTime_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct EventServerBeginSimulate_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xF8)]
    public unsafe struct EntityIOQueuePrioritizedEvent_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4];
        [FieldOffset(0x4)] public fixed byte m_flFireTime[0x4];
        [FieldOffset(0x8)] public fixed byte m_targetType[0x8];
        [FieldOffset(0x10)] public fixed byte m_pTarget[0x8];
        [FieldOffset(0x18)] public fixed byte m_pTargetInput[0x8];
        [FieldOffset(0x20)] public fixed byte m_hActivator[0x4];
        [FieldOffset(0x24)] public fixed byte m_hCaller[0x4];
        [FieldOffset(0x28)] public fixed byte m_hEntTarget[0x8];
        [FieldOffset(0x30)] public fixed byte m_variantValue[0x10];
        [FieldOffset(0x40)] public fixed byte m_PulseArguments[0x90];
        [FieldOffset(0xD0)] public fixed byte m_paramMap[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct EventServerEndAsyncPostTickWork_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct EventClientAdvanceTick_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CNetworkVarChainer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
        [FieldOffset(0x20)] public fixed byte m_PathIndex[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct EventClientSimulate_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct EventClientPostOutput_t {
        [FieldOffset(0x0)] public fixed byte m_LoopState[0x28];
        [FieldOffset(0x28)] public fixed byte m_flRenderTime[0x8];
        [FieldOffset(0x30)] public fixed byte m_flRenderFrameTime[0x4];
        [FieldOffset(0x34)] public fixed byte m_flRenderFrameTimeUnbounded[0x4];
        [FieldOffset(0x38)] public fixed byte m_bRenderOnly[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct GameTick_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct EventClientPollInput_t {
        [FieldOffset(0x0)] public fixed byte m_LoopState[0x28];
        [FieldOffset(0x28)] public fixed byte m_flRealTime[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct EventPreDataUpdate_t {
        [FieldOffset(0x0)] public fixed byte m_nCount[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct EventClientProcessGameInput_t {
        [FieldOffset(0x0)] public fixed byte m_LoopState[0x28];
        [FieldOffset(0x28)] public fixed byte m_flRealTime[0x4];
        [FieldOffset(0x2C)] public fixed byte m_flFrameTime[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct EventFrameBoundary_t {
        [FieldOffset(0x0)] public fixed byte m_flFrameTime[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct EventAppShutdown_t {
        [FieldOffset(0x0)] public fixed byte m_nDummy0[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct EventServerPostAdvanceTick_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
        [FieldOffset(0x40)] public fixed byte m_bLastTickBeforeClientUpdate[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct EventProfileStorageAvailable_t {
        [FieldOffset(0x0)] public fixed byte m_nSplitScreenSlot[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct EventPostDataUpdate_t {
        [FieldOffset(0x0)] public fixed byte m_nCount[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct EventClientPreSimulate_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct EventClientPauseSimulate_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct EventClientProcessNetworking_t {
        [FieldOffset(0x0)] public fixed byte m_nTickCount[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CEntityAttributeTable {
        [FieldOffset(0x0)] public fixed byte m_Attributes[0x28];
        [FieldOffset(0x28)] public fixed byte m_Names[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct EventClientPreOutputParallelWithServer_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct EventAdvanceTick_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte m_nCurrentTick[0x4];
        [FieldOffset(0x34)] public fixed byte m_nCurrentTickThisFrame[0x4];
        [FieldOffset(0x38)] public fixed byte m_nTotalTicksThisFrame[0x4];
        [FieldOffset(0x3C)] public fixed byte m_nTotalTicks[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct EventSplitScreenStateChanged_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct EventClientPostAdvanceTick_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct EventBugBug_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct CVariantDefaultAllocator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct EventBugBugComplete_t {
        [FieldOffset(0x0)] public fixed byte m_pPayload[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct EventModInitialized_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct EventClientPreOutput_t {
        [FieldOffset(0x0)] public fixed byte m_LoopState[0x28];
        [FieldOffset(0x28)] public fixed byte m_flRenderTime[0x8];
        [FieldOffset(0x30)] public fixed byte m_flRenderFrameTime[0x8];
        [FieldOffset(0x38)] public fixed byte m_flRenderFrameTimeUnbounded[0x8];
        [FieldOffset(0x40)] public fixed byte m_flRealTime[0x4];
        [FieldOffset(0x44)] public fixed byte m_bRenderOnly[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct EventClientFrameSimulate_t {
        [FieldOffset(0x0)] public fixed byte m_LoopState[0x28];
        [FieldOffset(0x28)] public fixed byte m_flRealTime[0x4];
        [FieldOffset(0x2C)] public fixed byte m_flFrameTime[0x4];
        [FieldOffset(0x30)] public fixed byte m_bScheduleSendTickPacket[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct EventServerAdvanceTick_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct EventSetTime_t {
        [FieldOffset(0x0)] public fixed byte m_LoopState[0x28];
        [FieldOffset(0x28)] public fixed byte m_nClientOutputFrames[0x8];
        [FieldOffset(0x30)] public fixed byte m_flRealTime[0x8];
        [FieldOffset(0x38)] public fixed byte m_flRenderTime[0x8];
        [FieldOffset(0x40)] public fixed byte m_flRenderFrameTime[0x8];
        [FieldOffset(0x48)] public fixed byte m_flRenderFrameTimeUnbounded[0x8];
        [FieldOffset(0x50)] public fixed byte m_flRenderFrameTimeUnscaled[0x8];
        [FieldOffset(0x58)] public fixed byte m_flTickRemainder[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct EventSimulate_t {
        [FieldOffset(0x0)] public fixed byte m_LoopState[0x28];
        [FieldOffset(0x28)] public fixed byte m_bFirstTick[0x1];
        [FieldOffset(0x29)] public fixed byte m_bLastTick[0x7];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CEntityKeyValues {
        [FieldOffset(0x0)] public fixed byte pad_0[0x38];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct EventClientAdvanceNonRenderedFrame_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct EventServerProcessNetworking_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct CEmptyEntityInstance {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct EntComponentInfo_t {
        [FieldOffset(0x0)] public fixed byte m_pName[0x8];
        [FieldOffset(0x8)] public fixed byte m_pCPPClassname[0x8];
        [FieldOffset(0x10)] public fixed byte m_pNetworkDataReferencedDescription[0x8];
        [FieldOffset(0x18)] public fixed byte m_pNetworkDataReferencedPtrPropDescription[0x8];
        [FieldOffset(0x20)] public fixed byte m_nRuntimeIndex[0x4];
        [FieldOffset(0x24)] public fixed byte m_nFlags[0x34];
        [FieldOffset(0x58)] public fixed byte m_pBaseClassComponentHelper[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct EngineLoopState_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte m_nPlatWindowWidth[0x4];
        [FieldOffset(0x1C)] public fixed byte m_nPlatWindowHeight[0x4];
        [FieldOffset(0x20)] public fixed byte m_nRenderWidth[0x4];
        [FieldOffset(0x24)] public fixed byte m_nRenderHeight[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct EventClientPollNetworking_t {
        [FieldOffset(0x0)] public fixed byte m_nTickCount[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct EventServerBeginAsyncPostTickWork_t {
        [FieldOffset(0x0)] public fixed byte m_bIsOncePerFrameAsyncWorkPhase[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct EventClientProcessInput_t {
        [FieldOffset(0x0)] public fixed byte m_LoopState[0x28];
        [FieldOffset(0x28)] public fixed byte m_flRealTime[0x4];
        [FieldOffset(0x2C)] public fixed byte m_flTickInterval[0x4];
        [FieldOffset(0x30)] public fixed byte m_flTickStartTime[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct EventServerEndSimulate_t {
        [FieldOffset(0x0)] public fixed byte m_bLastTick[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct EventServerPollNetworking_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
    }
}