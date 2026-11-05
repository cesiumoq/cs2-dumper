/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Total Offsets   : 202
/*  Dumped At       : 13:00 05/11/2026 (GMT)
/*  Dumped In       : 1,2s
*/

/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

#pragma once
#include <cstddef>
#include <cstdint>

namespace cs2::soundsystem_dll {

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
    CMD_INVALID = -1,
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
    FILTER_UNKNOWN = -1,
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
    NO_VOICES = -1,
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
    std::uint8_t _[0x10]; // 0x0 
};

struct CVoiceContainerBlender {
    static constexpr std::size_t size = 0xc0;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t _[0x20]; // 0x78 
    std::uint8_t _[0x20]; // 0x98 
    std::uint8_t _[0x8]; // 0xb8 
};

struct CVMixPitchShiftProcessorDesc {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0x10]; // 0x28 
    std::uint8_t _[0x8]; // 0x38 
};

struct VMixFreeverbDesc_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
};

struct CVoiceContainerStaticAdditiveSynth__CHarmonic {
    static constexpr std::size_t size = 0x68;
    std::uint8_t _[0x1]; // 0x0 
    std::uint8_t _[0x3]; // 0x1 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x40]; // 0x10 
    std::uint8_t _[0x18]; // 0x50 
};

struct CVsndTriggerSlot {
    static constexpr std::size_t size = 0x88;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x20]; // 0x8 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x20]; // 0x30 
    std::uint8_t _[0x8]; // 0x50 
    std::uint8_t _[0x20]; // 0x58 
    std::uint8_t _[0x4]; // 0x78 
    std::uint8_t _[0x4]; // 0x7c 
    std::uint8_t _[0x8]; // 0x80 
};

struct CVoiceContainerStaticAdditiveSynth__CTone {
    static constexpr std::size_t size = 0x60;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x40]; // 0x18 
    std::uint8_t _[0x8]; // 0x58 
};

struct CSosGroupActionOcclusionSchema {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
};

struct CVoiceContainerRandomSampler {
    static constexpr std::size_t size = 0x1b0;
    std::uint8_t pad_0[0x88]; // 0x0
    std::uint8_t _[0x4]; // 0x88 
    std::uint8_t _[0x4]; // 0x8c 
    std::uint8_t _[0x4]; // 0x90 
    std::uint8_t _[0x4]; // 0x94 
    std::uint8_t _[0x8]; // 0x98 
    std::uint8_t _[0x110]; // 0xa0 
};

struct CVMixSteamAudioDirectProcessorDesc {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x4]; // 0x44 
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0x4]; // 0x54 
    std::uint8_t _[0x4]; // 0x58 
    std::uint8_t _[0x4]; // 0x5c 
    std::uint8_t _[0x4]; // 0x60 
    std::uint8_t _[0x4]; // 0x64 
    std::uint8_t _[0x4]; // 0x68 
    std::uint8_t _[0x4]; // 0x6c 
    std::uint8_t _[0x4]; // 0x70 
    std::uint8_t _[0x4]; // 0x74 
    std::uint8_t _[0x4]; // 0x78 
    std::uint8_t _[0x4]; // 0x7c 
    std::uint8_t _[0x4]; // 0x80 
    std::uint8_t _[0x4]; // 0x84 
    std::uint8_t _[0x8]; // 0x88 
};

struct CVMixSteamAudioHRTFProcessorDesc {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x4]; // 0x44 
    std::uint8_t _[0x8]; // 0x48 
};

struct CVoiceContainerDefault {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x78]; // 0x0
};

struct CVSound {
    static constexpr std::size_t size = 0x40;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x14]; // 0x2c 
};

struct CDSPPresetMixgroupModifierTable {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x18]; // 0x0 
};

struct CSosGroupActionSoundeventClusterSchema {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x20]; // 0x30 
};

struct CSosGroupActionSetSoundeventParameterSchema {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
};

struct CSoundContainerReference {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
};

struct CVoiceContainerNull {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x78]; // 0x0
};

struct VMixSubgraphSwitchDesc_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x8]; // 0x30 
};

struct CVoiceContainerAnalysisBase {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x40]; // 0x8 
};

struct CSosGroupActionSoundeventMinMaxValuesSchema {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x1]; // 0x18 
    std::uint8_t _[0x1]; // 0x19 
    std::uint8_t _[0x2]; // 0x1a 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x10]; // 0x30 
};

