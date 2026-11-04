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

#pragma once
#include <cstddef>
#include <cstdint>

namespace cs2::engine2 {

enum class EntityDormancyType_t : std::int32_t {
    ENTITY_NOT_DORMANT = 0,
    ENTITY_DORMANT = 1,
    ENTITY_SUSPENDED = 2,
};

enum class EntityIOTargetType_t : std::int32_t {
    ENTITY_IO_TARGET_INVALID = 18446744073709551615,
    ENTITY_IO_TARGET_ENTITYNAME = 2,
    ENTITY_IO_TARGET_EHANDLE = 6,
    ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME = 7,
};

struct CEntityInstance {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_iszPrivateVScripts[0x8]; // 0x8 CUtlSymbolLarge
    std::uint8_t m_pEntity[0x18]; // 0x10 CEntityIdentity*
    std::uint8_t m_CScriptComponent[0x8]; // 0x28 CScriptComponent*
};

struct CEntityComponent {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct CScriptComponent {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_scriptClassName[0x8]; // 0x30 CUtlSymbolLarge
};

struct CEntityIdentity {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x14]; // 0x0
    std::uint8_t m_nameStringTableIndex[0x4]; // 0x14 int32
    std::uint8_t m_name[0x8]; // 0x18 CUtlSymbolLarge
    std::uint8_t m_designerName[0x10]; // 0x20 CUtlSymbolLarge
    std::uint8_t m_flags[0x8]; // 0x30 uint32
    std::uint8_t m_worldGroupId[0x4]; // 0x38 WorldGroupId_t
    std::uint8_t m_fDataObjectTypes[0x4]; // 0x3C uint32
    std::uint8_t m_PathIndex[0x8]; // 0x40 ChangeAccessorFieldPathIndex_t
    std::uint8_t m_pAttributes[0x8]; // 0x48 CEntityAttributeTable*
    std::uint8_t m_pPrev[0x8]; // 0x50 CEntityIdentity*
    std::uint8_t m_pNext[0x8]; // 0x58 CEntityIdentity*
    std::uint8_t m_pPrevByClass[0x8]; // 0x60 CEntityIdentity*
    std::uint8_t m_pNextByClass[0x8]; // 0x68 CEntityIdentity*
};

struct EventClientPostSimulate_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x30]; // 0x0
};

struct EventSimpleLoopFrameUpdate_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_LoopState[0x28]; // 0x0 EngineLoopState_t
    std::uint8_t m_flRealTime[0x4]; // 0x28 float32
    std::uint8_t m_flFrameTime[0x4]; // 0x2C float32
};

struct EventPostAdvanceTick_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_nCurrentTick[0x4]; // 0x30 int32
    std::uint8_t m_nCurrentTickThisFrame[0x4]; // 0x34 int32
    std::uint8_t m_nTotalTicksThisFrame[0x4]; // 0x38 int32
    std::uint8_t m_nTotalTicks[0x4]; // 0x3C int32
};

struct CEntityIOOutput {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x18]; // 0x0
};

struct EventClientSceneSystemThreadStateChange_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t m_bThreadsActive[0x1]; // 0x0 bool
};

struct EventClientOutput_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t m_LoopState[0x28]; // 0x0 EngineLoopState_t
    std::uint8_t m_flRenderTime[0x4]; // 0x28 float32
    std::uint8_t m_flRealTime[0x4]; // 0x2C float32
    std::uint8_t m_flRenderFrameTimeUnbounded[0x4]; // 0x30 float32
    std::uint8_t m_bRenderOnly[0x4]; // 0x34 bool
};

struct EventServerPostSimulate_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_bLastTickBeforeClientUpdate[0x8]; // 0x30 bool
};

struct CEntityComponentHelper {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_flags[0x8]; // 0x8 uint32
    std::uint8_t m_pInfo[0x8]; // 0x10 EntComponentInfo_t*
    std::uint8_t m_nPriority[0x8]; // 0x18 int32
    std::uint8_t m_pNext[0x8]; // 0x20 CEntityComponentHelper*
};

struct GameTime_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_Value[0x4]; // 0x0 float32
};

struct EventServerBeginSimulate_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x30]; // 0x0
};

