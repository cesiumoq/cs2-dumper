/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Total Offsets   : 202
/*  Dumped At       : 14:17 05/11/2026 (GMT)
/*  Dumped In       : 1,2s
*/

/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

#pragma once
#include <cstddef>
#include <cstdint>

namespace cs2::pulse_system_dll {

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
    std::uint8_t _[0x4]; // 0x128 
    std::uint8_t _[0x4]; // 0x12c 
};

struct CPulseCell_RaceCursors {
    static constexpr std::size_t size = 0x138;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x18]; // 0xd8 
    std::uint8_t _[0x48]; // 0xf0 
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
    std::uint8_t _[0x40]; // 0x8 
};

struct CPulse_ResumePoint {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CTestDomainDerived_Cursor {
    static constexpr std::size_t size = 0xe0;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x4]; // 0xd8 
    std::uint8_t _[0x4]; // 0xdc 
};

struct CPulseCell_PickBestOutflowSelector {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x18]; // 0x50 
};

struct CPulseCell_WaitForObservable {
    static constexpr std::size_t size = 0x1b0;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x90]; // 0xd8 
    std::uint8_t _[0x48]; // 0x168 
};

struct CPulse_OutflowConnection {
    static constexpr std::size_t size = 0x48;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x30]; // 0x18 
};

struct CPulseGraphDef {
    static constexpr std::size_t size = 0x1c0;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x10]; // 0x8 
    std::uint8_t _[0x18]; // 0x18 
    std::uint8_t _[0x10]; // 0x30 
    std::uint8_t _[0x10]; // 0x40 
    std::uint8_t _[0x18]; // 0x50 
    std::uint8_t _[0x18]; // 0x68 
    std::uint8_t _[0x18]; // 0x80 
    std::uint8_t _[0x18]; // 0x98 
    std::uint8_t _[0x18]; // 0xb0 
    std::uint8_t _[0x18]; // 0xc8 
    std::uint8_t _[0x18]; // 0xe0 
    std::uint8_t _[0x18]; // 0xf8 
    std::uint8_t _[0x18]; // 0x110 
    std::uint8_t _[0x18]; // 0x128 
    std::uint8_t _[0x80]; // 0x140 
};

struct CPulseCell_TestYieldForever {
    static constexpr std::size_t size = 0xd8;
    std::uint8_t pad_0[0xd8]; // 0x0
};

struct CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView {
    static constexpr std::size_t size = 0xd0;
    std::uint8_t pad_0[0xd0]; // 0x0
};

struct CPulseCell_TestWaitWithCursorState__InstanceState_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CPulseCell_FireCursors {
    static constexpr std::size_t size = 0x140;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x18]; // 0xd8 
    std::uint8_t _[0x8]; // 0xf0 
    std::uint8_t _[0x48]; // 0xf8 
};

struct CPulseCell_Timeline__TimelineEvent_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x48]; // 0x8 
};

struct CPulseCell_IntervalTimer__CursorState_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
};

struct CPulseCell_BaseRequirement {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_BaseState {
    static constexpr std::size_t size = 0xd8;
    std::uint8_t pad_0[0xd8]; // 0x0
};

struct OutflowWithRequirements_t {
    static constexpr std::size_t size = 0x80;
    std::uint8_t _[0x48]; // 0x0 
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x18]; // 0x50 
    std::uint8_t _[0x18]; // 0x68 
};

struct CPulseCell_IsRequirementValid {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_Value_Gradient {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x18]; // 0x48 
};

struct CPulseCell_TestWaitWithAutoTracepoints {
    static constexpr std::size_t size = 0x128;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x8]; // 0xd8 
    std::uint8_t _[0x48]; // 0xe0 
};

struct PulseNodeDynamicOutflows_t__DynamicOutflow_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x48]; // 0x8 
};

struct CPulseCell_Test_MultiOutflow_WithParams {
    static constexpr std::size_t size = 0xd8;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x48]; // 0x48 
    std::uint8_t _[0x48]; // 0x90 
};

struct CBasePulseGraphInstance {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x88]; // 0x0
};

struct CPulseCell_Inflow_GraphHook {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t _[0x10]; // 0x80 
};