struct CVMixEnvelopeProcessorDesc {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0xc]; // 0x28 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x8]; // 0x38 
};

struct CVMixCommand {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
};

struct SamplerVoice_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x8]; // 0x0 
};

struct CVMixControlInput {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
};

struct CVMixBoxverbProcessorDesc {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0x50]; // 0x28 
};

struct CVMixDynamicsCompressorProcessorDesc {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0x28]; // 0x28 
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0x4]; // 0x54 
    std::uint8_t _[0x8]; // 0x58 
};

struct VMixPannerDesc_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct CSosGroupActionSoundeventPrioritySchema {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x18]; // 0x20 
};

struct CVoiceContainerRealtimeFMSineWave {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t _[0x4]; // 0x78 
    std::uint8_t _[0x4]; // 0x7c 
    std::uint8_t _[0x8]; // 0x80 
};

struct SelectedEditItemInfo_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x18]; // 0x0 
};

struct VMixModDelayDesc_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
};

struct CSndSeqInstSndEvtSchema {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x20]; // 0x0
};

struct CVMixNameInputMeter {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
};

struct CSndSeqInstruments {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x28]; // 0x0
};

struct CVMixDynamics3BandProcessorDesc {
    static constexpr std::size_t size = 0xb8;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0x90]; // 0x28 
};

struct VMixBoxverbDesc_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x10]; // 0x1c 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x4]; // 0x44 
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
};

struct CSosGroupActionSchema {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct CSosSoundEventGroupSchema {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x4]; // 0x44 
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x8]; // 0x50 
    std::uint8_t _[0x18]; // 0x58 
};

struct CSndSeqInstMidiSampler {
    static constexpr std::size_t size = 0xe0;
    std::uint8_t pad_0[0x20]; // 0x0
    std::uint8_t _[0x1]; // 0x20 
    std::uint8_t _[0x1]; // 0x21 
    std::uint8_t _[0x1]; // 0x22 
    std::uint8_t _[0x1]; // 0x23 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0xa0]; // 0x34 
    std::uint8_t _[0x4]; // 0xd4 
    std::uint8_t _[0x8]; // 0xd8 
};

struct VMixPointerFixupEntry_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct CSndSeqInstBaseSchema {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x6]; // 0x8 
    std::uint8_t _[0x2]; // 0xe 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x8]; // 0x18 
};

struct VMixDynamics3BandDesc_t {
    static constexpr std::size_t size = 0x90;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x6c]; // 0x24 
};

struct CVMixEQ8ProcessorDesc {
    static constexpr std::size_t size = 0xd0;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0xa0]; // 0x28 
    std::uint8_t _[0x8]; // 0xc8 
};

struct CDSPMixgroupModifier {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x8]; // 0x18 
};

struct CAudioMorphData {
    static constexpr std::size_t size = 0x68;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x18]; // 0x18 
    std::uint8_t _[0x18]; // 0x30 
    std::uint8_t _[0x18]; // 0x48 
    std::uint8_t _[0x4]; // 0x60 
    std::uint8_t _[0x4]; // 0x64 
};

struct SndBeatEventKeyedFloats_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
};

struct VMixDualCompressorDesc_t {
    static constexpr std::size_t size = 0x34;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x24]; // 0x10 
};

struct CVMixRuntimeGraph {
    static constexpr std::size_t size = 0x128;
    std::uint8_t pad_0[0xd0]; // 0x0
    std::uint8_t _[0x10]; // 0xd0 
    std::uint8_t _[0x10]; // 0xe0 
    std::uint8_t _[0x10]; // 0xf0 
    std::uint8_t _[0x10]; // 0x100 
    std::uint8_t _[0x18]; // 0x110 
};

struct CVoiceContainerStaticAdditiveSynth {
    static constexpr std::size_t size = 0xb8;
    std::uint8_t pad_0[0x88]; // 0x0
    std::uint8_t _[0x30]; // 0x88 
};

