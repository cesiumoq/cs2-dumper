/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Total Offsets   : 202
/*  Dumped At       : 22:50 04/11/2026 (GMT)
/*  Dumped In       : 1,7s
*/

/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

#pragma once
#include <cstddef>
#include <cstdint>

namespace cs2::soundsystem {

enum class VMixUpMixRule_t : std::int32_t {
    DIVIDE = 0,
    BROADCAST = 1,
};

enum class SndSeqInstrumentType_t : std::int32_t {
    eSndSeqInstNull = 0,
    eSndSeqInstSndEvt = 1,
    eSndSeqInstMidiSampler = 2,
};

enum class EMode_t : std::int32_t {
    Peak = 0,
    RMS = 1,
};

enum class SndBeatMidiStatusType_t : std::int32_t {
    SndSeqMidiStatusNoteOff = 8,
    SndSeqMidiStatusNoteOn = 9,
    SndSeqMidiStatusKeyPressure = 10,
    SndSeqMidiStatusCtrlChange = 11,
    SndSeqMidiStatusProgramChange = 12,
    SndSeqMidiStatusChannelPressure = 13,
    SndSeqMidiStatusPitchBend = 14,
};

enum class VMixGraphCommandID_t : std::int32_t {
    CMD_INVALID = 18446744073709551615,
    CMD_CONTROL_CONVERT_DB_TO_GAIN = 1,
    CMD_CONTROL_TRANSIENT_INPUT_STORE = 2,
    CMD_CONTROL_TRANSIENT_INPUT_RESET = 3,
    CMD_CONTROL_OUTPUT_STORE = 4,
    CMD_CONTROL_EVALUATE_CURVE = 5,
    CMD_CONTROL_COPY = 6,
    CMD_CONTROL_COND_COPY_IF_NEGATIVE = 7,
    CMD_CONTROL_REMAP_LINEAR = 8,
    CMD_CONTROL_REMAP_SINE = 9,
    CMD_CONTROL_REMAP_LOGLINEAR = 10,
    CMD_CONTROL_MAX = 11,
    CMD_CONTROL_RESET_TIMER = 12,
    CMD_CONTROL_INCREMENT_TIMER = 13,
    CMD_CONTROL_EVAL_ENVELOPE = 14,
    CMD_CONTROL_SINE_BLEND = 15,
    CMD_SUBMIX_PROCESS = 16,
    CMD_SUBMIX_GENERATE = 17,
    CMD_SUBMIX_GENERATE_SIDECHAIN = 18,
    CMD_SUBMIX_EXTRACTCONTAINER = 19,
    CMD_SUBMIX_DEBUG = 20,
    CMD_SUBMIX_MIX2x1 = 21,
    CMD_SUBMIX_OUTPUT = 22,
    CMD_SUBMIX_OUTPUTx2 = 23,
    CMD_SUBMIX_COPY = 24,
    CMD_SUBMIX_ACCUMULATE = 25,
    CMD_SUBMIX_METER = 26,
    CMD_SUBMIX_METER_SPECTRUM = 27,
    CMD_IMPULSERESPONSE_INPUT_STORE = 28,
    CMD_PROCESSOR_SET_IMPULSERESPONSE_VALUE = 29,
    CMD_REMAP_VSND_TO_IMPULSERESPONSE = 30,
    CMD_IMPULSERESPONSE_RESET = 31,
    CMD_BLEND_VSNDS_TO_IMPULSERESPONSE = 32,
    CMD_IMPULSERESPONSE_DELAY = 33,
};

enum class EWaveform : std::int32_t {
    Sine = 0,
    Square = 1,
    Saw = 2,
    Triangle = 3,
    Noise = 4,
};

enum class VMixFilterChannelSet_t : std::int32_t {
    FILTER_ALL_CHANNELS = 0,
    FILTER_LEFT_ONLY = 1,
    FILTER_RIGHT_ONLY = 2,
    FILTER_MID_ONLY = 3,
    FILTER_SIDE_ONLY = 4,
    FILTER_CHANNEL_SET_MAX = 5,
};

enum class VMixLFOShape_t : std::int32_t {
    LFO_SHAPE_SINE = 0,
    LFO_SHAPE_SQUARE = 1,
    LFO_SHAPE_TRI = 2,
    LFO_SHAPE_SAW = 3,
    LFO_SHAPE_NOISE = 4,
};

enum class VMixOffsetType_t : std::int32_t {
    VO_CHAR = 0,
    VO_ARRAY = 1,
    VO_BOOL = 2,
    VO_FLOAT = 3,
    VO_UINT32 = 4,
    VO_INT32 = 5,
    VO_VECTOR = 6,
    VO_QUATERNION = 7,
    VO_CUBIC_SPLINE = 8,
    VO_VSND_INPUT = 9,
    VO_FLOAT_UTLVECTOR = 10,
    VO_SHAREDPTR_IR = 11,
    VO_TYPE_COUNT = 12,
};

enum class VMixMixDownRule_t : std::int32_t {
    SUM = 0,
    LEFT = 1,
    RIGHT = 2,
    MID = 3,
    SIDE = 4,
};

enum class VMixFilterType_t : std::int32_t {
    FILTER_UNKNOWN = 18446744073709551615,
    FILTER_LOWPASS = 0,
    FILTER_HIGHPASS = 1,
    FILTER_BANDPASS = 2,
    FILTER_NOTCH = 3,
    FILTER_PEAKING_EQ = 4,
    FILTER_LOW_SHELF = 5,
    FILTER_HIGH_SHELF = 6,
    FILTER_ALLPASS = 7,
    FILTER_PASSTHROUGH = 8,
};

enum class SndBeatTrackPlaybackType_t : std::int32_t {
    eSndBeatTrackPlaybackTypeStep = 0,
    eSndBeatTrackPlaybackTypeFwd = 1,
};

enum class VMixSendOperator_t : std::int32_t {
    NO_VOICES = 18446744073709551615,
    ALL_VOICES = 0,
    ROOM_VOICES = 1,
    FACING_VOICES = 2,
    MIXGROUP_VOICES = 3,
    NAMED_SEND = 4,
    INVERSE_NAMED_SENDS = 5,
    INVERSE_TOTAL_SEND = 6,
    ALL_MAX_SEND = 7,
    TRACK = 8,
};

enum class SndBeatEventType_t : std::int32_t {
    eSndBeatEventTypeInvalid = 0,
    eSndBeatEventTypeBeat = 1,
    eSndBeatEventTypeBar = 2,
    eSndBeatEventTypePhrase = 3,
    eSndBeatEventTypeLength = 4,
    eSndBeatEventTypeKeys = 5,
};

enum class SosActionStopType_t : std::int32_t {
    SOS_STOPTYPE_NONE = 0,
    SOS_STOPTYPE_TIME = 1,
    SOS_STOPTYPE_OPVAR = 2,
};

enum class SndBeatKeyType_t : std::int32_t {
    eSndBeatPatternTypeNone = 0,
    eSndBeatPatternTypeKeys = 1,
    eSndBeatPatternTypeKeyedFloats = 2,
    eSndBeatPatternTypeKeyedSndEvts = 3,
    eSndBeatPatternTypeKeyedMidi = 4,
};

enum class SosEditItemType_t : std::int32_t {
    SOS_EDIT_ITEM_TYPE_SOUNDEVENTS = 0,
    SOS_EDIT_ITEM_TYPE_SOUNDEVENT = 1,
    SOS_EDIT_ITEM_TYPE_LIBRARYSTACKS = 2,
    SOS_EDIT_ITEM_TYPE_STACK = 3,
    SOS_EDIT_ITEM_TYPE_OPERATOR = 4,
    SOS_EDIT_ITEM_TYPE_FIELD = 5,
};

enum class SndBeatSyncType_t : std::int32_t {
    eSndBeatSyncTypeInvalid = 0,
    eSndBeatSyncTypeReset = 1,
    eSndBeatSyncTypeSeekImmediate = 2,
};

enum class PlayBackMode_t : std::int32_t {
    Random = 0,
    RandomNoRepeats = 1,
    RandomAvoidLast = 2,
    Sequential = 3,
    RandomWeights = 4,
};

enum class EVsndTriggerMode : std::int32_t {
    Trigger = 0,
    Gate = 1,
};

enum class SosGroupFieldBehavior_t : std::int32_t {
    kIgnore = 0,
    kBranch = 1,
    kMatch = 2,
};

enum class soundlevel_t : std::int32_t {
    SNDLVL_NONE = 0,
    SNDLVL_20dB = 20,
    SNDLVL_25dB = 25,
    SNDLVL_30dB = 30,
    SNDLVL_35dB = 35,
    SNDLVL_40dB = 40,
    SNDLVL_45dB = 45,
    SNDLVL_50dB = 50,
    SNDLVL_55dB = 55,
    SNDLVL_IDLE = 60,
    SNDLVL_60dB = 60,
    SNDLVL_65dB = 65,
    SNDLVL_STATIC = 66,
    SNDLVL_70dB = 70,
    SNDLVL_NORM = 75,
    SNDLVL_75dB = 75,
    SNDLVL_80dB = 80,
    SNDLVL_TALKING = 80,
    SNDLVL_85dB = 85,
    SNDLVL_90dB = 90,
    SNDLVL_95dB = 95,
    SNDLVL_100dB = 100,
    SNDLVL_105dB = 105,
    SNDLVL_110dB = 110,
    SNDLVL_120dB = 120,
    SNDLVL_130dB = 130,
    SNDLVL_GUNFIRE = 140,
    SNDLVL_140dB = 140,
    SNDLVL_150dB = 150,
    SNDLVL_180dB = 180,
};

enum class VMixPannerType_t : std::int32_t {
    PANNER_TYPE_LINEAR = 0,
    PANNER_TYPE_EQUAL_POWER = 1,
};

enum class VMixChannelOperation_t : std::int32_t {
    VMIX_CHAN_STEREO = 0,
    VMIX_CHAN_LEFT = 1,
    VMIX_CHAN_RIGHT = 2,
    VMIX_CHAN_SWAP = 3,
    VMIX_CHAN_MONO = 4,
    VMIX_CHAN_MID_SIDE = 5,
};

enum class EMidiNote : std::int32_t {
    C = 0,
    C_Sharp = 1,
    D = 2,
    D_Sharp = 3,
    E = 4,
    F = 5,
    F_Sharp = 6,
    G = 7,
    G_Sharp = 8,
    A = 9,
    A_Sharp = 10,
    B = 11,
    Count = 12,
};

enum class VMixAutoControlType_t : std::int32_t {
    VMIX_AUTO_SEND_LEVEL = 0,
    VMIX_AUTO_STACK_VAR = 1,
    VMIX_AUTO_PLAYTIME = 2,
    VMIX_AUTO_DISTANCE = 3,
    VMIX_AUTO_POSITION_X = 4,
    VMIX_AUTO_POSITION_Y = 5,
    VMIX_AUTO_POSITION_Z = 6,
    VMIX_AUTO_POSITION_VECTOR = 7,
    VMIX_AUTO_LISTENER_YAW_SIN = 8,
    VMIX_AUTO_LISTENER_YAW_COS = 9,
    VMIX_AUTO_LISTENER_PITCH_SIN = 10,
    VMIX_AUTO_LISTENER_PITCH_COS = 11,
    VMIX_AUTO_LISTENER_ROLL_SIN = 12,
    VMIX_AUTO_LISTENER_ROLL_COS = 13,
};

enum class CVSoundFormat_t : std::int32_t {
    PCM16 = 0,
    PCM8 = 1,
    MP3 = 2,
    ADPCM = 3,
};

enum class VMixFilterSlope_t : std::int32_t {
    FILTER_SLOPE_1POLE_6dB = 0,
    FILTER_SLOPE_1POLE_12dB = 1,
    FILTER_SLOPE_1POLE_18dB = 2,
    FILTER_SLOPE_1POLE_24dB = 3,
    FILTER_SLOPE_12dB = 4,
    FILTER_SLOPE_24dB = 5,
    FILTER_SLOPE_36dB = 6,
    FILTER_SLOPE_48dB = 7,
    FILTER_SLOPE_MAX = 7,
};

enum class SosActionLimitSortType_t : std::int32_t {
    SOS_LIMIT_SORTTYPE_HIGHEST = 0,
    SOS_LIMIT_SORTTYPE_LOWEST = 1,
};

enum class VMixSubgraphSwitchInterpolationType_t : std::int32_t {
    SUBGRAPH_INTERPOLATION_TEMPORAL_CROSSFADE = 0,
    SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT = 1,
    SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING = 2,
};

enum class SosGroupType_t : std::int32_t {
    SOS_GROUPTYPE_DYNAMIC = 0,
    SOS_GROUPTYPE_STATIC = 1,
};

enum class VMixOffsetCategory_t : std::int32_t {
    NULL_POINTER = 0,
    HEAP_OFFSET = 1,
    INPUT_INDEX = 2,
    SUBMIX_INDEX = 3,
};

enum class SndBeatSyncStartType_t : std::int32_t {
    eSndBeatSyncStartTypeInvalid = 0,
    eSndBeatSyncStartTypeImmediate = 1,
    eSndBeatSyncStartTypeQueue = 2,
};

enum class SosActionSetParamSortType_t : std::int32_t {
    SOS_SETPARAM_SORTTYPE_HIGHEST = 0,
    SOS_SETPARAM_SORTTYPE_LOWEST = 1,
};

enum class EVsndPlaybackMode : std::int32_t {
    Trigger = 0,
    Gate = 1,
};

struct CVMixInputBase {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_name[0x10]; // 0x0 CUtlString
};

struct CVoiceContainerBlender {
    static constexpr std::size_t size = 0xC0;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t m_firstSound[0x20]; // 0x78 CSoundContainerReference
    std::uint8_t m_secondSound[0x20]; // 0x98 CSoundContainerReference
    std::uint8_t m_flBlendFactor[0x8]; // 0xB8 float32
};

struct CVMixPitchShiftProcessorDesc {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_desc[0x10]; // 0x28 VMixPitchShiftDesc_t
    std::uint8_t m_paramPitchScale[0x8]; // 0x38 CVMixParameterFloat
};

struct VMixFreeverbDesc_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_flRoomSize[0x4]; // 0x0 float32
    std::uint8_t m_flDamp[0x4]; // 0x4 float32
    std::uint8_t m_flWidth[0x4]; // 0x8 float32
    std::uint8_t m_flLateReflections[0x4]; // 0xC float32
};