struct EntityIOQueuePrioritizedEvent_t {
    static constexpr std::size_t size = 0xF8;
    std::uint8_t pad_0[0x4]; // 0x0
    std::uint8_t m_flFireTime[0x4]; // 0x4 GameTime_t
    std::uint8_t m_targetType[0x8]; // 0x8 EntityIOTargetType_t
    std::uint8_t m_pTarget[0x8]; // 0x10 CUtlSymbolLarge
    std::uint8_t m_pTargetInput[0x8]; // 0x18 CUtlSymbolLarge
    std::uint8_t m_hActivator[0x4]; // 0x20 CEntityHandle
    std::uint8_t m_hCaller[0x4]; // 0x24 CEntityHandle
    std::uint8_t m_hEntTarget[0x8]; // 0x28 CEntityHandle
    std::uint8_t m_variantValue[0x10]; // 0x30 CVariantBase<CVariantDefaultAllocator>
    std::uint8_t m_PulseArguments[0x90]; // 0x40 CPulseArgumentPack
    std::uint8_t m_paramMap[0x28]; // 0xD0 CPulseInputParamMap
};

struct EventServerEndAsyncPostTickWork_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct EventClientAdvanceTick_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x40]; // 0x0
};

struct CNetworkVarChainer {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x20]; // 0x0
    std::uint8_t m_PathIndex[0x8]; // 0x20 ChangeAccessorFieldPathIndex_t
};

struct EventClientSimulate_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x30]; // 0x0
};

struct EventClientPostOutput_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t m_LoopState[0x28]; // 0x0 EngineLoopState_t
    std::uint8_t m_flRenderTime[0x8]; // 0x28 float64
    std::uint8_t m_flRenderFrameTime[0x4]; // 0x30 float32
    std::uint8_t m_flRenderFrameTimeUnbounded[0x4]; // 0x34 float32
    std::uint8_t m_bRenderOnly[0x8]; // 0x38 bool
};

struct GameTick_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_Value[0x4]; // 0x0 int32
};

struct EventClientPollInput_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_LoopState[0x28]; // 0x0 EngineLoopState_t
    std::uint8_t m_flRealTime[0x8]; // 0x28 float32
};

struct EventPreDataUpdate_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_nCount[0x10]; // 0x0 int32
};

struct EventClientProcessGameInput_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_LoopState[0x28]; // 0x0 EngineLoopState_t
    std::uint8_t m_flRealTime[0x4]; // 0x28 float32
    std::uint8_t m_flFrameTime[0x4]; // 0x2C float32
};

struct EventFrameBoundary_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_flFrameTime[0x4]; // 0x0 float32
};

struct EventAppShutdown_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_nDummy0[0x4]; // 0x0 int32
};

struct EventServerPostAdvanceTick_t {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t m_bLastTickBeforeClientUpdate[0x8]; // 0x40 bool
};

struct EventProfileStorageAvailable_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_nSplitScreenSlot[0x4]; // 0x0 CSplitScreenSlot
};

struct EventPostDataUpdate_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_nCount[0x10]; // 0x0 int32
};

struct EventClientPreSimulate_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x30]; // 0x0
};

struct EventClientPauseSimulate_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x30]; // 0x0
};

struct EventClientProcessNetworking_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_nTickCount[0x4]; // 0x0 int32
};

struct CEntityAttributeTable {
    static constexpr std::size_t size = 0x50;
    std::uint8_t m_Attributes[0x28]; // 0x0 CUtlOrderedMap<CUtlStringTokenNoRegistration,Attribute_t>
    std::uint8_t m_Names[0x28]; // 0x28 CUtlOrderedMap<CUtlStringTokenNoRegistration,CUtlString>
};

struct EventClientPreOutputParallelWithServer_t {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct EventAdvanceTick_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t m_nCurrentTick[0x4]; // 0x30 int32
    std::uint8_t m_nCurrentTickThisFrame[0x4]; // 0x34 int32
    std::uint8_t m_nTotalTicksThisFrame[0x4]; // 0x38 int32
    std::uint8_t m_nTotalTicks[0x4]; // 0x3C int32
};

struct EventSplitScreenStateChanged_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct EventClientPostAdvanceTick_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x40]; // 0x0
};

struct EventBugBug_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x20]; // 0x0
};