struct CVoiceContainerShapedNoise {
    static constexpr std::size_t size = 0x150;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t _[0x4]; // 0x78 
    std::uint8_t _[0x4]; // 0x7c 
    std::uint8_t _[0x40]; // 0x80 
    std::uint8_t _[0x4]; // 0xc0 
    std::uint8_t _[0x4]; // 0xc4 
    std::uint8_t _[0x40]; // 0xc8 
    std::uint8_t _[0x4]; // 0x108 
    std::uint8_t _[0x4]; // 0x10c 
    std::uint8_t _[0x40]; // 0x110 
};

struct CDspPresetModifierList {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x18]; // 0x8 
};

struct CVoiceContainerBase {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x1c]; // 0x14 
    std::uint8_t _[0x40]; // 0x30 
    std::uint8_t _[0x8]; // 0x70 
};

struct CVMixDiffusorProcessorDesc {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0x10]; // 0x28 
};

struct CVMixUtilityProcessorDesc {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0x18]; // 0x28 
};

struct CRandomPannerControls {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x8]; // 0x18 
};

struct CVoiceContainerGranulator {
    static constexpr std::size_t size = 0x178;
    std::uint8_t pad_0[0x88]; // 0x0
    std::uint8_t _[0x4]; // 0x88 
    std::uint8_t _[0x4]; // 0x8c 
    std::uint8_t _[0x4]; // 0x90 
    std::uint8_t _[0x4]; // 0x94 
    std::uint8_t _[0x8]; // 0x98 
    std::uint8_t _[0x8]; // 0xa0 
    std::uint8_t _[0x4]; // 0xa8 
    std::uint8_t _[0xcc]; // 0xac 
};

struct CVMixPresetDSPProcessorDesc {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0x10]; // 0x28 
    std::uint8_t _[0x8]; // 0x38 
};

struct VMixDelayDesc_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
};

struct VMixEQ8Desc_t {
    static constexpr std::size_t size = 0xa0;
    std::uint8_t _[0xa0]; // 0x0 
};

struct CVMixDynamicsProcessorDesc {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0x30]; // 0x28 
    std::uint8_t _[0x4]; // 0x58 
    std::uint8_t _[0x4]; // 0x5c 
};

struct VMixEQFilterDesc_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x4]; // 0x10 
};

struct CVoiceContainerLoopXFade {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t _[0x20]; // 0x78 
    std::uint8_t _[0x4]; // 0x98 
    std::uint8_t _[0x4]; // 0x9c 
    std::uint8_t _[0x4]; // 0xa0 
    std::uint8_t _[0x4]; // 0xa4 
    std::uint8_t _[0x1]; // 0xa8 
    std::uint8_t _[0x1]; // 0xa9 
    std::uint8_t _[0x6]; // 0xaa 
};

struct VMixPresetDSPDesc_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x10]; // 0x0 
};

struct CAudioPhonemeTag {
    static constexpr std::size_t size = 0xc;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
};

struct CVsndRadioButtonSlot {
    static constexpr std::size_t size = 0x88;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x20]; // 0x8 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x20]; // 0x30 
    std::uint8_t _[0x8]; // 0x50 
    std::uint8_t _[0x20]; // 0x58 
    std::uint8_t _[0x4]; // 0x78 
    std::uint8_t _[0x4]; // 0x7c 
    std::uint8_t _[0x4]; // 0x80 
    std::uint8_t _[0x4]; // 0x84 
};

struct CSosGroupActionSoundeventCountSchema {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
};

struct CVoiceContainerEnvelopeAnalyzer {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x8]; // 0x50 
};

struct CVMixBaseProcessorDesc {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
};

struct CVMixImpulseResponseInput {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct CVMixSteamAudioHybridReverbProcessorDesc {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x8]; // 0x38 
};

struct VMixPitchShiftDesc_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
};

struct CVMixControlOutput {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
};

struct CVMixModDelayProcessorDesc {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0x30]; // 0x28 
    std::uint8_t _[0x4]; // 0x58 
    std::uint8_t _[0x4]; // 0x5c 
    std::uint8_t _[0x4]; // 0x60 
    std::uint8_t _[0x4]; // 0x64 
};

struct CVMixShaperProcessorDesc {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0x14]; // 0x28 
    std::uint8_t _[0x4]; // 0x3c 
};

