/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Total Offsets   : 202
/*  Dumped At       : 13:50 05/11/2026 (GMT)
/*  Dumped In       : 1,2s
*/

/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

#pragma once
#include <cstddef>
#include <cstdint>

namespace cs2::server_dll {

enum class CLogicBranchList__LogicBranchListenerLastState_t : std::int32_t {
    LOGIC_BRANCH_LISTENER_NOT_INIT = 0,
    LOGIC_BRANCH_LISTENER_ALL_TRUE = 1,
    LOGIC_BRANCH_LISTENER_ALL_FALSE = 2,
    LOGIC_BRANCH_LISTENER_MIXED = 3,
};

enum class CFuncMover__Move_t : std::int32_t {
    MOVE_LOOP = 0,
    MOVE_OSCILLATE = 1,
    MOVE_STOP_AT_END = 2,
};

enum class CFuncRotator__Rotate_t : std::int32_t {
    ROTATE_LOOP = 0,
    ROTATE_OSCILLATE = 1,
    ROTATE_STOP_AT_END = 2,
    ROTATE_LOOK_AT_TARGET = 3,
    ROTATE_LOOK_AT_TARGET_ONLY_YAW = 4,
    ROTATE_LOOK_AT_TARGET_ONLY_PITCH = 5,
    ROTATE_RETURN_TO_INITIAL_ORIENTATION = 6,
};

enum class CFuncRotator__RotationAxis_t : std::int32_t {
    ROTATION_AXIS_UNDEFINED = 0,
    ROTATION_AXIS_YAW = 1,
    ROTATION_AXIS_PITCH = 2,
    ROTATION_AXIS_ROLL = 3,
};

enum class PulseBestOutflowRules_t : std::int32_t {
    SORT_BY_NUMBER_OF_VALID_CRITERIA = 0,
    SORT_BY_OUTFLOW_INDEX = 1,
};

enum class CPhysicsProp__CrateType_t : std::int32_t {
    CRATE_SPECIFIC_ITEM = 0,
    CRATE_TYPE_COUNT = 1,
};

enum class CFuncMover__FindFollowMoverStrategy_t : std::int32_t {
    FIND_FOLLOW_MOVER_FORWARD_CLOSEST = 0,
    FIND_FOLLOW_MOVER_REVERSE_CLOSEST = 1,
    FIND_FOLLOW_MOVER_BIDIRECTIONAL_CLOSEST = 2,
};

enum class CPathMoverEntitySpawner__TemplateChoiceStrategy_t : std::int32_t {
    TEMPLATE_CHOICE_COUNT_SEQUENTIAL = 0,
    TEMPLATE_CHOICE_WEIGHTED_RANDOM = 1,
    TEMPLATE_CHOICE_COUNT_RANDOM = 2,
};

enum class PulseCursorCancelPriority_t : std::int32_t {
    None = 0,
    CancelOnSucceeded = 1,
    SoftCancel = 2,
    HardCancel = 3,
};

enum class PulseMethodCallMode_t : std::int32_t {
    SYNC_WAIT_FOR_COMPLETION = 0,
    ASYNC_FIRE_AND_FORGET = 1,
};

enum class CFuncMover__FollowConstraint_t : std::int32_t {
    FOLLOW_CONSTRAINT_DISTANCE = 0,
    FOLLOW_CONSTRAINT_SPRING = 1,
    FOLLOW_CONSTRAINT_RATIO = 2,
    FOLLOW_CONSTRAINT_COUPLER = 3,
};

enum class CFuncMover__FollowEntityDirection_t : std::int32_t {
    FOLLOW_ENTITY_BIDIRECTIONAL = 0,
    FOLLOW_ENTITY_FORWARD = 1,
    FOLLOW_ENTITY_REVERSE = 2,
};

enum class CFuncMover__PathRebuildStrategy_t : std::int32_t {
    PATH_REBUILD_DONT_MOVE = 0,
    PATH_REBUILD_MAINTAIN_T = 1,
    PATH_REBUILD_USE_CURRENT_NODE_T = 2,
};

enum class CFuncMover__TransitionToPathNodeAction_t : std::int32_t {
    TRANSITION_TO_PATH_NODE_ACTION_NONE = 0,
    TRANSITION_TO_PATH_NODE_ACTION_START_FORWARD = 1,
    TRANSITION_TO_PATH_NODE_ACTION_START_REVERSE = 2,
    TRANSITION_TO_PATH_NODE_TRANSITIONING = 3,
};

enum class PulseCursorWakePriority_t : std::int32_t {
    WakeElegantly = 0,
    WakeImmediate = 1,
};

enum class CFuncMover__OrientationUpdate_t : std::int32_t {
    ORIENTATION_FORWARD_PATH = 0,
    ORIENTATION_FORWARD_PATH_AND_FIXED_PITCH = 1,
    ORIENTATION_FORWARD_PATH_AND_UP_CONTROL_POINT = 2,
    ORIENTATION_MATCH_CONTROL_POINT = 3,
    ORIENTATION_FIXED = 4,
    ORIENTATION_FACE_PLAYER = 5,
    ORIENTATION_FORWARD_MOVEMENT_DIRECTION = 6,
    ORIENTATION_FORWARD_MOVEMENT_DIRECTION_AND_UP_CONTROL_POINT = 7,
    ORIENTATION_FACE_ENTITY = 8,
};

enum class PropDoorRotatingOpenDirection_e : std::int32_t {
    DOOR_ROTATING_OPEN_BOTH_WAYS = 0,
    DOOR_ROTATING_OPEN_FORWARD = 1,
    DOOR_ROTATING_OPEN_BACKWARD = 2,
};

enum class PulseCollisionGroup_t : std::int32_t {
    DEFAULT = 0,
};

enum class SceneOnPlayerDeath_t : std::int32_t {
    SCENE_ONPLAYERDEATH_DO_NOTHING = 0,
    SCENE_ONPLAYERDEATH_CANCEL = 1,
};

enum class LessonPanelLayoutFileTypes_t : std::int32_t {
    LAYOUT_HAND_DEFAULT = 0,
    LAYOUT_WORLD_DEFAULT = 1,
    LAYOUT_CUSTOM = 2,
};

enum class TimelineCompression_t : std::int32_t {
    TIMELINE_COMPRESSION_SUM = 0,
    TIMELINE_COMPRESSION_COUNT_PER_INTERVAL = 1,
    TIMELINE_COMPRESSION_AVERAGE = 2,
    TIMELINE_COMPRESSION_AVERAGE_BLEND = 3,
    TIMELINE_COMPRESSION_TOTAL = 4,
};

enum class CustomCameraMode_t : std::int32_t {
    CUSTOM_CAMERA_MODE_DISABLED = 0,
    CUSTOM_CAMERA_MODE_CONTROLLED = 1,
    CUSTOM_CAMERA_MODE_CONTROLLED_POSITION = 2,
    CUSTOM_CAMERA_MODE_FOLLOW_POSITION = 3,
};

enum class SubclassVDataChangeType_t : std::int32_t {
    SUBCLASS_VDATA_CREATED = 0,
    SUBCLASS_VDATA_SUBCLASS_CHANGED = 1,
    SUBCLASS_VDATA_RELOADED = 2,
};

enum class C4LightEffect_t : std::int32_t {
    eLightEffectNone = 0,
    eLightEffectDropped = 1,
    eLightEffectThirdPersonHeld = 2,
};

enum class StanceType_t : std::int32_t {
    STANCE_CURRENT = -1,
    STANCE_DEFAULT = 0,
    STANCE_CROUCHING = 1,
    STANCE_PRONE = 2,
    NUM_STANCES = 3,
};

enum class Explosions : std::int32_t {
    expRandom = 0,
    expDirected = 1,
    expUsePrecise = 2,
};

enum class PreviewCharacterMode : std::int32_t {
    INVALID = -1,
    DIORAMA = 0,
    MAIN_MENU = 1,
    BUY_MENU = 2,
    TEAM_SELECT = 3,
    END_OF_MATCH = 4,
    INVENTORY_INSPECT = 5,
    WALKING = 6,
    TEAM_INTRO = 7,
    WINGMAN_INTRO = 8,
    RUSH_INTRO = 9,
    BANNER = 10,
    CHICK_SNAPSHOT = 11,
    CHICK_VIEWMODEL = 12,
};

enum class ObserverInterpState_t : std::int32_t {
    OBSERVER_INTERP_NONE = 0,
    OBSERVER_INTERP_STARTING = 1,
    OBSERVER_INTERP_TRAVELING = 2,
    OBSERVER_INTERP_SETTLING = 3,
};

enum class ENetworkDisconnectionReason : std::int32_t {
    NETWORK_DISCONNECT_INVALID = 0,
    NETWORK_DISCONNECT_SHUTDOWN = 1,
    NETWORK_DISCONNECT_DISCONNECT_BY_USER = 2,
    NETWORK_DISCONNECT_DISCONNECT_BY_SERVER = 3,
    NETWORK_DISCONNECT_LOST = 4,
    NETWORK_DISCONNECT_OVERFLOW = 5,
    NETWORK_DISCONNECT_STEAM_BANNED = 6,
    NETWORK_DISCONNECT_STEAM_INUSE = 7,
    NETWORK_DISCONNECT_STEAM_TICKET = 8,
    NETWORK_DISCONNECT_STEAM_LOGON = 9,
    NETWORK_DISCONNECT_STEAM_AUTHCANCELLED = 10,
    NETWORK_DISCONNECT_STEAM_AUTHALREADYUSED = 11,
    NETWORK_DISCONNECT_STEAM_AUTHINVALID = 12,
    NETWORK_DISCONNECT_STEAM_VACBANSTATE = 13,
    NETWORK_DISCONNECT_STEAM_LOGGED_IN_ELSEWHERE = 14,
    NETWORK_DISCONNECT_STEAM_VAC_CHECK_TIMEDOUT = 15,
    NETWORK_DISCONNECT_STEAM_DROPPED = 16,
    NETWORK_DISCONNECT_STEAM_OWNERSHIP = 17,
    NETWORK_DISCONNECT_SERVERINFO_OVERFLOW = 18,
    NETWORK_DISCONNECT_TICKMSG_OVERFLOW = 19,
    NETWORK_DISCONNECT_STRINGTABLEMSG_OVERFLOW = 20,
    NETWORK_DISCONNECT_DELTAENTMSG_OVERFLOW = 21,
    NETWORK_DISCONNECT_TEMPENTMSG_OVERFLOW = 22,
    NETWORK_DISCONNECT_SOUNDSMSG_OVERFLOW = 23,
    NETWORK_DISCONNECT_SNAPSHOTOVERFLOW = 24,
    NETWORK_DISCONNECT_SNAPSHOTERROR = 25,
    NETWORK_DISCONNECT_RELIABLEOVERFLOW = 26,
    NETWORK_DISCONNECT_BADDELTATICK = 27,
    NETWORK_DISCONNECT_NOMORESPLITS = 28,
    NETWORK_DISCONNECT_TIMEDOUT = 29,
    NETWORK_DISCONNECT_DISCONNECTED = 30,
    NETWORK_DISCONNECT_LEAVINGSPLIT = 31,
    NETWORK_DISCONNECT_DIFFERENTCLASSTABLES = 32,
    NETWORK_DISCONNECT_BADRELAYPASSWORD = 33,
    NETWORK_DISCONNECT_BADSPECTATORPASSWORD = 34,
    NETWORK_DISCONNECT_HLTVRESTRICTED = 35,
    NETWORK_DISCONNECT_NOSPECTATORS = 36,
    NETWORK_DISCONNECT_HLTVUNAVAILABLE = 37,
    NETWORK_DISCONNECT_HLTVSTOP = 38,
    NETWORK_DISCONNECT_KICKED = 39,
    NETWORK_DISCONNECT_BANADDED = 40,
    NETWORK_DISCONNECT_KICKBANADDED = 41,
    NETWORK_DISCONNECT_HLTVDIRECT = 42,
    NETWORK_DISCONNECT_PURESERVER_CLIENTEXTRA = 43,
    NETWORK_DISCONNECT_PURESERVER_MISMATCH = 44,
    NETWORK_DISCONNECT_USERCMD = 45,
    NETWORK_DISCONNECT_REJECTED_BY_GAME = 46,
    NETWORK_DISCONNECT_MESSAGE_PARSE_ERROR = 47,
    NETWORK_DISCONNECT_INVALID_MESSAGE_ERROR = 48,
    NETWORK_DISCONNECT_BAD_SERVER_PASSWORD = 49,
    NETWORK_DISCONNECT_DIRECT_CONNECT_RESERVATION = 50,
    NETWORK_DISCONNECT_CONNECTION_FAILURE = 51,
    NETWORK_DISCONNECT_NO_PEER_GROUP_HANDLERS = 52,
    NETWORK_DISCONNECT_RECONNECTION = 53,
    NETWORK_DISCONNECT_LOOPSHUTDOWN = 54,
    NETWORK_DISCONNECT_LOOPDEACTIVATE = 55,
    NETWORK_DISCONNECT_HOST_ENDGAME = 56,
    NETWORK_DISCONNECT_LOOP_LEVELLOAD_ACTIVATE = 57,
    NETWORK_DISCONNECT_CREATE_SERVER_FAILED = 58,
    NETWORK_DISCONNECT_EXITING = 59,
    NETWORK_DISCONNECT_REQUEST_HOSTSTATE_IDLE = 60,
    NETWORK_DISCONNECT_REQUEST_HOSTSTATE_HLTVRELAY = 61,
    NETWORK_DISCONNECT_CLIENT_CONSISTENCY_FAIL = 62,
    NETWORK_DISCONNECT_CLIENT_UNABLE_TO_CRC_MAP = 63,
    NETWORK_DISCONNECT_CLIENT_NO_MAP = 64,
    NETWORK_DISCONNECT_CLIENT_DIFFERENT_MAP = 65,
    NETWORK_DISCONNECT_SERVER_REQUIRES_STEAM = 66,
    NETWORK_DISCONNECT_STEAM_DENY_MISC = 67,
    NETWORK_DISCONNECT_STEAM_DENY_BAD_ANTI_CHEAT = 68,
    NETWORK_DISCONNECT_SERVER_SHUTDOWN = 69,
    NETWORK_DISCONNECT_REPLAY_INCOMPATIBLE = 71,
    NETWORK_DISCONNECT_CONNECT_REQUEST_TIMEDOUT = 72,
    NETWORK_DISCONNECT_SERVER_INCOMPATIBLE = 73,
    NETWORK_DISCONNECT_LOCALPROBLEM_MANYRELAYS = 74,
    NETWORK_DISCONNECT_LOCALPROBLEM_HOSTEDSERVERPRIMARYRELAY = 75,
    NETWORK_DISCONNECT_LOCALPROBLEM_NETWORKCONFIG = 76,
    NETWORK_DISCONNECT_LOCALPROBLEM_OTHER = 77,
    NETWORK_DISCONNECT_REMOTE_TIMEOUT = 79,
    NETWORK_DISCONNECT_REMOTE_TIMEOUT_CONNECTING = 80,
    NETWORK_DISCONNECT_REMOTE_OTHER = 81,
    NETWORK_DISCONNECT_REMOTE_BADCRYPT = 82,
    NETWORK_DISCONNECT_REMOTE_CERTNOTTRUSTED = 83,
    NETWORK_DISCONNECT_UNUSUAL = 84,
    NETWORK_DISCONNECT_INTERNAL_ERROR = 85,
    NETWORK_DISCONNECT_REJECT_BADCHALLENGE = 128,
    NETWORK_DISCONNECT_REJECT_NOLOBBY = 129,
    NETWORK_DISCONNECT_REJECT_BACKGROUND_MAP = 130,
    NETWORK_DISCONNECT_REJECT_SINGLE_PLAYER = 131,
    NETWORK_DISCONNECT_REJECT_HIDDEN_GAME = 132,
    NETWORK_DISCONNECT_REJECT_LANRESTRICT = 133,
    NETWORK_DISCONNECT_REJECT_BADPASSWORD = 134,
    NETWORK_DISCONNECT_REJECT_SERVERFULL = 135,
    NETWORK_DISCONNECT_REJECT_INVALIDRESERVATION = 136,
    NETWORK_DISCONNECT_REJECT_FAILEDCHANNEL = 137,
    NETWORK_DISCONNECT_REJECT_CONNECT_FROM_LOBBY = 138,
    NETWORK_DISCONNECT_REJECT_RESERVED_FOR_LOBBY = 139,
    NETWORK_DISCONNECT_REJECT_INVALIDKEYLENGTH = 140,
    NETWORK_DISCONNECT_REJECT_OLDPROTOCOL = 141,
    NETWORK_DISCONNECT_REJECT_NEWPROTOCOL = 142,
    NETWORK_DISCONNECT_REJECT_INVALIDCONNECTION = 143,
    NETWORK_DISCONNECT_REJECT_INVALIDCERTLEN = 144,
    NETWORK_DISCONNECT_REJECT_INVALIDSTEAMCERTLEN = 145,
    NETWORK_DISCONNECT_REJECT_STEAM = 146,
    NETWORK_DISCONNECT_REJECT_SERVERAUTHDISABLED = 147,
    NETWORK_DISCONNECT_REJECT_SERVERCDKEYAUTHINVALID = 148,
    NETWORK_DISCONNECT_REJECT_BANNED = 149,
    NETWORK_DISCONNECT_KICKED_TEAMKILLING = 150,
    NETWORK_DISCONNECT_KICKED_TK_START = 151,
    NETWORK_DISCONNECT_KICKED_UNTRUSTEDACCOUNT = 152,
    NETWORK_DISCONNECT_KICKED_CONVICTEDACCOUNT = 153,
    NETWORK_DISCONNECT_KICKED_COMPETITIVECOOLDOWN = 154,
    NETWORK_DISCONNECT_KICKED_TEAMHURTING = 155,
    NETWORK_DISCONNECT_KICKED_HOSTAGEKILLING = 156,
    NETWORK_DISCONNECT_KICKED_VOTEDOFF = 157,
    NETWORK_DISCONNECT_KICKED_IDLE = 158,
    NETWORK_DISCONNECT_KICKED_SUICIDE = 159,
    NETWORK_DISCONNECT_KICKED_NOSTEAMLOGIN = 160,
    NETWORK_DISCONNECT_KICKED_NOSTEAMTICKET = 161,
    NETWORK_DISCONNECT_KICKED_INPUTAUTOMATION = 162,
    NETWORK_DISCONNECT_KICKED_VACNETABNORMALBEHAVIOR = 163,
    NETWORK_DISCONNECT_KICKED_INSECURECLIENT = 164,
};

enum class WorldTextPanelOrientation_t : std::int32_t {
    WORLDTEXT_ORIENTATION_DEFAULT = 0,
    WORLDTEXT_ORIENTATION_FACEUSER = 1,
    WORLDTEXT_ORIENTATION_FACEUSER_UPRIGHT = 2,
};

enum class EDestructibleParts_DestroyParameterFlags : std::int32_t {
    None = 0,
    GenerateBreakpieces = 1,
    SetBodyGroupAndCollisionState = 2,
    EnableFlinches = 4,
    ForceDamageApply = 8,
    IgnoreKillEntityFlag = 16,
    IgnoreHealthCheck = 32,
    ApplyPhysicsForce = 64,
    Default = 7,
};

enum class DIALOG_TYPE : std::int32_t {
    DIALOG_MSG = 0,
    DIALOG_MENU = 1,
    DIALOG_TEXT = 2,
    DIALOG_ENTRY = 3,
    DIALOG_ASKCONNECT = 4,
};

enum class WorldTextPanelHorizontalAlign_t : std::int32_t {
    WORLDTEXT_HORIZONTAL_ALIGN_LEFT = 0,
    WORLDTEXT_HORIZONTAL_ALIGN_CENTER = 1,
    WORLDTEXT_HORIZONTAL_ALIGN_RIGHT = 2,
};

enum class SequenceFinishNotifyState_t : std::int32_t {
    eDoNotNotify = 0,
    eNotifyWhenFinished = 1,
    eNotifyTriggered = 2,
};

enum class SoundEventStartType_t : std::int32_t {
    SOUNDEVENT_START_PLAYER = 0,
    SOUNDEVENT_START_WORLD = 1,
    SOUNDEVENT_START_ENTITY = 2,
};

enum class EDemoCommands : std::int32_t {
    DEM_Error = -1,
    DEM_Stop = 0,
    DEM_FileHeader = 1,
    DEM_FileInfo = 2,
    DEM_SyncTick = 3,
    DEM_SendTables = 4,
    DEM_ClassInfo = 5,
    DEM_StringTables = 6,
    DEM_Packet = 7,
    DEM_SignonPacket = 8,
    DEM_ConsoleCmd = 9,
    DEM_CustomData = 10,
    DEM_CustomDataCallbacks = 11,
    DEM_UserCmd = 12,
    DEM_FullPacket = 13,
    DEM_SaveGame = 14,
    DEM_SpawnGroups = 15,
    DEM_AnimationData = 16,
    DEM_AnimationHeader = 17,
    DEM_Recovery = 18,
    DEM_Max = 19,
    DEM_IsCompressed = 64,
};

enum class ChoreoLookAtConditions_t : std::int32_t {
    WHILE_MOVING = 1,
    WHILE_ANIMATING = 2,
    DURING_OUTRO = 4,
};

enum class soundcommands_t : std::int32_t {
    SOUNDCTRL_CHANGE_VOLUME = 0,
    SOUNDCTRL_CHANGE_PITCH = 1,
    SOUNDCTRL_STOP = 2,
    SOUNDCTRL_DESTROY = 3,
    SOUNDCTRL_FADEOUT = 4,
};

enum class AnimGraphDebugDrawType_t : std::int32_t {
    None = 0,
    WsPosition = 1,
    MsPosition = 2,
    WsDirection = 3,
    MsDirection = 4,
};

enum class TrainOrientationType_t : std::int32_t {
    TrainOrientation_Fixed = 0,
    TrainOrientation_AtPathTracks = 1,
    TrainOrientation_LinearBlend = 2,
    TrainOrientation_EaseInEaseOut = 3,
};

enum class CInfoChoreoLocatorShapeType_t : std::int32_t {
    POINT = 0,
    LINE = 1,
    RADIUS = 2,
    COUNT = 3,
    NONE = 4,
};

enum class CSWeaponCategory : std::int32_t {
    WEAPONCATEGORY_OTHER = 0,
    WEAPONCATEGORY_MELEE = 1,
    WEAPONCATEGORY_SECONDARY = 2,
    WEAPONCATEGORY_SMG = 3,
    WEAPONCATEGORY_RIFLE = 4,
    WEAPONCATEGORY_HEAVY = 5,
    WEAPONCATEGORY_COUNT = 6,
};

enum class BeginDeathLifeStateTransition_t : std::int32_t {
    TRANSITION_TO_LIFESTATE_DYING = 0,
    TRANSITION_TO_LIFESTATE_DEAD = 1,
};

enum class EGCItemCustomizationNotification : std::int32_t {
    k_EGCItemCustomizationNotification_NameItem = 1006,
    k_EGCItemCustomizationNotification_UnlockCrate = 1007,
    k_EGCItemCustomizationNotification_XRayItemReveal = 1008,
    k_EGCItemCustomizationNotification_XRayItemClaim = 1009,
    k_EGCItemCustomizationNotification_CasketTooFull = 1011,
    k_EGCItemCustomizationNotification_CasketContents = 1012,
    k_EGCItemCustomizationNotification_CasketAdded = 1013,
    k_EGCItemCustomizationNotification_CasketRemoved = 1014,
    k_EGCItemCustomizationNotification_CasketInvFull = 1015,
    k_EGCItemCustomizationNotification_NameBaseItem = 1019,
    k_EGCItemCustomizationNotification_RemoveItemName = 1030,
    k_EGCItemCustomizationNotification_RemoveSticker = 1053,
    k_EGCItemCustomizationNotification_ExtractSticker = 1054,
    k_EGCItemCustomizationNotification_EncapsulateSticker = 1055,
    k_EGCItemCustomizationNotification_ApplySticker = 1086,
    k_EGCItemCustomizationNotification_StatTrakSwap = 1088,
    k_EGCItemCustomizationNotification_RemovePatch = 1089,
    k_EGCItemCustomizationNotification_ApplyPatch = 1090,
    k_EGCItemCustomizationNotification_ApplyKeychain = 1091,
    k_EGCItemCustomizationNotification_RemoveKeychain = 1092,
    k_EGCItemCustomizationNotification_ActivateFanToken = 9178,
    k_EGCItemCustomizationNotification_ActivateOperationCoin = 9179,
    k_EGCItemCustomizationNotification_GraffitiUnseal = 9185,
    k_EGCItemCustomizationNotification_GenerateSouvenir = 9204,
    k_EGCItemCustomizationNotification_ClientRedeemMissionReward = 9209,
    k_EGCItemCustomizationNotification_ClientRedeemFreeReward = 9219,
    k_EGCItemCustomizationNotification_XpShopUseTicket = 9221,
    k_EGCItemCustomizationNotification_XpShopAckTracks = 9222,
};

enum class PointOrientGoalDirectionType_t : std::int32_t {
    eAbsOrigin = 0,
    eCenter = 1,
    eHead = 2,
    eForward = 3,
    eEyesForward = 4,
};

enum class ItemFlagTypes_t : std::int32_t {
    ITEM_FLAG_NONE = 0,
    ITEM_FLAG_CAN_SELECT_WITHOUT_AMMO = 1,
    ITEM_FLAG_NOAUTORELOAD = 2,
    ITEM_FLAG_NOAUTOSWITCHEMPTY = 4,
    ITEM_FLAG_LIMITINWORLD = 8,
    ITEM_FLAG_EXHAUSTIBLE = 16,
    ITEM_FLAG_DOHITLOCATIONDMG = 32,
    ITEM_FLAG_NOAMMOPICKUPS = 64,
    ITEM_FLAG_NOITEMPICKUP = 128,
};

enum class SurroundingBoundsType_t : std::int32_t {
    USE_OBB_COLLISION_BOUNDS = 0,
    USE_BEST_COLLISION_BOUNDS = 1,
    USE_HITBOXES = 2,
    USE_SPECIFIED_BOUNDS = 3,
    USE_GAME_CODE = 4,
    USE_ROTATION_EXPANDED_BOUNDS = 5,
    USE_ROTATION_EXPANDED_ORIENTED_BOUNDS = 6,
    USE_COLLISION_BOUNDS_NEVER_VPHYSICS = 7,
    USE_ROTATION_EXPANDED_SEQUENCE_BOUNDS = 8,
    SURROUNDING_TYPE_BIT_COUNT = 3,
};

enum class LifeState_t : std::int32_t {
    LIFE_ALIVE = 0,
    LIFE_DYING = 1,
    LIFE_DEAD = 2,
    LIFE_RESPAWNABLE = 3,
    LIFE_RESPAWNING = 4,
    NUM_LIFESTATES = 5,
};

enum class PointOrientConstraint_t : std::int32_t {
    eNone = 0,
    ePreserveUpAxis = 1,
};

enum class EHitGroup : std::int32_t {
    EHG_Generic = 0,
    EHG_Head = 1,
    EHG_Chest = 2,
    EHG_Stomach = 3,
    EHG_LeftArm = 4,
    EHG_RightArm = 5,
    EHG_LeftLeg = 6,
    EHG_RightLeg = 7,
    EHG_Gear = 8,
    EHG_Miss = 9,
};

enum class NPCFollowFormation_t : std::int32_t {
    Default = -1,
    CloseCircle = 0,
    WideCircle = 1,
    MediumCircle = 5,
    Sidekick = 6,
};

enum class SVC_Messages : std::int32_t {
    svc_ServerInfo = 40,
    svc_FlattenedSerializer = 41,
    svc_ClassInfo = 42,
    svc_SetPause = 43,
    svc_CreateStringTable = 44,
    svc_UpdateStringTable = 45,
    svc_VoiceInit = 46,
    svc_VoiceData = 47,
    svc_Print = 48,
    svc_Sounds = 49,
    svc_SetView = 50,
    svc_ClearAllStringTables = 51,
    svc_CmdKeyValues = 52,
    svc_BSPDecal = 53,
    svc_SplitScreen = 54,
    svc_PacketEntities = 55,
    svc_Prefetch = 56,
    svc_Menu = 57,
    svc_GetCvarValue = 58,
    svc_StopSound = 59,
    svc_PeerList = 60,
    svc_PacketReliable = 61,
    svc_HLTVStatus = 62,
    svc_ServerSteamID = 63,
    svc_FullFrameSplit = 70,
    svc_RconServerDetails = 71,
    svc_UserMessage = 72,
    svc_Broadcast_Command = 74,
    svc_HltvFixupOperatorStatus = 75,
    svc_UserCmds = 76,
    svc_NextMsgPredicted = 77,
    svc_EncryptedData = 78,
};

enum class QuestType : std::int32_t {
    k_EQuestType_Operation = 1,
    k_EQuestType_RecurringMission = 2,
};

enum class ECsgoGCMsg : std::int32_t {
    k_EMsgGCCStrike15_v2_Base = 9100,
    k_EMsgGCCStrike15_v2_MatchmakingStart = 9101,
    k_EMsgGCCStrike15_v2_MatchmakingStop = 9102,
    k_EMsgGCCStrike15_v2_MatchmakingClient2ServerPing = 9103,
    k_EMsgGCCStrike15_v2_MatchmakingGC2ClientUpdate = 9104,
    k_EMsgGCCStrike15_v2_MatchmakingServerReservationResponse = 9106,
    k_EMsgGCCStrike15_v2_MatchmakingGC2ClientReserve = 9107,
    k_EMsgGCCStrike15_v2_MatchmakingClient2GCHello = 9109,
    k_EMsgGCCStrike15_v2_MatchmakingGC2ClientHello = 9110,
    k_EMsgGCCStrike15_v2_MatchmakingGC2ClientAbandon = 9112,
    k_EMsgGCCStrike15_v2_MatchmakingOperator2GCBlogUpdate = 9117,
    k_EMsgGCCStrike15_v2_ServerNotificationForUserPenalty = 9118,
    k_EMsgGCCStrike15_v2_ClientReportPlayer = 9119,
    k_EMsgGCCStrike15_v2_ClientReportServer = 9120,
    k_EMsgGCCStrike15_v2_ClientCommendPlayer = 9121,
    k_EMsgGCCStrike15_v2_ClientReportResponse = 9122,
    k_EMsgGCCStrike15_v2_ClientCommendPlayerQuery = 9123,
    k_EMsgGCCStrike15_v2_ClientCommendPlayerQueryResponse = 9124,
    k_EMsgGCCStrike15_v2_WatchInfoUsers = 9126,
    k_EMsgGCCStrike15_v2_ClientRequestPlayersProfile = 9127,
    k_EMsgGCCStrike15_v2_PlayersProfile = 9128,
    k_EMsgGCCStrike15_v2_PlayerOverwatchCaseUpdate = 9131,
    k_EMsgGCCStrike15_v2_PlayerOverwatchCaseAssignment = 9132,
    k_EMsgGCCStrike15_v2_PlayerOverwatchCaseStatus = 9133,
    k_EMsgGCCStrike15_v2_GC2ClientTextMsg = 9134,
    k_EMsgGCCStrike15_v2_Client2GCTextMsg = 9135,
    k_EMsgGCCStrike15_v2_MatchEndRunRewardDrops = 9136,
    k_EMsgGCCStrike15_v2_MatchEndRewardDropsNotification = 9137,
    k_EMsgGCCStrike15_v2_ClientRequestWatchInfoFriends2 = 9138,
    k_EMsgGCCStrike15_v2_MatchList = 9139,
    k_EMsgGCCStrike15_v2_MatchListRequestCurrentLiveGames = 9140,
    k_EMsgGCCStrike15_v2_MatchListRequestRecentUserGames = 9141,
    k_EMsgGCCStrike15_v2_GC2ServerReservationUpdate = 9142,
    k_EMsgGCCStrike15_v2_ClientVarValueNotificationInfo = 9144,
    k_EMsgGCCStrike15_v2_MatchListRequestTournamentGames = 9146,
    k_EMsgGCCStrike15_v2_MatchListRequestFullGameInfo = 9147,
    k_EMsgGCCStrike15_v2_GiftsLeaderboardRequest = 9148,
    k_EMsgGCCStrike15_v2_GiftsLeaderboardResponse = 9149,
    k_EMsgGCCStrike15_v2_ServerVarValueNotificationInfo = 9150,
    k_EMsgGCCStrike15_v2_ClientSubmitSurveyVote = 9152,
    k_EMsgGCCStrike15_v2_Server2GCClientValidate = 9153,
    k_EMsgGCCStrike15_v2_MatchListRequestLiveGameForUser = 9154,
    k_EMsgGCCStrike15_v2_Client2GCEconPreviewDataBlockRequest = 9156,
    k_EMsgGCCStrike15_v2_Client2GCEconPreviewDataBlockResponse = 9157,
    k_EMsgGCCStrike15_v2_AccountPrivacySettings = 9158,
    k_EMsgGCCStrike15_v2_SetMyActivityInfo = 9159,
    k_EMsgGCCStrike15_v2_MatchListRequestTournamentPredictions = 9160,
    k_EMsgGCCStrike15_v2_MatchListUploadTournamentPredictions = 9161,
    k_EMsgGCCStrike15_v2_DraftSummary = 9162,
    k_EMsgGCCStrike15_v2_ClientRequestJoinFriendData = 9163,
    k_EMsgGCCStrike15_v2_ClientRequestJoinServerData = 9164,
    k_EMsgGCCStrike15_v2_GC2ClientTournamentInfo = 9167,
    k_EMsgGC_GlobalGame_Subscribe = 9168,
    k_EMsgGC_GlobalGame_Unsubscribe = 9169,
    k_EMsgGC_GlobalGame_Play = 9170,
    k_EMsgGCCStrike15_v2_AcknowledgePenalty = 9171,
    k_EMsgGCCStrike15_v2_Client2GCRequestPrestigeCoin = 9172,
    k_EMsgGCCStrike15_v2_GC2ClientGlobalStats = 9173,
    k_EMsgGCCStrike15_v2_Client2GCStreamUnlock = 9174,
    k_EMsgGCCStrike15_v2_FantasyRequestClientData = 9175,
    k_EMsgGCCStrike15_v2_FantasyUpdateClientData = 9176,
    k_EMsgGCCStrike15_v2_GCToClientSteamdatagramTicket = 9177,
    k_EMsgGCCStrike15_v2_ClientToGCRequestTicket = 9178,
    k_EMsgGCCStrike15_v2_ClientToGCRequestElevate = 9179,
    k_EMsgGCCStrike15_v2_GlobalChat = 9180,
    k_EMsgGCCStrike15_v2_GlobalChat_Subscribe = 9181,
    k_EMsgGCCStrike15_v2_GlobalChat_Unsubscribe = 9182,
    k_EMsgGCCStrike15_v2_ClientAuthKeyCode = 9183,
    k_EMsgGCCStrike15_v2_GotvSyncPacket = 9184,
    k_EMsgGCCStrike15_v2_ClientPlayerDecalSign = 9185,
    k_EMsgGCCStrike15_v2_ClientLogonFatalError = 9187,
    k_EMsgGCCStrike15_v2_ClientPollState = 9188,
    k_EMsgGCCStrike15_v2_Party_Register = 9189,
    k_EMsgGCCStrike15_v2_Party_Unregister = 9190,
    k_EMsgGCCStrike15_v2_Party_Search = 9191,
    k_EMsgGCCStrike15_v2_Party_Invite = 9192,
    k_EMsgGCCStrike15_v2_Account_RequestCoPlays = 9193,
    k_EMsgGCCStrike15_v2_ClientGCRankUpdate = 9194,
    k_EMsgGCCStrike15_v2_ClientRequestOffers = 9195,
    k_EMsgGCCStrike15_v2_ClientAccountBalance = 9196,
    k_EMsgGCCStrike15_v2_ClientPartyJoinRelay = 9197,
    k_EMsgGCCStrike15_v2_ClientPartyWarning = 9198,
    k_EMsgGCCStrike15_v2_SetEventFavorite = 9200,
    k_EMsgGCCStrike15_v2_GetEventFavorites_Request = 9201,
    k_EMsgGCCStrike15_v2_ClientPerfReport = 9202,
    k_EMsgGCCStrike15_v2_GetEventFavorites_Response = 9203,
    k_EMsgGCCStrike15_v2_ClientRequestSouvenir = 9204,
    k_EMsgGCCStrike15_v2_ClientRedeemMissionReward = 9209,
    k_EMsgGCCStrike15_ClientDeepStats = 9210,
    k_EMsgGCCStrike15_StartAgreementSessionInGame = 9211,
    k_EMsgGCCStrike15_v2_PrivateQueues = 9214,
    k_EMsgGCCStrike15_v2_MatchListTournamentOperatorMgmt = 9215,
    k_EMsgGCCStrike15_v2_BetaEnrollment = 9217,
    k_EMsgGCCStrike15_v2_SetPlayerLeaderboardSafeName = 9218,
    k_EMsgGCCStrike15_v2_ClientRedeemFreeReward = 9219,
    k_EMsgGCCStrike15_v2_ClientNetworkConfig = 9220,
    k_EMsgGCCStrike15_v2_GC2ClientNotifyXPShop = 9221,
    k_EMsgGCCStrike15_v2_Client2GcAckXPShopTracks = 9222,
    k_EMsgGCCStrike15_v2_MatchmakingGC2ClientSearchStats = 9223,
    k_EMsgGCCStrike15_v2_PremierSeasonSummary = 9224,
    k_EMsgGCCStrike15_v2_RequestRecurringMissionSchedule = 9225,
    k_EMsgGCCStrike15_v2_RecurringMissionSchema = 9226,
    k_EMsgGCCStrike15_v2_VolatileItemClaimReward = 9227,
    k_EMsgGCCStrike15_v2_VolatileShopSubscribe = 9228,
    k_EMsgGCCStrike15_v2_SetClanId = 9229,
};

enum class GLOBALESTATE : std::int32_t {
    GLOBAL_OFF = 0,
    GLOBAL_ON = 1,
    GLOBAL_DEAD = 2,
};

enum class AnimationAlgorithm_t : std::int32_t {
    eInvalid = -1,
    eNone = 0,
    eSequence = 1,
    eAnimGraph2 = 2,
    eAnimGraph2Secondary = 3,
    eCount = 4,
};

enum class CSWeaponMode : std::int32_t {
    Primary_Mode = 0,
    Secondary_Mode = 1,
    WeaponMode_MAX = 2,
};

enum class OnFrame : std::int32_t {
    ONFRAME_UNKNOWN = 0,
    ONFRAME_TRUE = 1,
    ONFRAME_FALSE = 2,
};

enum class Materials : std::int32_t {
    matGlass = 0,
    matWood = 1,
    matMetal = 2,
    matFlesh = 3,
    matCinderBlock = 4,
    matCeilingTile = 5,
    matComputer = 6,
    matUnbreakableGlass = 7,
    matRocks = 8,
    matWeb = 9,
    matNone = 10,
    matLastMaterial = 11,
};

enum class BloodType : std::int32_t {
    None = -1,
    ColorRed = 0,
    ColorYellow = 1,
    ColorGreen = 2,
    ColorRedLVL2 = 3,
    ColorRedLVL3 = 4,
    ColorRedLVL4 = 5,
    ColorRedLVL5 = 6,
    ColorRedLVL6 = 7,
};

enum class NavScope_t : std::int32_t {
    eGround = 0,
    eAir = 1,
    eCount = 2,
    eFirst = 0,
    eInvalid = 255,
};

enum class BreakableContentsType_t : std::int32_t {
    BC_DEFAULT = 0,
    BC_EMPTY = 1,
    BC_PROP_GROUP_OVERRIDE = 2,
    BC_PARTICLE_SYSTEM_OVERRIDE = 3,
};

enum class AnimLoopMode_t : std::int32_t {
    ANIM_LOOP_MODE_INVALID = -1,
    ANIM_LOOP_MODE_NOT_LOOPING = 0,
    ANIM_LOOP_MODE_LOOPING = 1,
    ANIM_LOOP_MODE_USE_SEQUENCE_SETTINGS = 2,
    ANIM_LOOP_MODE_COUNT = 3,
};

enum class EBaseUserMessages : std::int32_t {
    UM_AchievementEvent = 101,
    UM_CurrentTimescale = 104,
    UM_DesiredTimescale = 105,
    UM_Fade = 106,
    UM_GameTitle = 107,
    UM_HudMsg = 110,
    UM_HudText = 111,
    UM_ColoredText = 113,
    UM_RequestState = 114,
    UM_ResetHUD = 115,
    UM_Rumble = 116,
    UM_SayText = 117,
    UM_SayText2 = 118,
    UM_SayTextChannel = 119,
    UM_Shake = 120,
    UM_ShakeDir = 121,
    UM_WaterShake = 122,
    UM_TextMsg = 124,
    UM_ScreenTilt = 125,
    UM_VoiceMask = 128,
    UM_SendAudio = 130,
    UM_ItemPickup = 131,
    UM_AmmoDenied = 132,
    UM_ShowMenu = 134,
    UM_CreditsMsg = 135,
    UM_CloseCaptionPlaceholder = 142,
    UM_CameraTransition = 143,
    UM_AudioParameter = 144,
    UM_ParticleManager = 145,
    UM_HudError = 146,
    UM_CustomGameEvent = 148,
    UM_AnimGraphUpdate = 149,
    UM_HapticsManagerPulse = 150,
    UM_HapticsManagerEffect = 151,
    UM_UpdateCssClasses = 153,
    UM_ServerFrameTime = 154,
    UM_LagCompensationError = 155,
    UM_RequestDllStatus = 156,
    UM_RequestUtilAction = 157,
    UM_UtilActionResponse = 158,
    UM_DllStatusResponse = 159,
    UM_RequestInventory = 160,
    UM_InventoryResponse = 161,
    UM_RequestDiagnostic = 162,
    UM_DiagnosticResponse = 163,
    UM_ExtraUserData = 164,
    UM_NotifyResponseFound = 165,
    UM_PlayResponseConditional = 166,
    UM_UserSentBugBug = 167,
    UM_UsageReport = 168,
    UM_RemoteServerCommand = 169,
    UM_RemoteServerResponse = 170,
    UM_MAX_BASE = 200,
};

enum class Class_T : std::int32_t {
    CLASS_NONE = 0,
    CLASS_PLAYER = 1,
    CLASS_PLAYER_ALLY = 2,
    CLASS_C4_FOR_RADAR = 3,
    CLASS_FOOT_CONTACT_SHADOW = 4,
    CLASS_WEAPON = 5,
    CLASS_WATER_SPLASHER = 6,
    CLASS_HUDMODEL_WEAPON = 7,
    CLASS_HUDMODEL_ARMS = 8,
    CLASS_HUDMODEL_ADDON = 9,
    CLASS_WORLDMODEL_GLOVES = 10,
    CLASS_DOOR = 11,
    CLASS_PLANTED_C4 = 12,
    NUM_CLASSIFY_CLASSES = 13,
};

enum class filter_t : std::int32_t {
    FILTER_AND = 0,
    FILTER_OR = 1,
};

enum class CSWeaponSilencerType : std::int32_t {
    WEAPONSILENCER_NONE = 0,
    WEAPONSILENCER_DETACHABLE = 1,
    WEAPONSILENCER_INTEGRATED = 2,
};

enum class EProceduralRagdollWeightIndexPropagationMethod : std::int32_t {
    Bone = 0,
    BoneAndChildren = 1,
};

enum class GameAnimEventIndex_t : std::int32_t {
    AE_EMPTY = 0,
    AE_CL_PLAYSOUND = 1,
    AE_CL_PLAYSOUND_ATTACHMENT = 2,
    AE_CL_PLAYSOUND_POSITION = 3,
    AE_SV_PLAYSOUND = 4,
    AE_CL_STOPSOUND = 5,
    AE_CL_PLAYSOUND_LOOPING = 6,
    AE_CL_CREATE_PARTICLE_EFFECT = 7,
    AE_CL_STOP_PARTICLE_EFFECT = 8,
    AE_CL_CREATE_PARTICLE_EFFECT_CFG = 9,
    AE_SV_CREATE_PARTICLE_EFFECT_CFG = 10,
    AE_SV_STOP_PARTICLE_EFFECT = 11,
    AE_FOOTSTEP = 12,
    AE_CL_STOP_RAGDOLL_CONTROL = 13,
    AE_BODYGROUP_SET_VALUE = 14,
    AE_WEAPON_PERFORM_ATTACK = 15,
    AE_FIRE_INPUT = 16,
    AE_CL_CLOTH_ATTR = 17,
    AE_CL_CLOTH_GROUND_OFFSET = 18,
    AE_CL_CLOTH_STIFFEN = 19,
    AE_CL_CLOTH_EFFECT = 20,
    AE_CL_CREATE_ANIM_SCOPE_PROP = 21,
    AE_SV_IKLOCK = 22,
    AE_PULSE_GRAPH = 23,
    AE_DISABLE_PLATFORM = 24,
    AE_ENABLE_PLATFORM_PLAYER_FOLLOWS_YAW = 25,
    AE_ENABLE_PLATFORM_PLAYER_IGNORES_YAW = 26,
    AE_DESTRUCTIBLE_PART_DESTROY = 27,
    AE_VEHICLE_ENTER_FINISHED = 28,
    AE_VEHICLE_EXIT_FINISHED = 29,
    AE_SCRIPT_FIRE_EVENT_01 = 30,
    AE_SCRIPT_FIRE_EVENT_02 = 31,
    AE_SCRIPT_FIRE_EVENT_03 = 32,
    AE_SCRIPT_FIRE_EVENT_04 = 33,
    AE_SCRIPT_FIRE_EVENT_05 = 34,
    AE_SCRIPT_FIRE_EVENT_06 = 35,
    AE_SCRIPT_FIRE_EVENT_07 = 36,
    AE_SCRIPT_FIRE_EVENT_08 = 37,
    AE_SCRIPT_FIRE_EVENT_09 = 38,
    AE_SCRIPT_FIRE_EVENT_10 = 39,
    AE_CL_WEAPON_TRANSITION_INTO_HAND = 40,
    AE_SV_ATTACH_SILENCER_COMPLETE = 41,
    AE_SV_DETACH_SILENCER_COMPLETE = 42,
    AE_CL_EJECT_MAG = 43,
    AE_WPN_COMPLETE_RELOAD = 44,
    AE_WPN_HEALTHSHOT_INJECT = 45,
    AE_GRENADE_THROW_COMPLETE = 46,
    AE_COUNT = 47,
};

enum class EGCToGCMsg : std::int32_t {
    k_EGCToGCMsgMasterAck = 150,
    k_EGCToGCMsgMasterAckResponse = 151,
    k_EGCToGCMsgRouted = 152,
    k_EGCToGCMsgRoutedReply = 153,
    k_EMsgUpdateSessionIP = 154,
    k_EMsgRequestSessionIP = 155,
    k_EMsgRequestSessionIPResponse = 156,
    k_EGCToGCMsgMasterStartupComplete = 157,
};

enum class EQueryCvarValueStatus : std::int32_t {
    eQueryCvarValueStatus_ValueIntact = 0,
    eQueryCvarValueStatus_CvarNotFound = 1,
    eQueryCvarValueStatus_NotACvar = 2,
    eQueryCvarValueStatus_CvarProtected = 3,
};

enum class GC_BannedWordType : std::int32_t {
    GC_BANNED_WORD_DISABLE_WORD = 0,
    GC_BANNED_WORD_ENABLE_WORD = 1,
};

enum class ESource2PlayStatsFieldType : std::int32_t {
    Source2PlayStats_Invalid = 0,
    Source2PlayStats_UInt64 = 1,
    Source2PlayStats_UInt32 = 2,
    Source2PlayStats_UInt16 = 3,
    Source2PlayStats_UInt8 = 4,
    Source2PlayStats_Int64 = 5,
    Source2PlayStats_Int32 = 6,
    Source2PlayStats_Int16 = 7,
    Source2PlayStats_Int8 = 8,
    Source2PlayStats_Float64 = 9,
    Source2PlayStats_Float32 = 10,
    Source2PlayStats_Bool = 11,
    Source2PlayStats_String = 12,
    Source2PlayStats_LowCardinalityString = 13,
    Source2PlayStats_UTCDateTime = 14,
    Source2PlayStats_SteamIDTrustBucket = 15,
    Source2PlayStats_SteamIDTrustBucketMin = 16,
    Source2PlayStats_SteamID = 17,
};

enum class FixAngleSet_t : std::int32_t {
    None = 0,
    Absolute = 1,
    Relative = 2,
};

enum class IChoreoServices__ScriptState_t : std::int32_t {
    SCRIPT_PLAYING = 0,
    SCRIPT_WAIT = 1,
    SCRIPT_POST_IDLE = 2,
    SCRIPT_CLEANUP = 3,
    SCRIPT_MOVE_TO_MARK = 4,
};

enum class Touch_t : std::int32_t {
    touch_none = 0,
    touch_player_only = 1,
    touch_npc_only = 2,
    touch_player_or_npc = 3,
    touch_player_or_npc_or_physicsprop = 4,
};

enum class CCSPlayerAnimationState__MoveType_t : std::int32_t {
    None = 0,
    Ground = 1,
    Air = 2,
    Ladder = 3,
};

enum class TrainVelocityType_t : std::int32_t {
    TrainVelocity_Instantaneous = 0,
    TrainVelocity_LinearBlend = 1,
    TrainVelocity_EaseInEaseOut = 2,
};

enum class SignonState_t : std::int32_t {
    SIGNONSTATE_NONE = 0,
    SIGNONSTATE_CHALLENGE = 1,
    SIGNONSTATE_CONNECTED = 2,
    SIGNONSTATE_NEW = 3,
    SIGNONSTATE_PRESPAWN = 4,
    SIGNONSTATE_SPAWN = 5,
    SIGNONSTATE_FULL = 6,
    SIGNONSTATE_CHANGELEVEL = 7,
};

enum class CSWeaponType : std::int32_t {
    WEAPONTYPE_KNIFE = 0,
    WEAPONTYPE_PISTOL = 1,
    WEAPONTYPE_SUBMACHINEGUN = 2,
    WEAPONTYPE_RIFLE = 3,
    WEAPONTYPE_SHOTGUN = 4,
    WEAPONTYPE_SNIPER_RIFLE = 5,
    WEAPONTYPE_MACHINEGUN = 6,
    WEAPONTYPE_C4 = 7,
    WEAPONTYPE_TASER = 8,
    WEAPONTYPE_GRENADE = 9,
    WEAPONTYPE_EQUIPMENT = 10,
    WEAPONTYPE_STACKABLEITEM = 11,
    WEAPONTYPE_UNKNOWN = 12,
};

enum class NavScopeFlags_t : std::int32_t {
    eGround = 1,
    eAir = 2,
    eAll = 3,
    eNone = 0,
};

enum class EntFinderMethod_t : std::int32_t {
    ENT_FIND_METHOD_NEAREST = 0,
    ENT_FIND_METHOD_FARTHEST = 1,
    ENT_FIND_METHOD_RANDOM = 2,
};

enum class TestInputOutputCombinationsEnum_t : std::int32_t {
    ZERO = 0,
    ONE = 1,
    TWO = 2,
};

enum class FuncMoverMovementSummaryFlags_t : std::int32_t {
    eNone = 0,
    eMovementBegin = 1,
    eStopBegin = 2,
    eStopComplete = 4,
    eReversing = 8,
    eEventsDispatched = 16,
    eLoopToStart = 32,
    eLoopToEnd = 64,
    eTransitionComplete = 128,
    eStoppedDuringTransition = 256,
};

enum class EGCBaseClientMsg : std::int32_t {
    k_EMsgGCClientWelcome = 4004,
    k_EMsgGCServerWelcome = 4005,
    k_EMsgGCClientHello = 4006,
    k_EMsgGCServerHello = 4007,
    k_EMsgGCClientConnectionStatus = 4009,
    k_EMsgGCServerConnectionStatus = 4010,
    k_EMsgGCClientHelloPartner = 4011,
    k_EMsgGCClientHelloPW = 4012,
    k_EMsgGCClientHelloR2 = 4013,
    k_EMsgGCClientHelloR3 = 4014,
    k_EMsgGCClientHelloR4 = 4015,
};

enum class PropDoorRotatingSpawnPos_t : std::int32_t {
    DOOR_SPAWN_CLOSED = 0,
    DOOR_SPAWN_OPEN_FORWARD = 1,
    DOOR_SPAWN_OPEN_BACK = 2,
    DOOR_SPAWN_AJAR = 3,
};

enum class ShardSolid_t : std::int32_t {
    SHARD_SOLID = 0,
    SHARD_DEBRIS = 1,
};

enum class ESplitScreenMessageType : std::int32_t {
    MSG_SPLITSCREEN_ADDUSER = 0,
    MSG_SPLITSCREEN_REMOVEUSER = 1,
};

enum class EntityPlatformTypes_t : std::int32_t {
    ENTITY_NOT_PLATFORM = 0,
    ENTITY_PLATFORM_PLAYER_FOLLOWS_YAW = 1,
    ENTITY_PLATFORM_PLAYER_IGNORES_YAW = 2,
};

enum class PulseNPCCondition_t : std::int32_t {
    COND_SEE_PLAYER = 1,
    COND_LOST_PLAYER = 2,
    COND_HEAR_PLAYER = 3,
    COND_PLAYER_PUSHING = 4,
    COND_NO_PRIMARY_AMMO = 5,
};

enum class RenderMode_t : std::int32_t {
    kRenderNormal = 0,
    kRenderTransAlpha = 1,
    kRenderNone = 2,
    kRenderModeCount = 3,
};

enum class EGCSystemMsg : std::int32_t {
    k_EGCMsgInvalid = 0,
    k_EGCMsgMulti = 1,
    k_EGCMsgGenericReply = 10,
    k_EGCMsgSystemBase = 50,
    k_EGCMsgAchievementAwarded = 51,
    k_EGCMsgConCommand = 52,
    k_EGCMsgStartPlaying = 53,
    k_EGCMsgStopPlaying = 54,
    k_EGCMsgStartGameserver = 55,
    k_EGCMsgStopGameserver = 56,
    k_EGCMsgWGRequest = 57,
    k_EGCMsgWGResponse = 58,
    k_EGCMsgGetUserGameStatsSchema = 59,
    k_EGCMsgGetUserGameStatsSchemaResponse = 60,
    k_EGCMsgGetUserStatsDEPRECATED = 61,
    k_EGCMsgGetUserStatsResponse = 62,
    k_EGCMsgAppInfoUpdated = 63,
    k_EGCMsgValidateSession = 64,
    k_EGCMsgValidateSessionResponse = 65,
    k_EGCMsgLookupAccountFromInput = 66,
    k_EGCMsgSendHTTPRequest = 67,
    k_EGCMsgSendHTTPRequestResponse = 68,
    k_EGCMsgPreTestSetup_DEPRECATED = 69,
    k_EGCMsgRecordSupportAction = 70,
    k_EGCMsgGetAccountDetails_DEPRECATED = 71,
    k_EGCMsgReceiveInterAppMessage = 73,
    k_EGCMsgFindAccounts = 74,
    k_EGCMsgPostAlert = 75,
    k_EGCMsgGetLicenses = 76,
    k_EGCMsgGetUserStats = 77,
    k_EGCMsgGetCommands = 78,
    k_EGCMsgGetCommandsResponse = 79,
    k_EGCMsgAddFreeLicense = 80,
    k_EGCMsgAddFreeLicenseResponse = 81,
    k_EGCMsgGetIPLocation = 82,
    k_EGCMsgGetIPLocationResponse = 83,
    k_EGCMsgSystemStatsSchema = 84,
    k_EGCMsgGetSystemStats = 85,
    k_EGCMsgGetSystemStatsResponse = 86,
    k_EGCMsgSendEmail = 87,
    k_EGCMsgSendEmailResponse = 88,
    k_EGCMsgGetEmailTemplate = 89,
    k_EGCMsgGetEmailTemplateResponse = 90,
    k_EGCMsgGrantGuestPass = 91,
    k_EGCMsgGrantGuestPassResponse = 92,
    k_EGCMsgGetAccountDetails = 93,
    k_EGCMsgGetAccountDetailsResponse = 94,
    k_EGCMsgGetPersonaNames = 95,
    k_EGCMsgGetPersonaNamesResponse = 96,
    k_EGCMsgMultiplexMsg = 97,
    k_EGCMsgMultiplexMsgResponse = 98,
    k_EGCMsgWebAPIRegisterInterfaces = 101,
    k_EGCMsgWebAPIJobRequest = 102,
    k_EGCMsgWebAPIJobRequestHttpResponse = 104,
    k_EGCMsgWebAPIJobRequestForwardResponse = 105,
    k_EGCMsgMemCachedGet = 200,
    k_EGCMsgMemCachedGetResponse = 201,
    k_EGCMsgMemCachedSet = 202,
    k_EGCMsgMemCachedDelete = 203,
    k_EGCMsgMemCachedStats = 204,
    k_EGCMsgMemCachedStatsResponse = 205,
    k_EGCMsgMasterSetDirectory = 220,
    k_EGCMsgMasterSetDirectoryResponse = 221,
    k_EGCMsgMasterSetWebAPIRouting = 222,
    k_EGCMsgMasterSetWebAPIRoutingResponse = 223,
    k_EGCMsgMasterSetClientMsgRouting = 224,
    k_EGCMsgMasterSetClientMsgRoutingResponse = 225,
    k_EGCMsgSetOptions = 226,
    k_EGCMsgSetOptionsResponse = 227,
    k_EGCMsgSystemBase2 = 500,
    k_EGCMsgGetPurchaseTrustStatus = 501,
    k_EGCMsgGetPurchaseTrustStatusResponse = 502,
    k_EGCMsgUpdateSession = 503,
    k_EGCMsgGCAccountVacStatusChange = 504,
    k_EGCMsgCheckFriendship = 505,
    k_EGCMsgCheckFriendshipResponse = 506,
    k_EGCMsgGetPartnerAccountLink = 507,
    k_EGCMsgGetPartnerAccountLinkResponse = 508,
    k_EGCMsgDPPartnerMicroTxns = 512,
    k_EGCMsgDPPartnerMicroTxnsResponse = 513,
    k_EGCMsgVacVerificationChange = 518,
    k_EGCMsgAccountPhoneNumberChange = 519,
    k_EGCMsgInviteUserToLobby = 523,
    k_EGCMsgGetGamePersonalDataCategoriesRequest = 524,
    k_EGCMsgGetGamePersonalDataCategoriesResponse = 525,
    k_EGCMsgGetGamePersonalDataEntriesRequest = 526,
    k_EGCMsgGetGamePersonalDataEntriesResponse = 527,
    k_EGCMsgTerminateGamePersonalDataEntriesRequest = 528,
    k_EGCMsgTerminateGamePersonalDataEntriesResponse = 529,
    k_EGCMsgRecurringSubscriptionStatusChange = 530,
    k_EGCMsgDirectServiceMethod = 531,
    k_EGCMsgDirectServiceMethodResponse = 532,
    k_EGCMsgAppCheersReceived = 533,
    k_EGCMsgAppCheersGetAllowedTypes = 534,
    k_EGCMsgAppCheersGetAllowedTypesResponse = 535,
    k_EGCMsgReportMetrics = 536,
    k_EGCMsgReportMetricsResponse = 537,
    k_EGCMsgGetClanDetails = 538,
    k_EGCMsgGetClanDetailsResponse = 539,
};

enum class ECommunityItemClass : std::int32_t {
    k_ECommunityItemClass_Invalid = 0,
    k_ECommunityItemClass_Badge = 1,
    k_ECommunityItemClass_GameCard = 2,
    k_ECommunityItemClass_ProfileBackground = 3,
    k_ECommunityItemClass_Emoticon = 4,
    k_ECommunityItemClass_BoosterPack = 5,
    k_ECommunityItemClass_Consumable = 6,
    k_ECommunityItemClass_GameGoo = 7,
    k_ECommunityItemClass_ProfileModifier = 8,
    k_ECommunityItemClass_Scene = 9,
    k_ECommunityItemClass_SalienItem = 10,
};

enum class ETeam : std::int32_t {
    ET_Unknown = 0,
    ET_Spectator = 1,
    ET_Terrorist = 2,
    ET_CT = 3,
};

enum class ForcedCrouchState_t : std::int32_t {
    FORCEDCROUCH_NONE = 0,
    FORCEDCROUCH_CROUCHED = 1,
    FORCEDCROUCH_UNCROUCHED = 2,
};

enum class EBasePredictionEvents : std::int32_t {
    BPE_StringCommand = 128,
    BPE_Teleport = 130,
    BPE_Diagnostic = 16384,
};

enum class EClientReportingVersion : std::int32_t {
    k_EClientReportingVersion_OldVersion = 0,
    k_EClientReportingVersion_BetaVersion = 1,
    k_EClientReportingVersion_SupportsTrustedMode = 2,
};

enum class EGCBaseProtoObjectTypes : std::int32_t {
    k_EProtoObjectPartyInvite = 1001,
    k_EProtoObjectLobbyInvite = 1002,
};

enum class PerformanceMode_t : std::int32_t {
    PM_NORMAL = 0,
    PM_NO_GIBS = 1,
};

enum class TOGGLE_STATE : std::int32_t {
    TS_AT_TOP = 0,
    TS_AT_BOTTOM = 1,
    TS_GOING_UP = 2,
    TS_GOING_DOWN = 3,
    DOOR_OPEN = 0,
    DOOR_CLOSED = 1,
    DOOR_OPENING = 2,
    DOOR_CLOSING = 3,
};

enum class loadout_slot_t : std::int32_t {
    LOADOUT_SLOT_PROMOTED = -2,
    LOADOUT_SLOT_INVALID = -1,
    LOADOUT_SLOT_MELEE = 0,
    LOADOUT_SLOT_C4 = 1,
    LOADOUT_SLOT_FIRST_AUTO_BUY_WEAPON = 0,
    LOADOUT_SLOT_LAST_AUTO_BUY_WEAPON = 1,
    LOADOUT_SLOT_SECONDARY0 = 2,
    LOADOUT_SLOT_SECONDARY1 = 3,
    LOADOUT_SLOT_SECONDARY2 = 4,
    LOADOUT_SLOT_SECONDARY3 = 5,
    LOADOUT_SLOT_SECONDARY4 = 6,
    LOADOUT_SLOT_SECONDARY5 = 7,
    LOADOUT_SLOT_SMG0 = 8,
    LOADOUT_SLOT_SMG1 = 9,
    LOADOUT_SLOT_SMG2 = 10,
    LOADOUT_SLOT_SMG3 = 11,
    LOADOUT_SLOT_SMG4 = 12,
    LOADOUT_SLOT_SMG5 = 13,
    LOADOUT_SLOT_RIFLE0 = 14,
    LOADOUT_SLOT_RIFLE1 = 15,
    LOADOUT_SLOT_RIFLE2 = 16,
    LOADOUT_SLOT_RIFLE3 = 17,
    LOADOUT_SLOT_RIFLE4 = 18,
    LOADOUT_SLOT_RIFLE5 = 19,
    LOADOUT_SLOT_HEAVY0 = 20,
    LOADOUT_SLOT_HEAVY1 = 21,
    LOADOUT_SLOT_HEAVY2 = 22,
    LOADOUT_SLOT_HEAVY3 = 23,
    LOADOUT_SLOT_HEAVY4 = 24,
    LOADOUT_SLOT_HEAVY5 = 25,
    LOADOUT_SLOT_FIRST_WHEEL_WEAPON = 2,
    LOADOUT_SLOT_LAST_WHEEL_WEAPON = 25,
    LOADOUT_SLOT_FIRST_PRIMARY_WEAPON = 8,
    LOADOUT_SLOT_LAST_PRIMARY_WEAPON = 25,
    LOADOUT_SLOT_FIRST_WHEEL_GRENADE = 26,
    LOADOUT_SLOT_GRENADE0 = 26,
    LOADOUT_SLOT_GRENADE1 = 27,
    LOADOUT_SLOT_GRENADE2 = 28,
    LOADOUT_SLOT_GRENADE3 = 29,
    LOADOUT_SLOT_GRENADE4 = 30,
    LOADOUT_SLOT_GRENADE5 = 31,
    LOADOUT_SLOT_LAST_WHEEL_GRENADE = 31,
    LOADOUT_SLOT_EQUIPMENT0 = 32,
    LOADOUT_SLOT_EQUIPMENT1 = 33,
    LOADOUT_SLOT_EQUIPMENT2 = 34,
    LOADOUT_SLOT_EQUIPMENT3 = 35,
    LOADOUT_SLOT_EQUIPMENT4 = 36,
    LOADOUT_SLOT_EQUIPMENT5 = 37,
    LOADOUT_SLOT_FIRST_WHEEL_EQUIPMENT = 32,
    LOADOUT_SLOT_LAST_WHEEL_EQUIPMENT = 37,
    LOADOUT_SLOT_CLOTHING_CUSTOMPLAYER = 38,
    LOADOUT_SLOT_CLOTHING_CUSTOMHEAD = 39,
    LOADOUT_SLOT_CLOTHING_FACEMASK = 40,
    LOADOUT_SLOT_CLOTHING_HANDS = 41,
    LOADOUT_SLOT_FIRST_COSMETIC = 41,
    LOADOUT_SLOT_LAST_COSMETIC = 41,
    LOADOUT_SLOT_CLOTHING_EYEWEAR = 42,
    LOADOUT_SLOT_CLOTHING_HAT = 43,
    LOADOUT_SLOT_CLOTHING_LOWERBODY = 44,
    LOADOUT_SLOT_CLOTHING_TORSO = 45,
    LOADOUT_SLOT_CLOTHING_APPEARANCE = 46,
    LOADOUT_SLOT_MISC0 = 47,
    LOADOUT_SLOT_MISC1 = 48,
    LOADOUT_SLOT_MISC2 = 49,
    LOADOUT_SLOT_MISC3 = 50,
    LOADOUT_SLOT_MISC4 = 51,
    LOADOUT_SLOT_MISC5 = 52,
    LOADOUT_SLOT_MISC6 = 53,
    LOADOUT_SLOT_MUSICKIT = 54,
    LOADOUT_SLOT_FLAIR0 = 55,
    LOADOUT_SLOT_SPRAY0 = 56,
    LOADOUT_SLOT_PET = 57,
    LOADOUT_SLOT_FIRST_ALL_CHARACTER = 54,
    LOADOUT_SLOT_LAST_ALL_CHARACTER = 57,
    LOADOUT_SLOT_COUNT = 58,
};

enum class EDestructiblePartDamagePassThroughType : std::int32_t {
    Normal = 0,
    Absorb = 1,
    InvincibleAbsorb = 2,
    InvinciblePassthrough = 3,
};

enum class RadiusDmgOverride_t : std::int32_t {
    RADIUS_DMG_OVERRIDE_NONE = 0,
    RADIUS_DMG_OVERRIDE_POSITION_ONLY = 1,
    RADIUS_DMG_OVERRIDE_POSITION_SKIP_TRACES = 2,
};

enum class VoiceDataFormat_t : std::int32_t {
    VOICEDATA_FORMAT_STEAM = 0,
    VOICEDATA_FORMAT_ENGINE = 1,
    VOICEDATA_FORMAT_OPUS = 2,
};

enum class NavAttributeEnum : std::int32_t {
    NAV_MESH_NONE = 0,
    NAV_MESH_AVOID = 128,
    NAV_MESH_STAIRS = 4096,
    NAV_MESH_NON_ZUP = 32768,
    NAV_MESH_CROUCH_HEIGHT = 65536,
    NAV_MESH_NON_ZUP_TRANSITION = 131072,
    NAV_MESH_CRAWL_HEIGHT = 262144,
    NAV_MESH_JUMP = 2,
    NAV_MESH_NO_JUMP = 8,
    NAV_MESH_STOP = 16,
    NAV_MESH_RUN = 32,
    NAV_MESH_WALK = 64,
    NAV_MESH_TRANSIENT = 256,
    NAV_MESH_DONT_HIDE = 512,
    NAV_MESH_STAND = 1024,
    NAV_MESH_NO_HOSTAGES = 2048,
    NAV_MESH_NO_MERGE = 8192,
    NAV_MESH_OBSTACLE_TOP = 16384,
    NAV_ATTR_FIRST_GAME_INDEX = 19,
    NAV_ATTR_LAST_INDEX = 63,
};

enum class MoveLinearAuthoredPos_t : std::int32_t {
    MOVELINEAR_AUTHORED_AT_START_POSITION = 0,
    MOVELINEAR_AUTHORED_AT_OPEN_POSITION = 1,
    MOVELINEAR_AUTHORED_AT_CLOSED_POSITION = 2,
};

enum class ValueRemapperMomentumType_t : std::int32_t {
    MomentumType_None = 0,
    MomentumType_Friction = 1,
    MomentumType_SpringTowardSnapValue = 2,
    MomentumType_SpringAwayFromSnapValue = 3,
};

enum class Hull_t : std::int32_t {
    HULL_HUMAN = 0,
    HULL_SMALL_CENTERED = 1,
    HULL_WIDE_HUMAN = 2,
    HULL_TINY = 3,
    HULL_MEDIUM = 4,
    HULL_TINY_CENTERED = 5,
    HULL_LARGE = 6,
    HULL_LARGE_CENTERED = 7,
    HULL_MEDIUM_TALL = 8,
    HULL_SMALL = 9,
    NUM_HULLS = 10,
    HULL_NONE = 11,
};

enum class ExternalAnimGraphInactiveBehavior_t : std::int32_t {
    eNone = 0,
    eUnbind = 1,
    eUnbindAndDelete = 2,
};

enum class NET_Messages : std::int32_t {
    net_NOP = 0,
    net_Disconnect_Legacy = 1,
    net_SplitScreenUser = 3,
    net_Tick = 4,
    net_StringCmd = 5,
    net_SetConVar = 6,
    net_SignonState = 7,
    net_SpawnGroup_Load = 8,
    net_SpawnGroup_ManifestUpdate = 9,
    net_SpawnGroup_SetCreationTick = 11,
    net_SpawnGroup_Unload = 12,
    net_SpawnGroup_LoadCompleted = 13,
    net_DebugOverlay = 15,
};

enum class EWeaponType : std::int32_t {
    EWT_Knife = 0,
    EWT_Pistol = 1,
    EWT_SubMachineGun = 2,
    EWT_Rifle = 3,
    EWT_Shotgun = 4,
    EWT_SniperRifle = 5,
    EWT_MachineGun = 6,
    EWT_C4 = 7,
    EWT_Grenade = 8,
    EWT_Equipment = 9,
    EWT_StackableItem = 10,
    EWT_Unknown = 11,
};

enum class EBaseEntityMessages : std::int32_t {
    EM_PlayJingle = 136,
    EM_ScreenOverlay = 137,
    EM_PropagateForce = 139,
    EM_DoSpark = 140,
    EM_FixAngle = 141,
};

enum class ECSPredictionEvents : std::int32_t {
    CSPE_DamageTag = 1,
    CSPE_PlayerTeleport = 3,
};

enum class CCSPlayerAnimationState__GroundMoveState_t : std::int32_t {
    None = 0,
    Idle = 1,
    Start = 2,
    Move = 3,
    TurnOnSpot = 4,
    TurnOnSpotLoop = 5,
    PlantAndTurn = 6,
};

enum class PreviewWeaponState : std::int32_t {
    DROPPED = 0,
    HOLSTERED = 1,
    DEPLOYED = 2,
    PLANTED = 3,
    INSPECT = 4,
    ICON = 5,
};

enum class EInButtonState : std::int32_t {
    IN_BUTTON_UP = 0,
    IN_BUTTON_DOWN = 1,
    IN_BUTTON_DOWN_UP = 2,
    IN_BUTTON_UP_DOWN = 3,
    IN_BUTTON_UP_DOWN_UP = 4,
    IN_BUTTON_DOWN_UP_DOWN = 5,
    IN_BUTTON_DOWN_UP_DOWN_UP = 6,
    IN_BUTTON_UP_DOWN_UP_DOWN = 7,
    IN_BUTTON_STATE_COUNT = 8,
};

enum class WeaponAttackType_t : std::int32_t {
    eInvalid = -1,
    ePrimary = 0,
    eSecondary = 1,
    eCount = 2,
};

enum class CDebugOverlayFilterTextType_t : std::int32_t {
    FILTER_TEXT_NONE = 0,
    MATCH = 1,
    HIERARCHY = 2,
    COUNT = 3,
};

enum class PARTICLE_MESSAGE : std::int32_t {
    GAME_PARTICLE_MANAGER_EVENT_CREATE = 0,
    GAME_PARTICLE_MANAGER_EVENT_UPDATE = 1,
    GAME_PARTICLE_MANAGER_EVENT_UPDATE_FORWARD = 2,
    GAME_PARTICLE_MANAGER_EVENT_UPDATE_ORIENTATION = 3,
    GAME_PARTICLE_MANAGER_EVENT_UPDATE_FALLBACK = 4,
    GAME_PARTICLE_MANAGER_EVENT_UPDATE_ENT = 5,
    GAME_PARTICLE_MANAGER_EVENT_UPDATE_OFFSET = 6,
    GAME_PARTICLE_MANAGER_EVENT_DESTROY = 7,
    GAME_PARTICLE_MANAGER_EVENT_DESTROY_INVOLVING = 8,
    GAME_PARTICLE_MANAGER_EVENT_RELEASE = 9,
    GAME_PARTICLE_MANAGER_EVENT_LATENCY = 10,
    GAME_PARTICLE_MANAGER_EVENT_SHOULD_DRAW = 11,
    GAME_PARTICLE_MANAGER_EVENT_FROZEN = 12,
    GAME_PARTICLE_MANAGER_EVENT_CHANGE_CONTROL_POINT_ATTACHMENT = 13,
    GAME_PARTICLE_MANAGER_EVENT_UPDATE_ENTITY_POSITION = 14,
    GAME_PARTICLE_MANAGER_EVENT_SET_FOW_PROPERTIES = 15,
    GAME_PARTICLE_MANAGER_EVENT_SET_TEXT = 16,
    GAME_PARTICLE_MANAGER_EVENT_SET_SHOULD_CHECK_FOW = 17,
    GAME_PARTICLE_MANAGER_EVENT_SET_CONTROL_POINT_MODEL = 18,
    GAME_PARTICLE_MANAGER_EVENT_SET_CONTROL_POINT_SNAPSHOT = 19,
    GAME_PARTICLE_MANAGER_EVENT_SET_TEXTURE_ATTRIBUTE = 20,
    GAME_PARTICLE_MANAGER_EVENT_SET_SCENE_OBJECT_GENERIC_FLAG = 21,
    GAME_PARTICLE_MANAGER_EVENT_SET_SCENE_OBJECT_TINT_AND_DESAT = 22,
    GAME_PARTICLE_MANAGER_EVENT_DESTROY_NAMED = 23,
    GAME_PARTICLE_MANAGER_EVENT_SKIP_TO_TIME = 24,
    GAME_PARTICLE_MANAGER_EVENT_CAN_FREEZE = 25,
    GAME_PARTICLE_MANAGER_EVENT_SET_NAMED_VALUE_CONTEXT = 26,
    GAME_PARTICLE_MANAGER_EVENT_UPDATE_TRANSFORM = 27,
    GAME_PARTICLE_MANAGER_EVENT_FREEZE_TRANSITION_OVERRIDE = 28,
    GAME_PARTICLE_MANAGER_EVENT_FREEZE_INVOLVING = 29,
    GAME_PARTICLE_MANAGER_EVENT_ADD_MODELLIST_OVERRIDE_ELEMENT = 30,
    GAME_PARTICLE_MANAGER_EVENT_CLEAR_MODELLIST_OVERRIDE = 31,
    GAME_PARTICLE_MANAGER_EVENT_CREATE_PHYSICS_SIM = 32,
    GAME_PARTICLE_MANAGER_EVENT_DESTROY_PHYSICS_SIM = 33,
    GAME_PARTICLE_MANAGER_EVENT_SET_VDATA = 34,
    GAME_PARTICLE_MANAGER_EVENT_SET_MATERIAL_OVERRIDE = 35,
    GAME_PARTICLE_MANAGER_EVENT_ADD_FAN = 36,
    GAME_PARTICLE_MANAGER_EVENT_UPDATE_FAN = 37,
    GAME_PARTICLE_MANAGER_EVENT_SET_CLUSTER_GROWTH = 38,
    GAME_PARTICLE_MANAGER_EVENT_REMOVE_FAN = 39,
    GAME_PARTICLE_MANAGER_EVENT_CREATE_SMOKE_GRID = 40,
    GAME_PARTICLE_MANAGER_EVENT_SET_OVERRIDE_TEXTURE = 41,
};

enum class CSPlayerBlockingUseAction_t : std::int32_t {
    k_CSPlayerBlockingUseAction_None = 0,
    k_CSPlayerBlockingUseAction_DefusingDefault = 1,
    k_CSPlayerBlockingUseAction_DefusingWithKit = 2,
    k_CSPlayerBlockingUseAction_HostageGrabbing = 3,
    k_CSPlayerBlockingUseAction_HostageDropping = 4,
    k_CSPlayerBlockingUseAction_MapLongUseEntity_Pickup = 5,
    k_CSPlayerBlockingUseAction_MapLongUseEntity_Place = 6,
    k_CSPlayerBlockingUseAction_MaxCount = 7,
};

enum class ShatterDamageCause : std::int32_t {
    SHATTERDAMAGE_BULLET = 0,
    SHATTERDAMAGE_MELEE = 1,
    SHATTERDAMAGE_THROWN = 2,
    SHATTERDAMAGE_SCRIPT = 3,
    SHATTERDAMAGE_EXPLOSIVE = 4,
};

enum class ECommunityItemAttribute : std::int32_t {
    k_ECommunityItemAttribute_Invalid = 0,
    k_ECommunityItemAttribute_CardBorder = 1,
    k_ECommunityItemAttribute_Level = 2,
    k_ECommunityItemAttribute_IssueNumber = 3,
    k_ECommunityItemAttribute_TradableTime = 4,
    k_ECommunityItemAttribute_StorePackageID = 5,
    k_ECommunityItemAttribute_CommunityItemAppID = 6,
    k_ECommunityItemAttribute_CommunityItemType = 7,
    k_ECommunityItemAttribute_ProfileModiferEnabled = 8,
    k_ECommunityItemAttribute_ExpiryTime = 9,
};

enum class SVC_Messages_LowFrequency : std::int32_t {
    svc_dummy = 600,
};

enum class eRollType : std::int32_t {
    ROLL_NONE = -1,
    ROLL_STATS = 0,
    ROLL_CREDITS = 1,
    ROLL_LATE_JOIN_LOGO = 2,
    ROLL_OUTTRO = 3,
};

enum class ScriptedOnDeath_t : std::int32_t {
    SS_ONDEATH_NOT_APPLICABLE = -1,
    SS_ONDEATH_UNDEFINED = 0,
    SS_ONDEATH_RAGDOLL = 1,
    SS_ONDEATH_ANIMATED_DEATH = 2,
};

enum class CSWeaponNameID : std::int32_t {
    WEAPONID_GLOCK = 0,
    WEAPONID_HKP2000 = 1,
    WEAPONID_CZ75A = 2,
    WEAPONID_ELITE = 3,
    WEAPONID_DEAGLE = 4,
    WEAPONID_FIVESEVEN = 5,
    WEAPONID_P250 = 6,
    WEAPONID_REVOLVER = 7,
    WEAPONID_TEC9 = 8,
    WEAPONID_USP_SILENCER = 9,
    WEAPONID_AK47 = 10,
    WEAPONID_M4A1 = 11,
    WEAPONID_M4A1_SILENCER = 12,
    WEAPONID_FAMAS = 13,
    WEAPONID_GALILAR = 14,
    WEAPONID_AUG = 15,
    WEAPONID_SG556 = 16,
    WEAPONID_BIZON = 17,
    WEAPONID_MAC10 = 18,
    WEAPONID_MP5SD = 19,
    WEAPONID_MP7 = 20,
    WEAPONID_MP9 = 21,
    WEAPONID_P90 = 22,
    WEAPONID_UMP45 = 23,
    WEAPONID_MAG7 = 24,
    WEAPONID_NOVA = 25,
    WEAPONID_SAWEDOFF = 26,
    WEAPONID_XM1014 = 27,
    WEAPONID_AWP = 28,
    WEAPONID_SSG08 = 29,
    WEAPONID_G3SG1 = 30,
    WEAPONID_SCAR20 = 31,
    WEAPONID_M249 = 32,
    WEAPONID_NEGEV = 33,
    WEAPONID_TASER = 34,
    WEAPONID_DECOY = 35,
    WEAPONID_FLASHBANG = 36,
    WEAPONID_HEGRENADE = 37,
    WEAPONID_INCGRENADE = 38,
    WEAPONID_MOLOTOV = 39,
    WEAPONID_SMOKEGRENADE = 40,
    WEAPONID_C4 = 41,
    WEAPONID_HEALTHSHOT = 42,
    WEAPONID_KNIFE = 43,
    WEAPONID_KNIFE_T = 44,
    WEAPONID_KNIFE_CSS = 45,
    WEAPONID_KNIFE_FLIP = 46,
    WEAPONID_KNIFE_GUT = 47,
    WEAPONID_KNIFE_KARAMBIT = 48,
    WEAPONID_BAYONET = 49,
    WEAPONID_KNIFE_M9_BAYONET = 50,
    WEAPONID_KNIFE_TACTICAL = 51,
    WEAPONID_KNIFE_FALCHION = 52,
    WEAPONID_KNIFE_SURVIVAL_BOWIE = 53,
    WEAPONID_KNIFE_BUTTERFLY = 54,
    WEAPONID_KNIFE_PUSH = 55,
    WEAPONID_KNIFE_CORD = 56,
    WEAPONID_KNIFE_CANIS = 57,
    WEAPONID_KNIFE_URSUS = 58,
    WEAPONID_KNIFE_GYPSY_JACKKNIFE = 59,
    WEAPONID_KNIFE_OUTDOOR = 60,
    WEAPONID_KNIFE_STILETTO = 61,
    WEAPONID_KNIFE_WIDOWMAKER = 62,
    WEAPONID_KNIFE_SKELETON = 63,
    WEAPONID_KNIFE_KUKRI = 64,
    WEAPONID_UNKNOWN = 65,
};

enum class ChoreoLookAtSpeed_t : std::int32_t {
    eInvalid = -1,
    eSlow = 0,
    eMedium = 1,
    eFast = 2,
};

enum class SpawnGroupFlags_t : std::int32_t {
    SPAWN_GROUP_LOAD_ENTITIES_FROM_SAVE = 1,
    SPAWN_GROUP_DONT_SPAWN_ENTITIES = 2,
    SPAWN_GROUP_SYNCHRONOUS_SPAWN = 4,
    SPAWN_GROUP_IS_INITIAL_SPAWN_GROUP = 8,
    SPAWN_GROUP_CREATE_CLIENT_ONLY_ENTITIES = 16,
    SPAWN_GROUP_BLOCK_UNTIL_LOADED = 64,
    SPAWN_GROUP_LOAD_STREAMING_DATA = 128,
    SPAWN_GROUP_CREATE_NEW_SCENE_WORLD = 256,
};

enum class ECSUsrMsg_DisconnectToLobby_Action : std::int32_t {
    k_ECSUsrMsg_DisconnectToLobby_Action_Default = 0,
    k_ECSUsrMsg_DisconnectToLobby_Action_GoQueue = 1,
};

enum class ECsgoSteamUserStat : std::int32_t {
    k_ECsgoSteamUserStat_XpEarnedGames = 1,
    k_ECsgoSteamUserStat_MatchWinsCompetitive = 2,
    k_ECsgoSteamUserStat_SurvivedDangerZone = 3,
};

enum class gear_slot_t : std::int32_t {
    GEAR_SLOT_INVALID = -1,
    GEAR_SLOT_RIFLE = 0,
    GEAR_SLOT_PISTOL = 1,
    GEAR_SLOT_KNIFE = 2,
    GEAR_SLOT_GRENADES = 3,
    GEAR_SLOT_C4 = 4,
    GEAR_SLOT_RESERVED_SLOT6 = 5,
    GEAR_SLOT_RESERVED_SLOT7 = 6,
    GEAR_SLOT_RESERVED_SLOT8 = 7,
    GEAR_SLOT_RESERVED_SLOT9 = 8,
    GEAR_SLOT_RESERVED_SLOT10 = 9,
    GEAR_SLOT_RESERVED_SLOT11 = 10,
    GEAR_SLOT_BOOSTS = 11,
    GEAR_SLOT_UTILITY = 12,
    GEAR_SLOT_COUNT = 13,
    GEAR_SLOT_FIRST = 0,
    GEAR_SLOT_LAST = 12,
};

enum class CSPlayerState : std::int32_t {
    STATE_ACTIVE = 0,
    STATE_WELCOME = 1,
    STATE_PICKINGTEAM = 2,
    STATE_PICKINGCLASS = 3,
    STATE_DEATH_ANIM = 4,
    STATE_DEATH_WAIT_FOR_KEY = 5,
    STATE_OBSERVER_MODE = 6,
    STATE_GUNGAME_RESPAWN = 7,
    STATE_DORMANT = 8,
    NUM_PLAYER_STATES = 9,
};

enum class RequestPause_t : std::int32_t {
    RP_PAUSE = 0,
    RP_UNPAUSE = 1,
    RP_TOGGLEPAUSE = 2,
};

enum class ScriptedConflictResponse_t : std::int32_t {
    SS_CONFLICT_ENQUEUE = 0,
    SS_CONFLICT_INTERRUPT = 1,
};

enum class WaterLevel_t : std::int32_t {
    WL_NotInWater = 0,
    WL_Feet = 1,
    WL_Knees = 2,
    WL_Waist = 3,
    WL_Chest = 4,
    WL_FullyUnderwater = 5,
    WL_Count = 6,
};

enum class WorldTextPanelVerticalAlign_t : std::int32_t {
    WORLDTEXT_VERTICAL_ALIGN_TOP = 0,
    WORLDTEXT_VERTICAL_ALIGN_CENTER = 1,
    WORLDTEXT_VERTICAL_ALIGN_BOTTOM = 2,
};

enum class RelativeLocationType_t : std::int32_t {
    WORLD_SPACE_POSITION = 0,
    RELATIVE_TO_ENTITY_IN_LOCAL_SPACE = 1,
    RELATIVE_TO_ENTITY_YAW_ONLY = 2,
    RELATIVE_TO_ENTITY_IN_WORLD_SPACE = 3,
};

enum class CLC_Messages : std::int32_t {
    clc_ClientInfo = 20,
    clc_Move = 21,
    clc_VoiceData = 22,
    clc_BaselineAck = 23,
    clc_RespondCvarValue = 25,
    clc_LoadingProgress = 27,
    clc_SplitPlayerConnect = 28,
    clc_SplitPlayerDisconnect = 30,
    clc_ServerStatus = 31,
    clc_RequestPause = 33,
    clc_CmdKeyValues = 34,
    clc_RconServerDetails = 35,
    clc_HltvReplay = 36,
    clc_Diagnostic = 37,
};

enum class EClientUIEvent : std::int32_t {
    EClientUIEvent_Invalid = 0,
    EClientUIEvent_DialogFinished = 1,
    EClientUIEvent_FireOutput = 2,
};

enum class AmmoPosition_t : std::int32_t {
    AMMO_POSITION_INVALID = -1,
    AMMO_POSITION_PRIMARY = 0,
    AMMO_POSITION_SECONDARY = 1,
    AMMO_POSITION_COUNT = 2,
};

enum class CDebugOverlayFilterType_t : std::int32_t {
    NONE = 0,
    TEXT = 1,
    ENTITY = 2,
    COUNT = 3,
    TACTICAL_SEARCH = 4,
    AI_SCHEDULE = 5,
    AI_TASK = 6,
    AI_EVENT = 7,
    AI_PATHFINDING = 8,
    END_SIM_HISTORY_TYPES = 9,
    COMBINED = -1,
};

enum class PreviewEOMCelebration : std::int32_t {
    INVALID = -1,
    WALKUP = 0,
    PUNCHING = 1,
    SWAGGER = 2,
    DROPDOWN = 3,
    STRETCH = 4,
    SWAT_FEMALE = 5,
    MASK_F = 6,
    GUERILLA = 7,
    GUERILLA02 = 8,
    GENDARMERIE = 9,
    SCUBA_FEMALE = 10,
    SCUBA_MALE = 11,
    AVA_DEFEAT = 12,
    GENDARMERIE_DEFEAT = 13,
    MAE_DEFEAT = 14,
    RICKSAW_DEFEAT = 15,
    SCUBA_FEMALE_DEFEAT = 16,
    SCUBA_MALE_DEFEAT = 17,
    CRASSWATER_DEFEAT = 18,
    DARRYL_DEFEAT = 19,
    DOCTOR_DEFEAT = 20,
    MUHLIK_DEFEAT = 21,
    VYPA_DEFEAT = 22,
};

enum class ESOMsg : std::int32_t {
    k_ESOMsg_Create = 21,
    k_ESOMsg_Update = 22,
    k_ESOMsg_Destroy = 23,
    k_ESOMsg_CacheSubscribed = 24,
    k_ESOMsg_CacheUnsubscribed = 25,
    k_ESOMsg_UpdateMultiple = 26,
    k_ESOMsg_CacheSubscriptionCheck = 27,
    k_ESOMsg_CacheSubscriptionRefresh = 28,
};

enum class SaveRestoreTableFlags_t : std::int32_t {
    FENTTABLE_NONE = 0,
    FENTTABLE_PLAYER = 2147483648,
    FENTTABLE_REMOVED = 1073741824,
    FENTTABLE_MOVEABLE = 536870912,
    FENTTABLE_GLOBAL = 268435456,
    FENTTABLE_PLAYERCHILD = 134217728,
    LEVELMASK_BIT_0 = 1,
    LEVELMASK_BIT_1 = 2,
    LEVELMASK_BIT_2 = 4,
    LEVELMASK_BIT_3 = 8,
    LEVELMASK_BIT_4 = 16,
    LEVELMASK_BIT_5 = 32,
    LEVELMASK_BIT_6 = 64,
    LEVELMASK_BIT_7 = 128,
    LEVELMASK_BIT_8 = 256,
    LEVELMASK_BIT_9 = 512,
    LEVELMASK_BIT_10 = 1024,
    LEVELMASK_BIT_11 = 2048,
    LEVELMASK_BIT_12 = 4096,
    LEVELMASK_BIT_13 = 8192,
    LEVELMASK_BIT_14 = 16384,
    LEVELMASK_BIT_15 = 32768,
};

enum class InputBitMask_t : std::int32_t {
    IN_NONE = 0,
    IN_ALL = -1,
    IN_ATTACK = 1,
    IN_JUMP = 2,
    IN_DUCK = 4,
    IN_FORWARD = 8,
    IN_BACK = 16,
    IN_USE = 32,
    IN_TURNLEFT = 128,
    IN_TURNRIGHT = 256,
    IN_MOVELEFT = 512,
    IN_MOVERIGHT = 1024,
    IN_ATTACK2 = 2048,
    IN_RELOAD = 8192,
    IN_SPEED = 65536,
    IN_JOYAUTOSPRINT = 131072,
    IN_FIRST_MOD_SPECIFIC_BIT = 4294967296,
    IN_USEORRELOAD = 4294967296,
    IN_SCORE = 8589934592,
    IN_ZOOM = 17179869184,
    IN_LOOK_AT_WEAPON = 34359738368,
};

enum class HitGroup_t : std::int32_t {
    HITGROUP_INVALID = -1,
    HITGROUP_GENERIC = 0,
    HITGROUP_HEAD = 1,
    HITGROUP_CHEST = 2,
    HITGROUP_STOMACH = 3,
    HITGROUP_LEFTARM = 4,
    HITGROUP_RIGHTARM = 5,
    HITGROUP_LEFTLEG = 6,
    HITGROUP_RIGHTLEG = 7,
    HITGROUP_NECK = 8,
    HITGROUP_UNUSED = 9,
    HITGROUP_GEAR = 10,
    HITGROUP_SPECIAL = 11,
    HITGROUP_COUNT = 12,
};

enum class FuncRotatorRotationSummaryFlags_t : std::int32_t {
    eNone = 0,
    eRotateBegin = 1,
    eEventsDispatched = 2,
    eRotateCompleted = 4,
    eOscillateStart = 8,
    eOscillateEnd = 16,
    eOscillateArrived = 32,
    eOscillateDepart = 64,
};

enum class PointWorldTextReorientMode_t : std::int32_t {
    POINT_WORLD_TEXT_REORIENT_NONE = 0,
    POINT_WORLD_TEXT_REORIENT_AROUND_UP = 1,
};

enum class DebugOverlayBits_t : std::int32_t {
    OVERLAY_TEXT_BIT = 1,
    OVERLAY_NAME_BIT = 2,
    OVERLAY_BBOX_BIT = 4,
    OVERLAY_PIVOT_BIT = 8,
    OVERLAY_MESSAGE_BIT = 16,
    OVERLAY_ABSBOX_BIT = 32,
    OVERLAY_RBOX_BIT = 64,
    OVERLAY_SHOW_BLOCKSLOS = 128,
    OVERLAY_ATTACHMENTS_BIT = 256,
    OVERLAY_INTERPOLATED_ATTACHMENTS_BIT = 512,
    OVERLAY_INTERPOLATED_PIVOT_BIT = 1024,
    OVERLAY_SKELETON_BIT = 2048,
    OVERLAY_INTERPOLATED_SKELETON_BIT = 4096,
    OVERLAY_TRIGGER_BOUNDS_BIT = 8192,
    OVERLAY_HITBOX_BIT = 16384,
    OVERLAY_INTERPOLATED_HITBOX_BIT = 32768,
    OVERLAY_AUTOAIM_BIT = 65536,
    OVERLAY_NPC_SELECTED_BIT = 131072,
    OVERLAY_JOINT_INFO_BIT = 262144,
    OVERLAY_NPC_ROUTE_BIT = 524288,
    OVERLAY_VISIBILITY_TRACES_BIT = 1048576,
    OVERLAY_NPC_ENEMIES_BIT = 4194304,
    OVERLAY_NPC_CONDITIONS_BIT = 8388608,
    OVERLAY_NPC_COMBAT_BIT = 16777216,
    OVERLAY_NPC_TASK_BIT = 33554432,
    OVERLAY_NPC_BODYLOCATIONS = 67108864,
    OVERLAY_NPC_VIEWCONE_BIT = 134217728,
    OVERLAY_NPC_KILL_BIT = 268435456,
    OVERLAY_BUDDHA_MODE = 1073741824,
    OVERLAY_NPC_STEERING_REGULATIONS = 2147483648,
    OVERLAY_NPC_TASK_TEXT_BIT = 4294967296,
    OVERLAY_PROP_DEBUG = 8589934592,
    OVERLAY_NPC_RELATION_BIT = 17179869184,
    OVERLAY_VIEWOFFSET = 34359738368,
    OVERLAY_VCOLLIDE_WIREFRAME_BIT = 68719476736,
    OVERLAY_NPC_SCRIPTED_COMMANDS_BIT = 137438953472,
    OVERLAY_ACTORNAME_BIT = 274877906944,
    OVERLAY_NPC_CONDITIONS_TEXT_BIT = 549755813888,
    OVERLAY_NPC_ABILITY_RANGE_DEBUG_BIT = 1099511627776,
    OVERLAY_MINIMAL_TEXT = 2199023255552,
    OVERLAY_NPC_GOD_MODE = 4398046511104,
    OVERLAY_NPC_ANIM_AI_HANDSHAKES_BIT = 8796093022208,
    OVERLAY_NPC_PATH_QUERIES_BIT = 17592186044416,
};

enum class AmmoFlags_t : std::int32_t {
    AMMO_FORCE_DROP_IF_CARRIED = 1,
    AMMO_RESERVE_STAYS_WITH_WEAPON = 2,
    AMMO_FLAG_MAX = 2,
};

enum class EBaseGameEvents : std::int32_t {
    GE_VDebugGameSessionIDEvent = 200,
    GE_PlaceDecalEvent = 201,
    GE_ClearWorldDecalsEvent = 202,
    GE_ClearEntityDecalsEvent = 203,
    GE_ClearDecalsForEntityEvent = 204,
    GE_Source1LegacyGameEventList = 205,
    GE_Source1LegacyListenEvents = 206,
    GE_Source1LegacyGameEvent = 207,
    GE_SosStartSoundEvent = 208,
    GE_SosStopSoundEvent = 209,
    GE_SosSetSoundEventParams = 210,
    GE_SosSetLibraryStackFields = 211,
    GE_SosStopSoundEventHash = 212,
    GE_ClothStiffenAnimEvent = 213,
    GE_ClothEffectAnimEvent = 214,
};

enum class DecalFlags_t : std::int32_t {
    eNone = 0,
    eCannotClear = 1,
    eDecalProjectToBackfaces = 2,
    eAll = 4294967295,
    eAllButCannotClear = 4294967294,
};

enum class ECstrike15UserMessages : std::int32_t {
    CS_UM_VGUIMenu = 301,
    CS_UM_Geiger = 302,
    CS_UM_Train = 303,
    CS_UM_HudText = 304,
    CS_UM_SayText_CSGOLegacy = 305,
    CS_UM_SayText2_CSGOLegacy = 306,
    CS_UM_TextMsg_CSGOLegacy = 307,
    CS_UM_HudMsg = 308,
    CS_UM_ResetHud = 309,
    CS_UM_GameTitle = 310,
    CS_UM_Shake = 312,
    CS_UM_Fade = 313,
    CS_UM_Rumble = 314,
    CS_UM_CloseCaption = 315,
    CS_UM_CloseCaptionDirect = 316,
    CS_UM_SendAudio = 317,
    CS_UM_RawAudio = 318,
    CS_UM_VoiceMask = 319,
    CS_UM_RequestState = 320,
    CS_UM_Damage = 321,
    CS_UM_RadioText = 322,
    CS_UM_HintText = 323,
    CS_UM_KeyHintText = 324,
    CS_UM_ProcessSpottedEntityUpdate = 325,
    CS_UM_ReloadEffect = 326,
    CS_UM_AdjustMoney = 327,
    CS_UM_UpdateTeamMoney_CSGOLegacy = 328,
    CS_UM_StopSpectatorMode = 329,
    CS_UM_KillCam = 330,
    CS_UM_DesiredTimescale = 331,
    CS_UM_CurrentTimescale = 332,
    CS_UM_AchievementEvent = 333,
    CS_UM_MatchEndConditions = 334,
    CS_UM_DisconnectToLobby = 335,
    CS_UM_PlayerStatsUpdate = 336,
    CS_UM_ClientInfo = 339,
    CS_UM_XRankGet = 340,
    CS_UM_XRankUpd = 341,
    CS_UM_CallVoteFailed = 345,
    CS_UM_VoteStart = 346,
    CS_UM_VotePass = 347,
    CS_UM_VoteFailed = 348,
    CS_UM_VoteSetup = 349,
    CS_UM_ServerRankRevealAll = 350,
    CS_UM_SendLastKillerDamageToClient = 351,
    CS_UM_ServerRankUpdate = 352,
    CS_UM_ItemPickup = 353,
    CS_UM_ShowMenu = 354,
    CS_UM_BarTime = 355,
    CS_UM_AmmoDenied = 356,
    CS_UM_MarkAchievement = 357,
    CS_UM_MatchStatsUpdate = 358,
    CS_UM_ItemDrop = 359,
    CS_UM_SendPlayerItemDrops = 361,
    CS_UM_RoundBackupFilenames = 362,
    CS_UM_SendPlayerItemFound = 363,
    CS_UM_ReportHit = 364,
    CS_UM_XpUpdate = 365,
    CS_UM_QuestProgress = 366,
    CS_UM_ScoreLeaderboardData = 367,
    CS_UM_PlayerDecalDigitalSignature = 368,
    CS_UM_WeaponSound = 369,
    CS_UM_UpdateScreenHealthBar = 370,
    CS_UM_EntityOutlineHighlight = 371,
    CS_UM_SSUI = 372,
    CS_UM_SurvivalStats = 373,
    CS_UM_DisconnectToLobby2 = 374,
    CS_UM_EndOfMatchAllPlayersData = 375,
    CS_UM_PostRoundDamageReport = 376,
    CS_UM_RoundEndReportData = 379,
    CS_UM_CurrentRoundOdds = 380,
    CS_UM_DeepStats = 381,
    CS_UM_ShootInfo = 383,
    CS_UM_CounterStrafe = 385,
    CS_UM_DamagePrediction = 386,
    CS_UM_RecurringMissionSchema = 387,
    CS_UM_SendPlayerLoadout = 388,
    CS_UM_WeaponMagDrop = 389,
    CS_UM_CustomHudClicked = 390,
};

enum class HierarchyType_t : std::int32_t {
    HIERARCHY_NONE = 0,
    HIERARCHY_BONE_MERGE = 1,
    HIERARCHY_ATTACHMENT = 2,
    HIERARCHY_ABSORIGIN = 3,
    HIERARCHY_BONE = 4,
    HIERARCHY_TYPE_COUNT = 5,
};

enum class doorCheck_e : std::int32_t {
    DOOR_CHECK_FORWARD = 0,
    DOOR_CHECK_BACKWARD = 1,
    DOOR_CHECK_FULL = 2,
};

enum class BeamType_t : std::int32_t {
    BEAM_INVALID = 0,
    BEAM_POINTS = 1,
    BEAM_ENTPOINT = 2,
    BEAM_ENTS = 3,
    xxBEAM_HOSExxunused = 4,
    BEAM_SPLINE = 5,
    BEAM_LASER = 6,
};

enum class ReplayEventType_t : std::int32_t {
    REPLAY_EVENT_CANCEL = 0,
    REPLAY_EVENT_DEATH = 1,
    REPLAY_EVENT_GENERIC = 2,
    REPLAY_EVENT_STUCK_NEED_FULL_UPDATE = 3,
    REPLAY_EVENT_VICTORY = 4,
};

enum class EntitySubclassScope_t : std::int32_t {
    SUBCLASS_SCOPE_NONE = -1,
    SUBCLASS_SCOPE_PRECIPITATION = 0,
    SUBCLASS_SCOPE_PLAYER_WEAPONS = 1,
    SUBCLASS_SCOPE_COUNT = 2,
};

enum class PointTemplateClientOnlyEntityBehavior_t : std::int32_t {
    CREATE_FOR_CURRENTLY_CONNECTED_CLIENTS_ONLY = 0,
    CREATE_FOR_CLIENTS_WHO_CONNECT_LATER = 1,
};

enum class CDebugOverlayCombinedTypes_t : std::int32_t {
    ALL = 0,
    ANY = 1,
    COUNT = 2,
};

enum class ShatterGlassStressType : std::int32_t {
    SHATTERGLASS_BLUNT = 0,
    SHATTERGLASS_BALLISTIC = 1,
    SHATTERGLASS_PULSE = 2,
    SHATTERGLASS_EXPLOSIVE = 3,
};

enum class TrackOrientationType_t : std::int32_t {
    TrackOrientation_Fixed = 0,
    TrackOrientation_FacePath = 1,
    TrackOrientation_FacePathAngles = 2,
};

enum class WeaponSwitchReason_t : std::int32_t {
    eDrawn = 0,
    eEquipped = 1,
    eUserInitiatedSwitchToLast = 2,
    eUserInitiatedUIKeyPress = 3,
    eUserInitiatedSwitchHands = 4,
};

enum class ValueRemapperRatchetType_t : std::int32_t {
    RatchetType_Absolute = 0,
    RatchetType_EachEngage = 1,
};

enum class NavDirType : std::int32_t {
    NORTH = 0,
    EAST = 1,
    SOUTH = 2,
    WEST = 3,
    NUM_NAV_DIR_TYPE_DIRECTIONS = 4,
};

enum class EGCBaseMsg : std::int32_t {
    k_EMsgGCSystemMessage = 4001,
    k_EMsgGCReplicateConVars = 4002,
    k_EMsgGCConVarUpdated = 4003,
    k_EMsgGCInQueue = 4008,
    k_EMsgGCInviteToParty = 4501,
    k_EMsgGCInvitationCreated = 4502,
    k_EMsgGCPartyInviteResponse = 4503,
    k_EMsgGCKickFromParty = 4504,
    k_EMsgGCLeaveParty = 4505,
    k_EMsgGCServerAvailable = 4506,
    k_EMsgGCClientConnectToServer = 4507,
    k_EMsgGCGameServerInfo = 4508,
    k_EMsgGCError = 4509,
    k_EMsgGCReplay_UploadedToYouTube = 4510,
    k_EMsgGCLANServerAvailable = 4511,
};

enum class CRR_Response__ResponseEnum_t : std::int32_t {
    MAX_RESPONSE_NAME = 192,
    MAX_RULE_NAME = 128,
};

enum class MoveMountingAmount_t : std::int32_t {
    MOVE_MOUNT_NONE = 0,
    MOVE_MOUNT_LOW = 1,
    MOVE_MOUNT_HIGH = 2,
    MOVE_MOUNT_MAXCOUNT = 3,
};

enum class EHudPanelClassStatus_t : std::int32_t {
    k_eHudPanelClassStatus_Undefined = -1,
    k_eHudPanelClassStatus_DoesNotHaveClass = 0,
    k_eHudPanelClassStatus_HasClass = 1,
};

enum class GCClientLauncherType : std::int32_t {
    GCClientLauncherType_DEFAULT = 0,
    GCClientLauncherType_PERFECTWORLD = 1,
    GCClientLauncherType_STEAMCHINA = 2,
    GCClientLauncherType_SOURCE2 = 3,
};

enum class ChoreoStrafeMode_t : std::int32_t {
    DEFAULT = 0,
    ENABLE = 1,
    DISABLE = 2,
};

enum class HoverPoseFlags_t : std::int32_t {
    eNone = 0,
    ePosition = 1,
    eAngles = 2,
};

enum class RenderFx_t : std::int32_t {
    kRenderFxNone = 0,
    kRenderFxPulseSlow = 1,
    kRenderFxPulseFast = 2,
    kRenderFxPulseSlowWide = 3,
    kRenderFxPulseFastWide = 4,
    kRenderFxFadeSlow = 5,
    kRenderFxFadeFast = 6,
    kRenderFxSolidSlow = 7,
    kRenderFxSolidFast = 8,
    kRenderFxStrobeSlow = 9,
    kRenderFxStrobeFast = 10,
    kRenderFxStrobeFaster = 11,
    kRenderFxFlickerSlow = 12,
    kRenderFxFlickerFast = 13,
    kRenderFxFadeOut = 14,
    kRenderFxFadeIn = 15,
    kRenderFxPulseFastWider = 16,
    kRenderFxMax = 17,
};

enum class vote_create_failed_t : std::int32_t {
    VOTE_FAILED_GENERIC = 0,
    VOTE_FAILED_TRANSITIONING_PLAYERS = 1,
    VOTE_FAILED_RATE_EXCEEDED = 2,
    VOTE_FAILED_YES_MUST_EXCEED_NO = 3,
    VOTE_FAILED_QUORUM_FAILURE = 4,
    VOTE_FAILED_ISSUE_DISABLED = 5,
    VOTE_FAILED_MAP_NOT_FOUND = 6,
    VOTE_FAILED_MAP_NAME_REQUIRED = 7,
    VOTE_FAILED_FAILED_RECENTLY = 8,
    VOTE_FAILED_TEAM_CANT_CALL = 9,
    VOTE_FAILED_WAITINGFORPLAYERS = 10,
    VOTE_FAILED_PLAYERNOTFOUND = 11,
    VOTE_FAILED_CANNOT_KICK_ADMIN = 12,
    VOTE_FAILED_SCRAMBLE_IN_PROGRESS = 13,
    VOTE_FAILED_SPECTATOR = 14,
    VOTE_FAILED_FAILED_RECENT_KICK = 15,
    VOTE_FAILED_FAILED_RECENT_CHANGEMAP = 16,
    VOTE_FAILED_FAILED_RECENT_SWAPTEAMS = 17,
    VOTE_FAILED_FAILED_RECENT_SCRAMBLETEAMS = 18,
    VOTE_FAILED_FAILED_RECENT_RESTART = 19,
    VOTE_FAILED_SWAP_IN_PROGRESS = 20,
    VOTE_FAILED_DISABLED = 21,
    VOTE_FAILED_NEXTLEVEL_SET = 22,
    VOTE_FAILED_TOO_EARLY_SURRENDER = 23,
    VOTE_FAILED_MATCH_PAUSED = 24,
    VOTE_FAILED_MATCH_NOT_PAUSED = 25,
    VOTE_FAILED_NOT_IN_WARMUP = 26,
    VOTE_FAILED_NOT_10_PLAYERS = 27,
    VOTE_FAILED_TIMEOUT_ACTIVE = 28,
    VOTE_FAILED_TIMEOUT_INACTIVE = 29,
    VOTE_FAILED_TIMEOUT_EXHAUSTED = 30,
    VOTE_FAILED_CANT_ROUND_END = 31,
    VOTE_FAILED_REMATCH = 32,
    VOTE_FAILED_CONTINUE = 33,
    VOTE_FAILED_MAX = 34,
};

enum class RumbleEffect_t : std::int32_t {
    RUMBLE_INVALID = -1,
    RUMBLE_STOP_ALL = 0,
    RUMBLE_PISTOL = 1,
    RUMBLE_357 = 2,
    RUMBLE_SMG1 = 3,
    RUMBLE_AR2 = 4,
    RUMBLE_SHOTGUN_SINGLE = 5,
    RUMBLE_SHOTGUN_DOUBLE = 6,
    RUMBLE_AR2_ALT_FIRE = 7,
    RUMBLE_RPG_MISSILE = 8,
    RUMBLE_CROWBAR_SWING = 9,
    RUMBLE_AIRBOAT_GUN = 10,
    RUMBLE_JEEP_ENGINE_LOOP = 11,
    RUMBLE_FLAT_LEFT = 12,
    RUMBLE_FLAT_RIGHT = 13,
    RUMBLE_FLAT_BOTH = 14,
    RUMBLE_DMG_LOW = 15,
    RUMBLE_DMG_MED = 16,
    RUMBLE_DMG_HIGH = 17,
    RUMBLE_FALL_LONG = 18,
    RUMBLE_FALL_SHORT = 19,
    RUMBLE_PHYSCANNON_OPEN = 20,
    RUMBLE_PHYSCANNON_PUNT = 21,
    RUMBLE_PHYSCANNON_LOW = 22,
    RUMBLE_PHYSCANNON_MEDIUM = 23,
    RUMBLE_PHYSCANNON_HIGH = 24,
    NUM_RUMBLE_EFFECTS = 25,
};

enum class LatchDirtyPermission_t : std::int32_t {
    LATCH_DIRTY_DISALLOW = 0,
    LATCH_DIRTY_SERVER_CONTROLLED = 1,
    LATCH_DIRTY_CLIENT_SIMULATED = 2,
    LATCH_DIRTY_PREDICTION = 3,
    LATCH_DIRTY_FRAMESIMULATE = 4,
    LATCH_DIRTY_PARTICLE_SIMULATE = 5,
};

enum class DoorState_t : std::int32_t {
    DOOR_STATE_CLOSED = 0,
    DOOR_STATE_OPENING = 1,
    DOOR_STATE_OPEN = 2,
    DOOR_STATE_CLOSING = 3,
    DOOR_STATE_AJAR = 4,
};

enum class ChoreoLookAtMode_t : std::int32_t {
    eInvalid = -1,
    eChest = 0,
    eHead = 1,
    eEyesOnly = 2,
};

enum class ChatIgnoreType_t : std::int32_t {
    CHAT_IGNORE_NONE = 0,
    CHAT_IGNORE_ALL = 1,
    CHAT_IGNORE_TEAM = 2,
};

enum class PlayerConnectedState : std::int32_t {
    NeverConnected = -1,
    Connected = 0,
    Connecting = 1,
    Reconnecting = 2,
    Disconnecting = 3,
    Disconnected = 4,
    Reserved = 5,
};

enum class PreviewCharacterBannerAnimation : std::int32_t {
    INVALID = -1,
    IDLE_OFFSCREEN = 0,
    BANNER_AWP_ACE_GUN = 1,
    BANNER_AWP_ACE_A = 2,
    BANNER_AWP_ACE_B = 3,
    BANNER_AWP_ACE_C = 4,
    BANNER_AWP_ACE_D = 5,
    BANNER_AWP_ACE_E = 6,
    BANNER_PISTOL3SHOT = 7,
    BANNER_3SHOT_A = 8,
    BANNER_3SHOT_B = 9,
    BANNER_3SHOT_C = 10,
    BANNER_PISTOL4SHOT = 11,
    BANNER_4SHOT_A = 12,
    BANNER_4SHOT_B = 13,
    BANNER_4SHOT_C = 14,
    BANNER_4SHOT_D = 15,
    CELEBRATE_STRETCH_NOWEAP_IDLE0 = 16,
    BANNER_BOMB_PLANT = 17,
    BANNER_BOMB_DEFUSAL_VER1 = 18,
    BANNER_BOMB_DEFUSAL_VER2 = 19,
    BANNER_FIRE = 20,
    BANNER_BOMB_BLAST_TOSS = 21,
    BANNER_BOMB_BLAST01 = 22,
    BANNER_BOMB_BLAST02 = 23,
    BANNER_BOMB_BLAST03 = 24,
    BANNER_CELEBRATE_01 = 25,
    BANNER_CELEBRATE_02 = 26,
    BANNER_CELEBRATE_03 = 27,
    BANNER_CELEBRATE_04 = 28,
};

enum class EntityDissolveType_t : std::int32_t {
    ENTITY_DISSOLVE_INVALID = -1,
    ENTITY_DISSOLVE_NORMAL = 0,
    ENTITY_DISSOLVE_ELECTRICAL = 1,
    ENTITY_DISSOLVE_ELECTRICAL_LIGHT = 2,
    ENTITY_DISSOLVE_CORE = 3,
};

enum class navproperties_t : std::int32_t {
    NAV_IGNORE = 1,
};

enum class Bidirectional_Messages : std::int32_t {
    bi_RebroadcastGameEvent = 16,
    bi_RebroadcastSource = 17,
    bi_GameEvent_DEPRECATED = 18,
    bi_PredictionEvent = 19,
};

enum class EntityEffects_t : std::int32_t {
    DEPRICATED_EF_NOINTERP = 8,
    EF_NOSHADOW = 16,
    EF_NODRAW = 32,
    EF_NORECEIVESHADOW = 64,
    EF_PARENT_ANIMATES = 512,
    EF_NODRAW_BUT_TRANSMIT = 1024,
    EF_MAX_BITS = 10,
};

enum class ChoreoExternalAnimgraphControlState_t : std::int32_t {
    eNone = 0,
    eExit = 1,
    eFallbackExit = 2,
    eState01 = 3,
    eState02 = 4,
    eState03 = 5,
    eState04 = 6,
    eState05 = 7,
    eLooping = 8,
    eCount = 9,
};

enum class SolidType_t : std::int32_t {
    SOLID_NONE = 0,
    SOLID_BSP = 1,
    SOLID_BBOX = 2,
    SOLID_OBB = 3,
    SOLID_SPHERE = 4,
    SOLID_POINT = 5,
    SOLID_VPHYSICS = 6,
    SOLID_CAPSULE = 7,
    SOLID_CYLINDER = 8,
    SOLID_LAST = 9,
};

enum class DamageTypes_t : std::int32_t {
    DMG_GENERIC = 0,
    DMG_CRUSH = 1,
    DMG_BULLET = 2,
    DMG_SLASH = 4,
    DMG_BURN = 8,
    DMG_VEHICLE = 16,
    DMG_FALL = 32,
    DMG_BLAST = 64,
    DMG_CLUB = 128,
    DMG_SHOCK = 256,
    DMG_SONIC = 512,
    DMG_ENERGYBEAM = 1024,
    DMG_BUCKSHOT = 2048,
    DMG_BLAST_SURFACE = 4096,
    DMG_DISSOLVE = 8192,
    DMG_DROWN = 16384,
    DMG_POISON = 32768,
    DMG_RADIATION = 65536,
    DMG_DROWNRECOVER = 131072,
    DMG_ACID = 262144,
    DMG_LASTGENERICFLAG = 262144,
    DMG_HEADSHOT = 524288,
};

enum class PointWorldTextJustifyVertical_t : std::int32_t {
    POINT_WORLD_TEXT_JUSTIFY_VERTICAL_BOTTOM = 0,
    POINT_WORLD_TEXT_JUSTIFY_VERTICAL_CENTER = 1,
    POINT_WORLD_TEXT_JUSTIFY_VERTICAL_TOP = 2,
};

enum class EProtoDebugVisiblity : std::int32_t {
    k_EProtoDebugVisibility_Always = 0,
    k_EProtoDebugVisibility_Server = 70,
    k_EProtoDebugVisibility_ValveServer = 80,
    k_EProtoDebugVisibility_GC = 90,
    k_EProtoDebugVisibility_Never = 100,
};

enum class attributeprovidertypes_t : std::int32_t {
    PROVIDER_GENERIC = 0,
    PROVIDER_WEAPON = 1,
};

enum class EGCMsgResponse : std::int32_t {
    k_EGCMsgResponseOK = 0,
    k_EGCMsgResponseDenied = 1,
    k_EGCMsgResponseServerError = 2,
    k_EGCMsgResponseTimeout = 3,
    k_EGCMsgResponseInvalid = 4,
    k_EGCMsgResponseNoMatch = 5,
    k_EGCMsgResponseUnknownError = 6,
    k_EGCMsgResponseNotLoggedOn = 7,
    k_EGCMsgFailedToCreate = 8,
    k_EGCMsgLimitExceeded = 9,
    k_EGCMsgCommitUnfinalized = 10,
};

enum class MoveCollide_t : std::int32_t {
    MOVECOLLIDE_DEFAULT = 0,
    MOVECOLLIDE_FLY_BOUNCE = 1,
    MOVECOLLIDE_FLY_CUSTOM = 2,
    MOVECOLLIDE_FLY_SLIDE = 3,
    MOVECOLLIDE_COUNT = 4,
    MOVECOLLIDE_MAX_BITS = 3,
};

enum class IChoreoServices__ChoreoState_t : std::int32_t {
    STATE_PRE_SCRIPT = 0,
    STATE_WAIT_FOR_SCRIPT = 1,
    STATE_WALK_TO_MARK = 2,
    STATE_SYNCHRONIZE_SCRIPT = 3,
    STATE_PLAY_SCRIPT = 4,
    STATE_PLAY_SCRIPT_POST_IDLE = 5,
    STATE_PLAY_SCRIPT_POST_IDLE_DONE = 6,
};

enum class PrefetchType : std::int32_t {
    PFT_SOUND = 0,
};

enum class ValueRemapperOutputType_t : std::int32_t {
    OutputType_AnimationCycle = 0,
    OutputType_RotationX = 1,
    OutputType_RotationY = 2,
    OutputType_RotationZ = 3,
};

enum class ETEProtobufIds : std::int32_t {
    TE_EffectDispatchId = 400,
    TE_ArmorRicochetId = 401,
    TE_BeamEntPointId = 402,
    TE_BeamEntsId = 403,
    TE_BeamPointsId = 404,
    TE_BeamRingId = 405,
    TE_BubblesId = 408,
    TE_BubbleTrailId = 409,
    TE_DecalId = 410,
    TE_WorldDecalId = 411,
    TE_EnergySplashId = 412,
    TE_FizzId = 413,
    TE_ShatterSurfaceId = 414,
    TE_GlowSpriteId = 415,
    TE_ImpactId = 416,
    TE_MuzzleFlashId = 417,
    TE_BloodStreamId = 418,
    TE_ExplosionId = 419,
    TE_DustId = 420,
    TE_LargeFunnelId = 421,
    TE_SparksId = 422,
    TE_PhysicsPropId = 423,
    TE_SmokeId = 426,
};

enum class INavObstacle__NavObstacleType_t : std::int32_t {
    NAV_OBSTACLE_TYPE_INVALID = -1,
    NAV_OBSTACLE_TYPE_NONE = 0,
    NAV_OBSTACLE_TYPE_AVOID = 1,
    NAV_OBSTACLE_TYPE_CONN = 2,
    NAV_OBSTACLE_TYPE_BLOCK = 3,
    NAV_OBSTACLE_TYPE_PERMANENT_BLOCK = 4,
};

enum class PointTemplateOwnerSpawnGroupType_t : std::int32_t {
    INSERT_INTO_POINT_TEMPLATE_SPAWN_GROUP = 0,
    INSERT_INTO_CURRENTLY_ACTIVE_SPAWN_GROUP = 1,
    INSERT_INTO_NEWLY_CREATED_SPAWN_GROUP = 2,
};

enum class EContributionScoreFlag_t : std::int32_t {
    k_EContributionScoreFlag_Default = 0,
    k_EContributionScoreFlag_Objective = 1,
    k_EContributionScoreFlag_Bullets = 2,
};

enum class CCSPlayerAnimationState__Direction_t : std::int32_t {
    None = 0,
    N = 1,
    NE = 2,
    E = 3,
    SE = 4,
    S = 5,
    SW = 6,
    W = 7,
    NW = 8,
};

enum class eSplinePushType : std::int32_t {
    k_eSplinePushAlong = 0,
    k_eSplinePushAway = 1,
    k_eSplinePushTowards = 2,
};

enum class ChoreoScriptedMoveTo_t : std::int32_t {
    eWait = 0,
    eMoveWithGait = 1,
    eTeleport = 2,
    eWaitFacing = 3,
};

enum class WeaponGameplayAnimState : std::int32_t {
    WPN_ANIMSTATE_UNINITIALIZED = 0,
    WPN_ANIMSTATE_DROPPED = 1,
    WPN_ANIMSTATE_HOLSTERED = 10,
    WPN_ANIMSTATE_DEPLOY = 11,
    WPN_ANIMSTATE_IDLE = 50,
    WPN_ANIMSTATE_SHOOT_PRIMARY = 100,
    WPN_ANIMSTATE_SHOOT_SECONDARY = 101,
    WPN_ANIMSTATE_SHOOT_DRYFIRE = 102,
    WPN_ANIMSTATE_CHARGE = 103,
    WPN_ANIMSTATE_GRENADE_PULL_PIN = 200,
    WPN_ANIMSTATE_GRENADE_READY = 201,
    WPN_ANIMSTATE_GRENADE_THROW = 202,
    WPN_ANIMSTATE_C4_PLANT = 300,
    WPN_ANIMSTATE_HEALTHSHOT_INJECT = 400,
    WPN_ANIMSTATE_KNIFE_PRIMARY_HIT = 500,
    WPN_ANIMSTATE_KNIFE_PRIMARY_MISS = 501,
    WPN_ANIMSTATE_KNIFE_SECONDARY_HIT = 502,
    WPN_ANIMSTATE_KNIFE_SECONDARY_MISS = 503,
    WPN_ANIMSTATE_KNIFE_PRIMARY_STAB = 504,
    WPN_ANIMSTATE_KNIFE_SECONDARY_STAB = 505,
    WPN_ANIMSTATE_SILENCER_APPLY = 600,
    WPN_ANIMSTATE_SILENCER_REMOVE = 601,
    WPN_ANIMSTATE_RELOAD = 800,
    WPN_ANIMSTATE_RELOAD_OUTRO = 801,
    WPN_ANIMSTATE_RELOAD_SILENT = 802,
    WPN_ANIMSTATE_RELOAD_OUTRO_SILENT = 803,
    WPN_ANIMSTATE_INSPECT = 1000,
    WPN_ANIMSTATE_INSPECT_OUTRO = 1001,
    WPN_ANIMSTATE_INVENTORY_UI_TUMBLE = 1500,
    WPN_ANIMSTATE_INVENTORY_UI_KEYCHAIN_APPLY = 1501,
    WPN_ANIMSTATE_END_VALID = 2000,
};

enum class EDestructiblePartRadiusDamageApplyType : std::int32_t {
    ScaleByExplosionRadius = 0,
    PrioritizeClosestPart = 1,
};

enum class EntityDistanceMode_t : std::int32_t {
    eOriginToOrigin = 0,
    eCenterToCenter = 1,
    eAxisToAxis = 2,
};

enum class PulseTraceContents_t : std::int32_t {
    STATIC_LEVEL = 0,
    SOLID = 1,
};

enum class NavAttributeDynamicType : std::int32_t {
    NAV_AREA_NONE = 0,
    NAV_AREA_UNDER_WATER = 1,
    NAV_AREA_UNDER_WATER_DEEP = 2,
    NAV_AREA_EXTERNALLY_CREATED = 4,
    NAV_AREA_SHOULD_BE_DESTROYED = 8,
    NAV_AREA_CREATED_BY_OBSTACLE_MGR = 16,
    NAV_AREA_SPLIT_BY_OBSTACLE_MGR = 32,
    NAV_AREA_SPLIT_OBS_CONTAINED = 64,
    NAV_AREA_SPLIT_OBS_BASE_CONTAINED = 128,
    NAV_AREA_HAS_LADDERS = 256,
    NAV_AREA_NAV_LINK = 512,
    NAV_AREA_NAV_LINK_TERMINUS = 1024,
    NAV_AREA_CONNECTED_TO_NAV_LINK_OUT = 2048,
    NAV_AREA_CONNECTED_TO_NAV_LINK_IN = 4096,
    NAV_AREA_MOVABLE = 8192,
    NAV_AREA_DOCK = 16384,
    NAV_AREA_DOCKING_CANDIDATE = 32768,
    NAV_AREA_BOUNDARY = 65536,
    NAV_AREA_HAS_TACTICAL_SEARCH_ANNOTATIONS = 131072,
    NAV_AREA_DEFORMABLE = 262144,
    NAV_AREA_DEFORMABLE_DOCK = 524288,
    NAV_AREA_LINK_AUTO_ADJUST = 1048576,
};

enum class PointWorldTextJustifyHorizontal_t : std::int32_t {
    POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_LEFT = 0,
    POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_CENTER = 1,
    POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_RIGHT = 2,
};

enum class EHapticPulseType : std::int32_t {
    VR_HAND_HAPTIC_PULSE_LIGHT = 0,
    VR_HAND_HAPTIC_PULSE_MEDIUM = 1,
    VR_HAND_HAPTIC_PULSE_STRONG = 2,
};

enum class EGCItemMsg : std::int32_t {
    k_EMsgGCBase = 1000,
    k_EMsgGCSetItemPosition = 1001,
    k_EMsgGCCraft = 1002,
    k_EMsgGCCraftResponse = 1003,
    k_EMsgGCDelete = 1004,
    k_EMsgGCVerifyCacheSubscription_DEPRECATED = 1005,
    k_EMsgGCNameItem = 1006,
    k_EMsgGCUnlockCrate_DEPRECATED = 1007,
    k_EMsgGCUnlockCrateResponse = 1008,
    k_EMsgGCPaintItem_DEPRECATED = 1009,
    k_EMsgGCPaintItemResponse_DEPRECATED = 1010,
    k_EMsgGCGoldenWrenchBroadcast_DEPRECATED = 1011,
    k_EMsgGCMOTDRequest_DEPRECATED = 1012,
    k_EMsgGCMOTDRequestResponse_DEPRECATED = 1013,
    k_EMsgGCAddItemToSocket_DEPRECATED = 1014,
    k_EMsgGCAddItemToSocketResponse_DEPRECATED = 1015,
    k_EMsgGCAddSocketToBaseItem_DEPRECATED = 1016,
    k_EMsgGCAddSocketToItem_DEPRECATED = 1017,
    k_EMsgGCAddSocketToItemResponse_DEPRECATED = 1018,
    k_EMsgGCNameBaseItem = 1019,
    k_EMsgGCNameBaseItemResponse = 1020,
    k_EMsgGCRemoveSocketItem_DEPRECATED = 1021,
    k_EMsgGCRemoveSocketItemResponse_DEPRECATED = 1022,
    k_EMsgGCCustomizeItemTexture_DEPRECATED = 1023,
    k_EMsgGCCustomizeItemTextureResponse_DEPRECATED = 1024,
    k_EMsgGCUseItemRequest = 1025,
    k_EMsgGCUseItemResponse = 1026,
    k_EMsgGCGiftedItems_DEPRECATED = 1027,
    k_EMsgGCRemoveItemName = 1030,
    k_EMsgGCRemoveItemPaint_DEPRECATED = 1031,
    k_EMsgGCGiftWrapItem_DEPRECATED = 1032,
    k_EMsgGCGiftWrapItemResponse_DEPRECATED = 1033,
    k_EMsgGCDeliverGift_DEPRECATED = 1034,
    k_EMsgGCDeliverGiftResponseGiver_DEPRECATED = 1035,
    k_EMsgGCDeliverGiftResponseReceiver_DEPRECATED = 1036,
    k_EMsgGCUnwrapGiftRequest_DEPRECATED = 1037,
    k_EMsgGCUnwrapGiftResponse_DEPRECATED = 1038,
    k_EMsgGCSetItemStyle_DEPRECATED = 1039,
    k_EMsgGCUsedClaimCodeItem_DEPRECATED = 1040,
    k_EMsgGCSortItems = 1041,
    k_EMsgGC_RevolvingLootList_DEPRECATED = 1042,
    k_EMsgGCLookupAccount_DEPRECATED = 1043,
    k_EMsgGCLookupAccountResponse_DEPRECATED = 1044,
    k_EMsgGCLookupAccountName_DEPRECATED = 1045,
    k_EMsgGCLookupAccountNameResponse_DEPRECATED = 1046,
    k_EMsgGCUpdateItemSchema = 1049,
    k_EMsgGCRemoveCustomTexture_DEPRECATED = 1051,
    k_EMsgGCRemoveCustomTextureResponse_DEPRECATED = 1052,
    k_EMsgGCRemoveMakersMark_DEPRECATED = 1053,
    k_EMsgGCRemoveMakersMarkResponse_DEPRECATED = 1054,
    k_EMsgGCRemoveUniqueCraftIndex_DEPRECATED = 1055,
    k_EMsgGCRemoveUniqueCraftIndexResponse_DEPRECATED = 1056,
    k_EMsgGCSaxxyBroadcast = 1057,
    k_EMsgGCBackpackSortFinished = 1058,
    k_EMsgGCCollectItem_DEPRECATED = 1061,
    k_EMsgGCItemAcknowledged__DEPRECATED = 1062,
    k_EMsgGC_ReportAbuse = 1065,
    k_EMsgGC_ReportAbuseResponse = 1066,
    k_EMsgGCNameItemNotification = 1068,
    k_EMsgGCApplyConsumableEffects_DEPRECATED = 1069,
    k_EMsgGCConsumableExhausted = 1070,
    k_EMsgGCShowItemsPickedUp = 1071,
    k_EMsgGCClientDisplayNotification_DEPRECATED = 1072,
    k_EMsgGCApplyStrangePart_DEPRECATED = 1073,
    k_EMsgGC_IncrementKillCountAttribute = 1074,
    k_EMsgGC_IncrementKillCountResponse = 1075,
    k_EMsgGCApplyPennantUpgrade_DEPRECATED = 1076,
    k_EMsgGCSetItemPositions = 1077,
    k_EMsgGCApplyEggEssence_DEPRECATED = 1078,
    k_EMsgGCNameEggEssenceResponse_DEPRECATED = 1079,
    k_EMsgGCPaintKitItem_DEPRECATED = 1080,
    k_EMsgGCPaintKitBaseItem_DEPRECATED = 1081,
    k_EMsgGCPaintKitItemResponse_DEPRECATED = 1082,
    k_EMsgGCGiftedItems = 1083,
    k_EMsgGCUnlockItemStyle_DEPRECATED = 1084,
    k_EMsgGCUnlockItemStyleResponse_DEPRECATED = 1085,
    k_EMsgGCApplySticker = 1086,
    k_EMsgGCItemAcknowledged = 1087,
    k_EMsgGCStatTrakSwap = 1088,
    k_EMsgGCUserTrackTimePlayedConsecutively = 1089,
    k_EMsgGCItemCustomizationNotification = 1090,
    k_EMsgGCModifyItemAttribute = 1091,
    k_EMsgGCCasketItemAdd = 1092,
    k_EMsgGCCasketItemExtract = 1093,
    k_EMsgGCCasketItemLoadContents = 1094,
    k_EMsgGCServerBrowser_FavoriteServer_DEPRECATED = 1601,
    k_EMsgGCServerBrowser_BlacklistServer_DEPRECATED = 1602,
    k_EMsgGCServerRentalsBase_DEPRECATED = 1700,
    k_EMsgGCItemPreviewCheckStatus_DEPRECATED = 1701,
    k_EMsgGCItemPreviewStatusResponse_DEPRECATED = 1702,
    k_EMsgGCItemPreviewRequest_DEPRECATED = 1703,
    k_EMsgGCItemPreviewRequestResponse_DEPRECATED = 1704,
    k_EMsgGCItemPreviewExpire_DEPRECATED = 1705,
    k_EMsgGCItemPreviewExpireNotification_DEPRECATED = 1706,
    k_EMsgGCItemPreviewItemBoughtNotification_DEPRECATED = 1707,
    k_EMsgGCDev_NewItemRequest = 2001,
    k_EMsgGCDev_NewItemRequestResponse = 2002,
    k_EMsgGCDev_PaintKitDropItem_DEPRECATED = 2003,
    k_EMsgGCDev_SchemaReservationRequest = 2004,
    k_EMsgGCStoreGetUserData = 2500,
    k_EMsgGCStoreGetUserDataResponse = 2501,
    k_EMsgGCStorePurchaseInit_DEPRECATED = 2502,
    k_EMsgGCStorePurchaseInitResponse_DEPRECATED = 2503,
    k_EMsgGCStorePurchaseFinalize = 2504,
    k_EMsgGCStorePurchaseFinalizeResponse = 2505,
    k_EMsgGCStorePurchaseCancel = 2506,
    k_EMsgGCStorePurchaseCancelResponse = 2507,
    k_EMsgGCStorePurchaseQueryTxn_DEPRECATED = 2508,
    k_EMsgGCStorePurchaseQueryTxnResponse_DEPRECATED = 2509,
    k_EMsgGCStorePurchaseInit = 2510,
    k_EMsgGCStorePurchaseInitResponse = 2511,
    k_EMsgGCBannedWordListRequest = 2512,
    k_EMsgGCBannedWordListResponse = 2513,
    k_EMsgGCToGCBannedWordListBroadcast = 2514,
    k_EMsgGCToGCBannedWordListUpdated = 2515,
    k_EMsgGCToGCDirtySDOCache = 2516,
    k_EMsgGCToGCDirtyMultipleSDOCache = 2517,
    k_EMsgGCToGCUpdateSQLKeyValue = 2518,
    k_EMsgGCToGCIsTrustedServer = 2519,
    k_EMsgGCToGCIsTrustedServerResponse = 2520,
    k_EMsgGCToGCBroadcastConsoleCommand = 2521,
    k_EMsgGCServerVersionUpdated = 2522,
    k_EMsgGCToGCWebAPIAccountChanged = 2524,
    k_EMsgGCRequestAnnouncements = 2525,
    k_EMsgGCRequestAnnouncementsResponse = 2526,
    k_EMsgGCRequestPassportItemGrant = 2527,
    k_EMsgGCClientVersionUpdated = 2528,
    k_EMsgGCRecurringSubscriptionStatus = 2530,
    k_EMsgGCAdjustEquipSlotsManual = 2531,
    k_EMsgGCAdjustEquipSlotsShuffle = 2532,
    k_EMsgGCOpenCrate = 2534,
    k_EMsgGCAcknowledgeRentalExpiration = 2535,
    k_EMsgGCVolatileItemLoadContents = 2536,
};

enum class ShakeCommand_t : std::int32_t {
    SHAKE_START = 0,
    SHAKE_STOP = 1,
    SHAKE_AMPLITUDE = 2,
    SHAKE_FREQUENCY = 3,
    SHAKE_START_RUMBLEONLY = 4,
    SHAKE_START_NORUMBLE = 5,
    SHAKE_DURATION = 6,
};

enum class Flags_t : std::int32_t {
    FL_ONGROUND = 1,
    FL_DUCKING = 2,
    FL_WATERJUMP = 4,
    FL_BOT = 16,
    FL_FROZEN = 32,
    FL_ATCONTROLS = 64,
    FL_CLIENT = 128,
    FL_FAKECLIENT = 256,
    FL_FLY = 1024,
    FL_SUPPRESS_SAVE = 2048,
    FL_IN_VEHICLE = 4096,
    FL_GODMODE = 16384,
    FL_NOTARGET = 32768,
    FL_AIMTARGET = 65536,
    FL_GRENADE = 1048576,
    FL_DONTTOUCH = 4194304,
    FL_BASEVELOCITY = 8388608,
    FL_CONVEYOR = 16777216,
    FL_OBJECT = 33554432,
    FL_ONFIRE = 134217728,
    FL_DISSOLVING = 268435456,
    FL_TRANSRAGDOLL = 536870912,
    FL_UNBLOCKABLE_BY_PLAYER = 1073741824,
};

enum class TRAIN_CODE : std::int32_t {
    TRAIN_SAFE = 0,
    TRAIN_BLOCKING = 1,
    TRAIN_FOLLOWING = 2,
};

enum class DestructiblePartDestructionDeathBehavior_t : std::int32_t {
    eDoNotKill = 0,
    eKill = 1,
    eGib = 2,
    eRemove = 3,
};

enum class BrushSolidities_e : std::int32_t {
    BRUSHSOLID_TOGGLE = 0,
    BRUSHSOLID_NEVER = 1,
    BRUSHSOLID_ALWAYS = 2,
};

enum class GCProtoBufMsgSrc : std::int32_t {
    GCProtoBufMsgSrc_Unspecified = 0,
    GCProtoBufMsgSrc_FromSystem = 1,
    GCProtoBufMsgSrc_FromSteamID = 2,
    GCProtoBufMsgSrc_FromGC = 3,
    GCProtoBufMsgSrc_ReplySystem = 4,
};

enum class QuestProgress__Reason : std::int32_t {
    QUEST_NONINITIALIZED = 0,
    QUEST_OK = 1,
    QUEST_NOT_ENOUGH_PLAYERS = 2,
    QUEST_WARMUP = 3,
    QUEST_NOT_CONNECTED_TO_STEAM = 4,
    QUEST_NONOFFICIAL_SERVER = 5,
    QUEST_NO_ENTITLEMENT = 6,
    QUEST_NO_QUEST = 7,
    QUEST_PLAYER_IS_BOT = 8,
    QUEST_WRONG_MAP = 9,
    QUEST_WRONG_MODE = 10,
    QUEST_NOT_SYNCED_WITH_SERVER = 11,
    QUEST_REASON_MAX = 12,
};

enum class ModifyDamageReturn_t : std::int32_t {
    CONTINUE_TO_APPLY_DAMAGE = 0,
    ABORT_DO_NOT_APPLY_DAMAGE = 1,
};

enum class ShadowType_t : std::int32_t {
    SHADOWS_NONE = 0,
    SHADOWS_SIMPLE = 1,
};

enum class DirectionAlongSimplePath_t : std::int32_t {
    None = 0,
    TGoesUp = 1,
    TGoesDown = 2,
};

enum class GrenadeType_t : std::int32_t {
    GRENADE_TYPE_EXPLOSIVE = 0,
    GRENADE_TYPE_FLASH = 1,
    GRENADE_TYPE_FIRE = 2,
    GRENADE_TYPE_DECOY = 3,
    GRENADE_TYPE_SMOKE = 4,
    GRENADE_TYPE_TOTAL = 5,
};

enum class ValueRemapperInputType_t : std::int32_t {
    InputType_PlayerShootPosition = 0,
    InputType_PlayerShootPositionAroundAxis = 1,
};

enum class EKillTypes_t : std::int32_t {
    KILL_NONE = 0,
    KILL_DEFAULT = 1,
    KILL_HEADSHOT = 2,
    KILL_BLAST = 3,
    KILL_BURN = 4,
    KILL_SLASH = 5,
    KILL_SHOCK = 6,
    KILLTYPE_COUNT = 7,
};

enum class WeaponSound_t : std::int32_t {
    WEAPON_SOUND_EMPTY = 0,
    WEAPON_SOUND_SECONDARY_EMPTY = 1,
    WEAPON_SOUND_SINGLE = 2,
    WEAPON_SOUND_SECONDARY_ATTACK = 3,
    WEAPON_SOUND_MELEE_MISS = 4,
    WEAPON_SOUND_MELEE_HIT = 5,
    WEAPON_SOUND_MELEE_HIT_WORLD = 6,
    WEAPON_SOUND_MELEE_HIT_PLAYER = 7,
    WEAPON_SOUND_MELEE_HIT_NPC = 8,
    WEAPON_SOUND_SPECIAL1 = 9,
    WEAPON_SOUND_SPECIAL2 = 10,
    WEAPON_SOUND_SPECIAL3 = 11,
    WEAPON_SOUND_NEARLYEMPTY = 12,
    WEAPON_SOUND_IMPACT = 13,
    WEAPON_SOUND_REFLECT = 14,
    WEAPON_SOUND_SECONDARY_IMPACT = 15,
    WEAPON_SOUND_SECONDARY_REFLECT = 16,
    WEAPON_SOUND_RELOAD = 17,
    WEAPON_SOUND_SINGLE_ACCURATE = 18,
    WEAPON_SOUND_ZOOM_IN = 19,
    WEAPON_SOUND_ZOOM_OUT = 20,
    WEAPON_SOUND_MOUSE_PRESSED = 21,
    WEAPON_SOUND_DROP = 22,
    WEAPON_SOUND_RADIO_USE = 23,
    WEAPON_SOUND_NUM_TYPES = 24,
};

enum class TakeDamageFlags_t : std::int32_t {
    DFLAG_NONE = 0,
    DFLAG_SUPPRESS_HEALTH_CHANGES = 1,
    DFLAG_SUPPRESS_PHYSICS_FORCE = 2,
    DFLAG_SUPPRESS_EFFECTS = 4,
    DFLAG_PREVENT_DEATH = 8,
    DFLAG_FORCE_DEATH = 16,
    DFLAG_ALWAYS_GIB = 32,
    DFLAG_NEVER_GIB = 64,
    DFLAG_REMOVE_NO_RAGDOLL = 128,
    DFLAG_SUPPRESS_DAMAGE_MODIFICATION = 256,
    DFLAG_ALWAYS_FIRE_DAMAGE_EVENTS = 512,
    DFLAG_RADIUS_DMG = 1024,
    DFLAG_FORCEREDUCEARMOR_DMG = 2048,
    DFLAG_SUPPRESS_INTERRUPT_FLINCH = 4096,
    DFLAG_IGNORE_DESTRUCTIBLE_PARTS = 8192,
    DFLAG_SUPPRESS_BREAKABLES = 16384,
    DFLAG_FORCE_PHYSICS_FORCE = 32768,
    DFLAG_SUPPRESS_SCREENSPACE_DAMAGE_FX = 65536,
    DFLAG_ALLOW_NON_AUTHORITATIVE = 131072,
    DMG_LASTDFLAG = 131072,
    DFLAG_IGNORE_ARMOR = 262144,
    DFLAG_SUPPRESS_UTILREMOVE = 524288,
};

enum class ShatterGlassEntityPoolState_t : std::int32_t {
    ENTITY_POOL_STATE_INVALID = 0,
    ENTITY_POOL_STATE_AVAILABLE = 1,
    ENTITY_POOL_STATE_IN_USE = 2,
};

enum class EGCPetMsg : std::int32_t {
    k_EMsgGCAckPetEvent = 2538,
};

enum class ValueRemapperHapticsType_t : std::int32_t {
    HaticsType_Default = 0,
    HaticsType_None = 1,
};

enum class Disposition_t : std::int32_t {
    D_ER = 0,
    D_HT = 1,
    D_FR = 2,
    D_LI = 3,
    D_NU = 4,
    D_ERROR = 0,
    D_HATE = 1,
    D_FEAR = 2,
    D_LIKE = 3,
    D_NEUTRAL = 4,
};

enum class GCConnectionStatus : std::int32_t {
    GCConnectionStatus_HAVE_SESSION = 0,
    GCConnectionStatus_GC_GOING_DOWN = 1,
    GCConnectionStatus_NO_SESSION = 2,
    GCConnectionStatus_NO_SESSION_IN_LOGON_QUEUE = 3,
    GCConnectionStatus_NO_STEAM = 4,
};

enum class CanPlaySequence_t : std::int32_t {
    CANNOT_PLAY = 0,
    CAN_PLAY_NOW = 1,
    CAN_PLAY_ENQUEUED = 2,
};

enum class BodySectionMutex_t : std::int32_t {
    eNone = 0,
    eLowerBody = 1,
    eUpperBody = 2,
    eFullBody = 3,
};

enum class EChickenActivity : std::int32_t {
    Idle = 0,
    Squat = 1,
    Walk = 2,
    Run = 3,
    Glide = 4,
    Land = 5,
    Panic = 6,
    Trick = 7,
    TurnInPlace = 8,
    Feed = 9,
    Sleep = 10,
    Shoulder = 11,
    LowOnFood = 12,
};

enum class CCSPlayerAnimationState__AirAction_t : std::int32_t {
    None = 0,
    Jump = 1,
    StartFall = 2,
    Land = 3,
};

enum class MedalRank_t : std::int32_t {
    MEDAL_RANK_NONE = 0,
    MEDAL_RANK_BRONZE = 1,
    MEDAL_RANK_SILVER = 2,
    MEDAL_RANK_GOLD = 3,
    MEDAL_RANK_COUNT = 4,
};

enum class EBaseClientMessages : std::int32_t {
    CM_CustomGameEvent = 280,
    CM_CustomGameEventBounce = 281,
    CM_ClientUIEvent = 282,
    CM_DevPaletteVisibilityChanged = 283,
    CM_WorldUIControllerHasPanelChanged = 284,
    CM_RotateAnchor = 285,
    CM_MAX_BASE = 300,
};

enum class ObserverMode_t : std::int32_t {
    OBS_MODE_NONE = 0,
    OBS_MODE_FIXED = 1,
    OBS_MODE_IN_EYE = 2,
    OBS_MODE_CHASE = 3,
    OBS_MODE_ROAMING = 4,
    NUM_OBSERVER_MODES = 5,
};

enum class FuncDoorSpawnPos_t : std::int32_t {
    FUNC_DOOR_SPAWN_CLOSED = 0,
    FUNC_DOOR_SPAWN_OPEN = 1,
};

enum class EOverrideBlockLOS_t : std::int32_t {
    BLOCK_LOS_DEFAULT = 0,
    BLOCK_LOS_FORCE_FALSE = 1,
    BLOCK_LOS_FORCE_TRUE = 2,
};

enum class EntityAttachmentType_t : std::int32_t {
    eAbsOrigin = 0,
    eCenter = 1,
    eEyes = 2,
    eAttachment = 3,
    eLocalOffset = 4,
};

enum class ECsgoGameEvents : std::int32_t {
    GE_PlayerAnimEventId = 450,
    GE_RadioIconEventId = 451,
    GE_FireBulletsId = 452,
    GE_PlayerBulletHitId = 453,
};

enum class MoveType_t : std::int32_t {
    MOVETYPE_NONE = 0,
    MOVETYPE_OBSOLETE = 1,
    MOVETYPE_WALK = 2,
    MOVETYPE_FLY = 3,
    MOVETYPE_FLYGRAVITY = 4,
    MOVETYPE_VPHYSICS = 5,
    MOVETYPE_PUSH = 6,
    MOVETYPE_NOCLIP = 7,
    MOVETYPE_OBSERVER = 8,
    MOVETYPE_LADDER = 9,
    MOVETYPE_CUSTOM = 10,
    MOVETYPE_LAST = 11,
    MOVETYPE_INVALID = 11,
    MOVETYPE_MAX_BITS = 5,
};

struct CWeaponNOVA {
    static constexpr std::size_t size = 0x1280;
    std::uint8_t pad_0[0x1280]; // 0x0
};

struct CPointWorldText {
    static constexpr std::size_t size = 0xb00;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x200]; // 0x850 
    std::uint8_t _[0x40]; // 0xa50 
    std::uint8_t _[0x40]; // 0xa90 
    std::uint8_t _[0x1]; // 0xad0 
    std::uint8_t _[0x3]; // 0xad1 
    std::uint8_t _[0x4]; // 0xad4 
    std::uint8_t _[0x4]; // 0xad8 
    std::uint8_t _[0x4]; // 0xadc 
    std::uint8_t _[0x4]; // 0xae0 
    std::uint8_t _[0x4]; // 0xae4 
    std::uint8_t _[0x4]; // 0xae8 
    std::uint8_t _[0x4]; // 0xaec 
    std::uint8_t _[0x4]; // 0xaf0 
    std::uint8_t _[0x4]; // 0xaf4 
    std::uint8_t _[0x4]; // 0xaf8 
    std::uint8_t _[0x4]; // 0xafc 
};

struct CAmbientGeneric {
    static constexpr std::size_t size = 0x550;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x64]; // 0x4b4 
    std::uint8_t _[0x1]; // 0x518 
    std::uint8_t _[0x7]; // 0x519 
    std::uint8_t _[0x8]; // 0x520 
    std::uint8_t _[0x8]; // 0x528 
    std::uint8_t _[0x4]; // 0x530 
    std::uint8_t _[0x1c]; // 0x534 
};

struct CEnvEntityMaker {
    static constexpr std::size_t size = 0x528;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0xc]; // 0x4a8 
    std::uint8_t _[0xc]; // 0x4b4 
    std::uint8_t _[0x4]; // 0x4c0 
    std::uint8_t _[0x4]; // 0x4c4 
    std::uint8_t _[0xc]; // 0x4c8 
    std::uint8_t _[0xc]; // 0x4d4 
    std::uint8_t _[0x4]; // 0x4e0 
    std::uint8_t _[0x4]; // 0x4e4 
    std::uint8_t _[0x8]; // 0x4e8 
    std::uint8_t _[0x8]; // 0x4f0 
    std::uint8_t _[0x18]; // 0x4f8 
    std::uint8_t _[0x18]; // 0x510 
};

struct CPulseGraphInstance_GameBlackboard {
    static constexpr std::size_t size = 0x150;
    std::uint8_t pad_0[0x150]; // 0x0
};

struct CPointEntity {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CFilterEnemy {
    static constexpr std::size_t size = 0x500;
    std::uint8_t pad_0[0x4e0]; // 0x0
    std::uint8_t _[0x8]; // 0x4e0 
    std::uint8_t _[0x4]; // 0x4e8 
    std::uint8_t _[0x4]; // 0x4ec 
    std::uint8_t _[0x8]; // 0x4f0 
    std::uint8_t _[0x8]; // 0x4f8 
};

struct CCSGO_WingmanIntroCounterTerroristPosition {
    static constexpr std::size_t size = 0x1468;
    std::uint8_t pad_0[0x1468]; // 0x0
};

struct CPulseCell_WaitForCursorsWithTag {
    static constexpr std::size_t size = 0x130;
    std::uint8_t pad_0[0x128]; // 0x0
    std::uint8_t _[0x4]; // 0x128 
    std::uint8_t _[0x4]; // 0x12c 
};

struct CFuncTrackAuto {
    static constexpr std::size_t size = 0x958;
    std::uint8_t pad_0[0x958]; // 0x0
};

struct CScriptedSequence {
    static constexpr std::size_t size = 0x6f0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x8]; // 0x4b8 
    std::uint8_t _[0x8]; // 0x4c0 
    std::uint8_t _[0x8]; // 0x4c8 
    std::uint8_t _[0x8]; // 0x4d0 
    std::uint8_t _[0x8]; // 0x4d8 
    std::uint8_t _[0x8]; // 0x4e0 
    std::uint8_t _[0x4]; // 0x4e8 
    std::uint8_t _[0x4]; // 0x4ec 
    std::uint8_t _[0x4]; // 0x4f0 
    std::uint8_t _[0x4]; // 0x4f4 
    std::uint8_t _[0x1]; // 0x4f8 
    std::uint8_t _[0x1]; // 0x4f9 
    std::uint8_t _[0x1]; // 0x4fa 
    std::uint8_t _[0x1]; // 0x4fb 
    std::uint8_t _[0x1]; // 0x4fc 
    std::uint8_t _[0x1]; // 0x4fd 
    std::uint8_t _[0x1]; // 0x4fe 
    std::uint8_t _[0x1]; // 0x4ff 
    std::uint8_t _[0x1]; // 0x500 
    std::uint8_t _[0x1]; // 0x501 
    std::uint8_t _[0x1]; // 0x502 
    std::uint8_t _[0x1]; // 0x503 
    std::uint8_t _[0x1]; // 0x504 
    std::uint8_t _[0x1]; // 0x505 
    std::uint8_t _[0x1]; // 0x506 
    std::uint8_t _[0x1]; // 0x507 
    std::uint8_t _[0x1]; // 0x508 
    std::uint8_t _[0x1]; // 0x509 
    std::uint8_t _[0x1]; // 0x50a 
    std::uint8_t _[0x1]; // 0x50b 
    std::uint8_t _[0x1]; // 0x50c 
    std::uint8_t _[0x1]; // 0x50d 
    std::uint8_t _[0x1]; // 0x50e 
    std::uint8_t _[0x1]; // 0x50f 
    std::uint8_t _[0x4]; // 0x510 
    std::uint8_t _[0x4]; // 0x514 
    std::uint8_t _[0x4]; // 0x518 
    std::uint8_t _[0x4]; // 0x51c 
    std::uint8_t _[0x4]; // 0x520 
    std::uint8_t _[0x4]; // 0x524 
    std::uint8_t _[0x4]; // 0x528 
    std::uint8_t _[0x4]; // 0x52c 
    std::uint8_t _[0x4]; // 0x530 
    std::uint8_t _[0x4]; // 0x534 
    std::uint8_t _[0x4]; // 0x538 
    std::uint8_t _[0x4]; // 0x53c 
    std::uint8_t _[0x4]; // 0x540 
    std::uint8_t _[0x4]; // 0x544 
    std::uint8_t _[0x1]; // 0x548 
    std::uint8_t _[0x1]; // 0x549 
    std::uint8_t _[0x2]; // 0x54a 
    std::uint8_t _[0x4]; // 0x54c 
    std::uint8_t _[0x4]; // 0x550 
    std::uint8_t _[0x1]; // 0x554 
    std::uint8_t _[0x1]; // 0x555 
    std::uint8_t _[0x1]; // 0x556 
    std::uint8_t _[0x1]; // 0x557 
    std::uint8_t _[0x4]; // 0x558 
    std::uint8_t _[0x1]; // 0x55c 
    std::uint8_t _[0x1]; // 0x55d 
    std::uint8_t _[0x1]; // 0x55e 
    std::uint8_t _[0x1]; // 0x55f 
    std::uint8_t _[0x4]; // 0x560 
    std::uint8_t _[0x4]; // 0x564 
    std::uint8_t _[0x18]; // 0x568 
    std::uint8_t _[0x18]; // 0x580 
    std::uint8_t _[0x18]; // 0x598 
    std::uint8_t _[0x18]; // 0x5b0 
    std::uint8_t _[0x18]; // 0x5c8 
    std::uint8_t _[0x18]; // 0x5e0 
    std::uint8_t _[0xc8]; // 0x5f8 
    std::uint8_t _[0x20]; // 0x6c0 
    std::uint8_t _[0x4]; // 0x6e0 
    std::uint8_t _[0x4]; // 0x6e4 
    std::uint8_t _[0x8]; // 0x6e8 
};

struct CFogTrigger {
    static constexpr std::size_t size = 0xa30;
    std::uint8_t pad_0[0x9c8]; // 0x0
    std::uint8_t _[0x68]; // 0x9c8 
};

struct CInfoTeleportDestination {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CPointBroadcastClientCommand {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CCSPlayer_PingServices {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x14]; // 0x48 
    std::uint8_t _[0x4]; // 0x5c 
};

struct CHEGrenade {
    static constexpr std::size_t size = 0x12c0;
    std::uint8_t pad_0[0x12c0]; // 0x0
};

struct CPhysicsSpring {
    static constexpr std::size_t size = 0x4f0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b4 
    std::uint8_t _[0x8]; // 0x4b8 
    std::uint8_t _[0x8]; // 0x4c0 
    std::uint8_t _[0x8]; // 0x4c8 
    std::uint8_t _[0xc]; // 0x4d0 
    std::uint8_t _[0xc]; // 0x4dc 
    std::uint8_t _[0x8]; // 0x4e8 
};

struct CEnvMuzzleFlash {
    static constexpr std::size_t size = 0x4b8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x8]; // 0x4b0 
};

struct CEconItemAttribute {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x8]; // 0x40 
};

struct CPulseCell_RaceCursors {
    static constexpr std::size_t size = 0x138;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x18]; // 0xd8 
    std::uint8_t _[0x48]; // 0xf0 
};

struct CWeaponRevolver {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x12a0]; // 0x0
};

struct CFuncTrainControls {
    static constexpr std::size_t size = 0x850;
    std::uint8_t pad_0[0x850]; // 0x0
};

struct CBtActionCombatPositioning {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t pad_0[0x68]; // 0x0
    std::uint8_t _[0x18]; // 0x68 
    std::uint8_t _[0x8]; // 0x80 
    std::uint8_t _[0x18]; // 0x88 
    std::uint8_t _[0x10]; // 0xa0 
};

struct CFuncRetakeBarrier {
    static constexpr std::size_t size = 0xcb0;
    std::uint8_t pad_0[0xcb0]; // 0x0
};

struct CTriggerBuoyancy {
    static constexpr std::size_t size = 0xae8;
    std::uint8_t pad_0[0x9c8]; // 0x0
    std::uint8_t _[0x118]; // 0x9c8 
    std::uint8_t _[0x8]; // 0xae0 
};

struct CTonemapController2Alias_env_tonemap_controller2 {
    static constexpr std::size_t size = 0x4c0;
    std::uint8_t pad_0[0x4c0]; // 0x0
};

struct CPathTrack {
    static constexpr std::size_t size = 0x4e8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b4 
    std::uint8_t _[0x4]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4bc 
    std::uint8_t _[0x8]; // 0x4c0 
    std::uint8_t _[0x4]; // 0x4c8 
    std::uint8_t _[0x4]; // 0x4cc 
    std::uint8_t _[0x18]; // 0x4d0 
};

struct CCSGO_EndOfMatchLineupEndpoint {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CPulseCell_Base {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x40]; // 0x8 
};

struct CTriggerProximity {
    static constexpr std::size_t size = 0xa00;
    std::uint8_t pad_0[0x9c8]; // 0x0
    std::uint8_t _[0x8]; // 0x9c8 
    std::uint8_t _[0x8]; // 0x9d0 
    std::uint8_t _[0x4]; // 0x9d8 
    std::uint8_t _[0x4]; // 0x9dc 
    std::uint8_t _[0x20]; // 0x9e0 
};

struct CTankTrainAI {
    static constexpr std::size_t size = 0x4e8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x18]; // 0x4b0 
    std::uint8_t _[0x8]; // 0x4c8 
    std::uint8_t _[0x8]; // 0x4d0 
    std::uint8_t _[0x8]; // 0x4d8 
    std::uint8_t _[0x8]; // 0x4e0 
};

struct CGameText {
    static constexpr std::size_t size = 0x880;
    std::uint8_t pad_0[0x860]; // 0x0
    std::uint8_t _[0x8]; // 0x860 
    std::uint8_t _[0x18]; // 0x868 
};

struct CGameEnd {
    static constexpr std::size_t size = 0x860;
    std::uint8_t pad_0[0x860]; // 0x0
};

struct CInfoDeathmatchSpawn {
    static constexpr std::size_t size = 0x4b8;
    std::uint8_t pad_0[0x4b8]; // 0x0
};

struct CCSPlayerController_InventoryServices {
    static constexpr std::size_t size = 0x1020;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x18]; // 0x44 
    std::uint8_t _[0x4]; // 0x5c 
    std::uint8_t _[0x4]; // 0x60 
    std::uint8_t _[0x4]; // 0x64 
    std::uint8_t _[0x4]; // 0x68 
    std::uint8_t _[0xf1c]; // 0x6c 
    std::uint8_t _[0x8]; // 0xf88 
    std::uint8_t _[0x8]; // 0xf90 
    std::uint8_t _[0x88]; // 0xf98 
};

struct CCSPlayerModernJump {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x8]; // 0x30 
};

struct CPulse_ResumePoint {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CTriggerFan {
    static constexpr std::size_t size = 0xa90;
    std::uint8_t pad_0[0x9c8]; // 0x0
    std::uint8_t _[0xc]; // 0x9c8 
    std::uint8_t _[0xc]; // 0x9d4 
    std::uint8_t _[0x1]; // 0x9e0 
    std::uint8_t _[0xf]; // 0x9e1 
    std::uint8_t _[0x10]; // 0x9f0 
    std::uint8_t _[0x4]; // 0xa00 
    std::uint8_t _[0x4]; // 0xa04 
    std::uint8_t _[0x8]; // 0xa08 
    std::uint8_t _[0x18]; // 0xa10 
    std::uint8_t _[0xc]; // 0xa28 
    std::uint8_t _[0xc]; // 0xa34 
    std::uint8_t _[0xc]; // 0xa40 
    std::uint8_t _[0xc]; // 0xa4c 
    std::uint8_t _[0x8]; // 0xa58 
    std::uint8_t _[0x4]; // 0xa60 
    std::uint8_t _[0x4]; // 0xa64 
    std::uint8_t _[0x4]; // 0xa68 
    std::uint8_t _[0x4]; // 0xa6c 
    std::uint8_t _[0x4]; // 0xa70 
    std::uint8_t _[0x4]; // 0xa74 
    std::uint8_t _[0x4]; // 0xa78 
    std::uint8_t _[0x4]; // 0xa7c 
    std::uint8_t _[0x1]; // 0xa80 
    std::uint8_t _[0x3]; // 0xa81 
    std::uint8_t _[0xc]; // 0xa84 
};

struct CPhysHingeAlias_phys_hinge_local {
    static constexpr std::size_t size = 0x678;
    std::uint8_t pad_0[0x678]; // 0x0
};

struct CLogicCase {
    static constexpr std::size_t size = 0x8f0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x100]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x5a8 
    std::uint8_t _[0x4]; // 0x5ac 
    std::uint8_t _[0x20]; // 0x5b0 
    std::uint8_t _[0x300]; // 0x5d0 
    std::uint8_t _[0x20]; // 0x8d0 
};

struct CPulseCell_Outflow_PlayVOLine {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x48]; // 0xd8 
};

struct CInfoGameEventProxy {
    static constexpr std::size_t size = 0x4b8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x8]; // 0x4b0 
};

struct CWeaponBizon {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x12a0]; // 0x0
};

struct CGamePlayerZone {
    static constexpr std::size_t size = 0x8c8;
    std::uint8_t pad_0[0x858]; // 0x0
    std::uint8_t _[0x18]; // 0x858 
    std::uint8_t _[0x18]; // 0x870 
    std::uint8_t _[0x20]; // 0x888 
    std::uint8_t _[0x20]; // 0x8a8 
};

struct CBaseToggle {
    static constexpr std::size_t size = 0x8d0;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x4]; // 0x850 
    std::uint8_t _[0x4]; // 0x854 
    std::uint8_t _[0x4]; // 0x858 
    std::uint8_t _[0x4]; // 0x85c 
    std::uint8_t _[0x4]; // 0x860 
    std::uint8_t _[0xc]; // 0x864 
    std::uint8_t _[0xc]; // 0x870 
    std::uint8_t _[0xc]; // 0x87c 
    std::uint8_t _[0xc]; // 0x888 
    std::uint8_t _[0xc]; // 0x894 
    std::uint8_t _[0x4]; // 0x8a0 
    std::uint8_t _[0x4]; // 0x8a4 
    std::uint8_t _[0xc]; // 0x8a8 
    std::uint8_t _[0xc]; // 0x8b4 
    std::uint8_t _[0x8]; // 0x8c0 
    std::uint8_t _[0x8]; // 0x8c8 
};

struct CPulseServerCursor {
    static constexpr std::size_t size = 0xf0;
    std::uint8_t pad_0[0xe8]; // 0x0
    std::uint8_t _[0x4]; // 0xe8 
    std::uint8_t _[0x4]; // 0xec 
};

struct CPulseCell_PlaySequence {
    static constexpr std::size_t size = 0x140;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x8]; // 0xd8 
    std::uint8_t _[0x18]; // 0xe0 
    std::uint8_t _[0x48]; // 0xf8 
};

struct CInferno {
    static constexpr std::size_t size = 0x14d8;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x300]; // 0x850 
    std::uint8_t _[0x300]; // 0xb50 
    std::uint8_t _[0x40]; // 0xe50 
    std::uint8_t _[0x300]; // 0xe90 
    std::uint8_t _[0x4]; // 0x1190 
    std::uint8_t _[0x4]; // 0x1194 
    std::uint8_t _[0x4]; // 0x1198 
    std::uint8_t _[0x4]; // 0x119c 
    std::uint8_t _[0x1]; // 0x11a0 
    std::uint8_t _[0x207]; // 0x11a1 
    std::uint8_t _[0x18]; // 0x13a8 
    std::uint8_t _[0x18]; // 0x13c0 
    std::uint8_t _[0x18]; // 0x13d8 
    std::uint8_t _[0xc]; // 0x13f0 
    std::uint8_t _[0xc]; // 0x13fc 
    std::uint8_t _[0xc]; // 0x1408 
    std::uint8_t _[0xc]; // 0x1414 
    std::uint8_t _[0x10]; // 0x1420 
    std::uint8_t _[0x4]; // 0x1430 
    std::uint8_t _[0x4]; // 0x1434 
    std::uint8_t _[0x8]; // 0x1438 
    std::uint8_t _[0x18]; // 0x1440 
    std::uint8_t _[0x18]; // 0x1458 
    std::uint8_t _[0x68]; // 0x1470 
};

struct CTouchExpansionComponent {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x50]; // 0x0
};

struct CPulseCell_Outflow_PlaySceneBase {
    static constexpr std::size_t size = 0x138;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x48]; // 0xd8 
    std::uint8_t _[0x18]; // 0x120 
};

struct CPulseCell_LerpCameraSettings {
    static constexpr std::size_t size = 0x148;
    std::uint8_t pad_0[0x120]; // 0x0
    std::uint8_t _[0x4]; // 0x120 
    std::uint8_t _[0x10]; // 0x124 
    std::uint8_t _[0x14]; // 0x134 
};

struct CWeaponSCAR20 {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x12a0]; // 0x0
};

struct CFuncInteractionLayerClip {
    static constexpr std::size_t size = 0x868;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x8]; // 0x850 
    std::uint8_t _[0x8]; // 0x858 
    std::uint8_t _[0x8]; // 0x860 
};

struct CCSObserver_UseServices {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CCSMinimapVolume {
    static constexpr std::size_t size = 0x9e8;
    std::uint8_t pad_0[0x9e0]; // 0x0
    std::uint8_t _[0x8]; // 0x9e0 
};

struct CTriggerDetectBulletFire {
    static constexpr std::size_t size = 0x9e8;
    std::uint8_t pad_0[0x9c8]; // 0x0
    std::uint8_t _[0x8]; // 0x9c8 
    std::uint8_t _[0x18]; // 0x9d0 
};

struct CCSPlayer_UseServices {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x8]; // 0x50 
};

struct CWeaponAWP {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x12a0]; // 0x0
};

struct CPulseCell_PickBestOutflowSelector {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x18]; // 0x50 
};

struct CInfoFan {
    static constexpr std::size_t size = 0x500;
    std::uint8_t pad_0[0x4e8]; // 0x0
    std::uint8_t _[0x4]; // 0x4e8 
    std::uint8_t _[0x4]; // 0x4ec 
    std::uint8_t _[0x8]; // 0x4f0 
    std::uint8_t _[0x8]; // 0x4f8 
};

struct CGameRules {
    static constexpr std::size_t size = 0xd0;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x28]; // 0x8 
    std::uint8_t _[0x80]; // 0x30 
    std::uint8_t _[0x4]; // 0xb0 
    std::uint8_t _[0x4]; // 0xb4 
    std::uint8_t _[0x8]; // 0xb8 
    std::uint8_t _[0x4]; // 0xc0 
    std::uint8_t _[0x4]; // 0xc4 
    std::uint8_t _[0x8]; // 0xc8 
};

struct CPulseCell_ApplyDynamicAttributeEHandle {
    static constexpr std::size_t size = 0xd8;
    std::uint8_t pad_0[0xd8]; // 0x0
};

struct CFish {
    static constexpr std::size_t size = 0xb50;
    std::uint8_t pad_0[0xa40]; // 0x0
    std::uint8_t _[0x4]; // 0xa40 
    std::uint8_t _[0x4]; // 0xa44 
    std::uint8_t _[0x4]; // 0xa48 
    std::uint8_t _[0x4]; // 0xa4c 
    std::uint8_t _[0x4]; // 0xa50 
    std::uint8_t _[0x4]; // 0xa54 
    std::uint8_t _[0x4]; // 0xa58 
    std::uint8_t _[0xc]; // 0xa5c 
    std::uint8_t _[0xc]; // 0xa68 
    std::uint8_t _[0xc]; // 0xa74 
    std::uint8_t _[0x4]; // 0xa80 
    std::uint8_t _[0x4]; // 0xa84 
    std::uint8_t _[0x4]; // 0xa88 
    std::uint8_t _[0x4]; // 0xa8c 
    std::uint8_t _[0x4]; // 0xa90 
    std::uint8_t _[0x4]; // 0xa94 
    std::uint8_t _[0x18]; // 0xa98 
    std::uint8_t _[0x8]; // 0xab0 
    std::uint8_t _[0x18]; // 0xab8 
    std::uint8_t _[0x18]; // 0xad0 
    std::uint8_t _[0x18]; // 0xae8 
    std::uint8_t _[0x18]; // 0xb00 
    std::uint8_t _[0x18]; // 0xb18 
    std::uint8_t _[0x20]; // 0xb30 
};

struct CCSBot {
    static constexpr std::size_t size = 0x5e38;
    std::uint8_t pad_0[0x108]; // 0x0
    std::uint8_t _[0xc]; // 0x108 
    std::uint8_t _[0x40]; // 0x114 
    std::uint8_t _[0x4]; // 0x154 
    std::uint8_t _[0x8]; // 0x158 
    std::uint8_t _[0x1c]; // 0x160 
    std::uint8_t _[0x4]; // 0x17c 
    std::uint8_t _[0x4]; // 0x180 
    std::uint8_t _[0x8]; // 0x184 
    std::uint8_t _[0x4]; // 0x18c 
    std::uint8_t _[0x18]; // 0x190 
    std::uint8_t _[0x1]; // 0x1a8 
    std::uint8_t _[0x3]; // 0x1a9 
    std::uint8_t _[0x4]; // 0x1ac 
    std::uint8_t _[0x4]; // 0x1b0 
    std::uint8_t _[0x4]; // 0x1b4 
    std::uint8_t _[0x18]; // 0x1b8 
    std::uint8_t _[0x18]; // 0x1d0 
    std::uint8_t _[0x18]; // 0x1e8 
    std::uint8_t _[0x3c8]; // 0x200 
    std::uint8_t _[0x4]; // 0x5c8 
    std::uint8_t _[0x1]; // 0x5cc 
    std::uint8_t _[0x7]; // 0x5cd 
    std::uint8_t _[0x10]; // 0x5d4 
    std::uint8_t _[0xc]; // 0x5e4 
    std::uint8_t _[0x4]; // 0x5f0 
    std::uint8_t _[0x4]; // 0x5f4 
    std::uint8_t _[0x4]; // 0x5f8 
    std::uint8_t _[0x1]; // 0x5fc 
    std::uint8_t _[0x3]; // 0x5fd 
    std::uint8_t _[0x10]; // 0x600 
    std::uint8_t _[0x48f0]; // 0x610 
    std::uint8_t _[0x4]; // 0x4f00 
    std::uint8_t _[0x4]; // 0x4f04 
    std::uint8_t _[0x18]; // 0x4f08 
    std::uint8_t _[0x18]; // 0x4f20 
    std::uint8_t _[0x8]; // 0x4f38 
    std::uint8_t _[0x18]; // 0x4f40 
    std::uint8_t _[0x2c]; // 0x4f58 
    std::uint8_t _[0x4c]; // 0x4f84 
    std::uint8_t _[0x18]; // 0x4fd0 
    std::uint8_t _[0x18]; // 0x4fe8 
    std::uint8_t _[0x18]; // 0x5000 
    std::uint8_t _[0x100]; // 0x5018 
    std::uint8_t _[0x198]; // 0x5118 
    std::uint8_t _[0x4]; // 0x52b0 
    std::uint8_t _[0x4]; // 0x52b4 
    std::uint8_t _[0x4]; // 0x52b8 
    std::uint8_t _[0x1]; // 0x52bc 
    std::uint8_t _[0x3]; // 0x52bd 
    std::uint8_t _[0x18]; // 0x52c0 
    std::uint8_t _[0x18]; // 0x52d8 
    std::uint8_t _[0xc]; // 0x52f0 
    std::uint8_t _[0x4]; // 0x52fc 
    std::uint8_t _[0x8]; // 0x5300 
    std::uint8_t _[0x18]; // 0x5308 
    std::uint8_t _[0x18]; // 0x5320 
    std::uint8_t _[0xc]; // 0x5338 
    std::uint8_t _[0x4]; // 0x5344 
    std::uint8_t _[0x4]; // 0x5348 
    std::uint8_t _[0x4]; // 0x534c 
    std::uint8_t _[0x4]; // 0x5350 
    std::uint8_t _[0x4]; // 0x5354 
    std::uint8_t _[0x8]; // 0x5358 
    std::uint8_t _[0x10]; // 0x5360 
    std::uint8_t _[0x4]; // 0x5370 
    std::uint8_t _[0x4]; // 0x5374 
    std::uint8_t _[0x4]; // 0x5378 
    std::uint8_t _[0x1]; // 0x537c 
    std::uint8_t _[0x3]; // 0x537d 
    std::uint8_t _[0x8]; // 0x5380 
    std::uint8_t _[0x188]; // 0x5388 
    std::uint8_t _[0x4]; // 0x5510 
    std::uint8_t _[0xc]; // 0x5514 
    std::uint8_t _[0x18]; // 0x5520 
    std::uint8_t _[0x20]; // 0x5538 
    std::uint8_t _[0x20]; // 0x5558 
    std::uint8_t _[0x408]; // 0x5578 
    std::uint8_t _[0x4]; // 0x5980 
    std::uint8_t _[0x4]; // 0x5984 
    std::uint8_t _[0x4]; // 0x5988 
    std::uint8_t _[0x4]; // 0x598c 
    std::uint8_t _[0x4]; // 0x5990 
    std::uint8_t _[0xc]; // 0x5994 
    std::uint8_t _[0xc]; // 0x59a0 
    std::uint8_t _[0xc]; // 0x59ac 
    std::uint8_t _[0xc]; // 0x59b8 
    std::uint8_t _[0xc]; // 0x59c4 
    std::uint8_t _[0x4]; // 0x59d0 
    std::uint8_t _[0x4]; // 0x59d4 
    std::uint8_t _[0x4]; // 0x59d8 
    std::uint8_t _[0xc]; // 0x59dc 
    std::uint8_t _[0x18]; // 0x59e8 
    std::uint8_t _[0x4]; // 0x5a00 
    std::uint8_t _[0x1]; // 0x5a04 
    std::uint8_t _[0x3]; // 0x5a05 
    std::uint8_t _[0xc]; // 0x5a08 
    std::uint8_t _[0x4]; // 0x5a14 
    std::uint8_t _[0x4]; // 0x5a18 
    std::uint8_t _[0x4]; // 0x5a1c 
    std::uint8_t _[0x4]; // 0x5a20 
    std::uint8_t _[0x4]; // 0x5a24 
    std::uint8_t _[0x4]; // 0x5a28 
    std::uint8_t _[0x20c]; // 0x5a2c 
    std::uint8_t _[0x4]; // 0x5c38 
    std::uint8_t _[0x4]; // 0x5c3c 
    std::uint8_t _[0x4]; // 0x5c40 
    std::uint8_t _[0x4]; // 0x5c44 
    std::uint8_t _[0x10]; // 0x5c48 
    std::uint8_t _[0x4]; // 0x5c58 
    std::uint8_t _[0x4]; // 0x5c5c 
    std::uint8_t _[0x10]; // 0x5c60 
    std::uint8_t _[0x4]; // 0x5c70 
    std::uint8_t _[0x1]; // 0x5c74 
    std::uint8_t _[0x3]; // 0x5c75 
    std::uint8_t _[0x10]; // 0x5c78 
    std::uint8_t _[0x18]; // 0x5c88 
    std::uint8_t _[0x8]; // 0x5ca0 
    std::uint8_t _[0x18]; // 0x5ca8 
    std::uint8_t _[0x1]; // 0x5cc0 
    std::uint8_t _[0x7]; // 0x5cc1 
    std::uint8_t _[0xb8]; // 0x5cc8 
    std::uint8_t _[0x1]; // 0x5d80 
    std::uint8_t _[0x1]; // 0x5d81 
    std::uint8_t _[0x1]; // 0x5d82 
    std::uint8_t _[0x1]; // 0x5d83 
    std::uint8_t _[0x4]; // 0x5d84 
    std::uint8_t _[0x10]; // 0x5d88 
    std::uint8_t _[0x18]; // 0x5d98 
    std::uint8_t _[0x18]; // 0x5db0 
    std::uint8_t _[0x4]; // 0x5dc8 
    std::uint8_t _[0x28]; // 0x5dcc 
    std::uint8_t _[0x4]; // 0x5df4 
    std::uint8_t _[0x4]; // 0x5df8 
    std::uint8_t _[0x10]; // 0x5dfc 
    std::uint8_t _[0x4]; // 0x5e0c 
    std::uint8_t _[0x4]; // 0x5e10 
    std::uint8_t _[0x4]; // 0x5e14 
    std::uint8_t _[0xc]; // 0x5e18 
    std::uint8_t _[0xc]; // 0x5e24 
    std::uint8_t _[0x8]; // 0x5e30 
};

struct CHandleTest {
    static constexpr std::size_t size = 0x4b0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
};

struct CLogicNPCCounter {
    static constexpr std::size_t size = 0x728;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x18]; // 0x4a8 
    std::uint8_t _[0x18]; // 0x4c0 
    std::uint8_t _[0x20]; // 0x4d8 
    std::uint8_t _[0x20]; // 0x4f8 
    std::uint8_t _[0x18]; // 0x518 
    std::uint8_t _[0x18]; // 0x530 
    std::uint8_t _[0x20]; // 0x548 
    std::uint8_t _[0x20]; // 0x568 
    std::uint8_t _[0x18]; // 0x588 
    std::uint8_t _[0x18]; // 0x5a0 
    std::uint8_t _[0x20]; // 0x5b8 
    std::uint8_t _[0x20]; // 0x5d8 
    std::uint8_t _[0x18]; // 0x5f8 
    std::uint8_t _[0x18]; // 0x610 
    std::uint8_t _[0x20]; // 0x628 
    std::uint8_t _[0x20]; // 0x648 
    std::uint8_t _[0x8]; // 0x668 
    std::uint8_t _[0x8]; // 0x670 
    std::uint8_t _[0x4]; // 0x678 
    std::uint8_t _[0x4]; // 0x67c 
    std::uint8_t _[0x4]; // 0x680 
    std::uint8_t _[0x4]; // 0x684 
    std::uint8_t _[0x4]; // 0x688 
    std::uint8_t _[0xc]; // 0x68c 
    std::uint8_t _[0x8]; // 0x698 
    std::uint8_t _[0x4]; // 0x6a0 
    std::uint8_t _[0x4]; // 0x6a4 
    std::uint8_t _[0x4]; // 0x6a8 
    std::uint8_t _[0x4]; // 0x6ac 
    std::uint8_t _[0x4]; // 0x6b0 
    std::uint8_t _[0x8]; // 0x6b4 
    std::uint8_t _[0x4]; // 0x6bc 
    std::uint8_t _[0x8]; // 0x6c0 
    std::uint8_t _[0x4]; // 0x6c8 
    std::uint8_t _[0x4]; // 0x6cc 
    std::uint8_t _[0x4]; // 0x6d0 
    std::uint8_t _[0x4]; // 0x6d4 
    std::uint8_t _[0x4]; // 0x6d8 
    std::uint8_t _[0x8]; // 0x6dc 
    std::uint8_t _[0x4]; // 0x6e4 
    std::uint8_t _[0x8]; // 0x6e8 
    std::uint8_t _[0x4]; // 0x6f0 
    std::uint8_t _[0x4]; // 0x6f4 
    std::uint8_t _[0x4]; // 0x6f8 
    std::uint8_t _[0x4]; // 0x6fc 
    std::uint8_t _[0x4]; // 0x700 
    std::uint8_t _[0x8]; // 0x704 
    std::uint8_t _[0x1c]; // 0x70c 
};

struct CCSPlayer_RadioServices {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0xc]; // 0x54 
    std::uint8_t _[0x8]; // 0x60 
};

struct CWeaponSG556 {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x12a0]; // 0x0
};

struct CRagdollConstraint {
    static constexpr std::size_t size = 0x530;
    std::uint8_t pad_0[0x508]; // 0x0
    std::uint8_t _[0x4]; // 0x508 
    std::uint8_t _[0x4]; // 0x50c 
    std::uint8_t _[0x4]; // 0x510 
    std::uint8_t _[0x4]; // 0x514 
    std::uint8_t _[0x4]; // 0x518 
    std::uint8_t _[0x4]; // 0x51c 
    std::uint8_t _[0x4]; // 0x520 
    std::uint8_t _[0x4]; // 0x524 
    std::uint8_t _[0x8]; // 0x528 
};

struct CFuncVehicleClip {
    static constexpr std::size_t size = 0x850;
    std::uint8_t pad_0[0x850]; // 0x0
};

struct CDEagle {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x12a0]; // 0x0
};

struct CWeaponFamas {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x12a0]; // 0x0
};

struct CEnvSplash {
    static constexpr std::size_t size = 0x4b0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
};

struct CPointCameraVFOV {
    static constexpr std::size_t size = 0x510;
    std::uint8_t pad_0[0x508]; // 0x0
    std::uint8_t _[0x8]; // 0x508 
};

struct CCSGO_WingmanIntroTerroristPosition {
    static constexpr std::size_t size = 0x1468;
    std::uint8_t pad_0[0x1468]; // 0x0
};

struct CCSWeaponBaseShotgun {
    static constexpr std::size_t size = 0x1280;
    std::uint8_t pad_0[0x1280]; // 0x0
};

struct CFuncMoveLinear {
    static constexpr std::size_t size = 0x958;
    std::uint8_t pad_0[0x8d0]; // 0x0
    std::uint8_t _[0x4]; // 0x8d0 
    std::uint8_t _[0xc]; // 0x8d4 
    std::uint8_t _[0x10]; // 0x8e0 
    std::uint8_t _[0x8]; // 0x8f0 
    std::uint8_t _[0x8]; // 0x8f8 
    std::uint8_t _[0x8]; // 0x900 
    std::uint8_t _[0x4]; // 0x908 
    std::uint8_t _[0xc]; // 0x90c 
    std::uint8_t _[0x18]; // 0x918 
    std::uint8_t _[0x18]; // 0x930 
    std::uint8_t _[0x4]; // 0x948 
    std::uint8_t _[0x1]; // 0x94c 
    std::uint8_t _[0x1]; // 0x94d 
    std::uint8_t _[0xa]; // 0x94e 
};

struct CPrecipitationVData {
    static constexpr std::size_t size = 0x2f0;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0xe0]; // 0x28 
    std::uint8_t _[0xe0]; // 0x108 
    std::uint8_t _[0xe0]; // 0x1e8 
    std::uint8_t _[0x4]; // 0x2c8 
    std::uint8_t _[0x4]; // 0x2cc 
    std::uint8_t _[0x4]; // 0x2d0 
    std::uint8_t _[0x4]; // 0x2d4 
    std::uint8_t _[0x8]; // 0x2d8 
    std::uint8_t _[0x8]; // 0x2e0 
    std::uint8_t _[0x4]; // 0x2e8 
    std::uint8_t _[0x4]; // 0x2ec 
};

struct CPulseCell_WaitForObservable {
    static constexpr std::size_t size = 0x1b0;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x90]; // 0xd8 
    std::uint8_t _[0x48]; // 0x168 
};

struct CScriptItem {
    static constexpr std::size_t size = 0xaf0;
    std::uint8_t pad_0[0xae0]; // 0x0
    std::uint8_t _[0x10]; // 0xae0 
};

struct CDynamicPropAlias_prop_dynamic_override {
    static constexpr std::size_t size = 0xc90;
    std::uint8_t pad_0[0xc90]; // 0x0
};

struct CBaseTrigger {
    static constexpr std::size_t size = 0x9c8;
    std::uint8_t pad_0[0x8d0]; // 0x0
    std::uint8_t _[0x18]; // 0x8d0 
    std::uint8_t _[0x18]; // 0x8e8 
    std::uint8_t _[0x18]; // 0x900 
    std::uint8_t _[0x18]; // 0x918 
    std::uint8_t _[0x18]; // 0x930 
    std::uint8_t _[0x18]; // 0x948 
    std::uint8_t _[0x18]; // 0x960 
    std::uint8_t _[0x18]; // 0x978 
    std::uint8_t _[0x18]; // 0x990 
    std::uint8_t _[0x8]; // 0x9a8 
    std::uint8_t _[0x4]; // 0x9b0 
    std::uint8_t _[0xc]; // 0x9b4 
    std::uint8_t _[0x8]; // 0x9c0 
};

struct CPointPush {
    static constexpr std::size_t size = 0x4d0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b4 
    std::uint8_t _[0x8]; // 0x4b8 
    std::uint8_t _[0x8]; // 0x4c0 
    std::uint8_t _[0x8]; // 0x4c8 
};

struct CPulseCell_Step_EntFire {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x8]; // 0x48 
};

struct CCSObserver_ObserverServices {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x80]; // 0x0
};

struct CPlayerPing {
    static constexpr std::size_t size = 0x4d0;
    std::uint8_t pad_0[0x4b0]; // 0x0
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b4 
    std::uint8_t _[0x4]; // 0x4b8 
    std::uint8_t _[0x1]; // 0x4bc 
    std::uint8_t _[0x13]; // 0x4bd 
};

struct CHitboxComponent {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x14]; // 0x0
    std::uint8_t _[0x4]; // 0x14 
};

struct CRopeKeyframe {
    static constexpr std::size_t size = 0x8a8;
    std::uint8_t pad_0[0x858]; // 0x0
    std::uint8_t _[0x8]; // 0x858 
    std::uint8_t _[0x8]; // 0x860 
    std::uint8_t _[0x4]; // 0x868 
    std::uint8_t _[0x4]; // 0x86c 
    std::uint8_t _[0x4]; // 0x870 
    std::uint8_t _[0x1]; // 0x874 
    std::uint8_t _[0x3]; // 0x875 
    std::uint8_t _[0x8]; // 0x878 
    std::uint8_t _[0x8]; // 0x880 
    std::uint8_t _[0x1]; // 0x888 
    std::uint8_t _[0x1]; // 0x889 
    std::uint8_t _[0x2]; // 0x88a 
    std::uint8_t _[0x1]; // 0x88c 
    std::uint8_t _[0x3]; // 0x88d 
    std::uint8_t _[0x4]; // 0x890 
    std::uint8_t _[0x1]; // 0x894 
    std::uint8_t _[0x3]; // 0x895 
    std::uint8_t _[0x4]; // 0x898 
    std::uint8_t _[0x4]; // 0x89c 
    std::uint8_t _[0x1]; // 0x8a0 
    std::uint8_t _[0x7]; // 0x8a1 
};

struct CSmokeGrenade {
    static constexpr std::size_t size = 0x12d0;
    std::uint8_t pad_0[0x12d0]; // 0x0
};

struct CBaseCombatCharacter {
    static constexpr std::size_t size = 0xb10;
    std::uint8_t pad_0[0xa40]; // 0x0
    std::uint8_t _[0x8]; // 0xa40 
    std::uint8_t _[0x18]; // 0xa48 
    std::uint8_t _[0x4]; // 0xa60 
    std::uint8_t _[0x1]; // 0xa64 
    std::uint8_t _[0x43]; // 0xa65 
    std::uint8_t _[0x18]; // 0xaa8 
    std::uint8_t _[0x8]; // 0xac0 
    std::uint8_t _[0x4]; // 0xac8 
    std::uint8_t _[0x4]; // 0xacc 
    std::uint8_t _[0x40]; // 0xad0 
};

struct CLogicGameStateReport {
    static constexpr std::size_t size = 0x570;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0xc8]; // 0x4a8 
};

struct ServerAuthoritativeWeaponSlot_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x2]; // 0x30 
    std::uint8_t _[0x2]; // 0x32 
    std::uint8_t _[0x4]; // 0x34 
};

struct CPathQueryComponent {
    static constexpr std::size_t size = 0xa0;
    std::uint8_t pad_0[0xa0]; // 0x0
};

struct CLogicRelay {
    static constexpr std::size_t size = 0x4e0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x18]; // 0x4a8 
    std::uint8_t _[0x18]; // 0x4c0 
    std::uint8_t _[0x1]; // 0x4d8 
    std::uint8_t _[0x1]; // 0x4d9 
    std::uint8_t _[0x1]; // 0x4da 
    std::uint8_t _[0x1]; // 0x4db 
    std::uint8_t _[0x4]; // 0x4dc 
};

struct SequenceHistory_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
};

struct CPlayer_ItemServices {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulse_OutflowConnection {
    static constexpr std::size_t size = 0x48;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x30]; // 0x18 
};

struct CTestPulseIO {
    static constexpr std::size_t size = 0x7a0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x18]; // 0x4a8 
    std::uint8_t _[0x20]; // 0x4c0 
    std::uint8_t _[0x20]; // 0x4e0 
    std::uint8_t _[0x20]; // 0x500 
    std::uint8_t _[0x20]; // 0x520 
    std::uint8_t _[0x20]; // 0x540 
    std::uint8_t _[0x28]; // 0x560 
    std::uint8_t _[0x8]; // 0x588 
    std::uint8_t _[0x30]; // 0x590 
    std::uint8_t _[0x18]; // 0x5c0 
    std::uint8_t _[0x20]; // 0x5d8 
    std::uint8_t _[0x20]; // 0x5f8 
    std::uint8_t _[0x20]; // 0x618 
    std::uint8_t _[0x20]; // 0x638 
    std::uint8_t _[0x20]; // 0x658 
    std::uint8_t _[0x28]; // 0x678 
    std::uint8_t _[0x20]; // 0x6a0 
    std::uint8_t _[0x20]; // 0x6c0 
    std::uint8_t _[0x20]; // 0x6e0 
    std::uint8_t _[0x28]; // 0x700 
    std::uint8_t _[0x28]; // 0x728 
    std::uint8_t _[0x20]; // 0x750 
    std::uint8_t _[0x30]; // 0x770 
};

struct CWeaponUMP45 {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x12a0]; // 0x0
};

struct CGamePlayerEquip {
    static constexpr std::size_t size = 0x878;
    std::uint8_t pad_0[0x878]; // 0x0
};

struct CPointEntityFinder {
    static constexpr std::size_t size = 0x4e8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x8]; // 0x4b8 
    std::uint8_t _[0x8]; // 0x4c0 
    std::uint8_t _[0x4]; // 0x4c8 
    std::uint8_t _[0x4]; // 0x4cc 
    std::uint8_t _[0x18]; // 0x4d0 
};

struct CPulseGraphDef {
    static constexpr std::size_t size = 0x1c0;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x10]; // 0x8 
    std::uint8_t _[0x18]; // 0x18 
    std::uint8_t _[0x10]; // 0x30 
    std::uint8_t _[0x10]; // 0x40 
    std::uint8_t _[0x18]; // 0x50 
    std::uint8_t _[0x18]; // 0x68 
    std::uint8_t _[0x18]; // 0x80 
    std::uint8_t _[0x18]; // 0x98 
    std::uint8_t _[0x18]; // 0xb0 
    std::uint8_t _[0x18]; // 0xc8 
    std::uint8_t _[0x18]; // 0xe0 
    std::uint8_t _[0x18]; // 0xf8 
    std::uint8_t _[0x18]; // 0x110 
    std::uint8_t _[0x18]; // 0x128 
    std::uint8_t _[0x80]; // 0x140 
};

struct CKnife {
    static constexpr std::size_t size = 0x1290;
    std::uint8_t pad_0[0x1280]; // 0x0
    std::uint8_t _[0x10]; // 0x1280 
};

struct CCSGO_TeamIntroCharacterPosition {
    static constexpr std::size_t size = 0x1468;
    std::uint8_t pad_0[0x1468]; // 0x0
};

struct CHostageRescueZoneShim {
    static constexpr std::size_t size = 0x9c8;
    std::uint8_t pad_0[0x9c8]; // 0x0
};

struct CSimpleMarkupVolumeTagged {
    static constexpr std::size_t size = 0x890;
    std::uint8_t pad_0[0x890]; // 0x0
};

struct CEnvSoundscapeAlias_snd_soundscape {
    static constexpr std::size_t size = 0x538;
    std::uint8_t pad_0[0x538]; // 0x0
};

struct CCSPlayer_HostageServices {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
};

struct CRenderComponent {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x40]; // 0x10 
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0x4]; // 0x54 
    std::uint8_t _[0x50]; // 0x58 
    std::uint8_t _[0x8]; // 0xa8 
};

struct CWaterBullet {
    static constexpr std::size_t size = 0xa40;
    std::uint8_t pad_0[0xa40]; // 0x0
};

struct CTriggerSoundscape {
    static constexpr std::size_t size = 0x9f0;
    std::uint8_t pad_0[0x9c8]; // 0x0
    std::uint8_t _[0x8]; // 0x9c8 
    std::uint8_t _[0x8]; // 0x9d0 
    std::uint8_t _[0x18]; // 0x9d8 
};

struct CPulseCell_Outflow_PlayVOLine__CursorState_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CHostageExpresserShim {
    static constexpr std::size_t size = 0xb20;
    std::uint8_t pad_0[0xb10]; // 0x0
    std::uint8_t _[0x10]; // 0xb10 
};

struct CPointChildModifier {
    static constexpr std::size_t size = 0x4b0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
};

struct CCSPlayerLegacyJump {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
};

struct CWeaponHKP2000 {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x12a0]; // 0x0
};

struct CShatterGlassShardPhysics {
    static constexpr std::size_t size = 0x8e0;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x8]; // 0x850 
    std::uint8_t _[0x80]; // 0x858 
    std::uint8_t _[0x4]; // 0x8d8 
    std::uint8_t _[0x4]; // 0x8dc 
};

struct CPathParticleRope {
    static constexpr std::size_t size = 0x590;
    std::uint8_t pad_0[0x4b0]; // 0x0
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b4 
    std::uint8_t _[0x8]; // 0x4b8 
    std::uint8_t _[0x18]; // 0x4c0 
    std::uint8_t _[0x4]; // 0x4d8 
    std::uint8_t _[0x4]; // 0x4dc 
    std::uint8_t _[0x4]; // 0x4e0 
    std::uint8_t _[0x4]; // 0x4e4 
    std::uint8_t _[0x8]; // 0x4e8 
    std::uint8_t _[0x8]; // 0x4f0 
    std::uint8_t _[0x18]; // 0x4f8 
    std::uint8_t _[0x18]; // 0x510 
    std::uint8_t _[0x18]; // 0x528 
    std::uint8_t _[0x18]; // 0x540 
    std::uint8_t _[0x18]; // 0x558 
    std::uint8_t _[0x20]; // 0x570 
};

struct CCredits {
    static constexpr std::size_t size = 0x4c8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x18]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4c0 
    std::uint8_t _[0x4]; // 0x4c4 
};

struct CWeaponFiveSeven {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x12a0]; // 0x0
};

struct CFishPool {
    static constexpr std::size_t size = 0x500;
    std::uint8_t pad_0[0x4b8]; // 0x0
    std::uint8_t _[0x4]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4bc 
    std::uint8_t _[0x4]; // 0x4c0 
    std::uint8_t _[0x4]; // 0x4c4 
    std::uint8_t _[0x8]; // 0x4c8 
    std::uint8_t _[0x18]; // 0x4d0 
    std::uint8_t _[0x18]; // 0x4e8 
};

struct CPlayer_MovementServices {
    static constexpr std::size_t size = 0x258;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x20]; // 0x50 
    std::uint8_t _[0x8]; // 0x70 
    std::uint8_t _[0x8]; // 0x78 
    std::uint8_t _[0x8]; // 0x80 
    std::uint8_t _[0x100]; // 0x88 
    std::uint8_t _[0x8]; // 0x188 
    std::uint8_t _[0x10]; // 0x190 
    std::uint8_t _[0x4]; // 0x1a0 
    std::uint8_t _[0x4]; // 0x1a4 
    std::uint8_t _[0x4]; // 0x1a8 
    std::uint8_t _[0x4]; // 0x1ac 
    std::uint8_t _[0x10]; // 0x1b0 
    std::uint8_t _[0x4]; // 0x1c0 
    std::uint8_t _[0x4]; // 0x1c4 
    std::uint8_t _[0x4]; // 0x1c8 
    std::uint8_t _[0x74]; // 0x1cc 
    std::uint8_t _[0x18]; // 0x240 
};

struct CRagdollPropAlias_physics_prop_ragdoll {
    static constexpr std::size_t size = 0xc00;
    std::uint8_t pad_0[0xc00]; // 0x0
};

struct CBreakableProp {
    static constexpr std::size_t size = 0xbd0;
    std::uint8_t pad_0[0xa78]; // 0x0
    std::uint8_t _[0x40]; // 0xa78 
    std::uint8_t _[0x18]; // 0xab8 
    std::uint8_t _[0x18]; // 0xad0 
    std::uint8_t _[0x20]; // 0xae8 
    std::uint8_t _[0x18]; // 0xb08 
    std::uint8_t _[0x4]; // 0xb20 
    std::uint8_t _[0x4]; // 0xb24 
    std::uint8_t _[0xc]; // 0xb28 
    std::uint8_t _[0x4]; // 0xb34 
    std::uint8_t _[0x4]; // 0xb38 
    std::uint8_t _[0xc]; // 0xb3c 
    std::uint8_t _[0x4]; // 0xb48 
    std::uint8_t _[0x4]; // 0xb4c 
    std::uint8_t _[0x4]; // 0xb50 
    std::uint8_t _[0x4]; // 0xb54 
    std::uint8_t _[0x8]; // 0xb58 
    std::uint8_t _[0x8]; // 0xb60 
    std::uint8_t _[0x4]; // 0xb68 
    std::uint8_t _[0x4]; // 0xb6c 
    std::uint8_t _[0x8]; // 0xb70 
    std::uint8_t _[0x8]; // 0xb78 
    std::uint8_t _[0x8]; // 0xb80 
    std::uint8_t _[0x8]; // 0xb88 
    std::uint8_t _[0x8]; // 0xb90 
    std::uint8_t _[0x8]; // 0xb98 
    std::uint8_t _[0x8]; // 0xba0 
    std::uint8_t _[0x4]; // 0xba8 
    std::uint8_t _[0x4]; // 0xbac 
    std::uint8_t _[0x4]; // 0xbb0 
    std::uint8_t _[0x4]; // 0xbb4 
    std::uint8_t _[0x8]; // 0xbb8 
    std::uint8_t _[0x1]; // 0xbc0 
    std::uint8_t _[0xf]; // 0xbc1 
};

struct CLightEntity {
    static constexpr std::size_t size = 0x858;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x8]; // 0x850 
};

struct CInfoDynamicShadowHintBox {
    static constexpr std::size_t size = 0x4d8;
    std::uint8_t pad_0[0x4c0]; // 0x0
    std::uint8_t _[0xc]; // 0x4c0 
    std::uint8_t _[0xc]; // 0x4cc 
};

struct CBaseAnimGraphController {
    static constexpr std::size_t size = 0x650;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x18]; // 0x20 
    std::uint8_t _[0x18]; // 0x38 
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0x4]; // 0x54 
    std::uint8_t _[0x4]; // 0x58 
    std::uint8_t _[0x4]; // 0x5c 
    std::uint8_t _[0x4]; // 0x60 
    std::uint8_t _[0x4]; // 0x64 
    std::uint8_t _[0x4]; // 0x68 
    std::uint8_t _[0xc]; // 0x6c 
    std::uint8_t _[0x1]; // 0x78 
    std::uint8_t _[0x1]; // 0x79 
    std::uint8_t _[0x1]; // 0x7a 
    std::uint8_t _[0x1]; // 0x7b 
    std::uint8_t _[0x4]; // 0x7c 
    std::uint8_t _[0x2a0]; // 0x80 
    std::uint8_t _[0x8]; // 0x320 
    std::uint8_t _[0x68]; // 0x328 
    std::uint8_t _[0x18]; // 0x390 
    std::uint8_t _[0x4]; // 0x3a8 
    std::uint8_t _[0x14]; // 0x3ac 
    std::uint8_t _[0x4]; // 0x3c0 
    std::uint8_t _[0x4]; // 0x3c4 
    std::uint8_t _[0x8]; // 0x3c8 
    std::uint8_t _[0x18]; // 0x3d0 
    std::uint8_t _[0x18]; // 0x3e8 
    std::uint8_t _[0x8]; // 0x400 
    std::uint8_t _[0x220]; // 0x408 
    std::uint8_t _[0x28]; // 0x628 
};

struct AnimGraph2SerializedPoseRecipeSlot_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x10]; // 0x30 
};

struct CBuoyancyHelper {
    static constexpr std::size_t size = 0x118;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x10]; // 0x8 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x18]; // 0x30 
    std::uint8_t _[0x18]; // 0x48 
    std::uint8_t _[0x18]; // 0x60 
    std::uint8_t _[0xa0]; // 0x78 
};

struct COrnamentProp {
    static constexpr std::size_t size = 0xca0;
    std::uint8_t pad_0[0xc90]; // 0x0
    std::uint8_t _[0x10]; // 0xc90 
};

struct CCSPlayer_CameraServices {
    static constexpr std::size_t size = 0x1b0;
    std::uint8_t pad_0[0x1b0]; // 0x0
};

struct CModelPointEntity {
    static constexpr std::size_t size = 0x850;
    std::uint8_t pad_0[0x850]; // 0x0
};

struct CRectLight {
    static constexpr std::size_t size = 0xb40;
    std::uint8_t pad_0[0xb38]; // 0x0
    std::uint8_t _[0x8]; // 0xb38 
};

struct CFilterMultiple {
    static constexpr std::size_t size = 0x560;
    std::uint8_t pad_0[0x4e0]; // 0x0
    std::uint8_t _[0x8]; // 0x4e0 
    std::uint8_t _[0x50]; // 0x4e8 
    std::uint8_t _[0x28]; // 0x538 
};

struct CCSPlayerResource {
    static constexpr std::size_t size = 0x540;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0xc]; // 0x4a8 
    std::uint8_t _[0xc]; // 0x4b4 
    std::uint8_t _[0x30]; // 0x4c0 
    std::uint8_t _[0xc]; // 0x4f0 
    std::uint8_t _[0xc]; // 0x4fc 
    std::uint8_t _[0x10]; // 0x508 
    std::uint8_t _[0x10]; // 0x518 
    std::uint8_t _[0x10]; // 0x528 
    std::uint8_t _[0x1]; // 0x538 
    std::uint8_t _[0x7]; // 0x539 
};

struct CPulseCell_FireCursors {
    static constexpr std::size_t size = 0x140;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x18]; // 0xd8 
    std::uint8_t _[0x8]; // 0xf0 
    std::uint8_t _[0x48]; // 0xf8 
};

struct CFuncNavBlocker {
    static constexpr std::size_t size = 0x868;
    std::uint8_t pad_0[0x858]; // 0x0
    std::uint8_t _[0x4]; // 0x858 
    std::uint8_t _[0xc]; // 0x85c 
};

struct CMoverPathNode {
    static constexpr std::size_t size = 0x5a0;
    std::uint8_t pad_0[0x500]; // 0x0
    std::uint8_t _[0x20]; // 0x500 
    std::uint8_t _[0x20]; // 0x520 
    std::uint8_t _[0x20]; // 0x540 
    std::uint8_t _[0x20]; // 0x560 
    std::uint8_t _[0x20]; // 0x580 
};

struct CEnvSoundscape {
    static constexpr std::size_t size = 0x538;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x18]; // 0x4a8 
    std::uint8_t _[0x8]; // 0x4c0 
    std::uint8_t _[0x8]; // 0x4c8 
    std::uint8_t _[0x4]; // 0x4d0 
    std::uint8_t _[0x4]; // 0x4d4 
    std::uint8_t _[0x8]; // 0x4d8 
    std::uint8_t _[0x40]; // 0x4e0 
    std::uint8_t _[0x4]; // 0x520 
    std::uint8_t _[0x4]; // 0x524 
    std::uint8_t _[0x8]; // 0x528 
    std::uint8_t _[0x8]; // 0x530 
};

struct CFuncBrush {
    static constexpr std::size_t size = 0x870;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x4]; // 0x850 
    std::uint8_t _[0x4]; // 0x854 
    std::uint8_t _[0x8]; // 0x858 
    std::uint8_t _[0x8]; // 0x860 
    std::uint8_t _[0x1]; // 0x868 
    std::uint8_t _[0x7]; // 0x869 
};

struct CBodyComponentPoint {
    static constexpr std::size_t size = 0x190;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t _[0x110]; // 0x80 
};

struct CPhysBox {
    static constexpr std::size_t size = 0xa08;
    std::uint8_t pad_0[0x928]; // 0x0
    std::uint8_t _[0x4]; // 0x928 
    std::uint8_t _[0x4]; // 0x92c 
    std::uint8_t _[0x4]; // 0x930 
    std::uint8_t _[0xc]; // 0x934 
    std::uint8_t _[0xc]; // 0x940 
    std::uint8_t _[0x1]; // 0x94c 
    std::uint8_t _[0x1]; // 0x94d 
    std::uint8_t _[0x2]; // 0x94e 
    std::uint8_t _[0x8]; // 0x950 
    std::uint8_t _[0x8]; // 0x958 
    std::uint8_t _[0x8]; // 0x960 
    std::uint8_t _[0x8]; // 0x968 
    std::uint8_t _[0x8]; // 0x970 
    std::uint8_t _[0x18]; // 0x978 
    std::uint8_t _[0x18]; // 0x990 
    std::uint8_t _[0x18]; // 0x9a8 
    std::uint8_t _[0x18]; // 0x9c0 
    std::uint8_t _[0x30]; // 0x9d8 
};

struct CSoundEventAABBEntity {
    static constexpr std::size_t size = 0x580;
    std::uint8_t pad_0[0x568]; // 0x0
    std::uint8_t _[0xc]; // 0x568 
    std::uint8_t _[0xc]; // 0x574 
};

struct CItemSoda {
    static constexpr std::size_t size = 0xa40;
    std::uint8_t pad_0[0xa40]; // 0x0
};

struct CPulseCell_ApplyDynamicAttributeBase {
    static constexpr std::size_t size = 0xd8;
    std::uint8_t pad_0[0xd8]; // 0x0
};

struct CPulseCell_Timeline__TimelineEvent_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x48]; // 0x8 
};

struct COmniLight {
    static constexpr std::size_t size = 0xb48;
    std::uint8_t pad_0[0xb38]; // 0x0
    std::uint8_t _[0x4]; // 0xb38 
    std::uint8_t _[0x4]; // 0xb3c 
    std::uint8_t _[0x8]; // 0xb40 
};

struct CTriggerVolume {
    static constexpr std::size_t size = 0x860;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x8]; // 0x850 
    std::uint8_t _[0x8]; // 0x858 
};

struct CBtNodeCondition {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x58]; // 0x0
    std::uint8_t _[0x8]; // 0x58 
};

struct CPulseCell_IntervalTimer__CursorState_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
};

struct CPulseCell_BaseRequirement {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CEnvExplosion {
    static constexpr std::size_t size = 0x8a8;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x4]; // 0x850 
    std::uint8_t _[0x4]; // 0x854 
    std::uint8_t _[0x4]; // 0x858 
    std::uint8_t _[0x4]; // 0x85c 
    std::uint8_t _[0x4]; // 0x860 
    std::uint8_t _[0x4]; // 0x864 
    std::uint8_t _[0x4]; // 0x868 
    std::uint8_t _[0x1]; // 0x86c 
    std::uint8_t _[0xb]; // 0x86d 
    std::uint8_t _[0x8]; // 0x878 
    std::uint8_t _[0x8]; // 0x880 
    std::uint8_t _[0x4]; // 0x888 
    std::uint8_t _[0x4]; // 0x88c 
    std::uint8_t _[0x8]; // 0x890 
    std::uint8_t _[0x8]; // 0x898 
    std::uint8_t _[0x8]; // 0x8a0 
};

struct CPulseCell_BaseState {
    static constexpr std::size_t size = 0xd8;
    std::uint8_t pad_0[0xd8]; // 0x0
};

struct OutflowWithRequirements_t {
    static constexpr std::size_t size = 0x80;
    std::uint8_t _[0x48]; // 0x0 
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x18]; // 0x50 
    std::uint8_t _[0x18]; // 0x68 
};

struct CTestPulseIO__ThreeStringArgs_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
};

struct CPulseCell_IsRequirementValid {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CFootstepControl {
    static constexpr std::size_t size = 0x9d8;
    std::uint8_t pad_0[0x9c8]; // 0x0
    std::uint8_t _[0x8]; // 0x9c8 
    std::uint8_t _[0x8]; // 0x9d0 
};

struct CCSPlayer_ItemServices {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x1]; // 0x48 
    std::uint8_t _[0x7]; // 0x49 
};

struct CPulseCell_Value_Gradient {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x18]; // 0x48 
};

struct CParticleSystem {
    static constexpr std::size_t size = 0xdd8;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x200]; // 0x850 
    std::uint8_t _[0x1]; // 0xa50 
    std::uint8_t _[0x3]; // 0xa51 
    std::uint8_t _[0x4]; // 0xa54 
    std::uint8_t _[0x4]; // 0xa58 
    std::uint8_t _[0x4]; // 0xa5c 
    std::uint8_t _[0x8]; // 0xa60 
    std::uint8_t _[0x4]; // 0xa68 
    std::uint8_t _[0x4]; // 0xa6c 
    std::uint8_t _[0x30]; // 0xa70 
    std::uint8_t _[0x4]; // 0xaa0 
    std::uint8_t _[0x100]; // 0xaa4 
    std::uint8_t _[0x4]; // 0xba4 
    std::uint8_t _[0x8]; // 0xba8 
    std::uint8_t _[0x1]; // 0xbb0 
    std::uint8_t _[0x1]; // 0xbb1 
    std::uint8_t _[0x1]; // 0xbb2 
    std::uint8_t _[0x5]; // 0xbb3 
    std::uint8_t _[0x8]; // 0xbb8 
    std::uint8_t _[0x200]; // 0xbc0 
    std::uint8_t _[0x4]; // 0xdc0 
    std::uint8_t _[0xc]; // 0xdc4 
    std::uint8_t _[0x4]; // 0xdd0 
    std::uint8_t _[0x4]; // 0xdd4 
};

struct CTriggerBrush {
    static constexpr std::size_t size = 0x8a0;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x18]; // 0x850 
    std::uint8_t _[0x18]; // 0x868 
    std::uint8_t _[0x18]; // 0x880 
    std::uint8_t _[0x4]; // 0x898 
    std::uint8_t _[0x4]; // 0x89c 
};

struct IntervalTimer {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
};

struct audioparams_t {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x60]; // 0x8 
    std::uint8_t _[0x4]; // 0x68 
    std::uint8_t _[0x4]; // 0x6c 
    std::uint8_t _[0x4]; // 0x70 
    std::uint8_t _[0x4]; // 0x74 
};

struct CSoundEventMultiPointEntity {
    static constexpr std::size_t size = 0x5a0;
    std::uint8_t pad_0[0x568]; // 0x0
    std::uint8_t _[0x4]; // 0x568 
    std::uint8_t _[0x4]; // 0x56c 
    std::uint8_t _[0x4]; // 0x570 
    std::uint8_t _[0x4]; // 0x574 
    std::uint8_t _[0x28]; // 0x578 
};

struct CSoundAreaEntityBase {
    static constexpr std::size_t size = 0x4c8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x10]; // 0x4b8 
};

struct CWeaponM4A1Silencer {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x12a0]; // 0x0
};

struct CTimeline {
    static constexpr std::size_t size = 0x228;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x100]; // 0x10 
    std::uint8_t _[0x100]; // 0x110 
    std::uint8_t _[0x4]; // 0x210 
    std::uint8_t _[0x4]; // 0x214 
    std::uint8_t _[0x4]; // 0x218 
    std::uint8_t _[0x4]; // 0x21c 
    std::uint8_t _[0x8]; // 0x220 
};

struct CTestPulseIO__FloatStringArgs_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
};

struct CountdownTimer {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
};

struct CNoiseStreamData {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x50]; // 0x0 
};

struct PulseNodeDynamicOutflows_t__DynamicOutflow_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x48]; // 0x8 
};

struct CItemAssaultSuit {
    static constexpr std::size_t size = 0xae0;
    std::uint8_t pad_0[0xae0]; // 0x0
};

struct CBeam {
    static constexpr std::size_t size = 0x8f0;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x4]; // 0x850 
    std::uint8_t _[0x4]; // 0x854 
    std::uint8_t _[0x4]; // 0x858 
    std::uint8_t _[0x4]; // 0x85c 
    std::uint8_t _[0x8]; // 0x860 
    std::uint8_t _[0x8]; // 0x868 
    std::uint8_t _[0x8]; // 0x870 
    std::uint8_t _[0x4]; // 0x878 
    std::uint8_t _[0x4]; // 0x87c 
    std::uint8_t _[0x28]; // 0x880 
    std::uint8_t _[0xc]; // 0x8a8 
    std::uint8_t _[0x4]; // 0x8b4 
    std::uint8_t _[0x4]; // 0x8b8 
    std::uint8_t _[0x4]; // 0x8bc 
    std::uint8_t _[0x4]; // 0x8c0 
    std::uint8_t _[0x4]; // 0x8c4 
    std::uint8_t _[0x4]; // 0x8c8 
    std::uint8_t _[0x4]; // 0x8cc 
    std::uint8_t _[0x4]; // 0x8d0 
    std::uint8_t _[0x4]; // 0x8d4 
    std::uint8_t _[0xc]; // 0x8d8 
    std::uint8_t _[0x4]; // 0x8e4 
    std::uint8_t _[0x8]; // 0x8e8 
};

struct CLogicEventListener {
    static constexpr std::size_t size = 0x4e8;
    std::uint8_t pad_0[0x4b8]; // 0x0
    std::uint8_t _[0x8]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4c0 
    std::uint8_t _[0x4]; // 0x4c4 
    std::uint8_t _[0x20]; // 0x4c8 
};

struct CCSGO_TeamSelectTerroristPosition {
    static constexpr std::size_t size = 0x1468;
    std::uint8_t pad_0[0x1468]; // 0x0
};

struct CInfoData {
    static constexpr std::size_t size = 0x840;
    std::uint8_t pad_0[0x840]; // 0x0
};

struct CWeaponNegev {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x12a0]; // 0x0
};

struct CWeaponElite {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x12a0]; // 0x0
};

struct CBasePlayerPawn {
    static constexpr std::size_t size = 0xcd0;
    std::uint8_t pad_0[0xb10]; // 0x0
    std::uint8_t _[0x8]; // 0xb10 
    std::uint8_t _[0x8]; // 0xb18 
    std::uint8_t _[0x8]; // 0xb20 
    std::uint8_t _[0x8]; // 0xb28 
    std::uint8_t _[0x8]; // 0xb30 
    std::uint8_t _[0x8]; // 0xb38 
    std::uint8_t _[0x8]; // 0xb40 
    std::uint8_t _[0x8]; // 0xb48 
    std::uint8_t _[0x10]; // 0xb50 
    std::uint8_t _[0x68]; // 0xb60 
    std::uint8_t _[0xc]; // 0xbc8 
    std::uint8_t _[0xc]; // 0xbd4 
    std::uint8_t _[0x8]; // 0xbe0 
    std::uint8_t _[0x90]; // 0xbe8 
    std::uint8_t _[0x4]; // 0xc78 
    std::uint8_t _[0x4]; // 0xc7c 
    std::uint8_t _[0x8]; // 0xc80 
    std::uint8_t _[0x8]; // 0xc88 
    std::uint8_t _[0x8]; // 0xc90 
    std::uint8_t _[0x4]; // 0xc98 
    std::uint8_t _[0x8]; // 0xc9c 
    std::uint8_t _[0x4]; // 0xca4 
    std::uint8_t _[0x4]; // 0xca8 
    std::uint8_t _[0x4]; // 0xcac 
    std::uint8_t _[0x20]; // 0xcb0 
};

struct WeaponPurchaseCount_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x2]; // 0x30 
    std::uint8_t _[0x6]; // 0x32 
};

struct CBasePulseGraphInstance {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x88]; // 0x0
};

struct FilterHealth {
    static constexpr std::size_t size = 0x4f0;
    std::uint8_t pad_0[0x4e0]; // 0x0
    std::uint8_t _[0x4]; // 0x4e0 
    std::uint8_t _[0x4]; // 0x4e4 
    std::uint8_t _[0x8]; // 0x4e8 
};

struct CCSSprite {
    static constexpr std::size_t size = 0x8c0;
    std::uint8_t pad_0[0x8c0]; // 0x0
};

struct CMathColorBlend {
    static constexpr std::size_t size = 0x4d8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b4 
    std::uint8_t _[0x20]; // 0x4b8 
};

struct CShower {
    static constexpr std::size_t size = 0x858;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x8]; // 0x850 
};

struct CPulseCell_Inflow_GraphHook {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t _[0x10]; // 0x80 
};

struct CScriptNavBlocker {
    static constexpr std::size_t size = 0x878;
    std::uint8_t pad_0[0x868]; // 0x0
    std::uint8_t _[0x10]; // 0x868 
};

struct CEntityBlocker {
    static constexpr std::size_t size = 0x850;
    std::uint8_t pad_0[0x850]; // 0x0
};

struct SignatureOutflow_Resume {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CSoundOpvarSetDomeEntity {
    static constexpr std::size_t size = 0x760;
    std::uint8_t pad_0[0x640]; // 0x0
    std::uint8_t _[0x18]; // 0x640 
    std::uint8_t _[0x18]; // 0x658 
    std::uint8_t _[0x18]; // 0x670 
    std::uint8_t _[0x8]; // 0x688 
    std::uint8_t _[0x18]; // 0x690 
    std::uint8_t _[0x18]; // 0x6a8 
    std::uint8_t _[0x18]; // 0x6c0 
    std::uint8_t _[0x18]; // 0x6d8 
    std::uint8_t _[0x4]; // 0x6f0 
    std::uint8_t _[0x4]; // 0x6f4 
    std::uint8_t _[0xc]; // 0x6f8 
    std::uint8_t _[0xc]; // 0x704 
    std::uint8_t _[0x4]; // 0x710 
    std::uint8_t _[0xc]; // 0x714 
    std::uint8_t _[0x4]; // 0x720 
    std::uint8_t _[0x4]; // 0x724 
    std::uint8_t _[0x4]; // 0x728 
    std::uint8_t _[0x4]; // 0x72c 
    std::uint8_t _[0x4]; // 0x730 
    std::uint8_t _[0x4]; // 0x734 
    std::uint8_t _[0x4]; // 0x738 
    std::uint8_t _[0x4]; // 0x73c 
    std::uint8_t _[0x1]; // 0x740 
    std::uint8_t _[0x3]; // 0x741 
    std::uint8_t _[0x4]; // 0x744 
    std::uint8_t _[0x4]; // 0x748 
    std::uint8_t _[0x4]; // 0x74c 
    std::uint8_t _[0x4]; // 0x750 
    std::uint8_t _[0x4]; // 0x754 
    std::uint8_t _[0x4]; // 0x758 
    std::uint8_t _[0x4]; // 0x75c 
};

struct CPulseCell_Outflow_PlayVCDBase {
    static constexpr std::size_t size = 0x138;
    std::uint8_t pad_0[0x138]; // 0x0
};

struct CCSObserverPawn {
    static constexpr std::size_t size = 0xe50;
    std::uint8_t pad_0[0xe50]; // 0x0
};

struct CTriggerActiveWeaponDetect {
    static constexpr std::size_t size = 0x9e8;
    std::uint8_t pad_0[0x9c8]; // 0x0
    std::uint8_t _[0x18]; // 0x9c8 
    std::uint8_t _[0x8]; // 0x9e0 
};

struct CFuncLadderAlias_func_useableladder {
    static constexpr std::size_t size = 0x8e0;
    std::uint8_t pad_0[0x8e0]; // 0x0
};

struct CSpriteOriented {
    static constexpr std::size_t size = 0x8c0;
    std::uint8_t pad_0[0x8c0]; // 0x0
};

struct CPointServerCommand {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct shard_model_desc_t {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x8]; // 0x24 
    std::uint8_t _[0x8]; // 0x2c 
    std::uint8_t _[0xc]; // 0x34 
    std::uint8_t _[0x18]; // 0x40 
    std::uint8_t _[0x18]; // 0x58 
    std::uint8_t _[0x4]; // 0x70 
    std::uint8_t _[0x1]; // 0x74 
    std::uint8_t _[0x3]; // 0x75 
    std::uint8_t _[0x8]; // 0x78 
};

struct CPlayerSprayDecal {
    static constexpr std::size_t size = 0x928;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x4]; // 0x850 
    std::uint8_t _[0x4]; // 0x854 
    std::uint8_t _[0x4]; // 0x858 
    std::uint8_t _[0x4]; // 0x85c 
    std::uint8_t _[0xc]; // 0x860 
    std::uint8_t _[0xc]; // 0x86c 
    std::uint8_t _[0xc]; // 0x878 
    std::uint8_t _[0xc]; // 0x884 
    std::uint8_t _[0x4]; // 0x890 
    std::uint8_t _[0x4]; // 0x894 
    std::uint8_t _[0x4]; // 0x898 
    std::uint8_t _[0x4]; // 0x89c 
    std::uint8_t _[0x4]; // 0x8a0 
    std::uint8_t _[0x1]; // 0x8a4 
    std::uint8_t _[0x83]; // 0x8a5 
};

struct CFuncWater {
    static constexpr std::size_t size = 0x968;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x118]; // 0x850 
};

struct CCSGameModeRules {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x28]; // 0x8 
};

struct CPulseCell_Outflow_PlayVCD__VCDRequirementInfo_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x48]; // 0x8 
};

struct CPulseCell_ApplyDynamicAttributeInt {
    static constexpr std::size_t size = 0xd8;
    std::uint8_t pad_0[0xd8]; // 0x0
};

struct CEconEntity {
    static constexpr std::size_t size = 0xeb0;
    std::uint8_t pad_0[0xa58]; // 0x0
    std::uint8_t _[0x438]; // 0xa58 
    std::uint8_t _[0x4]; // 0xe90 
    std::uint8_t _[0x4]; // 0xe94 
    std::uint8_t _[0x4]; // 0xe98 
    std::uint8_t _[0x4]; // 0xe9c 
    std::uint8_t _[0x4]; // 0xea0 
    std::uint8_t _[0x4]; // 0xea4 
    std::uint8_t _[0x4]; // 0xea8 
    std::uint8_t _[0x4]; // 0xeac 
};

struct CTankTargetChange {
    static constexpr std::size_t size = 0x4c0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x10]; // 0x4a8 
    std::uint8_t _[0x8]; // 0x4b8 
};

struct CCSPlayer_WaterServices {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0x4]; // 0x54 
    std::uint8_t _[0xc]; // 0x58 
    std::uint8_t _[0x1c]; // 0x64 
};

struct CLogicDistanceCheck {
    static constexpr std::size_t size = 0x508;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4bc 
    std::uint8_t _[0x18]; // 0x4c0 
    std::uint8_t _[0x18]; // 0x4d8 
    std::uint8_t _[0x18]; // 0x4f0 
};

struct CEnvCombinedLightProbeVolume {
    static constexpr std::size_t size = 0x680;
    std::uint8_t pad_0[0x5c0]; // 0x0
    std::uint8_t _[0x4]; // 0x5c0 
    std::uint8_t _[0x4]; // 0x5c4 
    std::uint8_t _[0x8]; // 0x5c8 
    std::uint8_t _[0x8]; // 0x5d0 
    std::uint8_t _[0x8]; // 0x5d8 
    std::uint8_t _[0x8]; // 0x5e0 
    std::uint8_t _[0x8]; // 0x5e8 
    std::uint8_t _[0x8]; // 0x5f0 
    std::uint8_t _[0x8]; // 0x5f8 
    std::uint8_t _[0x8]; // 0x600 
    std::uint8_t _[0x8]; // 0x608 
    std::uint8_t _[0xc]; // 0x610 
    std::uint8_t _[0xc]; // 0x61c 
    std::uint8_t _[0x4]; // 0x628 
    std::uint8_t _[0x4]; // 0x62c 
    std::uint8_t _[0x4]; // 0x630 
    std::uint8_t _[0x4]; // 0x634 
    std::uint8_t _[0x4]; // 0x638 
    std::uint8_t _[0x4]; // 0x63c 
    std::uint8_t _[0xc]; // 0x640 
    std::uint8_t _[0x4]; // 0x64c 
    std::uint8_t _[0x4]; // 0x650 
    std::uint8_t _[0x4]; // 0x654 
    std::uint8_t _[0x4]; // 0x658 
    std::uint8_t _[0x4]; // 0x65c 
    std::uint8_t _[0x19]; // 0x660 
    std::uint8_t _[0x7]; // 0x679 
};

struct ViewAngleServerChange_t {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0xc]; // 0x34 
    std::uint8_t _[0x8]; // 0x40 
};

struct CLogicDistanceAutosave {
    static constexpr std::size_t size = 0x4c0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x1]; // 0x4b4 
    std::uint8_t _[0x1]; // 0x4b5 
    std::uint8_t _[0x2]; // 0x4b6 
    std::uint8_t _[0x8]; // 0x4b8 
};

struct CLogicBranch {
    static constexpr std::size_t size = 0x4f8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x18]; // 0x4b0 
    std::uint8_t _[0x18]; // 0x4c8 
    std::uint8_t _[0x18]; // 0x4e0 
};

struct CPulseCell_Outflow_ScriptedSequence {
    static constexpr std::size_t size = 0x198;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x8]; // 0xd8 
    std::uint8_t _[0x4]; // 0xe0 
    std::uint8_t _[0x1]; // 0xe4 
    std::uint8_t _[0x1]; // 0xe5 
    std::uint8_t _[0x2]; // 0xe6 
    std::uint8_t _[0x38]; // 0xe8 
    std::uint8_t _[0x18]; // 0x120 
    std::uint8_t _[0x48]; // 0x138 
    std::uint8_t _[0x18]; // 0x180 
};

struct CFuncTrackChange {
    static constexpr std::size_t size = 0x958;
    std::uint8_t pad_0[0x920]; // 0x0
    std::uint8_t _[0x4]; // 0x920 
    std::uint8_t _[0x4]; // 0x924 
    std::uint8_t _[0x8]; // 0x928 
    std::uint8_t _[0x8]; // 0x930 
    std::uint8_t _[0x8]; // 0x938 
    std::uint8_t _[0x8]; // 0x940 
    std::uint8_t _[0x4]; // 0x948 
    std::uint8_t _[0x4]; // 0x94c 
    std::uint8_t _[0x8]; // 0x950 
};

struct CFuncTrackTrain {
    static constexpr std::size_t size = 0x978;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x4]; // 0x850 
    std::uint8_t _[0x4]; // 0x854 
    std::uint8_t _[0xc]; // 0x858 
    std::uint8_t _[0xc]; // 0x864 
    std::uint8_t _[0x4]; // 0x870 
    std::uint8_t _[0xc]; // 0x874 
    std::uint8_t _[0xc]; // 0x880 
    std::uint8_t _[0xc]; // 0x88c 
    std::uint8_t _[0x4]; // 0x898 
    std::uint8_t _[0x4]; // 0x89c 
    std::uint8_t _[0x4]; // 0x8a0 
    std::uint8_t _[0x4]; // 0x8a4 
    std::uint8_t _[0x4]; // 0x8a8 
    std::uint8_t _[0x4]; // 0x8ac 
    std::uint8_t _[0x4]; // 0x8b0 
    std::uint8_t _[0x4]; // 0x8b4 
    std::uint8_t _[0x8]; // 0x8b8 
    std::uint8_t _[0x8]; // 0x8c0 
    std::uint8_t _[0x8]; // 0x8c8 
    std::uint8_t _[0x8]; // 0x8d0 
    std::uint8_t _[0x8]; // 0x8d8 
    std::uint8_t _[0x4]; // 0x8e0 
    std::uint8_t _[0x4]; // 0x8e4 
    std::uint8_t _[0x4]; // 0x8e8 
    std::uint8_t _[0x4]; // 0x8ec 
    std::uint8_t _[0x4]; // 0x8f0 
    std::uint8_t _[0x4]; // 0x8f4 
    std::uint8_t _[0x18]; // 0x8f8 
    std::uint8_t _[0x18]; // 0x910 
    std::uint8_t _[0x18]; // 0x928 
    std::uint8_t _[0x18]; // 0x940 
    std::uint8_t _[0x4]; // 0x958 
    std::uint8_t _[0x4]; // 0x95c 
    std::uint8_t _[0x4]; // 0x960 
    std::uint8_t _[0x4]; // 0x964 
    std::uint8_t _[0x4]; // 0x968 
    std::uint8_t _[0x4]; // 0x96c 
    std::uint8_t _[0x8]; // 0x970 
};

struct CEnvInstructorHint {
    static constexpr std::size_t size = 0x518;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x8]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4c0 
    std::uint8_t _[0x4]; // 0x4c4 
    std::uint8_t _[0x8]; // 0x4c8 
    std::uint8_t _[0x8]; // 0x4d0 
    std::uint8_t _[0x8]; // 0x4d8 
    std::uint8_t _[0x8]; // 0x4e0 
    std::uint8_t _[0x4]; // 0x4e8 
    std::uint8_t _[0x4]; // 0x4ec 
    std::uint8_t _[0x4]; // 0x4f0 
    std::uint8_t _[0x1]; // 0x4f4 
    std::uint8_t _[0x1]; // 0x4f5 
    std::uint8_t _[0x1]; // 0x4f6 
    std::uint8_t _[0x1]; // 0x4f7 
    std::uint8_t _[0x1]; // 0x4f8 
    std::uint8_t _[0x3]; // 0x4f9 
    std::uint8_t _[0x4]; // 0x4fc 
    std::uint8_t _[0x8]; // 0x500 
    std::uint8_t _[0x8]; // 0x508 
    std::uint8_t _[0x1]; // 0x510 
    std::uint8_t _[0x1]; // 0x511 
    std::uint8_t _[0x6]; // 0x512 
};

struct CEnvWind {
    static constexpr std::size_t size = 0x5d8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x130]; // 0x4a8 
};

struct CSoundEventPathCornerEntity {
    static constexpr std::size_t size = 0x620;
    std::uint8_t pad_0[0x5a0]; // 0x0
    std::uint8_t _[0x20]; // 0x5a0 
    std::uint8_t _[0x60]; // 0x5c0 
};

struct CCSPlayerBase_CameraServices {
    static constexpr std::size_t size = 0x1b0;
    std::uint8_t pad_0[0x178]; // 0x0
    std::uint8_t _[0x4]; // 0x178 
    std::uint8_t _[0x4]; // 0x17c 
    std::uint8_t _[0x4]; // 0x180 
    std::uint8_t _[0x4]; // 0x184 
    std::uint8_t _[0x8]; // 0x188 
    std::uint8_t _[0x18]; // 0x190 
    std::uint8_t _[0x8]; // 0x1a8 
};

struct CPulseCell_ApplyAnimGraphParam__CursorState_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
};

struct CPulseCell_Inflow_BaseEntrypoint {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x30]; // 0x50 
};

struct CDynamicNavConnectionsVolume {
    static constexpr std::size_t size = 0xa18;
    std::uint8_t pad_0[0x9e0]; // 0x0
    std::uint8_t _[0x8]; // 0x9e0 
    std::uint8_t _[0x18]; // 0x9e8 
    std::uint8_t _[0x8]; // 0xa00 
    std::uint8_t _[0x4]; // 0xa08 
    std::uint8_t _[0x4]; // 0xa0c 
    std::uint8_t _[0x4]; // 0xa10 
    std::uint8_t _[0x4]; // 0xa14 
};

struct CConstraintAnchor {
    static constexpr std::size_t size = 0xa50;
    std::uint8_t pad_0[0xa40]; // 0x0
    std::uint8_t _[0x10]; // 0xa40 
};

struct CPulseCell_WaitForCursorsWithTagBase {
    static constexpr std::size_t size = 0x128;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x8]; // 0xd8 
    std::uint8_t _[0x48]; // 0xe0 
};

struct CCSPlayerPawn {
    static constexpr std::size_t size = 0x15d0;
    std::uint8_t pad_0[0xe30]; // 0x0
    std::uint8_t _[0x8]; // 0xe30 
    std::uint8_t _[0x8]; // 0xe38 
    std::uint8_t _[0x8]; // 0xe40 
    std::uint8_t _[0x8]; // 0xe48 
    std::uint8_t _[0x8]; // 0xe50 
    std::uint8_t _[0x8]; // 0xe58 
    std::uint8_t _[0x8]; // 0xe60 
    std::uint8_t _[0x2]; // 0xe68 
    std::uint8_t _[0x6]; // 0xe6a 
    std::uint8_t _[0x8]; // 0xe70 
    std::uint8_t _[0xf8]; // 0xe78 
    std::uint8_t _[0x1]; // 0xf70 
    std::uint8_t _[0x7]; // 0xf71 
    std::uint8_t _[0x18]; // 0xf78 
    std::uint8_t _[0x1]; // 0xf90 
    std::uint8_t _[0x1]; // 0xf91 
    std::uint8_t _[0x1]; // 0xf92 
    std::uint8_t _[0x1]; // 0xf93 
    std::uint8_t _[0x4]; // 0xf94 
    std::uint8_t _[0x4]; // 0xf98 
    std::uint8_t _[0x1]; // 0xf9c 
    std::uint8_t _[0x3]; // 0xf9d 
    std::uint8_t _[0x4]; // 0xfa0 
    std::uint8_t _[0x4]; // 0xfa4 
    std::uint8_t _[0x4]; // 0xfa8 
    std::uint8_t _[0x4]; // 0xfac 
    std::uint8_t _[0x38]; // 0xfb0 
    std::uint8_t _[0x4]; // 0xfe8 
    std::uint8_t _[0x4]; // 0xfec 
    std::uint8_t _[0x8]; // 0xff0 
    std::uint8_t _[0x4]; // 0xff8 
    std::uint8_t _[0x4]; // 0xffc 
    std::uint8_t _[0x4]; // 0x1000 
    std::uint8_t _[0x4]; // 0x1004 
    std::uint8_t _[0xc]; // 0x1008 
    std::uint8_t _[0x40]; // 0x1014 
    std::uint8_t _[0x4]; // 0x1054 
    std::uint8_t _[0x10]; // 0x1058 
    std::uint8_t _[0x3e8]; // 0x1068 
    std::uint8_t _[0x4]; // 0x1450 
    std::uint8_t _[0xc]; // 0x1454 
    std::uint8_t _[0x4]; // 0x1460 
    std::uint8_t _[0x4]; // 0x1464 
    std::uint8_t _[0x4]; // 0x1468 
    std::uint8_t _[0x4]; // 0x146c 
    std::uint8_t _[0x4]; // 0x1470 
    std::uint8_t _[0x4]; // 0x1474 
    std::uint8_t _[0x4]; // 0x1478 
    std::uint8_t _[0x4]; // 0x147c 
    std::uint8_t _[0x4]; // 0x1480 
    std::uint8_t _[0x4]; // 0x1484 
    std::uint8_t _[0x4]; // 0x1488 
    std::uint8_t _[0x4]; // 0x148c 
    std::uint8_t _[0x4]; // 0x1490 
    std::uint8_t _[0x4]; // 0x1494 
    std::uint8_t _[0x8]; // 0x1498 
    std::uint8_t _[0x18]; // 0x14a0 
    std::uint8_t _[0x4]; // 0x14b8 
    std::uint8_t _[0x1]; // 0x14bc 
    std::uint8_t _[0x1]; // 0x14bd 
    std::uint8_t _[0x1]; // 0x14be 
    std::uint8_t _[0x1]; // 0x14bf 
    std::uint8_t _[0x4]; // 0x14c0 
    std::uint8_t _[0x4]; // 0x14c4 
    std::uint8_t _[0x4]; // 0x14c8 
    std::uint8_t _[0x4]; // 0x14cc 
    std::uint8_t _[0x4]; // 0x14d0 
    std::uint8_t _[0x1]; // 0x14d4 
    std::uint8_t _[0x3]; // 0x14d5 
    std::uint8_t _[0x4]; // 0x14d8 
    std::uint8_t _[0x4]; // 0x14dc 
    std::uint8_t _[0x4]; // 0x14e0 
    std::uint8_t _[0xc]; // 0x14e4 
    std::uint8_t _[0x4]; // 0x14f0 
    std::uint8_t _[0x4]; // 0x14f4 
    std::uint8_t _[0x4]; // 0x14f8 
    std::uint8_t _[0x4]; // 0x14fc 
    std::uint8_t _[0x8]; // 0x1500 
    std::uint8_t _[0x4]; // 0x1508 
    std::uint8_t _[0x4]; // 0x150c 
    std::uint8_t _[0x4]; // 0x1510 
    std::uint8_t _[0x4]; // 0x1514 
    std::uint8_t _[0x2]; // 0x1518 
    std::uint8_t _[0x2]; // 0x151a 
    std::uint8_t _[0x4]; // 0x151c 
    std::uint8_t _[0x4]; // 0x1520 
    std::uint8_t _[0xc]; // 0x1524 
    std::uint8_t _[0x4]; // 0x1530 
    std::uint8_t _[0x4]; // 0x1534 
    std::uint8_t _[0x4]; // 0x1538 
    std::uint8_t _[0xc]; // 0x153c 
    std::uint8_t _[0x14]; // 0x1548 
    std::uint8_t _[0x4]; // 0x155c 
    std::uint8_t _[0x4]; // 0x1560 
    std::uint8_t _[0x4]; // 0x1564 
    std::uint8_t _[0xc]; // 0x1568 
    std::uint8_t _[0xc]; // 0x1574 
    std::uint8_t _[0xc]; // 0x1580 
    std::uint8_t _[0x14]; // 0x158c 
    std::uint8_t _[0x1]; // 0x15a0 
    std::uint8_t _[0x3]; // 0x15a1 
    std::uint8_t _[0x4]; // 0x15a4 
    std::uint8_t _[0x4]; // 0x15a8 
    std::uint8_t _[0x4]; // 0x15ac 
    std::uint8_t _[0x4]; // 0x15b0 
    std::uint8_t _[0x1c]; // 0x15b4 
};

struct CEnvLightProbeVolume {
    static constexpr std::size_t size = 0x5c8;
    std::uint8_t pad_0[0x540]; // 0x0
    std::uint8_t _[0x8]; // 0x540 
    std::uint8_t _[0x8]; // 0x548 
    std::uint8_t _[0x8]; // 0x550 
    std::uint8_t _[0x8]; // 0x558 
    std::uint8_t _[0x8]; // 0x560 
    std::uint8_t _[0x8]; // 0x568 
    std::uint8_t _[0x8]; // 0x570 
    std::uint8_t _[0xc]; // 0x578 
    std::uint8_t _[0xc]; // 0x584 
    std::uint8_t _[0x4]; // 0x590 
    std::uint8_t _[0x4]; // 0x594 
    std::uint8_t _[0x4]; // 0x598 
    std::uint8_t _[0x4]; // 0x59c 
    std::uint8_t _[0x4]; // 0x5a0 
    std::uint8_t _[0x4]; // 0x5a4 
    std::uint8_t _[0x4]; // 0x5a8 
    std::uint8_t _[0x4]; // 0x5ac 
    std::uint8_t _[0x4]; // 0x5b0 
    std::uint8_t _[0xd]; // 0x5b4 
    std::uint8_t _[0x7]; // 0x5c1 
};

struct SpawnPoint {
    static constexpr std::size_t size = 0x4b8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x8]; // 0x4b0 
};

struct CGameSceneNode {
    static constexpr std::size_t size = 0x110;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x20]; // 0x10 
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x8]; // 0x38 
    std::uint8_t _[0x8]; // 0x40 
    std::uint8_t _[0x28]; // 0x48 
    std::uint8_t _[0x10]; // 0x70 
    std::uint8_t _[0x38]; // 0x80 
    std::uint8_t _[0xc]; // 0xb8 
    std::uint8_t _[0x4]; // 0xc4 
    std::uint8_t _[0xc]; // 0xc8 
    std::uint8_t _[0xc]; // 0xd4 
    std::uint8_t _[0x4]; // 0xe0 
    std::uint8_t _[0x2]; // 0xe4 
    std::uint8_t _[0x1]; // 0xe6 
    std::uint8_t _[0x1]; // 0xe7 
    std::uint8_t _[0x3]; // 0xe8 
    std::uint8_t _[0x1]; // 0xeb 
    std::uint8_t _[0x1]; // 0xec 
    std::uint8_t _[0x3]; // 0xed 
    std::uint8_t _[0x14]; // 0xf0 
    std::uint8_t _[0x4]; // 0x104 
    std::uint8_t _[0x8]; // 0x108 
};

struct CWeaponM249 {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x12a0]; // 0x0
};

struct CRopeKeyframeAlias_move_rope {
    static constexpr std::size_t size = 0x8a8;
    std::uint8_t pad_0[0x8a8]; // 0x0
};

struct CPlayer_ObserverServices {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0x4]; // 0x54 
};

struct CCashStack {
    static constexpr std::size_t size = 0x858;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x8]; // 0x850 
};

struct CLogicScript {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CAttributeManager__cached_attribute_float_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
};

struct CPulseGraphInstance_ServerEntity {
    static constexpr std::size_t size = 0x140;
    std::uint8_t pad_0[0x118]; // 0x0
    std::uint8_t _[0x4]; // 0x118 
    std::uint8_t _[0x4]; // 0x11c 
    std::uint8_t _[0x8]; // 0x120 
    std::uint8_t _[0x8]; // 0x128 
    std::uint8_t _[0x8]; // 0x130 
    std::uint8_t _[0x8]; // 0x138 
};

struct CSceneEntityAlias_logic_choreographed_scene {
    static constexpr std::size_t size = 0x800;
    std::uint8_t pad_0[0x800]; // 0x0
};

struct CRagdollManager {
    static constexpr std::size_t size = 0x4b8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x1]; // 0x4b0 
    std::uint8_t _[0x7]; // 0x4b1 
};

struct CSoundOpvarSetBoxEntity {
    static constexpr std::size_t size = 0x6a8;
    std::uint8_t pad_0[0x640]; // 0x0
    std::uint8_t _[0xc]; // 0x640 
    std::uint8_t _[0xc]; // 0x64c 
    std::uint8_t _[0xc]; // 0x658 
    std::uint8_t _[0xc]; // 0x664 
    std::uint8_t _[0x4]; // 0x670 
    std::uint8_t _[0xc]; // 0x674 
    std::uint8_t _[0xc]; // 0x680 
    std::uint8_t _[0xc]; // 0x68c 
    std::uint8_t _[0x10]; // 0x698 
};

struct CPostProcessingVolume {
    static constexpr std::size_t size = 0xa08;
    std::uint8_t pad_0[0x9d8]; // 0x0
    std::uint8_t _[0x8]; // 0x9d8 
    std::uint8_t _[0x4]; // 0x9e0 
    std::uint8_t _[0x4]; // 0x9e4 
    std::uint8_t _[0x4]; // 0x9e8 
    std::uint8_t _[0x4]; // 0x9ec 
    std::uint8_t _[0x4]; // 0x9f0 
    std::uint8_t _[0x4]; // 0x9f4 
    std::uint8_t _[0x4]; // 0x9f8 
    std::uint8_t _[0x4]; // 0x9fc 
    std::uint8_t _[0x4]; // 0xa00 
    std::uint8_t _[0x1]; // 0xa04 
    std::uint8_t _[0x3]; // 0xa05 
};

struct CPointProximitySensor {
    static constexpr std::size_t size = 0x4d0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x20]; // 0x4b0 
};

struct CPulse_InvokeBinding {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t _[0x30]; // 0x0 
    std::uint8_t _[0x10]; // 0x30 
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x4]; // 0x44 
    std::uint8_t _[0x68]; // 0x48 
};

struct CTriggerLook {
    static constexpr std::size_t size = 0xa48;
    std::uint8_t pad_0[0x9e0]; // 0x0
    std::uint8_t _[0x4]; // 0x9e0 
    std::uint8_t _[0x4]; // 0x9e4 
    std::uint8_t _[0x4]; // 0x9e8 
    std::uint8_t _[0x4]; // 0x9ec 
    std::uint8_t _[0x4]; // 0x9f0 
    std::uint8_t _[0x4]; // 0x9f4 
    std::uint8_t _[0x1]; // 0x9f8 
    std::uint8_t _[0x1]; // 0x9f9 
    std::uint8_t _[0x1]; // 0x9fa 
    std::uint8_t _[0x1]; // 0x9fb 
    std::uint8_t _[0x1]; // 0x9fc 
    std::uint8_t _[0x3]; // 0x9fd 
    std::uint8_t _[0x18]; // 0xa00 
    std::uint8_t _[0x18]; // 0xa18 
    std::uint8_t _[0x18]; // 0xa30 
};

struct CPulseCell_Outflow_PlayVCD {
    static constexpr std::size_t size = 0x1e8;
    std::uint8_t pad_0[0x138]; // 0x0
    std::uint8_t _[0x8]; // 0x138 
    std::uint8_t _[0x48]; // 0x140 
    std::uint8_t _[0x48]; // 0x188 
    std::uint8_t _[0x18]; // 0x1d0 
};

struct CMultiplayRules {
    static constexpr std::size_t size = 0xd0;
    std::uint8_t pad_0[0xd0]; // 0x0
};

struct CMolotovGrenade {
    static constexpr std::size_t size = 0x12c0;
    std::uint8_t pad_0[0x12c0]; // 0x0
};

struct CPhysTorque {
    static constexpr std::size_t size = 0x518;
    std::uint8_t pad_0[0x508]; // 0x0
    std::uint8_t _[0x10]; // 0x508 
};

struct CMultiSource {
    static constexpr std::size_t size = 0x5d0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x80]; // 0x4a8 
    std::uint8_t _[0x80]; // 0x528 
    std::uint8_t _[0x18]; // 0x5a8 
    std::uint8_t _[0x8]; // 0x5c0 
    std::uint8_t _[0x8]; // 0x5c8 
};

struct CBaseCSGrenade {
    static constexpr std::size_t size = 0x12c0;
    std::uint8_t pad_0[0x1280]; // 0x0
    std::uint8_t _[0x1]; // 0x1280 
    std::uint8_t _[0x1]; // 0x1281 
    std::uint8_t _[0x1]; // 0x1282 
    std::uint8_t _[0x1]; // 0x1283 
    std::uint8_t _[0x4]; // 0x1284 
    std::uint8_t _[0x4]; // 0x1288 
    std::uint8_t _[0x4]; // 0x128c 
    std::uint8_t _[0x4]; // 0x1290 
    std::uint8_t _[0x4]; // 0x1294 
    std::uint8_t _[0x4]; // 0x1298 
    std::uint8_t _[0x4]; // 0x129c 
    std::uint8_t _[0x4]; // 0x12a0 
    std::uint8_t _[0x1c]; // 0x12a4 
};

struct CLogicAuto {
    static constexpr std::size_t size = 0x5a0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x18]; // 0x4a8 
    std::uint8_t _[0x18]; // 0x4c0 
    std::uint8_t _[0x18]; // 0x4d8 
    std::uint8_t _[0x18]; // 0x4f0 
    std::uint8_t _[0x18]; // 0x508 
    std::uint8_t _[0x18]; // 0x520 
    std::uint8_t _[0x18]; // 0x538 
    std::uint8_t _[0x18]; // 0x550 
    std::uint8_t _[0x18]; // 0x568 
    std::uint8_t _[0x18]; // 0x580 
    std::uint8_t _[0x8]; // 0x598 
};

struct CPhysicsWire {
    static constexpr std::size_t size = 0x4b0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
};

struct CFuncIllusionary {
    static constexpr std::size_t size = 0x850;
    std::uint8_t pad_0[0x850]; // 0x0
};

struct CInfoDynamicShadowHint {
    static constexpr std::size_t size = 0x4c0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b4 
    std::uint8_t _[0x8]; // 0x4b8 
};

struct CMarkupVolume {
    static constexpr std::size_t size = 0x858;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x8]; // 0x850 
};

struct CGenericLogicPlayerProxy {
    static constexpr std::size_t size = 0x518;
    std::uint8_t pad_0[0x518]; // 0x0
};

struct CPathNode {
    static constexpr std::size_t size = 0x500;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0xc]; // 0x4a8 
    std::uint8_t _[0xc]; // 0x4b4 
    std::uint8_t _[0x8]; // 0x4c0 
    std::uint8_t _[0x8]; // 0x4c8 
    std::uint8_t _[0x20]; // 0x4d0 
    std::uint8_t _[0x10]; // 0x4f0 
};

struct CCSGO_TeamSelectCounterTerroristPosition {
    static constexpr std::size_t size = 0x1468;
    std::uint8_t pad_0[0x1468]; // 0x0
};

struct CTriggerRemove {
    static constexpr std::size_t size = 0x9e0;
    std::uint8_t pad_0[0x9c8]; // 0x0
    std::uint8_t _[0x18]; // 0x9c8 
};

struct CLogicGameEventListener {
    static constexpr std::size_t size = 0x4e8;
    std::uint8_t pad_0[0x4b8]; // 0x0
    std::uint8_t _[0x18]; // 0x4b8 
    std::uint8_t _[0x8]; // 0x4d0 
    std::uint8_t _[0x8]; // 0x4d8 
    std::uint8_t _[0x1]; // 0x4e0 
    std::uint8_t _[0x7]; // 0x4e1 
};

struct CServerOnlyModelEntity {
    static constexpr std::size_t size = 0x850;
    std::uint8_t pad_0[0x850]; // 0x0
};

struct CPulseCell_IntervalTimer {
    static constexpr std::size_t size = 0x168;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x48]; // 0xd8 
    std::uint8_t _[0x48]; // 0x120 
};

struct CMarkupVolumeTagged_Nav {
    static constexpr std::size_t size = 0x898;
    std::uint8_t pad_0[0x890]; // 0x0
    std::uint8_t _[0x8]; // 0x890 
};

struct CInfoPlayerTerrorist {
    static constexpr std::size_t size = 0x4b8;
    std::uint8_t pad_0[0x4b8]; // 0x0
};

struct CLogicAutosave {
    static constexpr std::size_t size = 0x4b8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x8]; // 0x4b0 
};

struct CCSGO_TeamIntroTerroristPosition {
    static constexpr std::size_t size = 0x1468;
    std::uint8_t pad_0[0x1468]; // 0x0
};

struct CSingleplayRules {
    static constexpr std::size_t size = 0xd8;
    std::uint8_t pad_0[0xd0]; // 0x0
    std::uint8_t _[0x8]; // 0xd0 
};

struct CEnvWindShared {
    static constexpr std::size_t size = 0x130;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x2]; // 0x12 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x2]; // 0x18 
    std::uint8_t _[0x2]; // 0x1a 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x2]; // 0x28 
    std::uint8_t _[0x2]; // 0x2a 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x10]; // 0x30 
    std::uint8_t _[0x18]; // 0x40 
    std::uint8_t _[0x18]; // 0x58 
    std::uint8_t _[0xc0]; // 0x70 
};

struct CPointPrefab {
    static constexpr std::size_t size = 0x530;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x8]; // 0x4b8 
    std::uint8_t _[0x1]; // 0x4c0 
    std::uint8_t _[0x3]; // 0x4c1 
    std::uint8_t _[0x4]; // 0x4c4 
    std::uint8_t _[0x68]; // 0x4c8 
};

struct CPulseCell_BaseLerp {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x48]; // 0xd8 
};

struct CEnvInstructorVRHint {
    static constexpr std::size_t size = 0x4e8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x8]; // 0x4b8 
    std::uint8_t _[0x8]; // 0x4c0 
    std::uint8_t _[0x8]; // 0x4c8 
    std::uint8_t _[0x8]; // 0x4d0 
    std::uint8_t _[0x8]; // 0x4d8 
    std::uint8_t _[0x4]; // 0x4e0 
    std::uint8_t _[0x4]; // 0x4e4 
};

struct CCSGameRulesProxy {
    static constexpr std::size_t size = 0x4b0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
};

struct CPrecipitation {
    static constexpr std::size_t size = 0x9c8;
    std::uint8_t pad_0[0x9c8]; // 0x0
};

struct CCommentaryViewPosition {
    static constexpr std::size_t size = 0x8c0;
    std::uint8_t pad_0[0x8c0]; // 0x0
};

struct CEnvGlobal {
    static constexpr std::size_t size = 0x4e0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x20]; // 0x4a8 
    std::uint8_t _[0x8]; // 0x4c8 
    std::uint8_t _[0x4]; // 0x4d0 
    std::uint8_t _[0x4]; // 0x4d4 
    std::uint8_t _[0x8]; // 0x4d8 
};

struct CLogicNPCCounterOBB {
    static constexpr std::size_t size = 0x758;
    std::uint8_t pad_0[0x758]; // 0x0
};

struct CPlatTrigger {
    static constexpr std::size_t size = 0x858;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x8]; // 0x850 
};

struct CSceneEntity {
    static constexpr std::size_t size = 0x800;
    std::uint8_t pad_0[0x4b0]; // 0x0
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x8]; // 0x4b8 
    std::uint8_t _[0x8]; // 0x4c0 
    std::uint8_t _[0x8]; // 0x4c8 
    std::uint8_t _[0x8]; // 0x4d0 
    std::uint8_t _[0x8]; // 0x4d8 
    std::uint8_t _[0x8]; // 0x4e0 
    std::uint8_t _[0x8]; // 0x4e8 
    std::uint8_t _[0x8]; // 0x4f0 
    std::uint8_t _[0x4]; // 0x4f8 
    std::uint8_t _[0x4]; // 0x4fc 
    std::uint8_t _[0x4]; // 0x500 
    std::uint8_t _[0x4]; // 0x504 
    std::uint8_t _[0x4]; // 0x508 
    std::uint8_t _[0x4]; // 0x50c 
    std::uint8_t _[0x4]; // 0x510 
    std::uint8_t _[0x4]; // 0x514 
    std::uint8_t _[0x8]; // 0x518 
    std::uint8_t _[0x8]; // 0x520 
    std::uint8_t _[0x1]; // 0x528 
    std::uint8_t _[0x1]; // 0x529 
    std::uint8_t _[0x1]; // 0x52a 
    std::uint8_t _[0x1]; // 0x52b 
    std::uint8_t _[0x4]; // 0x52c 
    std::uint8_t _[0x4]; // 0x530 
    std::uint8_t _[0x4]; // 0x534 
    std::uint8_t _[0x1]; // 0x538 
    std::uint8_t _[0x3]; // 0x539 
    std::uint8_t _[0x4]; // 0x53c 
    std::uint8_t _[0x4]; // 0x540 
    std::uint8_t _[0x4]; // 0x544 
    std::uint8_t _[0x4]; // 0x548 
    std::uint8_t _[0x4]; // 0x54c 
    std::uint8_t _[0x4]; // 0x550 
    std::uint8_t _[0x1]; // 0x554 
    std::uint8_t _[0x1]; // 0x555 
    std::uint8_t _[0x1]; // 0x556 
    std::uint8_t _[0x1]; // 0x557 
    std::uint8_t _[0x1]; // 0x558 
    std::uint8_t _[0x1]; // 0x559 
    std::uint8_t _[0x6]; // 0x55a 
    std::uint8_t _[0x18]; // 0x560 
    std::uint8_t _[0x48]; // 0x578 
    std::uint8_t _[0x8]; // 0x5c0 
    std::uint8_t _[0x18]; // 0x5c8 
    std::uint8_t _[0x18]; // 0x5e0 
    std::uint8_t _[0x18]; // 0x5f8 
    std::uint8_t _[0x18]; // 0x610 
    std::uint8_t _[0x18]; // 0x628 
    std::uint8_t _[0x90]; // 0x640 
    std::uint8_t _[0x28]; // 0x6d0 
    std::uint8_t _[0x28]; // 0x6f8 
    std::uint8_t _[0x28]; // 0x720 
    std::uint8_t _[0x28]; // 0x748 
    std::uint8_t _[0x18]; // 0x770 
    std::uint8_t _[0x4]; // 0x788 
    std::uint8_t _[0x4]; // 0x78c 
    std::uint8_t _[0x8]; // 0x790 
    std::uint8_t _[0x8]; // 0x798 
    std::uint8_t _[0x1]; // 0x7a0 
    std::uint8_t _[0x1]; // 0x7a1 
    std::uint8_t _[0x1]; // 0x7a2 
    std::uint8_t _[0x1]; // 0x7a3 
    std::uint8_t _[0x4]; // 0x7a4 
    std::uint8_t _[0x18]; // 0x7a8 
    std::uint8_t _[0x18]; // 0x7c0 
    std::uint8_t _[0x8]; // 0x7d8 
    std::uint8_t _[0x8]; // 0x7e0 
    std::uint8_t _[0x4]; // 0x7e8 
    std::uint8_t _[0x4]; // 0x7ec 
    std::uint8_t _[0x4]; // 0x7f0 
    std::uint8_t _[0xc]; // 0x7f4 
};

struct CChoreoInfoTarget {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CTonemapController2 {
    static constexpr std::size_t size = 0x4c0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b4 
    std::uint8_t _[0x8]; // 0x4b8 
};

struct CMapSharedEnvironment {
    static constexpr std::size_t size = 0x4b8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x10]; // 0x4a8 
};

struct CNetworkedSequenceOperation {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x8]; // 0x14 
    std::uint8_t _[0x1]; // 0x1c 
    std::uint8_t _[0x3]; // 0x1d 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
};

struct CPhysMagnet {
    static constexpr std::size_t size = 0xab0;
    std::uint8_t pad_0[0xa40]; // 0x0
    std::uint8_t _[0x18]; // 0xa40 
    std::uint8_t _[0x18]; // 0xa58 
    std::uint8_t _[0x4]; // 0xa70 
    std::uint8_t _[0x4]; // 0xa74 
    std::uint8_t _[0x8]; // 0xa78 
    std::uint8_t _[0x18]; // 0xa80 
    std::uint8_t _[0x1]; // 0xa98 
    std::uint8_t _[0x3]; // 0xa99 
    std::uint8_t _[0x4]; // 0xa9c 
    std::uint8_t _[0x4]; // 0xaa0 
    std::uint8_t _[0x4]; // 0xaa4 
    std::uint8_t _[0x8]; // 0xaa8 
};

struct CCSCustomHudLayout {
    static constexpr std::size_t size = 0x818;
    std::uint8_t pad_0[0x4b8]; // 0x0
    std::uint8_t _[0x8]; // 0x4b8 
    std::uint8_t _[0x8]; // 0x4c0 
    std::uint8_t _[0x68]; // 0x4c8 
    std::uint8_t _[0x198]; // 0x530 
    std::uint8_t _[0x18]; // 0x6c8 
    std::uint8_t _[0x18]; // 0x6e0 
    std::uint8_t _[0x120]; // 0x6f8 
};

struct CEntityInstance {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x8]; // 0x28 
};

struct CGameGibManager {
    static constexpr std::size_t size = 0x4d0;
    std::uint8_t pad_0[0x4c0]; // 0x0
    std::uint8_t _[0x4]; // 0x4c0 
    std::uint8_t _[0x4]; // 0x4c4 
    std::uint8_t _[0x4]; // 0x4c8 
    std::uint8_t _[0x4]; // 0x4cc 
};

struct CHandleDummy {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CFuncWallToggle {
    static constexpr std::size_t size = 0x858;
    std::uint8_t pad_0[0x858]; // 0x0
};

struct CCSPlayer_BulletServices {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x28]; // 0x48 
};

struct CSkyCamera {
    static constexpr std::size_t size = 0x548;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x90]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x538 
    std::uint8_t _[0x4]; // 0x53c 
    std::uint8_t _[0x8]; // 0x540 
};

struct CCSGO_EndOfMatchLineupEnd {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CPlayer_AutoaimServices {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CItemDefuserAlias_item_defuser {
    static constexpr std::size_t size = 0xb00;
    std::uint8_t pad_0[0xb00]; // 0x0
};

struct CPathCornerCrash {
    static constexpr std::size_t size = 0x4e0;
    std::uint8_t pad_0[0x4e0]; // 0x0
};

struct CPhysPulley {
    static constexpr std::size_t size = 0x538;
    std::uint8_t pad_0[0x508]; // 0x0
    std::uint8_t _[0xc]; // 0x508 
    std::uint8_t _[0x18]; // 0x514 
    std::uint8_t _[0x4]; // 0x52c 
    std::uint8_t _[0x8]; // 0x530 
};

struct CCSPetPlacement {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CWeaponMP5SD {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x12a0]; // 0x0
};

struct CWeaponBaseItem {
    static constexpr std::size_t size = 0x1290;
    std::uint8_t pad_0[0x1280]; // 0x0
    std::uint8_t _[0x1]; // 0x1280 
    std::uint8_t _[0xf]; // 0x1281 
};

struct CCommentaryAuto {
    static constexpr std::size_t size = 0x4f0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x18]; // 0x4a8 
    std::uint8_t _[0x18]; // 0x4c0 
    std::uint8_t _[0x18]; // 0x4d8 
};

struct CPulseCell_Outflow_ListenForEntityOutput__CursorState_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct ActiveModelConfig_t {
    static constexpr std::size_t size = 0xa0;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x8]; // 0x38 
    std::uint8_t _[0x18]; // 0x40 
    std::uint8_t _[0x18]; // 0x58 
    std::uint8_t _[0x10]; // 0x70 
    std::uint8_t _[0x20]; // 0x80 
};

struct CWeaponUSPSilencer {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x12a0]; // 0x0
};

struct CSoundStackSave {
    static constexpr std::size_t size = 0x4b0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
};

struct CPulseCell_Value_Curve {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x40]; // 0x48 
};

struct CWeaponMag7 {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x12a0]; // 0x0
};

struct CLogicMeasureMovement {
    static constexpr std::size_t size = 0x4d8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x8]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4c0 
    std::uint8_t _[0x4]; // 0x4c4 
    std::uint8_t _[0x4]; // 0x4c8 
    std::uint8_t _[0x4]; // 0x4cc 
    std::uint8_t _[0x4]; // 0x4d0 
    std::uint8_t _[0x4]; // 0x4d4 
};

struct CLogicActivityEvent {
    static constexpr std::size_t size = 0x4c0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x8]; // 0x4b8 
};

struct CC4 {
    static constexpr std::size_t size = 0x1300;
    std::uint8_t pad_0[0x12b0]; // 0x0
    std::uint8_t _[0xc]; // 0x12b0 
    std::uint8_t _[0xc]; // 0x12bc 
    std::uint8_t _[0x1]; // 0x12c8 
    std::uint8_t _[0x3]; // 0x12c9 
    std::uint8_t _[0x4]; // 0x12cc 
    std::uint8_t _[0x1]; // 0x12d0 
    std::uint8_t _[0x7]; // 0x12d1 
    std::uint8_t _[0x18]; // 0x12d8 
    std::uint8_t _[0x4]; // 0x12f0 
    std::uint8_t _[0x7]; // 0x12f4 
    std::uint8_t _[0x5]; // 0x12fb 
};

struct CHostageCarriableProp {
    static constexpr std::size_t size = 0xa40;
    std::uint8_t pad_0[0xa40]; // 0x0
};

struct CDynamicPropAlias_cable_dynamic {
    static constexpr std::size_t size = 0xc90;
    std::uint8_t pad_0[0xc90]; // 0x0
};

struct CCSObserver_CameraServices {
    static constexpr std::size_t size = 0x1b0;
    std::uint8_t pad_0[0x1b0]; // 0x0
};

struct CEnvDetailController {
    static constexpr std::size_t size = 0x4b0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
};

struct CCSPlayerPawnBase {
    static constexpr std::size_t size = 0xe20;
    std::uint8_t pad_0[0xce0]; // 0x0
    std::uint8_t _[0x50]; // 0xce0 
    std::uint8_t _[0x8]; // 0xd30 
    std::uint8_t _[0x4]; // 0xd38 
    std::uint8_t _[0x4]; // 0xd3c 
    std::uint8_t _[0xb0]; // 0xd40 
    std::uint8_t _[0x1]; // 0xdf0 
    std::uint8_t _[0x3]; // 0xdf1 
    std::uint8_t _[0x8]; // 0xdf4 
    std::uint8_t _[0x4]; // 0xdfc 
    std::uint8_t _[0x4]; // 0xe00 
    std::uint8_t _[0x4]; // 0xe04 
    std::uint8_t _[0x4]; // 0xe08 
    std::uint8_t _[0x4]; // 0xe0c 
    std::uint8_t _[0x4]; // 0xe10 
    std::uint8_t _[0xc]; // 0xe14 
};

struct CEnvSoundscapeProxy {
    static constexpr std::size_t size = 0x540;
    std::uint8_t pad_0[0x538]; // 0x0
    std::uint8_t _[0x8]; // 0x538 
};

struct CPulseCell_Inflow_EventHandler {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t _[0x10]; // 0x80 
};

struct CCSPointScriptEntity {
    static constexpr std::size_t size = 0x670;
    std::uint8_t pad_0[0x670]; // 0x0
};

struct CPulseCell_BaseFlow {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CBombTarget {
    static constexpr std::size_t size = 0xa28;
    std::uint8_t pad_0[0x9c8]; // 0x0
    std::uint8_t _[0x18]; // 0x9c8 
    std::uint8_t _[0x18]; // 0x9e0 
    std::uint8_t _[0x18]; // 0x9f8 
    std::uint8_t _[0x1]; // 0xa10 
    std::uint8_t _[0x1]; // 0xa11 
    std::uint8_t _[0x6]; // 0xa12 
    std::uint8_t _[0x8]; // 0xa18 
    std::uint8_t _[0x4]; // 0xa20 
    std::uint8_t _[0x4]; // 0xa24 
};

struct CRuleEntity {
    static constexpr std::size_t size = 0x858;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x8]; // 0x850 
};

struct CPhysThruster {
    static constexpr std::size_t size = 0x518;
    std::uint8_t pad_0[0x508]; // 0x0
    std::uint8_t _[0x10]; // 0x508 
};

struct CInfoPlayerStart {
    static constexpr std::size_t size = 0x4b8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x1]; // 0x4a8 
    std::uint8_t _[0x7]; // 0x4a9 
    std::uint8_t _[0x8]; // 0x4b0 
};

struct CEntityFlame {
    static constexpr std::size_t size = 0x4e8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b4 
    std::uint8_t _[0x4]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4bc 
    std::uint8_t _[0x4]; // 0x4c0 
    std::uint8_t _[0x4]; // 0x4c4 
    std::uint8_t _[0x4]; // 0x4c8 
    std::uint8_t _[0x1c]; // 0x4cc 
};

struct CSkeletonInstance {
    static constexpr std::size_t size = 0x460;
    std::uint8_t pad_0[0x120]; // 0x0
    std::uint8_t _[0x290]; // 0x120 
    std::uint8_t _[0x1]; // 0x3b0 
    std::uint8_t _[0x1]; // 0x3b1 
    std::uint8_t _[0x1]; // 0x3b2 
    std::uint8_t _[0x5]; // 0x3b3 
    std::uint8_t _[0x4]; // 0x3b8 
    std::uint8_t _[0x60]; // 0x3bc 
    std::uint8_t _[0x44]; // 0x41c 
};

struct CEntityComponent {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct CBasePlatTrain {
    static constexpr std::size_t size = 0x8f8;
    std::uint8_t pad_0[0x8d0]; // 0x0
    std::uint8_t _[0x8]; // 0x8d0 
    std::uint8_t _[0x10]; // 0x8d8 
    std::uint8_t _[0x4]; // 0x8e8 
    std::uint8_t _[0x4]; // 0x8ec 
    std::uint8_t _[0x8]; // 0x8f0 
};

struct CPointTeleport {
    static constexpr std::size_t size = 0x4c8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0xc]; // 0x4a8 
    std::uint8_t _[0xc]; // 0x4b4 
    std::uint8_t _[0x1]; // 0x4c0 
    std::uint8_t _[0x7]; // 0x4c1 
};

struct CTriggerGameEvent {
    static constexpr std::size_t size = 0x9e0;
    std::uint8_t pad_0[0x9c8]; // 0x0
    std::uint8_t _[0x8]; // 0x9c8 
    std::uint8_t _[0x8]; // 0x9d0 
    std::uint8_t _[0x8]; // 0x9d8 
};

struct CMessageEntity {
    static constexpr std::size_t size = 0x4c0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x1]; // 0x4b8 
    std::uint8_t _[0x1]; // 0x4b9 
    std::uint8_t _[0x6]; // 0x4ba 
};

struct CEnvEntityIgniter {
    static constexpr std::size_t size = 0x4b0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
};

struct CPulseCell_Outflow_CycleShuffled__InstanceState_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x20]; // 0x0 
    std::uint8_t _[0x8]; // 0x20 
};

struct CPulseCell_BaseLerp__CursorState_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct CMarkupVolumeTagged_NavGame {
    static constexpr std::size_t size = 0x8c0;
    std::uint8_t pad_0[0x8b8]; // 0x0
    std::uint8_t _[0x1]; // 0x8b8 
    std::uint8_t _[0x1]; // 0x8b9 
    std::uint8_t _[0x6]; // 0x8ba 
};

struct CMultiLightProxy {
    static constexpr std::size_t size = 0x4e8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4bc 
    std::uint8_t _[0x4]; // 0x4c0 
    std::uint8_t _[0x4]; // 0x4c4 
    std::uint8_t _[0x8]; // 0x4c8 
    std::uint8_t _[0x18]; // 0x4d0 
};

struct CWeaponM4A1 {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x12a0]; // 0x0
};

struct CTriggerHostageReset {
    static constexpr std::size_t size = 0x9c8;
    std::uint8_t pad_0[0x9c8]; // 0x0
};

struct CEconWearable {
    static constexpr std::size_t size = 0xec0;
    std::uint8_t pad_0[0xeb0]; // 0x0
    std::uint8_t _[0x4]; // 0xeb0 
    std::uint8_t _[0xc]; // 0xeb4 
};

struct CWeaponMAC10 {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x12a0]; // 0x0
};

struct CFuncLadder {
    static constexpr std::size_t size = 0x8e0;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x10]; // 0x850 
    std::uint8_t _[0x18]; // 0x860 
    std::uint8_t _[0xc]; // 0x878 
    std::uint8_t _[0xc]; // 0x884 
    std::uint8_t _[0xc]; // 0x890 
    std::uint8_t _[0x4]; // 0x89c 
    std::uint8_t _[0x1]; // 0x8a0 
    std::uint8_t _[0x1]; // 0x8a1 
    std::uint8_t _[0x6]; // 0x8a2 
    std::uint8_t _[0x8]; // 0x8a8 
    std::uint8_t _[0x18]; // 0x8b0 
    std::uint8_t _[0x18]; // 0x8c8 
};

struct CFogController {
    static constexpr std::size_t size = 0x518;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x68]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x510 
    std::uint8_t _[0x4]; // 0x514 
};

struct CItem {
    static constexpr std::size_t size = 0xae0;
    std::uint8_t pad_0[0xa48]; // 0x0
    std::uint8_t _[0x18]; // 0xa48 
    std::uint8_t _[0x18]; // 0xa60 
    std::uint8_t _[0x8]; // 0xa78 
    std::uint8_t _[0x18]; // 0xa80 
    std::uint8_t _[0x18]; // 0xa98 
    std::uint8_t _[0xc]; // 0xab0 
    std::uint8_t _[0xc]; // 0xabc 
    std::uint8_t _[0x18]; // 0xac8 
};

struct CTriggerPush {
    static constexpr std::size_t size = 0xa00;
    std::uint8_t pad_0[0x9c8]; // 0x0
    std::uint8_t _[0xc]; // 0x9c8 
    std::uint8_t _[0xc]; // 0x9d4 
    std::uint8_t _[0x1]; // 0x9e0 
    std::uint8_t _[0x7]; // 0x9e1 
    std::uint8_t _[0x8]; // 0x9e8 
    std::uint8_t _[0x4]; // 0x9f0 
    std::uint8_t _[0x4]; // 0x9f4 
    std::uint8_t _[0x8]; // 0x9f8 
};

struct CBaseProp {
    static constexpr std::size_t size = 0xa70;
    std::uint8_t pad_0[0xa40]; // 0x0
    std::uint8_t _[0x4]; // 0xa40 
    std::uint8_t _[0x4]; // 0xa44 
    std::uint8_t _[0x8]; // 0xa48 
    std::uint8_t _[0x20]; // 0xa50 
};

struct CInfoOffscreenPanoramaTexture {
    static constexpr std::size_t size = 0x528;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x1]; // 0x4a8 
    std::uint8_t _[0x3]; // 0x4a9 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x8]; // 0x4b8 
    std::uint8_t _[0x8]; // 0x4c0 
    std::uint8_t _[0x8]; // 0x4c8 
    std::uint8_t _[0x18]; // 0x4d0 
    std::uint8_t _[0x8]; // 0x4e8 
    std::uint8_t _[0x18]; // 0x4f0 
    std::uint8_t _[0x8]; // 0x508 
    std::uint8_t _[0x18]; // 0x510 
};

struct CPointAngularVelocitySensor {
    static constexpr std::size_t size = 0x578;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b4 
    std::uint8_t _[0x4]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4bc 
    std::uint8_t _[0x4]; // 0x4c0 
    std::uint8_t _[0xc]; // 0x4c4 
    std::uint8_t _[0xc]; // 0x4d0 
    std::uint8_t _[0x4]; // 0x4dc 
    std::uint8_t _[0x20]; // 0x4e0 
    std::uint8_t _[0x18]; // 0x500 
    std::uint8_t _[0x18]; // 0x518 
    std::uint8_t _[0x18]; // 0x530 
    std::uint8_t _[0x18]; // 0x548 
    std::uint8_t _[0x18]; // 0x560 
};

struct CPlayerVisibility {
    static constexpr std::size_t size = 0x4c0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b4 
    std::uint8_t _[0x1]; // 0x4b8 
    std::uint8_t _[0x7]; // 0x4b9 
};

struct CPulseCell_Step_FollowEntity {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x8]; // 0x50 
};

struct CFlashbang {
    static constexpr std::size_t size = 0x12c0;
    std::uint8_t pad_0[0x12c0]; // 0x0
};

struct CBasePlayerWeapon {
    static constexpr std::size_t size = 0xef0;
    std::uint8_t pad_0[0xeb0]; // 0x0
    std::uint8_t _[0x4]; // 0xeb0 
    std::uint8_t _[0x4]; // 0xeb4 
    std::uint8_t _[0x4]; // 0xeb8 
    std::uint8_t _[0x4]; // 0xebc 
    std::uint8_t _[0x4]; // 0xec0 
    std::uint8_t _[0x4]; // 0xec4 
    std::uint8_t _[0x8]; // 0xec8 
    std::uint8_t _[0x20]; // 0xed0 
};

struct CPhysForce {
    static constexpr std::size_t size = 0x508;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4bc 
    std::uint8_t _[0x4]; // 0x4c0 
    std::uint8_t _[0x4]; // 0x4c4 
    std::uint8_t _[0x40]; // 0x4c8 
};

struct CCSWeaponBaseVData {
    static constexpr std::size_t size = 0x8a0;
    std::uint8_t pad_0[0x520]; // 0x0
    std::uint8_t _[0x4]; // 0x520 
    std::uint8_t _[0x4]; // 0x524 
    std::uint8_t _[0xe0]; // 0x528 
    std::uint8_t _[0xc]; // 0x608 
    std::uint8_t _[0xc]; // 0x614 
    std::uint8_t _[0xe0]; // 0x620 
    std::uint8_t _[0x4]; // 0x700 
    std::uint8_t _[0x4]; // 0x704 
    std::uint8_t _[0x4]; // 0x708 
    std::uint8_t _[0x4]; // 0x70c 
    std::uint8_t _[0x4]; // 0x710 
    std::uint8_t _[0x4]; // 0x714 
    std::uint8_t _[0x4]; // 0x718 
    std::uint8_t _[0x1]; // 0x71c 
    std::uint8_t _[0x1]; // 0x71d 
    std::uint8_t _[0x1]; // 0x71e 
    std::uint8_t _[0x1]; // 0x71f 
    std::uint8_t _[0x8]; // 0x720 
    std::uint8_t _[0x4]; // 0x728 
    std::uint8_t _[0x1]; // 0x72c 
    std::uint8_t _[0x3]; // 0x72d 
    std::uint8_t _[0x4]; // 0x730 
    std::uint8_t _[0x4]; // 0x734 
    std::uint8_t _[0x8]; // 0x738 
    std::uint8_t _[0x4]; // 0x740 
    std::uint8_t _[0x4]; // 0x744 
    std::uint8_t _[0x8]; // 0x748 
    std::uint8_t _[0x8]; // 0x750 
    std::uint8_t _[0x8]; // 0x758 
    std::uint8_t _[0x8]; // 0x760 
    std::uint8_t _[0x8]; // 0x768 
    std::uint8_t _[0x8]; // 0x770 
    std::uint8_t _[0x8]; // 0x778 
    std::uint8_t _[0x8]; // 0x780 
    std::uint8_t _[0x8]; // 0x788 
    std::uint8_t _[0x8]; // 0x790 
    std::uint8_t _[0x8]; // 0x798 
    std::uint8_t _[0x8]; // 0x7a0 
    std::uint8_t _[0x8]; // 0x7a8 
    std::uint8_t _[0x8]; // 0x7b0 
    std::uint8_t _[0x4]; // 0x7b8 
    std::uint8_t _[0x4]; // 0x7bc 
    std::uint8_t _[0x4]; // 0x7c0 
    std::uint8_t _[0x4]; // 0x7c4 
    std::uint8_t _[0x4]; // 0x7c8 
    std::uint8_t _[0x4]; // 0x7cc 
    std::uint8_t _[0x4]; // 0x7d0 
    std::uint8_t _[0x4]; // 0x7d4 
    std::uint8_t _[0x4]; // 0x7d8 
    std::uint8_t _[0x4]; // 0x7dc 
    std::uint8_t _[0x4]; // 0x7e0 
    std::uint8_t _[0x4]; // 0x7e4 
    std::uint8_t _[0x8]; // 0x7e8 
    std::uint8_t _[0x1]; // 0x7f0 
    std::uint8_t _[0x3]; // 0x7f1 
    std::uint8_t _[0x4]; // 0x7f4 
    std::uint8_t _[0x4]; // 0x7f8 
    std::uint8_t _[0x4]; // 0x7fc 
    std::uint8_t _[0x4]; // 0x800 
    std::uint8_t _[0x4]; // 0x804 
    std::uint8_t _[0x4]; // 0x808 
    std::uint8_t _[0x4]; // 0x80c 
    std::uint8_t _[0x4]; // 0x810 
    std::uint8_t _[0x4]; // 0x814 
    std::uint8_t _[0x4]; // 0x818 
    std::uint8_t _[0x4]; // 0x81c 
    std::uint8_t _[0x4]; // 0x820 
    std::uint8_t _[0x4]; // 0x824 
    std::uint8_t _[0x4]; // 0x828 
    std::uint8_t _[0x4]; // 0x82c 
    std::uint8_t _[0x4]; // 0x830 
    std::uint8_t _[0x4]; // 0x834 
    std::uint8_t _[0x4]; // 0x838 
    std::uint8_t _[0x4]; // 0x83c 
    std::uint8_t _[0x4]; // 0x840 
    std::uint8_t _[0x4]; // 0x844 
    std::uint8_t _[0x4]; // 0x848 
    std::uint8_t _[0x4]; // 0x84c 
    std::uint8_t _[0x4]; // 0x850 
    std::uint8_t _[0x4]; // 0x854 
    std::uint8_t _[0x4]; // 0x858 
    std::uint8_t _[0xc]; // 0x85c 
    std::uint8_t _[0x38]; // 0x868 
};

struct CAttributeManager {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x18]; // 0x8 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x20]; // 0x30 
};

struct SignatureOutflow_Continue {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CInfoTarget {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CPlayer_CameraServices {
    static constexpr std::size_t size = 0x178;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0xc]; // 0x48 
    std::uint8_t _[0x4]; // 0x54 
    std::uint8_t _[0x8]; // 0x58 
    std::uint8_t _[0x40]; // 0x60 
    std::uint8_t _[0x4]; // 0xa0 
    std::uint8_t _[0x4]; // 0xa4 
    std::uint8_t _[0x8]; // 0xa8 
    std::uint8_t _[0x78]; // 0xb0 
    std::uint8_t _[0x18]; // 0x128 
    std::uint8_t _[0x4]; // 0x140 
    std::uint8_t _[0x1c]; // 0x144 
    std::uint8_t _[0x18]; // 0x160 
};

struct CPulseCell_Timeline {
    static constexpr std::size_t size = 0x140;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x18]; // 0xd8 
    std::uint8_t _[0x8]; // 0xf0 
    std::uint8_t _[0x48]; // 0xf8 
};

struct CPulseCell_Inflow_EntOutputHandler {
    static constexpr std::size_t size = 0xb8;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t _[0x10]; // 0x80 
    std::uint8_t _[0x10]; // 0x90 
    std::uint8_t _[0x18]; // 0xa0 
};

struct CFilterAttributeInt {
    static constexpr std::size_t size = 0x4e8;
    std::uint8_t pad_0[0x4e0]; // 0x0
    std::uint8_t _[0x8]; // 0x4e0 
};

struct CKeepUpright {
    static constexpr std::size_t size = 0x4e8;
    std::uint8_t pad_0[0x4b0]; // 0x0
    std::uint8_t _[0xc]; // 0x4b0 
    std::uint8_t _[0xc]; // 0x4bc 
    std::uint8_t _[0x8]; // 0x4c8 
    std::uint8_t _[0x8]; // 0x4d0 
    std::uint8_t _[0x4]; // 0x4d8 
    std::uint8_t _[0x4]; // 0x4dc 
    std::uint8_t _[0x1]; // 0x4e0 
    std::uint8_t _[0x7]; // 0x4e1 
};

struct CPointTemplate {
    static constexpr std::size_t size = 0x540;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x8]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4c0 
    std::uint8_t _[0x4]; // 0x4c4 
    std::uint8_t _[0x4]; // 0x4c8 
    std::uint8_t _[0x4]; // 0x4cc 
    std::uint8_t _[0x18]; // 0x4d0 
    std::uint8_t _[0x18]; // 0x4e8 
    std::uint8_t _[0x8]; // 0x500 
    std::uint8_t _[0x8]; // 0x508 
    std::uint8_t _[0x30]; // 0x510 
};

struct CEnvVolumetricFogController {
    static constexpr std::size_t size = 0x558;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b4 
    std::uint8_t _[0x4]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4bc 
    std::uint8_t _[0x4]; // 0x4c0 
    std::uint8_t _[0x4]; // 0x4c4 
    std::uint8_t _[0x4]; // 0x4c8 
    std::uint8_t _[0x4]; // 0x4cc 
    std::uint8_t _[0x4]; // 0x4d0 
    std::uint8_t _[0x4]; // 0x4d4 
    std::uint8_t _[0x4]; // 0x4d8 
    std::uint8_t _[0xc]; // 0x4dc 
    std::uint8_t _[0xc]; // 0x4e8 
    std::uint8_t _[0x4]; // 0x4f4 
    std::uint8_t _[0x4]; // 0x4f8 
    std::uint8_t _[0x4]; // 0x4fc 
    std::uint8_t _[0x4]; // 0x500 
    std::uint8_t _[0x4]; // 0x504 
    std::uint8_t _[0x4]; // 0x508 
    std::uint8_t _[0x4]; // 0x50c 
    std::uint8_t _[0x4]; // 0x510 
    std::uint8_t _[0x4]; // 0x514 
    std::uint8_t _[0x4]; // 0x518 
    std::uint8_t _[0x1]; // 0x51c 
    std::uint8_t _[0x1]; // 0x51d 
    std::uint8_t _[0x2]; // 0x51e 
    std::uint8_t _[0x8]; // 0x520 
    std::uint8_t _[0x4]; // 0x528 
    std::uint8_t _[0x4]; // 0x52c 
    std::uint8_t _[0x4]; // 0x530 
    std::uint8_t _[0xc]; // 0x534 
    std::uint8_t _[0x4]; // 0x540 
    std::uint8_t _[0xc]; // 0x544 
    std::uint8_t _[0x8]; // 0x550 
};

struct CBot {
    static constexpr std::size_t size = 0x100;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x9c]; // 0x24 
    std::uint8_t _[0x1]; // 0xc0 
    std::uint8_t _[0x3]; // 0xc1 
    std::uint8_t _[0x4]; // 0xc4 
    std::uint8_t _[0x4]; // 0xc8 
    std::uint8_t _[0x4]; // 0xcc 
    std::uint8_t _[0x8]; // 0xd0 
    std::uint8_t _[0x4]; // 0xd8 
    std::uint8_t _[0x1c]; // 0xdc 
    std::uint8_t _[0x8]; // 0xf8 
};

struct CPulseCell_Step_SetAnimGraphParam {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x8]; // 0x48 
};

struct CPlayer_FlashlightServices {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CCSPlayerController {
    static constexpr std::size_t size = 0xab8;
    std::uint8_t pad_0[0x7e8]; // 0x0
    std::uint8_t _[0x8]; // 0x7e8 
    std::uint8_t _[0x8]; // 0x7f0 
    std::uint8_t _[0x8]; // 0x7f8 
    std::uint8_t _[0x8]; // 0x800 
    std::uint8_t _[0x4]; // 0x808 
    std::uint8_t _[0x4]; // 0x80c 
    std::uint8_t _[0x8]; // 0x810 
    std::uint8_t _[0x8]; // 0x818 
    std::uint8_t _[0x4]; // 0x820 
    std::uint8_t _[0x4]; // 0x824 
    std::uint8_t _[0x4]; // 0x828 
    std::uint8_t _[0x1]; // 0x82c 
    std::uint8_t _[0x3]; // 0x82d 
    std::uint8_t _[0x4]; // 0x830 
    std::uint8_t _[0x1]; // 0x834 
    std::uint8_t _[0x1]; // 0x835 
    std::uint8_t _[0x1]; // 0x836 
    std::uint8_t _[0x1]; // 0x837 
    std::uint8_t _[0x1]; // 0x838 
    std::uint8_t _[0x3]; // 0x839 
    std::uint8_t _[0x4]; // 0x83c 
    std::uint8_t _[0x8]; // 0x840 
    std::uint8_t _[0x4]; // 0x848 
    std::uint8_t _[0x4]; // 0x84c 
    std::uint8_t _[0x8]; // 0x850 
    std::uint8_t _[0x8]; // 0x858 
    std::uint8_t _[0x4]; // 0x860 
    std::uint8_t _[0x4]; // 0x864 
    std::uint8_t _[0x4]; // 0x868 
    std::uint8_t _[0x4]; // 0x86c 
    std::uint8_t _[0x4]; // 0x870 
    std::uint8_t _[0x4]; // 0x874 
    std::uint8_t _[0x4]; // 0x878 
    std::uint8_t _[0x4]; // 0x87c 
    std::uint8_t _[0x4]; // 0x880 
    std::uint8_t _[0x4]; // 0x884 
    std::uint8_t _[0x30]; // 0x888 
    std::uint8_t _[0x4]; // 0x8b8 
    std::uint8_t _[0x4]; // 0x8bc 
    std::uint8_t _[0x4]; // 0x8c0 
    std::uint8_t _[0x4]; // 0x8c4 
    std::uint8_t _[0x1]; // 0x8c8 
    std::uint8_t _[0x1]; // 0x8c9 
    std::uint8_t _[0x1]; // 0x8ca 
    std::uint8_t _[0x1]; // 0x8cb 
    std::uint8_t _[0x1]; // 0x8cc 
    std::uint8_t _[0x3]; // 0x8cd 
    std::uint8_t _[0x10]; // 0x8d0 
    std::uint8_t _[0x1]; // 0x8e0 
    std::uint8_t _[0x1]; // 0x8e1 
    std::uint8_t _[0x2]; // 0x8e2 
    std::uint8_t _[0x4]; // 0x8e4 
    std::uint8_t _[0x4]; // 0x8e8 
    std::uint8_t _[0x4]; // 0x8ec 
    std::uint8_t _[0x4]; // 0x8f0 
    std::uint8_t _[0x4]; // 0x8f4 
    std::uint8_t _[0x4]; // 0x8f8 
    std::uint8_t _[0x4]; // 0x8fc 
    std::uint8_t _[0x4]; // 0x900 
    std::uint8_t _[0x4]; // 0x904 
    std::uint8_t _[0x1]; // 0x908 
    std::uint8_t _[0x1]; // 0x909 
    std::uint8_t _[0x2]; // 0x90a 
    std::uint8_t _[0x4]; // 0x90c 
    std::uint8_t _[0x4]; // 0x910 
    std::uint8_t _[0x4]; // 0x914 
    std::uint8_t _[0x4]; // 0x918 
    std::uint8_t _[0x4]; // 0x91c 
    std::uint8_t _[0x4]; // 0x920 
    std::uint8_t _[0x4]; // 0x924 
    std::uint8_t _[0x8]; // 0x928 
    std::uint8_t _[0x1]; // 0x930 
    std::uint8_t _[0x1]; // 0x931 
    std::uint8_t _[0x2]; // 0x932 
    std::uint8_t _[0x4]; // 0x934 
    std::uint8_t _[0x4]; // 0x938 
    std::uint8_t _[0x4]; // 0x93c 
    std::uint8_t _[0x4]; // 0x940 
    std::uint8_t _[0x4]; // 0x944 
    std::uint8_t _[0x8]; // 0x948 
    std::uint8_t _[0x18]; // 0x950 
    std::uint8_t _[0x4]; // 0x968 
    std::uint8_t _[0x4]; // 0x96c 
    std::uint8_t _[0x1]; // 0x970 
    std::uint8_t _[0x1]; // 0x971 
    std::uint8_t _[0x1]; // 0x972 
    std::uint8_t _[0x5]; // 0x973 
    std::uint8_t _[0x8]; // 0x978 
    std::uint8_t _[0x4]; // 0x980 
    std::uint8_t _[0x4]; // 0x984 
    std::uint8_t _[0x4]; // 0x988 
    std::uint8_t _[0xad]; // 0x98c 
    std::uint8_t _[0x7f]; // 0xa39 
};

struct CPhysLength {
    static constexpr std::size_t size = 0x538;
    std::uint8_t pad_0[0x508]; // 0x0
    std::uint8_t _[0x18]; // 0x508 
    std::uint8_t _[0xc]; // 0x520 
    std::uint8_t _[0x4]; // 0x52c 
    std::uint8_t _[0x4]; // 0x530 
    std::uint8_t _[0x4]; // 0x534 
};

struct CTeam {
    static constexpr std::size_t size = 0x560;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x18]; // 0x4a8 
    std::uint8_t _[0x18]; // 0x4c0 
    std::uint8_t _[0x4]; // 0x4d8 
    std::uint8_t _[0x84]; // 0x4dc 
};

struct CLogicNPCCounterAABB {
    static constexpr std::size_t size = 0x758;
    std::uint8_t pad_0[0x728]; // 0x0
    std::uint8_t _[0xc]; // 0x728 
    std::uint8_t _[0xc]; // 0x734 
    std::uint8_t _[0xc]; // 0x740 
    std::uint8_t _[0xc]; // 0x74c 
};

struct CPulseCell_Outflow_CycleOrdered__InstanceState_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CChicken {
    static constexpr std::size_t size = 0x32f0;
    std::uint8_t pad_0[0xcb0]; // 0x0
    std::uint8_t _[0x438]; // 0xcb0 
    std::uint8_t _[0x18]; // 0x10e8 
    std::uint8_t _[0x10]; // 0x1100 
    std::uint8_t _[0x18]; // 0x1110 
    std::uint8_t _[0x4]; // 0x1128 
    std::uint8_t _[0xc]; // 0x112c 
    std::uint8_t _[0x4]; // 0x1138 
    std::uint8_t _[0x4]; // 0x113c 
    std::uint8_t _[0x18]; // 0x1140 
    std::uint8_t _[0x4]; // 0x1158 
    std::uint8_t _[0x4]; // 0x115c 
    std::uint8_t _[0x18]; // 0x1160 
    std::uint8_t _[0x18]; // 0x1178 
    std::uint8_t _[0x18]; // 0x1190 
    std::uint8_t _[0x4]; // 0x11a8 
    std::uint8_t _[0x14]; // 0x11ac 
    std::uint8_t _[0x18]; // 0x11c0 
    std::uint8_t _[0x18]; // 0x11d8 
    std::uint8_t _[0x2010]; // 0x11f0 
    std::uint8_t _[0x98]; // 0x3200 
    std::uint8_t _[0xc]; // 0x3298 
    std::uint8_t _[0x4]; // 0x32a4 
    std::uint8_t _[0x20]; // 0x32a8 
    std::uint8_t _[0x1b]; // 0x32c8 
    std::uint8_t _[0xd]; // 0x32e3 
};

struct CPhysicsPropRespawnable {
    static constexpr std::size_t size = 0xd50;
    std::uint8_t pad_0[0xd10]; // 0x0
    std::uint8_t _[0xc]; // 0xd10 
    std::uint8_t _[0xc]; // 0xd1c 
    std::uint8_t _[0xc]; // 0xd28 
    std::uint8_t _[0xc]; // 0xd34 
    std::uint8_t _[0x10]; // 0xd40 
};

struct CEnvBeam {
    static constexpr std::size_t size = 0x988;
    std::uint8_t pad_0[0x8f0]; // 0x0
    std::uint8_t _[0x8]; // 0x8f0 
    std::uint8_t _[0x8]; // 0x8f8 
    std::uint8_t _[0x8]; // 0x900 
    std::uint8_t _[0x8]; // 0x908 
    std::uint8_t _[0x4]; // 0x910 
    std::uint8_t _[0x4]; // 0x914 
    std::uint8_t _[0x4]; // 0x918 
    std::uint8_t _[0x4]; // 0x91c 
    std::uint8_t _[0x8]; // 0x920 
    std::uint8_t _[0x8]; // 0x928 
    std::uint8_t _[0x4]; // 0x930 
    std::uint8_t _[0xc]; // 0x934 
    std::uint8_t _[0xc]; // 0x940 
    std::uint8_t _[0x4]; // 0x94c 
    std::uint8_t _[0x8]; // 0x950 
    std::uint8_t _[0x8]; // 0x958 
    std::uint8_t _[0x8]; // 0x960 
    std::uint8_t _[0x8]; // 0x968 
    std::uint8_t _[0x18]; // 0x970 
};

struct CLightSpotEntity {
    static constexpr std::size_t size = 0x858;
    std::uint8_t pad_0[0x858]; // 0x0
};

struct CCSObservableElement {
    static constexpr std::size_t size = 0x4d8;
    std::uint8_t pad_0[0x4c0]; // 0x0
    std::uint8_t _[0x8]; // 0x4c0 
    std::uint8_t _[0x4]; // 0x4c8 
    std::uint8_t _[0x4]; // 0x4cc 
    std::uint8_t _[0x8]; // 0x4d0 
};

struct CWeaponSawedoff {
    static constexpr std::size_t size = 0x1280;
    std::uint8_t pad_0[0x1280]; // 0x0
};

struct CTonemapTrigger {
    static constexpr std::size_t size = 0x9d8;
    std::uint8_t pad_0[0x9c8]; // 0x0
    std::uint8_t _[0x8]; // 0x9c8 
    std::uint8_t _[0x8]; // 0x9d0 
};

struct CEnvShake {
    static constexpr std::size_t size = 0x4f8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b4 
    std::uint8_t _[0x4]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4bc 
    std::uint8_t _[0x4]; // 0x4c0 
    std::uint8_t _[0x4]; // 0x4c4 
    std::uint8_t _[0x4]; // 0x4c8 
    std::uint8_t _[0xc]; // 0x4cc 
    std::uint8_t _[0x8]; // 0x4d8 
    std::uint8_t _[0x18]; // 0x4e0 
};

struct CCSPlayer_MovementServices {
    static constexpr std::size_t size = 0xfe0;
    std::uint8_t pad_0[0x310]; // 0x0
    std::uint8_t _[0xe0]; // 0x310 
    std::uint8_t _[0x4]; // 0x3f0 
    std::uint8_t _[0x4]; // 0x3f4 
    std::uint8_t _[0xc]; // 0x3f8 
    std::uint8_t _[0x4]; // 0x404 
    std::uint8_t _[0x4]; // 0x408 
    std::uint8_t _[0x4]; // 0x40c 
    std::uint8_t _[0x4]; // 0x410 
    std::uint8_t _[0x1]; // 0x414 
    std::uint8_t _[0x1]; // 0x415 
    std::uint8_t _[0x2]; // 0x416 
    std::uint8_t _[0x4]; // 0x418 
    std::uint8_t _[0x4]; // 0x41c 
    std::uint8_t _[0x4]; // 0x420 
    std::uint8_t _[0xc]; // 0x424 
    std::uint8_t _[0x8]; // 0x430 
    std::uint8_t _[0x1]; // 0x438 
    std::uint8_t _[0x1]; // 0x439 
    std::uint8_t _[0x20e]; // 0x43a 
    std::uint8_t _[0x4]; // 0x648 
    std::uint8_t _[0x4]; // 0x64c 
    std::uint8_t _[0x4]; // 0x650 
    std::uint8_t _[0x4]; // 0x654 
    std::uint8_t _[0x4]; // 0x658 
    std::uint8_t _[0xc]; // 0x65c 
    std::uint8_t _[0xc]; // 0x668 
    std::uint8_t _[0xc]; // 0x674 
    std::uint8_t _[0x4]; // 0x680 
    std::uint8_t _[0x4]; // 0x684 
    std::uint8_t _[0x4]; // 0x688 
    std::uint8_t _[0x4]; // 0x68c 
    std::uint8_t _[0x4]; // 0x690 
    std::uint8_t _[0x4]; // 0x694 
    std::uint8_t _[0x4]; // 0x698 
    std::uint8_t _[0x4]; // 0x69c 
    std::uint8_t _[0x4]; // 0x6a0 
    std::uint8_t _[0x4]; // 0x6a4 
    std::uint8_t _[0x4]; // 0x6a8 
    std::uint8_t _[0x4]; // 0x6ac 
    std::uint8_t _[0x4]; // 0x6b0 
    std::uint8_t _[0x4]; // 0x6b4 
    std::uint8_t _[0x18]; // 0x6b8 
    std::uint8_t _[0x38]; // 0x6d0 
    std::uint8_t _[0x4]; // 0x708 
    std::uint8_t _[0x4]; // 0x70c 
    std::uint8_t _[0x4]; // 0x710 
    std::uint8_t _[0x4]; // 0x714 
    std::uint8_t _[0x90]; // 0x718 
    std::uint8_t _[0x828]; // 0x7a8 
    std::uint8_t _[0x10]; // 0xfd0 
};

struct SellbackPurchaseEntry_t {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x8]; // 0x40 
};

struct CTestPulseIO__EntityNameStringArgs_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
};

struct CFuncMoverRouter {
    static constexpr std::size_t size = 0x4c0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x8]; // 0x4b8 
};

struct CTriggerCallback {
    static constexpr std::size_t size = 0x9d0;
    std::uint8_t pad_0[0x9d0]; // 0x0
};

struct CSoundOpvarSetAutoRoomEntity {
    static constexpr std::size_t size = 0x680;
    std::uint8_t pad_0[0x640]; // 0x0
    std::uint8_t _[0x18]; // 0x640 
    std::uint8_t _[0x18]; // 0x658 
    std::uint8_t _[0x4]; // 0x670 
    std::uint8_t _[0x4]; // 0x674 
    std::uint8_t _[0x8]; // 0x678 
};

struct CPulseCell_Outflow_ListenForEntityOutput {
    static constexpr std::size_t size = 0x130;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x48]; // 0xd8 
    std::uint8_t _[0x8]; // 0x120 
    std::uint8_t _[0x8]; // 0x128 
};

struct CPushable {
    static constexpr std::size_t size = 0x928;
    std::uint8_t pad_0[0x928]; // 0x0
};

struct CRotatorTarget {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CPhysicsEntitySolver {
    static constexpr std::size_t size = 0x4d0;
    std::uint8_t pad_0[0x4c0]; // 0x0
    std::uint8_t _[0x4]; // 0x4c0 
    std::uint8_t _[0x4]; // 0x4c4 
    std::uint8_t _[0x4]; // 0x4c8 
    std::uint8_t _[0x4]; // 0x4cc 
};

struct CLogicCollisionPair {
    static constexpr std::size_t size = 0x4c0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x1]; // 0x4b8 
    std::uint8_t _[0x1]; // 0x4b9 
    std::uint8_t _[0x1]; // 0x4ba 
    std::uint8_t _[0x1]; // 0x4bb 
    std::uint8_t _[0x4]; // 0x4bc 
};

struct CTestEffect {
    static constexpr std::size_t size = 0x578;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x60]; // 0x4b0 
    std::uint8_t _[0x60]; // 0x510 
    std::uint8_t _[0x8]; // 0x570 
};

struct CPulseCell_Outflow_ScriptedSequence__CursorState_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CPropDoorRotating {
    static constexpr std::size_t size = 0xf30;
    std::uint8_t pad_0[0xe90]; // 0x0
    std::uint8_t _[0xc]; // 0xe90 
    std::uint8_t _[0x4]; // 0xe9c 
    std::uint8_t _[0x4]; // 0xea0 
    std::uint8_t _[0x4]; // 0xea4 
    std::uint8_t _[0x4]; // 0xea8 
    std::uint8_t _[0x4]; // 0xeac 
    std::uint8_t _[0x4]; // 0xeb0 
    std::uint8_t _[0xc]; // 0xeb4 
    std::uint8_t _[0xc]; // 0xec0 
    std::uint8_t _[0xc]; // 0xecc 
    std::uint8_t _[0xc]; // 0xed8 
    std::uint8_t _[0xc]; // 0xee4 
    std::uint8_t _[0xc]; // 0xef0 
    std::uint8_t _[0xc]; // 0xefc 
    std::uint8_t _[0xc]; // 0xf08 
    std::uint8_t _[0xc]; // 0xf14 
    std::uint8_t _[0x4]; // 0xf20 
    std::uint8_t _[0xc]; // 0xf24 
};

struct CEnvParticleGlow {
    static constexpr std::size_t size = 0xdf0;
    std::uint8_t pad_0[0xdd8]; // 0x0
    std::uint8_t _[0x4]; // 0xdd8 
    std::uint8_t _[0x4]; // 0xddc 
    std::uint8_t _[0x4]; // 0xde0 
    std::uint8_t _[0x4]; // 0xde4 
    std::uint8_t _[0x8]; // 0xde8 
};

struct CMathRemap {
    static constexpr std::size_t size = 0x540;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b4 
    std::uint8_t _[0x4]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4bc 
    std::uint8_t _[0x20]; // 0x4c0 
    std::uint8_t _[0x18]; // 0x4e0 
    std::uint8_t _[0x18]; // 0x4f8 
    std::uint8_t _[0x18]; // 0x510 
    std::uint8_t _[0x18]; // 0x528 
};

struct CSkyCameraVolumeTarget {
    static constexpr std::size_t size = 0x4b8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x8]; // 0x4b0 
};

struct CSoundOpvarSetOBBWindEntity {
    static constexpr std::size_t size = 0x590;
    std::uint8_t pad_0[0x550]; // 0x0
    std::uint8_t _[0xc]; // 0x550 
    std::uint8_t _[0xc]; // 0x55c 
    std::uint8_t _[0xc]; // 0x568 
    std::uint8_t _[0xc]; // 0x574 
    std::uint8_t _[0x4]; // 0x580 
    std::uint8_t _[0x4]; // 0x584 
    std::uint8_t _[0x4]; // 0x588 
    std::uint8_t _[0x4]; // 0x58c 
};

struct PhysicsRagdollPose_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x18]; // 0x8 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
};

struct CPulseCell_ApplyDynamicAttributeBase__CursorState_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
};

struct CPropDataComponent {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
};

struct CScriptTriggerOnce {
    static constexpr std::size_t size = 0x9f0;
    std::uint8_t pad_0[0x9e0]; // 0x0
    std::uint8_t _[0x10]; // 0x9e0 
};

struct CLightOrthoEntity {
    static constexpr std::size_t size = 0x858;
    std::uint8_t pad_0[0x858]; // 0x0
};

struct CInfoInstructorHintHostageRescueZone {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CPulseCell_LimitCount__InstanceState_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CTriggerTeleport {
    static constexpr std::size_t size = 0x9d8;
    std::uint8_t pad_0[0x9c8]; // 0x0
    std::uint8_t _[0x8]; // 0x9c8 
    std::uint8_t _[0x1]; // 0x9d0 
    std::uint8_t _[0x1]; // 0x9d1 
    std::uint8_t _[0x6]; // 0x9d2 
};

struct CFuncWall {
    static constexpr std::size_t size = 0x858;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x8]; // 0x850 
};

struct CBtActionAim {
    static constexpr std::size_t size = 0xf8;
    std::uint8_t pad_0[0x68]; // 0x0
    std::uint8_t _[0x18]; // 0x68 
    std::uint8_t _[0x8]; // 0x80 
    std::uint8_t _[0x4]; // 0x88 
    std::uint8_t _[0x4]; // 0x8c 
    std::uint8_t _[0x4]; // 0x90 
    std::uint8_t _[0x4]; // 0x94 
    std::uint8_t _[0x4]; // 0x98 
    std::uint8_t _[0xc]; // 0x9c 
    std::uint8_t _[0x18]; // 0xa8 
    std::uint8_t _[0x18]; // 0xc0 
    std::uint8_t _[0x18]; // 0xd8 
    std::uint8_t _[0x8]; // 0xf0 
};

struct CCSGO_TeamPreviewCharacterPosition {
    static constexpr std::size_t size = 0x1468;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x8]; // 0x4b8 
    std::uint8_t _[0x8]; // 0x4c0 
    std::uint8_t _[0x3e8]; // 0x4c8 
    std::uint8_t _[0x3e8]; // 0x8b0 
    std::uint8_t _[0x3e8]; // 0xc98 
    std::uint8_t _[0x3e8]; // 0x1080 
};

struct CGameRulesProxy {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CInfoLadderDismount {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CMessage {
    static constexpr std::size_t size = 0x4e0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b4 
    std::uint8_t _[0x8]; // 0x4b8 
    std::uint8_t _[0x8]; // 0x4c0 
    std::uint8_t _[0x18]; // 0x4c8 
};

struct CPointVelocitySensor {
    static constexpr std::size_t size = 0x4e8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0xc]; // 0x4ac 
    std::uint8_t _[0x4]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4bc 
    std::uint8_t _[0x8]; // 0x4c0 
    std::uint8_t _[0x20]; // 0x4c8 
};

struct CCS2PawnGraphController {
    static constexpr std::size_t size = 0x860;
    std::uint8_t pad_0[0x5c0]; // 0x0
    std::uint8_t _[0x18]; // 0x5c0 
    std::uint8_t _[0x18]; // 0x5d8 
    std::uint8_t _[0x18]; // 0x5f0 
    std::uint8_t _[0x18]; // 0x608 
    std::uint8_t _[0x18]; // 0x620 
    std::uint8_t _[0x18]; // 0x638 
    std::uint8_t _[0x18]; // 0x650 
    std::uint8_t _[0x18]; // 0x668 
    std::uint8_t _[0x18]; // 0x680 
    std::uint8_t _[0x18]; // 0x698 
    std::uint8_t _[0x18]; // 0x6b0 
    std::uint8_t _[0x18]; // 0x6c8 
    std::uint8_t _[0x18]; // 0x6e0 
    std::uint8_t _[0x18]; // 0x6f8 
    std::uint8_t _[0x18]; // 0x710 
    std::uint8_t _[0x18]; // 0x728 
    std::uint8_t _[0x18]; // 0x740 
    std::uint8_t _[0x18]; // 0x758 
    std::uint8_t _[0x18]; // 0x770 
    std::uint8_t _[0x18]; // 0x788 
    std::uint8_t _[0x18]; // 0x7a0 
    std::uint8_t _[0x18]; // 0x7b8 
    std::uint8_t _[0x18]; // 0x7d0 
    std::uint8_t _[0x18]; // 0x7e8 
    std::uint8_t _[0x18]; // 0x800 
    std::uint8_t _[0x18]; // 0x818 
    std::uint8_t _[0x18]; // 0x830 
    std::uint8_t _[0x18]; // 0x848 
};

struct EngineCountdownTimer {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x8]; // 0x10 
};

struct CScriptTriggerMultiple {
    static constexpr std::size_t size = 0x9f0;
    std::uint8_t pad_0[0x9e0]; // 0x0
    std::uint8_t _[0x10]; // 0x9e0 
};

struct CHostage {
    static constexpr std::size_t size = 0x2da0;
    std::uint8_t pad_0[0xb38]; // 0x0
    std::uint8_t _[0x18]; // 0xb38 
    std::uint8_t _[0x18]; // 0xb50 
    std::uint8_t _[0x18]; // 0xb68 
    std::uint8_t _[0x18]; // 0xb80 
    std::uint8_t _[0x18]; // 0xb98 
    std::uint8_t _[0x4]; // 0xbb0 
    std::uint8_t _[0x4]; // 0xbb4 
    std::uint8_t _[0x4]; // 0xbb8 
    std::uint8_t _[0x4]; // 0xbbc 
    std::uint8_t _[0xc]; // 0xbc0 
    std::uint8_t _[0x1]; // 0xbcc 
    std::uint8_t _[0x3]; // 0xbcd 
    std::uint8_t _[0x4]; // 0xbd0 
    std::uint8_t _[0x4]; // 0xbd4 
    std::uint8_t _[0x8]; // 0xbd8 
    std::uint8_t _[0x18]; // 0xbe0 
    std::uint8_t _[0x4]; // 0xbf8 
    std::uint8_t _[0xc]; // 0xbfc 
    std::uint8_t _[0x1]; // 0xc08 
    std::uint8_t _[0x7]; // 0xc09 
    std::uint8_t _[0x18]; // 0xc10 
    std::uint8_t _[0x2010]; // 0xc28 
    std::uint8_t _[0x18]; // 0x2c38 
    std::uint8_t _[0x90]; // 0x2c50 
    std::uint8_t _[0x20]; // 0x2ce0 
    std::uint8_t _[0x1c]; // 0x2d00 
    std::uint8_t _[0x1]; // 0x2d1c 
    std::uint8_t _[0x3]; // 0x2d1d 
    std::uint8_t _[0x4]; // 0x2d20 
    std::uint8_t _[0x4]; // 0x2d24 
    std::uint8_t _[0x4]; // 0x2d28 
    std::uint8_t _[0xc]; // 0x2d2c 
    std::uint8_t _[0xc]; // 0x2d38 
    std::uint8_t _[0x4]; // 0x2d44 
    std::uint8_t _[0x4]; // 0x2d48 
    std::uint8_t _[0x4]; // 0x2d4c 
    std::uint8_t _[0x4]; // 0x2d50 
    std::uint8_t _[0x4]; // 0x2d54 
    std::uint8_t _[0x38]; // 0x2d58 
    std::uint8_t _[0x10]; // 0x2d90 
};

struct CEnvSpark {
    static constexpr std::size_t size = 0x4d0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b4 
    std::uint8_t _[0x18]; // 0x4b8 
};

struct CCSPlayerController_DamageServices {
    static constexpr std::size_t size = 0xd0;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t _[0x8]; // 0x40 
    std::uint8_t _[0x88]; // 0x48 
};

struct CEnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume {
    static constexpr std::size_t size = 0x680;
    std::uint8_t pad_0[0x680]; // 0x0
};

struct CBaseModelEntity__OnDamageLevelChangedArgs_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
};

struct CFilterLOS {
    static constexpr std::size_t size = 0x4e0;
    std::uint8_t pad_0[0x4e0]; // 0x0
};

struct CPointOrient {
    static constexpr std::size_t size = 0x4c8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b4 
    std::uint8_t _[0x4]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4bc 
    std::uint8_t _[0x4]; // 0x4c0 
    std::uint8_t _[0x4]; // 0x4c4 
};

struct sky3dparams_t {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0xc]; // 0xc 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x68]; // 0x20 
    std::uint8_t _[0x8]; // 0x88 
};

struct CWeaponP250 {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x12a0]; // 0x0
};

struct CDestructiblePartsComponent {
    static constexpr std::size_t size = 0x70;
    std::uint8_t _[0x48]; // 0x0 
    std::uint8_t _[0x18]; // 0x48 
    std::uint8_t _[0x8]; // 0x60 
    std::uint8_t _[0x8]; // 0x68 
};

struct CChangeLevel {
    static constexpr std::size_t size = 0x9f8;
    std::uint8_t pad_0[0x9c8]; // 0x0
    std::uint8_t _[0x8]; // 0x9c8 
    std::uint8_t _[0x8]; // 0x9d0 
    std::uint8_t _[0x18]; // 0x9d8 
    std::uint8_t _[0x1]; // 0x9f0 
    std::uint8_t _[0x1]; // 0x9f1 
    std::uint8_t _[0x1]; // 0x9f2 
    std::uint8_t _[0x5]; // 0x9f3 
};

struct CBaseButton {
    static constexpr std::size_t size = 0x9d0;
    std::uint8_t pad_0[0x8d0]; // 0x0
    std::uint8_t _[0xc]; // 0x8d0 
    std::uint8_t _[0x1]; // 0x8dc 
    std::uint8_t _[0x3]; // 0x8dd 
    std::uint8_t _[0x20]; // 0x8e0 
    std::uint8_t _[0x8]; // 0x900 
    std::uint8_t _[0x8]; // 0x908 
    std::uint8_t _[0x8]; // 0x910 
    std::uint8_t _[0x8]; // 0x918 
    std::uint8_t _[0x1]; // 0x920 
    std::uint8_t _[0x3]; // 0x921 
    std::uint8_t _[0x4]; // 0x924 
    std::uint8_t _[0x4]; // 0x928 
    std::uint8_t _[0x4]; // 0x92c 
    std::uint8_t _[0x18]; // 0x930 
    std::uint8_t _[0x18]; // 0x948 
    std::uint8_t _[0x18]; // 0x960 
    std::uint8_t _[0x18]; // 0x978 
    std::uint8_t _[0x18]; // 0x990 
    std::uint8_t _[0x4]; // 0x9a8 
    std::uint8_t _[0x4]; // 0x9ac 
    std::uint8_t _[0x4]; // 0x9b0 
    std::uint8_t _[0x4]; // 0x9b4 
    std::uint8_t _[0x8]; // 0x9b8 
    std::uint8_t _[0x4]; // 0x9c0 
    std::uint8_t _[0x4]; // 0x9c4 
    std::uint8_t _[0x8]; // 0x9c8 
};

struct CPulseCell_SoundEventStart {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x8]; // 0x48 
};

struct CPulseCell_Step_DebugLog {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CItem_Healthshot {
    static constexpr std::size_t size = 0x1290;
    std::uint8_t pad_0[0x1290]; // 0x0
};

struct CBaseGrenade {
    static constexpr std::size_t size = 0xad0;
    std::uint8_t pad_0[0xa48]; // 0x0
    std::uint8_t _[0x8]; // 0xa48 
    std::uint8_t _[0x18]; // 0xa50 
    std::uint8_t _[0x18]; // 0xa68 
    std::uint8_t _[0x1]; // 0xa80 
    std::uint8_t _[0x1]; // 0xa81 
    std::uint8_t _[0x2]; // 0xa82 
    std::uint8_t _[0x4]; // 0xa84 
    std::uint8_t _[0x4]; // 0xa88 
    std::uint8_t _[0x4]; // 0xa8c 
    std::uint8_t _[0x8]; // 0xa90 
    std::uint8_t _[0x8]; // 0xa98 
    std::uint8_t _[0x8]; // 0xaa0 
    std::uint8_t _[0x18]; // 0xaa8 
    std::uint8_t _[0x4]; // 0xac0 
    std::uint8_t _[0xc]; // 0xac4 
};

struct CColorCorrectionVolume {
    static constexpr std::size_t size = 0xbe8;
    std::uint8_t pad_0[0x9c8]; // 0x0
    std::uint8_t _[0x4]; // 0x9c8 
    std::uint8_t _[0x4]; // 0x9cc 
    std::uint8_t _[0x4]; // 0x9d0 
    std::uint8_t _[0x200]; // 0x9d4 
    std::uint8_t _[0x4]; // 0xbd4 
    std::uint8_t _[0x4]; // 0xbd8 
    std::uint8_t _[0x4]; // 0xbdc 
    std::uint8_t _[0x8]; // 0xbe0 
};

struct CCSPlayerController_ActionTrackingServices {
    static constexpr std::size_t size = 0x460;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t _[0x88]; // 0x40 
    std::uint8_t _[0xc0]; // 0xc8 
    std::uint8_t _[0x4]; // 0x188 
    std::uint8_t _[0x4]; // 0x18c 
    std::uint8_t _[0x2d0]; // 0x190 
};

struct CBodyComponentBaseAnimGraph {
    static constexpr std::size_t size = 0xb30;
    std::uint8_t pad_0[0x4e0]; // 0x0
    std::uint8_t _[0x650]; // 0x4e0 
};

struct CPulseCell_BaseYieldingInflow {
    static constexpr std::size_t size = 0xd8;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x48]; // 0x48 
    std::uint8_t _[0x48]; // 0x90 
};

struct PulseNodeDynamicOutflows_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x18]; // 0x0 
};

struct CFogVolume {
    static constexpr std::size_t size = 0x878;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x8]; // 0x850 
    std::uint8_t _[0x8]; // 0x858 
    std::uint8_t _[0x10]; // 0x860 
    std::uint8_t _[0x1]; // 0x870 
    std::uint8_t _[0x7]; // 0x871 
};

struct CFuncRotating {
    static constexpr std::size_t size = 0x918;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x18]; // 0x850 
    std::uint8_t _[0x18]; // 0x868 
    std::uint8_t _[0x18]; // 0x880 
    std::uint8_t _[0xc]; // 0x898 
    std::uint8_t _[0x4]; // 0x8a4 
    std::uint8_t _[0x4]; // 0x8a8 
    std::uint8_t _[0x4]; // 0x8ac 
    std::uint8_t _[0x4]; // 0x8b0 
    std::uint8_t _[0x4]; // 0x8b4 
    std::uint8_t _[0x4]; // 0x8b8 
    std::uint8_t _[0x4]; // 0x8bc 
    std::uint8_t _[0x8]; // 0x8c0 
    std::uint8_t _[0x1]; // 0x8c8 
    std::uint8_t _[0x17]; // 0x8c9 
    std::uint8_t _[0xc]; // 0x8e0 
    std::uint8_t _[0xc]; // 0x8ec 
    std::uint8_t _[0x4]; // 0x8f8 
    std::uint8_t _[0xc]; // 0x8fc 
    std::uint8_t _[0x10]; // 0x908 
};

struct CTimerEntity {
    static constexpr std::size_t size = 0x518;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x18]; // 0x4a8 
    std::uint8_t _[0x18]; // 0x4c0 
    std::uint8_t _[0x18]; // 0x4d8 
    std::uint8_t _[0x4]; // 0x4f0 
    std::uint8_t _[0x4]; // 0x4f4 
    std::uint8_t _[0x4]; // 0x4f8 
    std::uint8_t _[0x4]; // 0x4fc 
    std::uint8_t _[0x4]; // 0x500 
    std::uint8_t _[0x4]; // 0x504 
    std::uint8_t _[0x4]; // 0x508 
    std::uint8_t _[0x4]; // 0x50c 
    std::uint8_t _[0x4]; // 0x510 
    std::uint8_t _[0x4]; // 0x514 
};

struct CBtActionMoveTo {
    static constexpr std::size_t size = 0xe8;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t _[0x8]; // 0x60 
    std::uint8_t _[0x8]; // 0x68 
    std::uint8_t _[0x8]; // 0x70 
    std::uint8_t _[0xc]; // 0x78 
    std::uint8_t _[0x1]; // 0x84 
    std::uint8_t _[0x3]; // 0x85 
    std::uint8_t _[0x8]; // 0x88 
    std::uint8_t _[0x18]; // 0x90 
    std::uint8_t _[0x18]; // 0xa8 
    std::uint8_t _[0x18]; // 0xc0 
    std::uint8_t _[0x4]; // 0xd8 
    std::uint8_t _[0x4]; // 0xdc 
    std::uint8_t _[0x4]; // 0xe0 
    std::uint8_t _[0x4]; // 0xe4 
};

struct CPlayer_MovementServices_Humanoid {
    static constexpr std::size_t size = 0x290;
    std::uint8_t pad_0[0x258]; // 0x0
    std::uint8_t _[0x4]; // 0x258 
    std::uint8_t _[0x4]; // 0x25c 
    std::uint8_t _[0xc]; // 0x260 
    std::uint8_t _[0x4]; // 0x26c 
    std::uint8_t _[0x10]; // 0x270 
    std::uint8_t _[0x4]; // 0x280 
    std::uint8_t _[0xc]; // 0x284 
};

struct CPulseCell_IsRequirementValid__Criteria_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t _[0x1]; // 0x0 
};

struct CWeaponG3SG1 {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x12a0]; // 0x0
};

struct CTriggerOnce {
    static constexpr std::size_t size = 0x9e0;
    std::uint8_t pad_0[0x9e0]; // 0x0
};

struct CSMatchStats_t {
    static constexpr std::size_t size = 0xc0;
    std::uint8_t pad_0[0x68]; // 0x0
    std::uint8_t _[0x4]; // 0x68 
    std::uint8_t _[0x4]; // 0x6c 
    std::uint8_t _[0x4]; // 0x70 
    std::uint8_t _[0x4]; // 0x74 
    std::uint8_t _[0x4]; // 0x78 
    std::uint8_t _[0x4]; // 0x7c 
    std::uint8_t _[0x4]; // 0x80 
    std::uint8_t _[0x4]; // 0x84 
    std::uint8_t _[0x4]; // 0x88 
    std::uint8_t _[0x4]; // 0x8c 
    std::uint8_t _[0x4]; // 0x90 
    std::uint8_t _[0x4]; // 0x94 
    std::uint8_t _[0x4]; // 0x98 
    std::uint8_t _[0x4]; // 0x9c 
    std::uint8_t _[0x4]; // 0xa0 
    std::uint8_t _[0x4]; // 0xa4 
    std::uint8_t _[0x4]; // 0xa8 
    std::uint8_t _[0x4]; // 0xac 
    std::uint8_t _[0x4]; // 0xb0 
    std::uint8_t _[0x4]; // 0xb4 
    std::uint8_t _[0x8]; // 0xb8 
};

struct EntityRenderAttribute_t {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x14]; // 0x34 
};

struct CPulseCell_Inflow_ObservableVariableListener {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t _[0x2]; // 0x80 
    std::uint8_t _[0x6]; // 0x82 
};

struct CFuncMonitor {
    static constexpr std::size_t size = 0x890;
    std::uint8_t pad_0[0x870]; // 0x0
    std::uint8_t _[0x8]; // 0x870 
    std::uint8_t _[0x4]; // 0x878 
    std::uint8_t _[0x1]; // 0x87c 
    std::uint8_t _[0x3]; // 0x87d 
    std::uint8_t _[0x8]; // 0x880 
    std::uint8_t _[0x4]; // 0x888 
    std::uint8_t _[0x1]; // 0x88c 
    std::uint8_t _[0x1]; // 0x88d 
    std::uint8_t _[0x2]; // 0x88e 
};

struct CInfoVisibilityBox {
    static constexpr std::size_t size = 0x4c0;
    std::uint8_t pad_0[0x4ac]; // 0x0
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0xc]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4bc 
};

struct CGunTarget {
    static constexpr std::size_t size = 0x8f8;
    std::uint8_t pad_0[0x8d0]; // 0x0
    std::uint8_t _[0x4]; // 0x8d0 
    std::uint8_t _[0x4]; // 0x8d4 
    std::uint8_t _[0x8]; // 0x8d8 
    std::uint8_t _[0x18]; // 0x8e0 
};

struct CSoundEventConeEntity {
    static constexpr std::size_t size = 0x580;
    std::uint8_t pad_0[0x568]; // 0x0
    std::uint8_t _[0x4]; // 0x568 
    std::uint8_t _[0x4]; // 0x56c 
    std::uint8_t _[0x4]; // 0x570 
    std::uint8_t _[0x4]; // 0x574 
    std::uint8_t _[0x8]; // 0x578 
};

struct CSoundOpvarSetOBBEntity {
    static constexpr std::size_t size = 0x6a8;
    std::uint8_t pad_0[0x6a8]; // 0x0
};

struct CDecoyProjectile {
    static constexpr std::size_t size = 0xb80;
    std::uint8_t pad_0[0xb58]; // 0x0
    std::uint8_t _[0x4]; // 0xb58 
    std::uint8_t _[0x4]; // 0xb5c 
    std::uint8_t _[0x10]; // 0xb60 
    std::uint8_t _[0x10]; // 0xb70 
};

struct CPrecipitationBlocker {
    static constexpr std::size_t size = 0x850;
    std::uint8_t pad_0[0x850]; // 0x0
};

struct CSoundOpvarSetPathCornerEntity {
    static constexpr std::size_t size = 0x670;
    std::uint8_t pad_0[0x658]; // 0x0
    std::uint8_t _[0x4]; // 0x658 
    std::uint8_t _[0x4]; // 0x65c 
    std::uint8_t _[0x8]; // 0x660 
    std::uint8_t _[0x8]; // 0x668 
};

struct CPointClientCommand {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CCSGO_RushIntroTerroristPosition {
    static constexpr std::size_t size = 0x1468;
    std::uint8_t pad_0[0x1468]; // 0x0
};

struct CPulseCell_ApplyParent__CursorState_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct CHostageRescueZone {
    static constexpr std::size_t size = 0x9e8;
    std::uint8_t pad_0[0x9e8]; // 0x0
};

struct CWorld {
    static constexpr std::size_t size = 0x850;
    std::uint8_t pad_0[0x850]; // 0x0
};

struct CPathMoverEntitySpawner {
    static constexpr std::size_t size = 0x5b0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x20]; // 0x4b0 
    std::uint8_t _[0x10]; // 0x4d0 
    std::uint8_t _[0x10]; // 0x4e0 
    std::uint8_t _[0x4]; // 0x4f0 
    std::uint8_t _[0x4]; // 0x4f4 
    std::uint8_t _[0x4]; // 0x4f8 
    std::uint8_t _[0x4]; // 0x4fc 
    std::uint8_t _[0x20]; // 0x500 
    std::uint8_t _[0x4]; // 0x520 
    std::uint8_t _[0x4]; // 0x524 
    std::uint8_t _[0x4]; // 0x528 
    std::uint8_t _[0x1]; // 0x52c 
    std::uint8_t _[0x3]; // 0x52d 
    std::uint8_t _[0x18]; // 0x530 
    std::uint8_t _[0x18]; // 0x548 
    std::uint8_t _[0x18]; // 0x560 
    std::uint8_t _[0x8]; // 0x578 
    std::uint8_t _[0x8]; // 0x580 
    std::uint8_t _[0x14]; // 0x588 
    std::uint8_t _[0xc]; // 0x59c 
    std::uint8_t _[0x8]; // 0x5a8 
};

struct CModelState {
    static constexpr std::size_t size = 0x290;
    std::uint8_t pad_0[0xa0]; // 0x0
    std::uint8_t _[0x8]; // 0xa0 
    std::uint8_t _[0x38]; // 0xa8 
    std::uint8_t _[0x8]; // 0xe0 
    std::uint8_t _[0x4]; // 0xe8 
    std::uint8_t _[0x4]; // 0xec 
    std::uint8_t _[0x4]; // 0xf0 
    std::uint8_t _[0x1]; // 0xf4 
    std::uint8_t _[0xeb]; // 0xf5 
    std::uint8_t _[0x8]; // 0x1e0 
    std::uint8_t _[0x50]; // 0x1e8 
    std::uint8_t _[0x4a]; // 0x238 
    std::uint8_t _[0x1]; // 0x282 
    std::uint8_t _[0x1]; // 0x283 
    std::uint8_t _[0xc]; // 0x284 
};

struct CBaseModelEntity__BodyGroupRequest_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x2]; // 0x14 
    std::uint8_t _[0x2]; // 0x16 
};

struct CPulseCell_LerpCameraSettings__CursorState_t {
    static constexpr std::size_t size = 0x2c;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x10]; // 0xc 
    std::uint8_t _[0x10]; // 0x1c 
};

struct CPulseCell_Outflow_CycleOrdered {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x18]; // 0x48 
};

struct CWeaponGlock {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x12a0]; // 0x0
};

struct CHEGrenadeProjectile {
    static constexpr std::size_t size = 0xb40;
    std::uint8_t pad_0[0xb40]; // 0x0
};

struct CTriggerGravity {
    static constexpr std::size_t size = 0x9c8;
    std::uint8_t pad_0[0x9c8]; // 0x0
};

struct CCollisionProperty {
    static constexpr std::size_t size = 0xb8;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x30]; // 0x10 
    std::uint8_t _[0xc]; // 0x40 
    std::uint8_t _[0xe]; // 0x4c 
    std::uint8_t _[0x1]; // 0x5a 
    std::uint8_t _[0x1]; // 0x5b 
    std::uint8_t _[0x1]; // 0x5c 
    std::uint8_t _[0x1]; // 0x5d 
    std::uint8_t _[0x1]; // 0x5e 
    std::uint8_t _[0x1]; // 0x5f 
    std::uint8_t _[0x4]; // 0x60 
    std::uint8_t _[0xc]; // 0x64 
    std::uint8_t _[0xc]; // 0x70 
    std::uint8_t _[0xc]; // 0x7c 
    std::uint8_t _[0xc]; // 0x88 
    std::uint8_t _[0xc]; // 0x94 
    std::uint8_t _[0xc]; // 0xa0 
    std::uint8_t _[0xc]; // 0xac 
};

struct CWeaponGalilAR {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x12a0]; // 0x0
};

struct CFilterMassGreater {
    static constexpr std::size_t size = 0x4e8;
    std::uint8_t pad_0[0x4e0]; // 0x0
    std::uint8_t _[0x8]; // 0x4e0 
};

struct CWeaponMP7 {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x12a0]; // 0x0
};

struct CCSWeaponBaseGun {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x1280]; // 0x0
    std::uint8_t _[0x4]; // 0x1280 
    std::uint8_t _[0xc]; // 0x1284 
    std::uint8_t _[0x4]; // 0x1290 
    std::uint8_t _[0x1]; // 0x1294 
    std::uint8_t _[0x3]; // 0x1295 
    std::uint8_t _[0x4]; // 0x1298 
    std::uint8_t _[0x1]; // 0x129c 
    std::uint8_t _[0x1]; // 0x129d 
    std::uint8_t _[0x1]; // 0x129e 
    std::uint8_t _[0x1]; // 0x129f 
};

struct CEnableMotionFixup {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CLogicActiveAutosave {
    static constexpr std::size_t size = 0x4c8;
    std::uint8_t pad_0[0x4b8]; // 0x0
    std::uint8_t _[0x4]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4bc 
    std::uint8_t _[0x4]; // 0x4c0 
    std::uint8_t _[0x4]; // 0x4c4 
};

struct CMathCounter {
    static constexpr std::size_t size = 0x558;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x1]; // 0x4b0 
    std::uint8_t _[0x1]; // 0x4b1 
    std::uint8_t _[0x6]; // 0x4b2 
    std::uint8_t _[0x20]; // 0x4b8 
    std::uint8_t _[0x20]; // 0x4d8 
    std::uint8_t _[0x18]; // 0x4f8 
    std::uint8_t _[0x18]; // 0x510 
    std::uint8_t _[0x18]; // 0x528 
    std::uint8_t _[0x18]; // 0x540 
};

struct CCSCustomPlayerCamera {
    static constexpr std::size_t size = 0x4e0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b4 
    std::uint8_t _[0xc]; // 0x4b8 
    std::uint8_t _[0xc]; // 0x4c4 
    std::uint8_t _[0x4]; // 0x4d0 
    std::uint8_t _[0xc]; // 0x4d4 
};

struct CCSGameModeRules_ArmsRace {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x58]; // 0x30 
};

struct CLogicPlayerProxyBase {
    static constexpr std::size_t size = 0x518;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x18]; // 0x4a8 
    std::uint8_t _[0x18]; // 0x4c0 
    std::uint8_t _[0x18]; // 0x4d8 
    std::uint8_t _[0x20]; // 0x4f0 
    std::uint8_t _[0x8]; // 0x510 
};

struct CAttributeContainer {
    static constexpr std::size_t size = 0x438;
    std::uint8_t pad_0[0x50]; // 0x0
    std::uint8_t _[0x3e8]; // 0x50 
};

struct CCSPlace {
    static constexpr std::size_t size = 0x870;
    std::uint8_t pad_0[0x868]; // 0x0
    std::uint8_t _[0x8]; // 0x868 
};

struct CPulseCell_ApplyParent {
    static constexpr std::size_t size = 0xd8;
    std::uint8_t pad_0[0xd8]; // 0x0
};

struct PulseSelectorOutflowList_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x18]; // 0x0 
};

struct CFilterContext {
    static constexpr std::size_t size = 0x4e8;
    std::uint8_t pad_0[0x4e0]; // 0x0
    std::uint8_t _[0x8]; // 0x4e0 
};

struct CLightEnvironmentEntity {
    static constexpr std::size_t size = 0x858;
    std::uint8_t pad_0[0x858]; // 0x0
};

struct CEnvDecal {
    static constexpr std::size_t size = 0x870;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x8]; // 0x850 
    std::uint8_t _[0x4]; // 0x858 
    std::uint8_t _[0x4]; // 0x85c 
    std::uint8_t _[0x4]; // 0x860 
    std::uint8_t _[0x4]; // 0x864 
    std::uint8_t _[0x1]; // 0x868 
    std::uint8_t _[0x1]; // 0x869 
    std::uint8_t _[0x2]; // 0x86a 
    std::uint8_t _[0x4]; // 0x86c 
};

struct CEnvVolumetricFogVolume {
    static constexpr std::size_t size = 0x4f0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0xc]; // 0x4ac 
    std::uint8_t _[0xc]; // 0x4b8 
    std::uint8_t _[0x1]; // 0x4c4 
    std::uint8_t _[0x3]; // 0x4c5 
    std::uint8_t _[0x4]; // 0x4c8 
    std::uint8_t _[0x4]; // 0x4cc 
    std::uint8_t _[0x4]; // 0x4d0 
    std::uint8_t _[0x4]; // 0x4d4 
    std::uint8_t _[0x4]; // 0x4d8 
    std::uint8_t _[0x4]; // 0x4dc 
    std::uint8_t _[0x4]; // 0x4e0 
    std::uint8_t _[0x4]; // 0x4e4 
    std::uint8_t _[0x4]; // 0x4e8 
    std::uint8_t _[0x1]; // 0x4ec 
    std::uint8_t _[0x1]; // 0x4ed 
    std::uint8_t _[0x1]; // 0x4ee 
    std::uint8_t _[0x1]; // 0x4ef 
};

struct CServerOnlyEntity {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CPulseCell_PlaySequence__CursorState_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CBodyComponentSkeletonInstance {
    static constexpr std::size_t size = 0x4e0;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t _[0x460]; // 0x80 
};

struct CItemGeneric {
    static constexpr std::size_t size = 0xc10;
    std::uint8_t pad_0[0xaf4]; // 0x0
    std::uint8_t _[0x1]; // 0xaf4 
    std::uint8_t _[0x3]; // 0xaf5 
    std::uint8_t _[0x4]; // 0xaf8 
    std::uint8_t _[0x4]; // 0xafc 
    std::uint8_t _[0x4]; // 0xb00 
    std::uint8_t _[0x1]; // 0xb04 
    std::uint8_t _[0x3]; // 0xb05 
    std::uint8_t _[0x8]; // 0xb08 
    std::uint8_t _[0x8]; // 0xb10 
    std::uint8_t _[0x8]; // 0xb18 
    std::uint8_t _[0x8]; // 0xb20 
    std::uint8_t _[0x8]; // 0xb28 
    std::uint8_t _[0x8]; // 0xb30 
    std::uint8_t _[0x8]; // 0xb38 
    std::uint8_t _[0x8]; // 0xb40 
    std::uint8_t _[0x8]; // 0xb48 
    std::uint8_t _[0x8]; // 0xb50 
    std::uint8_t _[0x8]; // 0xb58 
    std::uint8_t _[0x8]; // 0xb60 
    std::uint8_t _[0x18]; // 0xb68 
    std::uint8_t _[0x18]; // 0xb80 
    std::uint8_t _[0x18]; // 0xb98 
    std::uint8_t _[0x18]; // 0xbb0 
    std::uint8_t _[0x18]; // 0xbc8 
    std::uint8_t _[0x8]; // 0xbe0 
    std::uint8_t _[0x4]; // 0xbe8 
    std::uint8_t _[0x4]; // 0xbec 
    std::uint8_t _[0x8]; // 0xbf0 
    std::uint8_t _[0x4]; // 0xbf8 
    std::uint8_t _[0x4]; // 0xbfc 
    std::uint8_t _[0x4]; // 0xc00 
    std::uint8_t _[0xc]; // 0xc04 
};

struct CPointValueRemapper {
    static constexpr std::size_t size = 0x650;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x1]; // 0x4a8 
    std::uint8_t _[0x3]; // 0x4a9 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x8]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4c0 
    std::uint8_t _[0x4]; // 0x4c4 
    std::uint8_t _[0x4]; // 0x4c8 
    std::uint8_t _[0x4]; // 0x4cc 
    std::uint8_t _[0x4]; // 0x4d0 
    std::uint8_t _[0x4]; // 0x4d4 
    std::uint8_t _[0x8]; // 0x4d8 
    std::uint8_t _[0x8]; // 0x4e0 
    std::uint8_t _[0x8]; // 0x4e8 
    std::uint8_t _[0x8]; // 0x4f0 
    std::uint8_t _[0x8]; // 0x4f8 
    std::uint8_t _[0x18]; // 0x500 
    std::uint8_t _[0x4]; // 0x518 
    std::uint8_t _[0x4]; // 0x51c 
    std::uint8_t _[0x4]; // 0x520 
    std::uint8_t _[0x4]; // 0x524 
    std::uint8_t _[0x4]; // 0x528 
    std::uint8_t _[0x4]; // 0x52c 
    std::uint8_t _[0x4]; // 0x530 
    std::uint8_t _[0x4]; // 0x534 
    std::uint8_t _[0x1]; // 0x538 
    std::uint8_t _[0x3]; // 0x539 
    std::uint8_t _[0x4]; // 0x53c 
    std::uint8_t _[0x4]; // 0x540 
    std::uint8_t _[0xc]; // 0x544 
    std::uint8_t _[0x4]; // 0x550 
    std::uint8_t _[0x4]; // 0x554 
    std::uint8_t _[0x8]; // 0x558 
    std::uint8_t _[0x8]; // 0x560 
    std::uint8_t _[0x8]; // 0x568 
    std::uint8_t _[0x8]; // 0x570 
    std::uint8_t _[0x20]; // 0x578 
    std::uint8_t _[0x20]; // 0x598 
    std::uint8_t _[0x20]; // 0x5b8 
    std::uint8_t _[0x18]; // 0x5d8 
    std::uint8_t _[0x18]; // 0x5f0 
    std::uint8_t _[0x18]; // 0x608 
    std::uint8_t _[0x18]; // 0x620 
    std::uint8_t _[0x18]; // 0x638 
};

struct CBtNodeConditionInactive {
    static constexpr std::size_t size = 0x98;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t _[0x4]; // 0x78 
    std::uint8_t _[0x4]; // 0x7c 
    std::uint8_t _[0x18]; // 0x80 
};

struct CCSGO_TeamIntroCounterTerroristPosition {
    static constexpr std::size_t size = 0x1468;
    std::uint8_t pad_0[0x1468]; // 0x0
};

struct CRagdollProp {
    static constexpr std::size_t size = 0xc00;
    std::uint8_t pad_0[0xa50]; // 0x0
    std::uint8_t _[0x40]; // 0xa50 
    std::uint8_t _[0x50]; // 0xa90 
    std::uint8_t _[0x4]; // 0xae0 
    std::uint8_t _[0x4]; // 0xae4 
    std::uint8_t _[0x8]; // 0xae8 
    std::uint8_t _[0x18]; // 0xaf0 
    std::uint8_t _[0x18]; // 0xb08 
    std::uint8_t _[0x18]; // 0xb20 
    std::uint8_t _[0x4]; // 0xb38 
    std::uint8_t _[0x1]; // 0xb3c 
    std::uint8_t _[0x3]; // 0xb3d 
    std::uint8_t _[0x4]; // 0xb40 
    std::uint8_t _[0x1]; // 0xb44 
    std::uint8_t _[0x1]; // 0xb45 
    std::uint8_t _[0x2]; // 0xb46 
    std::uint8_t _[0x4]; // 0xb48 
    std::uint8_t _[0x4]; // 0xb4c 
    std::uint8_t _[0x4]; // 0xb50 
    std::uint8_t _[0x4]; // 0xb54 
    std::uint8_t _[0x4]; // 0xb58 
    std::uint8_t _[0x4]; // 0xb5c 
    std::uint8_t _[0xc]; // 0xb60 
    std::uint8_t _[0x4]; // 0xb6c 
    std::uint8_t _[0x8]; // 0xb70 
    std::uint8_t _[0x8]; // 0xb78 
    std::uint8_t _[0x8]; // 0xb80 
    std::uint8_t _[0x1]; // 0xb88 
    std::uint8_t _[0x3]; // 0xb89 
    std::uint8_t _[0x4]; // 0xb8c 
    std::uint8_t _[0x8]; // 0xb90 
    std::uint8_t _[0x18]; // 0xb98 
    std::uint8_t _[0x18]; // 0xbb0 
    std::uint8_t _[0x18]; // 0xbc8 
    std::uint8_t _[0x20]; // 0xbe0 
};

struct CScriptComponent {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x8]; // 0x30 
};

struct CFuncTrain {
    static constexpr std::size_t size = 0x920;
    std::uint8_t pad_0[0x8f8]; // 0x0
    std::uint8_t _[0x4]; // 0x8f8 
    std::uint8_t _[0x4]; // 0x8fc 
    std::uint8_t _[0x4]; // 0x900 
    std::uint8_t _[0x4]; // 0x904 
    std::uint8_t _[0x8]; // 0x908 
    std::uint8_t _[0x8]; // 0x910 
    std::uint8_t _[0x8]; // 0x918 
};

struct CAI_ChangeHintGroup {
    static constexpr std::size_t size = 0x4c8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x8]; // 0x4b8 
    std::uint8_t _[0x8]; // 0x4c0 
};

struct CCSPlayer_BuyServices {
    static constexpr std::size_t size = 0x158;
    std::uint8_t pad_0[0xd0]; // 0x0
    std::uint8_t _[0x88]; // 0xd0 
};

struct CWeaponAug {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x12a0]; // 0x0
};

struct CPhysHinge {
    static constexpr std::size_t size = 0x678;
    std::uint8_t pad_0[0x510]; // 0x0
    std::uint8_t _[0x98]; // 0x510 
    std::uint8_t _[0x18]; // 0x5a8 
    std::uint8_t _[0x18]; // 0x5c0 
    std::uint8_t _[0x1]; // 0x5d8 
    std::uint8_t _[0x3]; // 0x5d9 
    std::uint8_t _[0x40]; // 0x5dc 
    std::uint8_t _[0x4]; // 0x61c 
    std::uint8_t _[0x4]; // 0x620 
    std::uint8_t _[0x4]; // 0x624 
    std::uint8_t _[0x4]; // 0x628 
    std::uint8_t _[0x4]; // 0x62c 
    std::uint8_t _[0x4]; // 0x630 
    std::uint8_t _[0x4]; // 0x634 
    std::uint8_t _[0x4]; // 0x638 
    std::uint8_t _[0x4]; // 0x63c 
    std::uint8_t _[0x4]; // 0x640 
    std::uint8_t _[0x4]; // 0x644 
    std::uint8_t _[0x18]; // 0x648 
    std::uint8_t _[0x18]; // 0x660 
};

struct CBuyZone {
    static constexpr std::size_t size = 0x9d0;
    std::uint8_t pad_0[0x9c8]; // 0x0
    std::uint8_t _[0x8]; // 0x9c8 
};

struct CInfoChoreoAnchor {
    static constexpr std::size_t size = 0x4d8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x18]; // 0x4a8 
    std::uint8_t _[0x18]; // 0x4c0 
};

struct CWeaponSSG08 {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x12a0]; // 0x0
};

struct CInfoWorldLayer {
    static constexpr std::size_t size = 0x4d8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x18]; // 0x4a8 
    std::uint8_t _[0x8]; // 0x4c0 
    std::uint8_t _[0x8]; // 0x4c8 
    std::uint8_t _[0x1]; // 0x4d0 
    std::uint8_t _[0x1]; // 0x4d1 
    std::uint8_t _[0x2]; // 0x4d2 
    std::uint8_t _[0x4]; // 0x4d4 
};

struct CBodyComponentBaseModelEntity {
    static constexpr std::size_t size = 0x4e0;
    std::uint8_t pad_0[0x4e0]; // 0x0
};

struct CLogicProximity {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CPointGiveAmmo {
    static constexpr std::size_t size = 0x4b0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
};

struct CCSGO_EndOfMatchLineupStart {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct FilterDamageType {
    static constexpr std::size_t size = 0x4e8;
    std::uint8_t pad_0[0x4e0]; // 0x0
    std::uint8_t _[0x8]; // 0x4e0 
};

struct CPointCamera {
    static constexpr std::size_t size = 0x508;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b4 
    std::uint8_t _[0x4]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4bc 
    std::uint8_t _[0x4]; // 0x4c0 
    std::uint8_t _[0x1]; // 0x4c4 
    std::uint8_t _[0x3]; // 0x4c5 
    std::uint8_t _[0x4]; // 0x4c8 
    std::uint8_t _[0x4]; // 0x4cc 
    std::uint8_t _[0x4]; // 0x4d0 
    std::uint8_t _[0x4]; // 0x4d4 
    std::uint8_t _[0x4]; // 0x4d8 
    std::uint8_t _[0x1]; // 0x4dc 
    std::uint8_t _[0x1]; // 0x4dd 
    std::uint8_t _[0x2]; // 0x4de 
    std::uint8_t _[0x4]; // 0x4e0 
    std::uint8_t _[0x4]; // 0x4e4 
    std::uint8_t _[0x4]; // 0x4e8 
    std::uint8_t _[0x4]; // 0x4ec 
    std::uint8_t _[0x4]; // 0x4f0 
    std::uint8_t _[0x4]; // 0x4f4 
    std::uint8_t _[0x4]; // 0x4f8 
    std::uint8_t _[0x4]; // 0x4fc 
    std::uint8_t _[0x8]; // 0x500 
};

struct CAttributeList {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x68]; // 0x8 
    std::uint8_t _[0x8]; // 0x70 
};

struct CPulseCell_Inflow_Wait {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x48]; // 0xd8 
};

struct CFilterProximity {
    static constexpr std::size_t size = 0x4e8;
    std::uint8_t pad_0[0x4e0]; // 0x0
    std::uint8_t _[0x8]; // 0x4e0 
};

struct CCS2WeaponGraphController {
    static constexpr std::size_t size = 0x5c0;
    std::uint8_t pad_0[0xc0]; // 0x0
    std::uint8_t _[0x18]; // 0xc0 
    std::uint8_t _[0x18]; // 0xd8 
    std::uint8_t _[0x18]; // 0xf0 
    std::uint8_t _[0x18]; // 0x108 
    std::uint8_t _[0x18]; // 0x120 
    std::uint8_t _[0x18]; // 0x138 
    std::uint8_t _[0x18]; // 0x150 
    std::uint8_t _[0x18]; // 0x168 
    std::uint8_t _[0x18]; // 0x180 
    std::uint8_t _[0x18]; // 0x198 
    std::uint8_t _[0x18]; // 0x1b0 
    std::uint8_t _[0x18]; // 0x1c8 
    std::uint8_t _[0x18]; // 0x1e0 
    std::uint8_t _[0x18]; // 0x1f8 
    std::uint8_t _[0x18]; // 0x210 
    std::uint8_t _[0x18]; // 0x228 
    std::uint8_t _[0x18]; // 0x240 
    std::uint8_t _[0x18]; // 0x258 
    std::uint8_t _[0x18]; // 0x270 
    std::uint8_t _[0x338]; // 0x288 
};

struct CEffectData {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0xc]; // 0x8 
    std::uint8_t _[0xc]; // 0x14 
    std::uint8_t _[0xc]; // 0x20 
    std::uint8_t _[0xc]; // 0x2c 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x4]; // 0x44 
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x8]; // 0x50 
    std::uint8_t _[0x4]; // 0x58 
    std::uint8_t _[0x2]; // 0x5c 
    std::uint8_t _[0x2]; // 0x5e 
    std::uint8_t _[0x2]; // 0x60 
    std::uint8_t _[0x1]; // 0x62 
    std::uint8_t _[0x1]; // 0x63 
    std::uint8_t _[0x4]; // 0x64 
    std::uint8_t _[0x4]; // 0x68 
    std::uint8_t _[0x4]; // 0x6c 
};

struct CEntityDissolve {
    static constexpr std::size_t size = 0x880;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x4]; // 0x850 
    std::uint8_t _[0x4]; // 0x854 
    std::uint8_t _[0x4]; // 0x858 
    std::uint8_t _[0x4]; // 0x85c 
    std::uint8_t _[0x4]; // 0x860 
    std::uint8_t _[0x4]; // 0x864 
    std::uint8_t _[0x4]; // 0x868 
    std::uint8_t _[0x4]; // 0x86c 
    std::uint8_t _[0xc]; // 0x870 
    std::uint8_t _[0x4]; // 0x87c 
};

struct CCSGameRules {
    static constexpr std::size_t size = 0x11450;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x1]; // 0xd8 
    std::uint8_t _[0x3]; // 0xd9 
    std::uint8_t _[0x4]; // 0xdc 
    std::uint8_t _[0x4]; // 0xe0 
    std::uint8_t _[0x1]; // 0xe4 
    std::uint8_t _[0x3]; // 0xe5 
    std::uint8_t _[0x4]; // 0xe8 
    std::uint8_t _[0x4]; // 0xec 
    std::uint8_t _[0x4]; // 0xf0 
    std::uint8_t _[0x4]; // 0xf4 
    std::uint8_t _[0x1]; // 0xf8 
    std::uint8_t _[0x3]; // 0xf9 
    std::uint8_t _[0x4]; // 0xfc 
    std::uint8_t _[0x4]; // 0x100 
    std::uint8_t _[0x4]; // 0x104 
    std::uint8_t _[0x4]; // 0x108 
    std::uint8_t _[0x4]; // 0x10c 
    std::uint8_t _[0x4]; // 0x110 
    std::uint8_t _[0x4]; // 0x114 
    std::uint8_t _[0x4]; // 0x118 
    std::uint8_t _[0x4]; // 0x11c 
    std::uint8_t _[0x4]; // 0x120 
    std::uint8_t _[0x4]; // 0x124 
    std::uint8_t _[0x4]; // 0x128 
    std::uint8_t _[0x4]; // 0x12c 
    std::uint8_t _[0x1]; // 0x130 
    std::uint8_t _[0x1]; // 0x131 
    std::uint8_t _[0x1]; // 0x132 
    std::uint8_t _[0x1]; // 0x133 
    std::uint8_t _[0x4]; // 0x134 
    std::uint8_t _[0x4]; // 0x138 
    std::uint8_t _[0x1]; // 0x13c 
    std::uint8_t _[0x1]; // 0x13d 
    std::uint8_t _[0x2]; // 0x13e 
    std::uint8_t _[0x4]; // 0x140 
    std::uint8_t _[0x4]; // 0x144 
    std::uint8_t _[0x4]; // 0x148 
    std::uint8_t _[0x4]; // 0x14c 
    std::uint8_t _[0x200]; // 0x150 
    std::uint8_t _[0x200]; // 0x350 
    std::uint8_t _[0x200]; // 0x550 
    std::uint8_t _[0x200]; // 0x750 
    std::uint8_t _[0x4]; // 0x950 
    std::uint8_t _[0x4]; // 0x954 
    std::uint8_t _[0x4]; // 0x958 
    std::uint8_t _[0x1]; // 0x95c 
    std::uint8_t _[0x1]; // 0x95d 
    std::uint8_t _[0x1]; // 0x95e 
    std::uint8_t _[0x1]; // 0x95f 
    std::uint8_t _[0xc8]; // 0x960 
    std::uint8_t _[0x10]; // 0xa28 
    std::uint8_t _[0x4]; // 0xa38 
    std::uint8_t _[0x4]; // 0xa3c 
    std::uint8_t _[0x4]; // 0xa40 
    std::uint8_t _[0x4]; // 0xa44 
    std::uint8_t _[0x4]; // 0xa48 
    std::uint8_t _[0x1]; // 0xa4c 
    std::uint8_t _[0x3]; // 0xa4d 
    std::uint8_t _[0x78]; // 0xa50 
    std::uint8_t _[0x78]; // 0xac8 
    std::uint8_t _[0x78]; // 0xb40 
    std::uint8_t _[0x80]; // 0xbb8 
    std::uint8_t _[0x4]; // 0xc38 
    std::uint8_t _[0x80]; // 0xc3c 
    std::uint8_t _[0xc]; // 0xcbc 
    std::uint8_t _[0xc]; // 0xcc8 
    std::uint8_t _[0x24]; // 0xcd4 
    std::uint8_t _[0x8]; // 0xcf8 
    std::uint8_t _[0x28]; // 0xd00 
    std::uint8_t _[0x28]; // 0xd28 
    std::uint8_t _[0x4]; // 0xd50 
    std::uint8_t _[0x4]; // 0xd54 
    std::uint8_t _[0x20]; // 0xd58 
    std::uint8_t _[0x4]; // 0xd78 
    std::uint8_t _[0x4]; // 0xd7c 
    std::uint8_t _[0x4]; // 0xd80 
    std::uint8_t _[0x4]; // 0xd84 
    std::uint8_t _[0x4]; // 0xd88 
    std::uint8_t _[0x4]; // 0xd8c 
    std::uint8_t _[0x1]; // 0xd90 
    std::uint8_t _[0x3]; // 0xd91 
    std::uint8_t _[0x4]; // 0xd94 
    std::uint8_t _[0x4]; // 0xd98 
    std::uint8_t _[0x4]; // 0xd9c 
    std::uint8_t _[0x8]; // 0xda0 
    std::uint8_t _[0x18]; // 0xda8 
    std::uint8_t _[0x4]; // 0xdc0 
    std::uint8_t _[0x1]; // 0xdc4 
    std::uint8_t _[0x1]; // 0xdc5 
    std::uint8_t _[0x1]; // 0xdc6 
    std::uint8_t _[0x1]; // 0xdc7 
    std::uint8_t _[0x8]; // 0xdc8 
    std::uint8_t _[0x1c]; // 0xdd0 
    std::uint8_t _[0x4]; // 0xdec 
    std::uint8_t _[0x4]; // 0xdf0 
    std::uint8_t _[0x4]; // 0xdf4 
    std::uint8_t _[0x8]; // 0xdf8 
    std::uint8_t _[0x4]; // 0xe00 
    std::uint8_t _[0x4]; // 0xe04 
    std::uint8_t _[0x4]; // 0xe08 
    std::uint8_t _[0xc]; // 0xe0c 
    std::uint8_t _[0x4]; // 0xe18 
    std::uint8_t _[0x4]; // 0xe1c 
    std::uint8_t _[0x4]; // 0xe20 
    std::uint8_t _[0x1]; // 0xe24 
    std::uint8_t _[0x33]; // 0xe25 
    std::uint8_t _[0x4]; // 0xe58 
    std::uint8_t _[0x1c]; // 0xe5c 
    std::uint8_t _[0x4]; // 0xe78 
    std::uint8_t _[0x4]; // 0xe7c 
    std::uint8_t _[0x4]; // 0xe80 
    std::uint8_t _[0x4]; // 0xe84 
    std::uint8_t _[0x4]; // 0xe88 
    std::uint8_t _[0x4]; // 0xe8c 
    std::uint8_t _[0x4]; // 0xe90 
    std::uint8_t _[0x4]; // 0xe94 
    std::uint8_t _[0x4]; // 0xe98 
    std::uint8_t _[0x4]; // 0xe9c 
    std::uint8_t _[0x4]; // 0xea0 
    std::uint8_t _[0x4]; // 0xea4 
    std::uint8_t _[0x8]; // 0xea8 
    std::uint8_t _[0x4]; // 0xeb0 
    std::uint8_t _[0x4]; // 0xeb4 
    std::uint8_t _[0x4]; // 0xeb8 
    std::uint8_t _[0x1]; // 0xebc 
    std::uint8_t _[0x1]; // 0xebd 
    std::uint8_t _[0x1]; // 0xebe 
    std::uint8_t _[0x5]; // 0xebf 
    std::uint8_t _[0x8]; // 0xec4 
    std::uint8_t _[0x1c]; // 0xecc 
    std::uint8_t _[0x1]; // 0xee8 
    std::uint8_t _[0xf]; // 0xee9 
    std::uint8_t _[0x1]; // 0xef8 
    std::uint8_t _[0x3]; // 0xef9 
    std::uint8_t _[0x4]; // 0xefc 
    std::uint8_t _[0x4]; // 0xf00 
    std::uint8_t _[0x4]; // 0xf04 
    std::uint8_t _[0x1]; // 0xf08 
    std::uint8_t _[0x1]; // 0xf09 
    std::uint8_t _[0x4e]; // 0xf0a 
    std::uint8_t _[0x10]; // 0xf58 
    std::uint8_t _[0x18]; // 0xf68 
    std::uint8_t _[0x18]; // 0xf80 
    std::uint8_t _[0x4]; // 0xf98 
    std::uint8_t _[0x4]; // 0xf9c 
    std::uint8_t _[0x4]; // 0xfa0 
    std::uint8_t _[0x4]; // 0xfa4 
    std::uint8_t _[0x8]; // 0xfa8 
    std::uint8_t _[0x18]; // 0xfb0 
    std::uint8_t _[0x18]; // 0xfc8 
    std::uint8_t _[0x4]; // 0xfe0 
    std::uint8_t _[0x3c]; // 0xfe4 
    std::uint8_t _[0x1]; // 0x1020 
    std::uint8_t _[0x3]; // 0x1021 
    std::uint8_t _[0x4]; // 0x1024 
    std::uint8_t _[0x4]; // 0x1028 
    std::uint8_t _[0x4]; // 0x102c 
    std::uint8_t _[0x4]; // 0x1030 
    std::uint8_t _[0x4c]; // 0x1034 
    std::uint8_t _[0x4]; // 0x1080 
    std::uint8_t _[0x1]; // 0x1084 
    std::uint8_t _[0x1b]; // 0x1085 
    std::uint8_t _[0x8]; // 0x10a0 
    std::uint8_t _[0x98]; // 0x10a8 
    std::uint8_t _[0x8]; // 0x1140 
    std::uint8_t _[0x1f0]; // 0x1148 
    std::uint8_t _[0x60]; // 0x1338 
    std::uint8_t _[0x28]; // 0x1398 
    std::uint8_t _[0x4]; // 0x13c0 
    std::uint8_t _[0x4]; // 0x13c4 
    std::uint8_t _[0x4]; // 0x13c8 
    std::uint8_t _[0x4]; // 0x13cc 
    std::uint8_t _[0x4]; // 0x13d0 
    std::uint8_t _[0x4]; // 0x13d4 
    std::uint8_t _[0x4]; // 0x13d8 
    std::uint8_t _[0x4]; // 0x13dc 
    std::uint8_t _[0x4]; // 0x13e0 
    std::uint8_t _[0x4]; // 0x13e4 
    std::uint8_t _[0x8]; // 0x13e8 
    std::uint8_t _[0x4]; // 0x13f0 
    std::uint8_t _[0x4]; // 0x13f4 
    std::uint8_t _[0x4]; // 0x13f8 
    std::uint8_t _[0x4]; // 0x13fc 
    std::uint8_t _[0x8]; // 0x1400 
    std::uint8_t _[0x4]; // 0x1408 
    std::uint8_t _[0x4]; // 0x140c 
    std::uint8_t _[0x4]; // 0x1410 
    std::uint8_t _[0x4]; // 0x1414 
    std::uint8_t _[0x4]; // 0x1418 
    std::uint8_t _[0x400c]; // 0x141c 
    std::uint8_t _[0xc028]; // 0x5428 
};

struct CPulseCell_ApplyEntityFlags__CursorState_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct CPulseCell_Outflow_CycleShuffled {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x18]; // 0x48 
};

struct CBaseCSGrenadeProjectile {
    static constexpr std::size_t size = 0xb40;
    std::uint8_t pad_0[0xad0]; // 0x0
    std::uint8_t _[0xc]; // 0xad0 
    std::uint8_t _[0xc]; // 0xadc 
    std::uint8_t _[0x8]; // 0xae8 
    std::uint8_t _[0x8]; // 0xaf0 
    std::uint8_t _[0x4]; // 0xaf8 
    std::uint8_t _[0xc]; // 0xafc 
    std::uint8_t _[0x4]; // 0xb08 
    std::uint8_t _[0x1]; // 0xb0c 
    std::uint8_t _[0x1]; // 0xb0d 
    std::uint8_t _[0x2]; // 0xb0e 
    std::uint8_t _[0xc]; // 0xb10 
    std::uint8_t _[0x4]; // 0xb1c 
    std::uint8_t _[0xc]; // 0xb20 
    std::uint8_t _[0xc]; // 0xb2c 
    std::uint8_t _[0x4]; // 0xb38 
    std::uint8_t _[0x4]; // 0xb3c 
};

struct CPhysConstraint {
    static constexpr std::size_t size = 0x508;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x8]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4c0 
    std::uint8_t _[0x4]; // 0x4c4 
    std::uint8_t _[0x8]; // 0x4c8 
    std::uint8_t _[0x8]; // 0x4d0 
    std::uint8_t _[0x8]; // 0x4d8 
    std::uint8_t _[0x4]; // 0x4e0 
    std::uint8_t _[0x4]; // 0x4e4 
    std::uint8_t _[0x4]; // 0x4e8 
    std::uint8_t _[0x1]; // 0x4ec 
    std::uint8_t _[0x3]; // 0x4ed 
    std::uint8_t _[0x18]; // 0x4f0 
};

struct CLogicAchievement {
    static constexpr std::size_t size = 0x4d0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x18]; // 0x4b8 
};

struct CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x2]; // 0x8 
    std::uint8_t _[0x6]; // 0xa 
};

struct CLightComponent {
    static constexpr std::size_t size = 0x1c0;
    std::uint8_t pad_0[0x38]; // 0x0
    std::uint8_t _[0x40]; // 0x38 
    std::uint8_t _[0x4]; // 0x78 
    std::uint8_t _[0x4]; // 0x7c 
    std::uint8_t _[0x4]; // 0x80 
    std::uint8_t _[0x4]; // 0x84 
    std::uint8_t _[0x4]; // 0x88 
    std::uint8_t _[0x4]; // 0x8c 
    std::uint8_t _[0x4]; // 0x90 
    std::uint8_t _[0x4]; // 0x94 
    std::uint8_t _[0x4]; // 0x98 
    std::uint8_t _[0x4]; // 0x9c 
    std::uint8_t _[0x4]; // 0xa0 
    std::uint8_t _[0x4]; // 0xa4 
    std::uint8_t _[0x8]; // 0xa8 
    std::uint8_t _[0x4]; // 0xb0 
    std::uint8_t _[0x4]; // 0xb4 
    std::uint8_t _[0x4]; // 0xb8 
    std::uint8_t _[0x4]; // 0xbc 
    std::uint8_t _[0x4]; // 0xc0 
    std::uint8_t _[0x4]; // 0xc4 
    std::uint8_t _[0x4]; // 0xc8 
    std::uint8_t _[0x4]; // 0xcc 
    std::uint8_t _[0x4]; // 0xd0 
    std::uint8_t _[0x4]; // 0xd4 
    std::uint8_t _[0x8]; // 0xd8 
    std::uint8_t _[0x4]; // 0xe0 
    std::uint8_t _[0x4]; // 0xe4 
    std::uint8_t _[0x4]; // 0xe8 
    std::uint8_t _[0x4]; // 0xec 
    std::uint8_t _[0x4]; // 0xf0 
    std::uint8_t _[0x4]; // 0xf4 
    std::uint8_t _[0x4]; // 0xf8 
    std::uint8_t _[0x4]; // 0xfc 
    std::uint8_t _[0x4]; // 0x100 
    std::uint8_t _[0x4]; // 0x104 
    std::uint8_t _[0x4]; // 0x108 
    std::uint8_t _[0x4]; // 0x10c 
    std::uint8_t _[0x4]; // 0x110 
    std::uint8_t _[0x4]; // 0x114 
    std::uint8_t _[0x4]; // 0x118 
    std::uint8_t _[0x4]; // 0x11c 
    std::uint8_t _[0x1]; // 0x120 
    std::uint8_t _[0x3]; // 0x121 
    std::uint8_t _[0x4]; // 0x124 
    std::uint8_t _[0x4]; // 0x128 
    std::uint8_t _[0x4]; // 0x12c 
    std::uint8_t _[0x4]; // 0x130 
    std::uint8_t _[0x4]; // 0x134 
    std::uint8_t _[0x4]; // 0x138 
    std::uint8_t _[0x4]; // 0x13c 
    std::uint8_t _[0x1]; // 0x140 
    std::uint8_t _[0x1]; // 0x141 
    std::uint8_t _[0x2]; // 0x142 
    std::uint8_t _[0xc]; // 0x144 
    std::uint8_t _[0xc]; // 0x150 
    std::uint8_t _[0xc]; // 0x15c 
    std::uint8_t _[0xc]; // 0x168 
    std::uint8_t _[0xc]; // 0x174 
    std::uint8_t _[0x4]; // 0x180 
    std::uint8_t _[0x4]; // 0x184 
    std::uint8_t _[0x4]; // 0x188 
    std::uint8_t _[0x4]; // 0x18c 
    std::uint8_t _[0x4]; // 0x190 
    std::uint8_t _[0x4]; // 0x194 
    std::uint8_t _[0x4]; // 0x198 
    std::uint8_t _[0x1]; // 0x19c 
    std::uint8_t _[0x3]; // 0x19d 
    std::uint8_t _[0x4]; // 0x1a0 
    std::uint8_t _[0x4]; // 0x1a4 
    std::uint8_t _[0x10]; // 0x1a8 
    std::uint8_t _[0x8]; // 0x1b8 
};

struct CCSWeaponBase {
    static constexpr std::size_t size = 0x1280;
    std::uint8_t pad_0[0xef8]; // 0x0
    std::uint8_t _[0x1]; // 0xef8 
    std::uint8_t _[0x1]; // 0xef9 
    std::uint8_t _[0x2]; // 0xefa 
    std::uint8_t _[0x4]; // 0xefc 
    std::uint8_t _[0x4]; // 0xf00 
    std::uint8_t _[0x4]; // 0xf04 
    std::uint8_t _[0x1]; // 0xf08 
    std::uint8_t _[0x2b]; // 0xf09 
    std::uint8_t _[0x1c]; // 0xf34 
    std::uint8_t _[0x8]; // 0xf50 
    std::uint8_t _[0x18]; // 0xf58 
    std::uint8_t _[0x4]; // 0xf70 
    std::uint8_t _[0x4]; // 0xf74 
    std::uint8_t _[0xc]; // 0xf78 
    std::uint8_t _[0x4]; // 0xf84 
    std::uint8_t _[0x4]; // 0xf88 
    std::uint8_t _[0x4]; // 0xf8c 
    std::uint8_t _[0x4]; // 0xf90 
    std::uint8_t _[0x4]; // 0xf94 
    std::uint8_t _[0x4]; // 0xf98 
    std::uint8_t _[0x4]; // 0xf9c 
    std::uint8_t _[0x4]; // 0xfa0 
    std::uint8_t _[0x4]; // 0xfa4 
    std::uint8_t _[0x4]; // 0xfa8 
    std::uint8_t _[0x4]; // 0xfac 
    std::uint8_t _[0x4]; // 0xfb0 
    std::uint8_t _[0x8]; // 0xfb4 
    std::uint8_t _[0x1]; // 0xfbc 
    std::uint8_t _[0x3]; // 0xfbd 
    std::uint8_t _[0x4]; // 0xfc0 
    std::uint8_t _[0x1]; // 0xfc4 
    std::uint8_t _[0x1]; // 0xfc5 
    std::uint8_t _[0x2]; // 0xfc6 
    std::uint8_t _[0x4]; // 0xfc8 
    std::uint8_t _[0x4]; // 0xfcc 
    std::uint8_t _[0x4]; // 0xfd0 
    std::uint8_t _[0x4]; // 0xfd4 
    std::uint8_t _[0x4]; // 0xfd8 
    std::uint8_t _[0x4]; // 0xfdc 
    std::uint8_t _[0x18]; // 0xfe0 
    std::uint8_t _[0x1]; // 0xff8 
    std::uint8_t _[0x3]; // 0xff9 
    std::uint8_t _[0x4]; // 0xffc 
    std::uint8_t _[0x8]; // 0x1000 
    std::uint8_t _[0x4]; // 0x1008 
    std::uint8_t _[0x4]; // 0x100c 
    std::uint8_t _[0x4]; // 0x1010 
    std::uint8_t _[0x20]; // 0x1014 
    std::uint8_t _[0x4]; // 0x1034 
    std::uint8_t _[0x4]; // 0x1038 
    std::uint8_t _[0x1]; // 0x103c 
    std::uint8_t _[0x3]; // 0x103d 
    std::uint8_t _[0x60]; // 0x1040 
    std::uint8_t _[0x18]; // 0x10a0 
    std::uint8_t _[0x4]; // 0x10b8 
    std::uint8_t _[0x4]; // 0x10bc 
    std::uint8_t _[0x10]; // 0x10c0 
    std::uint8_t _[0x1b0]; // 0x10d0 
};

struct CPointClientUIDialog {
    static constexpr std::size_t size = 0x9b8;
    std::uint8_t pad_0[0x9b0]; // 0x0
    std::uint8_t _[0x4]; // 0x9b0 
    std::uint8_t _[0x4]; // 0x9b4 
};

struct CLogicLineToEntity {
    static constexpr std::size_t size = 0x4e0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x28]; // 0x4a8 
    std::uint8_t _[0x8]; // 0x4d0 
    std::uint8_t _[0x4]; // 0x4d8 
    std::uint8_t _[0x4]; // 0x4dc 
};

struct CSoundAreaEntitySphere {
    static constexpr std::size_t size = 0x4d0;
    std::uint8_t pad_0[0x4c8]; // 0x0
    std::uint8_t _[0x8]; // 0x4c8 
};

struct CCSPlayer_ActionTrackingServices {
    static constexpr std::size_t size = 0x380;
    std::uint8_t pad_0[0x1f8]; // 0x0
    std::uint8_t _[0x2c]; // 0x1f8 
    std::uint8_t _[0x4]; // 0x224 
    std::uint8_t _[0x70]; // 0x228 
    std::uint8_t _[0x70]; // 0x298 
    std::uint8_t _[0x78]; // 0x308 
};

struct CBrokenGlassTrap {
    static constexpr std::size_t size = 0x870;
    std::uint8_t pad_0[0x870]; // 0x0
};

struct CPhysicalButton {
    static constexpr std::size_t size = 0x9d0;
    std::uint8_t pad_0[0x9d0]; // 0x0
};

struct CInfoSpawnGroupLoadUnload {
    static constexpr std::size_t size = 0x580;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x18]; // 0x4a8 
    std::uint8_t _[0x18]; // 0x4c0 
    std::uint8_t _[0x18]; // 0x4d8 
    std::uint8_t _[0x18]; // 0x4f0 
    std::uint8_t _[0x8]; // 0x508 
    std::uint8_t _[0x8]; // 0x510 
    std::uint8_t _[0x8]; // 0x518 
    std::uint8_t _[0x8]; // 0x520 
    std::uint8_t _[0x4]; // 0x528 
    std::uint8_t _[0x1]; // 0x52c 
    std::uint8_t _[0x1]; // 0x52d 
    std::uint8_t _[0x1]; // 0x52e 
    std::uint8_t _[0x51]; // 0x52f 
};

struct CSoundAreaEntityOrientedBox {
    static constexpr std::size_t size = 0x4e0;
    std::uint8_t pad_0[0x4c8]; // 0x0
    std::uint8_t _[0xc]; // 0x4c8 
    std::uint8_t _[0xc]; // 0x4d4 
};

struct CCSObserver_MovementServices {
    static constexpr std::size_t size = 0x258;
    std::uint8_t pad_0[0x258]; // 0x0
};

struct CPulseCell_Outflow_ListenForAnimgraphTag {
    static constexpr std::size_t size = 0x170;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x48]; // 0xd8 
    std::uint8_t _[0x48]; // 0x120 
    std::uint8_t _[0x8]; // 0x168 
};

struct CBodyComponent {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x40]; // 0x8 
    std::uint8_t _[0x30]; // 0x48 
};

struct CPulseCell_Inflow_Method {
    static constexpr std::size_t size = 0xc0;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t _[0x10]; // 0x80 
    std::uint8_t _[0x8]; // 0x90 
    std::uint8_t _[0x8]; // 0x98 
    std::uint8_t _[0x10]; // 0xa0 
    std::uint8_t _[0x10]; // 0xb0 
};

struct CDecoyGrenade {
    static constexpr std::size_t size = 0x12c0;
    std::uint8_t pad_0[0x12c0]; // 0x0
};

struct CEconItemView {
    static constexpr std::size_t size = 0x3e8;
    std::uint8_t pad_0[0x38]; // 0x0
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x8]; // 0x40 
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0x4]; // 0x54 
    std::uint8_t _[0x4]; // 0x58 
    std::uint8_t _[0xc]; // 0x5c 
    std::uint8_t _[0x8]; // 0x68 
    std::uint8_t _[0x78]; // 0x70 
    std::uint8_t _[0x78]; // 0xe8 
    std::uint8_t _[0xa1]; // 0x160 
    std::uint8_t _[0xa1]; // 0x201 
    std::uint8_t _[0xa1]; // 0x2a2 
    std::uint8_t _[0xa5]; // 0x343 
};

struct CIncendiaryGrenade {
    static constexpr std::size_t size = 0x12c0;
    std::uint8_t pad_0[0x12c0]; // 0x0
};

struct CBaseDMStart {
    static constexpr std::size_t size = 0x4b0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
};

struct CBaseModelEntity {
    static constexpr std::size_t size = 0x850;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x18]; // 0x4b0 
    std::uint8_t _[0x8]; // 0x4c8 
    std::uint8_t _[0x4]; // 0x4d0 
    std::uint8_t _[0x4]; // 0x4d4 
    std::uint8_t _[0x4]; // 0x4d8 
    std::uint8_t _[0x4]; // 0x4dc 
    std::uint8_t _[0x4]; // 0x4e0 
    std::uint8_t _[0x4]; // 0x4e4 
    std::uint8_t _[0x4]; // 0x4e8 
    std::uint8_t _[0x4]; // 0x4ec 
    std::uint8_t _[0x4]; // 0x4f0 
    std::uint8_t _[0x4]; // 0x4f4 
    std::uint8_t _[0x1]; // 0x4f8 
    std::uint8_t _[0x1]; // 0x4f9 
    std::uint8_t _[0x1]; // 0x4fa 
    std::uint8_t _[0x1]; // 0x4fb 
    std::uint8_t _[0x4]; // 0x4fc 
    std::uint8_t _[0x8]; // 0x500 
    std::uint8_t _[0x28]; // 0x508 
    std::uint8_t _[0x8]; // 0x530 
    std::uint8_t _[0x18]; // 0x538 
    std::uint8_t _[0x1]; // 0x550 
    std::uint8_t _[0x1]; // 0x551 
    std::uint8_t _[0x1e]; // 0x552 
    std::uint8_t _[0x8]; // 0x570 
    std::uint8_t _[0x68]; // 0x578 
    std::uint8_t _[0x1]; // 0x5e0 
    std::uint8_t _[0x1]; // 0x5e1 
    std::uint8_t _[0x6]; // 0x5e2 
    std::uint8_t _[0xb8]; // 0x5e8 
    std::uint8_t _[0x58]; // 0x6a0 
    std::uint8_t _[0x4]; // 0x6f8 
    std::uint8_t _[0x4]; // 0x6fc 
    std::uint8_t _[0x4]; // 0x700 
    std::uint8_t _[0x4]; // 0x704 
    std::uint8_t _[0x4]; // 0x708 
    std::uint8_t _[0x4]; // 0x70c 
    std::uint8_t _[0x8]; // 0x710 
    std::uint8_t _[0xd8]; // 0x718 
    std::uint8_t _[0x28]; // 0x7f0 
    std::uint8_t _[0x30]; // 0x818 
    std::uint8_t _[0x8]; // 0x848 
};

struct fogplayerparams_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x8]; // 0x0
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
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
};

struct CGlowProperty {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x28]; // 0x8 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x4]; // 0x44 
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x1]; // 0x50 
    std::uint8_t _[0x7]; // 0x51 
};

struct CInstancedSceneEntity {
    static constexpr std::size_t size = 0x818;
    std::uint8_t pad_0[0x800]; // 0x0
    std::uint8_t _[0x4]; // 0x800 
    std::uint8_t _[0x4]; // 0x804 
    std::uint8_t _[0x4]; // 0x808 
    std::uint8_t _[0x4]; // 0x80c 
    std::uint8_t _[0x4]; // 0x810 
    std::uint8_t _[0x4]; // 0x814 
};

struct CPulseCell_BaseValue {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CCitadelSoundOpvarSetOBB {
    static constexpr std::size_t size = 0x4f8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x8]; // 0x4b8 
    std::uint8_t _[0xc]; // 0x4c0 
    std::uint8_t _[0xc]; // 0x4cc 
    std::uint8_t _[0xc]; // 0x4d8 
    std::uint8_t _[0xc]; // 0x4e4 
    std::uint8_t _[0x8]; // 0x4f0 
};

struct CSoundEventParameter {
    static constexpr std::size_t size = 0x4d0;
    std::uint8_t pad_0[0x4c0]; // 0x0
    std::uint8_t _[0x8]; // 0x4c0 
    std::uint8_t _[0x8]; // 0x4c8 
};

struct CPlayer_WaterServices {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseCell_BooleanSwitchState {
    static constexpr std::size_t size = 0x1f8;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x90]; // 0xd8 
    std::uint8_t _[0x48]; // 0x168 
    std::uint8_t _[0x48]; // 0x1b0 
};

struct CRotButton {
    static constexpr std::size_t size = 0x9d0;
    std::uint8_t pad_0[0x9d0]; // 0x0
};

struct CEnvViewPunch {
    static constexpr std::size_t size = 0x4b8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0xc]; // 0x4ac 
};

struct CDamageRecord {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x8]; // 0x40 
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x8]; // 0x50 
    std::uint8_t _[0x8]; // 0x58 
    std::uint8_t _[0x4]; // 0x60 
    std::uint8_t _[0x4]; // 0x64 
    std::uint8_t _[0x4]; // 0x68 
    std::uint8_t _[0x4]; // 0x6c 
    std::uint8_t _[0x4]; // 0x70 
    std::uint8_t _[0x1]; // 0x74 
    std::uint8_t _[0x3]; // 0x75 
};

struct VPhysicsCollisionAttribute_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x2]; // 0x28 
    std::uint8_t _[0x2]; // 0x2a 
    std::uint8_t _[0x1]; // 0x2c 
    std::uint8_t _[0x1]; // 0x2d 
    std::uint8_t _[0x1]; // 0x2e 
    std::uint8_t _[0x1]; // 0x2f 
};

struct CItemKevlar {
    static constexpr std::size_t size = 0xae0;
    std::uint8_t pad_0[0xae0]; // 0x0
};

struct CFuncShatterglass {
    static constexpr std::size_t size = 0x980;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x30]; // 0x850 
    std::uint8_t _[0x30]; // 0x880 
    std::uint8_t _[0x18]; // 0x8b0 
    std::uint8_t _[0x8]; // 0x8c8 
    std::uint8_t _[0x4]; // 0x8d0 
    std::uint8_t _[0x4]; // 0x8d4 
    std::uint8_t _[0x4]; // 0x8d8 
    std::uint8_t _[0x4]; // 0x8dc 
    std::uint8_t _[0x4]; // 0x8e0 
    std::uint8_t _[0x1]; // 0x8e4 
    std::uint8_t _[0x1]; // 0x8e5 
    std::uint8_t _[0x1]; // 0x8e6 
    std::uint8_t _[0x1]; // 0x8e7 
    std::uint8_t _[0x1]; // 0x8e8 
    std::uint8_t _[0x1]; // 0x8e9 
    std::uint8_t _[0x6]; // 0x8ea 
    std::uint8_t _[0x8]; // 0x8f0 
    std::uint8_t _[0x8]; // 0x8f8 
    std::uint8_t _[0x8]; // 0x900 
    std::uint8_t _[0x8]; // 0x908 
    std::uint8_t _[0x18]; // 0x910 
    std::uint8_t _[0x18]; // 0x928 
    std::uint8_t _[0x18]; // 0x940 
    std::uint8_t _[0x18]; // 0x958 
    std::uint8_t _[0x8]; // 0x970 
    std::uint8_t _[0x8]; // 0x978 
};

struct CNavWalkable {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CPlantedC4 {
    static constexpr std::size_t size = 0xfa0;
    std::uint8_t pad_0[0xa98]; // 0x0
    std::uint8_t _[0x4]; // 0xa98 
    std::uint8_t _[0x4]; // 0xa9c 
    std::uint8_t _[0x4]; // 0xaa0 
    std::uint8_t _[0x4]; // 0xaa4 
    std::uint8_t _[0x8]; // 0xaa8 
    std::uint8_t _[0x438]; // 0xab0 
    std::uint8_t _[0x18]; // 0xee8 
    std::uint8_t _[0x18]; // 0xf00 
    std::uint8_t _[0x18]; // 0xf18 
    std::uint8_t _[0x8]; // 0xf30 
    std::uint8_t _[0x18]; // 0xf38 
    std::uint8_t _[0x4]; // 0xf50 
    std::uint8_t _[0x1]; // 0xf54 
    std::uint8_t _[0x1]; // 0xf55 
    std::uint8_t _[0x2]; // 0xf56 
    std::uint8_t _[0x4]; // 0xf58 
    std::uint8_t _[0x8]; // 0xf5c 
    std::uint8_t _[0x8]; // 0xf64 
    std::uint8_t _[0x4]; // 0xf6c 
    std::uint8_t _[0x4]; // 0xf70 
    std::uint8_t _[0x4]; // 0xf74 
    std::uint8_t _[0x4]; // 0xf78 
    std::uint8_t _[0x1]; // 0xf7c 
    std::uint8_t _[0x7]; // 0xf7d 
    std::uint8_t _[0x8]; // 0xf84 
    std::uint8_t _[0xc]; // 0xf8c 
    std::uint8_t _[0x8]; // 0xf98 
};

struct CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
    static constexpr std::size_t size = 0x540;
    std::uint8_t pad_0[0x540]; // 0x0
};

struct CVoteController {
    static constexpr std::size_t size = 0x658;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x14]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4c4 
    std::uint8_t _[0x8]; // 0x4c8 
    std::uint8_t _[0x18]; // 0x4d0 
    std::uint8_t _[0x18]; // 0x4e8 
    std::uint8_t _[0x18]; // 0x500 
    std::uint8_t _[0x100]; // 0x518 
    std::uint8_t _[0x4]; // 0x618 
    std::uint8_t _[0x4]; // 0x61c 
    std::uint8_t _[0x8]; // 0x620 
    std::uint8_t _[0x18]; // 0x628 
    std::uint8_t _[0x18]; // 0x640 
};

struct CPulseCell_Inflow_Yield {
    static constexpr std::size_t size = 0x120;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x48]; // 0xd8 
};

struct CPhysImpact {
    static constexpr std::size_t size = 0x4b8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x8]; // 0x4b0 
};

struct CBaseEntity {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x210]; // 0x38 
    std::uint8_t _[0x18]; // 0x248 
    std::uint8_t _[0x4]; // 0x260 
    std::uint8_t _[0x4]; // 0x264 
    std::uint8_t _[0x10]; // 0x268 
    std::uint8_t _[0x8]; // 0x278 
    std::uint8_t _[0x8]; // 0x280 
    std::uint8_t _[0x8]; // 0x288 
    std::uint8_t _[0x18]; // 0x290 
    std::uint8_t _[0x8]; // 0x2a8 
    std::uint8_t _[0x8]; // 0x2b0 
    std::uint8_t _[0x8]; // 0x2b8 
    std::uint8_t _[0x8]; // 0x2c0 
    std::uint8_t _[0x8]; // 0x2c8 
    std::uint8_t _[0x4]; // 0x2d0 
    std::uint8_t _[0x4]; // 0x2d4 
    std::uint8_t _[0x4]; // 0x2d8 
    std::uint8_t _[0x4]; // 0x2dc 
    std::uint8_t _[0x8]; // 0x2e0 
    std::uint8_t _[0x8]; // 0x2e8 
    std::uint8_t _[0x2]; // 0x2f0 
    std::uint8_t _[0x1]; // 0x2f2 
    std::uint8_t _[0x1]; // 0x2f3 
    std::uint8_t _[0x1]; // 0x2f4 
    std::uint8_t _[0x1]; // 0x2f5 
    std::uint8_t _[0x1]; // 0x2f6 
    std::uint8_t _[0x1]; // 0x2f7 
    std::uint8_t _[0x8]; // 0x2f8 
    std::uint8_t _[0x8]; // 0x300 
    std::uint8_t _[0x8]; // 0x308 
    std::uint8_t _[0x8]; // 0x310 
    std::uint8_t _[0x4]; // 0x318 
    std::uint8_t _[0xc]; // 0x31c 
    std::uint8_t _[0x4]; // 0x328 
    std::uint8_t _[0x4]; // 0x32c 
    std::uint8_t _[0x4]; // 0x330 
    std::uint8_t _[0x1]; // 0x334 
    std::uint8_t _[0x3]; // 0x335 
    std::uint8_t _[0xc]; // 0x338 
    std::uint8_t _[0x4]; // 0x344 
    std::uint8_t _[0x8]; // 0x348 
    std::uint8_t _[0x8]; // 0x350 
    std::uint8_t _[0x8]; // 0x358 
    std::uint8_t _[0x4]; // 0x360 
    std::uint8_t _[0x4]; // 0x364 
    std::uint8_t _[0x8]; // 0x368 
    std::uint8_t _[0x18]; // 0x370 
    std::uint8_t _[0x4]; // 0x388 
    std::uint8_t _[0xc]; // 0x38c 
    std::uint8_t _[0x30]; // 0x398 
    std::uint8_t _[0xc]; // 0x3c8 
    std::uint8_t _[0x4]; // 0x3d4 
    std::uint8_t _[0x8]; // 0x3d8 
    std::uint8_t _[0x4]; // 0x3e0 
    std::uint8_t _[0x4]; // 0x3e4 
    std::uint8_t _[0x4]; // 0x3e8 
    std::uint8_t _[0x4]; // 0x3ec 
    std::uint8_t _[0x4]; // 0x3f0 
    std::uint8_t _[0x4]; // 0x3f4 
    std::uint8_t _[0x4]; // 0x3f8 
    std::uint8_t _[0x4]; // 0x3fc 
    std::uint8_t _[0x4]; // 0x400 
    std::uint8_t _[0x4]; // 0x404 
    std::uint8_t _[0x1]; // 0x408 
    std::uint8_t _[0x3]; // 0x409 
    std::uint8_t _[0x4]; // 0x40c 
    std::uint8_t _[0x1]; // 0x410 
    std::uint8_t _[0x1]; // 0x411 
    std::uint8_t _[0x2]; // 0x412 
    std::uint8_t _[0x4]; // 0x414 
    std::uint8_t _[0x18]; // 0x418 
    std::uint8_t _[0x18]; // 0x430 
    std::uint8_t _[0x18]; // 0x448 
    std::uint8_t _[0x18]; // 0x460 
    std::uint8_t _[0x4]; // 0x478 
    std::uint8_t _[0x4]; // 0x47c 
    std::uint8_t _[0xc]; // 0x480 
    std::uint8_t _[0x1]; // 0x48c 
    std::uint8_t _[0x3]; // 0x48d 
    std::uint8_t _[0x4]; // 0x490 
    std::uint8_t _[0x4]; // 0x494 
    std::uint8_t _[0x4]; // 0x498 
    std::uint8_t _[0x4]; // 0x49c 
    std::uint8_t _[0x8]; // 0x4a0 
};

struct CPulseCell_ApplyAnimGraphParam {
    static constexpr std::size_t size = 0x168;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x90]; // 0xd8 
};

struct CPlayer_UseServices {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CGameSceneNodeHandle {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
};

struct CMarkupVolumeWithRef {
    static constexpr std::size_t size = 0x8b8;
    std::uint8_t pad_0[0x898]; // 0x0
    std::uint8_t _[0x4]; // 0x898 
    std::uint8_t _[0xc]; // 0x89c 
    std::uint8_t _[0xc]; // 0x8a8 
    std::uint8_t _[0x4]; // 0x8b4 
};

struct CCSGO_TeamSelectCharacterPosition {
    static constexpr std::size_t size = 0x1468;
    std::uint8_t pad_0[0x1468]; // 0x0
};

struct CPulseCell_Unknown {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x10]; // 0x48 
};

struct CFuncPlatRot {
    static constexpr std::size_t size = 0x920;
    std::uint8_t pad_0[0x908]; // 0x0
    std::uint8_t _[0xc]; // 0x908 
    std::uint8_t _[0xc]; // 0x914 
};

struct CRagdollMagnet {
    static constexpr std::size_t size = 0x4c0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0xc]; // 0x4b4 
};

struct CInfoInstructorHintTarget {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CPulseCell_ApplyEntityFlags {
    static constexpr std::size_t size = 0xd8;
    std::uint8_t pad_0[0xd8]; // 0x0
};

struct CSpriteAlias_env_glow {
    static constexpr std::size_t size = 0x8c0;
    std::uint8_t pad_0[0x8c0]; // 0x0
};

struct CFireCrackerBlast {
    static constexpr std::size_t size = 0x14d8;
    std::uint8_t pad_0[0x14d8]; // 0x0
};

struct CSpotlightEnd {
    static constexpr std::size_t size = 0x870;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x4]; // 0x850 
    std::uint8_t _[0x4]; // 0x854 
    std::uint8_t _[0xc]; // 0x858 
    std::uint8_t _[0xc]; // 0x864 
};

struct CEnvSky {
    static constexpr std::size_t size = 0x8b0;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x8]; // 0x850 
    std::uint8_t _[0x8]; // 0x858 
    std::uint8_t _[0x4]; // 0x860 
    std::uint8_t _[0x4]; // 0x864 
    std::uint8_t _[0x4]; // 0x868 
    std::uint8_t _[0x4]; // 0x86c 
    std::uint8_t _[0x4]; // 0x870 
    std::uint8_t _[0x4]; // 0x874 
    std::uint8_t _[0x4]; // 0x878 
    std::uint8_t _[0x4]; // 0x87c 
    std::uint8_t _[0x4]; // 0x880 
    std::uint8_t _[0x2c]; // 0x884 
};

struct CInfoSpawnGroupLandmark {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CPointAngleSensor {
    static constexpr std::size_t size = 0x548;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4bc 
    std::uint8_t _[0x4]; // 0x4c0 
    std::uint8_t _[0x4]; // 0x4c4 
    std::uint8_t _[0x4]; // 0x4c8 
    std::uint8_t _[0x4]; // 0x4cc 
    std::uint8_t _[0x18]; // 0x4d0 
    std::uint8_t _[0x18]; // 0x4e8 
    std::uint8_t _[0x28]; // 0x500 
    std::uint8_t _[0x20]; // 0x528 
};

struct CSPerRoundStats_t {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x30]; // 0x0
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
    std::uint8_t _[0x8]; // 0x60 
};

struct CGenericConstraint {
    static constexpr std::size_t size = 0x608;
    std::uint8_t pad_0[0x510]; // 0x0
    std::uint8_t _[0x4]; // 0x510 
    std::uint8_t _[0x4]; // 0x514 
    std::uint8_t _[0x4]; // 0x518 
    std::uint8_t _[0x4]; // 0x51c 
    std::uint8_t _[0x4]; // 0x520 
    std::uint8_t _[0x4]; // 0x524 
    std::uint8_t _[0x4]; // 0x528 
    std::uint8_t _[0x4]; // 0x52c 
    std::uint8_t _[0x4]; // 0x530 
    std::uint8_t _[0x4]; // 0x534 
    std::uint8_t _[0x4]; // 0x538 
    std::uint8_t _[0x4]; // 0x53c 
    std::uint8_t _[0x4]; // 0x540 
    std::uint8_t _[0x4]; // 0x544 
    std::uint8_t _[0x4]; // 0x548 
    std::uint8_t _[0x4]; // 0x54c 
    std::uint8_t _[0x4]; // 0x550 
    std::uint8_t _[0x4]; // 0x554 
    std::uint8_t _[0x4]; // 0x558 
    std::uint8_t _[0x4]; // 0x55c 
    std::uint8_t _[0x4]; // 0x560 
    std::uint8_t _[0x4]; // 0x564 
    std::uint8_t _[0x4]; // 0x568 
    std::uint8_t _[0x4]; // 0x56c 
    std::uint8_t _[0x4]; // 0x570 
    std::uint8_t _[0x4]; // 0x574 
    std::uint8_t _[0x4]; // 0x578 
    std::uint8_t _[0x4]; // 0x57c 
    std::uint8_t _[0x4]; // 0x580 
    std::uint8_t _[0x4]; // 0x584 
    std::uint8_t _[0x4]; // 0x588 
    std::uint8_t _[0x1]; // 0x58c 
    std::uint8_t _[0x1]; // 0x58d 
    std::uint8_t _[0x2]; // 0x58e 
    std::uint8_t _[0x4]; // 0x590 
    std::uint8_t _[0x4]; // 0x594 
    std::uint8_t _[0x4]; // 0x598 
    std::uint8_t _[0x4]; // 0x59c 
    std::uint8_t _[0x4]; // 0x5a0 
    std::uint8_t _[0x4]; // 0x5a4 
    std::uint8_t _[0x4]; // 0x5a8 
    std::uint8_t _[0x4]; // 0x5ac 
    std::uint8_t _[0x4]; // 0x5b0 
    std::uint8_t _[0x4]; // 0x5b4 
    std::uint8_t _[0x4]; // 0x5b8 
    std::uint8_t _[0x4]; // 0x5bc 
    std::uint8_t _[0x18]; // 0x5c0 
    std::uint8_t _[0x18]; // 0x5d8 
    std::uint8_t _[0x18]; // 0x5f0 
};

struct CPulseCell_Outflow_CycleRandom {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x18]; // 0x48 
};

struct CPulseCell_Step_PublicOutput {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x8]; // 0x48 
};

struct CEnvLaser {
    static constexpr std::size_t size = 0x918;
    std::uint8_t pad_0[0x8f0]; // 0x0
    std::uint8_t _[0x8]; // 0x8f0 
    std::uint8_t _[0x8]; // 0x8f8 
    std::uint8_t _[0x8]; // 0x900 
    std::uint8_t _[0xc]; // 0x908 
    std::uint8_t _[0x4]; // 0x914 
};

struct CSoundOpvarSetEntity {
    static constexpr std::size_t size = 0x500;
    std::uint8_t pad_0[0x4c0]; // 0x0
    std::uint8_t _[0x8]; // 0x4c0 
    std::uint8_t _[0x8]; // 0x4c8 
    std::uint8_t _[0x8]; // 0x4d0 
    std::uint8_t _[0x4]; // 0x4d8 
    std::uint8_t _[0x4]; // 0x4dc 
    std::uint8_t _[0x8]; // 0x4e0 
    std::uint8_t _[0x8]; // 0x4e8 
    std::uint8_t _[0x10]; // 0x4f0 
};

struct CEnvBeverage {
    static constexpr std::size_t size = 0x4b0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
};

struct CPhysMotor {
    static constexpr std::size_t size = 0x510;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4bc 
    std::uint8_t _[0x4]; // 0x4c0 
    std::uint8_t _[0x4]; // 0x4c4 
    std::uint8_t _[0x4]; // 0x4c8 
    std::uint8_t _[0x4]; // 0x4cc 
    std::uint8_t _[0x4]; // 0x4d0 
    std::uint8_t _[0x4]; // 0x4d4 
    std::uint8_t _[0x4]; // 0x4d8 
    std::uint8_t _[0x4]; // 0x4dc 
    std::uint8_t _[0x8]; // 0x4e0 
    std::uint8_t _[0x8]; // 0x4e8 
    std::uint8_t _[0x20]; // 0x4f0 
};

struct CLogicGameEvent {
    static constexpr std::size_t size = 0x4b0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
};

struct CPhysicsPropMultiplayer {
    static constexpr std::size_t size = 0xd10;
    std::uint8_t pad_0[0xd10]; // 0x0
};

struct CPhysExplosion {
    static constexpr std::size_t size = 0x4f0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b4 
    std::uint8_t _[0x8]; // 0x4b8 
    std::uint8_t _[0x8]; // 0x4c0 
    std::uint8_t _[0x4]; // 0x4c8 
    std::uint8_t _[0x4]; // 0x4cc 
    std::uint8_t _[0x1]; // 0x4d0 
    std::uint8_t _[0x1]; // 0x4d1 
    std::uint8_t _[0x6]; // 0x4d2 
    std::uint8_t _[0x18]; // 0x4d8 
};

struct CSplineConstraint {
    static constexpr std::size_t size = 0x5b8;
    std::uint8_t pad_0[0x558]; // 0x0
    std::uint8_t _[0xc]; // 0x558 
    std::uint8_t _[0x4]; // 0x564 
    std::uint8_t _[0x8]; // 0x568 
    std::uint8_t _[0x1]; // 0x570 
    std::uint8_t _[0x1]; // 0x571 
    std::uint8_t _[0x1]; // 0x572 
    std::uint8_t _[0x1]; // 0x573 
    std::uint8_t _[0x4]; // 0x574 
    std::uint8_t _[0x4]; // 0x578 
    std::uint8_t _[0x4]; // 0x57c 
    std::uint8_t _[0x4]; // 0x580 
    std::uint8_t _[0x14]; // 0x584 
    std::uint8_t _[0xc]; // 0x598 
    std::uint8_t _[0x4]; // 0x5a4 
    std::uint8_t _[0x10]; // 0x5a8 
};

struct CLogicCompare {
    static constexpr std::size_t size = 0x530;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x20]; // 0x4b0 
    std::uint8_t _[0x20]; // 0x4d0 
    std::uint8_t _[0x20]; // 0x4f0 
    std::uint8_t _[0x20]; // 0x510 
};

struct CSoundEventBoxEntity {
    static constexpr std::size_t size = 0x698;
    std::uint8_t pad_0[0x5a0]; // 0x0
    std::uint8_t _[0x98]; // 0x5a0 
    std::uint8_t _[0x60]; // 0x638 
};

struct CCSGameModeRules_Noop {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x30]; // 0x0
};

struct CPulse_BlackboardReference {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x10]; // 0x8 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
};

struct CFuncTankTrain {
    static constexpr std::size_t size = 0x990;
    std::uint8_t pad_0[0x978]; // 0x0
    std::uint8_t _[0x18]; // 0x978 
};

struct CPointClientUIWorldPanel {
    static constexpr std::size_t size = 0xa10;
    std::uint8_t pad_0[0x9b0]; // 0x0
    std::uint8_t _[0x1]; // 0x9b0 
    std::uint8_t _[0x1]; // 0x9b1 
    std::uint8_t _[0x2]; // 0x9b2 
    std::uint8_t _[0x4]; // 0x9b4 
    std::uint8_t _[0x4]; // 0x9b8 
    std::uint8_t _[0x4]; // 0x9bc 
    std::uint8_t _[0x4]; // 0x9c0 
    std::uint8_t _[0x4]; // 0x9c4 
    std::uint8_t _[0x4]; // 0x9c8 
    std::uint8_t _[0x4]; // 0x9cc 
    std::uint8_t _[0x4]; // 0x9d0 
    std::uint8_t _[0x4]; // 0x9d4 
    std::uint8_t _[0x4]; // 0x9d8 
    std::uint8_t _[0x4]; // 0x9dc 
    std::uint8_t _[0x18]; // 0x9e0 
    std::uint8_t _[0x1]; // 0x9f8 
    std::uint8_t _[0x1]; // 0x9f9 
    std::uint8_t _[0x1]; // 0x9fa 
    std::uint8_t _[0x1]; // 0x9fb 
    std::uint8_t _[0x1]; // 0x9fc 
    std::uint8_t _[0x1]; // 0x9fd 
    std::uint8_t _[0x1]; // 0x9fe 
    std::uint8_t _[0x1]; // 0x9ff 
    std::uint8_t _[0x4]; // 0xa00 
    std::uint8_t _[0x4]; // 0xa04 
    std::uint8_t _[0x8]; // 0xa08 
};

struct CSoundEventBoxHelper {
    static constexpr std::size_t size = 0x4c0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0xc]; // 0x4a8 
    std::uint8_t _[0xc]; // 0x4b4 
};

struct CSoundEventSphereEntity {
    static constexpr std::size_t size = 0x570;
    std::uint8_t pad_0[0x568]; // 0x0
    std::uint8_t _[0x8]; // 0x568 
};

struct CCSGO_RushIntroCounterTerroristPosition {
    static constexpr std::size_t size = 0x1468;
    std::uint8_t pad_0[0x1468]; // 0x0
};

struct CPulseCell_ReturnValues {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CCSPlayerController_InGameMoneyServices {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x40]; // 0x0
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x4]; // 0x44 
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0x4]; // 0x54 
};

struct CCSPlayer_AimPunchServices {
    static constexpr std::size_t size = 0xe8;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0xc]; // 0x50 
    std::uint8_t _[0x44]; // 0x5c 
    std::uint8_t _[0x4]; // 0xa0 
    std::uint8_t _[0x44]; // 0xa4 
};

struct CRuleBrushEntity {
    static constexpr std::size_t size = 0x858;
    std::uint8_t pad_0[0x858]; // 0x0
};

struct CMapVetoPickController {
    static constexpr std::size_t size = 0xea8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x1]; // 0x4a8 
    std::uint8_t _[0x1f]; // 0x4a9 
    std::uint8_t _[0x8]; // 0x4c8 
    std::uint8_t _[0x4]; // 0x4d0 
    std::uint8_t _[0x4]; // 0x4d4 
    std::uint8_t _[0x4]; // 0x4d8 
    std::uint8_t _[0x100]; // 0x4dc 
    std::uint8_t _[0x1c]; // 0x5dc 
    std::uint8_t _[0x100]; // 0x5f8 
    std::uint8_t _[0x100]; // 0x6f8 
    std::uint8_t _[0x100]; // 0x7f8 
    std::uint8_t _[0x100]; // 0x8f8 
    std::uint8_t _[0x100]; // 0x9f8 
    std::uint8_t _[0x100]; // 0xaf8 
    std::uint8_t _[0x100]; // 0xbf8 
    std::uint8_t _[0x100]; // 0xcf8 
    std::uint8_t _[0x4]; // 0xdf8 
    std::uint8_t _[0x4]; // 0xdfc 
    std::uint8_t _[0x8]; // 0xe00 
    std::uint8_t _[0x20]; // 0xe08 
    std::uint8_t _[0x20]; // 0xe28 
    std::uint8_t _[0x20]; // 0xe48 
    std::uint8_t _[0x20]; // 0xe68 
    std::uint8_t _[0x20]; // 0xe88 
};

struct CFuncPropRespawnZone {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CFilterModel {
    static constexpr std::size_t size = 0x4e8;
    std::uint8_t pad_0[0x4e0]; // 0x0
    std::uint8_t _[0x8]; // 0x4e0 
};

struct CWeaponP90 {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x12a0]; // 0x0
};

struct CNavSpaceInfo {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CPhysSlideConstraint {
    static constexpr std::size_t size = 0x5d0;
    std::uint8_t pad_0[0x510]; // 0x0
    std::uint8_t _[0xc]; // 0x510 
    std::uint8_t _[0x4]; // 0x51c 
    std::uint8_t _[0x4]; // 0x520 
    std::uint8_t _[0x4]; // 0x524 
    std::uint8_t _[0x1]; // 0x528 
    std::uint8_t _[0x3]; // 0x529 
    std::uint8_t _[0x4]; // 0x52c 
    std::uint8_t _[0x4]; // 0x530 
    std::uint8_t _[0x4]; // 0x534 
    std::uint8_t _[0x98]; // 0x538 
};

struct CPulseGameBlackboard {
    static constexpr std::size_t size = 0x4c0;
    std::uint8_t pad_0[0x4b0]; // 0x0
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x8]; // 0x4b8 
};

struct CSoundEventEntityAlias_snd_event_point {
    static constexpr std::size_t size = 0x568;
    std::uint8_t pad_0[0x568]; // 0x0
};

struct CChoreoComponent {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x28]; // 0x8 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x38]; // 0x38 
    std::uint8_t _[0x4]; // 0x70 
    std::uint8_t _[0xc]; // 0x74 
};

struct CPulseCell_Value_RandomInt {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPointGamestatsCounter {
    static constexpr std::size_t size = 0x4b8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x8]; // 0x4b0 
};

struct CTextureBasedAnimatable {
    static constexpr std::size_t size = 0x888;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x4]; // 0x850 
    std::uint8_t _[0x4]; // 0x854 
    std::uint8_t _[0x8]; // 0x858 
    std::uint8_t _[0x8]; // 0x860 
    std::uint8_t _[0xc]; // 0x868 
    std::uint8_t _[0xc]; // 0x874 
    std::uint8_t _[0x4]; // 0x880 
    std::uint8_t _[0x4]; // 0x884 
};

struct CSprite {
    static constexpr std::size_t size = 0x8c0;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x8]; // 0x850 
    std::uint8_t _[0x4]; // 0x858 
    std::uint8_t _[0x4]; // 0x85c 
    std::uint8_t _[0x4]; // 0x860 
    std::uint8_t _[0x4]; // 0x864 
    std::uint8_t _[0x10]; // 0x868 
    std::uint8_t _[0x4]; // 0x878 
    std::uint8_t _[0x4]; // 0x87c 
    std::uint8_t _[0x4]; // 0x880 
    std::uint8_t _[0x4]; // 0x884 
    std::uint8_t _[0x4]; // 0x888 
    std::uint8_t _[0x4]; // 0x88c 
    std::uint8_t _[0x4]; // 0x890 
    std::uint8_t _[0x4]; // 0x894 
    std::uint8_t _[0x4]; // 0x898 
    std::uint8_t _[0x4]; // 0x89c 
    std::uint8_t _[0x4]; // 0x8a0 
    std::uint8_t _[0x4]; // 0x8a4 
    std::uint8_t _[0x4]; // 0x8a8 
    std::uint8_t _[0x4]; // 0x8ac 
    std::uint8_t _[0x4]; // 0x8b0 
    std::uint8_t _[0x4]; // 0x8b4 
    std::uint8_t _[0x4]; // 0x8b8 
    std::uint8_t _[0x4]; // 0x8bc 
};

struct CDynamicLight {
    static constexpr std::size_t size = 0x868;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x1]; // 0x850 
    std::uint8_t _[0x1]; // 0x851 
    std::uint8_t _[0x1]; // 0x852 
    std::uint8_t _[0x1]; // 0x853 
    std::uint8_t _[0x4]; // 0x854 
    std::uint8_t _[0x4]; // 0x858 
    std::uint8_t _[0x4]; // 0x85c 
    std::uint8_t _[0x4]; // 0x860 
    std::uint8_t _[0x4]; // 0x864 
};

struct CWeaponTaser {
    static constexpr std::size_t size = 0x12b0;
    std::uint8_t pad_0[0x12a0]; // 0x0
    std::uint8_t _[0x4]; // 0x12a0 
    std::uint8_t _[0xc]; // 0x12a4 
};

struct CEnvCubemapBox {
    static constexpr std::size_t size = 0x590;
    std::uint8_t pad_0[0x590]; // 0x0
};

struct CRotDoor {
    static constexpr std::size_t size = 0xa60;
    std::uint8_t pad_0[0xa58]; // 0x0
    std::uint8_t _[0x8]; // 0xa58 
};

struct CPathMover {
    static constexpr std::size_t size = 0x650;
    std::uint8_t pad_0[0x600]; // 0x0
    std::uint8_t _[0x18]; // 0x600 
    std::uint8_t _[0x18]; // 0x618 
    std::uint8_t _[0x8]; // 0x630 
    std::uint8_t _[0x8]; // 0x638 
    std::uint8_t _[0x8]; // 0x640 
    std::uint8_t _[0x8]; // 0x648 
};

struct CFuncVPhysicsClip {
    static constexpr std::size_t size = 0x858;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x8]; // 0x850 
};

struct CCSRadarElement {
    static constexpr std::size_t size = 0x4d0;
    std::uint8_t pad_0[0x4c0]; // 0x0
    std::uint8_t _[0x4]; // 0x4c0 
    std::uint8_t _[0x4]; // 0x4c4 
    std::uint8_t _[0x8]; // 0x4c8 
};

struct CPhysFixed {
    static constexpr std::size_t size = 0x530;
    std::uint8_t pad_0[0x508]; // 0x0
    std::uint8_t _[0x4]; // 0x508 
    std::uint8_t _[0x4]; // 0x50c 
    std::uint8_t _[0x4]; // 0x510 
    std::uint8_t _[0x4]; // 0x514 
    std::uint8_t _[0x1]; // 0x518 
    std::uint8_t _[0x7]; // 0x519 
    std::uint8_t _[0x8]; // 0x520 
    std::uint8_t _[0x8]; // 0x528 
};

struct CLogicNavigation {
    static constexpr std::size_t size = 0x4b8;
    std::uint8_t pad_0[0x4b0]; // 0x0
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b4 
};

struct CPathSimple {
    static constexpr std::size_t size = 0x5b0;
    std::uint8_t pad_0[0x4b0]; // 0x0
    std::uint8_t _[0xf0]; // 0x4b0 
    std::uint8_t _[0x8]; // 0x5a0 
    std::uint8_t _[0x8]; // 0x5a8 
};

struct CPathParticleRopeAlias_path_particle_rope_clientside {
    static constexpr std::size_t size = 0x590;
    std::uint8_t pad_0[0x590]; // 0x0
};

struct CFuncElectrifiedVolume {
    static constexpr std::size_t size = 0x8a8;
    std::uint8_t pad_0[0x870]; // 0x0
    std::uint8_t _[0x8]; // 0x870 
    std::uint8_t _[0x8]; // 0x878 
    std::uint8_t _[0x8]; // 0x880 
    std::uint8_t _[0x20]; // 0x888 
};

struct CCSMinimapBoundary {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct EntitySpottedState_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0xc]; // 0xc 
};

struct fogparams_t {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0xc]; // 0x8 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
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
    std::uint8_t _[0x1]; // 0x64 
    std::uint8_t _[0x1]; // 0x65 
    std::uint8_t _[0x1]; // 0x66 
    std::uint8_t _[0x1]; // 0x67 
};

struct CSoundEventOBBEntity {
    static constexpr std::size_t size = 0x590;
    std::uint8_t pad_0[0x568]; // 0x0
    std::uint8_t _[0xc]; // 0x568 
    std::uint8_t _[0x1c]; // 0x574 
};

struct CFlashbangProjectile {
    static constexpr std::size_t size = 0xb50;
    std::uint8_t pad_0[0xb40]; // 0x0
    std::uint8_t _[0x4]; // 0xb40 
    std::uint8_t _[0x1]; // 0xb44 
    std::uint8_t _[0xb]; // 0xb45 
};

struct CTriggerMultiple {
    static constexpr std::size_t size = 0x9e0;
    std::uint8_t pad_0[0x9c8]; // 0x0
    std::uint8_t _[0x18]; // 0x9c8 
};

struct CPhysBallSocket {
    static constexpr std::size_t size = 0x520;
    std::uint8_t pad_0[0x508]; // 0x0
    std::uint8_t _[0x4]; // 0x508 
    std::uint8_t _[0x4]; // 0x50c 
    std::uint8_t _[0x4]; // 0x510 
    std::uint8_t _[0x4]; // 0x514 
    std::uint8_t _[0x4]; // 0x518 
    std::uint8_t _[0x4]; // 0x51c 
};

struct CDebugHistory {
    static constexpr std::size_t size = 0x3e9490;
    std::uint8_t pad_0[0x3e84e8]; // 0x0
    std::uint8_t _[0xfa8]; // 0x3e84e8 
};

struct CSoundOpvarSetPointBase {
    static constexpr std::size_t size = 0x550;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x1c]; // 0x4ac 
    std::uint8_t _[0x58]; // 0x4c8 
    std::uint8_t _[0xc]; // 0x520 
    std::uint8_t _[0x4]; // 0x52c 
    std::uint8_t _[0x8]; // 0x530 
    std::uint8_t _[0x8]; // 0x538 
    std::uint8_t _[0x8]; // 0x540 
    std::uint8_t _[0x4]; // 0x548 
    std::uint8_t _[0x1]; // 0x54c 
    std::uint8_t _[0x3]; // 0x54d 
};

struct CExplosionTypeData {
    static constexpr std::size_t size = 0x100;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0xe0]; // 0x10 
    std::uint8_t _[0x1]; // 0xf0 
    std::uint8_t _[0x7]; // 0xf1 
    std::uint8_t _[0x8]; // 0xf8 
};

struct CPathKeyFrame {
    static constexpr std::size_t size = 0x4f0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0xc]; // 0x4a8 
    std::uint8_t _[0xc]; // 0x4b4 
    std::uint8_t _[0x10]; // 0x4c0 
    std::uint8_t _[0x8]; // 0x4d0 
    std::uint8_t _[0x4]; // 0x4d8 
    std::uint8_t _[0x4]; // 0x4dc 
    std::uint8_t _[0x4]; // 0x4e0 
    std::uint8_t _[0xc]; // 0x4e4 
};

struct CWeaponCZ75a {
    static constexpr std::size_t size = 0x12b0;
    std::uint8_t pad_0[0x12a0]; // 0x0
    std::uint8_t _[0x10]; // 0x12a0 
};

struct CScriptTriggerPush {
    static constexpr std::size_t size = 0xa10;
    std::uint8_t pad_0[0xa00]; // 0x0
    std::uint8_t _[0x10]; // 0xa00 
};

struct CRevertSaved {
    static constexpr std::size_t size = 0x860;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x4]; // 0x850 
    std::uint8_t _[0x4]; // 0x854 
    std::uint8_t _[0x8]; // 0x858 
};

struct CTriggerBombReset {
    static constexpr std::size_t size = 0x9c8;
    std::uint8_t pad_0[0x9c8]; // 0x0
};

struct CTriggerHurt {
    static constexpr std::size_t size = 0xa50;
    std::uint8_t pad_0[0x9c8]; // 0x0
    std::uint8_t _[0x4]; // 0x9c8 
    std::uint8_t _[0x4]; // 0x9cc 
    std::uint8_t _[0x4]; // 0x9d0 
    std::uint8_t _[0x4]; // 0x9d4 
    std::uint8_t _[0x4]; // 0x9d8 
    std::uint8_t _[0x4]; // 0x9dc 
    std::uint8_t _[0x4]; // 0x9e0 
    std::uint8_t _[0x4]; // 0x9e4 
    std::uint8_t _[0xc]; // 0x9e8 
    std::uint8_t _[0x4]; // 0x9f4 
    std::uint8_t _[0x8]; // 0x9f8 
    std::uint8_t _[0x18]; // 0xa00 
    std::uint8_t _[0x18]; // 0xa18 
    std::uint8_t _[0x20]; // 0xa30 
};

struct CCSPlayer_WeaponServices {
    static constexpr std::size_t size = 0x18b8;
    std::uint8_t pad_0[0xc0]; // 0x0
    std::uint8_t _[0x4]; // 0xc0 
    std::uint8_t _[0x4]; // 0xc4 
    std::uint8_t _[0x4]; // 0xc8 
    std::uint8_t _[0x4]; // 0xcc 
    std::uint8_t _[0x4]; // 0xd0 
    std::uint8_t _[0x4]; // 0xd4 
    std::uint8_t _[0x1]; // 0xd8 
    std::uint8_t _[0x1]; // 0xd9 
    std::uint8_t _[0x1]; // 0xda 
    std::uint8_t _[0x1]; // 0xdb 
    std::uint8_t _[0x17bc]; // 0xdc 
    std::uint8_t _[0x18]; // 0x1898 
    std::uint8_t _[0x8]; // 0x18b0 
};

struct CSkyCameraVolume {
    static constexpr std::size_t size = 0x500;
    std::uint8_t pad_0[0x4c0]; // 0x0
    std::uint8_t _[0xc]; // 0x4c0 
    std::uint8_t _[0xc]; // 0x4cc 
    std::uint8_t _[0x4]; // 0x4d8 
    std::uint8_t _[0x4]; // 0x4dc 
    std::uint8_t _[0x1]; // 0x4e0 
    std::uint8_t _[0x3]; // 0x4e1 
    std::uint8_t _[0xc]; // 0x4e4 
    std::uint8_t _[0x1]; // 0x4f0 
    std::uint8_t _[0x1]; // 0x4f1 
    std::uint8_t _[0x6]; // 0x4f2 
    std::uint8_t _[0x8]; // 0x4f8 
};

struct CRetakeGameRules {
    static constexpr std::size_t size = 0x1f0;
    std::uint8_t pad_0[0x138]; // 0x0
    std::uint8_t _[0x4]; // 0x138 
    std::uint8_t _[0x1]; // 0x13c 
    std::uint8_t _[0x3]; // 0x13d 
    std::uint8_t _[0x4]; // 0x140 
    std::uint8_t _[0x4]; // 0x144 
    std::uint8_t _[0xa8]; // 0x148 
};

struct CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
    static constexpr std::size_t size = 0x538;
    std::uint8_t pad_0[0x538]; // 0x0
};

struct CInfoInstructorHintBombTargetA {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CTeamplayRules {
    static constexpr std::size_t size = 0xd0;
    std::uint8_t pad_0[0xd0]; // 0x0
};

struct CScriptTriggerHurt {
    static constexpr std::size_t size = 0xa60;
    std::uint8_t pad_0[0xa50]; // 0x0
    std::uint8_t _[0x10]; // 0xa50 
};

struct CCSCustomHudLayoutState {
    static constexpr std::size_t size = 0x198;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x60]; // 0x38 
    std::uint8_t _[0x100]; // 0x98 
};

struct CCSGO_WingmanIntroCharacterPosition {
    static constexpr std::size_t size = 0x1468;
    std::uint8_t pad_0[0x1468]; // 0x0
};

struct CWeaponMP9 {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x12a0]; // 0x0
};

struct CTriggerDetectExplosion {
    static constexpr std::size_t size = 0xa08;
    std::uint8_t pad_0[0x9f0]; // 0x0
    std::uint8_t _[0x18]; // 0x9f0 
};

struct CFilterName {
    static constexpr std::size_t size = 0x4e8;
    std::uint8_t pad_0[0x4e0]; // 0x0
    std::uint8_t _[0x8]; // 0x4e0 
};

struct CPulseCell_ApplyDynamicAttributeString {
    static constexpr std::size_t size = 0xd8;
    std::uint8_t pad_0[0xd8]; // 0x0
};

struct CSmokeGrenadeProjectile {
    static constexpr std::size_t size = 0x2e50;
    std::uint8_t pad_0[0xb68]; // 0x0
    std::uint8_t _[0x4]; // 0xb68 
    std::uint8_t _[0x4]; // 0xb6c 
    std::uint8_t _[0x4]; // 0xb70 
    std::uint8_t _[0xc]; // 0xb74 
    std::uint8_t _[0x10]; // 0xb80 
    std::uint8_t _[0x18]; // 0xb90 
    std::uint8_t _[0x4]; // 0xba8 
    std::uint8_t _[0x4]; // 0xbac 
    std::uint8_t _[0x4]; // 0xbb0 
    std::uint8_t _[0x4]; // 0xbb4 
    std::uint8_t _[0x2288]; // 0xbb8 
    std::uint8_t _[0x1]; // 0x2e40 
    std::uint8_t _[0xf]; // 0x2e41 
};

struct CBlood {
    static constexpr std::size_t size = 0x4c8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0xc]; // 0x4a8 
    std::uint8_t _[0xc]; // 0x4b4 
    std::uint8_t _[0x4]; // 0x4c0 
    std::uint8_t _[0x4]; // 0x4c4 
};

struct CCSTeam {
    static constexpr std::size_t size = 0x820;
    std::uint8_t pad_0[0x560]; // 0x0
    std::uint8_t _[0x4]; // 0x560 
    std::uint8_t _[0x4]; // 0x564 
    std::uint8_t _[0x1]; // 0x568 
    std::uint8_t _[0x203]; // 0x569 
    std::uint8_t _[0x4]; // 0x76c 
    std::uint8_t _[0x4]; // 0x770 
    std::uint8_t _[0x4]; // 0x774 
    std::uint8_t _[0x4]; // 0x778 
    std::uint8_t _[0x84]; // 0x77c 
    std::uint8_t _[0x4]; // 0x800 
    std::uint8_t _[0x8]; // 0x804 
    std::uint8_t _[0x8]; // 0x80c 
    std::uint8_t _[0x4]; // 0x814 
    std::uint8_t _[0x8]; // 0x818 
};

struct CRulePointEntity {
    static constexpr std::size_t size = 0x860;
    std::uint8_t pad_0[0x858]; // 0x0
    std::uint8_t _[0x8]; // 0x858 
};

struct CPulse_CallInfo {
    static constexpr std::size_t size = 0x60;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x30]; // 0x18 
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0x4]; // 0x54 
    std::uint8_t _[0x8]; // 0x58 
};

struct CFuncMoveLinearAlias_momentary_door {
    static constexpr std::size_t size = 0x958;
    std::uint8_t pad_0[0x958]; // 0x0
};

struct CBaseAnimGraph {
    static constexpr std::size_t size = 0xa40;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x98]; // 0x850 
    std::uint8_t _[0x8]; // 0x8e8 
    std::uint8_t _[0x8]; // 0x8f0 
    std::uint8_t _[0x20]; // 0x8f8 
    std::uint8_t _[0x18]; // 0x918 
    std::uint8_t _[0x8]; // 0x930 
    std::uint8_t _[0x1]; // 0x938 
    std::uint8_t _[0x3]; // 0x939 
    std::uint8_t _[0xc]; // 0x93c 
    std::uint8_t _[0x10]; // 0x948 
    std::uint8_t _[0x8]; // 0x958 
    std::uint8_t _[0x28]; // 0x960 
    std::uint8_t _[0x1]; // 0x988 
    std::uint8_t _[0x1]; // 0x989 
    std::uint8_t _[0x6]; // 0x98a 
    std::uint8_t _[0xb0]; // 0x990 
};

struct CEnvCubemapFog {
    static constexpr std::size_t size = 0x5a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b4 
    std::uint8_t _[0x4]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4bc 
    std::uint8_t _[0x4]; // 0x4c0 
    std::uint8_t _[0x4]; // 0x4c4 
    std::uint8_t _[0x4]; // 0x4c8 
    std::uint8_t _[0x1]; // 0x4cc 
    std::uint8_t _[0x3]; // 0x4cd 
    std::uint8_t _[0x4]; // 0x4d0 
    std::uint8_t _[0x4]; // 0x4d4 
    std::uint8_t _[0x8]; // 0x4d8 
    std::uint8_t _[0x8]; // 0x4e0 
    std::uint8_t _[0x4]; // 0x4e8 
    std::uint8_t _[0x4]; // 0x4ec 
    std::uint8_t _[0x4]; // 0x4f0 
    std::uint8_t _[0x4]; // 0x4f4 
    std::uint8_t _[0x8]; // 0x4f8 
    std::uint8_t _[0x98]; // 0x500 
    std::uint8_t _[0x8]; // 0x598 
    std::uint8_t _[0x1]; // 0x5a0 
    std::uint8_t _[0x7]; // 0x5a1 
};

struct CPulseCell_InlineNodeSkipSelector {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x18]; // 0x50 
    std::uint8_t _[0x48]; // 0x68 
};

struct CBaseDoor {
    static constexpr std::size_t size = 0xa58;
    std::uint8_t pad_0[0x8e0]; // 0x0
    std::uint8_t _[0xc]; // 0x8e0 
    std::uint8_t _[0xc]; // 0x8ec 
    std::uint8_t _[0x20]; // 0x8f8 
    std::uint8_t _[0x1]; // 0x918 
    std::uint8_t _[0x1]; // 0x919 
    std::uint8_t _[0x1]; // 0x91a 
    std::uint8_t _[0x1]; // 0x91b 
    std::uint8_t _[0x4]; // 0x91c 
    std::uint8_t _[0x4]; // 0x920 
    std::uint8_t _[0x4]; // 0x924 
    std::uint8_t _[0x8]; // 0x928 
    std::uint8_t _[0x8]; // 0x930 
    std::uint8_t _[0x8]; // 0x938 
    std::uint8_t _[0x8]; // 0x940 
    std::uint8_t _[0x8]; // 0x948 
    std::uint8_t _[0x18]; // 0x950 
    std::uint8_t _[0x18]; // 0x968 
    std::uint8_t _[0x18]; // 0x980 
    std::uint8_t _[0x18]; // 0x998 
    std::uint8_t _[0x18]; // 0x9b0 
    std::uint8_t _[0x18]; // 0x9c8 
    std::uint8_t _[0x18]; // 0x9e0 
    std::uint8_t _[0x18]; // 0x9f8 
    std::uint8_t _[0x18]; // 0xa10 
    std::uint8_t _[0x20]; // 0xa28 
    std::uint8_t _[0x4]; // 0xa48 
    std::uint8_t _[0x4]; // 0xa4c 
    std::uint8_t _[0x1]; // 0xa50 
    std::uint8_t _[0x7]; // 0xa51 
};

struct CServerOnlyPointEntity {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CGameMoney {
    static constexpr std::size_t size = 0x8a0;
    std::uint8_t pad_0[0x860]; // 0x0
    std::uint8_t _[0x18]; // 0x860 
    std::uint8_t _[0x18]; // 0x878 
    std::uint8_t _[0x8]; // 0x890 
    std::uint8_t _[0x8]; // 0x898 
};

struct CEnvHudHint {
    static constexpr std::size_t size = 0x4b0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
};

struct CNullEntity {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CLogicalEntity {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CItemDefuser {
    static constexpr std::size_t size = 0xb00;
    std::uint8_t pad_0[0xae0]; // 0x0
    std::uint8_t _[0x18]; // 0xae0 
    std::uint8_t _[0x8]; // 0xaf8 
};

struct CItemGenericTriggerHelper {
    static constexpr std::size_t size = 0x858;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x8]; // 0x850 
};

struct CPlayer_WeaponServices {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x18]; // 0x48 
    std::uint8_t _[0x4]; // 0x60 
    std::uint8_t _[0x4]; // 0x64 
    std::uint8_t _[0x40]; // 0x68 
    std::uint8_t _[0x8]; // 0xa8 
};

struct CRagdollPropAttached {
    static constexpr std::size_t size = 0xc40;
    std::uint8_t pad_0[0xc00]; // 0x0
    std::uint8_t _[0x4]; // 0xc00 
    std::uint8_t _[0x4]; // 0xc04 
    std::uint8_t _[0xc]; // 0xc08 
    std::uint8_t _[0xc]; // 0xc14 
    std::uint8_t _[0x10]; // 0xc20 
    std::uint8_t _[0x10]; // 0xc30 
};

struct CItemDogtags {
    static constexpr std::size_t size = 0xaf0;
    std::uint8_t pad_0[0xae0]; // 0x0
    std::uint8_t _[0x4]; // 0xae0 
    std::uint8_t _[0xc]; // 0xae4 
};

struct CFuncPlat {
    static constexpr std::size_t size = 0x908;
    std::uint8_t pad_0[0x8f8]; // 0x0
    std::uint8_t _[0x8]; // 0x8f8 
    std::uint8_t _[0x8]; // 0x900 
};

struct CBarnLight {
    static constexpr std::size_t size = 0xb38;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x4]; // 0x850 
    std::uint8_t _[0x4]; // 0x854 
    std::uint8_t _[0x4]; // 0x858 
    std::uint8_t _[0x4]; // 0x85c 
    std::uint8_t _[0x4]; // 0x860 
    std::uint8_t _[0x4]; // 0x864 
    std::uint8_t _[0x4]; // 0x868 
    std::uint8_t _[0x4]; // 0x86c 
    std::uint8_t _[0x4]; // 0x870 
    std::uint8_t _[0x4]; // 0x874 
    std::uint8_t _[0x4]; // 0x878 
    std::uint8_t _[0x4]; // 0x87c 
    std::uint8_t _[0x8]; // 0x880 
    std::uint8_t _[0x8]; // 0x888 
    std::uint8_t _[0x8]; // 0x890 
    std::uint8_t _[0x18]; // 0x898 
    std::uint8_t _[0x18]; // 0x8b0 
    std::uint8_t _[0x18]; // 0x8c8 
    std::uint8_t _[0x80]; // 0x8e0 
    std::uint8_t _[0x8]; // 0x960 
    std::uint8_t _[0x4]; // 0x968 
    std::uint8_t _[0x4]; // 0x96c 
    std::uint8_t _[0x4]; // 0x970 
    std::uint8_t _[0x4]; // 0x974 
    std::uint8_t _[0x4]; // 0x978 
    std::uint8_t _[0xc]; // 0x97c 
    std::uint8_t _[0x4]; // 0x988 
    std::uint8_t _[0xc]; // 0x98c 
    std::uint8_t _[0x4]; // 0x998 
    std::uint8_t _[0xc]; // 0x99c 
    std::uint8_t _[0x4]; // 0x9a8 
    std::uint8_t _[0x4]; // 0x9ac 
    std::uint8_t _[0x4]; // 0x9b0 
    std::uint8_t _[0x4]; // 0x9b4 
    std::uint8_t _[0x1]; // 0x9b8 
    std::uint8_t _[0x3]; // 0x9b9 
    std::uint8_t _[0x4]; // 0x9bc 
    std::uint8_t _[0x4]; // 0x9c0 
    std::uint8_t _[0x4]; // 0x9c4 
    std::uint8_t _[0xc]; // 0x9c8 
    std::uint8_t _[0x4]; // 0x9d4 
    std::uint8_t _[0x4]; // 0x9d8 
    std::uint8_t _[0x4]; // 0x9dc 
    std::uint8_t _[0x4]; // 0x9e0 
    std::uint8_t _[0x4]; // 0x9e4 
    std::uint8_t _[0x4]; // 0x9e8 
    std::uint8_t _[0x4]; // 0x9ec 
    std::uint8_t _[0x4]; // 0x9f0 
    std::uint8_t _[0x4]; // 0x9f4 
    std::uint8_t _[0x4]; // 0x9f8 
    std::uint8_t _[0xc]; // 0x9fc 
    std::uint8_t _[0xc]; // 0xa08 
    std::uint8_t _[0xc]; // 0xa14 
    std::uint8_t _[0xc]; // 0xa20 
    std::uint8_t _[0xc]; // 0xa2c 
    std::uint8_t _[0x4]; // 0xa38 
    std::uint8_t _[0xc]; // 0xa3c 
    std::uint8_t _[0xc]; // 0xa48 
    std::uint8_t _[0xc]; // 0xa54 
    std::uint8_t _[0xc]; // 0xa60 
    std::uint8_t _[0xc]; // 0xa6c 
    std::uint8_t _[0xc]; // 0xa78 
    std::uint8_t _[0xc]; // 0xa84 
    std::uint8_t _[0xc]; // 0xa90 
    std::uint8_t _[0xc]; // 0xa9c 
    std::uint8_t _[0xc]; // 0xaa8 
    std::uint8_t _[0xc]; // 0xab4 
    std::uint8_t _[0xc]; // 0xac0 
    std::uint8_t _[0xc]; // 0xacc 
    std::uint8_t _[0xc]; // 0xad8 
    std::uint8_t _[0xc]; // 0xae4 
    std::uint8_t _[0xc]; // 0xaf0 
    std::uint8_t _[0xc]; // 0xafc 
    std::uint8_t _[0xc]; // 0xb08 
    std::uint8_t _[0x1]; // 0xb14 
    std::uint8_t _[0x3]; // 0xb15 
    std::uint8_t _[0x20]; // 0xb18 
};

struct CInstructorEventEntity {
    static constexpr std::size_t size = 0x4c0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x8]; // 0x4b8 
};

struct CWeaponTec9 {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x12a0]; // 0x0
};

struct CPathCorner {
    static constexpr std::size_t size = 0x4e0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x1]; // 0x4a8 
    std::uint8_t _[0x1]; // 0x4a9 
    std::uint8_t _[0x2]; // 0x4aa 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b4 
    std::uint8_t _[0x4]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4bc 
    std::uint8_t _[0x8]; // 0x4c0 
    std::uint8_t _[0x18]; // 0x4c8 
};

struct CTriggerSndSosOpvar {
    static constexpr std::size_t size = 0xd28;
    std::uint8_t pad_0[0x9c8]; // 0x0
    std::uint8_t _[0x18]; // 0x9c8 
    std::uint8_t _[0xc]; // 0x9e0 
    std::uint8_t _[0x4]; // 0x9ec 
    std::uint8_t _[0x4]; // 0x9f0 
    std::uint8_t _[0x4]; // 0x9f4 
    std::uint8_t _[0x8]; // 0x9f8 
    std::uint8_t _[0x8]; // 0xa00 
    std::uint8_t _[0x8]; // 0xa08 
    std::uint8_t _[0x1]; // 0xa10 
    std::uint8_t _[0x100]; // 0xa11 
    std::uint8_t _[0x100]; // 0xb11 
    std::uint8_t _[0x103]; // 0xc11 
    std::uint8_t _[0xc]; // 0xd14 
    std::uint8_t _[0x8]; // 0xd20 
};

struct CPulseCell_LimitCount {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x48]; // 0x0
    std::uint8_t _[0x8]; // 0x48 
};

struct CPulseCell_Step_CallExternalMethod {
    static constexpr std::size_t size = 0x150;
    std::uint8_t pad_0[0xd8]; // 0x0
    std::uint8_t _[0x10]; // 0xd8 
    std::uint8_t _[0x8]; // 0xe8 
    std::uint8_t _[0x10]; // 0xf0 
    std::uint8_t _[0x8]; // 0x100 
    std::uint8_t _[0x48]; // 0x108 
};

struct CPointCommentaryNode {
    static constexpr std::size_t size = 0xb20;
    std::uint8_t pad_0[0xa40]; // 0x0
    std::uint8_t _[0x8]; // 0xa40 
    std::uint8_t _[0x8]; // 0xa48 
    std::uint8_t _[0x8]; // 0xa50 
    std::uint8_t _[0x8]; // 0xa58 
    std::uint8_t _[0x4]; // 0xa60 
    std::uint8_t _[0x4]; // 0xa64 
    std::uint8_t _[0x8]; // 0xa68 
    std::uint8_t _[0x4]; // 0xa70 
    std::uint8_t _[0x4]; // 0xa74 
    std::uint8_t _[0x1]; // 0xa78 
    std::uint8_t _[0x1]; // 0xa79 
    std::uint8_t _[0x2]; // 0xa7a 
    std::uint8_t _[0x4]; // 0xa7c 
    std::uint8_t _[0xc]; // 0xa80 
    std::uint8_t _[0xc]; // 0xa8c 
    std::uint8_t _[0xc]; // 0xa98 
    std::uint8_t _[0x1]; // 0xaa4 
    std::uint8_t _[0x3]; // 0xaa5 
    std::uint8_t _[0xc]; // 0xaa8 
    std::uint8_t _[0x4]; // 0xab4 
    std::uint8_t _[0x18]; // 0xab8 
    std::uint8_t _[0x18]; // 0xad0 
    std::uint8_t _[0x4]; // 0xae8 
    std::uint8_t _[0x4]; // 0xaec 
    std::uint8_t _[0x8]; // 0xaf0 
    std::uint8_t _[0x8]; // 0xaf8 
    std::uint8_t _[0x8]; // 0xb00 
    std::uint8_t _[0x4]; // 0xb08 
    std::uint8_t _[0x4]; // 0xb0c 
    std::uint8_t _[0x10]; // 0xb10 
};

struct CMomentaryRotButton {
    static constexpr std::size_t size = 0xa88;
    std::uint8_t pad_0[0x9d0]; // 0x0
    std::uint8_t _[0x20]; // 0x9d0 
    std::uint8_t _[0x18]; // 0x9f0 
    std::uint8_t _[0x18]; // 0xa08 
    std::uint8_t _[0x18]; // 0xa20 
    std::uint8_t _[0x18]; // 0xa38 
    std::uint8_t _[0x4]; // 0xa50 
    std::uint8_t _[0xc]; // 0xa54 
    std::uint8_t _[0xc]; // 0xa60 
    std::uint8_t _[0x4]; // 0xa6c 
    std::uint8_t _[0x8]; // 0xa70 
    std::uint8_t _[0x4]; // 0xa78 
    std::uint8_t _[0x4]; // 0xa7c 
    std::uint8_t _[0x4]; // 0xa80 
    std::uint8_t _[0x4]; // 0xa84 
};

struct CSceneListManager {
    static constexpr std::size_t size = 0x580;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x18]; // 0x4a8 
    std::uint8_t _[0x80]; // 0x4c0 
    std::uint8_t _[0x40]; // 0x540 
};

struct CEnvTilt {
    static constexpr std::size_t size = 0x4b8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b4 
};

struct CEnvSoundscapeTriggerable {
    static constexpr std::size_t size = 0x538;
    std::uint8_t pad_0[0x538]; // 0x0
};

struct CFuncMover {
    static constexpr std::size_t size = 0xb40;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x8]; // 0x850 
    std::uint8_t _[0x4]; // 0x858 
    std::uint8_t _[0x4]; // 0x85c 
    std::uint8_t _[0x8]; // 0x860 
    std::uint8_t _[0x8]; // 0x868 
    std::uint8_t _[0x4]; // 0x870 
    std::uint8_t _[0x4]; // 0x874 
    std::uint8_t _[0x4]; // 0x878 
    std::uint8_t _[0x4]; // 0x87c 
    std::uint8_t _[0x4]; // 0x880 
    std::uint8_t _[0x4]; // 0x884 
    std::uint8_t _[0x4]; // 0x888 
    std::uint8_t _[0x4]; // 0x88c 
    std::uint8_t _[0x1]; // 0x890 
    std::uint8_t _[0x3]; // 0x891 
    std::uint8_t _[0x4]; // 0x894 
    std::uint8_t _[0x4]; // 0x898 
    std::uint8_t _[0x4]; // 0x89c 
    std::uint8_t _[0x4]; // 0x8a0 
    std::uint8_t _[0x4]; // 0x8a4 
    std::uint8_t _[0x4]; // 0x8a8 
    std::uint8_t _[0x4]; // 0x8ac 
    std::uint8_t _[0x4]; // 0x8b0 
    std::uint8_t _[0x4]; // 0x8b4 
    std::uint8_t _[0x4]; // 0x8b8 
    std::uint8_t _[0x4]; // 0x8bc 
    std::uint8_t _[0x4]; // 0x8c0 
    std::uint8_t _[0x4]; // 0x8c4 
    std::uint8_t _[0x8]; // 0x8c8 
    std::uint8_t _[0x8]; // 0x8d0 
    std::uint8_t _[0x8]; // 0x8d8 
    std::uint8_t _[0x8]; // 0x8e0 
    std::uint8_t _[0x8]; // 0x8e8 
    std::uint8_t _[0x8]; // 0x8f0 
    std::uint8_t _[0x8]; // 0x8f8 
    std::uint8_t _[0x20]; // 0x900 
    std::uint8_t _[0x18]; // 0x920 
    std::uint8_t _[0x1]; // 0x938 
    std::uint8_t _[0x1]; // 0x939 
    std::uint8_t _[0x2]; // 0x93a 
    std::uint8_t _[0x4]; // 0x93c 
    std::uint8_t _[0x4]; // 0x940 
    std::uint8_t _[0x4]; // 0x944 
    std::uint8_t _[0x4]; // 0x948 
    std::uint8_t _[0x4]; // 0x94c 
    std::uint8_t _[0x4]; // 0x950 
    std::uint8_t _[0x1]; // 0x954 
    std::uint8_t _[0x1]; // 0x955 
    std::uint8_t _[0x2]; // 0x956 
    std::uint8_t _[0x20]; // 0x958 
    std::uint8_t _[0x8]; // 0x978 
    std::uint8_t _[0x4]; // 0x980 
    std::uint8_t _[0xc]; // 0x984 
    std::uint8_t _[0x4]; // 0x990 
    std::uint8_t _[0x4]; // 0x994 
    std::uint8_t _[0x4]; // 0x998 
    std::uint8_t _[0x4]; // 0x99c 
    std::uint8_t _[0x4]; // 0x9a0 
    std::uint8_t _[0x4]; // 0x9a4 
    std::uint8_t _[0x8]; // 0x9a8 
    std::uint8_t _[0x8]; // 0x9b0 
    std::uint8_t _[0x18]; // 0x9b8 
    std::uint8_t _[0x4]; // 0x9d0 
    std::uint8_t _[0xc]; // 0x9d4 
    std::uint8_t _[0x10]; // 0x9e0 
    std::uint8_t _[0x4]; // 0x9f0 
    std::uint8_t _[0x1]; // 0x9f4 
    std::uint8_t _[0x3]; // 0x9f5 
    std::uint8_t _[0x4]; // 0x9f8 
    std::uint8_t _[0x4]; // 0x9fc 
    std::uint8_t _[0x4]; // 0xa00 
    std::uint8_t _[0x4]; // 0xa04 
    std::uint8_t _[0x4]; // 0xa08 
    std::uint8_t _[0x4]; // 0xa0c 
    std::uint8_t _[0x8]; // 0xa10 
    std::uint8_t _[0x8]; // 0xa18 
    std::uint8_t _[0x18]; // 0xa20 
    std::uint8_t _[0x18]; // 0xa38 
    std::uint8_t _[0x18]; // 0xa50 
    std::uint8_t _[0x18]; // 0xa68 
    std::uint8_t _[0x18]; // 0xa80 
    std::uint8_t _[0x1]; // 0xa98 
    std::uint8_t _[0x1f]; // 0xa99 
    std::uint8_t _[0x4]; // 0xab8 
    std::uint8_t _[0x4]; // 0xabc 
    std::uint8_t _[0x8]; // 0xac0 
    std::uint8_t _[0x8]; // 0xac8 
    std::uint8_t _[0x4]; // 0xad0 
    std::uint8_t _[0x4]; // 0xad4 
    std::uint8_t _[0x4]; // 0xad8 
    std::uint8_t _[0x4]; // 0xadc 
    std::uint8_t _[0x4]; // 0xae0 
    std::uint8_t _[0x8]; // 0xae4 
    std::uint8_t _[0x4]; // 0xaec 
    std::uint8_t _[0x4]; // 0xaf0 
    std::uint8_t _[0x4]; // 0xaf4 
    std::uint8_t _[0x4]; // 0xaf8 
    std::uint8_t _[0x4]; // 0xafc 
    std::uint8_t _[0x20]; // 0xb00 
    std::uint8_t _[0x1]; // 0xb20 
    std::uint8_t _[0x1]; // 0xb21 
    std::uint8_t _[0x1]; // 0xb22 
    std::uint8_t _[0x1]; // 0xb23 
    std::uint8_t _[0x4]; // 0xb24 
    std::uint8_t _[0x4]; // 0xb28 
    std::uint8_t _[0x4]; // 0xb2c 
    std::uint8_t _[0x10]; // 0xb30 
};

struct CPhysicsProp {
    static constexpr std::size_t size = 0xd10;
    std::uint8_t pad_0[0xbe0]; // 0x0
    std::uint8_t _[0x18]; // 0xbe0 
    std::uint8_t _[0x18]; // 0xbf8 
    std::uint8_t _[0x18]; // 0xc10 
    std::uint8_t _[0x18]; // 0xc28 
    std::uint8_t _[0x18]; // 0xc40 
    std::uint8_t _[0x18]; // 0xc58 
    std::uint8_t _[0x18]; // 0xc70 
    std::uint8_t _[0x1]; // 0xc88 
    std::uint8_t _[0x1]; // 0xc89 
    std::uint8_t _[0x2]; // 0xc8a 
    std::uint8_t _[0x4]; // 0xc8c 
    std::uint8_t _[0x4]; // 0xc90 
    std::uint8_t _[0x4]; // 0xc94 
    std::uint8_t _[0x4]; // 0xc98 
    std::uint8_t _[0x4]; // 0xc9c 
    std::uint8_t _[0x1]; // 0xca0 
    std::uint8_t _[0x1]; // 0xca1 
    std::uint8_t _[0x1]; // 0xca2 
    std::uint8_t _[0x1]; // 0xca3 
    std::uint8_t _[0x4]; // 0xca4 
    std::uint8_t _[0x4]; // 0xca8 
    std::uint8_t _[0x4]; // 0xcac 
    std::uint8_t _[0x4]; // 0xcb0 
    std::uint8_t _[0x4]; // 0xcb4 
    std::uint8_t _[0x4]; // 0xcb8 
    std::uint8_t _[0x4]; // 0xcbc 
    std::uint8_t _[0x4]; // 0xcc0 
    std::uint8_t _[0x1]; // 0xcc4 
    std::uint8_t _[0x3]; // 0xcc5 
    std::uint8_t _[0x4]; // 0xcc8 
    std::uint8_t _[0x1]; // 0xccc 
    std::uint8_t _[0x1]; // 0xccd 
    std::uint8_t _[0x1]; // 0xcce 
    std::uint8_t _[0x1]; // 0xccf 
    std::uint8_t _[0x8]; // 0xcd0 
    std::uint8_t _[0x20]; // 0xcd8 
    std::uint8_t _[0x10]; // 0xcf8 
    std::uint8_t _[0x1]; // 0xd08 
    std::uint8_t _[0x1]; // 0xd09 
    std::uint8_t _[0x6]; // 0xd0a 
};

struct CFuncNavObstruction {
    static constexpr std::size_t size = 0x870;
    std::uint8_t pad_0[0x868]; // 0x0
    std::uint8_t _[0x1]; // 0x868 
    std::uint8_t _[0x7]; // 0x869 
};

struct CPhysWheelConstraint {
    static constexpr std::size_t size = 0x540;
    std::uint8_t pad_0[0x508]; // 0x0
    std::uint8_t _[0x4]; // 0x508 
    std::uint8_t _[0x4]; // 0x50c 
    std::uint8_t _[0x4]; // 0x510 
    std::uint8_t _[0x4]; // 0x514 
    std::uint8_t _[0x4]; // 0x518 
    std::uint8_t _[0x4]; // 0x51c 
    std::uint8_t _[0x4]; // 0x520 
    std::uint8_t _[0x4]; // 0x524 
    std::uint8_t _[0x4]; // 0x528 
    std::uint8_t _[0x4]; // 0x52c 
    std::uint8_t _[0x4]; // 0x530 
    std::uint8_t _[0xc]; // 0x534 
};

struct CSkyboxReference {
    static constexpr std::size_t size = 0x4b0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
};

struct CPointPulse {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CMolotovProjectile {
    static constexpr std::size_t size = 0xc40;
    std::uint8_t pad_0[0xb40]; // 0x0
    std::uint8_t _[0x18]; // 0xb40 
    std::uint8_t _[0x8]; // 0xb58 
    std::uint8_t _[0xe0]; // 0xb60 
};

struct CFilterClass {
    static constexpr std::size_t size = 0x4e8;
    std::uint8_t pad_0[0x4e0]; // 0x0
    std::uint8_t _[0x8]; // 0x4e0 
};

struct CPathWithDynamicNodes {
    static constexpr std::size_t size = 0x600;
    std::uint8_t pad_0[0x5b0]; // 0x0
    std::uint8_t _[0x20]; // 0x5b0 
    std::uint8_t _[0x20]; // 0x5d0 
    std::uint8_t _[0x4]; // 0x5f0 
    std::uint8_t _[0xc]; // 0x5f4 
};

struct CColorCorrection {
    static constexpr std::size_t size = 0x6e0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b4 
    std::uint8_t _[0x4]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4bc 
    std::uint8_t _[0x4]; // 0x4c0 
    std::uint8_t _[0x1]; // 0x4c4 
    std::uint8_t _[0x1]; // 0x4c5 
    std::uint8_t _[0x1]; // 0x4c6 
    std::uint8_t _[0x1]; // 0x4c7 
    std::uint8_t _[0x4]; // 0x4c8 
    std::uint8_t _[0x4]; // 0x4cc 
    std::uint8_t _[0x4]; // 0x4d0 
    std::uint8_t _[0x4]; // 0x4d4 
    std::uint8_t _[0x200]; // 0x4d8 
    std::uint8_t _[0x8]; // 0x6d8 
};

struct CPropDoorRotatingBreakable {
    static constexpr std::size_t size = 0xf50;
    std::uint8_t pad_0[0xf30]; // 0x0
    std::uint8_t _[0x1]; // 0xf30 
    std::uint8_t _[0x3]; // 0xf31 
    std::uint8_t _[0x4]; // 0xf34 
    std::uint8_t _[0x18]; // 0xf38 
};

struct CLightDirectionalEntity {
    static constexpr std::size_t size = 0x858;
    std::uint8_t pad_0[0x858]; // 0x0
};

struct CBaseClientUIEntity {
    static constexpr std::size_t size = 0x9b0;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x8]; // 0x850 
    std::uint8_t _[0x8]; // 0x858 
    std::uint8_t _[0x8]; // 0x860 
    std::uint8_t _[0x8]; // 0x868 
    std::uint8_t _[0x20]; // 0x870 
    std::uint8_t _[0x20]; // 0x890 
    std::uint8_t _[0x20]; // 0x8b0 
    std::uint8_t _[0x20]; // 0x8d0 
    std::uint8_t _[0x20]; // 0x8f0 
    std::uint8_t _[0x20]; // 0x910 
    std::uint8_t _[0x20]; // 0x930 
    std::uint8_t _[0x20]; // 0x950 
    std::uint8_t _[0x20]; // 0x970 
    std::uint8_t _[0x20]; // 0x990 
};

struct CBreakable {
    static constexpr std::size_t size = 0x928;
    std::uint8_t pad_0[0x858]; // 0x0
    std::uint8_t _[0x40]; // 0x858 
    std::uint8_t _[0x4]; // 0x898 
    std::uint8_t _[0x4]; // 0x89c 
    std::uint8_t _[0x8]; // 0x8a0 
    std::uint8_t _[0x8]; // 0x8a8 
    std::uint8_t _[0x4]; // 0x8b0 
    std::uint8_t _[0x4]; // 0x8b4 
    std::uint8_t _[0x8]; // 0x8b8 
    std::uint8_t _[0x4]; // 0x8c0 
    std::uint8_t _[0x4]; // 0x8c4 
    std::uint8_t _[0x18]; // 0x8c8 
    std::uint8_t _[0x18]; // 0x8e0 
    std::uint8_t _[0x20]; // 0x8f8 
    std::uint8_t _[0x4]; // 0x918 
    std::uint8_t _[0x4]; // 0x91c 
    std::uint8_t _[0x8]; // 0x920 
};

struct CInfoLandmark {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CBaseFilter {
    static constexpr std::size_t size = 0x4e0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x18]; // 0x4b0 
    std::uint8_t _[0x18]; // 0x4c8 
};

struct WeaponPurchaseTracker_t {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x68]; // 0x8 
};

struct CPulseCell_Outflow_PlaySceneBase__CursorState_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x20]; // 0x8 
};

struct CMapInfo {
    static constexpr std::size_t size = 0x4d8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x1]; // 0x4b4 
    std::uint8_t _[0x3]; // 0x4b5 
    std::uint8_t _[0x4]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4bc 
    std::uint8_t _[0x1]; // 0x4c0 
    std::uint8_t _[0x1]; // 0x4c1 
    std::uint8_t _[0x2]; // 0x4c2 
    std::uint8_t _[0x4]; // 0x4c4 
    std::uint8_t _[0x4]; // 0x4c8 
    std::uint8_t _[0x4]; // 0x4cc 
    std::uint8_t _[0x4]; // 0x4d0 
    std::uint8_t _[0x4]; // 0x4d4 
};

struct CGradientFog {
    static constexpr std::size_t size = 0x4e8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x8]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b4 
    std::uint8_t _[0x4]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4bc 
    std::uint8_t _[0x4]; // 0x4c0 
    std::uint8_t _[0x4]; // 0x4c4 
    std::uint8_t _[0x4]; // 0x4c8 
    std::uint8_t _[0x4]; // 0x4cc 
    std::uint8_t _[0x4]; // 0x4d0 
    std::uint8_t _[0x4]; // 0x4d4 
    std::uint8_t _[0x4]; // 0x4d8 
    std::uint8_t _[0x4]; // 0x4dc 
    std::uint8_t _[0x1]; // 0x4e0 
    std::uint8_t _[0x1]; // 0x4e1 
    std::uint8_t _[0x6]; // 0x4e2 
};

struct CSoundOpvarSetAABBEntity {
    static constexpr std::size_t size = 0x6a8;
    std::uint8_t pad_0[0x6a8]; // 0x0
};

struct CPulseCell_Outflow_PlaySequence {
    static constexpr std::size_t size = 0x140;
    std::uint8_t pad_0[0x138]; // 0x0
    std::uint8_t _[0x8]; // 0x138 
};

struct CPulseCell_Outflow_PlayDynamicVCD {
    static constexpr std::size_t size = 0x138;
    std::uint8_t pad_0[0x138]; // 0x0
};

struct CPointClientUIWorldTextPanel {
    static constexpr std::size_t size = 0xc10;
    std::uint8_t pad_0[0xa10]; // 0x0
    std::uint8_t _[0x200]; // 0xa10 
};

struct CEntityIdentity {
    static constexpr std::size_t size = 0x70;
    std::uint8_t pad_0[0x14]; // 0x0
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x10]; // 0x20 
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x8]; // 0x40 
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x8]; // 0x50 
    std::uint8_t _[0x8]; // 0x58 
    std::uint8_t _[0x8]; // 0x60 
    std::uint8_t _[0x8]; // 0x68 
};

struct CPulseCell_LimitCount__Criteria_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t _[0x1]; // 0x0 
};

struct CFuncRotator {
    static constexpr std::size_t size = 0x9b0;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x4]; // 0x850 
    std::uint8_t _[0x1]; // 0x854 
    std::uint8_t _[0x3]; // 0x855 
    std::uint8_t _[0x4]; // 0x858 
    std::uint8_t _[0x4]; // 0x85c 
    std::uint8_t _[0x4]; // 0x860 
    std::uint8_t _[0x4]; // 0x864 
    std::uint8_t _[0x8]; // 0x868 
    std::uint8_t _[0x18]; // 0x870 
    std::uint8_t _[0x18]; // 0x888 
    std::uint8_t _[0x18]; // 0x8a0 
    std::uint8_t _[0x18]; // 0x8b8 
    std::uint8_t _[0x18]; // 0x8d0 
    std::uint8_t _[0x18]; // 0x8e8 
    std::uint8_t _[0x18]; // 0x900 
    std::uint8_t _[0x4]; // 0x918 
    std::uint8_t _[0x4]; // 0x91c 
    std::uint8_t _[0x8]; // 0x920 
    std::uint8_t _[0x4]; // 0x928 
    std::uint8_t _[0x4]; // 0x92c 
    std::uint8_t _[0x4]; // 0x930 
    std::uint8_t _[0x4]; // 0x934 
    std::uint8_t _[0x8]; // 0x938 
    std::uint8_t _[0x10]; // 0x940 
    std::uint8_t _[0x4]; // 0x950 
    std::uint8_t _[0x4]; // 0x954 
    std::uint8_t _[0x4]; // 0x958 
    std::uint8_t _[0x4]; // 0x95c 
    std::uint8_t _[0x8]; // 0x960 
    std::uint8_t _[0x20]; // 0x968 
    std::uint8_t _[0x8]; // 0x988 
    std::uint8_t _[0x4]; // 0x990 
    std::uint8_t _[0x4]; // 0x994 
    std::uint8_t _[0x4]; // 0x998 
    std::uint8_t _[0x4]; // 0x99c 
    std::uint8_t _[0x10]; // 0x9a0 
};

struct CSoundEventEntity {
    static constexpr std::size_t size = 0x568;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x1]; // 0x4a8 
    std::uint8_t _[0x1]; // 0x4a9 
    std::uint8_t _[0x1]; // 0x4aa 
    std::uint8_t _[0x1]; // 0x4ab 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x8]; // 0x4b8 
    std::uint8_t _[0x8]; // 0x4c0 
    std::uint8_t _[0x30]; // 0x4c8 
    std::uint8_t _[0x18]; // 0x4f8 
    std::uint8_t _[0x30]; // 0x510 
    std::uint8_t _[0x1c]; // 0x540 
    std::uint8_t _[0x4]; // 0x55c 
    std::uint8_t _[0x8]; // 0x560 
};

struct CInfoPlayerCounterterrorist {
    static constexpr std::size_t size = 0x4b8;
    std::uint8_t pad_0[0x4b8]; // 0x0
};

struct CEnvFade {
    static constexpr std::size_t size = 0x4d0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x18]; // 0x4b8 
};

struct CBasePlayerVData {
    static constexpr std::size_t size = 0x258;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0xe0]; // 0x28 
    std::uint8_t _[0xe0]; // 0x108 
    std::uint8_t _[0x10]; // 0x1e8 
    std::uint8_t _[0x10]; // 0x1f8 
    std::uint8_t _[0x10]; // 0x208 
    std::uint8_t _[0x10]; // 0x218 
    std::uint8_t _[0x10]; // 0x228 
    std::uint8_t _[0x4]; // 0x238 
    std::uint8_t _[0x4]; // 0x23c 
    std::uint8_t _[0x4]; // 0x240 
    std::uint8_t _[0x4]; // 0x244 
    std::uint8_t _[0x4]; // 0x248 
    std::uint8_t _[0x4]; // 0x24c 
    std::uint8_t _[0x4]; // 0x250 
    std::uint8_t _[0x4]; // 0x254 
};

struct CTriggerImpact {
    static constexpr std::size_t size = 0xa18;
    std::uint8_t pad_0[0x9e0]; // 0x0
    std::uint8_t _[0x4]; // 0x9e0 
    std::uint8_t _[0x4]; // 0x9e4 
    std::uint8_t _[0x8]; // 0x9e8 
    std::uint8_t _[0x28]; // 0x9f0 
};

struct CCSGameModeRules_Deathmatch {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x50]; // 0x38 
};

struct CTestPulseIO__EntityHandleIntArgs_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct CPulseCell_CursorQueue {
    static constexpr std::size_t size = 0x130;
    std::uint8_t pad_0[0x128]; // 0x0
    std::uint8_t _[0x8]; // 0x128 
};

struct CPulseCell_Value_RandomFloat {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct CPulseExecCursor {
    static constexpr std::size_t size = 0xd8;
    std::uint8_t pad_0[0xd8]; // 0x0
};

struct CBasePropDoor {
    static constexpr std::size_t size = 0xe90;
    std::uint8_t pad_0[0xca0]; // 0x0
    std::uint8_t _[0x8]; // 0xca0 
    std::uint8_t _[0x18]; // 0xca8 
    std::uint8_t _[0x4]; // 0xcc0 
    std::uint8_t _[0x4]; // 0xcc4 
    std::uint8_t _[0x4]; // 0xcc8 
    std::uint8_t _[0x1]; // 0xccc 
    std::uint8_t _[0x3]; // 0xccd 
    std::uint8_t _[0xc]; // 0xcd0 
    std::uint8_t _[0xc]; // 0xcdc 
    std::uint8_t _[0x4]; // 0xce8 
    std::uint8_t _[0x4]; // 0xcec 
    std::uint8_t _[0x20]; // 0xcf0 
    std::uint8_t _[0x4]; // 0xd10 
    std::uint8_t _[0xc]; // 0xd14 
    std::uint8_t _[0x4]; // 0xd20 
    std::uint8_t _[0x1c]; // 0xd24 
    std::uint8_t _[0x8]; // 0xd40 
    std::uint8_t _[0x8]; // 0xd48 
    std::uint8_t _[0x8]; // 0xd50 
    std::uint8_t _[0x8]; // 0xd58 
    std::uint8_t _[0x8]; // 0xd60 
    std::uint8_t _[0x8]; // 0xd68 
    std::uint8_t _[0x8]; // 0xd70 
    std::uint8_t _[0x8]; // 0xd78 
    std::uint8_t _[0x8]; // 0xd80 
    std::uint8_t _[0x4]; // 0xd88 
    std::uint8_t _[0x4]; // 0xd8c 
    std::uint8_t _[0x8]; // 0xd90 
    std::uint8_t _[0x8]; // 0xd98 
    std::uint8_t _[0x18]; // 0xda0 
    std::uint8_t _[0x18]; // 0xdb8 
    std::uint8_t _[0x18]; // 0xdd0 
    std::uint8_t _[0x18]; // 0xde8 
    std::uint8_t _[0x18]; // 0xe00 
    std::uint8_t _[0x18]; // 0xe18 
    std::uint8_t _[0x18]; // 0xe30 
    std::uint8_t _[0x18]; // 0xe48 
    std::uint8_t _[0x18]; // 0xe60 
    std::uint8_t _[0x18]; // 0xe78 
};

struct CLogicBranchList {
    static constexpr std::size_t size = 0x590;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x80]; // 0x4a8 
    std::uint8_t _[0x18]; // 0x528 
    std::uint8_t _[0x8]; // 0x540 
    std::uint8_t _[0x18]; // 0x548 
    std::uint8_t _[0x18]; // 0x560 
    std::uint8_t _[0x18]; // 0x578 
};

struct CBtActionParachutePositioning {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x58]; // 0x0
    std::uint8_t _[0x20]; // 0x58 
};

struct CAK47 {
    static constexpr std::size_t size = 0x12a0;
    std::uint8_t pad_0[0x12a0]; // 0x0
};

struct CDynamicProp {
    static constexpr std::size_t size = 0xc90;
    std::uint8_t pad_0[0xbd0]; // 0x0
    std::uint8_t _[0x10]; // 0xbd0 
    std::uint8_t _[0x1]; // 0xbe0 
    std::uint8_t _[0x1]; // 0xbe1 
    std::uint8_t _[0x1]; // 0xbe2 
    std::uint8_t _[0x5]; // 0xbe3 
    std::uint8_t _[0x18]; // 0xbe8 
    std::uint8_t _[0x18]; // 0xc00 
    std::uint8_t _[0x18]; // 0xc18 
    std::uint8_t _[0x18]; // 0xc30 
    std::uint8_t _[0x18]; // 0xc48 
    std::uint8_t _[0x8]; // 0xc60 
    std::uint8_t _[0x4]; // 0xc68 
    std::uint8_t _[0x1]; // 0xc6c 
    std::uint8_t _[0x1]; // 0xc6d 
    std::uint8_t _[0x1]; // 0xc6e 
    std::uint8_t _[0x1]; // 0xc6f 
    std::uint8_t _[0x1]; // 0xc70 
    std::uint8_t _[0x1]; // 0xc71 
    std::uint8_t _[0x2]; // 0xc72 
    std::uint8_t _[0x4]; // 0xc74 
    std::uint8_t _[0x4]; // 0xc78 
    std::uint8_t _[0x4]; // 0xc7c 
    std::uint8_t _[0x4]; // 0xc80 
    std::uint8_t _[0xc]; // 0xc84 
};

struct CHostageAlias_info_hostage_spawn {
    static constexpr std::size_t size = 0x2da0;
    std::uint8_t pad_0[0x2da0]; // 0x0
};

struct CFilterTeam {
    static constexpr std::size_t size = 0x4e8;
    std::uint8_t pad_0[0x4e0]; // 0x0
    std::uint8_t _[0x8]; // 0x4e0 
};

struct CFuncConveyor {
    static constexpr std::size_t size = 0x8a8;
    std::uint8_t pad_0[0x850]; // 0x0
    std::uint8_t _[0x8]; // 0x850 
    std::uint8_t _[0x4]; // 0x858 
    std::uint8_t _[0x4]; // 0x85c 
    std::uint8_t _[0xc]; // 0x860 
    std::uint8_t _[0xc]; // 0x86c 
    std::uint8_t _[0x4]; // 0x878 
    std::uint8_t _[0x4]; // 0x87c 
    std::uint8_t _[0x4]; // 0x880 
    std::uint8_t _[0x4]; // 0x884 
    std::uint8_t _[0x8]; // 0x888 
    std::uint8_t _[0x18]; // 0x890 
};

struct CTriggerPhysics {
    static constexpr std::size_t size = 0xa28;
    std::uint8_t pad_0[0x9d0]; // 0x0
    std::uint8_t _[0x8]; // 0x9d0 
    std::uint8_t _[0x4]; // 0x9d8 
    std::uint8_t _[0x4]; // 0x9dc 
    std::uint8_t _[0x4]; // 0x9e0 
    std::uint8_t _[0x4]; // 0x9e4 
    std::uint8_t _[0x4]; // 0x9e8 
    std::uint8_t _[0x4]; // 0x9ec 
    std::uint8_t _[0x4]; // 0x9f0 
    std::uint8_t _[0x4]; // 0x9f4 
    std::uint8_t _[0xc]; // 0x9f8 
    std::uint8_t _[0x4]; // 0xa04 
    std::uint8_t _[0xc]; // 0xa08 
    std::uint8_t _[0xc]; // 0xa14 
    std::uint8_t _[0x1]; // 0xa20 
    std::uint8_t _[0x7]; // 0xa21 
};

struct CInfoInstructorHintBombTargetB {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CFuncTimescale {
    static constexpr std::size_t size = 0x4c0;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b4 
    std::uint8_t _[0x8]; // 0x4b8 
};

struct CSoundOpvarSetPointEntity {
    static constexpr std::size_t size = 0x640;
    std::uint8_t pad_0[0x550]; // 0x0
    std::uint8_t _[0x18]; // 0x550 
    std::uint8_t _[0x18]; // 0x568 
    std::uint8_t _[0x44]; // 0x580 
    std::uint8_t _[0x4]; // 0x5c4 
    std::uint8_t _[0x4]; // 0x5c8 
    std::uint8_t _[0x4]; // 0x5cc 
    std::uint8_t _[0x4]; // 0x5d0 
    std::uint8_t _[0x4]; // 0x5d4 
    std::uint8_t _[0x4]; // 0x5d8 
    std::uint8_t _[0x4]; // 0x5dc 
    std::uint8_t _[0x4]; // 0x5e0 
    std::uint8_t _[0x1]; // 0x5e4 
    std::uint8_t _[0x3]; // 0x5e5 
    std::uint8_t _[0x4]; // 0x5e8 
    std::uint8_t _[0x4]; // 0x5ec 
    std::uint8_t _[0xc]; // 0x5f0 
    std::uint8_t _[0x4]; // 0x5fc 
    std::uint8_t _[0x8]; // 0x600 
    std::uint8_t _[0x8]; // 0x608 
    std::uint8_t _[0x4]; // 0x610 
    std::uint8_t _[0xc]; // 0x614 
    std::uint8_t _[0xc]; // 0x620 
    std::uint8_t _[0xc]; // 0x62c 
    std::uint8_t _[0x8]; // 0x638 
};

struct CBasePlayerWeaponVData {
    static constexpr std::size_t size = 0x520;
    std::uint8_t pad_0[0x28]; // 0x0
    std::uint8_t _[0xe0]; // 0x28 
    std::uint8_t _[0xe0]; // 0x108 
    std::uint8_t _[0xe0]; // 0x1e8 
    std::uint8_t _[0x1]; // 0x2c8 
    std::uint8_t _[0x7]; // 0x2c9 
    std::uint8_t _[0x20]; // 0x2d0 
    std::uint8_t _[0xe0]; // 0x2f0 
    std::uint8_t _[0x8]; // 0x3d0 
    std::uint8_t _[0xe0]; // 0x3d8 
    std::uint8_t _[0x4]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4bc 
    std::uint8_t _[0x4]; // 0x4c0 
    std::uint8_t _[0x1]; // 0x4c4 
    std::uint8_t _[0x1]; // 0x4c5 
    std::uint8_t _[0x1]; // 0x4c6 
    std::uint8_t _[0x1]; // 0x4c7 
    std::uint8_t _[0x4]; // 0x4c8 
    std::uint8_t _[0x1]; // 0x4cc 
    std::uint8_t _[0x1]; // 0x4cd 
    std::uint8_t _[0x1]; // 0x4ce 
    std::uint8_t _[0x1]; // 0x4cf 
    std::uint8_t _[0x4]; // 0x4d0 
    std::uint8_t _[0x4]; // 0x4d4 
    std::uint8_t _[0x4]; // 0x4d8 
    std::uint8_t _[0x4]; // 0x4dc 
    std::uint8_t _[0x1]; // 0x4e0 
    std::uint8_t _[0x1]; // 0x4e1 
    std::uint8_t _[0x2]; // 0x4e2 
    std::uint8_t _[0x4]; // 0x4e4 
    std::uint8_t _[0x4]; // 0x4e8 
    std::uint8_t _[0x4]; // 0x4ec 
    std::uint8_t _[0x8]; // 0x4f0 
    std::uint8_t _[0x28]; // 0x4f8 
};

struct CInfoTargetServerOnly {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CCSGO_RushIntroCharacterPosition {
    static constexpr std::size_t size = 0x1468;
    std::uint8_t pad_0[0x1468]; // 0x0
};

struct CServerRagdollTrigger {
    static constexpr std::size_t size = 0x9c8;
    std::uint8_t pad_0[0x9c8]; // 0x0
};

struct CDynamicPropAlias_dynamic_prop {
    static constexpr std::size_t size = 0xc90;
    std::uint8_t pad_0[0xc90]; // 0x0
};

struct CMarkupVolumeTagged {
    static constexpr std::size_t size = 0x890;
    std::uint8_t pad_0[0x858]; // 0x0
    std::uint8_t _[0x18]; // 0x858 
    std::uint8_t _[0x18]; // 0x870 
    std::uint8_t _[0x1]; // 0x888 
    std::uint8_t _[0x1]; // 0x889 
    std::uint8_t _[0x1]; // 0x88a 
    std::uint8_t _[0x1]; // 0x88b 
    std::uint8_t _[0x4]; // 0x88c 
};

struct CInfoParticleTarget {
    static constexpr std::size_t size = 0x4a8;
    std::uint8_t pad_0[0x4a8]; // 0x0
};

struct CEnvCubemap {
    static constexpr std::size_t size = 0x590;
    std::uint8_t pad_0[0x528]; // 0x0
    std::uint8_t _[0x8]; // 0x528 
    std::uint8_t _[0x4]; // 0x530 
    std::uint8_t _[0x4]; // 0x534 
    std::uint8_t _[0xc]; // 0x538 
    std::uint8_t _[0xc]; // 0x544 
    std::uint8_t _[0x4]; // 0x550 
    std::uint8_t _[0x4]; // 0x554 
    std::uint8_t _[0x4]; // 0x558 
    std::uint8_t _[0x4]; // 0x55c 
    std::uint8_t _[0x4]; // 0x560 
    std::uint8_t _[0xc]; // 0x564 
    std::uint8_t _[0x4]; // 0x570 
    std::uint8_t _[0x1]; // 0x574 
    std::uint8_t _[0x1]; // 0x575 
    std::uint8_t _[0x1]; // 0x576 
    std::uint8_t _[0x1]; // 0x577 
    std::uint8_t _[0x10]; // 0x578 
    std::uint8_t _[0x8]; // 0x588 
};

struct CCSPlayer_DamageReactServices {
    static constexpr std::size_t size = 0x68;
    std::uint8_t pad_0[0x68]; // 0x0
};

struct CWeaponXM1014 {
    static constexpr std::size_t size = 0x1280;
    std::uint8_t pad_0[0x1280]; // 0x0
};

struct CTriggerLerpObject {
    static constexpr std::size_t size = 0xa68;
    std::uint8_t pad_0[0x9c8]; // 0x0
    std::uint8_t _[0x8]; // 0x9c8 
    std::uint8_t _[0x8]; // 0x9d0 
    std::uint8_t _[0x8]; // 0x9d8 
    std::uint8_t _[0x4]; // 0x9e0 
    std::uint8_t _[0x4]; // 0x9e4 
    std::uint8_t _[0x1]; // 0x9e8 
    std::uint8_t _[0x1]; // 0x9e9 
    std::uint8_t _[0x6]; // 0x9ea 
    std::uint8_t _[0x18]; // 0x9f0 
    std::uint8_t _[0x8]; // 0xa08 
    std::uint8_t _[0x8]; // 0xa10 
    std::uint8_t _[0x4]; // 0xa18 
    std::uint8_t _[0x4]; // 0xa1c 
    std::uint8_t _[0x18]; // 0xa20 
    std::uint8_t _[0x18]; // 0xa38 
    std::uint8_t _[0x18]; // 0xa50 
};

struct CPhysicsPropOverride {
    static constexpr std::size_t size = 0xd10;
    std::uint8_t pad_0[0xd10]; // 0x0
};

struct CTriggerSave {
    static constexpr std::size_t size = 0x9d8;
    std::uint8_t pad_0[0x9c8]; // 0x0
    std::uint8_t _[0x4]; // 0x9c8 
    std::uint8_t _[0x4]; // 0x9cc 
    std::uint8_t _[0x4]; // 0x9d0 
    std::uint8_t _[0x4]; // 0x9d4 
};

struct CPointHurt {
    static constexpr std::size_t size = 0x4c8;
    std::uint8_t pad_0[0x4a8]; // 0x0
    std::uint8_t _[0x4]; // 0x4a8 
    std::uint8_t _[0x4]; // 0x4ac 
    std::uint8_t _[0x4]; // 0x4b0 
    std::uint8_t _[0x4]; // 0x4b4 
    std::uint8_t _[0x8]; // 0x4b8 
    std::uint8_t _[0x8]; // 0x4c0 
};

struct CBaseAnimGraphAlias_baseanimating {
    static constexpr std::size_t size = 0xa40;
    std::uint8_t pad_0[0xa40]; // 0x0
};

struct CBasePlayerController {
    static constexpr std::size_t size = 0x7d8;
    std::uint8_t pad_0[0x4b0]; // 0x0
    std::uint8_t _[0x8]; // 0x4b0 
    std::uint8_t _[0x28]; // 0x4b8 
    std::uint8_t _[0x4]; // 0x4e0 
    std::uint8_t _[0x8]; // 0x4e4 
    std::uint8_t _[0x4]; // 0x4ec 
    std::uint8_t _[0x8]; // 0x4f0 
    std::uint8_t _[0x18]; // 0x4f8 
    std::uint8_t _[0x4]; // 0x510 
    std::uint8_t _[0x4]; // 0x514 
    std::uint8_t _[0x4]; // 0x518 
    std::uint8_t _[0x84]; // 0x51c 
    std::uint8_t _[0x8]; // 0x5a0 
    std::uint8_t _[0x4]; // 0x5a8 
    std::uint8_t _[0x1]; // 0x5ac 
    std::uint8_t _[0x7]; // 0x5ad 
    std::uint8_t _[0x1]; // 0x5b4 
    std::uint8_t _[0x13b]; // 0x5b5 
    std::uint8_t _[0x4]; // 0x6f0 
    std::uint8_t _[0x4]; // 0x6f4 
    std::uint8_t _[0x4]; // 0x6f8 
    std::uint8_t _[0x4]; // 0x6fc 
    std::uint8_t _[0x10]; // 0x700 
    std::uint8_t _[0x8]; // 0x710 
    std::uint8_t _[0x4]; // 0x718 
    std::uint8_t _[0xbc]; // 0x71c 
};

struct CRangeFloat {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x8]; // 0x0 
};

struct CDestructiblePart {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x18]; // 0x38 
};

struct PhysBlockHeader_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
};

struct RelationshipOverride_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
};

struct AutoRoomDoorwayPairs_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0xc]; // 0xc 
};

struct NavHull_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CDebugSnapshotData_t {
    static constexpr std::size_t size = 0x130;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0xc]; // 0x14 
    std::uint8_t _[0x20]; // 0x20 
    std::uint8_t _[0x98]; // 0x40 
    std::uint8_t _[0x8]; // 0xd8 
    std::uint8_t _[0x18]; // 0xe0 
    std::uint8_t _[0x8]; // 0xf8 
    std::uint8_t _[0x8]; // 0x100 
    std::uint8_t _[0x8]; // 0x108 
    std::uint8_t _[0x10]; // 0x110 
    std::uint8_t _[0x10]; // 0x120 
};

struct CRemapFloat {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x10]; // 0x0 
};

struct CHintMessage {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x18]; // 0x8 
    std::uint8_t _[0x8]; // 0x20 
};

struct CNavAttribute {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct AI_GroundRootMotionMotor_DebugSnapshotData_t {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x8]; // 0x38 
    std::uint8_t _[0x8]; // 0x40 
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0x4]; // 0x54 
    std::uint8_t _[0x8]; // 0x58 
    std::uint8_t _[0x4]; // 0x60 
    std::uint8_t _[0x4]; // 0x64 
    std::uint8_t _[0x4]; // 0x68 
    std::uint8_t _[0x4]; // 0x6c 
    std::uint8_t _[0x8]; // 0x70 
    std::uint8_t _[0x18]; // 0x78 
};

struct ParticleNode_t {
    static constexpr std::size_t size = 0x24;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0xc]; // 0x10 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
};

struct CFootstepTableHandle {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct CDecalGroupVData {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x8]; // 0x18 
};

struct CNmSnapWeaponTask {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x80]; // 0x0
};

struct CPlayerControllerComponent {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x38]; // 0x8 
};

struct CResponseQueue {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x38]; // 0x0
    std::uint8_t _[0x18]; // 0x38 
};

struct CodeGenAABB_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0xc]; // 0xc 
};

struct CScriptUniformRandomStream {
    static constexpr std::size_t size = 0xa0;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x94]; // 0x8 
    std::uint8_t _[0x4]; // 0x9c 
};

struct lerpdata_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x14]; // 0xc 
    std::uint8_t _[0x10]; // 0x20 
    std::uint8_t _[0x20]; // 0x30 
};

struct WrappedPhysicsJoint_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x8]; // 0x0 
};

struct SimpleConstraintSoundProfile {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x8]; // 0x18 
};

struct CSimpleSimTimer {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct AI_BaseNPCAnimGraph_DebugSnapshotData_t {
    static constexpr std::size_t size = 0x48;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x8]; // 0x38 
    std::uint8_t _[0x8]; // 0x40 
};

struct CPhysicsBodyGameMarkupData {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x28]; // 0x0 
};

struct SoundCommand_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0xc]; // 0x14 
};

struct modifiedconvars_t {
    static constexpr std::size_t size = 0x180;
    std::uint8_t _[0x80]; // 0x0 
    std::uint8_t _[0x80]; // 0x80 
    std::uint8_t _[0x80]; // 0x100 
};

struct CTestPulseIOComponent_Derived {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x30]; // 0x0
};

struct SAVE_HEADER {
    static constexpr std::size_t size = 0x60;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x10]; // 0x10 
    std::uint8_t _[0x30]; // 0x20 
    std::uint8_t _[0x10]; // 0x50 
};

struct CSkillDamage {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
};

struct DebugSnapshotBaseStructuredData_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct AI_DefaultNPC_DebugSnapshotData_t__PathQuery_t {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
};

struct CFloatExponentialMovingAverage {
    static constexpr std::size_t size = 0x14;
    std::uint8_t pad_0[0x14]; // 0x0
};

struct physics_save_sphere_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CAnimGraph2InstancePtr {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x10]; // 0x0
};

struct GAME_HEADER {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
};

struct ChickenPathCost {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x30]; // 0x0
};

struct AI_BaseNPC_DebugSnapshotData_t {
    static constexpr std::size_t size = 0x188;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x8]; // 0x38 
    std::uint8_t _[0x18]; // 0x40 
    std::uint8_t _[0x18]; // 0x58 
    std::uint8_t _[0x48]; // 0x70 
    std::uint8_t _[0x50]; // 0xb8 
    std::uint8_t _[0x38]; // 0x108 
    std::uint8_t _[0x48]; // 0x140 
};

struct CDebugDrawHistoryData {
    static constexpr std::size_t size = 0x78;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x10]; // 0x8 
    std::uint8_t _[0x10]; // 0x18 
    std::uint8_t _[0x10]; // 0x28 
    std::uint8_t _[0x10]; // 0x38 
    std::uint8_t _[0x10]; // 0x48 
    std::uint8_t _[0x10]; // 0x58 
    std::uint8_t _[0x10]; // 0x68 
};

struct CNmEventConsumer {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t pad_0[0xb0]; // 0x0
};

struct CNetworkViewOffsetVector {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
};

struct AmmoIndex_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t _[0x1]; // 0x0 
};

struct CNmEventConsumerContact {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t pad_0[0xb0]; // 0x0
};

struct CDestructiblePartsSystemData {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x28]; // 0x0 
    std::uint8_t _[0x8]; // 0x28 
};

struct CRopeOverlapHit {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x18]; // 0x8 
};

struct ActorClipEntry_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
};

struct CNavPathCostForTests {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x48]; // 0x0
};

struct ResponseContext_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
};

struct ApproachAreaCost {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x30]; // 0x0
};

struct CNavVolumeSphericalShell {
    static constexpr std::size_t size = 0x90;
    std::uint8_t pad_0[0x88]; // 0x0
    std::uint8_t _[0x8]; // 0x88 
};

struct CPlayerPawnComponent {
    static constexpr std::size_t size = 0x48;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x28]; // 0x8 
    std::uint8_t _[0x18]; // 0x30 
};

struct AI_FacingServices_DebugSnapshotData_t {
    static constexpr std::size_t size = 0x48;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x10]; // 0x18 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x8]; // 0x38 
    std::uint8_t _[0x8]; // 0x40 
};

struct AI_Navigator_DebugSnapshotData_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0xc]; // 0x18 
    std::uint8_t _[0xc]; // 0x24 
    std::uint8_t _[0x18]; // 0x30 
    std::uint8_t _[0x8]; // 0x48 
};

struct CDecalInstance {
    static constexpr std::size_t size = 0x108;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0xc]; // 0x20 
    std::uint8_t _[0xc]; // 0x2c 
    std::uint8_t _[0xc]; // 0x38 
    std::uint8_t _[0xc]; // 0x44 
    std::uint8_t _[0xc]; // 0x50 
    std::uint8_t _[0x4]; // 0x5c 
    std::uint8_t _[0x4]; // 0x60 
    std::uint8_t _[0x4]; // 0x64 
    std::uint8_t _[0x4]; // 0x68 
    std::uint8_t _[0x4]; // 0x6c 
    std::uint8_t _[0x30]; // 0x70 
    std::uint8_t _[0x30]; // 0xa0 
    std::uint8_t _[0x4]; // 0xd0 
    std::uint8_t _[0x4]; // 0xd4 
    std::uint8_t _[0x4]; // 0xd8 
    std::uint8_t _[0x4]; // 0xdc 
    std::uint8_t _[0x4]; // 0xe0 
    std::uint8_t _[0x14]; // 0xe4 
    std::uint8_t _[0x4]; // 0xf8 
    std::uint8_t _[0x2]; // 0xfc 
    std::uint8_t _[0x1]; // 0xfe 
    std::uint8_t _[0x9]; // 0xff 
};

struct CGameScriptedMoveData {
    static constexpr std::size_t size = 0x74;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0xc]; // 0xc 
    std::uint8_t _[0xc]; // 0x18 
    std::uint8_t _[0xc]; // 0x24 
    std::uint8_t _[0xc]; // 0x30 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x4]; // 0x44 
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x1]; // 0x4c 
    std::uint8_t _[0x1]; // 0x4d 
    std::uint8_t _[0x1]; // 0x4e 
    std::uint8_t _[0x1]; // 0x4f 
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0x4]; // 0x54 
    std::uint8_t _[0xc]; // 0x58 
    std::uint8_t _[0xc]; // 0x64 
    std::uint8_t _[0x4]; // 0x70 
};

struct CSkeletonAnimationController {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
};

struct CNavVolumeMarkupVolume {
    static constexpr std::size_t size = 0xe0;
    std::uint8_t pad_0[0xe0]; // 0x0
};

struct CResponseCriteriaSet {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x30]; // 0x0
    std::uint8_t _[0x8]; // 0x30 
};

struct FuncRotatorRotationSummary_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct CAI_Expresser {
    static constexpr std::size_t size = 0xa0;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x28]; // 0x10 
    std::uint8_t _[0x28]; // 0x38 
    std::uint8_t _[0x4]; // 0x60 
    std::uint8_t _[0x4]; // 0x64 
    std::uint8_t _[0x4]; // 0x68 
    std::uint8_t _[0x4]; // 0x6c 
    std::uint8_t _[0x4]; // 0x70 
    std::uint8_t _[0x4]; // 0x74 
    std::uint8_t _[0x1]; // 0x78 
    std::uint8_t _[0x1]; // 0x79 
    std::uint8_t _[0x2]; // 0x7a 
    std::uint8_t _[0x1c]; // 0x7c 
    std::uint8_t _[0x8]; // 0x98 
};

struct IChoreoServices {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct CNmEventConsumerAttributes {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t pad_0[0xb0]; // 0x0
};

struct CStopwatch {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0xc]; // 0x0
    std::uint8_t _[0x4]; // 0xc 
};

struct CNmEventConsumerCloth {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t pad_0[0xb0]; // 0x0
};

struct ResponseParams {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x6]; // 0x12 
    std::uint8_t _[0x8]; // 0x18 
};

struct SPAWNGROUP_HEADER {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x30]; // 0x10 
    std::uint8_t _[0x1]; // 0x40 
    std::uint8_t _[0xf]; // 0x41 
};

struct globalentity_t {
    static constexpr std::size_t size = 0xc;
    std::uint8_t _[0x2]; // 0x0 
    std::uint8_t _[0x2]; // 0x2 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
};

struct CAnimGraphControllerPtr {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x8]; // 0x0 
};

struct ConstraintSoundInfo {
    static constexpr std::size_t size = 0x98;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x18]; // 0x8 
    std::uint8_t _[0x20]; // 0x20 
    std::uint8_t _[0x10]; // 0x40 
    std::uint8_t _[0x8]; // 0x50 
    std::uint8_t _[0x20]; // 0x58 
    std::uint8_t _[0x8]; // 0x78 
    std::uint8_t _[0x8]; // 0x80 
    std::uint8_t _[0x8]; // 0x88 
    std::uint8_t _[0x1]; // 0x90 
    std::uint8_t _[0x7]; // 0x91 
};

struct CPhysicsBodyGameMarkup {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
};

struct PointCameraSettings_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
};

struct HUDPanelHasClass_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x2]; // 0x0 
    std::uint8_t _[0x2]; // 0x2 
    std::uint8_t _[0x4]; // 0x4 
};

struct DebugDrawBoneTransforms_t {
    static constexpr std::size_t size = 0x1030;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x1020]; // 0x10 
};

struct INavPathCost {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
};

struct CVectorMovingAverage {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x20]; // 0x0
};

struct HUDPanelDialogVariableString_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x2]; // 0x8 
    std::uint8_t _[0x6]; // 0xa 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
};

struct CSoundEnvelope {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
};

struct dynpitchvol_base_t {
    static constexpr std::size_t size = 0x64;
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
};

struct CStopwatchBase {
    static constexpr std::size_t size = 0xc;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
};

struct AI_GroundRootMotionMotor_DebugSnapshotData_t__Event_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x10]; // 0x8 
};

struct CMarkupSearch_PathCostAreaFilter {
    static constexpr std::size_t size = 0x2b8;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x2b0]; // 0x8 
};

struct CNavVolumeVector {
    static constexpr std::size_t size = 0xa0;
    std::uint8_t pad_0[0x80]; // 0x0
    std::uint8_t _[0x20]; // 0x80 
};

struct NavGravity_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0x4]; // 0xc 
};

struct PulseScriptedSequenceData_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x1]; // 0x34 
    std::uint8_t _[0x1]; // 0x35 
    std::uint8_t _[0x1]; // 0x36 
    std::uint8_t _[0x1]; // 0x37 
};

struct CChoreo_GraphController {
    static constexpr std::size_t size = 0x108;
    std::uint8_t pad_0[0xc0]; // 0x0
    std::uint8_t _[0x18]; // 0xc0 
    std::uint8_t _[0x18]; // 0xd8 
    std::uint8_t _[0x18]; // 0xf0 
};

struct CBaseAnimGraphDestructibleParts_GraphController {
    static constexpr std::size_t size = 0xc0;
    std::uint8_t pad_0[0xc0]; // 0x0
};

struct ExternalAnimGraphHandle_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CPhysicsShake {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x10]; // 0x8 
};

struct CInfoChoreoAnchorPosition {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x10]; // 0x10 
    std::uint8_t _[0xc]; // 0x20 
    std::uint8_t _[0xc]; // 0x2c 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0xc]; // 0x44 
};

struct VelocitySampler {
    static constexpr std::size_t size = 0x14;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
};

struct CTakeDamageResult {
    static constexpr std::size_t size = 0x60;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x10]; // 0x8 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0xc]; // 0x28 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x8]; // 0x40 
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x1]; // 0x50 
    std::uint8_t _[0x3]; // 0x51 
    std::uint8_t _[0xc]; // 0x54 
};

struct CMarkupSearchHelper {
    static constexpr std::size_t size = 0x2b0;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0xc]; // 0x18 
    std::uint8_t _[0x1]; // 0x24 
    std::uint8_t _[0x1]; // 0x25 
    std::uint8_t _[0x28a]; // 0x26 
};

struct SceneEventId_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CCommentarySystem {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x12]; // 0x0
    std::uint8_t _[0x2]; // 0x12 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x1]; // 0x1c 
    std::uint8_t _[0x3]; // 0x1d 
    std::uint8_t _[0x18]; // 0x20 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x8]; // 0x40 
    std::uint8_t _[0x18]; // 0x48 
};

struct ResponseFollowup {
    static constexpr std::size_t size = 0x1c;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x8]; // 0x14 
};

struct AmmoTypeInfo_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0xc]; // 0x10 
    std::uint8_t _[0x8]; // 0x1c 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0xc]; // 0x2c 
};

struct CNetworkTransmitComponent {
    static constexpr std::size_t size = 0x1d0;
    std::uint8_t pad_0[0x184]; // 0x0
    std::uint8_t _[0x4c]; // 0x184 
};

struct AI_MotorServices_DebugSnapshotData_t {
    static constexpr std::size_t size = 0x38;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0xc]; // 0xc 
    std::uint8_t _[0x18]; // 0x18 
    std::uint8_t _[0x8]; // 0x30 
};

struct CPathQueryUtil {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x20]; // 0x10 
    std::uint8_t _[0x18]; // 0x30 
    std::uint8_t _[0x18]; // 0x48 
    std::uint8_t _[0x18]; // 0x60 
    std::uint8_t _[0x8]; // 0x78 
};

struct RagdollCreationParams_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
};

struct CRelativeTransform {
    static constexpr std::size_t size = 0x60;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x20]; // 0x10 
    std::uint8_t _[0x20]; // 0x30 
    std::uint8_t _[0x10]; // 0x50 
};

struct CRangeInt {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x8]; // 0x0 
};

struct PathCost {
    static constexpr std::size_t size = 0x60;
    std::uint8_t pad_0[0x3c]; // 0x0
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x1c]; // 0x44 
};

struct globalentitydatabase_t {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x60]; // 0x0
    std::uint8_t _[0x18]; // 0x60 
};

struct CNmEventConsumerPulse {
    static constexpr std::size_t size = 0xc8;
    std::uint8_t pad_0[0xc8]; // 0x0
};

struct CNMEventPulseState_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x8]; // 0x0 
};

struct CWorldCompositionChunkReferenceElement_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
};

struct CRandStopwatch {
    static constexpr std::size_t size = 0x14;
    std::uint8_t pad_0[0xc]; // 0x0
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
};

struct CMovementStatsProperty {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x2c]; // 0x14 
};

struct CGameChoreoServices {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x8]; // 0x18 
};

struct PhysObjectHeader_t {
    static constexpr std::size_t size = 0x40;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x18]; // 0x20 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
};

struct CSimpleStopwatch {
    static constexpr std::size_t size = 0xc;
    std::uint8_t pad_0[0xc]; // 0x0
};

struct CShatterGlassShard {
    static constexpr std::size_t size = 0xb8;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x18]; // 0x10 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x4]; // 0x44 
    std::uint8_t _[0xc]; // 0x48 
    std::uint8_t _[0x4]; // 0x54 
    std::uint8_t _[0x4]; // 0x58 
    std::uint8_t _[0x4]; // 0x5c 
    std::uint8_t _[0x4]; // 0x60 
    std::uint8_t _[0x4]; // 0x64 
    std::uint8_t _[0x4]; // 0x68 
    std::uint8_t _[0x4]; // 0x6c 
    std::uint8_t _[0x4]; // 0x70 
    std::uint8_t _[0x4]; // 0x74 
    std::uint8_t _[0x8]; // 0x78 
    std::uint8_t _[0x4]; // 0x80 
    std::uint8_t _[0x8]; // 0x84 
    std::uint8_t _[0x8]; // 0x8c 
    std::uint8_t _[0x1]; // 0x94 
    std::uint8_t _[0x1]; // 0x95 
    std::uint8_t _[0x2]; // 0x96 
    std::uint8_t _[0x4]; // 0x98 
    std::uint8_t _[0x4]; // 0x9c 
    std::uint8_t _[0x18]; // 0xa0 
};

struct ragdollelement_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x20]; // 0x0 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x8]; // 0x28 
};

struct CGameScriptedMoveDef_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0xc]; // 0x10 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x1]; // 0x28 
    std::uint8_t _[0x3]; // 0x29 
    std::uint8_t _[0x4]; // 0x2c 
};

struct CNetworkOriginCellCoordQuantizedVector {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x2]; // 0x12 
    std::uint8_t _[0x2]; // 0x14 
    std::uint8_t _[0x2]; // 0x16 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
};

struct CBaseAnimGraphVariationUserData {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct DynamicVolumeDef_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0xc]; // 0xc 
    std::uint8_t _[0xc]; // 0x18 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
};

struct CNetworkOriginQuantizedVector {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
};

struct magnetted_objects_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
};

struct CHintMessageQueue {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x18]; // 0x8 
    std::uint8_t _[0x8]; // 0x20 
};

struct CSkillInt {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x10]; // 0x0 
};

struct thinkfunc_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x8]; // 0x18 
};

struct CNavHullPresetVData {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x18]; // 0x0 
};

struct CSkillFloat {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x10]; // 0x0 
};

struct WaterWheelFrictionScale_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct ragdollhierarchyjoint_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0xc]; // 0x4 
};

struct CSceneEventInfo {
    static constexpr std::size_t size = 0x78;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
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
    std::uint8_t _[0x1]; // 0x44 
    std::uint8_t _[0x27]; // 0x45 
    std::uint8_t _[0x4]; // 0x6c 
    std::uint8_t _[0x4]; // 0x70 
    std::uint8_t _[0x1]; // 0x74 
    std::uint8_t _[0x3]; // 0x75 
};

struct SoundeventPathCornerPairNetworked_t {
    static constexpr std::size_t size = 0x24;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0xc]; // 0xc 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
};

struct CSoundPatch {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x10]; // 0x8 
    std::uint8_t _[0x24]; // 0x18 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x8]; // 0x40 
    std::uint8_t _[0x8]; // 0x48 
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0x4]; // 0x54 
    std::uint8_t _[0xc]; // 0x58 
    std::uint8_t _[0x4]; // 0x64 
    std::uint8_t _[0x38]; // 0x68 
    std::uint8_t _[0x4]; // 0xa0 
    std::uint8_t _[0x4]; // 0xa4 
    std::uint8_t _[0x8]; // 0xa8 
};

struct CCS2ChickenGraphController {
    static constexpr std::size_t size = 0x1f0;
    std::uint8_t pad_0[0xc0]; // 0x0
    std::uint8_t _[0x18]; // 0xc0 
    std::uint8_t _[0x20]; // 0xd8 
    std::uint8_t _[0x18]; // 0xf8 
    std::uint8_t _[0x18]; // 0x110 
    std::uint8_t _[0x18]; // 0x128 
    std::uint8_t _[0x18]; // 0x140 
    std::uint8_t _[0x18]; // 0x158 
    std::uint8_t _[0x18]; // 0x170 
    std::uint8_t _[0x18]; // 0x188 
    std::uint8_t _[0x18]; // 0x1a0 
    std::uint8_t _[0x18]; // 0x1b8 
    std::uint8_t _[0x18]; // 0x1d0 
    std::uint8_t _[0x8]; // 0x1e8 
};

struct levellist_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0xc]; // 0x14 
    std::uint8_t _[0x10]; // 0x20 
};

struct locksound_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
};

struct DecalGroupOption_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
};

struct CBtNode {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x58]; // 0x0
};

struct CAnimGraphControllerManager {
    static constexpr std::size_t size = 0x98;
    std::uint8_t _[0x90]; // 0x0 
    std::uint8_t _[0x8]; // 0x90 
};

struct CFiringModeFloat {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x8]; // 0x0 
};

struct CCopyRecipientFilter {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x20]; // 0x10 
    std::uint8_t _[0x8]; // 0x30 
};

struct CFloatMovingAverage {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x20]; // 0x0
};

struct FuncMoverMovementSummary_t {
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

struct CSmoothFunc {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x8]; // 0x18 
};

struct IHasAttributes {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct ragdoll_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x18]; // 0x18 
    std::uint8_t _[0x18]; // 0x30 
    std::uint8_t _[0x1]; // 0x48 
    std::uint8_t _[0x7]; // 0x49 
};

struct HullFlags_t {
    static constexpr std::size_t size = 0xa;
    std::uint8_t _[0x1]; // 0x0 
    std::uint8_t _[0x1]; // 0x1 
    std::uint8_t _[0x1]; // 0x2 
    std::uint8_t _[0x1]; // 0x3 
    std::uint8_t _[0x1]; // 0x4 
    std::uint8_t _[0x1]; // 0x5 
    std::uint8_t _[0x1]; // 0x6 
    std::uint8_t _[0x1]; // 0x7 
    std::uint8_t _[0x1]; // 0x8 
    std::uint8_t _[0x1]; // 0x9 
};

struct CNavFlags {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x8]; // 0x0 
};

struct ISkeletonAnimationController {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct CNetworkOriginQuantizedVectorWS {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
};

struct GameAmmoTypeInfo_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t pad_0[0x38]; // 0x0
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x14]; // 0x3c 
};

struct CMotorController {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0xc]; // 0x10 
    std::uint8_t _[0x4]; // 0x1c 
};

struct CSimTimer {
    static constexpr std::size_t size = 0xc;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
};

struct CBaseIssue {
    static constexpr std::size_t size = 0x178;
    std::uint8_t pad_0[0x20]; // 0x0
    std::uint8_t _[0x40]; // 0x20 
    std::uint8_t _[0x104]; // 0x60 
    std::uint8_t _[0x4]; // 0x164 
    std::uint8_t _[0x4]; // 0x168 
    std::uint8_t _[0x4]; // 0x16c 
    std::uint8_t _[0x8]; // 0x170 
};

struct CDynamicPropGraphController {
    static constexpr std::size_t size = 0xd8;
    std::uint8_t pad_0[0xc0]; // 0x0
    std::uint8_t _[0x18]; // 0xc0 
};

struct SummaryTakeDamageInfo_t {
    static constexpr std::size_t size = 0x188;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x118]; // 0x8 
    std::uint8_t _[0x60]; // 0x120 
    std::uint8_t _[0x8]; // 0x180 
};

struct INavObstacle {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
};

struct entitytable_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0xc]; // 0x8 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x10]; // 0x38 
    std::uint8_t _[0x8]; // 0x48 
};

struct AI_MotorServices_DebugSnapshotData_t__MotorPathWaypoint_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
};

struct CRR_Response {
    static constexpr std::size_t size = 0x1b8;
    std::uint8_t _[0x1]; // 0x0 
    std::uint8_t _[0xc0]; // 0x1 
    std::uint8_t _[0x9f]; // 0xc1 
    std::uint8_t _[0x20]; // 0x160 
    std::uint8_t _[0x4]; // 0x180 
    std::uint8_t _[0x4]; // 0x184 
    std::uint8_t _[0x8]; // 0x188 
    std::uint8_t _[0x8]; // 0x190 
    std::uint8_t _[0x1c]; // 0x198 
    std::uint8_t _[0x4]; // 0x1b4 
};

struct CVectorExponentialMovingAverage {
    static constexpr std::size_t size = 0x2c;
    std::uint8_t pad_0[0x2c]; // 0x0
};

struct CNmAimCSNode__CDefinition {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x2]; // 0x18 
    std::uint8_t _[0x2]; // 0x1a 
    std::uint8_t _[0x2]; // 0x1c 
    std::uint8_t _[0x2]; // 0x1e 
    std::uint8_t _[0x2]; // 0x20 
    std::uint8_t _[0x2]; // 0x22 
    std::uint8_t _[0x2]; // 0x24 
    std::uint8_t _[0x2]; // 0x26 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x8]; // 0x30 
};

struct CConstantForceController {
    static constexpr std::size_t size = 0x40;
    std::uint8_t pad_0[0xc]; // 0x0
    std::uint8_t _[0xc]; // 0xc 
    std::uint8_t _[0xc]; // 0x18 
    std::uint8_t _[0xc]; // 0x24 
    std::uint8_t _[0x10]; // 0x30 
};

struct WaterWheelDrag_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct CTakeDamageInfo {
    static constexpr std::size_t size = 0x118;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0xc]; // 0x8 
    std::uint8_t _[0xc]; // 0x14 
    std::uint8_t _[0xc]; // 0x20 
    std::uint8_t _[0xc]; // 0x2c 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x4]; // 0x44 
    std::uint8_t _[0x4]; // 0x48 
    std::uint8_t _[0x4]; // 0x4c 
    std::uint8_t _[0x4]; // 0x50 
    std::uint8_t _[0xc]; // 0x54 
    std::uint8_t _[0x4]; // 0x60 
    std::uint8_t _[0x1]; // 0x64 
    std::uint8_t _[0xb]; // 0x65 
    std::uint8_t _[0x8]; // 0x70 
    std::uint8_t _[0x4]; // 0x78 
    std::uint8_t _[0x4]; // 0x7c 
    std::uint8_t _[0x4]; // 0x80 
    std::uint8_t _[0x7c]; // 0x84 
    std::uint8_t _[0x10]; // 0x100 
    std::uint8_t _[0x8]; // 0x110 
};

struct CRandSimTimer {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
};

struct CBtNodeComposite {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x58]; // 0x0
};

struct CRelativeLocation {
    static constexpr std::size_t size = 0x38;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0xc]; // 0x1c 
    std::uint8_t _[0xc]; // 0x28 
    std::uint8_t _[0x4]; // 0x34 
};

struct HostagePathCost {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x30]; // 0x0
};

struct Extent {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0xc]; // 0xc 
};

struct sndopvarlatchdata_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0xc]; // 0x24 
};

struct PrecipitationFilter_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct IEconItemInterface {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct PathMoverEntitySpawn {
    static constexpr std::size_t size = 0x28;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x18]; // 0x8 
    std::uint8_t _[0x8]; // 0x20 
};

struct CMultiplayer_Expresser {
    static constexpr std::size_t size = 0xa8;
    std::uint8_t pad_0[0xa0]; // 0x0
    std::uint8_t _[0x8]; // 0xa0 
};

struct CNavVolume {
    static constexpr std::size_t size = 0x78;
    std::uint8_t pad_0[0x78]; // 0x0
};

struct QuestProgress {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct CExternalAnimGraphList {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x20]; // 0x0
};

struct CNmAimCSTask {
    static constexpr std::size_t size = 0x130;
    std::uint8_t pad_0[0x130]; // 0x0
};

struct ParticleIndex_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CAI_ExpresserWithFollowup {
    static constexpr std::size_t size = 0xa0;
    std::uint8_t pad_0[0xa0]; // 0x0
};

struct CTakeDamageSummaryScopeGuard {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x18]; // 0x8 
};

struct CIronSightController {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
};

struct INavPathCostAreaFilter {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct CNmEventConsumerSound {
    static constexpr std::size_t size = 0xb8;
    std::uint8_t pad_0[0xb8]; // 0x0
};

struct CNmEventConsumerLegacy {
    static constexpr std::size_t size = 0x3e8;
    std::uint8_t pad_0[0x3e8]; // 0x0
};

struct DestructiblePartDamageRequest_t {
    static constexpr std::size_t size = 0x3c;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0xc]; // 0x20 
    std::uint8_t _[0x10]; // 0x2c 
};

struct CInButtonState {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x18]; // 0x8 
};

struct SoundeventBoxHelperNetworked_t {
    static constexpr std::size_t size = 0x30;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0xc]; // 0xc 
    std::uint8_t _[0xc]; // 0x18 
    std::uint8_t _[0xc]; // 0x24 
};

struct CNetworkOriginCellCoordQuantizedVectorWS {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x2]; // 0x10 
    std::uint8_t _[0x2]; // 0x12 
    std::uint8_t _[0x2]; // 0x14 
    std::uint8_t _[0x2]; // 0x16 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x8]; // 0x28 
};

struct CNmEventConsumerParticle {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t pad_0[0xb0]; // 0x0
};

struct CNavHullVData {
    static constexpr std::size_t size = 0x3c;
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
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
};

struct CNmEventConsumerCamera {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t pad_0[0xb0]; // 0x0
};

struct AI_DefaultNPC_DebugSnapshotData_t {
    static constexpr std::size_t size = 0x80;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
    std::uint8_t _[0x18]; // 0x28 
    std::uint8_t _[0x28]; // 0x40 
    std::uint8_t _[0x18]; // 0x68 
};

struct CNavPathCost {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x1]; // 0x10 
    std::uint8_t _[0x1]; // 0x11 
    std::uint8_t _[0x2]; // 0x12 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x4]; // 0x18 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x1]; // 0x28 
    std::uint8_t _[0x1]; // 0x29 
    std::uint8_t _[0x2]; // 0x2a 
    std::uint8_t _[0x4]; // 0x2c 
};

struct CNmSnapWeaponNode__CDefinition {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x2]; // 0x18 
    std::uint8_t _[0x2]; // 0x1a 
    std::uint8_t _[0x4]; // 0x1c 
};

struct SoundOpvarTraceResult_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
};

struct ActorMapping_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
};

struct CNavVolumeCalculatedVector {
    static constexpr std::size_t size = 0xa0;
    std::uint8_t pad_0[0xa0]; // 0x0
};

struct CFiringModeInt {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x8]; // 0x0 
};

struct CBtNodeDecorator {
    static constexpr std::size_t size = 0x58;
    std::uint8_t pad_0[0x58]; // 0x0
};

struct CSAdditionalPerRoundStats_t {
    static constexpr std::size_t size = 0x110;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x1]; // 0x18 
    std::uint8_t _[0x3]; // 0x19 
    std::uint8_t _[0x4]; // 0x1c 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0xe8]; // 0x28 
};

struct CNmEventConsumerBodyGroup {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t pad_0[0xb0]; // 0x0
};

struct CEmptyGraphController {
    static constexpr std::size_t size = 0xc0;
    std::uint8_t pad_0[0xc0]; // 0x0
};

struct ModelConfigHandle_t {
    static constexpr std::size_t size = 0x4;
    std::uint8_t _[0x4]; // 0x0 
};

struct CEntitySubclassVDataBase {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x28]; // 0x0
};

struct CBreakableStageHelper {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0xc]; // 0xc 
};

struct CNavVolumeBreadthFirstSearch {
    static constexpr std::size_t size = 0xc0;
    std::uint8_t pad_0[0xa8]; // 0x0
    std::uint8_t _[0xc]; // 0xa8 
    std::uint8_t _[0xc]; // 0xb4 
};

struct dynpitchvol_t {
    static constexpr std::size_t size = 0x64;
    std::uint8_t pad_0[0x64]; // 0x0
};

struct CSAdditionalMatchStats_t {
    static constexpr std::size_t size = 0x140;
    std::uint8_t pad_0[0x110]; // 0x0
    std::uint8_t _[0x4]; // 0x110 
    std::uint8_t _[0x4]; // 0x114 
    std::uint8_t _[0x4]; // 0x118 
    std::uint8_t _[0x4]; // 0x11c 
    std::uint8_t _[0x4]; // 0x120 
    std::uint8_t _[0x4]; // 0x124 
    std::uint8_t _[0x4]; // 0x128 
    std::uint8_t _[0x4]; // 0x12c 
    std::uint8_t _[0x4]; // 0x130 
    std::uint8_t _[0x4]; // 0x134 
    std::uint8_t _[0x4]; // 0x138 
    std::uint8_t _[0x4]; // 0x13c 
};

struct AI_Navigator_DebugSnapshotData_t__Waypoint_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
};

struct CTestPulseIOComponent {
    static constexpr std::size_t size = 0x30;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x20]; // 0x10 
};

struct IRagdoll {
    static constexpr std::size_t size = 0x8;
    std::uint8_t pad_0[0x8]; // 0x0
};

struct CCSPlayerAnimationState {
    static constexpr std::size_t size = 0xe0;
    std::uint8_t pad_0[0x18]; // 0x0
    std::uint8_t _[0x1]; // 0x18 
    std::uint8_t _[0x1]; // 0x19 
    std::uint8_t _[0x1]; // 0x1a 
    std::uint8_t _[0x1]; // 0x1b 
    std::uint8_t _[0x1]; // 0x1c 
    std::uint8_t _[0x3]; // 0x1d 
    std::uint8_t _[0x4]; // 0x20 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x4]; // 0x30 
    std::uint8_t _[0x4]; // 0x34 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0x4]; // 0x3c 
    std::uint8_t _[0x4]; // 0x40 
    std::uint8_t _[0x9c]; // 0x44 
};

struct hudtextparms_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x1]; // 0x8 
    std::uint8_t _[0x3]; // 0x9 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
};

struct QueuedAISearchId_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x8]; // 0x0 
};

struct CAnimGraphControllerBase {
    static constexpr std::size_t size = 0xc0;
    std::uint8_t pad_0[0x4c]; // 0x0
    std::uint8_t _[0x74]; // 0x4c 
};

struct CNetworkVelocityVector {
    static constexpr std::size_t size = 0x28;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x8]; // 0x10 
    std::uint8_t _[0x8]; // 0x18 
    std::uint8_t _[0x8]; // 0x20 
};

struct CDestructiblePart_DamageLevel {
    static constexpr std::size_t size = 0x48;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x10]; // 0x14 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x4]; // 0x38 
    std::uint8_t _[0xc]; // 0x3c 
};

struct CNavVolumeAll {
    static constexpr std::size_t size = 0xa0;
    std::uint8_t pad_0[0xa0]; // 0x0
};

struct CNavVolumeSphere {
    static constexpr std::size_t size = 0x88;
    std::uint8_t pad_0[0x78]; // 0x0
    std::uint8_t _[0xc]; // 0x78 
    std::uint8_t _[0x4]; // 0x84 
};

struct Relationship_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

} // namespace