struct CVariantDefaultAllocator {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct EventBugBugComplete_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_pPayload[0x8]; // 0x0 EventBugBug_t*
};

struct EventModInitialized_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct EventClientPreOutput_t {
    static constexpr std::size_t size = 0x48;
    std::uint8_t m_LoopState[0x28]; // 0x0 EngineLoopState_t
    std::uint8_t m_flRenderTime[0x8]; // 0x28 float64
    std::uint8_t m_flRenderFrameTime[0x8]; // 0x30 float64
    std::uint8_t m_flRenderFrameTimeUnbounded[0x8]; // 0x38 float64
    std::uint8_t m_flRealTime[0x4]; // 0x40 float32
    std::uint8_t m_bRenderOnly[0x4]; // 0x44 bool
};

struct EventClientFrameSimulate_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t m_LoopState[0x28]; // 0x0 EngineLoopState_t
    std::uint8_t m_flRealTime[0x4]; // 0x28 float32
    std::uint8_t m_flFrameTime[0x4]; // 0x2C float32
    std::uint8_t m_bScheduleSendTickPacket[0x8]; // 0x30 bool
};

struct EventServerAdvanceTick_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x40]; // 0x0
};

struct EventSetTime_t {
    static constexpr std::size_t size = 0x60;
    std::uint8_t m_LoopState[0x28]; // 0x0 EngineLoopState_t
    std::uint8_t m_nClientOutputFrames[0x8]; // 0x28 int32
    std::uint8_t m_flRealTime[0x8]; // 0x30 float64
    std::uint8_t m_flRenderTime[0x8]; // 0x38 float64
    std::uint8_t m_flRenderFrameTime[0x8]; // 0x40 float64
    std::uint8_t m_flRenderFrameTimeUnbounded[0x8]; // 0x48 float64
    std::uint8_t m_flRenderFrameTimeUnscaled[0x8]; // 0x50 float64
    std::uint8_t m_flTickRemainder[0x8]; // 0x58 float64
};

struct EventSimulate_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_LoopState[0x28]; // 0x0 EngineLoopState_t
    std::uint8_t m_bFirstTick[0x1]; // 0x28 bool
    std::uint8_t m_bLastTick[0x7]; // 0x29 bool
};

struct CEntityKeyValues {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x38]; // 0x0
};

struct EventClientAdvanceNonRenderedFrame_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct EventServerProcessNetworking_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x30]; // 0x0
};

struct CEmptyEntityInstance {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct EntComponentInfo_t {
    static constexpr std::size_t size = 0x60;
    std::uint8_t m_pName[0x8]; // 0x0 char*
    std::uint8_t m_pCPPClassname[0x8]; // 0x8 char*
    std::uint8_t m_pNetworkDataReferencedDescription[0x8]; // 0x10 char*
    std::uint8_t m_pNetworkDataReferencedPtrPropDescription[0x8]; // 0x18 char*
    std::uint8_t m_nRuntimeIndex[0x4]; // 0x20 int32
    std::uint8_t m_nFlags[0x34]; // 0x24 uint32
    std::uint8_t m_pBaseClassComponentHelper[0x8]; // 0x58 CEntityComponentHelper*
};

struct EngineLoopState_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t m_nPlatWindowWidth[0x4]; // 0x18 int32
    std::uint8_t m_nPlatWindowHeight[0x4]; // 0x1C int32
    std::uint8_t m_nRenderWidth[0x4]; // 0x20 int32
    std::uint8_t m_nRenderHeight[0x4]; // 0x24 int32
};

struct EventClientPollNetworking_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_nTickCount[0x4]; // 0x0 int32
};

struct EventServerBeginAsyncPostTickWork_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t m_bIsOncePerFrameAsyncWorkPhase[0x1]; // 0x0 bool
};

struct EventClientProcessInput_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t m_LoopState[0x28]; // 0x0 EngineLoopState_t
    std::uint8_t m_flRealTime[0x4]; // 0x28 float32
    std::uint8_t m_flTickInterval[0x4]; // 0x2C float32
    std::uint8_t m_flTickStartTime[0x8]; // 0x30 float64
};

struct EventServerEndSimulate_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t m_bLastTick[0x1]; // 0x0 bool
};

struct EventServerPollNetworking_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x30]; // 0x0
};

} // namespace