struct CVoiceContainerStaticAdditiveSynth__CHarmonic {
    static constexpr std::size_t size = 0x68;
    std::uint8_t m_nWaveform[0x1]; // 0x0 EWaveform
    std::uint8_t m_nFundamental[0x3]; // 0x1 EMidiNote
    std::uint8_t m_nOctave[0x4]; // 0x4 int32
    std::uint8_t m_flCents[0x4]; // 0x8 float32
    std::uint8_t m_flPhase[0x4]; // 0xC float32
    std::uint8_t m_curve[0x40]; // 0x10 CPiecewiseCurve
    std::uint8_t m_volumeScaling[0x18]; // 0x50 CVoiceContainerStaticAdditiveSynth::CGainScalePerInstance
};

struct CVsndTriggerSlot {
    static constexpr std::size_t size = 0x88;
    std::uint8_t m_bEnableVsnd[0x8]; // 0x0 bool
    std::uint8_t m_vsnd[0x20]; // 0x8 CSoundContainerReference
    std::uint8_t m_bEnableEndcap[0x8]; // 0x28 bool
    std::uint8_t m_endcapVsnd[0x20]; // 0x30 CSoundContainerReference
    std::uint8_t m_bEnableLoopcap[0x8]; // 0x50 bool
    std::uint8_t m_loopcapVsnd[0x20]; // 0x58 CSoundContainerReference
    std::uint8_t m_volume[0x4]; // 0x78 float32
    std::uint8_t m_fadeOut[0x4]; // 0x7C float32
    std::uint8_t m_mode[0x8]; // 0x80 EVsndTriggerMode
};

struct CVoiceContainerStaticAdditiveSynth__CTone {
    static constexpr std::size_t size = 0x60;
    std::uint8_t m_harmonics[0x18]; // 0x0 CUtlVector<CVoiceContainerStaticAdditiveSynth::CHarmonic>
    std::uint8_t m_curve[0x40]; // 0x18 CPiecewiseCurve
    std::uint8_t m_bSyncInstances[0x8]; // 0x58 bool
};

struct CSosGroupActionOcclusionSchema {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_flCalculationInterval[0x4]; // 0x8 float32
    std::uint8_t m_flRadius[0x4]; // 0xC float32
    std::uint8_t m_flOcclusionScale[0x4]; // 0x10 float32
    std::uint8_t m_flOcclusionMin[0x4]; // 0x14 float32
    std::uint8_t m_flOcclusionMax[0x4]; // 0x18 float32
    std::uint8_t m_flTestDepth[0x4]; // 0x1C float32
};

struct CVoiceContainerRandomSampler {
    static constexpr std::size_t size = 0x1B0;
    std::uint8_t pad_0[0x88]; // 0x0
    std::uint8_t m_flAmplitude[0x4]; // 0x88 float32
    std::uint8_t m_flAmplitudeJitter[0x4]; // 0x8C float32
    std::uint8_t m_flTimeJitter[0x4]; // 0x90 float32
    std::uint8_t m_flMaxLength[0x4]; // 0x94 float32
    std::uint8_t m_nNumDelayVariations[0x8]; // 0x98 int32
    std::uint8_t m_grainResources[0x110]; // 0xA0 CUtlVector<CStrongHandle<InfoForResourceTypeCVoiceContainerBase>>
};

struct CVMixSteamAudioDirectProcessorDesc {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_paramPositionX[0x4]; // 0x28 CVMixParameterFloat
    std::uint8_t m_paramPositionY[0x4]; // 0x2C CVMixParameterFloat
    std::uint8_t m_paramPositionZ[0x4]; // 0x30 CVMixParameterFloat
    std::uint8_t m_paramRightX[0x4]; // 0x34 CVMixParameterFloat
    std::uint8_t m_paramRightY[0x4]; // 0x38 CVMixParameterFloat
    std::uint8_t m_paramRightZ[0x4]; // 0x3C CVMixParameterFloat
    std::uint8_t m_paramUpX[0x4]; // 0x40 CVMixParameterFloat
    std::uint8_t m_paramUpY[0x4]; // 0x44 CVMixParameterFloat
    std::uint8_t m_paramUpZ[0x4]; // 0x48 CVMixParameterFloat
    std::uint8_t m_paramAheadX[0x4]; // 0x4C CVMixParameterFloat
    std::uint8_t m_paramAheadY[0x4]; // 0x50 CVMixParameterFloat
    std::uint8_t m_paramAheadZ[0x4]; // 0x54 CVMixParameterFloat
    std::uint8_t m_paramApplyDistanceAttenuation[0x4]; // 0x58 CVMixParameterFloat
    std::uint8_t m_paramApplyAirAbsorption[0x4]; // 0x5C CVMixParameterFloat
    std::uint8_t m_paramApplyDirectivity[0x4]; // 0x60 CVMixParameterFloat
    std::uint8_t m_paramApplyOcclusion[0x4]; // 0x64 CVMixParameterFloat
    std::uint8_t m_paramApplyTransmission[0x4]; // 0x68 CVMixParameterFloat
    std::uint8_t m_paramDipoleWeight[0x4]; // 0x6C CVMixParameterFloat
    std::uint8_t m_paramDipolePower[0x4]; // 0x70 CVMixParameterFloat
    std::uint8_t m_paramOcclusion[0x4]; // 0x74 CVMixParameterFloat
    std::uint8_t m_paramTransmissionLow[0x4]; // 0x78 CVMixParameterFloat
    std::uint8_t m_paramTransmissionMid[0x4]; // 0x7C CVMixParameterFloat
    std::uint8_t m_paramTransmissionHigh[0x4]; // 0x80 CVMixParameterFloat
    std::uint8_t m_paramBand[0x4]; // 0x84 CVMixParameterFloat
    std::uint8_t m_paramTransmission[0x8]; // 0x88 CVMixDataOffset
};