struct CVMixParameterFloat {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CVMixBaseGraphDescription {
    static constexpr std::size_t size = 0xd0;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x10]; // 0x10 
    std::uint8_t _[0x10]; // 0x20 
    std::uint8_t _[0x10]; // 0x30 
    std::uint8_t _[0x10]; // 0x40 
    std::uint8_t _[0x10]; // 0x50 
    std::uint8_t _[0x10]; // 0x60 
    std::uint8_t _[0x10]; // 0x70 
    std::uint8_t _[0x10]; // 0x80 
    std::uint8_t _[0x10]; // 0x90 
    std::uint8_t _[0x10]; // 0xa0 
    std::uint8_t _[0x10]; // 0xb0 
    std::uint8_t _[0x10]; // 0xc0 
};

struct CVMixAutomaticControlInput {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x8]; // 0x10 
};

struct CSndBeatTrack {
    static constexpr std::size_t size = 0x98;
    std::uint8_t _[0x20]; // 0x0 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x6c]; // 0x2c 
};

struct CVoiceContainerVsndRadioButton {
    static constexpr std::size_t size = 0x900;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t _[0x8]; // 0x78 
    std::uint8_t _[0x88]; // 0x80 
    std::uint8_t _[0x88]; // 0x108 
    std::uint8_t _[0x88]; // 0x190 
    std::uint8_t _[0x88]; // 0x218 
    std::uint8_t _[0x88]; // 0x2a0 
    std::uint8_t _[0x88]; // 0x328 
    std::uint8_t _[0x88]; // 0x3b0 
    std::uint8_t _[0x88]; // 0x438 
    std::uint8_t _[0x88]; // 0x4c0 
    std::uint8_t _[0x88]; // 0x548 
    std::uint8_t _[0x88]; // 0x5d0 
    std::uint8_t _[0x88]; // 0x658 
    std::uint8_t _[0x88]; // 0x6e0 
    std::uint8_t _[0x88]; // 0x768 
    std::uint8_t _[0x88]; // 0x7f0 
    std::uint8_t _[0x88]; // 0x878 
};

struct CAudioEmphasisSample {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct CVMixOscProcessorDesc {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0xc]; // 0x28 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x8]; // 0x38 
};

struct CVoiceContainerLoopTriggerWithRandomPanner {
    static constexpr std::size_t size = 0xc8;
    std::uint8_t pad_0[0xa8]; // 0x0
    std::uint8_t _[0x20]; // 0xa8 
};

struct CVoiceContainerGenerator {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x78]; // 0x0
};

struct CVoiceContainerSet {
    static constexpr std::size_t size = 0xa8;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t _[0x30]; // 0x78 
};

struct VMixConvolutionDesc_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
};

struct CVoiceContainerVsndTrigger {
    static constexpr std::size_t size = 0x900;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t _[0x8]; // 0x78 
    std::uint8_t _[0x88]; // 0x80 
    std::uint8_t _[0x88]; // 0x108 
    std::uint8_t _[0x88]; // 0x190 
    std::uint8_t _[0x88]; // 0x218 
    std::uint8_t _[0x88]; // 0x2a0 
    std::uint8_t _[0x88]; // 0x328 
    std::uint8_t _[0x88]; // 0x3b0 
    std::uint8_t _[0x88]; // 0x438 
    std::uint8_t _[0x88]; // 0x4c0 
    std::uint8_t _[0x88]; // 0x548 
    std::uint8_t _[0x88]; // 0x5d0 
    std::uint8_t _[0x88]; // 0x658 
    std::uint8_t _[0x88]; // 0x6e0 
    std::uint8_t _[0x88]; // 0x768 
    std::uint8_t _[0x88]; // 0x7f0 
    std::uint8_t _[0x88]; // 0x878 
};

struct CVoiceContainerSetElement {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x20]; // 0x0 
    std::uint8_t _[0x8]; // 0x20 
};

struct CSndBeatPatternManager {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x38]; // 0x0
    std::uint8_t _[0x38]; // 0x38 
    std::uint8_t _[0x20]; // 0x70 
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
    std::uint8_t pad_0[0xd0]; // 0x0
    std::uint8_t _[0x10]; // 0xd0 
    std::uint8_t _[0x10]; // 0xe0 
    std::uint8_t _[0x10]; // 0xf0 
    std::uint8_t _[0x10]; // 0x100 
};

struct SosEditItemInfo_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x10]; // 0x10 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
};

