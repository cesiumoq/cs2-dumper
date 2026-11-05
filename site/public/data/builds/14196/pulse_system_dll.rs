/* cesium dumper | generated from live schema */
#![allow(non_snake_case, non_camel_case_types, dead_code)]

pub mod pulse_system_dll {

    #[repr(C)]
    pub struct CPulseCell_Step_TestDomainDestroyFakeEntity {
        pub pad_0: [u8; 0x48], // 0x0
    }

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
        pub _: [u8; 0x40], // 0x8
    }

    #[repr(C)]
    pub struct CPulse_ResumePoint {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct CTestDomainDerived_Cursor {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x4], // 0xd8
        pub _: [u8; 0x4], // 0xdc
    }

    #[repr(C)]
    pub struct CPulseCell_PickBestOutflowSelector {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x18], // 0x50
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
    pub struct CPulseCell_TestYieldForever {
        pub pad_0: [u8; 0xd8], // 0x0
    }

    #[repr(C)]
    pub struct CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView {
        pub pad_0: [u8; 0xd0], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_TestWaitWithCursorState__InstanceState_t {
        pub _: [u8; 0x4], // 0x0
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
    pub struct CPulseCell_TestWaitWithAutoTracepoints {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x8], // 0xd8
        pub _: [u8; 0x48], // 0xe0
    }

    #[repr(C)]
    pub struct PulseNodeDynamicOutflows_t__DynamicOutflow_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x48], // 0x8
    }

    #[repr(C)]
    pub struct CPulseCell_Test_MultiOutflow_WithParams {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x48], // 0x48
        pub _: [u8; 0x48], // 0x90
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
    pub struct CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CPulseTurtleGraphicsCursor {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x4], // 0xd8
        pub _: [u8; 0x8], // 0xdc
        pub _: [u8; 0x4], // 0xe4
        pub _: [u8; 0x8], // 0xe8
    }

    #[repr(C)]
    pub struct CPulseCell_TestWaitWithCursorState__CursorState_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0xc], // 0x8
        pub _: [u8; 0x8], // 0x14
        pub _: [u8; 0x8], // 0x1c
    }

    #[repr(C)]
    pub struct CPulseCell_Inflow_BaseEntrypoint {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x30], // 0x50
    }

    #[repr(C)]
    pub struct CPulseCell_Test_MultiInflow_NoDefault {
        pub pad_0: [u8; 0x48], // 0x0
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
    pub struct CPulseCell_Value_TestValue50 {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_Test_MultiOutflow_WithParams_Yielding {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x48], // 0xd8
        pub _: [u8; 0x48], // 0x120
        pub _: [u8; 0x48], // 0x168
        pub _: [u8; 0x48], // 0x1b0
        pub _: [u8; 0x48], // 0x1f8
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
    pub struct CPulseCell_Step_TestDomainTracepoint {
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
    pub struct CPulseGraphInstance_TestDomain_Derived {
        pub pad_0: [u8; 0xd0], // 0x0
        pub _: [u8; 0x8], // 0xd0
    }

    #[repr(C)]
    pub struct CPulseGraphInstance_TestDomain {
        pub pad_0: [u8; 0xa0], // 0x0
        pub _: [u8; 0x1], // 0xa0
        pub _: [u8; 0x1], // 0xa1
        pub _: [u8; 0x1], // 0xa2
        pub _: [u8; 0x1], // 0xa3
        pub _: [u8; 0x4], // 0xa4
        pub _: [u8; 0x4], // 0xa8
        pub _: [u8; 0x4], // 0xac
        pub _: [u8; 0x18], // 0xb0
        pub _: [u8; 0x8], // 0xc8
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
    pub struct CPulseCell_Outflow_TestExplicitYesNo {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x48], // 0x48
        pub _: [u8; 0x48], // 0x90
    }

    #[repr(C)]
    pub struct CPulseCell_Outflow_TestRandomYesNo {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x48], // 0x48
        pub _: [u8; 0x48], // 0x90
    }

    #[repr(C)]
    pub struct CPulseCell_Outflow_CycleOrdered__InstanceState_t {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_LimitCount__InstanceState_t {
        pub _: [u8; 0x4], // 0x0
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
    pub struct CPulseGraphInstance_TurtleGraphics {
        pub pad_0: [u8; 0xb0], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_Val_TestDomainGetEntityName {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_Inflow_Wait {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x48], // 0xd8
    }

    #[repr(C)]
    pub struct CPulseCell_TestWaitWithCursorState {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x48], // 0xd8
        pub _: [u8; 0x48], // 0x120
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
    pub struct CPulseCell_Val_TestDomainFindEntityByName {
        pub pad_0: [u8; 0x48], // 0x0
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
    pub struct CPulseCell_TestEnums {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
    }

    #[repr(C)]
    pub struct CPulseCell_Step_TestDomainEntFire {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x8], // 0x48
    }

    #[repr(C)]
    pub struct CPulseCell_ExampleSelector {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x18], // 0x48
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
    pub struct CPulseCell_ExampleCriteria__Criteria_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
    }

    #[repr(C)]
    pub struct CPulseCell_ExampleCriteria {
        pub pad_0: [u8; 0x48], // 0x0
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
    pub struct CPulseCell_Step_TestDomainCreateFakeEntity {
        pub pad_0: [u8; 0x48], // 0x0
    }

    #[repr(C)]
    pub struct CPulseCell_TestYieldWithObservables {
        pub pad_0: [u8; 0xd8], // 0x0
        pub _: [u8; 0x8], // 0xd8
        pub _: [u8; 0x90], // 0xe0
        pub _: [u8; 0x8], // 0x170
        pub _: [u8; 0x90], // 0x178
        pub _: [u8; 0x48], // 0x208
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
    pub struct TestComponent_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

}
