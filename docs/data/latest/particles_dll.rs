/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

#![allow(non_snake_case, non_camel_case_types, dead_code)]

pub mod particles {

    pub type PulseBestOutflowRules_t = i32;
    pub type PulseCursorCancelPriority_t = i32;
    pub type PulseMethodCallMode_t = i32;
    pub type PulseCursorWakePriority_t = i32;
    pub type Detail2Combo_t = i32;
    pub type MissingParentInheritBehavior_t = i32;
    pub type ParticleTraceMissBehavior_t = i32;
    pub type PFuncVisualizationType_t = i32;
    pub type ParticleVRHandChoiceList_t = i32;
    pub type ParticleEntityPos_t = i32;
    pub type ParticleFanType_t = i32;
    pub type PetGroundType_t = i32;
    pub type InheritableBoolType_t = i32;
    pub type ParticlePostProcessPriorityGroup_t = i32;
    pub type ParticleCollisionGroup_t = i32;
    pub type DetailCombo_t = i32;
    pub type ScalarExpressionType_t = i32;
    pub type SpriteCardPerParticleScale_t = i32;
    pub type BlurFilterType_t = i32;
    pub type StandardLightingAttenuationStyle_t = i32;
    pub type ParticleParentSetMode_t = i32;
    pub type ParticleLightingQuality_t = i32;
    pub type ParticleVolumetricSmokeCreationType_t = i32;
    pub type SetStatisticExpressionType_t = i32;
    pub type EventTypeSelection_t = i32;
    pub type ParticleMassMode_t = i32;
    pub type ParticleHitboxBiasType_t = i32;
    pub type ParticleControlPointAxis_t = i32;
    pub type ParticlePinDistance_t = i32;
    pub type VectorFloatExpressionType_t = i32;
    pub type ParticleFogType_t = i32;
    pub type VectorExpressionType_t = i32;
    pub type ParticleMultiSegmentInputSelection_t = i32;
    pub type ParticleRotationLockType_t = i32;
    pub type HitboxLerpType_t = i32;
    pub type ParticleAttrBoxFlags_t = i32;
    pub type ParticleTopology_t = i32;
    pub type ParticleLightBehaviorChoiceList_t = i32;
    pub type ModelHitboxType_t = i32;
    pub type ParticleMultiSegmentCountSelection_t = i32;
    pub type ParticleOrientationType_t = i32;
    pub type ParticleTraceSet_t = i32;
    pub type ParticleTextureLayerBlendType_t = i32;
    pub type ParticleSelection_t = i32;
    pub type ParticleToolsState_t = i32;
    pub type SnapshotIndexType_t = i32;
    pub type ParticleOutputBlendMode_t = i32;
    pub type ParticleLightnintBranchBehavior_t = i32;
    pub type MaterialProxyType_t = i32;
    pub type ParticleDepthFeatheringMode_t = i32;
    pub type ParticleLightUnitChoiceList_t = i32;
    pub type ParticleMultiSegmentSpecialCharacter_t = i32;
    pub type ParticleOmni2LighOrientationChoiceList_t = i32;
    pub type ParticleFalloffFunction_t = i32;
    pub type ParticleSequenceCropOverride_t = i32;
    pub type ParticleDetailLevel_t = i32;
    pub type BBoxVolumeType_t = i32;
    pub type SpriteCardTextureType_t = i32;
    pub type ParticleAlphaReferenceType_t = i32;
    pub type SpriteCardTextureChannel_t = i32;
    pub type ParticleVolumetricSmokeType_t = i32;
    pub type RenderModelSubModelFieldType_t = i32;
    pub type ParticleHitboxDataSelection_t = i32;
    pub type ParticleOrientationChoiceList_t = i32;
    pub type ParticleCollisionMode_t = i32;
    pub type ParticleSortingChoiceList_t = i32;
    pub type ParticleEndcapMode_t = i32;
    pub type ClosestPointTestType_t = i32;
    pub type ParticleImpulseType_t = i32;
    pub type ParticleLiquidContents_t = i32;
    pub type SpriteCardShaderType_t = i32;
    pub type ParticleOmni2LightTypeChoiceList_t = i32;
    pub type ParticleLightFogLightingMode_t = i32;
    pub type ParticleLightTypeChoiceList_t = i32;
    pub type ParticleOrientationSetMode_t = i32;
    pub type ParticleCollisionMask_t = i32;
    pub type TextureRepetitionMode_t = i32;
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
    pub struct IParticleCollection {
        pub pad_0: [u8; 0x10], // 0x0
    }
    #[repr(C)]
    pub struct C_OP_RemapGravityToVector {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_vInput1: [u8; 0x6D8], // 0x1E0
        pub m_nOutputField: [u8; 0x4], // 0x8B8
        pub m_nSetMethod: [u8; 0x4], // 0x8BC
        pub m_bNormalizedOutput: [u8; 0x70], // 0x8C0
    }
    #[repr(C)]
    pub struct C_OP_Decay {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_bRopeDecay: [u8; 0x1], // 0x1E0
        pub m_bForcePreserveParticleOrder: [u8; 0x7], // 0x1E1
    }
    #[repr(C)]
    pub struct C_OP_RenderDeferredLight {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_flRadiusScale: [u8; 0x4], // 0x230
        pub m_flAlphaScale: [u8; 0x4], // 0x234
        pub m_nAlpha2Field: [u8; 0x8], // 0x238
        pub m_vecColorScale: [u8; 0x6D8], // 0x240
        pub m_nColorBlendType: [u8; 0x4], // 0x918
        pub m_bUseTexture: [u8; 0x1], // 0x91C
        pub m_bUseAlphaTestWindow: [u8; 0x3], // 0x91D
        pub m_hTexture: [u8; 0x8], // 0x920
        pub m_nAlphaTestPointField: [u8; 0x4], // 0x928
        pub m_nAlphaTestRangeField: [u8; 0x4], // 0x92C
        pub m_nAlphaTestSharpnessField: [u8; 0x4], // 0x930
        pub m_flLightDistance: [u8; 0x4], // 0x934
        pub m_flStartFalloff: [u8; 0x4], // 0x938
        pub m_flDistanceFalloff: [u8; 0x4], // 0x93C
        pub m_flSpotFoV: [u8; 0x4], // 0x940
        pub m_nHSVShiftControlPoint: [u8; 0x4], // 0x944
    }
    #[repr(C)]
    pub struct C_OP_RemapSpeedtoCP {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nInControlPointNumber: [u8; 0x4], // 0x1E8
        pub m_nOutControlPointNumber: [u8; 0x4], // 0x1EC
        pub m_nField: [u8; 0x4], // 0x1F0
        pub m_flInputMin: [u8; 0x4], // 0x1F4
        pub m_flInputMax: [u8; 0x4], // 0x1F8
        pub m_flOutputMin: [u8; 0x4], // 0x1FC
        pub m_flOutputMax: [u8; 0x4], // 0x200
        pub m_bUseDeltaV: [u8; 0x4], // 0x204
    }
    #[repr(C)]
    pub struct C_OP_RemapTransformToVelocity {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_TransformInput: [u8; 0x68], // 0x1E0
    }
    #[repr(C)]
    pub struct CollisionGroupContext_t {
        pub m_nCollisionGroupNumber: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CParticleFunctionPreEmission {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_bRunOnce: [u8; 0x8], // 0x1E0
    }
    #[repr(C)]
    pub struct C_OP_FadeOutSimple {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flFadeOutTime: [u8; 0x4], // 0x1E0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E4
    }
    #[repr(C)]
    pub struct C_OP_SpringToVectorConstraint {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flRestLength: [u8; 0x178], // 0x1E0
        pub m_flMinDistance: [u8; 0x178], // 0x358
        pub m_flMaxDistance: [u8; 0x178], // 0x4D0
        pub m_flRestingLength: [u8; 0x178], // 0x648
        pub m_vecAnchorVector: [u8; 0x6D8], // 0x7C0
    }
    #[repr(C)]
    pub struct C_OP_RenderRopes {
        pub pad_0: [u8; 0x2ED8], // 0x0
        pub m_bEnableFadingAndClamping: [u8; 0x4], // 0x2ED8
        pub m_flMinSize: [u8; 0x4], // 0x2EDC
        pub m_flMaxSize: [u8; 0x4], // 0x2EE0
        pub m_flStartFadeSize: [u8; 0x4], // 0x2EE4
        pub m_flEndFadeSize: [u8; 0x4], // 0x2EE8
        pub m_flStartFadeDot: [u8; 0x4], // 0x2EEC
        pub m_flEndFadeDot: [u8; 0x8], // 0x2EF0
        pub m_flSubPixelAAScale: [u8; 0x178], // 0x2EF8
        pub m_flRadiusTaper: [u8; 0x4], // 0x3070
        pub m_nMinTesselation: [u8; 0x4], // 0x3074
        pub m_nMaxTesselation: [u8; 0x4], // 0x3078
        pub m_flTessScale: [u8; 0x4], // 0x307C
        pub m_flTextureVWorldSize: [u8; 0x178], // 0x3080
        pub m_flTextureVScrollRate: [u8; 0x178], // 0x31F8
        pub m_flTextureVOffset: [u8; 0x178], // 0x3370
        pub m_nTextureVParamsCP: [u8; 0x4], // 0x34E8
        pub m_bClampV: [u8; 0x4], // 0x34EC
        pub m_nScaleCP1: [u8; 0x4], // 0x34F0
        pub m_nScaleCP2: [u8; 0x4], // 0x34F4
        pub m_flScaleVSizeByControlPointDistance: [u8; 0x4], // 0x34F8
        pub m_flScaleVScrollByControlPointDistance: [u8; 0x4], // 0x34FC
        pub m_flScaleVOffsetByControlPointDistance: [u8; 0x5], // 0x3500
        pub m_bUseScalarForTextureCoordinate: [u8; 0x3], // 0x3505
        pub m_nScalarFieldForTextureCoordinate: [u8; 0x4], // 0x3508
        pub m_flScalarAttributeTextureCoordScale: [u8; 0x4], // 0x350C
        pub m_bReverseOrder: [u8; 0x1], // 0x3510
        pub m_bClosedLoop: [u8; 0x3], // 0x3511
        pub m_nSplitField: [u8; 0x4], // 0x3514
        pub m_bSortBySegmentID: [u8; 0x4], // 0x3518
        pub m_nOrientationType: [u8; 0x4], // 0x351C
        pub m_nVectorFieldForOrientation: [u8; 0x4], // 0x3520
        pub m_bDrawAsOpaque: [u8; 0x1], // 0x3524
        pub m_bGenerateNormals: [u8; 0x3], // 0x3525
    }
    #[repr(C)]
    pub struct C_INIT_StatusEffectCitadel {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_flSFXColorWarpAmount: [u8; 0x4], // 0x1E8
        pub m_flSFXNormalAmount: [u8; 0x4], // 0x1EC
        pub m_flSFXMetalnessAmount: [u8; 0x4], // 0x1F0
        pub m_flSFXRoughnessAmount: [u8; 0x4], // 0x1F4
        pub m_flSFXSelfIllumAmount: [u8; 0x4], // 0x1F8
        pub m_flSFXSScale: [u8; 0x4], // 0x1FC
        pub m_flSFXSScrollX: [u8; 0x4], // 0x200
        pub m_flSFXSScrollY: [u8; 0x4], // 0x204
        pub m_flSFXSScrollZ: [u8; 0x4], // 0x208
        pub m_flSFXSOffsetX: [u8; 0x4], // 0x20C
        pub m_flSFXSOffsetY: [u8; 0x4], // 0x210
        pub m_flSFXSOffsetZ: [u8; 0x4], // 0x214
        pub m_nDetailCombo: [u8; 0x4], // 0x218
        pub m_flSFXSDetailAmount: [u8; 0x4], // 0x21C
        pub m_flSFXSDetailScale: [u8; 0x4], // 0x220
        pub m_flSFXSDetailScrollX: [u8; 0x4], // 0x224
        pub m_flSFXSDetailScrollY: [u8; 0x4], // 0x228
        pub m_flSFXSDetailScrollZ: [u8; 0x4], // 0x22C
        pub m_flSFXSUseModelUVs: [u8; 0x8], // 0x230
    }
    #[repr(C)]
    pub struct C_OP_RenderSound {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_flDurationScale: [u8; 0x4], // 0x230
        pub m_flSndLvlScale: [u8; 0x4], // 0x234
        pub m_flPitchScale: [u8; 0x4], // 0x238
        pub m_flVolumeScale: [u8; 0x4], // 0x23C
        pub m_nSndLvlField: [u8; 0x4], // 0x240
        pub m_nDurationField: [u8; 0x4], // 0x244
        pub m_nPitchField: [u8; 0x4], // 0x248
        pub m_nVolumeField: [u8; 0x4], // 0x24C
        pub m_nChannel: [u8; 0x4], // 0x250
        pub m_nCPReference: [u8; 0x4], // 0x254
        pub m_pszSoundName: [u8; 0x100], // 0x258
        pub m_bSuppressStopSoundEvent: [u8; 0x8], // 0x358
    }
    #[repr(C)]
    pub struct CParticleVisibilityInputs {
        pub m_flCameraBias: [u8; 0x4], // 0x0
        pub m_nCPin: [u8; 0x4], // 0x4
        pub m_flProxyRadius: [u8; 0x4], // 0x8
        pub m_flInputMin: [u8; 0x4], // 0xC
        pub m_flInputMax: [u8; 0x4], // 0x10
        pub m_flInputPixelVisFade: [u8; 0x4], // 0x14
        pub m_flNoPixelVisibilityFallback: [u8; 0x4], // 0x18
        pub m_flDistanceInputMin: [u8; 0x4], // 0x1C
        pub m_flDistanceInputMax: [u8; 0x4], // 0x20
        pub m_flDotInputMin: [u8; 0x4], // 0x24
        pub m_flDotInputMax: [u8; 0x4], // 0x28
        pub m_bDotCPAngles: [u8; 0x1], // 0x2C
        pub m_bDotCameraAngles: [u8; 0x3], // 0x2D
        pub m_flAlphaScaleMin: [u8; 0x4], // 0x30
        pub m_flAlphaScaleMax: [u8; 0x4], // 0x34
        pub m_flRadiusScaleMin: [u8; 0x4], // 0x38
        pub m_flRadiusScaleMax: [u8; 0x4], // 0x3C
        pub m_flRadiusScaleFOVBase: [u8; 0x4], // 0x40
        pub m_bRightEye: [u8; 0x4], // 0x44
    }
    #[repr(C)]
    pub struct C_OP_SetControlPointsToParticle {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nChildGroupID: [u8; 0x4], // 0x1E0
        pub m_nFirstControlPoint: [u8; 0x4], // 0x1E4
        pub m_nNumControlPoints: [u8; 0x4], // 0x1E8
        pub m_nFirstSourcePoint: [u8; 0x4], // 0x1EC
        pub m_bReverse: [u8; 0x1], // 0x1F0
        pub m_bSetOrientation: [u8; 0x3], // 0x1F1
        pub m_nOrientationMode: [u8; 0x4], // 0x1F4
        pub m_nSetParent: [u8; 0x8], // 0x1F8
    }
    #[repr(C)]
    pub struct C_OP_RemapCPVelocityToVector {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nControlPoint: [u8; 0x4], // 0x1E0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E4
        pub m_flScale: [u8; 0x4], // 0x1E8
        pub m_bNormalize: [u8; 0x4], // 0x1EC
    }
    #[repr(C)]
    pub struct C_OP_PointVectorAtNextParticle {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldOutput: [u8; 0x8], // 0x1E0
        pub m_flInterpolation: [u8; 0x178], // 0x1E8
        pub m_bPrevious: [u8; 0x8], // 0x360
    }
    #[repr(C)]
    pub struct ParticlePreviewBodyGroup_t {
        pub m_bodyGroupName: [u8; 0x8], // 0x0
        pub m_nValue: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct C_OP_OscillateScalarSimple {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_Rate: [u8; 0x4], // 0x1E0
        pub m_Frequency: [u8; 0x4], // 0x1E4
        pub m_nField: [u8; 0x4], // 0x1E8
        pub m_flOscMult: [u8; 0x4], // 0x1EC
        pub m_flOscAdd: [u8; 0x30], // 0x1F0
    }
    #[repr(C)]
    pub struct C_INIT_StatusEffect {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nDetail2Combo: [u8; 0x4], // 0x1E8
        pub m_flDetail2Rotation: [u8; 0x4], // 0x1EC
        pub m_flDetail2Scale: [u8; 0x4], // 0x1F0
        pub m_flDetail2BlendFactor: [u8; 0x4], // 0x1F4
        pub m_flColorWarpIntensity: [u8; 0x4], // 0x1F8
        pub m_flDiffuseWarpBlendToFull: [u8; 0x4], // 0x1FC
        pub m_flEnvMapIntensity: [u8; 0x4], // 0x200
        pub m_flAmbientScale: [u8; 0x4], // 0x204
        pub m_specularColor: [u8; 0x4], // 0x208
        pub m_flSpecularScale: [u8; 0x4], // 0x20C
        pub m_flSpecularExponent: [u8; 0x4], // 0x210
        pub m_flSpecularExponentBlendToFull: [u8; 0x4], // 0x214
        pub m_flSpecularBlendToFull: [u8; 0x4], // 0x218
        pub m_rimLightColor: [u8; 0x4], // 0x21C
        pub m_flRimLightScale: [u8; 0x4], // 0x220
        pub m_flReflectionsTintByBaseBlendToNone: [u8; 0x4], // 0x224
        pub m_flMetalnessBlendToFull: [u8; 0x4], // 0x228
        pub m_flSelfIllumBlendToFull: [u8; 0x1C], // 0x22C
    }
    #[repr(C)]
    pub struct C_INIT_RtEnvCull {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_vecTestDir: [u8; 0xC], // 0x1E8
        pub m_vecTestNormal: [u8; 0xC], // 0x1F4
        pub m_bUseVelocity: [u8; 0x1], // 0x200
        pub m_bCullOnMiss: [u8; 0x1], // 0x201
        pub m_bLifeAdjust: [u8; 0x1], // 0x202
        pub m_RtEnvName: [u8; 0x81], // 0x203
        pub m_nRTEnvCP: [u8; 0x4], // 0x284
        pub m_nComponent: [u8; 0x8], // 0x288
    }
    #[repr(C)]
    pub struct C_OP_ConstrainDistance {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_fMinDistance: [u8; 0x178], // 0x1E0
        pub m_fMaxDistance: [u8; 0x178], // 0x358
        pub m_nControlPointNumber: [u8; 0x68], // 0x4D0
        pub m_CenterOffset: [u8; 0x6D8], // 0x538
        pub m_bGlobalCenter: [u8; 0x8], // 0xC10
    }
    #[repr(C)]
    pub struct C_INIT_RandomVector {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_vecMin: [u8; 0xC], // 0x1E8
        pub m_vecMax: [u8; 0xC], // 0x1F4
        pub m_nFieldOutput: [u8; 0x4], // 0x200
        pub m_randomnessParameters: [u8; 0xC], // 0x204
    }
    #[repr(C)]
    pub struct C_INIT_InitialVelocityNoise {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_vecAbsVal: [u8; 0xC], // 0x1E8
        pub m_vecAbsValInv: [u8; 0xC], // 0x1F4
        pub m_vecOffsetLoc: [u8; 0x6D8], // 0x200
        pub m_flOffset: [u8; 0x178], // 0x8D8
        pub m_vecOutputMin: [u8; 0x6D8], // 0xA50
        pub m_vecOutputMax: [u8; 0x6D8], // 0x1128
        pub m_flNoiseScale: [u8; 0x178], // 0x1800
        pub m_flNoiseScaleLoc: [u8; 0x178], // 0x1978
        pub m_TransformInput: [u8; 0x68], // 0x1AF0
        pub m_bIgnoreDt: [u8; 0x8], // 0x1B58
    }
    #[repr(C)]
    pub struct ParticleChildrenInfo_t {
        pub m_ChildRef: [u8; 0x8], // 0x0
        pub m_flDelay: [u8; 0x4], // 0x8
        pub m_bEndCap: [u8; 0x1], // 0xC
        pub m_bDisableChild: [u8; 0x3], // 0xD
        pub m_nDetailLevel: [u8; 0x10], // 0x10
    }
    #[repr(C)]
    pub struct C_OP_RemapScalarOnceTimed {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_bProportional: [u8; 0x4], // 0x1E0
        pub m_nFieldInput: [u8; 0x4], // 0x1E4
        pub m_nFieldOutput: [u8; 0x4], // 0x1E8
        pub m_flInputMin: [u8; 0x4], // 0x1EC
        pub m_flInputMax: [u8; 0x4], // 0x1F0
        pub m_flOutputMin: [u8; 0x4], // 0x1F4
        pub m_flOutputMax: [u8; 0x4], // 0x1F8
        pub m_flRemapTime: [u8; 0x4], // 0x1FC
    }
    #[repr(C)]
    pub struct C_INIT_RandomNamedModelSequence {
        pub pad_0: [u8; 0x210], // 0x0
    }
    #[repr(C)]
    pub struct C_OP_PlaneCull {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nPlaneControlPoint: [u8; 0x8], // 0x1E0
        pub m_vecPlaneDirection: [u8; 0x6D8], // 0x1E8
        pub m_bLocalSpace: [u8; 0x4], // 0x8C0
        pub m_flPlaneOffset: [u8; 0x4], // 0x8C4
    }
    #[repr(C)]
    pub struct C_INIT_VelocityRandom {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nControlPointNumber: [u8; 0x8], // 0x1E8
        pub m_fSpeedMin: [u8; 0x178], // 0x1F0
        pub m_fSpeedMax: [u8; 0x178], // 0x368
        pub m_LocalCoordinateSystemSpeedMin: [u8; 0x6D8], // 0x4E0
        pub m_LocalCoordinateSystemSpeedMax: [u8; 0x6D8], // 0xBB8
        pub m_bIgnoreDT: [u8; 0x4], // 0x1290
        pub m_randomnessParameters: [u8; 0xC], // 0x1294
    }
    #[repr(C)]
    pub struct C_OP_ModelDampenMovement {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nControlPointNumber: [u8; 0x4], // 0x1E0
        pub m_bBoundBox: [u8; 0x1], // 0x1E4
        pub m_bOutside: [u8; 0x1], // 0x1E5
        pub m_bUseBones: [u8; 0x1], // 0x1E6
        pub m_HitboxSetName: [u8; 0x81], // 0x1E7
        pub m_vecPosOffset: [u8; 0x6D8], // 0x268
        pub m_fDrag: [u8; 0x8], // 0x940
    }
    #[repr(C)]
    pub struct C_OP_TwistAroundAxis {
        pub pad_0: [u8; 0x1F0], // 0x0
        pub m_fForceAmount: [u8; 0x4], // 0x1F0
        pub m_TwistAxis: [u8; 0xC], // 0x1F4
        pub m_bLocalSpace: [u8; 0x4], // 0x200
        pub m_nControlPointNumber: [u8; 0x4], // 0x204
    }
    #[repr(C)]
    pub struct C_OP_TeleportBeam {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nCPPosition: [u8; 0x4], // 0x1E0
        pub m_nCPVelocity: [u8; 0x4], // 0x1E4
        pub m_nCPMisc: [u8; 0x4], // 0x1E8
        pub m_nCPColor: [u8; 0x4], // 0x1EC
        pub m_nCPInvalidColor: [u8; 0x4], // 0x1F0
        pub m_nCPExtraArcData: [u8; 0x4], // 0x1F4
        pub m_vGravity: [u8; 0xC], // 0x1F8
        pub m_flArcMaxDuration: [u8; 0x4], // 0x204
        pub m_flSegmentBreak: [u8; 0x4], // 0x208
        pub m_flArcSpeed: [u8; 0x4], // 0x20C
        pub m_flAlpha: [u8; 0x8], // 0x210
    }
    #[repr(C)]
    pub struct C_OP_RemapExternalWindToCP {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nCP: [u8; 0x4], // 0x1E8
        pub m_nCPOutput: [u8; 0x4], // 0x1EC
        pub m_vecScale: [u8; 0x6D8], // 0x1F0
        pub m_bSetMagnitude: [u8; 0x4], // 0x8C8
        pub m_nOutVectorField: [u8; 0x4], // 0x8CC
    }
    #[repr(C)]
    pub struct CBaseRendererSource2 {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_flRadiusScale: [u8; 0x178], // 0x230
        pub m_flAlphaScale: [u8; 0x178], // 0x3A8
        pub m_flRollScale: [u8; 0x178], // 0x520
        pub m_nAlpha2Field: [u8; 0x8], // 0x698
        pub m_vecColorScale: [u8; 0x6D8], // 0x6A0
        pub m_nColorBlendType: [u8; 0x4], // 0xD78
        pub m_nShaderType: [u8; 0x4], // 0xD7C
        pub m_strShaderOverride: [u8; 0x8], // 0xD80
        pub m_flCenterXOffset: [u8; 0x178], // 0xD88
        pub m_flCenterYOffset: [u8; 0x178], // 0xF00
        pub m_flBumpStrength: [u8; 0x4], // 0x1078
        pub m_nCropTextureOverride: [u8; 0x4], // 0x107C
        pub m_vecTexturesInput: [u8; 0x10], // 0x1080
        pub m_flAnimationRate: [u8; 0x4], // 0x1090
        pub m_nAnimationType: [u8; 0x4], // 0x1094
        pub m_bAnimateInFPS: [u8; 0x8], // 0x1098
        pub m_flMotionVectorScaleU: [u8; 0x178], // 0x10A0
        pub m_flMotionVectorScaleV: [u8; 0x178], // 0x1218
        pub m_flSelfIllumAmount: [u8; 0x178], // 0x1390
        pub m_flDiffuseAmount: [u8; 0x178], // 0x1508
        pub m_flDiffuseClamp: [u8; 0x178], // 0x1680
        pub m_nLightingControlPoint: [u8; 0x4], // 0x17F8
        pub m_nOutputBlendMode: [u8; 0x4], // 0x17FC
        pub m_bGammaCorrectVertexColors: [u8; 0x1], // 0x1800
        pub m_bSaturateColorPreAlphaBlend: [u8; 0x7], // 0x1801
        pub m_flAddSelfAmount: [u8; 0x178], // 0x1808
        pub m_flDesaturation: [u8; 0x178], // 0x1980
        pub m_flOverbrightFactor: [u8; 0x178], // 0x1AF8
        pub m_nHSVShiftControlPoint: [u8; 0x4], // 0x1C70
        pub m_nFogType: [u8; 0x4], // 0x1C74
        pub m_flFogAmount: [u8; 0x178], // 0x1C78
        pub m_bTintByFOW: [u8; 0x1], // 0x1DF0
        pub m_bTintByGlobalLight: [u8; 0x3], // 0x1DF1
        pub m_nPerParticleAlphaReference: [u8; 0x4], // 0x1DF4
        pub m_nPerParticleAlphaRefWindow: [u8; 0x4], // 0x1DF8
        pub m_nAlphaReferenceType: [u8; 0x4], // 0x1DFC
        pub m_flAlphaReferenceSoftness: [u8; 0x178], // 0x1E00
        pub m_flSourceAlphaValueToMapToZero: [u8; 0x178], // 0x1F78
        pub m_flSourceAlphaValueToMapToOne: [u8; 0x178], // 0x20F0
        pub m_bRefract: [u8; 0x1], // 0x2268
        pub m_bRefractSolid: [u8; 0x1], // 0x2269
        pub m_bRefract2Passes: [u8; 0x6], // 0x226A
        pub m_flRefractAmount: [u8; 0x178], // 0x2270
        pub m_nRefractBlurRadius: [u8; 0x4], // 0x23E8
        pub m_nRefractBlurType: [u8; 0x4], // 0x23EC
        pub m_bOnlyRenderInEffectsBloomPass: [u8; 0x1], // 0x23F0
        pub m_bOnlyRenderInEffectsWaterPass: [u8; 0x1], // 0x23F1
        pub m_bUseMixedResolutionRendering: [u8; 0x1], // 0x23F2
        pub m_bOnlyRenderInEffecsGameOverlay: [u8; 0x1], // 0x23F3
        pub m_stencilTestID: [u8; 0x80], // 0x23F4
        pub m_bStencilTestExclude: [u8; 0x1], // 0x2474
        pub m_stencilWriteID: [u8; 0x80], // 0x2475
        pub m_bWriteStencilOnDepthPass: [u8; 0x1], // 0x24F5
        pub m_bWriteStencilOnDepthFail: [u8; 0x1], // 0x24F6
        pub m_bReverseZBuffering: [u8; 0x1], // 0x24F7
        pub m_bDisableZBuffering: [u8; 0x4], // 0x24F8
        pub m_nFeatheringMode: [u8; 0x4], // 0x24FC
        pub m_flFeatheringMinDist: [u8; 0x178], // 0x2500
        pub m_flFeatheringMaxDist: [u8; 0x178], // 0x2678
        pub m_flFeatheringFilter: [u8; 0x178], // 0x27F0
        pub m_flFeatheringDepthMapFilter: [u8; 0x178], // 0x2968
        pub m_flDepthBias: [u8; 0x178], // 0x2AE0
        pub m_nSortMethod: [u8; 0x4], // 0x2C58
        pub m_bBlendFramesSeq0: [u8; 0x1], // 0x2C5C
        pub m_bMaxLuminanceBlendingSequence0: [u8; 0x27B], // 0x2C5D
    }
    #[repr(C)]
    pub struct CSpinUpdateBase {
        pub pad_0: [u8; 0x1E0], // 0x0
    }
    #[repr(C)]
    pub struct C_OP_OrientTo2dDirection {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_vecInput: [u8; 0x6D8], // 0x1E0
        pub m_flRotOffset: [u8; 0x4], // 0x8B8
        pub m_flSpinStrength: [u8; 0x4], // 0x8BC
        pub m_nFieldOutput: [u8; 0x8], // 0x8C0
    }
    #[repr(C)]
    pub struct C_OP_RemapDotProductToCP {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nInputCP1: [u8; 0x4], // 0x1E8
        pub m_nInputCP2: [u8; 0x4], // 0x1EC
        pub m_nOutputCP: [u8; 0x4], // 0x1F0
        pub m_nOutVectorField: [u8; 0x4], // 0x1F4
        pub m_flInputMin: [u8; 0x178], // 0x1F8
        pub m_flInputMax: [u8; 0x178], // 0x370
        pub m_flOutputMin: [u8; 0x178], // 0x4E8
        pub m_flOutputMax: [u8; 0x178], // 0x660
    }
    #[repr(C)]
    pub struct C_INIT_RemapParticleCountToNamedModelElementScalar {
        pub pad_0: [u8; 0x218], // 0x0
        pub m_hModel: [u8; 0x8], // 0x218
        pub m_outputMinName: [u8; 0x8], // 0x220
        pub m_outputMaxName: [u8; 0x8], // 0x228
        pub m_bModelFromRenderer: [u8; 0x8], // 0x230
    }
    #[repr(C)]
    pub struct C_OP_RenderTrails {
        pub pad_0: [u8; 0x3358], // 0x0
        pub m_bEnableFadingAndClamping: [u8; 0x4], // 0x3358
        pub m_flStartFadeDot: [u8; 0x4], // 0x335C
        pub m_flEndFadeDot: [u8; 0x4], // 0x3360
        pub m_nPrevPntSource: [u8; 0x4], // 0x3364
        pub m_flMaxLength: [u8; 0x4], // 0x3368
        pub m_flMinLength: [u8; 0x4], // 0x336C
        pub m_bIgnoreDT: [u8; 0x4], // 0x3370
        pub m_flConstrainRadiusToLengthRatio: [u8; 0x4], // 0x3374
        pub m_flLengthScale: [u8; 0x4], // 0x3378
        pub m_flLengthFadeInTime: [u8; 0x4], // 0x337C
        pub m_flRadiusHeadTaper: [u8; 0x178], // 0x3380
        pub m_vecHeadColorScale: [u8; 0x6D8], // 0x34F8
        pub m_flHeadAlphaScale: [u8; 0x178], // 0x3BD0
        pub m_flRadiusTaper: [u8; 0x178], // 0x3D48
        pub m_vecTailColorScale: [u8; 0x6D8], // 0x3EC0
        pub m_flTailAlphaScale: [u8; 0x178], // 0x4598
        pub m_nHorizCropField: [u8; 0x4], // 0x4710
        pub m_nVertCropField: [u8; 0x4], // 0x4714
        pub m_flForwardShift: [u8; 0x4], // 0x4718
        pub m_bFlipUVBasedOnPitchYaw: [u8; 0x4], // 0x471C
    }
    #[repr(C)]
    pub struct C_OP_SetControlPointPositionToTimeOfDayValue {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nControlPointNumber: [u8; 0x4], // 0x1E8
        pub m_pszTimeOfDayParameter: [u8; 0x80], // 0x1EC
        pub m_vecDefaultValue: [u8; 0x14], // 0x26C
    }
    #[repr(C)]
    pub struct C_OP_DecayMaintainCount {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nParticlesToMaintain: [u8; 0x4], // 0x1E0
        pub m_flDecayDelay: [u8; 0x4], // 0x1E4
        pub m_nSnapshotControlPoint: [u8; 0x8], // 0x1E8
        pub m_strSnapshotSubset: [u8; 0x8], // 0x1F0
        pub m_bLifespanDecay: [u8; 0x8], // 0x1F8
        pub m_flScale: [u8; 0x178], // 0x200
        pub m_bKillNewest: [u8; 0x8], // 0x378
    }
    #[repr(C)]
    pub struct C_INIT_RandomModelSequence {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_ActivityName: [u8; 0x100], // 0x1E8
        pub m_SequenceName: [u8; 0x100], // 0x2E8
        pub m_hModel: [u8; 0x8], // 0x3E8
    }
    #[repr(C)]
    pub struct C_OP_ExternalGameImpulseForce {
        pub pad_0: [u8; 0x1F0], // 0x0
        pub m_flForceScale: [u8; 0x178], // 0x1F0
        pub m_bRopes: [u8; 0x1], // 0x368
        pub m_bRopesZOnly: [u8; 0x1], // 0x369
        pub m_bExplosions: [u8; 0x1], // 0x36A
        pub m_bParticles: [u8; 0x5], // 0x36B
    }
    #[repr(C)]
    pub struct C_OP_RemapAverageHitboxSpeedtoCP {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nInControlPointNumber: [u8; 0x4], // 0x1E8
        pub m_nOutControlPointNumber: [u8; 0x4], // 0x1EC
        pub m_nField: [u8; 0x4], // 0x1F0
        pub m_nHitboxDataType: [u8; 0x4], // 0x1F4
        pub m_flInputMin: [u8; 0x178], // 0x1F8
        pub m_flInputMax: [u8; 0x178], // 0x370
        pub m_flOutputMin: [u8; 0x178], // 0x4E8
        pub m_flOutputMax: [u8; 0x178], // 0x660
        pub m_nHeightControlPointNumber: [u8; 0x8], // 0x7D8
        pub m_vecComparisonVelocity: [u8; 0x6D8], // 0x7E0
        pub m_HitboxSetName: [u8; 0x80], // 0xEB8
    }
    #[repr(C)]
    pub struct C_INIT_RandomAlpha {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E8
        pub m_nAlphaMin: [u8; 0x4], // 0x1EC
        pub m_nAlphaMax: [u8; 0xC], // 0x1F0
        pub m_flAlphaRandExponent: [u8; 0x4], // 0x1FC
    }
    #[repr(C)]
    pub struct C_OP_NormalizeVector {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E0
        pub m_flScale: [u8; 0x4], // 0x1E4
    }
    #[repr(C)]
    pub struct C_OP_FadeInSimple {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flFadeInTime: [u8; 0x4], // 0x1E0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E4
    }
    #[repr(C)]
    pub struct C_OP_RepeatedTriggerChildGroup {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nChildGroupID: [u8; 0x8], // 0x1E8
        pub m_flClusterRefireTime: [u8; 0x178], // 0x1F0
        pub m_flClusterSize: [u8; 0x178], // 0x368
        pub m_flClusterCooldown: [u8; 0x178], // 0x4E0
        pub m_bLimitChildCount: [u8; 0x8], // 0x658
    }
    #[repr(C)]
    pub struct C_OP_RemapVelocityToVector {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E0
        pub m_flScale: [u8; 0x4], // 0x1E4
        pub m_bNormalize: [u8; 0x8], // 0x1E8
    }
    #[repr(C)]
    pub struct C_INIT_SetHitboxToClosest {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nControlPointNumber: [u8; 0x4], // 0x1E8
        pub m_nDesiredHitbox: [u8; 0x4], // 0x1EC
        pub m_vecHitBoxScale: [u8; 0x6D8], // 0x1F0
        pub m_HitboxSetName: [u8; 0x80], // 0x8C8
        pub m_bUseBones: [u8; 0x1], // 0x948
        pub m_bUseClosestPointOnHitbox: [u8; 0x3], // 0x949
        pub m_nTestType: [u8; 0x4], // 0x94C
        pub m_flHybridRatio: [u8; 0x178], // 0x950
        pub m_bUpdatePosition: [u8; 0x8], // 0xAC8
    }
    #[repr(C)]
    pub struct C_INIT_RingWave {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_TransformInput: [u8; 0x68], // 0x1E8
        pub m_flParticlesPerOrbit: [u8; 0x178], // 0x250
        pub m_flInitialRadius: [u8; 0x178], // 0x3C8
        pub m_flThickness: [u8; 0x178], // 0x540
        pub m_flInitialSpeedMin: [u8; 0x178], // 0x6B8
        pub m_flInitialSpeedMax: [u8; 0x178], // 0x830
        pub m_flRoll: [u8; 0x178], // 0x9A8
        pub m_flPitch: [u8; 0x178], // 0xB20
        pub m_flYaw: [u8; 0x178], // 0xC98
        pub m_bEvenDistribution: [u8; 0x1], // 0xE10
        pub m_bXYVelocityOnly: [u8; 0x7], // 0xE11
    }
    #[repr(C)]
    pub struct C_INIT_RandomTrailLength {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_flMinLength: [u8; 0x4], // 0x1E8
        pub m_flMaxLength: [u8; 0x4], // 0x1EC
        pub m_flLengthRandExponent: [u8; 0x8], // 0x1F0
    }
    #[repr(C)]
    pub struct C_OP_RemapScalar {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldInput: [u8; 0x4], // 0x1E0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E4
        pub m_flInputMin: [u8; 0x4], // 0x1E8
        pub m_flInputMax: [u8; 0x4], // 0x1EC
        pub m_flOutputMin: [u8; 0x4], // 0x1F0
        pub m_flOutputMax: [u8; 0x4], // 0x1F4
        pub m_bOldCode: [u8; 0x8], // 0x1F8
    }
    #[repr(C)]
    pub struct C_OP_DistanceBetweenTransforms {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldOutput: [u8; 0x8], // 0x1E0
        pub m_TransformStart: [u8; 0x68], // 0x1E8
        pub m_TransformEnd: [u8; 0x68], // 0x250
        pub m_flInputMin: [u8; 0x178], // 0x2B8
        pub m_flInputMax: [u8; 0x178], // 0x430
        pub m_flOutputMin: [u8; 0x178], // 0x5A8
        pub m_flOutputMax: [u8; 0x178], // 0x720
        pub m_flMaxTraceLength: [u8; 0x4], // 0x898
        pub m_flLOSScale: [u8; 0x4], // 0x89C
        pub m_CollisionGroupName: [u8; 0x80], // 0x8A0
        pub m_nTraceSet: [u8; 0x4], // 0x920
        pub m_bLOS: [u8; 0x4], // 0x924
        pub m_nSetMethod: [u8; 0x8], // 0x928
    }
    #[repr(C)]
    pub struct C_OP_DecayOffscreen {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flOffscreenTime: [u8; 0x178], // 0x1E0
    }
    #[repr(C)]
    pub struct C_INIT_CreateSequentialPath {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_fMaxDistance: [u8; 0x4], // 0x1E8
        pub m_flNumToAssign: [u8; 0x4], // 0x1EC
        pub m_bLoop: [u8; 0x1], // 0x1F0
        pub m_bCPPairs: [u8; 0x1], // 0x1F1
        pub m_bSaveOffset: [u8; 0xE], // 0x1F2
        pub m_PathParams: [u8; 0x40], // 0x200
    }
    #[repr(C)]
    pub struct C_OP_EndCapTimedDecay {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flDecayTime: [u8; 0x178], // 0x1E0
    }
    #[repr(C)]
    pub struct C_OP_RemapDistanceToLineSegmentBase {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nCP0: [u8; 0x4], // 0x1E0
        pub m_nCP1: [u8; 0x4], // 0x1E4
        pub m_flMinInputValue: [u8; 0x4], // 0x1E8
        pub m_flMaxInputValue: [u8; 0x4], // 0x1EC
        pub m_bInfiniteLine: [u8; 0x8], // 0x1F0
    }
    #[repr(C)]
    pub struct C_OP_ContinuousEmitter {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_flEmissionDuration: [u8; 0x178], // 0x1E8
        pub m_flStartTime: [u8; 0x178], // 0x360
        pub m_flEmitRate: [u8; 0x178], // 0x4D8
        pub m_flEmissionScale: [u8; 0x4], // 0x650
        pub m_flScalePerParentParticle: [u8; 0x4], // 0x654
        pub m_bInitFromKilledParentParticles: [u8; 0x4], // 0x658
        pub m_nEventType: [u8; 0x4], // 0x65C
        pub m_nSnapshotControlPoint: [u8; 0x8], // 0x660
        pub m_strSnapshotSubset: [u8; 0x8], // 0x668
        pub m_nLimitPerUpdate: [u8; 0x4], // 0x670
        pub m_bForceEmitOnFirstUpdate: [u8; 0x1], // 0x674
        pub m_bForceEmitOnLastUpdate: [u8; 0xB], // 0x675
    }
    #[repr(C)]
    pub struct C_OP_OscillateVectorSimple {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_Rate: [u8; 0xC], // 0x1E0
        pub m_Frequency: [u8; 0xC], // 0x1EC
        pub m_nField: [u8; 0x4], // 0x1F8
        pub m_flOscMult: [u8; 0x4], // 0x1FC
        pub m_flOscAdd: [u8; 0x4], // 0x200
        pub m_bOffset: [u8; 0x4], // 0x204
    }
    #[repr(C)]
    pub struct C_INIT_SequenceLifeTime {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_flFramerate: [u8; 0x8], // 0x1E8
    }
    #[repr(C)]
    pub struct C_INIT_MoveBetweenPoints {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_flSpeedMin: [u8; 0x178], // 0x1E8
        pub m_flSpeedMax: [u8; 0x178], // 0x360
        pub m_flEndSpread: [u8; 0x178], // 0x4D8
        pub m_flStartOffset: [u8; 0x178], // 0x650
        pub m_flEndOffset: [u8; 0x178], // 0x7C8
        pub m_nEndControlPointNumber: [u8; 0x4], // 0x940
        pub m_bTrailBias: [u8; 0x4], // 0x944
    }
    #[repr(C)]
    pub struct C_INIT_StatusEffectTf {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_flSFXColorWarpAmount: [u8; 0x4], // 0x1E8
        pub m_flSFXNormalAmount: [u8; 0x4], // 0x1EC
        pub m_flSFXMetalnessAmount: [u8; 0x4], // 0x1F0
        pub m_flSFXRoughnessAmount: [u8; 0x4], // 0x1F4
        pub m_flSFXSelfIllumAmount: [u8; 0x4], // 0x1F8
        pub m_flSFXSScale: [u8; 0x4], // 0x1FC
        pub m_flSFXSScrollX: [u8; 0x4], // 0x200
        pub m_flSFXSScrollY: [u8; 0x4], // 0x204
        pub m_flSFXSScrollZ: [u8; 0x4], // 0x208
        pub m_flSFXSOffsetX: [u8; 0x4], // 0x20C
        pub m_flSFXSOffsetY: [u8; 0x4], // 0x210
        pub m_flSFXSOffsetZ: [u8; 0x4], // 0x214
        pub m_nDetailCombo: [u8; 0x4], // 0x218
        pub m_flSFXSDetailAmount: [u8; 0x4], // 0x21C
        pub m_flSFXSDetailScale: [u8; 0x4], // 0x220
        pub m_flSFXSDetailScrollX: [u8; 0x4], // 0x224
        pub m_flSFXSDetailScrollY: [u8; 0x4], // 0x228
        pub m_flSFXSDetailScrollZ: [u8; 0x4], // 0x22C
        pub m_flSFXSUseModelUVs: [u8; 0x4], // 0x230
        pub m_flSFXEnvMapAmount: [u8; 0x4], // 0x234
    }
    #[repr(C)]
    pub struct C_OP_SetUserEvent {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flInput: [u8; 0x178], // 0x1E0
        pub m_flRisingEdge: [u8; 0x178], // 0x358
        pub m_nRisingEventType: [u8; 0x8], // 0x4D0
        pub m_flFallingEdge: [u8; 0x178], // 0x4D8
        pub m_nFallingEventType: [u8; 0x8], // 0x650
    }
    #[repr(C)]
    pub struct C_OP_QuantizeFloat {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_InputValue: [u8; 0x178], // 0x1E0
        pub m_nOutputField: [u8; 0x28], // 0x358
    }
    #[repr(C)]
    pub struct C_OP_BasicMovement {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_Gravity: [u8; 0x6D8], // 0x1E0
        pub m_fDrag: [u8; 0x178], // 0x8B8
        pub m_massControls: [u8; 0x470], // 0xA30
        pub m_nMaxConstraintPasses: [u8; 0x4], // 0xEA0
        pub m_bUseNewCode: [u8; 0x4], // 0xEA4
    }
    #[repr(C)]
    pub struct C_INIT_RandomNamedModelElement {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_hModel: [u8; 0x8], // 0x1E8
        pub m_names: [u8; 0x18], // 0x1F0
        pub m_bShuffle: [u8; 0x1], // 0x208
        pub m_bLinear: [u8; 0x1], // 0x209
        pub m_bModelFromRenderer: [u8; 0x2], // 0x20A
        pub m_nFieldOutput: [u8; 0x4], // 0x20C
    }
    #[repr(C)]
    pub struct C_INIT_InitFromParentKilled {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nAttributeToCopy: [u8; 0x4], // 0x1E8
        pub m_nEventType: [u8; 0x84], // 0x1EC
    }
    #[repr(C)]
    pub struct C_OP_Callback {
        pub pad_0: [u8; 0x230], // 0x0
    }
    #[repr(C)]
    pub struct CParticleFunction {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_flOpStrength: [u8; 0x178], // 0x8
        pub m_nOpEndCapState: [u8; 0x4], // 0x180
        pub m_nToolsState: [u8; 0x4], // 0x184
        pub m_flOpStartFadeInTime: [u8; 0x4], // 0x188
        pub m_flOpEndFadeInTime: [u8; 0x4], // 0x18C
        pub m_flOpStartFadeOutTime: [u8; 0x4], // 0x190
        pub m_flOpEndFadeOutTime: [u8; 0x4], // 0x194
        pub m_flOpFadeOscillatePeriod: [u8; 0x4], // 0x198
        pub m_bNormalizeToStopTime: [u8; 0x4], // 0x19C
        pub m_flOpTimeOffsetMin: [u8; 0x4], // 0x1A0
        pub m_flOpTimeOffsetMax: [u8; 0x4], // 0x1A4
        pub m_nOpTimeOffsetSeed: [u8; 0x4], // 0x1A8
        pub m_nOpTimeScaleSeed: [u8; 0x4], // 0x1AC
        pub m_flOpTimeScaleMin: [u8; 0x4], // 0x1B0
        pub m_flOpTimeScaleMax: [u8; 0x6], // 0x1B4
        pub m_bDisableOperator: [u8; 0x6], // 0x1BA
        pub m_Notes: [u8; 0x20], // 0x1C0
    }
    #[repr(C)]
    pub struct C_OP_GlobalLight {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flScale: [u8; 0x4], // 0x1E0
        pub m_bClampLowerRange: [u8; 0x1], // 0x1E4
        pub m_bClampUpperRange: [u8; 0x3], // 0x1E5
    }
    #[repr(C)]
    pub struct C_INIT_OffsetVectorToVector {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nFieldInput: [u8; 0x4], // 0x1E8
        pub m_nFieldOutput: [u8; 0x4], // 0x1EC
        pub m_vecOutputMin: [u8; 0xC], // 0x1F0
        pub m_vecOutputMax: [u8; 0xC], // 0x1FC
        pub m_randomnessParameters: [u8; 0x8], // 0x208
    }
    #[repr(C)]
    pub struct C_OP_SetPerChildControlPointFromAttribute {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nChildGroupID: [u8; 0x4], // 0x1E0
        pub m_nFirstControlPoint: [u8; 0x4], // 0x1E4
        pub m_nNumControlPoints: [u8; 0x4], // 0x1E8
        pub m_nParticleIncrement: [u8; 0x4], // 0x1EC
        pub m_nFirstSourcePoint: [u8; 0x4], // 0x1F0
        pub m_bNumBasedOnParticleCount: [u8; 0x4], // 0x1F4
        pub m_nAttributeToRead: [u8; 0x4], // 0x1F8
        pub m_nCPField: [u8; 0x4], // 0x1FC
    }
    #[repr(C)]
    pub struct C_OP_SetParentControlPointsToChildCP {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nChildGroupID: [u8; 0x4], // 0x1E8
        pub m_nChildControlPoint: [u8; 0x4], // 0x1EC
        pub m_nNumControlPoints: [u8; 0x4], // 0x1F0
        pub m_nFirstSourcePoint: [u8; 0x4], // 0x1F4
        pub m_bSetOrientation: [u8; 0x8], // 0x1F8
    }
    #[repr(C)]
    pub struct C_OP_BoxConstraint {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_vecMin: [u8; 0x6D8], // 0x1E0
        pub m_vecMax: [u8; 0x6D8], // 0x8B8
        pub m_nCP: [u8; 0x4], // 0xF90
        pub m_bLocalSpace: [u8; 0x1], // 0xF94
        pub m_bAccountForRadius: [u8; 0x3], // 0xF95
    }
    #[repr(C)]
    pub struct C_INIT_CreatePhyllotaxis {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nControlPointNumber: [u8; 0x4], // 0x1E8
        pub m_nScaleCP: [u8; 0x4], // 0x1EC
        pub m_nComponent: [u8; 0x4], // 0x1F0
        pub m_fRadCentCore: [u8; 0x4], // 0x1F4
        pub m_fRadPerPoint: [u8; 0x4], // 0x1F8
        pub m_fRadPerPointTo: [u8; 0x4], // 0x1FC
        pub m_fpointAngle: [u8; 0x4], // 0x200
        pub m_fsizeOverall: [u8; 0x4], // 0x204
        pub m_fRadBias: [u8; 0x4], // 0x208
        pub m_fMinRad: [u8; 0x4], // 0x20C
        pub m_fDistBias: [u8; 0x4], // 0x210
        pub m_bUseLocalCoords: [u8; 0x1], // 0x214
        pub m_bUseWithContEmit: [u8; 0x1], // 0x215
        pub m_bUseOrigRadius: [u8; 0x2], // 0x216
    }
    #[repr(C)]
    pub struct C_OP_AttractToControlPoint {
        pub pad_0: [u8; 0x1F0], // 0x0
        pub m_vecComponentScale: [u8; 0x10], // 0x1F0
        pub m_fForceAmount: [u8; 0x178], // 0x200
        pub m_fMinimumDistance: [u8; 0x178], // 0x378
        pub m_fFalloffPower: [u8; 0x8], // 0x4F0
        pub m_TransformInput: [u8; 0x68], // 0x4F8
        pub m_fForceAmountMin: [u8; 0x178], // 0x560
        pub m_bApplyMinForce: [u8; 0x8], // 0x6D8
    }
    #[repr(C)]
    pub struct C_INIT_RandomLifeTime {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_fLifetimeMin: [u8; 0x4], // 0x1E8
        pub m_fLifetimeMax: [u8; 0x4], // 0x1EC
        pub m_fLifetimeRandExponent: [u8; 0x8], // 0x1F0
    }
    #[repr(C)]
    pub struct C_INIT_RemapParticleCountToNamedModelSequenceScalar {
        pub pad_0: [u8; 0x238], // 0x0
    }
    #[repr(C)]
    pub struct C_INIT_VelocityRadialRandom {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_bPerParticleCenter: [u8; 0x4], // 0x1E8
        pub m_nControlPointNumber: [u8; 0x4], // 0x1EC
        pub m_vecPosition: [u8; 0x6D8], // 0x1F0
        pub m_vecFwd: [u8; 0x6D8], // 0x8C8
        pub m_fSpeedMin: [u8; 0x178], // 0xFA0
        pub m_fSpeedMax: [u8; 0x178], // 0x1118
        pub m_vecLocalCoordinateSystemSpeedScale: [u8; 0xD], // 0x1290
        pub m_bIgnoreDelta: [u8; 0x3], // 0x129D
    }
    #[repr(C)]
    pub struct C_INIT_RandomRadius {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_flRadiusMin: [u8; 0x4], // 0x1E8
        pub m_flRadiusMax: [u8; 0x4], // 0x1EC
        pub m_flRadiusRandExponent: [u8; 0x8], // 0x1F0
    }
    #[repr(C)]
    pub struct C_OP_Orient2DRelToCP {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flRotOffset: [u8; 0x4], // 0x1E0
        pub m_flSpinStrength: [u8; 0x4], // 0x1E4
        pub m_nCP: [u8; 0x4], // 0x1E8
        pub m_nFieldOutput: [u8; 0x4], // 0x1EC
    }
    #[repr(C)]
    pub struct TextureControls_t {
        pub m_flFinalTextureScaleU: [u8; 0x178], // 0x0
        pub m_flFinalTextureScaleV: [u8; 0x178], // 0x178
        pub m_flFinalTextureOffsetU: [u8; 0x178], // 0x2F0
        pub m_flFinalTextureOffsetV: [u8; 0x178], // 0x468
        pub m_flFinalTextureUVRotation: [u8; 0x178], // 0x5E0
        pub m_flZoomScale: [u8; 0x178], // 0x758
        pub m_flDistortion: [u8; 0x178], // 0x8D0
        pub m_bRandomizeOffsets: [u8; 0x1], // 0xA48
        pub m_bClampUVs: [u8; 0x3], // 0xA49
        pub m_nPerParticleBlend: [u8; 0x4], // 0xA4C
        pub m_nPerParticleScale: [u8; 0x4], // 0xA50
        pub m_nPerParticleOffsetU: [u8; 0x4], // 0xA54
        pub m_nPerParticleOffsetV: [u8; 0x4], // 0xA58
        pub m_nPerParticleRotation: [u8; 0x4], // 0xA5C
        pub m_nPerParticleZoom: [u8; 0x4], // 0xA60
        pub m_nPerParticleDistortion: [u8; 0x4], // 0xA64
    }
    #[repr(C)]
    pub struct ControlPointReference_t {
        pub m_controlPointNameString: [u8; 0x4], // 0x0
        pub m_vOffsetFromControlPoint: [u8; 0xC], // 0x4
        pub m_bOffsetInLocalSpace: [u8; 0x4], // 0x10
    }
    #[repr(C)]
    pub struct C_OP_SetControlPointToVectorExpression {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nExpression: [u8; 0x4], // 0x1E8
        pub m_nOutputCP: [u8; 0x4], // 0x1EC
        pub m_vInput1: [u8; 0x6D8], // 0x1F0
        pub m_vInput2: [u8; 0x6D8], // 0x8C8
        pub m_flLerp: [u8; 0x178], // 0xFA0
        pub m_bNormalizedOutput: [u8; 0x8], // 0x1118
    }
    #[repr(C)]
    pub struct C_OP_LightningSnapshotGenerator {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nCPSnapshot: [u8; 0x4], // 0x1E8
        pub m_nCPStartPnt: [u8; 0x4], // 0x1EC
        pub m_nCPEndPnt: [u8; 0x8], // 0x1F0
        pub m_flSegments: [u8; 0x178], // 0x1F8
        pub m_flOffset: [u8; 0x178], // 0x370
        pub m_flOffsetDecay: [u8; 0x178], // 0x4E8
        pub m_flRecalcRate: [u8; 0x178], // 0x660
        pub m_flUVScale: [u8; 0x178], // 0x7D8
        pub m_flUVOffset: [u8; 0x178], // 0x950
        pub m_flSplitRate: [u8; 0x178], // 0xAC8
        pub m_flRecursionSplitScale: [u8; 0x178], // 0xC40
        pub m_bScaleBranchDistance: [u8; 0x8], // 0xDB8
        pub m_flBranchDistanceScale: [u8; 0x178], // 0xDC0
        pub m_bScaleBranchOffset: [u8; 0x8], // 0xF38
        pub m_flBranchOffsetScale: [u8; 0x178], // 0xF40
        pub m_flBranchTwist: [u8; 0x178], // 0x10B8
        pub m_nBranchBehavior: [u8; 0x8], // 0x1230
        pub m_flRadiusStart: [u8; 0x178], // 0x1238
        pub m_flRadiusEnd: [u8; 0x178], // 0x13B0
        pub m_flDedicatedPool: [u8; 0x178], // 0x1528
    }
    #[repr(C)]
    pub struct C_OP_RemapNamedModelMeshGroupOnceTimed {
        pub pad_0: [u8; 0x240], // 0x0
    }
    #[repr(C)]
    pub struct C_INIT_RemapQAnglesToRotation {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_TransformInput: [u8; 0x68], // 0x1E8
    }
    #[repr(C)]
    pub struct C_INIT_PositionWarp {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_vecWarpMin: [u8; 0x6D8], // 0x1E8
        pub m_vecWarpMax: [u8; 0x6D8], // 0x8C0
        pub m_nScaleControlPointNumber: [u8; 0x4], // 0xF98
        pub m_nControlPointNumber: [u8; 0x4], // 0xF9C
        pub m_nRadiusComponent: [u8; 0x4], // 0xFA0
        pub m_flWarpTime: [u8; 0x4], // 0xFA4
        pub m_flWarpStartTime: [u8; 0x4], // 0xFA8
        pub m_flPrevPosScale: [u8; 0x4], // 0xFAC
        pub m_bInvertWarp: [u8; 0x1], // 0xFB0
        pub m_bUseCount: [u8; 0x7], // 0xFB1
    }
    #[repr(C)]
    pub struct C_OP_SetControlPointFieldToScalarExpression {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nExpression: [u8; 0x8], // 0x1E8
        pub m_flInput1: [u8; 0x178], // 0x1F0
        pub m_flInput2: [u8; 0x178], // 0x368
        pub m_flOutputRemap: [u8; 0x178], // 0x4E0
        pub m_nOutputCP: [u8; 0x4], // 0x658
        pub m_nOutVectorField: [u8; 0x4], // 0x65C
        pub m_flInterpolation: [u8; 0x178], // 0x660
    }
    #[repr(C)]
    pub struct C_OP_CreateParticleSystemRenderer {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_hEffect: [u8; 0x8], // 0x230
        pub m_nEventType: [u8; 0x8], // 0x238
        pub m_vecCPs: [u8; 0x10], // 0x240
        pub m_szParticleConfig: [u8; 0x8], // 0x250
        pub m_AggregationPos: [u8; 0x6D8], // 0x258
    }
    #[repr(C)]
    pub struct CParticleFunctionForce {
        pub pad_0: [u8; 0x1F0], // 0x0
    }
    #[repr(C)]
    pub struct C_INIT_RandomVectorComponent {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_flMin: [u8; 0x4], // 0x1E8
        pub m_flMax: [u8; 0x4], // 0x1EC
        pub m_nFieldOutput: [u8; 0x4], // 0x1F0
        pub m_nComponent: [u8; 0x4], // 0x1F4
    }
    #[repr(C)]
    pub struct C_OP_InheritFromParentParticles {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flScale: [u8; 0x4], // 0x1E0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E4
        pub m_nIncrement: [u8; 0x4], // 0x1E8
        pub m_bRandomDistribution: [u8; 0x4], // 0x1EC
    }
    #[repr(C)]
    pub struct C_INIT_SetVectorAttributeToVectorExpression {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nExpression: [u8; 0x8], // 0x1E8
        pub m_vInput1: [u8; 0x6D8], // 0x1F0
        pub m_vInput2: [u8; 0x6D8], // 0x8C8
        pub m_flLerp: [u8; 0x178], // 0xFA0
        pub m_nOutputField: [u8; 0x4], // 0x1118
        pub m_nSetMethod: [u8; 0x4], // 0x111C
        pub m_bNormalizedOutput: [u8; 0x70], // 0x1120
    }
    #[repr(C)]
    pub struct C_OP_RemapTransformVisibilityToVector {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nSetMethod: [u8; 0x8], // 0x1E0
        pub m_TransformInput: [u8; 0x68], // 0x1E8
        pub m_nFieldOutput: [u8; 0x4], // 0x250
        pub m_flInputMin: [u8; 0x4], // 0x254
        pub m_flInputMax: [u8; 0x4], // 0x258
        pub m_vecOutputMin: [u8; 0xC], // 0x25C
        pub m_vecOutputMax: [u8; 0xC], // 0x268
        pub m_flRadius: [u8; 0x4], // 0x274
    }
    #[repr(C)]
    pub struct C_OP_DirectionBetweenVecsToVec {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldOutput: [u8; 0x8], // 0x1E0
        pub m_vecPoint1: [u8; 0x6D8], // 0x1E8
        pub m_vecPoint2: [u8; 0x6D8], // 0x8C0
    }
    #[repr(C)]
    pub struct C_OP_MovementLoopInsideSphere {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nCP: [u8; 0x8], // 0x1E0
        pub m_flDistance: [u8; 0x178], // 0x1E8
        pub m_vecScale: [u8; 0x6D8], // 0x360
        pub m_nDistSqrAttr: [u8; 0x8], // 0xA38
    }
    #[repr(C)]
    pub struct C_OP_RenderSimpleModelCollection {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_bCenterOffset: [u8; 0x8], // 0x230
        pub m_hModel: [u8; 0x8], // 0x238
        pub m_modelInput: [u8; 0x60], // 0x240
        pub m_fSizeCullScale: [u8; 0x178], // 0x2A0
        pub m_bDisableShadows: [u8; 0x1], // 0x418
        pub m_bDisableMotionBlur: [u8; 0x1], // 0x419
        pub m_bAcceptsDecals: [u8; 0x6], // 0x41A
        pub m_fDrawFilter: [u8; 0x178], // 0x420
        pub m_nAngularVelocityField: [u8; 0x18], // 0x598
    }
    #[repr(C)]
    pub struct C_OP_QuantizeCPComponent {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_flInputValue: [u8; 0x178], // 0x1E8
        pub m_nCPOutput: [u8; 0x4], // 0x360
        pub m_nOutVectorField: [u8; 0x4], // 0x364
        pub m_flQuantizeValue: [u8; 0x178], // 0x368
    }
    #[repr(C)]
    pub struct C_OP_PlayEndCapWhenFinished {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_bFireOnEmissionEnd: [u8; 0x1], // 0x1E8
        pub m_bIncludeChildren: [u8; 0x7], // 0x1E9
    }
    #[repr(C)]
    pub struct C_INIT_InitFloatCollection {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_InputValue: [u8; 0x178], // 0x1E8
        pub m_nOutputField: [u8; 0x8], // 0x360
    }
    #[repr(C)]
    pub struct CPathParameters {
        pub m_nStartControlPointNumber: [u8; 0x4], // 0x0
        pub m_nMidControlPointNumber: [u8; 0x4], // 0x4
        pub m_nEndControlPointNumber: [u8; 0x4], // 0x8
        pub m_nBulgeControl: [u8; 0x4], // 0xC
        pub m_flBulge: [u8; 0x4], // 0x10
        pub m_flMidPoint: [u8; 0x4], // 0x14
        pub m_vStartPointOffset: [u8; 0xC], // 0x18
        pub m_vMidPointOffset: [u8; 0xC], // 0x24
        pub m_vEndOffset: [u8; 0x10], // 0x30
    }
    #[repr(C)]
    pub struct C_OP_RemapScalarEndCap {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldInput: [u8; 0x4], // 0x1E0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E4
        pub m_flInputMin: [u8; 0x4], // 0x1E8
        pub m_flInputMax: [u8; 0x4], // 0x1EC
        pub m_flOutputMin: [u8; 0x4], // 0x1F0
        pub m_flOutputMax: [u8; 0x4], // 0x1F4
    }
    #[repr(C)]
    pub struct C_INIT_CreateFromPlaneCache {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_vecOffsetMin: [u8; 0xC], // 0x1E8
        pub m_vecOffsetMax: [u8; 0xD], // 0x1F4
        pub m_bUseNormal: [u8; 0x7], // 0x201
    }
    #[repr(C)]
    pub struct C_OP_LazyCullCompareFloat {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flComparsion1: [u8; 0x178], // 0x1E0
        pub m_flComparsion2: [u8; 0x178], // 0x358
        pub m_flCullTime: [u8; 0x178], // 0x4D0
    }
    #[repr(C)]
    pub struct C_OP_ControlPointToRadialScreenSpace {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nCPIn: [u8; 0x4], // 0x1E8
        pub m_vecCP1Pos: [u8; 0xC], // 0x1EC
        pub m_nCPOut: [u8; 0x4], // 0x1F8
        pub m_nCPOutField: [u8; 0x4], // 0x1FC
        pub m_nCPSSPosOut: [u8; 0x8], // 0x200
    }
    #[repr(C)]
    pub struct C_OP_SpinUpdate {
        pub pad_0: [u8; 0x1E0], // 0x0
    }
    #[repr(C)]
    pub struct C_INIT_NormalOffset {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_OffsetMin: [u8; 0xC], // 0x1E8
        pub m_OffsetMax: [u8; 0xC], // 0x1F4
        pub m_nControlPointNumber: [u8; 0x4], // 0x200
        pub m_bLocalCoords: [u8; 0x1], // 0x204
        pub m_bNormalize: [u8; 0x3], // 0x205
    }
    #[repr(C)]
    pub struct C_OP_RemapDistanceToLineSegmentToVector {
        pub pad_0: [u8; 0x1F8], // 0x0
        pub m_nFieldOutput: [u8; 0x4], // 0x1F8
        pub m_vMinOutputValue: [u8; 0xC], // 0x1FC
        pub m_vMaxOutputValue: [u8; 0x10], // 0x208
    }
    #[repr(C)]
    pub struct C_OP_RenderAsModels {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_ModelList: [u8; 0x1C], // 0x230
        pub m_flModelScale: [u8; 0x4], // 0x24C
        pub m_bFitToModelSize: [u8; 0x1], // 0x250
        pub m_bNonUniformScaling: [u8; 0x3], // 0x251
        pub m_nXAxisScalingAttribute: [u8; 0x4], // 0x254
        pub m_nYAxisScalingAttribute: [u8; 0x4], // 0x258
        pub m_nZAxisScalingAttribute: [u8; 0x4], // 0x25C
        pub m_nSizeCullBloat: [u8; 0x8], // 0x260
    }
    #[repr(C)]
    pub struct C_INIT_CreationNoise {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E8
        pub m_bAbsVal: [u8; 0x1], // 0x1EC
        pub m_bAbsValInv: [u8; 0x3], // 0x1ED
        pub m_flOffset: [u8; 0x4], // 0x1F0
        pub m_flOutputMin: [u8; 0x4], // 0x1F4
        pub m_flOutputMax: [u8; 0x4], // 0x1F8
        pub m_flNoiseScale: [u8; 0x4], // 0x1FC
        pub m_flNoiseScaleLoc: [u8; 0x4], // 0x200
        pub m_vecOffsetLoc: [u8; 0xC], // 0x204
        pub m_flWorldTimeScale: [u8; 0x8], // 0x210
    }
    #[repr(C)]
    pub struct C_OP_Spin {
        pub pad_0: [u8; 0x1F8], // 0x0
    }
    #[repr(C)]
    pub struct C_OP_GameLiquidSpill {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_flLiquidContentsField: [u8; 0x178], // 0x230
        pub m_flExpirationTime: [u8; 0x178], // 0x3A8
        pub m_flRadius: [u8; 0x178], // 0x520
        pub m_bCheckExposedToSky: [u8; 0x4], // 0x698
        pub m_nAmountAttribute: [u8; 0x4], // 0x69C
    }
    #[repr(C)]
    pub struct C_OP_InstantaneousEmitter {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nParticlesToEmit: [u8; 0x178], // 0x1E8
        pub m_flStartTime: [u8; 0x178], // 0x360
        pub m_flInitFromKilledParentParticles: [u8; 0x4], // 0x4D8
        pub m_nEventType: [u8; 0x4], // 0x4DC
        pub m_flParentParticleScale: [u8; 0x178], // 0x4E0
        pub m_nMaxEmittedPerFrame: [u8; 0x4], // 0x658
        pub m_nSnapshotControlPoint: [u8; 0x4], // 0x65C
        pub m_strSnapshotSubset: [u8; 0x8], // 0x660
    }
    #[repr(C)]
    pub struct C_OP_ConstrainLineLength {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flMinDistance: [u8; 0x4], // 0x1E0
        pub m_flMaxDistance: [u8; 0x4], // 0x1E4
    }
    #[repr(C)]
    pub struct C_INIT_LifespanFromVelocity {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_vecComponentScale: [u8; 0xC], // 0x1E8
        pub m_flTraceOffset: [u8; 0x4], // 0x1F4
        pub m_flMaxTraceLength: [u8; 0x4], // 0x1F8
        pub m_flTraceTolerance: [u8; 0x4], // 0x1FC
        pub m_nMaxPlanes: [u8; 0x8], // 0x200
        pub m_CollisionGroupName: [u8; 0x80], // 0x208
        pub m_nTraceSet: [u8; 0x10], // 0x288
        pub m_bIncludeWater: [u8; 0x8], // 0x298
    }
    #[repr(C)]
    pub struct CBaseTrailRenderer {
        pub pad_0: [u8; 0x2ED8], // 0x0
        pub m_nOrientationType: [u8; 0x4], // 0x2ED8
        pub m_nOrientationControlPoint: [u8; 0x4], // 0x2EDC
        pub m_flMinSize: [u8; 0x4], // 0x2EE0
        pub m_flMaxSize: [u8; 0x4], // 0x2EE4
        pub m_flStartFadeSize: [u8; 0x178], // 0x2EE8
        pub m_flEndFadeSize: [u8; 0x178], // 0x3060
        pub m_flSubPixelAAScale: [u8; 0x178], // 0x31D8
        pub m_bClampV: [u8; 0x8], // 0x3350
    }
    #[repr(C)]
    pub struct C_INIT_VelocityFromCP {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_velocityInput: [u8; 0x6D8], // 0x1E8
        pub m_transformInput: [u8; 0x68], // 0x8C0
        pub m_flVelocityScale: [u8; 0x4], // 0x928
        pub m_bDirectionOnly: [u8; 0x4], // 0x92C
    }
    #[repr(C)]
    pub struct C_OP_SetControlPointOrientation {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_bUseWorldLocation: [u8; 0x2], // 0x1E8
        pub m_bRandomize: [u8; 0x1], // 0x1EA
        pub m_bSetOnce: [u8; 0x1], // 0x1EB
        pub m_nCP: [u8; 0x4], // 0x1EC
        pub m_nHeadLocation: [u8; 0x4], // 0x1F0
        pub m_vecRotation: [u8; 0xC], // 0x1F4
        pub m_vecRotationB: [u8; 0x10], // 0x200
        pub m_flInterpolation: [u8; 0x178], // 0x210
    }
    #[repr(C)]
    pub struct C_OP_MovementSkinnedPositionFromCPSnapshot {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nSnapshotControlPointNumber: [u8; 0x4], // 0x1E0
        pub m_nControlPointNumber: [u8; 0x4], // 0x1E4
        pub m_bRandom: [u8; 0x4], // 0x1E8
        pub m_nRandomSeed: [u8; 0x4], // 0x1EC
        pub m_bSetNormal: [u8; 0x1], // 0x1F0
        pub m_bSetRadius: [u8; 0x3], // 0x1F1
        pub m_nIndexType: [u8; 0x4], // 0x1F4
        pub m_flReadIndex: [u8; 0x178], // 0x1F8
        pub m_flIncrement: [u8; 0x178], // 0x370
        pub m_nFullLoopIncrement: [u8; 0x178], // 0x4E8
        pub m_nSnapShotStartPoint: [u8; 0x178], // 0x660
        pub m_flInterpolation: [u8; 0x178], // 0x7D8
    }
    #[repr(C)]
    pub struct C_OP_MultiSegmentDisplaySnapshotGenerator {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nCPSnapshot: [u8; 0x4], // 0x1E8
        pub m_nSegCount: [u8; 0x4], // 0x1EC
        pub m_nInputType: [u8; 0x8], // 0x1F0
        pub m_strDefaultString: [u8; 0x8], // 0x1F8
        pub m_flValue: [u8; 0x178], // 0x200
        pub m_flScollOffset: [u8; 0x178], // 0x378
        pub m_SpecialCharList: [u8; 0x18], // 0x4F0
        pub m_vecColorUnlit: [u8; 0x6D8], // 0x508
        pub m_vecColorLit: [u8; 0x6D8], // 0xBE0
        pub m_flRadius: [u8; 0x178], // 0x12B8
        pub m_flSpacing: [u8; 0x178], // 0x1430
        pub m_flMinCount: [u8; 0x178], // 0x15A8
        pub m_flMaxCount: [u8; 0x178], // 0x1720
        pub m_bPrependEmpty: [u8; 0x8], // 0x1898
        pub m_flDigitsAfterDecimal: [u8; 0x178], // 0x18A0
    }
    #[repr(C)]
    pub struct C_OP_OscillateVector {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_RateMin: [u8; 0xC], // 0x1E0
        pub m_RateMax: [u8; 0xC], // 0x1EC
        pub m_FrequencyMin: [u8; 0xC], // 0x1F8
        pub m_FrequencyMax: [u8; 0xC], // 0x204
        pub m_nField: [u8; 0x4], // 0x210
        pub m_bProportional: [u8; 0x1], // 0x214
        pub m_bProportionalOp: [u8; 0x1], // 0x215
        pub m_bOffset: [u8; 0x2], // 0x216
        pub m_flStartTime_min: [u8; 0x4], // 0x218
        pub m_flStartTime_max: [u8; 0x4], // 0x21C
        pub m_flEndTime_min: [u8; 0x4], // 0x220
        pub m_flEndTime_max: [u8; 0x4], // 0x224
        pub m_flOscMult: [u8; 0x178], // 0x228
        pub m_flOscAdd: [u8; 0x178], // 0x3A0
        pub m_flRateScale: [u8; 0x178], // 0x518
    }
    #[repr(C)]
    pub struct C_OP_PositionLock {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_TransformInput: [u8; 0x68], // 0x1E0
        pub m_flStartTime_min: [u8; 0x4], // 0x248
        pub m_flStartTime_max: [u8; 0x4], // 0x24C
        pub m_flStartTime_exp: [u8; 0x4], // 0x250
        pub m_flEndTime_min: [u8; 0x4], // 0x254
        pub m_flEndTime_max: [u8; 0x4], // 0x258
        pub m_flEndTime_exp: [u8; 0x4], // 0x25C
        pub m_flRange: [u8; 0x8], // 0x260
        pub m_flRangeBias: [u8; 0x178], // 0x268
        pub m_flJumpThreshold: [u8; 0x4], // 0x3E0
        pub m_flPrevPosScale: [u8; 0x4], // 0x3E4
        pub m_bLockRot: [u8; 0x8], // 0x3E8
        pub m_vecScale: [u8; 0x6D8], // 0x3F0
        pub m_nFieldOutput: [u8; 0x4], // 0xAC8
        pub m_nFieldOutputPrev: [u8; 0x4], // 0xACC
    }
    #[repr(C)]
    pub struct C_OP_RenderVRHapticEvent {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_nHand: [u8; 0x4], // 0x230
        pub m_nOutputHandCP: [u8; 0x4], // 0x234
        pub m_nOutputField: [u8; 0x8], // 0x238
        pub m_flAmplitude: [u8; 0x178], // 0x240
    }
    #[repr(C)]
    pub struct C_OP_SetControlPointToImpactPoint {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nCPOut: [u8; 0x4], // 0x1E8
        pub m_nCPIn: [u8; 0x4], // 0x1EC
        pub m_flUpdateRate: [u8; 0x8], // 0x1F0
        pub m_flTraceLength: [u8; 0x178], // 0x1F8
        pub m_flStartOffset: [u8; 0x4], // 0x370
        pub m_flOffset: [u8; 0x4], // 0x374
        pub m_vecTraceDir: [u8; 0xC], // 0x378
        pub m_CollisionGroupName: [u8; 0x80], // 0x384
        pub m_nTraceSet: [u8; 0x4], // 0x404
        pub m_bSetToEndpoint: [u8; 0x1], // 0x408
        pub m_bTraceToClosestSurface: [u8; 0x1], // 0x409
        pub m_bIncludeWater: [u8; 0x6], // 0x40A
    }
    #[repr(C)]
    pub struct C_OP_InterpolateRadius {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flStartTime: [u8; 0x4], // 0x1E0
        pub m_flEndTime: [u8; 0x4], // 0x1E4
        pub m_flStartScale: [u8; 0x4], // 0x1E8
        pub m_flEndScale: [u8; 0x4], // 0x1EC
        pub m_bEaseInAndOut: [u8; 0x4], // 0x1F0
        pub m_flBias: [u8; 0x3C], // 0x1F4
    }
    #[repr(C)]
    pub struct C_OP_ReinitializeScalarEndCap {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E0
        pub m_flOutputMin: [u8; 0x4], // 0x1E4
        pub m_flOutputMax: [u8; 0x8], // 0x1E8
    }
    #[repr(C)]
    pub struct C_OP_TurbulenceForce {
        pub pad_0: [u8; 0x1F0], // 0x0
        pub m_flNoiseCoordScale0: [u8; 0x4], // 0x1F0
        pub m_flNoiseCoordScale1: [u8; 0x4], // 0x1F4
        pub m_flNoiseCoordScale2: [u8; 0x4], // 0x1F8
        pub m_flNoiseCoordScale3: [u8; 0x4], // 0x1FC
        pub m_vecNoiseAmount0: [u8; 0xC], // 0x200
        pub m_vecNoiseAmount1: [u8; 0xC], // 0x20C
        pub m_vecNoiseAmount2: [u8; 0xC], // 0x218
        pub m_vecNoiseAmount3: [u8; 0xC], // 0x224
    }
    #[repr(C)]
    pub struct C_OP_RemapNamedModelElementOnceTimed {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_hModel: [u8; 0x8], // 0x1E0
        pub m_inNames: [u8; 0x18], // 0x1E8
        pub m_outNames: [u8; 0x18], // 0x200
        pub m_fallbackNames: [u8; 0x18], // 0x218
        pub m_bModelFromRenderer: [u8; 0x1], // 0x230
        pub m_bProportional: [u8; 0x3], // 0x231
        pub m_nFieldInput: [u8; 0x4], // 0x234
        pub m_nFieldOutput: [u8; 0x4], // 0x238
        pub m_flRemapTime: [u8; 0x4], // 0x23C
    }
    #[repr(C)]
    pub struct C_OP_SetControlPointToPlayer {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nCP1: [u8; 0x4], // 0x1E8
        pub m_vecCP1Pos: [u8; 0xC], // 0x1EC
        pub m_bOrientToEyes: [u8; 0x4], // 0x1F8
        pub m_nPosition: [u8; 0x4], // 0x1FC
        pub m_nRadiusCP: [u8; 0x4], // 0x200
        pub m_nRadiusCPField: [u8; 0x4], // 0x204
    }
    #[repr(C)]
    pub struct C_OP_EndCapTimedFreeze {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flFreezeTime: [u8; 0x178], // 0x1E0
    }
    #[repr(C)]
    pub struct C_OP_RenderGpuImplicit {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_bUsePerParticleRadius: [u8; 0x4], // 0x230
        pub m_nVertexCountKb: [u8; 0x4], // 0x234
        pub m_nIndexCountKb: [u8; 0x8], // 0x238
        pub m_fGridSize: [u8; 0x178], // 0x240
        pub m_fRadiusScale: [u8; 0x178], // 0x3B8
        pub m_fIsosurfaceThreshold: [u8; 0x178], // 0x530
        pub m_nScaleCP: [u8; 0x8], // 0x6A8
        pub m_hMaterial: [u8; 0x8], // 0x6B0
    }
    #[repr(C)]
    pub struct C_OP_SetRandomControlPointPosition {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_bUseWorldLocation: [u8; 0x1], // 0x1E8
        pub m_bOrient: [u8; 0x3], // 0x1E9
        pub m_nCP1: [u8; 0x4], // 0x1EC
        pub m_nHeadLocation: [u8; 0x8], // 0x1F0
        pub m_flReRandomRate: [u8; 0x178], // 0x1F8
        pub m_vecCPMinPos: [u8; 0xC], // 0x370
        pub m_vecCPMaxPos: [u8; 0xC], // 0x37C
        pub m_flInterpolation: [u8; 0x178], // 0x388
    }
    #[repr(C)]
    pub struct C_OP_RenderVolumetricEmitter {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_strChannelType: [u8; 0x8], // 0x230
        pub m_nType: [u8; 0x4], // 0x238
        pub m_nCreationType: [u8; 0x4], // 0x23C
        pub m_nEventType: [u8; 0x8], // 0x240
        pub m_vecPos: [u8; 0x6D8], // 0x248
        pub m_vecVelocity: [u8; 0x6D8], // 0x920
        pub m_vPrevPosition: [u8; 0x6D8], // 0xFF8
        pub m_flSpeed: [u8; 0x178], // 0x16D0
        pub m_flRadius: [u8; 0x178], // 0x1848
        pub m_flDensity: [u8; 0x178], // 0x19C0
        pub m_flTemperature: [u8; 0x178], // 0x1B38
        pub m_flMagnitude: [u8; 0x178], // 0x1CB0
        pub m_flKillRadius: [u8; 0x178], // 0x1E28
        pub m_flKillDensityScale: [u8; 0x178], // 0x1FA0
        pub m_flFalloff: [u8; 0x178], // 0x2118
    }
    #[repr(C)]
    pub struct C_OP_RemapTransformVisibilityToScalar {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nSetMethod: [u8; 0x8], // 0x1E0
        pub m_TransformInput: [u8; 0x68], // 0x1E8
        pub m_nFieldOutput: [u8; 0x4], // 0x250
        pub m_flInputMin: [u8; 0x4], // 0x254
        pub m_flInputMax: [u8; 0x4], // 0x258
        pub m_flOutputMin: [u8; 0x4], // 0x25C
        pub m_flOutputMax: [u8; 0x4], // 0x260
        pub m_flRadius: [u8; 0x4], // 0x264
    }
    #[repr(C)]
    pub struct C_OP_RemapControlPointDirectionToVector {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E0
        pub m_flScale: [u8; 0x4], // 0x1E4
        pub m_nControlPointNumber: [u8; 0x8], // 0x1E8
    }
    #[repr(C)]
    pub struct C_OP_ScreenSpacePositionOfTarget {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_vecTargetPosition: [u8; 0x6D8], // 0x1E0
        pub m_bOututBehindness: [u8; 0x4], // 0x8B8
        pub m_nBehindFieldOutput: [u8; 0x4], // 0x8BC
        pub m_flBehindOutputRemap: [u8; 0x178], // 0x8C0
        pub m_nBehindSetMethod: [u8; 0x8], // 0xA38
    }
    #[repr(C)]
    pub struct CParticleFunctionOperator {
        pub pad_0: [u8; 0x1E0], // 0x0
    }
    #[repr(C)]
    pub struct C_OP_DragRelativeToPlane {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flDragAtPlane: [u8; 0x178], // 0x1E0
        pub m_flFalloff: [u8; 0x178], // 0x358
        pub m_bDirectional: [u8; 0x8], // 0x4D0
        pub m_vecPlaneNormal: [u8; 0x6D8], // 0x4D8
        pub m_nControlPointNumber: [u8; 0x8], // 0xBB0
    }
    #[repr(C)]
    pub struct C_OP_SetCPtoVector {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nCPInput: [u8; 0x4], // 0x1E0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E4
    }
    #[repr(C)]
    pub struct C_INIT_RandomYaw {
        pub pad_0: [u8; 0x208], // 0x0
    }
    #[repr(C)]
    pub struct C_OP_SnapshotRigidSkinToBones {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_bTransformNormals: [u8; 0x1], // 0x1E0
        pub m_bTransformRadii: [u8; 0x3], // 0x1E1
        pub m_nControlPointNumber: [u8; 0x4], // 0x1E4
    }
    #[repr(C)]
    pub struct C_OP_SetSingleControlPointPosition {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_bSetOnce: [u8; 0x4], // 0x1E8
        pub m_nCP1: [u8; 0x4], // 0x1EC
        pub m_vecCP1Pos: [u8; 0x6D8], // 0x1F0
        pub m_transformInput: [u8; 0x68], // 0x8C8
    }
    #[repr(C)]
    pub struct C_INIT_DistanceToNeighborCull {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_flDistance: [u8; 0x178], // 0x1E8
        pub m_bIncludeRadii: [u8; 0x8], // 0x360
        pub m_flLifespanOverlap: [u8; 0x178], // 0x368
        pub m_nFieldModify: [u8; 0x8], // 0x4E0
        pub m_flModify: [u8; 0x178], // 0x4E8
        pub m_nSetMethod: [u8; 0x4], // 0x660
        pub m_bUseNeighbor: [u8; 0x4], // 0x664
    }
    #[repr(C)]
    pub struct C_OP_RemapCPtoScalar {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nCPInput: [u8; 0x4], // 0x1E0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E4
        pub m_nField: [u8; 0x4], // 0x1E8
        pub m_flInputMin: [u8; 0x4], // 0x1EC
        pub m_flInputMax: [u8; 0x4], // 0x1F0
        pub m_flOutputMin: [u8; 0x4], // 0x1F4
        pub m_flOutputMax: [u8; 0x4], // 0x1F8
        pub m_flStartTime: [u8; 0x4], // 0x1FC
        pub m_flEndTime: [u8; 0x4], // 0x200
        pub m_flInterpRate: [u8; 0x4], // 0x204
        pub m_nSetMethod: [u8; 0x8], // 0x208
    }
    #[repr(C)]
    pub struct CParticleFunctionRenderer {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub VisibilityInputs: [u8; 0x48], // 0x1E0
        pub m_bCannotBeRefracted: [u8; 0x8], // 0x228
    }
    #[repr(C)]
    pub struct CParticleSystemDefinition {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_nBehaviorVersion: [u8; 0x8], // 0x8
        pub m_PreEmissionOperators: [u8; 0x18], // 0x10
        pub m_Emitters: [u8; 0x18], // 0x28
        pub m_Initializers: [u8; 0x18], // 0x40
        pub m_Operators: [u8; 0x18], // 0x58
        pub m_ForceGenerators: [u8; 0x18], // 0x70
        pub m_Constraints: [u8; 0x18], // 0x88
        pub m_Renderers: [u8; 0x18], // 0xA0
        pub m_Children: [u8; 0xC0], // 0xB8
        pub m_nFirstMultipleOverride_BackwardCompat: [u8; 0xE0], // 0x178
        pub m_nInitialParticles: [u8; 0x4], // 0x258
        pub m_nMaxParticles: [u8; 0x4], // 0x25C
        pub m_nGroupID: [u8; 0x4], // 0x260
        pub m_BoundingBoxMin: [u8; 0xC], // 0x264
        pub m_BoundingBoxMax: [u8; 0xC], // 0x270
        pub m_flDepthSortBias: [u8; 0x4], // 0x27C
        pub m_nSortOverridePositionCP: [u8; 0x4], // 0x280
        pub m_bInfiniteBounds: [u8; 0x1], // 0x284
        pub m_bEnableNamedValues: [u8; 0x3], // 0x285
        pub m_NamedValueDomain: [u8; 0x8], // 0x288
        pub m_NamedValueLocals: [u8; 0x18], // 0x290
        pub m_ConstantColor: [u8; 0x4], // 0x2A8
        pub m_ConstantNormal: [u8; 0xC], // 0x2AC
        pub m_flConstantRadius: [u8; 0x4], // 0x2B8
        pub m_flConstantRotation: [u8; 0x4], // 0x2BC
        pub m_flConstantRotationSpeed: [u8; 0x4], // 0x2C0
        pub m_flConstantLifespan: [u8; 0x4], // 0x2C4
        pub m_nConstantSequenceNumber: [u8; 0x4], // 0x2C8
        pub m_nConstantSequenceNumber1: [u8; 0x4], // 0x2CC
        pub m_nSnapshotControlPoint: [u8; 0x8], // 0x2D0
        pub m_hSnapshot: [u8; 0x8], // 0x2D8
        pub m_pszCullReplacementName: [u8; 0x8], // 0x2E0
        pub m_flCullRadius: [u8; 0x4], // 0x2E8
        pub m_flCullFillCost: [u8; 0x4], // 0x2EC
        pub m_nCullControlPoint: [u8; 0x8], // 0x2F0
        pub m_hFallback: [u8; 0x8], // 0x2F8
        pub m_nFallbackMaxCount: [u8; 0x8], // 0x300
        pub m_hLowViolenceDef: [u8; 0x8], // 0x308
        pub m_hReferenceReplacement: [u8; 0x8], // 0x310
        pub m_flPreSimulationTime: [u8; 0x4], // 0x318
        pub m_flStopSimulationAfterTime: [u8; 0x4], // 0x31C
        pub m_flMaximumTimeStep: [u8; 0x4], // 0x320
        pub m_flMaximumSimTime: [u8; 0x4], // 0x324
        pub m_flMinimumSimTime: [u8; 0x4], // 0x328
        pub m_flMinimumTimeStep: [u8; 0x4], // 0x32C
        pub m_nMinimumFrames: [u8; 0x4], // 0x330
        pub m_bIsGPUParticleSystem: [u8; 0x4], // 0x334
        pub m_nMinCPULevel: [u8; 0x4], // 0x338
        pub m_nMinGPULevel: [u8; 0x4], // 0x33C
        pub m_flNoDrawTimeToGoToSleep: [u8; 0x4], // 0x340
        pub m_flMaxDrawDistance: [u8; 0x4], // 0x344
        pub m_flStartFadeDistance: [u8; 0x4], // 0x348
        pub m_flMaxCreationDistance: [u8; 0x4], // 0x34C
        pub m_nAggregationMinAvailableParticles: [u8; 0x4], // 0x350
        pub m_flAggregateRadius: [u8; 0x4], // 0x354
        pub m_bShouldBatch: [u8; 0x1], // 0x358
        pub m_bShouldHitboxesFallbackToRenderBounds: [u8; 0x1], // 0x359
        pub m_bShouldHitboxesFallbackToSnapshot: [u8; 0x1], // 0x35A
        pub m_bShouldHitboxesFallbackToCollisionHulls: [u8; 0x1], // 0x35B
        pub m_nViewModelEffect: [u8; 0x4], // 0x35C
        pub m_bScreenSpaceEffect: [u8; 0x8], // 0x360
        pub m_pszTargetLayerID: [u8; 0x8], // 0x368
        pub m_nSkipRenderControlPoint: [u8; 0x4], // 0x370
        pub m_nAllowRenderControlPoint: [u8; 0x4], // 0x374
        pub m_bShouldSort: [u8; 0x48], // 0x378
        pub m_controlPointConfigurations: [u8; 0x1D0], // 0x3C0
    }
    #[repr(C)]
    pub struct C_OP_RemapNamedModelMeshGroupEndCap {
        pub pad_0: [u8; 0x240], // 0x0
    }
    #[repr(C)]
    pub struct C_OP_PercentageBetweenTransformsVector {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E0
        pub m_flInputMin: [u8; 0x4], // 0x1E4
        pub m_flInputMax: [u8; 0x4], // 0x1E8
        pub m_vecOutputMin: [u8; 0xC], // 0x1EC
        pub m_vecOutputMax: [u8; 0x10], // 0x1F8
        pub m_TransformStart: [u8; 0x68], // 0x208
        pub m_TransformEnd: [u8; 0x68], // 0x270
        pub m_nSetMethod: [u8; 0x4], // 0x2D8
        pub m_bActiveRange: [u8; 0x1], // 0x2DC
        pub m_bRadialCheck: [u8; 0x3], // 0x2DD
    }
    #[repr(C)]
    pub struct C_OP_RenderScreenVelocityRotate {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_flRotateRateDegrees: [u8; 0x4], // 0x230
        pub m_flForwardDegrees: [u8; 0x4], // 0x234
    }
    #[repr(C)]
    pub struct C_OP_UpdateLightSource {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_vColorTint: [u8; 0x4], // 0x1E0
        pub m_flBrightnessScale: [u8; 0x4], // 0x1E4
        pub m_flRadiusScale: [u8; 0x4], // 0x1E8
        pub m_flMinimumLightingRadius: [u8; 0x4], // 0x1EC
        pub m_flMaximumLightingRadius: [u8; 0x4], // 0x1F0
        pub m_flPositionDampingConstant: [u8; 0x4], // 0x1F4
    }
    #[repr(C)]
    pub struct C_INIT_CreateWithinBox {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_vecMin: [u8; 0x6D8], // 0x1E8
        pub m_vecMax: [u8; 0x6D8], // 0x8C0
        pub m_nControlPointNumber: [u8; 0x4], // 0xF98
        pub m_bLocalSpace: [u8; 0x4], // 0xF9C
        pub m_randomnessParameters: [u8; 0x8], // 0xFA0
        pub m_bUseNewCode: [u8; 0x8], // 0xFA8
    }
    #[repr(C)]
    pub struct C_OP_ChooseRandomChildrenInGroup {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nChildGroupID: [u8; 0x8], // 0x1E8
        pub m_flNumberOfChildren: [u8; 0x178], // 0x1F0
    }
    #[repr(C)]
    pub struct C_OP_ControlpointLight {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flScale: [u8; 0x490], // 0x1E0
        pub m_nControlPoint1: [u8; 0x4], // 0x670
        pub m_nControlPoint2: [u8; 0x4], // 0x674
        pub m_nControlPoint3: [u8; 0x4], // 0x678
        pub m_nControlPoint4: [u8; 0x4], // 0x67C
        pub m_vecCPOffset1: [u8; 0xC], // 0x680
        pub m_vecCPOffset2: [u8; 0xC], // 0x68C
        pub m_vecCPOffset3: [u8; 0xC], // 0x698
        pub m_vecCPOffset4: [u8; 0xC], // 0x6A4
        pub m_LightFiftyDist1: [u8; 0x4], // 0x6B0
        pub m_LightZeroDist1: [u8; 0x4], // 0x6B4
        pub m_LightFiftyDist2: [u8; 0x4], // 0x6B8
        pub m_LightZeroDist2: [u8; 0x4], // 0x6BC
        pub m_LightFiftyDist3: [u8; 0x4], // 0x6C0
        pub m_LightZeroDist3: [u8; 0x4], // 0x6C4
        pub m_LightFiftyDist4: [u8; 0x4], // 0x6C8
        pub m_LightZeroDist4: [u8; 0x4], // 0x6CC
        pub m_LightColor1: [u8; 0x4], // 0x6D0
        pub m_LightColor2: [u8; 0x4], // 0x6D4
        pub m_LightColor3: [u8; 0x4], // 0x6D8
        pub m_LightColor4: [u8; 0x4], // 0x6DC
        pub m_bLightType1: [u8; 0x1], // 0x6E0
        pub m_bLightType2: [u8; 0x1], // 0x6E1
        pub m_bLightType3: [u8; 0x1], // 0x6E2
        pub m_bLightType4: [u8; 0x1], // 0x6E3
        pub m_bLightDynamic1: [u8; 0x1], // 0x6E4
        pub m_bLightDynamic2: [u8; 0x1], // 0x6E5
        pub m_bLightDynamic3: [u8; 0x1], // 0x6E6
        pub m_bLightDynamic4: [u8; 0x1], // 0x6E7
        pub m_bUseNormal: [u8; 0x1], // 0x6E8
        pub m_bUseHLambert: [u8; 0x5], // 0x6E9
        pub m_bClampLowerRange: [u8; 0x1], // 0x6EE
        pub m_bClampUpperRange: [u8; 0x1], // 0x6EF
    }
    #[repr(C)]
    pub struct C_OP_VectorFieldSnapshot {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nControlPointNumber: [u8; 0x4], // 0x1E0
        pub m_nAttributeToWrite: [u8; 0x4], // 0x1E4
        pub m_nLocalSpaceCP: [u8; 0x8], // 0x1E8
        pub m_flInterpolation: [u8; 0x178], // 0x1F0
        pub m_vecScale: [u8; 0x6D8], // 0x368
        pub m_flBoundaryDampening: [u8; 0x4], // 0xA40
        pub m_bSetVelocity: [u8; 0x1], // 0xA44
        pub m_bLockToSurface: [u8; 0x3], // 0xA45
        pub m_flGridSpacing: [u8; 0x8], // 0xA48
    }
    #[repr(C)]
    pub struct C_OP_CylindricalDistanceToTransform {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldOutput: [u8; 0x8], // 0x1E0
        pub m_flInputMin: [u8; 0x178], // 0x1E8
        pub m_flInputMax: [u8; 0x178], // 0x360
        pub m_flOutputMin: [u8; 0x178], // 0x4D8
        pub m_flOutputMax: [u8; 0x178], // 0x650
        pub m_TransformStart: [u8; 0x68], // 0x7C8
        pub m_TransformEnd: [u8; 0x68], // 0x830
        pub m_nSetMethod: [u8; 0x4], // 0x898
        pub m_bActiveRange: [u8; 0x1], // 0x89C
        pub m_bAdditive: [u8; 0x1], // 0x89D
        pub m_bCapsule: [u8; 0x2], // 0x89E
    }
    #[repr(C)]
    pub struct C_INIT_PositionPlaceOnGround {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_flOffset: [u8; 0x178], // 0x1E8
        pub m_flMaxTraceLength: [u8; 0x178], // 0x360
        pub m_vecTraceDir: [u8; 0x6D8], // 0x4D8
        pub m_CollisionGroupName: [u8; 0x80], // 0xBB0
        pub m_nTraceSet: [u8; 0x10], // 0xC30
        pub m_nTraceMissBehavior: [u8; 0x4], // 0xC40
        pub m_bIncludeWater: [u8; 0x4], // 0xC44
        pub m_nAttribute: [u8; 0x4], // 0xC48
        pub m_bSetPXYZOnly: [u8; 0x1], // 0xC4C
        pub m_bSetNormal: [u8; 0x3], // 0xC4D
        pub m_nGroundNormalAttribute: [u8; 0x4], // 0xC50
        pub m_bOffsetonColOnly: [u8; 0x4], // 0xC54
        pub m_flOffsetByRadiusFactor: [u8; 0x4], // 0xC58
        pub m_nPreserveOffsetCP: [u8; 0x4], // 0xC5C
        pub m_nIgnoreCP: [u8; 0x8], // 0xC60
    }
    #[repr(C)]
    pub struct C_INIT_RandomScalar {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_flMin: [u8; 0x4], // 0x1E8
        pub m_flMax: [u8; 0x4], // 0x1EC
        pub m_flExponent: [u8; 0x4], // 0x1F0
        pub m_nFieldOutput: [u8; 0x4], // 0x1F4
    }
    #[repr(C)]
    pub struct C_OP_RenderPostProcessing {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_flPostProcessStrength: [u8; 0x178], // 0x230
        pub m_hPostTexture: [u8; 0x8], // 0x3A8
        pub m_nPriority: [u8; 0x8], // 0x3B0
    }
    #[repr(C)]
    pub struct C_OP_WorldTraceConstraint {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nCP: [u8; 0x4], // 0x1E0
        pub m_vecCpOffset: [u8; 0xC], // 0x1E4
        pub m_nCollisionMode: [u8; 0x4], // 0x1F0
        pub m_nCollisionModeMin: [u8; 0x4], // 0x1F4
        pub m_nTraceSet: [u8; 0x4], // 0x1F8
        pub m_CollisionGroupName: [u8; 0x80], // 0x1FC
        pub m_bWorldOnly: [u8; 0x1], // 0x27C
        pub m_bBrushOnly: [u8; 0x1], // 0x27D
        pub m_bIncludeWater: [u8; 0x2], // 0x27E
        pub m_nIgnoreCP: [u8; 0x4], // 0x280
        pub m_flCpMovementTolerance: [u8; 0x4], // 0x284
        pub m_flRetestRate: [u8; 0x4], // 0x288
        pub m_flTraceTolerance: [u8; 0x4], // 0x28C
        pub m_flCollisionConfirmationSpeed: [u8; 0x4], // 0x290
        pub m_nMaxTracesPerFrame: [u8; 0x4], // 0x294
        pub m_flRadiusScale: [u8; 0x178], // 0x298
        pub m_flBounceAmount: [u8; 0x178], // 0x410
        pub m_flSlideAmount: [u8; 0x178], // 0x588
        pub m_flRandomDirScale: [u8; 0x178], // 0x700
        pub m_bDecayBounce: [u8; 0x1], // 0x878
        pub m_bKillonContact: [u8; 0x3], // 0x879
        pub m_flMinSpeed: [u8; 0x4], // 0x87C
        pub m_bKillonContactBounce: [u8; 0x1], // 0x880
        pub m_bSetNormal: [u8; 0x3], // 0x881
        pub m_nStickOnCollisionField: [u8; 0x4], // 0x884
        pub m_flStopSpeed: [u8; 0x178], // 0x888
        pub m_nEntityStickDataField: [u8; 0x4], // 0xA00
        pub m_nEntityStickNormalField: [u8; 0x4], // 0xA04
    }
    #[repr(C)]
    pub struct C_OP_RenderBlobs {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_cubeWidth: [u8; 0x178], // 0x230
        pub m_cutoffRadius: [u8; 0x178], // 0x3A8
        pub m_renderRadius: [u8; 0x178], // 0x520
        pub m_nVertexCountKb: [u8; 0x4], // 0x698
        pub m_nIndexCountKb: [u8; 0x4], // 0x69C
        pub m_nScaleCP: [u8; 0x8], // 0x6A0
        pub m_MaterialVars: [u8; 0x30], // 0x6A8
        pub m_hMaterial: [u8; 0x8], // 0x6D8
    }
    #[repr(C)]
    pub struct C_OP_OscillateScalar {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_RateMin: [u8; 0x4], // 0x1E0
        pub m_RateMax: [u8; 0x4], // 0x1E4
        pub m_FrequencyMin: [u8; 0x4], // 0x1E8
        pub m_FrequencyMax: [u8; 0x4], // 0x1EC
        pub m_nField: [u8; 0x4], // 0x1F0
        pub m_bProportional: [u8; 0x1], // 0x1F4
        pub m_bProportionalOp: [u8; 0x3], // 0x1F5
        pub m_flStartTime_min: [u8; 0x4], // 0x1F8
        pub m_flStartTime_max: [u8; 0x4], // 0x1FC
        pub m_flEndTime_min: [u8; 0x4], // 0x200
        pub m_flEndTime_max: [u8; 0x4], // 0x204
        pub m_flOscMult: [u8; 0x4], // 0x208
        pub m_flOscAdd: [u8; 0x4], // 0x20C
    }
    #[repr(C)]
    pub struct C_OP_FadeOut {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flFadeOutTimeMin: [u8; 0x4], // 0x1E0
        pub m_flFadeOutTimeMax: [u8; 0x4], // 0x1E4
        pub m_flFadeOutTimeExp: [u8; 0x4], // 0x1E8
        pub m_flFadeBias: [u8; 0x34], // 0x1EC
        pub m_bProportional: [u8; 0x1], // 0x220
        pub m_bEaseInAndOut: [u8; 0xF], // 0x221
    }
    #[repr(C)]
    pub struct C_OP_WaterImpulseRenderer {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_vecPos: [u8; 0x6D8], // 0x230
        pub m_flRadius: [u8; 0x178], // 0x908
        pub m_flMagnitude: [u8; 0x178], // 0xA80
        pub m_flShape: [u8; 0x178], // 0xBF8
        pub m_flWindSpeed: [u8; 0x178], // 0xD70
        pub m_flWobble: [u8; 0x178], // 0xEE8
        pub m_bIsRadialWind: [u8; 0x4], // 0x1060
        pub m_nEventType: [u8; 0x4], // 0x1064
    }
    #[repr(C)]
    pub struct C_INIT_RandomSequence {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nSequenceMin: [u8; 0x4], // 0x1E8
        pub m_nSequenceMax: [u8; 0x4], // 0x1EC
        pub m_bShuffle: [u8; 0x1], // 0x1F0
        pub m_bLinear: [u8; 0x7], // 0x1F1
        pub m_WeightedList: [u8; 0x38], // 0x1F8
    }
    #[repr(C)]
    pub struct C_OP_RampScalarSplineSimple {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_Rate: [u8; 0x4], // 0x1E0
        pub m_flStartTime: [u8; 0x4], // 0x1E4
        pub m_flEndTime: [u8; 0x28], // 0x1E8
        pub m_nField: [u8; 0x4], // 0x210
        pub m_bEaseOut: [u8; 0xC], // 0x214
    }
    #[repr(C)]
    pub struct C_INIT_DistanceCull {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nControlPoint: [u8; 0x8], // 0x1E8
        pub m_flDistance: [u8; 0x178], // 0x1F0
        pub m_bCullInside: [u8; 0x8], // 0x368
    }
    #[repr(C)]
    pub struct C_OP_CollideWithParentParticles {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flParentRadiusScale: [u8; 0x178], // 0x1E0
        pub m_flRadiusScale: [u8; 0x178], // 0x358
    }
    #[repr(C)]
    pub struct C_INIT_InitFromVectorFieldSnapshot {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nControlPointNumber: [u8; 0x4], // 0x1E8
        pub m_nLocalSpaceCP: [u8; 0x4], // 0x1EC
        pub m_nWeightUpdateCP: [u8; 0x4], // 0x1F0
        pub m_bUseVerticalVelocity: [u8; 0x4], // 0x1F4
        pub m_vecScale: [u8; 0x6D8], // 0x1F8
    }
    #[repr(C)]
    pub struct C_OP_SetVectorAttributeToVectorExpression {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nExpression: [u8; 0x8], // 0x1E0
        pub m_vInput1: [u8; 0x6D8], // 0x1E8
        pub m_vInput2: [u8; 0x6D8], // 0x8C0
        pub m_flLerp: [u8; 0x178], // 0xF98
        pub m_nOutputField: [u8; 0x4], // 0x1110
        pub m_nSetMethod: [u8; 0x4], // 0x1114
        pub m_bNormalizedOutput: [u8; 0x68], // 0x1118
    }
    #[repr(C)]
    pub struct C_INIT_AddVectorToVector {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_vecScale: [u8; 0xC], // 0x1E8
        pub m_nFieldOutput: [u8; 0x4], // 0x1F4
        pub m_nFieldInput: [u8; 0x4], // 0x1F8
        pub m_vOffsetMin: [u8; 0xC], // 0x1FC
        pub m_vOffsetMax: [u8; 0xC], // 0x208
        pub m_randomnessParameters: [u8; 0xC], // 0x214
    }
    #[repr(C)]
    pub struct C_INIT_RemapInitialVisibilityScalar {
        pub pad_0: [u8; 0x1EC], // 0x0
        pub m_nFieldOutput: [u8; 0x4], // 0x1EC
        pub m_flInputMin: [u8; 0x4], // 0x1F0
        pub m_flInputMax: [u8; 0x4], // 0x1F4
        pub m_flOutputMin: [u8; 0x4], // 0x1F8
        pub m_flOutputMax: [u8; 0x4], // 0x1FC
    }
    #[repr(C)]
    pub struct C_OP_RemapTransformOrientationToYaw {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_TransformInput: [u8; 0x68], // 0x1E0
        pub m_nFieldOutput: [u8; 0x4], // 0x248
        pub m_flRotOffset: [u8; 0x4], // 0x24C
        pub m_flSpinStrength: [u8; 0x8], // 0x250
    }
    #[repr(C)]
    pub struct C_OP_RenderStatusEffect {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_pTextureColorWarp: [u8; 0x8], // 0x230
        pub m_pTextureDetail2: [u8; 0x8], // 0x238
        pub m_pTextureDiffuseWarp: [u8; 0x8], // 0x240
        pub m_pTextureFresnelColorWarp: [u8; 0x8], // 0x248
        pub m_pTextureFresnelWarp: [u8; 0x8], // 0x250
        pub m_pTextureSpecularWarp: [u8; 0x8], // 0x258
        pub m_pTextureEnvMap: [u8; 0x8], // 0x260
    }
    #[repr(C)]
    pub struct C_OP_RandomForce {
        pub pad_0: [u8; 0x1F0], // 0x0
        pub m_MinForce: [u8; 0xC], // 0x1F0
        pub m_MaxForce: [u8; 0xC], // 0x1FC
    }
    #[repr(C)]
    pub struct C_OP_RemapParticleCountOnScalarEndCap {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E0
        pub m_nInputMin: [u8; 0x4], // 0x1E4
        pub m_nInputMax: [u8; 0x4], // 0x1E8
        pub m_flOutputMin: [u8; 0x4], // 0x1EC
        pub m_flOutputMax: [u8; 0x4], // 0x1F0
        pub m_bBackwards: [u8; 0x4], // 0x1F4
        pub m_nSetMethod: [u8; 0x8], // 0x1F8
    }
    #[repr(C)]
    pub struct ParticlePreviewState_t {
        pub m_previewModel: [u8; 0x8], // 0x0
        pub m_nModSpecificData: [u8; 0x4], // 0x8
        pub m_groundType: [u8; 0x4], // 0xC
        pub m_sequenceName: [u8; 0x8], // 0x10
        pub m_nFireParticleOnSequenceFrame: [u8; 0x8], // 0x18
        pub m_hitboxSetName: [u8; 0x8], // 0x20
        pub m_materialGroupName: [u8; 0x8], // 0x28
        pub m_vecBodyGroups: [u8; 0x18], // 0x30
        pub m_flPlaybackSpeed: [u8; 0x4], // 0x48
        pub m_flParticleSimulationRate: [u8; 0x4], // 0x4C
        pub m_bShouldDrawHitboxes: [u8; 0x1], // 0x50
        pub m_bShouldDrawAttachments: [u8; 0x1], // 0x51
        pub m_bShouldDrawAttachmentNames: [u8; 0x1], // 0x52
        pub m_bShouldDrawControlPointAxes: [u8; 0x1], // 0x53
        pub m_bAnimationNonLooping: [u8; 0x1], // 0x54
        pub m_bSequenceNameIsAnimClipPath: [u8; 0x3], // 0x55
        pub m_vecPreviewGravity: [u8; 0xC], // 0x58
        pub m_vecPreviewWind: [u8; 0xC], // 0x64
    }
    #[repr(C)]
    pub struct C_OP_LocalAccelerationForce {
        pub pad_0: [u8; 0x1F0], // 0x0
        pub m_nCP: [u8; 0x4], // 0x1F0
        pub m_nScaleCP: [u8; 0x4], // 0x1F4
        pub m_vecAccel: [u8; 0x6D8], // 0x1F8
    }
    #[repr(C)]
    pub struct C_OP_ModelCull {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nControlPointNumber: [u8; 0x4], // 0x1E0
        pub m_bBoundBox: [u8; 0x1], // 0x1E4
        pub m_bCullOutside: [u8; 0x1], // 0x1E5
        pub m_bUseBones: [u8; 0x1], // 0x1E6
        pub m_HitboxSetName: [u8; 0x81], // 0x1E7
    }
    #[repr(C)]
    pub struct C_OP_SetFloat {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_InputValue: [u8; 0x178], // 0x1E0
        pub m_nOutputField: [u8; 0x4], // 0x358
        pub m_nSetMethod: [u8; 0x4], // 0x35C
        pub m_Lerp: [u8; 0x1B0], // 0x360
    }
    #[repr(C)]
    pub struct C_INIT_RemapTransformToVector {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E8
        pub m_vInputMin: [u8; 0xC], // 0x1EC
        pub m_vInputMax: [u8; 0xC], // 0x1F8
        pub m_vOutputMin: [u8; 0xC], // 0x204
        pub m_vOutputMax: [u8; 0x10], // 0x210
        pub m_TransformInput: [u8; 0x68], // 0x220
        pub m_LocalSpaceTransform: [u8; 0x68], // 0x288
        pub m_flStartTime: [u8; 0x4], // 0x2F0
        pub m_flEndTime: [u8; 0x4], // 0x2F4
        pub m_nSetMethod: [u8; 0x4], // 0x2F8
        pub m_bOffset: [u8; 0x1], // 0x2FC
        pub m_bAccelerate: [u8; 0x3], // 0x2FD
        pub m_flRemapBias: [u8; 0x8], // 0x300
    }
    #[repr(C)]
    pub struct C_OP_ScreenSpaceDistanceToEdge {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldOutput: [u8; 0x8], // 0x1E0
        pub m_flMaxDistFromEdge: [u8; 0x178], // 0x1E8
        pub m_flOutputRemap: [u8; 0x178], // 0x360
        pub m_nSetMethod: [u8; 0x28], // 0x4D8
    }
    #[repr(C)]
    pub struct C_OP_RenderStatusEffectTf {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_pTextureColorWarp: [u8; 0x8], // 0x230
        pub m_pTextureNormal: [u8; 0x8], // 0x238
        pub m_pTextureMetalness: [u8; 0x8], // 0x240
        pub m_pTextureRoughness: [u8; 0x8], // 0x248
        pub m_pTextureSelfIllum: [u8; 0x8], // 0x250
        pub m_pTextureDetail: [u8; 0x8], // 0x258
        pub m_pTextureEnvMap: [u8; 0x8], // 0x260
    }
    #[repr(C)]
    pub struct C_OP_RemapDistanceToLineSegmentToScalar {
        pub pad_0: [u8; 0x1F8], // 0x0
        pub m_nFieldOutput: [u8; 0x4], // 0x1F8
        pub m_flMinOutputValue: [u8; 0x4], // 0x1FC
        pub m_flMaxOutputValue: [u8; 0x8], // 0x200
    }
    #[repr(C)]
    pub struct C_OP_RemapVectortoCP {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nOutControlPointNumber: [u8; 0x4], // 0x1E0
        pub m_nFieldInput: [u8; 0x4], // 0x1E4
        pub m_nParticleNumber: [u8; 0x8], // 0x1E8
    }
    #[repr(C)]
    pub struct C_OP_SetFromCPSnapshot {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nControlPointNumber: [u8; 0x8], // 0x1E0
        pub m_strSnapshotSubset: [u8; 0x8], // 0x1E8
        pub m_nAttributeToRead: [u8; 0x4], // 0x1F0
        pub m_nAttributeToWrite: [u8; 0x4], // 0x1F4
        pub m_nLocalSpaceCP: [u8; 0x4], // 0x1F8
        pub m_bRandom: [u8; 0x1], // 0x1FC
        pub m_bReverse: [u8; 0x3], // 0x1FD
        pub m_nRandomSeed: [u8; 0x8], // 0x200
        pub m_nSnapShotStartPoint: [u8; 0x178], // 0x208
        pub m_nSnapShotIncrement: [u8; 0x178], // 0x380
        pub m_flInterpolation: [u8; 0x178], // 0x4F8
        pub m_bSubSample: [u8; 0x1], // 0x670
        pub m_bPrev: [u8; 0x7], // 0x671
    }
    #[repr(C)]
    pub struct C_OP_DistanceBetweenCPsToCP {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nStartCP: [u8; 0x4], // 0x1E8
        pub m_nEndCP: [u8; 0x4], // 0x1EC
        pub m_nOutputCP: [u8; 0x4], // 0x1F0
        pub m_nOutputCPField: [u8; 0x4], // 0x1F4
        pub m_bSetOnce: [u8; 0x4], // 0x1F8
        pub m_flInputMin: [u8; 0x4], // 0x1FC
        pub m_flInputMax: [u8; 0x4], // 0x200
        pub m_flOutputMin: [u8; 0x4], // 0x204
        pub m_flOutputMax: [u8; 0x4], // 0x208
        pub m_flMaxTraceLength: [u8; 0x4], // 0x20C
        pub m_flLOSScale: [u8; 0x4], // 0x210
        pub m_bLOS: [u8; 0x1], // 0x214
        pub m_CollisionGroupName: [u8; 0x83], // 0x215
        pub m_nTraceSet: [u8; 0x4], // 0x298
        pub m_nSetParent: [u8; 0x4], // 0x29C
    }
    #[repr(C)]
    pub struct C_OP_SetControlPointToHand {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nCP1: [u8; 0x4], // 0x1E8
        pub m_nHand: [u8; 0x4], // 0x1EC
        pub m_vecCP1Pos: [u8; 0xC], // 0x1F0
        pub m_bOrientToHand: [u8; 0x4], // 0x1FC
    }
    #[repr(C)]
    pub struct C_OP_ConstrainDistanceToPath {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_fMinDistance: [u8; 0x4], // 0x1E0
        pub m_flMaxDistance0: [u8; 0x4], // 0x1E4
        pub m_flMaxDistanceMid: [u8; 0x4], // 0x1E8
        pub m_flMaxDistance1: [u8; 0x4], // 0x1EC
        pub m_PathParameters: [u8; 0x40], // 0x1F0
        pub m_flTravelTime: [u8; 0x4], // 0x230
        pub m_nFieldScale: [u8; 0x4], // 0x234
        pub m_nManualTField: [u8; 0x8], // 0x238
    }
    #[repr(C)]
    pub struct C_OP_DistanceCull {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nControlPoint: [u8; 0x4], // 0x1E0
        pub m_vecPointOffset: [u8; 0xC], // 0x1E4
        pub m_flDistance: [u8; 0x178], // 0x1F0
        pub m_bCullInside: [u8; 0x4], // 0x368
        pub m_nAttribute: [u8; 0x4], // 0x36C
    }
    #[repr(C)]
    pub struct C_INIT_CreateAlongPath {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_fMaxDistance: [u8; 0x178], // 0x1E8
        pub m_fT: [u8; 0x180], // 0x360
        pub m_PathParams: [u8; 0x40], // 0x4E0
        pub m_bUseRandomCPs: [u8; 0x4], // 0x520
        pub m_vEndOffset: [u8; 0xC], // 0x524
        pub m_bSaveOffset: [u8; 0x10], // 0x530
    }
    #[repr(C)]
    pub struct C_OP_GameDecalRenderer {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_sDecalGroupName: [u8; 0x8], // 0x230
        pub m_nEventType: [u8; 0x8], // 0x238
        pub m_nInteractionMask: [u8; 0x8], // 0x240
        pub m_nCollisionGroup: [u8; 0x8], // 0x248
        pub m_vecStartPos: [u8; 0x6D8], // 0x250
        pub m_vecEndPos: [u8; 0x6D8], // 0x928
        pub m_flTraceBloat: [u8; 0x178], // 0x1000
        pub m_flDecalSize: [u8; 0x178], // 0x1178
        pub m_nDecalGroupIndex: [u8; 0x178], // 0x12F0
        pub m_flDecalRotation: [u8; 0x178], // 0x1468
        pub m_vModulationColor: [u8; 0x6D8], // 0x15E0
        pub m_bUseGameDefaultDecalSize: [u8; 0x1], // 0x1CB8
        pub m_bRandomDecalRotation: [u8; 0x1], // 0x1CB9
        pub m_bRandomlySelectDecalInGroup: [u8; 0x1], // 0x1CBA
        pub m_bNoDecalsOnOwner: [u8; 0x1], // 0x1CBB
        pub m_bVisualizeTraces: [u8; 0x4], // 0x1CBC
    }
    #[repr(C)]
    pub struct C_OP_SetControlPointsToModelParticles {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_HitboxSetName: [u8; 0x80], // 0x1E0
        pub m_AttachmentName: [u8; 0x80], // 0x260
        pub m_nFirstControlPoint: [u8; 0x4], // 0x2E0
        pub m_nNumControlPoints: [u8; 0x4], // 0x2E4
        pub m_nFirstSourcePoint: [u8; 0x4], // 0x2E8
        pub m_bSkin: [u8; 0x1], // 0x2EC
        pub m_bAttachment: [u8; 0x3], // 0x2ED
    }
    #[repr(C)]
    pub struct C_OP_ColorInterpolateRandom {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_ColorFadeMin: [u8; 0x1C], // 0x1E0
        pub m_ColorFadeMax: [u8; 0x10], // 0x1FC
        pub m_flFadeStartTime: [u8; 0x4], // 0x20C
        pub m_flFadeEndTime: [u8; 0x4], // 0x210
        pub m_nFieldOutput: [u8; 0x4], // 0x214
        pub m_bEaseInOut: [u8; 0x8], // 0x218
    }
    #[repr(C)]
    pub struct C_INIT_RemapNamedModelSequenceToScalar {
        pub pad_0: [u8; 0x230], // 0x0
    }
    #[repr(C)]
    pub struct C_OP_RenderLights {
        pub pad_0: [u8; 0x238], // 0x0
        pub m_flAnimationRate: [u8; 0x4], // 0x238
        pub m_nAnimationType: [u8; 0x4], // 0x23C
        pub m_bAnimateInFPS: [u8; 0x4], // 0x240
        pub m_flMinSize: [u8; 0x4], // 0x244
        pub m_flMaxSize: [u8; 0x4], // 0x248
        pub m_flStartFadeSize: [u8; 0x4], // 0x24C
        pub m_flEndFadeSize: [u8; 0x8], // 0x250
    }
    #[repr(C)]
    pub struct C_OP_DecayClampCount {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nCount: [u8; 0x178], // 0x1E0
    }
    #[repr(C)]
    pub struct CRandomNumberGeneratorParameters {
        pub m_bDistributeEvenly: [u8; 0x4], // 0x0
        pub m_nSeed: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct C_INIT_ColorLitPerParticle {
        pub pad_0: [u8; 0x200], // 0x0
        pub m_ColorMin: [u8; 0x4], // 0x200
        pub m_ColorMax: [u8; 0x4], // 0x204
        pub m_TintMin: [u8; 0x4], // 0x208
        pub m_TintMax: [u8; 0x4], // 0x20C
        pub m_flTintPerc: [u8; 0x4], // 0x210
        pub m_nTintBlendMode: [u8; 0x4], // 0x214
        pub m_flLightAmplification: [u8; 0x8], // 0x218
    }
    #[repr(C)]
    pub struct C_OP_RenderPoints {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_hMaterial: [u8; 0x8], // 0x230
    }
    #[repr(C)]
    pub struct C_INIT_SetAttributeToScalarExpression {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nExpression: [u8; 0x8], // 0x1E8
        pub m_flInput1: [u8; 0x178], // 0x1F0
        pub m_flInput2: [u8; 0x178], // 0x368
        pub m_flOutputRemap: [u8; 0x178], // 0x4E0
        pub m_nOutputField: [u8; 0x4], // 0x658
        pub m_nSetMethod: [u8; 0x24], // 0x65C
    }
    #[repr(C)]
    pub struct C_INIT_CreateOnGrid {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nXCount: [u8; 0x178], // 0x1E8
        pub m_nYCount: [u8; 0x178], // 0x360
        pub m_nZCount: [u8; 0x178], // 0x4D8
        pub m_nXSpacing: [u8; 0x178], // 0x650
        pub m_nYSpacing: [u8; 0x178], // 0x7C8
        pub m_nZSpacing: [u8; 0x178], // 0x940
        pub m_nControlPointNumber: [u8; 0x4], // 0xAB8
        pub m_bLocalSpace: [u8; 0x1], // 0xABC
        pub m_bCenter: [u8; 0x1], // 0xABD
        pub m_bHollow: [u8; 0x2], // 0xABE
    }
    #[repr(C)]
    pub struct C_OP_RampCPLinearRandom {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nOutControlPointNumber: [u8; 0x4], // 0x1E8
        pub m_vecRateMin: [u8; 0xC], // 0x1EC
        pub m_vecRateMax: [u8; 0x10], // 0x1F8
    }
    #[repr(C)]
    pub struct C_OP_VelocityMatchingForce {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flDirScale: [u8; 0x4], // 0x1E0
        pub m_flSpdScale: [u8; 0x4], // 0x1E4
        pub m_flNeighborDistance: [u8; 0x4], // 0x1E8
        pub m_flFacingStrength: [u8; 0x4], // 0x1EC
        pub m_bUseAABB: [u8; 0x4], // 0x1F0
        pub m_nCPBroadcast: [u8; 0x4], // 0x1F4
    }
    #[repr(C)]
    pub struct C_INIT_RandomAlphaWindowThreshold {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_flMin: [u8; 0x4], // 0x1E8
        pub m_flMax: [u8; 0x4], // 0x1EC
        pub m_flExponent: [u8; 0x8], // 0x1F0
    }
    #[repr(C)]
    pub struct C_INIT_CreateOnModelAtHeight {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_bUseBones: [u8; 0x1], // 0x1E8
        pub m_bForceZ: [u8; 0x3], // 0x1E9
        pub m_nControlPointNumber: [u8; 0x4], // 0x1EC
        pub m_nHeightCP: [u8; 0x4], // 0x1F0
        pub m_bUseWaterHeight: [u8; 0x4], // 0x1F4
        pub m_flDesiredHeight: [u8; 0x178], // 0x1F8
        pub m_vecHitBoxScale: [u8; 0x6D8], // 0x370
        pub m_vecDirectionBias: [u8; 0x6D8], // 0xA48
        pub m_nBiasType: [u8; 0x4], // 0x1120
        pub m_bLocalCoords: [u8; 0x1], // 0x1124
        pub m_bPreferMovingBoxes: [u8; 0x1], // 0x1125
        pub m_HitboxSetName: [u8; 0x82], // 0x1126
        pub m_flHitboxVelocityScale: [u8; 0x178], // 0x11A8
        pub m_flMaxBoneVelocity: [u8; 0x178], // 0x1320
    }
    #[repr(C)]
    pub struct C_OP_ModelSurfaceSnapshotGenerator {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nCPSnapshot: [u8; 0x8], // 0x1E8
        pub m_modelInput: [u8; 0x60], // 0x1F0
        pub m_flRecalcRate: [u8; 0x178], // 0x250
        pub m_flUSpacing: [u8; 0x178], // 0x3C8
        pub m_flVSpacing: [u8; 0x178], // 0x540
        pub m_flSurfaceOffset: [u8; 0x178], // 0x6B8
        pub m_bSetNormal: [u8; 0x1], // 0x830
        pub m_bSetUp: [u8; 0x1], // 0x831
        pub m_bSetGravity: [u8; 0x1], // 0x832
        pub m_bSetUV: [u8; 0x5], // 0x833
    }
    #[repr(C)]
    pub struct C_OP_RestartAfterDuration {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flDurationMin: [u8; 0x4], // 0x1E0
        pub m_flDurationMax: [u8; 0x4], // 0x1E4
        pub m_nCP: [u8; 0x4], // 0x1E8
        pub m_nCPField: [u8; 0x4], // 0x1EC
        pub m_nChildGroupID: [u8; 0x4], // 0x1F0
        pub m_bOnlyChildren: [u8; 0x4], // 0x1F4
    }
    #[repr(C)]
    pub struct C_OP_RenderClothForce {
        pub pad_0: [u8; 0x230], // 0x0
    }
    #[repr(C)]
    pub struct C_OP_RemapVisibilityScalar {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldInput: [u8; 0x4], // 0x1E0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E4
        pub m_flInputMin: [u8; 0x4], // 0x1E8
        pub m_flInputMax: [u8; 0x4], // 0x1EC
        pub m_flOutputMin: [u8; 0x4], // 0x1F0
        pub m_flOutputMax: [u8; 0x4], // 0x1F4
        pub m_flRadiusScale: [u8; 0x8], // 0x1F8
    }
    #[repr(C)]
    pub struct C_INIT_CreateSequentialPathV2 {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_fMaxDistance: [u8; 0x178], // 0x1E8
        pub m_flNumToAssign: [u8; 0x178], // 0x360
        pub m_bLoop: [u8; 0x1], // 0x4D8
        pub m_bCPPairs: [u8; 0x1], // 0x4D9
        pub m_bSaveOffset: [u8; 0x6], // 0x4DA
        pub m_PathParams: [u8; 0x50], // 0x4E0
    }
    #[repr(C)]
    pub struct VecInputMaterialVariable_t {
        pub m_strVariable: [u8; 0x8], // 0x0
        pub m_vecInput: [u8; 0x6D8], // 0x8
    }
    #[repr(C)]
    pub struct C_INIT_RemapInitialDirectionToTransformToVector {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_TransformInput: [u8; 0x68], // 0x1E8
        pub m_nFieldOutput: [u8; 0x4], // 0x250
        pub m_flScale: [u8; 0x4], // 0x254
        pub m_flOffsetRot: [u8; 0x4], // 0x258
        pub m_vecOffsetAxis: [u8; 0xC], // 0x25C
        pub m_bNormalize: [u8; 0x8], // 0x268
    }
    #[repr(C)]
    pub struct C_OP_LockToSavedSequentialPathV2 {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flFadeStart: [u8; 0x4], // 0x1E0
        pub m_flFadeEnd: [u8; 0x4], // 0x1E4
        pub m_bCPPairs: [u8; 0x8], // 0x1E8
        pub m_PathParams: [u8; 0x40], // 0x1F0
    }
    #[repr(C)]
    pub struct C_OP_NormalLock {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nControlPointNumber: [u8; 0x8], // 0x1E0
    }
    #[repr(C)]
    pub struct C_INIT_RemapTransformOrientationToRotations {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_TransformInput: [u8; 0x68], // 0x1E8
        pub m_vecRotation: [u8; 0xC], // 0x250
        pub m_bUseQuat: [u8; 0x1], // 0x25C
        pub m_bWriteNormal: [u8; 0x3], // 0x25D
    }
    #[repr(C)]
    pub struct C_OP_Cull {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flCullPerc: [u8; 0x4], // 0x1E0
        pub m_flCullStart: [u8; 0x4], // 0x1E4
        pub m_flCullEnd: [u8; 0x4], // 0x1E8
        pub m_flCullExp: [u8; 0x4], // 0x1EC
    }
    #[repr(C)]
    pub struct C_INIT_RandomYawFlip {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_flPercent: [u8; 0x8], // 0x1E8
    }
    #[repr(C)]
    pub struct SequenceWeightedList_t {
        pub m_nSequence: [u8; 0x4], // 0x0
        pub m_flRelativeWeight: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct C_OP_ReadFromNeighboringParticle {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldInput: [u8; 0x4], // 0x1E0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E4
        pub m_nIncrement: [u8; 0x8], // 0x1E8
        pub m_DistanceCheck: [u8; 0x178], // 0x1F0
        pub m_flInterpolation: [u8; 0x178], // 0x368
    }
    #[repr(C)]
    pub struct C_OP_RenderText {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_OutlineColor: [u8; 0x8], // 0x230
        pub m_DefaultText: [u8; 0x8], // 0x238
    }
    #[repr(C)]
    pub struct C_OP_LerpToInitialPosition {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nControlPointNumber: [u8; 0x8], // 0x1E0
        pub m_flInterpolation: [u8; 0x178], // 0x1E8
        pub m_nCacheField: [u8; 0x8], // 0x360
        pub m_flScale: [u8; 0x178], // 0x368
        pub m_vecScale: [u8; 0x6D8], // 0x4E0
    }
    #[repr(C)]
    pub struct C_INIT_RandomRotation {
        pub pad_0: [u8; 0x208], // 0x0
    }
    #[repr(C)]
    pub struct C_OP_LerpEndCapVector {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E0
        pub m_vecOutput: [u8; 0xC], // 0x1E4
        pub m_flLerpTime: [u8; 0x8], // 0x1F0
    }
    #[repr(C)]
    pub struct C_OP_VelocityDecay {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flMinVelocity: [u8; 0x8], // 0x1E0
    }
    #[repr(C)]
    pub struct C_OP_SetCPOrientationToPointAtCP {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nInputCP: [u8; 0x4], // 0x1E8
        pub m_nOutputCP: [u8; 0x4], // 0x1EC
        pub m_flInterpolation: [u8; 0x178], // 0x1F0
        pub m_b2DOrientation: [u8; 0x1], // 0x368
        pub m_bAvoidSingularity: [u8; 0x1], // 0x369
        pub m_bPointAway: [u8; 0x6], // 0x36A
    }
    #[repr(C)]
    pub struct C_OP_LockToPointList {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldOutput: [u8; 0x8], // 0x1E0
        pub m_pointList: [u8; 0x18], // 0x1E8
        pub m_bPlaceAlongPath: [u8; 0x1], // 0x200
        pub m_bClosedLoop: [u8; 0x3], // 0x201
        pub m_nNumPointsAlongPath: [u8; 0x4], // 0x204
    }
    #[repr(C)]
    pub struct C_INIT_CreateWithinCone {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_TransformInput: [u8; 0x68], // 0x1E8
        pub m_flInnerAngle: [u8; 0x178], // 0x250
        pub m_flOuterAngle: [u8; 0x178], // 0x3C8
        pub m_flSpeed: [u8; 0x178], // 0x540
        pub m_flOffset: [u8; 0x178], // 0x6B8
        pub m_bCollapseOffset: [u8; 0x4], // 0x830
        pub m_randomnessParameters: [u8; 0xC], // 0x834
    }
    #[repr(C)]
    pub struct C_OP_MovementPlaceOnGround {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flOffset: [u8; 0x178], // 0x1E0
        pub m_flMaxTraceLength: [u8; 0x4], // 0x358
        pub m_flTolerance: [u8; 0x4], // 0x35C
        pub m_vecTraceDir: [u8; 0x6D8], // 0x360
        pub m_flTraceOffset: [u8; 0x4], // 0xA38
        pub m_flLerpRate: [u8; 0x4], // 0xA3C
        pub m_CollisionGroupName: [u8; 0x80], // 0xA40
        pub m_nTraceSet: [u8; 0x4], // 0xAC0
        pub m_nRefCP1: [u8; 0x4], // 0xAC4
        pub m_nRefCP2: [u8; 0x4], // 0xAC8
        pub m_nLerpCP: [u8; 0xC], // 0xACC
        pub m_nTraceMissBehavior: [u8; 0x4], // 0xAD8
        pub m_bIncludeShotHull: [u8; 0x1], // 0xADC
        pub m_bIncludeWater: [u8; 0x3], // 0xADD
        pub m_bSetNormal: [u8; 0x1], // 0xAE0
        pub m_bScaleOffset: [u8; 0x3], // 0xAE1
        pub m_nPreserveOffsetCP: [u8; 0x4], // 0xAE4
        pub m_nIgnoreCP: [u8; 0x8], // 0xAE8
    }
    #[repr(C)]
    pub struct C_OP_SetCPOrientationToDirection {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nInputControlPoint: [u8; 0x4], // 0x1E0
        pub m_nOutputControlPoint: [u8; 0x4], // 0x1E4
    }
    #[repr(C)]
    pub struct C_OP_RemapCrossProductOfTwoVectorsToVector {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_InputVec1: [u8; 0x6D8], // 0x1E0
        pub m_InputVec2: [u8; 0x6D8], // 0x8B8
        pub m_nFieldOutput: [u8; 0x4], // 0xF90
        pub m_bNormalize: [u8; 0x4], // 0xF94
    }
    #[repr(C)]
    pub struct C_OP_RemapTransformOrientationToRotations {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_TransformInput: [u8; 0x68], // 0x1E0
        pub m_vecRotation: [u8; 0xC], // 0x248
        pub m_bUseQuat: [u8; 0x1], // 0x254
        pub m_bWriteNormal: [u8; 0x3], // 0x255
    }
    #[repr(C)]
    pub struct C_INIT_RandomRotationSpeed {
        pub pad_0: [u8; 0x208], // 0x0
    }
    #[repr(C)]
    pub struct C_OP_InheritFromParentParticlesV2 {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flScale: [u8; 0x178], // 0x1E0
        pub m_nFieldOutput: [u8; 0x8], // 0x358
        pub m_nIncrement: [u8; 0x178], // 0x360
        pub m_bSubSample: [u8; 0x1], // 0x4D8
        pub m_bRandomDistribution: [u8; 0x1], // 0x4D9
        pub m_bReverse: [u8; 0x2], // 0x4DA
        pub m_nMissingParentBehavior: [u8; 0x4], // 0x4DC
        pub m_flInterpolation: [u8; 0x178], // 0x4E0
    }
    #[repr(C)]
    pub struct C_INIT_RandomSecondSequence {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nSequenceMin: [u8; 0x4], // 0x1E8
        pub m_nSequenceMax: [u8; 0x4], // 0x1EC
    }
    #[repr(C)]
    pub struct C_OP_SetFloatCollection {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_InputValue: [u8; 0x178], // 0x1E0
        pub m_nOutputField: [u8; 0x4], // 0x358
        pub m_nSetMethod: [u8; 0x4], // 0x35C
        pub m_Lerp: [u8; 0x1A0], // 0x360
    }
    #[repr(C)]
    pub struct PointDefinition_t {
        pub m_nControlPoint: [u8; 0x4], // 0x0
        pub m_bLocalCoords: [u8; 0x4], // 0x4
        pub m_vOffset: [u8; 0xC], // 0x8
    }
    #[repr(C)]
    pub struct C_OP_SetControlPointPositionToRandomActiveCP {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nCP1: [u8; 0x4], // 0x1E8
        pub m_nHeadLocationMin: [u8; 0x4], // 0x1EC
        pub m_nHeadLocationMax: [u8; 0x8], // 0x1F0
        pub m_flResetRate: [u8; 0x178], // 0x1F8
    }
    #[repr(C)]
    pub struct C_OP_Diffusion {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flRadiusScale: [u8; 0x4], // 0x1E0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E4
        pub m_nVoxelGridResolution: [u8; 0x8], // 0x1E8
    }
    #[repr(C)]
    pub struct C_INIT_AgeNoise {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_bAbsVal: [u8; 0x1], // 0x1E8
        pub m_bAbsValInv: [u8; 0x3], // 0x1E9
        pub m_flOffset: [u8; 0x4], // 0x1EC
        pub m_flAgeMin: [u8; 0x4], // 0x1F0
        pub m_flAgeMax: [u8; 0x4], // 0x1F4
        pub m_flNoiseScale: [u8; 0x4], // 0x1F8
        pub m_flNoiseScaleLoc: [u8; 0x4], // 0x1FC
        pub m_vecOffsetLoc: [u8; 0x10], // 0x200
    }
    #[repr(C)]
    pub struct C_OP_RemapVectorComponentToScalar {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldInput: [u8; 0x4], // 0x1E0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E4
        pub m_nComponent: [u8; 0x8], // 0x1E8
    }
    #[repr(C)]
    pub struct CGeneralRandomRotation {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E8
        pub m_flDegrees: [u8; 0x4], // 0x1EC
        pub m_flDegreesMin: [u8; 0x4], // 0x1F0
        pub m_flDegreesMax: [u8; 0x4], // 0x1F4
        pub m_flRotationRandExponent: [u8; 0x4], // 0x1F8
        pub m_bRandomlyFlipDirection: [u8; 0xC], // 0x1FC
    }
    #[repr(C)]
    pub struct C_OP_DistanceBetweenVecs {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldOutput: [u8; 0x8], // 0x1E0
        pub m_vecPoint1: [u8; 0x6D8], // 0x1E8
        pub m_vecPoint2: [u8; 0x6D8], // 0x8C0
        pub m_flInputMin: [u8; 0x178], // 0xF98
        pub m_flInputMax: [u8; 0x178], // 0x1110
        pub m_flOutputMin: [u8; 0x178], // 0x1288
        pub m_flOutputMax: [u8; 0x178], // 0x1400
        pub m_nSetMethod: [u8; 0x4], // 0x1578
        pub m_bDeltaTime: [u8; 0x4], // 0x157C
    }
    #[repr(C)]
    pub struct C_OP_DampenToCP {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nControlPointNumber: [u8; 0x4], // 0x1E0
        pub m_flRange: [u8; 0x4], // 0x1E4
        pub m_flScale: [u8; 0x8], // 0x1E8
    }
    #[repr(C)]
    pub struct C_OP_CalculateVectorAttribute {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_vStartValue: [u8; 0xC], // 0x1E0
        pub m_nFieldInput1: [u8; 0x4], // 0x1EC
        pub m_flInputScale1: [u8; 0x4], // 0x1F0
        pub m_nFieldInput2: [u8; 0x4], // 0x1F4
        pub m_flInputScale2: [u8; 0x4], // 0x1F8
        pub m_nControlPointInput1: [u8; 0x14], // 0x1FC
        pub m_flControlPointScale1: [u8; 0x4], // 0x210
        pub m_nControlPointInput2: [u8; 0x14], // 0x214
        pub m_flControlPointScale2: [u8; 0x4], // 0x228
        pub m_nFieldOutput: [u8; 0x4], // 0x22C
        pub m_vFinalOutputScale: [u8; 0x10], // 0x230
    }
    #[repr(C)]
    pub struct C_OP_LockToBone {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_modelInput: [u8; 0x60], // 0x1E0
        pub m_transformInput: [u8; 0x68], // 0x240
        pub m_flLifeTimeFadeStart: [u8; 0x4], // 0x2A8
        pub m_flLifeTimeFadeEnd: [u8; 0x4], // 0x2AC
        pub m_flJumpThreshold: [u8; 0x4], // 0x2B0
        pub m_flPrevPosScale: [u8; 0x4], // 0x2B4
        pub m_HitboxSetName: [u8; 0x80], // 0x2B8
        pub m_bRigid: [u8; 0x1], // 0x338
        pub m_bUseBones: [u8; 0x3], // 0x339
        pub m_nFieldOutput: [u8; 0x4], // 0x33C
        pub m_nFieldOutputPrev: [u8; 0x4], // 0x340
        pub m_nRotationSetType: [u8; 0x4], // 0x344
        pub m_bRigidRotationLock: [u8; 0x8], // 0x348
        pub m_vecRotation: [u8; 0x6D8], // 0x350
        pub m_flRotLerp: [u8; 0x178], // 0xA28
    }
    #[repr(C)]
    pub struct C_OP_RemapNamedModelBodyPartOnceTimed {
        pub pad_0: [u8; 0x240], // 0x0
    }
    #[repr(C)]
    pub struct C_OP_ScreenSpaceRotateTowardTarget {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_vecTargetPosition: [u8; 0x6D8], // 0x1E0
        pub m_flOutputRemap: [u8; 0x178], // 0x8B8
        pub m_nSetMethod: [u8; 0x8], // 0xA30
        pub m_flScreenEdgeAlignmentDistance: [u8; 0x178], // 0xA38
    }
    #[repr(C)]
    pub struct C_OP_MovementMaintainOffset {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_vecOffset: [u8; 0xC], // 0x1E0
        pub m_nCP: [u8; 0x4], // 0x1EC
        pub m_bRadiusScale: [u8; 0x8], // 0x1F0
    }
    #[repr(C)]
    pub struct C_INIT_CreateWithinCapsuleTransform {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_fRadiusMin: [u8; 0x178], // 0x1E8
        pub m_fRadiusMax: [u8; 0x178], // 0x360
        pub m_fHeight: [u8; 0x178], // 0x4D8
        pub m_TransformInput: [u8; 0x68], // 0x650
        pub m_fSpeedMin: [u8; 0x178], // 0x6B8
        pub m_fSpeedMax: [u8; 0x178], // 0x830
        pub m_fSpeedRandExp: [u8; 0x8], // 0x9A8
        pub m_LocalCoordinateSystemSpeedMin: [u8; 0x6D8], // 0x9B0
        pub m_LocalCoordinateSystemSpeedMax: [u8; 0x6D8], // 0x1088
        pub m_nFieldOutput: [u8; 0x4], // 0x1760
        pub m_nFieldVelocity: [u8; 0x4], // 0x1764
    }
    #[repr(C)]
    pub struct C_OP_SetVec {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_InputValue: [u8; 0x6D8], // 0x1E0
        pub m_nOutputField: [u8; 0x4], // 0x8B8
        pub m_nSetMethod: [u8; 0x4], // 0x8BC
        pub m_Lerp: [u8; 0x178], // 0x8C0
        pub m_bNormalizedOutput: [u8; 0x8], // 0xA38
    }
    #[repr(C)]
    pub struct C_INIT_CreateFromParentParticles {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_flVelocityScale: [u8; 0x4], // 0x1E8
        pub m_flIncrement: [u8; 0x4], // 0x1EC
        pub m_bRandomDistribution: [u8; 0x4], // 0x1F0
        pub m_nRandomSeed: [u8; 0x4], // 0x1F4
        pub m_bSubFrame: [u8; 0x1], // 0x1F8
        pub m_bSetRopeSegmentID: [u8; 0x7], // 0x1F9
    }
    #[repr(C)]
    pub struct C_INIT_CheckParticleForWater {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_flRadius: [u8; 0x178], // 0x1E8
        pub m_nFieldOutput: [u8; 0x8], // 0x360
        pub m_flOutputRemap: [u8; 0x178], // 0x368
        pub m_nSetMethod: [u8; 0x8], // 0x4E0
    }
    #[repr(C)]
    pub struct C_INIT_RandomNamedModelBodyPart {
        pub pad_0: [u8; 0x210], // 0x0
    }
    #[repr(C)]
    pub struct C_OP_RenderOmni2Light {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_nLightType: [u8; 0x4], // 0x230
        pub m_nMaxAllowed: [u8; 0x4], // 0x234
        pub m_vColorBlend: [u8; 0x6D8], // 0x238
        pub m_nColorBlendType: [u8; 0x8], // 0x910
        pub m_strLightStyle: [u8; 0x8], // 0x918
        pub m_flLightStyleTime: [u8; 0x178], // 0x920
        pub m_nBrightnessUnit: [u8; 0x8], // 0xA98
        pub m_flBrightnessLumens: [u8; 0x178], // 0xAA0
        pub m_flBrightnessCandelas: [u8; 0x178], // 0xC18
        pub m_bCastShadows: [u8; 0x1], // 0xD90
        pub m_bDynamicBounce: [u8; 0x7], // 0xD91
        pub m_flBounceScale: [u8; 0x178], // 0xD98
        pub m_bFog: [u8; 0x8], // 0xF10
        pub m_flFogScale: [u8; 0x178], // 0xF18
        pub m_flLuminaireRadius: [u8; 0x178], // 0x1090
        pub m_nOrientationType: [u8; 0x8], // 0x1208
        pub m_vNormal: [u8; 0x6D8], // 0x1210
        pub m_vTarget: [u8; 0x6D8], // 0x18E8
        pub m_flFOVAngle: [u8; 0x178], // 0x1FC0
        pub m_flBarnShape: [u8; 0x178], // 0x2138
        pub m_flBarnNearSizeX: [u8; 0x178], // 0x22B0
        pub m_flBarnNearSizeY: [u8; 0x178], // 0x2428
        pub m_flBarnSoftX: [u8; 0x178], // 0x25A0
        pub m_flBarnSoftY: [u8; 0x178], // 0x2718
        pub m_flSkirt: [u8; 0x178], // 0x2890
        pub m_flRange: [u8; 0x178], // 0x2A08
        pub m_flInnerConeAngle: [u8; 0x178], // 0x2B80
        pub m_flOuterConeAngle: [u8; 0x178], // 0x2CF8
        pub m_hLightCookie: [u8; 0x8], // 0x2E70
        pub m_bSphericalCookie: [u8; 0x10], // 0x2E78
    }
    #[repr(C)]
    pub struct C_OP_ConnectParentParticleToNearest {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFirstControlPoint: [u8; 0x4], // 0x1E0
        pub m_nSecondControlPoint: [u8; 0x4], // 0x1E4
        pub m_bUseRadius: [u8; 0x8], // 0x1E8
        pub m_flRadiusScale: [u8; 0x178], // 0x1F0
        pub m_flParentRadiusScale: [u8; 0x178], // 0x368
    }
    #[repr(C)]
    pub struct CPAssignment_t {
        pub m_nCPNumber: [u8; 0x8], // 0x0
        pub m_Pos: [u8; 0x6D8], // 0x8
        pub m_nOrientationMode: [u8; 0x8], // 0x6E0
    }
    #[repr(C)]
    pub struct C_INIT_RemapParticleCountToNamedModelBodyPartScalar {
        pub pad_0: [u8; 0x238], // 0x0
    }
    #[repr(C)]
    pub struct C_INIT_InitSkinnedPositionFromCPSnapshot {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nSnapshotControlPointNumber: [u8; 0x4], // 0x1E8
        pub m_nControlPointNumber: [u8; 0x4], // 0x1EC
        pub m_bRandom: [u8; 0x4], // 0x1F0
        pub m_nRandomSeed: [u8; 0x4], // 0x1F4
        pub m_bRigid: [u8; 0x1], // 0x1F8
        pub m_bSetNormal: [u8; 0x1], // 0x1F9
        pub m_bIgnoreDt: [u8; 0x2], // 0x1FA
        pub m_flMinNormalVelocity: [u8; 0x4], // 0x1FC
        pub m_flMaxNormalVelocity: [u8; 0x4], // 0x200
        pub m_nIndexType: [u8; 0x4], // 0x204
        pub m_flReadIndex: [u8; 0x178], // 0x208
        pub m_flIncrement: [u8; 0x4], // 0x380
        pub m_nFullLoopIncrement: [u8; 0x4], // 0x384
        pub m_nSnapShotStartPoint: [u8; 0x4], // 0x388
        pub m_flBoneVelocity: [u8; 0x4], // 0x38C
        pub m_flBoneVelocityMax: [u8; 0x4], // 0x390
        pub m_bCopyColor: [u8; 0x1], // 0x394
        pub m_bCopyAlpha: [u8; 0x1], // 0x395
        pub m_bSetRadius: [u8; 0x2], // 0x396
    }
    #[repr(C)]
    pub struct C_OP_LagCompensation {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nDesiredVelocityCP: [u8; 0x4], // 0x1E0
        pub m_nLatencyCP: [u8; 0x4], // 0x1E4
        pub m_nLatencyCPField: [u8; 0x4], // 0x1E8
        pub m_nDesiredVelocityCPField: [u8; 0x4], // 0x1EC
    }
    #[repr(C)]
    pub struct C_OP_CollideWithSelf {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flRadiusScale: [u8; 0x178], // 0x1E0
        pub m_flMinimumSpeed: [u8; 0x178], // 0x358
    }
    #[repr(C)]
    pub struct C_OP_Noise {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E0
        pub m_flOutputMin: [u8; 0x4], // 0x1E4
        pub m_flOutputMax: [u8; 0x4], // 0x1E8
        pub m_fl4NoiseScale: [u8; 0x4], // 0x1EC
        pub m_bAdditive: [u8; 0x4], // 0x1F0
        pub m_flNoiseAnimationTimeScale: [u8; 0x4], // 0x1F4
    }
    #[repr(C)]
    pub struct C_OP_FadeAndKillForTracers {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flStartFadeInTime: [u8; 0x4], // 0x1E0
        pub m_flEndFadeInTime: [u8; 0x4], // 0x1E4
        pub m_flStartFadeOutTime: [u8; 0x4], // 0x1E8
        pub m_flEndFadeOutTime: [u8; 0x4], // 0x1EC
        pub m_flStartAlpha: [u8; 0x4], // 0x1F0
        pub m_flEndAlpha: [u8; 0x4], // 0x1F4
    }
    #[repr(C)]
    pub struct C_OP_ColorAdjustHSL {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flHueAdjust: [u8; 0x178], // 0x1E0
        pub m_flSaturationAdjust: [u8; 0x178], // 0x358
        pub m_flLightnessAdjust: [u8; 0x178], // 0x4D0
    }
    #[repr(C)]
    pub struct CParticleMassCalculationParameters {
        pub m_nMassMode: [u8; 0x8], // 0x0
        pub m_flRadius: [u8; 0x178], // 0x8
        pub m_flNominalRadius: [u8; 0x178], // 0x180
        pub m_flScale: [u8; 0x178], // 0x2F8
    }
    #[repr(C)]
    pub struct C_OP_SequenceFromModel {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nControlPointNumber: [u8; 0x4], // 0x1E0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E4
        pub m_nFieldOutputAnim: [u8; 0x4], // 0x1E8
        pub m_flInputMin: [u8; 0x4], // 0x1EC
        pub m_flInputMax: [u8; 0x4], // 0x1F0
        pub m_flOutputMin: [u8; 0x4], // 0x1F4
        pub m_flOutputMax: [u8; 0x4], // 0x1F8
        pub m_nSetMethod: [u8; 0x4], // 0x1FC
    }
    #[repr(C)]
    pub struct C_OP_AlphaDecay {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flMinAlpha: [u8; 0x8], // 0x1E0
    }
    #[repr(C)]
    pub struct C_OP_RemapDensityGradientToVectorAttribute {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flRadiusScale: [u8; 0x4], // 0x1E0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E4
    }
    #[repr(C)]
    pub struct C_INIT_InitVec {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_InputValue: [u8; 0x6D8], // 0x1E8
        pub m_nOutputField: [u8; 0x4], // 0x8C0
        pub m_nSetMethod: [u8; 0x4], // 0x8C4
        pub m_bNormalizedOutput: [u8; 0x1], // 0x8C8
        pub m_bWritePreviousPosition: [u8; 0x7], // 0x8C9
    }
    #[repr(C)]
    pub struct C_INIT_SetHitboxToModel {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nControlPointNumber: [u8; 0x4], // 0x1E8
        pub m_nForceInModel: [u8; 0x4], // 0x1EC
        pub m_bEvenDistribution: [u8; 0x4], // 0x1F0
        pub m_nDesiredHitbox: [u8; 0x4], // 0x1F4
        pub m_vecHitBoxScale: [u8; 0x6D8], // 0x1F8
        pub m_vecDirectionBias: [u8; 0xC], // 0x8D0
        pub m_bMaintainHitbox: [u8; 0x1], // 0x8DC
        pub m_bUseBones: [u8; 0x1], // 0x8DD
        pub m_HitboxSetName: [u8; 0x82], // 0x8DE
        pub m_flShellSize: [u8; 0x178], // 0x960
    }
    #[repr(C)]
    pub struct C_OP_MovementMoveAlongSkinnedCPSnapshot {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nControlPointNumber: [u8; 0x4], // 0x1E0
        pub m_nSnapshotControlPointNumber: [u8; 0x4], // 0x1E4
        pub m_bSetNormal: [u8; 0x1], // 0x1E8
        pub m_bSetRadius: [u8; 0x7], // 0x1E9
        pub m_flInterpolation: [u8; 0x178], // 0x1F0
        pub m_flTValue: [u8; 0x178], // 0x368
    }
    #[repr(C)]
    pub struct C_OP_LerpScalar {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldOutput: [u8; 0x8], // 0x1E0
        pub m_flOutput: [u8; 0x178], // 0x1E8
        pub m_flStartTime: [u8; 0x4], // 0x360
        pub m_flEndTime: [u8; 0x4], // 0x364
    }
    #[repr(C)]
    pub struct C_INIT_InitialRepulsionVelocity {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_CollisionGroupName: [u8; 0x80], // 0x1E8
        pub m_nTraceSet: [u8; 0x4], // 0x268
        pub m_vecOutputMin: [u8; 0xC], // 0x26C
        pub m_vecOutputMax: [u8; 0xC], // 0x278
        pub m_nControlPointNumber: [u8; 0x4], // 0x284
        pub m_bPerParticle: [u8; 0x1], // 0x288
        pub m_bTranslate: [u8; 0x1], // 0x289
        pub m_bProportional: [u8; 0x2], // 0x28A
        pub m_flTraceLength: [u8; 0x4], // 0x28C
        pub m_bPerParticleTR: [u8; 0x1], // 0x290
        pub m_bInherit: [u8; 0x3], // 0x291
        pub m_nChildCP: [u8; 0x4], // 0x294
        pub m_nChildGroupID: [u8; 0x8], // 0x298
    }
    #[repr(C)]
    pub struct C_OP_ClampScalar {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldOutput: [u8; 0x8], // 0x1E0
        pub m_flOutputMin: [u8; 0x178], // 0x1E8
        pub m_flOutputMax: [u8; 0x178], // 0x360
    }
    #[repr(C)]
    pub struct C_OP_SetControlPointToHMD {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nCP1: [u8; 0x4], // 0x1E8
        pub m_vecCP1Pos: [u8; 0xC], // 0x1EC
        pub m_bOrientToHMD: [u8; 0x8], // 0x1F8
    }
    #[repr(C)]
    pub struct C_OP_DifferencePreviousParticle {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldInput: [u8; 0x4], // 0x1E0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E4
        pub m_flInputMin: [u8; 0x4], // 0x1E8
        pub m_flInputMax: [u8; 0x4], // 0x1EC
        pub m_flOutputMin: [u8; 0x4], // 0x1F0
        pub m_flOutputMax: [u8; 0x4], // 0x1F4
        pub m_nSetMethod: [u8; 0x4], // 0x1F8
        pub m_bActiveRange: [u8; 0x1], // 0x1FC
        pub m_bSetPreviousParticle: [u8; 0x3], // 0x1FD
    }
    #[repr(C)]
    pub struct C_OP_SetControlPointFieldFromVectorExpression {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nExpression: [u8; 0x8], // 0x1E8
        pub m_vecInput1: [u8; 0x6D8], // 0x1F0
        pub m_vecInput2: [u8; 0x6D8], // 0x8C8
        pub m_flLerp: [u8; 0x178], // 0xFA0
        pub m_flOutputRemap: [u8; 0x178], // 0x1118
        pub m_nOutputCP: [u8; 0x4], // 0x1290
        pub m_nOutVectorField: [u8; 0x4], // 0x1294
    }
    #[repr(C)]
    pub struct C_OP_PercentageBetweenTransforms {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E0
        pub m_flInputMin: [u8; 0x4], // 0x1E4
        pub m_flInputMax: [u8; 0x4], // 0x1E8
        pub m_flOutputMin: [u8; 0x4], // 0x1EC
        pub m_flOutputMax: [u8; 0x8], // 0x1F0
        pub m_TransformStart: [u8; 0x68], // 0x1F8
        pub m_TransformEnd: [u8; 0x68], // 0x260
        pub m_nSetMethod: [u8; 0x4], // 0x2C8
        pub m_bActiveRange: [u8; 0x1], // 0x2CC
        pub m_bRadialCheck: [u8; 0x3], // 0x2CD
    }
    #[repr(C)]
    pub struct C_INIT_PlaneCull {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nControlPoint: [u8; 0x8], // 0x1E8
        pub m_flDistance: [u8; 0x178], // 0x1F0
        pub m_bCullInside: [u8; 0x8], // 0x368
    }
    #[repr(C)]
    pub struct C_OP_RemapNamedModelSequenceEndCap {
        pub pad_0: [u8; 0x240], // 0x0
    }
    #[repr(C)]
    pub struct C_INIT_InitFromCPSnapshot {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nControlPointNumber: [u8; 0x8], // 0x1E8
        pub m_strSnapshotSubset: [u8; 0x8], // 0x1F0
        pub m_nAttributeToRead: [u8; 0x4], // 0x1F8
        pub m_nAttributeToWrite: [u8; 0x4], // 0x1FC
        pub m_nLocalSpaceCP: [u8; 0x4], // 0x200
        pub m_bRandom: [u8; 0x1], // 0x204
        pub m_bReverse: [u8; 0x3], // 0x205
        pub m_nSnapShotIncrement: [u8; 0x178], // 0x208
        pub m_nManualSnapshotIndex: [u8; 0x178], // 0x380
        pub m_nRandomSeed: [u8; 0x4], // 0x4F8
        pub m_bLocalSpaceAngles: [u8; 0x4], // 0x4FC
    }
    #[repr(C)]
    pub struct C_OP_RenderCables {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_flRadiusScale: [u8; 0x178], // 0x230
        pub m_flAlphaScale: [u8; 0x178], // 0x3A8
        pub m_vecColorScale: [u8; 0x6D8], // 0x520
        pub m_nColorBlendType: [u8; 0x8], // 0xBF8
        pub m_hMaterial: [u8; 0x8], // 0xC00
        pub m_nTextureRepetitionMode: [u8; 0x8], // 0xC08
        pub m_flTextureRepeatsPerSegment: [u8; 0x178], // 0xC10
        pub m_flTextureRepeatsCircumference: [u8; 0x178], // 0xD88
        pub m_flColorMapOffsetV: [u8; 0x178], // 0xF00
        pub m_flColorMapOffsetU: [u8; 0x178], // 0x1078
        pub m_flNormalMapOffsetV: [u8; 0x178], // 0x11F0
        pub m_flNormalMapOffsetU: [u8; 0x178], // 0x1368
        pub m_bDrawCableCaps: [u8; 0x4], // 0x14E0
        pub m_flCapRoundness: [u8; 0x4], // 0x14E4
        pub m_flCapOffsetAmount: [u8; 0x4], // 0x14E8
        pub m_flTessScale: [u8; 0x4], // 0x14EC
        pub m_nMinTesselation: [u8; 0x4], // 0x14F0
        pub m_nMaxTesselation: [u8; 0x4], // 0x14F4
        pub m_nRoundness: [u8; 0x4], // 0x14F8
        pub m_nForceRoundnessFixed: [u8; 0x1], // 0x14FC
        pub m_bOnlyRenderInEffectsBloomPass: [u8; 0x3], // 0x14FD
        pub m_LightingTransform: [u8; 0x68], // 0x1500
        pub m_MaterialFloatVars: [u8; 0x20], // 0x1568
        pub m_MaterialVecVars: [u8; 0x20], // 0x1588
    }
    #[repr(C)]
    pub struct C_INIT_InheritVelocity {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nControlPointNumber: [u8; 0x4], // 0x1E8
        pub m_flVelocityScale: [u8; 0x4], // 0x1EC
    }
    #[repr(C)]
    pub struct C_OP_SetControlPointToWaterSurface {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nSourceCP: [u8; 0x4], // 0x1E8
        pub m_nDestCP: [u8; 0x4], // 0x1EC
        pub m_nFlowCP: [u8; 0x4], // 0x1F0
        pub m_nActiveCP: [u8; 0x4], // 0x1F4
        pub m_nActiveCPField: [u8; 0x8], // 0x1F8
        pub m_flRetestRate: [u8; 0x178], // 0x200
        pub m_bAdaptiveThreshold: [u8; 0x8], // 0x378
    }
    #[repr(C)]
    pub struct C_INIT_PositionOffset {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_OffsetMin: [u8; 0x6D8], // 0x1E8
        pub m_OffsetMax: [u8; 0x6D8], // 0x8C0
        pub m_TransformInput: [u8; 0x68], // 0xF98
        pub m_bLocalCoords: [u8; 0x1], // 0x1000
        pub m_bProportional: [u8; 0x3], // 0x1001
        pub m_randomnessParameters: [u8; 0xC], // 0x1004
    }
    #[repr(C)]
    pub struct C_INIT_NormalAlignToCP {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_transformInput: [u8; 0x68], // 0x1E8
        pub m_nControlPointAxis: [u8; 0x8], // 0x250
    }
    #[repr(C)]
    pub struct C_OP_ShapeMatchingConstraint {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flShapeRestorationTime: [u8; 0x8], // 0x1E0
    }
    #[repr(C)]
    pub struct C_OP_SetChildControlPoints {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nChildGroupID: [u8; 0x4], // 0x1E0
        pub m_nFirstControlPoint: [u8; 0x4], // 0x1E4
        pub m_nNumControlPoints: [u8; 0x8], // 0x1E8
        pub m_nFirstSourcePoint: [u8; 0x178], // 0x1F0
        pub m_bReverse: [u8; 0x1], // 0x368
        pub m_bSetOrientation: [u8; 0x3], // 0x369
        pub m_nOrientation: [u8; 0x4], // 0x36C
    }
    #[repr(C)]
    pub struct C_OP_ChladniWave {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldOutput: [u8; 0x8], // 0x1E0
        pub m_flInputMin: [u8; 0x178], // 0x1E8
        pub m_flInputMax: [u8; 0x178], // 0x360
        pub m_flOutputMin: [u8; 0x178], // 0x4D8
        pub m_flOutputMax: [u8; 0x178], // 0x650
        pub m_vecWaveLength: [u8; 0x6D8], // 0x7C8
        pub m_vecHarmonics: [u8; 0x6D8], // 0xEA0
        pub m_nSetMethod: [u8; 0x4], // 0x1578
        pub m_nLocalSpaceControlPoint: [u8; 0x4], // 0x157C
        pub m_b3D: [u8; 0x8], // 0x1580
    }
    #[repr(C)]
    pub struct C_OP_RemapDirectionToCPToVector {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nCP: [u8; 0x4], // 0x1E0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E4
        pub m_flScale: [u8; 0x4], // 0x1E8
        pub m_flOffsetRot: [u8; 0x4], // 0x1EC
        pub m_vecOffsetAxis: [u8; 0xC], // 0x1F0
        pub m_bNormalize: [u8; 0x4], // 0x1FC
        pub m_nFieldStrength: [u8; 0x8], // 0x200
    }
    #[repr(C)]
    pub struct C_OP_DriveCPFromGlobalSoundFloat {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nOutputControlPoint: [u8; 0x4], // 0x1E8
        pub m_nOutputField: [u8; 0x4], // 0x1EC
        pub m_flInputMin: [u8; 0x4], // 0x1F0
        pub m_flInputMax: [u8; 0x4], // 0x1F4
        pub m_flOutputMin: [u8; 0x4], // 0x1F8
        pub m_flOutputMax: [u8; 0x4], // 0x1FC
        pub m_StackName: [u8; 0x8], // 0x200
        pub m_OperatorName: [u8; 0x8], // 0x208
        pub m_FieldName: [u8; 0x10], // 0x210
    }
    #[repr(C)]
    pub struct C_INIT_ScreenSpacePositionOfTarget {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_vecTargetPosition: [u8; 0x6D8], // 0x1E8
        pub m_bOututBehindness: [u8; 0x4], // 0x8C0
        pub m_nBehindFieldOutput: [u8; 0x4], // 0x8C4
        pub m_flBehindOutputRemap: [u8; 0x178], // 0x8C8
    }
    #[repr(C)]
    pub struct C_OP_RtEnvCull {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_vecTestDir: [u8; 0xC], // 0x1E0
        pub m_vecTestNormal: [u8; 0xC], // 0x1EC
        pub m_bCullOnMiss: [u8; 0x1], // 0x1F8
        pub m_bStickInsteadOfCull: [u8; 0x1], // 0x1F9
        pub m_RtEnvName: [u8; 0x82], // 0x1FA
        pub m_nRTEnvCP: [u8; 0x4], // 0x27C
        pub m_nComponent: [u8; 0x8], // 0x280
    }
    #[repr(C)]
    pub struct C_OP_PinParticleToCP {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nControlPointNumber: [u8; 0x8], // 0x1E0
        pub m_vecOffset: [u8; 0x6D8], // 0x1E8
        pub m_bOffsetLocal: [u8; 0x4], // 0x8C0
        pub m_nParticleSelection: [u8; 0x4], // 0x8C4
        pub m_nParticleNumber: [u8; 0x178], // 0x8C8
        pub m_nPinBreakType: [u8; 0x8], // 0xA40
        pub m_flBreakDistance: [u8; 0x178], // 0xA48
        pub m_flBreakSpeed: [u8; 0x178], // 0xBC0
        pub m_flAge: [u8; 0x178], // 0xD38
        pub m_nBreakControlPointNumber: [u8; 0x4], // 0xEB0
        pub m_nBreakControlPointNumber2: [u8; 0x4], // 0xEB4
        pub m_flBreakValue: [u8; 0x178], // 0xEB8
        pub m_flInterpolation: [u8; 0x178], // 0x1030
        pub m_bRetainInitialVelocity: [u8; 0x8], // 0x11A8
    }
    #[repr(C)]
    pub struct C_OP_RemapCPtoVector {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nCPInput: [u8; 0x4], // 0x1E0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E4
        pub m_nLocalSpaceCP: [u8; 0x4], // 0x1E8
        pub m_vInputMin: [u8; 0xC], // 0x1EC
        pub m_vInputMax: [u8; 0xC], // 0x1F8
        pub m_vOutputMin: [u8; 0xC], // 0x204
        pub m_vOutputMax: [u8; 0xC], // 0x210
        pub m_flStartTime: [u8; 0x4], // 0x21C
        pub m_flEndTime: [u8; 0x4], // 0x220
        pub m_flInterpRate: [u8; 0x4], // 0x224
        pub m_nSetMethod: [u8; 0x4], // 0x228
        pub m_bOffset: [u8; 0x1], // 0x22C
        pub m_bAccelerate: [u8; 0x3], // 0x22D
    }
    #[repr(C)]
    pub struct C_INIT_CreateParticleImpulse {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_InputRadius: [u8; 0x178], // 0x1E8
        pub m_InputMagnitude: [u8; 0x178], // 0x360
        pub m_nFalloffFunction: [u8; 0x8], // 0x4D8
        pub m_InputFalloffExp: [u8; 0x178], // 0x4E0
        pub m_nImpulseType: [u8; 0x8], // 0x658
    }
    #[repr(C)]
    pub struct C_OP_DensityForce {
        pub pad_0: [u8; 0x1F0], // 0x0
        pub m_flRadiusScale: [u8; 0x4], // 0x1F0
        pub m_flForceScale: [u8; 0x4], // 0x1F4
        pub m_flTargetDensity: [u8; 0x8], // 0x1F8
    }
    #[repr(C)]
    pub struct C_INIT_CreateInEpitrochoid {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nComponent1: [u8; 0x4], // 0x1E8
        pub m_nComponent2: [u8; 0x4], // 0x1EC
        pub m_TransformInput: [u8; 0x68], // 0x1F0
        pub m_flParticleDensity: [u8; 0x178], // 0x258
        pub m_flOffset: [u8; 0x178], // 0x3D0
        pub m_flRadius1: [u8; 0x178], // 0x548
        pub m_flRadius2: [u8; 0x178], // 0x6C0
        pub m_bUseCount: [u8; 0x1], // 0x838
        pub m_bUseLocalCoords: [u8; 0x1], // 0x839
        pub m_bOffsetExistingPos: [u8; 0x6], // 0x83A
    }
    #[repr(C)]
    pub struct C_OP_ConstrainDistanceToUserSpecifiedPath {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_fMinDistance: [u8; 0x4], // 0x1E0
        pub m_flMaxDistance: [u8; 0x4], // 0x1E4
        pub m_flTimeScale: [u8; 0x4], // 0x1E8
        pub m_bLoopedPath: [u8; 0x4], // 0x1EC
        pub m_pointList: [u8; 0x18], // 0x1F0
    }
    #[repr(C)]
    pub struct C_OP_SetControlPointPositions {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_bUseWorldLocation: [u8; 0x1], // 0x1E8
        pub m_bOrient: [u8; 0x1], // 0x1E9
        pub m_bSetOnce: [u8; 0x2], // 0x1EA
        pub m_nCP1: [u8; 0x4], // 0x1EC
        pub m_nCP2: [u8; 0x4], // 0x1F0
        pub m_nCP3: [u8; 0x4], // 0x1F4
        pub m_nCP4: [u8; 0x4], // 0x1F8
        pub m_vecCP1Pos: [u8; 0xC], // 0x1FC
        pub m_vecCP2Pos: [u8; 0xC], // 0x208
        pub m_vecCP3Pos: [u8; 0xC], // 0x214
        pub m_vecCP4Pos: [u8; 0xC], // 0x220
        pub m_nHeadLocation: [u8; 0x4], // 0x22C
    }
    #[repr(C)]
    pub struct C_OP_SetFloatAttributeToVectorExpression {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nExpression: [u8; 0x8], // 0x1E0
        pub m_vInput1: [u8; 0x6D8], // 0x1E8
        pub m_vInput2: [u8; 0x6D8], // 0x8C0
        pub m_flOutputRemap: [u8; 0x178], // 0xF98
        pub m_nOutputField: [u8; 0x4], // 0x1110
        pub m_nSetMethod: [u8; 0x4], // 0x1114
    }
    #[repr(C)]
    pub struct C_OP_MovementRotateParticleAroundAxis {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_vecRotAxis: [u8; 0x6D8], // 0x1E0
        pub m_flRotRate: [u8; 0x178], // 0x8B8
        pub m_TransformInput: [u8; 0x68], // 0xA30
        pub m_bLocalSpace: [u8; 0x8], // 0xA98
    }
    #[repr(C)]
    pub struct C_OP_IntraParticleForce {
        pub pad_0: [u8; 0x1F0], // 0x0
        pub m_flAttractionMinDistance: [u8; 0x4], // 0x1F0
        pub m_flAttractionMaxDistance: [u8; 0x4], // 0x1F4
        pub m_flAttractionMaxStrength: [u8; 0x4], // 0x1F8
        pub m_flRepulsionMinDistance: [u8; 0x4], // 0x1FC
        pub m_flRepulsionMaxDistance: [u8; 0x4], // 0x200
        pub m_flRepulsionMaxStrength: [u8; 0x4], // 0x204
        pub m_bUseAABB: [u8; 0x8], // 0x208
    }
    #[repr(C)]
    pub struct C_INIT_InitFloat {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_InputValue: [u8; 0x178], // 0x1E8
        pub m_nOutputField: [u8; 0x4], // 0x360
        pub m_nSetMethod: [u8; 0x4], // 0x364
        pub m_InputStrength: [u8; 0x180], // 0x368
    }
    #[repr(C)]
    pub struct C_INIT_CreateOnModel {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_modelInput: [u8; 0x60], // 0x1E8
        pub m_transformInput: [u8; 0x68], // 0x248
        pub m_nForceInModel: [u8; 0x4], // 0x2B0
        pub m_bScaleToVolume: [u8; 0x1], // 0x2B4
        pub m_bEvenDistribution: [u8; 0x3], // 0x2B5
        pub m_nDesiredHitbox: [u8; 0x178], // 0x2B8
        pub m_nHitboxValueFromControlPointIndex: [u8; 0x8], // 0x430
        pub m_vecHitBoxScale: [u8; 0x6D8], // 0x438
        pub m_flBoneVelocity: [u8; 0x4], // 0xB10
        pub m_flMaxBoneVelocity: [u8; 0x4], // 0xB14
        pub m_vecDirectionBias: [u8; 0x6D8], // 0xB18
        pub m_HitboxSetName: [u8; 0x80], // 0x11F0
        pub m_bLocalCoords: [u8; 0x1], // 0x1270
        pub m_bUseBones: [u8; 0x1], // 0x1271
        pub m_bUseMesh: [u8; 0x6], // 0x1272
        pub m_flShellSize: [u8; 0x178], // 0x1278
    }
    #[repr(C)]
    pub struct C_OP_InheritFromPeerSystem {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E0
        pub m_nFieldInput: [u8; 0x4], // 0x1E4
        pub m_nIncrement: [u8; 0x4], // 0x1E8
        pub m_nGroupID: [u8; 0x4], // 0x1EC
    }
    #[repr(C)]
    pub struct C_OP_PerParticleForce {
        pub pad_0: [u8; 0x1F0], // 0x0
        pub m_flForceScale: [u8; 0x178], // 0x1F0
        pub m_vForce: [u8; 0x6D8], // 0x368
        pub m_nCP: [u8; 0x8], // 0xA40
    }
    #[repr(C)]
    pub struct C_INIT_RandomNamedModelMeshGroup {
        pub pad_0: [u8; 0x210], // 0x0
    }
    #[repr(C)]
    pub struct C_OP_RenderProjected {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_bProjectCharacter: [u8; 0x1], // 0x230
        pub m_bProjectWorld: [u8; 0x1], // 0x231
        pub m_bProjectWater: [u8; 0x1], // 0x232
        pub m_bFlipHorizontal: [u8; 0x1], // 0x233
        pub m_bEnableProjectedDepthControls: [u8; 0x4], // 0x234
        pub m_flMinProjectionDepth: [u8; 0x4], // 0x238
        pub m_flMaxProjectionDepth: [u8; 0x4], // 0x23C
        pub m_vecProjectedMaterials: [u8; 0x18], // 0x240
        pub m_flMaterialSelection: [u8; 0x178], // 0x258
        pub m_flAnimationTimeScale: [u8; 0x4], // 0x3D0
        pub m_bOrientToNormal: [u8; 0x4], // 0x3D4
        pub m_MaterialVars: [u8; 0x18], // 0x3D8
        pub m_flRadiusScale: [u8; 0x178], // 0x3F0
        pub m_flAlphaScale: [u8; 0x178], // 0x568
        pub m_flRollScale: [u8; 0x178], // 0x6E0
        pub m_nAlpha2Field: [u8; 0x8], // 0x858
        pub m_vecColorScale: [u8; 0x6D8], // 0x860
        pub m_nColorBlendType: [u8; 0x20], // 0xF38
    }
    #[repr(C)]
    pub struct C_OP_MaxVelocity {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flMaxVelocity: [u8; 0x178], // 0x1E0
        pub m_flMinVelocity: [u8; 0x178], // 0x358
    }
    #[repr(C)]
    pub struct C_INIT_VelocityFromNormal {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_fSpeedMin: [u8; 0x4], // 0x1E8
        pub m_fSpeedMax: [u8; 0x4], // 0x1EC
        pub m_bIgnoreDt: [u8; 0x8], // 0x1F0
    }
    #[repr(C)]
    pub struct C_OP_MaintainEmitter {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nParticlesToMaintain: [u8; 0x178], // 0x1E8
        pub m_flStartTime: [u8; 0x8], // 0x360
        pub m_flEmissionDuration: [u8; 0x178], // 0x368
        pub m_flEmissionRate: [u8; 0x4], // 0x4E0
        pub m_nSnapshotControlPoint: [u8; 0x4], // 0x4E4
        pub m_strSnapshotSubset: [u8; 0x8], // 0x4E8
        pub m_bEmitInstantaneously: [u8; 0x1], // 0x4F0
        pub m_bFinalEmitOnStop: [u8; 0x7], // 0x4F1
        pub m_flScale: [u8; 0x178], // 0x4F8
    }
    #[repr(C)]
    pub struct C_INIT_PositionOffsetToCP {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nControlPointNumberStart: [u8; 0x4], // 0x1E8
        pub m_nControlPointNumberEnd: [u8; 0x4], // 0x1EC
        pub m_bLocalCoords: [u8; 0x8], // 0x1F0
    }
    #[repr(C)]
    pub struct C_INIT_RemapInitialTransformDirectionToRotation {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_TransformInput: [u8; 0x68], // 0x1E8
        pub m_nFieldOutput: [u8; 0x4], // 0x250
        pub m_flOffsetRot: [u8; 0x4], // 0x254
        pub m_nComponent: [u8; 0x8], // 0x258
    }
    #[repr(C)]
    pub struct C_OP_FadeAndKill {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flStartFadeInTime: [u8; 0x4], // 0x1E0
        pub m_flEndFadeInTime: [u8; 0x4], // 0x1E4
        pub m_flStartFadeOutTime: [u8; 0x4], // 0x1E8
        pub m_flEndFadeOutTime: [u8; 0x4], // 0x1EC
        pub m_flStartAlpha: [u8; 0x4], // 0x1F0
        pub m_flEndAlpha: [u8; 0x4], // 0x1F4
        pub m_bForcePreserveParticleOrder: [u8; 0x8], // 0x1F8
    }
    #[repr(C)]
    pub struct C_OP_ColorInterpolate {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_ColorFade: [u8; 0x10], // 0x1E0
        pub m_flFadeStartTime: [u8; 0x4], // 0x1F0
        pub m_flFadeEndTime: [u8; 0x4], // 0x1F4
        pub m_nFieldOutput: [u8; 0x4], // 0x1F8
        pub m_bEaseInOut: [u8; 0x4], // 0x1FC
    }
    #[repr(C)]
    pub struct C_OP_RampScalarSpline {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_RateMin: [u8; 0x4], // 0x1E0
        pub m_RateMax: [u8; 0x4], // 0x1E4
        pub m_flStartTime_min: [u8; 0x4], // 0x1E8
        pub m_flStartTime_max: [u8; 0x4], // 0x1EC
        pub m_flEndTime_min: [u8; 0x4], // 0x1F0
        pub m_flEndTime_max: [u8; 0x4], // 0x1F4
        pub m_flBias: [u8; 0x28], // 0x1F8
        pub m_nField: [u8; 0x4], // 0x220
        pub m_bProportionalOp: [u8; 0x1], // 0x224
        pub m_bEaseOut: [u8; 0xB], // 0x225
    }
    #[repr(C)]
    pub struct C_OP_RemapNamedModelSequenceOnceTimed {
        pub pad_0: [u8; 0x240], // 0x0
    }
    #[repr(C)]
    pub struct C_OP_SetControlPointFromObjectScale {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nCPInput: [u8; 0x4], // 0x1E8
        pub m_nCPOutput: [u8; 0x4], // 0x1EC
    }
    #[repr(C)]
    pub struct C_OP_MaintainSequentialPath {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_fMaxDistance: [u8; 0x178], // 0x1E0
        pub m_flNumToAssign: [u8; 0x178], // 0x358
        pub m_flCohesionStrength: [u8; 0x178], // 0x4D0
        pub m_flTolerance: [u8; 0x4], // 0x648
        pub m_bLoop: [u8; 0x1], // 0x64C
        pub m_bUseParticleCount: [u8; 0x3], // 0x64D
        pub m_PathParams: [u8; 0x40], // 0x650
    }
    #[repr(C)]
    pub struct C_OP_RemapNamedModelBodyPartEndCap {
        pub pad_0: [u8; 0x240], // 0x0
    }
    #[repr(C)]
    pub struct C_OP_StopAfterCPDuration {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_flDuration: [u8; 0x178], // 0x1E8
        pub m_bDestroyImmediately: [u8; 0x1], // 0x360
        pub m_bPlayEndCap: [u8; 0x7], // 0x361
    }
    #[repr(C)]
    pub struct CGeneralSpin {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nSpinRateDegrees: [u8; 0x4], // 0x1E0
        pub m_nSpinRateMinDegrees: [u8; 0x8], // 0x1E4
        pub m_fSpinRateStopTime: [u8; 0xC], // 0x1EC
    }
    #[repr(C)]
    pub struct C_OP_LockToSavedSequentialPath {
        pub pad_0: [u8; 0x1E4], // 0x0
        pub m_flFadeStart: [u8; 0x4], // 0x1E4
        pub m_flFadeEnd: [u8; 0x4], // 0x1E8
        pub m_bCPPairs: [u8; 0x4], // 0x1EC
        pub m_PathParams: [u8; 0x40], // 0x1F0
    }
    #[repr(C)]
    pub struct C_INIT_RemapNamedModelElementToScalar {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_hModel: [u8; 0x8], // 0x1E8
        pub m_names: [u8; 0x18], // 0x1F0
        pub m_values: [u8; 0x18], // 0x208
        pub m_nFieldInput: [u8; 0x4], // 0x220
        pub m_nFieldOutput: [u8; 0x4], // 0x224
        pub m_nSetMethod: [u8; 0x4], // 0x228
        pub m_bModelFromRenderer: [u8; 0x4], // 0x22C
    }
    #[repr(C)]
    pub struct C_OP_ClampVector {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldOutput: [u8; 0x8], // 0x1E0
        pub m_vecOutputMin: [u8; 0x6D8], // 0x1E8
        pub m_vecOutputMax: [u8; 0x6D8], // 0x8C0
    }
    #[repr(C)]
    pub struct C_OP_RenderStatusEffectCitadel {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_pTextureColorWarp: [u8; 0x8], // 0x230
        pub m_pTextureNormal: [u8; 0x8], // 0x238
        pub m_pTextureMetalness: [u8; 0x8], // 0x240
        pub m_pTextureRoughness: [u8; 0x8], // 0x248
        pub m_pTextureSelfIllum: [u8; 0x8], // 0x250
        pub m_pTextureDetail: [u8; 0x8], // 0x258
    }
    #[repr(C)]
    pub struct IParticleSystemDefinition {
        pub pad_0: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct C_OP_WindForce {
        pub pad_0: [u8; 0x1F0], // 0x0
        pub m_vForce: [u8; 0x10], // 0x1F0
    }
    #[repr(C)]
    pub struct C_OP_SetVariable {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_variableReference: [u8; 0x50], // 0x1E8
        pub m_transformInput: [u8; 0x68], // 0x238
        pub m_positionOffset: [u8; 0xC], // 0x2A0
        pub m_rotationOffset: [u8; 0xC], // 0x2AC
        pub m_vecInput: [u8; 0x6D8], // 0x2B8
        pub m_floatInput: [u8; 0x178], // 0x990
    }
    #[repr(C)]
    pub struct C_OP_RenderStandardLight {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_nLightType: [u8; 0x4], // 0x230
        pub m_nMaxAllowed: [u8; 0x4], // 0x234
        pub m_vecColorScale: [u8; 0x6D8], // 0x238
        pub m_nColorBlendType: [u8; 0x8], // 0x910
        pub m_strLightStyle: [u8; 0x8], // 0x918
        pub m_flLightStyleTime: [u8; 0x178], // 0x920
        pub m_flIntensity: [u8; 0x178], // 0xA98
        pub m_bCastShadows: [u8; 0x1], // 0xC10
        pub m_bDynamicBounce: [u8; 0x7], // 0xC11
        pub m_flBounceScale: [u8; 0x178], // 0xC18
        pub m_flTheta: [u8; 0x178], // 0xD90
        pub m_flPhi: [u8; 0x178], // 0xF08
        pub m_flRadiusMultiplier: [u8; 0x178], // 0x1080
        pub m_nAttenuationStyle: [u8; 0x8], // 0x11F8
        pub m_flFalloffLinearity: [u8; 0x178], // 0x1200
        pub m_flFiftyPercentFalloff: [u8; 0x178], // 0x1378
        pub m_flZeroPercentFalloff: [u8; 0x178], // 0x14F0
        pub m_bRenderDiffuse: [u8; 0x1], // 0x1668
        pub m_bRenderSpecular: [u8; 0x7], // 0x1669
        pub m_lightCookie: [u8; 0x8], // 0x1670
        pub m_nPriority: [u8; 0x4], // 0x1678
        pub m_nFogLightingMode: [u8; 0x4], // 0x167C
        pub m_flFogContribution: [u8; 0x178], // 0x1680
        pub m_nCapsuleLightBehavior: [u8; 0x4], // 0x17F8
        pub m_flCapsuleLength: [u8; 0x4], // 0x17FC
        pub m_bReverseOrder: [u8; 0x1], // 0x1800
        pub m_bClosedLoop: [u8; 0x3], // 0x1801
        pub m_nPrevPntSource: [u8; 0x4], // 0x1804
        pub m_flMaxLength: [u8; 0x4], // 0x1808
        pub m_flMinLength: [u8; 0x4], // 0x180C
        pub m_bIgnoreDT: [u8; 0x4], // 0x1810
        pub m_flConstrainRadiusToLengthRatio: [u8; 0x4], // 0x1814
        pub m_flLengthScale: [u8; 0x4], // 0x1818
        pub m_flLengthFadeInTime: [u8; 0xC], // 0x181C
    }
    #[repr(C)]
    pub struct C_OP_DistanceToTransform {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldOutput: [u8; 0x8], // 0x1E0
        pub m_flInputMin: [u8; 0x178], // 0x1E8
        pub m_flInputMax: [u8; 0x178], // 0x360
        pub m_flOutputMin: [u8; 0x178], // 0x4D8
        pub m_flOutputMax: [u8; 0x178], // 0x650
        pub m_TransformStart: [u8; 0x68], // 0x7C8
        pub m_bLOS: [u8; 0x1], // 0x830
        pub m_CollisionGroupName: [u8; 0x83], // 0x831
        pub m_nTraceSet: [u8; 0x4], // 0x8B4
        pub m_flMaxTraceLength: [u8; 0x4], // 0x8B8
        pub m_flLOSScale: [u8; 0x4], // 0x8BC
        pub m_nSetMethod: [u8; 0x4], // 0x8C0
        pub m_bActiveRange: [u8; 0x1], // 0x8C4
        pub m_bAdditive: [u8; 0x3], // 0x8C5
        pub m_vecComponentScale: [u8; 0x6D8], // 0x8C8
    }
    #[repr(C)]
    pub struct C_OP_RemapControlPointOrientationToRotation {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nCP: [u8; 0x4], // 0x1E0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E4
        pub m_flOffsetRot: [u8; 0x4], // 0x1E8
        pub m_nComponent: [u8; 0x4], // 0x1EC
    }
    #[repr(C)]
    pub struct C_OP_SetControlPointToCenter {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nCP1: [u8; 0x4], // 0x1E8
        pub m_vecCP1Pos: [u8; 0xC], // 0x1EC
        pub m_bUseAvgParticlePos: [u8; 0x4], // 0x1F8
        pub m_nSetParent: [u8; 0x4], // 0x1FC
    }
    #[repr(C)]
    pub struct C_OP_RemapAverageScalarValuetoCP {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nExpression: [u8; 0x8], // 0x1E8
        pub m_flDecimalPlaces: [u8; 0x178], // 0x1F0
        pub m_nOutControlPointNumber: [u8; 0x4], // 0x368
        pub m_nOutVectorField: [u8; 0x4], // 0x36C
        pub m_nField: [u8; 0x8], // 0x370
        pub m_flOutputRemap: [u8; 0x178], // 0x378
    }
    #[repr(C)]
    pub struct C_OP_RemapDotProductToScalar {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nInputCP1: [u8; 0x4], // 0x1E0
        pub m_nInputCP2: [u8; 0x4], // 0x1E4
        pub m_nFieldOutput: [u8; 0x4], // 0x1E8
        pub m_flInputMin: [u8; 0x4], // 0x1EC
        pub m_flInputMax: [u8; 0x4], // 0x1F0
        pub m_flOutputMin: [u8; 0x4], // 0x1F4
        pub m_flOutputMax: [u8; 0x4], // 0x1F8
        pub m_bUseParticleVelocity: [u8; 0x4], // 0x1FC
        pub m_nSetMethod: [u8; 0x4], // 0x200
        pub m_bActiveRange: [u8; 0x1], // 0x204
        pub m_bUseParticleNormal: [u8; 0x3], // 0x205
    }
    #[repr(C)]
    pub struct C_OP_RemapCPtoCP {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nInputControlPoint: [u8; 0x4], // 0x1E8
        pub m_nOutputControlPoint: [u8; 0x4], // 0x1EC
        pub m_nInputField: [u8; 0x4], // 0x1F0
        pub m_nOutputField: [u8; 0x4], // 0x1F4
        pub m_flInputMin: [u8; 0x4], // 0x1F8
        pub m_flInputMax: [u8; 0x4], // 0x1FC
        pub m_flOutputMin: [u8; 0x4], // 0x200
        pub m_flOutputMax: [u8; 0x4], // 0x204
        pub m_bDerivative: [u8; 0x4], // 0x208
        pub m_flInterpRate: [u8; 0x4], // 0x20C
    }
    #[repr(C)]
    pub struct C_OP_SetControlPointRotation {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_vecRotAxis: [u8; 0x6D8], // 0x1E8
        pub m_flRotRate: [u8; 0x178], // 0x8C0
        pub m_nCP: [u8; 0x4], // 0xA38
        pub m_nLocalCP: [u8; 0x4], // 0xA3C
    }
    #[repr(C)]
    pub struct C_OP_CurlNoiseForce {
        pub pad_0: [u8; 0x1F0], // 0x0
        pub m_nNoiseType: [u8; 0x8], // 0x1F0
        pub m_vecNoiseFreq: [u8; 0x6D8], // 0x1F8
        pub m_vecNoiseScale: [u8; 0x6D8], // 0x8D0
        pub m_vecOffset: [u8; 0x6D8], // 0xFA8
        pub m_vecOffsetRate: [u8; 0x6D8], // 0x1680
        pub m_flWorleySeed: [u8; 0x178], // 0x1D58
        pub m_flWorleyJitter: [u8; 0x178], // 0x1ED0
    }
    #[repr(C)]
    pub struct C_INIT_Orient2DRelToCP {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nCP: [u8; 0x4], // 0x1E8
        pub m_nFieldOutput: [u8; 0x4], // 0x1EC
        pub m_flRotOffset: [u8; 0x8], // 0x1F0
    }
    #[repr(C)]
    pub struct C_OP_SetSimulationRate {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_flSimulationScale: [u8; 0x178], // 0x1E8
    }
    #[repr(C)]
    pub struct C_OP_FadeIn {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flFadeInTimeMin: [u8; 0x4], // 0x1E0
        pub m_flFadeInTimeMax: [u8; 0x4], // 0x1E4
        pub m_flFadeInTimeExp: [u8; 0x4], // 0x1E8
        pub m_bProportional: [u8; 0x4], // 0x1EC
    }
    #[repr(C)]
    pub struct C_OP_RenderScreenShake {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_flDurationScale: [u8; 0x4], // 0x230
        pub m_flRadiusScale: [u8; 0x4], // 0x234
        pub m_flFrequencyScale: [u8; 0x4], // 0x238
        pub m_flAmplitudeScale: [u8; 0x4], // 0x23C
        pub m_nRadiusField: [u8; 0x4], // 0x240
        pub m_nDurationField: [u8; 0x4], // 0x244
        pub m_nFrequencyField: [u8; 0x4], // 0x248
        pub m_nAmplitudeField: [u8; 0x4], // 0x24C
        pub m_nFilterCP: [u8; 0x8], // 0x250
    }
    #[repr(C)]
    pub struct C_OP_RemapBoundingVolumetoCP {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nOutControlPointNumber: [u8; 0x4], // 0x1E8
        pub m_flInputMin: [u8; 0x4], // 0x1EC
        pub m_flInputMax: [u8; 0x4], // 0x1F0
        pub m_flOutputMin: [u8; 0x4], // 0x1F4
        pub m_flOutputMax: [u8; 0x8], // 0x1F8
    }
    #[repr(C)]
    pub struct C_OP_HSVShiftToCP {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nColorCP: [u8; 0x4], // 0x1E8
        pub m_nColorGemEnableCP: [u8; 0x4], // 0x1EC
        pub m_nOutputCP: [u8; 0x4], // 0x1F0
        pub m_DefaultHSVColor: [u8; 0x14], // 0x1F4
    }
    #[repr(C)]
    pub struct C_OP_RemapVectorToRotations {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_vecInput: [u8; 0x6D8], // 0x1E0
        pub m_vecRotation: [u8; 0x6D8], // 0x8B8
    }
    #[repr(C)]
    pub struct C_INIT_GlobalScale {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_flScale: [u8; 0x4], // 0x1E8
        pub m_nScaleControlPointNumber: [u8; 0x4], // 0x1EC
        pub m_nControlPointNumber: [u8; 0x4], // 0x1F0
        pub m_bScaleRadius: [u8; 0x1], // 0x1F4
        pub m_bScalePosition: [u8; 0x1], // 0x1F5
        pub m_bScaleVelocity: [u8; 0x2], // 0x1F6
    }
    #[repr(C)]
    pub struct C_INIT_RadiusFromCPObject {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nControlPoint: [u8; 0x8], // 0x1E8
    }
    #[repr(C)]
    pub struct C_INIT_InitialVelocityFromHitbox {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_flVelocityMin: [u8; 0x4], // 0x1E8
        pub m_flVelocityMax: [u8; 0x4], // 0x1EC
        pub m_nControlPointNumber: [u8; 0x4], // 0x1F0
        pub m_HitboxSetName: [u8; 0x80], // 0x1F4
        pub m_bUseBones: [u8; 0x4], // 0x274
    }
    #[repr(C)]
    pub struct C_OP_LerpVector {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E0
        pub m_vecOutput: [u8; 0xC], // 0x1E4
        pub m_flStartTime: [u8; 0x4], // 0x1F0
        pub m_flEndTime: [u8; 0x4], // 0x1F4
        pub m_nSetMethod: [u8; 0x8], // 0x1F8
    }
    #[repr(C)]
    pub struct C_OP_SetControlPointFieldToWater {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nSourceCP: [u8; 0x4], // 0x1E8
        pub m_nDestCP: [u8; 0x4], // 0x1EC
        pub m_nCPField: [u8; 0x8], // 0x1F0
    }
    #[repr(C)]
    pub struct TextureGroup_t {
        pub m_bEnabled: [u8; 0x1], // 0x0
        pub m_bReplaceTextureWithGradient: [u8; 0x7], // 0x1
        pub m_hTexture: [u8; 0x8], // 0x8
        pub m_Gradient: [u8; 0x18], // 0x10
        pub m_nTextureType: [u8; 0x4], // 0x28
        pub m_nTextureChannels: [u8; 0x4], // 0x2C
        pub m_nTextureBlendMode: [u8; 0x8], // 0x30
        pub m_flTextureBlend: [u8; 0x178], // 0x38
        pub m_TextureControls: [u8; 0xA68], // 0x1B0
    }
    #[repr(C)]
    pub struct C_OP_TimeVaryingForce {
        pub pad_0: [u8; 0x1F0], // 0x0
        pub m_flStartLerpTime: [u8; 0x4], // 0x1F0
        pub m_StartingForce: [u8; 0xC], // 0x1F4
        pub m_flEndLerpTime: [u8; 0x4], // 0x200
        pub m_EndingForce: [u8; 0xC], // 0x204
    }
    #[repr(C)]
    pub struct C_OP_SetCPOrientationToGroundNormal {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flInterpRate: [u8; 0x4], // 0x1E0
        pub m_flMaxTraceLength: [u8; 0x4], // 0x1E4
        pub m_flTolerance: [u8; 0x4], // 0x1E8
        pub m_flTraceOffset: [u8; 0x4], // 0x1EC
        pub m_CollisionGroupName: [u8; 0x80], // 0x1F0
        pub m_nTraceSet: [u8; 0x4], // 0x270
        pub m_nInputCP: [u8; 0x4], // 0x274
        pub m_nOutputCP: [u8; 0x10], // 0x278
        pub m_bIncludeWater: [u8; 0x8], // 0x288
    }
    #[repr(C)]
    pub struct C_OP_SnapshotSkinToBones {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_bTransformNormals: [u8; 0x1], // 0x1E0
        pub m_bTransformRadii: [u8; 0x3], // 0x1E1
        pub m_nControlPointNumber: [u8; 0x4], // 0x1E4
        pub m_flLifeTimeFadeStart: [u8; 0x4], // 0x1E8
        pub m_flLifeTimeFadeEnd: [u8; 0x4], // 0x1EC
        pub m_flJumpThreshold: [u8; 0x4], // 0x1F0
        pub m_flPrevPosScale: [u8; 0x4], // 0x1F4
    }
    #[repr(C)]
    pub struct C_INIT_CreateWithinSphereTransform {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_fRadiusMin: [u8; 0x178], // 0x1E8
        pub m_fRadiusMax: [u8; 0x178], // 0x360
        pub m_vecDistanceBias: [u8; 0x6D8], // 0x4D8
        pub m_vecDistanceBiasAbs: [u8; 0x10], // 0xBB0
        pub m_TransformInput: [u8; 0x68], // 0xBC0
        pub m_fSpeedMin: [u8; 0x178], // 0xC28
        pub m_fSpeedMax: [u8; 0x178], // 0xDA0
        pub m_fSpeedRandExp: [u8; 0x4], // 0xF18
        pub m_bLocalCoords: [u8; 0x4], // 0xF1C
        pub m_LocalCoordinateSystemSpeedMin: [u8; 0x6D8], // 0xF20
        pub m_LocalCoordinateSystemSpeedMax: [u8; 0x6D8], // 0x15F8
        pub m_nFieldOutput: [u8; 0x4], // 0x1CD0
        pub m_nFieldVelocity: [u8; 0x4], // 0x1CD4
    }
    #[repr(C)]
    pub struct C_OP_RadiusDecay {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flMinRadius: [u8; 0x8], // 0x1E0
    }
    #[repr(C)]
    pub struct C_INIT_RemapNamedModelBodyPartToScalar {
        pub pad_0: [u8; 0x230], // 0x0
    }
    #[repr(C)]
    pub struct C_INIT_RemapScalarToVector {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nFieldInput: [u8; 0x4], // 0x1E8
        pub m_nFieldOutput: [u8; 0x4], // 0x1EC
        pub m_flInputMin: [u8; 0x4], // 0x1F0
        pub m_flInputMax: [u8; 0x4], // 0x1F4
        pub m_vecOutputMin: [u8; 0xC], // 0x1F8
        pub m_vecOutputMax: [u8; 0xC], // 0x204
        pub m_flStartTime: [u8; 0x4], // 0x210
        pub m_flEndTime: [u8; 0x4], // 0x214
        pub m_nSetMethod: [u8; 0x4], // 0x218
        pub m_nControlPointNumber: [u8; 0x4], // 0x21C
        pub m_bLocalCoords: [u8; 0x4], // 0x220
        pub m_flRemapBias: [u8; 0xC], // 0x224
    }
    #[repr(C)]
    pub struct C_INIT_InitialSequenceFromModel {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nControlPointNumber: [u8; 0x4], // 0x1E8
        pub m_nFieldOutput: [u8; 0x4], // 0x1EC
        pub m_nFieldOutputAnim: [u8; 0x4], // 0x1F0
        pub m_flInputMin: [u8; 0x4], // 0x1F4
        pub m_flInputMax: [u8; 0x4], // 0x1F8
        pub m_flOutputMin: [u8; 0x4], // 0x1FC
        pub m_flOutputMax: [u8; 0x4], // 0x200
        pub m_nSetMethod: [u8; 0x4], // 0x204
    }
    #[repr(C)]
    pub struct C_OP_NoiseEmitter {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_flEmissionDuration: [u8; 0x4], // 0x1E8
        pub m_flStartTime: [u8; 0x4], // 0x1EC
        pub m_flEmissionScale: [u8; 0x4], // 0x1F0
        pub m_nScaleControlPoint: [u8; 0x4], // 0x1F4
        pub m_nScaleControlPointField: [u8; 0x4], // 0x1F8
        pub m_nWorldNoisePoint: [u8; 0x4], // 0x1FC
        pub m_bAbsVal: [u8; 0x1], // 0x200
        pub m_bAbsValInv: [u8; 0x3], // 0x201
        pub m_flOffset: [u8; 0x4], // 0x204
        pub m_flOutputMin: [u8; 0x4], // 0x208
        pub m_flOutputMax: [u8; 0x4], // 0x20C
        pub m_flNoiseScale: [u8; 0x4], // 0x210
        pub m_flWorldNoiseScale: [u8; 0x4], // 0x214
        pub m_vecOffsetLoc: [u8; 0xC], // 0x218
        pub m_flWorldTimeScale: [u8; 0x4], // 0x224
    }
    #[repr(C)]
    pub struct CParticleFunctionInitializer {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nAssociatedEmitterIndex: [u8; 0x8], // 0x1E0
    }
    #[repr(C)]
    pub struct C_OP_SelectivelyEnableChildren {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nChildGroupID: [u8; 0x178], // 0x1E8
        pub m_nFirstChild: [u8; 0x178], // 0x360
        pub m_nNumChildrenToEnable: [u8; 0x178], // 0x4D8
        pub m_bPlayEndcapOnStop: [u8; 0x1], // 0x650
        pub m_bDestroyImmediately: [u8; 0x7], // 0x651
    }
    #[repr(C)]
    pub struct ModelReference_t {
        pub m_model: [u8; 0x8], // 0x0
        pub m_flRelativeProbabilityOfSpawn: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct C_OP_PlanarConstraint {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_PointOnPlane: [u8; 0xC], // 0x1E0
        pub m_PlaneNormal: [u8; 0xC], // 0x1EC
        pub m_nControlPointNumber: [u8; 0x4], // 0x1F8
        pub m_bGlobalOrigin: [u8; 0x1], // 0x1FC
        pub m_bGlobalNormal: [u8; 0x3], // 0x1FD
        pub m_flRadiusScale: [u8; 0x178], // 0x200
        pub m_flMaximumDistanceToCP: [u8; 0x178], // 0x378
        pub m_bUseOldCode: [u8; 0x8], // 0x4F0
    }
    #[repr(C)]
    pub struct C_INIT_CreateFromCPs {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nIncrement: [u8; 0x4], // 0x1E8
        pub m_nMinCP: [u8; 0x4], // 0x1EC
        pub m_nMaxCP: [u8; 0x8], // 0x1F0
        pub m_nDynamicCPCount: [u8; 0x178], // 0x1F8
    }
    #[repr(C)]
    pub struct C_OP_LockPoints {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nMinCol: [u8; 0x4], // 0x1E0
        pub m_nMaxCol: [u8; 0x4], // 0x1E4
        pub m_nMinRow: [u8; 0x4], // 0x1E8
        pub m_nMaxRow: [u8; 0x4], // 0x1EC
        pub m_nControlPoint: [u8; 0x4], // 0x1F0
        pub m_flBlendValue: [u8; 0x4], // 0x1F4
    }
    #[repr(C)]
    pub struct C_INIT_CreateSpiralSphere {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_TransformInput: [u8; 0x68], // 0x1E8
        pub m_flDensity: [u8; 0x178], // 0x250
        pub m_flInitialRadius: [u8; 0x178], // 0x3C8
        pub m_flInitialSpeedMin: [u8; 0x178], // 0x540
        pub m_flInitialSpeedMax: [u8; 0x178], // 0x6B8
        pub m_bUseParticleCount: [u8; 0x8], // 0x830
    }
    #[repr(C)]
    pub struct C_OP_CPVelocityForce {
        pub pad_0: [u8; 0x1F0], // 0x0
        pub m_nControlPointNumber: [u8; 0x8], // 0x1F0
        pub m_flScale: [u8; 0x178], // 0x1F8
    }
    #[repr(C)]
    pub struct C_OP_RemapNamedModelElementEndCap {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_hModel: [u8; 0x8], // 0x1E0
        pub m_inNames: [u8; 0x18], // 0x1E8
        pub m_outNames: [u8; 0x18], // 0x200
        pub m_fallbackNames: [u8; 0x18], // 0x218
        pub m_bModelFromRenderer: [u8; 0x4], // 0x230
        pub m_nFieldInput: [u8; 0x4], // 0x234
        pub m_nFieldOutput: [u8; 0x8], // 0x238
    }
    #[repr(C)]
    pub struct C_INIT_ScaleVelocity {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_vecScale: [u8; 0x6D8], // 0x1E8
    }
    #[repr(C)]
    pub struct C_OP_MoveToHitbox {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_modelInput: [u8; 0x60], // 0x1E0
        pub m_transformInput: [u8; 0x6C], // 0x240
        pub m_flLifeTimeLerpStart: [u8; 0x4], // 0x2AC
        pub m_flLifeTimeLerpEnd: [u8; 0x4], // 0x2B0
        pub m_flPrevPosScale: [u8; 0x4], // 0x2B4
        pub m_HitboxSetName: [u8; 0x80], // 0x2B8
        pub m_bUseBones: [u8; 0x4], // 0x338
        pub m_nLerpType: [u8; 0x4], // 0x33C
        pub m_flInterpolation: [u8; 0x178], // 0x340
    }
    #[repr(C)]
    pub struct C_OP_PinRopeSegmentParticleToParent {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nParticleSelection: [u8; 0x8], // 0x1E0
        pub m_nParticleNumber: [u8; 0x178], // 0x1E8
        pub m_flInterpolation: [u8; 0x178], // 0x360
    }
    #[repr(C)]
    pub struct C_INIT_PointList {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nFieldOutput: [u8; 0x8], // 0x1E8
        pub m_pointList: [u8; 0x18], // 0x1F0
        pub m_bPlaceAlongPath: [u8; 0x1], // 0x208
        pub m_bClosedLoop: [u8; 0x3], // 0x209
        pub m_nNumPointsAlongPath: [u8; 0x4], // 0x20C
    }
    #[repr(C)]
    pub struct C_OP_LerpToOtherAttribute {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flInterpolation: [u8; 0x178], // 0x1E0
        pub m_nFieldInputFrom: [u8; 0x4], // 0x358
        pub m_nFieldInput: [u8; 0x4], // 0x35C
        pub m_nFieldOutput: [u8; 0x30], // 0x360
    }
    #[repr(C)]
    pub struct C_INIT_RandomColor {
        pub pad_0: [u8; 0x204], // 0x0
        pub m_ColorMin: [u8; 0x4], // 0x204
        pub m_ColorMax: [u8; 0x4], // 0x208
        pub m_TintMin: [u8; 0x4], // 0x20C
        pub m_TintMax: [u8; 0x4], // 0x210
        pub m_flTintPerc: [u8; 0x4], // 0x214
        pub m_flUpdateThreshold: [u8; 0x4], // 0x218
        pub m_nTintCP: [u8; 0x4], // 0x21C
        pub m_nFieldOutput: [u8; 0x4], // 0x220
        pub m_nTintBlendMode: [u8; 0x4], // 0x224
        pub m_flLightAmplification: [u8; 0x8], // 0x228
    }
    #[repr(C)]
    pub struct C_OP_SetGravityToCP {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nCPInput: [u8; 0x4], // 0x1E8
        pub m_nCPOutput: [u8; 0x4], // 0x1EC
        pub m_flScale: [u8; 0x178], // 0x1F0
        pub m_bSetPosition: [u8; 0x1], // 0x368
        pub m_bSetOrientation: [u8; 0x1], // 0x369
        pub m_bSetZDown: [u8; 0x6], // 0x36A
    }
    #[repr(C)]
    pub struct C_INIT_RemapParticleCountToScalar {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E8
        pub m_nInputMin: [u8; 0x4], // 0x1EC
        pub m_nInputMax: [u8; 0x4], // 0x1F0
        pub m_nScaleControlPoint: [u8; 0x4], // 0x1F4
        pub m_nScaleControlPointField: [u8; 0x4], // 0x1F8
        pub m_flOutputMin: [u8; 0x4], // 0x1FC
        pub m_flOutputMax: [u8; 0x4], // 0x200
        pub m_nSetMethod: [u8; 0x4], // 0x204
        pub m_bActiveRange: [u8; 0x1], // 0x208
        pub m_bInvert: [u8; 0x1], // 0x209
        pub m_bWrap: [u8; 0x2], // 0x20A
        pub m_flRemapBias: [u8; 0xC], // 0x20C
    }
    #[repr(C)]
    pub struct C_INIT_InheritFromParentParticles {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_flScale: [u8; 0x4], // 0x1E8
        pub m_nFieldOutput: [u8; 0x4], // 0x1EC
        pub m_nIncrement: [u8; 0x4], // 0x1F0
        pub m_bRandomDistribution: [u8; 0x4], // 0x1F4
        pub m_nRandomSeed: [u8; 0x8], // 0x1F8
    }
    #[repr(C)]
    pub struct C_OP_RampScalarLinearSimple {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_Rate: [u8; 0x4], // 0x1E0
        pub m_flStartTime: [u8; 0x4], // 0x1E4
        pub m_flEndTime: [u8; 0x28], // 0x1E8
        pub m_nField: [u8; 0x10], // 0x210
    }
    #[repr(C)]
    pub struct C_INIT_ChaoticAttractor {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_flAParm: [u8; 0x4], // 0x1E8
        pub m_flBParm: [u8; 0x4], // 0x1EC
        pub m_flCParm: [u8; 0x4], // 0x1F0
        pub m_flDParm: [u8; 0x4], // 0x1F4
        pub m_flScale: [u8; 0x4], // 0x1F8
        pub m_flSpeedMin: [u8; 0x4], // 0x1FC
        pub m_flSpeedMax: [u8; 0x4], // 0x200
        pub m_nBaseCP: [u8; 0x4], // 0x204
        pub m_bUniformSpeed: [u8; 0x8], // 0x208
    }
    #[repr(C)]
    pub struct C_OP_MovementRigidAttachToCP {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nControlPointNumber: [u8; 0x4], // 0x1E0
        pub m_nScaleControlPoint: [u8; 0x4], // 0x1E4
        pub m_nScaleCPField: [u8; 0x4], // 0x1E8
        pub m_nFieldInput: [u8; 0x4], // 0x1EC
        pub m_nFieldOutput: [u8; 0x4], // 0x1F0
        pub m_bOffsetLocal: [u8; 0x4], // 0x1F4
    }
    #[repr(C)]
    pub struct C_OP_RenderFlattenGrass {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_flFlattenStrength: [u8; 0x4], // 0x230
        pub m_nStrengthFieldOverride: [u8; 0x4], // 0x234
        pub m_flRadiusScale: [u8; 0x8], // 0x238
    }
    #[repr(C)]
    pub struct C_OP_RenderLightBeam {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_nMaxAllowed: [u8; 0x8], // 0x230
        pub m_vColorBlend: [u8; 0x6D8], // 0x238
        pub m_nColorBlendType: [u8; 0x8], // 0x910
        pub m_strLightStyle: [u8; 0x8], // 0x918
        pub m_flLightStyleTime: [u8; 0x178], // 0x920
        pub m_flBrightnessLumensPerMeter: [u8; 0x178], // 0xA98
        pub m_flNumberOfLightsToCreate: [u8; 0x178], // 0xC10
        pub m_bCastShadows: [u8; 0x1], // 0xD88
        pub m_bDynamicBounce: [u8; 0x7], // 0xD89
        pub m_flBounceScale: [u8; 0x178], // 0xD90
        pub m_flSkirt: [u8; 0x178], // 0xF08
        pub m_flRange: [u8; 0x178], // 0x1080
        pub m_flThickness: [u8; 0x178], // 0x11F8
        pub m_flInnerConeAngle: [u8; 0x178], // 0x1370
        pub m_flOuterConeAngle: [u8; 0x178], // 0x14E8
        pub m_vecConeRotationOffset: [u8; 0x6D8], // 0x1660
        pub m_nFogLightingMode: [u8; 0x8], // 0x1D38
        pub m_flFogContribution: [u8; 0x178], // 0x1D40
        pub m_flRenderFilter: [u8; 0x178], // 0x1EB8
        pub m_bDebugOrientation: [u8; 0x8], // 0x2030
    }
    #[repr(C)]
    pub struct C_INIT_SkyVisCull {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_vecTestDir: [u8; 0x6D8], // 0x1E8
        pub m_nTraceSet: [u8; 0x4], // 0x8C0
        pub m_bCullOnSky: [u8; 0x4], // 0x8C4
    }
    #[repr(C)]
    pub struct C_OP_EnableChildrenFromParentParticleCount {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nChildGroupID: [u8; 0x4], // 0x1E8
        pub m_nFirstChild: [u8; 0x4], // 0x1EC
        pub m_nNumChildrenToEnable: [u8; 0x178], // 0x1F0
        pub m_bDisableChildren: [u8; 0x1], // 0x368
        pub m_bPlayEndcapOnStop: [u8; 0x1], // 0x369
        pub m_bDestroyImmediately: [u8; 0x6], // 0x36A
    }
    #[repr(C)]
    pub struct C_INIT_DistanceToCPInit {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nFieldOutput: [u8; 0x8], // 0x1E8
        pub m_flInputMin: [u8; 0x178], // 0x1F0
        pub m_flInputMax: [u8; 0x178], // 0x368
        pub m_flOutputMin: [u8; 0x178], // 0x4E0
        pub m_flOutputMax: [u8; 0x178], // 0x658
        pub m_nStartCP: [u8; 0x4], // 0x7D0
        pub m_bLOS: [u8; 0x1], // 0x7D4
        pub m_CollisionGroupName: [u8; 0x83], // 0x7D5
        pub m_nTraceSet: [u8; 0x8], // 0x858
        pub m_flMaxTraceLength: [u8; 0x178], // 0x860
        pub m_flLOSScale: [u8; 0x4], // 0x9D8
        pub m_nSetMethod: [u8; 0x4], // 0x9DC
        pub m_bActiveRange: [u8; 0x4], // 0x9E0
        pub m_vecDistanceScale: [u8; 0xC], // 0x9E4
        pub m_flRemapBias: [u8; 0x8], // 0x9F0
    }
    #[repr(C)]
    pub struct C_OP_EndCapDecay {
        pub pad_0: [u8; 0x1E0], // 0x0
    }
    #[repr(C)]
    pub struct C_OP_ForceBasedOnDistanceToPlane {
        pub pad_0: [u8; 0x1F0], // 0x0
        pub m_flMinDist: [u8; 0x4], // 0x1F0
        pub m_vecForceAtMinDist: [u8; 0xC], // 0x1F4
        pub m_flMaxDist: [u8; 0x4], // 0x200
        pub m_vecForceAtMaxDist: [u8; 0xC], // 0x204
        pub m_vecPlaneNormal: [u8; 0xC], // 0x210
        pub m_nControlPointNumber: [u8; 0x4], // 0x21C
        pub m_flExponent: [u8; 0x8], // 0x220
    }
    #[repr(C)]
    pub struct C_OP_RemapDensityToVector {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flRadiusScale: [u8; 0x4], // 0x1E0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E4
        pub m_flDensityMin: [u8; 0x4], // 0x1E8
        pub m_flDensityMax: [u8; 0x4], // 0x1EC
        pub m_vecOutputMin: [u8; 0xC], // 0x1F0
        pub m_vecOutputMax: [u8; 0xC], // 0x1FC
        pub m_bUseParentDensity: [u8; 0x4], // 0x208
        pub m_nVoxelGridResolution: [u8; 0x4], // 0x20C
    }
    #[repr(C)]
    pub struct ParticleControlPointConfiguration_t {
        pub m_name: [u8; 0x8], // 0x0
        pub m_drivers: [u8; 0x18], // 0x8
        pub m_previewState: [u8; 0x70], // 0x20
    }
    #[repr(C)]
    pub struct C_INIT_SetRigidAttachment {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nControlPointNumber: [u8; 0x4], // 0x1E8
        pub m_nFieldInput: [u8; 0x4], // 0x1EC
        pub m_nFieldOutput: [u8; 0x4], // 0x1F0
        pub m_bLocalSpace: [u8; 0x4], // 0x1F4
    }
    #[repr(C)]
    pub struct MaterialVariable_t {
        pub m_strVariable: [u8; 0x8], // 0x0
        pub m_nVariableField: [u8; 0x4], // 0x8
        pub m_flScale: [u8; 0x4], // 0xC
    }
    #[repr(C)]
    pub struct CParticleFunctionConstraint {
        pub pad_0: [u8; 0x1E0], // 0x0
    }
    #[repr(C)]
    pub struct C_OP_RemapSpeed {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E0
        pub m_flInputMin: [u8; 0x4], // 0x1E4
        pub m_flInputMax: [u8; 0x4], // 0x1E8
        pub m_flOutputMin: [u8; 0x4], // 0x1EC
        pub m_flOutputMax: [u8; 0x4], // 0x1F0
        pub m_nSetMethod: [u8; 0x4], // 0x1F4
        pub m_bIgnoreDelta: [u8; 0x8], // 0x1F8
    }
    #[repr(C)]
    pub struct C_OP_RenderModels {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_bOnlyRenderInEffectsBloomPass: [u8; 0x1], // 0x230
        pub m_bOnlyRenderInEffectsWaterPass: [u8; 0x1], // 0x231
        pub m_bUseMixedResolutionRendering: [u8; 0x1], // 0x232
        pub m_bOnlyRenderInEffecsGameOverlay: [u8; 0x5], // 0x233
        pub m_ModelList: [u8; 0x18], // 0x238
        pub m_nBodyGroupField: [u8; 0x4], // 0x250
        pub m_nSubModelField: [u8; 0x4], // 0x254
        pub m_bIgnoreNormal: [u8; 0x1], // 0x258
        pub m_bOrientZ: [u8; 0x1], // 0x259
        pub m_bCenterOffset: [u8; 0x6], // 0x25A
        pub m_vecLocalOffset: [u8; 0x6D8], // 0x260
        pub m_vecLocalRotation: [u8; 0x6D8], // 0x938
        pub m_bIgnoreRadius: [u8; 0x4], // 0x1010
        pub m_nModelScaleCP: [u8; 0x4], // 0x1014
        pub m_vecComponentScale: [u8; 0x6D8], // 0x1018
        pub m_bLocalScale: [u8; 0x4], // 0x16F0
        pub m_nSizeCullBloat: [u8; 0x4], // 0x16F4
        pub m_bAnimated: [u8; 0x8], // 0x16F8
        pub m_flAnimationRate: [u8; 0x178], // 0x1700
        pub m_bScaleAnimationRate: [u8; 0x1], // 0x1878
        pub m_bForceLoopingAnimation: [u8; 0x1], // 0x1879
        pub m_bResetAnimOnStop: [u8; 0x1], // 0x187A
        pub m_bManualAnimFrame: [u8; 0x1], // 0x187B
        pub m_nAnimationScaleField: [u8; 0x4], // 0x187C
        pub m_nAnimationField: [u8; 0x4], // 0x1880
        pub m_nManualFrameField: [u8; 0x4], // 0x1884
        pub m_ActivityName: [u8; 0x100], // 0x1888
        pub m_SequenceName: [u8; 0x100], // 0x1988
        pub m_bEnableClothSimulation: [u8; 0x1], // 0x1A88
        pub m_bDisableClothGroundCollision: [u8; 0x1], // 0x1A89
        pub m_ClothEffectName: [u8; 0x46], // 0x1A8A
        pub m_hOverrideMaterial: [u8; 0x8], // 0x1AD0
        pub m_bOverrideTranslucentMaterials: [u8; 0x8], // 0x1AD8
        pub m_nSkin: [u8; 0x178], // 0x1AE0
        pub m_MaterialVars: [u8; 0x18], // 0x1C58
        pub m_flRenderFilter: [u8; 0x178], // 0x1C70
        pub m_flManualModelSelection: [u8; 0x178], // 0x1DE8
        pub m_modelInput: [u8; 0x60], // 0x1F60
        pub m_nLOD: [u8; 0x4], // 0x1FC0
        pub m_EconSlotName: [u8; 0x100], // 0x1FC4
        pub m_bOriginalModel: [u8; 0x1], // 0x20C4
        pub m_bSuppressTint: [u8; 0x3], // 0x20C5
        pub m_nSubModelFieldType: [u8; 0x4], // 0x20C8
        pub m_bDisableShadows: [u8; 0x1], // 0x20CC
        pub m_bDisableDepthPrepass: [u8; 0x1], // 0x20CD
        pub m_bAcceptsDecals: [u8; 0x1], // 0x20CE
        pub m_bForceDrawInterlevedWithSiblings: [u8; 0x1], // 0x20CF
        pub m_bDoNotDrawInParticlePass: [u8; 0x1], // 0x20D0
        pub m_bAllowApproximateTransforms: [u8; 0x1], // 0x20D1
        pub m_szRenderAttribute: [u8; 0x106], // 0x20D2
        pub m_flRadiusScale: [u8; 0x178], // 0x21D8
        pub m_flAlphaScale: [u8; 0x178], // 0x2350
        pub m_flRollScale: [u8; 0x178], // 0x24C8
        pub m_nAlpha2Field: [u8; 0x8], // 0x2640
        pub m_vecColorScale: [u8; 0x6D8], // 0x2648
        pub m_nColorBlendType: [u8; 0x8], // 0x2D20
        pub m_strLightStyle: [u8; 0x8], // 0x2D28
        pub m_flLightStyleTime: [u8; 0x1B8], // 0x2D30
    }
    #[repr(C)]
    pub struct C_OP_RenderClientPhysicsImpulse {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_flRadius: [u8; 0x178], // 0x230
        pub m_flMagnitude: [u8; 0x178], // 0x3A8
        pub m_nSimIdFilter: [u8; 0x8], // 0x520
    }
    #[repr(C)]
    pub struct CParticleFunctionEmitter {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nEmitterIndex: [u8; 0x8], // 0x1E0
    }
    #[repr(C)]
    pub struct C_INIT_RemapNamedModelMeshGroupToScalar {
        pub pad_0: [u8; 0x230], // 0x0
    }
    #[repr(C)]
    pub struct C_OP_SetControlPointOrientationToCPVelocity {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nCPInput: [u8; 0x4], // 0x1E8
        pub m_nCPOutput: [u8; 0x4], // 0x1EC
    }
    #[repr(C)]
    pub struct C_OP_RopeSpringConstraint {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flRestLength: [u8; 0x178], // 0x1E0
        pub m_flMinDistance: [u8; 0x178], // 0x358
        pub m_flMaxDistance: [u8; 0x178], // 0x4D0
        pub m_flAdjustmentScale: [u8; 0x8], // 0x648
        pub m_flInitialRestingLength: [u8; 0x178], // 0x650
    }
    #[repr(C)]
    pub struct C_INIT_PositionWarpScalar {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_vecWarpMin: [u8; 0xC], // 0x1E8
        pub m_vecWarpMax: [u8; 0xC], // 0x1F4
        pub m_InputValue: [u8; 0x178], // 0x200
        pub m_flPrevPosScale: [u8; 0x4], // 0x378
        pub m_nScaleControlPointNumber: [u8; 0x4], // 0x37C
        pub m_nControlPointNumber: [u8; 0x8], // 0x380
    }
    #[repr(C)]
    pub struct C_OP_ForceControlPointStub {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_ControlPoint: [u8; 0x8], // 0x1E8
    }
    #[repr(C)]
    pub struct C_OP_VectorNoise {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E0
        pub m_vecOutputMin: [u8; 0xC], // 0x1E4
        pub m_vecOutputMax: [u8; 0xC], // 0x1F0
        pub m_fl4NoiseScale: [u8; 0x4], // 0x1FC
        pub m_bAdditive: [u8; 0x1], // 0x200
        pub m_bOffset: [u8; 0x3], // 0x201
        pub m_flNoiseAnimationTimeScale: [u8; 0x4], // 0x204
    }
    #[repr(C)]
    pub struct C_OP_RemapParticleCountToScalar {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldOutput: [u8; 0x8], // 0x1E0
        pub m_nInputMin: [u8; 0x178], // 0x1E8
        pub m_nInputMax: [u8; 0x178], // 0x360
        pub m_flOutputMin: [u8; 0x178], // 0x4D8
        pub m_flOutputMax: [u8; 0x178], // 0x650
        pub m_bActiveRange: [u8; 0x4], // 0x7C8
        pub m_nSetMethod: [u8; 0x4], // 0x7CC
    }
    #[repr(C)]
    pub struct C_INIT_QuantizeFloat {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_InputValue: [u8; 0x178], // 0x1E8
        pub m_nOutputField: [u8; 0x8], // 0x360
    }
    #[repr(C)]
    pub struct C_OP_RemapModelVolumetoCP {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nBBoxType: [u8; 0x4], // 0x1E8
        pub m_nInControlPointNumber: [u8; 0x4], // 0x1EC
        pub m_nOutControlPointNumber: [u8; 0x4], // 0x1F0
        pub m_nOutControlPointMaxNumber: [u8; 0x4], // 0x1F4
        pub m_nField: [u8; 0x4], // 0x1F8
        pub m_flInputMin: [u8; 0x4], // 0x1FC
        pub m_flInputMax: [u8; 0x4], // 0x200
        pub m_flOutputMin: [u8; 0x4], // 0x204
        pub m_flOutputMax: [u8; 0x4], // 0x208
        pub m_bBBoxOnly: [u8; 0x1], // 0x20C
        pub m_bCubeRoot: [u8; 0x3], // 0x20D
    }
    #[repr(C)]
    pub struct C_OP_SetToCP {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nControlPointNumber: [u8; 0x4], // 0x1E0
        pub m_vecOffset: [u8; 0xC], // 0x1E4
        pub m_bOffsetLocal: [u8; 0x8], // 0x1F0
    }
    #[repr(C)]
    pub struct ParticleControlPointDriver_t {
        pub m_iControlPoint: [u8; 0x10], // 0x0
        pub m_iAttachType: [u8; 0x8], // 0x10
        pub m_attachmentName: [u8; 0x8], // 0x18
        pub m_vecOffset: [u8; 0xC], // 0x20
        pub m_angOffset: [u8; 0xC], // 0x2C
        pub m_entityName: [u8; 0x8], // 0x38
    }
    #[repr(C)]
    pub struct C_OP_ParentVortices {
        pub pad_0: [u8; 0x1F0], // 0x0
        pub m_flForceScale: [u8; 0x4], // 0x1F0
        pub m_vecTwistAxis: [u8; 0xC], // 0x1F4
        pub m_bFlipBasedOnYaw: [u8; 0x8], // 0x200
    }
    #[repr(C)]
    pub struct C_OP_SetControlPointToCPVelocity {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nCPInput: [u8; 0x4], // 0x1E8
        pub m_nCPOutputVel: [u8; 0x4], // 0x1EC
        pub m_bNormalize: [u8; 0x4], // 0x1F0
        pub m_nCPOutputMag: [u8; 0x4], // 0x1F4
        pub m_nCPField: [u8; 0x8], // 0x1F8
        pub m_vecComparisonVelocity: [u8; 0x6D8], // 0x200
    }
    #[repr(C)]
    pub struct C_OP_ClientPhysics {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_strPhysicsType: [u8; 0x8], // 0x230
        pub m_bStartAsleep: [u8; 0x8], // 0x238
        pub m_flPlayerWakeRadius: [u8; 0x178], // 0x240
        pub m_flVehicleWakeRadius: [u8; 0x178], // 0x3B8
        pub m_bUseHighQualitySimulation: [u8; 0x4], // 0x530
        pub m_nMaxParticleCount: [u8; 0x4], // 0x534
        pub m_bRespectExclusionVolumes: [u8; 0x1], // 0x538
        pub m_bKillParticles: [u8; 0x1], // 0x539
        pub m_bDeleteSim: [u8; 0x2], // 0x53A
        pub m_nControlPoint: [u8; 0x4], // 0x53C
        pub m_nForcedSimId: [u8; 0x4], // 0x540
        pub m_nColorBlendType: [u8; 0x4], // 0x544
        pub m_nForcedStatusEffects: [u8; 0x4], // 0x548
        pub m_nNoCollisionAttribute: [u8; 0x4], // 0x54C
        pub m_nZeroGravityAttribute: [u8; 0x8], // 0x550
    }
    #[repr(C)]
    pub struct C_OP_SpinYaw {
        pub pad_0: [u8; 0x1F8], // 0x0
    }
    #[repr(C)]
    pub struct PointDefinitionWithTimeValues_t {
        pub pad_0: [u8; 0x14], // 0x0
        pub m_flTimeDuration: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct RenderProjectedMaterial_t {
        pub m_hMaterial: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct C_INIT_SetFloatAttributeToVectorExpression {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nExpression: [u8; 0x8], // 0x1E8
        pub m_vInput1: [u8; 0x6D8], // 0x1F0
        pub m_vInput2: [u8; 0x6D8], // 0x8C8
        pub m_flOutputRemap: [u8; 0x178], // 0xFA0
        pub m_nOutputField: [u8; 0x4], // 0x1118
        pub m_nSetMethod: [u8; 0x4], // 0x111C
    }
    #[repr(C)]
    pub struct C_OP_ExternalWindForce {
        pub pad_0: [u8; 0x1F0], // 0x0
        pub m_vecSamplePosition: [u8; 0x6D8], // 0x1F0
        pub m_vecScale: [u8; 0x6D8], // 0x8C8
        pub m_bSampleWind: [u8; 0x1], // 0xFA0
        pub m_bSampleWater: [u8; 0x1], // 0xFA1
        pub m_bDampenNearWaterPlane: [u8; 0x1], // 0xFA2
        pub m_bSampleGravity: [u8; 0x5], // 0xFA3
        pub m_vecGravityForce: [u8; 0x6D8], // 0xFA8
        pub m_bUseBasicMovementGravity: [u8; 0x8], // 0x1680
        pub m_flLocalGravityScale: [u8; 0x178], // 0x1688
        pub m_flLocalBuoyancyScale: [u8; 0x178], // 0x1800
        pub m_vecBuoyancyForce: [u8; 0x6D8], // 0x1978
    }
    #[repr(C)]
    pub struct C_INIT_ModelCull {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_nControlPointNumber: [u8; 0x4], // 0x1E8
        pub m_bBoundBox: [u8; 0x1], // 0x1EC
        pub m_bCullOutside: [u8; 0x1], // 0x1ED
        pub m_bUseBones: [u8; 0x1], // 0x1EE
        pub m_HitboxSetName: [u8; 0x81], // 0x1EF
    }
    #[repr(C)]
    pub struct C_OP_RenderSprites {
        pub pad_0: [u8; 0x2ED8], // 0x0
        pub m_nSequenceOverride: [u8; 0x178], // 0x2ED8
        pub m_bSequenceNumbersAreRawSequenceIndices: [u8; 0x4], // 0x3050
        pub m_nOrientationType: [u8; 0x4], // 0x3054
        pub m_nOrientationControlPoint: [u8; 0x4], // 0x3058
        pub m_bUseYawWithNormalAligned: [u8; 0x4], // 0x305C
        pub m_flMinSize: [u8; 0x178], // 0x3060
        pub m_flMaxSize: [u8; 0x178], // 0x31D8
        pub m_flSubPixelAAScale: [u8; 0x178], // 0x3350
        pub m_flStartFadeSize: [u8; 0x178], // 0x34C8
        pub m_flEndFadeSize: [u8; 0x178], // 0x3640
        pub m_flStartFadeDot: [u8; 0x4], // 0x37B8
        pub m_flEndFadeDot: [u8; 0x4], // 0x37BC
        pub m_bDistanceAlpha: [u8; 0x1], // 0x37C0
        pub m_bSoftEdges: [u8; 0x3], // 0x37C1
        pub m_flEdgeSoftnessStart: [u8; 0x4], // 0x37C4
        pub m_flEdgeSoftnessEnd: [u8; 0x4], // 0x37C8
        pub m_bOutline: [u8; 0x4], // 0x37CC
        pub m_OutlineColor: [u8; 0x4], // 0x37D0
        pub m_nOutlineAlpha: [u8; 0x4], // 0x37D4
        pub m_flOutlineStart0: [u8; 0x4], // 0x37D8
        pub m_flOutlineStart1: [u8; 0x4], // 0x37DC
        pub m_flOutlineEnd0: [u8; 0x4], // 0x37E0
        pub m_flOutlineEnd1: [u8; 0x4], // 0x37E4
        pub m_nLightingMode: [u8; 0x8], // 0x37E8
        pub m_vecLightingOverride: [u8; 0x6D8], // 0x37F0
        pub m_flLightingTessellation: [u8; 0x178], // 0x3EC8
        pub m_flLightingDirectionality: [u8; 0x178], // 0x4040
        pub m_bParticleShadows: [u8; 0x4], // 0x41B8
        pub m_flShadowDensity: [u8; 0xC], // 0x41BC
    }
    #[repr(C)]
    pub struct C_OP_PercentageBetweenTransformLerpCPs {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E0
        pub m_flInputMin: [u8; 0x4], // 0x1E4
        pub m_flInputMax: [u8; 0x8], // 0x1E8
        pub m_TransformStart: [u8; 0x68], // 0x1F0
        pub m_TransformEnd: [u8; 0x68], // 0x258
        pub m_nOutputStartCP: [u8; 0x4], // 0x2C0
        pub m_nOutputStartField: [u8; 0x4], // 0x2C4
        pub m_nOutputEndCP: [u8; 0x4], // 0x2C8
        pub m_nOutputEndField: [u8; 0x4], // 0x2CC
        pub m_nSetMethod: [u8; 0x4], // 0x2D0
        pub m_bActiveRange: [u8; 0x1], // 0x2D4
        pub m_bRadialCheck: [u8; 0x3], // 0x2D5
    }
    #[repr(C)]
    pub struct C_OP_SetPerChildControlPoint {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nChildGroupID: [u8; 0x4], // 0x1E0
        pub m_nFirstControlPoint: [u8; 0x4], // 0x1E4
        pub m_nNumControlPoints: [u8; 0x8], // 0x1E8
        pub m_nParticleIncrement: [u8; 0x178], // 0x1F0
        pub m_nFirstSourcePoint: [u8; 0x178], // 0x368
        pub m_bSetOrientation: [u8; 0x4], // 0x4E0
        pub m_nOrientationField: [u8; 0x4], // 0x4E4
        pub m_bNumBasedOnParticleCount: [u8; 0x8], // 0x4E8
    }
    #[repr(C)]
    pub struct C_OP_RenderTreeShake {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_flPeakStrength: [u8; 0x4], // 0x230
        pub m_nPeakStrengthFieldOverride: [u8; 0x4], // 0x234
        pub m_flRadius: [u8; 0x4], // 0x238
        pub m_nRadiusFieldOverride: [u8; 0x4], // 0x23C
        pub m_flShakeDuration: [u8; 0x4], // 0x240
        pub m_flTransitionTime: [u8; 0x4], // 0x244
        pub m_flTwistAmount: [u8; 0x4], // 0x248
        pub m_flRadialAmount: [u8; 0x4], // 0x24C
        pub m_flControlPointOrientationAmount: [u8; 0x4], // 0x250
        pub m_nControlPointForLinearDirection: [u8; 0x4], // 0x254
    }
    #[repr(C)]
    pub struct C_OP_WorldCollideConstraint {
        pub pad_0: [u8; 0x1E0], // 0x0
    }
    #[repr(C)]
    pub struct C_OP_SetAttributeToScalarExpression {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nExpression: [u8; 0x8], // 0x1E0
        pub m_flInput1: [u8; 0x178], // 0x1E8
        pub m_flInput2: [u8; 0x178], // 0x360
        pub m_flOutputRemap: [u8; 0x178], // 0x4D8
        pub m_nOutputField: [u8; 0x4], // 0x650
        pub m_nSetMethod: [u8; 0x2C], // 0x654
    }
    #[repr(C)]
    pub struct C_OP_CycleScalar {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nDestField: [u8; 0x4], // 0x1E0
        pub m_flStartValue: [u8; 0x4], // 0x1E4
        pub m_flEndValue: [u8; 0x4], // 0x1E8
        pub m_flCycleTime: [u8; 0x4], // 0x1EC
        pub m_bDoNotRepeatCycle: [u8; 0x1], // 0x1F0
        pub m_bSynchronizeParticles: [u8; 0x3], // 0x1F1
        pub m_nCPScale: [u8; 0x4], // 0x1F4
        pub m_nCPFieldMin: [u8; 0x4], // 0x1F8
        pub m_nCPFieldMax: [u8; 0x4], // 0x1FC
        pub m_nSetMethod: [u8; 0x8], // 0x200
    }
    #[repr(C)]
    pub struct C_OP_RenderMaterialProxy {
        pub pad_0: [u8; 0x230], // 0x0
        pub m_nMaterialControlPoint: [u8; 0x4], // 0x230
        pub m_nProxyType: [u8; 0x4], // 0x234
        pub m_MaterialVars: [u8; 0x18], // 0x238
        pub m_hOverrideMaterial: [u8; 0x8], // 0x250
        pub m_flMaterialOverrideEnabled: [u8; 0x178], // 0x258
        pub m_vecColorScale: [u8; 0x6D8], // 0x3D0
        pub m_flAlpha: [u8; 0x178], // 0xAA8
        pub m_nColorBlendType: [u8; 0x20], // 0xC20
    }
    #[repr(C)]
    pub struct FloatInputMaterialVariable_t {
        pub m_strVariable: [u8; 0x8], // 0x0
        pub m_flInput: [u8; 0x178], // 0x8
    }
    #[repr(C)]
    pub struct C_OP_RampScalarLinear {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_RateMin: [u8; 0x4], // 0x1E0
        pub m_RateMax: [u8; 0x4], // 0x1E4
        pub m_flStartTime_min: [u8; 0x4], // 0x1E8
        pub m_flStartTime_max: [u8; 0x4], // 0x1EC
        pub m_flEndTime_min: [u8; 0x4], // 0x1F0
        pub m_flEndTime_max: [u8; 0x2C], // 0x1F4
        pub m_nField: [u8; 0x4], // 0x220
        pub m_bProportionalOp: [u8; 0xC], // 0x224
    }
    #[repr(C)]
    pub struct C_OP_RotateVector {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E0
        pub m_vecRotAxisMin: [u8; 0xC], // 0x1E4
        pub m_vecRotAxisMax: [u8; 0xC], // 0x1F0
        pub m_flRotRateMin: [u8; 0x4], // 0x1FC
        pub m_flRotRateMax: [u8; 0x4], // 0x200
        pub m_bNormalize: [u8; 0x4], // 0x204
        pub m_flScale: [u8; 0x178], // 0x208
    }
    #[repr(C)]
    pub struct C_INIT_InitVecCollection {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_InputValue: [u8; 0x6D8], // 0x1E8
        pub m_nOutputField: [u8; 0x8], // 0x8C0
    }
    #[repr(C)]
    pub struct C_INIT_RemapParticleCountToNamedModelMeshGroupScalar {
        pub pad_0: [u8; 0x238], // 0x0
    }
    #[repr(C)]
    pub struct C_INIT_SequenceFromCP {
        pub pad_0: [u8; 0x1E8], // 0x0
        pub m_bKillUnused: [u8; 0x1], // 0x1E8
        pub m_bRadiusScale: [u8; 0x3], // 0x1E9
        pub m_nCP: [u8; 0x4], // 0x1EC
        pub m_vecOffset: [u8; 0x10], // 0x1F0
    }
    #[repr(C)]
    pub struct C_OP_CPOffsetToPercentageBetweenCPs {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_flInputMin: [u8; 0x4], // 0x1E0
        pub m_flInputMax: [u8; 0x4], // 0x1E4
        pub m_flInputBias: [u8; 0x4], // 0x1E8
        pub m_nStartCP: [u8; 0x4], // 0x1EC
        pub m_nEndCP: [u8; 0x4], // 0x1F0
        pub m_nOffsetCP: [u8; 0x4], // 0x1F4
        pub m_nOuputCP: [u8; 0x4], // 0x1F8
        pub m_nInputCP: [u8; 0x4], // 0x1FC
        pub m_bRadialCheck: [u8; 0x1], // 0x200
        pub m_bScaleOffset: [u8; 0x3], // 0x201
        pub m_vecOffset: [u8; 0xC], // 0x204
    }
    #[repr(C)]
    pub struct C_OP_LerpEndCapScalar {
        pub pad_0: [u8; 0x1E0], // 0x0
        pub m_nFieldOutput: [u8; 0x4], // 0x1E0
        pub m_flOutput: [u8; 0x4], // 0x1E4
        pub m_flLerpTime: [u8; 0x8], // 0x1E8
    }
}
