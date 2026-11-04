/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

#![allow(non_snake_case, non_camel_case_types, dead_code)]

pub mod soundsystem {

    pub type VMixUpMixRule_t = i32;
    pub type SndSeqInstrumentType_t = i32;
    pub type EMode_t = i32;
    pub type SndBeatMidiStatusType_t = i32;
    pub type VMixGraphCommandID_t = i32;
    pub type EWaveform = i32;
    pub type VMixFilterChannelSet_t = i32;
    pub type VMixLFOShape_t = i32;
    pub type VMixOffsetType_t = i32;
    pub type VMixMixDownRule_t = i32;
    pub type VMixFilterType_t = i32;
    pub type SndBeatTrackPlaybackType_t = i32;
    pub type VMixSendOperator_t = i32;
    pub type SndBeatEventType_t = i32;
    pub type SosActionStopType_t = i32;
    pub type SndBeatKeyType_t = i32;
    pub type SosEditItemType_t = i32;
    pub type SndBeatSyncType_t = i32;
    pub type PlayBackMode_t = i32;
    pub type EVsndTriggerMode = i32;
    pub type SosGroupFieldBehavior_t = i32;
    pub type soundlevel_t = i32;
    pub type VMixPannerType_t = i32;
    pub type VMixChannelOperation_t = i32;
    pub type EMidiNote = i32;
    pub type VMixAutoControlType_t = i32;
    pub type CVSoundFormat_t = i32;
    pub type VMixFilterSlope_t = i32;
    pub type SosActionLimitSortType_t = i32;
    pub type VMixSubgraphSwitchInterpolationType_t = i32;
    pub type SosGroupType_t = i32;
    pub type VMixOffsetCategory_t = i32;
    pub type SndBeatSyncStartType_t = i32;
    pub type SosActionSetParamSortType_t = i32;
    pub type EVsndPlaybackMode = i32;
    #[repr(C)]
    pub struct CVMixInputBase {
        pub m_name: [u8; 0x10], // 0x0
    }
    #[repr(C)]
    pub struct CVoiceContainerBlender {
        pub pad_0: [u8; 0x78], // 0x0
        pub m_firstSound: [u8; 0x20], // 0x78
        pub m_secondSound: [u8; 0x20], // 0x98
        pub m_flBlendFactor: [u8; 0x8], // 0xB8
    }
    #[repr(C)]
    pub struct CVMixPitchShiftProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_desc: [u8; 0x10], // 0x28
        pub m_paramPitchScale: [u8; 0x8], // 0x38
    }
    #[repr(C)]
    pub struct VMixFreeverbDesc_t {
        pub m_flRoomSize: [u8; 0x4], // 0x0
        pub m_flDamp: [u8; 0x4], // 0x4
        pub m_flWidth: [u8; 0x4], // 0x8
        pub m_flLateReflections: [u8; 0x4], // 0xC
    }
    #[repr(C)]
    pub struct CVoiceContainerStaticAdditiveSynth__CHarmonic {
        pub m_nWaveform: [u8; 0x1], // 0x0
        pub m_nFundamental: [u8; 0x3], // 0x1
        pub m_nOctave: [u8; 0x4], // 0x4
        pub m_flCents: [u8; 0x4], // 0x8
        pub m_flPhase: [u8; 0x4], // 0xC
        pub m_curve: [u8; 0x40], // 0x10
        pub m_volumeScaling: [u8; 0x18], // 0x50
    }
    #[repr(C)]
    pub struct CVsndTriggerSlot {
        pub m_bEnableVsnd: [u8; 0x8], // 0x0
        pub m_vsnd: [u8; 0x20], // 0x8
        pub m_bEnableEndcap: [u8; 0x8], // 0x28
        pub m_endcapVsnd: [u8; 0x20], // 0x30
        pub m_bEnableLoopcap: [u8; 0x8], // 0x50
        pub m_loopcapVsnd: [u8; 0x20], // 0x58
        pub m_volume: [u8; 0x4], // 0x78
        pub m_fadeOut: [u8; 0x4], // 0x7C
        pub m_mode: [u8; 0x8], // 0x80
    }
    #[repr(C)]
    pub struct CVoiceContainerStaticAdditiveSynth__CTone {
        pub m_harmonics: [u8; 0x18], // 0x0
        pub m_curve: [u8; 0x40], // 0x18
        pub m_bSyncInstances: [u8; 0x8], // 0x58
    }
    #[repr(C)]
    pub struct CSosGroupActionOcclusionSchema {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_flCalculationInterval: [u8; 0x4], // 0x8
        pub m_flRadius: [u8; 0x4], // 0xC
        pub m_flOcclusionScale: [u8; 0x4], // 0x10
        pub m_flOcclusionMin: [u8; 0x4], // 0x14
        pub m_flOcclusionMax: [u8; 0x4], // 0x18
        pub m_flTestDepth: [u8; 0x4], // 0x1C
    }
    #[repr(C)]
    pub struct CVoiceContainerRandomSampler {
        pub pad_0: [u8; 0x88], // 0x0
        pub m_flAmplitude: [u8; 0x4], // 0x88
        pub m_flAmplitudeJitter: [u8; 0x4], // 0x8C
        pub m_flTimeJitter: [u8; 0x4], // 0x90
        pub m_flMaxLength: [u8; 0x4], // 0x94
        pub m_nNumDelayVariations: [u8; 0x8], // 0x98
        pub m_grainResources: [u8; 0x110], // 0xA0
    }
    #[repr(C)]
    pub struct CVMixSteamAudioDirectProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_paramPositionX: [u8; 0x4], // 0x28
        pub m_paramPositionY: [u8; 0x4], // 0x2C
        pub m_paramPositionZ: [u8; 0x4], // 0x30
        pub m_paramRightX: [u8; 0x4], // 0x34
        pub m_paramRightY: [u8; 0x4], // 0x38
        pub m_paramRightZ: [u8; 0x4], // 0x3C
        pub m_paramUpX: [u8; 0x4], // 0x40
        pub m_paramUpY: [u8; 0x4], // 0x44
        pub m_paramUpZ: [u8; 0x4], // 0x48
        pub m_paramAheadX: [u8; 0x4], // 0x4C
        pub m_paramAheadY: [u8; 0x4], // 0x50
        pub m_paramAheadZ: [u8; 0x4], // 0x54
        pub m_paramApplyDistanceAttenuation: [u8; 0x4], // 0x58
        pub m_paramApplyAirAbsorption: [u8; 0x4], // 0x5C
        pub m_paramApplyDirectivity: [u8; 0x4], // 0x60
        pub m_paramApplyOcclusion: [u8; 0x4], // 0x64
        pub m_paramApplyTransmission: [u8; 0x4], // 0x68
        pub m_paramDipoleWeight: [u8; 0x4], // 0x6C
        pub m_paramDipolePower: [u8; 0x4], // 0x70
        pub m_paramOcclusion: [u8; 0x4], // 0x74
        pub m_paramTransmissionLow: [u8; 0x4], // 0x78
        pub m_paramTransmissionMid: [u8; 0x4], // 0x7C
        pub m_paramTransmissionHigh: [u8; 0x4], // 0x80
        pub m_paramBand: [u8; 0x4], // 0x84
        pub m_paramTransmission: [u8; 0x8], // 0x88
    }
    #[repr(C)]
    pub struct CVMixSteamAudioHRTFProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_paramPositionX: [u8; 0x4], // 0x28
        pub m_paramPositionY: [u8; 0x4], // 0x2C
        pub m_paramPositionZ: [u8; 0x4], // 0x30
        pub m_paramInterpolation: [u8; 0x4], // 0x34
        pub m_paramDirectMixLevel: [u8; 0x4], // 0x38
        pub m_paramPerspectiveCorrection: [u8; 0x4], // 0x3C
        pub m_paramRelativePosition: [u8; 0x4], // 0x40
        pub m_paramDelayLeft: [u8; 0x4], // 0x44
        pub m_paramDelayRight: [u8; 0x8], // 0x48
    }
    #[repr(C)]
    pub struct CVoiceContainerDefault {
        pub pad_0: [u8; 0x78], // 0x0
    }
    #[repr(C)]
    pub struct CVSound {
        pub m_Sentences: [u8; 0x10], // 0x0
        pub m_nRate: [u8; 0x4], // 0x10
        pub m_nFormat: [u8; 0x4], // 0x14
        pub m_nChannels: [u8; 0x4], // 0x18
        pub m_nLoopStart: [u8; 0x4], // 0x1C
        pub m_nSampleCount: [u8; 0x4], // 0x20
        pub m_flDuration: [u8; 0x4], // 0x24
        pub m_nStreamingSize: [u8; 0x4], // 0x28
        pub m_nLoopEnd: [u8; 0x14], // 0x2C
    }
    #[repr(C)]
    pub struct CDSPPresetMixgroupModifierTable {
        pub m_table: [u8; 0x18], // 0x0
    }
    #[repr(C)]
    pub struct CSosGroupActionSoundeventClusterSchema {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_nMinNearby: [u8; 0x4], // 0x8
        pub m_flClusterEpsilon: [u8; 0x4], // 0xC
        pub m_shouldPlayOpvar: [u8; 0x8], // 0x10
        pub m_shouldPlayClusterChild: [u8; 0x8], // 0x18
        pub m_clusterSizeOpvar: [u8; 0x8], // 0x20
        pub m_groupBoundingBoxMinsOpvar: [u8; 0x8], // 0x28
        pub m_groupBoundingBoxMaxsOpvar: [u8; 0x20], // 0x30
    }
    #[repr(C)]
    pub struct CSosGroupActionSetSoundeventParameterSchema {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_nMaxCount: [u8; 0x4], // 0x8
        pub m_flMinValue: [u8; 0x4], // 0xC
        pub m_flMaxValue: [u8; 0x8], // 0x10
        pub m_opvarName: [u8; 0x8], // 0x18
        pub m_nSortType: [u8; 0x8], // 0x20
    }
    #[repr(C)]
    pub struct CSoundContainerReference {
        pub m_namespace: [u8; 0x8], // 0x0
        pub m_bUseReference: [u8; 0x8], // 0x8
        pub m_sound: [u8; 0x8], // 0x10
        pub m_pSound: [u8; 0x8], // 0x18
    }
    #[repr(C)]
    pub struct CVoiceContainerNull {
        pub pad_0: [u8; 0x78], // 0x0
    }
    #[repr(C)]
    pub struct VMixSubgraphSwitchDesc_t {
        pub m_name: [u8; 0x8], // 0x0
        pub m_effectName: [u8; 0x8], // 0x8
        pub m_subgraphs: [u8; 0x18], // 0x10
        pub m_interpolationMode: [u8; 0x4], // 0x28
        pub m_bOnlyTailsOnFadeOut: [u8; 0x4], // 0x2C
        pub m_flInterpolationTime: [u8; 0x8], // 0x30
    }
    #[repr(C)]
    pub struct CVoiceContainerAnalysisBase {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_curve: [u8; 0x40], // 0x8
    }
    #[repr(C)]
    pub struct CSosGroupActionSoundeventMinMaxValuesSchema {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_strQueryPublicFieldName: [u8; 0x8], // 0x8
        pub m_strDelayPublicFieldName: [u8; 0x8], // 0x10
        pub m_bExcludeStoppedSounds: [u8; 0x1], // 0x18
        pub m_bExcludeDelayedSounds: [u8; 0x1], // 0x19
        pub m_bExcludeSoundsBelowThreshold: [u8; 0x2], // 0x1A
        pub m_flExcludeSoundsMinThresholdValue: [u8; 0x4], // 0x1C
        pub m_bExcludSoundsAboveThreshold: [u8; 0x4], // 0x20
        pub m_flExcludeSoundsMaxThresholdValue: [u8; 0x4], // 0x24
        pub m_strMinValueName: [u8; 0x8], // 0x28
        pub m_strMaxValueName: [u8; 0x10], // 0x30
    }
    #[repr(C)]
    pub struct CVMixEnvelopeProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_desc: [u8; 0xC], // 0x28
        pub m_outParamLevel: [u8; 0x4], // 0x34
        pub m_outParamdBLevel: [u8; 0x8], // 0x38
    }
    #[repr(C)]
    pub struct CVMixCommand {
        pub m_nCommand: [u8; 0x4], // 0x0
        pub m_nParameterNameHash: [u8; 0x4], // 0x4
        pub m_nOutputSubmix: [u8; 0x4], // 0x8
        pub m_nInputSubmix0: [u8; 0x4], // 0xC
        pub m_nInputSubmix1: [u8; 0x4], // 0x10
        pub m_nProcessor: [u8; 0x4], // 0x14
        pub m_nInputValue0: [u8; 0x4], // 0x18
        pub m_nInputValue1: [u8; 0x4], // 0x1C
    }
    #[repr(C)]
    pub struct SamplerVoice_t {
        pub nNoteNum: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct CVMixControlInput {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_flDefaultValue: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CVMixBoxverbProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_desc: [u8; 0x50], // 0x28
    }
    #[repr(C)]
    pub struct CVMixDynamicsCompressorProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_desc: [u8; 0x28], // 0x28
        pub m_outParamLevel: [u8; 0x4], // 0x50
        pub m_outParamdBLevel: [u8; 0x4], // 0x54
        pub m_outParamReduction: [u8; 0x8], // 0x58
    }
    #[repr(C)]
    pub struct VMixPannerDesc_t {
        pub m_type: [u8; 0x4], // 0x0
        pub m_flStrength: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct CSosGroupActionSoundeventPrioritySchema {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_priorityValue: [u8; 0x8], // 0x8
        pub m_priorityVolumeScalar: [u8; 0x8], // 0x10
        pub m_priorityContributeButDontRead: [u8; 0x8], // 0x18
        pub m_bPriorityReadButDontContribute: [u8; 0x18], // 0x20
    }
    #[repr(C)]
    pub struct CVoiceContainerRealtimeFMSineWave {
        pub pad_0: [u8; 0x78], // 0x0
        pub m_flCarrierFrequency: [u8; 0x4], // 0x78
        pub m_flModulatorFrequency: [u8; 0x4], // 0x7C
        pub m_flModulatorAmount: [u8; 0x8], // 0x80
    }
    #[repr(C)]
    pub struct SelectedEditItemInfo_t {
        pub m_EditItems: [u8; 0x18], // 0x0
    }
    #[repr(C)]
    pub struct VMixModDelayDesc_t {
        pub m_feedbackFilter: [u8; 0x10], // 0x0
        pub m_bPhaseInvert: [u8; 0x4], // 0x10
        pub m_flGlideTime: [u8; 0x4], // 0x14
        pub m_flDelay: [u8; 0x4], // 0x18
        pub m_flOutputGain: [u8; 0x4], // 0x1C
        pub m_flFeedbackGain: [u8; 0x4], // 0x20
        pub m_flModRate: [u8; 0x4], // 0x24
        pub m_flModDepth: [u8; 0x4], // 0x28
        pub m_bApplyAntialiasing: [u8; 0x4], // 0x2C
    }
    #[repr(C)]
    pub struct CSndSeqInstSndEvtSchema {
        pub pad_0: [u8; 0x20], // 0x0
    }
    #[repr(C)]
    pub struct CVMixNameInputMeter {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nValueIndex: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CSndSeqInstruments {
        pub pad_0: [u8; 0x28], // 0x0
    }
    #[repr(C)]
    pub struct CVMixDynamics3BandProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_desc: [u8; 0x90], // 0x28
    }
    #[repr(C)]
    pub struct VMixBoxverbDesc_t {
        pub m_flSizeMax: [u8; 0x4], // 0x0
        pub m_flSizeMin: [u8; 0x4], // 0x4
        pub m_flComplexity: [u8; 0x4], // 0x8
        pub m_flDiffusion: [u8; 0x4], // 0xC
        pub m_flModDepth: [u8; 0x4], // 0x10
        pub m_flModRate: [u8; 0x4], // 0x14
        pub m_bParallel: [u8; 0x4], // 0x18
        pub m_filterType: [u8; 0x10], // 0x1C
        pub m_flWidth: [u8; 0x4], // 0x2C
        pub m_flHeight: [u8; 0x4], // 0x30
        pub m_flDepth: [u8; 0x4], // 0x34
        pub m_flFeedbackScale: [u8; 0x4], // 0x38
        pub m_flFeedbackWidth: [u8; 0x4], // 0x3C
        pub m_flFeedbackHeight: [u8; 0x4], // 0x40
        pub m_flFeedbackDepth: [u8; 0x4], // 0x44
        pub m_flOutputGain: [u8; 0x4], // 0x48
        pub m_flTaps: [u8; 0x4], // 0x4C
    }
    #[repr(C)]
    pub struct CSosGroupActionSchema {
        pub pad_0: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct CSosSoundEventGroupSchema {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_nGroupType: [u8; 0x4], // 0x8
        pub m_bBlocksEvents: [u8; 0x4], // 0xC
        pub m_nBlockMaxCount: [u8; 0x4], // 0x10
        pub m_flMemberLifespanTime: [u8; 0x4], // 0x14
        pub m_bInvertMatch: [u8; 0x4], // 0x18
        pub m_Behavior_EventName: [u8; 0x4], // 0x1C
        pub m_matchSoundEventName: [u8; 0x8], // 0x20
        pub m_bMatchEventSubString: [u8; 0x8], // 0x28
        pub m_matchSoundEventSubString: [u8; 0x8], // 0x30
        pub m_Behavior_EntIndex: [u8; 0x4], // 0x38
        pub m_flEntIndex: [u8; 0x4], // 0x3C
        pub m_Behavior_Opvar: [u8; 0x4], // 0x40
        pub m_flOpvar: [u8; 0x4], // 0x44
        pub m_Behavior_String: [u8; 0x8], // 0x48
        pub m_opvarString: [u8; 0x8], // 0x50
        pub m_vActions: [u8; 0x18], // 0x58
    }
    #[repr(C)]
    pub struct CSndSeqInstMidiSampler {
        pub pad_0: [u8; 0x20], // 0x0
        pub m_bIsSoundEvent: [u8; 0x1], // 0x20
        pub m_bStopPrevious: [u8; 0x1], // 0x21
        pub m_nMinNote: [u8; 0x1], // 0x22
        pub m_nMaxNote: [u8; 0x1], // 0x23
        pub m_flMinVelocityAtten: [u8; 0x4], // 0x24
        pub m_flMaxVelocityAtten: [u8; 0x4], // 0x28
        pub m_flAttack: [u8; 0x4], // 0x2C
        pub m_flRelease: [u8; 0x4], // 0x30
        pub m_bBeatEnvelopes: [u8; 0xA0], // 0x34
        pub m_nNextVoiceSlot: [u8; 0x4], // 0xD4
        pub m_hSoundEventHash: [u8; 0x8], // 0xD8
    }
    #[repr(C)]
    pub struct VMixPointerFixupEntry_t {
        pub m_nIndex: [u8; 0x4], // 0x0
        pub m_offset: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct CSndSeqInstBaseSchema {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_nType: [u8; 0x6], // 0x8
        pub m_bStopCurrentEvents: [u8; 0x2], // 0xE
        pub m_flBPM: [u8; 0x4], // 0x10
        pub m_flBPMFactor: [u8; 0x4], // 0x14
        pub m_flBPMInvFactor: [u8; 0x8], // 0x18
    }
    #[repr(C)]
    pub struct VMixDynamics3BandDesc_t {
        pub m_fldbGainOutput: [u8; 0x4], // 0x0
        pub m_flRMSTimeMS: [u8; 0x4], // 0x4
        pub m_fldbKneeWidth: [u8; 0x4], // 0x8
        pub m_flDepth: [u8; 0x4], // 0xC
        pub m_flWetMix: [u8; 0x4], // 0x10
        pub m_flTimeScale: [u8; 0x4], // 0x14
        pub m_flLowCutoffFreq: [u8; 0x4], // 0x18
        pub m_flHighCutoffFreq: [u8; 0x4], // 0x1C
        pub m_bPeakMode: [u8; 0x4], // 0x20
        pub m_bandDesc: [u8; 0x6C], // 0x24
    }
    #[repr(C)]
    pub struct CVMixEQ8ProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_desc: [u8; 0xA0], // 0x28
        pub m_paramEQScale: [u8; 0x8], // 0xC8
    }
    #[repr(C)]
    pub struct CDSPMixgroupModifier {
        pub m_mixgroup: [u8; 0x8], // 0x0
        pub m_flModifier: [u8; 0x4], // 0x8
        pub m_flModifierMin: [u8; 0x4], // 0xC
        pub m_flSourceModifier: [u8; 0x4], // 0x10
        pub m_flSourceModifierMin: [u8; 0x4], // 0x14
        pub m_flListenerReverbModifierWhenSourceReverbIsActive: [u8; 0x8], // 0x18
    }
    #[repr(C)]
    pub struct CAudioMorphData {
        pub m_times: [u8; 0x18], // 0x0
        pub m_nameHashCodes: [u8; 0x18], // 0x18
        pub m_nameStrings: [u8; 0x18], // 0x30
        pub m_samples: [u8; 0x18], // 0x48
        pub m_flEaseIn: [u8; 0x4], // 0x60
        pub m_flEaseOut: [u8; 0x4], // 0x64
    }
    #[repr(C)]
    pub struct SndBeatEventKeyedFloats_t {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_flFloat: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct VMixDualCompressorDesc_t {
        pub m_flRMSTimeMS: [u8; 0x4], // 0x0
        pub m_fldbKneeWidth: [u8; 0x4], // 0x4
        pub m_flWetMix: [u8; 0x4], // 0x8
        pub m_bPeakMode: [u8; 0x4], // 0xC
        pub m_bandDesc: [u8; 0x24], // 0x10
    }
    #[repr(C)]
    pub struct CVMixRuntimeGraph {
        pub pad_0: [u8; 0xD0], // 0x0
        pub m_submixes: [u8; 0x10], // 0xD0
        pub m_impulseResponseValues: [u8; 0x10], // 0xE0
        pub m_inputDefaultValues: [u8; 0x10], // 0xF0
        pub m_sources: [u8; 0x10], // 0x100
        pub m_fixups: [u8; 0x18], // 0x110
    }
    #[repr(C)]
    pub struct CVoiceContainerStaticAdditiveSynth {
        pub pad_0: [u8; 0x88], // 0x0
        pub m_tones: [u8; 0x30], // 0x88
    }
    #[repr(C)]
    pub struct CVoiceContainerShapedNoise {
        pub pad_0: [u8; 0x78], // 0x0
        pub m_bUseCurveForFrequency: [u8; 0x4], // 0x78
        pub m_flFrequency: [u8; 0x4], // 0x7C
        pub m_frequencySweep: [u8; 0x40], // 0x80
        pub m_bUseCurveForResonance: [u8; 0x4], // 0xC0
        pub m_flResonance: [u8; 0x4], // 0xC4
        pub m_resonanceSweep: [u8; 0x40], // 0xC8
        pub m_bUseCurveForAmplitude: [u8; 0x4], // 0x108
        pub m_flGainInDecibels: [u8; 0x4], // 0x10C
        pub m_gainSweep: [u8; 0x40], // 0x110
    }
    #[repr(C)]
    pub struct CDspPresetModifierList {
        pub m_dspName: [u8; 0x8], // 0x0
        pub m_modifiers: [u8; 0x18], // 0x8
    }
    #[repr(C)]
    pub struct CVoiceContainerBase {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_bRegisteredVMix: [u8; 0x4], // 0x10
        pub m_nResourceName: [u8; 0x1C], // 0x14
        pub m_vSound: [u8; 0x40], // 0x30
        pub m_pEnvelopeAnalyzer: [u8; 0x8], // 0x70
    }
    #[repr(C)]
    pub struct CVMixDiffusorProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_desc: [u8; 0x10], // 0x28
    }
    #[repr(C)]
    pub struct CVMixUtilityProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_desc: [u8; 0x18], // 0x28
    }
    #[repr(C)]
    pub struct CRandomPannerControls {
        pub m_panningControlInputName: [u8; 0x8], // 0x0
        pub m_volumeControlInputName: [u8; 0x8], // 0x8
        pub m_flMinVolume: [u8; 0x4], // 0x10
        pub m_flMaxVolume: [u8; 0x4], // 0x14
        pub m_strVectorStackParam: [u8; 0x8], // 0x18
    }
    #[repr(C)]
    pub struct CVoiceContainerGranulator {
        pub pad_0: [u8; 0x88], // 0x0
        pub m_flGrainLength: [u8; 0x4], // 0x88
        pub m_flGrainCrossfadeAmount: [u8; 0x4], // 0x8C
        pub m_flStartJitter: [u8; 0x4], // 0x90
        pub m_flPlaybackJitter: [u8; 0x4], // 0x94
        pub m_bShouldWraparound: [u8; 0x8], // 0x98
        pub m_sourceAudio: [u8; 0x8], // 0xA0
        pub m_bDoubleBufferSourceAudio: [u8; 0x4], // 0xA8
        pub m_flMaxSourceLength: [u8; 0xCC], // 0xAC
    }
    #[repr(C)]
    pub struct CVMixPresetDSPProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_desc: [u8; 0x10], // 0x28
        pub m_paramEffectName: [u8; 0x8], // 0x38
    }
    #[repr(C)]
    pub struct VMixDelayDesc_t {
        pub m_feedbackFilter: [u8; 0x10], // 0x0
        pub m_bEnableFilter: [u8; 0x4], // 0x10
        pub m_flDelay: [u8; 0x4], // 0x14
        pub m_flDirectGain: [u8; 0x4], // 0x18
        pub m_flDelayGain: [u8; 0x4], // 0x1C
        pub m_flFeedbackGain: [u8; 0x4], // 0x20
        pub m_flWidth: [u8; 0x4], // 0x24
    }
    #[repr(C)]
    pub struct VMixEQ8Desc_t {
        pub m_stages: [u8; 0xA0], // 0x0
    }
    #[repr(C)]
    pub struct CVMixDynamicsProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_desc: [u8; 0x30], // 0x28
        pub m_outParamLevel: [u8; 0x4], // 0x58
        pub m_outParamdBLevel: [u8; 0x4], // 0x5C
    }
    #[repr(C)]
    pub struct VMixEQFilterDesc_t {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nChannelSet: [u8; 0x4], // 0x10
    }
    #[repr(C)]
    pub struct CVoiceContainerLoopXFade {
        pub pad_0: [u8; 0x78], // 0x0
        pub m_sound: [u8; 0x20], // 0x78
        pub m_flLoopEnd: [u8; 0x4], // 0x98
        pub m_flLoopStart: [u8; 0x4], // 0x9C
        pub m_flFadeOut: [u8; 0x4], // 0xA0
        pub m_flFadeIn: [u8; 0x4], // 0xA4
        pub m_bPlayHead: [u8; 0x1], // 0xA8
        pub m_bPlayTail: [u8; 0x1], // 0xA9
        pub m_bEqualPow: [u8; 0x6], // 0xAA
    }
    #[repr(C)]
    pub struct VMixPresetDSPDesc_t {
        pub m_effectName: [u8; 0x10], // 0x0
    }
    #[repr(C)]
    pub struct CAudioPhonemeTag {
        pub m_flStartTime: [u8; 0x4], // 0x0
        pub m_flEndTime: [u8; 0x4], // 0x4
        pub m_nPhonemeCode: [u8; 0x4], // 0x8
    }
    #[repr(C)]
    pub struct CVsndRadioButtonSlot {
        pub m_bEnableVsnd: [u8; 0x8], // 0x0
        pub m_vsnd: [u8; 0x20], // 0x8
        pub m_bEnableEndcap: [u8; 0x8], // 0x28
        pub m_endcapVsnd: [u8; 0x20], // 0x30
        pub m_bEnableLoopcap: [u8; 0x8], // 0x50
        pub m_loopcapVsnd: [u8; 0x20], // 0x58
        pub m_group: [u8; 0x4], // 0x78
        pub m_volume: [u8; 0x4], // 0x7C
        pub m_fadeOut: [u8; 0x4], // 0x80
        pub m_mode: [u8; 0x4], // 0x84
    }
    #[repr(C)]
    pub struct CSosGroupActionSoundeventCountSchema {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_bExcludeStoppedSounds: [u8; 0x8], // 0x8
        pub m_strCountKeyName: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CVoiceContainerEnvelopeAnalyzer {
        pub pad_0: [u8; 0x48], // 0x0
        pub m_mode: [u8; 0x4], // 0x48
        pub m_fAnalysisWindowMs: [u8; 0x4], // 0x4C
        pub m_flThreshold: [u8; 0x8], // 0x50
    }
    #[repr(C)]
    pub struct CVMixBaseProcessorDesc {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_name: [u8; 0x8], // 0x8
        pub m_nDebugId: [u8; 0x4], // 0x10
        pub m_flxfade: [u8; 0x4], // 0x14
        pub m_nChannels: [u8; 0x4], // 0x18
        pub m_bDebugBypass: [u8; 0x4], // 0x1C
        pub m_paramEnable: [u8; 0x4], // 0x20
        pub m_paramMix: [u8; 0x4], // 0x24
    }
    #[repr(C)]
    pub struct CVMixImpulseResponseInput {
        pub pad_0: [u8; 0x10], // 0x0
    }
    #[repr(C)]
    pub struct CVMixSteamAudioHybridReverbProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_paramReverbTimeLow: [u8; 0x4], // 0x28
        pub m_paramReverbTimeMid: [u8; 0x4], // 0x2C
        pub m_paramReverbTimeHigh: [u8; 0x4], // 0x30
        pub m_paramBand: [u8; 0x4], // 0x34
        pub m_paramReverbTime: [u8; 0x8], // 0x38
    }
    #[repr(C)]
    pub struct VMixPitchShiftDesc_t {
        pub m_nGrainSampleCount: [u8; 0x4], // 0x0
        pub m_flPitchShift: [u8; 0x4], // 0x4
        pub m_nQuality: [u8; 0x4], // 0x8
        pub m_nProcType: [u8; 0x4], // 0xC
    }
    #[repr(C)]
    pub struct CVMixControlOutput {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_flDefaultValue: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CVMixModDelayProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_desc: [u8; 0x30], // 0x28
        pub m_paramCutoffFrequency: [u8; 0x4], // 0x58
        pub m_paramDelay: [u8; 0x4], // 0x5C
        pub m_paramModRate: [u8; 0x4], // 0x60
        pub m_paramModDepth: [u8; 0x4], // 0x64
    }
    #[repr(C)]
    pub struct CVMixShaperProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_desc: [u8; 0x14], // 0x28
        pub m_paramDrive: [u8; 0x4], // 0x3C
    }
    #[repr(C)]
    pub struct CVMixParameterFloat {
        pub m_offset: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CVMixBaseGraphDescription {
        pub m_name: [u8; 0x8], // 0x0
        pub m_nGraphOutputChannels: [u8; 0x4], // 0x8
        pub m_bIsMainGraph: [u8; 0x4], // 0xC
        pub m_processorNodes: [u8; 0x10], // 0x10
        pub m_graphInputs: [u8; 0x10], // 0x20
        pub m_controlTransientInputs: [u8; 0x10], // 0x30
        pub m_controlOutputs: [u8; 0x10], // 0x40
        pub m_impulseResponseInputs: [u8; 0x10], // 0x50
        pub m_mixCommands: [u8; 0x10], // 0x60
        pub m_heap: [u8; 0x10], // 0x70
        pub m_audioMeters: [u8; 0x10], // 0x80
        pub m_controlMeters: [u8; 0x10], // 0x90
        pub m_nameInputMeters: [u8; 0x10], // 0xA0
        pub m_additionalOutputs: [u8; 0x10], // 0xB0
        pub m_automaticControlInputs: [u8; 0x10], // 0xC0
    }
    #[repr(C)]
    pub struct CVMixAutomaticControlInput {
        pub m_name: [u8; 0xC], // 0x0
        pub m_nGraphInputIndex: [u8; 0x4], // 0xC
        pub m_nControlType: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CSndBeatTrack {
        pub m_name: [u8; 0x20], // 0x0
        pub m_playbackType: [u8; 0x4], // 0x20
        pub m_nTranspose: [u8; 0x4], // 0x24
        pub m_bSyncToVoice: [u8; 0x4], // 0x28
        pub m_flBPM: [u8; 0x6C], // 0x2C
    }
    #[repr(C)]
    pub struct CVoiceContainerVsndRadioButton {
        pub pad_0: [u8; 0x78], // 0x0
        pub m_namespace: [u8; 0x8], // 0x78
        pub m_slot1: [u8; 0x88], // 0x80
        pub m_slot2: [u8; 0x88], // 0x108
        pub m_slot3: [u8; 0x88], // 0x190
        pub m_slot4: [u8; 0x88], // 0x218
        pub m_slot5: [u8; 0x88], // 0x2A0
        pub m_slot6: [u8; 0x88], // 0x328
        pub m_slot7: [u8; 0x88], // 0x3B0
        pub m_slot8: [u8; 0x88], // 0x438
        pub m_slot9: [u8; 0x88], // 0x4C0
        pub m_slot10: [u8; 0x88], // 0x548
        pub m_slot11: [u8; 0x88], // 0x5D0
        pub m_slot12: [u8; 0x88], // 0x658
        pub m_slot13: [u8; 0x88], // 0x6E0
        pub m_slot14: [u8; 0x88], // 0x768
        pub m_slot15: [u8; 0x88], // 0x7F0
        pub m_slot16: [u8; 0x88], // 0x878
    }
    #[repr(C)]
    pub struct CAudioEmphasisSample {
        pub m_flTime: [u8; 0x4], // 0x0
        pub m_flValue: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct CVMixOscProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_desc: [u8; 0xC], // 0x28
        pub m_paramFrequency: [u8; 0x4], // 0x34
        pub m_paramPhase: [u8; 0x8], // 0x38
    }
    #[repr(C)]
    pub struct CVoiceContainerLoopTriggerWithRandomPanner {
        pub pad_0: [u8; 0xA8], // 0x0
        pub m_randomPannerControls: [u8; 0x20], // 0xA8
    }
    #[repr(C)]
    pub struct CVoiceContainerGenerator {
        pub pad_0: [u8; 0x78], // 0x0
    }
    #[repr(C)]
    pub struct CVoiceContainerSet {
        pub pad_0: [u8; 0x78], // 0x0
        pub m_soundsToPlay: [u8; 0x30], // 0x78
    }
    #[repr(C)]
    pub struct VMixConvolutionDesc_t {
        pub m_fldbGain: [u8; 0x4], // 0x0
        pub m_flPreDelayMS: [u8; 0x4], // 0x4
        pub m_flWetMix: [u8; 0x4], // 0x8
        pub m_fldbLow: [u8; 0x4], // 0xC
        pub m_fldbMid: [u8; 0x4], // 0x10
        pub m_fldbHigh: [u8; 0x4], // 0x14
        pub m_flLowCutoffFreq: [u8; 0x4], // 0x18
        pub m_flHighCutoffFreq: [u8; 0x4], // 0x1C
    }
    #[repr(C)]
    pub struct CVoiceContainerVsndTrigger {
        pub pad_0: [u8; 0x78], // 0x0
        pub m_namespace: [u8; 0x8], // 0x78
        pub m_slot1: [u8; 0x88], // 0x80
        pub m_slot2: [u8; 0x88], // 0x108
        pub m_slot3: [u8; 0x88], // 0x190
        pub m_slot4: [u8; 0x88], // 0x218
        pub m_slot5: [u8; 0x88], // 0x2A0
        pub m_slot6: [u8; 0x88], // 0x328
        pub m_slot7: [u8; 0x88], // 0x3B0
        pub m_slot8: [u8; 0x88], // 0x438
        pub m_slot9: [u8; 0x88], // 0x4C0
        pub m_slot10: [u8; 0x88], // 0x548
        pub m_slot11: [u8; 0x88], // 0x5D0
        pub m_slot12: [u8; 0x88], // 0x658
        pub m_slot13: [u8; 0x88], // 0x6E0
        pub m_slot14: [u8; 0x88], // 0x768
        pub m_slot15: [u8; 0x88], // 0x7F0
        pub m_slot16: [u8; 0x88], // 0x878
    }
    #[repr(C)]
    pub struct CVoiceContainerSetElement {
        pub m_sound: [u8; 0x20], // 0x0
        pub m_flVolumeDB: [u8; 0x8], // 0x20
    }
    #[repr(C)]
    pub struct CSndBeatPatternManager {
        pub pad_0: [u8; 0x38], // 0x0
        pub m_vecPatterns: [u8; 0x38], // 0x38
        pub m_vecActiveTracks: [u8; 0x20], // 0x70
    }
    #[repr(C)]
    pub struct CVoiceContainerAsyncGenerator {
        pub pad_0: [u8; 0x88], // 0x0
    }
    #[repr(C)]
    pub struct CSoundInfoHeader {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct CVMixDescription {
        pub pad_0: [u8; 0xD0], // 0x0
        pub m_submixList: [u8; 0x10], // 0xD0
        pub m_sources: [u8; 0x10], // 0xE0
        pub m_impulseResponseValues: [u8; 0x10], // 0xF0
        pub m_nNameHashCode: [u8; 0x10], // 0x100
    }
    #[repr(C)]
    pub struct SosEditItemInfo_t {
        pub itemType: [u8; 0x8], // 0x0
        pub itemName: [u8; 0x8], // 0x8
        pub itemTypeName: [u8; 0x10], // 0x10
        pub itemKVString: [u8; 0x8], // 0x20
        pub itemPos: [u8; 0x8], // 0x28
    }
    #[repr(C)]
    pub struct CVMixSubmix {
        pub m_name: [u8; 0x8], // 0x0
        pub m_SendNames: [u8; 0x24], // 0x8
        pub m_nSoloNameHash: [u8; 0x4], // 0x2C
        pub m_nChannels: [u8; 0x4], // 0x30
        pub m_nSendOperator: [u8; 0x2], // 0x34
        pub m_nMixDownRule: [u8; 0x1], // 0x36
        pub m_nUpMixRule: [u8; 0x1], // 0x37
    }
    #[repr(C)]
    pub struct CVMixFlangerProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_desc: [u8; 0x24], // 0x28
        pub m_paramDelay: [u8; 0x4], // 0x4C
        pub m_paramModRate: [u8; 0x4], // 0x50
        pub m_paramModDepth: [u8; 0x4], // 0x54
    }
    #[repr(C)]
    pub struct CVMixEffectChainProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_desc: [u8; 0x8], // 0x28
        pub m_paramEffectName: [u8; 0x8], // 0x30
    }
    #[repr(C)]
    pub struct KeyGroup_t {
        pub nCenterNote: [u8; 0x1], // 0x0
        pub nMinNote: [u8; 0x1], // 0x1
        pub nMaxNote: [u8; 0x1], // 0x2
        pub nNumVelocityZones: [u8; 0x5], // 0x3
        pub pVelocityZones: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct CVMixFreeverbProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_desc: [u8; 0x10], // 0x28
    }
    #[repr(C)]
    pub struct VMixPlateverbDesc_t {
        pub m_flPrefilter: [u8; 0x4], // 0x0
        pub m_flInputDiffusion1: [u8; 0x4], // 0x4
        pub m_flInputDiffusion2: [u8; 0x4], // 0x8
        pub m_flDecay: [u8; 0x4], // 0xC
        pub m_flDamp: [u8; 0x4], // 0x10
        pub m_flFeedbackDiffusion1: [u8; 0x4], // 0x14
        pub m_flFeedbackDiffusion2: [u8; 0x4], // 0x18
    }
    #[repr(C)]
    pub struct CVMixConvolutionProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_desc: [u8; 0x20], // 0x28
        pub m_paramImpulseResponse: [u8; 0x8], // 0x48
    }
    #[repr(C)]
    pub struct CVMixParameterBool {
        pub m_offset: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct CSoundContainerReferenceArray {
        pub m_bUseReference: [u8; 0x8], // 0x0
        pub m_sounds: [u8; 0x18], // 0x8
        pub m_pSounds: [u8; 0x18], // 0x20
    }
    #[repr(C)]
    pub struct CVMixFilterProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_desc: [u8; 0x10], // 0x28
        pub m_paramCutoffFreq: [u8; 0x4], // 0x38
        pub m_paramQ: [u8; 0x4], // 0x3C
    }
    #[repr(C)]
    pub struct CVMixAdditionalOutput {
        pub m_name: [u8; 0x10], // 0x0
    }
    #[repr(C)]
    pub struct CVoiceContainerTapePlayer {
        pub pad_0: [u8; 0x88], // 0x0
        pub m_bShouldWraparound: [u8; 0x8], // 0x88
        pub m_sourceAudio: [u8; 0x8], // 0x90
        pub m_flTapeSpeedAttackTime: [u8; 0x4], // 0x98
        pub m_flTapeSpeedReleaseTime: [u8; 0x3C], // 0x9C
    }
    #[repr(C)]
    pub struct CVMixSubgraphSwitchProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_desc: [u8; 0x38], // 0x28
        pub m_paramEffectName: [u8; 0x4], // 0x60
        pub m_paramSelectionIndex: [u8; 0x4], // 0x64
    }
    #[repr(C)]
    pub struct VMixDiffusorDesc_t {
        pub m_flSize: [u8; 0x4], // 0x0
        pub m_flComplexity: [u8; 0x4], // 0x4
        pub m_flFeedback: [u8; 0x4], // 0x8
        pub m_flOutputGain: [u8; 0x4], // 0xC
    }
    #[repr(C)]
    pub struct CVMixSteamAudioPathingProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_paramPositionX: [u8; 0x4], // 0x28
        pub m_paramPositionY: [u8; 0x4], // 0x2C
        pub m_paramPositionZ: [u8; 0x4], // 0x30
        pub m_paramPathingMixLevel: [u8; 0x4], // 0x34
        pub m_paramBand: [u8; 0x4], // 0x38
        pub m_paramArrayPathingEQ: [u8; 0x4], // 0x3C
        pub m_paramArrayPathingCoefficients: [u8; 0x8], // 0x40
    }
    #[repr(C)]
    pub struct CVMixPannerProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_desc: [u8; 0x8], // 0x28
        pub m_paramPan: [u8; 0x8], // 0x30
    }
    #[repr(C)]
    pub struct VMixDynamicsCompressorDesc_t {
        pub m_fldbOutputGain: [u8; 0x4], // 0x0
        pub m_fldbCompressionThreshold: [u8; 0x4], // 0x4
        pub m_fldbKneeWidth: [u8; 0x4], // 0x8
        pub m_flCompressionRatio: [u8; 0x4], // 0xC
        pub m_flAttackTimeMS: [u8; 0x4], // 0x10
        pub m_flReleaseTimeMS: [u8; 0x4], // 0x14
        pub m_flRMSTimeMS: [u8; 0x4], // 0x18
        pub m_flWetMix: [u8; 0x4], // 0x1C
        pub m_flSCHighPassFreq: [u8; 0x4], // 0x20
        pub m_bPeakMode: [u8; 0x1], // 0x24
        pub m_bAutoMakeupGain: [u8; 0x3], // 0x25
    }
    #[repr(C)]
    pub struct CVMixHeap {
        pub m_storage: [u8; 0x10], // 0x0
    }
    #[repr(C)]
    pub struct CVoiceContainerVMixSnd {
        pub pad_0: [u8; 0x188], // 0x0
        pub m_resourceName: [u8; 0x8], // 0x188
    }
    #[repr(C)]
    pub struct CVMixStereoDelayProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_paramDelayLeft: [u8; 0x4], // 0x28
        pub m_paramDelayRight: [u8; 0x4], // 0x2C
    }
    #[repr(C)]
    pub struct VMixShaperDesc_t {
        pub m_nShape: [u8; 0x4], // 0x0
        pub m_fldbDrive: [u8; 0x4], // 0x4
        pub m_fldbOutputGain: [u8; 0x4], // 0x8
        pub m_flWetMix: [u8; 0x4], // 0xC
        pub m_nOversampleFactor: [u8; 0x4], // 0x10
    }
    #[repr(C)]
    pub struct CVMixDataOffset {
        pub m_nOffset: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct VMixEnvelopeDesc_t {
        pub m_flAttackTimeMS: [u8; 0x4], // 0x0
        pub m_flHoldTimeMS: [u8; 0x4], // 0x4
        pub m_flReleaseTimeMS: [u8; 0x4], // 0x8
    }
    #[repr(C)]
    pub struct CAudioSentence {
        pub m_bShouldVoiceDuck: [u8; 0x8], // 0x0
        pub m_RunTimePhonemes: [u8; 0x18], // 0x8
        pub m_EmphasisSamples: [u8; 0x18], // 0x20
        pub m_morphData: [u8; 0x68], // 0x38
    }
    #[repr(C)]
    pub struct CVoiceContainerParameterBlender {
        pub pad_0: [u8; 0x78], // 0x0
        pub m_firstSound: [u8; 0x20], // 0x78
        pub m_secondSound: [u8; 0x20], // 0x98
        pub m_bEnableOcclusionBlend: [u8; 0x8], // 0xB8
        pub m_curve1: [u8; 0x40], // 0xC0
        pub m_curve2: [u8; 0x40], // 0x100
        pub m_bEnableDistanceBlend: [u8; 0x8], // 0x140
        pub m_curve3: [u8; 0x40], // 0x148
        pub m_curve4: [u8; 0x40], // 0x188
    }
    #[repr(C)]
    pub struct CVMixAudioMeter {
        pub m_name: [u8; 0x8], // 0x0
        pub m_displayName: [u8; 0x8], // 0x8
        pub m_nDebugId: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CVMixVocoderProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_desc: [u8; 0x28], // 0x28
        pub m_paramBandwidth: [u8; 0x8], // 0x50
    }
    #[repr(C)]
    pub struct CSosGroupActionLimitSchema {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_nMaxCount: [u8; 0x4], // 0x8
        pub m_nStopType: [u8; 0x4], // 0xC
        pub m_nSortType: [u8; 0x4], // 0x10
        pub m_bStopImmediate: [u8; 0x1], // 0x14
        pub m_bCountStopped: [u8; 0x3], // 0x15
    }
    #[repr(C)]
    pub struct CVoiceContainerAmpedDecayingSineWave {
        pub pad_0: [u8; 0x80], // 0x0
        pub m_flGainAmount: [u8; 0x8], // 0x80
    }
    #[repr(C)]
    pub struct VMixAutoFilterDesc_t {
        pub m_flEnvelopeAmount: [u8; 0x4], // 0x0
        pub m_flAttackTimeMS: [u8; 0x4], // 0x4
        pub m_flReleaseTimeMS: [u8; 0x4], // 0x8
        pub m_filter: [u8; 0x10], // 0xC
        pub m_flLFOAmount: [u8; 0x4], // 0x1C
        pub m_flLFORate: [u8; 0x4], // 0x20
        pub m_flPhase: [u8; 0x4], // 0x24
        pub m_nLFOShape: [u8; 0x4], // 0x28
    }
    #[repr(C)]
    pub struct VMixDynamicsBand_t {
        pub m_fldbGainInput: [u8; 0x4], // 0x0
        pub m_fldbGainOutput: [u8; 0x4], // 0x4
        pub m_fldbThresholdBelow: [u8; 0x4], // 0x8
        pub m_fldbThresholdAbove: [u8; 0x4], // 0xC
        pub m_flRatioBelow: [u8; 0x4], // 0x10
        pub m_flRatioAbove: [u8; 0x4], // 0x14
        pub m_flAttackTimeMS: [u8; 0x4], // 0x18
        pub m_flReleaseTimeMS: [u8; 0x4], // 0x1C
        pub m_bEnable: [u8; 0x1], // 0x20
        pub m_bSolo: [u8; 0x3], // 0x21
    }
    #[repr(C)]
    pub struct VMixEffectChainDesc_t {
        pub m_effectName: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct CVMixPlateReverbProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_desc: [u8; 0x20], // 0x28
    }
    #[repr(C)]
    pub struct CVoiceContainerMultiBlender {
        pub pad_0: [u8; 0x78], // 0x0
        pub m_soundsToPlay: [u8; 0x38], // 0x78
        pub m_flBlendFactor: [u8; 0x4], // 0xB0
        pub m_flCrossover: [u8; 0x4], // 0xB4
    }
    #[repr(C)]
    pub struct CVMixVsndInput {
        pub m_defaultValue: [u8; 0x18], // 0x0
    }
    #[repr(C)]
    pub struct CVoiceContainerStaticAdditiveSynth__CGainScalePerInstance {
        pub m_flMinVolume: [u8; 0x4], // 0x0
        pub m_nInstancesAtMinVolume: [u8; 0x4], // 0x4
        pub m_flMaxVolume: [u8; 0x4], // 0x8
        pub m_nInstancesAtMaxVolume: [u8; 0x4], // 0xC
    }
    #[repr(C)]
    pub struct CVMixParameterEffectName {
        pub m_offset: [u8; 0x4], // 0x0
    }
    #[repr(C)]
    pub struct SndBeatTimeSignature_t {
        pub nNumerator: [u8; 0x1], // 0x0
        pub nDenominator: [u8; 0x1], // 0x1
    }
    #[repr(C)]
    pub struct VelocityZone_t {
        pub nMaxVel: [u8; 0x1], // 0x0
        pub nNextSelection: [u8; 0x1], // 0x1
        pub nNumSamples: [u8; 0x2], // 0x2
        pub pSamples: [u8; 0x10], // 0x4
    }
    #[repr(C)]
    pub struct CVoiceContainerSelector {
        pub pad_0: [u8; 0x78], // 0x0
        pub m_mode: [u8; 0x8], // 0x78
        pub m_soundsToPlay: [u8; 0x38], // 0x80
        pub m_fProbabilityWeights: [u8; 0x38], // 0xB8
    }
    #[repr(C)]
    pub struct SndBeatEventKeyedSndEvts_t {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_strSoundEventName: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CVMixGraphInput {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nOffset: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CSosGroupActionTimeBlockLimitSchema {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_nMaxCount: [u8; 0x4], // 0x8
        pub m_flMaxDuration: [u8; 0x4], // 0xC
    }
    #[repr(C)]
    pub struct SndBeatEventKeyedMidiNotes_t {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nStatus: [u8; 0x1], // 0x10
        pub m_nNote: [u8; 0x1], // 0x11
        pub m_nVelocity: [u8; 0x6], // 0x12
    }
    #[repr(C)]
    pub struct CSosGroupActionMemberCountEnvelopeSchema {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_nBaseCount: [u8; 0x4], // 0x8
        pub m_nTargetCount: [u8; 0x4], // 0xC
        pub m_flBaseValue: [u8; 0x4], // 0x10
        pub m_flTargetValue: [u8; 0x4], // 0x14
        pub m_flAttack: [u8; 0x4], // 0x18
        pub m_flDecay: [u8; 0x4], // 0x1C
        pub m_resultVarName: [u8; 0x8], // 0x20
        pub m_bSaveToGroup: [u8; 0x8], // 0x28
    }
    #[repr(C)]
    pub struct CVMixDualCompressorProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_desc: [u8; 0x34], // 0x28
        pub m_outParamLevel: [u8; 0x4], // 0x5C
        pub m_outParamdBLevel: [u8; 0x4], // 0x60
        pub m_outParamReduction: [u8; 0x4], // 0x64
    }
    #[repr(C)]
    pub struct CVoiceContainerSwitch {
        pub pad_0: [u8; 0x78], // 0x0
        pub m_soundsToPlay: [u8; 0x18], // 0x78
    }
    #[repr(C)]
    pub struct CVMixControlMeter {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nValueIndex: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CVoiceContainerEnum {
        pub pad_0: [u8; 0x78], // 0x0
        pub m_soundsToPlay: [u8; 0x38], // 0x78
        pub m_iSelection: [u8; 0x4], // 0xB0
        pub m_flCrossfadeTime: [u8; 0x4], // 0xB4
    }
    #[repr(C)]
    pub struct CSosGroupActionTimeLimitSchema {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_flMaxDuration: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct VMixVocoderDesc_t {
        pub m_nBandCount: [u8; 0x4], // 0x0
        pub m_flBandwidth: [u8; 0x4], // 0x4
        pub m_fldBModGain: [u8; 0x4], // 0x8
        pub m_flFreqRangeStart: [u8; 0x4], // 0xC
        pub m_flFreqRangeEnd: [u8; 0x4], // 0x10
        pub m_fldBUnvoicedGain: [u8; 0x4], // 0x14
        pub m_flAttackTimeMS: [u8; 0x4], // 0x18
        pub m_flReleaseTimeMS: [u8; 0x4], // 0x1C
        pub m_nDebugBand: [u8; 0x4], // 0x20
        pub m_bPeakMode: [u8; 0x4], // 0x24
    }
    #[repr(C)]
    pub struct VMixUtilityDesc_t {
        pub m_nOp: [u8; 0x4], // 0x0
        pub m_flInputPan: [u8; 0x4], // 0x4
        pub m_flOutputBalance: [u8; 0x4], // 0x8
        pub m_fldbOutputGain: [u8; 0x4], // 0xC
        pub m_bBassMono: [u8; 0x4], // 0x10
        pub m_flBassFreq: [u8; 0x4], // 0x14
    }
    #[repr(C)]
    pub struct CVoiceContainerLoopTrigger {
        pub pad_0: [u8; 0x78], // 0x0
        pub m_flRetriggerTimeMin: [u8; 0x4], // 0x78
        pub m_flRetriggerTimeMax: [u8; 0x4], // 0x7C
        pub m_flFadeTime: [u8; 0x4], // 0x80
        pub m_bCrossFade: [u8; 0x4], // 0x84
        pub m_sound: [u8; 0x20], // 0x88
    }
    #[repr(C)]
    pub struct SndBeatEventKeys_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_flKey: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct CVoiceContainerDecayingSineWave {
        pub pad_0: [u8; 0x78], // 0x0
        pub m_flFrequency: [u8; 0x4], // 0x78
        pub m_flDecayTime: [u8; 0x4], // 0x7C
    }
    #[repr(C)]
    pub struct CVMixDelayProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_desc: [u8; 0x28], // 0x28
        pub m_paramCutoffFrequency: [u8; 0x4], // 0x50
        pub m_paramDelay: [u8; 0x4], // 0x54
    }
    #[repr(C)]
    pub struct CVMixBoxverb2ProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_desc: [u8; 0x50], // 0x28
    }
    #[repr(C)]
    pub struct VMixFilterDesc_t {
        pub m_fldbGain: [u8; 0x4], // 0x0
        pub m_flCutoffFreq: [u8; 0x4], // 0x4
        pub m_flQ: [u8; 0x4], // 0x8
        pub m_nFilterType: [u8; 0x1], // 0xC
        pub m_nFilterSlope: [u8; 0x1], // 0xD
        pub m_bEnabled: [u8; 0x2], // 0xE
    }
    #[repr(C)]
    pub struct CSndBeatPattern {
        pub m_name: [u8; 0xC], // 0x0
        pub m_flSyncPriority: [u8; 0x4], // 0xC
        pub m_syncStartType: [u8; 0x4], // 0x10
        pub m_syncType: [u8; 0x4], // 0x14
        pub m_timeSignature: [u8; 0x8], // 0x18
        pub m_flLength: [u8; 0x4], // 0x20
        pub m_bLooping: [u8; 0x4], // 0x24
        pub m_playEventType: [u8; 0x4], // 0x28
        pub m_flPlayBeatMult: [u8; 0x4], // 0x2C
        pub m_playKeyType: [u8; 0x8], // 0x30
        pub m_vecPatternKeys: [u8; 0x18], // 0x38
        pub m_vecPatternFloats: [u8; 0x18], // 0x50
        pub m_vecPatternSndEvts: [u8; 0x18], // 0x68
        pub m_vecPatternMidi: [u8; 0x18], // 0x80
        pub m_syncEventType: [u8; 0x4], // 0x98
        pub m_flSyncBeatMult: [u8; 0x4], // 0x9C
        pub m_vecSyncPatternKeys: [u8; 0x18], // 0xA0
    }
    #[repr(C)]
    pub struct CSubmix {
        pub pad_0: [u8; 0x50], // 0x0
    }
    #[repr(C)]
    pub struct VMixOscDesc_t {
        pub oscType: [u8; 0x4], // 0x0
        pub m_freq: [u8; 0x4], // 0x4
        pub m_flPhase: [u8; 0x4], // 0x8
    }
    #[repr(C)]
    pub struct CVMixAutoFilterProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub m_desc: [u8; 0x30], // 0x28
    }
    #[repr(C)]
    pub struct ISndSeqInstruments {
        pub pad_0: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct VMixFlangerDesc_t {
        pub m_bPhaseInvert: [u8; 0x4], // 0x0
        pub m_flGlideTime: [u8; 0x4], // 0x4
        pub m_flDelay: [u8; 0x4], // 0x8
        pub m_flOutputGain: [u8; 0x4], // 0xC
        pub m_flFeedbackGain: [u8; 0x4], // 0x10
        pub m_flFeedforwardGain: [u8; 0x4], // 0x14
        pub m_flModRate: [u8; 0x4], // 0x18
        pub m_flModDepth: [u8; 0x4], // 0x1C
        pub m_bApplyAntialiasing: [u8; 0x4], // 0x20
    }
    #[repr(C)]
    pub struct VMixDynamicsDesc_t {
        pub m_fldbGain: [u8; 0x4], // 0x0
        pub m_fldbNoiseGateThreshold: [u8; 0x4], // 0x4
        pub m_fldbCompressionThreshold: [u8; 0x4], // 0x8
        pub m_fldbLimiterThreshold: [u8; 0x4], // 0xC
        pub m_fldbKneeWidth: [u8; 0x4], // 0x10
        pub m_flRatio: [u8; 0x4], // 0x14
        pub m_flLimiterRatio: [u8; 0x4], // 0x18
        pub m_flAttackTimeMS: [u8; 0x4], // 0x1C
        pub m_flReleaseTimeMS: [u8; 0x4], // 0x20
        pub m_flRMSTimeMS: [u8; 0x4], // 0x24
        pub m_flWetMix: [u8; 0x4], // 0x28
        pub m_bPeakMode: [u8; 0x4], // 0x2C
    }
}
