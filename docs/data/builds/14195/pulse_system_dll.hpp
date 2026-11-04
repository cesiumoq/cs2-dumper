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

namespace cs2::pulse_system {

enum class PulseBestOutflowRules_t : std::int32_t {
    SORT_BY_NUMBER_OF_VALID_CRITERIA = 0,
    SORT_BY_OUTFLOW_INDEX = 1,
};

enum class PulseTestEnumFlags_t : std::int32_t {
    NONE = 0,
    FIRST = 1,
    SECOND = 2,
    THIRD = 4,
};

enum class PulseTestEnumShape_t : std::int32_t {
    CIRCLE = 100,
    SQUARE = 200,
    TRIANGLE = 300,
};

enum class PulseCursorCancelPriority_t : std::int32_t {
    None = 0,
    CancelOnSucceeded = 1,
    SoftCancel = 2,
    HardCancel = 3,
};

enum class PulseTestEnumFlagsAlt_t : std::int32_t {
    NONE = 0,
    FIRST = 1,
};

enum class PulseMethodCallMode_t : std::int32_t {
    SYNC_WAIT_FOR_COMPLETION = 0,
    ASYNC_FIRE_AND_FORGET = 1,
};

enum class PulseTestEnumColor_t : std::int32_t {
    BLACK = 0,
    WHITE = 1,
    RED = 2,
    GREEN = 3,
    BLUE = 4,
};

enum class PulseCursorWakePriority_t : std::int32_t {
    WakeElegantly = 0,
    WakeImmediate = 1,
};

struct CPulseCell_Step_TestDomainDestroyFakeEntity {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_WaitForCursorsWithTag {
    static constexpr std::size_t size = 0x130;
    std::uint8_t pad_0[0x128]; // 0x0
    std::uint8_t m_bTagSelfWhenComplete[0x4]; // 0x128 bool
    std::uint8_t m_nDesiredKillPriority[0x4]; // 0x12C PulseCursorCancelPriority_t
};

struct CPulseCell_RaceCursors {
    static constexpr std::size_t size = 0x138;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_Outflows[0x18]; // 0xD8 CUtlVector<CPulse_OutflowConnection>
    std::uint8_t m_OnFinished[0x48]; // 0xF0 CPulse_ResumePoint
};

struct CPulseCell_Test_NoInflow {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseGraphInstance_TestDomain_FakeEntityOwner {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x88]; // 0x0
};

struct CPulseCell_Base {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_nEditorNodeID[0x40]; // 0x8 PulseDocNodeID_t
};

struct CPulse_ResumePoint {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CTestDomainDerived_Cursor {
    static constexpr std::size_t size = 0xE0;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_nCursorValueA[0x4]; // 0xD8 int32
    std::uint8_t m_nCursorValueB[0x4]; // 0xDC int32
};

struct CPulseCell_PickBestOutflowSelector {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_nCheckType[0x8]; // 0x48 PulseBestOutflowRules_t
    std::uint8_t m_OutflowList[0x18]; // 0x50 PulseSelectorOutflowList_t
};

struct CPulseCell_WaitForObservable {
    static constexpr std::size_t size = 0x1B0;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_Condition[0x90]; // 0xD8 CPulseObservableExpression<bool>
    std::uint8_t m_OnTrue[0x48]; // 0x168 CPulse_ResumePoint
};

struct CPulse_OutflowConnection {
    static constexpr std::size_t size = 0x48;
    std::uint8_t m_SourceOutflowName[0x10]; // 0x0 PulseSymbol_t
    std::uint8_t m_nDestChunk[0x4]; // 0x10 PulseRuntimeChunkIndex_t
    std::uint8_t m_nInstruction[0x4]; // 0x14 int32
    std::uint8_t m_OutflowRegisterMap[0x30]; // 0x18 PulseRegisterMap_t
};

struct CPulseGraphDef {
    static constexpr std::size_t size = 0x1C0;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_DomainIdentifier[0x10]; // 0x8 PulseSymbol_t
    std::uint8_t m_DomainSubType[0x18]; // 0x18 CPulseValueFullType
    std::uint8_t m_ParentMapName[0x10]; // 0x30 PulseSymbol_t
    std::uint8_t m_ParentXmlName[0x10]; // 0x40 PulseSymbol_t
    std::uint8_t m_Chunks[0x18]; // 0x50 CUtlVector<CPulse_Chunk*>
    std::uint8_t m_Cells[0x18]; // 0x68 CUtlVector<CPulseCell_Base*>
    std::uint8_t m_Vars[0x18]; // 0x80 CUtlVector<CPulse_Variable>
    std::uint8_t m_TempVarBanks[0x18]; // 0x98 CUtlVector<CPulse_TempVarBankDefinition*>
    std::uint8_t m_PublicOutputs[0x18]; // 0xB0 CUtlVector<CPulse_PublicOutput>
    std::uint8_t m_InvokeBindings[0x18]; // 0xC8 CUtlVector<CPulse_InvokeBinding*>
    std::uint8_t m_CallInfos[0x18]; // 0xE0 CUtlVector<CPulse_CallInfo*>
    std::uint8_t m_Constants[0x18]; // 0xF8 CUtlVector<CPulse_Constant>
    std::uint8_t m_DomainValues[0x18]; // 0x110 CUtlVector<CPulse_DomainValue>
    std::uint8_t m_BlackboardReferences[0x18]; // 0x128 CUtlVector<CPulse_BlackboardReference>
    std::uint8_t m_OutputConnections[0x80]; // 0x140 CUtlVector<CPulse_OutputConnection*>
};

struct CPulseCell_TestYieldForever {
    static constexpr std::size_t size = 0xD8;
    std::uint8_t pad_0[0xD8]; // 0x0
};

struct CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView {
    static constexpr std::size_t size = 0xD0;
    std::uint8_t pad_0[0xD0]; // 0x0
};

struct CPulseCell_TestWaitWithCursorState__InstanceState_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_nDummy[0x4]; // 0x0 int32
};

struct CPulseCell_FireCursors {
    static constexpr std::size_t size = 0x140;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_Outflows[0x18]; // 0xD8 CUtlVector<CPulse_OutflowConnection>
    std::uint8_t m_bWaitForChildOutflows[0x8]; // 0xF0 bool
    std::uint8_t m_OnFinished[0x48]; // 0xF8 CPulse_ResumePoint
};

struct CPulseCell_Timeline__TimelineEvent_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t m_flTimeFromPrevious[0x8]; // 0x0 float32
    std::uint8_t m_EventOutflow[0x48]; // 0x8 CPulse_OutflowConnection
};

struct CPulseCell_IntervalTimer__CursorState_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t m_StartTime[0x4]; // 0x0 GameTime_t
    std::uint8_t m_EndTime[0x4]; // 0x4 GameTime_t
    std::uint8_t m_flWaitInterval[0x4]; // 0x8 float32
    std::uint8_t m_flWaitIntervalHigh[0x4]; // 0xC float32
    std::uint8_t m_bCompleteOnNextWake[0x4]; // 0x10 bool
};