struct CVMixSteamAudioHRTFProcessorDesc {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_paramPositionX[0x4]; // 0x28 CVMixParameterFloat
    std::uint8_t m_paramPositionY[0x4]; // 0x2C CVMixParameterFloat
    std::uint8_t m_paramPositionZ[0x4]; // 0x30 CVMixParameterFloat
    std::uint8_t m_paramInterpolation[0x4]; // 0x34 CVMixParameterFloat
    std::uint8_t m_paramDirectMixLevel[0x4]; // 0x38 CVMixParameterFloat
    std::uint8_t m_paramPerspectiveCorrection[0x4]; // 0x3C CVMixParameterFloat
    std::uint8_t m_paramRelativePosition[0x4]; // 0x40 CVMixParameterFloat
    std::uint8_t m_paramDelayLeft[0x4]; // 0x44 CVMixParameterFloat
    std::uint8_t m_paramDelayRight[0x8]; // 0x48 CVMixParameterFloat
};

struct CVoiceContainerDefault {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x78]; // 0x0
};

struct CVSound {
    static constexpr std::size_t size = 0x40;
    std::uint8_t m_Sentences[0x10]; // 0x0 CUtlLeanVector<CAudioSentence>
    std::uint8_t m_nRate[0x4]; // 0x10 int32
    std::uint8_t m_nFormat[0x4]; // 0x14 CVSoundFormat_t
    std::uint8_t m_nChannels[0x4]; // 0x18 uint32
    std::uint8_t m_nLoopStart[0x4]; // 0x1C int32
    std::uint8_t m_nSampleCount[0x4]; // 0x20 uint32
    std::uint8_t m_flDuration[0x4]; // 0x24 float32
    std::uint8_t m_nStreamingSize[0x4]; // 0x28 uint32
    std::uint8_t m_nLoopEnd[0x14]; // 0x2C int32
};

struct CDSPPresetMixgroupModifierTable {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_table[0x18]; // 0x0 CUtlVector<CDspPresetModifierList>
};

struct CSosGroupActionSoundeventClusterSchema {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_nMinNearby[0x4]; // 0x8 int32
    std::uint8_t m_flClusterEpsilon[0x4]; // 0xC float32
    std::uint8_t m_shouldPlayOpvar[0x8]; // 0x10 CUtlString
    std::uint8_t m_shouldPlayClusterChild[0x8]; // 0x18 CUtlString
    std::uint8_t m_clusterSizeOpvar[0x8]; // 0x20 CUtlString
    std::uint8_t m_groupBoundingBoxMinsOpvar[0x8]; // 0x28 CUtlString
    std::uint8_t m_groupBoundingBoxMaxsOpvar[0x20]; // 0x30 CUtlString
};

struct CSosGroupActionSetSoundeventParameterSchema {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_nMaxCount[0x4]; // 0x8 int32
    std::uint8_t m_flMinValue[0x4]; // 0xC float32
    std::uint8_t m_flMaxValue[0x8]; // 0x10 float32
    std::uint8_t m_opvarName[0x8]; // 0x18 CUtlString
    std::uint8_t m_nSortType[0x8]; // 0x20 SosActionSetParamSortType_t
};

struct CSoundContainerReference {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_namespace[0x8]; // 0x0 CUtlString
    std::uint8_t m_bUseReference[0x8]; // 0x8 bool
    std::uint8_t m_sound[0x8]; // 0x10 CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
    std::uint8_t m_pSound[0x8]; // 0x18 CVoiceContainerBase*
};

struct CVoiceContainerNull {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x78]; // 0x0
};

struct VMixSubgraphSwitchDesc_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t m_name[0x8]; // 0x0 CUtlString
    std::uint8_t m_effectName[0x8]; // 0x8 CUtlString
    std::uint8_t m_subgraphs[0x18]; // 0x10 CUtlVector<CUtlString>
    std::uint8_t m_interpolationMode[0x4]; // 0x28 VMixSubgraphSwitchInterpolationType_t
    std::uint8_t m_bOnlyTailsOnFadeOut[0x4]; // 0x2C bool
    std::uint8_t m_flInterpolationTime[0x8]; // 0x30 float32
};

struct CVoiceContainerAnalysisBase {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_curve[0x40]; // 0x8 CPiecewiseCurve
};

struct CSosGroupActionSoundeventMinMaxValuesSchema {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_strQueryPublicFieldName[0x8]; // 0x8 CUtlString
    std::uint8_t m_strDelayPublicFieldName[0x8]; // 0x10 CUtlString
    std::uint8_t m_bExcludeStoppedSounds[0x1]; // 0x18 bool
    std::uint8_t m_bExcludeDelayedSounds[0x1]; // 0x19 bool
    std::uint8_t m_bExcludeSoundsBelowThreshold[0x2]; // 0x1A bool
    std::uint8_t m_flExcludeSoundsMinThresholdValue[0x4]; // 0x1C float32
    std::uint8_t m_bExcludSoundsAboveThreshold[0x4]; // 0x20 bool
    std::uint8_t m_flExcludeSoundsMaxThresholdValue[0x4]; // 0x24 float32
    std::uint8_t m_strMinValueName[0x8]; // 0x28 CUtlString
    std::uint8_t m_strMaxValueName[0x10]; // 0x30 CUtlString
};

struct CVMixEnvelopeProcessorDesc {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_desc[0xC]; // 0x28 VMixEnvelopeDesc_t
    std::uint8_t m_outParamLevel[0x4]; // 0x34 CVMixParameterFloat
    std::uint8_t m_outParamdBLevel[0x8]; // 0x38 CVMixParameterFloat
};

struct CVMixCommand {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_nCommand[0x4]; // 0x0 VMixGraphCommandID_t
    std::uint8_t m_nParameterNameHash[0x4]; // 0x4 uint32
    std::uint8_t m_nOutputSubmix[0x4]; // 0x8 CVMixDataOffset
    std::uint8_t m_nInputSubmix0[0x4]; // 0xC CVMixDataOffset
    std::uint8_t m_nInputSubmix1[0x4]; // 0x10 CVMixDataOffset
    std::uint8_t m_nProcessor[0x4]; // 0x14 int32
    std::uint8_t m_nInputValue0[0x4]; // 0x18 CVMixDataOffset
    std::uint8_t m_nInputValue1[0x4]; // 0x1C CVMixDataOffset
};

struct SamplerVoice_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t nNoteNum[0x8]; // 0x0 uint8
};

struct CVMixControlInput {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_flDefaultValue[0x8]; // 0x10 float32
};

struct CVMixBoxverbProcessorDesc {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_desc[0x50]; // 0x28 VMixBoxverbDesc_t
};

struct CVMixDynamicsCompressorProcessorDesc {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_desc[0x28]; // 0x28 VMixDynamicsCompressorDesc_t
    std::uint8_t m_outParamLevel[0x4]; // 0x50 CVMixParameterFloat
    std::uint8_t m_outParamdBLevel[0x4]; // 0x54 CVMixParameterFloat
    std::uint8_t m_outParamReduction[0x8]; // 0x58 CVMixParameterFloat
};

struct VMixPannerDesc_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_type[0x4]; // 0x0 VMixPannerType_t
    std::uint8_t m_flStrength[0x4]; // 0x4 float32
};

struct CSosGroupActionSoundeventPrioritySchema {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_priorityValue[0x8]; // 0x8 CUtlString
    std::uint8_t m_priorityVolumeScalar[0x8]; // 0x10 CUtlString
    std::uint8_t m_priorityContributeButDontRead[0x8]; // 0x18 CUtlString
    std::uint8_t m_bPriorityReadButDontContribute[0x18]; // 0x20 CUtlString
};

struct CVoiceContainerRealtimeFMSineWave {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t m_flCarrierFrequency[0x4]; // 0x78 float32
    std::uint8_t m_flModulatorFrequency[0x4]; // 0x7C float32
    std::uint8_t m_flModulatorAmount[0x8]; // 0x80 float32
};

struct SelectedEditItemInfo_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_EditItems[0x18]; // 0x0 CUtlVector<SosEditItemInfo_t>
};

struct VMixModDelayDesc_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_feedbackFilter[0x10]; // 0x0 VMixFilterDesc_t
    std::uint8_t m_bPhaseInvert[0x4]; // 0x10 bool
    std::uint8_t m_flGlideTime[0x4]; // 0x14 float32
    std::uint8_t m_flDelay[0x4]; // 0x18 float32
    std::uint8_t m_flOutputGain[0x4]; // 0x1C float32
    std::uint8_t m_flFeedbackGain[0x4]; // 0x20 float32
    std::uint8_t m_flModRate[0x4]; // 0x24 float32
    std::uint8_t m_flModDepth[0x4]; // 0x28 float32
    std::uint8_t m_bApplyAntialiasing[0x4]; // 0x2C bool
};

struct CSndSeqInstSndEvtSchema {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x20]; // 0x0
};

struct CVMixNameInputMeter {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nValueIndex[0x8]; // 0x10 CVMixDataOffset
};

struct CSndSeqInstruments {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x28]; // 0x0
};

struct CVMixDynamics3BandProcessorDesc {
    static constexpr std::size_t size = 0xB8;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_desc[0x90]; // 0x28 VMixDynamics3BandDesc_t
};

struct VMixBoxverbDesc_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t m_flSizeMax[0x4]; // 0x0 float32
    std::uint8_t m_flSizeMin[0x4]; // 0x4 float32
    std::uint8_t m_flComplexity[0x4]; // 0x8 float32
    std::uint8_t m_flDiffusion[0x4]; // 0xC float32
    std::uint8_t m_flModDepth[0x4]; // 0x10 float32
    std::uint8_t m_flModRate[0x4]; // 0x14 float32
    std::uint8_t m_bParallel[0x4]; // 0x18 bool
    std::uint8_t m_filterType[0x10]; // 0x1C VMixFilterDesc_t
    std::uint8_t m_flWidth[0x4]; // 0x2C float32
    std::uint8_t m_flHeight[0x4]; // 0x30 float32
    std::uint8_t m_flDepth[0x4]; // 0x34 float32
    std::uint8_t m_flFeedbackScale[0x4]; // 0x38 float32
    std::uint8_t m_flFeedbackWidth[0x4]; // 0x3C float32
    std::uint8_t m_flFeedbackHeight[0x4]; // 0x40 float32
    std::uint8_t m_flFeedbackDepth[0x4]; // 0x44 float32
    std::uint8_t m_flOutputGain[0x4]; // 0x48 float32
    std::uint8_t m_flTaps[0x4]; // 0x4C float32
};

