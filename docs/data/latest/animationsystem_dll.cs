/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Total Offsets   : 202
/*  Dumped At       : 13:50 05/11/2026 (GMT)
/*  Dumped In       : 1,2s
*/

/* cesium dumper | generated from live schema */
using System;
using System.Runtime.InteropServices;

namespace Cs2.animationsystem_dll {

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
    public unsafe struct CPulseCell_Base {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x40];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CPulse_ResumePoint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct CPulseCell_PickBestOutflowSelector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x8];
        [FieldOffset(0x50)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xa8)]
    public unsafe struct CParticleBindingRealPulse {
        [FieldOffset(0x0)] public fixed byte pad_0[0xa8];
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

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct PulseNodeDynamicOutflows_t__DynamicOutflow_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x48];
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

    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CPulseCell_Inflow_BaseEntrypoint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x8];
        [FieldOffset(0x50)] public fixed byte _[0x30];
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

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CPulseCell_Outflow_CycleOrdered__InstanceState_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xa8)]
    public unsafe struct CParticleCollectionBindingInstance {
        [FieldOffset(0x0)] public fixed byte pad_0[0xa8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CPulseCell_LimitCount__InstanceState_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
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

    [StructLayout(LayoutKind.Explicit, Size = 0x120)]
    public unsafe struct CPulseCell_Inflow_Wait {
        [FieldOffset(0x0)] public fixed byte pad_0[0xd8];
        [FieldOffset(0xd8)] public fixed byte _[0x48];
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

    [StructLayout(LayoutKind.Explicit, Size = 0x4c)]
    public unsafe struct CAnimationLayer {
        [FieldOffset(0x0)] public fixed byte _[0xc];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0xc];
        [FieldOffset(0x1c)] public fixed byte _[0xc];
        [FieldOffset(0x28)] public fixed byte _[0xc];
        [FieldOffset(0x34)] public fixed byte _[0x4];
        [FieldOffset(0x38)] public fixed byte _[0x4];
        [FieldOffset(0x3c)] public fixed byte _[0x4];
        [FieldOffset(0x40)] public fixed byte _[0x4];
        [FieldOffset(0x44)] public fixed byte _[0x4];
        [FieldOffset(0x48)] public fixed byte _[0x4];
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

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CAnimFrameBlockAnim {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CZeroPoseUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CSlowDownOnSlopesUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc0)]
    public unsafe struct COrientationWarpUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x74];
        [FieldOffset(0x74)] public fixed byte _[0x4];
        [FieldOffset(0x78)] public fixed byte _[0x2];
        [FieldOffset(0x7a)] public fixed byte _[0x2];
        [FieldOffset(0x7c)] public fixed byte _[0x4];
        [FieldOffset(0x80)] public fixed byte _[0x4];
        [FieldOffset(0x84)] public fixed byte _[0x4];
        [FieldOffset(0x88)] public fixed byte _[0x8];
        [FieldOffset(0x90)] public fixed byte _[0x18];
        [FieldOffset(0xa8)] public fixed byte _[0x4];
        [FieldOffset(0xac)] public fixed byte _[0x4];
        [FieldOffset(0xb0)] public fixed byte _[0x4];
        [FieldOffset(0xb4)] public fixed byte _[0x4];
        [FieldOffset(0xb8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CAnimParameterBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x8];
        [FieldOffset(0x30)] public fixed byte _[0x18];
        [FieldOffset(0x48)] public fixed byte _[0x20];
        [FieldOffset(0x68)] public fixed byte _[0x1];
        [FieldOffset(0x69)] public fixed byte _[0x7];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CSequenceFinishedAnimTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
        [FieldOffset(0x58)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xb8)]
    public unsafe struct CSceneObjectData {
        [FieldOffset(0x0)] public fixed byte _[0xc];
        [FieldOffset(0xc)] public fixed byte _[0xc];
        [FieldOffset(0x18)] public fixed byte _[0x10];
        [FieldOffset(0x28)] public fixed byte _[0x10];
        [FieldOffset(0x38)] public fixed byte _[0x10];
        [FieldOffset(0x48)] public fixed byte _[0x10];
        [FieldOffset(0x58)] public fixed byte _[0x60];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CFootCycle {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CParticleModelInput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x40];
        [FieldOffset(0x58)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CInputStreamUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x140)]
    public unsafe struct CNmFootIKTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte _[0x4];
        [FieldOffset(0x74)] public fixed byte _[0xc];
        [FieldOffset(0x80)] public fixed byte _[0x20];
        [FieldOffset(0xa0)] public fixed byte _[0x20];
        [FieldOffset(0xc0)] public fixed byte _[0x4];
        [FieldOffset(0xc4)] public fixed byte _[0xc];
        [FieldOffset(0xd0)] public fixed byte _[0x30];
        [FieldOffset(0x100)] public fixed byte _[0x30];
        [FieldOffset(0x130)] public fixed byte _[0x4];
        [FieldOffset(0x134)] public fixed byte _[0x4];
        [FieldOffset(0x138)] public fixed byte _[0x1];
        [FieldOffset(0x139)] public fixed byte _[0x7];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CIntAnimParameter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte _[0x4];
        [FieldOffset(0x84)] public fixed byte _[0x4];
        [FieldOffset(0x88)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CNmParameterizedBlendNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x2];
        [FieldOffset(0x2a)] public fixed byte _[0x6];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xd0)]
    public unsafe struct CNmScaleTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0xd0];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x6c0)]
    public unsafe struct PerTickSettings_t {
        [FieldOffset(0x0)] public fixed byte _[0x20];
        [FieldOffset(0x20)] public fixed byte _[0x20];
        [FieldOffset(0x40)] public fixed byte _[0x20];
        [FieldOffset(0x60)] public fixed byte _[0x63c];
        [FieldOffset(0x69c)] public fixed byte _[0x8];
        [FieldOffset(0x6a4)] public fixed byte _[0x4];
        [FieldOffset(0x6a8)] public fixed byte _[0x4];
        [FieldOffset(0x6ac)] public fixed byte _[0x8];
        [FieldOffset(0x6b4)] public fixed byte _[0x1];
        [FieldOffset(0x6b5)] public fixed byte _[0x1];
        [FieldOffset(0x6b6)] public fixed byte _[0x1];
        [FieldOffset(0x6b7)] public fixed byte _[0x9];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmFrameSnapEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CAnimNodePath {
        [FieldOffset(0x0)] public fixed byte _[0x2c];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct AnimNodeOutputID {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xb0)]
    public unsafe struct CNmSyncTrack {
        [FieldOffset(0x0)] public fixed byte _[0xa8];
        [FieldOffset(0xa8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CSeqBoneMaskList {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x18];
        [FieldOffset(0x40)] public fixed byte _[0x8];
        [FieldOffset(0x48)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xd8)]
    public unsafe struct CAnimEncodedFrames {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x18];
        [FieldOffset(0x30)] public fixed byte _[0xa8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct SampleCode {
        [FieldOffset(0x0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CCachedPose {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x18];
        [FieldOffset(0x20)] public fixed byte _[0x18];
        [FieldOffset(0x38)] public fixed byte _[0x4];
        [FieldOffset(0x3c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmTransitionEventConditionNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x2];
        [FieldOffset(0x1e)] public fixed byte _[0x2];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CTaskStatusAnimTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4c)]
    public unsafe struct CStateNodeInstanceData {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x18];
        [FieldOffset(0x20)] public fixed byte _[0x1c];
        [FieldOffset(0x3c)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CMotionGraphConfig {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CMotionSearchNode {
        [FieldOffset(0x0)] public fixed byte _[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x20];
        [FieldOffset(0x38)] public fixed byte _[0x18];
        [FieldOffset(0x50)] public fixed byte _[0x18];
        [FieldOffset(0x68)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CAnimActivity {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1a0)]
    public unsafe struct CAnimScriptManager {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x190];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct AnimationDecodeDebugDumpElement_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x18];
        [FieldOffset(0x40)] public fixed byte _[0x18];
        [FieldOffset(0x58)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x398)]
    public unsafe struct CChoreoInstanceData {
        [FieldOffset(0x0)] public fixed byte _[0x398];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct PulseRuntimeVarIndex_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct ConfigIndex {
        [FieldOffset(0x0)] public fixed byte _[0x2];
        [FieldOffset(0x2)] public fixed byte _[0x2];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xd0)]
    public unsafe struct VPhysXCollisionAttributes_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x18];
        [FieldOffset(0x20)] public fixed byte _[0x18];
        [FieldOffset(0x38)] public fixed byte _[0x18];
        [FieldOffset(0x50)] public fixed byte _[0x18];
        [FieldOffset(0x68)] public fixed byte _[0x8];
        [FieldOffset(0x70)] public fixed byte _[0x18];
        [FieldOffset(0x88)] public fixed byte _[0x18];
        [FieldOffset(0xa0)] public fixed byte _[0x18];
        [FieldOffset(0xb8)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xb0)]
    public unsafe struct CSequenceUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte _[0x4];
        [FieldOffset(0x7c)] public fixed byte _[0x4];
        [FieldOffset(0x80)] public fixed byte _[0x18];
        [FieldOffset(0x98)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1c)]
    public unsafe struct CStateMachineInstanceData {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0xc];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmPassthroughNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmClipReferenceNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmGraphDefinition__ExternalGraphSlot_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct PulseRuntimeEntrypointIndex_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xb8)]
    public unsafe struct CAimCameraUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte _[0x2];
        [FieldOffset(0x72)] public fixed byte _[0x2];
        [FieldOffset(0x74)] public fixed byte _[0x2];
        [FieldOffset(0x76)] public fixed byte _[0x2];
        [FieldOffset(0x78)] public fixed byte _[0x2];
        [FieldOffset(0x7a)] public fixed byte _[0x2];
        [FieldOffset(0x7c)] public fixed byte _[0x4];
        [FieldOffset(0x80)] public fixed byte _[0x38];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x2)]
    public unsafe struct PulseRuntimeDomainValueIndex_t {
        [FieldOffset(0x0)] public fixed byte _[0x2];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct LookData {
        [FieldOffset(0x0)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xb)]
    public unsafe struct CSeqSeqDescFlag {
        [FieldOffset(0x0)] public fixed byte _[0x1];
        [FieldOffset(0x1)] public fixed byte _[0x1];
        [FieldOffset(0x2)] public fixed byte _[0x1];
        [FieldOffset(0x3)] public fixed byte _[0x1];
        [FieldOffset(0x4)] public fixed byte _[0x1];
        [FieldOffset(0x5)] public fixed byte _[0x1];
        [FieldOffset(0x6)] public fixed byte _[0x1];
        [FieldOffset(0x7)] public fixed byte _[0x1];
        [FieldOffset(0x8)] public fixed byte _[0x1];
        [FieldOffset(0x9)] public fixed byte _[0x1];
        [FieldOffset(0xa)] public fixed byte _[0x1];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct PermModelInfo_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0xc];
        [FieldOffset(0x10)] public fixed byte _[0xc];
        [FieldOffset(0x1c)] public fixed byte _[0xc];
        [FieldOffset(0x28)] public fixed byte _[0xc];
        [FieldOffset(0x34)] public fixed byte _[0x4];
        [FieldOffset(0x38)] public fixed byte _[0xc];
        [FieldOffset(0x44)] public fixed byte _[0x4];
        [FieldOffset(0x48)] public fixed byte _[0x8];
        [FieldOffset(0x50)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct StanceInfo_t {
        [FieldOffset(0x0)] public fixed byte _[0xc];
        [FieldOffset(0xc)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct IKBoneNameAndIndex_t {
        [FieldOffset(0x0)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulse_Chunk {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x10];
        [FieldOffset(0x20)] public fixed byte _[0x10];
        [FieldOffset(0x30)] public fixed byte _[0x30];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CStanceScaleUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CPulseBreakpointLocation {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x10];
        [FieldOffset(0x18)] public fixed byte _[0x10];
        [FieldOffset(0x28)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct PulseRuntimeInvokeIndex_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmBoneMaskBlendNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x2];
        [FieldOffset(0x12)] public fixed byte _[0x2];
        [FieldOffset(0x14)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmIDEventNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x44)]
    public unsafe struct HitReactFixedSettings_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
        [FieldOffset(0x30)] public fixed byte _[0x4];
        [FieldOffset(0x34)] public fixed byte _[0x4];
        [FieldOffset(0x38)] public fixed byte _[0x4];
        [FieldOffset(0x3c)] public fixed byte _[0x4];
        [FieldOffset(0x40)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmPoseNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CAnimTagBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x8];
        [FieldOffset(0x30)] public fixed byte _[0x18];
        [FieldOffset(0x48)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x6d8)]
    public unsafe struct CPerParticleVecInput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x6d8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CMotionGraph {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x18];
        [FieldOffset(0x40)] public fixed byte _[0x8];
        [FieldOffset(0x48)] public fixed byte _[0x4];
        [FieldOffset(0x4c)] public fixed byte _[0x4];
        [FieldOffset(0x50)] public fixed byte _[0x4];
        [FieldOffset(0x54)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmVectorInfoNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x2];
        [FieldOffset(0x12)] public fixed byte _[0x6];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x120)]
    public unsafe struct AnimationSnapshot_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x110];
        [FieldOffset(0x110)] public fixed byte _[0x8];
        [FieldOffset(0x118)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x100)]
    public unsafe struct CNmBlendTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0x100];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmVectorValueNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CSeqTransition {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CNmPoseTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CAnimGraphSettingsGroup {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmVirtualParameterTargetNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CAnimGraphDebugReplay {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
        [FieldOffset(0x40)] public fixed byte _[0x8];
        [FieldOffset(0x48)] public fixed byte _[0x18];
        [FieldOffset(0x60)] public fixed byte _[0x4];
        [FieldOffset(0x64)] public fixed byte _[0x4];
        [FieldOffset(0x68)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x98)]
    public unsafe struct CVectorAnimParameter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte _[0xc];
        [FieldOffset(0x8c)] public fixed byte _[0x4];
        [FieldOffset(0x90)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CNmCachedPoseReadTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CNmStateMachineNode__StateDefinition_t {
        [FieldOffset(0x0)] public fixed byte _[0x2];
        [FieldOffset(0x2)] public fixed byte _[0x6];
        [FieldOffset(0x8)] public fixed byte _[0x30];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xa0)]
    public unsafe struct CStanceOverrideUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte _[0x18];
        [FieldOffset(0x88)] public fixed byte _[0x10];
        [FieldOffset(0x98)] public fixed byte _[0x4];
        [FieldOffset(0x9c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmGraphDefinition__ExternalPoseSlot_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct PhysShapeMarkup_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xa0)]
    public unsafe struct CBlend2DInstanceData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x3c];
        [FieldOffset(0x44)] public fixed byte _[0x4];
        [FieldOffset(0x48)] public fixed byte _[0x58];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct LookAtBone_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x148)]
    public unsafe struct CDirectPlaybackInstanceData {
        [FieldOffset(0x0)] public fixed byte _[0xc];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x10];
        [FieldOffset(0x24)] public fixed byte _[0xe0];
        [FieldOffset(0x104)] public fixed byte _[0x4];
        [FieldOffset(0x108)] public fixed byte _[0x10];
        [FieldOffset(0x118)] public fixed byte _[0x4];
        [FieldOffset(0x11c)] public fixed byte _[0x4];
        [FieldOffset(0x120)] public fixed byte _[0x10];
        [FieldOffset(0x130)] public fixed byte _[0x8];
        [FieldOffset(0x138)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CNmTransitionNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x2];
        [FieldOffset(0x12)] public fixed byte _[0x2];
        [FieldOffset(0x14)] public fixed byte _[0x2];
        [FieldOffset(0x16)] public fixed byte _[0x2];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
        [FieldOffset(0x28)] public fixed byte _[0x2];
        [FieldOffset(0x2a)] public fixed byte _[0x1];
        [FieldOffset(0x2b)] public fixed byte _[0x5];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x2)]
    public unsafe struct PulseRuntimeRegisterIndex_t {
        [FieldOffset(0x0)] public fixed byte _[0x2];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmFloatEaseNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x2];
        [FieldOffset(0x1a)] public fixed byte _[0x1];
        [FieldOffset(0x1b)] public fixed byte _[0x5];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x340)]
    public unsafe struct CAnimationGraphInstance {
        [FieldOffset(0x0)] public fixed byte pad_0[0x329];
        [FieldOffset(0x329)] public fixed byte _[0x17];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xa8)]
    public unsafe struct CAnimEncodeDifference {
        [FieldOffset(0x0)] public fixed byte _[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x18];
        [FieldOffset(0x30)] public fixed byte _[0x18];
        [FieldOffset(0x48)] public fixed byte _[0x18];
        [FieldOffset(0x60)] public fixed byte _[0x18];
        [FieldOffset(0x78)] public fixed byte _[0x18];
        [FieldOffset(0x90)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CRootUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CNmTargetOffsetNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x2];
        [FieldOffset(0x12)] public fixed byte _[0xe];
        [FieldOffset(0x20)] public fixed byte _[0x10];
        [FieldOffset(0x30)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x120)]
    public unsafe struct MotionMatchingInstanceData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x2c];
        [FieldOffset(0x2c)] public fixed byte _[0x58];
        [FieldOffset(0x84)] public fixed byte _[0x9c];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct CMotionGraphUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
        [FieldOffset(0x58)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmFloatAngleMathNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x2];
        [FieldOffset(0x12)] public fixed byte _[0x6];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct PulseCursorID_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x2)]
    public unsafe struct CAnimParamHandle {
        [FieldOffset(0x0)] public fixed byte _[0x1];
        [FieldOffset(0x1)] public fixed byte _[0x1];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct WeightList {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct MotionIndex {
        [FieldOffset(0x0)] public fixed byte _[0x2];
        [FieldOffset(0x2)] public fixed byte _[0x2];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct FollowAttachmentSettings_t {
        [FieldOffset(0x0)] public fixed byte _[0x80];
        [FieldOffset(0x80)] public fixed byte _[0x4];
        [FieldOffset(0x84)] public fixed byte _[0x1];
        [FieldOffset(0x85)] public fixed byte _[0x1];
        [FieldOffset(0x86)] public fixed byte _[0xa];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmReferencedGraphNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x2];
        [FieldOffset(0x12)] public fixed byte _[0x6];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct AnimNodeID {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CNmClipSelectorNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CLookComponentUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x34];
        [FieldOffset(0x34)] public fixed byte _[0x2];
        [FieldOffset(0x36)] public fixed byte _[0x2];
        [FieldOffset(0x38)] public fixed byte _[0x2];
        [FieldOffset(0x3a)] public fixed byte _[0x2];
        [FieldOffset(0x3c)] public fixed byte _[0x2];
        [FieldOffset(0x3e)] public fixed byte _[0x2];
        [FieldOffset(0x40)] public fixed byte _[0x2];
        [FieldOffset(0x42)] public fixed byte _[0x2];
        [FieldOffset(0x44)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmIsExternalPoseSetNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CAnimGraphNetworkSettings {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
        [FieldOffset(0x20)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CSingleFrameUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
        [FieldOffset(0x58)] public fixed byte _[0x18];
        [FieldOffset(0x70)] public fixed byte _[0x4];
        [FieldOffset(0x74)] public fixed byte _[0x4];
        [FieldOffset(0x78)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CNmChainLookatNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0xc];
        [FieldOffset(0x2c)] public fixed byte _[0xc];
        [FieldOffset(0x38)] public fixed byte _[0x2];
        [FieldOffset(0x3a)] public fixed byte _[0x2];
        [FieldOffset(0x3c)] public fixed byte _[0x4];
        [FieldOffset(0x40)] public fixed byte _[0x30];
        [FieldOffset(0x70)] public fixed byte _[0x1];
        [FieldOffset(0x71)] public fixed byte _[0x7];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CNmFollowBoneNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x2];
        [FieldOffset(0x2a)] public fixed byte _[0x6];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CBlockSelectionMetricEvaluator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xe8)]
    public unsafe struct MovementData {
        [FieldOffset(0x0)] public fixed byte _[0xc];
        [FieldOffset(0xc)] public fixed byte _[0x14];
        [FieldOffset(0x20)] public fixed byte _[0x14];
        [FieldOffset(0x34)] public fixed byte _[0xc];
        [FieldOffset(0x40)] public fixed byte _[0xc];
        [FieldOffset(0x4c)] public fixed byte _[0xc];
        [FieldOffset(0x58)] public fixed byte _[0xc];
        [FieldOffset(0x64)] public fixed byte _[0x4];
        [FieldOffset(0x68)] public fixed byte _[0xc];
        [FieldOffset(0x74)] public fixed byte _[0xc];
        [FieldOffset(0x80)] public fixed byte _[0xc];
        [FieldOffset(0x8c)] public fixed byte _[0xc];
        [FieldOffset(0x98)] public fixed byte _[0xc];
        [FieldOffset(0xa4)] public fixed byte _[0xc];
        [FieldOffset(0xb0)] public fixed byte _[0xc];
        [FieldOffset(0xbc)] public fixed byte _[0xc];
        [FieldOffset(0xc8)] public fixed byte _[0x14];
        [FieldOffset(0xdc)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CRemapValueComponentUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CModelConfigList {
        [FieldOffset(0x0)] public fixed byte _[0x1];
        [FieldOffset(0x1)] public fixed byte _[0x7];
        [FieldOffset(0x8)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CSeqAutoLayerFlag {
        [FieldOffset(0x0)] public fixed byte _[0x1];
        [FieldOffset(0x1)] public fixed byte _[0x1];
        [FieldOffset(0x2)] public fixed byte _[0x1];
        [FieldOffset(0x3)] public fixed byte _[0x1];
        [FieldOffset(0x4)] public fixed byte _[0x1];
        [FieldOffset(0x5)] public fixed byte _[0x1];
        [FieldOffset(0x6)] public fixed byte _[0x1];
        [FieldOffset(0x7)] public fixed byte _[0x1];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct AnimStateID {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CNmIDEventConditionNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x40];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct ModelBoneFlexDriver_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CMorphData {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xd0)]
    public unsafe struct CFootPinningUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte _[0x30];
        [FieldOffset(0xa8)] public fixed byte _[0x8];
        [FieldOffset(0xb0)] public fixed byte _[0x18];
        [FieldOffset(0xc8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CSeqPoseSetting {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x10];
        [FieldOffset(0x20)] public fixed byte _[0x10];
        [FieldOffset(0x30)] public fixed byte _[0x4];
        [FieldOffset(0x34)] public fixed byte _[0x1];
        [FieldOffset(0x35)] public fixed byte _[0x1];
        [FieldOffset(0x36)] public fixed byte _[0x2];
        [FieldOffset(0x38)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct PulseGraphExecutionHistoryCursorDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
        [FieldOffset(0x28)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmVirtualParameterFloatNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CAttachment {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x18];
        [FieldOffset(0x20)] public fixed byte _[0x30];
        [FieldOffset(0x50)] public fixed byte _[0x24];
        [FieldOffset(0x74)] public fixed byte _[0xc];
        [FieldOffset(0x80)] public fixed byte _[0x3];
        [FieldOffset(0x83)] public fixed byte _[0x1];
        [FieldOffset(0x84)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CSequenceUpdateNodeBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x6c];
        [FieldOffset(0x6c)] public fixed byte _[0x4];
        [FieldOffset(0x70)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CDrawCullingData {
        [FieldOffset(0x0)] public fixed byte _[0x3];
        [FieldOffset(0x3)] public fixed byte _[0x1];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xd0)]
    public unsafe struct VPhysXJoint_t {
        [FieldOffset(0x0)] public fixed byte _[0x2];
        [FieldOffset(0x2)] public fixed byte _[0x2];
        [FieldOffset(0x4)] public fixed byte _[0x2];
        [FieldOffset(0x6)] public fixed byte _[0xa];
        [FieldOffset(0x10)] public fixed byte _[0x20];
        [FieldOffset(0x30)] public fixed byte _[0x20];
        [FieldOffset(0x50)] public fixed byte _[0x1];
        [FieldOffset(0x51)] public fixed byte _[0x1];
        [FieldOffset(0x52)] public fixed byte _[0x1];
        [FieldOffset(0x53)] public fixed byte _[0x1];
        [FieldOffset(0x54)] public fixed byte _[0x8];
        [FieldOffset(0x5c)] public fixed byte _[0x4];
        [FieldOffset(0x60)] public fixed byte _[0xc];
        [FieldOffset(0x6c)] public fixed byte _[0x4];
        [FieldOffset(0x70)] public fixed byte _[0x4];
        [FieldOffset(0x74)] public fixed byte _[0x8];
        [FieldOffset(0x7c)] public fixed byte _[0x4];
        [FieldOffset(0x80)] public fixed byte _[0x8];
        [FieldOffset(0x88)] public fixed byte _[0x4];
        [FieldOffset(0x8c)] public fixed byte _[0xc];
        [FieldOffset(0x98)] public fixed byte _[0x4];
        [FieldOffset(0x9c)] public fixed byte _[0x4];
        [FieldOffset(0xa0)] public fixed byte _[0x4];
        [FieldOffset(0xa4)] public fixed byte _[0x4];
        [FieldOffset(0xa8)] public fixed byte _[0x4];
        [FieldOffset(0xac)] public fixed byte _[0x4];
        [FieldOffset(0xb0)] public fixed byte _[0x4];
        [FieldOffset(0xb4)] public fixed byte _[0x4];
        [FieldOffset(0xb8)] public fixed byte _[0x8];
        [FieldOffset(0xc0)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1c)]
    public unsafe struct CStateNodeTransitionData {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CTimeRemainingMetricEvaluator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
        [FieldOffset(0x50)] public fixed byte _[0x4];
        [FieldOffset(0x54)] public fixed byte _[0x4];
        [FieldOffset(0x58)] public fixed byte _[0x4];
        [FieldOffset(0x5c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CParticleInput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x2)]
    public unsafe struct PulseRuntimeTempVarIndex_t {
        [FieldOffset(0x0)] public fixed byte _[0x2];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CModelConfigElement {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x38];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmControlParameterVectorNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct FootFixedSettings {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x10];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
        [FieldOffset(0x30)] public fixed byte _[0x4];
        [FieldOffset(0x34)] public fixed byte _[0x4];
        [FieldOffset(0x38)] public fixed byte _[0x4];
        [FieldOffset(0x3c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmBoneMaskSwitchNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x2];
        [FieldOffset(0x12)] public fixed byte _[0x2];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CModelConfig {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x18];
        [FieldOffset(0x20)] public fixed byte _[0x1];
        [FieldOffset(0x21)] public fixed byte _[0x7];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct AnimComponentID {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x150)]
    public unsafe struct VPhysXAggregateData_t {
        [FieldOffset(0x0)] public fixed byte _[0x2];
        [FieldOffset(0x2)] public fixed byte _[0x2];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x18];
        [FieldOffset(0x20)] public fixed byte _[0x18];
        [FieldOffset(0x38)] public fixed byte _[0x18];
        [FieldOffset(0x50)] public fixed byte _[0x18];
        [FieldOffset(0x68)] public fixed byte _[0x18];
        [FieldOffset(0x80)] public fixed byte _[0x18];
        [FieldOffset(0x98)] public fixed byte _[0x18];
        [FieldOffset(0xb0)] public fixed byte _[0x18];
        [FieldOffset(0xc8)] public fixed byte _[0x18];
        [FieldOffset(0xe0)] public fixed byte _[0x8];
        [FieldOffset(0xe8)] public fixed byte _[0x18];
        [FieldOffset(0x100)] public fixed byte _[0x18];
        [FieldOffset(0x118)] public fixed byte _[0x18];
        [FieldOffset(0x130)] public fixed byte _[0x18];
        [FieldOffset(0x148)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1b8)]
    public unsafe struct CNmGraphDefinition {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x8];
        [FieldOffset(0x30)] public fixed byte _[0x18];
        [FieldOffset(0x48)] public fixed byte _[0x8];
        [FieldOffset(0x50)] public fixed byte _[0x18];
        [FieldOffset(0x68)] public fixed byte _[0x18];
        [FieldOffset(0x80)] public fixed byte _[0x18];
        [FieldOffset(0x98)] public fixed byte _[0x18];
        [FieldOffset(0xb0)] public fixed byte _[0x18];
        [FieldOffset(0xc8)] public fixed byte _[0x88];
        [FieldOffset(0x150)] public fixed byte _[0x18];
        [FieldOffset(0x168)] public fixed byte _[0x50];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CNmSelectorNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CAnimDemoCaptureSettings {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x8];
        [FieldOffset(0x30)] public fixed byte _[0x8];
        [FieldOffset(0x38)] public fixed byte _[0x4];
        [FieldOffset(0x3c)] public fixed byte _[0x4];
        [FieldOffset(0x40)] public fixed byte _[0x8];
        [FieldOffset(0x48)] public fixed byte _[0x4];
        [FieldOffset(0x4c)] public fixed byte _[0x4];
        [FieldOffset(0x50)] public fixed byte _[0x18];
        [FieldOffset(0x68)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct IKDemoCaptureSettings_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x6)]
    public unsafe struct CSeqMultiFetchFlag {
        [FieldOffset(0x0)] public fixed byte _[0x1];
        [FieldOffset(0x1)] public fixed byte _[0x1];
        [FieldOffset(0x2)] public fixed byte _[0x1];
        [FieldOffset(0x3)] public fixed byte _[0x1];
        [FieldOffset(0x4)] public fixed byte _[0x1];
        [FieldOffset(0x5)] public fixed byte _[0x1];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct PulseRegisterMap_t {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x10];
        [FieldOffset(0x20)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct VPhysXRange_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xa0)]
    public unsafe struct CStopAtGoalUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x74];
        [FieldOffset(0x74)] public fixed byte _[0x4];
        [FieldOffset(0x78)] public fixed byte _[0x4];
        [FieldOffset(0x7c)] public fixed byte _[0x4];
        [FieldOffset(0x80)] public fixed byte _[0x8];
        [FieldOffset(0x88)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmIDEventPercentageThroughNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CAnimBoneDifference {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x10];
        [FieldOffset(0x20)] public fixed byte _[0xc];
        [FieldOffset(0x2c)] public fixed byte _[0x1];
        [FieldOffset(0x2d)] public fixed byte _[0x3];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmCachedBoolNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CAnimCycle {
        [FieldOffset(0x0)] public fixed byte pad_0[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CActionComponentUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CDirectionalBlendInstanceData {
        [FieldOffset(0x0)] public fixed byte _[0x14];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0xc];
        [FieldOffset(0x28)] public fixed byte _[0xc];
        [FieldOffset(0x34)] public fixed byte _[0xc];
        [FieldOffset(0x40)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CDampedPathAnimMotorUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x2c];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
        [FieldOffset(0x30)] public fixed byte _[0x4];
        [FieldOffset(0x34)] public fixed byte _[0x2];
        [FieldOffset(0x36)] public fixed byte _[0x2];
        [FieldOffset(0x38)] public fixed byte _[0x4];
        [FieldOffset(0x3c)] public fixed byte _[0x4];
        [FieldOffset(0x40)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmCachedFloatNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmFloatSwitchNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x2];
        [FieldOffset(0x12)] public fixed byte _[0x2];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CModelConfigElement_SetMaterialGroupOnAttachedModels {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CNmFloatChannelData {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x18];
        [FieldOffset(0x40)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CNmEntityAttributeEventBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmVirtualParameterBoneMaskNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct SequenceData {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x34];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CPathHelperUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte _[0x4];
        [FieldOffset(0x74)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct MaterialGroup_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CMorphBundleData {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x18];
        [FieldOffset(0x20)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CModelConfigElement_UserPick {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CSolveIKTargetHandle_t {
        [FieldOffset(0x0)] public fixed byte _[0x2];
        [FieldOffset(0x2)] public fixed byte _[0x2];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xb0)]
    public unsafe struct CFootAdjustmentUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte _[0x18];
        [FieldOffset(0x90)] public fixed byte _[0x4];
        [FieldOffset(0x94)] public fixed byte _[0x4];
        [FieldOffset(0x98)] public fixed byte _[0x4];
        [FieldOffset(0x9c)] public fixed byte _[0x4];
        [FieldOffset(0xa0)] public fixed byte _[0x4];
        [FieldOffset(0xa4)] public fixed byte _[0x4];
        [FieldOffset(0xa8)] public fixed byte _[0x1];
        [FieldOffset(0xa9)] public fixed byte _[0x7];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CChoreoUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CAimConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
        [FieldOffset(0x60)] public fixed byte _[0x10];
        [FieldOffset(0x70)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc)]
    public unsafe struct CMaterialDrawDescriptor__RigidMeshPart_t {
        [FieldOffset(0x0)] public fixed byte _[0x2];
        [FieldOffset(0x2)] public fixed byte _[0x2];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CFootFallAnimTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
        [FieldOffset(0x58)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x120)]
    public unsafe struct CMaterialDrawDescriptor {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0xc];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x1];
        [FieldOffset(0x2d)] public fixed byte _[0x3];
        [FieldOffset(0x30)] public fixed byte _[0x10];
        [FieldOffset(0x40)] public fixed byte _[0x10];
        [FieldOffset(0x50)] public fixed byte _[0x4];
        [FieldOffset(0x54)] public fixed byte _[0x4];
        [FieldOffset(0x58)] public fixed byte _[0x4];
        [FieldOffset(0x5c)] public fixed byte _[0x4];
        [FieldOffset(0x60)] public fixed byte _[0x68];
        [FieldOffset(0xc8)] public fixed byte _[0x20];
        [FieldOffset(0xe8)] public fixed byte _[0x30];
        [FieldOffset(0x118)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x100)]
    public unsafe struct CNmSkeleton {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x10];
        [FieldOffset(0x18)] public fixed byte _[0x18];
        [FieldOffset(0x30)] public fixed byte _[0x18];
        [FieldOffset(0x48)] public fixed byte _[0x18];
        [FieldOffset(0x60)] public fixed byte _[0x4];
        [FieldOffset(0x64)] public fixed byte _[0x24];
        [FieldOffset(0x88)] public fixed byte _[0x20];
        [FieldOffset(0xa8)] public fixed byte _[0x10];
        [FieldOffset(0xb8)] public fixed byte _[0x10];
        [FieldOffset(0xc8)] public fixed byte _[0x18];
        [FieldOffset(0xe0)] public fixed byte _[0x18];
        [FieldOffset(0xf8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CStepsRemainingMetricEvaluator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
        [FieldOffset(0x50)] public fixed byte _[0x18];
        [FieldOffset(0x68)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CNmVelocityBlendNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CNmZeroPoseTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CNmClothEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
        [FieldOffset(0x28)] public fixed byte _[0x8];
        [FieldOffset(0x30)] public fixed byte _[0x8];
        [FieldOffset(0x38)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CBodyGroupSetting {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CVectorQuantizer {
        [FieldOffset(0x0)] public fixed byte _[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct ParticleNamedValueConfiguration_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x10];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x8];
        [FieldOffset(0x30)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmVectorCreateNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x2];
        [FieldOffset(0x12)] public fixed byte _[0x2];
        [FieldOffset(0x14)] public fixed byte _[0x2];
        [FieldOffset(0x16)] public fixed byte _[0x2];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x6d8)]
    public unsafe struct CParticleVecInput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0xc];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x40];
        [FieldOffset(0x68)] public fixed byte _[0x4];
        [FieldOffset(0x6c)] public fixed byte _[0x4];
        [FieldOffset(0x70)] public fixed byte _[0xc];
        [FieldOffset(0x7c)] public fixed byte _[0x4];
        [FieldOffset(0x80)] public fixed byte _[0x4];
        [FieldOffset(0x84)] public fixed byte _[0xc];
        [FieldOffset(0x90)] public fixed byte _[0xc];
        [FieldOffset(0x9c)] public fixed byte _[0xc];
        [FieldOffset(0xa8)] public fixed byte _[0x178];
        [FieldOffset(0x220)] public fixed byte _[0x178];
        [FieldOffset(0x398)] public fixed byte _[0x178];
        [FieldOffset(0x510)] public fixed byte _[0x178];
        [FieldOffset(0x688)] public fixed byte _[0x4];
        [FieldOffset(0x68c)] public fixed byte _[0x4];
        [FieldOffset(0x690)] public fixed byte _[0xc];
        [FieldOffset(0x69c)] public fixed byte _[0xc];
        [FieldOffset(0x6a8)] public fixed byte _[0x18];
        [FieldOffset(0x6c0)] public fixed byte _[0xc];
        [FieldOffset(0x6cc)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xb0)]
    public unsafe struct CNmStateNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x20];
        [FieldOffset(0x38)] public fixed byte _[0x20];
        [FieldOffset(0x58)] public fixed byte _[0x20];
        [FieldOffset(0x78)] public fixed byte _[0x18];
        [FieldOffset(0x90)] public fixed byte _[0x18];
        [FieldOffset(0xa8)] public fixed byte _[0x2];
        [FieldOffset(0xaa)] public fixed byte _[0x2];
        [FieldOffset(0xac)] public fixed byte _[0x2];
        [FieldOffset(0xae)] public fixed byte _[0x1];
        [FieldOffset(0xaf)] public fixed byte _[0x1];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CNmBoneMaskSelectorNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x2];
        [FieldOffset(0x12)] public fixed byte _[0x2];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x18];
        [FieldOffset(0x30)] public fixed byte _[0x40];
        [FieldOffset(0x70)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmVirtualParameterVectorNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct CFootCycleMetricEvaluator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
        [FieldOffset(0x50)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmConstIDNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CHitBox {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0xc];
        [FieldOffset(0x24)] public fixed byte _[0xc];
        [FieldOffset(0x30)] public fixed byte _[0x4];
        [FieldOffset(0x34)] public fixed byte _[0x4];
        [FieldOffset(0x38)] public fixed byte _[0x4];
        [FieldOffset(0x3c)] public fixed byte _[0x1];
        [FieldOffset(0x3d)] public fixed byte _[0x3];
        [FieldOffset(0x40)] public fixed byte _[0x4];
        [FieldOffset(0x44)] public fixed byte _[0x4];
        [FieldOffset(0x48)] public fixed byte _[0x28];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CNmParameterizedSelectorNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x10];
        [FieldOffset(0x38)] public fixed byte _[0x2];
        [FieldOffset(0x3a)] public fixed byte _[0x1];
        [FieldOffset(0x3b)] public fixed byte _[0x5];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xa8)]
    public unsafe struct ModelSkeletonData_t {
        [FieldOffset(0x0)] public fixed byte _[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x18];
        [FieldOffset(0x30)] public fixed byte _[0x18];
        [FieldOffset(0x48)] public fixed byte _[0x18];
        [FieldOffset(0x60)] public fixed byte _[0x18];
        [FieldOffset(0x78)] public fixed byte _[0x18];
        [FieldOffset(0x90)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct NmCompressionSettings_t__QuantizationRange_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x100)]
    public unsafe struct CNmBlendTaskBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x100];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc)]
    public unsafe struct TagSpan_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CNmConstTargetNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x30];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct CRemapValueUpdateItem {
        [FieldOffset(0x0)] public fixed byte _[0x2];
        [FieldOffset(0x2)] public fixed byte _[0x2];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct PermModelDataAnimatedMaterialAttribute_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CMotionDataSet {
        [FieldOffset(0x0)] public fixed byte _[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct ParticleAttributeIndex_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CProductQuantizer {
        [FieldOffset(0x0)] public fixed byte _[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc0)]
    public unsafe struct CChoiceUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
        [FieldOffset(0x60)] public fixed byte _[0x18];
        [FieldOffset(0x78)] public fixed byte _[0x18];
        [FieldOffset(0x90)] public fixed byte _[0x18];
        [FieldOffset(0xa8)] public fixed byte _[0x4];
        [FieldOffset(0xac)] public fixed byte _[0x4];
        [FieldOffset(0xb0)] public fixed byte _[0x4];
        [FieldOffset(0xb4)] public fixed byte _[0x4];
        [FieldOffset(0xb8)] public fixed byte _[0x1];
        [FieldOffset(0xb9)] public fixed byte _[0x1];
        [FieldOffset(0xba)] public fixed byte _[0x6];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct SkeletonAnimCapture_t__Bone_t {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x20];
        [FieldOffset(0x30)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CExpressionActionUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x2];
        [FieldOffset(0x1a)] public fixed byte _[0x2];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmFloatMathNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x2];
        [FieldOffset(0x12)] public fixed byte _[0x2];
        [FieldOffset(0x14)] public fixed byte _[0x1];
        [FieldOffset(0x15)] public fixed byte _[0x1];
        [FieldOffset(0x16)] public fixed byte _[0x2];
        [FieldOffset(0x18)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CAnimationGraphVisualizerLine {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
        [FieldOffset(0x40)] public fixed byte _[0x10];
        [FieldOffset(0x50)] public fixed byte _[0x10];
        [FieldOffset(0x60)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CCycleControlUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte _[0x4];
        [FieldOffset(0x74)] public fixed byte _[0x2];
        [FieldOffset(0x76)] public fixed byte _[0x2];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmTargetInfoNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CDampedValueComponentUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CBaseConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x10];
        [FieldOffset(0x38)] public fixed byte _[0x10];
        [FieldOffset(0x48)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmControlParameterFloatNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct BlendItem_t {
        [FieldOffset(0x0)] public fixed byte _[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x10];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x8];
        [FieldOffset(0x34)] public fixed byte _[0x4];
        [FieldOffset(0x38)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct DampedPathMotorInstanceData_t {
        [FieldOffset(0x0)] public fixed byte _[0xc];
        [FieldOffset(0xc)] public fixed byte _[0x18];
        [FieldOffset(0x24)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmIsExternalGraphSlotFilledNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xd8)]
    public unsafe struct CNewParticleEffect {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x18];
        [FieldOffset(0x40)] public fixed byte _[0xc];
        [FieldOffset(0x4c)] public fixed byte _[0x4];
        [FieldOffset(0x50)] public fixed byte _[0x8];
        [FieldOffset(0x58)] public fixed byte _[0x18];
        [FieldOffset(0x70)] public fixed byte _[0x4];
        [FieldOffset(0x74)] public fixed byte _[0x4];
        [FieldOffset(0x78)] public fixed byte _[0x4];
        [FieldOffset(0x7c)] public fixed byte _[0xc];
        [FieldOffset(0x88)] public fixed byte _[0xc];
        [FieldOffset(0x94)] public fixed byte _[0x4];
        [FieldOffset(0x98)] public fixed byte _[0x38];
        [FieldOffset(0xd0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CNmClipNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x2];
        [FieldOffset(0x12)] public fixed byte _[0x1];
        [FieldOffset(0x13)] public fixed byte _[0x1];
        [FieldOffset(0x14)] public fixed byte _[0x2];
        [FieldOffset(0x16)] public fixed byte _[0x2];
        [FieldOffset(0x18)] public fixed byte _[0x28];
        [FieldOffset(0x40)] public fixed byte _[0x4];
        [FieldOffset(0x44)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x130)]
    public unsafe struct CNmMaterialAttributeEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x8];
        [FieldOffset(0x30)] public fixed byte _[0x40];
        [FieldOffset(0x70)] public fixed byte _[0x40];
        [FieldOffset(0xb0)] public fixed byte _[0x40];
        [FieldOffset(0xf0)] public fixed byte _[0x40];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct TagStatus {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CNmBlend1DNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte _[0x50];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CConcreteAnimParameter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte _[0x4];
        [FieldOffset(0x74)] public fixed byte _[0x4];
        [FieldOffset(0x78)] public fixed byte _[0x1];
        [FieldOffset(0x79)] public fixed byte _[0x1];
        [FieldOffset(0x7a)] public fixed byte _[0x1];
        [FieldOffset(0x7b)] public fixed byte _[0x5];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x110)]
    public unsafe struct CNmBoneWeightList {
        [FieldOffset(0x0)] public fixed byte _[0xe0];
        [FieldOffset(0xe0)] public fixed byte _[0x18];
        [FieldOffset(0xf8)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CPairedSequenceUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CModelConfigElement_RandomPick {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x18];
        [FieldOffset(0x60)] public fixed byte _[0x20];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CNmReferencePoseTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmScaleNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x2];
        [FieldOffset(0x1a)] public fixed byte _[0x6];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x100)]
    public unsafe struct VPhysXConstraint2_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x2];
        [FieldOffset(0x6)] public fixed byte _[0x2];
        [FieldOffset(0x8)] public fixed byte _[0xf8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CConstraintTarget {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
        [FieldOffset(0x20)] public fixed byte _[0x10];
        [FieldOffset(0x30)] public fixed byte _[0xc];
        [FieldOffset(0x3c)] public fixed byte _[0x4];
        [FieldOffset(0x40)] public fixed byte _[0x8];
        [FieldOffset(0x48)] public fixed byte _[0x11];
        [FieldOffset(0x59)] public fixed byte _[0x7];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc0)]
    public unsafe struct SkeletonAnimCapture_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x18];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x8];
        [FieldOffset(0x30)] public fixed byte _[0x18];
        [FieldOffset(0x48)] public fixed byte _[0x18];
        [FieldOffset(0x60)] public fixed byte _[0x4];
        [FieldOffset(0x64)] public fixed byte _[0x44];
        [FieldOffset(0xa8)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CAnimUser {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CPulse_TempVarBankDefinition {
        [FieldOffset(0x0)] public fixed byte _[0x28];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xd8)]
    public unsafe struct CRagdollComponentUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte _[0x18];
        [FieldOffset(0x48)] public fixed byte _[0x18];
        [FieldOffset(0x60)] public fixed byte _[0x18];
        [FieldOffset(0x78)] public fixed byte _[0x18];
        [FieldOffset(0x90)] public fixed byte _[0x18];
        [FieldOffset(0xa8)] public fixed byte _[0x18];
        [FieldOffset(0xc0)] public fixed byte _[0x4];
        [FieldOffset(0xc4)] public fixed byte _[0x4];
        [FieldOffset(0xc8)] public fixed byte _[0x4];
        [FieldOffset(0xcc)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct ParticleNamedValueSource_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x38];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CFootDefinition {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0xc];
        [FieldOffset(0x24)] public fixed byte _[0xc];
        [FieldOffset(0x30)] public fixed byte _[0x4];
        [FieldOffset(0x34)] public fixed byte _[0x4];
        [FieldOffset(0x38)] public fixed byte _[0x4];
        [FieldOffset(0x3c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CSeqSynthAnimDesc {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0xc];
        [FieldOffset(0x1c)] public fixed byte _[0x8];
        [FieldOffset(0x24)] public fixed byte _[0x2];
        [FieldOffset(0x26)] public fixed byte _[0x2];
        [FieldOffset(0x28)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc)]
    public unsafe struct CNmLayerBlendNode__LayerDefinition_t {
        [FieldOffset(0x0)] public fixed byte _[0x2];
        [FieldOffset(0x2)] public fixed byte _[0x2];
        [FieldOffset(0x4)] public fixed byte _[0x2];
        [FieldOffset(0x6)] public fixed byte _[0x2];
        [FieldOffset(0x8)] public fixed byte _[0x1];
        [FieldOffset(0x9)] public fixed byte _[0x1];
        [FieldOffset(0xa)] public fixed byte _[0x1];
        [FieldOffset(0xb)] public fixed byte _[0x1];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CAnimComponentUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
        [FieldOffset(0x28)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xf8)]
    public unsafe struct CBlend2DUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
        [FieldOffset(0x60)] public fixed byte _[0x18];
        [FieldOffset(0x78)] public fixed byte _[0x18];
        [FieldOffset(0x90)] public fixed byte _[0x18];
        [FieldOffset(0xa8)] public fixed byte _[0x18];
        [FieldOffset(0xc0)] public fixed byte _[0x18];
        [FieldOffset(0xd8)] public fixed byte _[0x4];
        [FieldOffset(0xdc)] public fixed byte _[0x4];
        [FieldOffset(0xe0)] public fixed byte _[0x4];
        [FieldOffset(0xe4)] public fixed byte _[0x4];
        [FieldOffset(0xe8)] public fixed byte _[0x4];
        [FieldOffset(0xec)] public fixed byte _[0x4];
        [FieldOffset(0xf0)] public fixed byte _[0x1];
        [FieldOffset(0xf1)] public fixed byte _[0x1];
        [FieldOffset(0xf2)] public fixed byte _[0x1];
        [FieldOffset(0xf3)] public fixed byte _[0x5];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmVelocityBasedSpeedScaleNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CNPCPhysicsHull {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0xc];
        [FieldOffset(0x20)] public fixed byte _[0xc];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
        [FieldOffset(0x30)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct PermModelExtPart_t {
        [FieldOffset(0x0)] public fixed byte _[0x20];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x8];
        [FieldOffset(0x30)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmCachedIDNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xf0)]
    public unsafe struct CLeanMatrixUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x5c];
        [FieldOffset(0x5c)] public fixed byte _[0x24];
        [FieldOffset(0x80)] public fixed byte _[0x28];
        [FieldOffset(0xa8)] public fixed byte _[0x18];
        [FieldOffset(0xc0)] public fixed byte _[0x4];
        [FieldOffset(0xc4)] public fixed byte _[0x4];
        [FieldOffset(0xc8)] public fixed byte _[0xc];
        [FieldOffset(0xd4)] public fixed byte _[0xc];
        [FieldOffset(0xe0)] public fixed byte _[0x4];
        [FieldOffset(0xe4)] public fixed byte _[0x4];
        [FieldOffset(0xe8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CSymbolAnimParameter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CNmFloatCurveEventNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct IAnimationGraphInstance {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CNmStateMachineNode__TransitionDefinition_t {
        [FieldOffset(0x0)] public fixed byte _[0x2];
        [FieldOffset(0x2)] public fixed byte _[0x2];
        [FieldOffset(0x4)] public fixed byte _[0x2];
        [FieldOffset(0x6)] public fixed byte _[0x2];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CNmFloatSelectorNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x20];
        [FieldOffset(0x48)] public fixed byte _[0x4];
        [FieldOffset(0x4c)] public fixed byte _[0x4];
        [FieldOffset(0x50)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xa0)]
    public unsafe struct CTargetSelectorUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
        [FieldOffset(0x60)] public fixed byte _[0x8];
        [FieldOffset(0x68)] public fixed byte _[0x1c];
        [FieldOffset(0x84)] public fixed byte _[0x2];
        [FieldOffset(0x86)] public fixed byte _[0x2];
        [FieldOffset(0x88)] public fixed byte _[0x2];
        [FieldOffset(0x8a)] public fixed byte _[0x2];
        [FieldOffset(0x8c)] public fixed byte _[0x1];
        [FieldOffset(0x8d)] public fixed byte _[0x1];
        [FieldOffset(0x8e)] public fixed byte _[0x2];
        [FieldOffset(0x90)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc)]
    public unsafe struct SlopeData {
        [FieldOffset(0x0)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CHitBoxSetList {
        [FieldOffset(0x0)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmIsInactiveBranchConditionNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct MotionDBIndex {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CDirectPlaybackTagData {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x6d8)]
    public unsafe struct CParticleCollectionVecInput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x6d8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmGraphEventConditionNode__Condition_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CNmFloatRemapNode__RemapRange_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmCurrentSyncEventIDNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmStateCompletedConditionNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x2];
        [FieldOffset(0x12)] public fixed byte _[0x2];
        [FieldOffset(0x14)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CNmCameraFOVEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x40];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmTargetWarpEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x1];
        [FieldOffset(0x19)] public fixed byte _[0x7];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CParamSpanUpdater {
        [FieldOffset(0x0)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CAnimActionUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x98)]
    public unsafe struct CParticleAnimTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
        [FieldOffset(0x58)] public fixed byte _[0x8];
        [FieldOffset(0x60)] public fixed byte _[0x8];
        [FieldOffset(0x68)] public fixed byte _[0x8];
        [FieldOffset(0x70)] public fixed byte _[0x1];
        [FieldOffset(0x71)] public fixed byte _[0x1];
        [FieldOffset(0x72)] public fixed byte _[0x1];
        [FieldOffset(0x73)] public fixed byte _[0x5];
        [FieldOffset(0x78)] public fixed byte _[0x8];
        [FieldOffset(0x80)] public fixed byte _[0x8];
        [FieldOffset(0x88)] public fixed byte _[0x8];
        [FieldOffset(0x90)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CCycleBase {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct FollowTargetOpFixedSettings_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x1];
        [FieldOffset(0xd)] public fixed byte _[0x3];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CNmIDSwitchNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x2];
        [FieldOffset(0x12)] public fixed byte _[0x2];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmRootMotionEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CPulse_PublicOutput {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x34)]
    public unsafe struct CChoiceInstanceData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0xc];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0xc];
        [FieldOffset(0x2c)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct CNmContactAudioTypeVData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CNmCameraDOFEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x40];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x110)]
    public unsafe struct AnimationSnapshotBase_t {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x30];
        [FieldOffset(0x40)] public fixed byte _[0x8];
        [FieldOffset(0x48)] public fixed byte _[0x18];
        [FieldOffset(0x60)] public fixed byte _[0x18];
        [FieldOffset(0x78)] public fixed byte _[0x18];
        [FieldOffset(0x90)] public fixed byte _[0x4];
        [FieldOffset(0x94)] public fixed byte _[0x4];
        [FieldOffset(0x98)] public fixed byte _[0x78];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CEmitTagActionUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc)]
    public unsafe struct DynamicMeshDeformParams_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x1];
        [FieldOffset(0x9)] public fixed byte _[0x1];
        [FieldOffset(0xa)] public fixed byte _[0x1];
        [FieldOffset(0xb)] public fixed byte _[0x1];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmTimeConditionNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x2];
        [FieldOffset(0x12)] public fixed byte _[0x2];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x1];
        [FieldOffset(0x19)] public fixed byte _[0x7];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmSyncEventIndexConditionNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x2];
        [FieldOffset(0x12)] public fixed byte _[0x2];
        [FieldOffset(0x14)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CAnimStateMachineUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x18];
        [FieldOffset(0x20)] public fixed byte _[0x30];
        [FieldOffset(0x50)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CUnaryUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
        [FieldOffset(0x60)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct CNmIDToFloatNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x30];
        [FieldOffset(0x48)] public fixed byte _[0x20];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct PlayerInputMotorInstanceData_t {
        [FieldOffset(0x0)] public fixed byte _[0xc];
        [FieldOffset(0xc)] public fixed byte _[0xc];
        [FieldOffset(0x18)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xb8)]
    public unsafe struct CSelectorUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
        [FieldOffset(0x60)] public fixed byte _[0x18];
        [FieldOffset(0x78)] public fixed byte _[0x1c];
        [FieldOffset(0x94)] public fixed byte _[0x8];
        [FieldOffset(0x9c)] public fixed byte _[0x8];
        [FieldOffset(0xa4)] public fixed byte _[0x4];
        [FieldOffset(0xa8)] public fixed byte _[0x4];
        [FieldOffset(0xac)] public fixed byte _[0x4];
        [FieldOffset(0xb0)] public fixed byte _[0x1];
        [FieldOffset(0xb1)] public fixed byte _[0x1];
        [FieldOffset(0xb2)] public fixed byte _[0x6];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct NmPercent_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CStateMachineComponentUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte _[0x58];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CAnimUpdateNodeRef {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CPulse_OutputConnection {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x10];
        [FieldOffset(0x20)] public fixed byte _[0x10];
        [FieldOffset(0x30)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc8)]
    public unsafe struct CPhysSurfaceProperties {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0xc];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x18];
        [FieldOffset(0x40)] public fixed byte _[0x8];
        [FieldOffset(0x48)] public fixed byte _[0x60];
        [FieldOffset(0xa8)] public fixed byte _[0x20];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmBoneMaskValueNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CSeqPoseParamDesc {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CModelConfigElement_SetBodygroup {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x8];
        [FieldOffset(0x50)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x2c)]
    public unsafe struct CAnimMovement {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0xc];
        [FieldOffset(0x20)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x178)]
    public unsafe struct CParticleRemapFloatInput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct FollowAttachmentData {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct FootStepTrigger {
        [FieldOffset(0x0)] public fixed byte _[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmSyncTrack__EventMarker_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CPathMetricEvaluator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
        [FieldOffset(0x50)] public fixed byte _[0x18];
        [FieldOffset(0x68)] public fixed byte _[0x4];
        [FieldOffset(0x6c)] public fixed byte _[0x4];
        [FieldOffset(0x70)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x158)]
    public unsafe struct CFootLockUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte _[0x70];
        [FieldOffset(0xe0)] public fixed byte _[0x18];
        [FieldOffset(0xf8)] public fixed byte _[0x18];
        [FieldOffset(0x110)] public fixed byte _[0x18];
        [FieldOffset(0x128)] public fixed byte _[0x4];
        [FieldOffset(0x12c)] public fixed byte _[0x4];
        [FieldOffset(0x130)] public fixed byte _[0x4];
        [FieldOffset(0x134)] public fixed byte _[0x4];
        [FieldOffset(0x138)] public fixed byte _[0x4];
        [FieldOffset(0x13c)] public fixed byte _[0x4];
        [FieldOffset(0x140)] public fixed byte _[0x4];
        [FieldOffset(0x144)] public fixed byte _[0x4];
        [FieldOffset(0x148)] public fixed byte _[0x4];
        [FieldOffset(0x14c)] public fixed byte _[0x4];
        [FieldOffset(0x150)] public fixed byte _[0x1];
        [FieldOffset(0x151)] public fixed byte _[0x1];
        [FieldOffset(0x152)] public fixed byte _[0x1];
        [FieldOffset(0x153)] public fixed byte _[0x1];
        [FieldOffset(0x154)] public fixed byte _[0x1];
        [FieldOffset(0x155)] public fixed byte _[0x3];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmOrientationWarpEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmIDValueNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct PulseGraphExecutionHistoryNodeDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x2c)]
    public unsafe struct JiggleBoneSettings_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0xc];
        [FieldOffset(0x1c)] public fixed byte _[0xc];
        [FieldOffset(0x28)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xd8)]
    public unsafe struct CJumpHelperUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0xb0];
        [FieldOffset(0xb0)] public fixed byte _[0x4];
        [FieldOffset(0xb4)] public fixed byte _[0xc];
        [FieldOffset(0xc0)] public fixed byte _[0x4];
        [FieldOffset(0xc4)] public fixed byte _[0x4];
        [FieldOffset(0xc8)] public fixed byte _[0x4];
        [FieldOffset(0xcc)] public fixed byte _[0x4];
        [FieldOffset(0xd0)] public fixed byte _[0x3];
        [FieldOffset(0xd3)] public fixed byte _[0x5];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmControlParameterBoolNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x120)]
    public unsafe struct CNmChainLookatTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0x120];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct FootLockPoseOpFixedSettings {
        [FieldOffset(0x0)] public fixed byte _[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x18];
        [FieldOffset(0x30)] public fixed byte _[0x4];
        [FieldOffset(0x34)] public fixed byte _[0x4];
        [FieldOffset(0x38)] public fixed byte _[0x1];
        [FieldOffset(0x39)] public fixed byte _[0x1];
        [FieldOffset(0x3a)] public fixed byte _[0x1];
        [FieldOffset(0x3b)] public fixed byte _[0x1];
        [FieldOffset(0x3c)] public fixed byte _[0x4];
        [FieldOffset(0x40)] public fixed byte _[0x4];
        [FieldOffset(0x44)] public fixed byte _[0x4];
        [FieldOffset(0x48)] public fixed byte _[0x4];
        [FieldOffset(0x4c)] public fixed byte _[0x4];
        [FieldOffset(0x50)] public fixed byte _[0x4];
        [FieldOffset(0x54)] public fixed byte _[0x4];
        [FieldOffset(0x58)] public fixed byte _[0x4];
        [FieldOffset(0x5c)] public fixed byte _[0x4];
        [FieldOffset(0x60)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CBoneVelocityMetricEvaluator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
        [FieldOffset(0x50)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CWarpSectionAnimTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
        [FieldOffset(0x50)] public fixed byte _[0x1];
        [FieldOffset(0x51)] public fixed byte _[0x7];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x2c)]
    public unsafe struct SelectorInstanceData_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0xc];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x14];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CModelConfigElement_RandomColor {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CFootMotion {
        [FieldOffset(0x0)] public fixed byte _[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CJiggleBoneUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte _[0x20];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmConstVectorNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct MoodAnimation_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CLODComponentUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmIsTargetSetNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CPhysSurfacePropertiesVehicle {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CAnimDataChannelDesc {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x10];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
        [FieldOffset(0x28)] public fixed byte _[0x10];
        [FieldOffset(0x38)] public fixed byte _[0x10];
        [FieldOffset(0x48)] public fixed byte _[0x18];
        [FieldOffset(0x60)] public fixed byte _[0x18];
        [FieldOffset(0x78)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CPairedSequenceComponentUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x38];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CNmParticleEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x8];
        [FieldOffset(0x30)] public fixed byte _[0x8];
        [FieldOffset(0x38)] public fixed byte _[0x1];
        [FieldOffset(0x39)] public fixed byte _[0x1];
        [FieldOffset(0x3a)] public fixed byte _[0x6];
        [FieldOffset(0x40)] public fixed byte _[0x8];
        [FieldOffset(0x48)] public fixed byte _[0x8];
        [FieldOffset(0x50)] public fixed byte _[0x8];
        [FieldOffset(0x58)] public fixed byte _[0x8];
        [FieldOffset(0x60)] public fixed byte _[0x8];
        [FieldOffset(0x68)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct MotionSelection {
        [FieldOffset(0x0)] public fixed byte pad_0[0x24];
        [FieldOffset(0x24)] public fixed byte _[0xc];
        [FieldOffset(0x30)] public fixed byte _[0xc];
        [FieldOffset(0x3c)] public fixed byte _[0xc];
        [FieldOffset(0x48)] public fixed byte _[0xc];
        [FieldOffset(0x54)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CMorphRectData {
        [FieldOffset(0x0)] public fixed byte _[0x2];
        [FieldOffset(0x2)] public fixed byte _[0x2];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CAnimFoot {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0xc];
        [FieldOffset(0x14)] public fixed byte _[0xc];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CParentConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmCachedVectorNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmStateNode__TimedEvent_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CFootPositionMetricEvaluator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
        [FieldOffset(0x50)] public fixed byte _[0x18];
        [FieldOffset(0x68)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CParticleVariableRef {
        [FieldOffset(0x0)] public fixed byte _[0x38];
        [FieldOffset(0x38)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x2c)]
    public unsafe struct CMoverInstanceData {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x18];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct HSequence {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CDampedValueUpdateItem {
        [FieldOffset(0x0)] public fixed byte _[0x20];
        [FieldOffset(0x20)] public fixed byte _[0x2];
        [FieldOffset(0x22)] public fixed byte _[0x6];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CAnimLocalHierarchy {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x10];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xe0)]
    public unsafe struct CBlendUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
        [FieldOffset(0x60)] public fixed byte _[0x18];
        [FieldOffset(0x78)] public fixed byte _[0x18];
        [FieldOffset(0x90)] public fixed byte _[0x1c];
        [FieldOffset(0xac)] public fixed byte _[0x4];
        [FieldOffset(0xb0)] public fixed byte _[0x4];
        [FieldOffset(0xb4)] public fixed byte _[0x4];
        [FieldOffset(0xb8)] public fixed byte _[0x18];
        [FieldOffset(0xd0)] public fixed byte _[0x4];
        [FieldOffset(0xd4)] public fixed byte _[0x1];
        [FieldOffset(0xd5)] public fixed byte _[0x1];
        [FieldOffset(0xd6)] public fixed byte _[0x1];
        [FieldOffset(0xd7)] public fixed byte _[0x1];
        [FieldOffset(0xd8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct PulseGraphExecutionHistoryEntry_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x10];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x10];
        [FieldOffset(0x30)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xa0)]
    public unsafe struct CQuaternionAnimParameter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte _[0x10];
        [FieldOffset(0x90)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x2f8)]
    public unsafe struct PermModelData_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x58];
        [FieldOffset(0x60)] public fixed byte _[0x18];
        [FieldOffset(0x78)] public fixed byte _[0x18];
        [FieldOffset(0x90)] public fixed byte _[0x18];
        [FieldOffset(0xa8)] public fixed byte _[0x18];
        [FieldOffset(0xc0)] public fixed byte _[0x18];
        [FieldOffset(0xd8)] public fixed byte _[0x18];
        [FieldOffset(0xf0)] public fixed byte _[0x18];
        [FieldOffset(0x108)] public fixed byte _[0x18];
        [FieldOffset(0x120)] public fixed byte _[0x18];
        [FieldOffset(0x138)] public fixed byte _[0x18];
        [FieldOffset(0x150)] public fixed byte _[0x18];
        [FieldOffset(0x168)] public fixed byte _[0x18];
        [FieldOffset(0x180)] public fixed byte _[0x8];
        [FieldOffset(0x188)] public fixed byte _[0xa8];
        [FieldOffset(0x230)] public fixed byte _[0x18];
        [FieldOffset(0x248)] public fixed byte _[0x18];
        [FieldOffset(0x260)] public fixed byte _[0x18];
        [FieldOffset(0x278)] public fixed byte _[0x8];
        [FieldOffset(0x280)] public fixed byte _[0x18];
        [FieldOffset(0x298)] public fixed byte _[0x18];
        [FieldOffset(0x2b0)] public fixed byte _[0x18];
        [FieldOffset(0x2c8)] public fixed byte _[0x18];
        [FieldOffset(0x2e0)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct PulseCursorYieldToken_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CNmSampleTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x24)]
    public unsafe struct CFollowPathInstanceData {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0xc];
        [FieldOffset(0x1c)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CStaticPoseCacheBuilder {
        [FieldOffset(0x0)] public fixed byte pad_0[0x38];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct ModelMeshBufferData_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x1];
        [FieldOffset(0xd)] public fixed byte _[0x1];
        [FieldOffset(0xe)] public fixed byte _[0x1];
        [FieldOffset(0xf)] public fixed byte _[0x1];
        [FieldOffset(0x10)] public fixed byte _[0x1];
        [FieldOffset(0x11)] public fixed byte _[0x1];
        [FieldOffset(0x12)] public fixed byte _[0x1];
        [FieldOffset(0x13)] public fixed byte _[0x1];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x138)]
    public unsafe struct CSequenceGroupData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x10];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x18];
        [FieldOffset(0x40)] public fixed byte _[0x18];
        [FieldOffset(0x58)] public fixed byte _[0x18];
        [FieldOffset(0x70)] public fixed byte _[0x18];
        [FieldOffset(0x88)] public fixed byte _[0x18];
        [FieldOffset(0xa0)] public fixed byte _[0x18];
        [FieldOffset(0xb8)] public fixed byte _[0x18];
        [FieldOffset(0xd0)] public fixed byte _[0x18];
        [FieldOffset(0xe8)] public fixed byte _[0x10];
        [FieldOffset(0xf8)] public fixed byte _[0x18];
        [FieldOffset(0x110)] public fixed byte _[0x10];
        [FieldOffset(0x120)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x100)]
    public unsafe struct CStateMachineUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte _[0x58];
        [FieldOffset(0xc8)] public fixed byte _[0x18];
        [FieldOffset(0xe0)] public fixed byte _[0x1c];
        [FieldOffset(0xfc)] public fixed byte _[0x1];
        [FieldOffset(0xfd)] public fixed byte _[0x1];
        [FieldOffset(0xfe)] public fixed byte _[0x2];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CNmIDBasedSelectorNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x30];
        [FieldOffset(0x58)] public fixed byte _[0x2];
        [FieldOffset(0x5a)] public fixed byte _[0x2];
        [FieldOffset(0x5c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x180)]
    public unsafe struct CAimMatrixUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte _[0xf8];
        [FieldOffset(0x168)] public fixed byte _[0x4];
        [FieldOffset(0x16c)] public fixed byte _[0x4];
        [FieldOffset(0x170)] public fixed byte _[0x4];
        [FieldOffset(0x174)] public fixed byte _[0x1];
        [FieldOffset(0x175)] public fixed byte _[0xb];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc0)]
    public unsafe struct SkeletonAnimCapture_t__Frame_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x1c];
        [FieldOffset(0x20)] public fixed byte _[0x20];
        [FieldOffset(0x40)] public fixed byte _[0x8];
        [FieldOffset(0x48)] public fixed byte _[0x18];
        [FieldOffset(0x60)] public fixed byte _[0x18];
        [FieldOffset(0x78)] public fixed byte _[0x18];
        [FieldOffset(0x90)] public fixed byte _[0x18];
        [FieldOffset(0xa8)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CModelConfigElement_Command {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x8];
        [FieldOffset(0x50)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct TargetSelectorInstanceData_t {
        [FieldOffset(0x0)] public fixed byte _[0x1c];
        [FieldOffset(0x1c)] public fixed byte _[0x14];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CAnimEventDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x10];
        [FieldOffset(0x28)] public fixed byte _[0x10];
        [FieldOffset(0x38)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CNmRootMotionData {
        [FieldOffset(0x0)] public fixed byte _[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x10];
        [FieldOffset(0x30)] public fixed byte _[0x20];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CPulseGraphExecutionHistory {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x28];
        [FieldOffset(0x50)] public fixed byte _[0x28];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct AnimScriptHandle {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CFlexOp {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xd0)]
    public unsafe struct CHitReactUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte _[0x4c];
        [FieldOffset(0xbc)] public fixed byte _[0x2];
        [FieldOffset(0xbe)] public fixed byte _[0x2];
        [FieldOffset(0xc0)] public fixed byte _[0x2];
        [FieldOffset(0xc2)] public fixed byte _[0x2];
        [FieldOffset(0xc4)] public fixed byte _[0x4];
        [FieldOffset(0xc8)] public fixed byte _[0x4];
        [FieldOffset(0xcc)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x160)]
    public unsafe struct CLookAtUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte _[0xd8];
        [FieldOffset(0x148)] public fixed byte _[0x4];
        [FieldOffset(0x14c)] public fixed byte _[0x2];
        [FieldOffset(0x14e)] public fixed byte _[0x2];
        [FieldOffset(0x150)] public fixed byte _[0x1];
        [FieldOffset(0x151)] public fixed byte _[0xf];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CAnimBone {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0xc];
        [FieldOffset(0x20)] public fixed byte _[0x10];
        [FieldOffset(0x30)] public fixed byte _[0x4];
        [FieldOffset(0x34)] public fixed byte _[0x10];
        [FieldOffset(0x44)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x100)]
    public unsafe struct CAnimParameterManagerUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x18];
        [FieldOffset(0x30)] public fixed byte _[0x20];
        [FieldOffset(0x50)] public fixed byte _[0x20];
        [FieldOffset(0x70)] public fixed byte _[0x18];
        [FieldOffset(0x88)] public fixed byte _[0x18];
        [FieldOffset(0xa0)] public fixed byte _[0x60];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct BoneDemoCaptureSettings_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x100)]
    public unsafe struct PairedSequenceData {
        [FieldOffset(0x0)] public fixed byte _[0x100];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CBoneConstraintPoseSpaceMorph__Input_t {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct MoodAnimationLayer_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x1];
        [FieldOffset(0x9)] public fixed byte _[0x7];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x8];
        [FieldOffset(0x30)] public fixed byte _[0x8];
        [FieldOffset(0x38)] public fixed byte _[0x4];
        [FieldOffset(0x3c)] public fixed byte _[0x8];
        [FieldOffset(0x44)] public fixed byte _[0x8];
        [FieldOffset(0x4c)] public fixed byte _[0x8];
        [FieldOffset(0x54)] public fixed byte _[0x4];
        [FieldOffset(0x58)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CSpeedScaleUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CSequenceTagSpans {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CModelConfigElement_SetBodygroupOnAttachedModels {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x8];
        [FieldOffset(0x50)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CCurrentVelocityMetricEvaluator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmBoolValueNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CAnimReplayFrame {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x18];
        [FieldOffset(0x40)] public fixed byte _[0x20];
        [FieldOffset(0x60)] public fixed byte _[0x20];
        [FieldOffset(0x80)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CNmTransitionEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CNmFloatCurveEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x40];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct CParticleTransformInput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x40];
        [FieldOffset(0x58)] public fixed byte _[0x1];
        [FieldOffset(0x59)] public fixed byte _[0x1];
        [FieldOffset(0x5a)] public fixed byte _[0x2];
        [FieldOffset(0x5c)] public fixed byte _[0x4];
        [FieldOffset(0x60)] public fixed byte _[0x4];
        [FieldOffset(0x64)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CPathAnimMotorUpdaterBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
        [FieldOffset(0x20)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct PGDInstruction_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x2];
        [FieldOffset(0xa)] public fixed byte _[0x2];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x2];
        [FieldOffset(0x22)] public fixed byte _[0x2];
        [FieldOffset(0x24)] public fixed byte _[0x2];
        [FieldOffset(0x26)] public fixed byte _[0x12];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmFootstepEventPercentageThroughNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x2];
        [FieldOffset(0x12)] public fixed byte _[0x2];
        [FieldOffset(0x14)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct AimCameraOpFixedSettings_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct SkeletonAnimCapture_t__Camera_t {
        [FieldOffset(0x0)] public fixed byte _[0x20];
        [FieldOffset(0x20)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CNmGraphEventConditionNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x68];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x110)]
    public unsafe struct CFollowAttachmentUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte _[0xa0];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xb8)]
    public unsafe struct CMovementComponentUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte _[0x18];
        [FieldOffset(0x48)] public fixed byte _[0x20];
        [FieldOffset(0x68)] public fixed byte _[0x4];
        [FieldOffset(0x6c)] public fixed byte _[0x4];
        [FieldOffset(0x70)] public fixed byte _[0x1];
        [FieldOffset(0x71)] public fixed byte _[0x1];
        [FieldOffset(0x72)] public fixed byte _[0x1];
        [FieldOffset(0x73)] public fixed byte _[0x45];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CModelConfigElement_SetMaterialGroup {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct IParticleEffect {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CFutureFacingMetricEvaluator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
        [FieldOffset(0x50)] public fixed byte _[0x4];
        [FieldOffset(0x54)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CNmIDBasedClipSelectorNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x30];
        [FieldOffset(0x58)] public fixed byte _[0x2];
        [FieldOffset(0x5a)] public fixed byte _[0x2];
        [FieldOffset(0x5c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc)]
    public unsafe struct CLeanMatrixInstanceData {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct NmCompressionSettings_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x10];
        [FieldOffset(0x30)] public fixed byte _[0x10];
        [FieldOffset(0x40)] public fixed byte _[0x1];
        [FieldOffset(0x41)] public fixed byte _[0x1];
        [FieldOffset(0x42)] public fixed byte _[0xe];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulse_Variable {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x18];
        [FieldOffset(0x30)] public fixed byte _[0x14];
        [FieldOffset(0x44)] public fixed byte _[0x4];
        [FieldOffset(0x48)] public fixed byte _[0x1];
        [FieldOffset(0x49)] public fixed byte _[0x3];
        [FieldOffset(0x4c)] public fixed byte _[0x4];
        [FieldOffset(0x50)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct PARTICLE_EHANDLE__ {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xa0)]
    public unsafe struct CAddUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x94];
        [FieldOffset(0x94)] public fixed byte _[0x4];
        [FieldOffset(0x98)] public fixed byte _[0x1];
        [FieldOffset(0x99)] public fixed byte _[0x1];
        [FieldOffset(0x9a)] public fixed byte _[0x1];
        [FieldOffset(0x9b)] public fixed byte _[0x5];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct CAnimEnum {
        [FieldOffset(0x0)] public fixed byte _[0x1];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xb0)]
    public unsafe struct CDemoSettingsComponentUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte _[0x80];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CAnimDecoder {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmCachedTargetNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x178)]
    public unsafe struct CPerParticleFloatInput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmConstBoolNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CNmBitFlags {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CFootStride {
        [FieldOffset(0x0)] public fixed byte _[0x40];
        [FieldOffset(0x40)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x168)]
    public unsafe struct CSceneObjectData__RTProxyDrawDescriptor_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x120];
        [FieldOffset(0x128)] public fixed byte _[0x30];
        [FieldOffset(0x158)] public fixed byte _[0x1];
        [FieldOffset(0x159)] public fixed byte _[0x1];
        [FieldOffset(0x15a)] public fixed byte _[0x2];
        [FieldOffset(0x15c)] public fixed byte _[0x2];
        [FieldOffset(0x15e)] public fixed byte _[0x1];
        [FieldOffset(0x15f)] public fixed byte _[0x1];
        [FieldOffset(0x160)] public fixed byte _[0x2];
        [FieldOffset(0x162)] public fixed byte _[0x2];
        [FieldOffset(0x164)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CNmLegacyEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x30];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CStateNodeStateData {
        [FieldOffset(0x0)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CFootstepLandedAnimTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
        [FieldOffset(0x58)] public fixed byte _[0x8];
        [FieldOffset(0x60)] public fixed byte _[0x8];
        [FieldOffset(0x68)] public fixed byte _[0x8];
        [FieldOffset(0x70)] public fixed byte _[0x8];
        [FieldOffset(0x78)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xd8)]
    public unsafe struct CEnumAnimParameter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x88];
        [FieldOffset(0x88)] public fixed byte _[0x8];
        [FieldOffset(0x90)] public fixed byte _[0x18];
        [FieldOffset(0xa8)] public fixed byte _[0x30];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CHandshakeAnimTagBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
        [FieldOffset(0x50)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct AnimTagID {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CWayPointHelperInstanceData {
        [FieldOffset(0x0)] public fixed byte _[0xc];
        [FieldOffset(0xc)] public fixed byte _[0xc];
        [FieldOffset(0x18)] public fixed byte _[0xc];
        [FieldOffset(0x24)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CAnimFrameSegment {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CSlopeComponentUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x34];
        [FieldOffset(0x34)] public fixed byte _[0x4];
        [FieldOffset(0x38)] public fixed byte _[0x2];
        [FieldOffset(0x3a)] public fixed byte _[0x2];
        [FieldOffset(0x3c)] public fixed byte _[0x2];
        [FieldOffset(0x3e)] public fixed byte _[0x2];
        [FieldOffset(0x40)] public fixed byte _[0x2];
        [FieldOffset(0x42)] public fixed byte _[0x6];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CAnimInputDamping {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CHitBoxSet {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct ChainToSolveData_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0xc];
        [FieldOffset(0x10)] public fixed byte _[0x28];
        [FieldOffset(0x38)] public fixed byte _[0x4];
        [FieldOffset(0x3c)] public fixed byte _[0x4];
        [FieldOffset(0x40)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CConstraintSlave {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0xc];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x28];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct PulseRuntimeOutputIndex_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x3c)]
    public unsafe struct CFootCycleDefinition {
        [FieldOffset(0x0)] public fixed byte _[0xc];
        [FieldOffset(0xc)] public fixed byte _[0xc];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0xc];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
        [FieldOffset(0x30)] public fixed byte _[0x4];
        [FieldOffset(0x34)] public fixed byte _[0x4];
        [FieldOffset(0x38)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CVirtualAnimParameter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte _[0x8];
        [FieldOffset(0x78)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CMotionMetricEvaluator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x18];
        [FieldOffset(0x30)] public fixed byte _[0x18];
        [FieldOffset(0x48)] public fixed byte _[0x4];
        [FieldOffset(0x4c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CFutureVelocityMetricEvaluator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
        [FieldOffset(0x50)] public fixed byte _[0x4];
        [FieldOffset(0x54)] public fixed byte _[0x4];
        [FieldOffset(0x58)] public fixed byte _[0x4];
        [FieldOffset(0x5c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmSkeleton__SecondarySkeleton_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CAnimUpdateNodeBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x30];
        [FieldOffset(0x48)] public fixed byte _[0x8];
        [FieldOffset(0x50)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CSetParameterActionUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x2];
        [FieldOffset(0x1a)] public fixed byte _[0x16];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmFixedWeightBoneMaskNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1c)]
    public unsafe struct SkeletonAnimCapture_t__FrameStamp_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x1];
        [FieldOffset(0x9)] public fixed byte _[0x3];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CPulse_DomainValue {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x20];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CBonePositionMetricEvaluator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
        [FieldOffset(0x50)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CRenderBufferBinding {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x178)]
    public unsafe struct CParticleCollectionRendererFloatInput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CNmParameterizedBlendNode__Parameterization_t {
        [FieldOffset(0x0)] public fixed byte _[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CNmEntityAttributeIntEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x38];
        [FieldOffset(0x38)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmNotNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CMeshletDescriptor {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x1];
        [FieldOffset(0x15)] public fixed byte _[0x1];
        [FieldOffset(0x16)] public fixed byte _[0x2];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x98)]
    public unsafe struct CMorphSetData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x18];
        [FieldOffset(0x30)] public fixed byte _[0x18];
        [FieldOffset(0x48)] public fixed byte _[0x8];
        [FieldOffset(0x50)] public fixed byte _[0x18];
        [FieldOffset(0x68)] public fixed byte _[0x18];
        [FieldOffset(0x80)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmAndNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CMorphConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
        [FieldOffset(0x60)] public fixed byte _[0x8];
        [FieldOffset(0x68)] public fixed byte _[0x4];
        [FieldOffset(0x6c)] public fixed byte _[0x4];
        [FieldOffset(0x70)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CClothSettingsAnimTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
        [FieldOffset(0x58)] public fixed byte _[0x4];
        [FieldOffset(0x5c)] public fixed byte _[0x4];
        [FieldOffset(0x60)] public fixed byte _[0x8];
        [FieldOffset(0x68)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CAnimDesc_Flag {
        [FieldOffset(0x0)] public fixed byte _[0x1];
        [FieldOffset(0x1)] public fixed byte _[0x1];
        [FieldOffset(0x2)] public fixed byte _[0x1];
        [FieldOffset(0x3)] public fixed byte _[0x1];
        [FieldOffset(0x4)] public fixed byte _[0x1];
        [FieldOffset(0x5)] public fixed byte _[0x1];
        [FieldOffset(0x6)] public fixed byte _[0x1];
        [FieldOffset(0x7)] public fixed byte _[0x1];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc8)]
    public unsafe struct CNmBlend2DNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x58];
        [FieldOffset(0x80)] public fixed byte _[0x28];
        [FieldOffset(0xa8)] public fixed byte _[0x18];
        [FieldOffset(0xc0)] public fixed byte _[0x2];
        [FieldOffset(0xc2)] public fixed byte _[0x2];
        [FieldOffset(0xc4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc)]
    public unsafe struct CNmFloatChannelData__ChannelSettings_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CBlendCurve {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CNmSkeleton__ContactConfig_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0xc];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmGraphNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CAnimationGraphVisualizerSphere {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
        [FieldOffset(0x40)] public fixed byte _[0x10];
        [FieldOffset(0x50)] public fixed byte _[0x4];
        [FieldOffset(0x54)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc)]
    public unsafe struct CNmClip__ModelSpaceSamplingChainLink_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CAnimUserDifference {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmDurationScaleNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x3)]
    public unsafe struct CTransitionUpdateData {
        [FieldOffset(0x0)] public fixed byte _[0x1];
        [FieldOffset(0x1)] public fixed byte _[0x2];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x2)]
    public unsafe struct PulseRuntimeBlackboardReferenceIndex_t {
        [FieldOffset(0x0)] public fixed byte _[0x2];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CNmContactEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0xc];
        [FieldOffset(0x34)] public fixed byte _[0x4];
        [FieldOffset(0x38)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CMovementHandshakeAnimTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CBoneConstraintPoseSpaceBone__Input_t {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CSeqMultiFetch {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x18];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x8];
        [FieldOffset(0x30)] public fixed byte _[0x18];
        [FieldOffset(0x48)] public fixed byte _[0x18];
        [FieldOffset(0x60)] public fixed byte _[0x4];
        [FieldOffset(0x64)] public fixed byte _[0x1];
        [FieldOffset(0x65)] public fixed byte _[0x3];
        [FieldOffset(0x68)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPhysSurfacePropertiesSoundNames {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x8];
        [FieldOffset(0x30)] public fixed byte _[0x8];
        [FieldOffset(0x38)] public fixed byte _[0x8];
        [FieldOffset(0x40)] public fixed byte _[0x8];
        [FieldOffset(0x48)] public fixed byte _[0x8];
        [FieldOffset(0x50)] public fixed byte _[0x8];
        [FieldOffset(0x58)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x128)]
    public unsafe struct NmBoneMaskSetDefinition_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x110];
        [FieldOffset(0x118)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CAudioAnimTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
        [FieldOffset(0x58)] public fixed byte _[0x8];
        [FieldOffset(0x60)] public fixed byte _[0x8];
        [FieldOffset(0x68)] public fixed byte _[0x4];
        [FieldOffset(0x6c)] public fixed byte _[0x1];
        [FieldOffset(0x6d)] public fixed byte _[0x1];
        [FieldOffset(0x6e)] public fixed byte _[0x1];
        [FieldOffset(0x6f)] public fixed byte _[0x1];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CTurnHelperUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x74];
        [FieldOffset(0x74)] public fixed byte _[0x4];
        [FieldOffset(0x78)] public fixed byte _[0x4];
        [FieldOffset(0x7c)] public fixed byte _[0x4];
        [FieldOffset(0x80)] public fixed byte _[0x4];
        [FieldOffset(0x84)] public fixed byte _[0x4];
        [FieldOffset(0x88)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x148)]
    public unsafe struct CAnimationGroup {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x48];
        [FieldOffset(0x60)] public fixed byte _[0x18];
        [FieldOffset(0x78)] public fixed byte _[0x18];
        [FieldOffset(0x90)] public fixed byte _[0x8];
        [FieldOffset(0x98)] public fixed byte _[0x78];
        [FieldOffset(0x110)] public fixed byte _[0x18];
        [FieldOffset(0x128)] public fixed byte _[0x20];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CPulse_TempVarInfo {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct NmContactAudioInfo_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct NmSyncTrackTime_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct CNmClip {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x10];
        [FieldOffset(0x20)] public fixed byte _[0x18];
        [FieldOffset(0x38)] public fixed byte _[0x40];
        [FieldOffset(0x78)] public fixed byte _[0x20];
        [FieldOffset(0x98)] public fixed byte _[0x28];
        [FieldOffset(0xc0)] public fixed byte _[0xb0];
        [FieldOffset(0x170)] public fixed byte _[0x50];
        [FieldOffset(0x1c0)] public fixed byte _[0x8];
        [FieldOffset(0x1c8)] public fixed byte _[0x18];
        [FieldOffset(0x1e0)] public fixed byte _[0x20];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CToggleComponentActionUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x100)]
    public unsafe struct CNmOverlayBlendTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0x100];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmSpeedScaleBaseNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmValueNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CAnimationGraphVisualizerPrimitiveBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x2c];
        [FieldOffset(0x38)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CBindPoseUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct NmSyncTrackTimeRange_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CAnimationGraphVisualizerText {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
        [FieldOffset(0x40)] public fixed byte _[0x10];
        [FieldOffset(0x50)] public fixed byte _[0x8];
        [FieldOffset(0x58)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CFootTrajectory {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0xc];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x148)]
    public unsafe struct CMotionMatchingUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
        [FieldOffset(0x58)] public fixed byte _[0x20];
        [FieldOffset(0x78)] public fixed byte _[0x18];
        [FieldOffset(0x90)] public fixed byte _[0x50];
        [FieldOffset(0xe0)] public fixed byte _[0x4];
        [FieldOffset(0xe4)] public fixed byte _[0x4];
        [FieldOffset(0xe8)] public fixed byte _[0x1];
        [FieldOffset(0xe9)] public fixed byte _[0x3];
        [FieldOffset(0xec)] public fixed byte _[0x8];
        [FieldOffset(0xf4)] public fixed byte _[0x4];
        [FieldOffset(0xf8)] public fixed byte _[0x4];
        [FieldOffset(0xfc)] public fixed byte _[0x4];
        [FieldOffset(0x100)] public fixed byte _[0x4];
        [FieldOffset(0x104)] public fixed byte _[0x4];
        [FieldOffset(0x108)] public fixed byte _[0x1];
        [FieldOffset(0x109)] public fixed byte _[0x3];
        [FieldOffset(0x10c)] public fixed byte _[0x4];
        [FieldOffset(0x110)] public fixed byte _[0x8];
        [FieldOffset(0x118)] public fixed byte _[0x18];
        [FieldOffset(0x130)] public fixed byte _[0x4];
        [FieldOffset(0x134)] public fixed byte _[0x4];
        [FieldOffset(0x138)] public fixed byte _[0x4];
        [FieldOffset(0x13c)] public fixed byte _[0x4];
        [FieldOffset(0x140)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmReferencePoseNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x120)]
    public unsafe struct CSeqS1SeqDesc {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x10];
        [FieldOffset(0x20)] public fixed byte _[0x70];
        [FieldOffset(0x90)] public fixed byte _[0x8];
        [FieldOffset(0x98)] public fixed byte _[0x18];
        [FieldOffset(0xb0)] public fixed byte _[0x18];
        [FieldOffset(0xc8)] public fixed byte _[0x8];
        [FieldOffset(0xd0)] public fixed byte _[0x10];
        [FieldOffset(0xe0)] public fixed byte _[0x10];
        [FieldOffset(0xf0)] public fixed byte _[0x18];
        [FieldOffset(0x108)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CFlexController {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct SkeletonDemoDb_t {
        [FieldOffset(0x0)] public fixed byte _[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x18];
        [FieldOffset(0x30)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmFloatRangeComparisonNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x2];
        [FieldOffset(0x1a)] public fixed byte _[0x6];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CMotionNodeSequence {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x18];
        [FieldOffset(0x40)] public fixed byte _[0x4];
        [FieldOffset(0x44)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CNmTwoBoneIKNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x2];
        [FieldOffset(0x22)] public fixed byte _[0x2];
        [FieldOffset(0x24)] public fixed byte _[0x4];
        [FieldOffset(0x28)] public fixed byte _[0x1];
        [FieldOffset(0x29)] public fixed byte _[0x3];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x3b0)]
    public unsafe struct CNmGraphInstance {
        [FieldOffset(0x0)] public fixed byte pad_0[0x3b0];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CFlexDesc {
        [FieldOffset(0x0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x238)]
    public unsafe struct CRenderMesh {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0xc0];
        [FieldOffset(0xd0)] public fixed byte _[0x10];
        [FieldOffset(0xe0)] public fixed byte _[0x118];
        [FieldOffset(0x1f8)] public fixed byte _[0x1];
        [FieldOffset(0x1f9)] public fixed byte _[0x27];
        [FieldOffset(0x220)] public fixed byte _[0x10];
        [FieldOffset(0x230)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xd0)]
    public unsafe struct CAnimSkeleton {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x18];
        [FieldOffset(0x40)] public fixed byte _[0x18];
        [FieldOffset(0x58)] public fixed byte _[0x18];
        [FieldOffset(0x70)] public fixed byte _[0x18];
        [FieldOffset(0x88)] public fixed byte _[0x18];
        [FieldOffset(0xa0)] public fixed byte _[0x18];
        [FieldOffset(0xb8)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x2)]
    public unsafe struct PulseRuntimeConstantIndex_t {
        [FieldOffset(0x0)] public fixed byte _[0x2];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CFootAdjustmentInstanceData {
        [FieldOffset(0x0)] public fixed byte pad_0[0xc];
        [FieldOffset(0xc)] public fixed byte _[0xc];
        [FieldOffset(0x18)] public fixed byte _[0x24];
        [FieldOffset(0x3c)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CNmBodyGroupNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x30];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CNmTimeControlledClipNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x2];
        [FieldOffset(0x12)] public fixed byte _[0x2];
        [FieldOffset(0x14)] public fixed byte _[0x2];
        [FieldOffset(0x16)] public fixed byte _[0x2];
        [FieldOffset(0x18)] public fixed byte _[0x28];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct VPhysics2ShapeDef_t {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x10];
        [FieldOffset(0x20)] public fixed byte _[0x10];
        [FieldOffset(0x30)] public fixed byte _[0x10];
        [FieldOffset(0x40)] public fixed byte _[0x10];
        [FieldOffset(0x50)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CNmFloatCurveNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x40];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CAnimationGraphVisualizerAxis {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
        [FieldOffset(0x40)] public fixed byte _[0x20];
        [FieldOffset(0x60)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CTwistConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
        [FieldOffset(0x60)] public fixed byte _[0x10];
        [FieldOffset(0x70)] public fixed byte _[0x10];
        [FieldOffset(0x80)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct PulseDocNodeID_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct ModelBoneFlexDriverControl_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x178)]
    public unsafe struct CParticleCollectionFloatInput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CSeqCmdLayer {
        [FieldOffset(0x0)] public fixed byte _[0x2];
        [FieldOffset(0x2)] public fixed byte _[0x2];
        [FieldOffset(0x4)] public fixed byte _[0x2];
        [FieldOffset(0x6)] public fixed byte _[0x2];
        [FieldOffset(0x8)] public fixed byte _[0x2];
        [FieldOffset(0xa)] public fixed byte _[0x2];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct FootPinningPoseOpFixedData_t {
        [FieldOffset(0x0)] public fixed byte _[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
        [FieldOffset(0x28)] public fixed byte _[0x1];
        [FieldOffset(0x29)] public fixed byte _[0x7];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct RenderSkeletonBone_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x30];
        [FieldOffset(0x40)] public fixed byte _[0x18];
        [FieldOffset(0x58)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct CDistanceRemainingMetricEvaluator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
        [FieldOffset(0x50)] public fixed byte _[0x4];
        [FieldOffset(0x54)] public fixed byte _[0x4];
        [FieldOffset(0x58)] public fixed byte _[0x4];
        [FieldOffset(0x5c)] public fixed byte _[0x4];
        [FieldOffset(0x60)] public fixed byte _[0x1];
        [FieldOffset(0x61)] public fixed byte _[0x1];
        [FieldOffset(0x62)] public fixed byte _[0x6];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CDirectPlaybackUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x74];
        [FieldOffset(0x74)] public fixed byte _[0x1];
        [FieldOffset(0x75)] public fixed byte _[0x3];
        [FieldOffset(0x78)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CNmIDEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CFlexRule {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct ScriptInfo_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x18];
        [FieldOffset(0x20)] public fixed byte _[0x18];
        [FieldOffset(0x38)] public fixed byte _[0x18];
        [FieldOffset(0x50)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc8)]
    public unsafe struct CBoneConstraintRbf {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
        [FieldOffset(0x20)] public fixed byte _[0x18];
        [FieldOffset(0x38)] public fixed byte _[0x90];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x34)]
    public unsafe struct CNetworkedCycle {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0xc];
        [FieldOffset(0x10)] public fixed byte _[0xc];
        [FieldOffset(0x1c)] public fixed byte _[0xc];
        [FieldOffset(0x28)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CNmSoundEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x8];
        [FieldOffset(0x30)] public fixed byte _[0x8];
        [FieldOffset(0x38)] public fixed byte _[0x8];
        [FieldOffset(0x40)] public fixed byte _[0x4];
        [FieldOffset(0x44)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xb0)]
    public unsafe struct CRenderGroom {
        [FieldOffset(0x0)] public fixed byte _[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x28];
        [FieldOffset(0x40)] public fixed byte _[0x8];
        [FieldOffset(0x48)] public fixed byte _[0x30];
        [FieldOffset(0x78)] public fixed byte _[0x4];
        [FieldOffset(0x7c)] public fixed byte _[0x4];
        [FieldOffset(0x80)] public fixed byte _[0x4];
        [FieldOffset(0x84)] public fixed byte _[0x4];
        [FieldOffset(0x88)] public fixed byte _[0x4];
        [FieldOffset(0x8c)] public fixed byte _[0x4];
        [FieldOffset(0x90)] public fixed byte _[0x4];
        [FieldOffset(0x94)] public fixed byte _[0x4];
        [FieldOffset(0x98)] public fixed byte _[0x14];
        [FieldOffset(0xac)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CNmParameterizedClipSelectorNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x10];
        [FieldOffset(0x38)] public fixed byte _[0x2];
        [FieldOffset(0x3a)] public fixed byte _[0x1];
        [FieldOffset(0x3b)] public fixed byte _[0x5];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CTiltTwistConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
        [FieldOffset(0x60)] public fixed byte _[0x4];
        [FieldOffset(0x64)] public fixed byte _[0x2c];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmSpeedScaleNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CVPhysXSurfacePropertiesList {
        [FieldOffset(0x0)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmFloatSpringNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x2];
        [FieldOffset(0x1e)] public fixed byte _[0x2];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct RenderHairStrandInfo_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CCycleControlClipUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
        [FieldOffset(0x60)] public fixed byte _[0x1c];
        [FieldOffset(0x7c)] public fixed byte _[0x4];
        [FieldOffset(0x80)] public fixed byte _[0x4];
        [FieldOffset(0x84)] public fixed byte _[0x4];
        [FieldOffset(0x88)] public fixed byte _[0x2];
        [FieldOffset(0x8a)] public fixed byte _[0x6];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmTargetPointNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x2];
        [FieldOffset(0x12)] public fixed byte _[0x6];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CNmTargetSelectorNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
        [FieldOffset(0x30)] public fixed byte _[0x2];
        [FieldOffset(0x32)] public fixed byte _[0x1];
        [FieldOffset(0x33)] public fixed byte _[0x5];
        [FieldOffset(0x38)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPulse_RegisterInfo {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x18];
        [FieldOffset(0x20)] public fixed byte _[0x38];
        [FieldOffset(0x58)] public fixed byte _[0x4];
        [FieldOffset(0x5c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmFloatValueNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CWarpSectionAnimTagBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CNmGraphVariationUserData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CStaticPoseCache {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xd0)]
    public unsafe struct LookAtOpFixedSettings_t {
        [FieldOffset(0x0)] public fixed byte _[0x80];
        [FieldOffset(0x80)] public fixed byte _[0x18];
        [FieldOffset(0x98)] public fixed byte _[0x18];
        [FieldOffset(0xb0)] public fixed byte _[0x4];
        [FieldOffset(0xb4)] public fixed byte _[0x4];
        [FieldOffset(0xb8)] public fixed byte _[0x4];
        [FieldOffset(0xbc)] public fixed byte _[0x4];
        [FieldOffset(0xc0)] public fixed byte _[0x1];
        [FieldOffset(0xc1)] public fixed byte _[0x1];
        [FieldOffset(0xc2)] public fixed byte _[0x1];
        [FieldOffset(0xc3)] public fixed byte _[0xd];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CRootMotion {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0xc];
        [FieldOffset(0x1c)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CAnimGraphSettingsManager {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CAnimGraphModelBinding {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CBoneConstraintPoseSpaceBone {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
        [FieldOffset(0x60)] public fixed byte _[0x28];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xf0)]
    public unsafe struct CNmTwoBoneIKTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte _[0x4];
        [FieldOffset(0x74)] public fixed byte _[0xc];
        [FieldOffset(0x80)] public fixed byte _[0x70];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct MotionBlendItem {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xa0)]
    public unsafe struct CBoneConstraintPoseSpaceMorph {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x8];
        [FieldOffset(0x30)] public fixed byte _[0x18];
        [FieldOffset(0x48)] public fixed byte _[0x18];
        [FieldOffset(0x60)] public fixed byte _[0x40];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CFloatAnimParameter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte _[0x4];
        [FieldOffset(0x84)] public fixed byte _[0x4];
        [FieldOffset(0x88)] public fixed byte _[0x4];
        [FieldOffset(0x8c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct CNmContactAudioActionVData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CStateActionUpdater {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CPlayerInputAnimMotorUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
        [FieldOffset(0x20)] public fixed byte _[0x1c];
        [FieldOffset(0x3c)] public fixed byte _[0x4];
        [FieldOffset(0x40)] public fixed byte _[0x4];
        [FieldOffset(0x44)] public fixed byte _[0x2];
        [FieldOffset(0x46)] public fixed byte _[0x2];
        [FieldOffset(0x48)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CRenderSkeleton {
        [FieldOffset(0x0)] public fixed byte _[0x30];
        [FieldOffset(0x30)] public fixed byte _[0x18];
        [FieldOffset(0x48)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc)]
    public unsafe struct CSeqIKLock {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x2];
        [FieldOffset(0xa)] public fixed byte _[0x2];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CAnimParamHandleMap {
        [FieldOffset(0x0)] public fixed byte _[0x20];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmFloatClampNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct PulseRuntimeCellIndex_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmExternalPoseNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1d0)]
    public unsafe struct CAnimDesc {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0xd8];
        [FieldOffset(0xf8)] public fixed byte _[0x18];
        [FieldOffset(0x110)] public fixed byte _[0x20];
        [FieldOffset(0x130)] public fixed byte _[0x18];
        [FieldOffset(0x148)] public fixed byte _[0x18];
        [FieldOffset(0x160)] public fixed byte _[0x18];
        [FieldOffset(0x178)] public fixed byte _[0x4];
        [FieldOffset(0x17c)] public fixed byte _[0xc];
        [FieldOffset(0x188)] public fixed byte _[0x10];
        [FieldOffset(0x198)] public fixed byte _[0x18];
        [FieldOffset(0x1b0)] public fixed byte _[0x18];
        [FieldOffset(0x1c8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CNmRootMotionOverrideNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x2];
        [FieldOffset(0x1a)] public fixed byte _[0x2];
        [FieldOffset(0x1c)] public fixed byte _[0x2];
        [FieldOffset(0x1e)] public fixed byte _[0x2];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CNmTargetWarpNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x2];
        [FieldOffset(0x12)] public fixed byte _[0x2];
        [FieldOffset(0x14)] public fixed byte _[0x1];
        [FieldOffset(0x15)] public fixed byte _[0x1];
        [FieldOffset(0x16)] public fixed byte _[0x2];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
        [FieldOffset(0x28)] public fixed byte _[0x8];
        [FieldOffset(0x30)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CPhysSurfacePropertiesPhysics {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CAnimationGraphVisualizerPie {
        [FieldOffset(0x0)] public fixed byte pad_0[0x40];
        [FieldOffset(0x40)] public fixed byte _[0x10];
        [FieldOffset(0x50)] public fixed byte _[0x10];
        [FieldOffset(0x60)] public fixed byte _[0x10];
        [FieldOffset(0x70)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc)]
    public unsafe struct NmFloatCurveCompressionSettings_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CBoneConstraintDotToMorph {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x8];
        [FieldOffset(0x30)] public fixed byte _[0x8];
        [FieldOffset(0x38)] public fixed byte _[0x20];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CPointConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CCurrentRotationVelocityMetricEvaluator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct TraceSettings_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct ParamSpanSample_t {
        [FieldOffset(0x0)] public fixed byte _[0x14];
        [FieldOffset(0x14)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CNmFollowBoneTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0x90];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xf8)]
    public unsafe struct VPhysXConstraintParams_t {
        [FieldOffset(0x0)] public fixed byte _[0x1];
        [FieldOffset(0x1)] public fixed byte _[0x1];
        [FieldOffset(0x2)] public fixed byte _[0x1];
        [FieldOffset(0x3)] public fixed byte _[0x1];
        [FieldOffset(0x4)] public fixed byte _[0x18];
        [FieldOffset(0x1c)] public fixed byte _[0x20];
        [FieldOffset(0x3c)] public fixed byte _[0x4];
        [FieldOffset(0x40)] public fixed byte _[0x4];
        [FieldOffset(0x44)] public fixed byte _[0x4];
        [FieldOffset(0x48)] public fixed byte _[0x4];
        [FieldOffset(0x4c)] public fixed byte _[0x4];
        [FieldOffset(0x50)] public fixed byte _[0x4];
        [FieldOffset(0x54)] public fixed byte _[0x4];
        [FieldOffset(0x58)] public fixed byte _[0x4];
        [FieldOffset(0x5c)] public fixed byte _[0x4];
        [FieldOffset(0x60)] public fixed byte _[0x4];
        [FieldOffset(0x64)] public fixed byte _[0x4];
        [FieldOffset(0x68)] public fixed byte _[0x4];
        [FieldOffset(0x6c)] public fixed byte _[0x4];
        [FieldOffset(0x70)] public fixed byte _[0x4];
        [FieldOffset(0x74)] public fixed byte _[0x4];
        [FieldOffset(0x78)] public fixed byte _[0x4];
        [FieldOffset(0x7c)] public fixed byte _[0x4];
        [FieldOffset(0x80)] public fixed byte _[0x4];
        [FieldOffset(0x84)] public fixed byte _[0x4];
        [FieldOffset(0x88)] public fixed byte _[0x4];
        [FieldOffset(0x8c)] public fixed byte _[0x4];
        [FieldOffset(0x90)] public fixed byte _[0x4];
        [FieldOffset(0x94)] public fixed byte _[0xc];
        [FieldOffset(0xa0)] public fixed byte _[0x10];
        [FieldOffset(0xb0)] public fixed byte _[0xc];
        [FieldOffset(0xbc)] public fixed byte _[0x4];
        [FieldOffset(0xc0)] public fixed byte _[0x4];
        [FieldOffset(0xc4)] public fixed byte _[0x4];
        [FieldOffset(0xc8)] public fixed byte _[0x4];
        [FieldOffset(0xcc)] public fixed byte _[0x4];
        [FieldOffset(0xd0)] public fixed byte _[0x4];
        [FieldOffset(0xd4)] public fixed byte _[0x4];
        [FieldOffset(0xd8)] public fixed byte _[0x4];
        [FieldOffset(0xdc)] public fixed byte _[0x4];
        [FieldOffset(0xe0)] public fixed byte _[0x4];
        [FieldOffset(0xe4)] public fixed byte _[0x4];
        [FieldOffset(0xe8)] public fixed byte _[0x4];
        [FieldOffset(0xec)] public fixed byte _[0x4];
        [FieldOffset(0xf0)] public fixed byte _[0x4];
        [FieldOffset(0xf4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmFloatComparisonNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x2];
        [FieldOffset(0x12)] public fixed byte _[0x2];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CStateUpdateData {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x18];
        [FieldOffset(0x40)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc)]
    public unsafe struct CTurnHelperInstanceData {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmTargetValueNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct COrientConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1c)]
    public unsafe struct CCycleClipInstanceData {
        [FieldOffset(0x0)] public fixed byte _[0xc];
        [FieldOffset(0xc)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x2)]
    public unsafe struct PulseRuntimeTempVarBankIndex_t {
        [FieldOffset(0x0)] public fixed byte _[0x2];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xb0)]
    public unsafe struct CMoverUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte _[0x18];
        [FieldOffset(0x90)] public fixed byte _[0x4];
        [FieldOffset(0x94)] public fixed byte _[0x2];
        [FieldOffset(0x96)] public fixed byte _[0x2];
        [FieldOffset(0x98)] public fixed byte _[0x4];
        [FieldOffset(0x9c)] public fixed byte _[0x4];
        [FieldOffset(0xa0)] public fixed byte _[0x4];
        [FieldOffset(0xa4)] public fixed byte _[0x1];
        [FieldOffset(0xa5)] public fixed byte _[0x1];
        [FieldOffset(0xa6)] public fixed byte _[0x1];
        [FieldOffset(0xa7)] public fixed byte _[0x1];
        [FieldOffset(0xa8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CNmLayerBlendNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x2];
        [FieldOffset(0x12)] public fixed byte _[0x6];
        [FieldOffset(0x18)] public fixed byte _[0x30];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CNmFootIKNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x2];
        [FieldOffset(0x2a)] public fixed byte _[0x2];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
        [FieldOffset(0x30)] public fixed byte _[0x4];
        [FieldOffset(0x34)] public fixed byte _[0x1];
        [FieldOffset(0x35)] public fixed byte _[0x3];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CAnimMotorUpdaterBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct JiggleBoneSettingsList_t {
        [FieldOffset(0x0)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xa0)]
    public unsafe struct CSubtractUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x94];
        [FieldOffset(0x94)] public fixed byte _[0x4];
        [FieldOffset(0x98)] public fixed byte _[0x1];
        [FieldOffset(0x99)] public fixed byte _[0x1];
        [FieldOffset(0x9a)] public fixed byte _[0x6];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct PulseGraphInstanceID_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CNmFloatRemapNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x8];
        [FieldOffset(0x1c)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CPoseHandle {
        [FieldOffset(0x0)] public fixed byte _[0x2];
        [FieldOffset(0x2)] public fixed byte _[0x2];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmFootstepEventIDNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xa8)]
    public unsafe struct CSolveIKChainUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte _[0x18];
        [FieldOffset(0x88)] public fixed byte _[0x20];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmOrNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CSeqCmdSeqDesc {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0xc];
        [FieldOffset(0x1c)] public fixed byte _[0x8];
        [FieldOffset(0x24)] public fixed byte _[0x2];
        [FieldOffset(0x26)] public fixed byte _[0x2];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x2];
        [FieldOffset(0x2e)] public fixed byte _[0x2];
        [FieldOffset(0x30)] public fixed byte _[0x18];
        [FieldOffset(0x48)] public fixed byte _[0x18];
        [FieldOffset(0x60)] public fixed byte _[0x18];
        [FieldOffset(0x78)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xb0)]
    public unsafe struct CBoneMaskUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x94];
        [FieldOffset(0x94)] public fixed byte _[0x4];
        [FieldOffset(0x98)] public fixed byte _[0x4];
        [FieldOffset(0x9c)] public fixed byte _[0x4];
        [FieldOffset(0xa0)] public fixed byte _[0x4];
        [FieldOffset(0xa4)] public fixed byte _[0x4];
        [FieldOffset(0xa8)] public fixed byte _[0x4];
        [FieldOffset(0xac)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CLeafUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CPulse_Constant {
        [FieldOffset(0x0)] public fixed byte _[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x178)]
    public unsafe struct CParticleFloatInput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x40];
        [FieldOffset(0x60)] public fixed byte _[0x4];
        [FieldOffset(0x64)] public fixed byte _[0x4];
        [FieldOffset(0x68)] public fixed byte _[0x4];
        [FieldOffset(0x6c)] public fixed byte _[0x4];
        [FieldOffset(0x70)] public fixed byte _[0x4];
        [FieldOffset(0x74)] public fixed byte _[0x4];
        [FieldOffset(0x78)] public fixed byte _[0x4];
        [FieldOffset(0x7c)] public fixed byte _[0x4];
        [FieldOffset(0x80)] public fixed byte _[0x4];
        [FieldOffset(0x84)] public fixed byte _[0xc];
        [FieldOffset(0x90)] public fixed byte _[0x8];
        [FieldOffset(0x98)] public fixed byte _[0x4];
        [FieldOffset(0x9c)] public fixed byte _[0x4];
        [FieldOffset(0xa0)] public fixed byte _[0x4];
        [FieldOffset(0xa4)] public fixed byte _[0x4];
        [FieldOffset(0xa8)] public fixed byte _[0x4];
        [FieldOffset(0xac)] public fixed byte _[0x4];
        [FieldOffset(0xb0)] public fixed byte _[0x4];
        [FieldOffset(0xb4)] public fixed byte _[0x4];
        [FieldOffset(0xb8)] public fixed byte _[0xc];
        [FieldOffset(0xc4)] public fixed byte _[0x4];
        [FieldOffset(0xc8)] public fixed byte _[0x4];
        [FieldOffset(0xcc)] public fixed byte _[0x4];
        [FieldOffset(0xd0)] public fixed byte _[0x4];
        [FieldOffset(0xd4)] public fixed byte _[0x4];
        [FieldOffset(0xd8)] public fixed byte _[0x4];
        [FieldOffset(0xdc)] public fixed byte _[0x4];
        [FieldOffset(0xe0)] public fixed byte _[0x4];
        [FieldOffset(0xe4)] public fixed byte _[0xc];
        [FieldOffset(0xf0)] public fixed byte _[0x4];
        [FieldOffset(0xf4)] public fixed byte _[0x4];
        [FieldOffset(0xf8)] public fixed byte _[0x4];
        [FieldOffset(0xfc)] public fixed byte _[0x4];
        [FieldOffset(0x100)] public fixed byte _[0x4];
        [FieldOffset(0x104)] public fixed byte _[0x4];
        [FieldOffset(0x108)] public fixed byte _[0x4];
        [FieldOffset(0x10c)] public fixed byte _[0x4];
        [FieldOffset(0x110)] public fixed byte _[0x4];
        [FieldOffset(0x114)] public fixed byte _[0x4];
        [FieldOffset(0x118)] public fixed byte _[0x4];
        [FieldOffset(0x11c)] public fixed byte _[0x4];
        [FieldOffset(0x120)] public fixed byte _[0x4];
        [FieldOffset(0x124)] public fixed byte _[0x4];
        [FieldOffset(0x128)] public fixed byte _[0x8];
        [FieldOffset(0x130)] public fixed byte _[0x40];
        [FieldOffset(0x170)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct SolveIKChainPoseOpFixedSettings_t {
        [FieldOffset(0x0)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CNmEntityAttributeFloatEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x38];
        [FieldOffset(0x38)] public fixed byte _[0x40];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CNmIDSelectorNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x30];
        [FieldOffset(0x58)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x160)]
    public unsafe struct TwoBoneIKSettings_t {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x80];
        [FieldOffset(0x90)] public fixed byte _[0x10];
        [FieldOffset(0xa0)] public fixed byte _[0x80];
        [FieldOffset(0x120)] public fixed byte _[0x4];
        [FieldOffset(0x124)] public fixed byte _[0x2];
        [FieldOffset(0x126)] public fixed byte _[0x2];
        [FieldOffset(0x128)] public fixed byte _[0x8];
        [FieldOffset(0x130)] public fixed byte _[0x10];
        [FieldOffset(0x140)] public fixed byte _[0x4];
        [FieldOffset(0x144)] public fixed byte _[0x4];
        [FieldOffset(0x148)] public fixed byte _[0x4];
        [FieldOffset(0x14c)] public fixed byte _[0x1];
        [FieldOffset(0x14d)] public fixed byte _[0x3];
        [FieldOffset(0x150)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CNmCachedPoseWriteTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x100)]
    public unsafe struct CAnimUpdateSharedData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x20];
        [FieldOffset(0x48)] public fixed byte _[0x18];
        [FieldOffset(0x60)] public fixed byte _[0x8];
        [FieldOffset(0x68)] public fixed byte _[0x8];
        [FieldOffset(0x70)] public fixed byte _[0x8];
        [FieldOffset(0x78)] public fixed byte _[0x30];
        [FieldOffset(0xa8)] public fixed byte _[0x8];
        [FieldOffset(0xb0)] public fixed byte _[0x8];
        [FieldOffset(0xb8)] public fixed byte _[0x48];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CAnimAttachment {
        [FieldOffset(0x0)] public fixed byte _[0x30];
        [FieldOffset(0x30)] public fixed byte _[0x30];
        [FieldOffset(0x60)] public fixed byte _[0xc];
        [FieldOffset(0x6c)] public fixed byte _[0xc];
        [FieldOffset(0x78)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CFootTrajectories {
        [FieldOffset(0x0)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CNmIDComparisonNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x2];
        [FieldOffset(0x12)] public fixed byte _[0x6];
        [FieldOffset(0x18)] public fixed byte _[0x28];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct PairedSequence_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CEditableMotionGraph {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmConstFloatNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CStringAnimTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CBoolAnimParameter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CRagdollAnimTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
        [FieldOffset(0x58)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CMotionNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x138)]
    public unsafe struct CNmStateMachineNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x120];
        [FieldOffset(0x130)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CBodyGroupAnimTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
        [FieldOffset(0x58)] public fixed byte _[0x8];
        [FieldOffset(0x60)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x100)]
    public unsafe struct CNmModelSpaceBlendTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0x100];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmZeroPoseNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmOrientationWarpNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x2];
        [FieldOffset(0x12)] public fixed byte _[0x2];
        [FieldOffset(0x14)] public fixed byte _[0x1];
        [FieldOffset(0x15)] public fixed byte _[0x1];
        [FieldOffset(0x16)] public fixed byte _[0x1];
        [FieldOffset(0x17)] public fixed byte _[0x1];
        [FieldOffset(0x18)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct AnimParamID {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmBoneMaskNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct ModelAnimGraph2Ref_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct AnimationDecodeDebugDump_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmVirtualParameterIDNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CSeqScaleSet {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0xc];
        [FieldOffset(0x20)] public fixed byte _[0x18];
        [FieldOffset(0x38)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct PulseRuntimeCallInfoIndex_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xb0)]
    public unsafe struct CDirectionalBlendUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x5c];
        [FieldOffset(0x5c)] public fixed byte _[0x24];
        [FieldOffset(0x80)] public fixed byte _[0x18];
        [FieldOffset(0x98)] public fixed byte _[0x4];
        [FieldOffset(0x9c)] public fixed byte _[0x4];
        [FieldOffset(0xa0)] public fixed byte _[0x4];
        [FieldOffset(0xa4)] public fixed byte _[0x4];
        [FieldOffset(0xa8)] public fixed byte _[0x1];
        [FieldOffset(0xa9)] public fixed byte _[0x7];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CNmGraphDefinition__ReferencedGraphSlot_t {
        [FieldOffset(0x0)] public fixed byte _[0x2];
        [FieldOffset(0x2)] public fixed byte _[0x2];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct ParamSpan_t {
        [FieldOffset(0x0)] public fixed byte _[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x2];
        [FieldOffset(0x1a)] public fixed byte _[0x2];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CFootStepTriggerUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte _[0x1c];
        [FieldOffset(0x8c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct IKTargetSettings_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x10];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CModelConfigElement_SetRenderColor {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x100)]
    public unsafe struct CNmAdditiveBlendTask {
        [FieldOffset(0x0)] public fixed byte pad_0[0x100];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CNmAnimationPoseNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x2];
        [FieldOffset(0x12)] public fixed byte _[0x2];
        [FieldOffset(0x14)] public fixed byte _[0x8];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xb8)]
    public unsafe struct CMotionSearchDB {
        [FieldOffset(0x0)] public fixed byte _[0x80];
        [FieldOffset(0x80)] public fixed byte _[0x20];
        [FieldOffset(0xa0)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CMotionNodeBlend1D {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x18];
        [FieldOffset(0x40)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmCurrentSyncEventNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x2];
        [FieldOffset(0x12)] public fixed byte _[0x6];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmControlParameterTargetNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct SkeletonBoneBounds_t {
        [FieldOffset(0x0)] public fixed byte _[0xc];
        [FieldOffset(0xc)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1e0)]
    public unsafe struct CTwoBoneIKUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte _[0x170];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x98)]
    public unsafe struct VPhysXBodyPart_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x68];
        [FieldOffset(0x70)] public fixed byte _[0x2];
        [FieldOffset(0x72)] public fixed byte _[0x2];
        [FieldOffset(0x74)] public fixed byte _[0x4];
        [FieldOffset(0x78)] public fixed byte _[0x4];
        [FieldOffset(0x7c)] public fixed byte _[0x4];
        [FieldOffset(0x80)] public fixed byte _[0x4];
        [FieldOffset(0x84)] public fixed byte _[0x4];
        [FieldOffset(0x88)] public fixed byte _[0x4];
        [FieldOffset(0x8c)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct PulseRuntimeChunkIndex_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CTaskHandshakeAnimTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xb8)]
    public unsafe struct CFollowPathUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x74];
        [FieldOffset(0x74)] public fixed byte _[0x4];
        [FieldOffset(0x78)] public fixed byte _[0x1];
        [FieldOffset(0x79)] public fixed byte _[0x1];
        [FieldOffset(0x7a)] public fixed byte _[0x2];
        [FieldOffset(0x7c)] public fixed byte _[0x4];
        [FieldOffset(0x80)] public fixed byte _[0x4];
        [FieldOffset(0x84)] public fixed byte _[0x4];
        [FieldOffset(0x88)] public fixed byte _[0x8];
        [FieldOffset(0x90)] public fixed byte _[0x18];
        [FieldOffset(0xa8)] public fixed byte _[0x4];
        [FieldOffset(0xac)] public fixed byte _[0x4];
        [FieldOffset(0xb0)] public fixed byte _[0x4];
        [FieldOffset(0xb4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xf0)]
    public unsafe struct AimMatrixOpFixedSettings_t {
        [FieldOffset(0x0)] public fixed byte _[0x80];
        [FieldOffset(0x80)] public fixed byte _[0x18];
        [FieldOffset(0x98)] public fixed byte _[0x28];
        [FieldOffset(0xc0)] public fixed byte _[0x4];
        [FieldOffset(0xc4)] public fixed byte _[0x4];
        [FieldOffset(0xc8)] public fixed byte _[0x4];
        [FieldOffset(0xcc)] public fixed byte _[0x4];
        [FieldOffset(0xd0)] public fixed byte _[0x4];
        [FieldOffset(0xd4)] public fixed byte _[0x1];
        [FieldOffset(0xd5)] public fixed byte _[0x3];
        [FieldOffset(0xd8)] public fixed byte _[0x4];
        [FieldOffset(0xdc)] public fixed byte _[0x4];
        [FieldOffset(0xe0)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CAnimScriptComponentUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CRagdollUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte _[0x4];
        [FieldOffset(0x74)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CBoneConstraintBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CPathAnimMotorUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CMaterialAttributeAnimTag {
        [FieldOffset(0x0)] public fixed byte pad_0[0x58];
        [FieldOffset(0x58)] public fixed byte _[0x8];
        [FieldOffset(0x60)] public fixed byte _[0x4];
        [FieldOffset(0x64)] public fixed byte _[0x4];
        [FieldOffset(0x68)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmFootEventConditionNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x2];
        [FieldOffset(0x12)] public fixed byte _[0x2];
        [FieldOffset(0x14)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmFloatChannelSet_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CNmFootEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CPhysSurfacePropertiesAudio {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1c)]
    public unsafe struct CSeqAutoLayer {
        [FieldOffset(0x0)] public fixed byte _[0x2];
        [FieldOffset(0x2)] public fixed byte _[0x2];
        [FieldOffset(0x4)] public fixed byte _[0x8];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct ModelEmbeddedMesh_t {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x18];
        [FieldOffset(0x38)] public fixed byte _[0x18];
        [FieldOffset(0x50)] public fixed byte _[0x18];
        [FieldOffset(0x68)] public fixed byte _[0x4];
        [FieldOffset(0x6c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct PhysSoftbodyDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x18];
        [FieldOffset(0x30)] public fixed byte _[0x18];
        [FieldOffset(0x48)] public fixed byte _[0x18];
        [FieldOffset(0x60)] public fixed byte _[0x18];
        [FieldOffset(0x78)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CPulseRuntimeMethodArg {
        [FieldOffset(0x0)] public fixed byte _[0x38];
        [FieldOffset(0x38)] public fixed byte _[0x8];
        [FieldOffset(0x40)] public fixed byte _[0x40];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CAnimSequenceParams {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x98)]
    public unsafe struct CTargetWarpUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x74];
        [FieldOffset(0x74)] public fixed byte _[0x4];
        [FieldOffset(0x78)] public fixed byte _[0x2];
        [FieldOffset(0x7a)] public fixed byte _[0x2];
        [FieldOffset(0x7c)] public fixed byte _[0x2];
        [FieldOffset(0x7e)] public fixed byte _[0x2];
        [FieldOffset(0x80)] public fixed byte _[0x4];
        [FieldOffset(0x84)] public fixed byte _[0x4];
        [FieldOffset(0x88)] public fixed byte _[0x4];
        [FieldOffset(0x8c)] public fixed byte _[0x1];
        [FieldOffset(0x8d)] public fixed byte _[0x1];
        [FieldOffset(0x8e)] public fixed byte _[0x1];
        [FieldOffset(0x8f)] public fixed byte _[0x1];
        [FieldOffset(0x90)] public fixed byte _[0x4];
        [FieldOffset(0x94)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmVirtualParameterBoolNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CFollowTargetUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x70];
        [FieldOffset(0x70)] public fixed byte _[0x18];
        [FieldOffset(0x88)] public fixed byte _[0x2];
        [FieldOffset(0x8a)] public fixed byte _[0x6];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x2)]
    public unsafe struct PulseRuntimeStateOffset_t {
        [FieldOffset(0x0)] public fixed byte _[0x2];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CCPPScriptComponentUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x30];
        [FieldOffset(0x30)] public fixed byte _[0x30];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc)]
    public unsafe struct NetVarConfigIndex {
        [FieldOffset(0x0)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CAnimData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x10];
        [FieldOffset(0x20)] public fixed byte _[0x18];
        [FieldOffset(0x38)] public fixed byte _[0x18];
        [FieldOffset(0x50)] public fixed byte _[0x8];
        [FieldOffset(0x58)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc)]
    public unsafe struct IKSolverSettings_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CBinaryUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x60];
        [FieldOffset(0x60)] public fixed byte _[0x10];
        [FieldOffset(0x70)] public fixed byte _[0x10];
        [FieldOffset(0x80)] public fixed byte _[0x4];
        [FieldOffset(0x84)] public fixed byte _[0x4];
        [FieldOffset(0x88)] public fixed byte _[0x1];
        [FieldOffset(0x89)] public fixed byte _[0x7];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CBlendNodeInstanceData {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0xc];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc)]
    public unsafe struct CNmParameterizedBlendNode__BlendRange_t {
        [FieldOffset(0x0)] public fixed byte _[0x2];
        [FieldOffset(0x2)] public fixed byte _[0x2];
        [FieldOffset(0x4)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CAnimKeyData {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x18];
        [FieldOffset(0x40)] public fixed byte _[0x18];
        [FieldOffset(0x58)] public fixed byte _[0x8];
        [FieldOffset(0x60)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct AttachmentHandle_t {
        [FieldOffset(0x0)] public fixed byte _[0x1];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CAnimMorphDifference {
        [FieldOffset(0x0)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct FootFixedData_t {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x10];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
        [FieldOffset(0x30)] public fixed byte _[0x4];
        [FieldOffset(0x34)] public fixed byte _[0x4];
        [FieldOffset(0x38)] public fixed byte _[0x4];
        [FieldOffset(0x3c)] public fixed byte _[0x4];
        [FieldOffset(0x40)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x108)]
    public unsafe struct CMotionGraphGroup {
        [FieldOffset(0x0)] public fixed byte _[0xb8];
        [FieldOffset(0xb8)] public fixed byte _[0x18];
        [FieldOffset(0xd0)] public fixed byte _[0x18];
        [FieldOffset(0xe8)] public fixed byte _[0x18];
        [FieldOffset(0x100)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CPulse_InstructionDebug {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CNmVectorNegateNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmSyncTrack__Event_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x6d8)]
    public unsafe struct CParticleCollectionRendererVecInput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x6d8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CNmTarget {
        [FieldOffset(0x0)] public fixed byte _[0x20];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x1];
        [FieldOffset(0x29)] public fixed byte _[0x1];
        [FieldOffset(0x2a)] public fixed byte _[0x1];
        [FieldOffset(0x2b)] public fixed byte _[0x5];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CNmControlParameterIDNode__CDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CNmBodyGroupEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CWayPointHelperUpdateNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x74];
        [FieldOffset(0x74)] public fixed byte _[0x4];
        [FieldOffset(0x78)] public fixed byte _[0x4];
        [FieldOffset(0x7c)] public fixed byte _[0x1];
        [FieldOffset(0x7d)] public fixed byte _[0x1];
        [FieldOffset(0x7e)] public fixed byte _[0x2];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x100)]
    public unsafe struct CMoodVData {
        [FieldOffset(0x0)] public fixed byte _[0xe0];
        [FieldOffset(0xe0)] public fixed byte _[0x8];
        [FieldOffset(0xe8)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xf0)]
    public unsafe struct CModelConfigElement_AttachedModel {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x8];
        [FieldOffset(0x50)] public fixed byte _[0x8];
        [FieldOffset(0x58)] public fixed byte _[0x8];
        [FieldOffset(0x60)] public fixed byte _[0xc];
        [FieldOffset(0x6c)] public fixed byte _[0xc];
        [FieldOffset(0x78)] public fixed byte _[0x8];
        [FieldOffset(0x80)] public fixed byte _[0x8];
        [FieldOffset(0x88)] public fixed byte _[0x4];
        [FieldOffset(0x8c)] public fixed byte _[0x1];
        [FieldOffset(0x8d)] public fixed byte _[0x1];
        [FieldOffset(0x8e)] public fixed byte _[0x2];
        [FieldOffset(0x90)] public fixed byte _[0x8];
        [FieldOffset(0x98)] public fixed byte _[0x8];
        [FieldOffset(0xa0)] public fixed byte _[0x1];
        [FieldOffset(0xa1)] public fixed byte _[0x4f];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CAnimTagManagerUpdater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x38];
        [FieldOffset(0x38)] public fixed byte _[0x40];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CParticleProperty {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
    }

}