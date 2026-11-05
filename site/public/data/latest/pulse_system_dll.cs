/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Total Offsets   : 202
/*  Dumped At       : 14:40 05/11/2026 (GMT)
/*  Dumped In       : 1,2s
*/

/* cesium dumper | generated from live schema */
using System;
using System.Runtime.InteropServices;

namespace Cs2.pulse_system_dll {

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Step_TestDomainDestroyFakeEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x130)]
    public unsafe struct CPulseCell_WaitForCursorsWithTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x128];
        [FieldOffset(0x128)] public fixed byte _[0x4];
        [FieldOffset(0x12c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x138)]
    public unsafe struct CPulseCell_RaceCursors {
        [FieldOffset(0x0)] public fixed byte pad_0[0xd8];
        [FieldOffset(0xd8)] public fixed byte _[0x18];
        [FieldOffset(0xf0)] public fixed byte _[0x48];
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
        [FieldOffset(0x8)] public fixed byte _[0x40];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulse_ResumePoint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xe0)]
    public unsafe struct CTestDomainDerived_Cursor {
        [FieldOffset(0x0)] public fixed byte pad_0[0xd8];
        [FieldOffset(0xd8)] public fixed byte _[0x4];
        [FieldOffset(0xdc)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct CPulseCell_PickBestOutflowSelector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x8];
        [FieldOffset(0x50)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1b0)]
    public unsafe struct CPulseCell_WaitForObservable {
        [FieldOffset(0x0)] public fixed byte pad_0[0xd8];
        [FieldOffset(0xd8)] public fixed byte _[0x90];
        [FieldOffset(0x168)] public fixed byte _[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulse_OutflowConnection {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x30];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1c0)]
    public unsafe struct CPulseGraphDef {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x10];
        [FieldOffset(0x18)] public fixed byte _[0x18];
        [FieldOffset(0x30)] public fixed byte _[0x10];
        [FieldOffset(0x40)] public fixed byte _[0x10];
        [FieldOffset(0x50)] public fixed byte _[0x18];
        [FieldOffset(0x68)] public fixed byte _[0x18];
        [FieldOffset(0x80)] public fixed byte _[0x18];
        [FieldOffset(0x98)] public fixed byte _[0x18];
        [FieldOffset(0xb0)] public fixed byte _[0x18];
        [FieldOffset(0xc8)] public fixed byte _[0x18];
        [FieldOffset(0xe0)] public fixed byte _[0x18];
        [FieldOffset(0xf8)] public fixed byte _[0x18];
        [FieldOffset(0x110)] public fixed byte _[0x18];
        [FieldOffset(0x128)] public fixed byte _[0x18];
        [FieldOffset(0x140)] public fixed byte _[0x80];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xd8)]
    public unsafe struct CPulseCell_TestYieldForever {
        [FieldOffset(0x0)] public fixed byte pad_0[0xd8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xd0)]
    public unsafe struct CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView {
        [FieldOffset(0x0)] public fixed byte pad_0[0xd0];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CPulseCell_TestWaitWithCursorState__InstanceState_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x140)]
    public unsafe struct CPulseCell_FireCursors {
        [FieldOffset(0x0)] public fixed byte pad_0[0xd8];
        [FieldOffset(0xd8)] public fixed byte _[0x18];
        [FieldOffset(0xf0)] public fixed byte _[0x8];
        [FieldOffset(0xf8)] public fixed byte _[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CPulseCell_Timeline__TimelineEvent_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct CPulseCell_IntervalTimer__CursorState_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_BaseRequirement {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xd8)]
    public unsafe struct CPulseCell_BaseState {
        [FieldOffset(0x0)] public fixed byte pad_0[0xd8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct OutflowWithRequirements_t {
        [FieldOffset(0x0)] public fixed byte _[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x8];
        [FieldOffset(0x50)] public fixed byte _[0x18];
        [FieldOffset(0x68)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_IsRequirementValid {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulseCell_Value_Gradient {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x128)]
    public unsafe struct CPulseCell_TestWaitWithAutoTracepoints {
        [FieldOffset(0x0)] public fixed byte pad_0[0xd8];
        [FieldOffset(0xd8)] public fixed byte _[0x8];
        [FieldOffset(0xe0)] public fixed byte _[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct PulseNodeDynamicOutflows_t__DynamicOutflow_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xd8)]
    public unsafe struct CPulseCell_Test_MultiOutflow_WithParams {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x48];
        [FieldOffset(0x90)] public fixed byte _[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CBasePulseGraphInstance {
        [FieldOffset(0x0)] public fixed byte pad_0[0x88];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CPulseCell_Inflow_GraphHook {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct SignatureOutflow_Resume {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xf0)]
    public unsafe struct CPulseTurtleGraphicsCursor {
        [FieldOffset(0x0)] public fixed byte pad_0[0xd8];
        [FieldOffset(0xd8)] public fixed byte _[0x4];
        [FieldOffset(0xdc)] public fixed byte _[0x8];
        [FieldOffset(0xe4)] public fixed byte _[0x4];
        [FieldOffset(0xe8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x24)]
    public unsafe struct CPulseCell_TestWaitWithCursorState__CursorState_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0xc];
        [FieldOffset(0x14)] public fixed byte _[0x8];
        [FieldOffset(0x1c)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CPulseCell_Inflow_BaseEntrypoint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x8];
        [FieldOffset(0x50)] public fixed byte _[0x30];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Test_MultiInflow_NoDefault {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x128)]
    public unsafe struct CPulseCell_WaitForCursorsWithTagBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0xd8];
        [FieldOffset(0xd8)] public fixed byte _[0x8];
        [FieldOffset(0xe0)] public fixed byte _[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xb0)]
    public unsafe struct CPulse_InvokeBinding {
        [FieldOffset(0x0)] public fixed byte _[0x30];
        [FieldOffset(0x30)] public fixed byte _[0x10];
        [FieldOffset(0x40)] public fixed byte _[0x4];
        [FieldOffset(0x44)] public fixed byte _[0x4];
        [FieldOffset(0x48)] public fixed byte _[0x68];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x168)]
    public unsafe struct CPulseCell_IntervalTimer {
        [FieldOffset(0x0)] public fixed byte pad_0[0xd8];
        [FieldOffset(0xd8)] public fixed byte _[0x48];
        [FieldOffset(0x120)] public fixed byte _[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x120)]
    public unsafe struct CPulseCell_BaseLerp {
        [FieldOffset(0x0)] public fixed byte pad_0[0xd8];
        [FieldOffset(0xd8)] public fixed byte _[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Value_TestValue50 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x240)]
    public unsafe struct CPulseCell_Test_MultiOutflow_WithParams_Yielding {
        [FieldOffset(0x0)] public fixed byte pad_0[0xd8];
        [FieldOffset(0xd8)] public fixed byte _[0x48];
        [FieldOffset(0x120)] public fixed byte _[0x48];
        [FieldOffset(0x168)] public fixed byte _[0x48];
        [FieldOffset(0x1b0)] public fixed byte _[0x48];
        [FieldOffset(0x1f8)] public fixed byte _[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CPulseCell_Value_Curve {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x40];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CPulseCell_Inflow_EventHandler {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte _[0x10];
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
        [FieldOffset(0x0)] public fixed byte _[0x20];
        [FieldOffset(0x20)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CPulseCell_BaseLerp__CursorState_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xd8)]
    public unsafe struct CPulseGraphInstance_TestDomain_Derived {
        [FieldOffset(0x0)] public fixed byte pad_0[0xd0];
        [FieldOffset(0xd0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xd0)]
    public unsafe struct CPulseGraphInstance_TestDomain {
        [FieldOffset(0x0)] public fixed byte pad_0[0xa0];
        [FieldOffset(0xa0)] public fixed byte _[0x1];
        [FieldOffset(0xa1)] public fixed byte _[0x1];
        [FieldOffset(0xa2)] public fixed byte _[0x1];
        [FieldOffset(0xa3)] public fixed byte _[0x1];
        [FieldOffset(0xa4)] public fixed byte _[0x4];
        [FieldOffset(0xa8)] public fixed byte _[0x4];
        [FieldOffset(0xac)] public fixed byte _[0x4];
        [FieldOffset(0xb0)] public fixed byte _[0x18];
        [FieldOffset(0xc8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct SignatureOutflow_Continue {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x140)]
    public unsafe struct CPulseCell_Timeline {
        [FieldOffset(0x0)] public fixed byte pad_0[0xd8];
        [FieldOffset(0xd8)] public fixed byte _[0x18];
        [FieldOffset(0xf0)] public fixed byte _[0x8];
        [FieldOffset(0xf8)] public fixed byte _[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xb8)]
    public unsafe struct CPulseCell_Inflow_EntOutputHandler {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte _[0x10];
        [FieldOffset(0x90)] public fixed byte _[0x10];
        [FieldOffset(0xa0)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xd8)]
    public unsafe struct CPulseCell_Outflow_TestExplicitYesNo {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x48];
        [FieldOffset(0x90)] public fixed byte _[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xd8)]
    public unsafe struct CPulseCell_Outflow_TestRandomYesNo {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x48];
        [FieldOffset(0x90)] public fixed byte _[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CPulseCell_Outflow_CycleOrdered__InstanceState_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CPulseCell_LimitCount__InstanceState_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Test_MultiInflow_WithDefault {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Step_DebugLog {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xd8)]
    public unsafe struct CPulseCell_BaseYieldingInflow {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x48];
        [FieldOffset(0x90)] public fixed byte _[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct PulseNodeDynamicOutflows_t {
        [FieldOffset(0x0)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct CPulseCell_IsRequirementValid__Criteria_t {
        [FieldOffset(0x0)] public fixed byte _[0x1];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CPulseCell_Inflow_ObservableVariableListener {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte _[0x2];
        [FieldOffset(0x82)] public fixed byte _[0x6];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulseCell_Outflow_CycleOrdered {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct PulseSelectorOutflowList_t {
        [FieldOffset(0x0)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xb0)]
    public unsafe struct CPulseGraphInstance_TurtleGraphics {
        [FieldOffset(0x0)] public fixed byte pad_0[0xb0];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Val_TestDomainGetEntityName {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x120)]
    public unsafe struct CPulseCell_Inflow_Wait {
        [FieldOffset(0x0)] public fixed byte pad_0[0xd8];
        [FieldOffset(0xd8)] public fixed byte _[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x168)]
    public unsafe struct CPulseCell_TestWaitWithCursorState {
        [FieldOffset(0x0)] public fixed byte pad_0[0xd8];
        [FieldOffset(0xd8)] public fixed byte _[0x48];
        [FieldOffset(0x120)] public fixed byte _[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulseCell_Outflow_CycleShuffled {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc0)]
    public unsafe struct CPulseCell_Inflow_Method {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte _[0x10];
        [FieldOffset(0x90)] public fixed byte _[0x8];
        [FieldOffset(0x98)] public fixed byte _[0x8];
        [FieldOffset(0xa0)] public fixed byte _[0x10];
        [FieldOffset(0xb0)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_BaseValue {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f8)]
    public unsafe struct CPulseCell_BooleanSwitchState {
        [FieldOffset(0x0)] public fixed byte pad_0[0xd8];
        [FieldOffset(0xd8)] public fixed byte _[0x90];
        [FieldOffset(0x168)] public fixed byte _[0x48];
        [FieldOffset(0x1b0)] public fixed byte _[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x120)]
    public unsafe struct CPulseCell_Inflow_Yield {
        [FieldOffset(0x0)] public fixed byte pad_0[0xd8];
        [FieldOffset(0xd8)] public fixed byte _[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CPulseCell_Unknown {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulseCell_Outflow_CycleRandom {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CPulseCell_Step_PublicOutput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Val_TestDomainFindEntityByName {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CPulse_BlackboardReference {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x10];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x8];
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
        [FieldOffset(0x48)] public fixed byte _[0x4];
        [FieldOffset(0x4c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CPulseCell_Step_TestDomainEntFire {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulseCell_ExampleSelector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulse_CallInfo {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x30];
        [FieldOffset(0x48)] public fixed byte _[0x4];
        [FieldOffset(0x4c)] public fixed byte _[0x4];
        [FieldOffset(0x50)] public fixed byte _[0x4];
        [FieldOffset(0x54)] public fixed byte _[0x4];
        [FieldOffset(0x58)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xb0)]
    public unsafe struct CPulseCell_InlineNodeSkipSelector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x4];
        [FieldOffset(0x4c)] public fixed byte _[0x4];
        [FieldOffset(0x50)] public fixed byte _[0x18];
        [FieldOffset(0x68)] public fixed byte _[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc)]
    public unsafe struct CPulseCell_ExampleCriteria__Criteria_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_ExampleCriteria {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CPulseCell_LimitCount {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x150)]
    public unsafe struct CPulseCell_Step_CallExternalMethod {
        [FieldOffset(0x0)] public fixed byte pad_0[0xd8];
        [FieldOffset(0xd8)] public fixed byte _[0x10];
        [FieldOffset(0xe8)] public fixed byte _[0x8];
        [FieldOffset(0xf0)] public fixed byte _[0x10];
        [FieldOffset(0x100)] public fixed byte _[0x8];
        [FieldOffset(0x108)] public fixed byte _[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct CPulseCell_LimitCount__Criteria_t {
        [FieldOffset(0x0)] public fixed byte _[0x1];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Step_TestDomainCreateFakeEntity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x250)]
    public unsafe struct CPulseCell_TestYieldWithObservables {
        [FieldOffset(0x0)] public fixed byte pad_0[0xd8];
        [FieldOffset(0xd8)] public fixed byte _[0x8];
        [FieldOffset(0xe0)] public fixed byte _[0x90];
        [FieldOffset(0x170)] public fixed byte _[0x8];
        [FieldOffset(0x178)] public fixed byte _[0x90];
        [FieldOffset(0x208)] public fixed byte _[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x130)]
    public unsafe struct CPulseCell_CursorQueue {
        [FieldOffset(0x0)] public fixed byte pad_0[0x128];
        [FieldOffset(0x128)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulseCell_Value_RandomFloat {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xd8)]
    public unsafe struct CPulseExecCursor {
        [FieldOffset(0x0)] public fixed byte pad_0[0xd8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct TestComponent_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
    }

}