struct CSosGroupActionSchema {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct CSosSoundEventGroupSchema {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_nGroupType[0x4]; // 0x8 SosGroupType_t
    std::uint8_t m_bBlocksEvents[0x4]; // 0xC bool
    std::uint8_t m_nBlockMaxCount[0x4]; // 0x10 int32
    std::uint8_t m_flMemberLifespanTime[0x4]; // 0x14 float32
    std::uint8_t m_bInvertMatch[0x4]; // 0x18 bool
    std::uint8_t m_Behavior_EventName[0x4]; // 0x1C SosGroupFieldBehavior_t
    std::uint8_t m_matchSoundEventName[0x8]; // 0x20 CUtlString
    std::uint8_t m_bMatchEventSubString[0x8]; // 0x28 bool
    std::uint8_t m_matchSoundEventSubString[0x8]; // 0x30 CUtlString
    std::uint8_t m_Behavior_EntIndex[0x4]; // 0x38 SosGroupFieldBehavior_t
    std::uint8_t m_flEntIndex[0x4]; // 0x3C float32
    std::uint8_t m_Behavior_Opvar[0x4]; // 0x40 SosGroupFieldBehavior_t
    std::uint8_t m_flOpvar[0x4]; // 0x44 float32
    std::uint8_t m_Behavior_String[0x8]; // 0x48 SosGroupFieldBehavior_t
    std::uint8_t m_opvarString[0x8]; // 0x50 CUtlString
    std::uint8_t m_vActions[0x18]; // 0x58 CUtlVector<CSosGroupActionSchema*>
};

struct CSndSeqInstMidiSampler {
    static constexpr std::size_t size = 0xE0;
    std::uint8_t pad_0[0x20]; // 0x0
    std::uint8_t m_bIsSoundEvent[0x1]; // 0x20 bool
    std::uint8_t m_bStopPrevious[0x1]; // 0x21 bool
    std::uint8_t m_nMinNote[0x1]; // 0x22 uint8
    std::uint8_t m_nMaxNote[0x1]; // 0x23 uint8
    std::uint8_t m_flMinVelocityAtten[0x4]; // 0x24 float32
    std::uint8_t m_flMaxVelocityAtten[0x4]; // 0x28 float32
    std::uint8_t m_flAttack[0x4]; // 0x2C float32
    std::uint8_t m_flRelease[0x4]; // 0x30 float32
    std::uint8_t m_bBeatEnvelopes[0xA0]; // 0x34 bool
    std::uint8_t m_nNextVoiceSlot[0x4]; // 0xD4 uint8
    std::uint8_t m_hSoundEventHash[0x8]; // 0xD8 uint32
};

struct VMixPointerFixupEntry_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_nIndex[0x4]; // 0x0 uint32
    std::uint8_t m_offset[0x4]; // 0x4 CVMixDataOffset
};

struct CSndSeqInstBaseSchema {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_nType[0x6]; // 0x8 SndSeqInstrumentType_t
    std::uint8_t m_bStopCurrentEvents[0x2]; // 0xE bool
    std::uint8_t m_flBPM[0x4]; // 0x10 float32
    std::uint8_t m_flBPMFactor[0x4]; // 0x14 float32
    std::uint8_t m_flBPMInvFactor[0x8]; // 0x18 float32
};

struct VMixDynamics3BandDesc_t {
    static constexpr std::size_t size = 0x90;
    std::uint8_t m_fldbGainOutput[0x4]; // 0x0 float32
    std::uint8_t m_flRMSTimeMS[0x4]; // 0x4 float32
    std::uint8_t m_fldbKneeWidth[0x4]; // 0x8 float32
    std::uint8_t m_flDepth[0x4]; // 0xC float32
    std::uint8_t m_flWetMix[0x4]; // 0x10 float32
    std::uint8_t m_flTimeScale[0x4]; // 0x14 float32
    std::uint8_t m_flLowCutoffFreq[0x4]; // 0x18 float32
    std::uint8_t m_flHighCutoffFreq[0x4]; // 0x1C float32
    std::uint8_t m_bPeakMode[0x4]; // 0x20 bool
    std::uint8_t m_bandDesc[0x6C]; // 0x24 VMixDynamicsBand_t[3]
};

struct CVMixEQ8ProcessorDesc {
    static constexpr std::size_t size = 0xD0;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_desc[0xA0]; // 0x28 VMixEQ8Desc_t
    std::uint8_t m_paramEQScale[0x8]; // 0xC8 CVMixParameterFloat
};

struct CDSPMixgroupModifier {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_mixgroup[0x8]; // 0x0 CUtlString
    std::uint8_t m_flModifier[0x4]; // 0x8 float32
    std::uint8_t m_flModifierMin[0x4]; // 0xC float32
    std::uint8_t m_flSourceModifier[0x4]; // 0x10 float32
    std::uint8_t m_flSourceModifierMin[0x4]; // 0x14 float32
    std::uint8_t m_flListenerReverbModifierWhenSourceReverbIsActive[0x8]; // 0x18 float32
};

struct CAudioMorphData {
    static constexpr std::size_t size = 0x68;
    std::uint8_t m_times[0x18]; // 0x0 CUtlVector<float32>
    std::uint8_t m_nameHashCodes[0x18]; // 0x18 CUtlVector<uint32>
    std::uint8_t m_nameStrings[0x18]; // 0x30 CUtlVector<CUtlString>
    std::uint8_t m_samples[0x18]; // 0x48 CUtlVector<CUtlVector<float32>>
    std::uint8_t m_flEaseIn[0x4]; // 0x60 float32
    std::uint8_t m_flEaseOut[0x4]; // 0x64 float32
};

struct SndBeatEventKeyedFloats_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_flFloat[0x8]; // 0x10 float32
};

struct VMixDualCompressorDesc_t {
    static constexpr std::size_t size = 0x34;
    std::uint8_t m_flRMSTimeMS[0x4]; // 0x0 float32
    std::uint8_t m_fldbKneeWidth[0x4]; // 0x4 float32
    std::uint8_t m_flWetMix[0x4]; // 0x8 float32
    std::uint8_t m_bPeakMode[0x4]; // 0xC bool
    std::uint8_t m_bandDesc[0x24]; // 0x10 VMixDynamicsBand_t
};

struct CVMixRuntimeGraph {
    static constexpr std::size_t size = 0x128;
    std::uint8_t pad_0[0xD0]; // 0x0
    std::uint8_t m_submixes[0x10]; // 0xD0 CUtlLeanVector<CVMixSubmix>
    std::uint8_t m_impulseResponseValues[0x10]; // 0xE0 CUtlLeanVector<uint64>
    std::uint8_t m_inputDefaultValues[0x10]; // 0xF0 KeyValues3
    std::uint8_t m_sources[0x10]; // 0x100 KeyValues3
    std::uint8_t m_fixups[0x18]; // 0x110 CUtlVector<VMixPointerFixupEntry_t>
};

struct CVoiceContainerStaticAdditiveSynth {
    static constexpr std::size_t size = 0xB8;
    std::uint8_t pad_0[0x88]; // 0x0
    std::uint8_t m_tones[0x30]; // 0x88 CUtlVector<CVoiceContainerStaticAdditiveSynth::CTone>
};

struct CVoiceContainerShapedNoise {
    static constexpr std::size_t size = 0x150;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t m_bUseCurveForFrequency[0x4]; // 0x78 bool
    std::uint8_t m_flFrequency[0x4]; // 0x7C float32
    std::uint8_t m_frequencySweep[0x40]; // 0x80 CPiecewiseCurve
    std::uint8_t m_bUseCurveForResonance[0x4]; // 0xC0 bool
    std::uint8_t m_flResonance[0x4]; // 0xC4 float32
    std::uint8_t m_resonanceSweep[0x40]; // 0xC8 CPiecewiseCurve
    std::uint8_t m_bUseCurveForAmplitude[0x4]; // 0x108 bool
    std::uint8_t m_flGainInDecibels[0x4]; // 0x10C float32
    std::uint8_t m_gainSweep[0x40]; // 0x110 CPiecewiseCurve
};

struct CDspPresetModifierList {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_dspName[0x8]; // 0x0 CUtlString
    std::uint8_t m_modifiers[0x18]; // 0x8 CUtlVector<CDSPMixgroupModifier>
};

struct CVoiceContainerBase {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_bRegisteredVMix[0x4]; // 0x10 bool
    std::uint8_t m_nResourceName[0x1C]; // 0x14 CUtlStringToken
    std::uint8_t m_vSound[0x40]; // 0x30 CVSound
    std::uint8_t m_pEnvelopeAnalyzer[0x8]; // 0x70 CVoiceContainerAnalysisBase*
};

struct CVMixDiffusorProcessorDesc {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_desc[0x10]; // 0x28 VMixDiffusorDesc_t
};

struct CVMixUtilityProcessorDesc {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_desc[0x18]; // 0x28 VMixUtilityDesc_t
};

struct CRandomPannerControls {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_panningControlInputName[0x8]; // 0x0 CUtlString
    std::uint8_t m_volumeControlInputName[0x8]; // 0x8 CUtlString
    std::uint8_t m_flMinVolume[0x4]; // 0x10 float32
    std::uint8_t m_flMaxVolume[0x4]; // 0x14 float32
    std::uint8_t m_strVectorStackParam[0x8]; // 0x18 CUtlString
};

