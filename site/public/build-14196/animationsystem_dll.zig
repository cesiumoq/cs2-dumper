/* cesium dumper | generated from live schema */
pub const animationsystem_dll = struct {
    pub const CPulseCell_WaitForCursorsWithTag = extern struct {
        pad_0: [0x128]u8, // 0x0
        _: [0x4]u8, // 0x128
        _: [0x4]u8, // 0x12c
    };
    pub const CPulseCell_RaceCursors = extern struct {
        pad_0: [0xd8]u8, // 0x0
        _: [0x18]u8, // 0xd8
        _: [0x48]u8, // 0xf0
    };
    pub const CPulseCell_Base = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x40]u8, // 0x8
    };
    pub const CPulse_ResumePoint = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_PickBestOutflowSelector = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x8]u8, // 0x48
        _: [0x18]u8, // 0x50
    };
    pub const CParticleBindingRealPulse = extern struct {
        pad_0: [0xa8]u8, // 0x0
    };
    pub const CPulseCell_WaitForObservable = extern struct {
        pad_0: [0xd8]u8, // 0x0
        _: [0x90]u8, // 0xd8
        _: [0x48]u8, // 0x168
    };
    pub const CPulse_OutflowConnection = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x30]u8, // 0x18
    };
    pub const CPulseGraphDef = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x10]u8, // 0x8
        _: [0x18]u8, // 0x18
        _: [0x10]u8, // 0x30
        _: [0x10]u8, // 0x40
        _: [0x18]u8, // 0x50
        _: [0x18]u8, // 0x68
        _: [0x18]u8, // 0x80
        _: [0x18]u8, // 0x98
        _: [0x18]u8, // 0xb0
        _: [0x18]u8, // 0xc8
        _: [0x18]u8, // 0xe0
        _: [0x18]u8, // 0xf8
        _: [0x18]u8, // 0x110
        _: [0x18]u8, // 0x128
        _: [0x80]u8, // 0x140
    };
    pub const CPulseCell_FireCursors = extern struct {
        pad_0: [0xd8]u8, // 0x0
        _: [0x18]u8, // 0xd8
        _: [0x8]u8, // 0xf0
        _: [0x48]u8, // 0xf8
    };
    pub const CPulseCell_Timeline__TimelineEvent_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x48]u8, // 0x8
    };
    pub const CPulseCell_IntervalTimer__CursorState_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
    };
    pub const CPulseCell_BaseRequirement = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_BaseState = extern struct {
        pad_0: [0xd8]u8, // 0x0
    };
    pub const OutflowWithRequirements_t = extern struct {
        _: [0x48]u8, // 0x0
        _: [0x8]u8, // 0x48
        _: [0x18]u8, // 0x50
        _: [0x18]u8, // 0x68
    };
    pub const CPulseCell_IsRequirementValid = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_Value_Gradient = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x18]u8, // 0x48
    };
    pub const PulseNodeDynamicOutflows_t__DynamicOutflow_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x48]u8, // 0x8
    };
    pub const CBasePulseGraphInstance = extern struct {
        pad_0: [0x88]u8, // 0x0
    };
    pub const CPulseCell_Inflow_GraphHook = extern struct {
        pad_0: [0x80]u8, // 0x0
        _: [0x10]u8, // 0x80
    };
    pub const SignatureOutflow_Resume = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_Inflow_BaseEntrypoint = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x8]u8, // 0x48
        _: [0x30]u8, // 0x50
    };
    pub const CPulseCell_WaitForCursorsWithTagBase = extern struct {
        pad_0: [0xd8]u8, // 0x0
        _: [0x8]u8, // 0xd8
        _: [0x48]u8, // 0xe0
    };
    pub const CPulse_InvokeBinding = extern struct {
        _: [0x30]u8, // 0x0
        _: [0x10]u8, // 0x30
        _: [0x4]u8, // 0x40
        _: [0x4]u8, // 0x44
        _: [0x68]u8, // 0x48
    };
    pub const CPulseCell_IntervalTimer = extern struct {
        pad_0: [0xd8]u8, // 0x0
        _: [0x48]u8, // 0xd8
        _: [0x48]u8, // 0x120
    };
    pub const CPulseCell_BaseLerp = extern struct {
        pad_0: [0xd8]u8, // 0x0
        _: [0x48]u8, // 0xd8
    };
    pub const CPulseCell_Value_Curve = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x40]u8, // 0x48
    };
    pub const CPulseCell_Inflow_EventHandler = extern struct {
        pad_0: [0x80]u8, // 0x0
        _: [0x10]u8, // 0x80
    };
    pub const CPulseCell_BaseFlow = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_Outflow_CycleShuffled__InstanceState_t = extern struct {
        _: [0x20]u8, // 0x0
        _: [0x8]u8, // 0x20
    };
    pub const CPulseCell_BaseLerp__CursorState_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
    };
    pub const SignatureOutflow_Continue = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_Timeline = extern struct {
        pad_0: [0xd8]u8, // 0x0
        _: [0x18]u8, // 0xd8
        _: [0x8]u8, // 0xf0
        _: [0x48]u8, // 0xf8
    };
    pub const CPulseCell_Inflow_EntOutputHandler = extern struct {
        pad_0: [0x80]u8, // 0x0
        _: [0x10]u8, // 0x80
        _: [0x10]u8, // 0x90
        _: [0x18]u8, // 0xa0
    };
    pub const CPulseCell_Outflow_CycleOrdered__InstanceState_t = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const CParticleCollectionBindingInstance = extern struct {
        pad_0: [0xa8]u8, // 0x0
    };
    pub const CPulseCell_LimitCount__InstanceState_t = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const CPulseCell_Step_DebugLog = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_BaseYieldingInflow = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x48]u8, // 0x48
        _: [0x48]u8, // 0x90
    };
    pub const PulseNodeDynamicOutflows_t = extern struct {
        _: [0x18]u8, // 0x0
    };
    pub const CPulseCell_IsRequirementValid__Criteria_t = extern struct {
        _: [0x1]u8, // 0x0
    };
    pub const CPulseCell_Inflow_ObservableVariableListener = extern struct {
        pad_0: [0x80]u8, // 0x0
        _: [0x2]u8, // 0x80
        _: [0x6]u8, // 0x82
    };
    pub const CPulseCell_Outflow_CycleOrdered = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x18]u8, // 0x48
    };
    pub const PulseSelectorOutflowList_t = extern struct {
        _: [0x18]u8, // 0x0
    };
    pub const CPulseCell_Inflow_Wait = extern struct {
        pad_0: [0xd8]u8, // 0x0
        _: [0x48]u8, // 0xd8
    };
    pub const CPulseCell_Outflow_CycleShuffled = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x18]u8, // 0x48
    };
    pub const CPulseCell_Inflow_Method = extern struct {
        pad_0: [0x80]u8, // 0x0
        _: [0x10]u8, // 0x80
        _: [0x8]u8, // 0x90
        _: [0x8]u8, // 0x98
        _: [0x10]u8, // 0xa0
        _: [0x10]u8, // 0xb0
    };
    pub const CPulseCell_BaseValue = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_BooleanSwitchState = extern struct {
        pad_0: [0xd8]u8, // 0x0
        _: [0x90]u8, // 0xd8
        _: [0x48]u8, // 0x168
        _: [0x48]u8, // 0x1b0
    };
    pub const CPulseCell_Inflow_Yield = extern struct {
        pad_0: [0xd8]u8, // 0x0
        _: [0x48]u8, // 0xd8
    };
    pub const CPulseCell_Unknown = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x10]u8, // 0x48
    };
    pub const CPulseCell_Outflow_CycleRandom = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x18]u8, // 0x48
    };
    pub const CPulseCell_Step_PublicOutput = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x8]u8, // 0x48
    };
    pub const CPulse_BlackboardReference = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x10]u8, // 0x8
        _: [0x8]u8, // 0x18
        _: [0x8]u8, // 0x20
    };
    pub const CPulseCell_ReturnValues = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseCell_Value_RandomInt = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CAnimationLayer = extern struct {
        _: [0xc]u8, // 0x0
        _: [0x4]u8, // 0xc
        _: [0xc]u8, // 0x10
        _: [0xc]u8, // 0x1c
        _: [0xc]u8, // 0x28
        _: [0x4]u8, // 0x34
        _: [0x4]u8, // 0x38
        _: [0x4]u8, // 0x3c
        _: [0x4]u8, // 0x40
        _: [0x4]u8, // 0x44
        _: [0x4]u8, // 0x48
    };
    pub const CPulse_CallInfo = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
        _: [0x30]u8, // 0x18
        _: [0x4]u8, // 0x48
        _: [0x4]u8, // 0x4c
        _: [0x4]u8, // 0x50
        _: [0x4]u8, // 0x54
        _: [0x8]u8, // 0x58
    };
    pub const CPulseCell_InlineNodeSkipSelector = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x4]u8, // 0x48
        _: [0x4]u8, // 0x4c
        _: [0x18]u8, // 0x50
        _: [0x48]u8, // 0x68
    };
    pub const CPulseCell_LimitCount = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x8]u8, // 0x48
    };
    pub const CPulseCell_Step_CallExternalMethod = extern struct {
        pad_0: [0xd8]u8, // 0x0
        _: [0x10]u8, // 0xd8
        _: [0x8]u8, // 0xe8
        _: [0x10]u8, // 0xf0
        _: [0x8]u8, // 0x100
        _: [0x48]u8, // 0x108
    };
    pub const CPulseCell_LimitCount__Criteria_t = extern struct {
        _: [0x1]u8, // 0x0
    };
    pub const CPulseCell_CursorQueue = extern struct {
        pad_0: [0x128]u8, // 0x0
        _: [0x8]u8, // 0x128
    };
    pub const CPulseCell_Value_RandomFloat = extern struct {
        pad_0: [0x48]u8, // 0x0
    };
    pub const CPulseExecCursor = extern struct {
        pad_0: [0xd8]u8, // 0x0
    };
    pub const CAnimFrameBlockAnim = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x18]u8, // 0x8
    };
    pub const CZeroPoseUpdateNode = extern struct {
        pad_0: [0x60]u8, // 0x0
    };
    pub const CSlowDownOnSlopesUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        _: [0x8]u8, // 0x70
    };
    pub const COrientationWarpUpdateNode = extern struct {
        pad_0: [0x74]u8, // 0x0
        _: [0x4]u8, // 0x74
        _: [0x2]u8, // 0x78
        _: [0x2]u8, // 0x7a
        _: [0x4]u8, // 0x7c
        _: [0x4]u8, // 0x80
        _: [0x4]u8, // 0x84
        _: [0x8]u8, // 0x88
        _: [0x18]u8, // 0x90
        _: [0x4]u8, // 0xa8
        _: [0x4]u8, // 0xac
        _: [0x4]u8, // 0xb0
        _: [0x4]u8, // 0xb4
        _: [0x8]u8, // 0xb8
    };
    pub const CAnimParameterBase = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x8]u8, // 0x18
        _: [0x8]u8, // 0x20
        _: [0x8]u8, // 0x28
        _: [0x18]u8, // 0x30
        _: [0x20]u8, // 0x48
        _: [0x1]u8, // 0x68
        _: [0x7]u8, // 0x69
    };
    pub const CSequenceFinishedAnimTag = extern struct {
        pad_0: [0x58]u8, // 0x0
        _: [0x8]u8, // 0x58
    };
    pub const CSceneObjectData = extern struct {
        _: [0xc]u8, // 0x0
        _: [0xc]u8, // 0xc
        _: [0x10]u8, // 0x18
        _: [0x10]u8, // 0x28
        _: [0x10]u8, // 0x38
        _: [0x10]u8, // 0x48
        _: [0x60]u8, // 0x58
    };
    pub const CFootCycle = extern struct {
        pad_0: [0x4]u8, // 0x0
    };
    pub const CParticleModelInput = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
        _: [0x40]u8, // 0x18
        _: [0x8]u8, // 0x58
    };
    pub const CInputStreamUpdateNode = extern struct {
        pad_0: [0x60]u8, // 0x0
    };
    pub const CNmFootIKTask = extern struct {
        pad_0: [0x70]u8, // 0x0
        _: [0x4]u8, // 0x70
        _: [0xc]u8, // 0x74
        _: [0x20]u8, // 0x80
        _: [0x20]u8, // 0xa0
        _: [0x4]u8, // 0xc0
        _: [0xc]u8, // 0xc4
        _: [0x30]u8, // 0xd0
        _: [0x30]u8, // 0x100
        _: [0x4]u8, // 0x130
        _: [0x4]u8, // 0x134
        _: [0x1]u8, // 0x138
        _: [0x7]u8, // 0x139
    };
    pub const CIntAnimParameter = extern struct {
        pad_0: [0x80]u8, // 0x0
        _: [0x4]u8, // 0x80
        _: [0x4]u8, // 0x84
        _: [0x8]u8, // 0x88
    };
    pub const CNmParameterizedBlendNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x18]u8, // 0x10
        _: [0x2]u8, // 0x28
        _: [0x6]u8, // 0x2a
    };
    pub const CNmScaleTask = extern struct {
        pad_0: [0xd0]u8, // 0x0
    };
    pub const PerTickSettings_t = extern struct {
        _: [0x20]u8, // 0x0
        _: [0x20]u8, // 0x20
        _: [0x20]u8, // 0x40
        _: [0x63c]u8, // 0x60
        _: [0x8]u8, // 0x69c
        _: [0x4]u8, // 0x6a4
        _: [0x4]u8, // 0x6a8
        _: [0x8]u8, // 0x6ac
        _: [0x1]u8, // 0x6b4
        _: [0x1]u8, // 0x6b5
        _: [0x1]u8, // 0x6b6
        _: [0x9]u8, // 0x6b7
    };
    pub const CNmFrameSnapEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x8]u8, // 0x18
    };
    pub const CAnimNodePath = extern struct {
        _: [0x2c]u8, // 0x0
        _: [0x4]u8, // 0x2c
    };
    pub const AnimNodeOutputID = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const CNmSyncTrack = extern struct {
        _: [0xa8]u8, // 0x0
        _: [0x8]u8, // 0xa8
    };
    pub const CSeqBoneMaskList = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x18]u8, // 0x10
        _: [0x18]u8, // 0x28
        _: [0x8]u8, // 0x40
        _: [0x18]u8, // 0x48
    };
    pub const CAnimEncodedFrames = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x18]u8, // 0x18
        _: [0xa8]u8, // 0x30
    };
    pub const SampleCode = extern struct {
        _: [0x8]u8, // 0x0
    };
    pub const CCachedPose = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x18]u8, // 0x8
        _: [0x18]u8, // 0x20
        _: [0x4]u8, // 0x38
        _: [0x4]u8, // 0x3c
    };
    pub const CNmTransitionEventConditionNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
        _: [0x4]u8, // 0x18
        _: [0x2]u8, // 0x1c
        _: [0x2]u8, // 0x1e
    };
    pub const CTaskStatusAnimTag = extern struct {
        pad_0: [0x58]u8, // 0x0
    };
    pub const CStateNodeInstanceData = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x18]u8, // 0x8
        _: [0x1c]u8, // 0x20
        _: [0x10]u8, // 0x3c
    };
    pub const CMotionGraphConfig = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
    };
    pub const CMotionSearchNode = extern struct {
        _: [0x18]u8, // 0x0
        _: [0x20]u8, // 0x18
        _: [0x18]u8, // 0x38
        _: [0x18]u8, // 0x50
        _: [0x18]u8, // 0x68
    };
    pub const CAnimActivity = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x8]u8, // 0x18
    };
    pub const CAnimScriptManager = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x190]u8, // 0x10
    };
    pub const AnimationDecodeDebugDumpElement_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x18]u8, // 0x10
        _: [0x18]u8, // 0x28
        _: [0x18]u8, // 0x40
        _: [0x18]u8, // 0x58
    };
    pub const CChoreoInstanceData = extern struct {
        _: [0x398]u8, // 0x0
    };
    pub const PulseRuntimeVarIndex_t = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const ConfigIndex = extern struct {
        _: [0x2]u8, // 0x0
        _: [0x2]u8, // 0x2
    };
    pub const VPhysXCollisionAttributes_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x18]u8, // 0x8
        _: [0x18]u8, // 0x20
        _: [0x18]u8, // 0x38
        _: [0x18]u8, // 0x50
        _: [0x8]u8, // 0x68
        _: [0x18]u8, // 0x70
        _: [0x18]u8, // 0x88
        _: [0x18]u8, // 0xa0
        _: [0x18]u8, // 0xb8
    };
    pub const CSequenceUpdateNode = extern struct {
        pad_0: [0x78]u8, // 0x0
        _: [0x4]u8, // 0x78
        _: [0x4]u8, // 0x7c
        _: [0x18]u8, // 0x80
        _: [0x18]u8, // 0x98
    };
    pub const CStateMachineInstanceData = extern struct {
        _: [0x4]u8, // 0x0
        _: [0xc]u8, // 0x4
        _: [0x4]u8, // 0x10
        _: [0x8]u8, // 0x14
    };
    pub const CNmPassthroughNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
    };
    pub const CNmClipReferenceNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const CNmGraphDefinition__ExternalGraphSlot_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
    };
    pub const PulseRuntimeEntrypointIndex_t = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const CAimCameraUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        _: [0x2]u8, // 0x70
        _: [0x2]u8, // 0x72
        _: [0x2]u8, // 0x74
        _: [0x2]u8, // 0x76
        _: [0x2]u8, // 0x78
        _: [0x2]u8, // 0x7a
        _: [0x4]u8, // 0x7c
        _: [0x38]u8, // 0x80
    };
    pub const PulseRuntimeDomainValueIndex_t = extern struct {
        _: [0x2]u8, // 0x0
    };
    pub const LookData = extern struct {
        _: [0x18]u8, // 0x0
    };
    pub const CSeqSeqDescFlag = extern struct {
        _: [0x1]u8, // 0x0
        _: [0x1]u8, // 0x1
        _: [0x1]u8, // 0x2
        _: [0x1]u8, // 0x3
        _: [0x1]u8, // 0x4
        _: [0x1]u8, // 0x5
        _: [0x1]u8, // 0x6
        _: [0x1]u8, // 0x7
        _: [0x1]u8, // 0x8
        _: [0x1]u8, // 0x9
        _: [0x1]u8, // 0xa
    };
    pub const PermModelInfo_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0xc]u8, // 0x4
        _: [0xc]u8, // 0x10
        _: [0xc]u8, // 0x1c
        _: [0xc]u8, // 0x28
        _: [0x4]u8, // 0x34
        _: [0xc]u8, // 0x38
        _: [0x4]u8, // 0x44
        _: [0x8]u8, // 0x48
        _: [0x8]u8, // 0x50
    };
    pub const StanceInfo_t = extern struct {
        _: [0xc]u8, // 0x0
        _: [0x4]u8, // 0xc
    };
    pub const IKBoneNameAndIndex_t = extern struct {
        _: [0x10]u8, // 0x0
    };
    pub const CPulse_Chunk = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x10]u8, // 0x10
        _: [0x10]u8, // 0x20
        _: [0x30]u8, // 0x30
    };
    pub const CStanceScaleUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        _: [0x8]u8, // 0x70
    };
    pub const CPulseBreakpointLocation = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x10]u8, // 0x8
        _: [0x10]u8, // 0x18
        _: [0x8]u8, // 0x28
    };
    pub const PulseRuntimeInvokeIndex_t = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const CNmBoneMaskBlendNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x2]u8, // 0x10
        _: [0x2]u8, // 0x12
        _: [0x4]u8, // 0x14
    };
    pub const CNmIDEventNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x8]u8, // 0x18
    };
    pub const HitReactFixedSettings_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
        _: [0x4]u8, // 0x20
        _: [0x4]u8, // 0x24
        _: [0x4]u8, // 0x28
        _: [0x4]u8, // 0x2c
        _: [0x4]u8, // 0x30
        _: [0x4]u8, // 0x34
        _: [0x4]u8, // 0x38
        _: [0x4]u8, // 0x3c
        _: [0x4]u8, // 0x40
    };
    pub const CNmPoseNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const CAnimTagBase = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x8]u8, // 0x18
        _: [0x8]u8, // 0x20
        _: [0x8]u8, // 0x28
        _: [0x18]u8, // 0x30
        _: [0x8]u8, // 0x48
    };
    pub const CPerParticleVecInput = extern struct {
        pad_0: [0x6d8]u8, // 0x0
    };
    pub const CMotionGraph = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x18]u8, // 0x10
        _: [0x18]u8, // 0x28
        _: [0x8]u8, // 0x40
        _: [0x4]u8, // 0x48
        _: [0x4]u8, // 0x4c
        _: [0x4]u8, // 0x50
        _: [0x4]u8, // 0x54
    };
    pub const CNmVectorInfoNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x2]u8, // 0x10
        _: [0x6]u8, // 0x12
    };
    pub const AnimationSnapshot_t = extern struct {
        pad_0: [0x110]u8, // 0x0
        _: [0x8]u8, // 0x110
        _: [0x8]u8, // 0x118
    };
    pub const CNmBlendTask = extern struct {
        pad_0: [0x100]u8, // 0x0
    };
    pub const CNmVectorValueNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const CSeqTransition = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
    };
    pub const CNmPoseTask = extern struct {
        pad_0: [0x70]u8, // 0x0
    };
    pub const CAnimGraphSettingsGroup = extern struct {
        pad_0: [0x20]u8, // 0x0
    };
    pub const CNmVirtualParameterTargetNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
    };
    pub const CAnimGraphDebugReplay = extern struct {
        pad_0: [0x40]u8, // 0x0
        _: [0x8]u8, // 0x40
        _: [0x18]u8, // 0x48
        _: [0x4]u8, // 0x60
        _: [0x4]u8, // 0x64
        _: [0x8]u8, // 0x68
    };
    pub const CVectorAnimParameter = extern struct {
        pad_0: [0x80]u8, // 0x0
        _: [0xc]u8, // 0x80
        _: [0x4]u8, // 0x8c
        _: [0x8]u8, // 0x90
    };
    pub const CNmCachedPoseReadTask = extern struct {
        pad_0: [0x80]u8, // 0x0
    };
    pub const CNmStateMachineNode__StateDefinition_t = extern struct {
        _: [0x2]u8, // 0x0
        _: [0x6]u8, // 0x2
        _: [0x30]u8, // 0x8
    };
    pub const CStanceOverrideUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        _: [0x18]u8, // 0x70
        _: [0x10]u8, // 0x88
        _: [0x4]u8, // 0x98
        _: [0x4]u8, // 0x9c
    };
    pub const CNmGraphDefinition__ExternalPoseSlot_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
    };
    pub const PhysShapeMarkup_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x8]u8, // 0x8
    };
    pub const CBlend2DInstanceData = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x3c]u8, // 0x8
        _: [0x4]u8, // 0x44
        _: [0x58]u8, // 0x48
    };
    pub const LookAtBone_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
    };
    pub const CDirectPlaybackInstanceData = extern struct {
        _: [0xc]u8, // 0x0
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
        _: [0x10]u8, // 0x14
        _: [0xe0]u8, // 0x24
        _: [0x4]u8, // 0x104
        _: [0x10]u8, // 0x108
        _: [0x4]u8, // 0x118
        _: [0x4]u8, // 0x11c
        _: [0x10]u8, // 0x120
        _: [0x8]u8, // 0x130
        _: [0x10]u8, // 0x138
    };
    pub const CNmTransitionNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x2]u8, // 0x10
        _: [0x2]u8, // 0x12
        _: [0x2]u8, // 0x14
        _: [0x2]u8, // 0x16
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
        _: [0x4]u8, // 0x20
        _: [0x4]u8, // 0x24
        _: [0x2]u8, // 0x28
        _: [0x1]u8, // 0x2a
        _: [0x5]u8, // 0x2b
    };
    pub const PulseRuntimeRegisterIndex_t = extern struct {
        _: [0x2]u8, // 0x0
    };
    pub const CNmFloatEaseNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x2]u8, // 0x18
        _: [0x1]u8, // 0x1a
        _: [0x5]u8, // 0x1b
    };
    pub const CAnimationGraphInstance = extern struct {
        pad_0: [0x329]u8, // 0x0
        _: [0x17]u8, // 0x329
    };
    pub const CAnimEncodeDifference = extern struct {
        _: [0x18]u8, // 0x0
        _: [0x18]u8, // 0x18
        _: [0x18]u8, // 0x30
        _: [0x18]u8, // 0x48
        _: [0x18]u8, // 0x60
        _: [0x18]u8, // 0x78
        _: [0x18]u8, // 0x90
    };
    pub const CRootUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
    };
    pub const CNmTargetOffsetNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x2]u8, // 0x10
        _: [0xe]u8, // 0x12
        _: [0x10]u8, // 0x20
        _: [0x10]u8, // 0x30
    };
    pub const MotionMatchingInstanceData = extern struct {
        pad_0: [0x2c]u8, // 0x0
        _: [0x58]u8, // 0x2c
        _: [0x9c]u8, // 0x84
    };
    pub const CMotionGraphUpdateNode = extern struct {
        pad_0: [0x58]u8, // 0x0
        _: [0x10]u8, // 0x58
    };
    pub const CNmFloatAngleMathNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x2]u8, // 0x10
        _: [0x6]u8, // 0x12
    };
    pub const PulseCursorID_t = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const CAnimParamHandle = extern struct {
        _: [0x1]u8, // 0x0
        _: [0x1]u8, // 0x1
    };
    pub const WeightList = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x18]u8, // 0x8
    };
    pub const MotionIndex = extern struct {
        _: [0x2]u8, // 0x0
        _: [0x2]u8, // 0x2
    };
    pub const FollowAttachmentSettings_t = extern struct {
        _: [0x80]u8, // 0x0
        _: [0x4]u8, // 0x80
        _: [0x1]u8, // 0x84
        _: [0x1]u8, // 0x85
        _: [0xa]u8, // 0x86
    };
    pub const CNmReferencedGraphNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x2]u8, // 0x10
        _: [0x6]u8, // 0x12
    };
    pub const AnimNodeID = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const CNmClipSelectorNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x18]u8, // 0x10
        _: [0x18]u8, // 0x28
    };
    pub const CLookComponentUpdater = extern struct {
        pad_0: [0x34]u8, // 0x0
        _: [0x2]u8, // 0x34
        _: [0x2]u8, // 0x36
        _: [0x2]u8, // 0x38
        _: [0x2]u8, // 0x3a
        _: [0x2]u8, // 0x3c
        _: [0x2]u8, // 0x3e
        _: [0x2]u8, // 0x40
        _: [0x2]u8, // 0x42
        _: [0x4]u8, // 0x44
    };
    pub const CNmIsExternalPoseSetNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
    };
    pub const CAnimGraphNetworkSettings = extern struct {
        pad_0: [0x20]u8, // 0x0
        _: [0x8]u8, // 0x20
    };
    pub const CSingleFrameUpdateNode = extern struct {
        pad_0: [0x58]u8, // 0x0
        _: [0x18]u8, // 0x58
        _: [0x4]u8, // 0x70
        _: [0x4]u8, // 0x74
        _: [0x8]u8, // 0x78
    };
    pub const CNmChainLookatNode__CDefinition = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x8]u8, // 0x18
        _: [0xc]u8, // 0x20
        _: [0xc]u8, // 0x2c
        _: [0x2]u8, // 0x38
        _: [0x2]u8, // 0x3a
        _: [0x4]u8, // 0x3c
        _: [0x30]u8, // 0x40
        _: [0x1]u8, // 0x70
        _: [0x7]u8, // 0x71
    };
    pub const CNmFollowBoneNode__CDefinition = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x8]u8, // 0x18
        _: [0x8]u8, // 0x20
        _: [0x2]u8, // 0x28
        _: [0x6]u8, // 0x2a
    };
    pub const CBlockSelectionMetricEvaluator = extern struct {
        pad_0: [0x50]u8, // 0x0
    };
    pub const MovementData = extern struct {
        _: [0xc]u8, // 0x0
        _: [0x14]u8, // 0xc
        _: [0x14]u8, // 0x20
        _: [0xc]u8, // 0x34
        _: [0xc]u8, // 0x40
        _: [0xc]u8, // 0x4c
        _: [0xc]u8, // 0x58
        _: [0x4]u8, // 0x64
        _: [0xc]u8, // 0x68
        _: [0xc]u8, // 0x74
        _: [0xc]u8, // 0x80
        _: [0xc]u8, // 0x8c
        _: [0xc]u8, // 0x98
        _: [0xc]u8, // 0xa4
        _: [0xc]u8, // 0xb0
        _: [0xc]u8, // 0xbc
        _: [0x14]u8, // 0xc8
        _: [0xc]u8, // 0xdc
    };
    pub const CRemapValueComponentUpdater = extern struct {
        pad_0: [0x30]u8, // 0x0
        _: [0x18]u8, // 0x30
    };
    pub const CModelConfigList = extern struct {
        _: [0x1]u8, // 0x0
        _: [0x7]u8, // 0x1
        _: [0x18]u8, // 0x8
    };
    pub const CSeqAutoLayerFlag = extern struct {
        _: [0x1]u8, // 0x0
        _: [0x1]u8, // 0x1
        _: [0x1]u8, // 0x2
        _: [0x1]u8, // 0x3
        _: [0x1]u8, // 0x4
        _: [0x1]u8, // 0x5
        _: [0x1]u8, // 0x6
        _: [0x1]u8, // 0x7
    };
    pub const AnimStateID = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const CNmIDEventConditionNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x40]u8, // 0x18
    };
    pub const ModelBoneFlexDriver_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x18]u8, // 0x10
    };
    pub const CMorphData = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x18]u8, // 0x8
    };
    pub const CFootPinningUpdateNode = extern struct {
        pad_0: [0x78]u8, // 0x0
        _: [0x30]u8, // 0x78
        _: [0x8]u8, // 0xa8
        _: [0x18]u8, // 0xb0
        _: [0x8]u8, // 0xc8
    };
    pub const CSeqPoseSetting = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x10]u8, // 0x10
        _: [0x10]u8, // 0x20
        _: [0x4]u8, // 0x30
        _: [0x1]u8, // 0x34
        _: [0x1]u8, // 0x35
        _: [0x2]u8, // 0x36
        _: [0x8]u8, // 0x38
    };
    pub const PulseGraphExecutionHistoryCursorDesc_t = extern struct {
        _: [0x18]u8, // 0x0
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
        _: [0x4]u8, // 0x20
        _: [0x4]u8, // 0x24
        _: [0x8]u8, // 0x28
    };
    pub const CNmVirtualParameterFloatNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
    };
    pub const CAttachment = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x18]u8, // 0x8
        _: [0x30]u8, // 0x20
        _: [0x24]u8, // 0x50
        _: [0xc]u8, // 0x74
        _: [0x3]u8, // 0x80
        _: [0x1]u8, // 0x83
        _: [0xc]u8, // 0x84
    };
    pub const CSequenceUpdateNodeBase = extern struct {
        pad_0: [0x6c]u8, // 0x0
        _: [0x4]u8, // 0x6c
        _: [0x8]u8, // 0x70
    };
    pub const CDrawCullingData = extern struct {
        _: [0x3]u8, // 0x0
        _: [0x1]u8, // 0x3
    };
    pub const VPhysXJoint_t = extern struct {
        _: [0x2]u8, // 0x0
        _: [0x2]u8, // 0x2
        _: [0x2]u8, // 0x4
        _: [0xa]u8, // 0x6
        _: [0x20]u8, // 0x10
        _: [0x20]u8, // 0x30
        _: [0x1]u8, // 0x50
        _: [0x1]u8, // 0x51
        _: [0x1]u8, // 0x52
        _: [0x1]u8, // 0x53
        _: [0x8]u8, // 0x54
        _: [0x4]u8, // 0x5c
        _: [0xc]u8, // 0x60
        _: [0x4]u8, // 0x6c
        _: [0x4]u8, // 0x70
        _: [0x8]u8, // 0x74
        _: [0x4]u8, // 0x7c
        _: [0x8]u8, // 0x80
        _: [0x4]u8, // 0x88
        _: [0xc]u8, // 0x8c
        _: [0x4]u8, // 0x98
        _: [0x4]u8, // 0x9c
        _: [0x4]u8, // 0xa0
        _: [0x4]u8, // 0xa4
        _: [0x4]u8, // 0xa8
        _: [0x4]u8, // 0xac
        _: [0x4]u8, // 0xb0
        _: [0x4]u8, // 0xb4
        _: [0x8]u8, // 0xb8
        _: [0x10]u8, // 0xc0
    };
    pub const CStateNodeTransitionData = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0xc]u8, // 0x10
    };
    pub const CTimeRemainingMetricEvaluator = extern struct {
        pad_0: [0x50]u8, // 0x0
        _: [0x4]u8, // 0x50
        _: [0x4]u8, // 0x54
        _: [0x4]u8, // 0x58
        _: [0x4]u8, // 0x5c
    };
    pub const CParticleInput = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const PulseRuntimeTempVarIndex_t = extern struct {
        _: [0x2]u8, // 0x0
    };
    pub const CModelConfigElement = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x38]u8, // 0x10
    };
    pub const CNmControlParameterVectorNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const FootFixedSettings = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x10]u8, // 0x10
        _: [0x4]u8, // 0x20
        _: [0x4]u8, // 0x24
        _: [0x4]u8, // 0x28
        _: [0x4]u8, // 0x2c
        _: [0x4]u8, // 0x30
        _: [0x4]u8, // 0x34
        _: [0x4]u8, // 0x38
        _: [0x4]u8, // 0x3c
    };
    pub const CNmBoneMaskSwitchNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x2]u8, // 0x10
        _: [0x2]u8, // 0x12
        _: [0x4]u8, // 0x14
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
    };
    pub const CModelConfig = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x18]u8, // 0x8
        _: [0x1]u8, // 0x20
        _: [0x7]u8, // 0x21
    };
    pub const AnimComponentID = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const VPhysXAggregateData_t = extern struct {
        _: [0x2]u8, // 0x0
        _: [0x2]u8, // 0x2
        _: [0x4]u8, // 0x4
        _: [0x18]u8, // 0x8
        _: [0x18]u8, // 0x20
        _: [0x18]u8, // 0x38
        _: [0x18]u8, // 0x50
        _: [0x18]u8, // 0x68
        _: [0x18]u8, // 0x80
        _: [0x18]u8, // 0x98
        _: [0x18]u8, // 0xb0
        _: [0x18]u8, // 0xc8
        _: [0x8]u8, // 0xe0
        _: [0x18]u8, // 0xe8
        _: [0x18]u8, // 0x100
        _: [0x18]u8, // 0x118
        _: [0x18]u8, // 0x130
        _: [0x8]u8, // 0x148
    };
    pub const CNmGraphDefinition = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x18]u8, // 0x10
        _: [0x8]u8, // 0x28
        _: [0x18]u8, // 0x30
        _: [0x8]u8, // 0x48
        _: [0x18]u8, // 0x50
        _: [0x18]u8, // 0x68
        _: [0x18]u8, // 0x80
        _: [0x18]u8, // 0x98
        _: [0x18]u8, // 0xb0
        _: [0x88]u8, // 0xc8
        _: [0x18]u8, // 0x150
        _: [0x50]u8, // 0x168
    };
    pub const CNmSelectorNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x18]u8, // 0x10
        _: [0x18]u8, // 0x28
    };
    pub const CAnimDemoCaptureSettings = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x8]u8, // 0x10
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
        _: [0x8]u8, // 0x20
        _: [0x8]u8, // 0x28
        _: [0x8]u8, // 0x30
        _: [0x4]u8, // 0x38
        _: [0x4]u8, // 0x3c
        _: [0x8]u8, // 0x40
        _: [0x4]u8, // 0x48
        _: [0x4]u8, // 0x4c
        _: [0x18]u8, // 0x50
        _: [0x18]u8, // 0x68
    };
    pub const IKDemoCaptureSettings_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x8]u8, // 0x10
        _: [0x8]u8, // 0x18
        _: [0x8]u8, // 0x20
    };
    pub const CSeqMultiFetchFlag = extern struct {
        _: [0x1]u8, // 0x0
        _: [0x1]u8, // 0x1
        _: [0x1]u8, // 0x2
        _: [0x1]u8, // 0x3
        _: [0x1]u8, // 0x4
        _: [0x1]u8, // 0x5
    };
    pub const PulseRegisterMap_t = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x10]u8, // 0x10
        _: [0x10]u8, // 0x20
    };
    pub const VPhysXRange_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
    };
    pub const CStopAtGoalUpdateNode = extern struct {
        pad_0: [0x74]u8, // 0x0
        _: [0x4]u8, // 0x74
        _: [0x4]u8, // 0x78
        _: [0x4]u8, // 0x7c
        _: [0x8]u8, // 0x80
        _: [0x18]u8, // 0x88
    };
    pub const CNmIDEventPercentageThroughNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x8]u8, // 0x18
    };
    pub const CAnimBoneDifference = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x10]u8, // 0x10
        _: [0xc]u8, // 0x20
        _: [0x1]u8, // 0x2c
        _: [0x3]u8, // 0x2d
    };
    pub const CNmCachedBoolNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
    };
    pub const CAnimCycle = extern struct {
        pad_0: [0x4]u8, // 0x0
    };
    pub const CActionComponentUpdater = extern struct {
        pad_0: [0x30]u8, // 0x0
        _: [0x18]u8, // 0x30
    };
    pub const CDirectionalBlendInstanceData = extern struct {
        _: [0x14]u8, // 0x0
        _: [0x4]u8, // 0x14
        _: [0x4]u8, // 0x18
        _: [0xc]u8, // 0x1c
        _: [0xc]u8, // 0x28
        _: [0xc]u8, // 0x34
        _: [0x10]u8, // 0x40
    };
    pub const CDampedPathAnimMotorUpdater = extern struct {
        pad_0: [0x2c]u8, // 0x0
        _: [0x4]u8, // 0x2c
        _: [0x4]u8, // 0x30
        _: [0x2]u8, // 0x34
        _: [0x2]u8, // 0x36
        _: [0x4]u8, // 0x38
        _: [0x4]u8, // 0x3c
        _: [0x8]u8, // 0x40
    };
    pub const CNmCachedFloatNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
    };
    pub const CNmFloatSwitchNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x2]u8, // 0x10
        _: [0x2]u8, // 0x12
        _: [0x4]u8, // 0x14
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
    };
    pub const CModelConfigElement_SetMaterialGroupOnAttachedModels = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x8]u8, // 0x48
    };
    pub const CNmFloatChannelData = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x18]u8, // 0x10
        _: [0x18]u8, // 0x28
        _: [0x18]u8, // 0x40
    };
    pub const CNmEntityAttributeEventBase = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x8]u8, // 0x18
        _: [0x18]u8, // 0x20
    };
    pub const CNmVirtualParameterBoneMaskNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
    };
    pub const SequenceData = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x34]u8, // 0x4
    };
    pub const CPathHelperUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        _: [0x4]u8, // 0x70
        _: [0x4]u8, // 0x74
    };
    pub const MaterialGroup_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x18]u8, // 0x8
    };
    pub const CMorphBundleData = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x18]u8, // 0x8
        _: [0x18]u8, // 0x20
    };
    pub const CModelConfigElement_UserPick = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x18]u8, // 0x48
    };
    pub const CSolveIKTargetHandle_t = extern struct {
        _: [0x2]u8, // 0x0
        _: [0x2]u8, // 0x2
    };
    pub const CFootAdjustmentUpdateNode = extern struct {
        pad_0: [0x78]u8, // 0x0
        _: [0x18]u8, // 0x78
        _: [0x4]u8, // 0x90
        _: [0x4]u8, // 0x94
        _: [0x4]u8, // 0x98
        _: [0x4]u8, // 0x9c
        _: [0x4]u8, // 0xa0
        _: [0x4]u8, // 0xa4
        _: [0x1]u8, // 0xa8
        _: [0x7]u8, // 0xa9
    };
    pub const CChoreoUpdateNode = extern struct {
        pad_0: [0x78]u8, // 0x0
    };
    pub const CAimConstraint = extern struct {
        pad_0: [0x60]u8, // 0x0
        _: [0x10]u8, // 0x60
        _: [0x10]u8, // 0x70
    };
    pub const CMaterialDrawDescriptor__RigidMeshPart_t = extern struct {
        _: [0x2]u8, // 0x0
        _: [0x2]u8, // 0x2
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
    };
    pub const CFootFallAnimTag = extern struct {
        pad_0: [0x58]u8, // 0x0
        _: [0x8]u8, // 0x58
    };
    pub const CMaterialDrawDescriptor = extern struct {
        _: [0x4]u8, // 0x0
        _: [0xc]u8, // 0x4
        _: [0x8]u8, // 0x10
        _: [0x8]u8, // 0x18
        _: [0x4]u8, // 0x20
        _: [0x4]u8, // 0x24
        _: [0x4]u8, // 0x28
        _: [0x1]u8, // 0x2c
        _: [0x3]u8, // 0x2d
        _: [0x10]u8, // 0x30
        _: [0x10]u8, // 0x40
        _: [0x4]u8, // 0x50
        _: [0x4]u8, // 0x54
        _: [0x4]u8, // 0x58
        _: [0x4]u8, // 0x5c
        _: [0x68]u8, // 0x60
        _: [0x20]u8, // 0xc8
        _: [0x30]u8, // 0xe8
        _: [0x8]u8, // 0x118
    };
    pub const CNmSkeleton = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x10]u8, // 0x8
        _: [0x18]u8, // 0x18
        _: [0x18]u8, // 0x30
        _: [0x18]u8, // 0x48
        _: [0x4]u8, // 0x60
        _: [0x24]u8, // 0x64
        _: [0x20]u8, // 0x88
        _: [0x10]u8, // 0xa8
        _: [0x10]u8, // 0xb8
        _: [0x18]u8, // 0xc8
        _: [0x18]u8, // 0xe0
        _: [0x8]u8, // 0xf8
    };
    pub const CStepsRemainingMetricEvaluator = extern struct {
        pad_0: [0x50]u8, // 0x0
        _: [0x18]u8, // 0x50
        _: [0x8]u8, // 0x68
    };
    pub const CNmVelocityBlendNode__CDefinition = extern struct {
        pad_0: [0x30]u8, // 0x0
    };
    pub const CNmZeroPoseTask = extern struct {
        pad_0: [0x70]u8, // 0x0
    };
    pub const CNmClothEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
        _: [0x4]u8, // 0x20
        _: [0x4]u8, // 0x24
        _: [0x8]u8, // 0x28
        _: [0x8]u8, // 0x30
        _: [0x8]u8, // 0x38
    };
    pub const CBodyGroupSetting = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
    };
    pub const CVectorQuantizer = extern struct {
        _: [0x18]u8, // 0x0
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
    };
    pub const ParticleNamedValueConfiguration_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x10]u8, // 0x8
        _: [0x8]u8, // 0x18
        _: [0x8]u8, // 0x20
        _: [0x8]u8, // 0x28
        _: [0x8]u8, // 0x30
    };
    pub const CNmVectorCreateNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x2]u8, // 0x10
        _: [0x2]u8, // 0x12
        _: [0x2]u8, // 0x14
        _: [0x2]u8, // 0x16
    };
    pub const CParticleVecInput = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0xc]u8, // 0x14
        _: [0x8]u8, // 0x20
        _: [0x40]u8, // 0x28
        _: [0x4]u8, // 0x68
        _: [0x4]u8, // 0x6c
        _: [0xc]u8, // 0x70
        _: [0x4]u8, // 0x7c
        _: [0x4]u8, // 0x80
        _: [0xc]u8, // 0x84
        _: [0xc]u8, // 0x90
        _: [0xc]u8, // 0x9c
        _: [0x178]u8, // 0xa8
        _: [0x178]u8, // 0x220
        _: [0x178]u8, // 0x398
        _: [0x178]u8, // 0x510
        _: [0x4]u8, // 0x688
        _: [0x4]u8, // 0x68c
        _: [0xc]u8, // 0x690
        _: [0xc]u8, // 0x69c
        _: [0x18]u8, // 0x6a8
        _: [0xc]u8, // 0x6c0
        _: [0xc]u8, // 0x6cc
    };
    pub const CNmStateNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
        _: [0x20]u8, // 0x18
        _: [0x20]u8, // 0x38
        _: [0x20]u8, // 0x58
        _: [0x18]u8, // 0x78
        _: [0x18]u8, // 0x90
        _: [0x2]u8, // 0xa8
        _: [0x2]u8, // 0xaa
        _: [0x2]u8, // 0xac
        _: [0x1]u8, // 0xae
        _: [0x1]u8, // 0xaf
    };
    pub const CNmBoneMaskSelectorNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x2]u8, // 0x10
        _: [0x2]u8, // 0x12
        _: [0x4]u8, // 0x14
        _: [0x18]u8, // 0x18
        _: [0x40]u8, // 0x30
        _: [0x8]u8, // 0x70
    };
    pub const CNmVirtualParameterVectorNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
    };
    pub const CFootCycleMetricEvaluator = extern struct {
        pad_0: [0x50]u8, // 0x0
        _: [0x18]u8, // 0x50
    };
    pub const CNmConstIDNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
    };
    pub const CHitBox = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x8]u8, // 0x10
        _: [0xc]u8, // 0x18
        _: [0xc]u8, // 0x24
        _: [0x4]u8, // 0x30
        _: [0x4]u8, // 0x34
        _: [0x4]u8, // 0x38
        _: [0x1]u8, // 0x3c
        _: [0x3]u8, // 0x3d
        _: [0x4]u8, // 0x40
        _: [0x4]u8, // 0x44
        _: [0x28]u8, // 0x48
    };
    pub const CNmParameterizedSelectorNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x18]u8, // 0x10
        _: [0x10]u8, // 0x28
        _: [0x2]u8, // 0x38
        _: [0x1]u8, // 0x3a
        _: [0x5]u8, // 0x3b
    };
    pub const ModelSkeletonData_t = extern struct {
        _: [0x18]u8, // 0x0
        _: [0x18]u8, // 0x18
        _: [0x18]u8, // 0x30
        _: [0x18]u8, // 0x48
        _: [0x18]u8, // 0x60
        _: [0x18]u8, // 0x78
        _: [0x18]u8, // 0x90
    };
    pub const CNmEvent = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x8]u8, // 0x10
    };
    pub const NmCompressionSettings_t__QuantizationRange_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
    };
    pub const CNmBlendTaskBase = extern struct {
        pad_0: [0x100]u8, // 0x0
    };
    pub const TagSpan_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
    };
    pub const CNmConstTargetNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x30]u8, // 0x10
    };
    pub const CRemapValueUpdateItem = extern struct {
        _: [0x2]u8, // 0x0
        _: [0x2]u8, // 0x2
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
    };
    pub const PermModelDataAnimatedMaterialAttribute_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
    };
    pub const CMotionDataSet = extern struct {
        _: [0x18]u8, // 0x0
        _: [0x8]u8, // 0x18
    };
    pub const ParticleAttributeIndex_t = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const CProductQuantizer = extern struct {
        _: [0x18]u8, // 0x0
        _: [0x8]u8, // 0x18
    };
    pub const CChoiceUpdateNode = extern struct {
        pad_0: [0x60]u8, // 0x0
        _: [0x18]u8, // 0x60
        _: [0x18]u8, // 0x78
        _: [0x18]u8, // 0x90
        _: [0x4]u8, // 0xa8
        _: [0x4]u8, // 0xac
        _: [0x4]u8, // 0xb0
        _: [0x4]u8, // 0xb4
        _: [0x1]u8, // 0xb8
        _: [0x1]u8, // 0xb9
        _: [0x6]u8, // 0xba
    };
    pub const SkeletonAnimCapture_t__Bone_t = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x20]u8, // 0x10
        _: [0x10]u8, // 0x30
    };
    pub const CExpressionActionUpdater = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x2]u8, // 0x18
        _: [0x2]u8, // 0x1a
        _: [0x4]u8, // 0x1c
    };
    pub const CNmFloatMathNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x2]u8, // 0x10
        _: [0x2]u8, // 0x12
        _: [0x1]u8, // 0x14
        _: [0x1]u8, // 0x15
        _: [0x2]u8, // 0x16
        _: [0x8]u8, // 0x18
    };
    pub const CAnimationGraphVisualizerLine = extern struct {
        pad_0: [0x40]u8, // 0x0
        _: [0x10]u8, // 0x40
        _: [0x10]u8, // 0x50
        _: [0x10]u8, // 0x60
    };
    pub const CCycleControlUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        _: [0x4]u8, // 0x70
        _: [0x2]u8, // 0x74
        _: [0x2]u8, // 0x76
    };
    pub const CNmTargetInfoNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x8]u8, // 0x18
    };
    pub const CDampedValueComponentUpdater = extern struct {
        pad_0: [0x30]u8, // 0x0
        _: [0x18]u8, // 0x30
    };
    pub const CBaseConstraint = extern struct {
        pad_0: [0x20]u8, // 0x0
        _: [0x8]u8, // 0x20
        _: [0x10]u8, // 0x28
        _: [0x10]u8, // 0x38
        _: [0x18]u8, // 0x48
    };
    pub const CNmControlParameterFloatNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const BlendItem_t = extern struct {
        _: [0x18]u8, // 0x0
        _: [0x10]u8, // 0x18
        _: [0x4]u8, // 0x28
        _: [0x8]u8, // 0x2c
        _: [0x4]u8, // 0x34
        _: [0x8]u8, // 0x38
    };
    pub const DampedPathMotorInstanceData_t = extern struct {
        _: [0xc]u8, // 0x0
        _: [0x18]u8, // 0xc
        _: [0x4]u8, // 0x24
    };
    pub const CNmIsExternalGraphSlotFilledNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
    };
    pub const CNewParticleEffect = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
        _: [0x8]u8, // 0x18
        _: [0x8]u8, // 0x20
        _: [0x18]u8, // 0x28
        _: [0xc]u8, // 0x40
        _: [0x4]u8, // 0x4c
        _: [0x8]u8, // 0x50
        _: [0x18]u8, // 0x58
        _: [0x4]u8, // 0x70
        _: [0x4]u8, // 0x74
        _: [0x4]u8, // 0x78
        _: [0xc]u8, // 0x7c
        _: [0xc]u8, // 0x88
        _: [0x4]u8, // 0x94
        _: [0x38]u8, // 0x98
        _: [0x8]u8, // 0xd0
    };
    pub const CNmClipNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x2]u8, // 0x10
        _: [0x1]u8, // 0x12
        _: [0x1]u8, // 0x13
        _: [0x2]u8, // 0x14
        _: [0x2]u8, // 0x16
        _: [0x28]u8, // 0x18
        _: [0x4]u8, // 0x40
        _: [0x4]u8, // 0x44
    };
    pub const CNmMaterialAttributeEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x8]u8, // 0x18
        _: [0x8]u8, // 0x20
        _: [0x8]u8, // 0x28
        _: [0x40]u8, // 0x30
        _: [0x40]u8, // 0x70
        _: [0x40]u8, // 0xb0
        _: [0x40]u8, // 0xf0
    };
    pub const TagStatus = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
    };
    pub const CNmBlend1DNode__CDefinition = extern struct {
        pad_0: [0x30]u8, // 0x0
        _: [0x50]u8, // 0x30
    };
    pub const CConcreteAnimParameter = extern struct {
        pad_0: [0x70]u8, // 0x0
        _: [0x4]u8, // 0x70
        _: [0x4]u8, // 0x74
        _: [0x1]u8, // 0x78
        _: [0x1]u8, // 0x79
        _: [0x1]u8, // 0x7a
        _: [0x5]u8, // 0x7b
    };
    pub const CNmBoneWeightList = extern struct {
        _: [0xe0]u8, // 0x0
        _: [0x18]u8, // 0xe0
        _: [0x18]u8, // 0xf8
    };
    pub const CPairedSequenceUpdateNode = extern struct {
        pad_0: [0x78]u8, // 0x0
        _: [0x10]u8, // 0x78
    };
    pub const CModelConfigElement_RandomPick = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x18]u8, // 0x48
        _: [0x20]u8, // 0x60
    };
    pub const CNmReferencePoseTask = extern struct {
        pad_0: [0x70]u8, // 0x0
    };
    pub const CNmScaleNode__CDefinition = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x2]u8, // 0x18
        _: [0x6]u8, // 0x1a
    };
    pub const VPhysXConstraint2_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x2]u8, // 0x4
        _: [0x2]u8, // 0x6
        _: [0xf8]u8, // 0x8
    };
    pub const CConstraintTarget = extern struct {
        pad_0: [0x20]u8, // 0x0
        _: [0x10]u8, // 0x20
        _: [0xc]u8, // 0x30
        _: [0x4]u8, // 0x3c
        _: [0x8]u8, // 0x40
        _: [0x11]u8, // 0x48
        _: [0x7]u8, // 0x59
    };
    pub const SkeletonAnimCapture_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x18]u8, // 0x8
        _: [0x8]u8, // 0x20
        _: [0x8]u8, // 0x28
        _: [0x18]u8, // 0x30
        _: [0x18]u8, // 0x48
        _: [0x4]u8, // 0x60
        _: [0x44]u8, // 0x64
        _: [0x18]u8, // 0xa8
    };
    pub const CAnimUser = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
    };
    pub const CPulse_TempVarBankDefinition = extern struct {
        _: [0x28]u8, // 0x0
    };
    pub const CRagdollComponentUpdater = extern struct {
        pad_0: [0x30]u8, // 0x0
        _: [0x18]u8, // 0x30
        _: [0x18]u8, // 0x48
        _: [0x18]u8, // 0x60
        _: [0x18]u8, // 0x78
        _: [0x18]u8, // 0x90
        _: [0x18]u8, // 0xa8
        _: [0x4]u8, // 0xc0
        _: [0x4]u8, // 0xc4
        _: [0x4]u8, // 0xc8
        _: [0xc]u8, // 0xcc
    };
    pub const ParticleNamedValueSource_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x18]u8, // 0x10
        _: [0x38]u8, // 0x28
    };
    pub const CFootDefinition = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x8]u8, // 0x10
        _: [0xc]u8, // 0x18
        _: [0xc]u8, // 0x24
        _: [0x4]u8, // 0x30
        _: [0x4]u8, // 0x34
        _: [0x4]u8, // 0x38
        _: [0x4]u8, // 0x3c
    };
    pub const CSeqSynthAnimDesc = extern struct {
        _: [0x10]u8, // 0x0
        _: [0xc]u8, // 0x10
        _: [0x8]u8, // 0x1c
        _: [0x2]u8, // 0x24
        _: [0x2]u8, // 0x26
        _: [0x18]u8, // 0x28
    };
    pub const CNmLayerBlendNode__LayerDefinition_t = extern struct {
        _: [0x2]u8, // 0x0
        _: [0x2]u8, // 0x2
        _: [0x2]u8, // 0x4
        _: [0x2]u8, // 0x6
        _: [0x1]u8, // 0x8
        _: [0x1]u8, // 0x9
        _: [0x1]u8, // 0xa
        _: [0x1]u8, // 0xb
    };
    pub const CAnimComponentUpdater = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x8]u8, // 0x18
        _: [0x4]u8, // 0x20
        _: [0x4]u8, // 0x24
        _: [0x8]u8, // 0x28
    };
    pub const CBlend2DUpdateNode = extern struct {
        pad_0: [0x60]u8, // 0x0
        _: [0x18]u8, // 0x60
        _: [0x18]u8, // 0x78
        _: [0x18]u8, // 0x90
        _: [0x18]u8, // 0xa8
        _: [0x18]u8, // 0xc0
        _: [0x4]u8, // 0xd8
        _: [0x4]u8, // 0xdc
        _: [0x4]u8, // 0xe0
        _: [0x4]u8, // 0xe4
        _: [0x4]u8, // 0xe8
        _: [0x4]u8, // 0xec
        _: [0x1]u8, // 0xf0
        _: [0x1]u8, // 0xf1
        _: [0x1]u8, // 0xf2
        _: [0x5]u8, // 0xf3
    };
    pub const CNmVelocityBasedSpeedScaleNode__CDefinition = extern struct {
        pad_0: [0x20]u8, // 0x0
    };
    pub const CNPCPhysicsHull = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
        _: [0xc]u8, // 0x14
        _: [0xc]u8, // 0x20
        _: [0x4]u8, // 0x2c
        _: [0x10]u8, // 0x30
    };
    pub const PermModelExtPart_t = extern struct {
        _: [0x20]u8, // 0x0
        _: [0x8]u8, // 0x20
        _: [0x8]u8, // 0x28
        _: [0x10]u8, // 0x30
    };
    pub const CNmCachedIDNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
    };
    pub const CLeanMatrixUpdateNode = extern struct {
        pad_0: [0x5c]u8, // 0x0
        _: [0x24]u8, // 0x5c
        _: [0x28]u8, // 0x80
        _: [0x18]u8, // 0xa8
        _: [0x4]u8, // 0xc0
        _: [0x4]u8, // 0xc4
        _: [0xc]u8, // 0xc8
        _: [0xc]u8, // 0xd4
        _: [0x4]u8, // 0xe0
        _: [0x4]u8, // 0xe4
        _: [0x8]u8, // 0xe8
    };
    pub const CSymbolAnimParameter = extern struct {
        pad_0: [0x80]u8, // 0x0
        _: [0x8]u8, // 0x80
    };
    pub const CNmFloatCurveEventNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
        _: [0x8]u8, // 0x20
    };
    pub const IAnimationGraphInstance = extern struct {
        pad_0: [0x18]u8, // 0x0
    };
    pub const CNmStateMachineNode__TransitionDefinition_t = extern struct {
        _: [0x2]u8, // 0x0
        _: [0x2]u8, // 0x2
        _: [0x2]u8, // 0x4
        _: [0x2]u8, // 0x6
    };
    pub const CNmFloatSelectorNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x18]u8, // 0x10
        _: [0x20]u8, // 0x28
        _: [0x4]u8, // 0x48
        _: [0x4]u8, // 0x4c
        _: [0x8]u8, // 0x50
    };
    pub const CTargetSelectorUpdateNode = extern struct {
        pad_0: [0x60]u8, // 0x0
        _: [0x8]u8, // 0x60
        _: [0x1c]u8, // 0x68
        _: [0x2]u8, // 0x84
        _: [0x2]u8, // 0x86
        _: [0x2]u8, // 0x88
        _: [0x2]u8, // 0x8a
        _: [0x1]u8, // 0x8c
        _: [0x1]u8, // 0x8d
        _: [0x2]u8, // 0x8e
        _: [0x10]u8, // 0x90
    };
    pub const SlopeData = extern struct {
        _: [0xc]u8, // 0x0
    };
    pub const CHitBoxSetList = extern struct {
        _: [0x18]u8, // 0x0
    };
    pub const CNmIsInactiveBranchConditionNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const MotionDBIndex = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const CDirectPlaybackTagData = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x18]u8, // 0x8
    };
    pub const CParticleCollectionVecInput = extern struct {
        pad_0: [0x6d8]u8, // 0x0
    };
    pub const CNmGraphEventConditionNode__Condition_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
    };
    pub const CNmFloatRemapNode__RemapRange_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
    };
    pub const CNmCurrentSyncEventIDNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
    };
    pub const CNmStateCompletedConditionNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x2]u8, // 0x10
        _: [0x2]u8, // 0x12
        _: [0x4]u8, // 0x14
    };
    pub const CNmCameraFOVEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x40]u8, // 0x18
    };
    pub const CNmTargetWarpEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x1]u8, // 0x18
        _: [0x7]u8, // 0x19
    };
    pub const CParamSpanUpdater = extern struct {
        _: [0x18]u8, // 0x0
    };
    pub const CAnimActionUpdater = extern struct {
        pad_0: [0x18]u8, // 0x0
    };
    pub const CParticleAnimTag = extern struct {
        pad_0: [0x58]u8, // 0x0
        _: [0x8]u8, // 0x58
        _: [0x8]u8, // 0x60
        _: [0x8]u8, // 0x68
        _: [0x1]u8, // 0x70
        _: [0x1]u8, // 0x71
        _: [0x1]u8, // 0x72
        _: [0x5]u8, // 0x73
        _: [0x8]u8, // 0x78
        _: [0x8]u8, // 0x80
        _: [0x8]u8, // 0x88
        _: [0x8]u8, // 0x90
    };
    pub const CCycleBase = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const FollowTargetOpFixedSettings_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x1]u8, // 0xc
        _: [0x3]u8, // 0xd
    };
    pub const CNmIDSwitchNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x2]u8, // 0x10
        _: [0x2]u8, // 0x12
        _: [0x4]u8, // 0x14
        _: [0x8]u8, // 0x18
        _: [0x8]u8, // 0x20
    };
    pub const CNmRootMotionEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x8]u8, // 0x18
    };
    pub const CPulse_PublicOutput = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
        _: [0x10]u8, // 0x18
    };
    pub const CChoiceInstanceData = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0xc]u8, // 0x10
        _: [0x4]u8, // 0x1c
        _: [0xc]u8, // 0x20
        _: [0x8]u8, // 0x2c
    };
    pub const CNmContactAudioTypeVData = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const CNmCameraDOFEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x40]u8, // 0x18
    };
    pub const AnimationSnapshotBase_t = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x30]u8, // 0x10
        _: [0x8]u8, // 0x40
        _: [0x18]u8, // 0x48
        _: [0x18]u8, // 0x60
        _: [0x18]u8, // 0x78
        _: [0x4]u8, // 0x90
        _: [0x4]u8, // 0x94
        _: [0x78]u8, // 0x98
    };
    pub const CEmitTagActionUpdater = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
    };
    pub const DynamicMeshDeformParams_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x1]u8, // 0x8
        _: [0x1]u8, // 0x9
        _: [0x1]u8, // 0xa
        _: [0x1]u8, // 0xb
    };
    pub const CNmTimeConditionNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x2]u8, // 0x10
        _: [0x2]u8, // 0x12
        _: [0x4]u8, // 0x14
        _: [0x1]u8, // 0x18
        _: [0x7]u8, // 0x19
    };
    pub const CNmSyncEventIndexConditionNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x2]u8, // 0x10
        _: [0x2]u8, // 0x12
        _: [0x4]u8, // 0x14
    };
    pub const CAnimStateMachineUpdater = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x18]u8, // 0x8
        _: [0x30]u8, // 0x20
        _: [0x8]u8, // 0x50
    };
    pub const CUnaryUpdateNode = extern struct {
        pad_0: [0x60]u8, // 0x0
        _: [0x10]u8, // 0x60
    };
    pub const CNmIDToFloatNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x30]u8, // 0x18
        _: [0x20]u8, // 0x48
    };
    pub const PlayerInputMotorInstanceData_t = extern struct {
        _: [0xc]u8, // 0x0
        _: [0xc]u8, // 0xc
        _: [0x10]u8, // 0x18
    };
    pub const CSelectorUpdateNode = extern struct {
        pad_0: [0x60]u8, // 0x0
        _: [0x18]u8, // 0x60
        _: [0x1c]u8, // 0x78
        _: [0x8]u8, // 0x94
        _: [0x8]u8, // 0x9c
        _: [0x4]u8, // 0xa4
        _: [0x4]u8, // 0xa8
        _: [0x4]u8, // 0xac
        _: [0x1]u8, // 0xb0
        _: [0x1]u8, // 0xb1
        _: [0x6]u8, // 0xb2
    };
    pub const NmPercent_t = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const CStateMachineComponentUpdater = extern struct {
        pad_0: [0x30]u8, // 0x0
        _: [0x58]u8, // 0x30
    };
    pub const CAnimUpdateNodeRef = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
    };
    pub const CPulse_OutputConnection = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x10]u8, // 0x10
        _: [0x10]u8, // 0x20
        _: [0x10]u8, // 0x30
    };
    pub const CPhysSurfaceProperties = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x4]u8, // 0x8
        _: [0xc]u8, // 0xc
        _: [0x8]u8, // 0x18
        _: [0x8]u8, // 0x20
        _: [0x18]u8, // 0x28
        _: [0x8]u8, // 0x40
        _: [0x60]u8, // 0x48
        _: [0x20]u8, // 0xa8
    };
    pub const CNmBoneMaskValueNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const CSeqPoseParamDesc = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
    };
    pub const CModelConfigElement_SetBodygroup = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x8]u8, // 0x48
        _: [0x8]u8, // 0x50
    };
    pub const CAnimMovement = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
        _: [0xc]u8, // 0x14
        _: [0xc]u8, // 0x20
    };
    pub const CParticleRemapFloatInput = extern struct {
        pad_0: [0x178]u8, // 0x0
    };
    pub const FollowAttachmentData = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
    };
    pub const FootStepTrigger = extern struct {
        _: [0x18]u8, // 0x0
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
    };
    pub const CNmSyncTrack__EventMarker_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
    };
    pub const CPathMetricEvaluator = extern struct {
        pad_0: [0x50]u8, // 0x0
        _: [0x18]u8, // 0x50
        _: [0x4]u8, // 0x68
        _: [0x4]u8, // 0x6c
        _: [0x8]u8, // 0x70
    };
    pub const CFootLockUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        _: [0x70]u8, // 0x70
        _: [0x18]u8, // 0xe0
        _: [0x18]u8, // 0xf8
        _: [0x18]u8, // 0x110
        _: [0x4]u8, // 0x128
        _: [0x4]u8, // 0x12c
        _: [0x4]u8, // 0x130
        _: [0x4]u8, // 0x134
        _: [0x4]u8, // 0x138
        _: [0x4]u8, // 0x13c
        _: [0x4]u8, // 0x140
        _: [0x4]u8, // 0x144
        _: [0x4]u8, // 0x148
        _: [0x4]u8, // 0x14c
        _: [0x1]u8, // 0x150
        _: [0x1]u8, // 0x151
        _: [0x1]u8, // 0x152
        _: [0x1]u8, // 0x153
        _: [0x1]u8, // 0x154
        _: [0x3]u8, // 0x155
    };
    pub const CNmOrientationWarpEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
    };
    pub const CNmIDValueNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const PulseGraphExecutionHistoryNodeDesc_t = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x10]u8, // 0x10
    };
    pub const JiggleBoneSettings_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0xc]u8, // 0x10
        _: [0xc]u8, // 0x1c
        _: [0x4]u8, // 0x28
    };
    pub const CJumpHelperUpdateNode = extern struct {
        pad_0: [0xb0]u8, // 0x0
        _: [0x4]u8, // 0xb0
        _: [0xc]u8, // 0xb4
        _: [0x4]u8, // 0xc0
        _: [0x4]u8, // 0xc4
        _: [0x4]u8, // 0xc8
        _: [0x4]u8, // 0xcc
        _: [0x3]u8, // 0xd0
        _: [0x5]u8, // 0xd3
    };
    pub const CNmControlParameterBoolNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const CNmChainLookatTask = extern struct {
        pad_0: [0x120]u8, // 0x0
    };
    pub const FootLockPoseOpFixedSettings = extern struct {
        _: [0x18]u8, // 0x0
        _: [0x18]u8, // 0x18
        _: [0x4]u8, // 0x30
        _: [0x4]u8, // 0x34
        _: [0x1]u8, // 0x38
        _: [0x1]u8, // 0x39
        _: [0x1]u8, // 0x3a
        _: [0x1]u8, // 0x3b
        _: [0x4]u8, // 0x3c
        _: [0x4]u8, // 0x40
        _: [0x4]u8, // 0x44
        _: [0x4]u8, // 0x48
        _: [0x4]u8, // 0x4c
        _: [0x4]u8, // 0x50
        _: [0x4]u8, // 0x54
        _: [0x4]u8, // 0x58
        _: [0x4]u8, // 0x5c
        _: [0x8]u8, // 0x60
    };
    pub const CBoneVelocityMetricEvaluator = extern struct {
        pad_0: [0x50]u8, // 0x0
        _: [0x8]u8, // 0x50
    };
    pub const CWarpSectionAnimTag = extern struct {
        pad_0: [0x50]u8, // 0x0
        _: [0x1]u8, // 0x50
        _: [0x7]u8, // 0x51
    };
    pub const SelectorInstanceData_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0xc]u8, // 0x8
        _: [0x4]u8, // 0x14
        _: [0x14]u8, // 0x18
    };
    pub const CModelConfigElement_RandomColor = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x18]u8, // 0x48
    };
    pub const CFootMotion = extern struct {
        _: [0x18]u8, // 0x0
        _: [0x8]u8, // 0x18
        _: [0x8]u8, // 0x20
    };
    pub const CJiggleBoneUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        _: [0x20]u8, // 0x70
    };
    pub const CNmConstVectorNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x10]u8, // 0x10
    };
    pub const MoodAnimation_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
    };
    pub const CLODComponentUpdater = extern struct {
        pad_0: [0x30]u8, // 0x0
        _: [0x8]u8, // 0x30
    };
    pub const CNmIsTargetSetNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
    };
    pub const CPhysSurfacePropertiesVehicle = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
    };
    pub const CAnimDataChannelDesc = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x10]u8, // 0x10
        _: [0x4]u8, // 0x20
        _: [0x4]u8, // 0x24
        _: [0x10]u8, // 0x28
        _: [0x10]u8, // 0x38
        _: [0x18]u8, // 0x48
        _: [0x18]u8, // 0x60
        _: [0x18]u8, // 0x78
    };
    pub const CPairedSequenceComponentUpdater = extern struct {
        pad_0: [0x38]u8, // 0x0
    };
    pub const CNmParticleEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
        _: [0x8]u8, // 0x20
        _: [0x8]u8, // 0x28
        _: [0x8]u8, // 0x30
        _: [0x1]u8, // 0x38
        _: [0x1]u8, // 0x39
        _: [0x6]u8, // 0x3a
        _: [0x8]u8, // 0x40
        _: [0x8]u8, // 0x48
        _: [0x8]u8, // 0x50
        _: [0x8]u8, // 0x58
        _: [0x8]u8, // 0x60
        _: [0x8]u8, // 0x68
    };
    pub const MotionSelection = extern struct {
        pad_0: [0x24]u8, // 0x0
        _: [0xc]u8, // 0x24
        _: [0xc]u8, // 0x30
        _: [0xc]u8, // 0x3c
        _: [0xc]u8, // 0x48
        _: [0x4]u8, // 0x54
    };
    pub const CMorphRectData = extern struct {
        _: [0x2]u8, // 0x0
        _: [0x2]u8, // 0x2
        _: [0x4]u8, // 0x4
        _: [0x8]u8, // 0x8
        _: [0x18]u8, // 0x10
    };
    pub const CAnimFoot = extern struct {
        _: [0x8]u8, // 0x0
        _: [0xc]u8, // 0x8
        _: [0xc]u8, // 0x14
        _: [0x4]u8, // 0x20
        _: [0x4]u8, // 0x24
    };
    pub const CParentConstraint = extern struct {
        pad_0: [0x60]u8, // 0x0
    };
    pub const CNmCachedVectorNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
    };
    pub const CNmStateNode__TimedEvent_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
    };
    pub const CFootPositionMetricEvaluator = extern struct {
        pad_0: [0x50]u8, // 0x0
        _: [0x18]u8, // 0x50
        _: [0x8]u8, // 0x68
    };
    pub const CParticleVariableRef = extern struct {
        _: [0x38]u8, // 0x0
        _: [0x18]u8, // 0x38
    };
    pub const CMoverInstanceData = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x18]u8, // 0x4
        _: [0x4]u8, // 0x1c
        _: [0xc]u8, // 0x20
    };
    pub const HSequence = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const CDampedValueUpdateItem = extern struct {
        _: [0x20]u8, // 0x0
        _: [0x2]u8, // 0x20
        _: [0x6]u8, // 0x22
    };
    pub const CAnimLocalHierarchy = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x10]u8, // 0x10
        _: [0x4]u8, // 0x20
        _: [0x4]u8, // 0x24
        _: [0x4]u8, // 0x28
        _: [0x4]u8, // 0x2c
    };
    pub const CBlendUpdateNode = extern struct {
        pad_0: [0x60]u8, // 0x0
        _: [0x18]u8, // 0x60
        _: [0x18]u8, // 0x78
        _: [0x1c]u8, // 0x90
        _: [0x4]u8, // 0xac
        _: [0x4]u8, // 0xb0
        _: [0x4]u8, // 0xb4
        _: [0x18]u8, // 0xb8
        _: [0x4]u8, // 0xd0
        _: [0x1]u8, // 0xd4
        _: [0x1]u8, // 0xd5
        _: [0x1]u8, // 0xd6
        _: [0x1]u8, // 0xd7
        _: [0x8]u8, // 0xd8
    };
    pub const PulseGraphExecutionHistoryEntry_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x10]u8, // 0x8
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
        _: [0x10]u8, // 0x20
        _: [0x8]u8, // 0x30
    };
    pub const CQuaternionAnimParameter = extern struct {
        pad_0: [0x80]u8, // 0x0
        _: [0x10]u8, // 0x80
        _: [0x10]u8, // 0x90
    };
    pub const PermModelData_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x58]u8, // 0x8
        _: [0x18]u8, // 0x60
        _: [0x18]u8, // 0x78
        _: [0x18]u8, // 0x90
        _: [0x18]u8, // 0xa8
        _: [0x18]u8, // 0xc0
        _: [0x18]u8, // 0xd8
        _: [0x18]u8, // 0xf0
        _: [0x18]u8, // 0x108
        _: [0x18]u8, // 0x120
        _: [0x18]u8, // 0x138
        _: [0x18]u8, // 0x150
        _: [0x18]u8, // 0x168
        _: [0x8]u8, // 0x180
        _: [0xa8]u8, // 0x188
        _: [0x18]u8, // 0x230
        _: [0x18]u8, // 0x248
        _: [0x18]u8, // 0x260
        _: [0x8]u8, // 0x278
        _: [0x18]u8, // 0x280
        _: [0x18]u8, // 0x298
        _: [0x18]u8, // 0x2b0
        _: [0x18]u8, // 0x2c8
        _: [0x18]u8, // 0x2e0
    };
    pub const PulseCursorYieldToken_t = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const CNmSampleTask = extern struct {
        pad_0: [0x80]u8, // 0x0
    };
    pub const CFollowPathInstanceData = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0xc]u8, // 0x10
        _: [0x8]u8, // 0x1c
    };
    pub const CStaticPoseCacheBuilder = extern struct {
        pad_0: [0x38]u8, // 0x0
    };
    pub const ModelMeshBufferData_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x1]u8, // 0xc
        _: [0x1]u8, // 0xd
        _: [0x1]u8, // 0xe
        _: [0x1]u8, // 0xf
        _: [0x1]u8, // 0x10
        _: [0x1]u8, // 0x11
        _: [0x1]u8, // 0x12
        _: [0x1]u8, // 0x13
        _: [0x4]u8, // 0x14
        _: [0x18]u8, // 0x18
    };
    pub const CSequenceGroupData = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x10]u8, // 0x10
        _: [0x8]u8, // 0x20
        _: [0x18]u8, // 0x28
        _: [0x18]u8, // 0x40
        _: [0x18]u8, // 0x58
        _: [0x18]u8, // 0x70
        _: [0x18]u8, // 0x88
        _: [0x18]u8, // 0xa0
        _: [0x18]u8, // 0xb8
        _: [0x18]u8, // 0xd0
        _: [0x10]u8, // 0xe8
        _: [0x18]u8, // 0xf8
        _: [0x10]u8, // 0x110
        _: [0x18]u8, // 0x120
    };
    pub const CStateMachineUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        _: [0x58]u8, // 0x70
        _: [0x18]u8, // 0xc8
        _: [0x1c]u8, // 0xe0
        _: [0x1]u8, // 0xfc
        _: [0x1]u8, // 0xfd
        _: [0x2]u8, // 0xfe
    };
    pub const CNmIDBasedSelectorNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x18]u8, // 0x10
        _: [0x30]u8, // 0x28
        _: [0x2]u8, // 0x58
        _: [0x2]u8, // 0x5a
        _: [0x4]u8, // 0x5c
    };
    pub const CAimMatrixUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        _: [0xf8]u8, // 0x70
        _: [0x4]u8, // 0x168
        _: [0x4]u8, // 0x16c
        _: [0x4]u8, // 0x170
        _: [0x1]u8, // 0x174
        _: [0xb]u8, // 0x175
    };
    pub const SkeletonAnimCapture_t__Frame_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x1c]u8, // 0x4
        _: [0x20]u8, // 0x20
        _: [0x8]u8, // 0x40
        _: [0x18]u8, // 0x48
        _: [0x18]u8, // 0x60
        _: [0x18]u8, // 0x78
        _: [0x18]u8, // 0x90
        _: [0x18]u8, // 0xa8
    };
    pub const CModelConfigElement_Command = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x8]u8, // 0x48
        _: [0x10]u8, // 0x50
    };
    pub const TargetSelectorInstanceData_t = extern struct {
        _: [0x1c]u8, // 0x0
        _: [0x14]u8, // 0x1c
    };
    pub const CAnimEventDefinition = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x10]u8, // 0x18
        _: [0x10]u8, // 0x28
        _: [0x8]u8, // 0x38
    };
    pub const CNmRootMotionData = extern struct {
        _: [0x18]u8, // 0x0
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
        _: [0x10]u8, // 0x20
        _: [0x20]u8, // 0x30
    };
    pub const CPulseGraphExecutionHistory = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x18]u8, // 0x10
        _: [0x28]u8, // 0x28
        _: [0x28]u8, // 0x50
    };
    pub const AnimScriptHandle = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const CFlexOp = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
    };
    pub const CHitReactUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        _: [0x4c]u8, // 0x70
        _: [0x2]u8, // 0xbc
        _: [0x2]u8, // 0xbe
        _: [0x2]u8, // 0xc0
        _: [0x2]u8, // 0xc2
        _: [0x4]u8, // 0xc4
        _: [0x4]u8, // 0xc8
        _: [0x4]u8, // 0xcc
    };
    pub const CLookAtUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        _: [0xd8]u8, // 0x70
        _: [0x4]u8, // 0x148
        _: [0x2]u8, // 0x14c
        _: [0x2]u8, // 0x14e
        _: [0x1]u8, // 0x150
        _: [0xf]u8, // 0x151
    };
    pub const CAnimBone = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0xc]u8, // 0x14
        _: [0x10]u8, // 0x20
        _: [0x4]u8, // 0x30
        _: [0x10]u8, // 0x34
        _: [0x4]u8, // 0x44
    };
    pub const CAnimParameterManagerUpdater = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x18]u8, // 0x18
        _: [0x20]u8, // 0x30
        _: [0x20]u8, // 0x50
        _: [0x18]u8, // 0x70
        _: [0x18]u8, // 0x88
        _: [0x60]u8, // 0xa0
    };
    pub const BoneDemoCaptureSettings_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
    };
    pub const PairedSequenceData = extern struct {
        _: [0x100]u8, // 0x0
    };
    pub const CBoneConstraintPoseSpaceMorph__Input_t = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x18]u8, // 0x10
    };
    pub const MoodAnimationLayer_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x1]u8, // 0x8
        _: [0x7]u8, // 0x9
        _: [0x18]u8, // 0x10
        _: [0x8]u8, // 0x28
        _: [0x8]u8, // 0x30
        _: [0x4]u8, // 0x38
        _: [0x8]u8, // 0x3c
        _: [0x8]u8, // 0x44
        _: [0x8]u8, // 0x4c
        _: [0x4]u8, // 0x54
        _: [0x8]u8, // 0x58
    };
    pub const CSpeedScaleUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        _: [0x8]u8, // 0x70
    };
    pub const CSequenceTagSpans = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x18]u8, // 0x8
    };
    pub const CModelConfigElement_SetBodygroupOnAttachedModels = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x8]u8, // 0x48
        _: [0x8]u8, // 0x50
    };
    pub const CCurrentVelocityMetricEvaluator = extern struct {
        pad_0: [0x50]u8, // 0x0
    };
    pub const CNmBoolValueNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const CAnimReplayFrame = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x18]u8, // 0x10
        _: [0x18]u8, // 0x28
        _: [0x20]u8, // 0x40
        _: [0x20]u8, // 0x60
        _: [0x10]u8, // 0x80
    };
    pub const CNmTransitionEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x8]u8, // 0x18
        _: [0x8]u8, // 0x20
    };
    pub const CNmFloatCurveEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x8]u8, // 0x18
        _: [0x40]u8, // 0x20
    };
    pub const CParticleTransformInput = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
        _: [0x40]u8, // 0x18
        _: [0x1]u8, // 0x58
        _: [0x1]u8, // 0x59
        _: [0x2]u8, // 0x5a
        _: [0x4]u8, // 0x5c
        _: [0x4]u8, // 0x60
        _: [0x4]u8, // 0x64
    };
    pub const CPathAnimMotorUpdaterBase = extern struct {
        pad_0: [0x20]u8, // 0x0
        _: [0x8]u8, // 0x20
    };
    pub const PGDInstruction_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x2]u8, // 0x8
        _: [0x2]u8, // 0xa
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
        _: [0x2]u8, // 0x20
        _: [0x2]u8, // 0x22
        _: [0x2]u8, // 0x24
        _: [0x12]u8, // 0x26
    };
    pub const CNmFootstepEventPercentageThroughNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x2]u8, // 0x10
        _: [0x2]u8, // 0x12
        _: [0x4]u8, // 0x14
    };
    pub const AimCameraOpFixedSettings_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x18]u8, // 0x18
    };
    pub const SkeletonAnimCapture_t__Camera_t = extern struct {
        _: [0x20]u8, // 0x0
        _: [0x10]u8, // 0x20
    };
    pub const CNmGraphEventConditionNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x68]u8, // 0x18
    };
    pub const CFollowAttachmentUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        _: [0xa0]u8, // 0x70
    };
    pub const CMovementComponentUpdater = extern struct {
        pad_0: [0x30]u8, // 0x0
        _: [0x18]u8, // 0x30
        _: [0x20]u8, // 0x48
        _: [0x4]u8, // 0x68
        _: [0x4]u8, // 0x6c
        _: [0x1]u8, // 0x70
        _: [0x1]u8, // 0x71
        _: [0x1]u8, // 0x72
        _: [0x45]u8, // 0x73
    };
    pub const CModelConfigElement_SetMaterialGroup = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x8]u8, // 0x48
    };
    pub const IParticleEffect = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const CFutureFacingMetricEvaluator = extern struct {
        pad_0: [0x50]u8, // 0x0
        _: [0x4]u8, // 0x50
        _: [0x4]u8, // 0x54
    };
    pub const CNmIDBasedClipSelectorNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x18]u8, // 0x10
        _: [0x30]u8, // 0x28
        _: [0x2]u8, // 0x58
        _: [0x2]u8, // 0x5a
        _: [0x4]u8, // 0x5c
    };
    pub const CLeanMatrixInstanceData = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x8]u8, // 0x4
    };
    pub const NmCompressionSettings_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x8]u8, // 0x10
        _: [0x8]u8, // 0x18
        _: [0x10]u8, // 0x20
        _: [0x10]u8, // 0x30
        _: [0x1]u8, // 0x40
        _: [0x1]u8, // 0x41
        _: [0xe]u8, // 0x42
    };
    pub const CPulse_Variable = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
        _: [0x18]u8, // 0x18
        _: [0x14]u8, // 0x30
        _: [0x4]u8, // 0x44
        _: [0x1]u8, // 0x48
        _: [0x3]u8, // 0x49
        _: [0x4]u8, // 0x4c
        _: [0x10]u8, // 0x50
    };
    pub const PARTICLE_EHANDLE__ = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const CAddUpdateNode = extern struct {
        pad_0: [0x94]u8, // 0x0
        _: [0x4]u8, // 0x94
        _: [0x1]u8, // 0x98
        _: [0x1]u8, // 0x99
        _: [0x1]u8, // 0x9a
        _: [0x5]u8, // 0x9b
    };
    pub const CAnimEnum = extern struct {
        _: [0x1]u8, // 0x0
    };
    pub const CDemoSettingsComponentUpdater = extern struct {
        pad_0: [0x30]u8, // 0x0
        _: [0x80]u8, // 0x30
    };
    pub const CAnimDecoder = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
    };
    pub const CNmCachedTargetNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
    };
    pub const CPerParticleFloatInput = extern struct {
        pad_0: [0x178]u8, // 0x0
    };
    pub const CNmConstBoolNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
    };
    pub const CNmBitFlags = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const CFootStride = extern struct {
        _: [0x40]u8, // 0x0
        _: [0x18]u8, // 0x40
    };
    pub const CSceneObjectData__RTProxyDrawDescriptor_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x120]u8, // 0x8
        _: [0x30]u8, // 0x128
        _: [0x1]u8, // 0x158
        _: [0x1]u8, // 0x159
        _: [0x2]u8, // 0x15a
        _: [0x2]u8, // 0x15c
        _: [0x1]u8, // 0x15e
        _: [0x1]u8, // 0x15f
        _: [0x2]u8, // 0x160
        _: [0x2]u8, // 0x162
        _: [0x4]u8, // 0x164
    };
    pub const CNmLegacyEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x8]u8, // 0x18
        _: [0x30]u8, // 0x20
    };
    pub const CStateNodeStateData = extern struct {
        _: [0x18]u8, // 0x0
    };
    pub const CFootstepLandedAnimTag = extern struct {
        pad_0: [0x58]u8, // 0x0
        _: [0x8]u8, // 0x58
        _: [0x8]u8, // 0x60
        _: [0x8]u8, // 0x68
        _: [0x8]u8, // 0x70
        _: [0x8]u8, // 0x78
    };
    pub const CEnumAnimParameter = extern struct {
        pad_0: [0x88]u8, // 0x0
        _: [0x8]u8, // 0x88
        _: [0x18]u8, // 0x90
        _: [0x30]u8, // 0xa8
    };
    pub const CHandshakeAnimTagBase = extern struct {
        pad_0: [0x50]u8, // 0x0
        _: [0x8]u8, // 0x50
    };
    pub const AnimTagID = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const CWayPointHelperInstanceData = extern struct {
        _: [0xc]u8, // 0x0
        _: [0xc]u8, // 0xc
        _: [0xc]u8, // 0x18
        _: [0x4]u8, // 0x24
    };
    pub const CAnimFrameSegment = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x8]u8, // 0x8
        _: [0x10]u8, // 0x10
    };
    pub const CSlopeComponentUpdater = extern struct {
        pad_0: [0x34]u8, // 0x0
        _: [0x4]u8, // 0x34
        _: [0x2]u8, // 0x38
        _: [0x2]u8, // 0x3a
        _: [0x2]u8, // 0x3c
        _: [0x2]u8, // 0x3e
        _: [0x2]u8, // 0x40
        _: [0x6]u8, // 0x42
    };
    pub const CAnimInputDamping = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x8]u8, // 0x10
    };
    pub const CHitBoxSet = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x18]u8, // 0x10
        _: [0x8]u8, // 0x28
    };
    pub const ChainToSolveData_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0xc]u8, // 0x4
        _: [0x28]u8, // 0x10
        _: [0x4]u8, // 0x38
        _: [0x4]u8, // 0x3c
        _: [0x10]u8, // 0x40
    };
    pub const CConstraintSlave = extern struct {
        _: [0x10]u8, // 0x0
        _: [0xc]u8, // 0x10
        _: [0x4]u8, // 0x1c
        _: [0x8]u8, // 0x20
        _: [0x28]u8, // 0x28
    };
    pub const PulseRuntimeOutputIndex_t = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const CFootCycleDefinition = extern struct {
        _: [0xc]u8, // 0x0
        _: [0xc]u8, // 0xc
        _: [0x4]u8, // 0x18
        _: [0xc]u8, // 0x1c
        _: [0x4]u8, // 0x28
        _: [0x4]u8, // 0x2c
        _: [0x4]u8, // 0x30
        _: [0x4]u8, // 0x34
        _: [0x4]u8, // 0x38
    };
    pub const CVirtualAnimParameter = extern struct {
        pad_0: [0x70]u8, // 0x0
        _: [0x8]u8, // 0x70
        _: [0x8]u8, // 0x78
    };
    pub const CMotionMetricEvaluator = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x18]u8, // 0x18
        _: [0x18]u8, // 0x30
        _: [0x4]u8, // 0x48
        _: [0x4]u8, // 0x4c
    };
    pub const CFutureVelocityMetricEvaluator = extern struct {
        pad_0: [0x50]u8, // 0x0
        _: [0x4]u8, // 0x50
        _: [0x4]u8, // 0x54
        _: [0x4]u8, // 0x58
        _: [0x4]u8, // 0x5c
    };
    pub const CNmSkeleton__SecondarySkeleton_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
    };
    pub const CAnimUpdateNodeBase = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x30]u8, // 0x18
        _: [0x8]u8, // 0x48
        _: [0x8]u8, // 0x50
    };
    pub const CSetParameterActionUpdater = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x2]u8, // 0x18
        _: [0x16]u8, // 0x1a
    };
    pub const CNmFixedWeightBoneMaskNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
    };
    pub const SkeletonAnimCapture_t__FrameStamp_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x1]u8, // 0x8
        _: [0x3]u8, // 0x9
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x4]u8, // 0x18
    };
    pub const CPulse_DomainValue = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x20]u8, // 0x10
    };
    pub const CBonePositionMetricEvaluator = extern struct {
        pad_0: [0x50]u8, // 0x0
        _: [0x8]u8, // 0x50
    };
    pub const CRenderBufferBinding = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x10]u8, // 0x10
    };
    pub const CParticleCollectionRendererFloatInput = extern struct {
        pad_0: [0x178]u8, // 0x0
    };
    pub const CNmParameterizedBlendNode__Parameterization_t = extern struct {
        _: [0x48]u8, // 0x0
        _: [0x8]u8, // 0x48
    };
    pub const CNmEntityAttributeIntEvent = extern struct {
        pad_0: [0x38]u8, // 0x0
        _: [0x8]u8, // 0x38
    };
    pub const CNmNotNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
    };
    pub const CMeshletDescriptor = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
        _: [0x1]u8, // 0x14
        _: [0x1]u8, // 0x15
        _: [0x2]u8, // 0x16
    };
    pub const CMorphSetData = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x18]u8, // 0x18
        _: [0x18]u8, // 0x30
        _: [0x8]u8, // 0x48
        _: [0x18]u8, // 0x50
        _: [0x18]u8, // 0x68
        _: [0x18]u8, // 0x80
    };
    pub const CNmAndNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x10]u8, // 0x10
    };
    pub const CMorphConstraint = extern struct {
        pad_0: [0x60]u8, // 0x0
        _: [0x8]u8, // 0x60
        _: [0x4]u8, // 0x68
        _: [0x4]u8, // 0x6c
        _: [0x10]u8, // 0x70
    };
    pub const CClothSettingsAnimTag = extern struct {
        pad_0: [0x58]u8, // 0x0
        _: [0x4]u8, // 0x58
        _: [0x4]u8, // 0x5c
        _: [0x8]u8, // 0x60
        _: [0x8]u8, // 0x68
    };
    pub const CAnimDesc_Flag = extern struct {
        _: [0x1]u8, // 0x0
        _: [0x1]u8, // 0x1
        _: [0x1]u8, // 0x2
        _: [0x1]u8, // 0x3
        _: [0x1]u8, // 0x4
        _: [0x1]u8, // 0x5
        _: [0x1]u8, // 0x6
        _: [0x1]u8, // 0x7
    };
    pub const CNmBlend2DNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x18]u8, // 0x10
        _: [0x58]u8, // 0x28
        _: [0x28]u8, // 0x80
        _: [0x18]u8, // 0xa8
        _: [0x2]u8, // 0xc0
        _: [0x2]u8, // 0xc2
        _: [0x4]u8, // 0xc4
    };
    pub const CNmFloatChannelData__ChannelSettings_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x4]u8, // 0x8
    };
    pub const CBlendCurve = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
    };
    pub const CNmSkeleton__ContactConfig_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x4]u8, // 0x8
        _: [0xc]u8, // 0xc
        _: [0x8]u8, // 0x18
        _: [0x18]u8, // 0x20
    };
    pub const CNmGraphNode__CDefinition = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
    };
    pub const CAnimationGraphVisualizerSphere = extern struct {
        pad_0: [0x40]u8, // 0x0
        _: [0x10]u8, // 0x40
        _: [0x4]u8, // 0x50
        _: [0xc]u8, // 0x54
    };
    pub const CNmClip__ModelSpaceSamplingChainLink_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
    };
    pub const CAnimUserDifference = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
    };
    pub const CNmDurationScaleNode__CDefinition = extern struct {
        pad_0: [0x20]u8, // 0x0
    };
    pub const CTransitionUpdateData = extern struct {
        _: [0x1]u8, // 0x0
        _: [0x2]u8, // 0x1
    };
    pub const PulseRuntimeBlackboardReferenceIndex_t = extern struct {
        _: [0x2]u8, // 0x0
    };
    pub const CNmContactEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x8]u8, // 0x18
        _: [0x8]u8, // 0x20
        _: [0xc]u8, // 0x28
        _: [0x4]u8, // 0x34
        _: [0x18]u8, // 0x38
    };
    pub const CMovementHandshakeAnimTag = extern struct {
        pad_0: [0x58]u8, // 0x0
    };
    pub const CBoneConstraintPoseSpaceBone__Input_t = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x18]u8, // 0x10
    };
    pub const CSeqMultiFetch = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x18]u8, // 0x8
        _: [0x8]u8, // 0x20
        _: [0x8]u8, // 0x28
        _: [0x18]u8, // 0x30
        _: [0x18]u8, // 0x48
        _: [0x4]u8, // 0x60
        _: [0x1]u8, // 0x64
        _: [0x3]u8, // 0x65
        _: [0x8]u8, // 0x68
    };
    pub const CPhysSurfacePropertiesSoundNames = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x8]u8, // 0x10
        _: [0x8]u8, // 0x18
        _: [0x8]u8, // 0x20
        _: [0x8]u8, // 0x28
        _: [0x8]u8, // 0x30
        _: [0x8]u8, // 0x38
        _: [0x8]u8, // 0x40
        _: [0x8]u8, // 0x48
        _: [0x8]u8, // 0x50
        _: [0x8]u8, // 0x58
    };
    pub const NmBoneMaskSetDefinition_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x110]u8, // 0x8
        _: [0x10]u8, // 0x118
    };
    pub const CAudioAnimTag = extern struct {
        pad_0: [0x58]u8, // 0x0
        _: [0x8]u8, // 0x58
        _: [0x8]u8, // 0x60
        _: [0x4]u8, // 0x68
        _: [0x1]u8, // 0x6c
        _: [0x1]u8, // 0x6d
        _: [0x1]u8, // 0x6e
        _: [0x1]u8, // 0x6f
    };
    pub const CTurnHelperUpdateNode = extern struct {
        pad_0: [0x74]u8, // 0x0
        _: [0x4]u8, // 0x74
        _: [0x4]u8, // 0x78
        _: [0x4]u8, // 0x7c
        _: [0x4]u8, // 0x80
        _: [0x4]u8, // 0x84
        _: [0x8]u8, // 0x88
    };
    pub const CAnimationGroup = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
        _: [0x48]u8, // 0x18
        _: [0x18]u8, // 0x60
        _: [0x18]u8, // 0x78
        _: [0x8]u8, // 0x90
        _: [0x78]u8, // 0x98
        _: [0x18]u8, // 0x110
        _: [0x20]u8, // 0x128
    };
    pub const CPulse_TempVarInfo = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x18]u8, // 0x10
        _: [0x4]u8, // 0x28
        _: [0x4]u8, // 0x2c
    };
    pub const NmContactAudioInfo_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x8]u8, // 0x10
    };
    pub const NmSyncTrackTime_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
    };
    pub const CNmClip = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x10]u8, // 0x10
        _: [0x18]u8, // 0x20
        _: [0x40]u8, // 0x38
        _: [0x20]u8, // 0x78
        _: [0x28]u8, // 0x98
        _: [0xb0]u8, // 0xc0
        _: [0x50]u8, // 0x170
        _: [0x8]u8, // 0x1c0
        _: [0x18]u8, // 0x1c8
        _: [0x20]u8, // 0x1e0
    };
    pub const CToggleComponentActionUpdater = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
    };
    pub const CNmOverlayBlendTask = extern struct {
        pad_0: [0x100]u8, // 0x0
    };
    pub const CNmSpeedScaleBaseNode__CDefinition = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
    };
    pub const CNmValueNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const CAnimationGraphVisualizerPrimitiveBase = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x4]u8, // 0x8
        _: [0x2c]u8, // 0xc
        _: [0x8]u8, // 0x38
    };
    pub const CBindPoseUpdateNode = extern struct {
        pad_0: [0x60]u8, // 0x0
    };
    pub const NmSyncTrackTimeRange_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
    };
    pub const CAnimationGraphVisualizerText = extern struct {
        pad_0: [0x40]u8, // 0x0
        _: [0x10]u8, // 0x40
        _: [0x8]u8, // 0x50
        _: [0x8]u8, // 0x58
    };
    pub const CFootTrajectory = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0xc]u8, // 0x8
        _: [0x4]u8, // 0x14
        _: [0x8]u8, // 0x18
    };
    pub const CMotionMatchingUpdateNode = extern struct {
        pad_0: [0x58]u8, // 0x0
        _: [0x20]u8, // 0x58
        _: [0x18]u8, // 0x78
        _: [0x50]u8, // 0x90
        _: [0x4]u8, // 0xe0
        _: [0x4]u8, // 0xe4
        _: [0x1]u8, // 0xe8
        _: [0x3]u8, // 0xe9
        _: [0x8]u8, // 0xec
        _: [0x4]u8, // 0xf4
        _: [0x4]u8, // 0xf8
        _: [0x4]u8, // 0xfc
        _: [0x4]u8, // 0x100
        _: [0x4]u8, // 0x104
        _: [0x1]u8, // 0x108
        _: [0x3]u8, // 0x109
        _: [0x4]u8, // 0x10c
        _: [0x8]u8, // 0x110
        _: [0x18]u8, // 0x118
        _: [0x4]u8, // 0x130
        _: [0x4]u8, // 0x134
        _: [0x4]u8, // 0x138
        _: [0x4]u8, // 0x13c
        _: [0x8]u8, // 0x140
    };
    pub const CNmReferencePoseNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const CSeqS1SeqDesc = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x10]u8, // 0x10
        _: [0x70]u8, // 0x20
        _: [0x8]u8, // 0x90
        _: [0x18]u8, // 0x98
        _: [0x18]u8, // 0xb0
        _: [0x8]u8, // 0xc8
        _: [0x10]u8, // 0xd0
        _: [0x10]u8, // 0xe0
        _: [0x18]u8, // 0xf0
        _: [0x18]u8, // 0x108
    };
    pub const CFlexController = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
    };
    pub const SkeletonDemoDb_t = extern struct {
        _: [0x18]u8, // 0x0
        _: [0x18]u8, // 0x18
        _: [0x8]u8, // 0x30
    };
    pub const CNmFloatRangeComparisonNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
        _: [0x2]u8, // 0x18
        _: [0x6]u8, // 0x1a
    };
    pub const CMotionNodeSequence = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0x18]u8, // 0x28
        _: [0x4]u8, // 0x40
        _: [0x4]u8, // 0x44
    };
    pub const CNmTwoBoneIKNode__CDefinition = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x8]u8, // 0x18
        _: [0x2]u8, // 0x20
        _: [0x2]u8, // 0x22
        _: [0x4]u8, // 0x24
        _: [0x1]u8, // 0x28
        _: [0x3]u8, // 0x29
        _: [0x4]u8, // 0x2c
    };
    pub const CNmGraphInstance = extern struct {
        pad_0: [0x3b0]u8, // 0x0
    };
    pub const CFlexDesc = extern struct {
        _: [0x8]u8, // 0x0
    };
    pub const CRenderMesh = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0xc0]u8, // 0x10
        _: [0x10]u8, // 0xd0
        _: [0x118]u8, // 0xe0
        _: [0x1]u8, // 0x1f8
        _: [0x27]u8, // 0x1f9
        _: [0x10]u8, // 0x220
        _: [0x8]u8, // 0x230
    };
    pub const CAnimSkeleton = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x18]u8, // 0x10
        _: [0x18]u8, // 0x28
        _: [0x18]u8, // 0x40
        _: [0x18]u8, // 0x58
        _: [0x18]u8, // 0x70
        _: [0x18]u8, // 0x88
        _: [0x18]u8, // 0xa0
        _: [0x18]u8, // 0xb8
    };
    pub const PulseRuntimeConstantIndex_t = extern struct {
        _: [0x2]u8, // 0x0
    };
    pub const CFootAdjustmentInstanceData = extern struct {
        pad_0: [0xc]u8, // 0x0
        _: [0xc]u8, // 0xc
        _: [0x24]u8, // 0x18
        _: [0xc]u8, // 0x3c
    };
    pub const CNmBodyGroupNode__CDefinition = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x8]u8, // 0x18
        _: [0x30]u8, // 0x20
    };
    pub const CNmTimeControlledClipNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x2]u8, // 0x10
        _: [0x2]u8, // 0x12
        _: [0x2]u8, // 0x14
        _: [0x2]u8, // 0x16
        _: [0x28]u8, // 0x18
    };
    pub const VPhysics2ShapeDef_t = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x10]u8, // 0x10
        _: [0x10]u8, // 0x20
        _: [0x10]u8, // 0x30
        _: [0x10]u8, // 0x40
        _: [0x18]u8, // 0x50
    };
    pub const CNmFloatCurveNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
        _: [0x40]u8, // 0x18
    };
    pub const CAnimationGraphVisualizerAxis = extern struct {
        pad_0: [0x40]u8, // 0x0
        _: [0x20]u8, // 0x40
        _: [0x10]u8, // 0x60
    };
    pub const CTwistConstraint = extern struct {
        pad_0: [0x60]u8, // 0x0
        _: [0x10]u8, // 0x60
        _: [0x10]u8, // 0x70
        _: [0x10]u8, // 0x80
    };
    pub const PulseDocNodeID_t = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const ModelBoneFlexDriverControl_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x8]u8, // 0x18
    };
    pub const CParticleCollectionFloatInput = extern struct {
        pad_0: [0x178]u8, // 0x0
    };
    pub const CSeqCmdLayer = extern struct {
        _: [0x2]u8, // 0x0
        _: [0x2]u8, // 0x2
        _: [0x2]u8, // 0x4
        _: [0x2]u8, // 0x6
        _: [0x2]u8, // 0x8
        _: [0x2]u8, // 0xa
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
    };
    pub const FootPinningPoseOpFixedData_t = extern struct {
        _: [0x18]u8, // 0x0
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
        _: [0x4]u8, // 0x20
        _: [0x4]u8, // 0x24
        _: [0x1]u8, // 0x28
        _: [0x7]u8, // 0x29
    };
    pub const RenderSkeletonBone_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x30]u8, // 0x10
        _: [0x18]u8, // 0x40
        _: [0x8]u8, // 0x58
    };
    pub const CDistanceRemainingMetricEvaluator = extern struct {
        pad_0: [0x50]u8, // 0x0
        _: [0x4]u8, // 0x50
        _: [0x4]u8, // 0x54
        _: [0x4]u8, // 0x58
        _: [0x4]u8, // 0x5c
        _: [0x1]u8, // 0x60
        _: [0x1]u8, // 0x61
        _: [0x6]u8, // 0x62
    };
    pub const CDirectPlaybackUpdateNode = extern struct {
        pad_0: [0x74]u8, // 0x0
        _: [0x1]u8, // 0x74
        _: [0x3]u8, // 0x75
        _: [0x18]u8, // 0x78
    };
    pub const CNmIDEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x8]u8, // 0x18
        _: [0x8]u8, // 0x20
    };
    pub const CFlexRule = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x18]u8, // 0x8
    };
    pub const ScriptInfo_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x18]u8, // 0x8
        _: [0x18]u8, // 0x20
        _: [0x18]u8, // 0x38
        _: [0x8]u8, // 0x50
    };
    pub const CBoneConstraintRbf = extern struct {
        pad_0: [0x20]u8, // 0x0
        _: [0x18]u8, // 0x20
        _: [0x90]u8, // 0x38
    };
    pub const CNetworkedCycle = extern struct {
        _: [0x4]u8, // 0x0
        _: [0xc]u8, // 0x4
        _: [0xc]u8, // 0x10
        _: [0xc]u8, // 0x1c
        _: [0xc]u8, // 0x28
    };
    pub const CNmSoundEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x8]u8, // 0x18
        _: [0x8]u8, // 0x20
        _: [0x8]u8, // 0x28
        _: [0x8]u8, // 0x30
        _: [0x8]u8, // 0x38
        _: [0x4]u8, // 0x40
        _: [0x4]u8, // 0x44
    };
    pub const CRenderGroom = extern struct {
        _: [0x18]u8, // 0x0
        _: [0x28]u8, // 0x18
        _: [0x8]u8, // 0x40
        _: [0x30]u8, // 0x48
        _: [0x4]u8, // 0x78
        _: [0x4]u8, // 0x7c
        _: [0x4]u8, // 0x80
        _: [0x4]u8, // 0x84
        _: [0x4]u8, // 0x88
        _: [0x4]u8, // 0x8c
        _: [0x4]u8, // 0x90
        _: [0x4]u8, // 0x94
        _: [0x14]u8, // 0x98
        _: [0x4]u8, // 0xac
    };
    pub const CNmParameterizedClipSelectorNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x18]u8, // 0x10
        _: [0x10]u8, // 0x28
        _: [0x2]u8, // 0x38
        _: [0x1]u8, // 0x3a
        _: [0x5]u8, // 0x3b
    };
    pub const CTiltTwistConstraint = extern struct {
        pad_0: [0x60]u8, // 0x0
        _: [0x4]u8, // 0x60
        _: [0x2c]u8, // 0x64
    };
    pub const CNmSpeedScaleNode__CDefinition = extern struct {
        pad_0: [0x20]u8, // 0x0
    };
    pub const CVPhysXSurfacePropertiesList = extern struct {
        _: [0x18]u8, // 0x0
    };
    pub const CNmFloatSpringNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x4]u8, // 0x18
        _: [0x2]u8, // 0x1c
        _: [0x2]u8, // 0x1e
    };
    pub const RenderHairStrandInfo_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x8]u8, // 0x10
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
        _: [0x4]u8, // 0x20
        _: [0x4]u8, // 0x24
    };
    pub const CCycleControlClipUpdateNode = extern struct {
        pad_0: [0x60]u8, // 0x0
        _: [0x1c]u8, // 0x60
        _: [0x4]u8, // 0x7c
        _: [0x4]u8, // 0x80
        _: [0x4]u8, // 0x84
        _: [0x2]u8, // 0x88
        _: [0x6]u8, // 0x8a
    };
    pub const CNmTargetPointNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x2]u8, // 0x10
        _: [0x6]u8, // 0x12
    };
    pub const CNmTargetSelectorNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x18]u8, // 0x10
        _: [0x4]u8, // 0x28
        _: [0x4]u8, // 0x2c
        _: [0x2]u8, // 0x30
        _: [0x1]u8, // 0x32
        _: [0x5]u8, // 0x33
        _: [0x8]u8, // 0x38
    };
    pub const CPulse_RegisterInfo = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x18]u8, // 0x8
        _: [0x38]u8, // 0x20
        _: [0x4]u8, // 0x58
        _: [0x4]u8, // 0x5c
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
        _: [0x18]u8, // 0x10
        _: [0x4]u8, // 0x28
        _: [0x4]u8, // 0x2c
    };
    pub const LookAtOpFixedSettings_t = extern struct {
        _: [0x80]u8, // 0x0
        _: [0x18]u8, // 0x80
        _: [0x18]u8, // 0x98
        _: [0x4]u8, // 0xb0
        _: [0x4]u8, // 0xb4
        _: [0x4]u8, // 0xb8
        _: [0x4]u8, // 0xbc
        _: [0x1]u8, // 0xc0
        _: [0x1]u8, // 0xc1
        _: [0x1]u8, // 0xc2
        _: [0xd]u8, // 0xc3
    };
    pub const CRootMotion = extern struct {
        _: [0x10]u8, // 0x0
        _: [0xc]u8, // 0x10
        _: [0xc]u8, // 0x1c
    };
    pub const CAnimGraphSettingsManager = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x18]u8, // 0x18
    };
    pub const CAnimGraphModelBinding = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x18]u8, // 0x10
    };
    pub const CBoneConstraintPoseSpaceBone = extern struct {
        pad_0: [0x60]u8, // 0x0
        _: [0x28]u8, // 0x60
    };
    pub const CNmTwoBoneIKTask = extern struct {
        pad_0: [0x70]u8, // 0x0
        _: [0x4]u8, // 0x70
        _: [0xc]u8, // 0x74
        _: [0x70]u8, // 0x80
    };
    pub const MotionBlendItem = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
    };
    pub const CBoneConstraintPoseSpaceMorph = extern struct {
        pad_0: [0x20]u8, // 0x0
        _: [0x8]u8, // 0x20
        _: [0x8]u8, // 0x28
        _: [0x18]u8, // 0x30
        _: [0x18]u8, // 0x48
        _: [0x40]u8, // 0x60
    };
    pub const CFloatAnimParameter = extern struct {
        pad_0: [0x80]u8, // 0x0
        _: [0x4]u8, // 0x80
        _: [0x4]u8, // 0x84
        _: [0x4]u8, // 0x88
        _: [0x4]u8, // 0x8c
    };
    pub const CNmContactAudioActionVData = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const CStateActionUpdater = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
    };
    pub const CPlayerInputAnimMotorUpdater = extern struct {
        pad_0: [0x20]u8, // 0x0
        _: [0x1c]u8, // 0x20
        _: [0x4]u8, // 0x3c
        _: [0x4]u8, // 0x40
        _: [0x2]u8, // 0x44
        _: [0x2]u8, // 0x46
        _: [0x8]u8, // 0x48
    };
    pub const CRenderSkeleton = extern struct {
        _: [0x30]u8, // 0x0
        _: [0x18]u8, // 0x30
        _: [0x8]u8, // 0x48
    };
    pub const CSeqIKLock = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x2]u8, // 0x8
        _: [0x2]u8, // 0xa
    };
    pub const CAnimParamHandleMap = extern struct {
        _: [0x20]u8, // 0x0
    };
    pub const CNmFloatClampNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0xc]u8, // 0x14
    };
    pub const PulseRuntimeCellIndex_t = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const CNmExternalPoseNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
    };
    pub const CAnimDesc = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
        _: [0x8]u8, // 0x18
        _: [0xd8]u8, // 0x20
        _: [0x18]u8, // 0xf8
        _: [0x20]u8, // 0x110
        _: [0x18]u8, // 0x130
        _: [0x18]u8, // 0x148
        _: [0x18]u8, // 0x160
        _: [0x4]u8, // 0x178
        _: [0xc]u8, // 0x17c
        _: [0x10]u8, // 0x188
        _: [0x18]u8, // 0x198
        _: [0x18]u8, // 0x1b0
        _: [0x8]u8, // 0x1c8
    };
    pub const CNmRootMotionOverrideNode__CDefinition = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x2]u8, // 0x18
        _: [0x2]u8, // 0x1a
        _: [0x2]u8, // 0x1c
        _: [0x2]u8, // 0x1e
        _: [0x4]u8, // 0x20
        _: [0x4]u8, // 0x24
        _: [0x4]u8, // 0x28
        _: [0x4]u8, // 0x2c
    };
    pub const CNmTargetWarpNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x2]u8, // 0x10
        _: [0x2]u8, // 0x12
        _: [0x1]u8, // 0x14
        _: [0x1]u8, // 0x15
        _: [0x2]u8, // 0x16
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
        _: [0x4]u8, // 0x20
        _: [0x4]u8, // 0x24
        _: [0x8]u8, // 0x28
        _: [0x8]u8, // 0x30
    };
    pub const CPhysSurfacePropertiesPhysics = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
    };
    pub const CAnimationGraphVisualizerPie = extern struct {
        pad_0: [0x40]u8, // 0x0
        _: [0x10]u8, // 0x40
        _: [0x10]u8, // 0x50
        _: [0x10]u8, // 0x60
        _: [0x10]u8, // 0x70
    };
    pub const NmFloatCurveCompressionSettings_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x4]u8, // 0x8
    };
    pub const CBoneConstraintDotToMorph = extern struct {
        pad_0: [0x20]u8, // 0x0
        _: [0x8]u8, // 0x20
        _: [0x8]u8, // 0x28
        _: [0x8]u8, // 0x30
        _: [0x20]u8, // 0x38
    };
    pub const CPointConstraint = extern struct {
        pad_0: [0x60]u8, // 0x0
    };
    pub const CCurrentRotationVelocityMetricEvaluator = extern struct {
        pad_0: [0x50]u8, // 0x0
    };
    pub const TraceSettings_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
    };
    pub const ParamSpanSample_t = extern struct {
        _: [0x14]u8, // 0x0
        _: [0x4]u8, // 0x14
    };
    pub const CNmFollowBoneTask = extern struct {
        pad_0: [0x90]u8, // 0x0
    };
    pub const VPhysXConstraintParams_t = extern struct {
        _: [0x1]u8, // 0x0
        _: [0x1]u8, // 0x1
        _: [0x1]u8, // 0x2
        _: [0x1]u8, // 0x3
        _: [0x18]u8, // 0x4
        _: [0x20]u8, // 0x1c
        _: [0x4]u8, // 0x3c
        _: [0x4]u8, // 0x40
        _: [0x4]u8, // 0x44
        _: [0x4]u8, // 0x48
        _: [0x4]u8, // 0x4c
        _: [0x4]u8, // 0x50
        _: [0x4]u8, // 0x54
        _: [0x4]u8, // 0x58
        _: [0x4]u8, // 0x5c
        _: [0x4]u8, // 0x60
        _: [0x4]u8, // 0x64
        _: [0x4]u8, // 0x68
        _: [0x4]u8, // 0x6c
        _: [0x4]u8, // 0x70
        _: [0x4]u8, // 0x74
        _: [0x4]u8, // 0x78
        _: [0x4]u8, // 0x7c
        _: [0x4]u8, // 0x80
        _: [0x4]u8, // 0x84
        _: [0x4]u8, // 0x88
        _: [0x4]u8, // 0x8c
        _: [0x4]u8, // 0x90
        _: [0xc]u8, // 0x94
        _: [0x10]u8, // 0xa0
        _: [0xc]u8, // 0xb0
        _: [0x4]u8, // 0xbc
        _: [0x4]u8, // 0xc0
        _: [0x4]u8, // 0xc4
        _: [0x4]u8, // 0xc8
        _: [0x4]u8, // 0xcc
        _: [0x4]u8, // 0xd0
        _: [0x4]u8, // 0xd4
        _: [0x4]u8, // 0xd8
        _: [0x4]u8, // 0xdc
        _: [0x4]u8, // 0xe0
        _: [0x4]u8, // 0xe4
        _: [0x4]u8, // 0xe8
        _: [0x4]u8, // 0xec
        _: [0x4]u8, // 0xf0
        _: [0x4]u8, // 0xf4
    };
    pub const CNmFloatComparisonNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x2]u8, // 0x10
        _: [0x2]u8, // 0x12
        _: [0x4]u8, // 0x14
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
    };
    pub const CStateUpdateData = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x18]u8, // 0x10
        _: [0x18]u8, // 0x28
        _: [0x8]u8, // 0x40
    };
    pub const CTurnHelperInstanceData = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
    };
    pub const CNmTargetValueNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const COrientConstraint = extern struct {
        pad_0: [0x60]u8, // 0x0
    };
    pub const CCycleClipInstanceData = extern struct {
        _: [0xc]u8, // 0x0
        _: [0x10]u8, // 0xc
    };
    pub const PulseRuntimeTempVarBankIndex_t = extern struct {
        _: [0x2]u8, // 0x0
    };
    pub const CMoverUpdateNode = extern struct {
        pad_0: [0x78]u8, // 0x0
        _: [0x18]u8, // 0x78
        _: [0x4]u8, // 0x90
        _: [0x2]u8, // 0x94
        _: [0x2]u8, // 0x96
        _: [0x4]u8, // 0x98
        _: [0x4]u8, // 0x9c
        _: [0x4]u8, // 0xa0
        _: [0x1]u8, // 0xa4
        _: [0x1]u8, // 0xa5
        _: [0x1]u8, // 0xa6
        _: [0x1]u8, // 0xa7
        _: [0x8]u8, // 0xa8
    };
    pub const CNmLayerBlendNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x2]u8, // 0x10
        _: [0x6]u8, // 0x12
        _: [0x30]u8, // 0x18
    };
    pub const CNmFootIKNode__CDefinition = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x8]u8, // 0x18
        _: [0x8]u8, // 0x20
        _: [0x2]u8, // 0x28
        _: [0x2]u8, // 0x2a
        _: [0x4]u8, // 0x2c
        _: [0x4]u8, // 0x30
        _: [0x1]u8, // 0x34
        _: [0x3]u8, // 0x35
    };
    pub const CAnimMotorUpdaterBase = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
        _: [0x8]u8, // 0x18
    };
    pub const JiggleBoneSettingsList_t = extern struct {
        _: [0x18]u8, // 0x0
    };
    pub const CSubtractUpdateNode = extern struct {
        pad_0: [0x94]u8, // 0x0
        _: [0x4]u8, // 0x94
        _: [0x1]u8, // 0x98
        _: [0x1]u8, // 0x99
        _: [0x6]u8, // 0x9a
    };
    pub const PulseGraphInstanceID_t = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const CNmFloatRemapNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0x8]u8, // 0x14
        _: [0xc]u8, // 0x1c
    };
    pub const CPoseHandle = extern struct {
        _: [0x2]u8, // 0x0
        _: [0x2]u8, // 0x2
    };
    pub const CNmFootstepEventIDNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
    };
    pub const CSolveIKChainUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        _: [0x18]u8, // 0x70
        _: [0x20]u8, // 0x88
    };
    pub const CNmOrNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x10]u8, // 0x10
    };
    pub const CSeqCmdSeqDesc = extern struct {
        _: [0x10]u8, // 0x0
        _: [0xc]u8, // 0x10
        _: [0x8]u8, // 0x1c
        _: [0x2]u8, // 0x24
        _: [0x2]u8, // 0x26
        _: [0x4]u8, // 0x28
        _: [0x2]u8, // 0x2c
        _: [0x2]u8, // 0x2e
        _: [0x18]u8, // 0x30
        _: [0x18]u8, // 0x48
        _: [0x18]u8, // 0x60
        _: [0x18]u8, // 0x78
    };
    pub const CBoneMaskUpdateNode = extern struct {
        pad_0: [0x94]u8, // 0x0
        _: [0x4]u8, // 0x94
        _: [0x4]u8, // 0x98
        _: [0x4]u8, // 0x9c
        _: [0x4]u8, // 0xa0
        _: [0x4]u8, // 0xa4
        _: [0x4]u8, // 0xa8
        _: [0x4]u8, // 0xac
    };
    pub const CLeafUpdateNode = extern struct {
        pad_0: [0x58]u8, // 0x0
    };
    pub const CPulse_Constant = extern struct {
        _: [0x18]u8, // 0x0
        _: [0x18]u8, // 0x18
    };
    pub const CParticleFloatInput = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x8]u8, // 0x18
        _: [0x40]u8, // 0x20
        _: [0x4]u8, // 0x60
        _: [0x4]u8, // 0x64
        _: [0x4]u8, // 0x68
        _: [0x4]u8, // 0x6c
        _: [0x4]u8, // 0x70
        _: [0x4]u8, // 0x74
        _: [0x4]u8, // 0x78
        _: [0x4]u8, // 0x7c
        _: [0x4]u8, // 0x80
        _: [0xc]u8, // 0x84
        _: [0x8]u8, // 0x90
        _: [0x4]u8, // 0x98
        _: [0x4]u8, // 0x9c
        _: [0x4]u8, // 0xa0
        _: [0x4]u8, // 0xa4
        _: [0x4]u8, // 0xa8
        _: [0x4]u8, // 0xac
        _: [0x4]u8, // 0xb0
        _: [0x4]u8, // 0xb4
        _: [0xc]u8, // 0xb8
        _: [0x4]u8, // 0xc4
        _: [0x4]u8, // 0xc8
        _: [0x4]u8, // 0xcc
        _: [0x4]u8, // 0xd0
        _: [0x4]u8, // 0xd4
        _: [0x4]u8, // 0xd8
        _: [0x4]u8, // 0xdc
        _: [0x4]u8, // 0xe0
        _: [0xc]u8, // 0xe4
        _: [0x4]u8, // 0xf0
        _: [0x4]u8, // 0xf4
        _: [0x4]u8, // 0xf8
        _: [0x4]u8, // 0xfc
        _: [0x4]u8, // 0x100
        _: [0x4]u8, // 0x104
        _: [0x4]u8, // 0x108
        _: [0x4]u8, // 0x10c
        _: [0x4]u8, // 0x110
        _: [0x4]u8, // 0x114
        _: [0x4]u8, // 0x118
        _: [0x4]u8, // 0x11c
        _: [0x4]u8, // 0x120
        _: [0x4]u8, // 0x124
        _: [0x8]u8, // 0x128
        _: [0x40]u8, // 0x130
        _: [0x8]u8, // 0x170
    };
    pub const SolveIKChainPoseOpFixedSettings_t = extern struct {
        _: [0x18]u8, // 0x0
    };
    pub const CNmEntityAttributeFloatEvent = extern struct {
        pad_0: [0x38]u8, // 0x0
        _: [0x40]u8, // 0x38
    };
    pub const CNmIDSelectorNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x18]u8, // 0x10
        _: [0x30]u8, // 0x28
        _: [0x8]u8, // 0x58
    };
    pub const TwoBoneIKSettings_t = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x80]u8, // 0x10
        _: [0x10]u8, // 0x90
        _: [0x80]u8, // 0xa0
        _: [0x4]u8, // 0x120
        _: [0x2]u8, // 0x124
        _: [0x2]u8, // 0x126
        _: [0x8]u8, // 0x128
        _: [0x10]u8, // 0x130
        _: [0x4]u8, // 0x140
        _: [0x4]u8, // 0x144
        _: [0x4]u8, // 0x148
        _: [0x1]u8, // 0x14c
        _: [0x3]u8, // 0x14d
        _: [0x10]u8, // 0x150
    };
    pub const CNmCachedPoseWriteTask = extern struct {
        pad_0: [0x80]u8, // 0x0
    };
    pub const CAnimUpdateSharedData = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x18]u8, // 0x10
        _: [0x20]u8, // 0x28
        _: [0x18]u8, // 0x48
        _: [0x8]u8, // 0x60
        _: [0x8]u8, // 0x68
        _: [0x8]u8, // 0x70
        _: [0x30]u8, // 0x78
        _: [0x8]u8, // 0xa8
        _: [0x8]u8, // 0xb0
        _: [0x48]u8, // 0xb8
    };
    pub const CAnimAttachment = extern struct {
        _: [0x30]u8, // 0x0
        _: [0x30]u8, // 0x30
        _: [0xc]u8, // 0x60
        _: [0xc]u8, // 0x6c
        _: [0x8]u8, // 0x78
    };
    pub const CFootTrajectories = extern struct {
        _: [0x18]u8, // 0x0
    };
    pub const CNmIDComparisonNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x2]u8, // 0x10
        _: [0x6]u8, // 0x12
        _: [0x28]u8, // 0x18
    };
    pub const PairedSequence_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x10]u8, // 0x10
    };
    pub const CEditableMotionGraph = extern struct {
        pad_0: [0x58]u8, // 0x0
    };
    pub const CNmConstFloatNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
    };
    pub const CStringAnimTag = extern struct {
        pad_0: [0x50]u8, // 0x0
    };
    pub const CBoolAnimParameter = extern struct {
        pad_0: [0x80]u8, // 0x0
        _: [0x8]u8, // 0x80
    };
    pub const CRagdollAnimTag = extern struct {
        pad_0: [0x58]u8, // 0x0
        _: [0x8]u8, // 0x58
    };
    pub const CMotionNode = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x8]u8, // 0x18
        _: [0x8]u8, // 0x20
    };
    pub const CNmStateMachineNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x120]u8, // 0x10
        _: [0x8]u8, // 0x130
    };
    pub const CBodyGroupAnimTag = extern struct {
        pad_0: [0x58]u8, // 0x0
        _: [0x8]u8, // 0x58
        _: [0x18]u8, // 0x60
    };
    pub const CNmModelSpaceBlendTask = extern struct {
        pad_0: [0x100]u8, // 0x0
    };
    pub const CNmZeroPoseNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const CNmOrientationWarpNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x2]u8, // 0x10
        _: [0x2]u8, // 0x12
        _: [0x1]u8, // 0x14
        _: [0x1]u8, // 0x15
        _: [0x1]u8, // 0x16
        _: [0x1]u8, // 0x17
        _: [0x8]u8, // 0x18
    };
    pub const AnimParamID = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const CNmBoneMaskNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
    };
    pub const ModelAnimGraph2Ref_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
    };
    pub const AnimationDecodeDebugDump_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x18]u8, // 0x8
    };
    pub const CNmVirtualParameterIDNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
    };
    pub const CSeqScaleSet = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0xc]u8, // 0x14
        _: [0x18]u8, // 0x20
        _: [0x18]u8, // 0x38
    };
    pub const PulseRuntimeCallInfoIndex_t = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const CDirectionalBlendUpdateNode = extern struct {
        pad_0: [0x5c]u8, // 0x0
        _: [0x24]u8, // 0x5c
        _: [0x18]u8, // 0x80
        _: [0x4]u8, // 0x98
        _: [0x4]u8, // 0x9c
        _: [0x4]u8, // 0xa0
        _: [0x4]u8, // 0xa4
        _: [0x1]u8, // 0xa8
        _: [0x7]u8, // 0xa9
    };
    pub const CNmGraphDefinition__ReferencedGraphSlot_t = extern struct {
        _: [0x2]u8, // 0x0
        _: [0x2]u8, // 0x2
    };
    pub const ParamSpan_t = extern struct {
        _: [0x18]u8, // 0x0
        _: [0x2]u8, // 0x18
        _: [0x2]u8, // 0x1a
        _: [0x4]u8, // 0x1c
        _: [0x8]u8, // 0x20
    };
    pub const CFootStepTriggerUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        _: [0x1c]u8, // 0x70
        _: [0x4]u8, // 0x8c
    };
    pub const IKTargetSettings_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x10]u8, // 0x8
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
        _: [0x8]u8, // 0x20
    };
    pub const CModelConfigElement_SetRenderColor = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x8]u8, // 0x48
    };
    pub const CNmAdditiveBlendTask = extern struct {
        pad_0: [0x100]u8, // 0x0
    };
    pub const CNmAnimationPoseNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x2]u8, // 0x10
        _: [0x2]u8, // 0x12
        _: [0x8]u8, // 0x14
        _: [0x4]u8, // 0x1c
        _: [0x8]u8, // 0x20
    };
    pub const CMotionSearchDB = extern struct {
        _: [0x80]u8, // 0x0
        _: [0x20]u8, // 0x80
        _: [0x18]u8, // 0xa0
    };
    pub const CMotionNodeBlend1D = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0x18]u8, // 0x28
        _: [0x8]u8, // 0x40
    };
    pub const CNmCurrentSyncEventNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x2]u8, // 0x10
        _: [0x6]u8, // 0x12
    };
    pub const CNmControlParameterTargetNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const SkeletonBoneBounds_t = extern struct {
        _: [0xc]u8, // 0x0
        _: [0xc]u8, // 0xc
    };
    pub const CTwoBoneIKUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        _: [0x170]u8, // 0x70
    };
    pub const VPhysXBodyPart_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x68]u8, // 0x8
        _: [0x2]u8, // 0x70
        _: [0x2]u8, // 0x72
        _: [0x4]u8, // 0x74
        _: [0x4]u8, // 0x78
        _: [0x4]u8, // 0x7c
        _: [0x4]u8, // 0x80
        _: [0x4]u8, // 0x84
        _: [0x4]u8, // 0x88
        _: [0xc]u8, // 0x8c
    };
    pub const PulseRuntimeChunkIndex_t = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const CTaskHandshakeAnimTag = extern struct {
        pad_0: [0x58]u8, // 0x0
    };
    pub const CFollowPathUpdateNode = extern struct {
        pad_0: [0x74]u8, // 0x0
        _: [0x4]u8, // 0x74
        _: [0x1]u8, // 0x78
        _: [0x1]u8, // 0x79
        _: [0x2]u8, // 0x7a
        _: [0x4]u8, // 0x7c
        _: [0x4]u8, // 0x80
        _: [0x4]u8, // 0x84
        _: [0x8]u8, // 0x88
        _: [0x18]u8, // 0x90
        _: [0x4]u8, // 0xa8
        _: [0x4]u8, // 0xac
        _: [0x4]u8, // 0xb0
        _: [0x4]u8, // 0xb4
    };
    pub const AimMatrixOpFixedSettings_t = extern struct {
        _: [0x80]u8, // 0x0
        _: [0x18]u8, // 0x80
        _: [0x28]u8, // 0x98
        _: [0x4]u8, // 0xc0
        _: [0x4]u8, // 0xc4
        _: [0x4]u8, // 0xc8
        _: [0x4]u8, // 0xcc
        _: [0x4]u8, // 0xd0
        _: [0x1]u8, // 0xd4
        _: [0x3]u8, // 0xd5
        _: [0x4]u8, // 0xd8
        _: [0x4]u8, // 0xdc
        _: [0x10]u8, // 0xe0
    };
    pub const CAnimScriptComponentUpdater = extern struct {
        pad_0: [0x30]u8, // 0x0
        _: [0x8]u8, // 0x30
    };
    pub const CRagdollUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        _: [0x4]u8, // 0x70
        _: [0x4]u8, // 0x74
    };
    pub const CBoneConstraintBase = extern struct {
        pad_0: [0x20]u8, // 0x0
    };
    pub const CPathAnimMotorUpdater = extern struct {
        pad_0: [0x28]u8, // 0x0
    };
    pub const CMaterialAttributeAnimTag = extern struct {
        pad_0: [0x58]u8, // 0x0
        _: [0x8]u8, // 0x58
        _: [0x4]u8, // 0x60
        _: [0x4]u8, // 0x64
        _: [0x8]u8, // 0x68
    };
    pub const CNmFootEventConditionNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x2]u8, // 0x10
        _: [0x2]u8, // 0x12
        _: [0x4]u8, // 0x14
    };
    pub const CNmFloatChannelSet_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x10]u8, // 0x8
    };
    pub const CNmFootEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x8]u8, // 0x18
    };
    pub const CPhysSurfacePropertiesAudio = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
    };
    pub const CSeqAutoLayer = extern struct {
        _: [0x2]u8, // 0x0
        _: [0x2]u8, // 0x2
        _: [0x8]u8, // 0x4
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x4]u8, // 0x18
    };
    pub const ModelEmbeddedMesh_t = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x8]u8, // 0x18
        _: [0x18]u8, // 0x20
        _: [0x18]u8, // 0x38
        _: [0x18]u8, // 0x50
        _: [0x4]u8, // 0x68
        _: [0x4]u8, // 0x6c
    };
    pub const PhysSoftbodyDesc_t = extern struct {
        _: [0x18]u8, // 0x0
        _: [0x18]u8, // 0x18
        _: [0x18]u8, // 0x30
        _: [0x18]u8, // 0x48
        _: [0x18]u8, // 0x60
        _: [0x18]u8, // 0x78
    };
    pub const CPulseRuntimeMethodArg = extern struct {
        _: [0x38]u8, // 0x0
        _: [0x8]u8, // 0x38
        _: [0x40]u8, // 0x40
    };
    pub const CAnimSequenceParams = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
    };
    pub const CTargetWarpUpdateNode = extern struct {
        pad_0: [0x74]u8, // 0x0
        _: [0x4]u8, // 0x74
        _: [0x2]u8, // 0x78
        _: [0x2]u8, // 0x7a
        _: [0x2]u8, // 0x7c
        _: [0x2]u8, // 0x7e
        _: [0x4]u8, // 0x80
        _: [0x4]u8, // 0x84
        _: [0x4]u8, // 0x88
        _: [0x1]u8, // 0x8c
        _: [0x1]u8, // 0x8d
        _: [0x1]u8, // 0x8e
        _: [0x1]u8, // 0x8f
        _: [0x4]u8, // 0x90
        _: [0x4]u8, // 0x94
    };
    pub const CNmVirtualParameterBoolNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
    };
    pub const CFollowTargetUpdateNode = extern struct {
        pad_0: [0x70]u8, // 0x0
        _: [0x18]u8, // 0x70
        _: [0x2]u8, // 0x88
        _: [0x6]u8, // 0x8a
    };
    pub const PulseRuntimeStateOffset_t = extern struct {
        _: [0x2]u8, // 0x0
    };
    pub const CCPPScriptComponentUpdater = extern struct {
        pad_0: [0x30]u8, // 0x0
        _: [0x30]u8, // 0x30
    };
    pub const NetVarConfigIndex = extern struct {
        _: [0xc]u8, // 0x0
    };
    pub const CAnimData = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x10]u8, // 0x10
        _: [0x18]u8, // 0x20
        _: [0x18]u8, // 0x38
        _: [0x8]u8, // 0x50
        _: [0x18]u8, // 0x58
    };
    pub const IKSolverSettings_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
    };
    pub const CBinaryUpdateNode = extern struct {
        pad_0: [0x60]u8, // 0x0
        _: [0x10]u8, // 0x60
        _: [0x10]u8, // 0x70
        _: [0x4]u8, // 0x80
        _: [0x4]u8, // 0x84
        _: [0x1]u8, // 0x88
        _: [0x7]u8, // 0x89
    };
    pub const CBlendNodeInstanceData = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0xc]u8, // 0x10
        _: [0x4]u8, // 0x1c
        _: [0x10]u8, // 0x20
    };
    pub const CNmParameterizedBlendNode__BlendRange_t = extern struct {
        _: [0x2]u8, // 0x0
        _: [0x2]u8, // 0x2
        _: [0x8]u8, // 0x4
    };
    pub const CAnimKeyData = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x18]u8, // 0x10
        _: [0x18]u8, // 0x28
        _: [0x18]u8, // 0x40
        _: [0x8]u8, // 0x58
        _: [0x18]u8, // 0x60
    };
    pub const AttachmentHandle_t = extern struct {
        _: [0x1]u8, // 0x0
    };
    pub const CAnimMorphDifference = extern struct {
        _: [0x10]u8, // 0x0
    };
    pub const FootFixedData_t = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x10]u8, // 0x10
        _: [0x4]u8, // 0x20
        _: [0x4]u8, // 0x24
        _: [0x4]u8, // 0x28
        _: [0x4]u8, // 0x2c
        _: [0x4]u8, // 0x30
        _: [0x4]u8, // 0x34
        _: [0x4]u8, // 0x38
        _: [0x4]u8, // 0x3c
        _: [0x10]u8, // 0x40
    };
    pub const CMotionGraphGroup = extern struct {
        _: [0xb8]u8, // 0x0
        _: [0x18]u8, // 0xb8
        _: [0x18]u8, // 0xd0
        _: [0x18]u8, // 0xe8
        _: [0x8]u8, // 0x100
    };
    pub const CPulse_InstructionDebug = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x10]u8, // 0x8
    };
    pub const CNmVectorNegateNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
    };
    pub const CNmSyncTrack__Event_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
    };
    pub const CParticleCollectionRendererVecInput = extern struct {
        pad_0: [0x6d8]u8, // 0x0
    };
    pub const CNmTarget = extern struct {
        _: [0x20]u8, // 0x0
        _: [0x8]u8, // 0x20
        _: [0x1]u8, // 0x28
        _: [0x1]u8, // 0x29
        _: [0x1]u8, // 0x2a
        _: [0x5]u8, // 0x2b
    };
    pub const CNmControlParameterIDNode__CDefinition = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const CNmBodyGroupEvent = extern struct {
        pad_0: [0x18]u8, // 0x0
        _: [0x8]u8, // 0x18
        _: [0x8]u8, // 0x20
        _: [0x8]u8, // 0x28
    };
    pub const CWayPointHelperUpdateNode = extern struct {
        pad_0: [0x74]u8, // 0x0
        _: [0x4]u8, // 0x74
        _: [0x4]u8, // 0x78
        _: [0x1]u8, // 0x7c
        _: [0x1]u8, // 0x7d
        _: [0x2]u8, // 0x7e
    };
    pub const CMoodVData = extern struct {
        _: [0xe0]u8, // 0x0
        _: [0x8]u8, // 0xe0
        _: [0x18]u8, // 0xe8
    };
    pub const CModelConfigElement_AttachedModel = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x8]u8, // 0x48
        _: [0x8]u8, // 0x50
        _: [0x8]u8, // 0x58
        _: [0xc]u8, // 0x60
        _: [0xc]u8, // 0x6c
        _: [0x8]u8, // 0x78
        _: [0x8]u8, // 0x80
        _: [0x4]u8, // 0x88
        _: [0x1]u8, // 0x8c
        _: [0x1]u8, // 0x8d
        _: [0x2]u8, // 0x8e
        _: [0x8]u8, // 0x90
        _: [0x8]u8, // 0x98
        _: [0x1]u8, // 0xa0
        _: [0x4f]u8, // 0xa1
    };
    pub const CAnimTagManagerUpdater = extern struct {
        pad_0: [0x38]u8, // 0x0
        _: [0x40]u8, // 0x38
    };
    pub const CParticleProperty = extern struct {
        pad_0: [0x28]u8, // 0x0
    };
};