struct CPulseCell_BaseRequirement {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_BaseState {
    static constexpr std::size_t size = 0xD8;
    std::uint8_t pad_0[0xD8]; // 0x0
};

struct OutflowWithRequirements_t {
    static constexpr std::size_t size = 0x80;
    std::uint8_t m_Connection[0x48]; // 0x0 CPulse_OutflowConnection
    std::uint8_t m_DestinationFlowNodeID[0x8]; // 0x48 PulseDocNodeID_t
    std::uint8_t m_RequirementNodeIDs[0x18]; // 0x50 CUtlVector<PulseDocNodeID_t>
    std::uint8_t m_nCursorStateBlockIndex[0x18]; // 0x68 CUtlVector<int32>
};

struct CPulseCell_IsRequirementValid {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_Value_Gradient {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Gradient[0x18]; // 0x48 CColorGradient
};

struct CPulseCell_TestWaitWithAutoTracepoints {
    static constexpr std::size_t size = 0x128;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_TracePrefix[0x8]; // 0xD8 CUtlString
    std::uint8_t m_WakeResume[0x48]; // 0xE0 CPulse_ResumePoint
};

struct PulseNodeDynamicOutflows_t__DynamicOutflow_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t m_OutflowID[0x8]; // 0x0 CGlobalSymbol
    std::uint8_t m_Connection[0x48]; // 0x8 CPulse_OutflowConnection
};

struct CPulseCell_Test_MultiOutflow_WithParams {
    static constexpr std::size_t size = 0xD8;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Out1[0x48]; // 0x48 SignatureOutflow_Continue
    std::uint8_t m_Out2[0x48]; // 0x90 SignatureOutflow_Continue
};

struct CBasePulseGraphInstance {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x88]; // 0x0
};

