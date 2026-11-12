/* cesium dumper | generated from live schema */
pub const soundsystem_dll = struct {
    pub const CVMixInputBase = extern struct {
        _: [0x10]u8, // 0x0
    };
    pub const CVoiceContainerBlender = extern struct {
        pad_0: [0x78]u8, // 0x0
        _: [0x20]u8, // 0x78
        _: [0x20]u8, // 0x98
        _: [0x8]u8, // 0xb8
    };
    pub const CVMixPitchShiftProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0x10]u8, // 0x28
        _: [0x8]u8, // 0x38
    };
    pub const VMixFreeverbDesc_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
    };
    pub const CVoiceContainerStaticAdditiveSynth__CHarmonic = extern struct {
        _: [0x1]u8, // 0x0
        _: [0x3]u8, // 0x1
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x40]u8, // 0x10
        _: [0x18]u8, // 0x50
    };
    pub const CVsndTriggerSlot = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x20]u8, // 0x8
        _: [0x8]u8, // 0x28
        _: [0x20]u8, // 0x30
        _: [0x8]u8, // 0x50
        _: [0x20]u8, // 0x58
        _: [0x4]u8, // 0x78
        _: [0x4]u8, // 0x7c
        _: [0x8]u8, // 0x80
    };
    pub const CVoiceContainerStaticAdditiveSynth__CTone = extern struct {
        _: [0x18]u8, // 0x0
        _: [0x40]u8, // 0x18
        _: [0x8]u8, // 0x58
    };
    pub const CSosGroupActionOcclusionSchema = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
    };
    pub const CVoiceContainerRandomSampler = extern struct {
        pad_0: [0x88]u8, // 0x0
        _: [0x4]u8, // 0x88
        _: [0x4]u8, // 0x8c
        _: [0x4]u8, // 0x90
        _: [0x4]u8, // 0x94
        _: [0x8]u8, // 0x98
        _: [0x110]u8, // 0xa0
    };
    pub const CVMixSteamAudioDirectProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0x4]u8, // 0x28
        _: [0x4]u8, // 0x2c
        _: [0x4]u8, // 0x30
        _: [0x4]u8, // 0x34
        _: [0x4]u8, // 0x38
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
        _: [0x8]u8, // 0x88
    };
    pub const CVMixSteamAudioHRTFProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0x4]u8, // 0x28
        _: [0x4]u8, // 0x2c
        _: [0x4]u8, // 0x30
        _: [0x4]u8, // 0x34
        _: [0x4]u8, // 0x38
        _: [0x4]u8, // 0x3c
        _: [0x4]u8, // 0x40
        _: [0x4]u8, // 0x44
        _: [0x8]u8, // 0x48
    };
    pub const CVoiceContainerDefault = extern struct {
        pad_0: [0x78]u8, // 0x0
    };
    pub const CVSound = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
        _: [0x4]u8, // 0x20
        _: [0x4]u8, // 0x24
        _: [0x4]u8, // 0x28
        _: [0x14]u8, // 0x2c
    };
    pub const CDSPPresetMixgroupModifierTable = extern struct {
        _: [0x18]u8, // 0x0
    };
    pub const CSosGroupActionSoundeventClusterSchema = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x8]u8, // 0x10
        _: [0x8]u8, // 0x18
        _: [0x8]u8, // 0x20
        _: [0x8]u8, // 0x28
        _: [0x20]u8, // 0x30
    };
    pub const CSosGroupActionSetSoundeventParameterSchema = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x8]u8, // 0x10
        _: [0x8]u8, // 0x18
        _: [0x8]u8, // 0x20
    };
    pub const CSoundContainerReference = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x8]u8, // 0x10
        _: [0x8]u8, // 0x18
    };
    pub const CVoiceContainerNull = extern struct {
        pad_0: [0x78]u8, // 0x0
    };
    pub const VMixSubgraphSwitchDesc_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x18]u8, // 0x10
        _: [0x4]u8, // 0x28
        _: [0x4]u8, // 0x2c
        _: [0x8]u8, // 0x30
    };
    pub const CVoiceContainerAnalysisBase = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x40]u8, // 0x8
    };
    pub const CSosGroupActionSoundeventMinMaxValuesSchema = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x8]u8, // 0x10
        _: [0x1]u8, // 0x18
        _: [0x1]u8, // 0x19
        _: [0x2]u8, // 0x1a
        _: [0x4]u8, // 0x1c
        _: [0x4]u8, // 0x20
        _: [0x4]u8, // 0x24
        _: [0x8]u8, // 0x28
        _: [0x10]u8, // 0x30
    };
    pub const CVMixEnvelopeProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0xc]u8, // 0x28
        _: [0x4]u8, // 0x34
        _: [0x8]u8, // 0x38
    };
    pub const CVMixCommand = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
    };
    pub const SamplerVoice_t = extern struct {
        _: [0x8]u8, // 0x0
    };
    pub const CVMixControlInput = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
    };
    pub const CVMixBoxverbProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0x50]u8, // 0x28
    };
    pub const CVMixDynamicsCompressorProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0x28]u8, // 0x28
        _: [0x4]u8, // 0x50
        _: [0x4]u8, // 0x54
        _: [0x8]u8, // 0x58
    };
    pub const VMixPannerDesc_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
    };
    pub const CSosGroupActionSoundeventPrioritySchema = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x8]u8, // 0x10
        _: [0x8]u8, // 0x18
        _: [0x18]u8, // 0x20
    };
    pub const CVoiceContainerRealtimeFMSineWave = extern struct {
        pad_0: [0x78]u8, // 0x0
        _: [0x4]u8, // 0x78
        _: [0x4]u8, // 0x7c
        _: [0x8]u8, // 0x80
    };
    pub const SelectedEditItemInfo_t = extern struct {
        _: [0x18]u8, // 0x0
    };
    pub const VMixModDelayDesc_t = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
        _: [0x4]u8, // 0x20
        _: [0x4]u8, // 0x24
        _: [0x4]u8, // 0x28
        _: [0x4]u8, // 0x2c
    };
    pub const CSndSeqInstSndEvtSchema = extern struct {
        pad_0: [0x20]u8, // 0x0
    };
    pub const CVMixNameInputMeter = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
    };
    pub const CSndSeqInstruments = extern struct {
        pad_0: [0x28]u8, // 0x0
    };
    pub const CVMixDynamics3BandProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0x90]u8, // 0x28
    };
    pub const VMixBoxverbDesc_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x4]u8, // 0x18
        _: [0x10]u8, // 0x1c
        _: [0x4]u8, // 0x2c
        _: [0x4]u8, // 0x30
        _: [0x4]u8, // 0x34
        _: [0x4]u8, // 0x38
        _: [0x4]u8, // 0x3c
        _: [0x4]u8, // 0x40
        _: [0x4]u8, // 0x44
        _: [0x4]u8, // 0x48
        _: [0x4]u8, // 0x4c
    };
    pub const CSosGroupActionSchema = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const CSosSoundEventGroupSchema = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
        _: [0x8]u8, // 0x20
        _: [0x8]u8, // 0x28
        _: [0x8]u8, // 0x30
        _: [0x4]u8, // 0x38
        _: [0x4]u8, // 0x3c
        _: [0x4]u8, // 0x40
        _: [0x4]u8, // 0x44
        _: [0x8]u8, // 0x48
        _: [0x8]u8, // 0x50
        _: [0x18]u8, // 0x58
    };
    pub const CSndSeqInstMidiSampler = extern struct {
        pad_0: [0x20]u8, // 0x0
        _: [0x1]u8, // 0x20
        _: [0x1]u8, // 0x21
        _: [0x1]u8, // 0x22
        _: [0x1]u8, // 0x23
        _: [0x4]u8, // 0x24
        _: [0x4]u8, // 0x28
        _: [0x4]u8, // 0x2c
        _: [0x4]u8, // 0x30
        _: [0xa0]u8, // 0x34
        _: [0x4]u8, // 0xd4
        _: [0x8]u8, // 0xd8
    };
    pub const VMixPointerFixupEntry_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
    };
    pub const CSndSeqInstBaseSchema = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x6]u8, // 0x8
        _: [0x2]u8, // 0xe
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x8]u8, // 0x18
    };
    pub const VMixDynamics3BandDesc_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
        _: [0x4]u8, // 0x20
        _: [0x6c]u8, // 0x24
    };
    pub const CVMixEQ8ProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0xa0]u8, // 0x28
        _: [0x8]u8, // 0xc8
    };
    pub const CDSPMixgroupModifier = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x8]u8, // 0x18
    };
    pub const CAudioMorphData = extern struct {
        _: [0x18]u8, // 0x0
        _: [0x18]u8, // 0x18
        _: [0x18]u8, // 0x30
        _: [0x18]u8, // 0x48
        _: [0x4]u8, // 0x60
        _: [0x4]u8, // 0x64
    };
    pub const SndBeatEventKeyedFloats_t = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
    };
    pub const VMixDualCompressorDesc_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x24]u8, // 0x10
    };
    pub const CVMixRuntimeGraph = extern struct {
        pad_0: [0xd0]u8, // 0x0
        _: [0x10]u8, // 0xd0
        _: [0x10]u8, // 0xe0
        _: [0x10]u8, // 0xf0
        _: [0x10]u8, // 0x100
        _: [0x18]u8, // 0x110
    };
    pub const CVoiceContainerStaticAdditiveSynth = extern struct {
        pad_0: [0x88]u8, // 0x0
        _: [0x30]u8, // 0x88
    };
    pub const CVoiceContainerShapedNoise = extern struct {
        pad_0: [0x78]u8, // 0x0
        _: [0x4]u8, // 0x78
        _: [0x4]u8, // 0x7c
        _: [0x40]u8, // 0x80
        _: [0x4]u8, // 0xc0
        _: [0x4]u8, // 0xc4
        _: [0x40]u8, // 0xc8
        _: [0x4]u8, // 0x108
        _: [0x4]u8, // 0x10c
        _: [0x40]u8, // 0x110
    };
    pub const CDspPresetModifierList = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x18]u8, // 0x8
    };
    pub const CVoiceContainerBase = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0x1c]u8, // 0x14
        _: [0x40]u8, // 0x30
        _: [0x8]u8, // 0x70
    };
    pub const CVMixDiffusorProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0x10]u8, // 0x28
    };
    pub const CVMixUtilityProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0x18]u8, // 0x28
    };
    pub const CRandomPannerControls = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x8]u8, // 0x18
    };
    pub const CVoiceContainerGranulator = extern struct {
        pad_0: [0x88]u8, // 0x0
        _: [0x4]u8, // 0x88
        _: [0x4]u8, // 0x8c
        _: [0x4]u8, // 0x90
        _: [0x4]u8, // 0x94
        _: [0x8]u8, // 0x98
        _: [0x8]u8, // 0xa0
        _: [0x4]u8, // 0xa8
        _: [0xcc]u8, // 0xac
    };
    pub const CVMixPresetDSPProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0x10]u8, // 0x28
        _: [0x8]u8, // 0x38
    };
    pub const VMixDelayDesc_t = extern struct {
        _: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
        _: [0x4]u8, // 0x20
        _: [0x4]u8, // 0x24
    };
    pub const VMixEQ8Desc_t = extern struct {
        _: [0xa0]u8, // 0x0
    };
    pub const CVMixDynamicsProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0x30]u8, // 0x28
        _: [0x4]u8, // 0x58
        _: [0x4]u8, // 0x5c
    };
    pub const VMixEQFilterDesc_t = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x4]u8, // 0x10
    };
    pub const CVoiceContainerLoopXFade = extern struct {
        pad_0: [0x78]u8, // 0x0
        _: [0x20]u8, // 0x78
        _: [0x4]u8, // 0x98
        _: [0x4]u8, // 0x9c
        _: [0x4]u8, // 0xa0
        _: [0x4]u8, // 0xa4
        _: [0x1]u8, // 0xa8
        _: [0x1]u8, // 0xa9
        _: [0x6]u8, // 0xaa
    };
    pub const VMixPresetDSPDesc_t = extern struct {
        _: [0x10]u8, // 0x0
    };
    pub const CAudioPhonemeTag = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
    };
    pub const CVsndRadioButtonSlot = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x20]u8, // 0x8
        _: [0x8]u8, // 0x28
        _: [0x20]u8, // 0x30
        _: [0x8]u8, // 0x50
        _: [0x20]u8, // 0x58
        _: [0x4]u8, // 0x78
        _: [0x4]u8, // 0x7c
        _: [0x4]u8, // 0x80
        _: [0x4]u8, // 0x84
    };
    pub const CSosGroupActionSoundeventCountSchema = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x8]u8, // 0x10
    };
    pub const CVoiceContainerEnvelopeAnalyzer = extern struct {
        pad_0: [0x48]u8, // 0x0
        _: [0x4]u8, // 0x48
        _: [0x4]u8, // 0x4c
        _: [0x8]u8, // 0x50
    };
    pub const CVMixBaseProcessorDesc = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
        _: [0x4]u8, // 0x20
        _: [0x4]u8, // 0x24
    };
    pub const CVMixImpulseResponseInput = extern struct {
        pad_0: [0x10]u8, // 0x0
    };
    pub const CVMixSteamAudioHybridReverbProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0x4]u8, // 0x28
        _: [0x4]u8, // 0x2c
        _: [0x4]u8, // 0x30
        _: [0x4]u8, // 0x34
        _: [0x8]u8, // 0x38
    };
    pub const VMixPitchShiftDesc_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
    };
    pub const CVMixControlOutput = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
    };
    pub const CVMixModDelayProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0x30]u8, // 0x28
        _: [0x4]u8, // 0x58
        _: [0x4]u8, // 0x5c
        _: [0x4]u8, // 0x60
        _: [0x4]u8, // 0x64
    };
    pub const CVMixShaperProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0x14]u8, // 0x28
        _: [0x4]u8, // 0x3c
    };
    pub const CVMixParameterFloat = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const CVMixBaseGraphDescription = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x10]u8, // 0x10
        _: [0x10]u8, // 0x20
        _: [0x10]u8, // 0x30
        _: [0x10]u8, // 0x40
        _: [0x10]u8, // 0x50
        _: [0x10]u8, // 0x60
        _: [0x10]u8, // 0x70
        _: [0x10]u8, // 0x80
        _: [0x10]u8, // 0x90
        _: [0x10]u8, // 0xa0
        _: [0x10]u8, // 0xb0
        _: [0x10]u8, // 0xc0
    };
    pub const CVMixAutomaticControlInput = extern struct {
        _: [0xc]u8, // 0x0
        _: [0x4]u8, // 0xc
        _: [0x8]u8, // 0x10
    };
    pub const CSndBeatTrack = extern struct {
        _: [0x20]u8, // 0x0
        _: [0x4]u8, // 0x20
        _: [0x4]u8, // 0x24
        _: [0x4]u8, // 0x28
        _: [0x6c]u8, // 0x2c
    };
    pub const CVoiceContainerVsndRadioButton = extern struct {
        pad_0: [0x78]u8, // 0x0
        _: [0x8]u8, // 0x78
        _: [0x88]u8, // 0x80
        _: [0x88]u8, // 0x108
        _: [0x88]u8, // 0x190
        _: [0x88]u8, // 0x218
        _: [0x88]u8, // 0x2a0
        _: [0x88]u8, // 0x328
        _: [0x88]u8, // 0x3b0
        _: [0x88]u8, // 0x438
        _: [0x88]u8, // 0x4c0
        _: [0x88]u8, // 0x548
        _: [0x88]u8, // 0x5d0
        _: [0x88]u8, // 0x658
        _: [0x88]u8, // 0x6e0
        _: [0x88]u8, // 0x768
        _: [0x88]u8, // 0x7f0
        _: [0x88]u8, // 0x878
    };
    pub const CAudioEmphasisSample = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
    };
    pub const CVMixOscProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0xc]u8, // 0x28
        _: [0x4]u8, // 0x34
        _: [0x8]u8, // 0x38
    };
    pub const CVoiceContainerLoopTriggerWithRandomPanner = extern struct {
        pad_0: [0xa8]u8, // 0x0
        _: [0x20]u8, // 0xa8
    };
    pub const CVoiceContainerGenerator = extern struct {
        pad_0: [0x78]u8, // 0x0
    };
    pub const CVoiceContainerSet = extern struct {
        pad_0: [0x78]u8, // 0x0
        _: [0x30]u8, // 0x78
    };
    pub const VMixConvolutionDesc_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
    };
    pub const CVoiceContainerVsndTrigger = extern struct {
        pad_0: [0x78]u8, // 0x0
        _: [0x8]u8, // 0x78
        _: [0x88]u8, // 0x80
        _: [0x88]u8, // 0x108
        _: [0x88]u8, // 0x190
        _: [0x88]u8, // 0x218
        _: [0x88]u8, // 0x2a0
        _: [0x88]u8, // 0x328
        _: [0x88]u8, // 0x3b0
        _: [0x88]u8, // 0x438
        _: [0x88]u8, // 0x4c0
        _: [0x88]u8, // 0x548
        _: [0x88]u8, // 0x5d0
        _: [0x88]u8, // 0x658
        _: [0x88]u8, // 0x6e0
        _: [0x88]u8, // 0x768
        _: [0x88]u8, // 0x7f0
        _: [0x88]u8, // 0x878
    };
    pub const CVoiceContainerSetElement = extern struct {
        _: [0x20]u8, // 0x0
        _: [0x8]u8, // 0x20
    };
    pub const CSndBeatPatternManager = extern struct {
        pad_0: [0x38]u8, // 0x0
        _: [0x38]u8, // 0x38
        _: [0x20]u8, // 0x70
    };
    pub const CVoiceContainerAsyncGenerator = extern struct {
        pad_0: [0x88]u8, // 0x0
    };
    pub const CSoundInfoHeader = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const CVMixDescription = extern struct {
        pad_0: [0xd0]u8, // 0x0
        _: [0x10]u8, // 0xd0
        _: [0x10]u8, // 0xe0
        _: [0x10]u8, // 0xf0
        _: [0x10]u8, // 0x100
    };
    pub const SosEditItemInfo_t = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x10]u8, // 0x10
        _: [0x8]u8, // 0x20
        _: [0x8]u8, // 0x28
    };
    pub const CVMixSubmix = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x24]u8, // 0x8
        _: [0x4]u8, // 0x2c
        _: [0x4]u8, // 0x30
        _: [0x2]u8, // 0x34
        _: [0x1]u8, // 0x36
        _: [0x1]u8, // 0x37
    };
    pub const CVMixFlangerProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0x24]u8, // 0x28
        _: [0x4]u8, // 0x4c
        _: [0x4]u8, // 0x50
        _: [0x4]u8, // 0x54
    };
    pub const CVMixEffectChainProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0x8]u8, // 0x28
        _: [0x8]u8, // 0x30
    };
    pub const KeyGroup_t = extern struct {
        _: [0x1]u8, // 0x0
        _: [0x1]u8, // 0x1
        _: [0x1]u8, // 0x2
        _: [0x5]u8, // 0x3
        _: [0x8]u8, // 0x8
    };
    pub const CVMixFreeverbProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0x10]u8, // 0x28
    };
    pub const VMixPlateverbDesc_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x4]u8, // 0x18
    };
    pub const CVMixConvolutionProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0x20]u8, // 0x28
        _: [0x8]u8, // 0x48
    };
    pub const CVMixParameterBool = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const CSoundContainerReferenceArray = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x18]u8, // 0x8
        _: [0x18]u8, // 0x20
    };
    pub const CVMixFilterProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0x10]u8, // 0x28
        _: [0x4]u8, // 0x38
        _: [0x4]u8, // 0x3c
    };
    pub const CVMixAdditionalOutput = extern struct {
        _: [0x10]u8, // 0x0
    };
    pub const CVoiceContainerTapePlayer = extern struct {
        pad_0: [0x88]u8, // 0x0
        _: [0x8]u8, // 0x88
        _: [0x8]u8, // 0x90
        _: [0x4]u8, // 0x98
        _: [0x3c]u8, // 0x9c
    };
    pub const CVMixSubgraphSwitchProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0x38]u8, // 0x28
        _: [0x4]u8, // 0x60
        _: [0x4]u8, // 0x64
    };
    pub const VMixDiffusorDesc_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
    };
    pub const CVMixSteamAudioPathingProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0x4]u8, // 0x28
        _: [0x4]u8, // 0x2c
        _: [0x4]u8, // 0x30
        _: [0x4]u8, // 0x34
        _: [0x4]u8, // 0x38
        _: [0x4]u8, // 0x3c
        _: [0x8]u8, // 0x40
    };
    pub const CVMixPannerProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0x8]u8, // 0x28
        _: [0x8]u8, // 0x30
    };
    pub const VMixDynamicsCompressorDesc_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
        _: [0x4]u8, // 0x20
        _: [0x1]u8, // 0x24
        _: [0x3]u8, // 0x25
    };
    pub const CVMixHeap = extern struct {
        _: [0x10]u8, // 0x0
    };
    pub const CVoiceContainerVMixSnd = extern struct {
        pad_0: [0x188]u8, // 0x0
        _: [0x8]u8, // 0x188
    };
    pub const CVMixStereoDelayProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0x4]u8, // 0x28
        _: [0x4]u8, // 0x2c
    };
    pub const VMixShaperDesc_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
    };
    pub const CVMixDataOffset = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const VMixEnvelopeDesc_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
    };
    pub const CAudioSentence = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x18]u8, // 0x8
        _: [0x18]u8, // 0x20
        _: [0x68]u8, // 0x38
    };
    pub const CVoiceContainerParameterBlender = extern struct {
        pad_0: [0x78]u8, // 0x0
        _: [0x20]u8, // 0x78
        _: [0x20]u8, // 0x98
        _: [0x8]u8, // 0xb8
        _: [0x40]u8, // 0xc0
        _: [0x40]u8, // 0x100
        _: [0x8]u8, // 0x140
        _: [0x40]u8, // 0x148
        _: [0x40]u8, // 0x188
    };
    pub const CVMixAudioMeter = extern struct {
        _: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
        _: [0x8]u8, // 0x10
    };
    pub const CVMixVocoderProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0x28]u8, // 0x28
        _: [0x8]u8, // 0x50
    };
    pub const CSosGroupActionLimitSchema = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
        _: [0x1]u8, // 0x14
        _: [0x3]u8, // 0x15
    };
    pub const CVoiceContainerAmpedDecayingSineWave = extern struct {
        pad_0: [0x80]u8, // 0x0
        _: [0x8]u8, // 0x80
    };
    pub const VMixAutoFilterDesc_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x10]u8, // 0xc
        _: [0x4]u8, // 0x1c
        _: [0x4]u8, // 0x20
        _: [0x4]u8, // 0x24
        _: [0x4]u8, // 0x28
    };
    pub const VMixDynamicsBand_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
        _: [0x1]u8, // 0x20
        _: [0x3]u8, // 0x21
    };
    pub const VMixEffectChainDesc_t = extern struct {
        _: [0x8]u8, // 0x0
    };
    pub const CVMixPlateReverbProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0x20]u8, // 0x28
    };
    pub const CVoiceContainerMultiBlender = extern struct {
        pad_0: [0x78]u8, // 0x0
        _: [0x38]u8, // 0x78
        _: [0x4]u8, // 0xb0
        _: [0x4]u8, // 0xb4
    };
    pub const CVMixVsndInput = extern struct {
        _: [0x18]u8, // 0x0
    };
    pub const CVoiceContainerStaticAdditiveSynth__CGainScalePerInstance = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
    };
    pub const CVMixParameterEffectName = extern struct {
        _: [0x4]u8, // 0x0
    };
    pub const SndBeatTimeSignature_t = extern struct {
        _: [0x1]u8, // 0x0
        _: [0x1]u8, // 0x1
    };
    pub const VelocityZone_t = extern struct {
        _: [0x1]u8, // 0x0
        _: [0x1]u8, // 0x1
        _: [0x2]u8, // 0x2
        _: [0x10]u8, // 0x4
    };
    pub const CVoiceContainerSelector = extern struct {
        pad_0: [0x78]u8, // 0x0
        _: [0x8]u8, // 0x78
        _: [0x38]u8, // 0x80
        _: [0x38]u8, // 0xb8
    };
    pub const SndBeatEventKeyedSndEvts_t = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
    };
    pub const CVMixGraphInput = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
    };
    pub const CSosGroupActionTimeBlockLimitSchema = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
    };
    pub const SndBeatEventKeyedMidiNotes_t = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x1]u8, // 0x10
        _: [0x1]u8, // 0x11
        _: [0x6]u8, // 0x12
    };
    pub const CSosGroupActionMemberCountEnvelopeSchema = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
        _: [0x8]u8, // 0x20
        _: [0x8]u8, // 0x28
    };
    pub const CVMixDualCompressorProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0x34]u8, // 0x28
        _: [0x4]u8, // 0x5c
        _: [0x4]u8, // 0x60
        _: [0x4]u8, // 0x64
    };
    pub const CVoiceContainerSwitch = extern struct {
        pad_0: [0x78]u8, // 0x0
        _: [0x18]u8, // 0x78
    };
    pub const CVMixControlMeter = extern struct {
        pad_0: [0x10]u8, // 0x0
        _: [0x8]u8, // 0x10
    };
    pub const CVoiceContainerEnum = extern struct {
        pad_0: [0x78]u8, // 0x0
        _: [0x38]u8, // 0x78
        _: [0x4]u8, // 0xb0
        _: [0x4]u8, // 0xb4
    };
    pub const CSosGroupActionTimeLimitSchema = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
    };
    pub const VMixVocoderDesc_t = extern struct {
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
    };
    pub const VMixUtilityDesc_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
    };
    pub const CVoiceContainerLoopTrigger = extern struct {
        pad_0: [0x78]u8, // 0x0
        _: [0x4]u8, // 0x78
        _: [0x4]u8, // 0x7c
        _: [0x4]u8, // 0x80
        _: [0x4]u8, // 0x84
        _: [0x20]u8, // 0x88
    };
    pub const SndBeatEventKeys_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        _: [0x8]u8, // 0x8
    };
    pub const CVoiceContainerDecayingSineWave = extern struct {
        pad_0: [0x78]u8, // 0x0
        _: [0x4]u8, // 0x78
        _: [0x4]u8, // 0x7c
    };
    pub const CVMixDelayProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0x28]u8, // 0x28
        _: [0x4]u8, // 0x50
        _: [0x4]u8, // 0x54
    };
    pub const CVMixBoxverb2ProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0x50]u8, // 0x28
    };
    pub const VMixFilterDesc_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x1]u8, // 0xc
        _: [0x1]u8, // 0xd
        _: [0x2]u8, // 0xe
    };
    pub const CSndBeatPattern = extern struct {
        _: [0xc]u8, // 0x0
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x8]u8, // 0x18
        _: [0x4]u8, // 0x20
        _: [0x4]u8, // 0x24
        _: [0x4]u8, // 0x28
        _: [0x4]u8, // 0x2c
        _: [0x8]u8, // 0x30
        _: [0x18]u8, // 0x38
        _: [0x18]u8, // 0x50
        _: [0x18]u8, // 0x68
        _: [0x18]u8, // 0x80
        _: [0x4]u8, // 0x98
        _: [0x4]u8, // 0x9c
        _: [0x18]u8, // 0xa0
    };
    pub const CSubmix = extern struct {
        pad_0: [0x50]u8, // 0x0
    };
    pub const VMixOscDesc_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
    };
    pub const CVMixAutoFilterProcessorDesc = extern struct {
        pad_0: [0x28]u8, // 0x0
        _: [0x30]u8, // 0x28
    };
    pub const ISndSeqInstruments = extern struct {
        pad_0: [0x8]u8, // 0x0
    };
    pub const VMixFlangerDesc_t = extern struct {
        _: [0x4]u8, // 0x0
        _: [0x4]u8, // 0x4
        _: [0x4]u8, // 0x8
        _: [0x4]u8, // 0xc
        _: [0x4]u8, // 0x10
        _: [0x4]u8, // 0x14
        _: [0x4]u8, // 0x18
        _: [0x4]u8, // 0x1c
        _: [0x4]u8, // 0x20
    };
    pub const VMixDynamicsDesc_t = extern struct {
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
    };
};