struct CVoiceContainerGranulator {
    static constexpr std::size_t size = 0x178;
    std::uint8_t pad_0[0x88]; // 0x0
    std::uint8_t m_flGrainLength[0x4]; // 0x88 float32
    std::uint8_t m_flGrainCrossfadeAmount[0x4]; // 0x8C float32
    std::uint8_t m_flStartJitter[0x4]; // 0x90 float32
    std::uint8_t m_flPlaybackJitter[0x4]; // 0x94 float32
    std::uint8_t m_bShouldWraparound[0x8]; // 0x98 bool
    std::uint8_t m_sourceAudio[0x8]; // 0xA0 CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
    std::uint8_t m_bDoubleBufferSourceAudio[0x4]; // 0xA8 bool
    std::uint8_t m_flMaxSourceLength[0xCC]; // 0xAC float32
};

struct CVMixPresetDSPProcessorDesc {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_desc[0x10]; // 0x28 VMixPresetDSPDesc_t
    std::uint8_t m_paramEffectName[0x8]; // 0x38 CVMixParameterEffectName
};

struct VMixDelayDesc_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_feedbackFilter[0x10]; // 0x0 VMixFilterDesc_t
    std::uint8_t m_bEnableFilter[0x4]; // 0x10 bool
    std::uint8_t m_flDelay[0x4]; // 0x14 float32
    std::uint8_t m_flDirectGain[0x4]; // 0x18 float32
    std::uint8_t m_flDelayGain[0x4]; // 0x1C float32
    std::uint8_t m_flFeedbackGain[0x4]; // 0x20 float32
    std::uint8_t m_flWidth[0x4]; // 0x24 float32
};

struct VMixEQ8Desc_t {
    static constexpr std::size_t size = 0xA0;
    std::uint8_t m_stages[0xA0]; // 0x0 VMixEQFilterDesc_t[8]
};

struct CVMixDynamicsProcessorDesc {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_desc[0x30]; // 0x28 VMixDynamicsDesc_t
    std::uint8_t m_outParamLevel[0x4]; // 0x58 CVMixParameterFloat
    std::uint8_t m_outParamdBLevel[0x4]; // 0x5C CVMixParameterFloat
};

struct VMixEQFilterDesc_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nChannelSet[0x4]; // 0x10 VMixFilterChannelSet_t
};

struct CVoiceContainerLoopXFade {
    static constexpr std::size_t size = 0xB0;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t m_sound[0x20]; // 0x78 CSoundContainerReference
    std::uint8_t m_flLoopEnd[0x4]; // 0x98 float32
    std::uint8_t m_flLoopStart[0x4]; // 0x9C float32
    std::uint8_t m_flFadeOut[0x4]; // 0xA0 float32
    std::uint8_t m_flFadeIn[0x4]; // 0xA4 float32
    std::uint8_t m_bPlayHead[0x1]; // 0xA8 bool
    std::uint8_t m_bPlayTail[0x1]; // 0xA9 bool
    std::uint8_t m_bEqualPow[0x6]; // 0xAA bool
};

struct VMixPresetDSPDesc_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_effectName[0x10]; // 0x0 CUtlString
};

struct CAudioPhonemeTag {
    static constexpr std::size_t size = 0xC;
    std::uint8_t m_flStartTime[0x4]; // 0x0 float32
    std::uint8_t m_flEndTime[0x4]; // 0x4 float32
    std::uint8_t m_nPhonemeCode[0x4]; // 0x8 int32
};

struct CVsndRadioButtonSlot {
    static constexpr std::size_t size = 0x88;
    std::uint8_t m_bEnableVsnd[0x8]; // 0x0 bool
    std::uint8_t m_vsnd[0x20]; // 0x8 CSoundContainerReference
    std::uint8_t m_bEnableEndcap[0x8]; // 0x28 bool
    std::uint8_t m_endcapVsnd[0x20]; // 0x30 CSoundContainerReference
    std::uint8_t m_bEnableLoopcap[0x8]; // 0x50 bool
    std::uint8_t m_loopcapVsnd[0x20]; // 0x58 CSoundContainerReference
    std::uint8_t m_group[0x4]; // 0x78 int32
    std::uint8_t m_volume[0x4]; // 0x7C float32
    std::uint8_t m_fadeOut[0x4]; // 0x80 float32
    std::uint8_t m_mode[0x4]; // 0x84 EVsndPlaybackMode
};

struct CSosGroupActionSoundeventCountSchema {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_bExcludeStoppedSounds[0x8]; // 0x8 bool
    std::uint8_t m_strCountKeyName[0x8]; // 0x10 CUtlString
};

struct CVoiceContainerEnvelopeAnalyzer {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t m_mode[0x4]; // 0x48 EMode_t
    std::uint8_t m_fAnalysisWindowMs[0x4]; // 0x4C float32
    std::uint8_t m_flThreshold[0x8]; // 0x50 float32
};

struct CVMixBaseProcessorDesc {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_name[0x8]; // 0x8 CUtlString
    std::uint8_t m_nDebugId[0x4]; // 0x10 uint32
    std::uint8_t m_flxfade[0x4]; // 0x14 float32
    std::uint8_t m_nChannels[0x4]; // 0x18 int32
    std::uint8_t m_bDebugBypass[0x4]; // 0x1C bool
    std::uint8_t m_paramEnable[0x4]; // 0x20 CVMixParameterFloat
    std::uint8_t m_paramMix[0x4]; // 0x24 CVMixParameterFloat
};

struct CVMixImpulseResponseInput {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct CVMixSteamAudioHybridReverbProcessorDesc {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_paramReverbTimeLow[0x4]; // 0x28 CVMixParameterFloat
    std::uint8_t m_paramReverbTimeMid[0x4]; // 0x2C CVMixParameterFloat
    std::uint8_t m_paramReverbTimeHigh[0x4]; // 0x30 CVMixParameterFloat
    std::uint8_t m_paramBand[0x4]; // 0x34 CVMixParameterFloat
    std::uint8_t m_paramReverbTime[0x8]; // 0x38 CVMixDataOffset
};

struct VMixPitchShiftDesc_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_nGrainSampleCount[0x4]; // 0x0 int32
    std::uint8_t m_flPitchShift[0x4]; // 0x4 float32
    std::uint8_t m_nQuality[0x4]; // 0x8 int32
    std::uint8_t m_nProcType[0x4]; // 0xC int32
};

struct CVMixControlOutput {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_flDefaultValue[0x8]; // 0x10 float32
};

struct CVMixModDelayProcessorDesc {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_desc[0x30]; // 0x28 VMixModDelayDesc_t
    std::uint8_t m_paramCutoffFrequency[0x4]; // 0x58 CVMixParameterFloat
    std::uint8_t m_paramDelay[0x4]; // 0x5C CVMixParameterFloat
    std::uint8_t m_paramModRate[0x4]; // 0x60 CVMixParameterFloat
    std::uint8_t m_paramModDepth[0x4]; // 0x64 CVMixParameterFloat
};

struct CVMixShaperProcessorDesc {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_desc[0x14]; // 0x28 VMixShaperDesc_t
    std::uint8_t m_paramDrive[0x4]; // 0x3C CVMixParameterFloat
};

struct CVMixParameterFloat {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_offset[0x4]; // 0x0 CVMixDataOffset
};

struct CVMixBaseGraphDescription {
    static constexpr std::size_t size = 0xD0;
    std::uint8_t m_name[0x8]; // 0x0 CUtlString
    std::uint8_t m_nGraphOutputChannels[0x4]; // 0x8 int32
    std::uint8_t m_bIsMainGraph[0x4]; // 0xC bool
    std::uint8_t m_processorNodes[0x10]; // 0x10 CUtlLeanVector<std::unique_ptr<CVMixBaseProcessorDesc>>
    std::uint8_t m_graphInputs[0x10]; // 0x20 CUtlLeanVector<CVMixGraphInput>
    std::uint8_t m_controlTransientInputs[0x10]; // 0x30 CUtlLeanVector<CVMixControlInput>
    std::uint8_t m_controlOutputs[0x10]; // 0x40 CUtlLeanVector<CVMixControlOutput>
    std::uint8_t m_impulseResponseInputs[0x10]; // 0x50 CUtlLeanVector<CVMixImpulseResponseInput>
    std::uint8_t m_mixCommands[0x10]; // 0x60 CUtlLeanVector<CVMixCommand>
    std::uint8_t m_heap[0x10]; // 0x70 CVMixHeap
    std::uint8_t m_audioMeters[0x10]; // 0x80 CUtlLeanVector<CVMixAudioMeter>
    std::uint8_t m_controlMeters[0x10]; // 0x90 CUtlLeanVector<CVMixControlMeter>
    std::uint8_t m_nameInputMeters[0x10]; // 0xA0 CUtlLeanVector<CVMixNameInputMeter>
    std::uint8_t m_additionalOutputs[0x10]; // 0xB0 CUtlLeanVector<CVMixAdditionalOutput>
    std::uint8_t m_automaticControlInputs[0x10]; // 0xC0 CUtlLeanVector<CVMixAutomaticControlInput>
};

struct CVMixAutomaticControlInput {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_name[0xC]; // 0x0 CUtlString
    std::uint8_t m_nGraphInputIndex[0x4]; // 0xC int32
    std::uint8_t m_nControlType[0x8]; // 0x10 VMixAutoControlType_t
};

struct CSndBeatTrack {
    static constexpr std::size_t size = 0x98;
    std::uint8_t m_name[0x20]; // 0x0 CUtlString
    std::uint8_t m_playbackType[0x4]; // 0x20 SndBeatTrackPlaybackType_t
    std::uint8_t m_nTranspose[0x4]; // 0x24 int32
    std::uint8_t m_bSyncToVoice[0x4]; // 0x28 bool
    std::uint8_t m_flBPM[0x6C]; // 0x2C float32
};

