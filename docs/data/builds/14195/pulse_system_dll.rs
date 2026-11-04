/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

#![allow(non_snake_case, non_camel_case_types, dead_code)]

pub mod pulse_system {

    pub type PulseBestOutflowRules_t = i32;
    pub type PulseTestEnumFlags_t = i32;
    pub type PulseTestEnumShape_t = i32;
    pub type PulseCursorCancelPriority_t = i32;
    pub type PulseTestEnumFlagsAlt_t = i32;
    pub type PulseMethodCallMode_t = i32;
    pub type PulseTestEnumColor_t = i32;
    pub type PulseCursorWakePriority_t = i32;
    #[repr(C)]
    pub struct CPulseCell_Step_TestDomainDestroyFakeEntity {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_WaitForCursorsWithTag {
        pub pad_0: [u8; 0x128], // 0x0
        pub m_bTagSelfWhenComplete: [u8; 0x4], // 0x128
        pub m_nDesiredKillPriority: [u8; 0x4], // 0x12C
    }
    #[repr(C)]
    pub struct CPulseCell_RaceCursors {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_Outflows: [u8; 0x18], // 0xD8
        pub m_OnFinished: [u8; 0x48], // 0xF0
    }
    #[repr(C)]
    pub struct CPulseCell_Test_NoInflow {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CPulseGraphInstance_TestDomain_FakeEntityOwner {
        pub pad_0: [u8; 0x88], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_Base {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_nEditorNodeID: [u8; 0x40], // 0x8
    }
    #[repr(C)]
    pub struct CPulse_ResumePoint {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CTestDomainDerived_Cursor {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_nCursorValueA: [u8; 0x4], // 0xD8
        pub m_nCursorValueB: [u8; 0x4], // 0xDC
    }
    #[repr(C)]
    pub struct CPulseCell_PickBestOutflowSelector {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_nCheckType: [u8; 0x8], // 0x48
        pub m_OutflowList: [u8; 0x18], // 0x50
    }
    #[repr(C)]
    pub struct CPulseCell_WaitForObservable {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_Condition: [u8; 0x90], // 0xD8
        pub m_OnTrue: [u8; 0x48], // 0x168
    }
    #[repr(C)]
    pub struct CPulse_OutflowConnection {
        pub m_SourceOutflowName: [u8; 0x10], // 0x0
        pub m_nDestChunk: [u8; 0x4], // 0x10
        pub m_nInstruction: [u8; 0x4], // 0x14
        pub m_OutflowRegisterMap: [u8; 0x30], // 0x18
    }
    #[repr(C)]
    pub struct CPulseGraphDef {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_DomainIdentifier: [u8; 0x10], // 0x8
        pub m_DomainSubType: [u8; 0x18], // 0x18
        pub m_ParentMapName: [u8; 0x10], // 0x30
        pub m_ParentXmlName: [u8; 0x10], // 0x40
        pub m_Chunks: [u8; 0x18], // 0x50
        pub m_Cells: [u8; 0x18], // 0x68
        pub m_Vars: [u8; 0x18], // 0x80
        pub m_TempVarBanks: [u8; 0x18], // 0x98
        pub m_PublicOutputs: [u8; 0x18], // 0xB0
        pub m_InvokeBindings: [u8; 0x18], // 0xC8
        pub m_CallInfos: [u8; 0x18], // 0xE0
        pub m_Constants: [u8; 0x18], // 0xF8
        pub m_DomainValues: [u8; 0x18], // 0x110
        pub m_BlackboardReferences: [u8; 0x18], // 0x128
        pub m_OutputConnections: [u8; 0x80], // 0x140
    }
    #[repr(C)]
    pub struct CPulseCell_TestYieldForever {
        pub pad_0: [u8; 0xD8], // 0x0
    }
    #[repr(C)]
    pub struct CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView {
        pub pad_0: [u8; 0xD0], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_TestWaitWithCursorState__InstanceState_t {
        pub m_nDummy: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_FireCursors {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_Outflows: [u8; 0x18], // 0xD8
        pub m_bWaitForChildOutflows: [u8; 0x8], // 0xF0
        pub m_OnFinished: [u8; 0x48], // 0xF8
    }
    #[repr(C)]
    pub struct CPulseCell_Timeline__TimelineEvent_t {
        pub m_flTimeFromPrevious: [u8; 0x8], // 0x0
        pub m_EventOutflow: [u8; 0x48], // 0x8
    }
    #[repr(C)]
    pub struct CPulseCell_IntervalTimer__CursorState_t {
        pub m_StartTime: [u8; 0x4], // 0x0
        pub m_EndTime: [u8; 0x4], // 0x4
        pub m_flWaitInterval: [u8; 0x4], // 0x8
        pub m_flWaitIntervalHigh: [u8; 0x4], // 0xC
        pub m_bCompleteOnNextWake: [u8; 0x4], // 0x10
    }
    #[repr(C)]
    pub struct CPulseCell_BaseRequirement {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_BaseState {
        pub pad_0: [u8; 0xD8], // 0x0
    }
    #[repr(C)]
    pub struct OutflowWithRequirements_t {
        pub m_Connection: [u8; 0x48], // 0x0
        pub m_DestinationFlowNodeID: [u8; 0x8], // 0x48
        pub m_RequirementNodeIDs: [u8; 0x18], // 0x50
        pub m_nCursorStateBlockIndex: [u8; 0x18], // 0x68
    }
    #[repr(C)]
    pub struct CPulseCell_IsRequirementValid {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_Value_Gradient {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_Gradient: [u8; 0x18], // 0x48
    }
    #[repr(C)]
    pub struct CPulseCell_TestWaitWithAutoTracepoints {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_TracePrefix: [u8; 0x8], // 0xD8
        pub m_WakeResume: [u8; 0x48], // 0xE0
    }
    #[repr(C)]
    pub struct PulseNodeDynamicOutflows_t__DynamicOutflow_t {
        pub m_OutflowID: [u8; 0x8], // 0x0
        pub m_Connection: [u8; 0x48], // 0x8
    }
    #[repr(C)]
    pub struct CPulseCell_Test_MultiOutflow_WithParams {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_Out1: [u8; 0x48], // 0x48
        pub m_Out2: [u8; 0x48], // 0x90
    }
    #[repr(C)]
    pub struct CBasePulseGraphInstance {
        pub pad_0: [u8; 0x88], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_Inflow_GraphHook {
        pub pad_0: [u8; 0x80], // 0x0
        pub m_HookName: [u8; 0x10], // 0x80
    }
    #[repr(C)]
    pub struct SignatureOutflow_Resume {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t {
        pub nTestStep: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CPulseTurtleGraphicsCursor {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_Color: [u8; 0x4], // 0xD8
        pub m_vPos: [u8; 0x8], // 0xDC
        pub m_flHeadingDeg: [u8; 0x4], // 0xE4
        pub m_bPenUp: [u8; 0x8], // 0xE8
    }
    #[repr(C)]
    pub struct CPulseCell_TestWaitWithCursorState__CursorState_t {
        pub flWaitValue: [u8; 0x4], // 0x0
        pub bFail: [u8; 0x4], // 0x4
        pub m_hSelfCursor: [u8; 0xC], // 0x8
        pub m_hSelfCellInstanceUntyped: [u8; 0x8], // 0x14
        pub m_hSelfCellInstance: [u8; 0x8], // 0x1C
    }
    #[repr(C)]
    pub struct CPulseCell_Inflow_BaseEntrypoint {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_EntryChunk: [u8; 0x8], // 0x48
        pub m_RegisterMap: [u8; 0x30], // 0x50
    }
    #[repr(C)]
    pub struct CPulseCell_Test_MultiInflow_NoDefault {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_WaitForCursorsWithTagBase {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_nCursorsAllowedToWait: [u8; 0x8], // 0xD8
        pub m_WaitComplete: [u8; 0x48], // 0xE0
    }
    #[repr(C)]
    pub struct CPulse_InvokeBinding {
        pub m_RegisterMap: [u8; 0x30], // 0x0
        pub m_FuncName: [u8; 0x10], // 0x30
        pub m_nCellIndex: [u8; 0x4], // 0x40
        pub m_nSrcChunk: [u8; 0x4], // 0x44
        pub m_nSrcInstruction: [u8; 0x68], // 0x48
    }
    #[repr(C)]
    pub struct CPulseCell_IntervalTimer {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_Completed: [u8; 0x48], // 0xD8
        pub m_OnInterval: [u8; 0x48], // 0x120
    }
    #[repr(C)]
    pub struct CPulseCell_BaseLerp {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_WakeResume: [u8; 0x48], // 0xD8
    }
    #[repr(C)]
    pub struct CPulseCell_Value_TestValue50 {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_Test_MultiOutflow_WithParams_Yielding {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_Out1: [u8; 0x48], // 0xD8
        pub m_AsyncChild1: [u8; 0x48], // 0x120
        pub m_AsyncChild2: [u8; 0x48], // 0x168
        pub m_YieldResume1: [u8; 0x48], // 0x1B0
        pub m_YieldResume2: [u8; 0x48], // 0x1F8
    }
    #[repr(C)]
    pub struct CPulseCell_Value_Curve {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_Curve: [u8; 0x40], // 0x48
    }
    #[repr(C)]
    pub struct CPulseCell_Inflow_EventHandler {
        pub pad_0: [u8; 0x80], // 0x0
        pub m_EventName: [u8; 0x10], // 0x80
    }
    #[repr(C)]
    pub struct CPulseCell_BaseFlow {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_Step_TestDomainTracepoint {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_Outflow_CycleShuffled__InstanceState_t {
        pub m_Shuffle: [u8; 0x20], // 0x0
        pub m_nNextShuffle: [u8; 0x8], // 0x20
    }
    #[repr(C)]
    pub struct CPulseCell_BaseLerp__CursorState_t {
        pub m_StartTime: [u8; 0x4], // 0x0
        pub m_EndTime: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct CPulseGraphInstance_TestDomain_Derived {
        pub pad_0: [u8; 0xD0], // 0x0
        pub m_nInstanceValueX: [u8; 0x8], // 0xD0
    }
    #[repr(C)]
    pub struct CPulseGraphInstance_TestDomain {
        pub pad_0: [u8; 0xA0], // 0x0
        pub m_bIsRunningUnitTests: [u8; 0x1], // 0xA0
        pub m_bExplicitTimeStepping: [u8; 0x1], // 0xA1
        pub m_bExpectingToDestroyWithYieldedCursors: [u8; 0x1], // 0xA2
        pub m_bQuietTracepoints: [u8; 0x1], // 0xA3
        pub m_bExpectingCursorTerminatedDueToMaxInstructions: [u8; 0x4], // 0xA4
        pub m_nCursorsTerminatedDueToMaxInstructions: [u8; 0x4], // 0xA8
        pub m_nNextValidateIndex: [u8; 0x4], // 0xAC
        pub m_Tracepoints: [u8; 0x18], // 0xB0
        pub m_bTestYesOrNoPath: [u8; 0x8], // 0xC8
    }
    #[repr(C)]
    pub struct SignatureOutflow_Continue {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_Timeline {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_TimelineEvents: [u8; 0x18], // 0xD8
        pub m_bWaitForChildOutflows: [u8; 0x8], // 0xF0
        pub m_OnFinished: [u8; 0x48], // 0xF8
    }
    #[repr(C)]
    pub struct CPulseCell_Inflow_EntOutputHandler {
        pub pad_0: [u8; 0x80], // 0x0
        pub m_SourceEntity: [u8; 0x10], // 0x80
        pub m_SourceOutput: [u8; 0x10], // 0x90
        pub m_ExpectedParamType: [u8; 0x18], // 0xA0
    }
    #[repr(C)]
    pub struct CPulseCell_Outflow_TestExplicitYesNo {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_Yes: [u8; 0x48], // 0x48
        pub m_No: [u8; 0x48], // 0x90
    }
    #[repr(C)]
    pub struct CPulseCell_Outflow_TestRandomYesNo {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_Yes: [u8; 0x48], // 0x48
        pub m_No: [u8; 0x48], // 0x90
    }
    #[repr(C)]
    pub struct CPulseCell_Outflow_CycleOrdered__InstanceState_t {
        pub m_nNextIndex: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_LimitCount__InstanceState_t {
        pub m_nCurrentCount: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_Test_MultiInflow_WithDefault {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_Step_DebugLog {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_BaseYieldingInflow {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_BaseFlow_OnAfterCancel: [u8; 0x48], // 0x48
        pub m_BaseFlow_WhileActive: [u8; 0x48], // 0x90
    }
    #[repr(C)]
    pub struct PulseNodeDynamicOutflows_t {
        pub m_Outflows: [u8; 0x18], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_IsRequirementValid__Criteria_t {
        pub m_bIsValid: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_Inflow_ObservableVariableListener {
        pub pad_0: [u8; 0x80], // 0x0
        pub m_nBlackboardReference: [u8; 0x2], // 0x80
        pub m_bSelfReference: [u8; 0x6], // 0x82
    }
    #[repr(C)]
    pub struct CPulseCell_Outflow_CycleOrdered {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_Outputs: [u8; 0x18], // 0x48
    }
    #[repr(C)]
    pub struct PulseSelectorOutflowList_t {
        pub m_Outflows: [u8; 0x18], // 0x0
    }
    #[repr(C)]
    pub struct CPulseGraphInstance_TurtleGraphics {
        pub pad_0: [u8; 0xB0], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_Val_TestDomainGetEntityName {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_Inflow_Wait {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_WakeResume: [u8; 0x48], // 0xD8
    }
    #[repr(C)]
    pub struct CPulseCell_TestWaitWithCursorState {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_WakeResume: [u8; 0x48], // 0xD8
        pub m_WakeFail: [u8; 0x48], // 0x120
    }
    #[repr(C)]
    pub struct CPulseCell_Outflow_CycleShuffled {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_Outputs: [u8; 0x18], // 0x48
    }
    #[repr(C)]
    pub struct CPulseCell_Inflow_Method {
        pub pad_0: [u8; 0x80], // 0x0
        pub m_MethodName: [u8; 0x10], // 0x80
        pub m_Description: [u8; 0x8], // 0x90
        pub m_bIsPublic: [u8; 0x8], // 0x98
        pub m_Args: [u8; 0x10], // 0xA0
        pub m_ReturnValues: [u8; 0x10], // 0xB0
    }
    #[repr(C)]
    pub struct CPulseCell_BaseValue {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_BooleanSwitchState {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_Condition: [u8; 0x90], // 0xD8
        pub m_WhenTrue: [u8; 0x48], // 0x168
        pub m_WhenFalse: [u8; 0x48], // 0x1B0
    }
    #[repr(C)]
    pub struct CPulseCell_Inflow_Yield {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_UnyieldResume: [u8; 0x48], // 0xD8
    }
    #[repr(C)]
    pub struct CPulseCell_Unknown {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_UnknownKeys: [u8; 0x10], // 0x48
    }
    #[repr(C)]
    pub struct CPulseCell_Outflow_CycleRandom {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_Outputs: [u8; 0x18], // 0x48
    }
    #[repr(C)]
    pub struct CPulseCell_Step_PublicOutput {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_OutputIndex: [u8; 0x8], // 0x48
    }
    #[repr(C)]
    pub struct CPulseCell_Val_TestDomainFindEntityByName {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CPulse_BlackboardReference {
        pub m_hBlackboardResource: [u8; 0x8], // 0x0
        pub m_BlackboardResource: [u8; 0x10], // 0x8
        pub m_nNodeID: [u8; 0x8], // 0x18
        pub m_NodeName: [u8; 0x8], // 0x20
    }
    #[repr(C)]
    pub struct CPulseCell_ReturnValues {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_Value_RandomInt {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_TestEnums {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_nReferenceColor: [u8; 0x4], // 0x48
        pub m_nReferenceFlags: [u8; 0x4], // 0x4C
    }
    #[repr(C)]
    pub struct CPulseCell_Step_TestDomainEntFire {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_Input: [u8; 0x8], // 0x48
    }
    #[repr(C)]
    pub struct CPulseCell_ExampleSelector {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_OutflowList: [u8; 0x18], // 0x48
    }
    #[repr(C)]
    pub struct CPulse_CallInfo {
        pub m_PortName: [u8; 0x10], // 0x0
        pub m_nEditorNodeID: [u8; 0x8], // 0x10
        pub m_RegisterMap: [u8; 0x30], // 0x18
        pub m_CallMethodID: [u8; 0x4], // 0x48
        pub m_nSrcChunk: [u8; 0x4], // 0x4C
        pub m_nSrcInstruction: [u8; 0x4], // 0x50
        pub m_nBreakDestChunk: [u8; 0x4], // 0x54
        pub m_nBreakDestInstruction: [u8; 0x8], // 0x58
    }
    #[repr(C)]
    pub struct CPulseCell_InlineNodeSkipSelector {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_nFlowNodeID: [u8; 0x4], // 0x48
        pub m_bAnd: [u8; 0x4], // 0x4C
        pub m_PassOutflow: [u8; 0x18], // 0x50
        pub m_FailOutflow: [u8; 0x48], // 0x68
    }
    #[repr(C)]
    pub struct CPulseCell_ExampleCriteria__Criteria_t {
        pub m_flFloatValue1: [u8; 0x4], // 0x0
        pub m_flFloatValue2: [u8; 0x4], // 0x4
        pub m_bMyBool: [u8; 0x4], // 0x8
    }
    #[repr(C)]
    pub struct CPulseCell_ExampleCriteria {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_LimitCount {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_nLimitCount: [u8; 0x8], // 0x48
    }
    #[repr(C)]
    pub struct CPulseCell_Step_CallExternalMethod {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_MethodName: [u8; 0x10], // 0xD8
        pub m_nBlackboardIndex: [u8; 0x8], // 0xE8
        pub m_ExpectedArgs: [u8; 0x10], // 0xF0
        pub m_nAsyncCallMode: [u8; 0x8], // 0x100
        pub m_OnFinished: [u8; 0x48], // 0x108
    }
    #[repr(C)]
    pub struct CPulseCell_LimitCount__Criteria_t {
        pub m_bLimitCountPasses: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_Step_TestDomainCreateFakeEntity {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_TestYieldWithObservables {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_flWatchForFloatValue: [u8; 0x8], // 0xD8
        pub m_LiveFloatValue: [u8; 0x90], // 0xE0
        pub m_WatchForStringValue: [u8; 0x8], // 0x170
        pub m_LiveStringValue: [u8; 0x90], // 0x178
        pub m_WakeResume: [u8; 0x48], // 0x208
    }
    #[repr(C)]
    pub struct CPulseCell_CursorQueue {
        pub pad_0: [u8; 0x128], // 0x0
        pub m_nCursorsAllowedToRunParallel: [u8; 0x8], // 0x128
    }
    #[repr(C)]
    pub struct CPulseCell_Value_RandomFloat {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CPulseExecCursor {
        pub pad_0: [u8; 0xD8], // 0x0
    }
    #[repr(C)]
    pub struct TestComponent_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_ComponentData: [u8; 0x8], // 0x8
    }
}