struct CVMixSubmix {
    static constexpr std::size_t size = 0x38;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x24]; // 0x8 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x2]; // 0x34 
    std::uint8_t _[0x1]; // 0x36 
    std::uint8_t _[0x1]; // 0x37 
};

struct CVMixFlangerProcessorDesc {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0x24]; // 0x28 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0x4]; // 0x54 
};

struct CVMixEffectChainProcessorDesc {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x8]; // 0x30 
};

struct KeyGroup_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x1]; // 0x0 
    std::uint8_t _[0x1]; // 0x1 
    std::uint8_t _[0x1]; // 0x2 
    std::uint8_t _[0x5]; // 0x3 
    std::uint8_t _[0x8]; // 0x8 
};

struct CVMixFreeverbProcessorDesc {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0x10]; // 0x28 
};

struct VMixPlateverbDesc_t {
    static constexpr std::size_t size = 0x1c;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
};

struct CVMixConvolutionProcessorDesc {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0x20]; // 0x28 
    std::uint8_t _[0x8]; // 0x48 
};

struct CVMixParameterBool {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CSoundContainerReferenceArray {
    static constexpr std::size_t size = 0x38;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x18]; // 0x8 
    std::uint8_t _[0x18]; // 0x20 
};

struct CVMixFilterProcessorDesc {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0x10]; // 0x28 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
};

struct CVMixAdditionalOutput {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x10]; // 0x0 
};

struct CVoiceContainerTapePlayer {
    static constexpr std::size_t size = 0xd8;
    std::uint8_t pad_0[0x88]; // 0x0
    std::uint8_t _[0x8]; // 0x88 
    std::uint8_t _[0x8]; // 0x90 
    std::uint8_t _[0x4]; // 0x98 
    std::uint8_t _[0x3c]; // 0x9c 
};

struct CVMixSubgraphSwitchProcessorDesc {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0x38]; // 0x28 
    std::uint8_t _[0x4]; // 0x60 
    std::uint8_t _[0x4]; // 0x64 
};

struct VMixDiffusorDesc_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
};

struct CVMixSteamAudioPathingProcessorDesc {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x8]; // 0x40 
};

struct CVMixPannerProcessorDesc {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x8]; // 0x30 
};

struct VMixDynamicsCompressorDesc_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x1]; // 0x24 
    std::uint8_t _[0x3]; // 0x25 
};

struct CVMixHeap {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x10]; // 0x0 
};

struct CVoiceContainerVMixSnd {
    static constexpr std::size_t size = 0x190;
    std::uint8_t pad_0[0x188]; // 0x0
    std::uint8_t _[0x8]; // 0x188 
};

struct CVMixStereoDelayProcessorDesc {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
};

struct VMixShaperDesc_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
};

struct CVMixDataOffset {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct VMixEnvelopeDesc_t {
    static constexpr std::size_t size = 0xc;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
};

struct CAudioSentence {
    static constexpr std::size_t size = 0xa0;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x18]; // 0x8 
    std::uint8_t _[0x18]; // 0x20 
    std::uint8_t _[0x68]; // 0x38 
};

struct CVoiceContainerParameterBlender {
    static constexpr std::size_t size = 0x1c8;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t _[0x20]; // 0x78 
    std::uint8_t _[0x20]; // 0x98 
    std::uint8_t _[0x8]; // 0xb8 
    std::uint8_t _[0x40]; // 0xc0 
    std::uint8_t _[0x40]; // 0x100 
    std::uint8_t _[0x8]; // 0x140 
    std::uint8_t _[0x40]; // 0x148 
    std::uint8_t _[0x40]; // 0x188 
};

struct CVMixAudioMeter {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
};

struct CVMixVocoderProcessorDesc {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0x28]; // 0x28 
    std::uint8_t _[0x8]; // 0x50 
};

struct CSosGroupActionLimitSchema {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x1]; // 0x14 
    std::uint8_t _[0x3]; // 0x15 
};

struct CVoiceContainerAmpedDecayingSineWave {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t _[0x8]; // 0x80 
};

struct VMixAutoFilterDesc_t {
    static constexpr std::size_t size = 0x2c;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x10]; // 0xc 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x4]; // 0x28 
};

struct VMixDynamicsBand_t {
    static constexpr std::size_t size = 0x24;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x1]; // 0x20 
    std::uint8_t _[0x3]; // 0x21 
};