struct CVoiceContainerVsndRadioButton {
    static constexpr std::size_t size = 0x900;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t m_namespace[0x8]; // 0x78 CUtlString
    std::uint8_t m_slot1[0x88]; // 0x80 CVsndRadioButtonSlot
    std::uint8_t m_slot2[0x88]; // 0x108 CVsndRadioButtonSlot
    std::uint8_t m_slot3[0x88]; // 0x190 CVsndRadioButtonSlot
    std::uint8_t m_slot4[0x88]; // 0x218 CVsndRadioButtonSlot
    std::uint8_t m_slot5[0x88]; // 0x2A0 CVsndRadioButtonSlot
    std::uint8_t m_slot6[0x88]; // 0x328 CVsndRadioButtonSlot
    std::uint8_t m_slot7[0x88]; // 0x3B0 CVsndRadioButtonSlot
    std::uint8_t m_slot8[0x88]; // 0x438 CVsndRadioButtonSlot
    std::uint8_t m_slot9[0x88]; // 0x4C0 CVsndRadioButtonSlot
    std::uint8_t m_slot10[0x88]; // 0x548 CVsndRadioButtonSlot
    std::uint8_t m_slot11[0x88]; // 0x5D0 CVsndRadioButtonSlot
    std::uint8_t m_slot12[0x88]; // 0x658 CVsndRadioButtonSlot
    std::uint8_t m_slot13[0x88]; // 0x6E0 CVsndRadioButtonSlot
    std::uint8_t m_slot14[0x88]; // 0x768 CVsndRadioButtonSlot
    std::uint8_t m_slot15[0x88]; // 0x7F0 CVsndRadioButtonSlot
    std::uint8_t m_slot16[0x88]; // 0x878 CVsndRadioButtonSlot
};

struct CAudioEmphasisSample {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_flTime[0x4]; // 0x0 float32
    std::uint8_t m_flValue[0x4]; // 0x4 float32
};

struct CVMixOscProcessorDesc {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_desc[0xC]; // 0x28 VMixOscDesc_t
    std::uint8_t m_paramFrequency[0x4]; // 0x34 CVMixParameterFloat
    std::uint8_t m_paramPhase[0x8]; // 0x38 CVMixParameterFloat
};

struct CVoiceContainerLoopTriggerWithRandomPanner {
    static constexpr std::size_t size = 0xC8;
    std::uint8_t pad_0[0xA8]; // 0x0
    std::uint8_t m_randomPannerControls[0x20]; // 0xA8 CRandomPannerControls
};

struct CVoiceContainerGenerator {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x78]; // 0x0
};

struct CVoiceContainerSet {
    static constexpr std::size_t size = 0xA8;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t m_soundsToPlay[0x30]; // 0x78 CUtlVector<CVoiceContainerSetElement>
};

struct VMixConvolutionDesc_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_fldbGain[0x4]; // 0x0 float32
    std::uint8_t m_flPreDelayMS[0x4]; // 0x4 float32
    std::uint8_t m_flWetMix[0x4]; // 0x8 float32
    std::uint8_t m_fldbLow[0x4]; // 0xC float32
    std::uint8_t m_fldbMid[0x4]; // 0x10 float32
    std::uint8_t m_fldbHigh[0x4]; // 0x14 float32
    std::uint8_t m_flLowCutoffFreq[0x4]; // 0x18 float32
    std::uint8_t m_flHighCutoffFreq[0x4]; // 0x1C float32
};

struct CVoiceContainerVsndTrigger {
    static constexpr std::size_t size = 0x900;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t m_namespace[0x8]; // 0x78 CUtlString
    std::uint8_t m_slot1[0x88]; // 0x80 CVsndTriggerSlot
    std::uint8_t m_slot2[0x88]; // 0x108 CVsndTriggerSlot
    std::uint8_t m_slot3[0x88]; // 0x190 CVsndTriggerSlot
    std::uint8_t m_slot4[0x88]; // 0x218 CVsndTriggerSlot
    std::uint8_t m_slot5[0x88]; // 0x2A0 CVsndTriggerSlot
    std::uint8_t m_slot6[0x88]; // 0x328 CVsndTriggerSlot
    std::uint8_t m_slot7[0x88]; // 0x3B0 CVsndTriggerSlot
    std::uint8_t m_slot8[0x88]; // 0x438 CVsndTriggerSlot
    std::uint8_t m_slot9[0x88]; // 0x4C0 CVsndTriggerSlot
    std::uint8_t m_slot10[0x88]; // 0x548 CVsndTriggerSlot
    std::uint8_t m_slot11[0x88]; // 0x5D0 CVsndTriggerSlot
    std::uint8_t m_slot12[0x88]; // 0x658 CVsndTriggerSlot
    std::uint8_t m_slot13[0x88]; // 0x6E0 CVsndTriggerSlot
    std::uint8_t m_slot14[0x88]; // 0x768 CVsndTriggerSlot
    std::uint8_t m_slot15[0x88]; // 0x7F0 CVsndTriggerSlot
    std::uint8_t m_slot16[0x88]; // 0x878 CVsndTriggerSlot
};

struct CVoiceContainerSetElement {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_sound[0x20]; // 0x0 CSoundContainerReference
    std::uint8_t m_flVolumeDB[0x8]; // 0x20 float32
};

struct CSndBeatPatternManager {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x38]; // 0x0
    std::uint8_t m_vecPatterns[0x38]; // 0x38 CUtlVector<CSndBeatPattern>
    std::uint8_t m_vecActiveTracks[0x20]; // 0x70 CUtlVector<CSndBeatTrack>
};

struct CVoiceContainerAsyncGenerator {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x88]; // 0x0
};

struct CSoundInfoHeader {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct CVMixDescription {
    static constexpr std::size_t size = 0x110;
    std::uint8_t pad_0[0xD0]; // 0x0
    std::uint8_t m_submixList[0x10]; // 0xD0 CUtlLeanVector<CSubmix>
    std::uint8_t m_sources[0x10]; // 0xE0 CUtlLeanVector<std::unique_ptr<CVoiceContainerBase>>
    std::uint8_t m_impulseResponseValues[0x10]; // 0xF0 CUtlLeanVector<uint64>
    std::uint8_t m_nNameHashCode[0x10]; // 0x100 uint32
};

struct SosEditItemInfo_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t itemType[0x8]; // 0x0 SosEditItemType_t
    std::uint8_t itemName[0x8]; // 0x8 CUtlString
    std::uint8_t itemTypeName[0x10]; // 0x10 CUtlString
    std::uint8_t itemKVString[0x8]; // 0x20 CUtlString
    std::uint8_t itemPos[0x8]; // 0x28 Vector2D
};

struct CVMixSubmix {
    static constexpr std::size_t size = 0x38;
    std::uint8_t m_name[0x8]; // 0x0 CUtlString
    std::uint8_t m_SendNames[0x24]; // 0x8 CUtlString[4]
    std::uint8_t m_nSoloNameHash[0x4]; // 0x2C uint32
    std::uint8_t m_nChannels[0x4]; // 0x30 int32
    std::uint8_t m_nSendOperator[0x2]; // 0x34 VMixSendOperator_t
    std::uint8_t m_nMixDownRule[0x1]; // 0x36 VMixMixDownRule_t
    std::uint8_t m_nUpMixRule[0x1]; // 0x37 VMixUpMixRule_t
};

struct CVMixFlangerProcessorDesc {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_desc[0x24]; // 0x28 VMixFlangerDesc_t
    std::uint8_t m_paramDelay[0x4]; // 0x4C CVMixParameterFloat
    std::uint8_t m_paramModRate[0x4]; // 0x50 CVMixParameterFloat
    std::uint8_t m_paramModDepth[0x4]; // 0x54 CVMixParameterFloat
};

struct CVMixEffectChainProcessorDesc {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_desc[0x8]; // 0x28 VMixEffectChainDesc_t
    std::uint8_t m_paramEffectName[0x8]; // 0x30 CVMixParameterEffectName
};

struct KeyGroup_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t nCenterNote[0x1]; // 0x0 uint8
    std::uint8_t nMinNote[0x1]; // 0x1 uint8
    std::uint8_t nMaxNote[0x1]; // 0x2 uint8
    std::uint8_t nNumVelocityZones[0x5]; // 0x3 uint8
    std::uint8_t pVelocityZones[0x8]; // 0x8 VelocityZone_t*
};

struct CVMixFreeverbProcessorDesc {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_desc[0x10]; // 0x28 VMixFreeverbDesc_t
};

struct VMixPlateverbDesc_t {
    static constexpr std::size_t size = 0x1C;
    std::uint8_t m_flPrefilter[0x4]; // 0x0 float32
    std::uint8_t m_flInputDiffusion1[0x4]; // 0x4 float32
    std::uint8_t m_flInputDiffusion2[0x4]; // 0x8 float32
    std::uint8_t m_flDecay[0x4]; // 0xC float32
    std::uint8_t m_flDamp[0x4]; // 0x10 float32
    std::uint8_t m_flFeedbackDiffusion1[0x4]; // 0x14 float32
    std::uint8_t m_flFeedbackDiffusion2[0x4]; // 0x18 float32
};

struct CVMixConvolutionProcessorDesc {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_desc[0x20]; // 0x28 VMixConvolutionDesc_t
    std::uint8_t m_paramImpulseResponse[0x8]; // 0x48 CVMixDataOffset
};

struct CVMixParameterBool {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_offset[0x4]; // 0x0 CVMixDataOffset
};

struct CSoundContainerReferenceArray {
    static constexpr std::size_t size = 0x38;
    std::uint8_t m_bUseReference[0x8]; // 0x0 bool
    std::uint8_t m_sounds[0x18]; // 0x8 CUtlVector<CStrongHandle<InfoForResourceTypeCVoiceContainerBase>>
    std::uint8_t m_pSounds[0x18]; // 0x20 CUtlVector<CVoiceContainerBase*>
};

struct CVMixFilterProcessorDesc {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_desc[0x10]; // 0x28 VMixFilterDesc_t
    std::uint8_t m_paramCutoffFreq[0x4]; // 0x38 CVMixParameterFloat
    std::uint8_t m_paramQ[0x4]; // 0x3C CVMixParameterFloat
};

struct CVMixAdditionalOutput {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_name[0x10]; // 0x0 CUtlString
};