struct SignatureOutflow_Resume {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CPulseTurtleGraphicsCursor {
    static constexpr std::size_t size = 0xf0;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x4]; // 0xd8 
    std::uint8_t _[0x8]; // 0xdc 
    std::uint8_t _[0x4]; // 0xe4 
    std::uint8_t _[0x8]; // 0xe8 
};

struct CPulseCell_TestWaitWithCursorState__CursorState_t {
    static constexpr std::size_t size = 0x24;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0xc]; // 0x8 
    std::uint8_t _[0x8]; // 0x14 
    std::uint8_t _[0x8]; // 0x1c 
};

struct CPulseCell_Inflow_BaseEntrypoint {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x30]; // 0x50 
};

struct CPulseCell_Test_MultiInflow_NoDefault {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_WaitForCursorsWithTagBase {
    static constexpr std::size_t size = 0x128;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x8]; // 0xd8 
    std::uint8_t _[0x48]; // 0xe0 
};

struct CPulse_InvokeBinding {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t _[0x30]; // 0x0 
    std::uint8_t _[0x10]; // 0x30 
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x4]; // 0x44 
    std::uint8_t _[0x68]; // 0x48 
};

struct CPulseCell_IntervalTimer {
    static constexpr std::size_t size = 0x168;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x48]; // 0xd8 
    std::uint8_t _[0x48]; // 0x120 
};

struct CPulseCell_BaseLerp {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x48]; // 0xd8 
};

struct CPulseCell_Value_TestValue50 {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_Test_MultiOutflow_WithParams_Yielding {
    static constexpr std::size_t size = 0x240;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x48]; // 0xd8 
    std::uint8_t _[0x48]; // 0x120 
    std::uint8_t _[0x48]; // 0x168 
    std::uint8_t _[0x48]; // 0x1b0 
    std::uint8_t _[0x48]; // 0x1f8 
};

struct CPulseCell_Value_Curve {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x40]; // 0x48 
};

struct CPulseCell_Inflow_EventHandler {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t _[0x10]; // 0x80 
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
    std::uint8_t _[0x20]; // 0x0 
    std::uint8_t _[0x8]; // 0x20 
};

struct CPulseCell_BaseLerp__CursorState_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct CPulseGraphInstance_TestDomain_Derived {
    static constexpr std::size_t size = 0xd8;
    std::uint8_t pad_0[0xd0]; // 0x0
    std::uint8_t _[0x8]; // 0xd0 
};

struct CPulseGraphInstance_TestDomain {
    static constexpr std::size_t size = 0xd0;
    std::uint8_t pad_0[0xa0]; // 0x0
    std::uint8_t _[0x1]; // 0xa0 
    std::uint8_t _[0x1]; // 0xa1 
    std::uint8_t _[0x1]; // 0xa2 
    std::uint8_t _[0x1]; // 0xa3 
    std::uint8_t _[0x4]; // 0xa4 
    std::uint8_t _[0x4]; // 0xa8 
    std::uint8_t _[0x4]; // 0xac 
    std::uint8_t _[0x18]; // 0xb0 
    std::uint8_t _[0x8]; // 0xc8 
};

struct SignatureOutflow_Continue {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_Timeline {
    static constexpr std::size_t size = 0x140;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x18]; // 0xd8 
    std::uint8_t _[0x8]; // 0xf0 
    std::uint8_t _[0x48]; // 0xf8 
};

struct CPulseCell_Inflow_EntOutputHandler {
    static constexpr std::size_t size = 0xb8;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t _[0x10]; // 0x80 
    std::uint8_t _[0x10]; // 0x90 
    std::uint8_t _[0x18]; // 0xa0 
};

struct CPulseCell_Outflow_TestExplicitYesNo {
    static constexpr std::size_t size = 0xd8;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x48]; // 0x48 
    std::uint8_t _[0x48]; // 0x90 
};

struct CPulseCell_Outflow_TestRandomYesNo {
    static constexpr std::size_t size = 0xd8;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x48]; // 0x48 
    std::uint8_t _[0x48]; // 0x90 
};

struct CPulseCell_Outflow_CycleOrdered__InstanceState_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CPulseCell_LimitCount__InstanceState_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
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
    static constexpr std::size_t size = 0xd8;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x48]; // 0x48 
    std::uint8_t _[0x48]; // 0x90 
};

