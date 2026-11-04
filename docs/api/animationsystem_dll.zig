/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

pub const animationsystem = struct {

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
    pub const CAnimationLayer = extern struct {
        m_hSequence: [0xC]u8, // 0x0
        m_flPrevCycle: [0x4]u8, // 0xC
        m_flCycle: [0xC]u8, // 0x10
        m_flWeight: [0xC]u8, // 0x1C
        m_nOrder: [0xC]u8, // 0x28
        m_bLooping: [0x4]u8, // 0x34
        m_nFlags: [0x4]u8, // 0x38
        m_bSequenceFinished: [0x4]u8, // 0x3C
        m_flKillRate: [0x4]u8, // 0x40
        m_flKillDelay: [0x4]u8, // 0x44
        m_nPriority: [0x4]u8, // 0x48
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
    pub const CAnimFrameBlockAnim = extern struct {
        m_nStartFrame: [0x4]u8, // 0x0
        m_nEndFrame: [0x4]u8, // 0x4
        m_segmentIndexArray: [0x18]u8, // 0x8
    };
    pub const CZeroPoseUpdateNode = extern struct {
        pad_0: [0x60]u8, // 0x0
    };
    pub const CSlowDownOnSlopesUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        m_flSlowDownStrength: [0x8]u8, // 0x70
    };
    pub const COrientationWarpUpdateNode = extern struct {
        pad_0: [0x74]u8, // 0x0
        m_eMode: [0x4]u8, // 0x74
        m_hTargetParam: [0x2]u8, // 0x78
        m_hTargetPositionParam: [0x2]u8, // 0x7A
        m_hFallbackTargetPositionParam: [0x4]u8, // 0x7C
        m_eTargetOffsetMode: [0x4]u8, // 0x80
        m_flTargetOffset: [0x4]u8, // 0x84
        m_hTargetOffsetParam: [0x8]u8, // 0x88
        m_damping: [0x18]u8, // 0x90
        m_eRootMotionSource: [0x4]u8, // 0xA8
        m_flMaxRootMotionScale: [0x4]u8, // 0xAC
        m_bEnablePreferredRotationDirection: [0x4]u8, // 0xB0
        m_ePreferredRotationDirection: [0x4]u8, // 0xB4
        m_flPreferredRotationThreshold: [0x8]u8, // 0xB8
    };
    pub const CAnimParameterBase = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_name: [0x8]u8, // 0x18
        m_sComment: [0x8]u8, // 0x20
        m_group: [0x8]u8, // 0x28
        m_id: [0x18]u8, // 0x30
        m_componentName: [0x20]u8, // 0x48
        m_bNetworkingRequested: [0x1]u8, // 0x68
        m_bIsReferenced: [0x7]u8, // 0x69
    };
    pub const CSequenceFinishedAnimTag = extern struct {
        pad_0: [0x58]u8, // 0x0
        m_sequenceName: [0x8]u8, // 0x58
    };
    pub const CSceneObjectData = extern struct {
        m_vMinBounds: [0xC]u8, // 0x0
        m_vMaxBounds: [0xC]u8, // 0xC
        m_drawCalls: [0x10]u8, // 0x18
        m_drawBounds: [0x10]u8, // 0x28
        m_meshlets: [0x10]u8, // 0x38
        m_rtProxyDrawCalls: [0x10]u8, // 0x48
        m_vTintColor: [0x60]u8, // 0x58
    };
    pub const CFootCycle = extern struct {
        pad_0: [0x4]u8, // 0x0
    };
    pub const CParticleModelInput = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nType: [0x8]u8, // 0x10
        m_NamedValue: [0x40]u8, // 0x18
        m_nControlPoint: [0x8]u8, // 0x58
    };
    pub const CInputStreamUpdateNode = extern struct {
        pad_0: [0x60]u8, // 0x0
    };
    pub const CNmFootIKTask = extern struct {
        pad_0: [0x70]u8, // 0x0
        m_nLeftEffectorBoneIdx: [0x4]u8, // 0x70
        m_nRightEffectorBoneIdx: [0xC]u8, // 0x74
        m_leftTargetTransform: [0x20]u8, // 0x80
        m_rightTargetTransform: [0x20]u8, // 0xA0
        m_nLeftTargetBoneIdx: [0x4]u8, // 0xC0
        m_nRightTargetBoneIdx: [0xC]u8, // 0xC4
        m_leftTarget: [0x30]u8, // 0xD0
        m_rightTarget: [0x30]u8, // 0x100
        m_blendMode: [0x4]u8, // 0x130
        m_flBlendWeight: [0x4]u8, // 0x134
        m_bIsTargetInWorldSpace: [0x1]u8, // 0x138
        m_bIsRunningFromDeserializedData: [0x7]u8, // 0x139
    };
    pub const CIntAnimParameter = extern struct {
        pad_0: [0x80]u8, // 0x0
        m_defaultValue: [0x4]u8, // 0x80
        m_minValue: [0x4]u8, // 0x84
        m_maxValue: [0x8]u8, // 0x88
    };
    pub const CNmParameterizedBlendNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_sourceNodeIndices: [0x18]u8, // 0x10
        m_nInputParameterValueNodeIdx: [0x2]u8, // 0x28
        m_bAllowLooping: [0x6]u8, // 0x2A
    };
    pub const CNmScaleTask = extern struct {
        pad_0: [0xD0]u8, // 0x0
    };
    pub const PerTickSettings_t = extern struct {
        m_startingLocalToWorld: [0x20]u8, // 0x0
        m_prevLocalToWorld: [0x20]u8, // 0x20
        m_finalLocalToWorld: [0x20]u8, // 0x40
        m_rootMotion: [0x63C]u8, // 0x60
        m_updateID: [0x8]u8, // 0x69C
        m_flLastTimeStep: [0x4]u8, // 0x6A4
        m_flPrevAnimTime: [0x4]u8, // 0x6A8
        m_flNextAnimTime: [0x8]u8, // 0x6AC
        m_bAwaken: [0x1]u8, // 0x6B4
        m_bTeleported: [0x1]u8, // 0x6B5
        m_bIsClient: [0x1]u8, // 0x6B6
        m_bIsPredicted: [0x9]u8, // 0x6B7
    };
    pub const CNmFrameSnapEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_frameSnapMode: [0x8]u8, // 0x18
    };
    pub const CAnimNodePath = extern struct {
        m_path: [0x2C]u8, // 0x0
        m_nCount: [0x4]u8, // 0x2C
    };
    pub const AnimNodeOutputID = extern struct {
        m_id: [0x4]u8, // 0x0
    };
    pub const CNmSyncTrack = extern struct {
        m_syncEvents: [0xA8]u8, // 0x0
        m_nStartEventOffset: [0x8]u8, // 0xA8
    };
    pub const CSeqBoneMaskList = extern struct {
        m_sName: [0x10]u8, // 0x0
        m_nLocalBoneArray: [0x18]u8, // 0x10
        m_flBoneWeightArray: [0x18]u8, // 0x28
        m_flDefaultMorphCtrlWeight: [0x8]u8, // 0x40
        m_morphCtrlWeightArray: [0x18]u8, // 0x48
    };
    pub const CAnimEncodedFrames = extern struct {
        m_fileName: [0x10]u8, // 0x0
        m_nFrames: [0x4]u8, // 0x10
        m_nFramesPerBlock: [0x4]u8, // 0x14
        m_frameblockArray: [0x18]u8, // 0x18
        m_usageDifferences: [0xA8]u8, // 0x30
    };
    pub const SampleCode = extern struct {
        m_subCode: [0x8]u8, // 0x0
    };
    pub const CCachedPose = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_transforms: [0x18]u8, // 0x8
        m_morphWeights: [0x18]u8, // 0x20
        m_hSequence: [0x4]u8, // 0x38
        m_flCycle: [0x4]u8, // 0x3C
    };
    pub const CNmTransitionEventConditionNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_requireRuleID: [0x8]u8, // 0x10
        m_eventConditionRules: [0x4]u8, // 0x18
        m_nSourceStateNodeIdx: [0x2]u8, // 0x1C
        m_ruleCondition: [0x2]u8, // 0x1E
    };
    pub const CTaskStatusAnimTag = extern struct {
        pad_0: [0x58]u8, // 0x0
    };
    pub const CStateNodeInstanceData = extern struct {
        m_stateWeights: [0x8]u8, // 0x0
        m_vTransitionVelocityDeltaWS: [0x18]u8, // 0x8
        m_currentStateStartTime: [0x1C]u8, // 0x20
        m_resetCount: [0x10]u8, // 0x3C
    };
    pub const CMotionGraphConfig = extern struct {
        m_paramValues: [0x10]u8, // 0x0
        m_flDuration: [0x4]u8, // 0x10
        m_nMotionIndex: [0x4]u8, // 0x14
        m_nSampleStart: [0x4]u8, // 0x18
        m_nSampleCount: [0x4]u8, // 0x1C
    };
    pub const CMotionSearchNode = extern struct {
        m_children: [0x18]u8, // 0x0
        m_quantizer: [0x20]u8, // 0x18
        m_sampleCodes: [0x18]u8, // 0x38
        m_sampleIndices: [0x18]u8, // 0x50
        m_selectableSamples: [0x18]u8, // 0x68
    };
    pub const CAnimActivity = extern struct {
        m_name: [0x10]u8, // 0x0
        m_nActivity: [0x4]u8, // 0x10
        m_nFlags: [0x4]u8, // 0x14
        m_nWeight: [0x8]u8, // 0x18
    };
    pub const CAnimScriptManager = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_scriptInfo: [0x190]u8, // 0x10
    };
    pub const AnimationDecodeDebugDumpElement_t = extern struct {
        m_nEntityIndex: [0x8]u8, // 0x0
        m_modelName: [0x8]u8, // 0x8
        m_poseParams: [0x18]u8, // 0x10
        m_decodeOps: [0x18]u8, // 0x28
        m_internalOps: [0x18]u8, // 0x40
        m_decodedAnims: [0x18]u8, // 0x58
    };
    pub const CChoreoInstanceData = extern struct {
        m_AnimOverlay: [0x398]u8, // 0x0
    };
    pub const PulseRuntimeVarIndex_t = extern struct {
        m_Value: [0x4]u8, // 0x0
    };
    pub const ConfigIndex = extern struct {
        m_nGroup: [0x2]u8, // 0x0
        m_nConfig: [0x2]u8, // 0x2
    };
    pub const VPhysXCollisionAttributes_t = extern struct {
        m_nIncludeDetailLayerCount: [0x4]u8, // 0x0
        m_CollisionGroup: [0x4]u8, // 0x4
        m_InteractAs: [0x18]u8, // 0x8
        m_InteractWith: [0x18]u8, // 0x20
        m_InteractExclude: [0x18]u8, // 0x38
        m_DetailLayers: [0x18]u8, // 0x50
        m_CollisionGroupString: [0x8]u8, // 0x68
        m_InteractAsStrings: [0x18]u8, // 0x70
        m_InteractWithStrings: [0x18]u8, // 0x88
        m_InteractExcludeStrings: [0x18]u8, // 0xA0
        m_DetailLayerStrings: [0x18]u8, // 0xB8
    };
    pub const CSequenceUpdateNode = extern struct {
        pad_0: [0x78]u8, // 0x0
        m_hSequence: [0x4]u8, // 0x78
        m_duration: [0x4]u8, // 0x7C
        m_paramSpans: [0x18]u8, // 0x80
        m_tags: [0x18]u8, // 0x98
    };
    pub const CStateMachineInstanceData = extern struct {
        m_flTimeInState: [0x4]u8, // 0x0
        m_currentTransitionIndex: [0xC]u8, // 0x4
        m_prevStateIndex: [0x4]u8, // 0x10
        m_scheduledTransitionIndex: [0x8]u8, // 0x14
    };
    pub const CNmPassthroughNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nChildNodeIdx: [0x8]u8, // 0x10
    };
    pub const CNmClipReferenceNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const CNmGraphDefinition__ExternalGraphSlot_t = extern struct {
        m_nNodeIdx: [0x8]u8, // 0x0
        m_slotID: [0x8]u8, // 0x8
    };
    pub const PulseRuntimeEntrypointIndex_t = extern struct {
        m_Value: [0x4]u8, // 0x0
    };
    pub const CAimCameraUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        m_hParameterPosition: [0x2]u8, // 0x70
        m_hParameterOrientation: [0x2]u8, // 0x72
        m_hParameterPelvisOffset: [0x2]u8, // 0x74
        m_hParameterCameraOnly: [0x2]u8, // 0x76
        m_hParameterWeaponDepenetrationDistance: [0x2]u8, // 0x78
        m_hParameterWeaponDepenetrationDelta: [0x2]u8, // 0x7A
        m_hParameterCameraClearanceDistance: [0x4]u8, // 0x7C
        m_opFixedSettings: [0x38]u8, // 0x80
    };
    pub const PulseRuntimeDomainValueIndex_t = extern struct {
        m_Value: [0x2]u8, // 0x0
    };
    pub const LookData = extern struct {
        m_vLookTarget: [0x18]u8, // 0x0
    };
    pub const CSeqSeqDescFlag = extern struct {
        m_bLooping: [0x1]u8, // 0x0
        m_bSnap: [0x1]u8, // 0x1
        m_bAutoplay: [0x1]u8, // 0x2
        m_bPost: [0x1]u8, // 0x3
        m_bHidden: [0x1]u8, // 0x4
        m_bMulti: [0x1]u8, // 0x5
        m_bLegacyDelta: [0x1]u8, // 0x6
        m_bLegacyWorldspace: [0x1]u8, // 0x7
        m_bLegacyCyclepose: [0x1]u8, // 0x8
        m_bLegacyRealtime: [0x1]u8, // 0x9
        m_bModelDoc: [0x1]u8, // 0xA
    };
    pub const PermModelInfo_t = extern struct {
        m_nFlags: [0x4]u8, // 0x0
        m_vHullMin: [0xC]u8, // 0x4
        m_vHullMax: [0xC]u8, // 0x10
        m_vViewMin: [0xC]u8, // 0x1C
        m_vViewMax: [0xC]u8, // 0x28
        m_flMass: [0x4]u8, // 0x34
        m_vEyePosition: [0xC]u8, // 0x38
        m_flMaxEyeDeflection: [0x4]u8, // 0x44
        m_sSurfaceProperty: [0x8]u8, // 0x48
        m_keyValueText: [0x8]u8, // 0x50
    };
    pub const StanceInfo_t = extern struct {
        m_vPosition: [0xC]u8, // 0x0
        m_flDirection: [0x4]u8, // 0xC
    };
    pub const IKBoneNameAndIndex_t = extern struct {
        m_Name: [0x10]u8, // 0x0
    };
    pub const CPulse_Chunk = extern struct {
        m_Instructions: [0x10]u8, // 0x0
        m_Registers: [0x10]u8, // 0x10
        m_InstructionDebugInfos: [0x10]u8, // 0x20
        m_nTempVarBank: [0x30]u8, // 0x30
    };
    pub const CStanceScaleUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        m_hParam: [0x8]u8, // 0x70
    };
    pub const CPulseBreakpointLocation = extern struct {
        m_NodeID: [0x8]u8, // 0x0
        m_SequencePoint: [0x10]u8, // 0x8
        m_PortName: [0x10]u8, // 0x18
        m_bDeferBreak: [0x8]u8, // 0x28
    };
    pub const PulseRuntimeInvokeIndex_t = extern struct {
        m_Value: [0x4]u8, // 0x0
    };
    pub const CNmBoneMaskBlendNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nSourceMaskNodeIdx: [0x2]u8, // 0x10
        m_nTargetMaskNodeIdx: [0x2]u8, // 0x12
        m_nBlendWeightValueNodeIdx: [0x4]u8, // 0x14
    };
    pub const CNmIDEventNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nSourceStateNodeIdx: [0x4]u8, // 0x10
        m_eventConditionRules: [0x4]u8, // 0x14
        m_defaultValue: [0x8]u8, // 0x18
    };
    pub const HitReactFixedSettings_t = extern struct {
        m_nWeightListIndex: [0x4]u8, // 0x0
        m_nEffectedBoneCount: [0x4]u8, // 0x4
        m_flMaxImpactForce: [0x4]u8, // 0x8
        m_flMinImpactForce: [0x4]u8, // 0xC
        m_flWhipImpactScale: [0x4]u8, // 0x10
        m_flCounterRotationScale: [0x4]u8, // 0x14
        m_flDistanceFadeScale: [0x4]u8, // 0x18
        m_flPropagationScale: [0x4]u8, // 0x1C
        m_flWhipDelay: [0x4]u8, // 0x20
        m_flSpringStrength: [0x4]u8, // 0x24
        m_flWhipSpringStrength: [0x4]u8, // 0x28
        m_flMaxAngleRadians: [0x4]u8, // 0x2C
        m_nHipBoneIndex: [0x4]u8, // 0x30
        m_flHipBoneTranslationScale: [0x4]u8, // 0x34
        m_flHipDipSpringStrength: [0x4]u8, // 0x38
        m_flHipDipImpactScale: [0x4]u8, // 0x3C
        m_flHipDipDelay: [0x4]u8, // 0x40
    };
    pub const CNmPoseNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const CAnimTagBase = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_name: [0x8]u8, // 0x18
        m_sComment: [0x8]u8, // 0x20
        m_group: [0x8]u8, // 0x28
        m_tagID: [0x18]u8, // 0x30
        m_bIsReferenced: [0x8]u8, // 0x48
    };
    pub const CPerParticleVecInput = extern struct {
        pad_0: [0x6D8]u8, // 0x0
    };
    pub const CMotionGraph = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_paramSpans: [0x18]u8, // 0x10
        m_tags: [0x18]u8, // 0x28
        m_pRootNode: [0x8]u8, // 0x40
        m_nParameterCount: [0x4]u8, // 0x48
        m_nConfigStartIndex: [0x4]u8, // 0x4C
        m_nConfigCount: [0x4]u8, // 0x50
        m_bLoop: [0x4]u8, // 0x54
    };
    pub const CNmVectorInfoNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nInputValueNodeIdx: [0x2]u8, // 0x10
        m_desiredInfo: [0x6]u8, // 0x12
    };
    pub const AnimationSnapshot_t = extern struct {
        pad_0: [0x110]u8, // 0x0
        m_nEntIndex: [0x8]u8, // 0x110
        m_modelName: [0x8]u8, // 0x118
    };
    pub const CNmBlendTask = extern struct {
        pad_0: [0x100]u8, // 0x0
    };
    pub const CNmVectorValueNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const CSeqTransition = extern struct {
        m_flFadeInTime: [0x4]u8, // 0x0
        m_flFadeOutTime: [0x4]u8, // 0x4
    };
    pub const CNmPoseTask = extern struct {
        pad_0: [0x70]u8, // 0x0
    };
    pub const CAnimGraphSettingsGroup = extern struct {
        pad_0: [0x20]u8, // 0x0
    };
    pub const CNmVirtualParameterTargetNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nChildNodeIdx: [0x8]u8, // 0x10
    };
    pub const CAnimGraphDebugReplay = extern struct {
        pad_0: [0x40]u8, // 0x0
        m_animGraphFileName: [0x8]u8, // 0x40
        m_frameList: [0x18]u8, // 0x48
        m_startIndex: [0x4]u8, // 0x60
        m_writeIndex: [0x4]u8, // 0x64
        m_frameCount: [0x8]u8, // 0x68
    };
    pub const CVectorAnimParameter = extern struct {
        pad_0: [0x80]u8, // 0x0
        m_defaultValue: [0xC]u8, // 0x80
        m_bInterpolate: [0x4]u8, // 0x8C
        m_vectorType: [0x8]u8, // 0x90
    };
    pub const CNmCachedPoseReadTask = extern struct {
        pad_0: [0x80]u8, // 0x0
    };
    pub const CNmStateMachineNode__StateDefinition_t = extern struct {
        m_nStateNodeIdx: [0x2]u8, // 0x0
        m_nEntryConditionNodeIdx: [0x6]u8, // 0x2
        m_transitionDefinitions: [0x30]u8, // 0x8
    };
    pub const CStanceOverrideUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        m_footStanceInfo: [0x18]u8, // 0x70
        m_pStanceSourceNode: [0x10]u8, // 0x88
        m_hParameter: [0x4]u8, // 0x98
        m_eMode: [0x4]u8, // 0x9C
    };
    pub const CNmGraphDefinition__ExternalPoseSlot_t = extern struct {
        m_nNodeIdx: [0x8]u8, // 0x0
        m_slotID: [0x8]u8, // 0x8
    };
    pub const PhysShapeMarkup_t = extern struct {
        m_nBodyInAggregate: [0x4]u8, // 0x0
        m_nShapeInBody: [0x4]u8, // 0x4
        m_sHitGroup: [0x8]u8, // 0x8
    };
    pub const CBlend2DInstanceData = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_dampedValue: [0x3C]u8, // 0x8
        m_flCycle: [0x4]u8, // 0x44
        m_flPrevCycle: [0x58]u8, // 0x48
    };
    pub const LookAtBone_t = extern struct {
        m_index: [0x4]u8, // 0x0
        m_weight: [0x4]u8, // 0x4
    };
    pub const CDirectPlaybackInstanceData = extern struct {
        m_vTargetPosition: [0xC]u8, // 0x0
        m_flTargetFacing: [0x4]u8, // 0xC
        m_flInterpEndTime: [0x4]u8, // 0x10
        m_weights: [0x10]u8, // 0x14
        m_sequences: [0xE0]u8, // 0x24
        m_currentSequenceIndex: [0x4]u8, // 0x104
        m_currentSequenceData: [0x10]u8, // 0x108
        m_flFadeInTime: [0x4]u8, // 0x118
        m_flFadeOutTime: [0x4]u8, // 0x11C
        m_flForcedCycle: [0x10]u8, // 0x120
        m_bResetPending: [0x8]u8, // 0x130
        m_SequenceCycleZeroTime: [0x10]u8, // 0x138
    };
    pub const CNmTransitionNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nTargetStateNodeIdx: [0x2]u8, // 0x10
        m_nDurationOverrideNodeIdx: [0x2]u8, // 0x12
        m_timeOffsetOverrideNodeIdx: [0x2]u8, // 0x14
        m_startBoneMaskNodeIdx: [0x2]u8, // 0x16
        m_flDuration: [0x4]u8, // 0x18
        m_boneMaskBlendInTimePercentage: [0x4]u8, // 0x1C
        m_flTimeOffset: [0x4]u8, // 0x20
        m_transitionOptions: [0x4]u8, // 0x24
        m_targetSyncIDNodeIdx: [0x2]u8, // 0x28
        m_blendWeightEasing: [0x1]u8, // 0x2A
        m_rootMotionBlend: [0x5]u8, // 0x2B
    };
    pub const PulseRuntimeRegisterIndex_t = extern struct {
        m_Value: [0x2]u8, // 0x0
    };
    pub const CNmFloatEaseNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_flEaseTime: [0x4]u8, // 0x10
        m_flStartValue: [0x4]u8, // 0x14
        m_nInputValueNodeIdx: [0x2]u8, // 0x18
        m_easingOp: [0x1]u8, // 0x1A
        m_bUseStartValue: [0x5]u8, // 0x1B
    };
    pub const CAnimationGraphInstance = extern struct {
        pad_0: [0x329]u8, // 0x0
        m_bTagDispatchDirty: [0x17]u8, // 0x329
    };
    pub const CAnimEncodeDifference = extern struct {
        m_boneArray: [0x18]u8, // 0x0
        m_morphArray: [0x18]u8, // 0x18
        m_userArray: [0x18]u8, // 0x30
        m_bHasRotationBitArray: [0x18]u8, // 0x48
        m_bHasMovementBitArray: [0x18]u8, // 0x60
        m_bHasMorphBitArray: [0x18]u8, // 0x78
        m_bHasUserBitArray: [0x18]u8, // 0x90
    };
    pub const CRootUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
    };
    pub const CNmTargetOffsetNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nInputValueNodeIdx: [0x2]u8, // 0x10
        m_bIsBoneSpaceOffset: [0xE]u8, // 0x12
        m_rotationOffset: [0x10]u8, // 0x20
        m_translationOffset: [0x10]u8, // 0x30
    };
    pub const MotionMatchingInstanceData = extern struct {
        pad_0: [0x2C]u8, // 0x0
        m_currentSelection: [0x58]u8, // 0x2C
        m_previousSelection: [0x9C]u8, // 0x84
    };
    pub const CMotionGraphUpdateNode = extern struct {
        pad_0: [0x58]u8, // 0x0
        m_pMotionGraph: [0x10]u8, // 0x58
    };
    pub const CNmFloatAngleMathNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nInputValueNodeIdx: [0x2]u8, // 0x10
        m_operation: [0x6]u8, // 0x12
    };
    pub const PulseCursorID_t = extern struct {
        m_Value: [0x4]u8, // 0x0
    };
    pub const CAnimParamHandle = extern struct {
        m_type: [0x1]u8, // 0x0
        m_index: [0x1]u8, // 0x1
    };
    pub const WeightList = extern struct {
        m_name: [0x8]u8, // 0x0
        m_weights: [0x18]u8, // 0x8
    };
    pub const MotionIndex = extern struct {
        m_nGroup: [0x2]u8, // 0x0
        m_nMotion: [0x2]u8, // 0x2
    };
    pub const FollowAttachmentSettings_t = extern struct {
        m_attachment: [0x80]u8, // 0x0
        m_boneIndex: [0x4]u8, // 0x80
        m_attachmentHandle: [0x1]u8, // 0x84
        m_bMatchTranslation: [0x1]u8, // 0x85
        m_bMatchRotation: [0xA]u8, // 0x86
    };
    pub const CNmReferencedGraphNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nReferencedGraphIdx: [0x2]u8, // 0x10
        m_nFallbackNodeIdx: [0x6]u8, // 0x12
    };
    pub const AnimNodeID = extern struct {
        m_id: [0x4]u8, // 0x0
    };
    pub const CNmClipSelectorNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_optionNodeIndices: [0x18]u8, // 0x10
        m_conditionNodeIndices: [0x18]u8, // 0x28
    };
    pub const CLookComponentUpdater = extern struct {
        pad_0: [0x34]u8, // 0x0
        m_hLookHeading: [0x2]u8, // 0x34
        m_hLookHeadingNormalized: [0x2]u8, // 0x36
        m_hLookHeadingVelocity: [0x2]u8, // 0x38
        m_hLookPitch: [0x2]u8, // 0x3A
        m_hLookDistance: [0x2]u8, // 0x3C
        m_hLookDirection: [0x2]u8, // 0x3E
        m_hLookTarget: [0x2]u8, // 0x40
        m_hLookTargetWorldSpace: [0x2]u8, // 0x42
        m_bNetworkLookTarget: [0x4]u8, // 0x44
    };
    pub const CNmIsExternalPoseSetNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nExternalPoseNodeIdx: [0x8]u8, // 0x10
    };
    pub const CAnimGraphNetworkSettings = extern struct {
        pad_0: [0x20]u8, // 0x0
        m_bNetworkingEnabled: [0x8]u8, // 0x20
    };
    pub const CSingleFrameUpdateNode = extern struct {
        pad_0: [0x58]u8, // 0x0
        m_actions: [0x18]u8, // 0x58
        m_hPoseCacheHandle: [0x4]u8, // 0x70
        m_hSequence: [0x4]u8, // 0x74
        m_flCycle: [0x8]u8, // 0x78
    };
    pub const CNmChainLookatNode__CDefinition = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_endEffectorBoneID: [0x8]u8, // 0x18
        m_endEffectorForwardAxis: [0xC]u8, // 0x20
        m_endEffectorOffset: [0xC]u8, // 0x2C
        m_nLookatTargetNodeIdx: [0x2]u8, // 0x38
        m_nEnabledNodeIdx: [0x2]u8, // 0x3A
        m_flBlendTimeSeconds: [0x4]u8, // 0x3C
        m_chainWeights: [0x30]u8, // 0x40
        m_nChainLength: [0x1]u8, // 0x70
        m_bIsTargetInWorldSpace: [0x7]u8, // 0x71
    };
    pub const CNmFollowBoneNode__CDefinition = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_bone: [0x8]u8, // 0x18
        m_followTargetBone: [0x8]u8, // 0x20
        m_nEnabledNodeIdx: [0x2]u8, // 0x28
        m_mode: [0x6]u8, // 0x2A
    };
    pub const CBlockSelectionMetricEvaluator = extern struct {
        pad_0: [0x50]u8, // 0x0
    };
    pub const MovementData = extern struct {
        m_goalWayPointPos: [0xC]u8, // 0x0
        m_vMoveDir: [0x14]u8, // 0xC
        m_vAcceleration: [0x14]u8, // 0x20
        m_flCurrentMoveSpeed: [0xC]u8, // 0x34
        m_flTargetMoveSpeed: [0xC]u8, // 0x40
        m_flGoalDistance: [0xC]u8, // 0x4C
        m_flBoundaryRadius: [0xC]u8, // 0x58
        m_bGoalChanged: [0x4]u8, // 0x64
        m_bHasPath: [0xC]u8, // 0x68
        m_flFacingHeading: [0xC]u8, // 0x74
        m_vManualFacingDirection: [0xC]u8, // 0x80
        m_vManualFacingTarget: [0xC]u8, // 0x8C
        m_nFacingMode: [0xC]u8, // 0x98
        m_bForceFacing: [0xC]u8, // 0xA4
        m_nActiveMotorIndex: [0xC]u8, // 0xB0
        m_bOnGround: [0xC]u8, // 0xBC
        m_vFacingPosition: [0x14]u8, // 0xC8
        m_vPrevFacingPosition: [0xC]u8, // 0xDC
    };
    pub const CRemapValueComponentUpdater = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_items: [0x18]u8, // 0x30
    };
    pub const CModelConfigList = extern struct {
        m_bHideMaterialGroupInTools: [0x1]u8, // 0x0
        m_bHideRenderColorInTools: [0x7]u8, // 0x1
        m_Configs: [0x18]u8, // 0x8
    };
    pub const CSeqAutoLayerFlag = extern struct {
        m_bPost: [0x1]u8, // 0x0
        m_bSpline: [0x1]u8, // 0x1
        m_bXFade: [0x1]u8, // 0x2
        m_bNoBlend: [0x1]u8, // 0x3
        m_bLocal: [0x1]u8, // 0x4
        m_bPose: [0x1]u8, // 0x5
        m_bFetchFrame: [0x1]u8, // 0x6
        m_bSubtract: [0x1]u8, // 0x7
    };
    pub const AnimStateID = extern struct {
        m_id: [0x4]u8, // 0x0
    };
    pub const CNmIDEventConditionNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nSourceStateNodeIdx: [0x4]u8, // 0x10
        m_eventConditionRules: [0x4]u8, // 0x14
        m_eventIDs: [0x40]u8, // 0x18
    };
    pub const ModelBoneFlexDriver_t = extern struct {
        m_boneName: [0x8]u8, // 0x0
        m_boneNameToken: [0x8]u8, // 0x8
        m_controls: [0x18]u8, // 0x10
    };
    pub const CMorphData = extern struct {
        m_name: [0x8]u8, // 0x0
        m_morphRectDatas: [0x18]u8, // 0x8
    };
    pub const CFootPinningUpdateNode = extern struct {
        pad_0: [0x78]u8, // 0x0
        m_poseOpFixedData: [0x30]u8, // 0x78
        m_eTimingSource: [0x8]u8, // 0xA8
        m_params: [0x18]u8, // 0xB0
        m_bResetChild: [0x8]u8, // 0xC8
    };
    pub const CSeqPoseSetting = extern struct {
        m_sPoseParameter: [0x10]u8, // 0x0
        m_sAttachment: [0x10]u8, // 0x10
        m_sReferenceSequence: [0x10]u8, // 0x20
        m_flValue: [0x4]u8, // 0x30
        m_bX: [0x1]u8, // 0x34
        m_bY: [0x1]u8, // 0x35
        m_bZ: [0x2]u8, // 0x36
        m_eType: [0x8]u8, // 0x38
    };
    pub const PulseGraphExecutionHistoryCursorDesc_t = extern struct {
        vecAncestorCursorIDs: [0x18]u8, // 0x0
        nSpawnNodeID: [0x4]u8, // 0x18
        nRetiredAtNodeID: [0x4]u8, // 0x1C
        flLastReferenced: [0x4]u8, // 0x20
        nLastValidEntryIdx: [0x4]u8, // 0x24
        bWasAnObservableComputation: [0x8]u8, // 0x28
    };
    pub const CNmVirtualParameterFloatNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nChildNodeIdx: [0x8]u8, // 0x10
    };
    pub const CAttachment = extern struct {
        m_name: [0x8]u8, // 0x0
        m_influenceNames: [0x18]u8, // 0x8
        m_vInfluenceRotations: [0x30]u8, // 0x20
        m_vInfluenceOffsets: [0x24]u8, // 0x50
        m_influenceWeights: [0xC]u8, // 0x74
        m_bInfluenceRootTransform: [0x3]u8, // 0x80
        m_nInfluences: [0x1]u8, // 0x83
        m_bIgnoreRotation: [0xC]u8, // 0x84
    };
    pub const CSequenceUpdateNodeBase = extern struct {
        pad_0: [0x6C]u8, // 0x0
        m_playbackSpeed: [0x4]u8, // 0x6C
        m_bLoop: [0x8]u8, // 0x70
    };
    pub const CDrawCullingData = extern struct {
        m_ConeAxis: [0x3]u8, // 0x0
        m_ConeCutoff: [0x1]u8, // 0x3
    };
    pub const VPhysXJoint_t = extern struct {
        m_nType: [0x2]u8, // 0x0
        m_nBody1: [0x2]u8, // 0x2
        m_nBody2: [0x2]u8, // 0x4
        m_nFlags: [0xA]u8, // 0x6
        m_Frame1: [0x20]u8, // 0x10
        m_Frame2: [0x20]u8, // 0x30
        m_bEnableCollision: [0x1]u8, // 0x50
        m_bIsLinearConstraintDisabled: [0x1]u8, // 0x51
        m_bIsAngularConstraintDisabled: [0x1]u8, // 0x52
        m_bEnableLinearLimit: [0x1]u8, // 0x53
        m_LinearLimit: [0x8]u8, // 0x54
        m_bEnableLinearMotor: [0x4]u8, // 0x5C
        m_vLinearTargetVelocity: [0xC]u8, // 0x60
        m_flMaxForce: [0x4]u8, // 0x6C
        m_bEnableSwingLimit: [0x4]u8, // 0x70
        m_SwingLimit: [0x8]u8, // 0x74
        m_bEnableTwistLimit: [0x4]u8, // 0x7C
        m_TwistLimit: [0x8]u8, // 0x80
        m_bEnableAngularMotor: [0x4]u8, // 0x88
        m_vAngularTargetVelocity: [0xC]u8, // 0x8C
        m_flMaxTorque: [0x4]u8, // 0x98
        m_flLinearFrequency: [0x4]u8, // 0x9C
        m_flLinearDampingRatio: [0x4]u8, // 0xA0
        m_flAngularFrequency: [0x4]u8, // 0xA4
        m_flAngularDampingRatio: [0x4]u8, // 0xA8
        m_flFriction: [0x4]u8, // 0xAC
        m_flElasticity: [0x4]u8, // 0xB0
        m_flElasticDamping: [0x4]u8, // 0xB4
        m_flPlasticity: [0x8]u8, // 0xB8
        m_Tag: [0x10]u8, // 0xC0
    };
    pub const CStateNodeTransitionData = extern struct {
        m_curve: [0x8]u8, // 0x0
        m_blendDuration: [0x8]u8, // 0x8
        m_resetCycleValue: [0xC]u8, // 0x10
    };
    pub const CTimeRemainingMetricEvaluator = extern struct {
        pad_0: [0x50]u8, // 0x0
        m_bMatchByTimeRemaining: [0x4]u8, // 0x50
        m_flMaxTimeRemaining: [0x4]u8, // 0x54
        m_bFilterByTimeRemaining: [0x4]u8, // 0x58
        m_flMinTimeRemaining: [0x4]u8, // 0x5C
    };
    pub const CParticleInput = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const PulseRuntimeTempVarIndex_t = extern struct {
        m_Value: [0x2]u8, // 0x0
    };
    pub const CModelConfigElement = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_ElementName: [0x8]u8, // 0x8
        m_NestedElements: [0x38]u8, // 0x10
    };
    pub const CNmControlParameterVectorNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const FootFixedSettings = extern struct {
        m_traceSettings: [0x10]u8, // 0x0
        m_vFootBaseBindPosePositionMS: [0x10]u8, // 0x10
        m_flFootBaseLength: [0x4]u8, // 0x20
        m_flMaxRotationLeft: [0x4]u8, // 0x24
        m_flMaxRotationRight: [0x4]u8, // 0x28
        m_footstepLandedTagIndex: [0x4]u8, // 0x2C
        m_bEnableTracing: [0x4]u8, // 0x30
        m_flTraceAngleBlend: [0x4]u8, // 0x34
        m_nDisableTagIndex: [0x4]u8, // 0x38
        m_nFootIndex: [0x4]u8, // 0x3C
    };
    pub const CNmBoneMaskSwitchNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nSwitchValueNodeIdx: [0x2]u8, // 0x10
        m_nTrueValueNodeIdx: [0x2]u8, // 0x12
        m_nFalseValueNodeIdx: [0x4]u8, // 0x14
        m_flBlendTimeSeconds: [0x4]u8, // 0x18
        m_bSwitchDynamically: [0x4]u8, // 0x1C
    };
    pub const CModelConfig = extern struct {
        m_ConfigName: [0x8]u8, // 0x0
        m_Elements: [0x18]u8, // 0x8
        m_bTopLevel: [0x1]u8, // 0x20
        m_bActiveInEditorByDefault: [0x7]u8, // 0x21
    };
    pub const AnimComponentID = extern struct {
        m_id: [0x4]u8, // 0x0
    };
    pub const VPhysXAggregateData_t = extern struct {
        m_nFlags: [0x2]u8, // 0x0
        m_nRefCounter: [0x2]u8, // 0x2
        m_bCompoundsPacked: [0x4]u8, // 0x4
        m_bonesHash: [0x18]u8, // 0x8
        m_boneNames: [0x18]u8, // 0x20
        m_indexNames: [0x18]u8, // 0x38
        m_indexHash: [0x18]u8, // 0x50
        m_bindPose: [0x18]u8, // 0x68
        m_parts: [0x18]u8, // 0x80
        m_shapeMarkups: [0x18]u8, // 0x98
        m_constraints2: [0x18]u8, // 0xB0
        m_joints: [0x18]u8, // 0xC8
        m_pFeModel: [0x8]u8, // 0xE0
        m_boneParents: [0x18]u8, // 0xE8
        m_surfacePropertyHashes: [0x18]u8, // 0x100
        m_collisionAttributes: [0x18]u8, // 0x118
        m_debugPartNames: [0x18]u8, // 0x130
        m_embeddedKeyvalues: [0x8]u8, // 0x148
    };
    pub const CNmGraphDefinition = extern struct {
        m_variationID: [0x8]u8, // 0x0
        m_skeleton: [0x8]u8, // 0x8
        m_supportedSecondarySkeletons: [0x18]u8, // 0x10
        m_pUserData: [0x8]u8, // 0x28
        m_persistentNodeIndices: [0x18]u8, // 0x30
        m_nRootNodeIdx: [0x8]u8, // 0x48
        m_controlParameterIDs: [0x18]u8, // 0x50
        m_virtualParameterIDs: [0x18]u8, // 0x68
        m_virtualParameterNodeIndices: [0x18]u8, // 0x80
        m_referencedGraphSlots: [0x18]u8, // 0x98
        m_externalGraphSlots: [0x18]u8, // 0xB0
        m_externalPoseSlots: [0x88]u8, // 0xC8
        m_nodePaths: [0x18]u8, // 0x150
        m_resources: [0x50]u8, // 0x168
    };
    pub const CNmSelectorNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_optionNodeIndices: [0x18]u8, // 0x10
        m_conditionNodeIndices: [0x18]u8, // 0x28
    };
    pub const CAnimDemoCaptureSettings = extern struct {
        m_vecErrorRangeSplineRotation: [0x8]u8, // 0x0
        m_vecErrorRangeSplineTranslation: [0x8]u8, // 0x8
        m_vecErrorRangeSplineScale: [0x8]u8, // 0x10
        m_flIkRotation_MaxSplineError: [0x4]u8, // 0x18
        m_flIkTranslation_MaxSplineError: [0x4]u8, // 0x1C
        m_vecErrorRangeQuantizationRotation: [0x8]u8, // 0x20
        m_vecErrorRangeQuantizationTranslation: [0x8]u8, // 0x28
        m_vecErrorRangeQuantizationScale: [0x8]u8, // 0x30
        m_flIkRotation_MaxQuantizationError: [0x4]u8, // 0x38
        m_flIkTranslation_MaxQuantizationError: [0x4]u8, // 0x3C
        m_baseSequence: [0x8]u8, // 0x40
        m_nBaseSequenceFrame: [0x4]u8, // 0x48
        m_boneSelectionMode: [0x4]u8, // 0x4C
        m_bones: [0x18]u8, // 0x50
        m_ikChains: [0x18]u8, // 0x68
    };
    pub const IKDemoCaptureSettings_t = extern struct {
        m_parentBoneName: [0x8]u8, // 0x0
        m_eMode: [0x8]u8, // 0x8
        m_ikChainName: [0x8]u8, // 0x10
        m_oneBoneStart: [0x8]u8, // 0x18
        m_oneBoneEnd: [0x8]u8, // 0x20
    };
    pub const CSeqMultiFetchFlag = extern struct {
        m_bRealtime: [0x1]u8, // 0x0
        m_bCylepose: [0x1]u8, // 0x1
        m_b0D: [0x1]u8, // 0x2
        m_b1D: [0x1]u8, // 0x3
        m_b2D: [0x1]u8, // 0x4
        m_b2D_TRI: [0x1]u8, // 0x5
    };
    pub const PulseRegisterMap_t = extern struct {
        m_Inparams: [0x10]u8, // 0x0
        m_InparamsWhichCanBeMoved: [0x10]u8, // 0x10
        m_Outparams: [0x10]u8, // 0x20
    };
    pub const VPhysXRange_t = extern struct {
        m_flMin: [0x4]u8, // 0x0
        m_flMax: [0x4]u8, // 0x4
    };
    pub const CStopAtGoalUpdateNode = extern struct {
        pad_0: [0x74]u8, // 0x0
        m_flOuterRadius: [0x4]u8, // 0x74
        m_flInnerRadius: [0x4]u8, // 0x78
        m_flMaxScale: [0x4]u8, // 0x7C
        m_flMinScale: [0x8]u8, // 0x80
        m_damping: [0x18]u8, // 0x88
    };
    pub const CNmIDEventPercentageThroughNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nSourceStateNodeIdx: [0x4]u8, // 0x10
        m_eventConditionRules: [0x4]u8, // 0x14
        m_eventID: [0x8]u8, // 0x18
    };
    pub const CAnimBoneDifference = extern struct {
        m_name: [0x10]u8, // 0x0
        m_parent: [0x10]u8, // 0x10
        m_posError: [0xC]u8, // 0x20
        m_bHasRotation: [0x1]u8, // 0x2C
        m_bHasMovement: [0x3]u8, // 0x2D
    };
    pub const CNmCachedBoolNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nInputValueNodeIdx: [0x4]u8, // 0x10
        m_mode: [0x4]u8, // 0x14
    };
    pub const CAnimCycle = extern struct {
        pad_0: [0x4]u8, // 0x0
    };
    pub const CActionComponentUpdater = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_actions: [0x18]u8, // 0x30
    };
    pub const CDirectionalBlendInstanceData = extern struct {
        m_dampedValue: [0x14]u8, // 0x0
        m_flCycle: [0x4]u8, // 0x14
        m_flPrevCycle: [0x4]u8, // 0x18
        m_flPlaybackRate: [0xC]u8, // 0x1C
        m_flCycleZeroTime: [0xC]u8, // 0x28
        m_resetCycleValue: [0xC]u8, // 0x34
        m_resetCount: [0x10]u8, // 0x40
    };
    pub const CDampedPathAnimMotorUpdater = extern struct {
        pad_0: [0x2C]u8, // 0x0
        m_flAnticipationTime: [0x4]u8, // 0x2C
        m_flMinSpeedScale: [0x4]u8, // 0x30
        m_hAnticipationPosParam: [0x2]u8, // 0x34
        m_hAnticipationHeadingParam: [0x2]u8, // 0x36
        m_flSpringConstant: [0x4]u8, // 0x38
        m_flMinSpringTension: [0x4]u8, // 0x3C
        m_flMaxSpringTension: [0x8]u8, // 0x40
    };
    pub const CNmCachedFloatNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nInputValueNodeIdx: [0x4]u8, // 0x10
        m_mode: [0x4]u8, // 0x14
    };
    pub const CNmFloatSwitchNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nSwitchValueNodeIdx: [0x2]u8, // 0x10
        m_nTrueValueNodeIdx: [0x2]u8, // 0x12
        m_nFalseValueNodeIdx: [0x4]u8, // 0x14
        m_flFalseValue: [0x4]u8, // 0x18
        m_flTrueValue: [0x4]u8, // 0x1C
    };
    pub const CModelConfigElement_SetMaterialGroupOnAttachedModels = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_MaterialGroupName: [0x8]u8, // 0x48
    };
    pub const CNmFloatChannelData = extern struct {
        m_skeleton: [0x8]u8, // 0x0
        m_setID: [0x8]u8, // 0x8
        m_channelSettings: [0x18]u8, // 0x10
        m_compressedData: [0x18]u8, // 0x28
        m_compressedOffsets: [0x18]u8, // 0x40
    };
    pub const CNmEntityAttributeEventBase = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_target: [0x8]u8, // 0x18
        m_attributeName: [0x18]u8, // 0x20
    };
    pub const CNmVirtualParameterBoneMaskNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nChildNodeIdx: [0x8]u8, // 0x10
    };
    pub const SequenceData = extern struct {
        m_hSequence: [0x4]u8, // 0x0
        m_cycle: [0x34]u8, // 0x4
    };
    pub const CPathHelperUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        m_flStoppingRadius: [0x4]u8, // 0x70
        m_flStoppingSpeedScale: [0x4]u8, // 0x74
    };
    pub const MaterialGroup_t = extern struct {
        m_name: [0x8]u8, // 0x0
        m_materials: [0x18]u8, // 0x8
    };
    pub const CMorphBundleData = extern struct {
        m_flULeftSrc: [0x4]u8, // 0x0
        m_flVTopSrc: [0x4]u8, // 0x4
        m_offsets: [0x18]u8, // 0x8
        m_ranges: [0x18]u8, // 0x20
    };
    pub const CModelConfigElement_UserPick = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_Choices: [0x18]u8, // 0x48
    };
    pub const CSolveIKTargetHandle_t = extern struct {
        m_positionHandle: [0x2]u8, // 0x0
        m_orientationHandle: [0x2]u8, // 0x2
    };
    pub const CFootAdjustmentUpdateNode = extern struct {
        pad_0: [0x78]u8, // 0x0
        m_clips: [0x18]u8, // 0x78
        m_hBasePoseCacheHandle: [0x4]u8, // 0x90
        m_facingTarget: [0x4]u8, // 0x94
        m_flTurnTimeMin: [0x4]u8, // 0x98
        m_flTurnTimeMax: [0x4]u8, // 0x9C
        m_flStepHeightMax: [0x4]u8, // 0xA0
        m_flStepHeightMaxAngle: [0x4]u8, // 0xA4
        m_bResetChild: [0x1]u8, // 0xA8
        m_bAnimationDriven: [0x7]u8, // 0xA9
    };
    pub const CChoreoUpdateNode = extern struct {
        pad_0: [0x78]u8, // 0x0
    };
    pub const CAimConstraint = extern struct {
        pad_0: [0x60]u8, // 0x0
        m_qAimOffset: [0x10]u8, // 0x60
        m_nUpType: [0x10]u8, // 0x70
    };
    pub const CMaterialDrawDescriptor__RigidMeshPart_t = extern struct {
        m_nRigidBLASIndex: [0x2]u8, // 0x0
        m_nBoneIndex: [0x2]u8, // 0x2
        m_nStartIndexOffset: [0x4]u8, // 0x4
        m_nPrimitiveCount: [0x4]u8, // 0x8
    };
    pub const CFootFallAnimTag = extern struct {
        pad_0: [0x58]u8, // 0x0
        m_foot: [0x8]u8, // 0x58
    };
    pub const CMaterialDrawDescriptor = extern struct {
        m_flUvDensity: [0x4]u8, // 0x0
        m_vTintColor: [0xC]u8, // 0x4
        m_flAlpha: [0x8]u8, // 0x10
        m_nNumMeshlets: [0x8]u8, // 0x18
        m_nFirstMeshlet: [0x4]u8, // 0x20
        m_nAppliedIndexOffset: [0x4]u8, // 0x24
        m_nEmissivePrimitiveCount: [0x4]u8, // 0x28
        m_nDepthVertexBufferIndex: [0x1]u8, // 0x2C
        m_nMeshletPackedIVBIndex: [0x3]u8, // 0x2D
        m_rigidMeshParts: [0x10]u8, // 0x30
        m_rootBvhNodes: [0x10]u8, // 0x40
        m_nPrimitiveType: [0x4]u8, // 0x50
        m_nBaseVertex: [0x4]u8, // 0x54
        m_nVertexCount: [0x4]u8, // 0x58
        m_nStartIndex: [0x4]u8, // 0x5C
        m_nIndexCount: [0x68]u8, // 0x60
        m_indexBuffer: [0x20]u8, // 0xC8
        m_meshletPackedIVB: [0x30]u8, // 0xE8
        m_material: [0x8]u8, // 0x118
    };
    pub const CNmSkeleton = extern struct {
        m_ID: [0x8]u8, // 0x0
        m_boneIDs: [0x10]u8, // 0x8
        m_parentIndices: [0x18]u8, // 0x18
        m_parentSpaceReferencePose: [0x18]u8, // 0x30
        m_modelSpaceReferencePose: [0x18]u8, // 0x48
        m_numBonesToSampleAtLowLOD: [0x4]u8, // 0x60
        m_bIsPropSkeleton: [0x24]u8, // 0x64
        m_maskDefinitions: [0x20]u8, // 0x88
        m_secondarySkeletons: [0x10]u8, // 0xA8
        m_floatChannelSets: [0x10]u8, // 0xB8
        m_contactConfigs: [0x18]u8, // 0xC8
        m_gameplayRelevantBoneIndices: [0x18]u8, // 0xE0
        m_nSpecialDependencyHash: [0x8]u8, // 0xF8
    };
    pub const CStepsRemainingMetricEvaluator = extern struct {
        pad_0: [0x50]u8, // 0x0
        m_footIndices: [0x18]u8, // 0x50
        m_flMinStepsRemaining: [0x8]u8, // 0x68
    };
    pub const CNmVelocityBlendNode__CDefinition = extern struct {
        pad_0: [0x30]u8, // 0x0
    };
    pub const CNmZeroPoseTask = extern struct {
        pad_0: [0x70]u8, // 0x0
    };
    pub const CNmClothEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_type: [0x4]u8, // 0x18
        m_flStiffness: [0x4]u8, // 0x1C
        m_flSpeedIn: [0x4]u8, // 0x20
        m_flSpeedOut: [0x4]u8, // 0x24
        m_flLengthSeconds: [0x8]u8, // 0x28
        m_vertexSetName: [0x8]u8, // 0x30
        m_effectName: [0x8]u8, // 0x38
    };
    pub const CBodyGroupSetting = extern struct {
        m_BodyGroupName: [0x8]u8, // 0x0
        m_nBodyGroupOption: [0x8]u8, // 0x8
    };
    pub const CVectorQuantizer = extern struct {
        m_centroidVectors: [0x18]u8, // 0x0
        m_nCentroids: [0x4]u8, // 0x18
        m_nDimensions: [0x4]u8, // 0x1C
    };
    pub const ParticleNamedValueConfiguration_t = extern struct {
        m_ConfigName: [0x8]u8, // 0x0
        m_ConfigValue: [0x10]u8, // 0x8
        m_BoundValuePath: [0x8]u8, // 0x18
        m_iAttachType: [0x8]u8, // 0x20
        m_strEntityScope: [0x8]u8, // 0x28
        m_strAttachmentName: [0x8]u8, // 0x30
    };
    pub const CNmVectorCreateNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_inputVectorValueNodeIdx: [0x2]u8, // 0x10
        m_inputValueXNodeIdx: [0x2]u8, // 0x12
        m_inputValueYNodeIdx: [0x2]u8, // 0x14
        m_inputValueZNodeIdx: [0x2]u8, // 0x16
    };
    pub const CParticleVecInput = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nType: [0x4]u8, // 0x10
        m_vLiteralValue: [0xC]u8, // 0x14
        m_LiteralColor: [0x8]u8, // 0x20
        m_NamedValue: [0x40]u8, // 0x28
        m_bFollowNamedValue: [0x4]u8, // 0x68
        m_nVectorAttribute: [0x4]u8, // 0x6C
        m_vVectorAttributeScale: [0xC]u8, // 0x70
        m_nControlPoint: [0x4]u8, // 0x7C
        m_nDeltaControlPoint: [0x4]u8, // 0x80
        m_vCPValueScale: [0xC]u8, // 0x84
        m_vCPRelativePosition: [0xC]u8, // 0x90
        m_vCPRelativeDir: [0xC]u8, // 0x9C
        m_FloatComponentX: [0x178]u8, // 0xA8
        m_FloatComponentY: [0x178]u8, // 0x220
        m_FloatComponentZ: [0x178]u8, // 0x398
        m_FloatInterp: [0x178]u8, // 0x510
        m_flInterpInput0: [0x4]u8, // 0x688
        m_flInterpInput1: [0x4]u8, // 0x68C
        m_vInterpOutput0: [0xC]u8, // 0x690
        m_vInterpOutput1: [0xC]u8, // 0x69C
        m_Gradient: [0x18]u8, // 0x6A8
        m_vRandomMin: [0xC]u8, // 0x6C0
        m_vRandomMax: [0xC]u8, // 0x6CC
    };
    pub const CNmStateNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nChildNodeIdx: [0x8]u8, // 0x10
        m_entryEvents: [0x20]u8, // 0x18
        m_executeEvents: [0x20]u8, // 0x38
        m_exitEvents: [0x20]u8, // 0x58
        m_timedRemainingEvents: [0x18]u8, // 0x78
        m_timedElapsedEvents: [0x18]u8, // 0x90
        m_nLayerWeightNodeIdx: [0x2]u8, // 0xA8
        m_nLayerRootMotionWeightNodeIdx: [0x2]u8, // 0xAA
        m_nLayerBoneMaskNodeIdx: [0x2]u8, // 0xAC
        m_bIsOffState: [0x1]u8, // 0xAE
        m_bUseActualElapsedTimeInStateForTimedEvents: [0x1]u8, // 0xAF
    };
    pub const CNmBoneMaskSelectorNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_defaultMaskNodeIdx: [0x2]u8, // 0x10
        m_parameterValueNodeIdx: [0x2]u8, // 0x12
        m_bSwitchDynamically: [0x4]u8, // 0x14
        m_maskNodeIndices: [0x18]u8, // 0x18
        m_parameterValues: [0x40]u8, // 0x30
        m_flBlendTimeSeconds: [0x8]u8, // 0x70
    };
    pub const CNmVirtualParameterVectorNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nChildNodeIdx: [0x8]u8, // 0x10
    };
    pub const CFootCycleMetricEvaluator = extern struct {
        pad_0: [0x50]u8, // 0x0
        m_footIndices: [0x18]u8, // 0x50
    };
    pub const CNmConstIDNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_value: [0x8]u8, // 0x10
    };
    pub const CHitBox = extern struct {
        m_name: [0x8]u8, // 0x0
        m_sSurfaceProperty: [0x8]u8, // 0x8
        m_sBoneName: [0x8]u8, // 0x10
        m_vMinBounds: [0xC]u8, // 0x18
        m_vMaxBounds: [0xC]u8, // 0x24
        m_flShapeRadius: [0x4]u8, // 0x30
        m_nBoneNameHash: [0x4]u8, // 0x34
        m_nGroupId: [0x4]u8, // 0x38
        m_nShapeType: [0x1]u8, // 0x3C
        m_bTranslationOnly: [0x3]u8, // 0x3D
        m_CRC: [0x4]u8, // 0x40
        m_cRenderColor: [0x4]u8, // 0x44
        m_nHitBoxIndex: [0x28]u8, // 0x48
    };
    pub const CNmParameterizedSelectorNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_optionNodeIndices: [0x18]u8, // 0x10
        m_optionWeights: [0x10]u8, // 0x28
        m_parameterNodeIdx: [0x2]u8, // 0x38
        m_bIgnoreInvalidOptions: [0x1]u8, // 0x3A
        m_bHasWeightsSet: [0x5]u8, // 0x3B
    };
    pub const ModelSkeletonData_t = extern struct {
        m_boneName: [0x18]u8, // 0x0
        m_nParent: [0x18]u8, // 0x18
        m_boneSphere: [0x18]u8, // 0x30
        m_nFlag: [0x18]u8, // 0x48
        m_bonePosParent: [0x18]u8, // 0x60
        m_boneRotParent: [0x18]u8, // 0x78
        m_boneScaleParent: [0x18]u8, // 0x90
    };
    pub const CNmEvent = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_flStartTime: [0x4]u8, // 0x8
        m_flDuration: [0x4]u8, // 0xC
        m_syncID: [0x8]u8, // 0x10
    };
    pub const NmCompressionSettings_t__QuantizationRange_t = extern struct {
        m_flRangeStart: [0x4]u8, // 0x0
        m_flRangeLength: [0x4]u8, // 0x4
    };
    pub const CNmBlendTaskBase = extern struct {
        pad_0: [0x100]u8, // 0x0
    };
    pub const TagSpan_t = extern struct {
        m_tagIndex: [0x4]u8, // 0x0
        m_startCycle: [0x4]u8, // 0x4
        m_endCycle: [0x4]u8, // 0x8
    };
    pub const CNmConstTargetNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_value: [0x30]u8, // 0x10
    };
    pub const CRemapValueUpdateItem = extern struct {
        m_hParamIn: [0x2]u8, // 0x0
        m_hParamOut: [0x2]u8, // 0x2
        m_flMinInputValue: [0x4]u8, // 0x4
        m_flMaxInputValue: [0x4]u8, // 0x8
        m_flMinOutputValue: [0x4]u8, // 0xC
        m_flMaxOutputValue: [0x4]u8, // 0x10
    };
    pub const PermModelDataAnimatedMaterialAttribute_t = extern struct {
        m_AttributeName: [0x8]u8, // 0x0
        m_nNumChannels: [0x8]u8, // 0x8
    };
    pub const CMotionDataSet = extern struct {
        m_groups: [0x18]u8, // 0x0
        m_nDimensionCount: [0x8]u8, // 0x18
    };
    pub const ParticleAttributeIndex_t = extern struct {
        m_Value: [0x4]u8, // 0x0
    };
    pub const CProductQuantizer = extern struct {
        m_subQuantizers: [0x18]u8, // 0x0
        m_nDimensions: [0x8]u8, // 0x18
    };
    pub const CChoiceUpdateNode = extern struct {
        pad_0: [0x60]u8, // 0x0
        m_children: [0x18]u8, // 0x60
        m_weights: [0x18]u8, // 0x78
        m_blendTimes: [0x18]u8, // 0x90
        m_choiceMethod: [0x4]u8, // 0xA8
        m_choiceChangeMethod: [0x4]u8, // 0xAC
        m_blendMethod: [0x4]u8, // 0xB0
        m_blendTime: [0x4]u8, // 0xB4
        m_bCrossFade: [0x1]u8, // 0xB8
        m_bResetChosen: [0x1]u8, // 0xB9
        m_bDontResetSameSelection: [0x6]u8, // 0xBA
    };
    pub const SkeletonAnimCapture_t__Bone_t = extern struct {
        m_Name: [0x10]u8, // 0x0
        m_BindPose: [0x20]u8, // 0x10
        m_nParent: [0x10]u8, // 0x30
    };
    pub const CExpressionActionUpdater = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_hParam: [0x2]u8, // 0x18
        m_eParamType: [0x2]u8, // 0x1A
        m_hScript: [0x4]u8, // 0x1C
    };
    pub const CNmFloatMathNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nInputValueNodeIdxA: [0x2]u8, // 0x10
        m_nInputValueNodeIdxB: [0x2]u8, // 0x12
        m_bReturnAbsoluteResult: [0x1]u8, // 0x14
        m_bReturnNegatedResult: [0x1]u8, // 0x15
        m_operator: [0x2]u8, // 0x16
        m_flValueB: [0x8]u8, // 0x18
    };
    pub const CAnimationGraphVisualizerLine = extern struct {
        pad_0: [0x40]u8, // 0x0
        m_vWsPositionStart: [0x10]u8, // 0x40
        m_vWsPositionEnd: [0x10]u8, // 0x50
        m_Color: [0x10]u8, // 0x60
    };
    pub const CCycleControlUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        m_valueSource: [0x4]u8, // 0x70
        m_paramIndex: [0x2]u8, // 0x74
        m_bLockWhenWaning: [0x2]u8, // 0x76
    };
    pub const CNmTargetInfoNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nInputValueNodeIdx: [0x4]u8, // 0x10
        m_infoType: [0x4]u8, // 0x14
        m_bIsWorldSpaceTarget: [0x8]u8, // 0x18
    };
    pub const CDampedValueComponentUpdater = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_items: [0x18]u8, // 0x30
    };
    pub const CBaseConstraint = extern struct {
        pad_0: [0x20]u8, // 0x0
        m_name: [0x8]u8, // 0x20
        m_vUpVector: [0x10]u8, // 0x28
        m_slaves: [0x10]u8, // 0x38
        m_targets: [0x18]u8, // 0x48
    };
    pub const CNmControlParameterFloatNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const BlendItem_t = extern struct {
        m_tags: [0x18]u8, // 0x0
        m_pChild: [0x10]u8, // 0x18
        m_hSequence: [0x4]u8, // 0x28
        m_vPos: [0x8]u8, // 0x2C
        m_flDuration: [0x4]u8, // 0x34
        m_bUseCustomDuration: [0x8]u8, // 0x38
    };
    pub const DampedPathMotorInstanceData_t = extern struct {
        m_vVelocity: [0xC]u8, // 0x0
        m_vAcceleration: [0x18]u8, // 0xC
        m_bStopping: [0x4]u8, // 0x24
    };
    pub const CNmIsExternalGraphSlotFilledNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nExternalGraphNodeIdx: [0x8]u8, // 0x10
    };
    pub const CNewParticleEffect = extern struct {
        m_bDontRemove: [0x10]u8, // 0x0
        m_pNext: [0x8]u8, // 0x10
        m_pPrev: [0x8]u8, // 0x18
        m_pParticles: [0x8]u8, // 0x20
        m_pDebugName: [0x18]u8, // 0x28
        m_vSortOrigin: [0xC]u8, // 0x40
        m_flScale: [0x4]u8, // 0x4C
        m_hOwner: [0x8]u8, // 0x50
        m_pOwningParticleProperty: [0x18]u8, // 0x58
        m_flFreezeTransitionStart: [0x4]u8, // 0x70
        m_flFreezeTransitionDuration: [0x4]u8, // 0x74
        m_flFreezeTransitionOverride: [0x4]u8, // 0x78
        m_LastMin: [0xC]u8, // 0x7C
        m_LastMax: [0xC]u8, // 0x88
        m_nSplitScreenUser: [0x4]u8, // 0x94
        m_vecAggregationCenter: [0x38]u8, // 0x98
        m_RefCount: [0x8]u8, // 0xD0
    };
    pub const CNmClipNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nPlayInReverseValueNodeIdx: [0x2]u8, // 0x10
        m_bSampleRootMotion: [0x1]u8, // 0x12
        m_bAllowLooping: [0x1]u8, // 0x13
        m_nDataSlotIdx: [0x2]u8, // 0x14
        m_nResetTimeValueNodeIdx: [0x2]u8, // 0x16
        m_graphEvents: [0x28]u8, // 0x18
        m_flSpeedMultiplier: [0x4]u8, // 0x40
        m_nStartSyncEventOffset: [0x4]u8, // 0x44
    };
    pub const CNmMaterialAttributeEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_target: [0x8]u8, // 0x18
        m_attributeName: [0x8]u8, // 0x20
        m_attributeNameToken: [0x8]u8, // 0x28
        m_x: [0x40]u8, // 0x30
        m_y: [0x40]u8, // 0x70
        m_z: [0x40]u8, // 0xB0
        m_w: [0x40]u8, // 0xF0
    };
    pub const TagStatus = extern struct {
        m_TagStatus: [0x4]u8, // 0x0
        m_flTagStartAnimTime: [0x4]u8, // 0x4
    };
    pub const CNmBlend1DNode__CDefinition = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_parameterization: [0x50]u8, // 0x30
    };
    pub const CConcreteAnimParameter = extern struct {
        pad_0: [0x70]u8, // 0x0
        m_previewButton: [0x4]u8, // 0x70
        m_eNetworkSetting: [0x4]u8, // 0x74
        m_bUseMostRecentValue: [0x1]u8, // 0x78
        m_bAutoReset: [0x1]u8, // 0x79
        m_bGameWritable: [0x1]u8, // 0x7A
        m_bGraphWritable: [0x5]u8, // 0x7B
    };
    pub const CNmBoneWeightList = extern struct {
        m_skeletonName: [0xE0]u8, // 0x0
        m_boneIDs: [0x18]u8, // 0xE0
        m_weights: [0x18]u8, // 0xF8
    };
    pub const CPairedSequenceUpdateNode = extern struct {
        pad_0: [0x78]u8, // 0x0
        m_sPairedSequenceRole: [0x10]u8, // 0x78
    };
    pub const CModelConfigElement_RandomPick = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_Choices: [0x18]u8, // 0x48
        m_ChoiceWeights: [0x20]u8, // 0x60
    };
    pub const CNmReferencePoseTask = extern struct {
        pad_0: [0x70]u8, // 0x0
    };
    pub const CNmScaleNode__CDefinition = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_nMaskNodeIdx: [0x2]u8, // 0x18
        m_nEnableNodeIdx: [0x6]u8, // 0x1A
    };
    pub const VPhysXConstraint2_t = extern struct {
        m_nFlags: [0x4]u8, // 0x0
        m_nParent: [0x2]u8, // 0x4
        m_nChild: [0x2]u8, // 0x6
        m_params: [0xF8]u8, // 0x8
    };
    pub const CConstraintTarget = extern struct {
        pad_0: [0x20]u8, // 0x0
        m_qOffset: [0x10]u8, // 0x20
        m_vOffset: [0xC]u8, // 0x30
        m_nBoneHash: [0x4]u8, // 0x3C
        m_sName: [0x8]u8, // 0x40
        m_flWeight: [0x11]u8, // 0x48
        m_bIsAttachment: [0x7]u8, // 0x59
    };
    pub const SkeletonAnimCapture_t = extern struct {
        m_nEntIndex: [0x4]u8, // 0x0
        m_nEntParent: [0x4]u8, // 0x4
        m_ImportedCollision: [0x18]u8, // 0x8
        m_ModelName: [0x8]u8, // 0x20
        m_CaptureName: [0x8]u8, // 0x28
        m_ModelBindPose: [0x18]u8, // 0x30
        m_FeModelInitPose: [0x18]u8, // 0x48
        m_nFlexControllers: [0x4]u8, // 0x60
        m_bPredicted: [0x44]u8, // 0x64
        m_Frames: [0x18]u8, // 0xA8
    };
    pub const CAnimUser = extern struct {
        m_name: [0x10]u8, // 0x0
        m_nType: [0x8]u8, // 0x10
    };
    pub const CPulse_TempVarBankDefinition = extern struct {
        m_TempVars: [0x28]u8, // 0x0
    };
    pub const CRagdollComponentUpdater = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_ragdollNodePaths: [0x18]u8, // 0x30
        m_followAttachmentNodePaths: [0x18]u8, // 0x48
        m_boneIndices: [0x18]u8, // 0x60
        m_boneNames: [0x18]u8, // 0x78
        m_weightLists: [0x18]u8, // 0x90
        m_boneToWeightIndices: [0x18]u8, // 0xA8
        m_flSpringFrequencyMin: [0x4]u8, // 0xC0
        m_flSpringFrequencyMax: [0x4]u8, // 0xC4
        m_flMaxStretch: [0x4]u8, // 0xC8
        m_bSolidCollisionAtZeroWeight: [0xC]u8, // 0xCC
    };
    pub const ParticleNamedValueSource_t = extern struct {
        m_Name: [0x8]u8, // 0x0
        m_IsPublic: [0x8]u8, // 0x8
        m_ValueType: [0x18]u8, // 0x10
        m_DefaultConfig: [0x38]u8, // 0x28
    };
    pub const CFootDefinition = extern struct {
        m_name: [0x8]u8, // 0x0
        m_ankleBoneName: [0x8]u8, // 0x8
        m_toeBoneName: [0x8]u8, // 0x10
        m_vBallOffset: [0xC]u8, // 0x18
        m_vHeelOffset: [0xC]u8, // 0x24
        m_flFootLength: [0x4]u8, // 0x30
        m_flBindPoseDirectionMS: [0x4]u8, // 0x34
        m_flTraceHeight: [0x4]u8, // 0x38
        m_flTraceRadius: [0x4]u8, // 0x3C
    };
    pub const CSeqSynthAnimDesc = extern struct {
        m_sName: [0x10]u8, // 0x0
        m_flags: [0xC]u8, // 0x10
        m_transition: [0x8]u8, // 0x1C
        m_nLocalBaseReference: [0x2]u8, // 0x24
        m_nLocalBoneMask: [0x2]u8, // 0x26
        m_activityArray: [0x18]u8, // 0x28
    };
    pub const CNmLayerBlendNode__LayerDefinition_t = extern struct {
        m_nInputNodeIdx: [0x2]u8, // 0x0
        m_nWeightValueNodeIdx: [0x2]u8, // 0x2
        m_nBoneMaskValueNodeIdx: [0x2]u8, // 0x4
        m_nRootMotionWeightValueNodeIdx: [0x2]u8, // 0x6
        m_bIsSynchronized: [0x1]u8, // 0x8
        m_bIgnoreEvents: [0x1]u8, // 0x9
        m_bIsStateMachineLayer: [0x1]u8, // 0xA
        m_blendMode: [0x1]u8, // 0xB
    };
    pub const CAnimComponentUpdater = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_name: [0x8]u8, // 0x18
        m_id: [0x4]u8, // 0x20
        m_networkMode: [0x4]u8, // 0x24
        m_bStartEnabled: [0x8]u8, // 0x28
    };
    pub const CBlend2DUpdateNode = extern struct {
        pad_0: [0x60]u8, // 0x0
        m_items: [0x18]u8, // 0x60
        m_tags: [0x18]u8, // 0x78
        m_paramSpans: [0x18]u8, // 0x90
        m_nodeItemIndices: [0x18]u8, // 0xA8
        m_damping: [0x18]u8, // 0xC0
        m_blendSourceX: [0x4]u8, // 0xD8
        m_paramX: [0x4]u8, // 0xDC
        m_blendSourceY: [0x4]u8, // 0xE0
        m_paramY: [0x4]u8, // 0xE4
        m_eBlendMode: [0x4]u8, // 0xE8
        m_playbackSpeed: [0x4]u8, // 0xEC
        m_bLoop: [0x1]u8, // 0xF0
        m_bLockBlendOnReset: [0x1]u8, // 0xF1
        m_bLockWhenWaning: [0x1]u8, // 0xF2
        m_bAnimEventsAndTagsOnMostWeightedOnly: [0x5]u8, // 0xF3
    };
    pub const CNmVelocityBasedSpeedScaleNode__CDefinition = extern struct {
        pad_0: [0x20]u8, // 0x0
    };
    pub const CNPCPhysicsHull = extern struct {
        m_sName: [0x8]u8, // 0x0
        m_eType: [0x4]u8, // 0x8
        m_flCapsuleHeight: [0x4]u8, // 0xC
        m_flCapsuleRadius: [0x4]u8, // 0x10
        m_vCapsuleCenter1: [0xC]u8, // 0x14
        m_vCapsuleCenter2: [0xC]u8, // 0x20
        m_flGroundBoxHeight: [0x4]u8, // 0x2C
        m_flGroundBoxWidth: [0x10]u8, // 0x30
    };
    pub const PermModelExtPart_t = extern struct {
        m_Transform: [0x20]u8, // 0x0
        m_Name: [0x8]u8, // 0x20
        m_nParent: [0x8]u8, // 0x28
        m_refModel: [0x10]u8, // 0x30
    };
    pub const CNmCachedIDNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nInputValueNodeIdx: [0x4]u8, // 0x10
        m_mode: [0x4]u8, // 0x14
    };
    pub const CLeanMatrixUpdateNode = extern struct {
        pad_0: [0x5C]u8, // 0x0
        m_frameCorners: [0x24]u8, // 0x5C
        m_poses: [0x28]u8, // 0x80
        m_damping: [0x18]u8, // 0xA8
        m_blendSource: [0x4]u8, // 0xC0
        m_paramIndex: [0x4]u8, // 0xC4
        m_verticalAxis: [0xC]u8, // 0xC8
        m_horizontalAxis: [0xC]u8, // 0xD4
        m_hSequence: [0x4]u8, // 0xE0
        m_flMaxValue: [0x4]u8, // 0xE4
        m_nSequenceMaxFrame: [0x8]u8, // 0xE8
    };
    pub const CSymbolAnimParameter = extern struct {
        pad_0: [0x80]u8, // 0x0
        m_defaultValue: [0x8]u8, // 0x80
    };
    pub const CNmFloatCurveEventNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_eventID: [0x8]u8, // 0x10
        m_nDefaultNodeIdx: [0x4]u8, // 0x18
        m_flDefaultValue: [0x4]u8, // 0x1C
        m_eventConditionRules: [0x8]u8, // 0x20
    };
    pub const IAnimationGraphInstance = extern struct {
        pad_0: [0x18]u8, // 0x0
    };
    pub const CNmStateMachineNode__TransitionDefinition_t = extern struct {
        m_nTargetStateIdx: [0x2]u8, // 0x0
        m_nConditionNodeIdx: [0x2]u8, // 0x2
        m_nTransitionNodeIdx: [0x2]u8, // 0x4
        m_bCanBeForced: [0x2]u8, // 0x6
    };
    pub const CNmFloatSelectorNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_conditionNodeIndices: [0x18]u8, // 0x10
        m_values: [0x20]u8, // 0x28
        m_flDefaultValue: [0x4]u8, // 0x48
        m_flEaseTime: [0x4]u8, // 0x4C
        m_easingOp: [0x8]u8, // 0x50
    };
    pub const CTargetSelectorUpdateNode = extern struct {
        pad_0: [0x60]u8, // 0x0
        m_eAngleMode: [0x8]u8, // 0x60
        m_children: [0x1C]u8, // 0x68
        m_hTargetPosition: [0x2]u8, // 0x84
        m_hTargetFacePositionParameter: [0x2]u8, // 0x86
        m_hMoveHeadingParameter: [0x2]u8, // 0x88
        m_hDesiredMoveHeadingParameter: [0x2]u8, // 0x8A
        m_bTargetPositionIsWorldSpace: [0x1]u8, // 0x8C
        m_bTargetFacePositionIsWorldSpace: [0x1]u8, // 0x8D
        m_bEnablePhaseMatching: [0x2]u8, // 0x8E
        m_flPhaseMatchingMaxRootMotionSkip: [0x10]u8, // 0x90
    };
    pub const SlopeData = extern struct {
        m_vSlopeNormal: [0xC]u8, // 0x0
    };
    pub const CHitBoxSetList = extern struct {
        m_HitBoxSets: [0x18]u8, // 0x0
    };
    pub const CNmIsInactiveBranchConditionNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const MotionDBIndex = extern struct {
        m_nIndex: [0x4]u8, // 0x0
    };
    pub const CDirectPlaybackTagData = extern struct {
        m_sequenceName: [0x8]u8, // 0x0
        m_tags: [0x18]u8, // 0x8
    };
    pub const CParticleCollectionVecInput = extern struct {
        pad_0: [0x6D8]u8, // 0x0
    };
    pub const CNmGraphEventConditionNode__Condition_t = extern struct {
        m_eventID: [0x8]u8, // 0x0
        m_eventTypeCondition: [0x8]u8, // 0x8
    };
    pub const CNmFloatRemapNode__RemapRange_t = extern struct {
        m_flBegin: [0x4]u8, // 0x0
        m_flEnd: [0x4]u8, // 0x4
    };
    pub const CNmCurrentSyncEventIDNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nSourceStateNodeIdx: [0x8]u8, // 0x10
    };
    pub const CNmStateCompletedConditionNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nSourceStateNodeIdx: [0x2]u8, // 0x10
        m_nTransitionDurationOverrideNodeIdx: [0x2]u8, // 0x12
        m_flTransitionDurationSeconds: [0x4]u8, // 0x14
    };
    pub const CNmCameraFOVEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_curve: [0x40]u8, // 0x18
    };
    pub const CNmTargetWarpEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_rule: [0x1]u8, // 0x18
        m_algorithm: [0x7]u8, // 0x19
    };
    pub const CParamSpanUpdater = extern struct {
        m_spans: [0x18]u8, // 0x0
    };
    pub const CAnimActionUpdater = extern struct {
        pad_0: [0x18]u8, // 0x0
    };
    pub const CParticleAnimTag = extern struct {
        pad_0: [0x58]u8, // 0x0
        m_hParticleSystem: [0x8]u8, // 0x58
        m_particleSystemName: [0x8]u8, // 0x60
        m_configName: [0x8]u8, // 0x68
        m_bDetachFromOwner: [0x1]u8, // 0x70
        m_bAggregate: [0x1]u8, // 0x71
        m_bStopWhenTagEnds: [0x1]u8, // 0x72
        m_bTagEndStopIsInstant: [0x5]u8, // 0x73
        m_attachmentName: [0x8]u8, // 0x78
        m_attachmentType: [0x8]u8, // 0x80
        m_attachmentCP1Name: [0x8]u8, // 0x88
        m_attachmentCP1Type: [0x8]u8, // 0x90
    };
    pub const CCycleBase = extern struct {
        m_flCycle: [0x4]u8, // 0x0
    };
    pub const FollowTargetOpFixedSettings_t = extern struct {
        m_boneIndex: [0x4]u8, // 0x0
        m_bBoneTarget: [0x4]u8, // 0x4
        m_boneTargetIndex: [0x4]u8, // 0x8
        m_bWorldCoodinateTarget: [0x1]u8, // 0xC
        m_bMatchTargetOrientation: [0x3]u8, // 0xD
    };
    pub const CNmIDSwitchNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nSwitchValueNodeIdx: [0x2]u8, // 0x10
        m_nTrueValueNodeIdx: [0x2]u8, // 0x12
        m_nFalseValueNodeIdx: [0x4]u8, // 0x14
        m_falseValue: [0x8]u8, // 0x18
        m_trueValue: [0x8]u8, // 0x20
    };
    pub const CNmRootMotionEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_flBlendTimeSeconds: [0x8]u8, // 0x18
    };
    pub const CPulse_PublicOutput = extern struct {
        m_Name: [0x10]u8, // 0x0
        m_Description: [0x8]u8, // 0x10
        m_Args: [0x10]u8, // 0x18
    };
    pub const CChoiceInstanceData = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_currentChoice: [0xC]u8, // 0x10
        m_previousChoice: [0x4]u8, // 0x1C
        m_flClipStartTime: [0xC]u8, // 0x20
        m_choicePreviousCycle: [0x8]u8, // 0x2C
    };
    pub const CNmContactAudioTypeVData = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const CNmCameraDOFEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_curve: [0x40]u8, // 0x18
    };
    pub const AnimationSnapshotBase_t = extern struct {
        m_flRealTime: [0x10]u8, // 0x0
        m_rootToWorld: [0x30]u8, // 0x10
        m_bBonesInWorldSpace: [0x8]u8, // 0x40
        m_boneSetupMask: [0x18]u8, // 0x48
        m_boneTransforms: [0x18]u8, // 0x60
        m_flexControllers: [0x18]u8, // 0x78
        m_SnapshotType: [0x4]u8, // 0x90
        m_bHasDecodeDump: [0x4]u8, // 0x94
        m_DecodeDump: [0x78]u8, // 0x98
    };
    pub const CEmitTagActionUpdater = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_nTagIndex: [0x4]u8, // 0x18
        m_bIsZeroDuration: [0x4]u8, // 0x1C
    };
    pub const DynamicMeshDeformParams_t = extern struct {
        m_flTensionCompressScale: [0x4]u8, // 0x0
        m_flTensionStretchScale: [0x4]u8, // 0x4
        m_bRecomputeSmoothNormalsAfterAnimation: [0x1]u8, // 0x8
        m_bComputeDynamicMeshTensionAfterAnimation: [0x1]u8, // 0x9
        m_bSmoothNormalsAcrossUvSeams: [0x1]u8, // 0xA
        m_bEnableEyeBulgeDeformation: [0x1]u8, // 0xB
    };
    pub const CNmTimeConditionNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_sourceStateNodeIdx: [0x2]u8, // 0x10
        m_nInputValueNodeIdx: [0x2]u8, // 0x12
        m_flComparand: [0x4]u8, // 0x14
        m_type: [0x1]u8, // 0x18
        m_operator: [0x7]u8, // 0x19
    };
    pub const CNmSyncEventIndexConditionNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nSourceStateNodeIdx: [0x2]u8, // 0x10
        m_triggerMode: [0x2]u8, // 0x12
        m_syncEventIdx: [0x4]u8, // 0x14
    };
    pub const CAnimStateMachineUpdater = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_states: [0x18]u8, // 0x8
        m_transitions: [0x30]u8, // 0x20
        m_startStateIndex: [0x8]u8, // 0x50
    };
    pub const CUnaryUpdateNode = extern struct {
        pad_0: [0x60]u8, // 0x0
        m_pChildNode: [0x10]u8, // 0x60
    };
    pub const CNmIDToFloatNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nInputValueNodeIdx: [0x4]u8, // 0x10
        m_defaultValue: [0x4]u8, // 0x14
        m_IDs: [0x30]u8, // 0x18
        m_values: [0x20]u8, // 0x48
    };
    pub const PlayerInputMotorInstanceData_t = extern struct {
        m_vInputVectorWS: [0xC]u8, // 0x0
        m_vVelocityWS: [0xC]u8, // 0xC
        m_vAccelerationWS: [0x10]u8, // 0x18
    };
    pub const CSelectorUpdateNode = extern struct {
        pad_0: [0x60]u8, // 0x0
        m_children: [0x18]u8, // 0x60
        m_tags: [0x1C]u8, // 0x78
        m_blendCurve: [0x8]u8, // 0x94
        m_flBlendTime: [0x8]u8, // 0x9C
        m_hParameter: [0x4]u8, // 0xA4
        m_nTagIndex: [0x4]u8, // 0xA8
        m_eTagBehavior: [0x4]u8, // 0xAC
        m_bResetOnChange: [0x1]u8, // 0xB0
        m_bLockWhenWaning: [0x1]u8, // 0xB1
        m_bSyncCyclesOnChange: [0x6]u8, // 0xB2
    };
    pub const NmPercent_t = extern struct {
        m_flValue: [0x4]u8, // 0x0
    };
    pub const CStateMachineComponentUpdater = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_stateMachine: [0x58]u8, // 0x30
    };
    pub const CAnimUpdateNodeRef = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_nodeIndex: [0x8]u8, // 0x8
    };
    pub const CPulse_OutputConnection = extern struct {
        m_SourceOutput: [0x10]u8, // 0x0
        m_TargetEntity: [0x10]u8, // 0x10
        m_TargetInput: [0x10]u8, // 0x20
        m_Param: [0x10]u8, // 0x30
    };
    pub const CPhysSurfaceProperties = extern struct {
        m_name: [0x8]u8, // 0x0
        m_nameHash: [0x4]u8, // 0x8
        m_baseNameHash: [0xC]u8, // 0xC
        m_bHidden: [0x8]u8, // 0x18
        m_description: [0x8]u8, // 0x20
        m_physics: [0x18]u8, // 0x28
        m_vehicleParams: [0x8]u8, // 0x40
        m_audioSounds: [0x60]u8, // 0x48
        m_audioParams: [0x20]u8, // 0xA8
    };
    pub const CNmBoneMaskValueNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const CSeqPoseParamDesc = extern struct {
        m_sName: [0x10]u8, // 0x0
        m_flStart: [0x4]u8, // 0x10
        m_flEnd: [0x4]u8, // 0x14
        m_flLoop: [0x4]u8, // 0x18
        m_bLooping: [0x4]u8, // 0x1C
    };
    pub const CModelConfigElement_SetBodygroup = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_GroupName: [0x8]u8, // 0x48
        m_nChoice: [0x8]u8, // 0x50
    };
    pub const CAnimMovement = extern struct {
        endframe: [0x4]u8, // 0x0
        motionflags: [0x4]u8, // 0x4
        v0: [0x4]u8, // 0x8
        v1: [0x4]u8, // 0xC
        angle: [0x4]u8, // 0x10
        vector: [0xC]u8, // 0x14
        position: [0xC]u8, // 0x20
    };
    pub const CParticleRemapFloatInput = extern struct {
        pad_0: [0x178]u8, // 0x0
    };
    pub const FollowAttachmentData = extern struct {
        m_boneIndex: [0x4]u8, // 0x0
        m_attachmentHandle: [0x4]u8, // 0x4
    };
    pub const FootStepTrigger = extern struct {
        m_tags: [0x18]u8, // 0x0
        m_nFootIndex: [0x4]u8, // 0x18
        m_triggerPhase: [0x4]u8, // 0x1C
    };
    pub const CNmSyncTrack__EventMarker_t = extern struct {
        m_startTime: [0x8]u8, // 0x0
        m_ID: [0x8]u8, // 0x8
    };
    pub const CPathMetricEvaluator = extern struct {
        pad_0: [0x50]u8, // 0x0
        m_pathTimeSamples: [0x18]u8, // 0x50
        m_flDistance: [0x4]u8, // 0x68
        m_bExtrapolateMovement: [0x4]u8, // 0x6C
        m_flMinExtrapolationSpeed: [0x8]u8, // 0x70
    };
    pub const CFootLockUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        m_opFixedSettings: [0x70]u8, // 0x70
        m_footSettings: [0x18]u8, // 0xE0
        m_hipShiftDamping: [0x18]u8, // 0xF8
        m_rootHeightDamping: [0x18]u8, // 0x110
        m_flStrideCurveScale: [0x4]u8, // 0x128
        m_flStrideCurveLimitScale: [0x4]u8, // 0x12C
        m_flStepHeightIncreaseScale: [0x4]u8, // 0x130
        m_flStepHeightDecreaseScale: [0x4]u8, // 0x134
        m_flHipShiftScale: [0x4]u8, // 0x138
        m_flBlendTime: [0x4]u8, // 0x13C
        m_flMaxRootHeightOffset: [0x4]u8, // 0x140
        m_flMinRootHeightOffset: [0x4]u8, // 0x144
        m_flTiltPlanePitchSpringStrength: [0x4]u8, // 0x148
        m_flTiltPlaneRollSpringStrength: [0x4]u8, // 0x14C
        m_bApplyFootRotationLimits: [0x1]u8, // 0x150
        m_bApplyHipShift: [0x1]u8, // 0x151
        m_bModulateStepHeight: [0x1]u8, // 0x152
        m_bResetChild: [0x1]u8, // 0x153
        m_bEnableVerticalCurvedPaths: [0x1]u8, // 0x154
        m_bEnableRootHeightDamping: [0x3]u8, // 0x155
    };
    pub const CNmOrientationWarpEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
    };
    pub const CNmIDValueNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const PulseGraphExecutionHistoryNodeDesc_t = extern struct {
        strCellDesc: [0x10]u8, // 0x0
        strBindingName: [0x10]u8, // 0x10
    };
    pub const JiggleBoneSettings_t = extern struct {
        m_nBoneIndex: [0x4]u8, // 0x0
        m_flSpringStrength: [0x4]u8, // 0x4
        m_flMaxTimeStep: [0x4]u8, // 0x8
        m_flDamping: [0x4]u8, // 0xC
        m_vBoundsMaxLS: [0xC]u8, // 0x10
        m_vBoundsMinLS: [0xC]u8, // 0x1C
        m_eSimSpace: [0x4]u8, // 0x28
    };
    pub const CJumpHelperUpdateNode = extern struct {
        pad_0: [0xB0]u8, // 0x0
        m_hTargetParam: [0x4]u8, // 0xB0
        m_flOriginalJumpMovement: [0xC]u8, // 0xB4
        m_flOriginalJumpDuration: [0x4]u8, // 0xC0
        m_flJumpStartCycle: [0x4]u8, // 0xC4
        m_flJumpEndCycle: [0x4]u8, // 0xC8
        m_eCorrectionMethod: [0x4]u8, // 0xCC
        m_bTranslationAxis: [0x3]u8, // 0xD0
        m_bScaleSpeed: [0x5]u8, // 0xD3
    };
    pub const CNmControlParameterBoolNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const CNmChainLookatTask = extern struct {
        pad_0: [0x120]u8, // 0x0
    };
    pub const FootLockPoseOpFixedSettings = extern struct {
        m_footInfo: [0x18]u8, // 0x0
        m_hipDampingSettings: [0x18]u8, // 0x18
        m_nHipBoneIndex: [0x4]u8, // 0x30
        m_ikSolverType: [0x4]u8, // 0x34
        m_bApplyTilt: [0x1]u8, // 0x38
        m_bApplyHipDrop: [0x1]u8, // 0x39
        m_bAlwaysUseFallbackHinge: [0x1]u8, // 0x3A
        m_bApplyFootRotationLimits: [0x1]u8, // 0x3B
        m_bApplyLegTwistLimits: [0x4]u8, // 0x3C
        m_flMaxFootHeight: [0x4]u8, // 0x40
        m_flExtensionScale: [0x4]u8, // 0x44
        m_flMaxLegTwist: [0x4]u8, // 0x48
        m_bEnableLockBreaking: [0x4]u8, // 0x4C
        m_flLockBreakTolerance: [0x4]u8, // 0x50
        m_flLockBlendTime: [0x4]u8, // 0x54
        m_bEnableStretching: [0x4]u8, // 0x58
        m_flMaxStretchAmount: [0x4]u8, // 0x5C
        m_flStretchExtensionScale: [0x8]u8, // 0x60
    };
    pub const CBoneVelocityMetricEvaluator = extern struct {
        pad_0: [0x50]u8, // 0x0
        m_nBoneIndex: [0x8]u8, // 0x50
    };
    pub const CWarpSectionAnimTag = extern struct {
        pad_0: [0x50]u8, // 0x0
        m_bWarpPosition: [0x1]u8, // 0x50
        m_bWarpOrientation: [0x7]u8, // 0x51
    };
    pub const SelectorInstanceData_t = extern struct {
        m_weights: [0x8]u8, // 0x0
        m_currentIndexStartTime: [0xC]u8, // 0x8
        m_currentIndex: [0x4]u8, // 0x14
        m_previousIndex: [0x14]u8, // 0x18
    };
    pub const CModelConfigElement_RandomColor = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_Gradient: [0x18]u8, // 0x48
    };
    pub const CFootMotion = extern struct {
        m_strides: [0x18]u8, // 0x0
        m_name: [0x8]u8, // 0x18
        m_bAdditive: [0x8]u8, // 0x20
    };
    pub const CJiggleBoneUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        m_opFixedData: [0x20]u8, // 0x70
    };
    pub const CNmConstVectorNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_value: [0x10]u8, // 0x10
    };
    pub const MoodAnimation_t = extern struct {
        m_sName: [0x8]u8, // 0x0
        m_flWeight: [0x8]u8, // 0x8
    };
    pub const CLODComponentUpdater = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_nServerLOD: [0x8]u8, // 0x30
    };
    pub const CNmIsTargetSetNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nInputValueNodeIdx: [0x8]u8, // 0x10
    };
    pub const CPhysSurfacePropertiesVehicle = extern struct {
        m_wheelDrag: [0x4]u8, // 0x0
        m_wheelFrictionScale: [0x4]u8, // 0x4
    };
    pub const CAnimDataChannelDesc = extern struct {
        m_szChannelClass: [0x10]u8, // 0x0
        m_szVariableName: [0x10]u8, // 0x10
        m_nFlags: [0x4]u8, // 0x20
        m_nType: [0x4]u8, // 0x24
        m_szGrouping: [0x10]u8, // 0x28
        m_szDescription: [0x10]u8, // 0x38
        m_szElementNameArray: [0x18]u8, // 0x48
        m_nElementIndexArray: [0x18]u8, // 0x60
        m_nElementMaskArray: [0x18]u8, // 0x78
    };
    pub const CPairedSequenceComponentUpdater = extern struct {
        pad_0: [0x38]u8, // 0x0
    };
    pub const CNmParticleEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_relevance: [0x4]u8, // 0x18
        m_type: [0x4]u8, // 0x1C
        m_target: [0x8]u8, // 0x20
        m_hParticleSystem: [0x8]u8, // 0x28
        m_tags: [0x8]u8, // 0x30
        m_bStopImmediately: [0x1]u8, // 0x38
        m_bDetachFromOwner: [0x1]u8, // 0x39
        m_bPlayEndCap: [0x6]u8, // 0x3A
        m_attachmentPoint0: [0x8]u8, // 0x40
        m_attachmentType0: [0x8]u8, // 0x48
        m_attachmentPoint1: [0x8]u8, // 0x50
        m_attachmentType1: [0x8]u8, // 0x58
        m_config: [0x8]u8, // 0x60
        m_effectForConfig: [0x8]u8, // 0x68
    };
    pub const MotionSelection = extern struct {
        pad_0: [0x24]u8, // 0x0
        m_nConfigIndex: [0xC]u8, // 0x24
        m_flCycleZeroTime: [0xC]u8, // 0x30
        m_flPlaybackSpeed: [0xC]u8, // 0x3C
        m_flStartTime: [0xC]u8, // 0x48
        m_nSample: [0x4]u8, // 0x54
    };
    pub const CMorphRectData = extern struct {
        m_nXLeftDst: [0x2]u8, // 0x0
        m_nYTopDst: [0x2]u8, // 0x2
        m_flUWidthSrc: [0x4]u8, // 0x4
        m_flVHeightSrc: [0x8]u8, // 0x8
        m_bundleDatas: [0x18]u8, // 0x10
    };
    pub const CAnimFoot = extern struct {
        m_name: [0x8]u8, // 0x0
        m_vBallOffset: [0xC]u8, // 0x8
        m_vHeelOffset: [0xC]u8, // 0x14
        m_ankleBoneIndex: [0x4]u8, // 0x20
        m_toeBoneIndex: [0x4]u8, // 0x24
    };
    pub const CParentConstraint = extern struct {
        pad_0: [0x60]u8, // 0x0
    };
    pub const CNmCachedVectorNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nInputValueNodeIdx: [0x4]u8, // 0x10
        m_mode: [0x4]u8, // 0x14
    };
    pub const CNmStateNode__TimedEvent_t = extern struct {
        m_ID: [0x8]u8, // 0x0
        m_flTimeValueSeconds: [0x4]u8, // 0x8
        m_comparisionOperator: [0x4]u8, // 0xC
    };
    pub const CFootPositionMetricEvaluator = extern struct {
        pad_0: [0x50]u8, // 0x0
        m_footIndices: [0x18]u8, // 0x50
        m_bIgnoreSlope: [0x8]u8, // 0x68
    };
    pub const CParticleVariableRef = extern struct {
        m_variableName: [0x38]u8, // 0x0
        m_variableType: [0x18]u8, // 0x38
    };
    pub const CMoverInstanceData = extern struct {
        m_flDampedValue: [0x4]u8, // 0x0
        m_vMovement: [0x18]u8, // 0x4
        m_Rotation: [0x4]u8, // 0x1C
        m_TargetOrientation: [0xC]u8, // 0x20
    };
    pub const HSequence = extern struct {
        m_Value: [0x4]u8, // 0x0
    };
    pub const CDampedValueUpdateItem = extern struct {
        m_damping: [0x20]u8, // 0x0
        m_hParamIn: [0x2]u8, // 0x20
        m_hParamOut: [0x6]u8, // 0x22
    };
    pub const CAnimLocalHierarchy = extern struct {
        m_sBone: [0x10]u8, // 0x0
        m_sNewParent: [0x10]u8, // 0x10
        m_nStartFrame: [0x4]u8, // 0x20
        m_nPeakFrame: [0x4]u8, // 0x24
        m_nTailFrame: [0x4]u8, // 0x28
        m_nEndFrame: [0x4]u8, // 0x2C
    };
    pub const CBlendUpdateNode = extern struct {
        pad_0: [0x60]u8, // 0x0
        m_children: [0x18]u8, // 0x60
        m_sortedOrder: [0x18]u8, // 0x78
        m_targetValues: [0x1C]u8, // 0x90
        m_blendValueSource: [0x4]u8, // 0xAC
        m_eLinearRootMotionBlendMode: [0x4]u8, // 0xB0
        m_paramIndex: [0x4]u8, // 0xB4
        m_damping: [0x18]u8, // 0xB8
        m_blendKeyType: [0x4]u8, // 0xD0
        m_bLockBlendOnReset: [0x1]u8, // 0xD4
        m_bSyncCycles: [0x1]u8, // 0xD5
        m_bLoop: [0x1]u8, // 0xD6
        m_bLockWhenWaning: [0x1]u8, // 0xD7
        m_bIsAngle: [0x8]u8, // 0xD8
    };
    pub const PulseGraphExecutionHistoryEntry_t = extern struct {
        nCursorID: [0x4]u8, // 0x0
        nEditorID: [0x4]u8, // 0x4
        seqPoint: [0x10]u8, // 0x8
        flExecTime: [0x4]u8, // 0x18
        unFlags: [0x4]u8, // 0x1C
        tagName: [0x10]u8, // 0x20
        childID: [0x8]u8, // 0x30
    };
    pub const CQuaternionAnimParameter = extern struct {
        pad_0: [0x80]u8, // 0x0
        m_defaultValue: [0x10]u8, // 0x80
        m_bInterpolate: [0x10]u8, // 0x90
    };
    pub const PermModelData_t = extern struct {
        m_name: [0x8]u8, // 0x0
        m_modelInfo: [0x58]u8, // 0x8
        m_ExtParts: [0x18]u8, // 0x60
        m_refMeshes: [0x18]u8, // 0x78
        m_refMeshGroupMasks: [0x18]u8, // 0x90
        m_refPhysGroupMasks: [0x18]u8, // 0xA8
        m_refLODGroupMasks: [0x18]u8, // 0xC0
        m_lodGroupSwitchDistances: [0x18]u8, // 0xD8
        m_refPhysicsData: [0x18]u8, // 0xF0
        m_refPhysicsHitboxData: [0x18]u8, // 0x108
        m_refAnimGroups: [0x18]u8, // 0x120
        m_refSequenceGroups: [0x18]u8, // 0x138
        m_meshGroups: [0x18]u8, // 0x150
        m_materialGroups: [0x18]u8, // 0x168
        m_nDefaultMeshGroupMask: [0x8]u8, // 0x180
        m_modelSkeleton: [0xA8]u8, // 0x188
        m_remappingTable: [0x18]u8, // 0x230
        m_remappingTableStarts: [0x18]u8, // 0x248
        m_boneFlexDrivers: [0x18]u8, // 0x260
        m_pModelConfigList: [0x8]u8, // 0x278
        m_BodyGroupsHiddenInTools: [0x18]u8, // 0x280
        m_refAnimIncludeModels: [0x18]u8, // 0x298
        m_AnimatedMaterialAttributes: [0x18]u8, // 0x2B0
        m_animGraph2Refs: [0x18]u8, // 0x2C8
        m_vecNmSkeletonRefs: [0x18]u8, // 0x2E0
    };
    pub const PulseCursorYieldToken_t = extern struct {
        m_Value: [0x4]u8, // 0x0
    };
    pub const CNmSampleTask = extern struct {
        pad_0: [0x80]u8, // 0x0
    };
    pub const CFollowPathInstanceData = extern struct {
        m_xLastPredictedTransformsDeltas: [0x8]u8, // 0x0
        m_dampedTurnValue: [0x4]u8, // 0x8
        m_flTurnAmount: [0x4]u8, // 0xC
        m_flPredictionScale: [0xC]u8, // 0x10
        m_flLastPathTime: [0x8]u8, // 0x1C
    };
    pub const CStaticPoseCacheBuilder = extern struct {
        pad_0: [0x38]u8, // 0x0
    };
    pub const ModelMeshBufferData_t = extern struct {
        m_nBlockIndex: [0x4]u8, // 0x0
        m_nElementCount: [0x4]u8, // 0x4
        m_nElementSizeInBytes: [0x4]u8, // 0x8
        m_bMeshoptCompressed: [0x1]u8, // 0xC
        m_bMeshoptIndexSequence: [0x1]u8, // 0xD
        m_nMeshoptMeshletEncodeVersion: [0x1]u8, // 0xE
        m_bCompressedZSTD: [0x1]u8, // 0xF
        m_bCreateBufferSRV: [0x1]u8, // 0x10
        m_bCreateBufferUAV: [0x1]u8, // 0x11
        m_bCreateRawBuffer: [0x1]u8, // 0x12
        m_bCreatePooledBuffer: [0x1]u8, // 0x13
        m_nBufferUsage: [0x4]u8, // 0x14
        m_inputLayoutFields: [0x18]u8, // 0x18
    };
    pub const CSequenceGroupData = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_sName: [0x10]u8, // 0x10
        m_nFlags: [0x8]u8, // 0x20
        m_localSequenceNameArray: [0x18]u8, // 0x28
        m_localS1SeqDescArray: [0x18]u8, // 0x40
        m_localMultiSeqDescArray: [0x18]u8, // 0x58
        m_localSynthAnimDescArray: [0x18]u8, // 0x70
        m_localCmdSeqDescArray: [0x18]u8, // 0x88
        m_localBoneMaskArray: [0x18]u8, // 0xA0
        m_localScaleSetArray: [0x18]u8, // 0xB8
        m_localBoneNameArray: [0x18]u8, // 0xD0
        m_localNodeName: [0x10]u8, // 0xE8
        m_localPoseParamArray: [0x18]u8, // 0xF8
        m_keyValues: [0x10]u8, // 0x110
        m_localIKAutoplayLockArray: [0x18]u8, // 0x120
    };
    pub const CStateMachineUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        m_stateMachine: [0x58]u8, // 0x70
        m_stateData: [0x18]u8, // 0xC8
        m_transitionData: [0x1C]u8, // 0xE0
        m_bBlockWaningTags: [0x1]u8, // 0xFC
        m_bLockStateWhenWaning: [0x1]u8, // 0xFD
        m_bResetWhenActivated: [0x2]u8, // 0xFE
    };
    pub const CNmIDBasedSelectorNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_optionNodeIndices: [0x18]u8, // 0x10
        m_optionIDs: [0x30]u8, // 0x28
        m_nParameterNodeIdx: [0x2]u8, // 0x58
        m_nFallbackNodeIdx: [0x2]u8, // 0x5A
        m_bIgnoreInvalidOptions: [0x4]u8, // 0x5C
    };
    pub const CAimMatrixUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        m_opFixedSettings: [0xF8]u8, // 0x70
        m_target: [0x4]u8, // 0x168
        m_paramIndex: [0x4]u8, // 0x16C
        m_hSequence: [0x4]u8, // 0x170
        m_bResetChild: [0x1]u8, // 0x174
        m_bLockWhenWaning: [0xB]u8, // 0x175
    };
    pub const SkeletonAnimCapture_t__Frame_t = extern struct {
        m_flTime: [0x4]u8, // 0x0
        m_Stamp: [0x1C]u8, // 0x4
        m_Transform: [0x20]u8, // 0x20
        m_bTeleport: [0x8]u8, // 0x40
        m_CompositeBones: [0x18]u8, // 0x48
        m_SimStateBones: [0x18]u8, // 0x60
        m_FeModelAnims: [0x18]u8, // 0x78
        m_FeModelPos: [0x18]u8, // 0x90
        m_FlexControllerWeights: [0x18]u8, // 0xA8
    };
    pub const CModelConfigElement_Command = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_Command: [0x8]u8, // 0x48
        m_Args: [0x10]u8, // 0x50
    };
    pub const TargetSelectorInstanceData_t = extern struct {
        m_currentIndex: [0x1C]u8, // 0x0
        m_vMSRootMotionAnlyzerTarget: [0x14]u8, // 0x1C
    };
    pub const CAnimEventDefinition = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_nFrame: [0x4]u8, // 0x8
        m_nEndFrame: [0x4]u8, // 0xC
        m_flCycle: [0x4]u8, // 0x10
        m_flDuration: [0x4]u8, // 0x14
        m_EventData: [0x10]u8, // 0x18
        m_sLegacyOptions: [0x10]u8, // 0x28
        m_sEventName: [0x8]u8, // 0x38
    };
    pub const CNmRootMotionData = extern struct {
        m_transforms: [0x18]u8, // 0x0
        m_nNumFrames: [0x4]u8, // 0x18
        m_flAverageLinearVelocity: [0x4]u8, // 0x1C
        m_flAverageAngularVelocityRadians: [0x10]u8, // 0x20
        m_totalDelta: [0x20]u8, // 0x30
    };
    pub const CPulseGraphExecutionHistory = extern struct {
        m_nInstanceID: [0x8]u8, // 0x0
        m_strFileName: [0x8]u8, // 0x8
        m_vecHistory: [0x18]u8, // 0x10
        m_mapCellDesc: [0x28]u8, // 0x28
        m_mapCursorDesc: [0x28]u8, // 0x50
    };
    pub const AnimScriptHandle = extern struct {
        m_id: [0x4]u8, // 0x0
    };
    pub const CFlexOp = extern struct {
        m_OpCode: [0x4]u8, // 0x0
        m_Data: [0x4]u8, // 0x4
    };
    pub const CHitReactUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        m_opFixedSettings: [0x4C]u8, // 0x70
        m_triggerParam: [0x2]u8, // 0xBC
        m_hitBoneParam: [0x2]u8, // 0xBE
        m_hitOffsetParam: [0x2]u8, // 0xC0
        m_hitDirectionParam: [0x2]u8, // 0xC2
        m_hitStrengthParam: [0x4]u8, // 0xC4
        m_flMinDelayBetweenHits: [0x4]u8, // 0xC8
        m_bResetChild: [0x4]u8, // 0xCC
    };
    pub const CLookAtUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        m_opFixedSettings: [0xD8]u8, // 0x70
        m_target: [0x4]u8, // 0x148
        m_paramIndex: [0x2]u8, // 0x14C
        m_weightParamIndex: [0x2]u8, // 0x14E
        m_bResetChild: [0x1]u8, // 0x150
        m_bLockWhenWaning: [0xF]u8, // 0x151
    };
    pub const CAnimBone = extern struct {
        m_name: [0x10]u8, // 0x0
        m_parent: [0x4]u8, // 0x10
        m_pos: [0xC]u8, // 0x14
        m_quat: [0x10]u8, // 0x20
        m_scale: [0x4]u8, // 0x30
        m_qAlignment: [0x10]u8, // 0x34
        m_flags: [0x4]u8, // 0x44
    };
    pub const CAnimParameterManagerUpdater = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_parameters: [0x18]u8, // 0x18
        m_idToIndexMap: [0x20]u8, // 0x30
        m_nameToIndexMap: [0x20]u8, // 0x50
        m_indexToHandle: [0x18]u8, // 0x70
        m_autoResetParams: [0x18]u8, // 0x88
        m_autoResetMap: [0x60]u8, // 0xA0
    };
    pub const BoneDemoCaptureSettings_t = extern struct {
        m_boneName: [0x8]u8, // 0x0
        m_flErrorSplineRotationMax: [0x4]u8, // 0x8
        m_flErrorSplineTranslationMax: [0x4]u8, // 0xC
        m_flErrorSplineScaleMax: [0x4]u8, // 0x10
        m_flErrorQuantizationRotationMax: [0x4]u8, // 0x14
        m_flErrorQuantizationTranslationMax: [0x4]u8, // 0x18
        m_flErrorQuantizationScaleMax: [0x4]u8, // 0x1C
    };
    pub const PairedSequenceData = extern struct {
        m_vecPairedSequences: [0x100]u8, // 0x0
    };
    pub const CBoneConstraintPoseSpaceMorph__Input_t = extern struct {
        m_inputValue: [0x10]u8, // 0x0
        m_outputWeightList: [0x18]u8, // 0x10
    };
    pub const MoodAnimationLayer_t = extern struct {
        m_sName: [0x8]u8, // 0x0
        m_bActiveListening: [0x1]u8, // 0x8
        m_bActiveTalking: [0x7]u8, // 0x9
        m_layerAnimations: [0x18]u8, // 0x10
        m_flIntensity: [0x8]u8, // 0x28
        m_flDurationScale: [0x8]u8, // 0x30
        m_bScaleWithInts: [0x4]u8, // 0x38
        m_flNextStart: [0x8]u8, // 0x3C
        m_flStartOffset: [0x8]u8, // 0x44
        m_flEndOffset: [0x8]u8, // 0x4C
        m_flFadeIn: [0x4]u8, // 0x54
        m_flFadeOut: [0x8]u8, // 0x58
    };
    pub const CSpeedScaleUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        m_paramIndex: [0x8]u8, // 0x70
    };
    pub const CSequenceTagSpans = extern struct {
        m_sSequenceName: [0x8]u8, // 0x0
        m_tags: [0x18]u8, // 0x8
    };
    pub const CModelConfigElement_SetBodygroupOnAttachedModels = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_GroupName: [0x8]u8, // 0x48
        m_nChoice: [0x8]u8, // 0x50
    };
    pub const CCurrentVelocityMetricEvaluator = extern struct {
        pad_0: [0x50]u8, // 0x0
    };
    pub const CNmBoolValueNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const CAnimReplayFrame = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_inputDataBlocks: [0x18]u8, // 0x10
        m_instanceData: [0x18]u8, // 0x28
        m_startingLocalToWorldTransform: [0x20]u8, // 0x40
        m_localToWorldTransform: [0x20]u8, // 0x60
        m_timeStamp: [0x10]u8, // 0x80
    };
    pub const CNmTransitionEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_rule: [0x8]u8, // 0x18
        m_ID: [0x8]u8, // 0x20
    };
    pub const CNmFloatCurveEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_ID: [0x8]u8, // 0x18
        m_curve: [0x40]u8, // 0x20
    };
    pub const CParticleTransformInput = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nType: [0x8]u8, // 0x10
        m_NamedValue: [0x40]u8, // 0x18
        m_bFollowNamedValue: [0x1]u8, // 0x58
        m_bSupportsDisabled: [0x1]u8, // 0x59
        m_bUseOrientation: [0x2]u8, // 0x5A
        m_nControlPoint: [0x4]u8, // 0x5C
        m_nControlPointRangeMax: [0x4]u8, // 0x60
        m_flEndCPGrowthTime: [0x4]u8, // 0x64
    };
    pub const CPathAnimMotorUpdaterBase = extern struct {
        pad_0: [0x20]u8, // 0x0
        m_bLockToPath: [0x8]u8, // 0x20
    };
    pub const PGDInstruction_t = extern struct {
        m_nCode: [0x4]u8, // 0x0
        m_nVar: [0x4]u8, // 0x4
        m_nReg0: [0x2]u8, // 0x8
        m_nReg1: [0x2]u8, // 0xA
        m_nReg2: [0x4]u8, // 0xC
        m_nInvokeBindingIndex: [0x4]u8, // 0x10
        m_nChunk: [0x4]u8, // 0x14
        m_nDestInstruction: [0x4]u8, // 0x18
        m_nCallInfoIndex: [0x4]u8, // 0x1C
        m_nConstIdx: [0x2]u8, // 0x20
        m_nDomainValueIdx: [0x2]u8, // 0x22
        m_nBlackboardReferenceIdx: [0x2]u8, // 0x24
        m_nTempVarIdx: [0x12]u8, // 0x26
    };
    pub const CNmFootstepEventPercentageThroughNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nSourceStateNodeIdx: [0x2]u8, // 0x10
        m_phaseCondition: [0x2]u8, // 0x12
        m_eventConditionRules: [0x4]u8, // 0x14
    };
    pub const AimCameraOpFixedSettings_t = extern struct {
        m_nChainIndex: [0x4]u8, // 0x0
        m_nCameraJointIndex: [0x4]u8, // 0x4
        m_nPelvisJointIndex: [0x4]u8, // 0x8
        m_nClavicleLeftJointIndex: [0x4]u8, // 0xC
        m_nClavicleRightJointIndex: [0x4]u8, // 0x10
        m_nDepenetrationJointIndex: [0x4]u8, // 0x14
        m_propJoints: [0x18]u8, // 0x18
    };
    pub const SkeletonAnimCapture_t__Camera_t = extern struct {
        m_tmCamera: [0x20]u8, // 0x0
        m_flTime: [0x10]u8, // 0x20
    };
    pub const CNmGraphEventConditionNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nSourceStateNodeIdx: [0x4]u8, // 0x10
        m_eventConditionRules: [0x4]u8, // 0x14
        m_conditions: [0x68]u8, // 0x18
    };
    pub const CFollowAttachmentUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        m_opFixedData: [0xA0]u8, // 0x70
    };
    pub const CMovementComponentUpdater = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_motors: [0x18]u8, // 0x30
        m_facingDamping: [0x20]u8, // 0x48
        m_nDefaultMotorIndex: [0x4]u8, // 0x68
        m_flDefaultRunSpeed: [0x4]u8, // 0x6C
        m_bMoveVarsDisabled: [0x1]u8, // 0x70
        m_bNetworkPath: [0x1]u8, // 0x71
        m_bNetworkFacing: [0x1]u8, // 0x72
        m_paramHandles: [0x45]u8, // 0x73
    };
    pub const CModelConfigElement_SetMaterialGroup = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_MaterialGroupName: [0x8]u8, // 0x48
    };
    pub const IParticleEffect = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const CFutureFacingMetricEvaluator = extern struct {
        pad_0: [0x50]u8, // 0x0
        m_flDistance: [0x4]u8, // 0x50
        m_flTime: [0x4]u8, // 0x54
    };
    pub const CNmIDBasedClipSelectorNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_optionNodeIndices: [0x18]u8, // 0x10
        m_optionIDs: [0x30]u8, // 0x28
        m_nParameterNodeIdx: [0x2]u8, // 0x58
        m_nFallbackNodeIdx: [0x2]u8, // 0x5A
        m_bIgnoreInvalidOptions: [0x4]u8, // 0x5C
    };
    pub const CLeanMatrixInstanceData = extern struct {
        m_flValueY: [0x4]u8, // 0x0
        m_flValueX: [0x8]u8, // 0x4
    };
    pub const NmCompressionSettings_t = extern struct {
        m_translationRangeX: [0x8]u8, // 0x0
        m_translationRangeY: [0x8]u8, // 0x8
        m_translationRangeZ: [0x8]u8, // 0x10
        m_scaleRange: [0x8]u8, // 0x18
        m_nTrackReadOffset: [0x10]u8, // 0x20
        m_constantRotation: [0x10]u8, // 0x30
        m_bIsRotationStatic: [0x1]u8, // 0x40
        m_bIsTranslationStatic: [0x1]u8, // 0x41
        m_bIsScaleStatic: [0xE]u8, // 0x42
    };
    pub const CPulse_Variable = extern struct {
        m_Name: [0x10]u8, // 0x0
        m_Description: [0x8]u8, // 0x10
        m_Type: [0x18]u8, // 0x18
        m_DefaultValue: [0x14]u8, // 0x30
        m_nKeysSource: [0x4]u8, // 0x44
        m_bIsPublicBlackboardVariable: [0x1]u8, // 0x48
        m_bIsObservable: [0x3]u8, // 0x49
        m_nEditorNodeID: [0x4]u8, // 0x4C
        m_Metadata: [0x10]u8, // 0x50
    };
    pub const PARTICLE_EHANDLE__ = extern struct {
        unused: [0x4]u8, // 0x0
    };
    pub const CAddUpdateNode = extern struct {
        pad_0: [0x94]u8, // 0x0
        m_footMotionTiming: [0x4]u8, // 0x94
        m_bApplyToFootMotion: [0x1]u8, // 0x98
        m_bApplyChannelsSeparately: [0x1]u8, // 0x99
        m_bUseModelSpace: [0x1]u8, // 0x9A
        m_bApplyScale: [0x5]u8, // 0x9B
    };
    pub const CAnimEnum = extern struct {
        m_value: [0x1]u8, // 0x0
    };
    pub const CDemoSettingsComponentUpdater = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_settings: [0x80]u8, // 0x30
    };
    pub const CAnimDecoder = extern struct {
        m_szName: [0x10]u8, // 0x0
        m_nVersion: [0x4]u8, // 0x10
        m_nType: [0x4]u8, // 0x14
    };
    pub const CNmCachedTargetNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nInputValueNodeIdx: [0x4]u8, // 0x10
        m_mode: [0x4]u8, // 0x14
    };
    pub const CPerParticleFloatInput = extern struct {
        pad_0: [0x178]u8, // 0x0
    };
    pub const CNmConstBoolNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_bValue: [0x8]u8, // 0x10
    };
    pub const CNmBitFlags = extern struct {
        m_flags: [0x4]u8, // 0x0
    };
    pub const CFootStride = extern struct {
        m_definition: [0x40]u8, // 0x0
        m_trajectories: [0x18]u8, // 0x40
    };
    pub const CSceneObjectData__RTProxyDrawDescriptor_t = extern struct {
        m_materialGroupToken: [0x4]u8, // 0x0
        m_nSrcDrawIndex: [0x4]u8, // 0x4
        m_drawDesc: [0x120]u8, // 0x8
        m_mWorldFromLocal: [0x30]u8, // 0x128
        m_nVertexAlbedoFormat: [0x1]u8, // 0x158
        m_nVertexAlbedoVB: [0x1]u8, // 0x159
        m_nVertexAlbedoOffset: [0x2]u8, // 0x15A
        m_nVertexAlbedoStride: [0x2]u8, // 0x15C
        m_nVertexEmissiveFormat: [0x1]u8, // 0x15E
        m_nVertexEmissiveVB: [0x1]u8, // 0x15F
        m_nVertexEmissiveOffset: [0x2]u8, // 0x160
        m_nVertexEmissiveStride: [0x2]u8, // 0x162
        m_fEmissiveFactor: [0x4]u8, // 0x164
    };
    pub const CNmLegacyEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_animEventClassName: [0x8]u8, // 0x18
        m_KV: [0x30]u8, // 0x20
    };
    pub const CStateNodeStateData = extern struct {
        m_pChild: [0x18]u8, // 0x0
    };
    pub const CFootstepLandedAnimTag = extern struct {
        pad_0: [0x58]u8, // 0x0
        m_FootstepType: [0x8]u8, // 0x58
        m_OverrideSoundName: [0x8]u8, // 0x60
        m_DebugAnimSourceString: [0x8]u8, // 0x68
        m_BoneName: [0x8]u8, // 0x70
        m_footstepJumpPhase: [0x8]u8, // 0x78
    };
    pub const CEnumAnimParameter = extern struct {
        pad_0: [0x88]u8, // 0x0
        m_defaultValue: [0x8]u8, // 0x88
        m_enumOptions: [0x18]u8, // 0x90
        m_vecEnumReferenced: [0x30]u8, // 0xA8
    };
    pub const CHandshakeAnimTagBase = extern struct {
        pad_0: [0x50]u8, // 0x0
        m_bIsDisableTag: [0x8]u8, // 0x50
    };
    pub const AnimTagID = extern struct {
        m_id: [0x4]u8, // 0x0
    };
    pub const CWayPointHelperInstanceData = extern struct {
        m_vMovement: [0xC]u8, // 0x0
        m_vRotation: [0xC]u8, // 0xC
        m_vWaypointPosWS: [0xC]u8, // 0x18
        m_bStopUpdatingWaypointPos: [0x4]u8, // 0x24
    };
    pub const CAnimFrameSegment = extern struct {
        m_nUniqueFrameIndex: [0x4]u8, // 0x0
        m_nLocalElementMasks: [0x4]u8, // 0x4
        m_nLocalChannel: [0x8]u8, // 0x8
        m_container: [0x10]u8, // 0x10
    };
    pub const CSlopeComponentUpdater = extern struct {
        pad_0: [0x34]u8, // 0x0
        m_flTraceDistance: [0x4]u8, // 0x34
        m_hSlopeAngle: [0x2]u8, // 0x38
        m_hSlopeAngleFront: [0x2]u8, // 0x3A
        m_hSlopeAngleSide: [0x2]u8, // 0x3C
        m_hSlopeHeading: [0x2]u8, // 0x3E
        m_hSlopeNormal: [0x2]u8, // 0x40
        m_hSlopeNormal_WorldSpace: [0x6]u8, // 0x42
    };
    pub const CAnimInputDamping = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_speedFunction: [0x4]u8, // 0x8
        m_fSpeedScale: [0x4]u8, // 0xC
        m_fFallingSpeedScale: [0x8]u8, // 0x10
    };
    pub const CHitBoxSet = extern struct {
        m_name: [0x8]u8, // 0x0
        m_nNameHash: [0x8]u8, // 0x8
        m_HitBoxes: [0x18]u8, // 0x10
        m_SourceFilename: [0x8]u8, // 0x28
    };
    pub const ChainToSolveData_t = extern struct {
        m_nChainIndex: [0x4]u8, // 0x0
        m_SolverSettings: [0xC]u8, // 0x4
        m_TargetSettings: [0x28]u8, // 0x10
        m_DebugSetting: [0x4]u8, // 0x38
        m_flDebugNormalizedValue: [0x4]u8, // 0x3C
        m_vDebugOffset: [0x10]u8, // 0x40
    };
    pub const CConstraintSlave = extern struct {
        m_qBaseOrientation: [0x10]u8, // 0x0
        m_vBasePosition: [0xC]u8, // 0x10
        m_nBoneHash: [0x4]u8, // 0x1C
        m_flWeight: [0x8]u8, // 0x20
        m_sName: [0x28]u8, // 0x28
    };
    pub const PulseRuntimeOutputIndex_t = extern struct {
        m_Value: [0x4]u8, // 0x0
    };
    pub const CFootCycleDefinition = extern struct {
        m_vStancePositionMS: [0xC]u8, // 0x0
        m_vMidpointPositionMS: [0xC]u8, // 0xC
        m_flStanceDirectionMS: [0x4]u8, // 0x18
        m_vToStrideStartPos: [0xC]u8, // 0x1C
        m_stanceCycle: [0x4]u8, // 0x28
        m_footLiftCycle: [0x4]u8, // 0x2C
        m_footOffCycle: [0x4]u8, // 0x30
        m_footStrikeCycle: [0x4]u8, // 0x34
        m_footLandCycle: [0x4]u8, // 0x38
    };
    pub const CVirtualAnimParameter = extern struct {
        pad_0: [0x70]u8, // 0x0
        m_expressionString: [0x8]u8, // 0x70
        m_eParamType: [0x8]u8, // 0x78
    };
    pub const CMotionMetricEvaluator = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_means: [0x18]u8, // 0x18
        m_standardDeviations: [0x18]u8, // 0x30
        m_flWeight: [0x4]u8, // 0x48
        m_nDimensionStartIndex: [0x4]u8, // 0x4C
    };
    pub const CFutureVelocityMetricEvaluator = extern struct {
        pad_0: [0x50]u8, // 0x0
        m_flDistance: [0x4]u8, // 0x50
        m_flStoppingDistance: [0x4]u8, // 0x54
        m_flTargetSpeed: [0x4]u8, // 0x58
        m_eMode: [0x4]u8, // 0x5C
    };
    pub const CNmSkeleton__SecondarySkeleton_t = extern struct {
        m_attachToBoneID: [0x8]u8, // 0x0
        m_skeleton: [0x8]u8, // 0x8
    };
    pub const CAnimUpdateNodeBase = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_nodePath: [0x30]u8, // 0x18
        m_networkMode: [0x8]u8, // 0x48
        m_name: [0x8]u8, // 0x50
    };
    pub const CSetParameterActionUpdater = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_hParam: [0x2]u8, // 0x18
        m_value: [0x16]u8, // 0x1A
    };
    pub const CNmFixedWeightBoneMaskNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_flBoneWeight: [0x8]u8, // 0x10
    };
    pub const SkeletonAnimCapture_t__FrameStamp_t = extern struct {
        m_flTime: [0x4]u8, // 0x0
        m_flEntitySimTime: [0x4]u8, // 0x4
        m_bTeleportTick: [0x1]u8, // 0x8
        m_bPredicted: [0x3]u8, // 0x9
        m_flCurTime: [0x4]u8, // 0xC
        m_flRealTime: [0x4]u8, // 0x10
        m_nFrameCount: [0x4]u8, // 0x14
        m_nTickCount: [0x4]u8, // 0x18
    };
    pub const CPulse_DomainValue = extern struct {
        m_nType: [0x8]u8, // 0x0
        m_Value: [0x8]u8, // 0x8
        m_RequiredRuntimeType: [0x20]u8, // 0x10
    };
    pub const CBonePositionMetricEvaluator = extern struct {
        pad_0: [0x50]u8, // 0x0
        m_nBoneIndex: [0x8]u8, // 0x50
    };
    pub const CRenderBufferBinding = extern struct {
        m_hBuffer: [0x10]u8, // 0x0
        m_nBindOffsetBytes: [0x10]u8, // 0x10
    };
    pub const CParticleCollectionRendererFloatInput = extern struct {
        pad_0: [0x178]u8, // 0x0
    };
    pub const CNmParameterizedBlendNode__Parameterization_t = extern struct {
        m_blendRanges: [0x48]u8, // 0x0
        m_parameterRange: [0x8]u8, // 0x48
    };
    pub const CNmEntityAttributeIntEvent = extern struct {
        pad_0: [0x38]u8, // 0x0
        m_nIntValue: [0x8]u8, // 0x38
    };
    pub const CNmNotNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nInputValueNodeIdx: [0x8]u8, // 0x10
    };
    pub const CMeshletDescriptor = extern struct {
        m_PackedAABB: [0x8]u8, // 0x0
        m_CullingData: [0x4]u8, // 0x8
        m_nVertexOffset: [0x4]u8, // 0xC
        m_nTriangleOffset: [0x4]u8, // 0x10
        m_nVertexCount: [0x1]u8, // 0x14
        m_nTriangleCount: [0x1]u8, // 0x15
        m_nBoneIndex: [0x2]u8, // 0x16
    };
    pub const CMorphSetData = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nWidth: [0x4]u8, // 0x10
        m_nHeight: [0x4]u8, // 0x14
        m_bundleTypes: [0x18]u8, // 0x18
        m_morphDatas: [0x18]u8, // 0x30
        m_pTextureAtlas: [0x8]u8, // 0x48
        m_FlexDesc: [0x18]u8, // 0x50
        m_FlexControllers: [0x18]u8, // 0x68
        m_FlexRules: [0x18]u8, // 0x80
    };
    pub const CNmAndNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_conditionNodeIndices: [0x10]u8, // 0x10
    };
    pub const CMorphConstraint = extern struct {
        pad_0: [0x60]u8, // 0x0
        m_sTargetMorph: [0x8]u8, // 0x60
        m_nSlaveChannel: [0x4]u8, // 0x68
        m_flMin: [0x4]u8, // 0x6C
        m_flMax: [0x10]u8, // 0x70
    };
    pub const CClothSettingsAnimTag = extern struct {
        pad_0: [0x58]u8, // 0x0
        m_flStiffness: [0x4]u8, // 0x58
        m_flEaseIn: [0x4]u8, // 0x5C
        m_flEaseOut: [0x8]u8, // 0x60
        m_nVertexSet: [0x8]u8, // 0x68
    };
    pub const CAnimDesc_Flag = extern struct {
        m_bLooping: [0x1]u8, // 0x0
        m_bAllZeros: [0x1]u8, // 0x1
        m_bHidden: [0x1]u8, // 0x2
        m_bDelta: [0x1]u8, // 0x3
        m_bLegacyWorldspace: [0x1]u8, // 0x4
        m_bModelDoc: [0x1]u8, // 0x5
        m_bImplicitSeqIgnoreDelta: [0x1]u8, // 0x6
        m_bAnimGraphAdditive: [0x1]u8, // 0x7
    };
    pub const CNmBlend2DNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_sourceNodeIndices: [0x18]u8, // 0x10
        m_values: [0x58]u8, // 0x28
        m_indices: [0x28]u8, // 0x80
        m_hullIndices: [0x18]u8, // 0xA8
        m_nInputParameterNodeIdx0: [0x2]u8, // 0xC0
        m_nInputParameterNodeIdx1: [0x2]u8, // 0xC2
        m_bAllowLooping: [0x4]u8, // 0xC4
    };
    pub const CNmFloatChannelData__ChannelSettings_t = extern struct {
        m_range: [0x8]u8, // 0x0
        m_bIsStatic: [0x4]u8, // 0x8
    };
    pub const CBlendCurve = extern struct {
        m_flControlPoint1: [0x4]u8, // 0x0
        m_flControlPoint2: [0x4]u8, // 0x4
    };
    pub const CNmSkeleton__ContactConfig_t = extern struct {
        m_ID: [0x8]u8, // 0x0
        m_nBoneIdx: [0x4]u8, // 0x8
        m_vBoneLocalProbeDir: [0xC]u8, // 0xC
        m_flProbeMaxDist: [0x8]u8, // 0x18
        m_audioInfo: [0x18]u8, // 0x20
    };
    pub const CNmGraphNode__CDefinition = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_nNodeIdx: [0x8]u8, // 0x8
    };
    pub const CAnimationGraphVisualizerSphere = extern struct {
        pad_0: [0x40]u8, // 0x0
        m_vWsPosition: [0x10]u8, // 0x40
        m_flRadius: [0x4]u8, // 0x50
        m_Color: [0xC]u8, // 0x54
    };
    pub const CNmClip__ModelSpaceSamplingChainLink_t = extern struct {
        m_nBoneIdx: [0x4]u8, // 0x0
        m_nParentBoneIdx: [0x4]u8, // 0x4
        m_nParentChainLinkIdx: [0x4]u8, // 0x8
    };
    pub const CAnimUserDifference = extern struct {
        m_name: [0x10]u8, // 0x0
        m_nType: [0x8]u8, // 0x10
    };
    pub const CNmDurationScaleNode__CDefinition = extern struct {
        pad_0: [0x20]u8, // 0x0
    };
    pub const CTransitionUpdateData = extern struct {
        m_srcStateIndex: [0x1]u8, // 0x0
        m_destStateIndex: [0x2]u8, // 0x1
    };
    pub const PulseRuntimeBlackboardReferenceIndex_t = extern struct {
        m_Value: [0x2]u8, // 0x0
    };
    pub const CNmContactEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_configID: [0x8]u8, // 0x18
        m_probeBoneID: [0x8]u8, // 0x20
        m_vBoneLocalProbeDir: [0xC]u8, // 0x28
        m_flProbeMaxDist: [0x4]u8, // 0x34
        m_audioInfo: [0x18]u8, // 0x38
    };
    pub const CMovementHandshakeAnimTag = extern struct {
        pad_0: [0x58]u8, // 0x0
    };
    pub const CBoneConstraintPoseSpaceBone__Input_t = extern struct {
        m_inputValue: [0x10]u8, // 0x0
        m_outputTransformList: [0x18]u8, // 0x10
    };
    pub const CSeqMultiFetch = extern struct {
        m_flags: [0x8]u8, // 0x0
        m_localReferenceArray: [0x18]u8, // 0x8
        m_nGroupSize: [0x8]u8, // 0x20
        m_nLocalPose: [0x8]u8, // 0x28
        m_poseKeyArray0: [0x18]u8, // 0x30
        m_poseKeyArray1: [0x18]u8, // 0x48
        m_nLocalCyclePoseParameter: [0x4]u8, // 0x60
        m_bCalculatePoseParameters: [0x1]u8, // 0x64
        m_bFixedBlendWeight: [0x3]u8, // 0x65
        m_flFixedBlendWeightVals: [0x8]u8, // 0x68
    };
    pub const CPhysSurfacePropertiesSoundNames = extern struct {
        m_impactSoft: [0x8]u8, // 0x0
        m_impactHard: [0x8]u8, // 0x8
        m_scrapeSmooth: [0x8]u8, // 0x10
        m_scrapeRough: [0x8]u8, // 0x18
        m_bulletImpact: [0x8]u8, // 0x20
        m_rolling: [0x8]u8, // 0x28
        m_break: [0x8]u8, // 0x30
        m_strain: [0x8]u8, // 0x38
        m_meleeImpact: [0x8]u8, // 0x40
        m_pushOff: [0x8]u8, // 0x48
        m_skidStop: [0x8]u8, // 0x50
        m_resonant: [0x8]u8, // 0x58
    };
    pub const NmBoneMaskSetDefinition_t = extern struct {
        m_ID: [0x8]u8, // 0x0
        m_primaryWeightList: [0x110]u8, // 0x8
        m_secondaryWeightLists: [0x10]u8, // 0x118
    };
    pub const CAudioAnimTag = extern struct {
        pad_0: [0x58]u8, // 0x0
        m_clipName: [0x8]u8, // 0x58
        m_attachmentName: [0x8]u8, // 0x60
        m_flVolume: [0x4]u8, // 0x68
        m_bStopWhenTagEnds: [0x1]u8, // 0x6C
        m_bStopWhenGraphEnds: [0x1]u8, // 0x6D
        m_bPlayOnServer: [0x1]u8, // 0x6E
        m_bPlayOnClient: [0x1]u8, // 0x6F
    };
    pub const CTurnHelperUpdateNode = extern struct {
        pad_0: [0x74]u8, // 0x0
        m_facingTarget: [0x4]u8, // 0x74
        m_turnStartTimeOffset: [0x4]u8, // 0x78
        m_turnDuration: [0x4]u8, // 0x7C
        m_bMatchChildDuration: [0x4]u8, // 0x80
        m_manualTurnOffset: [0x4]u8, // 0x84
        m_bUseManualTurnOffset: [0x8]u8, // 0x88
    };
    pub const CAnimationGroup = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nFlags: [0x8]u8, // 0x10
        m_name: [0x48]u8, // 0x18
        m_localHAnimArray_Handle: [0x18]u8, // 0x60
        m_includedGroupArray_Handle: [0x18]u8, // 0x78
        m_directHSeqGroup_Handle: [0x8]u8, // 0x90
        m_decodeKey: [0x78]u8, // 0x98
        m_szScripts: [0x18]u8, // 0x110
        m_AdditionalExtRefs: [0x20]u8, // 0x128
    };
    pub const CPulse_TempVarInfo = extern struct {
        m_Name: [0x10]u8, // 0x0
        m_Type: [0x18]u8, // 0x10
        m_nEditorNodeID: [0x4]u8, // 0x28
        m_bIsObservable: [0x4]u8, // 0x2C
    };
    pub const NmContactAudioInfo_t = extern struct {
        m_audioActionID: [0x8]u8, // 0x0
        m_audioTypeID: [0x8]u8, // 0x8
        m_soundeventOverrideID: [0x8]u8, // 0x10
    };
    pub const NmSyncTrackTime_t = extern struct {
        m_nEventIdx: [0x4]u8, // 0x0
        m_percentageThrough: [0x4]u8, // 0x4
    };
    pub const CNmClip = extern struct {
        m_skeleton: [0x8]u8, // 0x0
        m_nNumFrames: [0x4]u8, // 0x8
        m_flDuration: [0x4]u8, // 0xC
        m_compressedPoseData: [0x10]u8, // 0x10
        m_trackCompressionSettings: [0x18]u8, // 0x20
        m_compressedPoseOffsets: [0x40]u8, // 0x38
        m_secondaryAnimations: [0x20]u8, // 0x78
        m_floatChannelData: [0x28]u8, // 0x98
        m_syncTrack: [0xB0]u8, // 0xC0
        m_rootMotion: [0x50]u8, // 0x170
        m_bIsAdditive: [0x8]u8, // 0x1C0
        m_modelSpaceSamplingChain: [0x18]u8, // 0x1C8
        m_modelSpaceBoneSamplingIndices: [0x20]u8, // 0x1E0
    };
    pub const CToggleComponentActionUpdater = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_componentID: [0x4]u8, // 0x18
        m_bSetEnabled: [0x4]u8, // 0x1C
    };
    pub const CNmOverlayBlendTask = extern struct {
        pad_0: [0x100]u8, // 0x0
    };
    pub const CNmSpeedScaleBaseNode__CDefinition = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_nInputValueNodeIdx: [0x4]u8, // 0x18
        m_flDefaultInputValue: [0x4]u8, // 0x1C
    };
    pub const CNmValueNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const CAnimationGraphVisualizerPrimitiveBase = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_Type: [0x4]u8, // 0x8
        m_OwningAnimNodePaths: [0x2C]u8, // 0xC
        m_nOwningAnimNodePathCount: [0x8]u8, // 0x38
    };
    pub const CBindPoseUpdateNode = extern struct {
        pad_0: [0x60]u8, // 0x0
    };
    pub const NmSyncTrackTimeRange_t = extern struct {
        m_startTime: [0x8]u8, // 0x0
        m_endTime: [0x8]u8, // 0x8
    };
    pub const CAnimationGraphVisualizerText = extern struct {
        pad_0: [0x40]u8, // 0x0
        m_vWsPosition: [0x10]u8, // 0x40
        m_Color: [0x8]u8, // 0x50
        m_Text: [0x8]u8, // 0x58
    };
    pub const CFootTrajectory = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_vOffset: [0xC]u8, // 0x8
        m_flRotationOffset: [0x4]u8, // 0x14
        m_flProgression: [0x8]u8, // 0x18
    };
    pub const CMotionMatchingUpdateNode = extern struct {
        pad_0: [0x58]u8, // 0x0
        m_dataSet: [0x20]u8, // 0x58
        m_metrics: [0x18]u8, // 0x78
        m_weights: [0x50]u8, // 0x90
        m_bSearchEveryTick: [0x4]u8, // 0xE0
        m_flSearchInterval: [0x4]u8, // 0xE4
        m_bSearchWhenClipEnds: [0x1]u8, // 0xE8
        m_bSearchWhenGoalChanges: [0x3]u8, // 0xE9
        m_blendCurve: [0x8]u8, // 0xEC
        m_flSampleRate: [0x4]u8, // 0xF4
        m_flBlendTime: [0x4]u8, // 0xF8
        m_bLockClipWhenWaning: [0x4]u8, // 0xFC
        m_flSelectionThreshold: [0x4]u8, // 0x100
        m_flReselectionTimeWindow: [0x4]u8, // 0x104
        m_bEnableRotationCorrection: [0x1]u8, // 0x108
        m_bGoalAssist: [0x3]u8, // 0x109
        m_flGoalAssistDistance: [0x4]u8, // 0x10C
        m_flGoalAssistTolerance: [0x8]u8, // 0x110
        m_distanceScale_Damping: [0x18]u8, // 0x118
        m_flDistanceScale_OuterRadius: [0x4]u8, // 0x130
        m_flDistanceScale_InnerRadius: [0x4]u8, // 0x134
        m_flDistanceScale_MaxScale: [0x4]u8, // 0x138
        m_flDistanceScale_MinScale: [0x4]u8, // 0x13C
        m_bEnableDistanceScaling: [0x8]u8, // 0x140
    };
    pub const CNmReferencePoseNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const CSeqS1SeqDesc = extern struct {
        m_sName: [0x10]u8, // 0x0
        m_flags: [0x10]u8, // 0x10
        m_fetch: [0x70]u8, // 0x20
        m_nLocalWeightlist: [0x8]u8, // 0x90
        m_autoLayerArray: [0x18]u8, // 0x98
        m_IKLockArray: [0x18]u8, // 0xB0
        m_transition: [0x8]u8, // 0xC8
        m_SequenceKeys: [0x10]u8, // 0xD0
        m_LegacyKeyValueText: [0x10]u8, // 0xE0
        m_activityArray: [0x18]u8, // 0xF0
        m_footMotion: [0x18]u8, // 0x108
    };
    pub const CFlexController = extern struct {
        m_szName: [0x8]u8, // 0x0
        m_szType: [0x8]u8, // 0x8
        min: [0x4]u8, // 0x10
        max: [0x4]u8, // 0x14
    };
    pub const SkeletonDemoDb_t = extern struct {
        m_AnimCaptures: [0x18]u8, // 0x0
        m_CameraTrack: [0x18]u8, // 0x18
        m_flRecordingTime: [0x8]u8, // 0x30
    };
    pub const CNmFloatRangeComparisonNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_range: [0x8]u8, // 0x10
        m_nInputValueNodeIdx: [0x2]u8, // 0x18
        m_bIsInclusiveCheck: [0x6]u8, // 0x1A
    };
    pub const CMotionNodeSequence = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_tags: [0x18]u8, // 0x28
        m_hSequence: [0x4]u8, // 0x40
        m_flPlaybackSpeed: [0x4]u8, // 0x44
    };
    pub const CNmTwoBoneIKNode__CDefinition = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_effectorBoneID: [0x8]u8, // 0x18
        m_nEffectorTargetNodeIdx: [0x2]u8, // 0x20
        m_nEnabledNodeIdx: [0x2]u8, // 0x22
        m_flBlendTimeSeconds: [0x4]u8, // 0x24
        m_blendMode: [0x1]u8, // 0x28
        m_bIsTargetInWorldSpace: [0x3]u8, // 0x29
        m_flChainRotationWeight: [0x4]u8, // 0x2C
    };
    pub const CNmGraphInstance = extern struct {
        pad_0: [0x3B0]u8, // 0x0
    };
    pub const CFlexDesc = extern struct {
        m_szFacs: [0x8]u8, // 0x0
    };
    pub const CRenderMesh = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_sceneObjects: [0xC0]u8, // 0x10
        m_constraints: [0x10]u8, // 0xD0
        m_skeleton: [0x118]u8, // 0xE0
        m_bUseUV2ForCharting: [0x1]u8, // 0x1F8
        m_bEmbeddedMapMesh: [0x27]u8, // 0x1F9
        m_meshDeformParams: [0x10]u8, // 0x220
        m_pGroomData: [0x8]u8, // 0x230
    };
    pub const CAnimSkeleton = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_localSpaceTransforms: [0x18]u8, // 0x10
        m_modelSpaceTransforms: [0x18]u8, // 0x28
        m_boneNames: [0x18]u8, // 0x40
        m_children: [0x18]u8, // 0x58
        m_parents: [0x18]u8, // 0x70
        m_feet: [0x18]u8, // 0x88
        m_morphNames: [0x18]u8, // 0xA0
        m_lodBoneCounts: [0x18]u8, // 0xB8
    };
    pub const PulseRuntimeConstantIndex_t = extern struct {
        m_Value: [0x2]u8, // 0x0
    };
    pub const CFootAdjustmentInstanceData = extern struct {
        pad_0: [0xC]u8, // 0x0
        m_flStartTime: [0xC]u8, // 0xC
        m_flDuration: [0x24]u8, // 0x18
        m_flStartHeadingWS: [0xC]u8, // 0x3C
    };
    pub const CNmBodyGroupNode__CDefinition = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_nEnabledNodeIdx: [0x8]u8, // 0x18
        m_event: [0x30]u8, // 0x20
    };
    pub const CNmTimeControlledClipNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nPlayInReverseValueNodeIdx: [0x2]u8, // 0x10
        m_bSampleRootMotion: [0x2]u8, // 0x12
        m_nDataSlotIdx: [0x2]u8, // 0x14
        m_nTimeValueNodeIdx: [0x2]u8, // 0x16
        m_graphEvents: [0x28]u8, // 0x18
    };
    pub const VPhysics2ShapeDef_t = extern struct {
        m_spheres: [0x10]u8, // 0x0
        m_capsules: [0x10]u8, // 0x10
        m_hulls: [0x10]u8, // 0x20
        m_meshes: [0x10]u8, // 0x30
        m_compounds: [0x10]u8, // 0x40
        m_CollisionAttributeIndices: [0x18]u8, // 0x50
    };
    pub const CNmFloatCurveNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nInputValueNodeIdx: [0x8]u8, // 0x10
        m_curve: [0x40]u8, // 0x18
    };
    pub const CAnimationGraphVisualizerAxis = extern struct {
        pad_0: [0x40]u8, // 0x0
        m_xWsTransform: [0x20]u8, // 0x40
        m_flAxisSize: [0x10]u8, // 0x60
    };
    pub const CTwistConstraint = extern struct {
        pad_0: [0x60]u8, // 0x0
        m_bInverse: [0x10]u8, // 0x60
        m_qParentBindRotation: [0x10]u8, // 0x70
        m_qChildBindRotation: [0x10]u8, // 0x80
    };
    pub const PulseDocNodeID_t = extern struct {
        m_Value: [0x4]u8, // 0x0
    };
    pub const ModelBoneFlexDriverControl_t = extern struct {
        m_nBoneComponent: [0x8]u8, // 0x0
        m_flexController: [0x8]u8, // 0x8
        m_flexControllerToken: [0x4]u8, // 0x10
        m_flMin: [0x4]u8, // 0x14
        m_flMax: [0x8]u8, // 0x18
    };
    pub const CParticleCollectionFloatInput = extern struct {
        pad_0: [0x178]u8, // 0x0
    };
    pub const CSeqCmdLayer = extern struct {
        m_cmd: [0x2]u8, // 0x0
        m_nLocalReference: [0x2]u8, // 0x2
        m_nLocalBonemask: [0x2]u8, // 0x4
        m_nDstResult: [0x2]u8, // 0x6
        m_nSrcResult: [0x2]u8, // 0x8
        m_bSpline: [0x2]u8, // 0xA
        m_flVar1: [0x4]u8, // 0xC
        m_flVar2: [0x4]u8, // 0x10
        m_nLineNumber: [0x4]u8, // 0x14
    };
    pub const FootPinningPoseOpFixedData_t = extern struct {
        m_footInfo: [0x18]u8, // 0x0
        m_flBlendTime: [0x4]u8, // 0x18
        m_flLockBreakDistance: [0x4]u8, // 0x1C
        m_flMaxLegTwist: [0x4]u8, // 0x20
        m_nHipBoneIndex: [0x4]u8, // 0x24
        m_bApplyLegTwistLimits: [0x1]u8, // 0x28
        m_bApplyFootRotationLimits: [0x7]u8, // 0x29
    };
    pub const RenderSkeletonBone_t = extern struct {
        m_boneName: [0x8]u8, // 0x0
        m_parentName: [0x8]u8, // 0x8
        m_invBindPose: [0x30]u8, // 0x10
        m_bbox: [0x18]u8, // 0x40
        m_flSphereRadius: [0x8]u8, // 0x58
    };
    pub const CDistanceRemainingMetricEvaluator = extern struct {
        pad_0: [0x50]u8, // 0x0
        m_flMaxDistance: [0x4]u8, // 0x50
        m_flMinDistance: [0x4]u8, // 0x54
        m_flStartGoalFilterDistance: [0x4]u8, // 0x58
        m_flMaxGoalOvershootScale: [0x4]u8, // 0x5C
        m_bFilterFixedMinDistance: [0x1]u8, // 0x60
        m_bFilterGoalDistance: [0x1]u8, // 0x61
        m_bFilterGoalOvershoot: [0x6]u8, // 0x62
    };
    pub const CDirectPlaybackUpdateNode = extern struct {
        pad_0: [0x74]u8, // 0x0
        m_bFinishEarly: [0x1]u8, // 0x74
        m_bResetOnFinish: [0x3]u8, // 0x75
        m_allTags: [0x18]u8, // 0x78
    };
    pub const CNmIDEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_ID: [0x8]u8, // 0x18
        m_secondaryID: [0x8]u8, // 0x20
    };
    pub const CFlexRule = extern struct {
        m_nFlex: [0x8]u8, // 0x0
        m_FlexOps: [0x18]u8, // 0x8
    };
    pub const ScriptInfo_t = extern struct {
        m_code: [0x8]u8, // 0x0
        m_paramsModified: [0x18]u8, // 0x8
        m_proxyReadParams: [0x18]u8, // 0x20
        m_proxyWriteParams: [0x18]u8, // 0x38
        m_eScriptType: [0x8]u8, // 0x50
    };
    pub const CBoneConstraintRbf = extern struct {
        pad_0: [0x20]u8, // 0x0
        m_inputBones: [0x18]u8, // 0x20
        m_outputBones: [0x90]u8, // 0x38
    };
    pub const CNetworkedCycle = extern struct {
        m_flCycleUnclamped: [0x4]u8, // 0x0
        m_flPrevCycleUnclamped: [0xC]u8, // 0x4
        m_flCyclesPerSecond: [0xC]u8, // 0x10
        m_flCycleZeroTime: [0xC]u8, // 0x1C
        m_resetCount: [0xC]u8, // 0x28
    };
    pub const CNmSoundEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_relevance: [0x8]u8, // 0x18
        m_name: [0x8]u8, // 0x20
        m_position: [0x8]u8, // 0x28
        m_attachmentName: [0x8]u8, // 0x30
        m_tags: [0x8]u8, // 0x38
        m_bContinuePlayingSoundAtDurationEnd: [0x4]u8, // 0x40
        m_flDurationInterruptionThreshold: [0x4]u8, // 0x44
    };
    pub const CRenderGroom = extern struct {
        m_hairs: [0x18]u8, // 0x0
        m_hairPositionOffsets: [0x28]u8, // 0x18
        m_hSimParamsMat: [0x8]u8, // 0x40
        m_strandSegmentCountHist: [0x30]u8, // 0x48
        m_nMaxSegmentsPerHairStrand: [0x4]u8, // 0x78
        m_nGuideHairCount: [0x4]u8, // 0x7C
        m_nHairCount: [0x4]u8, // 0x80
        m_nTotalVertexCount: [0x4]u8, // 0x84
        m_nTotalSegmentCount: [0x4]u8, // 0x88
        m_nGroomGroupID: [0x4]u8, // 0x8C
        m_nAttachBoneIdx: [0x4]u8, // 0x90
        m_nAttachMeshIdx: [0x4]u8, // 0x94
        m_nAttachMeshDrawCallIdx: [0x14]u8, // 0x98
        m_bEnableSimulation: [0x4]u8, // 0xAC
    };
    pub const CNmParameterizedClipSelectorNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_optionNodeIndices: [0x18]u8, // 0x10
        m_optionWeights: [0x10]u8, // 0x28
        m_parameterNodeIdx: [0x2]u8, // 0x38
        m_bIgnoreInvalidOptions: [0x1]u8, // 0x3A
        m_bHasWeightsSet: [0x5]u8, // 0x3B
    };
    pub const CTiltTwistConstraint = extern struct {
        pad_0: [0x60]u8, // 0x0
        m_nTargetAxis: [0x4]u8, // 0x60
        m_nSlaveAxis: [0x2C]u8, // 0x64
    };
    pub const CNmSpeedScaleNode__CDefinition = extern struct {
        pad_0: [0x20]u8, // 0x0
    };
    pub const CVPhysXSurfacePropertiesList = extern struct {
        m_surfacePropertiesList: [0x18]u8, // 0x0
    };
    pub const CNmFloatSpringNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_flStartValue: [0x4]u8, // 0x10
        m_flHertz: [0x4]u8, // 0x14
        m_flDampingRatio: [0x4]u8, // 0x18
        m_nInputValueNodeIdx: [0x2]u8, // 0x1C
        m_bUseStartValue: [0x2]u8, // 0x1E
    };
    pub const RenderHairStrandInfo_t = extern struct {
        m_nGuideHairIndices_nSurfaceTriIndex: [0x8]u8, // 0x0
        m_vGuideBary_vBaseBary: [0x8]u8, // 0x8
        m_vRootOffset_flLengthScale: [0x8]u8, // 0x10
        m_nPackedBaseUv: [0x4]u8, // 0x18
        m_nPackedSurfaceNormalOs: [0x4]u8, // 0x1C
        m_nPackedSurfaceTangentOs: [0x4]u8, // 0x20
        m_nDataOffset_Segments: [0x4]u8, // 0x24
    };
    pub const CCycleControlClipUpdateNode = extern struct {
        pad_0: [0x60]u8, // 0x0
        m_tags: [0x1C]u8, // 0x60
        m_hSequence: [0x4]u8, // 0x7C
        m_duration: [0x4]u8, // 0x80
        m_valueSource: [0x4]u8, // 0x84
        m_paramIndex: [0x2]u8, // 0x88
        m_bLockWhenWaning: [0x6]u8, // 0x8A
    };
    pub const CNmTargetPointNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nInputValueNodeIdx: [0x2]u8, // 0x10
        m_bIsWorldSpaceTarget: [0x6]u8, // 0x12
    };
    pub const CNmTargetSelectorNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_optionNodeIndices: [0x18]u8, // 0x10
        m_flOrientationScoreWeight: [0x4]u8, // 0x28
        m_flPositionScoreWeight: [0x4]u8, // 0x2C
        m_parameterNodeIdx: [0x2]u8, // 0x30
        m_bIgnoreInvalidOptions: [0x1]u8, // 0x32
        m_bIsWorldSpaceTarget: [0x5]u8, // 0x33
        m_alignmentBoneID: [0x8]u8, // 0x38
    };
    pub const CPulse_RegisterInfo = extern struct {
        m_nReg: [0x8]u8, // 0x0
        m_Type: [0x18]u8, // 0x8
        m_OriginName: [0x38]u8, // 0x20
        m_nWrittenByInstruction: [0x4]u8, // 0x58
        m_nLastReadByInstruction: [0x4]u8, // 0x5C
    };
    pub const CNmFloatValueNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const CWarpSectionAnimTagBase = extern struct {
        pad_0: [0x50]u8, // 0x0
    };
    pub const CNmGraphVariationUserData = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const CStaticPoseCache = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_poses: [0x18]u8, // 0x10
        m_nBoneCount: [0x4]u8, // 0x28
        m_nMorphCount: [0x4]u8, // 0x2C
    };
    pub const LookAtOpFixedSettings_t = extern struct {
        m_attachment: [0x80]u8, // 0x0
        m_damping: [0x18]u8, // 0x80
        m_bones: [0x18]u8, // 0x98
        m_flYawLimit: [0x4]u8, // 0xB0
        m_flPitchLimit: [0x4]u8, // 0xB4
        m_flHysteresisInnerAngle: [0x4]u8, // 0xB8
        m_flHysteresisOuterAngle: [0x4]u8, // 0xBC
        m_bRotateYawForward: [0x1]u8, // 0xC0
        m_bMaintainUpDirection: [0x1]u8, // 0xC1
        m_bTargetIsPosition: [0x1]u8, // 0xC2
        m_bUseHysteresis: [0xD]u8, // 0xC3
    };
    pub const CRootMotion = extern struct {
        m_deltaTransform: [0x10]u8, // 0x0
        m_vVelocityMS: [0xC]u8, // 0x10
        m_vUpOverride: [0xC]u8, // 0x1C
    };
    pub const CAnimGraphSettingsManager = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_settingsGroups: [0x18]u8, // 0x18
    };
    pub const CAnimGraphModelBinding = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_modelName: [0x8]u8, // 0x8
        m_pSharedData: [0x18]u8, // 0x10
    };
    pub const CBoneConstraintPoseSpaceBone = extern struct {
        pad_0: [0x60]u8, // 0x0
        m_inputList: [0x28]u8, // 0x60
    };
    pub const CNmTwoBoneIKTask = extern struct {
        pad_0: [0x70]u8, // 0x0
        m_nEffectorBoneIdx: [0x4]u8, // 0x70
        m_nEffectorTargetBoneIdx: [0xC]u8, // 0x74
        m_targetTransform: [0x70]u8, // 0x80
    };
    pub const MotionBlendItem = extern struct {
        m_pChild: [0x8]u8, // 0x0
        m_flKeyValue: [0x8]u8, // 0x8
    };
    pub const CBoneConstraintPoseSpaceMorph = extern struct {
        pad_0: [0x20]u8, // 0x0
        m_sBoneName: [0x8]u8, // 0x20
        m_sAttachmentName: [0x8]u8, // 0x28
        m_outputMorph: [0x18]u8, // 0x30
        m_inputList: [0x18]u8, // 0x48
        m_bClamp: [0x40]u8, // 0x60
    };
    pub const CFloatAnimParameter = extern struct {
        pad_0: [0x80]u8, // 0x0
        m_fDefaultValue: [0x4]u8, // 0x80
        m_fMinValue: [0x4]u8, // 0x84
        m_fMaxValue: [0x4]u8, // 0x88
        m_bInterpolate: [0x4]u8, // 0x8C
    };
    pub const CNmContactAudioActionVData = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const CStateActionUpdater = extern struct {
        m_pAction: [0x8]u8, // 0x0
        m_eBehavior: [0x8]u8, // 0x8
    };
    pub const CPlayerInputAnimMotorUpdater = extern struct {
        pad_0: [0x20]u8, // 0x0
        m_sampleTimes: [0x1C]u8, // 0x20
        m_flSpringConstant: [0x4]u8, // 0x3C
        m_flAnticipationDistance: [0x4]u8, // 0x40
        m_hAnticipationPosParam: [0x2]u8, // 0x44
        m_hAnticipationHeadingParam: [0x2]u8, // 0x46
        m_bUseAcceleration: [0x8]u8, // 0x48
    };
    pub const CRenderSkeleton = extern struct {
        m_bones: [0x30]u8, // 0x0
        m_boneParents: [0x18]u8, // 0x30
        m_nBoneWeightCount: [0x8]u8, // 0x48
    };
    pub const CSeqIKLock = extern struct {
        m_flPosWeight: [0x4]u8, // 0x0
        m_flAngleWeight: [0x4]u8, // 0x4
        m_nLocalBone: [0x2]u8, // 0x8
        m_bBonesOrientedAlongPositiveX: [0x2]u8, // 0xA
    };
    pub const CAnimParamHandleMap = extern struct {
        m_list: [0x20]u8, // 0x0
    };
    pub const CNmFloatClampNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nInputValueNodeIdx: [0x4]u8, // 0x10
        m_clampRange: [0xC]u8, // 0x14
    };
    pub const PulseRuntimeCellIndex_t = extern struct {
        m_Value: [0x4]u8, // 0x0
    };
    pub const CNmExternalPoseNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_bShouldSampleRootMotion: [0x8]u8, // 0x10
    };
    pub const CAnimDesc = extern struct {
        m_name: [0x10]u8, // 0x0
        m_flags: [0x8]u8, // 0x10
        fps: [0x8]u8, // 0x18
        m_Data: [0xD8]u8, // 0x20
        m_movementArray: [0x18]u8, // 0xF8
        m_xInitialOffset: [0x20]u8, // 0x110
        m_eventArray: [0x18]u8, // 0x130
        m_activityArray: [0x18]u8, // 0x148
        m_hierarchyArray: [0x18]u8, // 0x160
        framestalltime: [0x4]u8, // 0x178
        m_vecRootMin: [0xC]u8, // 0x17C
        m_vecRootMax: [0x10]u8, // 0x188
        m_vecBoneWorldMin: [0x18]u8, // 0x198
        m_vecBoneWorldMax: [0x18]u8, // 0x1B0
        m_sequenceParams: [0x8]u8, // 0x1C8
    };
    pub const CNmRootMotionOverrideNode__CDefinition = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_desiredMovingVelocityNodeIdx: [0x2]u8, // 0x18
        m_desiredFacingDirectionNodeIdx: [0x2]u8, // 0x1A
        m_linearVelocityLimitNodeIdx: [0x2]u8, // 0x1C
        m_angularVelocityLimitNodeIdx: [0x2]u8, // 0x1E
        m_enabledNodeIdx: [0x4]u8, // 0x20
        m_maxLinearVelocity: [0x4]u8, // 0x24
        m_maxAngularVelocityRadians: [0x4]u8, // 0x28
        m_overrideFlags: [0x4]u8, // 0x2C
    };
    pub const CNmTargetWarpNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nClipReferenceNodeIdx: [0x2]u8, // 0x10
        m_nTargetValueNodeIdx: [0x2]u8, // 0x12
        m_samplingMode: [0x1]u8, // 0x14
        m_targetUpdateRule: [0x1]u8, // 0x15
        m_bAlignWithTargetAtLastWarpEvent: [0x2]u8, // 0x16
        m_flSamplingPositionErrorThresholdSq: [0x4]u8, // 0x18
        m_flMaxTangentLength: [0x4]u8, // 0x1C
        m_flLerpFallbackDistanceThreshold: [0x4]u8, // 0x20
        m_flTargetUpdateDistanceThreshold: [0x4]u8, // 0x24
        m_flTargetUpdateAngleThresholdRadians: [0x8]u8, // 0x28
        m_alignmentBoneID: [0x8]u8, // 0x30
    };
    pub const CPhysSurfacePropertiesPhysics = extern struct {
        m_friction: [0x4]u8, // 0x0
        m_elasticity: [0x4]u8, // 0x4
        m_density: [0x4]u8, // 0x8
        m_thickness: [0x4]u8, // 0xC
        m_softContactFrequency: [0x4]u8, // 0x10
        m_softContactDampingRatio: [0x4]u8, // 0x14
    };
    pub const CAnimationGraphVisualizerPie = extern struct {
        pad_0: [0x40]u8, // 0x0
        m_vWsCenter: [0x10]u8, // 0x40
        m_vWsStart: [0x10]u8, // 0x50
        m_vWsEnd: [0x10]u8, // 0x60
        m_Color: [0x10]u8, // 0x70
    };
    pub const NmFloatCurveCompressionSettings_t = extern struct {
        m_range: [0x8]u8, // 0x0
        m_bIsStatic: [0x4]u8, // 0x8
    };
    pub const CBoneConstraintDotToMorph = extern struct {
        pad_0: [0x20]u8, // 0x0
        m_sBoneName: [0x8]u8, // 0x20
        m_sTargetBoneName: [0x8]u8, // 0x28
        m_sMorphChannelName: [0x8]u8, // 0x30
        m_flRemap: [0x20]u8, // 0x38
    };
    pub const CPointConstraint = extern struct {
        pad_0: [0x60]u8, // 0x0
    };
    pub const CCurrentRotationVelocityMetricEvaluator = extern struct {
        pad_0: [0x50]u8, // 0x0
    };
    pub const TraceSettings_t = extern struct {
        m_flTraceHeight: [0x4]u8, // 0x0
        m_flTraceRadius: [0x4]u8, // 0x4
    };
    pub const ParamSpanSample_t = extern struct {
        m_value: [0x14]u8, // 0x0
        m_flCycle: [0x4]u8, // 0x14
    };
    pub const CNmFollowBoneTask = extern struct {
        pad_0: [0x90]u8, // 0x0
    };
    pub const VPhysXConstraintParams_t = extern struct {
        m_nType: [0x1]u8, // 0x0
        m_nTranslateMotion: [0x1]u8, // 0x1
        m_nRotateMotion: [0x1]u8, // 0x2
        m_nFlags: [0x1]u8, // 0x3
        m_anchor: [0x18]u8, // 0x4
        m_axes: [0x20]u8, // 0x1C
        m_maxForce: [0x4]u8, // 0x3C
        m_maxTorque: [0x4]u8, // 0x40
        m_linearLimitValue: [0x4]u8, // 0x44
        m_linearLimitRestitution: [0x4]u8, // 0x48
        m_linearLimitSpring: [0x4]u8, // 0x4C
        m_linearLimitDamping: [0x4]u8, // 0x50
        m_twistLowLimitValue: [0x4]u8, // 0x54
        m_twistLowLimitRestitution: [0x4]u8, // 0x58
        m_twistLowLimitSpring: [0x4]u8, // 0x5C
        m_twistLowLimitDamping: [0x4]u8, // 0x60
        m_twistHighLimitValue: [0x4]u8, // 0x64
        m_twistHighLimitRestitution: [0x4]u8, // 0x68
        m_twistHighLimitSpring: [0x4]u8, // 0x6C
        m_twistHighLimitDamping: [0x4]u8, // 0x70
        m_swing1LimitValue: [0x4]u8, // 0x74
        m_swing1LimitRestitution: [0x4]u8, // 0x78
        m_swing1LimitSpring: [0x4]u8, // 0x7C
        m_swing1LimitDamping: [0x4]u8, // 0x80
        m_swing2LimitValue: [0x4]u8, // 0x84
        m_swing2LimitRestitution: [0x4]u8, // 0x88
        m_swing2LimitSpring: [0x4]u8, // 0x8C
        m_swing2LimitDamping: [0x4]u8, // 0x90
        m_goalPosition: [0xC]u8, // 0x94
        m_goalOrientation: [0x10]u8, // 0xA0
        m_goalAngularVelocity: [0xC]u8, // 0xB0
        m_driveSpringX: [0x4]u8, // 0xBC
        m_driveSpringY: [0x4]u8, // 0xC0
        m_driveSpringZ: [0x4]u8, // 0xC4
        m_driveDampingX: [0x4]u8, // 0xC8
        m_driveDampingY: [0x4]u8, // 0xCC
        m_driveDampingZ: [0x4]u8, // 0xD0
        m_driveSpringTwist: [0x4]u8, // 0xD4
        m_driveSpringSwing: [0x4]u8, // 0xD8
        m_driveSpringSlerp: [0x4]u8, // 0xDC
        m_driveDampingTwist: [0x4]u8, // 0xE0
        m_driveDampingSwing: [0x4]u8, // 0xE4
        m_driveDampingSlerp: [0x4]u8, // 0xE8
        m_solverIterationCount: [0x4]u8, // 0xEC
        m_projectionLinearTolerance: [0x4]u8, // 0xF0
        m_projectionAngularTolerance: [0x4]u8, // 0xF4
    };
    pub const CNmFloatComparisonNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nInputValueNodeIdx: [0x2]u8, // 0x10
        m_nComparandValueNodeIdx: [0x2]u8, // 0x12
        m_comparison: [0x4]u8, // 0x14
        m_flEpsilon: [0x4]u8, // 0x18
        m_flComparisonValue: [0x4]u8, // 0x1C
    };
    pub const CStateUpdateData = extern struct {
        m_name: [0x8]u8, // 0x0
        m_hScript: [0x8]u8, // 0x8
        m_transitionIndices: [0x18]u8, // 0x10
        m_actions: [0x18]u8, // 0x28
        m_stateID: [0x8]u8, // 0x40
    };
    pub const CTurnHelperInstanceData = extern struct {
        m_turnAmount: [0x4]u8, // 0x0
        m_turnStartTime: [0x4]u8, // 0x4
        m_duration: [0x4]u8, // 0x8
    };
    pub const CNmTargetValueNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const COrientConstraint = extern struct {
        pad_0: [0x60]u8, // 0x0
    };
    pub const CCycleClipInstanceData = extern struct {
        m_flCycle: [0xC]u8, // 0x0
        m_flPrevCycle: [0x10]u8, // 0xC
    };
    pub const PulseRuntimeTempVarBankIndex_t = extern struct {
        m_Value: [0x2]u8, // 0x0
    };
    pub const CMoverUpdateNode = extern struct {
        pad_0: [0x78]u8, // 0x0
        m_damping: [0x18]u8, // 0x78
        m_facingTarget: [0x4]u8, // 0x90
        m_hMoveVecParam: [0x2]u8, // 0x94
        m_hMoveHeadingParam: [0x2]u8, // 0x96
        m_hTurnToFaceParam: [0x4]u8, // 0x98
        m_flTurnToFaceOffset: [0x4]u8, // 0x9C
        m_flTurnToFaceLimit: [0x4]u8, // 0xA0
        m_bAdditive: [0x1]u8, // 0xA4
        m_bApplyMovement: [0x1]u8, // 0xA5
        m_bOrientMovement: [0x1]u8, // 0xA6
        m_bApplyRotation: [0x1]u8, // 0xA7
        m_bLimitOnly: [0x8]u8, // 0xA8
    };
    pub const CNmLayerBlendNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nBaseNodeIdx: [0x2]u8, // 0x10
        m_bOnlySampleBaseRootMotion: [0x6]u8, // 0x12
        m_layerDefinition: [0x30]u8, // 0x18
    };
    pub const CNmFootIKNode__CDefinition = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_leftEffectorBoneID: [0x8]u8, // 0x18
        m_rightEffectorBoneID: [0x8]u8, // 0x20
        m_nLeftTargetNodeIdx: [0x2]u8, // 0x28
        m_nRightTargetNodeIdx: [0x2]u8, // 0x2A
        m_nEnabledNodeIdx: [0x4]u8, // 0x2C
        m_flBlendTimeSeconds: [0x4]u8, // 0x30
        m_blendMode: [0x1]u8, // 0x34
        m_bIsTargetInWorldSpace: [0x3]u8, // 0x35
    };
    pub const CAnimMotorUpdaterBase = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_name: [0x8]u8, // 0x10
        m_bDefault: [0x8]u8, // 0x18
    };
    pub const JiggleBoneSettingsList_t = extern struct {
        m_boneSettings: [0x18]u8, // 0x0
    };
    pub const CSubtractUpdateNode = extern struct {
        pad_0: [0x94]u8, // 0x0
        m_footMotionTiming: [0x4]u8, // 0x94
        m_bApplyToFootMotion: [0x1]u8, // 0x98
        m_bApplyChannelsSeparately: [0x1]u8, // 0x99
        m_bUseModelSpace: [0x6]u8, // 0x9A
    };
    pub const PulseGraphInstanceID_t = extern struct {
        m_Value: [0x4]u8, // 0x0
    };
    pub const CNmFloatRemapNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nInputValueNodeIdx: [0x4]u8, // 0x10
        m_inputRange: [0x8]u8, // 0x14
        m_outputRange: [0xC]u8, // 0x1C
    };
    pub const CPoseHandle = extern struct {
        m_nIndex: [0x2]u8, // 0x0
        m_eType: [0x2]u8, // 0x2
    };
    pub const CNmFootstepEventIDNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nSourceStateNodeIdx: [0x4]u8, // 0x10
        m_eventConditionRules: [0x4]u8, // 0x14
    };
    pub const CSolveIKChainUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        m_targetHandles: [0x18]u8, // 0x70
        m_opFixedData: [0x20]u8, // 0x88
    };
    pub const CNmOrNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_conditionNodeIndices: [0x10]u8, // 0x10
    };
    pub const CSeqCmdSeqDesc = extern struct {
        m_sName: [0x10]u8, // 0x0
        m_flags: [0xC]u8, // 0x10
        m_transition: [0x8]u8, // 0x1C
        m_nFrameRangeSequence: [0x2]u8, // 0x24
        m_nFrameCount: [0x2]u8, // 0x26
        m_flFPS: [0x4]u8, // 0x28
        m_nSubCycles: [0x2]u8, // 0x2C
        m_numLocalResults: [0x2]u8, // 0x2E
        m_cmdLayerArray: [0x18]u8, // 0x30
        m_eventArray: [0x18]u8, // 0x48
        m_activityArray: [0x18]u8, // 0x60
        m_poseSettingArray: [0x18]u8, // 0x78
    };
    pub const CBoneMaskUpdateNode = extern struct {
        pad_0: [0x94]u8, // 0x0
        m_nWeightListIndex: [0x4]u8, // 0x94
        m_flRootMotionBlend: [0x4]u8, // 0x98
        m_blendSpace: [0x4]u8, // 0x9C
        m_footMotionTiming: [0x4]u8, // 0xA0
        m_bUseBlendScale: [0x4]u8, // 0xA4
        m_blendValueSource: [0x4]u8, // 0xA8
        m_hBlendParameter: [0x4]u8, // 0xAC
    };
    pub const CLeafUpdateNode = extern struct {
        pad_0: [0x58]u8, // 0x0
    };
    pub const CPulse_Constant = extern struct {
        m_Type: [0x18]u8, // 0x0
        m_Value: [0x18]u8, // 0x18
    };
    pub const CParticleFloatInput = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nType: [0x4]u8, // 0x10
        m_nMapType: [0x4]u8, // 0x14
        m_flLiteralValue: [0x8]u8, // 0x18
        m_NamedValue: [0x40]u8, // 0x20
        m_nControlPoint: [0x4]u8, // 0x60
        m_nScalarAttribute: [0x4]u8, // 0x64
        m_nVectorAttribute: [0x4]u8, // 0x68
        m_nVectorComponent: [0x4]u8, // 0x6C
        m_bReverseOrder: [0x4]u8, // 0x70
        m_flRandomMin: [0x4]u8, // 0x74
        m_flRandomMax: [0x4]u8, // 0x78
        m_bHasRandomSignFlip: [0x4]u8, // 0x7C
        m_nRandomSeed: [0x4]u8, // 0x80
        m_nRandomMode: [0xC]u8, // 0x84
        m_strSnapshotSubset: [0x8]u8, // 0x90
        m_flLOD0: [0x4]u8, // 0x98
        m_flLOD1: [0x4]u8, // 0x9C
        m_flLOD2: [0x4]u8, // 0xA0
        m_flLOD3: [0x4]u8, // 0xA4
        m_nNoiseInputVectorAttribute: [0x4]u8, // 0xA8
        m_flNoiseOutputMin: [0x4]u8, // 0xAC
        m_flNoiseOutputMax: [0x4]u8, // 0xB0
        m_flNoiseScale: [0x4]u8, // 0xB4
        m_vecNoiseOffsetRate: [0xC]u8, // 0xB8
        m_flNoiseOffset: [0x4]u8, // 0xC4
        m_nNoiseOctaves: [0x4]u8, // 0xC8
        m_nNoiseTurbulence: [0x4]u8, // 0xCC
        m_nNoiseType: [0x4]u8, // 0xD0
        m_nNoiseModifier: [0x4]u8, // 0xD4
        m_flNoiseTurbulenceScale: [0x4]u8, // 0xD8
        m_flNoiseTurbulenceMix: [0x4]u8, // 0xDC
        m_flNoiseImgPreviewScale: [0x4]u8, // 0xE0
        m_bNoiseImgPreviewLive: [0xC]u8, // 0xE4
        m_flNoCameraFallback: [0x4]u8, // 0xF0
        m_bUseBoundsCenter: [0x4]u8, // 0xF4
        m_nInputMode: [0x4]u8, // 0xF8
        m_flMultFactor: [0x4]u8, // 0xFC
        m_flInput0: [0x4]u8, // 0x100
        m_flInput1: [0x4]u8, // 0x104
        m_flOutput0: [0x4]u8, // 0x108
        m_flOutput1: [0x4]u8, // 0x10C
        m_flNotchedRangeMin: [0x4]u8, // 0x110
        m_flNotchedRangeMax: [0x4]u8, // 0x114
        m_flNotchedOutputOutside: [0x4]u8, // 0x118
        m_flNotchedOutputInside: [0x4]u8, // 0x11C
        m_nRoundType: [0x4]u8, // 0x120
        m_nBiasType: [0x4]u8, // 0x124
        m_flBiasParameter: [0x8]u8, // 0x128
        m_Curve: [0x40]u8, // 0x130
        m_flCompareValue: [0x8]u8, // 0x170
    };
    pub const SolveIKChainPoseOpFixedSettings_t = extern struct {
        m_ChainsToSolveData: [0x18]u8, // 0x0
    };
    pub const CNmEntityAttributeFloatEvent = extern struct {
        pad_0: [0x38]u8, // 0x0
        m_FloatValue: [0x40]u8, // 0x38
    };
    pub const CNmIDSelectorNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_conditionNodeIndices: [0x18]u8, // 0x10
        m_values: [0x30]u8, // 0x28
        m_defaultValue: [0x8]u8, // 0x58
    };
    pub const TwoBoneIKSettings_t = extern struct {
        m_endEffectorType: [0x10]u8, // 0x0
        m_endEffectorAttachment: [0x80]u8, // 0x10
        m_targetType: [0x10]u8, // 0x90
        m_targetAttachment: [0x80]u8, // 0xA0
        m_targetBoneIndex: [0x4]u8, // 0x120
        m_hPositionParam: [0x2]u8, // 0x124
        m_hRotationParam: [0x2]u8, // 0x126
        m_bAlwaysUseFallbackHinge: [0x8]u8, // 0x128
        m_vLsFallbackHingeAxis: [0x10]u8, // 0x130
        m_nFixedBoneIndex: [0x4]u8, // 0x140
        m_nMiddleBoneIndex: [0x4]u8, // 0x144
        m_nEndBoneIndex: [0x4]u8, // 0x148
        m_bMatchTargetOrientation: [0x1]u8, // 0x14C
        m_bConstrainTwist: [0x3]u8, // 0x14D
        m_flMaxTwist: [0x10]u8, // 0x150
    };
    pub const CNmCachedPoseWriteTask = extern struct {
        pad_0: [0x80]u8, // 0x0
    };
    pub const CAnimUpdateSharedData = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nodes: [0x18]u8, // 0x10
        m_nodeIndexMap: [0x20]u8, // 0x28
        m_components: [0x18]u8, // 0x48
        m_pParamListUpdater: [0x8]u8, // 0x60
        m_pTagManagerUpdater: [0x8]u8, // 0x68
        m_scriptManager: [0x8]u8, // 0x70
        m_settings: [0x30]u8, // 0x78
        m_pStaticPoseCache: [0x8]u8, // 0xA8
        m_pSkeleton: [0x8]u8, // 0xB0
        m_rootNodePath: [0x48]u8, // 0xB8
    };
    pub const CAnimAttachment = extern struct {
        m_influenceRotations: [0x30]u8, // 0x0
        m_influenceOffsets: [0x30]u8, // 0x30
        m_influenceIndices: [0xC]u8, // 0x60
        m_influenceWeights: [0xC]u8, // 0x6C
        m_numInfluences: [0x8]u8, // 0x78
    };
    pub const CFootTrajectories = extern struct {
        m_trajectories: [0x18]u8, // 0x0
    };
    pub const CNmIDComparisonNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nInputValueNodeIdx: [0x2]u8, // 0x10
        m_comparison: [0x6]u8, // 0x12
        m_comparisionIDs: [0x28]u8, // 0x18
    };
    pub const PairedSequence_t = extern struct {
        m_sRole: [0x8]u8, // 0x0
        m_sSequenceName: [0x8]u8, // 0x8
        m_hSequence: [0x10]u8, // 0x10
    };
    pub const CEditableMotionGraph = extern struct {
        pad_0: [0x58]u8, // 0x0
    };
    pub const CNmConstFloatNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_flValue: [0x8]u8, // 0x10
    };
    pub const CStringAnimTag = extern struct {
        pad_0: [0x50]u8, // 0x0
    };
    pub const CBoolAnimParameter = extern struct {
        pad_0: [0x80]u8, // 0x0
        m_bDefaultValue: [0x8]u8, // 0x80
    };
    pub const CRagdollAnimTag = extern struct {
        pad_0: [0x58]u8, // 0x0
        m_profileName: [0x8]u8, // 0x58
    };
    pub const CMotionNode = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_name: [0x8]u8, // 0x18
        m_id: [0x8]u8, // 0x20
    };
    pub const CNmStateMachineNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_stateDefinitions: [0x120]u8, // 0x10
        m_nDefaultStateIndex: [0x8]u8, // 0x130
    };
    pub const CBodyGroupAnimTag = extern struct {
        pad_0: [0x58]u8, // 0x0
        m_nPriority: [0x8]u8, // 0x58
        m_bodyGroupSettings: [0x18]u8, // 0x60
    };
    pub const CNmModelSpaceBlendTask = extern struct {
        pad_0: [0x100]u8, // 0x0
    };
    pub const CNmZeroPoseNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const CNmOrientationWarpNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nClipReferenceNodeIdx: [0x2]u8, // 0x10
        m_nTargetValueNodeIdx: [0x2]u8, // 0x12
        m_bIsOffsetNode: [0x1]u8, // 0x14
        m_bIsOffsetRelativeToCharacter: [0x1]u8, // 0x15
        m_bWarpTranslation: [0x1]u8, // 0x16
        m_alignmentMode: [0x1]u8, // 0x17
        m_samplingMode: [0x8]u8, // 0x18
    };
    pub const AnimParamID = extern struct {
        m_id: [0x4]u8, // 0x0
    };
    pub const CNmBoneMaskNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_boneMaskID: [0x8]u8, // 0x10
    };
    pub const ModelAnimGraph2Ref_t = extern struct {
        m_sIdentifier: [0x8]u8, // 0x0
        m_hGraph: [0x8]u8, // 0x8
    };
    pub const AnimationDecodeDebugDump_t = extern struct {
        m_processingType: [0x8]u8, // 0x0
        m_elems: [0x18]u8, // 0x8
    };
    pub const CNmVirtualParameterIDNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nChildNodeIdx: [0x8]u8, // 0x10
    };
    pub const CSeqScaleSet = extern struct {
        m_sName: [0x10]u8, // 0x0
        m_bRootOffset: [0x4]u8, // 0x10
        m_vRootOffset: [0xC]u8, // 0x14
        m_nLocalBoneArray: [0x18]u8, // 0x20
        m_flBoneScaleArray: [0x18]u8, // 0x38
    };
    pub const PulseRuntimeCallInfoIndex_t = extern struct {
        m_Value: [0x4]u8, // 0x0
    };
    pub const CDirectionalBlendUpdateNode = extern struct {
        pad_0: [0x5C]u8, // 0x0
        m_hSequences: [0x24]u8, // 0x5C
        m_damping: [0x18]u8, // 0x80
        m_blendValueSource: [0x4]u8, // 0x98
        m_paramIndex: [0x4]u8, // 0x9C
        m_playbackSpeed: [0x4]u8, // 0xA0
        m_duration: [0x4]u8, // 0xA4
        m_bLoop: [0x1]u8, // 0xA8
        m_bLockBlendOnReset: [0x7]u8, // 0xA9
    };
    pub const CNmGraphDefinition__ReferencedGraphSlot_t = extern struct {
        m_nNodeIdx: [0x2]u8, // 0x0
        m_dataSlotIdx: [0x2]u8, // 0x2
    };
    pub const ParamSpan_t = extern struct {
        m_samples: [0x18]u8, // 0x0
        m_hParam: [0x2]u8, // 0x18
        m_eParamType: [0x2]u8, // 0x1A
        m_flStartCycle: [0x4]u8, // 0x1C
        m_flEndCycle: [0x8]u8, // 0x20
    };
    pub const CFootStepTriggerUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        m_triggers: [0x1C]u8, // 0x70
        m_flTolerance: [0x4]u8, // 0x8C
    };
    pub const IKTargetSettings_t = extern struct {
        m_TargetSource: [0x8]u8, // 0x0
        m_Bone: [0x10]u8, // 0x8
        m_AnimgraphParameterNamePosition: [0x4]u8, // 0x18
        m_AnimgraphParameterNameOrientation: [0x4]u8, // 0x1C
        m_TargetCoordSystem: [0x8]u8, // 0x20
    };
    pub const CModelConfigElement_SetRenderColor = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_Color: [0x8]u8, // 0x48
    };
    pub const CNmAdditiveBlendTask = extern struct {
        pad_0: [0x100]u8, // 0x0
    };
    pub const CNmAnimationPoseNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nPoseTimeValueNodeIdx: [0x2]u8, // 0x10
        m_nDataSlotIdx: [0x2]u8, // 0x12
        m_inputTimeRemapRange: [0x8]u8, // 0x14
        m_flUserSpecifiedTime: [0x4]u8, // 0x1C
        m_bUseFramesAsInput: [0x8]u8, // 0x20
    };
    pub const CMotionSearchDB = extern struct {
        m_rootNode: [0x80]u8, // 0x0
        m_residualQuantizer: [0x20]u8, // 0x80
        m_codeIndices: [0x18]u8, // 0xA0
    };
    pub const CMotionNodeBlend1D = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_blendItems: [0x18]u8, // 0x28
        m_nParamIndex: [0x8]u8, // 0x40
    };
    pub const CNmCurrentSyncEventNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nSourceStateNodeIdx: [0x2]u8, // 0x10
        m_infoType: [0x6]u8, // 0x12
    };
    pub const CNmControlParameterTargetNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const SkeletonBoneBounds_t = extern struct {
        m_vecCenter: [0xC]u8, // 0x0
        m_vecSize: [0xC]u8, // 0xC
    };
    pub const CTwoBoneIKUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        m_opFixedData: [0x170]u8, // 0x70
    };
    pub const VPhysXBodyPart_t = extern struct {
        m_nFlags: [0x4]u8, // 0x0
        m_flMass: [0x4]u8, // 0x4
        m_rnShape: [0x68]u8, // 0x8
        m_nCollisionAttributeIndex: [0x2]u8, // 0x70
        m_nReserved: [0x2]u8, // 0x72
        m_flInertiaScale: [0x4]u8, // 0x74
        m_flLinearDamping: [0x4]u8, // 0x78
        m_flAngularDamping: [0x4]u8, // 0x7C
        m_flLinearDrag: [0x4]u8, // 0x80
        m_flAngularDrag: [0x4]u8, // 0x84
        m_bOverrideMassCenter: [0x4]u8, // 0x88
        m_vMassCenterOverride: [0xC]u8, // 0x8C
    };
    pub const PulseRuntimeChunkIndex_t = extern struct {
        m_Value: [0x4]u8, // 0x0
    };
    pub const CTaskHandshakeAnimTag = extern struct {
        pad_0: [0x58]u8, // 0x0
    };
    pub const CFollowPathUpdateNode = extern struct {
        pad_0: [0x74]u8, // 0x0
        m_flBlendOutTime: [0x4]u8, // 0x74
        m_bBlockNonPathMovement: [0x1]u8, // 0x78
        m_bStopFeetAtGoal: [0x1]u8, // 0x79
        m_bScaleSpeed: [0x2]u8, // 0x7A
        m_flScale: [0x4]u8, // 0x7C
        m_flMinAngle: [0x4]u8, // 0x80
        m_flMaxAngle: [0x4]u8, // 0x84
        m_flSpeedScaleBlending: [0x8]u8, // 0x88
        m_turnDamping: [0x18]u8, // 0x90
        m_facingTarget: [0x4]u8, // 0xA8
        m_hParam: [0x4]u8, // 0xAC
        m_flTurnToFaceOffset: [0x4]u8, // 0xB0
        m_bTurnToFace: [0x4]u8, // 0xB4
    };
    pub const AimMatrixOpFixedSettings_t = extern struct {
        m_attachment: [0x80]u8, // 0x0
        m_damping: [0x18]u8, // 0x80
        m_poseCacheHandles: [0x28]u8, // 0x98
        m_eBlendMode: [0x4]u8, // 0xC0
        m_flMaxYawAngle: [0x4]u8, // 0xC4
        m_flMaxPitchAngle: [0x4]u8, // 0xC8
        m_nSequenceMaxFrame: [0x4]u8, // 0xCC
        m_nBoneMaskIndex: [0x4]u8, // 0xD0
        m_bTargetIsPosition: [0x1]u8, // 0xD4
        m_bUseBiasAndClamp: [0x3]u8, // 0xD5
        m_flBiasAndClampYawOffset: [0x4]u8, // 0xD8
        m_flBiasAndClampPitchOffset: [0x4]u8, // 0xDC
        m_biasAndClampBlendCurve: [0x10]u8, // 0xE0
    };
    pub const CAnimScriptComponentUpdater = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_hScript: [0x8]u8, // 0x30
    };
    pub const CRagdollUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        m_nWeightListIndex: [0x4]u8, // 0x70
        m_poseControlMethod: [0x4]u8, // 0x74
    };
    pub const CBoneConstraintBase = extern struct {
        pad_0: [0x20]u8, // 0x0
    };
    pub const CPathAnimMotorUpdater = extern struct {
        pad_0: [0x28]u8, // 0x0
    };
    pub const CMaterialAttributeAnimTag = extern struct {
        pad_0: [0x58]u8, // 0x0
        m_AttributeName: [0x8]u8, // 0x58
        m_AttributeType: [0x4]u8, // 0x60
        m_flValue: [0x4]u8, // 0x64
        m_Color: [0x8]u8, // 0x68
    };
    pub const CNmFootEventConditionNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nSourceStateNodeIdx: [0x2]u8, // 0x10
        m_phaseCondition: [0x2]u8, // 0x12
        m_eventConditionRules: [0x4]u8, // 0x14
    };
    pub const CNmFloatChannelSet_t = extern struct {
        m_ID: [0x8]u8, // 0x0
        m_channelIDs: [0x10]u8, // 0x8
    };
    pub const CNmFootEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_phase: [0x8]u8, // 0x18
    };
    pub const CPhysSurfacePropertiesAudio = extern struct {
        m_reflectivity: [0x4]u8, // 0x0
        m_hardnessFactor: [0x4]u8, // 0x4
        m_roughnessFactor: [0x4]u8, // 0x8
        m_roughThreshold: [0x4]u8, // 0xC
        m_hardThreshold: [0x4]u8, // 0x10
        m_hardVelocityThreshold: [0x4]u8, // 0x14
        m_flStaticImpactVolume: [0x4]u8, // 0x18
        m_flOcclusionFactor: [0x4]u8, // 0x1C
    };
    pub const CSeqAutoLayer = extern struct {
        m_nLocalReference: [0x2]u8, // 0x0
        m_nLocalPose: [0x2]u8, // 0x2
        m_flags: [0x8]u8, // 0x4
        m_start: [0x4]u8, // 0xC
        m_peak: [0x4]u8, // 0x10
        m_tail: [0x4]u8, // 0x14
        m_end: [0x4]u8, // 0x18
    };
    pub const ModelEmbeddedMesh_t = extern struct {
        m_Name: [0x10]u8, // 0x0
        m_nMeshIndex: [0x4]u8, // 0x10
        m_nDataBlock: [0x4]u8, // 0x14
        m_nMorphBlock: [0x8]u8, // 0x18
        m_vertexBuffers: [0x18]u8, // 0x20
        m_indexBuffers: [0x18]u8, // 0x38
        m_toolsBuffers: [0x18]u8, // 0x50
        m_nVBIBBlock: [0x4]u8, // 0x68
        m_nToolsVBBlock: [0x4]u8, // 0x6C
    };
    pub const PhysSoftbodyDesc_t = extern struct {
        m_ParticleBoneHash: [0x18]u8, // 0x0
        m_Particles: [0x18]u8, // 0x18
        m_Springs: [0x18]u8, // 0x30
        m_Capsules: [0x18]u8, // 0x48
        m_InitPose: [0x18]u8, // 0x60
        m_ParticleBoneName: [0x18]u8, // 0x78
    };
    pub const CPulseRuntimeMethodArg = extern struct {
        m_Name: [0x38]u8, // 0x0
        m_Description: [0x8]u8, // 0x38
        m_Type: [0x40]u8, // 0x40
    };
    pub const CAnimSequenceParams = extern struct {
        m_flFadeInTime: [0x4]u8, // 0x0
        m_flFadeOutTime: [0x4]u8, // 0x4
    };
    pub const CTargetWarpUpdateNode = extern struct {
        pad_0: [0x74]u8, // 0x0
        m_eAngleMode: [0x4]u8, // 0x74
        m_hTargetPositionParameter: [0x2]u8, // 0x78
        m_hTargetUpVectorParameter: [0x2]u8, // 0x7A
        m_hTargetFacePositionParameter: [0x2]u8, // 0x7C
        m_hMoveHeadingParameter: [0x2]u8, // 0x7E
        m_hDesiredMoveHeadingParameter: [0x4]u8, // 0x80
        m_eCorrectionMethod: [0x4]u8, // 0x84
        m_eTargetWarpTimingMethod: [0x4]u8, // 0x88
        m_bTargetFacePositionIsWorldSpace: [0x1]u8, // 0x8C
        m_bTargetPositionIsWorldSpace: [0x1]u8, // 0x8D
        m_bOnlyWarpWhenTagIsFound: [0x1]u8, // 0x8E
        m_bWarpOrientationDuringTranslation: [0x1]u8, // 0x8F
        m_bWarpAroundCenter: [0x4]u8, // 0x90
        m_flMaxAngle: [0x4]u8, // 0x94
    };
    pub const CNmVirtualParameterBoolNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nChildNodeIdx: [0x8]u8, // 0x10
    };
    pub const CFollowTargetUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        m_opFixedData: [0x18]u8, // 0x70
        m_hParameterPosition: [0x2]u8, // 0x88
        m_hParameterOrientation: [0x6]u8, // 0x8A
    };
    pub const PulseRuntimeStateOffset_t = extern struct {
        m_Value: [0x2]u8, // 0x0
    };
    pub const CCPPScriptComponentUpdater = extern struct {
        pad_0: [0x30]u8, // 0x0
        m_scriptsToRun: [0x30]u8, // 0x30
    };
    pub const NetVarConfigIndex = extern struct {
        m_index: [0xC]u8, // 0x0
    };
    pub const CAnimData = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_name: [0x10]u8, // 0x10
        m_animArray: [0x18]u8, // 0x20
        m_decoderArray: [0x18]u8, // 0x38
        m_nMaxUniqueFrameIndex: [0x8]u8, // 0x50
        m_segmentArray: [0x18]u8, // 0x58
    };
    pub const IKSolverSettings_t = extern struct {
        m_SolverType: [0x4]u8, // 0x0
        m_nNumIterations: [0x4]u8, // 0x4
        m_EndEffectorRotationFixUpMode: [0x4]u8, // 0x8
    };
    pub const CBinaryUpdateNode = extern struct {
        pad_0: [0x60]u8, // 0x0
        m_pChild1: [0x10]u8, // 0x60
        m_pChild2: [0x10]u8, // 0x70
        m_timingBehavior: [0x4]u8, // 0x80
        m_flTimingBlend: [0x4]u8, // 0x84
        m_bResetChild1: [0x1]u8, // 0x88
        m_bResetChild2: [0x7]u8, // 0x89
    };
    pub const CBlendNodeInstanceData = extern struct {
        m_dampedValue: [0x4]u8, // 0x0
        m_flCycle: [0x4]u8, // 0x4
        m_flCycleZeroTime: [0x4]u8, // 0x8
        m_flPlaybackRate: [0x4]u8, // 0xC
        m_flBlendValue: [0xC]u8, // 0x10
        m_flDuration: [0x4]u8, // 0x1C
        m_resetCount: [0x10]u8, // 0x20
    };
    pub const CNmParameterizedBlendNode__BlendRange_t = extern struct {
        m_nInputIdx0: [0x2]u8, // 0x0
        m_nInputIdx1: [0x2]u8, // 0x2
        m_parameterValueRange: [0x8]u8, // 0x4
    };
    pub const CAnimKeyData = extern struct {
        m_name: [0x10]u8, // 0x0
        m_boneArray: [0x18]u8, // 0x10
        m_userArray: [0x18]u8, // 0x28
        m_morphArray: [0x18]u8, // 0x40
        m_nChannelElements: [0x8]u8, // 0x58
        m_dataChannelArray: [0x18]u8, // 0x60
    };
    pub const AttachmentHandle_t = extern struct {
        m_Value: [0x1]u8, // 0x0
    };
    pub const CAnimMorphDifference = extern struct {
        m_name: [0x10]u8, // 0x0
    };
    pub const FootFixedData_t = extern struct {
        m_vToeOffset: [0x10]u8, // 0x0
        m_vHeelOffset: [0x10]u8, // 0x10
        m_nTargetBoneIndex: [0x4]u8, // 0x20
        m_nAnkleBoneIndex: [0x4]u8, // 0x24
        m_nIKAnchorBoneIndex: [0x4]u8, // 0x28
        m_ikChainIndex: [0x4]u8, // 0x2C
        m_flMaxIKLength: [0x4]u8, // 0x30
        m_nFootIndex: [0x4]u8, // 0x34
        m_nTagIndex: [0x4]u8, // 0x38
        m_flMaxRotationLeft: [0x4]u8, // 0x3C
        m_flMaxRotationRight: [0x10]u8, // 0x40
    };
    pub const CMotionGraphGroup = extern struct {
        m_searchDB: [0xB8]u8, // 0x0
        m_motionGraphs: [0x18]u8, // 0xB8
        m_motionGraphConfigs: [0x18]u8, // 0xD0
        m_sampleToConfig: [0x18]u8, // 0xE8
        m_hIsActiveScript: [0x8]u8, // 0x100
    };
    pub const CPulse_InstructionDebug = extern struct {
        m_nFlowNodeID: [0x4]u8, // 0x0
        m_nValueNodeID: [0x4]u8, // 0x4
        m_SequencePointName: [0x10]u8, // 0x8
    };
    pub const CNmVectorNegateNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nInputValueNodeIdx: [0x8]u8, // 0x10
    };
    pub const CNmSyncTrack__Event_t = extern struct {
        m_ID: [0x8]u8, // 0x0
        m_startTime: [0x4]u8, // 0x8
        m_duration: [0x4]u8, // 0xC
    };
    pub const CParticleCollectionRendererVecInput = extern struct {
        pad_0: [0x6D8]u8, // 0x0
    };
    pub const CNmTarget = extern struct {
        m_transform: [0x20]u8, // 0x0
        m_boneID: [0x8]u8, // 0x20
        m_bIsBoneTarget: [0x1]u8, // 0x28
        m_bIsUsingBoneSpaceOffsets: [0x1]u8, // 0x29
        m_bHasOffsets: [0x1]u8, // 0x2A
        m_bIsSet: [0x5]u8, // 0x2B
    };
    pub const CNmControlParameterIDNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const CNmBodyGroupEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        m_target: [0x8]u8, // 0x18
        m_groupName: [0x8]u8, // 0x20
        m_choiceName: [0x8]u8, // 0x28
    };
    pub const CWayPointHelperUpdateNode = extern struct {
        pad_0: [0x74]u8, // 0x0
        m_flStartCycle: [0x4]u8, // 0x74
        m_flEndCycle: [0x4]u8, // 0x78
        m_bOnlyGoals: [0x1]u8, // 0x7C
        m_bPreventOvershoot: [0x1]u8, // 0x7D
        m_bPreventUndershoot: [0x2]u8, // 0x7E
    };
    pub const CMoodVData = extern struct {
        m_sModelName: [0xE0]u8, // 0x0
        m_nMoodType: [0x8]u8, // 0xE0
        m_animationLayers: [0x18]u8, // 0xE8
    };
    pub const CModelConfigElement_AttachedModel = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_InstanceName: [0x8]u8, // 0x48
        m_EntityClass: [0x8]u8, // 0x50
        m_hModel: [0x8]u8, // 0x58
        m_vOffset: [0xC]u8, // 0x60
        m_aAngOffset: [0xC]u8, // 0x6C
        m_AttachmentName: [0x8]u8, // 0x78
        m_LocalAttachmentOffsetName: [0x8]u8, // 0x80
        m_AttachmentType: [0x4]u8, // 0x88
        m_bBoneMergeFlex: [0x1]u8, // 0x8C
        m_bUserSpecifiedColor: [0x1]u8, // 0x8D
        m_bUserSpecifiedMaterialGroup: [0x2]u8, // 0x8E
        m_BodygroupOnOtherModels: [0x8]u8, // 0x90
        m_MaterialGroupOnOtherModels: [0x8]u8, // 0x98
        m_bCollideWithHierarchy: [0x1]u8, // 0xA0
        m_bCollideOutsideHierarchy: [0x4F]u8, // 0xA1
    };
    pub const CAnimTagManagerUpdater = extern struct {
        pad_0: [0x38]u8, // 0x0
        m_tags: [0x40]u8, // 0x38
    };
    pub const CParticleProperty = extern struct {
        pad_0: [0x28]u8, // 0x0
    };
};
