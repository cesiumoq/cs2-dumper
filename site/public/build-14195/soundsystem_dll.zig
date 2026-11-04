/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

pub const soundsystem = struct {

    pub const CVMixInputBase = extern struct {
        m_name: [0x10]u8, // 0x0
    };
    pub const CVoiceContainerBlender = extern struct {
        pad_0: [0x78]u8, // 0x0
        m_firstSound: [0x20]u8, // 0x78
        m_secondSound: [0x20]u8, // 0x98
        m_flBlendFactor: [0x8]u8, // 0xB8
    };
    pub const CVMixPitchShiftProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_desc: [0x10]u8, // 0x28
        m_paramPitchScale: [0x8]u8, // 0x38
    };
    pub const VMixFreeverbDesc_t = extern struct {
        m_flRoomSize: [0x4]u8, // 0x0
        m_flDamp: [0x4]u8, // 0x4
        m_flWidth: [0x4]u8, // 0x8
        m_flLateReflections: [0x4]u8, // 0xC
    };
    pub const CVoiceContainerStaticAdditiveSynth__CHarmonic = extern struct {
        m_nWaveform: [0x1]u8, // 0x0
        m_nFundamental: [0x3]u8, // 0x1
        m_nOctave: [0x4]u8, // 0x4
        m_flCents: [0x4]u8, // 0x8
        m_flPhase: [0x4]u8, // 0xC
        m_curve: [0x40]u8, // 0x10
        m_volumeScaling: [0x18]u8, // 0x50
    };
    pub const CVsndTriggerSlot = extern struct {
        m_bEnableVsnd: [0x8]u8, // 0x0
        m_vsnd: [0x20]u8, // 0x8
        m_bEnableEndcap: [0x8]u8, // 0x28
        m_endcapVsnd: [0x20]u8, // 0x30
        m_bEnableLoopcap: [0x8]u8, // 0x50
        m_loopcapVsnd: [0x20]u8, // 0x58
        m_volume: [0x4]u8, // 0x78
        m_fadeOut: [0x4]u8, // 0x7C
        m_mode: [0x8]u8, // 0x80
    };
    pub const CVoiceContainerStaticAdditiveSynth__CTone = extern struct {
        m_harmonics: [0x18]u8, // 0x0
        m_curve: [0x40]u8, // 0x18
        m_bSyncInstances: [0x8]u8, // 0x58
    };
    pub const CSosGroupActionOcclusionSchema = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_flCalculationInterval: [0x4]u8, // 0x8
        m_flRadius: [0x4]u8, // 0xC
        m_flOcclusionScale: [0x4]u8, // 0x10
        m_flOcclusionMin: [0x4]u8, // 0x14
        m_flOcclusionMax: [0x4]u8, // 0x18
        m_flTestDepth: [0x4]u8, // 0x1C
    };
    pub const CVoiceContainerRandomSampler = extern struct {
        pad_0: [0x88]u8, // 0x0
        m_flAmplitude: [0x4]u8, // 0x88
        m_flAmplitudeJitter: [0x4]u8, // 0x8C
        m_flTimeJitter: [0x4]u8, // 0x90
        m_flMaxLength: [0x4]u8, // 0x94
        m_nNumDelayVariations: [0x8]u8, // 0x98
        m_grainResources: [0x110]u8, // 0xA0
    };
    pub const CVMixSteamAudioDirectProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_paramPositionX: [0x4]u8, // 0x28
        m_paramPositionY: [0x4]u8, // 0x2C
        m_paramPositionZ: [0x4]u8, // 0x30
        m_paramRightX: [0x4]u8, // 0x34
        m_paramRightY: [0x4]u8, // 0x38
        m_paramRightZ: [0x4]u8, // 0x3C
        m_paramUpX: [0x4]u8, // 0x40
        m_paramUpY: [0x4]u8, // 0x44
        m_paramUpZ: [0x4]u8, // 0x48
        m_paramAheadX: [0x4]u8, // 0x4C
        m_paramAheadY: [0x4]u8, // 0x50
        m_paramAheadZ: [0x4]u8, // 0x54
        m_paramApplyDistanceAttenuation: [0x4]u8, // 0x58
        m_paramApplyAirAbsorption: [0x4]u8, // 0x5C
        m_paramApplyDirectivity: [0x4]u8, // 0x60
        m_paramApplyOcclusion: [0x4]u8, // 0x64
        m_paramApplyTransmission: [0x4]u8, // 0x68
        m_paramDipoleWeight: [0x4]u8, // 0x6C
        m_paramDipolePower: [0x4]u8, // 0x70
        m_paramOcclusion: [0x4]u8, // 0x74
        m_paramTransmissionLow: [0x4]u8, // 0x78
        m_paramTransmissionMid: [0x4]u8, // 0x7C
        m_paramTransmissionHigh: [0x4]u8, // 0x80
        m_paramBand: [0x4]u8, // 0x84
        m_paramTransmission: [0x8]u8, // 0x88
    };
    pub const CVMixSteamAudioHRTFProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_paramPositionX: [0x4]u8, // 0x28
        m_paramPositionY: [0x4]u8, // 0x2C
        m_paramPositionZ: [0x4]u8, // 0x30
        m_paramInterpolation: [0x4]u8, // 0x34
        m_paramDirectMixLevel: [0x4]u8, // 0x38
        m_paramPerspectiveCorrection: [0x4]u8, // 0x3C
        m_paramRelativePosition: [0x4]u8, // 0x40
        m_paramDelayLeft: [0x4]u8, // 0x44
        m_paramDelayRight: [0x8]u8, // 0x48
    };
    pub const CVoiceContainerDefault = extern struct {
        pad_0: [0x78]u8, // 0x0
    };
    pub const CVSound = extern struct {
        m_Sentences: [0x10]u8, // 0x0
        m_nRate: [0x4]u8, // 0x10
        m_nFormat: [0x4]u8, // 0x14
        m_nChannels: [0x4]u8, // 0x18
        m_nLoopStart: [0x4]u8, // 0x1C
        m_nSampleCount: [0x4]u8, // 0x20
        m_flDuration: [0x4]u8, // 0x24
        m_nStreamingSize: [0x4]u8, // 0x28
        m_nLoopEnd: [0x14]u8, // 0x2C
    };
    pub const CDSPPresetMixgroupModifierTable = extern struct {
        m_table: [0x18]u8, // 0x0
    };
    pub const CSosGroupActionSoundeventClusterSchema = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_nMinNearby: [0x4]u8, // 0x8
        m_flClusterEpsilon: [0x4]u8, // 0xC
        m_shouldPlayOpvar: [0x8]u8, // 0x10
        m_shouldPlayClusterChild: [0x8]u8, // 0x18
        m_clusterSizeOpvar: [0x8]u8, // 0x20
        m_groupBoundingBoxMinsOpvar: [0x8]u8, // 0x28
        m_groupBoundingBoxMaxsOpvar: [0x20]u8, // 0x30
    };
    pub const CSosGroupActionSetSoundeventParameterSchema = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_nMaxCount: [0x4]u8, // 0x8
        m_flMinValue: [0x4]u8, // 0xC
        m_flMaxValue: [0x8]u8, // 0x10
        m_opvarName: [0x8]u8, // 0x18
        m_nSortType: [0x8]u8, // 0x20
    };
    pub const CSoundContainerReference = extern struct {
        m_namespace: [0x8]u8, // 0x0
        m_bUseReference: [0x8]u8, // 0x8
        m_sound: [0x8]u8, // 0x10
        m_pSound: [0x8]u8, // 0x18
    };
    pub const CVoiceContainerNull = extern struct {
        pad_0: [0x78]u8, // 0x0
    };
    pub const VMixSubgraphSwitchDesc_t = extern struct {
        m_name: [0x8]u8, // 0x0
        m_effectName: [0x8]u8, // 0x8
        m_subgraphs: [0x18]u8, // 0x10
        m_interpolationMode: [0x4]u8, // 0x28
        m_bOnlyTailsOnFadeOut: [0x4]u8, // 0x2C
        m_flInterpolationTime: [0x8]u8, // 0x30
    };
    pub const CVoiceContainerAnalysisBase = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_curve: [0x40]u8, // 0x8
    };
    pub const CSosGroupActionSoundeventMinMaxValuesSchema = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_strQueryPublicFieldName: [0x8]u8, // 0x8
        m_strDelayPublicFieldName: [0x8]u8, // 0x10
        m_bExcludeStoppedSounds: [0x1]u8, // 0x18
        m_bExcludeDelayedSounds: [0x1]u8, // 0x19
        m_bExcludeSoundsBelowThreshold: [0x2]u8, // 0x1A
        m_flExcludeSoundsMinThresholdValue: [0x4]u8, // 0x1C
        m_bExcludSoundsAboveThreshold: [0x4]u8, // 0x20
        m_flExcludeSoundsMaxThresholdValue: [0x4]u8, // 0x24
        m_strMinValueName: [0x8]u8, // 0x28
        m_strMaxValueName: [0x10]u8, // 0x30
    };
    pub const CVMixEnvelopeProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_desc: [0xC]u8, // 0x28
        m_outParamLevel: [0x4]u8, // 0x34
        m_outParamdBLevel: [0x8]u8, // 0x38
    };
    pub const CVMixCommand = extern struct {
        m_nCommand: [0x4]u8, // 0x0
        m_nParameterNameHash: [0x4]u8, // 0x4
        m_nOutputSubmix: [0x4]u8, // 0x8
        m_nInputSubmix0: [0x4]u8, // 0xC
        m_nInputSubmix1: [0x4]u8, // 0x10
        m_nProcessor: [0x4]u8, // 0x14
        m_nInputValue0: [0x4]u8, // 0x18
        m_nInputValue1: [0x4]u8, // 0x1C
    };
    pub const SamplerVoice_t = extern struct {
        nNoteNum: [0x8]u8, // 0x0
    };
    pub const CVMixControlInput = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_flDefaultValue: [0x8]u8, // 0x10
    };
    pub const CVMixBoxverbProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_desc: [0x50]u8, // 0x28
    };
    pub const CVMixDynamicsCompressorProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_desc: [0x28]u8, // 0x28
        m_outParamLevel: [0x4]u8, // 0x50
        m_outParamdBLevel: [0x4]u8, // 0x54
        m_outParamReduction: [0x8]u8, // 0x58
    };
    pub const VMixPannerDesc_t = extern struct {
        m_type: [0x4]u8, // 0x0
        m_flStrength: [0x4]u8, // 0x4
    };
    pub const CSosGroupActionSoundeventPrioritySchema = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_priorityValue: [0x8]u8, // 0x8
        m_priorityVolumeScalar: [0x8]u8, // 0x10
        m_priorityContributeButDontRead: [0x8]u8, // 0x18
        m_bPriorityReadButDontContribute: [0x18]u8, // 0x20
    };
    pub const CVoiceContainerRealtimeFMSineWave = extern struct {
        pad_0: [0x78]u8, // 0x0
        m_flCarrierFrequency: [0x4]u8, // 0x78
        m_flModulatorFrequency: [0x4]u8, // 0x7C
        m_flModulatorAmount: [0x8]u8, // 0x80
    };
    pub const SelectedEditItemInfo_t = extern struct {
        m_EditItems: [0x18]u8, // 0x0
    };
    pub const VMixModDelayDesc_t = extern struct {
        m_feedbackFilter: [0x10]u8, // 0x0
        m_bPhaseInvert: [0x4]u8, // 0x10
        m_flGlideTime: [0x4]u8, // 0x14
        m_flDelay: [0x4]u8, // 0x18
        m_flOutputGain: [0x4]u8, // 0x1C
        m_flFeedbackGain: [0x4]u8, // 0x20
        m_flModRate: [0x4]u8, // 0x24
        m_flModDepth: [0x4]u8, // 0x28
        m_bApplyAntialiasing: [0x4]u8, // 0x2C
    };
    pub const CSndSeqInstSndEvtSchema = extern struct {
        pad_0: [0x20]u8, // 0x0
    };
    pub const CVMixNameInputMeter = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nValueIndex: [0x8]u8, // 0x10
    };
    pub const CSndSeqInstruments = extern struct {
        pad_0: [0x28]u8, // 0x0
    };
    pub const CVMixDynamics3BandProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_desc: [0x90]u8, // 0x28
    };
    pub const VMixBoxverbDesc_t = extern struct {
        m_flSizeMax: [0x4]u8, // 0x0
        m_flSizeMin: [0x4]u8, // 0x4
        m_flComplexity: [0x4]u8, // 0x8
        m_flDiffusion: [0x4]u8, // 0xC
        m_flModDepth: [0x4]u8, // 0x10
        m_flModRate: [0x4]u8, // 0x14
        m_bParallel: [0x4]u8, // 0x18
        m_filterType: [0x10]u8, // 0x1C
        m_flWidth: [0x4]u8, // 0x2C
        m_flHeight: [0x4]u8, // 0x30
        m_flDepth: [0x4]u8, // 0x34
        m_flFeedbackScale: [0x4]u8, // 0x38
        m_flFeedbackWidth: [0x4]u8, // 0x3C
        m_flFeedbackHeight: [0x4]u8, // 0x40
        m_flFeedbackDepth: [0x4]u8, // 0x44
        m_flOutputGain: [0x4]u8, // 0x48
        m_flTaps: [0x4]u8, // 0x4C
    };
    pub const CSosGroupActionSchema = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const CSosSoundEventGroupSchema = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_nGroupType: [0x4]u8, // 0x8
        m_bBlocksEvents: [0x4]u8, // 0xC
        m_nBlockMaxCount: [0x4]u8, // 0x10
        m_flMemberLifespanTime: [0x4]u8, // 0x14
        m_bInvertMatch: [0x4]u8, // 0x18
        m_Behavior_EventName: [0x4]u8, // 0x1C
        m_matchSoundEventName: [0x8]u8, // 0x20
        m_bMatchEventSubString: [0x8]u8, // 0x28
        m_matchSoundEventSubString: [0x8]u8, // 0x30
        m_Behavior_EntIndex: [0x4]u8, // 0x38
        m_flEntIndex: [0x4]u8, // 0x3C
        m_Behavior_Opvar: [0x4]u8, // 0x40
        m_flOpvar: [0x4]u8, // 0x44
        m_Behavior_String: [0x8]u8, // 0x48
        m_opvarString: [0x8]u8, // 0x50
        m_vActions: [0x18]u8, // 0x58
    };
    pub const CSndSeqInstMidiSampler = extern struct {
        pad_0: [0x20]u8, // 0x0
        m_bIsSoundEvent: [0x1]u8, // 0x20
        m_bStopPrevious: [0x1]u8, // 0x21
        m_nMinNote: [0x1]u8, // 0x22
        m_nMaxNote: [0x1]u8, // 0x23
        m_flMinVelocityAtten: [0x4]u8, // 0x24
        m_flMaxVelocityAtten: [0x4]u8, // 0x28
        m_flAttack: [0x4]u8, // 0x2C
        m_flRelease: [0x4]u8, // 0x30
        m_bBeatEnvelopes: [0xA0]u8, // 0x34
        m_nNextVoiceSlot: [0x4]u8, // 0xD4
        m_hSoundEventHash: [0x8]u8, // 0xD8
    };
    pub const VMixPointerFixupEntry_t = extern struct {
        m_nIndex: [0x4]u8, // 0x0
        m_offset: [0x4]u8, // 0x4
    };
    pub const CSndSeqInstBaseSchema = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_nType: [0x6]u8, // 0x8
        m_bStopCurrentEvents: [0x2]u8, // 0xE
        m_flBPM: [0x4]u8, // 0x10
        m_flBPMFactor: [0x4]u8, // 0x14
        m_flBPMInvFactor: [0x8]u8, // 0x18
    };
    pub const VMixDynamics3BandDesc_t = extern struct {
        m_fldbGainOutput: [0x4]u8, // 0x0
        m_flRMSTimeMS: [0x4]u8, // 0x4
        m_fldbKneeWidth: [0x4]u8, // 0x8
        m_flDepth: [0x4]u8, // 0xC
        m_flWetMix: [0x4]u8, // 0x10
        m_flTimeScale: [0x4]u8, // 0x14
        m_flLowCutoffFreq: [0x4]u8, // 0x18
        m_flHighCutoffFreq: [0x4]u8, // 0x1C
        m_bPeakMode: [0x4]u8, // 0x20
        m_bandDesc: [0x6C]u8, // 0x24
    };
    pub const CVMixEQ8ProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_desc: [0xA0]u8, // 0x28
        m_paramEQScale: [0x8]u8, // 0xC8
    };
    pub const CDSPMixgroupModifier = extern struct {
        m_mixgroup: [0x8]u8, // 0x0
        m_flModifier: [0x4]u8, // 0x8
        m_flModifierMin: [0x4]u8, // 0xC
        m_flSourceModifier: [0x4]u8, // 0x10
        m_flSourceModifierMin: [0x4]u8, // 0x14
        m_flListenerReverbModifierWhenSourceReverbIsActive: [0x8]u8, // 0x18
    };
    pub const CAudioMorphData = extern struct {
        m_times: [0x18]u8, // 0x0
        m_nameHashCodes: [0x18]u8, // 0x18
        m_nameStrings: [0x18]u8, // 0x30
        m_samples: [0x18]u8, // 0x48
        m_flEaseIn: [0x4]u8, // 0x60
        m_flEaseOut: [0x4]u8, // 0x64
    };
    pub const SndBeatEventKeyedFloats_t = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_flFloat: [0x8]u8, // 0x10
    };
    pub const VMixDualCompressorDesc_t = extern struct {
        m_flRMSTimeMS: [0x4]u8, // 0x0
        m_fldbKneeWidth: [0x4]u8, // 0x4
        m_flWetMix: [0x4]u8, // 0x8
        m_bPeakMode: [0x4]u8, // 0xC
        m_bandDesc: [0x24]u8, // 0x10
    };
    pub const CVMixRuntimeGraph = extern struct {
        pad_0: [0xD0]u8, // 0x0
        m_submixes: [0x10]u8, // 0xD0
        m_impulseResponseValues: [0x10]u8, // 0xE0
        m_inputDefaultValues: [0x10]u8, // 0xF0
        m_sources: [0x10]u8, // 0x100
        m_fixups: [0x18]u8, // 0x110
    };
    pub const CVoiceContainerStaticAdditiveSynth = extern struct {
        pad_0: [0x88]u8, // 0x0
        m_tones: [0x30]u8, // 0x88
    };
    pub const CVoiceContainerShapedNoise = extern struct {
        pad_0: [0x78]u8, // 0x0
        m_bUseCurveForFrequency: [0x4]u8, // 0x78
        m_flFrequency: [0x4]u8, // 0x7C
        m_frequencySweep: [0x40]u8, // 0x80
        m_bUseCurveForResonance: [0x4]u8, // 0xC0
        m_flResonance: [0x4]u8, // 0xC4
        m_resonanceSweep: [0x40]u8, // 0xC8
        m_bUseCurveForAmplitude: [0x4]u8, // 0x108
        m_flGainInDecibels: [0x4]u8, // 0x10C
        m_gainSweep: [0x40]u8, // 0x110
    };
    pub const CDspPresetModifierList = extern struct {
        m_dspName: [0x8]u8, // 0x0
        m_modifiers: [0x18]u8, // 0x8
    };
    pub const CVoiceContainerBase = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_bRegisteredVMix: [0x4]u8, // 0x10
        m_nResourceName: [0x1C]u8, // 0x14
        m_vSound: [0x40]u8, // 0x30
        m_pEnvelopeAnalyzer: [0x8]u8, // 0x70
    };
    pub const CVMixDiffusorProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_desc: [0x10]u8, // 0x28
    };
    pub const CVMixUtilityProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_desc: [0x18]u8, // 0x28
    };
    pub const CRandomPannerControls = extern struct {
        m_panningControlInputName: [0x8]u8, // 0x0
        m_volumeControlInputName: [0x8]u8, // 0x8
        m_flMinVolume: [0x4]u8, // 0x10
        m_flMaxVolume: [0x4]u8, // 0x14
        m_strVectorStackParam: [0x8]u8, // 0x18
    };
    pub const CVoiceContainerGranulator = extern struct {
        pad_0: [0x88]u8, // 0x0
        m_flGrainLength: [0x4]u8, // 0x88
        m_flGrainCrossfadeAmount: [0x4]u8, // 0x8C
        m_flStartJitter: [0x4]u8, // 0x90
        m_flPlaybackJitter: [0x4]u8, // 0x94
        m_bShouldWraparound: [0x8]u8, // 0x98
        m_sourceAudio: [0x8]u8, // 0xA0
        m_bDoubleBufferSourceAudio: [0x4]u8, // 0xA8
        m_flMaxSourceLength: [0xCC]u8, // 0xAC
    };
    pub const CVMixPresetDSPProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_desc: [0x10]u8, // 0x28
        m_paramEffectName: [0x8]u8, // 0x38
    };
    pub const VMixDelayDesc_t = extern struct {
        m_feedbackFilter: [0x10]u8, // 0x0
        m_bEnableFilter: [0x4]u8, // 0x10
        m_flDelay: [0x4]u8, // 0x14
        m_flDirectGain: [0x4]u8, // 0x18
        m_flDelayGain: [0x4]u8, // 0x1C
        m_flFeedbackGain: [0x4]u8, // 0x20
        m_flWidth: [0x4]u8, // 0x24
    };
    pub const VMixEQ8Desc_t = extern struct {
        m_stages: [0xA0]u8, // 0x0
    };
    pub const CVMixDynamicsProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_desc: [0x30]u8, // 0x28
        m_outParamLevel: [0x4]u8, // 0x58
        m_outParamdBLevel: [0x4]u8, // 0x5C
    };
    pub const VMixEQFilterDesc_t = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nChannelSet: [0x4]u8, // 0x10
    };
    pub const CVoiceContainerLoopXFade = extern struct {
        pad_0: [0x78]u8, // 0x0
        m_sound: [0x20]u8, // 0x78
        m_flLoopEnd: [0x4]u8, // 0x98
        m_flLoopStart: [0x4]u8, // 0x9C
        m_flFadeOut: [0x4]u8, // 0xA0
        m_flFadeIn: [0x4]u8, // 0xA4
        m_bPlayHead: [0x1]u8, // 0xA8
        m_bPlayTail: [0x1]u8, // 0xA9
        m_bEqualPow: [0x6]u8, // 0xAA
    };
    pub const VMixPresetDSPDesc_t = extern struct {
        m_effectName: [0x10]u8, // 0x0
    };
    pub const CAudioPhonemeTag = extern struct {
        m_flStartTime: [0x4]u8, // 0x0
        m_flEndTime: [0x4]u8, // 0x4
        m_nPhonemeCode: [0x4]u8, // 0x8
    };
    pub const CVsndRadioButtonSlot = extern struct {
        m_bEnableVsnd: [0x8]u8, // 0x0
        m_vsnd: [0x20]u8, // 0x8
        m_bEnableEndcap: [0x8]u8, // 0x28
        m_endcapVsnd: [0x20]u8, // 0x30
        m_bEnableLoopcap: [0x8]u8, // 0x50
        m_loopcapVsnd: [0x20]u8, // 0x58
        m_group: [0x4]u8, // 0x78
        m_volume: [0x4]u8, // 0x7C
        m_fadeOut: [0x4]u8, // 0x80
        m_mode: [0x4]u8, // 0x84
    };
    pub const CSosGroupActionSoundeventCountSchema = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_bExcludeStoppedSounds: [0x8]u8, // 0x8
        m_strCountKeyName: [0x8]u8, // 0x10
    };
    pub const CVoiceContainerEnvelopeAnalyzer = extern struct {
        pad_0: [0x48]u8, // 0x0
        m_mode: [0x4]u8, // 0x48
        m_fAnalysisWindowMs: [0x4]u8, // 0x4C
        m_flThreshold: [0x8]u8, // 0x50
    };
    pub const CVMixBaseProcessorDesc = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_name: [0x8]u8, // 0x8
        m_nDebugId: [0x4]u8, // 0x10
        m_flxfade: [0x4]u8, // 0x14
        m_nChannels: [0x4]u8, // 0x18
        m_bDebugBypass: [0x4]u8, // 0x1C
        m_paramEnable: [0x4]u8, // 0x20
        m_paramMix: [0x4]u8, // 0x24
    };
    pub const CVMixImpulseResponseInput = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const CVMixSteamAudioHybridReverbProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_paramReverbTimeLow: [0x4]u8, // 0x28
        m_paramReverbTimeMid: [0x4]u8, // 0x2C
        m_paramReverbTimeHigh: [0x4]u8, // 0x30
        m_paramBand: [0x4]u8, // 0x34
        m_paramReverbTime: [0x8]u8, // 0x38
    };
    pub const VMixPitchShiftDesc_t = extern struct {
        m_nGrainSampleCount: [0x4]u8, // 0x0
        m_flPitchShift: [0x4]u8, // 0x4
        m_nQuality: [0x4]u8, // 0x8
        m_nProcType: [0x4]u8, // 0xC
    };
    pub const CVMixControlOutput = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_flDefaultValue: [0x8]u8, // 0x10
    };
    pub const CVMixModDelayProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_desc: [0x30]u8, // 0x28
        m_paramCutoffFrequency: [0x4]u8, // 0x58
        m_paramDelay: [0x4]u8, // 0x5C
        m_paramModRate: [0x4]u8, // 0x60
        m_paramModDepth: [0x4]u8, // 0x64
    };
    pub const CVMixShaperProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_desc: [0x14]u8, // 0x28
        m_paramDrive: [0x4]u8, // 0x3C
    };
    pub const CVMixParameterFloat = extern struct {
        m_offset: [0x4]u8, // 0x0
    };
    pub const CVMixBaseGraphDescription = extern struct {
        m_name: [0x8]u8, // 0x0
        m_nGraphOutputChannels: [0x4]u8, // 0x8
        m_bIsMainGraph: [0x4]u8, // 0xC
        m_processorNodes: [0x10]u8, // 0x10
        m_graphInputs: [0x10]u8, // 0x20
        m_controlTransientInputs: [0x10]u8, // 0x30
        m_controlOutputs: [0x10]u8, // 0x40
        m_impulseResponseInputs: [0x10]u8, // 0x50
        m_mixCommands: [0x10]u8, // 0x60
        m_heap: [0x10]u8, // 0x70
        m_audioMeters: [0x10]u8, // 0x80
        m_controlMeters: [0x10]u8, // 0x90
        m_nameInputMeters: [0x10]u8, // 0xA0
        m_additionalOutputs: [0x10]u8, // 0xB0
        m_automaticControlInputs: [0x10]u8, // 0xC0
    };
    pub const CVMixAutomaticControlInput = extern struct {
        m_name: [0xC]u8, // 0x0
        m_nGraphInputIndex: [0x4]u8, // 0xC
        m_nControlType: [0x8]u8, // 0x10
    };
    pub const CSndBeatTrack = extern struct {
        m_name: [0x20]u8, // 0x0
        m_playbackType: [0x4]u8, // 0x20
        m_nTranspose: [0x4]u8, // 0x24
        m_bSyncToVoice: [0x4]u8, // 0x28
        m_flBPM: [0x6C]u8, // 0x2C
    };
    pub const CVoiceContainerVsndRadioButton = extern struct {
        pad_0: [0x78]u8, // 0x0
        m_namespace: [0x8]u8, // 0x78
        m_slot1: [0x88]u8, // 0x80
        m_slot2: [0x88]u8, // 0x108
        m_slot3: [0x88]u8, // 0x190
        m_slot4: [0x88]u8, // 0x218
        m_slot5: [0x88]u8, // 0x2A0
        m_slot6: [0x88]u8, // 0x328
        m_slot7: [0x88]u8, // 0x3B0
        m_slot8: [0x88]u8, // 0x438
        m_slot9: [0x88]u8, // 0x4C0
        m_slot10: [0x88]u8, // 0x548
        m_slot11: [0x88]u8, // 0x5D0
        m_slot12: [0x88]u8, // 0x658
        m_slot13: [0x88]u8, // 0x6E0
        m_slot14: [0x88]u8, // 0x768
        m_slot15: [0x88]u8, // 0x7F0
        m_slot16: [0x88]u8, // 0x878
    };
    pub const CAudioEmphasisSample = extern struct {
        m_flTime: [0x4]u8, // 0x0
        m_flValue: [0x4]u8, // 0x4
    };
    pub const CVMixOscProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_desc: [0xC]u8, // 0x28
        m_paramFrequency: [0x4]u8, // 0x34
        m_paramPhase: [0x8]u8, // 0x38
    };
    pub const CVoiceContainerLoopTriggerWithRandomPanner = extern struct {
        pad_0: [0xA8]u8, // 0x0
        m_randomPannerControls: [0x20]u8, // 0xA8
    };
    pub const CVoiceContainerGenerator = extern struct {
        pad_0: [0x78]u8, // 0x0
    };
    pub const CVoiceContainerSet = extern struct {
        pad_0: [0x78]u8, // 0x0
        m_soundsToPlay: [0x30]u8, // 0x78
    };
    pub const VMixConvolutionDesc_t = extern struct {
        m_fldbGain: [0x4]u8, // 0x0
        m_flPreDelayMS: [0x4]u8, // 0x4
        m_flWetMix: [0x4]u8, // 0x8
        m_fldbLow: [0x4]u8, // 0xC
        m_fldbMid: [0x4]u8, // 0x10
        m_fldbHigh: [0x4]u8, // 0x14
        m_flLowCutoffFreq: [0x4]u8, // 0x18
        m_flHighCutoffFreq: [0x4]u8, // 0x1C
    };
    pub const CVoiceContainerVsndTrigger = extern struct {
        pad_0: [0x78]u8, // 0x0
        m_namespace: [0x8]u8, // 0x78
        m_slot1: [0x88]u8, // 0x80
        m_slot2: [0x88]u8, // 0x108
        m_slot3: [0x88]u8, // 0x190
        m_slot4: [0x88]u8, // 0x218
        m_slot5: [0x88]u8, // 0x2A0
        m_slot6: [0x88]u8, // 0x328
        m_slot7: [0x88]u8, // 0x3B0
        m_slot8: [0x88]u8, // 0x438
        m_slot9: [0x88]u8, // 0x4C0
        m_slot10: [0x88]u8, // 0x548
        m_slot11: [0x88]u8, // 0x5D0
        m_slot12: [0x88]u8, // 0x658
        m_slot13: [0x88]u8, // 0x6E0
        m_slot14: [0x88]u8, // 0x768
        m_slot15: [0x88]u8, // 0x7F0
        m_slot16: [0x88]u8, // 0x878
    };
    pub const CVoiceContainerSetElement = extern struct {
        m_sound: [0x20]u8, // 0x0
        m_flVolumeDB: [0x8]u8, // 0x20
    };
    pub const CSndBeatPatternManager = extern struct {
        pad_0: [0x38]u8, // 0x0
        m_vecPatterns: [0x38]u8, // 0x38
        m_vecActiveTracks: [0x20]u8, // 0x70
    };
    pub const CVoiceContainerAsyncGenerator = extern struct {
        pad_0: [0x88]u8, // 0x0
    };
    pub const CSoundInfoHeader = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const CVMixDescription = extern struct {
        pad_0: [0xD0]u8, // 0x0
        m_submixList: [0x10]u8, // 0xD0
        m_sources: [0x10]u8, // 0xE0
        m_impulseResponseValues: [0x10]u8, // 0xF0
        m_nNameHashCode: [0x10]u8, // 0x100
    };
    pub const SosEditItemInfo_t = extern struct {
        itemType: [0x8]u8, // 0x0
        itemName: [0x8]u8, // 0x8
        itemTypeName: [0x10]u8, // 0x10
        itemKVString: [0x8]u8, // 0x20
        itemPos: [0x8]u8, // 0x28
    };
    pub const CVMixSubmix = extern struct {
        m_name: [0x8]u8, // 0x0
        m_SendNames: [0x24]u8, // 0x8
        m_nSoloNameHash: [0x4]u8, // 0x2C
        m_nChannels: [0x4]u8, // 0x30
        m_nSendOperator: [0x2]u8, // 0x34
        m_nMixDownRule: [0x1]u8, // 0x36
        m_nUpMixRule: [0x1]u8, // 0x37
    };
    pub const CVMixFlangerProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_desc: [0x24]u8, // 0x28
        m_paramDelay: [0x4]u8, // 0x4C
        m_paramModRate: [0x4]u8, // 0x50
        m_paramModDepth: [0x4]u8, // 0x54
    };
    pub const CVMixEffectChainProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_desc: [0x8]u8, // 0x28
        m_paramEffectName: [0x8]u8, // 0x30
    };
    pub const KeyGroup_t = extern struct {
        nCenterNote: [0x1]u8, // 0x0
        nMinNote: [0x1]u8, // 0x1
        nMaxNote: [0x1]u8, // 0x2
        nNumVelocityZones: [0x5]u8, // 0x3
        pVelocityZones: [0x8]u8, // 0x8
    };
    pub const CVMixFreeverbProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_desc: [0x10]u8, // 0x28
    };
    pub const VMixPlateverbDesc_t = extern struct {
        m_flPrefilter: [0x4]u8, // 0x0
        m_flInputDiffusion1: [0x4]u8, // 0x4
        m_flInputDiffusion2: [0x4]u8, // 0x8
        m_flDecay: [0x4]u8, // 0xC
        m_flDamp: [0x4]u8, // 0x10
        m_flFeedbackDiffusion1: [0x4]u8, // 0x14
        m_flFeedbackDiffusion2: [0x4]u8, // 0x18
    };
    pub const CVMixConvolutionProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_desc: [0x20]u8, // 0x28
        m_paramImpulseResponse: [0x8]u8, // 0x48
    };
    pub const CVMixParameterBool = extern struct {
        m_offset: [0x4]u8, // 0x0
    };
    pub const CSoundContainerReferenceArray = extern struct {
        m_bUseReference: [0x8]u8, // 0x0
        m_sounds: [0x18]u8, // 0x8
        m_pSounds: [0x18]u8, // 0x20
    };
    pub const CVMixFilterProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_desc: [0x10]u8, // 0x28
        m_paramCutoffFreq: [0x4]u8, // 0x38
        m_paramQ: [0x4]u8, // 0x3C
    };
    pub const CVMixAdditionalOutput = extern struct {
        m_name: [0x10]u8, // 0x0
    };
    pub const CVoiceContainerTapePlayer = extern struct {
        pad_0: [0x88]u8, // 0x0
        m_bShouldWraparound: [0x8]u8, // 0x88
        m_sourceAudio: [0x8]u8, // 0x90
        m_flTapeSpeedAttackTime: [0x4]u8, // 0x98
        m_flTapeSpeedReleaseTime: [0x3C]u8, // 0x9C
    };
    pub const CVMixSubgraphSwitchProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_desc: [0x38]u8, // 0x28
        m_paramEffectName: [0x4]u8, // 0x60
        m_paramSelectionIndex: [0x4]u8, // 0x64
    };
    pub const VMixDiffusorDesc_t = extern struct {
        m_flSize: [0x4]u8, // 0x0
        m_flComplexity: [0x4]u8, // 0x4
        m_flFeedback: [0x4]u8, // 0x8
        m_flOutputGain: [0x4]u8, // 0xC
    };
    pub const CVMixSteamAudioPathingProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_paramPositionX: [0x4]u8, // 0x28
        m_paramPositionY: [0x4]u8, // 0x2C
        m_paramPositionZ: [0x4]u8, // 0x30
        m_paramPathingMixLevel: [0x4]u8, // 0x34
        m_paramBand: [0x4]u8, // 0x38
        m_paramArrayPathingEQ: [0x4]u8, // 0x3C
        m_paramArrayPathingCoefficients: [0x8]u8, // 0x40
    };
    pub const CVMixPannerProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_desc: [0x8]u8, // 0x28
        m_paramPan: [0x8]u8, // 0x30
    };
    pub const VMixDynamicsCompressorDesc_t = extern struct {
        m_fldbOutputGain: [0x4]u8, // 0x0
        m_fldbCompressionThreshold: [0x4]u8, // 0x4
        m_fldbKneeWidth: [0x4]u8, // 0x8
        m_flCompressionRatio: [0x4]u8, // 0xC
        m_flAttackTimeMS: [0x4]u8, // 0x10
        m_flReleaseTimeMS: [0x4]u8, // 0x14
        m_flRMSTimeMS: [0x4]u8, // 0x18
        m_flWetMix: [0x4]u8, // 0x1C
        m_flSCHighPassFreq: [0x4]u8, // 0x20
        m_bPeakMode: [0x1]u8, // 0x24
        m_bAutoMakeupGain: [0x3]u8, // 0x25
    };
    pub const CVMixHeap = extern struct {
        m_storage: [0x10]u8, // 0x0
    };
    pub const CVoiceContainerVMixSnd = extern struct {
        pad_0: [0x188]u8, // 0x0
        m_resourceName: [0x8]u8, // 0x188
    };
    pub const CVMixStereoDelayProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_paramDelayLeft: [0x4]u8, // 0x28
        m_paramDelayRight: [0x4]u8, // 0x2C
    };
    pub const VMixShaperDesc_t = extern struct {
        m_nShape: [0x4]u8, // 0x0
        m_fldbDrive: [0x4]u8, // 0x4
        m_fldbOutputGain: [0x4]u8, // 0x8
        m_flWetMix: [0x4]u8, // 0xC
        m_nOversampleFactor: [0x4]u8, // 0x10
    };
    pub const CVMixDataOffset = extern struct {
        m_nOffset: [0x4]u8, // 0x0
    };
    pub const VMixEnvelopeDesc_t = extern struct {
        m_flAttackTimeMS: [0x4]u8, // 0x0
        m_flHoldTimeMS: [0x4]u8, // 0x4
        m_flReleaseTimeMS: [0x4]u8, // 0x8
    };
    pub const CAudioSentence = extern struct {
        m_bShouldVoiceDuck: [0x8]u8, // 0x0
        m_RunTimePhonemes: [0x18]u8, // 0x8
        m_EmphasisSamples: [0x18]u8, // 0x20
        m_morphData: [0x68]u8, // 0x38
    };
    pub const CVoiceContainerParameterBlender = extern struct {
        pad_0: [0x78]u8, // 0x0
        m_firstSound: [0x20]u8, // 0x78
        m_secondSound: [0x20]u8, // 0x98
        m_bEnableOcclusionBlend: [0x8]u8, // 0xB8
        m_curve1: [0x40]u8, // 0xC0
        m_curve2: [0x40]u8, // 0x100
        m_bEnableDistanceBlend: [0x8]u8, // 0x140
        m_curve3: [0x40]u8, // 0x148
        m_curve4: [0x40]u8, // 0x188
    };
    pub const CVMixAudioMeter = extern struct {
        m_name: [0x8]u8, // 0x0
        m_displayName: [0x8]u8, // 0x8
        m_nDebugId: [0x8]u8, // 0x10
    };
    pub const CVMixVocoderProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_desc: [0x28]u8, // 0x28
        m_paramBandwidth: [0x8]u8, // 0x50
    };
    pub const CSosGroupActionLimitSchema = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_nMaxCount: [0x4]u8, // 0x8
        m_nStopType: [0x4]u8, // 0xC
        m_nSortType: [0x4]u8, // 0x10
        m_bStopImmediate: [0x1]u8, // 0x14
        m_bCountStopped: [0x3]u8, // 0x15
    };
    pub const CVoiceContainerAmpedDecayingSineWave = extern struct {
        pad_0: [0x80]u8, // 0x0
        m_flGainAmount: [0x8]u8, // 0x80
    };
    pub const VMixAutoFilterDesc_t = extern struct {
        m_flEnvelopeAmount: [0x4]u8, // 0x0
        m_flAttackTimeMS: [0x4]u8, // 0x4
        m_flReleaseTimeMS: [0x4]u8, // 0x8
        m_filter: [0x10]u8, // 0xC
        m_flLFOAmount: [0x4]u8, // 0x1C
        m_flLFORate: [0x4]u8, // 0x20
        m_flPhase: [0x4]u8, // 0x24
        m_nLFOShape: [0x4]u8, // 0x28
    };
    pub const VMixDynamicsBand_t = extern struct {
        m_fldbGainInput: [0x4]u8, // 0x0
        m_fldbGainOutput: [0x4]u8, // 0x4
        m_fldbThresholdBelow: [0x4]u8, // 0x8
        m_fldbThresholdAbove: [0x4]u8, // 0xC
        m_flRatioBelow: [0x4]u8, // 0x10
        m_flRatioAbove: [0x4]u8, // 0x14
        m_flAttackTimeMS: [0x4]u8, // 0x18
        m_flReleaseTimeMS: [0x4]u8, // 0x1C
        m_bEnable: [0x1]u8, // 0x20
        m_bSolo: [0x3]u8, // 0x21
    };
    pub const VMixEffectChainDesc_t = extern struct {
        m_effectName: [0x8]u8, // 0x0
    };
    pub const CVMixPlateReverbProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_desc: [0x20]u8, // 0x28
    };
    pub const CVoiceContainerMultiBlender = extern struct {
        pad_0: [0x78]u8, // 0x0
        m_soundsToPlay: [0x38]u8, // 0x78
        m_flBlendFactor: [0x4]u8, // 0xB0
        m_flCrossover: [0x4]u8, // 0xB4
    };
    pub const CVMixVsndInput = extern struct {
        m_defaultValue: [0x18]u8, // 0x0
    };
    pub const CVoiceContainerStaticAdditiveSynth__CGainScalePerInstance = extern struct {
        m_flMinVolume: [0x4]u8, // 0x0
        m_nInstancesAtMinVolume: [0x4]u8, // 0x4
        m_flMaxVolume: [0x4]u8, // 0x8
        m_nInstancesAtMaxVolume: [0x4]u8, // 0xC
    };
    pub const CVMixParameterEffectName = extern struct {
        m_offset: [0x4]u8, // 0x0
    };
    pub const SndBeatTimeSignature_t = extern struct {
        nNumerator: [0x1]u8, // 0x0
        nDenominator: [0x1]u8, // 0x1
    };
    pub const VelocityZone_t = extern struct {
        nMaxVel: [0x1]u8, // 0x0
        nNextSelection: [0x1]u8, // 0x1
        nNumSamples: [0x2]u8, // 0x2
        pSamples: [0x10]u8, // 0x4
    };
    pub const CVoiceContainerSelector = extern struct {
        pad_0: [0x78]u8, // 0x0
        m_mode: [0x8]u8, // 0x78
        m_soundsToPlay: [0x38]u8, // 0x80
        m_fProbabilityWeights: [0x38]u8, // 0xB8
    };
    pub const SndBeatEventKeyedSndEvts_t = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_strSoundEventName: [0x8]u8, // 0x10
    };
    pub const CVMixGraphInput = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nOffset: [0x8]u8, // 0x10
    };
    pub const CSosGroupActionTimeBlockLimitSchema = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_nMaxCount: [0x4]u8, // 0x8
        m_flMaxDuration: [0x4]u8, // 0xC
    };
    pub const SndBeatEventKeyedMidiNotes_t = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nStatus: [0x1]u8, // 0x10
        m_nNote: [0x1]u8, // 0x11
        m_nVelocity: [0x6]u8, // 0x12
    };
    pub const CSosGroupActionMemberCountEnvelopeSchema = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_nBaseCount: [0x4]u8, // 0x8
        m_nTargetCount: [0x4]u8, // 0xC
        m_flBaseValue: [0x4]u8, // 0x10
        m_flTargetValue: [0x4]u8, // 0x14
        m_flAttack: [0x4]u8, // 0x18
        m_flDecay: [0x4]u8, // 0x1C
        m_resultVarName: [0x8]u8, // 0x20
        m_bSaveToGroup: [0x8]u8, // 0x28
    };
    pub const CVMixDualCompressorProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_desc: [0x34]u8, // 0x28
        m_outParamLevel: [0x4]u8, // 0x5C
        m_outParamdBLevel: [0x4]u8, // 0x60
        m_outParamReduction: [0x4]u8, // 0x64
    };
    pub const CVoiceContainerSwitch = extern struct {
        pad_0: [0x78]u8, // 0x0
        m_soundsToPlay: [0x18]u8, // 0x78
    };
    pub const CVMixControlMeter = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nValueIndex: [0x8]u8, // 0x10
    };
    pub const CVoiceContainerEnum = extern struct {
        pad_0: [0x78]u8, // 0x0
        m_soundsToPlay: [0x38]u8, // 0x78
        m_iSelection: [0x4]u8, // 0xB0
        m_flCrossfadeTime: [0x4]u8, // 0xB4
    };
    pub const CSosGroupActionTimeLimitSchema = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_flMaxDuration: [0x8]u8, // 0x8
    };
    pub const VMixVocoderDesc_t = extern struct {
        m_nBandCount: [0x4]u8, // 0x0
        m_flBandwidth: [0x4]u8, // 0x4
        m_fldBModGain: [0x4]u8, // 0x8
        m_flFreqRangeStart: [0x4]u8, // 0xC
        m_flFreqRangeEnd: [0x4]u8, // 0x10
        m_fldBUnvoicedGain: [0x4]u8, // 0x14
        m_flAttackTimeMS: [0x4]u8, // 0x18
        m_flReleaseTimeMS: [0x4]u8, // 0x1C
        m_nDebugBand: [0x4]u8, // 0x20
        m_bPeakMode: [0x4]u8, // 0x24
    };
    pub const VMixUtilityDesc_t = extern struct {
        m_nOp: [0x4]u8, // 0x0
        m_flInputPan: [0x4]u8, // 0x4
        m_flOutputBalance: [0x4]u8, // 0x8
        m_fldbOutputGain: [0x4]u8, // 0xC
        m_bBassMono: [0x4]u8, // 0x10
        m_flBassFreq: [0x4]u8, // 0x14
    };
    pub const CVoiceContainerLoopTrigger = extern struct {
        pad_0: [0x78]u8, // 0x0
        m_flRetriggerTimeMin: [0x4]u8, // 0x78
        m_flRetriggerTimeMax: [0x4]u8, // 0x7C
        m_flFadeTime: [0x4]u8, // 0x80
        m_bCrossFade: [0x4]u8, // 0x84
        m_sound: [0x20]u8, // 0x88
    };
    pub const SndBeatEventKeys_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_flKey: [0x8]u8, // 0x8
    };
    pub const CVoiceContainerDecayingSineWave = extern struct {
        pad_0: [0x78]u8, // 0x0
        m_flFrequency: [0x4]u8, // 0x78
        m_flDecayTime: [0x4]u8, // 0x7C
    };
    pub const CVMixDelayProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_desc: [0x28]u8, // 0x28
        m_paramCutoffFrequency: [0x4]u8, // 0x50
        m_paramDelay: [0x4]u8, // 0x54
    };
    pub const CVMixBoxverb2ProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_desc: [0x50]u8, // 0x28
    };
    pub const VMixFilterDesc_t = extern struct {
        m_fldbGain: [0x4]u8, // 0x0
        m_flCutoffFreq: [0x4]u8, // 0x4
        m_flQ: [0x4]u8, // 0x8
        m_nFilterType: [0x1]u8, // 0xC
        m_nFilterSlope: [0x1]u8, // 0xD
        m_bEnabled: [0x2]u8, // 0xE
    };
    pub const CSndBeatPattern = extern struct {
        m_name: [0xC]u8, // 0x0
        m_flSyncPriority: [0x4]u8, // 0xC
        m_syncStartType: [0x4]u8, // 0x10
        m_syncType: [0x4]u8, // 0x14
        m_timeSignature: [0x8]u8, // 0x18
        m_flLength: [0x4]u8, // 0x20
        m_bLooping: [0x4]u8, // 0x24
        m_playEventType: [0x4]u8, // 0x28
        m_flPlayBeatMult: [0x4]u8, // 0x2C
        m_playKeyType: [0x8]u8, // 0x30
        m_vecPatternKeys: [0x18]u8, // 0x38
        m_vecPatternFloats: [0x18]u8, // 0x50
        m_vecPatternSndEvts: [0x18]u8, // 0x68
        m_vecPatternMidi: [0x18]u8, // 0x80
        m_syncEventType: [0x4]u8, // 0x98
        m_flSyncBeatMult: [0x4]u8, // 0x9C
        m_vecSyncPatternKeys: [0x18]u8, // 0xA0
    };
    pub const CSubmix = extern struct {
        pad_0: [0x50]u8, // 0x0
    };
    pub const VMixOscDesc_t = extern struct {
        oscType: [0x4]u8, // 0x0
        m_freq: [0x4]u8, // 0x4
        m_flPhase: [0x4]u8, // 0x8
    };
    pub const CVMixAutoFilterProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        m_desc: [0x30]u8, // 0x28
    };
    pub const ISndSeqInstruments = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const VMixFlangerDesc_t = extern struct {
        m_bPhaseInvert: [0x4]u8, // 0x0
        m_flGlideTime: [0x4]u8, // 0x4
        m_flDelay: [0x4]u8, // 0x8
        m_flOutputGain: [0x4]u8, // 0xC
        m_flFeedbackGain: [0x4]u8, // 0x10
        m_flFeedforwardGain: [0x4]u8, // 0x14
        m_flModRate: [0x4]u8, // 0x18
        m_flModDepth: [0x4]u8, // 0x1C
        m_bApplyAntialiasing: [0x4]u8, // 0x20
    };
    pub const VMixDynamicsDesc_t = extern struct {
        m_fldbGain: [0x4]u8, // 0x0
        m_fldbNoiseGateThreshold: [0x4]u8, // 0x4
        m_fldbCompressionThreshold: [0x4]u8, // 0x8
        m_fldbLimiterThreshold: [0x4]u8, // 0xC
        m_fldbKneeWidth: [0x4]u8, // 0x10
        m_flRatio: [0x4]u8, // 0x14
        m_flLimiterRatio: [0x4]u8, // 0x18
        m_flAttackTimeMS: [0x4]u8, // 0x1C
        m_flReleaseTimeMS: [0x4]u8, // 0x20
        m_flRMSTimeMS: [0x4]u8, // 0x24
        m_flWetMix: [0x4]u8, // 0x28
        m_bPeakMode: [0x4]u8, // 0x2C
    };
};