struct VMixEffectChainDesc_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x8]; // 0x0 
};

struct CVMixPlateReverbProcessorDesc {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0x20]; // 0x28 
};

struct CVoiceContainerMultiBlender {
    static constexpr std::size_t size = 0xb8;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t _[0x38]; // 0x78 
    std::uint8_t _[0x4]; // 0xb0 
    std::uint8_t _[0x4]; // 0xb4 
};

struct CVMixVsndInput {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x18]; // 0x0 
};

struct CVoiceContainerStaticAdditiveSynth__CGainScalePerInstance {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
};

struct CVMixParameterEffectName {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct SndBeatTimeSignature_t {
    static constexpr std::size_t size = 0x2;
    std::uint8_t _[0x1]; // 0x0 
    std::uint8_t _[0x1]; // 0x1 
};

struct VelocityZone_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t _[0x1]; // 0x0 
    std::uint8_t _[0x1]; // 0x1 
    std::uint8_t _[0x2]; // 0x2 
    std::uint8_t _[0x10]; // 0x4 
};

struct CVoiceContainerSelector {
    static constexpr std::size_t size = 0xf0;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t _[0x8]; // 0x78 
    std::uint8_t _[0x38]; // 0x80 
    std::uint8_t _[0x38]; // 0xb8 
};

struct SndBeatEventKeyedSndEvts_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
};

struct CVMixGraphInput {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
};

struct CSosGroupActionTimeBlockLimitSchema {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
};

struct SndBeatEventKeyedMidiNotes_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x1]; // 0x10 
    std::uint8_t _[0x1]; // 0x11 
    std::uint8_t _[0x6]; // 0x12 
};

struct CSosGroupActionMemberCountEnvelopeSchema {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
};

struct CVMixDualCompressorProcessorDesc {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0x34]; // 0x28 
    std::uint8_t _[0x4]; // 0x5c 
    std::uint8_t _[0x4]; // 0x60 
    std::uint8_t _[0x4]; // 0x64 
};

struct CVoiceContainerSwitch {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t _[0x18]; // 0x78 
};

struct CVMixControlMeter {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
};

struct CVoiceContainerEnum {
    static constexpr std::size_t size = 0xb8;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t _[0x38]; // 0x78 
    std::uint8_t _[0x4]; // 0xb0 
    std::uint8_t _[0x4]; // 0xb4 
};

struct CSosGroupActionTimeLimitSchema {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
};

struct VMixVocoderDesc_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
};

struct VMixUtilityDesc_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
};

struct CVoiceContainerLoopTrigger {
    static constexpr std::size_t size = 0xa8;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t _[0x4]; // 0x78 
    std::uint8_t _[0x4]; // 0x7c 
    std::uint8_t _[0x4]; // 0x80 
    std::uint8_t _[0x4]; // 0x84 
    std::uint8_t _[0x20]; // 0x88 
};

struct SndBeatEventKeys_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
};

struct CVoiceContainerDecayingSineWave {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t _[0x4]; // 0x78 
    std::uint8_t _[0x4]; // 0x7c 
};

struct CVMixDelayProcessorDesc {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0x28]; // 0x28 
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0x4]; // 0x54 
};

struct CVMixBoxverb2ProcessorDesc {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0x50]; // 0x28 
};

struct VMixFilterDesc_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x1]; // 0xc 
    std::uint8_t _[0x1]; // 0xd 
    std::uint8_t _[0x2]; // 0xe 
};

struct CSndBeatPattern {
    static constexpr std::size_t size = 0xb8;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x18]; // 0x38 
    std::uint8_t _[0x18]; // 0x50 
    std::uint8_t _[0x18]; // 0x68 
    std::uint8_t _[0x18]; // 0x80 
    std::uint8_t _[0x4]; // 0x98 
    std::uint8_t _[0x4]; // 0x9c 
    std::uint8_t _[0x18]; // 0xa0 
};

struct CSubmix {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x50]; // 0x0
};

struct VMixOscDesc_t {
    static constexpr std::size_t size = 0xc;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
};

struct CVMixAutoFilterProcessorDesc {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0x30]; // 0x28 
};

struct ISndSeqInstruments {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct VMixFlangerDesc_t {
    static constexpr std::size_t size = 0x24;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
};

struct VMixDynamicsDesc_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
};

} // namespace