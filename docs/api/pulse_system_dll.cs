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

namespace Cs2.pulse_system {

    public enum PulseBestOutflowRules_t : int {
        SORT_BY_NUMBER_OF_VALID_CRITERIA = 0, 
        SORT_BY_OUTFLOW_INDEX = 1, 
    }
    public enum PulseTestEnumFlags_t : int {
        NONE = 0, 
        FIRST = 1, 
        SECOND = 2, 
        THIRD = 4, 
    }
    public enum PulseTestEnumShape_t : int {
        CIRCLE = 100, 
        SQUARE = 200, 
        TRIANGLE = 300, 
    }
    public enum PulseCursorCancelPriority_t : int {
        None = 0, 
        CancelOnSucceeded = 1, 
        SoftCancel = 2, 
        HardCancel = 3, 
    }
    public enum PulseTestEnumFlagsAlt_t : int {
        NONE = 0, 
        FIRST = 1, 
    }
    public enum PulseMethodCallMode_t : int {
        SYNC_WAIT_FOR_COMPLETION = 0, 
        ASYNC_FIRE_AND_FORGET = 1, 
    }
    public enum PulseTestEnumColor_t : int {
        BLACK = 0, 
        WHITE = 1, 
        RED = 2, 
        GREEN = 3, 
        BLUE = 4, 
    }
    public enum PulseCursorWakePriority_t : int {
        WakeElegantly = 0, 
        WakeImmediate = 1, 
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Step_TestDomainDestroyFakeEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x130)]
    public unsafe struct CPulseCell_WaitForCursorsWithTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x128];
        [FieldOffset(0x128)] public fixed byte m_bTagSelfWhenComplete[0x4];
        [FieldOffset(0x12C)] public fixed byte m_nDesiredKillPriority[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x138)]
    public unsafe struct CPulseCell_RaceCursors {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_Outflows[0x18];
        [FieldOffset(0xF0)] public fixed byte m_OnFinished[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Test_NoInflow {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CPulseGraphInstance_TestDomain_FakeEntityOwner {
        [FieldOffset(0x0)] public fixed byte pad_0[0x88];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Base {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_nEditorNodeID[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulse_ResumePoint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xE0)]
    public unsafe struct CTestDomainDerived_Cursor {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_nCursorValueA[0x4];
        [FieldOffset(0xDC)] public fixed byte m_nCursorValueB[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct CPulseCell_PickBestOutflowSelector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_nCheckType[0x8];
        [FieldOffset(0x50)] public fixed byte m_OutflowList[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1B0)]
    public unsafe struct CPulseCell_WaitForObservable {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_Condition[0x90];
        [FieldOffset(0x168)] public fixed byte m_OnTrue[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulse_OutflowConnection {
        [FieldOffset(0x0)] public fixed byte m_SourceOutflowName[0x10];
        [FieldOffset(0x10)] public fixed byte m_nDestChunk[0x4];
        [FieldOffset(0x14)] public fixed byte m_nInstruction[0x4];
        [FieldOffset(0x18)] public fixed byte m_OutflowRegisterMap[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1C0)]
    public unsafe struct CPulseGraphDef {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_DomainIdentifier[0x10];
        [FieldOffset(0x18)] public fixed byte m_DomainSubType[0x18];
        [FieldOffset(0x30)] public fixed byte m_ParentMapName[0x10];
        [FieldOffset(0x40)] public fixed byte m_ParentXmlName[0x10];
        [FieldOffset(0x50)] public fixed byte m_Chunks[0x18];
        [FieldOffset(0x68)] public fixed byte m_Cells[0x18];
        [FieldOffset(0x80)] public fixed byte m_Vars[0x18];
        [FieldOffset(0x98)] public fixed byte m_TempVarBanks[0x18];
        [FieldOffset(0xB0)] public fixed byte m_PublicOutputs[0x18];
        [FieldOffset(0xC8)] public fixed byte m_InvokeBindings[0x18];
        [FieldOffset(0xE0)] public fixed byte m_CallInfos[0x18];
        [FieldOffset(0xF8)] public fixed byte m_Constants[0x18];
        [FieldOffset(0x110)] public fixed byte m_DomainValues[0x18];
        [FieldOffset(0x128)] public fixed byte m_BlackboardReferences[0x18];
        [FieldOffset(0x140)] public fixed byte m_OutputConnections[0x80];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD8)]
    public unsafe struct CPulseCell_TestYieldForever {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD0)]
    public unsafe struct CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CPulseCell_TestWaitWithCursorState__InstanceState_t {
        [FieldOffset(0x0)] public fixed byte m_nDummy[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x140)]
    public unsafe struct CPulseCell_FireCursors {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_Outflows[0x18];
        [FieldOffset(0xF0)] public fixed byte m_bWaitForChildOutflows[0x8];
        [FieldOffset(0xF8)] public fixed byte m_OnFinished[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CPulseCell_Timeline__TimelineEvent_t {
        [FieldOffset(0x0)] public fixed byte m_flTimeFromPrevious[0x8];
        [FieldOffset(0x8)] public fixed byte m_EventOutflow[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct CPulseCell_IntervalTimer__CursorState_t {
        [FieldOffset(0x0)] public fixed byte m_StartTime[0x4];
        [FieldOffset(0x4)] public fixed byte m_EndTime[0x4];
        [FieldOffset(0x8)] public fixed byte m_flWaitInterval[0x4];
        [FieldOffset(0xC)] public fixed byte m_flWaitIntervalHigh[0x4];
        [FieldOffset(0x10)] public fixed byte m_bCompleteOnNextWake[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_BaseRequirement {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD8)]
    public unsafe struct CPulseCell_BaseState {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct OutflowWithRequirements_t {
        [FieldOffset(0x0)] public fixed byte m_Connection[0x48];
        [FieldOffset(0x48)] public fixed byte m_DestinationFlowNodeID[0x8];
        [FieldOffset(0x50)] public fixed byte m_RequirementNodeIDs[0x18];
        [FieldOffset(0x68)] public fixed byte m_nCursorStateBlockIndex[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_IsRequirementValid {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulseCell_Value_Gradient {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Gradient[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x128)]
    public unsafe struct CPulseCell_TestWaitWithAutoTracepoints {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_TracePrefix[0x8];
        [FieldOffset(0xE0)] public fixed byte m_WakeResume[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct PulseNodeDynamicOutflows_t__DynamicOutflow_t {
        [FieldOffset(0x0)] public fixed byte m_OutflowID[0x8];
        [FieldOffset(0x8)] public fixed byte m_Connection[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD8)]
    public unsafe struct CPulseCell_Test_MultiOutflow_WithParams {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Out1[0x48];
        [FieldOffset(0x90)] public fixed byte m_Out2[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CBasePulseGraphInstance {
        [FieldOffset(0x0)] public fixed byte pad_0[0x88];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CPulseCell_Inflow_GraphHook {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte m_HookName[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct SignatureOutflow_Resume {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t {
        [FieldOffset(0x0)] public fixed byte nTestStep[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xF0)]
    public unsafe struct CPulseTurtleGraphicsCursor {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_Color[0x4];
        [FieldOffset(0xDC)] public fixed byte m_vPos[0x8];
        [FieldOffset(0xE4)] public fixed byte m_flHeadingDeg[0x4];
        [FieldOffset(0xE8)] public fixed byte m_bPenUp[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x24)]
    public unsafe struct CPulseCell_TestWaitWithCursorState__CursorState_t {
        [FieldOffset(0x0)] public fixed byte flWaitValue[0x4];
        [FieldOffset(0x4)] public fixed byte bFail[0x4];
        [FieldOffset(0x8)] public fixed byte m_hSelfCursor[0xC];
        [FieldOffset(0x14)] public fixed byte m_hSelfCellInstanceUntyped[0x8];
        [FieldOffset(0x1C)] public fixed byte m_hSelfCellInstance[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CPulseCell_Inflow_BaseEntrypoint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_EntryChunk[0x8];
        [FieldOffset(0x50)] public fixed byte m_RegisterMap[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Test_MultiInflow_NoDefault {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x128)]
    public unsafe struct CPulseCell_WaitForCursorsWithTagBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_nCursorsAllowedToWait[0x8];
        [FieldOffset(0xE0)] public fixed byte m_WaitComplete[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CPulse_InvokeBinding {
        [FieldOffset(0x0)] public fixed byte m_RegisterMap[0x30];
        [FieldOffset(0x30)] public fixed byte m_FuncName[0x10];
        [FieldOffset(0x40)] public fixed byte m_nCellIndex[0x4];
        [FieldOffset(0x44)] public fixed byte m_nSrcChunk[0x4];
        [FieldOffset(0x48)] public fixed byte m_nSrcInstruction[0x68];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x168)]
    public unsafe struct CPulseCell_IntervalTimer {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_Completed[0x48];
        [FieldOffset(0x120)] public fixed byte m_OnInterval[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x120)]
    public unsafe struct CPulseCell_BaseLerp {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_WakeResume[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Value_TestValue50 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x240)]
    public unsafe struct CPulseCell_Test_MultiOutflow_WithParams_Yielding {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_Out1[0x48];
        [FieldOffset(0x120)] public fixed byte m_AsyncChild1[0x48];
        [FieldOffset(0x168)] public fixed byte m_AsyncChild2[0x48];
        [FieldOffset(0x1B0)] public fixed byte m_YieldResume1[0x48];
        [FieldOffset(0x1F8)] public fixed byte m_YieldResume2[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CPulseCell_Value_Curve {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Curve[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CPulseCell_Inflow_EventHandler {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte m_EventName[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_BaseFlow {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Step_TestDomainTracepoint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CPulseCell_Outflow_CycleShuffled__InstanceState_t {
        [FieldOffset(0x0)] public fixed byte m_Shuffle[0x20];
        [FieldOffset(0x20)] public fixed byte m_nNextShuffle[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CPulseCell_BaseLerp__CursorState_t {
        [FieldOffset(0x0)] public fixed byte m_StartTime[0x4];
        [FieldOffset(0x4)] public fixed byte m_EndTime[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD8)]
    public unsafe struct CPulseGraphInstance_TestDomain_Derived {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD0];
        [FieldOffset(0xD0)] public fixed byte m_nInstanceValueX[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD0)]
    public unsafe struct CPulseGraphInstance_TestDomain {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA0];
        [FieldOffset(0xA0)] public fixed byte m_bIsRunningUnitTests[0x1];
        [FieldOffset(0xA1)] public fixed byte m_bExplicitTimeStepping[0x1];
        [FieldOffset(0xA2)] public fixed byte m_bExpectingToDestroyWithYieldedCursors[0x1];
        [FieldOffset(0xA3)] public fixed byte m_bQuietTracepoints[0x1];
        [FieldOffset(0xA4)] public fixed byte m_bExpectingCursorTerminatedDueToMaxInstructions[0x4];
        [FieldOffset(0xA8)] public fixed byte m_nCursorsTerminatedDueToMaxInstructions[0x4];
        [FieldOffset(0xAC)] public fixed byte m_nNextValidateIndex[0x4];
        [FieldOffset(0xB0)] public fixed byte m_Tracepoints[0x18];
        [FieldOffset(0xC8)] public fixed byte m_bTestYesOrNoPath[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct SignatureOutflow_Continue {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x140)]
    public unsafe struct CPulseCell_Timeline {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_TimelineEvents[0x18];
        [FieldOffset(0xF0)] public fixed byte m_bWaitForChildOutflows[0x8];
        [FieldOffset(0xF8)] public fixed byte m_OnFinished[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB8)]
    public unsafe struct CPulseCell_Inflow_EntOutputHandler {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte m_SourceEntity[0x10];
        [FieldOffset(0x90)] public fixed byte m_SourceOutput[0x10];
        [FieldOffset(0xA0)] public fixed byte m_ExpectedParamType[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD8)]
    public unsafe struct CPulseCell_Outflow_TestExplicitYesNo {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Yes[0x48];
        [FieldOffset(0x90)] public fixed byte m_No[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD8)]
    public unsafe struct CPulseCell_Outflow_TestRandomYesNo {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Yes[0x48];
        [FieldOffset(0x90)] public fixed byte m_No[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CPulseCell_Outflow_CycleOrdered__InstanceState_t {
        [FieldOffset(0x0)] public fixed byte m_nNextIndex[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CPulseCell_LimitCount__InstanceState_t {
        [FieldOffset(0x0)] public fixed byte m_nCurrentCount[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Test_MultiInflow_WithDefault {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Step_DebugLog {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD8)]
    public unsafe struct CPulseCell_BaseYieldingInflow {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_BaseFlow_OnAfterCancel[0x48];
        [FieldOffset(0x90)] public fixed byte m_BaseFlow_WhileActive[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct PulseNodeDynamicOutflows_t {
        [FieldOffset(0x0)] public fixed byte m_Outflows[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct CPulseCell_IsRequirementValid__Criteria_t {
        [FieldOffset(0x0)] public fixed byte m_bIsValid[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CPulseCell_Inflow_ObservableVariableListener {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte m_nBlackboardReference[0x2];
        [FieldOffset(0x82)] public fixed byte m_bSelfReference[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulseCell_Outflow_CycleOrdered {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Outputs[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct PulseSelectorOutflowList_t {
        [FieldOffset(0x0)] public fixed byte m_Outflows[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CPulseGraphInstance_TurtleGraphics {
        [FieldOffset(0x0)] public fixed byte pad_0[0xB0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Val_TestDomainGetEntityName {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x120)]
    public unsafe struct CPulseCell_Inflow_Wait {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_WakeResume[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x168)]
    public unsafe struct CPulseCell_TestWaitWithCursorState {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_WakeResume[0x48];
        [FieldOffset(0x120)] public fixed byte m_WakeFail[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulseCell_Outflow_CycleShuffled {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Outputs[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC0)]
    public unsafe struct CPulseCell_Inflow_Method {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte m_MethodName[0x10];
        [FieldOffset(0x90)] public fixed byte m_Description[0x8];
        [FieldOffset(0x98)] public fixed byte m_bIsPublic[0x8];
        [FieldOffset(0xA0)] public fixed byte m_Args[0x10];
        [FieldOffset(0xB0)] public fixed byte m_ReturnValues[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_BaseValue {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1F8)]
    public unsafe struct CPulseCell_BooleanSwitchState {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_Condition[0x90];
        [FieldOffset(0x168)] public fixed byte m_WhenTrue[0x48];
        [FieldOffset(0x1B0)] public fixed byte m_WhenFalse[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x120)]
    public unsafe struct CPulseCell_Inflow_Yield {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_UnyieldResume[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CPulseCell_Unknown {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_UnknownKeys[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulseCell_Outflow_CycleRandom {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Outputs[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CPulseCell_Step_PublicOutput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_OutputIndex[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Val_TestDomainFindEntityByName {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CPulse_BlackboardReference {
        [FieldOffset(0x0)] public fixed byte m_hBlackboardResource[0x8];
        [FieldOffset(0x8)] public fixed byte m_BlackboardResource[0x10];
        [FieldOffset(0x18)] public fixed byte m_nNodeID[0x8];
        [FieldOffset(0x20)] public fixed byte m_NodeName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_ReturnValues {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Value_RandomInt {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CPulseCell_TestEnums {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_nReferenceColor[0x4];
        [FieldOffset(0x4C)] public fixed byte m_nReferenceFlags[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CPulseCell_Step_TestDomainEntFire {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_Input[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulseCell_ExampleSelector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_OutflowList[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulse_CallInfo {
        [FieldOffset(0x0)] public fixed byte m_PortName[0x10];
        [FieldOffset(0x10)] public fixed byte m_nEditorNodeID[0x8];
        [FieldOffset(0x18)] public fixed byte m_RegisterMap[0x30];
        [FieldOffset(0x48)] public fixed byte m_CallMethodID[0x4];
        [FieldOffset(0x4C)] public fixed byte m_nSrcChunk[0x4];
        [FieldOffset(0x50)] public fixed byte m_nSrcInstruction[0x4];
        [FieldOffset(0x54)] public fixed byte m_nBreakDestChunk[0x4];
        [FieldOffset(0x58)] public fixed byte m_nBreakDestInstruction[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CPulseCell_InlineNodeSkipSelector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_nFlowNodeID[0x4];
        [FieldOffset(0x4C)] public fixed byte m_bAnd[0x4];
        [FieldOffset(0x50)] public fixed byte m_PassOutflow[0x18];
        [FieldOffset(0x68)] public fixed byte m_FailOutflow[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct CPulseCell_ExampleCriteria__Criteria_t {
        [FieldOffset(0x0)] public fixed byte m_flFloatValue1[0x4];
        [FieldOffset(0x4)] public fixed byte m_flFloatValue2[0x4];
        [FieldOffset(0x8)] public fixed byte m_bMyBool[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_ExampleCriteria {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CPulseCell_LimitCount {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_nLimitCount[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x150)]
    public unsafe struct CPulseCell_Step_CallExternalMethod {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_MethodName[0x10];
        [FieldOffset(0xE8)] public fixed byte m_nBlackboardIndex[0x8];
        [FieldOffset(0xF0)] public fixed byte m_ExpectedArgs[0x10];
        [FieldOffset(0x100)] public fixed byte m_nAsyncCallMode[0x8];
        [FieldOffset(0x108)] public fixed byte m_OnFinished[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct CPulseCell_LimitCount__Criteria_t {
        [FieldOffset(0x0)] public fixed byte m_bLimitCountPasses[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Step_TestDomainCreateFakeEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x250)]
    public unsafe struct CPulseCell_TestYieldWithObservables {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
        [FieldOffset(0xD8)] public fixed byte m_flWatchForFloatValue[0x8];
        [FieldOffset(0xE0)] public fixed byte m_LiveFloatValue[0x90];
        [FieldOffset(0x170)] public fixed byte m_WatchForStringValue[0x8];
        [FieldOffset(0x178)] public fixed byte m_LiveStringValue[0x90];
        [FieldOffset(0x208)] public fixed byte m_WakeResume[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x130)]
    public unsafe struct CPulseCell_CursorQueue {
        [FieldOffset(0x0)] public fixed byte pad_0[0x128];
        [FieldOffset(0x128)] public fixed byte m_nCursorsAllowedToRunParallel[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Value_RandomFloat {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD8)]
    public unsafe struct CPulseExecCursor {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct TestComponent_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_ComponentData[0x8];
    }
}