struct CPulseCell_Inflow_GraphHook {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t m_HookName[0x10]; // 0x80 PulseSymbol_t
};

struct SignatureOutflow_Resume {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t nTestStep[0x4]; // 0x0 int32
};

struct CPulseTurtleGraphicsCursor {
    static constexpr std::size_t size = 0xF0;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_Color[0x4]; // 0xD8 Color
    std::uint8_t m_vPos[0x8]; // 0xDC Vector2D
    std::uint8_t m_flHeadingDeg[0x4]; // 0xE4 float32
    std::uint8_t m_bPenUp[0x8]; // 0xE8 bool
};

struct CPulseCell_TestWaitWithCursorState__CursorState_t {
    static constexpr std::size_t size = 0x24;
    std::uint8_t flWaitValue[0x4]; // 0x0 float32
    std::uint8_t bFail[0x4]; // 0x4 bool
    std::uint8_t m_hSelfCursor[0xC]; // 0x8 HYieldedCursor
    std::uint8_t m_hSelfCellInstanceUntyped[0x8]; // 0x14 HPulseCellBase
    std::uint8_t m_hSelfCellInstance[0x8]; // 0x1C HPulseCell<CPulseCell_TestWaitWithCursorState>
};

struct CPulseCell_Inflow_BaseEntrypoint {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_EntryChunk[0x8]; // 0x48 PulseRuntimeChunkIndex_t
    std::uint8_t m_RegisterMap[0x30]; // 0x50 PulseRegisterMap_t
};

