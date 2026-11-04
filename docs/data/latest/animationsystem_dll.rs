/* cesium dumper | generated from live schema */
#![allow(non_snake_case, non_camel_case_types, dead_code)]

pub mod animationsystem_dll {

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
    pub struct CAnimationLayer {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0xc], // 0x10
        pub _: [u8; 0xc], // 0x1c
        pub _: [u8; 0xc], // 0x28
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x4], // 0x44
        pub _: [u8; 0x4], // 0x48
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
    pub struct CAnimFrameBlockAnim {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x18], // 0x8
    }

    #[repr(C)]
    pub struct CZeroPoseUpdateNode {
        pub pad_0: [u8; 0x60], // 0x0
    }

    #[repr(C)]
    pub struct CSlowDownOnSlopesUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub _: [u8; 0x8], // 0x70
    }

    #[repr(C)]
    pub struct COrientationWarpUpdateNode {
        pub pad_0: [u8; 0x74], // 0x0
        pub _: [u8; 0x4], // 0x74
        pub _: [u8; 0x2], // 0x78
        pub _: [u8; 0x2], // 0x7a
        pub _: [u8; 0x4], // 0x7c
        pub _: [u8; 0x4], // 0x80
        pub _: [u8; 0x4], // 0x84
        pub _: [u8; 0x8], // 0x88
        pub _: [u8; 0x18], // 0x90
        pub _: [u8; 0x4], // 0xa8
        pub _: [u8; 0x4], // 0xac
        pub _: [u8; 0x4], // 0xb0
        pub _: [u8; 0x4], // 0xb4
        pub _: [u8; 0x8], // 0xb8
    }

    #[repr(C)]
    pub struct CAnimParameterBase {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x18], // 0x30
        pub _: [u8; 0x20], // 0x48
        pub _: [u8; 0x1], // 0x68
        pub _: [u8; 0x7], // 0x69
    }

    #[repr(C)]
    pub struct CSequenceFinishedAnimTag {
        pub pad_0: [u8; 0x58], // 0x0
        pub _: [u8; 0x8], // 0x58
    }

    #[repr(C)]
    pub struct CSceneObjectData {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0xc], // 0xc
        pub _: [u8; 0x10], // 0x18
        pub _: [u8; 0x10], // 0x28
        pub _: [u8; 0x10], // 0x38
        pub _: [u8; 0x10], // 0x48
        pub _: [u8; 0x60], // 0x58
    }

    #[repr(C)]
    pub struct CFootCycle {
        pub pad_0: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CParticleModelInput {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x40], // 0x18
        pub _: [u8; 0x8], // 0x58
    }

    #[repr(C)]
    pub struct CInputStreamUpdateNode {
        pub pad_0: [u8; 0x60], // 0x0
    }

    #[repr(C)]
    pub struct CNmFootIKTask {
        pub pad_0: [u8; 0x70], // 0x0
        pub _: [u8; 0x4], // 0x70
        pub _: [u8; 0xc], // 0x74
        pub _: [u8; 0x20], // 0x80
        pub _: [u8; 0x20], // 0xa0
        pub _: [u8; 0x4], // 0xc0
        pub _: [u8; 0xc], // 0xc4
        pub _: [u8; 0x30], // 0xd0
        pub _: [u8; 0x30], // 0x100
        pub _: [u8; 0x4], // 0x130
        pub _: [u8; 0x4], // 0x134
        pub _: [u8; 0x1], // 0x138
        pub _: [u8; 0x7], // 0x139
    }

    #[repr(C)]
    pub struct CIntAnimParameter {
        pub pad_0: [u8; 0x80], // 0x0
        pub _: [u8; 0x4], // 0x80
        pub _: [u8; 0x4], // 0x84
        pub _: [u8; 0x8], // 0x88
    }

    #[repr(C)]
    pub struct CNmParameterizedBlendNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x2], // 0x28
        pub _: [u8; 0x6], // 0x2a
    }

    #[repr(C)]
    pub struct CNmScaleTask {
        pub pad_0: [u8; 0xd0], // 0x0
    }

    #[repr(C)]
    pub struct PerTickSettings_t {
        pub _: [u8; 0x20], // 0x0
        pub _: [u8; 0x20], // 0x20
        pub _: [u8; 0x20], // 0x40
        pub _: [u8; 0x63c], // 0x60
        pub _: [u8; 0x8], // 0x69c
        pub _: [u8; 0x4], // 0x6a4
        pub _: [u8; 0x4], // 0x6a8
        pub _: [u8; 0x8], // 0x6ac
        pub _: [u8; 0x1], // 0x6b4
        pub _: [u8; 0x1], // 0x6b5
        pub _: [u8; 0x1], // 0x6b6
        pub _: [u8; 0x9], // 0x6b7
    }

    #[repr(C)]
    pub struct CNmFrameSnapEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x8], // 0x18
    }

    #[repr(C)]
    pub struct CAnimNodePath {
        pub _: [u8; 0x2c], // 0x0
        pub _: [u8; 0x4], // 0x2c
    }

    #[repr(C)]
    pub struct AnimNodeOutputID {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CNmSyncTrack {
        pub _: [u8; 0xa8], // 0x0
        pub _: [u8; 0x8], // 0xa8
    }

    #[repr(C)]
    pub struct CSeqBoneMaskList {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x18], // 0x28
        pub _: [u8; 0x8], // 0x40
        pub _: [u8; 0x18], // 0x48
    }

    #[repr(C)]
    pub struct CAnimEncodedFrames {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x18], // 0x18
        pub _: [u8; 0xa8], // 0x30
    }

    #[repr(C)]
    pub struct SampleCode {
        pub _: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct CCachedPose {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
        pub _: [u8; 0x18], // 0x20
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
    }

    #[repr(C)]
    pub struct CNmTransitionEventConditionNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x2], // 0x1c
        pub _: [u8; 0x2], // 0x1e
    }

    #[repr(C)]
    pub struct CTaskStatusAnimTag {
        pub pad_0: [u8; 0x58], // 0x0
    }

    #[repr(C)]
    pub struct CStateNodeInstanceData {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
        pub _: [u8; 0x1c], // 0x20
        pub _: [u8; 0x10], // 0x3c
    }

    #[repr(C)]
    pub struct CMotionGraphConfig {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
    }

    #[repr(C)]
    pub struct CMotionSearchNode {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x20], // 0x18
        pub _: [u8; 0x18], // 0x38
        pub _: [u8; 0x18], // 0x50
        pub _: [u8; 0x18], // 0x68
    }

    #[repr(C)]
    pub struct CAnimActivity {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x8], // 0x18
    }

    #[repr(C)]
    pub struct CAnimScriptManager {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x190], // 0x10
    }

    #[repr(C)]
    pub struct AnimationDecodeDebugDumpElement_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x18], // 0x28
        pub _: [u8; 0x18], // 0x40
        pub _: [u8; 0x18], // 0x58
    }

    #[repr(C)]
    pub struct CChoreoInstanceData {
        pub _: [u8; 0x398], // 0x0
    }

    #[repr(C)]
    pub struct PulseRuntimeVarIndex_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct ConfigIndex {
        pub _: [u8; 0x2], // 0x0
        pub _: [u8; 0x2], // 0x2
    }

    #[repr(C)]
    pub struct VPhysXCollisionAttributes_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x18], // 0x8
        pub _: [u8; 0x18], // 0x20
        pub _: [u8; 0x18], // 0x38
        pub _: [u8; 0x18], // 0x50
        pub _: [u8; 0x8], // 0x68
        pub _: [u8; 0x18], // 0x70
        pub _: [u8; 0x18], // 0x88
        pub _: [u8; 0x18], // 0xa0
        pub _: [u8; 0x18], // 0xb8
    }

    #[repr(C)]
    pub struct CSequenceUpdateNode {
        pub pad_0: [u8; 0x78], // 0x0
        pub _: [u8; 0x4], // 0x78
        pub _: [u8; 0x4], // 0x7c
        pub _: [u8; 0x18], // 0x80
        pub _: [u8; 0x18], // 0x98
    }

    #[repr(C)]
    pub struct CStateMachineInstanceData {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0xc], // 0x4
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x8], // 0x14
    }

    #[repr(C)]
    pub struct CNmPassthroughNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CNmClipReferenceNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct CNmGraphDefinition__ExternalGraphSlot_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct PulseRuntimeEntrypointIndex_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CAimCameraUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub _: [u8; 0x2], // 0x70
        pub _: [u8; 0x2], // 0x72
        pub _: [u8; 0x2], // 0x74
        pub _: [u8; 0x2], // 0x76
        pub _: [u8; 0x2], // 0x78
        pub _: [u8; 0x2], // 0x7a
        pub _: [u8; 0x4], // 0x7c
        pub _: [u8; 0x38], // 0x80
    }

    #[repr(C)]
    pub struct PulseRuntimeDomainValueIndex_t {
        pub _: [u8; 0x2], // 0x0
    }

    #[repr(C)]
    pub struct LookData {
        pub _: [u8; 0x18], // 0x0
    }

    #[repr(C)]
    pub struct CSeqSeqDescFlag {
        pub _: [u8; 0x1], // 0x0
        pub _: [u8; 0x1], // 0x1
        pub _: [u8; 0x1], // 0x2
        pub _: [u8; 0x1], // 0x3
        pub _: [u8; 0x1], // 0x4
        pub _: [u8; 0x1], // 0x5
        pub _: [u8; 0x1], // 0x6
        pub _: [u8; 0x1], // 0x7
        pub _: [u8; 0x1], // 0x8
        pub _: [u8; 0x1], // 0x9
        pub _: [u8; 0x1], // 0xa
    }

    #[repr(C)]
    pub struct PermModelInfo_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0xc], // 0x4
        pub _: [u8; 0xc], // 0x10
        pub _: [u8; 0xc], // 0x1c
        pub _: [u8; 0xc], // 0x28
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0xc], // 0x38
        pub _: [u8; 0x4], // 0x44
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x8], // 0x50
    }

    #[repr(C)]
    pub struct StanceInfo_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0x4], // 0xc
    }

    #[repr(C)]
    pub struct IKBoneNameAndIndex_t {
        pub _: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct CPulse_Chunk {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x10], // 0x10
        pub _: [u8; 0x10], // 0x20
        pub _: [u8; 0x30], // 0x30
    }

    #[repr(C)]
    pub struct CStanceScaleUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub _: [u8; 0x8], // 0x70
    }

    #[repr(C)]
    pub struct CPulseBreakpointLocation {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x10], // 0x8
        pub _: [u8; 0x10], // 0x18
        pub _: [u8; 0x8], // 0x28
    }

    #[repr(C)]
    pub struct PulseRuntimeInvokeIndex_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CNmBoneMaskBlendNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x2], // 0x12
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct CNmIDEventNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x8], // 0x18
    }

    #[repr(C)]
    pub struct HitReactFixedSettings_t {
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
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x4], // 0x40
    }

    #[repr(C)]
    pub struct CNmPoseNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct CAnimTagBase {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x18], // 0x30
        pub _: [u8; 0x8], // 0x48
    }

    #[repr(C)]
    pub struct CPerParticleVecInput {
        pub pad_0: [u8; 0x6d8], // 0x0
    }

    #[repr(C)]
    pub struct CMotionGraph {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x18], // 0x28
        pub _: [u8; 0x8], // 0x40
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
    }

    #[repr(C)]
    pub struct CNmVectorInfoNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x6], // 0x12
    }

    #[repr(C)]
    pub struct AnimationSnapshot_t {
        pub pad_0: [u8; 0x110], // 0x0
        pub _: [u8; 0x8], // 0x110
        pub _: [u8; 0x8], // 0x118
    }

    #[repr(C)]
    pub struct CNmBlendTask {
        pub pad_0: [u8; 0x100], // 0x0
    }

    #[repr(C)]
    pub struct CNmVectorValueNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct CSeqTransition {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct CNmPoseTask {
        pub pad_0: [u8; 0x70], // 0x0
    }

    #[repr(C)]
    pub struct CAnimGraphSettingsGroup {
        pub pad_0: [u8; 0x20], // 0x0
    }

    #[repr(C)]
    pub struct CNmVirtualParameterTargetNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CAnimGraphDebugReplay {
        pub pad_0: [u8; 0x40], // 0x0
        pub _: [u8; 0x8], // 0x40
        pub _: [u8; 0x18], // 0x48
        pub _: [u8; 0x4], // 0x60
        pub _: [u8; 0x4], // 0x64
        pub _: [u8; 0x8], // 0x68
    }

    #[repr(C)]
    pub struct CVectorAnimParameter {
        pub pad_0: [u8; 0x80], // 0x0
        pub _: [u8; 0xc], // 0x80
        pub _: [u8; 0x4], // 0x8c
        pub _: [u8; 0x8], // 0x90
    }

    #[repr(C)]
    pub struct CNmCachedPoseReadTask {
        pub pad_0: [u8; 0x80], // 0x0
    }

    #[repr(C)]
    pub struct CNmStateMachineNode__StateDefinition_t {
        pub _: [u8; 0x2], // 0x0
        pub _: [u8; 0x6], // 0x2
        pub _: [u8; 0x30], // 0x8
    }

    #[repr(C)]
    pub struct CStanceOverrideUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub _: [u8; 0x18], // 0x70
        pub _: [u8; 0x10], // 0x88
        pub _: [u8; 0x4], // 0x98
        pub _: [u8; 0x4], // 0x9c
    }

    #[repr(C)]
    pub struct CNmGraphDefinition__ExternalPoseSlot_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct PhysShapeMarkup_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct CBlend2DInstanceData {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x3c], // 0x8
        pub _: [u8; 0x4], // 0x44
        pub _: [u8; 0x58], // 0x48
    }

    #[repr(C)]
    pub struct LookAtBone_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct CDirectPlaybackInstanceData {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x10], // 0x14
        pub _: [u8; 0xe0], // 0x24
        pub _: [u8; 0x4], // 0x104
        pub _: [u8; 0x10], // 0x108
        pub _: [u8; 0x4], // 0x118
        pub _: [u8; 0x4], // 0x11c
        pub _: [u8; 0x10], // 0x120
        pub _: [u8; 0x8], // 0x130
        pub _: [u8; 0x10], // 0x138
    }

    #[repr(C)]
    pub struct CNmTransitionNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x2], // 0x12
        pub _: [u8; 0x2], // 0x14
        pub _: [u8; 0x2], // 0x16
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x2], // 0x28
        pub _: [u8; 0x1], // 0x2a
        pub _: [u8; 0x5], // 0x2b
    }

    #[repr(C)]
    pub struct PulseRuntimeRegisterIndex_t {
        pub _: [u8; 0x2], // 0x0
    }

    #[repr(C)]
    pub struct CNmFloatEaseNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x2], // 0x18
        pub _: [u8; 0x1], // 0x1a
        pub _: [u8; 0x5], // 0x1b
    }

    #[repr(C)]
    pub struct CAnimationGraphInstance {
        pub pad_0: [u8; 0x329], // 0x0
        pub _: [u8; 0x17], // 0x329
    }

    #[repr(C)]
    pub struct CAnimEncodeDifference {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x18], // 0x18
        pub _: [u8; 0x18], // 0x30
        pub _: [u8; 0x18], // 0x48
        pub _: [u8; 0x18], // 0x60
        pub _: [u8; 0x18], // 0x78
        pub _: [u8; 0x18], // 0x90
    }

    #[repr(C)]
    pub struct CRootUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
    }

    #[repr(C)]
    pub struct CNmTargetOffsetNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0xe], // 0x12
        pub _: [u8; 0x10], // 0x20
        pub _: [u8; 0x10], // 0x30
    }

    #[repr(C)]
    pub struct MotionMatchingInstanceData {
        pub pad_0: [u8; 0x2c], // 0x0
        pub _: [u8; 0x58], // 0x2c
        pub _: [u8; 0x9c], // 0x84
    }

    #[repr(C)]
    pub struct CMotionGraphUpdateNode {
        pub pad_0: [u8; 0x58], // 0x0
        pub _: [u8; 0x10], // 0x58
    }

    #[repr(C)]
    pub struct CNmFloatAngleMathNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x6], // 0x12
    }

    #[repr(C)]
    pub struct PulseCursorID_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CAnimParamHandle {
        pub _: [u8; 0x1], // 0x0
        pub _: [u8; 0x1], // 0x1
    }

    #[repr(C)]
    pub struct WeightList {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
    }

    #[repr(C)]
    pub struct MotionIndex {
        pub _: [u8; 0x2], // 0x0
        pub _: [u8; 0x2], // 0x2
    }

    #[repr(C)]
    pub struct FollowAttachmentSettings_t {
        pub _: [u8; 0x80], // 0x0
        pub _: [u8; 0x4], // 0x80
        pub _: [u8; 0x1], // 0x84
        pub _: [u8; 0x1], // 0x85
        pub _: [u8; 0xa], // 0x86
    }

    #[repr(C)]
    pub struct CNmReferencedGraphNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x6], // 0x12
    }

    #[repr(C)]
    pub struct AnimNodeID {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CNmClipSelectorNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x18], // 0x28
    }

    #[repr(C)]
    pub struct CLookComponentUpdater {
        pub pad_0: [u8; 0x34], // 0x0
        pub _: [u8; 0x2], // 0x34
        pub _: [u8; 0x2], // 0x36
        pub _: [u8; 0x2], // 0x38
        pub _: [u8; 0x2], // 0x3a
        pub _: [u8; 0x2], // 0x3c
        pub _: [u8; 0x2], // 0x3e
        pub _: [u8; 0x2], // 0x40
        pub _: [u8; 0x2], // 0x42
        pub _: [u8; 0x4], // 0x44
    }

    #[repr(C)]
    pub struct CNmIsExternalPoseSetNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CAnimGraphNetworkSettings {
        pub pad_0: [u8; 0x20], // 0x0
        pub _: [u8; 0x8], // 0x20
    }

    #[repr(C)]
    pub struct CSingleFrameUpdateNode {
        pub pad_0: [u8; 0x58], // 0x0
        pub _: [u8; 0x18], // 0x58
        pub _: [u8; 0x4], // 0x70
        pub _: [u8; 0x4], // 0x74
        pub _: [u8; 0x8], // 0x78
    }

    #[repr(C)]
    pub struct CNmChainLookatNode__CDefinition {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0xc], // 0x20
        pub _: [u8; 0xc], // 0x2c
        pub _: [u8; 0x2], // 0x38
        pub _: [u8; 0x2], // 0x3a
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x30], // 0x40
        pub _: [u8; 0x1], // 0x70
        pub _: [u8; 0x7], // 0x71
    }

    #[repr(C)]
    pub struct CNmFollowBoneNode__CDefinition {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x2], // 0x28
        pub _: [u8; 0x6], // 0x2a
    }

    #[repr(C)]
    pub struct CBlockSelectionMetricEvaluator {
        pub pad_0: [u8; 0x50], // 0x0
    }

    #[repr(C)]
    pub struct MovementData {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0x14], // 0xc
        pub _: [u8; 0x14], // 0x20
        pub _: [u8; 0xc], // 0x34
        pub _: [u8; 0xc], // 0x40
        pub _: [u8; 0xc], // 0x4c
        pub _: [u8; 0xc], // 0x58
        pub _: [u8; 0x4], // 0x64
        pub _: [u8; 0xc], // 0x68
        pub _: [u8; 0xc], // 0x74
        pub _: [u8; 0xc], // 0x80
        pub _: [u8; 0xc], // 0x8c
        pub _: [u8; 0xc], // 0x98
        pub _: [u8; 0xc], // 0xa4
        pub _: [u8; 0xc], // 0xb0
        pub _: [u8; 0xc], // 0xbc
        pub _: [u8; 0x14], // 0xc8
        pub _: [u8; 0xc], // 0xdc
    }

    #[repr(C)]
    pub struct CRemapValueComponentUpdater {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x18], // 0x30
    }

    #[repr(C)]
    pub struct CModelConfigList {
        pub _: [u8; 0x1], // 0x0
        pub _: [u8; 0x7], // 0x1
        pub _: [u8; 0x18], // 0x8
    }

    #[repr(C)]
    pub struct CSeqAutoLayerFlag {
        pub _: [u8; 0x1], // 0x0
        pub _: [u8; 0x1], // 0x1
        pub _: [u8; 0x1], // 0x2
        pub _: [u8; 0x1], // 0x3
        pub _: [u8; 0x1], // 0x4
        pub _: [u8; 0x1], // 0x5
        pub _: [u8; 0x1], // 0x6
        pub _: [u8; 0x1], // 0x7
    }

    #[repr(C)]
    pub struct AnimStateID {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CNmIDEventConditionNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x40], // 0x18
    }

    #[repr(C)]
    pub struct ModelBoneFlexDriver_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x18], // 0x10
    }

    #[repr(C)]
    pub struct CMorphData {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
    }

    #[repr(C)]
    pub struct CFootPinningUpdateNode {
        pub pad_0: [u8; 0x78], // 0x0
        pub _: [u8; 0x30], // 0x78
        pub _: [u8; 0x8], // 0xa8
        pub _: [u8; 0x18], // 0xb0
        pub _: [u8; 0x8], // 0xc8
    }

    #[repr(C)]
    pub struct CSeqPoseSetting {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x10], // 0x10
        pub _: [u8; 0x10], // 0x20
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x1], // 0x34
        pub _: [u8; 0x1], // 0x35
        pub _: [u8; 0x2], // 0x36
        pub _: [u8; 0x8], // 0x38
    }

    #[repr(C)]
    pub struct PulseGraphExecutionHistoryCursorDesc_t {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x8], // 0x28
    }

    #[repr(C)]
    pub struct CNmVirtualParameterFloatNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CAttachment {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
        pub _: [u8; 0x30], // 0x20
        pub _: [u8; 0x24], // 0x50
        pub _: [u8; 0xc], // 0x74
        pub _: [u8; 0x3], // 0x80
        pub _: [u8; 0x1], // 0x83
        pub _: [u8; 0xc], // 0x84
    }

    #[repr(C)]
    pub struct CSequenceUpdateNodeBase {
        pub pad_0: [u8; 0x6c], // 0x0
        pub _: [u8; 0x4], // 0x6c
        pub _: [u8; 0x8], // 0x70
    }

    #[repr(C)]
    pub struct CDrawCullingData {
        pub _: [u8; 0x3], // 0x0
        pub _: [u8; 0x1], // 0x3
    }

    #[repr(C)]
    pub struct VPhysXJoint_t {
        pub _: [u8; 0x2], // 0x0
        pub _: [u8; 0x2], // 0x2
        pub _: [u8; 0x2], // 0x4
        pub _: [u8; 0xa], // 0x6
        pub _: [u8; 0x20], // 0x10
        pub _: [u8; 0x20], // 0x30
        pub _: [u8; 0x1], // 0x50
        pub _: [u8; 0x1], // 0x51
        pub _: [u8; 0x1], // 0x52
        pub _: [u8; 0x1], // 0x53
        pub _: [u8; 0x8], // 0x54
        pub _: [u8; 0x4], // 0x5c
        pub _: [u8; 0xc], // 0x60
        pub _: [u8; 0x4], // 0x6c
        pub _: [u8; 0x4], // 0x70
        pub _: [u8; 0x8], // 0x74
        pub _: [u8; 0x4], // 0x7c
        pub _: [u8; 0x8], // 0x80
        pub _: [u8; 0x4], // 0x88
        pub _: [u8; 0xc], // 0x8c
        pub _: [u8; 0x4], // 0x98
        pub _: [u8; 0x4], // 0x9c
        pub _: [u8; 0x4], // 0xa0
        pub _: [u8; 0x4], // 0xa4
        pub _: [u8; 0x4], // 0xa8
        pub _: [u8; 0x4], // 0xac
        pub _: [u8; 0x4], // 0xb0
        pub _: [u8; 0x4], // 0xb4
        pub _: [u8; 0x8], // 0xb8
        pub _: [u8; 0x10], // 0xc0
    }

    #[repr(C)]
    pub struct CStateNodeTransitionData {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0xc], // 0x10
    }

    #[repr(C)]
    pub struct CTimeRemainingMetricEvaluator {
        pub pad_0: [u8; 0x50], // 0x0
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
        pub _: [u8; 0x4], // 0x58
        pub _: [u8; 0x4], // 0x5c
    }

    #[repr(C)]
    pub struct CParticleInput {
        pub pad_0: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct PulseRuntimeTempVarIndex_t {
        pub _: [u8; 0x2], // 0x0
    }

    #[repr(C)]
    pub struct CModelConfigElement {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x38], // 0x10
    }

    #[repr(C)]
    pub struct CNmControlParameterVectorNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct FootFixedSettings {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x10], // 0x10
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
    }

    #[repr(C)]
    pub struct CNmBoneMaskSwitchNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x2], // 0x12
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
    }

    #[repr(C)]
    pub struct CModelConfig {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
        pub _: [u8; 0x1], // 0x20
        pub _: [u8; 0x7], // 0x21
    }

    #[repr(C)]
    pub struct AnimComponentID {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct VPhysXAggregateData_t {
        pub _: [u8; 0x2], // 0x0
        pub _: [u8; 0x2], // 0x2
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x18], // 0x8
        pub _: [u8; 0x18], // 0x20
        pub _: [u8; 0x18], // 0x38
        pub _: [u8; 0x18], // 0x50
        pub _: [u8; 0x18], // 0x68
        pub _: [u8; 0x18], // 0x80
        pub _: [u8; 0x18], // 0x98
        pub _: [u8; 0x18], // 0xb0
        pub _: [u8; 0x18], // 0xc8
        pub _: [u8; 0x8], // 0xe0
        pub _: [u8; 0x18], // 0xe8
        pub _: [u8; 0x18], // 0x100
        pub _: [u8; 0x18], // 0x118
        pub _: [u8; 0x18], // 0x130
        pub _: [u8; 0x8], // 0x148
    }

    #[repr(C)]
    pub struct CNmGraphDefinition {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x18], // 0x30
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x18], // 0x50
        pub _: [u8; 0x18], // 0x68
        pub _: [u8; 0x18], // 0x80
        pub _: [u8; 0x18], // 0x98
        pub _: [u8; 0x18], // 0xb0
        pub _: [u8; 0x88], // 0xc8
        pub _: [u8; 0x18], // 0x150
        pub _: [u8; 0x50], // 0x168
    }

    #[repr(C)]
    pub struct CNmSelectorNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x18], // 0x28
    }

    #[repr(C)]
    pub struct CAnimDemoCaptureSettings {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x8], // 0x30
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x8], // 0x40
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x18], // 0x50
        pub _: [u8; 0x18], // 0x68
    }

    #[repr(C)]
    pub struct IKDemoCaptureSettings_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
    }

    #[repr(C)]
    pub struct CSeqMultiFetchFlag {
        pub _: [u8; 0x1], // 0x0
        pub _: [u8; 0x1], // 0x1
        pub _: [u8; 0x1], // 0x2
        pub _: [u8; 0x1], // 0x3
        pub _: [u8; 0x1], // 0x4
        pub _: [u8; 0x1], // 0x5
    }

    #[repr(C)]
    pub struct PulseRegisterMap_t {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x10], // 0x10
        pub _: [u8; 0x10], // 0x20
    }

    #[repr(C)]
    pub struct VPhysXRange_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct CStopAtGoalUpdateNode {
        pub pad_0: [u8; 0x74], // 0x0
        pub _: [u8; 0x4], // 0x74
        pub _: [u8; 0x4], // 0x78
        pub _: [u8; 0x4], // 0x7c
        pub _: [u8; 0x8], // 0x80
        pub _: [u8; 0x18], // 0x88
    }

    #[repr(C)]
    pub struct CNmIDEventPercentageThroughNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x8], // 0x18
    }

    #[repr(C)]
    pub struct CAnimBoneDifference {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x10], // 0x10
        pub _: [u8; 0xc], // 0x20
        pub _: [u8; 0x1], // 0x2c
        pub _: [u8; 0x3], // 0x2d
    }

    #[repr(C)]
    pub struct CNmCachedBoolNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct CAnimCycle {
        pub pad_0: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CActionComponentUpdater {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x18], // 0x30
    }

    #[repr(C)]
    pub struct CDirectionalBlendInstanceData {
        pub _: [u8; 0x14], // 0x0
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0xc], // 0x1c
        pub _: [u8; 0xc], // 0x28
        pub _: [u8; 0xc], // 0x34
        pub _: [u8; 0x10], // 0x40
    }

    #[repr(C)]
    pub struct CDampedPathAnimMotorUpdater {
        pub pad_0: [u8; 0x2c], // 0x0
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x2], // 0x34
        pub _: [u8; 0x2], // 0x36
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x8], // 0x40
    }

    #[repr(C)]
    pub struct CNmCachedFloatNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct CNmFloatSwitchNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x2], // 0x12
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
    }

    #[repr(C)]
    pub struct CModelConfigElement_SetMaterialGroupOnAttachedModels {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x8], // 0x48
    }

    #[repr(C)]
    pub struct CNmFloatChannelData {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x18], // 0x28
        pub _: [u8; 0x18], // 0x40
    }

    #[repr(C)]
    pub struct CNmEntityAttributeEventBase {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x18], // 0x20
    }

    #[repr(C)]
    pub struct CNmVirtualParameterBoneMaskNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct SequenceData {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x34], // 0x4
    }

    #[repr(C)]
    pub struct CPathHelperUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub _: [u8; 0x4], // 0x70
        pub _: [u8; 0x4], // 0x74
    }

    #[repr(C)]
    pub struct MaterialGroup_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
    }

    #[repr(C)]
    pub struct CMorphBundleData {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x18], // 0x8
        pub _: [u8; 0x18], // 0x20
    }

    #[repr(C)]
    pub struct CModelConfigElement_UserPick {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x18], // 0x48
    }

    #[repr(C)]
    pub struct CSolveIKTargetHandle_t {
        pub _: [u8; 0x2], // 0x0
        pub _: [u8; 0x2], // 0x2
    }

    #[repr(C)]
    pub struct CFootAdjustmentUpdateNode {
        pub pad_0: [u8; 0x78], // 0x0
        pub _: [u8; 0x18], // 0x78
        pub _: [u8; 0x4], // 0x90
        pub _: [u8; 0x4], // 0x94
        pub _: [u8; 0x4], // 0x98
        pub _: [u8; 0x4], // 0x9c
        pub _: [u8; 0x4], // 0xa0
        pub _: [u8; 0x4], // 0xa4
        pub _: [u8; 0x1], // 0xa8
        pub _: [u8; 0x7], // 0xa9
    }

    #[repr(C)]
    pub struct CChoreoUpdateNode {
        pub pad_0: [u8; 0x78], // 0x0
    }

    #[repr(C)]
    pub struct CAimConstraint {
        pub pad_0: [u8; 0x60], // 0x0
        pub _: [u8; 0x10], // 0x60
        pub _: [u8; 0x10], // 0x70
    }

    #[repr(C)]
    pub struct CMaterialDrawDescriptor__RigidMeshPart_t {
        pub _: [u8; 0x2], // 0x0
        pub _: [u8; 0x2], // 0x2
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
    }

    #[repr(C)]
    pub struct CFootFallAnimTag {
        pub pad_0: [u8; 0x58], // 0x0
        pub _: [u8; 0x8], // 0x58
    }

    #[repr(C)]
    pub struct CMaterialDrawDescriptor {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0xc], // 0x4
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x1], // 0x2c
        pub _: [u8; 0x3], // 0x2d
        pub _: [u8; 0x10], // 0x30
        pub _: [u8; 0x10], // 0x40
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
        pub _: [u8; 0x4], // 0x58
        pub _: [u8; 0x4], // 0x5c
        pub _: [u8; 0x68], // 0x60
        pub _: [u8; 0x20], // 0xc8
        pub _: [u8; 0x30], // 0xe8
        pub _: [u8; 0x8], // 0x118
    }

    #[repr(C)]
    pub struct CNmSkeleton {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x10], // 0x8
        pub _: [u8; 0x18], // 0x18
        pub _: [u8; 0x18], // 0x30
        pub _: [u8; 0x18], // 0x48
        pub _: [u8; 0x4], // 0x60
        pub _: [u8; 0x24], // 0x64
        pub _: [u8; 0x20], // 0x88
        pub _: [u8; 0x10], // 0xa8
        pub _: [u8; 0x10], // 0xb8
        pub _: [u8; 0x18], // 0xc8
        pub _: [u8; 0x18], // 0xe0
        pub _: [u8; 0x8], // 0xf8
    }

    #[repr(C)]
    pub struct CStepsRemainingMetricEvaluator {
        pub pad_0: [u8; 0x50], // 0x0
        pub _: [u8; 0x18], // 0x50
        pub _: [u8; 0x8], // 0x68
    }

    #[repr(C)]
    pub struct CNmVelocityBlendNode__CDefinition {
        pub pad_0: [u8; 0x30], // 0x0
    }

    #[repr(C)]
    pub struct CNmZeroPoseTask {
        pub pad_0: [u8; 0x70], // 0x0
    }

    #[repr(C)]
    pub struct CNmClothEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x8], // 0x30
        pub _: [u8; 0x8], // 0x38
    }

    #[repr(C)]
    pub struct CBodyGroupSetting {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct CVectorQuantizer {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
    }

    #[repr(C)]
    pub struct ParticleNamedValueConfiguration_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x10], // 0x8
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x8], // 0x30
    }

    #[repr(C)]
    pub struct CNmVectorCreateNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x2], // 0x12
        pub _: [u8; 0x2], // 0x14
        pub _: [u8; 0x2], // 0x16
    }

    #[repr(C)]
    pub struct CParticleVecInput {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0xc], // 0x14
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x40], // 0x28
        pub _: [u8; 0x4], // 0x68
        pub _: [u8; 0x4], // 0x6c
        pub _: [u8; 0xc], // 0x70
        pub _: [u8; 0x4], // 0x7c
        pub _: [u8; 0x4], // 0x80
        pub _: [u8; 0xc], // 0x84
        pub _: [u8; 0xc], // 0x90
        pub _: [u8; 0xc], // 0x9c
        pub _: [u8; 0x178], // 0xa8
        pub _: [u8; 0x178], // 0x220
        pub _: [u8; 0x178], // 0x398
        pub _: [u8; 0x178], // 0x510
        pub _: [u8; 0x4], // 0x688
        pub _: [u8; 0x4], // 0x68c
        pub _: [u8; 0xc], // 0x690
        pub _: [u8; 0xc], // 0x69c
        pub _: [u8; 0x18], // 0x6a8
        pub _: [u8; 0xc], // 0x6c0
        pub _: [u8; 0xc], // 0x6cc
    }

    #[repr(C)]
    pub struct CNmStateNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x20], // 0x18
        pub _: [u8; 0x20], // 0x38
        pub _: [u8; 0x20], // 0x58
        pub _: [u8; 0x18], // 0x78
        pub _: [u8; 0x18], // 0x90
        pub _: [u8; 0x2], // 0xa8
        pub _: [u8; 0x2], // 0xaa
        pub _: [u8; 0x2], // 0xac
        pub _: [u8; 0x1], // 0xae
        pub _: [u8; 0x1], // 0xaf
    }

    #[repr(C)]
    pub struct CNmBoneMaskSelectorNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x2], // 0x12
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x18], // 0x18
        pub _: [u8; 0x40], // 0x30
        pub _: [u8; 0x8], // 0x70
    }

    #[repr(C)]
    pub struct CNmVirtualParameterVectorNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CFootCycleMetricEvaluator {
        pub pad_0: [u8; 0x50], // 0x0
        pub _: [u8; 0x18], // 0x50
    }

    #[repr(C)]
    pub struct CNmConstIDNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CHitBox {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0xc], // 0x18
        pub _: [u8; 0xc], // 0x24
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x1], // 0x3c
        pub _: [u8; 0x3], // 0x3d
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x4], // 0x44
        pub _: [u8; 0x28], // 0x48
    }

    #[repr(C)]
    pub struct CNmParameterizedSelectorNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x10], // 0x28
        pub _: [u8; 0x2], // 0x38
        pub _: [u8; 0x1], // 0x3a
        pub _: [u8; 0x5], // 0x3b
    }

    #[repr(C)]
    pub struct ModelSkeletonData_t {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x18], // 0x18
        pub _: [u8; 0x18], // 0x30
        pub _: [u8; 0x18], // 0x48
        pub _: [u8; 0x18], // 0x60
        pub _: [u8; 0x18], // 0x78
        pub _: [u8; 0x18], // 0x90
    }

    #[repr(C)]
    pub struct CNmEvent {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct NmCompressionSettings_t__QuantizationRange_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct CNmBlendTaskBase {
        pub pad_0: [u8; 0x100], // 0x0
    }

    #[repr(C)]
    pub struct TagSpan_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
    }

    #[repr(C)]
    pub struct CNmConstTargetNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x30], // 0x10
    }

    #[repr(C)]
    pub struct CRemapValueUpdateItem {
        pub _: [u8; 0x2], // 0x0
        pub _: [u8; 0x2], // 0x2
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
    }

    #[repr(C)]
    pub struct PermModelDataAnimatedMaterialAttribute_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct CMotionDataSet {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x8], // 0x18
    }

    #[repr(C)]
    pub struct ParticleAttributeIndex_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CProductQuantizer {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x8], // 0x18
    }

    #[repr(C)]
    pub struct CChoiceUpdateNode {
        pub pad_0: [u8; 0x60], // 0x0
        pub _: [u8; 0x18], // 0x60
        pub _: [u8; 0x18], // 0x78
        pub _: [u8; 0x18], // 0x90
        pub _: [u8; 0x4], // 0xa8
        pub _: [u8; 0x4], // 0xac
        pub _: [u8; 0x4], // 0xb0
        pub _: [u8; 0x4], // 0xb4
        pub _: [u8; 0x1], // 0xb8
        pub _: [u8; 0x1], // 0xb9
        pub _: [u8; 0x6], // 0xba
    }

    #[repr(C)]
    pub struct SkeletonAnimCapture_t__Bone_t {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x20], // 0x10
        pub _: [u8; 0x10], // 0x30
    }

    #[repr(C)]
    pub struct CExpressionActionUpdater {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x2], // 0x18
        pub _: [u8; 0x2], // 0x1a
        pub _: [u8; 0x4], // 0x1c
    }

    #[repr(C)]
    pub struct CNmFloatMathNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x2], // 0x12
        pub _: [u8; 0x1], // 0x14
        pub _: [u8; 0x1], // 0x15
        pub _: [u8; 0x2], // 0x16
        pub _: [u8; 0x8], // 0x18
    }

    #[repr(C)]
    pub struct CAnimationGraphVisualizerLine {
        pub pad_0: [u8; 0x40], // 0x0
        pub _: [u8; 0x10], // 0x40
        pub _: [u8; 0x10], // 0x50
        pub _: [u8; 0x10], // 0x60
    }

    #[repr(C)]
    pub struct CCycleControlUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub _: [u8; 0x4], // 0x70
        pub _: [u8; 0x2], // 0x74
        pub _: [u8; 0x2], // 0x76
    }

    #[repr(C)]
    pub struct CNmTargetInfoNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x8], // 0x18
    }

    #[repr(C)]
    pub struct CDampedValueComponentUpdater {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x18], // 0x30
    }

    #[repr(C)]
    pub struct CBaseConstraint {
        pub pad_0: [u8; 0x20], // 0x0
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x10], // 0x28
        pub _: [u8; 0x10], // 0x38
        pub _: [u8; 0x18], // 0x48
    }

    #[repr(C)]
    pub struct CNmControlParameterFloatNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct BlendItem_t {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x10], // 0x18
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x8], // 0x2c
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x8], // 0x38
    }

    #[repr(C)]
    pub struct DampedPathMotorInstanceData_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0x18], // 0xc
        pub _: [u8; 0x4], // 0x24
    }

    #[repr(C)]
    pub struct CNmIsExternalGraphSlotFilledNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CNewParticleEffect {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x18], // 0x28
        pub _: [u8; 0xc], // 0x40
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x8], // 0x50
        pub _: [u8; 0x18], // 0x58
        pub _: [u8; 0x4], // 0x70
        pub _: [u8; 0x4], // 0x74
        pub _: [u8; 0x4], // 0x78
        pub _: [u8; 0xc], // 0x7c
        pub _: [u8; 0xc], // 0x88
        pub _: [u8; 0x4], // 0x94
        pub _: [u8; 0x38], // 0x98
        pub _: [u8; 0x8], // 0xd0
    }

    #[repr(C)]
    pub struct CNmClipNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x1], // 0x12
        pub _: [u8; 0x1], // 0x13
        pub _: [u8; 0x2], // 0x14
        pub _: [u8; 0x2], // 0x16
        pub _: [u8; 0x28], // 0x18
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x4], // 0x44
    }

    #[repr(C)]
    pub struct CNmMaterialAttributeEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x40], // 0x30
        pub _: [u8; 0x40], // 0x70
        pub _: [u8; 0x40], // 0xb0
        pub _: [u8; 0x40], // 0xf0
    }

    #[repr(C)]
    pub struct TagStatus {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct CNmBlend1DNode__CDefinition {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x50], // 0x30
    }

    #[repr(C)]
    pub struct CConcreteAnimParameter {
        pub pad_0: [u8; 0x70], // 0x0
        pub _: [u8; 0x4], // 0x70
        pub _: [u8; 0x4], // 0x74
        pub _: [u8; 0x1], // 0x78
        pub _: [u8; 0x1], // 0x79
        pub _: [u8; 0x1], // 0x7a
        pub _: [u8; 0x5], // 0x7b
    }

    #[repr(C)]
    pub struct CNmBoneWeightList {
        pub _: [u8; 0xe0], // 0x0
        pub _: [u8; 0x18], // 0xe0
        pub _: [u8; 0x18], // 0xf8
    }

    #[repr(C)]
    pub struct CPairedSequenceUpdateNode {
        pub pad_0: [u8; 0x78], // 0x0
        pub _: [u8; 0x10], // 0x78
    }

    #[repr(C)]
    pub struct CModelConfigElement_RandomPick {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x18], // 0x48
        pub _: [u8; 0x20], // 0x60
    }

    #[repr(C)]
    pub struct CNmReferencePoseTask {
        pub pad_0: [u8; 0x70], // 0x0
    }

    #[repr(C)]
    pub struct CNmScaleNode__CDefinition {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x2], // 0x18
        pub _: [u8; 0x6], // 0x1a
    }

    #[repr(C)]
    pub struct VPhysXConstraint2_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x2], // 0x4
        pub _: [u8; 0x2], // 0x6
        pub _: [u8; 0xf8], // 0x8
    }

    #[repr(C)]
    pub struct CConstraintTarget {
        pub pad_0: [u8; 0x20], // 0x0
        pub _: [u8; 0x10], // 0x20
        pub _: [u8; 0xc], // 0x30
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x8], // 0x40
        pub _: [u8; 0x11], // 0x48
        pub _: [u8; 0x7], // 0x59
    }

    #[repr(C)]
    pub struct SkeletonAnimCapture_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x18], // 0x8
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x18], // 0x30
        pub _: [u8; 0x18], // 0x48
        pub _: [u8; 0x4], // 0x60
        pub _: [u8; 0x44], // 0x64
        pub _: [u8; 0x18], // 0xa8
    }

    #[repr(C)]
    pub struct CAnimUser {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CPulse_TempVarBankDefinition {
        pub _: [u8; 0x28], // 0x0
    }

    #[repr(C)]
    pub struct CRagdollComponentUpdater {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x18], // 0x30
        pub _: [u8; 0x18], // 0x48
        pub _: [u8; 0x18], // 0x60
        pub _: [u8; 0x18], // 0x78
        pub _: [u8; 0x18], // 0x90
        pub _: [u8; 0x18], // 0xa8
        pub _: [u8; 0x4], // 0xc0
        pub _: [u8; 0x4], // 0xc4
        pub _: [u8; 0x4], // 0xc8
        pub _: [u8; 0xc], // 0xcc
    }

    #[repr(C)]
    pub struct ParticleNamedValueSource_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x38], // 0x28
    }

    #[repr(C)]
    pub struct CFootDefinition {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0xc], // 0x18
        pub _: [u8; 0xc], // 0x24
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
    }

    #[repr(C)]
    pub struct CSeqSynthAnimDesc {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0xc], // 0x10
        pub _: [u8; 0x8], // 0x1c
        pub _: [u8; 0x2], // 0x24
        pub _: [u8; 0x2], // 0x26
        pub _: [u8; 0x18], // 0x28
    }

    #[repr(C)]
    pub struct CNmLayerBlendNode__LayerDefinition_t {
        pub _: [u8; 0x2], // 0x0
        pub _: [u8; 0x2], // 0x2
        pub _: [u8; 0x2], // 0x4
        pub _: [u8; 0x2], // 0x6
        pub _: [u8; 0x1], // 0x8
        pub _: [u8; 0x1], // 0x9
        pub _: [u8; 0x1], // 0xa
        pub _: [u8; 0x1], // 0xb
    }

    #[repr(C)]
    pub struct CAnimComponentUpdater {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x8], // 0x28
    }

    #[repr(C)]
    pub struct CBlend2DUpdateNode {
        pub pad_0: [u8; 0x60], // 0x0
        pub _: [u8; 0x18], // 0x60
        pub _: [u8; 0x18], // 0x78
        pub _: [u8; 0x18], // 0x90
        pub _: [u8; 0x18], // 0xa8
        pub _: [u8; 0x18], // 0xc0
        pub _: [u8; 0x4], // 0xd8
        pub _: [u8; 0x4], // 0xdc
        pub _: [u8; 0x4], // 0xe0
        pub _: [u8; 0x4], // 0xe4
        pub _: [u8; 0x4], // 0xe8
        pub _: [u8; 0x4], // 0xec
        pub _: [u8; 0x1], // 0xf0
        pub _: [u8; 0x1], // 0xf1
        pub _: [u8; 0x1], // 0xf2
        pub _: [u8; 0x5], // 0xf3
    }

    #[repr(C)]
    pub struct CNmVelocityBasedSpeedScaleNode__CDefinition {
        pub pad_0: [u8; 0x20], // 0x0
    }

    #[repr(C)]
    pub struct CNPCPhysicsHull {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0xc], // 0x14
        pub _: [u8; 0xc], // 0x20
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x10], // 0x30
    }

    #[repr(C)]
    pub struct PermModelExtPart_t {
        pub _: [u8; 0x20], // 0x0
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x10], // 0x30
    }

    #[repr(C)]
    pub struct CNmCachedIDNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct CLeanMatrixUpdateNode {
        pub pad_0: [u8; 0x5c], // 0x0
        pub _: [u8; 0x24], // 0x5c
        pub _: [u8; 0x28], // 0x80
        pub _: [u8; 0x18], // 0xa8
        pub _: [u8; 0x4], // 0xc0
        pub _: [u8; 0x4], // 0xc4
        pub _: [u8; 0xc], // 0xc8
        pub _: [u8; 0xc], // 0xd4
        pub _: [u8; 0x4], // 0xe0
        pub _: [u8; 0x4], // 0xe4
        pub _: [u8; 0x8], // 0xe8
    }

    #[repr(C)]
    pub struct CSymbolAnimParameter {
        pub pad_0: [u8; 0x80], // 0x0
        pub _: [u8; 0x8], // 0x80
    }

    #[repr(C)]
    pub struct CNmFloatCurveEventNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x8], // 0x20
    }

    #[repr(C)]
    pub struct IAnimationGraphInstance {
        pub pad_0: [u8; 0x18], // 0x0
    }

    #[repr(C)]
    pub struct CNmStateMachineNode__TransitionDefinition_t {
        pub _: [u8; 0x2], // 0x0
        pub _: [u8; 0x2], // 0x2
        pub _: [u8; 0x2], // 0x4
        pub _: [u8; 0x2], // 0x6
    }

    #[repr(C)]
    pub struct CNmFloatSelectorNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x20], // 0x28
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x8], // 0x50
    }

    #[repr(C)]
    pub struct CTargetSelectorUpdateNode {
        pub pad_0: [u8; 0x60], // 0x0
        pub _: [u8; 0x8], // 0x60
        pub _: [u8; 0x1c], // 0x68
        pub _: [u8; 0x2], // 0x84
        pub _: [u8; 0x2], // 0x86
        pub _: [u8; 0x2], // 0x88
        pub _: [u8; 0x2], // 0x8a
        pub _: [u8; 0x1], // 0x8c
        pub _: [u8; 0x1], // 0x8d
        pub _: [u8; 0x2], // 0x8e
        pub _: [u8; 0x10], // 0x90
    }

    #[repr(C)]
    pub struct SlopeData {
        pub _: [u8; 0xc], // 0x0
    }

    #[repr(C)]
    pub struct CHitBoxSetList {
        pub _: [u8; 0x18], // 0x0
    }

    #[repr(C)]
    pub struct CNmIsInactiveBranchConditionNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct MotionDBIndex {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CDirectPlaybackTagData {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
    }

    #[repr(C)]
    pub struct CParticleCollectionVecInput {
        pub pad_0: [u8; 0x6d8], // 0x0
    }

    #[repr(C)]
    pub struct CNmGraphEventConditionNode__Condition_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct CNmFloatRemapNode__RemapRange_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct CNmCurrentSyncEventIDNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CNmStateCompletedConditionNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x2], // 0x12
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct CNmCameraFOVEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x40], // 0x18
    }

    #[repr(C)]
    pub struct CNmTargetWarpEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x1], // 0x18
        pub _: [u8; 0x7], // 0x19
    }

    #[repr(C)]
    pub struct CParamSpanUpdater {
        pub _: [u8; 0x18], // 0x0
    }

    #[repr(C)]
    pub struct CAnimActionUpdater {
        pub pad_0: [u8; 0x18], // 0x0
    }

    #[repr(C)]
    pub struct CParticleAnimTag {
        pub pad_0: [u8; 0x58], // 0x0
        pub _: [u8; 0x8], // 0x58
        pub _: [u8; 0x8], // 0x60
        pub _: [u8; 0x8], // 0x68
        pub _: [u8; 0x1], // 0x70
        pub _: [u8; 0x1], // 0x71
        pub _: [u8; 0x1], // 0x72
        pub _: [u8; 0x5], // 0x73
        pub _: [u8; 0x8], // 0x78
        pub _: [u8; 0x8], // 0x80
        pub _: [u8; 0x8], // 0x88
        pub _: [u8; 0x8], // 0x90
    }

    #[repr(C)]
    pub struct CCycleBase {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct FollowTargetOpFixedSettings_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x1], // 0xc
        pub _: [u8; 0x3], // 0xd
    }

    #[repr(C)]
    pub struct CNmIDSwitchNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x2], // 0x12
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
    }

    #[repr(C)]
    pub struct CNmRootMotionEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x8], // 0x18
    }

    #[repr(C)]
    pub struct CPulse_PublicOutput {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x10], // 0x18
    }

    #[repr(C)]
    pub struct CChoiceInstanceData {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0xc], // 0x10
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0xc], // 0x20
        pub _: [u8; 0x8], // 0x2c
    }

    #[repr(C)]
    pub struct CNmContactAudioTypeVData {
        pub pad_0: [u8; 0x1], // 0x0
    }

    #[repr(C)]
    pub struct CNmCameraDOFEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x40], // 0x18
    }

    #[repr(C)]
    pub struct AnimationSnapshotBase_t {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x30], // 0x10
        pub _: [u8; 0x8], // 0x40
        pub _: [u8; 0x18], // 0x48
        pub _: [u8; 0x18], // 0x60
        pub _: [u8; 0x18], // 0x78
        pub _: [u8; 0x4], // 0x90
        pub _: [u8; 0x4], // 0x94
        pub _: [u8; 0x78], // 0x98
    }

    #[repr(C)]
    pub struct CEmitTagActionUpdater {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
    }

    #[repr(C)]
    pub struct DynamicMeshDeformParams_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x1], // 0x8
        pub _: [u8; 0x1], // 0x9
        pub _: [u8; 0x1], // 0xa
        pub _: [u8; 0x1], // 0xb
    }

    #[repr(C)]
    pub struct CNmTimeConditionNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x2], // 0x12
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x1], // 0x18
        pub _: [u8; 0x7], // 0x19
    }

    #[repr(C)]
    pub struct CNmSyncEventIndexConditionNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x2], // 0x12
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct CAnimStateMachineUpdater {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
        pub _: [u8; 0x30], // 0x20
        pub _: [u8; 0x8], // 0x50
    }

    #[repr(C)]
    pub struct CUnaryUpdateNode {
        pub pad_0: [u8; 0x60], // 0x0
        pub _: [u8; 0x10], // 0x60
    }

    #[repr(C)]
    pub struct CNmIDToFloatNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x30], // 0x18
        pub _: [u8; 0x20], // 0x48
    }

    #[repr(C)]
    pub struct PlayerInputMotorInstanceData_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0xc], // 0xc
        pub _: [u8; 0x10], // 0x18
    }

    #[repr(C)]
    pub struct CSelectorUpdateNode {
        pub pad_0: [u8; 0x60], // 0x0
        pub _: [u8; 0x18], // 0x60
        pub _: [u8; 0x1c], // 0x78
        pub _: [u8; 0x8], // 0x94
        pub _: [u8; 0x8], // 0x9c
        pub _: [u8; 0x4], // 0xa4
        pub _: [u8; 0x4], // 0xa8
        pub _: [u8; 0x4], // 0xac
        pub _: [u8; 0x1], // 0xb0
        pub _: [u8; 0x1], // 0xb1
        pub _: [u8; 0x6], // 0xb2
    }

    #[repr(C)]
    pub struct NmPercent_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CStateMachineComponentUpdater {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x58], // 0x30
    }

    #[repr(C)]
    pub struct CAnimUpdateNodeRef {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct CPulse_OutputConnection {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x10], // 0x10
        pub _: [u8; 0x10], // 0x20
        pub _: [u8; 0x10], // 0x30
    }

    #[repr(C)]
    pub struct CPhysSurfaceProperties {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0xc], // 0xc
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x18], // 0x28
        pub _: [u8; 0x8], // 0x40
        pub _: [u8; 0x60], // 0x48
        pub _: [u8; 0x20], // 0xa8
    }

    #[repr(C)]
    pub struct CNmBoneMaskValueNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct CSeqPoseParamDesc {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
    }

    #[repr(C)]
    pub struct CModelConfigElement_SetBodygroup {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x8], // 0x50
    }

    #[repr(C)]
    pub struct CAnimMovement {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0xc], // 0x14
        pub _: [u8; 0xc], // 0x20
    }

    #[repr(C)]
    pub struct CParticleRemapFloatInput {
        pub pad_0: [u8; 0x178], // 0x0
    }

    #[repr(C)]
    pub struct FollowAttachmentData {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct FootStepTrigger {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
    }

    #[repr(C)]
    pub struct CNmSyncTrack__EventMarker_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct CPathMetricEvaluator {
        pub pad_0: [u8; 0x50], // 0x0
        pub _: [u8; 0x18], // 0x50
        pub _: [u8; 0x4], // 0x68
        pub _: [u8; 0x4], // 0x6c
        pub _: [u8; 0x8], // 0x70
    }

    #[repr(C)]
    pub struct CFootLockUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub _: [u8; 0x70], // 0x70
        pub _: [u8; 0x18], // 0xe0
        pub _: [u8; 0x18], // 0xf8
        pub _: [u8; 0x18], // 0x110
        pub _: [u8; 0x4], // 0x128
        pub _: [u8; 0x4], // 0x12c
        pub _: [u8; 0x4], // 0x130
        pub _: [u8; 0x4], // 0x134
        pub _: [u8; 0x4], // 0x138
        pub _: [u8; 0x4], // 0x13c
        pub _: [u8; 0x4], // 0x140
        pub _: [u8; 0x4], // 0x144
        pub _: [u8; 0x4], // 0x148
        pub _: [u8; 0x4], // 0x14c
        pub _: [u8; 0x1], // 0x150
        pub _: [u8; 0x1], // 0x151
        pub _: [u8; 0x1], // 0x152
        pub _: [u8; 0x1], // 0x153
        pub _: [u8; 0x1], // 0x154
        pub _: [u8; 0x3], // 0x155
    }

    #[repr(C)]
    pub struct CNmOrientationWarpEvent {
        pub pad_0: [u8; 0x18], // 0x0
    }

    #[repr(C)]
    pub struct CNmIDValueNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct PulseGraphExecutionHistoryNodeDesc_t {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x10], // 0x10
    }

    #[repr(C)]
    pub struct JiggleBoneSettings_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0xc], // 0x10
        pub _: [u8; 0xc], // 0x1c
        pub _: [u8; 0x4], // 0x28
    }

    #[repr(C)]
    pub struct CJumpHelperUpdateNode {
        pub pad_0: [u8; 0xb0], // 0x0
        pub _: [u8; 0x4], // 0xb0
        pub _: [u8; 0xc], // 0xb4
        pub _: [u8; 0x4], // 0xc0
        pub _: [u8; 0x4], // 0xc4
        pub _: [u8; 0x4], // 0xc8
        pub _: [u8; 0x4], // 0xcc
        pub _: [u8; 0x3], // 0xd0
        pub _: [u8; 0x5], // 0xd3
    }

    #[repr(C)]
    pub struct CNmControlParameterBoolNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct CNmChainLookatTask {
        pub pad_0: [u8; 0x120], // 0x0
    }

    #[repr(C)]
    pub struct FootLockPoseOpFixedSettings {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x18], // 0x18
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x1], // 0x38
        pub _: [u8; 0x1], // 0x39
        pub _: [u8; 0x1], // 0x3a
        pub _: [u8; 0x1], // 0x3b
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x4], // 0x44
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
        pub _: [u8; 0x4], // 0x58
        pub _: [u8; 0x4], // 0x5c
        pub _: [u8; 0x8], // 0x60
    }

    #[repr(C)]
    pub struct CBoneVelocityMetricEvaluator {
        pub pad_0: [u8; 0x50], // 0x0
        pub _: [u8; 0x8], // 0x50
    }

    #[repr(C)]
    pub struct CWarpSectionAnimTag {
        pub pad_0: [u8; 0x50], // 0x0
        pub _: [u8; 0x1], // 0x50
        pub _: [u8; 0x7], // 0x51
    }

    #[repr(C)]
    pub struct SelectorInstanceData_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0xc], // 0x8
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x14], // 0x18
    }

    #[repr(C)]
    pub struct CModelConfigElement_RandomColor {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x18], // 0x48
    }

    #[repr(C)]
    pub struct CFootMotion {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
    }

    #[repr(C)]
    pub struct CJiggleBoneUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub _: [u8; 0x20], // 0x70
    }

    #[repr(C)]
    pub struct CNmConstVectorNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x10], // 0x10
    }

    #[repr(C)]
    pub struct MoodAnimation_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct CLODComponentUpdater {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x8], // 0x30
    }

    #[repr(C)]
    pub struct CNmIsTargetSetNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CPhysSurfacePropertiesVehicle {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct CAnimDataChannelDesc {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x10], // 0x10
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x10], // 0x28
        pub _: [u8; 0x10], // 0x38
        pub _: [u8; 0x18], // 0x48
        pub _: [u8; 0x18], // 0x60
        pub _: [u8; 0x18], // 0x78
    }

    #[repr(C)]
    pub struct CPairedSequenceComponentUpdater {
        pub pad_0: [u8; 0x38], // 0x0
    }

    #[repr(C)]
    pub struct CNmParticleEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x8], // 0x30
        pub _: [u8; 0x1], // 0x38
        pub _: [u8; 0x1], // 0x39
        pub _: [u8; 0x6], // 0x3a
        pub _: [u8; 0x8], // 0x40
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x8], // 0x50
        pub _: [u8; 0x8], // 0x58
        pub _: [u8; 0x8], // 0x60
        pub _: [u8; 0x8], // 0x68
    }

    #[repr(C)]
    pub struct MotionSelection {
        pub pad_0: [u8; 0x24], // 0x0
        pub _: [u8; 0xc], // 0x24
        pub _: [u8; 0xc], // 0x30
        pub _: [u8; 0xc], // 0x3c
        pub _: [u8; 0xc], // 0x48
        pub _: [u8; 0x4], // 0x54
    }

    #[repr(C)]
    pub struct CMorphRectData {
        pub _: [u8; 0x2], // 0x0
        pub _: [u8; 0x2], // 0x2
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x18], // 0x10
    }

    #[repr(C)]
    pub struct CAnimFoot {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0xc], // 0x8
        pub _: [u8; 0xc], // 0x14
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
    }

    #[repr(C)]
    pub struct CParentConstraint {
        pub pad_0: [u8; 0x60], // 0x0
    }

    #[repr(C)]
    pub struct CNmCachedVectorNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct CNmStateNode__TimedEvent_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
    }

    #[repr(C)]
    pub struct CFootPositionMetricEvaluator {
        pub pad_0: [u8; 0x50], // 0x0
        pub _: [u8; 0x18], // 0x50
        pub _: [u8; 0x8], // 0x68
    }

    #[repr(C)]
    pub struct CParticleVariableRef {
        pub _: [u8; 0x38], // 0x0
        pub _: [u8; 0x18], // 0x38
    }

    #[repr(C)]
    pub struct CMoverInstanceData {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x18], // 0x4
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0xc], // 0x20
    }

    #[repr(C)]
    pub struct HSequence {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CDampedValueUpdateItem {
        pub _: [u8; 0x20], // 0x0
        pub _: [u8; 0x2], // 0x20
        pub _: [u8; 0x6], // 0x22
    }

    #[repr(C)]
    pub struct CAnimLocalHierarchy {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x10], // 0x10
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
    }

    #[repr(C)]
    pub struct CBlendUpdateNode {
        pub pad_0: [u8; 0x60], // 0x0
        pub _: [u8; 0x18], // 0x60
        pub _: [u8; 0x18], // 0x78
        pub _: [u8; 0x1c], // 0x90
        pub _: [u8; 0x4], // 0xac
        pub _: [u8; 0x4], // 0xb0
        pub _: [u8; 0x4], // 0xb4
        pub _: [u8; 0x18], // 0xb8
        pub _: [u8; 0x4], // 0xd0
        pub _: [u8; 0x1], // 0xd4
        pub _: [u8; 0x1], // 0xd5
        pub _: [u8; 0x1], // 0xd6
        pub _: [u8; 0x1], // 0xd7
        pub _: [u8; 0x8], // 0xd8
    }

    #[repr(C)]
    pub struct PulseGraphExecutionHistoryEntry_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x10], // 0x8
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x10], // 0x20
        pub _: [u8; 0x8], // 0x30
    }

    #[repr(C)]
    pub struct CQuaternionAnimParameter {
        pub pad_0: [u8; 0x80], // 0x0
        pub _: [u8; 0x10], // 0x80
        pub _: [u8; 0x10], // 0x90
    }

    #[repr(C)]
    pub struct PermModelData_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x58], // 0x8
        pub _: [u8; 0x18], // 0x60
        pub _: [u8; 0x18], // 0x78
        pub _: [u8; 0x18], // 0x90
        pub _: [u8; 0x18], // 0xa8
        pub _: [u8; 0x18], // 0xc0
        pub _: [u8; 0x18], // 0xd8
        pub _: [u8; 0x18], // 0xf0
        pub _: [u8; 0x18], // 0x108
        pub _: [u8; 0x18], // 0x120
        pub _: [u8; 0x18], // 0x138
        pub _: [u8; 0x18], // 0x150
        pub _: [u8; 0x18], // 0x168
        pub _: [u8; 0x8], // 0x180
        pub _: [u8; 0xa8], // 0x188
        pub _: [u8; 0x18], // 0x230
        pub _: [u8; 0x18], // 0x248
        pub _: [u8; 0x18], // 0x260
        pub _: [u8; 0x8], // 0x278
        pub _: [u8; 0x18], // 0x280
        pub _: [u8; 0x18], // 0x298
        pub _: [u8; 0x18], // 0x2b0
        pub _: [u8; 0x18], // 0x2c8
        pub _: [u8; 0x18], // 0x2e0
    }

    #[repr(C)]
    pub struct PulseCursorYieldToken_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CNmSampleTask {
        pub pad_0: [u8; 0x80], // 0x0
    }

    #[repr(C)]
    pub struct CFollowPathInstanceData {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0xc], // 0x10
        pub _: [u8; 0x8], // 0x1c
    }

    #[repr(C)]
    pub struct CStaticPoseCacheBuilder {
        pub pad_0: [u8; 0x38], // 0x0
    }

    #[repr(C)]
    pub struct ModelMeshBufferData_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x1], // 0xc
        pub _: [u8; 0x1], // 0xd
        pub _: [u8; 0x1], // 0xe
        pub _: [u8; 0x1], // 0xf
        pub _: [u8; 0x1], // 0x10
        pub _: [u8; 0x1], // 0x11
        pub _: [u8; 0x1], // 0x12
        pub _: [u8; 0x1], // 0x13
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x18], // 0x18
    }

    #[repr(C)]
    pub struct CSequenceGroupData {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x10], // 0x10
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x18], // 0x28
        pub _: [u8; 0x18], // 0x40
        pub _: [u8; 0x18], // 0x58
        pub _: [u8; 0x18], // 0x70
        pub _: [u8; 0x18], // 0x88
        pub _: [u8; 0x18], // 0xa0
        pub _: [u8; 0x18], // 0xb8
        pub _: [u8; 0x18], // 0xd0
        pub _: [u8; 0x10], // 0xe8
        pub _: [u8; 0x18], // 0xf8
        pub _: [u8; 0x10], // 0x110
        pub _: [u8; 0x18], // 0x120
    }

    #[repr(C)]
    pub struct CStateMachineUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub _: [u8; 0x58], // 0x70
        pub _: [u8; 0x18], // 0xc8
        pub _: [u8; 0x1c], // 0xe0
        pub _: [u8; 0x1], // 0xfc
        pub _: [u8; 0x1], // 0xfd
        pub _: [u8; 0x2], // 0xfe
    }

    #[repr(C)]
    pub struct CNmIDBasedSelectorNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x30], // 0x28
        pub _: [u8; 0x2], // 0x58
        pub _: [u8; 0x2], // 0x5a
        pub _: [u8; 0x4], // 0x5c
    }

    #[repr(C)]
    pub struct CAimMatrixUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub _: [u8; 0xf8], // 0x70
        pub _: [u8; 0x4], // 0x168
        pub _: [u8; 0x4], // 0x16c
        pub _: [u8; 0x4], // 0x170
        pub _: [u8; 0x1], // 0x174
        pub _: [u8; 0xb], // 0x175
    }

    #[repr(C)]
    pub struct SkeletonAnimCapture_t__Frame_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x1c], // 0x4
        pub _: [u8; 0x20], // 0x20
        pub _: [u8; 0x8], // 0x40
        pub _: [u8; 0x18], // 0x48
        pub _: [u8; 0x18], // 0x60
        pub _: [u8; 0x18], // 0x78
        pub _: [u8; 0x18], // 0x90
        pub _: [u8; 0x18], // 0xa8
    }

    #[repr(C)]
    pub struct CModelConfigElement_Command {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x10], // 0x50
    }

    #[repr(C)]
    pub struct TargetSelectorInstanceData_t {
        pub _: [u8; 0x1c], // 0x0
        pub _: [u8; 0x14], // 0x1c
    }

    #[repr(C)]
    pub struct CAnimEventDefinition {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x10], // 0x18
        pub _: [u8; 0x10], // 0x28
        pub _: [u8; 0x8], // 0x38
    }

    #[repr(C)]
    pub struct CNmRootMotionData {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x10], // 0x20
        pub _: [u8; 0x20], // 0x30
    }

    #[repr(C)]
    pub struct CPulseGraphExecutionHistory {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x28], // 0x28
        pub _: [u8; 0x28], // 0x50
    }

    #[repr(C)]
    pub struct AnimScriptHandle {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CFlexOp {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct CHitReactUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub _: [u8; 0x4c], // 0x70
        pub _: [u8; 0x2], // 0xbc
        pub _: [u8; 0x2], // 0xbe
        pub _: [u8; 0x2], // 0xc0
        pub _: [u8; 0x2], // 0xc2
        pub _: [u8; 0x4], // 0xc4
        pub _: [u8; 0x4], // 0xc8
        pub _: [u8; 0x4], // 0xcc
    }

    #[repr(C)]
    pub struct CLookAtUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub _: [u8; 0xd8], // 0x70
        pub _: [u8; 0x4], // 0x148
        pub _: [u8; 0x2], // 0x14c
        pub _: [u8; 0x2], // 0x14e
        pub _: [u8; 0x1], // 0x150
        pub _: [u8; 0xf], // 0x151
    }

    #[repr(C)]
    pub struct CAnimBone {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0xc], // 0x14
        pub _: [u8; 0x10], // 0x20
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x10], // 0x34
        pub _: [u8; 0x4], // 0x44
    }

    #[repr(C)]
    pub struct CAnimParameterManagerUpdater {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x18], // 0x18
        pub _: [u8; 0x20], // 0x30
        pub _: [u8; 0x20], // 0x50
        pub _: [u8; 0x18], // 0x70
        pub _: [u8; 0x18], // 0x88
        pub _: [u8; 0x60], // 0xa0
    }

    #[repr(C)]
    pub struct BoneDemoCaptureSettings_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
    }

    #[repr(C)]
    pub struct PairedSequenceData {
        pub _: [u8; 0x100], // 0x0
    }

    #[repr(C)]
    pub struct CBoneConstraintPoseSpaceMorph__Input_t {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x18], // 0x10
    }

    #[repr(C)]
    pub struct MoodAnimationLayer_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x1], // 0x8
        pub _: [u8; 0x7], // 0x9
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x8], // 0x30
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x8], // 0x3c
        pub _: [u8; 0x8], // 0x44
        pub _: [u8; 0x8], // 0x4c
        pub _: [u8; 0x4], // 0x54
        pub _: [u8; 0x8], // 0x58
    }

    #[repr(C)]
    pub struct CSpeedScaleUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub _: [u8; 0x8], // 0x70
    }

    #[repr(C)]
    pub struct CSequenceTagSpans {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
    }

    #[repr(C)]
    pub struct CModelConfigElement_SetBodygroupOnAttachedModels {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x8], // 0x50
    }

    #[repr(C)]
    pub struct CCurrentVelocityMetricEvaluator {
        pub pad_0: [u8; 0x50], // 0x0
    }

    #[repr(C)]
    pub struct CNmBoolValueNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct CAnimReplayFrame {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x18], // 0x28
        pub _: [u8; 0x20], // 0x40
        pub _: [u8; 0x20], // 0x60
        pub _: [u8; 0x10], // 0x80
    }

    #[repr(C)]
    pub struct CNmTransitionEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
    }

    #[repr(C)]
    pub struct CNmFloatCurveEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x40], // 0x20
    }

    #[repr(C)]
    pub struct CParticleTransformInput {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x40], // 0x18
        pub _: [u8; 0x1], // 0x58
        pub _: [u8; 0x1], // 0x59
        pub _: [u8; 0x2], // 0x5a
        pub _: [u8; 0x4], // 0x5c
        pub _: [u8; 0x4], // 0x60
        pub _: [u8; 0x4], // 0x64
    }

    #[repr(C)]
    pub struct CPathAnimMotorUpdaterBase {
        pub pad_0: [u8; 0x20], // 0x0
        pub _: [u8; 0x8], // 0x20
    }

    #[repr(C)]
    pub struct PGDInstruction_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x2], // 0x8
        pub _: [u8; 0x2], // 0xa
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x2], // 0x20
        pub _: [u8; 0x2], // 0x22
        pub _: [u8; 0x2], // 0x24
        pub _: [u8; 0x12], // 0x26
    }

    #[repr(C)]
    pub struct CNmFootstepEventPercentageThroughNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x2], // 0x12
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct AimCameraOpFixedSettings_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x18], // 0x18
    }

    #[repr(C)]
    pub struct SkeletonAnimCapture_t__Camera_t {
        pub _: [u8; 0x20], // 0x0
        pub _: [u8; 0x10], // 0x20
    }

    #[repr(C)]
    pub struct CNmGraphEventConditionNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x68], // 0x18
    }

    #[repr(C)]
    pub struct CFollowAttachmentUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub _: [u8; 0xa0], // 0x70
    }

    #[repr(C)]
    pub struct CMovementComponentUpdater {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x18], // 0x30
        pub _: [u8; 0x20], // 0x48
        pub _: [u8; 0x4], // 0x68
        pub _: [u8; 0x4], // 0x6c
        pub _: [u8; 0x1], // 0x70
        pub _: [u8; 0x1], // 0x71
        pub _: [u8; 0x1], // 0x72
        pub _: [u8; 0x45], // 0x73
    }

    #[repr(C)]
    pub struct CModelConfigElement_SetMaterialGroup {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x8], // 0x48
    }

    #[repr(C)]
    pub struct IParticleEffect {
        pub pad_0: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct CFutureFacingMetricEvaluator {
        pub pad_0: [u8; 0x50], // 0x0
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
    }

    #[repr(C)]
    pub struct CNmIDBasedClipSelectorNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x30], // 0x28
        pub _: [u8; 0x2], // 0x58
        pub _: [u8; 0x2], // 0x5a
        pub _: [u8; 0x4], // 0x5c
    }

    #[repr(C)]
    pub struct CLeanMatrixInstanceData {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x8], // 0x4
    }

    #[repr(C)]
    pub struct NmCompressionSettings_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x10], // 0x20
        pub _: [u8; 0x10], // 0x30
        pub _: [u8; 0x1], // 0x40
        pub _: [u8; 0x1], // 0x41
        pub _: [u8; 0xe], // 0x42
    }

    #[repr(C)]
    pub struct CPulse_Variable {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x18], // 0x18
        pub _: [u8; 0x14], // 0x30
        pub _: [u8; 0x4], // 0x44
        pub _: [u8; 0x1], // 0x48
        pub _: [u8; 0x3], // 0x49
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x10], // 0x50
    }

    #[repr(C)]
    pub struct PARTICLE_EHANDLE__ {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CAddUpdateNode {
        pub pad_0: [u8; 0x94], // 0x0
        pub _: [u8; 0x4], // 0x94
        pub _: [u8; 0x1], // 0x98
        pub _: [u8; 0x1], // 0x99
        pub _: [u8; 0x1], // 0x9a
        pub _: [u8; 0x5], // 0x9b
    }

    #[repr(C)]
    pub struct CAnimEnum {
        pub _: [u8; 0x1], // 0x0
    }

    #[repr(C)]
    pub struct CDemoSettingsComponentUpdater {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x80], // 0x30
    }

    #[repr(C)]
    pub struct CAnimDecoder {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct CNmCachedTargetNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct CPerParticleFloatInput {
        pub pad_0: [u8; 0x178], // 0x0
    }

    #[repr(C)]
    pub struct CNmConstBoolNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CNmBitFlags {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CFootStride {
        pub _: [u8; 0x40], // 0x0
        pub _: [u8; 0x18], // 0x40
    }

    #[repr(C)]
    pub struct CSceneObjectData__RTProxyDrawDescriptor_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x120], // 0x8
        pub _: [u8; 0x30], // 0x128
        pub _: [u8; 0x1], // 0x158
        pub _: [u8; 0x1], // 0x159
        pub _: [u8; 0x2], // 0x15a
        pub _: [u8; 0x2], // 0x15c
        pub _: [u8; 0x1], // 0x15e
        pub _: [u8; 0x1], // 0x15f
        pub _: [u8; 0x2], // 0x160
        pub _: [u8; 0x2], // 0x162
        pub _: [u8; 0x4], // 0x164
    }

    #[repr(C)]
    pub struct CNmLegacyEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x30], // 0x20
    }

    #[repr(C)]
    pub struct CStateNodeStateData {
        pub _: [u8; 0x18], // 0x0
    }

    #[repr(C)]
    pub struct CFootstepLandedAnimTag {
        pub pad_0: [u8; 0x58], // 0x0
        pub _: [u8; 0x8], // 0x58
        pub _: [u8; 0x8], // 0x60
        pub _: [u8; 0x8], // 0x68
        pub _: [u8; 0x8], // 0x70
        pub _: [u8; 0x8], // 0x78
    }

    #[repr(C)]
    pub struct CEnumAnimParameter {
        pub pad_0: [u8; 0x88], // 0x0
        pub _: [u8; 0x8], // 0x88
        pub _: [u8; 0x18], // 0x90
        pub _: [u8; 0x30], // 0xa8
    }

    #[repr(C)]
    pub struct CHandshakeAnimTagBase {
        pub pad_0: [u8; 0x50], // 0x0
        pub _: [u8; 0x8], // 0x50
    }

    #[repr(C)]
    pub struct AnimTagID {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CWayPointHelperInstanceData {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0xc], // 0xc
        pub _: [u8; 0xc], // 0x18
        pub _: [u8; 0x4], // 0x24
    }

    #[repr(C)]
    pub struct CAnimFrameSegment {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x10], // 0x10
    }

    #[repr(C)]
    pub struct CSlopeComponentUpdater {
        pub pad_0: [u8; 0x34], // 0x0
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x2], // 0x38
        pub _: [u8; 0x2], // 0x3a
        pub _: [u8; 0x2], // 0x3c
        pub _: [u8; 0x2], // 0x3e
        pub _: [u8; 0x2], // 0x40
        pub _: [u8; 0x6], // 0x42
    }

    #[repr(C)]
    pub struct CAnimInputDamping {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CHitBoxSet {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x8], // 0x28
    }

    #[repr(C)]
    pub struct ChainToSolveData_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0xc], // 0x4
        pub _: [u8; 0x28], // 0x10
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x10], // 0x40
    }

    #[repr(C)]
    pub struct CConstraintSlave {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0xc], // 0x10
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x28], // 0x28
    }

    #[repr(C)]
    pub struct PulseRuntimeOutputIndex_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CFootCycleDefinition {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0xc], // 0xc
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0xc], // 0x1c
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x4], // 0x38
    }

    #[repr(C)]
    pub struct CVirtualAnimParameter {
        pub pad_0: [u8; 0x70], // 0x0
        pub _: [u8; 0x8], // 0x70
        pub _: [u8; 0x8], // 0x78
    }

    #[repr(C)]
    pub struct CMotionMetricEvaluator {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x18], // 0x18
        pub _: [u8; 0x18], // 0x30
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
    }

    #[repr(C)]
    pub struct CFutureVelocityMetricEvaluator {
        pub pad_0: [u8; 0x50], // 0x0
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
        pub _: [u8; 0x4], // 0x58
        pub _: [u8; 0x4], // 0x5c
    }

    #[repr(C)]
    pub struct CNmSkeleton__SecondarySkeleton_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct CAnimUpdateNodeBase {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x30], // 0x18
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x8], // 0x50
    }

    #[repr(C)]
    pub struct CSetParameterActionUpdater {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x2], // 0x18
        pub _: [u8; 0x16], // 0x1a
    }

    #[repr(C)]
    pub struct CNmFixedWeightBoneMaskNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct SkeletonAnimCapture_t__FrameStamp_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x1], // 0x8
        pub _: [u8; 0x3], // 0x9
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
    }

    #[repr(C)]
    pub struct CPulse_DomainValue {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x20], // 0x10
    }

    #[repr(C)]
    pub struct CBonePositionMetricEvaluator {
        pub pad_0: [u8; 0x50], // 0x0
        pub _: [u8; 0x8], // 0x50
    }

    #[repr(C)]
    pub struct CRenderBufferBinding {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x10], // 0x10
    }

    #[repr(C)]
    pub struct CParticleCollectionRendererFloatInput {
        pub pad_0: [u8; 0x178], // 0x0
    }

    #[repr(C)]
    pub struct CNmParameterizedBlendNode__Parameterization_t {
        pub _: [u8; 0x48], // 0x0
        pub _: [u8; 0x8], // 0x48
    }

    #[repr(C)]
    pub struct CNmEntityAttributeIntEvent {
        pub pad_0: [u8; 0x38], // 0x0
        pub _: [u8; 0x8], // 0x38
    }

    #[repr(C)]
    pub struct CNmNotNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CMeshletDescriptor {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x1], // 0x14
        pub _: [u8; 0x1], // 0x15
        pub _: [u8; 0x2], // 0x16
    }

    #[repr(C)]
    pub struct CMorphSetData {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x18], // 0x18
        pub _: [u8; 0x18], // 0x30
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x18], // 0x50
        pub _: [u8; 0x18], // 0x68
        pub _: [u8; 0x18], // 0x80
    }

    #[repr(C)]
    pub struct CNmAndNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x10], // 0x10
    }

    #[repr(C)]
    pub struct CMorphConstraint {
        pub pad_0: [u8; 0x60], // 0x0
        pub _: [u8; 0x8], // 0x60
        pub _: [u8; 0x4], // 0x68
        pub _: [u8; 0x4], // 0x6c
        pub _: [u8; 0x10], // 0x70
    }

    #[repr(C)]
    pub struct CClothSettingsAnimTag {
        pub pad_0: [u8; 0x58], // 0x0
        pub _: [u8; 0x4], // 0x58
        pub _: [u8; 0x4], // 0x5c
        pub _: [u8; 0x8], // 0x60
        pub _: [u8; 0x8], // 0x68
    }

    #[repr(C)]
    pub struct CAnimDesc_Flag {
        pub _: [u8; 0x1], // 0x0
        pub _: [u8; 0x1], // 0x1
        pub _: [u8; 0x1], // 0x2
        pub _: [u8; 0x1], // 0x3
        pub _: [u8; 0x1], // 0x4
        pub _: [u8; 0x1], // 0x5
        pub _: [u8; 0x1], // 0x6
        pub _: [u8; 0x1], // 0x7
    }

    #[repr(C)]
    pub struct CNmBlend2DNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x58], // 0x28
        pub _: [u8; 0x28], // 0x80
        pub _: [u8; 0x18], // 0xa8
        pub _: [u8; 0x2], // 0xc0
        pub _: [u8; 0x2], // 0xc2
        pub _: [u8; 0x4], // 0xc4
    }

    #[repr(C)]
    pub struct CNmFloatChannelData__ChannelSettings_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
    }

    #[repr(C)]
    pub struct CBlendCurve {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct CNmSkeleton__ContactConfig_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0xc], // 0xc
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x18], // 0x20
    }

    #[repr(C)]
    pub struct CNmGraphNode__CDefinition {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct CAnimationGraphVisualizerSphere {
        pub pad_0: [u8; 0x40], // 0x0
        pub _: [u8; 0x10], // 0x40
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0xc], // 0x54
    }

    #[repr(C)]
    pub struct CNmClip__ModelSpaceSamplingChainLink_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
    }

    #[repr(C)]
    pub struct CAnimUserDifference {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CNmDurationScaleNode__CDefinition {
        pub pad_0: [u8; 0x20], // 0x0
    }

    #[repr(C)]
    pub struct CTransitionUpdateData {
        pub _: [u8; 0x1], // 0x0
        pub _: [u8; 0x2], // 0x1
    }

    #[repr(C)]
    pub struct PulseRuntimeBlackboardReferenceIndex_t {
        pub _: [u8; 0x2], // 0x0
    }

    #[repr(C)]
    pub struct CNmContactEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0xc], // 0x28
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x18], // 0x38
    }

    #[repr(C)]
    pub struct CMovementHandshakeAnimTag {
        pub pad_0: [u8; 0x58], // 0x0
    }

    #[repr(C)]
    pub struct CBoneConstraintPoseSpaceBone__Input_t {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x18], // 0x10
    }

    #[repr(C)]
    pub struct CSeqMultiFetch {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x18], // 0x30
        pub _: [u8; 0x18], // 0x48
        pub _: [u8; 0x4], // 0x60
        pub _: [u8; 0x1], // 0x64
        pub _: [u8; 0x3], // 0x65
        pub _: [u8; 0x8], // 0x68
    }

    #[repr(C)]
    pub struct CPhysSurfacePropertiesSoundNames {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x8], // 0x30
        pub _: [u8; 0x8], // 0x38
        pub _: [u8; 0x8], // 0x40
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x8], // 0x50
        pub _: [u8; 0x8], // 0x58
    }

    #[repr(C)]
    pub struct NmBoneMaskSetDefinition_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x110], // 0x8
        pub _: [u8; 0x10], // 0x118
    }

    #[repr(C)]
    pub struct CAudioAnimTag {
        pub pad_0: [u8; 0x58], // 0x0
        pub _: [u8; 0x8], // 0x58
        pub _: [u8; 0x8], // 0x60
        pub _: [u8; 0x4], // 0x68
        pub _: [u8; 0x1], // 0x6c
        pub _: [u8; 0x1], // 0x6d
        pub _: [u8; 0x1], // 0x6e
        pub _: [u8; 0x1], // 0x6f
    }

    #[repr(C)]
    pub struct CTurnHelperUpdateNode {
        pub pad_0: [u8; 0x74], // 0x0
        pub _: [u8; 0x4], // 0x74
        pub _: [u8; 0x4], // 0x78
        pub _: [u8; 0x4], // 0x7c
        pub _: [u8; 0x4], // 0x80
        pub _: [u8; 0x4], // 0x84
        pub _: [u8; 0x8], // 0x88
    }

    #[repr(C)]
    pub struct CAnimationGroup {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x48], // 0x18
        pub _: [u8; 0x18], // 0x60
        pub _: [u8; 0x18], // 0x78
        pub _: [u8; 0x8], // 0x90
        pub _: [u8; 0x78], // 0x98
        pub _: [u8; 0x18], // 0x110
        pub _: [u8; 0x20], // 0x128
    }

    #[repr(C)]
    pub struct CPulse_TempVarInfo {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
    }

    #[repr(C)]
    pub struct NmContactAudioInfo_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct NmSyncTrackTime_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct CNmClip {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x10], // 0x10
        pub _: [u8; 0x18], // 0x20
        pub _: [u8; 0x40], // 0x38
        pub _: [u8; 0x20], // 0x78
        pub _: [u8; 0x28], // 0x98
        pub _: [u8; 0xb0], // 0xc0
        pub _: [u8; 0x50], // 0x170
        pub _: [u8; 0x8], // 0x1c0
        pub _: [u8; 0x18], // 0x1c8
        pub _: [u8; 0x20], // 0x1e0
    }

    #[repr(C)]
    pub struct CToggleComponentActionUpdater {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
    }

    #[repr(C)]
    pub struct CNmOverlayBlendTask {
        pub pad_0: [u8; 0x100], // 0x0
    }

    #[repr(C)]
    pub struct CNmSpeedScaleBaseNode__CDefinition {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
    }

    #[repr(C)]
    pub struct CNmValueNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct CAnimationGraphVisualizerPrimitiveBase {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x2c], // 0xc
        pub _: [u8; 0x8], // 0x38
    }

    #[repr(C)]
    pub struct CBindPoseUpdateNode {
        pub pad_0: [u8; 0x60], // 0x0
    }

    #[repr(C)]
    pub struct NmSyncTrackTimeRange_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct CAnimationGraphVisualizerText {
        pub pad_0: [u8; 0x40], // 0x0
        pub _: [u8; 0x10], // 0x40
        pub _: [u8; 0x8], // 0x50
        pub _: [u8; 0x8], // 0x58
    }

    #[repr(C)]
    pub struct CFootTrajectory {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0xc], // 0x8
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x8], // 0x18
    }

    #[repr(C)]
    pub struct CMotionMatchingUpdateNode {
        pub pad_0: [u8; 0x58], // 0x0
        pub _: [u8; 0x20], // 0x58
        pub _: [u8; 0x18], // 0x78
        pub _: [u8; 0x50], // 0x90
        pub _: [u8; 0x4], // 0xe0
        pub _: [u8; 0x4], // 0xe4
        pub _: [u8; 0x1], // 0xe8
        pub _: [u8; 0x3], // 0xe9
        pub _: [u8; 0x8], // 0xec
        pub _: [u8; 0x4], // 0xf4
        pub _: [u8; 0x4], // 0xf8
        pub _: [u8; 0x4], // 0xfc
        pub _: [u8; 0x4], // 0x100
        pub _: [u8; 0x4], // 0x104
        pub _: [u8; 0x1], // 0x108
        pub _: [u8; 0x3], // 0x109
        pub _: [u8; 0x4], // 0x10c
        pub _: [u8; 0x8], // 0x110
        pub _: [u8; 0x18], // 0x118
        pub _: [u8; 0x4], // 0x130
        pub _: [u8; 0x4], // 0x134
        pub _: [u8; 0x4], // 0x138
        pub _: [u8; 0x4], // 0x13c
        pub _: [u8; 0x8], // 0x140
    }

    #[repr(C)]
    pub struct CNmReferencePoseNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct CSeqS1SeqDesc {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x10], // 0x10
        pub _: [u8; 0x70], // 0x20
        pub _: [u8; 0x8], // 0x90
        pub _: [u8; 0x18], // 0x98
        pub _: [u8; 0x18], // 0xb0
        pub _: [u8; 0x8], // 0xc8
        pub _: [u8; 0x10], // 0xd0
        pub _: [u8; 0x10], // 0xe0
        pub _: [u8; 0x18], // 0xf0
        pub _: [u8; 0x18], // 0x108
    }

    #[repr(C)]
    pub struct CFlexController {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct SkeletonDemoDb_t {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x18], // 0x18
        pub _: [u8; 0x8], // 0x30
    }

    #[repr(C)]
    pub struct CNmFloatRangeComparisonNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x2], // 0x18
        pub _: [u8; 0x6], // 0x1a
    }

    #[repr(C)]
    pub struct CMotionNodeSequence {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0x18], // 0x28
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x4], // 0x44
    }

    #[repr(C)]
    pub struct CNmTwoBoneIKNode__CDefinition {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x2], // 0x20
        pub _: [u8; 0x2], // 0x22
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x1], // 0x28
        pub _: [u8; 0x3], // 0x29
        pub _: [u8; 0x4], // 0x2c
    }

    #[repr(C)]
    pub struct CNmGraphInstance {
        pub pad_0: [u8; 0x3b0], // 0x0
    }

    #[repr(C)]
    pub struct CFlexDesc {
        pub _: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct CRenderMesh {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0xc0], // 0x10
        pub _: [u8; 0x10], // 0xd0
        pub _: [u8; 0x118], // 0xe0
        pub _: [u8; 0x1], // 0x1f8
        pub _: [u8; 0x27], // 0x1f9
        pub _: [u8; 0x10], // 0x220
        pub _: [u8; 0x8], // 0x230
    }

    #[repr(C)]
    pub struct CAnimSkeleton {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x18], // 0x28
        pub _: [u8; 0x18], // 0x40
        pub _: [u8; 0x18], // 0x58
        pub _: [u8; 0x18], // 0x70
        pub _: [u8; 0x18], // 0x88
        pub _: [u8; 0x18], // 0xa0
        pub _: [u8; 0x18], // 0xb8
    }

    #[repr(C)]
    pub struct PulseRuntimeConstantIndex_t {
        pub _: [u8; 0x2], // 0x0
    }

    #[repr(C)]
    pub struct CFootAdjustmentInstanceData {
        pub pad_0: [u8; 0xc], // 0x0
        pub _: [u8; 0xc], // 0xc
        pub _: [u8; 0x24], // 0x18
        pub _: [u8; 0xc], // 0x3c
    }

    #[repr(C)]
    pub struct CNmBodyGroupNode__CDefinition {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x30], // 0x20
    }

    #[repr(C)]
    pub struct CNmTimeControlledClipNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x2], // 0x12
        pub _: [u8; 0x2], // 0x14
        pub _: [u8; 0x2], // 0x16
        pub _: [u8; 0x28], // 0x18
    }

    #[repr(C)]
    pub struct VPhysics2ShapeDef_t {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x10], // 0x10
        pub _: [u8; 0x10], // 0x20
        pub _: [u8; 0x10], // 0x30
        pub _: [u8; 0x10], // 0x40
        pub _: [u8; 0x18], // 0x50
    }

    #[repr(C)]
    pub struct CNmFloatCurveNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x40], // 0x18
    }

    #[repr(C)]
    pub struct CAnimationGraphVisualizerAxis {
        pub pad_0: [u8; 0x40], // 0x0
        pub _: [u8; 0x20], // 0x40
        pub _: [u8; 0x10], // 0x60
    }

    #[repr(C)]
    pub struct CTwistConstraint {
        pub pad_0: [u8; 0x60], // 0x0
        pub _: [u8; 0x10], // 0x60
        pub _: [u8; 0x10], // 0x70
        pub _: [u8; 0x10], // 0x80
    }

    #[repr(C)]
    pub struct PulseDocNodeID_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct ModelBoneFlexDriverControl_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x8], // 0x18
    }

    #[repr(C)]
    pub struct CParticleCollectionFloatInput {
        pub pad_0: [u8; 0x178], // 0x0
    }

    #[repr(C)]
    pub struct CSeqCmdLayer {
        pub _: [u8; 0x2], // 0x0
        pub _: [u8; 0x2], // 0x2
        pub _: [u8; 0x2], // 0x4
        pub _: [u8; 0x2], // 0x6
        pub _: [u8; 0x2], // 0x8
        pub _: [u8; 0x2], // 0xa
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct FootPinningPoseOpFixedData_t {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x1], // 0x28
        pub _: [u8; 0x7], // 0x29
    }

    #[repr(C)]
    pub struct RenderSkeletonBone_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x30], // 0x10
        pub _: [u8; 0x18], // 0x40
        pub _: [u8; 0x8], // 0x58
    }

    #[repr(C)]
    pub struct CDistanceRemainingMetricEvaluator {
        pub pad_0: [u8; 0x50], // 0x0
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
        pub _: [u8; 0x4], // 0x58
        pub _: [u8; 0x4], // 0x5c
        pub _: [u8; 0x1], // 0x60
        pub _: [u8; 0x1], // 0x61
        pub _: [u8; 0x6], // 0x62
    }

    #[repr(C)]
    pub struct CDirectPlaybackUpdateNode {
        pub pad_0: [u8; 0x74], // 0x0
        pub _: [u8; 0x1], // 0x74
        pub _: [u8; 0x3], // 0x75
        pub _: [u8; 0x18], // 0x78
    }

    #[repr(C)]
    pub struct CNmIDEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
    }

    #[repr(C)]
    pub struct CFlexRule {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
    }

    #[repr(C)]
    pub struct ScriptInfo_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
        pub _: [u8; 0x18], // 0x20
        pub _: [u8; 0x18], // 0x38
        pub _: [u8; 0x8], // 0x50
    }

    #[repr(C)]
    pub struct CBoneConstraintRbf {
        pub pad_0: [u8; 0x20], // 0x0
        pub _: [u8; 0x18], // 0x20
        pub _: [u8; 0x90], // 0x38
    }

    #[repr(C)]
    pub struct CNetworkedCycle {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0xc], // 0x4
        pub _: [u8; 0xc], // 0x10
        pub _: [u8; 0xc], // 0x1c
        pub _: [u8; 0xc], // 0x28
    }

    #[repr(C)]
    pub struct CNmSoundEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x8], // 0x30
        pub _: [u8; 0x8], // 0x38
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x4], // 0x44
    }

    #[repr(C)]
    pub struct CRenderGroom {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x28], // 0x18
        pub _: [u8; 0x8], // 0x40
        pub _: [u8; 0x30], // 0x48
        pub _: [u8; 0x4], // 0x78
        pub _: [u8; 0x4], // 0x7c
        pub _: [u8; 0x4], // 0x80
        pub _: [u8; 0x4], // 0x84
        pub _: [u8; 0x4], // 0x88
        pub _: [u8; 0x4], // 0x8c
        pub _: [u8; 0x4], // 0x90
        pub _: [u8; 0x4], // 0x94
        pub _: [u8; 0x14], // 0x98
        pub _: [u8; 0x4], // 0xac
    }

    #[repr(C)]
    pub struct CNmParameterizedClipSelectorNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x10], // 0x28
        pub _: [u8; 0x2], // 0x38
        pub _: [u8; 0x1], // 0x3a
        pub _: [u8; 0x5], // 0x3b
    }

    #[repr(C)]
    pub struct CTiltTwistConstraint {
        pub pad_0: [u8; 0x60], // 0x0
        pub _: [u8; 0x4], // 0x60
        pub _: [u8; 0x2c], // 0x64
    }

    #[repr(C)]
    pub struct CNmSpeedScaleNode__CDefinition {
        pub pad_0: [u8; 0x20], // 0x0
    }

    #[repr(C)]
    pub struct CVPhysXSurfacePropertiesList {
        pub _: [u8; 0x18], // 0x0
    }

    #[repr(C)]
    pub struct CNmFloatSpringNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x2], // 0x1c
        pub _: [u8; 0x2], // 0x1e
    }

    #[repr(C)]
    pub struct RenderHairStrandInfo_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
    }

    #[repr(C)]
    pub struct CCycleControlClipUpdateNode {
        pub pad_0: [u8; 0x60], // 0x0
        pub _: [u8; 0x1c], // 0x60
        pub _: [u8; 0x4], // 0x7c
        pub _: [u8; 0x4], // 0x80
        pub _: [u8; 0x4], // 0x84
        pub _: [u8; 0x2], // 0x88
        pub _: [u8; 0x6], // 0x8a
    }

    #[repr(C)]
    pub struct CNmTargetPointNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x6], // 0x12
    }

    #[repr(C)]
    pub struct CNmTargetSelectorNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x2], // 0x30
        pub _: [u8; 0x1], // 0x32
        pub _: [u8; 0x5], // 0x33
        pub _: [u8; 0x8], // 0x38
    }

    #[repr(C)]
    pub struct CPulse_RegisterInfo {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
        pub _: [u8; 0x38], // 0x20
        pub _: [u8; 0x4], // 0x58
        pub _: [u8; 0x4], // 0x5c
    }

    #[repr(C)]
    pub struct CNmFloatValueNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct CWarpSectionAnimTagBase {
        pub pad_0: [u8; 0x50], // 0x0
    }

    #[repr(C)]
    pub struct CNmGraphVariationUserData {
        pub pad_0: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct CStaticPoseCache {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
    }

    #[repr(C)]
    pub struct LookAtOpFixedSettings_t {
        pub _: [u8; 0x80], // 0x0
        pub _: [u8; 0x18], // 0x80
        pub _: [u8; 0x18], // 0x98
        pub _: [u8; 0x4], // 0xb0
        pub _: [u8; 0x4], // 0xb4
        pub _: [u8; 0x4], // 0xb8
        pub _: [u8; 0x4], // 0xbc
        pub _: [u8; 0x1], // 0xc0
        pub _: [u8; 0x1], // 0xc1
        pub _: [u8; 0x1], // 0xc2
        pub _: [u8; 0xd], // 0xc3
    }

    #[repr(C)]
    pub struct CRootMotion {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0xc], // 0x10
        pub _: [u8; 0xc], // 0x1c
    }

    #[repr(C)]
    pub struct CAnimGraphSettingsManager {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x18], // 0x18
    }

    #[repr(C)]
    pub struct CAnimGraphModelBinding {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x18], // 0x10
    }

    #[repr(C)]
    pub struct CBoneConstraintPoseSpaceBone {
        pub pad_0: [u8; 0x60], // 0x0
        pub _: [u8; 0x28], // 0x60
    }

    #[repr(C)]
    pub struct CNmTwoBoneIKTask {
        pub pad_0: [u8; 0x70], // 0x0
        pub _: [u8; 0x4], // 0x70
        pub _: [u8; 0xc], // 0x74
        pub _: [u8; 0x70], // 0x80
    }

    #[repr(C)]
    pub struct MotionBlendItem {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct CBoneConstraintPoseSpaceMorph {
        pub pad_0: [u8; 0x20], // 0x0
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x18], // 0x30
        pub _: [u8; 0x18], // 0x48
        pub _: [u8; 0x40], // 0x60
    }

    #[repr(C)]
    pub struct CFloatAnimParameter {
        pub pad_0: [u8; 0x80], // 0x0
        pub _: [u8; 0x4], // 0x80
        pub _: [u8; 0x4], // 0x84
        pub _: [u8; 0x4], // 0x88
        pub _: [u8; 0x4], // 0x8c
    }

    #[repr(C)]
    pub struct CNmContactAudioActionVData {
        pub pad_0: [u8; 0x1], // 0x0
    }

    #[repr(C)]
    pub struct CStateActionUpdater {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct CPlayerInputAnimMotorUpdater {
        pub pad_0: [u8; 0x20], // 0x0
        pub _: [u8; 0x1c], // 0x20
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x2], // 0x44
        pub _: [u8; 0x2], // 0x46
        pub _: [u8; 0x8], // 0x48
    }

    #[repr(C)]
    pub struct CRenderSkeleton {
        pub _: [u8; 0x30], // 0x0
        pub _: [u8; 0x18], // 0x30
        pub _: [u8; 0x8], // 0x48
    }

    #[repr(C)]
    pub struct CSeqIKLock {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x2], // 0x8
        pub _: [u8; 0x2], // 0xa
    }

    #[repr(C)]
    pub struct CAnimParamHandleMap {
        pub _: [u8; 0x20], // 0x0
    }

    #[repr(C)]
    pub struct CNmFloatClampNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0xc], // 0x14
    }

    #[repr(C)]
    pub struct PulseRuntimeCellIndex_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CNmExternalPoseNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CAnimDesc {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0xd8], // 0x20
        pub _: [u8; 0x18], // 0xf8
        pub _: [u8; 0x20], // 0x110
        pub _: [u8; 0x18], // 0x130
        pub _: [u8; 0x18], // 0x148
        pub _: [u8; 0x18], // 0x160
        pub _: [u8; 0x4], // 0x178
        pub _: [u8; 0xc], // 0x17c
        pub _: [u8; 0x10], // 0x188
        pub _: [u8; 0x18], // 0x198
        pub _: [u8; 0x18], // 0x1b0
        pub _: [u8; 0x8], // 0x1c8
    }

    #[repr(C)]
    pub struct CNmRootMotionOverrideNode__CDefinition {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x2], // 0x18
        pub _: [u8; 0x2], // 0x1a
        pub _: [u8; 0x2], // 0x1c
        pub _: [u8; 0x2], // 0x1e
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
    }

    #[repr(C)]
    pub struct CNmTargetWarpNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x2], // 0x12
        pub _: [u8; 0x1], // 0x14
        pub _: [u8; 0x1], // 0x15
        pub _: [u8; 0x2], // 0x16
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x8], // 0x30
    }

    #[repr(C)]
    pub struct CPhysSurfacePropertiesPhysics {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct CAnimationGraphVisualizerPie {
        pub pad_0: [u8; 0x40], // 0x0
        pub _: [u8; 0x10], // 0x40
        pub _: [u8; 0x10], // 0x50
        pub _: [u8; 0x10], // 0x60
        pub _: [u8; 0x10], // 0x70
    }

    #[repr(C)]
    pub struct NmFloatCurveCompressionSettings_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
    }

    #[repr(C)]
    pub struct CBoneConstraintDotToMorph {
        pub pad_0: [u8; 0x20], // 0x0
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x8], // 0x30
        pub _: [u8; 0x20], // 0x38
    }

    #[repr(C)]
    pub struct CPointConstraint {
        pub pad_0: [u8; 0x60], // 0x0
    }

    #[repr(C)]
    pub struct CCurrentRotationVelocityMetricEvaluator {
        pub pad_0: [u8; 0x50], // 0x0
    }

    #[repr(C)]
    pub struct TraceSettings_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct ParamSpanSample_t {
        pub _: [u8; 0x14], // 0x0
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct CNmFollowBoneTask {
        pub pad_0: [u8; 0x90], // 0x0
    }

    #[repr(C)]
    pub struct VPhysXConstraintParams_t {
        pub _: [u8; 0x1], // 0x0
        pub _: [u8; 0x1], // 0x1
        pub _: [u8; 0x1], // 0x2
        pub _: [u8; 0x1], // 0x3
        pub _: [u8; 0x18], // 0x4
        pub _: [u8; 0x20], // 0x1c
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x4], // 0x44
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
        pub _: [u8; 0x4], // 0x58
        pub _: [u8; 0x4], // 0x5c
        pub _: [u8; 0x4], // 0x60
        pub _: [u8; 0x4], // 0x64
        pub _: [u8; 0x4], // 0x68
        pub _: [u8; 0x4], // 0x6c
        pub _: [u8; 0x4], // 0x70
        pub _: [u8; 0x4], // 0x74
        pub _: [u8; 0x4], // 0x78
        pub _: [u8; 0x4], // 0x7c
        pub _: [u8; 0x4], // 0x80
        pub _: [u8; 0x4], // 0x84
        pub _: [u8; 0x4], // 0x88
        pub _: [u8; 0x4], // 0x8c
        pub _: [u8; 0x4], // 0x90
        pub _: [u8; 0xc], // 0x94
        pub _: [u8; 0x10], // 0xa0
        pub _: [u8; 0xc], // 0xb0
        pub _: [u8; 0x4], // 0xbc
        pub _: [u8; 0x4], // 0xc0
        pub _: [u8; 0x4], // 0xc4
        pub _: [u8; 0x4], // 0xc8
        pub _: [u8; 0x4], // 0xcc
        pub _: [u8; 0x4], // 0xd0
        pub _: [u8; 0x4], // 0xd4
        pub _: [u8; 0x4], // 0xd8
        pub _: [u8; 0x4], // 0xdc
        pub _: [u8; 0x4], // 0xe0
        pub _: [u8; 0x4], // 0xe4
        pub _: [u8; 0x4], // 0xe8
        pub _: [u8; 0x4], // 0xec
        pub _: [u8; 0x4], // 0xf0
        pub _: [u8; 0x4], // 0xf4
    }

    #[repr(C)]
    pub struct CNmFloatComparisonNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x2], // 0x12
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
    }

    #[repr(C)]
    pub struct CStateUpdateData {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x18], // 0x28
        pub _: [u8; 0x8], // 0x40
    }

    #[repr(C)]
    pub struct CTurnHelperInstanceData {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
    }

    #[repr(C)]
    pub struct CNmTargetValueNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct COrientConstraint {
        pub pad_0: [u8; 0x60], // 0x0
    }

    #[repr(C)]
    pub struct CCycleClipInstanceData {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0x10], // 0xc
    }

    #[repr(C)]
    pub struct PulseRuntimeTempVarBankIndex_t {
        pub _: [u8; 0x2], // 0x0
    }

    #[repr(C)]
    pub struct CMoverUpdateNode {
        pub pad_0: [u8; 0x78], // 0x0
        pub _: [u8; 0x18], // 0x78
        pub _: [u8; 0x4], // 0x90
        pub _: [u8; 0x2], // 0x94
        pub _: [u8; 0x2], // 0x96
        pub _: [u8; 0x4], // 0x98
        pub _: [u8; 0x4], // 0x9c
        pub _: [u8; 0x4], // 0xa0
        pub _: [u8; 0x1], // 0xa4
        pub _: [u8; 0x1], // 0xa5
        pub _: [u8; 0x1], // 0xa6
        pub _: [u8; 0x1], // 0xa7
        pub _: [u8; 0x8], // 0xa8
    }

    #[repr(C)]
    pub struct CNmLayerBlendNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x6], // 0x12
        pub _: [u8; 0x30], // 0x18
    }

    #[repr(C)]
    pub struct CNmFootIKNode__CDefinition {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x2], // 0x28
        pub _: [u8; 0x2], // 0x2a
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x1], // 0x34
        pub _: [u8; 0x3], // 0x35
    }

    #[repr(C)]
    pub struct CAnimMotorUpdaterBase {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
    }

    #[repr(C)]
    pub struct JiggleBoneSettingsList_t {
        pub _: [u8; 0x18], // 0x0
    }

    #[repr(C)]
    pub struct CSubtractUpdateNode {
        pub pad_0: [u8; 0x94], // 0x0
        pub _: [u8; 0x4], // 0x94
        pub _: [u8; 0x1], // 0x98
        pub _: [u8; 0x1], // 0x99
        pub _: [u8; 0x6], // 0x9a
    }

    #[repr(C)]
    pub struct PulseGraphInstanceID_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CNmFloatRemapNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x8], // 0x14
        pub _: [u8; 0xc], // 0x1c
    }

    #[repr(C)]
    pub struct CPoseHandle {
        pub _: [u8; 0x2], // 0x0
        pub _: [u8; 0x2], // 0x2
    }

    #[repr(C)]
    pub struct CNmFootstepEventIDNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct CSolveIKChainUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub _: [u8; 0x18], // 0x70
        pub _: [u8; 0x20], // 0x88
    }

    #[repr(C)]
    pub struct CNmOrNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x10], // 0x10
    }

    #[repr(C)]
    pub struct CSeqCmdSeqDesc {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0xc], // 0x10
        pub _: [u8; 0x8], // 0x1c
        pub _: [u8; 0x2], // 0x24
        pub _: [u8; 0x2], // 0x26
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x2], // 0x2c
        pub _: [u8; 0x2], // 0x2e
        pub _: [u8; 0x18], // 0x30
        pub _: [u8; 0x18], // 0x48
        pub _: [u8; 0x18], // 0x60
        pub _: [u8; 0x18], // 0x78
    }

    #[repr(C)]
    pub struct CBoneMaskUpdateNode {
        pub pad_0: [u8; 0x94], // 0x0
        pub _: [u8; 0x4], // 0x94
        pub _: [u8; 0x4], // 0x98
        pub _: [u8; 0x4], // 0x9c
        pub _: [u8; 0x4], // 0xa0
        pub _: [u8; 0x4], // 0xa4
        pub _: [u8; 0x4], // 0xa8
        pub _: [u8; 0x4], // 0xac
    }

    #[repr(C)]
    pub struct CLeafUpdateNode {
        pub pad_0: [u8; 0x58], // 0x0
    }

    #[repr(C)]
    pub struct CPulse_Constant {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x18], // 0x18
    }

    #[repr(C)]
    pub struct CParticleFloatInput {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x40], // 0x20
        pub _: [u8; 0x4], // 0x60
        pub _: [u8; 0x4], // 0x64
        pub _: [u8; 0x4], // 0x68
        pub _: [u8; 0x4], // 0x6c
        pub _: [u8; 0x4], // 0x70
        pub _: [u8; 0x4], // 0x74
        pub _: [u8; 0x4], // 0x78
        pub _: [u8; 0x4], // 0x7c
        pub _: [u8; 0x4], // 0x80
        pub _: [u8; 0xc], // 0x84
        pub _: [u8; 0x8], // 0x90
        pub _: [u8; 0x4], // 0x98
        pub _: [u8; 0x4], // 0x9c
        pub _: [u8; 0x4], // 0xa0
        pub _: [u8; 0x4], // 0xa4
        pub _: [u8; 0x4], // 0xa8
        pub _: [u8; 0x4], // 0xac
        pub _: [u8; 0x4], // 0xb0
        pub _: [u8; 0x4], // 0xb4
        pub _: [u8; 0xc], // 0xb8
        pub _: [u8; 0x4], // 0xc4
        pub _: [u8; 0x4], // 0xc8
        pub _: [u8; 0x4], // 0xcc
        pub _: [u8; 0x4], // 0xd0
        pub _: [u8; 0x4], // 0xd4
        pub _: [u8; 0x4], // 0xd8
        pub _: [u8; 0x4], // 0xdc
        pub _: [u8; 0x4], // 0xe0
        pub _: [u8; 0xc], // 0xe4
        pub _: [u8; 0x4], // 0xf0
        pub _: [u8; 0x4], // 0xf4
        pub _: [u8; 0x4], // 0xf8
        pub _: [u8; 0x4], // 0xfc
        pub _: [u8; 0x4], // 0x100
        pub _: [u8; 0x4], // 0x104
        pub _: [u8; 0x4], // 0x108
        pub _: [u8; 0x4], // 0x10c
        pub _: [u8; 0x4], // 0x110
        pub _: [u8; 0x4], // 0x114
        pub _: [u8; 0x4], // 0x118
        pub _: [u8; 0x4], // 0x11c
        pub _: [u8; 0x4], // 0x120
        pub _: [u8; 0x4], // 0x124
        pub _: [u8; 0x8], // 0x128
        pub _: [u8; 0x40], // 0x130
        pub _: [u8; 0x8], // 0x170
    }

    #[repr(C)]
    pub struct SolveIKChainPoseOpFixedSettings_t {
        pub _: [u8; 0x18], // 0x0
    }

    #[repr(C)]
    pub struct CNmEntityAttributeFloatEvent {
        pub pad_0: [u8; 0x38], // 0x0
        pub _: [u8; 0x40], // 0x38
    }

    #[repr(C)]
    pub struct CNmIDSelectorNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x30], // 0x28
        pub _: [u8; 0x8], // 0x58
    }

    #[repr(C)]
    pub struct TwoBoneIKSettings_t {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x80], // 0x10
        pub _: [u8; 0x10], // 0x90
        pub _: [u8; 0x80], // 0xa0
        pub _: [u8; 0x4], // 0x120
        pub _: [u8; 0x2], // 0x124
        pub _: [u8; 0x2], // 0x126
        pub _: [u8; 0x8], // 0x128
        pub _: [u8; 0x10], // 0x130
        pub _: [u8; 0x4], // 0x140
        pub _: [u8; 0x4], // 0x144
        pub _: [u8; 0x4], // 0x148
        pub _: [u8; 0x1], // 0x14c
        pub _: [u8; 0x3], // 0x14d
        pub _: [u8; 0x10], // 0x150
    }

    #[repr(C)]
    pub struct CNmCachedPoseWriteTask {
        pub pad_0: [u8; 0x80], // 0x0
    }

    #[repr(C)]
    pub struct CAnimUpdateSharedData {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x20], // 0x28
        pub _: [u8; 0x18], // 0x48
        pub _: [u8; 0x8], // 0x60
        pub _: [u8; 0x8], // 0x68
        pub _: [u8; 0x8], // 0x70
        pub _: [u8; 0x30], // 0x78
        pub _: [u8; 0x8], // 0xa8
        pub _: [u8; 0x8], // 0xb0
        pub _: [u8; 0x48], // 0xb8
    }

    #[repr(C)]
    pub struct CAnimAttachment {
        pub _: [u8; 0x30], // 0x0
        pub _: [u8; 0x30], // 0x30
        pub _: [u8; 0xc], // 0x60
        pub _: [u8; 0xc], // 0x6c
        pub _: [u8; 0x8], // 0x78
    }

    #[repr(C)]
    pub struct CFootTrajectories {
        pub _: [u8; 0x18], // 0x0
    }

    #[repr(C)]
    pub struct CNmIDComparisonNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x6], // 0x12
        pub _: [u8; 0x28], // 0x18
    }

    #[repr(C)]
    pub struct PairedSequence_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x10], // 0x10
    }

    #[repr(C)]
    pub struct CEditableMotionGraph {
        pub pad_0: [u8; 0x58], // 0x0
    }

    #[repr(C)]
    pub struct CNmConstFloatNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CStringAnimTag {
        pub pad_0: [u8; 0x50], // 0x0
    }

    #[repr(C)]
    pub struct CBoolAnimParameter {
        pub pad_0: [u8; 0x80], // 0x0
        pub _: [u8; 0x8], // 0x80
    }

    #[repr(C)]
    pub struct CRagdollAnimTag {
        pub pad_0: [u8; 0x58], // 0x0
        pub _: [u8; 0x8], // 0x58
    }

    #[repr(C)]
    pub struct CMotionNode {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
    }

    #[repr(C)]
    pub struct CNmStateMachineNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x120], // 0x10
        pub _: [u8; 0x8], // 0x130
    }

    #[repr(C)]
    pub struct CBodyGroupAnimTag {
        pub pad_0: [u8; 0x58], // 0x0
        pub _: [u8; 0x8], // 0x58
        pub _: [u8; 0x18], // 0x60
    }

    #[repr(C)]
    pub struct CNmModelSpaceBlendTask {
        pub pad_0: [u8; 0x100], // 0x0
    }

    #[repr(C)]
    pub struct CNmZeroPoseNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct CNmOrientationWarpNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x2], // 0x12
        pub _: [u8; 0x1], // 0x14
        pub _: [u8; 0x1], // 0x15
        pub _: [u8; 0x1], // 0x16
        pub _: [u8; 0x1], // 0x17
        pub _: [u8; 0x8], // 0x18
    }

    #[repr(C)]
    pub struct AnimParamID {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CNmBoneMaskNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct ModelAnimGraph2Ref_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct AnimationDecodeDebugDump_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
    }

    #[repr(C)]
    pub struct CNmVirtualParameterIDNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CSeqScaleSet {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0xc], // 0x14
        pub _: [u8; 0x18], // 0x20
        pub _: [u8; 0x18], // 0x38
    }

    #[repr(C)]
    pub struct PulseRuntimeCallInfoIndex_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CDirectionalBlendUpdateNode {
        pub pad_0: [u8; 0x5c], // 0x0
        pub _: [u8; 0x24], // 0x5c
        pub _: [u8; 0x18], // 0x80
        pub _: [u8; 0x4], // 0x98
        pub _: [u8; 0x4], // 0x9c
        pub _: [u8; 0x4], // 0xa0
        pub _: [u8; 0x4], // 0xa4
        pub _: [u8; 0x1], // 0xa8
        pub _: [u8; 0x7], // 0xa9
    }

    #[repr(C)]
    pub struct CNmGraphDefinition__ReferencedGraphSlot_t {
        pub _: [u8; 0x2], // 0x0
        pub _: [u8; 0x2], // 0x2
    }

    #[repr(C)]
    pub struct ParamSpan_t {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x2], // 0x18
        pub _: [u8; 0x2], // 0x1a
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x8], // 0x20
    }

    #[repr(C)]
    pub struct CFootStepTriggerUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub _: [u8; 0x1c], // 0x70
        pub _: [u8; 0x4], // 0x8c
    }

    #[repr(C)]
    pub struct IKTargetSettings_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x10], // 0x8
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x8], // 0x20
    }

    #[repr(C)]
    pub struct CModelConfigElement_SetRenderColor {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x8], // 0x48
    }

    #[repr(C)]
    pub struct CNmAdditiveBlendTask {
        pub pad_0: [u8; 0x100], // 0x0
    }

    #[repr(C)]
    pub struct CNmAnimationPoseNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x2], // 0x12
        pub _: [u8; 0x8], // 0x14
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x8], // 0x20
    }

    #[repr(C)]
    pub struct CMotionSearchDB {
        pub _: [u8; 0x80], // 0x0
        pub _: [u8; 0x20], // 0x80
        pub _: [u8; 0x18], // 0xa0
    }

    #[repr(C)]
    pub struct CMotionNodeBlend1D {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0x18], // 0x28
        pub _: [u8; 0x8], // 0x40
    }

    #[repr(C)]
    pub struct CNmCurrentSyncEventNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x6], // 0x12
    }

    #[repr(C)]
    pub struct CNmControlParameterTargetNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct SkeletonBoneBounds_t {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0xc], // 0xc
    }

    #[repr(C)]
    pub struct CTwoBoneIKUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub _: [u8; 0x170], // 0x70
    }

    #[repr(C)]
    pub struct VPhysXBodyPart_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x68], // 0x8
        pub _: [u8; 0x2], // 0x70
        pub _: [u8; 0x2], // 0x72
        pub _: [u8; 0x4], // 0x74
        pub _: [u8; 0x4], // 0x78
        pub _: [u8; 0x4], // 0x7c
        pub _: [u8; 0x4], // 0x80
        pub _: [u8; 0x4], // 0x84
        pub _: [u8; 0x4], // 0x88
        pub _: [u8; 0xc], // 0x8c
    }

    #[repr(C)]
    pub struct PulseRuntimeChunkIndex_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CTaskHandshakeAnimTag {
        pub pad_0: [u8; 0x58], // 0x0
    }

    #[repr(C)]
    pub struct CFollowPathUpdateNode {
        pub pad_0: [u8; 0x74], // 0x0
        pub _: [u8; 0x4], // 0x74
        pub _: [u8; 0x1], // 0x78
        pub _: [u8; 0x1], // 0x79
        pub _: [u8; 0x2], // 0x7a
        pub _: [u8; 0x4], // 0x7c
        pub _: [u8; 0x4], // 0x80
        pub _: [u8; 0x4], // 0x84
        pub _: [u8; 0x8], // 0x88
        pub _: [u8; 0x18], // 0x90
        pub _: [u8; 0x4], // 0xa8
        pub _: [u8; 0x4], // 0xac
        pub _: [u8; 0x4], // 0xb0
        pub _: [u8; 0x4], // 0xb4
    }

    #[repr(C)]
    pub struct AimMatrixOpFixedSettings_t {
        pub _: [u8; 0x80], // 0x0
        pub _: [u8; 0x18], // 0x80
        pub _: [u8; 0x28], // 0x98
        pub _: [u8; 0x4], // 0xc0
        pub _: [u8; 0x4], // 0xc4
        pub _: [u8; 0x4], // 0xc8
        pub _: [u8; 0x4], // 0xcc
        pub _: [u8; 0x4], // 0xd0
        pub _: [u8; 0x1], // 0xd4
        pub _: [u8; 0x3], // 0xd5
        pub _: [u8; 0x4], // 0xd8
        pub _: [u8; 0x4], // 0xdc
        pub _: [u8; 0x10], // 0xe0
    }

    #[repr(C)]
    pub struct CAnimScriptComponentUpdater {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x8], // 0x30
    }

    #[repr(C)]
    pub struct CRagdollUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub _: [u8; 0x4], // 0x70
        pub _: [u8; 0x4], // 0x74
    }

    #[repr(C)]
    pub struct CBoneConstraintBase {
        pub pad_0: [u8; 0x20], // 0x0
    }

    #[repr(C)]
    pub struct CPathAnimMotorUpdater {
        pub pad_0: [u8; 0x28], // 0x0
    }

    #[repr(C)]
    pub struct CMaterialAttributeAnimTag {
        pub pad_0: [u8; 0x58], // 0x0
        pub _: [u8; 0x8], // 0x58
        pub _: [u8; 0x4], // 0x60
        pub _: [u8; 0x4], // 0x64
        pub _: [u8; 0x8], // 0x68
    }

    #[repr(C)]
    pub struct CNmFootEventConditionNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x2], // 0x10
        pub _: [u8; 0x2], // 0x12
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct CNmFloatChannelSet_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x10], // 0x8
    }

    #[repr(C)]
    pub struct CNmFootEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x8], // 0x18
    }

    #[repr(C)]
    pub struct CPhysSurfacePropertiesAudio {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
    }

    #[repr(C)]
    pub struct CSeqAutoLayer {
        pub _: [u8; 0x2], // 0x0
        pub _: [u8; 0x2], // 0x2
        pub _: [u8; 0x8], // 0x4
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
    }

    #[repr(C)]
    pub struct ModelEmbeddedMesh_t {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x18], // 0x20
        pub _: [u8; 0x18], // 0x38
        pub _: [u8; 0x18], // 0x50
        pub _: [u8; 0x4], // 0x68
        pub _: [u8; 0x4], // 0x6c
    }

    #[repr(C)]
    pub struct PhysSoftbodyDesc_t {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x18], // 0x18
        pub _: [u8; 0x18], // 0x30
        pub _: [u8; 0x18], // 0x48
        pub _: [u8; 0x18], // 0x60
        pub _: [u8; 0x18], // 0x78
    }

    #[repr(C)]
    pub struct CPulseRuntimeMethodArg {
        pub _: [u8; 0x38], // 0x0
        pub _: [u8; 0x8], // 0x38
        pub _: [u8; 0x40], // 0x40
    }

    #[repr(C)]
    pub struct CAnimSequenceParams {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct CTargetWarpUpdateNode {
        pub pad_0: [u8; 0x74], // 0x0
        pub _: [u8; 0x4], // 0x74
        pub _: [u8; 0x2], // 0x78
        pub _: [u8; 0x2], // 0x7a
        pub _: [u8; 0x2], // 0x7c
        pub _: [u8; 0x2], // 0x7e
        pub _: [u8; 0x4], // 0x80
        pub _: [u8; 0x4], // 0x84
        pub _: [u8; 0x4], // 0x88
        pub _: [u8; 0x1], // 0x8c
        pub _: [u8; 0x1], // 0x8d
        pub _: [u8; 0x1], // 0x8e
        pub _: [u8; 0x1], // 0x8f
        pub _: [u8; 0x4], // 0x90
        pub _: [u8; 0x4], // 0x94
    }

    #[repr(C)]
    pub struct CNmVirtualParameterBoolNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CFollowTargetUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub _: [u8; 0x18], // 0x70
        pub _: [u8; 0x2], // 0x88
        pub _: [u8; 0x6], // 0x8a
    }

    #[repr(C)]
    pub struct PulseRuntimeStateOffset_t {
        pub _: [u8; 0x2], // 0x0
    }

    #[repr(C)]
    pub struct CCPPScriptComponentUpdater {
        pub pad_0: [u8; 0x30], // 0x0
        pub _: [u8; 0x30], // 0x30
    }

    #[repr(C)]
    pub struct NetVarConfigIndex {
        pub _: [u8; 0xc], // 0x0
    }

    #[repr(C)]
    pub struct CAnimData {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x10], // 0x10
        pub _: [u8; 0x18], // 0x20
        pub _: [u8; 0x18], // 0x38
        pub _: [u8; 0x8], // 0x50
        pub _: [u8; 0x18], // 0x58
    }

    #[repr(C)]
    pub struct IKSolverSettings_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
    }

    #[repr(C)]
    pub struct CBinaryUpdateNode {
        pub pad_0: [u8; 0x60], // 0x0
        pub _: [u8; 0x10], // 0x60
        pub _: [u8; 0x10], // 0x70
        pub _: [u8; 0x4], // 0x80
        pub _: [u8; 0x4], // 0x84
        pub _: [u8; 0x1], // 0x88
        pub _: [u8; 0x7], // 0x89
    }

    #[repr(C)]
    pub struct CBlendNodeInstanceData {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0xc], // 0x10
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x10], // 0x20
    }

    #[repr(C)]
    pub struct CNmParameterizedBlendNode__BlendRange_t {
        pub _: [u8; 0x2], // 0x0
        pub _: [u8; 0x2], // 0x2
        pub _: [u8; 0x8], // 0x4
    }

    #[repr(C)]
    pub struct CAnimKeyData {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x18], // 0x28
        pub _: [u8; 0x18], // 0x40
        pub _: [u8; 0x8], // 0x58
        pub _: [u8; 0x18], // 0x60
    }

    #[repr(C)]
    pub struct AttachmentHandle_t {
        pub _: [u8; 0x1], // 0x0
    }

    #[repr(C)]
    pub struct CAnimMorphDifference {
        pub _: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct FootFixedData_t {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x10], // 0x10
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x10], // 0x40
    }

    #[repr(C)]
    pub struct CMotionGraphGroup {
        pub _: [u8; 0xb8], // 0x0
        pub _: [u8; 0x18], // 0xb8
        pub _: [u8; 0x18], // 0xd0
        pub _: [u8; 0x18], // 0xe8
        pub _: [u8; 0x8], // 0x100
    }

    #[repr(C)]
    pub struct CPulse_InstructionDebug {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x10], // 0x8
    }

    #[repr(C)]
    pub struct CNmVectorNegateNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CNmSyncTrack__Event_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
    }

    #[repr(C)]
    pub struct CParticleCollectionRendererVecInput {
        pub pad_0: [u8; 0x6d8], // 0x0
    }

    #[repr(C)]
    pub struct CNmTarget {
        pub _: [u8; 0x20], // 0x0
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x1], // 0x28
        pub _: [u8; 0x1], // 0x29
        pub _: [u8; 0x1], // 0x2a
        pub _: [u8; 0x5], // 0x2b
    }

    #[repr(C)]
    pub struct CNmControlParameterIDNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct CNmBodyGroupEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
    }

    #[repr(C)]
    pub struct CWayPointHelperUpdateNode {
        pub pad_0: [u8; 0x74], // 0x0
        pub _: [u8; 0x4], // 0x74
        pub _: [u8; 0x4], // 0x78
        pub _: [u8; 0x1], // 0x7c
        pub _: [u8; 0x1], // 0x7d
        pub _: [u8; 0x2], // 0x7e
    }

    #[repr(C)]
    pub struct CMoodVData {
        pub _: [u8; 0xe0], // 0x0
        pub _: [u8; 0x8], // 0xe0
        pub _: [u8; 0x18], // 0xe8
    }

    #[repr(C)]
    pub struct CModelConfigElement_AttachedModel {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x8], // 0x50
        pub _: [u8; 0x8], // 0x58
        pub _: [u8; 0xc], // 0x60
        pub _: [u8; 0xc], // 0x6c
        pub _: [u8; 0x8], // 0x78
        pub _: [u8; 0x8], // 0x80
        pub _: [u8; 0x4], // 0x88
        pub _: [u8; 0x1], // 0x8c
        pub _: [u8; 0x1], // 0x8d
        pub _: [u8; 0x2], // 0x8e
        pub _: [u8; 0x8], // 0x90
        pub _: [u8; 0x8], // 0x98
        pub _: [u8; 0x1], // 0xa0
        pub _: [u8; 0x4f], // 0xa1
    }

    #[repr(C)]
    pub struct CAnimTagManagerUpdater {
        pub pad_0: [u8; 0x38], // 0x0
        pub _: [u8; 0x40], // 0x38
    }

    #[repr(C)]
    pub struct CParticleProperty {
        pub pad_0: [u8; 0x28], // 0x0
    }

}
