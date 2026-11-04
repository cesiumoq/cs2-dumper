/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

pub const particles = struct {

    pub const CPulseCell_WaitForCursorsWithTag = extern struct {
        pad_0: [0x128]u8, // 0x0
        m_bTagSelfWhenComplete: [0x4]u8, // 0x128
        m_nDesiredKillPriority: [0x4]u8, // 0x12C
    };
    pub const CPulseCell_RaceCursors = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_Outflows: [0x18]u8, // 0xD8
        m_OnFinished: [0x48]u8, // 0xF0
    };
    pub const CPulseCell_Base = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_nEditorNodeID: [0x40]u8, // 0x8
    };
    pub const CPulse_ResumePoint = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_PickBestOutflowSelector = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_nCheckType: [0x8]u8, // 0x48
        m_OutflowList: [0x18]u8, // 0x50
    };
    pub const CParticleBindingRealPulse = extern struct {
        pad_0: [0xA8]u8, // 0x0
    };
    pub const CPulseCell_WaitForObservable = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_Condition: [0x90]u8, // 0xD8
        m_OnTrue: [0x48]u8, // 0x168
    };
    pub const CPulse_OutflowConnection = extern struct {
        m_SourceOutflowName: [0x10]u8, // 0x0
        m_nDestChunk: [0x4]u8, // 0x10
        m_nInstruction: [0x4]u8, // 0x14
        m_OutflowRegisterMap: [0x30]u8, // 0x18
    };
    pub const CPulseGraphDef = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_DomainIdentifier: [0x10]u8, // 0x8
        m_DomainSubType: [0x18]u8, // 0x18
        m_ParentMapName: [0x10]u8, // 0x30
        m_ParentXmlName: [0x10]u8, // 0x40
        m_Chunks: [0x18]u8, // 0x50
        m_Cells: [0x18]u8, // 0x68
        m_Vars: [0x18]u8, // 0x80
        m_TempVarBanks: [0x18]u8, // 0x98
        m_PublicOutputs: [0x18]u8, // 0xB0
        m_InvokeBindings: [0x18]u8, // 0xC8
        m_CallInfos: [0x18]u8, // 0xE0
        m_Constants: [0x18]u8, // 0xF8
        m_DomainValues: [0x18]u8, // 0x110
        m_BlackboardReferences: [0x18]u8, // 0x128
        m_OutputConnections: [0x80]u8, // 0x140
    };
    pub const CPulseCell_FireCursors = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_Outflows: [0x18]u8, // 0xD8
        m_bWaitForChildOutflows: [0x8]u8, // 0xF0
        m_OnFinished: [0x48]u8, // 0xF8
    };
    pub const CPulseCell_Timeline__TimelineEvent_t = extern struct {
        m_flTimeFromPrevious: [0x8]u8, // 0x0
        m_EventOutflow: [0x48]u8, // 0x8
    };
    pub const CPulseCell_IntervalTimer__CursorState_t = extern struct {
        m_StartTime: [0x4]u8, // 0x0
        m_EndTime: [0x4]u8, // 0x4
        m_flWaitInterval: [0x4]u8, // 0x8
        m_flWaitIntervalHigh: [0x4]u8, // 0xC
        m_bCompleteOnNextWake: [0x4]u8, // 0x10
    };
    pub const CPulseCell_BaseRequirement = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_BaseState = extern struct {
        pad_0: [0xD8]u8, // 0x0
    };
    pub const OutflowWithRequirements_t = extern struct {
        m_Connection: [0x48]u8, // 0x0
        m_DestinationFlowNodeID: [0x8]u8, // 0x48
        m_RequirementNodeIDs: [0x18]u8, // 0x50
        m_nCursorStateBlockIndex: [0x18]u8, // 0x68
    };
    pub const CPulseCell_IsRequirementValid = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_Value_Gradient = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_Gradient: [0x18]u8, // 0x48
    };
    pub const PulseNodeDynamicOutflows_t__DynamicOutflow_t = extern struct {
        m_OutflowID: [0x8]u8, // 0x0
        m_Connection: [0x48]u8, // 0x8
    };
    pub const CBasePulseGraphInstance = extern struct {
        pad_0: [0x88]u8, // 0x0
    };
    pub const CPulseCell_Inflow_GraphHook = extern struct {
        pad_0: [0x80]u8, // 0x0
        m_HookName: [0x10]u8, // 0x80
    };
    pub const SignatureOutflow_Resume = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_Inflow_BaseEntrypoint = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_EntryChunk: [0x8]u8, // 0x48
        m_RegisterMap: [0x30]u8, // 0x50
    };
    pub const CPulseCell_WaitForCursorsWithTagBase = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_nCursorsAllowedToWait: [0x8]u8, // 0xD8
        m_WaitComplete: [0x48]u8, // 0xE0
    };
    pub const CPulse_InvokeBinding = extern struct {
        m_RegisterMap: [0x30]u8, // 0x0
        m_FuncName: [0x10]u8, // 0x30
        m_nCellIndex: [0x4]u8, // 0x40
        m_nSrcChunk: [0x4]u8, // 0x44
        m_nSrcInstruction: [0x68]u8, // 0x48
    };
    pub const CPulseCell_IntervalTimer = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_Completed: [0x48]u8, // 0xD8
        m_OnInterval: [0x48]u8, // 0x120
    };
    pub const CPulseCell_BaseLerp = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_WakeResume: [0x48]u8, // 0xD8
    };
    pub const CPulseCell_Value_Curve = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_Curve: [0x40]u8, // 0x48
    };
    pub const CPulseCell_Inflow_EventHandler = extern struct {
        pad_0: [0x80]u8, // 0x0
        m_EventName: [0x10]u8, // 0x80
    };
    pub const CPulseCell_BaseFlow = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_Outflow_CycleShuffled__InstanceState_t = extern struct {
        m_Shuffle: [0x20]u8, // 0x0
        m_nNextShuffle: [0x8]u8, // 0x20
    };
    pub const CPulseCell_BaseLerp__CursorState_t = extern struct {
        m_StartTime: [0x4]u8, // 0x0
        m_EndTime: [0x4]u8, // 0x4
    };
    pub const SignatureOutflow_Continue = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_Timeline = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_TimelineEvents: [0x18]u8, // 0xD8
        m_bWaitForChildOutflows: [0x8]u8, // 0xF0
        m_OnFinished: [0x48]u8, // 0xF8
    };
    pub const CPulseCell_Inflow_EntOutputHandler = extern struct {
        pad_0: [0x80]u8, // 0x0
        m_SourceEntity: [0x10]u8, // 0x80
        m_SourceOutput: [0x10]u8, // 0x90
        m_ExpectedParamType: [0x18]u8, // 0xA0
    };
    pub const CPulseCell_Outflow_CycleOrdered__InstanceState_t = extern struct {
        m_nNextIndex: [0x4]u8, // 0x0
    };
    pub const CParticleCollectionBindingInstance = extern struct {
        pad_0: [0xA8]u8, // 0x0
    };
    pub const CPulseCell_LimitCount__InstanceState_t = extern struct {
        m_nCurrentCount: [0x4]u8, // 0x0
    };
    pub const CPulseCell_Step_DebugLog = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_BaseYieldingInflow = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_BaseFlow_OnAfterCancel: [0x48]u8, // 0x48
        m_BaseFlow_WhileActive: [0x48]u8, // 0x90
    };
    pub const PulseNodeDynamicOutflows_t = extern struct {
        m_Outflows: [0x18]u8, // 0x0
    };
    pub const CPulseCell_IsRequirementValid__Criteria_t = extern struct {
        m_bIsValid: [0x1]u8, // 0x0
    };
    pub const CPulseCell_Inflow_ObservableVariableListener = extern struct {
        pad_0: [0x80]u8, // 0x0
        m_nBlackboardReference: [0x2]u8, // 0x80
        m_bSelfReference: [0x6]u8, // 0x82
    };
    pub const CPulseCell_Outflow_CycleOrdered = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_Outputs: [0x18]u8, // 0x48
    };
    pub const PulseSelectorOutflowList_t = extern struct {
        m_Outflows: [0x18]u8, // 0x0
    };
    pub const CPulseCell_Inflow_Wait = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_WakeResume: [0x48]u8, // 0xD8
    };
    pub const CPulseCell_Outflow_CycleShuffled = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_Outputs: [0x18]u8, // 0x48
    };
    pub const CPulseCell_Inflow_Method = extern struct {
        pad_0: [0x80]u8, // 0x0
        m_MethodName: [0x10]u8, // 0x80
        m_Description: [0x8]u8, // 0x90
        m_bIsPublic: [0x8]u8, // 0x98
        m_Args: [0x10]u8, // 0xA0
        m_ReturnValues: [0x10]u8, // 0xB0
    };
    pub const CPulseCell_BaseValue = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_BooleanSwitchState = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_Condition: [0x90]u8, // 0xD8
        m_WhenTrue: [0x48]u8, // 0x168
        m_WhenFalse: [0x48]u8, // 0x1B0
    };
    pub const CPulseCell_Inflow_Yield = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_UnyieldResume: [0x48]u8, // 0xD8
    };
    pub const CPulseCell_Unknown = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_UnknownKeys: [0x10]u8, // 0x48
    };
    pub const CPulseCell_Outflow_CycleRandom = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_Outputs: [0x18]u8, // 0x48
    };
    pub const CPulseCell_Step_PublicOutput = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_OutputIndex: [0x8]u8, // 0x48
    };
    pub const CPulse_BlackboardReference = extern struct {
        m_hBlackboardResource: [0x8]u8, // 0x0
        m_BlackboardResource: [0x10]u8, // 0x8
        m_nNodeID: [0x8]u8, // 0x18
        m_NodeName: [0x8]u8, // 0x20
    };
    pub const CPulseCell_ReturnValues = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_Value_RandomInt = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulse_CallInfo = extern struct {
        m_PortName: [0x10]u8, // 0x0
        m_nEditorNodeID: [0x8]u8, // 0x10
        m_RegisterMap: [0x30]u8, // 0x18
        m_CallMethodID: [0x4]u8, // 0x48
        m_nSrcChunk: [0x4]u8, // 0x4C
        m_nSrcInstruction: [0x4]u8, // 0x50
        m_nBreakDestChunk: [0x4]u8, // 0x54
        m_nBreakDestInstruction: [0x8]u8, // 0x58
    };
    pub const CPulseCell_InlineNodeSkipSelector = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_nFlowNodeID: [0x4]u8, // 0x48
        m_bAnd: [0x4]u8, // 0x4C
        m_PassOutflow: [0x18]u8, // 0x50
        m_FailOutflow: [0x48]u8, // 0x68
    };
    pub const CPulseCell_LimitCount = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_nLimitCount: [0x8]u8, // 0x48
    };
    pub const CPulseCell_Step_CallExternalMethod = extern struct {
        pad_0: [0xD8]u8, // 0x0
        m_MethodName: [0x10]u8, // 0xD8
        m_nBlackboardIndex: [0x8]u8, // 0xE8
        m_ExpectedArgs: [0x10]u8, // 0xF0
        m_nAsyncCallMode: [0x8]u8, // 0x100
        m_OnFinished: [0x48]u8, // 0x108
    };
    pub const CPulseCell_LimitCount__Criteria_t = extern struct {
        m_bLimitCountPasses: [0x1]u8, // 0x0
    };
    pub const CPulseCell_CursorQueue = extern struct {
        pad_0: [0x128]u8, // 0x0
        m_nCursorsAllowedToRunParallel: [0x8]u8, // 0x128
    };
    pub const CPulseCell_Value_RandomFloat = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseExecCursor = extern struct {
        pad_0: [0xD8]u8, // 0x0
    };
    pub const IParticleCollection = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const C_OP_RemapGravityToVector = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_vInput1: [0x6D8]u8, // 0x1E0
        m_nOutputField: [0x4]u8, // 0x8B8
        m_nSetMethod: [0x4]u8, // 0x8BC
        m_bNormalizedOutput: [0x70]u8, // 0x8C0
    };
    pub const C_OP_Decay = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_bRopeDecay: [0x1]u8, // 0x1E0
        m_bForcePreserveParticleOrder: [0x7]u8, // 0x1E1
    };
    pub const C_OP_RenderDeferredLight = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_flRadiusScale: [0x4]u8, // 0x230
        m_flAlphaScale: [0x4]u8, // 0x234
        m_nAlpha2Field: [0x8]u8, // 0x238
        m_vecColorScale: [0x6D8]u8, // 0x240
        m_nColorBlendType: [0x4]u8, // 0x918
        m_bUseTexture: [0x1]u8, // 0x91C
        m_bUseAlphaTestWindow: [0x3]u8, // 0x91D
        m_hTexture: [0x8]u8, // 0x920
        m_nAlphaTestPointField: [0x4]u8, // 0x928
        m_nAlphaTestRangeField: [0x4]u8, // 0x92C
        m_nAlphaTestSharpnessField: [0x4]u8, // 0x930
        m_flLightDistance: [0x4]u8, // 0x934
        m_flStartFalloff: [0x4]u8, // 0x938
        m_flDistanceFalloff: [0x4]u8, // 0x93C
        m_flSpotFoV: [0x4]u8, // 0x940
        m_nHSVShiftControlPoint: [0x4]u8, // 0x944
    };
    pub const C_OP_RemapSpeedtoCP = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nInControlPointNumber: [0x4]u8, // 0x1E8
        m_nOutControlPointNumber: [0x4]u8, // 0x1EC
        m_nField: [0x4]u8, // 0x1F0
        m_flInputMin: [0x4]u8, // 0x1F4
        m_flInputMax: [0x4]u8, // 0x1F8
        m_flOutputMin: [0x4]u8, // 0x1FC
        m_flOutputMax: [0x4]u8, // 0x200
        m_bUseDeltaV: [0x4]u8, // 0x204
    };
    pub const C_OP_RemapTransformToVelocity = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_TransformInput: [0x68]u8, // 0x1E0
    };
    pub const CollisionGroupContext_t = extern struct {
        m_nCollisionGroupNumber: [0x4]u8, // 0x0
    };
    pub const CParticleFunctionPreEmission = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_bRunOnce: [0x8]u8, // 0x1E0
    };
    pub const C_OP_FadeOutSimple = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flFadeOutTime: [0x4]u8, // 0x1E0
        m_nFieldOutput: [0x4]u8, // 0x1E4
    };
    pub const C_OP_SpringToVectorConstraint = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flRestLength: [0x178]u8, // 0x1E0
        m_flMinDistance: [0x178]u8, // 0x358
        m_flMaxDistance: [0x178]u8, // 0x4D0
        m_flRestingLength: [0x178]u8, // 0x648
        m_vecAnchorVector: [0x6D8]u8, // 0x7C0
    };
    pub const C_OP_RenderRopes = extern struct {
        pad_0: [0x2ED8]u8, // 0x0
        m_bEnableFadingAndClamping: [0x4]u8, // 0x2ED8
        m_flMinSize: [0x4]u8, // 0x2EDC
        m_flMaxSize: [0x4]u8, // 0x2EE0
        m_flStartFadeSize: [0x4]u8, // 0x2EE4
        m_flEndFadeSize: [0x4]u8, // 0x2EE8
        m_flStartFadeDot: [0x4]u8, // 0x2EEC
        m_flEndFadeDot: [0x8]u8, // 0x2EF0
        m_flSubPixelAAScale: [0x178]u8, // 0x2EF8
        m_flRadiusTaper: [0x4]u8, // 0x3070
        m_nMinTesselation: [0x4]u8, // 0x3074
        m_nMaxTesselation: [0x4]u8, // 0x3078
        m_flTessScale: [0x4]u8, // 0x307C
        m_flTextureVWorldSize: [0x178]u8, // 0x3080
        m_flTextureVScrollRate: [0x178]u8, // 0x31F8
        m_flTextureVOffset: [0x178]u8, // 0x3370
        m_nTextureVParamsCP: [0x4]u8, // 0x34E8
        m_bClampV: [0x4]u8, // 0x34EC
        m_nScaleCP1: [0x4]u8, // 0x34F0
        m_nScaleCP2: [0x4]u8, // 0x34F4
        m_flScaleVSizeByControlPointDistance: [0x4]u8, // 0x34F8
        m_flScaleVScrollByControlPointDistance: [0x4]u8, // 0x34FC
        m_flScaleVOffsetByControlPointDistance: [0x5]u8, // 0x3500
        m_bUseScalarForTextureCoordinate: [0x3]u8, // 0x3505
        m_nScalarFieldForTextureCoordinate: [0x4]u8, // 0x3508
        m_flScalarAttributeTextureCoordScale: [0x4]u8, // 0x350C
        m_bReverseOrder: [0x1]u8, // 0x3510
        m_bClosedLoop: [0x3]u8, // 0x3511
        m_nSplitField: [0x4]u8, // 0x3514
        m_bSortBySegmentID: [0x4]u8, // 0x3518
        m_nOrientationType: [0x4]u8, // 0x351C
        m_nVectorFieldForOrientation: [0x4]u8, // 0x3520
        m_bDrawAsOpaque: [0x1]u8, // 0x3524
        m_bGenerateNormals: [0x3]u8, // 0x3525
    };
    pub const C_INIT_StatusEffectCitadel = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_flSFXColorWarpAmount: [0x4]u8, // 0x1E8
        m_flSFXNormalAmount: [0x4]u8, // 0x1EC
        m_flSFXMetalnessAmount: [0x4]u8, // 0x1F0
        m_flSFXRoughnessAmount: [0x4]u8, // 0x1F4
        m_flSFXSelfIllumAmount: [0x4]u8, // 0x1F8
        m_flSFXSScale: [0x4]u8, // 0x1FC
        m_flSFXSScrollX: [0x4]u8, // 0x200
        m_flSFXSScrollY: [0x4]u8, // 0x204
        m_flSFXSScrollZ: [0x4]u8, // 0x208
        m_flSFXSOffsetX: [0x4]u8, // 0x20C
        m_flSFXSOffsetY: [0x4]u8, // 0x210
        m_flSFXSOffsetZ: [0x4]u8, // 0x214
        m_nDetailCombo: [0x4]u8, // 0x218
        m_flSFXSDetailAmount: [0x4]u8, // 0x21C
        m_flSFXSDetailScale: [0x4]u8, // 0x220
        m_flSFXSDetailScrollX: [0x4]u8, // 0x224
        m_flSFXSDetailScrollY: [0x4]u8, // 0x228
        m_flSFXSDetailScrollZ: [0x4]u8, // 0x22C
        m_flSFXSUseModelUVs: [0x8]u8, // 0x230
    };
    pub const C_OP_RenderSound = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_flDurationScale: [0x4]u8, // 0x230
        m_flSndLvlScale: [0x4]u8, // 0x234
        m_flPitchScale: [0x4]u8, // 0x238
        m_flVolumeScale: [0x4]u8, // 0x23C
        m_nSndLvlField: [0x4]u8, // 0x240
        m_nDurationField: [0x4]u8, // 0x244
        m_nPitchField: [0x4]u8, // 0x248
        m_nVolumeField: [0x4]u8, // 0x24C
        m_nChannel: [0x4]u8, // 0x250
        m_nCPReference: [0x4]u8, // 0x254
        m_pszSoundName: [0x100]u8, // 0x258
        m_bSuppressStopSoundEvent: [0x8]u8, // 0x358
    };
    pub const CParticleVisibilityInputs = extern struct {
        m_flCameraBias: [0x4]u8, // 0x0
        m_nCPin: [0x4]u8, // 0x4
        m_flProxyRadius: [0x4]u8, // 0x8
        m_flInputMin: [0x4]u8, // 0xC
        m_flInputMax: [0x4]u8, // 0x10
        m_flInputPixelVisFade: [0x4]u8, // 0x14
        m_flNoPixelVisibilityFallback: [0x4]u8, // 0x18
        m_flDistanceInputMin: [0x4]u8, // 0x1C
        m_flDistanceInputMax: [0x4]u8, // 0x20
        m_flDotInputMin: [0x4]u8, // 0x24
        m_flDotInputMax: [0x4]u8, // 0x28
        m_bDotCPAngles: [0x1]u8, // 0x2C
        m_bDotCameraAngles: [0x3]u8, // 0x2D
        m_flAlphaScaleMin: [0x4]u8, // 0x30
        m_flAlphaScaleMax: [0x4]u8, // 0x34
        m_flRadiusScaleMin: [0x4]u8, // 0x38
        m_flRadiusScaleMax: [0x4]u8, // 0x3C
        m_flRadiusScaleFOVBase: [0x4]u8, // 0x40
        m_bRightEye: [0x4]u8, // 0x44
    };
    pub const C_OP_SetControlPointsToParticle = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nChildGroupID: [0x4]u8, // 0x1E0
        m_nFirstControlPoint: [0x4]u8, // 0x1E4
        m_nNumControlPoints: [0x4]u8, // 0x1E8
        m_nFirstSourcePoint: [0x4]u8, // 0x1EC
        m_bReverse: [0x1]u8, // 0x1F0
        m_bSetOrientation: [0x3]u8, // 0x1F1
        m_nOrientationMode: [0x4]u8, // 0x1F4
        m_nSetParent: [0x8]u8, // 0x1F8
    };
    pub const C_OP_RemapCPVelocityToVector = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nControlPoint: [0x4]u8, // 0x1E0
        m_nFieldOutput: [0x4]u8, // 0x1E4
        m_flScale: [0x4]u8, // 0x1E8
        m_bNormalize: [0x4]u8, // 0x1EC
    };
    pub const C_OP_PointVectorAtNextParticle = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldOutput: [0x8]u8, // 0x1E0
        m_flInterpolation: [0x178]u8, // 0x1E8
        m_bPrevious: [0x8]u8, // 0x360
    };
    pub const ParticlePreviewBodyGroup_t = extern struct {
        m_bodyGroupName: [0x8]u8, // 0x0
        m_nValue: [0x8]u8, // 0x8
    };
    pub const C_OP_OscillateScalarSimple = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_Rate: [0x4]u8, // 0x1E0
        m_Frequency: [0x4]u8, // 0x1E4
        m_nField: [0x4]u8, // 0x1E8
        m_flOscMult: [0x4]u8, // 0x1EC
        m_flOscAdd: [0x30]u8, // 0x1F0
    };
    pub const C_INIT_StatusEffect = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nDetail2Combo: [0x4]u8, // 0x1E8
        m_flDetail2Rotation: [0x4]u8, // 0x1EC
        m_flDetail2Scale: [0x4]u8, // 0x1F0
        m_flDetail2BlendFactor: [0x4]u8, // 0x1F4
        m_flColorWarpIntensity: [0x4]u8, // 0x1F8
        m_flDiffuseWarpBlendToFull: [0x4]u8, // 0x1FC
        m_flEnvMapIntensity: [0x4]u8, // 0x200
        m_flAmbientScale: [0x4]u8, // 0x204
        m_specularColor: [0x4]u8, // 0x208
        m_flSpecularScale: [0x4]u8, // 0x20C
        m_flSpecularExponent: [0x4]u8, // 0x210
        m_flSpecularExponentBlendToFull: [0x4]u8, // 0x214
        m_flSpecularBlendToFull: [0x4]u8, // 0x218
        m_rimLightColor: [0x4]u8, // 0x21C
        m_flRimLightScale: [0x4]u8, // 0x220
        m_flReflectionsTintByBaseBlendToNone: [0x4]u8, // 0x224
        m_flMetalnessBlendToFull: [0x4]u8, // 0x228
        m_flSelfIllumBlendToFull: [0x1C]u8, // 0x22C
    };
    pub const C_INIT_RtEnvCull = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_vecTestDir: [0xC]u8, // 0x1E8
        m_vecTestNormal: [0xC]u8, // 0x1F4
        m_bUseVelocity: [0x1]u8, // 0x200
        m_bCullOnMiss: [0x1]u8, // 0x201
        m_bLifeAdjust: [0x1]u8, // 0x202
        m_RtEnvName: [0x81]u8, // 0x203
        m_nRTEnvCP: [0x4]u8, // 0x284
        m_nComponent: [0x8]u8, // 0x288
    };
    pub const C_OP_ConstrainDistance = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_fMinDistance: [0x178]u8, // 0x1E0
        m_fMaxDistance: [0x178]u8, // 0x358
        m_nControlPointNumber: [0x68]u8, // 0x4D0
        m_CenterOffset: [0x6D8]u8, // 0x538
        m_bGlobalCenter: [0x8]u8, // 0xC10
    };
    pub const C_INIT_RandomVector = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_vecMin: [0xC]u8, // 0x1E8
        m_vecMax: [0xC]u8, // 0x1F4
        m_nFieldOutput: [0x4]u8, // 0x200
        m_randomnessParameters: [0xC]u8, // 0x204
    };
    pub const C_INIT_InitialVelocityNoise = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_vecAbsVal: [0xC]u8, // 0x1E8
        m_vecAbsValInv: [0xC]u8, // 0x1F4
        m_vecOffsetLoc: [0x6D8]u8, // 0x200
        m_flOffset: [0x178]u8, // 0x8D8
        m_vecOutputMin: [0x6D8]u8, // 0xA50
        m_vecOutputMax: [0x6D8]u8, // 0x1128
        m_flNoiseScale: [0x178]u8, // 0x1800
        m_flNoiseScaleLoc: [0x178]u8, // 0x1978
        m_TransformInput: [0x68]u8, // 0x1AF0
        m_bIgnoreDt: [0x8]u8, // 0x1B58
    };
    pub const ParticleChildrenInfo_t = extern struct {
        m_ChildRef: [0x8]u8, // 0x0
        m_flDelay: [0x4]u8, // 0x8
        m_bEndCap: [0x1]u8, // 0xC
        m_bDisableChild: [0x3]u8, // 0xD
        m_nDetailLevel: [0x10]u8, // 0x10
    };
    pub const C_OP_RemapScalarOnceTimed = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_bProportional: [0x4]u8, // 0x1E0
        m_nFieldInput: [0x4]u8, // 0x1E4
        m_nFieldOutput: [0x4]u8, // 0x1E8
        m_flInputMin: [0x4]u8, // 0x1EC
        m_flInputMax: [0x4]u8, // 0x1F0
        m_flOutputMin: [0x4]u8, // 0x1F4
        m_flOutputMax: [0x4]u8, // 0x1F8
        m_flRemapTime: [0x4]u8, // 0x1FC
    };
    pub const C_INIT_RandomNamedModelSequence = extern struct {
        pad_0: [0x210]u8, // 0x0
    };
    pub const C_OP_PlaneCull = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nPlaneControlPoint: [0x8]u8, // 0x1E0
        m_vecPlaneDirection: [0x6D8]u8, // 0x1E8
        m_bLocalSpace: [0x4]u8, // 0x8C0
        m_flPlaneOffset: [0x4]u8, // 0x8C4
    };
    pub const C_INIT_VelocityRandom = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nControlPointNumber: [0x8]u8, // 0x1E8
        m_fSpeedMin: [0x178]u8, // 0x1F0
        m_fSpeedMax: [0x178]u8, // 0x368
        m_LocalCoordinateSystemSpeedMin: [0x6D8]u8, // 0x4E0
        m_LocalCoordinateSystemSpeedMax: [0x6D8]u8, // 0xBB8
        m_bIgnoreDT: [0x4]u8, // 0x1290
        m_randomnessParameters: [0xC]u8, // 0x1294
    };
    pub const C_OP_ModelDampenMovement = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nControlPointNumber: [0x4]u8, // 0x1E0
        m_bBoundBox: [0x1]u8, // 0x1E4
        m_bOutside: [0x1]u8, // 0x1E5
        m_bUseBones: [0x1]u8, // 0x1E6
        m_HitboxSetName: [0x81]u8, // 0x1E7
        m_vecPosOffset: [0x6D8]u8, // 0x268
        m_fDrag: [0x8]u8, // 0x940
    };
    pub const C_OP_TwistAroundAxis = extern struct {
        pad_0: [0x1F0]u8, // 0x0
        m_fForceAmount: [0x4]u8, // 0x1F0
        m_TwistAxis: [0xC]u8, // 0x1F4
        m_bLocalSpace: [0x4]u8, // 0x200
        m_nControlPointNumber: [0x4]u8, // 0x204
    };
    pub const C_OP_TeleportBeam = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nCPPosition: [0x4]u8, // 0x1E0
        m_nCPVelocity: [0x4]u8, // 0x1E4
        m_nCPMisc: [0x4]u8, // 0x1E8
        m_nCPColor: [0x4]u8, // 0x1EC
        m_nCPInvalidColor: [0x4]u8, // 0x1F0
        m_nCPExtraArcData: [0x4]u8, // 0x1F4
        m_vGravity: [0xC]u8, // 0x1F8
        m_flArcMaxDuration: [0x4]u8, // 0x204
        m_flSegmentBreak: [0x4]u8, // 0x208
        m_flArcSpeed: [0x4]u8, // 0x20C
        m_flAlpha: [0x8]u8, // 0x210
    };
    pub const C_OP_RemapExternalWindToCP = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nCP: [0x4]u8, // 0x1E8
        m_nCPOutput: [0x4]u8, // 0x1EC
        m_vecScale: [0x6D8]u8, // 0x1F0
        m_bSetMagnitude: [0x4]u8, // 0x8C8
        m_nOutVectorField: [0x4]u8, // 0x8CC
    };
    pub const CBaseRendererSource2 = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_flRadiusScale: [0x178]u8, // 0x230
        m_flAlphaScale: [0x178]u8, // 0x3A8
        m_flRollScale: [0x178]u8, // 0x520
        m_nAlpha2Field: [0x8]u8, // 0x698
        m_vecColorScale: [0x6D8]u8, // 0x6A0
        m_nColorBlendType: [0x4]u8, // 0xD78
        m_nShaderType: [0x4]u8, // 0xD7C
        m_strShaderOverride: [0x8]u8, // 0xD80
        m_flCenterXOffset: [0x178]u8, // 0xD88
        m_flCenterYOffset: [0x178]u8, // 0xF00
        m_flBumpStrength: [0x4]u8, // 0x1078
        m_nCropTextureOverride: [0x4]u8, // 0x107C
        m_vecTexturesInput: [0x10]u8, // 0x1080
        m_flAnimationRate: [0x4]u8, // 0x1090
        m_nAnimationType: [0x4]u8, // 0x1094
        m_bAnimateInFPS: [0x8]u8, // 0x1098
        m_flMotionVectorScaleU: [0x178]u8, // 0x10A0
        m_flMotionVectorScaleV: [0x178]u8, // 0x1218
        m_flSelfIllumAmount: [0x178]u8, // 0x1390
        m_flDiffuseAmount: [0x178]u8, // 0x1508
        m_flDiffuseClamp: [0x178]u8, // 0x1680
        m_nLightingControlPoint: [0x4]u8, // 0x17F8
        m_nOutputBlendMode: [0x4]u8, // 0x17FC
        m_bGammaCorrectVertexColors: [0x1]u8, // 0x1800
        m_bSaturateColorPreAlphaBlend: [0x7]u8, // 0x1801
        m_flAddSelfAmount: [0x178]u8, // 0x1808
        m_flDesaturation: [0x178]u8, // 0x1980
        m_flOverbrightFactor: [0x178]u8, // 0x1AF8
        m_nHSVShiftControlPoint: [0x4]u8, // 0x1C70
        m_nFogType: [0x4]u8, // 0x1C74
        m_flFogAmount: [0x178]u8, // 0x1C78
        m_bTintByFOW: [0x1]u8, // 0x1DF0
        m_bTintByGlobalLight: [0x3]u8, // 0x1DF1
        m_nPerParticleAlphaReference: [0x4]u8, // 0x1DF4
        m_nPerParticleAlphaRefWindow: [0x4]u8, // 0x1DF8
        m_nAlphaReferenceType: [0x4]u8, // 0x1DFC
        m_flAlphaReferenceSoftness: [0x178]u8, // 0x1E00
        m_flSourceAlphaValueToMapToZero: [0x178]u8, // 0x1F78
        m_flSourceAlphaValueToMapToOne: [0x178]u8, // 0x20F0
        m_bRefract: [0x1]u8, // 0x2268
        m_bRefractSolid: [0x1]u8, // 0x2269
        m_bRefract2Passes: [0x6]u8, // 0x226A
        m_flRefractAmount: [0x178]u8, // 0x2270
        m_nRefractBlurRadius: [0x4]u8, // 0x23E8
        m_nRefractBlurType: [0x4]u8, // 0x23EC
        m_bOnlyRenderInEffectsBloomPass: [0x1]u8, // 0x23F0
        m_bOnlyRenderInEffectsWaterPass: [0x1]u8, // 0x23F1
        m_bUseMixedResolutionRendering: [0x1]u8, // 0x23F2
        m_bOnlyRenderInEffecsGameOverlay: [0x1]u8, // 0x23F3
        m_stencilTestID: [0x80]u8, // 0x23F4
        m_bStencilTestExclude: [0x1]u8, // 0x2474
        m_stencilWriteID: [0x80]u8, // 0x2475
        m_bWriteStencilOnDepthPass: [0x1]u8, // 0x24F5
        m_bWriteStencilOnDepthFail: [0x1]u8, // 0x24F6
        m_bReverseZBuffering: [0x1]u8, // 0x24F7
        m_bDisableZBuffering: [0x4]u8, // 0x24F8
        m_nFeatheringMode: [0x4]u8, // 0x24FC
        m_flFeatheringMinDist: [0x178]u8, // 0x2500
        m_flFeatheringMaxDist: [0x178]u8, // 0x2678
        m_flFeatheringFilter: [0x178]u8, // 0x27F0
        m_flFeatheringDepthMapFilter: [0x178]u8, // 0x2968
        m_flDepthBias: [0x178]u8, // 0x2AE0
        m_nSortMethod: [0x4]u8, // 0x2C58
        m_bBlendFramesSeq0: [0x1]u8, // 0x2C5C
        m_bMaxLuminanceBlendingSequence0: [0x27B]u8, // 0x2C5D
    };
    pub const CSpinUpdateBase = extern struct {
        pad_0: [0x1E0]u8, // 0x0
    };
    pub const C_OP_OrientTo2dDirection = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_vecInput: [0x6D8]u8, // 0x1E0
        m_flRotOffset: [0x4]u8, // 0x8B8
        m_flSpinStrength: [0x4]u8, // 0x8BC
        m_nFieldOutput: [0x8]u8, // 0x8C0
    };
    pub const C_OP_RemapDotProductToCP = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nInputCP1: [0x4]u8, // 0x1E8
        m_nInputCP2: [0x4]u8, // 0x1EC
        m_nOutputCP: [0x4]u8, // 0x1F0
        m_nOutVectorField: [0x4]u8, // 0x1F4
        m_flInputMin: [0x178]u8, // 0x1F8
        m_flInputMax: [0x178]u8, // 0x370
        m_flOutputMin: [0x178]u8, // 0x4E8
        m_flOutputMax: [0x178]u8, // 0x660
    };
    pub const C_INIT_RemapParticleCountToNamedModelElementScalar = extern struct {
        pad_0: [0x218]u8, // 0x0
        m_hModel: [0x8]u8, // 0x218
        m_outputMinName: [0x8]u8, // 0x220
        m_outputMaxName: [0x8]u8, // 0x228
        m_bModelFromRenderer: [0x8]u8, // 0x230
    };
    pub const C_OP_RenderTrails = extern struct {
        pad_0: [0x3358]u8, // 0x0
        m_bEnableFadingAndClamping: [0x4]u8, // 0x3358
        m_flStartFadeDot: [0x4]u8, // 0x335C
        m_flEndFadeDot: [0x4]u8, // 0x3360
        m_nPrevPntSource: [0x4]u8, // 0x3364
        m_flMaxLength: [0x4]u8, // 0x3368
        m_flMinLength: [0x4]u8, // 0x336C
        m_bIgnoreDT: [0x4]u8, // 0x3370
        m_flConstrainRadiusToLengthRatio: [0x4]u8, // 0x3374
        m_flLengthScale: [0x4]u8, // 0x3378
        m_flLengthFadeInTime: [0x4]u8, // 0x337C
        m_flRadiusHeadTaper: [0x178]u8, // 0x3380
        m_vecHeadColorScale: [0x6D8]u8, // 0x34F8
        m_flHeadAlphaScale: [0x178]u8, // 0x3BD0
        m_flRadiusTaper: [0x178]u8, // 0x3D48
        m_vecTailColorScale: [0x6D8]u8, // 0x3EC0
        m_flTailAlphaScale: [0x178]u8, // 0x4598
        m_nHorizCropField: [0x4]u8, // 0x4710
        m_nVertCropField: [0x4]u8, // 0x4714
        m_flForwardShift: [0x4]u8, // 0x4718
        m_bFlipUVBasedOnPitchYaw: [0x4]u8, // 0x471C
    };
    pub const C_OP_SetControlPointPositionToTimeOfDayValue = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nControlPointNumber: [0x4]u8, // 0x1E8
        m_pszTimeOfDayParameter: [0x80]u8, // 0x1EC
        m_vecDefaultValue: [0x14]u8, // 0x26C
    };
    pub const C_OP_DecayMaintainCount = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nParticlesToMaintain: [0x4]u8, // 0x1E0
        m_flDecayDelay: [0x4]u8, // 0x1E4
        m_nSnapshotControlPoint: [0x8]u8, // 0x1E8
        m_strSnapshotSubset: [0x8]u8, // 0x1F0
        m_bLifespanDecay: [0x8]u8, // 0x1F8
        m_flScale: [0x178]u8, // 0x200
        m_bKillNewest: [0x8]u8, // 0x378
    };
    pub const C_INIT_RandomModelSequence = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_ActivityName: [0x100]u8, // 0x1E8
        m_SequenceName: [0x100]u8, // 0x2E8
        m_hModel: [0x8]u8, // 0x3E8
    };
    pub const C_OP_ExternalGameImpulseForce = extern struct {
        pad_0: [0x1F0]u8, // 0x0
        m_flForceScale: [0x178]u8, // 0x1F0
        m_bRopes: [0x1]u8, // 0x368
        m_bRopesZOnly: [0x1]u8, // 0x369
        m_bExplosions: [0x1]u8, // 0x36A
        m_bParticles: [0x5]u8, // 0x36B
    };
    pub const C_OP_RemapAverageHitboxSpeedtoCP = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nInControlPointNumber: [0x4]u8, // 0x1E8
        m_nOutControlPointNumber: [0x4]u8, // 0x1EC
        m_nField: [0x4]u8, // 0x1F0
        m_nHitboxDataType: [0x4]u8, // 0x1F4
        m_flInputMin: [0x178]u8, // 0x1F8
        m_flInputMax: [0x178]u8, // 0x370
        m_flOutputMin: [0x178]u8, // 0x4E8
        m_flOutputMax: [0x178]u8, // 0x660
        m_nHeightControlPointNumber: [0x8]u8, // 0x7D8
        m_vecComparisonVelocity: [0x6D8]u8, // 0x7E0
        m_HitboxSetName: [0x80]u8, // 0xEB8
    };
    pub const C_INIT_RandomAlpha = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nFieldOutput: [0x4]u8, // 0x1E8
        m_nAlphaMin: [0x4]u8, // 0x1EC
        m_nAlphaMax: [0xC]u8, // 0x1F0
        m_flAlphaRandExponent: [0x4]u8, // 0x1FC
    };
    pub const C_OP_NormalizeVector = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldOutput: [0x4]u8, // 0x1E0
        m_flScale: [0x4]u8, // 0x1E4
    };
    pub const C_OP_FadeInSimple = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flFadeInTime: [0x4]u8, // 0x1E0
        m_nFieldOutput: [0x4]u8, // 0x1E4
    };
    pub const C_OP_RepeatedTriggerChildGroup = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nChildGroupID: [0x8]u8, // 0x1E8
        m_flClusterRefireTime: [0x178]u8, // 0x1F0
        m_flClusterSize: [0x178]u8, // 0x368
        m_flClusterCooldown: [0x178]u8, // 0x4E0
        m_bLimitChildCount: [0x8]u8, // 0x658
    };
    pub const C_OP_RemapVelocityToVector = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldOutput: [0x4]u8, // 0x1E0
        m_flScale: [0x4]u8, // 0x1E4
        m_bNormalize: [0x8]u8, // 0x1E8
    };
    pub const C_INIT_SetHitboxToClosest = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nControlPointNumber: [0x4]u8, // 0x1E8
        m_nDesiredHitbox: [0x4]u8, // 0x1EC
        m_vecHitBoxScale: [0x6D8]u8, // 0x1F0
        m_HitboxSetName: [0x80]u8, // 0x8C8
        m_bUseBones: [0x1]u8, // 0x948
        m_bUseClosestPointOnHitbox: [0x3]u8, // 0x949
        m_nTestType: [0x4]u8, // 0x94C
        m_flHybridRatio: [0x178]u8, // 0x950
        m_bUpdatePosition: [0x8]u8, // 0xAC8
    };
    pub const C_INIT_RingWave = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_TransformInput: [0x68]u8, // 0x1E8
        m_flParticlesPerOrbit: [0x178]u8, // 0x250
        m_flInitialRadius: [0x178]u8, // 0x3C8
        m_flThickness: [0x178]u8, // 0x540
        m_flInitialSpeedMin: [0x178]u8, // 0x6B8
        m_flInitialSpeedMax: [0x178]u8, // 0x830
        m_flRoll: [0x178]u8, // 0x9A8
        m_flPitch: [0x178]u8, // 0xB20
        m_flYaw: [0x178]u8, // 0xC98
        m_bEvenDistribution: [0x1]u8, // 0xE10
        m_bXYVelocityOnly: [0x7]u8, // 0xE11
    };
    pub const C_INIT_RandomTrailLength = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_flMinLength: [0x4]u8, // 0x1E8
        m_flMaxLength: [0x4]u8, // 0x1EC
        m_flLengthRandExponent: [0x8]u8, // 0x1F0
    };
    pub const C_OP_RemapScalar = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldInput: [0x4]u8, // 0x1E0
        m_nFieldOutput: [0x4]u8, // 0x1E4
        m_flInputMin: [0x4]u8, // 0x1E8
        m_flInputMax: [0x4]u8, // 0x1EC
        m_flOutputMin: [0x4]u8, // 0x1F0
        m_flOutputMax: [0x4]u8, // 0x1F4
        m_bOldCode: [0x8]u8, // 0x1F8
    };
    pub const C_OP_DistanceBetweenTransforms = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldOutput: [0x8]u8, // 0x1E0
        m_TransformStart: [0x68]u8, // 0x1E8
        m_TransformEnd: [0x68]u8, // 0x250
        m_flInputMin: [0x178]u8, // 0x2B8
        m_flInputMax: [0x178]u8, // 0x430
        m_flOutputMin: [0x178]u8, // 0x5A8
        m_flOutputMax: [0x178]u8, // 0x720
        m_flMaxTraceLength: [0x4]u8, // 0x898
        m_flLOSScale: [0x4]u8, // 0x89C
        m_CollisionGroupName: [0x80]u8, // 0x8A0
        m_nTraceSet: [0x4]u8, // 0x920
        m_bLOS: [0x4]u8, // 0x924
        m_nSetMethod: [0x8]u8, // 0x928
    };
    pub const C_OP_DecayOffscreen = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flOffscreenTime: [0x178]u8, // 0x1E0
    };
    pub const C_INIT_CreateSequentialPath = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_fMaxDistance: [0x4]u8, // 0x1E8
        m_flNumToAssign: [0x4]u8, // 0x1EC
        m_bLoop: [0x1]u8, // 0x1F0
        m_bCPPairs: [0x1]u8, // 0x1F1
        m_bSaveOffset: [0xE]u8, // 0x1F2
        m_PathParams: [0x40]u8, // 0x200
    };
    pub const C_OP_EndCapTimedDecay = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flDecayTime: [0x178]u8, // 0x1E0
    };
    pub const C_OP_RemapDistanceToLineSegmentBase = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nCP0: [0x4]u8, // 0x1E0
        m_nCP1: [0x4]u8, // 0x1E4
        m_flMinInputValue: [0x4]u8, // 0x1E8
        m_flMaxInputValue: [0x4]u8, // 0x1EC
        m_bInfiniteLine: [0x8]u8, // 0x1F0
    };
    pub const C_OP_ContinuousEmitter = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_flEmissionDuration: [0x178]u8, // 0x1E8
        m_flStartTime: [0x178]u8, // 0x360
        m_flEmitRate: [0x178]u8, // 0x4D8
        m_flEmissionScale: [0x4]u8, // 0x650
        m_flScalePerParentParticle: [0x4]u8, // 0x654
        m_bInitFromKilledParentParticles: [0x4]u8, // 0x658
        m_nEventType: [0x4]u8, // 0x65C
        m_nSnapshotControlPoint: [0x8]u8, // 0x660
        m_strSnapshotSubset: [0x8]u8, // 0x668
        m_nLimitPerUpdate: [0x4]u8, // 0x670
        m_bForceEmitOnFirstUpdate: [0x1]u8, // 0x674
        m_bForceEmitOnLastUpdate: [0xB]u8, // 0x675
    };
    pub const C_OP_OscillateVectorSimple = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_Rate: [0xC]u8, // 0x1E0
        m_Frequency: [0xC]u8, // 0x1EC
        m_nField: [0x4]u8, // 0x1F8
        m_flOscMult: [0x4]u8, // 0x1FC
        m_flOscAdd: [0x4]u8, // 0x200
        m_bOffset: [0x4]u8, // 0x204
    };
    pub const C_INIT_SequenceLifeTime = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_flFramerate: [0x8]u8, // 0x1E8
    };
    pub const C_INIT_MoveBetweenPoints = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_flSpeedMin: [0x178]u8, // 0x1E8
        m_flSpeedMax: [0x178]u8, // 0x360
        m_flEndSpread: [0x178]u8, // 0x4D8
        m_flStartOffset: [0x178]u8, // 0x650
        m_flEndOffset: [0x178]u8, // 0x7C8
        m_nEndControlPointNumber: [0x4]u8, // 0x940
        m_bTrailBias: [0x4]u8, // 0x944
    };
    pub const C_INIT_StatusEffectTf = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_flSFXColorWarpAmount: [0x4]u8, // 0x1E8
        m_flSFXNormalAmount: [0x4]u8, // 0x1EC
        m_flSFXMetalnessAmount: [0x4]u8, // 0x1F0
        m_flSFXRoughnessAmount: [0x4]u8, // 0x1F4
        m_flSFXSelfIllumAmount: [0x4]u8, // 0x1F8
        m_flSFXSScale: [0x4]u8, // 0x1FC
        m_flSFXSScrollX: [0x4]u8, // 0x200
        m_flSFXSScrollY: [0x4]u8, // 0x204
        m_flSFXSScrollZ: [0x4]u8, // 0x208
        m_flSFXSOffsetX: [0x4]u8, // 0x20C
        m_flSFXSOffsetY: [0x4]u8, // 0x210
        m_flSFXSOffsetZ: [0x4]u8, // 0x214
        m_nDetailCombo: [0x4]u8, // 0x218
        m_flSFXSDetailAmount: [0x4]u8, // 0x21C
        m_flSFXSDetailScale: [0x4]u8, // 0x220
        m_flSFXSDetailScrollX: [0x4]u8, // 0x224
        m_flSFXSDetailScrollY: [0x4]u8, // 0x228
        m_flSFXSDetailScrollZ: [0x4]u8, // 0x22C
        m_flSFXSUseModelUVs: [0x4]u8, // 0x230
        m_flSFXEnvMapAmount: [0x4]u8, // 0x234
    };
    pub const C_OP_SetUserEvent = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flInput: [0x178]u8, // 0x1E0
        m_flRisingEdge: [0x178]u8, // 0x358
        m_nRisingEventType: [0x8]u8, // 0x4D0
        m_flFallingEdge: [0x178]u8, // 0x4D8
        m_nFallingEventType: [0x8]u8, // 0x650
    };
    pub const C_OP_QuantizeFloat = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_InputValue: [0x178]u8, // 0x1E0
        m_nOutputField: [0x28]u8, // 0x358
    };
    pub const C_OP_BasicMovement = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_Gravity: [0x6D8]u8, // 0x1E0
        m_fDrag: [0x178]u8, // 0x8B8
        m_massControls: [0x470]u8, // 0xA30
        m_nMaxConstraintPasses: [0x4]u8, // 0xEA0
        m_bUseNewCode: [0x4]u8, // 0xEA4
    };
    pub const C_INIT_RandomNamedModelElement = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_hModel: [0x8]u8, // 0x1E8
        m_names: [0x18]u8, // 0x1F0
        m_bShuffle: [0x1]u8, // 0x208
        m_bLinear: [0x1]u8, // 0x209
        m_bModelFromRenderer: [0x2]u8, // 0x20A
        m_nFieldOutput: [0x4]u8, // 0x20C
    };
    pub const C_INIT_InitFromParentKilled = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nAttributeToCopy: [0x4]u8, // 0x1E8
        m_nEventType: [0x84]u8, // 0x1EC
    };
    pub const C_OP_Callback = extern struct {
        pad_0: [0x230]u8, // 0x0
    };
    pub const CParticleFunction = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_flOpStrength: [0x178]u8, // 0x8
        m_nOpEndCapState: [0x4]u8, // 0x180
        m_nToolsState: [0x4]u8, // 0x184
        m_flOpStartFadeInTime: [0x4]u8, // 0x188
        m_flOpEndFadeInTime: [0x4]u8, // 0x18C
        m_flOpStartFadeOutTime: [0x4]u8, // 0x190
        m_flOpEndFadeOutTime: [0x4]u8, // 0x194
        m_flOpFadeOscillatePeriod: [0x4]u8, // 0x198
        m_bNormalizeToStopTime: [0x4]u8, // 0x19C
        m_flOpTimeOffsetMin: [0x4]u8, // 0x1A0
        m_flOpTimeOffsetMax: [0x4]u8, // 0x1A4
        m_nOpTimeOffsetSeed: [0x4]u8, // 0x1A8
        m_nOpTimeScaleSeed: [0x4]u8, // 0x1AC
        m_flOpTimeScaleMin: [0x4]u8, // 0x1B0
        m_flOpTimeScaleMax: [0x6]u8, // 0x1B4
        m_bDisableOperator: [0x6]u8, // 0x1BA
        m_Notes: [0x20]u8, // 0x1C0
    };
    pub const C_OP_GlobalLight = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flScale: [0x4]u8, // 0x1E0
        m_bClampLowerRange: [0x1]u8, // 0x1E4
        m_bClampUpperRange: [0x3]u8, // 0x1E5
    };
    pub const C_INIT_OffsetVectorToVector = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nFieldInput: [0x4]u8, // 0x1E8
        m_nFieldOutput: [0x4]u8, // 0x1EC
        m_vecOutputMin: [0xC]u8, // 0x1F0
        m_vecOutputMax: [0xC]u8, // 0x1FC
        m_randomnessParameters: [0x8]u8, // 0x208
    };
    pub const C_OP_SetPerChildControlPointFromAttribute = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nChildGroupID: [0x4]u8, // 0x1E0
        m_nFirstControlPoint: [0x4]u8, // 0x1E4
        m_nNumControlPoints: [0x4]u8, // 0x1E8
        m_nParticleIncrement: [0x4]u8, // 0x1EC
        m_nFirstSourcePoint: [0x4]u8, // 0x1F0
        m_bNumBasedOnParticleCount: [0x4]u8, // 0x1F4
        m_nAttributeToRead: [0x4]u8, // 0x1F8
        m_nCPField: [0x4]u8, // 0x1FC
    };
    pub const C_OP_SetParentControlPointsToChildCP = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nChildGroupID: [0x4]u8, // 0x1E8
        m_nChildControlPoint: [0x4]u8, // 0x1EC
        m_nNumControlPoints: [0x4]u8, // 0x1F0
        m_nFirstSourcePoint: [0x4]u8, // 0x1F4
        m_bSetOrientation: [0x8]u8, // 0x1F8
    };
    pub const C_OP_BoxConstraint = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_vecMin: [0x6D8]u8, // 0x1E0
        m_vecMax: [0x6D8]u8, // 0x8B8
        m_nCP: [0x4]u8, // 0xF90
        m_bLocalSpace: [0x1]u8, // 0xF94
        m_bAccountForRadius: [0x3]u8, // 0xF95
    };
    pub const C_INIT_CreatePhyllotaxis = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nControlPointNumber: [0x4]u8, // 0x1E8
        m_nScaleCP: [0x4]u8, // 0x1EC
        m_nComponent: [0x4]u8, // 0x1F0
        m_fRadCentCore: [0x4]u8, // 0x1F4
        m_fRadPerPoint: [0x4]u8, // 0x1F8
        m_fRadPerPointTo: [0x4]u8, // 0x1FC
        m_fpointAngle: [0x4]u8, // 0x200
        m_fsizeOverall: [0x4]u8, // 0x204
        m_fRadBias: [0x4]u8, // 0x208
        m_fMinRad: [0x4]u8, // 0x20C
        m_fDistBias: [0x4]u8, // 0x210
        m_bUseLocalCoords: [0x1]u8, // 0x214
        m_bUseWithContEmit: [0x1]u8, // 0x215
        m_bUseOrigRadius: [0x2]u8, // 0x216
    };
    pub const C_OP_AttractToControlPoint = extern struct {
        pad_0: [0x1F0]u8, // 0x0
        m_vecComponentScale: [0x10]u8, // 0x1F0
        m_fForceAmount: [0x178]u8, // 0x200
        m_fMinimumDistance: [0x178]u8, // 0x378
        m_fFalloffPower: [0x8]u8, // 0x4F0
        m_TransformInput: [0x68]u8, // 0x4F8
        m_fForceAmountMin: [0x178]u8, // 0x560
        m_bApplyMinForce: [0x8]u8, // 0x6D8
    };
    pub const C_INIT_RandomLifeTime = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_fLifetimeMin: [0x4]u8, // 0x1E8
        m_fLifetimeMax: [0x4]u8, // 0x1EC
        m_fLifetimeRandExponent: [0x8]u8, // 0x1F0
    };
    pub const C_INIT_RemapParticleCountToNamedModelSequenceScalar = extern struct {
        pad_0: [0x238]u8, // 0x0
    };
    pub const C_INIT_VelocityRadialRandom = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_bPerParticleCenter: [0x4]u8, // 0x1E8
        m_nControlPointNumber: [0x4]u8, // 0x1EC
        m_vecPosition: [0x6D8]u8, // 0x1F0
        m_vecFwd: [0x6D8]u8, // 0x8C8
        m_fSpeedMin: [0x178]u8, // 0xFA0
        m_fSpeedMax: [0x178]u8, // 0x1118
        m_vecLocalCoordinateSystemSpeedScale: [0xD]u8, // 0x1290
        m_bIgnoreDelta: [0x3]u8, // 0x129D
    };
    pub const C_INIT_RandomRadius = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_flRadiusMin: [0x4]u8, // 0x1E8
        m_flRadiusMax: [0x4]u8, // 0x1EC
        m_flRadiusRandExponent: [0x8]u8, // 0x1F0
    };
    pub const C_OP_Orient2DRelToCP = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flRotOffset: [0x4]u8, // 0x1E0
        m_flSpinStrength: [0x4]u8, // 0x1E4
        m_nCP: [0x4]u8, // 0x1E8
        m_nFieldOutput: [0x4]u8, // 0x1EC
    };
    pub const TextureControls_t = extern struct {
        m_flFinalTextureScaleU: [0x178]u8, // 0x0
        m_flFinalTextureScaleV: [0x178]u8, // 0x178
        m_flFinalTextureOffsetU: [0x178]u8, // 0x2F0
        m_flFinalTextureOffsetV: [0x178]u8, // 0x468
        m_flFinalTextureUVRotation: [0x178]u8, // 0x5E0
        m_flZoomScale: [0x178]u8, // 0x758
        m_flDistortion: [0x178]u8, // 0x8D0
        m_bRandomizeOffsets: [0x1]u8, // 0xA48
        m_bClampUVs: [0x3]u8, // 0xA49
        m_nPerParticleBlend: [0x4]u8, // 0xA4C
        m_nPerParticleScale: [0x4]u8, // 0xA50
        m_nPerParticleOffsetU: [0x4]u8, // 0xA54
        m_nPerParticleOffsetV: [0x4]u8, // 0xA58
        m_nPerParticleRotation: [0x4]u8, // 0xA5C
        m_nPerParticleZoom: [0x4]u8, // 0xA60
        m_nPerParticleDistortion: [0x4]u8, // 0xA64
    };
    pub const ControlPointReference_t = extern struct {
        m_controlPointNameString: [0x4]u8, // 0x0
        m_vOffsetFromControlPoint: [0xC]u8, // 0x4
        m_bOffsetInLocalSpace: [0x4]u8, // 0x10
    };
    pub const C_OP_SetControlPointToVectorExpression = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nExpression: [0x4]u8, // 0x1E8
        m_nOutputCP: [0x4]u8, // 0x1EC
        m_vInput1: [0x6D8]u8, // 0x1F0
        m_vInput2: [0x6D8]u8, // 0x8C8
        m_flLerp: [0x178]u8, // 0xFA0
        m_bNormalizedOutput: [0x8]u8, // 0x1118
    };
    pub const C_OP_LightningSnapshotGenerator = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nCPSnapshot: [0x4]u8, // 0x1E8
        m_nCPStartPnt: [0x4]u8, // 0x1EC
        m_nCPEndPnt: [0x8]u8, // 0x1F0
        m_flSegments: [0x178]u8, // 0x1F8
        m_flOffset: [0x178]u8, // 0x370
        m_flOffsetDecay: [0x178]u8, // 0x4E8
        m_flRecalcRate: [0x178]u8, // 0x660
        m_flUVScale: [0x178]u8, // 0x7D8
        m_flUVOffset: [0x178]u8, // 0x950
        m_flSplitRate: [0x178]u8, // 0xAC8
        m_flRecursionSplitScale: [0x178]u8, // 0xC40
        m_bScaleBranchDistance: [0x8]u8, // 0xDB8
        m_flBranchDistanceScale: [0x178]u8, // 0xDC0
        m_bScaleBranchOffset: [0x8]u8, // 0xF38
        m_flBranchOffsetScale: [0x178]u8, // 0xF40
        m_flBranchTwist: [0x178]u8, // 0x10B8
        m_nBranchBehavior: [0x8]u8, // 0x1230
        m_flRadiusStart: [0x178]u8, // 0x1238
        m_flRadiusEnd: [0x178]u8, // 0x13B0
        m_flDedicatedPool: [0x178]u8, // 0x1528
    };
    pub const C_OP_RemapNamedModelMeshGroupOnceTimed = extern struct {
        pad_0: [0x240]u8, // 0x0
    };
    pub const C_INIT_RemapQAnglesToRotation = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_TransformInput: [0x68]u8, // 0x1E8
    };
    pub const C_INIT_PositionWarp = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_vecWarpMin: [0x6D8]u8, // 0x1E8
        m_vecWarpMax: [0x6D8]u8, // 0x8C0
        m_nScaleControlPointNumber: [0x4]u8, // 0xF98
        m_nControlPointNumber: [0x4]u8, // 0xF9C
        m_nRadiusComponent: [0x4]u8, // 0xFA0
        m_flWarpTime: [0x4]u8, // 0xFA4
        m_flWarpStartTime: [0x4]u8, // 0xFA8
        m_flPrevPosScale: [0x4]u8, // 0xFAC
        m_bInvertWarp: [0x1]u8, // 0xFB0
        m_bUseCount: [0x7]u8, // 0xFB1
    };
    pub const C_OP_SetControlPointFieldToScalarExpression = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nExpression: [0x8]u8, // 0x1E8
        m_flInput1: [0x178]u8, // 0x1F0
        m_flInput2: [0x178]u8, // 0x368
        m_flOutputRemap: [0x178]u8, // 0x4E0
        m_nOutputCP: [0x4]u8, // 0x658
        m_nOutVectorField: [0x4]u8, // 0x65C
        m_flInterpolation: [0x178]u8, // 0x660
    };
    pub const C_OP_CreateParticleSystemRenderer = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_hEffect: [0x8]u8, // 0x230
        m_nEventType: [0x8]u8, // 0x238
        m_vecCPs: [0x10]u8, // 0x240
        m_szParticleConfig: [0x8]u8, // 0x250
        m_AggregationPos: [0x6D8]u8, // 0x258
    };
    pub const CParticleFunctionForce = extern struct {
        pad_0: [0x1F0]u8, // 0x0
    };
    pub const C_INIT_RandomVectorComponent = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_flMin: [0x4]u8, // 0x1E8
        m_flMax: [0x4]u8, // 0x1EC
        m_nFieldOutput: [0x4]u8, // 0x1F0
        m_nComponent: [0x4]u8, // 0x1F4
    };
    pub const C_OP_InheritFromParentParticles = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flScale: [0x4]u8, // 0x1E0
        m_nFieldOutput: [0x4]u8, // 0x1E4
        m_nIncrement: [0x4]u8, // 0x1E8
        m_bRandomDistribution: [0x4]u8, // 0x1EC
    };
    pub const C_INIT_SetVectorAttributeToVectorExpression = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nExpression: [0x8]u8, // 0x1E8
        m_vInput1: [0x6D8]u8, // 0x1F0
        m_vInput2: [0x6D8]u8, // 0x8C8
        m_flLerp: [0x178]u8, // 0xFA0
        m_nOutputField: [0x4]u8, // 0x1118
        m_nSetMethod: [0x4]u8, // 0x111C
        m_bNormalizedOutput: [0x70]u8, // 0x1120
    };
    pub const C_OP_RemapTransformVisibilityToVector = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nSetMethod: [0x8]u8, // 0x1E0
        m_TransformInput: [0x68]u8, // 0x1E8
        m_nFieldOutput: [0x4]u8, // 0x250
        m_flInputMin: [0x4]u8, // 0x254
        m_flInputMax: [0x4]u8, // 0x258
        m_vecOutputMin: [0xC]u8, // 0x25C
        m_vecOutputMax: [0xC]u8, // 0x268
        m_flRadius: [0x4]u8, // 0x274
    };
    pub const C_OP_DirectionBetweenVecsToVec = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldOutput: [0x8]u8, // 0x1E0
        m_vecPoint1: [0x6D8]u8, // 0x1E8
        m_vecPoint2: [0x6D8]u8, // 0x8C0
    };
    pub const C_OP_MovementLoopInsideSphere = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nCP: [0x8]u8, // 0x1E0
        m_flDistance: [0x178]u8, // 0x1E8
        m_vecScale: [0x6D8]u8, // 0x360
        m_nDistSqrAttr: [0x8]u8, // 0xA38
    };
    pub const C_OP_RenderSimpleModelCollection = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_bCenterOffset: [0x8]u8, // 0x230
        m_hModel: [0x8]u8, // 0x238
        m_modelInput: [0x60]u8, // 0x240
        m_fSizeCullScale: [0x178]u8, // 0x2A0
        m_bDisableShadows: [0x1]u8, // 0x418
        m_bDisableMotionBlur: [0x1]u8, // 0x419
        m_bAcceptsDecals: [0x6]u8, // 0x41A
        m_fDrawFilter: [0x178]u8, // 0x420
        m_nAngularVelocityField: [0x18]u8, // 0x598
    };
    pub const C_OP_QuantizeCPComponent = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_flInputValue: [0x178]u8, // 0x1E8
        m_nCPOutput: [0x4]u8, // 0x360
        m_nOutVectorField: [0x4]u8, // 0x364
        m_flQuantizeValue: [0x178]u8, // 0x368
    };
    pub const C_OP_PlayEndCapWhenFinished = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_bFireOnEmissionEnd: [0x1]u8, // 0x1E8
        m_bIncludeChildren: [0x7]u8, // 0x1E9
    };
    pub const C_INIT_InitFloatCollection = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_InputValue: [0x178]u8, // 0x1E8
        m_nOutputField: [0x8]u8, // 0x360
    };
    pub const CPathParameters = extern struct {
        m_nStartControlPointNumber: [0x4]u8, // 0x0
        m_nMidControlPointNumber: [0x4]u8, // 0x4
        m_nEndControlPointNumber: [0x4]u8, // 0x8
        m_nBulgeControl: [0x4]u8, // 0xC
        m_flBulge: [0x4]u8, // 0x10
        m_flMidPoint: [0x4]u8, // 0x14
        m_vStartPointOffset: [0xC]u8, // 0x18
        m_vMidPointOffset: [0xC]u8, // 0x24
        m_vEndOffset: [0x10]u8, // 0x30
    };
    pub const C_OP_RemapScalarEndCap = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldInput: [0x4]u8, // 0x1E0
        m_nFieldOutput: [0x4]u8, // 0x1E4
        m_flInputMin: [0x4]u8, // 0x1E8
        m_flInputMax: [0x4]u8, // 0x1EC
        m_flOutputMin: [0x4]u8, // 0x1F0
        m_flOutputMax: [0x4]u8, // 0x1F4
    };
    pub const C_INIT_CreateFromPlaneCache = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_vecOffsetMin: [0xC]u8, // 0x1E8
        m_vecOffsetMax: [0xD]u8, // 0x1F4
        m_bUseNormal: [0x7]u8, // 0x201
    };
    pub const C_OP_LazyCullCompareFloat = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flComparsion1: [0x178]u8, // 0x1E0
        m_flComparsion2: [0x178]u8, // 0x358
        m_flCullTime: [0x178]u8, // 0x4D0
    };
    pub const C_OP_ControlPointToRadialScreenSpace = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nCPIn: [0x4]u8, // 0x1E8
        m_vecCP1Pos: [0xC]u8, // 0x1EC
        m_nCPOut: [0x4]u8, // 0x1F8
        m_nCPOutField: [0x4]u8, // 0x1FC
        m_nCPSSPosOut: [0x8]u8, // 0x200
    };
    pub const C_OP_SpinUpdate = extern struct {
        pad_0: [0x1E0]u8, // 0x0
    };
    pub const C_INIT_NormalOffset = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_OffsetMin: [0xC]u8, // 0x1E8
        m_OffsetMax: [0xC]u8, // 0x1F4
        m_nControlPointNumber: [0x4]u8, // 0x200
        m_bLocalCoords: [0x1]u8, // 0x204
        m_bNormalize: [0x3]u8, // 0x205
    };
    pub const C_OP_RemapDistanceToLineSegmentToVector = extern struct {
        pad_0: [0x1F8]u8, // 0x0
        m_nFieldOutput: [0x4]u8, // 0x1F8
        m_vMinOutputValue: [0xC]u8, // 0x1FC
        m_vMaxOutputValue: [0x10]u8, // 0x208
    };
    pub const C_OP_RenderAsModels = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_ModelList: [0x1C]u8, // 0x230
        m_flModelScale: [0x4]u8, // 0x24C
        m_bFitToModelSize: [0x1]u8, // 0x250
        m_bNonUniformScaling: [0x3]u8, // 0x251
        m_nXAxisScalingAttribute: [0x4]u8, // 0x254
        m_nYAxisScalingAttribute: [0x4]u8, // 0x258
        m_nZAxisScalingAttribute: [0x4]u8, // 0x25C
        m_nSizeCullBloat: [0x8]u8, // 0x260
    };
    pub const C_INIT_CreationNoise = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nFieldOutput: [0x4]u8, // 0x1E8
        m_bAbsVal: [0x1]u8, // 0x1EC
        m_bAbsValInv: [0x3]u8, // 0x1ED
        m_flOffset: [0x4]u8, // 0x1F0
        m_flOutputMin: [0x4]u8, // 0x1F4
        m_flOutputMax: [0x4]u8, // 0x1F8
        m_flNoiseScale: [0x4]u8, // 0x1FC
        m_flNoiseScaleLoc: [0x4]u8, // 0x200
        m_vecOffsetLoc: [0xC]u8, // 0x204
        m_flWorldTimeScale: [0x8]u8, // 0x210
    };
    pub const C_OP_Spin = extern struct {
        pad_0: [0x1F8]u8, // 0x0
    };
    pub const C_OP_GameLiquidSpill = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_flLiquidContentsField: [0x178]u8, // 0x230
        m_flExpirationTime: [0x178]u8, // 0x3A8
        m_flRadius: [0x178]u8, // 0x520
        m_bCheckExposedToSky: [0x4]u8, // 0x698
        m_nAmountAttribute: [0x4]u8, // 0x69C
    };
    pub const C_OP_InstantaneousEmitter = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nParticlesToEmit: [0x178]u8, // 0x1E8
        m_flStartTime: [0x178]u8, // 0x360
        m_flInitFromKilledParentParticles: [0x4]u8, // 0x4D8
        m_nEventType: [0x4]u8, // 0x4DC
        m_flParentParticleScale: [0x178]u8, // 0x4E0
        m_nMaxEmittedPerFrame: [0x4]u8, // 0x658
        m_nSnapshotControlPoint: [0x4]u8, // 0x65C
        m_strSnapshotSubset: [0x8]u8, // 0x660
    };
    pub const C_OP_ConstrainLineLength = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flMinDistance: [0x4]u8, // 0x1E0
        m_flMaxDistance: [0x4]u8, // 0x1E4
    };
    pub const C_INIT_LifespanFromVelocity = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_vecComponentScale: [0xC]u8, // 0x1E8
        m_flTraceOffset: [0x4]u8, // 0x1F4
        m_flMaxTraceLength: [0x4]u8, // 0x1F8
        m_flTraceTolerance: [0x4]u8, // 0x1FC
        m_nMaxPlanes: [0x8]u8, // 0x200
        m_CollisionGroupName: [0x80]u8, // 0x208
        m_nTraceSet: [0x10]u8, // 0x288
        m_bIncludeWater: [0x8]u8, // 0x298
    };
    pub const CBaseTrailRenderer = extern struct {
        pad_0: [0x2ED8]u8, // 0x0
        m_nOrientationType: [0x4]u8, // 0x2ED8
        m_nOrientationControlPoint: [0x4]u8, // 0x2EDC
        m_flMinSize: [0x4]u8, // 0x2EE0
        m_flMaxSize: [0x4]u8, // 0x2EE4
        m_flStartFadeSize: [0x178]u8, // 0x2EE8
        m_flEndFadeSize: [0x178]u8, // 0x3060
        m_flSubPixelAAScale: [0x178]u8, // 0x31D8
        m_bClampV: [0x8]u8, // 0x3350
    };
    pub const C_INIT_VelocityFromCP = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_velocityInput: [0x6D8]u8, // 0x1E8
        m_transformInput: [0x68]u8, // 0x8C0
        m_flVelocityScale: [0x4]u8, // 0x928
        m_bDirectionOnly: [0x4]u8, // 0x92C
    };
    pub const C_OP_SetControlPointOrientation = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_bUseWorldLocation: [0x2]u8, // 0x1E8
        m_bRandomize: [0x1]u8, // 0x1EA
        m_bSetOnce: [0x1]u8, // 0x1EB
        m_nCP: [0x4]u8, // 0x1EC
        m_nHeadLocation: [0x4]u8, // 0x1F0
        m_vecRotation: [0xC]u8, // 0x1F4
        m_vecRotationB: [0x10]u8, // 0x200
        m_flInterpolation: [0x178]u8, // 0x210
    };
    pub const C_OP_MovementSkinnedPositionFromCPSnapshot = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nSnapshotControlPointNumber: [0x4]u8, // 0x1E0
        m_nControlPointNumber: [0x4]u8, // 0x1E4
        m_bRandom: [0x4]u8, // 0x1E8
        m_nRandomSeed: [0x4]u8, // 0x1EC
        m_bSetNormal: [0x1]u8, // 0x1F0
        m_bSetRadius: [0x3]u8, // 0x1F1
        m_nIndexType: [0x4]u8, // 0x1F4
        m_flReadIndex: [0x178]u8, // 0x1F8
        m_flIncrement: [0x178]u8, // 0x370
        m_nFullLoopIncrement: [0x178]u8, // 0x4E8
        m_nSnapShotStartPoint: [0x178]u8, // 0x660
        m_flInterpolation: [0x178]u8, // 0x7D8
    };
    pub const C_OP_MultiSegmentDisplaySnapshotGenerator = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nCPSnapshot: [0x4]u8, // 0x1E8
        m_nSegCount: [0x4]u8, // 0x1EC
        m_nInputType: [0x8]u8, // 0x1F0
        m_strDefaultString: [0x8]u8, // 0x1F8
        m_flValue: [0x178]u8, // 0x200
        m_flScollOffset: [0x178]u8, // 0x378
        m_SpecialCharList: [0x18]u8, // 0x4F0
        m_vecColorUnlit: [0x6D8]u8, // 0x508
        m_vecColorLit: [0x6D8]u8, // 0xBE0
        m_flRadius: [0x178]u8, // 0x12B8
        m_flSpacing: [0x178]u8, // 0x1430
        m_flMinCount: [0x178]u8, // 0x15A8
        m_flMaxCount: [0x178]u8, // 0x1720
        m_bPrependEmpty: [0x8]u8, // 0x1898
        m_flDigitsAfterDecimal: [0x178]u8, // 0x18A0
    };
    pub const C_OP_OscillateVector = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_RateMin: [0xC]u8, // 0x1E0
        m_RateMax: [0xC]u8, // 0x1EC
        m_FrequencyMin: [0xC]u8, // 0x1F8
        m_FrequencyMax: [0xC]u8, // 0x204
        m_nField: [0x4]u8, // 0x210
        m_bProportional: [0x1]u8, // 0x214
        m_bProportionalOp: [0x1]u8, // 0x215
        m_bOffset: [0x2]u8, // 0x216
        m_flStartTime_min: [0x4]u8, // 0x218
        m_flStartTime_max: [0x4]u8, // 0x21C
        m_flEndTime_min: [0x4]u8, // 0x220
        m_flEndTime_max: [0x4]u8, // 0x224
        m_flOscMult: [0x178]u8, // 0x228
        m_flOscAdd: [0x178]u8, // 0x3A0
        m_flRateScale: [0x178]u8, // 0x518
    };
    pub const C_OP_PositionLock = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_TransformInput: [0x68]u8, // 0x1E0
        m_flStartTime_min: [0x4]u8, // 0x248
        m_flStartTime_max: [0x4]u8, // 0x24C
        m_flStartTime_exp: [0x4]u8, // 0x250
        m_flEndTime_min: [0x4]u8, // 0x254
        m_flEndTime_max: [0x4]u8, // 0x258
        m_flEndTime_exp: [0x4]u8, // 0x25C
        m_flRange: [0x8]u8, // 0x260
        m_flRangeBias: [0x178]u8, // 0x268
        m_flJumpThreshold: [0x4]u8, // 0x3E0
        m_flPrevPosScale: [0x4]u8, // 0x3E4
        m_bLockRot: [0x8]u8, // 0x3E8
        m_vecScale: [0x6D8]u8, // 0x3F0
        m_nFieldOutput: [0x4]u8, // 0xAC8
        m_nFieldOutputPrev: [0x4]u8, // 0xACC
    };
    pub const C_OP_RenderVRHapticEvent = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_nHand: [0x4]u8, // 0x230
        m_nOutputHandCP: [0x4]u8, // 0x234
        m_nOutputField: [0x8]u8, // 0x238
        m_flAmplitude: [0x178]u8, // 0x240
    };
    pub const C_OP_SetControlPointToImpactPoint = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nCPOut: [0x4]u8, // 0x1E8
        m_nCPIn: [0x4]u8, // 0x1EC
        m_flUpdateRate: [0x8]u8, // 0x1F0
        m_flTraceLength: [0x178]u8, // 0x1F8
        m_flStartOffset: [0x4]u8, // 0x370
        m_flOffset: [0x4]u8, // 0x374
        m_vecTraceDir: [0xC]u8, // 0x378
        m_CollisionGroupName: [0x80]u8, // 0x384
        m_nTraceSet: [0x4]u8, // 0x404
        m_bSetToEndpoint: [0x1]u8, // 0x408
        m_bTraceToClosestSurface: [0x1]u8, // 0x409
        m_bIncludeWater: [0x6]u8, // 0x40A
    };
    pub const C_OP_InterpolateRadius = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flStartTime: [0x4]u8, // 0x1E0
        m_flEndTime: [0x4]u8, // 0x1E4
        m_flStartScale: [0x4]u8, // 0x1E8
        m_flEndScale: [0x4]u8, // 0x1EC
        m_bEaseInAndOut: [0x4]u8, // 0x1F0
        m_flBias: [0x3C]u8, // 0x1F4
    };
    pub const C_OP_ReinitializeScalarEndCap = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldOutput: [0x4]u8, // 0x1E0
        m_flOutputMin: [0x4]u8, // 0x1E4
        m_flOutputMax: [0x8]u8, // 0x1E8
    };
    pub const C_OP_TurbulenceForce = extern struct {
        pad_0: [0x1F0]u8, // 0x0
        m_flNoiseCoordScale0: [0x4]u8, // 0x1F0
        m_flNoiseCoordScale1: [0x4]u8, // 0x1F4
        m_flNoiseCoordScale2: [0x4]u8, // 0x1F8
        m_flNoiseCoordScale3: [0x4]u8, // 0x1FC
        m_vecNoiseAmount0: [0xC]u8, // 0x200
        m_vecNoiseAmount1: [0xC]u8, // 0x20C
        m_vecNoiseAmount2: [0xC]u8, // 0x218
        m_vecNoiseAmount3: [0xC]u8, // 0x224
    };
    pub const C_OP_RemapNamedModelElementOnceTimed = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_hModel: [0x8]u8, // 0x1E0
        m_inNames: [0x18]u8, // 0x1E8
        m_outNames: [0x18]u8, // 0x200
        m_fallbackNames: [0x18]u8, // 0x218
        m_bModelFromRenderer: [0x1]u8, // 0x230
        m_bProportional: [0x3]u8, // 0x231
        m_nFieldInput: [0x4]u8, // 0x234
        m_nFieldOutput: [0x4]u8, // 0x238
        m_flRemapTime: [0x4]u8, // 0x23C
    };
    pub const C_OP_SetControlPointToPlayer = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nCP1: [0x4]u8, // 0x1E8
        m_vecCP1Pos: [0xC]u8, // 0x1EC
        m_bOrientToEyes: [0x4]u8, // 0x1F8
        m_nPosition: [0x4]u8, // 0x1FC
        m_nRadiusCP: [0x4]u8, // 0x200
        m_nRadiusCPField: [0x4]u8, // 0x204
    };
    pub const C_OP_EndCapTimedFreeze = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flFreezeTime: [0x178]u8, // 0x1E0
    };
    pub const C_OP_RenderGpuImplicit = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_bUsePerParticleRadius: [0x4]u8, // 0x230
        m_nVertexCountKb: [0x4]u8, // 0x234
        m_nIndexCountKb: [0x8]u8, // 0x238
        m_fGridSize: [0x178]u8, // 0x240
        m_fRadiusScale: [0x178]u8, // 0x3B8
        m_fIsosurfaceThreshold: [0x178]u8, // 0x530
        m_nScaleCP: [0x8]u8, // 0x6A8
        m_hMaterial: [0x8]u8, // 0x6B0
    };
    pub const C_OP_SetRandomControlPointPosition = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_bUseWorldLocation: [0x1]u8, // 0x1E8
        m_bOrient: [0x3]u8, // 0x1E9
        m_nCP1: [0x4]u8, // 0x1EC
        m_nHeadLocation: [0x8]u8, // 0x1F0
        m_flReRandomRate: [0x178]u8, // 0x1F8
        m_vecCPMinPos: [0xC]u8, // 0x370
        m_vecCPMaxPos: [0xC]u8, // 0x37C
        m_flInterpolation: [0x178]u8, // 0x388
    };
    pub const C_OP_RenderVolumetricEmitter = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_strChannelType: [0x8]u8, // 0x230
        m_nType: [0x4]u8, // 0x238
        m_nCreationType: [0x4]u8, // 0x23C
        m_nEventType: [0x8]u8, // 0x240
        m_vecPos: [0x6D8]u8, // 0x248
        m_vecVelocity: [0x6D8]u8, // 0x920
        m_vPrevPosition: [0x6D8]u8, // 0xFF8
        m_flSpeed: [0x178]u8, // 0x16D0
        m_flRadius: [0x178]u8, // 0x1848
        m_flDensity: [0x178]u8, // 0x19C0
        m_flTemperature: [0x178]u8, // 0x1B38
        m_flMagnitude: [0x178]u8, // 0x1CB0
        m_flKillRadius: [0x178]u8, // 0x1E28
        m_flKillDensityScale: [0x178]u8, // 0x1FA0
        m_flFalloff: [0x178]u8, // 0x2118
    };
    pub const C_OP_RemapTransformVisibilityToScalar = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nSetMethod: [0x8]u8, // 0x1E0
        m_TransformInput: [0x68]u8, // 0x1E8
        m_nFieldOutput: [0x4]u8, // 0x250
        m_flInputMin: [0x4]u8, // 0x254
        m_flInputMax: [0x4]u8, // 0x258
        m_flOutputMin: [0x4]u8, // 0x25C
        m_flOutputMax: [0x4]u8, // 0x260
        m_flRadius: [0x4]u8, // 0x264
    };
    pub const C_OP_RemapControlPointDirectionToVector = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldOutput: [0x4]u8, // 0x1E0
        m_flScale: [0x4]u8, // 0x1E4
        m_nControlPointNumber: [0x8]u8, // 0x1E8
    };
    pub const C_OP_ScreenSpacePositionOfTarget = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_vecTargetPosition: [0x6D8]u8, // 0x1E0
        m_bOututBehindness: [0x4]u8, // 0x8B8
        m_nBehindFieldOutput: [0x4]u8, // 0x8BC
        m_flBehindOutputRemap: [0x178]u8, // 0x8C0
        m_nBehindSetMethod: [0x8]u8, // 0xA38
    };
    pub const CParticleFunctionOperator = extern struct {
        pad_0: [0x1E0]u8, // 0x0
    };
    pub const C_OP_DragRelativeToPlane = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flDragAtPlane: [0x178]u8, // 0x1E0
        m_flFalloff: [0x178]u8, // 0x358
        m_bDirectional: [0x8]u8, // 0x4D0
        m_vecPlaneNormal: [0x6D8]u8, // 0x4D8
        m_nControlPointNumber: [0x8]u8, // 0xBB0
    };
    pub const C_OP_SetCPtoVector = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nCPInput: [0x4]u8, // 0x1E0
        m_nFieldOutput: [0x4]u8, // 0x1E4
    };
    pub const C_INIT_RandomYaw = extern struct {
        pad_0: [0x208]u8, // 0x0
    };
    pub const C_OP_SnapshotRigidSkinToBones = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_bTransformNormals: [0x1]u8, // 0x1E0
        m_bTransformRadii: [0x3]u8, // 0x1E1
        m_nControlPointNumber: [0x4]u8, // 0x1E4
    };
    pub const C_OP_SetSingleControlPointPosition = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_bSetOnce: [0x4]u8, // 0x1E8
        m_nCP1: [0x4]u8, // 0x1EC
        m_vecCP1Pos: [0x6D8]u8, // 0x1F0
        m_transformInput: [0x68]u8, // 0x8C8
    };
    pub const C_INIT_DistanceToNeighborCull = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_flDistance: [0x178]u8, // 0x1E8
        m_bIncludeRadii: [0x8]u8, // 0x360
        m_flLifespanOverlap: [0x178]u8, // 0x368
        m_nFieldModify: [0x8]u8, // 0x4E0
        m_flModify: [0x178]u8, // 0x4E8
        m_nSetMethod: [0x4]u8, // 0x660
        m_bUseNeighbor: [0x4]u8, // 0x664
    };
    pub const C_OP_RemapCPtoScalar = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nCPInput: [0x4]u8, // 0x1E0
        m_nFieldOutput: [0x4]u8, // 0x1E4
        m_nField: [0x4]u8, // 0x1E8
        m_flInputMin: [0x4]u8, // 0x1EC
        m_flInputMax: [0x4]u8, // 0x1F0
        m_flOutputMin: [0x4]u8, // 0x1F4
        m_flOutputMax: [0x4]u8, // 0x1F8
        m_flStartTime: [0x4]u8, // 0x1FC
        m_flEndTime: [0x4]u8, // 0x200
        m_flInterpRate: [0x4]u8, // 0x204
        m_nSetMethod: [0x8]u8, // 0x208
    };
    pub const CParticleFunctionRenderer = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        VisibilityInputs: [0x48]u8, // 0x1E0
        m_bCannotBeRefracted: [0x8]u8, // 0x228
    };
    pub const CParticleSystemDefinition = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_nBehaviorVersion: [0x8]u8, // 0x8
        m_PreEmissionOperators: [0x18]u8, // 0x10
        m_Emitters: [0x18]u8, // 0x28
        m_Initializers: [0x18]u8, // 0x40
        m_Operators: [0x18]u8, // 0x58
        m_ForceGenerators: [0x18]u8, // 0x70
        m_Constraints: [0x18]u8, // 0x88
        m_Renderers: [0x18]u8, // 0xA0
        m_Children: [0xC0]u8, // 0xB8
        m_nFirstMultipleOverride_BackwardCompat: [0xE0]u8, // 0x178
        m_nInitialParticles: [0x4]u8, // 0x258
        m_nMaxParticles: [0x4]u8, // 0x25C
        m_nGroupID: [0x4]u8, // 0x260
        m_BoundingBoxMin: [0xC]u8, // 0x264
        m_BoundingBoxMax: [0xC]u8, // 0x270
        m_flDepthSortBias: [0x4]u8, // 0x27C
        m_nSortOverridePositionCP: [0x4]u8, // 0x280
        m_bInfiniteBounds: [0x1]u8, // 0x284
        m_bEnableNamedValues: [0x3]u8, // 0x285
        m_NamedValueDomain: [0x8]u8, // 0x288
        m_NamedValueLocals: [0x18]u8, // 0x290
        m_ConstantColor: [0x4]u8, // 0x2A8
        m_ConstantNormal: [0xC]u8, // 0x2AC
        m_flConstantRadius: [0x4]u8, // 0x2B8
        m_flConstantRotation: [0x4]u8, // 0x2BC
        m_flConstantRotationSpeed: [0x4]u8, // 0x2C0
        m_flConstantLifespan: [0x4]u8, // 0x2C4
        m_nConstantSequenceNumber: [0x4]u8, // 0x2C8
        m_nConstantSequenceNumber1: [0x4]u8, // 0x2CC
        m_nSnapshotControlPoint: [0x8]u8, // 0x2D0
        m_hSnapshot: [0x8]u8, // 0x2D8
        m_pszCullReplacementName: [0x8]u8, // 0x2E0
        m_flCullRadius: [0x4]u8, // 0x2E8
        m_flCullFillCost: [0x4]u8, // 0x2EC
        m_nCullControlPoint: [0x8]u8, // 0x2F0
        m_hFallback: [0x8]u8, // 0x2F8
        m_nFallbackMaxCount: [0x8]u8, // 0x300
        m_hLowViolenceDef: [0x8]u8, // 0x308
        m_hReferenceReplacement: [0x8]u8, // 0x310
        m_flPreSimulationTime: [0x4]u8, // 0x318
        m_flStopSimulationAfterTime: [0x4]u8, // 0x31C
        m_flMaximumTimeStep: [0x4]u8, // 0x320
        m_flMaximumSimTime: [0x4]u8, // 0x324
        m_flMinimumSimTime: [0x4]u8, // 0x328
        m_flMinimumTimeStep: [0x4]u8, // 0x32C
        m_nMinimumFrames: [0x4]u8, // 0x330
        m_bIsGPUParticleSystem: [0x4]u8, // 0x334
        m_nMinCPULevel: [0x4]u8, // 0x338
        m_nMinGPULevel: [0x4]u8, // 0x33C
        m_flNoDrawTimeToGoToSleep: [0x4]u8, // 0x340
        m_flMaxDrawDistance: [0x4]u8, // 0x344
        m_flStartFadeDistance: [0x4]u8, // 0x348
        m_flMaxCreationDistance: [0x4]u8, // 0x34C
        m_nAggregationMinAvailableParticles: [0x4]u8, // 0x350
        m_flAggregateRadius: [0x4]u8, // 0x354
        m_bShouldBatch: [0x1]u8, // 0x358
        m_bShouldHitboxesFallbackToRenderBounds: [0x1]u8, // 0x359
        m_bShouldHitboxesFallbackToSnapshot: [0x1]u8, // 0x35A
        m_bShouldHitboxesFallbackToCollisionHulls: [0x1]u8, // 0x35B
        m_nViewModelEffect: [0x4]u8, // 0x35C
        m_bScreenSpaceEffect: [0x8]u8, // 0x360
        m_pszTargetLayerID: [0x8]u8, // 0x368
        m_nSkipRenderControlPoint: [0x4]u8, // 0x370
        m_nAllowRenderControlPoint: [0x4]u8, // 0x374
        m_bShouldSort: [0x48]u8, // 0x378
        m_controlPointConfigurations: [0x1D0]u8, // 0x3C0
    };
    pub const C_OP_RemapNamedModelMeshGroupEndCap = extern struct {
        pad_0: [0x240]u8, // 0x0
    };
    pub const C_OP_PercentageBetweenTransformsVector = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldOutput: [0x4]u8, // 0x1E0
        m_flInputMin: [0x4]u8, // 0x1E4
        m_flInputMax: [0x4]u8, // 0x1E8
        m_vecOutputMin: [0xC]u8, // 0x1EC
        m_vecOutputMax: [0x10]u8, // 0x1F8
        m_TransformStart: [0x68]u8, // 0x208
        m_TransformEnd: [0x68]u8, // 0x270
        m_nSetMethod: [0x4]u8, // 0x2D8
        m_bActiveRange: [0x1]u8, // 0x2DC
        m_bRadialCheck: [0x3]u8, // 0x2DD
    };
    pub const C_OP_RenderScreenVelocityRotate = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_flRotateRateDegrees: [0x4]u8, // 0x230
        m_flForwardDegrees: [0x4]u8, // 0x234
    };
    pub const C_OP_UpdateLightSource = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_vColorTint: [0x4]u8, // 0x1E0
        m_flBrightnessScale: [0x4]u8, // 0x1E4
        m_flRadiusScale: [0x4]u8, // 0x1E8
        m_flMinimumLightingRadius: [0x4]u8, // 0x1EC
        m_flMaximumLightingRadius: [0x4]u8, // 0x1F0
        m_flPositionDampingConstant: [0x4]u8, // 0x1F4
    };
    pub const C_INIT_CreateWithinBox = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_vecMin: [0x6D8]u8, // 0x1E8
        m_vecMax: [0x6D8]u8, // 0x8C0
        m_nControlPointNumber: [0x4]u8, // 0xF98
        m_bLocalSpace: [0x4]u8, // 0xF9C
        m_randomnessParameters: [0x8]u8, // 0xFA0
        m_bUseNewCode: [0x8]u8, // 0xFA8
    };
    pub const C_OP_ChooseRandomChildrenInGroup = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nChildGroupID: [0x8]u8, // 0x1E8
        m_flNumberOfChildren: [0x178]u8, // 0x1F0
    };
    pub const C_OP_ControlpointLight = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flScale: [0x490]u8, // 0x1E0
        m_nControlPoint1: [0x4]u8, // 0x670
        m_nControlPoint2: [0x4]u8, // 0x674
        m_nControlPoint3: [0x4]u8, // 0x678
        m_nControlPoint4: [0x4]u8, // 0x67C
        m_vecCPOffset1: [0xC]u8, // 0x680
        m_vecCPOffset2: [0xC]u8, // 0x68C
        m_vecCPOffset3: [0xC]u8, // 0x698
        m_vecCPOffset4: [0xC]u8, // 0x6A4
        m_LightFiftyDist1: [0x4]u8, // 0x6B0
        m_LightZeroDist1: [0x4]u8, // 0x6B4
        m_LightFiftyDist2: [0x4]u8, // 0x6B8
        m_LightZeroDist2: [0x4]u8, // 0x6BC
        m_LightFiftyDist3: [0x4]u8, // 0x6C0
        m_LightZeroDist3: [0x4]u8, // 0x6C4
        m_LightFiftyDist4: [0x4]u8, // 0x6C8
        m_LightZeroDist4: [0x4]u8, // 0x6CC
        m_LightColor1: [0x4]u8, // 0x6D0
        m_LightColor2: [0x4]u8, // 0x6D4
        m_LightColor3: [0x4]u8, // 0x6D8
        m_LightColor4: [0x4]u8, // 0x6DC
        m_bLightType1: [0x1]u8, // 0x6E0
        m_bLightType2: [0x1]u8, // 0x6E1
        m_bLightType3: [0x1]u8, // 0x6E2
        m_bLightType4: [0x1]u8, // 0x6E3
        m_bLightDynamic1: [0x1]u8, // 0x6E4
        m_bLightDynamic2: [0x1]u8, // 0x6E5
        m_bLightDynamic3: [0x1]u8, // 0x6E6
        m_bLightDynamic4: [0x1]u8, // 0x6E7
        m_bUseNormal: [0x1]u8, // 0x6E8
        m_bUseHLambert: [0x5]u8, // 0x6E9
        m_bClampLowerRange: [0x1]u8, // 0x6EE
        m_bClampUpperRange: [0x1]u8, // 0x6EF
    };
    pub const C_OP_VectorFieldSnapshot = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nControlPointNumber: [0x4]u8, // 0x1E0
        m_nAttributeToWrite: [0x4]u8, // 0x1E4
        m_nLocalSpaceCP: [0x8]u8, // 0x1E8
        m_flInterpolation: [0x178]u8, // 0x1F0
        m_vecScale: [0x6D8]u8, // 0x368
        m_flBoundaryDampening: [0x4]u8, // 0xA40
        m_bSetVelocity: [0x1]u8, // 0xA44
        m_bLockToSurface: [0x3]u8, // 0xA45
        m_flGridSpacing: [0x8]u8, // 0xA48
    };
    pub const C_OP_CylindricalDistanceToTransform = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldOutput: [0x8]u8, // 0x1E0
        m_flInputMin: [0x178]u8, // 0x1E8
        m_flInputMax: [0x178]u8, // 0x360
        m_flOutputMin: [0x178]u8, // 0x4D8
        m_flOutputMax: [0x178]u8, // 0x650
        m_TransformStart: [0x68]u8, // 0x7C8
        m_TransformEnd: [0x68]u8, // 0x830
        m_nSetMethod: [0x4]u8, // 0x898
        m_bActiveRange: [0x1]u8, // 0x89C
        m_bAdditive: [0x1]u8, // 0x89D
        m_bCapsule: [0x2]u8, // 0x89E
    };
    pub const C_INIT_PositionPlaceOnGround = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_flOffset: [0x178]u8, // 0x1E8
        m_flMaxTraceLength: [0x178]u8, // 0x360
        m_vecTraceDir: [0x6D8]u8, // 0x4D8
        m_CollisionGroupName: [0x80]u8, // 0xBB0
        m_nTraceSet: [0x10]u8, // 0xC30
        m_nTraceMissBehavior: [0x4]u8, // 0xC40
        m_bIncludeWater: [0x4]u8, // 0xC44
        m_nAttribute: [0x4]u8, // 0xC48
        m_bSetPXYZOnly: [0x1]u8, // 0xC4C
        m_bSetNormal: [0x3]u8, // 0xC4D
        m_nGroundNormalAttribute: [0x4]u8, // 0xC50
        m_bOffsetonColOnly: [0x4]u8, // 0xC54
        m_flOffsetByRadiusFactor: [0x4]u8, // 0xC58
        m_nPreserveOffsetCP: [0x4]u8, // 0xC5C
        m_nIgnoreCP: [0x8]u8, // 0xC60
    };
    pub const C_INIT_RandomScalar = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_flMin: [0x4]u8, // 0x1E8
        m_flMax: [0x4]u8, // 0x1EC
        m_flExponent: [0x4]u8, // 0x1F0
        m_nFieldOutput: [0x4]u8, // 0x1F4
    };
    pub const C_OP_RenderPostProcessing = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_flPostProcessStrength: [0x178]u8, // 0x230
        m_hPostTexture: [0x8]u8, // 0x3A8
        m_nPriority: [0x8]u8, // 0x3B0
    };
    pub const C_OP_WorldTraceConstraint = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nCP: [0x4]u8, // 0x1E0
        m_vecCpOffset: [0xC]u8, // 0x1E4
        m_nCollisionMode: [0x4]u8, // 0x1F0
        m_nCollisionModeMin: [0x4]u8, // 0x1F4
        m_nTraceSet: [0x4]u8, // 0x1F8
        m_CollisionGroupName: [0x80]u8, // 0x1FC
        m_bWorldOnly: [0x1]u8, // 0x27C
        m_bBrushOnly: [0x1]u8, // 0x27D
        m_bIncludeWater: [0x2]u8, // 0x27E
        m_nIgnoreCP: [0x4]u8, // 0x280
        m_flCpMovementTolerance: [0x4]u8, // 0x284
        m_flRetestRate: [0x4]u8, // 0x288
        m_flTraceTolerance: [0x4]u8, // 0x28C
        m_flCollisionConfirmationSpeed: [0x4]u8, // 0x290
        m_nMaxTracesPerFrame: [0x4]u8, // 0x294
        m_flRadiusScale: [0x178]u8, // 0x298
        m_flBounceAmount: [0x178]u8, // 0x410
        m_flSlideAmount: [0x178]u8, // 0x588
        m_flRandomDirScale: [0x178]u8, // 0x700
        m_bDecayBounce: [0x1]u8, // 0x878
        m_bKillonContact: [0x3]u8, // 0x879
        m_flMinSpeed: [0x4]u8, // 0x87C
        m_bKillonContactBounce: [0x1]u8, // 0x880
        m_bSetNormal: [0x3]u8, // 0x881
        m_nStickOnCollisionField: [0x4]u8, // 0x884
        m_flStopSpeed: [0x178]u8, // 0x888
        m_nEntityStickDataField: [0x4]u8, // 0xA00
        m_nEntityStickNormalField: [0x4]u8, // 0xA04
    };
    pub const C_OP_RenderBlobs = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_cubeWidth: [0x178]u8, // 0x230
        m_cutoffRadius: [0x178]u8, // 0x3A8
        m_renderRadius: [0x178]u8, // 0x520
        m_nVertexCountKb: [0x4]u8, // 0x698
        m_nIndexCountKb: [0x4]u8, // 0x69C
        m_nScaleCP: [0x8]u8, // 0x6A0
        m_MaterialVars: [0x30]u8, // 0x6A8
        m_hMaterial: [0x8]u8, // 0x6D8
    };
    pub const C_OP_OscillateScalar = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_RateMin: [0x4]u8, // 0x1E0
        m_RateMax: [0x4]u8, // 0x1E4
        m_FrequencyMin: [0x4]u8, // 0x1E8
        m_FrequencyMax: [0x4]u8, // 0x1EC
        m_nField: [0x4]u8, // 0x1F0
        m_bProportional: [0x1]u8, // 0x1F4
        m_bProportionalOp: [0x3]u8, // 0x1F5
        m_flStartTime_min: [0x4]u8, // 0x1F8
        m_flStartTime_max: [0x4]u8, // 0x1FC
        m_flEndTime_min: [0x4]u8, // 0x200
        m_flEndTime_max: [0x4]u8, // 0x204
        m_flOscMult: [0x4]u8, // 0x208
        m_flOscAdd: [0x4]u8, // 0x20C
    };
    pub const C_OP_FadeOut = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flFadeOutTimeMin: [0x4]u8, // 0x1E0
        m_flFadeOutTimeMax: [0x4]u8, // 0x1E4
        m_flFadeOutTimeExp: [0x4]u8, // 0x1E8
        m_flFadeBias: [0x34]u8, // 0x1EC
        m_bProportional: [0x1]u8, // 0x220
        m_bEaseInAndOut: [0xF]u8, // 0x221
    };
    pub const C_OP_WaterImpulseRenderer = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_vecPos: [0x6D8]u8, // 0x230
        m_flRadius: [0x178]u8, // 0x908
        m_flMagnitude: [0x178]u8, // 0xA80
        m_flShape: [0x178]u8, // 0xBF8
        m_flWindSpeed: [0x178]u8, // 0xD70
        m_flWobble: [0x178]u8, // 0xEE8
        m_bIsRadialWind: [0x4]u8, // 0x1060
        m_nEventType: [0x4]u8, // 0x1064
    };
    pub const C_INIT_RandomSequence = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nSequenceMin: [0x4]u8, // 0x1E8
        m_nSequenceMax: [0x4]u8, // 0x1EC
        m_bShuffle: [0x1]u8, // 0x1F0
        m_bLinear: [0x7]u8, // 0x1F1
        m_WeightedList: [0x38]u8, // 0x1F8
    };
    pub const C_OP_RampScalarSplineSimple = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_Rate: [0x4]u8, // 0x1E0
        m_flStartTime: [0x4]u8, // 0x1E4
        m_flEndTime: [0x28]u8, // 0x1E8
        m_nField: [0x4]u8, // 0x210
        m_bEaseOut: [0xC]u8, // 0x214
    };
    pub const C_INIT_DistanceCull = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nControlPoint: [0x8]u8, // 0x1E8
        m_flDistance: [0x178]u8, // 0x1F0
        m_bCullInside: [0x8]u8, // 0x368
    };
    pub const C_OP_CollideWithParentParticles = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flParentRadiusScale: [0x178]u8, // 0x1E0
        m_flRadiusScale: [0x178]u8, // 0x358
    };
    pub const C_INIT_InitFromVectorFieldSnapshot = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nControlPointNumber: [0x4]u8, // 0x1E8
        m_nLocalSpaceCP: [0x4]u8, // 0x1EC
        m_nWeightUpdateCP: [0x4]u8, // 0x1F0
        m_bUseVerticalVelocity: [0x4]u8, // 0x1F4
        m_vecScale: [0x6D8]u8, // 0x1F8
    };
    pub const C_OP_SetVectorAttributeToVectorExpression = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nExpression: [0x8]u8, // 0x1E0
        m_vInput1: [0x6D8]u8, // 0x1E8
        m_vInput2: [0x6D8]u8, // 0x8C0
        m_flLerp: [0x178]u8, // 0xF98
        m_nOutputField: [0x4]u8, // 0x1110
        m_nSetMethod: [0x4]u8, // 0x1114
        m_bNormalizedOutput: [0x68]u8, // 0x1118
    };
    pub const C_INIT_AddVectorToVector = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_vecScale: [0xC]u8, // 0x1E8
        m_nFieldOutput: [0x4]u8, // 0x1F4
        m_nFieldInput: [0x4]u8, // 0x1F8
        m_vOffsetMin: [0xC]u8, // 0x1FC
        m_vOffsetMax: [0xC]u8, // 0x208
        m_randomnessParameters: [0xC]u8, // 0x214
    };
    pub const C_INIT_RemapInitialVisibilityScalar = extern struct {
        pad_0: [0x1EC]u8, // 0x0
        m_nFieldOutput: [0x4]u8, // 0x1EC
        m_flInputMin: [0x4]u8, // 0x1F0
        m_flInputMax: [0x4]u8, // 0x1F4
        m_flOutputMin: [0x4]u8, // 0x1F8
        m_flOutputMax: [0x4]u8, // 0x1FC
    };
    pub const C_OP_RemapTransformOrientationToYaw = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_TransformInput: [0x68]u8, // 0x1E0
        m_nFieldOutput: [0x4]u8, // 0x248
        m_flRotOffset: [0x4]u8, // 0x24C
        m_flSpinStrength: [0x8]u8, // 0x250
    };
    pub const C_OP_RenderStatusEffect = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_pTextureColorWarp: [0x8]u8, // 0x230
        m_pTextureDetail2: [0x8]u8, // 0x238
        m_pTextureDiffuseWarp: [0x8]u8, // 0x240
        m_pTextureFresnelColorWarp: [0x8]u8, // 0x248
        m_pTextureFresnelWarp: [0x8]u8, // 0x250
        m_pTextureSpecularWarp: [0x8]u8, // 0x258
        m_pTextureEnvMap: [0x8]u8, // 0x260
    };
    pub const C_OP_RandomForce = extern struct {
        pad_0: [0x1F0]u8, // 0x0
        m_MinForce: [0xC]u8, // 0x1F0
        m_MaxForce: [0xC]u8, // 0x1FC
    };
    pub const C_OP_RemapParticleCountOnScalarEndCap = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldOutput: [0x4]u8, // 0x1E0
        m_nInputMin: [0x4]u8, // 0x1E4
        m_nInputMax: [0x4]u8, // 0x1E8
        m_flOutputMin: [0x4]u8, // 0x1EC
        m_flOutputMax: [0x4]u8, // 0x1F0
        m_bBackwards: [0x4]u8, // 0x1F4
        m_nSetMethod: [0x8]u8, // 0x1F8
    };
    pub const ParticlePreviewState_t = extern struct {
        m_previewModel: [0x8]u8, // 0x0
        m_nModSpecificData: [0x4]u8, // 0x8
        m_groundType: [0x4]u8, // 0xC
        m_sequenceName: [0x8]u8, // 0x10
        m_nFireParticleOnSequenceFrame: [0x8]u8, // 0x18
        m_hitboxSetName: [0x8]u8, // 0x20
        m_materialGroupName: [0x8]u8, // 0x28
        m_vecBodyGroups: [0x18]u8, // 0x30
        m_flPlaybackSpeed: [0x4]u8, // 0x48
        m_flParticleSimulationRate: [0x4]u8, // 0x4C
        m_bShouldDrawHitboxes: [0x1]u8, // 0x50
        m_bShouldDrawAttachments: [0x1]u8, // 0x51
        m_bShouldDrawAttachmentNames: [0x1]u8, // 0x52
        m_bShouldDrawControlPointAxes: [0x1]u8, // 0x53
        m_bAnimationNonLooping: [0x1]u8, // 0x54
        m_bSequenceNameIsAnimClipPath: [0x3]u8, // 0x55
        m_vecPreviewGravity: [0xC]u8, // 0x58
        m_vecPreviewWind: [0xC]u8, // 0x64
    };
    pub const C_OP_LocalAccelerationForce = extern struct {
        pad_0: [0x1F0]u8, // 0x0
        m_nCP: [0x4]u8, // 0x1F0
        m_nScaleCP: [0x4]u8, // 0x1F4
        m_vecAccel: [0x6D8]u8, // 0x1F8
    };
    pub const C_OP_ModelCull = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nControlPointNumber: [0x4]u8, // 0x1E0
        m_bBoundBox: [0x1]u8, // 0x1E4
        m_bCullOutside: [0x1]u8, // 0x1E5
        m_bUseBones: [0x1]u8, // 0x1E6
        m_HitboxSetName: [0x81]u8, // 0x1E7
    };
    pub const C_OP_SetFloat = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_InputValue: [0x178]u8, // 0x1E0
        m_nOutputField: [0x4]u8, // 0x358
        m_nSetMethod: [0x4]u8, // 0x35C
        m_Lerp: [0x1B0]u8, // 0x360
    };
    pub const C_INIT_RemapTransformToVector = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nFieldOutput: [0x4]u8, // 0x1E8
        m_vInputMin: [0xC]u8, // 0x1EC
        m_vInputMax: [0xC]u8, // 0x1F8
        m_vOutputMin: [0xC]u8, // 0x204
        m_vOutputMax: [0x10]u8, // 0x210
        m_TransformInput: [0x68]u8, // 0x220
        m_LocalSpaceTransform: [0x68]u8, // 0x288
        m_flStartTime: [0x4]u8, // 0x2F0
        m_flEndTime: [0x4]u8, // 0x2F4
        m_nSetMethod: [0x4]u8, // 0x2F8
        m_bOffset: [0x1]u8, // 0x2FC
        m_bAccelerate: [0x3]u8, // 0x2FD
        m_flRemapBias: [0x8]u8, // 0x300
    };
    pub const C_OP_ScreenSpaceDistanceToEdge = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldOutput: [0x8]u8, // 0x1E0
        m_flMaxDistFromEdge: [0x178]u8, // 0x1E8
        m_flOutputRemap: [0x178]u8, // 0x360
        m_nSetMethod: [0x28]u8, // 0x4D8
    };
    pub const C_OP_RenderStatusEffectTf = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_pTextureColorWarp: [0x8]u8, // 0x230
        m_pTextureNormal: [0x8]u8, // 0x238
        m_pTextureMetalness: [0x8]u8, // 0x240
        m_pTextureRoughness: [0x8]u8, // 0x248
        m_pTextureSelfIllum: [0x8]u8, // 0x250
        m_pTextureDetail: [0x8]u8, // 0x258
        m_pTextureEnvMap: [0x8]u8, // 0x260
    };
    pub const C_OP_RemapDistanceToLineSegmentToScalar = extern struct {
        pad_0: [0x1F8]u8, // 0x0
        m_nFieldOutput: [0x4]u8, // 0x1F8
        m_flMinOutputValue: [0x4]u8, // 0x1FC
        m_flMaxOutputValue: [0x8]u8, // 0x200
    };
    pub const C_OP_RemapVectortoCP = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nOutControlPointNumber: [0x4]u8, // 0x1E0
        m_nFieldInput: [0x4]u8, // 0x1E4
        m_nParticleNumber: [0x8]u8, // 0x1E8
    };
    pub const C_OP_SetFromCPSnapshot = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nControlPointNumber: [0x8]u8, // 0x1E0
        m_strSnapshotSubset: [0x8]u8, // 0x1E8
        m_nAttributeToRead: [0x4]u8, // 0x1F0
        m_nAttributeToWrite: [0x4]u8, // 0x1F4
        m_nLocalSpaceCP: [0x4]u8, // 0x1F8
        m_bRandom: [0x1]u8, // 0x1FC
        m_bReverse: [0x3]u8, // 0x1FD
        m_nRandomSeed: [0x8]u8, // 0x200
        m_nSnapShotStartPoint: [0x178]u8, // 0x208
        m_nSnapShotIncrement: [0x178]u8, // 0x380
        m_flInterpolation: [0x178]u8, // 0x4F8
        m_bSubSample: [0x1]u8, // 0x670
        m_bPrev: [0x7]u8, // 0x671
    };
    pub const C_OP_DistanceBetweenCPsToCP = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nStartCP: [0x4]u8, // 0x1E8
        m_nEndCP: [0x4]u8, // 0x1EC
        m_nOutputCP: [0x4]u8, // 0x1F0
        m_nOutputCPField: [0x4]u8, // 0x1F4
        m_bSetOnce: [0x4]u8, // 0x1F8
        m_flInputMin: [0x4]u8, // 0x1FC
        m_flInputMax: [0x4]u8, // 0x200
        m_flOutputMin: [0x4]u8, // 0x204
        m_flOutputMax: [0x4]u8, // 0x208
        m_flMaxTraceLength: [0x4]u8, // 0x20C
        m_flLOSScale: [0x4]u8, // 0x210
        m_bLOS: [0x1]u8, // 0x214
        m_CollisionGroupName: [0x83]u8, // 0x215
        m_nTraceSet: [0x4]u8, // 0x298
        m_nSetParent: [0x4]u8, // 0x29C
    };
    pub const C_OP_SetControlPointToHand = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nCP1: [0x4]u8, // 0x1E8
        m_nHand: [0x4]u8, // 0x1EC
        m_vecCP1Pos: [0xC]u8, // 0x1F0
        m_bOrientToHand: [0x4]u8, // 0x1FC
    };
    pub const C_OP_ConstrainDistanceToPath = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_fMinDistance: [0x4]u8, // 0x1E0
        m_flMaxDistance0: [0x4]u8, // 0x1E4
        m_flMaxDistanceMid: [0x4]u8, // 0x1E8
        m_flMaxDistance1: [0x4]u8, // 0x1EC
        m_PathParameters: [0x40]u8, // 0x1F0
        m_flTravelTime: [0x4]u8, // 0x230
        m_nFieldScale: [0x4]u8, // 0x234
        m_nManualTField: [0x8]u8, // 0x238
    };
    pub const C_OP_DistanceCull = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nControlPoint: [0x4]u8, // 0x1E0
        m_vecPointOffset: [0xC]u8, // 0x1E4
        m_flDistance: [0x178]u8, // 0x1F0
        m_bCullInside: [0x4]u8, // 0x368
        m_nAttribute: [0x4]u8, // 0x36C
    };
    pub const C_INIT_CreateAlongPath = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_fMaxDistance: [0x178]u8, // 0x1E8
        m_fT: [0x180]u8, // 0x360
        m_PathParams: [0x40]u8, // 0x4E0
        m_bUseRandomCPs: [0x4]u8, // 0x520
        m_vEndOffset: [0xC]u8, // 0x524
        m_bSaveOffset: [0x10]u8, // 0x530
    };
    pub const C_OP_GameDecalRenderer = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_sDecalGroupName: [0x8]u8, // 0x230
        m_nEventType: [0x8]u8, // 0x238
        m_nInteractionMask: [0x8]u8, // 0x240
        m_nCollisionGroup: [0x8]u8, // 0x248
        m_vecStartPos: [0x6D8]u8, // 0x250
        m_vecEndPos: [0x6D8]u8, // 0x928
        m_flTraceBloat: [0x178]u8, // 0x1000
        m_flDecalSize: [0x178]u8, // 0x1178
        m_nDecalGroupIndex: [0x178]u8, // 0x12F0
        m_flDecalRotation: [0x178]u8, // 0x1468
        m_vModulationColor: [0x6D8]u8, // 0x15E0
        m_bUseGameDefaultDecalSize: [0x1]u8, // 0x1CB8
        m_bRandomDecalRotation: [0x1]u8, // 0x1CB9
        m_bRandomlySelectDecalInGroup: [0x1]u8, // 0x1CBA
        m_bNoDecalsOnOwner: [0x1]u8, // 0x1CBB
        m_bVisualizeTraces: [0x4]u8, // 0x1CBC
    };
    pub const C_OP_SetControlPointsToModelParticles = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_HitboxSetName: [0x80]u8, // 0x1E0
        m_AttachmentName: [0x80]u8, // 0x260
        m_nFirstControlPoint: [0x4]u8, // 0x2E0
        m_nNumControlPoints: [0x4]u8, // 0x2E4
        m_nFirstSourcePoint: [0x4]u8, // 0x2E8
        m_bSkin: [0x1]u8, // 0x2EC
        m_bAttachment: [0x3]u8, // 0x2ED
    };
    pub const C_OP_ColorInterpolateRandom = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_ColorFadeMin: [0x1C]u8, // 0x1E0
        m_ColorFadeMax: [0x10]u8, // 0x1FC
        m_flFadeStartTime: [0x4]u8, // 0x20C
        m_flFadeEndTime: [0x4]u8, // 0x210
        m_nFieldOutput: [0x4]u8, // 0x214
        m_bEaseInOut: [0x8]u8, // 0x218
    };
    pub const C_INIT_RemapNamedModelSequenceToScalar = extern struct {
        pad_0: [0x230]u8, // 0x0
    };
    pub const C_OP_RenderLights = extern struct {
        pad_0: [0x238]u8, // 0x0
        m_flAnimationRate: [0x4]u8, // 0x238
        m_nAnimationType: [0x4]u8, // 0x23C
        m_bAnimateInFPS: [0x4]u8, // 0x240
        m_flMinSize: [0x4]u8, // 0x244
        m_flMaxSize: [0x4]u8, // 0x248
        m_flStartFadeSize: [0x4]u8, // 0x24C
        m_flEndFadeSize: [0x8]u8, // 0x250
    };
    pub const C_OP_DecayClampCount = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nCount: [0x178]u8, // 0x1E0
    };
    pub const CRandomNumberGeneratorParameters = extern struct {
        m_bDistributeEvenly: [0x4]u8, // 0x0
        m_nSeed: [0x4]u8, // 0x4
    };
    pub const C_INIT_ColorLitPerParticle = extern struct {
        pad_0: [0x200]u8, // 0x0
        m_ColorMin: [0x4]u8, // 0x200
        m_ColorMax: [0x4]u8, // 0x204
        m_TintMin: [0x4]u8, // 0x208
        m_TintMax: [0x4]u8, // 0x20C
        m_flTintPerc: [0x4]u8, // 0x210
        m_nTintBlendMode: [0x4]u8, // 0x214
        m_flLightAmplification: [0x8]u8, // 0x218
    };
    pub const C_OP_RenderPoints = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_hMaterial: [0x8]u8, // 0x230
    };
    pub const C_INIT_SetAttributeToScalarExpression = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nExpression: [0x8]u8, // 0x1E8
        m_flInput1: [0x178]u8, // 0x1F0
        m_flInput2: [0x178]u8, // 0x368
        m_flOutputRemap: [0x178]u8, // 0x4E0
        m_nOutputField: [0x4]u8, // 0x658
        m_nSetMethod: [0x24]u8, // 0x65C
    };
    pub const C_INIT_CreateOnGrid = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nXCount: [0x178]u8, // 0x1E8
        m_nYCount: [0x178]u8, // 0x360
        m_nZCount: [0x178]u8, // 0x4D8
        m_nXSpacing: [0x178]u8, // 0x650
        m_nYSpacing: [0x178]u8, // 0x7C8
        m_nZSpacing: [0x178]u8, // 0x940
        m_nControlPointNumber: [0x4]u8, // 0xAB8
        m_bLocalSpace: [0x1]u8, // 0xABC
        m_bCenter: [0x1]u8, // 0xABD
        m_bHollow: [0x2]u8, // 0xABE
    };
    pub const C_OP_RampCPLinearRandom = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nOutControlPointNumber: [0x4]u8, // 0x1E8
        m_vecRateMin: [0xC]u8, // 0x1EC
        m_vecRateMax: [0x10]u8, // 0x1F8
    };
    pub const C_OP_VelocityMatchingForce = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flDirScale: [0x4]u8, // 0x1E0
        m_flSpdScale: [0x4]u8, // 0x1E4
        m_flNeighborDistance: [0x4]u8, // 0x1E8
        m_flFacingStrength: [0x4]u8, // 0x1EC
        m_bUseAABB: [0x4]u8, // 0x1F0
        m_nCPBroadcast: [0x4]u8, // 0x1F4
    };
    pub const C_INIT_RandomAlphaWindowThreshold = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_flMin: [0x4]u8, // 0x1E8
        m_flMax: [0x4]u8, // 0x1EC
        m_flExponent: [0x8]u8, // 0x1F0
    };
    pub const C_INIT_CreateOnModelAtHeight = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_bUseBones: [0x1]u8, // 0x1E8
        m_bForceZ: [0x3]u8, // 0x1E9
        m_nControlPointNumber: [0x4]u8, // 0x1EC
        m_nHeightCP: [0x4]u8, // 0x1F0
        m_bUseWaterHeight: [0x4]u8, // 0x1F4
        m_flDesiredHeight: [0x178]u8, // 0x1F8
        m_vecHitBoxScale: [0x6D8]u8, // 0x370
        m_vecDirectionBias: [0x6D8]u8, // 0xA48
        m_nBiasType: [0x4]u8, // 0x1120
        m_bLocalCoords: [0x1]u8, // 0x1124
        m_bPreferMovingBoxes: [0x1]u8, // 0x1125
        m_HitboxSetName: [0x82]u8, // 0x1126
        m_flHitboxVelocityScale: [0x178]u8, // 0x11A8
        m_flMaxBoneVelocity: [0x178]u8, // 0x1320
    };
    pub const C_OP_ModelSurfaceSnapshotGenerator = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nCPSnapshot: [0x8]u8, // 0x1E8
        m_modelInput: [0x60]u8, // 0x1F0
        m_flRecalcRate: [0x178]u8, // 0x250
        m_flUSpacing: [0x178]u8, // 0x3C8
        m_flVSpacing: [0x178]u8, // 0x540
        m_flSurfaceOffset: [0x178]u8, // 0x6B8
        m_bSetNormal: [0x1]u8, // 0x830
        m_bSetUp: [0x1]u8, // 0x831
        m_bSetGravity: [0x1]u8, // 0x832
        m_bSetUV: [0x5]u8, // 0x833
    };
    pub const C_OP_RestartAfterDuration = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flDurationMin: [0x4]u8, // 0x1E0
        m_flDurationMax: [0x4]u8, // 0x1E4
        m_nCP: [0x4]u8, // 0x1E8
        m_nCPField: [0x4]u8, // 0x1EC
        m_nChildGroupID: [0x4]u8, // 0x1F0
        m_bOnlyChildren: [0x4]u8, // 0x1F4
    };
    pub const C_OP_RenderClothForce = extern struct {
        pad_0: [0x230]u8, // 0x0
    };
    pub const C_OP_RemapVisibilityScalar = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldInput: [0x4]u8, // 0x1E0
        m_nFieldOutput: [0x4]u8, // 0x1E4
        m_flInputMin: [0x4]u8, // 0x1E8
        m_flInputMax: [0x4]u8, // 0x1EC
        m_flOutputMin: [0x4]u8, // 0x1F0
        m_flOutputMax: [0x4]u8, // 0x1F4
        m_flRadiusScale: [0x8]u8, // 0x1F8
    };
    pub const C_INIT_CreateSequentialPathV2 = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_fMaxDistance: [0x178]u8, // 0x1E8
        m_flNumToAssign: [0x178]u8, // 0x360
        m_bLoop: [0x1]u8, // 0x4D8
        m_bCPPairs: [0x1]u8, // 0x4D9
        m_bSaveOffset: [0x6]u8, // 0x4DA
        m_PathParams: [0x50]u8, // 0x4E0
    };
    pub const VecInputMaterialVariable_t = extern struct {
        m_strVariable: [0x8]u8, // 0x0
        m_vecInput: [0x6D8]u8, // 0x8
    };
    pub const C_INIT_RemapInitialDirectionToTransformToVector = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_TransformInput: [0x68]u8, // 0x1E8
        m_nFieldOutput: [0x4]u8, // 0x250
        m_flScale: [0x4]u8, // 0x254
        m_flOffsetRot: [0x4]u8, // 0x258
        m_vecOffsetAxis: [0xC]u8, // 0x25C
        m_bNormalize: [0x8]u8, // 0x268
    };
    pub const C_OP_LockToSavedSequentialPathV2 = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flFadeStart: [0x4]u8, // 0x1E0
        m_flFadeEnd: [0x4]u8, // 0x1E4
        m_bCPPairs: [0x8]u8, // 0x1E8
        m_PathParams: [0x40]u8, // 0x1F0
    };
    pub const C_OP_NormalLock = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nControlPointNumber: [0x8]u8, // 0x1E0
    };
    pub const C_INIT_RemapTransformOrientationToRotations = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_TransformInput: [0x68]u8, // 0x1E8
        m_vecRotation: [0xC]u8, // 0x250
        m_bUseQuat: [0x1]u8, // 0x25C
        m_bWriteNormal: [0x3]u8, // 0x25D
    };
    pub const C_OP_Cull = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flCullPerc: [0x4]u8, // 0x1E0
        m_flCullStart: [0x4]u8, // 0x1E4
        m_flCullEnd: [0x4]u8, // 0x1E8
        m_flCullExp: [0x4]u8, // 0x1EC
    };
    pub const C_INIT_RandomYawFlip = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_flPercent: [0x8]u8, // 0x1E8
    };
    pub const SequenceWeightedList_t = extern struct {
        m_nSequence: [0x4]u8, // 0x0
        m_flRelativeWeight: [0x4]u8, // 0x4
    };
    pub const C_OP_ReadFromNeighboringParticle = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldInput: [0x4]u8, // 0x1E0
        m_nFieldOutput: [0x4]u8, // 0x1E4
        m_nIncrement: [0x8]u8, // 0x1E8
        m_DistanceCheck: [0x178]u8, // 0x1F0
        m_flInterpolation: [0x178]u8, // 0x368
    };
    pub const C_OP_RenderText = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_OutlineColor: [0x8]u8, // 0x230
        m_DefaultText: [0x8]u8, // 0x238
    };
    pub const C_OP_LerpToInitialPosition = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nControlPointNumber: [0x8]u8, // 0x1E0
        m_flInterpolation: [0x178]u8, // 0x1E8
        m_nCacheField: [0x8]u8, // 0x360
        m_flScale: [0x178]u8, // 0x368
        m_vecScale: [0x6D8]u8, // 0x4E0
    };
    pub const C_INIT_RandomRotation = extern struct {
        pad_0: [0x208]u8, // 0x0
    };
    pub const C_OP_LerpEndCapVector = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldOutput: [0x4]u8, // 0x1E0
        m_vecOutput: [0xC]u8, // 0x1E4
        m_flLerpTime: [0x8]u8, // 0x1F0
    };
    pub const C_OP_VelocityDecay = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flMinVelocity: [0x8]u8, // 0x1E0
    };
    pub const C_OP_SetCPOrientationToPointAtCP = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nInputCP: [0x4]u8, // 0x1E8
        m_nOutputCP: [0x4]u8, // 0x1EC
        m_flInterpolation: [0x178]u8, // 0x1F0
        m_b2DOrientation: [0x1]u8, // 0x368
        m_bAvoidSingularity: [0x1]u8, // 0x369
        m_bPointAway: [0x6]u8, // 0x36A
    };
    pub const C_OP_LockToPointList = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldOutput: [0x8]u8, // 0x1E0
        m_pointList: [0x18]u8, // 0x1E8
        m_bPlaceAlongPath: [0x1]u8, // 0x200
        m_bClosedLoop: [0x3]u8, // 0x201
        m_nNumPointsAlongPath: [0x4]u8, // 0x204
    };
    pub const C_INIT_CreateWithinCone = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_TransformInput: [0x68]u8, // 0x1E8
        m_flInnerAngle: [0x178]u8, // 0x250
        m_flOuterAngle: [0x178]u8, // 0x3C8
        m_flSpeed: [0x178]u8, // 0x540
        m_flOffset: [0x178]u8, // 0x6B8
        m_bCollapseOffset: [0x4]u8, // 0x830
        m_randomnessParameters: [0xC]u8, // 0x834
    };
    pub const C_OP_MovementPlaceOnGround = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flOffset: [0x178]u8, // 0x1E0
        m_flMaxTraceLength: [0x4]u8, // 0x358
        m_flTolerance: [0x4]u8, // 0x35C
        m_vecTraceDir: [0x6D8]u8, // 0x360
        m_flTraceOffset: [0x4]u8, // 0xA38
        m_flLerpRate: [0x4]u8, // 0xA3C
        m_CollisionGroupName: [0x80]u8, // 0xA40
        m_nTraceSet: [0x4]u8, // 0xAC0
        m_nRefCP1: [0x4]u8, // 0xAC4
        m_nRefCP2: [0x4]u8, // 0xAC8
        m_nLerpCP: [0xC]u8, // 0xACC
        m_nTraceMissBehavior: [0x4]u8, // 0xAD8
        m_bIncludeShotHull: [0x1]u8, // 0xADC
        m_bIncludeWater: [0x3]u8, // 0xADD
        m_bSetNormal: [0x1]u8, // 0xAE0
        m_bScaleOffset: [0x3]u8, // 0xAE1
        m_nPreserveOffsetCP: [0x4]u8, // 0xAE4
        m_nIgnoreCP: [0x8]u8, // 0xAE8
    };
    pub const C_OP_SetCPOrientationToDirection = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nInputControlPoint: [0x4]u8, // 0x1E0
        m_nOutputControlPoint: [0x4]u8, // 0x1E4
    };
    pub const C_OP_RemapCrossProductOfTwoVectorsToVector = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_InputVec1: [0x6D8]u8, // 0x1E0
        m_InputVec2: [0x6D8]u8, // 0x8B8
        m_nFieldOutput: [0x4]u8, // 0xF90
        m_bNormalize: [0x4]u8, // 0xF94
    };
    pub const C_OP_RemapTransformOrientationToRotations = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_TransformInput: [0x68]u8, // 0x1E0
        m_vecRotation: [0xC]u8, // 0x248
        m_bUseQuat: [0x1]u8, // 0x254
        m_bWriteNormal: [0x3]u8, // 0x255
    };
    pub const C_INIT_RandomRotationSpeed = extern struct {
        pad_0: [0x208]u8, // 0x0
    };
    pub const C_OP_InheritFromParentParticlesV2 = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flScale: [0x178]u8, // 0x1E0
        m_nFieldOutput: [0x8]u8, // 0x358
        m_nIncrement: [0x178]u8, // 0x360
        m_bSubSample: [0x1]u8, // 0x4D8
        m_bRandomDistribution: [0x1]u8, // 0x4D9
        m_bReverse: [0x2]u8, // 0x4DA
        m_nMissingParentBehavior: [0x4]u8, // 0x4DC
        m_flInterpolation: [0x178]u8, // 0x4E0
    };
    pub const C_INIT_RandomSecondSequence = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nSequenceMin: [0x4]u8, // 0x1E8
        m_nSequenceMax: [0x4]u8, // 0x1EC
    };
    pub const C_OP_SetFloatCollection = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_InputValue: [0x178]u8, // 0x1E0
        m_nOutputField: [0x4]u8, // 0x358
        m_nSetMethod: [0x4]u8, // 0x35C
        m_Lerp: [0x1A0]u8, // 0x360
    };
    pub const PointDefinition_t = extern struct {
        m_nControlPoint: [0x4]u8, // 0x0
        m_bLocalCoords: [0x4]u8, // 0x4
        m_vOffset: [0xC]u8, // 0x8
    };
    pub const C_OP_SetControlPointPositionToRandomActiveCP = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nCP1: [0x4]u8, // 0x1E8
        m_nHeadLocationMin: [0x4]u8, // 0x1EC
        m_nHeadLocationMax: [0x8]u8, // 0x1F0
        m_flResetRate: [0x178]u8, // 0x1F8
    };
    pub const C_OP_Diffusion = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flRadiusScale: [0x4]u8, // 0x1E0
        m_nFieldOutput: [0x4]u8, // 0x1E4
        m_nVoxelGridResolution: [0x8]u8, // 0x1E8
    };
    pub const C_INIT_AgeNoise = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_bAbsVal: [0x1]u8, // 0x1E8
        m_bAbsValInv: [0x3]u8, // 0x1E9
        m_flOffset: [0x4]u8, // 0x1EC
        m_flAgeMin: [0x4]u8, // 0x1F0
        m_flAgeMax: [0x4]u8, // 0x1F4
        m_flNoiseScale: [0x4]u8, // 0x1F8
        m_flNoiseScaleLoc: [0x4]u8, // 0x1FC
        m_vecOffsetLoc: [0x10]u8, // 0x200
    };
    pub const C_OP_RemapVectorComponentToScalar = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldInput: [0x4]u8, // 0x1E0
        m_nFieldOutput: [0x4]u8, // 0x1E4
        m_nComponent: [0x8]u8, // 0x1E8
    };
    pub const CGeneralRandomRotation = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nFieldOutput: [0x4]u8, // 0x1E8
        m_flDegrees: [0x4]u8, // 0x1EC
        m_flDegreesMin: [0x4]u8, // 0x1F0
        m_flDegreesMax: [0x4]u8, // 0x1F4
        m_flRotationRandExponent: [0x4]u8, // 0x1F8
        m_bRandomlyFlipDirection: [0xC]u8, // 0x1FC
    };
    pub const C_OP_DistanceBetweenVecs = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldOutput: [0x8]u8, // 0x1E0
        m_vecPoint1: [0x6D8]u8, // 0x1E8
        m_vecPoint2: [0x6D8]u8, // 0x8C0
        m_flInputMin: [0x178]u8, // 0xF98
        m_flInputMax: [0x178]u8, // 0x1110
        m_flOutputMin: [0x178]u8, // 0x1288
        m_flOutputMax: [0x178]u8, // 0x1400
        m_nSetMethod: [0x4]u8, // 0x1578
        m_bDeltaTime: [0x4]u8, // 0x157C
    };
    pub const C_OP_DampenToCP = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nControlPointNumber: [0x4]u8, // 0x1E0
        m_flRange: [0x4]u8, // 0x1E4
        m_flScale: [0x8]u8, // 0x1E8
    };
    pub const C_OP_CalculateVectorAttribute = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_vStartValue: [0xC]u8, // 0x1E0
        m_nFieldInput1: [0x4]u8, // 0x1EC
        m_flInputScale1: [0x4]u8, // 0x1F0
        m_nFieldInput2: [0x4]u8, // 0x1F4
        m_flInputScale2: [0x4]u8, // 0x1F8
        m_nControlPointInput1: [0x14]u8, // 0x1FC
        m_flControlPointScale1: [0x4]u8, // 0x210
        m_nControlPointInput2: [0x14]u8, // 0x214
        m_flControlPointScale2: [0x4]u8, // 0x228
        m_nFieldOutput: [0x4]u8, // 0x22C
        m_vFinalOutputScale: [0x10]u8, // 0x230
    };
    pub const C_OP_LockToBone = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_modelInput: [0x60]u8, // 0x1E0
        m_transformInput: [0x68]u8, // 0x240
        m_flLifeTimeFadeStart: [0x4]u8, // 0x2A8
        m_flLifeTimeFadeEnd: [0x4]u8, // 0x2AC
        m_flJumpThreshold: [0x4]u8, // 0x2B0
        m_flPrevPosScale: [0x4]u8, // 0x2B4
        m_HitboxSetName: [0x80]u8, // 0x2B8
        m_bRigid: [0x1]u8, // 0x338
        m_bUseBones: [0x3]u8, // 0x339
        m_nFieldOutput: [0x4]u8, // 0x33C
        m_nFieldOutputPrev: [0x4]u8, // 0x340
        m_nRotationSetType: [0x4]u8, // 0x344
        m_bRigidRotationLock: [0x8]u8, // 0x348
        m_vecRotation: [0x6D8]u8, // 0x350
        m_flRotLerp: [0x178]u8, // 0xA28
    };
    pub const C_OP_RemapNamedModelBodyPartOnceTimed = extern struct {
        pad_0: [0x240]u8, // 0x0
    };
    pub const C_OP_ScreenSpaceRotateTowardTarget = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_vecTargetPosition: [0x6D8]u8, // 0x1E0
        m_flOutputRemap: [0x178]u8, // 0x8B8
        m_nSetMethod: [0x8]u8, // 0xA30
        m_flScreenEdgeAlignmentDistance: [0x178]u8, // 0xA38
    };
    pub const C_OP_MovementMaintainOffset = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_vecOffset: [0xC]u8, // 0x1E0
        m_nCP: [0x4]u8, // 0x1EC
        m_bRadiusScale: [0x8]u8, // 0x1F0
    };
    pub const C_INIT_CreateWithinCapsuleTransform = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_fRadiusMin: [0x178]u8, // 0x1E8
        m_fRadiusMax: [0x178]u8, // 0x360
        m_fHeight: [0x178]u8, // 0x4D8
        m_TransformInput: [0x68]u8, // 0x650
        m_fSpeedMin: [0x178]u8, // 0x6B8
        m_fSpeedMax: [0x178]u8, // 0x830
        m_fSpeedRandExp: [0x8]u8, // 0x9A8
        m_LocalCoordinateSystemSpeedMin: [0x6D8]u8, // 0x9B0
        m_LocalCoordinateSystemSpeedMax: [0x6D8]u8, // 0x1088
        m_nFieldOutput: [0x4]u8, // 0x1760
        m_nFieldVelocity: [0x4]u8, // 0x1764
    };
    pub const C_OP_SetVec = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_InputValue: [0x6D8]u8, // 0x1E0
        m_nOutputField: [0x4]u8, // 0x8B8
        m_nSetMethod: [0x4]u8, // 0x8BC
        m_Lerp: [0x178]u8, // 0x8C0
        m_bNormalizedOutput: [0x8]u8, // 0xA38
    };
    pub const C_INIT_CreateFromParentParticles = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_flVelocityScale: [0x4]u8, // 0x1E8
        m_flIncrement: [0x4]u8, // 0x1EC
        m_bRandomDistribution: [0x4]u8, // 0x1F0
        m_nRandomSeed: [0x4]u8, // 0x1F4
        m_bSubFrame: [0x1]u8, // 0x1F8
        m_bSetRopeSegmentID: [0x7]u8, // 0x1F9
    };
    pub const C_INIT_CheckParticleForWater = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_flRadius: [0x178]u8, // 0x1E8
        m_nFieldOutput: [0x8]u8, // 0x360
        m_flOutputRemap: [0x178]u8, // 0x368
        m_nSetMethod: [0x8]u8, // 0x4E0
    };
    pub const C_INIT_RandomNamedModelBodyPart = extern struct {
        pad_0: [0x210]u8, // 0x0
    };
    pub const C_OP_RenderOmni2Light = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_nLightType: [0x4]u8, // 0x230
        m_nMaxAllowed: [0x4]u8, // 0x234
        m_vColorBlend: [0x6D8]u8, // 0x238
        m_nColorBlendType: [0x8]u8, // 0x910
        m_strLightStyle: [0x8]u8, // 0x918
        m_flLightStyleTime: [0x178]u8, // 0x920
        m_nBrightnessUnit: [0x8]u8, // 0xA98
        m_flBrightnessLumens: [0x178]u8, // 0xAA0
        m_flBrightnessCandelas: [0x178]u8, // 0xC18
        m_bCastShadows: [0x1]u8, // 0xD90
        m_bDynamicBounce: [0x7]u8, // 0xD91
        m_flBounceScale: [0x178]u8, // 0xD98
        m_bFog: [0x8]u8, // 0xF10
        m_flFogScale: [0x178]u8, // 0xF18
        m_flLuminaireRadius: [0x178]u8, // 0x1090
        m_nOrientationType: [0x8]u8, // 0x1208
        m_vNormal: [0x6D8]u8, // 0x1210
        m_vTarget: [0x6D8]u8, // 0x18E8
        m_flFOVAngle: [0x178]u8, // 0x1FC0
        m_flBarnShape: [0x178]u8, // 0x2138
        m_flBarnNearSizeX: [0x178]u8, // 0x22B0
        m_flBarnNearSizeY: [0x178]u8, // 0x2428
        m_flBarnSoftX: [0x178]u8, // 0x25A0
        m_flBarnSoftY: [0x178]u8, // 0x2718
        m_flSkirt: [0x178]u8, // 0x2890
        m_flRange: [0x178]u8, // 0x2A08
        m_flInnerConeAngle: [0x178]u8, // 0x2B80
        m_flOuterConeAngle: [0x178]u8, // 0x2CF8
        m_hLightCookie: [0x8]u8, // 0x2E70
        m_bSphericalCookie: [0x10]u8, // 0x2E78
    };
    pub const C_OP_ConnectParentParticleToNearest = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFirstControlPoint: [0x4]u8, // 0x1E0
        m_nSecondControlPoint: [0x4]u8, // 0x1E4
        m_bUseRadius: [0x8]u8, // 0x1E8
        m_flRadiusScale: [0x178]u8, // 0x1F0
        m_flParentRadiusScale: [0x178]u8, // 0x368
    };
    pub const CPAssignment_t = extern struct {
        m_nCPNumber: [0x8]u8, // 0x0
        m_Pos: [0x6D8]u8, // 0x8
        m_nOrientationMode: [0x8]u8, // 0x6E0
    };
    pub const C_INIT_RemapParticleCountToNamedModelBodyPartScalar = extern struct {
        pad_0: [0x238]u8, // 0x0
    };
    pub const C_INIT_InitSkinnedPositionFromCPSnapshot = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nSnapshotControlPointNumber: [0x4]u8, // 0x1E8
        m_nControlPointNumber: [0x4]u8, // 0x1EC
        m_bRandom: [0x4]u8, // 0x1F0
        m_nRandomSeed: [0x4]u8, // 0x1F4
        m_bRigid: [0x1]u8, // 0x1F8
        m_bSetNormal: [0x1]u8, // 0x1F9
        m_bIgnoreDt: [0x2]u8, // 0x1FA
        m_flMinNormalVelocity: [0x4]u8, // 0x1FC
        m_flMaxNormalVelocity: [0x4]u8, // 0x200
        m_nIndexType: [0x4]u8, // 0x204
        m_flReadIndex: [0x178]u8, // 0x208
        m_flIncrement: [0x4]u8, // 0x380
        m_nFullLoopIncrement: [0x4]u8, // 0x384
        m_nSnapShotStartPoint: [0x4]u8, // 0x388
        m_flBoneVelocity: [0x4]u8, // 0x38C
        m_flBoneVelocityMax: [0x4]u8, // 0x390
        m_bCopyColor: [0x1]u8, // 0x394
        m_bCopyAlpha: [0x1]u8, // 0x395
        m_bSetRadius: [0x2]u8, // 0x396
    };
    pub const C_OP_LagCompensation = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nDesiredVelocityCP: [0x4]u8, // 0x1E0
        m_nLatencyCP: [0x4]u8, // 0x1E4
        m_nLatencyCPField: [0x4]u8, // 0x1E8
        m_nDesiredVelocityCPField: [0x4]u8, // 0x1EC
    };
    pub const C_OP_CollideWithSelf = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flRadiusScale: [0x178]u8, // 0x1E0
        m_flMinimumSpeed: [0x178]u8, // 0x358
    };
    pub const C_OP_Noise = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldOutput: [0x4]u8, // 0x1E0
        m_flOutputMin: [0x4]u8, // 0x1E4
        m_flOutputMax: [0x4]u8, // 0x1E8
        m_fl4NoiseScale: [0x4]u8, // 0x1EC
        m_bAdditive: [0x4]u8, // 0x1F0
        m_flNoiseAnimationTimeScale: [0x4]u8, // 0x1F4
    };
    pub const C_OP_FadeAndKillForTracers = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flStartFadeInTime: [0x4]u8, // 0x1E0
        m_flEndFadeInTime: [0x4]u8, // 0x1E4
        m_flStartFadeOutTime: [0x4]u8, // 0x1E8
        m_flEndFadeOutTime: [0x4]u8, // 0x1EC
        m_flStartAlpha: [0x4]u8, // 0x1F0
        m_flEndAlpha: [0x4]u8, // 0x1F4
    };
    pub const C_OP_ColorAdjustHSL = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flHueAdjust: [0x178]u8, // 0x1E0
        m_flSaturationAdjust: [0x178]u8, // 0x358
        m_flLightnessAdjust: [0x178]u8, // 0x4D0
    };
    pub const CParticleMassCalculationParameters = extern struct {
        m_nMassMode: [0x8]u8, // 0x0
        m_flRadius: [0x178]u8, // 0x8
        m_flNominalRadius: [0x178]u8, // 0x180
        m_flScale: [0x178]u8, // 0x2F8
    };
    pub const C_OP_SequenceFromModel = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nControlPointNumber: [0x4]u8, // 0x1E0
        m_nFieldOutput: [0x4]u8, // 0x1E4
        m_nFieldOutputAnim: [0x4]u8, // 0x1E8
        m_flInputMin: [0x4]u8, // 0x1EC
        m_flInputMax: [0x4]u8, // 0x1F0
        m_flOutputMin: [0x4]u8, // 0x1F4
        m_flOutputMax: [0x4]u8, // 0x1F8
        m_nSetMethod: [0x4]u8, // 0x1FC
    };
    pub const C_OP_AlphaDecay = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flMinAlpha: [0x8]u8, // 0x1E0
    };
    pub const C_OP_RemapDensityGradientToVectorAttribute = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flRadiusScale: [0x4]u8, // 0x1E0
        m_nFieldOutput: [0x4]u8, // 0x1E4
    };
    pub const C_INIT_InitVec = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_InputValue: [0x6D8]u8, // 0x1E8
        m_nOutputField: [0x4]u8, // 0x8C0
        m_nSetMethod: [0x4]u8, // 0x8C4
        m_bNormalizedOutput: [0x1]u8, // 0x8C8
        m_bWritePreviousPosition: [0x7]u8, // 0x8C9
    };
    pub const C_INIT_SetHitboxToModel = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nControlPointNumber: [0x4]u8, // 0x1E8
        m_nForceInModel: [0x4]u8, // 0x1EC
        m_bEvenDistribution: [0x4]u8, // 0x1F0
        m_nDesiredHitbox: [0x4]u8, // 0x1F4
        m_vecHitBoxScale: [0x6D8]u8, // 0x1F8
        m_vecDirectionBias: [0xC]u8, // 0x8D0
        m_bMaintainHitbox: [0x1]u8, // 0x8DC
        m_bUseBones: [0x1]u8, // 0x8DD
        m_HitboxSetName: [0x82]u8, // 0x8DE
        m_flShellSize: [0x178]u8, // 0x960
    };
    pub const C_OP_MovementMoveAlongSkinnedCPSnapshot = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nControlPointNumber: [0x4]u8, // 0x1E0
        m_nSnapshotControlPointNumber: [0x4]u8, // 0x1E4
        m_bSetNormal: [0x1]u8, // 0x1E8
        m_bSetRadius: [0x7]u8, // 0x1E9
        m_flInterpolation: [0x178]u8, // 0x1F0
        m_flTValue: [0x178]u8, // 0x368
    };
    pub const C_OP_LerpScalar = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldOutput: [0x8]u8, // 0x1E0
        m_flOutput: [0x178]u8, // 0x1E8
        m_flStartTime: [0x4]u8, // 0x360
        m_flEndTime: [0x4]u8, // 0x364
    };
    pub const C_INIT_InitialRepulsionVelocity = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_CollisionGroupName: [0x80]u8, // 0x1E8
        m_nTraceSet: [0x4]u8, // 0x268
        m_vecOutputMin: [0xC]u8, // 0x26C
        m_vecOutputMax: [0xC]u8, // 0x278
        m_nControlPointNumber: [0x4]u8, // 0x284
        m_bPerParticle: [0x1]u8, // 0x288
        m_bTranslate: [0x1]u8, // 0x289
        m_bProportional: [0x2]u8, // 0x28A
        m_flTraceLength: [0x4]u8, // 0x28C
        m_bPerParticleTR: [0x1]u8, // 0x290
        m_bInherit: [0x3]u8, // 0x291
        m_nChildCP: [0x4]u8, // 0x294
        m_nChildGroupID: [0x8]u8, // 0x298
    };
    pub const C_OP_ClampScalar = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldOutput: [0x8]u8, // 0x1E0
        m_flOutputMin: [0x178]u8, // 0x1E8
        m_flOutputMax: [0x178]u8, // 0x360
    };
    pub const C_OP_SetControlPointToHMD = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nCP1: [0x4]u8, // 0x1E8
        m_vecCP1Pos: [0xC]u8, // 0x1EC
        m_bOrientToHMD: [0x8]u8, // 0x1F8
    };
    pub const C_OP_DifferencePreviousParticle = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldInput: [0x4]u8, // 0x1E0
        m_nFieldOutput: [0x4]u8, // 0x1E4
        m_flInputMin: [0x4]u8, // 0x1E8
        m_flInputMax: [0x4]u8, // 0x1EC
        m_flOutputMin: [0x4]u8, // 0x1F0
        m_flOutputMax: [0x4]u8, // 0x1F4
        m_nSetMethod: [0x4]u8, // 0x1F8
        m_bActiveRange: [0x1]u8, // 0x1FC
        m_bSetPreviousParticle: [0x3]u8, // 0x1FD
    };
    pub const C_OP_SetControlPointFieldFromVectorExpression = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nExpression: [0x8]u8, // 0x1E8
        m_vecInput1: [0x6D8]u8, // 0x1F0
        m_vecInput2: [0x6D8]u8, // 0x8C8
        m_flLerp: [0x178]u8, // 0xFA0
        m_flOutputRemap: [0x178]u8, // 0x1118
        m_nOutputCP: [0x4]u8, // 0x1290
        m_nOutVectorField: [0x4]u8, // 0x1294
    };
    pub const C_OP_PercentageBetweenTransforms = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldOutput: [0x4]u8, // 0x1E0
        m_flInputMin: [0x4]u8, // 0x1E4
        m_flInputMax: [0x4]u8, // 0x1E8
        m_flOutputMin: [0x4]u8, // 0x1EC
        m_flOutputMax: [0x8]u8, // 0x1F0
        m_TransformStart: [0x68]u8, // 0x1F8
        m_TransformEnd: [0x68]u8, // 0x260
        m_nSetMethod: [0x4]u8, // 0x2C8
        m_bActiveRange: [0x1]u8, // 0x2CC
        m_bRadialCheck: [0x3]u8, // 0x2CD
    };
    pub const C_INIT_PlaneCull = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nControlPoint: [0x8]u8, // 0x1E8
        m_flDistance: [0x178]u8, // 0x1F0
        m_bCullInside: [0x8]u8, // 0x368
    };
    pub const C_OP_RemapNamedModelSequenceEndCap = extern struct {
        pad_0: [0x240]u8, // 0x0
    };
    pub const C_INIT_InitFromCPSnapshot = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nControlPointNumber: [0x8]u8, // 0x1E8
        m_strSnapshotSubset: [0x8]u8, // 0x1F0
        m_nAttributeToRead: [0x4]u8, // 0x1F8
        m_nAttributeToWrite: [0x4]u8, // 0x1FC
        m_nLocalSpaceCP: [0x4]u8, // 0x200
        m_bRandom: [0x1]u8, // 0x204
        m_bReverse: [0x3]u8, // 0x205
        m_nSnapShotIncrement: [0x178]u8, // 0x208
        m_nManualSnapshotIndex: [0x178]u8, // 0x380
        m_nRandomSeed: [0x4]u8, // 0x4F8
        m_bLocalSpaceAngles: [0x4]u8, // 0x4FC
    };
    pub const C_OP_RenderCables = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_flRadiusScale: [0x178]u8, // 0x230
        m_flAlphaScale: [0x178]u8, // 0x3A8
        m_vecColorScale: [0x6D8]u8, // 0x520
        m_nColorBlendType: [0x8]u8, // 0xBF8
        m_hMaterial: [0x8]u8, // 0xC00
        m_nTextureRepetitionMode: [0x8]u8, // 0xC08
        m_flTextureRepeatsPerSegment: [0x178]u8, // 0xC10
        m_flTextureRepeatsCircumference: [0x178]u8, // 0xD88
        m_flColorMapOffsetV: [0x178]u8, // 0xF00
        m_flColorMapOffsetU: [0x178]u8, // 0x1078
        m_flNormalMapOffsetV: [0x178]u8, // 0x11F0
        m_flNormalMapOffsetU: [0x178]u8, // 0x1368
        m_bDrawCableCaps: [0x4]u8, // 0x14E0
        m_flCapRoundness: [0x4]u8, // 0x14E4
        m_flCapOffsetAmount: [0x4]u8, // 0x14E8
        m_flTessScale: [0x4]u8, // 0x14EC
        m_nMinTesselation: [0x4]u8, // 0x14F0
        m_nMaxTesselation: [0x4]u8, // 0x14F4
        m_nRoundness: [0x4]u8, // 0x14F8
        m_nForceRoundnessFixed: [0x1]u8, // 0x14FC
        m_bOnlyRenderInEffectsBloomPass: [0x3]u8, // 0x14FD
        m_LightingTransform: [0x68]u8, // 0x1500
        m_MaterialFloatVars: [0x20]u8, // 0x1568
        m_MaterialVecVars: [0x20]u8, // 0x1588
    };
    pub const C_INIT_InheritVelocity = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nControlPointNumber: [0x4]u8, // 0x1E8
        m_flVelocityScale: [0x4]u8, // 0x1EC
    };
    pub const C_OP_SetControlPointToWaterSurface = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nSourceCP: [0x4]u8, // 0x1E8
        m_nDestCP: [0x4]u8, // 0x1EC
        m_nFlowCP: [0x4]u8, // 0x1F0
        m_nActiveCP: [0x4]u8, // 0x1F4
        m_nActiveCPField: [0x8]u8, // 0x1F8
        m_flRetestRate: [0x178]u8, // 0x200
        m_bAdaptiveThreshold: [0x8]u8, // 0x378
    };
    pub const C_INIT_PositionOffset = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_OffsetMin: [0x6D8]u8, // 0x1E8
        m_OffsetMax: [0x6D8]u8, // 0x8C0
        m_TransformInput: [0x68]u8, // 0xF98
        m_bLocalCoords: [0x1]u8, // 0x1000
        m_bProportional: [0x3]u8, // 0x1001
        m_randomnessParameters: [0xC]u8, // 0x1004
    };
    pub const C_INIT_NormalAlignToCP = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_transformInput: [0x68]u8, // 0x1E8
        m_nControlPointAxis: [0x8]u8, // 0x250
    };
    pub const C_OP_ShapeMatchingConstraint = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flShapeRestorationTime: [0x8]u8, // 0x1E0
    };
    pub const C_OP_SetChildControlPoints = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nChildGroupID: [0x4]u8, // 0x1E0
        m_nFirstControlPoint: [0x4]u8, // 0x1E4
        m_nNumControlPoints: [0x8]u8, // 0x1E8
        m_nFirstSourcePoint: [0x178]u8, // 0x1F0
        m_bReverse: [0x1]u8, // 0x368
        m_bSetOrientation: [0x3]u8, // 0x369
        m_nOrientation: [0x4]u8, // 0x36C
    };
    pub const C_OP_ChladniWave = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldOutput: [0x8]u8, // 0x1E0
        m_flInputMin: [0x178]u8, // 0x1E8
        m_flInputMax: [0x178]u8, // 0x360
        m_flOutputMin: [0x178]u8, // 0x4D8
        m_flOutputMax: [0x178]u8, // 0x650
        m_vecWaveLength: [0x6D8]u8, // 0x7C8
        m_vecHarmonics: [0x6D8]u8, // 0xEA0
        m_nSetMethod: [0x4]u8, // 0x1578
        m_nLocalSpaceControlPoint: [0x4]u8, // 0x157C
        m_b3D: [0x8]u8, // 0x1580
    };
    pub const C_OP_RemapDirectionToCPToVector = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nCP: [0x4]u8, // 0x1E0
        m_nFieldOutput: [0x4]u8, // 0x1E4
        m_flScale: [0x4]u8, // 0x1E8
        m_flOffsetRot: [0x4]u8, // 0x1EC
        m_vecOffsetAxis: [0xC]u8, // 0x1F0
        m_bNormalize: [0x4]u8, // 0x1FC
        m_nFieldStrength: [0x8]u8, // 0x200
    };
    pub const C_OP_DriveCPFromGlobalSoundFloat = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nOutputControlPoint: [0x4]u8, // 0x1E8
        m_nOutputField: [0x4]u8, // 0x1EC
        m_flInputMin: [0x4]u8, // 0x1F0
        m_flInputMax: [0x4]u8, // 0x1F4
        m_flOutputMin: [0x4]u8, // 0x1F8
        m_flOutputMax: [0x4]u8, // 0x1FC
        m_StackName: [0x8]u8, // 0x200
        m_OperatorName: [0x8]u8, // 0x208
        m_FieldName: [0x10]u8, // 0x210
    };
    pub const C_INIT_ScreenSpacePositionOfTarget = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_vecTargetPosition: [0x6D8]u8, // 0x1E8
        m_bOututBehindness: [0x4]u8, // 0x8C0
        m_nBehindFieldOutput: [0x4]u8, // 0x8C4
        m_flBehindOutputRemap: [0x178]u8, // 0x8C8
    };
    pub const C_OP_RtEnvCull = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_vecTestDir: [0xC]u8, // 0x1E0
        m_vecTestNormal: [0xC]u8, // 0x1EC
        m_bCullOnMiss: [0x1]u8, // 0x1F8
        m_bStickInsteadOfCull: [0x1]u8, // 0x1F9
        m_RtEnvName: [0x82]u8, // 0x1FA
        m_nRTEnvCP: [0x4]u8, // 0x27C
        m_nComponent: [0x8]u8, // 0x280
    };
    pub const C_OP_PinParticleToCP = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nControlPointNumber: [0x8]u8, // 0x1E0
        m_vecOffset: [0x6D8]u8, // 0x1E8
        m_bOffsetLocal: [0x4]u8, // 0x8C0
        m_nParticleSelection: [0x4]u8, // 0x8C4
        m_nParticleNumber: [0x178]u8, // 0x8C8
        m_nPinBreakType: [0x8]u8, // 0xA40
        m_flBreakDistance: [0x178]u8, // 0xA48
        m_flBreakSpeed: [0x178]u8, // 0xBC0
        m_flAge: [0x178]u8, // 0xD38
        m_nBreakControlPointNumber: [0x4]u8, // 0xEB0
        m_nBreakControlPointNumber2: [0x4]u8, // 0xEB4
        m_flBreakValue: [0x178]u8, // 0xEB8
        m_flInterpolation: [0x178]u8, // 0x1030
        m_bRetainInitialVelocity: [0x8]u8, // 0x11A8
    };
    pub const C_OP_RemapCPtoVector = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nCPInput: [0x4]u8, // 0x1E0
        m_nFieldOutput: [0x4]u8, // 0x1E4
        m_nLocalSpaceCP: [0x4]u8, // 0x1E8
        m_vInputMin: [0xC]u8, // 0x1EC
        m_vInputMax: [0xC]u8, // 0x1F8
        m_vOutputMin: [0xC]u8, // 0x204
        m_vOutputMax: [0xC]u8, // 0x210
        m_flStartTime: [0x4]u8, // 0x21C
        m_flEndTime: [0x4]u8, // 0x220
        m_flInterpRate: [0x4]u8, // 0x224
        m_nSetMethod: [0x4]u8, // 0x228
        m_bOffset: [0x1]u8, // 0x22C
        m_bAccelerate: [0x3]u8, // 0x22D
    };
    pub const C_INIT_CreateParticleImpulse = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_InputRadius: [0x178]u8, // 0x1E8
        m_InputMagnitude: [0x178]u8, // 0x360
        m_nFalloffFunction: [0x8]u8, // 0x4D8
        m_InputFalloffExp: [0x178]u8, // 0x4E0
        m_nImpulseType: [0x8]u8, // 0x658
    };
    pub const C_OP_DensityForce = extern struct {
        pad_0: [0x1F0]u8, // 0x0
        m_flRadiusScale: [0x4]u8, // 0x1F0
        m_flForceScale: [0x4]u8, // 0x1F4
        m_flTargetDensity: [0x8]u8, // 0x1F8
    };
    pub const C_INIT_CreateInEpitrochoid = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nComponent1: [0x4]u8, // 0x1E8
        m_nComponent2: [0x4]u8, // 0x1EC
        m_TransformInput: [0x68]u8, // 0x1F0
        m_flParticleDensity: [0x178]u8, // 0x258
        m_flOffset: [0x178]u8, // 0x3D0
        m_flRadius1: [0x178]u8, // 0x548
        m_flRadius2: [0x178]u8, // 0x6C0
        m_bUseCount: [0x1]u8, // 0x838
        m_bUseLocalCoords: [0x1]u8, // 0x839
        m_bOffsetExistingPos: [0x6]u8, // 0x83A
    };
    pub const C_OP_ConstrainDistanceToUserSpecifiedPath = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_fMinDistance: [0x4]u8, // 0x1E0
        m_flMaxDistance: [0x4]u8, // 0x1E4
        m_flTimeScale: [0x4]u8, // 0x1E8
        m_bLoopedPath: [0x4]u8, // 0x1EC
        m_pointList: [0x18]u8, // 0x1F0
    };
    pub const C_OP_SetControlPointPositions = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_bUseWorldLocation: [0x1]u8, // 0x1E8
        m_bOrient: [0x1]u8, // 0x1E9
        m_bSetOnce: [0x2]u8, // 0x1EA
        m_nCP1: [0x4]u8, // 0x1EC
        m_nCP2: [0x4]u8, // 0x1F0
        m_nCP3: [0x4]u8, // 0x1F4
        m_nCP4: [0x4]u8, // 0x1F8
        m_vecCP1Pos: [0xC]u8, // 0x1FC
        m_vecCP2Pos: [0xC]u8, // 0x208
        m_vecCP3Pos: [0xC]u8, // 0x214
        m_vecCP4Pos: [0xC]u8, // 0x220
        m_nHeadLocation: [0x4]u8, // 0x22C
    };
    pub const C_OP_SetFloatAttributeToVectorExpression = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nExpression: [0x8]u8, // 0x1E0
        m_vInput1: [0x6D8]u8, // 0x1E8
        m_vInput2: [0x6D8]u8, // 0x8C0
        m_flOutputRemap: [0x178]u8, // 0xF98
        m_nOutputField: [0x4]u8, // 0x1110
        m_nSetMethod: [0x4]u8, // 0x1114
    };
    pub const C_OP_MovementRotateParticleAroundAxis = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_vecRotAxis: [0x6D8]u8, // 0x1E0
        m_flRotRate: [0x178]u8, // 0x8B8
        m_TransformInput: [0x68]u8, // 0xA30
        m_bLocalSpace: [0x8]u8, // 0xA98
    };
    pub const C_OP_IntraParticleForce = extern struct {
        pad_0: [0x1F0]u8, // 0x0
        m_flAttractionMinDistance: [0x4]u8, // 0x1F0
        m_flAttractionMaxDistance: [0x4]u8, // 0x1F4
        m_flAttractionMaxStrength: [0x4]u8, // 0x1F8
        m_flRepulsionMinDistance: [0x4]u8, // 0x1FC
        m_flRepulsionMaxDistance: [0x4]u8, // 0x200
        m_flRepulsionMaxStrength: [0x4]u8, // 0x204
        m_bUseAABB: [0x8]u8, // 0x208
    };
    pub const C_INIT_InitFloat = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_InputValue: [0x178]u8, // 0x1E8
        m_nOutputField: [0x4]u8, // 0x360
        m_nSetMethod: [0x4]u8, // 0x364
        m_InputStrength: [0x180]u8, // 0x368
    };
    pub const C_INIT_CreateOnModel = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_modelInput: [0x60]u8, // 0x1E8
        m_transformInput: [0x68]u8, // 0x248
        m_nForceInModel: [0x4]u8, // 0x2B0
        m_bScaleToVolume: [0x1]u8, // 0x2B4
        m_bEvenDistribution: [0x3]u8, // 0x2B5
        m_nDesiredHitbox: [0x178]u8, // 0x2B8
        m_nHitboxValueFromControlPointIndex: [0x8]u8, // 0x430
        m_vecHitBoxScale: [0x6D8]u8, // 0x438
        m_flBoneVelocity: [0x4]u8, // 0xB10
        m_flMaxBoneVelocity: [0x4]u8, // 0xB14
        m_vecDirectionBias: [0x6D8]u8, // 0xB18
        m_HitboxSetName: [0x80]u8, // 0x11F0
        m_bLocalCoords: [0x1]u8, // 0x1270
        m_bUseBones: [0x1]u8, // 0x1271
        m_bUseMesh: [0x6]u8, // 0x1272
        m_flShellSize: [0x178]u8, // 0x1278
    };
    pub const C_OP_InheritFromPeerSystem = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldOutput: [0x4]u8, // 0x1E0
        m_nFieldInput: [0x4]u8, // 0x1E4
        m_nIncrement: [0x4]u8, // 0x1E8
        m_nGroupID: [0x4]u8, // 0x1EC
    };
    pub const C_OP_PerParticleForce = extern struct {
        pad_0: [0x1F0]u8, // 0x0
        m_flForceScale: [0x178]u8, // 0x1F0
        m_vForce: [0x6D8]u8, // 0x368
        m_nCP: [0x8]u8, // 0xA40
    };
    pub const C_INIT_RandomNamedModelMeshGroup = extern struct {
        pad_0: [0x210]u8, // 0x0
    };
    pub const C_OP_RenderProjected = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_bProjectCharacter: [0x1]u8, // 0x230
        m_bProjectWorld: [0x1]u8, // 0x231
        m_bProjectWater: [0x1]u8, // 0x232
        m_bFlipHorizontal: [0x1]u8, // 0x233
        m_bEnableProjectedDepthControls: [0x4]u8, // 0x234
        m_flMinProjectionDepth: [0x4]u8, // 0x238
        m_flMaxProjectionDepth: [0x4]u8, // 0x23C
        m_vecProjectedMaterials: [0x18]u8, // 0x240
        m_flMaterialSelection: [0x178]u8, // 0x258
        m_flAnimationTimeScale: [0x4]u8, // 0x3D0
        m_bOrientToNormal: [0x4]u8, // 0x3D4
        m_MaterialVars: [0x18]u8, // 0x3D8
        m_flRadiusScale: [0x178]u8, // 0x3F0
        m_flAlphaScale: [0x178]u8, // 0x568
        m_flRollScale: [0x178]u8, // 0x6E0
        m_nAlpha2Field: [0x8]u8, // 0x858
        m_vecColorScale: [0x6D8]u8, // 0x860
        m_nColorBlendType: [0x20]u8, // 0xF38
    };
    pub const C_OP_MaxVelocity = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flMaxVelocity: [0x178]u8, // 0x1E0
        m_flMinVelocity: [0x178]u8, // 0x358
    };
    pub const C_INIT_VelocityFromNormal = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_fSpeedMin: [0x4]u8, // 0x1E8
        m_fSpeedMax: [0x4]u8, // 0x1EC
        m_bIgnoreDt: [0x8]u8, // 0x1F0
    };
    pub const C_OP_MaintainEmitter = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nParticlesToMaintain: [0x178]u8, // 0x1E8
        m_flStartTime: [0x8]u8, // 0x360
        m_flEmissionDuration: [0x178]u8, // 0x368
        m_flEmissionRate: [0x4]u8, // 0x4E0
        m_nSnapshotControlPoint: [0x4]u8, // 0x4E4
        m_strSnapshotSubset: [0x8]u8, // 0x4E8
        m_bEmitInstantaneously: [0x1]u8, // 0x4F0
        m_bFinalEmitOnStop: [0x7]u8, // 0x4F1
        m_flScale: [0x178]u8, // 0x4F8
    };
    pub const C_INIT_PositionOffsetToCP = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nControlPointNumberStart: [0x4]u8, // 0x1E8
        m_nControlPointNumberEnd: [0x4]u8, // 0x1EC
        m_bLocalCoords: [0x8]u8, // 0x1F0
    };
    pub const C_INIT_RemapInitialTransformDirectionToRotation = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_TransformInput: [0x68]u8, // 0x1E8
        m_nFieldOutput: [0x4]u8, // 0x250
        m_flOffsetRot: [0x4]u8, // 0x254
        m_nComponent: [0x8]u8, // 0x258
    };
    pub const C_OP_FadeAndKill = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flStartFadeInTime: [0x4]u8, // 0x1E0
        m_flEndFadeInTime: [0x4]u8, // 0x1E4
        m_flStartFadeOutTime: [0x4]u8, // 0x1E8
        m_flEndFadeOutTime: [0x4]u8, // 0x1EC
        m_flStartAlpha: [0x4]u8, // 0x1F0
        m_flEndAlpha: [0x4]u8, // 0x1F4
        m_bForcePreserveParticleOrder: [0x8]u8, // 0x1F8
    };
    pub const C_OP_ColorInterpolate = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_ColorFade: [0x10]u8, // 0x1E0
        m_flFadeStartTime: [0x4]u8, // 0x1F0
        m_flFadeEndTime: [0x4]u8, // 0x1F4
        m_nFieldOutput: [0x4]u8, // 0x1F8
        m_bEaseInOut: [0x4]u8, // 0x1FC
    };
    pub const C_OP_RampScalarSpline = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_RateMin: [0x4]u8, // 0x1E0
        m_RateMax: [0x4]u8, // 0x1E4
        m_flStartTime_min: [0x4]u8, // 0x1E8
        m_flStartTime_max: [0x4]u8, // 0x1EC
        m_flEndTime_min: [0x4]u8, // 0x1F0
        m_flEndTime_max: [0x4]u8, // 0x1F4
        m_flBias: [0x28]u8, // 0x1F8
        m_nField: [0x4]u8, // 0x220
        m_bProportionalOp: [0x1]u8, // 0x224
        m_bEaseOut: [0xB]u8, // 0x225
    };
    pub const C_OP_RemapNamedModelSequenceOnceTimed = extern struct {
        pad_0: [0x240]u8, // 0x0
    };
    pub const C_OP_SetControlPointFromObjectScale = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nCPInput: [0x4]u8, // 0x1E8
        m_nCPOutput: [0x4]u8, // 0x1EC
    };
    pub const C_OP_MaintainSequentialPath = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_fMaxDistance: [0x178]u8, // 0x1E0
        m_flNumToAssign: [0x178]u8, // 0x358
        m_flCohesionStrength: [0x178]u8, // 0x4D0
        m_flTolerance: [0x4]u8, // 0x648
        m_bLoop: [0x1]u8, // 0x64C
        m_bUseParticleCount: [0x3]u8, // 0x64D
        m_PathParams: [0x40]u8, // 0x650
    };
    pub const C_OP_RemapNamedModelBodyPartEndCap = extern struct {
        pad_0: [0x240]u8, // 0x0
    };
    pub const C_OP_StopAfterCPDuration = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_flDuration: [0x178]u8, // 0x1E8
        m_bDestroyImmediately: [0x1]u8, // 0x360
        m_bPlayEndCap: [0x7]u8, // 0x361
    };
    pub const CGeneralSpin = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nSpinRateDegrees: [0x4]u8, // 0x1E0
        m_nSpinRateMinDegrees: [0x8]u8, // 0x1E4
        m_fSpinRateStopTime: [0xC]u8, // 0x1EC
    };
    pub const C_OP_LockToSavedSequentialPath = extern struct {
        pad_0: [0x1E4]u8, // 0x0
        m_flFadeStart: [0x4]u8, // 0x1E4
        m_flFadeEnd: [0x4]u8, // 0x1E8
        m_bCPPairs: [0x4]u8, // 0x1EC
        m_PathParams: [0x40]u8, // 0x1F0
    };
    pub const C_INIT_RemapNamedModelElementToScalar = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_hModel: [0x8]u8, // 0x1E8
        m_names: [0x18]u8, // 0x1F0
        m_values: [0x18]u8, // 0x208
        m_nFieldInput: [0x4]u8, // 0x220
        m_nFieldOutput: [0x4]u8, // 0x224
        m_nSetMethod: [0x4]u8, // 0x228
        m_bModelFromRenderer: [0x4]u8, // 0x22C
    };
    pub const C_OP_ClampVector = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldOutput: [0x8]u8, // 0x1E0
        m_vecOutputMin: [0x6D8]u8, // 0x1E8
        m_vecOutputMax: [0x6D8]u8, // 0x8C0
    };
    pub const C_OP_RenderStatusEffectCitadel = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_pTextureColorWarp: [0x8]u8, // 0x230
        m_pTextureNormal: [0x8]u8, // 0x238
        m_pTextureMetalness: [0x8]u8, // 0x240
        m_pTextureRoughness: [0x8]u8, // 0x248
        m_pTextureSelfIllum: [0x8]u8, // 0x250
        m_pTextureDetail: [0x8]u8, // 0x258
    };
    pub const IParticleSystemDefinition = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const C_OP_WindForce = extern struct {
        pad_0: [0x1F0]u8, // 0x0
        m_vForce: [0x10]u8, // 0x1F0
    };
    pub const C_OP_SetVariable = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_variableReference: [0x50]u8, // 0x1E8
        m_transformInput: [0x68]u8, // 0x238
        m_positionOffset: [0xC]u8, // 0x2A0
        m_rotationOffset: [0xC]u8, // 0x2AC
        m_vecInput: [0x6D8]u8, // 0x2B8
        m_floatInput: [0x178]u8, // 0x990
    };
    pub const C_OP_RenderStandardLight = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_nLightType: [0x4]u8, // 0x230
        m_nMaxAllowed: [0x4]u8, // 0x234
        m_vecColorScale: [0x6D8]u8, // 0x238
        m_nColorBlendType: [0x8]u8, // 0x910
        m_strLightStyle: [0x8]u8, // 0x918
        m_flLightStyleTime: [0x178]u8, // 0x920
        m_flIntensity: [0x178]u8, // 0xA98
        m_bCastShadows: [0x1]u8, // 0xC10
        m_bDynamicBounce: [0x7]u8, // 0xC11
        m_flBounceScale: [0x178]u8, // 0xC18
        m_flTheta: [0x178]u8, // 0xD90
        m_flPhi: [0x178]u8, // 0xF08
        m_flRadiusMultiplier: [0x178]u8, // 0x1080
        m_nAttenuationStyle: [0x8]u8, // 0x11F8
        m_flFalloffLinearity: [0x178]u8, // 0x1200
        m_flFiftyPercentFalloff: [0x178]u8, // 0x1378
        m_flZeroPercentFalloff: [0x178]u8, // 0x14F0
        m_bRenderDiffuse: [0x1]u8, // 0x1668
        m_bRenderSpecular: [0x7]u8, // 0x1669
        m_lightCookie: [0x8]u8, // 0x1670
        m_nPriority: [0x4]u8, // 0x1678
        m_nFogLightingMode: [0x4]u8, // 0x167C
        m_flFogContribution: [0x178]u8, // 0x1680
        m_nCapsuleLightBehavior: [0x4]u8, // 0x17F8
        m_flCapsuleLength: [0x4]u8, // 0x17FC
        m_bReverseOrder: [0x1]u8, // 0x1800
        m_bClosedLoop: [0x3]u8, // 0x1801
        m_nPrevPntSource: [0x4]u8, // 0x1804
        m_flMaxLength: [0x4]u8, // 0x1808
        m_flMinLength: [0x4]u8, // 0x180C
        m_bIgnoreDT: [0x4]u8, // 0x1810
        m_flConstrainRadiusToLengthRatio: [0x4]u8, // 0x1814
        m_flLengthScale: [0x4]u8, // 0x1818
        m_flLengthFadeInTime: [0xC]u8, // 0x181C
    };
    pub const C_OP_DistanceToTransform = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldOutput: [0x8]u8, // 0x1E0
        m_flInputMin: [0x178]u8, // 0x1E8
        m_flInputMax: [0x178]u8, // 0x360
        m_flOutputMin: [0x178]u8, // 0x4D8
        m_flOutputMax: [0x178]u8, // 0x650
        m_TransformStart: [0x68]u8, // 0x7C8
        m_bLOS: [0x1]u8, // 0x830
        m_CollisionGroupName: [0x83]u8, // 0x831
        m_nTraceSet: [0x4]u8, // 0x8B4
        m_flMaxTraceLength: [0x4]u8, // 0x8B8
        m_flLOSScale: [0x4]u8, // 0x8BC
        m_nSetMethod: [0x4]u8, // 0x8C0
        m_bActiveRange: [0x1]u8, // 0x8C4
        m_bAdditive: [0x3]u8, // 0x8C5
        m_vecComponentScale: [0x6D8]u8, // 0x8C8
    };
    pub const C_OP_RemapControlPointOrientationToRotation = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nCP: [0x4]u8, // 0x1E0
        m_nFieldOutput: [0x4]u8, // 0x1E4
        m_flOffsetRot: [0x4]u8, // 0x1E8
        m_nComponent: [0x4]u8, // 0x1EC
    };
    pub const C_OP_SetControlPointToCenter = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nCP1: [0x4]u8, // 0x1E8
        m_vecCP1Pos: [0xC]u8, // 0x1EC
        m_bUseAvgParticlePos: [0x4]u8, // 0x1F8
        m_nSetParent: [0x4]u8, // 0x1FC
    };
    pub const C_OP_RemapAverageScalarValuetoCP = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nExpression: [0x8]u8, // 0x1E8
        m_flDecimalPlaces: [0x178]u8, // 0x1F0
        m_nOutControlPointNumber: [0x4]u8, // 0x368
        m_nOutVectorField: [0x4]u8, // 0x36C
        m_nField: [0x8]u8, // 0x370
        m_flOutputRemap: [0x178]u8, // 0x378
    };
    pub const C_OP_RemapDotProductToScalar = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nInputCP1: [0x4]u8, // 0x1E0
        m_nInputCP2: [0x4]u8, // 0x1E4
        m_nFieldOutput: [0x4]u8, // 0x1E8
        m_flInputMin: [0x4]u8, // 0x1EC
        m_flInputMax: [0x4]u8, // 0x1F0
        m_flOutputMin: [0x4]u8, // 0x1F4
        m_flOutputMax: [0x4]u8, // 0x1F8
        m_bUseParticleVelocity: [0x4]u8, // 0x1FC
        m_nSetMethod: [0x4]u8, // 0x200
        m_bActiveRange: [0x1]u8, // 0x204
        m_bUseParticleNormal: [0x3]u8, // 0x205
    };
    pub const C_OP_RemapCPtoCP = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nInputControlPoint: [0x4]u8, // 0x1E8
        m_nOutputControlPoint: [0x4]u8, // 0x1EC
        m_nInputField: [0x4]u8, // 0x1F0
        m_nOutputField: [0x4]u8, // 0x1F4
        m_flInputMin: [0x4]u8, // 0x1F8
        m_flInputMax: [0x4]u8, // 0x1FC
        m_flOutputMin: [0x4]u8, // 0x200
        m_flOutputMax: [0x4]u8, // 0x204
        m_bDerivative: [0x4]u8, // 0x208
        m_flInterpRate: [0x4]u8, // 0x20C
    };
    pub const C_OP_SetControlPointRotation = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_vecRotAxis: [0x6D8]u8, // 0x1E8
        m_flRotRate: [0x178]u8, // 0x8C0
        m_nCP: [0x4]u8, // 0xA38
        m_nLocalCP: [0x4]u8, // 0xA3C
    };
    pub const C_OP_CurlNoiseForce = extern struct {
        pad_0: [0x1F0]u8, // 0x0
        m_nNoiseType: [0x8]u8, // 0x1F0
        m_vecNoiseFreq: [0x6D8]u8, // 0x1F8
        m_vecNoiseScale: [0x6D8]u8, // 0x8D0
        m_vecOffset: [0x6D8]u8, // 0xFA8
        m_vecOffsetRate: [0x6D8]u8, // 0x1680
        m_flWorleySeed: [0x178]u8, // 0x1D58
        m_flWorleyJitter: [0x178]u8, // 0x1ED0
    };
    pub const C_INIT_Orient2DRelToCP = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nCP: [0x4]u8, // 0x1E8
        m_nFieldOutput: [0x4]u8, // 0x1EC
        m_flRotOffset: [0x8]u8, // 0x1F0
    };
    pub const C_OP_SetSimulationRate = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_flSimulationScale: [0x178]u8, // 0x1E8
    };
    pub const C_OP_FadeIn = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flFadeInTimeMin: [0x4]u8, // 0x1E0
        m_flFadeInTimeMax: [0x4]u8, // 0x1E4
        m_flFadeInTimeExp: [0x4]u8, // 0x1E8
        m_bProportional: [0x4]u8, // 0x1EC
    };
    pub const C_OP_RenderScreenShake = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_flDurationScale: [0x4]u8, // 0x230
        m_flRadiusScale: [0x4]u8, // 0x234
        m_flFrequencyScale: [0x4]u8, // 0x238
        m_flAmplitudeScale: [0x4]u8, // 0x23C
        m_nRadiusField: [0x4]u8, // 0x240
        m_nDurationField: [0x4]u8, // 0x244
        m_nFrequencyField: [0x4]u8, // 0x248
        m_nAmplitudeField: [0x4]u8, // 0x24C
        m_nFilterCP: [0x8]u8, // 0x250
    };
    pub const C_OP_RemapBoundingVolumetoCP = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nOutControlPointNumber: [0x4]u8, // 0x1E8
        m_flInputMin: [0x4]u8, // 0x1EC
        m_flInputMax: [0x4]u8, // 0x1F0
        m_flOutputMin: [0x4]u8, // 0x1F4
        m_flOutputMax: [0x8]u8, // 0x1F8
    };
    pub const C_OP_HSVShiftToCP = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nColorCP: [0x4]u8, // 0x1E8
        m_nColorGemEnableCP: [0x4]u8, // 0x1EC
        m_nOutputCP: [0x4]u8, // 0x1F0
        m_DefaultHSVColor: [0x14]u8, // 0x1F4
    };
    pub const C_OP_RemapVectorToRotations = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_vecInput: [0x6D8]u8, // 0x1E0
        m_vecRotation: [0x6D8]u8, // 0x8B8
    };
    pub const C_INIT_GlobalScale = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_flScale: [0x4]u8, // 0x1E8
        m_nScaleControlPointNumber: [0x4]u8, // 0x1EC
        m_nControlPointNumber: [0x4]u8, // 0x1F0
        m_bScaleRadius: [0x1]u8, // 0x1F4
        m_bScalePosition: [0x1]u8, // 0x1F5
        m_bScaleVelocity: [0x2]u8, // 0x1F6
    };
    pub const C_INIT_RadiusFromCPObject = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nControlPoint: [0x8]u8, // 0x1E8
    };
    pub const C_INIT_InitialVelocityFromHitbox = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_flVelocityMin: [0x4]u8, // 0x1E8
        m_flVelocityMax: [0x4]u8, // 0x1EC
        m_nControlPointNumber: [0x4]u8, // 0x1F0
        m_HitboxSetName: [0x80]u8, // 0x1F4
        m_bUseBones: [0x4]u8, // 0x274
    };
    pub const C_OP_LerpVector = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldOutput: [0x4]u8, // 0x1E0
        m_vecOutput: [0xC]u8, // 0x1E4
        m_flStartTime: [0x4]u8, // 0x1F0
        m_flEndTime: [0x4]u8, // 0x1F4
        m_nSetMethod: [0x8]u8, // 0x1F8
    };
    pub const C_OP_SetControlPointFieldToWater = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nSourceCP: [0x4]u8, // 0x1E8
        m_nDestCP: [0x4]u8, // 0x1EC
        m_nCPField: [0x8]u8, // 0x1F0
    };
    pub const TextureGroup_t = extern struct {
        m_bEnabled: [0x1]u8, // 0x0
        m_bReplaceTextureWithGradient: [0x7]u8, // 0x1
        m_hTexture: [0x8]u8, // 0x8
        m_Gradient: [0x18]u8, // 0x10
        m_nTextureType: [0x4]u8, // 0x28
        m_nTextureChannels: [0x4]u8, // 0x2C
        m_nTextureBlendMode: [0x8]u8, // 0x30
        m_flTextureBlend: [0x178]u8, // 0x38
        m_TextureControls: [0xA68]u8, // 0x1B0
    };
    pub const C_OP_TimeVaryingForce = extern struct {
        pad_0: [0x1F0]u8, // 0x0
        m_flStartLerpTime: [0x4]u8, // 0x1F0
        m_StartingForce: [0xC]u8, // 0x1F4
        m_flEndLerpTime: [0x4]u8, // 0x200
        m_EndingForce: [0xC]u8, // 0x204
    };
    pub const C_OP_SetCPOrientationToGroundNormal = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flInterpRate: [0x4]u8, // 0x1E0
        m_flMaxTraceLength: [0x4]u8, // 0x1E4
        m_flTolerance: [0x4]u8, // 0x1E8
        m_flTraceOffset: [0x4]u8, // 0x1EC
        m_CollisionGroupName: [0x80]u8, // 0x1F0
        m_nTraceSet: [0x4]u8, // 0x270
        m_nInputCP: [0x4]u8, // 0x274
        m_nOutputCP: [0x10]u8, // 0x278
        m_bIncludeWater: [0x8]u8, // 0x288
    };
    pub const C_OP_SnapshotSkinToBones = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_bTransformNormals: [0x1]u8, // 0x1E0
        m_bTransformRadii: [0x3]u8, // 0x1E1
        m_nControlPointNumber: [0x4]u8, // 0x1E4
        m_flLifeTimeFadeStart: [0x4]u8, // 0x1E8
        m_flLifeTimeFadeEnd: [0x4]u8, // 0x1EC
        m_flJumpThreshold: [0x4]u8, // 0x1F0
        m_flPrevPosScale: [0x4]u8, // 0x1F4
    };
    pub const C_INIT_CreateWithinSphereTransform = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_fRadiusMin: [0x178]u8, // 0x1E8
        m_fRadiusMax: [0x178]u8, // 0x360
        m_vecDistanceBias: [0x6D8]u8, // 0x4D8
        m_vecDistanceBiasAbs: [0x10]u8, // 0xBB0
        m_TransformInput: [0x68]u8, // 0xBC0
        m_fSpeedMin: [0x178]u8, // 0xC28
        m_fSpeedMax: [0x178]u8, // 0xDA0
        m_fSpeedRandExp: [0x4]u8, // 0xF18
        m_bLocalCoords: [0x4]u8, // 0xF1C
        m_LocalCoordinateSystemSpeedMin: [0x6D8]u8, // 0xF20
        m_LocalCoordinateSystemSpeedMax: [0x6D8]u8, // 0x15F8
        m_nFieldOutput: [0x4]u8, // 0x1CD0
        m_nFieldVelocity: [0x4]u8, // 0x1CD4
    };
    pub const C_OP_RadiusDecay = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flMinRadius: [0x8]u8, // 0x1E0
    };
    pub const C_INIT_RemapNamedModelBodyPartToScalar = extern struct {
        pad_0: [0x230]u8, // 0x0
    };
    pub const C_INIT_RemapScalarToVector = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nFieldInput: [0x4]u8, // 0x1E8
        m_nFieldOutput: [0x4]u8, // 0x1EC
        m_flInputMin: [0x4]u8, // 0x1F0
        m_flInputMax: [0x4]u8, // 0x1F4
        m_vecOutputMin: [0xC]u8, // 0x1F8
        m_vecOutputMax: [0xC]u8, // 0x204
        m_flStartTime: [0x4]u8, // 0x210
        m_flEndTime: [0x4]u8, // 0x214
        m_nSetMethod: [0x4]u8, // 0x218
        m_nControlPointNumber: [0x4]u8, // 0x21C
        m_bLocalCoords: [0x4]u8, // 0x220
        m_flRemapBias: [0xC]u8, // 0x224
    };
    pub const C_INIT_InitialSequenceFromModel = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nControlPointNumber: [0x4]u8, // 0x1E8
        m_nFieldOutput: [0x4]u8, // 0x1EC
        m_nFieldOutputAnim: [0x4]u8, // 0x1F0
        m_flInputMin: [0x4]u8, // 0x1F4
        m_flInputMax: [0x4]u8, // 0x1F8
        m_flOutputMin: [0x4]u8, // 0x1FC
        m_flOutputMax: [0x4]u8, // 0x200
        m_nSetMethod: [0x4]u8, // 0x204
    };
    pub const C_OP_NoiseEmitter = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_flEmissionDuration: [0x4]u8, // 0x1E8
        m_flStartTime: [0x4]u8, // 0x1EC
        m_flEmissionScale: [0x4]u8, // 0x1F0
        m_nScaleControlPoint: [0x4]u8, // 0x1F4
        m_nScaleControlPointField: [0x4]u8, // 0x1F8
        m_nWorldNoisePoint: [0x4]u8, // 0x1FC
        m_bAbsVal: [0x1]u8, // 0x200
        m_bAbsValInv: [0x3]u8, // 0x201
        m_flOffset: [0x4]u8, // 0x204
        m_flOutputMin: [0x4]u8, // 0x208
        m_flOutputMax: [0x4]u8, // 0x20C
        m_flNoiseScale: [0x4]u8, // 0x210
        m_flWorldNoiseScale: [0x4]u8, // 0x214
        m_vecOffsetLoc: [0xC]u8, // 0x218
        m_flWorldTimeScale: [0x4]u8, // 0x224
    };
    pub const CParticleFunctionInitializer = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nAssociatedEmitterIndex: [0x8]u8, // 0x1E0
    };
    pub const C_OP_SelectivelyEnableChildren = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nChildGroupID: [0x178]u8, // 0x1E8
        m_nFirstChild: [0x178]u8, // 0x360
        m_nNumChildrenToEnable: [0x178]u8, // 0x4D8
        m_bPlayEndcapOnStop: [0x1]u8, // 0x650
        m_bDestroyImmediately: [0x7]u8, // 0x651
    };
    pub const ModelReference_t = extern struct {
        m_model: [0x8]u8, // 0x0
        m_flRelativeProbabilityOfSpawn: [0x8]u8, // 0x8
    };
    pub const C_OP_PlanarConstraint = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_PointOnPlane: [0xC]u8, // 0x1E0
        m_PlaneNormal: [0xC]u8, // 0x1EC
        m_nControlPointNumber: [0x4]u8, // 0x1F8
        m_bGlobalOrigin: [0x1]u8, // 0x1FC
        m_bGlobalNormal: [0x3]u8, // 0x1FD
        m_flRadiusScale: [0x178]u8, // 0x200
        m_flMaximumDistanceToCP: [0x178]u8, // 0x378
        m_bUseOldCode: [0x8]u8, // 0x4F0
    };
    pub const C_INIT_CreateFromCPs = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nIncrement: [0x4]u8, // 0x1E8
        m_nMinCP: [0x4]u8, // 0x1EC
        m_nMaxCP: [0x8]u8, // 0x1F0
        m_nDynamicCPCount: [0x178]u8, // 0x1F8
    };
    pub const C_OP_LockPoints = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nMinCol: [0x4]u8, // 0x1E0
        m_nMaxCol: [0x4]u8, // 0x1E4
        m_nMinRow: [0x4]u8, // 0x1E8
        m_nMaxRow: [0x4]u8, // 0x1EC
        m_nControlPoint: [0x4]u8, // 0x1F0
        m_flBlendValue: [0x4]u8, // 0x1F4
    };
    pub const C_INIT_CreateSpiralSphere = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_TransformInput: [0x68]u8, // 0x1E8
        m_flDensity: [0x178]u8, // 0x250
        m_flInitialRadius: [0x178]u8, // 0x3C8
        m_flInitialSpeedMin: [0x178]u8, // 0x540
        m_flInitialSpeedMax: [0x178]u8, // 0x6B8
        m_bUseParticleCount: [0x8]u8, // 0x830
    };
    pub const C_OP_CPVelocityForce = extern struct {
        pad_0: [0x1F0]u8, // 0x0
        m_nControlPointNumber: [0x8]u8, // 0x1F0
        m_flScale: [0x178]u8, // 0x1F8
    };
    pub const C_OP_RemapNamedModelElementEndCap = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_hModel: [0x8]u8, // 0x1E0
        m_inNames: [0x18]u8, // 0x1E8
        m_outNames: [0x18]u8, // 0x200
        m_fallbackNames: [0x18]u8, // 0x218
        m_bModelFromRenderer: [0x4]u8, // 0x230
        m_nFieldInput: [0x4]u8, // 0x234
        m_nFieldOutput: [0x8]u8, // 0x238
    };
    pub const C_INIT_ScaleVelocity = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_vecScale: [0x6D8]u8, // 0x1E8
    };
    pub const C_OP_MoveToHitbox = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_modelInput: [0x60]u8, // 0x1E0
        m_transformInput: [0x6C]u8, // 0x240
        m_flLifeTimeLerpStart: [0x4]u8, // 0x2AC
        m_flLifeTimeLerpEnd: [0x4]u8, // 0x2B0
        m_flPrevPosScale: [0x4]u8, // 0x2B4
        m_HitboxSetName: [0x80]u8, // 0x2B8
        m_bUseBones: [0x4]u8, // 0x338
        m_nLerpType: [0x4]u8, // 0x33C
        m_flInterpolation: [0x178]u8, // 0x340
    };
    pub const C_OP_PinRopeSegmentParticleToParent = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nParticleSelection: [0x8]u8, // 0x1E0
        m_nParticleNumber: [0x178]u8, // 0x1E8
        m_flInterpolation: [0x178]u8, // 0x360
    };
    pub const C_INIT_PointList = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nFieldOutput: [0x8]u8, // 0x1E8
        m_pointList: [0x18]u8, // 0x1F0
        m_bPlaceAlongPath: [0x1]u8, // 0x208
        m_bClosedLoop: [0x3]u8, // 0x209
        m_nNumPointsAlongPath: [0x4]u8, // 0x20C
    };
    pub const C_OP_LerpToOtherAttribute = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flInterpolation: [0x178]u8, // 0x1E0
        m_nFieldInputFrom: [0x4]u8, // 0x358
        m_nFieldInput: [0x4]u8, // 0x35C
        m_nFieldOutput: [0x30]u8, // 0x360
    };
    pub const C_INIT_RandomColor = extern struct {
        pad_0: [0x204]u8, // 0x0
        m_ColorMin: [0x4]u8, // 0x204
        m_ColorMax: [0x4]u8, // 0x208
        m_TintMin: [0x4]u8, // 0x20C
        m_TintMax: [0x4]u8, // 0x210
        m_flTintPerc: [0x4]u8, // 0x214
        m_flUpdateThreshold: [0x4]u8, // 0x218
        m_nTintCP: [0x4]u8, // 0x21C
        m_nFieldOutput: [0x4]u8, // 0x220
        m_nTintBlendMode: [0x4]u8, // 0x224
        m_flLightAmplification: [0x8]u8, // 0x228
    };
    pub const C_OP_SetGravityToCP = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nCPInput: [0x4]u8, // 0x1E8
        m_nCPOutput: [0x4]u8, // 0x1EC
        m_flScale: [0x178]u8, // 0x1F0
        m_bSetPosition: [0x1]u8, // 0x368
        m_bSetOrientation: [0x1]u8, // 0x369
        m_bSetZDown: [0x6]u8, // 0x36A
    };
    pub const C_INIT_RemapParticleCountToScalar = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nFieldOutput: [0x4]u8, // 0x1E8
        m_nInputMin: [0x4]u8, // 0x1EC
        m_nInputMax: [0x4]u8, // 0x1F0
        m_nScaleControlPoint: [0x4]u8, // 0x1F4
        m_nScaleControlPointField: [0x4]u8, // 0x1F8
        m_flOutputMin: [0x4]u8, // 0x1FC
        m_flOutputMax: [0x4]u8, // 0x200
        m_nSetMethod: [0x4]u8, // 0x204
        m_bActiveRange: [0x1]u8, // 0x208
        m_bInvert: [0x1]u8, // 0x209
        m_bWrap: [0x2]u8, // 0x20A
        m_flRemapBias: [0xC]u8, // 0x20C
    };
    pub const C_INIT_InheritFromParentParticles = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_flScale: [0x4]u8, // 0x1E8
        m_nFieldOutput: [0x4]u8, // 0x1EC
        m_nIncrement: [0x4]u8, // 0x1F0
        m_bRandomDistribution: [0x4]u8, // 0x1F4
        m_nRandomSeed: [0x8]u8, // 0x1F8
    };
    pub const C_OP_RampScalarLinearSimple = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_Rate: [0x4]u8, // 0x1E0
        m_flStartTime: [0x4]u8, // 0x1E4
        m_flEndTime: [0x28]u8, // 0x1E8
        m_nField: [0x10]u8, // 0x210
    };
    pub const C_INIT_ChaoticAttractor = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_flAParm: [0x4]u8, // 0x1E8
        m_flBParm: [0x4]u8, // 0x1EC
        m_flCParm: [0x4]u8, // 0x1F0
        m_flDParm: [0x4]u8, // 0x1F4
        m_flScale: [0x4]u8, // 0x1F8
        m_flSpeedMin: [0x4]u8, // 0x1FC
        m_flSpeedMax: [0x4]u8, // 0x200
        m_nBaseCP: [0x4]u8, // 0x204
        m_bUniformSpeed: [0x8]u8, // 0x208
    };
    pub const C_OP_MovementRigidAttachToCP = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nControlPointNumber: [0x4]u8, // 0x1E0
        m_nScaleControlPoint: [0x4]u8, // 0x1E4
        m_nScaleCPField: [0x4]u8, // 0x1E8
        m_nFieldInput: [0x4]u8, // 0x1EC
        m_nFieldOutput: [0x4]u8, // 0x1F0
        m_bOffsetLocal: [0x4]u8, // 0x1F4
    };
    pub const C_OP_RenderFlattenGrass = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_flFlattenStrength: [0x4]u8, // 0x230
        m_nStrengthFieldOverride: [0x4]u8, // 0x234
        m_flRadiusScale: [0x8]u8, // 0x238
    };
    pub const C_OP_RenderLightBeam = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_nMaxAllowed: [0x8]u8, // 0x230
        m_vColorBlend: [0x6D8]u8, // 0x238
        m_nColorBlendType: [0x8]u8, // 0x910
        m_strLightStyle: [0x8]u8, // 0x918
        m_flLightStyleTime: [0x178]u8, // 0x920
        m_flBrightnessLumensPerMeter: [0x178]u8, // 0xA98
        m_flNumberOfLightsToCreate: [0x178]u8, // 0xC10
        m_bCastShadows: [0x1]u8, // 0xD88
        m_bDynamicBounce: [0x7]u8, // 0xD89
        m_flBounceScale: [0x178]u8, // 0xD90
        m_flSkirt: [0x178]u8, // 0xF08
        m_flRange: [0x178]u8, // 0x1080
        m_flThickness: [0x178]u8, // 0x11F8
        m_flInnerConeAngle: [0x178]u8, // 0x1370
        m_flOuterConeAngle: [0x178]u8, // 0x14E8
        m_vecConeRotationOffset: [0x6D8]u8, // 0x1660
        m_nFogLightingMode: [0x8]u8, // 0x1D38
        m_flFogContribution: [0x178]u8, // 0x1D40
        m_flRenderFilter: [0x178]u8, // 0x1EB8
        m_bDebugOrientation: [0x8]u8, // 0x2030
    };
    pub const C_INIT_SkyVisCull = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_vecTestDir: [0x6D8]u8, // 0x1E8
        m_nTraceSet: [0x4]u8, // 0x8C0
        m_bCullOnSky: [0x4]u8, // 0x8C4
    };
    pub const C_OP_EnableChildrenFromParentParticleCount = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nChildGroupID: [0x4]u8, // 0x1E8
        m_nFirstChild: [0x4]u8, // 0x1EC
        m_nNumChildrenToEnable: [0x178]u8, // 0x1F0
        m_bDisableChildren: [0x1]u8, // 0x368
        m_bPlayEndcapOnStop: [0x1]u8, // 0x369
        m_bDestroyImmediately: [0x6]u8, // 0x36A
    };
    pub const C_INIT_DistanceToCPInit = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nFieldOutput: [0x8]u8, // 0x1E8
        m_flInputMin: [0x178]u8, // 0x1F0
        m_flInputMax: [0x178]u8, // 0x368
        m_flOutputMin: [0x178]u8, // 0x4E0
        m_flOutputMax: [0x178]u8, // 0x658
        m_nStartCP: [0x4]u8, // 0x7D0
        m_bLOS: [0x1]u8, // 0x7D4
        m_CollisionGroupName: [0x83]u8, // 0x7D5
        m_nTraceSet: [0x8]u8, // 0x858
        m_flMaxTraceLength: [0x178]u8, // 0x860
        m_flLOSScale: [0x4]u8, // 0x9D8
        m_nSetMethod: [0x4]u8, // 0x9DC
        m_bActiveRange: [0x4]u8, // 0x9E0
        m_vecDistanceScale: [0xC]u8, // 0x9E4
        m_flRemapBias: [0x8]u8, // 0x9F0
    };
    pub const C_OP_EndCapDecay = extern struct {
        pad_0: [0x1E0]u8, // 0x0
    };
    pub const C_OP_ForceBasedOnDistanceToPlane = extern struct {
        pad_0: [0x1F0]u8, // 0x0
        m_flMinDist: [0x4]u8, // 0x1F0
        m_vecForceAtMinDist: [0xC]u8, // 0x1F4
        m_flMaxDist: [0x4]u8, // 0x200
        m_vecForceAtMaxDist: [0xC]u8, // 0x204
        m_vecPlaneNormal: [0xC]u8, // 0x210
        m_nControlPointNumber: [0x4]u8, // 0x21C
        m_flExponent: [0x8]u8, // 0x220
    };
    pub const C_OP_RemapDensityToVector = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flRadiusScale: [0x4]u8, // 0x1E0
        m_nFieldOutput: [0x4]u8, // 0x1E4
        m_flDensityMin: [0x4]u8, // 0x1E8
        m_flDensityMax: [0x4]u8, // 0x1EC
        m_vecOutputMin: [0xC]u8, // 0x1F0
        m_vecOutputMax: [0xC]u8, // 0x1FC
        m_bUseParentDensity: [0x4]u8, // 0x208
        m_nVoxelGridResolution: [0x4]u8, // 0x20C
    };
    pub const ParticleControlPointConfiguration_t = extern struct {
        m_name: [0x8]u8, // 0x0
        m_drivers: [0x18]u8, // 0x8
        m_previewState: [0x70]u8, // 0x20
    };
    pub const C_INIT_SetRigidAttachment = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nControlPointNumber: [0x4]u8, // 0x1E8
        m_nFieldInput: [0x4]u8, // 0x1EC
        m_nFieldOutput: [0x4]u8, // 0x1F0
        m_bLocalSpace: [0x4]u8, // 0x1F4
    };
    pub const MaterialVariable_t = extern struct {
        m_strVariable: [0x8]u8, // 0x0
        m_nVariableField: [0x4]u8, // 0x8
        m_flScale: [0x4]u8, // 0xC
    };
    pub const CParticleFunctionConstraint = extern struct {
        pad_0: [0x1E0]u8, // 0x0
    };
    pub const C_OP_RemapSpeed = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldOutput: [0x4]u8, // 0x1E0
        m_flInputMin: [0x4]u8, // 0x1E4
        m_flInputMax: [0x4]u8, // 0x1E8
        m_flOutputMin: [0x4]u8, // 0x1EC
        m_flOutputMax: [0x4]u8, // 0x1F0
        m_nSetMethod: [0x4]u8, // 0x1F4
        m_bIgnoreDelta: [0x8]u8, // 0x1F8
    };
    pub const C_OP_RenderModels = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_bOnlyRenderInEffectsBloomPass: [0x1]u8, // 0x230
        m_bOnlyRenderInEffectsWaterPass: [0x1]u8, // 0x231
        m_bUseMixedResolutionRendering: [0x1]u8, // 0x232
        m_bOnlyRenderInEffecsGameOverlay: [0x5]u8, // 0x233
        m_ModelList: [0x18]u8, // 0x238
        m_nBodyGroupField: [0x4]u8, // 0x250
        m_nSubModelField: [0x4]u8, // 0x254
        m_bIgnoreNormal: [0x1]u8, // 0x258
        m_bOrientZ: [0x1]u8, // 0x259
        m_bCenterOffset: [0x6]u8, // 0x25A
        m_vecLocalOffset: [0x6D8]u8, // 0x260
        m_vecLocalRotation: [0x6D8]u8, // 0x938
        m_bIgnoreRadius: [0x4]u8, // 0x1010
        m_nModelScaleCP: [0x4]u8, // 0x1014
        m_vecComponentScale: [0x6D8]u8, // 0x1018
        m_bLocalScale: [0x4]u8, // 0x16F0
        m_nSizeCullBloat: [0x4]u8, // 0x16F4
        m_bAnimated: [0x8]u8, // 0x16F8
        m_flAnimationRate: [0x178]u8, // 0x1700
        m_bScaleAnimationRate: [0x1]u8, // 0x1878
        m_bForceLoopingAnimation: [0x1]u8, // 0x1879
        m_bResetAnimOnStop: [0x1]u8, // 0x187A
        m_bManualAnimFrame: [0x1]u8, // 0x187B
        m_nAnimationScaleField: [0x4]u8, // 0x187C
        m_nAnimationField: [0x4]u8, // 0x1880
        m_nManualFrameField: [0x4]u8, // 0x1884
        m_ActivityName: [0x100]u8, // 0x1888
        m_SequenceName: [0x100]u8, // 0x1988
        m_bEnableClothSimulation: [0x1]u8, // 0x1A88
        m_bDisableClothGroundCollision: [0x1]u8, // 0x1A89
        m_ClothEffectName: [0x46]u8, // 0x1A8A
        m_hOverrideMaterial: [0x8]u8, // 0x1AD0
        m_bOverrideTranslucentMaterials: [0x8]u8, // 0x1AD8
        m_nSkin: [0x178]u8, // 0x1AE0
        m_MaterialVars: [0x18]u8, // 0x1C58
        m_flRenderFilter: [0x178]u8, // 0x1C70
        m_flManualModelSelection: [0x178]u8, // 0x1DE8
        m_modelInput: [0x60]u8, // 0x1F60
        m_nLOD: [0x4]u8, // 0x1FC0
        m_EconSlotName: [0x100]u8, // 0x1FC4
        m_bOriginalModel: [0x1]u8, // 0x20C4
        m_bSuppressTint: [0x3]u8, // 0x20C5
        m_nSubModelFieldType: [0x4]u8, // 0x20C8
        m_bDisableShadows: [0x1]u8, // 0x20CC
        m_bDisableDepthPrepass: [0x1]u8, // 0x20CD
        m_bAcceptsDecals: [0x1]u8, // 0x20CE
        m_bForceDrawInterlevedWithSiblings: [0x1]u8, // 0x20CF
        m_bDoNotDrawInParticlePass: [0x1]u8, // 0x20D0
        m_bAllowApproximateTransforms: [0x1]u8, // 0x20D1
        m_szRenderAttribute: [0x106]u8, // 0x20D2
        m_flRadiusScale: [0x178]u8, // 0x21D8
        m_flAlphaScale: [0x178]u8, // 0x2350
        m_flRollScale: [0x178]u8, // 0x24C8
        m_nAlpha2Field: [0x8]u8, // 0x2640
        m_vecColorScale: [0x6D8]u8, // 0x2648
        m_nColorBlendType: [0x8]u8, // 0x2D20
        m_strLightStyle: [0x8]u8, // 0x2D28
        m_flLightStyleTime: [0x1B8]u8, // 0x2D30
    };
    pub const C_OP_RenderClientPhysicsImpulse = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_flRadius: [0x178]u8, // 0x230
        m_flMagnitude: [0x178]u8, // 0x3A8
        m_nSimIdFilter: [0x8]u8, // 0x520
    };
    pub const CParticleFunctionEmitter = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nEmitterIndex: [0x8]u8, // 0x1E0
    };
    pub const C_INIT_RemapNamedModelMeshGroupToScalar = extern struct {
        pad_0: [0x230]u8, // 0x0
    };
    pub const C_OP_SetControlPointOrientationToCPVelocity = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nCPInput: [0x4]u8, // 0x1E8
        m_nCPOutput: [0x4]u8, // 0x1EC
    };
    pub const C_OP_RopeSpringConstraint = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flRestLength: [0x178]u8, // 0x1E0
        m_flMinDistance: [0x178]u8, // 0x358
        m_flMaxDistance: [0x178]u8, // 0x4D0
        m_flAdjustmentScale: [0x8]u8, // 0x648
        m_flInitialRestingLength: [0x178]u8, // 0x650
    };
    pub const C_INIT_PositionWarpScalar = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_vecWarpMin: [0xC]u8, // 0x1E8
        m_vecWarpMax: [0xC]u8, // 0x1F4
        m_InputValue: [0x178]u8, // 0x200
        m_flPrevPosScale: [0x4]u8, // 0x378
        m_nScaleControlPointNumber: [0x4]u8, // 0x37C
        m_nControlPointNumber: [0x8]u8, // 0x380
    };
    pub const C_OP_ForceControlPointStub = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_ControlPoint: [0x8]u8, // 0x1E8
    };
    pub const C_OP_VectorNoise = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldOutput: [0x4]u8, // 0x1E0
        m_vecOutputMin: [0xC]u8, // 0x1E4
        m_vecOutputMax: [0xC]u8, // 0x1F0
        m_fl4NoiseScale: [0x4]u8, // 0x1FC
        m_bAdditive: [0x1]u8, // 0x200
        m_bOffset: [0x3]u8, // 0x201
        m_flNoiseAnimationTimeScale: [0x4]u8, // 0x204
    };
    pub const C_OP_RemapParticleCountToScalar = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldOutput: [0x8]u8, // 0x1E0
        m_nInputMin: [0x178]u8, // 0x1E8
        m_nInputMax: [0x178]u8, // 0x360
        m_flOutputMin: [0x178]u8, // 0x4D8
        m_flOutputMax: [0x178]u8, // 0x650
        m_bActiveRange: [0x4]u8, // 0x7C8
        m_nSetMethod: [0x4]u8, // 0x7CC
    };
    pub const C_INIT_QuantizeFloat = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_InputValue: [0x178]u8, // 0x1E8
        m_nOutputField: [0x8]u8, // 0x360
    };
    pub const C_OP_RemapModelVolumetoCP = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nBBoxType: [0x4]u8, // 0x1E8
        m_nInControlPointNumber: [0x4]u8, // 0x1EC
        m_nOutControlPointNumber: [0x4]u8, // 0x1F0
        m_nOutControlPointMaxNumber: [0x4]u8, // 0x1F4
        m_nField: [0x4]u8, // 0x1F8
        m_flInputMin: [0x4]u8, // 0x1FC
        m_flInputMax: [0x4]u8, // 0x200
        m_flOutputMin: [0x4]u8, // 0x204
        m_flOutputMax: [0x4]u8, // 0x208
        m_bBBoxOnly: [0x1]u8, // 0x20C
        m_bCubeRoot: [0x3]u8, // 0x20D
    };
    pub const C_OP_SetToCP = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nControlPointNumber: [0x4]u8, // 0x1E0
        m_vecOffset: [0xC]u8, // 0x1E4
        m_bOffsetLocal: [0x8]u8, // 0x1F0
    };
    pub const ParticleControlPointDriver_t = extern struct {
        m_iControlPoint: [0x10]u8, // 0x0
        m_iAttachType: [0x8]u8, // 0x10
        m_attachmentName: [0x8]u8, // 0x18
        m_vecOffset: [0xC]u8, // 0x20
        m_angOffset: [0xC]u8, // 0x2C
        m_entityName: [0x8]u8, // 0x38
    };
    pub const C_OP_ParentVortices = extern struct {
        pad_0: [0x1F0]u8, // 0x0
        m_flForceScale: [0x4]u8, // 0x1F0
        m_vecTwistAxis: [0xC]u8, // 0x1F4
        m_bFlipBasedOnYaw: [0x8]u8, // 0x200
    };
    pub const C_OP_SetControlPointToCPVelocity = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nCPInput: [0x4]u8, // 0x1E8
        m_nCPOutputVel: [0x4]u8, // 0x1EC
        m_bNormalize: [0x4]u8, // 0x1F0
        m_nCPOutputMag: [0x4]u8, // 0x1F4
        m_nCPField: [0x8]u8, // 0x1F8
        m_vecComparisonVelocity: [0x6D8]u8, // 0x200
    };
    pub const C_OP_ClientPhysics = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_strPhysicsType: [0x8]u8, // 0x230
        m_bStartAsleep: [0x8]u8, // 0x238
        m_flPlayerWakeRadius: [0x178]u8, // 0x240
        m_flVehicleWakeRadius: [0x178]u8, // 0x3B8
        m_bUseHighQualitySimulation: [0x4]u8, // 0x530
        m_nMaxParticleCount: [0x4]u8, // 0x534
        m_bRespectExclusionVolumes: [0x1]u8, // 0x538
        m_bKillParticles: [0x1]u8, // 0x539
        m_bDeleteSim: [0x2]u8, // 0x53A
        m_nControlPoint: [0x4]u8, // 0x53C
        m_nForcedSimId: [0x4]u8, // 0x540
        m_nColorBlendType: [0x4]u8, // 0x544
        m_nForcedStatusEffects: [0x4]u8, // 0x548
        m_nNoCollisionAttribute: [0x4]u8, // 0x54C
        m_nZeroGravityAttribute: [0x8]u8, // 0x550
    };
    pub const C_OP_SpinYaw = extern struct {
        pad_0: [0x1F8]u8, // 0x0
    };
    pub const PointDefinitionWithTimeValues_t = extern struct {
        pad_0: [0x14]u8, // 0x0
        m_flTimeDuration: [0x4]u8, // 0x14
    };
    pub const RenderProjectedMaterial_t = extern struct {
        m_hMaterial: [0x8]u8, // 0x0
    };
    pub const C_INIT_SetFloatAttributeToVectorExpression = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nExpression: [0x8]u8, // 0x1E8
        m_vInput1: [0x6D8]u8, // 0x1F0
        m_vInput2: [0x6D8]u8, // 0x8C8
        m_flOutputRemap: [0x178]u8, // 0xFA0
        m_nOutputField: [0x4]u8, // 0x1118
        m_nSetMethod: [0x4]u8, // 0x111C
    };
    pub const C_OP_ExternalWindForce = extern struct {
        pad_0: [0x1F0]u8, // 0x0
        m_vecSamplePosition: [0x6D8]u8, // 0x1F0
        m_vecScale: [0x6D8]u8, // 0x8C8
        m_bSampleWind: [0x1]u8, // 0xFA0
        m_bSampleWater: [0x1]u8, // 0xFA1
        m_bDampenNearWaterPlane: [0x1]u8, // 0xFA2
        m_bSampleGravity: [0x5]u8, // 0xFA3
        m_vecGravityForce: [0x6D8]u8, // 0xFA8
        m_bUseBasicMovementGravity: [0x8]u8, // 0x1680
        m_flLocalGravityScale: [0x178]u8, // 0x1688
        m_flLocalBuoyancyScale: [0x178]u8, // 0x1800
        m_vecBuoyancyForce: [0x6D8]u8, // 0x1978
    };
    pub const C_INIT_ModelCull = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_nControlPointNumber: [0x4]u8, // 0x1E8
        m_bBoundBox: [0x1]u8, // 0x1EC
        m_bCullOutside: [0x1]u8, // 0x1ED
        m_bUseBones: [0x1]u8, // 0x1EE
        m_HitboxSetName: [0x81]u8, // 0x1EF
    };
    pub const C_OP_RenderSprites = extern struct {
        pad_0: [0x2ED8]u8, // 0x0
        m_nSequenceOverride: [0x178]u8, // 0x2ED8
        m_bSequenceNumbersAreRawSequenceIndices: [0x4]u8, // 0x3050
        m_nOrientationType: [0x4]u8, // 0x3054
        m_nOrientationControlPoint: [0x4]u8, // 0x3058
        m_bUseYawWithNormalAligned: [0x4]u8, // 0x305C
        m_flMinSize: [0x178]u8, // 0x3060
        m_flMaxSize: [0x178]u8, // 0x31D8
        m_flSubPixelAAScale: [0x178]u8, // 0x3350
        m_flStartFadeSize: [0x178]u8, // 0x34C8
        m_flEndFadeSize: [0x178]u8, // 0x3640
        m_flStartFadeDot: [0x4]u8, // 0x37B8
        m_flEndFadeDot: [0x4]u8, // 0x37BC
        m_bDistanceAlpha: [0x1]u8, // 0x37C0
        m_bSoftEdges: [0x3]u8, // 0x37C1
        m_flEdgeSoftnessStart: [0x4]u8, // 0x37C4
        m_flEdgeSoftnessEnd: [0x4]u8, // 0x37C8
        m_bOutline: [0x4]u8, // 0x37CC
        m_OutlineColor: [0x4]u8, // 0x37D0
        m_nOutlineAlpha: [0x4]u8, // 0x37D4
        m_flOutlineStart0: [0x4]u8, // 0x37D8
        m_flOutlineStart1: [0x4]u8, // 0x37DC
        m_flOutlineEnd0: [0x4]u8, // 0x37E0
        m_flOutlineEnd1: [0x4]u8, // 0x37E4
        m_nLightingMode: [0x8]u8, // 0x37E8
        m_vecLightingOverride: [0x6D8]u8, // 0x37F0
        m_flLightingTessellation: [0x178]u8, // 0x3EC8
        m_flLightingDirectionality: [0x178]u8, // 0x4040
        m_bParticleShadows: [0x4]u8, // 0x41B8
        m_flShadowDensity: [0xC]u8, // 0x41BC
    };
    pub const C_OP_PercentageBetweenTransformLerpCPs = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldOutput: [0x4]u8, // 0x1E0
        m_flInputMin: [0x4]u8, // 0x1E4
        m_flInputMax: [0x8]u8, // 0x1E8
        m_TransformStart: [0x68]u8, // 0x1F0
        m_TransformEnd: [0x68]u8, // 0x258
        m_nOutputStartCP: [0x4]u8, // 0x2C0
        m_nOutputStartField: [0x4]u8, // 0x2C4
        m_nOutputEndCP: [0x4]u8, // 0x2C8
        m_nOutputEndField: [0x4]u8, // 0x2CC
        m_nSetMethod: [0x4]u8, // 0x2D0
        m_bActiveRange: [0x1]u8, // 0x2D4
        m_bRadialCheck: [0x3]u8, // 0x2D5
    };
    pub const C_OP_SetPerChildControlPoint = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nChildGroupID: [0x4]u8, // 0x1E0
        m_nFirstControlPoint: [0x4]u8, // 0x1E4
        m_nNumControlPoints: [0x8]u8, // 0x1E8
        m_nParticleIncrement: [0x178]u8, // 0x1F0
        m_nFirstSourcePoint: [0x178]u8, // 0x368
        m_bSetOrientation: [0x4]u8, // 0x4E0
        m_nOrientationField: [0x4]u8, // 0x4E4
        m_bNumBasedOnParticleCount: [0x8]u8, // 0x4E8
    };
    pub const C_OP_RenderTreeShake = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_flPeakStrength: [0x4]u8, // 0x230
        m_nPeakStrengthFieldOverride: [0x4]u8, // 0x234
        m_flRadius: [0x4]u8, // 0x238
        m_nRadiusFieldOverride: [0x4]u8, // 0x23C
        m_flShakeDuration: [0x4]u8, // 0x240
        m_flTransitionTime: [0x4]u8, // 0x244
        m_flTwistAmount: [0x4]u8, // 0x248
        m_flRadialAmount: [0x4]u8, // 0x24C
        m_flControlPointOrientationAmount: [0x4]u8, // 0x250
        m_nControlPointForLinearDirection: [0x4]u8, // 0x254
    };
    pub const C_OP_WorldCollideConstraint = extern struct {
        pad_0: [0x1E0]u8, // 0x0
    };
    pub const C_OP_SetAttributeToScalarExpression = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nExpression: [0x8]u8, // 0x1E0
        m_flInput1: [0x178]u8, // 0x1E8
        m_flInput2: [0x178]u8, // 0x360
        m_flOutputRemap: [0x178]u8, // 0x4D8
        m_nOutputField: [0x4]u8, // 0x650
        m_nSetMethod: [0x2C]u8, // 0x654
    };
    pub const C_OP_CycleScalar = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nDestField: [0x4]u8, // 0x1E0
        m_flStartValue: [0x4]u8, // 0x1E4
        m_flEndValue: [0x4]u8, // 0x1E8
        m_flCycleTime: [0x4]u8, // 0x1EC
        m_bDoNotRepeatCycle: [0x1]u8, // 0x1F0
        m_bSynchronizeParticles: [0x3]u8, // 0x1F1
        m_nCPScale: [0x4]u8, // 0x1F4
        m_nCPFieldMin: [0x4]u8, // 0x1F8
        m_nCPFieldMax: [0x4]u8, // 0x1FC
        m_nSetMethod: [0x8]u8, // 0x200
    };
    pub const C_OP_RenderMaterialProxy = extern struct {
        pad_0: [0x230]u8, // 0x0
        m_nMaterialControlPoint: [0x4]u8, // 0x230
        m_nProxyType: [0x4]u8, // 0x234
        m_MaterialVars: [0x18]u8, // 0x238
        m_hOverrideMaterial: [0x8]u8, // 0x250
        m_flMaterialOverrideEnabled: [0x178]u8, // 0x258
        m_vecColorScale: [0x6D8]u8, // 0x3D0
        m_flAlpha: [0x178]u8, // 0xAA8
        m_nColorBlendType: [0x20]u8, // 0xC20
    };
    pub const FloatInputMaterialVariable_t = extern struct {
        m_strVariable: [0x8]u8, // 0x0
        m_flInput: [0x178]u8, // 0x8
    };
    pub const C_OP_RampScalarLinear = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_RateMin: [0x4]u8, // 0x1E0
        m_RateMax: [0x4]u8, // 0x1E4
        m_flStartTime_min: [0x4]u8, // 0x1E8
        m_flStartTime_max: [0x4]u8, // 0x1EC
        m_flEndTime_min: [0x4]u8, // 0x1F0
        m_flEndTime_max: [0x2C]u8, // 0x1F4
        m_nField: [0x4]u8, // 0x220
        m_bProportionalOp: [0xC]u8, // 0x224
    };
    pub const C_OP_RotateVector = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldOutput: [0x4]u8, // 0x1E0
        m_vecRotAxisMin: [0xC]u8, // 0x1E4
        m_vecRotAxisMax: [0xC]u8, // 0x1F0
        m_flRotRateMin: [0x4]u8, // 0x1FC
        m_flRotRateMax: [0x4]u8, // 0x200
        m_bNormalize: [0x4]u8, // 0x204
        m_flScale: [0x178]u8, // 0x208
    };
    pub const C_INIT_InitVecCollection = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_InputValue: [0x6D8]u8, // 0x1E8
        m_nOutputField: [0x8]u8, // 0x8C0
    };
    pub const C_INIT_RemapParticleCountToNamedModelMeshGroupScalar = extern struct {
        pad_0: [0x238]u8, // 0x0
    };
    pub const C_INIT_SequenceFromCP = extern struct {
        pad_0: [0x1E8]u8, // 0x0
        m_bKillUnused: [0x1]u8, // 0x1E8
        m_bRadiusScale: [0x3]u8, // 0x1E9
        m_nCP: [0x4]u8, // 0x1EC
        m_vecOffset: [0x10]u8, // 0x1F0
    };
    pub const C_OP_CPOffsetToPercentageBetweenCPs = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_flInputMin: [0x4]u8, // 0x1E0
        m_flInputMax: [0x4]u8, // 0x1E4
        m_flInputBias: [0x4]u8, // 0x1E8
        m_nStartCP: [0x4]u8, // 0x1EC
        m_nEndCP: [0x4]u8, // 0x1F0
        m_nOffsetCP: [0x4]u8, // 0x1F4
        m_nOuputCP: [0x4]u8, // 0x1F8
        m_nInputCP: [0x4]u8, // 0x1FC
        m_bRadialCheck: [0x1]u8, // 0x200
        m_bScaleOffset: [0x3]u8, // 0x201
        m_vecOffset: [0xC]u8, // 0x204
    };
    pub const C_OP_LerpEndCapScalar = extern struct {
        pad_0: [0x1E0]u8, // 0x0
        m_nFieldOutput: [0x4]u8, // 0x1E0
        m_flOutput: [0x4]u8, // 0x1E4
        m_flLerpTime: [0x8]u8, // 0x1E8
    };
};