struct CPulseCell_Test_MultiInflow_NoDefault {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_WaitForCursorsWithTagBase {
    static constexpr std::size_t size = 0x128;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_nCursorsAllowedToWait[0x8]; // 0xD8 int32
    std::uint8_t m_WaitComplete[0x48]; // 0xE0 CPulse_ResumePoint
};

struct CPulse_InvokeBinding {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t m_RegisterMap[0x30]; // 0x0 PulseRegisterMap_t
    std::uint8_t m_FuncName[0x10]; // 0x30 PulseSymbol_t
    std::uint8_t m_nCellIndex[0x4]; // 0x40 PulseRuntimeCellIndex_t
    std::uint8_t m_nSrcChunk[0x4]; // 0x44 PulseRuntimeChunkIndex_t
    std::uint8_t m_nSrcInstruction[0x68]; // 0x48 int32
};

struct CPulseCell_IntervalTimer {
    static constexpr std::size_t size = 0x168;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_Completed[0x48]; // 0xD8 CPulse_ResumePoint
    std::uint8_t m_OnInterval[0x48]; // 0x120 SignatureOutflow_Continue
};

struct CPulseCell_BaseLerp {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_WakeResume[0x48]; // 0xD8 CPulse_ResumePoint
};

struct CPulseCell_Value_TestValue50 {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_Test_MultiOutflow_WithParams_Yielding {
    static constexpr std::size_t size = 0x240;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_Out1[0x48]; // 0xD8 SignatureOutflow_Continue
    std::uint8_t m_AsyncChild1[0x48]; // 0x120 SignatureOutflow_Continue
    std::uint8_t m_AsyncChild2[0x48]; // 0x168 SignatureOutflow_Continue
    std::uint8_t m_YieldResume1[0x48]; // 0x1B0 SignatureOutflow_Resume
    std::uint8_t m_YieldResume2[0x48]; // 0x1F8 SignatureOutflow_Resume
};

struct CPulseCell_Value_Curve {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Curve[0x40]; // 0x48 CPiecewiseCurve
};

struct CPulseCell_Inflow_EventHandler {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t m_EventName[0x10]; // 0x80 PulseSymbol_t
};

struct CPulseCell_BaseFlow {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_Step_TestDomainTracepoint {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_Outflow_CycleShuffled__InstanceState_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_Shuffle[0x20]; // 0x0 CUtlVectorFixedGrowable<uint8,8>
    std::uint8_t m_nNextShuffle[0x8]; // 0x20 int32
};

struct CPulseCell_BaseLerp__CursorState_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_StartTime[0x4]; // 0x0 GameTime_t
    std::uint8_t m_EndTime[0x4]; // 0x4 GameTime_t
};

struct CPulseGraphInstance_TestDomain_Derived {
    static constexpr std::size_t size = 0xD8;
    std::uint8_t pad_0[0xD0]; // 0x0
    std::uint8_t m_nInstanceValueX[0x8]; // 0xD0 int32
};

struct CPulseGraphInstance_TestDomain {
    static constexpr std::size_t size = 0xD0;
    std::uint8_t pad_0[0xA0]; // 0x0
    std::uint8_t m_bIsRunningUnitTests[0x1]; // 0xA0 bool
    std::uint8_t m_bExplicitTimeStepping[0x1]; // 0xA1 bool
    std::uint8_t m_bExpectingToDestroyWithYieldedCursors[0x1]; // 0xA2 bool
    std::uint8_t m_bQuietTracepoints[0x1]; // 0xA3 bool
    std::uint8_t m_bExpectingCursorTerminatedDueToMaxInstructions[0x4]; // 0xA4 bool
    std::uint8_t m_nCursorsTerminatedDueToMaxInstructions[0x4]; // 0xA8 int32
    std::uint8_t m_nNextValidateIndex[0x4]; // 0xAC int32
    std::uint8_t m_Tracepoints[0x18]; // 0xB0 CUtlVector<CUtlString>
    std::uint8_t m_bTestYesOrNoPath[0x8]; // 0xC8 bool
};

struct SignatureOutflow_Continue {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_Timeline {
    static constexpr std::size_t size = 0x140;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_TimelineEvents[0x18]; // 0xD8 CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
    std::uint8_t m_bWaitForChildOutflows[0x8]; // 0xF0 bool
    std::uint8_t m_OnFinished[0x48]; // 0xF8 CPulse_ResumePoint
};

struct CPulseCell_Inflow_EntOutputHandler {
    static constexpr std::size_t size = 0xB8;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t m_SourceEntity[0x10]; // 0x80 PulseSymbol_t
    std::uint8_t m_SourceOutput[0x10]; // 0x90 PulseSymbol_t
    std::uint8_t m_ExpectedParamType[0x18]; // 0xA0 CPulseValueFullType
};

struct CPulseCell_Outflow_TestExplicitYesNo {
    static constexpr std::size_t size = 0xD8;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Yes[0x48]; // 0x48 CPulse_OutflowConnection
    std::uint8_t m_No[0x48]; // 0x90 CPulse_OutflowConnection
};

struct CPulseCell_Outflow_TestRandomYesNo {
    static constexpr std::size_t size = 0xD8;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Yes[0x48]; // 0x48 CPulse_OutflowConnection
    std::uint8_t m_No[0x48]; // 0x90 CPulse_OutflowConnection
};

struct CPulseCell_Outflow_CycleOrdered__InstanceState_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_nNextIndex[0x4]; // 0x0 int32
};

struct CPulseCell_LimitCount__InstanceState_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_nCurrentCount[0x4]; // 0x0 int32
};

struct CPulseCell_Test_MultiInflow_WithDefault {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_Step_DebugLog {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_BaseYieldingInflow {
    static constexpr std::size_t size = 0xD8;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_BaseFlow_OnAfterCancel[0x48]; // 0x48 CPulse_ResumePoint
    std::uint8_t m_BaseFlow_WhileActive[0x48]; // 0x90 CPulse_ResumePoint
};

struct PulseNodeDynamicOutflows_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_Outflows[0x18]; // 0x0 CUtlVector<PulseNodeDynamicOutflows_t::DynamicOutflow_t>
};

struct CPulseCell_IsRequirementValid__Criteria_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t m_bIsValid[0x1]; // 0x0 bool
};

struct CPulseCell_Inflow_ObservableVariableListener {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t m_nBlackboardReference[0x2]; // 0x80 PulseRuntimeBlackboardReferenceIndex_t
    std::uint8_t m_bSelfReference[0x6]; // 0x82 bool
};

struct CPulseCell_Outflow_CycleOrdered {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Outputs[0x18]; // 0x48 CUtlVector<CPulse_OutflowConnection>
};

struct PulseSelectorOutflowList_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_Outflows[0x18]; // 0x0 CUtlVector<OutflowWithRequirements_t>
};

