/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

#![allow(non_snake_case, non_camel_case_types, dead_code)]

pub mod animationsystem {

    pub type PulseBestOutflowRules_t = i32;
    pub type PulseCursorCancelPriority_t = i32;
    pub type PulseMethodCallMode_t = i32;
    pub type PulseCursorWakePriority_t = i32;
    pub type ParticleSetMethod_t = i32;
    pub type SeqCmd_t = i32;
    pub type CNmEventRelevance_t = i32;
    pub type BoneTransformSpace_t = i32;
    pub type CAnimationGraphVisualizerPrimitiveType = i32;
    pub type NmTransitionRule_t = i32;
    pub type BinaryNodeTiming = i32;
    pub type NmFollowBoneMode_t = i32;
    pub type SolveIKChainAnimNodeDebugSetting = i32;
    pub type CNmParticleEvent__Type_t = i32;
    pub type ParticleFloatBiasType_t = i32;
    pub type CNmTargetWarpNode__TargetUpdateRule_t = i32;
    pub type SharedMovementGait_t = i32;
    pub type OrientationWarpRootMotionSource_t = i32;
    pub type PulseVariableKeysSource_t = i32;
    pub type IKTargetCoordinateSystem = i32;
    pub type ParticleFloatType_t = i32;
    pub type CNmFloatAngleMathNode__Operation_t = i32;
    pub type VPhysXAggregateData_t__VPhysXFlagEnum_t = i32;
    pub type CNmRootMotionOverrideNode__OverrideFlags_t = i32;
    pub type NmEasingOperation_t = i32;
    pub type EIKEndEffectorRotationFixUpMode = i32;
    pub type MatterialAttributeTagType_t = i32;
    pub type PFNoiseTurbulence_t = i32;
    pub type NmTargetWarpAlgorithm_t = i32;
    pub type ParticleColorBlendMode_t = i32;
    pub type ParticleColorBlendType_t = i32;
    pub type NmTransitionRuleCondition_t = i32;
    pub type ModelMeshBufferUsage_t = i32;
    pub type NmGraphDebugMode_t = i32;
    pub type TargetWarpTimingMethod = i32;
    pub type ScriptedMoveTo_t = i32;
    pub type EDemoBoneSelectionMode = i32;
    pub type PulseDurationStringFormat_t = i32;
    pub type EPulseGraphExecutionHistoryFlag = i32;
    pub type StepPhase = i32;
    pub type FlexOpCode_t = i32;
    pub type NmCachedValueMode_t = i32;
    pub type AnimNodeNetworkMode = i32;
    pub type VPhysXBodyPart_t__VPhysXFlagEnum_t = i32;
    pub type AnimParamType_t = i32;
    pub type NmEasingFunction_t = i32;
    pub type ParticleModelType_t = i32;
    pub type IKTargetSource = i32;
    pub type PermModelInfo_t__FlagEnum = i32;
    pub type CNmFloatMathNode__Operator_t = i32;
    pub type CNmSyncEventIndexConditionNode__TriggerMode_t = i32;
    pub type ParticleFloatRoundType_t = i32;
    pub type PFNoiseType_t = i32;
    pub type ParticleDirectionNoiseType_t = i32;
    pub type AnimParamNetworkSetting = i32;
    pub type MorphFlexControllerRemapType_t = i32;
    pub type MeshDrawPrimitiveFlags_t = i32;
    pub type TargetWarpAngleMode_t = i32;
    pub type NmIKBlendMode_t = i32;
    pub type ModelBoneFlexComponent_t = i32;
    pub type CNmStateNode__TimedEvent_t__Comparison_t = i32;
    pub type PoseType_t = i32;
    pub type CNmClothEvent__Type_t = i32;
    pub type CNmRootMotionData__SamplingMode_t = i32;
    pub type NmEventConditionRules_t = i32;
    pub type AnimationType_t = i32;
    pub type AnimValueSource = i32;
    pub type CNmTimeConditionNode__Operator_t = i32;
    pub type LinearRootMotionBlendMode_t = i32;
    pub type RagdollPoseControl = i32;
    pub type IKSolverType = i32;
    pub type TargetWarpCorrectionMethod = i32;
    pub type TargetSelectorAngleMode_t = i32;
    pub type Blend2DMode = i32;
    pub type HandshakeTagState_t = i32;
    pub type ChoiceChangeMethod = i32;
    pub type ChoiceBlendMethod = i32;
    pub type VPhysXConstraintParams_t__EnumFlags0_t = i32;
    pub type ParticleFloatMapType_t = i32;
    pub type AnimParamVectorType_t = i32;
    pub type CNmCurrentSyncEventNode__InfoType_t = i32;
    pub type BlendKeyType = i32;
    pub type StateActionBehavior = i32;
    pub type NmRootMotionBlendMode_t = i32;
    pub type NmFootPhaseCondition_t = i32;
    pub type ModelSkeletonData_t__BoneFlags_t = i32;
    pub type CNmOrientationWarpNode__AlignmentMode_t = i32;
    pub type GPUParticleCollisionMode_t = i32;
    pub type MorphBundleType_t = i32;
    pub type CNmIDComparisonNode__Comparison_t = i32;
    pub type NmPoseBlendMode_t = i32;
    pub type ParticleFloatInputMode_t = i32;
    pub type ResetCycleOption = i32;
    pub type CNmVectorInfoNode__Info_t = i32;
    pub type TagActionStatus = i32;
    pub type IKChannelMode = i32;
    pub type NmGraphValueType_t = i32;
    pub type ParticleFloatRandomMode_t = i32;
    pub type PulseValueType_t = i32;
    pub type PFNoiseModifier_t = i32;
    pub type ParticleVecType_t = i32;
    pub type NmFootPhase_t = i32;
    pub type CNmTargetInfoNode__Info_t = i32;
    pub type FootstepLandedFootSoundType_t = i32;
    pub type FootLockSubVisualization = i32;
    pub type CNmSoundEvent__Position_t = i32;
    pub type FootstepJumpPhase_t = i32;
    pub type NmFrameSnapEventMode_t = i32;
    pub type FootPinningTimingSource = i32;
    pub type DampingSpeedFunction = i32;
    pub type PulseApiFeature_t = i32;
    pub type AnimationProcessingType_t = i32;
    pub type JiggleBoneSimSpace = i32;
    pub type StanceOverrideMode = i32;
    pub type IkEndEffectorType = i32;
    pub type AnimScriptType = i32;
    pub type CNmTimeConditionNode__ComparisonType_t = i32;
    pub type SeqPoseSetting_t = i32;
    pub type AnimParamButton_t = i32;
    pub type SelectorTagBehavior_t = i32;
    pub type HandshakeTagType_t = i32;
    pub type OrientationWarpTargetOffsetMode_t = i32;
    pub type OrientationWarpMode_t = i32;
    pub type PulseInstructionCode_t = i32;
    pub type ParticleTransformType_t = i32;
    pub type ParticleAttachment_t = i32;
    pub type CNmEventTargetEntity_t = i32;
    pub type FieldNetworkOption = i32;
    pub type NmGraphEventTypeCondition_t = i32;
    pub type CNmTransitionNode__TransitionOptions_t = i32;
    pub type CNmFloatComparisonNode__Comparison_t = i32;
    pub type VPhysXJoint_t__Flags_t = i32;
    pub type ScriptedHeldWeaponBehavior_t = i32;
    pub type VelocityMetricMode = i32;
    pub type FacingMode = i32;
    pub type VertexAlbedoFormat_t = i32;
    pub type AimMatrixBlendMode = i32;
    pub type AnimationSnapshotType_t = i32;
    pub type NmTargetWarpRule_t = i32;
    pub type FootFallTagFoot_t = i32;
    pub type ChoiceMethod = i32;
    pub type AnimVectorSource = i32;
    pub type IkTargetType = i32;
    pub type RenderMeshSlotType_t = i32;
    pub type BoneMaskBlendSpace = i32;
    pub type MovementCapability_t = i32;
    pub type ModelConfigAttachmentType_t = i32;
    pub type BinaryNodeChildOption = i32;
    pub type NPCPhysicsHullType_t = i32;
    pub type PulseDomainValueType_t = i32;
    pub type JumpCorrectionMethod = i32;
    pub type MoodType_t = i32;
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
    pub struct CPulseCell_Base {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_nEditorNodeID: [u8; 0x40], // 0x8
    }
    #[repr(C)]
    pub struct CPulse_ResumePoint {
        pub pad_0: [u8; 0x48], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_PickBestOutflowSelector {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_nCheckType: [u8; 0x8], // 0x48
        pub m_OutflowList: [u8; 0x18], // 0x50
    }
    #[repr(C)]
    pub struct CParticleBindingRealPulse {
        pub pad_0: [u8; 0xA8], // 0x0
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
    pub struct PulseNodeDynamicOutflows_t__DynamicOutflow_t {
        pub m_OutflowID: [u8; 0x8], // 0x0
        pub m_Connection: [u8; 0x48], // 0x8
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
    pub struct CPulseCell_Inflow_BaseEntrypoint {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_EntryChunk: [u8; 0x8], // 0x48
        pub m_RegisterMap: [u8; 0x30], // 0x50
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
    pub struct CPulseCell_Outflow_CycleOrdered__InstanceState_t {
        pub m_nNextIndex: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CParticleCollectionBindingInstance {
        pub pad_0: [u8; 0xA8], // 0x0
    }
    #[repr(C)]
    pub struct CPulseCell_LimitCount__InstanceState_t {
        pub m_nCurrentCount: [u8; 0x4], // 0x0
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
    pub struct CPulseCell_Inflow_Wait {
        pub pad_0: [u8; 0xD8], // 0x0
        pub m_WakeResume: [u8; 0x48], // 0xD8
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
    pub struct CAnimationLayer {
        pub m_hSequence: [u8; 0xC], // 0x0
        pub m_flPrevCycle: [u8; 0x4], // 0xC
        pub m_flCycle: [u8; 0xC], // 0x10
        pub m_flWeight: [u8; 0xC], // 0x1C
        pub m_nOrder: [u8; 0xC], // 0x28
        pub m_bLooping: [u8; 0x4], // 0x34
        pub m_nFlags: [u8; 0x4], // 0x38
        pub m_bSequenceFinished: [u8; 0x4], // 0x3C
        pub m_flKillRate: [u8; 0x4], // 0x40
        pub m_flKillDelay: [u8; 0x4], // 0x44
        pub m_nPriority: [u8; 0x4], // 0x48
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
    pub struct CAnimFrameBlockAnim {
        pub m_nStartFrame: [u8; 0x4], // 0x0
        pub m_nEndFrame: [u8; 0x4], // 0x4
        pub m_segmentIndexArray: [u8; 0x18], // 0x8
    }
    #[repr(C)]
    pub struct CZeroPoseUpdateNode {
        pub pad_0: [u8; 0x60], // 0x0
    }
    #[repr(C)]
    pub struct CSlowDownOnSlopesUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub m_flSlowDownStrength: [u8; 0x8], // 0x70
    }
    #[repr(C)]
    pub struct COrientationWarpUpdateNode {
        pub pad_0: [u8; 0x74], // 0x0
        pub m_eMode: [u8; 0x4], // 0x74
        pub m_hTargetParam: [u8; 0x2], // 0x78
        pub m_hTargetPositionParam: [u8; 0x2], // 0x7A
        pub m_hFallbackTargetPositionParam: [u8; 0x4], // 0x7C
        pub m_eTargetOffsetMode: [u8; 0x4], // 0x80
        pub m_flTargetOffset: [u8; 0x4], // 0x84
        pub m_hTargetOffsetParam: [u8; 0x8], // 0x88
        pub m_damping: [u8; 0x18], // 0x90
        pub m_eRootMotionSource: [u8; 0x4], // 0xA8
        pub m_flMaxRootMotionScale: [u8; 0x4], // 0xAC
        pub m_bEnablePreferredRotationDirection: [u8; 0x4], // 0xB0
        pub m_ePreferredRotationDirection: [u8; 0x4], // 0xB4
        pub m_flPreferredRotationThreshold: [u8; 0x8], // 0xB8
    }
    #[repr(C)]
    pub struct CAnimParameterBase {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_name: [u8; 0x8], // 0x18
        pub m_sComment: [u8; 0x8], // 0x20
        pub m_group: [u8; 0x8], // 0x28
        pub m_id: [u8; 0x18], // 0x30
        pub m_componentName: [u8; 0x20], // 0x48
        pub m_bNetworkingRequested: [u8; 0x1], // 0x68
        pub m_bIsReferenced: [u8; 0x7], // 0x69
    }
    #[repr(C)]
    pub struct CSequenceFinishedAnimTag {
        pub pad_0: [u8; 0x58], // 0x0
        pub m_sequenceName: [u8; 0x8], // 0x58
    }
    #[repr(C)]
    pub struct CSceneObjectData {
        pub m_vMinBounds: [u8; 0xC], // 0x0
        pub m_vMaxBounds: [u8; 0xC], // 0xC
        pub m_drawCalls: [u8; 0x10], // 0x18
        pub m_drawBounds: [u8; 0x10], // 0x28
        pub m_meshlets: [u8; 0x10], // 0x38
        pub m_rtProxyDrawCalls: [u8; 0x10], // 0x48
        pub m_vTintColor: [u8; 0x60], // 0x58
    }
    #[repr(C)]
    pub struct CFootCycle {
        pub pad_0: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CParticleModelInput {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nType: [u8; 0x8], // 0x10
        pub m_NamedValue: [u8; 0x40], // 0x18
        pub m_nControlPoint: [u8; 0x8], // 0x58
    }
    #[repr(C)]
    pub struct CInputStreamUpdateNode {
        pub pad_0: [u8; 0x60], // 0x0
    }
    #[repr(C)]
    pub struct CNmFootIKTask {
        pub pad_0: [u8; 0x70], // 0x0
        pub m_nLeftEffectorBoneIdx: [u8; 0x4], // 0x70
        pub m_nRightEffectorBoneIdx: [u8; 0xC], // 0x74
        pub m_leftTargetTransform: [u8; 0x20], // 0x80
        pub m_rightTargetTransform: [u8; 0x20], // 0xA0
        pub m_nLeftTargetBoneIdx: [u8; 0x4], // 0xC0
        pub m_nRightTargetBoneIdx: [u8; 0xC], // 0xC4
        pub m_leftTarget: [u8; 0x30], // 0xD0
        pub m_rightTarget: [u8; 0x30], // 0x100
        pub m_blendMode: [u8; 0x4], // 0x130
        pub m_flBlendWeight: [u8; 0x4], // 0x134
        pub m_bIsTargetInWorldSpace: [u8; 0x1], // 0x138
        pub m_bIsRunningFromDeserializedData: [u8; 0x7], // 0x139
    }
    #[repr(C)]
    pub struct CIntAnimParameter {
        pub pad_0: [u8; 0x80], // 0x0
        pub m_defaultValue: [u8; 0x4], // 0x80
        pub m_minValue: [u8; 0x4], // 0x84
        pub m_maxValue: [u8; 0x8], // 0x88
    }
    #[repr(C)]
    pub struct CNmParameterizedBlendNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_sourceNodeIndices: [u8; 0x18], // 0x10
        pub m_nInputParameterValueNodeIdx: [u8; 0x2], // 0x28
        pub m_bAllowLooping: [u8; 0x6], // 0x2A
    }
    #[repr(C)]
    pub struct CNmScaleTask {
        pub pad_0: [u8; 0xD0], // 0x0
    }
    #[repr(C)]
    pub struct PerTickSettings_t {
        pub m_startingLocalToWorld: [u8; 0x20], // 0x0
        pub m_prevLocalToWorld: [u8; 0x20], // 0x20
        pub m_finalLocalToWorld: [u8; 0x20], // 0x40
        pub m_rootMotion: [u8; 0x63C], // 0x60
        pub m_updateID: [u8; 0x8], // 0x69C
        pub m_flLastTimeStep: [u8; 0x4], // 0x6A4
        pub m_flPrevAnimTime: [u8; 0x4], // 0x6A8
        pub m_flNextAnimTime: [u8; 0x8], // 0x6AC
        pub m_bAwaken: [u8; 0x1], // 0x6B4
        pub m_bTeleported: [u8; 0x1], // 0x6B5
        pub m_bIsClient: [u8; 0x1], // 0x6B6
        pub m_bIsPredicted: [u8; 0x9], // 0x6B7
    }
    #[repr(C)]
    pub struct CNmFrameSnapEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_frameSnapMode: [u8; 0x8], // 0x18
    }
    #[repr(C)]
    pub struct CAnimNodePath {
        pub m_path: [u8; 0x2C], // 0x0
        pub m_nCount: [u8; 0x4], // 0x2C
    }
    #[repr(C)]
    pub struct AnimNodeOutputID {
        pub m_id: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CNmSyncTrack {
        pub m_syncEvents: [u8; 0xA8], // 0x0
        pub m_nStartEventOffset: [u8; 0x8], // 0xA8
    }
    #[repr(C)]
    pub struct CSeqBoneMaskList {
        pub m_sName: [u8; 0x10], // 0x0
        pub m_nLocalBoneArray: [u8; 0x18], // 0x10
        pub m_flBoneWeightArray: [u8; 0x18], // 0x28
        pub m_flDefaultMorphCtrlWeight: [u8; 0x8], // 0x40
        pub m_morphCtrlWeightArray: [u8; 0x18], // 0x48
    }
    #[repr(C)]
    pub struct CAnimEncodedFrames {
        pub m_fileName: [u8; 0x10], // 0x0
        pub m_nFrames: [u8; 0x4], // 0x10
        pub m_nFramesPerBlock: [u8; 0x4], // 0x14
        pub m_frameblockArray: [u8; 0x18], // 0x18
        pub m_usageDifferences: [u8; 0xA8], // 0x30
    }
    #[repr(C)]
    pub struct SampleCode {
        pub m_subCode: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct CCachedPose {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_transforms: [u8; 0x18], // 0x8
        pub m_morphWeights: [u8; 0x18], // 0x20
        pub m_hSequence: [u8; 0x4], // 0x38
        pub m_flCycle: [u8; 0x4], // 0x3C
    }
    #[repr(C)]
    pub struct CNmTransitionEventConditionNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_requireRuleID: [u8; 0x8], // 0x10
        pub m_eventConditionRules: [u8; 0x4], // 0x18
        pub m_nSourceStateNodeIdx: [u8; 0x2], // 0x1C
        pub m_ruleCondition: [u8; 0x2], // 0x1E
    }
    #[repr(C)]
    pub struct CTaskStatusAnimTag {
        pub pad_0: [u8; 0x58], // 0x0
    }
    #[repr(C)]
    pub struct CStateNodeInstanceData {
        pub m_stateWeights: [u8; 0x8], // 0x0
        pub m_vTransitionVelocityDeltaWS: [u8; 0x18], // 0x8
        pub m_currentStateStartTime: [u8; 0x1C], // 0x20
        pub m_resetCount: [u8; 0x10], // 0x3C
    }
    #[repr(C)]
    pub struct CMotionGraphConfig {
        pub m_paramValues: [u8; 0x10], // 0x0
        pub m_flDuration: [u8; 0x4], // 0x10
        pub m_nMotionIndex: [u8; 0x4], // 0x14
        pub m_nSampleStart: [u8; 0x4], // 0x18
        pub m_nSampleCount: [u8; 0x4], // 0x1C
    }
    #[repr(C)]
    pub struct CMotionSearchNode {
        pub m_children: [u8; 0x18], // 0x0
        pub m_quantizer: [u8; 0x20], // 0x18
        pub m_sampleCodes: [u8; 0x18], // 0x38
        pub m_sampleIndices: [u8; 0x18], // 0x50
        pub m_selectableSamples: [u8; 0x18], // 0x68
    }
    #[repr(C)]
    pub struct CAnimActivity {
        pub m_name: [u8; 0x10], // 0x0
        pub m_nActivity: [u8; 0x4], // 0x10
        pub m_nFlags: [u8; 0x4], // 0x14
        pub m_nWeight: [u8; 0x8], // 0x18
    }
    #[repr(C)]
    pub struct CAnimScriptManager {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_scriptInfo: [u8; 0x190], // 0x10
    }
    #[repr(C)]
    pub struct AnimationDecodeDebugDumpElement_t {
        pub m_nEntityIndex: [u8; 0x8], // 0x0
        pub m_modelName: [u8; 0x8], // 0x8
        pub m_poseParams: [u8; 0x18], // 0x10
        pub m_decodeOps: [u8; 0x18], // 0x28
        pub m_internalOps: [u8; 0x18], // 0x40
        pub m_decodedAnims: [u8; 0x18], // 0x58
    }
    #[repr(C)]
    pub struct CChoreoInstanceData {
        pub m_AnimOverlay: [u8; 0x398], // 0x0
    }
    #[repr(C)]
    pub struct PulseRuntimeVarIndex_t {
        pub m_Value: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct ConfigIndex {
        pub m_nGroup: [u8; 0x2], // 0x0
        pub m_nConfig: [u8; 0x2], // 0x2
    }
    #[repr(C)]
    pub struct VPhysXCollisionAttributes_t {
        pub m_nIncludeDetailLayerCount: [u8; 0x4], // 0x0
        pub m_CollisionGroup: [u8; 0x4], // 0x4
        pub m_InteractAs: [u8; 0x18], // 0x8
        pub m_InteractWith: [u8; 0x18], // 0x20
        pub m_InteractExclude: [u8; 0x18], // 0x38
        pub m_DetailLayers: [u8; 0x18], // 0x50
        pub m_CollisionGroupString: [u8; 0x8], // 0x68
        pub m_InteractAsStrings: [u8; 0x18], // 0x70
        pub m_InteractWithStrings: [u8; 0x18], // 0x88
        pub m_InteractExcludeStrings: [u8; 0x18], // 0xA0
        pub m_DetailLayerStrings: [u8; 0x18], // 0xB8
    }
    #[repr(C)]
    pub struct CSequenceUpdateNode {
        pub pad_0: [u8; 0x78], // 0x0
        pub m_hSequence: [u8; 0x4], // 0x78
        pub m_duration: [u8; 0x4], // 0x7C
        pub m_paramSpans: [u8; 0x18], // 0x80
        pub m_tags: [u8; 0x18], // 0x98
    }
    #[repr(C)]
    pub struct CStateMachineInstanceData {
        pub m_flTimeInState: [u8; 0x4], // 0x0
        pub m_currentTransitionIndex: [u8; 0xC], // 0x4
        pub m_prevStateIndex: [u8; 0x4], // 0x10
        pub m_scheduledTransitionIndex: [u8; 0x8], // 0x14
    }
    #[repr(C)]
    pub struct CNmPassthroughNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nChildNodeIdx: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CNmClipReferenceNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
    }
    #[repr(C)]
    pub struct CNmGraphDefinition__ExternalGraphSlot_t {
        pub m_nNodeIdx: [u8; 0x8], // 0x0
        pub m_slotID: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct PulseRuntimeEntrypointIndex_t {
        pub m_Value: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CAimCameraUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub m_hParameterPosition: [u8; 0x2], // 0x70
        pub m_hParameterOrientation: [u8; 0x2], // 0x72
        pub m_hParameterPelvisOffset: [u8; 0x2], // 0x74
        pub m_hParameterCameraOnly: [u8; 0x2], // 0x76
        pub m_hParameterWeaponDepenetrationDistance: [u8; 0x2], // 0x78
        pub m_hParameterWeaponDepenetrationDelta: [u8; 0x2], // 0x7A
        pub m_hParameterCameraClearanceDistance: [u8; 0x4], // 0x7C
        pub m_opFixedSettings: [u8; 0x38], // 0x80
    }
    #[repr(C)]
    pub struct PulseRuntimeDomainValueIndex_t {
        pub m_Value: [u8; 0x2], // 0x0
    }
    #[repr(C)]
    pub struct LookData {
        pub m_vLookTarget: [u8; 0x18], // 0x0
    }
    #[repr(C)]
    pub struct CSeqSeqDescFlag {
        pub m_bLooping: [u8; 0x1], // 0x0
        pub m_bSnap: [u8; 0x1], // 0x1
        pub m_bAutoplay: [u8; 0x1], // 0x2
        pub m_bPost: [u8; 0x1], // 0x3
        pub m_bHidden: [u8; 0x1], // 0x4
        pub m_bMulti: [u8; 0x1], // 0x5
        pub m_bLegacyDelta: [u8; 0x1], // 0x6
        pub m_bLegacyWorldspace: [u8; 0x1], // 0x7
        pub m_bLegacyCyclepose: [u8; 0x1], // 0x8
        pub m_bLegacyRealtime: [u8; 0x1], // 0x9
        pub m_bModelDoc: [u8; 0x1], // 0xA
    }
    #[repr(C)]
    pub struct PermModelInfo_t {
        pub m_nFlags: [u8; 0x4], // 0x0
        pub m_vHullMin: [u8; 0xC], // 0x4
        pub m_vHullMax: [u8; 0xC], // 0x10
        pub m_vViewMin: [u8; 0xC], // 0x1C
        pub m_vViewMax: [u8; 0xC], // 0x28
        pub m_flMass: [u8; 0x4], // 0x34
        pub m_vEyePosition: [u8; 0xC], // 0x38
        pub m_flMaxEyeDeflection: [u8; 0x4], // 0x44
        pub m_sSurfaceProperty: [u8; 0x8], // 0x48
        pub m_keyValueText: [u8; 0x8], // 0x50
    }
    #[repr(C)]
    pub struct StanceInfo_t {
        pub m_vPosition: [u8; 0xC], // 0x0
        pub m_flDirection: [u8; 0x4], // 0xC
    }
    #[repr(C)]
    pub struct IKBoneNameAndIndex_t {
        pub m_Name: [u8; 0x10], // 0x0
    }
    #[repr(C)]
    pub struct CPulse_Chunk {
        pub m_Instructions: [u8; 0x10], // 0x0
        pub m_Registers: [u8; 0x10], // 0x10
        pub m_InstructionDebugInfos: [u8; 0x10], // 0x20
        pub m_nTempVarBank: [u8; 0x30], // 0x30
    }
    #[repr(C)]
    pub struct CStanceScaleUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub m_hParam: [u8; 0x8], // 0x70
    }
    #[repr(C)]
    pub struct CPulseBreakpointLocation {
        pub m_NodeID: [u8; 0x8], // 0x0
        pub m_SequencePoint: [u8; 0x10], // 0x8
        pub m_PortName: [u8; 0x10], // 0x18
        pub m_bDeferBreak: [u8; 0x8], // 0x28
    }
    #[repr(C)]
    pub struct PulseRuntimeInvokeIndex_t {
        pub m_Value: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CNmBoneMaskBlendNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nSourceMaskNodeIdx: [u8; 0x2], // 0x10
        pub m_nTargetMaskNodeIdx: [u8; 0x2], // 0x12
        pub m_nBlendWeightValueNodeIdx: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct CNmIDEventNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nSourceStateNodeIdx: [u8; 0x4], // 0x10
        pub m_eventConditionRules: [u8; 0x4], // 0x14
        pub m_defaultValue: [u8; 0x8], // 0x18
    }
    #[repr(C)]
    pub struct HitReactFixedSettings_t {
        pub m_nWeightListIndex: [u8; 0x4], // 0x0
        pub m_nEffectedBoneCount: [u8; 0x4], // 0x4
        pub m_flMaxImpactForce: [u8; 0x4], // 0x8
        pub m_flMinImpactForce: [u8; 0x4], // 0xC
        pub m_flWhipImpactScale: [u8; 0x4], // 0x10
        pub m_flCounterRotationScale: [u8; 0x4], // 0x14
        pub m_flDistanceFadeScale: [u8; 0x4], // 0x18
        pub m_flPropagationScale: [u8; 0x4], // 0x1C
        pub m_flWhipDelay: [u8; 0x4], // 0x20
        pub m_flSpringStrength: [u8; 0x4], // 0x24
        pub m_flWhipSpringStrength: [u8; 0x4], // 0x28
        pub m_flMaxAngleRadians: [u8; 0x4], // 0x2C
        pub m_nHipBoneIndex: [u8; 0x4], // 0x30
        pub m_flHipBoneTranslationScale: [u8; 0x4], // 0x34
        pub m_flHipDipSpringStrength: [u8; 0x4], // 0x38
        pub m_flHipDipImpactScale: [u8; 0x4], // 0x3C
        pub m_flHipDipDelay: [u8; 0x4], // 0x40
    }
    #[repr(C)]
    pub struct CNmPoseNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
    }
    #[repr(C)]
    pub struct CAnimTagBase {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_name: [u8; 0x8], // 0x18
        pub m_sComment: [u8; 0x8], // 0x20
        pub m_group: [u8; 0x8], // 0x28
        pub m_tagID: [u8; 0x18], // 0x30
        pub m_bIsReferenced: [u8; 0x8], // 0x48
    }
    #[repr(C)]
    pub struct CPerParticleVecInput {
        pub pad_0: [u8; 0x6D8], // 0x0
    }
    #[repr(C)]
    pub struct CMotionGraph {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_paramSpans: [u8; 0x18], // 0x10
        pub m_tags: [u8; 0x18], // 0x28
        pub m_pRootNode: [u8; 0x8], // 0x40
        pub m_nParameterCount: [u8; 0x4], // 0x48
        pub m_nConfigStartIndex: [u8; 0x4], // 0x4C
        pub m_nConfigCount: [u8; 0x4], // 0x50
        pub m_bLoop: [u8; 0x4], // 0x54
    }
    #[repr(C)]
    pub struct CNmVectorInfoNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nInputValueNodeIdx: [u8; 0x2], // 0x10
        pub m_desiredInfo: [u8; 0x6], // 0x12
    }
    #[repr(C)]
    pub struct AnimationSnapshot_t {
        pub pad_0: [u8; 0x110], // 0x0
        pub m_nEntIndex: [u8; 0x8], // 0x110
        pub m_modelName: [u8; 0x8], // 0x118
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
        pub m_flFadeInTime: [u8; 0x4], // 0x0
        pub m_flFadeOutTime: [u8; 0x4], // 0x4
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
        pub m_nChildNodeIdx: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CAnimGraphDebugReplay {
        pub pad_0: [u8; 0x40], // 0x0
        pub m_animGraphFileName: [u8; 0x8], // 0x40
        pub m_frameList: [u8; 0x18], // 0x48
        pub m_startIndex: [u8; 0x4], // 0x60
        pub m_writeIndex: [u8; 0x4], // 0x64
        pub m_frameCount: [u8; 0x8], // 0x68
    }
    #[repr(C)]
    pub struct CVectorAnimParameter {
        pub pad_0: [u8; 0x80], // 0x0
        pub m_defaultValue: [u8; 0xC], // 0x80
        pub m_bInterpolate: [u8; 0x4], // 0x8C
        pub m_vectorType: [u8; 0x8], // 0x90
    }
    #[repr(C)]
    pub struct CNmCachedPoseReadTask {
        pub pad_0: [u8; 0x80], // 0x0
    }
    #[repr(C)]
    pub struct CNmStateMachineNode__StateDefinition_t {
        pub m_nStateNodeIdx: [u8; 0x2], // 0x0
        pub m_nEntryConditionNodeIdx: [u8; 0x6], // 0x2
        pub m_transitionDefinitions: [u8; 0x30], // 0x8
    }
    #[repr(C)]
    pub struct CStanceOverrideUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub m_footStanceInfo: [u8; 0x18], // 0x70
        pub m_pStanceSourceNode: [u8; 0x10], // 0x88
        pub m_hParameter: [u8; 0x4], // 0x98
        pub m_eMode: [u8; 0x4], // 0x9C
    }
    #[repr(C)]
    pub struct CNmGraphDefinition__ExternalPoseSlot_t {
        pub m_nNodeIdx: [u8; 0x8], // 0x0
        pub m_slotID: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct PhysShapeMarkup_t {
        pub m_nBodyInAggregate: [u8; 0x4], // 0x0
        pub m_nShapeInBody: [u8; 0x4], // 0x4
        pub m_sHitGroup: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct CBlend2DInstanceData {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_dampedValue: [u8; 0x3C], // 0x8
        pub m_flCycle: [u8; 0x4], // 0x44
        pub m_flPrevCycle: [u8; 0x58], // 0x48
    }
    #[repr(C)]
    pub struct LookAtBone_t {
        pub m_index: [u8; 0x4], // 0x0
        pub m_weight: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct CDirectPlaybackInstanceData {
        pub m_vTargetPosition: [u8; 0xC], // 0x0
        pub m_flTargetFacing: [u8; 0x4], // 0xC
        pub m_flInterpEndTime: [u8; 0x4], // 0x10
        pub m_weights: [u8; 0x10], // 0x14
        pub m_sequences: [u8; 0xE0], // 0x24
        pub m_currentSequenceIndex: [u8; 0x4], // 0x104
        pub m_currentSequenceData: [u8; 0x10], // 0x108
        pub m_flFadeInTime: [u8; 0x4], // 0x118
        pub m_flFadeOutTime: [u8; 0x4], // 0x11C
        pub m_flForcedCycle: [u8; 0x10], // 0x120
        pub m_bResetPending: [u8; 0x8], // 0x130
        pub m_SequenceCycleZeroTime: [u8; 0x10], // 0x138
    }
    #[repr(C)]
    pub struct CNmTransitionNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nTargetStateNodeIdx: [u8; 0x2], // 0x10
        pub m_nDurationOverrideNodeIdx: [u8; 0x2], // 0x12
        pub m_timeOffsetOverrideNodeIdx: [u8; 0x2], // 0x14
        pub m_startBoneMaskNodeIdx: [u8; 0x2], // 0x16
        pub m_flDuration: [u8; 0x4], // 0x18
        pub m_boneMaskBlendInTimePercentage: [u8; 0x4], // 0x1C
        pub m_flTimeOffset: [u8; 0x4], // 0x20
        pub m_transitionOptions: [u8; 0x4], // 0x24
        pub m_targetSyncIDNodeIdx: [u8; 0x2], // 0x28
        pub m_blendWeightEasing: [u8; 0x1], // 0x2A
        pub m_rootMotionBlend: [u8; 0x5], // 0x2B
    }
    #[repr(C)]
    pub struct PulseRuntimeRegisterIndex_t {
        pub m_Value: [u8; 0x2], // 0x0
    }
    #[repr(C)]
    pub struct CNmFloatEaseNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_flEaseTime: [u8; 0x4], // 0x10
        pub m_flStartValue: [u8; 0x4], // 0x14
        pub m_nInputValueNodeIdx: [u8; 0x2], // 0x18
        pub m_easingOp: [u8; 0x1], // 0x1A
        pub m_bUseStartValue: [u8; 0x5], // 0x1B
    }
    #[repr(C)]
    pub struct CAnimationGraphInstance {
        pub pad_0: [u8; 0x329], // 0x0
        pub m_bTagDispatchDirty: [u8; 0x17], // 0x329
    }
    #[repr(C)]
    pub struct CAnimEncodeDifference {
        pub m_boneArray: [u8; 0x18], // 0x0
        pub m_morphArray: [u8; 0x18], // 0x18
        pub m_userArray: [u8; 0x18], // 0x30
        pub m_bHasRotationBitArray: [u8; 0x18], // 0x48
        pub m_bHasMovementBitArray: [u8; 0x18], // 0x60
        pub m_bHasMorphBitArray: [u8; 0x18], // 0x78
        pub m_bHasUserBitArray: [u8; 0x18], // 0x90
    }
    #[repr(C)]
    pub struct CRootUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
    }
    #[repr(C)]
    pub struct CNmTargetOffsetNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nInputValueNodeIdx: [u8; 0x2], // 0x10
        pub m_bIsBoneSpaceOffset: [u8; 0xE], // 0x12
        pub m_rotationOffset: [u8; 0x10], // 0x20
        pub m_translationOffset: [u8; 0x10], // 0x30
    }
    #[repr(C)]
    pub struct MotionMatchingInstanceData {
        pub pad_0: [u8; 0x2C], // 0x0
        pub m_currentSelection: [u8; 0x58], // 0x2C
        pub m_previousSelection: [u8; 0x9C], // 0x84
    }
    #[repr(C)]
    pub struct CMotionGraphUpdateNode {
        pub pad_0: [u8; 0x58], // 0x0
        pub m_pMotionGraph: [u8; 0x10], // 0x58
    }
    #[repr(C)]
    pub struct CNmFloatAngleMathNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nInputValueNodeIdx: [u8; 0x2], // 0x10
        pub m_operation: [u8; 0x6], // 0x12
    }
    #[repr(C)]
    pub struct PulseCursorID_t {
        pub m_Value: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CAnimParamHandle {
        pub m_type: [u8; 0x1], // 0x0
        pub m_index: [u8; 0x1], // 0x1
    }
    #[repr(C)]
    pub struct WeightList {
        pub m_name: [u8; 0x8], // 0x0
        pub m_weights: [u8; 0x18], // 0x8
    }
    #[repr(C)]
    pub struct MotionIndex {
        pub m_nGroup: [u8; 0x2], // 0x0
        pub m_nMotion: [u8; 0x2], // 0x2
    }
    #[repr(C)]
    pub struct FollowAttachmentSettings_t {
        pub m_attachment: [u8; 0x80], // 0x0
        pub m_boneIndex: [u8; 0x4], // 0x80
        pub m_attachmentHandle: [u8; 0x1], // 0x84
        pub m_bMatchTranslation: [u8; 0x1], // 0x85
        pub m_bMatchRotation: [u8; 0xA], // 0x86
    }
    #[repr(C)]
    pub struct CNmReferencedGraphNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nReferencedGraphIdx: [u8; 0x2], // 0x10
        pub m_nFallbackNodeIdx: [u8; 0x6], // 0x12
    }
    #[repr(C)]
    pub struct AnimNodeID {
        pub m_id: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CNmClipSelectorNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_optionNodeIndices: [u8; 0x18], // 0x10
        pub m_conditionNodeIndices: [u8; 0x18], // 0x28
    }
    #[repr(C)]
    pub struct CLookComponentUpdater {
        pub pad_0: [u8; 0x34], // 0x0
        pub m_hLookHeading: [u8; 0x2], // 0x34
        pub m_hLookHeadingNormalized: [u8; 0x2], // 0x36
        pub m_hLookHeadingVelocity: [u8; 0x2], // 0x38
        pub m_hLookPitch: [u8; 0x2], // 0x3A
        pub m_hLookDistance: [u8; 0x2], // 0x3C
        pub m_hLookDirection: [u8; 0x2], // 0x3E
        pub m_hLookTarget: [u8; 0x2], // 0x40
        pub m_hLookTargetWorldSpace: [u8; 0x2], // 0x42
        pub m_bNetworkLookTarget: [u8; 0x4], // 0x44
    }
    #[repr(C)]
    pub struct CNmIsExternalPoseSetNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nExternalPoseNodeIdx: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CAnimGraphNetworkSettings {
        pub pad_0: [u8; 0x20], // 0x0
        pub m_bNetworkingEnabled: [u8; 0x8], // 0x20
    }
    #[repr(C)]
    pub struct CSingleFrameUpdateNode {
        pub pad_0: [u8; 0x58], // 0x0
        pub m_actions: [u8; 0x18], // 0x58
        pub m_hPoseCacheHandle: [u8; 0x4], // 0x70
        pub m_hSequence: [u8; 0x4], // 0x74
        pub m_flCycle: [u8; 0x8], // 0x78
    }
    #[repr(C)]
    pub struct CNmChainLookatNode__CDefinition {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_endEffectorBoneID: [u8; 0x8], // 0x18
        pub m_endEffectorForwardAxis: [u8; 0xC], // 0x20
        pub m_endEffectorOffset: [u8; 0xC], // 0x2C
        pub m_nLookatTargetNodeIdx: [u8; 0x2], // 0x38
        pub m_nEnabledNodeIdx: [u8; 0x2], // 0x3A
        pub m_flBlendTimeSeconds: [u8; 0x4], // 0x3C
        pub m_chainWeights: [u8; 0x30], // 0x40
        pub m_nChainLength: [u8; 0x1], // 0x70
        pub m_bIsTargetInWorldSpace: [u8; 0x7], // 0x71
    }
    #[repr(C)]
    pub struct CNmFollowBoneNode__CDefinition {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_bone: [u8; 0x8], // 0x18
        pub m_followTargetBone: [u8; 0x8], // 0x20
        pub m_nEnabledNodeIdx: [u8; 0x2], // 0x28
        pub m_mode: [u8; 0x6], // 0x2A
    }
    #[repr(C)]
    pub struct CBlockSelectionMetricEvaluator {
        pub pad_0: [u8; 0x50], // 0x0
    }
    #[repr(C)]
    pub struct MovementData {
        pub m_goalWayPointPos: [u8; 0xC], // 0x0
        pub m_vMoveDir: [u8; 0x14], // 0xC
        pub m_vAcceleration: [u8; 0x14], // 0x20
        pub m_flCurrentMoveSpeed: [u8; 0xC], // 0x34
        pub m_flTargetMoveSpeed: [u8; 0xC], // 0x40
        pub m_flGoalDistance: [u8; 0xC], // 0x4C
        pub m_flBoundaryRadius: [u8; 0xC], // 0x58
        pub m_bGoalChanged: [u8; 0x4], // 0x64
        pub m_bHasPath: [u8; 0xC], // 0x68
        pub m_flFacingHeading: [u8; 0xC], // 0x74
        pub m_vManualFacingDirection: [u8; 0xC], // 0x80
        pub m_vManualFacingTarget: [u8; 0xC], // 0x8C
        pub m_nFacingMode: [u8; 0xC], // 0x98
        pub m_bForceFacing: [u8; 0xC], // 0xA4
        pub m_nActiveMotorIndex: [u8; 0xC], // 0xB0
        pub m_bOnGround: [u8; 0xC], // 0xBC
        pub m_vFacingPosition: [u8; 0x14], // 0xC8
        pub m_vPrevFacingPosition: [u8; 0xC], // 0xDC
    }
    #[repr(C)]
    pub struct CRemapValueComponentUpdater {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_items: [u8; 0x18], // 0x30
    }
    #[repr(C)]
    pub struct CModelConfigList {
        pub m_bHideMaterialGroupInTools: [u8; 0x1], // 0x0
        pub m_bHideRenderColorInTools: [u8; 0x7], // 0x1
        pub m_Configs: [u8; 0x18], // 0x8
    }
    #[repr(C)]
    pub struct CSeqAutoLayerFlag {
        pub m_bPost: [u8; 0x1], // 0x0
        pub m_bSpline: [u8; 0x1], // 0x1
        pub m_bXFade: [u8; 0x1], // 0x2
        pub m_bNoBlend: [u8; 0x1], // 0x3
        pub m_bLocal: [u8; 0x1], // 0x4
        pub m_bPose: [u8; 0x1], // 0x5
        pub m_bFetchFrame: [u8; 0x1], // 0x6
        pub m_bSubtract: [u8; 0x1], // 0x7
    }
    #[repr(C)]
    pub struct AnimStateID {
        pub m_id: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CNmIDEventConditionNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nSourceStateNodeIdx: [u8; 0x4], // 0x10
        pub m_eventConditionRules: [u8; 0x4], // 0x14
        pub m_eventIDs: [u8; 0x40], // 0x18
    }
    #[repr(C)]
    pub struct ModelBoneFlexDriver_t {
        pub m_boneName: [u8; 0x8], // 0x0
        pub m_boneNameToken: [u8; 0x8], // 0x8
        pub m_controls: [u8; 0x18], // 0x10
    }
    #[repr(C)]
    pub struct CMorphData {
        pub m_name: [u8; 0x8], // 0x0
        pub m_morphRectDatas: [u8; 0x18], // 0x8
    }
    #[repr(C)]
    pub struct CFootPinningUpdateNode {
        pub pad_0: [u8; 0x78], // 0x0
        pub m_poseOpFixedData: [u8; 0x30], // 0x78
        pub m_eTimingSource: [u8; 0x8], // 0xA8
        pub m_params: [u8; 0x18], // 0xB0
        pub m_bResetChild: [u8; 0x8], // 0xC8
    }
    #[repr(C)]
    pub struct CSeqPoseSetting {
        pub m_sPoseParameter: [u8; 0x10], // 0x0
        pub m_sAttachment: [u8; 0x10], // 0x10
        pub m_sReferenceSequence: [u8; 0x10], // 0x20
        pub m_flValue: [u8; 0x4], // 0x30
        pub m_bX: [u8; 0x1], // 0x34
        pub m_bY: [u8; 0x1], // 0x35
        pub m_bZ: [u8; 0x2], // 0x36
        pub m_eType: [u8; 0x8], // 0x38
    }
    #[repr(C)]
    pub struct PulseGraphExecutionHistoryCursorDesc_t {
        pub vecAncestorCursorIDs: [u8; 0x18], // 0x0
        pub nSpawnNodeID: [u8; 0x4], // 0x18
        pub nRetiredAtNodeID: [u8; 0x4], // 0x1C
        pub flLastReferenced: [u8; 0x4], // 0x20
        pub nLastValidEntryIdx: [u8; 0x4], // 0x24
        pub bWasAnObservableComputation: [u8; 0x8], // 0x28
    }
    #[repr(C)]
    pub struct CNmVirtualParameterFloatNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nChildNodeIdx: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CAttachment {
        pub m_name: [u8; 0x8], // 0x0
        pub m_influenceNames: [u8; 0x18], // 0x8
        pub m_vInfluenceRotations: [u8; 0x30], // 0x20
        pub m_vInfluenceOffsets: [u8; 0x24], // 0x50
        pub m_influenceWeights: [u8; 0xC], // 0x74
        pub m_bInfluenceRootTransform: [u8; 0x3], // 0x80
        pub m_nInfluences: [u8; 0x1], // 0x83
        pub m_bIgnoreRotation: [u8; 0xC], // 0x84
    }
    #[repr(C)]
    pub struct CSequenceUpdateNodeBase {
        pub pad_0: [u8; 0x6C], // 0x0
        pub m_playbackSpeed: [u8; 0x4], // 0x6C
        pub m_bLoop: [u8; 0x8], // 0x70
    }
    #[repr(C)]
    pub struct CDrawCullingData {
        pub m_ConeAxis: [u8; 0x3], // 0x0
        pub m_ConeCutoff: [u8; 0x1], // 0x3
    }
    #[repr(C)]
    pub struct VPhysXJoint_t {
        pub m_nType: [u8; 0x2], // 0x0
        pub m_nBody1: [u8; 0x2], // 0x2
        pub m_nBody2: [u8; 0x2], // 0x4
        pub m_nFlags: [u8; 0xA], // 0x6
        pub m_Frame1: [u8; 0x20], // 0x10
        pub m_Frame2: [u8; 0x20], // 0x30
        pub m_bEnableCollision: [u8; 0x1], // 0x50
        pub m_bIsLinearConstraintDisabled: [u8; 0x1], // 0x51
        pub m_bIsAngularConstraintDisabled: [u8; 0x1], // 0x52
        pub m_bEnableLinearLimit: [u8; 0x1], // 0x53
        pub m_LinearLimit: [u8; 0x8], // 0x54
        pub m_bEnableLinearMotor: [u8; 0x4], // 0x5C
        pub m_vLinearTargetVelocity: [u8; 0xC], // 0x60
        pub m_flMaxForce: [u8; 0x4], // 0x6C
        pub m_bEnableSwingLimit: [u8; 0x4], // 0x70
        pub m_SwingLimit: [u8; 0x8], // 0x74
        pub m_bEnableTwistLimit: [u8; 0x4], // 0x7C
        pub m_TwistLimit: [u8; 0x8], // 0x80
        pub m_bEnableAngularMotor: [u8; 0x4], // 0x88
        pub m_vAngularTargetVelocity: [u8; 0xC], // 0x8C
        pub m_flMaxTorque: [u8; 0x4], // 0x98
        pub m_flLinearFrequency: [u8; 0x4], // 0x9C
        pub m_flLinearDampingRatio: [u8; 0x4], // 0xA0
        pub m_flAngularFrequency: [u8; 0x4], // 0xA4
        pub m_flAngularDampingRatio: [u8; 0x4], // 0xA8
        pub m_flFriction: [u8; 0x4], // 0xAC
        pub m_flElasticity: [u8; 0x4], // 0xB0
        pub m_flElasticDamping: [u8; 0x4], // 0xB4
        pub m_flPlasticity: [u8; 0x8], // 0xB8
        pub m_Tag: [u8; 0x10], // 0xC0
    }
    #[repr(C)]
    pub struct CStateNodeTransitionData {
        pub m_curve: [u8; 0x8], // 0x0
        pub m_blendDuration: [u8; 0x8], // 0x8
        pub m_resetCycleValue: [u8; 0xC], // 0x10
    }
    #[repr(C)]
    pub struct CTimeRemainingMetricEvaluator {
        pub pad_0: [u8; 0x50], // 0x0
        pub m_bMatchByTimeRemaining: [u8; 0x4], // 0x50
        pub m_flMaxTimeRemaining: [u8; 0x4], // 0x54
        pub m_bFilterByTimeRemaining: [u8; 0x4], // 0x58
        pub m_flMinTimeRemaining: [u8; 0x4], // 0x5C
    }
    #[repr(C)]
    pub struct CParticleInput {
        pub pad_0: [u8; 0x10], // 0x0
    }
    #[repr(C)]
    pub struct PulseRuntimeTempVarIndex_t {
        pub m_Value: [u8; 0x2], // 0x0
    }
    #[repr(C)]
    pub struct CModelConfigElement {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_ElementName: [u8; 0x8], // 0x8
        pub m_NestedElements: [u8; 0x38], // 0x10
    }
    #[repr(C)]
    pub struct CNmControlParameterVectorNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
    }
    #[repr(C)]
    pub struct FootFixedSettings {
        pub m_traceSettings: [u8; 0x10], // 0x0
        pub m_vFootBaseBindPosePositionMS: [u8; 0x10], // 0x10
        pub m_flFootBaseLength: [u8; 0x4], // 0x20
        pub m_flMaxRotationLeft: [u8; 0x4], // 0x24
        pub m_flMaxRotationRight: [u8; 0x4], // 0x28
        pub m_footstepLandedTagIndex: [u8; 0x4], // 0x2C
        pub m_bEnableTracing: [u8; 0x4], // 0x30
        pub m_flTraceAngleBlend: [u8; 0x4], // 0x34
        pub m_nDisableTagIndex: [u8; 0x4], // 0x38
        pub m_nFootIndex: [u8; 0x4], // 0x3C
    }
    #[repr(C)]
    pub struct CNmBoneMaskSwitchNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nSwitchValueNodeIdx: [u8; 0x2], // 0x10
        pub m_nTrueValueNodeIdx: [u8; 0x2], // 0x12
        pub m_nFalseValueNodeIdx: [u8; 0x4], // 0x14
        pub m_flBlendTimeSeconds: [u8; 0x4], // 0x18
        pub m_bSwitchDynamically: [u8; 0x4], // 0x1C
    }
    #[repr(C)]
    pub struct CModelConfig {
        pub m_ConfigName: [u8; 0x8], // 0x0
        pub m_Elements: [u8; 0x18], // 0x8
        pub m_bTopLevel: [u8; 0x1], // 0x20
        pub m_bActiveInEditorByDefault: [u8; 0x7], // 0x21
    }
    #[repr(C)]
    pub struct AnimComponentID {
        pub m_id: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct VPhysXAggregateData_t {
        pub m_nFlags: [u8; 0x2], // 0x0
        pub m_nRefCounter: [u8; 0x2], // 0x2
        pub m_bCompoundsPacked: [u8; 0x4], // 0x4
        pub m_bonesHash: [u8; 0x18], // 0x8
        pub m_boneNames: [u8; 0x18], // 0x20
        pub m_indexNames: [u8; 0x18], // 0x38
        pub m_indexHash: [u8; 0x18], // 0x50
        pub m_bindPose: [u8; 0x18], // 0x68
        pub m_parts: [u8; 0x18], // 0x80
        pub m_shapeMarkups: [u8; 0x18], // 0x98
        pub m_constraints2: [u8; 0x18], // 0xB0
        pub m_joints: [u8; 0x18], // 0xC8
        pub m_pFeModel: [u8; 0x8], // 0xE0
        pub m_boneParents: [u8; 0x18], // 0xE8
        pub m_surfacePropertyHashes: [u8; 0x18], // 0x100
        pub m_collisionAttributes: [u8; 0x18], // 0x118
        pub m_debugPartNames: [u8; 0x18], // 0x130
        pub m_embeddedKeyvalues: [u8; 0x8], // 0x148
    }
    #[repr(C)]
    pub struct CNmGraphDefinition {
        pub m_variationID: [u8; 0x8], // 0x0
        pub m_skeleton: [u8; 0x8], // 0x8
        pub m_supportedSecondarySkeletons: [u8; 0x18], // 0x10
        pub m_pUserData: [u8; 0x8], // 0x28
        pub m_persistentNodeIndices: [u8; 0x18], // 0x30
        pub m_nRootNodeIdx: [u8; 0x8], // 0x48
        pub m_controlParameterIDs: [u8; 0x18], // 0x50
        pub m_virtualParameterIDs: [u8; 0x18], // 0x68
        pub m_virtualParameterNodeIndices: [u8; 0x18], // 0x80
        pub m_referencedGraphSlots: [u8; 0x18], // 0x98
        pub m_externalGraphSlots: [u8; 0x18], // 0xB0
        pub m_externalPoseSlots: [u8; 0x88], // 0xC8
        pub m_nodePaths: [u8; 0x18], // 0x150
        pub m_resources: [u8; 0x50], // 0x168
    }
    #[repr(C)]
    pub struct CNmSelectorNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_optionNodeIndices: [u8; 0x18], // 0x10
        pub m_conditionNodeIndices: [u8; 0x18], // 0x28
    }
    #[repr(C)]
    pub struct CAnimDemoCaptureSettings {
        pub m_vecErrorRangeSplineRotation: [u8; 0x8], // 0x0
        pub m_vecErrorRangeSplineTranslation: [u8; 0x8], // 0x8
        pub m_vecErrorRangeSplineScale: [u8; 0x8], // 0x10
        pub m_flIkRotation_MaxSplineError: [u8; 0x4], // 0x18
        pub m_flIkTranslation_MaxSplineError: [u8; 0x4], // 0x1C
        pub m_vecErrorRangeQuantizationRotation: [u8; 0x8], // 0x20
        pub m_vecErrorRangeQuantizationTranslation: [u8; 0x8], // 0x28
        pub m_vecErrorRangeQuantizationScale: [u8; 0x8], // 0x30
        pub m_flIkRotation_MaxQuantizationError: [u8; 0x4], // 0x38
        pub m_flIkTranslation_MaxQuantizationError: [u8; 0x4], // 0x3C
        pub m_baseSequence: [u8; 0x8], // 0x40
        pub m_nBaseSequenceFrame: [u8; 0x4], // 0x48
        pub m_boneSelectionMode: [u8; 0x4], // 0x4C
        pub m_bones: [u8; 0x18], // 0x50
        pub m_ikChains: [u8; 0x18], // 0x68
    }
    #[repr(C)]
    pub struct IKDemoCaptureSettings_t {
        pub m_parentBoneName: [u8; 0x8], // 0x0
        pub m_eMode: [u8; 0x8], // 0x8
        pub m_ikChainName: [u8; 0x8], // 0x10
        pub m_oneBoneStart: [u8; 0x8], // 0x18
        pub m_oneBoneEnd: [u8; 0x8], // 0x20
    }
    #[repr(C)]
    pub struct CSeqMultiFetchFlag {
        pub m_bRealtime: [u8; 0x1], // 0x0
        pub m_bCylepose: [u8; 0x1], // 0x1
        pub m_b0D: [u8; 0x1], // 0x2
        pub m_b1D: [u8; 0x1], // 0x3
        pub m_b2D: [u8; 0x1], // 0x4
        pub m_b2D_TRI: [u8; 0x1], // 0x5
    }
    #[repr(C)]
    pub struct PulseRegisterMap_t {
        pub m_Inparams: [u8; 0x10], // 0x0
        pub m_InparamsWhichCanBeMoved: [u8; 0x10], // 0x10
        pub m_Outparams: [u8; 0x10], // 0x20
    }
    #[repr(C)]
    pub struct VPhysXRange_t {
        pub m_flMin: [u8; 0x4], // 0x0
        pub m_flMax: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct CStopAtGoalUpdateNode {
        pub pad_0: [u8; 0x74], // 0x0
        pub m_flOuterRadius: [u8; 0x4], // 0x74
        pub m_flInnerRadius: [u8; 0x4], // 0x78
        pub m_flMaxScale: [u8; 0x4], // 0x7C
        pub m_flMinScale: [u8; 0x8], // 0x80
        pub m_damping: [u8; 0x18], // 0x88
    }
    #[repr(C)]
    pub struct CNmIDEventPercentageThroughNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nSourceStateNodeIdx: [u8; 0x4], // 0x10
        pub m_eventConditionRules: [u8; 0x4], // 0x14
        pub m_eventID: [u8; 0x8], // 0x18
    }
    #[repr(C)]
    pub struct CAnimBoneDifference {
        pub m_name: [u8; 0x10], // 0x0
        pub m_parent: [u8; 0x10], // 0x10
        pub m_posError: [u8; 0xC], // 0x20
        pub m_bHasRotation: [u8; 0x1], // 0x2C
        pub m_bHasMovement: [u8; 0x3], // 0x2D
    }
    #[repr(C)]
    pub struct CNmCachedBoolNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nInputValueNodeIdx: [u8; 0x4], // 0x10
        pub m_mode: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct CAnimCycle {
        pub pad_0: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CActionComponentUpdater {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_actions: [u8; 0x18], // 0x30
    }
    #[repr(C)]
    pub struct CDirectionalBlendInstanceData {
        pub m_dampedValue: [u8; 0x14], // 0x0
        pub m_flCycle: [u8; 0x4], // 0x14
        pub m_flPrevCycle: [u8; 0x4], // 0x18
        pub m_flPlaybackRate: [u8; 0xC], // 0x1C
        pub m_flCycleZeroTime: [u8; 0xC], // 0x28
        pub m_resetCycleValue: [u8; 0xC], // 0x34
        pub m_resetCount: [u8; 0x10], // 0x40
    }
    #[repr(C)]
    pub struct CDampedPathAnimMotorUpdater {
        pub pad_0: [u8; 0x2C], // 0x0
        pub m_flAnticipationTime: [u8; 0x4], // 0x2C
        pub m_flMinSpeedScale: [u8; 0x4], // 0x30
        pub m_hAnticipationPosParam: [u8; 0x2], // 0x34
        pub m_hAnticipationHeadingParam: [u8; 0x2], // 0x36
        pub m_flSpringConstant: [u8; 0x4], // 0x38
        pub m_flMinSpringTension: [u8; 0x4], // 0x3C
        pub m_flMaxSpringTension: [u8; 0x8], // 0x40
    }
    #[repr(C)]
    pub struct CNmCachedFloatNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nInputValueNodeIdx: [u8; 0x4], // 0x10
        pub m_mode: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct CNmFloatSwitchNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nSwitchValueNodeIdx: [u8; 0x2], // 0x10
        pub m_nTrueValueNodeIdx: [u8; 0x2], // 0x12
        pub m_nFalseValueNodeIdx: [u8; 0x4], // 0x14
        pub m_flFalseValue: [u8; 0x4], // 0x18
        pub m_flTrueValue: [u8; 0x4], // 0x1C
    }
    #[repr(C)]
    pub struct CModelConfigElement_SetMaterialGroupOnAttachedModels {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_MaterialGroupName: [u8; 0x8], // 0x48
    }
    #[repr(C)]
    pub struct CNmFloatChannelData {
        pub m_skeleton: [u8; 0x8], // 0x0
        pub m_setID: [u8; 0x8], // 0x8
        pub m_channelSettings: [u8; 0x18], // 0x10
        pub m_compressedData: [u8; 0x18], // 0x28
        pub m_compressedOffsets: [u8; 0x18], // 0x40
    }
    #[repr(C)]
    pub struct CNmEntityAttributeEventBase {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_target: [u8; 0x8], // 0x18
        pub m_attributeName: [u8; 0x18], // 0x20
    }
    #[repr(C)]
    pub struct CNmVirtualParameterBoneMaskNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nChildNodeIdx: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct SequenceData {
        pub m_hSequence: [u8; 0x4], // 0x0
        pub m_cycle: [u8; 0x34], // 0x4
    }
    #[repr(C)]
    pub struct CPathHelperUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub m_flStoppingRadius: [u8; 0x4], // 0x70
        pub m_flStoppingSpeedScale: [u8; 0x4], // 0x74
    }
    #[repr(C)]
    pub struct MaterialGroup_t {
        pub m_name: [u8; 0x8], // 0x0
        pub m_materials: [u8; 0x18], // 0x8
    }
    #[repr(C)]
    pub struct CMorphBundleData {
        pub m_flULeftSrc: [u8; 0x4], // 0x0
        pub m_flVTopSrc: [u8; 0x4], // 0x4
        pub m_offsets: [u8; 0x18], // 0x8
        pub m_ranges: [u8; 0x18], // 0x20
    }
    #[repr(C)]
    pub struct CModelConfigElement_UserPick {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_Choices: [u8; 0x18], // 0x48
    }
    #[repr(C)]
    pub struct CSolveIKTargetHandle_t {
        pub m_positionHandle: [u8; 0x2], // 0x0
        pub m_orientationHandle: [u8; 0x2], // 0x2
    }
    #[repr(C)]
    pub struct CFootAdjustmentUpdateNode {
        pub pad_0: [u8; 0x78], // 0x0
        pub m_clips: [u8; 0x18], // 0x78
        pub m_hBasePoseCacheHandle: [u8; 0x4], // 0x90
        pub m_facingTarget: [u8; 0x4], // 0x94
        pub m_flTurnTimeMin: [u8; 0x4], // 0x98
        pub m_flTurnTimeMax: [u8; 0x4], // 0x9C
        pub m_flStepHeightMax: [u8; 0x4], // 0xA0
        pub m_flStepHeightMaxAngle: [u8; 0x4], // 0xA4
        pub m_bResetChild: [u8; 0x1], // 0xA8
        pub m_bAnimationDriven: [u8; 0x7], // 0xA9
    }
    #[repr(C)]
    pub struct CChoreoUpdateNode {
        pub pad_0: [u8; 0x78], // 0x0
    }
    #[repr(C)]
    pub struct CAimConstraint {
        pub pad_0: [u8; 0x60], // 0x0
        pub m_qAimOffset: [u8; 0x10], // 0x60
        pub m_nUpType: [u8; 0x10], // 0x70
    }
    #[repr(C)]
    pub struct CMaterialDrawDescriptor__RigidMeshPart_t {
        pub m_nRigidBLASIndex: [u8; 0x2], // 0x0
        pub m_nBoneIndex: [u8; 0x2], // 0x2
        pub m_nStartIndexOffset: [u8; 0x4], // 0x4
        pub m_nPrimitiveCount: [u8; 0x4], // 0x8
    }
    #[repr(C)]
    pub struct CFootFallAnimTag {
        pub pad_0: [u8; 0x58], // 0x0
        pub m_foot: [u8; 0x8], // 0x58
    }
    #[repr(C)]
    pub struct CMaterialDrawDescriptor {
        pub m_flUvDensity: [u8; 0x4], // 0x0
        pub m_vTintColor: [u8; 0xC], // 0x4
        pub m_flAlpha: [u8; 0x8], // 0x10
        pub m_nNumMeshlets: [u8; 0x8], // 0x18
        pub m_nFirstMeshlet: [u8; 0x4], // 0x20
        pub m_nAppliedIndexOffset: [u8; 0x4], // 0x24
        pub m_nEmissivePrimitiveCount: [u8; 0x4], // 0x28
        pub m_nDepthVertexBufferIndex: [u8; 0x1], // 0x2C
        pub m_nMeshletPackedIVBIndex: [u8; 0x3], // 0x2D
        pub m_rigidMeshParts: [u8; 0x10], // 0x30
        pub m_rootBvhNodes: [u8; 0x10], // 0x40
        pub m_nPrimitiveType: [u8; 0x4], // 0x50
        pub m_nBaseVertex: [u8; 0x4], // 0x54
        pub m_nVertexCount: [u8; 0x4], // 0x58
        pub m_nStartIndex: [u8; 0x4], // 0x5C
        pub m_nIndexCount: [u8; 0x68], // 0x60
        pub m_indexBuffer: [u8; 0x20], // 0xC8
        pub m_meshletPackedIVB: [u8; 0x30], // 0xE8
        pub m_material: [u8; 0x8], // 0x118
    }
    #[repr(C)]
    pub struct CNmSkeleton {
        pub m_ID: [u8; 0x8], // 0x0
        pub m_boneIDs: [u8; 0x10], // 0x8
        pub m_parentIndices: [u8; 0x18], // 0x18
        pub m_parentSpaceReferencePose: [u8; 0x18], // 0x30
        pub m_modelSpaceReferencePose: [u8; 0x18], // 0x48
        pub m_numBonesToSampleAtLowLOD: [u8; 0x4], // 0x60
        pub m_bIsPropSkeleton: [u8; 0x24], // 0x64
        pub m_maskDefinitions: [u8; 0x20], // 0x88
        pub m_secondarySkeletons: [u8; 0x10], // 0xA8
        pub m_floatChannelSets: [u8; 0x10], // 0xB8
        pub m_contactConfigs: [u8; 0x18], // 0xC8
        pub m_gameplayRelevantBoneIndices: [u8; 0x18], // 0xE0
        pub m_nSpecialDependencyHash: [u8; 0x8], // 0xF8
    }
    #[repr(C)]
    pub struct CStepsRemainingMetricEvaluator {
        pub pad_0: [u8; 0x50], // 0x0
        pub m_footIndices: [u8; 0x18], // 0x50
        pub m_flMinStepsRemaining: [u8; 0x8], // 0x68
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
        pub m_type: [u8; 0x4], // 0x18
        pub m_flStiffness: [u8; 0x4], // 0x1C
        pub m_flSpeedIn: [u8; 0x4], // 0x20
        pub m_flSpeedOut: [u8; 0x4], // 0x24
        pub m_flLengthSeconds: [u8; 0x8], // 0x28
        pub m_vertexSetName: [u8; 0x8], // 0x30
        pub m_effectName: [u8; 0x8], // 0x38
    }
    #[repr(C)]
    pub struct CBodyGroupSetting {
        pub m_BodyGroupName: [u8; 0x8], // 0x0
        pub m_nBodyGroupOption: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct CVectorQuantizer {
        pub m_centroidVectors: [u8; 0x18], // 0x0
        pub m_nCentroids: [u8; 0x4], // 0x18
        pub m_nDimensions: [u8; 0x4], // 0x1C
    }
    #[repr(C)]
    pub struct ParticleNamedValueConfiguration_t {
        pub m_ConfigName: [u8; 0x8], // 0x0
        pub m_ConfigValue: [u8; 0x10], // 0x8
        pub m_BoundValuePath: [u8; 0x8], // 0x18
        pub m_iAttachType: [u8; 0x8], // 0x20
        pub m_strEntityScope: [u8; 0x8], // 0x28
        pub m_strAttachmentName: [u8; 0x8], // 0x30
    }
    #[repr(C)]
    pub struct CNmVectorCreateNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_inputVectorValueNodeIdx: [u8; 0x2], // 0x10
        pub m_inputValueXNodeIdx: [u8; 0x2], // 0x12
        pub m_inputValueYNodeIdx: [u8; 0x2], // 0x14
        pub m_inputValueZNodeIdx: [u8; 0x2], // 0x16
    }
    #[repr(C)]
    pub struct CParticleVecInput {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nType: [u8; 0x4], // 0x10
        pub m_vLiteralValue: [u8; 0xC], // 0x14
        pub m_LiteralColor: [u8; 0x8], // 0x20
        pub m_NamedValue: [u8; 0x40], // 0x28
        pub m_bFollowNamedValue: [u8; 0x4], // 0x68
        pub m_nVectorAttribute: [u8; 0x4], // 0x6C
        pub m_vVectorAttributeScale: [u8; 0xC], // 0x70
        pub m_nControlPoint: [u8; 0x4], // 0x7C
        pub m_nDeltaControlPoint: [u8; 0x4], // 0x80
        pub m_vCPValueScale: [u8; 0xC], // 0x84
        pub m_vCPRelativePosition: [u8; 0xC], // 0x90
        pub m_vCPRelativeDir: [u8; 0xC], // 0x9C
        pub m_FloatComponentX: [u8; 0x178], // 0xA8
        pub m_FloatComponentY: [u8; 0x178], // 0x220
        pub m_FloatComponentZ: [u8; 0x178], // 0x398
        pub m_FloatInterp: [u8; 0x178], // 0x510
        pub m_flInterpInput0: [u8; 0x4], // 0x688
        pub m_flInterpInput1: [u8; 0x4], // 0x68C
        pub m_vInterpOutput0: [u8; 0xC], // 0x690
        pub m_vInterpOutput1: [u8; 0xC], // 0x69C
        pub m_Gradient: [u8; 0x18], // 0x6A8
        pub m_vRandomMin: [u8; 0xC], // 0x6C0
        pub m_vRandomMax: [u8; 0xC], // 0x6CC
    }
    #[repr(C)]
    pub struct CNmStateNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nChildNodeIdx: [u8; 0x8], // 0x10
        pub m_entryEvents: [u8; 0x20], // 0x18
        pub m_executeEvents: [u8; 0x20], // 0x38
        pub m_exitEvents: [u8; 0x20], // 0x58
        pub m_timedRemainingEvents: [u8; 0x18], // 0x78
        pub m_timedElapsedEvents: [u8; 0x18], // 0x90
        pub m_nLayerWeightNodeIdx: [u8; 0x2], // 0xA8
        pub m_nLayerRootMotionWeightNodeIdx: [u8; 0x2], // 0xAA
        pub m_nLayerBoneMaskNodeIdx: [u8; 0x2], // 0xAC
        pub m_bIsOffState: [u8; 0x1], // 0xAE
        pub m_bUseActualElapsedTimeInStateForTimedEvents: [u8; 0x1], // 0xAF
    }
    #[repr(C)]
    pub struct CNmBoneMaskSelectorNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_defaultMaskNodeIdx: [u8; 0x2], // 0x10
        pub m_parameterValueNodeIdx: [u8; 0x2], // 0x12
        pub m_bSwitchDynamically: [u8; 0x4], // 0x14
        pub m_maskNodeIndices: [u8; 0x18], // 0x18
        pub m_parameterValues: [u8; 0x40], // 0x30
        pub m_flBlendTimeSeconds: [u8; 0x8], // 0x70
    }
    #[repr(C)]
    pub struct CNmVirtualParameterVectorNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nChildNodeIdx: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CFootCycleMetricEvaluator {
        pub pad_0: [u8; 0x50], // 0x0
        pub m_footIndices: [u8; 0x18], // 0x50
    }
    #[repr(C)]
    pub struct CNmConstIDNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_value: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CHitBox {
        pub m_name: [u8; 0x8], // 0x0
        pub m_sSurfaceProperty: [u8; 0x8], // 0x8
        pub m_sBoneName: [u8; 0x8], // 0x10
        pub m_vMinBounds: [u8; 0xC], // 0x18
        pub m_vMaxBounds: [u8; 0xC], // 0x24
        pub m_flShapeRadius: [u8; 0x4], // 0x30
        pub m_nBoneNameHash: [u8; 0x4], // 0x34
        pub m_nGroupId: [u8; 0x4], // 0x38
        pub m_nShapeType: [u8; 0x1], // 0x3C
        pub m_bTranslationOnly: [u8; 0x3], // 0x3D
        pub m_CRC: [u8; 0x4], // 0x40
        pub m_cRenderColor: [u8; 0x4], // 0x44
        pub m_nHitBoxIndex: [u8; 0x28], // 0x48
    }
    #[repr(C)]
    pub struct CNmParameterizedSelectorNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_optionNodeIndices: [u8; 0x18], // 0x10
        pub m_optionWeights: [u8; 0x10], // 0x28
        pub m_parameterNodeIdx: [u8; 0x2], // 0x38
        pub m_bIgnoreInvalidOptions: [u8; 0x1], // 0x3A
        pub m_bHasWeightsSet: [u8; 0x5], // 0x3B
    }
    #[repr(C)]
    pub struct ModelSkeletonData_t {
        pub m_boneName: [u8; 0x18], // 0x0
        pub m_nParent: [u8; 0x18], // 0x18
        pub m_boneSphere: [u8; 0x18], // 0x30
        pub m_nFlag: [u8; 0x18], // 0x48
        pub m_bonePosParent: [u8; 0x18], // 0x60
        pub m_boneRotParent: [u8; 0x18], // 0x78
        pub m_boneScaleParent: [u8; 0x18], // 0x90
    }
    #[repr(C)]
    pub struct CNmEvent {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_flStartTime: [u8; 0x4], // 0x8
        pub m_flDuration: [u8; 0x4], // 0xC
        pub m_syncID: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct NmCompressionSettings_t__QuantizationRange_t {
        pub m_flRangeStart: [u8; 0x4], // 0x0
        pub m_flRangeLength: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct CNmBlendTaskBase {
        pub pad_0: [u8; 0x100], // 0x0
    }
    #[repr(C)]
    pub struct TagSpan_t {
        pub m_tagIndex: [u8; 0x4], // 0x0
        pub m_startCycle: [u8; 0x4], // 0x4
        pub m_endCycle: [u8; 0x4], // 0x8
    }
    #[repr(C)]
    pub struct CNmConstTargetNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_value: [u8; 0x30], // 0x10
    }
    #[repr(C)]
    pub struct CRemapValueUpdateItem {
        pub m_hParamIn: [u8; 0x2], // 0x0
        pub m_hParamOut: [u8; 0x2], // 0x2
        pub m_flMinInputValue: [u8; 0x4], // 0x4
        pub m_flMaxInputValue: [u8; 0x4], // 0x8
        pub m_flMinOutputValue: [u8; 0x4], // 0xC
        pub m_flMaxOutputValue: [u8; 0x4], // 0x10
    }
    #[repr(C)]
    pub struct PermModelDataAnimatedMaterialAttribute_t {
        pub m_AttributeName: [u8; 0x8], // 0x0
        pub m_nNumChannels: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct CMotionDataSet {
        pub m_groups: [u8; 0x18], // 0x0
        pub m_nDimensionCount: [u8; 0x8], // 0x18
    }
    #[repr(C)]
    pub struct ParticleAttributeIndex_t {
        pub m_Value: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CProductQuantizer {
        pub m_subQuantizers: [u8; 0x18], // 0x0
        pub m_nDimensions: [u8; 0x8], // 0x18
    }
    #[repr(C)]
    pub struct CChoiceUpdateNode {
        pub pad_0: [u8; 0x60], // 0x0
        pub m_children: [u8; 0x18], // 0x60
        pub m_weights: [u8; 0x18], // 0x78
        pub m_blendTimes: [u8; 0x18], // 0x90
        pub m_choiceMethod: [u8; 0x4], // 0xA8
        pub m_choiceChangeMethod: [u8; 0x4], // 0xAC
        pub m_blendMethod: [u8; 0x4], // 0xB0
        pub m_blendTime: [u8; 0x4], // 0xB4
        pub m_bCrossFade: [u8; 0x1], // 0xB8
        pub m_bResetChosen: [u8; 0x1], // 0xB9
        pub m_bDontResetSameSelection: [u8; 0x6], // 0xBA
    }
    #[repr(C)]
    pub struct SkeletonAnimCapture_t__Bone_t {
        pub m_Name: [u8; 0x10], // 0x0
        pub m_BindPose: [u8; 0x20], // 0x10
        pub m_nParent: [u8; 0x10], // 0x30
    }
    #[repr(C)]
    pub struct CExpressionActionUpdater {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_hParam: [u8; 0x2], // 0x18
        pub m_eParamType: [u8; 0x2], // 0x1A
        pub m_hScript: [u8; 0x4], // 0x1C
    }
    #[repr(C)]
    pub struct CNmFloatMathNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nInputValueNodeIdxA: [u8; 0x2], // 0x10
        pub m_nInputValueNodeIdxB: [u8; 0x2], // 0x12
        pub m_bReturnAbsoluteResult: [u8; 0x1], // 0x14
        pub m_bReturnNegatedResult: [u8; 0x1], // 0x15
        pub m_operator: [u8; 0x2], // 0x16
        pub m_flValueB: [u8; 0x8], // 0x18
    }
    #[repr(C)]
    pub struct CAnimationGraphVisualizerLine {
        pub pad_0: [u8; 0x40], // 0x0
        pub m_vWsPositionStart: [u8; 0x10], // 0x40
        pub m_vWsPositionEnd: [u8; 0x10], // 0x50
        pub m_Color: [u8; 0x10], // 0x60
    }
    #[repr(C)]
    pub struct CCycleControlUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub m_valueSource: [u8; 0x4], // 0x70
        pub m_paramIndex: [u8; 0x2], // 0x74
        pub m_bLockWhenWaning: [u8; 0x2], // 0x76
    }
    #[repr(C)]
    pub struct CNmTargetInfoNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nInputValueNodeIdx: [u8; 0x4], // 0x10
        pub m_infoType: [u8; 0x4], // 0x14
        pub m_bIsWorldSpaceTarget: [u8; 0x8], // 0x18
    }
    #[repr(C)]
    pub struct CDampedValueComponentUpdater {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_items: [u8; 0x18], // 0x30
    }
    #[repr(C)]
    pub struct CBaseConstraint {
        pub pad_0: [u8; 0x20], // 0x0
        pub m_name: [u8; 0x8], // 0x20
        pub m_vUpVector: [u8; 0x10], // 0x28
        pub m_slaves: [u8; 0x10], // 0x38
        pub m_targets: [u8; 0x18], // 0x48
    }
    #[repr(C)]
    pub struct CNmControlParameterFloatNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
    }
    #[repr(C)]
    pub struct BlendItem_t {
        pub m_tags: [u8; 0x18], // 0x0
        pub m_pChild: [u8; 0x10], // 0x18
        pub m_hSequence: [u8; 0x4], // 0x28
        pub m_vPos: [u8; 0x8], // 0x2C
        pub m_flDuration: [u8; 0x4], // 0x34
        pub m_bUseCustomDuration: [u8; 0x8], // 0x38
    }
    #[repr(C)]
    pub struct DampedPathMotorInstanceData_t {
        pub m_vVelocity: [u8; 0xC], // 0x0
        pub m_vAcceleration: [u8; 0x18], // 0xC
        pub m_bStopping: [u8; 0x4], // 0x24
    }
    #[repr(C)]
    pub struct CNmIsExternalGraphSlotFilledNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nExternalGraphNodeIdx: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CNewParticleEffect {
        pub m_bDontRemove: [u8; 0x10], // 0x0
        pub m_pNext: [u8; 0x8], // 0x10
        pub m_pPrev: [u8; 0x8], // 0x18
        pub m_pParticles: [u8; 0x8], // 0x20
        pub m_pDebugName: [u8; 0x18], // 0x28
        pub m_vSortOrigin: [u8; 0xC], // 0x40
        pub m_flScale: [u8; 0x4], // 0x4C
        pub m_hOwner: [u8; 0x8], // 0x50
        pub m_pOwningParticleProperty: [u8; 0x18], // 0x58
        pub m_flFreezeTransitionStart: [u8; 0x4], // 0x70
        pub m_flFreezeTransitionDuration: [u8; 0x4], // 0x74
        pub m_flFreezeTransitionOverride: [u8; 0x4], // 0x78
        pub m_LastMin: [u8; 0xC], // 0x7C
        pub m_LastMax: [u8; 0xC], // 0x88
        pub m_nSplitScreenUser: [u8; 0x4], // 0x94
        pub m_vecAggregationCenter: [u8; 0x38], // 0x98
        pub m_RefCount: [u8; 0x8], // 0xD0
    }
    #[repr(C)]
    pub struct CNmClipNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nPlayInReverseValueNodeIdx: [u8; 0x2], // 0x10
        pub m_bSampleRootMotion: [u8; 0x1], // 0x12
        pub m_bAllowLooping: [u8; 0x1], // 0x13
        pub m_nDataSlotIdx: [u8; 0x2], // 0x14
        pub m_nResetTimeValueNodeIdx: [u8; 0x2], // 0x16
        pub m_graphEvents: [u8; 0x28], // 0x18
        pub m_flSpeedMultiplier: [u8; 0x4], // 0x40
        pub m_nStartSyncEventOffset: [u8; 0x4], // 0x44
    }
    #[repr(C)]
    pub struct CNmMaterialAttributeEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_target: [u8; 0x8], // 0x18
        pub m_attributeName: [u8; 0x8], // 0x20
        pub m_attributeNameToken: [u8; 0x8], // 0x28
        pub m_x: [u8; 0x40], // 0x30
        pub m_y: [u8; 0x40], // 0x70
        pub m_z: [u8; 0x40], // 0xB0
        pub m_w: [u8; 0x40], // 0xF0
    }
    #[repr(C)]
    pub struct TagStatus {
        pub m_TagStatus: [u8; 0x4], // 0x0
        pub m_flTagStartAnimTime: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct CNmBlend1DNode__CDefinition {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_parameterization: [u8; 0x50], // 0x30
    }
    #[repr(C)]
    pub struct CConcreteAnimParameter {
        pub pad_0: [u8; 0x70], // 0x0
        pub m_previewButton: [u8; 0x4], // 0x70
        pub m_eNetworkSetting: [u8; 0x4], // 0x74
        pub m_bUseMostRecentValue: [u8; 0x1], // 0x78
        pub m_bAutoReset: [u8; 0x1], // 0x79
        pub m_bGameWritable: [u8; 0x1], // 0x7A
        pub m_bGraphWritable: [u8; 0x5], // 0x7B
    }
    #[repr(C)]
    pub struct CNmBoneWeightList {
        pub m_skeletonName: [u8; 0xE0], // 0x0
        pub m_boneIDs: [u8; 0x18], // 0xE0
        pub m_weights: [u8; 0x18], // 0xF8
    }
    #[repr(C)]
    pub struct CPairedSequenceUpdateNode {
        pub pad_0: [u8; 0x78], // 0x0
        pub m_sPairedSequenceRole: [u8; 0x10], // 0x78
    }
    #[repr(C)]
    pub struct CModelConfigElement_RandomPick {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_Choices: [u8; 0x18], // 0x48
        pub m_ChoiceWeights: [u8; 0x20], // 0x60
    }
    #[repr(C)]
    pub struct CNmReferencePoseTask {
        pub pad_0: [u8; 0x70], // 0x0
    }
    #[repr(C)]
    pub struct CNmScaleNode__CDefinition {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_nMaskNodeIdx: [u8; 0x2], // 0x18
        pub m_nEnableNodeIdx: [u8; 0x6], // 0x1A
    }
    #[repr(C)]
    pub struct VPhysXConstraint2_t {
        pub m_nFlags: [u8; 0x4], // 0x0
        pub m_nParent: [u8; 0x2], // 0x4
        pub m_nChild: [u8; 0x2], // 0x6
        pub m_params: [u8; 0xF8], // 0x8
    }
    #[repr(C)]
    pub struct CConstraintTarget {
        pub pad_0: [u8; 0x20], // 0x0
        pub m_qOffset: [u8; 0x10], // 0x20
        pub m_vOffset: [u8; 0xC], // 0x30
        pub m_nBoneHash: [u8; 0x4], // 0x3C
        pub m_sName: [u8; 0x8], // 0x40
        pub m_flWeight: [u8; 0x11], // 0x48
        pub m_bIsAttachment: [u8; 0x7], // 0x59
    }
    #[repr(C)]
    pub struct SkeletonAnimCapture_t {
        pub m_nEntIndex: [u8; 0x4], // 0x0
        pub m_nEntParent: [u8; 0x4], // 0x4
        pub m_ImportedCollision: [u8; 0x18], // 0x8
        pub m_ModelName: [u8; 0x8], // 0x20
        pub m_CaptureName: [u8; 0x8], // 0x28
        pub m_ModelBindPose: [u8; 0x18], // 0x30
        pub m_FeModelInitPose: [u8; 0x18], // 0x48
        pub m_nFlexControllers: [u8; 0x4], // 0x60
        pub m_bPredicted: [u8; 0x44], // 0x64
        pub m_Frames: [u8; 0x18], // 0xA8
    }
    #[repr(C)]
    pub struct CAnimUser {
        pub m_name: [u8; 0x10], // 0x0
        pub m_nType: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CPulse_TempVarBankDefinition {
        pub m_TempVars: [u8; 0x28], // 0x0
    }
    #[repr(C)]
    pub struct CRagdollComponentUpdater {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_ragdollNodePaths: [u8; 0x18], // 0x30
        pub m_followAttachmentNodePaths: [u8; 0x18], // 0x48
        pub m_boneIndices: [u8; 0x18], // 0x60
        pub m_boneNames: [u8; 0x18], // 0x78
        pub m_weightLists: [u8; 0x18], // 0x90
        pub m_boneToWeightIndices: [u8; 0x18], // 0xA8
        pub m_flSpringFrequencyMin: [u8; 0x4], // 0xC0
        pub m_flSpringFrequencyMax: [u8; 0x4], // 0xC4
        pub m_flMaxStretch: [u8; 0x4], // 0xC8
        pub m_bSolidCollisionAtZeroWeight: [u8; 0xC], // 0xCC
    }
    #[repr(C)]
    pub struct ParticleNamedValueSource_t {
        pub m_Name: [u8; 0x8], // 0x0
        pub m_IsPublic: [u8; 0x8], // 0x8
        pub m_ValueType: [u8; 0x18], // 0x10
        pub m_DefaultConfig: [u8; 0x38], // 0x28
    }
    #[repr(C)]
    pub struct CFootDefinition {
        pub m_name: [u8; 0x8], // 0x0
        pub m_ankleBoneName: [u8; 0x8], // 0x8
        pub m_toeBoneName: [u8; 0x8], // 0x10
        pub m_vBallOffset: [u8; 0xC], // 0x18
        pub m_vHeelOffset: [u8; 0xC], // 0x24
        pub m_flFootLength: [u8; 0x4], // 0x30
        pub m_flBindPoseDirectionMS: [u8; 0x4], // 0x34
        pub m_flTraceHeight: [u8; 0x4], // 0x38
        pub m_flTraceRadius: [u8; 0x4], // 0x3C
    }
    #[repr(C)]
    pub struct CSeqSynthAnimDesc {
        pub m_sName: [u8; 0x10], // 0x0
        pub m_flags: [u8; 0xC], // 0x10
        pub m_transition: [u8; 0x8], // 0x1C
        pub m_nLocalBaseReference: [u8; 0x2], // 0x24
        pub m_nLocalBoneMask: [u8; 0x2], // 0x26
        pub m_activityArray: [u8; 0x18], // 0x28
    }
    #[repr(C)]
    pub struct CNmLayerBlendNode__LayerDefinition_t {
        pub m_nInputNodeIdx: [u8; 0x2], // 0x0
        pub m_nWeightValueNodeIdx: [u8; 0x2], // 0x2
        pub m_nBoneMaskValueNodeIdx: [u8; 0x2], // 0x4
        pub m_nRootMotionWeightValueNodeIdx: [u8; 0x2], // 0x6
        pub m_bIsSynchronized: [u8; 0x1], // 0x8
        pub m_bIgnoreEvents: [u8; 0x1], // 0x9
        pub m_bIsStateMachineLayer: [u8; 0x1], // 0xA
        pub m_blendMode: [u8; 0x1], // 0xB
    }
    #[repr(C)]
    pub struct CAnimComponentUpdater {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_name: [u8; 0x8], // 0x18
        pub m_id: [u8; 0x4], // 0x20
        pub m_networkMode: [u8; 0x4], // 0x24
        pub m_bStartEnabled: [u8; 0x8], // 0x28
    }
    #[repr(C)]
    pub struct CBlend2DUpdateNode {
        pub pad_0: [u8; 0x60], // 0x0
        pub m_items: [u8; 0x18], // 0x60
        pub m_tags: [u8; 0x18], // 0x78
        pub m_paramSpans: [u8; 0x18], // 0x90
        pub m_nodeItemIndices: [u8; 0x18], // 0xA8
        pub m_damping: [u8; 0x18], // 0xC0
        pub m_blendSourceX: [u8; 0x4], // 0xD8
        pub m_paramX: [u8; 0x4], // 0xDC
        pub m_blendSourceY: [u8; 0x4], // 0xE0
        pub m_paramY: [u8; 0x4], // 0xE4
        pub m_eBlendMode: [u8; 0x4], // 0xE8
        pub m_playbackSpeed: [u8; 0x4], // 0xEC
        pub m_bLoop: [u8; 0x1], // 0xF0
        pub m_bLockBlendOnReset: [u8; 0x1], // 0xF1
        pub m_bLockWhenWaning: [u8; 0x1], // 0xF2
        pub m_bAnimEventsAndTagsOnMostWeightedOnly: [u8; 0x5], // 0xF3
    }
    #[repr(C)]
    pub struct CNmVelocityBasedSpeedScaleNode__CDefinition {
        pub pad_0: [u8; 0x20], // 0x0
    }
    #[repr(C)]
    pub struct CNPCPhysicsHull {
        pub m_sName: [u8; 0x8], // 0x0
        pub m_eType: [u8; 0x4], // 0x8
        pub m_flCapsuleHeight: [u8; 0x4], // 0xC
        pub m_flCapsuleRadius: [u8; 0x4], // 0x10
        pub m_vCapsuleCenter1: [u8; 0xC], // 0x14
        pub m_vCapsuleCenter2: [u8; 0xC], // 0x20
        pub m_flGroundBoxHeight: [u8; 0x4], // 0x2C
        pub m_flGroundBoxWidth: [u8; 0x10], // 0x30
    }
    #[repr(C)]
    pub struct PermModelExtPart_t {
        pub m_Transform: [u8; 0x20], // 0x0
        pub m_Name: [u8; 0x8], // 0x20
        pub m_nParent: [u8; 0x8], // 0x28
        pub m_refModel: [u8; 0x10], // 0x30
    }
    #[repr(C)]
    pub struct CNmCachedIDNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nInputValueNodeIdx: [u8; 0x4], // 0x10
        pub m_mode: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct CLeanMatrixUpdateNode {
        pub pad_0: [u8; 0x5C], // 0x0
        pub m_frameCorners: [u8; 0x24], // 0x5C
        pub m_poses: [u8; 0x28], // 0x80
        pub m_damping: [u8; 0x18], // 0xA8
        pub m_blendSource: [u8; 0x4], // 0xC0
        pub m_paramIndex: [u8; 0x4], // 0xC4
        pub m_verticalAxis: [u8; 0xC], // 0xC8
        pub m_horizontalAxis: [u8; 0xC], // 0xD4
        pub m_hSequence: [u8; 0x4], // 0xE0
        pub m_flMaxValue: [u8; 0x4], // 0xE4
        pub m_nSequenceMaxFrame: [u8; 0x8], // 0xE8
    }
    #[repr(C)]
    pub struct CSymbolAnimParameter {
        pub pad_0: [u8; 0x80], // 0x0
        pub m_defaultValue: [u8; 0x8], // 0x80
    }
    #[repr(C)]
    pub struct CNmFloatCurveEventNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_eventID: [u8; 0x8], // 0x10
        pub m_nDefaultNodeIdx: [u8; 0x4], // 0x18
        pub m_flDefaultValue: [u8; 0x4], // 0x1C
        pub m_eventConditionRules: [u8; 0x8], // 0x20
    }
    #[repr(C)]
    pub struct IAnimationGraphInstance {
        pub pad_0: [u8; 0x18], // 0x0
    }
    #[repr(C)]
    pub struct CNmStateMachineNode__TransitionDefinition_t {
        pub m_nTargetStateIdx: [u8; 0x2], // 0x0
        pub m_nConditionNodeIdx: [u8; 0x2], // 0x2
        pub m_nTransitionNodeIdx: [u8; 0x2], // 0x4
        pub m_bCanBeForced: [u8; 0x2], // 0x6
    }
    #[repr(C)]
    pub struct CNmFloatSelectorNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_conditionNodeIndices: [u8; 0x18], // 0x10
        pub m_values: [u8; 0x20], // 0x28
        pub m_flDefaultValue: [u8; 0x4], // 0x48
        pub m_flEaseTime: [u8; 0x4], // 0x4C
        pub m_easingOp: [u8; 0x8], // 0x50
    }
    #[repr(C)]
    pub struct CTargetSelectorUpdateNode {
        pub pad_0: [u8; 0x60], // 0x0
        pub m_eAngleMode: [u8; 0x8], // 0x60
        pub m_children: [u8; 0x1C], // 0x68
        pub m_hTargetPosition: [u8; 0x2], // 0x84
        pub m_hTargetFacePositionParameter: [u8; 0x2], // 0x86
        pub m_hMoveHeadingParameter: [u8; 0x2], // 0x88
        pub m_hDesiredMoveHeadingParameter: [u8; 0x2], // 0x8A
        pub m_bTargetPositionIsWorldSpace: [u8; 0x1], // 0x8C
        pub m_bTargetFacePositionIsWorldSpace: [u8; 0x1], // 0x8D
        pub m_bEnablePhaseMatching: [u8; 0x2], // 0x8E
        pub m_flPhaseMatchingMaxRootMotionSkip: [u8; 0x10], // 0x90
    }
    #[repr(C)]
    pub struct SlopeData {
        pub m_vSlopeNormal: [u8; 0xC], // 0x0
    }
    #[repr(C)]
    pub struct CHitBoxSetList {
        pub m_HitBoxSets: [u8; 0x18], // 0x0
    }
    #[repr(C)]
    pub struct CNmIsInactiveBranchConditionNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
    }
    #[repr(C)]
    pub struct MotionDBIndex {
        pub m_nIndex: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CDirectPlaybackTagData {
        pub m_sequenceName: [u8; 0x8], // 0x0
        pub m_tags: [u8; 0x18], // 0x8
    }
    #[repr(C)]
    pub struct CParticleCollectionVecInput {
        pub pad_0: [u8; 0x6D8], // 0x0
    }
    #[repr(C)]
    pub struct CNmGraphEventConditionNode__Condition_t {
        pub m_eventID: [u8; 0x8], // 0x0
        pub m_eventTypeCondition: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct CNmFloatRemapNode__RemapRange_t {
        pub m_flBegin: [u8; 0x4], // 0x0
        pub m_flEnd: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct CNmCurrentSyncEventIDNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nSourceStateNodeIdx: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CNmStateCompletedConditionNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nSourceStateNodeIdx: [u8; 0x2], // 0x10
        pub m_nTransitionDurationOverrideNodeIdx: [u8; 0x2], // 0x12
        pub m_flTransitionDurationSeconds: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct CNmCameraFOVEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_curve: [u8; 0x40], // 0x18
    }
    #[repr(C)]
    pub struct CNmTargetWarpEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_rule: [u8; 0x1], // 0x18
        pub m_algorithm: [u8; 0x7], // 0x19
    }
    #[repr(C)]
    pub struct CParamSpanUpdater {
        pub m_spans: [u8; 0x18], // 0x0
    }
    #[repr(C)]
    pub struct CAnimActionUpdater {
        pub pad_0: [u8; 0x18], // 0x0
    }
    #[repr(C)]
    pub struct CParticleAnimTag {
        pub pad_0: [u8; 0x58], // 0x0
        pub m_hParticleSystem: [u8; 0x8], // 0x58
        pub m_particleSystemName: [u8; 0x8], // 0x60
        pub m_configName: [u8; 0x8], // 0x68
        pub m_bDetachFromOwner: [u8; 0x1], // 0x70
        pub m_bAggregate: [u8; 0x1], // 0x71
        pub m_bStopWhenTagEnds: [u8; 0x1], // 0x72
        pub m_bTagEndStopIsInstant: [u8; 0x5], // 0x73
        pub m_attachmentName: [u8; 0x8], // 0x78
        pub m_attachmentType: [u8; 0x8], // 0x80
        pub m_attachmentCP1Name: [u8; 0x8], // 0x88
        pub m_attachmentCP1Type: [u8; 0x8], // 0x90
    }
    #[repr(C)]
    pub struct CCycleBase {
        pub m_flCycle: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct FollowTargetOpFixedSettings_t {
        pub m_boneIndex: [u8; 0x4], // 0x0
        pub m_bBoneTarget: [u8; 0x4], // 0x4
        pub m_boneTargetIndex: [u8; 0x4], // 0x8
        pub m_bWorldCoodinateTarget: [u8; 0x1], // 0xC
        pub m_bMatchTargetOrientation: [u8; 0x3], // 0xD
    }
    #[repr(C)]
    pub struct CNmIDSwitchNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nSwitchValueNodeIdx: [u8; 0x2], // 0x10
        pub m_nTrueValueNodeIdx: [u8; 0x2], // 0x12
        pub m_nFalseValueNodeIdx: [u8; 0x4], // 0x14
        pub m_falseValue: [u8; 0x8], // 0x18
        pub m_trueValue: [u8; 0x8], // 0x20
    }
    #[repr(C)]
    pub struct CNmRootMotionEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_flBlendTimeSeconds: [u8; 0x8], // 0x18
    }
    #[repr(C)]
    pub struct CPulse_PublicOutput {
        pub m_Name: [u8; 0x10], // 0x0
        pub m_Description: [u8; 0x8], // 0x10
        pub m_Args: [u8; 0x10], // 0x18
    }
    #[repr(C)]
    pub struct CChoiceInstanceData {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_currentChoice: [u8; 0xC], // 0x10
        pub m_previousChoice: [u8; 0x4], // 0x1C
        pub m_flClipStartTime: [u8; 0xC], // 0x20
        pub m_choicePreviousCycle: [u8; 0x8], // 0x2C
    }
    #[repr(C)]
    pub struct CNmContactAudioTypeVData {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct CNmCameraDOFEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_curve: [u8; 0x40], // 0x18
    }
    #[repr(C)]
    pub struct AnimationSnapshotBase_t {
        pub m_flRealTime: [u8; 0x10], // 0x0
        pub m_rootToWorld: [u8; 0x30], // 0x10
        pub m_bBonesInWorldSpace: [u8; 0x8], // 0x40
        pub m_boneSetupMask: [u8; 0x18], // 0x48
        pub m_boneTransforms: [u8; 0x18], // 0x60
        pub m_flexControllers: [u8; 0x18], // 0x78
        pub m_SnapshotType: [u8; 0x4], // 0x90
        pub m_bHasDecodeDump: [u8; 0x4], // 0x94
        pub m_DecodeDump: [u8; 0x78], // 0x98
    }
    #[repr(C)]
    pub struct CEmitTagActionUpdater {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_nTagIndex: [u8; 0x4], // 0x18
        pub m_bIsZeroDuration: [u8; 0x4], // 0x1C
    }
    #[repr(C)]
    pub struct DynamicMeshDeformParams_t {
        pub m_flTensionCompressScale: [u8; 0x4], // 0x0
        pub m_flTensionStretchScale: [u8; 0x4], // 0x4
        pub m_bRecomputeSmoothNormalsAfterAnimation: [u8; 0x1], // 0x8
        pub m_bComputeDynamicMeshTensionAfterAnimation: [u8; 0x1], // 0x9
        pub m_bSmoothNormalsAcrossUvSeams: [u8; 0x1], // 0xA
        pub m_bEnableEyeBulgeDeformation: [u8; 0x1], // 0xB
    }
    #[repr(C)]
    pub struct CNmTimeConditionNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_sourceStateNodeIdx: [u8; 0x2], // 0x10
        pub m_nInputValueNodeIdx: [u8; 0x2], // 0x12
        pub m_flComparand: [u8; 0x4], // 0x14
        pub m_type: [u8; 0x1], // 0x18
        pub m_operator: [u8; 0x7], // 0x19
    }
    #[repr(C)]
    pub struct CNmSyncEventIndexConditionNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nSourceStateNodeIdx: [u8; 0x2], // 0x10
        pub m_triggerMode: [u8; 0x2], // 0x12
        pub m_syncEventIdx: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct CAnimStateMachineUpdater {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_states: [u8; 0x18], // 0x8
        pub m_transitions: [u8; 0x30], // 0x20
        pub m_startStateIndex: [u8; 0x8], // 0x50
    }
    #[repr(C)]
    pub struct CUnaryUpdateNode {
        pub pad_0: [u8; 0x60], // 0x0
        pub m_pChildNode: [u8; 0x10], // 0x60
    }
    #[repr(C)]
    pub struct CNmIDToFloatNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nInputValueNodeIdx: [u8; 0x4], // 0x10
        pub m_defaultValue: [u8; 0x4], // 0x14
        pub m_IDs: [u8; 0x30], // 0x18
        pub m_values: [u8; 0x20], // 0x48
    }
    #[repr(C)]
    pub struct PlayerInputMotorInstanceData_t {
        pub m_vInputVectorWS: [u8; 0xC], // 0x0
        pub m_vVelocityWS: [u8; 0xC], // 0xC
        pub m_vAccelerationWS: [u8; 0x10], // 0x18
    }
    #[repr(C)]
    pub struct CSelectorUpdateNode {
        pub pad_0: [u8; 0x60], // 0x0
        pub m_children: [u8; 0x18], // 0x60
        pub m_tags: [u8; 0x1C], // 0x78
        pub m_blendCurve: [u8; 0x8], // 0x94
        pub m_flBlendTime: [u8; 0x8], // 0x9C
        pub m_hParameter: [u8; 0x4], // 0xA4
        pub m_nTagIndex: [u8; 0x4], // 0xA8
        pub m_eTagBehavior: [u8; 0x4], // 0xAC
        pub m_bResetOnChange: [u8; 0x1], // 0xB0
        pub m_bLockWhenWaning: [u8; 0x1], // 0xB1
        pub m_bSyncCyclesOnChange: [u8; 0x6], // 0xB2
    }
    #[repr(C)]
    pub struct NmPercent_t {
        pub m_flValue: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CStateMachineComponentUpdater {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_stateMachine: [u8; 0x58], // 0x30
    }
    #[repr(C)]
    pub struct CAnimUpdateNodeRef {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_nodeIndex: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct CPulse_OutputConnection {
        pub m_SourceOutput: [u8; 0x10], // 0x0
        pub m_TargetEntity: [u8; 0x10], // 0x10
        pub m_TargetInput: [u8; 0x10], // 0x20
        pub m_Param: [u8; 0x10], // 0x30
    }
    #[repr(C)]
    pub struct CPhysSurfaceProperties {
        pub m_name: [u8; 0x8], // 0x0
        pub m_nameHash: [u8; 0x4], // 0x8
        pub m_baseNameHash: [u8; 0xC], // 0xC
        pub m_bHidden: [u8; 0x8], // 0x18
        pub m_description: [u8; 0x8], // 0x20
        pub m_physics: [u8; 0x18], // 0x28
        pub m_vehicleParams: [u8; 0x8], // 0x40
        pub m_audioSounds: [u8; 0x60], // 0x48
        pub m_audioParams: [u8; 0x20], // 0xA8
    }
    #[repr(C)]
    pub struct CNmBoneMaskValueNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
    }
    #[repr(C)]
    pub struct CSeqPoseParamDesc {
        pub m_sName: [u8; 0x10], // 0x0
        pub m_flStart: [u8; 0x4], // 0x10
        pub m_flEnd: [u8; 0x4], // 0x14
        pub m_flLoop: [u8; 0x4], // 0x18
        pub m_bLooping: [u8; 0x4], // 0x1C
    }
    #[repr(C)]
    pub struct CModelConfigElement_SetBodygroup {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_GroupName: [u8; 0x8], // 0x48
        pub m_nChoice: [u8; 0x8], // 0x50
    }
    #[repr(C)]
    pub struct CAnimMovement {
        pub endframe: [u8; 0x4], // 0x0
        pub motionflags: [u8; 0x4], // 0x4
        pub v0: [u8; 0x4], // 0x8
        pub v1: [u8; 0x4], // 0xC
        pub angle: [u8; 0x4], // 0x10
        pub vector: [u8; 0xC], // 0x14
        pub position: [u8; 0xC], // 0x20
    }
    #[repr(C)]
    pub struct CParticleRemapFloatInput {
        pub pad_0: [u8; 0x178], // 0x0
    }
    #[repr(C)]
    pub struct FollowAttachmentData {
        pub m_boneIndex: [u8; 0x4], // 0x0
        pub m_attachmentHandle: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct FootStepTrigger {
        pub m_tags: [u8; 0x18], // 0x0
        pub m_nFootIndex: [u8; 0x4], // 0x18
        pub m_triggerPhase: [u8; 0x4], // 0x1C
    }
    #[repr(C)]
    pub struct CNmSyncTrack__EventMarker_t {
        pub m_startTime: [u8; 0x8], // 0x0
        pub m_ID: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct CPathMetricEvaluator {
        pub pad_0: [u8; 0x50], // 0x0
        pub m_pathTimeSamples: [u8; 0x18], // 0x50
        pub m_flDistance: [u8; 0x4], // 0x68
        pub m_bExtrapolateMovement: [u8; 0x4], // 0x6C
        pub m_flMinExtrapolationSpeed: [u8; 0x8], // 0x70
    }
    #[repr(C)]
    pub struct CFootLockUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub m_opFixedSettings: [u8; 0x70], // 0x70
        pub m_footSettings: [u8; 0x18], // 0xE0
        pub m_hipShiftDamping: [u8; 0x18], // 0xF8
        pub m_rootHeightDamping: [u8; 0x18], // 0x110
        pub m_flStrideCurveScale: [u8; 0x4], // 0x128
        pub m_flStrideCurveLimitScale: [u8; 0x4], // 0x12C
        pub m_flStepHeightIncreaseScale: [u8; 0x4], // 0x130
        pub m_flStepHeightDecreaseScale: [u8; 0x4], // 0x134
        pub m_flHipShiftScale: [u8; 0x4], // 0x138
        pub m_flBlendTime: [u8; 0x4], // 0x13C
        pub m_flMaxRootHeightOffset: [u8; 0x4], // 0x140
        pub m_flMinRootHeightOffset: [u8; 0x4], // 0x144
        pub m_flTiltPlanePitchSpringStrength: [u8; 0x4], // 0x148
        pub m_flTiltPlaneRollSpringStrength: [u8; 0x4], // 0x14C
        pub m_bApplyFootRotationLimits: [u8; 0x1], // 0x150
        pub m_bApplyHipShift: [u8; 0x1], // 0x151
        pub m_bModulateStepHeight: [u8; 0x1], // 0x152
        pub m_bResetChild: [u8; 0x1], // 0x153
        pub m_bEnableVerticalCurvedPaths: [u8; 0x1], // 0x154
        pub m_bEnableRootHeightDamping: [u8; 0x3], // 0x155
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
        pub strCellDesc: [u8; 0x10], // 0x0
        pub strBindingName: [u8; 0x10], // 0x10
    }
    #[repr(C)]
    pub struct JiggleBoneSettings_t {
        pub m_nBoneIndex: [u8; 0x4], // 0x0
        pub m_flSpringStrength: [u8; 0x4], // 0x4
        pub m_flMaxTimeStep: [u8; 0x4], // 0x8
        pub m_flDamping: [u8; 0x4], // 0xC
        pub m_vBoundsMaxLS: [u8; 0xC], // 0x10
        pub m_vBoundsMinLS: [u8; 0xC], // 0x1C
        pub m_eSimSpace: [u8; 0x4], // 0x28
    }
    #[repr(C)]
    pub struct CJumpHelperUpdateNode {
        pub pad_0: [u8; 0xB0], // 0x0
        pub m_hTargetParam: [u8; 0x4], // 0xB0
        pub m_flOriginalJumpMovement: [u8; 0xC], // 0xB4
        pub m_flOriginalJumpDuration: [u8; 0x4], // 0xC0
        pub m_flJumpStartCycle: [u8; 0x4], // 0xC4
        pub m_flJumpEndCycle: [u8; 0x4], // 0xC8
        pub m_eCorrectionMethod: [u8; 0x4], // 0xCC
        pub m_bTranslationAxis: [u8; 0x3], // 0xD0
        pub m_bScaleSpeed: [u8; 0x5], // 0xD3
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
        pub m_footInfo: [u8; 0x18], // 0x0
        pub m_hipDampingSettings: [u8; 0x18], // 0x18
        pub m_nHipBoneIndex: [u8; 0x4], // 0x30
        pub m_ikSolverType: [u8; 0x4], // 0x34
        pub m_bApplyTilt: [u8; 0x1], // 0x38
        pub m_bApplyHipDrop: [u8; 0x1], // 0x39
        pub m_bAlwaysUseFallbackHinge: [u8; 0x1], // 0x3A
        pub m_bApplyFootRotationLimits: [u8; 0x1], // 0x3B
        pub m_bApplyLegTwistLimits: [u8; 0x4], // 0x3C
        pub m_flMaxFootHeight: [u8; 0x4], // 0x40
        pub m_flExtensionScale: [u8; 0x4], // 0x44
        pub m_flMaxLegTwist: [u8; 0x4], // 0x48
        pub m_bEnableLockBreaking: [u8; 0x4], // 0x4C
        pub m_flLockBreakTolerance: [u8; 0x4], // 0x50
        pub m_flLockBlendTime: [u8; 0x4], // 0x54
        pub m_bEnableStretching: [u8; 0x4], // 0x58
        pub m_flMaxStretchAmount: [u8; 0x4], // 0x5C
        pub m_flStretchExtensionScale: [u8; 0x8], // 0x60
    }
    #[repr(C)]
    pub struct CBoneVelocityMetricEvaluator {
        pub pad_0: [u8; 0x50], // 0x0
        pub m_nBoneIndex: [u8; 0x8], // 0x50
    }
    #[repr(C)]
    pub struct CWarpSectionAnimTag {
        pub pad_0: [u8; 0x50], // 0x0
        pub m_bWarpPosition: [u8; 0x1], // 0x50
        pub m_bWarpOrientation: [u8; 0x7], // 0x51
    }
    #[repr(C)]
    pub struct SelectorInstanceData_t {
        pub m_weights: [u8; 0x8], // 0x0
        pub m_currentIndexStartTime: [u8; 0xC], // 0x8
        pub m_currentIndex: [u8; 0x4], // 0x14
        pub m_previousIndex: [u8; 0x14], // 0x18
    }
    #[repr(C)]
    pub struct CModelConfigElement_RandomColor {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_Gradient: [u8; 0x18], // 0x48
    }
    #[repr(C)]
    pub struct CFootMotion {
        pub m_strides: [u8; 0x18], // 0x0
        pub m_name: [u8; 0x8], // 0x18
        pub m_bAdditive: [u8; 0x8], // 0x20
    }
    #[repr(C)]
    pub struct CJiggleBoneUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub m_opFixedData: [u8; 0x20], // 0x70
    }
    #[repr(C)]
    pub struct CNmConstVectorNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_value: [u8; 0x10], // 0x10
    }
    #[repr(C)]
    pub struct MoodAnimation_t {
        pub m_sName: [u8; 0x8], // 0x0
        pub m_flWeight: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct CLODComponentUpdater {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_nServerLOD: [u8; 0x8], // 0x30
    }
    #[repr(C)]
    pub struct CNmIsTargetSetNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nInputValueNodeIdx: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CPhysSurfacePropertiesVehicle {
        pub m_wheelDrag: [u8; 0x4], // 0x0
        pub m_wheelFrictionScale: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct CAnimDataChannelDesc {
        pub m_szChannelClass: [u8; 0x10], // 0x0
        pub m_szVariableName: [u8; 0x10], // 0x10
        pub m_nFlags: [u8; 0x4], // 0x20
        pub m_nType: [u8; 0x4], // 0x24
        pub m_szGrouping: [u8; 0x10], // 0x28
        pub m_szDescription: [u8; 0x10], // 0x38
        pub m_szElementNameArray: [u8; 0x18], // 0x48
        pub m_nElementIndexArray: [u8; 0x18], // 0x60
        pub m_nElementMaskArray: [u8; 0x18], // 0x78
    }
    #[repr(C)]
    pub struct CPairedSequenceComponentUpdater {
        pub pad_0: [u8; 0x38], // 0x0
    }
    #[repr(C)]
    pub struct CNmParticleEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_relevance: [u8; 0x4], // 0x18
        pub m_type: [u8; 0x4], // 0x1C
        pub m_target: [u8; 0x8], // 0x20
        pub m_hParticleSystem: [u8; 0x8], // 0x28
        pub m_tags: [u8; 0x8], // 0x30
        pub m_bStopImmediately: [u8; 0x1], // 0x38
        pub m_bDetachFromOwner: [u8; 0x1], // 0x39
        pub m_bPlayEndCap: [u8; 0x6], // 0x3A
        pub m_attachmentPoint0: [u8; 0x8], // 0x40
        pub m_attachmentType0: [u8; 0x8], // 0x48
        pub m_attachmentPoint1: [u8; 0x8], // 0x50
        pub m_attachmentType1: [u8; 0x8], // 0x58
        pub m_config: [u8; 0x8], // 0x60
        pub m_effectForConfig: [u8; 0x8], // 0x68
    }
    #[repr(C)]
    pub struct MotionSelection {
        pub pad_0: [u8; 0x24], // 0x0
        pub m_nConfigIndex: [u8; 0xC], // 0x24
        pub m_flCycleZeroTime: [u8; 0xC], // 0x30
        pub m_flPlaybackSpeed: [u8; 0xC], // 0x3C
        pub m_flStartTime: [u8; 0xC], // 0x48
        pub m_nSample: [u8; 0x4], // 0x54
    }
    #[repr(C)]
    pub struct CMorphRectData {
        pub m_nXLeftDst: [u8; 0x2], // 0x0
        pub m_nYTopDst: [u8; 0x2], // 0x2
        pub m_flUWidthSrc: [u8; 0x4], // 0x4
        pub m_flVHeightSrc: [u8; 0x8], // 0x8
        pub m_bundleDatas: [u8; 0x18], // 0x10
    }
    #[repr(C)]
    pub struct CAnimFoot {
        pub m_name: [u8; 0x8], // 0x0
        pub m_vBallOffset: [u8; 0xC], // 0x8
        pub m_vHeelOffset: [u8; 0xC], // 0x14
        pub m_ankleBoneIndex: [u8; 0x4], // 0x20
        pub m_toeBoneIndex: [u8; 0x4], // 0x24
    }
    #[repr(C)]
    pub struct CParentConstraint {
        pub pad_0: [u8; 0x60], // 0x0
    }
    #[repr(C)]
    pub struct CNmCachedVectorNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nInputValueNodeIdx: [u8; 0x4], // 0x10
        pub m_mode: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct CNmStateNode__TimedEvent_t {
        pub m_ID: [u8; 0x8], // 0x0
        pub m_flTimeValueSeconds: [u8; 0x4], // 0x8
        pub m_comparisionOperator: [u8; 0x4], // 0xC
    }
    #[repr(C)]
    pub struct CFootPositionMetricEvaluator {
        pub pad_0: [u8; 0x50], // 0x0
        pub m_footIndices: [u8; 0x18], // 0x50
        pub m_bIgnoreSlope: [u8; 0x8], // 0x68
    }
    #[repr(C)]
    pub struct CParticleVariableRef {
        pub m_variableName: [u8; 0x38], // 0x0
        pub m_variableType: [u8; 0x18], // 0x38
    }
    #[repr(C)]
    pub struct CMoverInstanceData {
        pub m_flDampedValue: [u8; 0x4], // 0x0
        pub m_vMovement: [u8; 0x18], // 0x4
        pub m_Rotation: [u8; 0x4], // 0x1C
        pub m_TargetOrientation: [u8; 0xC], // 0x20
    }
    #[repr(C)]
    pub struct HSequence {
        pub m_Value: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CDampedValueUpdateItem {
        pub m_damping: [u8; 0x20], // 0x0
        pub m_hParamIn: [u8; 0x2], // 0x20
        pub m_hParamOut: [u8; 0x6], // 0x22
    }
    #[repr(C)]
    pub struct CAnimLocalHierarchy {
        pub m_sBone: [u8; 0x10], // 0x0
        pub m_sNewParent: [u8; 0x10], // 0x10
        pub m_nStartFrame: [u8; 0x4], // 0x20
        pub m_nPeakFrame: [u8; 0x4], // 0x24
        pub m_nTailFrame: [u8; 0x4], // 0x28
        pub m_nEndFrame: [u8; 0x4], // 0x2C
    }
    #[repr(C)]
    pub struct CBlendUpdateNode {
        pub pad_0: [u8; 0x60], // 0x0
        pub m_children: [u8; 0x18], // 0x60
        pub m_sortedOrder: [u8; 0x18], // 0x78
        pub m_targetValues: [u8; 0x1C], // 0x90
        pub m_blendValueSource: [u8; 0x4], // 0xAC
        pub m_eLinearRootMotionBlendMode: [u8; 0x4], // 0xB0
        pub m_paramIndex: [u8; 0x4], // 0xB4
        pub m_damping: [u8; 0x18], // 0xB8
        pub m_blendKeyType: [u8; 0x4], // 0xD0
        pub m_bLockBlendOnReset: [u8; 0x1], // 0xD4
        pub m_bSyncCycles: [u8; 0x1], // 0xD5
        pub m_bLoop: [u8; 0x1], // 0xD6
        pub m_bLockWhenWaning: [u8; 0x1], // 0xD7
        pub m_bIsAngle: [u8; 0x8], // 0xD8
    }
    #[repr(C)]
    pub struct PulseGraphExecutionHistoryEntry_t {
        pub nCursorID: [u8; 0x4], // 0x0
        pub nEditorID: [u8; 0x4], // 0x4
        pub seqPoint: [u8; 0x10], // 0x8
        pub flExecTime: [u8; 0x4], // 0x18
        pub unFlags: [u8; 0x4], // 0x1C
        pub tagName: [u8; 0x10], // 0x20
        pub childID: [u8; 0x8], // 0x30
    }
    #[repr(C)]
    pub struct CQuaternionAnimParameter {
        pub pad_0: [u8; 0x80], // 0x0
        pub m_defaultValue: [u8; 0x10], // 0x80
        pub m_bInterpolate: [u8; 0x10], // 0x90
    }
    #[repr(C)]
    pub struct PermModelData_t {
        pub m_name: [u8; 0x8], // 0x0
        pub m_modelInfo: [u8; 0x58], // 0x8
        pub m_ExtParts: [u8; 0x18], // 0x60
        pub m_refMeshes: [u8; 0x18], // 0x78
        pub m_refMeshGroupMasks: [u8; 0x18], // 0x90
        pub m_refPhysGroupMasks: [u8; 0x18], // 0xA8
        pub m_refLODGroupMasks: [u8; 0x18], // 0xC0
        pub m_lodGroupSwitchDistances: [u8; 0x18], // 0xD8
        pub m_refPhysicsData: [u8; 0x18], // 0xF0
        pub m_refPhysicsHitboxData: [u8; 0x18], // 0x108
        pub m_refAnimGroups: [u8; 0x18], // 0x120
        pub m_refSequenceGroups: [u8; 0x18], // 0x138
        pub m_meshGroups: [u8; 0x18], // 0x150
        pub m_materialGroups: [u8; 0x18], // 0x168
        pub m_nDefaultMeshGroupMask: [u8; 0x8], // 0x180
        pub m_modelSkeleton: [u8; 0xA8], // 0x188
        pub m_remappingTable: [u8; 0x18], // 0x230
        pub m_remappingTableStarts: [u8; 0x18], // 0x248
        pub m_boneFlexDrivers: [u8; 0x18], // 0x260
        pub m_pModelConfigList: [u8; 0x8], // 0x278
        pub m_BodyGroupsHiddenInTools: [u8; 0x18], // 0x280
        pub m_refAnimIncludeModels: [u8; 0x18], // 0x298
        pub m_AnimatedMaterialAttributes: [u8; 0x18], // 0x2B0
        pub m_animGraph2Refs: [u8; 0x18], // 0x2C8
        pub m_vecNmSkeletonRefs: [u8; 0x18], // 0x2E0
    }
    #[repr(C)]
    pub struct PulseCursorYieldToken_t {
        pub m_Value: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CNmSampleTask {
        pub pad_0: [u8; 0x80], // 0x0
    }
    #[repr(C)]
    pub struct CFollowPathInstanceData {
        pub m_xLastPredictedTransformsDeltas: [u8; 0x8], // 0x0
        pub m_dampedTurnValue: [u8; 0x4], // 0x8
        pub m_flTurnAmount: [u8; 0x4], // 0xC
        pub m_flPredictionScale: [u8; 0xC], // 0x10
        pub m_flLastPathTime: [u8; 0x8], // 0x1C
    }
    #[repr(C)]
    pub struct CStaticPoseCacheBuilder {
        pub pad_0: [u8; 0x38], // 0x0
    }
    #[repr(C)]
    pub struct ModelMeshBufferData_t {
        pub m_nBlockIndex: [u8; 0x4], // 0x0
        pub m_nElementCount: [u8; 0x4], // 0x4
        pub m_nElementSizeInBytes: [u8; 0x4], // 0x8
        pub m_bMeshoptCompressed: [u8; 0x1], // 0xC
        pub m_bMeshoptIndexSequence: [u8; 0x1], // 0xD
        pub m_nMeshoptMeshletEncodeVersion: [u8; 0x1], // 0xE
        pub m_bCompressedZSTD: [u8; 0x1], // 0xF
        pub m_bCreateBufferSRV: [u8; 0x1], // 0x10
        pub m_bCreateBufferUAV: [u8; 0x1], // 0x11
        pub m_bCreateRawBuffer: [u8; 0x1], // 0x12
        pub m_bCreatePooledBuffer: [u8; 0x1], // 0x13
        pub m_nBufferUsage: [u8; 0x4], // 0x14
        pub m_inputLayoutFields: [u8; 0x18], // 0x18
    }
    #[repr(C)]
    pub struct CSequenceGroupData {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_sName: [u8; 0x10], // 0x10
        pub m_nFlags: [u8; 0x8], // 0x20
        pub m_localSequenceNameArray: [u8; 0x18], // 0x28
        pub m_localS1SeqDescArray: [u8; 0x18], // 0x40
        pub m_localMultiSeqDescArray: [u8; 0x18], // 0x58
        pub m_localSynthAnimDescArray: [u8; 0x18], // 0x70
        pub m_localCmdSeqDescArray: [u8; 0x18], // 0x88
        pub m_localBoneMaskArray: [u8; 0x18], // 0xA0
        pub m_localScaleSetArray: [u8; 0x18], // 0xB8
        pub m_localBoneNameArray: [u8; 0x18], // 0xD0
        pub m_localNodeName: [u8; 0x10], // 0xE8
        pub m_localPoseParamArray: [u8; 0x18], // 0xF8
        pub m_keyValues: [u8; 0x10], // 0x110
        pub m_localIKAutoplayLockArray: [u8; 0x18], // 0x120
    }
    #[repr(C)]
    pub struct CStateMachineUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub m_stateMachine: [u8; 0x58], // 0x70
        pub m_stateData: [u8; 0x18], // 0xC8
        pub m_transitionData: [u8; 0x1C], // 0xE0
        pub m_bBlockWaningTags: [u8; 0x1], // 0xFC
        pub m_bLockStateWhenWaning: [u8; 0x1], // 0xFD
        pub m_bResetWhenActivated: [u8; 0x2], // 0xFE
    }
    #[repr(C)]
    pub struct CNmIDBasedSelectorNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_optionNodeIndices: [u8; 0x18], // 0x10
        pub m_optionIDs: [u8; 0x30], // 0x28
        pub m_nParameterNodeIdx: [u8; 0x2], // 0x58
        pub m_nFallbackNodeIdx: [u8; 0x2], // 0x5A
        pub m_bIgnoreInvalidOptions: [u8; 0x4], // 0x5C
    }
    #[repr(C)]
    pub struct CAimMatrixUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub m_opFixedSettings: [u8; 0xF8], // 0x70
        pub m_target: [u8; 0x4], // 0x168
        pub m_paramIndex: [u8; 0x4], // 0x16C
        pub m_hSequence: [u8; 0x4], // 0x170
        pub m_bResetChild: [u8; 0x1], // 0x174
        pub m_bLockWhenWaning: [u8; 0xB], // 0x175
    }
    #[repr(C)]
    pub struct SkeletonAnimCapture_t__Frame_t {
        pub m_flTime: [u8; 0x4], // 0x0
        pub m_Stamp: [u8; 0x1C], // 0x4
        pub m_Transform: [u8; 0x20], // 0x20
        pub m_bTeleport: [u8; 0x8], // 0x40
        pub m_CompositeBones: [u8; 0x18], // 0x48
        pub m_SimStateBones: [u8; 0x18], // 0x60
        pub m_FeModelAnims: [u8; 0x18], // 0x78
        pub m_FeModelPos: [u8; 0x18], // 0x90
        pub m_FlexControllerWeights: [u8; 0x18], // 0xA8
    }
    #[repr(C)]
    pub struct CModelConfigElement_Command {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_Command: [u8; 0x8], // 0x48
        pub m_Args: [u8; 0x10], // 0x50
    }
    #[repr(C)]
    pub struct TargetSelectorInstanceData_t {
        pub m_currentIndex: [u8; 0x1C], // 0x0
        pub m_vMSRootMotionAnlyzerTarget: [u8; 0x14], // 0x1C
    }
    #[repr(C)]
    pub struct CAnimEventDefinition {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_nFrame: [u8; 0x4], // 0x8
        pub m_nEndFrame: [u8; 0x4], // 0xC
        pub m_flCycle: [u8; 0x4], // 0x10
        pub m_flDuration: [u8; 0x4], // 0x14
        pub m_EventData: [u8; 0x10], // 0x18
        pub m_sLegacyOptions: [u8; 0x10], // 0x28
        pub m_sEventName: [u8; 0x8], // 0x38
    }
    #[repr(C)]
    pub struct CNmRootMotionData {
        pub m_transforms: [u8; 0x18], // 0x0
        pub m_nNumFrames: [u8; 0x4], // 0x18
        pub m_flAverageLinearVelocity: [u8; 0x4], // 0x1C
        pub m_flAverageAngularVelocityRadians: [u8; 0x10], // 0x20
        pub m_totalDelta: [u8; 0x20], // 0x30
    }
    #[repr(C)]
    pub struct CPulseGraphExecutionHistory {
        pub m_nInstanceID: [u8; 0x8], // 0x0
        pub m_strFileName: [u8; 0x8], // 0x8
        pub m_vecHistory: [u8; 0x18], // 0x10
        pub m_mapCellDesc: [u8; 0x28], // 0x28
        pub m_mapCursorDesc: [u8; 0x28], // 0x50
    }
    #[repr(C)]
    pub struct AnimScriptHandle {
        pub m_id: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CFlexOp {
        pub m_OpCode: [u8; 0x4], // 0x0
        pub m_Data: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct CHitReactUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub m_opFixedSettings: [u8; 0x4C], // 0x70
        pub m_triggerParam: [u8; 0x2], // 0xBC
        pub m_hitBoneParam: [u8; 0x2], // 0xBE
        pub m_hitOffsetParam: [u8; 0x2], // 0xC0
        pub m_hitDirectionParam: [u8; 0x2], // 0xC2
        pub m_hitStrengthParam: [u8; 0x4], // 0xC4
        pub m_flMinDelayBetweenHits: [u8; 0x4], // 0xC8
        pub m_bResetChild: [u8; 0x4], // 0xCC
    }
    #[repr(C)]
    pub struct CLookAtUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub m_opFixedSettings: [u8; 0xD8], // 0x70
        pub m_target: [u8; 0x4], // 0x148
        pub m_paramIndex: [u8; 0x2], // 0x14C
        pub m_weightParamIndex: [u8; 0x2], // 0x14E
        pub m_bResetChild: [u8; 0x1], // 0x150
        pub m_bLockWhenWaning: [u8; 0xF], // 0x151
    }
    #[repr(C)]
    pub struct CAnimBone {
        pub m_name: [u8; 0x10], // 0x0
        pub m_parent: [u8; 0x4], // 0x10
        pub m_pos: [u8; 0xC], // 0x14
        pub m_quat: [u8; 0x10], // 0x20
        pub m_scale: [u8; 0x4], // 0x30
        pub m_qAlignment: [u8; 0x10], // 0x34
        pub m_flags: [u8; 0x4], // 0x44
    }
    #[repr(C)]
    pub struct CAnimParameterManagerUpdater {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_parameters: [u8; 0x18], // 0x18
        pub m_idToIndexMap: [u8; 0x20], // 0x30
        pub m_nameToIndexMap: [u8; 0x20], // 0x50
        pub m_indexToHandle: [u8; 0x18], // 0x70
        pub m_autoResetParams: [u8; 0x18], // 0x88
        pub m_autoResetMap: [u8; 0x60], // 0xA0
    }
    #[repr(C)]
    pub struct BoneDemoCaptureSettings_t {
        pub m_boneName: [u8; 0x8], // 0x0
        pub m_flErrorSplineRotationMax: [u8; 0x4], // 0x8
        pub m_flErrorSplineTranslationMax: [u8; 0x4], // 0xC
        pub m_flErrorSplineScaleMax: [u8; 0x4], // 0x10
        pub m_flErrorQuantizationRotationMax: [u8; 0x4], // 0x14
        pub m_flErrorQuantizationTranslationMax: [u8; 0x4], // 0x18
        pub m_flErrorQuantizationScaleMax: [u8; 0x4], // 0x1C
    }
    #[repr(C)]
    pub struct PairedSequenceData {
        pub m_vecPairedSequences: [u8; 0x100], // 0x0
    }
    #[repr(C)]
    pub struct CBoneConstraintPoseSpaceMorph__Input_t {
        pub m_inputValue: [u8; 0x10], // 0x0
        pub m_outputWeightList: [u8; 0x18], // 0x10
    }
    #[repr(C)]
    pub struct MoodAnimationLayer_t {
        pub m_sName: [u8; 0x8], // 0x0
        pub m_bActiveListening: [u8; 0x1], // 0x8
        pub m_bActiveTalking: [u8; 0x7], // 0x9
        pub m_layerAnimations: [u8; 0x18], // 0x10
        pub m_flIntensity: [u8; 0x8], // 0x28
        pub m_flDurationScale: [u8; 0x8], // 0x30
        pub m_bScaleWithInts: [u8; 0x4], // 0x38
        pub m_flNextStart: [u8; 0x8], // 0x3C
        pub m_flStartOffset: [u8; 0x8], // 0x44
        pub m_flEndOffset: [u8; 0x8], // 0x4C
        pub m_flFadeIn: [u8; 0x4], // 0x54
        pub m_flFadeOut: [u8; 0x8], // 0x58
    }
    #[repr(C)]
    pub struct CSpeedScaleUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub m_paramIndex: [u8; 0x8], // 0x70
    }
    #[repr(C)]
    pub struct CSequenceTagSpans {
        pub m_sSequenceName: [u8; 0x8], // 0x0
        pub m_tags: [u8; 0x18], // 0x8
    }
    #[repr(C)]
    pub struct CModelConfigElement_SetBodygroupOnAttachedModels {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_GroupName: [u8; 0x8], // 0x48
        pub m_nChoice: [u8; 0x8], // 0x50
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
        pub m_inputDataBlocks: [u8; 0x18], // 0x10
        pub m_instanceData: [u8; 0x18], // 0x28
        pub m_startingLocalToWorldTransform: [u8; 0x20], // 0x40
        pub m_localToWorldTransform: [u8; 0x20], // 0x60
        pub m_timeStamp: [u8; 0x10], // 0x80
    }
    #[repr(C)]
    pub struct CNmTransitionEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_rule: [u8; 0x8], // 0x18
        pub m_ID: [u8; 0x8], // 0x20
    }
    #[repr(C)]
    pub struct CNmFloatCurveEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_ID: [u8; 0x8], // 0x18
        pub m_curve: [u8; 0x40], // 0x20
    }
    #[repr(C)]
    pub struct CParticleTransformInput {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nType: [u8; 0x8], // 0x10
        pub m_NamedValue: [u8; 0x40], // 0x18
        pub m_bFollowNamedValue: [u8; 0x1], // 0x58
        pub m_bSupportsDisabled: [u8; 0x1], // 0x59
        pub m_bUseOrientation: [u8; 0x2], // 0x5A
        pub m_nControlPoint: [u8; 0x4], // 0x5C
        pub m_nControlPointRangeMax: [u8; 0x4], // 0x60
        pub m_flEndCPGrowthTime: [u8; 0x4], // 0x64
    }
    #[repr(C)]
    pub struct CPathAnimMotorUpdaterBase {
        pub pad_0: [u8; 0x20], // 0x0
        pub m_bLockToPath: [u8; 0x8], // 0x20
    }
    #[repr(C)]
    pub struct PGDInstruction_t {
        pub m_nCode: [u8; 0x4], // 0x0
        pub m_nVar: [u8; 0x4], // 0x4
        pub m_nReg0: [u8; 0x2], // 0x8
        pub m_nReg1: [u8; 0x2], // 0xA
        pub m_nReg2: [u8; 0x4], // 0xC
        pub m_nInvokeBindingIndex: [u8; 0x4], // 0x10
        pub m_nChunk: [u8; 0x4], // 0x14
        pub m_nDestInstruction: [u8; 0x4], // 0x18
        pub m_nCallInfoIndex: [u8; 0x4], // 0x1C
        pub m_nConstIdx: [u8; 0x2], // 0x20
        pub m_nDomainValueIdx: [u8; 0x2], // 0x22
        pub m_nBlackboardReferenceIdx: [u8; 0x2], // 0x24
        pub m_nTempVarIdx: [u8; 0x12], // 0x26
    }
    #[repr(C)]
    pub struct CNmFootstepEventPercentageThroughNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nSourceStateNodeIdx: [u8; 0x2], // 0x10
        pub m_phaseCondition: [u8; 0x2], // 0x12
        pub m_eventConditionRules: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct AimCameraOpFixedSettings_t {
        pub m_nChainIndex: [u8; 0x4], // 0x0
        pub m_nCameraJointIndex: [u8; 0x4], // 0x4
        pub m_nPelvisJointIndex: [u8; 0x4], // 0x8
        pub m_nClavicleLeftJointIndex: [u8; 0x4], // 0xC
        pub m_nClavicleRightJointIndex: [u8; 0x4], // 0x10
        pub m_nDepenetrationJointIndex: [u8; 0x4], // 0x14
        pub m_propJoints: [u8; 0x18], // 0x18
    }
    #[repr(C)]
    pub struct SkeletonAnimCapture_t__Camera_t {
        pub m_tmCamera: [u8; 0x20], // 0x0
        pub m_flTime: [u8; 0x10], // 0x20
    }
    #[repr(C)]
    pub struct CNmGraphEventConditionNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nSourceStateNodeIdx: [u8; 0x4], // 0x10
        pub m_eventConditionRules: [u8; 0x4], // 0x14
        pub m_conditions: [u8; 0x68], // 0x18
    }
    #[repr(C)]
    pub struct CFollowAttachmentUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub m_opFixedData: [u8; 0xA0], // 0x70
    }
    #[repr(C)]
    pub struct CMovementComponentUpdater {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_motors: [u8; 0x18], // 0x30
        pub m_facingDamping: [u8; 0x20], // 0x48
        pub m_nDefaultMotorIndex: [u8; 0x4], // 0x68
        pub m_flDefaultRunSpeed: [u8; 0x4], // 0x6C
        pub m_bMoveVarsDisabled: [u8; 0x1], // 0x70
        pub m_bNetworkPath: [u8; 0x1], // 0x71
        pub m_bNetworkFacing: [u8; 0x1], // 0x72
        pub m_paramHandles: [u8; 0x45], // 0x73
    }
    #[repr(C)]
    pub struct CModelConfigElement_SetMaterialGroup {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_MaterialGroupName: [u8; 0x8], // 0x48
    }
    #[repr(C)]
    pub struct IParticleEffect {
        pub pad_0: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct CFutureFacingMetricEvaluator {
        pub pad_0: [u8; 0x50], // 0x0
        pub m_flDistance: [u8; 0x4], // 0x50
        pub m_flTime: [u8; 0x4], // 0x54
    }
    #[repr(C)]
    pub struct CNmIDBasedClipSelectorNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_optionNodeIndices: [u8; 0x18], // 0x10
        pub m_optionIDs: [u8; 0x30], // 0x28
        pub m_nParameterNodeIdx: [u8; 0x2], // 0x58
        pub m_nFallbackNodeIdx: [u8; 0x2], // 0x5A
        pub m_bIgnoreInvalidOptions: [u8; 0x4], // 0x5C
    }
    #[repr(C)]
    pub struct CLeanMatrixInstanceData {
        pub m_flValueY: [u8; 0x4], // 0x0
        pub m_flValueX: [u8; 0x8], // 0x4
    }
    #[repr(C)]
    pub struct NmCompressionSettings_t {
        pub m_translationRangeX: [u8; 0x8], // 0x0
        pub m_translationRangeY: [u8; 0x8], // 0x8
        pub m_translationRangeZ: [u8; 0x8], // 0x10
        pub m_scaleRange: [u8; 0x8], // 0x18
        pub m_nTrackReadOffset: [u8; 0x10], // 0x20
        pub m_constantRotation: [u8; 0x10], // 0x30
        pub m_bIsRotationStatic: [u8; 0x1], // 0x40
        pub m_bIsTranslationStatic: [u8; 0x1], // 0x41
        pub m_bIsScaleStatic: [u8; 0xE], // 0x42
    }
    #[repr(C)]
    pub struct CPulse_Variable {
        pub m_Name: [u8; 0x10], // 0x0
        pub m_Description: [u8; 0x8], // 0x10
        pub m_Type: [u8; 0x18], // 0x18
        pub m_DefaultValue: [u8; 0x14], // 0x30
        pub m_nKeysSource: [u8; 0x4], // 0x44
        pub m_bIsPublicBlackboardVariable: [u8; 0x1], // 0x48
        pub m_bIsObservable: [u8; 0x3], // 0x49
        pub m_nEditorNodeID: [u8; 0x4], // 0x4C
        pub m_Metadata: [u8; 0x10], // 0x50
    }
    #[repr(C)]
    pub struct PARTICLE_EHANDLE__ {
        pub unused: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CAddUpdateNode {
        pub pad_0: [u8; 0x94], // 0x0
        pub m_footMotionTiming: [u8; 0x4], // 0x94
        pub m_bApplyToFootMotion: [u8; 0x1], // 0x98
        pub m_bApplyChannelsSeparately: [u8; 0x1], // 0x99
        pub m_bUseModelSpace: [u8; 0x1], // 0x9A
        pub m_bApplyScale: [u8; 0x5], // 0x9B
    }
    #[repr(C)]
    pub struct CAnimEnum {
        pub m_value: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct CDemoSettingsComponentUpdater {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_settings: [u8; 0x80], // 0x30
    }
    #[repr(C)]
    pub struct CAnimDecoder {
        pub m_szName: [u8; 0x10], // 0x0
        pub m_nVersion: [u8; 0x4], // 0x10
        pub m_nType: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct CNmCachedTargetNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nInputValueNodeIdx: [u8; 0x4], // 0x10
        pub m_mode: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct CPerParticleFloatInput {
        pub pad_0: [u8; 0x178], // 0x0
    }
    #[repr(C)]
    pub struct CNmConstBoolNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_bValue: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CNmBitFlags {
        pub m_flags: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CFootStride {
        pub m_definition: [u8; 0x40], // 0x0
        pub m_trajectories: [u8; 0x18], // 0x40
    }
    #[repr(C)]
    pub struct CSceneObjectData__RTProxyDrawDescriptor_t {
        pub m_materialGroupToken: [u8; 0x4], // 0x0
        pub m_nSrcDrawIndex: [u8; 0x4], // 0x4
        pub m_drawDesc: [u8; 0x120], // 0x8
        pub m_mWorldFromLocal: [u8; 0x30], // 0x128
        pub m_nVertexAlbedoFormat: [u8; 0x1], // 0x158
        pub m_nVertexAlbedoVB: [u8; 0x1], // 0x159
        pub m_nVertexAlbedoOffset: [u8; 0x2], // 0x15A
        pub m_nVertexAlbedoStride: [u8; 0x2], // 0x15C
        pub m_nVertexEmissiveFormat: [u8; 0x1], // 0x15E
        pub m_nVertexEmissiveVB: [u8; 0x1], // 0x15F
        pub m_nVertexEmissiveOffset: [u8; 0x2], // 0x160
        pub m_nVertexEmissiveStride: [u8; 0x2], // 0x162
        pub m_fEmissiveFactor: [u8; 0x4], // 0x164
    }
    #[repr(C)]
    pub struct CNmLegacyEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_animEventClassName: [u8; 0x8], // 0x18
        pub m_KV: [u8; 0x30], // 0x20
    }
    #[repr(C)]
    pub struct CStateNodeStateData {
        pub m_pChild: [u8; 0x18], // 0x0
    }
    #[repr(C)]
    pub struct CFootstepLandedAnimTag {
        pub pad_0: [u8; 0x58], // 0x0
        pub m_FootstepType: [u8; 0x8], // 0x58
        pub m_OverrideSoundName: [u8; 0x8], // 0x60
        pub m_DebugAnimSourceString: [u8; 0x8], // 0x68
        pub m_BoneName: [u8; 0x8], // 0x70
        pub m_footstepJumpPhase: [u8; 0x8], // 0x78
    }
    #[repr(C)]
    pub struct CEnumAnimParameter {
        pub pad_0: [u8; 0x88], // 0x0
        pub m_defaultValue: [u8; 0x8], // 0x88
        pub m_enumOptions: [u8; 0x18], // 0x90
        pub m_vecEnumReferenced: [u8; 0x30], // 0xA8
    }
    #[repr(C)]
    pub struct CHandshakeAnimTagBase {
        pub pad_0: [u8; 0x50], // 0x0
        pub m_bIsDisableTag: [u8; 0x8], // 0x50
    }
    #[repr(C)]
    pub struct AnimTagID {
        pub m_id: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CWayPointHelperInstanceData {
        pub m_vMovement: [u8; 0xC], // 0x0
        pub m_vRotation: [u8; 0xC], // 0xC
        pub m_vWaypointPosWS: [u8; 0xC], // 0x18
        pub m_bStopUpdatingWaypointPos: [u8; 0x4], // 0x24
    }
    #[repr(C)]
    pub struct CAnimFrameSegment {
        pub m_nUniqueFrameIndex: [u8; 0x4], // 0x0
        pub m_nLocalElementMasks: [u8; 0x4], // 0x4
        pub m_nLocalChannel: [u8; 0x8], // 0x8
        pub m_container: [u8; 0x10], // 0x10
    }
    #[repr(C)]
    pub struct CSlopeComponentUpdater {
        pub pad_0: [u8; 0x34], // 0x0
        pub m_flTraceDistance: [u8; 0x4], // 0x34
        pub m_hSlopeAngle: [u8; 0x2], // 0x38
        pub m_hSlopeAngleFront: [u8; 0x2], // 0x3A
        pub m_hSlopeAngleSide: [u8; 0x2], // 0x3C
        pub m_hSlopeHeading: [u8; 0x2], // 0x3E
        pub m_hSlopeNormal: [u8; 0x2], // 0x40
        pub m_hSlopeNormal_WorldSpace: [u8; 0x6], // 0x42
    }
    #[repr(C)]
    pub struct CAnimInputDamping {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_speedFunction: [u8; 0x4], // 0x8
        pub m_fSpeedScale: [u8; 0x4], // 0xC
        pub m_fFallingSpeedScale: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CHitBoxSet {
        pub m_name: [u8; 0x8], // 0x0
        pub m_nNameHash: [u8; 0x8], // 0x8
        pub m_HitBoxes: [u8; 0x18], // 0x10
        pub m_SourceFilename: [u8; 0x8], // 0x28
    }
    #[repr(C)]
    pub struct ChainToSolveData_t {
        pub m_nChainIndex: [u8; 0x4], // 0x0
        pub m_SolverSettings: [u8; 0xC], // 0x4
        pub m_TargetSettings: [u8; 0x28], // 0x10
        pub m_DebugSetting: [u8; 0x4], // 0x38
        pub m_flDebugNormalizedValue: [u8; 0x4], // 0x3C
        pub m_vDebugOffset: [u8; 0x10], // 0x40
    }
    #[repr(C)]
    pub struct CConstraintSlave {
        pub m_qBaseOrientation: [u8; 0x10], // 0x0
        pub m_vBasePosition: [u8; 0xC], // 0x10
        pub m_nBoneHash: [u8; 0x4], // 0x1C
        pub m_flWeight: [u8; 0x8], // 0x20
        pub m_sName: [u8; 0x28], // 0x28
    }
    #[repr(C)]
    pub struct PulseRuntimeOutputIndex_t {
        pub m_Value: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CFootCycleDefinition {
        pub m_vStancePositionMS: [u8; 0xC], // 0x0
        pub m_vMidpointPositionMS: [u8; 0xC], // 0xC
        pub m_flStanceDirectionMS: [u8; 0x4], // 0x18
        pub m_vToStrideStartPos: [u8; 0xC], // 0x1C
        pub m_stanceCycle: [u8; 0x4], // 0x28
        pub m_footLiftCycle: [u8; 0x4], // 0x2C
        pub m_footOffCycle: [u8; 0x4], // 0x30
        pub m_footStrikeCycle: [u8; 0x4], // 0x34
        pub m_footLandCycle: [u8; 0x4], // 0x38
    }
    #[repr(C)]
    pub struct CVirtualAnimParameter {
        pub pad_0: [u8; 0x70], // 0x0
        pub m_expressionString: [u8; 0x8], // 0x70
        pub m_eParamType: [u8; 0x8], // 0x78
    }
    #[repr(C)]
    pub struct CMotionMetricEvaluator {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_means: [u8; 0x18], // 0x18
        pub m_standardDeviations: [u8; 0x18], // 0x30
        pub m_flWeight: [u8; 0x4], // 0x48
        pub m_nDimensionStartIndex: [u8; 0x4], // 0x4C
    }
    #[repr(C)]
    pub struct CFutureVelocityMetricEvaluator {
        pub pad_0: [u8; 0x50], // 0x0
        pub m_flDistance: [u8; 0x4], // 0x50
        pub m_flStoppingDistance: [u8; 0x4], // 0x54
        pub m_flTargetSpeed: [u8; 0x4], // 0x58
        pub m_eMode: [u8; 0x4], // 0x5C
    }
    #[repr(C)]
    pub struct CNmSkeleton__SecondarySkeleton_t {
        pub m_attachToBoneID: [u8; 0x8], // 0x0
        pub m_skeleton: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct CAnimUpdateNodeBase {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_nodePath: [u8; 0x30], // 0x18
        pub m_networkMode: [u8; 0x8], // 0x48
        pub m_name: [u8; 0x8], // 0x50
    }
    #[repr(C)]
    pub struct CSetParameterActionUpdater {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_hParam: [u8; 0x2], // 0x18
        pub m_value: [u8; 0x16], // 0x1A
    }
    #[repr(C)]
    pub struct CNmFixedWeightBoneMaskNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_flBoneWeight: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct SkeletonAnimCapture_t__FrameStamp_t {
        pub m_flTime: [u8; 0x4], // 0x0
        pub m_flEntitySimTime: [u8; 0x4], // 0x4
        pub m_bTeleportTick: [u8; 0x1], // 0x8
        pub m_bPredicted: [u8; 0x3], // 0x9
        pub m_flCurTime: [u8; 0x4], // 0xC
        pub m_flRealTime: [u8; 0x4], // 0x10
        pub m_nFrameCount: [u8; 0x4], // 0x14
        pub m_nTickCount: [u8; 0x4], // 0x18
    }
    #[repr(C)]
    pub struct CPulse_DomainValue {
        pub m_nType: [u8; 0x8], // 0x0
        pub m_Value: [u8; 0x8], // 0x8
        pub m_RequiredRuntimeType: [u8; 0x20], // 0x10
    }
    #[repr(C)]
    pub struct CBonePositionMetricEvaluator {
        pub pad_0: [u8; 0x50], // 0x0
        pub m_nBoneIndex: [u8; 0x8], // 0x50
    }
    #[repr(C)]
    pub struct CRenderBufferBinding {
        pub m_hBuffer: [u8; 0x10], // 0x0
        pub m_nBindOffsetBytes: [u8; 0x10], // 0x10
    }
    #[repr(C)]
    pub struct CParticleCollectionRendererFloatInput {
        pub pad_0: [u8; 0x178], // 0x0
    }
    #[repr(C)]
    pub struct CNmParameterizedBlendNode__Parameterization_t {
        pub m_blendRanges: [u8; 0x48], // 0x0
        pub m_parameterRange: [u8; 0x8], // 0x48
    }
    #[repr(C)]
    pub struct CNmEntityAttributeIntEvent {
        pub pad_0: [u8; 0x38], // 0x0
        pub m_nIntValue: [u8; 0x8], // 0x38
    }
    #[repr(C)]
    pub struct CNmNotNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nInputValueNodeIdx: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CMeshletDescriptor {
        pub m_PackedAABB: [u8; 0x8], // 0x0
        pub m_CullingData: [u8; 0x4], // 0x8
        pub m_nVertexOffset: [u8; 0x4], // 0xC
        pub m_nTriangleOffset: [u8; 0x4], // 0x10
        pub m_nVertexCount: [u8; 0x1], // 0x14
        pub m_nTriangleCount: [u8; 0x1], // 0x15
        pub m_nBoneIndex: [u8; 0x2], // 0x16
    }
    #[repr(C)]
    pub struct CMorphSetData {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nWidth: [u8; 0x4], // 0x10
        pub m_nHeight: [u8; 0x4], // 0x14
        pub m_bundleTypes: [u8; 0x18], // 0x18
        pub m_morphDatas: [u8; 0x18], // 0x30
        pub m_pTextureAtlas: [u8; 0x8], // 0x48
        pub m_FlexDesc: [u8; 0x18], // 0x50
        pub m_FlexControllers: [u8; 0x18], // 0x68
        pub m_FlexRules: [u8; 0x18], // 0x80
    }
    #[repr(C)]
    pub struct CNmAndNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_conditionNodeIndices: [u8; 0x10], // 0x10
    }
    #[repr(C)]
    pub struct CMorphConstraint {
        pub pad_0: [u8; 0x60], // 0x0
        pub m_sTargetMorph: [u8; 0x8], // 0x60
        pub m_nSlaveChannel: [u8; 0x4], // 0x68
        pub m_flMin: [u8; 0x4], // 0x6C
        pub m_flMax: [u8; 0x10], // 0x70
    }
    #[repr(C)]
    pub struct CClothSettingsAnimTag {
        pub pad_0: [u8; 0x58], // 0x0
        pub m_flStiffness: [u8; 0x4], // 0x58
        pub m_flEaseIn: [u8; 0x4], // 0x5C
        pub m_flEaseOut: [u8; 0x8], // 0x60
        pub m_nVertexSet: [u8; 0x8], // 0x68
    }
    #[repr(C)]
    pub struct CAnimDesc_Flag {
        pub m_bLooping: [u8; 0x1], // 0x0
        pub m_bAllZeros: [u8; 0x1], // 0x1
        pub m_bHidden: [u8; 0x1], // 0x2
        pub m_bDelta: [u8; 0x1], // 0x3
        pub m_bLegacyWorldspace: [u8; 0x1], // 0x4
        pub m_bModelDoc: [u8; 0x1], // 0x5
        pub m_bImplicitSeqIgnoreDelta: [u8; 0x1], // 0x6
        pub m_bAnimGraphAdditive: [u8; 0x1], // 0x7
    }
    #[repr(C)]
    pub struct CNmBlend2DNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_sourceNodeIndices: [u8; 0x18], // 0x10
        pub m_values: [u8; 0x58], // 0x28
        pub m_indices: [u8; 0x28], // 0x80
        pub m_hullIndices: [u8; 0x18], // 0xA8
        pub m_nInputParameterNodeIdx0: [u8; 0x2], // 0xC0
        pub m_nInputParameterNodeIdx1: [u8; 0x2], // 0xC2
        pub m_bAllowLooping: [u8; 0x4], // 0xC4
    }
    #[repr(C)]
    pub struct CNmFloatChannelData__ChannelSettings_t {
        pub m_range: [u8; 0x8], // 0x0
        pub m_bIsStatic: [u8; 0x4], // 0x8
    }
    #[repr(C)]
    pub struct CBlendCurve {
        pub m_flControlPoint1: [u8; 0x4], // 0x0
        pub m_flControlPoint2: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct CNmSkeleton__ContactConfig_t {
        pub m_ID: [u8; 0x8], // 0x0
        pub m_nBoneIdx: [u8; 0x4], // 0x8
        pub m_vBoneLocalProbeDir: [u8; 0xC], // 0xC
        pub m_flProbeMaxDist: [u8; 0x8], // 0x18
        pub m_audioInfo: [u8; 0x18], // 0x20
    }
    #[repr(C)]
    pub struct CNmGraphNode__CDefinition {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_nNodeIdx: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct CAnimationGraphVisualizerSphere {
        pub pad_0: [u8; 0x40], // 0x0
        pub m_vWsPosition: [u8; 0x10], // 0x40
        pub m_flRadius: [u8; 0x4], // 0x50
        pub m_Color: [u8; 0xC], // 0x54
    }
    #[repr(C)]
    pub struct CNmClip__ModelSpaceSamplingChainLink_t {
        pub m_nBoneIdx: [u8; 0x4], // 0x0
        pub m_nParentBoneIdx: [u8; 0x4], // 0x4
        pub m_nParentChainLinkIdx: [u8; 0x4], // 0x8
    }
    #[repr(C)]
    pub struct CAnimUserDifference {
        pub m_name: [u8; 0x10], // 0x0
        pub m_nType: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CNmDurationScaleNode__CDefinition {
        pub pad_0: [u8; 0x20], // 0x0
    }
    #[repr(C)]
    pub struct CTransitionUpdateData {
        pub m_srcStateIndex: [u8; 0x1], // 0x0
        pub m_destStateIndex: [u8; 0x2], // 0x1
    }
    #[repr(C)]
    pub struct PulseRuntimeBlackboardReferenceIndex_t {
        pub m_Value: [u8; 0x2], // 0x0
    }
    #[repr(C)]
    pub struct CNmContactEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_configID: [u8; 0x8], // 0x18
        pub m_probeBoneID: [u8; 0x8], // 0x20
        pub m_vBoneLocalProbeDir: [u8; 0xC], // 0x28
        pub m_flProbeMaxDist: [u8; 0x4], // 0x34
        pub m_audioInfo: [u8; 0x18], // 0x38
    }
    #[repr(C)]
    pub struct CMovementHandshakeAnimTag {
        pub pad_0: [u8; 0x58], // 0x0
    }
    #[repr(C)]
    pub struct CBoneConstraintPoseSpaceBone__Input_t {
        pub m_inputValue: [u8; 0x10], // 0x0
        pub m_outputTransformList: [u8; 0x18], // 0x10
    }
    #[repr(C)]
    pub struct CSeqMultiFetch {
        pub m_flags: [u8; 0x8], // 0x0
        pub m_localReferenceArray: [u8; 0x18], // 0x8
        pub m_nGroupSize: [u8; 0x8], // 0x20
        pub m_nLocalPose: [u8; 0x8], // 0x28
        pub m_poseKeyArray0: [u8; 0x18], // 0x30
        pub m_poseKeyArray1: [u8; 0x18], // 0x48
        pub m_nLocalCyclePoseParameter: [u8; 0x4], // 0x60
        pub m_bCalculatePoseParameters: [u8; 0x1], // 0x64
        pub m_bFixedBlendWeight: [u8; 0x3], // 0x65
        pub m_flFixedBlendWeightVals: [u8; 0x8], // 0x68
    }
    #[repr(C)]
    pub struct CPhysSurfacePropertiesSoundNames {
        pub m_impactSoft: [u8; 0x8], // 0x0
        pub m_impactHard: [u8; 0x8], // 0x8
        pub m_scrapeSmooth: [u8; 0x8], // 0x10
        pub m_scrapeRough: [u8; 0x8], // 0x18
        pub m_bulletImpact: [u8; 0x8], // 0x20
        pub m_rolling: [u8; 0x8], // 0x28
        pub m_break: [u8; 0x8], // 0x30
        pub m_strain: [u8; 0x8], // 0x38
        pub m_meleeImpact: [u8; 0x8], // 0x40
        pub m_pushOff: [u8; 0x8], // 0x48
        pub m_skidStop: [u8; 0x8], // 0x50
        pub m_resonant: [u8; 0x8], // 0x58
    }
    #[repr(C)]
    pub struct NmBoneMaskSetDefinition_t {
        pub m_ID: [u8; 0x8], // 0x0
        pub m_primaryWeightList: [u8; 0x110], // 0x8
        pub m_secondaryWeightLists: [u8; 0x10], // 0x118
    }
    #[repr(C)]
    pub struct CAudioAnimTag {
        pub pad_0: [u8; 0x58], // 0x0
        pub m_clipName: [u8; 0x8], // 0x58
        pub m_attachmentName: [u8; 0x8], // 0x60
        pub m_flVolume: [u8; 0x4], // 0x68
        pub m_bStopWhenTagEnds: [u8; 0x1], // 0x6C
        pub m_bStopWhenGraphEnds: [u8; 0x1], // 0x6D
        pub m_bPlayOnServer: [u8; 0x1], // 0x6E
        pub m_bPlayOnClient: [u8; 0x1], // 0x6F
    }
    #[repr(C)]
    pub struct CTurnHelperUpdateNode {
        pub pad_0: [u8; 0x74], // 0x0
        pub m_facingTarget: [u8; 0x4], // 0x74
        pub m_turnStartTimeOffset: [u8; 0x4], // 0x78
        pub m_turnDuration: [u8; 0x4], // 0x7C
        pub m_bMatchChildDuration: [u8; 0x4], // 0x80
        pub m_manualTurnOffset: [u8; 0x4], // 0x84
        pub m_bUseManualTurnOffset: [u8; 0x8], // 0x88
    }
    #[repr(C)]
    pub struct CAnimationGroup {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nFlags: [u8; 0x8], // 0x10
        pub m_name: [u8; 0x48], // 0x18
        pub m_localHAnimArray_Handle: [u8; 0x18], // 0x60
        pub m_includedGroupArray_Handle: [u8; 0x18], // 0x78
        pub m_directHSeqGroup_Handle: [u8; 0x8], // 0x90
        pub m_decodeKey: [u8; 0x78], // 0x98
        pub m_szScripts: [u8; 0x18], // 0x110
        pub m_AdditionalExtRefs: [u8; 0x20], // 0x128
    }
    #[repr(C)]
    pub struct CPulse_TempVarInfo {
        pub m_Name: [u8; 0x10], // 0x0
        pub m_Type: [u8; 0x18], // 0x10
        pub m_nEditorNodeID: [u8; 0x4], // 0x28
        pub m_bIsObservable: [u8; 0x4], // 0x2C
    }
    #[repr(C)]
    pub struct NmContactAudioInfo_t {
        pub m_audioActionID: [u8; 0x8], // 0x0
        pub m_audioTypeID: [u8; 0x8], // 0x8
        pub m_soundeventOverrideID: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct NmSyncTrackTime_t {
        pub m_nEventIdx: [u8; 0x4], // 0x0
        pub m_percentageThrough: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct CNmClip {
        pub m_skeleton: [u8; 0x8], // 0x0
        pub m_nNumFrames: [u8; 0x4], // 0x8
        pub m_flDuration: [u8; 0x4], // 0xC
        pub m_compressedPoseData: [u8; 0x10], // 0x10
        pub m_trackCompressionSettings: [u8; 0x18], // 0x20
        pub m_compressedPoseOffsets: [u8; 0x40], // 0x38
        pub m_secondaryAnimations: [u8; 0x20], // 0x78
        pub m_floatChannelData: [u8; 0x28], // 0x98
        pub m_syncTrack: [u8; 0xB0], // 0xC0
        pub m_rootMotion: [u8; 0x50], // 0x170
        pub m_bIsAdditive: [u8; 0x8], // 0x1C0
        pub m_modelSpaceSamplingChain: [u8; 0x18], // 0x1C8
        pub m_modelSpaceBoneSamplingIndices: [u8; 0x20], // 0x1E0
    }
    #[repr(C)]
    pub struct CToggleComponentActionUpdater {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_componentID: [u8; 0x4], // 0x18
        pub m_bSetEnabled: [u8; 0x4], // 0x1C
    }
    #[repr(C)]
    pub struct CNmOverlayBlendTask {
        pub pad_0: [u8; 0x100], // 0x0
    }
    #[repr(C)]
    pub struct CNmSpeedScaleBaseNode__CDefinition {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_nInputValueNodeIdx: [u8; 0x4], // 0x18
        pub m_flDefaultInputValue: [u8; 0x4], // 0x1C
    }
    #[repr(C)]
    pub struct CNmValueNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
    }
    #[repr(C)]
    pub struct CAnimationGraphVisualizerPrimitiveBase {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_Type: [u8; 0x4], // 0x8
        pub m_OwningAnimNodePaths: [u8; 0x2C], // 0xC
        pub m_nOwningAnimNodePathCount: [u8; 0x8], // 0x38
    }
    #[repr(C)]
    pub struct CBindPoseUpdateNode {
        pub pad_0: [u8; 0x60], // 0x0
    }
    #[repr(C)]
    pub struct NmSyncTrackTimeRange_t {
        pub m_startTime: [u8; 0x8], // 0x0
        pub m_endTime: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct CAnimationGraphVisualizerText {
        pub pad_0: [u8; 0x40], // 0x0
        pub m_vWsPosition: [u8; 0x10], // 0x40
        pub m_Color: [u8; 0x8], // 0x50
        pub m_Text: [u8; 0x8], // 0x58
    }
    #[repr(C)]
    pub struct CFootTrajectory {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_vOffset: [u8; 0xC], // 0x8
        pub m_flRotationOffset: [u8; 0x4], // 0x14
        pub m_flProgression: [u8; 0x8], // 0x18
    }
    #[repr(C)]
    pub struct CMotionMatchingUpdateNode {
        pub pad_0: [u8; 0x58], // 0x0
        pub m_dataSet: [u8; 0x20], // 0x58
        pub m_metrics: [u8; 0x18], // 0x78
        pub m_weights: [u8; 0x50], // 0x90
        pub m_bSearchEveryTick: [u8; 0x4], // 0xE0
        pub m_flSearchInterval: [u8; 0x4], // 0xE4
        pub m_bSearchWhenClipEnds: [u8; 0x1], // 0xE8
        pub m_bSearchWhenGoalChanges: [u8; 0x3], // 0xE9
        pub m_blendCurve: [u8; 0x8], // 0xEC
        pub m_flSampleRate: [u8; 0x4], // 0xF4
        pub m_flBlendTime: [u8; 0x4], // 0xF8
        pub m_bLockClipWhenWaning: [u8; 0x4], // 0xFC
        pub m_flSelectionThreshold: [u8; 0x4], // 0x100
        pub m_flReselectionTimeWindow: [u8; 0x4], // 0x104
        pub m_bEnableRotationCorrection: [u8; 0x1], // 0x108
        pub m_bGoalAssist: [u8; 0x3], // 0x109
        pub m_flGoalAssistDistance: [u8; 0x4], // 0x10C
        pub m_flGoalAssistTolerance: [u8; 0x8], // 0x110
        pub m_distanceScale_Damping: [u8; 0x18], // 0x118
        pub m_flDistanceScale_OuterRadius: [u8; 0x4], // 0x130
        pub m_flDistanceScale_InnerRadius: [u8; 0x4], // 0x134
        pub m_flDistanceScale_MaxScale: [u8; 0x4], // 0x138
        pub m_flDistanceScale_MinScale: [u8; 0x4], // 0x13C
        pub m_bEnableDistanceScaling: [u8; 0x8], // 0x140
    }
    #[repr(C)]
    pub struct CNmReferencePoseNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
    }
    #[repr(C)]
    pub struct CSeqS1SeqDesc {
        pub m_sName: [u8; 0x10], // 0x0
        pub m_flags: [u8; 0x10], // 0x10
        pub m_fetch: [u8; 0x70], // 0x20
        pub m_nLocalWeightlist: [u8; 0x8], // 0x90
        pub m_autoLayerArray: [u8; 0x18], // 0x98
        pub m_IKLockArray: [u8; 0x18], // 0xB0
        pub m_transition: [u8; 0x8], // 0xC8
        pub m_SequenceKeys: [u8; 0x10], // 0xD0
        pub m_LegacyKeyValueText: [u8; 0x10], // 0xE0
        pub m_activityArray: [u8; 0x18], // 0xF0
        pub m_footMotion: [u8; 0x18], // 0x108
    }
    #[repr(C)]
    pub struct CFlexController {
        pub m_szName: [u8; 0x8], // 0x0
        pub m_szType: [u8; 0x8], // 0x8
        pub min: [u8; 0x4], // 0x10
        pub max: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct SkeletonDemoDb_t {
        pub m_AnimCaptures: [u8; 0x18], // 0x0
        pub m_CameraTrack: [u8; 0x18], // 0x18
        pub m_flRecordingTime: [u8; 0x8], // 0x30
    }
    #[repr(C)]
    pub struct CNmFloatRangeComparisonNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_range: [u8; 0x8], // 0x10
        pub m_nInputValueNodeIdx: [u8; 0x2], // 0x18
        pub m_bIsInclusiveCheck: [u8; 0x6], // 0x1A
    }
    #[repr(C)]
    pub struct CMotionNodeSequence {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_tags: [u8; 0x18], // 0x28
        pub m_hSequence: [u8; 0x4], // 0x40
        pub m_flPlaybackSpeed: [u8; 0x4], // 0x44
    }
    #[repr(C)]
    pub struct CNmTwoBoneIKNode__CDefinition {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_effectorBoneID: [u8; 0x8], // 0x18
        pub m_nEffectorTargetNodeIdx: [u8; 0x2], // 0x20
        pub m_nEnabledNodeIdx: [u8; 0x2], // 0x22
        pub m_flBlendTimeSeconds: [u8; 0x4], // 0x24
        pub m_blendMode: [u8; 0x1], // 0x28
        pub m_bIsTargetInWorldSpace: [u8; 0x3], // 0x29
        pub m_flChainRotationWeight: [u8; 0x4], // 0x2C
    }
    #[repr(C)]
    pub struct CNmGraphInstance {
        pub pad_0: [u8; 0x3B0], // 0x0
    }
    #[repr(C)]
    pub struct CFlexDesc {
        pub m_szFacs: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct CRenderMesh {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_sceneObjects: [u8; 0xC0], // 0x10
        pub m_constraints: [u8; 0x10], // 0xD0
        pub m_skeleton: [u8; 0x118], // 0xE0
        pub m_bUseUV2ForCharting: [u8; 0x1], // 0x1F8
        pub m_bEmbeddedMapMesh: [u8; 0x27], // 0x1F9
        pub m_meshDeformParams: [u8; 0x10], // 0x220
        pub m_pGroomData: [u8; 0x8], // 0x230
    }
    #[repr(C)]
    pub struct CAnimSkeleton {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_localSpaceTransforms: [u8; 0x18], // 0x10
        pub m_modelSpaceTransforms: [u8; 0x18], // 0x28
        pub m_boneNames: [u8; 0x18], // 0x40
        pub m_children: [u8; 0x18], // 0x58
        pub m_parents: [u8; 0x18], // 0x70
        pub m_feet: [u8; 0x18], // 0x88
        pub m_morphNames: [u8; 0x18], // 0xA0
        pub m_lodBoneCounts: [u8; 0x18], // 0xB8
    }
    #[repr(C)]
    pub struct PulseRuntimeConstantIndex_t {
        pub m_Value: [u8; 0x2], // 0x0
    }
    #[repr(C)]
    pub struct CFootAdjustmentInstanceData {
        pub pad_0: [u8; 0xC], // 0x0
        pub m_flStartTime: [u8; 0xC], // 0xC
        pub m_flDuration: [u8; 0x24], // 0x18
        pub m_flStartHeadingWS: [u8; 0xC], // 0x3C
    }
    #[repr(C)]
    pub struct CNmBodyGroupNode__CDefinition {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_nEnabledNodeIdx: [u8; 0x8], // 0x18
        pub m_event: [u8; 0x30], // 0x20
    }
    #[repr(C)]
    pub struct CNmTimeControlledClipNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nPlayInReverseValueNodeIdx: [u8; 0x2], // 0x10
        pub m_bSampleRootMotion: [u8; 0x2], // 0x12
        pub m_nDataSlotIdx: [u8; 0x2], // 0x14
        pub m_nTimeValueNodeIdx: [u8; 0x2], // 0x16
        pub m_graphEvents: [u8; 0x28], // 0x18
    }
    #[repr(C)]
    pub struct VPhysics2ShapeDef_t {
        pub m_spheres: [u8; 0x10], // 0x0
        pub m_capsules: [u8; 0x10], // 0x10
        pub m_hulls: [u8; 0x10], // 0x20
        pub m_meshes: [u8; 0x10], // 0x30
        pub m_compounds: [u8; 0x10], // 0x40
        pub m_CollisionAttributeIndices: [u8; 0x18], // 0x50
    }
    #[repr(C)]
    pub struct CNmFloatCurveNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nInputValueNodeIdx: [u8; 0x8], // 0x10
        pub m_curve: [u8; 0x40], // 0x18
    }
    #[repr(C)]
    pub struct CAnimationGraphVisualizerAxis {
        pub pad_0: [u8; 0x40], // 0x0
        pub m_xWsTransform: [u8; 0x20], // 0x40
        pub m_flAxisSize: [u8; 0x10], // 0x60
    }
    #[repr(C)]
    pub struct CTwistConstraint {
        pub pad_0: [u8; 0x60], // 0x0
        pub m_bInverse: [u8; 0x10], // 0x60
        pub m_qParentBindRotation: [u8; 0x10], // 0x70
        pub m_qChildBindRotation: [u8; 0x10], // 0x80
    }
    #[repr(C)]
    pub struct PulseDocNodeID_t {
        pub m_Value: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct ModelBoneFlexDriverControl_t {
        pub m_nBoneComponent: [u8; 0x8], // 0x0
        pub m_flexController: [u8; 0x8], // 0x8
        pub m_flexControllerToken: [u8; 0x4], // 0x10
        pub m_flMin: [u8; 0x4], // 0x14
        pub m_flMax: [u8; 0x8], // 0x18
    }
    #[repr(C)]
    pub struct CParticleCollectionFloatInput {
        pub pad_0: [u8; 0x178], // 0x0
    }
    #[repr(C)]
    pub struct CSeqCmdLayer {
        pub m_cmd: [u8; 0x2], // 0x0
        pub m_nLocalReference: [u8; 0x2], // 0x2
        pub m_nLocalBonemask: [u8; 0x2], // 0x4
        pub m_nDstResult: [u8; 0x2], // 0x6
        pub m_nSrcResult: [u8; 0x2], // 0x8
        pub m_bSpline: [u8; 0x2], // 0xA
        pub m_flVar1: [u8; 0x4], // 0xC
        pub m_flVar2: [u8; 0x4], // 0x10
        pub m_nLineNumber: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct FootPinningPoseOpFixedData_t {
        pub m_footInfo: [u8; 0x18], // 0x0
        pub m_flBlendTime: [u8; 0x4], // 0x18
        pub m_flLockBreakDistance: [u8; 0x4], // 0x1C
        pub m_flMaxLegTwist: [u8; 0x4], // 0x20
        pub m_nHipBoneIndex: [u8; 0x4], // 0x24
        pub m_bApplyLegTwistLimits: [u8; 0x1], // 0x28
        pub m_bApplyFootRotationLimits: [u8; 0x7], // 0x29
    }
    #[repr(C)]
    pub struct RenderSkeletonBone_t {
        pub m_boneName: [u8; 0x8], // 0x0
        pub m_parentName: [u8; 0x8], // 0x8
        pub m_invBindPose: [u8; 0x30], // 0x10
        pub m_bbox: [u8; 0x18], // 0x40
        pub m_flSphereRadius: [u8; 0x8], // 0x58
    }
    #[repr(C)]
    pub struct CDistanceRemainingMetricEvaluator {
        pub pad_0: [u8; 0x50], // 0x0
        pub m_flMaxDistance: [u8; 0x4], // 0x50
        pub m_flMinDistance: [u8; 0x4], // 0x54
        pub m_flStartGoalFilterDistance: [u8; 0x4], // 0x58
        pub m_flMaxGoalOvershootScale: [u8; 0x4], // 0x5C
        pub m_bFilterFixedMinDistance: [u8; 0x1], // 0x60
        pub m_bFilterGoalDistance: [u8; 0x1], // 0x61
        pub m_bFilterGoalOvershoot: [u8; 0x6], // 0x62
    }
    #[repr(C)]
    pub struct CDirectPlaybackUpdateNode {
        pub pad_0: [u8; 0x74], // 0x0
        pub m_bFinishEarly: [u8; 0x1], // 0x74
        pub m_bResetOnFinish: [u8; 0x3], // 0x75
        pub m_allTags: [u8; 0x18], // 0x78
    }
    #[repr(C)]
    pub struct CNmIDEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_ID: [u8; 0x8], // 0x18
        pub m_secondaryID: [u8; 0x8], // 0x20
    }
    #[repr(C)]
    pub struct CFlexRule {
        pub m_nFlex: [u8; 0x8], // 0x0
        pub m_FlexOps: [u8; 0x18], // 0x8
    }
    #[repr(C)]
    pub struct ScriptInfo_t {
        pub m_code: [u8; 0x8], // 0x0
        pub m_paramsModified: [u8; 0x18], // 0x8
        pub m_proxyReadParams: [u8; 0x18], // 0x20
        pub m_proxyWriteParams: [u8; 0x18], // 0x38
        pub m_eScriptType: [u8; 0x8], // 0x50
    }
    #[repr(C)]
    pub struct CBoneConstraintRbf {
        pub pad_0: [u8; 0x20], // 0x0
        pub m_inputBones: [u8; 0x18], // 0x20
        pub m_outputBones: [u8; 0x90], // 0x38
    }
    #[repr(C)]
    pub struct CNetworkedCycle {
        pub m_flCycleUnclamped: [u8; 0x4], // 0x0
        pub m_flPrevCycleUnclamped: [u8; 0xC], // 0x4
        pub m_flCyclesPerSecond: [u8; 0xC], // 0x10
        pub m_flCycleZeroTime: [u8; 0xC], // 0x1C
        pub m_resetCount: [u8; 0xC], // 0x28
    }
    #[repr(C)]
    pub struct CNmSoundEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_relevance: [u8; 0x8], // 0x18
        pub m_name: [u8; 0x8], // 0x20
        pub m_position: [u8; 0x8], // 0x28
        pub m_attachmentName: [u8; 0x8], // 0x30
        pub m_tags: [u8; 0x8], // 0x38
        pub m_bContinuePlayingSoundAtDurationEnd: [u8; 0x4], // 0x40
        pub m_flDurationInterruptionThreshold: [u8; 0x4], // 0x44
    }
    #[repr(C)]
    pub struct CRenderGroom {
        pub m_hairs: [u8; 0x18], // 0x0
        pub m_hairPositionOffsets: [u8; 0x28], // 0x18
        pub m_hSimParamsMat: [u8; 0x8], // 0x40
        pub m_strandSegmentCountHist: [u8; 0x30], // 0x48
        pub m_nMaxSegmentsPerHairStrand: [u8; 0x4], // 0x78
        pub m_nGuideHairCount: [u8; 0x4], // 0x7C
        pub m_nHairCount: [u8; 0x4], // 0x80
        pub m_nTotalVertexCount: [u8; 0x4], // 0x84
        pub m_nTotalSegmentCount: [u8; 0x4], // 0x88
        pub m_nGroomGroupID: [u8; 0x4], // 0x8C
        pub m_nAttachBoneIdx: [u8; 0x4], // 0x90
        pub m_nAttachMeshIdx: [u8; 0x4], // 0x94
        pub m_nAttachMeshDrawCallIdx: [u8; 0x14], // 0x98
        pub m_bEnableSimulation: [u8; 0x4], // 0xAC
    }
    #[repr(C)]
    pub struct CNmParameterizedClipSelectorNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_optionNodeIndices: [u8; 0x18], // 0x10
        pub m_optionWeights: [u8; 0x10], // 0x28
        pub m_parameterNodeIdx: [u8; 0x2], // 0x38
        pub m_bIgnoreInvalidOptions: [u8; 0x1], // 0x3A
        pub m_bHasWeightsSet: [u8; 0x5], // 0x3B
    }
    #[repr(C)]
    pub struct CTiltTwistConstraint {
        pub pad_0: [u8; 0x60], // 0x0
        pub m_nTargetAxis: [u8; 0x4], // 0x60
        pub m_nSlaveAxis: [u8; 0x2C], // 0x64
    }
    #[repr(C)]
    pub struct CNmSpeedScaleNode__CDefinition {
        pub pad_0: [u8; 0x20], // 0x0
    }
    #[repr(C)]
    pub struct CVPhysXSurfacePropertiesList {
        pub m_surfacePropertiesList: [u8; 0x18], // 0x0
    }
    #[repr(C)]
    pub struct CNmFloatSpringNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_flStartValue: [u8; 0x4], // 0x10
        pub m_flHertz: [u8; 0x4], // 0x14
        pub m_flDampingRatio: [u8; 0x4], // 0x18
        pub m_nInputValueNodeIdx: [u8; 0x2], // 0x1C
        pub m_bUseStartValue: [u8; 0x2], // 0x1E
    }
    #[repr(C)]
    pub struct RenderHairStrandInfo_t {
        pub m_nGuideHairIndices_nSurfaceTriIndex: [u8; 0x8], // 0x0
        pub m_vGuideBary_vBaseBary: [u8; 0x8], // 0x8
        pub m_vRootOffset_flLengthScale: [u8; 0x8], // 0x10
        pub m_nPackedBaseUv: [u8; 0x4], // 0x18
        pub m_nPackedSurfaceNormalOs: [u8; 0x4], // 0x1C
        pub m_nPackedSurfaceTangentOs: [u8; 0x4], // 0x20
        pub m_nDataOffset_Segments: [u8; 0x4], // 0x24
    }
    #[repr(C)]
    pub struct CCycleControlClipUpdateNode {
        pub pad_0: [u8; 0x60], // 0x0
        pub m_tags: [u8; 0x1C], // 0x60
        pub m_hSequence: [u8; 0x4], // 0x7C
        pub m_duration: [u8; 0x4], // 0x80
        pub m_valueSource: [u8; 0x4], // 0x84
        pub m_paramIndex: [u8; 0x2], // 0x88
        pub m_bLockWhenWaning: [u8; 0x6], // 0x8A
    }
    #[repr(C)]
    pub struct CNmTargetPointNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nInputValueNodeIdx: [u8; 0x2], // 0x10
        pub m_bIsWorldSpaceTarget: [u8; 0x6], // 0x12
    }
    #[repr(C)]
    pub struct CNmTargetSelectorNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_optionNodeIndices: [u8; 0x18], // 0x10
        pub m_flOrientationScoreWeight: [u8; 0x4], // 0x28
        pub m_flPositionScoreWeight: [u8; 0x4], // 0x2C
        pub m_parameterNodeIdx: [u8; 0x2], // 0x30
        pub m_bIgnoreInvalidOptions: [u8; 0x1], // 0x32
        pub m_bIsWorldSpaceTarget: [u8; 0x5], // 0x33
        pub m_alignmentBoneID: [u8; 0x8], // 0x38
    }
    #[repr(C)]
    pub struct CPulse_RegisterInfo {
        pub m_nReg: [u8; 0x8], // 0x0
        pub m_Type: [u8; 0x18], // 0x8
        pub m_OriginName: [u8; 0x38], // 0x20
        pub m_nWrittenByInstruction: [u8; 0x4], // 0x58
        pub m_nLastReadByInstruction: [u8; 0x4], // 0x5C
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
        pub m_poses: [u8; 0x18], // 0x10
        pub m_nBoneCount: [u8; 0x4], // 0x28
        pub m_nMorphCount: [u8; 0x4], // 0x2C
    }
    #[repr(C)]
    pub struct LookAtOpFixedSettings_t {
        pub m_attachment: [u8; 0x80], // 0x0
        pub m_damping: [u8; 0x18], // 0x80
        pub m_bones: [u8; 0x18], // 0x98
        pub m_flYawLimit: [u8; 0x4], // 0xB0
        pub m_flPitchLimit: [u8; 0x4], // 0xB4
        pub m_flHysteresisInnerAngle: [u8; 0x4], // 0xB8
        pub m_flHysteresisOuterAngle: [u8; 0x4], // 0xBC
        pub m_bRotateYawForward: [u8; 0x1], // 0xC0
        pub m_bMaintainUpDirection: [u8; 0x1], // 0xC1
        pub m_bTargetIsPosition: [u8; 0x1], // 0xC2
        pub m_bUseHysteresis: [u8; 0xD], // 0xC3
    }
    #[repr(C)]
    pub struct CRootMotion {
        pub m_deltaTransform: [u8; 0x10], // 0x0
        pub m_vVelocityMS: [u8; 0xC], // 0x10
        pub m_vUpOverride: [u8; 0xC], // 0x1C
    }
    #[repr(C)]
    pub struct CAnimGraphSettingsManager {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_settingsGroups: [u8; 0x18], // 0x18
    }
    #[repr(C)]
    pub struct CAnimGraphModelBinding {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_modelName: [u8; 0x8], // 0x8
        pub m_pSharedData: [u8; 0x18], // 0x10
    }
    #[repr(C)]
    pub struct CBoneConstraintPoseSpaceBone {
        pub pad_0: [u8; 0x60], // 0x0
        pub m_inputList: [u8; 0x28], // 0x60
    }
    #[repr(C)]
    pub struct CNmTwoBoneIKTask {
        pub pad_0: [u8; 0x70], // 0x0
        pub m_nEffectorBoneIdx: [u8; 0x4], // 0x70
        pub m_nEffectorTargetBoneIdx: [u8; 0xC], // 0x74
        pub m_targetTransform: [u8; 0x70], // 0x80
    }
    #[repr(C)]
    pub struct MotionBlendItem {
        pub m_pChild: [u8; 0x8], // 0x0
        pub m_flKeyValue: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct CBoneConstraintPoseSpaceMorph {
        pub pad_0: [u8; 0x20], // 0x0
        pub m_sBoneName: [u8; 0x8], // 0x20
        pub m_sAttachmentName: [u8; 0x8], // 0x28
        pub m_outputMorph: [u8; 0x18], // 0x30
        pub m_inputList: [u8; 0x18], // 0x48
        pub m_bClamp: [u8; 0x40], // 0x60
    }
    #[repr(C)]
    pub struct CFloatAnimParameter {
        pub pad_0: [u8; 0x80], // 0x0
        pub m_fDefaultValue: [u8; 0x4], // 0x80
        pub m_fMinValue: [u8; 0x4], // 0x84
        pub m_fMaxValue: [u8; 0x4], // 0x88
        pub m_bInterpolate: [u8; 0x4], // 0x8C
    }
    #[repr(C)]
    pub struct CNmContactAudioActionVData {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct CStateActionUpdater {
        pub m_pAction: [u8; 0x8], // 0x0
        pub m_eBehavior: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct CPlayerInputAnimMotorUpdater {
        pub pad_0: [u8; 0x20], // 0x0
        pub m_sampleTimes: [u8; 0x1C], // 0x20
        pub m_flSpringConstant: [u8; 0x4], // 0x3C
        pub m_flAnticipationDistance: [u8; 0x4], // 0x40
        pub m_hAnticipationPosParam: [u8; 0x2], // 0x44
        pub m_hAnticipationHeadingParam: [u8; 0x2], // 0x46
        pub m_bUseAcceleration: [u8; 0x8], // 0x48
    }
    #[repr(C)]
    pub struct CRenderSkeleton {
        pub m_bones: [u8; 0x30], // 0x0
        pub m_boneParents: [u8; 0x18], // 0x30
        pub m_nBoneWeightCount: [u8; 0x8], // 0x48
    }
    #[repr(C)]
    pub struct CSeqIKLock {
        pub m_flPosWeight: [u8; 0x4], // 0x0
        pub m_flAngleWeight: [u8; 0x4], // 0x4
        pub m_nLocalBone: [u8; 0x2], // 0x8
        pub m_bBonesOrientedAlongPositiveX: [u8; 0x2], // 0xA
    }
    #[repr(C)]
    pub struct CAnimParamHandleMap {
        pub m_list: [u8; 0x20], // 0x0
    }
    #[repr(C)]
    pub struct CNmFloatClampNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nInputValueNodeIdx: [u8; 0x4], // 0x10
        pub m_clampRange: [u8; 0xC], // 0x14
    }
    #[repr(C)]
    pub struct PulseRuntimeCellIndex_t {
        pub m_Value: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CNmExternalPoseNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_bShouldSampleRootMotion: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CAnimDesc {
        pub m_name: [u8; 0x10], // 0x0
        pub m_flags: [u8; 0x8], // 0x10
        pub fps: [u8; 0x8], // 0x18
        pub m_Data: [u8; 0xD8], // 0x20
        pub m_movementArray: [u8; 0x18], // 0xF8
        pub m_xInitialOffset: [u8; 0x20], // 0x110
        pub m_eventArray: [u8; 0x18], // 0x130
        pub m_activityArray: [u8; 0x18], // 0x148
        pub m_hierarchyArray: [u8; 0x18], // 0x160
        pub framestalltime: [u8; 0x4], // 0x178
        pub m_vecRootMin: [u8; 0xC], // 0x17C
        pub m_vecRootMax: [u8; 0x10], // 0x188
        pub m_vecBoneWorldMin: [u8; 0x18], // 0x198
        pub m_vecBoneWorldMax: [u8; 0x18], // 0x1B0
        pub m_sequenceParams: [u8; 0x8], // 0x1C8
    }
    #[repr(C)]
    pub struct CNmRootMotionOverrideNode__CDefinition {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_desiredMovingVelocityNodeIdx: [u8; 0x2], // 0x18
        pub m_desiredFacingDirectionNodeIdx: [u8; 0x2], // 0x1A
        pub m_linearVelocityLimitNodeIdx: [u8; 0x2], // 0x1C
        pub m_angularVelocityLimitNodeIdx: [u8; 0x2], // 0x1E
        pub m_enabledNodeIdx: [u8; 0x4], // 0x20
        pub m_maxLinearVelocity: [u8; 0x4], // 0x24
        pub m_maxAngularVelocityRadians: [u8; 0x4], // 0x28
        pub m_overrideFlags: [u8; 0x4], // 0x2C
    }
    #[repr(C)]
    pub struct CNmTargetWarpNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nClipReferenceNodeIdx: [u8; 0x2], // 0x10
        pub m_nTargetValueNodeIdx: [u8; 0x2], // 0x12
        pub m_samplingMode: [u8; 0x1], // 0x14
        pub m_targetUpdateRule: [u8; 0x1], // 0x15
        pub m_bAlignWithTargetAtLastWarpEvent: [u8; 0x2], // 0x16
        pub m_flSamplingPositionErrorThresholdSq: [u8; 0x4], // 0x18
        pub m_flMaxTangentLength: [u8; 0x4], // 0x1C
        pub m_flLerpFallbackDistanceThreshold: [u8; 0x4], // 0x20
        pub m_flTargetUpdateDistanceThreshold: [u8; 0x4], // 0x24
        pub m_flTargetUpdateAngleThresholdRadians: [u8; 0x8], // 0x28
        pub m_alignmentBoneID: [u8; 0x8], // 0x30
    }
    #[repr(C)]
    pub struct CPhysSurfacePropertiesPhysics {
        pub m_friction: [u8; 0x4], // 0x0
        pub m_elasticity: [u8; 0x4], // 0x4
        pub m_density: [u8; 0x4], // 0x8
        pub m_thickness: [u8; 0x4], // 0xC
        pub m_softContactFrequency: [u8; 0x4], // 0x10
        pub m_softContactDampingRatio: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct CAnimationGraphVisualizerPie {
        pub pad_0: [u8; 0x40], // 0x0
        pub m_vWsCenter: [u8; 0x10], // 0x40
        pub m_vWsStart: [u8; 0x10], // 0x50
        pub m_vWsEnd: [u8; 0x10], // 0x60
        pub m_Color: [u8; 0x10], // 0x70
    }
    #[repr(C)]
    pub struct NmFloatCurveCompressionSettings_t {
        pub m_range: [u8; 0x8], // 0x0
        pub m_bIsStatic: [u8; 0x4], // 0x8
    }
    #[repr(C)]
    pub struct CBoneConstraintDotToMorph {
        pub pad_0: [u8; 0x20], // 0x0
        pub m_sBoneName: [u8; 0x8], // 0x20
        pub m_sTargetBoneName: [u8; 0x8], // 0x28
        pub m_sMorphChannelName: [u8; 0x8], // 0x30
        pub m_flRemap: [u8; 0x20], // 0x38
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
        pub m_flTraceHeight: [u8; 0x4], // 0x0
        pub m_flTraceRadius: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct ParamSpanSample_t {
        pub m_value: [u8; 0x14], // 0x0
        pub m_flCycle: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct CNmFollowBoneTask {
        pub pad_0: [u8; 0x90], // 0x0
    }
    #[repr(C)]
    pub struct VPhysXConstraintParams_t {
        pub m_nType: [u8; 0x1], // 0x0
        pub m_nTranslateMotion: [u8; 0x1], // 0x1
        pub m_nRotateMotion: [u8; 0x1], // 0x2
        pub m_nFlags: [u8; 0x1], // 0x3
        pub m_anchor: [u8; 0x18], // 0x4
        pub m_axes: [u8; 0x20], // 0x1C
        pub m_maxForce: [u8; 0x4], // 0x3C
        pub m_maxTorque: [u8; 0x4], // 0x40
        pub m_linearLimitValue: [u8; 0x4], // 0x44
        pub m_linearLimitRestitution: [u8; 0x4], // 0x48
        pub m_linearLimitSpring: [u8; 0x4], // 0x4C
        pub m_linearLimitDamping: [u8; 0x4], // 0x50
        pub m_twistLowLimitValue: [u8; 0x4], // 0x54
        pub m_twistLowLimitRestitution: [u8; 0x4], // 0x58
        pub m_twistLowLimitSpring: [u8; 0x4], // 0x5C
        pub m_twistLowLimitDamping: [u8; 0x4], // 0x60
        pub m_twistHighLimitValue: [u8; 0x4], // 0x64
        pub m_twistHighLimitRestitution: [u8; 0x4], // 0x68
        pub m_twistHighLimitSpring: [u8; 0x4], // 0x6C
        pub m_twistHighLimitDamping: [u8; 0x4], // 0x70
        pub m_swing1LimitValue: [u8; 0x4], // 0x74
        pub m_swing1LimitRestitution: [u8; 0x4], // 0x78
        pub m_swing1LimitSpring: [u8; 0x4], // 0x7C
        pub m_swing1LimitDamping: [u8; 0x4], // 0x80
        pub m_swing2LimitValue: [u8; 0x4], // 0x84
        pub m_swing2LimitRestitution: [u8; 0x4], // 0x88
        pub m_swing2LimitSpring: [u8; 0x4], // 0x8C
        pub m_swing2LimitDamping: [u8; 0x4], // 0x90
        pub m_goalPosition: [u8; 0xC], // 0x94
        pub m_goalOrientation: [u8; 0x10], // 0xA0
        pub m_goalAngularVelocity: [u8; 0xC], // 0xB0
        pub m_driveSpringX: [u8; 0x4], // 0xBC
        pub m_driveSpringY: [u8; 0x4], // 0xC0
        pub m_driveSpringZ: [u8; 0x4], // 0xC4
        pub m_driveDampingX: [u8; 0x4], // 0xC8
        pub m_driveDampingY: [u8; 0x4], // 0xCC
        pub m_driveDampingZ: [u8; 0x4], // 0xD0
        pub m_driveSpringTwist: [u8; 0x4], // 0xD4
        pub m_driveSpringSwing: [u8; 0x4], // 0xD8
        pub m_driveSpringSlerp: [u8; 0x4], // 0xDC
        pub m_driveDampingTwist: [u8; 0x4], // 0xE0
        pub m_driveDampingSwing: [u8; 0x4], // 0xE4
        pub m_driveDampingSlerp: [u8; 0x4], // 0xE8
        pub m_solverIterationCount: [u8; 0x4], // 0xEC
        pub m_projectionLinearTolerance: [u8; 0x4], // 0xF0
        pub m_projectionAngularTolerance: [u8; 0x4], // 0xF4
    }
    #[repr(C)]
    pub struct CNmFloatComparisonNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nInputValueNodeIdx: [u8; 0x2], // 0x10
        pub m_nComparandValueNodeIdx: [u8; 0x2], // 0x12
        pub m_comparison: [u8; 0x4], // 0x14
        pub m_flEpsilon: [u8; 0x4], // 0x18
        pub m_flComparisonValue: [u8; 0x4], // 0x1C
    }
    #[repr(C)]
    pub struct CStateUpdateData {
        pub m_name: [u8; 0x8], // 0x0
        pub m_hScript: [u8; 0x8], // 0x8
        pub m_transitionIndices: [u8; 0x18], // 0x10
        pub m_actions: [u8; 0x18], // 0x28
        pub m_stateID: [u8; 0x8], // 0x40
    }
    #[repr(C)]
    pub struct CTurnHelperInstanceData {
        pub m_turnAmount: [u8; 0x4], // 0x0
        pub m_turnStartTime: [u8; 0x4], // 0x4
        pub m_duration: [u8; 0x4], // 0x8
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
        pub m_flCycle: [u8; 0xC], // 0x0
        pub m_flPrevCycle: [u8; 0x10], // 0xC
    }
    #[repr(C)]
    pub struct PulseRuntimeTempVarBankIndex_t {
        pub m_Value: [u8; 0x2], // 0x0
    }
    #[repr(C)]
    pub struct CMoverUpdateNode {
        pub pad_0: [u8; 0x78], // 0x0
        pub m_damping: [u8; 0x18], // 0x78
        pub m_facingTarget: [u8; 0x4], // 0x90
        pub m_hMoveVecParam: [u8; 0x2], // 0x94
        pub m_hMoveHeadingParam: [u8; 0x2], // 0x96
        pub m_hTurnToFaceParam: [u8; 0x4], // 0x98
        pub m_flTurnToFaceOffset: [u8; 0x4], // 0x9C
        pub m_flTurnToFaceLimit: [u8; 0x4], // 0xA0
        pub m_bAdditive: [u8; 0x1], // 0xA4
        pub m_bApplyMovement: [u8; 0x1], // 0xA5
        pub m_bOrientMovement: [u8; 0x1], // 0xA6
        pub m_bApplyRotation: [u8; 0x1], // 0xA7
        pub m_bLimitOnly: [u8; 0x8], // 0xA8
    }
    #[repr(C)]
    pub struct CNmLayerBlendNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nBaseNodeIdx: [u8; 0x2], // 0x10
        pub m_bOnlySampleBaseRootMotion: [u8; 0x6], // 0x12
        pub m_layerDefinition: [u8; 0x30], // 0x18
    }
    #[repr(C)]
    pub struct CNmFootIKNode__CDefinition {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_leftEffectorBoneID: [u8; 0x8], // 0x18
        pub m_rightEffectorBoneID: [u8; 0x8], // 0x20
        pub m_nLeftTargetNodeIdx: [u8; 0x2], // 0x28
        pub m_nRightTargetNodeIdx: [u8; 0x2], // 0x2A
        pub m_nEnabledNodeIdx: [u8; 0x4], // 0x2C
        pub m_flBlendTimeSeconds: [u8; 0x4], // 0x30
        pub m_blendMode: [u8; 0x1], // 0x34
        pub m_bIsTargetInWorldSpace: [u8; 0x3], // 0x35
    }
    #[repr(C)]
    pub struct CAnimMotorUpdaterBase {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_name: [u8; 0x8], // 0x10
        pub m_bDefault: [u8; 0x8], // 0x18
    }
    #[repr(C)]
    pub struct JiggleBoneSettingsList_t {
        pub m_boneSettings: [u8; 0x18], // 0x0
    }
    #[repr(C)]
    pub struct CSubtractUpdateNode {
        pub pad_0: [u8; 0x94], // 0x0
        pub m_footMotionTiming: [u8; 0x4], // 0x94
        pub m_bApplyToFootMotion: [u8; 0x1], // 0x98
        pub m_bApplyChannelsSeparately: [u8; 0x1], // 0x99
        pub m_bUseModelSpace: [u8; 0x6], // 0x9A
    }
    #[repr(C)]
    pub struct PulseGraphInstanceID_t {
        pub m_Value: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CNmFloatRemapNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nInputValueNodeIdx: [u8; 0x4], // 0x10
        pub m_inputRange: [u8; 0x8], // 0x14
        pub m_outputRange: [u8; 0xC], // 0x1C
    }
    #[repr(C)]
    pub struct CPoseHandle {
        pub m_nIndex: [u8; 0x2], // 0x0
        pub m_eType: [u8; 0x2], // 0x2
    }
    #[repr(C)]
    pub struct CNmFootstepEventIDNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nSourceStateNodeIdx: [u8; 0x4], // 0x10
        pub m_eventConditionRules: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct CSolveIKChainUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub m_targetHandles: [u8; 0x18], // 0x70
        pub m_opFixedData: [u8; 0x20], // 0x88
    }
    #[repr(C)]
    pub struct CNmOrNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_conditionNodeIndices: [u8; 0x10], // 0x10
    }
    #[repr(C)]
    pub struct CSeqCmdSeqDesc {
        pub m_sName: [u8; 0x10], // 0x0
        pub m_flags: [u8; 0xC], // 0x10
        pub m_transition: [u8; 0x8], // 0x1C
        pub m_nFrameRangeSequence: [u8; 0x2], // 0x24
        pub m_nFrameCount: [u8; 0x2], // 0x26
        pub m_flFPS: [u8; 0x4], // 0x28
        pub m_nSubCycles: [u8; 0x2], // 0x2C
        pub m_numLocalResults: [u8; 0x2], // 0x2E
        pub m_cmdLayerArray: [u8; 0x18], // 0x30
        pub m_eventArray: [u8; 0x18], // 0x48
        pub m_activityArray: [u8; 0x18], // 0x60
        pub m_poseSettingArray: [u8; 0x18], // 0x78
    }
    #[repr(C)]
    pub struct CBoneMaskUpdateNode {
        pub pad_0: [u8; 0x94], // 0x0
        pub m_nWeightListIndex: [u8; 0x4], // 0x94
        pub m_flRootMotionBlend: [u8; 0x4], // 0x98
        pub m_blendSpace: [u8; 0x4], // 0x9C
        pub m_footMotionTiming: [u8; 0x4], // 0xA0
        pub m_bUseBlendScale: [u8; 0x4], // 0xA4
        pub m_blendValueSource: [u8; 0x4], // 0xA8
        pub m_hBlendParameter: [u8; 0x4], // 0xAC
    }
    #[repr(C)]
    pub struct CLeafUpdateNode {
        pub pad_0: [u8; 0x58], // 0x0
    }
    #[repr(C)]
    pub struct CPulse_Constant {
        pub m_Type: [u8; 0x18], // 0x0
        pub m_Value: [u8; 0x18], // 0x18
    }
    #[repr(C)]
    pub struct CParticleFloatInput {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nType: [u8; 0x4], // 0x10
        pub m_nMapType: [u8; 0x4], // 0x14
        pub m_flLiteralValue: [u8; 0x8], // 0x18
        pub m_NamedValue: [u8; 0x40], // 0x20
        pub m_nControlPoint: [u8; 0x4], // 0x60
        pub m_nScalarAttribute: [u8; 0x4], // 0x64
        pub m_nVectorAttribute: [u8; 0x4], // 0x68
        pub m_nVectorComponent: [u8; 0x4], // 0x6C
        pub m_bReverseOrder: [u8; 0x4], // 0x70
        pub m_flRandomMin: [u8; 0x4], // 0x74
        pub m_flRandomMax: [u8; 0x4], // 0x78
        pub m_bHasRandomSignFlip: [u8; 0x4], // 0x7C
        pub m_nRandomSeed: [u8; 0x4], // 0x80
        pub m_nRandomMode: [u8; 0xC], // 0x84
        pub m_strSnapshotSubset: [u8; 0x8], // 0x90
        pub m_flLOD0: [u8; 0x4], // 0x98
        pub m_flLOD1: [u8; 0x4], // 0x9C
        pub m_flLOD2: [u8; 0x4], // 0xA0
        pub m_flLOD3: [u8; 0x4], // 0xA4
        pub m_nNoiseInputVectorAttribute: [u8; 0x4], // 0xA8
        pub m_flNoiseOutputMin: [u8; 0x4], // 0xAC
        pub m_flNoiseOutputMax: [u8; 0x4], // 0xB0
        pub m_flNoiseScale: [u8; 0x4], // 0xB4
        pub m_vecNoiseOffsetRate: [u8; 0xC], // 0xB8
        pub m_flNoiseOffset: [u8; 0x4], // 0xC4
        pub m_nNoiseOctaves: [u8; 0x4], // 0xC8
        pub m_nNoiseTurbulence: [u8; 0x4], // 0xCC
        pub m_nNoiseType: [u8; 0x4], // 0xD0
        pub m_nNoiseModifier: [u8; 0x4], // 0xD4
        pub m_flNoiseTurbulenceScale: [u8; 0x4], // 0xD8
        pub m_flNoiseTurbulenceMix: [u8; 0x4], // 0xDC
        pub m_flNoiseImgPreviewScale: [u8; 0x4], // 0xE0
        pub m_bNoiseImgPreviewLive: [u8; 0xC], // 0xE4
        pub m_flNoCameraFallback: [u8; 0x4], // 0xF0
        pub m_bUseBoundsCenter: [u8; 0x4], // 0xF4
        pub m_nInputMode: [u8; 0x4], // 0xF8
        pub m_flMultFactor: [u8; 0x4], // 0xFC
        pub m_flInput0: [u8; 0x4], // 0x100
        pub m_flInput1: [u8; 0x4], // 0x104
        pub m_flOutput0: [u8; 0x4], // 0x108
        pub m_flOutput1: [u8; 0x4], // 0x10C
        pub m_flNotchedRangeMin: [u8; 0x4], // 0x110
        pub m_flNotchedRangeMax: [u8; 0x4], // 0x114
        pub m_flNotchedOutputOutside: [u8; 0x4], // 0x118
        pub m_flNotchedOutputInside: [u8; 0x4], // 0x11C
        pub m_nRoundType: [u8; 0x4], // 0x120
        pub m_nBiasType: [u8; 0x4], // 0x124
        pub m_flBiasParameter: [u8; 0x8], // 0x128
        pub m_Curve: [u8; 0x40], // 0x130
        pub m_flCompareValue: [u8; 0x8], // 0x170
    }
    #[repr(C)]
    pub struct SolveIKChainPoseOpFixedSettings_t {
        pub m_ChainsToSolveData: [u8; 0x18], // 0x0
    }
    #[repr(C)]
    pub struct CNmEntityAttributeFloatEvent {
        pub pad_0: [u8; 0x38], // 0x0
        pub m_FloatValue: [u8; 0x40], // 0x38
    }
    #[repr(C)]
    pub struct CNmIDSelectorNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_conditionNodeIndices: [u8; 0x18], // 0x10
        pub m_values: [u8; 0x30], // 0x28
        pub m_defaultValue: [u8; 0x8], // 0x58
    }
    #[repr(C)]
    pub struct TwoBoneIKSettings_t {
        pub m_endEffectorType: [u8; 0x10], // 0x0
        pub m_endEffectorAttachment: [u8; 0x80], // 0x10
        pub m_targetType: [u8; 0x10], // 0x90
        pub m_targetAttachment: [u8; 0x80], // 0xA0
        pub m_targetBoneIndex: [u8; 0x4], // 0x120
        pub m_hPositionParam: [u8; 0x2], // 0x124
        pub m_hRotationParam: [u8; 0x2], // 0x126
        pub m_bAlwaysUseFallbackHinge: [u8; 0x8], // 0x128
        pub m_vLsFallbackHingeAxis: [u8; 0x10], // 0x130
        pub m_nFixedBoneIndex: [u8; 0x4], // 0x140
        pub m_nMiddleBoneIndex: [u8; 0x4], // 0x144
        pub m_nEndBoneIndex: [u8; 0x4], // 0x148
        pub m_bMatchTargetOrientation: [u8; 0x1], // 0x14C
        pub m_bConstrainTwist: [u8; 0x3], // 0x14D
        pub m_flMaxTwist: [u8; 0x10], // 0x150
    }
    #[repr(C)]
    pub struct CNmCachedPoseWriteTask {
        pub pad_0: [u8; 0x80], // 0x0
    }
    #[repr(C)]
    pub struct CAnimUpdateSharedData {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nodes: [u8; 0x18], // 0x10
        pub m_nodeIndexMap: [u8; 0x20], // 0x28
        pub m_components: [u8; 0x18], // 0x48
        pub m_pParamListUpdater: [u8; 0x8], // 0x60
        pub m_pTagManagerUpdater: [u8; 0x8], // 0x68
        pub m_scriptManager: [u8; 0x8], // 0x70
        pub m_settings: [u8; 0x30], // 0x78
        pub m_pStaticPoseCache: [u8; 0x8], // 0xA8
        pub m_pSkeleton: [u8; 0x8], // 0xB0
        pub m_rootNodePath: [u8; 0x48], // 0xB8
    }
    #[repr(C)]
    pub struct CAnimAttachment {
        pub m_influenceRotations: [u8; 0x30], // 0x0
        pub m_influenceOffsets: [u8; 0x30], // 0x30
        pub m_influenceIndices: [u8; 0xC], // 0x60
        pub m_influenceWeights: [u8; 0xC], // 0x6C
        pub m_numInfluences: [u8; 0x8], // 0x78
    }
    #[repr(C)]
    pub struct CFootTrajectories {
        pub m_trajectories: [u8; 0x18], // 0x0
    }
    #[repr(C)]
    pub struct CNmIDComparisonNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nInputValueNodeIdx: [u8; 0x2], // 0x10
        pub m_comparison: [u8; 0x6], // 0x12
        pub m_comparisionIDs: [u8; 0x28], // 0x18
    }
    #[repr(C)]
    pub struct PairedSequence_t {
        pub m_sRole: [u8; 0x8], // 0x0
        pub m_sSequenceName: [u8; 0x8], // 0x8
        pub m_hSequence: [u8; 0x10], // 0x10
    }
    #[repr(C)]
    pub struct CEditableMotionGraph {
        pub pad_0: [u8; 0x58], // 0x0
    }
    #[repr(C)]
    pub struct CNmConstFloatNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_flValue: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CStringAnimTag {
        pub pad_0: [u8; 0x50], // 0x0
    }
    #[repr(C)]
    pub struct CBoolAnimParameter {
        pub pad_0: [u8; 0x80], // 0x0
        pub m_bDefaultValue: [u8; 0x8], // 0x80
    }
    #[repr(C)]
    pub struct CRagdollAnimTag {
        pub pad_0: [u8; 0x58], // 0x0
        pub m_profileName: [u8; 0x8], // 0x58
    }
    #[repr(C)]
    pub struct CMotionNode {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_name: [u8; 0x8], // 0x18
        pub m_id: [u8; 0x8], // 0x20
    }
    #[repr(C)]
    pub struct CNmStateMachineNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_stateDefinitions: [u8; 0x120], // 0x10
        pub m_nDefaultStateIndex: [u8; 0x8], // 0x130
    }
    #[repr(C)]
    pub struct CBodyGroupAnimTag {
        pub pad_0: [u8; 0x58], // 0x0
        pub m_nPriority: [u8; 0x8], // 0x58
        pub m_bodyGroupSettings: [u8; 0x18], // 0x60
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
        pub m_nClipReferenceNodeIdx: [u8; 0x2], // 0x10
        pub m_nTargetValueNodeIdx: [u8; 0x2], // 0x12
        pub m_bIsOffsetNode: [u8; 0x1], // 0x14
        pub m_bIsOffsetRelativeToCharacter: [u8; 0x1], // 0x15
        pub m_bWarpTranslation: [u8; 0x1], // 0x16
        pub m_alignmentMode: [u8; 0x1], // 0x17
        pub m_samplingMode: [u8; 0x8], // 0x18
    }
    #[repr(C)]
    pub struct AnimParamID {
        pub m_id: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CNmBoneMaskNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_boneMaskID: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct ModelAnimGraph2Ref_t {
        pub m_sIdentifier: [u8; 0x8], // 0x0
        pub m_hGraph: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct AnimationDecodeDebugDump_t {
        pub m_processingType: [u8; 0x8], // 0x0
        pub m_elems: [u8; 0x18], // 0x8
    }
    #[repr(C)]
    pub struct CNmVirtualParameterIDNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nChildNodeIdx: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CSeqScaleSet {
        pub m_sName: [u8; 0x10], // 0x0
        pub m_bRootOffset: [u8; 0x4], // 0x10
        pub m_vRootOffset: [u8; 0xC], // 0x14
        pub m_nLocalBoneArray: [u8; 0x18], // 0x20
        pub m_flBoneScaleArray: [u8; 0x18], // 0x38
    }
    #[repr(C)]
    pub struct PulseRuntimeCallInfoIndex_t {
        pub m_Value: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CDirectionalBlendUpdateNode {
        pub pad_0: [u8; 0x5C], // 0x0
        pub m_hSequences: [u8; 0x24], // 0x5C
        pub m_damping: [u8; 0x18], // 0x80
        pub m_blendValueSource: [u8; 0x4], // 0x98
        pub m_paramIndex: [u8; 0x4], // 0x9C
        pub m_playbackSpeed: [u8; 0x4], // 0xA0
        pub m_duration: [u8; 0x4], // 0xA4
        pub m_bLoop: [u8; 0x1], // 0xA8
        pub m_bLockBlendOnReset: [u8; 0x7], // 0xA9
    }
    #[repr(C)]
    pub struct CNmGraphDefinition__ReferencedGraphSlot_t {
        pub m_nNodeIdx: [u8; 0x2], // 0x0
        pub m_dataSlotIdx: [u8; 0x2], // 0x2
    }
    #[repr(C)]
    pub struct ParamSpan_t {
        pub m_samples: [u8; 0x18], // 0x0
        pub m_hParam: [u8; 0x2], // 0x18
        pub m_eParamType: [u8; 0x2], // 0x1A
        pub m_flStartCycle: [u8; 0x4], // 0x1C
        pub m_flEndCycle: [u8; 0x8], // 0x20
    }
    #[repr(C)]
    pub struct CFootStepTriggerUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub m_triggers: [u8; 0x1C], // 0x70
        pub m_flTolerance: [u8; 0x4], // 0x8C
    }
    #[repr(C)]
    pub struct IKTargetSettings_t {
        pub m_TargetSource: [u8; 0x8], // 0x0
        pub m_Bone: [u8; 0x10], // 0x8
        pub m_AnimgraphParameterNamePosition: [u8; 0x4], // 0x18
        pub m_AnimgraphParameterNameOrientation: [u8; 0x4], // 0x1C
        pub m_TargetCoordSystem: [u8; 0x8], // 0x20
    }
    #[repr(C)]
    pub struct CModelConfigElement_SetRenderColor {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_Color: [u8; 0x8], // 0x48
    }
    #[repr(C)]
    pub struct CNmAdditiveBlendTask {
        pub pad_0: [u8; 0x100], // 0x0
    }
    #[repr(C)]
    pub struct CNmAnimationPoseNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nPoseTimeValueNodeIdx: [u8; 0x2], // 0x10
        pub m_nDataSlotIdx: [u8; 0x2], // 0x12
        pub m_inputTimeRemapRange: [u8; 0x8], // 0x14
        pub m_flUserSpecifiedTime: [u8; 0x4], // 0x1C
        pub m_bUseFramesAsInput: [u8; 0x8], // 0x20
    }
    #[repr(C)]
    pub struct CMotionSearchDB {
        pub m_rootNode: [u8; 0x80], // 0x0
        pub m_residualQuantizer: [u8; 0x20], // 0x80
        pub m_codeIndices: [u8; 0x18], // 0xA0
    }
    #[repr(C)]
    pub struct CMotionNodeBlend1D {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_blendItems: [u8; 0x18], // 0x28
        pub m_nParamIndex: [u8; 0x8], // 0x40
    }
    #[repr(C)]
    pub struct CNmCurrentSyncEventNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nSourceStateNodeIdx: [u8; 0x2], // 0x10
        pub m_infoType: [u8; 0x6], // 0x12
    }
    #[repr(C)]
    pub struct CNmControlParameterTargetNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
    }
    #[repr(C)]
    pub struct SkeletonBoneBounds_t {
        pub m_vecCenter: [u8; 0xC], // 0x0
        pub m_vecSize: [u8; 0xC], // 0xC
    }
    #[repr(C)]
    pub struct CTwoBoneIKUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub m_opFixedData: [u8; 0x170], // 0x70
    }
    #[repr(C)]
    pub struct VPhysXBodyPart_t {
        pub m_nFlags: [u8; 0x4], // 0x0
        pub m_flMass: [u8; 0x4], // 0x4
        pub m_rnShape: [u8; 0x68], // 0x8
        pub m_nCollisionAttributeIndex: [u8; 0x2], // 0x70
        pub m_nReserved: [u8; 0x2], // 0x72
        pub m_flInertiaScale: [u8; 0x4], // 0x74
        pub m_flLinearDamping: [u8; 0x4], // 0x78
        pub m_flAngularDamping: [u8; 0x4], // 0x7C
        pub m_flLinearDrag: [u8; 0x4], // 0x80
        pub m_flAngularDrag: [u8; 0x4], // 0x84
        pub m_bOverrideMassCenter: [u8; 0x4], // 0x88
        pub m_vMassCenterOverride: [u8; 0xC], // 0x8C
    }
    #[repr(C)]
    pub struct PulseRuntimeChunkIndex_t {
        pub m_Value: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CTaskHandshakeAnimTag {
        pub pad_0: [u8; 0x58], // 0x0
    }
    #[repr(C)]
    pub struct CFollowPathUpdateNode {
        pub pad_0: [u8; 0x74], // 0x0
        pub m_flBlendOutTime: [u8; 0x4], // 0x74
        pub m_bBlockNonPathMovement: [u8; 0x1], // 0x78
        pub m_bStopFeetAtGoal: [u8; 0x1], // 0x79
        pub m_bScaleSpeed: [u8; 0x2], // 0x7A
        pub m_flScale: [u8; 0x4], // 0x7C
        pub m_flMinAngle: [u8; 0x4], // 0x80
        pub m_flMaxAngle: [u8; 0x4], // 0x84
        pub m_flSpeedScaleBlending: [u8; 0x8], // 0x88
        pub m_turnDamping: [u8; 0x18], // 0x90
        pub m_facingTarget: [u8; 0x4], // 0xA8
        pub m_hParam: [u8; 0x4], // 0xAC
        pub m_flTurnToFaceOffset: [u8; 0x4], // 0xB0
        pub m_bTurnToFace: [u8; 0x4], // 0xB4
    }
    #[repr(C)]
    pub struct AimMatrixOpFixedSettings_t {
        pub m_attachment: [u8; 0x80], // 0x0
        pub m_damping: [u8; 0x18], // 0x80
        pub m_poseCacheHandles: [u8; 0x28], // 0x98
        pub m_eBlendMode: [u8; 0x4], // 0xC0
        pub m_flMaxYawAngle: [u8; 0x4], // 0xC4
        pub m_flMaxPitchAngle: [u8; 0x4], // 0xC8
        pub m_nSequenceMaxFrame: [u8; 0x4], // 0xCC
        pub m_nBoneMaskIndex: [u8; 0x4], // 0xD0
        pub m_bTargetIsPosition: [u8; 0x1], // 0xD4
        pub m_bUseBiasAndClamp: [u8; 0x3], // 0xD5
        pub m_flBiasAndClampYawOffset: [u8; 0x4], // 0xD8
        pub m_flBiasAndClampPitchOffset: [u8; 0x4], // 0xDC
        pub m_biasAndClampBlendCurve: [u8; 0x10], // 0xE0
    }
    #[repr(C)]
    pub struct CAnimScriptComponentUpdater {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_hScript: [u8; 0x8], // 0x30
    }
    #[repr(C)]
    pub struct CRagdollUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub m_nWeightListIndex: [u8; 0x4], // 0x70
        pub m_poseControlMethod: [u8; 0x4], // 0x74
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
        pub m_AttributeName: [u8; 0x8], // 0x58
        pub m_AttributeType: [u8; 0x4], // 0x60
        pub m_flValue: [u8; 0x4], // 0x64
        pub m_Color: [u8; 0x8], // 0x68
    }
    #[repr(C)]
    pub struct CNmFootEventConditionNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nSourceStateNodeIdx: [u8; 0x2], // 0x10
        pub m_phaseCondition: [u8; 0x2], // 0x12
        pub m_eventConditionRules: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct CNmFloatChannelSet_t {
        pub m_ID: [u8; 0x8], // 0x0
        pub m_channelIDs: [u8; 0x10], // 0x8
    }
    #[repr(C)]
    pub struct CNmFootEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_phase: [u8; 0x8], // 0x18
    }
    #[repr(C)]
    pub struct CPhysSurfacePropertiesAudio {
        pub m_reflectivity: [u8; 0x4], // 0x0
        pub m_hardnessFactor: [u8; 0x4], // 0x4
        pub m_roughnessFactor: [u8; 0x4], // 0x8
        pub m_roughThreshold: [u8; 0x4], // 0xC
        pub m_hardThreshold: [u8; 0x4], // 0x10
        pub m_hardVelocityThreshold: [u8; 0x4], // 0x14
        pub m_flStaticImpactVolume: [u8; 0x4], // 0x18
        pub m_flOcclusionFactor: [u8; 0x4], // 0x1C
    }
    #[repr(C)]
    pub struct CSeqAutoLayer {
        pub m_nLocalReference: [u8; 0x2], // 0x0
        pub m_nLocalPose: [u8; 0x2], // 0x2
        pub m_flags: [u8; 0x8], // 0x4
        pub m_start: [u8; 0x4], // 0xC
        pub m_peak: [u8; 0x4], // 0x10
        pub m_tail: [u8; 0x4], // 0x14
        pub m_end: [u8; 0x4], // 0x18
    }
    #[repr(C)]
    pub struct ModelEmbeddedMesh_t {
        pub m_Name: [u8; 0x10], // 0x0
        pub m_nMeshIndex: [u8; 0x4], // 0x10
        pub m_nDataBlock: [u8; 0x4], // 0x14
        pub m_nMorphBlock: [u8; 0x8], // 0x18
        pub m_vertexBuffers: [u8; 0x18], // 0x20
        pub m_indexBuffers: [u8; 0x18], // 0x38
        pub m_toolsBuffers: [u8; 0x18], // 0x50
        pub m_nVBIBBlock: [u8; 0x4], // 0x68
        pub m_nToolsVBBlock: [u8; 0x4], // 0x6C
    }
    #[repr(C)]
    pub struct PhysSoftbodyDesc_t {
        pub m_ParticleBoneHash: [u8; 0x18], // 0x0
        pub m_Particles: [u8; 0x18], // 0x18
        pub m_Springs: [u8; 0x18], // 0x30
        pub m_Capsules: [u8; 0x18], // 0x48
        pub m_InitPose: [u8; 0x18], // 0x60
        pub m_ParticleBoneName: [u8; 0x18], // 0x78
    }
    #[repr(C)]
    pub struct CPulseRuntimeMethodArg {
        pub m_Name: [u8; 0x38], // 0x0
        pub m_Description: [u8; 0x8], // 0x38
        pub m_Type: [u8; 0x40], // 0x40
    }
    #[repr(C)]
    pub struct CAnimSequenceParams {
        pub m_flFadeInTime: [u8; 0x4], // 0x0
        pub m_flFadeOutTime: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct CTargetWarpUpdateNode {
        pub pad_0: [u8; 0x74], // 0x0
        pub m_eAngleMode: [u8; 0x4], // 0x74
        pub m_hTargetPositionParameter: [u8; 0x2], // 0x78
        pub m_hTargetUpVectorParameter: [u8; 0x2], // 0x7A
        pub m_hTargetFacePositionParameter: [u8; 0x2], // 0x7C
        pub m_hMoveHeadingParameter: [u8; 0x2], // 0x7E
        pub m_hDesiredMoveHeadingParameter: [u8; 0x4], // 0x80
        pub m_eCorrectionMethod: [u8; 0x4], // 0x84
        pub m_eTargetWarpTimingMethod: [u8; 0x4], // 0x88
        pub m_bTargetFacePositionIsWorldSpace: [u8; 0x1], // 0x8C
        pub m_bTargetPositionIsWorldSpace: [u8; 0x1], // 0x8D
        pub m_bOnlyWarpWhenTagIsFound: [u8; 0x1], // 0x8E
        pub m_bWarpOrientationDuringTranslation: [u8; 0x1], // 0x8F
        pub m_bWarpAroundCenter: [u8; 0x4], // 0x90
        pub m_flMaxAngle: [u8; 0x4], // 0x94
    }
    #[repr(C)]
    pub struct CNmVirtualParameterBoolNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nChildNodeIdx: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CFollowTargetUpdateNode {
        pub pad_0: [u8; 0x70], // 0x0
        pub m_opFixedData: [u8; 0x18], // 0x70
        pub m_hParameterPosition: [u8; 0x2], // 0x88
        pub m_hParameterOrientation: [u8; 0x6], // 0x8A
    }
    #[repr(C)]
    pub struct PulseRuntimeStateOffset_t {
        pub m_Value: [u8; 0x2], // 0x0
    }
    #[repr(C)]
    pub struct CCPPScriptComponentUpdater {
        pub pad_0: [u8; 0x30], // 0x0
        pub m_scriptsToRun: [u8; 0x30], // 0x30
    }
    #[repr(C)]
    pub struct NetVarConfigIndex {
        pub m_index: [u8; 0xC], // 0x0
    }
    #[repr(C)]
    pub struct CAnimData {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_name: [u8; 0x10], // 0x10
        pub m_animArray: [u8; 0x18], // 0x20
        pub m_decoderArray: [u8; 0x18], // 0x38
        pub m_nMaxUniqueFrameIndex: [u8; 0x8], // 0x50
        pub m_segmentArray: [u8; 0x18], // 0x58
    }
    #[repr(C)]
    pub struct IKSolverSettings_t {
        pub m_SolverType: [u8; 0x4], // 0x0
        pub m_nNumIterations: [u8; 0x4], // 0x4
        pub m_EndEffectorRotationFixUpMode: [u8; 0x4], // 0x8
    }
    #[repr(C)]
    pub struct CBinaryUpdateNode {
        pub pad_0: [u8; 0x60], // 0x0
        pub m_pChild1: [u8; 0x10], // 0x60
        pub m_pChild2: [u8; 0x10], // 0x70
        pub m_timingBehavior: [u8; 0x4], // 0x80
        pub m_flTimingBlend: [u8; 0x4], // 0x84
        pub m_bResetChild1: [u8; 0x1], // 0x88
        pub m_bResetChild2: [u8; 0x7], // 0x89
    }
    #[repr(C)]
    pub struct CBlendNodeInstanceData {
        pub m_dampedValue: [u8; 0x4], // 0x0
        pub m_flCycle: [u8; 0x4], // 0x4
        pub m_flCycleZeroTime: [u8; 0x4], // 0x8
        pub m_flPlaybackRate: [u8; 0x4], // 0xC
        pub m_flBlendValue: [u8; 0xC], // 0x10
        pub m_flDuration: [u8; 0x4], // 0x1C
        pub m_resetCount: [u8; 0x10], // 0x20
    }
    #[repr(C)]
    pub struct CNmParameterizedBlendNode__BlendRange_t {
        pub m_nInputIdx0: [u8; 0x2], // 0x0
        pub m_nInputIdx1: [u8; 0x2], // 0x2
        pub m_parameterValueRange: [u8; 0x8], // 0x4
    }
    #[repr(C)]
    pub struct CAnimKeyData {
        pub m_name: [u8; 0x10], // 0x0
        pub m_boneArray: [u8; 0x18], // 0x10
        pub m_userArray: [u8; 0x18], // 0x28
        pub m_morphArray: [u8; 0x18], // 0x40
        pub m_nChannelElements: [u8; 0x8], // 0x58
        pub m_dataChannelArray: [u8; 0x18], // 0x60
    }
    #[repr(C)]
    pub struct AttachmentHandle_t {
        pub m_Value: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct CAnimMorphDifference {
        pub m_name: [u8; 0x10], // 0x0
    }
    #[repr(C)]
    pub struct FootFixedData_t {
        pub m_vToeOffset: [u8; 0x10], // 0x0
        pub m_vHeelOffset: [u8; 0x10], // 0x10
        pub m_nTargetBoneIndex: [u8; 0x4], // 0x20
        pub m_nAnkleBoneIndex: [u8; 0x4], // 0x24
        pub m_nIKAnchorBoneIndex: [u8; 0x4], // 0x28
        pub m_ikChainIndex: [u8; 0x4], // 0x2C
        pub m_flMaxIKLength: [u8; 0x4], // 0x30
        pub m_nFootIndex: [u8; 0x4], // 0x34
        pub m_nTagIndex: [u8; 0x4], // 0x38
        pub m_flMaxRotationLeft: [u8; 0x4], // 0x3C
        pub m_flMaxRotationRight: [u8; 0x10], // 0x40
    }
    #[repr(C)]
    pub struct CMotionGraphGroup {
        pub m_searchDB: [u8; 0xB8], // 0x0
        pub m_motionGraphs: [u8; 0x18], // 0xB8
        pub m_motionGraphConfigs: [u8; 0x18], // 0xD0
        pub m_sampleToConfig: [u8; 0x18], // 0xE8
        pub m_hIsActiveScript: [u8; 0x8], // 0x100
    }
    #[repr(C)]
    pub struct CPulse_InstructionDebug {
        pub m_nFlowNodeID: [u8; 0x4], // 0x0
        pub m_nValueNodeID: [u8; 0x4], // 0x4
        pub m_SequencePointName: [u8; 0x10], // 0x8
    }
    #[repr(C)]
    pub struct CNmVectorNegateNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nInputValueNodeIdx: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CNmSyncTrack__Event_t {
        pub m_ID: [u8; 0x8], // 0x0
        pub m_startTime: [u8; 0x4], // 0x8
        pub m_duration: [u8; 0x4], // 0xC
    }
    #[repr(C)]
    pub struct CParticleCollectionRendererVecInput {
        pub pad_0: [u8; 0x6D8], // 0x0
    }
    #[repr(C)]
    pub struct CNmTarget {
        pub m_transform: [u8; 0x20], // 0x0
        pub m_boneID: [u8; 0x8], // 0x20
        pub m_bIsBoneTarget: [u8; 0x1], // 0x28
        pub m_bIsUsingBoneSpaceOffsets: [u8; 0x1], // 0x29
        pub m_bHasOffsets: [u8; 0x1], // 0x2A
        pub m_bIsSet: [u8; 0x5], // 0x2B
    }
    #[repr(C)]
    pub struct CNmControlParameterIDNode__CDefinition {
        pub pad_0: [u8; 0x10], // 0x0
    }
    #[repr(C)]
    pub struct CNmBodyGroupEvent {
        pub pad_0: [u8; 0x18], // 0x0
        pub m_target: [u8; 0x8], // 0x18
        pub m_groupName: [u8; 0x8], // 0x20
        pub m_choiceName: [u8; 0x8], // 0x28
    }
    #[repr(C)]
    pub struct CWayPointHelperUpdateNode {
        pub pad_0: [u8; 0x74], // 0x0
        pub m_flStartCycle: [u8; 0x4], // 0x74
        pub m_flEndCycle: [u8; 0x4], // 0x78
        pub m_bOnlyGoals: [u8; 0x1], // 0x7C
        pub m_bPreventOvershoot: [u8; 0x1], // 0x7D
        pub m_bPreventUndershoot: [u8; 0x2], // 0x7E
    }
    #[repr(C)]
    pub struct CMoodVData {
        pub m_sModelName: [u8; 0xE0], // 0x0
        pub m_nMoodType: [u8; 0x8], // 0xE0
        pub m_animationLayers: [u8; 0x18], // 0xE8
    }
    #[repr(C)]
    pub struct CModelConfigElement_AttachedModel {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_InstanceName: [u8; 0x8], // 0x48
        pub m_EntityClass: [u8; 0x8], // 0x50
        pub m_hModel: [u8; 0x8], // 0x58
        pub m_vOffset: [u8; 0xC], // 0x60
        pub m_aAngOffset: [u8; 0xC], // 0x6C
        pub m_AttachmentName: [u8; 0x8], // 0x78
        pub m_LocalAttachmentOffsetName: [u8; 0x8], // 0x80
        pub m_AttachmentType: [u8; 0x4], // 0x88
        pub m_bBoneMergeFlex: [u8; 0x1], // 0x8C
        pub m_bUserSpecifiedColor: [u8; 0x1], // 0x8D
        pub m_bUserSpecifiedMaterialGroup: [u8; 0x2], // 0x8E
        pub m_BodygroupOnOtherModels: [u8; 0x8], // 0x90
        pub m_MaterialGroupOnOtherModels: [u8; 0x8], // 0x98
        pub m_bCollideWithHierarchy: [u8; 0x1], // 0xA0
        pub m_bCollideOutsideHierarchy: [u8; 0x4F], // 0xA1
    }
    #[repr(C)]
    pub struct CAnimTagManagerUpdater {
        pub pad_0: [u8; 0x38], // 0x0
        pub m_tags: [u8; 0x40], // 0x38
    }
    #[repr(C)]
    pub struct CParticleProperty {
        pub pad_0: [u8; 0x28], // 0x0
    }
}
