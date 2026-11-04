/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

pub const pulse_system = struct {

    pub const CPulseCell_Step_TestDomainDestroyFakeEntity = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_WaitForCursorsWithTag = extern struct {
        pad_0: [0x128]u8, // 0x0
        m_bTagSelfWhenComplete: [0x4]u8, // 0x128
        m_nDesiredKillPriority: [0x4]u8, // 0x12C
    };
    pub const CPulseCell_RaceCursors = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_Outflows: [0x18]u8, // 0xD8
        m_OnFinished: [0x48]u8, // 0xF0
    };
    pub const CPulseCell_Test_NoInflow = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseGraphInstance_TestDomain_FakeEntityOwner = extern struct {
        pad_0: [0x88]u8, // 0x0
    };
    pub const CPulseCell_Base = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_nEditorNodeID: [0x40]u8, // 0x8
    };
    pub const CPulse_ResumePoint = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CTestDomainDerived_Cursor = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_nCursorValueA: [0x4]u8, // 0xD8
        m_nCursorValueB: [0x4]u8, // 0xDC
    };
    pub const CPulseCell_PickBestOutflowSelector = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_nCheckType: [0x8]u8, // 0x48
        m_OutflowList: [0x18]u8, // 0x50
    };
    pub const CPulseCell_WaitForObservable = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_Condition: [0x90]u8, // 0xD8
        m_OnTrue: [0x48]u8, // 0x168
    };
    pub const CPulse_OutflowConnection = extern struct {
        m_SourceOutflowName: [0x10]u8, // 0x0
        m_nDestChunk: [0x4]u8, // 0x10
        m_nInstruction: [0x4]u8, // 0x14
        m_OutflowRegisterMap: [0x30]u8, // 0x18
    };
    pub const CPulseGraphDef = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_DomainIdentifier: [0x10]u8, // 0x8
        m_DomainSubType: [0x18]u8, // 0x18
        m_ParentMapName: [0x10]u8, // 0x30
        m_ParentXmlName: [0x10]u8, // 0x40
        m_Chunks: [0x18]u8, // 0x50
        m_Cells: [0x18]u8, // 0x68
        m_Vars: [0x18]u8, // 0x80
        m_TempVarBanks: [0x18]u8, // 0x98
        m_PublicOutputs: [0x18]u8, // 0xB0
        m_InvokeBindings: [0x18]u8, // 0xC8
        m_CallInfos: [0x18]u8, // 0xE0
        m_Constants: [0x18]u8, // 0xF8
        m_DomainValues: [0x18]u8, // 0x110
        m_BlackboardReferences: [0x18]u8, // 0x128
        m_OutputConnections: [0x80]u8, // 0x140
    };
    pub const CPulseCell_TestYieldForever = extern struct {
        pad_0: [0xD8]u8, // 0x0
    };
    pub const CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView = extern struct {
        pad_0: [0xD0]u8, // 0x0
    };
    pub const CPulseCell_TestWaitWithCursorState__InstanceState_t = extern struct {
        m_nDummy: [0x4]u8, // 0x0
    };
    pub const CPulseCell_FireCursors = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_Outflows: [0x18]u8, // 0xD8
        m_bWaitForChildOutflows: [0x8]u8, // 0xF0
        m_OnFinished: [0x48]u8, // 0xF8
    };
    pub const CPulseCell_Timeline__TimelineEvent_t = extern struct {
        m_flTimeFromPrevious: [0x8]u8, // 0x0
        m_EventOutflow: [0x48]u8, // 0x8
    };
    pub const CPulseCell_IntervalTimer__CursorState_t = extern struct {
        m_StartTime: [0x4]u8, // 0x0
        m_EndTime: [0x4]u8, // 0x4
        m_flWaitInterval: [0x4]u8, // 0x8
        m_flWaitIntervalHigh: [0x4]u8, // 0xC
        m_bCompleteOnNextWake: [0x4]u8, // 0x10
    };
    pub const CPulseCell_BaseRequirement = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_BaseState = extern struct {
        pad_0: [0xD8]u8, // 0x0
    };
    pub const OutflowWithRequirements_t = extern struct {
        m_Connection: [0x48]u8, // 0x0
        m_DestinationFlowNodeID: [0x8]u8, // 0x48
        m_RequirementNodeIDs: [0x18]u8, // 0x50
        m_nCursorStateBlockIndex: [0x18]u8, // 0x68
    };
    pub const CPulseCell_IsRequirementValid = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_Value_Gradient = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_Gradient: [0x18]u8, // 0x48
    };
    pub const CPulseCell_TestWaitWithAutoTracepoints = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_TracePrefix: [0x8]u8, // 0xD8
        m_WakeResume: [0x48]u8, // 0xE0
    };
    pub const PulseNodeDynamicOutflows_t__DynamicOutflow_t = extern struct {
        m_OutflowID: [0x8]u8, // 0x0
        m_Connection: [0x48]u8, // 0x8
    };
    pub const CPulseCell_Test_MultiOutflow_WithParams = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_Out1: [0x48]u8, // 0x48
        m_Out2: [0x48]u8, // 0x90
    };
    pub const CBasePulseGraphInstance = extern struct {
        pad_0: [0x88]u8, // 0x0
    };
    pub const CPulseCell_Inflow_GraphHook = extern struct {
        pad_0: [0x80]u8, // 0x0
        m_HookName: [0x10]u8, // 0x80
    };
    pub const SignatureOutflow_Resume = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t = extern struct {
        nTestStep: [0x4]u8, // 0x0
    };
    pub const CPulseTurtleGraphicsCursor = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_Color: [0x4]u8, // 0xD8
        m_vPos: [0x8]u8, // 0xDC
        m_flHeadingDeg: [0x4]u8, // 0xE4
        m_bPenUp: [0x8]u8, // 0xE8
    };
    pub const CPulseCell_TestWaitWithCursorState__CursorState_t = extern struct {
        flWaitValue: [0x4]u8, // 0x0
        bFail: [0x4]u8, // 0x4
        m_hSelfCursor: [0xC]u8, // 0x8
        m_hSelfCellInstanceUntyped: [0x8]u8, // 0x14
        m_hSelfCellInstance: [0x8]u8, // 0x1C
    };
    pub const CPulseCell_Inflow_BaseEntrypoint = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_EntryChunk: [0x8]u8, // 0x48
        m_RegisterMap: [0x30]u8, // 0x50
    };
    pub const CPulseCell_Test_MultiInflow_NoDefault = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_WaitForCursorsWithTagBase = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_nCursorsAllowedToWait: [0x8]u8, // 0xD8
        m_WaitComplete: [0x48]u8, // 0xE0
    };
    pub const CPulse_InvokeBinding = extern struct {
        m_RegisterMap: [0x30]u8, // 0x0
        m_FuncName: [0x10]u8, // 0x30
        m_nCellIndex: [0x4]u8, // 0x40
        m_nSrcChunk: [0x4]u8, // 0x44
        m_nSrcInstruction: [0x68]u8, // 0x48
    };
    pub const CPulseCell_IntervalTimer = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_Completed: [0x48]u8, // 0xD8
        m_OnInterval: [0x48]u8, // 0x120
    };
    pub const CPulseCell_BaseLerp = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_WakeResume: [0x48]u8, // 0xD8
    };
    pub const CPulseCell_Value_TestValue50 = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_Test_MultiOutflow_WithParams_Yielding = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_Out1: [0x48]u8, // 0xD8
        m_AsyncChild1: [0x48]u8, // 0x120
        m_AsyncChild2: [0x48]u8, // 0x168
        m_YieldResume1: [0x48]u8, // 0x1B0
        m_YieldResume2: [0x48]u8, // 0x1F8
    };
    pub const CPulseCell_Value_Curve = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_Curve: [0x40]u8, // 0x48
    };
    pub const CPulseCell_Inflow_EventHandler = extern struct {
        pad_0: [0x80]u8, // 0x0
        m_EventName: [0x10]u8, // 0x80
    };
    pub const CPulseCell_BaseFlow = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_Step_TestDomainTracepoint = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_Outflow_CycleShuffled__InstanceState_t = extern struct {
        m_Shuffle: [0x20]u8, // 0x0
        m_nNextShuffle: [0x8]u8, // 0x20
    };
    pub const CPulseCell_BaseLerp__CursorState_t = extern struct {
        m_StartTime: [0x4]u8, // 0x0
        m_EndTime: [0x4]u8, // 0x4
    };
    pub const CPulseGraphInstance_TestDomain_Derived = extern struct {
        pad_0: [0xD0]u8, // 0x0
        m_nInstanceValueX: [0x8]u8, // 0xD0
    };
    pub const CPulseGraphInstance_TestDomain = extern struct {
        pad_0: [0xA0]u8, // 0x0
        m_bIsRunningUnitTests: [0x1]u8, // 0xA0
        m_bExplicitTimeStepping: [0x1]u8, // 0xA1
        m_bExpectingToDestroyWithYieldedCursors: [0x1]u8, // 0xA2
        m_bQuietTracepoints: [0x1]u8, // 0xA3
        m_bExpectingCursorTerminatedDueToMaxInstructions: [0x4]u8, // 0xA4
        m_nCursorsTerminatedDueToMaxInstructions: [0x4]u8, // 0xA8
        m_nNextValidateIndex: [0x4]u8, // 0xAC
        m_Tracepoints: [0x18]u8, // 0xB0
        m_bTestYesOrNoPath: [0x8]u8, // 0xC8
    };
    pub const SignatureOutflow_Continue = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_Timeline = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_TimelineEvents: [0x18]u8, // 0xD8
        m_bWaitForChildOutflows: [0x8]u8, // 0xF0
        m_OnFinished: [0x48]u8, // 0xF8
    };
    pub const CPulseCell_Inflow_EntOutputHandler = extern struct {
        pad_0: [0x80]u8, // 0x0
        m_SourceEntity: [0x10]u8, // 0x80
        m_SourceOutput: [0x10]u8, // 0x90
        m_ExpectedParamType: [0x18]u8, // 0xA0
    };
    pub const CPulseCell_Outflow_TestExplicitYesNo = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_Yes: [0x48]u8, // 0x48
        m_No: [0x48]u8, // 0x90
    };
    pub const CPulseCell_Outflow_TestRandomYesNo = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_Yes: [0x48]u8, // 0x48
        m_No: [0x48]u8, // 0x90
    };
    pub const CPulseCell_Outflow_CycleOrdered__InstanceState_t = extern struct {
        m_nNextIndex: [0x4]u8, // 0x0
    };
    pub const CPulseCell_LimitCount__InstanceState_t = extern struct {
        m_nCurrentCount: [0x4]u8, // 0x0
    };
    pub const CPulseCell_Test_MultiInflow_WithDefault = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_Step_DebugLog = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_BaseYieldingInflow = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_BaseFlow_OnAfterCancel: [0x48]u8, // 0x48
        m_BaseFlow_WhileActive: [0x48]u8, // 0x90
    };
    pub const PulseNodeDynamicOutflows_t = extern struct {
        m_Outflows: [0x18]u8, // 0x0
    };
    pub const CPulseCell_IsRequirementValid__Criteria_t = extern struct {
        m_bIsValid: [0x1]u8, // 0x0
    };
    pub const CPulseCell_Inflow_ObservableVariableListener = extern struct {
        pad_0: [0x80]u8, // 0x0
        m_nBlackboardReference: [0x2]u8, // 0x80
        m_bSelfReference: [0x6]u8, // 0x82
    };
    pub const CPulseCell_Outflow_CycleOrdered = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_Outputs: [0x18]u8, // 0x48
    };
    pub const PulseSelectorOutflowList_t = extern struct {
        m_Outflows: [0x18]u8, // 0x0
    };
    pub const CPulseGraphInstance_TurtleGraphics = extern struct {
        pad_0: [0xB0]u8, // 0x0
    };
    pub const CPulseCell_Val_TestDomainGetEntityName = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_Inflow_Wait = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_WakeResume: [0x48]u8, // 0xD8
    };
    pub const CPulseCell_TestWaitWithCursorState = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_WakeResume: [0x48]u8, // 0xD8
        m_WakeFail: [0x48]u8, // 0x120
    };
    pub const CPulseCell_Outflow_CycleShuffled = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_Outputs: [0x18]u8, // 0x48
    };
    pub const CPulseCell_Inflow_Method = extern struct {
        pad_0: [0x80]u8, // 0x0
        m_MethodName: [0x10]u8, // 0x80
        m_Description: [0x8]u8, // 0x90
        m_bIsPublic: [0x8]u8, // 0x98
        m_Args: [0x10]u8, // 0xA0
        m_ReturnValues: [0x10]u8, // 0xB0
    };
    pub const CPulseCell_BaseValue = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_BooleanSwitchState = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_Condition: [0x90]u8, // 0xD8
        m_WhenTrue: [0x48]u8, // 0x168
        m_WhenFalse: [0x48]u8, // 0x1B0
    };
    pub const CPulseCell_Inflow_Yield = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_UnyieldResume: [0x48]u8, // 0xD8
    };
    pub const CPulseCell_Unknown = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_UnknownKeys: [0x10]u8, // 0x48
    };
    pub const CPulseCell_Outflow_CycleRandom = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_Outputs: [0x18]u8, // 0x48
    };
    pub const CPulseCell_Step_PublicOutput = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_OutputIndex: [0x8]u8, // 0x48
    };
    pub const CPulseCell_Val_TestDomainFindEntityByName = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulse_BlackboardReference = extern struct {
        m_hBlackboardResource: [0x8]u8, // 0x0
        m_BlackboardResource: [0x10]u8, // 0x8
        m_nNodeID: [0x8]u8, // 0x18
        m_NodeName: [0x8]u8, // 0x20
    };
    pub const CPulseCell_ReturnValues = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_Value_RandomInt = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_TestEnums = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_nReferenceColor: [0x4]u8, // 0x48
        m_nReferenceFlags: [0x4]u8, // 0x4C
    };
    pub const CPulseCell_Step_TestDomainEntFire = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_Input: [0x8]u8, // 0x48
    };
    pub const CPulseCell_ExampleSelector = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_OutflowList: [0x18]u8, // 0x48
    };
    pub const CPulse_CallInfo = extern struct {
        m_PortName: [0x10]u8, // 0x0
        m_nEditorNodeID: [0x8]u8, // 0x10
        m_RegisterMap: [0x30]u8, // 0x18
        m_CallMethodID: [0x4]u8, // 0x48
        m_nSrcChunk: [0x4]u8, // 0x4C
        m_nSrcInstruction: [0x4]u8, // 0x50
        m_nBreakDestChunk: [0x4]u8, // 0x54
        m_nBreakDestInstruction: [0x8]u8, // 0x58
    };
    pub const CPulseCell_InlineNodeSkipSelector = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_nFlowNodeID: [0x4]u8, // 0x48
        m_bAnd: [0x4]u8, // 0x4C
        m_PassOutflow: [0x18]u8, // 0x50
        m_FailOutflow: [0x48]u8, // 0x68
    };
    pub const CPulseCell_ExampleCriteria__Criteria_t = extern struct {
        m_flFloatValue1: [0x4]u8, // 0x0
        m_flFloatValue2: [0x4]u8, // 0x4
        m_bMyBool: [0x4]u8, // 0x8
    };
    pub const CPulseCell_ExampleCriteria = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_LimitCount = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_nLimitCount: [0x8]u8, // 0x48
    };
    pub const CPulseCell_Step_CallExternalMethod = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_MethodName: [0x10]u8, // 0xD8
        m_nBlackboardIndex: [0x8]u8, // 0xE8
        m_ExpectedArgs: [0x10]u8, // 0xF0
        m_nAsyncCallMode: [0x8]u8, // 0x100
        m_OnFinished: [0x48]u8, // 0x108
    };
    pub const CPulseCell_LimitCount__Criteria_t = extern struct {
        m_bLimitCountPasses: [0x1]u8, // 0x0
    };
    pub const CPulseCell_Step_TestDomainCreateFakeEntity = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_TestYieldWithObservables = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_flWatchForFloatValue: [0x8]u8, // 0xD8
        m_LiveFloatValue: [0x90]u8, // 0xE0
        m_WatchForStringValue: [0x8]u8, // 0x170
        m_LiveStringValue: [0x90]u8, // 0x178
        m_WakeResume: [0x48]u8, // 0x208
    };
    pub const CPulseCell_CursorQueue = extern struct {
        pad_0: [0x128]u8, // 0x0
        m_nCursorsAllowedToRunParallel: [0x8]u8, // 0x128
    };
    pub const CPulseCell_Value_RandomFloat = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseExecCursor = extern struct {
        pad_0: [0xD8]u8, // 0x0
    };
    pub const TestComponent_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_ComponentData: [0x8]u8, // 0x8
    };
};
