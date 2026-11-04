/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Total Offsets   : 202
/*  Dumped At       : 22:59 04/11/2026 (GMT)
/*  Dumped In       : 1,7s
*/

/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

#pragma once
#include <cstddef>
#include <cstdint>

namespace cs2::engine2_dll {

enum class EntityDormancyType_t : std::int32_t {
    ENTITY_NOT_DORMANT = 0,
    ENTITY_DORMANT = 1,
    ENTITY_SUSPENDED = 2,
};

enum class EntityIOTargetType_t : std::int32_t {
    ENTITY_IO_TARGET_INVALID = -1,
    ENTITY_IO_TARGET_ENTITYNAME = 2,
    ENTITY_IO_TARGET_EHANDLE = 6,
    ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME = 7,
};

struct CEntityInstance {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x8]; // 0x28 
};

struct CEntityComponent {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct CScriptComponent {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x8]; // 0x30 
};

struct CEntityIdentity {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x14]; // 0x0
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x10]; // 0x20 
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x8]; // 0x40 
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x8]; // 0x50 
    std::uint8_t _[0x8]; // 0x58 
    std::uint8_t _[0x8]; // 0x60 
    std::uint8_t _[0x8]; // 0x68 
};

struct EventClientPostSimulate_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x30]; // 0x0
};

struct EventSimpleLoopFrameUpdate_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x28]; // 0x0 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
};

struct EventPostAdvanceTick_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
};

struct CEntityIOOutput {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x18]; // 0x0
};

struct EventClientSceneSystemThreadStateChange_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t _[0x1]; // 0x0 
};

struct EventClientOutput_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t _[0x28]; // 0x0 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
};

struct EventServerPostSimulate_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x8]; // 0x30 
};

struct CEntityComponentHelper {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
};

struct GameTime_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct EventServerBeginSimulate_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x30]; // 0x0
};

struct EntityIOQueuePrioritizedEvent_t {
    static constexpr std::size_t size = 0xf8;
    std::uint8_t pad_0[0x4]; // 0x0
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x10]; // 0x30 
    std::uint8_t _[0x90]; // 0x40 
    std::uint8_t _[0x28]; // 0xd0 
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
    std::uint8_t _[0x8]; // 0x20 
};

struct EventClientSimulate_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x30]; // 0x0
};

struct EventClientPostOutput_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t _[0x28]; // 0x0 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x8]; // 0x38 
};

struct GameTick_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct EventClientPollInput_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x28]; // 0x0 
    std::uint8_t _[0x8]; // 0x28 
};

struct EventPreDataUpdate_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x10]; // 0x0 
};

struct EventClientProcessGameInput_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x28]; // 0x0 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
};

struct EventFrameBoundary_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct EventAppShutdown_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct EventServerPostAdvanceTick_t {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t _[0x8]; // 0x40 
};

struct EventProfileStorageAvailable_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct EventPostDataUpdate_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x10]; // 0x0 
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
    std::uint8_t _[0x4]; // 0x0 
};

struct CEntityAttributeTable {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x28]; // 0x0 
    std::uint8_t _[0x28]; // 0x28 
};

struct EventClientPreOutputParallelWithServer_t {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct EventAdvanceTick_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
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
    std::uint8_t _[0x8]; // 0x0 
};

struct EventModInitialized_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct EventClientPreOutput_t {
    static constexpr std::size_t size = 0x48;
    std::uint8_t _[0x28]; // 0x0 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x8]; // 0x38 
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x4]; // 0x44 
};

struct EventClientFrameSimulate_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t _[0x28]; // 0x0 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x8]; // 0x30 
};

struct EventServerAdvanceTick_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x40]; // 0x0
};

struct EventSetTime_t {
    static constexpr std::size_t size = 0x60;
    std::uint8_t _[0x28]; // 0x0 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x8]; // 0x38 
    std::uint8_t _[0x8]; // 0x40 
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x8]; // 0x50 
    std::uint8_t _[0x8]; // 0x58 
};

struct EventSimulate_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x28]; // 0x0 
    std::uint8_t _[0x1]; // 0x28 
    std::uint8_t _[0x7]; // 0x29 
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
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x34]; // 0x24 
    std::uint8_t _[0x8]; // 0x58 
};

struct EngineLoopState_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
};

struct EventClientPollNetworking_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct EventServerBeginAsyncPostTickWork_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t _[0x1]; // 0x0 
};

struct EventClientProcessInput_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t _[0x28]; // 0x0 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x8]; // 0x30 
};

struct EventServerEndSimulate_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t _[0x1]; // 0x0 
};

struct EventServerPollNetworking_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x30]; // 0x0
};

} // namespace