struct CVoiceContainerTapePlayer {
    static constexpr std::size_t size = 0xD8;
    std::uint8_t pad_0[0x88]; // 0x0
    std::uint8_t m_bShouldWraparound[0x8]; // 0x88 bool
    std::uint8_t m_sourceAudio[0x8]; // 0x90 CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
    std::uint8_t m_flTapeSpeedAttackTime[0x4]; // 0x98 float32
    std::uint8_t m_flTapeSpeedReleaseTime[0x3C]; // 0x9C float32
};

struct CVMixSubgraphSwitchProcessorDesc {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_desc[0x38]; // 0x28 VMixSubgraphSwitchDesc_t
    std::uint8_t m_paramEffectName[0x4]; // 0x60 CVMixParameterEffectName
    std::uint8_t m_paramSelectionIndex[0x4]; // 0x64 CVMixParameterFloat
};

struct VMixDiffusorDesc_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_flSize[0x4]; // 0x0 float32
    std::uint8_t m_flComplexity[0x4]; // 0x4 float32
    std::uint8_t m_flFeedback[0x4]; // 0x8 float32
    std::uint8_t m_flOutputGain[0x4]; // 0xC float32
};

struct CVMixSteamAudioPathingProcessorDesc {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_paramPositionX[0x4]; // 0x28 CVMixParameterFloat
    std::uint8_t m_paramPositionY[0x4]; // 0x2C CVMixParameterFloat
    std::uint8_t m_paramPositionZ[0x4]; // 0x30 CVMixParameterFloat
    std::uint8_t m_paramPathingMixLevel[0x4]; // 0x34 CVMixParameterFloat
    std::uint8_t m_paramBand[0x4]; // 0x38 CVMixParameterFloat
    std::uint8_t m_paramArrayPathingEQ[0x4]; // 0x3C CVMixDataOffset
    std::uint8_t m_paramArrayPathingCoefficients[0x8]; // 0x40 CVMixDataOffset
};

struct CVMixPannerProcessorDesc {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_desc[0x8]; // 0x28 VMixPannerDesc_t
    std::uint8_t m_paramPan[0x8]; // 0x30 CVMixParameterFloat
};

struct VMixDynamicsCompressorDesc_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_fldbOutputGain[0x4]; // 0x0 float32
    std::uint8_t m_fldbCompressionThreshold[0x4]; // 0x4 float32
    std::uint8_t m_fldbKneeWidth[0x4]; // 0x8 float32
    std::uint8_t m_flCompressionRatio[0x4]; // 0xC float32
    std::uint8_t m_flAttackTimeMS[0x4]; // 0x10 float32
    std::uint8_t m_flReleaseTimeMS[0x4]; // 0x14 float32
    std::uint8_t m_flRMSTimeMS[0x4]; // 0x18 float32
    std::uint8_t m_flWetMix[0x4]; // 0x1C float32
    std::uint8_t m_flSCHighPassFreq[0x4]; // 0x20 float32
    std::uint8_t m_bPeakMode[0x1]; // 0x24 bool
    std::uint8_t m_bAutoMakeupGain[0x3]; // 0x25 bool
};

struct CVMixHeap {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_storage[0x10]; // 0x0 CUtlLeanVector<uint32>
};

struct CVoiceContainerVMixSnd {
    static constexpr std::size_t size = 0x190;
    std::uint8_t pad_0[0x188]; // 0x0
    std::uint8_t m_resourceName[0x8]; // 0x188 CUtlString
};

struct CVMixStereoDelayProcessorDesc {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_paramDelayLeft[0x4]; // 0x28 CVMixParameterFloat
    std::uint8_t m_paramDelayRight[0x4]; // 0x2C CVMixParameterFloat
};

struct VMixShaperDesc_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t m_nShape[0x4]; // 0x0 int32
    std::uint8_t m_fldbDrive[0x4]; // 0x4 float32
    std::uint8_t m_fldbOutputGain[0x4]; // 0x8 float32
    std::uint8_t m_flWetMix[0x4]; // 0xC float32
    std::uint8_t m_nOversampleFactor[0x4]; // 0x10 int32
};

struct CVMixDataOffset {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_nOffset[0x4]; // 0x0 uint32
};

struct VMixEnvelopeDesc_t {
    static constexpr std::size_t size = 0xC;
    std::uint8_t m_flAttackTimeMS[0x4]; // 0x0 float32
    std::uint8_t m_flHoldTimeMS[0x4]; // 0x4 float32
    std::uint8_t m_flReleaseTimeMS[0x4]; // 0x8 float32
};

struct CAudioSentence {
    static constexpr std::size_t size = 0xA0;
    std::uint8_t m_bShouldVoiceDuck[0x8]; // 0x0 bool
    std::uint8_t m_RunTimePhonemes[0x18]; // 0x8 CUtlVector<CAudioPhonemeTag>
    std::uint8_t m_EmphasisSamples[0x18]; // 0x20 CUtlVector<CAudioEmphasisSample>
    std::uint8_t m_morphData[0x68]; // 0x38 CAudioMorphData
};

struct CVoiceContainerParameterBlender {
    static constexpr std::size_t size = 0x1C8;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t m_firstSound[0x20]; // 0x78 CSoundContainerReference
    std::uint8_t m_secondSound[0x20]; // 0x98 CSoundContainerReference
    std::uint8_t m_bEnableOcclusionBlend[0x8]; // 0xB8 bool
    std::uint8_t m_curve1[0x40]; // 0xC0 CPiecewiseCurve
    std::uint8_t m_curve2[0x40]; // 0x100 CPiecewiseCurve
    std::uint8_t m_bEnableDistanceBlend[0x8]; // 0x140 bool
    std::uint8_t m_curve3[0x40]; // 0x148 CPiecewiseCurve
    std::uint8_t m_curve4[0x40]; // 0x188 CPiecewiseCurve
};

struct CVMixAudioMeter {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_name[0x8]; // 0x0 CUtlString
    std::uint8_t m_displayName[0x8]; // 0x8 CUtlString
    std::uint8_t m_nDebugId[0x8]; // 0x10 uint32
};

struct CVMixVocoderProcessorDesc {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_desc[0x28]; // 0x28 VMixVocoderDesc_t
    std::uint8_t m_paramBandwidth[0x8]; // 0x50 CVMixParameterFloat
};

struct CSosGroupActionLimitSchema {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_nMaxCount[0x4]; // 0x8 int32
    std::uint8_t m_nStopType[0x4]; // 0xC SosActionStopType_t
    std::uint8_t m_nSortType[0x4]; // 0x10 SosActionLimitSortType_t
    std::uint8_t m_bStopImmediate[0x1]; // 0x14 bool
    std::uint8_t m_bCountStopped[0x3]; // 0x15 bool
};

struct CVoiceContainerAmpedDecayingSineWave {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t m_flGainAmount[0x8]; // 0x80 float32
};

struct VMixAutoFilterDesc_t {
    static constexpr std::size_t size = 0x2C;
    std::uint8_t m_flEnvelopeAmount[0x4]; // 0x0 float32
    std::uint8_t m_flAttackTimeMS[0x4]; // 0x4 float32
    std::uint8_t m_flReleaseTimeMS[0x4]; // 0x8 float32
    std::uint8_t m_filter[0x10]; // 0xC VMixFilterDesc_t
    std::uint8_t m_flLFOAmount[0x4]; // 0x1C float32
    std::uint8_t m_flLFORate[0x4]; // 0x20 float32
    std::uint8_t m_flPhase[0x4]; // 0x24 float32
    std::uint8_t m_nLFOShape[0x4]; // 0x28 VMixLFOShape_t
};

struct VMixDynamicsBand_t {
    static constexpr std::size_t size = 0x24;
    std::uint8_t m_fldbGainInput[0x4]; // 0x0 float32
    std::uint8_t m_fldbGainOutput[0x4]; // 0x4 float32
    std::uint8_t m_fldbThresholdBelow[0x4]; // 0x8 float32
    std::uint8_t m_fldbThresholdAbove[0x4]; // 0xC float32
    std::uint8_t m_flRatioBelow[0x4]; // 0x10 float32
    std::uint8_t m_flRatioAbove[0x4]; // 0x14 float32
    std::uint8_t m_flAttackTimeMS[0x4]; // 0x18 float32
    std::uint8_t m_flReleaseTimeMS[0x4]; // 0x1C float32
    std::uint8_t m_bEnable[0x1]; // 0x20 bool
    std::uint8_t m_bSolo[0x3]; // 0x21 bool
};

struct VMixEffectChainDesc_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_effectName[0x8]; // 0x0 CUtlString
};

struct CVMixPlateReverbProcessorDesc {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_desc[0x20]; // 0x28 VMixPlateverbDesc_t
};

struct CVoiceContainerMultiBlender {
    static constexpr std::size_t size = 0xB8;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t m_soundsToPlay[0x38]; // 0x78 CSoundContainerReferenceArray
    std::uint8_t m_flBlendFactor[0x4]; // 0xB0 float32
    std::uint8_t m_flCrossover[0x4]; // 0xB4 float32
};

struct CVMixVsndInput {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_defaultValue[0x18]; // 0x0 CUtlString
};

struct CVoiceContainerStaticAdditiveSynth__CGainScalePerInstance {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_flMinVolume[0x4]; // 0x0 float32
    std::uint8_t m_nInstancesAtMinVolume[0x4]; // 0x4 int32
    std::uint8_t m_flMaxVolume[0x4]; // 0x8 float32
    std::uint8_t m_nInstancesAtMaxVolume[0x4]; // 0xC int32
};

struct CVMixParameterEffectName {
    static constexpr std::size_t size = 0x4;
    std::uint8_t m_offset[0x4]; // 0x0 CVMixDataOffset
};

struct SndBeatTimeSignature_t {
    static constexpr std::size_t size = 0x2;
    std::uint8_t nNumerator[0x1]; // 0x0 uint8
    std::uint8_t nDenominator[0x1]; // 0x1 uint8
};

struct VelocityZone_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t nMaxVel[0x1]; // 0x0 uint8
    std::uint8_t nNextSelection[0x1]; // 0x1 uint8
    std::uint8_t nNumSamples[0x2]; // 0x2 uint8
    std::uint8_t pSamples[0x10]; // 0x4 uint32[4]
};