struct PulseNodeDynamicOutflows_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x18]; // 0x0 
};

struct CPulseCell_IsRequirementValid__Criteria_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t _[0x1]; // 0x0 
};

struct CPulseCell_Inflow_ObservableVariableListener {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t _[0x2]; // 0x80 
    std::uint8_t _[0x6]; // 0x82 
};

struct CPulseCell_Outflow_CycleOrdered {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x18]; // 0x48 
};

struct PulseSelectorOutflowList_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x18]; // 0x0 
};

struct CPulseGraphInstance_TurtleGraphics {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t pad_0[0xb0]; // 0x0
};

struct CPulseCell_Val_TestDomainGetEntityName {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_Inflow_Wait {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x48]; // 0xd8 
};

struct CPulseCell_TestWaitWithCursorState {
    static constexpr std::size_t size = 0x168;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x48]; // 0xd8 
    std::uint8_t _[0x48]; // 0x120 
};

struct CPulseCell_Outflow_CycleShuffled {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x18]; // 0x48 
};

struct CPulseCell_Inflow_Method {
    static constexpr std::size_t size = 0xc0;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t _[0x10]; // 0x80 
    std::uint8_t _[0x8]; // 0x90 
    std::uint8_t _[0x8]; // 0x98 
    std::uint8_t _[0x10]; // 0xa0 
    std::uint8_t _[0x10]; // 0xb0 
};

struct CPulseCell_BaseValue {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_BooleanSwitchState {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x90]; // 0xd8 
    std::uint8_t _[0x48]; // 0x168 
    std::uint8_t _[0x48]; // 0x1b0 
};

struct CPulseCell_Inflow_Yield {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x48]; // 0xd8 
};

struct CPulseCell_Unknown {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x10]; // 0x48 
};

struct CPulseCell_Outflow_CycleRandom {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x18]; // 0x48 
};

struct CPulseCell_Step_PublicOutput {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x8]; // 0x48 
};

struct CPulseCell_Val_TestDomainFindEntityByName {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulse_BlackboardReference {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x10]; // 0x8 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
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
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
};

struct CPulseCell_Step_TestDomainEntFire {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x8]; // 0x48 
};

struct CPulseCell_ExampleSelector {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x18]; // 0x48 
};

struct CPulse_CallInfo {
    static constexpr std::size_t size = 0x60;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x30]; // 0x18 
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0x4]; // 0x54 
    std::uint8_t _[0x8]; // 0x58 
};

struct CPulseCell_InlineNodeSkipSelector {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x18]; // 0x50 
    std::uint8_t _[0x48]; // 0x68 
};

struct CPulseCell_ExampleCriteria__Criteria_t {
    static constexpr std::size_t size = 0xc;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
};

struct CPulseCell_ExampleCriteria {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_LimitCount {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x8]; // 0x48 
};

struct CPulseCell_Step_CallExternalMethod {
    static constexpr std::size_t size = 0x150;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x10]; // 0xd8 
    std::uint8_t _[0x8]; // 0xe8 
    std::uint8_t _[0x10]; // 0xf0 
    std::uint8_t _[0x8]; // 0x100 
    std::uint8_t _[0x48]; // 0x108 
};

struct CPulseCell_LimitCount__Criteria_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t _[0x1]; // 0x0 
};

struct CPulseCell_Step_TestDomainCreateFakeEntity {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_TestYieldWithObservables {
    static constexpr std::size_t size = 0x250;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x8]; // 0xd8 
    std::uint8_t _[0x90]; // 0xe0 
    std::uint8_t _[0x8]; // 0x170 
    std::uint8_t _[0x90]; // 0x178 
    std::uint8_t _[0x48]; // 0x208 
};

struct CPulseCell_CursorQueue {
    static constexpr std::size_t size = 0x130;
    std::uint8_t pad_0[0x128]; // 0x0
    std::uint8_t _[0x8]; // 0x128 
};

struct CPulseCell_Value_RandomFloat {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseExecCursor {
    static constexpr std::size_t size = 0xd8;
    std::uint8_t pad_0[0xd8]; // 0x0
};

struct TestComponent_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
};

} // namespace