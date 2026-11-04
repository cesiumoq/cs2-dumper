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

using System;
using System.Runtime.InteropServices;

namespace Cs2.soundsystem {

    public enum VMixUpMixRule_t : int {
        DIVIDE = 0, 
        BROADCAST = 1, 
    }
    public enum SndSeqInstrumentType_t : int {
        eSndSeqInstNull = 0, 
        eSndSeqInstSndEvt = 1, 
        eSndSeqInstMidiSampler = 2, 
    }
    public enum EMode_t : int {
        Peak = 0, 
        RMS = 1, 
    }
    public enum SndBeatMidiStatusType_t : int {
        SndSeqMidiStatusNoteOff = 8, 
        SndSeqMidiStatusNoteOn = 9, 
        SndSeqMidiStatusKeyPressure = 10, 
        SndSeqMidiStatusCtrlChange = 11, 
        SndSeqMidiStatusProgramChange = 12, 
        SndSeqMidiStatusChannelPressure = 13, 
        SndSeqMidiStatusPitchBend = 14, 
    }
    public enum VMixGraphCommandID_t : int {
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
    }
    public enum EWaveform : int {
        Sine = 0, 
        Square = 1, 
        Saw = 2, 
        Triangle = 3, 
        Noise = 4, 
    }
    public enum VMixFilterChannelSet_t : int {
        FILTER_ALL_CHANNELS = 0, 
        FILTER_LEFT_ONLY = 1, 
        FILTER_RIGHT_ONLY = 2, 
        FILTER_MID_ONLY = 3, 
        FILTER_SIDE_ONLY = 4, 
        FILTER_CHANNEL_SET_MAX = 5, 
    }
    public enum VMixLFOShape_t : int {
        LFO_SHAPE_SINE = 0, 
        LFO_SHAPE_SQUARE = 1, 
        LFO_SHAPE_TRI = 2, 
        LFO_SHAPE_SAW = 3, 
        LFO_SHAPE_NOISE = 4, 
    }
    public enum VMixOffsetType_t : int {
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
    }
    public enum VMixMixDownRule_t : int {
        SUM = 0, 
        LEFT = 1, 
        RIGHT = 2, 
        MID = 3, 
        SIDE = 4, 
    }
    public enum VMixFilterType_t : int {
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
    }
    public enum SndBeatTrackPlaybackType_t : int {
        eSndBeatTrackPlaybackTypeStep = 0, 
        eSndBeatTrackPlaybackTypeFwd = 1, 
    }
    public enum VMixSendOperator_t : int {
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
    }
    public enum SndBeatEventType_t : int {
        eSndBeatEventTypeInvalid = 0, 
        eSndBeatEventTypeBeat = 1, 
        eSndBeatEventTypeBar = 2, 
        eSndBeatEventTypePhrase = 3, 
        eSndBeatEventTypeLength = 4, 
        eSndBeatEventTypeKeys = 5, 
    }
    public enum SosActionStopType_t : int {
        SOS_STOPTYPE_NONE = 0, 
        SOS_STOPTYPE_TIME = 1, 
        SOS_STOPTYPE_OPVAR = 2, 
    }
    public enum SndBeatKeyType_t : int {
        eSndBeatPatternTypeNone = 0, 
        eSndBeatPatternTypeKeys = 1, 
        eSndBeatPatternTypeKeyedFloats = 2, 
        eSndBeatPatternTypeKeyedSndEvts = 3, 
        eSndBeatPatternTypeKeyedMidi = 4, 
    }
    public enum SosEditItemType_t : int {
        SOS_EDIT_ITEM_TYPE_SOUNDEVENTS = 0, 
        SOS_EDIT_ITEM_TYPE_SOUNDEVENT = 1, 
        SOS_EDIT_ITEM_TYPE_LIBRARYSTACKS = 2, 
        SOS_EDIT_ITEM_TYPE_STACK = 3, 
        SOS_EDIT_ITEM_TYPE_OPERATOR = 4, 
        SOS_EDIT_ITEM_TYPE_FIELD = 5, 
    }
    public enum SndBeatSyncType_t : int {
        eSndBeatSyncTypeInvalid = 0, 
        eSndBeatSyncTypeReset = 1, 
        eSndBeatSyncTypeSeekImmediate = 2, 
    }
    public enum PlayBackMode_t : int {
        Random = 0, 
        RandomNoRepeats = 1, 
        RandomAvoidLast = 2, 
        Sequential = 3, 
        RandomWeights = 4, 
    }
    public enum EVsndTriggerMode : int {
        Trigger = 0, 
        Gate = 1, 
    }
    public enum SosGroupFieldBehavior_t : int {
        kIgnore = 0, 
        kBranch = 1, 
        kMatch = 2, 
    }
    public enum soundlevel_t : int {
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
    }
    public enum VMixPannerType_t : int {
        PANNER_TYPE_LINEAR = 0, 
        PANNER_TYPE_EQUAL_POWER = 1, 
    }
    public enum VMixChannelOperation_t : int {
        VMIX_CHAN_STEREO = 0, 
        VMIX_CHAN_LEFT = 1, 
        VMIX_CHAN_RIGHT = 2, 
        VMIX_CHAN_SWAP = 3, 
        VMIX_CHAN_MONO = 4, 
        VMIX_CHAN_MID_SIDE = 5, 
    }
    public enum EMidiNote : int {
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
    }
    public enum VMixAutoControlType_t : int {
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
    }
    public enum CVSoundFormat_t : int {
        PCM16 = 0, 
        PCM8 = 1, 
        MP3 = 2, 
        ADPCM = 3, 
    }
    public enum VMixFilterSlope_t : int {
        FILTER_SLOPE_1POLE_6dB = 0, 
        FILTER_SLOPE_1POLE_12dB = 1, 
        FILTER_SLOPE_1POLE_18dB = 2, 
        FILTER_SLOPE_1POLE_24dB = 3, 
        FILTER_SLOPE_12dB = 4, 
        FILTER_SLOPE_24dB = 5, 
        FILTER_SLOPE_36dB = 6, 
        FILTER_SLOPE_48dB = 7, 
        FILTER_SLOPE_MAX = 7, 
    }
    public enum SosActionLimitSortType_t : int {
        SOS_LIMIT_SORTTYPE_HIGHEST = 0, 
        SOS_LIMIT_SORTTYPE_LOWEST = 1, 
    }
    public enum VMixSubgraphSwitchInterpolationType_t : int {
        SUBGRAPH_INTERPOLATION_TEMPORAL_CROSSFADE = 0, 
        SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT = 1, 
        SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING = 2, 
    }
    public enum SosGroupType_t : int {
        SOS_GROUPTYPE_DYNAMIC = 0, 
        SOS_GROUPTYPE_STATIC = 1, 
    }
    public enum VMixOffsetCategory_t : int {
        NULL_POINTER = 0, 
        HEAP_OFFSET = 1, 
        INPUT_INDEX = 2, 
        SUBMIX_INDEX = 3, 
    }
    public enum SndBeatSyncStartType_t : int {
        eSndBeatSyncStartTypeInvalid = 0, 
        eSndBeatSyncStartTypeImmediate = 1, 
        eSndBeatSyncStartTypeQueue = 2, 
    }
    public enum SosActionSetParamSortType_t : int {
        SOS_SETPARAM_SORTTYPE_HIGHEST = 0, 
        SOS_SETPARAM_SORTTYPE_LOWEST = 1, 
    }
    public enum EVsndPlaybackMode : int {
        Trigger = 0, 
        Gate = 1, 
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CVMixInputBase {
        [FieldOffset(0x0)] public fixed byte m_name[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC0)]
    public unsafe struct CVoiceContainerBlender {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte m_firstSound[0x20];
        [FieldOffset(0x98)] public fixed byte m_secondSound[0x20];
        [FieldOffset(0xB8)] public fixed byte m_flBlendFactor[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CVMixPitchShiftProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_desc[0x10];
        [FieldOffset(0x38)] public fixed byte m_paramPitchScale[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct VMixFreeverbDesc_t {
        [FieldOffset(0x0)] public fixed byte m_flRoomSize[0x4];
        [FieldOffset(0x4)] public fixed byte m_flDamp[0x4];
        [FieldOffset(0x8)] public fixed byte m_flWidth[0x4];
        [FieldOffset(0xC)] public fixed byte m_flLateReflections[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct CVoiceContainerStaticAdditiveSynth__CHarmonic {
        [FieldOffset(0x0)] public fixed byte m_nWaveform[0x1];
        [FieldOffset(0x1)] public fixed byte m_nFundamental[0x3];
        [FieldOffset(0x4)] public fixed byte m_nOctave[0x4];
        [FieldOffset(0x8)] public fixed byte m_flCents[0x4];
        [FieldOffset(0xC)] public fixed byte m_flPhase[0x4];
        [FieldOffset(0x10)] public fixed byte m_curve[0x40];
        [FieldOffset(0x50)] public fixed byte m_volumeScaling[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CVsndTriggerSlot {
        [FieldOffset(0x0)] public fixed byte m_bEnableVsnd[0x8];
        [FieldOffset(0x8)] public fixed byte m_vsnd[0x20];
        [FieldOffset(0x28)] public fixed byte m_bEnableEndcap[0x8];
        [FieldOffset(0x30)] public fixed byte m_endcapVsnd[0x20];
        [FieldOffset(0x50)] public fixed byte m_bEnableLoopcap[0x8];
        [FieldOffset(0x58)] public fixed byte m_loopcapVsnd[0x20];
        [FieldOffset(0x78)] public fixed byte m_volume[0x4];
        [FieldOffset(0x7C)] public fixed byte m_fadeOut[0x4];
        [FieldOffset(0x80)] public fixed byte m_mode[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CVoiceContainerStaticAdditiveSynth__CTone {
        [FieldOffset(0x0)] public fixed byte m_harmonics[0x18];
        [FieldOffset(0x18)] public fixed byte m_curve[0x40];
        [FieldOffset(0x58)] public fixed byte m_bSyncInstances[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CSosGroupActionOcclusionSchema {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_flCalculationInterval[0x4];
        [FieldOffset(0xC)] public fixed byte m_flRadius[0x4];
        [FieldOffset(0x10)] public fixed byte m_flOcclusionScale[0x4];
        [FieldOffset(0x14)] public fixed byte m_flOcclusionMin[0x4];
        [FieldOffset(0x18)] public fixed byte m_flOcclusionMax[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flTestDepth[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1B0)]
    public unsafe struct CVoiceContainerRandomSampler {
        [FieldOffset(0x0)] public fixed byte pad_0[0x88];
        [FieldOffset(0x88)] public fixed byte m_flAmplitude[0x4];
        [FieldOffset(0x8C)] public fixed byte m_flAmplitudeJitter[0x4];
        [FieldOffset(0x90)] public fixed byte m_flTimeJitter[0x4];
        [FieldOffset(0x94)] public fixed byte m_flMaxLength[0x4];
        [FieldOffset(0x98)] public fixed byte m_nNumDelayVariations[0x8];
        [FieldOffset(0xA0)] public fixed byte m_grainResources[0x110];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CVMixSteamAudioDirectProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_paramPositionX[0x4];
        [FieldOffset(0x2C)] public fixed byte m_paramPositionY[0x4];
        [FieldOffset(0x30)] public fixed byte m_paramPositionZ[0x4];
        [FieldOffset(0x34)] public fixed byte m_paramRightX[0x4];
        [FieldOffset(0x38)] public fixed byte m_paramRightY[0x4];
        [FieldOffset(0x3C)] public fixed byte m_paramRightZ[0x4];
        [FieldOffset(0x40)] public fixed byte m_paramUpX[0x4];
        [FieldOffset(0x44)] public fixed byte m_paramUpY[0x4];
        [FieldOffset(0x48)] public fixed byte m_paramUpZ[0x4];
        [FieldOffset(0x4C)] public fixed byte m_paramAheadX[0x4];
        [FieldOffset(0x50)] public fixed byte m_paramAheadY[0x4];
        [FieldOffset(0x54)] public fixed byte m_paramAheadZ[0x4];
        [FieldOffset(0x58)] public fixed byte m_paramApplyDistanceAttenuation[0x4];
        [FieldOffset(0x5C)] public fixed byte m_paramApplyAirAbsorption[0x4];
        [FieldOffset(0x60)] public fixed byte m_paramApplyDirectivity[0x4];
        [FieldOffset(0x64)] public fixed byte m_paramApplyOcclusion[0x4];
        [FieldOffset(0x68)] public fixed byte m_paramApplyTransmission[0x4];
        [FieldOffset(0x6C)] public fixed byte m_paramDipoleWeight[0x4];
        [FieldOffset(0x70)] public fixed byte m_paramDipolePower[0x4];
        [FieldOffset(0x74)] public fixed byte m_paramOcclusion[0x4];
        [FieldOffset(0x78)] public fixed byte m_paramTransmissionLow[0x4];
        [FieldOffset(0x7C)] public fixed byte m_paramTransmissionMid[0x4];
        [FieldOffset(0x80)] public fixed byte m_paramTransmissionHigh[0x4];
        [FieldOffset(0x84)] public fixed byte m_paramBand[0x4];
        [FieldOffset(0x88)] public fixed byte m_paramTransmission[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CVMixSteamAudioHRTFProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_paramPositionX[0x4];
        [FieldOffset(0x2C)] public fixed byte m_paramPositionY[0x4];
        [FieldOffset(0x30)] public fixed byte m_paramPositionZ[0x4];
        [FieldOffset(0x34)] public fixed byte m_paramInterpolation[0x4];
        [FieldOffset(0x38)] public fixed byte m_paramDirectMixLevel[0x4];
        [FieldOffset(0x3C)] public fixed byte m_paramPerspectiveCorrection[0x4];
        [FieldOffset(0x40)] public fixed byte m_paramRelativePosition[0x4];
        [FieldOffset(0x44)] public fixed byte m_paramDelayLeft[0x4];
        [FieldOffset(0x48)] public fixed byte m_paramDelayRight[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CVoiceContainerDefault {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CVSound {
        [FieldOffset(0x0)] public fixed byte m_Sentences[0x10];
        [FieldOffset(0x10)] public fixed byte m_nRate[0x4];
        [FieldOffset(0x14)] public fixed byte m_nFormat[0x4];
        [FieldOffset(0x18)] public fixed byte m_nChannels[0x4];
        [FieldOffset(0x1C)] public fixed byte m_nLoopStart[0x4];
        [FieldOffset(0x20)] public fixed byte m_nSampleCount[0x4];
        [FieldOffset(0x24)] public fixed byte m_flDuration[0x4];
        [FieldOffset(0x28)] public fixed byte m_nStreamingSize[0x4];
        [FieldOffset(0x2C)] public fixed byte m_nLoopEnd[0x14];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CDSPPresetMixgroupModifierTable {
        [FieldOffset(0x0)] public fixed byte m_table[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CSosGroupActionSoundeventClusterSchema {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_nMinNearby[0x4];
        [FieldOffset(0xC)] public fixed byte m_flClusterEpsilon[0x4];
        [FieldOffset(0x10)] public fixed byte m_shouldPlayOpvar[0x8];
        [FieldOffset(0x18)] public fixed byte m_shouldPlayClusterChild[0x8];
        [FieldOffset(0x20)] public fixed byte m_clusterSizeOpvar[0x8];
        [FieldOffset(0x28)] public fixed byte m_groupBoundingBoxMinsOpvar[0x8];
        [FieldOffset(0x30)] public fixed byte m_groupBoundingBoxMaxsOpvar[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CSosGroupActionSetSoundeventParameterSchema {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_nMaxCount[0x4];
        [FieldOffset(0xC)] public fixed byte m_flMinValue[0x4];
        [FieldOffset(0x10)] public fixed byte m_flMaxValue[0x8];
        [FieldOffset(0x18)] public fixed byte m_opvarName[0x8];
        [FieldOffset(0x20)] public fixed byte m_nSortType[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CSoundContainerReference {
        [FieldOffset(0x0)] public fixed byte m_namespace[0x8];
        [FieldOffset(0x8)] public fixed byte m_bUseReference[0x8];
        [FieldOffset(0x10)] public fixed byte m_sound[0x8];
        [FieldOffset(0x18)] public fixed byte m_pSound[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CVoiceContainerNull {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct VMixSubgraphSwitchDesc_t {
        [FieldOffset(0x0)] public fixed byte m_name[0x8];
        [FieldOffset(0x8)] public fixed byte m_effectName[0x8];
        [FieldOffset(0x10)] public fixed byte m_subgraphs[0x18];
        [FieldOffset(0x28)] public fixed byte m_interpolationMode[0x4];
        [FieldOffset(0x2C)] public fixed byte m_bOnlyTailsOnFadeOut[0x4];
        [FieldOffset(0x30)] public fixed byte m_flInterpolationTime[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CVoiceContainerAnalysisBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_curve[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CSosGroupActionSoundeventMinMaxValuesSchema {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_strQueryPublicFieldName[0x8];
        [FieldOffset(0x10)] public fixed byte m_strDelayPublicFieldName[0x8];
        [FieldOffset(0x18)] public fixed byte m_bExcludeStoppedSounds[0x1];
        [FieldOffset(0x19)] public fixed byte m_bExcludeDelayedSounds[0x1];
        [FieldOffset(0x1A)] public fixed byte m_bExcludeSoundsBelowThreshold[0x2];
        [FieldOffset(0x1C)] public fixed byte m_flExcludeSoundsMinThresholdValue[0x4];
        [FieldOffset(0x20)] public fixed byte m_bExcludSoundsAboveThreshold[0x4];
        [FieldOffset(0x24)] public fixed byte m_flExcludeSoundsMaxThresholdValue[0x4];
        [FieldOffset(0x28)] public fixed byte m_strMinValueName[0x8];
        [FieldOffset(0x30)] public fixed byte m_strMaxValueName[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CVMixEnvelopeProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_desc[0xC];
        [FieldOffset(0x34)] public fixed byte m_outParamLevel[0x4];
        [FieldOffset(0x38)] public fixed byte m_outParamdBLevel[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CVMixCommand {
        [FieldOffset(0x0)] public fixed byte m_nCommand[0x4];
        [FieldOffset(0x4)] public fixed byte m_nParameterNameHash[0x4];
        [FieldOffset(0x8)] public fixed byte m_nOutputSubmix[0x4];
        [FieldOffset(0xC)] public fixed byte m_nInputSubmix0[0x4];
        [FieldOffset(0x10)] public fixed byte m_nInputSubmix1[0x4];
        [FieldOffset(0x14)] public fixed byte m_nProcessor[0x4];
        [FieldOffset(0x18)] public fixed byte m_nInputValue0[0x4];
        [FieldOffset(0x1C)] public fixed byte m_nInputValue1[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct SamplerVoice_t {
        [FieldOffset(0x0)] public fixed byte nNoteNum[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CVMixControlInput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_flDefaultValue[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CVMixBoxverbProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_desc[0x50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CVMixDynamicsCompressorProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_desc[0x28];
        [FieldOffset(0x50)] public fixed byte m_outParamLevel[0x4];
        [FieldOffset(0x54)] public fixed byte m_outParamdBLevel[0x4];
        [FieldOffset(0x58)] public fixed byte m_outParamReduction[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct VMixPannerDesc_t {
        [FieldOffset(0x0)] public fixed byte m_type[0x4];
        [FieldOffset(0x4)] public fixed byte m_flStrength[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CSosGroupActionSoundeventPrioritySchema {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_priorityValue[0x8];
        [FieldOffset(0x10)] public fixed byte m_priorityVolumeScalar[0x8];
        [FieldOffset(0x18)] public fixed byte m_priorityContributeButDontRead[0x8];
        [FieldOffset(0x20)] public fixed byte m_bPriorityReadButDontContribute[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CVoiceContainerRealtimeFMSineWave {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte m_flCarrierFrequency[0x4];
        [FieldOffset(0x7C)] public fixed byte m_flModulatorFrequency[0x4];
        [FieldOffset(0x80)] public fixed byte m_flModulatorAmount[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct SelectedEditItemInfo_t {
        [FieldOffset(0x0)] public fixed byte m_EditItems[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct VMixModDelayDesc_t {
        [FieldOffset(0x0)] public fixed byte m_feedbackFilter[0x10];
        [FieldOffset(0x10)] public fixed byte m_bPhaseInvert[0x4];
        [FieldOffset(0x14)] public fixed byte m_flGlideTime[0x4];
        [FieldOffset(0x18)] public fixed byte m_flDelay[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flOutputGain[0x4];
        [FieldOffset(0x20)] public fixed byte m_flFeedbackGain[0x4];
        [FieldOffset(0x24)] public fixed byte m_flModRate[0x4];
        [FieldOffset(0x28)] public fixed byte m_flModDepth[0x4];
        [FieldOffset(0x2C)] public fixed byte m_bApplyAntialiasing[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CSndSeqInstSndEvtSchema {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CVMixNameInputMeter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nValueIndex[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CSndSeqInstruments {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB8)]
    public unsafe struct CVMixDynamics3BandProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_desc[0x90];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct VMixBoxverbDesc_t {
        [FieldOffset(0x0)] public fixed byte m_flSizeMax[0x4];
        [FieldOffset(0x4)] public fixed byte m_flSizeMin[0x4];
        [FieldOffset(0x8)] public fixed byte m_flComplexity[0x4];
        [FieldOffset(0xC)] public fixed byte m_flDiffusion[0x4];
        [FieldOffset(0x10)] public fixed byte m_flModDepth[0x4];
        [FieldOffset(0x14)] public fixed byte m_flModRate[0x4];
        [FieldOffset(0x18)] public fixed byte m_bParallel[0x4];
        [FieldOffset(0x1C)] public fixed byte m_filterType[0x10];
        [FieldOffset(0x2C)] public fixed byte m_flWidth[0x4];
        [FieldOffset(0x30)] public fixed byte m_flHeight[0x4];
        [FieldOffset(0x34)] public fixed byte m_flDepth[0x4];
        [FieldOffset(0x38)] public fixed byte m_flFeedbackScale[0x4];
        [FieldOffset(0x3C)] public fixed byte m_flFeedbackWidth[0x4];
        [FieldOffset(0x40)] public fixed byte m_flFeedbackHeight[0x4];
        [FieldOffset(0x44)] public fixed byte m_flFeedbackDepth[0x4];
        [FieldOffset(0x48)] public fixed byte m_flOutputGain[0x4];
        [FieldOffset(0x4C)] public fixed byte m_flTaps[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CSosGroupActionSchema {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x70)]
    public unsafe struct CSosSoundEventGroupSchema {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_nGroupType[0x4];
        [FieldOffset(0xC)] public fixed byte m_bBlocksEvents[0x4];
        [FieldOffset(0x10)] public fixed byte m_nBlockMaxCount[0x4];
        [FieldOffset(0x14)] public fixed byte m_flMemberLifespanTime[0x4];
        [FieldOffset(0x18)] public fixed byte m_bInvertMatch[0x4];
        [FieldOffset(0x1C)] public fixed byte m_Behavior_EventName[0x4];
        [FieldOffset(0x20)] public fixed byte m_matchSoundEventName[0x8];
        [FieldOffset(0x28)] public fixed byte m_bMatchEventSubString[0x8];
        [FieldOffset(0x30)] public fixed byte m_matchSoundEventSubString[0x8];
        [FieldOffset(0x38)] public fixed byte m_Behavior_EntIndex[0x4];
        [FieldOffset(0x3C)] public fixed byte m_flEntIndex[0x4];
        [FieldOffset(0x40)] public fixed byte m_Behavior_Opvar[0x4];
        [FieldOffset(0x44)] public fixed byte m_flOpvar[0x4];
        [FieldOffset(0x48)] public fixed byte m_Behavior_String[0x8];
        [FieldOffset(0x50)] public fixed byte m_opvarString[0x8];
        [FieldOffset(0x58)] public fixed byte m_vActions[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xE0)]
    public unsafe struct CSndSeqInstMidiSampler {
        [FieldOffset(0x0)] public fixed byte pad_0[0x20];
        [FieldOffset(0x20)] public fixed byte m_bIsSoundEvent[0x1];
        [FieldOffset(0x21)] public fixed byte m_bStopPrevious[0x1];
        [FieldOffset(0x22)] public fixed byte m_nMinNote[0x1];
        [FieldOffset(0x23)] public fixed byte m_nMaxNote[0x1];
        [FieldOffset(0x24)] public fixed byte m_flMinVelocityAtten[0x4];
        [FieldOffset(0x28)] public fixed byte m_flMaxVelocityAtten[0x4];
        [FieldOffset(0x2C)] public fixed byte m_flAttack[0x4];
        [FieldOffset(0x30)] public fixed byte m_flRelease[0x4];
        [FieldOffset(0x34)] public fixed byte m_bBeatEnvelopes[0xA0];
        [FieldOffset(0xD4)] public fixed byte m_nNextVoiceSlot[0x4];
        [FieldOffset(0xD8)] public fixed byte m_hSoundEventHash[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct VMixPointerFixupEntry_t {
        [FieldOffset(0x0)] public fixed byte m_nIndex[0x4];
        [FieldOffset(0x4)] public fixed byte m_offset[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CSndSeqInstBaseSchema {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_nType[0x6];
        [FieldOffset(0xE)] public fixed byte m_bStopCurrentEvents[0x2];
        [FieldOffset(0x10)] public fixed byte m_flBPM[0x4];
        [FieldOffset(0x14)] public fixed byte m_flBPMFactor[0x4];
        [FieldOffset(0x18)] public fixed byte m_flBPMInvFactor[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct VMixDynamics3BandDesc_t {
        [FieldOffset(0x0)] public fixed byte m_fldbGainOutput[0x4];
        [FieldOffset(0x4)] public fixed byte m_flRMSTimeMS[0x4];
        [FieldOffset(0x8)] public fixed byte m_fldbKneeWidth[0x4];
        [FieldOffset(0xC)] public fixed byte m_flDepth[0x4];
        [FieldOffset(0x10)] public fixed byte m_flWetMix[0x4];
        [FieldOffset(0x14)] public fixed byte m_flTimeScale[0x4];
        [FieldOffset(0x18)] public fixed byte m_flLowCutoffFreq[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flHighCutoffFreq[0x4];
        [FieldOffset(0x20)] public fixed byte m_bPeakMode[0x4];
        [FieldOffset(0x24)] public fixed byte m_bandDesc[0x6C];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD0)]
    public unsafe struct CVMixEQ8ProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_desc[0xA0];
        [FieldOffset(0xC8)] public fixed byte m_paramEQScale[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CDSPMixgroupModifier {
        [FieldOffset(0x0)] public fixed byte m_mixgroup[0x8];
        [FieldOffset(0x8)] public fixed byte m_flModifier[0x4];
        [FieldOffset(0xC)] public fixed byte m_flModifierMin[0x4];
        [FieldOffset(0x10)] public fixed byte m_flSourceModifier[0x4];
        [FieldOffset(0x14)] public fixed byte m_flSourceModifierMin[0x4];
        [FieldOffset(0x18)] public fixed byte m_flListenerReverbModifierWhenSourceReverbIsActive[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct CAudioMorphData {
        [FieldOffset(0x0)] public fixed byte m_times[0x18];
        [FieldOffset(0x18)] public fixed byte m_nameHashCodes[0x18];
        [FieldOffset(0x30)] public fixed byte m_nameStrings[0x18];
        [FieldOffset(0x48)] public fixed byte m_samples[0x18];
        [FieldOffset(0x60)] public fixed byte m_flEaseIn[0x4];
        [FieldOffset(0x64)] public fixed byte m_flEaseOut[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct SndBeatEventKeyedFloats_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_flFloat[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x34)]
    public unsafe struct VMixDualCompressorDesc_t {
        [FieldOffset(0x0)] public fixed byte m_flRMSTimeMS[0x4];
        [FieldOffset(0x4)] public fixed byte m_fldbKneeWidth[0x4];
        [FieldOffset(0x8)] public fixed byte m_flWetMix[0x4];
        [FieldOffset(0xC)] public fixed byte m_bPeakMode[0x4];
        [FieldOffset(0x10)] public fixed byte m_bandDesc[0x24];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x128)]
    public unsafe struct CVMixRuntimeGraph {
        [FieldOffset(0x0)] public fixed byte pad_0[0xD0];
        [FieldOffset(0xD0)] public fixed byte m_submixes[0x10];
        [FieldOffset(0xE0)] public fixed byte m_impulseResponseValues[0x10];
        [FieldOffset(0xF0)] public fixed byte m_inputDefaultValues[0x10];
        [FieldOffset(0x100)] public fixed byte m_sources[0x10];
        [FieldOffset(0x110)] public fixed byte m_fixups[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB8)]
    public unsafe struct CVoiceContainerStaticAdditiveSynth {
        [FieldOffset(0x0)] public fixed byte pad_0[0x88];
        [FieldOffset(0x88)] public fixed byte m_tones[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x150)]
    public unsafe struct CVoiceContainerShapedNoise {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte m_bUseCurveForFrequency[0x4];
        [FieldOffset(0x7C)] public fixed byte m_flFrequency[0x4];
        [FieldOffset(0x80)] public fixed byte m_frequencySweep[0x40];
        [FieldOffset(0xC0)] public fixed byte m_bUseCurveForResonance[0x4];
        [FieldOffset(0xC4)] public fixed byte m_flResonance[0x4];
        [FieldOffset(0xC8)] public fixed byte m_resonanceSweep[0x40];
        [FieldOffset(0x108)] public fixed byte m_bUseCurveForAmplitude[0x4];
        [FieldOffset(0x10C)] public fixed byte m_flGainInDecibels[0x4];
        [FieldOffset(0x110)] public fixed byte m_gainSweep[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CDspPresetModifierList {
        [FieldOffset(0x0)] public fixed byte m_dspName[0x8];
        [FieldOffset(0x8)] public fixed byte m_modifiers[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CVoiceContainerBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_bRegisteredVMix[0x4];
        [FieldOffset(0x14)] public fixed byte m_nResourceName[0x1C];
        [FieldOffset(0x30)] public fixed byte m_vSound[0x40];
        [FieldOffset(0x70)] public fixed byte m_pEnvelopeAnalyzer[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CVMixDiffusorProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_desc[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CVMixUtilityProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_desc[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct CRandomPannerControls {
        [FieldOffset(0x0)] public fixed byte m_panningControlInputName[0x8];
        [FieldOffset(0x8)] public fixed byte m_volumeControlInputName[0x8];
        [FieldOffset(0x10)] public fixed byte m_flMinVolume[0x4];
        [FieldOffset(0x14)] public fixed byte m_flMaxVolume[0x4];
        [FieldOffset(0x18)] public fixed byte m_strVectorStackParam[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x178)]
    public unsafe struct CVoiceContainerGranulator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x88];
        [FieldOffset(0x88)] public fixed byte m_flGrainLength[0x4];
        [FieldOffset(0x8C)] public fixed byte m_flGrainCrossfadeAmount[0x4];
        [FieldOffset(0x90)] public fixed byte m_flStartJitter[0x4];
        [FieldOffset(0x94)] public fixed byte m_flPlaybackJitter[0x4];
        [FieldOffset(0x98)] public fixed byte m_bShouldWraparound[0x8];
        [FieldOffset(0xA0)] public fixed byte m_sourceAudio[0x8];
        [FieldOffset(0xA8)] public fixed byte m_bDoubleBufferSourceAudio[0x4];
        [FieldOffset(0xAC)] public fixed byte m_flMaxSourceLength[0xCC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CVMixPresetDSPProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_desc[0x10];
        [FieldOffset(0x38)] public fixed byte m_paramEffectName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct VMixDelayDesc_t {
        [FieldOffset(0x0)] public fixed byte m_feedbackFilter[0x10];
        [FieldOffset(0x10)] public fixed byte m_bEnableFilter[0x4];
        [FieldOffset(0x14)] public fixed byte m_flDelay[0x4];
        [FieldOffset(0x18)] public fixed byte m_flDirectGain[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flDelayGain[0x4];
        [FieldOffset(0x20)] public fixed byte m_flFeedbackGain[0x4];
        [FieldOffset(0x24)] public fixed byte m_flWidth[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA0)]
    public unsafe struct VMixEQ8Desc_t {
        [FieldOffset(0x0)] public fixed byte m_stages[0xA0];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x60)]
    public unsafe struct CVMixDynamicsProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_desc[0x30];
        [FieldOffset(0x58)] public fixed byte m_outParamLevel[0x4];
        [FieldOffset(0x5C)] public fixed byte m_outParamdBLevel[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct VMixEQFilterDesc_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nChannelSet[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CVoiceContainerLoopXFade {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte m_sound[0x20];
        [FieldOffset(0x98)] public fixed byte m_flLoopEnd[0x4];
        [FieldOffset(0x9C)] public fixed byte m_flLoopStart[0x4];
        [FieldOffset(0xA0)] public fixed byte m_flFadeOut[0x4];
        [FieldOffset(0xA4)] public fixed byte m_flFadeIn[0x4];
        [FieldOffset(0xA8)] public fixed byte m_bPlayHead[0x1];
        [FieldOffset(0xA9)] public fixed byte m_bPlayTail[0x1];
        [FieldOffset(0xAA)] public fixed byte m_bEqualPow[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct VMixPresetDSPDesc_t {
        [FieldOffset(0x0)] public fixed byte m_effectName[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct CAudioPhonemeTag {
        [FieldOffset(0x0)] public fixed byte m_flStartTime[0x4];
        [FieldOffset(0x4)] public fixed byte m_flEndTime[0x4];
        [FieldOffset(0x8)] public fixed byte m_nPhonemeCode[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CVsndRadioButtonSlot {
        [FieldOffset(0x0)] public fixed byte m_bEnableVsnd[0x8];
        [FieldOffset(0x8)] public fixed byte m_vsnd[0x20];
        [FieldOffset(0x28)] public fixed byte m_bEnableEndcap[0x8];
        [FieldOffset(0x30)] public fixed byte m_endcapVsnd[0x20];
        [FieldOffset(0x50)] public fixed byte m_bEnableLoopcap[0x8];
        [FieldOffset(0x58)] public fixed byte m_loopcapVsnd[0x20];
        [FieldOffset(0x78)] public fixed byte m_group[0x4];
        [FieldOffset(0x7C)] public fixed byte m_volume[0x4];
        [FieldOffset(0x80)] public fixed byte m_fadeOut[0x4];
        [FieldOffset(0x84)] public fixed byte m_mode[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CSosGroupActionSoundeventCountSchema {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_bExcludeStoppedSounds[0x8];
        [FieldOffset(0x10)] public fixed byte m_strCountKeyName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CVoiceContainerEnvelopeAnalyzer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x48];
        [FieldOffset(0x48)] public fixed byte m_mode[0x4];
        [FieldOffset(0x4C)] public fixed byte m_fAnalysisWindowMs[0x4];
        [FieldOffset(0x50)] public fixed byte m_flThreshold[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CVMixBaseProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_name[0x8];
        [FieldOffset(0x10)] public fixed byte m_nDebugId[0x4];
        [FieldOffset(0x14)] public fixed byte m_flxfade[0x4];
        [FieldOffset(0x18)] public fixed byte m_nChannels[0x4];
        [FieldOffset(0x1C)] public fixed byte m_bDebugBypass[0x4];
        [FieldOffset(0x20)] public fixed byte m_paramEnable[0x4];
        [FieldOffset(0x24)] public fixed byte m_paramMix[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CVMixImpulseResponseInput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CVMixSteamAudioHybridReverbProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_paramReverbTimeLow[0x4];
        [FieldOffset(0x2C)] public fixed byte m_paramReverbTimeMid[0x4];
        [FieldOffset(0x30)] public fixed byte m_paramReverbTimeHigh[0x4];
        [FieldOffset(0x34)] public fixed byte m_paramBand[0x4];
        [FieldOffset(0x38)] public fixed byte m_paramReverbTime[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct VMixPitchShiftDesc_t {
        [FieldOffset(0x0)] public fixed byte m_nGrainSampleCount[0x4];
        [FieldOffset(0x4)] public fixed byte m_flPitchShift[0x4];
        [FieldOffset(0x8)] public fixed byte m_nQuality[0x4];
        [FieldOffset(0xC)] public fixed byte m_nProcType[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CVMixControlOutput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_flDefaultValue[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct CVMixModDelayProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_desc[0x30];
        [FieldOffset(0x58)] public fixed byte m_paramCutoffFrequency[0x4];
        [FieldOffset(0x5C)] public fixed byte m_paramDelay[0x4];
        [FieldOffset(0x60)] public fixed byte m_paramModRate[0x4];
        [FieldOffset(0x64)] public fixed byte m_paramModDepth[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CVMixShaperProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_desc[0x14];
        [FieldOffset(0x3C)] public fixed byte m_paramDrive[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CVMixParameterFloat {
        [FieldOffset(0x0)] public fixed byte m_offset[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD0)]
    public unsafe struct CVMixBaseGraphDescription {
        [FieldOffset(0x0)] public fixed byte m_name[0x8];
        [FieldOffset(0x8)] public fixed byte m_nGraphOutputChannels[0x4];
        [FieldOffset(0xC)] public fixed byte m_bIsMainGraph[0x4];
        [FieldOffset(0x10)] public fixed byte m_processorNodes[0x10];
        [FieldOffset(0x20)] public fixed byte m_graphInputs[0x10];
        [FieldOffset(0x30)] public fixed byte m_controlTransientInputs[0x10];
        [FieldOffset(0x40)] public fixed byte m_controlOutputs[0x10];
        [FieldOffset(0x50)] public fixed byte m_impulseResponseInputs[0x10];
        [FieldOffset(0x60)] public fixed byte m_mixCommands[0x10];
        [FieldOffset(0x70)] public fixed byte m_heap[0x10];
        [FieldOffset(0x80)] public fixed byte m_audioMeters[0x10];
        [FieldOffset(0x90)] public fixed byte m_controlMeters[0x10];
        [FieldOffset(0xA0)] public fixed byte m_nameInputMeters[0x10];
        [FieldOffset(0xB0)] public fixed byte m_additionalOutputs[0x10];
        [FieldOffset(0xC0)] public fixed byte m_automaticControlInputs[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CVMixAutomaticControlInput {
        [FieldOffset(0x0)] public fixed byte m_name[0xC];
        [FieldOffset(0xC)] public fixed byte m_nGraphInputIndex[0x4];
        [FieldOffset(0x10)] public fixed byte m_nControlType[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x98)]
    public unsafe struct CSndBeatTrack {
        [FieldOffset(0x0)] public fixed byte m_name[0x20];
        [FieldOffset(0x20)] public fixed byte m_playbackType[0x4];
        [FieldOffset(0x24)] public fixed byte m_nTranspose[0x4];
        [FieldOffset(0x28)] public fixed byte m_bSyncToVoice[0x4];
        [FieldOffset(0x2C)] public fixed byte m_flBPM[0x6C];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x900)]
    public unsafe struct CVoiceContainerVsndRadioButton {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte m_namespace[0x8];
        [FieldOffset(0x80)] public fixed byte m_slot1[0x88];
        [FieldOffset(0x108)] public fixed byte m_slot2[0x88];
        [FieldOffset(0x190)] public fixed byte m_slot3[0x88];
        [FieldOffset(0x218)] public fixed byte m_slot4[0x88];
        [FieldOffset(0x2A0)] public fixed byte m_slot5[0x88];
        [FieldOffset(0x328)] public fixed byte m_slot6[0x88];
        [FieldOffset(0x3B0)] public fixed byte m_slot7[0x88];
        [FieldOffset(0x438)] public fixed byte m_slot8[0x88];
        [FieldOffset(0x4C0)] public fixed byte m_slot9[0x88];
        [FieldOffset(0x548)] public fixed byte m_slot10[0x88];
        [FieldOffset(0x5D0)] public fixed byte m_slot11[0x88];
        [FieldOffset(0x658)] public fixed byte m_slot12[0x88];
        [FieldOffset(0x6E0)] public fixed byte m_slot13[0x88];
        [FieldOffset(0x768)] public fixed byte m_slot14[0x88];
        [FieldOffset(0x7F0)] public fixed byte m_slot15[0x88];
        [FieldOffset(0x878)] public fixed byte m_slot16[0x88];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct CAudioEmphasisSample {
        [FieldOffset(0x0)] public fixed byte m_flTime[0x4];
        [FieldOffset(0x4)] public fixed byte m_flValue[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CVMixOscProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_desc[0xC];
        [FieldOffset(0x34)] public fixed byte m_paramFrequency[0x4];
        [FieldOffset(0x38)] public fixed byte m_paramPhase[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC8)]
    public unsafe struct CVoiceContainerLoopTriggerWithRandomPanner {
        [FieldOffset(0x0)] public fixed byte pad_0[0xA8];
        [FieldOffset(0xA8)] public fixed byte m_randomPannerControls[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CVoiceContainerGenerator {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA8)]
    public unsafe struct CVoiceContainerSet {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte m_soundsToPlay[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct VMixConvolutionDesc_t {
        [FieldOffset(0x0)] public fixed byte m_fldbGain[0x4];
        [FieldOffset(0x4)] public fixed byte m_flPreDelayMS[0x4];
        [FieldOffset(0x8)] public fixed byte m_flWetMix[0x4];
        [FieldOffset(0xC)] public fixed byte m_fldbLow[0x4];
        [FieldOffset(0x10)] public fixed byte m_fldbMid[0x4];
        [FieldOffset(0x14)] public fixed byte m_fldbHigh[0x4];
        [FieldOffset(0x18)] public fixed byte m_flLowCutoffFreq[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flHighCutoffFreq[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x900)]
    public unsafe struct CVoiceContainerVsndTrigger {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte m_namespace[0x8];
        [FieldOffset(0x80)] public fixed byte m_slot1[0x88];
        [FieldOffset(0x108)] public fixed byte m_slot2[0x88];
        [FieldOffset(0x190)] public fixed byte m_slot3[0x88];
        [FieldOffset(0x218)] public fixed byte m_slot4[0x88];
        [FieldOffset(0x2A0)] public fixed byte m_slot5[0x88];
        [FieldOffset(0x328)] public fixed byte m_slot6[0x88];
        [FieldOffset(0x3B0)] public fixed byte m_slot7[0x88];
        [FieldOffset(0x438)] public fixed byte m_slot8[0x88];
        [FieldOffset(0x4C0)] public fixed byte m_slot9[0x88];
        [FieldOffset(0x548)] public fixed byte m_slot10[0x88];
        [FieldOffset(0x5D0)] public fixed byte m_slot11[0x88];
        [FieldOffset(0x658)] public fixed byte m_slot12[0x88];
        [FieldOffset(0x6E0)] public fixed byte m_slot13[0x88];
        [FieldOffset(0x768)] public fixed byte m_slot14[0x88];
        [FieldOffset(0x7F0)] public fixed byte m_slot15[0x88];
        [FieldOffset(0x878)] public fixed byte m_slot16[0x88];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct CVoiceContainerSetElement {
        [FieldOffset(0x0)] public fixed byte m_sound[0x20];
        [FieldOffset(0x20)] public fixed byte m_flVolumeDB[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CSndBeatPatternManager {
        [FieldOffset(0x0)] public fixed byte pad_0[0x38];
        [FieldOffset(0x38)] public fixed byte m_vecPatterns[0x38];
        [FieldOffset(0x70)] public fixed byte m_vecActiveTracks[0x20];
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
        [FieldOffset(0x0)] public fixed byte pad_0[0xD0];
        [FieldOffset(0xD0)] public fixed byte m_submixList[0x10];
        [FieldOffset(0xE0)] public fixed byte m_sources[0x10];
        [FieldOffset(0xF0)] public fixed byte m_impulseResponseValues[0x10];
        [FieldOffset(0x100)] public fixed byte m_nNameHashCode[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct SosEditItemInfo_t {
        [FieldOffset(0x0)] public fixed byte itemType[0x8];
        [FieldOffset(0x8)] public fixed byte itemName[0x8];
        [FieldOffset(0x10)] public fixed byte itemTypeName[0x10];
        [FieldOffset(0x20)] public fixed byte itemKVString[0x8];
        [FieldOffset(0x28)] public fixed byte itemPos[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CVMixSubmix {
        [FieldOffset(0x0)] public fixed byte m_name[0x8];
        [FieldOffset(0x8)] public fixed byte m_SendNames[0x24];
        [FieldOffset(0x2C)] public fixed byte m_nSoloNameHash[0x4];
        [FieldOffset(0x30)] public fixed byte m_nChannels[0x4];
        [FieldOffset(0x34)] public fixed byte m_nSendOperator[0x2];
        [FieldOffset(0x36)] public fixed byte m_nMixDownRule[0x1];
        [FieldOffset(0x37)] public fixed byte m_nUpMixRule[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CVMixFlangerProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_desc[0x24];
        [FieldOffset(0x4C)] public fixed byte m_paramDelay[0x4];
        [FieldOffset(0x50)] public fixed byte m_paramModRate[0x4];
        [FieldOffset(0x54)] public fixed byte m_paramModDepth[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CVMixEffectChainProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_desc[0x8];
        [FieldOffset(0x30)] public fixed byte m_paramEffectName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct KeyGroup_t {
        [FieldOffset(0x0)] public fixed byte nCenterNote[0x1];
        [FieldOffset(0x1)] public fixed byte nMinNote[0x1];
        [FieldOffset(0x2)] public fixed byte nMaxNote[0x1];
        [FieldOffset(0x3)] public fixed byte nNumVelocityZones[0x5];
        [FieldOffset(0x8)] public fixed byte pVelocityZones[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CVMixFreeverbProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_desc[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1C)]
    public unsafe struct VMixPlateverbDesc_t {
        [FieldOffset(0x0)] public fixed byte m_flPrefilter[0x4];
        [FieldOffset(0x4)] public fixed byte m_flInputDiffusion1[0x4];
        [FieldOffset(0x8)] public fixed byte m_flInputDiffusion2[0x4];
        [FieldOffset(0xC)] public fixed byte m_flDecay[0x4];
        [FieldOffset(0x10)] public fixed byte m_flDamp[0x4];
        [FieldOffset(0x14)] public fixed byte m_flFeedbackDiffusion1[0x4];
        [FieldOffset(0x18)] public fixed byte m_flFeedbackDiffusion2[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CVMixConvolutionProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_desc[0x20];
        [FieldOffset(0x48)] public fixed byte m_paramImpulseResponse[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CVMixParameterBool {
        [FieldOffset(0x0)] public fixed byte m_offset[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CSoundContainerReferenceArray {
        [FieldOffset(0x0)] public fixed byte m_bUseReference[0x8];
        [FieldOffset(0x8)] public fixed byte m_sounds[0x18];
        [FieldOffset(0x20)] public fixed byte m_pSounds[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct CVMixFilterProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_desc[0x10];
        [FieldOffset(0x38)] public fixed byte m_paramCutoffFreq[0x4];
        [FieldOffset(0x3C)] public fixed byte m_paramQ[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CVMixAdditionalOutput {
        [FieldOffset(0x0)] public fixed byte m_name[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xD8)]
    public unsafe struct CVoiceContainerTapePlayer {
        [FieldOffset(0x0)] public fixed byte pad_0[0x88];
        [FieldOffset(0x88)] public fixed byte m_bShouldWraparound[0x8];
        [FieldOffset(0x90)] public fixed byte m_sourceAudio[0x8];
        [FieldOffset(0x98)] public fixed byte m_flTapeSpeedAttackTime[0x4];
        [FieldOffset(0x9C)] public fixed byte m_flTapeSpeedReleaseTime[0x3C];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct CVMixSubgraphSwitchProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_desc[0x38];
        [FieldOffset(0x60)] public fixed byte m_paramEffectName[0x4];
        [FieldOffset(0x64)] public fixed byte m_paramSelectionIndex[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct VMixDiffusorDesc_t {
        [FieldOffset(0x0)] public fixed byte m_flSize[0x4];
        [FieldOffset(0x4)] public fixed byte m_flComplexity[0x4];
        [FieldOffset(0x8)] public fixed byte m_flFeedback[0x4];
        [FieldOffset(0xC)] public fixed byte m_flOutputGain[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CVMixSteamAudioPathingProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_paramPositionX[0x4];
        [FieldOffset(0x2C)] public fixed byte m_paramPositionY[0x4];
        [FieldOffset(0x30)] public fixed byte m_paramPositionZ[0x4];
        [FieldOffset(0x34)] public fixed byte m_paramPathingMixLevel[0x4];
        [FieldOffset(0x38)] public fixed byte m_paramBand[0x4];
        [FieldOffset(0x3C)] public fixed byte m_paramArrayPathingEQ[0x4];
        [FieldOffset(0x40)] public fixed byte m_paramArrayPathingCoefficients[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x38)]
    public unsafe struct CVMixPannerProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_desc[0x8];
        [FieldOffset(0x30)] public fixed byte m_paramPan[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct VMixDynamicsCompressorDesc_t {
        [FieldOffset(0x0)] public fixed byte m_fldbOutputGain[0x4];
        [FieldOffset(0x4)] public fixed byte m_fldbCompressionThreshold[0x4];
        [FieldOffset(0x8)] public fixed byte m_fldbKneeWidth[0x4];
        [FieldOffset(0xC)] public fixed byte m_flCompressionRatio[0x4];
        [FieldOffset(0x10)] public fixed byte m_flAttackTimeMS[0x4];
        [FieldOffset(0x14)] public fixed byte m_flReleaseTimeMS[0x4];
        [FieldOffset(0x18)] public fixed byte m_flRMSTimeMS[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flWetMix[0x4];
        [FieldOffset(0x20)] public fixed byte m_flSCHighPassFreq[0x4];
        [FieldOffset(0x24)] public fixed byte m_bPeakMode[0x1];
        [FieldOffset(0x25)] public fixed byte m_bAutoMakeupGain[0x3];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CVMixHeap {
        [FieldOffset(0x0)] public fixed byte m_storage[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x190)]
    public unsafe struct CVoiceContainerVMixSnd {
        [FieldOffset(0x0)] public fixed byte pad_0[0x188];
        [FieldOffset(0x188)] public fixed byte m_resourceName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CVMixStereoDelayProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_paramDelayLeft[0x4];
        [FieldOffset(0x2C)] public fixed byte m_paramDelayRight[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct VMixShaperDesc_t {
        [FieldOffset(0x0)] public fixed byte m_nShape[0x4];
        [FieldOffset(0x4)] public fixed byte m_fldbDrive[0x4];
        [FieldOffset(0x8)] public fixed byte m_fldbOutputGain[0x4];
        [FieldOffset(0xC)] public fixed byte m_flWetMix[0x4];
        [FieldOffset(0x10)] public fixed byte m_nOversampleFactor[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CVMixDataOffset {
        [FieldOffset(0x0)] public fixed byte m_nOffset[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct VMixEnvelopeDesc_t {
        [FieldOffset(0x0)] public fixed byte m_flAttackTimeMS[0x4];
        [FieldOffset(0x4)] public fixed byte m_flHoldTimeMS[0x4];
        [FieldOffset(0x8)] public fixed byte m_flReleaseTimeMS[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA0)]
    public unsafe struct CAudioSentence {
        [FieldOffset(0x0)] public fixed byte m_bShouldVoiceDuck[0x8];
        [FieldOffset(0x8)] public fixed byte m_RunTimePhonemes[0x18];
        [FieldOffset(0x20)] public fixed byte m_EmphasisSamples[0x18];
        [FieldOffset(0x38)] public fixed byte m_morphData[0x68];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1C8)]
    public unsafe struct CVoiceContainerParameterBlender {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte m_firstSound[0x20];
        [FieldOffset(0x98)] public fixed byte m_secondSound[0x20];
        [FieldOffset(0xB8)] public fixed byte m_bEnableOcclusionBlend[0x8];
        [FieldOffset(0xC0)] public fixed byte m_curve1[0x40];
        [FieldOffset(0x100)] public fixed byte m_curve2[0x40];
        [FieldOffset(0x140)] public fixed byte m_bEnableDistanceBlend[0x8];
        [FieldOffset(0x148)] public fixed byte m_curve3[0x40];
        [FieldOffset(0x188)] public fixed byte m_curve4[0x40];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CVMixAudioMeter {
        [FieldOffset(0x0)] public fixed byte m_name[0x8];
        [FieldOffset(0x8)] public fixed byte m_displayName[0x8];
        [FieldOffset(0x10)] public fixed byte m_nDebugId[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CVMixVocoderProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_desc[0x28];
        [FieldOffset(0x50)] public fixed byte m_paramBandwidth[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CSosGroupActionLimitSchema {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_nMaxCount[0x4];
        [FieldOffset(0xC)] public fixed byte m_nStopType[0x4];
        [FieldOffset(0x10)] public fixed byte m_nSortType[0x4];
        [FieldOffset(0x14)] public fixed byte m_bStopImmediate[0x1];
        [FieldOffset(0x15)] public fixed byte m_bCountStopped[0x3];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct CVoiceContainerAmpedDecayingSineWave {
        [FieldOffset(0x0)] public fixed byte pad_0[0x80];
        [FieldOffset(0x80)] public fixed byte m_flGainAmount[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2C)]
    public unsafe struct VMixAutoFilterDesc_t {
        [FieldOffset(0x0)] public fixed byte m_flEnvelopeAmount[0x4];
        [FieldOffset(0x4)] public fixed byte m_flAttackTimeMS[0x4];
        [FieldOffset(0x8)] public fixed byte m_flReleaseTimeMS[0x4];
        [FieldOffset(0xC)] public fixed byte m_filter[0x10];
        [FieldOffset(0x1C)] public fixed byte m_flLFOAmount[0x4];
        [FieldOffset(0x20)] public fixed byte m_flLFORate[0x4];
        [FieldOffset(0x24)] public fixed byte m_flPhase[0x4];
        [FieldOffset(0x28)] public fixed byte m_nLFOShape[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x24)]
    public unsafe struct VMixDynamicsBand_t {
        [FieldOffset(0x0)] public fixed byte m_fldbGainInput[0x4];
        [FieldOffset(0x4)] public fixed byte m_fldbGainOutput[0x4];
        [FieldOffset(0x8)] public fixed byte m_fldbThresholdBelow[0x4];
        [FieldOffset(0xC)] public fixed byte m_fldbThresholdAbove[0x4];
        [FieldOffset(0x10)] public fixed byte m_flRatioBelow[0x4];
        [FieldOffset(0x14)] public fixed byte m_flRatioAbove[0x4];
        [FieldOffset(0x18)] public fixed byte m_flAttackTimeMS[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flReleaseTimeMS[0x4];
        [FieldOffset(0x20)] public fixed byte m_bEnable[0x1];
        [FieldOffset(0x21)] public fixed byte m_bSolo[0x3];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct VMixEffectChainDesc_t {
        [FieldOffset(0x0)] public fixed byte m_effectName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x48)]
    public unsafe struct CVMixPlateReverbProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_desc[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB8)]
    public unsafe struct CVoiceContainerMultiBlender {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte m_soundsToPlay[0x38];
        [FieldOffset(0xB0)] public fixed byte m_flBlendFactor[0x4];
        [FieldOffset(0xB4)] public fixed byte m_flCrossover[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CVMixVsndInput {
        [FieldOffset(0x0)] public fixed byte m_defaultValue[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CVoiceContainerStaticAdditiveSynth__CGainScalePerInstance {
        [FieldOffset(0x0)] public fixed byte m_flMinVolume[0x4];
        [FieldOffset(0x4)] public fixed byte m_nInstancesAtMinVolume[0x4];
        [FieldOffset(0x8)] public fixed byte m_flMaxVolume[0x4];
        [FieldOffset(0xC)] public fixed byte m_nInstancesAtMaxVolume[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x4)]
    public unsafe struct CVMixParameterEffectName {
        [FieldOffset(0x0)] public fixed byte m_offset[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2)]
    public unsafe struct SndBeatTimeSignature_t {
        [FieldOffset(0x0)] public fixed byte nNumerator[0x1];
        [FieldOffset(0x1)] public fixed byte nDenominator[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct VelocityZone_t {
        [FieldOffset(0x0)] public fixed byte nMaxVel[0x1];
        [FieldOffset(0x1)] public fixed byte nNextSelection[0x1];
        [FieldOffset(0x2)] public fixed byte nNumSamples[0x2];
        [FieldOffset(0x4)] public fixed byte pSamples[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xF0)]
    public unsafe struct CVoiceContainerSelector {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte m_mode[0x8];
        [FieldOffset(0x80)] public fixed byte m_soundsToPlay[0x38];
        [FieldOffset(0xB8)] public fixed byte m_fProbabilityWeights[0x38];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct SndBeatEventKeyedSndEvts_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_strSoundEventName[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CVMixGraphInput {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nOffset[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CSosGroupActionTimeBlockLimitSchema {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_nMaxCount[0x4];
        [FieldOffset(0xC)] public fixed byte m_flMaxDuration[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct SndBeatEventKeyedMidiNotes_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nStatus[0x1];
        [FieldOffset(0x11)] public fixed byte m_nNote[0x1];
        [FieldOffset(0x12)] public fixed byte m_nVelocity[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct CSosGroupActionMemberCountEnvelopeSchema {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_nBaseCount[0x4];
        [FieldOffset(0xC)] public fixed byte m_nTargetCount[0x4];
        [FieldOffset(0x10)] public fixed byte m_flBaseValue[0x4];
        [FieldOffset(0x14)] public fixed byte m_flTargetValue[0x4];
        [FieldOffset(0x18)] public fixed byte m_flAttack[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flDecay[0x4];
        [FieldOffset(0x20)] public fixed byte m_resultVarName[0x8];
        [FieldOffset(0x28)] public fixed byte m_bSaveToGroup[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x68)]
    public unsafe struct CVMixDualCompressorProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_desc[0x34];
        [FieldOffset(0x5C)] public fixed byte m_outParamLevel[0x4];
        [FieldOffset(0x60)] public fixed byte m_outParamdBLevel[0x4];
        [FieldOffset(0x64)] public fixed byte m_outParamReduction[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x90)]
    public unsafe struct CVoiceContainerSwitch {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte m_soundsToPlay[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct CVMixControlMeter {
        [FieldOffset(0x0)] public fixed byte pad_0[0x10];
        [FieldOffset(0x10)] public fixed byte m_nValueIndex[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB8)]
    public unsafe struct CVoiceContainerEnum {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte m_soundsToPlay[0x38];
        [FieldOffset(0xB0)] public fixed byte m_iSelection[0x4];
        [FieldOffset(0xB4)] public fixed byte m_flCrossfadeTime[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct CSosGroupActionTimeLimitSchema {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_flMaxDuration[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x28)]
    public unsafe struct VMixVocoderDesc_t {
        [FieldOffset(0x0)] public fixed byte m_nBandCount[0x4];
        [FieldOffset(0x4)] public fixed byte m_flBandwidth[0x4];
        [FieldOffset(0x8)] public fixed byte m_fldBModGain[0x4];
        [FieldOffset(0xC)] public fixed byte m_flFreqRangeStart[0x4];
        [FieldOffset(0x10)] public fixed byte m_flFreqRangeEnd[0x4];
        [FieldOffset(0x14)] public fixed byte m_fldBUnvoicedGain[0x4];
        [FieldOffset(0x18)] public fixed byte m_flAttackTimeMS[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flReleaseTimeMS[0x4];
        [FieldOffset(0x20)] public fixed byte m_nDebugBand[0x4];
        [FieldOffset(0x24)] public fixed byte m_bPeakMode[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct VMixUtilityDesc_t {
        [FieldOffset(0x0)] public fixed byte m_nOp[0x4];
        [FieldOffset(0x4)] public fixed byte m_flInputPan[0x4];
        [FieldOffset(0x8)] public fixed byte m_flOutputBalance[0x4];
        [FieldOffset(0xC)] public fixed byte m_fldbOutputGain[0x4];
        [FieldOffset(0x10)] public fixed byte m_bBassMono[0x4];
        [FieldOffset(0x14)] public fixed byte m_flBassFreq[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xA8)]
    public unsafe struct CVoiceContainerLoopTrigger {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte m_flRetriggerTimeMin[0x4];
        [FieldOffset(0x7C)] public fixed byte m_flRetriggerTimeMax[0x4];
        [FieldOffset(0x80)] public fixed byte m_flFadeTime[0x4];
        [FieldOffset(0x84)] public fixed byte m_bCrossFade[0x4];
        [FieldOffset(0x88)] public fixed byte m_sound[0x20];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct SndBeatEventKeys_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_flKey[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x80)]
    public unsafe struct CVoiceContainerDecayingSineWave {
        [FieldOffset(0x0)] public fixed byte pad_0[0x78];
        [FieldOffset(0x78)] public fixed byte m_flFrequency[0x4];
        [FieldOffset(0x7C)] public fixed byte m_flDecayTime[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CVMixDelayProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_desc[0x28];
        [FieldOffset(0x50)] public fixed byte m_paramCutoffFrequency[0x4];
        [FieldOffset(0x54)] public fixed byte m_paramDelay[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x78)]
    public unsafe struct CVMixBoxverb2ProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_desc[0x50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct VMixFilterDesc_t {
        [FieldOffset(0x0)] public fixed byte m_fldbGain[0x4];
        [FieldOffset(0x4)] public fixed byte m_flCutoffFreq[0x4];
        [FieldOffset(0x8)] public fixed byte m_flQ[0x4];
        [FieldOffset(0xC)] public fixed byte m_nFilterType[0x1];
        [FieldOffset(0xD)] public fixed byte m_nFilterSlope[0x1];
        [FieldOffset(0xE)] public fixed byte m_bEnabled[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB8)]
    public unsafe struct CSndBeatPattern {
        [FieldOffset(0x0)] public fixed byte m_name[0xC];
        [FieldOffset(0xC)] public fixed byte m_flSyncPriority[0x4];
        [FieldOffset(0x10)] public fixed byte m_syncStartType[0x4];
        [FieldOffset(0x14)] public fixed byte m_syncType[0x4];
        [FieldOffset(0x18)] public fixed byte m_timeSignature[0x8];
        [FieldOffset(0x20)] public fixed byte m_flLength[0x4];
        [FieldOffset(0x24)] public fixed byte m_bLooping[0x4];
        [FieldOffset(0x28)] public fixed byte m_playEventType[0x4];
        [FieldOffset(0x2C)] public fixed byte m_flPlayBeatMult[0x4];
        [FieldOffset(0x30)] public fixed byte m_playKeyType[0x8];
        [FieldOffset(0x38)] public fixed byte m_vecPatternKeys[0x18];
        [FieldOffset(0x50)] public fixed byte m_vecPatternFloats[0x18];
        [FieldOffset(0x68)] public fixed byte m_vecPatternSndEvts[0x18];
        [FieldOffset(0x80)] public fixed byte m_vecPatternMidi[0x18];
        [FieldOffset(0x98)] public fixed byte m_syncEventType[0x4];
        [FieldOffset(0x9C)] public fixed byte m_flSyncBeatMult[0x4];
        [FieldOffset(0xA0)] public fixed byte m_vecSyncPatternKeys[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CSubmix {
        [FieldOffset(0x0)] public fixed byte pad_0[0x50];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct VMixOscDesc_t {
        [FieldOffset(0x0)] public fixed byte oscType[0x4];
        [FieldOffset(0x4)] public fixed byte m_freq[0x4];
        [FieldOffset(0x8)] public fixed byte m_flPhase[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x58)]
    public unsafe struct CVMixAutoFilterProcessorDesc {
        [FieldOffset(0x0)] public fixed byte pad_0[0x28];
        [FieldOffset(0x28)] public fixed byte m_desc[0x30];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct ISndSeqInstruments {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x24)]
    public unsafe struct VMixFlangerDesc_t {
        [FieldOffset(0x0)] public fixed byte m_bPhaseInvert[0x4];
        [FieldOffset(0x4)] public fixed byte m_flGlideTime[0x4];
        [FieldOffset(0x8)] public fixed byte m_flDelay[0x4];
        [FieldOffset(0xC)] public fixed byte m_flOutputGain[0x4];
        [FieldOffset(0x10)] public fixed byte m_flFeedbackGain[0x4];
        [FieldOffset(0x14)] public fixed byte m_flFeedforwardGain[0x4];
        [FieldOffset(0x18)] public fixed byte m_flModRate[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flModDepth[0x4];
        [FieldOffset(0x20)] public fixed byte m_bApplyAntialiasing[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x30)]
    public unsafe struct VMixDynamicsDesc_t {
        [FieldOffset(0x0)] public fixed byte m_fldbGain[0x4];
        [FieldOffset(0x4)] public fixed byte m_fldbNoiseGateThreshold[0x4];
        [FieldOffset(0x8)] public fixed byte m_fldbCompressionThreshold[0x4];
        [FieldOffset(0xC)] public fixed byte m_fldbLimiterThreshold[0x4];
        [FieldOffset(0x10)] public fixed byte m_fldbKneeWidth[0x4];
        [FieldOffset(0x14)] public fixed byte m_flRatio[0x4];
        [FieldOffset(0x18)] public fixed byte m_flLimiterRatio[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flAttackTimeMS[0x4];
        [FieldOffset(0x20)] public fixed byte m_flReleaseTimeMS[0x4];
        [FieldOffset(0x24)] public fixed byte m_flRMSTimeMS[0x4];
        [FieldOffset(0x28)] public fixed byte m_flWetMix[0x4];
        [FieldOffset(0x2C)] public fixed byte m_bPeakMode[0x4];
    }
}