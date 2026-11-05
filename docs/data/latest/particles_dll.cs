/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Total Offsets   : 202
/*  Dumped At       : 13:00 05/11/2026 (GMT)
/*  Dumped In       : 1,2s
*/

/* cesium dumper | generated from live schema */
using System;
using System.Runtime.InteropServices;

namespace Cs2.particles_dll {

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

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct IParticleCollection {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x930)]
    public unsafe struct C_OP_RemapGravityToVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x6d8];
        [FieldOffset(0x8b8)] public fixed byte _[0x4];
        [FieldOffset(0x8bc)] public fixed byte _[0x4];
        [FieldOffset(0x8c0)] public fixed byte _[0x70];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1e8)]
    public unsafe struct C_OP_Decay {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x1];
        [FieldOffset(0x1e1)] public fixed byte _[0x7];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x948)]
    public unsafe struct C_OP_RenderDeferredLight {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x4];
        [FieldOffset(0x234)] public fixed byte _[0x4];
        [FieldOffset(0x238)] public fixed byte _[0x8];
        [FieldOffset(0x240)] public fixed byte _[0x6d8];
        [FieldOffset(0x918)] public fixed byte _[0x4];
        [FieldOffset(0x91c)] public fixed byte _[0x1];
        [FieldOffset(0x91d)] public fixed byte _[0x3];
        [FieldOffset(0x920)] public fixed byte _[0x8];
        [FieldOffset(0x928)] public fixed byte _[0x4];
        [FieldOffset(0x92c)] public fixed byte _[0x4];
        [FieldOffset(0x930)] public fixed byte _[0x4];
        [FieldOffset(0x934)] public fixed byte _[0x4];
        [FieldOffset(0x938)] public fixed byte _[0x4];
        [FieldOffset(0x93c)] public fixed byte _[0x4];
        [FieldOffset(0x940)] public fixed byte _[0x4];
        [FieldOffset(0x944)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_RemapSpeedtoCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x4];
        [FieldOffset(0x204)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x248)]
    public unsafe struct C_OP_RemapTransformToVelocity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x68];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CollisionGroupContext_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1e8)]
    public unsafe struct CParticleFunctionPreEmission {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1e8)]
    public unsafe struct C_OP_FadeOutSimple {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xe98)]
    public unsafe struct C_OP_SpringToVectorConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x178];
        [FieldOffset(0x358)] public fixed byte _[0x178];
        [FieldOffset(0x4d0)] public fixed byte _[0x178];
        [FieldOffset(0x648)] public fixed byte _[0x178];
        [FieldOffset(0x7c0)] public fixed byte _[0x6d8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x3528)]
    public unsafe struct C_OP_RenderRopes {
        [FieldOffset(0x0)] public fixed byte pad_0[0x2ed8];
        [FieldOffset(0x2ed8)] public fixed byte _[0x4];
        [FieldOffset(0x2edc)] public fixed byte _[0x4];
        [FieldOffset(0x2ee0)] public fixed byte _[0x4];
        [FieldOffset(0x2ee4)] public fixed byte _[0x4];
        [FieldOffset(0x2ee8)] public fixed byte _[0x4];
        [FieldOffset(0x2eec)] public fixed byte _[0x4];
        [FieldOffset(0x2ef0)] public fixed byte _[0x8];
        [FieldOffset(0x2ef8)] public fixed byte _[0x178];
        [FieldOffset(0x3070)] public fixed byte _[0x4];
        [FieldOffset(0x3074)] public fixed byte _[0x4];
        [FieldOffset(0x3078)] public fixed byte _[0x4];
        [FieldOffset(0x307c)] public fixed byte _[0x4];
        [FieldOffset(0x3080)] public fixed byte _[0x178];
        [FieldOffset(0x31f8)] public fixed byte _[0x178];
        [FieldOffset(0x3370)] public fixed byte _[0x178];
        [FieldOffset(0x34e8)] public fixed byte _[0x4];
        [FieldOffset(0x34ec)] public fixed byte _[0x4];
        [FieldOffset(0x34f0)] public fixed byte _[0x4];
        [FieldOffset(0x34f4)] public fixed byte _[0x4];
        [FieldOffset(0x34f8)] public fixed byte _[0x4];
        [FieldOffset(0x34fc)] public fixed byte _[0x4];
        [FieldOffset(0x3500)] public fixed byte _[0x5];
        [FieldOffset(0x3505)] public fixed byte _[0x3];
        [FieldOffset(0x3508)] public fixed byte _[0x4];
        [FieldOffset(0x350c)] public fixed byte _[0x4];
        [FieldOffset(0x3510)] public fixed byte _[0x1];
        [FieldOffset(0x3511)] public fixed byte _[0x3];
        [FieldOffset(0x3514)] public fixed byte _[0x4];
        [FieldOffset(0x3518)] public fixed byte _[0x4];
        [FieldOffset(0x351c)] public fixed byte _[0x4];
        [FieldOffset(0x3520)] public fixed byte _[0x4];
        [FieldOffset(0x3524)] public fixed byte _[0x1];
        [FieldOffset(0x3525)] public fixed byte _[0x3];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x238)]
    public unsafe struct C_INIT_StatusEffectCitadel {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x4];
        [FieldOffset(0x204)] public fixed byte _[0x4];
        [FieldOffset(0x208)] public fixed byte _[0x4];
        [FieldOffset(0x20c)] public fixed byte _[0x4];
        [FieldOffset(0x210)] public fixed byte _[0x4];
        [FieldOffset(0x214)] public fixed byte _[0x4];
        [FieldOffset(0x218)] public fixed byte _[0x4];
        [FieldOffset(0x21c)] public fixed byte _[0x4];
        [FieldOffset(0x220)] public fixed byte _[0x4];
        [FieldOffset(0x224)] public fixed byte _[0x4];
        [FieldOffset(0x228)] public fixed byte _[0x4];
        [FieldOffset(0x22c)] public fixed byte _[0x4];
        [FieldOffset(0x230)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x360)]
    public unsafe struct C_OP_RenderSound {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x4];
        [FieldOffset(0x234)] public fixed byte _[0x4];
        [FieldOffset(0x238)] public fixed byte _[0x4];
        [FieldOffset(0x23c)] public fixed byte _[0x4];
        [FieldOffset(0x240)] public fixed byte _[0x4];
        [FieldOffset(0x244)] public fixed byte _[0x4];
        [FieldOffset(0x248)] public fixed byte _[0x4];
        [FieldOffset(0x24c)] public fixed byte _[0x4];
        [FieldOffset(0x250)] public fixed byte _[0x4];
        [FieldOffset(0x254)] public fixed byte _[0x4];
        [FieldOffset(0x258)] public fixed byte _[0x100];
        [FieldOffset(0x358)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CParticleVisibilityInputs {
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
        [FieldOffset(0x2c)] public fixed byte _[0x1];
        [FieldOffset(0x2d)] public fixed byte _[0x3];
        [FieldOffset(0x30)] public fixed byte _[0x4];
        [FieldOffset(0x34)] public fixed byte _[0x4];
        [FieldOffset(0x38)] public fixed byte _[0x4];
        [FieldOffset(0x3c)] public fixed byte _[0x4];
        [FieldOffset(0x40)] public fixed byte _[0x4];
        [FieldOffset(0x44)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_SetControlPointsToParticle {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x1];
        [FieldOffset(0x1f1)] public fixed byte _[0x3];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f0)]
    public unsafe struct C_OP_RemapCPVelocityToVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x368)]
    public unsafe struct C_OP_PointVectorAtNextParticle {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct ParticlePreviewBodyGroup_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x220)]
    public unsafe struct C_OP_OscillateScalarSimple {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x30];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x248)]
    public unsafe struct C_INIT_StatusEffect {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x4];
        [FieldOffset(0x204)] public fixed byte _[0x4];
        [FieldOffset(0x208)] public fixed byte _[0x4];
        [FieldOffset(0x20c)] public fixed byte _[0x4];
        [FieldOffset(0x210)] public fixed byte _[0x4];
        [FieldOffset(0x214)] public fixed byte _[0x4];
        [FieldOffset(0x218)] public fixed byte _[0x4];
        [FieldOffset(0x21c)] public fixed byte _[0x4];
        [FieldOffset(0x220)] public fixed byte _[0x4];
        [FieldOffset(0x224)] public fixed byte _[0x4];
        [FieldOffset(0x228)] public fixed byte _[0x4];
        [FieldOffset(0x22c)] public fixed byte _[0x1c];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x290)]
    public unsafe struct C_INIT_RtEnvCull {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0xc];
        [FieldOffset(0x1f4)] public fixed byte _[0xc];
        [FieldOffset(0x200)] public fixed byte _[0x1];
        [FieldOffset(0x201)] public fixed byte _[0x1];
        [FieldOffset(0x202)] public fixed byte _[0x1];
        [FieldOffset(0x203)] public fixed byte _[0x81];
        [FieldOffset(0x284)] public fixed byte _[0x4];
        [FieldOffset(0x288)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc18)]
    public unsafe struct C_OP_ConstrainDistance {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x178];
        [FieldOffset(0x358)] public fixed byte _[0x178];
        [FieldOffset(0x4d0)] public fixed byte _[0x68];
        [FieldOffset(0x538)] public fixed byte _[0x6d8];
        [FieldOffset(0xc10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_INIT_RandomVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0xc];
        [FieldOffset(0x1f4)] public fixed byte _[0xc];
        [FieldOffset(0x200)] public fixed byte _[0x4];
        [FieldOffset(0x204)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1b60)]
    public unsafe struct C_INIT_InitialVelocityNoise {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0xc];
        [FieldOffset(0x1f4)] public fixed byte _[0xc];
        [FieldOffset(0x200)] public fixed byte _[0x6d8];
        [FieldOffset(0x8d8)] public fixed byte _[0x178];
        [FieldOffset(0xa50)] public fixed byte _[0x6d8];
        [FieldOffset(0x1128)] public fixed byte _[0x6d8];
        [FieldOffset(0x1800)] public fixed byte _[0x178];
        [FieldOffset(0x1978)] public fixed byte _[0x178];
        [FieldOffset(0x1af0)] public fixed byte _[0x68];
        [FieldOffset(0x1b58)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct ParticleChildrenInfo_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x1];
        [FieldOffset(0xd)] public fixed byte _[0x3];
        [FieldOffset(0x10)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_RemapScalarOnceTimed {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_INIT_RandomNamedModelSequence {
        [FieldOffset(0x0)] public fixed byte pad_0[0x210];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8c8)]
    public unsafe struct C_OP_PlaneCull {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
        [FieldOffset(0x1e8)] public fixed byte _[0x6d8];
        [FieldOffset(0x8c0)] public fixed byte _[0x4];
        [FieldOffset(0x8c4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x12a0)]
    public unsafe struct C_INIT_VelocityRandom {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
        [FieldOffset(0x1f0)] public fixed byte _[0x178];
        [FieldOffset(0x368)] public fixed byte _[0x178];
        [FieldOffset(0x4e0)] public fixed byte _[0x6d8];
        [FieldOffset(0xbb8)] public fixed byte _[0x6d8];
        [FieldOffset(0x1290)] public fixed byte _[0x4];
        [FieldOffset(0x1294)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x948)]
    public unsafe struct C_OP_ModelDampenMovement {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x1];
        [FieldOffset(0x1e5)] public fixed byte _[0x1];
        [FieldOffset(0x1e6)] public fixed byte _[0x1];
        [FieldOffset(0x1e7)] public fixed byte _[0x81];
        [FieldOffset(0x268)] public fixed byte _[0x6d8];
        [FieldOffset(0x940)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_TwistAroundAxis {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1f0];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0xc];
        [FieldOffset(0x200)] public fixed byte _[0x4];
        [FieldOffset(0x204)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x218)]
    public unsafe struct C_OP_TeleportBeam {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0xc];
        [FieldOffset(0x204)] public fixed byte _[0x4];
        [FieldOffset(0x208)] public fixed byte _[0x4];
        [FieldOffset(0x20c)] public fixed byte _[0x4];
        [FieldOffset(0x210)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8d0)]
    public unsafe struct C_OP_RemapExternalWindToCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x6d8];
        [FieldOffset(0x8c8)] public fixed byte _[0x4];
        [FieldOffset(0x8cc)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x2ed8)]
    public unsafe struct CBaseRendererSource2 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x178];
        [FieldOffset(0x3a8)] public fixed byte _[0x178];
        [FieldOffset(0x520)] public fixed byte _[0x178];
        [FieldOffset(0x698)] public fixed byte _[0x8];
        [FieldOffset(0x6a0)] public fixed byte _[0x6d8];
        [FieldOffset(0xd78)] public fixed byte _[0x4];
        [FieldOffset(0xd7c)] public fixed byte _[0x4];
        [FieldOffset(0xd80)] public fixed byte _[0x8];
        [FieldOffset(0xd88)] public fixed byte _[0x178];
        [FieldOffset(0xf00)] public fixed byte _[0x178];
        [FieldOffset(0x1078)] public fixed byte _[0x4];
        [FieldOffset(0x107c)] public fixed byte _[0x4];
        [FieldOffset(0x1080)] public fixed byte _[0x10];
        [FieldOffset(0x1090)] public fixed byte _[0x4];
        [FieldOffset(0x1094)] public fixed byte _[0x4];
        [FieldOffset(0x1098)] public fixed byte _[0x8];
        [FieldOffset(0x10a0)] public fixed byte _[0x178];
        [FieldOffset(0x1218)] public fixed byte _[0x178];
        [FieldOffset(0x1390)] public fixed byte _[0x178];
        [FieldOffset(0x1508)] public fixed byte _[0x178];
        [FieldOffset(0x1680)] public fixed byte _[0x178];
        [FieldOffset(0x17f8)] public fixed byte _[0x4];
        [FieldOffset(0x17fc)] public fixed byte _[0x4];
        [FieldOffset(0x1800)] public fixed byte _[0x1];
        [FieldOffset(0x1801)] public fixed byte _[0x7];
        [FieldOffset(0x1808)] public fixed byte _[0x178];
        [FieldOffset(0x1980)] public fixed byte _[0x178];
        [FieldOffset(0x1af8)] public fixed byte _[0x178];
        [FieldOffset(0x1c70)] public fixed byte _[0x4];
        [FieldOffset(0x1c74)] public fixed byte _[0x4];
        [FieldOffset(0x1c78)] public fixed byte _[0x178];
        [FieldOffset(0x1df0)] public fixed byte _[0x1];
        [FieldOffset(0x1df1)] public fixed byte _[0x3];
        [FieldOffset(0x1df4)] public fixed byte _[0x4];
        [FieldOffset(0x1df8)] public fixed byte _[0x4];
        [FieldOffset(0x1dfc)] public fixed byte _[0x4];
        [FieldOffset(0x1e00)] public fixed byte _[0x178];
        [FieldOffset(0x1f78)] public fixed byte _[0x178];
        [FieldOffset(0x20f0)] public fixed byte _[0x178];
        [FieldOffset(0x2268)] public fixed byte _[0x1];
        [FieldOffset(0x2269)] public fixed byte _[0x1];
        [FieldOffset(0x226a)] public fixed byte _[0x6];
        [FieldOffset(0x2270)] public fixed byte _[0x178];
        [FieldOffset(0x23e8)] public fixed byte _[0x4];
        [FieldOffset(0x23ec)] public fixed byte _[0x4];
        [FieldOffset(0x23f0)] public fixed byte _[0x1];
        [FieldOffset(0x23f1)] public fixed byte _[0x1];
        [FieldOffset(0x23f2)] public fixed byte _[0x1];
        [FieldOffset(0x23f3)] public fixed byte _[0x1];
        [FieldOffset(0x23f4)] public fixed byte _[0x80];
        [FieldOffset(0x2474)] public fixed byte _[0x1];
        [FieldOffset(0x2475)] public fixed byte _[0x80];
        [FieldOffset(0x24f5)] public fixed byte _[0x1];
        [FieldOffset(0x24f6)] public fixed byte _[0x1];
        [FieldOffset(0x24f7)] public fixed byte _[0x1];
        [FieldOffset(0x24f8)] public fixed byte _[0x4];
        [FieldOffset(0x24fc)] public fixed byte _[0x4];
        [FieldOffset(0x2500)] public fixed byte _[0x178];
        [FieldOffset(0x2678)] public fixed byte _[0x178];
        [FieldOffset(0x27f0)] public fixed byte _[0x178];
        [FieldOffset(0x2968)] public fixed byte _[0x178];
        [FieldOffset(0x2ae0)] public fixed byte _[0x178];
        [FieldOffset(0x2c58)] public fixed byte _[0x4];
        [FieldOffset(0x2c5c)] public fixed byte _[0x1];
        [FieldOffset(0x2c5d)] public fixed byte _[0x27b];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1e0)]
    public unsafe struct CSpinUpdateBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8c8)]
    public unsafe struct C_OP_OrientTo2dDirection {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x6d8];
        [FieldOffset(0x8b8)] public fixed byte _[0x4];
        [FieldOffset(0x8bc)] public fixed byte _[0x4];
        [FieldOffset(0x8c0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x7d8)]
    public unsafe struct C_OP_RemapDotProductToCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x178];
        [FieldOffset(0x370)] public fixed byte _[0x178];
        [FieldOffset(0x4e8)] public fixed byte _[0x178];
        [FieldOffset(0x660)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x238)]
    public unsafe struct C_INIT_RemapParticleCountToNamedModelElementScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x218];
        [FieldOffset(0x218)] public fixed byte _[0x8];
        [FieldOffset(0x220)] public fixed byte _[0x8];
        [FieldOffset(0x228)] public fixed byte _[0x8];
        [FieldOffset(0x230)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4720)]
    public unsafe struct C_OP_RenderTrails {
        [FieldOffset(0x0)] public fixed byte pad_0[0x3358];
        [FieldOffset(0x3358)] public fixed byte _[0x4];
        [FieldOffset(0x335c)] public fixed byte _[0x4];
        [FieldOffset(0x3360)] public fixed byte _[0x4];
        [FieldOffset(0x3364)] public fixed byte _[0x4];
        [FieldOffset(0x3368)] public fixed byte _[0x4];
        [FieldOffset(0x336c)] public fixed byte _[0x4];
        [FieldOffset(0x3370)] public fixed byte _[0x4];
        [FieldOffset(0x3374)] public fixed byte _[0x4];
        [FieldOffset(0x3378)] public fixed byte _[0x4];
        [FieldOffset(0x337c)] public fixed byte _[0x4];
        [FieldOffset(0x3380)] public fixed byte _[0x178];
        [FieldOffset(0x34f8)] public fixed byte _[0x6d8];
        [FieldOffset(0x3bd0)] public fixed byte _[0x178];
        [FieldOffset(0x3d48)] public fixed byte _[0x178];
        [FieldOffset(0x3ec0)] public fixed byte _[0x6d8];
        [FieldOffset(0x4598)] public fixed byte _[0x178];
        [FieldOffset(0x4710)] public fixed byte _[0x4];
        [FieldOffset(0x4714)] public fixed byte _[0x4];
        [FieldOffset(0x4718)] public fixed byte _[0x4];
        [FieldOffset(0x471c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x280)]
    public unsafe struct C_OP_SetControlPointPositionToTimeOfDayValue {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x80];
        [FieldOffset(0x26c)] public fixed byte _[0x14];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x380)]
    public unsafe struct C_OP_DecayMaintainCount {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
        [FieldOffset(0x1f0)] public fixed byte _[0x8];
        [FieldOffset(0x1f8)] public fixed byte _[0x8];
        [FieldOffset(0x200)] public fixed byte _[0x178];
        [FieldOffset(0x378)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x3f0)]
    public unsafe struct C_INIT_RandomModelSequence {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x100];
        [FieldOffset(0x2e8)] public fixed byte _[0x100];
        [FieldOffset(0x3e8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x370)]
    public unsafe struct C_OP_ExternalGameImpulseForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1f0];
        [FieldOffset(0x1f0)] public fixed byte _[0x178];
        [FieldOffset(0x368)] public fixed byte _[0x1];
        [FieldOffset(0x369)] public fixed byte _[0x1];
        [FieldOffset(0x36a)] public fixed byte _[0x1];
        [FieldOffset(0x36b)] public fixed byte _[0x5];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xf38)]
    public unsafe struct C_OP_RemapAverageHitboxSpeedtoCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x178];
        [FieldOffset(0x370)] public fixed byte _[0x178];
        [FieldOffset(0x4e8)] public fixed byte _[0x178];
        [FieldOffset(0x660)] public fixed byte _[0x178];
        [FieldOffset(0x7d8)] public fixed byte _[0x8];
        [FieldOffset(0x7e0)] public fixed byte _[0x6d8];
        [FieldOffset(0xeb8)] public fixed byte _[0x80];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_INIT_RandomAlpha {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0xc];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1e8)]
    public unsafe struct C_OP_NormalizeVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1e8)]
    public unsafe struct C_OP_FadeInSimple {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x660)]
    public unsafe struct C_OP_RepeatedTriggerChildGroup {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
        [FieldOffset(0x1f0)] public fixed byte _[0x178];
        [FieldOffset(0x368)] public fixed byte _[0x178];
        [FieldOffset(0x4e0)] public fixed byte _[0x178];
        [FieldOffset(0x658)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f0)]
    public unsafe struct C_OP_RemapVelocityToVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xad0)]
    public unsafe struct C_INIT_SetHitboxToClosest {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x6d8];
        [FieldOffset(0x8c8)] public fixed byte _[0x80];
        [FieldOffset(0x948)] public fixed byte _[0x1];
        [FieldOffset(0x949)] public fixed byte _[0x3];
        [FieldOffset(0x94c)] public fixed byte _[0x4];
        [FieldOffset(0x950)] public fixed byte _[0x178];
        [FieldOffset(0xac8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xe18)]
    public unsafe struct C_INIT_RingWave {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x68];
        [FieldOffset(0x250)] public fixed byte _[0x178];
        [FieldOffset(0x3c8)] public fixed byte _[0x178];
        [FieldOffset(0x540)] public fixed byte _[0x178];
        [FieldOffset(0x6b8)] public fixed byte _[0x178];
        [FieldOffset(0x830)] public fixed byte _[0x178];
        [FieldOffset(0x9a8)] public fixed byte _[0x178];
        [FieldOffset(0xb20)] public fixed byte _[0x178];
        [FieldOffset(0xc98)] public fixed byte _[0x178];
        [FieldOffset(0xe10)] public fixed byte _[0x1];
        [FieldOffset(0xe11)] public fixed byte _[0x7];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f8)]
    public unsafe struct C_INIT_RandomTrailLength {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_RemapScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x930)]
    public unsafe struct C_OP_DistanceBetweenTransforms {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
        [FieldOffset(0x1e8)] public fixed byte _[0x68];
        [FieldOffset(0x250)] public fixed byte _[0x68];
        [FieldOffset(0x2b8)] public fixed byte _[0x178];
        [FieldOffset(0x430)] public fixed byte _[0x178];
        [FieldOffset(0x5a8)] public fixed byte _[0x178];
        [FieldOffset(0x720)] public fixed byte _[0x178];
        [FieldOffset(0x898)] public fixed byte _[0x4];
        [FieldOffset(0x89c)] public fixed byte _[0x4];
        [FieldOffset(0x8a0)] public fixed byte _[0x80];
        [FieldOffset(0x920)] public fixed byte _[0x4];
        [FieldOffset(0x924)] public fixed byte _[0x4];
        [FieldOffset(0x928)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x358)]
    public unsafe struct C_OP_DecayOffscreen {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x240)]
    public unsafe struct C_INIT_CreateSequentialPath {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x1];
        [FieldOffset(0x1f1)] public fixed byte _[0x1];
        [FieldOffset(0x1f2)] public fixed byte _[0xe];
        [FieldOffset(0x200)] public fixed byte _[0x40];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x358)]
    public unsafe struct C_OP_EndCapTimedDecay {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f8)]
    public unsafe struct C_OP_RemapDistanceToLineSegmentBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x680)]
    public unsafe struct C_OP_ContinuousEmitter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x178];
        [FieldOffset(0x4d8)] public fixed byte _[0x178];
        [FieldOffset(0x650)] public fixed byte _[0x4];
        [FieldOffset(0x654)] public fixed byte _[0x4];
        [FieldOffset(0x658)] public fixed byte _[0x4];
        [FieldOffset(0x65c)] public fixed byte _[0x4];
        [FieldOffset(0x660)] public fixed byte _[0x8];
        [FieldOffset(0x668)] public fixed byte _[0x8];
        [FieldOffset(0x670)] public fixed byte _[0x4];
        [FieldOffset(0x674)] public fixed byte _[0x1];
        [FieldOffset(0x675)] public fixed byte _[0xb];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_OscillateVectorSimple {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0xc];
        [FieldOffset(0x1ec)] public fixed byte _[0xc];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x4];
        [FieldOffset(0x204)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f0)]
    public unsafe struct C_INIT_SequenceLifeTime {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x948)]
    public unsafe struct C_INIT_MoveBetweenPoints {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x178];
        [FieldOffset(0x4d8)] public fixed byte _[0x178];
        [FieldOffset(0x650)] public fixed byte _[0x178];
        [FieldOffset(0x7c8)] public fixed byte _[0x178];
        [FieldOffset(0x940)] public fixed byte _[0x4];
        [FieldOffset(0x944)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x238)]
    public unsafe struct C_INIT_StatusEffectTf {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x4];
        [FieldOffset(0x204)] public fixed byte _[0x4];
        [FieldOffset(0x208)] public fixed byte _[0x4];
        [FieldOffset(0x20c)] public fixed byte _[0x4];
        [FieldOffset(0x210)] public fixed byte _[0x4];
        [FieldOffset(0x214)] public fixed byte _[0x4];
        [FieldOffset(0x218)] public fixed byte _[0x4];
        [FieldOffset(0x21c)] public fixed byte _[0x4];
        [FieldOffset(0x220)] public fixed byte _[0x4];
        [FieldOffset(0x224)] public fixed byte _[0x4];
        [FieldOffset(0x228)] public fixed byte _[0x4];
        [FieldOffset(0x22c)] public fixed byte _[0x4];
        [FieldOffset(0x230)] public fixed byte _[0x4];
        [FieldOffset(0x234)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x658)]
    public unsafe struct C_OP_SetUserEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x178];
        [FieldOffset(0x358)] public fixed byte _[0x178];
        [FieldOffset(0x4d0)] public fixed byte _[0x8];
        [FieldOffset(0x4d8)] public fixed byte _[0x178];
        [FieldOffset(0x650)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x380)]
    public unsafe struct C_OP_QuantizeFloat {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x178];
        [FieldOffset(0x358)] public fixed byte _[0x28];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xea8)]
    public unsafe struct C_OP_BasicMovement {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x6d8];
        [FieldOffset(0x8b8)] public fixed byte _[0x178];
        [FieldOffset(0xa30)] public fixed byte _[0x470];
        [FieldOffset(0xea0)] public fixed byte _[0x4];
        [FieldOffset(0xea4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_INIT_RandomNamedModelElement {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
        [FieldOffset(0x1f0)] public fixed byte _[0x18];
        [FieldOffset(0x208)] public fixed byte _[0x1];
        [FieldOffset(0x209)] public fixed byte _[0x1];
        [FieldOffset(0x20a)] public fixed byte _[0x2];
        [FieldOffset(0x20c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x270)]
    public unsafe struct C_INIT_InitFromParentKilled {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x84];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_OP_Callback {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1e0)]
    public unsafe struct CParticleFunction {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x178];
        [FieldOffset(0x180)] public fixed byte _[0x4];
        [FieldOffset(0x184)] public fixed byte _[0x4];
        [FieldOffset(0x188)] public fixed byte _[0x4];
        [FieldOffset(0x18c)] public fixed byte _[0x4];
        [FieldOffset(0x190)] public fixed byte _[0x4];
        [FieldOffset(0x194)] public fixed byte _[0x4];
        [FieldOffset(0x198)] public fixed byte _[0x4];
        [FieldOffset(0x19c)] public fixed byte _[0x4];
        [FieldOffset(0x1a0)] public fixed byte _[0x4];
        [FieldOffset(0x1a4)] public fixed byte _[0x4];
        [FieldOffset(0x1a8)] public fixed byte _[0x4];
        [FieldOffset(0x1ac)] public fixed byte _[0x4];
        [FieldOffset(0x1b0)] public fixed byte _[0x4];
        [FieldOffset(0x1b4)] public fixed byte _[0x6];
        [FieldOffset(0x1ba)] public fixed byte _[0x6];
        [FieldOffset(0x1c0)] public fixed byte _[0x20];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1e8)]
    public unsafe struct C_OP_GlobalLight {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x1];
        [FieldOffset(0x1e5)] public fixed byte _[0x3];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_INIT_OffsetVectorToVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0xc];
        [FieldOffset(0x1fc)] public fixed byte _[0xc];
        [FieldOffset(0x208)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_SetPerChildControlPointFromAttribute {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_SetParentControlPointsToChildCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xf98)]
    public unsafe struct C_OP_BoxConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x6d8];
        [FieldOffset(0x8b8)] public fixed byte _[0x6d8];
        [FieldOffset(0xf90)] public fixed byte _[0x4];
        [FieldOffset(0xf94)] public fixed byte _[0x1];
        [FieldOffset(0xf95)] public fixed byte _[0x3];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x218)]
    public unsafe struct C_INIT_CreatePhyllotaxis {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x4];
        [FieldOffset(0x204)] public fixed byte _[0x4];
        [FieldOffset(0x208)] public fixed byte _[0x4];
        [FieldOffset(0x20c)] public fixed byte _[0x4];
        [FieldOffset(0x210)] public fixed byte _[0x4];
        [FieldOffset(0x214)] public fixed byte _[0x1];
        [FieldOffset(0x215)] public fixed byte _[0x1];
        [FieldOffset(0x216)] public fixed byte _[0x2];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x6e0)]
    public unsafe struct C_OP_AttractToControlPoint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1f0];
        [FieldOffset(0x1f0)] public fixed byte _[0x10];
        [FieldOffset(0x200)] public fixed byte _[0x178];
        [FieldOffset(0x378)] public fixed byte _[0x178];
        [FieldOffset(0x4f0)] public fixed byte _[0x8];
        [FieldOffset(0x4f8)] public fixed byte _[0x68];
        [FieldOffset(0x560)] public fixed byte _[0x178];
        [FieldOffset(0x6d8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f8)]
    public unsafe struct C_INIT_RandomLifeTime {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x238)]
    public unsafe struct C_INIT_RemapParticleCountToNamedModelSequenceScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x238];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x12a0)]
    public unsafe struct C_INIT_VelocityRadialRandom {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x6d8];
        [FieldOffset(0x8c8)] public fixed byte _[0x6d8];
        [FieldOffset(0xfa0)] public fixed byte _[0x178];
        [FieldOffset(0x1118)] public fixed byte _[0x178];
        [FieldOffset(0x1290)] public fixed byte _[0xd];
        [FieldOffset(0x129d)] public fixed byte _[0x3];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f8)]
    public unsafe struct C_INIT_RandomRadius {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f0)]
    public unsafe struct C_OP_Orient2DRelToCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xa68)]
    public unsafe struct TextureControls_t {
        [FieldOffset(0x0)] public fixed byte _[0x178];
        [FieldOffset(0x178)] public fixed byte _[0x178];
        [FieldOffset(0x2f0)] public fixed byte _[0x178];
        [FieldOffset(0x468)] public fixed byte _[0x178];
        [FieldOffset(0x5e0)] public fixed byte _[0x178];
        [FieldOffset(0x758)] public fixed byte _[0x178];
        [FieldOffset(0x8d0)] public fixed byte _[0x178];
        [FieldOffset(0xa48)] public fixed byte _[0x1];
        [FieldOffset(0xa49)] public fixed byte _[0x3];
        [FieldOffset(0xa4c)] public fixed byte _[0x4];
        [FieldOffset(0xa50)] public fixed byte _[0x4];
        [FieldOffset(0xa54)] public fixed byte _[0x4];
        [FieldOffset(0xa58)] public fixed byte _[0x4];
        [FieldOffset(0xa5c)] public fixed byte _[0x4];
        [FieldOffset(0xa60)] public fixed byte _[0x4];
        [FieldOffset(0xa64)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct ControlPointReference_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0xc];
        [FieldOffset(0x10)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1120)]
    public unsafe struct C_OP_SetControlPointToVectorExpression {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x6d8];
        [FieldOffset(0x8c8)] public fixed byte _[0x6d8];
        [FieldOffset(0xfa0)] public fixed byte _[0x178];
        [FieldOffset(0x1118)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x16a0)]
    public unsafe struct C_OP_LightningSnapshotGenerator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x8];
        [FieldOffset(0x1f8)] public fixed byte _[0x178];
        [FieldOffset(0x370)] public fixed byte _[0x178];
        [FieldOffset(0x4e8)] public fixed byte _[0x178];
        [FieldOffset(0x660)] public fixed byte _[0x178];
        [FieldOffset(0x7d8)] public fixed byte _[0x178];
        [FieldOffset(0x950)] public fixed byte _[0x178];
        [FieldOffset(0xac8)] public fixed byte _[0x178];
        [FieldOffset(0xc40)] public fixed byte _[0x178];
        [FieldOffset(0xdb8)] public fixed byte _[0x8];
        [FieldOffset(0xdc0)] public fixed byte _[0x178];
        [FieldOffset(0xf38)] public fixed byte _[0x8];
        [FieldOffset(0xf40)] public fixed byte _[0x178];
        [FieldOffset(0x10b8)] public fixed byte _[0x178];
        [FieldOffset(0x1230)] public fixed byte _[0x8];
        [FieldOffset(0x1238)] public fixed byte _[0x178];
        [FieldOffset(0x13b0)] public fixed byte _[0x178];
        [FieldOffset(0x1528)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x240)]
    public unsafe struct C_OP_RemapNamedModelMeshGroupOnceTimed {
        [FieldOffset(0x0)] public fixed byte pad_0[0x240];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x250)]
    public unsafe struct C_INIT_RemapQAnglesToRotation {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x68];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xfb8)]
    public unsafe struct C_INIT_PositionWarp {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x6d8];
        [FieldOffset(0x8c0)] public fixed byte _[0x6d8];
        [FieldOffset(0xf98)] public fixed byte _[0x4];
        [FieldOffset(0xf9c)] public fixed byte _[0x4];
        [FieldOffset(0xfa0)] public fixed byte _[0x4];
        [FieldOffset(0xfa4)] public fixed byte _[0x4];
        [FieldOffset(0xfa8)] public fixed byte _[0x4];
        [FieldOffset(0xfac)] public fixed byte _[0x4];
        [FieldOffset(0xfb0)] public fixed byte _[0x1];
        [FieldOffset(0xfb1)] public fixed byte _[0x7];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x7d8)]
    public unsafe struct C_OP_SetControlPointFieldToScalarExpression {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
        [FieldOffset(0x1f0)] public fixed byte _[0x178];
        [FieldOffset(0x368)] public fixed byte _[0x178];
        [FieldOffset(0x4e0)] public fixed byte _[0x178];
        [FieldOffset(0x658)] public fixed byte _[0x4];
        [FieldOffset(0x65c)] public fixed byte _[0x4];
        [FieldOffset(0x660)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x930)]
    public unsafe struct C_OP_CreateParticleSystemRenderer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x8];
        [FieldOffset(0x238)] public fixed byte _[0x8];
        [FieldOffset(0x240)] public fixed byte _[0x10];
        [FieldOffset(0x250)] public fixed byte _[0x8];
        [FieldOffset(0x258)] public fixed byte _[0x6d8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f0)]
    public unsafe struct CParticleFunctionForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1f0];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f8)]
    public unsafe struct C_INIT_RandomVectorComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f0)]
    public unsafe struct C_OP_InheritFromParentParticles {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1190)]
    public unsafe struct C_INIT_SetVectorAttributeToVectorExpression {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
        [FieldOffset(0x1f0)] public fixed byte _[0x6d8];
        [FieldOffset(0x8c8)] public fixed byte _[0x6d8];
        [FieldOffset(0xfa0)] public fixed byte _[0x178];
        [FieldOffset(0x1118)] public fixed byte _[0x4];
        [FieldOffset(0x111c)] public fixed byte _[0x4];
        [FieldOffset(0x1120)] public fixed byte _[0x70];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x278)]
    public unsafe struct C_OP_RemapTransformVisibilityToVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
        [FieldOffset(0x1e8)] public fixed byte _[0x68];
        [FieldOffset(0x250)] public fixed byte _[0x4];
        [FieldOffset(0x254)] public fixed byte _[0x4];
        [FieldOffset(0x258)] public fixed byte _[0x4];
        [FieldOffset(0x25c)] public fixed byte _[0xc];
        [FieldOffset(0x268)] public fixed byte _[0xc];
        [FieldOffset(0x274)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xf98)]
    public unsafe struct C_OP_DirectionBetweenVecsToVec {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
        [FieldOffset(0x1e8)] public fixed byte _[0x6d8];
        [FieldOffset(0x8c0)] public fixed byte _[0x6d8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xa40)]
    public unsafe struct C_OP_MovementLoopInsideSphere {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x6d8];
        [FieldOffset(0xa38)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x5b0)]
    public unsafe struct C_OP_RenderSimpleModelCollection {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x8];
        [FieldOffset(0x238)] public fixed byte _[0x8];
        [FieldOffset(0x240)] public fixed byte _[0x60];
        [FieldOffset(0x2a0)] public fixed byte _[0x178];
        [FieldOffset(0x418)] public fixed byte _[0x1];
        [FieldOffset(0x419)] public fixed byte _[0x1];
        [FieldOffset(0x41a)] public fixed byte _[0x6];
        [FieldOffset(0x420)] public fixed byte _[0x178];
        [FieldOffset(0x598)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4e0)]
    public unsafe struct C_OP_QuantizeCPComponent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x4];
        [FieldOffset(0x364)] public fixed byte _[0x4];
        [FieldOffset(0x368)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f0)]
    public unsafe struct C_OP_PlayEndCapWhenFinished {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x1];
        [FieldOffset(0x1e9)] public fixed byte _[0x7];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x368)]
    public unsafe struct C_INIT_InitFloatCollection {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CPathParameters {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0xc];
        [FieldOffset(0x24)] public fixed byte _[0xc];
        [FieldOffset(0x30)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f8)]
    public unsafe struct C_OP_RemapScalarEndCap {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_INIT_CreateFromPlaneCache {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0xc];
        [FieldOffset(0x1f4)] public fixed byte _[0xd];
        [FieldOffset(0x201)] public fixed byte _[0x7];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x648)]
    public unsafe struct C_OP_LazyCullCompareFloat {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x178];
        [FieldOffset(0x358)] public fixed byte _[0x178];
        [FieldOffset(0x4d0)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_ControlPointToRadialScreenSpace {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0xc];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1e0)]
    public unsafe struct C_OP_SpinUpdate {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_INIT_NormalOffset {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0xc];
        [FieldOffset(0x1f4)] public fixed byte _[0xc];
        [FieldOffset(0x200)] public fixed byte _[0x4];
        [FieldOffset(0x204)] public fixed byte _[0x1];
        [FieldOffset(0x205)] public fixed byte _[0x3];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x218)]
    public unsafe struct C_OP_RemapDistanceToLineSegmentToVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1f8];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0xc];
        [FieldOffset(0x208)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x268)]
    public unsafe struct C_OP_RenderAsModels {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x1c];
        [FieldOffset(0x24c)] public fixed byte _[0x4];
        [FieldOffset(0x250)] public fixed byte _[0x1];
        [FieldOffset(0x251)] public fixed byte _[0x3];
        [FieldOffset(0x254)] public fixed byte _[0x4];
        [FieldOffset(0x258)] public fixed byte _[0x4];
        [FieldOffset(0x25c)] public fixed byte _[0x4];
        [FieldOffset(0x260)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x218)]
    public unsafe struct C_INIT_CreationNoise {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x1];
        [FieldOffset(0x1ed)] public fixed byte _[0x3];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x4];
        [FieldOffset(0x204)] public fixed byte _[0xc];
        [FieldOffset(0x210)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f8)]
    public unsafe struct C_OP_Spin {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1f8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x6a0)]
    public unsafe struct C_OP_GameLiquidSpill {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x178];
        [FieldOffset(0x3a8)] public fixed byte _[0x178];
        [FieldOffset(0x520)] public fixed byte _[0x178];
        [FieldOffset(0x698)] public fixed byte _[0x4];
        [FieldOffset(0x69c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x668)]
    public unsafe struct C_OP_InstantaneousEmitter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x178];
        [FieldOffset(0x4d8)] public fixed byte _[0x4];
        [FieldOffset(0x4dc)] public fixed byte _[0x4];
        [FieldOffset(0x4e0)] public fixed byte _[0x178];
        [FieldOffset(0x658)] public fixed byte _[0x4];
        [FieldOffset(0x65c)] public fixed byte _[0x4];
        [FieldOffset(0x660)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1e8)]
    public unsafe struct C_OP_ConstrainLineLength {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x2a0)]
    public unsafe struct C_INIT_LifespanFromVelocity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0xc];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x8];
        [FieldOffset(0x208)] public fixed byte _[0x80];
        [FieldOffset(0x288)] public fixed byte _[0x10];
        [FieldOffset(0x298)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x3358)]
    public unsafe struct CBaseTrailRenderer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x2ed8];
        [FieldOffset(0x2ed8)] public fixed byte _[0x4];
        [FieldOffset(0x2edc)] public fixed byte _[0x4];
        [FieldOffset(0x2ee0)] public fixed byte _[0x4];
        [FieldOffset(0x2ee4)] public fixed byte _[0x4];
        [FieldOffset(0x2ee8)] public fixed byte _[0x178];
        [FieldOffset(0x3060)] public fixed byte _[0x178];
        [FieldOffset(0x31d8)] public fixed byte _[0x178];
        [FieldOffset(0x3350)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x930)]
    public unsafe struct C_INIT_VelocityFromCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x6d8];
        [FieldOffset(0x8c0)] public fixed byte _[0x68];
        [FieldOffset(0x928)] public fixed byte _[0x4];
        [FieldOffset(0x92c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x388)]
    public unsafe struct C_OP_SetControlPointOrientation {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x2];
        [FieldOffset(0x1ea)] public fixed byte _[0x1];
        [FieldOffset(0x1eb)] public fixed byte _[0x1];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0xc];
        [FieldOffset(0x200)] public fixed byte _[0x10];
        [FieldOffset(0x210)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x950)]
    public unsafe struct C_OP_MovementSkinnedPositionFromCPSnapshot {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x1];
        [FieldOffset(0x1f1)] public fixed byte _[0x3];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x178];
        [FieldOffset(0x370)] public fixed byte _[0x178];
        [FieldOffset(0x4e8)] public fixed byte _[0x178];
        [FieldOffset(0x660)] public fixed byte _[0x178];
        [FieldOffset(0x7d8)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1a18)]
    public unsafe struct C_OP_MultiSegmentDisplaySnapshotGenerator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x8];
        [FieldOffset(0x1f8)] public fixed byte _[0x8];
        [FieldOffset(0x200)] public fixed byte _[0x178];
        [FieldOffset(0x378)] public fixed byte _[0x178];
        [FieldOffset(0x4f0)] public fixed byte _[0x18];
        [FieldOffset(0x508)] public fixed byte _[0x6d8];
        [FieldOffset(0xbe0)] public fixed byte _[0x6d8];
        [FieldOffset(0x12b8)] public fixed byte _[0x178];
        [FieldOffset(0x1430)] public fixed byte _[0x178];
        [FieldOffset(0x15a8)] public fixed byte _[0x178];
        [FieldOffset(0x1720)] public fixed byte _[0x178];
        [FieldOffset(0x1898)] public fixed byte _[0x8];
        [FieldOffset(0x18a0)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x690)]
    public unsafe struct C_OP_OscillateVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0xc];
        [FieldOffset(0x1ec)] public fixed byte _[0xc];
        [FieldOffset(0x1f8)] public fixed byte _[0xc];
        [FieldOffset(0x204)] public fixed byte _[0xc];
        [FieldOffset(0x210)] public fixed byte _[0x4];
        [FieldOffset(0x214)] public fixed byte _[0x1];
        [FieldOffset(0x215)] public fixed byte _[0x1];
        [FieldOffset(0x216)] public fixed byte _[0x2];
        [FieldOffset(0x218)] public fixed byte _[0x4];
        [FieldOffset(0x21c)] public fixed byte _[0x4];
        [FieldOffset(0x220)] public fixed byte _[0x4];
        [FieldOffset(0x224)] public fixed byte _[0x4];
        [FieldOffset(0x228)] public fixed byte _[0x178];
        [FieldOffset(0x3a0)] public fixed byte _[0x178];
        [FieldOffset(0x518)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xad0)]
    public unsafe struct C_OP_PositionLock {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x68];
        [FieldOffset(0x248)] public fixed byte _[0x4];
        [FieldOffset(0x24c)] public fixed byte _[0x4];
        [FieldOffset(0x250)] public fixed byte _[0x4];
        [FieldOffset(0x254)] public fixed byte _[0x4];
        [FieldOffset(0x258)] public fixed byte _[0x4];
        [FieldOffset(0x25c)] public fixed byte _[0x4];
        [FieldOffset(0x260)] public fixed byte _[0x8];
        [FieldOffset(0x268)] public fixed byte _[0x178];
        [FieldOffset(0x3e0)] public fixed byte _[0x4];
        [FieldOffset(0x3e4)] public fixed byte _[0x4];
        [FieldOffset(0x3e8)] public fixed byte _[0x8];
        [FieldOffset(0x3f0)] public fixed byte _[0x6d8];
        [FieldOffset(0xac8)] public fixed byte _[0x4];
        [FieldOffset(0xacc)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x3b8)]
    public unsafe struct C_OP_RenderVRHapticEvent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x4];
        [FieldOffset(0x234)] public fixed byte _[0x4];
        [FieldOffset(0x238)] public fixed byte _[0x8];
        [FieldOffset(0x240)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x410)]
    public unsafe struct C_OP_SetControlPointToImpactPoint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x8];
        [FieldOffset(0x1f8)] public fixed byte _[0x178];
        [FieldOffset(0x370)] public fixed byte _[0x4];
        [FieldOffset(0x374)] public fixed byte _[0x4];
        [FieldOffset(0x378)] public fixed byte _[0xc];
        [FieldOffset(0x384)] public fixed byte _[0x80];
        [FieldOffset(0x404)] public fixed byte _[0x4];
        [FieldOffset(0x408)] public fixed byte _[0x1];
        [FieldOffset(0x409)] public fixed byte _[0x1];
        [FieldOffset(0x40a)] public fixed byte _[0x6];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_OP_InterpolateRadius {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x3c];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f0)]
    public unsafe struct C_OP_ReinitializeScalarEndCap {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_OP_TurbulenceForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1f0];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0xc];
        [FieldOffset(0x20c)] public fixed byte _[0xc];
        [FieldOffset(0x218)] public fixed byte _[0xc];
        [FieldOffset(0x224)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x240)]
    public unsafe struct C_OP_RemapNamedModelElementOnceTimed {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
        [FieldOffset(0x1e8)] public fixed byte _[0x18];
        [FieldOffset(0x200)] public fixed byte _[0x18];
        [FieldOffset(0x218)] public fixed byte _[0x18];
        [FieldOffset(0x230)] public fixed byte _[0x1];
        [FieldOffset(0x231)] public fixed byte _[0x3];
        [FieldOffset(0x234)] public fixed byte _[0x4];
        [FieldOffset(0x238)] public fixed byte _[0x4];
        [FieldOffset(0x23c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_SetControlPointToPlayer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0xc];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x4];
        [FieldOffset(0x204)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x358)]
    public unsafe struct C_OP_EndCapTimedFreeze {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x6b8)]
    public unsafe struct C_OP_RenderGpuImplicit {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x4];
        [FieldOffset(0x234)] public fixed byte _[0x4];
        [FieldOffset(0x238)] public fixed byte _[0x8];
        [FieldOffset(0x240)] public fixed byte _[0x178];
        [FieldOffset(0x3b8)] public fixed byte _[0x178];
        [FieldOffset(0x530)] public fixed byte _[0x178];
        [FieldOffset(0x6a8)] public fixed byte _[0x8];
        [FieldOffset(0x6b0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x500)]
    public unsafe struct C_OP_SetRandomControlPointPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x1];
        [FieldOffset(0x1e9)] public fixed byte _[0x3];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x8];
        [FieldOffset(0x1f8)] public fixed byte _[0x178];
        [FieldOffset(0x370)] public fixed byte _[0xc];
        [FieldOffset(0x37c)] public fixed byte _[0xc];
        [FieldOffset(0x388)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x2290)]
    public unsafe struct C_OP_RenderVolumetricEmitter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x8];
        [FieldOffset(0x238)] public fixed byte _[0x4];
        [FieldOffset(0x23c)] public fixed byte _[0x4];
        [FieldOffset(0x240)] public fixed byte _[0x8];
        [FieldOffset(0x248)] public fixed byte _[0x6d8];
        [FieldOffset(0x920)] public fixed byte _[0x6d8];
        [FieldOffset(0xff8)] public fixed byte _[0x6d8];
        [FieldOffset(0x16d0)] public fixed byte _[0x178];
        [FieldOffset(0x1848)] public fixed byte _[0x178];
        [FieldOffset(0x19c0)] public fixed byte _[0x178];
        [FieldOffset(0x1b38)] public fixed byte _[0x178];
        [FieldOffset(0x1cb0)] public fixed byte _[0x178];
        [FieldOffset(0x1e28)] public fixed byte _[0x178];
        [FieldOffset(0x1fa0)] public fixed byte _[0x178];
        [FieldOffset(0x2118)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x268)]
    public unsafe struct C_OP_RemapTransformVisibilityToScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
        [FieldOffset(0x1e8)] public fixed byte _[0x68];
        [FieldOffset(0x250)] public fixed byte _[0x4];
        [FieldOffset(0x254)] public fixed byte _[0x4];
        [FieldOffset(0x258)] public fixed byte _[0x4];
        [FieldOffset(0x25c)] public fixed byte _[0x4];
        [FieldOffset(0x260)] public fixed byte _[0x4];
        [FieldOffset(0x264)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f0)]
    public unsafe struct C_OP_RemapControlPointDirectionToVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xa40)]
    public unsafe struct C_OP_ScreenSpacePositionOfTarget {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x6d8];
        [FieldOffset(0x8b8)] public fixed byte _[0x4];
        [FieldOffset(0x8bc)] public fixed byte _[0x4];
        [FieldOffset(0x8c0)] public fixed byte _[0x178];
        [FieldOffset(0xa38)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1e0)]
    public unsafe struct CParticleFunctionOperator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xbb8)]
    public unsafe struct C_OP_DragRelativeToPlane {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x178];
        [FieldOffset(0x358)] public fixed byte _[0x178];
        [FieldOffset(0x4d0)] public fixed byte _[0x8];
        [FieldOffset(0x4d8)] public fixed byte _[0x6d8];
        [FieldOffset(0xbb0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1e8)]
    public unsafe struct C_OP_SetCPtoVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_INIT_RandomYaw {
        [FieldOffset(0x0)] public fixed byte pad_0[0x208];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1e8)]
    public unsafe struct C_OP_SnapshotRigidSkinToBones {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x1];
        [FieldOffset(0x1e1)] public fixed byte _[0x3];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x930)]
    public unsafe struct C_OP_SetSingleControlPointPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x6d8];
        [FieldOffset(0x8c8)] public fixed byte _[0x68];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x668)]
    public unsafe struct C_INIT_DistanceToNeighborCull {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x8];
        [FieldOffset(0x368)] public fixed byte _[0x178];
        [FieldOffset(0x4e0)] public fixed byte _[0x8];
        [FieldOffset(0x4e8)] public fixed byte _[0x178];
        [FieldOffset(0x660)] public fixed byte _[0x4];
        [FieldOffset(0x664)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_OP_RemapCPtoScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x4];
        [FieldOffset(0x204)] public fixed byte _[0x4];
        [FieldOffset(0x208)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct CParticleFunctionRenderer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x48];
        [FieldOffset(0x228)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x590)]
    public unsafe struct CParticleSystemDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x18];
        [FieldOffset(0x40)] public fixed byte _[0x18];
        [FieldOffset(0x58)] public fixed byte _[0x18];
        [FieldOffset(0x70)] public fixed byte _[0x18];
        [FieldOffset(0x88)] public fixed byte _[0x18];
        [FieldOffset(0xa0)] public fixed byte _[0x18];
        [FieldOffset(0xb8)] public fixed byte _[0xc0];
        [FieldOffset(0x178)] public fixed byte _[0xe0];
        [FieldOffset(0x258)] public fixed byte _[0x4];
        [FieldOffset(0x25c)] public fixed byte _[0x4];
        [FieldOffset(0x260)] public fixed byte _[0x4];
        [FieldOffset(0x264)] public fixed byte _[0xc];
        [FieldOffset(0x270)] public fixed byte _[0xc];
        [FieldOffset(0x27c)] public fixed byte _[0x4];
        [FieldOffset(0x280)] public fixed byte _[0x4];
        [FieldOffset(0x284)] public fixed byte _[0x1];
        [FieldOffset(0x285)] public fixed byte _[0x3];
        [FieldOffset(0x288)] public fixed byte _[0x8];
        [FieldOffset(0x290)] public fixed byte _[0x18];
        [FieldOffset(0x2a8)] public fixed byte _[0x4];
        [FieldOffset(0x2ac)] public fixed byte _[0xc];
        [FieldOffset(0x2b8)] public fixed byte _[0x4];
        [FieldOffset(0x2bc)] public fixed byte _[0x4];
        [FieldOffset(0x2c0)] public fixed byte _[0x4];
        [FieldOffset(0x2c4)] public fixed byte _[0x4];
        [FieldOffset(0x2c8)] public fixed byte _[0x4];
        [FieldOffset(0x2cc)] public fixed byte _[0x4];
        [FieldOffset(0x2d0)] public fixed byte _[0x8];
        [FieldOffset(0x2d8)] public fixed byte _[0x8];
        [FieldOffset(0x2e0)] public fixed byte _[0x8];
        [FieldOffset(0x2e8)] public fixed byte _[0x4];
        [FieldOffset(0x2ec)] public fixed byte _[0x4];
        [FieldOffset(0x2f0)] public fixed byte _[0x8];
        [FieldOffset(0x2f8)] public fixed byte _[0x8];
        [FieldOffset(0x300)] public fixed byte _[0x8];
        [FieldOffset(0x308)] public fixed byte _[0x8];
        [FieldOffset(0x310)] public fixed byte _[0x8];
        [FieldOffset(0x318)] public fixed byte _[0x4];
        [FieldOffset(0x31c)] public fixed byte _[0x4];
        [FieldOffset(0x320)] public fixed byte _[0x4];
        [FieldOffset(0x324)] public fixed byte _[0x4];
        [FieldOffset(0x328)] public fixed byte _[0x4];
        [FieldOffset(0x32c)] public fixed byte _[0x4];
        [FieldOffset(0x330)] public fixed byte _[0x4];
        [FieldOffset(0x334)] public fixed byte _[0x4];
        [FieldOffset(0x338)] public fixed byte _[0x4];
        [FieldOffset(0x33c)] public fixed byte _[0x4];
        [FieldOffset(0x340)] public fixed byte _[0x4];
        [FieldOffset(0x344)] public fixed byte _[0x4];
        [FieldOffset(0x348)] public fixed byte _[0x4];
        [FieldOffset(0x34c)] public fixed byte _[0x4];
        [FieldOffset(0x350)] public fixed byte _[0x4];
        [FieldOffset(0x354)] public fixed byte _[0x4];
        [FieldOffset(0x358)] public fixed byte _[0x1];
        [FieldOffset(0x359)] public fixed byte _[0x1];
        [FieldOffset(0x35a)] public fixed byte _[0x1];
        [FieldOffset(0x35b)] public fixed byte _[0x1];
        [FieldOffset(0x35c)] public fixed byte _[0x4];
        [FieldOffset(0x360)] public fixed byte _[0x8];
        [FieldOffset(0x368)] public fixed byte _[0x8];
        [FieldOffset(0x370)] public fixed byte _[0x4];
        [FieldOffset(0x374)] public fixed byte _[0x4];
        [FieldOffset(0x378)] public fixed byte _[0x48];
        [FieldOffset(0x3c0)] public fixed byte _[0x1d0];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x240)]
    public unsafe struct C_OP_RemapNamedModelMeshGroupEndCap {
        [FieldOffset(0x0)] public fixed byte pad_0[0x240];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x2e0)]
    public unsafe struct C_OP_PercentageBetweenTransformsVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0xc];
        [FieldOffset(0x1f8)] public fixed byte _[0x10];
        [FieldOffset(0x208)] public fixed byte _[0x68];
        [FieldOffset(0x270)] public fixed byte _[0x68];
        [FieldOffset(0x2d8)] public fixed byte _[0x4];
        [FieldOffset(0x2dc)] public fixed byte _[0x1];
        [FieldOffset(0x2dd)] public fixed byte _[0x3];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x238)]
    public unsafe struct C_OP_RenderScreenVelocityRotate {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x4];
        [FieldOffset(0x234)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f8)]
    public unsafe struct C_OP_UpdateLightSource {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xfb0)]
    public unsafe struct C_INIT_CreateWithinBox {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x6d8];
        [FieldOffset(0x8c0)] public fixed byte _[0x6d8];
        [FieldOffset(0xf98)] public fixed byte _[0x4];
        [FieldOffset(0xf9c)] public fixed byte _[0x4];
        [FieldOffset(0xfa0)] public fixed byte _[0x8];
        [FieldOffset(0xfa8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x368)]
    public unsafe struct C_OP_ChooseRandomChildrenInGroup {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
        [FieldOffset(0x1f0)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x6f0)]
    public unsafe struct C_OP_ControlpointLight {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x490];
        [FieldOffset(0x670)] public fixed byte _[0x4];
        [FieldOffset(0x674)] public fixed byte _[0x4];
        [FieldOffset(0x678)] public fixed byte _[0x4];
        [FieldOffset(0x67c)] public fixed byte _[0x4];
        [FieldOffset(0x680)] public fixed byte _[0xc];
        [FieldOffset(0x68c)] public fixed byte _[0xc];
        [FieldOffset(0x698)] public fixed byte _[0xc];
        [FieldOffset(0x6a4)] public fixed byte _[0xc];
        [FieldOffset(0x6b0)] public fixed byte _[0x4];
        [FieldOffset(0x6b4)] public fixed byte _[0x4];
        [FieldOffset(0x6b8)] public fixed byte _[0x4];
        [FieldOffset(0x6bc)] public fixed byte _[0x4];
        [FieldOffset(0x6c0)] public fixed byte _[0x4];
        [FieldOffset(0x6c4)] public fixed byte _[0x4];
        [FieldOffset(0x6c8)] public fixed byte _[0x4];
        [FieldOffset(0x6cc)] public fixed byte _[0x4];
        [FieldOffset(0x6d0)] public fixed byte _[0x4];
        [FieldOffset(0x6d4)] public fixed byte _[0x4];
        [FieldOffset(0x6d8)] public fixed byte _[0x4];
        [FieldOffset(0x6dc)] public fixed byte _[0x4];
        [FieldOffset(0x6e0)] public fixed byte _[0x1];
        [FieldOffset(0x6e1)] public fixed byte _[0x1];
        [FieldOffset(0x6e2)] public fixed byte _[0x1];
        [FieldOffset(0x6e3)] public fixed byte _[0x1];
        [FieldOffset(0x6e4)] public fixed byte _[0x1];
        [FieldOffset(0x6e5)] public fixed byte _[0x1];
        [FieldOffset(0x6e6)] public fixed byte _[0x1];
        [FieldOffset(0x6e7)] public fixed byte _[0x1];
        [FieldOffset(0x6e8)] public fixed byte _[0x1];
        [FieldOffset(0x6e9)] public fixed byte _[0x5];
        [FieldOffset(0x6ee)] public fixed byte _[0x1];
        [FieldOffset(0x6ef)] public fixed byte _[0x1];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xa50)]
    public unsafe struct C_OP_VectorFieldSnapshot {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
        [FieldOffset(0x1f0)] public fixed byte _[0x178];
        [FieldOffset(0x368)] public fixed byte _[0x6d8];
        [FieldOffset(0xa40)] public fixed byte _[0x4];
        [FieldOffset(0xa44)] public fixed byte _[0x1];
        [FieldOffset(0xa45)] public fixed byte _[0x3];
        [FieldOffset(0xa48)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8a0)]
    public unsafe struct C_OP_CylindricalDistanceToTransform {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x178];
        [FieldOffset(0x4d8)] public fixed byte _[0x178];
        [FieldOffset(0x650)] public fixed byte _[0x178];
        [FieldOffset(0x7c8)] public fixed byte _[0x68];
        [FieldOffset(0x830)] public fixed byte _[0x68];
        [FieldOffset(0x898)] public fixed byte _[0x4];
        [FieldOffset(0x89c)] public fixed byte _[0x1];
        [FieldOffset(0x89d)] public fixed byte _[0x1];
        [FieldOffset(0x89e)] public fixed byte _[0x2];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc68)]
    public unsafe struct C_INIT_PositionPlaceOnGround {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x178];
        [FieldOffset(0x4d8)] public fixed byte _[0x6d8];
        [FieldOffset(0xbb0)] public fixed byte _[0x80];
        [FieldOffset(0xc30)] public fixed byte _[0x10];
        [FieldOffset(0xc40)] public fixed byte _[0x4];
        [FieldOffset(0xc44)] public fixed byte _[0x4];
        [FieldOffset(0xc48)] public fixed byte _[0x4];
        [FieldOffset(0xc4c)] public fixed byte _[0x1];
        [FieldOffset(0xc4d)] public fixed byte _[0x3];
        [FieldOffset(0xc50)] public fixed byte _[0x4];
        [FieldOffset(0xc54)] public fixed byte _[0x4];
        [FieldOffset(0xc58)] public fixed byte _[0x4];
        [FieldOffset(0xc5c)] public fixed byte _[0x4];
        [FieldOffset(0xc60)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f8)]
    public unsafe struct C_INIT_RandomScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x3b8)]
    public unsafe struct C_OP_RenderPostProcessing {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x178];
        [FieldOffset(0x3a8)] public fixed byte _[0x8];
        [FieldOffset(0x3b0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xa08)]
    public unsafe struct C_OP_WorldTraceConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0xc];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x80];
        [FieldOffset(0x27c)] public fixed byte _[0x1];
        [FieldOffset(0x27d)] public fixed byte _[0x1];
        [FieldOffset(0x27e)] public fixed byte _[0x2];
        [FieldOffset(0x280)] public fixed byte _[0x4];
        [FieldOffset(0x284)] public fixed byte _[0x4];
        [FieldOffset(0x288)] public fixed byte _[0x4];
        [FieldOffset(0x28c)] public fixed byte _[0x4];
        [FieldOffset(0x290)] public fixed byte _[0x4];
        [FieldOffset(0x294)] public fixed byte _[0x4];
        [FieldOffset(0x298)] public fixed byte _[0x178];
        [FieldOffset(0x410)] public fixed byte _[0x178];
        [FieldOffset(0x588)] public fixed byte _[0x178];
        [FieldOffset(0x700)] public fixed byte _[0x178];
        [FieldOffset(0x878)] public fixed byte _[0x1];
        [FieldOffset(0x879)] public fixed byte _[0x3];
        [FieldOffset(0x87c)] public fixed byte _[0x4];
        [FieldOffset(0x880)] public fixed byte _[0x1];
        [FieldOffset(0x881)] public fixed byte _[0x3];
        [FieldOffset(0x884)] public fixed byte _[0x4];
        [FieldOffset(0x888)] public fixed byte _[0x178];
        [FieldOffset(0xa00)] public fixed byte _[0x4];
        [FieldOffset(0xa04)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x6e0)]
    public unsafe struct C_OP_RenderBlobs {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x178];
        [FieldOffset(0x3a8)] public fixed byte _[0x178];
        [FieldOffset(0x520)] public fixed byte _[0x178];
        [FieldOffset(0x698)] public fixed byte _[0x4];
        [FieldOffset(0x69c)] public fixed byte _[0x4];
        [FieldOffset(0x6a0)] public fixed byte _[0x8];
        [FieldOffset(0x6a8)] public fixed byte _[0x30];
        [FieldOffset(0x6d8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_OP_OscillateScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x1];
        [FieldOffset(0x1f5)] public fixed byte _[0x3];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x4];
        [FieldOffset(0x204)] public fixed byte _[0x4];
        [FieldOffset(0x208)] public fixed byte _[0x4];
        [FieldOffset(0x20c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_OP_FadeOut {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x34];
        [FieldOffset(0x220)] public fixed byte _[0x1];
        [FieldOffset(0x221)] public fixed byte _[0xf];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1068)]
    public unsafe struct C_OP_WaterImpulseRenderer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x6d8];
        [FieldOffset(0x908)] public fixed byte _[0x178];
        [FieldOffset(0xa80)] public fixed byte _[0x178];
        [FieldOffset(0xbf8)] public fixed byte _[0x178];
        [FieldOffset(0xd70)] public fixed byte _[0x178];
        [FieldOffset(0xee8)] public fixed byte _[0x178];
        [FieldOffset(0x1060)] public fixed byte _[0x4];
        [FieldOffset(0x1064)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_INIT_RandomSequence {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x1];
        [FieldOffset(0x1f1)] public fixed byte _[0x7];
        [FieldOffset(0x1f8)] public fixed byte _[0x38];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x220)]
    public unsafe struct C_OP_RampScalarSplineSimple {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x28];
        [FieldOffset(0x210)] public fixed byte _[0x4];
        [FieldOffset(0x214)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x370)]
    public unsafe struct C_INIT_DistanceCull {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
        [FieldOffset(0x1f0)] public fixed byte _[0x178];
        [FieldOffset(0x368)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4d0)]
    public unsafe struct C_OP_CollideWithParentParticles {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x178];
        [FieldOffset(0x358)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8d0)]
    public unsafe struct C_INIT_InitFromVectorFieldSnapshot {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x6d8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1180)]
    public unsafe struct C_OP_SetVectorAttributeToVectorExpression {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
        [FieldOffset(0x1e8)] public fixed byte _[0x6d8];
        [FieldOffset(0x8c0)] public fixed byte _[0x6d8];
        [FieldOffset(0xf98)] public fixed byte _[0x178];
        [FieldOffset(0x1110)] public fixed byte _[0x4];
        [FieldOffset(0x1114)] public fixed byte _[0x4];
        [FieldOffset(0x1118)] public fixed byte _[0x68];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x220)]
    public unsafe struct C_INIT_AddVectorToVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0xc];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0xc];
        [FieldOffset(0x208)] public fixed byte _[0xc];
        [FieldOffset(0x214)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_INIT_RemapInitialVisibilityScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1ec];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x258)]
    public unsafe struct C_OP_RemapTransformOrientationToYaw {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x68];
        [FieldOffset(0x248)] public fixed byte _[0x4];
        [FieldOffset(0x24c)] public fixed byte _[0x4];
        [FieldOffset(0x250)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x268)]
    public unsafe struct C_OP_RenderStatusEffect {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x8];
        [FieldOffset(0x238)] public fixed byte _[0x8];
        [FieldOffset(0x240)] public fixed byte _[0x8];
        [FieldOffset(0x248)] public fixed byte _[0x8];
        [FieldOffset(0x250)] public fixed byte _[0x8];
        [FieldOffset(0x258)] public fixed byte _[0x8];
        [FieldOffset(0x260)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_RandomForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1f0];
        [FieldOffset(0x1f0)] public fixed byte _[0xc];
        [FieldOffset(0x1fc)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_RemapParticleCountOnScalarEndCap {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct ParticlePreviewState_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x8];
        [FieldOffset(0x30)] public fixed byte _[0x18];
        [FieldOffset(0x48)] public fixed byte _[0x4];
        [FieldOffset(0x4c)] public fixed byte _[0x4];
        [FieldOffset(0x50)] public fixed byte _[0x1];
        [FieldOffset(0x51)] public fixed byte _[0x1];
        [FieldOffset(0x52)] public fixed byte _[0x1];
        [FieldOffset(0x53)] public fixed byte _[0x1];
        [FieldOffset(0x54)] public fixed byte _[0x1];
        [FieldOffset(0x55)] public fixed byte _[0x3];
        [FieldOffset(0x58)] public fixed byte _[0xc];
        [FieldOffset(0x64)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8d0)]
    public unsafe struct C_OP_LocalAccelerationForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1f0];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x6d8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x268)]
    public unsafe struct C_OP_ModelCull {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x1];
        [FieldOffset(0x1e5)] public fixed byte _[0x1];
        [FieldOffset(0x1e6)] public fixed byte _[0x1];
        [FieldOffset(0x1e7)] public fixed byte _[0x81];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x510)]
    public unsafe struct C_OP_SetFloat {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x178];
        [FieldOffset(0x358)] public fixed byte _[0x4];
        [FieldOffset(0x35c)] public fixed byte _[0x4];
        [FieldOffset(0x360)] public fixed byte _[0x1b0];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x308)]
    public unsafe struct C_INIT_RemapTransformToVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0xc];
        [FieldOffset(0x1f8)] public fixed byte _[0xc];
        [FieldOffset(0x204)] public fixed byte _[0xc];
        [FieldOffset(0x210)] public fixed byte _[0x10];
        [FieldOffset(0x220)] public fixed byte _[0x68];
        [FieldOffset(0x288)] public fixed byte _[0x68];
        [FieldOffset(0x2f0)] public fixed byte _[0x4];
        [FieldOffset(0x2f4)] public fixed byte _[0x4];
        [FieldOffset(0x2f8)] public fixed byte _[0x4];
        [FieldOffset(0x2fc)] public fixed byte _[0x1];
        [FieldOffset(0x2fd)] public fixed byte _[0x3];
        [FieldOffset(0x300)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x500)]
    public unsafe struct C_OP_ScreenSpaceDistanceToEdge {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x178];
        [FieldOffset(0x4d8)] public fixed byte _[0x28];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x268)]
    public unsafe struct C_OP_RenderStatusEffectTf {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x8];
        [FieldOffset(0x238)] public fixed byte _[0x8];
        [FieldOffset(0x240)] public fixed byte _[0x8];
        [FieldOffset(0x248)] public fixed byte _[0x8];
        [FieldOffset(0x250)] public fixed byte _[0x8];
        [FieldOffset(0x258)] public fixed byte _[0x8];
        [FieldOffset(0x260)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_RemapDistanceToLineSegmentToScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1f8];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f0)]
    public unsafe struct C_OP_RemapVectortoCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x678)]
    public unsafe struct C_OP_SetFromCPSnapshot {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x1];
        [FieldOffset(0x1fd)] public fixed byte _[0x3];
        [FieldOffset(0x200)] public fixed byte _[0x8];
        [FieldOffset(0x208)] public fixed byte _[0x178];
        [FieldOffset(0x380)] public fixed byte _[0x178];
        [FieldOffset(0x4f8)] public fixed byte _[0x178];
        [FieldOffset(0x670)] public fixed byte _[0x1];
        [FieldOffset(0x671)] public fixed byte _[0x7];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x2a0)]
    public unsafe struct C_OP_DistanceBetweenCPsToCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x4];
        [FieldOffset(0x204)] public fixed byte _[0x4];
        [FieldOffset(0x208)] public fixed byte _[0x4];
        [FieldOffset(0x20c)] public fixed byte _[0x4];
        [FieldOffset(0x210)] public fixed byte _[0x4];
        [FieldOffset(0x214)] public fixed byte _[0x1];
        [FieldOffset(0x215)] public fixed byte _[0x83];
        [FieldOffset(0x298)] public fixed byte _[0x4];
        [FieldOffset(0x29c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_SetControlPointToHand {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0xc];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x240)]
    public unsafe struct C_OP_ConstrainDistanceToPath {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x40];
        [FieldOffset(0x230)] public fixed byte _[0x4];
        [FieldOffset(0x234)] public fixed byte _[0x4];
        [FieldOffset(0x238)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x370)]
    public unsafe struct C_OP_DistanceCull {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0xc];
        [FieldOffset(0x1f0)] public fixed byte _[0x178];
        [FieldOffset(0x368)] public fixed byte _[0x4];
        [FieldOffset(0x36c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x540)]
    public unsafe struct C_INIT_CreateAlongPath {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x180];
        [FieldOffset(0x4e0)] public fixed byte _[0x40];
        [FieldOffset(0x520)] public fixed byte _[0x4];
        [FieldOffset(0x524)] public fixed byte _[0xc];
        [FieldOffset(0x530)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1cc0)]
    public unsafe struct C_OP_GameDecalRenderer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x8];
        [FieldOffset(0x238)] public fixed byte _[0x8];
        [FieldOffset(0x240)] public fixed byte _[0x8];
        [FieldOffset(0x248)] public fixed byte _[0x8];
        [FieldOffset(0x250)] public fixed byte _[0x6d8];
        [FieldOffset(0x928)] public fixed byte _[0x6d8];
        [FieldOffset(0x1000)] public fixed byte _[0x178];
        [FieldOffset(0x1178)] public fixed byte _[0x178];
        [FieldOffset(0x12f0)] public fixed byte _[0x178];
        [FieldOffset(0x1468)] public fixed byte _[0x178];
        [FieldOffset(0x15e0)] public fixed byte _[0x6d8];
        [FieldOffset(0x1cb8)] public fixed byte _[0x1];
        [FieldOffset(0x1cb9)] public fixed byte _[0x1];
        [FieldOffset(0x1cba)] public fixed byte _[0x1];
        [FieldOffset(0x1cbb)] public fixed byte _[0x1];
        [FieldOffset(0x1cbc)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x2f0)]
    public unsafe struct C_OP_SetControlPointsToModelParticles {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x80];
        [FieldOffset(0x260)] public fixed byte _[0x80];
        [FieldOffset(0x2e0)] public fixed byte _[0x4];
        [FieldOffset(0x2e4)] public fixed byte _[0x4];
        [FieldOffset(0x2e8)] public fixed byte _[0x4];
        [FieldOffset(0x2ec)] public fixed byte _[0x1];
        [FieldOffset(0x2ed)] public fixed byte _[0x3];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x220)]
    public unsafe struct C_OP_ColorInterpolateRandom {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x1c];
        [FieldOffset(0x1fc)] public fixed byte _[0x10];
        [FieldOffset(0x20c)] public fixed byte _[0x4];
        [FieldOffset(0x210)] public fixed byte _[0x4];
        [FieldOffset(0x214)] public fixed byte _[0x4];
        [FieldOffset(0x218)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_INIT_RemapNamedModelSequenceToScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x258)]
    public unsafe struct C_OP_RenderLights {
        [FieldOffset(0x0)] public fixed byte pad_0[0x238];
        [FieldOffset(0x238)] public fixed byte _[0x4];
        [FieldOffset(0x23c)] public fixed byte _[0x4];
        [FieldOffset(0x240)] public fixed byte _[0x4];
        [FieldOffset(0x244)] public fixed byte _[0x4];
        [FieldOffset(0x248)] public fixed byte _[0x4];
        [FieldOffset(0x24c)] public fixed byte _[0x4];
        [FieldOffset(0x250)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x358)]
    public unsafe struct C_OP_DecayClampCount {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CRandomNumberGeneratorParameters {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x220)]
    public unsafe struct C_INIT_ColorLitPerParticle {
        [FieldOffset(0x0)] public fixed byte pad_0[0x200];
        [FieldOffset(0x200)] public fixed byte _[0x4];
        [FieldOffset(0x204)] public fixed byte _[0x4];
        [FieldOffset(0x208)] public fixed byte _[0x4];
        [FieldOffset(0x20c)] public fixed byte _[0x4];
        [FieldOffset(0x210)] public fixed byte _[0x4];
        [FieldOffset(0x214)] public fixed byte _[0x4];
        [FieldOffset(0x218)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x238)]
    public unsafe struct C_OP_RenderPoints {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x680)]
    public unsafe struct C_INIT_SetAttributeToScalarExpression {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
        [FieldOffset(0x1f0)] public fixed byte _[0x178];
        [FieldOffset(0x368)] public fixed byte _[0x178];
        [FieldOffset(0x4e0)] public fixed byte _[0x178];
        [FieldOffset(0x658)] public fixed byte _[0x4];
        [FieldOffset(0x65c)] public fixed byte _[0x24];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xac0)]
    public unsafe struct C_INIT_CreateOnGrid {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x178];
        [FieldOffset(0x4d8)] public fixed byte _[0x178];
        [FieldOffset(0x650)] public fixed byte _[0x178];
        [FieldOffset(0x7c8)] public fixed byte _[0x178];
        [FieldOffset(0x940)] public fixed byte _[0x178];
        [FieldOffset(0xab8)] public fixed byte _[0x4];
        [FieldOffset(0xabc)] public fixed byte _[0x1];
        [FieldOffset(0xabd)] public fixed byte _[0x1];
        [FieldOffset(0xabe)] public fixed byte _[0x2];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_RampCPLinearRandom {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0xc];
        [FieldOffset(0x1f8)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f8)]
    public unsafe struct C_OP_VelocityMatchingForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f8)]
    public unsafe struct C_INIT_RandomAlphaWindowThreshold {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1498)]
    public unsafe struct C_INIT_CreateOnModelAtHeight {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x1];
        [FieldOffset(0x1e9)] public fixed byte _[0x3];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x178];
        [FieldOffset(0x370)] public fixed byte _[0x6d8];
        [FieldOffset(0xa48)] public fixed byte _[0x6d8];
        [FieldOffset(0x1120)] public fixed byte _[0x4];
        [FieldOffset(0x1124)] public fixed byte _[0x1];
        [FieldOffset(0x1125)] public fixed byte _[0x1];
        [FieldOffset(0x1126)] public fixed byte _[0x82];
        [FieldOffset(0x11a8)] public fixed byte _[0x178];
        [FieldOffset(0x1320)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x838)]
    public unsafe struct C_OP_ModelSurfaceSnapshotGenerator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
        [FieldOffset(0x1f0)] public fixed byte _[0x60];
        [FieldOffset(0x250)] public fixed byte _[0x178];
        [FieldOffset(0x3c8)] public fixed byte _[0x178];
        [FieldOffset(0x540)] public fixed byte _[0x178];
        [FieldOffset(0x6b8)] public fixed byte _[0x178];
        [FieldOffset(0x830)] public fixed byte _[0x1];
        [FieldOffset(0x831)] public fixed byte _[0x1];
        [FieldOffset(0x832)] public fixed byte _[0x1];
        [FieldOffset(0x833)] public fixed byte _[0x5];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f8)]
    public unsafe struct C_OP_RestartAfterDuration {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_OP_RenderClothForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_RemapVisibilityScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x530)]
    public unsafe struct C_INIT_CreateSequentialPathV2 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x178];
        [FieldOffset(0x4d8)] public fixed byte _[0x1];
        [FieldOffset(0x4d9)] public fixed byte _[0x1];
        [FieldOffset(0x4da)] public fixed byte _[0x6];
        [FieldOffset(0x4e0)] public fixed byte _[0x50];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x6e0)]
    public unsafe struct VecInputMaterialVariable_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x6d8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x270)]
    public unsafe struct C_INIT_RemapInitialDirectionToTransformToVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x68];
        [FieldOffset(0x250)] public fixed byte _[0x4];
        [FieldOffset(0x254)] public fixed byte _[0x4];
        [FieldOffset(0x258)] public fixed byte _[0x4];
        [FieldOffset(0x25c)] public fixed byte _[0xc];
        [FieldOffset(0x268)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_OP_LockToSavedSequentialPathV2 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
        [FieldOffset(0x1f0)] public fixed byte _[0x40];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1e8)]
    public unsafe struct C_OP_NormalLock {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x260)]
    public unsafe struct C_INIT_RemapTransformOrientationToRotations {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x68];
        [FieldOffset(0x250)] public fixed byte _[0xc];
        [FieldOffset(0x25c)] public fixed byte _[0x1];
        [FieldOffset(0x25d)] public fixed byte _[0x3];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f0)]
    public unsafe struct C_OP_Cull {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f0)]
    public unsafe struct C_INIT_RandomYawFlip {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct SequenceWeightedList_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4e0)]
    public unsafe struct C_OP_ReadFromNeighboringParticle {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
        [FieldOffset(0x1f0)] public fixed byte _[0x178];
        [FieldOffset(0x368)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x240)]
    public unsafe struct C_OP_RenderText {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x8];
        [FieldOffset(0x238)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xbb8)]
    public unsafe struct C_OP_LerpToInitialPosition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x8];
        [FieldOffset(0x368)] public fixed byte _[0x178];
        [FieldOffset(0x4e0)] public fixed byte _[0x6d8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_INIT_RandomRotation {
        [FieldOffset(0x0)] public fixed byte pad_0[0x208];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f8)]
    public unsafe struct C_OP_LerpEndCapVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0xc];
        [FieldOffset(0x1f0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1e8)]
    public unsafe struct C_OP_VelocityDecay {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x370)]
    public unsafe struct C_OP_SetCPOrientationToPointAtCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x178];
        [FieldOffset(0x368)] public fixed byte _[0x1];
        [FieldOffset(0x369)] public fixed byte _[0x1];
        [FieldOffset(0x36a)] public fixed byte _[0x6];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_LockToPointList {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
        [FieldOffset(0x1e8)] public fixed byte _[0x18];
        [FieldOffset(0x200)] public fixed byte _[0x1];
        [FieldOffset(0x201)] public fixed byte _[0x3];
        [FieldOffset(0x204)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x840)]
    public unsafe struct C_INIT_CreateWithinCone {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x68];
        [FieldOffset(0x250)] public fixed byte _[0x178];
        [FieldOffset(0x3c8)] public fixed byte _[0x178];
        [FieldOffset(0x540)] public fixed byte _[0x178];
        [FieldOffset(0x6b8)] public fixed byte _[0x178];
        [FieldOffset(0x830)] public fixed byte _[0x4];
        [FieldOffset(0x834)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xaf0)]
    public unsafe struct C_OP_MovementPlaceOnGround {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x178];
        [FieldOffset(0x358)] public fixed byte _[0x4];
        [FieldOffset(0x35c)] public fixed byte _[0x4];
        [FieldOffset(0x360)] public fixed byte _[0x6d8];
        [FieldOffset(0xa38)] public fixed byte _[0x4];
        [FieldOffset(0xa3c)] public fixed byte _[0x4];
        [FieldOffset(0xa40)] public fixed byte _[0x80];
        [FieldOffset(0xac0)] public fixed byte _[0x4];
        [FieldOffset(0xac4)] public fixed byte _[0x4];
        [FieldOffset(0xac8)] public fixed byte _[0x4];
        [FieldOffset(0xacc)] public fixed byte _[0xc];
        [FieldOffset(0xad8)] public fixed byte _[0x4];
        [FieldOffset(0xadc)] public fixed byte _[0x1];
        [FieldOffset(0xadd)] public fixed byte _[0x3];
        [FieldOffset(0xae0)] public fixed byte _[0x1];
        [FieldOffset(0xae1)] public fixed byte _[0x3];
        [FieldOffset(0xae4)] public fixed byte _[0x4];
        [FieldOffset(0xae8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1e8)]
    public unsafe struct C_OP_SetCPOrientationToDirection {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xf98)]
    public unsafe struct C_OP_RemapCrossProductOfTwoVectorsToVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x6d8];
        [FieldOffset(0x8b8)] public fixed byte _[0x6d8];
        [FieldOffset(0xf90)] public fixed byte _[0x4];
        [FieldOffset(0xf94)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x258)]
    public unsafe struct C_OP_RemapTransformOrientationToRotations {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x68];
        [FieldOffset(0x248)] public fixed byte _[0xc];
        [FieldOffset(0x254)] public fixed byte _[0x1];
        [FieldOffset(0x255)] public fixed byte _[0x3];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_INIT_RandomRotationSpeed {
        [FieldOffset(0x0)] public fixed byte pad_0[0x208];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x658)]
    public unsafe struct C_OP_InheritFromParentParticlesV2 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x178];
        [FieldOffset(0x358)] public fixed byte _[0x8];
        [FieldOffset(0x360)] public fixed byte _[0x178];
        [FieldOffset(0x4d8)] public fixed byte _[0x1];
        [FieldOffset(0x4d9)] public fixed byte _[0x1];
        [FieldOffset(0x4da)] public fixed byte _[0x2];
        [FieldOffset(0x4dc)] public fixed byte _[0x4];
        [FieldOffset(0x4e0)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f0)]
    public unsafe struct C_INIT_RandomSecondSequence {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x500)]
    public unsafe struct C_OP_SetFloatCollection {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x178];
        [FieldOffset(0x358)] public fixed byte _[0x4];
        [FieldOffset(0x35c)] public fixed byte _[0x4];
        [FieldOffset(0x360)] public fixed byte _[0x1a0];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct PointDefinition_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x370)]
    public unsafe struct C_OP_SetControlPointPositionToRandomActiveCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x8];
        [FieldOffset(0x1f8)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f0)]
    public unsafe struct C_OP_Diffusion {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_INIT_AgeNoise {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x1];
        [FieldOffset(0x1e9)] public fixed byte _[0x3];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f0)]
    public unsafe struct C_OP_RemapVectorComponentToScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct CGeneralRandomRotation {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1580)]
    public unsafe struct C_OP_DistanceBetweenVecs {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
        [FieldOffset(0x1e8)] public fixed byte _[0x6d8];
        [FieldOffset(0x8c0)] public fixed byte _[0x6d8];
        [FieldOffset(0xf98)] public fixed byte _[0x178];
        [FieldOffset(0x1110)] public fixed byte _[0x178];
        [FieldOffset(0x1288)] public fixed byte _[0x178];
        [FieldOffset(0x1400)] public fixed byte _[0x178];
        [FieldOffset(0x1578)] public fixed byte _[0x4];
        [FieldOffset(0x157c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f0)]
    public unsafe struct C_OP_DampenToCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x240)]
    public unsafe struct C_OP_CalculateVectorAttribute {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0xc];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x14];
        [FieldOffset(0x210)] public fixed byte _[0x4];
        [FieldOffset(0x214)] public fixed byte _[0x14];
        [FieldOffset(0x228)] public fixed byte _[0x4];
        [FieldOffset(0x22c)] public fixed byte _[0x4];
        [FieldOffset(0x230)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xba0)]
    public unsafe struct C_OP_LockToBone {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x60];
        [FieldOffset(0x240)] public fixed byte _[0x68];
        [FieldOffset(0x2a8)] public fixed byte _[0x4];
        [FieldOffset(0x2ac)] public fixed byte _[0x4];
        [FieldOffset(0x2b0)] public fixed byte _[0x4];
        [FieldOffset(0x2b4)] public fixed byte _[0x4];
        [FieldOffset(0x2b8)] public fixed byte _[0x80];
        [FieldOffset(0x338)] public fixed byte _[0x1];
        [FieldOffset(0x339)] public fixed byte _[0x3];
        [FieldOffset(0x33c)] public fixed byte _[0x4];
        [FieldOffset(0x340)] public fixed byte _[0x4];
        [FieldOffset(0x344)] public fixed byte _[0x4];
        [FieldOffset(0x348)] public fixed byte _[0x8];
        [FieldOffset(0x350)] public fixed byte _[0x6d8];
        [FieldOffset(0xa28)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x240)]
    public unsafe struct C_OP_RemapNamedModelBodyPartOnceTimed {
        [FieldOffset(0x0)] public fixed byte pad_0[0x240];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xbb0)]
    public unsafe struct C_OP_ScreenSpaceRotateTowardTarget {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x6d8];
        [FieldOffset(0x8b8)] public fixed byte _[0x178];
        [FieldOffset(0xa30)] public fixed byte _[0x8];
        [FieldOffset(0xa38)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f8)]
    public unsafe struct C_OP_MovementMaintainOffset {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0xc];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1768)]
    public unsafe struct C_INIT_CreateWithinCapsuleTransform {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x178];
        [FieldOffset(0x4d8)] public fixed byte _[0x178];
        [FieldOffset(0x650)] public fixed byte _[0x68];
        [FieldOffset(0x6b8)] public fixed byte _[0x178];
        [FieldOffset(0x830)] public fixed byte _[0x178];
        [FieldOffset(0x9a8)] public fixed byte _[0x8];
        [FieldOffset(0x9b0)] public fixed byte _[0x6d8];
        [FieldOffset(0x1088)] public fixed byte _[0x6d8];
        [FieldOffset(0x1760)] public fixed byte _[0x4];
        [FieldOffset(0x1764)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xa40)]
    public unsafe struct C_OP_SetVec {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x6d8];
        [FieldOffset(0x8b8)] public fixed byte _[0x4];
        [FieldOffset(0x8bc)] public fixed byte _[0x4];
        [FieldOffset(0x8c0)] public fixed byte _[0x178];
        [FieldOffset(0xa38)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_INIT_CreateFromParentParticles {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x1];
        [FieldOffset(0x1f9)] public fixed byte _[0x7];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4e8)]
    public unsafe struct C_INIT_CheckParticleForWater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x8];
        [FieldOffset(0x368)] public fixed byte _[0x178];
        [FieldOffset(0x4e0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_INIT_RandomNamedModelBodyPart {
        [FieldOffset(0x0)] public fixed byte pad_0[0x210];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x2e88)]
    public unsafe struct C_OP_RenderOmni2Light {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x4];
        [FieldOffset(0x234)] public fixed byte _[0x4];
        [FieldOffset(0x238)] public fixed byte _[0x6d8];
        [FieldOffset(0x910)] public fixed byte _[0x8];
        [FieldOffset(0x918)] public fixed byte _[0x8];
        [FieldOffset(0x920)] public fixed byte _[0x178];
        [FieldOffset(0xa98)] public fixed byte _[0x8];
        [FieldOffset(0xaa0)] public fixed byte _[0x178];
        [FieldOffset(0xc18)] public fixed byte _[0x178];
        [FieldOffset(0xd90)] public fixed byte _[0x1];
        [FieldOffset(0xd91)] public fixed byte _[0x7];
        [FieldOffset(0xd98)] public fixed byte _[0x178];
        [FieldOffset(0xf10)] public fixed byte _[0x8];
        [FieldOffset(0xf18)] public fixed byte _[0x178];
        [FieldOffset(0x1090)] public fixed byte _[0x178];
        [FieldOffset(0x1208)] public fixed byte _[0x8];
        [FieldOffset(0x1210)] public fixed byte _[0x6d8];
        [FieldOffset(0x18e8)] public fixed byte _[0x6d8];
        [FieldOffset(0x1fc0)] public fixed byte _[0x178];
        [FieldOffset(0x2138)] public fixed byte _[0x178];
        [FieldOffset(0x22b0)] public fixed byte _[0x178];
        [FieldOffset(0x2428)] public fixed byte _[0x178];
        [FieldOffset(0x25a0)] public fixed byte _[0x178];
        [FieldOffset(0x2718)] public fixed byte _[0x178];
        [FieldOffset(0x2890)] public fixed byte _[0x178];
        [FieldOffset(0x2a08)] public fixed byte _[0x178];
        [FieldOffset(0x2b80)] public fixed byte _[0x178];
        [FieldOffset(0x2cf8)] public fixed byte _[0x178];
        [FieldOffset(0x2e70)] public fixed byte _[0x8];
        [FieldOffset(0x2e78)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4e0)]
    public unsafe struct C_OP_ConnectParentParticleToNearest {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
        [FieldOffset(0x1f0)] public fixed byte _[0x178];
        [FieldOffset(0x368)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x6e8)]
    public unsafe struct CPAssignment_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x6d8];
        [FieldOffset(0x6e0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x238)]
    public unsafe struct C_INIT_RemapParticleCountToNamedModelBodyPartScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x238];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x398)]
    public unsafe struct C_INIT_InitSkinnedPositionFromCPSnapshot {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x1];
        [FieldOffset(0x1f9)] public fixed byte _[0x1];
        [FieldOffset(0x1fa)] public fixed byte _[0x2];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x4];
        [FieldOffset(0x204)] public fixed byte _[0x4];
        [FieldOffset(0x208)] public fixed byte _[0x178];
        [FieldOffset(0x380)] public fixed byte _[0x4];
        [FieldOffset(0x384)] public fixed byte _[0x4];
        [FieldOffset(0x388)] public fixed byte _[0x4];
        [FieldOffset(0x38c)] public fixed byte _[0x4];
        [FieldOffset(0x390)] public fixed byte _[0x4];
        [FieldOffset(0x394)] public fixed byte _[0x1];
        [FieldOffset(0x395)] public fixed byte _[0x1];
        [FieldOffset(0x396)] public fixed byte _[0x2];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f0)]
    public unsafe struct C_OP_LagCompensation {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4d0)]
    public unsafe struct C_OP_CollideWithSelf {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x178];
        [FieldOffset(0x358)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f8)]
    public unsafe struct C_OP_Noise {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f8)]
    public unsafe struct C_OP_FadeAndKillForTracers {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x648)]
    public unsafe struct C_OP_ColorAdjustHSL {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x178];
        [FieldOffset(0x358)] public fixed byte _[0x178];
        [FieldOffset(0x4d0)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x470)]
    public unsafe struct CParticleMassCalculationParameters {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x178];
        [FieldOffset(0x180)] public fixed byte _[0x178];
        [FieldOffset(0x2f8)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_SequenceFromModel {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1e8)]
    public unsafe struct C_OP_AlphaDecay {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1e8)]
    public unsafe struct C_OP_RemapDensityGradientToVectorAttribute {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8d0)]
    public unsafe struct C_INIT_InitVec {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x6d8];
        [FieldOffset(0x8c0)] public fixed byte _[0x4];
        [FieldOffset(0x8c4)] public fixed byte _[0x4];
        [FieldOffset(0x8c8)] public fixed byte _[0x1];
        [FieldOffset(0x8c9)] public fixed byte _[0x7];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xad8)]
    public unsafe struct C_INIT_SetHitboxToModel {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x6d8];
        [FieldOffset(0x8d0)] public fixed byte _[0xc];
        [FieldOffset(0x8dc)] public fixed byte _[0x1];
        [FieldOffset(0x8dd)] public fixed byte _[0x1];
        [FieldOffset(0x8de)] public fixed byte _[0x82];
        [FieldOffset(0x960)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4e0)]
    public unsafe struct C_OP_MovementMoveAlongSkinnedCPSnapshot {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x1];
        [FieldOffset(0x1e9)] public fixed byte _[0x7];
        [FieldOffset(0x1f0)] public fixed byte _[0x178];
        [FieldOffset(0x368)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x368)]
    public unsafe struct C_OP_LerpScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x4];
        [FieldOffset(0x364)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x2a0)]
    public unsafe struct C_INIT_InitialRepulsionVelocity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x80];
        [FieldOffset(0x268)] public fixed byte _[0x4];
        [FieldOffset(0x26c)] public fixed byte _[0xc];
        [FieldOffset(0x278)] public fixed byte _[0xc];
        [FieldOffset(0x284)] public fixed byte _[0x4];
        [FieldOffset(0x288)] public fixed byte _[0x1];
        [FieldOffset(0x289)] public fixed byte _[0x1];
        [FieldOffset(0x28a)] public fixed byte _[0x2];
        [FieldOffset(0x28c)] public fixed byte _[0x4];
        [FieldOffset(0x290)] public fixed byte _[0x1];
        [FieldOffset(0x291)] public fixed byte _[0x3];
        [FieldOffset(0x294)] public fixed byte _[0x4];
        [FieldOffset(0x298)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4d8)]
    public unsafe struct C_OP_ClampScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_SetControlPointToHMD {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0xc];
        [FieldOffset(0x1f8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_DifferencePreviousParticle {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x1];
        [FieldOffset(0x1fd)] public fixed byte _[0x3];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1298)]
    public unsafe struct C_OP_SetControlPointFieldFromVectorExpression {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
        [FieldOffset(0x1f0)] public fixed byte _[0x6d8];
        [FieldOffset(0x8c8)] public fixed byte _[0x6d8];
        [FieldOffset(0xfa0)] public fixed byte _[0x178];
        [FieldOffset(0x1118)] public fixed byte _[0x178];
        [FieldOffset(0x1290)] public fixed byte _[0x4];
        [FieldOffset(0x1294)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x2d0)]
    public unsafe struct C_OP_PercentageBetweenTransforms {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x8];
        [FieldOffset(0x1f8)] public fixed byte _[0x68];
        [FieldOffset(0x260)] public fixed byte _[0x68];
        [FieldOffset(0x2c8)] public fixed byte _[0x4];
        [FieldOffset(0x2cc)] public fixed byte _[0x1];
        [FieldOffset(0x2cd)] public fixed byte _[0x3];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x370)]
    public unsafe struct C_INIT_PlaneCull {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
        [FieldOffset(0x1f0)] public fixed byte _[0x178];
        [FieldOffset(0x368)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x240)]
    public unsafe struct C_OP_RemapNamedModelSequenceEndCap {
        [FieldOffset(0x0)] public fixed byte pad_0[0x240];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x500)]
    public unsafe struct C_INIT_InitFromCPSnapshot {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
        [FieldOffset(0x1f0)] public fixed byte _[0x8];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x4];
        [FieldOffset(0x204)] public fixed byte _[0x1];
        [FieldOffset(0x205)] public fixed byte _[0x3];
        [FieldOffset(0x208)] public fixed byte _[0x178];
        [FieldOffset(0x380)] public fixed byte _[0x178];
        [FieldOffset(0x4f8)] public fixed byte _[0x4];
        [FieldOffset(0x4fc)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x15a8)]
    public unsafe struct C_OP_RenderCables {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x178];
        [FieldOffset(0x3a8)] public fixed byte _[0x178];
        [FieldOffset(0x520)] public fixed byte _[0x6d8];
        [FieldOffset(0xbf8)] public fixed byte _[0x8];
        [FieldOffset(0xc00)] public fixed byte _[0x8];
        [FieldOffset(0xc08)] public fixed byte _[0x8];
        [FieldOffset(0xc10)] public fixed byte _[0x178];
        [FieldOffset(0xd88)] public fixed byte _[0x178];
        [FieldOffset(0xf00)] public fixed byte _[0x178];
        [FieldOffset(0x1078)] public fixed byte _[0x178];
        [FieldOffset(0x11f0)] public fixed byte _[0x178];
        [FieldOffset(0x1368)] public fixed byte _[0x178];
        [FieldOffset(0x14e0)] public fixed byte _[0x4];
        [FieldOffset(0x14e4)] public fixed byte _[0x4];
        [FieldOffset(0x14e8)] public fixed byte _[0x4];
        [FieldOffset(0x14ec)] public fixed byte _[0x4];
        [FieldOffset(0x14f0)] public fixed byte _[0x4];
        [FieldOffset(0x14f4)] public fixed byte _[0x4];
        [FieldOffset(0x14f8)] public fixed byte _[0x4];
        [FieldOffset(0x14fc)] public fixed byte _[0x1];
        [FieldOffset(0x14fd)] public fixed byte _[0x3];
        [FieldOffset(0x1500)] public fixed byte _[0x68];
        [FieldOffset(0x1568)] public fixed byte _[0x20];
        [FieldOffset(0x1588)] public fixed byte _[0x20];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f0)]
    public unsafe struct C_INIT_InheritVelocity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x380)]
    public unsafe struct C_OP_SetControlPointToWaterSurface {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x8];
        [FieldOffset(0x200)] public fixed byte _[0x178];
        [FieldOffset(0x378)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1010)]
    public unsafe struct C_INIT_PositionOffset {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x6d8];
        [FieldOffset(0x8c0)] public fixed byte _[0x6d8];
        [FieldOffset(0xf98)] public fixed byte _[0x68];
        [FieldOffset(0x1000)] public fixed byte _[0x1];
        [FieldOffset(0x1001)] public fixed byte _[0x3];
        [FieldOffset(0x1004)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x258)]
    public unsafe struct C_INIT_NormalAlignToCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x68];
        [FieldOffset(0x250)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1e8)]
    public unsafe struct C_OP_ShapeMatchingConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x370)]
    public unsafe struct C_OP_SetChildControlPoints {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
        [FieldOffset(0x1f0)] public fixed byte _[0x178];
        [FieldOffset(0x368)] public fixed byte _[0x1];
        [FieldOffset(0x369)] public fixed byte _[0x3];
        [FieldOffset(0x36c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1588)]
    public unsafe struct C_OP_ChladniWave {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x178];
        [FieldOffset(0x4d8)] public fixed byte _[0x178];
        [FieldOffset(0x650)] public fixed byte _[0x178];
        [FieldOffset(0x7c8)] public fixed byte _[0x6d8];
        [FieldOffset(0xea0)] public fixed byte _[0x6d8];
        [FieldOffset(0x1578)] public fixed byte _[0x4];
        [FieldOffset(0x157c)] public fixed byte _[0x4];
        [FieldOffset(0x1580)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_RemapDirectionToCPToVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0xc];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x220)]
    public unsafe struct C_OP_DriveCPFromGlobalSoundFloat {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x8];
        [FieldOffset(0x208)] public fixed byte _[0x8];
        [FieldOffset(0x210)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xa40)]
    public unsafe struct C_INIT_ScreenSpacePositionOfTarget {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x6d8];
        [FieldOffset(0x8c0)] public fixed byte _[0x4];
        [FieldOffset(0x8c4)] public fixed byte _[0x4];
        [FieldOffset(0x8c8)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x288)]
    public unsafe struct C_OP_RtEnvCull {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0xc];
        [FieldOffset(0x1ec)] public fixed byte _[0xc];
        [FieldOffset(0x1f8)] public fixed byte _[0x1];
        [FieldOffset(0x1f9)] public fixed byte _[0x1];
        [FieldOffset(0x1fa)] public fixed byte _[0x82];
        [FieldOffset(0x27c)] public fixed byte _[0x4];
        [FieldOffset(0x280)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x11b0)]
    public unsafe struct C_OP_PinParticleToCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
        [FieldOffset(0x1e8)] public fixed byte _[0x6d8];
        [FieldOffset(0x8c0)] public fixed byte _[0x4];
        [FieldOffset(0x8c4)] public fixed byte _[0x4];
        [FieldOffset(0x8c8)] public fixed byte _[0x178];
        [FieldOffset(0xa40)] public fixed byte _[0x8];
        [FieldOffset(0xa48)] public fixed byte _[0x178];
        [FieldOffset(0xbc0)] public fixed byte _[0x178];
        [FieldOffset(0xd38)] public fixed byte _[0x178];
        [FieldOffset(0xeb0)] public fixed byte _[0x4];
        [FieldOffset(0xeb4)] public fixed byte _[0x4];
        [FieldOffset(0xeb8)] public fixed byte _[0x178];
        [FieldOffset(0x1030)] public fixed byte _[0x178];
        [FieldOffset(0x11a8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_OP_RemapCPtoVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0xc];
        [FieldOffset(0x1f8)] public fixed byte _[0xc];
        [FieldOffset(0x204)] public fixed byte _[0xc];
        [FieldOffset(0x210)] public fixed byte _[0xc];
        [FieldOffset(0x21c)] public fixed byte _[0x4];
        [FieldOffset(0x220)] public fixed byte _[0x4];
        [FieldOffset(0x224)] public fixed byte _[0x4];
        [FieldOffset(0x228)] public fixed byte _[0x4];
        [FieldOffset(0x22c)] public fixed byte _[0x1];
        [FieldOffset(0x22d)] public fixed byte _[0x3];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x660)]
    public unsafe struct C_INIT_CreateParticleImpulse {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x178];
        [FieldOffset(0x4d8)] public fixed byte _[0x8];
        [FieldOffset(0x4e0)] public fixed byte _[0x178];
        [FieldOffset(0x658)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_DensityForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1f0];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x840)]
    public unsafe struct C_INIT_CreateInEpitrochoid {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x68];
        [FieldOffset(0x258)] public fixed byte _[0x178];
        [FieldOffset(0x3d0)] public fixed byte _[0x178];
        [FieldOffset(0x548)] public fixed byte _[0x178];
        [FieldOffset(0x6c0)] public fixed byte _[0x178];
        [FieldOffset(0x838)] public fixed byte _[0x1];
        [FieldOffset(0x839)] public fixed byte _[0x1];
        [FieldOffset(0x83a)] public fixed byte _[0x6];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_ConstrainDistanceToUserSpecifiedPath {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_OP_SetControlPointPositions {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x1];
        [FieldOffset(0x1e9)] public fixed byte _[0x1];
        [FieldOffset(0x1ea)] public fixed byte _[0x2];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0xc];
        [FieldOffset(0x208)] public fixed byte _[0xc];
        [FieldOffset(0x214)] public fixed byte _[0xc];
        [FieldOffset(0x220)] public fixed byte _[0xc];
        [FieldOffset(0x22c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1118)]
    public unsafe struct C_OP_SetFloatAttributeToVectorExpression {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
        [FieldOffset(0x1e8)] public fixed byte _[0x6d8];
        [FieldOffset(0x8c0)] public fixed byte _[0x6d8];
        [FieldOffset(0xf98)] public fixed byte _[0x178];
        [FieldOffset(0x1110)] public fixed byte _[0x4];
        [FieldOffset(0x1114)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xaa0)]
    public unsafe struct C_OP_MovementRotateParticleAroundAxis {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x6d8];
        [FieldOffset(0x8b8)] public fixed byte _[0x178];
        [FieldOffset(0xa30)] public fixed byte _[0x68];
        [FieldOffset(0xa98)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_OP_IntraParticleForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1f0];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x4];
        [FieldOffset(0x204)] public fixed byte _[0x4];
        [FieldOffset(0x208)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4e8)]
    public unsafe struct C_INIT_InitFloat {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x4];
        [FieldOffset(0x364)] public fixed byte _[0x4];
        [FieldOffset(0x368)] public fixed byte _[0x180];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x13f0)]
    public unsafe struct C_INIT_CreateOnModel {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x60];
        [FieldOffset(0x248)] public fixed byte _[0x68];
        [FieldOffset(0x2b0)] public fixed byte _[0x4];
        [FieldOffset(0x2b4)] public fixed byte _[0x1];
        [FieldOffset(0x2b5)] public fixed byte _[0x3];
        [FieldOffset(0x2b8)] public fixed byte _[0x178];
        [FieldOffset(0x430)] public fixed byte _[0x8];
        [FieldOffset(0x438)] public fixed byte _[0x6d8];
        [FieldOffset(0xb10)] public fixed byte _[0x4];
        [FieldOffset(0xb14)] public fixed byte _[0x4];
        [FieldOffset(0xb18)] public fixed byte _[0x6d8];
        [FieldOffset(0x11f0)] public fixed byte _[0x80];
        [FieldOffset(0x1270)] public fixed byte _[0x1];
        [FieldOffset(0x1271)] public fixed byte _[0x1];
        [FieldOffset(0x1272)] public fixed byte _[0x6];
        [FieldOffset(0x1278)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f0)]
    public unsafe struct C_OP_InheritFromPeerSystem {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xa48)]
    public unsafe struct C_OP_PerParticleForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1f0];
        [FieldOffset(0x1f0)] public fixed byte _[0x178];
        [FieldOffset(0x368)] public fixed byte _[0x6d8];
        [FieldOffset(0xa40)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_INIT_RandomNamedModelMeshGroup {
        [FieldOffset(0x0)] public fixed byte pad_0[0x210];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xf58)]
    public unsafe struct C_OP_RenderProjected {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x1];
        [FieldOffset(0x231)] public fixed byte _[0x1];
        [FieldOffset(0x232)] public fixed byte _[0x1];
        [FieldOffset(0x233)] public fixed byte _[0x1];
        [FieldOffset(0x234)] public fixed byte _[0x4];
        [FieldOffset(0x238)] public fixed byte _[0x4];
        [FieldOffset(0x23c)] public fixed byte _[0x4];
        [FieldOffset(0x240)] public fixed byte _[0x18];
        [FieldOffset(0x258)] public fixed byte _[0x178];
        [FieldOffset(0x3d0)] public fixed byte _[0x4];
        [FieldOffset(0x3d4)] public fixed byte _[0x4];
        [FieldOffset(0x3d8)] public fixed byte _[0x18];
        [FieldOffset(0x3f0)] public fixed byte _[0x178];
        [FieldOffset(0x568)] public fixed byte _[0x178];
        [FieldOffset(0x6e0)] public fixed byte _[0x178];
        [FieldOffset(0x858)] public fixed byte _[0x8];
        [FieldOffset(0x860)] public fixed byte _[0x6d8];
        [FieldOffset(0xf38)] public fixed byte _[0x20];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4d0)]
    public unsafe struct C_OP_MaxVelocity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x178];
        [FieldOffset(0x358)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f8)]
    public unsafe struct C_INIT_VelocityFromNormal {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x670)]
    public unsafe struct C_OP_MaintainEmitter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x8];
        [FieldOffset(0x368)] public fixed byte _[0x178];
        [FieldOffset(0x4e0)] public fixed byte _[0x4];
        [FieldOffset(0x4e4)] public fixed byte _[0x4];
        [FieldOffset(0x4e8)] public fixed byte _[0x8];
        [FieldOffset(0x4f0)] public fixed byte _[0x1];
        [FieldOffset(0x4f1)] public fixed byte _[0x7];
        [FieldOffset(0x4f8)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f8)]
    public unsafe struct C_INIT_PositionOffsetToCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x260)]
    public unsafe struct C_INIT_RemapInitialTransformDirectionToRotation {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x68];
        [FieldOffset(0x250)] public fixed byte _[0x4];
        [FieldOffset(0x254)] public fixed byte _[0x4];
        [FieldOffset(0x258)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_FadeAndKill {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_ColorInterpolate {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x10];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_OP_RampScalarSpline {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x28];
        [FieldOffset(0x220)] public fixed byte _[0x4];
        [FieldOffset(0x224)] public fixed byte _[0x1];
        [FieldOffset(0x225)] public fixed byte _[0xb];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x240)]
    public unsafe struct C_OP_RemapNamedModelSequenceOnceTimed {
        [FieldOffset(0x0)] public fixed byte pad_0[0x240];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f0)]
    public unsafe struct C_OP_SetControlPointFromObjectScale {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x690)]
    public unsafe struct C_OP_MaintainSequentialPath {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x178];
        [FieldOffset(0x358)] public fixed byte _[0x178];
        [FieldOffset(0x4d0)] public fixed byte _[0x178];
        [FieldOffset(0x648)] public fixed byte _[0x4];
        [FieldOffset(0x64c)] public fixed byte _[0x1];
        [FieldOffset(0x64d)] public fixed byte _[0x3];
        [FieldOffset(0x650)] public fixed byte _[0x40];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x240)]
    public unsafe struct C_OP_RemapNamedModelBodyPartEndCap {
        [FieldOffset(0x0)] public fixed byte pad_0[0x240];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x368)]
    public unsafe struct C_OP_StopAfterCPDuration {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x1];
        [FieldOffset(0x361)] public fixed byte _[0x7];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f8)]
    public unsafe struct CGeneralSpin {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x8];
        [FieldOffset(0x1ec)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_OP_LockToSavedSequentialPath {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x40];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_INIT_RemapNamedModelElementToScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
        [FieldOffset(0x1f0)] public fixed byte _[0x18];
        [FieldOffset(0x208)] public fixed byte _[0x18];
        [FieldOffset(0x220)] public fixed byte _[0x4];
        [FieldOffset(0x224)] public fixed byte _[0x4];
        [FieldOffset(0x228)] public fixed byte _[0x4];
        [FieldOffset(0x22c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xf98)]
    public unsafe struct C_OP_ClampVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
        [FieldOffset(0x1e8)] public fixed byte _[0x6d8];
        [FieldOffset(0x8c0)] public fixed byte _[0x6d8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x260)]
    public unsafe struct C_OP_RenderStatusEffectCitadel {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x8];
        [FieldOffset(0x238)] public fixed byte _[0x8];
        [FieldOffset(0x240)] public fixed byte _[0x8];
        [FieldOffset(0x248)] public fixed byte _[0x8];
        [FieldOffset(0x250)] public fixed byte _[0x8];
        [FieldOffset(0x258)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct IParticleSystemDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_WindForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1f0];
        [FieldOffset(0x1f0)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xb08)]
    public unsafe struct C_OP_SetVariable {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x50];
        [FieldOffset(0x238)] public fixed byte _[0x68];
        [FieldOffset(0x2a0)] public fixed byte _[0xc];
        [FieldOffset(0x2ac)] public fixed byte _[0xc];
        [FieldOffset(0x2b8)] public fixed byte _[0x6d8];
        [FieldOffset(0x990)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1828)]
    public unsafe struct C_OP_RenderStandardLight {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x4];
        [FieldOffset(0x234)] public fixed byte _[0x4];
        [FieldOffset(0x238)] public fixed byte _[0x6d8];
        [FieldOffset(0x910)] public fixed byte _[0x8];
        [FieldOffset(0x918)] public fixed byte _[0x8];
        [FieldOffset(0x920)] public fixed byte _[0x178];
        [FieldOffset(0xa98)] public fixed byte _[0x178];
        [FieldOffset(0xc10)] public fixed byte _[0x1];
        [FieldOffset(0xc11)] public fixed byte _[0x7];
        [FieldOffset(0xc18)] public fixed byte _[0x178];
        [FieldOffset(0xd90)] public fixed byte _[0x178];
        [FieldOffset(0xf08)] public fixed byte _[0x178];
        [FieldOffset(0x1080)] public fixed byte _[0x178];
        [FieldOffset(0x11f8)] public fixed byte _[0x8];
        [FieldOffset(0x1200)] public fixed byte _[0x178];
        [FieldOffset(0x1378)] public fixed byte _[0x178];
        [FieldOffset(0x14f0)] public fixed byte _[0x178];
        [FieldOffset(0x1668)] public fixed byte _[0x1];
        [FieldOffset(0x1669)] public fixed byte _[0x7];
        [FieldOffset(0x1670)] public fixed byte _[0x8];
        [FieldOffset(0x1678)] public fixed byte _[0x4];
        [FieldOffset(0x167c)] public fixed byte _[0x4];
        [FieldOffset(0x1680)] public fixed byte _[0x178];
        [FieldOffset(0x17f8)] public fixed byte _[0x4];
        [FieldOffset(0x17fc)] public fixed byte _[0x4];
        [FieldOffset(0x1800)] public fixed byte _[0x1];
        [FieldOffset(0x1801)] public fixed byte _[0x3];
        [FieldOffset(0x1804)] public fixed byte _[0x4];
        [FieldOffset(0x1808)] public fixed byte _[0x4];
        [FieldOffset(0x180c)] public fixed byte _[0x4];
        [FieldOffset(0x1810)] public fixed byte _[0x4];
        [FieldOffset(0x1814)] public fixed byte _[0x4];
        [FieldOffset(0x1818)] public fixed byte _[0x4];
        [FieldOffset(0x181c)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xfa0)]
    public unsafe struct C_OP_DistanceToTransform {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x178];
        [FieldOffset(0x4d8)] public fixed byte _[0x178];
        [FieldOffset(0x650)] public fixed byte _[0x178];
        [FieldOffset(0x7c8)] public fixed byte _[0x68];
        [FieldOffset(0x830)] public fixed byte _[0x1];
        [FieldOffset(0x831)] public fixed byte _[0x83];
        [FieldOffset(0x8b4)] public fixed byte _[0x4];
        [FieldOffset(0x8b8)] public fixed byte _[0x4];
        [FieldOffset(0x8bc)] public fixed byte _[0x4];
        [FieldOffset(0x8c0)] public fixed byte _[0x4];
        [FieldOffset(0x8c4)] public fixed byte _[0x1];
        [FieldOffset(0x8c5)] public fixed byte _[0x3];
        [FieldOffset(0x8c8)] public fixed byte _[0x6d8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f0)]
    public unsafe struct C_OP_RemapControlPointOrientationToRotation {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_SetControlPointToCenter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0xc];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4f0)]
    public unsafe struct C_OP_RemapAverageScalarValuetoCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
        [FieldOffset(0x1f0)] public fixed byte _[0x178];
        [FieldOffset(0x368)] public fixed byte _[0x4];
        [FieldOffset(0x36c)] public fixed byte _[0x4];
        [FieldOffset(0x370)] public fixed byte _[0x8];
        [FieldOffset(0x378)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_RemapDotProductToScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x4];
        [FieldOffset(0x204)] public fixed byte _[0x1];
        [FieldOffset(0x205)] public fixed byte _[0x3];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_OP_RemapCPtoCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x4];
        [FieldOffset(0x204)] public fixed byte _[0x4];
        [FieldOffset(0x208)] public fixed byte _[0x4];
        [FieldOffset(0x20c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xa40)]
    public unsafe struct C_OP_SetControlPointRotation {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x6d8];
        [FieldOffset(0x8c0)] public fixed byte _[0x178];
        [FieldOffset(0xa38)] public fixed byte _[0x4];
        [FieldOffset(0xa3c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x2048)]
    public unsafe struct C_OP_CurlNoiseForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1f0];
        [FieldOffset(0x1f0)] public fixed byte _[0x8];
        [FieldOffset(0x1f8)] public fixed byte _[0x6d8];
        [FieldOffset(0x8d0)] public fixed byte _[0x6d8];
        [FieldOffset(0xfa8)] public fixed byte _[0x6d8];
        [FieldOffset(0x1680)] public fixed byte _[0x6d8];
        [FieldOffset(0x1d58)] public fixed byte _[0x178];
        [FieldOffset(0x1ed0)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f8)]
    public unsafe struct C_INIT_Orient2DRelToCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x360)]
    public unsafe struct C_OP_SetSimulationRate {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f0)]
    public unsafe struct C_OP_FadeIn {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x258)]
    public unsafe struct C_OP_RenderScreenShake {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x4];
        [FieldOffset(0x234)] public fixed byte _[0x4];
        [FieldOffset(0x238)] public fixed byte _[0x4];
        [FieldOffset(0x23c)] public fixed byte _[0x4];
        [FieldOffset(0x240)] public fixed byte _[0x4];
        [FieldOffset(0x244)] public fixed byte _[0x4];
        [FieldOffset(0x248)] public fixed byte _[0x4];
        [FieldOffset(0x24c)] public fixed byte _[0x4];
        [FieldOffset(0x250)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_RemapBoundingVolumetoCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_HSVShiftToCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x14];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xf90)]
    public unsafe struct C_OP_RemapVectorToRotations {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x6d8];
        [FieldOffset(0x8b8)] public fixed byte _[0x6d8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f8)]
    public unsafe struct C_INIT_GlobalScale {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x1];
        [FieldOffset(0x1f5)] public fixed byte _[0x1];
        [FieldOffset(0x1f6)] public fixed byte _[0x2];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f0)]
    public unsafe struct C_INIT_RadiusFromCPObject {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x278)]
    public unsafe struct C_INIT_InitialVelocityFromHitbox {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x80];
        [FieldOffset(0x274)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_LerpVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0xc];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f8)]
    public unsafe struct C_OP_SetControlPointFieldToWater {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc18)]
    public unsafe struct TextureGroup_t {
        [FieldOffset(0x0)] public fixed byte _[0x1];
        [FieldOffset(0x1)] public fixed byte _[0x7];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
        [FieldOffset(0x30)] public fixed byte _[0x8];
        [FieldOffset(0x38)] public fixed byte _[0x178];
        [FieldOffset(0x1b0)] public fixed byte _[0xa68];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_OP_TimeVaryingForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1f0];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0xc];
        [FieldOffset(0x200)] public fixed byte _[0x4];
        [FieldOffset(0x204)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x290)]
    public unsafe struct C_OP_SetCPOrientationToGroundNormal {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x80];
        [FieldOffset(0x270)] public fixed byte _[0x4];
        [FieldOffset(0x274)] public fixed byte _[0x4];
        [FieldOffset(0x278)] public fixed byte _[0x10];
        [FieldOffset(0x288)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f8)]
    public unsafe struct C_OP_SnapshotSkinToBones {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x1];
        [FieldOffset(0x1e1)] public fixed byte _[0x3];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1cd8)]
    public unsafe struct C_INIT_CreateWithinSphereTransform {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x178];
        [FieldOffset(0x4d8)] public fixed byte _[0x6d8];
        [FieldOffset(0xbb0)] public fixed byte _[0x10];
        [FieldOffset(0xbc0)] public fixed byte _[0x68];
        [FieldOffset(0xc28)] public fixed byte _[0x178];
        [FieldOffset(0xda0)] public fixed byte _[0x178];
        [FieldOffset(0xf18)] public fixed byte _[0x4];
        [FieldOffset(0xf1c)] public fixed byte _[0x4];
        [FieldOffset(0xf20)] public fixed byte _[0x6d8];
        [FieldOffset(0x15f8)] public fixed byte _[0x6d8];
        [FieldOffset(0x1cd0)] public fixed byte _[0x4];
        [FieldOffset(0x1cd4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1e8)]
    public unsafe struct C_OP_RadiusDecay {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_INIT_RemapNamedModelBodyPartToScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_INIT_RemapScalarToVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0xc];
        [FieldOffset(0x204)] public fixed byte _[0xc];
        [FieldOffset(0x210)] public fixed byte _[0x4];
        [FieldOffset(0x214)] public fixed byte _[0x4];
        [FieldOffset(0x218)] public fixed byte _[0x4];
        [FieldOffset(0x21c)] public fixed byte _[0x4];
        [FieldOffset(0x220)] public fixed byte _[0x4];
        [FieldOffset(0x224)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_INIT_InitialSequenceFromModel {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x4];
        [FieldOffset(0x204)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x228)]
    public unsafe struct C_OP_NoiseEmitter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x1];
        [FieldOffset(0x201)] public fixed byte _[0x3];
        [FieldOffset(0x204)] public fixed byte _[0x4];
        [FieldOffset(0x208)] public fixed byte _[0x4];
        [FieldOffset(0x20c)] public fixed byte _[0x4];
        [FieldOffset(0x210)] public fixed byte _[0x4];
        [FieldOffset(0x214)] public fixed byte _[0x4];
        [FieldOffset(0x218)] public fixed byte _[0xc];
        [FieldOffset(0x224)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1e8)]
    public unsafe struct CParticleFunctionInitializer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x658)]
    public unsafe struct C_OP_SelectivelyEnableChildren {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x178];
        [FieldOffset(0x4d8)] public fixed byte _[0x178];
        [FieldOffset(0x650)] public fixed byte _[0x1];
        [FieldOffset(0x651)] public fixed byte _[0x7];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct ModelReference_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4f8)]
    public unsafe struct C_OP_PlanarConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0xc];
        [FieldOffset(0x1ec)] public fixed byte _[0xc];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x1];
        [FieldOffset(0x1fd)] public fixed byte _[0x3];
        [FieldOffset(0x200)] public fixed byte _[0x178];
        [FieldOffset(0x378)] public fixed byte _[0x178];
        [FieldOffset(0x4f0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x370)]
    public unsafe struct C_INIT_CreateFromCPs {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x8];
        [FieldOffset(0x1f8)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f8)]
    public unsafe struct C_OP_LockPoints {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x838)]
    public unsafe struct C_INIT_CreateSpiralSphere {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x68];
        [FieldOffset(0x250)] public fixed byte _[0x178];
        [FieldOffset(0x3c8)] public fixed byte _[0x178];
        [FieldOffset(0x540)] public fixed byte _[0x178];
        [FieldOffset(0x6b8)] public fixed byte _[0x178];
        [FieldOffset(0x830)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x370)]
    public unsafe struct C_OP_CPVelocityForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1f0];
        [FieldOffset(0x1f0)] public fixed byte _[0x8];
        [FieldOffset(0x1f8)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x240)]
    public unsafe struct C_OP_RemapNamedModelElementEndCap {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
        [FieldOffset(0x1e8)] public fixed byte _[0x18];
        [FieldOffset(0x200)] public fixed byte _[0x18];
        [FieldOffset(0x218)] public fixed byte _[0x18];
        [FieldOffset(0x230)] public fixed byte _[0x4];
        [FieldOffset(0x234)] public fixed byte _[0x4];
        [FieldOffset(0x238)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8c0)]
    public unsafe struct C_INIT_ScaleVelocity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x6d8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4b8)]
    public unsafe struct C_OP_MoveToHitbox {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x60];
        [FieldOffset(0x240)] public fixed byte _[0x6c];
        [FieldOffset(0x2ac)] public fixed byte _[0x4];
        [FieldOffset(0x2b0)] public fixed byte _[0x4];
        [FieldOffset(0x2b4)] public fixed byte _[0x4];
        [FieldOffset(0x2b8)] public fixed byte _[0x80];
        [FieldOffset(0x338)] public fixed byte _[0x4];
        [FieldOffset(0x33c)] public fixed byte _[0x4];
        [FieldOffset(0x340)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4d8)]
    public unsafe struct C_OP_PinRopeSegmentParticleToParent {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_INIT_PointList {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
        [FieldOffset(0x1f0)] public fixed byte _[0x18];
        [FieldOffset(0x208)] public fixed byte _[0x1];
        [FieldOffset(0x209)] public fixed byte _[0x3];
        [FieldOffset(0x20c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x390)]
    public unsafe struct C_OP_LerpToOtherAttribute {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x178];
        [FieldOffset(0x358)] public fixed byte _[0x4];
        [FieldOffset(0x35c)] public fixed byte _[0x4];
        [FieldOffset(0x360)] public fixed byte _[0x30];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_INIT_RandomColor {
        [FieldOffset(0x0)] public fixed byte pad_0[0x204];
        [FieldOffset(0x204)] public fixed byte _[0x4];
        [FieldOffset(0x208)] public fixed byte _[0x4];
        [FieldOffset(0x20c)] public fixed byte _[0x4];
        [FieldOffset(0x210)] public fixed byte _[0x4];
        [FieldOffset(0x214)] public fixed byte _[0x4];
        [FieldOffset(0x218)] public fixed byte _[0x4];
        [FieldOffset(0x21c)] public fixed byte _[0x4];
        [FieldOffset(0x220)] public fixed byte _[0x4];
        [FieldOffset(0x224)] public fixed byte _[0x4];
        [FieldOffset(0x228)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x370)]
    public unsafe struct C_OP_SetGravityToCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x178];
        [FieldOffset(0x368)] public fixed byte _[0x1];
        [FieldOffset(0x369)] public fixed byte _[0x1];
        [FieldOffset(0x36a)] public fixed byte _[0x6];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x218)]
    public unsafe struct C_INIT_RemapParticleCountToScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x4];
        [FieldOffset(0x204)] public fixed byte _[0x4];
        [FieldOffset(0x208)] public fixed byte _[0x1];
        [FieldOffset(0x209)] public fixed byte _[0x1];
        [FieldOffset(0x20a)] public fixed byte _[0x2];
        [FieldOffset(0x20c)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_INIT_InheritFromParentParticles {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x220)]
    public unsafe struct C_OP_RampScalarLinearSimple {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x28];
        [FieldOffset(0x210)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_INIT_ChaoticAttractor {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x4];
        [FieldOffset(0x204)] public fixed byte _[0x4];
        [FieldOffset(0x208)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f8)]
    public unsafe struct C_OP_MovementRigidAttachToCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x240)]
    public unsafe struct C_OP_RenderFlattenGrass {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x4];
        [FieldOffset(0x234)] public fixed byte _[0x4];
        [FieldOffset(0x238)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x2038)]
    public unsafe struct C_OP_RenderLightBeam {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x8];
        [FieldOffset(0x238)] public fixed byte _[0x6d8];
        [FieldOffset(0x910)] public fixed byte _[0x8];
        [FieldOffset(0x918)] public fixed byte _[0x8];
        [FieldOffset(0x920)] public fixed byte _[0x178];
        [FieldOffset(0xa98)] public fixed byte _[0x178];
        [FieldOffset(0xc10)] public fixed byte _[0x178];
        [FieldOffset(0xd88)] public fixed byte _[0x1];
        [FieldOffset(0xd89)] public fixed byte _[0x7];
        [FieldOffset(0xd90)] public fixed byte _[0x178];
        [FieldOffset(0xf08)] public fixed byte _[0x178];
        [FieldOffset(0x1080)] public fixed byte _[0x178];
        [FieldOffset(0x11f8)] public fixed byte _[0x178];
        [FieldOffset(0x1370)] public fixed byte _[0x178];
        [FieldOffset(0x14e8)] public fixed byte _[0x178];
        [FieldOffset(0x1660)] public fixed byte _[0x6d8];
        [FieldOffset(0x1d38)] public fixed byte _[0x8];
        [FieldOffset(0x1d40)] public fixed byte _[0x178];
        [FieldOffset(0x1eb8)] public fixed byte _[0x178];
        [FieldOffset(0x2030)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8c8)]
    public unsafe struct C_INIT_SkyVisCull {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x6d8];
        [FieldOffset(0x8c0)] public fixed byte _[0x4];
        [FieldOffset(0x8c4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x370)]
    public unsafe struct C_OP_EnableChildrenFromParentParticleCount {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x178];
        [FieldOffset(0x368)] public fixed byte _[0x1];
        [FieldOffset(0x369)] public fixed byte _[0x1];
        [FieldOffset(0x36a)] public fixed byte _[0x6];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x9f8)]
    public unsafe struct C_INIT_DistanceToCPInit {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
        [FieldOffset(0x1f0)] public fixed byte _[0x178];
        [FieldOffset(0x368)] public fixed byte _[0x178];
        [FieldOffset(0x4e0)] public fixed byte _[0x178];
        [FieldOffset(0x658)] public fixed byte _[0x178];
        [FieldOffset(0x7d0)] public fixed byte _[0x4];
        [FieldOffset(0x7d4)] public fixed byte _[0x1];
        [FieldOffset(0x7d5)] public fixed byte _[0x83];
        [FieldOffset(0x858)] public fixed byte _[0x8];
        [FieldOffset(0x860)] public fixed byte _[0x178];
        [FieldOffset(0x9d8)] public fixed byte _[0x4];
        [FieldOffset(0x9dc)] public fixed byte _[0x4];
        [FieldOffset(0x9e0)] public fixed byte _[0x4];
        [FieldOffset(0x9e4)] public fixed byte _[0xc];
        [FieldOffset(0x9f0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1e0)]
    public unsafe struct C_OP_EndCapDecay {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x228)]
    public unsafe struct C_OP_ForceBasedOnDistanceToPlane {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1f0];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0xc];
        [FieldOffset(0x200)] public fixed byte _[0x4];
        [FieldOffset(0x204)] public fixed byte _[0xc];
        [FieldOffset(0x210)] public fixed byte _[0xc];
        [FieldOffset(0x21c)] public fixed byte _[0x4];
        [FieldOffset(0x220)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_OP_RemapDensityToVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0xc];
        [FieldOffset(0x1fc)] public fixed byte _[0xc];
        [FieldOffset(0x208)] public fixed byte _[0x4];
        [FieldOffset(0x20c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct ParticleControlPointConfiguration_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x18];
        [FieldOffset(0x20)] public fixed byte _[0x70];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f8)]
    public unsafe struct C_INIT_SetRigidAttachment {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct MaterialVariable_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1e0)]
    public unsafe struct CParticleFunctionConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_OP_RemapSpeed {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x2ee8)]
    public unsafe struct C_OP_RenderModels {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x1];
        [FieldOffset(0x231)] public fixed byte _[0x1];
        [FieldOffset(0x232)] public fixed byte _[0x1];
        [FieldOffset(0x233)] public fixed byte _[0x5];
        [FieldOffset(0x238)] public fixed byte _[0x18];
        [FieldOffset(0x250)] public fixed byte _[0x4];
        [FieldOffset(0x254)] public fixed byte _[0x4];
        [FieldOffset(0x258)] public fixed byte _[0x1];
        [FieldOffset(0x259)] public fixed byte _[0x1];
        [FieldOffset(0x25a)] public fixed byte _[0x6];
        [FieldOffset(0x260)] public fixed byte _[0x6d8];
        [FieldOffset(0x938)] public fixed byte _[0x6d8];
        [FieldOffset(0x1010)] public fixed byte _[0x4];
        [FieldOffset(0x1014)] public fixed byte _[0x4];
        [FieldOffset(0x1018)] public fixed byte _[0x6d8];
        [FieldOffset(0x16f0)] public fixed byte _[0x4];
        [FieldOffset(0x16f4)] public fixed byte _[0x4];
        [FieldOffset(0x16f8)] public fixed byte _[0x8];
        [FieldOffset(0x1700)] public fixed byte _[0x178];
        [FieldOffset(0x1878)] public fixed byte _[0x1];
        [FieldOffset(0x1879)] public fixed byte _[0x1];
        [FieldOffset(0x187a)] public fixed byte _[0x1];
        [FieldOffset(0x187b)] public fixed byte _[0x1];
        [FieldOffset(0x187c)] public fixed byte _[0x4];
        [FieldOffset(0x1880)] public fixed byte _[0x4];
        [FieldOffset(0x1884)] public fixed byte _[0x4];
        [FieldOffset(0x1888)] public fixed byte _[0x100];
        [FieldOffset(0x1988)] public fixed byte _[0x100];
        [FieldOffset(0x1a88)] public fixed byte _[0x1];
        [FieldOffset(0x1a89)] public fixed byte _[0x1];
        [FieldOffset(0x1a8a)] public fixed byte _[0x46];
        [FieldOffset(0x1ad0)] public fixed byte _[0x8];
        [FieldOffset(0x1ad8)] public fixed byte _[0x8];
        [FieldOffset(0x1ae0)] public fixed byte _[0x178];
        [FieldOffset(0x1c58)] public fixed byte _[0x18];
        [FieldOffset(0x1c70)] public fixed byte _[0x178];
        [FieldOffset(0x1de8)] public fixed byte _[0x178];
        [FieldOffset(0x1f60)] public fixed byte _[0x60];
        [FieldOffset(0x1fc0)] public fixed byte _[0x4];
        [FieldOffset(0x1fc4)] public fixed byte _[0x100];
        [FieldOffset(0x20c4)] public fixed byte _[0x1];
        [FieldOffset(0x20c5)] public fixed byte _[0x3];
        [FieldOffset(0x20c8)] public fixed byte _[0x4];
        [FieldOffset(0x20cc)] public fixed byte _[0x1];
        [FieldOffset(0x20cd)] public fixed byte _[0x1];
        [FieldOffset(0x20ce)] public fixed byte _[0x1];
        [FieldOffset(0x20cf)] public fixed byte _[0x1];
        [FieldOffset(0x20d0)] public fixed byte _[0x1];
        [FieldOffset(0x20d1)] public fixed byte _[0x1];
        [FieldOffset(0x20d2)] public fixed byte _[0x106];
        [FieldOffset(0x21d8)] public fixed byte _[0x178];
        [FieldOffset(0x2350)] public fixed byte _[0x178];
        [FieldOffset(0x24c8)] public fixed byte _[0x178];
        [FieldOffset(0x2640)] public fixed byte _[0x8];
        [FieldOffset(0x2648)] public fixed byte _[0x6d8];
        [FieldOffset(0x2d20)] public fixed byte _[0x8];
        [FieldOffset(0x2d28)] public fixed byte _[0x8];
        [FieldOffset(0x2d30)] public fixed byte _[0x1b8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x528)]
    public unsafe struct C_OP_RenderClientPhysicsImpulse {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x178];
        [FieldOffset(0x3a8)] public fixed byte _[0x178];
        [FieldOffset(0x520)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1e8)]
    public unsafe struct CParticleFunctionEmitter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_INIT_RemapNamedModelMeshGroupToScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f0)]
    public unsafe struct C_OP_SetControlPointOrientationToCPVelocity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x7c8)]
    public unsafe struct C_OP_RopeSpringConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x178];
        [FieldOffset(0x358)] public fixed byte _[0x178];
        [FieldOffset(0x4d0)] public fixed byte _[0x178];
        [FieldOffset(0x648)] public fixed byte _[0x8];
        [FieldOffset(0x650)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x388)]
    public unsafe struct C_INIT_PositionWarpScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0xc];
        [FieldOffset(0x1f4)] public fixed byte _[0xc];
        [FieldOffset(0x200)] public fixed byte _[0x178];
        [FieldOffset(0x378)] public fixed byte _[0x4];
        [FieldOffset(0x37c)] public fixed byte _[0x4];
        [FieldOffset(0x380)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f0)]
    public unsafe struct C_OP_ForceControlPointStub {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_VectorNoise {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0xc];
        [FieldOffset(0x1f0)] public fixed byte _[0xc];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x1];
        [FieldOffset(0x201)] public fixed byte _[0x3];
        [FieldOffset(0x204)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x7d0)]
    public unsafe struct C_OP_RemapParticleCountToScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x178];
        [FieldOffset(0x4d8)] public fixed byte _[0x178];
        [FieldOffset(0x650)] public fixed byte _[0x178];
        [FieldOffset(0x7c8)] public fixed byte _[0x4];
        [FieldOffset(0x7cc)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x368)]
    public unsafe struct C_INIT_QuantizeFloat {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_OP_RemapModelVolumetoCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x4];
        [FieldOffset(0x204)] public fixed byte _[0x4];
        [FieldOffset(0x208)] public fixed byte _[0x4];
        [FieldOffset(0x20c)] public fixed byte _[0x1];
        [FieldOffset(0x20d)] public fixed byte _[0x3];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f8)]
    public unsafe struct C_OP_SetToCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0xc];
        [FieldOffset(0x1f0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct ParticleControlPointDriver_t {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0xc];
        [FieldOffset(0x2c)] public fixed byte _[0xc];
        [FieldOffset(0x38)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_ParentVortices {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1f0];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0xc];
        [FieldOffset(0x200)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8d8)]
    public unsafe struct C_OP_SetControlPointToCPVelocity {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x8];
        [FieldOffset(0x200)] public fixed byte _[0x6d8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x558)]
    public unsafe struct C_OP_ClientPhysics {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x8];
        [FieldOffset(0x238)] public fixed byte _[0x8];
        [FieldOffset(0x240)] public fixed byte _[0x178];
        [FieldOffset(0x3b8)] public fixed byte _[0x178];
        [FieldOffset(0x530)] public fixed byte _[0x4];
        [FieldOffset(0x534)] public fixed byte _[0x4];
        [FieldOffset(0x538)] public fixed byte _[0x1];
        [FieldOffset(0x539)] public fixed byte _[0x1];
        [FieldOffset(0x53a)] public fixed byte _[0x2];
        [FieldOffset(0x53c)] public fixed byte _[0x4];
        [FieldOffset(0x540)] public fixed byte _[0x4];
        [FieldOffset(0x544)] public fixed byte _[0x4];
        [FieldOffset(0x548)] public fixed byte _[0x4];
        [FieldOffset(0x54c)] public fixed byte _[0x4];
        [FieldOffset(0x550)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f8)]
    public unsafe struct C_OP_SpinYaw {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1f8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct PointDefinitionWithTimeValues_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x14];
        [FieldOffset(0x14)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct RenderProjectedMaterial_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1120)]
    public unsafe struct C_INIT_SetFloatAttributeToVectorExpression {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
        [FieldOffset(0x1f0)] public fixed byte _[0x6d8];
        [FieldOffset(0x8c8)] public fixed byte _[0x6d8];
        [FieldOffset(0xfa0)] public fixed byte _[0x178];
        [FieldOffset(0x1118)] public fixed byte _[0x4];
        [FieldOffset(0x111c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x2050)]
    public unsafe struct C_OP_ExternalWindForce {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1f0];
        [FieldOffset(0x1f0)] public fixed byte _[0x6d8];
        [FieldOffset(0x8c8)] public fixed byte _[0x6d8];
        [FieldOffset(0xfa0)] public fixed byte _[0x1];
        [FieldOffset(0xfa1)] public fixed byte _[0x1];
        [FieldOffset(0xfa2)] public fixed byte _[0x1];
        [FieldOffset(0xfa3)] public fixed byte _[0x5];
        [FieldOffset(0xfa8)] public fixed byte _[0x6d8];
        [FieldOffset(0x1680)] public fixed byte _[0x8];
        [FieldOffset(0x1688)] public fixed byte _[0x178];
        [FieldOffset(0x1800)] public fixed byte _[0x178];
        [FieldOffset(0x1978)] public fixed byte _[0x6d8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x270)]
    public unsafe struct C_INIT_ModelCull {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x1];
        [FieldOffset(0x1ed)] public fixed byte _[0x1];
        [FieldOffset(0x1ee)] public fixed byte _[0x1];
        [FieldOffset(0x1ef)] public fixed byte _[0x81];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x41c8)]
    public unsafe struct C_OP_RenderSprites {
        [FieldOffset(0x0)] public fixed byte pad_0[0x2ed8];
        [FieldOffset(0x2ed8)] public fixed byte _[0x178];
        [FieldOffset(0x3050)] public fixed byte _[0x4];
        [FieldOffset(0x3054)] public fixed byte _[0x4];
        [FieldOffset(0x3058)] public fixed byte _[0x4];
        [FieldOffset(0x305c)] public fixed byte _[0x4];
        [FieldOffset(0x3060)] public fixed byte _[0x178];
        [FieldOffset(0x31d8)] public fixed byte _[0x178];
        [FieldOffset(0x3350)] public fixed byte _[0x178];
        [FieldOffset(0x34c8)] public fixed byte _[0x178];
        [FieldOffset(0x3640)] public fixed byte _[0x178];
        [FieldOffset(0x37b8)] public fixed byte _[0x4];
        [FieldOffset(0x37bc)] public fixed byte _[0x4];
        [FieldOffset(0x37c0)] public fixed byte _[0x1];
        [FieldOffset(0x37c1)] public fixed byte _[0x3];
        [FieldOffset(0x37c4)] public fixed byte _[0x4];
        [FieldOffset(0x37c8)] public fixed byte _[0x4];
        [FieldOffset(0x37cc)] public fixed byte _[0x4];
        [FieldOffset(0x37d0)] public fixed byte _[0x4];
        [FieldOffset(0x37d4)] public fixed byte _[0x4];
        [FieldOffset(0x37d8)] public fixed byte _[0x4];
        [FieldOffset(0x37dc)] public fixed byte _[0x4];
        [FieldOffset(0x37e0)] public fixed byte _[0x4];
        [FieldOffset(0x37e4)] public fixed byte _[0x4];
        [FieldOffset(0x37e8)] public fixed byte _[0x8];
        [FieldOffset(0x37f0)] public fixed byte _[0x6d8];
        [FieldOffset(0x3ec8)] public fixed byte _[0x178];
        [FieldOffset(0x4040)] public fixed byte _[0x178];
        [FieldOffset(0x41b8)] public fixed byte _[0x4];
        [FieldOffset(0x41bc)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x2d8)]
    public unsafe struct C_OP_PercentageBetweenTransformLerpCPs {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
        [FieldOffset(0x1f0)] public fixed byte _[0x68];
        [FieldOffset(0x258)] public fixed byte _[0x68];
        [FieldOffset(0x2c0)] public fixed byte _[0x4];
        [FieldOffset(0x2c4)] public fixed byte _[0x4];
        [FieldOffset(0x2c8)] public fixed byte _[0x4];
        [FieldOffset(0x2cc)] public fixed byte _[0x4];
        [FieldOffset(0x2d0)] public fixed byte _[0x4];
        [FieldOffset(0x2d4)] public fixed byte _[0x1];
        [FieldOffset(0x2d5)] public fixed byte _[0x3];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4f0)]
    public unsafe struct C_OP_SetPerChildControlPoint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
        [FieldOffset(0x1f0)] public fixed byte _[0x178];
        [FieldOffset(0x368)] public fixed byte _[0x178];
        [FieldOffset(0x4e0)] public fixed byte _[0x4];
        [FieldOffset(0x4e4)] public fixed byte _[0x4];
        [FieldOffset(0x4e8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x258)]
    public unsafe struct C_OP_RenderTreeShake {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x4];
        [FieldOffset(0x234)] public fixed byte _[0x4];
        [FieldOffset(0x238)] public fixed byte _[0x4];
        [FieldOffset(0x23c)] public fixed byte _[0x4];
        [FieldOffset(0x240)] public fixed byte _[0x4];
        [FieldOffset(0x244)] public fixed byte _[0x4];
        [FieldOffset(0x248)] public fixed byte _[0x4];
        [FieldOffset(0x24c)] public fixed byte _[0x4];
        [FieldOffset(0x250)] public fixed byte _[0x4];
        [FieldOffset(0x254)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1e0)]
    public unsafe struct C_OP_WorldCollideConstraint {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x680)]
    public unsafe struct C_OP_SetAttributeToScalarExpression {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x8];
        [FieldOffset(0x1e8)] public fixed byte _[0x178];
        [FieldOffset(0x360)] public fixed byte _[0x178];
        [FieldOffset(0x4d8)] public fixed byte _[0x178];
        [FieldOffset(0x650)] public fixed byte _[0x4];
        [FieldOffset(0x654)] public fixed byte _[0x2c];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x208)]
    public unsafe struct C_OP_CycleScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x1];
        [FieldOffset(0x1f1)] public fixed byte _[0x3];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc40)]
    public unsafe struct C_OP_RenderMaterialProxy {
        [FieldOffset(0x0)] public fixed byte pad_0[0x230];
        [FieldOffset(0x230)] public fixed byte _[0x4];
        [FieldOffset(0x234)] public fixed byte _[0x4];
        [FieldOffset(0x238)] public fixed byte _[0x18];
        [FieldOffset(0x250)] public fixed byte _[0x8];
        [FieldOffset(0x258)] public fixed byte _[0x178];
        [FieldOffset(0x3d0)] public fixed byte _[0x6d8];
        [FieldOffset(0xaa8)] public fixed byte _[0x178];
        [FieldOffset(0xc20)] public fixed byte _[0x20];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x180)]
    public unsafe struct FloatInputMaterialVariable_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x230)]
    public unsafe struct C_OP_RampScalarLinear {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x2c];
        [FieldOffset(0x220)] public fixed byte _[0x4];
        [FieldOffset(0x224)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x380)]
    public unsafe struct C_OP_RotateVector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0xc];
        [FieldOffset(0x1f0)] public fixed byte _[0xc];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x4];
        [FieldOffset(0x204)] public fixed byte _[0x4];
        [FieldOffset(0x208)] public fixed byte _[0x178];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8c8)]
    public unsafe struct C_INIT_InitVecCollection {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x6d8];
        [FieldOffset(0x8c0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x238)]
    public unsafe struct C_INIT_RemapParticleCountToNamedModelMeshGroupScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x238];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x200)]
    public unsafe struct C_INIT_SequenceFromCP {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e8];
        [FieldOffset(0x1e8)] public fixed byte _[0x1];
        [FieldOffset(0x1e9)] public fixed byte _[0x3];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x210)]
    public unsafe struct C_OP_CPOffsetToPercentageBetweenCPs {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x4];
        [FieldOffset(0x1ec)] public fixed byte _[0x4];
        [FieldOffset(0x1f0)] public fixed byte _[0x4];
        [FieldOffset(0x1f4)] public fixed byte _[0x4];
        [FieldOffset(0x1f8)] public fixed byte _[0x4];
        [FieldOffset(0x1fc)] public fixed byte _[0x4];
        [FieldOffset(0x200)] public fixed byte _[0x1];
        [FieldOffset(0x201)] public fixed byte _[0x3];
        [FieldOffset(0x204)] public fixed byte _[0xc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1f0)]
    public unsafe struct C_OP_LerpEndCapScalar {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1e0];
        [FieldOffset(0x1e0)] public fixed byte _[0x4];
        [FieldOffset(0x1e4)] public fixed byte _[0x4];
        [FieldOffset(0x1e8)] public fixed byte _[0x8];
    }

}