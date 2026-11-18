/* cesium dumper | generated from live schema */
#![allow(non_snake_case, non_camel_case_types, dead_code)]

pub mod particles_dll {

    #[repr(C)]
    pub struct CPulseCell_WaitForCursorsWithTag {
        pub pad_0: [u8; 0x128], // 0x0
        pub _: [u8; 0x4], // 0x128
        pub _: [u8; 0x4], // 0x12c
    }

    #[repr(C)]
    pub struct CPulseCell_RaceCursors {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x18], // 0xd8
        pub _: [u8; 0x48], // 0xf0
    }

    #[repr(C)]
    pub struct CPulseCell_Base {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x40], // 0x8
    }

    #[repr(C)]
    pub struct CPulse_ResumePoint {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_PickBestOutflowSelector {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x18], // 0x50
    }

    #[repr(C)]
    pub struct CParticleBindingRealPulse {
        pub pad_0: [u8; 0xa8], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_WaitForObservable {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x90], // 0xd8
        pub _: [u8; 0x48], // 0x168
    }

    #[repr(C)]
    pub struct CPulse_OutflowConnection {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x30], // 0x18
    }

    #[repr(C)]
    pub struct CPulseGraphDef {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x10], // 0x8
        pub _: [u8; 0x18], // 0x18
        pub _: [u8; 0x10], // 0x30
        pub _: [u8; 0x10], // 0x40
        pub _: [u8; 0x18], // 0x50
        pub _: [u8; 0x18], // 0x68
        pub _: [u8; 0x18], // 0x80
        pub _: [u8; 0x18], // 0x98
        pub _: [u8; 0x18], // 0xb0
        pub _: [u8; 0x18], // 0xc8
        pub _: [u8; 0x18], // 0xe0
        pub _: [u8; 0x18], // 0xf8
        pub _: [u8; 0x18], // 0x110
        pub _: [u8; 0x18], // 0x128
        pub _: [u8; 0x80], // 0x140
    }

    #[repr(C)]
    pub struct CPulseCell_FireCursors {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x18], // 0xd8
        pub _: [u8; 0x8], // 0xf0
        pub _: [u8; 0x48], // 0xf8
    }

    #[repr(C)]
    pub struct CPulseCell_Timeline__TimelineEvent_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x48], // 0x8
    }

    #[repr(C)]
    pub struct CPulseCell_IntervalTimer__CursorState_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
    }

    #[repr(C)]
    pub struct CPulseCell_BaseRequirement {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_BaseState {
        pub pad_0: [u8; 0xd8], // 0x0
    }

    #[repr(C)]
    pub struct OutflowWithRequirements_t {
        pub _: [u8; 0x48], // 0x0
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x18], // 0x50
        pub _: [u8; 0x18], // 0x68
    }

    #[repr(C)]
    pub struct CPulseCell_IsRequirementValid {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_Value_Gradient {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x18], // 0x48
    }

    #[repr(C)]
    pub struct PulseNodeDynamicOutflows_t__DynamicOutflow_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x48], // 0x8
    }

    #[repr(C)]
    pub struct CBasePulseGraphInstance {
        pub pad_0: [u8; 0x88], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_Inflow_GraphHook {
        pub pad_0: [u8; 0x80], // 0x0
        pub _: [u8; 0x10], // 0x80
    }

    #[repr(C)]
    pub struct SignatureOutflow_Resume {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_Inflow_BaseEntrypoint {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x30], // 0x50
    }

    #[repr(C)]
    pub struct CPulseCell_WaitForCursorsWithTagBase {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x8], // 0xd8
        pub _: [u8; 0x48], // 0xe0
    }

    #[repr(C)]
    pub struct CPulse_InvokeBinding {
        pub _: [u8; 0x30], // 0x0
        pub _: [u8; 0x10], // 0x30
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x4], // 0x44
        pub _: [u8; 0x68], // 0x48
    }

    #[repr(C)]
    pub struct CPulseCell_IntervalTimer {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x48], // 0xd8
        pub _: [u8; 0x48], // 0x120
    }

    #[repr(C)]
    pub struct CPulseCell_BaseLerp {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x48], // 0xd8
    }

    #[repr(C)]
    pub struct CPulseCell_Value_Curve {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x40], // 0x48
    }

    #[repr(C)]
    pub struct CPulseCell_Inflow_EventHandler {
        pub pad_0: [u8; 0x80], // 0x0
        pub _: [u8; 0x10], // 0x80
    }

    #[repr(C)]
    pub struct CPulseCell_BaseFlow {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_Outflow_CycleShuffled__InstanceState_t {
        pub _: [u8; 0x20], // 0x0
        pub _: [u8; 0x8], // 0x20
    }

    #[repr(C)]
    pub struct CPulseCell_BaseLerp__CursorState_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct SignatureOutflow_Continue {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_Timeline {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x18], // 0xd8
        pub _: [u8; 0x8], // 0xf0
        pub _: [u8; 0x48], // 0xf8
    }

    #[repr(C)]
    pub struct CPulseCell_Inflow_EntOutputHandler {
        pub pad_0: [u8; 0x80], // 0x0
        pub _: [u8; 0x10], // 0x80
        pub _: [u8; 0x10], // 0x90
        pub _: [u8; 0x18], // 0xa0
    }

    #[repr(C)]
    pub struct CPulseCell_Outflow_CycleOrdered__InstanceState_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CParticleCollectionBindingInstance {
        pub pad_0: [u8; 0xa8], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_LimitCount__InstanceState_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_Step_DebugLog {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_BaseYieldingInflow {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x48], // 0x48
        pub _: [u8; 0x48], // 0x90
    }

    #[repr(C)]
    pub struct PulseNodeDynamicOutflows_t {
        pub _: [u8; 0x18], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_IsRequirementValid__Criteria_t {
        pub _: [u8; 0x1], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_Inflow_ObservableVariableListener {
        pub pad_0: [u8; 0x80], // 0x0
        pub _: [u8; 0x2], // 0x80
        pub _: [u8; 0x6], // 0x82
    }

    #[repr(C)]
    pub struct CPulseCell_Outflow_CycleOrdered {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x18], // 0x48
    }

    #[repr(C)]
    pub struct PulseSelectorOutflowList_t {
        pub _: [u8; 0x18], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_Inflow_Wait {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x48], // 0xd8
    }

    #[repr(C)]
    pub struct CPulseCell_Outflow_CycleShuffled {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x18], // 0x48
    }

    #[repr(C)]
    pub struct CPulseCell_Inflow_Method {
        pub pad_0: [u8; 0x80], // 0x0
        pub _: [u8; 0x10], // 0x80
        pub _: [u8; 0x8], // 0x90
        pub _: [u8; 0x8], // 0x98
        pub _: [u8; 0x10], // 0xa0
        pub _: [u8; 0x10], // 0xb0
    }

    #[repr(C)]
    pub struct CPulseCell_BaseValue {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_BooleanSwitchState {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x90], // 0xd8
        pub _: [u8; 0x48], // 0x168
        pub _: [u8; 0x48], // 0x1b0
    }

    #[repr(C)]
    pub struct CPulseCell_Inflow_Yield {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x48], // 0xd8
    }

    #[repr(C)]
    pub struct CPulseCell_Unknown {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x10], // 0x48
    }

    #[repr(C)]
    pub struct CPulseCell_Outflow_CycleRandom {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x18], // 0x48
    }

    #[repr(C)]
    pub struct CPulseCell_Step_PublicOutput {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x8], // 0x48
    }

    #[repr(C)]
    pub struct CPulse_BlackboardReference {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x10], // 0x8
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
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
    pub struct CPulse_CallInfo {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x30], // 0x18
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
        pub _: [u8; 0x8], // 0x58
    }

    #[repr(C)]
    pub struct CPulseCell_InlineNodeSkipSelector {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x18], // 0x50
        pub _: [u8; 0x48], // 0x68
    }

    #[repr(C)]
    pub struct CPulseCell_LimitCount {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x8], // 0x48
    }

    #[repr(C)]
    pub struct CPulseCell_Step_CallExternalMethod {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x10], // 0xd8
        pub _: [u8; 0x8], // 0xe8
        pub _: [u8; 0x10], // 0xf0
        pub _: [u8; 0x8], // 0x100
        pub _: [u8; 0x48], // 0x108
    }

    #[repr(C)]
    pub struct CPulseCell_LimitCount__Criteria_t {
        pub _: [u8; 0x1], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_CursorQueue {
        pub pad_0: [u8; 0x128], // 0x0
        pub _: [u8; 0x8], // 0x128
    }

    #[repr(C)]
    pub struct CPulseCell_Value_RandomFloat {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct CPulseExecCursor {
        pub pad_0: [u8; 0xd8], // 0x0
    }

    #[repr(C)]
    pub struct IParticleCollection {
        pub pad_0: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct C_OP_RemapGravityToVector {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x6d8], // 0x1e0
        pub _: [u8; 0x4], // 0x8b8
        pub _: [u8; 0x4], // 0x8bc
        pub _: [u8; 0x70], // 0x8c0
    }

    #[repr(C)]
    pub struct C_OP_Decay {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x1], // 0x1e0
        pub _: [u8; 0x7], // 0x1e1
    }

    #[repr(C)]
    pub struct C_OP_RenderDeferredLight {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x4], // 0x230
        pub _: [u8; 0x4], // 0x234
        pub _: [u8; 0x8], // 0x238
        pub _: [u8; 0x6d8], // 0x240
        pub _: [u8; 0x4], // 0x918
        pub _: [u8; 0x1], // 0x91c
        pub _: [u8; 0x3], // 0x91d
        pub _: [u8; 0x8], // 0x920
        pub _: [u8; 0x4], // 0x928
        pub _: [u8; 0x4], // 0x92c
        pub _: [u8; 0x4], // 0x930
        pub _: [u8; 0x4], // 0x934
        pub _: [u8; 0x4], // 0x938
        pub _: [u8; 0x4], // 0x93c
        pub _: [u8; 0x4], // 0x940
        pub _: [u8; 0x4], // 0x944
    }

    #[repr(C)]
    pub struct C_OP_RemapSpeedtoCP {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x4], // 0x200
        pub _: [u8; 0x4], // 0x204
    }

    #[repr(C)]
    pub struct C_OP_RemapTransformToVelocity {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x68], // 0x1e0
    }

    #[repr(C)]
    pub struct CollisionGroupContext_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CParticleFunctionPreEmission {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
    }

    #[repr(C)]
    pub struct C_OP_FadeOutSimple {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
    }

    #[repr(C)]
    pub struct C_OP_SpringToVectorConstraint {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x178], // 0x1e0
        pub _: [u8; 0x178], // 0x358
        pub _: [u8; 0x178], // 0x4d0
        pub _: [u8; 0x178], // 0x648
        pub _: [u8; 0x6d8], // 0x7c0
    }

    #[repr(C)]
    pub struct C_OP_RenderRopes {
        pub pad_0: [u8; 0x2ed8], // 0x0
        pub _: [u8; 0x4], // 0x2ed8
        pub _: [u8; 0x4], // 0x2edc
        pub _: [u8; 0x4], // 0x2ee0
        pub _: [u8; 0x4], // 0x2ee4
        pub _: [u8; 0x4], // 0x2ee8
        pub _: [u8; 0x4], // 0x2eec
        pub _: [u8; 0x8], // 0x2ef0
        pub _: [u8; 0x178], // 0x2ef8
        pub _: [u8; 0x4], // 0x3070
        pub _: [u8; 0x4], // 0x3074
        pub _: [u8; 0x4], // 0x3078
        pub _: [u8; 0x4], // 0x307c
        pub _: [u8; 0x178], // 0x3080
        pub _: [u8; 0x178], // 0x31f8
        pub _: [u8; 0x178], // 0x3370
        pub _: [u8; 0x4], // 0x34e8
        pub _: [u8; 0x4], // 0x34ec
        pub _: [u8; 0x4], // 0x34f0
        pub _: [u8; 0x4], // 0x34f4
        pub _: [u8; 0x4], // 0x34f8
        pub _: [u8; 0x4], // 0x34fc
        pub _: [u8; 0x5], // 0x3500
        pub _: [u8; 0x3], // 0x3505
        pub _: [u8; 0x4], // 0x3508
        pub _: [u8; 0x4], // 0x350c
        pub _: [u8; 0x1], // 0x3510
        pub _: [u8; 0x3], // 0x3511
        pub _: [u8; 0x4], // 0x3514
        pub _: [u8; 0x4], // 0x3518
        pub _: [u8; 0x4], // 0x351c
        pub _: [u8; 0x4], // 0x3520
        pub _: [u8; 0x1], // 0x3524
        pub _: [u8; 0x3], // 0x3525
    }

    #[repr(C)]
    pub struct C_INIT_StatusEffectCitadel {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x4], // 0x200
        pub _: [u8; 0x4], // 0x204
        pub _: [u8; 0x4], // 0x208
        pub _: [u8; 0x4], // 0x20c
        pub _: [u8; 0x4], // 0x210
        pub _: [u8; 0x4], // 0x214
        pub _: [u8; 0x4], // 0x218
        pub _: [u8; 0x4], // 0x21c
        pub _: [u8; 0x4], // 0x220
        pub _: [u8; 0x4], // 0x224
        pub _: [u8; 0x4], // 0x228
        pub _: [u8; 0x4], // 0x22c
        pub _: [u8; 0x8], // 0x230
    }

    #[repr(C)]
    pub struct C_OP_RenderSound {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x4], // 0x230
        pub _: [u8; 0x4], // 0x234
        pub _: [u8; 0x4], // 0x238
        pub _: [u8; 0x4], // 0x23c
        pub _: [u8; 0x4], // 0x240
        pub _: [u8; 0x4], // 0x244
        pub _: [u8; 0x4], // 0x248
        pub _: [u8; 0x4], // 0x24c
        pub _: [u8; 0x4], // 0x250
        pub _: [u8; 0x4], // 0x254
        pub _: [u8; 0x100], // 0x258
        pub _: [u8; 0x8], // 0x358
    }

    #[repr(C)]
    pub struct CParticleVisibilityInputs {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x1], // 0x2c
        pub _: [u8; 0x3], // 0x2d
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x4], // 0x44
    }

    #[repr(C)]
    pub struct C_OP_SetControlPointsToParticle {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x1], // 0x1f0
        pub _: [u8; 0x3], // 0x1f1
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x8], // 0x1f8
    }

    #[repr(C)]
    pub struct C_OP_RemapCPVelocityToVector {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
    }

    #[repr(C)]
    pub struct C_OP_PointVectorAtNextParticle {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x8], // 0x360
    }

    #[repr(C)]
    pub struct ParticlePreviewBodyGroup_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct C_OP_OscillateScalarSimple {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x30], // 0x1f0
    }

    #[repr(C)]
    pub struct C_INIT_StatusEffect {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x4], // 0x200
        pub _: [u8; 0x4], // 0x204
        pub _: [u8; 0x4], // 0x208
        pub _: [u8; 0x4], // 0x20c
        pub _: [u8; 0x4], // 0x210
        pub _: [u8; 0x4], // 0x214
        pub _: [u8; 0x4], // 0x218
        pub _: [u8; 0x4], // 0x21c
        pub _: [u8; 0x4], // 0x220
        pub _: [u8; 0x4], // 0x224
        pub _: [u8; 0x4], // 0x228
        pub _: [u8; 0x1c], // 0x22c
    }

    #[repr(C)]
    pub struct C_INIT_RtEnvCull {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0xc], // 0x1e8
        pub _: [u8; 0xc], // 0x1f4
        pub _: [u8; 0x1], // 0x200
        pub _: [u8; 0x1], // 0x201
        pub _: [u8; 0x1], // 0x202
        pub _: [u8; 0x81], // 0x203
        pub _: [u8; 0x4], // 0x284
        pub _: [u8; 0x8], // 0x288
    }

    #[repr(C)]
    pub struct C_OP_ConstrainDistance {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x178], // 0x1e0
        pub _: [u8; 0x178], // 0x358
        pub _: [u8; 0x68], // 0x4d0
        pub _: [u8; 0x6d8], // 0x538
        pub _: [u8; 0x8], // 0xc10
    }

    #[repr(C)]
    pub struct C_INIT_RandomVector {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0xc], // 0x1e8
        pub _: [u8; 0xc], // 0x1f4
        pub _: [u8; 0x4], // 0x200
        pub _: [u8; 0xc], // 0x204
    }

    #[repr(C)]
    pub struct C_INIT_InitialVelocityNoise {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0xc], // 0x1e8
        pub _: [u8; 0xc], // 0x1f4
        pub _: [u8; 0x6d8], // 0x200
        pub _: [u8; 0x178], // 0x8d8
        pub _: [u8; 0x6d8], // 0xa50
        pub _: [u8; 0x6d8], // 0x1128
        pub _: [u8; 0x178], // 0x1800
        pub _: [u8; 0x178], // 0x1978
        pub _: [u8; 0x68], // 0x1af0
        pub _: [u8; 0x8], // 0x1b58
    }

    #[repr(C)]
    pub struct ParticleChildrenInfo_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x1], // 0xc
        pub _: [u8; 0x3], // 0xd
        pub _: [u8; 0x10], // 0x10
    }

    #[repr(C)]
    pub struct C_OP_RemapScalarOnceTimed {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
    }

    #[repr(C)]
    pub struct C_INIT_RandomNamedModelSequence {
        pub pad_0: [u8; 0x210], // 0x0
    }

    #[repr(C)]
    pub struct C_OP_PlaneCull {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
        pub _: [u8; 0x6d8], // 0x1e8
        pub _: [u8; 0x4], // 0x8c0
        pub _: [u8; 0x4], // 0x8c4
    }

    #[repr(C)]
    pub struct C_INIT_VelocityRandom {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x8], // 0x1e8
        pub _: [u8; 0x178], // 0x1f0
        pub _: [u8; 0x178], // 0x368
        pub _: [u8; 0x6d8], // 0x4e0
        pub _: [u8; 0x6d8], // 0xbb8
        pub _: [u8; 0x4], // 0x1290
        pub _: [u8; 0xc], // 0x1294
    }

    #[repr(C)]
    pub struct C_OP_ModelDampenMovement {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x1], // 0x1e4
        pub _: [u8; 0x1], // 0x1e5
        pub _: [u8; 0x1], // 0x1e6
        pub _: [u8; 0x81], // 0x1e7
        pub _: [u8; 0x6d8], // 0x268
        pub _: [u8; 0x8], // 0x940
    }

    #[repr(C)]
    pub struct C_OP_TwistAroundAxis {
        pub pad_0: [u8; 0x1f0], // 0x0
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0xc], // 0x1f4
        pub _: [u8; 0x4], // 0x200
        pub _: [u8; 0x4], // 0x204
    }

    #[repr(C)]
    pub struct C_OP_TeleportBeam {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0xc], // 0x1f8
        pub _: [u8; 0x4], // 0x204
        pub _: [u8; 0x4], // 0x208
        pub _: [u8; 0x4], // 0x20c
        pub _: [u8; 0x8], // 0x210
    }

    #[repr(C)]
    pub struct C_OP_RemapExternalWindToCP {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x6d8], // 0x1f0
        pub _: [u8; 0x4], // 0x8c8
        pub _: [u8; 0x4], // 0x8cc
    }

    #[repr(C)]
    pub struct CBaseRendererSource2 {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x178], // 0x230
        pub _: [u8; 0x178], // 0x3a8
        pub _: [u8; 0x178], // 0x520
        pub _: [u8; 0x8], // 0x698
        pub _: [u8; 0x6d8], // 0x6a0
        pub _: [u8; 0x4], // 0xd78
        pub _: [u8; 0x4], // 0xd7c
        pub _: [u8; 0x8], // 0xd80
        pub _: [u8; 0x178], // 0xd88
        pub _: [u8; 0x178], // 0xf00
        pub _: [u8; 0x4], // 0x1078
        pub _: [u8; 0x4], // 0x107c
        pub _: [u8; 0x10], // 0x1080
        pub _: [u8; 0x4], // 0x1090
        pub _: [u8; 0x4], // 0x1094
        pub _: [u8; 0x8], // 0x1098
        pub _: [u8; 0x178], // 0x10a0
        pub _: [u8; 0x178], // 0x1218
        pub _: [u8; 0x178], // 0x1390
        pub _: [u8; 0x178], // 0x1508
        pub _: [u8; 0x178], // 0x1680
        pub _: [u8; 0x4], // 0x17f8
        pub _: [u8; 0x4], // 0x17fc
        pub _: [u8; 0x1], // 0x1800
        pub _: [u8; 0x7], // 0x1801
        pub _: [u8; 0x178], // 0x1808
        pub _: [u8; 0x178], // 0x1980
        pub _: [u8; 0x178], // 0x1af8
        pub _: [u8; 0x4], // 0x1c70
        pub _: [u8; 0x4], // 0x1c74
        pub _: [u8; 0x178], // 0x1c78
        pub _: [u8; 0x1], // 0x1df0
        pub _: [u8; 0x3], // 0x1df1
        pub _: [u8; 0x4], // 0x1df4
        pub _: [u8; 0x4], // 0x1df8
        pub _: [u8; 0x4], // 0x1dfc
        pub _: [u8; 0x178], // 0x1e00
        pub _: [u8; 0x178], // 0x1f78
        pub _: [u8; 0x178], // 0x20f0
        pub _: [u8; 0x1], // 0x2268
        pub _: [u8; 0x1], // 0x2269
        pub _: [u8; 0x6], // 0x226a
        pub _: [u8; 0x178], // 0x2270
        pub _: [u8; 0x4], // 0x23e8
        pub _: [u8; 0x4], // 0x23ec
        pub _: [u8; 0x1], // 0x23f0
        pub _: [u8; 0x1], // 0x23f1
        pub _: [u8; 0x1], // 0x23f2
        pub _: [u8; 0x1], // 0x23f3
        pub _: [u8; 0x80], // 0x23f4
        pub _: [u8; 0x1], // 0x2474
        pub _: [u8; 0x80], // 0x2475
        pub _: [u8; 0x1], // 0x24f5
        pub _: [u8; 0x1], // 0x24f6
        pub _: [u8; 0x1], // 0x24f7
        pub _: [u8; 0x4], // 0x24f8
        pub _: [u8; 0x4], // 0x24fc
        pub _: [u8; 0x178], // 0x2500
        pub _: [u8; 0x178], // 0x2678
        pub _: [u8; 0x178], // 0x27f0
        pub _: [u8; 0x178], // 0x2968
        pub _: [u8; 0x178], // 0x2ae0
        pub _: [u8; 0x4], // 0x2c58
        pub _: [u8; 0x1], // 0x2c5c
        pub _: [u8; 0x27b], // 0x2c5d
    }

    #[repr(C)]
    pub struct CSpinUpdateBase {
        pub pad_0: [u8; 0x1e0], // 0x0
    }

    #[repr(C)]
    pub struct C_OP_OrientTo2dDirection {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x6d8], // 0x1e0
        pub _: [u8; 0x4], // 0x8b8
        pub _: [u8; 0x4], // 0x8bc
        pub _: [u8; 0x8], // 0x8c0
    }

    #[repr(C)]
    pub struct C_OP_RemapDotProductToCP {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x178], // 0x1f8
        pub _: [u8; 0x178], // 0x370
        pub _: [u8; 0x178], // 0x4e8
        pub _: [u8; 0x178], // 0x660
    }

    #[repr(C)]
    pub struct C_INIT_RemapParticleCountToNamedModelElementScalar {
        pub pad_0: [u8; 0x218], // 0x0
        pub _: [u8; 0x8], // 0x218
        pub _: [u8; 0x8], // 0x220
        pub _: [u8; 0x8], // 0x228
        pub _: [u8; 0x8], // 0x230
    }

    #[repr(C)]
    pub struct C_OP_RenderTrails {
        pub pad_0: [u8; 0x3358], // 0x0
        pub _: [u8; 0x4], // 0x3358
        pub _: [u8; 0x4], // 0x335c
        pub _: [u8; 0x4], // 0x3360
        pub _: [u8; 0x4], // 0x3364
        pub _: [u8; 0x4], // 0x3368
        pub _: [u8; 0x4], // 0x336c
        pub _: [u8; 0x4], // 0x3370
        pub _: [u8; 0x4], // 0x3374
        pub _: [u8; 0x4], // 0x3378
        pub _: [u8; 0x4], // 0x337c
        pub _: [u8; 0x178], // 0x3380
        pub _: [u8; 0x6d8], // 0x34f8
        pub _: [u8; 0x178], // 0x3bd0
        pub _: [u8; 0x178], // 0x3d48
        pub _: [u8; 0x6d8], // 0x3ec0
        pub _: [u8; 0x178], // 0x4598
        pub _: [u8; 0x4], // 0x4710
        pub _: [u8; 0x4], // 0x4714
        pub _: [u8; 0x4], // 0x4718
        pub _: [u8; 0x4], // 0x471c
    }

    #[repr(C)]
    pub struct C_OP_SetControlPointPositionToTimeOfDayValue {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x80], // 0x1ec
        pub _: [u8; 0x14], // 0x26c
    }

    #[repr(C)]
    pub struct C_OP_DecayMaintainCount {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x8], // 0x1e8
        pub _: [u8; 0x8], // 0x1f0
        pub _: [u8; 0x8], // 0x1f8
        pub _: [u8; 0x178], // 0x200
        pub _: [u8; 0x8], // 0x378
    }

    #[repr(C)]
    pub struct C_INIT_RandomModelSequence {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x100], // 0x1e8
        pub _: [u8; 0x100], // 0x2e8
        pub _: [u8; 0x8], // 0x3e8
    }

    #[repr(C)]
    pub struct C_OP_ExternalGameImpulseForce {
        pub pad_0: [u8; 0x1f0], // 0x0
        pub _: [u8; 0x178], // 0x1f0
        pub _: [u8; 0x1], // 0x368
        pub _: [u8; 0x1], // 0x369
        pub _: [u8; 0x1], // 0x36a
        pub _: [u8; 0x5], // 0x36b
    }

    #[repr(C)]
    pub struct C_OP_RemapAverageHitboxSpeedtoCP {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x178], // 0x1f8
        pub _: [u8; 0x178], // 0x370
        pub _: [u8; 0x178], // 0x4e8
        pub _: [u8; 0x178], // 0x660
        pub _: [u8; 0x8], // 0x7d8
        pub _: [u8; 0x6d8], // 0x7e0
        pub _: [u8; 0x80], // 0xeb8
    }

    #[repr(C)]
    pub struct C_INIT_RandomAlpha {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0xc], // 0x1f0
        pub _: [u8; 0x4], // 0x1fc
    }

    #[repr(C)]
    pub struct C_OP_NormalizeVector {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
    }

    #[repr(C)]
    pub struct C_OP_FadeInSimple {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
    }

    #[repr(C)]
    pub struct C_OP_RepeatedTriggerChildGroup {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x8], // 0x1e8
        pub _: [u8; 0x178], // 0x1f0
        pub _: [u8; 0x178], // 0x368
        pub _: [u8; 0x178], // 0x4e0
        pub _: [u8; 0x8], // 0x658
    }

    #[repr(C)]
    pub struct C_OP_RemapVelocityToVector {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x8], // 0x1e8
    }

    #[repr(C)]
    pub struct C_INIT_SetHitboxToClosest {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x6d8], // 0x1f0
        pub _: [u8; 0x80], // 0x8c8
        pub _: [u8; 0x1], // 0x948
        pub _: [u8; 0x3], // 0x949
        pub _: [u8; 0x4], // 0x94c
        pub _: [u8; 0x178], // 0x950
        pub _: [u8; 0x8], // 0xac8
    }

    #[repr(C)]
    pub struct C_INIT_RingWave {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x68], // 0x1e8
        pub _: [u8; 0x178], // 0x250
        pub _: [u8; 0x178], // 0x3c8
        pub _: [u8; 0x178], // 0x540
        pub _: [u8; 0x178], // 0x6b8
        pub _: [u8; 0x178], // 0x830
        pub _: [u8; 0x178], // 0x9a8
        pub _: [u8; 0x178], // 0xb20
        pub _: [u8; 0x178], // 0xc98
        pub _: [u8; 0x1], // 0xe10
        pub _: [u8; 0x7], // 0xe11
    }

    #[repr(C)]
    pub struct C_INIT_RandomTrailLength {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x8], // 0x1f0
    }

    #[repr(C)]
    pub struct C_OP_RemapScalar {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x8], // 0x1f8
    }

    #[repr(C)]
    pub struct C_OP_DistanceBetweenTransforms {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
        pub _: [u8; 0x68], // 0x1e8
        pub _: [u8; 0x68], // 0x250
        pub _: [u8; 0x178], // 0x2b8
        pub _: [u8; 0x178], // 0x430
        pub _: [u8; 0x178], // 0x5a8
        pub _: [u8; 0x178], // 0x720
        pub _: [u8; 0x4], // 0x898
        pub _: [u8; 0x4], // 0x89c
        pub _: [u8; 0x80], // 0x8a0
        pub _: [u8; 0x4], // 0x920
        pub _: [u8; 0x4], // 0x924
        pub _: [u8; 0x8], // 0x928
    }

    #[repr(C)]
    pub struct C_OP_DecayOffscreen {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x178], // 0x1e0
    }

    #[repr(C)]
    pub struct C_INIT_CreateSequentialPath {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x1], // 0x1f0
        pub _: [u8; 0x1], // 0x1f1
        pub _: [u8; 0xe], // 0x1f2
        pub _: [u8; 0x40], // 0x200
    }

    #[repr(C)]
    pub struct C_OP_EndCapTimedDecay {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x178], // 0x1e0
    }

    #[repr(C)]
    pub struct C_OP_RemapDistanceToLineSegmentBase {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x8], // 0x1f0
    }

    #[repr(C)]
    pub struct C_OP_ContinuousEmitter {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x178], // 0x360
        pub _: [u8; 0x178], // 0x4d8
        pub _: [u8; 0x4], // 0x650
        pub _: [u8; 0x4], // 0x654
        pub _: [u8; 0x4], // 0x658
        pub _: [u8; 0x4], // 0x65c
        pub _: [u8; 0x8], // 0x660
        pub _: [u8; 0x8], // 0x668
        pub _: [u8; 0x4], // 0x670
        pub _: [u8; 0x1], // 0x674
        pub _: [u8; 0xb], // 0x675
    }

    #[repr(C)]
    pub struct C_OP_OscillateVectorSimple {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0xc], // 0x1e0
        pub _: [u8; 0xc], // 0x1ec
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x4], // 0x200
        pub _: [u8; 0x4], // 0x204
    }

    #[repr(C)]
    pub struct C_INIT_SequenceLifeTime {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x8], // 0x1e8
    }

    #[repr(C)]
    pub struct C_INIT_MoveBetweenPoints {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x178], // 0x360
        pub _: [u8; 0x178], // 0x4d8
        pub _: [u8; 0x178], // 0x650
        pub _: [u8; 0x178], // 0x7c8
        pub _: [u8; 0x4], // 0x940
        pub _: [u8; 0x4], // 0x944
    }

    #[repr(C)]
    pub struct C_INIT_StatusEffectTf {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x4], // 0x200
        pub _: [u8; 0x4], // 0x204
        pub _: [u8; 0x4], // 0x208
        pub _: [u8; 0x4], // 0x20c
        pub _: [u8; 0x4], // 0x210
        pub _: [u8; 0x4], // 0x214
        pub _: [u8; 0x4], // 0x218
        pub _: [u8; 0x4], // 0x21c
        pub _: [u8; 0x4], // 0x220
        pub _: [u8; 0x4], // 0x224
        pub _: [u8; 0x4], // 0x228
        pub _: [u8; 0x4], // 0x22c
        pub _: [u8; 0x4], // 0x230
        pub _: [u8; 0x4], // 0x234
    }

    #[repr(C)]
    pub struct C_OP_SetUserEvent {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x178], // 0x1e0
        pub _: [u8; 0x178], // 0x358
        pub _: [u8; 0x8], // 0x4d0
        pub _: [u8; 0x178], // 0x4d8
        pub _: [u8; 0x8], // 0x650
    }

    #[repr(C)]
    pub struct C_OP_QuantizeFloat {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x178], // 0x1e0
        pub _: [u8; 0x28], // 0x358
    }

    #[repr(C)]
    pub struct C_OP_BasicMovement {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x6d8], // 0x1e0
        pub _: [u8; 0x178], // 0x8b8
        pub _: [u8; 0x470], // 0xa30
        pub _: [u8; 0x4], // 0xea0
        pub _: [u8; 0x4], // 0xea4
    }

    #[repr(C)]
    pub struct C_INIT_RandomNamedModelElement {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x8], // 0x1e8
        pub _: [u8; 0x18], // 0x1f0
        pub _: [u8; 0x1], // 0x208
        pub _: [u8; 0x1], // 0x209
        pub _: [u8; 0x2], // 0x20a
        pub _: [u8; 0x4], // 0x20c
    }

    #[repr(C)]
    pub struct C_INIT_InitFromParentKilled {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x84], // 0x1ec
    }

    #[repr(C)]
    pub struct C_OP_Callback {
        pub pad_0: [u8; 0x230], // 0x0
    }

    #[repr(C)]
    pub struct CParticleFunction {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x178], // 0x8
        pub _: [u8; 0x4], // 0x180
        pub _: [u8; 0x4], // 0x184
        pub _: [u8; 0x4], // 0x188
        pub _: [u8; 0x4], // 0x18c
        pub _: [u8; 0x4], // 0x190
        pub _: [u8; 0x4], // 0x194
        pub _: [u8; 0x4], // 0x198
        pub _: [u8; 0x4], // 0x19c
        pub _: [u8; 0x4], // 0x1a0
        pub _: [u8; 0x4], // 0x1a4
        pub _: [u8; 0x4], // 0x1a8
        pub _: [u8; 0x4], // 0x1ac
        pub _: [u8; 0x4], // 0x1b0
        pub _: [u8; 0x6], // 0x1b4
        pub _: [u8; 0x6], // 0x1ba
        pub _: [u8; 0x20], // 0x1c0
    }

    #[repr(C)]
    pub struct C_OP_GlobalLight {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x1], // 0x1e4
        pub _: [u8; 0x3], // 0x1e5
    }

    #[repr(C)]
    pub struct C_INIT_OffsetVectorToVector {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0xc], // 0x1f0
        pub _: [u8; 0xc], // 0x1fc
        pub _: [u8; 0x8], // 0x208
    }

    #[repr(C)]
    pub struct C_OP_SetPerChildControlPointFromAttribute {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
    }

    #[repr(C)]
    pub struct C_OP_SetParentControlPointsToChildCP {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x8], // 0x1f8
    }

    #[repr(C)]
    pub struct C_OP_BoxConstraint {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x6d8], // 0x1e0
        pub _: [u8; 0x6d8], // 0x8b8
        pub _: [u8; 0x4], // 0xf90
        pub _: [u8; 0x1], // 0xf94
        pub _: [u8; 0x3], // 0xf95
    }

    #[repr(C)]
    pub struct C_INIT_CreatePhyllotaxis {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x4], // 0x200
        pub _: [u8; 0x4], // 0x204
        pub _: [u8; 0x4], // 0x208
        pub _: [u8; 0x4], // 0x20c
        pub _: [u8; 0x4], // 0x210
        pub _: [u8; 0x1], // 0x214
        pub _: [u8; 0x1], // 0x215
        pub _: [u8; 0x2], // 0x216
    }

    #[repr(C)]
    pub struct C_OP_AttractToControlPoint {
        pub pad_0: [u8; 0x1f0], // 0x0
        pub _: [u8; 0x10], // 0x1f0
        pub _: [u8; 0x178], // 0x200
        pub _: [u8; 0x178], // 0x378
        pub _: [u8; 0x8], // 0x4f0
        pub _: [u8; 0x68], // 0x4f8
        pub _: [u8; 0x178], // 0x560
        pub _: [u8; 0x8], // 0x6d8
    }

    #[repr(C)]
    pub struct C_INIT_RandomLifeTime {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x8], // 0x1f0
    }

    #[repr(C)]
    pub struct C_INIT_RemapParticleCountToNamedModelSequenceScalar {
        pub pad_0: [u8; 0x238], // 0x0
    }

    #[repr(C)]
    pub struct C_INIT_VelocityRadialRandom {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x6d8], // 0x1f0
        pub _: [u8; 0x6d8], // 0x8c8
        pub _: [u8; 0x178], // 0xfa0
        pub _: [u8; 0x178], // 0x1118
        pub _: [u8; 0xd], // 0x1290
        pub _: [u8; 0x3], // 0x129d
    }

    #[repr(C)]
    pub struct C_INIT_RandomRadius {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x8], // 0x1f0
    }

    #[repr(C)]
    pub struct C_OP_Orient2DRelToCP {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
    }

    #[repr(C)]
    pub struct TextureControls_t {
        pub _: [u8; 0x178], // 0x0
        pub _: [u8; 0x178], // 0x178
        pub _: [u8; 0x178], // 0x2f0
        pub _: [u8; 0x178], // 0x468
        pub _: [u8; 0x178], // 0x5e0
        pub _: [u8; 0x178], // 0x758
        pub _: [u8; 0x178], // 0x8d0
        pub _: [u8; 0x1], // 0xa48
        pub _: [u8; 0x3], // 0xa49
        pub _: [u8; 0x4], // 0xa4c
        pub _: [u8; 0x4], // 0xa50
        pub _: [u8; 0x4], // 0xa54
        pub _: [u8; 0x4], // 0xa58
        pub _: [u8; 0x4], // 0xa5c
        pub _: [u8; 0x4], // 0xa60
        pub _: [u8; 0x4], // 0xa64
    }

    #[repr(C)]
    pub struct ControlPointReference_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0xc], // 0x4
        pub _: [u8; 0x4], // 0x10
    }

    #[repr(C)]
    pub struct C_OP_SetControlPointToVectorExpression {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x6d8], // 0x1f0
        pub _: [u8; 0x6d8], // 0x8c8
        pub _: [u8; 0x178], // 0xfa0
        pub _: [u8; 0x8], // 0x1118
    }

    #[repr(C)]
    pub struct C_OP_LightningSnapshotGenerator {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x8], // 0x1f0
        pub _: [u8; 0x178], // 0x1f8
        pub _: [u8; 0x178], // 0x370
        pub _: [u8; 0x178], // 0x4e8
        pub _: [u8; 0x178], // 0x660
        pub _: [u8; 0x178], // 0x7d8
        pub _: [u8; 0x178], // 0x950
        pub _: [u8; 0x178], // 0xac8
        pub _: [u8; 0x178], // 0xc40
        pub _: [u8; 0x8], // 0xdb8
        pub _: [u8; 0x178], // 0xdc0
        pub _: [u8; 0x8], // 0xf38
        pub _: [u8; 0x178], // 0xf40
        pub _: [u8; 0x178], // 0x10b8
        pub _: [u8; 0x8], // 0x1230
        pub _: [u8; 0x178], // 0x1238
        pub _: [u8; 0x178], // 0x13b0
        pub _: [u8; 0x178], // 0x1528
    }

    #[repr(C)]
    pub struct C_OP_RemapNamedModelMeshGroupOnceTimed {
        pub pad_0: [u8; 0x240], // 0x0
    }

    #[repr(C)]
    pub struct C_INIT_RemapQAnglesToRotation {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x68], // 0x1e8
    }

    #[repr(C)]
    pub struct C_INIT_PositionWarp {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x6d8], // 0x1e8
        pub _: [u8; 0x6d8], // 0x8c0
        pub _: [u8; 0x4], // 0xf98
        pub _: [u8; 0x4], // 0xf9c
        pub _: [u8; 0x4], // 0xfa0
        pub _: [u8; 0x4], // 0xfa4
        pub _: [u8; 0x4], // 0xfa8
        pub _: [u8; 0x4], // 0xfac
        pub _: [u8; 0x1], // 0xfb0
        pub _: [u8; 0x7], // 0xfb1
    }

    #[repr(C)]
    pub struct C_OP_SetControlPointFieldToScalarExpression {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x8], // 0x1e8
        pub _: [u8; 0x178], // 0x1f0
        pub _: [u8; 0x178], // 0x368
        pub _: [u8; 0x178], // 0x4e0
        pub _: [u8; 0x4], // 0x658
        pub _: [u8; 0x4], // 0x65c
        pub _: [u8; 0x178], // 0x660
    }

    #[repr(C)]
    pub struct C_OP_CreateParticleSystemRenderer {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x8], // 0x230
        pub _: [u8; 0x8], // 0x238
        pub _: [u8; 0x10], // 0x240
        pub _: [u8; 0x8], // 0x250
        pub _: [u8; 0x6d8], // 0x258
    }

    #[repr(C)]
    pub struct CParticleFunctionForce {
        pub pad_0: [u8; 0x1f0], // 0x0
    }

    #[repr(C)]
    pub struct C_INIT_RandomVectorComponent {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
    }

    #[repr(C)]
    pub struct C_OP_InheritFromParentParticles {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
    }

    #[repr(C)]
    pub struct C_INIT_SetVectorAttributeToVectorExpression {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x8], // 0x1e8
        pub _: [u8; 0x6d8], // 0x1f0
        pub _: [u8; 0x6d8], // 0x8c8
        pub _: [u8; 0x178], // 0xfa0
        pub _: [u8; 0x4], // 0x1118
        pub _: [u8; 0x4], // 0x111c
        pub _: [u8; 0x70], // 0x1120
    }

    #[repr(C)]
    pub struct C_OP_RemapTransformVisibilityToVector {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
        pub _: [u8; 0x68], // 0x1e8
        pub _: [u8; 0x4], // 0x250
        pub _: [u8; 0x4], // 0x254
        pub _: [u8; 0x4], // 0x258
        pub _: [u8; 0xc], // 0x25c
        pub _: [u8; 0xc], // 0x268
        pub _: [u8; 0x4], // 0x274
    }

    #[repr(C)]
    pub struct C_OP_DirectionBetweenVecsToVec {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
        pub _: [u8; 0x6d8], // 0x1e8
        pub _: [u8; 0x6d8], // 0x8c0
    }

    #[repr(C)]
    pub struct C_OP_MovementLoopInsideSphere {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x6d8], // 0x360
        pub _: [u8; 0x8], // 0xa38
    }

    #[repr(C)]
    pub struct C_OP_RenderSimpleModelCollection {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x8], // 0x230
        pub _: [u8; 0x8], // 0x238
        pub _: [u8; 0x60], // 0x240
        pub _: [u8; 0x178], // 0x2a0
        pub _: [u8; 0x1], // 0x418
        pub _: [u8; 0x1], // 0x419
        pub _: [u8; 0x6], // 0x41a
        pub _: [u8; 0x178], // 0x420
        pub _: [u8; 0x18], // 0x598
    }

    #[repr(C)]
    pub struct C_OP_QuantizeCPComponent {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x4], // 0x360
        pub _: [u8; 0x4], // 0x364
        pub _: [u8; 0x178], // 0x368
    }

    #[repr(C)]
    pub struct C_OP_PlayEndCapWhenFinished {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x1], // 0x1e8
        pub _: [u8; 0x7], // 0x1e9
    }

    #[repr(C)]
    pub struct C_INIT_InitFloatCollection {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x8], // 0x360
    }

    #[repr(C)]
    pub struct CPathParameters {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0xc], // 0x18
        pub _: [u8; 0xc], // 0x24
        pub _: [u8; 0x10], // 0x30
    }

    #[repr(C)]
    pub struct C_OP_RemapScalarEndCap {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
    }

    #[repr(C)]
    pub struct C_INIT_CreateFromPlaneCache {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0xc], // 0x1e8
        pub _: [u8; 0xd], // 0x1f4
        pub _: [u8; 0x7], // 0x201
    }

    #[repr(C)]
    pub struct C_OP_LazyCullCompareFloat {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x178], // 0x1e0
        pub _: [u8; 0x178], // 0x358
        pub _: [u8; 0x178], // 0x4d0
    }

    #[repr(C)]
    pub struct C_OP_ControlPointToRadialScreenSpace {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0xc], // 0x1ec
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x8], // 0x200
    }

    #[repr(C)]
    pub struct C_OP_SpinUpdate {
        pub pad_0: [u8; 0x1e0], // 0x0
    }

    #[repr(C)]
    pub struct C_INIT_NormalOffset {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0xc], // 0x1e8
        pub _: [u8; 0xc], // 0x1f4
        pub _: [u8; 0x4], // 0x200
        pub _: [u8; 0x1], // 0x204
        pub _: [u8; 0x3], // 0x205
    }

    #[repr(C)]
    pub struct C_OP_RemapDistanceToLineSegmentToVector {
        pub pad_0: [u8; 0x1f8], // 0x0
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0xc], // 0x1fc
        pub _: [u8; 0x10], // 0x208
    }

    #[repr(C)]
    pub struct C_OP_RenderAsModels {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x1c], // 0x230
        pub _: [u8; 0x4], // 0x24c
        pub _: [u8; 0x1], // 0x250
        pub _: [u8; 0x3], // 0x251
        pub _: [u8; 0x4], // 0x254
        pub _: [u8; 0x4], // 0x258
        pub _: [u8; 0x4], // 0x25c
        pub _: [u8; 0x8], // 0x260
    }

    #[repr(C)]
    pub struct C_INIT_CreationNoise {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x1], // 0x1ec
        pub _: [u8; 0x3], // 0x1ed
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x4], // 0x200
        pub _: [u8; 0xc], // 0x204
        pub _: [u8; 0x8], // 0x210
    }

    #[repr(C)]
    pub struct C_OP_Spin {
        pub pad_0: [u8; 0x1f8], // 0x0
    }

    #[repr(C)]
    pub struct C_OP_GameLiquidSpill {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x178], // 0x230
        pub _: [u8; 0x178], // 0x3a8
        pub _: [u8; 0x178], // 0x520
        pub _: [u8; 0x4], // 0x698
        pub _: [u8; 0x4], // 0x69c
    }

    #[repr(C)]
    pub struct C_OP_InstantaneousEmitter {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x178], // 0x360
        pub _: [u8; 0x4], // 0x4d8
        pub _: [u8; 0x4], // 0x4dc
        pub _: [u8; 0x178], // 0x4e0
        pub _: [u8; 0x4], // 0x658
        pub _: [u8; 0x4], // 0x65c
        pub _: [u8; 0x8], // 0x660
    }

    #[repr(C)]
    pub struct C_OP_ConstrainLineLength {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
    }

    #[repr(C)]
    pub struct C_INIT_LifespanFromVelocity {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0xc], // 0x1e8
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x8], // 0x200
        pub _: [u8; 0x80], // 0x208
        pub _: [u8; 0x10], // 0x288
        pub _: [u8; 0x8], // 0x298
    }

    #[repr(C)]
    pub struct CBaseTrailRenderer {
        pub pad_0: [u8; 0x2ed8], // 0x0
        pub _: [u8; 0x4], // 0x2ed8
        pub _: [u8; 0x4], // 0x2edc
        pub _: [u8; 0x4], // 0x2ee0
        pub _: [u8; 0x4], // 0x2ee4
        pub _: [u8; 0x178], // 0x2ee8
        pub _: [u8; 0x178], // 0x3060
        pub _: [u8; 0x178], // 0x31d8
        pub _: [u8; 0x8], // 0x3350
    }

    #[repr(C)]
    pub struct C_INIT_VelocityFromCP {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x6d8], // 0x1e8
        pub _: [u8; 0x68], // 0x8c0
        pub _: [u8; 0x4], // 0x928
        pub _: [u8; 0x4], // 0x92c
    }

    #[repr(C)]
    pub struct C_OP_SetControlPointOrientation {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x2], // 0x1e8
        pub _: [u8; 0x1], // 0x1ea
        pub _: [u8; 0x1], // 0x1eb
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0xc], // 0x1f4
        pub _: [u8; 0x10], // 0x200
        pub _: [u8; 0x178], // 0x210
    }

    #[repr(C)]
    pub struct C_OP_MovementSkinnedPositionFromCPSnapshot {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x1], // 0x1f0
        pub _: [u8; 0x3], // 0x1f1
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x178], // 0x1f8
        pub _: [u8; 0x178], // 0x370
        pub _: [u8; 0x178], // 0x4e8
        pub _: [u8; 0x178], // 0x660
        pub _: [u8; 0x178], // 0x7d8
    }

    #[repr(C)]
    pub struct C_OP_MultiSegmentDisplaySnapshotGenerator {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x8], // 0x1f0
        pub _: [u8; 0x8], // 0x1f8
        pub _: [u8; 0x178], // 0x200
        pub _: [u8; 0x178], // 0x378
        pub _: [u8; 0x18], // 0x4f0
        pub _: [u8; 0x6d8], // 0x508
        pub _: [u8; 0x6d8], // 0xbe0
        pub _: [u8; 0x178], // 0x12b8
        pub _: [u8; 0x178], // 0x1430
        pub _: [u8; 0x178], // 0x15a8
        pub _: [u8; 0x178], // 0x1720
        pub _: [u8; 0x8], // 0x1898
        pub _: [u8; 0x178], // 0x18a0
    }

    #[repr(C)]
    pub struct C_OP_OscillateVector {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0xc], // 0x1e0
        pub _: [u8; 0xc], // 0x1ec
        pub _: [u8; 0xc], // 0x1f8
        pub _: [u8; 0xc], // 0x204
        pub _: [u8; 0x4], // 0x210
        pub _: [u8; 0x1], // 0x214
        pub _: [u8; 0x1], // 0x215
        pub _: [u8; 0x2], // 0x216
        pub _: [u8; 0x4], // 0x218
        pub _: [u8; 0x4], // 0x21c
        pub _: [u8; 0x4], // 0x220
        pub _: [u8; 0x4], // 0x224
        pub _: [u8; 0x178], // 0x228
        pub _: [u8; 0x178], // 0x3a0
        pub _: [u8; 0x178], // 0x518
    }

    #[repr(C)]
    pub struct C_OP_PositionLock {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x68], // 0x1e0
        pub _: [u8; 0x4], // 0x248
        pub _: [u8; 0x4], // 0x24c
        pub _: [u8; 0x4], // 0x250
        pub _: [u8; 0x4], // 0x254
        pub _: [u8; 0x4], // 0x258
        pub _: [u8; 0x4], // 0x25c
        pub _: [u8; 0x8], // 0x260
        pub _: [u8; 0x178], // 0x268
        pub _: [u8; 0x4], // 0x3e0
        pub _: [u8; 0x4], // 0x3e4
        pub _: [u8; 0x8], // 0x3e8
        pub _: [u8; 0x6d8], // 0x3f0
        pub _: [u8; 0x4], // 0xac8
        pub _: [u8; 0x4], // 0xacc
    }

    #[repr(C)]
    pub struct C_OP_RenderVRHapticEvent {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x4], // 0x230
        pub _: [u8; 0x4], // 0x234
        pub _: [u8; 0x8], // 0x238
        pub _: [u8; 0x178], // 0x240
    }

    #[repr(C)]
    pub struct C_OP_SetControlPointToImpactPoint {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x8], // 0x1f0
        pub _: [u8; 0x178], // 0x1f8
        pub _: [u8; 0x4], // 0x370
        pub _: [u8; 0x4], // 0x374
        pub _: [u8; 0xc], // 0x378
        pub _: [u8; 0x80], // 0x384
        pub _: [u8; 0x4], // 0x404
        pub _: [u8; 0x1], // 0x408
        pub _: [u8; 0x1], // 0x409
        pub _: [u8; 0x6], // 0x40a
    }

    #[repr(C)]
    pub struct C_OP_InterpolateRadius {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x3c], // 0x1f4
    }

    #[repr(C)]
    pub struct C_OP_ReinitializeScalarEndCap {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x8], // 0x1e8
    }

    #[repr(C)]
    pub struct C_OP_TurbulenceForce {
        pub pad_0: [u8; 0x1f0], // 0x0
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0xc], // 0x200
        pub _: [u8; 0xc], // 0x20c
        pub _: [u8; 0xc], // 0x218
        pub _: [u8; 0xc], // 0x224
    }

    #[repr(C)]
    pub struct C_OP_RemapNamedModelElementOnceTimed {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
        pub _: [u8; 0x18], // 0x1e8
        pub _: [u8; 0x18], // 0x200
        pub _: [u8; 0x18], // 0x218
        pub _: [u8; 0x1], // 0x230
        pub _: [u8; 0x3], // 0x231
        pub _: [u8; 0x4], // 0x234
        pub _: [u8; 0x4], // 0x238
        pub _: [u8; 0x4], // 0x23c
    }

    #[repr(C)]
    pub struct C_OP_SetControlPointToPlayer {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0xc], // 0x1ec
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x4], // 0x200
        pub _: [u8; 0x4], // 0x204
    }

    #[repr(C)]
    pub struct C_OP_EndCapTimedFreeze {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x178], // 0x1e0
    }

    #[repr(C)]
    pub struct C_OP_RenderGpuImplicit {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x4], // 0x230
        pub _: [u8; 0x4], // 0x234
        pub _: [u8; 0x8], // 0x238
        pub _: [u8; 0x178], // 0x240
        pub _: [u8; 0x178], // 0x3b8
        pub _: [u8; 0x178], // 0x530
        pub _: [u8; 0x8], // 0x6a8
        pub _: [u8; 0x8], // 0x6b0
    }

    #[repr(C)]
    pub struct C_OP_SetRandomControlPointPosition {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x1], // 0x1e8
        pub _: [u8; 0x3], // 0x1e9
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x8], // 0x1f0
        pub _: [u8; 0x178], // 0x1f8
        pub _: [u8; 0xc], // 0x370
        pub _: [u8; 0xc], // 0x37c
        pub _: [u8; 0x178], // 0x388
    }

    #[repr(C)]
    pub struct C_OP_RenderVolumetricEmitter {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x8], // 0x230
        pub _: [u8; 0x4], // 0x238
        pub _: [u8; 0x4], // 0x23c
        pub _: [u8; 0x8], // 0x240
        pub _: [u8; 0x6d8], // 0x248
        pub _: [u8; 0x6d8], // 0x920
        pub _: [u8; 0x6d8], // 0xff8
        pub _: [u8; 0x178], // 0x16d0
        pub _: [u8; 0x178], // 0x1848
        pub _: [u8; 0x178], // 0x19c0
        pub _: [u8; 0x178], // 0x1b38
        pub _: [u8; 0x178], // 0x1cb0
        pub _: [u8; 0x178], // 0x1e28
        pub _: [u8; 0x178], // 0x1fa0
        pub _: [u8; 0x178], // 0x2118
    }

    #[repr(C)]
    pub struct C_OP_RemapTransformVisibilityToScalar {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
        pub _: [u8; 0x68], // 0x1e8
        pub _: [u8; 0x4], // 0x250
        pub _: [u8; 0x4], // 0x254
        pub _: [u8; 0x4], // 0x258
        pub _: [u8; 0x4], // 0x25c
        pub _: [u8; 0x4], // 0x260
        pub _: [u8; 0x4], // 0x264
    }

    #[repr(C)]
    pub struct C_OP_RemapControlPointDirectionToVector {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x8], // 0x1e8
    }

    #[repr(C)]
    pub struct C_OP_ScreenSpacePositionOfTarget {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x6d8], // 0x1e0
        pub _: [u8; 0x4], // 0x8b8
        pub _: [u8; 0x4], // 0x8bc
        pub _: [u8; 0x178], // 0x8c0
        pub _: [u8; 0x8], // 0xa38
    }

    #[repr(C)]
    pub struct CParticleFunctionOperator {
        pub pad_0: [u8; 0x1e0], // 0x0
    }

    #[repr(C)]
    pub struct C_OP_DragRelativeToPlane {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x178], // 0x1e0
        pub _: [u8; 0x178], // 0x358
        pub _: [u8; 0x8], // 0x4d0
        pub _: [u8; 0x6d8], // 0x4d8
        pub _: [u8; 0x8], // 0xbb0
    }

    #[repr(C)]
    pub struct C_OP_SetCPtoVector {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
    }

    #[repr(C)]
    pub struct C_INIT_RandomYaw {
        pub pad_0: [u8; 0x208], // 0x0
    }

    #[repr(C)]
    pub struct C_OP_SnapshotRigidSkinToBones {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x1], // 0x1e0
        pub _: [u8; 0x3], // 0x1e1
        pub _: [u8; 0x4], // 0x1e4
    }

    #[repr(C)]
    pub struct C_OP_SetSingleControlPointPosition {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x6d8], // 0x1f0
        pub _: [u8; 0x68], // 0x8c8
    }

    #[repr(C)]
    pub struct C_INIT_DistanceToNeighborCull {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x8], // 0x360
        pub _: [u8; 0x178], // 0x368
        pub _: [u8; 0x8], // 0x4e0
        pub _: [u8; 0x178], // 0x4e8
        pub _: [u8; 0x4], // 0x660
        pub _: [u8; 0x4], // 0x664
    }

    #[repr(C)]
    pub struct C_OP_RemapCPtoScalar {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x4], // 0x200
        pub _: [u8; 0x4], // 0x204
        pub _: [u8; 0x8], // 0x208
    }

    #[repr(C)]
    pub struct CParticleFunctionRenderer {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x48], // 0x1e0
        pub _: [u8; 0x8], // 0x228
    }

    #[repr(C)]
    pub struct CParticleSystemDefinition {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x18], // 0x28
        pub _: [u8; 0x18], // 0x40
        pub _: [u8; 0x18], // 0x58
        pub _: [u8; 0x18], // 0x70
        pub _: [u8; 0x18], // 0x88
        pub _: [u8; 0x18], // 0xa0
        pub _: [u8; 0xc0], // 0xb8
        pub _: [u8; 0xe0], // 0x178
        pub _: [u8; 0x4], // 0x258
        pub _: [u8; 0x4], // 0x25c
        pub _: [u8; 0x4], // 0x260
        pub _: [u8; 0xc], // 0x264
        pub _: [u8; 0xc], // 0x270
        pub _: [u8; 0x4], // 0x27c
        pub _: [u8; 0x4], // 0x280
        pub _: [u8; 0x1], // 0x284
        pub _: [u8; 0x3], // 0x285
        pub _: [u8; 0x8], // 0x288
        pub _: [u8; 0x18], // 0x290
        pub _: [u8; 0x4], // 0x2a8
        pub _: [u8; 0xc], // 0x2ac
        pub _: [u8; 0x4], // 0x2b8
        pub _: [u8; 0x4], // 0x2bc
        pub _: [u8; 0x4], // 0x2c0
        pub _: [u8; 0x4], // 0x2c4
        pub _: [u8; 0x4], // 0x2c8
        pub _: [u8; 0x4], // 0x2cc
        pub _: [u8; 0x8], // 0x2d0
        pub _: [u8; 0x8], // 0x2d8
        pub _: [u8; 0x8], // 0x2e0
        pub _: [u8; 0x4], // 0x2e8
        pub _: [u8; 0x4], // 0x2ec
        pub _: [u8; 0x8], // 0x2f0
        pub _: [u8; 0x8], // 0x2f8
        pub _: [u8; 0x8], // 0x300
        pub _: [u8; 0x8], // 0x308
        pub _: [u8; 0x8], // 0x310
        pub _: [u8; 0x4], // 0x318
        pub _: [u8; 0x4], // 0x31c
        pub _: [u8; 0x4], // 0x320
        pub _: [u8; 0x4], // 0x324
        pub _: [u8; 0x4], // 0x328
        pub _: [u8; 0x4], // 0x32c
        pub _: [u8; 0x4], // 0x330
        pub _: [u8; 0x4], // 0x334
        pub _: [u8; 0x4], // 0x338
        pub _: [u8; 0x4], // 0x33c
        pub _: [u8; 0x4], // 0x340
        pub _: [u8; 0x4], // 0x344
        pub _: [u8; 0x4], // 0x348
        pub _: [u8; 0x4], // 0x34c
        pub _: [u8; 0x4], // 0x350
        pub _: [u8; 0x4], // 0x354
        pub _: [u8; 0x1], // 0x358
        pub _: [u8; 0x1], // 0x359
        pub _: [u8; 0x1], // 0x35a
        pub _: [u8; 0x1], // 0x35b
        pub _: [u8; 0x4], // 0x35c
        pub _: [u8; 0x8], // 0x360
        pub _: [u8; 0x8], // 0x368
        pub _: [u8; 0x4], // 0x370
        pub _: [u8; 0x4], // 0x374
        pub _: [u8; 0x48], // 0x378
        pub _: [u8; 0x1d0], // 0x3c0
    }

    #[repr(C)]
    pub struct C_OP_RemapNamedModelMeshGroupEndCap {
        pub pad_0: [u8; 0x240], // 0x0
    }

    #[repr(C)]
    pub struct C_OP_PercentageBetweenTransformsVector {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0xc], // 0x1ec
        pub _: [u8; 0x10], // 0x1f8
        pub _: [u8; 0x68], // 0x208
        pub _: [u8; 0x68], // 0x270
        pub _: [u8; 0x4], // 0x2d8
        pub _: [u8; 0x1], // 0x2dc
        pub _: [u8; 0x3], // 0x2dd
    }

    #[repr(C)]
    pub struct C_OP_RenderScreenVelocityRotate {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x4], // 0x230
        pub _: [u8; 0x4], // 0x234
    }

    #[repr(C)]
    pub struct C_OP_UpdateLightSource {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
    }

    #[repr(C)]
    pub struct C_INIT_CreateWithinBox {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x6d8], // 0x1e8
        pub _: [u8; 0x6d8], // 0x8c0
        pub _: [u8; 0x4], // 0xf98
        pub _: [u8; 0x4], // 0xf9c
        pub _: [u8; 0x8], // 0xfa0
        pub _: [u8; 0x8], // 0xfa8
    }

    #[repr(C)]
    pub struct C_OP_ChooseRandomChildrenInGroup {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x8], // 0x1e8
        pub _: [u8; 0x178], // 0x1f0
    }

    #[repr(C)]
    pub struct C_OP_ControlpointLight {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x490], // 0x1e0
        pub _: [u8; 0x4], // 0x670
        pub _: [u8; 0x4], // 0x674
        pub _: [u8; 0x4], // 0x678
        pub _: [u8; 0x4], // 0x67c
        pub _: [u8; 0xc], // 0x680
        pub _: [u8; 0xc], // 0x68c
        pub _: [u8; 0xc], // 0x698
        pub _: [u8; 0xc], // 0x6a4
        pub _: [u8; 0x4], // 0x6b0
        pub _: [u8; 0x4], // 0x6b4
        pub _: [u8; 0x4], // 0x6b8
        pub _: [u8; 0x4], // 0x6bc
        pub _: [u8; 0x4], // 0x6c0
        pub _: [u8; 0x4], // 0x6c4
        pub _: [u8; 0x4], // 0x6c8
        pub _: [u8; 0x4], // 0x6cc
        pub _: [u8; 0x4], // 0x6d0
        pub _: [u8; 0x4], // 0x6d4
        pub _: [u8; 0x4], // 0x6d8
        pub _: [u8; 0x4], // 0x6dc
        pub _: [u8; 0x1], // 0x6e0
        pub _: [u8; 0x1], // 0x6e1
        pub _: [u8; 0x1], // 0x6e2
        pub _: [u8; 0x1], // 0x6e3
        pub _: [u8; 0x1], // 0x6e4
        pub _: [u8; 0x1], // 0x6e5
        pub _: [u8; 0x1], // 0x6e6
        pub _: [u8; 0x1], // 0x6e7
        pub _: [u8; 0x1], // 0x6e8
        pub _: [u8; 0x5], // 0x6e9
        pub _: [u8; 0x1], // 0x6ee
        pub _: [u8; 0x1], // 0x6ef
    }

    #[repr(C)]
    pub struct C_OP_VectorFieldSnapshot {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x8], // 0x1e8
        pub _: [u8; 0x178], // 0x1f0
        pub _: [u8; 0x6d8], // 0x368
        pub _: [u8; 0x4], // 0xa40
        pub _: [u8; 0x1], // 0xa44
        pub _: [u8; 0x3], // 0xa45
        pub _: [u8; 0x8], // 0xa48
    }

    #[repr(C)]
    pub struct C_OP_CylindricalDistanceToTransform {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x178], // 0x360
        pub _: [u8; 0x178], // 0x4d8
        pub _: [u8; 0x178], // 0x650
        pub _: [u8; 0x68], // 0x7c8
        pub _: [u8; 0x68], // 0x830
        pub _: [u8; 0x4], // 0x898
        pub _: [u8; 0x1], // 0x89c
        pub _: [u8; 0x1], // 0x89d
        pub _: [u8; 0x2], // 0x89e
    }

    #[repr(C)]
    pub struct C_INIT_PositionPlaceOnGround {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x178], // 0x360
        pub _: [u8; 0x6d8], // 0x4d8
        pub _: [u8; 0x80], // 0xbb0
        pub _: [u8; 0x10], // 0xc30
        pub _: [u8; 0x4], // 0xc40
        pub _: [u8; 0x4], // 0xc44
        pub _: [u8; 0x4], // 0xc48
        pub _: [u8; 0x1], // 0xc4c
        pub _: [u8; 0x3], // 0xc4d
        pub _: [u8; 0x4], // 0xc50
        pub _: [u8; 0x4], // 0xc54
        pub _: [u8; 0x4], // 0xc58
        pub _: [u8; 0x4], // 0xc5c
        pub _: [u8; 0x8], // 0xc60
    }

    #[repr(C)]
    pub struct C_INIT_RandomScalar {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
    }

    #[repr(C)]
    pub struct C_OP_RenderPostProcessing {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x178], // 0x230
        pub _: [u8; 0x8], // 0x3a8
        pub _: [u8; 0x8], // 0x3b0
    }

    #[repr(C)]
    pub struct C_OP_WorldTraceConstraint {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0xc], // 0x1e4
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x80], // 0x1fc
        pub _: [u8; 0x1], // 0x27c
        pub _: [u8; 0x1], // 0x27d
        pub _: [u8; 0x2], // 0x27e
        pub _: [u8; 0x4], // 0x280
        pub _: [u8; 0x4], // 0x284
        pub _: [u8; 0x4], // 0x288
        pub _: [u8; 0x4], // 0x28c
        pub _: [u8; 0x4], // 0x290
        pub _: [u8; 0x4], // 0x294
        pub _: [u8; 0x178], // 0x298
        pub _: [u8; 0x178], // 0x410
        pub _: [u8; 0x178], // 0x588
        pub _: [u8; 0x178], // 0x700
        pub _: [u8; 0x1], // 0x878
        pub _: [u8; 0x3], // 0x879
        pub _: [u8; 0x4], // 0x87c
        pub _: [u8; 0x1], // 0x880
        pub _: [u8; 0x3], // 0x881
        pub _: [u8; 0x4], // 0x884
        pub _: [u8; 0x178], // 0x888
        pub _: [u8; 0x4], // 0xa00
        pub _: [u8; 0x4], // 0xa04
    }

    #[repr(C)]
    pub struct C_OP_RenderBlobs {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x178], // 0x230
        pub _: [u8; 0x178], // 0x3a8
        pub _: [u8; 0x178], // 0x520
        pub _: [u8; 0x4], // 0x698
        pub _: [u8; 0x4], // 0x69c
        pub _: [u8; 0x8], // 0x6a0
        pub _: [u8; 0x30], // 0x6a8
        pub _: [u8; 0x8], // 0x6d8
    }

    #[repr(C)]
    pub struct C_OP_OscillateScalar {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x1], // 0x1f4
        pub _: [u8; 0x3], // 0x1f5
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x4], // 0x200
        pub _: [u8; 0x4], // 0x204
        pub _: [u8; 0x4], // 0x208
        pub _: [u8; 0x4], // 0x20c
    }

    #[repr(C)]
    pub struct C_OP_FadeOut {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x34], // 0x1ec
        pub _: [u8; 0x1], // 0x220
        pub _: [u8; 0xf], // 0x221
    }

    #[repr(C)]
    pub struct C_OP_WaterImpulseRenderer {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x6d8], // 0x230
        pub _: [u8; 0x178], // 0x908
        pub _: [u8; 0x178], // 0xa80
        pub _: [u8; 0x178], // 0xbf8
        pub _: [u8; 0x178], // 0xd70
        pub _: [u8; 0x178], // 0xee8
        pub _: [u8; 0x4], // 0x1060
        pub _: [u8; 0x4], // 0x1064
    }

    #[repr(C)]
    pub struct C_INIT_RandomSequence {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x1], // 0x1f0
        pub _: [u8; 0x7], // 0x1f1
        pub _: [u8; 0x38], // 0x1f8
    }

    #[repr(C)]
    pub struct C_OP_RampScalarSplineSimple {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x28], // 0x1e8
        pub _: [u8; 0x4], // 0x210
        pub _: [u8; 0xc], // 0x214
    }

    #[repr(C)]
    pub struct C_INIT_DistanceCull {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x8], // 0x1e8
        pub _: [u8; 0x178], // 0x1f0
        pub _: [u8; 0x8], // 0x368
    }

    #[repr(C)]
    pub struct C_OP_CollideWithParentParticles {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x178], // 0x1e0
        pub _: [u8; 0x178], // 0x358
    }

    #[repr(C)]
    pub struct C_INIT_InitFromVectorFieldSnapshot {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x6d8], // 0x1f8
    }

    #[repr(C)]
    pub struct C_OP_SetVectorAttributeToVectorExpression {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
        pub _: [u8; 0x6d8], // 0x1e8
        pub _: [u8; 0x6d8], // 0x8c0
        pub _: [u8; 0x178], // 0xf98
        pub _: [u8; 0x4], // 0x1110
        pub _: [u8; 0x4], // 0x1114
        pub _: [u8; 0x68], // 0x1118
    }

    #[repr(C)]
    pub struct C_INIT_AddVectorToVector {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0xc], // 0x1e8
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0xc], // 0x1fc
        pub _: [u8; 0xc], // 0x208
        pub _: [u8; 0xc], // 0x214
    }

    #[repr(C)]
    pub struct C_INIT_RemapInitialVisibilityScalar {
        pub pad_0: [u8; 0x1ec], // 0x0
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
    }

    #[repr(C)]
    pub struct C_OP_RemapTransformOrientationToYaw {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x68], // 0x1e0
        pub _: [u8; 0x4], // 0x248
        pub _: [u8; 0x4], // 0x24c
        pub _: [u8; 0x8], // 0x250
    }

    #[repr(C)]
    pub struct C_OP_RenderStatusEffect {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x8], // 0x230
        pub _: [u8; 0x8], // 0x238
        pub _: [u8; 0x8], // 0x240
        pub _: [u8; 0x8], // 0x248
        pub _: [u8; 0x8], // 0x250
        pub _: [u8; 0x8], // 0x258
        pub _: [u8; 0x8], // 0x260
    }

    #[repr(C)]
    pub struct C_OP_RandomForce {
        pub pad_0: [u8; 0x1f0], // 0x0
        pub _: [u8; 0xc], // 0x1f0
        pub _: [u8; 0xc], // 0x1fc
    }

    #[repr(C)]
    pub struct C_OP_RemapParticleCountOnScalarEndCap {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x8], // 0x1f8
    }

    #[repr(C)]
    pub struct ParticlePreviewState_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x18], // 0x30
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x1], // 0x50
        pub _: [u8; 0x1], // 0x51
        pub _: [u8; 0x1], // 0x52
        pub _: [u8; 0x1], // 0x53
        pub _: [u8; 0x1], // 0x54
        pub _: [u8; 0x3], // 0x55
        pub _: [u8; 0xc], // 0x58
        pub _: [u8; 0xc], // 0x64
    }

    #[repr(C)]
    pub struct C_OP_LocalAccelerationForce {
        pub pad_0: [u8; 0x1f0], // 0x0
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x6d8], // 0x1f8
    }

    #[repr(C)]
    pub struct C_OP_ModelCull {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x1], // 0x1e4
        pub _: [u8; 0x1], // 0x1e5
        pub _: [u8; 0x1], // 0x1e6
        pub _: [u8; 0x81], // 0x1e7
    }

    #[repr(C)]
    pub struct C_OP_SetFloat {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x178], // 0x1e0
        pub _: [u8; 0x4], // 0x358
        pub _: [u8; 0x4], // 0x35c
        pub _: [u8; 0x1b0], // 0x360
    }

    #[repr(C)]
    pub struct C_INIT_RemapTransformToVector {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0xc], // 0x1ec
        pub _: [u8; 0xc], // 0x1f8
        pub _: [u8; 0xc], // 0x204
        pub _: [u8; 0x10], // 0x210
        pub _: [u8; 0x68], // 0x220
        pub _: [u8; 0x68], // 0x288
        pub _: [u8; 0x4], // 0x2f0
        pub _: [u8; 0x4], // 0x2f4
        pub _: [u8; 0x4], // 0x2f8
        pub _: [u8; 0x1], // 0x2fc
        pub _: [u8; 0x3], // 0x2fd
        pub _: [u8; 0x8], // 0x300
    }

    #[repr(C)]
    pub struct C_OP_ScreenSpaceDistanceToEdge {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x178], // 0x360
        pub _: [u8; 0x28], // 0x4d8
    }

    #[repr(C)]
    pub struct C_OP_RenderStatusEffectTf {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x8], // 0x230
        pub _: [u8; 0x8], // 0x238
        pub _: [u8; 0x8], // 0x240
        pub _: [u8; 0x8], // 0x248
        pub _: [u8; 0x8], // 0x250
        pub _: [u8; 0x8], // 0x258
        pub _: [u8; 0x8], // 0x260
    }

    #[repr(C)]
    pub struct C_OP_RemapDistanceToLineSegmentToScalar {
        pub pad_0: [u8; 0x1f8], // 0x0
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x8], // 0x200
    }

    #[repr(C)]
    pub struct C_OP_RemapVectortoCP {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x8], // 0x1e8
    }

    #[repr(C)]
    pub struct C_OP_SetFromCPSnapshot {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
        pub _: [u8; 0x8], // 0x1e8
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x1], // 0x1fc
        pub _: [u8; 0x3], // 0x1fd
        pub _: [u8; 0x8], // 0x200
        pub _: [u8; 0x178], // 0x208
        pub _: [u8; 0x178], // 0x380
        pub _: [u8; 0x178], // 0x4f8
        pub _: [u8; 0x1], // 0x670
        pub _: [u8; 0x7], // 0x671
    }

    #[repr(C)]
    pub struct C_OP_DistanceBetweenCPsToCP {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x4], // 0x200
        pub _: [u8; 0x4], // 0x204
        pub _: [u8; 0x4], // 0x208
        pub _: [u8; 0x4], // 0x20c
        pub _: [u8; 0x4], // 0x210
        pub _: [u8; 0x1], // 0x214
        pub _: [u8; 0x83], // 0x215
        pub _: [u8; 0x4], // 0x298
        pub _: [u8; 0x4], // 0x29c
    }

    #[repr(C)]
    pub struct C_OP_SetControlPointToHand {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0xc], // 0x1f0
        pub _: [u8; 0x4], // 0x1fc
    }

    #[repr(C)]
    pub struct C_OP_ConstrainDistanceToPath {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x40], // 0x1f0
        pub _: [u8; 0x4], // 0x230
        pub _: [u8; 0x4], // 0x234
        pub _: [u8; 0x8], // 0x238
    }

    #[repr(C)]
    pub struct C_OP_DistanceCull {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0xc], // 0x1e4
        pub _: [u8; 0x178], // 0x1f0
        pub _: [u8; 0x4], // 0x368
        pub _: [u8; 0x4], // 0x36c
    }

    #[repr(C)]
    pub struct C_INIT_CreateAlongPath {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x180], // 0x360
        pub _: [u8; 0x40], // 0x4e0
        pub _: [u8; 0x4], // 0x520
        pub _: [u8; 0xc], // 0x524
        pub _: [u8; 0x10], // 0x530
    }

    #[repr(C)]
    pub struct C_OP_GameDecalRenderer {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x8], // 0x230
        pub _: [u8; 0x8], // 0x238
        pub _: [u8; 0x8], // 0x240
        pub _: [u8; 0x8], // 0x248
        pub _: [u8; 0x6d8], // 0x250
        pub _: [u8; 0x6d8], // 0x928
        pub _: [u8; 0x178], // 0x1000
        pub _: [u8; 0x178], // 0x1178
        pub _: [u8; 0x178], // 0x12f0
        pub _: [u8; 0x178], // 0x1468
        pub _: [u8; 0x6d8], // 0x15e0
        pub _: [u8; 0x1], // 0x1cb8
        pub _: [u8; 0x1], // 0x1cb9
        pub _: [u8; 0x1], // 0x1cba
        pub _: [u8; 0x1], // 0x1cbb
        pub _: [u8; 0x4], // 0x1cbc
    }

    #[repr(C)]
    pub struct C_OP_SetControlPointsToModelParticles {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x80], // 0x1e0
        pub _: [u8; 0x80], // 0x260
        pub _: [u8; 0x4], // 0x2e0
        pub _: [u8; 0x4], // 0x2e4
        pub _: [u8; 0x4], // 0x2e8
        pub _: [u8; 0x1], // 0x2ec
        pub _: [u8; 0x3], // 0x2ed
    }

    #[repr(C)]
    pub struct C_OP_ColorInterpolateRandom {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x1c], // 0x1e0
        pub _: [u8; 0x10], // 0x1fc
        pub _: [u8; 0x4], // 0x20c
        pub _: [u8; 0x4], // 0x210
        pub _: [u8; 0x4], // 0x214
        pub _: [u8; 0x8], // 0x218
    }

    #[repr(C)]
    pub struct C_INIT_RemapNamedModelSequenceToScalar {
        pub pad_0: [u8; 0x230], // 0x0
    }

    #[repr(C)]
    pub struct C_OP_RenderLights {
        pub pad_0: [u8; 0x238], // 0x0
        pub _: [u8; 0x4], // 0x238
        pub _: [u8; 0x4], // 0x23c
        pub _: [u8; 0x4], // 0x240
        pub _: [u8; 0x4], // 0x244
        pub _: [u8; 0x4], // 0x248
        pub _: [u8; 0x4], // 0x24c
        pub _: [u8; 0x8], // 0x250
    }

    #[repr(C)]
    pub struct C_OP_DecayClampCount {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x178], // 0x1e0
    }

    #[repr(C)]
    pub struct CRandomNumberGeneratorParameters {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct C_INIT_ColorLitPerParticle {
        pub pad_0: [u8; 0x200], // 0x0
        pub _: [u8; 0x4], // 0x200
        pub _: [u8; 0x4], // 0x204
        pub _: [u8; 0x4], // 0x208
        pub _: [u8; 0x4], // 0x20c
        pub _: [u8; 0x4], // 0x210
        pub _: [u8; 0x4], // 0x214
        pub _: [u8; 0x8], // 0x218
    }

    #[repr(C)]
    pub struct C_OP_RenderPoints {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x8], // 0x230
    }

    #[repr(C)]
    pub struct C_INIT_SetAttributeToScalarExpression {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x8], // 0x1e8
        pub _: [u8; 0x178], // 0x1f0
        pub _: [u8; 0x178], // 0x368
        pub _: [u8; 0x178], // 0x4e0
        pub _: [u8; 0x4], // 0x658
        pub _: [u8; 0x24], // 0x65c
    }

    #[repr(C)]
    pub struct C_INIT_CreateOnGrid {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x178], // 0x360
        pub _: [u8; 0x178], // 0x4d8
        pub _: [u8; 0x178], // 0x650
        pub _: [u8; 0x178], // 0x7c8
        pub _: [u8; 0x178], // 0x940
        pub _: [u8; 0x4], // 0xab8
        pub _: [u8; 0x1], // 0xabc
        pub _: [u8; 0x1], // 0xabd
        pub _: [u8; 0x2], // 0xabe
    }

    #[repr(C)]
    pub struct C_OP_RampCPLinearRandom {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0xc], // 0x1ec
        pub _: [u8; 0x10], // 0x1f8
    }

    #[repr(C)]
    pub struct C_OP_VelocityMatchingForce {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
    }

    #[repr(C)]
    pub struct C_INIT_RandomAlphaWindowThreshold {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x8], // 0x1f0
    }

    #[repr(C)]
    pub struct C_INIT_CreateOnModelAtHeight {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x1], // 0x1e8
        pub _: [u8; 0x3], // 0x1e9
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x178], // 0x1f8
        pub _: [u8; 0x6d8], // 0x370
        pub _: [u8; 0x6d8], // 0xa48
        pub _: [u8; 0x4], // 0x1120
        pub _: [u8; 0x1], // 0x1124
        pub _: [u8; 0x1], // 0x1125
        pub _: [u8; 0x82], // 0x1126
        pub _: [u8; 0x178], // 0x11a8
        pub _: [u8; 0x178], // 0x1320
    }

    #[repr(C)]
    pub struct C_OP_ModelSurfaceSnapshotGenerator {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x8], // 0x1e8
        pub _: [u8; 0x60], // 0x1f0
        pub _: [u8; 0x178], // 0x250
        pub _: [u8; 0x178], // 0x3c8
        pub _: [u8; 0x178], // 0x540
        pub _: [u8; 0x178], // 0x6b8
        pub _: [u8; 0x1], // 0x830
        pub _: [u8; 0x1], // 0x831
        pub _: [u8; 0x1], // 0x832
        pub _: [u8; 0x5], // 0x833
    }

    #[repr(C)]
    pub struct C_OP_RestartAfterDuration {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
    }

    #[repr(C)]
    pub struct C_OP_RenderClothForce {
        pub pad_0: [u8; 0x230], // 0x0
    }

    #[repr(C)]
    pub struct C_OP_RemapVisibilityScalar {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x8], // 0x1f8
    }

    #[repr(C)]
    pub struct C_INIT_CreateSequentialPathV2 {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x178], // 0x360
        pub _: [u8; 0x1], // 0x4d8
        pub _: [u8; 0x1], // 0x4d9
        pub _: [u8; 0x6], // 0x4da
        pub _: [u8; 0x50], // 0x4e0
    }

    #[repr(C)]
    pub struct VecInputMaterialVariable_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x6d8], // 0x8
    }

    #[repr(C)]
    pub struct C_INIT_RemapInitialDirectionToTransformToVector {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x68], // 0x1e8
        pub _: [u8; 0x4], // 0x250
        pub _: [u8; 0x4], // 0x254
        pub _: [u8; 0x4], // 0x258
        pub _: [u8; 0xc], // 0x25c
        pub _: [u8; 0x8], // 0x268
    }

    #[repr(C)]
    pub struct C_OP_LockToSavedSequentialPathV2 {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x8], // 0x1e8
        pub _: [u8; 0x40], // 0x1f0
    }

    #[repr(C)]
    pub struct C_OP_NormalLock {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
    }

    #[repr(C)]
    pub struct C_INIT_RemapTransformOrientationToRotations {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x68], // 0x1e8
        pub _: [u8; 0xc], // 0x250
        pub _: [u8; 0x1], // 0x25c
        pub _: [u8; 0x3], // 0x25d
    }

    #[repr(C)]
    pub struct C_OP_Cull {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
    }

    #[repr(C)]
    pub struct C_INIT_RandomYawFlip {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x8], // 0x1e8
    }

    #[repr(C)]
    pub struct SequenceWeightedList_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct C_OP_ReadFromNeighboringParticle {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x8], // 0x1e8
        pub _: [u8; 0x178], // 0x1f0
        pub _: [u8; 0x178], // 0x368
    }

    #[repr(C)]
    pub struct C_OP_RenderText {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x8], // 0x230
        pub _: [u8; 0x8], // 0x238
    }

    #[repr(C)]
    pub struct C_OP_LerpToInitialPosition {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x8], // 0x360
        pub _: [u8; 0x178], // 0x368
        pub _: [u8; 0x6d8], // 0x4e0
    }

    #[repr(C)]
    pub struct C_INIT_RandomRotation {
        pub pad_0: [u8; 0x208], // 0x0
    }

    #[repr(C)]
    pub struct C_OP_LerpEndCapVector {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0xc], // 0x1e4
        pub _: [u8; 0x8], // 0x1f0
    }

    #[repr(C)]
    pub struct C_OP_VelocityDecay {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
    }

    #[repr(C)]
    pub struct C_OP_SetCPOrientationToPointAtCP {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x178], // 0x1f0
        pub _: [u8; 0x1], // 0x368
        pub _: [u8; 0x1], // 0x369
        pub _: [u8; 0x6], // 0x36a
    }

    #[repr(C)]
    pub struct C_OP_LockToPointList {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
        pub _: [u8; 0x18], // 0x1e8
        pub _: [u8; 0x1], // 0x200
        pub _: [u8; 0x3], // 0x201
        pub _: [u8; 0x4], // 0x204
    }

    #[repr(C)]
    pub struct C_INIT_CreateWithinCone {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x68], // 0x1e8
        pub _: [u8; 0x178], // 0x250
        pub _: [u8; 0x178], // 0x3c8
        pub _: [u8; 0x178], // 0x540
        pub _: [u8; 0x178], // 0x6b8
        pub _: [u8; 0x4], // 0x830
        pub _: [u8; 0xc], // 0x834
    }

    #[repr(C)]
    pub struct C_OP_MovementPlaceOnGround {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x178], // 0x1e0
        pub _: [u8; 0x4], // 0x358
        pub _: [u8; 0x4], // 0x35c
        pub _: [u8; 0x6d8], // 0x360
        pub _: [u8; 0x4], // 0xa38
        pub _: [u8; 0x4], // 0xa3c
        pub _: [u8; 0x80], // 0xa40
        pub _: [u8; 0x4], // 0xac0
        pub _: [u8; 0x4], // 0xac4
        pub _: [u8; 0x4], // 0xac8
        pub _: [u8; 0xc], // 0xacc
        pub _: [u8; 0x4], // 0xad8
        pub _: [u8; 0x1], // 0xadc
        pub _: [u8; 0x3], // 0xadd
        pub _: [u8; 0x1], // 0xae0
        pub _: [u8; 0x3], // 0xae1
        pub _: [u8; 0x4], // 0xae4
        pub _: [u8; 0x8], // 0xae8
    }

    #[repr(C)]
    pub struct C_OP_SetCPOrientationToDirection {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
    }

    #[repr(C)]
    pub struct C_OP_RemapCrossProductOfTwoVectorsToVector {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x6d8], // 0x1e0
        pub _: [u8; 0x6d8], // 0x8b8
        pub _: [u8; 0x4], // 0xf90
        pub _: [u8; 0x4], // 0xf94
    }

    #[repr(C)]
    pub struct C_OP_RemapTransformOrientationToRotations {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x68], // 0x1e0
        pub _: [u8; 0xc], // 0x248
        pub _: [u8; 0x1], // 0x254
        pub _: [u8; 0x3], // 0x255
    }

    #[repr(C)]
    pub struct C_INIT_RandomRotationSpeed {
        pub pad_0: [u8; 0x208], // 0x0
    }

    #[repr(C)]
    pub struct C_OP_InheritFromParentParticlesV2 {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x178], // 0x1e0
        pub _: [u8; 0x8], // 0x358
        pub _: [u8; 0x178], // 0x360
        pub _: [u8; 0x1], // 0x4d8
        pub _: [u8; 0x1], // 0x4d9
        pub _: [u8; 0x2], // 0x4da
        pub _: [u8; 0x4], // 0x4dc
        pub _: [u8; 0x178], // 0x4e0
    }

    #[repr(C)]
    pub struct C_INIT_RandomSecondSequence {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
    }

    #[repr(C)]
    pub struct C_OP_SetFloatCollection {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x178], // 0x1e0
        pub _: [u8; 0x4], // 0x358
        pub _: [u8; 0x4], // 0x35c
        pub _: [u8; 0x1a0], // 0x360
    }

    #[repr(C)]
    pub struct PointDefinition_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0xc], // 0x8
    }

    #[repr(C)]
    pub struct C_OP_SetControlPointPositionToRandomActiveCP {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x8], // 0x1f0
        pub _: [u8; 0x178], // 0x1f8
    }

    #[repr(C)]
    pub struct C_OP_Diffusion {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x8], // 0x1e8
    }

    #[repr(C)]
    pub struct C_INIT_AgeNoise {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x1], // 0x1e8
        pub _: [u8; 0x3], // 0x1e9
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x10], // 0x200
    }

    #[repr(C)]
    pub struct C_OP_RemapVectorComponentToScalar {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x8], // 0x1e8
    }

    #[repr(C)]
    pub struct CGeneralRandomRotation {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0xc], // 0x1fc
    }

    #[repr(C)]
    pub struct C_OP_DistanceBetweenVecs {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
        pub _: [u8; 0x6d8], // 0x1e8
        pub _: [u8; 0x6d8], // 0x8c0
        pub _: [u8; 0x178], // 0xf98
        pub _: [u8; 0x178], // 0x1110
        pub _: [u8; 0x178], // 0x1288
        pub _: [u8; 0x178], // 0x1400
        pub _: [u8; 0x4], // 0x1578
        pub _: [u8; 0x4], // 0x157c
    }

    #[repr(C)]
    pub struct C_OP_DampenToCP {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x8], // 0x1e8
    }

    #[repr(C)]
    pub struct C_OP_CalculateVectorAttribute {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0xc], // 0x1e0
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x14], // 0x1fc
        pub _: [u8; 0x4], // 0x210
        pub _: [u8; 0x14], // 0x214
        pub _: [u8; 0x4], // 0x228
        pub _: [u8; 0x4], // 0x22c
        pub _: [u8; 0x10], // 0x230
    }

    #[repr(C)]
    pub struct C_OP_LockToBone {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x60], // 0x1e0
        pub _: [u8; 0x68], // 0x240
        pub _: [u8; 0x4], // 0x2a8
        pub _: [u8; 0x4], // 0x2ac
        pub _: [u8; 0x4], // 0x2b0
        pub _: [u8; 0x4], // 0x2b4
        pub _: [u8; 0x80], // 0x2b8
        pub _: [u8; 0x1], // 0x338
        pub _: [u8; 0x3], // 0x339
        pub _: [u8; 0x4], // 0x33c
        pub _: [u8; 0x4], // 0x340
        pub _: [u8; 0x4], // 0x344
        pub _: [u8; 0x8], // 0x348
        pub _: [u8; 0x6d8], // 0x350
        pub _: [u8; 0x178], // 0xa28
    }

    #[repr(C)]
    pub struct C_OP_RemapNamedModelBodyPartOnceTimed {
        pub pad_0: [u8; 0x240], // 0x0
    }

    #[repr(C)]
    pub struct C_OP_ScreenSpaceRotateTowardTarget {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x6d8], // 0x1e0
        pub _: [u8; 0x178], // 0x8b8
        pub _: [u8; 0x8], // 0xa30
        pub _: [u8; 0x178], // 0xa38
    }

    #[repr(C)]
    pub struct C_OP_MovementMaintainOffset {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0xc], // 0x1e0
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x8], // 0x1f0
    }

    #[repr(C)]
    pub struct C_INIT_CreateWithinCapsuleTransform {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x178], // 0x360
        pub _: [u8; 0x178], // 0x4d8
        pub _: [u8; 0x68], // 0x650
        pub _: [u8; 0x178], // 0x6b8
        pub _: [u8; 0x178], // 0x830
        pub _: [u8; 0x8], // 0x9a8
        pub _: [u8; 0x6d8], // 0x9b0
        pub _: [u8; 0x6d8], // 0x1088
        pub _: [u8; 0x4], // 0x1760
        pub _: [u8; 0x4], // 0x1764
    }

    #[repr(C)]
    pub struct C_OP_SetVec {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x6d8], // 0x1e0
        pub _: [u8; 0x4], // 0x8b8
        pub _: [u8; 0x4], // 0x8bc
        pub _: [u8; 0x178], // 0x8c0
        pub _: [u8; 0x8], // 0xa38
    }

    #[repr(C)]
    pub struct C_INIT_CreateFromParentParticles {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x1], // 0x1f8
        pub _: [u8; 0x7], // 0x1f9
    }

    #[repr(C)]
    pub struct C_INIT_CheckParticleForWater {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x8], // 0x360
        pub _: [u8; 0x178], // 0x368
        pub _: [u8; 0x8], // 0x4e0
    }

    #[repr(C)]
    pub struct C_INIT_RandomNamedModelBodyPart {
        pub pad_0: [u8; 0x210], // 0x0
    }

    #[repr(C)]
    pub struct C_OP_RenderOmni2Light {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x4], // 0x230
        pub _: [u8; 0x4], // 0x234
        pub _: [u8; 0x6d8], // 0x238
        pub _: [u8; 0x8], // 0x910
        pub _: [u8; 0x8], // 0x918
        pub _: [u8; 0x178], // 0x920
        pub _: [u8; 0x8], // 0xa98
        pub _: [u8; 0x178], // 0xaa0
        pub _: [u8; 0x178], // 0xc18
        pub _: [u8; 0x1], // 0xd90
        pub _: [u8; 0x7], // 0xd91
        pub _: [u8; 0x178], // 0xd98
        pub _: [u8; 0x8], // 0xf10
        pub _: [u8; 0x178], // 0xf18
        pub _: [u8; 0x178], // 0x1090
        pub _: [u8; 0x8], // 0x1208
        pub _: [u8; 0x6d8], // 0x1210
        pub _: [u8; 0x6d8], // 0x18e8
        pub _: [u8; 0x178], // 0x1fc0
        pub _: [u8; 0x178], // 0x2138
        pub _: [u8; 0x178], // 0x22b0
        pub _: [u8; 0x178], // 0x2428
        pub _: [u8; 0x178], // 0x25a0
        pub _: [u8; 0x178], // 0x2718
        pub _: [u8; 0x178], // 0x2890
        pub _: [u8; 0x178], // 0x2a08
        pub _: [u8; 0x178], // 0x2b80
        pub _: [u8; 0x178], // 0x2cf8
        pub _: [u8; 0x8], // 0x2e70
        pub _: [u8; 0x10], // 0x2e78
    }

    #[repr(C)]
    pub struct C_OP_ConnectParentParticleToNearest {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x8], // 0x1e8
        pub _: [u8; 0x178], // 0x1f0
        pub _: [u8; 0x178], // 0x368
    }

    #[repr(C)]
    pub struct CPAssignment_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x6d8], // 0x8
        pub _: [u8; 0x8], // 0x6e0
    }

    #[repr(C)]
    pub struct C_INIT_RemapParticleCountToNamedModelBodyPartScalar {
        pub pad_0: [u8; 0x238], // 0x0
    }

    #[repr(C)]
    pub struct C_INIT_InitSkinnedPositionFromCPSnapshot {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x1], // 0x1f8
        pub _: [u8; 0x1], // 0x1f9
        pub _: [u8; 0x2], // 0x1fa
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x4], // 0x200
        pub _: [u8; 0x4], // 0x204
        pub _: [u8; 0x178], // 0x208
        pub _: [u8; 0x4], // 0x380
        pub _: [u8; 0x4], // 0x384
        pub _: [u8; 0x4], // 0x388
        pub _: [u8; 0x4], // 0x38c
        pub _: [u8; 0x4], // 0x390
        pub _: [u8; 0x1], // 0x394
        pub _: [u8; 0x1], // 0x395
        pub _: [u8; 0x2], // 0x396
    }

    #[repr(C)]
    pub struct C_OP_LagCompensation {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
    }

    #[repr(C)]
    pub struct C_OP_CollideWithSelf {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x178], // 0x1e0
        pub _: [u8; 0x178], // 0x358
    }

    #[repr(C)]
    pub struct C_OP_Noise {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
    }

    #[repr(C)]
    pub struct C_OP_FadeAndKillForTracers {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
    }

    #[repr(C)]
    pub struct C_OP_ColorAdjustHSL {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x178], // 0x1e0
        pub _: [u8; 0x178], // 0x358
        pub _: [u8; 0x178], // 0x4d0
    }

    #[repr(C)]
    pub struct CParticleMassCalculationParameters {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x178], // 0x8
        pub _: [u8; 0x178], // 0x180
        pub _: [u8; 0x178], // 0x2f8
    }

    #[repr(C)]
    pub struct C_OP_SequenceFromModel {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
    }

    #[repr(C)]
    pub struct C_OP_AlphaDecay {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
    }

    #[repr(C)]
    pub struct C_OP_RemapDensityGradientToVectorAttribute {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
    }

    #[repr(C)]
    pub struct C_INIT_InitVec {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x6d8], // 0x1e8
        pub _: [u8; 0x4], // 0x8c0
        pub _: [u8; 0x4], // 0x8c4
        pub _: [u8; 0x1], // 0x8c8
        pub _: [u8; 0x7], // 0x8c9
    }

    #[repr(C)]
    pub struct C_INIT_SetHitboxToModel {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x6d8], // 0x1f8
        pub _: [u8; 0xc], // 0x8d0
        pub _: [u8; 0x1], // 0x8dc
        pub _: [u8; 0x1], // 0x8dd
        pub _: [u8; 0x82], // 0x8de
        pub _: [u8; 0x178], // 0x960
    }

    #[repr(C)]
    pub struct C_OP_MovementMoveAlongSkinnedCPSnapshot {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x1], // 0x1e8
        pub _: [u8; 0x7], // 0x1e9
        pub _: [u8; 0x178], // 0x1f0
        pub _: [u8; 0x178], // 0x368
    }

    #[repr(C)]
    pub struct C_OP_LerpScalar {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x4], // 0x360
        pub _: [u8; 0x4], // 0x364
    }

    #[repr(C)]
    pub struct C_INIT_InitialRepulsionVelocity {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x80], // 0x1e8
        pub _: [u8; 0x4], // 0x268
        pub _: [u8; 0xc], // 0x26c
        pub _: [u8; 0xc], // 0x278
        pub _: [u8; 0x4], // 0x284
        pub _: [u8; 0x1], // 0x288
        pub _: [u8; 0x1], // 0x289
        pub _: [u8; 0x2], // 0x28a
        pub _: [u8; 0x4], // 0x28c
        pub _: [u8; 0x1], // 0x290
        pub _: [u8; 0x3], // 0x291
        pub _: [u8; 0x4], // 0x294
        pub _: [u8; 0x8], // 0x298
    }

    #[repr(C)]
    pub struct C_OP_ClampScalar {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x178], // 0x360
    }

    #[repr(C)]
    pub struct C_OP_SetControlPointToHMD {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0xc], // 0x1ec
        pub _: [u8; 0x8], // 0x1f8
    }

    #[repr(C)]
    pub struct C_OP_DifferencePreviousParticle {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x1], // 0x1fc
        pub _: [u8; 0x3], // 0x1fd
    }

    #[repr(C)]
    pub struct C_OP_SetControlPointFieldFromVectorExpression {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x8], // 0x1e8
        pub _: [u8; 0x6d8], // 0x1f0
        pub _: [u8; 0x6d8], // 0x8c8
        pub _: [u8; 0x178], // 0xfa0
        pub _: [u8; 0x178], // 0x1118
        pub _: [u8; 0x4], // 0x1290
        pub _: [u8; 0x4], // 0x1294
    }

    #[repr(C)]
    pub struct C_OP_PercentageBetweenTransforms {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x8], // 0x1f0
        pub _: [u8; 0x68], // 0x1f8
        pub _: [u8; 0x68], // 0x260
        pub _: [u8; 0x4], // 0x2c8
        pub _: [u8; 0x1], // 0x2cc
        pub _: [u8; 0x3], // 0x2cd
    }

    #[repr(C)]
    pub struct C_INIT_PlaneCull {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x8], // 0x1e8
        pub _: [u8; 0x178], // 0x1f0
        pub _: [u8; 0x8], // 0x368
    }

    #[repr(C)]
    pub struct C_OP_RemapNamedModelSequenceEndCap {
        pub pad_0: [u8; 0x240], // 0x0
    }

    #[repr(C)]
    pub struct C_INIT_InitFromCPSnapshot {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x8], // 0x1e8
        pub _: [u8; 0x8], // 0x1f0
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x4], // 0x200
        pub _: [u8; 0x1], // 0x204
        pub _: [u8; 0x3], // 0x205
        pub _: [u8; 0x178], // 0x208
        pub _: [u8; 0x178], // 0x380
        pub _: [u8; 0x4], // 0x4f8
        pub _: [u8; 0x4], // 0x4fc
    }

    #[repr(C)]
    pub struct C_OP_RenderCables {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x178], // 0x230
        pub _: [u8; 0x178], // 0x3a8
        pub _: [u8; 0x6d8], // 0x520
        pub _: [u8; 0x8], // 0xbf8
        pub _: [u8; 0x8], // 0xc00
        pub _: [u8; 0x8], // 0xc08
        pub _: [u8; 0x178], // 0xc10
        pub _: [u8; 0x178], // 0xd88
        pub _: [u8; 0x178], // 0xf00
        pub _: [u8; 0x178], // 0x1078
        pub _: [u8; 0x178], // 0x11f0
        pub _: [u8; 0x178], // 0x1368
        pub _: [u8; 0x4], // 0x14e0
        pub _: [u8; 0x4], // 0x14e4
        pub _: [u8; 0x4], // 0x14e8
        pub _: [u8; 0x4], // 0x14ec
        pub _: [u8; 0x4], // 0x14f0
        pub _: [u8; 0x4], // 0x14f4
        pub _: [u8; 0x4], // 0x14f8
        pub _: [u8; 0x1], // 0x14fc
        pub _: [u8; 0x3], // 0x14fd
        pub _: [u8; 0x68], // 0x1500
        pub _: [u8; 0x20], // 0x1568
        pub _: [u8; 0x20], // 0x1588
    }

    #[repr(C)]
    pub struct C_INIT_InheritVelocity {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
    }

    #[repr(C)]
    pub struct C_OP_SetControlPointToWaterSurface {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x8], // 0x1f8
        pub _: [u8; 0x178], // 0x200
        pub _: [u8; 0x8], // 0x378
    }

    #[repr(C)]
    pub struct C_INIT_PositionOffset {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x6d8], // 0x1e8
        pub _: [u8; 0x6d8], // 0x8c0
        pub _: [u8; 0x68], // 0xf98
        pub _: [u8; 0x1], // 0x1000
        pub _: [u8; 0x3], // 0x1001
        pub _: [u8; 0xc], // 0x1004
    }

    #[repr(C)]
    pub struct C_INIT_NormalAlignToCP {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x68], // 0x1e8
        pub _: [u8; 0x8], // 0x250
    }

    #[repr(C)]
    pub struct C_OP_ShapeMatchingConstraint {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
    }

    #[repr(C)]
    pub struct C_OP_SetChildControlPoints {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x8], // 0x1e8
        pub _: [u8; 0x178], // 0x1f0
        pub _: [u8; 0x1], // 0x368
        pub _: [u8; 0x3], // 0x369
        pub _: [u8; 0x4], // 0x36c
    }

    #[repr(C)]
    pub struct C_OP_ChladniWave {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x178], // 0x360
        pub _: [u8; 0x178], // 0x4d8
        pub _: [u8; 0x178], // 0x650
        pub _: [u8; 0x6d8], // 0x7c8
        pub _: [u8; 0x6d8], // 0xea0
        pub _: [u8; 0x4], // 0x1578
        pub _: [u8; 0x4], // 0x157c
        pub _: [u8; 0x8], // 0x1580
    }

    #[repr(C)]
    pub struct C_OP_RemapDirectionToCPToVector {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0xc], // 0x1f0
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x8], // 0x200
    }

    #[repr(C)]
    pub struct C_OP_DriveCPFromGlobalSoundFloat {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x8], // 0x200
        pub _: [u8; 0x8], // 0x208
        pub _: [u8; 0x10], // 0x210
    }

    #[repr(C)]
    pub struct C_INIT_ScreenSpacePositionOfTarget {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x6d8], // 0x1e8
        pub _: [u8; 0x4], // 0x8c0
        pub _: [u8; 0x4], // 0x8c4
        pub _: [u8; 0x178], // 0x8c8
    }

    #[repr(C)]
    pub struct C_OP_RtEnvCull {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0xc], // 0x1e0
        pub _: [u8; 0xc], // 0x1ec
        pub _: [u8; 0x1], // 0x1f8
        pub _: [u8; 0x1], // 0x1f9
        pub _: [u8; 0x82], // 0x1fa
        pub _: [u8; 0x4], // 0x27c
        pub _: [u8; 0x8], // 0x280
    }

    #[repr(C)]
    pub struct C_OP_PinParticleToCP {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
        pub _: [u8; 0x6d8], // 0x1e8
        pub _: [u8; 0x4], // 0x8c0
        pub _: [u8; 0x4], // 0x8c4
        pub _: [u8; 0x178], // 0x8c8
        pub _: [u8; 0x8], // 0xa40
        pub _: [u8; 0x178], // 0xa48
        pub _: [u8; 0x178], // 0xbc0
        pub _: [u8; 0x178], // 0xd38
        pub _: [u8; 0x4], // 0xeb0
        pub _: [u8; 0x4], // 0xeb4
        pub _: [u8; 0x178], // 0xeb8
        pub _: [u8; 0x178], // 0x1030
        pub _: [u8; 0x8], // 0x11a8
    }

    #[repr(C)]
    pub struct C_OP_RemapCPtoVector {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0xc], // 0x1ec
        pub _: [u8; 0xc], // 0x1f8
        pub _: [u8; 0xc], // 0x204
        pub _: [u8; 0xc], // 0x210
        pub _: [u8; 0x4], // 0x21c
        pub _: [u8; 0x4], // 0x220
        pub _: [u8; 0x4], // 0x224
        pub _: [u8; 0x4], // 0x228
        pub _: [u8; 0x1], // 0x22c
        pub _: [u8; 0x3], // 0x22d
    }

    #[repr(C)]
    pub struct C_INIT_CreateParticleImpulse {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x178], // 0x360
        pub _: [u8; 0x8], // 0x4d8
        pub _: [u8; 0x178], // 0x4e0
        pub _: [u8; 0x8], // 0x658
    }

    #[repr(C)]
    pub struct C_OP_DensityForce {
        pub pad_0: [u8; 0x1f0], // 0x0
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x8], // 0x1f8
    }

    #[repr(C)]
    pub struct C_INIT_CreateInEpitrochoid {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x68], // 0x1f0
        pub _: [u8; 0x178], // 0x258
        pub _: [u8; 0x178], // 0x3d0
        pub _: [u8; 0x178], // 0x548
        pub _: [u8; 0x178], // 0x6c0
        pub _: [u8; 0x1], // 0x838
        pub _: [u8; 0x1], // 0x839
        pub _: [u8; 0x6], // 0x83a
    }

    #[repr(C)]
    pub struct C_OP_ConstrainDistanceToUserSpecifiedPath {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x18], // 0x1f0
    }

    #[repr(C)]
    pub struct C_OP_SetControlPointPositions {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x1], // 0x1e8
        pub _: [u8; 0x1], // 0x1e9
        pub _: [u8; 0x2], // 0x1ea
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0xc], // 0x1fc
        pub _: [u8; 0xc], // 0x208
        pub _: [u8; 0xc], // 0x214
        pub _: [u8; 0xc], // 0x220
        pub _: [u8; 0x4], // 0x22c
    }

    #[repr(C)]
    pub struct C_OP_SetFloatAttributeToVectorExpression {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
        pub _: [u8; 0x6d8], // 0x1e8
        pub _: [u8; 0x6d8], // 0x8c0
        pub _: [u8; 0x178], // 0xf98
        pub _: [u8; 0x4], // 0x1110
        pub _: [u8; 0x4], // 0x1114
    }

    #[repr(C)]
    pub struct C_OP_MovementRotateParticleAroundAxis {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x6d8], // 0x1e0
        pub _: [u8; 0x178], // 0x8b8
        pub _: [u8; 0x68], // 0xa30
        pub _: [u8; 0x8], // 0xa98
    }

    #[repr(C)]
    pub struct C_OP_IntraParticleForce {
        pub pad_0: [u8; 0x1f0], // 0x0
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x4], // 0x200
        pub _: [u8; 0x4], // 0x204
        pub _: [u8; 0x8], // 0x208
    }

    #[repr(C)]
    pub struct C_INIT_InitFloat {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x4], // 0x360
        pub _: [u8; 0x4], // 0x364
        pub _: [u8; 0x180], // 0x368
    }

    #[repr(C)]
    pub struct C_INIT_CreateOnModel {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x60], // 0x1e8
        pub _: [u8; 0x68], // 0x248
        pub _: [u8; 0x4], // 0x2b0
        pub _: [u8; 0x1], // 0x2b4
        pub _: [u8; 0x3], // 0x2b5
        pub _: [u8; 0x178], // 0x2b8
        pub _: [u8; 0x8], // 0x430
        pub _: [u8; 0x6d8], // 0x438
        pub _: [u8; 0x4], // 0xb10
        pub _: [u8; 0x4], // 0xb14
        pub _: [u8; 0x6d8], // 0xb18
        pub _: [u8; 0x80], // 0x11f0
        pub _: [u8; 0x1], // 0x1270
        pub _: [u8; 0x1], // 0x1271
        pub _: [u8; 0x6], // 0x1272
        pub _: [u8; 0x178], // 0x1278
    }

    #[repr(C)]
    pub struct C_OP_InheritFromPeerSystem {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
    }

    #[repr(C)]
    pub struct C_OP_PerParticleForce {
        pub pad_0: [u8; 0x1f0], // 0x0
        pub _: [u8; 0x178], // 0x1f0
        pub _: [u8; 0x6d8], // 0x368
        pub _: [u8; 0x8], // 0xa40
    }

    #[repr(C)]
    pub struct C_INIT_RandomNamedModelMeshGroup {
        pub pad_0: [u8; 0x210], // 0x0
    }

    #[repr(C)]
    pub struct C_OP_RenderProjected {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x1], // 0x230
        pub _: [u8; 0x1], // 0x231
        pub _: [u8; 0x1], // 0x232
        pub _: [u8; 0x1], // 0x233
        pub _: [u8; 0x4], // 0x234
        pub _: [u8; 0x4], // 0x238
        pub _: [u8; 0x4], // 0x23c
        pub _: [u8; 0x18], // 0x240
        pub _: [u8; 0x178], // 0x258
        pub _: [u8; 0x4], // 0x3d0
        pub _: [u8; 0x4], // 0x3d4
        pub _: [u8; 0x18], // 0x3d8
        pub _: [u8; 0x178], // 0x3f0
        pub _: [u8; 0x178], // 0x568
        pub _: [u8; 0x178], // 0x6e0
        pub _: [u8; 0x8], // 0x858
        pub _: [u8; 0x6d8], // 0x860
        pub _: [u8; 0x20], // 0xf38
    }

    #[repr(C)]
    pub struct C_OP_MaxVelocity {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x178], // 0x1e0
        pub _: [u8; 0x178], // 0x358
    }

    #[repr(C)]
    pub struct C_INIT_VelocityFromNormal {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x8], // 0x1f0
    }

    #[repr(C)]
    pub struct C_OP_MaintainEmitter {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x8], // 0x360
        pub _: [u8; 0x178], // 0x368
        pub _: [u8; 0x4], // 0x4e0
        pub _: [u8; 0x4], // 0x4e4
        pub _: [u8; 0x8], // 0x4e8
        pub _: [u8; 0x1], // 0x4f0
        pub _: [u8; 0x7], // 0x4f1
        pub _: [u8; 0x178], // 0x4f8
    }

    #[repr(C)]
    pub struct C_INIT_PositionOffsetToCP {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x8], // 0x1f0
    }

    #[repr(C)]
    pub struct C_INIT_RemapInitialTransformDirectionToRotation {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x68], // 0x1e8
        pub _: [u8; 0x4], // 0x250
        pub _: [u8; 0x4], // 0x254
        pub _: [u8; 0x8], // 0x258
    }

    #[repr(C)]
    pub struct C_OP_FadeAndKill {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x8], // 0x1f8
    }

    #[repr(C)]
    pub struct C_OP_ColorInterpolate {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x10], // 0x1e0
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
    }

    #[repr(C)]
    pub struct C_OP_RampScalarSpline {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x28], // 0x1f8
        pub _: [u8; 0x4], // 0x220
        pub _: [u8; 0x1], // 0x224
        pub _: [u8; 0xb], // 0x225
    }

    #[repr(C)]
    pub struct C_OP_RemapNamedModelSequenceOnceTimed {
        pub pad_0: [u8; 0x240], // 0x0
    }

    #[repr(C)]
    pub struct C_OP_SetControlPointFromObjectScale {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
    }

    #[repr(C)]
    pub struct C_OP_MaintainSequentialPath {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x178], // 0x1e0
        pub _: [u8; 0x178], // 0x358
        pub _: [u8; 0x178], // 0x4d0
        pub _: [u8; 0x4], // 0x648
        pub _: [u8; 0x1], // 0x64c
        pub _: [u8; 0x3], // 0x64d
        pub _: [u8; 0x40], // 0x650
    }

    #[repr(C)]
    pub struct C_OP_RemapNamedModelBodyPartEndCap {
        pub pad_0: [u8; 0x240], // 0x0
    }

    #[repr(C)]
    pub struct C_OP_StopAfterCPDuration {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x1], // 0x360
        pub _: [u8; 0x7], // 0x361
    }

    #[repr(C)]
    pub struct CGeneralSpin {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x8], // 0x1e4
        pub _: [u8; 0xc], // 0x1ec
    }

    #[repr(C)]
    pub struct C_OP_LockToSavedSequentialPath {
        pub pad_0: [u8; 0x1e4], // 0x0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x40], // 0x1f0
    }

    #[repr(C)]
    pub struct C_INIT_RemapNamedModelElementToScalar {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x8], // 0x1e8
        pub _: [u8; 0x18], // 0x1f0
        pub _: [u8; 0x18], // 0x208
        pub _: [u8; 0x4], // 0x220
        pub _: [u8; 0x4], // 0x224
        pub _: [u8; 0x4], // 0x228
        pub _: [u8; 0x4], // 0x22c
    }

    #[repr(C)]
    pub struct C_OP_ClampVector {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
        pub _: [u8; 0x6d8], // 0x1e8
        pub _: [u8; 0x6d8], // 0x8c0
    }

    #[repr(C)]
    pub struct C_OP_RenderStatusEffectCitadel {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x8], // 0x230
        pub _: [u8; 0x8], // 0x238
        pub _: [u8; 0x8], // 0x240
        pub _: [u8; 0x8], // 0x248
        pub _: [u8; 0x8], // 0x250
        pub _: [u8; 0x8], // 0x258
    }

    #[repr(C)]
    pub struct IParticleSystemDefinition {
        pub pad_0: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct C_OP_WindForce {
        pub pad_0: [u8; 0x1f0], // 0x0
        pub _: [u8; 0x10], // 0x1f0
    }

    #[repr(C)]
    pub struct C_OP_SetVariable {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x50], // 0x1e8
        pub _: [u8; 0x68], // 0x238
        pub _: [u8; 0xc], // 0x2a0
        pub _: [u8; 0xc], // 0x2ac
        pub _: [u8; 0x6d8], // 0x2b8
        pub _: [u8; 0x178], // 0x990
    }

    #[repr(C)]
    pub struct C_OP_RenderStandardLight {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x4], // 0x230
        pub _: [u8; 0x4], // 0x234
        pub _: [u8; 0x6d8], // 0x238
        pub _: [u8; 0x8], // 0x910
        pub _: [u8; 0x8], // 0x918
        pub _: [u8; 0x178], // 0x920
        pub _: [u8; 0x178], // 0xa98
        pub _: [u8; 0x1], // 0xc10
        pub _: [u8; 0x7], // 0xc11
        pub _: [u8; 0x178], // 0xc18
        pub _: [u8; 0x178], // 0xd90
        pub _: [u8; 0x178], // 0xf08
        pub _: [u8; 0x178], // 0x1080
        pub _: [u8; 0x8], // 0x11f8
        pub _: [u8; 0x178], // 0x1200
        pub _: [u8; 0x178], // 0x1378
        pub _: [u8; 0x178], // 0x14f0
        pub _: [u8; 0x1], // 0x1668
        pub _: [u8; 0x7], // 0x1669
        pub _: [u8; 0x8], // 0x1670
        pub _: [u8; 0x4], // 0x1678
        pub _: [u8; 0x4], // 0x167c
        pub _: [u8; 0x178], // 0x1680
        pub _: [u8; 0x4], // 0x17f8
        pub _: [u8; 0x4], // 0x17fc
        pub _: [u8; 0x1], // 0x1800
        pub _: [u8; 0x3], // 0x1801
        pub _: [u8; 0x4], // 0x1804
        pub _: [u8; 0x4], // 0x1808
        pub _: [u8; 0x4], // 0x180c
        pub _: [u8; 0x4], // 0x1810
        pub _: [u8; 0x4], // 0x1814
        pub _: [u8; 0x4], // 0x1818
        pub _: [u8; 0xc], // 0x181c
    }

    #[repr(C)]
    pub struct C_OP_DistanceToTransform {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x178], // 0x360
        pub _: [u8; 0x178], // 0x4d8
        pub _: [u8; 0x178], // 0x650
        pub _: [u8; 0x68], // 0x7c8
        pub _: [u8; 0x1], // 0x830
        pub _: [u8; 0x83], // 0x831
        pub _: [u8; 0x4], // 0x8b4
        pub _: [u8; 0x4], // 0x8b8
        pub _: [u8; 0x4], // 0x8bc
        pub _: [u8; 0x4], // 0x8c0
        pub _: [u8; 0x1], // 0x8c4
        pub _: [u8; 0x3], // 0x8c5
        pub _: [u8; 0x6d8], // 0x8c8
    }

    #[repr(C)]
    pub struct C_OP_RemapControlPointOrientationToRotation {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
    }

    #[repr(C)]
    pub struct C_OP_SetControlPointToCenter {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0xc], // 0x1ec
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
    }

    #[repr(C)]
    pub struct C_OP_RemapAverageScalarValuetoCP {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x8], // 0x1e8
        pub _: [u8; 0x178], // 0x1f0
        pub _: [u8; 0x4], // 0x368
        pub _: [u8; 0x4], // 0x36c
        pub _: [u8; 0x8], // 0x370
        pub _: [u8; 0x178], // 0x378
    }

    #[repr(C)]
    pub struct C_OP_RemapDotProductToScalar {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x4], // 0x200
        pub _: [u8; 0x1], // 0x204
        pub _: [u8; 0x3], // 0x205
    }

    #[repr(C)]
    pub struct C_OP_RemapCPtoCP {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x4], // 0x200
        pub _: [u8; 0x4], // 0x204
        pub _: [u8; 0x4], // 0x208
        pub _: [u8; 0x4], // 0x20c
    }

    #[repr(C)]
    pub struct C_OP_SetControlPointRotation {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x6d8], // 0x1e8
        pub _: [u8; 0x178], // 0x8c0
        pub _: [u8; 0x4], // 0xa38
        pub _: [u8; 0x4], // 0xa3c
    }

    #[repr(C)]
    pub struct C_OP_CurlNoiseForce {
        pub pad_0: [u8; 0x1f0], // 0x0
        pub _: [u8; 0x8], // 0x1f0
        pub _: [u8; 0x6d8], // 0x1f8
        pub _: [u8; 0x6d8], // 0x8d0
        pub _: [u8; 0x6d8], // 0xfa8
        pub _: [u8; 0x6d8], // 0x1680
        pub _: [u8; 0x178], // 0x1d58
        pub _: [u8; 0x178], // 0x1ed0
    }

    #[repr(C)]
    pub struct C_INIT_Orient2DRelToCP {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x8], // 0x1f0
    }

    #[repr(C)]
    pub struct C_OP_SetSimulationRate {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x178], // 0x1e8
    }

    #[repr(C)]
    pub struct C_OP_FadeIn {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
    }

    #[repr(C)]
    pub struct C_OP_RenderScreenShake {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x4], // 0x230
        pub _: [u8; 0x4], // 0x234
        pub _: [u8; 0x4], // 0x238
        pub _: [u8; 0x4], // 0x23c
        pub _: [u8; 0x4], // 0x240
        pub _: [u8; 0x4], // 0x244
        pub _: [u8; 0x4], // 0x248
        pub _: [u8; 0x4], // 0x24c
        pub _: [u8; 0x8], // 0x250
    }

    #[repr(C)]
    pub struct C_OP_RemapBoundingVolumetoCP {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x8], // 0x1f8
    }

    #[repr(C)]
    pub struct C_OP_HSVShiftToCP {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x14], // 0x1f4
    }

    #[repr(C)]
    pub struct C_OP_RemapVectorToRotations {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x6d8], // 0x1e0
        pub _: [u8; 0x6d8], // 0x8b8
    }

    #[repr(C)]
    pub struct C_INIT_GlobalScale {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x1], // 0x1f4
        pub _: [u8; 0x1], // 0x1f5
        pub _: [u8; 0x2], // 0x1f6
    }

    #[repr(C)]
    pub struct C_INIT_RadiusFromCPObject {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x8], // 0x1e8
    }

    #[repr(C)]
    pub struct C_INIT_InitialVelocityFromHitbox {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x80], // 0x1f4
        pub _: [u8; 0x4], // 0x274
    }

    #[repr(C)]
    pub struct C_OP_LerpVector {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0xc], // 0x1e4
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x8], // 0x1f8
    }

    #[repr(C)]
    pub struct C_OP_SetControlPointFieldToWater {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x8], // 0x1f0
    }

    #[repr(C)]
    pub struct TextureGroup_t {
        pub _: [u8; 0x1], // 0x0
        pub _: [u8; 0x7], // 0x1
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x8], // 0x30
        pub _: [u8; 0x178], // 0x38
        pub _: [u8; 0xa68], // 0x1b0
    }

    #[repr(C)]
    pub struct C_OP_TimeVaryingForce {
        pub pad_0: [u8; 0x1f0], // 0x0
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0xc], // 0x1f4
        pub _: [u8; 0x4], // 0x200
        pub _: [u8; 0xc], // 0x204
    }

    #[repr(C)]
    pub struct C_OP_SetCPOrientationToGroundNormal {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x80], // 0x1f0
        pub _: [u8; 0x4], // 0x270
        pub _: [u8; 0x4], // 0x274
        pub _: [u8; 0x10], // 0x278
        pub _: [u8; 0x8], // 0x288
    }

    #[repr(C)]
    pub struct C_OP_SnapshotSkinToBones {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x1], // 0x1e0
        pub _: [u8; 0x3], // 0x1e1
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
    }

    #[repr(C)]
    pub struct C_INIT_CreateWithinSphereTransform {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x178], // 0x360
        pub _: [u8; 0x6d8], // 0x4d8
        pub _: [u8; 0x10], // 0xbb0
        pub _: [u8; 0x68], // 0xbc0
        pub _: [u8; 0x178], // 0xc28
        pub _: [u8; 0x178], // 0xda0
        pub _: [u8; 0x4], // 0xf18
        pub _: [u8; 0x4], // 0xf1c
        pub _: [u8; 0x6d8], // 0xf20
        pub _: [u8; 0x6d8], // 0x15f8
        pub _: [u8; 0x4], // 0x1cd0
        pub _: [u8; 0x4], // 0x1cd4
    }

    #[repr(C)]
    pub struct C_OP_RadiusDecay {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
    }

    #[repr(C)]
    pub struct C_INIT_RemapNamedModelBodyPartToScalar {
        pub pad_0: [u8; 0x230], // 0x0
    }

    #[repr(C)]
    pub struct C_INIT_RemapScalarToVector {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0xc], // 0x1f8
        pub _: [u8; 0xc], // 0x204
        pub _: [u8; 0x4], // 0x210
        pub _: [u8; 0x4], // 0x214
        pub _: [u8; 0x4], // 0x218
        pub _: [u8; 0x4], // 0x21c
        pub _: [u8; 0x4], // 0x220
        pub _: [u8; 0xc], // 0x224
    }

    #[repr(C)]
    pub struct C_INIT_InitialSequenceFromModel {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x4], // 0x200
        pub _: [u8; 0x4], // 0x204
    }

    #[repr(C)]
    pub struct C_OP_NoiseEmitter {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x1], // 0x200
        pub _: [u8; 0x3], // 0x201
        pub _: [u8; 0x4], // 0x204
        pub _: [u8; 0x4], // 0x208
        pub _: [u8; 0x4], // 0x20c
        pub _: [u8; 0x4], // 0x210
        pub _: [u8; 0x4], // 0x214
        pub _: [u8; 0xc], // 0x218
        pub _: [u8; 0x4], // 0x224
    }

    #[repr(C)]
    pub struct CParticleFunctionInitializer {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
    }

    #[repr(C)]
    pub struct C_OP_SelectivelyEnableChildren {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x178], // 0x360
        pub _: [u8; 0x178], // 0x4d8
        pub _: [u8; 0x1], // 0x650
        pub _: [u8; 0x7], // 0x651
    }

    #[repr(C)]
    pub struct ModelReference_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct C_OP_PlanarConstraint {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0xc], // 0x1e0
        pub _: [u8; 0xc], // 0x1ec
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x1], // 0x1fc
        pub _: [u8; 0x3], // 0x1fd
        pub _: [u8; 0x178], // 0x200
        pub _: [u8; 0x178], // 0x378
        pub _: [u8; 0x8], // 0x4f0
    }

    #[repr(C)]
    pub struct C_INIT_CreateFromCPs {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x8], // 0x1f0
        pub _: [u8; 0x178], // 0x1f8
    }

    #[repr(C)]
    pub struct C_OP_LockPoints {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
    }

    #[repr(C)]
    pub struct C_INIT_CreateSpiralSphere {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x68], // 0x1e8
        pub _: [u8; 0x178], // 0x250
        pub _: [u8; 0x178], // 0x3c8
        pub _: [u8; 0x178], // 0x540
        pub _: [u8; 0x178], // 0x6b8
        pub _: [u8; 0x8], // 0x830
    }

    #[repr(C)]
    pub struct C_OP_CPVelocityForce {
        pub pad_0: [u8; 0x1f0], // 0x0
        pub _: [u8; 0x8], // 0x1f0
        pub _: [u8; 0x178], // 0x1f8
    }

    #[repr(C)]
    pub struct C_OP_RemapNamedModelElementEndCap {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
        pub _: [u8; 0x18], // 0x1e8
        pub _: [u8; 0x18], // 0x200
        pub _: [u8; 0x18], // 0x218
        pub _: [u8; 0x4], // 0x230
        pub _: [u8; 0x4], // 0x234
        pub _: [u8; 0x8], // 0x238
    }

    #[repr(C)]
    pub struct C_INIT_ScaleVelocity {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x6d8], // 0x1e8
    }

    #[repr(C)]
    pub struct C_OP_MoveToHitbox {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x60], // 0x1e0
        pub _: [u8; 0x6c], // 0x240
        pub _: [u8; 0x4], // 0x2ac
        pub _: [u8; 0x4], // 0x2b0
        pub _: [u8; 0x4], // 0x2b4
        pub _: [u8; 0x80], // 0x2b8
        pub _: [u8; 0x4], // 0x338
        pub _: [u8; 0x4], // 0x33c
        pub _: [u8; 0x178], // 0x340
    }

    #[repr(C)]
    pub struct C_OP_PinRopeSegmentParticleToParent {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x178], // 0x360
    }

    #[repr(C)]
    pub struct C_INIT_PointList {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x8], // 0x1e8
        pub _: [u8; 0x18], // 0x1f0
        pub _: [u8; 0x1], // 0x208
        pub _: [u8; 0x3], // 0x209
        pub _: [u8; 0x4], // 0x20c
    }

    #[repr(C)]
    pub struct C_OP_LerpToOtherAttribute {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x178], // 0x1e0
        pub _: [u8; 0x4], // 0x358
        pub _: [u8; 0x4], // 0x35c
        pub _: [u8; 0x30], // 0x360
    }

    #[repr(C)]
    pub struct C_INIT_RandomColor {
        pub pad_0: [u8; 0x204], // 0x0
        pub _: [u8; 0x4], // 0x204
        pub _: [u8; 0x4], // 0x208
        pub _: [u8; 0x4], // 0x20c
        pub _: [u8; 0x4], // 0x210
        pub _: [u8; 0x4], // 0x214
        pub _: [u8; 0x4], // 0x218
        pub _: [u8; 0x4], // 0x21c
        pub _: [u8; 0x4], // 0x220
        pub _: [u8; 0x4], // 0x224
        pub _: [u8; 0x8], // 0x228
    }

    #[repr(C)]
    pub struct C_OP_SetGravityToCP {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x178], // 0x1f0
        pub _: [u8; 0x1], // 0x368
        pub _: [u8; 0x1], // 0x369
        pub _: [u8; 0x6], // 0x36a
    }

    #[repr(C)]
    pub struct C_INIT_RemapParticleCountToScalar {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x4], // 0x200
        pub _: [u8; 0x4], // 0x204
        pub _: [u8; 0x1], // 0x208
        pub _: [u8; 0x1], // 0x209
        pub _: [u8; 0x2], // 0x20a
        pub _: [u8; 0xc], // 0x20c
    }

    #[repr(C)]
    pub struct C_INIT_InheritFromParentParticles {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x8], // 0x1f8
    }

    #[repr(C)]
    pub struct C_OP_RampScalarLinearSimple {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x28], // 0x1e8
        pub _: [u8; 0x10], // 0x210
    }

    #[repr(C)]
    pub struct C_INIT_ChaoticAttractor {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x4], // 0x200
        pub _: [u8; 0x4], // 0x204
        pub _: [u8; 0x8], // 0x208
    }

    #[repr(C)]
    pub struct C_OP_MovementRigidAttachToCP {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
    }

    #[repr(C)]
    pub struct C_OP_RenderFlattenGrass {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x4], // 0x230
        pub _: [u8; 0x4], // 0x234
        pub _: [u8; 0x8], // 0x238
    }

    #[repr(C)]
    pub struct C_OP_RenderLightBeam {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x8], // 0x230
        pub _: [u8; 0x6d8], // 0x238
        pub _: [u8; 0x8], // 0x910
        pub _: [u8; 0x8], // 0x918
        pub _: [u8; 0x178], // 0x920
        pub _: [u8; 0x178], // 0xa98
        pub _: [u8; 0x178], // 0xc10
        pub _: [u8; 0x1], // 0xd88
        pub _: [u8; 0x7], // 0xd89
        pub _: [u8; 0x178], // 0xd90
        pub _: [u8; 0x178], // 0xf08
        pub _: [u8; 0x178], // 0x1080
        pub _: [u8; 0x178], // 0x11f8
        pub _: [u8; 0x178], // 0x1370
        pub _: [u8; 0x178], // 0x14e8
        pub _: [u8; 0x6d8], // 0x1660
        pub _: [u8; 0x8], // 0x1d38
        pub _: [u8; 0x178], // 0x1d40
        pub _: [u8; 0x178], // 0x1eb8
        pub _: [u8; 0x8], // 0x2030
    }

    #[repr(C)]
    pub struct C_INIT_SkyVisCull {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x6d8], // 0x1e8
        pub _: [u8; 0x4], // 0x8c0
        pub _: [u8; 0x4], // 0x8c4
    }

    #[repr(C)]
    pub struct C_OP_EnableChildrenFromParentParticleCount {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x178], // 0x1f0
        pub _: [u8; 0x1], // 0x368
        pub _: [u8; 0x1], // 0x369
        pub _: [u8; 0x6], // 0x36a
    }

    #[repr(C)]
    pub struct C_INIT_DistanceToCPInit {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x8], // 0x1e8
        pub _: [u8; 0x178], // 0x1f0
        pub _: [u8; 0x178], // 0x368
        pub _: [u8; 0x178], // 0x4e0
        pub _: [u8; 0x178], // 0x658
        pub _: [u8; 0x4], // 0x7d0
        pub _: [u8; 0x1], // 0x7d4
        pub _: [u8; 0x83], // 0x7d5
        pub _: [u8; 0x8], // 0x858
        pub _: [u8; 0x178], // 0x860
        pub _: [u8; 0x4], // 0x9d8
        pub _: [u8; 0x4], // 0x9dc
        pub _: [u8; 0x4], // 0x9e0
        pub _: [u8; 0xc], // 0x9e4
        pub _: [u8; 0x8], // 0x9f0
    }

    #[repr(C)]
    pub struct C_OP_EndCapDecay {
        pub pad_0: [u8; 0x1e0], // 0x0
    }

    #[repr(C)]
    pub struct C_OP_ForceBasedOnDistanceToPlane {
        pub pad_0: [u8; 0x1f0], // 0x0
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0xc], // 0x1f4
        pub _: [u8; 0x4], // 0x200
        pub _: [u8; 0xc], // 0x204
        pub _: [u8; 0xc], // 0x210
        pub _: [u8; 0x4], // 0x21c
        pub _: [u8; 0x8], // 0x220
    }

    #[repr(C)]
    pub struct C_OP_RemapDensityToVector {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0xc], // 0x1f0
        pub _: [u8; 0xc], // 0x1fc
        pub _: [u8; 0x4], // 0x208
        pub _: [u8; 0x4], // 0x20c
    }

    #[repr(C)]
    pub struct ParticleControlPointConfiguration_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
        pub _: [u8; 0x70], // 0x20
    }

    #[repr(C)]
    pub struct C_INIT_SetRigidAttachment {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
    }

    #[repr(C)]
    pub struct MaterialVariable_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
    }

    #[repr(C)]
    pub struct CParticleFunctionConstraint {
        pub pad_0: [u8; 0x1e0], // 0x0
    }

    #[repr(C)]
    pub struct C_OP_RemapSpeed {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x8], // 0x1f8
    }

    #[repr(C)]
    pub struct C_OP_RenderModels {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x1], // 0x230
        pub _: [u8; 0x1], // 0x231
        pub _: [u8; 0x1], // 0x232
        pub _: [u8; 0x5], // 0x233
        pub _: [u8; 0x18], // 0x238
        pub _: [u8; 0x4], // 0x250
        pub _: [u8; 0x4], // 0x254
        pub _: [u8; 0x1], // 0x258
        pub _: [u8; 0x1], // 0x259
        pub _: [u8; 0x6], // 0x25a
        pub _: [u8; 0x6d8], // 0x260
        pub _: [u8; 0x6d8], // 0x938
        pub _: [u8; 0x4], // 0x1010
        pub _: [u8; 0x4], // 0x1014
        pub _: [u8; 0x6d8], // 0x1018
        pub _: [u8; 0x4], // 0x16f0
        pub _: [u8; 0x4], // 0x16f4
        pub _: [u8; 0x8], // 0x16f8
        pub _: [u8; 0x178], // 0x1700
        pub _: [u8; 0x1], // 0x1878
        pub _: [u8; 0x1], // 0x1879
        pub _: [u8; 0x1], // 0x187a
        pub _: [u8; 0x1], // 0x187b
        pub _: [u8; 0x4], // 0x187c
        pub _: [u8; 0x4], // 0x1880
        pub _: [u8; 0x4], // 0x1884
        pub _: [u8; 0x100], // 0x1888
        pub _: [u8; 0x100], // 0x1988
        pub _: [u8; 0x1], // 0x1a88
        pub _: [u8; 0x1], // 0x1a89
        pub _: [u8; 0x46], // 0x1a8a
        pub _: [u8; 0x8], // 0x1ad0
        pub _: [u8; 0x8], // 0x1ad8
        pub _: [u8; 0x178], // 0x1ae0
        pub _: [u8; 0x18], // 0x1c58
        pub _: [u8; 0x178], // 0x1c70
        pub _: [u8; 0x178], // 0x1de8
        pub _: [u8; 0x60], // 0x1f60
        pub _: [u8; 0x4], // 0x1fc0
        pub _: [u8; 0x100], // 0x1fc4
        pub _: [u8; 0x1], // 0x20c4
        pub _: [u8; 0x3], // 0x20c5
        pub _: [u8; 0x4], // 0x20c8
        pub _: [u8; 0x1], // 0x20cc
        pub _: [u8; 0x1], // 0x20cd
        pub _: [u8; 0x1], // 0x20ce
        pub _: [u8; 0x1], // 0x20cf
        pub _: [u8; 0x1], // 0x20d0
        pub _: [u8; 0x1], // 0x20d1
        pub _: [u8; 0x106], // 0x20d2
        pub _: [u8; 0x178], // 0x21d8
        pub _: [u8; 0x178], // 0x2350
        pub _: [u8; 0x178], // 0x24c8
        pub _: [u8; 0x8], // 0x2640
        pub _: [u8; 0x6d8], // 0x2648
        pub _: [u8; 0x8], // 0x2d20
        pub _: [u8; 0x8], // 0x2d28
        pub _: [u8; 0x1b8], // 0x2d30
    }

    #[repr(C)]
    pub struct C_OP_RenderClientPhysicsImpulse {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x178], // 0x230
        pub _: [u8; 0x178], // 0x3a8
        pub _: [u8; 0x8], // 0x520
    }

    #[repr(C)]
    pub struct CParticleFunctionEmitter {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
    }

    #[repr(C)]
    pub struct C_INIT_RemapNamedModelMeshGroupToScalar {
        pub pad_0: [u8; 0x230], // 0x0
    }

    #[repr(C)]
    pub struct C_OP_SetControlPointOrientationToCPVelocity {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
    }

    #[repr(C)]
    pub struct C_OP_RopeSpringConstraint {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x178], // 0x1e0
        pub _: [u8; 0x178], // 0x358
        pub _: [u8; 0x178], // 0x4d0
        pub _: [u8; 0x8], // 0x648
        pub _: [u8; 0x178], // 0x650
    }

    #[repr(C)]
    pub struct C_INIT_PositionWarpScalar {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0xc], // 0x1e8
        pub _: [u8; 0xc], // 0x1f4
        pub _: [u8; 0x178], // 0x200
        pub _: [u8; 0x4], // 0x378
        pub _: [u8; 0x4], // 0x37c
        pub _: [u8; 0x8], // 0x380
    }

    #[repr(C)]
    pub struct C_OP_ForceControlPointStub {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x8], // 0x1e8
    }

    #[repr(C)]
    pub struct C_OP_VectorNoise {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0xc], // 0x1e4
        pub _: [u8; 0xc], // 0x1f0
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x1], // 0x200
        pub _: [u8; 0x3], // 0x201
        pub _: [u8; 0x4], // 0x204
    }

    #[repr(C)]
    pub struct C_OP_RemapParticleCountToScalar {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x178], // 0x360
        pub _: [u8; 0x178], // 0x4d8
        pub _: [u8; 0x178], // 0x650
        pub _: [u8; 0x4], // 0x7c8
        pub _: [u8; 0x4], // 0x7cc
    }

    #[repr(C)]
    pub struct C_INIT_QuantizeFloat {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x8], // 0x360
    }

    #[repr(C)]
    pub struct C_OP_RemapModelVolumetoCP {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x4], // 0x200
        pub _: [u8; 0x4], // 0x204
        pub _: [u8; 0x4], // 0x208
        pub _: [u8; 0x1], // 0x20c
        pub _: [u8; 0x3], // 0x20d
    }

    #[repr(C)]
    pub struct C_OP_SetToCP {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0xc], // 0x1e4
        pub _: [u8; 0x8], // 0x1f0
    }

    #[repr(C)]
    pub struct ParticleControlPointDriver_t {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0xc], // 0x20
        pub _: [u8; 0xc], // 0x2c
        pub _: [u8; 0x8], // 0x38
    }

    #[repr(C)]
    pub struct C_OP_ParentVortices {
        pub pad_0: [u8; 0x1f0], // 0x0
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0xc], // 0x1f4
        pub _: [u8; 0x8], // 0x200
    }

    #[repr(C)]
    pub struct C_OP_SetControlPointToCPVelocity {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x8], // 0x1f8
        pub _: [u8; 0x6d8], // 0x200
    }

    #[repr(C)]
    pub struct C_OP_ClientPhysics {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x8], // 0x230
        pub _: [u8; 0x8], // 0x238
        pub _: [u8; 0x178], // 0x240
        pub _: [u8; 0x178], // 0x3b8
        pub _: [u8; 0x4], // 0x530
        pub _: [u8; 0x4], // 0x534
        pub _: [u8; 0x1], // 0x538
        pub _: [u8; 0x1], // 0x539
        pub _: [u8; 0x2], // 0x53a
        pub _: [u8; 0x4], // 0x53c
        pub _: [u8; 0x4], // 0x540
        pub _: [u8; 0x4], // 0x544
        pub _: [u8; 0x4], // 0x548
        pub _: [u8; 0x4], // 0x54c
        pub _: [u8; 0x8], // 0x550
    }

    #[repr(C)]
    pub struct C_OP_SpinYaw {
        pub pad_0: [u8; 0x1f8], // 0x0
    }

    #[repr(C)]
    pub struct PointDefinitionWithTimeValues_t {
        pub pad_0: [u8; 0x14], // 0x0
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct RenderProjectedMaterial_t {
        pub _: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct C_INIT_SetFloatAttributeToVectorExpression {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x8], // 0x1e8
        pub _: [u8; 0x6d8], // 0x1f0
        pub _: [u8; 0x6d8], // 0x8c8
        pub _: [u8; 0x178], // 0xfa0
        pub _: [u8; 0x4], // 0x1118
        pub _: [u8; 0x4], // 0x111c
    }

    #[repr(C)]
    pub struct C_OP_ExternalWindForce {
        pub pad_0: [u8; 0x1f0], // 0x0
        pub _: [u8; 0x6d8], // 0x1f0
        pub _: [u8; 0x6d8], // 0x8c8
        pub _: [u8; 0x1], // 0xfa0
        pub _: [u8; 0x1], // 0xfa1
        pub _: [u8; 0x1], // 0xfa2
        pub _: [u8; 0x5], // 0xfa3
        pub _: [u8; 0x6d8], // 0xfa8
        pub _: [u8; 0x8], // 0x1680
        pub _: [u8; 0x178], // 0x1688
        pub _: [u8; 0x178], // 0x1800
        pub _: [u8; 0x6d8], // 0x1978
    }

    #[repr(C)]
    pub struct C_INIT_ModelCull {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x1], // 0x1ec
        pub _: [u8; 0x1], // 0x1ed
        pub _: [u8; 0x1], // 0x1ee
        pub _: [u8; 0x81], // 0x1ef
    }

    #[repr(C)]
    pub struct C_OP_RenderSprites {
        pub pad_0: [u8; 0x2ed8], // 0x0
        pub _: [u8; 0x178], // 0x2ed8
        pub _: [u8; 0x4], // 0x3050
        pub _: [u8; 0x4], // 0x3054
        pub _: [u8; 0x4], // 0x3058
        pub _: [u8; 0x4], // 0x305c
        pub _: [u8; 0x178], // 0x3060
        pub _: [u8; 0x178], // 0x31d8
        pub _: [u8; 0x178], // 0x3350
        pub _: [u8; 0x178], // 0x34c8
        pub _: [u8; 0x178], // 0x3640
        pub _: [u8; 0x4], // 0x37b8
        pub _: [u8; 0x4], // 0x37bc
        pub _: [u8; 0x1], // 0x37c0
        pub _: [u8; 0x3], // 0x37c1
        pub _: [u8; 0x4], // 0x37c4
        pub _: [u8; 0x4], // 0x37c8
        pub _: [u8; 0x4], // 0x37cc
        pub _: [u8; 0x4], // 0x37d0
        pub _: [u8; 0x4], // 0x37d4
        pub _: [u8; 0x4], // 0x37d8
        pub _: [u8; 0x4], // 0x37dc
        pub _: [u8; 0x4], // 0x37e0
        pub _: [u8; 0x4], // 0x37e4
        pub _: [u8; 0x8], // 0x37e8
        pub _: [u8; 0x6d8], // 0x37f0
        pub _: [u8; 0x178], // 0x3ec8
        pub _: [u8; 0x178], // 0x4040
        pub _: [u8; 0x4], // 0x41b8
        pub _: [u8; 0xc], // 0x41bc
    }

    #[repr(C)]
    pub struct C_OP_PercentageBetweenTransformLerpCPs {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x8], // 0x1e8
        pub _: [u8; 0x68], // 0x1f0
        pub _: [u8; 0x68], // 0x258
        pub _: [u8; 0x4], // 0x2c0
        pub _: [u8; 0x4], // 0x2c4
        pub _: [u8; 0x4], // 0x2c8
        pub _: [u8; 0x4], // 0x2cc
        pub _: [u8; 0x4], // 0x2d0
        pub _: [u8; 0x1], // 0x2d4
        pub _: [u8; 0x3], // 0x2d5
    }

    #[repr(C)]
    pub struct C_OP_SetPerChildControlPoint {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x8], // 0x1e8
        pub _: [u8; 0x178], // 0x1f0
        pub _: [u8; 0x178], // 0x368
        pub _: [u8; 0x4], // 0x4e0
        pub _: [u8; 0x4], // 0x4e4
        pub _: [u8; 0x8], // 0x4e8
    }

    #[repr(C)]
    pub struct C_OP_RenderTreeShake {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x4], // 0x230
        pub _: [u8; 0x4], // 0x234
        pub _: [u8; 0x4], // 0x238
        pub _: [u8; 0x4], // 0x23c
        pub _: [u8; 0x4], // 0x240
        pub _: [u8; 0x4], // 0x244
        pub _: [u8; 0x4], // 0x248
        pub _: [u8; 0x4], // 0x24c
        pub _: [u8; 0x4], // 0x250
        pub _: [u8; 0x4], // 0x254
    }

    #[repr(C)]
    pub struct C_OP_WorldCollideConstraint {
        pub pad_0: [u8; 0x1e0], // 0x0
    }

    #[repr(C)]
    pub struct C_OP_SetAttributeToScalarExpression {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x8], // 0x1e0
        pub _: [u8; 0x178], // 0x1e8
        pub _: [u8; 0x178], // 0x360
        pub _: [u8; 0x178], // 0x4d8
        pub _: [u8; 0x4], // 0x650
        pub _: [u8; 0x2c], // 0x654
    }

    #[repr(C)]
    pub struct C_OP_CycleScalar {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x1], // 0x1f0
        pub _: [u8; 0x3], // 0x1f1
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x8], // 0x200
    }

    #[repr(C)]
    pub struct C_OP_RenderMaterialProxy {
        pub pad_0: [u8; 0x230], // 0x0
        pub _: [u8; 0x4], // 0x230
        pub _: [u8; 0x4], // 0x234
        pub _: [u8; 0x18], // 0x238
        pub _: [u8; 0x8], // 0x250
        pub _: [u8; 0x178], // 0x258
        pub _: [u8; 0x6d8], // 0x3d0
        pub _: [u8; 0x178], // 0xaa8
        pub _: [u8; 0x20], // 0xc20
    }

    #[repr(C)]
    pub struct FloatInputMaterialVariable_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x178], // 0x8
    }

    #[repr(C)]
    pub struct C_OP_RampScalarLinear {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x2c], // 0x1f4
        pub _: [u8; 0x4], // 0x220
        pub _: [u8; 0xc], // 0x224
    }

    #[repr(C)]
    pub struct C_OP_RotateVector {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0xc], // 0x1e4
        pub _: [u8; 0xc], // 0x1f0
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x4], // 0x200
        pub _: [u8; 0x4], // 0x204
        pub _: [u8; 0x178], // 0x208
    }

    #[repr(C)]
    pub struct C_INIT_InitVecCollection {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x6d8], // 0x1e8
        pub _: [u8; 0x8], // 0x8c0
    }

    #[repr(C)]
    pub struct C_INIT_RemapParticleCountToNamedModelMeshGroupScalar {
        pub pad_0: [u8; 0x238], // 0x0
    }

    #[repr(C)]
    pub struct C_INIT_SequenceFromCP {
        pub pad_0: [u8; 0x1e8], // 0x0
        pub _: [u8; 0x1], // 0x1e8
        pub _: [u8; 0x3], // 0x1e9
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x10], // 0x1f0
    }

    #[repr(C)]
    pub struct C_OP_CPOffsetToPercentageBetweenCPs {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x4], // 0x1e8
        pub _: [u8; 0x4], // 0x1ec
        pub _: [u8; 0x4], // 0x1f0
        pub _: [u8; 0x4], // 0x1f4
        pub _: [u8; 0x4], // 0x1f8
        pub _: [u8; 0x4], // 0x1fc
        pub _: [u8; 0x1], // 0x200
        pub _: [u8; 0x3], // 0x201
        pub _: [u8; 0xc], // 0x204
    }

    #[repr(C)]
    pub struct C_OP_LerpEndCapScalar {
        pub pad_0: [u8; 0x1e0], // 0x0
        pub _: [u8; 0x4], // 0x1e0
        pub _: [u8; 0x4], // 0x1e4
        pub _: [u8; 0x8], // 0x1e8
    }

}