struct CPulseGraphInstance_TurtleGraphics {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t pad_0[0xB0]; // 0x0
};

struct CPulseCell_Val_TestDomainGetEntityName {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_Inflow_Wait {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_WakeResume[0x48]; // 0xD8 CPulse_ResumePoint
};

struct CPulseCell_TestWaitWithCursorState {
    static constexpr std::size_t size = 0x168;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_WakeResume[0x48]; // 0xD8 CPulse_ResumePoint
    std::uint8_t m_WakeFail[0x48]; // 0x120 CPulse_ResumePoint
};

struct CPulseCell_Outflow_CycleShuffled {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Outputs[0x18]; // 0x48 CUtlVector<CPulse_OutflowConnection>
};

struct CPulseCell_Inflow_Method {
    static constexpr std::size_t size = 0xC0;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t m_MethodName[0x10]; // 0x80 PulseSymbol_t
    std::uint8_t m_Description[0x8]; // 0x90 CUtlString
    std::uint8_t m_bIsPublic[0x8]; // 0x98 bool
    std::uint8_t m_Args[0x10]; // 0xA0 CUtlLeanVector<CPulseRuntimeMethodArg>
    std::uint8_t m_ReturnValues[0x10]; // 0xB0 CUtlLeanVector<CPulseRuntimeMethodArg>
};

struct CPulseCell_BaseValue {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_BooleanSwitchState {
    static constexpr std::size_t size = 0x1F8;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_Condition[0x90]; // 0xD8 CPulseObservableExpression<bool>
    std::uint8_t m_WhenTrue[0x48]; // 0x168 CPulse_OutflowConnection
    std::uint8_t m_WhenFalse[0x48]; // 0x1B0 CPulse_OutflowConnection
};

struct CPulseCell_Inflow_Yield {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_UnyieldResume[0x48]; // 0xD8 CPulse_ResumePoint
};

struct CPulseCell_Unknown {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_UnknownKeys[0x10]; // 0x48 KeyValues3
};

struct CPulseCell_Outflow_CycleRandom {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Outputs[0x18]; // 0x48 CUtlVector<CPulse_OutflowConnection>
};

struct CPulseCell_Step_PublicOutput {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_OutputIndex[0x8]; // 0x48 PulseRuntimeOutputIndex_t
};

struct CPulseCell_Val_TestDomainFindEntityByName {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulse_BlackboardReference {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_hBlackboardResource[0x8]; // 0x0 CStrongHandle<InfoForResourceTypeIPulseGraphDef>
    std::uint8_t m_BlackboardResource[0x10]; // 0x8 PulseSymbol_t
    std::uint8_t m_nNodeID[0x8]; // 0x18 PulseDocNodeID_t
    std::uint8_t m_NodeName[0x8]; // 0x20 CGlobalSymbol
};

struct CPulseCell_ReturnValues {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_Value_RandomInt {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_TestEnums {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_nReferenceColor[0x4]; // 0x48 PulseTestEnumColor_t
    std::uint8_t m_nReferenceFlags[0x4]; // 0x4C PulseTestEnumFlags_t
};

struct CPulseCell_Step_TestDomainEntFire {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_Input[0x8]; // 0x48 CUtlString
};

struct CPulseCell_ExampleSelector {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_OutflowList[0x18]; // 0x48 PulseSelectorOutflowList_t
};

struct CPulse_CallInfo {
    static constexpr std::size_t size = 0x60;
    std::uint8_t m_PortName[0x10]; // 0x0 PulseSymbol_t
    std::uint8_t m_nEditorNodeID[0x8]; // 0x10 PulseDocNodeID_t
    std::uint8_t m_RegisterMap[0x30]; // 0x18 PulseRegisterMap_t
    std::uint8_t m_CallMethodID[0x4]; // 0x48 PulseDocNodeID_t
    std::uint8_t m_nSrcChunk[0x4]; // 0x4C PulseRuntimeChunkIndex_t
    std::uint8_t m_nSrcInstruction[0x4]; // 0x50 int32
    std::uint8_t m_nBreakDestChunk[0x4]; // 0x54 PulseRuntimeChunkIndex_t
    std::uint8_t m_nBreakDestInstruction[0x8]; // 0x58 int32
};

struct CPulseCell_InlineNodeSkipSelector {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_nFlowNodeID[0x4]; // 0x48 PulseDocNodeID_t
    std::uint8_t m_bAnd[0x4]; // 0x4C bool
    std::uint8_t m_PassOutflow[0x18]; // 0x50 PulseSelectorOutflowList_t
    std::uint8_t m_FailOutflow[0x48]; // 0x68 CPulse_OutflowConnection
};

struct CPulseCell_ExampleCriteria__Criteria_t {
    static constexpr std::size_t size = 0xC;
    std::uint8_t m_flFloatValue1[0x4]; // 0x0 float32
    std::uint8_t m_flFloatValue2[0x4]; // 0x4 float32
    std::uint8_t m_bMyBool[0x4]; // 0x8 bool
};

struct CPulseCell_ExampleCriteria {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_LimitCount {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_nLimitCount[0x8]; // 0x48 int32
};

struct CPulseCell_Step_CallExternalMethod {
    static constexpr std::size_t size = 0x150;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_MethodName[0x10]; // 0xD8 PulseSymbol_t
    std::uint8_t m_nBlackboardIndex[0x8]; // 0xE8 PulseRuntimeBlackboardReferenceIndex_t
    std::uint8_t m_ExpectedArgs[0x10]; // 0xF0 CUtlLeanVector<CPulseRuntimeMethodArg>
    std::uint8_t m_nAsyncCallMode[0x8]; // 0x100 PulseMethodCallMode_t
    std::uint8_t m_OnFinished[0x48]; // 0x108 CPulse_ResumePoint
};

struct CPulseCell_LimitCount__Criteria_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t m_bLimitCountPasses[0x1]; // 0x0 bool
};

struct CPulseCell_Step_TestDomainCreateFakeEntity {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_TestYieldWithObservables {
    static constexpr std::size_t size = 0x250;
    std::uint8_t pad_0[0xD8]; // 0x0
    std::uint8_t m_flWatchForFloatValue[0x8]; // 0xD8 float32
    std::uint8_t m_LiveFloatValue[0x90]; // 0xE0 CPulseObservableExpression<float32>
    std::uint8_t m_WatchForStringValue[0x8]; // 0x170 CUtlString
    std::uint8_t m_LiveStringValue[0x90]; // 0x178 CPulseObservableExpression<CUtlString>
    std::uint8_t m_WakeResume[0x48]; // 0x208 CPulse_ResumePoint
};

struct CPulseCell_CursorQueue {
    static constexpr std::size_t size = 0x130;
    std::uint8_t pad_0[0x128]; // 0x0
    std::uint8_t m_nCursorsAllowedToRunParallel[0x8]; // 0x128 int32
};

struct CPulseCell_Value_RandomFloat {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseExecCursor {
    static constexpr std::size_t size = 0xD8;
    std::uint8_t pad_0[0xD8]; // 0x0
};

struct TestComponent_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_ComponentData[0x8]; // 0x8 CUtlString
};

} // namespace