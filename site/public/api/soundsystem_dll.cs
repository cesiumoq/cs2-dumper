/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Total Offsets   : 202
/*  Dumped At       : 22:59 04/11/2026 (GMT)
/*  Dumped In       : 1,7s
*/

/* cesium dumper | generated from live schema */
using System;
using System.Runtime.InteropServices;

namespace Cs2.soundsystem_dll {

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CVMixInputBase {
        [FieldOffset(0x0)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc0)]
    public unsafe struct CVoiceContainerBlender {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte _[0x20];
        [FieldOffset(0x98)] public fixed byte _[0x20];
        [FieldOffset(0xb8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CVMixPitchShiftProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x10];
        [FieldOffset(0x38)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct VMixFreeverbDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct CVoiceContainerStaticAdditiveSynth__CHarmonic {
        [FieldOffset(0x0)] public fixed byte _[0x1];
        [FieldOffset(0x1)] public fixed byte _[0x3];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x40];
        [FieldOffset(0x50)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CVsndTriggerSlot {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x20];
        [FieldOffset(0x28)] public fixed byte _[0x8];
        [FieldOffset(0x30)] public fixed byte _[0x20];
        [FieldOffset(0x50)] public fixed byte _[0x8];
        [FieldOffset(0x58)] public fixed byte _[0x20];
        [FieldOffset(0x78)] public fixed byte _[0x4];
        [FieldOffset(0x7c)] public fixed byte _[0x4];
        [FieldOffset(0x80)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CVoiceContainerStaticAdditiveSynth__CTone {
        [FieldOffset(0x0)] public fixed byte _[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x40];
        [FieldOffset(0x58)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CSosGroupActionOcclusionSchema {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1b0)]
    public unsafe struct CVoiceContainerRandomSampler {
        [FieldOffset(0x0)] public fixed byte pad_0[0x88];
        [FieldOffset(0x88)] public fixed byte _[0x4];
        [FieldOffset(0x8c)] public fixed byte _[0x4];
        [FieldOffset(0x90)] public fixed byte _[0x4];
        [FieldOffset(0x94)] public fixed byte _[0x4];
        [FieldOffset(0x98)] public fixed byte _[0x8];
        [FieldOffset(0xa0)] public fixed byte _[0x110];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CVMixSteamAudioDirectProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
        [FieldOffset(0x30)] public fixed byte _[0x4];
        [FieldOffset(0x34)] public fixed byte _[0x4];
        [FieldOffset(0x38)] public fixed byte _[0x4];
        [FieldOffset(0x3c)] public fixed byte _[0x4];
        [FieldOffset(0x40)] public fixed byte _[0x4];
        [FieldOffset(0x44)] public fixed byte _[0x4];
        [FieldOffset(0x48)] public fixed byte _[0x4];
        [FieldOffset(0x4c)] public fixed byte _[0x4];
        [FieldOffset(0x50)] public fixed byte _[0x4];
        [FieldOffset(0x54)] public fixed byte _[0x4];
        [FieldOffset(0x58)] public fixed byte _[0x4];
        [FieldOffset(0x5c)] public fixed byte _[0x4];
        [FieldOffset(0x60)] public fixed byte _[0x4];
        [FieldOffset(0x64)] public fixed byte _[0x4];
        [FieldOffset(0x68)] public fixed byte _[0x4];
        [FieldOffset(0x6c)] public fixed byte _[0x4];
        [FieldOffset(0x70)] public fixed byte _[0x4];
        [FieldOffset(0x74)] public fixed byte _[0x4];
        [FieldOffset(0x78)] public fixed byte _[0x4];
        [FieldOffset(0x7c)] public fixed byte _[0x4];
        [FieldOffset(0x80)] public fixed byte _[0x4];
        [FieldOffset(0x84)] public fixed byte _[0x4];
        [FieldOffset(0x88)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CVMixSteamAudioHRTFProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
        [FieldOffset(0x30)] public fixed byte _[0x4];
        [FieldOffset(0x34)] public fixed byte _[0x4];
        [FieldOffset(0x38)] public fixed byte _[0x4];
        [FieldOffset(0x3c)] public fixed byte _[0x4];
        [FieldOffset(0x40)] public fixed byte _[0x4];
        [FieldOffset(0x44)] public fixed byte _[0x4];
        [FieldOffset(0x48)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CVoiceContainerDefault {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CVSound {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x14];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CDSPPresetMixgroupModifierTable {
        [FieldOffset(0x0)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CSosGroupActionSoundeventClusterSchema {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x8];
        [FieldOffset(0x30)] public fixed byte _[0x20];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CSosGroupActionSetSoundeventParameterSchema {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CSoundContainerReference {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CVoiceContainerNull {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct VMixSubgraphSwitchDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x18];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
        [FieldOffset(0x30)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CVoiceContainerAnalysisBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x40];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CSosGroupActionSoundeventMinMaxValuesSchema {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x1];
        [FieldOffset(0x19)] public fixed byte _[0x1];
        [FieldOffset(0x1a)] public fixed byte _[0x2];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
        [FieldOffset(0x28)] public fixed byte _[0x8];
        [FieldOffset(0x30)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CVMixEnvelopeProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0xc];
        [FieldOffset(0x34)] public fixed byte _[0x4];
        [FieldOffset(0x38)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CVMixCommand {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct SamplerVoice_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CVMixControlInput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CVMixBoxverbProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x50];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CVMixDynamicsCompressorProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x28];
        [FieldOffset(0x50)] public fixed byte _[0x4];
        [FieldOffset(0x54)] public fixed byte _[0x4];
        [FieldOffset(0x58)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct VMixPannerDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CSosGroupActionSoundeventPrioritySchema {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x8];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CVoiceContainerRealtimeFMSineWave {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte _[0x4];
        [FieldOffset(0x7c)] public fixed byte _[0x4];
        [FieldOffset(0x80)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct SelectedEditItemInfo_t {
        [FieldOffset(0x0)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct VMixModDelayDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CSndSeqInstSndEvtSchema {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CVMixNameInputMeter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CSndSeqInstruments {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xb8)]
    public unsafe struct CVMixDynamics3BandProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x90];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct VMixBoxverbDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x10];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
        [FieldOffset(0x30)] public fixed byte _[0x4];
        [FieldOffset(0x34)] public fixed byte _[0x4];
        [FieldOffset(0x38)] public fixed byte _[0x4];
        [FieldOffset(0x3c)] public fixed byte _[0x4];
        [FieldOffset(0x40)] public fixed byte _[0x4];
        [FieldOffset(0x44)] public fixed byte _[0x4];
        [FieldOffset(0x48)] public fixed byte _[0x4];
        [FieldOffset(0x4c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CSosGroupActionSchema {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CSosSoundEventGroupSchema {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x8];
        [FieldOffset(0x30)] public fixed byte _[0x8];
        [FieldOffset(0x38)] public fixed byte _[0x4];
        [FieldOffset(0x3c)] public fixed byte _[0x4];
        [FieldOffset(0x40)] public fixed byte _[0x4];
        [FieldOffset(0x44)] public fixed byte _[0x4];
        [FieldOffset(0x48)] public fixed byte _[0x8];
        [FieldOffset(0x50)] public fixed byte _[0x8];
        [FieldOffset(0x58)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xe0)]
    public unsafe struct CSndSeqInstMidiSampler {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
        [FieldOffset(0x20)] public fixed byte _[0x1];
        [FieldOffset(0x21)] public fixed byte _[0x1];
        [FieldOffset(0x22)] public fixed byte _[0x1];
        [FieldOffset(0x23)] public fixed byte _[0x1];
        [FieldOffset(0x24)] public fixed byte _[0x4];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
        [FieldOffset(0x30)] public fixed byte _[0x4];
        [FieldOffset(0x34)] public fixed byte _[0xa0];
        [FieldOffset(0xd4)] public fixed byte _[0x4];
        [FieldOffset(0xd8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct VMixPointerFixupEntry_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CSndSeqInstBaseSchema {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x6];
        [FieldOffset(0xe)] public fixed byte _[0x2];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct VMixDynamics3BandDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x6c];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xd0)]
    public unsafe struct CVMixEQ8ProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0xa0];
        [FieldOffset(0xc8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CDSPMixgroupModifier {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct CAudioMorphData {
        [FieldOffset(0x0)] public fixed byte _[0x18];
        [FieldOffset(0x18)] public fixed byte _[0x18];
        [FieldOffset(0x30)] public fixed byte _[0x18];
        [FieldOffset(0x48)] public fixed byte _[0x18];
        [FieldOffset(0x60)] public fixed byte _[0x4];
        [FieldOffset(0x64)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct SndBeatEventKeyedFloats_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x34)]
    public unsafe struct VMixDualCompressorDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x24];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x128)]
    public unsafe struct CVMixRuntimeGraph {
        [FieldOffset(0x0)] public fixed byte pad_0[0xd0];
        [FieldOffset(0xd0)] public fixed byte _[0x10];
        [FieldOffset(0xe0)] public fixed byte _[0x10];
        [FieldOffset(0xf0)] public fixed byte _[0x10];
        [FieldOffset(0x100)] public fixed byte _[0x10];
        [FieldOffset(0x110)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xb8)]
    public unsafe struct CVoiceContainerStaticAdditiveSynth {
        [FieldOffset(0x0)] public fixed byte pad_0[0x88];
        [FieldOffset(0x88)] public fixed byte _[0x30];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x150)]
    public unsafe struct CVoiceContainerShapedNoise {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte _[0x4];
        [FieldOffset(0x7c)] public fixed byte _[0x4];
        [FieldOffset(0x80)] public fixed byte _[0x40];
        [FieldOffset(0xc0)] public fixed byte _[0x4];
        [FieldOffset(0xc4)] public fixed byte _[0x4];
        [FieldOffset(0xc8)] public fixed byte _[0x40];
        [FieldOffset(0x108)] public fixed byte _[0x4];
        [FieldOffset(0x10c)] public fixed byte _[0x4];
        [FieldOffset(0x110)] public fixed byte _[0x40];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CDspPresetModifierList {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CVoiceContainerBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x1c];
        [FieldOffset(0x30)] public fixed byte _[0x40];
        [FieldOffset(0x70)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CVMixDiffusorProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CVMixUtilityProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CRandomPannerControls {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x178)]
    public unsafe struct CVoiceContainerGranulator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x88];
        [FieldOffset(0x88)] public fixed byte _[0x4];
        [FieldOffset(0x8c)] public fixed byte _[0x4];
        [FieldOffset(0x90)] public fixed byte _[0x4];
        [FieldOffset(0x94)] public fixed byte _[0x4];
        [FieldOffset(0x98)] public fixed byte _[0x8];
        [FieldOffset(0xa0)] public fixed byte _[0x8];
        [FieldOffset(0xa8)] public fixed byte _[0x4];
        [FieldOffset(0xac)] public fixed byte _[0xcc];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CVMixPresetDSPProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x10];
        [FieldOffset(0x38)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct VMixDelayDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xa0)]
    public unsafe struct VMixEQ8Desc_t {
        [FieldOffset(0x0)] public fixed byte _[0xa0];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CVMixDynamicsProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x30];
        [FieldOffset(0x58)] public fixed byte _[0x4];
        [FieldOffset(0x5c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct VMixEQFilterDesc_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xb0)]
    public unsafe struct CVoiceContainerLoopXFade {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte _[0x20];
        [FieldOffset(0x98)] public fixed byte _[0x4];
        [FieldOffset(0x9c)] public fixed byte _[0x4];
        [FieldOffset(0xa0)] public fixed byte _[0x4];
        [FieldOffset(0xa4)] public fixed byte _[0x4];
        [FieldOffset(0xa8)] public fixed byte _[0x1];
        [FieldOffset(0xa9)] public fixed byte _[0x1];
        [FieldOffset(0xaa)] public fixed byte _[0x6];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct VMixPresetDSPDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc)]
    public unsafe struct CAudioPhonemeTag {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CVsndRadioButtonSlot {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x20];
        [FieldOffset(0x28)] public fixed byte _[0x8];
        [FieldOffset(0x30)] public fixed byte _[0x20];
        [FieldOffset(0x50)] public fixed byte _[0x8];
        [FieldOffset(0x58)] public fixed byte _[0x20];
        [FieldOffset(0x78)] public fixed byte _[0x4];
        [FieldOffset(0x7c)] public fixed byte _[0x4];
        [FieldOffset(0x80)] public fixed byte _[0x4];
        [FieldOffset(0x84)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CSosGroupActionSoundeventCountSchema {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CVoiceContainerEnvelopeAnalyzer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte _[0x4];
        [FieldOffset(0x4c)] public fixed byte _[0x4];
        [FieldOffset(0x50)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CVMixBaseProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CVMixImpulseResponseInput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CVMixSteamAudioHybridReverbProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
        [FieldOffset(0x30)] public fixed byte _[0x4];
        [FieldOffset(0x34)] public fixed byte _[0x4];
        [FieldOffset(0x38)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct VMixPitchShiftDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CVMixControlOutput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct CVMixModDelayProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x30];
        [FieldOffset(0x58)] public fixed byte _[0x4];
        [FieldOffset(0x5c)] public fixed byte _[0x4];
        [FieldOffset(0x60)] public fixed byte _[0x4];
        [FieldOffset(0x64)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CVMixShaperProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x14];
        [FieldOffset(0x3c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CVMixParameterFloat {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xd0)]
    public unsafe struct CVMixBaseGraphDescription {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x10];
        [FieldOffset(0x20)] public fixed byte _[0x10];
        [FieldOffset(0x30)] public fixed byte _[0x10];
        [FieldOffset(0x40)] public fixed byte _[0x10];
        [FieldOffset(0x50)] public fixed byte _[0x10];
        [FieldOffset(0x60)] public fixed byte _[0x10];
        [FieldOffset(0x70)] public fixed byte _[0x10];
        [FieldOffset(0x80)] public fixed byte _[0x10];
        [FieldOffset(0x90)] public fixed byte _[0x10];
        [FieldOffset(0xa0)] public fixed byte _[0x10];
        [FieldOffset(0xb0)] public fixed byte _[0x10];
        [FieldOffset(0xc0)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CVMixAutomaticControlInput {
        [FieldOffset(0x0)] public fixed byte _[0xc];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x98)]
    public unsafe struct CSndBeatTrack {
        [FieldOffset(0x0)] public fixed byte _[0x20];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x6c];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x900)]
    public unsafe struct CVoiceContainerVsndRadioButton {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte _[0x8];
        [FieldOffset(0x80)] public fixed byte _[0x88];
        [FieldOffset(0x108)] public fixed byte _[0x88];
        [FieldOffset(0x190)] public fixed byte _[0x88];
        [FieldOffset(0x218)] public fixed byte _[0x88];
        [FieldOffset(0x2a0)] public fixed byte _[0x88];
        [FieldOffset(0x328)] public fixed byte _[0x88];
        [FieldOffset(0x3b0)] public fixed byte _[0x88];
        [FieldOffset(0x438)] public fixed byte _[0x88];
        [FieldOffset(0x4c0)] public fixed byte _[0x88];
        [FieldOffset(0x548)] public fixed byte _[0x88];
        [FieldOffset(0x5d0)] public fixed byte _[0x88];
        [FieldOffset(0x658)] public fixed byte _[0x88];
        [FieldOffset(0x6e0)] public fixed byte _[0x88];
        [FieldOffset(0x768)] public fixed byte _[0x88];
        [FieldOffset(0x7f0)] public fixed byte _[0x88];
        [FieldOffset(0x878)] public fixed byte _[0x88];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CAudioEmphasisSample {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CVMixOscProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0xc];
        [FieldOffset(0x34)] public fixed byte _[0x4];
        [FieldOffset(0x38)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc8)]
    public unsafe struct CVoiceContainerLoopTriggerWithRandomPanner {
        [FieldOffset(0x0)] public fixed byte pad_0[0xa8];
        [FieldOffset(0xa8)] public fixed byte _[0x20];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CVoiceContainerGenerator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xa8)]
    public unsafe struct CVoiceContainerSet {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte _[0x30];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct VMixConvolutionDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x900)]
    public unsafe struct CVoiceContainerVsndTrigger {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte _[0x8];
        [FieldOffset(0x80)] public fixed byte _[0x88];
        [FieldOffset(0x108)] public fixed byte _[0x88];
        [FieldOffset(0x190)] public fixed byte _[0x88];
        [FieldOffset(0x218)] public fixed byte _[0x88];
        [FieldOffset(0x2a0)] public fixed byte _[0x88];
        [FieldOffset(0x328)] public fixed byte _[0x88];
        [FieldOffset(0x3b0)] public fixed byte _[0x88];
        [FieldOffset(0x438)] public fixed byte _[0x88];
        [FieldOffset(0x4c0)] public fixed byte _[0x88];
        [FieldOffset(0x548)] public fixed byte _[0x88];
        [FieldOffset(0x5d0)] public fixed byte _[0x88];
        [FieldOffset(0x658)] public fixed byte _[0x88];
        [FieldOffset(0x6e0)] public fixed byte _[0x88];
        [FieldOffset(0x768)] public fixed byte _[0x88];
        [FieldOffset(0x7f0)] public fixed byte _[0x88];
        [FieldOffset(0x878)] public fixed byte _[0x88];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CVoiceContainerSetElement {
        [FieldOffset(0x0)] public fixed byte _[0x20];
        [FieldOffset(0x20)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CSndBeatPatternManager {
        [FieldOffset(0x0)] public fixed byte pad_0[0x38];
        [FieldOffset(0x38)] public fixed byte _[0x38];
        [FieldOffset(0x70)] public fixed byte _[0x20];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CVoiceContainerAsyncGenerator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x88];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct CSoundInfoHeader {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x110)]
    public unsafe struct CVMixDescription {
        [FieldOffset(0x0)] public fixed byte pad_0[0xd0];
        [FieldOffset(0xd0)] public fixed byte _[0x10];
        [FieldOffset(0xe0)] public fixed byte _[0x10];
        [FieldOffset(0xf0)] public fixed byte _[0x10];
        [FieldOffset(0x100)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct SosEditItemInfo_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x10];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CVMixSubmix {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x24];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
        [FieldOffset(0x30)] public fixed byte _[0x4];
        [FieldOffset(0x34)] public fixed byte _[0x2];
        [FieldOffset(0x36)] public fixed byte _[0x1];
        [FieldOffset(0x37)] public fixed byte _[0x1];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CVMixFlangerProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x24];
        [FieldOffset(0x4c)] public fixed byte _[0x4];
        [FieldOffset(0x50)] public fixed byte _[0x4];
        [FieldOffset(0x54)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CVMixEffectChainProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x8];
        [FieldOffset(0x30)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct KeyGroup_t {
        [FieldOffset(0x0)] public fixed byte _[0x1];
        [FieldOffset(0x1)] public fixed byte _[0x1];
        [FieldOffset(0x2)] public fixed byte _[0x1];
        [FieldOffset(0x3)] public fixed byte _[0x5];
        [FieldOffset(0x8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CVMixFreeverbProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1c)]
    public unsafe struct VMixPlateverbDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CVMixConvolutionProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x20];
        [FieldOffset(0x48)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CVMixParameterBool {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CSoundContainerReferenceArray {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x18];
        [FieldOffset(0x20)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CVMixFilterProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x10];
        [FieldOffset(0x38)] public fixed byte _[0x4];
        [FieldOffset(0x3c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CVMixAdditionalOutput {
        [FieldOffset(0x0)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xd8)]
    public unsafe struct CVoiceContainerTapePlayer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x88];
        [FieldOffset(0x88)] public fixed byte _[0x8];
        [FieldOffset(0x90)] public fixed byte _[0x8];
        [FieldOffset(0x98)] public fixed byte _[0x4];
        [FieldOffset(0x9c)] public fixed byte _[0x3c];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct CVMixSubgraphSwitchProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x38];
        [FieldOffset(0x60)] public fixed byte _[0x4];
        [FieldOffset(0x64)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct VMixDiffusorDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CVMixSteamAudioPathingProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
        [FieldOffset(0x30)] public fixed byte _[0x4];
        [FieldOffset(0x34)] public fixed byte _[0x4];
        [FieldOffset(0x38)] public fixed byte _[0x4];
        [FieldOffset(0x3c)] public fixed byte _[0x4];
        [FieldOffset(0x40)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CVMixPannerProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x8];
        [FieldOffset(0x30)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct VMixDynamicsCompressorDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x1];
        [FieldOffset(0x25)] public fixed byte _[0x3];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CVMixHeap {
        [FieldOffset(0x0)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x190)]
    public unsafe struct CVoiceContainerVMixSnd {
        [FieldOffset(0x0)] public fixed byte pad_0[0x188];
        [FieldOffset(0x188)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CVMixStereoDelayProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct VMixShaperDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CVMixDataOffset {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc)]
    public unsafe struct VMixEnvelopeDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xa0)]
    public unsafe struct CAudioSentence {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x18];
        [FieldOffset(0x20)] public fixed byte _[0x18];
        [FieldOffset(0x38)] public fixed byte _[0x68];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x1c8)]
    public unsafe struct CVoiceContainerParameterBlender {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte _[0x20];
        [FieldOffset(0x98)] public fixed byte _[0x20];
        [FieldOffset(0xb8)] public fixed byte _[0x8];
        [FieldOffset(0xc0)] public fixed byte _[0x40];
        [FieldOffset(0x100)] public fixed byte _[0x40];
        [FieldOffset(0x140)] public fixed byte _[0x8];
        [FieldOffset(0x148)] public fixed byte _[0x40];
        [FieldOffset(0x188)] public fixed byte _[0x40];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CVMixAudioMeter {
        [FieldOffset(0x0)] public fixed byte _[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CVMixVocoderProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x28];
        [FieldOffset(0x50)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CSosGroupActionLimitSchema {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x1];
        [FieldOffset(0x15)] public fixed byte _[0x3];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CVoiceContainerAmpedDecayingSineWave {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x2c)]
    public unsafe struct VMixAutoFilterDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x10];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
        [FieldOffset(0x28)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x24)]
    public unsafe struct VMixDynamicsBand_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x1];
        [FieldOffset(0x21)] public fixed byte _[0x3];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct VMixEffectChainDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CVMixPlateReverbProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x20];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xb8)]
    public unsafe struct CVoiceContainerMultiBlender {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte _[0x38];
        [FieldOffset(0xb0)] public fixed byte _[0x4];
        [FieldOffset(0xb4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CVMixVsndInput {
        [FieldOffset(0x0)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CVoiceContainerStaticAdditiveSynth__CGainScalePerInstance {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CVMixParameterEffectName {
        [FieldOffset(0x0)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x2)]
    public unsafe struct SndBeatTimeSignature_t {
        [FieldOffset(0x0)] public fixed byte _[0x1];
        [FieldOffset(0x1)] public fixed byte _[0x1];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct VelocityZone_t {
        [FieldOffset(0x0)] public fixed byte _[0x1];
        [FieldOffset(0x1)] public fixed byte _[0x1];
        [FieldOffset(0x2)] public fixed byte _[0x2];
        [FieldOffset(0x4)] public fixed byte _[0x10];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xf0)]
    public unsafe struct CVoiceContainerSelector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte _[0x8];
        [FieldOffset(0x80)] public fixed byte _[0x38];
        [FieldOffset(0xb8)] public fixed byte _[0x38];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct SndBeatEventKeyedSndEvts_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CVMixGraphInput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CSosGroupActionTimeBlockLimitSchema {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct SndBeatEventKeyedMidiNotes_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x1];
        [FieldOffset(0x11)] public fixed byte _[0x1];
        [FieldOffset(0x12)] public fixed byte _[0x6];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CSosGroupActionMemberCountEnvelopeSchema {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x8];
        [FieldOffset(0x28)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct CVMixDualCompressorProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x34];
        [FieldOffset(0x5c)] public fixed byte _[0x4];
        [FieldOffset(0x60)] public fixed byte _[0x4];
        [FieldOffset(0x64)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CVoiceContainerSwitch {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CVMixControlMeter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xb8)]
    public unsafe struct CVoiceContainerEnum {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte _[0x38];
        [FieldOffset(0xb0)] public fixed byte _[0x4];
        [FieldOffset(0xb4)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CSosGroupActionTimeLimitSchema {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct VMixVocoderDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct VMixUtilityDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xa8)]
    public unsafe struct CVoiceContainerLoopTrigger {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte _[0x4];
        [FieldOffset(0x7c)] public fixed byte _[0x4];
        [FieldOffset(0x80)] public fixed byte _[0x4];
        [FieldOffset(0x84)] public fixed byte _[0x4];
        [FieldOffset(0x88)] public fixed byte _[0x20];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct SndBeatEventKeys_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte _[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CVoiceContainerDecayingSineWave {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte _[0x4];
        [FieldOffset(0x7c)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CVMixDelayProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x28];
        [FieldOffset(0x50)] public fixed byte _[0x4];
        [FieldOffset(0x54)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CVMixBoxverb2ProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x50];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct VMixFilterDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x1];
        [FieldOffset(0xd)] public fixed byte _[0x1];
        [FieldOffset(0xe)] public fixed byte _[0x2];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xb8)]
    public unsafe struct CSndBeatPattern {
        [FieldOffset(0x0)] public fixed byte _[0xc];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x8];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
        [FieldOffset(0x30)] public fixed byte _[0x8];
        [FieldOffset(0x38)] public fixed byte _[0x18];
        [FieldOffset(0x50)] public fixed byte _[0x18];
        [FieldOffset(0x68)] public fixed byte _[0x18];
        [FieldOffset(0x80)] public fixed byte _[0x18];
        [FieldOffset(0x98)] public fixed byte _[0x4];
        [FieldOffset(0x9c)] public fixed byte _[0x4];
        [FieldOffset(0xa0)] public fixed byte _[0x18];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CSubmix {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0xc)]
    public unsafe struct VMixOscDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CVMixAutoFilterProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte _[0x30];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct ISndSeqInstruments {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x24)]
    public unsafe struct VMixFlangerDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x4];
    }

    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct VMixDynamicsDesc_t {
        [FieldOffset(0x0)] public fixed byte _[0x4];
        [FieldOffset(0x4)] public fixed byte _[0x4];
        [FieldOffset(0x8)] public fixed byte _[0x4];
        [FieldOffset(0xc)] public fixed byte _[0x4];
        [FieldOffset(0x10)] public fixed byte _[0x4];
        [FieldOffset(0x14)] public fixed byte _[0x4];
        [FieldOffset(0x18)] public fixed byte _[0x4];
        [FieldOffset(0x1c)] public fixed byte _[0x4];
        [FieldOffset(0x20)] public fixed byte _[0x4];
        [FieldOffset(0x24)] public fixed byte _[0x4];
        [FieldOffset(0x28)] public fixed byte _[0x4];
        [FieldOffset(0x2c)] public fixed byte _[0x4];
    }

}