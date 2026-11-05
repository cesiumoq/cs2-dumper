/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Total Offsets   : 202
/*  Dumped At       : 14:40 05/11/2026 (GMT)
/*  Dumped In       : 1,2s
*/

/* cesium dumper | generated from live schema */
using System;
using System.Runtime.InteropServices;

namespace Cs2.engine2_dll {

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CEntityInstance {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CEntityComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CScriptComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CEntityIdentity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x14];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x10];
        [FieldOffset(0x30)] public fixed byte _[0x8];
        [FieldOffset(0x38)] public fixed byte _[0x4];
        [FieldOffset(0x3c)] public fixed byte _[0x4];
        [FieldOffset(0x40)] public fixed byte _[0x8];
        [FieldOffset(0x48)] public fixed byte _[0x8];
        [FieldOffset(0x50)] public fixed byte _[0x8];
        [FieldOffset(0x58)] public fixed byte _[0x8];
        [FieldOffset(0x60)] public fixed byte _[0x8];
        [FieldOffset(0x68)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct EventClientPostSimulate_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct EventSimpleLoopFrameUpdate_t {
        [FieldOffset(0x0)] public fixed byte _[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct EventPostAdvanceTick_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte _[0x4];
        [FieldOffset(0x34)] public fixed byte _[0x4];
        [FieldOffset(0x38)] public fixed byte _[0x4];
        [FieldOffset(0x3c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CEntityIOOutput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct EventClientSceneSystemThreadStateChange_t {
        [FieldOffset(0x0)] public fixed byte _[0x1];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct EventClientOutput_t {
        [FieldOffset(0x0)] public fixed byte _[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
        [FieldOffset(0x30)] public fixed byte _[0x4];
        [FieldOffset(0x34)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct EventServerPostSimulate_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CEntityComponentHelper {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct GameTime_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct EventServerBeginSimulate_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xf8)]
    public unsafe struct EntityIOQueuePrioritizedEvent_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
        [FieldOffset(0x28)] public fixed byte _[0x8];
        [FieldOffset(0x30)] public fixed byte _[0x10];
        [FieldOffset(0x40)] public fixed byte _[0x90];
        [FieldOffset(0xd0)] public fixed byte _[0x28];
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
        [FieldOffset(0x20)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct EventClientSimulate_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct EventClientPostOutput_t {
        [FieldOffset(0x0)] public fixed byte _[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x8];
        [FieldOffset(0x30)] public fixed byte _[0x4];
        [FieldOffset(0x34)] public fixed byte _[0x4];
        [FieldOffset(0x38)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct GameTick_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct EventClientPollInput_t {
        [FieldOffset(0x0)] public fixed byte _[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct EventPreDataUpdate_t {
        [FieldOffset(0x0)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct EventClientProcessGameInput_t {
        [FieldOffset(0x0)] public fixed byte _[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct EventFrameBoundary_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct EventAppShutdown_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct EventServerPostAdvanceTick_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
        [FieldOffset(0x40)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct EventProfileStorageAvailable_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct EventPostDataUpdate_t {
        [FieldOffset(0x0)] public fixed byte _[0x10];
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
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CEntityAttributeTable {
        [FieldOffset(0x0)] public fixed byte _[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x28];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct EventClientPreOutputParallelWithServer_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct EventAdvanceTick_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte _[0x4];
        [FieldOffset(0x34)] public fixed byte _[0x4];
        [FieldOffset(0x38)] public fixed byte _[0x4];
        [FieldOffset(0x3c)] public fixed byte _[0x4];
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
        [FieldOffset(0x0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct EventModInitialized_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct EventClientPreOutput_t {
        [FieldOffset(0x0)] public fixed byte _[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x8];
        [FieldOffset(0x30)] public fixed byte _[0x8];
        [FieldOffset(0x38)] public fixed byte _[0x8];
        [FieldOffset(0x40)] public fixed byte _[0x4];
        [FieldOffset(0x44)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct EventClientFrameSimulate_t {
        [FieldOffset(0x0)] public fixed byte _[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
        [FieldOffset(0x30)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct EventServerAdvanceTick_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct EventSetTime_t {
        [FieldOffset(0x0)] public fixed byte _[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x8];
        [FieldOffset(0x30)] public fixed byte _[0x8];
        [FieldOffset(0x38)] public fixed byte _[0x8];
        [FieldOffset(0x40)] public fixed byte _[0x8];
        [FieldOffset(0x48)] public fixed byte _[0x8];
        [FieldOffset(0x50)] public fixed byte _[0x8];
        [FieldOffset(0x58)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct EventSimulate_t {
        [FieldOffset(0x0)] public fixed byte _[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x1];
        [FieldOffset(0x29)] public fixed byte _[0x7];
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
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x34];
        [FieldOffset(0x58)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct EngineLoopState_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct EventClientPollNetworking_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct EventServerBeginAsyncPostTickWork_t {
        [FieldOffset(0x0)] public fixed byte _[0x1];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct EventClientProcessInput_t {
        [FieldOffset(0x0)] public fixed byte _[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
        [FieldOffset(0x30)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct EventServerEndSimulate_t {
        [FieldOffset(0x0)] public fixed byte _[0x1];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct EventServerPollNetworking_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
    }

}