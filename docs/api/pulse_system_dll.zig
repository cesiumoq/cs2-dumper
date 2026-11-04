/* cesium dumper | generated from live schema */
pub const pulse_system_dll = struct {
    pub const CPulseCell_Step_TestDomainDestroyFakeEntity = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_WaitForCursorsWithTag = extern struct {
        pad_0: [0x128]u8, // 0x0
        _: [0x4]u8, // 0x128
        _: [0x4]u8, // 0x12c
    };
    pub const CPulseCell_RaceCursors = extern struct {
        pad_0: [0xd8]u8, // 0x0
        _: [0x18]u8, // 0xd8
        _: [0x48]u8, // 0xf0
    };
    pub const CPulseCell_Test_NoInflow = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseGraphInstance_TestDomain_FakeEntityOwner = extern struct {
        pad_0: [0x88]u8, // 0x0
    };
    pub const CPulseCell_Base = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x40]u8, // 0x8
    };
    pub const CPulse_ResumePoint = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CTestDomainDerived_Cursor = extern struct {
        pad_0: [0xd8]u8, // 0x0
        _: [0x4]u8, // 0xd8
        _: [0x4]u8, // 0xdc
    };
    pub const CPulseCell_PickBestOutflowSelector = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x8]u8, // 0x48
        _: [0x18]u8, // 0x50
    };
    pub const CPulseCell_WaitForObservable = extern struct {
        pad_0: [0xd8]u8, // 0x0
        _: [0x90]u8, // 0xd8
        _: [0x48]u8, // 0x168
    };
    pub const CPulse_OutflowConnection = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x30]u8, // 0x18
    };
    pub const CPulseGraphDef = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x10]u8, // 0x8
        _: [0x18]u8, // 0x18
        _: [0x10]u8, // 0x30
        _: [0x10]u8, // 0x40
        _: [0x18]u8, // 0x50
        _: [0x18]u8, // 0x68
        _: [0x18]u8, // 0x80
        _: [0x18]u8, // 0x98
        _: [0x18]u8, // 0xb0
        _: [0x18]u8, // 0xc8
        _: [0x18]u8, // 0xe0
        _: [0x18]u8, // 0xf8
        _: [0x18]u8, // 0x110
        _: [0x18]u8, // 0x128
        _: [0x80]u8, // 0x140
    };
    pub const CPulseCell_TestYieldForever = extern struct {
        pad_0: [0xd8]u8, // 0x0
    };
    pub const CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView = extern struct {
        pad_0: [0xd0]u8, // 0x0
    };
    pub const CPulseCell_TestWaitWithCursorState__InstanceState_t = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const CPulseCell_FireCursors = extern struct {
        pad_0: [0xd8]u8, // 0x0
        _: [0x18]u8, // 0xd8
        _: [0x8]u8, // 0xf0
        _: [0x48]u8, // 0xf8
    };
    pub const CPulseCell_Timeline__TimelineEvent_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x48]u8, // 0x8
    };
    pub const CPulseCell_IntervalTimer__CursorState_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
    };
    pub const CPulseCell_BaseRequirement = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_BaseState = extern struct {
        pad_0: [0xd8]u8, // 0x0
    };
    pub const OutflowWithRequirements_t = extern struct {
        _: [0x48]u8, // 0x0
        _: [0x8]u8, // 0x48
        _: [0x18]u8, // 0x50
        _: [0x18]u8, // 0x68
    };
    pub const CPulseCell_IsRequirementValid = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_Value_Gradient = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x18]u8, // 0x48
    };
    pub const CPulseCell_TestWaitWithAutoTracepoints = extern struct {
        pad_0: [0xd8]u8, // 0x0
        _: [0x8]u8, // 0xd8
        _: [0x48]u8, // 0xe0
    };
    pub const PulseNodeDynamicOutflows_t__DynamicOutflow_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x48]u8, // 0x8
    };
    pub const CPulseCell_Test_MultiOutflow_WithParams = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x48]u8, // 0x48
        _: [0x48]u8, // 0x90
    };
    pub const CBasePulseGraphInstance = extern struct {
        pad_0: [0x88]u8, // 0x0
    };
    pub const CPulseCell_Inflow_GraphHook = extern struct {
        pad_0: [0x80]u8, // 0x0
        _: [0x10]u8, // 0x80
    };
    pub const SignatureOutflow_Resume = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const CPulseTurtleGraphicsCursor = extern struct {
        pad_0: [0xd8]u8, // 0x0
        _: [0x4]u8, // 0xd8
        _: [0x8]u8, // 0xdc
        _: [0x4]u8, // 0xe4
        _: [0x8]u8, // 0xe8
    };
    pub const CPulseCell_TestWaitWithCursorState__CursorState_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0xc]u8, // 0x8
        _: [0x8]u8, // 0x14
        _: [0x8]u8, // 0x1c
    };
    pub const CPulseCell_Inflow_BaseEntrypoint = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x8]u8, // 0x48
        _: [0x30]u8, // 0x50
    };
    pub const CPulseCell_Test_MultiInflow_NoDefault = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_WaitForCursorsWithTagBase = extern struct {
        pad_0: [0xd8]u8, // 0x0
        _: [0x8]u8, // 0xd8
        _: [0x48]u8, // 0xe0
    };
    pub const CPulse_InvokeBinding = extern struct {
        _: [0x30]u8, // 0x0
        _: [0x10]u8, // 0x30
        _: [0x4]u8, // 0x40
        _: [0x4]u8, // 0x44
        _: [0x68]u8, // 0x48
    };
    pub const CPulseCell_IntervalTimer = extern struct {
        pad_0: [0xd8]u8, // 0x0
        _: [0x48]u8, // 0xd8
        _: [0x48]u8, // 0x120
    };
    pub const CPulseCell_BaseLerp = extern struct {
        pad_0: [0xd8]u8, // 0x0
        _: [0x48]u8, // 0xd8
    };
    pub const CPulseCell_Value_TestValue50 = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_Test_MultiOutflow_WithParams_Yielding = extern struct {
        pad_0: [0xd8]u8, // 0x0
        _: [0x48]u8, // 0xd8
        _: [0x48]u8, // 0x120
        _: [0x48]u8, // 0x168
        _: [0x48]u8, // 0x1b0
        _: [0x48]u8, // 0x1f8
    };
    pub const CPulseCell_Value_Curve = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x40]u8, // 0x48
    };
    pub const CPulseCell_Inflow_EventHandler = extern struct {
        pad_0: [0x80]u8, // 0x0
        _: [0x10]u8, // 0x80
    };
    pub const CPulseCell_BaseFlow = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_Step_TestDomainTracepoint = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_Outflow_CycleShuffled__InstanceState_t = extern struct {
        _: [0x20]u8, // 0x0
        _: [0x8]u8, // 0x20
    };
    pub const CPulseCell_BaseLerp__CursorState_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
    };
    pub const CPulseGraphInstance_TestDomain_Derived = extern struct {
        pad_0: [0xd0]u8, // 0x0
        _: [0x8]u8, // 0xd0
    };
    pub const CPulseGraphInstance_TestDomain = extern struct {
        pad_0: [0xa0]u8, // 0x0
        _: [0x1]u8, // 0xa0
        _: [0x1]u8, // 0xa1
        _: [0x1]u8, // 0xa2
        _: [0x1]u8, // 0xa3
        _: [0x4]u8, // 0xa4
        _: [0x4]u8, // 0xa8
        _: [0x4]u8, // 0xac
        _: [0x18]u8, // 0xb0
        _: [0x8]u8, // 0xc8
    };
    pub const SignatureOutflow_Continue = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_Timeline = extern struct {
        pad_0: [0xd8]u8, // 0x0
        _: [0x18]u8, // 0xd8
        _: [0x8]u8, // 0xf0
        _: [0x48]u8, // 0xf8
    };
    pub const CPulseCell_Inflow_EntOutputHandler = extern struct {
        pad_0: [0x80]u8, // 0x0
        _: [0x10]u8, // 0x80
        _: [0x10]u8, // 0x90
        _: [0x18]u8, // 0xa0
    };
    pub const CPulseCell_Outflow_TestExplicitYesNo = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x48]u8, // 0x48
        _: [0x48]u8, // 0x90
    };
    pub const CPulseCell_Outflow_TestRandomYesNo = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x48]u8, // 0x48
        _: [0x48]u8, // 0x90
    };
    pub const CPulseCell_Outflow_CycleOrdered__InstanceState_t = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const CPulseCell_LimitCount__InstanceState_t = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const CPulseCell_Test_MultiInflow_WithDefault = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_Step_DebugLog = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_BaseYieldingInflow = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x48]u8, // 0x48
        _: [0x48]u8, // 0x90
    };
    pub const PulseNodeDynamicOutflows_t = extern struct {
        _: [0x18]u8, // 0x0
    };
    pub const CPulseCell_IsRequirementValid__Criteria_t = extern struct {
        _: [0x1]u8, // 0x0
    };
    pub const CPulseCell_Inflow_ObservableVariableListener = extern struct {
        pad_0: [0x80]u8, // 0x0
        _: [0x2]u8, // 0x80
        _: [0x6]u8, // 0x82
    };
    pub const CPulseCell_Outflow_CycleOrdered = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x18]u8, // 0x48
    };
    pub const PulseSelectorOutflowList_t = extern struct {
        _: [0x18]u8, // 0x0
    };
    pub const CPulseGraphInstance_TurtleGraphics = extern struct {
        pad_0: [0xb0]u8, // 0x0
    };
    pub const CPulseCell_Val_TestDomainGetEntityName = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_Inflow_Wait = extern struct {
        pad_0: [0xd8]u8, // 0x0
        _: [0x48]u8, // 0xd8
    };
    pub const CPulseCell_TestWaitWithCursorState = extern struct {
        pad_0: [0xd8]u8, // 0x0
        _: [0x48]u8, // 0xd8
        _: [0x48]u8, // 0x120
    };
    pub const CPulseCell_Outflow_CycleShuffled = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x18]u8, // 0x48
    };
    pub const CPulseCell_Inflow_Method = extern struct {
        pad_0: [0x80]u8, // 0x0
        _: [0x10]u8, // 0x80
        _: [0x8]u8, // 0x90
        _: [0x8]u8, // 0x98
        _: [0x10]u8, // 0xa0
        _: [0x10]u8, // 0xb0
    };
    pub const CPulseCell_BaseValue = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_BooleanSwitchState = extern struct {
        pad_0: [0xd8]u8, // 0x0
        _: [0x90]u8, // 0xd8
        _: [0x48]u8, // 0x168
        _: [0x48]u8, // 0x1b0
    };
    pub const CPulseCell_Inflow_Yield = extern struct {
        pad_0: [0xd8]u8, // 0x0
        _: [0x48]u8, // 0xd8
    };
    pub const CPulseCell_Unknown = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x10]u8, // 0x48
    };
    pub const CPulseCell_Outflow_CycleRandom = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x18]u8, // 0x48
    };
    pub const CPulseCell_Step_PublicOutput = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x8]u8, // 0x48
    };
    pub const CPulseCell_Val_TestDomainFindEntityByName = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulse_BlackboardReference = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x10]u8, // 0x8
        _: [0x8]u8, // 0x18
        _: [0x8]u8, // 0x20
    };
    pub const CPulseCell_ReturnValues = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_Value_RandomInt = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_TestEnums = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x4]u8, // 0x48
        _: [0x4]u8, // 0x4c
    };
    pub const CPulseCell_Step_TestDomainEntFire = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x8]u8, // 0x48
    };
    pub const CPulseCell_ExampleSelector = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x18]u8, // 0x48
    };
    pub const CPulse_CallInfo = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
        _: [0x30]u8, // 0x18
        _: [0x4]u8, // 0x48
        _: [0x4]u8, // 0x4c
        _: [0x4]u8, // 0x50
        _: [0x4]u8, // 0x54
        _: [0x8]u8, // 0x58
    };
    pub const CPulseCell_InlineNodeSkipSelector = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x4]u8, // 0x48
        _: [0x4]u8, // 0x4c
        _: [0x18]u8, // 0x50
        _: [0x48]u8, // 0x68
    };
    pub const CPulseCell_ExampleCriteria__Criteria_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
    };
    pub const CPulseCell_ExampleCriteria = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_LimitCount = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x8]u8, // 0x48
    };
    pub const CPulseCell_Step_CallExternalMethod = extern struct {
        pad_0: [0xd8]u8, // 0x0
        _: [0x10]u8, // 0xd8
        _: [0x8]u8, // 0xe8
        _: [0x10]u8, // 0xf0
        _: [0x8]u8, // 0x100
        _: [0x48]u8, // 0x108
    };
    pub const CPulseCell_LimitCount__Criteria_t = extern struct {
        _: [0x1]u8, // 0x0
    };
    pub const CPulseCell_Step_TestDomainCreateFakeEntity = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_TestYieldWithObservables = extern struct {
        pad_0: [0xd8]u8, // 0x0
        _: [0x8]u8, // 0xd8
        _: [0x90]u8, // 0xe0
        _: [0x8]u8, // 0x170
        _: [0x90]u8, // 0x178
        _: [0x48]u8, // 0x208
    };
    pub const CPulseCell_CursorQueue = extern struct {
        pad_0: [0x128]u8, // 0x0
        _: [0x8]u8, // 0x128
    };
    pub const CPulseCell_Value_RandomFloat = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseExecCursor = extern struct {
        pad_0: [0xd8]u8, // 0x0
    };
    pub const TestComponent_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
    };
};
