/* cesium dumper | generated from live schema */
#![allow(non_snake_case, non_camel_case_types, dead_code)]

pub mod soundsystem_dll {

    #[repr(C)]
    pub struct CVMixInputBase {
        pub _: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct CVoiceContainerBlender {
        pub pad_0: [u8; 0x78], // 0x0
        pub _: [u8; 0x20], // 0x78
        pub _: [u8; 0x20], // 0x98
        pub _: [u8; 0x8], // 0xb8
    }

    #[repr(C)]
    pub struct CVMixPitchShiftProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0x10], // 0x28
        pub _: [u8; 0x8], // 0x38
    }

    #[repr(C)]
    pub struct VMixFreeverbDesc_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
    }

    #[repr(C)]
    pub struct CVoiceContainerStaticAdditiveSynth__CHarmonic {
        pub _: [u8; 0x1], // 0x0
        pub _: [u8; 0x3], // 0x1
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x40], // 0x10
        pub _: [u8; 0x18], // 0x50
    }

    #[repr(C)]
    pub struct CVsndTriggerSlot {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x20], // 0x8
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x20], // 0x30
        pub _: [u8; 0x8], // 0x50
        pub _: [u8; 0x20], // 0x58
        pub _: [u8; 0x4], // 0x78
        pub _: [u8; 0x4], // 0x7c
        pub _: [u8; 0x8], // 0x80
    }

    #[repr(C)]
    pub struct CVoiceContainerStaticAdditiveSynth__CTone {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x40], // 0x18
        pub _: [u8; 0x8], // 0x58
    }

    #[repr(C)]
    pub struct CSosGroupActionOcclusionSchema {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
    }

    #[repr(C)]
    pub struct CVoiceContainerRandomSampler {
        pub pad_0: [u8; 0x88], // 0x0
        pub _: [u8; 0x4], // 0x88
        pub _: [u8; 0x4], // 0x8c
        pub _: [u8; 0x4], // 0x90
        pub _: [u8; 0x4], // 0x94
        pub _: [u8; 0x8], // 0x98
        pub _: [u8; 0x110], // 0xa0
    }

    #[repr(C)]
    pub struct CVMixSteamAudioDirectProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x4], // 0x38
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
        pub _: [u8; 0x8], // 0x88
    }

    #[repr(C)]
    pub struct CVMixSteamAudioHRTFProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x4], // 0x44
        pub _: [u8; 0x8], // 0x48
    }

    #[repr(C)]
    pub struct CVoiceContainerDefault {
        pub pad_0: [u8; 0x78], // 0x0
    }

    #[repr(C)]
    pub struct CVSound {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x14], // 0x2c
    }

    #[repr(C)]
    pub struct CDSPPresetMixgroupModifierTable {
        pub _: [u8; 0x18], // 0x0
    }

    #[repr(C)]
    pub struct CSosGroupActionSoundeventClusterSchema {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x20], // 0x30
    }

    #[repr(C)]
    pub struct CSosGroupActionSetSoundeventParameterSchema {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x8], // 0x20
    }

    #[repr(C)]
    pub struct CSoundContainerReference {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
    }

    #[repr(C)]
    pub struct CVoiceContainerNull {
        pub pad_0: [u8; 0x78], // 0x0
    }

    #[repr(C)]
    pub struct VMixSubgraphSwitchDesc_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x18], // 0x10
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x8], // 0x30
    }

    #[repr(C)]
    pub struct CVoiceContainerAnalysisBase {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x40], // 0x8
    }

    #[repr(C)]
    pub struct CSosGroupActionSoundeventMinMaxValuesSchema {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x1], // 0x18
        pub _: [u8; 0x1], // 0x19
        pub _: [u8; 0x2], // 0x1a
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x10], // 0x30
    }

    #[repr(C)]
    pub struct CVMixEnvelopeProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0xc], // 0x28
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x8], // 0x38
    }

    #[repr(C)]
    pub struct CVMixCommand {
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
    pub struct SamplerVoice_t {
        pub _: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct CVMixControlInput {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CVMixBoxverbProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0x50], // 0x28
    }

    #[repr(C)]
    pub struct CVMixDynamicsCompressorProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0x28], // 0x28
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
        pub _: [u8; 0x8], // 0x58
    }

    #[repr(C)]
    pub struct VMixPannerDesc_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct CSosGroupActionSoundeventPrioritySchema {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x18], // 0x20
    }

    #[repr(C)]
    pub struct CVoiceContainerRealtimeFMSineWave {
        pub pad_0: [u8; 0x78], // 0x0
        pub _: [u8; 0x4], // 0x78
        pub _: [u8; 0x4], // 0x7c
        pub _: [u8; 0x8], // 0x80
    }

    #[repr(C)]
    pub struct SelectedEditItemInfo_t {
        pub _: [u8; 0x18], // 0x0
    }

    #[repr(C)]
    pub struct VMixModDelayDesc_t {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
    }

    #[repr(C)]
    pub struct CSndSeqInstSndEvtSchema {
        pub pad_0: [u8; 0x20], // 0x0
    }

    #[repr(C)]
    pub struct CVMixNameInputMeter {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CSndSeqInstruments {
        pub pad_0: [u8; 0x28], // 0x0
    }

    #[repr(C)]
    pub struct CVMixDynamics3BandProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0x90], // 0x28
    }

    #[repr(C)]
    pub struct VMixBoxverbDesc_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x10], // 0x1c
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x4], // 0x44
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
    }

    #[repr(C)]
    pub struct CSosGroupActionSchema {
        pub pad_0: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct CSosSoundEventGroupSchema {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x8], // 0x30
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x4], // 0x40
        pub _: [u8; 0x4], // 0x44
        pub _: [u8; 0x8], // 0x48
        pub _: [u8; 0x8], // 0x50
        pub _: [u8; 0x18], // 0x58
    }

    #[repr(C)]
    pub struct CSndSeqInstMidiSampler {
        pub pad_0: [u8; 0x20], // 0x0
        pub _: [u8; 0x1], // 0x20
        pub _: [u8; 0x1], // 0x21
        pub _: [u8; 0x1], // 0x22
        pub _: [u8; 0x1], // 0x23
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0xa0], // 0x34
        pub _: [u8; 0x4], // 0xd4
        pub _: [u8; 0x8], // 0xd8
    }

    #[repr(C)]
    pub struct VMixPointerFixupEntry_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct CSndSeqInstBaseSchema {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x6], // 0x8
        pub _: [u8; 0x2], // 0xe
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x8], // 0x18
    }

    #[repr(C)]
    pub struct VMixDynamics3BandDesc_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x6c], // 0x24
    }

    #[repr(C)]
    pub struct CVMixEQ8ProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0xa0], // 0x28
        pub _: [u8; 0x8], // 0xc8
    }

    #[repr(C)]
    pub struct CDSPMixgroupModifier {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x8], // 0x18
    }

    #[repr(C)]
    pub struct CAudioMorphData {
        pub _: [u8; 0x18], // 0x0
        pub _: [u8; 0x18], // 0x18
        pub _: [u8; 0x18], // 0x30
        pub _: [u8; 0x18], // 0x48
        pub _: [u8; 0x4], // 0x60
        pub _: [u8; 0x4], // 0x64
    }

    #[repr(C)]
    pub struct SndBeatEventKeyedFloats_t {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct VMixDualCompressorDesc_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x24], // 0x10
    }

    #[repr(C)]
    pub struct CVMixRuntimeGraph {
        pub pad_0: [u8; 0xd0], // 0x0
        pub _: [u8; 0x10], // 0xd0
        pub _: [u8; 0x10], // 0xe0
        pub _: [u8; 0x10], // 0xf0
        pub _: [u8; 0x10], // 0x100
        pub _: [u8; 0x18], // 0x110
    }

    #[repr(C)]
    pub struct CVoiceContainerStaticAdditiveSynth {
        pub pad_0: [u8; 0x88], // 0x0
        pub _: [u8; 0x30], // 0x88
    }

    #[repr(C)]
    pub struct CVoiceContainerShapedNoise {
        pub pad_0: [u8; 0x78], // 0x0
        pub _: [u8; 0x4], // 0x78
        pub _: [u8; 0x4], // 0x7c
        pub _: [u8; 0x40], // 0x80
        pub _: [u8; 0x4], // 0xc0
        pub _: [u8; 0x4], // 0xc4
        pub _: [u8; 0x40], // 0xc8
        pub _: [u8; 0x4], // 0x108
        pub _: [u8; 0x4], // 0x10c
        pub _: [u8; 0x40], // 0x110
    }

    #[repr(C)]
    pub struct CDspPresetModifierList {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
    }

    #[repr(C)]
    pub struct CVoiceContainerBase {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x1c], // 0x14
        pub _: [u8; 0x40], // 0x30
        pub _: [u8; 0x8], // 0x70
    }

    #[repr(C)]
    pub struct CVMixDiffusorProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0x10], // 0x28
    }

    #[repr(C)]
    pub struct CVMixUtilityProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0x18], // 0x28
    }

    #[repr(C)]
    pub struct CRandomPannerControls {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x8], // 0x18
    }

    #[repr(C)]
    pub struct CVoiceContainerGranulator {
        pub pad_0: [u8; 0x88], // 0x0
        pub _: [u8; 0x4], // 0x88
        pub _: [u8; 0x4], // 0x8c
        pub _: [u8; 0x4], // 0x90
        pub _: [u8; 0x4], // 0x94
        pub _: [u8; 0x8], // 0x98
        pub _: [u8; 0x8], // 0xa0
        pub _: [u8; 0x4], // 0xa8
        pub _: [u8; 0xcc], // 0xac
    }

    #[repr(C)]
    pub struct CVMixPresetDSPProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0x10], // 0x28
        pub _: [u8; 0x8], // 0x38
    }

    #[repr(C)]
    pub struct VMixDelayDesc_t {
        pub _: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
    }

    #[repr(C)]
    pub struct VMixEQ8Desc_t {
        pub _: [u8; 0xa0], // 0x0
    }

    #[repr(C)]
    pub struct CVMixDynamicsProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0x30], // 0x28
        pub _: [u8; 0x4], // 0x58
        pub _: [u8; 0x4], // 0x5c
    }

    #[repr(C)]
    pub struct VMixEQFilterDesc_t {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x4], // 0x10
    }

    #[repr(C)]
    pub struct CVoiceContainerLoopXFade {
        pub pad_0: [u8; 0x78], // 0x0
        pub _: [u8; 0x20], // 0x78
        pub _: [u8; 0x4], // 0x98
        pub _: [u8; 0x4], // 0x9c
        pub _: [u8; 0x4], // 0xa0
        pub _: [u8; 0x4], // 0xa4
        pub _: [u8; 0x1], // 0xa8
        pub _: [u8; 0x1], // 0xa9
        pub _: [u8; 0x6], // 0xaa
    }

    #[repr(C)]
    pub struct VMixPresetDSPDesc_t {
        pub _: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct CAudioPhonemeTag {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
    }

    #[repr(C)]
    pub struct CVsndRadioButtonSlot {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x20], // 0x8
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x20], // 0x30
        pub _: [u8; 0x8], // 0x50
        pub _: [u8; 0x20], // 0x58
        pub _: [u8; 0x4], // 0x78
        pub _: [u8; 0x4], // 0x7c
        pub _: [u8; 0x4], // 0x80
        pub _: [u8; 0x4], // 0x84
    }

    #[repr(C)]
    pub struct CSosGroupActionSoundeventCountSchema {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CVoiceContainerEnvelopeAnalyzer {
        pub pad_0: [u8; 0x48], // 0x0
        pub _: [u8; 0x4], // 0x48
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x8], // 0x50
    }

    #[repr(C)]
    pub struct CVMixBaseProcessorDesc {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
    }

    #[repr(C)]
    pub struct CVMixImpulseResponseInput {
        pub pad_0: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct CVMixSteamAudioHybridReverbProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x8], // 0x38
    }

    #[repr(C)]
    pub struct VMixPitchShiftDesc_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
    }

    #[repr(C)]
    pub struct CVMixControlOutput {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CVMixModDelayProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0x30], // 0x28
        pub _: [u8; 0x4], // 0x58
        pub _: [u8; 0x4], // 0x5c
        pub _: [u8; 0x4], // 0x60
        pub _: [u8; 0x4], // 0x64
    }

    #[repr(C)]
    pub struct CVMixShaperProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0x14], // 0x28
        pub _: [u8; 0x4], // 0x3c
    }

    #[repr(C)]
    pub struct CVMixParameterFloat {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CVMixBaseGraphDescription {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x10], // 0x10
        pub _: [u8; 0x10], // 0x20
        pub _: [u8; 0x10], // 0x30
        pub _: [u8; 0x10], // 0x40
        pub _: [u8; 0x10], // 0x50
        pub _: [u8; 0x10], // 0x60
        pub _: [u8; 0x10], // 0x70
        pub _: [u8; 0x10], // 0x80
        pub _: [u8; 0x10], // 0x90
        pub _: [u8; 0x10], // 0xa0
        pub _: [u8; 0x10], // 0xb0
        pub _: [u8; 0x10], // 0xc0
    }

    #[repr(C)]
    pub struct CVMixAutomaticControlInput {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CSndBeatTrack {
        pub _: [u8; 0x20], // 0x0
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x6c], // 0x2c
    }

    #[repr(C)]
    pub struct CVoiceContainerVsndRadioButton {
        pub pad_0: [u8; 0x78], // 0x0
        pub _: [u8; 0x8], // 0x78
        pub _: [u8; 0x88], // 0x80
        pub _: [u8; 0x88], // 0x108
        pub _: [u8; 0x88], // 0x190
        pub _: [u8; 0x88], // 0x218
        pub _: [u8; 0x88], // 0x2a0
        pub _: [u8; 0x88], // 0x328
        pub _: [u8; 0x88], // 0x3b0
        pub _: [u8; 0x88], // 0x438
        pub _: [u8; 0x88], // 0x4c0
        pub _: [u8; 0x88], // 0x548
        pub _: [u8; 0x88], // 0x5d0
        pub _: [u8; 0x88], // 0x658
        pub _: [u8; 0x88], // 0x6e0
        pub _: [u8; 0x88], // 0x768
        pub _: [u8; 0x88], // 0x7f0
        pub _: [u8; 0x88], // 0x878
    }

    #[repr(C)]
    pub struct CAudioEmphasisSample {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
    }

    #[repr(C)]
    pub struct CVMixOscProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0xc], // 0x28
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x8], // 0x38
    }

    #[repr(C)]
    pub struct CVoiceContainerLoopTriggerWithRandomPanner {
        pub pad_0: [u8; 0xa8], // 0x0
        pub _: [u8; 0x20], // 0xa8
    }

    #[repr(C)]
    pub struct CVoiceContainerGenerator {
        pub pad_0: [u8; 0x78], // 0x0
    }

    #[repr(C)]
    pub struct CVoiceContainerSet {
        pub pad_0: [u8; 0x78], // 0x0
        pub _: [u8; 0x30], // 0x78
    }

    #[repr(C)]
    pub struct VMixConvolutionDesc_t {
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
    pub struct CVoiceContainerVsndTrigger {
        pub pad_0: [u8; 0x78], // 0x0
        pub _: [u8; 0x8], // 0x78
        pub _: [u8; 0x88], // 0x80
        pub _: [u8; 0x88], // 0x108
        pub _: [u8; 0x88], // 0x190
        pub _: [u8; 0x88], // 0x218
        pub _: [u8; 0x88], // 0x2a0
        pub _: [u8; 0x88], // 0x328
        pub _: [u8; 0x88], // 0x3b0
        pub _: [u8; 0x88], // 0x438
        pub _: [u8; 0x88], // 0x4c0
        pub _: [u8; 0x88], // 0x548
        pub _: [u8; 0x88], // 0x5d0
        pub _: [u8; 0x88], // 0x658
        pub _: [u8; 0x88], // 0x6e0
        pub _: [u8; 0x88], // 0x768
        pub _: [u8; 0x88], // 0x7f0
        pub _: [u8; 0x88], // 0x878
    }

    #[repr(C)]
    pub struct CVoiceContainerSetElement {
        pub _: [u8; 0x20], // 0x0
        pub _: [u8; 0x8], // 0x20
    }

    #[repr(C)]
    pub struct CSndBeatPatternManager {
        pub pad_0: [u8; 0x38], // 0x0
        pub _: [u8; 0x38], // 0x38
        pub _: [u8; 0x20], // 0x70
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
        pub pad_0: [u8; 0xd0], // 0x0
        pub _: [u8; 0x10], // 0xd0
        pub _: [u8; 0x10], // 0xe0
        pub _: [u8; 0x10], // 0xf0
        pub _: [u8; 0x10], // 0x100
    }

    #[repr(C)]
    pub struct SosEditItemInfo_t {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x10], // 0x10
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
    }

    #[repr(C)]
    pub struct CVMixSubmix {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x24], // 0x8
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x2], // 0x34
        pub _: [u8; 0x1], // 0x36
        pub _: [u8; 0x1], // 0x37
    }

    #[repr(C)]
    pub struct CVMixFlangerProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0x24], // 0x28
        pub _: [u8; 0x4], // 0x4c
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
    }

    #[repr(C)]
    pub struct CVMixEffectChainProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x8], // 0x30
    }

    #[repr(C)]
    pub struct KeyGroup_t {
        pub _: [u8; 0x1], // 0x0
        pub _: [u8; 0x1], // 0x1
        pub _: [u8; 0x1], // 0x2
        pub _: [u8; 0x5], // 0x3
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct CVMixFreeverbProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0x10], // 0x28
    }

    #[repr(C)]
    pub struct VMixPlateverbDesc_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
    }

    #[repr(C)]
    pub struct CVMixConvolutionProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0x20], // 0x28
        pub _: [u8; 0x8], // 0x48
    }

    #[repr(C)]
    pub struct CVMixParameterBool {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct CSoundContainerReferenceArray {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
        pub _: [u8; 0x18], // 0x20
    }

    #[repr(C)]
    pub struct CVMixFilterProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0x10], // 0x28
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
    }

    #[repr(C)]
    pub struct CVMixAdditionalOutput {
        pub _: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct CVoiceContainerTapePlayer {
        pub pad_0: [u8; 0x88], // 0x0
        pub _: [u8; 0x8], // 0x88
        pub _: [u8; 0x8], // 0x90
        pub _: [u8; 0x4], // 0x98
        pub _: [u8; 0x3c], // 0x9c
    }

    #[repr(C)]
    pub struct CVMixSubgraphSwitchProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0x38], // 0x28
        pub _: [u8; 0x4], // 0x60
        pub _: [u8; 0x4], // 0x64
    }

    #[repr(C)]
    pub struct VMixDiffusorDesc_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
    }

    #[repr(C)]
    pub struct CVMixSteamAudioPathingProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x4], // 0x30
        pub _: [u8; 0x4], // 0x34
        pub _: [u8; 0x4], // 0x38
        pub _: [u8; 0x4], // 0x3c
        pub _: [u8; 0x8], // 0x40
    }

    #[repr(C)]
    pub struct CVMixPannerProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0x8], // 0x28
        pub _: [u8; 0x8], // 0x30
    }

    #[repr(C)]
    pub struct VMixDynamicsCompressorDesc_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x1], // 0x24
        pub _: [u8; 0x3], // 0x25
    }

    #[repr(C)]
    pub struct CVMixHeap {
        pub _: [u8; 0x10], // 0x0
    }

    #[repr(C)]
    pub struct CVoiceContainerVMixSnd {
        pub pad_0: [u8; 0x188], // 0x0
        pub _: [u8; 0x8], // 0x188
    }

    #[repr(C)]
    pub struct CVMixStereoDelayProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
    }

    #[repr(C)]
    pub struct VMixShaperDesc_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
    }

    #[repr(C)]
    pub struct CVMixDataOffset {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct VMixEnvelopeDesc_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
    }

    #[repr(C)]
    pub struct CAudioSentence {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x18], // 0x8
        pub _: [u8; 0x18], // 0x20
        pub _: [u8; 0x68], // 0x38
    }

    #[repr(C)]
    pub struct CVoiceContainerParameterBlender {
        pub pad_0: [u8; 0x78], // 0x0
        pub _: [u8; 0x20], // 0x78
        pub _: [u8; 0x20], // 0x98
        pub _: [u8; 0x8], // 0xb8
        pub _: [u8; 0x40], // 0xc0
        pub _: [u8; 0x40], // 0x100
        pub _: [u8; 0x8], // 0x140
        pub _: [u8; 0x40], // 0x148
        pub _: [u8; 0x40], // 0x188
    }

    #[repr(C)]
    pub struct CVMixAudioMeter {
        pub _: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CVMixVocoderProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0x28], // 0x28
        pub _: [u8; 0x8], // 0x50
    }

    #[repr(C)]
    pub struct CSosGroupActionLimitSchema {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x1], // 0x14
        pub _: [u8; 0x3], // 0x15
    }

    #[repr(C)]
    pub struct CVoiceContainerAmpedDecayingSineWave {
        pub pad_0: [u8; 0x80], // 0x0
        pub _: [u8; 0x8], // 0x80
    }

    #[repr(C)]
    pub struct VMixAutoFilterDesc_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x10], // 0xc
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x4], // 0x28
    }

    #[repr(C)]
    pub struct VMixDynamicsBand_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x1], // 0x20
        pub _: [u8; 0x3], // 0x21
    }

    #[repr(C)]
    pub struct VMixEffectChainDesc_t {
        pub _: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct CVMixPlateReverbProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0x20], // 0x28
    }

    #[repr(C)]
    pub struct CVoiceContainerMultiBlender {
        pub pad_0: [u8; 0x78], // 0x0
        pub _: [u8; 0x38], // 0x78
        pub _: [u8; 0x4], // 0xb0
        pub _: [u8; 0x4], // 0xb4
    }

    #[repr(C)]
    pub struct CVMixVsndInput {
        pub _: [u8; 0x18], // 0x0
    }

    #[repr(C)]
    pub struct CVoiceContainerStaticAdditiveSynth__CGainScalePerInstance {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
    }

    #[repr(C)]
    pub struct CVMixParameterEffectName {
        pub _: [u8; 0x4], // 0x0
    }

    #[repr(C)]
    pub struct SndBeatTimeSignature_t {
        pub _: [u8; 0x1], // 0x0
        pub _: [u8; 0x1], // 0x1
    }

    #[repr(C)]
    pub struct VelocityZone_t {
        pub _: [u8; 0x1], // 0x0
        pub _: [u8; 0x1], // 0x1
        pub _: [u8; 0x2], // 0x2
        pub _: [u8; 0x10], // 0x4
    }

    #[repr(C)]
    pub struct CVoiceContainerSelector {
        pub pad_0: [u8; 0x78], // 0x0
        pub _: [u8; 0x8], // 0x78
        pub _: [u8; 0x38], // 0x80
        pub _: [u8; 0x38], // 0xb8
    }

    #[repr(C)]
    pub struct SndBeatEventKeyedSndEvts_t {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CVMixGraphInput {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CSosGroupActionTimeBlockLimitSchema {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
    }

    #[repr(C)]
    pub struct SndBeatEventKeyedMidiNotes_t {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x1], // 0x10
        pub _: [u8; 0x1], // 0x11
        pub _: [u8; 0x6], // 0x12
    }

    #[repr(C)]
    pub struct CSosGroupActionMemberCountEnvelopeSchema {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x8], // 0x20
        pub _: [u8; 0x8], // 0x28
    }

    #[repr(C)]
    pub struct CVMixDualCompressorProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0x34], // 0x28
        pub _: [u8; 0x4], // 0x5c
        pub _: [u8; 0x4], // 0x60
        pub _: [u8; 0x4], // 0x64
    }

    #[repr(C)]
    pub struct CVoiceContainerSwitch {
        pub pad_0: [u8; 0x78], // 0x0
        pub _: [u8; 0x18], // 0x78
    }

    #[repr(C)]
    pub struct CVMixControlMeter {
        pub pad_0: [u8; 0x10], // 0x0
        pub _: [u8; 0x8], // 0x10
    }

    #[repr(C)]
    pub struct CVoiceContainerEnum {
        pub pad_0: [u8; 0x78], // 0x0
        pub _: [u8; 0x38], // 0x78
        pub _: [u8; 0x4], // 0xb0
        pub _: [u8; 0x4], // 0xb4
    }

    #[repr(C)]
    pub struct CSosGroupActionTimeLimitSchema {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct VMixVocoderDesc_t {
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
    }

    #[repr(C)]
    pub struct VMixUtilityDesc_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
    }

    #[repr(C)]
    pub struct CVoiceContainerLoopTrigger {
        pub pad_0: [u8; 0x78], // 0x0
        pub _: [u8; 0x4], // 0x78
        pub _: [u8; 0x4], // 0x7c
        pub _: [u8; 0x4], // 0x80
        pub _: [u8; 0x4], // 0x84
        pub _: [u8; 0x20], // 0x88
    }

    #[repr(C)]
    pub struct SndBeatEventKeys_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub _: [u8; 0x8], // 0x8
    }

    #[repr(C)]
    pub struct CVoiceContainerDecayingSineWave {
        pub pad_0: [u8; 0x78], // 0x0
        pub _: [u8; 0x4], // 0x78
        pub _: [u8; 0x4], // 0x7c
    }

    #[repr(C)]
    pub struct CVMixDelayProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0x28], // 0x28
        pub _: [u8; 0x4], // 0x50
        pub _: [u8; 0x4], // 0x54
    }

    #[repr(C)]
    pub struct CVMixBoxverb2ProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0x50], // 0x28
    }

    #[repr(C)]
    pub struct VMixFilterDesc_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x1], // 0xc
        pub _: [u8; 0x1], // 0xd
        pub _: [u8; 0x2], // 0xe
    }

    #[repr(C)]
    pub struct CSndBeatPattern {
        pub _: [u8; 0xc], // 0x0
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x8], // 0x18
        pub _: [u8; 0x4], // 0x20
        pub _: [u8; 0x4], // 0x24
        pub _: [u8; 0x4], // 0x28
        pub _: [u8; 0x4], // 0x2c
        pub _: [u8; 0x8], // 0x30
        pub _: [u8; 0x18], // 0x38
        pub _: [u8; 0x18], // 0x50
        pub _: [u8; 0x18], // 0x68
        pub _: [u8; 0x18], // 0x80
        pub _: [u8; 0x4], // 0x98
        pub _: [u8; 0x4], // 0x9c
        pub _: [u8; 0x18], // 0xa0
    }

    #[repr(C)]
    pub struct CSubmix {
        pub pad_0: [u8; 0x50], // 0x0
    }

    #[repr(C)]
    pub struct VMixOscDesc_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
    }

    #[repr(C)]
    pub struct CVMixAutoFilterProcessorDesc {
        pub pad_0: [u8; 0x28], // 0x0
        pub _: [u8; 0x30], // 0x28
    }

    #[repr(C)]
    pub struct ISndSeqInstruments {
        pub pad_0: [u8; 0x8], // 0x0
    }

    #[repr(C)]
    pub struct VMixFlangerDesc_t {
        pub _: [u8; 0x4], // 0x0
        pub _: [u8; 0x4], // 0x4
        pub _: [u8; 0x4], // 0x8
        pub _: [u8; 0x4], // 0xc
        pub _: [u8; 0x4], // 0x10
        pub _: [u8; 0x4], // 0x14
        pub _: [u8; 0x4], // 0x18
        pub _: [u8; 0x4], // 0x1c
        pub _: [u8; 0x4], // 0x20
    }

    #[repr(C)]
    pub struct VMixDynamicsDesc_t {
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
    }

}