struct CVoiceContainerSelector {
    static constexpr std::size_t size = 0xF0;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t m_mode[0x8]; // 0x78 PlayBackMode_t
    std::uint8_t m_soundsToPlay[0x38]; // 0x80 CSoundContainerReferenceArray
    std::uint8_t m_fProbabilityWeights[0x38]; // 0xB8 CUtlVector<float32>
};

struct SndBeatEventKeyedSndEvts_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_strSoundEventName[0x8]; // 0x10 CUtlString
};

struct CVMixGraphInput {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nOffset[0x8]; // 0x10 CVMixDataOffset
};

struct CSosGroupActionTimeBlockLimitSchema {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_nMaxCount[0x4]; // 0x8 int32
    std::uint8_t m_flMaxDuration[0x4]; // 0xC float32
};

struct SndBeatEventKeyedMidiNotes_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nStatus[0x1]; // 0x10 uint8
    std::uint8_t m_nNote[0x1]; // 0x11 uint8
    std::uint8_t m_nVelocity[0x6]; // 0x12 uint8
};

struct CSosGroupActionMemberCountEnvelopeSchema {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_nBaseCount[0x4]; // 0x8 int32
    std::uint8_t m_nTargetCount[0x4]; // 0xC int32
    std::uint8_t m_flBaseValue[0x4]; // 0x10 float32
    std::uint8_t m_flTargetValue[0x4]; // 0x14 float32
    std::uint8_t m_flAttack[0x4]; // 0x18 float32
    std::uint8_t m_flDecay[0x4]; // 0x1C float32
    std::uint8_t m_resultVarName[0x8]; // 0x20 CUtlString
    std::uint8_t m_bSaveToGroup[0x8]; // 0x28 bool
};

struct CVMixDualCompressorProcessorDesc {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_desc[0x34]; // 0x28 VMixDualCompressorDesc_t
    std::uint8_t m_outParamLevel[0x4]; // 0x5C CVMixParameterFloat
    std::uint8_t m_outParamdBLevel[0x4]; // 0x60 CVMixParameterFloat
    std::uint8_t m_outParamReduction[0x4]; // 0x64 CVMixParameterFloat
};

struct CVoiceContainerSwitch {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t m_soundsToPlay[0x18]; // 0x78 CUtlVector<CSoundContainerReference>
};

struct CVMixControlMeter {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nValueIndex[0x8]; // 0x10 CVMixDataOffset
};

struct CVoiceContainerEnum {
    static constexpr std::size_t size = 0xB8;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t m_soundsToPlay[0x38]; // 0x78 CSoundContainerReferenceArray
    std::uint8_t m_iSelection[0x4]; // 0xB0 int32
    std::uint8_t m_flCrossfadeTime[0x4]; // 0xB4 float32
};

struct CSosGroupActionTimeLimitSchema {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_flMaxDuration[0x8]; // 0x8 float32
};

struct VMixVocoderDesc_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t m_nBandCount[0x4]; // 0x0 int32
    std::uint8_t m_flBandwidth[0x4]; // 0x4 float32
    std::uint8_t m_fldBModGain[0x4]; // 0x8 float32
    std::uint8_t m_flFreqRangeStart[0x4]; // 0xC float32
    std::uint8_t m_flFreqRangeEnd[0x4]; // 0x10 float32
    std::uint8_t m_fldBUnvoicedGain[0x4]; // 0x14 float32
    std::uint8_t m_flAttackTimeMS[0x4]; // 0x18 float32
    std::uint8_t m_flReleaseTimeMS[0x4]; // 0x1C float32
    std::uint8_t m_nDebugBand[0x4]; // 0x20 int32
    std::uint8_t m_bPeakMode[0x4]; // 0x24 bool
};

struct VMixUtilityDesc_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t m_nOp[0x4]; // 0x0 VMixChannelOperation_t
    std::uint8_t m_flInputPan[0x4]; // 0x4 float32
    std::uint8_t m_flOutputBalance[0x4]; // 0x8 float32
    std::uint8_t m_fldbOutputGain[0x4]; // 0xC float32
    std::uint8_t m_bBassMono[0x4]; // 0x10 bool
    std::uint8_t m_flBassFreq[0x4]; // 0x14 float32
};

struct CVoiceContainerLoopTrigger {
    static constexpr std::size_t size = 0xA8;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t m_flRetriggerTimeMin[0x4]; // 0x78 float32
    std::uint8_t m_flRetriggerTimeMax[0x4]; // 0x7C float32
    std::uint8_t m_flFadeTime[0x4]; // 0x80 float32
    std::uint8_t m_bCrossFade[0x4]; // 0x84 bool
    std::uint8_t m_sound[0x20]; // 0x88 CSoundContainerReference
};

struct SndBeatEventKeys_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_flKey[0x8]; // 0x8 float32
};

struct CVoiceContainerDecayingSineWave {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t m_flFrequency[0x4]; // 0x78 float32
    std::uint8_t m_flDecayTime[0x4]; // 0x7C float32
};

struct CVMixDelayProcessorDesc {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_desc[0x28]; // 0x28 VMixDelayDesc_t
    std::uint8_t m_paramCutoffFrequency[0x4]; // 0x50 CVMixParameterFloat
    std::uint8_t m_paramDelay[0x4]; // 0x54 CVMixParameterFloat
};

struct CVMixBoxverb2ProcessorDesc {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_desc[0x50]; // 0x28 VMixBoxverbDesc_t
};

struct VMixFilterDesc_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_fldbGain[0x4]; // 0x0 float32
    std::uint8_t m_flCutoffFreq[0x4]; // 0x4 float32
    std::uint8_t m_flQ[0x4]; // 0x8 float32
    std::uint8_t m_nFilterType[0x1]; // 0xC VMixFilterType_t
    std::uint8_t m_nFilterSlope[0x1]; // 0xD VMixFilterSlope_t
    std::uint8_t m_bEnabled[0x2]; // 0xE bool
};

struct CSndBeatPattern {
    static constexpr std::size_t size = 0xB8;
    std::uint8_t m_name[0xC]; // 0x0 CUtlString
    std::uint8_t m_flSyncPriority[0x4]; // 0xC float32
    std::uint8_t m_syncStartType[0x4]; // 0x10 SndBeatSyncStartType_t
    std::uint8_t m_syncType[0x4]; // 0x14 SndBeatSyncType_t
    std::uint8_t m_timeSignature[0x8]; // 0x18 SndBeatTimeSignature_t
    std::uint8_t m_flLength[0x4]; // 0x20 float32
    std::uint8_t m_bLooping[0x4]; // 0x24 bool
    std::uint8_t m_playEventType[0x4]; // 0x28 SndBeatEventType_t
    std::uint8_t m_flPlayBeatMult[0x4]; // 0x2C float32
    std::uint8_t m_playKeyType[0x8]; // 0x30 SndBeatKeyType_t
    std::uint8_t m_vecPatternKeys[0x18]; // 0x38 CUtlVector<SndBeatEventKeys_t>
    std::uint8_t m_vecPatternFloats[0x18]; // 0x50 CUtlVector<SndBeatEventKeyedFloats_t>
    std::uint8_t m_vecPatternSndEvts[0x18]; // 0x68 CUtlVector<SndBeatEventKeyedSndEvts_t>
    std::uint8_t m_vecPatternMidi[0x18]; // 0x80 CUtlVector<SndBeatEventKeyedMidiNotes_t>
    std::uint8_t m_syncEventType[0x4]; // 0x98 SndBeatEventType_t
    std::uint8_t m_flSyncBeatMult[0x4]; // 0x9C float32
    std::uint8_t m_vecSyncPatternKeys[0x18]; // 0xA0 CUtlVector<SndBeatEventKeys_t>
};

struct CSubmix {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x50]; // 0x0
};

struct VMixOscDesc_t {
    static constexpr std::size_t size = 0xC;
    std::uint8_t oscType[0x4]; // 0x0 VMixLFOShape_t
    std::uint8_t m_freq[0x4]; // 0x4 float32
    std::uint8_t m_flPhase[0x4]; // 0x8 float32
};

struct CVMixAutoFilterProcessorDesc {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t m_desc[0x30]; // 0x28 VMixAutoFilterDesc_t
};

struct ISndSeqInstruments {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct VMixFlangerDesc_t {
    static constexpr std::size_t size = 0x24;
    std::uint8_t m_bPhaseInvert[0x4]; // 0x0 bool
    std::uint8_t m_flGlideTime[0x4]; // 0x4 float32
    std::uint8_t m_flDelay[0x4]; // 0x8 float32
    std::uint8_t m_flOutputGain[0x4]; // 0xC float32
    std::uint8_t m_flFeedbackGain[0x4]; // 0x10 float32
    std::uint8_t m_flFeedforwardGain[0x4]; // 0x14 float32
    std::uint8_t m_flModRate[0x4]; // 0x18 float32
    std::uint8_t m_flModDepth[0x4]; // 0x1C float32
    std::uint8_t m_bApplyAntialiasing[0x4]; // 0x20 bool
};

struct VMixDynamicsDesc_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t m_fldbGain[0x4]; // 0x0 float32
    std::uint8_t m_fldbNoiseGateThreshold[0x4]; // 0x4 float32
    std::uint8_t m_fldbCompressionThreshold[0x4]; // 0x8 float32
    std::uint8_t m_fldbLimiterThreshold[0x4]; // 0xC float32
    std::uint8_t m_fldbKneeWidth[0x4]; // 0x10 float32
    std::uint8_t m_flRatio[0x4]; // 0x14 float32
    std::uint8_t m_flLimiterRatio[0x4]; // 0x18 float32
    std::uint8_t m_flAttackTimeMS[0x4]; // 0x1C float32
    std::uint8_t m_flReleaseTimeMS[0x4]; // 0x20 float32
    std::uint8_t m_flRMSTimeMS[0x4]; // 0x24 float32
    std::uint8_t m_flWetMix[0x4]; // 0x28 float32
    std::uint8_t m_bPeakMode[0x4]; // 0x2C bool
};

} // namespace